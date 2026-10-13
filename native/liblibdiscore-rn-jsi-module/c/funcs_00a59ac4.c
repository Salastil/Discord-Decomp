// ===== 00a59ac4  <std::thread::local::AccessError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::thread::local::AccessError as core::fmt::Display>::fmt */

void __rustcall
<std::thread::local::AccessError_as_core::fmt::Display>::fmt(undefined8 param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt(&DAT_0038353b,0x11,param_2);
  return;
}


// ===== 00a59ad8  <std::thread::thread::Thread_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::thread::thread::Thread as core::fmt::Debug>::fmt */

void __rustcall
<std::thread::thread::Thread_as_core::fmt::Debug>::fmt(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long extraout_x9;
  long lVar2;
  undefined1 auStack_40 [16];
  undefined *local_30;
  long lStack_28;
  undefined8 local_8;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_40,param_2,&DAT_0038354c,6);
  lVar2 = *param_1;
  local_8 = *(undefined8 *)(lVar2 + 0x10);
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (auStack_40,&DAT_00383552,2,&local_8,&DAT_00afbd00);
  if (*(undefined **)(lVar2 + 0x18) == (undefined *)0x0) {
    local_30 = DAT_00b108b8;
    lStack_28 = extraout_x9;
    if (DAT_00b108b8 != (undefined *)0x0) {
      local_30 = &UNK_002bd108;
      lStack_28 = 4;
      if (DAT_00b108b8 != *(undefined **)(lVar2 + 0x10)) {
        local_30 = (undefined *)0x0;
      }
    }
  }
  else {
    lStack_28 = *(long *)(lVar2 + 0x20) + -1;
    local_30 = *(undefined **)(lVar2 + 0x18);
  }
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (uVar1,&DAT_002bd1cc,4,&local_30,&DAT_00afbd20);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish_non_exhaustive();
  return;
}


// ===== 00a59ba4  FUN_00a59ba4 =====

void FUN_00a59ba4(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong __n;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  
  uVar1 = param_2[2];
  uVar8 = param_2[3];
  uVar4 = 0;
  if ((uVar1 <= uVar8) && (uVar5 = param_2[1], uVar8 <= uVar5)) {
    __n = (ulong)*(byte *)(param_2 + 5);
    lVar6 = *param_2;
    uVar7 = __n - 1;
    if (__n < 5) {
      while( true ) {
        auVar9 = core::slice::memchr::memrchr
                           (*(undefined1 *)((long)param_2 + __n + 0x1f),lVar6 + uVar1,uVar8 - uVar1)
        ;
        if (auVar9._0_8_ != 1) goto LAB_00a59cc4;
        uVar8 = auVar9._8_8_ + uVar1;
        uVar2 = uVar8 - uVar7;
        if (((uVar7 <= uVar8) && (!CARRY8(uVar2,__n))) &&
           ((uVar2 + __n <= uVar5 &&
            (iVar3 = memcmp((void *)(lVar6 + uVar2),param_2 + 4,__n), iVar3 == 0)))) break;
        uVar4 = 0;
        param_2[3] = uVar8;
        if ((uVar8 < uVar1) || (uVar5 < uVar8)) goto LAB_00a59ccc;
      }
      uVar4 = 1;
      param_2[3] = uVar2;
      param_1[1] = uVar2;
      param_1[2] = uVar2 + __n;
    }
    else {
      do {
        auVar9 = core::slice::memchr::memrchr
                           (*(undefined1 *)((long)param_2 + __n + 0x1f),lVar6 + uVar1,uVar8 - uVar1)
        ;
        if (auVar9._0_8_ != 1) goto LAB_00a59cc4;
        uVar8 = auVar9._8_8_ + uVar1;
        if (((uVar7 <= uVar8) && (!CARRY8(uVar8 - uVar7,__n))) && ((uVar8 - uVar7) + __n <= uVar5))
        {
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (0,__n,4,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afbd40);
        }
        uVar4 = 0;
        param_2[3] = uVar8;
      } while ((uVar1 <= uVar8) && (uVar8 <= uVar5));
    }
  }
LAB_00a59ccc:
  *param_1 = uVar4;
  return;
LAB_00a59cc4:
  uVar4 = 0;
  param_2[3] = uVar1;
  goto LAB_00a59ccc;
}


// ===== 00a59d0c  <std::io::stdio::Stdin_as_std::os::unix::io::StdioExt>::take_fd =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::Stdin as std::os::unix::io::StdioExt>::take_fd */

void __rustcall
<std::io::stdio::Stdin_as_std::os::unix::io::StdioExt>::take_fd
          (undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  uint uVar5;
  ulong uVar6;
  int *piVar7;
  
  piVar7 = (int *)*param_2;
  do {
    if (*piVar7 != 0) {
      ClearExclusiveLocal();
      <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended(piVar7);
      uVar6 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      goto joined_r0x00a59de0;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
    if (bVar3) {
      *piVar7 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar6 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
  puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
joined_r0x00a59de0:
  PTR_GLOBAL_PANIC_COUNT_00b00bf0 = (undefined *)puVar4;
  if ((uVar6 & 0x7fffffffffffffff) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = std::panicking::panic_count::is_zero_slow_path(param_1);
    uVar5 = uVar5 ^ 1;
  }
                    /* try { // try from 00a59d50 to 00a59d53 has its CatchHandler @ 00a59df8 */
  <std::io::stdio::StdinLock_as_std::os::unix::io::StdioExt>::take_fd(param_1);
  if ((((uVar5 & 1) == 0) && ((*puVar4 & 0x7fffffffffffffff) != 0)) &&
     (uVar6 = std::panicking::panic_count::is_zero_slow_path(), (uVar6 & 1) == 0)) {
    *(undefined1 *)(piVar7 + 1) = 1;
  }
  do {
    iVar1 = *piVar7;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
    if (bVar3) {
      *piVar7 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 == 2) {
    syscall(0x62,piVar7,0x81,1);
    return;
  }
  return;
}


// ===== 00a59e14  <std::process::ExitStatusError_as_std::os::unix::process::ExitStatusExt>::from_raw =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::process::ExitStatusError as std::os::unix::process::ExitStatusExt>::from_raw */

void __rustcall
<std::process::ExitStatusError_as_std::os::unix::process::ExitStatusExt>::from_raw(int param_1)

{
  undefined1 uStack_11;
  
  if (param_1 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::result::unwrap_failed
            (&DAT_00383554,0x48,&uStack_11,&DAT_00afae98,
             &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afbd58);
}


// ===== 00a59e4c  <std::sys::env::common::Env_as_core::iter::traits::iterator::Iterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::env::common::Env as core::iter::traits::iterator::Iterator>::next */

void __rustcall
<std::sys::env::common::Env_as_core::iter::traits::iterator::Iterator>::next
          (undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = *(undefined8 **)(param_2 + 8);
  if (puVar1 != *(undefined8 **)(param_2 + 0x18)) {
    uVar3 = puVar1[1];
    uVar2 = *puVar1;
    uVar5 = puVar1[3];
    uVar4 = puVar1[2];
    uVar7 = puVar1[5];
    uVar6 = puVar1[4];
    *(undefined8 **)(param_2 + 8) = puVar1 + 6;
    param_1[1] = uVar3;
    *param_1 = uVar2;
    param_1[3] = uVar5;
    param_1[2] = uVar4;
    param_1[5] = uVar7;
    param_1[4] = uVar6;
    return;
  }
  *param_1 = 0xffffffffffffffff;
  return;
}


// ===== 00a59e84  <std::sys::env::common::Env_as_core::iter::traits::iterator::Iterator>::size_hint =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::env::common::Env as core::iter::traits::iterator::Iterator>::size_hint */

void __rustcall
<std::sys::env::common::Env_as_core::iter::traits::iterator::Iterator>::size_hint
          (long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = ((ulong)(*(long *)(param_2 + 0x18) - *(long *)(param_2 + 8)) >> 4) * -0x5555555555555555;
  *param_1 = lVar1;
  param_1[1] = 1;
  param_1[2] = lVar1;
  return;
}


// ===== 00a59eb0  <std::sys::process::env::CommandEnvs_as_core::iter::traits::iterator::Iterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::process::env::CommandEnvs as core::iter::traits::iterator::Iterator>::next */

void __rustcall
<std::sys::process::env::CommandEnvs_as_core::iter::traits::iterator::Iterator>::next
          (undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  
  auVar7 = FUN_00a67564();
  plVar6 = auVar7._8_8_;
  lVar5 = auVar7._0_8_;
  if (lVar5 != 0) {
    lVar1 = *plVar6;
    lVar3 = plVar6[1];
    uVar2 = *(undefined8 *)(lVar5 + 8);
    uVar4 = *(undefined8 *)(lVar5 + 0x10);
    param_1[3] = plVar6[2];
    lVar5 = 0;
    if (lVar1 != -1) {
      lVar5 = lVar3;
    }
    param_1[1] = uVar4;
    param_1[2] = lVar5;
    *param_1 = uVar2;
    return;
  }
  *param_1 = 0;
  return;
}


// ===== 00a59f04  <std::backtrace_rs::symbolize::gimli::mmap::Mmap_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::backtrace_rs::symbolize::gimli::mmap::Mmap as core::ops::drop::Drop>::drop */

int __rustcall
<std::backtrace_rs::symbolize::gimli::mmap::Mmap_as_core::ops::drop::Drop>::drop
          (undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = munmap((void *)*param_1,param_1[1]);
  return iVar1;
}


// ===== 00a59f10  <std::os::unix::net::addr::SocketAddr_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::os::unix::net::addr::SocketAddr as core::fmt::Debug>::fmt */

void __rustcall
<std::os::unix::net::addr::SocketAddr_as_core::fmt::Debug>::fmt(uint *param_1,undefined8 *param_2)

{
  ulong uVar1;
  char *local_30;
  ulong uStack_28;
  undefined1 *local_20;
  code *pcStack_18;
  
  local_20 = (undefined1 *)&local_30;
  local_30 = (char *)((long)param_1 + 6);
  uStack_28 = (ulong)*param_1;
  uVar1 = uStack_28 - 2;
  if (uVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00a59f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2[1] + 0x18))(*param_2,&UNK_0038359c,9);
    return;
  }
  if (*local_30 != '\0') {
    uStack_28 = uStack_28 - 3;
    if (uStack_28 < 0x6d) {
      pcStack_18 = (code *)PTR_fmt_00b01378;
      local_20 = (undefined1 *)&local_30;
      core::fmt::write(*param_2,param_2[1],&DAT_002a6e6a,&local_20);
      return;
    }
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (0,uStack_28,0x6c,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afaf60);
  }
  if (uVar1 < 0x6d) {
    local_30 = (char *)((long)param_1 + 7);
    uStack_28 = uStack_28 - 3;
    pcStack_18 = FUN_00a5b62c;
    core::fmt::write(*param_2,param_2[1],&DAT_002b5863,&local_20);
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (1,uVar1,0x6c,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afaf48);
}


// ===== 00a5a008  <std::os::unix::net::stream::UnixStream_as_alloc::io::read::Read>::read_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::os::unix::net::stream::UnixStream as alloc::io::read::Read>::read_vectored */

undefined1  [16] __rustcall
<std::os::unix::net::stream::UnixStream_as_alloc::io::read::Read>::read_vectored
          (int *param_1,iovec *param_2,ulong param_3)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (0x3ff < param_3) {
    param_3 = 0x400;
  }
  sVar2 = readv(*param_1,param_2,(int)param_3);
  if (sVar2 != -1) {
    auVar4._1_7_ = 0;
    auVar4[0] = sVar2 == -1;
    auVar4._8_8_ = sVar2;
    return auVar4;
  }
  piVar3 = (int *)__errno(0xffffffffffffffff,0xffffffffffffffff);
  iVar1 = *piVar3;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 00a5a09c  <std::os::unix::net::stream::UnixStream_as_alloc::io::read::Read>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::os::unix::net::stream::UnixStream as alloc::io::read::Read>::read */

undefined1  [16] __rustcall
<std::os::unix::net::stream::UnixStream_as_alloc::io::read::Read>::read
          (int *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  int *piVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  uVar3 = recv(*param_1,param_2,param_3,0);
  if (uVar3 != 0xffffffffffffffff) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar3;
    return auVar2 << 0x40;
  }
  piVar4 = (int *)__errno();
  iVar1 = *piVar4;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00afaaf8) {
    auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
    auVar5._0_8_ = 1;
    return auVar5;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  auVar6._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar6._0_8_ = 1;
  return auVar6;
}


// ===== 00a5a130  <std::os::unix::net::stream::UnixStream_as_alloc::io::read::Read>::read_buf =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::os::unix::net::stream::UnixStream as alloc::io::read::Read>::read_buf */

ulong __rustcall
<std::os::unix::net::stream::UnixStream_as_alloc::io::read::Read>::read_buf
          (int *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  ssize_t sVar3;
  int *piVar4;
  
  lVar1 = param_2[2];
  sVar3 = recv(*param_1,(void *)(*param_2 + lVar1),param_2[1] - lVar1,0);
  if (sVar3 != -1) {
    param_2[2] = sVar3 + lVar1;
    return 0;
  }
  piVar4 = (int *)__errno();
  iVar2 = *piVar4;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00afaaf8) {
    return (long)iVar2 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  return (long)iVar2 << 0x20 | 2;
}


// ===== 00a5a1d8  <std::sys::process::unix::unix::ExitStatus_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::process::unix::unix::ExitStatus as core::fmt::Debug>::fmt */

void __rustcall
<std::sys::process::unix::unix::ExitStatus_as_core::fmt::Debug>::fmt
          (undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple(auStack_38,param_2,"unix_wait_status",0x10);
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::field
            (auStack_38,param_1,&DAT_00afb920);
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::finish();
  return;
}


// ===== 00a5a230  <std::sys::process::unix::common::cstring_array::CStringArray_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::process::unix::common::cstring_array::CStringArray as core::fmt::Debug>::fmt */

void __rustcall
<std::sys::process::unix::common::cstring_array::CStringArray_as_core::fmt::Debug>::fmt
          (long param_1,undefined8 param_2)

{
  size_t sVar1;
  long lVar2;
  char *__s;
  undefined8 *puVar3;
  undefined1 auStack_50 [16];
  char *local_40;
  long lStack_38;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_list(auStack_50,param_2);
  lVar2 = *(long *)(param_1 + 0x10) + -1;
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail(0,lVar2,0,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afb0f8)
    ;
  }
  if (lVar2 != 0) {
    lVar2 = lVar2 * 8;
    puVar3 = *(undefined8 **)(param_1 + 8);
    do {
      __s = (char *)*puVar3;
      if (__s == (char *)0x0) break;
      sVar1 = strlen(__s);
      lStack_38 = sVar1 + 1;
      local_40 = __s;
      <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry
                (auStack_50,&local_40,&DAT_00afa688);
      lVar2 = lVar2 + -8;
      puVar3 = puVar3 + 1;
    } while (lVar2 != 0);
  }
  <core::fmt::builders::[6]::core::fmt::builders::DebugList>::finish(auStack_50);
  return;
}


// ===== 00a5a2d4  <std::panicking::panic_handler::FormatStringPayload_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::panicking::panic_handler::FormatStringPayload as core::fmt::Display>::fmt */

void __rustcall
<std::panicking::panic_handler::FormatStringPayload_as_core::fmt::Display>::fmt
          (long *param_1,undefined8 *param_2)

{
  if (*param_1 != -1) {
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,param_1[1],param_1[2]);
    return;
  }
  core::fmt::write(*param_2,param_2[1],**(undefined8 **)param_1[3],(*(undefined8 **)param_1[3])[1]);
  return;
}


// ===== 00a5a304  <std::path::Path_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::path::Path as core::fmt::Debug>::fmt */

void __rustcall
<std::path::Path_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = param_1;
  uStack_18 = param_2;
  <core::str::lossy::Debug_as_core::fmt::Debug>::fmt(&local_20,param_3);
  return;
}


// ===== 00a5a32c  FUN_00a5a32c =====

void FUN_00a5a32c(long param_1,undefined8 param_2)

{
  undefined1 auStack_40 [24];
  long local_28;
  long local_8;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple(auStack_40,param_2,1,0);
  local_8 = param_1 + 8;
  local_28 = param_1;
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::field
            (auStack_40,&local_28,&DAT_00afbd90);
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::field
            (auStack_40,&local_8,&DAT_00afbdb0);
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::finish(auStack_40);
  return;
}


// ===== 00a5a3a0  FUN_00a5a3a0 =====

bool FUN_00a5a3a0(byte *param_1,byte *param_2)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  
  bVar2 = *param_1;
  bVar3 = *param_2;
  lVar5 = (ulong)bVar2 - 5;
  if (bVar2 < 6) {
    lVar5 = 0;
  }
  lVar1 = 0;
  if (5 < bVar3) {
    lVar1 = (ulong)bVar3 - 5;
  }
  if (lVar5 != lVar1) {
    return false;
  }
  if (lVar5 == 0) {
    if (5 < bVar3) {
      return true;
    }
    if (bVar2 != bVar3) {
      return false;
    }
    if (bVar2 < 3) {
      if (bVar2 != 0) {
        if (bVar2 != 1) {
LAB_00a5a4e8:
          return param_1[1] == param_2[1];
        }
        if (*(size_t *)(param_1 + 0x10) != *(size_t *)(param_2 + 0x10)) {
          return false;
        }
        iVar4 = memcmp(*(void **)(param_1 + 8),*(void **)(param_2 + 8),*(size_t *)(param_1 + 0x10));
joined_r0x00a5a4a4:
        if (iVar4 != 0) {
          return false;
        }
        if (*(size_t *)(param_1 + 0x20) != *(size_t *)(param_2 + 0x20)) {
          return false;
        }
        iVar4 = memcmp(*(void **)(param_1 + 0x18),*(void **)(param_2 + 0x18),
                       *(size_t *)(param_1 + 0x20));
        return iVar4 == 0;
      }
    }
    else if (bVar2 != 3) {
      if (bVar2 != 4) goto LAB_00a5a4e8;
      if (*(size_t *)(param_1 + 0x10) != *(size_t *)(param_2 + 0x10)) {
        return false;
      }
      iVar4 = memcmp(*(void **)(param_1 + 8),*(void **)(param_2 + 8),*(size_t *)(param_1 + 0x10));
      goto joined_r0x00a5a4a4;
    }
  }
  else if (lVar5 != 4) {
    return true;
  }
  if (*(size_t *)(param_1 + 0x10) != *(size_t *)(param_2 + 0x10)) {
    return false;
  }
  iVar4 = memcmp(*(void **)(param_1 + 8),*(void **)(param_2 + 8),*(size_t *)(param_1 + 0x10));
  return iVar4 == 0;
}


// ===== 00a5a504  <std::env::Vars_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::env::Vars as core::fmt::Debug>::fmt */

void __rustcall <std::env::Vars_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_30 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,&DAT_002bd27c,4);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (auStack_30,&DAT_003835d7,5,param_1,&PTR_FUN_00afbdf0);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 00a5a568  <std[17aff9129faa4dc5]::time::Instant_as_core[bcece726f298455b]::ops::arith::Sub<core[bcece726f298455b]::time::Duration>>::sub =====

/* <std[17aff9129faa4dc5]::time::Instant as
   core[bcece726f298455b]::ops::arith::Sub<core[bcece726f298455b]::time::Duration>>::sub */

undefined1  [16]
<std[17aff9129faa4dc5]::time::Instant_as_core[bcece726f298455b]::ops::arith::Sub<core[bcece726f298455b]::time::Duration>>
::sub(long param_1,int param_2,long param_3,int param_4,undefined8 param_5)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  lVar1 = param_1 - param_3;
  if (param_3 < 0 == SBORROW8(param_1,param_3)) {
    param_2 = param_2 - param_4;
    if (-1 < param_2) {
      auVar2._8_4_ = param_2;
      auVar2._0_8_ = lVar1;
      auVar2._12_4_ = 0;
      return auVar2;
    }
    if (!SBORROW8(lVar1,1)) {
      auVar3._8_4_ = param_2 + 1000000000;
      auVar3._0_8_ = lVar1 + -1;
      auVar3._12_4_ = 0;
      return auVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed(&DAT_003835dc,0x2f,param_5);
}


// ===== 00a5a5c0  <std::process::Child_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::process::Child as core::fmt::Debug>::fmt */

void __rustcall <std::process::Child_as_core::fmt::Debug>::fmt(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_30 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,&DAT_0038360b,5);
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (auStack_30,&DAT_00383610,5,param_1 + 0xc,&PTR_FUN_00afbe10);
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (uVar1,"stdout",6,param_1 + 0x10,&PTR_FUN_00afbe30);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (uVar1,"stderr",6,param_1 + 0x14,&PTR_FUN_00afbe50);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish_non_exhaustive();
  return;
}


// ===== 00a5a65c  <std::backtrace::BytesOrWide_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::backtrace::BytesOrWide as core::fmt::Debug>::fmt */

ulong __rustcall
<std::backtrace::BytesOrWide_as_core::fmt::Debug>::fmt(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  void *local_50;
  undefined1 local_40;
  long local_38;
  
  local_68 = param_1[2];
  uStack_60 = param_1[3];
  local_70 = *param_1;
  std::env::current_dir(&local_58);
  plVar1 = (long *)0x0;
  if (local_58 != -1) {
    plVar1 = &local_58;
  }
                    /* try { // try from 00a5a69c to 00a5a6ab has its CatchHandler @ 00a5a734 */
  uVar2 = FUN_00a4eb58(param_2,&local_70,0,plVar1);
  if (local_58 == -1) {
    if ((1 < ((ulong)local_50 & 3) - 2) && (((ulong)local_50 & 3) != 0)) {
      local_38 = (long)local_50 + -1;
      local_40 = 3;
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_38);
      return uVar2 & 0xffffffff;
    }
  }
  else if (local_58 != 0) {
    uVar2 = uVar2 & 0xffffffff;
    free(local_50);
  }
  return uVar2;
}


// ===== 00a5a750  <&std::net::tcp::TcpStream_as_alloc::io::read::Read>::read_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::net::tcp::TcpStream as alloc::io::read::Read>::read_vectored */

undefined1  [16] __rustcall
<&std::net::tcp::TcpStream_as_alloc::io::read::Read>::read_vectored
          (undefined8 *param_1,iovec *param_2,ulong param_3)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (0x3ff < param_3) {
    param_3 = 0x400;
  }
  sVar2 = readv(*(int *)*param_1,param_2,(int)param_3);
  if (sVar2 != -1) {
    auVar4._1_7_ = 0;
    auVar4[0] = sVar2 == -1;
    auVar4._8_8_ = sVar2;
    return auVar4;
  }
  piVar3 = (int *)__errno(0xffffffffffffffff,0xffffffffffffffff);
  iVar1 = *piVar3;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 00a5a7e8  <&std::net::tcp::TcpStream_as_alloc::io::read::Read>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::net::tcp::TcpStream as alloc::io::read::Read>::read */

undefined1  [16] __rustcall
<&std::net::tcp::TcpStream_as_alloc::io::read::Read>::read
          (undefined8 *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  int *piVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  uVar3 = recv(*(int *)*param_1,param_2,param_3,0);
  if (uVar3 != 0xffffffffffffffff) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar3;
    return auVar2 << 0x40;
  }
  piVar4 = (int *)__errno();
  iVar1 = *piVar4;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00afaaf8) {
    auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
    auVar5._0_8_ = 1;
    return auVar5;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  auVar6._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar6._0_8_ = 1;
  return auVar6;
}


// ===== 00a5a880  <&std::net::tcp::TcpStream_as_alloc::io::read::Read>::read_buf =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::net::tcp::TcpStream as alloc::io::read::Read>::read_buf */

ulong __rustcall
<&std::net::tcp::TcpStream_as_alloc::io::read::Read>::read_buf(undefined8 *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  ssize_t sVar3;
  int *piVar4;
  
  lVar1 = param_2[2];
  sVar3 = recv(*(int *)*param_1,(void *)(*param_2 + lVar1),param_2[1] - lVar1,0);
  if (sVar3 != -1) {
    param_2[2] = sVar3 + lVar1;
    return 0;
  }
  piVar4 = (int *)__errno();
  iVar2 = *piVar4;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00afaaf8) {
    return (long)iVar2 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  return (long)iVar2 << 0x20 | 2;
}


// ===== 00a5a92c  <std::sync::once::Once_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sync::once::Once as core::fmt::Debug>::fmt */

void __rustcall
<std::sync::once::Once_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,"OnceUnix",4);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish_non_exhaustive(auStack_20);
  return;
}


// ===== 00a5a964  <std::sync::barrier::BarrierWaitResult_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sync::barrier::BarrierWaitResult as core::fmt::Debug>::fmt */

void __rustcall
<std::sync::barrier::BarrierWaitResult_as_core::fmt::Debug>::fmt
          (undefined1 *param_1,undefined8 param_2)

{
  undefined1 auStack_30 [16];
  undefined1 local_4 [4];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,&DAT_00383615,0x11);
  local_4[0] = *param_1;
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (auStack_30,&DAT_00383626,9,local_4,&DAT_00afb940);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 00a5a9d0  <std::backtrace_rs::backtrace::libunwind::Frame_as_core::clone::Clone>::clone =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::backtrace_rs::backtrace::libunwind::Frame as core::clone::Clone>::clone */

void __rustcall
<std::backtrace_rs::backtrace::libunwind::Frame_as_core::clone::Clone>::clone
          (undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_2[1];
  if (*param_2 == 1) {
    lVar3 = param_2[2];
    lVar4 = param_2[3];
    lVar2 = lVar1;
  }
  else {
    lVar2 = FUN_00ab2734(lVar1);
    lVar3 = FUN_00ab6430(lVar1);
    FUN_00ab2734(lVar1);
    lVar4 = FUN_00ab6340();
  }
  param_1[2] = lVar3;
  param_1[3] = lVar4;
  *param_1 = 1;
  param_1[1] = lVar2;
  return;
}


// ===== 00a5aa3c  <std::io::stdio::StdinLock_as_std::os::unix::io::StdioExt>::take_fd =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StdinLock as std::os::unix::io::StdioExt>::take_fd */

ulong __rustcall
<std::io::stdio::StdinLock_as_std::os::unix::io::StdioExt>::take_fd(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 local_200;
  undefined8 uStack_1f8;
  int local_1e8;
  int local_1e4;
  undefined **local_1e0;
  undefined8 local_1d8;
  undefined2 local_1d0;
  long local_58;
  undefined8 local_50;
  
  local_200 = 0x1b600000000;
  uStack_1f8 = 0x101;
  local_1d0 = 0x6c;
  local_1d8 = DAT_00382dcc;
  uVar4 = <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul
                    (&local_58,&local_1d8,10);
  if (local_58 == 1) {
    local_1e0 = &PTR_DAT_00afab10;
  }
  else {
    uVar4 = FUN_00a4725c(&local_1e8,local_50,&local_200);
    if (local_1e8 != 1) {
      iVar1 = fcntl(0,0x406,3);
      if (iVar1 == -1) {
        piVar5 = (int *)__errno();
        iVar1 = *piVar5;
        if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
          core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
        }
        *param_1 = 1;
        *(ulong *)(param_1 + 2) = (long)iVar1 << 0x20 | 2;
      }
      else {
        iVar2 = dup2(local_1e4,0);
        if (iVar2 != -1) {
          uVar3 = close(local_1e4);
          *param_1 = 0;
          param_1[1] = iVar1;
          return (ulong)uVar3;
        }
        piVar5 = (int *)__errno();
        iVar2 = *piVar5;
        if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
          core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
        }
        close(local_1e4);
        *(ulong *)(param_1 + 2) = (long)iVar2 << 0x20 | 2;
        *param_1 = 1;
        local_1e4 = iVar1;
      }
      uVar3 = close(local_1e4);
      return (ulong)uVar3;
    }
  }
  *(undefined ***)(param_1 + 2) = local_1e0;
  *param_1 = 1;
  return uVar4;
}


// ===== 00a5ac34  <std::process::Child_as_std::os::unix::process::ChildExt>::send_signal =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::process::Child as std::os::unix::process::ChildExt>::send_signal */

ulong __rustcall
<std::process::Child_as_std::os::unix::process::ChildExt>::send_signal(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  if (*param_1 != 0) {
    return 0;
  }
  iVar1 = kill(param_1[2],param_2);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00afaaf8) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 00a5acd0  <std::process::Child_as_std::os::unix::process::ChildExt>::kill_process_group =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::process::Child as std::os::unix::process::ChildExt>::kill_process_group */

ulong __rustcall
<std::process::Child_as_std::os::unix::process::ChildExt>::kill_process_group(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*param_1 != 0) {
    return 0;
  }
  iVar1 = killpg(param_1[2],9);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00afaaf8) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 00a5ad70  <std::process::Child_as_std::os::unix::process::ChildExt>::send_process_group_signal =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::process::Child as std::os::unix::process::ChildExt>::send_process_group_signal */

ulong __rustcall
<std::process::Child_as_std::os::unix::process::ChildExt>::send_process_group_signal
          (int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  if (*param_1 != 0) {
    return 0;
  }
  iVar1 = killpg(param_1[2],param_2);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00afaaf8) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 00a5ae0c  <std::sys::args::common::Args_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::args::common::Args as core::fmt::Debug>::fmt */

void __rustcall
<std::sys::args::common::Args_as_core::fmt::Debug>::fmt(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_40 [16];
  long local_18;
  
  lVar2 = *(long *)(param_1 + 8);
  lVar1 = *(long *)(param_1 + 0x18);
  <core::fmt::[a]::core::fmt::Formatter>::debug_list(auStack_40,param_2);
  for (; lVar1 != lVar2; lVar2 = lVar2 + 0x18) {
    local_18 = lVar2;
    <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry
              (auStack_40,&local_18,&DAT_00afa6c8);
  }
  <core::fmt::builders::[6]::core::fmt::builders::DebugList>::finish(auStack_40);
  return;
}


// ===== 00a5ae80  <std::sys::stdio::unix::Stdout_as_core::io::write::Write>::write_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::stdio::unix::Stdout as core::io::write::Write>::write_vectored */

undefined1  [16] __rustcall
<std::sys::stdio::unix::Stdout_as_core::io::write::Write>::write_vectored
          (undefined8 param_1,iovec *param_2,ulong param_3)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (0x3ff < param_3) {
    param_3 = 0x400;
  }
  sVar2 = writev(1,param_2,(int)param_3);
  if (sVar2 != -1) {
    auVar4._1_7_ = 0;
    auVar4[0] = sVar2 == -1;
    auVar4._8_8_ = sVar2;
    return auVar4;
  }
  piVar3 = (int *)__errno(0xffffffffffffffff,0xffffffffffffffff);
  iVar1 = *piVar3;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 00a5af14  <std::sys::stdio::unix::Stdout_as_core::io::write::Write>::write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::stdio::unix::Stdout as core::io::write::Write>::write */

undefined1  [16] __rustcall
<std::sys::stdio::unix::Stdout_as_core::io::write::Write>::write
          (undefined8 param_1,void *param_2,size_t param_3)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  sVar2 = ::write(1,param_2,param_3);
  if (sVar2 != -1) {
    auVar4._1_7_ = 0;
    auVar4[0] = sVar2 == -1;
    auVar4._8_8_ = sVar2;
    return auVar4;
  }
  piVar3 = (int *)__errno(0xffffffffffffffff,0xffffffffffffffff);
  iVar1 = *piVar3;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 00a5af9c  <std::path::PathBuf_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::path::PathBuf as core::fmt::Debug>::fmt */

void __rustcall <std::path::PathBuf_as_core::fmt::Debug>::fmt(long param_1)

{
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = *(undefined8 *)(param_1 + 8);
  uStack_18 = *(undefined8 *)(param_1 + 0x10);
  <core::str::lossy::Debug_as_core::fmt::Debug>::fmt(&local_20);
  return;
}


// ===== 00a5afc4  <std::sys::thread::unix::Thread_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::thread::unix::Thread as core::ops::drop::Drop>::drop */

int __rustcall <std::sys::thread::unix::Thread_as_core::ops::drop::Drop>::drop(pthread_t *param_1)

{
  int iVar1;
  
  iVar1 = pthread_detach(*param_1);
  return iVar1;
}


// ===== 00a5afcc  <&std::os::unix::net::stream::UnixStream_as_alloc::io::read::Read>::read_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::os::unix::net::stream::UnixStream as alloc::io::read::Read>::read_vectored */

undefined1  [16] __rustcall
<&std::os::unix::net::stream::UnixStream_as_alloc::io::read::Read>::read_vectored
          (undefined8 *param_1,iovec *param_2,ulong param_3)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (0x3ff < param_3) {
    param_3 = 0x400;
  }
  sVar2 = readv(*(int *)*param_1,param_2,(int)param_3);
  if (sVar2 != -1) {
    auVar4._1_7_ = 0;
    auVar4[0] = sVar2 == -1;
    auVar4._8_8_ = sVar2;
    return auVar4;
  }
  piVar3 = (int *)__errno(0xffffffffffffffff,0xffffffffffffffff);
  iVar1 = *piVar3;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 00a5b064  <&std::os::unix::net::stream::UnixStream_as_alloc::io::read::Read>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::os::unix::net::stream::UnixStream as alloc::io::read::Read>::read */

undefined1  [16] __rustcall
<&std::os::unix::net::stream::UnixStream_as_alloc::io::read::Read>::read
          (undefined8 *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  int *piVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  uVar3 = recv(*(int *)*param_1,param_2,param_3,0);
  if (uVar3 != 0xffffffffffffffff) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar3;
    return auVar2 << 0x40;
  }
  piVar4 = (int *)__errno();
  iVar1 = *piVar4;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00afaaf8) {
    auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
    auVar5._0_8_ = 1;
    return auVar5;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  auVar6._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar6._0_8_ = 1;
  return auVar6;
}


// ===== 00a5b0fc  <&std::os::unix::net::stream::UnixStream_as_alloc::io::read::Read>::read_buf =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::os::unix::net::stream::UnixStream as alloc::io::read::Read>::read_buf */

ulong __rustcall
<&std::os::unix::net::stream::UnixStream_as_alloc::io::read::Read>::read_buf
          (undefined8 *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  ssize_t sVar3;
  int *piVar4;
  
  lVar1 = param_2[2];
  sVar3 = recv(*(int *)*param_1,(void *)(*param_2 + lVar1),param_2[1] - lVar1,0);
  if (sVar3 != -1) {
    param_2[2] = sVar3 + lVar1;
    return 0;
  }
  piVar4 = (int *)__errno();
  iVar2 = *piVar4;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00afaaf8) {
    return (long)iVar2 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  return (long)iVar2 << 0x20 | 2;
}


// ===== 00a5b1a8  <std::os::unix::net::ancillary::ScmRights_as_core::iter::traits::iterator::Iterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::os::unix::net::ancillary::ScmRights as core::iter::traits::iterator::Iterator>::next */

undefined1  [16] __rustcall
<std::os::unix::net::ancillary::ScmRights_as_core::iter::traits::iterator::Iterator>::next
          (undefined8 *param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  if (3 < (ulong)param_1[1]) {
    auVar2._12_4_ = 0;
    auVar2._8_4_ = *(uint *)*param_1;
    *param_1 = (uint *)*param_1 + 1;
    param_1[1] = param_1[1] - 4;
    auVar2._0_8_ = 1;
    return auVar2;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  return auVar1 << 0x40;
}


// ===== 00a5b1d0  FUN_00a5b1d0 =====

void FUN_00a5b1d0(void)

{
  return;
}


// ===== 00a5b1dc  FUN_00a5b1dc =====

undefined1  [16] FUN_00a5b1dc(undefined1 (*param_1) [16])

{
  return *param_1;
}


// ===== 00a5b1e8  <std::panicking::panic_handler::StaticStrPayload_as_core::panic::PanicPayload>::take_box =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::panicking::panic_handler::StaticStrPayload as core::panic::PanicPayload>::take_box */

void __rustcall
<std::panicking::panic_handler::StaticStrPayload_as_core::panic::PanicPayload>::take_box
          (undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar3 = (undefined8 *)FUN_004b25a4(0x10,8);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = uVar1;
    puVar3[1] = uVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x10);
}


// ===== 00a5b230  <std::path::Display_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::path::Display as core::fmt::Debug>::fmt */

void __rustcall <std::path::Display_as_core::fmt::Debug>::fmt(undefined8 *param_1)

{
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = *param_1;
  uStack_18 = param_1[1];
  <core::str::lossy::Debug_as_core::fmt::Debug>::fmt(&local_20);
  return;
}


// ===== 00a5b258  FUN_00a5b258 =====

void FUN_00a5b258(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,&DAT_0038362f,10,&local_18,&DAT_00afbe70);
  return;
}


// ===== 00a5b298  <std::path::Display_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::path::Display as core::fmt::Display>::fmt */

void __rustcall
<std::path::Display_as_core::fmt::Display>::fmt(undefined8 *param_1,undefined8 param_2)

{
  <core::bstr::ByteStr_as_core::fmt::Display>::fmt(*param_1,param_1[1],param_2);
  return;
}


// ===== 00a5b2ac  FUN_00a5b2ac =====

void FUN_00a5b2ac(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = *param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_list(auStack_38,param_2);
  local_28 = lVar1;
  <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry
            (auStack_38,&local_28,&DAT_00afa708);
  local_28 = lVar1 + 1;
  <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry
            (auStack_38,&local_28,&DAT_00afa708);
  local_28 = lVar1 + 2;
  <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry
            (auStack_38,&local_28,&DAT_00afa708);
  local_28 = lVar1 + 3;
  <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry
            (auStack_38,&local_28,&DAT_00afa708);
  <core::fmt::builders::[6]::core::fmt::builders::DebugList>::finish(auStack_38);
  return;
}


// ===== 00a5b348  FUN_00a5b348 =====

void FUN_00a5b348(undefined8 *param_1,undefined8 param_2)

{
  long *local_18;
  
  local_18 = (long *)*param_1;
  if (*local_18 != -1) {
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002bd0bc,4,&local_18,&DAT_00afa6c8);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd198,4);
  return;
}


// ===== 00a5b3a4  FUN_00a5b3a4 =====

void FUN_00a5b3a4(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_40 [16];
  long local_18;
  
  lVar1 = *(long *)(*param_1 + 8);
  lVar2 = *(long *)(*param_1 + 0x10);
  <core::fmt::[a]::core::fmt::Formatter>::debug_list(auStack_40,param_2);
  lVar3 = local_18;
  for (; local_18 = lVar1, lVar2 != 0; lVar2 = lVar2 + -1) {
    lVar1 = local_18 + 1;
    <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry
              (auStack_40,&local_18,&DAT_00afa708);
    lVar3 = local_18;
  }
  local_18 = lVar3;
  <core::fmt::builders::[6]::core::fmt::builders::DebugList>::finish(auStack_40);
  return;
}


// ===== 00a5b414  FUN_00a5b414 =====

void FUN_00a5b414(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_40 [16];
  long local_18;
  
  lVar1 = *(long *)*param_1;
  lVar2 = ((long *)*param_1)[1];
  <core::fmt::[a]::core::fmt::Formatter>::debug_list(auStack_40,param_2);
  if (lVar2 != 0) {
    lVar2 = lVar2 << 2;
    do {
      local_18 = lVar1;
      <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry
                (auStack_40,&local_18,&DAT_00afa728);
      lVar2 = lVar2 + -4;
      lVar1 = lVar1 + 4;
    } while (lVar2 != 0);
  }
  <core::fmt::builders::[6]::core::fmt::builders::DebugList>::finish(auStack_40);
  return;
}


// ===== 00a5b488  FUN_00a5b488 =====

void FUN_00a5b488(undefined8 *param_1,long param_2)

{
  undefined8 local_18;
  
  local_18 = *(undefined8 *)*param_1;
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <usize_as_core::fmt::LowerHex>::fmt(&local_18);
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <usize_as_core::fmt::Display>::fmt();
    return;
  }
  <usize_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 00a5b4e0  FUN_00a5b4e0 =====

void FUN_00a5b4e0(undefined8 *param_1,undefined8 param_2)

{
  ushort *puVar1;
  ulong uVar2;
  long *plVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  uint *puVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  undefined1 auStack_60 [16];
  long *local_50;
  long *plStack_48;
  
  puVar7 = (uint *)*param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_list(auStack_60,param_2);
  lVar8 = *(long *)(puVar7 + 0x10);
  if (lVar8 != 0) {
    plVar3 = *(long **)(puVar7 + 4);
    uVar4 = *puVar7;
    uVar2 = *(ulong *)(puVar7 + 6);
    plVar5 = *(long **)(puVar7 + 2);
    do {
      if ((uVar4 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        core::option::unwrap_failed(&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afc6e8);
      }
      if (plVar5 == (long *)0x0) {
        for (; plVar5 = plVar3, uVar2 != 0; uVar2 = uVar2 - 1) {
          plVar3 = (long *)plVar5[0x44];
        }
        plVar3 = (long *)0x0;
        uVar2 = 0;
        plVar9 = plVar5;
        if (*(short *)((long)plVar5 + 0x21a) == 0) goto LAB_00a5b5a8;
      }
      else {
        plVar9 = plVar5;
        if (*(ushort *)((long)plVar5 + 0x21a) <= uVar2) {
LAB_00a5b5a8:
          do {
            plVar5 = (long *)*plVar9;
            if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              core::option::unwrap_failed(&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afac98);
            }
            puVar1 = (ushort *)(plVar9 + 0x43);
            uVar2 = (ulong)*puVar1;
            plVar3 = (long *)((long)plVar3 + 1);
            plVar9 = plVar5;
          } while (*(ushort *)((long)plVar5 + 0x21a) <= *puVar1);
        }
      }
      if (plVar3 == (long *)0x0) {
        uVar10 = uVar2 + 1;
        plVar9 = plVar5;
      }
      else {
        plVar6 = plVar5 + uVar2 + 0x45;
        do {
          plVar9 = (long *)*plVar6;
          plVar3 = (long *)((long)plVar3 + -1);
          plVar6 = plVar9 + 0x44;
        } while (plVar3 != (long *)0x0);
        uVar10 = 0;
      }
      lVar8 = lVar8 + -1;
      local_50 = plVar5 + uVar2 * 3 + 1;
      plStack_48 = plVar5 + uVar2 * 3 + 0x22;
      <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry
                (auStack_60,&local_50,&DAT_00afa748);
      plVar3 = (long *)0x0;
      uVar4 = 1;
      uVar2 = uVar10;
      plVar5 = plVar9;
    } while (lVar8 != 0);
  }
  <core::fmt::builders::[6]::core::fmt::builders::DebugList>::finish(auStack_60);
  return;
}


// ===== 00a5b62c  FUN_00a5b62c =====

void FUN_00a5b62c(undefined8 *param_1,undefined8 param_2)

{
  <core::bstr::ByteStr_as_core::fmt::Debug>::fmt(*param_1,param_1[1],param_2);
  return;
}


// ===== 00a5b640  FUN_00a5b640 =====

void FUN_00a5b640(long *param_1,undefined8 param_2)

{
  long local_18;
  
  local_18 = *param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field2_finish
            (param_2,&DAT_003835bf,0xf,&DAT_003835ce,3,local_18 + 0x28,&DAT_00afa6a8,&DAT_003835d1,6
             ,&local_18,&DAT_00afbdd0);
  return;
}


// ===== 00a5b6b0  FUN_00a5b6b0 =====

void FUN_00a5b6b0(undefined8 *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined *puVar2;
  byte *pbVar3;
  byte *local_18;
  
  pbVar3 = (byte *)*param_1;
  bVar1 = *pbVar3;
  if (bVar1 < 3) {
    if (bVar1 != 0) {
      if (bVar1 == 1) {
        local_18 = pbVar3 + 0x18;
        <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field2_finish
                  (param_2,&DAT_003835a5,0xb,pbVar3 + 8,&DAT_00afa6a8,&local_18,&DAT_00afbd70);
        return;
      }
      local_18 = pbVar3 + 1;
      <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
                (param_2,&DAT_003835b0,0xc,&local_18,&DAT_00afa708);
      return;
    }
    puVar2 = &DAT_002a18d8;
  }
  else {
    if (bVar1 != 3) {
      if (bVar1 == 4) {
        local_18 = pbVar3 + 0x18;
        <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field2_finish
                  (param_2,&DAT_003835bc,3,pbVar3 + 8,&DAT_00afa6a8,&local_18,&DAT_00afbd70);
        return;
      }
      local_18 = pbVar3 + 1;
      <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
                (param_2,&DAT_002bd068,4,&local_18,&DAT_00afa708);
      return;
    }
    puVar2 = &DAT_002a1b08;
  }
  local_18 = pbVar3 + 8;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,puVar2,8,&local_18,&DAT_00afbd70);
  return;
}


// ===== 00a5b804  FUN_00a5b804 =====

void FUN_00a5b804(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,&DAT_00383833,10);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish_non_exhaustive(auStack_20);
  return;
}


// ===== 00a5b83c  FUN_00a5b83c =====

void FUN_00a5b83c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,&DAT_003839a4,0xb);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish_non_exhaustive(auStack_20);
  return;
}


// ===== 00a5b874  FUN_00a5b874 =====

void FUN_00a5b874(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,&DAT_00383959,0xb);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish_non_exhaustive(auStack_20);
  return;
}


// ===== 00a5b8ac  FUN_00a5b8ac =====

void FUN_00a5b8ac(undefined8 *param_1)

{
  <std::backtrace::BytesOrWide_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 00a5b8b4  FUN_00a5b8b4 =====

void FUN_00a5b8b4(undefined8 *param_1)

{
  <std::backtrace::BacktraceSymbol_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 00a5b8bc  FUN_00a5b8bc =====

void FUN_00a5b8bc(undefined8 *param_1,undefined8 param_2)

{
  <core::ffi::c_str::CStr_as_core::fmt::Debug>::fmt(*param_1,param_1[1],param_2);
  return;
}


// ===== 00a5b8d0  FUN_00a5b8d0 =====

void FUN_00a5b8d0(undefined8 *param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,&DAT_00383ba8 + *(int *)(&DAT_00383ba8 + (ulong)*(byte *)*param_1 * 4),
             *(undefined8 *)(&DAT_00383b78 + (ulong)*(byte *)*param_1 * 8));
  return;
}


// ===== 00a5b8fc  FUN_00a5b8fc =====

void FUN_00a5b8fc(long *param_1)

{
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = *(undefined8 *)(*param_1 + 8);
  uStack_18 = *(undefined8 *)(*param_1 + 0x10);
  <core::str::lossy::Debug_as_core::fmt::Debug>::fmt(&local_20);
  return;
}


// ===== 00a5b928  FUN_00a5b928 =====

void FUN_00a5b928(undefined8 *param_1)

{
  <alloc::ffi::c_str::CString_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 00a5b930  FUN_00a5b930 =====

void FUN_00a5b930(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_30 [16];
  
  uVar1 = *param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,&DAT_003837df,10);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (auStack_30,&DAT_00382e9a,2,uVar1,&DAT_00afc030);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 00a5b990  FUN_00a5b990 =====

void FUN_00a5b990(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_30 [16];
  
  uVar1 = *param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,&DAT_0038383d,7);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (auStack_30,&DAT_00382e9a,2,uVar1,&DAT_00afc030);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 00a5b9f0  FUN_00a5b9f0 =====

void FUN_00a5b9f0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = *param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,&DAT_002a19b0,8,&local_18,&DAT_00afc1d8);
  return;
}


// ===== 00a5ba34  FUN_00a5ba34 =====

void FUN_00a5ba34(undefined8 *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_30 [16];
  undefined4 local_4;
  
  puVar1 = (undefined4 *)*param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,&DAT_00383881,0xf);
  local_4 = *puVar1;
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (auStack_30,&DAT_002bd244,4,&local_4,&DAT_00afc1f8);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 00a5ba9c  FUN_00a5ba9c =====

void FUN_00a5ba9c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple(auStack_38,param_2,"unix_wait_status",0x10);
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::field(auStack_38,uVar1,&DAT_00afb920)
  ;
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::finish();
  return;
}


// ===== 00a5baf0  FUN_00a5baf0 =====

void FUN_00a5baf0(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  int *local_18;
  
  local_18 = (int *)*param_1 + 1;
  iVar1 = *(int *)*param_1;
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_0038399b,7);
      return;
    }
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"NullX448",4);
    return;
  }
  if (iVar1 != 2) {
    if (iVar1 == 3) {
      <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
                (param_2,&DAT_003839a2,2,&local_18,&DAT_00afc460);
      return;
    }
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002a1b10,8,&local_18,&DAT_00afc480);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002a1328,8);
  return;
}


// ===== 00a5bbac  FUN_00a5bbac =====

void FUN_00a5bbac(undefined8 *param_1,undefined8 param_2)

{
  long *local_18;
  
  local_18 = *(long **)*param_1;
  if (*local_18 != -1) {
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002bd0bc,4,&local_18,&DAT_00afa6c8);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd198,4);
  return;
}


// ===== 00a5bc0c  FUN_00a5bc0c =====

void FUN_00a5bc0c(undefined8 *param_1)

{
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = *(undefined8 *)*param_1;
  uStack_18 = ((undefined8 *)*param_1)[1];
  <core::str::lossy::Debug_as_core::fmt::Debug>::fmt(&local_20);
  return;
}


// ===== 00a5bc38  FUN_00a5bc38 =====

void FUN_00a5bc38(undefined8 *param_1)

{
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = *(undefined8 *)(*(long *)*param_1 + 8);
  uStack_18 = *(undefined8 *)(*(long *)*param_1 + 0x10);
  <core::str::lossy::Debug_as_core::fmt::Debug>::fmt(&local_20);
  return;
}


// ===== 00a5bc68  FUN_00a5bc68 =====

void FUN_00a5bc68(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_40 [16];
  long local_18;
  
  lVar1 = *(long *)*param_1;
  lVar2 = ((long *)*param_1)[1];
  <core::fmt::[a]::core::fmt::Formatter>::debug_list(auStack_40,param_2);
  lVar3 = local_18;
  for (; local_18 = lVar1, lVar2 != 0; lVar2 = lVar2 + -1) {
    lVar1 = local_18 + 1;
    <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry
              (auStack_40,&local_18,&DAT_00afa708);
    lVar3 = local_18;
  }
  local_18 = lVar3;
  <core::fmt::builders::[6]::core::fmt::builders::DebugList>::finish(auStack_40);
  return;
}


// ===== 00a5bcd8  FUN_00a5bcd8 =====

void FUN_00a5bcd8(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Debug>::fmt(*(undefined8 *)*param_1,((undefined8 *)*param_1)[1],param_2);
  return;
}


// ===== 00a5bcec  FUN_00a5bcec =====

void FUN_00a5bcec(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_40 [24];
  long local_28;
  long local_8;
  
  lVar1 = *param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple(auStack_40,param_2,1,0);
  local_8 = lVar1 + 0x18;
  local_28 = lVar1;
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::field
            (auStack_40,&local_28,&DAT_00afa6c8);
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::field
            (auStack_40,&local_8,&DAT_00afa6c8);
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::finish(auStack_40);
  return;
}


// ===== 00a5bd60  FUN_00a5bd60 =====

void FUN_00a5bd60(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Debug>::fmt(*param_1,param_1[1],param_2);
  return;
}


// ===== 00a5bd74  FUN_00a5bd74 =====

void FUN_00a5bd74(undefined8 *param_1,long param_2)

{
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <u8_as_core::fmt::LowerHex>::fmt(*param_1);
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <u8_as_core::fmt::Display>::fmt();
    return;
  }
  <u8_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 00a5bd90  FUN_00a5bd90 =====

void FUN_00a5bd90(undefined8 *param_1,long param_2)

{
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <i32_as_core::fmt::LowerHex>::fmt(*param_1);
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <i32_as_core::fmt::Display>::fmt();
    return;
  }
  <i32_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 00a5bdac  FUN_00a5bdac =====

void FUN_00a5bdac(undefined8 *param_1,long param_2)

{
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <u32_as_core::fmt::LowerHex>::fmt(*param_1);
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <u32_as_core::fmt::Display>::fmt();
    return;
  }
  <u32_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 00a5bdc8  FUN_00a5bdc8 =====

void FUN_00a5bdc8(undefined8 *param_1,long param_2)

{
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <i16_as_core::fmt::LowerHex>::fmt(*param_1);
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <i16_as_core::fmt::Display>::fmt();
    return;
  }
  <i16_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 00a5bde4  FUN_00a5bde4 =====

void FUN_00a5bde4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 *local_40;
  code *pcStack_38;
  undefined8 *local_30;
  undefined *local_28;
  long lStack_20;
  undefined *local_18;
  
  local_40 = (undefined1 *)&local_50;
  param_1 = (undefined8 *)*param_1;
  pcStack_38 = FUN_00a5be48;
  local_30 = param_1 + 2;
  local_50 = *param_1;
  uStack_48 = param_1[1];
  local_18 = PTR_fmt_00b00c40;
  lStack_20 = (long)param_1 + 0x14;
  local_28 = PTR_fmt_00b00c40;
  core::fmt::write(*param_2,param_2[1],&DAT_002ba925,&local_40);
  return;
}


// ===== 00a5be48  FUN_00a5be48 =====

void FUN_00a5be48(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt(*param_1,param_1[1],param_2);
  return;
}


// ===== 00a5be5c  FUN_00a5be5c =====

void FUN_00a5be5c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a5be64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x18))(*param_1);
  return;
}


// ===== 00a5be68  <std::path::StripPrefixError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::path::StripPrefixError as core::fmt::Display>::fmt */

void __rustcall
<std::path::StripPrefixError_as_core::fmt::Display>::fmt(undefined8 param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt(&DAT_0029f280,0x10,param_2);
  return;
}


// ===== 00a5be7c  <std::path::NormalizeError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::path::NormalizeError as core::fmt::Display>::fmt */

void __rustcall
<std::path::NormalizeError_as_core::fmt::Display>::fmt(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_00383639,0x36);
  return;
}


// ===== 00a5be90  FUN_00a5be90 =====

void FUN_00a5be90(long *param_1,undefined8 param_2)

{
  ushort *puVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  undefined1 auStack_60 [16];
  long *local_50;
  long *local_48;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_map(auStack_60,param_2);
  plVar3 = (long *)*param_1;
  if ((plVar3 != (long *)0x0) && (lVar6 = param_1[2], lVar6 != 0)) {
    uVar2 = param_1[1];
    plVar4 = (long *)0x0;
    do {
      if (plVar4 == (long *)0x0) {
        for (; plVar4 = plVar3, uVar2 != 0; uVar2 = uVar2 - 1) {
          plVar3 = (long *)plVar4[0x44];
        }
        plVar3 = (long *)0x0;
        uVar2 = 0;
        plVar7 = plVar4;
        if (*(short *)((long)plVar4 + 0x21a) == 0) goto LAB_00a5bf68;
      }
      else {
        plVar7 = plVar4;
        if (*(ushort *)((long)plVar4 + 0x21a) <= uVar2) {
LAB_00a5bf68:
          do {
            plVar4 = (long *)*plVar7;
            if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              core::option::unwrap_failed(&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afac98);
            }
            puVar1 = (ushort *)(plVar7 + 0x43);
            uVar2 = (ulong)*puVar1;
            plVar3 = (long *)((long)plVar3 + 1);
            plVar7 = plVar4;
          } while (*(ushort *)((long)plVar4 + 0x21a) <= *puVar1);
        }
      }
      if (plVar3 == (long *)0x0) {
        uVar8 = uVar2 + 1;
        plVar7 = plVar4;
      }
      else {
        plVar5 = plVar4 + uVar2 + 0x45;
        do {
          plVar7 = (long *)*plVar5;
          plVar3 = (long *)((long)plVar3 + -1);
          plVar5 = plVar7 + 0x44;
        } while (plVar3 != (long *)0x0);
        uVar8 = 0;
      }
      lVar6 = lVar6 + -1;
      local_50 = plVar4 + uVar2 * 3 + 1;
      local_48 = plVar4 + uVar2 * 3 + 0x22;
      <core::fmt::builders::[7]::core::fmt::builders::DebugMap>::entry
                (auStack_60,&local_50,&DAT_00afa6c8,&local_48,&DAT_00afa768);
      plVar3 = (long *)0x0;
      uVar2 = uVar8;
      plVar4 = plVar7;
    } while (lVar6 != 0);
  }
  <core::fmt::builders::[7]::core::fmt::builders::DebugMap>::finish(auStack_60);
  return;
}


// ===== 00a5bfe0  FUN_00a5bfe0 =====

void FUN_00a5bfe0(byte *param_1,undefined8 param_2)

{
  long lVar1;
  byte *local_18;
  
  lVar1 = (ulong)*param_1 - 5;
  if (*param_1 < 6) {
    lVar1 = 0;
  }
  if (lVar1 < 2) {
    if (lVar1 == 0) {
      local_18 = param_1;
      <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
                (param_2,&DAT_0038366f,6,&local_18,&DAT_00afbe90);
      return;
    }
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_00383675,7);
    return;
  }
  if (lVar1 == 2) {
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_0038367c,6);
    return;
  }
  if (lVar1 == 3) {
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_00383682,9);
    return;
  }
  local_18 = param_1 + 8;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,&DAT_0038368b,6,&local_18,&DAT_00afbd70);
  return;
}


// ===== 00a5c0c4  <std::env::VarsOs_as_core::iter::traits::iterator::Iterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::env::VarsOs as core::iter::traits::iterator::Iterator>::next */

void __rustcall
<std::env::VarsOs_as_core::iter::traits::iterator::Iterator>::next(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = *(undefined8 **)(param_2 + 8);
  if (puVar1 != *(undefined8 **)(param_2 + 0x18)) {
    uVar3 = puVar1[1];
    uVar2 = *puVar1;
    uVar5 = puVar1[3];
    uVar4 = puVar1[2];
    uVar7 = puVar1[5];
    uVar6 = puVar1[4];
    *(undefined8 **)(param_2 + 8) = puVar1 + 6;
    param_1[1] = uVar3;
    *param_1 = uVar2;
    param_1[3] = uVar5;
    param_1[2] = uVar4;
    param_1[5] = uVar7;
    param_1[4] = uVar6;
    return;
  }
  *param_1 = 0xffffffffffffffff;
  return;
}


// ===== 00a5c0fc  <std::env::VarsOs_as_core::iter::traits::iterator::Iterator>::size_hint =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::env::VarsOs as core::iter::traits::iterator::Iterator>::size_hint */

void __rustcall
<std::env::VarsOs_as_core::iter::traits::iterator::Iterator>::size_hint(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = ((ulong)(*(long *)(param_2 + 0x18) - *(long *)(param_2 + 8)) >> 4) * -0x5555555555555555;
  *param_1 = lVar1;
  param_1[1] = 1;
  param_1[2] = lVar1;
  return;
}


// ===== 00a5c128  <std[17aff9129faa4dc5]::time::Instant_as_core[bcece726f298455b]::ops::arith::SubAssign<core[bcece726f298455b]::time::Duration>>::sub_assign =====

/* <std[17aff9129faa4dc5]::time::Instant as
   core[bcece726f298455b]::ops::arith::SubAssign<core[bcece726f298455b]::time::Duration>>::sub_assign
    */

void <std[17aff9129faa4dc5]::time::Instant_as_core[bcece726f298455b]::ops::arith::SubAssign<core[bcece726f298455b]::time::Duration>>
     ::sub_assign(long *param_1,long param_2,int param_3)

{
  long lVar1;
  
  lVar1 = *param_1 - param_2;
  if (param_2 < 0 == SBORROW8(*param_1,param_2)) {
    param_3 = (int)param_1[1] - param_3;
    if (-1 < param_3) {
      *param_1 = lVar1;
      *(int *)(param_1 + 1) = param_3;
      return;
    }
    if (!SBORROW8(lVar1,1)) {
      *param_1 = lVar1 + -1;
      *(int *)(param_1 + 1) = param_3 + 1000000000;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed(&DAT_003835dc,0x2f,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afbeb0);
}


// ===== 00a5c19c  <std::process::ChildStdin_as_core::io::write::Write>::write_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::process::ChildStdin as core::io::write::Write>::write_vectored */

undefined1  [16] __rustcall
<std::process::ChildStdin_as_core::io::write::Write>::write_vectored
          (int *param_1,iovec *param_2,ulong param_3)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (0x3ff < param_3) {
    param_3 = 0x400;
  }
  sVar2 = writev(*param_1,param_2,(int)param_3);
  if (sVar2 != -1) {
    auVar4._1_7_ = 0;
    auVar4[0] = sVar2 == -1;
    auVar4._8_8_ = sVar2;
    return auVar4;
  }
  piVar3 = (int *)__errno(0xffffffffffffffff,0xffffffffffffffff);
  iVar1 = *piVar3;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 00a5c230  <std::process::ChildStdin_as_core::io::write::Write>::write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::process::ChildStdin as core::io::write::Write>::write */

undefined1  [16] __rustcall
<std::process::ChildStdin_as_core::io::write::Write>::write
          (int *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  sVar2 = ::write(*param_1,param_2,param_3);
  if (sVar2 != -1) {
    auVar4._1_7_ = 0;
    auVar4[0] = sVar2 == -1;
    auVar4._8_8_ = sVar2;
    return auVar4;
  }
  piVar3 = (int *)__errno(0xffffffffffffffff,0xffffffffffffffff);
  iVar1 = *piVar3;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 00a5c2b8  <std::backtrace_rs::symbolize::SymbolName_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::backtrace_rs::symbolize::SymbolName as core::fmt::Display>::fmt */

undefined8 __rustcall
<std::backtrace_rs::symbolize::SymbolName_as_core::fmt::Display>::fmt
          (long *param_1,undefined8 param_2)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long local_68;
  long local_60;
  byte local_58;
  byte local_57;
  undefined6 uStack_56;
  
  if (*param_1 != 2) {
    uVar4 = <rustc_demangle::Demangle_as_core::fmt::Display>::fmt(param_1,param_2);
    return uVar4;
  }
  if (param_1[9] != 0) {
    lVar6 = param_1[8];
    uVar5 = param_1[9];
    do {
      core::str::converts::from_utf8(&local_68,lVar6,uVar5);
      bVar2 = local_58;
      lVar1 = local_60;
      if (local_68 != 1) {
        uVar4 = <str_as_core::fmt::Display>::fmt
                          (local_60,CONCAT62(uStack_56,CONCAT11(local_57,local_58)),param_2);
        if ((int)uVar4 != 0) {
          return 1;
        }
        return uVar4;
      }
      uVar7 = (ulong)local_57;
      uVar3 = <str_as_core::fmt::Display>::fmt(&DAT_00382bea,3,param_2);
      if ((uVar3 & 1) != 0) {
        return 1;
      }
      if ((bVar2 & 1) == 0) {
        return 0;
      }
      uVar7 = lVar1 + uVar7;
      uVar3 = uVar5 - uVar7;
      if (uVar5 < uVar7) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (uVar7,uVar5,uVar5,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afb768);
      }
      lVar6 = lVar6 + uVar7;
      uVar5 = uVar3;
    } while (uVar3 != 0);
  }
  return 0;
}


// ===== 00a5c3bc  <std::io::stdio::Stdin_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::Stdin as core::fmt::Debug>::fmt */

void __rustcall
<std::io::stdio::Stdin_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,&DAT_00383691,5);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish_non_exhaustive(auStack_20);
  return;
}


// ===== 00a5c3f4  <&std::net::tcp::TcpStream_as_core::io::write::Write>::write_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::net::tcp::TcpStream as core::io::write::Write>::write_vectored */

undefined1  [16] __rustcall
<&std::net::tcp::TcpStream_as_core::io::write::Write>::write_vectored
          (undefined8 *param_1,iovec *param_2,ulong param_3)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (0x3ff < param_3) {
    param_3 = 0x400;
  }
  sVar2 = writev(*(int *)*param_1,param_2,(int)param_3);
  if (sVar2 != -1) {
    auVar4._1_7_ = 0;
    auVar4[0] = sVar2 == -1;
    auVar4._8_8_ = sVar2;
    return auVar4;
  }
  piVar3 = (int *)__errno(0xffffffffffffffff,0xffffffffffffffff);
  iVar1 = *piVar3;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 00a5c48c  <&std::os::unix::net::stream::UnixStream_as_core::io::write::Write>::write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::os::unix::net::stream::UnixStream as core::io::write::Write>::write */

undefined1  [16] __rustcall
<&std::os::unix::net::stream::UnixStream_as_core::io::write::Write>::write
          (undefined8 *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  sVar2 = send(*(int *)*param_1,param_2,param_3,0x4000);
  if (sVar2 != -1) {
    auVar4._1_7_ = 0;
    auVar4[0] = sVar2 == -1;
    auVar4._8_8_ = sVar2;
    return auVar4;
  }
  piVar3 = (int *)__errno(0xffffffffffffffff,0xffffffffffffffff);
  iVar1 = *piVar3;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 00a5c51c  <std::net::udp::UdpSocket_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::net::udp::UdpSocket as core::fmt::Debug>::fmt */

void __rustcall <std::net::udp::UdpSocket_as_core::fmt::Debug>::fmt(void)

{
  (*(code *)PTR_fmt_00b07878)();
  return;
}


// ===== 00a5c520  <std::thread::scoped::Scope_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::thread::scoped::Scope as core::fmt::Debug>::fmt */

void __rustcall
<std::thread::scoped::Scope_as_core::fmt::Debug>::fmt(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_38 [16];
  undefined8 local_28;
  undefined1 local_4 [4];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_38,param_2,&DAT_00383696,5);
  lVar2 = *param_1;
  local_28 = *(undefined8 *)(lVar2 + 0x18);
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (auStack_38,&DAT_0038369b,0x13,&local_28,&DAT_00afbec8);
  local_4[0] = *(char *)(lVar2 + 0x20) != '\0';
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (uVar1,&DAT_003836ae,0x11,local_4,&DAT_00afb940);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (uVar1,&DAT_003836bf,0xb,lVar2 + 0x10,&PTR_FUN_00afbee8);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish_non_exhaustive();
  return;
}


// ===== 00a5c5d8  <std::backtrace_rs::backtrace::libunwind::Bomb_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::backtrace_rs::backtrace::libunwind::Bomb as core::ops::drop::Drop>::drop */

void __rustcall
<std::backtrace_rs::backtrace::libunwind::Bomb_as_core::ops::drop::Drop>::drop(byte *param_1)

{
  if ((*param_1 & 1) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_003836ca,0x55,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afbf08);
}


// ===== 00a5c604  <std::io::stdio::Stderr_as_std::os::unix::io::StdioExt>::take_fd =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::Stderr as std::os::unix::io::StdioExt>::take_fd */

void __rustcall
<std::io::stdio::Stderr_as_std::os::unix::io::StdioExt>::take_fd
          (undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  pthread_key_t __key;
  void *pvVar4;
  int iVar5;
  undefined8 *local_28;
  
  param_2 = (undefined8 *)*param_2;
  if (DAT_00b108d8 == 0) {
    __key = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(&DAT_00b108d8);
    pvVar4 = pthread_getspecific(__key);
    if (pvVar4 == (void *)0x0) goto LAB_00a5c668;
LAB_00a5c634:
    if (pvVar4 != (void *)*param_2) {
LAB_00a5c678:
      piVar1 = (int *)(param_2 + 1);
      do {
        if (*piVar1 != 0) {
          ClearExclusiveLocal();
          <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                    (param_2 + 1);
          break;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *param_2 = pvVar4;
      iVar5 = 1;
      goto LAB_00a5c698;
    }
  }
  else {
    pvVar4 = pthread_getspecific((pthread_key_t)DAT_00b108d8);
    if (pvVar4 != (void *)0x0) goto LAB_00a5c634;
LAB_00a5c668:
    pvVar4 = (void *)FUN_00a2cdf8();
    if (pvVar4 != (void *)*param_2) goto LAB_00a5c678;
  }
  if (*(int *)((long)param_2 + 0xc) == -1) {
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed(&DAT_00382941,0x26,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afb318)
    ;
  }
  iVar5 = *(int *)((long)param_2 + 0xc) + 1;
LAB_00a5c698:
  *(int *)((long)param_2 + 0xc) = iVar5;
                    /* try { // try from 00a5c6a0 to 00a5c6ab has its CatchHandler @ 00a5c734 */
  local_28 = param_2;
  <std::io::stdio::StderrLock_as_std::os::unix::io::StdioExt>::take_fd(param_1,&local_28);
  iVar5 = *(int *)((long)param_2 + 0xc) + -1;
  *(int *)((long)param_2 + 0xc) = iVar5;
  if (iVar5 == 0) {
    piVar1 = (int *)(param_2 + 1);
    *param_2 = 0;
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = 0;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == 2) {
      syscall(0x62,piVar1,0x81,1);
      return;
    }
  }
  return;
}


// ===== 00a5c748  <std::sys::time::unix::Instant_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::time::unix::Instant as core::fmt::Debug>::fmt */

void __rustcall
<std::sys::time::unix::Instant_as_core::fmt::Debug>::fmt(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_30 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,&DAT_003836f4,7);
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (auStack_30,&DAT_003836fb,6,param_1,&DAT_00afbf20);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (uVar1,&DAT_00383701,7,param_1 + 8,&DAT_00afbf40);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 00a5c7c8  <std::sys::os_str::bytes::Buf_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::os_str::bytes::Buf as core::fmt::Display>::fmt */

void __rustcall
<std::sys::os_str::bytes::Buf_as_core::fmt::Display>::fmt(long param_1,undefined8 param_2)

{
  <core::bstr::ByteStr_as_core::fmt::Display>::fmt
            (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_2);
  return;
}


// ===== 00a5c7dc  <std::os::unix::net::stream::UnixStream_as_core::io::write::Write>::write_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::os::unix::net::stream::UnixStream as core::io::write::Write>::write_vectored */

undefined1  [16] __rustcall
<std::os::unix::net::stream::UnixStream_as_core::io::write::Write>::write_vectored
          (int *param_1,iovec *param_2,ulong param_3)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (0x3ff < param_3) {
    param_3 = 0x400;
  }
  sVar2 = writev(*param_1,param_2,(int)param_3);
  if (sVar2 != -1) {
    auVar4._1_7_ = 0;
    auVar4[0] = sVar2 == -1;
    auVar4._8_8_ = sVar2;
    return auVar4;
  }
  piVar3 = (int *)__errno(0xffffffffffffffff,0xffffffffffffffff);
  iVar1 = *piVar3;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 00a5c870  <std::os::unix::net::stream::UnixStream_as_core::io::write::Write>::write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::os::unix::net::stream::UnixStream as core::io::write::Write>::write */

undefined1  [16] __rustcall
<std::os::unix::net::stream::UnixStream_as_core::io::write::Write>::write
          (int *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  sVar2 = send(*param_1,param_2,param_3,0x4000);
  if (sVar2 != -1) {
    auVar4._1_7_ = 0;
    auVar4[0] = sVar2 == -1;
    auVar4._8_8_ = sVar2;
    return auVar4;
  }
  piVar3 = (int *)__errno(0xffffffffffffffff,0xffffffffffffffff);
  iVar1 = *piVar3;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 00a5c8fc  <std::os::unix::net::ancillary::ScmCredentials_as_core::iter::traits::iterator::Iterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::os::unix::net::ancillary::ScmCredentials as core::iter::traits::iterator::Iterator>::next
    */

void __rustcall
<std::os::unix::net::ancillary::ScmCredentials_as_core::iter::traits::iterator::Iterator>::next
          (undefined4 *param_1,long *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (0xb < (ulong)param_2[1]) {
    puVar2 = (undefined8 *)*param_2;
    uVar3 = *puVar2;
    uVar1 = *(undefined4 *)(puVar2 + 1);
    *param_2 = (long)puVar2 + 0xc;
    param_2[1] = param_2[1] - 0xc;
    *(undefined8 *)(param_1 + 1) = uVar3;
    param_1[3] = uVar1;
    *param_1 = 1;
    return;
  }
  *param_1 = 0;
  return;
}


// ===== 00a5c938  <std::fs::Dir_as_std::os::fd::raw::FromRawFd>::from_raw_fd =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::fs::Dir as std::os::fd::raw::FromRawFd>::from_raw_fd */

void __rustcall <std::fs::Dir_as_std::os::fd::raw::FromRawFd>::from_raw_fd(int param_1)

{
  if (param_1 != -1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed(&DAT_002a1150,8,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afbf60);
}


// ===== 00a5c964  <std::sys::net::connection::socket::LookupHost_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::net::connection::socket::LookupHost as core::ops::drop::Drop>::drop */

void __rustcall
<std::sys::net::connection::socket::LookupHost_as_core::ops::drop::Drop>::drop(undefined8 *param_1)

{
  freeaddrinfo((addrinfo *)*param_1);
  return;
}


// ===== 00a5c96c  <std::io::pipe::PipeReader_as_std::os::fd::owned::AsFd>::as_fd =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::pipe::PipeReader as std::os::fd::owned::AsFd>::as_fd */

undefined4 __rustcall
<std::io::pipe::PipeReader_as_std::os::fd::owned::AsFd>::as_fd(undefined4 *param_1)

{
  return *param_1;
}


// ===== 00a5c974  <std::panicking::panic_handler::StaticStrPayload_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::panicking::panic_handler::StaticStrPayload as core::fmt::Display>::fmt */

void __rustcall
<std::panicking::panic_handler::StaticStrPayload_as_core::fmt::Display>::fmt
          (undefined8 *param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,*param_1,param_1[1]);
  return;
}


// ===== 00a5c984  <std::env::VarsOs_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::env::VarsOs as core::fmt::Debug>::fmt */

void __rustcall <std::env::VarsOs_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_30 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,&DAT_00383708,6);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (auStack_30,&DAT_003835d7,5,param_1,&PTR_FUN_00afbdf0);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 00a5c9e8  <std::time::Instant_as_core::ops::arith::Sub>::sub =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::time::Instant as core::ops::arith::Sub>::sub */

undefined1  [16] __rustcall
<std::time::Instant_as_core::ops::arith::Sub>::sub
          (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  int local_28 [2];
  undefined8 local_20;
  undefined4 local_18;
  
  local_48 = param_1;
  local_40 = param_2;
  local_38 = param_3;
  local_30 = param_4;
  FUN_00a312f4(local_28,&local_48,&local_38);
  uVar1 = 0;
  if (local_28[0] == 0) {
    uVar1 = local_18;
  }
  uVar2 = 0;
  if (local_28[0] == 0) {
    uVar2 = local_20;
  }
  auVar3._8_4_ = uVar1;
  auVar3._0_8_ = uVar2;
  auVar3._12_4_ = 0;
  return auVar3;
}


// ===== 00a5ca38  <&std::process::ChildStdin_as_core::io::write::Write>::write_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::process::ChildStdin as core::io::write::Write>::write_vectored */

undefined1  [16] __rustcall
<&std::process::ChildStdin_as_core::io::write::Write>::write_vectored
          (undefined8 *param_1,iovec *param_2,ulong param_3)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (0x3ff < param_3) {
    param_3 = 0x400;
  }
  sVar2 = writev(*(int *)*param_1,param_2,(int)param_3);
  if (sVar2 != -1) {
    auVar4._1_7_ = 0;
    auVar4[0] = sVar2 == -1;
    auVar4._8_8_ = sVar2;
    return auVar4;
  }
  piVar3 = (int *)__errno(0xffffffffffffffff,0xffffffffffffffff);
  iVar1 = *piVar3;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 00a5cad0  <&std::process::ChildStdin_as_core::io::write::Write>::write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::process::ChildStdin as core::io::write::Write>::write */

undefined1  [16] __rustcall
<&std::process::ChildStdin_as_core::io::write::Write>::write
          (undefined8 *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  sVar2 = ::write(*(int *)*param_1,param_2,param_3);
  if (sVar2 != -1) {
    auVar4._1_7_ = 0;
    auVar4[0] = sVar2 == -1;
    auVar4._8_8_ = sVar2;
    return auVar4;
  }
  piVar3 = (int *)__errno(0xffffffffffffffff,0xffffffffffffffff);
  iVar1 = *piVar3;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 00a5cb5c  <std::backtrace_rs::symbolize::SymbolName_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::backtrace_rs::symbolize::SymbolName as core::fmt::Debug>::fmt */

undefined8 __rustcall
<std::backtrace_rs::symbolize::SymbolName_as_core::fmt::Debug>::fmt
          (long *param_1,undefined8 param_2)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long local_68;
  long local_60;
  byte local_58;
  byte local_57;
  undefined6 uStack_56;
  
  if (*param_1 != 2) {
    uVar4 = <rustc_demangle::Demangle_as_core::fmt::Debug>::fmt(param_1,param_2);
    return uVar4;
  }
  if (param_1[9] != 0) {
    lVar6 = param_1[8];
    uVar5 = param_1[9];
    do {
      core::str::converts::from_utf8(&local_68,lVar6,uVar5);
      bVar2 = local_58;
      lVar1 = local_60;
      if (local_68 != 1) {
        uVar4 = <str_as_core::fmt::Debug>::fmt
                          (local_60,CONCAT62(uStack_56,CONCAT11(local_57,local_58)),param_2);
        if ((int)uVar4 != 0) {
          return 1;
        }
        return uVar4;
      }
      uVar7 = (ulong)local_57;
      uVar3 = <str_as_core::fmt::Debug>::fmt(&DAT_00382bea,3,param_2);
      if ((uVar3 & 1) != 0) {
        return 1;
      }
      if ((bVar2 & 1) == 0) {
        return 0;
      }
      uVar7 = lVar1 + uVar7;
      uVar3 = uVar5 - uVar7;
      if (uVar5 < uVar7) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (uVar7,uVar5,uVar5,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afb768);
      }
      lVar6 = lVar6 + uVar7;
      uVar5 = uVar3;
    } while (uVar3 != 0);
  }
  return 0;
}


// ===== 00a5cc60  <std::io::stdio::Stdin_as_alloc::io::read::Read>::read_exact =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::Stdin as alloc::io::read::Read>::read_exact */

undefined8 __rustcall
<std::io::stdio::Stdin_as_alloc::io::read::Read>::read_exact
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  byte bVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  int *local_40;
  byte local_38;
  
  piVar8 = (int *)*param_1;
  do {
    if (*piVar8 != 0) {
      ClearExclusiveLocal();
      param_1 = (undefined8 *)
                <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                          (piVar8);
      uVar7 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      goto joined_r0x00a5cd6c;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
    if (bVar3) {
      *piVar8 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar7 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
  puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
joined_r0x00a5cd6c:
  PTR_GLOBAL_PANIC_COUNT_00b00bf0 = (undefined *)puVar4;
  if ((uVar7 & 0x7fffffffffffffff) == 0) {
    bVar5 = 0;
  }
  else {
    bVar5 = std::panicking::panic_count::is_zero_slow_path(param_1,param_2,param_3);
    bVar5 = bVar5 ^ 1;
  }
  local_40 = piVar8;
  local_38 = bVar5;
                    /* try { // try from 00a5ccb0 to 00a5ccb7 has its CatchHandler @ 00a5cd8c */
  uVar6 = <std::io::stdio::StdinLock_as_alloc::io::read::Read>::read_exact
                    (&local_40,param_2,param_3);
  if ((((bVar5 & 1) == 0) && ((*puVar4 & 0x7fffffffffffffff) != 0)) &&
     (uVar7 = std::panicking::panic_count::is_zero_slow_path(), (uVar7 & 1) == 0)) {
    *(undefined1 *)(piVar8 + 1) = 1;
  }
  do {
    iVar1 = *piVar8;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
    if (bVar3) {
      *piVar8 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 == 2) {
    syscall(0x62,piVar8,0x81,1);
    return uVar6;
  }
  return uVar6;
}


// ===== 00a5cda8  <std::io::stdio::Stdin_as_alloc::io::read::Read>::read_to_end =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::Stdin as alloc::io::read::Read>::read_to_end */

undefined8 __rustcall
<std::io::stdio::Stdin_as_alloc::io::read::Read>::read_to_end
          (undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  
  piVar8 = (int *)*param_1;
  do {
    if (*piVar8 != 0) {
      ClearExclusiveLocal();
      param_1 = (undefined8 *)
                <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                          (piVar8);
      uVar7 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      goto joined_r0x00a5cea8;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
    if (bVar3) {
      *piVar8 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar7 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
  puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
joined_r0x00a5cea8:
  PTR_GLOBAL_PANIC_COUNT_00b00bf0 = (undefined *)puVar4;
  if ((uVar7 & 0x7fffffffffffffff) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = std::panicking::panic_count::is_zero_slow_path(param_1,param_2);
    uVar5 = uVar5 ^ 1;
  }
                    /* try { // try from 00a5cdec to 00a5cdf3 has its CatchHandler @ 00a5cec0 */
  uVar6 = FUN_00a5ee40(piVar8 + 2,param_2);
  if ((((uVar5 & 1) == 0) && ((*puVar4 & 0x7fffffffffffffff) != 0)) &&
     (uVar7 = std::panicking::panic_count::is_zero_slow_path(), (uVar7 & 1) == 0)) {
    *(undefined1 *)(piVar8 + 1) = 1;
  }
  do {
    iVar1 = *piVar8;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
    if (bVar3) {
      *piVar8 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 == 2) {
    syscall(0x62,piVar8,0x81,1);
    return uVar6;
  }
  return uVar6;
}


// ===== 00a5cedc  <std::io::stdio::Stdin_as_alloc::io::read::Read>::read_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::Stdin as alloc::io::read::Read>::read_vectored */

undefined8 __rustcall
<std::io::stdio::Stdin_as_alloc::io::read::Read>::read_vectored
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  byte bVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  int *local_40;
  byte local_38;
  
  piVar8 = (int *)*param_1;
  do {
    if (*piVar8 != 0) {
      ClearExclusiveLocal();
      param_1 = (undefined8 *)
                <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                          (piVar8);
      uVar7 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      goto joined_r0x00a5cff8;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
    if (bVar3) {
      *piVar8 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar7 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
  puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
joined_r0x00a5cff8:
  PTR_GLOBAL_PANIC_COUNT_00b00bf0 = (undefined *)puVar4;
  if ((uVar7 & 0x7fffffffffffffff) == 0) {
    bVar5 = 0;
  }
  else {
    bVar5 = std::panicking::panic_count::is_zero_slow_path(param_1,param_2,param_3);
    bVar5 = bVar5 ^ 1;
  }
  local_40 = piVar8;
  local_38 = bVar5;
                    /* try { // try from 00a5cf2c to 00a5cf33 has its CatchHandler @ 00a5d018 */
  uVar6 = <std::io::stdio::StdinLock_as_alloc::io::read::Read>::read_vectored
                    (&local_40,param_2,param_3);
  if ((((bVar5 & 1) == 0) && ((*puVar4 & 0x7fffffffffffffff) != 0)) &&
     (uVar7 = std::panicking::panic_count::is_zero_slow_path(), (uVar7 & 1) == 0)) {
    *(undefined1 *)(piVar8 + 1) = 1;
  }
  do {
    iVar1 = *piVar8;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
    if (bVar3) {
      *piVar8 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 == 2) {
    syscall(0x62,piVar8,0x81,1);
    return uVar6;
  }
  return uVar6;
}


// ===== 00a5d034  <std::io::stdio::Stdin_as_alloc::io::read::Read>::read_buf_exact =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::Stdin as alloc::io::read::Read>::read_buf_exact */

undefined8 __rustcall
<std::io::stdio::Stdin_as_alloc::io::read::Read>::read_buf_exact
          (undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  byte bVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  int *local_40;
  byte local_38;
  
  piVar8 = (int *)*param_1;
  do {
    if (*piVar8 != 0) {
      ClearExclusiveLocal();
      param_1 = (undefined8 *)
                <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                          (piVar8);
      uVar7 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      goto joined_r0x00a5d138;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
    if (bVar3) {
      *piVar8 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar7 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
  puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
joined_r0x00a5d138:
  PTR_GLOBAL_PANIC_COUNT_00b00bf0 = (undefined *)puVar4;
  if ((uVar7 & 0x7fffffffffffffff) == 0) {
    bVar5 = 0;
  }
  else {
    bVar5 = std::panicking::panic_count::is_zero_slow_path(param_1,param_2);
    bVar5 = bVar5 ^ 1;
  }
  local_40 = piVar8;
  local_38 = bVar5;
                    /* try { // try from 00a5d084 to 00a5d08b has its CatchHandler @ 00a5d150 */
  uVar6 = <std::io::stdio::StdinLock_as_alloc::io::read::Read>::read_buf_exact(&local_40,param_2);
  if ((((bVar5 & 1) == 0) && ((*puVar4 & 0x7fffffffffffffff) != 0)) &&
     (uVar7 = std::panicking::panic_count::is_zero_slow_path(), (uVar7 & 1) == 0)) {
    *(undefined1 *)(piVar8 + 1) = 1;
  }
  do {
    iVar1 = *piVar8;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
    if (bVar3) {
      *piVar8 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 == 2) {
    syscall(0x62,piVar8,0x81,1);
    return uVar6;
  }
  return uVar6;
}


// ===== 00a5d16c  <std::io::stdio::Stdin_as_alloc::io::read::Read>::read_to_string =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::Stdin as alloc::io::read::Read>::read_to_string */

undefined8 __rustcall
<std::io::stdio::Stdin_as_alloc::io::read::Read>::read_to_string
          (undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  byte bVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  int *local_40;
  byte local_38;
  
  piVar8 = (int *)*param_1;
  do {
    if (*piVar8 != 0) {
      ClearExclusiveLocal();
      param_1 = (undefined8 *)
                <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                          (piVar8);
      uVar7 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      goto joined_r0x00a5d280;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
    if (bVar3) {
      *piVar8 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar7 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
  puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
joined_r0x00a5d280:
  PTR_GLOBAL_PANIC_COUNT_00b00bf0 = (undefined *)puVar4;
  if ((uVar7 & 0x7fffffffffffffff) == 0) {
    bVar5 = 0;
  }
  else {
    bVar5 = std::panicking::panic_count::is_zero_slow_path(param_1,param_2);
    bVar5 = bVar5 ^ 1;
  }
  local_40 = piVar8;
  local_38 = bVar5;
                    /* try { // try from 00a5d1bc to 00a5d1c3 has its CatchHandler @ 00a5d298 */
  uVar6 = <std::io::stdio::StdinLock_as_alloc::io::read::Read>::read_to_string(&local_40,param_2);
  if ((((bVar5 & 1) == 0) && ((*puVar4 & 0x7fffffffffffffff) != 0)) &&
     (uVar7 = std::panicking::panic_count::is_zero_slow_path(), (uVar7 & 1) == 0)) {
    *(undefined1 *)(piVar8 + 1) = 1;
  }
  do {
    iVar1 = *piVar8;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
    if (bVar3) {
      *piVar8 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 == 2) {
    syscall(0x62,piVar8,0x81,1);
    return uVar6;
  }
  return uVar6;
}


// ===== 00a5d2b4  <std::io::stdio::Stdin_as_alloc::io::read::Read>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::Stdin as alloc::io::read::Read>::read */

undefined8 __rustcall
<std::io::stdio::Stdin_as_alloc::io::read::Read>::read
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  
  piVar8 = (int *)*param_1;
  do {
    if (*piVar8 != 0) {
      ClearExclusiveLocal();
      param_1 = (undefined8 *)
                <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                          (piVar8);
      uVar7 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      goto joined_r0x00a5d3bc;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
    if (bVar3) {
      *piVar8 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar7 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
  puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
joined_r0x00a5d3bc:
  PTR_GLOBAL_PANIC_COUNT_00b00bf0 = (undefined *)puVar4;
  if ((uVar7 & 0x7fffffffffffffff) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = std::panicking::panic_count::is_zero_slow_path(param_1,param_2,param_3);
    uVar5 = uVar5 ^ 1;
  }
                    /* try { // try from 00a5d2f8 to 00a5d2ff has its CatchHandler @ 00a5d3dc */
  uVar6 = FUN_00a5ef94(piVar8 + 2,param_2,param_3);
  if ((((uVar5 & 1) == 0) && ((*puVar4 & 0x7fffffffffffffff) != 0)) &&
     (uVar7 = std::panicking::panic_count::is_zero_slow_path(), (uVar7 & 1) == 0)) {
    *(undefined1 *)(piVar8 + 1) = 1;
  }
  do {
    iVar1 = *piVar8;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
    if (bVar3) {
      *piVar8 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 == 2) {
    syscall(0x62,piVar8,0x81,1);
    return uVar6;
  }
  return uVar6;
}


// ===== 00a5d3f8  <std::io::stdio::Stdin_as_alloc::io::read::Read>::read_buf =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::Stdin as alloc::io::read::Read>::read_buf */

undefined8 __rustcall
<std::io::stdio::Stdin_as_alloc::io::read::Read>::read_buf(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  
  piVar8 = (int *)*param_1;
  do {
    if (*piVar8 != 0) {
      ClearExclusiveLocal();
      param_1 = (undefined8 *)
                <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                          (piVar8);
      uVar7 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      goto joined_r0x00a5d4e8;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
    if (bVar3) {
      *piVar8 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar7 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
  puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
joined_r0x00a5d4e8:
  PTR_GLOBAL_PANIC_COUNT_00b00bf0 = (undefined *)puVar4;
  if ((uVar7 & 0x7fffffffffffffff) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = std::panicking::panic_count::is_zero_slow_path(param_1,param_2);
    uVar5 = uVar5 ^ 1;
  }
                    /* try { // try from 00a5d43c to 00a5d443 has its CatchHandler @ 00a5d500 */
  uVar6 = FUN_00a5f1a8(piVar8 + 2,param_2);
  if ((((uVar5 & 1) == 0) && ((*puVar4 & 0x7fffffffffffffff) != 0)) &&
     (uVar7 = std::panicking::panic_count::is_zero_slow_path(), (uVar7 & 1) == 0)) {
    *(undefined1 *)(piVar8 + 1) = 1;
  }
  do {
    iVar1 = *piVar8;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
    if (bVar3) {
      *piVar8 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 == 2) {
    syscall(0x62,piVar8,0x81,1);
    return uVar6;
  }
  return uVar6;
}


// ===== 00a5d51c  <std::sync::once::OnceState_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sync::once::OnceState as core::fmt::Debug>::fmt */

void __rustcall
<std::sync::once::OnceState_as_core::fmt::Debug>::fmt(long param_1,undefined8 param_2)

{
  undefined1 auStack_30 [16];
  undefined1 local_4 [4];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,&DAT_0038370e,9);
  local_4[0] = *(undefined1 *)(param_1 + 4);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (auStack_30,&DAT_002a1368,8,local_4,&DAT_00afb940);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 00a5d588  <std::io::stdio::StderrLock_as_std::os::unix::io::StdioExt>::take_fd =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StderrLock as std::os::unix::io::StdioExt>::take_fd */

ulong __rustcall
<std::io::stdio::StderrLock_as_std::os::unix::io::StdioExt>::take_fd
          (undefined4 *param_1,long *param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 local_200;
  undefined8 uStack_1f8;
  int local_1e8;
  int local_1e4;
  undefined **local_1e0;
  undefined8 local_1d8;
  undefined2 local_1d0;
  long local_58;
  undefined8 local_50;
  
  local_200 = 0x1b600000000;
  uStack_1f8 = 0x101;
  local_1d0 = 0x6c;
  local_1d8 = DAT_00382dcc;
  uVar5 = <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul
                    (&local_58,&local_1d8,10);
  if (local_58 == 1) {
    local_1e0 = &PTR_DAT_00afab10;
  }
  else {
    uVar5 = FUN_00a4725c(&local_1e8,local_50,&local_200);
    if (local_1e8 != 1) {
      iVar2 = fcntl(2,0x406,3);
      if (iVar2 == -1) {
        piVar6 = (int *)__errno();
        iVar2 = *piVar6;
        if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
          core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
        }
        *param_1 = 1;
        *(ulong *)(param_1 + 2) = (long)iVar2 << 0x20 | 2;
      }
      else {
        if (*(long *)(*param_2 + 0x10) != 0) {
          core::cell::panic_already_borrowed(&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afc830);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0xa5d74c);
          (*pcVar1)();
        }
        iVar3 = dup2(local_1e4,2);
        if (iVar3 != -1) {
          uVar4 = close(local_1e4);
          *param_1 = 0;
          param_1[1] = iVar2;
          return (ulong)uVar4;
        }
        piVar6 = (int *)__errno();
        iVar3 = *piVar6;
        if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
          core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
        }
        close(local_1e4);
        *(ulong *)(param_1 + 2) = (long)iVar3 << 0x20 | 2;
        *param_1 = 1;
        local_1e4 = iVar2;
      }
      uVar4 = close(local_1e4);
      return (ulong)uVar4;
    }
  }
  *(undefined ***)(param_1 + 2) = local_1e0;
  *param_1 = 1;
  return uVar5;
}


// ===== 00a5d7a4  <std::sys::fd::unix::FileDesc_as_std::os::fd::owned::AsFd>::as_fd =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::fd::unix::FileDesc as std::os::fd::owned::AsFd>::as_fd */

undefined4 __rustcall
<std::sys::fd::unix::FileDesc_as_std::os::fd::owned::AsFd>::as_fd(undefined4 *param_1)

{
  return *param_1;
}


// ===== 00a5d7ac  <std::sys::stdio::unix::Stderr_as_core::io::write::Write>::write_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::stdio::unix::Stderr as core::io::write::Write>::write_vectored */

undefined1  [16] __rustcall
<std::sys::stdio::unix::Stderr_as_core::io::write::Write>::write_vectored
          (undefined8 param_1,iovec *param_2,ulong param_3)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (0x3ff < param_3) {
    param_3 = 0x400;
  }
  sVar2 = writev(2,param_2,(int)param_3);
  if (sVar2 != -1) {
    auVar4._1_7_ = 0;
    auVar4[0] = sVar2 == -1;
    auVar4._8_8_ = sVar2;
    return auVar4;
  }
  piVar3 = (int *)__errno(0xffffffffffffffff,0xffffffffffffffff);
  iVar1 = *piVar3;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 00a5d840  FUN_00a5d840 =====

undefined8 FUN_00a5d840(void)

{
  return 1;
}


// ===== 00a5d848  FUN_00a5d848 =====

undefined8 FUN_00a5d848(void)

{
  return 0;
}


// ===== 00a5d850  <std::sys::stdio::unix::Stderr_as_core::io::write::Write>::write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::stdio::unix::Stderr as core::io::write::Write>::write */

undefined1  [16] __rustcall
<std::sys::stdio::unix::Stderr_as_core::io::write::Write>::write
          (undefined8 param_1,void *param_2,size_t param_3)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  sVar2 = ::write(2,param_2,param_3);
  if (sVar2 != -1) {
    auVar4._1_7_ = 0;
    auVar4[0] = sVar2 == -1;
    auVar4._8_8_ = sVar2;
    return auVar4;
  }
  piVar3 = (int *)__errno(0xffffffffffffffff,0xffffffffffffffff);
  iVar1 = *piVar3;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 00a5d8d8  <std::sys::process::env::CommandResolvedEnvs_as_core::iter::traits::iterator::Iterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::process::env::CommandResolvedEnvs as core::iter::traits::iterator::Iterator>::next */

void __rustcall
<std::sys::process::env::CommandResolvedEnvs_as_core::iter::traits::iterator::Iterator>::next
          (undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long local_68 [2];
  long local_58;
  
  FUN_00a4a3c4(local_68,param_2);
  if (local_68[0] != 0) {
    local_68[0] = local_68[0] + local_58 * 0x18;
    uVar1 = *(undefined8 *)(local_68[0] + 0x18);
    uVar4 = *(undefined8 *)(local_68[0] + 0x118);
    uVar3 = *(undefined8 *)(local_68[0] + 0x110);
    uVar2 = *(undefined8 *)(local_68[0] + 0x120);
    uVar5 = *(undefined8 *)(local_68[0] + 8);
    param_1[1] = *(undefined8 *)(local_68[0] + 0x10);
    *param_1 = uVar5;
    param_1[3] = uVar3;
    param_1[2] = uVar1;
    param_1[5] = uVar2;
    param_1[4] = uVar4;
    return;
  }
  *param_1 = 0xffffffffffffffff;
  return;
}


// ===== 00a5d95c  <&std::fs::File_as_core::io::write::Write>::write_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::fs::File as core::io::write::Write>::write_vectored */

undefined1  [16] __rustcall
<&std::fs::File_as_core::io::write::Write>::write_vectored
          (undefined8 *param_1,iovec *param_2,ulong param_3)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (0x3ff < param_3) {
    param_3 = 0x400;
  }
  sVar2 = writev(*(int *)*param_1,param_2,(int)param_3);
  if (sVar2 != -1) {
    auVar4._1_7_ = 0;
    auVar4[0] = sVar2 == -1;
    auVar4._8_8_ = sVar2;
    return auVar4;
  }
  piVar3 = (int *)__errno(0xffffffffffffffff,0xffffffffffffffff);
  iVar1 = *piVar3;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 00a5d9f4  <std::sys::process::unix::unix::ExitStatus_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::process::unix::unix::ExitStatus as core::fmt::Display>::fmt */

void __rustcall
<std::sys::process::unix::unix::ExitStatus_as_core::fmt::Display>::fmt
          (uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  uint local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  uint *local_30;
  undefined *local_28;
  uint *local_20;
  code *local_18;
  
  uVar1 = *param_1;
  local_44 = uVar1 & 0x7f;
  if (local_44 != 0x7f) {
    if (local_44 == 0) {
      local_30 = (uint *)&local_40;
      local_40 = (undefined *)(CONCAT44(local_40._4_4_,uVar1 >> 8) & 0xffffffff000000ff);
      local_28 = PTR_fmt_00b00d18;
      core::fmt::write(*param_2,param_2[1],&DAT_002a2755,&local_30);
      return;
    }
    uVar2 = local_44 - 1;
    uStack_38 = 0;
    local_40 = (undefined *)0x1;
    if ((uVar2 < 0x1f) && ((0x5fff7fffU >> (ulong)(uVar2 & 0x1f) & 1) != 0)) {
      uStack_38 = *(undefined8 *)(&DAT_00383bc0 + (ulong)uVar2 * 8);
      local_40 = (&PTR_DAT_00afc8a8)[uVar2];
    }
    if ((uVar1 >> 7 & 1) == 0) {
      uVar3 = *param_2;
      uVar4 = param_2[1];
      puVar5 = &DAT_002bce66;
    }
    else {
      uVar3 = *param_2;
      uVar4 = param_2[1];
      puVar5 = &DAT_002b2c32;
    }
    local_28 = PTR_fmt_00b00d18;
    local_20 = (uint *)&local_40;
    local_30 = &local_44;
    local_18 = FUN_00a5be48;
    core::fmt::write(uVar3,uVar4,puVar5,&local_30);
    return;
  }
  if ((uVar1 & 0xff) == 0x7f) {
    local_44 = uVar1 >> 8 & 0xff;
    uVar1 = (uVar1 >> 8) - 1;
    if (((uVar1 & 0xff) < 0x1f) && ((0x5fff7fffU >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
      uStack_38 = *(undefined8 *)(&DAT_00383bc0 + ((ulong)uVar1 & 0xff) * 8);
      local_40 = (&PTR_DAT_00afc8a8)[(ulong)uVar1 & 0xff];
    }
    else {
      uStack_38 = 0;
      local_40 = (undefined *)0x1;
    }
    local_30 = &local_44;
    local_28 = PTR_fmt_00b00d18;
    local_20 = (uint *)&local_40;
    local_18 = FUN_00a5be48;
    core::fmt::write(*param_2,param_2[1],&DAT_002b04ed,&local_30);
    return;
  }
  if (uVar1 == 0xffff) {
                    /* WARNING: Could not recover jumptable at 0x00a5db34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2[1] + 0x18))(*param_2,&UNK_00383717,0x18);
    return;
  }
  local_28 = PTR_fmt_00b00d18;
  local_18 = (code *)PTR_fmt_00b00d90;
  local_30 = param_1;
  local_20 = param_1;
  core::fmt::write(*param_2,param_2[1],&DAT_0038372f,&local_30);
  return;
}


// ===== 00a5dc04  <std::sys::process::unix::common::cstring_array::CStringArray_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::process::unix::common::cstring_array::CStringArray as core::ops::drop::Drop>::drop */

void __rustcall
<std::sys::process::unix::common::cstring_array::CStringArray_as_core::ops::drop::Drop>::drop
          (long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  
  lVar1 = *(long *)(param_1 + 0x10) + -1;
  if (*(long *)(param_1 + 0x10) != 0) {
    if (lVar1 != 0) {
      lVar1 = lVar1 * 8;
      puVar2 = *(undefined8 **)(param_1 + 8);
      do {
        auVar3 = <alloc::ffi::c_str::alloc::ffi::c_str::CString>::from_raw(*puVar2);
        *auVar3._0_8_ = 0;
        if (auVar3._8_8_ != 0) {
          free(auVar3._0_8_);
        }
        lVar1 = lVar1 + -8;
        puVar2 = puVar2 + 1;
      } while (lVar1 != 0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail(0,lVar1,0,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afbf78);
}


// ===== 00a5dc70  <std::env::VarError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::env::VarError as core::fmt::Display>::fmt */

void __rustcall <std::env::VarError_as_core::fmt::Display>::fmt(long *param_1,undefined8 *param_2)

{
  long *local_28;
  long **local_20;
  code *pcStack_18;
  
  if (*param_1 != -1) {
    local_20 = &local_28;
    pcStack_18 = FUN_00a5b8fc;
    local_28 = param_1;
    core::fmt::write(*param_2,param_2[1],&DAT_002a33e2,&local_20);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00a5dcd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,&UNK_00383753,0x1e);
  return;
}


// ===== 00a5dcd4  <std::time::Instant_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::time::Instant as core::fmt::Debug>::fmt */

void __rustcall <std::time::Instant_as_core::fmt::Debug>::fmt(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_30 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,&DAT_003836f4,7);
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (auStack_30,&DAT_003836fb,6,param_1,&DAT_00afbf20);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (uVar1,&DAT_00383701,7,param_1 + 8,&DAT_00afbf40);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 00a5dd54  <std::backtrace::Backtrace_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::backtrace::Backtrace as core::fmt::Display>::fmt */

undefined8 __rustcall
<std::backtrace::Backtrace_as_core::fmt::Display>::fmt(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  uint *puVar7;
  long *****ppppplVar8;
  ulong uVar9;
  uint *puVar10;
  long lVar11;
  undefined8 *puVar12;
  long local_1b8;
  void *pvStack_1b0;
  undefined8 local_1a8;
  long local_1a0;
  void *pvStack_198;
  undefined8 local_190;
  undefined1 local_188;
  long local_178;
  long *plStack_170;
  undefined **local_168;
  undefined8 local_160;
  undefined1 local_158;
  long *local_150;
  undefined8 uStack_148;
  long ****local_140;
  long *local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  long *local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  long ****local_b0;
  long *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  
  if (*param_1 == 0) {
    puVar5 = &DAT_00383771;
    uVar4 = 0x15;
  }
  else {
    if (*param_1 != 1) {
      if ((int)param_1[5] == 0) {
        uVar3 = *(uint *)(param_2 + 0x10);
        uVar9 = param_1[3];
      }
      else {
        local_b0 = (long ****)(param_1 + 1);
        local_140 = (long ****)&local_b0;
        <std::sys::sync::once::futex::[0]::std::sys::sync::once::futex::Once>::call
                  (param_1 + 5,1,&local_140,&DAT_00afa598,
                   &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afa508);
        uVar3 = *(uint *)(param_2 + 0x10);
        uVar9 = param_1[3];
      }
      if ((uVar3 >> 0x17 & 1) == 0) {
        uVar6 = param_1[4];
        if (uVar9 < uVar6) {
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (uVar6,uVar9,uVar9,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afbf90);
        }
        puVar10 = (uint *)(param_1[2] + uVar6 * 0x38);
        uVar9 = uVar9 - uVar6;
      }
      else {
        puVar10 = (uint *)param_1[2];
      }
      std::env::current_dir(&local_1b8);
      local_188 = (undefined1)((uVar3 & 0x800000) >> 0x17);
      plStack_170 = &local_1a0;
      pvStack_198 = pvStack_1b0;
      local_1a0 = local_1b8;
      local_190 = local_1a8;
      local_168 = &PTR_FUN_00afbfa8;
      local_160 = 0;
      local_178 = param_2;
      local_158 = local_188;
      if (uVar9 != 0) {
        puVar7 = puVar10 + uVar9 * 0xe;
        do {
          if (*(long *)(puVar10 + 0xc) == 0) {
            uVar4 = *(undefined8 *)(puVar10 + 2);
            uStack_e8 = 0;
            local_f0 = &local_178;
            if ((*puVar10 & 1) == 0) {
              uVar4 = FUN_00ab2734(uVar4);
            }
            local_140 = (long ****)0xffffffffffffffff;
            local_b0 = (long ****)0x2;
                    /* try { // try from 00a5e020 to 00a5e037 has its CatchHandler @ 00a5e138 */
            uVar9 = FUN_00a3c7b4(&local_f0,uVar4,&local_140,&local_b0,0);
            local_f0[3] = local_f0[3] + 1;
            if ((uVar9 & 1) != 0) {
LAB_00a5e078:
              if (local_1a0 == -1) {
                if ((1 < ((ulong)pvStack_198 & 3) - 2) && (((ulong)pvStack_198 & 3) != 0)) {
                  local_138 = (long *)((long)pvStack_198 + -1);
                  local_140 = (long ****)CONCAT71(local_140._1_7_,3);
                  <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_138);
                }
              }
              else if (local_1a0 != 0) {
                free(pvStack_198);
              }
              return 1;
            }
          }
          else {
            lVar11 = *(long *)(puVar10 + 0xc) * 0x48;
            puVar12 = (undefined8 *)(*(long *)(puVar10 + 10) + 0x28);
            do {
              uVar4 = *(undefined8 *)(puVar10 + 2);
              uStack_148 = 0;
              local_150 = &local_178;
              if ((*puVar10 & 1) == 0) {
                uVar4 = FUN_00ab2734(uVar4);
              }
              if (puVar12[-1] == -1) {
                ppppplVar8 = (long *****)puVar12[-5];
                local_140 = (long ****)0xffffffffffffffff;
                if (ppppplVar8 != (long *****)0x0) goto LAB_00a5df94;
                ppppplVar8 = (long *****)0x0;
LAB_00a5dfa8:
                local_a8 = (long *)puVar12[-3];
                uStack_a0 = puVar12[-2];
                local_b0 = (long ****)ppppplVar8;
              }
              else {
                uVar1 = *puVar12;
                uVar2 = puVar12[1];
                    /* try { // try from 00a5df00 to 00a5dfcf has its CatchHandler @ 00a5e144 */
                core::str::converts::from_utf8(&local_b0,uVar1,uVar2);
                if (local_b0 == (long ****)&DAT_00000001) {
                  local_b0 = (long ****)0x2;
                }
                else {
                  rustc_demangle::try_demangle(&local_b0,local_a8,uStack_a0);
                  if ((long *****)local_b0 != (long *****)0x2) {
                    uStack_e8 = uStack_a0;
                    local_f0 = local_a8;
                    uStack_d8 = uStack_90;
                    uStack_e0 = local_98;
                    uStack_c8 = uStack_80;
                    local_d0 = local_88;
                    local_c0 = local_78;
                  }
                }
                uStack_110 = uStack_c8;
                local_118 = local_d0;
                uStack_130 = uStack_e8;
                local_138 = local_f0;
                uStack_120 = uStack_d8;
                local_128 = uStack_e0;
                local_108 = local_c0;
                ppppplVar8 = (long *****)puVar12[-5];
                local_140 = local_b0;
                local_100 = uVar1;
                uStack_f8 = uVar2;
                if (ppppplVar8 == (long *****)0x0) goto LAB_00a5dfa8;
LAB_00a5df94:
                if (ppppplVar8 != (long *****)0x2) {
                  ppppplVar8 = (long *****)&DAT_00000001;
                  goto LAB_00a5dfa8;
                }
                local_b0 = (long ****)(long *****)0x2;
              }
              uVar9 = FUN_00a3c7b4(&local_150,uVar4,&local_140,&local_b0,
                                   *(undefined4 *)(puVar12 + 2),
                                   *(undefined4 *)((long)puVar12 + 0x14),
                                   *(undefined4 *)(puVar12 + 3),
                                   *(undefined4 *)((long)puVar12 + 0x1c));
              local_150[3] = local_150[3] + 1;
              if ((uVar9 & 1) != 0) goto LAB_00a5e078;
              lVar11 = lVar11 + -0x48;
              puVar12 = puVar12 + 9;
            } while (lVar11 != 0);
          }
          puVar10 = puVar10 + 0xe;
        } while (puVar10 != puVar7);
      }
      if (local_1a0 == -1) {
        if ((1 < ((ulong)pvStack_198 & 3) - 2) && (((ulong)pvStack_198 & 3) != 0)) {
          local_138 = (long *)((long)pvStack_198 + -1);
          local_140 = (long ****)CONCAT71(local_140._1_7_,3);
          <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_138);
        }
      }
      else if (local_1a0 != 0) {
        free(pvStack_198);
      }
      return 0;
    }
    puVar5 = &DAT_00383786;
    uVar4 = 0x12;
  }
  uVar4 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,puVar5,uVar4);
  return uVar4;
}


// ===== 00a5e170  <&std::io::pipe::PipeReader_as_alloc::io::read::Read>::read_to_end =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::io::pipe::PipeReader as alloc::io::read::Read>::read_to_end */

void __rustcall
<&std::io::pipe::PipeReader_as_alloc::io::read::Read>::read_to_end(undefined8 *param_1)

{
  <std::sys::fd::unix::std::sys::fd::unix::FileDesc>::read_to_end(*param_1);
  return;
}


// ===== 00a5e178  <&std::io::pipe::PipeReader_as_alloc::io::read::Read>::read_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::io::pipe::PipeReader as alloc::io::read::Read>::read_vectored */

undefined1  [16] __rustcall
<&std::io::pipe::PipeReader_as_alloc::io::read::Read>::read_vectored
          (undefined8 *param_1,iovec *param_2,ulong param_3)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (0x3ff < param_3) {
    param_3 = 0x400;
  }
  sVar2 = readv(*(int *)*param_1,param_2,(int)param_3);
  if (sVar2 != -1) {
    auVar4._1_7_ = 0;
    auVar4[0] = sVar2 == -1;
    auVar4._8_8_ = sVar2;
    return auVar4;
  }
  piVar3 = (int *)__errno(0xffffffffffffffff,0xffffffffffffffff);
  iVar1 = *piVar3;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 00a5e210  <&std::sys::fd::unix::FileDesc_as_alloc::io::read::Read>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::sys::fd::unix::FileDesc as alloc::io::read::Read>::read */

undefined1  [16] __rustcall
<&std::sys::fd::unix::FileDesc_as_alloc::io::read::Read>::read
          (undefined8 *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  sVar2 = ::read(*(int *)*param_1,param_2,param_3);
  if (sVar2 != -1) {
    auVar4._1_7_ = 0;
    auVar4[0] = sVar2 == -1;
    auVar4._8_8_ = sVar2;
    return auVar4;
  }
  piVar3 = (int *)__errno(0xffffffffffffffff,0xffffffffffffffff);
  iVar1 = *piVar3;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 00a5e29c  <&std::sys::fd::unix::FileDesc_as_alloc::io::read::Read>::read_buf =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::sys::fd::unix::FileDesc as alloc::io::read::Read>::read_buf */

ulong __rustcall
<&std::sys::fd::unix::FileDesc_as_alloc::io::read::Read>::read_buf
          (undefined8 *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  ssize_t sVar3;
  int *piVar4;
  size_t __nbytes;
  
  lVar1 = param_2[2];
  __nbytes = param_2[1] - lVar1;
  if (0x7ffffffffffffffe < __nbytes) {
    __nbytes = 0x7fffffffffffffff;
  }
  sVar3 = ::read(*(int *)*param_1,(void *)(*param_2 + lVar1),__nbytes);
  if (sVar3 != -1) {
    param_2[2] = sVar3 + lVar1;
    return 0;
  }
  piVar4 = (int *)__errno();
  iVar2 = *piVar4;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00afaaf8) {
    return (long)iVar2 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  return (long)iVar2 << 0x20 | 2;
}


// ===== 00a5e350  <&std::io::stdio::Stdin_as_alloc::io::read::Read>::read_exact =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::io::stdio::Stdin as alloc::io::read::Read>::read_exact */

undefined8 __rustcall
<&std::io::stdio::Stdin_as_alloc::io::read::Read>::read_exact
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  byte bVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  int *local_40;
  byte local_38;
  
  piVar8 = *(int **)*param_1;
  do {
    if (*piVar8 != 0) {
      ClearExclusiveLocal();
      param_1 = (undefined8 *)
                <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                          (piVar8);
      uVar7 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      goto joined_r0x00a5e460;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
    if (bVar3) {
      *piVar8 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar7 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
  puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
joined_r0x00a5e460:
  PTR_GLOBAL_PANIC_COUNT_00b00bf0 = (undefined *)puVar4;
  if ((uVar7 & 0x7fffffffffffffff) == 0) {
    bVar5 = 0;
  }
  else {
    bVar5 = std::panicking::panic_count::is_zero_slow_path(param_1,param_2,param_3);
    bVar5 = bVar5 ^ 1;
  }
  local_40 = piVar8;
  local_38 = bVar5;
                    /* try { // try from 00a5e3a4 to 00a5e3ab has its CatchHandler @ 00a5e480 */
  uVar6 = <std::io::stdio::StdinLock_as_alloc::io::read::Read>::read_exact
                    (&local_40,param_2,param_3);
  if ((((bVar5 & 1) == 0) && ((*puVar4 & 0x7fffffffffffffff) != 0)) &&
     (uVar7 = std::panicking::panic_count::is_zero_slow_path(), (uVar7 & 1) == 0)) {
    *(undefined1 *)(piVar8 + 1) = 1;
  }
  do {
    iVar1 = *piVar8;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
    if (bVar3) {
      *piVar8 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 == 2) {
    syscall(0x62,piVar8,0x81,1);
    return uVar6;
  }
  return uVar6;
}


// ===== 00a5e49c  <&std::io::stdio::Stdin_as_alloc::io::read::Read>::read_to_end =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::io::stdio::Stdin as alloc::io::read::Read>::read_to_end */

undefined8 __rustcall
<&std::io::stdio::Stdin_as_alloc::io::read::Read>::read_to_end
          (undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  
  piVar8 = *(int **)*param_1;
  do {
    if (*piVar8 != 0) {
      ClearExclusiveLocal();
      param_1 = (undefined8 *)
                <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                          (piVar8);
      uVar7 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      goto joined_r0x00a5e5a0;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
    if (bVar3) {
      *piVar8 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar7 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
  puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
joined_r0x00a5e5a0:
  PTR_GLOBAL_PANIC_COUNT_00b00bf0 = (undefined *)puVar4;
  if ((uVar7 & 0x7fffffffffffffff) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = std::panicking::panic_count::is_zero_slow_path(param_1,param_2);
    uVar5 = uVar5 ^ 1;
  }
                    /* try { // try from 00a5e4e4 to 00a5e4eb has its CatchHandler @ 00a5e5b8 */
  uVar6 = FUN_00a5ee40(piVar8 + 2,param_2);
  if ((((uVar5 & 1) == 0) && ((*puVar4 & 0x7fffffffffffffff) != 0)) &&
     (uVar7 = std::panicking::panic_count::is_zero_slow_path(), (uVar7 & 1) == 0)) {
    *(undefined1 *)(piVar8 + 1) = 1;
  }
  do {
    iVar1 = *piVar8;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
    if (bVar3) {
      *piVar8 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 == 2) {
    syscall(0x62,piVar8,0x81,1);
    return uVar6;
  }
  return uVar6;
}


// ===== 00a5e5d4  <&std::io::stdio::Stdin_as_alloc::io::read::Read>::read_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::io::stdio::Stdin as alloc::io::read::Read>::read_vectored */

undefined8 __rustcall
<&std::io::stdio::Stdin_as_alloc::io::read::Read>::read_vectored
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  byte bVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  int *local_40;
  byte local_38;
  
  piVar8 = *(int **)*param_1;
  do {
    if (*piVar8 != 0) {
      ClearExclusiveLocal();
      param_1 = (undefined8 *)
                <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                          (piVar8);
      uVar7 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      goto joined_r0x00a5e6f4;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
    if (bVar3) {
      *piVar8 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar7 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
  puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
joined_r0x00a5e6f4:
  PTR_GLOBAL_PANIC_COUNT_00b00bf0 = (undefined *)puVar4;
  if ((uVar7 & 0x7fffffffffffffff) == 0) {
    bVar5 = 0;
  }
  else {
    bVar5 = std::panicking::panic_count::is_zero_slow_path(param_1,param_2,param_3);
    bVar5 = bVar5 ^ 1;
  }
  local_40 = piVar8;
  local_38 = bVar5;
                    /* try { // try from 00a5e628 to 00a5e62f has its CatchHandler @ 00a5e714 */
  uVar6 = <std::io::stdio::StdinLock_as_alloc::io::read::Read>::read_vectored
                    (&local_40,param_2,param_3);
  if ((((bVar5 & 1) == 0) && ((*puVar4 & 0x7fffffffffffffff) != 0)) &&
     (uVar7 = std::panicking::panic_count::is_zero_slow_path(), (uVar7 & 1) == 0)) {
    *(undefined1 *)(piVar8 + 1) = 1;
  }
  do {
    iVar1 = *piVar8;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
    if (bVar3) {
      *piVar8 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 == 2) {
    syscall(0x62,piVar8,0x81,1);
    return uVar6;
  }
  return uVar6;
}


// ===== 00a5e730  <&std::io::stdio::Stdin_as_alloc::io::read::Read>::read_buf_exact =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::io::stdio::Stdin as alloc::io::read::Read>::read_buf_exact */

undefined8 __rustcall
<&std::io::stdio::Stdin_as_alloc::io::read::Read>::read_buf_exact
          (undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  byte bVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  int *local_40;
  byte local_38;
  
  piVar8 = *(int **)*param_1;
  do {
    if (*piVar8 != 0) {
      ClearExclusiveLocal();
      param_1 = (undefined8 *)
                <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                          (piVar8);
      uVar7 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      goto joined_r0x00a5e838;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
    if (bVar3) {
      *piVar8 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar7 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
  puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
joined_r0x00a5e838:
  PTR_GLOBAL_PANIC_COUNT_00b00bf0 = (undefined *)puVar4;
  if ((uVar7 & 0x7fffffffffffffff) == 0) {
    bVar5 = 0;
  }
  else {
    bVar5 = std::panicking::panic_count::is_zero_slow_path(param_1,param_2);
    bVar5 = bVar5 ^ 1;
  }
  local_40 = piVar8;
  local_38 = bVar5;
                    /* try { // try from 00a5e784 to 00a5e78b has its CatchHandler @ 00a5e850 */
  uVar6 = <std::io::stdio::StdinLock_as_alloc::io::read::Read>::read_buf_exact(&local_40,param_2);
  if ((((bVar5 & 1) == 0) && ((*puVar4 & 0x7fffffffffffffff) != 0)) &&
     (uVar7 = std::panicking::panic_count::is_zero_slow_path(), (uVar7 & 1) == 0)) {
    *(undefined1 *)(piVar8 + 1) = 1;
  }
  do {
    iVar1 = *piVar8;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
    if (bVar3) {
      *piVar8 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 == 2) {
    syscall(0x62,piVar8,0x81,1);
    return uVar6;
  }
  return uVar6;
}


// ===== 00a5e86c  <&std::io::stdio::Stdin_as_alloc::io::read::Read>::read_to_string =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::io::stdio::Stdin as alloc::io::read::Read>::read_to_string */

undefined8 __rustcall
<&std::io::stdio::Stdin_as_alloc::io::read::Read>::read_to_string
          (undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  byte bVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  int *local_40;
  byte local_38;
  
  piVar8 = *(int **)*param_1;
  do {
    if (*piVar8 != 0) {
      ClearExclusiveLocal();
      param_1 = (undefined8 *)
                <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                          (piVar8);
      uVar7 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      goto joined_r0x00a5e984;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
    if (bVar3) {
      *piVar8 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar7 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
  puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
joined_r0x00a5e984:
  PTR_GLOBAL_PANIC_COUNT_00b00bf0 = (undefined *)puVar4;
  if ((uVar7 & 0x7fffffffffffffff) == 0) {
    bVar5 = 0;
  }
  else {
    bVar5 = std::panicking::panic_count::is_zero_slow_path(param_1,param_2);
    bVar5 = bVar5 ^ 1;
  }
  local_40 = piVar8;
  local_38 = bVar5;
                    /* try { // try from 00a5e8c0 to 00a5e8c7 has its CatchHandler @ 00a5e99c */
  uVar6 = <std::io::stdio::StdinLock_as_alloc::io::read::Read>::read_to_string(&local_40,param_2);
  if ((((bVar5 & 1) == 0) && ((*puVar4 & 0x7fffffffffffffff) != 0)) &&
     (uVar7 = std::panicking::panic_count::is_zero_slow_path(), (uVar7 & 1) == 0)) {
    *(undefined1 *)(piVar8 + 1) = 1;
  }
  do {
    iVar1 = *piVar8;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
    if (bVar3) {
      *piVar8 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 == 2) {
    syscall(0x62,piVar8,0x81,1);
    return uVar6;
  }
  return uVar6;
}


// ===== 00a5e9b8  <&std::io::stdio::Stdin_as_alloc::io::read::Read>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::io::stdio::Stdin as alloc::io::read::Read>::read */

undefined8 __rustcall
<&std::io::stdio::Stdin_as_alloc::io::read::Read>::read
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  
  piVar8 = *(int **)*param_1;
  do {
    if (*piVar8 != 0) {
      ClearExclusiveLocal();
      param_1 = (undefined8 *)
                <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                          (piVar8);
      uVar7 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      goto joined_r0x00a5eac4;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
    if (bVar3) {
      *piVar8 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar7 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
  puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
joined_r0x00a5eac4:
  PTR_GLOBAL_PANIC_COUNT_00b00bf0 = (undefined *)puVar4;
  if ((uVar7 & 0x7fffffffffffffff) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = std::panicking::panic_count::is_zero_slow_path(param_1,param_2,param_3);
    uVar5 = uVar5 ^ 1;
  }
                    /* try { // try from 00a5ea00 to 00a5ea07 has its CatchHandler @ 00a5eae4 */
  uVar6 = FUN_00a5ef94(piVar8 + 2,param_2,param_3);
  if ((((uVar5 & 1) == 0) && ((*puVar4 & 0x7fffffffffffffff) != 0)) &&
     (uVar7 = std::panicking::panic_count::is_zero_slow_path(), (uVar7 & 1) == 0)) {
    *(undefined1 *)(piVar8 + 1) = 1;
  }
  do {
    iVar1 = *piVar8;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
    if (bVar3) {
      *piVar8 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 == 2) {
    syscall(0x62,piVar8,0x81,1);
    return uVar6;
  }
  return uVar6;
}


// ===== 00a5eb00  <&std::io::stdio::Stdin_as_alloc::io::read::Read>::read_buf =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::io::stdio::Stdin as alloc::io::read::Read>::read_buf */

undefined8 __rustcall
<&std::io::stdio::Stdin_as_alloc::io::read::Read>::read_buf(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  
  piVar8 = *(int **)*param_1;
  do {
    if (*piVar8 != 0) {
      ClearExclusiveLocal();
      param_1 = (undefined8 *)
                <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                          (piVar8);
      uVar7 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      goto joined_r0x00a5ebf4;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
    if (bVar3) {
      *piVar8 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar7 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
  puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
joined_r0x00a5ebf4:
  PTR_GLOBAL_PANIC_COUNT_00b00bf0 = (undefined *)puVar4;
  if ((uVar7 & 0x7fffffffffffffff) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = std::panicking::panic_count::is_zero_slow_path(param_1,param_2);
    uVar5 = uVar5 ^ 1;
  }
                    /* try { // try from 00a5eb48 to 00a5eb4f has its CatchHandler @ 00a5ec0c */
  uVar6 = FUN_00a5f1a8(piVar8 + 2,param_2);
  if ((((uVar5 & 1) == 0) && ((*puVar4 & 0x7fffffffffffffff) != 0)) &&
     (uVar7 = std::panicking::panic_count::is_zero_slow_path(), (uVar7 & 1) == 0)) {
    *(undefined1 *)(piVar8 + 1) = 1;
  }
  do {
    iVar1 = *piVar8;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
    if (bVar3) {
      *piVar8 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 == 2) {
    syscall(0x62,piVar8,0x81,1);
    return uVar6;
  }
  return uVar6;
}


// ===== 00a5ec28  <(&str,u16)as_std::net::socket_addr::ToSocketAddrs>::to_socket_addrs =====

/* WARNING: Removing unreachable block (ram,0x00a5ecc8) */
/* WARNING: Unknown calling convention: __rustcall */
/* <(&str, u16) as std::net::socket_addr::ToSocketAddrs>::to_socket_addrs */

void __rustcall
<(&str,u16)as_std::net::socket_addr::ToSocketAddrs>::to_socket_addrs
          (long *param_1,undefined8 *param_2)

{
  bool bVar1;
  void *__src;
  ulong __n;
  ushort uVar2;
  ushort *puVar3;
  undefined **ppuVar4;
  int iVar5;
  ushort uVar6;
  undefined8 local_220;
  undefined4 local_218;
  ulong local_210;
  undefined **local_208;
  ushort local_1ec [2];
  ushort *local_1e8;
  byte local_1e0;
  int iStack_1df;
  undefined3 uStack_1db;
  undefined5 local_1d8;
  undefined4 uStack_1d3;
  undefined7 uStack_1cf;
  long local_60;
  undefined8 uStack_58;
  
  __src = (void *)*param_2;
  __n = param_2[1];
  uVar2 = *(ushort *)(param_2 + 2);
  <core::net::ip_addr::IpAddr_as_core::str::traits::FromStr>::from_str(&local_1e0,__src,__n);
  if (local_1e0 != 2) {
    bVar1 = (local_1e0 & 1) != 0;
    iVar5 = iStack_1df;
    uVar6 = uVar2;
    if (bVar1) {
      local_220 = CONCAT53(local_1d8,uStack_1db);
      local_218 = uStack_1d3;
      iVar5 = iStack_1df << 0x10;
      uVar6 = (ushort)((uint)iStack_1df >> 0x10);
    }
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar3 = (ushort *)FUN_004b25a4(0x20,4);
    if (puVar3 != (ushort *)0x0) {
      *puVar3 = (ushort)bVar1;
      *(int *)(puVar3 + 1) = iVar5;
      *(undefined8 *)(puVar3 + 4) = local_220;
      puVar3[3] = uVar6;
      *(undefined4 *)(puVar3 + 8) = local_218;
      puVar3[10] = 0;
      puVar3[0xb] = 0;
      puVar3[0xc] = 0;
      puVar3[0xd] = 0;
      puVar3[0xe] = uVar2;
      *param_1 = (long)puVar3;
      param_1[1] = (long)puVar3;
      param_1[2] = 1;
      param_1[3] = (long)(puVar3 + 0x10);
      return;
    }
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(4,0x20);
  }
  local_1e8 = local_1ec;
  local_1ec[0] = uVar2;
  if (__n < 0x180) {
    memcpy(&local_1e0,__src,__n);
    (&local_1e0)[__n] = 0;
    <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul
              (&local_60,&local_1e0,__n + 1);
    if (local_60 != 1) {
      FUN_00a2ce98(&local_210,&local_1e8,uStack_58);
      goto joined_r0x00a5eda8;
    }
    local_208 = &PTR_DAT_00afab10;
  }
  else {
    FUN_00a24d1c(&local_210,__src,__n,&local_1e8);
joined_r0x00a5eda8:
    if ((local_210 & 1) == 0) {
      FUN_00a56e48(&local_1e0,&local_60);
      local_208 = (undefined **)CONCAT35((undefined3)uStack_1d3,local_1d8);
      param_1[2] = CONCAT35(uStack_1db,CONCAT41(iStack_1df,local_1e0));
      param_1[3] = (long)(local_208 + CONCAT71(uStack_1cf,uStack_1d3._3_1_) * 4);
      ppuVar4 = local_208;
      goto LAB_00a5eddc;
    }
  }
  ppuVar4 = (undefined **)0x0;
LAB_00a5eddc:
  *param_1 = (long)ppuVar4;
  param_1[1] = (long)local_208;
  return;
}


// ===== 00a5edf8  <std::hash::random::RandomState_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::hash::random::RandomState as core::fmt::Debug>::fmt */

void __rustcall
<std::hash::random::RandomState_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,&DAT_00383798,0xb);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish_non_exhaustive(auStack_20);
  return;
}


// ===== 00a5ee30  <std::fs::DirEntry_as_std::os::unix::fs::DirEntryExt2>::file_name_ref =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::fs::DirEntry as std::os::unix::fs::DirEntryExt2>::file_name_ref */

undefined1  [16] __rustcall
<std::fs::DirEntry_as_std::os::unix::fs::DirEntryExt2>::file_name_ref(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = *(long *)(param_1 + 0x10) + -1;
  auVar1._0_8_ = *(undefined8 *)(param_1 + 8);
  return auVar1;
}


// ===== 00a5ee3c  <std::sys::os_str::bytes::Slice_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::os_str::bytes::Slice as core::fmt::Display>::fmt */

void __rustcall <std::sys::os_str::bytes::Slice_as_core::fmt::Display>::fmt(void)

{
  (*(code *)PTR_fmt_00b07770)();
  return;
}


// ===== 00a5ee40  FUN_00a5ee40 =====

undefined1  [16] FUN_00a5ee40(long *param_1,ulong *param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong __n;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auVar9 [16];
  long local_78;
  ulong local_70;
  
  lVar8 = param_1[3];
  uVar5 = param_2[2];
  lVar6 = param_1[2];
  uVar3 = *param_2;
  lVar7 = *param_1;
  __n = lVar8 - lVar6;
  if (uVar3 - uVar5 < __n) {
    lVar4 = 0x2600000003;
    if (!CARRY8(__n,uVar5)) {
      uVar2 = __n + uVar5;
      if (__n + uVar5 <= uVar3 * 2) {
        uVar2 = uVar3 * 2;
      }
      if (uVar2 < 9) {
        uVar2 = 8;
      }
      FUN_00a3856c(&local_78,uVar3,param_2[1],uVar2,1,1);
      if (local_78 != 1) {
        *param_2 = uVar2;
        param_2[1] = local_70;
        goto LAB_00a5eef0;
      }
    }
    uVar2 = 1;
  }
  else {
LAB_00a5eef0:
    if (lVar8 != lVar6) {
      memcpy((void *)(param_2[1] + uVar5),(void *)(lVar7 + lVar6),__n);
    }
    param_1[2] = 0;
    param_1[3] = 0;
    param_2[2] = uVar5 + __n;
    auVar9 = FUN_00a23ddc(param_2,0);
    uVar3 = auVar9._8_8_;
    if ((auVar9 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
      uVar2 = 0;
      uVar5 = __n;
    }
    else if (((uVar3 & 3) < 2) || ((uVar3 & 3) != 2)) {
      uVar2 = 1;
      uVar5 = 0;
    }
    else {
      bVar1 = (uVar3 & 0xffffffff00000000) != 0x900000000;
      uVar2 = (ulong)bVar1;
      if (!bVar1) {
        uVar3 = 0;
      }
      uVar5 = 0;
      if (!bVar1) {
        uVar5 = __n;
      }
    }
    lVar4 = uVar5 + uVar3;
  }
  auVar9._8_8_ = lVar4;
  auVar9._0_8_ = uVar2;
  return auVar9;
}


// ===== 00a5ef94  FUN_00a5ef94 =====

undefined1  [16] FUN_00a5ef94(undefined8 *param_1,undefined1 *param_2,ulong param_3)

{
  void *__src;
  undefined1 uVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulong uVar5;
  int *piVar6;
  ulong __n;
  size_t __nbytes;
  void *__buf;
  ulong *puVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  puVar7 = param_1 + 2;
  uVar8 = *puVar7;
  uVar5 = param_1[3];
  __nbytes = param_1[1];
  if ((uVar5 == uVar8) && (__nbytes <= param_3)) {
    *puVar7 = 0;
    param_1[3] = 0;
    uVar5 = read(0,param_2,param_3);
    if (uVar5 != 0xffffffffffffffff) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar5;
      return auVar4 << 0x40;
    }
    piVar6 = (int *)__errno();
    iVar2 = *piVar6;
    if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
    }
    uVar5 = (long)iVar2 << 0x20 | 2;
    auVar9._1_7_ = 0;
    auVar9[0] = iVar2 != 9;
    if (iVar2 == 9) {
      uVar5 = 0;
    }
    auVar9._8_8_ = uVar5;
    return auVar9;
  }
  __buf = (void *)*param_1;
  __n = uVar5 - uVar8;
  if (uVar5 < uVar8 || __n == 0) {
    uVar1 = *(undefined1 *)(param_1 + 4);
    if (0x7ffffffffffffffe < __nbytes) {
      __nbytes = 0x7fffffffffffffff;
    }
    uVar5 = read(0,__buf,__nbytes);
    if (uVar5 == 0xffffffffffffffff) {
      piVar6 = (int *)__errno();
      iVar2 = *piVar6;
      if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
        core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
      }
      if (iVar2 != 9) {
        *puVar7 = 0;
        param_1[3] = 0;
        __n = (long)iVar2 << 0x20 | 2;
        *(undefined1 *)(param_1 + 4) = uVar1;
        goto LAB_00a5f18c;
      }
      uVar5 = 0;
    }
    uVar8 = 0;
    param_1[3] = uVar5;
    *(undefined1 *)(param_1 + 4) = uVar1;
    __src = __buf;
    __n = uVar5;
    if (param_3 <= uVar5) {
      __n = param_3;
    }
  }
  else {
    if (__buf == (void *)0x0) {
LAB_00a5f18c:
      auVar10._8_8_ = __n;
      auVar10._0_8_ = 1;
      return auVar10;
    }
    __src = (void *)((long)__buf + uVar8);
    if (param_3 <= __n) {
      __n = param_3;
    }
  }
  if (__n == 1) {
    *param_2 = *(undefined1 *)((long)__buf + uVar8);
  }
  else {
    memcpy(param_2,__src,__n);
  }
  if (uVar8 + __n <= uVar5) {
    uVar5 = uVar8 + __n;
  }
  *puVar7 = uVar5;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = __n;
  return auVar3 << 0x40;
}


// ===== 00a5f1a8  FUN_00a5f1a8 =====

ulong FUN_00a5f1a8(undefined8 *param_1,long *param_2)

{
  undefined1 uVar1;
  int iVar2;
  ssize_t sVar3;
  int *piVar4;
  size_t sVar5;
  long lVar6;
  void *__buf;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  
  puVar7 = param_1 + 2;
  uVar9 = *puVar7;
  uVar10 = param_1[3];
  if (uVar10 == uVar9) {
    lVar8 = param_2[2];
    sVar5 = param_2[1] - lVar8;
    if ((ulong)param_1[1] <= sVar5) {
      lVar6 = *param_2;
      *puVar7 = 0;
      param_1[3] = 0;
      if (0x7ffffffffffffffe < sVar5) {
        sVar5 = 0x7fffffffffffffff;
      }
      sVar3 = read(0,(void *)(lVar6 + lVar8),sVar5);
      if (sVar3 != -1) {
        param_2[2] = sVar3 + lVar8;
        return 0;
      }
      piVar4 = (int *)__errno();
      iVar2 = *piVar4;
      if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
        core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
      }
      uVar10 = 0;
      if (iVar2 != 9) {
        uVar10 = (long)iVar2 << 0x20 | 2;
      }
      return uVar10;
    }
  }
  else {
    lVar8 = param_2[2];
  }
  __buf = (void *)*param_1;
  sVar5 = uVar10 - uVar9;
  if (uVar10 < uVar9 || sVar5 == 0) {
    sVar5 = param_1[1];
    uVar1 = *(undefined1 *)(param_1 + 4);
    if (0x7ffffffffffffffe < sVar5) {
      sVar5 = 0x7fffffffffffffff;
    }
    sVar5 = read(0,__buf,sVar5);
    if (sVar5 == 0xffffffffffffffff) {
      piVar4 = (int *)__errno();
      iVar2 = *piVar4;
      if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
        core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
      }
      if (iVar2 != 9) {
        *puVar7 = 0;
        param_1[3] = 0;
        *(undefined1 *)(param_1 + 4) = uVar1;
        return (long)iVar2 << 0x20 | 2;
      }
      sVar5 = 0;
    }
    uVar9 = 0;
    param_1[3] = sVar5;
    *(undefined1 *)(param_1 + 4) = uVar1;
    uVar10 = sVar5;
  }
  else if (__buf == (void *)0x0) {
    return sVar5;
  }
  if ((ulong)(param_2[1] - lVar8) <= sVar5) {
    sVar5 = param_2[1] - lVar8;
  }
  memcpy((void *)(*param_2 + lVar8),(void *)((long)__buf + uVar9),sVar5);
  param_2[2] = sVar5 + lVar8;
  if (uVar9 + sVar5 <= uVar10) {
    uVar10 = uVar9 + sVar5;
  }
  *puVar7 = uVar10;
  return 0;
}


// ===== 00a5f3a8  <std::os::unix::net::ancillary::Messages_as_core::iter::traits::iterator::Iterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::os::unix::net::ancillary::Messages as core::iter::traits::iterator::Iterator>::next */

void __rustcall
<std::os::unix::net::ancillary::Messages_as_core::iter::traits::iterator::Iterator>::next
          (undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  
  plVar9 = (long *)param_2[2];
  plVar6 = (long *)*param_2;
  if (plVar9 == (long *)0x0) {
    if ((ulong)param_2[1] < 0x10) {
      plVar6 = (long *)0x0;
    }
    if (plVar6 != (long *)0x0) goto LAB_00a5f400;
  }
  else {
    plVar1 = (long *)(param_2[1] + (long)plVar6);
    plVar2 = (long *)((*plVar9 + 7U & 0xfffffffffffffff8) + (long)plVar9);
    plVar6 = (long *)0x0;
    if (plVar2 + 2 <= plVar1) {
      plVar6 = plVar2;
    }
    if (plVar6 != (long *)0x0 && plVar9 != plVar6) {
LAB_00a5f400:
      lVar7 = plVar6[1];
      lVar8 = *plVar6;
      param_2[2] = (long)plVar6;
      if ((int)lVar7 == 1) {
        uVar5 = *(uint *)((long)plVar6 + 0xc);
        plVar9 = (long *)((ulong)uVar5 << 0x20 | 1);
        uVar4 = 2;
        if (uVar5 == 2) {
          uVar4 = 1;
          plVar9 = plVar6 + 2;
        }
        plVar6 = plVar6 + 2;
        if (uVar5 != 1) {
          plVar6 = plVar9;
        }
        uVar3 = 0;
        if (uVar5 != 1) {
          uVar3 = uVar4;
        }
        *param_1 = uVar3;
        param_1[1] = plVar6;
        param_1[2] = lVar8 + -0x10;
        return;
      }
      lVar7 = plVar6[1];
      *param_1 = 2;
      param_1[1] = lVar7;
      param_1[2] = lVar8 + -0x10;
      return;
    }
  }
  *param_1 = 0xffffffffffffffff;
  return;
}


// ===== 00a5f464  <std::process::ChildStdout_as_alloc::io::read::Read>::read_to_end =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::process::ChildStdout as alloc::io::read::Read>::read_to_end */

void __rustcall <std::process::ChildStdout_as_alloc::io::read::Read>::read_to_end(void)

{
  (*(code *)PTR_read_to_end_00b074e8)();
  return;
}


// ===== 00a5f468  <(alloc::string::String,u16)as_std::net::socket_addr::ToSocketAddrs>::to_socket_addrs =====

/* WARNING: Unknown calling convention: __rustcall */
/* <(alloc::string::String, u16) as std::net::socket_addr::ToSocketAddrs>::to_socket_addrs */

void __rustcall
<(alloc::string::String,u16)as_std::net::socket_addr::ToSocketAddrs>::to_socket_addrs(long param_1)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined2 local_18;
  
  local_28 = *(undefined8 *)(param_1 + 8);
  uStack_20 = *(undefined8 *)(param_1 + 0x10);
  local_18 = *(undefined2 *)(param_1 + 0x18);
  <(&str,u16)as_std::net::socket_addr::ToSocketAddrs>::to_socket_addrs(&local_28);
  return;
}


// ===== 00a5f498  <std::sys::process::unix::unix::ExitStatusError_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::process::unix::unix::ExitStatusError as core::fmt::Debug>::fmt */

void __rustcall
<std::sys::process::unix::unix::ExitStatusError_as_core::fmt::Debug>::fmt
          (undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple(auStack_38,param_2,"unix_wait_status",0x10);
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::field
            (auStack_38,param_1,&DAT_00afbfd0);
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::finish();
  return;
}


// ===== 00a5f4f0  <std::io::pipe::PipeReader_as_std::os::fd::raw::FromRawFd>::from_raw_fd =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::pipe::PipeReader as std::os::fd::raw::FromRawFd>::from_raw_fd */

void __rustcall <std::io::pipe::PipeReader_as_std::os::fd::raw::FromRawFd>::from_raw_fd(int param_1)

{
  if (param_1 != -1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed(&DAT_002a1150,8,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afc050);
}


// ===== 00a5f51c  <std::fs::File_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::fs::File as core::fmt::Debug>::fmt */

void __rustcall <std::fs::File_as_core::fmt::Debug>::fmt(undefined4 *param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  FUN_00a515f4(auStack_20,*param_1,param_2,&DAT_002bd008,4);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish(auStack_20);
  return;
}


// ===== 00a5f55c  <std::env::SplitPaths_as_core::iter::traits::iterator::Iterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::env::SplitPaths as core::iter::traits::iterator::Iterator>::next */

void __rustcall
<std::env::SplitPaths_as_core::iter::traits::iterator::Iterator>::next
          (size_t *param_1,undefined8 *param_2)

{
  char *__src;
  size_t __n;
  char *pcVar1;
  void *__dest;
  long lVar2;
  size_t sVar3;
  
  if ((*(byte *)(param_2 + 2) & 1) != 0) {
    *param_1 = 0xffffffffffffffff;
    return;
  }
  __src = (char *)*param_2;
  __n = param_2[1];
  if (__n != 0) {
    sVar3 = 0;
    lVar2 = __n - 1;
    pcVar1 = __src;
    do {
      if (*pcVar1 == ':') {
        *param_2 = pcVar1 + 1;
        param_2[1] = lVar2;
        __n = sVar3;
        goto joined_r0x00a5f614;
      }
      lVar2 = lVar2 + -1;
      sVar3 = sVar3 + 1;
      pcVar1 = pcVar1 + 1;
    } while (lVar2 != -1);
  }
  *(undefined1 *)(param_2 + 2) = 1;
joined_r0x00a5f614:
  if (__n == 0) {
    *param_1 = 0;
    param_1[1] = 1;
    param_1[2] = 0;
    return;
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  __dest = (void *)FUN_004b25a4(__n,1);
  if (__dest == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(1,__n);
  }
  memcpy(__dest,__src,__n);
  *param_1 = __n;
  param_1[1] = (size_t)__dest;
  param_1[2] = __n;
  return;
}


// ===== 00a5f640  <std[17aff9129faa4dc5]::time::SystemTime_as_core[bcece726f298455b]::ops::arith::Add<core[bcece726f298455b]::time::Duration>>::add =====

/* <std[17aff9129faa4dc5]::time::SystemTime as
   core[bcece726f298455b]::ops::arith::Add<core[bcece726f298455b]::time::Duration>>::add */

undefined1  [16]
<std[17aff9129faa4dc5]::time::SystemTime_as_core[bcece726f298455b]::ops::arith::Add<core[bcece726f298455b]::time::Duration>>
::add(long param_1,int param_2,long param_3,int param_4,undefined8 param_5)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  lVar3 = param_1 + param_3;
  if (param_3 < 0 == SCARRY8(param_1,param_3)) {
    uVar1 = param_4 + param_2;
    if (999999999 < uVar1) {
      bVar2 = SCARRY8(lVar3,1);
      lVar3 = lVar3 + 1;
      if (bVar2) goto LAB_00a5f684;
      uVar1 = uVar1 + 0xc4653600;
    }
    auVar4._8_4_ = uVar1;
    auVar4._0_8_ = lVar3;
    auVar4._12_4_ = 0;
    return auVar4;
  }
LAB_00a5f684:
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed(&DAT_003837a3,0x2d,param_5);
}


// ===== 00a5f6a0  <std::io::stdio::StdinLock_as_alloc::io::read::Read>::read_exact =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StdinLock as alloc::io::read::Read>::read_exact */

undefined ** __rustcall
<std::io::stdio::StdinLock_as_alloc::io::read::Read>::read_exact
          (long *param_1,void *param_2,undefined **param_3)

{
  long lVar1;
  ulong uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  long local_68;
  
  lVar5 = *param_1;
  lVar1 = *(long *)(lVar5 + 0x18);
  if ((undefined **)(*(long *)(lVar5 + 0x20) - lVar1) < param_3) {
    do {
      auVar7 = FUN_00a5ef94(lVar5 + 8,param_2,param_3);
      ppuVar3 = auVar7._8_8_;
      if (auVar7._0_8_ == 1) {
        ppuVar4 = param_3;
        if (((ulong)ppuVar3 & 3) < 2) {
          if ((auVar7 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
            if (*(char *)(ppuVar3 + 2) != '#') {
              return ppuVar3;
            }
          }
          else {
            if (*(char *)((long)ppuVar3 + 0x1f) != '#') {
              return ppuVar3;
            }
            local_68 = (long)ppuVar3 - 1;
            <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_68);
          }
        }
        else if (((ulong)ppuVar3 & 3) == 2) {
                    /* try { // try from 00a5f77c to 00a5f78f has its CatchHandler @ 00a5f820 */
          lVar1 = core::io::error::os_functions::get_os_functions();
          uVar2 = (**(code **)(lVar1 + 0x10))((ulong)ppuVar3 >> 0x20);
          if ((uVar2 & 1) == 0) {
            return ppuVar3;
          }
        }
        else {
          uVar6 = auVar7._12_4_ & 0xff;
          if (10 < (ulong)ppuVar3 >> 0x22) {
            uVar6 = 0xff;
          }
          if (uVar6 != 0x23) {
            return ppuVar3;
          }
        }
      }
      else {
        if (ppuVar3 == (undefined **)0x0) {
          return &PTR_DAT_00afa990;
        }
        ppuVar4 = (undefined **)((long)param_3 - (long)ppuVar3);
        if (param_3 < ppuVar3) {
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (ppuVar3,param_3,param_3,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afa978);
        }
        param_2 = (void *)((long)param_2 + (long)ppuVar3);
      }
      param_3 = ppuVar4;
    } while (ppuVar4 != (undefined **)0x0);
  }
  else {
    memcpy(param_2,(void *)(*(long *)(lVar5 + 8) + lVar1),(size_t)param_3);
    *(long *)(lVar5 + 0x18) = lVar1 + (long)param_3;
  }
  return (undefined **)0x0;
}


// ===== 00a5f838  <std::io::stdio::StdinLock_as_alloc::io::read::Read>::read_to_end =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StdinLock as alloc::io::read::Read>::read_to_end */

void __rustcall <std::io::stdio::StdinLock_as_alloc::io::read::Read>::read_to_end(long *param_1)

{
  FUN_00a5ee40(*param_1 + 8);
  return;
}


// ===== 00a5f844  <std::io::stdio::StdinLock_as_alloc::io::read::Read>::read_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StdinLock as alloc::io::read::Read>::read_vectored */

undefined1  [16] __rustcall
<std::io::stdio::StdinLock_as_alloc::io::read::Read>::read_vectored
          (long *param_1,iovec *param_2,ulong param_3)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  undefined1 uVar4;
  int iVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  size_t sVar10;
  ulong uVar11;
  size_t *psVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  void *__buf;
  undefined1 *__src;
  long lVar16;
  ulong *puVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined1 auVar23 [16];
  
  lVar16 = *param_1;
  if (param_3 == 0) {
    uVar11 = 0;
  }
  else {
    if (param_3 < 5) {
      lVar8 = 0;
      uVar11 = 0;
    }
    else {
      lVar9 = 0;
      lVar20 = 0;
      lVar21 = 0;
      lVar22 = 0;
      uVar11 = 4;
      if ((param_3 & 3) != 0) {
        uVar11 = param_3 & 3;
      }
      psVar12 = &param_2[2].iov_len;
      lVar8 = param_3 - uVar11;
      lVar13 = lVar8;
      do {
        plVar2 = (long *)(psVar12 + -4);
        sVar10 = *psVar12;
        plVar14 = (long *)(psVar12 + -2);
        plVar3 = (long *)(psVar12 + 2);
        lVar13 = lVar13 + -4;
        psVar12 = psVar12 + 8;
        lVar9 = *plVar2 + lVar9;
        lVar20 = *plVar14 + lVar20;
        lVar21 = sVar10 + lVar21;
        lVar22 = *plVar3 + lVar22;
      } while (lVar13 != 0);
      uVar11 = lVar21 + lVar9 + lVar22 + lVar20;
    }
    lVar9 = param_3 - lVar8;
    psVar12 = &param_2[lVar8].iov_len;
    do {
      lVar9 = lVar9 + -1;
      uVar11 = *psVar12 + uVar11;
      psVar12 = psVar12 + 2;
    } while (lVar9 != 0);
  }
  puVar17 = (ulong *)(lVar16 + 0x18);
  uVar18 = *puVar17;
  uVar19 = *(ulong *)(lVar16 + 0x20);
  sVar10 = *(ulong *)(lVar16 + 0x10);
  if ((uVar19 == uVar18) && (sVar10 <= uVar11)) {
    if (0x3ff < param_3) {
      param_3 = 0x400;
    }
    *puVar17 = 0;
    *(undefined8 *)(lVar16 + 0x20) = 0;
    uVar11 = readv(0,param_2,(int)param_3);
    if (uVar11 == 0xffffffffffffffff) {
      piVar7 = (int *)__errno();
      iVar5 = *piVar7;
      if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
        core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
      }
      uVar11 = (long)iVar5 << 0x20 | 2;
      uVar6 = (ulong)(iVar5 != 9);
      if (iVar5 == 9) {
        uVar11 = 0;
      }
    }
    else {
      uVar6 = 0;
    }
    goto LAB_00a5fab8;
  }
  __buf = *(void **)(lVar16 + 8);
  uVar11 = uVar19 - uVar18;
  if (uVar19 < uVar18 || uVar11 == 0) {
    uVar4 = *(undefined1 *)(lVar16 + 0x28);
    if (0x7ffffffffffffffe < sVar10) {
      sVar10 = 0x7fffffffffffffff;
    }
    uVar11 = ::read(0,__buf,sVar10);
    if (uVar11 == 0xffffffffffffffff) {
      piVar7 = (int *)__errno();
      iVar5 = *piVar7;
      if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
        core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
      }
      if (iVar5 != 9) {
        *puVar17 = 0;
        *(undefined8 *)(lVar16 + 0x20) = 0;
        uVar11 = (long)iVar5 << 0x20 | 2;
        *(undefined1 *)(lVar16 + 0x28) = uVar4;
        goto LAB_00a5fab4;
      }
      uVar11 = 0;
    }
    uVar18 = 0;
    *(ulong *)(lVar16 + 0x20) = uVar11;
    *(undefined1 *)(lVar16 + 0x28) = uVar4;
    uVar19 = uVar11;
  }
  else if (__buf == (void *)0x0) {
LAB_00a5fab4:
    uVar6 = 1;
    goto LAB_00a5fab8;
  }
  lVar16 = param_3 << 4;
  uVar6 = 0;
  __src = (undefined1 *)((long)__buf + uVar18);
  uVar15 = uVar11;
  do {
    uVar11 = uVar6;
    if (lVar16 == 0) break;
    uVar11 = param_2->iov_len;
    sVar10 = uVar15;
    if (uVar11 <= uVar15) {
      sVar10 = uVar11;
    }
    if (sVar10 == 1) {
      *(undefined1 *)param_2->iov_base = *__src;
    }
    else {
      memcpy(param_2->iov_base,__src,sVar10);
    }
    param_2 = param_2 + 1;
    __src = __src + sVar10;
    uVar6 = sVar10 + uVar6;
    lVar16 = lVar16 + -0x10;
    bVar1 = uVar11 < uVar15;
    uVar15 = uVar15 - sVar10;
    uVar11 = uVar6;
  } while (bVar1);
  uVar6 = 0;
  if (uVar11 + uVar18 <= uVar19) {
    uVar19 = uVar11 + uVar18;
  }
  *puVar17 = uVar19;
LAB_00a5fab8:
  auVar23._8_8_ = uVar11;
  auVar23._0_8_ = uVar6;
  return auVar23;
}


// ===== 00a5fad8  <std::io::stdio::StdinLock_as_alloc::io::read::Read>::read_buf_exact =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StdinLock as alloc::io::read::Read>::read_buf_exact */

undefined ** __rustcall
<std::io::stdio::StdinLock_as_alloc::io::read::Read>::read_buf_exact(long *param_1,long *param_2)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long local_58;
  
  lVar6 = *param_1;
  lVar3 = param_2[1];
  lVar7 = param_2[2];
  lVar1 = *(long *)(lVar6 + 0x18);
  uVar5 = lVar3 - lVar7;
  if ((ulong)(*(long *)(lVar6 + 0x20) - lVar1) < uVar5) {
    if (lVar3 != lVar7) {
      do {
        while( true ) {
          while (ppuVar2 = (undefined **)FUN_00a5f1a8(lVar6 + 8,param_2),
                ppuVar2 == (undefined **)0x0) {
            lVar3 = param_2[2];
            if (lVar3 == lVar7) {
              return &PTR_DAT_00afa990;
            }
            lVar7 = lVar3;
            if (param_2[1] == lVar3) {
              return (undefined **)0x0;
            }
          }
          uVar5 = (ulong)ppuVar2 & 3;
          if (uVar5 < 2) break;
          if (uVar5 == 2) {
                    /* try { // try from 00a5fb88 to 00a5fb9b has its CatchHandler @ 00a5fc50 */
            lVar3 = core::io::error::os_functions::get_os_functions();
            uVar5 = (**(code **)(lVar3 + 0x10))((ulong)ppuVar2 >> 0x20);
            if ((uVar5 & 1) == 0) {
              return ppuVar2;
            }
          }
          else {
            uVar4 = (uint)((ulong)ppuVar2 >> 0x20) & 0xff;
            if (10 < (ulong)ppuVar2 >> 0x22) {
              uVar4 = 0xff;
            }
LAB_00a5fbe4:
            if (uVar4 != 0x23) {
              return ppuVar2;
            }
          }
          lVar7 = param_2[2];
          if (param_2[1] == param_2[2]) {
            return (undefined **)0x0;
          }
        }
        if (uVar5 == 0) {
          uVar4 = (uint)*(byte *)(ppuVar2 + 2);
          goto LAB_00a5fbe4;
        }
        if (*(char *)((long)ppuVar2 + 0x1f) != '#') {
          return ppuVar2;
        }
        local_58 = (long)ppuVar2 - 1;
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_58);
        lVar7 = param_2[2];
      } while (param_2[1] != param_2[2]);
    }
  }
  else {
    memcpy((void *)(*param_2 + lVar7),(void *)(*(long *)(lVar6 + 8) + lVar1),uVar5);
    param_2[2] = lVar3;
    *(ulong *)(lVar6 + 0x18) = lVar1 + uVar5;
  }
  return (undefined **)0x0;
}


// ===== 00a5fc68  <std::io::stdio::StdinLock_as_alloc::io::read::Read>::read_to_string =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StdinLock as alloc::io::read::Read>::read_to_string */

undefined1  [16] __rustcall
<std::io::stdio::StdinLock_as_alloc::io::read::Read>::read_to_string(long *param_1,long *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 *__ptr;
  undefined *puVar3;
  long lVar4;
  undefined1 auVar5 [16];
  long local_70;
  undefined1 *local_68;
  undefined8 local_60;
  long local_58;
  void *local_50;
  ulong uStack_48;
  
  lVar4 = param_2[2];
  if (lVar4 == 0) {
                    /* try { // try from 00a5fcd0 to 00a5fcdb has its CatchHandler @ 00a5fdf4 */
    auVar5 = FUN_00a5ee40(*param_1 + 8,param_2);
    puVar3 = auVar5._8_8_;
    lVar4 = param_2[2];
                    /* try { // try from 00a5fce8 to 00a5fcf3 has its CatchHandler @ 00a5fddc */
    <core::str::str>::from_utf8(&local_58,param_2[1],lVar4);
    if (local_58 != 0) {
      if ((auVar5 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
        puVar3 = &UNK_00afa960;
      }
      auVar5._8_8_ = puVar3;
      auVar5._0_8_ = 1;
      param_2[2] = 0;
      return auVar5;
    }
    param_2[2] = lVar4;
    return auVar5;
  }
  local_60 = 0;
  local_70 = 0;
  local_68 = &DAT_00000001;
                    /* try { // try from 00a5fc9c to 00a5fca7 has its CatchHandler @ 00a5fe04 */
  auVar5 = FUN_00a5ee40(*param_1 + 8,&local_70);
  __ptr = local_68;
  puVar3 = auVar5._8_8_;
  if (auVar5._0_8_ == 1) {
joined_r0x00a5fd40:
    if (local_70 != 0) {
      free(local_68);
    }
    auVar1._8_8_ = puVar3;
    auVar1._0_8_ = 1;
    return auVar1;
  }
                    /* try { // try from 00a5fd1c to 00a5fd27 has its CatchHandler @ 00a5fe04 */
  core::str::converts::from_utf8(&local_58,local_68,local_60);
  if (local_58 == 1) {
    puVar3 = &UNK_00afa960;
    goto joined_r0x00a5fd40;
  }
  if ((ulong)(*param_2 - lVar4) < uStack_48) {
                    /* try { // try from 00a5fdbc to 00a5fdd3 has its CatchHandler @ 00a5fe04 */
    FUN_00a29778(param_2,lVar4,uStack_48,1,1);
    lVar4 = param_2[2];
  }
  else if (uStack_48 == 0) goto LAB_00a5fd74;
  memcpy((void *)(param_2[1] + lVar4),local_50,uStack_48);
LAB_00a5fd74:
  param_2[2] = lVar4 + uStack_48;
  if (local_70 != 0) {
    free(__ptr);
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uStack_48;
  return auVar2 << 0x40;
}


// ===== 00a5fe24  <std::io::stdio::StdinLock_as_alloc::io::read::Read>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StdinLock as alloc::io::read::Read>::read */

void __rustcall <std::io::stdio::StdinLock_as_alloc::io::read::Read>::read(long *param_1)

{
  FUN_00a5ef94(*param_1 + 8);
  return;
}


// ===== 00a5fe30  <std::io::stdio::StdinLock_as_alloc::io::read::Read>::read_buf =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StdinLock as alloc::io::read::Read>::read_buf */

void __rustcall <std::io::stdio::StdinLock_as_alloc::io::read::Read>::read_buf(long *param_1)

{
  FUN_00a5f1a8(*param_1 + 8);
  return;
}


// ===== 00a5fe3c  <str_as_std::net::socket_addr::ToSocketAddrs>::to_socket_addrs =====

/* WARNING: Removing unreachable block (ram,0x00a60090) */
/* WARNING: Unknown calling convention: __rustcall */
/* <str as std::net::socket_addr::ToSocketAddrs>::to_socket_addrs */

void __rustcall
<str_as_std::net::socket_addr::ToSocketAddrs>::to_socket_addrs
          (long *param_1,void *param_2,long param_3)

{
  byte bVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  ulong uVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  short local_220;
  undefined6 uStack_21e;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  ulong local_200;
  undefined **local_1f8;
  long lStack_1f0;
  undefined2 local_1dc [2];
  undefined2 *local_1d8;
  void *local_1d0;
  long local_1c8;
  long local_1c0;
  long lStack_1b8;
  undefined8 local_1b0;
  undefined1 local_1a8;
  ulong local_50;
  undefined8 uStack_48;
  
  <core::net::socket_addr::SocketAddr_as_core::str::traits::FromStr>::from_str(&local_220);
  if (local_220 != 2) {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar4 = (undefined8 *)FUN_004b25a4(0x20,4);
    if (puVar4 != (undefined8 *)0x0) {
      *param_1 = (long)puVar4;
      param_1[1] = (long)puVar4;
      param_1[2] = 1;
      param_1[3] = (long)(puVar4 + 4);
      puVar4[1] = uStack_218;
      *puVar4 = CONCAT62(uStack_21e,local_220);
      puVar4[3] = uStack_208;
      puVar4[2] = uStack_210;
      return;
    }
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(4,0x20);
  }
  local_1c0 = 0;
  local_1a8 = 1;
  local_1b0 = 0x3a0000003a;
  local_1d0 = param_2;
  local_1c8 = param_3;
  lStack_1b8 = param_3;
  FUN_00a59ba4(&local_200,&local_1d0);
  ppuVar2 = local_1f8;
  if (local_200 == 1) {
    param_3 = param_3 - lStack_1f0;
    if (param_3 == 0) {
code_r0x00a5ff2c:
      ppuVar3 = &PTR_DAT_00afb978;
    }
    else {
      pbVar6 = (byte *)((long)param_2 + lStack_1f0);
      if (param_3 == 1) {
        bVar1 = *pbVar6;
        ppuVar3 = &PTR_DAT_00afb978;
        if ((bVar1 == 0x2b) || (bVar1 == 0x2d)) goto LAB_00a5ff80;
        uVar5 = (ulong)(bVar1 != 0x2b);
        if (bVar1 == 0x2b) {
          pbVar6 = pbVar6 + 1;
        }
      }
      else {
        uVar5 = param_3 - (ulong)(*pbVar6 == 0x2b);
        if (*pbVar6 == 0x2b) {
          pbVar6 = pbVar6 + 1;
        }
      }
      if (uVar5 < 5) {
        iVar7 = 0;
        local_1dc[0] = 0;
        if (uVar5 != 0) {
          do {
            ppuVar3 = &PTR_DAT_00afb978;
            if (9 < *pbVar6 - 0x30) goto LAB_00a5ff80;
            iVar7 = (*pbVar6 - 0x30) + iVar7 * 10;
            local_1dc[0] = (undefined2)iVar7;
            uVar5 = uVar5 - 1;
            pbVar6 = pbVar6 + 1;
          } while (uVar5 != 0);
        }
LAB_00a5ff20:
        local_1d8 = local_1dc;
        if (local_1f8 < (undefined **)0x180) {
          memcpy(&local_1d0,param_2,(size_t)local_1f8);
          *(undefined1 *)((long)&local_1d0 + (long)ppuVar2) = 0;
          <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul
                    (&local_50,&local_1d0,(long)ppuVar2 + 1);
          if (local_50 == 1) {
            local_1f8 = &PTR_DAT_00afab10;
            ppuVar3 = local_1f8;
            goto LAB_00a5ff80;
          }
          FUN_00a2ce98(&local_200,&local_1d8,uStack_48);
        }
        else {
          FUN_00a24d1c(&local_200,param_2,local_1f8,&local_1d8);
        }
        ppuVar3 = local_1f8;
        if ((local_200 & 1) == 0) {
          FUN_00a56e48(&local_1d0,&local_50);
          param_1[2] = (long)local_1d0;
          param_1[3] = local_1c8 + local_1c0 * 0x20;
          *param_1 = local_1c8;
          param_1[1] = local_1c8;
          return;
        }
      }
      else {
        uVar8 = 0;
        do {
          local_1dc[0] = (undefined2)uVar8;
          if (uVar5 == 0) goto LAB_00a5ff20;
          uVar8 = ((uVar8 & 0xffff) + (uVar8 & 0xffff) * 4) * 2;
          if ((uVar8 & 0xf0000) != 0) goto code_r0x00a5ff2c;
          ppuVar3 = &PTR_DAT_00afb978;
          if (9 < *pbVar6 - 0x30) break;
          uVar5 = uVar5 - 1;
          uVar8 = (uVar8 & 0xffff) + (*pbVar6 - 0x30 & 0xffff);
          pbVar6 = pbVar6 + 1;
        } while (uVar8 >> 0x10 == 0);
      }
    }
  }
  else {
    ppuVar3 = &PTR_DAT_00afb990;
  }
LAB_00a5ff80:
  local_1f8 = ppuVar3;
  *param_1 = 0;
  param_1[1] = (long)local_1f8;
  return;
}


// ===== 00a60110  <std::net::tcp::TcpStream_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::net::tcp::TcpStream as core::fmt::Debug>::fmt */

void __rustcall <std::net::tcp::TcpStream_as_core::fmt::Debug>::fmt(void)

{
  (*(code *)PTR_fmt_00b078c0)();
  return;
}


// ===== 00a60114  FUN_00a60114 =====

void FUN_00a60114(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,&DAT_002a1560,8,&local_18,&DAT_00afbff0);
  return;
}


// ===== 00a60154  FUN_00a60154 =====

void FUN_00a60154(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,&DAT_003837d0,0xf,&local_18,&DAT_00afc010);
  return;
}


// ===== 00a60194  <std::os::fd::owned::BorrowedFd_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::os::fd::owned::BorrowedFd as core::fmt::Debug>::fmt */

void __rustcall
<std::os::fd::owned::BorrowedFd_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_30 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,&DAT_003837df,10);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (auStack_30,&DAT_00382e9a,2,param_1,&DAT_00afc030);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 00a601f8  <std::sys::net::connection::socket::TcpStream_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::net::connection::socket::TcpStream as core::fmt::Debug>::fmt */

void __rustcall
<std::sys::net::connection::socket::TcpStream_as_core::fmt::Debug>::fmt
          (undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_70 [16];
  short local_60;
  undefined6 uStack_5e;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulong uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_70,param_2,&DAT_003837e9,9);
  uVar1 = *param_1;
  FUN_00a37af8(&local_60,uVar1);
  if (local_60 == 2) {
    if ((1 < (uStack_58 & 3) - 2) && ((uStack_58 & 3) != 0)) {
      uStack_38 = uStack_58 - 1;
      local_40 = CONCAT71(local_40._1_7_,3);
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&uStack_38);
    }
  }
  else {
    local_40 = CONCAT62(uStack_5e,local_60);
    uStack_38 = uStack_58;
    uStack_28 = uStack_48;
    uStack_30 = uStack_50;
                    /* try { // try from 00a60284 to 00a602a3 has its CatchHandler @ 00a60368 */
    <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
              (auStack_70,&DAT_002bcff4,4,&local_40,&DAT_00afc068);
  }
  FUN_00a37c90(&local_60,uVar1);
  if (local_60 == 2) {
    if ((1 < (uStack_58 & 3) - 2) && ((uStack_58 & 3) != 0)) {
      uStack_38 = uStack_58 - 1;
      local_40 = CONCAT71(local_40._1_7_,3);
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&uStack_38);
    }
  }
  else {
    local_40 = CONCAT62(uStack_5e,local_60);
    uStack_38 = uStack_58;
    uStack_28 = uStack_48;
    uStack_30 = uStack_50;
                    /* try { // try from 00a602fc to 00a6031b has its CatchHandler @ 00a60354 */
    <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
              (auStack_70,&DAT_002bd278,4,&local_40,&DAT_00afc068);
  }
  local_40 = CONCAT44(local_40._4_4_,uVar1);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (auStack_70,&DAT_00382e9a,2,&local_40,&DAT_00afb920);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 00a60384  <std::sys::process::unix::common::Command_as_core::fmt::Debug>::fmt =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::process::unix::common::Command as core::fmt::Debug>::fmt */

undefined8 __rustcall
<std::sys::process::unix::common::Command_as_core::fmt::Debug>::fmt
          (long param_1,undefined8 *param_2)

{
  ushort *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  size_t sVar7;
  bool bVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 ******ppppppuVar16;
  undefined8 uVar17;
  long *plVar18;
  undefined8 ******__s;
  ulong uVar19;
  size_t __n;
  undefined8 *puVar20;
  long *plVar21;
  long local_a8;
  long lStack_a0;
  long *******local_98;
  code *local_90;
  undefined8 *******local_80;
  code *local_78;
  long *local_70;
  undefined *puStack_68;
  
  if (*(char *)((long)param_2 + 0x12) < '\0') {
    <core::fmt::[a]::core::fmt::Formatter>::debug_struct(&local_80,param_2,&DAT_003837f9,7);
    uVar17 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                       (&local_80,&DAT_00383800,7,param_1 + 0x80,&PTR_FUN_00afc0a0);
    <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
              (uVar17,&DAT_002bcfd4,4,param_1,&PTR_FUN_00afc0c0);
    if (((*(byte *)(param_1 + 0x78) & 1) != 0) || (*(long *)(param_1 + 0x70) != 0)) {
      <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                (&local_80,&DAT_00383807,3,param_1 + 0x60,&PTR_FUN_00afc0e0);
    }
    if (*(long *)(param_1 + 0x90) != 0) {
      <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                (&local_80,&DAT_0038380a,3,(long *)(param_1 + 0x90),&PTR_FUN_00afc100);
    }
    if (*(int *)(param_1 + 0x30) != 0) {
      <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                (&local_80,&DAT_0038380d,3,(int *)(param_1 + 0x30),&DAT_00afc120);
    }
    if (*(int *)(param_1 + 0x38) != 0) {
      <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                (&local_80,&DAT_00383810,3,(int *)(param_1 + 0x38),&DAT_00afc120);
    }
    if (*(long *)(param_1 + 0xb0) != 0) {
      <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                (&local_80,&DAT_00383813,6,(long *)(param_1 + 0xb0),&PTR_FUN_00afc140);
    }
    if (*(int *)(param_1 + 0x48) != -1) {
      <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                (&local_80,&DAT_00383610,5,(int *)(param_1 + 0x48),&PTR_FUN_00afc160);
    }
    if (*(int *)(param_1 + 0x50) != -1) {
      <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                (&local_80,"stdout",6,(int *)(param_1 + 0x50),&PTR_FUN_00afc160);
    }
    if (*(int *)(param_1 + 0x58) != -1) {
      <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                (&local_80,"stderr",6,(int *)(param_1 + 0x58),&PTR_FUN_00afc160);
    }
    if (*(int *)(param_1 + 0x40) != 0) {
      <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                (&local_80,&DAT_00383819,6,(int *)(param_1 + 0x40),&DAT_00afc180);
    }
    uVar17 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish(&local_80);
    return uVar17;
  }
  if (*(long *******)(param_1 + 0x90) != (long ******)0x0) {
    local_80 = &local_98;
    local_78 = FUN_00a5b928;
    local_98 = (long *******)(param_1 + 0x90);
    uVar6 = core::fmt::write(*param_2,param_2[1],&DAT_002ac1d2,&local_80);
    if ((uVar6 & 1) != 0) {
      return 1;
    }
  }
  if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
    plVar13 = *(long **)(param_1 + 0x60);
    lVar15 = *(long *)(param_1 + 0x70);
    if ((plVar13 != (long *)0x0) && (lVar15 != 0)) {
      uVar6 = *(ulong *)(param_1 + 0x68);
      bVar8 = false;
      plVar21 = (long *)0x0;
      plVar9 = plVar13;
      lVar12 = lVar15;
      do {
        if (plVar21 == (long *)0x0) {
          for (; plVar21 = plVar9, uVar6 != 0; uVar6 = uVar6 - 1) {
            plVar9 = (long *)plVar21[0x44];
          }
          plVar9 = (long *)0x0;
          uVar6 = 0;
          plVar11 = plVar21;
          if (*(short *)((long)plVar21 + 0x21a) == 0) goto LAB_00a60680;
        }
        else {
          plVar11 = plVar21;
          if (*(ushort *)((long)plVar21 + 0x21a) <= uVar6) {
LAB_00a60680:
            do {
              plVar21 = (long *)*plVar11;
              if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                core::option::unwrap_failed(&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afac98);
              }
              puVar1 = (ushort *)(plVar11 + 0x43);
              uVar6 = (ulong)*puVar1;
              plVar9 = (long *)((long)plVar9 + 1);
              plVar11 = plVar21;
            } while (*(ushort *)((long)plVar21 + 0x21a) <= *puVar1);
          }
        }
        if (plVar9 == (long *)0x0) {
          plVar9 = plVar21 + uVar6 * 3;
          lVar10 = plVar9[0x22];
          uVar6 = uVar6 + 1;
        }
        else {
          plVar11 = plVar21 + uVar6 + 0x45;
          do {
            plVar18 = (long *)*plVar11;
            plVar9 = (long *)((long)plVar9 + -1);
            plVar11 = plVar18 + 0x44;
          } while (plVar9 != (long *)0x0);
          plVar9 = plVar21 + uVar6 * 3;
          lVar10 = plVar9[0x22];
          uVar6 = 0;
          plVar21 = plVar18;
        }
        if (lVar10 == -1) {
          lVar10 = plVar9[2];
          lVar2 = plVar9[3];
          uVar17 = *param_2;
          lVar3 = param_2[1];
          if ((!bVar8) &&
             (uVar19 = (**(code **)(lVar3 + 0x18))(uVar17,&DAT_002bd280,4), (uVar19 & 1) != 0)) {
            return 1;
          }
          <alloc::string::alloc::string::String>::from_utf8_lossy(&local_80,lVar10,lVar2);
          local_98 = (long *******)&local_80;
          local_90 = FUN_00a64ee0;
                    /* try { // try from 00a60738 to 00a6074f has its CatchHandler @ 00a60a80 */
          iVar5 = core::fmt::write(uVar17,lVar3,&DAT_002bc00c,&local_98);
          if (iVar5 != 0) {
            if ((long)local_80 < 1) {
              return 1;
            }
            free(local_78);
            return 1;
          }
          if (0 < (long)local_80) {
            free(local_78);
          }
          bVar8 = true;
        }
        lVar12 = lVar12 + -1;
        plVar9 = (long *)0x0;
      } while (lVar12 != 0);
    }
  }
  else {
    uVar6 = (**(code **)(param_2[1] + 0x18))(*param_2,&DAT_003837f2,7);
    if ((uVar6 & 1) != 0) {
      return 1;
    }
    plVar13 = *(long **)(param_1 + 0x60);
    lVar15 = *(long *)(param_1 + 0x70);
  }
  puVar4 = PTR_fmt_00b01378;
  if ((plVar13 != (long *)0x0) && (lVar15 != 0)) {
    uVar6 = *(ulong *)(param_1 + 0x68);
    plVar9 = (long *)0x0;
    do {
      if (plVar9 == (long *)0x0) {
        for (; plVar9 = plVar13, uVar6 != 0; uVar6 = uVar6 - 1) {
          plVar13 = (long *)plVar9[0x44];
        }
        plVar13 = (long *)0x0;
        uVar6 = 0;
        plVar21 = plVar9;
        if (*(short *)((long)plVar9 + 0x21a) == 0) goto LAB_00a607f0;
      }
      else {
        plVar21 = plVar9;
        if (*(ushort *)((long)plVar9 + 0x21a) <= uVar6) {
LAB_00a607f0:
          do {
            plVar9 = (long *)*plVar21;
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              core::option::unwrap_failed(&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afac98);
            }
            puVar1 = (ushort *)(plVar21 + 0x43);
            uVar6 = (ulong)*puVar1;
            plVar13 = (long *)((long)plVar13 + 1);
            plVar21 = plVar9;
          } while (*(ushort *)((long)plVar9 + 0x21a) <= *puVar1);
        }
      }
      if (plVar13 == (long *)0x0) {
        uVar19 = uVar6 + 1;
        plVar13 = plVar9 + uVar6 * 3;
        lVar12 = plVar13[0x22];
        plVar21 = plVar9;
      }
      else {
        plVar11 = plVar9 + uVar6 + 0x45;
        do {
          plVar21 = (long *)*plVar11;
          plVar13 = (long *)((long)plVar13 + -1);
          plVar11 = plVar21 + 0x44;
        } while (plVar13 != (long *)0x0);
        uVar19 = 0;
        plVar13 = plVar9 + uVar6 * 3;
        lVar12 = plVar13[0x22];
      }
      if (lVar12 != -1) {
        local_a8 = plVar13[0x23];
        lStack_a0 = plVar13[0x24];
        <alloc::string::alloc::string::String>::from_utf8_lossy
                  (&local_98,plVar9[uVar6 * 3 + 2],plVar9[uVar6 * 3 + 3]);
        puStack_68 = puVar4;
        local_78 = FUN_00a64ee0;
                    /* try { // try from 00a60888 to 00a60893 has its CatchHandler @ 00a60a98 */
        local_80 = &local_98;
        local_70 = &local_a8;
        iVar5 = core::fmt::write(*param_2,param_2[1],&DAT_002a4494,&local_80);
        if (iVar5 != 0) {
          if ((long)local_98 < 1) {
            return 1;
          }
          free(local_90);
          return 1;
        }
        if (0 < (long)local_98) {
          free(local_90);
        }
      }
      lVar15 = lVar15 + -1;
      plVar13 = (long *)0x0;
      uVar6 = uVar19;
      plVar9 = plVar21;
    } while (lVar15 != 0);
  }
  ppppppuVar16 = *(undefined8 *******)(param_1 + 0x80);
  lVar15 = *(long *)(param_1 + 0x10);
  lVar12 = lVar15 + -1;
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (0,lVar12,0,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afc088);
  }
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check(0,0,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afc088);
  }
  puVar20 = *(undefined8 **)(param_1 + 8);
  __n = *(size_t *)(param_1 + 0x88);
  __s = (undefined8 ******)*puVar20;
  sVar7 = strlen((char *)__s);
  if (__n == sVar7 + 1) {
    iVar5 = memcmp(ppppppuVar16,__s,__n);
    uVar17 = *param_2;
    if (iVar5 == 0) {
      uVar14 = param_2[1];
      goto LAB_00a60940;
    }
  }
  else {
    uVar17 = *param_2;
  }
  uVar14 = param_2[1];
  local_78 = (code *)PTR_fmt_00b00d98;
  local_80 = (undefined8 *******)(param_1 + 0x80);
  uVar6 = core::fmt::write(uVar17,uVar14,&DAT_002a7e18,&local_80);
  if ((uVar6 & 1) != 0) {
    return 1;
  }
  __s = (undefined8 ******)*puVar20;
LAB_00a60940:
  sVar7 = strlen((char *)__s);
  local_90 = (code *)(sVar7 + 1);
  local_80 = &local_98;
  local_78 = FUN_00a5b8bc;
  local_98 = (long *******)__s;
  uVar6 = core::fmt::write(uVar17,uVar14,&DAT_002ab692,&local_80);
  puVar4 = PTR_fmt_00b01378;
  if ((uVar6 & 1) != 0) {
    return 1;
  }
  if (lVar12 != 1) {
    lVar15 = lVar15 * 8 + -0x10;
    while( true ) {
      puVar20 = puVar20 + 1;
      ppppppuVar16 = (undefined8 ******)*puVar20;
      if (ppppppuVar16 == (undefined8 ******)0x0) break;
      local_90 = (code *)strlen((char *)ppppppuVar16);
      local_78 = (code *)puVar4;
      local_98 = (long *******)ppppppuVar16;
      local_80 = &local_98;
      uVar6 = core::fmt::write(uVar17,uVar14,&DAT_002acf08,&local_80);
      if ((uVar6 & 1) != 0) {
        return 1;
      }
      lVar15 = lVar15 + -8;
      if (lVar15 == 0) {
        return 0;
      }
    }
  }
  return 0;
}


// ===== 00a60ac4  <std::sys::process::unix::common::cstring_array::CStringIter_as_core::iter::traits::iterator::Iterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::process::unix::common::cstring_array::CStringIter as
   core::iter::traits::iterator::Iterator>::next */

undefined1  [16] __rustcall
<std::sys::process::unix::common::cstring_array::CStringIter_as_core::iter::traits::iterator::Iterator>
::next(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  size_t sVar3;
  char *__s;
  undefined1 auVar4 [16];
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)param_1[1]) {
    __s = (char *)*puVar1;
    *param_1 = (long)(puVar1 + 1);
    sVar3 = strlen(__s);
    auVar4._8_8_ = sVar3 + 1;
    auVar4._0_8_ = __s;
    return auVar4;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_2;
  return auVar2 << 0x40;
}


// ===== 00a60b14  <std::sys::process::unix::common::cstring_array::CStringIter_as_core::iter::traits::iterator::Iterator>::size_hint =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::process::unix::common::cstring_array::CStringIter as
   core::iter::traits::iterator::Iterator>::size_hint */

void __rustcall
<std::sys::process::unix::common::cstring_array::CStringIter_as_core::iter::traits::iterator::Iterator>
::size_hint(ulong *param_1,long *param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)(param_2[1] - *param_2) >> 3;
  *param_1 = uVar1;
  param_1[1] = 1;
  param_1[2] = uVar1;
  return;
}


// ===== 00a60b30  <&std::fs::File_as_alloc::io::read::Read>::read_to_end =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::fs::File as alloc::io::read::Read>::read_to_end */

undefined1  [16] __rustcall
<&std::fs::File_as_alloc::io::read::Read>::read_to_end(undefined8 *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  long local_58;
  ulong local_50;
  
  auVar5 = FUN_00a4a9f4(*param_1);
  uVar4 = param_2[2];
  uVar3 = *param_2;
  uVar1 = auVar5._8_8_;
  if ((auVar5 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
    uVar1 = 0;
  }
  if (uVar1 <= uVar3 - uVar4) {
LAB_00a60bfc:
    auVar5 = FUN_00a2407c(param_1,param_2,auVar5._0_8_,auVar5._8_8_);
    return auVar5;
  }
  if (!CARRY8(uVar1,uVar4)) {
    uVar2 = uVar1 + uVar4;
    if (uVar1 + uVar4 <= uVar3 * 2) {
      uVar2 = uVar3 * 2;
    }
    if (uVar2 < 9) {
      uVar2 = 8;
    }
    FUN_00a3856c(&local_58,uVar3,param_2[1],uVar2,1,1);
    if (local_58 != 1) {
      *param_2 = uVar2;
      param_2[1] = local_50;
      goto LAB_00a60bfc;
    }
  }
  auVar5._8_8_ = 0x2600000003;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 00a60c24  <&std::fs::File_as_alloc::io::read::Read>::read_to_string =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::fs::File as alloc::io::read::Read>::read_to_string */

undefined1  [16] __rustcall
<&std::fs::File_as_alloc::io::read::Read>::read_to_string(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long local_58 [3];
  undefined *puVar3;
  
  auVar5 = FUN_00a4a9f4(*param_1);
  uVar1 = auVar5._8_8_;
  if ((auVar5 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
    uVar1 = 0;
  }
  lVar2 = <alloc::string::alloc::string::String>::try_reserve(param_2,uVar1);
  if (lVar2 == -1) {
    lVar4 = *(long *)(param_2 + 0x10);
                    /* try { // try from 00a60c94 to 00a60ca7 has its CatchHandler @ 00a60d24 */
    auVar6 = FUN_00a2407c(param_1,param_2,auVar5._0_8_,auVar5._8_8_);
    puVar3 = auVar6._8_8_;
    lVar2 = *(long *)(param_2 + 0x10);
                    /* try { // try from 00a60cb4 to 00a60cc3 has its CatchHandler @ 00a60d0c */
    <core::str::str>::from_utf8(local_58,*(long *)(param_2 + 8) + lVar4,lVar2 - lVar4);
    if (local_58[0] != 0) {
      if ((auVar6 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
        puVar3 = &UNK_00afa960;
      }
      auVar6._8_8_ = puVar3;
      auVar6._0_8_ = 1;
      lVar2 = lVar4;
    }
    *(long *)(param_2 + 0x10) = lVar2;
    return auVar6;
  }
  auVar5._8_8_ = 0x2600000003;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 00a60d34  <std::env::SplitPaths_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::env::SplitPaths as core::fmt::Debug>::fmt */

void __rustcall
<std::env::SplitPaths_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,&DAT_0038381f,10);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish_non_exhaustive(auStack_20);
  return;
}


// ===== 00a60d6c  <std::path::Components_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::path::Components as core::fmt::Debug>::fmt */

void __rustcall
<std::path::Components_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [24];
  undefined1 local_30 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple(auStack_48,param_2,&DAT_00383829,10);
  local_30 = <std::path::[8]::std::path::Components>::as_path(param_1);
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::field
            (auStack_48,local_30,&DAT_00afc1a0);
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::finish();
  return;
}


// ===== 00a60dd0  <std[17aff9129faa4dc5]::time::SystemTime_as_core[bcece726f298455b]::ops::arith::AddAssign<core[bcece726f298455b]::time::Duration>>::add_assign =====

/* <std[17aff9129faa4dc5]::time::SystemTime as
   core[bcece726f298455b]::ops::arith::AddAssign<core[bcece726f298455b]::time::Duration>>::add_assign
    */

void <std[17aff9129faa4dc5]::time::SystemTime_as_core[bcece726f298455b]::ops::arith::AddAssign<core[bcece726f298455b]::time::Duration>>
     ::add_assign(long *param_1,long param_2,int param_3)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  
  lVar2 = *param_1 + param_2;
  if (param_2 < 0 == SCARRY8(*param_1,param_2)) {
    uVar3 = (int)param_1[1] + param_3;
    if (999999999 < uVar3) {
      bVar1 = SCARRY8(lVar2,1);
      lVar2 = lVar2 + 1;
      if (bVar1) goto LAB_00a60e24;
      uVar3 = uVar3 + 0xc4653600;
    }
    *param_1 = lVar2;
    *(uint *)(param_1 + 1) = uVar3;
    return;
  }
LAB_00a60e24:
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed(&DAT_003837a3,0x2d,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afc1c0);
}


// ===== 00a60e44  <std::process::ChildStdin_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::process::ChildStdin as core::fmt::Debug>::fmt */

void __rustcall
<std::process::ChildStdin_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,&DAT_00383833,10);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish_non_exhaustive(auStack_20);
  return;
}


// ===== 00a60e7c  <std::io::pipe::PipeWriter_as_core::io::write::Write>::write_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::pipe::PipeWriter as core::io::write::Write>::write_vectored */

undefined1  [16] __rustcall
<std::io::pipe::PipeWriter_as_core::io::write::Write>::write_vectored
          (int *param_1,iovec *param_2,ulong param_3)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (0x3ff < param_3) {
    param_3 = 0x400;
  }
  sVar2 = writev(*param_1,param_2,(int)param_3);
  if (sVar2 != -1) {
    auVar4._1_7_ = 0;
    auVar4[0] = sVar2 == -1;
    auVar4._8_8_ = sVar2;
    return auVar4;
  }
  piVar3 = (int *)__errno(0xffffffffffffffff,0xffffffffffffffff);
  iVar1 = *piVar3;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 00a60f10  <std::io::pipe::PipeWriter_as_core::io::write::Write>::write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::pipe::PipeWriter as core::io::write::Write>::write */

undefined1  [16] __rustcall
<std::io::pipe::PipeWriter_as_core::io::write::Write>::write
          (int *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  sVar2 = ::write(*param_1,param_2,param_3);
  if (sVar2 != -1) {
    auVar4._1_7_ = 0;
    auVar4[0] = sVar2 == -1;
    auVar4._8_8_ = sVar2;
    return auVar4;
  }
  piVar3 = (int *)__errno(0xffffffffffffffff,0xffffffffffffffff);
  iVar1 = *piVar3;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 00a60f98  FUN_00a60f98 =====

undefined1  [16] FUN_00a60f98(long *param_1,undefined8 *param_2,ulong param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  void *__src;
  ulong __n;
  undefined1 auVar4 [16];
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  if (param_3 == 0) {
    uVar10 = 0;
  }
  else {
    if (param_3 < 5) {
      lVar5 = 0;
      uVar10 = 0;
    }
    else {
      lVar6 = 0;
      lVar11 = 0;
      lVar12 = 0;
      lVar13 = 0;
      uVar10 = 4;
      if ((param_3 & 3) != 0) {
        uVar10 = param_3 & 3;
      }
      plVar7 = param_2 + 5;
      lVar5 = param_3 - uVar10;
      lVar8 = lVar5;
      do {
        plVar1 = plVar7 + -4;
        lVar14 = *plVar7;
        plVar9 = plVar7 + -2;
        plVar2 = plVar7 + 2;
        lVar8 = lVar8 + -4;
        plVar7 = plVar7 + 8;
        lVar6 = *plVar1 + lVar6;
        lVar11 = *plVar9 + lVar11;
        lVar12 = lVar14 + lVar12;
        lVar13 = *plVar2 + lVar13;
      } while (lVar8 != 0);
      uVar10 = lVar12 + lVar6 + lVar13 + lVar11;
    }
    puVar3 = param_2 + param_3 * 2;
    lVar6 = param_3 - lVar5;
    plVar7 = param_2 + lVar5 * 2 + 1;
    do {
      lVar6 = lVar6 + -1;
      uVar10 = *plVar7 + uVar10;
      plVar7 = plVar7 + 2;
    } while (lVar6 != 0);
    if ((ulong)(*param_1 - param_1[2]) < uVar10) {
      FUN_00a29778(param_1,param_1[2],uVar10,1,1);
    }
    lVar6 = param_1[2];
    do {
      __src = (void *)*param_2;
      __n = param_2[1];
      if ((ulong)(*param_1 - lVar6) < __n) {
        FUN_00a29778(param_1,lVar6,__n,1,1);
        lVar6 = param_1[2];
LAB_00a610ac:
        memcpy((void *)(param_1[1] + lVar6),__src,__n);
      }
      else if (__n != 0) goto LAB_00a610ac;
      param_2 = param_2 + 2;
      lVar6 = lVar6 + __n;
      param_1[2] = lVar6;
    } while (param_2 != puVar3);
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar10;
  return auVar4 << 0x40;
}


// ===== 00a61104  FUN_00a61104 =====

undefined8 FUN_00a61104(void)

{
  return 1;
}


// ===== 00a6110c  FUN_00a6110c =====

undefined8 FUN_00a6110c(long *param_1,undefined8 *param_2,ulong param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  void *__src;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  if (param_3 != 0) {
    if (param_3 < 5) {
      lVar6 = 0;
      uVar4 = 0;
    }
    else {
      lVar7 = 0;
      lVar10 = 0;
      lVar11 = 0;
      lVar12 = 0;
      uVar4 = 4;
      if ((param_3 & 3) != 0) {
        uVar4 = param_3 & 3;
      }
      lVar6 = param_3 - uVar4;
      plVar5 = param_2 + 5;
      lVar8 = lVar6;
      do {
        plVar1 = plVar5 + -4;
        lVar13 = *plVar5;
        plVar9 = plVar5 + -2;
        plVar2 = plVar5 + 2;
        lVar8 = lVar8 + -4;
        plVar5 = plVar5 + 8;
        lVar7 = *plVar1 + lVar7;
        lVar10 = *plVar9 + lVar10;
        lVar11 = lVar13 + lVar11;
        lVar12 = *plVar2 + lVar12;
      } while (lVar8 != 0);
      uVar4 = lVar11 + lVar7 + lVar12 + lVar10;
    }
    puVar3 = param_2 + param_3 * 2;
    lVar7 = param_3 - lVar6;
    plVar5 = param_2 + lVar6 * 2 + 1;
    do {
      lVar7 = lVar7 + -1;
      uVar4 = *plVar5 + uVar4;
      plVar5 = plVar5 + 2;
    } while (lVar7 != 0);
    lVar7 = param_1[2];
    if ((ulong)(*param_1 - lVar7) < uVar4) {
      FUN_00a29778(param_1,lVar7,uVar4,1,1);
      lVar7 = param_1[2];
    }
    do {
      __src = (void *)*param_2;
      uVar4 = param_2[1];
      if ((ulong)(*param_1 - lVar7) < uVar4) {
        FUN_00a29778(param_1,lVar7,uVar4,1,1);
        lVar7 = param_1[2];
LAB_00a61210:
        memcpy((void *)(param_1[1] + lVar7),__src,uVar4);
      }
      else if (uVar4 != 0) goto LAB_00a61210;
      param_2 = param_2 + 2;
      lVar7 = lVar7 + uVar4;
      param_1[2] = lVar7;
    } while (param_2 != puVar3);
  }
  return 0;
}


// ===== 00a61268  FUN_00a61268 =====

undefined8 FUN_00a61268(void)

{
  return 0;
}


// ===== 00a61270  FUN_00a61270 =====

undefined1  [16] FUN_00a61270(long *param_1,void *param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  long lVar2;
  
  lVar2 = param_1[2];
  if ((ulong)(*param_1 - lVar2) < param_3) {
    FUN_00a29778(param_1,lVar2,param_3,1,1);
    lVar2 = param_1[2];
  }
  else if (param_3 == 0) goto LAB_00a612b0;
  memcpy((void *)(param_1[1] + lVar2),param_2,param_3);
LAB_00a612b0:
  param_1[2] = lVar2 + param_3;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_3;
  return auVar1 << 0x40;
}


// ===== 00a612f8  FUN_00a612f8 =====

undefined8 FUN_00a612f8(long *param_1,void *param_2,ulong param_3)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if ((ulong)(*param_1 - lVar1) < param_3) {
    FUN_00a29778(param_1,lVar1,param_3,1,1);
    lVar1 = param_1[2];
  }
  else if (param_3 == 0) goto LAB_00a61338;
  memcpy((void *)(param_1[1] + lVar1),param_2,param_3);
LAB_00a61338:
  param_1[2] = lVar1 + param_3;
  return 0;
}


// ===== 00a6137c  <std::os::fd::owned::OwnedFd_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::os::fd::owned::OwnedFd as core::fmt::Debug>::fmt */

void __rustcall
<std::os::fd::owned::OwnedFd_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_30 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,&DAT_0038383d,7);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (auStack_30,&DAT_00382e9a,2,param_1,&DAT_00afc030);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 00a613e0  FUN_00a613e0 =====

void FUN_00a613e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,&DAT_002a19b0,8,&local_18,&DAT_00afc1d8);
  return;
}


// ===== 00a61420  <std::sys::fs::unix::FileType_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::fs::unix::FileType as core::fmt::Debug>::fmt */

void __rustcall
<std::sys::fs::unix::FileType_as_core::fmt::Debug>::fmt(undefined4 *param_1,undefined8 param_2)

{
  undefined1 auStack_30 [16];
  undefined4 local_4;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,&DAT_002a1780,8);
  local_4 = *param_1;
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (auStack_30,&DAT_002bd244,4,&local_4,&DAT_00afc1f8);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 00a6148c  <std::os::unix::net::listener::Incoming_as_core::iter::traits::iterator::Iterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::os::unix::net::listener::Incoming as core::iter::traits::iterator::Iterator>::next */

void __rustcall
<std::os::unix::net::listener::Incoming_as_core::iter::traits::iterator::Iterator>::next
          (uint *param_1,undefined8 *param_2)

{
  undefined **local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined6 uStack_48;
  undefined2 local_42;
  undefined6 uStack_40;
  undefined8 uStack_3a;
  int local_30;
  uint local_2c;
  undefined **local_28;
  int local_4;
  
  local_4 = 0x6e;
  uStack_3a = 0;
  uStack_40 = 0;
  uStack_98 = 0;
  local_a0 = (undefined **)0x0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  local_42 = 0;
  uStack_50 = 0;
  FUN_00a32ca0(&local_30,*param_2,&local_a0,&local_4);
  if (local_30 == 1) {
    local_2c = 0xffffffff;
  }
  else {
    local_28 = local_a0;
    if ((local_4 != 0) && (((ulong)local_a0 & 0xffff) != 1)) {
      close(local_2c);
      local_2c = 0xffffffff;
      local_28 = &PTR_DAT_00afaf30;
    }
  }
  *param_1 = (uint)(local_2c == 0xffffffff);
  param_1[1] = local_2c;
  *(undefined ***)(param_1 + 2) = local_28;
  return;
}


// ===== 00a61534  <std::sys::process::unix::common::ExitCode_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::process::unix::common::ExitCode as core::fmt::Debug>::fmt */

void __rustcall
<std::sys::process::unix::common::ExitCode_as_core::fmt::Debug>::fmt
          (undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple(auStack_38,param_2,&DAT_0029f570,0x10);
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::field
            (auStack_38,param_1,&DAT_00afc218);
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::finish();
  return;
}


// ===== 00a6158c  <std::sys::process::unix::common::cstring_array::CStringIter_as_core::iter::traits::exact_size::ExactSizeIterator>::len =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::process::unix::common::cstring_array::CStringIter as
   core::iter::traits::exact_size::ExactSizeIterator>::len */

ulong __rustcall
<std::sys::process::unix::common::cstring_array::CStringIter_as_core::iter::traits::exact_size::ExactSizeIterator>
::len(long *param_1)

{
  return (ulong)(param_1[1] - *param_1) >> 3;
}


// ===== 00a6159c  <&std::fs::File_as_core::io::write::Write>::write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::fs::File as core::io::write::Write>::write */

undefined1  [16] __rustcall
<&std::fs::File_as_core::io::write::Write>::write(undefined8 *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  sVar2 = ::write(*(int *)*param_1,param_2,param_3);
  if (sVar2 != -1) {
    auVar4._1_7_ = 0;
    auVar4[0] = sVar2 == -1;
    auVar4._8_8_ = sVar2;
    return auVar4;
  }
  piVar3 = (int *)__errno(0xffffffffffffffff,0xffffffffffffffff);
  iVar1 = *piVar3;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 00a61628  <std::env::JoinPathsError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::env::JoinPathsError as core::fmt::Display>::fmt */

void __rustcall
<std::env::JoinPathsError_as_core::fmt::Display>::fmt(undefined8 param_1,undefined8 *param_2)

{
  undefined4 local_24;
  undefined4 *local_20;
  undefined *puStack_18;
  
  local_20 = &local_24;
  local_24 = 0x3a;
  puStack_18 = PTR_fmt_00b00ee0;
  core::fmt::write(*param_2,param_2[1],&DAT_002aa5d6,&local_20);
  return;
}


// ===== 00a6166c  <std[17aff9129faa4dc5]::time::SystemTime_as_core[bcece726f298455b]::ops::arith::Sub<core[bcece726f298455b]::time::Duration>>::sub =====

/* <std[17aff9129faa4dc5]::time::SystemTime as
   core[bcece726f298455b]::ops::arith::Sub<core[bcece726f298455b]::time::Duration>>::sub */

undefined1  [16]
<std[17aff9129faa4dc5]::time::SystemTime_as_core[bcece726f298455b]::ops::arith::Sub<core[bcece726f298455b]::time::Duration>>
::sub(long param_1,int param_2,long param_3,int param_4,undefined8 param_5)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  lVar1 = param_1 - param_3;
  if (param_3 < 0 == SBORROW8(param_1,param_3)) {
    param_2 = param_2 - param_4;
    if (-1 < param_2) {
      auVar2._8_4_ = param_2;
      auVar2._0_8_ = lVar1;
      auVar2._12_4_ = 0;
      return auVar2;
    }
    if (!SBORROW8(lVar1,1)) {
      auVar3._8_4_ = param_2 + 1000000000;
      auVar3._0_8_ = lVar1 + -1;
      auVar3._12_4_ = 0;
      return auVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed(&DAT_00383844,0x34,param_5);
}


// ===== 00a616c4  <std::io::stdio::StdinLock_as_alloc::io::buf_read::BufRead>::read_until =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StdinLock as alloc::io::buf_read::BufRead>::read_until */

void __rustcall
<std::io::stdio::StdinLock_as_alloc::io::buf_read::BufRead>::read_until(long *param_1)

{
  FUN_00a24334(*param_1 + 8);
  return;
}


// ===== 00a616d0  <std::io::stdio::StdinLock_as_alloc::io::buf_read::BufRead>::consume =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StdinLock as alloc::io::buf_read::BufRead>::consume */

void __rustcall
<std::io::stdio::StdinLock_as_alloc::io::buf_read::BufRead>::consume(long *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  uVar1 = *(long *)(lVar3 + 0x18) + param_2;
  uVar2 = *(ulong *)(lVar3 + 0x20);
  if (uVar1 <= *(ulong *)(lVar3 + 0x20)) {
    uVar2 = uVar1;
  }
  *(ulong *)(lVar3 + 0x18) = uVar2;
  return;
}


// ===== 00a616ec  <std::io::stdio::StdinLock_as_alloc::io::buf_read::BufRead>::fill_buf =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StdinLock as alloc::io::buf_read::BufRead>::fill_buf */

void __rustcall
<std::io::stdio::StdinLock_as_alloc::io::buf_read::BufRead>::fill_buf(long *param_1,long *param_2)

{
  undefined1 uVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  size_t __nbytes;
  ulong uVar5;
  void *__buf;
  long lVar6;
  
  lVar6 = *param_2;
  uVar3 = *(ulong *)(lVar6 + 0x20);
  __buf = *(void **)(lVar6 + 8);
  uVar5 = *(ulong *)(lVar6 + 0x18);
  if (uVar3 <= uVar5) {
    __nbytes = *(ulong *)(lVar6 + 0x10);
    uVar1 = *(undefined1 *)(lVar6 + 0x28);
    if (0x7ffffffffffffffe < __nbytes) {
      __nbytes = 0x7fffffffffffffff;
    }
    uVar3 = ::read(0,__buf,__nbytes);
    if (uVar3 == 0xffffffffffffffff) {
      piVar4 = (int *)__errno();
      iVar2 = *piVar4;
      if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
        core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
      }
      if (iVar2 != 9) {
        *(ulong *)(lVar6 + 0x18) = 0;
        *(undefined8 *)(lVar6 + 0x20) = 0;
        *(undefined1 *)(lVar6 + 0x28) = uVar1;
        *param_1 = 0;
        param_1[1] = (long)iVar2 << 0x20 | 2;
        return;
      }
      uVar3 = 0;
    }
    uVar5 = 0;
    *(undefined8 *)(lVar6 + 0x18) = 0;
    *(ulong *)(lVar6 + 0x20) = uVar3;
    *(undefined1 *)(lVar6 + 0x28) = uVar1;
  }
  *param_1 = (long)__buf + uVar5;
  param_1[1] = uVar3 - uVar5;
  return;
}


// ===== 00a617e8  <std::io::stdio::StdinLock_as_alloc::io::buf_read::BufRead>::read_line =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StdinLock as alloc::io::buf_read::BufRead>::read_line */

undefined1  [16] __rustcall
<std::io::stdio::StdinLock_as_alloc::io::buf_read::BufRead>::read_line(long *param_1,long param_2)

{
  long lVar1;
  long lVar3;
  undefined1 auVar4 [16];
  long local_58 [3];
  undefined *puVar2;
  
  lVar3 = *(long *)(param_2 + 0x10);
                    /* try { // try from 00a6180c to 00a6181b has its CatchHandler @ 00a61890 */
  auVar4 = FUN_00a24334(*param_1 + 8,10,param_2);
  puVar2 = auVar4._8_8_;
  lVar1 = *(long *)(param_2 + 0x10);
                    /* try { // try from 00a61828 to 00a61837 has its CatchHandler @ 00a61878 */
  <core::str::str>::from_utf8(local_58,*(long *)(param_2 + 8) + lVar3,lVar1 - lVar3);
  if ((auVar4 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
    puVar2 = &UNK_00afa960;
  }
  if (local_58[0] != 0) {
    auVar4._8_8_ = puVar2;
    auVar4._0_8_ = 1;
    lVar1 = lVar3;
  }
  *(long *)(param_2 + 0x10) = lVar1;
  return auVar4;
}


// ===== 00a618a0  <std::net::tcp::Incoming_as_core::iter::traits::iterator::Iterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::net::tcp::Incoming as core::iter::traits::iterator::Iterator>::next */

void __rustcall
<std::net::tcp::Incoming_as_core::iter::traits::iterator::Iterator>::next
          (undefined4 *param_1,undefined8 *param_2)

{
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 local_40;
  
  <std::net::tcp::[7]::std::net::tcp::TcpListener>::accept(&local_48,*param_2);
  *param_1 = local_48;
  param_1[1] = uStack_44;
  *(undefined8 *)(param_1 + 2) = local_40;
  return;
}


// ===== 00a618e0  <&std::fs::File_as_core::io::seek::Seek>::stream_len =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::fs::File as core::io::seek::Seek>::stream_len */

undefined1  [16] __rustcall
<&std::fs::File_as_core::io::seek::Seek>::stream_len(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  int *piVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  __dev_t local_b0;
  __ino_t _Stack_a8;
  __nlink_t _Stack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  __dev_t _Stack_88;
  ulong local_80;
  __blksize_t _Stack_78;
  __blkcnt_t local_70;
  __time_t _Stack_68;
  long lStack_60;
  __time_t _Stack_58;
  long local_50;
  __time_t _Stack_48;
  long lStack_40;
  long lStack_38;
  
  piVar7 = (int *)*param_1;
  _Stack_a8 = 0;
  local_b0 = 0;
  uStack_98._0_4_ = 0;
  uStack_98._4_4_ = 0;
  _Stack_a0 = 0;
  _Stack_88 = 0;
  local_90._0_4_ = 0;
  local_90._4_4_ = 0;
  _Stack_78 = 0;
  local_80 = 0;
  _Stack_68 = 0;
  local_70 = 0;
  _Stack_58 = 0;
  lStack_60 = 0;
  _Stack_48 = 0;
  local_50 = 0;
  lStack_38 = 0;
  lStack_40 = 0;
  iVar3 = fstat(*piVar7,(stat *)&local_b0);
  if (iVar3 != -1) {
    if (local_80 != 0) {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_80;
      return auVar1 << 0x40;
    }
    uVar4 = lseek64(*piVar7,0,1);
    if ((uVar4 != 0xffffffffffffffff) && (uVar5 = lseek64(*piVar7,0,2), uVar5 != 0xffffffffffffffff)
       ) {
      if (uVar4 == uVar5) {
        auVar2._8_8_ = 0;
        auVar2._0_8_ = uVar5;
        return auVar2 << 0x40;
      }
      uVar6 = lseek64(*piVar7,uVar4,0);
      uVar4 = uVar6;
      if (uVar6 == 0xffffffffffffffff) {
        piVar7 = (int *)__errno();
        iVar3 = *piVar7;
        if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
          core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
        }
        uVar4 = (long)iVar3 << 0x20 | 2;
      }
      auVar9._1_7_ = 0;
      auVar9[0] = uVar6 == 0xffffffffffffffff;
      if (uVar6 != 0xffffffffffffffff) {
        uVar4 = uVar5;
      }
      auVar9._8_8_ = uVar4;
      return auVar9;
    }
  }
  piVar7 = (int *)__errno();
  iVar3 = *piVar7;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  }
  auVar8._8_8_ = (long)iVar3 << 0x20 | 2;
  auVar8._0_8_ = 1;
  return auVar8;
}


// ===== 00a61a68  <&std::fs::File_as_core::io::seek::Seek>::stream_position =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::fs::File as core::io::seek::Seek>::stream_position */

undefined1  [16] __rustcall
<&std::fs::File_as_core::io::seek::Seek>::stream_position(undefined8 *param_1)

{
  int iVar1;
  __off64_t _Var2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  _Var2 = lseek64(*(int *)*param_1,0,1);
  if (_Var2 != -1) {
    auVar4._1_7_ = 0;
    auVar4[0] = _Var2 == -1;
    auVar4._8_8_ = _Var2;
    return auVar4;
  }
  piVar3 = (int *)__errno(0xffffffffffffffff,0xffffffffffffffff);
  iVar1 = *piVar3;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 00a61afc  <&std::fs::File_as_core::io::seek::Seek>::seek =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::fs::File as core::io::seek::Seek>::seek */

undefined1  [16] __rustcall
<&std::fs::File_as_core::io::seek::Seek>::seek(undefined8 *param_1,long param_2,__off64_t param_3)

{
  int iVar1;
  __off64_t _Var2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  _Var2 = lseek64(*(int *)*param_1,param_3,*(int *)(&DAT_00383cb8 + param_2 * 4));
  if (_Var2 != -1) {
    auVar4._1_7_ = 0;
    auVar4[0] = _Var2 == -1;
    auVar4._8_8_ = _Var2;
    return auVar4;
  }
  piVar3 = (int *)__errno(0xffffffffffffffff,0xffffffffffffffff);
  iVar1 = *piVar3;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 00a61b9c  <std[17aff9129faa4dc5]::time::SystemTime_as_core[bcece726f298455b]::ops::arith::SubAssign<core[bcece726f298455b]::time::Duration>>::sub_assign =====

/* <std[17aff9129faa4dc5]::time::SystemTime as
   core[bcece726f298455b]::ops::arith::SubAssign<core[bcece726f298455b]::time::Duration>>::sub_assign
    */

void <std[17aff9129faa4dc5]::time::SystemTime_as_core[bcece726f298455b]::ops::arith::SubAssign<core[bcece726f298455b]::time::Duration>>
     ::sub_assign(long *param_1,long param_2,int param_3)

{
  long lVar1;
  
  lVar1 = *param_1 - param_2;
  if (param_2 < 0 == SBORROW8(*param_1,param_2)) {
    param_3 = (int)param_1[1] - param_3;
    if (-1 < param_3) {
      *param_1 = lVar1;
      *(int *)(param_1 + 1) = param_3;
      return;
    }
    if (!SBORROW8(lVar1,1)) {
      *param_1 = lVar1 + -1;
      *(int *)(param_1 + 1) = param_3 + 1000000000;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed(&DAT_00383844,0x34,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afc238);
}


// ===== 00a61c10  <std::io::stdio::StdinLock_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StdinLock as core::fmt::Debug>::fmt */

void __rustcall
<std::io::stdio::StdinLock_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,&DAT_00383878,9);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish_non_exhaustive(auStack_20);
  return;
}


// ===== 00a61c48  <alloc::string::String_as_std::net::socket_addr::ToSocketAddrs>::to_socket_addrs =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::string::String as std::net::socket_addr::ToSocketAddrs>::to_socket_addrs */

void __rustcall
<alloc::string::String_as_std::net::socket_addr::ToSocketAddrs>::to_socket_addrs(long param_1)

{
  <str_as_std::net::socket_addr::ToSocketAddrs>::to_socket_addrs
            (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  return;
}


// ===== 00a61c54  <std::sys::fs::unix::FilePermissions_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::fs::unix::FilePermissions as core::fmt::Debug>::fmt */

void __rustcall
<std::sys::fs::unix::FilePermissions_as_core::fmt::Debug>::fmt
          (undefined4 *param_1,undefined8 param_2)

{
  undefined1 auStack_30 [16];
  undefined4 local_4;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,&DAT_00383881,0xf);
  local_4 = *param_1;
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (auStack_30,&DAT_002bd244,4,&local_4,&DAT_00afc1f8);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 00a61cc0  <std::sys::net::connection::socket::TcpListener_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::net::connection::socket::TcpListener as core::fmt::Debug>::fmt */

void __rustcall
<std::sys::net::connection::socket::TcpListener_as_core::fmt::Debug>::fmt
          (undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_70 [16];
  short local_60;
  undefined6 uStack_5e;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulong uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_70,param_2,&DAT_00383890,0xb);
  uVar1 = *param_1;
  FUN_00a37af8(&local_60,uVar1);
  if (local_60 == 2) {
    if ((1 < (uStack_58 & 3) - 2) && ((uStack_58 & 3) != 0)) {
      uStack_38 = uStack_58 - 1;
      local_40 = CONCAT71(local_40._1_7_,3);
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&uStack_38);
    }
  }
  else {
    local_40 = CONCAT62(uStack_5e,local_60);
    uStack_38 = uStack_58;
    uStack_28 = uStack_48;
    uStack_30 = uStack_50;
                    /* try { // try from 00a61d4c to 00a61d6b has its CatchHandler @ 00a61da4 */
    <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
              (auStack_70,&DAT_002bcff4,4,&local_40,&DAT_00afc068);
  }
  local_40 = CONCAT44(local_40._4_4_,uVar1);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (auStack_70,&DAT_00382e9a,2,&local_40,&DAT_00afb920);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 00a61dc0  <std::io::stdio::StderrLock_as_std::sys::io::kernel_copy::linux::CopyWrite>::properties =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StderrLock as std::sys::io::kernel_copy::linux::CopyWrite>::properties */

void __rustcall
<std::io::stdio::StderrLock_as_std::sys::io::kernel_copy::linux::CopyWrite>::properties
          (undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **extraout_x9;
  __ino_t local_120;
  __nlink_t _Stack_118;
  __mode_t _Stack_110;
  __uid_t _Stack_10c;
  __gid_t _Stack_108;
  int iStack_104;
  __dev_t local_100;
  __off_t _Stack_f8;
  __blksize_t _Stack_f0;
  __blkcnt_t _Stack_e8;
  __time_t local_e0;
  long lStack_d8;
  __time_t _Stack_d0;
  long lStack_c8;
  __time_t local_c0;
  long lStack_b8;
  long local_b0;
  undefined **local_a0;
  __ino_t _Stack_98;
  __nlink_t _Stack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  __dev_t _Stack_78;
  __off_t _Stack_70;
  __blksize_t _Stack_68;
  __blkcnt_t local_60;
  __time_t _Stack_58;
  long lStack_50;
  __time_t _Stack_48;
  long local_40;
  __time_t _Stack_38;
  long lStack_30;
  long local_28;
  
  _Stack_98 = 0;
  local_a0 = (undefined **)0x0;
  uStack_88._0_4_ = 0;
  uStack_88._4_4_ = 0;
  _Stack_90 = 0;
  _Stack_78 = 0;
  local_80._0_4_ = 0;
  local_80._4_4_ = 0;
  _Stack_68 = 0;
  _Stack_70 = 0;
  _Stack_58 = 0;
  local_60 = 0;
  _Stack_48 = 0;
  lStack_50 = 0;
  _Stack_38 = 0;
  local_40 = 0;
  local_28 = 0;
  lStack_30 = 0;
  iVar1 = fstat(2,(stat *)&local_a0);
  if (iVar1 == -1) {
    __errno();
    ppuVar3 = &PTR_FUN_00afaaf8;
    if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
      ppuVar3 = extraout_x9;
    }
    uVar2 = 3;
  }
  else {
    uVar2 = 0;
    local_b0 = local_28;
    lStack_d8 = lStack_50;
    local_e0 = _Stack_58;
    lStack_c8 = local_40;
    _Stack_d0 = _Stack_48;
    lStack_b8 = lStack_30;
    local_c0 = _Stack_38;
    _Stack_118 = _Stack_90;
    local_120 = _Stack_98;
    _Stack_108 = (__gid_t)local_80;
    iStack_104 = local_80._4_4_;
    _Stack_110 = (__mode_t)uStack_88;
    _Stack_10c = uStack_88._4_4_;
    _Stack_f8 = _Stack_70;
    local_100 = _Stack_78;
    _Stack_e8 = local_60;
    _Stack_f0 = _Stack_68;
    ppuVar3 = local_a0;
  }
  *param_1 = uVar2;
  param_1[1] = ppuVar3;
  param_1[0xf] = lStack_b8;
  param_1[0xe] = local_c0;
  param_1[0xb] = lStack_d8;
  param_1[10] = local_e0;
  param_1[0xd] = lStack_c8;
  param_1[0xc] = _Stack_d0;
  param_1[0x10] = local_b0;
  param_1[3] = _Stack_118;
  param_1[2] = local_120;
  param_1[5] = __Stack_108;
  param_1[4] = __Stack_110;
  param_1[7] = _Stack_f8;
  param_1[6] = local_100;
  param_1[9] = _Stack_e8;
  param_1[8] = _Stack_f0;
  param_1[0x11] = DAT_002a1650;
  return;
}


// ===== 00a61ebc  <std::fs::DirEntry_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::fs::DirEntry as core::fmt::Debug>::fmt */

ulong __rustcall <std::fs::DirEntry_as_core::fmt::Debug>::fmt(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined1 auStack_50 [24];
  long local_38;
  void *local_30;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple(auStack_50,param_2,&DAT_002a1638,8);
  <std::path::[16]::std::path::Path>::_join
            (&local_38,*(undefined8 *)(*param_1 + 0x18),*(undefined8 *)(*param_1 + 0x20),param_1[1],
             param_1[2] + -1);
                    /* try { // try from 00a61f04 to 00a61f1b has its CatchHandler @ 00a61f4c */
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::field
            (auStack_50,&local_38,&PTR_FUN_00afc250);
  uVar1 = <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::finish();
  if (local_38 != 0) {
    uVar1 = uVar1 & 0xffffffff;
    free(local_30);
  }
  return uVar1;
}


// ===== 00a61f6c  <&str_as_core::convert::TryFrom<&std::ffi::os_str::OsStr>>::try_from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&str as core::convert::TryFrom<&std::ffi::os_str::OsStr>>::try_from */

void __rustcall <&str_as_core::convert::TryFrom<&std::ffi::os_str::OsStr>>::try_from(void)

{
  (*(code *)PTR_from_utf8_00b01bc0)();
  return;
}


// ===== 00a61f70  <std::process::ExitStatus_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::process::ExitStatus as core::fmt::Display>::fmt */

void __rustcall <std::process::ExitStatus_as_core::fmt::Display>::fmt(void)

{
  (*(code *)PTR_fmt_00b078b0)();
  return;
}


// ===== 00a61f74  <std::process::ExitStatusError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::process::ExitStatusError as core::fmt::Display>::fmt */

void __rustcall
<std::process::ExitStatusError_as_core::fmt::Display>::fmt(undefined4 *param_1,undefined8 *param_2)

{
  undefined4 local_24;
  undefined4 *local_20;
  undefined *puStack_18;
  
  local_24 = *param_1;
  local_20 = &local_24;
  puStack_18 = PTR_fmt_00b013a0;
  core::fmt::write(*param_2,param_2[1],&DAT_002a98d5,&local_20);
  return;
}


// ===== 00a61fb8  FUN_00a61fb8 =====

void FUN_00a61fb8(undefined8 param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00a61fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_00a61fd4 + (ulong)(byte)(&DAT_00381fa4)[*param_2] * 4))();
  return;
}


// ===== 00a62030  <std::ffi::os_str::Display_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::ffi::os_str::Display as core::fmt::Debug>::fmt */

void __rustcall <std::ffi::os_str::Display_as_core::fmt::Debug>::fmt(undefined8 *param_1)

{
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = *param_1;
  uStack_18 = param_1[1];
  <core::str::lossy::Debug_as_core::fmt::Debug>::fmt(&local_20);
  return;
}


// ===== 00a62058  <std::ffi::os_str::Display_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::ffi::os_str::Display as core::fmt::Display>::fmt */

void __rustcall
<std::ffi::os_str::Display_as_core::fmt::Display>::fmt(undefined8 *param_1,undefined8 param_2)

{
  <core::bstr::ByteStr_as_core::fmt::Display>::fmt(*param_1,param_1[1],param_2);
  return;
}


// ===== 00a6206c  FUN_00a6206c =====

void FUN_00a6206c(undefined8 param_1,long param_2)

{
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <i32_as_core::fmt::LowerHex>::fmt();
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <i32_as_core::fmt::Display>::fmt();
    return;
  }
  <i32_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 00a62084  FUN_00a62084 =====

void FUN_00a62084(long *param_1,undefined8 param_2)

{
  long *local_18;
  
  if (*param_1 != 0) {
    local_18 = param_1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002bd0bc,4,&local_18,&DAT_00afc270);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd198,4);
  return;
}


// ===== 00a620dc  FUN_00a620dc =====

void FUN_00a620dc(int *param_1,undefined8 param_2)

{
  int *local_18;
  
  if (*param_1 != -1) {
    local_18 = param_1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002bd0bc,4,&local_18,&DAT_00afc290);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd198,4);
  return;
}


// ===== 00a62138  FUN_00a62138 =====

void FUN_00a62138(int *param_1,undefined8 param_2)

{
  int *local_18;
  
  if (*param_1 != -1) {
    local_18 = param_1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002bd0bc,4,&local_18,&DAT_00afc2b0);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd198,4);
  return;
}


// ===== 00a62194  FUN_00a62194 =====

void FUN_00a62194(int *param_1,undefined8 param_2)

{
  int *local_18;
  
  if (*param_1 != -1) {
    local_18 = param_1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002bd0bc,4,&local_18,&DAT_00afc2d0);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd198,4);
  return;
}


// ===== 00a621f0  FUN_00a621f0 =====

void FUN_00a621f0(long *param_1,undefined8 param_2)

{
  long *local_18;
  
  if (*param_1 != 0) {
    local_18 = param_1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002bd0bc,4,&local_18,&DAT_00afc2f0);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd198,4);
  return;
}


// ===== 00a62248  FUN_00a62248 =====

void FUN_00a62248(int *param_1,undefined8 param_2)

{
  int *local_18;
  
  if (*param_1 != -1) {
    local_18 = param_1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002bd0bc,4,&local_18,&DAT_00afc310);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd198,4);
  return;
}


// ===== 00a622a4  FUN_00a622a4 =====

void FUN_00a622a4(long *param_1,undefined8 param_2)

{
  long *local_18;
  
  if (*param_1 != 0) {
    local_18 = param_1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002bd0bc,4,&local_18,&DAT_00afc330);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd198,4);
  return;
}


// ===== 00a622fc  FUN_00a622fc =====

void FUN_00a622fc(int *param_1,undefined8 param_2)

{
  int *local_18;
  
  if (*param_1 == 1) {
    local_18 = param_1 + 1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002bd0bc,4,&local_18,&DAT_00afa888);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd198,4);
  return;
}


// ===== 00a6235c  FUN_00a6235c =====

void FUN_00a6235c(int *param_1,undefined8 param_2)

{
  int *local_18;
  
  if (*param_1 == 1) {
    local_18 = param_1 + 1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002bd0bc,4,&local_18,&DAT_00afa728);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd198,4);
  return;
}


// ===== 00a623bc  FUN_00a623bc =====

void FUN_00a623bc(undefined8 param_1,long param_2)

{
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <isize_as_core::fmt::LowerHex>::fmt();
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <i64_as_core::fmt::Display>::fmt();
    return;
  }
  <isize_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 00a623d4  FUN_00a623d4 =====

void FUN_00a623d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,&DAT_0038389b,0xb,&local_18,&DAT_00afc350);
  return;
}


// ===== 00a62414  FUN_00a62414 =====

void FUN_00a62414(undefined8 param_1,long param_2)

{
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <u8_as_core::fmt::LowerHex>::fmt();
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <u8_as_core::fmt::Display>::fmt();
    return;
  }
  <u8_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 00a6242c  FUN_00a6242c =====

void FUN_00a6242c(undefined8 param_1,long param_2)

{
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <u32_as_core::fmt::LowerHex>::fmt();
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <u32_as_core::fmt::Display>::fmt();
    return;
  }
  <u32_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 00a62444  FUN_00a62444 =====

void FUN_00a62444(long param_1,undefined8 param_2)

{
  long local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field2_finish
            (param_2,&DAT_002a1a30,8,param_1 + 0x18,&DAT_00afbec8,&local_18,&DAT_00afc370);
  return;
}


// ===== 00a62490  FUN_00a62490 =====

void FUN_00a62490(undefined8 param_1,long param_2)

{
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <usize_as_core::fmt::LowerHex>::fmt();
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <usize_as_core::fmt::Display>::fmt();
    return;
  }
  <usize_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 00a624a8  FUN_00a624a8 =====

undefined8 FUN_00a624a8(long *param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  lVar5 = param_1[2];
  if (param_2 < 0x80) {
    uVar6 = 1;
  }
  else if (param_2 < 0x800) {
    uVar6 = 2;
  }
  else {
    uVar6 = 3;
    if (0xffff < param_2) {
      uVar6 = 4;
    }
  }
  if ((ulong)(*param_1 - lVar5) < uVar6) {
    FUN_00a29778(param_1,lVar5,uVar6,1,1);
    lVar4 = param_1[1];
  }
  else {
    lVar4 = param_1[1];
  }
  pbVar3 = (byte *)(lVar4 + lVar5);
  if (param_2 < 0x80) {
    *pbVar3 = (byte)param_2;
  }
  else {
    bVar1 = (byte)param_2 & 0x3f | 0x80;
    if (param_2 < 0x800) {
      pbVar3[1] = bVar1;
      *pbVar3 = (byte)(param_2 >> 6) | 0xc0;
    }
    else {
      bVar2 = (byte)(param_2 >> 6) & 0x3f | 0x80;
      if (param_2 >> 0x10 == 0) {
        pbVar3[1] = bVar2;
        pbVar3[2] = bVar1;
        *pbVar3 = (byte)(param_2 >> 0xc) | 0xe0;
      }
      else {
        pbVar3[2] = bVar2;
        pbVar3[3] = bVar1;
        pbVar3[1] = (byte)(param_2 >> 0xc) & 0x3f | 0x80;
        *pbVar3 = (byte)(param_2 >> 0x12) | 0xf0;
      }
    }
  }
  param_1[2] = uVar6 + lVar5;
  return 0;
}


// ===== 00a625cc  FUN_00a625cc =====

undefined8 FUN_00a625cc(long *param_1,void *param_2,ulong param_3)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if ((ulong)(*param_1 - lVar1) < param_3) {
    FUN_00a29778(param_1,lVar1,param_3,1,1);
    lVar1 = param_1[2];
  }
  else if (param_3 == 0) goto LAB_00a6260c;
  memcpy((void *)(param_1[1] + lVar1),param_2,param_3);
LAB_00a6260c:
  param_1[2] = lVar1 + param_3;
  return 0;
}


// ===== 00a62650  FUN_00a62650 =====

void FUN_00a62650(undefined8 param_1,long param_2)

{
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <usize_as_core::fmt::LowerHex>::fmt();
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <usize_as_core::fmt::Display>::fmt();
    return;
  }
  <usize_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 00a62668  <std::fs::TryLockError_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::fs::TryLockError as core::fmt::Debug>::fmt */

void __rustcall <std::fs::TryLockError_as_core::fmt::Debug>::fmt(long *param_1,undefined8 param_2)

{
  if (*param_1 != 0) {
    <core::io::error::Error_as_core::fmt::Debug>::fmt(param_1,param_2);
    return;
  }
  <str_as_core::fmt::Debug>::fmt(&DAT_003833a8,10);
  return;
}


// ===== 00a6268c  <std[17aff9129faa4dc5]::time::Instant_as_core[bcece726f298455b]::ops::arith::Add<core[bcece726f298455b]::time::Duration>>::add =====

/* <std[17aff9129faa4dc5]::time::Instant as
   core[bcece726f298455b]::ops::arith::Add<core[bcece726f298455b]::time::Duration>>::add */

undefined1  [16]
<std[17aff9129faa4dc5]::time::Instant_as_core[bcece726f298455b]::ops::arith::Add<core[bcece726f298455b]::time::Duration>>
::add(long param_1,int param_2,long param_3,int param_4,undefined8 param_5)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  lVar3 = param_1 + param_3;
  if (param_3 < 0 == SCARRY8(param_1,param_3)) {
    uVar1 = param_4 + param_2;
    if (999999999 < uVar1) {
      bVar2 = SCARRY8(lVar3,1);
      lVar3 = lVar3 + 1;
      if (bVar2) goto LAB_00a626d0;
      uVar1 = uVar1 + 0xc4653600;
    }
    auVar4._8_4_ = uVar1;
    auVar4._0_8_ = lVar3;
    auVar4._12_4_ = 0;
    return auVar4;
  }
LAB_00a626d0:
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed(&DAT_003838a6,0x28,param_5);
}


// ===== 00a626ec  <std::panic::PanicHookInfo_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::panic::PanicHookInfo as core::fmt::Display>::fmt */

undefined8 __rustcall
<std::panic::PanicHookInfo_as_core::fmt::Display>::fmt(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 *local_60;
  code *pcStack_58;
  undefined8 *local_50;
  undefined *puStack_48;
  long local_40;
  undefined *puStack_38;
  
  uVar1 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_003838ce,0xc);
  if ((uVar1 & 1) == 0) {
    puVar2 = (undefined8 *)param_1[2];
    local_70 = *puVar2;
    uStack_68 = puVar2[1];
    pcStack_58 = FUN_00a5be48;
    local_50 = puVar2 + 2;
    local_40 = (long)puVar2 + 0x14;
    puStack_48 = PTR_fmt_00b00c40;
    puStack_38 = PTR_fmt_00b00c40;
    local_60 = (undefined1 *)&local_70;
    uVar1 = core::fmt::write(*param_2,param_2[1],&DAT_002ba925,&local_60);
    if ((uVar1 & 1) == 0) {
      puVar2 = (undefined8 *)*param_1;
      pcVar6 = *(code **)(param_1[1] + 0x18);
      (*pcVar6)(&local_60,puVar2);
      if (pcStack_58 == (code *)0x24c161f26c70c1f1 && local_60 == (undefined1 *)0xb9f602dc5fe9f65c)
      {
        lVar3 = 8;
        puVar4 = puVar2;
      }
      else {
        (*pcVar6)(&local_60,puVar2);
        if (pcStack_58 != (code *)0x16fa802d90bf615b || local_60 != (undefined1 *)0xee6cae9bcc87247c
           ) {
          return 0;
        }
        puVar4 = puVar2 + 1;
        lVar3 = 0x10;
      }
      uVar7 = *puVar4;
      uVar5 = *(undefined8 *)((long)puVar2 + lVar3);
      uVar1 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_003838da,2);
      if (((uVar1 & 1) == 0) &&
         (uVar5 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,uVar7,uVar5),
         (int)uVar5 == 0)) {
        return uVar5;
      }
    }
  }
  return 1;
}


// ===== 00a62864  <std::backtrace::BacktraceFrame_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::backtrace::BacktraceFrame as core::fmt::Debug>::fmt */

void __rustcall
<std::backtrace::BacktraceFrame_as_core::fmt::Debug>::fmt(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_40 [16];
  long local_18;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_list(auStack_40,param_2);
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar1 = *(long *)(param_1 + 0x30) * 0x48;
    lVar2 = *(long *)(param_1 + 0x28);
    do {
      local_18 = lVar2;
      <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry
                (auStack_40,&local_18,&DAT_00afa668);
      lVar1 = lVar1 + -0x48;
      lVar2 = lVar2 + 0x48;
    } while (lVar1 != 0);
  }
  <core::fmt::builders::[6]::core::fmt::builders::DebugList>::finish(auStack_40);
  return;
}


// ===== 00a628e0  <std::backtrace_rs::backtrace::Frame_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::backtrace_rs::backtrace::Frame as core::fmt::Debug>::fmt */

void __rustcall
<std::backtrace_rs::backtrace::Frame_as_core::fmt::Debug>::fmt(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [16];
  long local_30;
  long local_28;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_40,param_2,&DAT_003838dc,5);
  lVar1 = param_1[1];
  if (*param_1 == 1) {
    local_30 = lVar1;
    uVar2 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                      (auStack_40,&DAT_003838e1,2,&local_30,&DAT_00afbcc0);
    local_28 = param_1[3];
  }
  else {
    local_30 = FUN_00ab2734(lVar1);
    uVar2 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                      (auStack_40,&DAT_003838e1,2,&local_30,&DAT_00afbcc0);
    FUN_00ab2734(lVar1);
    local_28 = FUN_00ab6340();
  }
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (uVar2,&DAT_003838e3,0xe,&local_28,&DAT_00afbcc0);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 00a629c0  <std::io::stdio::StdoutRaw_as_core::io::write::Write>::write_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StdoutRaw as core::io::write::Write>::write_vectored */

undefined1  [16] __rustcall
<std::io::stdio::StdoutRaw_as_core::io::write::Write>::write_vectored
          (undefined8 param_1,iovec *param_2,ulong param_3)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  undefined1 auVar4 [16];
  ulong uVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  size_t *psVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  size_t sVar15;
  undefined1 auVar16 [16];
  
  uVar5 = param_3;
  if (0x3ff < param_3) {
    uVar5 = 0x400;
  }
  uVar5 = writev(1,param_2,(int)uVar5);
  if (uVar5 == 0xffffffffffffffff) {
    piVar6 = (int *)__errno();
    iVar3 = *piVar6;
    if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
    }
    if (iVar3 != 9) {
      auVar16._8_8_ = (long)iVar3 << 0x20 | 2;
      auVar16._0_8_ = 1;
      return auVar16;
    }
    if (param_3 == 0) {
      return ZEXT816(0);
    }
    if (param_3 < 5) {
      lVar7 = 0;
      uVar5 = 0;
    }
    else {
      lVar8 = 0;
      lVar12 = 0;
      lVar13 = 0;
      lVar14 = 0;
      uVar5 = 4;
      if ((param_3 & 3) != 0) {
        uVar5 = param_3 & 3;
      }
      psVar9 = &param_2[2].iov_len;
      lVar7 = param_3 - uVar5;
      lVar10 = lVar7;
      do {
        plVar1 = (long *)(psVar9 + -4);
        sVar15 = *psVar9;
        plVar11 = (long *)(psVar9 + -2);
        plVar2 = (long *)(psVar9 + 2);
        lVar10 = lVar10 + -4;
        psVar9 = psVar9 + 8;
        lVar8 = *plVar1 + lVar8;
        lVar12 = *plVar11 + lVar12;
        lVar13 = sVar15 + lVar13;
        lVar14 = *plVar2 + lVar14;
      } while (lVar10 != 0);
      uVar5 = lVar13 + lVar8 + lVar14 + lVar12;
    }
    lVar8 = param_3 - lVar7;
    psVar9 = &param_2[lVar7].iov_len;
    do {
      lVar8 = lVar8 + -1;
      uVar5 = *psVar9 + uVar5;
      psVar9 = psVar9 + 2;
    } while (lVar8 != 0);
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar5;
  return auVar4 << 0x40;
}


// ===== 00a62b10  <std::io::stdio::StdoutRaw_as_core::io::write::Write>::write_all_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StdoutRaw as core::io::write::Write>::write_all_vectored */

undefined ** __rustcall
<std::io::stdio::StdoutRaw_as_core::io::write::Write>::write_all_vectored
          (undefined8 param_1,long param_2,undefined **param_3)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  size_t *psVar15;
  iovec *__iovec;
  
  puVar3 = PTR_PTR_00b01168;
  ppuVar5 = (undefined **)0x0;
  if (param_3 != (undefined **)0x0) {
    lVar9 = (long)param_3 * 0x10;
    uVar12 = lVar9 - 0x10;
    plVar13 = (long *)(param_2 + 8);
    do {
      ppuVar6 = ppuVar5;
      if (*plVar13 != 0) break;
      lVar9 = lVar9 + -0x10;
      ppuVar5 = (undefined **)((long)ppuVar5 + 1);
      ppuVar6 = (undefined **)((uVar12 >> 4) + 1);
      plVar13 = plVar13 + 2;
    } while (lVar9 != 0);
    if (param_3 < ppuVar6) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (ppuVar6,param_3,param_3,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afb390);
    }
    if ((long)param_3 - (long)ppuVar6 == 0) {
      ppuVar5 = (undefined **)0x0;
    }
    else {
      __iovec = (iovec *)(param_2 + (long)ppuVar6 * 0x10);
      uVar12 = (long)param_3 - (long)ppuVar6;
      do {
        while( true ) {
          uVar7 = uVar12;
          if (0x3ff < uVar12) {
            uVar7 = 0x400;
          }
          uVar7 = writev(1,__iovec,(int)uVar7);
          if (uVar7 == 0xffffffffffffffff) break;
          if (uVar7 == 0) {
            return &PTR_DAT_00afb878;
          }
          lVar9 = uVar12 * 0x10;
          uVar10 = 0;
          uVar14 = lVar9 - 0x10;
          psVar15 = &__iovec->iov_len;
          do {
            uVar2 = uVar7 - *psVar15;
            uVar11 = uVar10;
            if (uVar7 < *psVar15) break;
            lVar9 = lVar9 + -0x10;
            uVar10 = uVar10 + 1;
            uVar7 = uVar2;
            uVar11 = (uVar14 >> 4) + 1;
            psVar15 = psVar15 + 2;
          } while (lVar9 != 0);
          if (uVar12 < uVar11) {
                    /* WARNING: Subroutine does not return */
            core::slice::index::slice_index_fail
                      (uVar11,uVar12,uVar12,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afb390);
          }
          if (uVar12 - uVar11 == 0) {
            if (uVar7 == 0) {
              return (undefined **)0x0;
            }
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_fmt
                      (&DAT_0038298a,0x4f,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afb378);
          }
          __iovec = __iovec + uVar11;
          if (__iovec->iov_len < uVar7) {
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_fmt
                      (&DAT_00382967,0x47,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afb360);
          }
          __iovec->iov_base = (void *)((long)__iovec->iov_base + uVar7);
          __iovec->iov_len = __iovec->iov_len - uVar7;
          uVar12 = uVar12 - uVar11;
        }
        piVar8 = (int *)__errno();
        iVar1 = *piVar8;
        if (*(undefined ***)puVar3 != &PTR_FUN_00afaaf8) {
          core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
        }
                    /* try { // try from 00a62c48 to 00a62c57 has its CatchHandler @ 00a62d20 */
        lVar9 = core::io::error::os_functions::get_os_functions();
        iVar4 = (**(code **)(lVar9 + 0x10))(iVar1);
      } while (iVar4 != 0);
      ppuVar5 = (undefined **)0x0;
      if (iVar1 != 9) {
        ppuVar5 = (undefined **)((long)iVar1 << 0x20 | 2);
      }
    }
  }
  return ppuVar5;
}


// ===== 00a62d3c  <std::io::stdio::StdoutRaw_as_core::io::write::Write>::write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StdoutRaw as core::io::write::Write>::write */

undefined1  [16] __rustcall
<std::io::stdio::StdoutRaw_as_core::io::write::Write>::write
          (undefined8 param_1,void *param_2,size_t param_3)

{
  size_t sVar1;
  int iVar2;
  undefined1 auVar3 [16];
  ulong uVar4;
  int *piVar5;
  undefined1 auVar6 [16];
  
  uVar4 = ::write(1,param_2,param_3);
  if (uVar4 != 0xffffffffffffffff) {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar4;
    return auVar3 << 0x40;
  }
  piVar5 = (int *)__errno();
  iVar2 = *piVar5;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  }
  auVar6._1_7_ = 0;
  auVar6[0] = iVar2 != 9;
  sVar1 = (long)iVar2 << 0x20 | 2;
  if (iVar2 == 9) {
    sVar1 = param_3;
  }
  auVar6._8_8_ = sVar1;
  return auVar6;
}


// ===== 00a62dc4  <std::io::stdio::StdoutRaw_as_core::io::write::Write>::write_all =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StdoutRaw as core::io::write::Write>::write_all */

ulong __rustcall
<std::io::stdio::StdoutRaw_as_core::io::write::Write>::write_all
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = FUN_00a6b090(param_2,param_3);
  uVar2 = uVar1;
  if ((((uVar1 != 0) && (1 < (uVar1 & 3))) && ((uVar1 & 3) == 2)) && (uVar2 = 0, uVar1 >> 0x20 != 9)
     ) {
    uVar2 = uVar1;
  }
  return uVar2;
}


// ===== 00a62e00  <std::io::stdio::StdoutRaw_as_core::io::write::Write>::write_fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StdoutRaw as core::io::write::Write>::write_fmt */

ulong __rustcall
<std::io::stdio::StdoutRaw_as_core::io::write::Write>::write_fmt
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 local_40;
  ulong local_38;
  undefined1 local_30;
  long local_28;
  
  local_38 = 0;
  local_40 = param_1;
                    /* try { // try from 00a62e1c to 00a62e53 has its CatchHandler @ 00a62ec4 */
  iVar1 = core::fmt::write(&local_40,&PTR_FUN_00afaac8,param_2,param_3);
  if (iVar1 == 0) {
    if (local_38 != 0) {
      if ((1 < (local_38 & 3) - 2) && ((local_38 & 3) != 0)) {
        local_28 = local_38 - 1;
        local_30 = 3;
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
      }
      local_38 = 0;
    }
  }
  else if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_00382152,0xad,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afa9f0);
  }
  uVar2 = local_38;
  if ((((local_38 != 0) && (1 < (local_38 & 3))) && ((local_38 & 3) != 3)) &&
     (uVar2 = 0, local_38 >> 0x20 != 9)) {
    uVar2 = local_38;
  }
  return uVar2;
}


// ===== 00a62edc  <std::net::tcp::TcpStream_as_alloc::io::read::Read>::read_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::net::tcp::TcpStream as alloc::io::read::Read>::read_vectored */

undefined1  [16] __rustcall
<std::net::tcp::TcpStream_as_alloc::io::read::Read>::read_vectored
          (int *param_1,iovec *param_2,ulong param_3)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (0x3ff < param_3) {
    param_3 = 0x400;
  }
  sVar2 = readv(*param_1,param_2,(int)param_3);
  if (sVar2 != -1) {
    auVar4._1_7_ = 0;
    auVar4[0] = sVar2 == -1;
    auVar4._8_8_ = sVar2;
    return auVar4;
  }
  piVar3 = (int *)__errno(0xffffffffffffffff,0xffffffffffffffff);
  iVar1 = *piVar3;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 00a62f70  <std::net::tcp::TcpStream_as_alloc::io::read::Read>::read_buf =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::net::tcp::TcpStream as alloc::io::read::Read>::read_buf */

ulong __rustcall
<std::net::tcp::TcpStream_as_alloc::io::read::Read>::read_buf(int *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  ssize_t sVar3;
  int *piVar4;
  
  lVar1 = param_2[2];
  sVar3 = recv(*param_1,(void *)(*param_2 + lVar1),param_2[1] - lVar1,0);
  if (sVar3 != -1) {
    param_2[2] = sVar3 + lVar1;
    return 0;
  }
  piVar4 = (int *)__errno();
  iVar2 = *piVar4;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00afaaf8) {
    return (long)iVar2 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  return (long)iVar2 << 0x20 | 2;
}


// ===== 00a63018  <std::sync::barrier::Barrier_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sync::barrier::Barrier as core::fmt::Debug>::fmt */

void __rustcall
<std::sync::barrier::Barrier_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,&DAT_003838f1,7);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish_non_exhaustive(auStack_20);
  return;
}


// ===== 00a63050  <std::sync::nonpoison::WouldBlock_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sync::nonpoison::WouldBlock as core::fmt::Display>::fmt */

void __rustcall
<std::sync::nonpoison::WouldBlock_as_core::fmt::Display>::fmt(undefined8 param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt(&DAT_003838f8,0x31,param_2);
  return;
}


// ===== 00a63064  <std::thread::local::AccessError_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::thread::local::AccessError as core::fmt::Debug>::fmt */

void __rustcall
<std::thread::local::AccessError_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,&DAT_00383929,0xb);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish(auStack_20);
  return;
}


// ===== 00a6309c  FUN_00a6309c =====

void FUN_00a6309c(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  char cVar2;
  undefined1 auVar3 [16];
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong __n;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  
  uVar7 = param_2[2];
  uVar1 = param_2[3];
  uVar6 = 0;
  if ((uVar7 <= uVar1) && (uVar8 = param_2[1], uVar1 <= uVar8)) {
    __n = (ulong)*(byte *)(param_2 + 5);
    lVar9 = *param_2;
    cVar2 = *(char *)((long)param_2 + __n + 0x1f);
    if (__n < 5) {
      do {
        if (uVar1 - uVar7 < 0x10) {
          uVar5 = 0;
          if (uVar1 == uVar7) goto LAB_00a63268;
          while (*(char *)(lVar9 + uVar7 + uVar5) != cVar2) {
            uVar5 = uVar5 + 1;
            if (uVar1 - uVar7 == uVar5) goto LAB_00a63268;
          }
        }
        else {
          auVar10 = core::slice::memchr::memchr_aligned(cVar2,lVar9 + uVar7,uVar1 - uVar7);
          uVar5 = auVar10._8_8_;
          if (auVar10._0_8_ != 1) goto LAB_00a63268;
        }
        uVar7 = uVar7 + uVar5 + 1;
        param_2[2] = uVar7;
        if (((__n <= uVar7) && (uVar7 <= uVar8)) &&
           (iVar4 = memcmp((void *)(lVar9 + (uVar7 - __n)),param_2 + 4,__n), iVar4 == 0)) {
          uVar6 = 1;
          param_1[1] = uVar7 - __n;
          param_1[2] = uVar7;
          goto LAB_00a63270;
        }
      } while (uVar7 <= uVar1);
      uVar6 = 0;
    }
    else {
      do {
        if (uVar1 - uVar7 < 0x10) {
          uVar5 = 0;
          if (uVar1 == uVar7) {
            auVar10 = ZEXT816(0);
          }
          else {
            do {
              if (*(char *)(lVar9 + uVar7 + uVar5) == cVar2) {
                auVar10._8_8_ = uVar5;
                auVar10._0_8_ = 1;
                goto LAB_00a6322c;
              }
              uVar5 = uVar5 + 1;
            } while (uVar1 - uVar7 != uVar5);
            auVar3._8_8_ = 0;
            auVar3._0_8_ = uVar1 - uVar7;
            auVar10 = auVar3 << 0x40;
          }
        }
        else {
          auVar10 = core::slice::memchr::memchr_aligned(cVar2,lVar9 + uVar7,uVar1 - uVar7);
        }
LAB_00a6322c:
        if (auVar10._0_8_ != 1) goto LAB_00a63268;
        uVar7 = uVar7 + auVar10._8_8_ + 1;
        param_2[2] = uVar7;
        if ((__n <= uVar7) && (uVar7 <= uVar8)) {
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (0,__n,4,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afc390);
        }
        uVar6 = 0;
      } while (uVar7 <= uVar1);
    }
  }
LAB_00a63270:
  *param_1 = uVar6;
  return;
LAB_00a63268:
  uVar6 = 0;
  param_2[2] = uVar1;
  goto LAB_00a63270;
}


// ===== 00a63290  <std::io::stdio::StdoutLock_as_std::os::unix::io::StdioExt>::take_fd =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StdoutLock as std::os::unix::io::StdioExt>::take_fd */

ulong __rustcall
<std::io::stdio::StdoutLock_as_std::os::unix::io::StdioExt>::take_fd
          (undefined4 *param_1,long *param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  undefined8 local_200;
  undefined8 uStack_1f8;
  int local_1e8;
  int local_1e4;
  undefined **local_1e0;
  undefined8 local_1d8;
  undefined2 local_1d0;
  long local_58;
  undefined8 local_50;
  
  local_200 = 0x1b600000000;
  uStack_1f8 = 0x101;
  local_1d0 = 0x6c;
  local_1d8 = DAT_00382dcc;
  uVar5 = <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul
                    (&local_58,&local_1d8,10);
  if (local_58 == 1) {
    local_1e0 = &PTR_DAT_00afab10;
  }
  else {
    uVar5 = FUN_00a4725c(&local_1e8,local_50,&local_200);
    if (local_1e8 != 1) {
      iVar2 = fcntl(1,0x406,3);
      if (iVar2 == -1) {
        piVar6 = (int *)__errno();
        iVar2 = *piVar6;
        if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
          core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
        }
        *param_1 = 1;
        *(ulong *)(param_1 + 2) = (long)iVar2 << 0x20 | 2;
      }
      else {
        lVar7 = *param_2;
        if (*(long *)(lVar7 + 0x10) != 0) {
          core::cell::panic_already_borrowed(&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afc640);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0xa6347c);
          (*pcVar1)();
        }
        *(undefined8 *)(lVar7 + 0x10) = 0xffffffffffffffff;
                    /* try { // try from 00a63374 to 00a6337b has its CatchHandler @ 00a634b8 */
        uVar5 = FUN_00a400a4(lVar7 + 0x18);
        *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
        if (uVar5 == 0) {
          iVar4 = dup2(local_1e4,1);
          if (iVar4 != -1) {
            uVar3 = close(local_1e4);
            *param_1 = 0;
            param_1[1] = iVar2;
            return (ulong)uVar3;
          }
          piVar6 = (int *)__errno();
          iVar4 = *piVar6;
          if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
            core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
          }
          uVar5 = (long)iVar4 << 0x20 | 2;
        }
        close(local_1e4);
        *(ulong *)(param_1 + 2) = uVar5;
        *param_1 = 1;
        local_1e4 = iVar2;
      }
      uVar3 = close(local_1e4);
      return (ulong)uVar3;
    }
  }
  *(undefined ***)(param_1 + 2) = local_1e0;
  *param_1 = 1;
  return uVar5;
}


// ===== 00a634fc  <std::os::unix::xdg::XdgDirsIter_as_core::iter::traits::iterator::Iterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::os::unix::xdg::XdgDirsIter as core::iter::traits::iterator::Iterator>::next */

void __rustcall
<std::os::unix::xdg::XdgDirsIter_as_core::iter::traits::iterator::Iterator>::next
          (size_t *param_1,long param_2)

{
  void *__src;
  ulong uVar1;
  ulong uVar2;
  undefined1 *__dest;
  size_t __n;
  size_t sVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x10);
  uVar2 = *(ulong *)(param_2 + 0x18);
  if (uVar1 < uVar2) {
LAB_00a6351c:
    *param_1 = 0xffffffffffffffff;
    return;
  }
  __n = 0;
  if (uVar1 != uVar2) {
    __src = (void *)(*(long *)(param_2 + 8) + uVar2);
    sVar3 = __n;
    do {
      __n = sVar3;
      if (*(char *)((long)__src + sVar3) == ':') break;
      sVar3 = sVar3 + 1;
      __n = uVar1 - uVar2;
    } while (uVar1 - uVar2 != sVar3);
    if (__n != 0) {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      __dest = (undefined1 *)FUN_004b25a4(__n,1);
      if (__dest == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        alloc::raw_vec::handle_error(1,__n);
      }
      memcpy(__dest,__src,__n);
      if (__n == 0xffffffffffffffff) goto LAB_00a6351c;
      goto LAB_00a635b0;
    }
  }
  __dest = &DAT_00000001;
LAB_00a635b0:
  *param_1 = __n;
  param_1[1] = (size_t)__dest;
  param_1[2] = __n;
  *(ulong *)(param_2 + 0x18) = uVar2 + __n + 1;
  return;
}


// ===== 00a635e4  <std::os::unix::xdg::XdgDirsIter_as_core::iter::traits::iterator::Iterator>::size_hint =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::os::unix::xdg::XdgDirsIter as core::iter::traits::iterator::Iterator>::size_hint */

void __rustcall
<std::os::unix::xdg::XdgDirsIter_as_core::iter::traits::iterator::Iterator>::size_hint
          (ulong *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(param_2 + 0x10);
  uVar3 = *(ulong *)(param_2 + 0x18);
  uVar1 = 0;
  if (uVar3 <= uVar2) {
    uVar1 = (uVar2 - uVar3) + 1;
  }
  *param_1 = (ulong)(uVar3 <= uVar2);
  param_1[1] = 1;
  param_1[2] = uVar1;
  return;
}


// ===== 00a63604  <std::sys::fs::common::Dir_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::fs::common::Dir as core::fmt::Debug>::fmt */

void __rustcall
<std::sys::fs::common::Dir_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_30 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,&DAT_00383934,3);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (auStack_30,&DAT_002bd17c,4,param_1,&PTR_FUN_00afc250);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 00a63668  <std::sys::env::common::Env_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::env::common::Env as core::fmt::Debug>::fmt */

void __rustcall
<std::sys::env::common::Env_as_core::fmt::Debug>::fmt(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_40 [16];
  long local_18;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_list(auStack_40,param_2);
  lVar1 = *(long *)(param_1 + 0x18);
  for (lVar2 = *(long *)(param_1 + 8); lVar1 != lVar2; lVar2 = lVar2 + 0x30) {
    local_18 = lVar2;
    <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry
              (auStack_40,&local_18,&DAT_00afa6e8);
  }
  <core::fmt::builders::[6]::core::fmt::builders::DebugList>::finish(auStack_40);
  return;
}


// ===== 00a636e0  <std::sys::time::unix::SystemTime_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::time::unix::SystemTime as core::fmt::Debug>::fmt */

void __rustcall
<std::sys::time::unix::SystemTime_as_core::fmt::Debug>::fmt(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_30 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,&DAT_00383937,10);
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (auStack_30,&DAT_003836fb,6,param_1,&DAT_00afbf20);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (uVar1,&DAT_00383701,7,param_1 + 8,&DAT_00afbf40);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 00a63760  <std::sys::stdio::unix::Stdin_as_alloc::io::read::Read>::read_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::stdio::unix::Stdin as alloc::io::read::Read>::read_vectored */

undefined1  [16] __rustcall
<std::sys::stdio::unix::Stdin_as_alloc::io::read::Read>::read_vectored
          (undefined8 param_1,iovec *param_2,ulong param_3)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (0x3ff < param_3) {
    param_3 = 0x400;
  }
  sVar2 = readv(0,param_2,(int)param_3);
  if (sVar2 != -1) {
    auVar4._1_7_ = 0;
    auVar4[0] = sVar2 == -1;
    auVar4._8_8_ = sVar2;
    return auVar4;
  }
  piVar3 = (int *)__errno(0xffffffffffffffff,0xffffffffffffffff);
  iVar1 = *piVar3;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 00a637f4  <std::sys::stdio::unix::Stdin_as_alloc::io::read::Read>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::stdio::unix::Stdin as alloc::io::read::Read>::read */

undefined1  [16] __rustcall
<std::sys::stdio::unix::Stdin_as_alloc::io::read::Read>::read
          (undefined8 param_1,void *param_2,size_t param_3)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  sVar2 = ::read(0,param_2,param_3);
  if (sVar2 != -1) {
    auVar4._1_7_ = 0;
    auVar4[0] = sVar2 == -1;
    auVar4._8_8_ = sVar2;
    return auVar4;
  }
  piVar3 = (int *)__errno(0xffffffffffffffff,0xffffffffffffffff);
  iVar1 = *piVar3;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 00a6387c  <std::sys::stdio::unix::Stdin_as_alloc::io::read::Read>::read_buf =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::stdio::unix::Stdin as alloc::io::read::Read>::read_buf */

ulong __rustcall
<std::sys::stdio::unix::Stdin_as_alloc::io::read::Read>::read_buf(undefined8 param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  ssize_t sVar3;
  int *piVar4;
  size_t __nbytes;
  
  lVar1 = param_2[2];
  __nbytes = param_2[1] - lVar1;
  if (0x7ffffffffffffffe < __nbytes) {
    __nbytes = 0x7fffffffffffffff;
  }
  sVar3 = ::read(0,(void *)(*param_2 + lVar1),__nbytes);
  if (sVar3 != -1) {
    param_2[2] = sVar3 + lVar1;
    return 0;
  }
  piVar4 = (int *)__errno();
  iVar2 = *piVar4;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00afaaf8) {
    return (long)iVar2 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  return (long)iVar2 << 0x20 | 2;
}


// ===== 00a6392c  <std::sys::helpers::wstr::WStrUnits_as_core::iter::traits::iterator::Iterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::helpers::wstr::WStrUnits as core::iter::traits::iterator::Iterator>::next */

void __rustcall
<std::sys::helpers::wstr::WStrUnits_as_core::iter::traits::iterator::Iterator>::next
          (undefined8 *param_1)

{
  if (*(short *)*param_1 != 0) {
    *param_1 = (short *)*param_1 + 1;
  }
  return;
}


// ===== 00a63944  <std::sync::mpmc::zero::ZeroToken_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sync::mpmc::zero::ZeroToken as core::fmt::Debug>::fmt */

void __rustcall
<std::sync::mpmc::zero::ZeroToken_as_core::fmt::Debug>::fmt(undefined8 *param_1,long param_2)

{
  undefined8 local_18;
  
  local_18 = *param_1;
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <usize_as_core::fmt::LowerHex>::fmt(&local_18);
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <usize_as_core::fmt::Display>::fmt();
    return;
  }
  <usize_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 00a63998  <std::sync::poison::condvar::Condvar_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sync::poison::condvar::Condvar as core::fmt::Debug>::fmt */

void __rustcall
<std::sync::poison::condvar::Condvar_as_core::fmt::Debug>::fmt
          (undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,&DAT_00383941,7);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish_non_exhaustive(auStack_20);
  return;
}


// ===== 00a639d0  FUN_00a639d0 =====

undefined1  [16] FUN_00a639d0(ulong *param_1,iovec *param_2,ulong param_3)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  char *pcVar4;
  int iVar5;
  bool bVar6;
  ulong uVar7;
  undefined8 uVar8;
  int *piVar9;
  size_t *psVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  size_t sVar14;
  size_t *psVar15;
  long lVar16;
  long *plVar17;
  iovec *piVar18;
  iovec *piVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined1 auVar26 [16];
  
  uVar3 = param_3;
  if (0x3ff < param_3) {
    uVar3 = 0x400;
  }
  if (param_3 != 0) {
    lVar22 = uVar3 * 0x10;
    lVar21 = 0;
    psVar15 = &param_2[uVar3].iov_len;
    piVar18 = param_2 + uVar3;
    uVar20 = uVar3;
    do {
      piVar19 = piVar18 + -1;
      pcVar4 = (char *)piVar19->iov_base;
      uVar7 = piVar18[-1].iov_len;
      if (0xf < uVar7) {
        uVar7 = core::slice::memchr::memchr_aligned(10);
        if ((uVar7 & 1) == 0) goto LAB_00a63a2c;
LAB_00a63a6c:
        uVar7 = FUN_00a400a4(param_1);
        if (uVar7 != 0) goto LAB_00a63b00;
        if (uVar3 < uVar20) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_fmt
                    (&DAT_0038247a,0x13,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afaee8);
        }
        uVar7 = writev(1,param_2,(int)uVar20);
        if (uVar7 != 0xffffffffffffffff) goto LAB_00a63a9c;
        piVar9 = (int *)__errno();
        iVar5 = *piVar9;
        if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
          core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
        }
        if (iVar5 == 9) {
          if (uVar20 != 0) {
            if (uVar20 < 5) {
              lVar12 = 0;
              uVar7 = 0;
            }
            else {
              lVar23 = 0;
              lVar25 = 0;
              lVar24 = 0;
              lVar13 = 0;
              uVar7 = 4;
              if ((uVar20 & 3) != 0) {
                uVar7 = uVar20 & 3;
              }
              psVar10 = &param_2[2].iov_len;
              lVar12 = uVar20 - uVar7;
              lVar16 = lVar12;
              do {
                plVar1 = (long *)(psVar10 + -4);
                sVar14 = *psVar10;
                plVar17 = (long *)(psVar10 + -2);
                plVar2 = (long *)(psVar10 + 2);
                lVar16 = lVar16 + -4;
                psVar10 = psVar10 + 8;
                lVar23 = *plVar1 + lVar23;
                lVar25 = *plVar17 + lVar25;
                lVar24 = sVar14 + lVar24;
                lVar13 = *plVar2 + lVar13;
              } while (lVar16 != 0);
              uVar7 = lVar24 + lVar23 + lVar13 + lVar25;
            }
            lVar23 = uVar20 - lVar12;
            psVar10 = &param_2[lVar12].iov_len;
            do {
              lVar23 = lVar23 + -1;
              uVar7 = *psVar10 + uVar7;
              psVar10 = psVar10 + 2;
            } while (lVar23 != 0);
LAB_00a63a9c:
            if (uVar7 != 0) {
              if (uVar20 != 0) {
                uVar11 = 0;
                psVar10 = &param_2->iov_len;
                do {
                  bVar6 = CARRY8(uVar11,*psVar10);
                  uVar11 = uVar11 + *psVar10;
                  if (bVar6) {
                    uVar11 = 0xffffffffffffffff;
                  }
                  if (uVar7 < uVar11) goto LAB_00a63bc4;
                  lVar22 = lVar22 + -0x10;
                  psVar10 = psVar10 + 2;
                } while (lVar22 != 0);
              }
              if (uVar20 == uVar3) {
                lVar22 = 0;
              }
              else {
                lVar22 = 0;
                do {
                  sVar14 = *psVar15;
                  if (sVar14 != 0) {
                    uVar3 = param_1[2];
                    uVar11 = *param_1;
                    uVar20 = uVar11 - uVar3;
                    if (uVar20 <= sVar14) {
                      sVar14 = uVar20;
                    }
                    memcpy((void *)(param_1[1] + uVar3),((iovec *)(psVar15 + -1))->iov_base,sVar14);
                    param_1[2] = sVar14 + uVar3;
                    if (uVar11 == uVar3) break;
                    lVar22 = sVar14 + lVar22;
                  }
                  lVar21 = lVar21 + -0x10;
                  psVar15 = psVar15 + 2;
                } while (lVar21 != 0);
              }
              uVar8 = 0;
              uVar7 = lVar22 + uVar7;
              goto LAB_00a63e14;
            }
            goto LAB_00a63bc4;
          }
          uVar7 = 0;
          uVar8 = 0;
        }
        else {
          uVar8 = 1;
          uVar7 = (long)iVar5 << 0x20 | 2;
        }
        goto LAB_00a63e14;
      }
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        if (*pcVar4 == '\n') goto LAB_00a63a6c;
        pcVar4 = pcVar4 + 1;
      }
LAB_00a63a2c:
      uVar20 = uVar20 - 1;
      psVar15 = psVar15 + -2;
      lVar21 = lVar21 + 0x10;
      lVar22 = lVar22 + -0x10;
      piVar18 = piVar19;
    } while (param_2 != piVar19);
  }
  if (((param_1[2] == 0) || (*(char *)(param_1[1] + param_1[2] + -1) != '\n')) ||
     (uVar7 = FUN_00a400a4(param_1), uVar7 == 0)) {
    lVar21 = uVar3 * 0x10;
    uVar7 = 0;
    piVar18 = param_2;
    do {
      if (lVar21 == 0) {
        if (param_3 == 0) {
LAB_00a63bc4:
          uVar8 = 0;
        }
        else {
          uVar11 = param_1[1];
          uVar20 = param_1[2];
          piVar18 = param_2;
          do {
            piVar19 = piVar18 + 1;
            sVar14 = piVar18->iov_len;
            memcpy((void *)(uVar11 + uVar20),piVar18->iov_base,sVar14);
            uVar20 = sVar14 + uVar20;
            piVar18 = piVar19;
          } while (piVar19 != param_2 + uVar3);
          uVar8 = 0;
          param_1[2] = uVar20;
        }
        goto LAB_00a63e14;
      }
      uVar20 = uVar7 + piVar18->iov_len;
      uVar11 = *param_1;
      if (CARRY8(uVar7,piVar18->iov_len)) {
        uVar20 = 0xffffffffffffffff;
      }
      if ((param_1[2] != 0) && (uVar11 - param_1[2] < uVar20)) {
        uVar7 = FUN_00a400a4(param_1);
        if (uVar7 != 0) goto LAB_00a63b00;
        uVar11 = *param_1;
      }
      piVar18 = piVar18 + 1;
      lVar21 = lVar21 + -0x10;
      uVar7 = uVar20;
    } while (uVar20 < uVar11);
    *(undefined1 *)(param_1 + 3) = 1;
    uVar7 = writev(1,param_2,(int)uVar3);
    if (uVar7 == 0xffffffffffffffff) {
      piVar9 = (int *)__errno();
      iVar5 = *piVar9;
      if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
        core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
      }
      if (iVar5 != 9) {
        uVar8 = 1;
        *(undefined1 *)(param_1 + 3) = 0;
        uVar7 = (long)iVar5 << 0x20 | 2;
        goto LAB_00a63e14;
      }
      if (param_3 < 5) {
        lVar13 = 0;
        uVar7 = 0;
      }
      else {
        lVar21 = 0;
        lVar22 = 0;
        lVar23 = 0;
        lVar25 = 0;
        uVar20 = 4;
        if ((uVar3 & 3) != 0) {
          uVar20 = uVar3 & 3;
        }
        psVar15 = &param_2[2].iov_len;
        lVar13 = uVar3 - uVar20;
        lVar24 = lVar13;
        do {
          plVar1 = (long *)(psVar15 + -4);
          sVar14 = *psVar15;
          plVar17 = (long *)(psVar15 + -2);
          plVar2 = (long *)(psVar15 + 2);
          lVar24 = lVar24 + -4;
          psVar15 = psVar15 + 8;
          lVar21 = *plVar1 + lVar21;
          lVar22 = *plVar17 + lVar22;
          lVar23 = sVar14 + lVar23;
          lVar25 = *plVar2 + lVar25;
        } while (lVar24 != 0);
        uVar7 = lVar23 + lVar21 + lVar25 + lVar22;
      }
      lVar21 = uVar3 - lVar13;
      psVar15 = &param_2[lVar13].iov_len;
      do {
        lVar21 = lVar21 + -1;
        uVar7 = *psVar15 + uVar7;
        psVar15 = psVar15 + 2;
      } while (lVar21 != 0);
    }
    uVar8 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  else {
LAB_00a63b00:
    uVar8 = 1;
  }
LAB_00a63e14:
  auVar26._8_8_ = uVar7;
  auVar26._0_8_ = uVar8;
  return auVar26;
}


// ===== 00a63e34  <std::backtrace_rs::symbolize::gimli::parse_running_mmaps::MapsEntry_as_core::str::traits::FromStr>::from_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::backtrace_rs::symbolize::gimli::parse_running_mmaps::MapsEntry as
   core::str::traits::FromStr>::from_str */

void __rustcall
<std::backtrace_rs::symbolize::gimli::parse_running_mmaps::MapsEntry_as_core::str::traits::FromStr>
::from_str(undefined8 *param_1,byte *param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  byte bVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulong uVar9;
  byte *pbVar10;
  long lVar11;
  byte *pbVar12;
  ulong uVar13;
  ulong uVar14;
  long local_b8;
  byte *local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  uint local_78 [2];
  long local_70;
  ulong local_68;
  byte *local_60;
  ulong local_58;
  undefined8 local_50;
  ulong uStack_48;
  undefined8 local_40;
  undefined1 local_38;
  
  if (param_3 != 0) {
    uVar5 = 0;
    do {
      if (param_2[uVar5] != 0x20) {
        param_3 = param_3 - uVar5;
        param_2 = param_2 + uVar5;
        if (param_3 == 0) goto LAB_00a640e8;
        goto LAB_00a63e7c;
      }
      uVar5 = uVar5 + 1;
    } while (param_3 != uVar5);
    if (param_3 != 0) {
LAB_00a63e7c:
      uVar5 = 0;
      do {
        if (param_2[uVar5] == 0x20) {
          if ((uVar5 != 0) && (param_3 - 1 != uVar5)) {
            lVar6 = ~uVar5 + param_3;
            uVar9 = uVar5 + 1;
            goto LAB_00a63ebc;
          }
          break;
        }
        uVar5 = uVar5 + 1;
      } while (param_3 != uVar5);
    }
  }
  goto LAB_00a640e8;
  while (uVar9 = uVar9 + 1, param_3 != uVar9) {
LAB_00a63ebc:
    if (param_2[uVar9] != 0x20) {
      lVar6 = param_3 - uVar9;
      if (lVar6 == 0) goto LAB_00a640e8;
      goto LAB_00a63ee8;
    }
  }
  uVar9 = uVar5 + 1;
  if (lVar6 != 0) {
LAB_00a63ee8:
    lVar11 = 0;
    lVar6 = 1 - lVar6;
    pbVar12 = param_2 + uVar9;
    do {
      pbVar8 = pbVar12 + 1;
      if (*pbVar12 == 0x20) {
        if ((lVar11 != 0) && (lVar6 != 0)) {
          pbVar12 = pbVar8;
          uVar9 = -lVar6;
          goto LAB_00a63f30;
        }
        break;
      }
      lVar6 = lVar6 + 1;
      lVar11 = lVar11 + -1;
      pbVar12 = pbVar8;
    } while (lVar6 != 1);
  }
  goto LAB_00a640e8;
  while( true ) {
    uVar9 = uVar9 - 1;
    pbVar12 = pbVar12 + 1;
    pbVar7 = pbVar8;
    uVar13 = -lVar6;
    if (uVar9 == 0) break;
LAB_00a63f30:
    pbVar7 = pbVar12;
    uVar13 = uVar9;
    if (*pbVar12 != 0x20) break;
  }
  if (uVar13 != 0) {
    uVar9 = 0;
    do {
      if (pbVar7[uVar9] == 0x20) {
        if ((uVar9 != 0) && (uVar13 - 1 != uVar9)) {
          lVar6 = ~uVar9 + uVar13;
          pbVar12 = pbVar7 + uVar9 + 1;
          goto LAB_00a63f9c;
        }
        break;
      }
      uVar9 = uVar9 + 1;
    } while (uVar13 != uVar9);
  }
  goto LAB_00a640e8;
  while( true ) {
    uVar13 = uVar13 - 1;
    pbVar8 = pbVar8 + 1;
    uVar14 = -lVar11;
    pbVar10 = pbVar12;
    if (uVar13 == 0) break;
LAB_00a64014:
    uVar14 = uVar13;
    pbVar10 = pbVar8;
    if (*pbVar8 != 0x20) break;
  }
  if (uVar14 == 0) goto LAB_00a640e8;
  uVar13 = 0;
  local_a0 = &DAT_00000001;
  do {
    if (pbVar10[uVar13] == 0x20) {
      if (uVar13 == 0) goto LAB_00a640e8;
      local_a0 = pbVar10 + uVar13 + 1;
      if (uVar14 - 1 != uVar13) {
        local_b8 = ~uVar13 + uVar14;
        goto LAB_00a64130;
      }
      break;
    }
    uVar13 = uVar13 + 1;
  } while (uVar14 != uVar13);
  local_b8 = 0;
  goto LAB_00a64088;
  while( true ) {
    local_b8 = local_b8 + -1;
    local_a0 = local_a0 + 1;
    if (local_b8 == 0) break;
LAB_00a64130:
    if (0x20 < *local_a0 || (1L << ((ulong)*local_a0 & 0x3f) & 0x100003600U) == 0)
    goto LAB_00a64088;
  }
  local_b8 = 0;
  local_a0 = pbVar10 + uVar14;
LAB_00a64088:
  local_50 = 0;
  local_38 = 1;
  local_40 = 0x2d0000002d;
  local_60 = param_2;
  local_58 = uVar5;
  uStack_48 = uVar5;
  FUN_00a6309c(local_78,&local_60);
  if (((local_78[0] & 1) != 0) && (local_70 != 0)) {
    if (local_70 == 1) {
      bVar3 = *param_2;
      if ((bVar3 == 0x2b) || (bVar3 == 0x2d)) goto LAB_00a64230;
    }
    else {
      bVar3 = *param_2;
    }
    uVar13 = local_70 - (ulong)(bVar3 == 0x2b);
    pbVar12 = param_2;
    if (bVar3 == 0x2b) {
      pbVar12 = param_2 + 1;
    }
    if (uVar13 < 0x11) {
      uVar14 = 0;
      for (; uVar13 != 0; uVar13 = uVar13 - 1) {
        bVar3 = *pbVar12;
        uVar1 = (bVar3 - 0x41 & 0xffffffdf) + 10;
        if (bVar3 < 0x3a) {
          uVar1 = bVar3 - 0x30;
        }
        if (0xf < uVar1) goto LAB_00a64230;
        uVar14 = (ulong)uVar1 | uVar14 << 4;
        pbVar12 = pbVar12 + 1;
      }
LAB_00a641bc:
      if (uVar5 != local_68) {
        param_2 = param_2 + local_68;
        if (uVar5 - local_68 == 1) {
          bVar3 = *param_2;
          if ((bVar3 == 0x2b) || (bVar3 == 0x2d)) goto LAB_00a64230;
        }
        else {
          bVar3 = *param_2;
        }
        uVar13 = 0;
        uVar2 = (ulong)(bVar3 == 0x2b);
        if (bVar3 == 0x2b) {
          param_2 = param_2 + 1;
        }
        lVar6 = local_68 + uVar2;
        if ((-local_68 - uVar2) + uVar5 < 0x11) {
          lVar6 = lVar6 - uVar5;
          if (lVar6 != 0) {
            do {
              bVar3 = *param_2;
              uVar1 = (bVar3 - 0x41 & 0xffffffdf) + 10;
              if (bVar3 < 0x3a) {
                uVar1 = bVar3 - 0x30;
              }
              if (0xf < uVar1) goto LAB_00a64230;
              uVar13 = (ulong)uVar1 | uVar13 << 4;
              bVar4 = lVar6 != -1;
              lVar6 = lVar6 + 1;
              param_2 = param_2 + 1;
            } while (bVar4);
          }
LAB_00a642cc:
          FUN_00a3c138(&local_60,pbVar7,uVar9);
          uVar5 = local_58;
          if ((char)local_60 != '\x01') {
            FUN_00a29dec(&local_90,local_a0,local_b8);
            param_1[1] = uStack_88;
            *param_1 = local_90;
            param_1[2] = local_80;
            param_1[3] = uVar14;
            param_1[4] = uVar13;
            param_1[5] = uVar5;
            return;
          }
        }
        else {
          lVar6 = lVar6 - uVar5;
          while( true ) {
            if (lVar6 == 0) goto LAB_00a642cc;
            if (uVar13 >> 0x3c != 0) break;
            bVar3 = *param_2;
            uVar1 = (bVar3 - 0x41 & 0xffffffdf) + 10;
            if (bVar3 < 0x3a) {
              uVar1 = bVar3 - 0x30;
            }
            uVar5 = uVar13 * 0x10;
            uVar13 = uVar1 + uVar5;
            if ((0xf < uVar1) ||
               (lVar6 = lVar6 + 1, param_2 = param_2 + 1, CARRY8((ulong)uVar1,uVar5))) break;
          }
        }
      }
    }
    else {
      uVar14 = 0;
      while( true ) {
        if (uVar13 == 0) goto LAB_00a641bc;
        if (uVar14 >> 0x3c != 0) break;
        bVar3 = *pbVar12;
        uVar1 = (bVar3 - 0x41 & 0xffffffdf) + 10;
        if (bVar3 < 0x3a) {
          uVar1 = bVar3 - 0x30;
        }
        uVar2 = uVar14 * 0x10;
        uVar14 = uVar1 + uVar2;
        if ((0xf < uVar1) ||
           (uVar13 = uVar13 - 1, pbVar12 = pbVar12 + 1, CARRY8((ulong)uVar1,uVar2))) break;
      }
    }
  }
LAB_00a64230:
  param_1[1] = &DAT_00383948;
  param_1[2] = 0x11;
  *param_1 = 0xffffffffffffffff;
  return;
  while( true ) {
    lVar6 = lVar6 + -1;
    pbVar12 = pbVar12 + 1;
    lVar11 = ~uVar9 + uVar13;
    pbVar8 = pbVar7 + uVar9 + 1;
    if (lVar6 == 0) break;
LAB_00a63f9c:
    lVar11 = lVar6;
    pbVar8 = pbVar12;
    if (*pbVar12 != 0x20) break;
  }
  if (lVar11 != 0) {
    lVar6 = 0;
    lVar11 = 1 - lVar11;
    do {
      pbVar12 = pbVar8 + 1;
      if (*pbVar8 == 0x20) {
        if ((lVar6 != 0) && (lVar11 != 0)) {
          uVar13 = -lVar11;
          pbVar8 = pbVar12;
          goto LAB_00a64014;
        }
        break;
      }
      lVar11 = lVar11 + 1;
      lVar6 = lVar6 + -1;
      pbVar8 = pbVar12;
    } while (lVar11 != 1);
  }
LAB_00a640e8:
  param_1[1] = &DAT_00383948;
  param_1[2] = 0x11;
  *param_1 = 0xffffffffffffffff;
  return;
}


// ===== 00a6436c  <std::backtrace_rs::symbolize::gimli::mmap::Mmap_as_core::ops::deref::Deref>::deref =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::backtrace_rs::symbolize::gimli::mmap::Mmap as core::ops::deref::Deref>::deref */

undefined1  [16] __rustcall
<std::backtrace_rs::symbolize::gimli::mmap::Mmap_as_core::ops::deref::Deref>::deref
          (undefined1 (*param_1) [16])

{
  return *param_1;
}


// ===== 00a64378  <std::os::unix::net::addr::SocketAddr_as_std::os::net::linux_ext::addr::SocketAddrExt>::as_abstract_name =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::os::unix::net::addr::SocketAddr as
   std::os::net::linux_ext::addr::SocketAddrExt>::as_abstract_name */

undefined1  [16] __rustcall
<std::os::unix::net::addr::SocketAddr_as_std::os::net::linux_ext::addr::SocketAddrExt>::
as_abstract_name(uint *param_1)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  uVar3 = (ulong)*param_1;
  uVar2 = uVar3 - 2;
  if (uVar2 != 0) {
    if (*(char *)((long)param_1 + 6) == '\0') {
      if (uVar2 < 0x6d) {
        auVar4._8_8_ = uVar3 - 3;
        auVar4._0_8_ = (long)param_1 + 7;
        return auVar4;
      }
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (1,uVar2,0x6c,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afaf48);
    }
    uVar2 = uVar3 - 3;
    if (0x6c < uVar2) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (0,uVar2,0x6c,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afaf60);
    }
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  return auVar1 << 0x40;
}


// ===== 00a643ec  <std::sys::fs::unix::cfm::CachedFileMetadata_as_core::io::write::Write>::write_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::fs::unix::cfm::CachedFileMetadata as core::io::write::Write>::write_vectored */

undefined1  [16] __rustcall
<std::sys::fs::unix::cfm::CachedFileMetadata_as_core::io::write::Write>::write_vectored
          (long param_1,iovec *param_2,ulong param_3)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (0x3ff < param_3) {
    param_3 = 0x400;
  }
  sVar2 = writev(*(int *)(param_1 + 0x80),param_2,(int)param_3);
  if (sVar2 != -1) {
    auVar4._1_7_ = 0;
    auVar4[0] = sVar2 == -1;
    auVar4._8_8_ = sVar2;
    return auVar4;
  }
  piVar3 = (int *)__errno(0xffffffffffffffff,0xffffffffffffffff);
  iVar1 = *piVar3;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 00a64480  <std::sys::fs::unix::cfm::CachedFileMetadata_as_core::io::write::Write>::write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::fs::unix::cfm::CachedFileMetadata as core::io::write::Write>::write */

undefined1  [16] __rustcall
<std::sys::fs::unix::cfm::CachedFileMetadata_as_core::io::write::Write>::write
          (long param_1,void *param_2,size_t param_3)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  sVar2 = ::write(*(int *)(param_1 + 0x80),param_2,param_3);
  if (sVar2 != -1) {
    auVar4._1_7_ = 0;
    auVar4[0] = sVar2 == -1;
    auVar4._8_8_ = sVar2;
    return auVar4;
  }
  piVar3 = (int *)__errno(0xffffffffffffffff,0xffffffffffffffff);
  iVar1 = *piVar3;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 00a64508  <std::sys::fs::unix::dir::Dir_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::fs::unix::dir::Dir as core::fmt::Debug>::fmt */

void __rustcall
<std::sys::fs::unix::dir::Dir_as_core::fmt::Debug>::fmt(undefined4 *param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  FUN_00a515f4(auStack_20,*param_1,param_2,&DAT_00383934,3);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish(auStack_20);
  return;
}


// ===== 00a64548  <std::sys::net::connection::socket::LookupHost_as_core::iter::traits::iterator::Iterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::net::connection::socket::LookupHost as core::iter::traits::iterator::Iterator>::next
    */

void __rustcall
<std::sys::net::connection::socket::LookupHost_as_core::iter::traits::iterator::Iterator>::next
          (short *param_1,long param_2)

{
  ushort uVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  ushort uVar5;
  short *psVar6;
  undefined4 in_w13;
  undefined **ppuVar7;
  short sVar8;
  undefined4 in_w16;
  
  uVar3 = *(ulong *)(param_2 + 8);
  while( true ) {
    uVar2 = uVar3;
    if (uVar2 == 0) {
      *param_1 = 2;
      return;
    }
    psVar6 = *(short **)(uVar2 + 0x20);
    uVar3 = *(ulong *)(uVar2 + 0x28);
    sVar8 = *psVar6;
    *(ulong *)(param_2 + 8) = uVar3;
    if (sVar8 == 10) break;
    if (sVar8 == 2) {
      if (*(uint *)(uVar2 + 0x10) < 0x10) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic(&DAT_003830f4,0x34,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afbb10);
      }
      iVar4 = *(int *)(psVar6 + 2);
      sVar8 = 0;
      ppuVar7 = &PTR_s_invalid_argument_00afbb40;
      uVar1 = (ushort)psVar6[1] >> 8 | (ushort)(((ushort)psVar6[1] & 0xff00ff) << 8);
LAB_00a645e0:
      uVar5 = *(ushort *)(param_2 + 0x10);
      *param_1 = sVar8;
      *(int *)(param_1 + 1) = iVar4;
      if (sVar8 == 0) {
        uVar1 = uVar5;
      }
      *(undefined ***)(param_1 + 4) = ppuVar7;
      param_1[3] = uVar1;
      if (sVar8 == 0) {
        uVar5 = (ushort)psVar6;
      }
      *(undefined4 *)(param_1 + 8) = in_w16;
      *(int *)(param_1 + 10) = (int)uVar3;
      *(undefined4 *)(param_1 + 0xc) = in_w13;
      param_1[0xe] = uVar5;
      return;
    }
  }
  if (*(uint *)(uVar2 + 0x10) < 0x1c) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(&DAT_00383128,0x35,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afbb28);
  }
  uVar3 = (ulong)*(uint *)(psVar6 + 2);
  in_w16 = *(undefined4 *)(psVar6 + 10);
  in_w13 = *(undefined4 *)(psVar6 + 0xc);
  uVar1 = psVar6[5];
  iVar4 = (uint)(ushort)psVar6[4] << 0x10;
  ppuVar7 = *(undefined ***)(psVar6 + 6);
  psVar6 = (short *)(ulong)((uint)((ushort)psVar6[1] >> 8) | ((ushort)psVar6[1] & 0xff00ff) << 8);
  sVar8 = 1;
  goto LAB_00a645e0;
}


// ===== 00a64644  <std::sys::sync::once::futex::CompletionGuard_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::sync::once::futex::CompletionGuard as core::ops::drop::Drop>::drop */

void __rustcall
<std::sys::sync::once::futex::CompletionGuard_as_core::ops::drop::Drop>::drop(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  uint *puVar5;
  
  puVar5 = (uint *)*param_1;
  uVar1 = *(uint *)(param_1 + 1);
  do {
    uVar2 = *puVar5;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar5,0x10);
    if (bVar4) {
      *puVar5 = uVar1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((uVar2 >> 2 & 1) == 0) {
    return;
  }
  syscall(0x62,puVar5,0x81,0x7fffffff);
  return;
}


// ===== 00a64670  <std::sys::process::unix::common::cstring_array::CStringArray_as_core::ops::index::Index<usize>>::index =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::process::unix::common::cstring_array::CStringArray as
   core::ops::index::Index<usize>>::index */

undefined1  [16] __rustcall
<std::sys::process::unix::common::cstring_array::CStringArray_as_core::ops::index::Index<usize>>::
index(long param_1,ulong param_2,undefined8 param_3)

{
  size_t sVar1;
  ulong uVar2;
  char *__s;
  undefined1 auVar3 [16];
  
  uVar2 = *(long *)(param_1 + 0x10) - 1;
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail(0,uVar2,0);
  }
  if (param_2 < uVar2) {
    __s = *(char **)(*(long *)(param_1 + 8) + param_2 * 8);
    sVar1 = strlen(__s);
    auVar3._8_8_ = sVar1 + 1;
    auVar3._0_8_ = __s;
    return auVar3;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_bounds_check(param_2,uVar2,param_3);
}


// ===== 00a646dc  FUN_00a646dc =====

void FUN_00a646dc(long *param_1,undefined8 param_2)

{
  if (*param_1 != 0) {
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,*param_1,param_1[1]);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::process::abort();
}


// ===== 00a64700  <std::panicking::panic_handler::FormatStringPayload_as_core::panic::PanicPayload>::get =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::panicking::panic_handler::FormatStringPayload as core::panic::PanicPayload>::get */

undefined1  [16] __rustcall
<std::panicking::panic_handler::FormatStringPayload_as_core::panic::PanicPayload>::get
          (long *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  long local_38;
  long lStack_30;
  long local_28;
  
  if (*param_1 != -1) {
    auVar1._8_8_ = &UNK_00afc408;
    auVar1._0_8_ = param_1;
    return auVar1;
  }
  local_28 = 0;
  local_38 = 0;
  lStack_30 = 1;
                    /* try { // try from 00a64750 to 00a6475f has its CatchHandler @ 00a64794 */
  core::fmt::write(&local_38,&PTR_FUN_00afac20,**(undefined8 **)param_1[3],
                   (*(undefined8 **)param_1[3])[1]);
  param_1[1] = lStack_30;
  *param_1 = local_38;
  param_1[2] = local_28;
  auVar2._8_8_ = &UNK_00afc408;
  auVar2._0_8_ = param_1;
  return auVar2;
}


// ===== 00a647b4  <std::panicking::panic_handler::FormatStringPayload_as_core::panic::PanicPayload>::take_box =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::panicking::panic_handler::FormatStringPayload as core::panic::PanicPayload>::take_box */

void __rustcall
<std::panicking::panic_handler::FormatStringPayload_as_core::panic::PanicPayload>::take_box
          (long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long local_48;
  long lStack_40;
  long local_38;
  
  lVar4 = *param_1;
  if (lVar4 == -1) {
    local_38 = 0;
    local_48 = 0;
    lStack_40 = 1;
                    /* try { // try from 00a647f0 to 00a647ff has its CatchHandler @ 00a64878 */
    core::fmt::write(&local_48,&PTR_FUN_00afac20,**(undefined8 **)param_1[3],
                     (*(undefined8 **)param_1[3])[1]);
    param_1[1] = lStack_40;
    *param_1 = local_48;
    lVar4 = *param_1;
    param_1[2] = local_38;
  }
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  *param_1 = 0;
  param_1[1] = 1;
  param_1[2] = 0;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  plVar3 = (long *)FUN_004b25a4(0x18,8);
  if (plVar3 != (long *)0x0) {
    *plVar3 = lVar4;
    plVar3[1] = lVar1;
    plVar3[2] = lVar2;
    return;
  }
                    /* try { // try from 00a64868 to 00a64873 has its CatchHandler @ 00a64898 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x18);
}


// ===== 00a648bc  <std::panicking::resume_unwind::RewrapBox_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::panicking::resume_unwind::RewrapBox as core::fmt::Display>::fmt */

void __rustcall
<std::panicking::resume_unwind::RewrapBox_as_core::fmt::Display>::fmt
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_00382b7d,0xc);
  return;
}


// ===== 00a648d0  <std::fs::File_as_alloc::io::read::Read>::read_to_end =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::fs::File as alloc::io::read::Read>::read_to_end */

undefined1  [16] __rustcall
<std::fs::File_as_alloc::io::read::Read>::read_to_end(undefined8 param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined8 local_50;
  long local_48;
  ulong local_40;
  
  local_50 = param_1;
  auVar5 = FUN_00a4a9f4();
  uVar4 = param_2[2];
  uVar3 = *param_2;
  uVar1 = auVar5._8_8_;
  if ((auVar5 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
    uVar1 = 0;
  }
  if (uVar1 <= uVar3 - uVar4) {
LAB_00a64990:
    auVar5 = FUN_00a2407c(&local_50,param_2,auVar5._0_8_,auVar5._8_8_);
    return auVar5;
  }
  if (!CARRY8(uVar1,uVar4)) {
    uVar2 = uVar1 + uVar4;
    if (uVar1 + uVar4 <= uVar3 * 2) {
      uVar2 = uVar3 * 2;
    }
    if (uVar2 < 9) {
      uVar2 = 8;
    }
    FUN_00a3856c(&local_48,uVar3,param_2[1],uVar2,1,1);
    if (local_48 != 1) {
      *param_2 = uVar2;
      param_2[1] = local_40;
      goto LAB_00a64990;
    }
  }
  auVar5._8_8_ = 0x2600000003;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 00a649b4  <std::fs::File_as_alloc::io::read::Read>::read_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::fs::File as alloc::io::read::Read>::read_vectored */

undefined1  [16] __rustcall
<std::fs::File_as_alloc::io::read::Read>::read_vectored(int *param_1,iovec *param_2,ulong param_3)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (0x3ff < param_3) {
    param_3 = 0x400;
  }
  sVar2 = readv(*param_1,param_2,(int)param_3);
  if (sVar2 != -1) {
    auVar4._1_7_ = 0;
    auVar4[0] = sVar2 == -1;
    auVar4._8_8_ = sVar2;
    return auVar4;
  }
  piVar3 = (int *)__errno(0xffffffffffffffff,0xffffffffffffffff);
  iVar1 = *piVar3;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 00a64a48  <std::fs::File_as_alloc::io::read::Read>::read_to_string =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::fs::File as alloc::io::read::Read>::read_to_string */

void __rustcall <std::fs::File_as_alloc::io::read::Read>::read_to_string(undefined8 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <&std::fs::File_as_alloc::io::read::Read>::read_to_string(&local_18);
  return;
}


// ===== 00a64a6c  <std::fs::File_as_alloc::io::read::Read>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::fs::File as alloc::io::read::Read>::read */

undefined1  [16] __rustcall
<std::fs::File_as_alloc::io::read::Read>::read(int *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  sVar2 = ::read(*param_1,param_2,param_3);
  if (sVar2 != -1) {
    auVar4._1_7_ = 0;
    auVar4[0] = sVar2 == -1;
    auVar4._8_8_ = sVar2;
    return auVar4;
  }
  piVar3 = (int *)__errno(0xffffffffffffffff,0xffffffffffffffff);
  iVar1 = *piVar3;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 00a64af4  <std::fs::File_as_alloc::io::read::Read>::read_buf =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::fs::File as alloc::io::read::Read>::read_buf */

ulong __rustcall <std::fs::File_as_alloc::io::read::Read>::read_buf(int *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  ssize_t sVar3;
  int *piVar4;
  size_t __nbytes;
  
  lVar1 = param_2[2];
  __nbytes = param_2[1] - lVar1;
  if (0x7ffffffffffffffe < __nbytes) {
    __nbytes = 0x7fffffffffffffff;
  }
  sVar3 = ::read(*param_1,(void *)(*param_2 + lVar1),__nbytes);
  if (sVar3 != -1) {
    param_2[2] = sVar3 + lVar1;
    return 0;
  }
  piVar4 = (int *)__errno();
  iVar2 = *piVar4;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00afaaf8) {
    return (long)iVar2 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  return (long)iVar2 << 0x20 | 2;
}


// ===== 00a64ba4  <std::time::SystemTime_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::time::SystemTime as core::fmt::Debug>::fmt */

void __rustcall <std::time::SystemTime_as_core::fmt::Debug>::fmt(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_30 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,&DAT_00383937,10);
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (auStack_30,&DAT_003836fb,6,param_1,&DAT_00afbf20);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (uVar1,&DAT_00383701,7,param_1 + 8,&DAT_00afbf40);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 00a64c24  FUN_00a64c24 =====

void FUN_00a64c24(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [16];
  long local_28;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_list(auStack_38,param_2);
  local_28 = param_1;
  <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry
            (auStack_38,&local_28,&DAT_00afa708);
  local_28 = param_1 + 1;
  <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry
            (auStack_38,&local_28,&DAT_00afa708);
  local_28 = param_1 + 2;
  <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry
            (auStack_38,&local_28,&DAT_00afa708);
  local_28 = param_1 + 3;
  <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry
            (auStack_38,&local_28,&DAT_00afa708);
  local_28 = param_1 + 4;
  <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry
            (auStack_38,&local_28,&DAT_00afa708);
  local_28 = param_1 + 5;
  <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry
            (auStack_38,&local_28,&DAT_00afa708);
  local_28 = param_1 + 6;
  <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry
            (auStack_38,&local_28,&DAT_00afa708);
  local_28 = param_1 + 7;
  <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry
            (auStack_38,&local_28,&DAT_00afa708);
  <core::fmt::builders::[6]::core::fmt::builders::DebugList>::finish(auStack_38);
  return;
}


// ===== 00a64d20  <std::net::tcp::IntoIncoming_as_core::iter::traits::iterator::Iterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::net::tcp::IntoIncoming as core::iter::traits::iterator::Iterator>::next */

void __rustcall
<std::net::tcp::IntoIncoming_as_core::iter::traits::iterator::Iterator>::next(undefined4 *param_1)

{
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 local_40;
  
  <std::net::tcp::[7]::std::net::tcp::TcpListener>::accept(&local_48);
  *param_1 = local_48;
  param_1[1] = uStack_44;
  *(undefined8 *)(param_1 + 2) = local_40;
  return;
}


// ===== 00a64d5c  <std::sys::fs::unix::ReadDir_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::fs::unix::ReadDir as core::fmt::Debug>::fmt */

void __rustcall <std::sys::fs::unix::ReadDir_as_core::fmt::Debug>::fmt(long *param_1)

{
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = *(undefined8 *)(*param_1 + 0x18);
  uStack_18 = *(undefined8 *)(*param_1 + 0x20);
  <core::str::lossy::Debug_as_core::fmt::Debug>::fmt(&local_20);
  return;
}


// ===== 00a64d88  <std::sys::process::unix::common::CommandArgs_as_core::iter::traits::iterator::Iterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::process::unix::common::CommandArgs as core::iter::traits::iterator::Iterator>::next */

undefined1  [16] __rustcall
<std::sys::process::unix::common::CommandArgs_as_core::iter::traits::iterator::Iterator>::next
          (long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  size_t sVar3;
  char *__s;
  undefined1 auVar4 [16];
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)param_1[1]) {
    __s = (char *)*puVar1;
    *param_1 = (long)(puVar1 + 1);
    sVar3 = strlen(__s);
    auVar4._8_8_ = sVar3;
    auVar4._0_8_ = __s;
    return auVar4;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_2;
  return auVar2 << 0x40;
}


// ===== 00a64dd8  <std::sys::process::unix::common::CommandArgs_as_core::iter::traits::iterator::Iterator>::size_hint =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::process::unix::common::CommandArgs as
   core::iter::traits::iterator::Iterator>::size_hint */

void __rustcall
<std::sys::process::unix::common::CommandArgs_as_core::iter::traits::iterator::Iterator>::size_hint
          (ulong *param_1,long *param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)(param_2[1] - *param_2) >> 3;
  *param_1 = uVar1;
  param_1[1] = 1;
  param_1[2] = uVar1;
  return;
}


// ===== 00a64df4  <std::fs::File_as_core::io::write::Write>::write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::fs::File as core::io::write::Write>::write */

undefined1  [16] __rustcall
<std::fs::File_as_core::io::write::Write>::write(int *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  sVar2 = ::write(*param_1,param_2,param_3);
  if (sVar2 != -1) {
    auVar4._1_7_ = 0;
    auVar4[0] = sVar2 == -1;
    auVar4._8_8_ = sVar2;
    return auVar4;
  }
  piVar3 = (int *)__errno(0xffffffffffffffff,0xffffffffffffffff);
  iVar1 = *piVar3;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 00a64e7c  <std::path::Iter_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::path::Iter as core::fmt::Debug>::fmt */

void __rustcall <std::path::Iter_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [24];
  undefined1 local_30 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple(auStack_48,param_2,&DAT_002bcff8,4);
  local_30 = <std::path::[8]::std::path::Components>::as_path(param_1);
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::field
            (auStack_48,local_30,&DAT_00afc428);
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::finish();
  return;
}


// ===== 00a64ee0  FUN_00a64ee0 =====

void FUN_00a64ee0(long param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt
            (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_2);
  return;
}


// ===== 00a64ef4  <std::sys::fs::unix::ReadDir_as_core::iter::traits::iterator::Iterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::fs::unix::ReadDir as core::iter::traits::iterator::Iterator>::next */

void __rustcall
<std::sys::fs::unix::ReadDir_as_core::iter::traits::iterator::Iterator>::next
          (undefined8 *param_1,undefined8 *param_2)

{
  uchar uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  int *piVar6;
  dirent *pdVar7;
  size_t sVar8;
  long lVar9;
  __ino_t _Var10;
  long *plVar11;
  undefined1 auVar12 [16];
  
  if ((*(byte *)(param_2 + 1) & 1) == 0) {
    piVar6 = (int *)__errno();
    plVar11 = (long *)*param_2;
    *piVar6 = 0;
    pdVar7 = readdir((DIR *)plVar11[5]);
    while (pdVar7 != (dirent *)0x0) {
      sVar8 = strlen(pdVar7->d_name);
      if (sVar8 == 1) {
        if (pdVar7->d_name[0] != '.') goto LAB_00a64f9c;
      }
      else if ((sVar8 != 2) || (*(short *)pdVar7->d_name != 0x2e2e)) {
LAB_00a64f9c:
        _Var10 = pdVar7->d_ino;
        uVar1 = pdVar7->d_type;
        auVar12 = <core::ffi::c_str::CStr_as_alloc::borrow::ToOwned>::to_owned
                            (pdVar7->d_name,sVar8 + 1);
        do {
          lVar9 = *plVar11;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = lVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (-1 < lVar9) {
          param_1[1] = plVar11;
          *(undefined1 (*) [16])(param_1 + 2) = auVar12;
          param_1[4] = _Var10;
          *(uchar *)(param_1 + 5) = uVar1;
          *param_1 = 1;
          return;
        }
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0xa65058);
        (*pcVar5)();
      }
      *piVar6 = 0;
      pdVar7 = readdir((DIR *)plVar11[5]);
    }
    iVar2 = *piVar6;
    *(undefined1 *)(param_2 + 1) = 1;
    if (iVar2 != 0) {
      if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
        core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
      }
      param_1[1] = 0;
      param_1[2] = (long)iVar2 << 0x20 | 2;
      *param_1 = 1;
      return;
    }
  }
  *param_1 = 0;
  return;
}


// ===== 00a65058  <std::sys::process::unix::common::CommandArgs_as_core::iter::traits::exact_size::ExactSizeIterator>::len =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::process::unix::common::CommandArgs as
   core::iter::traits::exact_size::ExactSizeIterator>::len */

ulong __rustcall
<std::sys::process::unix::common::CommandArgs_as_core::iter::traits::exact_size::ExactSizeIterator>
::len(long *param_1)

{
  return (ulong)(param_1[1] - *param_1) >> 3;
}


// ===== 00a65068  <std::fs::File_as_core::io::seek::Seek>::stream_len =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::fs::File as core::io::seek::Seek>::stream_len */

void __rustcall <std::fs::File_as_core::io::seek::Seek>::stream_len(undefined8 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <&std::fs::File_as_core::io::seek::Seek>::stream_len(&local_18);
  return;
}


// ===== 00a6508c  <std::fs::File_as_core::io::seek::Seek>::stream_position =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::fs::File as core::io::seek::Seek>::stream_position */

undefined1  [16] __rustcall <std::fs::File_as_core::io::seek::Seek>::stream_position(int *param_1)

{
  int iVar1;
  __off64_t _Var2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  _Var2 = lseek64(*param_1,0,1);
  if (_Var2 != -1) {
    auVar4._1_7_ = 0;
    auVar4[0] = _Var2 == -1;
    auVar4._8_8_ = _Var2;
    return auVar4;
  }
  piVar3 = (int *)__errno(0xffffffffffffffff,0xffffffffffffffff);
  iVar1 = *piVar3;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 00a6511c  <std::fs::File_as_core::io::seek::Seek>::seek =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::fs::File as core::io::seek::Seek>::seek */

undefined1  [16] __rustcall
<std::fs::File_as_core::io::seek::Seek>::seek(int *param_1,long param_2,__off64_t param_3)

{
  int iVar1;
  __off64_t _Var2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  _Var2 = lseek64(*param_1,param_3,*(int *)(&DAT_00383cb8 + param_2 * 4));
  if (_Var2 != -1) {
    auVar4._1_7_ = 0;
    auVar4[0] = _Var2 == -1;
    auVar4._8_8_ = _Var2;
    return auVar4;
  }
  piVar3 = (int *)__errno(0xffffffffffffffff,0xffffffffffffffff);
  iVar1 = *piVar3;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 00a651b8  <std::env::Args_as_core::iter::traits::iterator::Iterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::env::Args as core::iter::traits::iterator::Iterator>::next */

void __rustcall
<std::env::Args_as_core::iter::traits::iterator::Iterator>::next(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long local_48;
  long lStack_40;
  long local_38;
  
  plVar3 = *(long **)(param_2 + 8);
  if (plVar3 != *(long **)(param_2 + 0x18)) {
    lVar4 = *plVar3;
    *(long **)(param_2 + 8) = plVar3 + 3;
    if (lVar4 != -1) {
                    /* try { // try from 00a651f4 to 00a65207 has its CatchHandler @ 00a6528c */
      lVar1 = plVar3[1];
      lVar2 = plVar3[2];
      core::str::converts::from_utf8(&local_48,lVar1,lVar2);
      if (((uint)local_48 & 1) == 0) {
        *param_1 = lVar4;
        param_1[1] = lVar1;
        param_1[2] = lVar2;
        return;
      }
                    /* try { // try from 00a65250 to 00a65273 has its CatchHandler @ 00a65278 */
      local_48 = lVar4;
      lStack_40 = lVar1;
      local_38 = lVar2;
                    /* WARNING: Subroutine does not return */
      core::result::unwrap_failed
                (&DAT_00382483,0x2b,&local_48,&PTR_FUN_00afae58,
                 &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afad98);
    }
  }
  *param_1 = -1;
  return;
}


// ===== 00a652ac  <std::process::ChildStdout_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::process::ChildStdout as core::fmt::Debug>::fmt */

void __rustcall
<std::process::ChildStdout_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,&DAT_00383959,0xb);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish_non_exhaustive(auStack_20);
  return;
}


// ===== 00a652e4  <std::sys::fs::unix::DirStream_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::fs::unix::DirStream as core::ops::drop::Drop>::drop */

void __rustcall <std::sys::fs::unix::DirStream_as_core::ops::drop::Drop>::drop(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  DIR *__dirp;
  ulong local_48;
  ulong *local_40;
  undefined *local_38;
  
  __dirp = (DIR *)*param_1;
  dirfd(__dirp);
  iVar2 = closedir(__dirp);
  if (iVar2 != 0) {
    piVar3 = (int *)__errno();
    puVar1 = PTR_PTR_00b01168;
    iVar2 = *piVar3;
    if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
    }
    local_40 = (ulong *)((long)iVar2 << 0x20 | 2);
                    /* try { // try from 00a65344 to 00a65353 has its CatchHandler @ 00a653dc */
    lVar4 = core::io::error::os_functions::get_os_functions();
    uVar5 = (**(code **)(lVar4 + 0x10))(iVar2);
    if ((uVar5 & 1) == 0) {
      FUN_00a2175c(&local_40);
      iVar2 = *piVar3;
      if (*(undefined ***)puVar1 != &PTR_FUN_00afaaf8) {
        core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
      }
      local_40 = &local_48;
      local_48 = (long)iVar2 << 0x20 | 2;
      local_38 = PTR_fmt_00b00ca8;
                    /* try { // try from 00a653b0 to 00a653c7 has its CatchHandler @ 00a653ec */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                (&DAT_002a6e78,&local_40,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afc448);
    }
  }
  return;
}


// ===== 00a65404  <std::sys::net::connection::socket::UdpSocket_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::net::connection::socket::UdpSocket as core::fmt::Debug>::fmt */

void __rustcall
<std::sys::net::connection::socket::UdpSocket_as_core::fmt::Debug>::fmt
          (undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_70 [16];
  short local_60;
  undefined6 uStack_5e;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulong uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_70,param_2,&DAT_00383964,9);
  uVar1 = *param_1;
  FUN_00a37af8(&local_60,uVar1);
  if (local_60 == 2) {
    if ((1 < (uStack_58 & 3) - 2) && ((uStack_58 & 3) != 0)) {
      uStack_38 = uStack_58 - 1;
      local_40 = CONCAT71(local_40._1_7_,3);
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&uStack_38);
    }
  }
  else {
    local_40 = CONCAT62(uStack_5e,local_60);
    uStack_38 = uStack_58;
    uStack_28 = uStack_48;
    uStack_30 = uStack_50;
                    /* try { // try from 00a65490 to 00a654af has its CatchHandler @ 00a654e8 */
    <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
              (auStack_70,&DAT_002bcff4,4,&local_40,&DAT_00afc068);
  }
  local_40 = CONCAT44(local_40._4_4_,uVar1);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (auStack_70,&DAT_00382e9a,2,&local_40,&DAT_00afb920);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 00a65504  <std::sys::process::unix::common::CommandArgs_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::process::unix::common::CommandArgs as core::fmt::Debug>::fmt */

void __rustcall
<std::sys::process::unix::common::CommandArgs_as_core::fmt::Debug>::fmt
          (long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  size_t sVar3;
  char *__s;
  undefined1 auStack_50 [16];
  char *local_40;
  long lStack_38;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_list(auStack_50,param_2);
  puVar1 = (undefined8 *)param_1[1];
  puVar2 = (undefined8 *)*param_1;
  while (puVar2 != puVar1) {
    __s = (char *)*puVar2;
    if (__s == (char *)0x0) break;
    sVar3 = strlen(__s);
    lStack_38 = sVar3 + 1;
    local_40 = __s;
    <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry
              (auStack_50,&local_40,&DAT_00afa688);
    puVar2 = puVar2 + 1;
  }
  <core::fmt::builders::[6]::core::fmt::builders::DebugList>::finish(auStack_50);
  return;
}


// ===== 00a65588  <std::time::SystemTimeError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::time::SystemTimeError as core::fmt::Display>::fmt */

void __rustcall
<std::time::SystemTimeError_as_core::fmt::Display>::fmt(undefined8 param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00a655a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,&UNK_0038396d,0x28);
  return;
}


// ===== 00a655a4  <std::io::stdio::Stdout_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::Stdout as core::fmt::Debug>::fmt */

void __rustcall
<std::io::stdio::Stdout_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,&DAT_00383995,6);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish_non_exhaustive(auStack_20);
  return;
}


// ===== 00a655dc  <std::env::Args_as_core::iter::traits::double_ended::DoubleEndedIterator>::next_back =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::env::Args as core::iter::traits::double_ended::DoubleEndedIterator>::next_back */

void __rustcall
<std::env::Args_as_core::iter::traits::double_ended::DoubleEndedIterator>::next_back
          (long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long local_48;
  long lStack_40;
  long local_38;
  
  lVar2 = *(long *)(param_2 + 0x18);
  if (*(long *)(param_2 + 8) != lVar2) {
    lVar3 = *(long *)(lVar2 + -0x18);
    *(long **)(param_2 + 0x18) = (long *)(lVar2 + -0x18);
    if (lVar3 != -1) {
                    /* try { // try from 00a65614 to 00a65627 has its CatchHandler @ 00a656ac */
      lVar1 = *(long *)(lVar2 + -0x10);
      lVar2 = *(long *)(lVar2 + -8);
      core::str::converts::from_utf8(&local_48,lVar1,lVar2);
      if (((uint)local_48 & 1) == 0) {
        *param_1 = lVar3;
        param_1[1] = lVar1;
        param_1[2] = lVar2;
        return;
      }
                    /* try { // try from 00a65670 to 00a65693 has its CatchHandler @ 00a65698 */
      local_48 = lVar3;
      lStack_40 = lVar1;
      local_38 = lVar2;
                    /* WARNING: Subroutine does not return */
      core::result::unwrap_failed
                (&DAT_00382483,0x2b,&local_48,&PTR_FUN_00afae58,
                 &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afadb0);
    }
  }
  *param_1 = -1;
  return;
}


// ===== 00a656cc  <std::io::stdio::Stdout_as_core::io::write::Write>::write_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::Stdout as core::io::write::Write>::write_vectored */

void __rustcall
<std::io::stdio::Stdout_as_core::io::write::Write>::write_vectored(undefined8 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <&std::io::stdio::Stdout_as_core::io::write::Write>::write_vectored(&local_18);
  return;
}


// ===== 00a656f0  <std::io::stdio::Stdout_as_core::io::write::Write>::write_all_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::Stdout as core::io::write::Write>::write_all_vectored */

void __rustcall
<std::io::stdio::Stdout_as_core::io::write::Write>::write_all_vectored(undefined8 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <&std::io::stdio::Stdout_as_core::io::write::Write>::write_all_vectored(&local_18);
  return;
}


// ===== 00a65714  <std::io::stdio::Stdout_as_core::io::write::Write>::flush =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::Stdout as core::io::write::Write>::flush */

void __rustcall <std::io::stdio::Stdout_as_core::io::write::Write>::flush(undefined8 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <&std::io::stdio::Stdout_as_core::io::write::Write>::flush(&local_18);
  return;
}


// ===== 00a65738  <std::io::stdio::Stdout_as_core::io::write::Write>::write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::Stdout as core::io::write::Write>::write */

void __rustcall <std::io::stdio::Stdout_as_core::io::write::Write>::write(undefined8 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <&std::io::stdio::Stdout_as_core::io::write::Write>::write(&local_18);
  return;
}


// ===== 00a6575c  <std::io::stdio::Stdout_as_core::io::write::Write>::write_all =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::Stdout as core::io::write::Write>::write_all */

void __rustcall <std::io::stdio::Stdout_as_core::io::write::Write>::write_all(undefined8 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <&std::io::stdio::Stdout_as_core::io::write::Write>::write_all(&local_18);
  return;
}


// ===== 00a65780  <std::io::stdio::Stdout_as_core::io::write::Write>::write_fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::Stdout as core::io::write::Write>::write_fmt */

void __rustcall <std::io::stdio::Stdout_as_core::io::write::Write>::write_fmt(undefined8 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <&std::io::stdio::Stdout_as_core::io::write::Write>::write_fmt(&local_18);
  return;
}


// ===== 00a657a4  <std::env::Args_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::env::Args as core::fmt::Debug>::fmt */

void __rustcall <std::env::Args_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_30 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,"Args",4);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (auStack_30,&DAT_003835d7,5,param_1,&PTR_FUN_00afc518);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 00a65808  <bool_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <bool_as_core::fmt::Display>::fmt(void)

{
  (*(code *)PTR_fmt_00b02798)();
  return;
}


// ===== 00a6580c  <&std::io::stdio::Stdout_as_core::io::write::Write>::write_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::io::stdio::Stdout as core::io::write::Write>::write_vectored */

undefined8 __rustcall
<&std::io::stdio::Stdout_as_core::io::write::Write>::write_vectored
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  pthread_key_t __key;
  void *pvVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 *puVar8;
  
  puVar8 = *(undefined8 **)*param_1;
  if (DAT_00b108d8 == 0) {
    __key = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(&DAT_00b108d8);
    pvVar5 = pthread_getspecific(__key);
    if (pvVar5 == (void *)0x0) goto LAB_00a65878;
LAB_00a65844:
    if (pvVar5 != (void *)*puVar8) {
LAB_00a65888:
      piVar1 = (int *)(puVar8 + 1);
      do {
        if (*piVar1 != 0) {
          ClearExclusiveLocal();
          <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                    (puVar8 + 1);
          break;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *puVar8 = pvVar5;
      iVar7 = 1;
      goto LAB_00a658a8;
    }
  }
  else {
    pvVar5 = pthread_getspecific((pthread_key_t)DAT_00b108d8);
    if (pvVar5 != (void *)0x0) goto LAB_00a65844;
LAB_00a65878:
    pvVar5 = (void *)FUN_00a2cdf8();
    if (pvVar5 != (void *)*puVar8) goto LAB_00a65888;
  }
  if (*(int *)((long)puVar8 + 0xc) == -1) {
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed(&DAT_00382941,0x26,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afb318)
    ;
  }
  iVar7 = *(int *)((long)puVar8 + 0xc) + 1;
LAB_00a658a8:
  *(int *)((long)puVar8 + 0xc) = iVar7;
  if (puVar8[2] != 0) {
    core::cell::panic_already_borrowed(&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afc610);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0xa65958);
    (*pcVar4)();
  }
  puVar8[2] = 0xffffffffffffffff;
                    /* try { // try from 00a658bc to 00a658cb has its CatchHandler @ 00a65988 */
  uVar6 = FUN_00a639d0(puVar8 + 3,param_2,param_3);
  iVar7 = *(int *)((long)puVar8 + 0xc) + -1;
  puVar8[2] = puVar8[2] + 1;
  *(int *)((long)puVar8 + 0xc) = iVar7;
  if (iVar7 == 0) {
    piVar1 = (int *)(puVar8 + 1);
    *puVar8 = 0;
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = 0;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 == 2) {
      syscall(0x62,piVar1,0x81,1);
      return uVar6;
    }
  }
  return uVar6;
}


// ===== 00a659bc  <&std::io::stdio::Stdout_as_core::io::write::Write>::write_all_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::io::stdio::Stdout as core::io::write::Write>::write_all_vectored */

undefined8 __rustcall
<&std::io::stdio::Stdout_as_core::io::write::Write>::write_all_vectored
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  pthread_key_t __key;
  void *pvVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *local_18;
  
  puVar7 = *(undefined8 **)*param_1;
  if (DAT_00b108d8 == 0) {
    __key = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(&DAT_00b108d8);
    pvVar4 = pthread_getspecific(__key);
    if (pvVar4 == (void *)0x0) goto LAB_00a65a2c;
LAB_00a659f8:
    if (pvVar4 != (void *)*puVar7) {
LAB_00a65a3c:
      piVar1 = (int *)(puVar7 + 1);
      do {
        if (*piVar1 != 0) {
          ClearExclusiveLocal();
          <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                    (puVar7 + 1);
          break;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *puVar7 = pvVar4;
      iVar6 = 1;
      goto LAB_00a65a5c;
    }
  }
  else {
    pvVar4 = pthread_getspecific((pthread_key_t)DAT_00b108d8);
    if (pvVar4 != (void *)0x0) goto LAB_00a659f8;
LAB_00a65a2c:
    pvVar4 = (void *)FUN_00a2cdf8();
    if (pvVar4 != (void *)*puVar7) goto LAB_00a65a3c;
  }
  if (*(int *)((long)puVar7 + 0xc) == -1) {
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed(&DAT_00382941,0x26,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afb318)
    ;
  }
  iVar6 = *(int *)((long)puVar7 + 0xc) + 1;
LAB_00a65a5c:
  *(int *)((long)puVar7 + 0xc) = iVar6;
                    /* try { // try from 00a65a64 to 00a65a73 has its CatchHandler @ 00a65b10 */
  local_18 = puVar7;
  uVar5 = <std::io::stdio::StdoutLock_as_core::io::write::Write>::write_all_vectored
                    (&local_18,param_2,param_3);
  iVar6 = *(int *)((long)puVar7 + 0xc) + -1;
  *(int *)((long)puVar7 + 0xc) = iVar6;
  if (iVar6 == 0) {
    piVar1 = (int *)(puVar7 + 1);
    *puVar7 = 0;
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = 0;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 == 2) {
      syscall(0x62,piVar1,0x81,1);
      return uVar5;
    }
  }
  return uVar5;
}


// ===== 00a65b24  <&std::io::stdio::Stdout_as_core::io::write::Write>::flush =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::io::stdio::Stdout as core::io::write::Write>::flush */

undefined8 __rustcall
<&std::io::stdio::Stdout_as_core::io::write::Write>::flush(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  pthread_key_t __key;
  void *pvVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 *puVar8;
  
  puVar8 = *(undefined8 **)*param_1;
  if (DAT_00b108d8 == 0) {
    __key = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(&DAT_00b108d8);
    pvVar5 = pthread_getspecific(__key);
    if (pvVar5 == (void *)0x0) goto LAB_00a65b84;
LAB_00a65b50:
    if (pvVar5 != (void *)*puVar8) {
LAB_00a65b94:
      piVar1 = (int *)(puVar8 + 1);
      do {
        if (*piVar1 != 0) {
          ClearExclusiveLocal();
          <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                    (puVar8 + 1);
          break;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *puVar8 = pvVar5;
      iVar7 = 1;
      goto LAB_00a65bb4;
    }
  }
  else {
    pvVar5 = pthread_getspecific((pthread_key_t)DAT_00b108d8);
    if (pvVar5 != (void *)0x0) goto LAB_00a65b50;
LAB_00a65b84:
    pvVar5 = (void *)FUN_00a2cdf8();
    if (pvVar5 != (void *)*puVar8) goto LAB_00a65b94;
  }
  if (*(int *)((long)puVar8 + 0xc) == -1) {
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed(&DAT_00382941,0x26,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afb318)
    ;
  }
  iVar7 = *(int *)((long)puVar8 + 0xc) + 1;
LAB_00a65bb4:
  *(int *)((long)puVar8 + 0xc) = iVar7;
  if (puVar8[2] != 0) {
    core::cell::panic_already_borrowed(&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afc640);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0xa65c48);
    (*pcVar4)();
  }
  puVar8[2] = 0xffffffffffffffff;
                    /* try { // try from 00a65bc8 to 00a65bcf has its CatchHandler @ 00a65c78 */
  uVar6 = FUN_00a400a4(puVar8 + 3);
  iVar7 = *(int *)((long)puVar8 + 0xc) + -1;
  puVar8[2] = puVar8[2] + 1;
  *(int *)((long)puVar8 + 0xc) = iVar7;
  if (iVar7 == 0) {
    piVar1 = (int *)(puVar8 + 1);
    *puVar8 = 0;
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = 0;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 == 2) {
      syscall(0x62,piVar1,0x81,1);
      return uVar6;
    }
  }
  return uVar6;
}


// ===== 00a65cac  <&std::io::stdio::Stdout_as_core::io::write::Write>::write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::io::stdio::Stdout as core::io::write::Write>::write */

undefined8 __rustcall
<&std::io::stdio::Stdout_as_core::io::write::Write>::write
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  pthread_key_t __key;
  void *pvVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *local_18;
  
  puVar7 = *(undefined8 **)*param_1;
  if (DAT_00b108d8 == 0) {
    __key = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(&DAT_00b108d8);
    pvVar4 = pthread_getspecific(__key);
    if (pvVar4 == (void *)0x0) goto LAB_00a65d1c;
LAB_00a65ce8:
    if (pvVar4 != (void *)*puVar7) {
LAB_00a65d2c:
      piVar1 = (int *)(puVar7 + 1);
      do {
        if (*piVar1 != 0) {
          ClearExclusiveLocal();
          <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                    (puVar7 + 1);
          break;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *puVar7 = pvVar4;
      iVar6 = 1;
      goto LAB_00a65d4c;
    }
  }
  else {
    pvVar4 = pthread_getspecific((pthread_key_t)DAT_00b108d8);
    if (pvVar4 != (void *)0x0) goto LAB_00a65ce8;
LAB_00a65d1c:
    pvVar4 = (void *)FUN_00a2cdf8();
    if (pvVar4 != (void *)*puVar7) goto LAB_00a65d2c;
  }
  if (*(int *)((long)puVar7 + 0xc) == -1) {
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed(&DAT_00382941,0x26,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afb318)
    ;
  }
  iVar6 = *(int *)((long)puVar7 + 0xc) + 1;
LAB_00a65d4c:
  *(int *)((long)puVar7 + 0xc) = iVar6;
                    /* try { // try from 00a65d54 to 00a65d63 has its CatchHandler @ 00a65e0c */
  local_18 = puVar7;
  uVar5 = <std::io::stdio::StdoutLock_as_core::io::write::Write>::write(&local_18,param_2,param_3);
  iVar6 = *(int *)((long)puVar7 + 0xc) + -1;
  *(int *)((long)puVar7 + 0xc) = iVar6;
  if (iVar6 == 0) {
    piVar1 = (int *)(puVar7 + 1);
    *puVar7 = 0;
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = 0;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 == 2) {
      syscall(0x62,piVar1,0x81,1);
      return uVar5;
    }
  }
  return uVar5;
}


// ===== 00a65e20  <&std::io::stdio::Stdout_as_core::io::write::Write>::write_all =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::io::stdio::Stdout as core::io::write::Write>::write_all */

undefined8 __rustcall
<&std::io::stdio::Stdout_as_core::io::write::Write>::write_all
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  pthread_key_t __key;
  void *pvVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *local_18;
  
  puVar7 = *(undefined8 **)*param_1;
  if (DAT_00b108d8 == 0) {
    __key = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(&DAT_00b108d8);
    pvVar4 = pthread_getspecific(__key);
    if (pvVar4 == (void *)0x0) goto LAB_00a65e90;
LAB_00a65e5c:
    if (pvVar4 != (void *)*puVar7) {
LAB_00a65ea0:
      piVar1 = (int *)(puVar7 + 1);
      do {
        if (*piVar1 != 0) {
          ClearExclusiveLocal();
          <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                    (puVar7 + 1);
          break;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *puVar7 = pvVar4;
      iVar6 = 1;
      goto LAB_00a65ec0;
    }
  }
  else {
    pvVar4 = pthread_getspecific((pthread_key_t)DAT_00b108d8);
    if (pvVar4 != (void *)0x0) goto LAB_00a65e5c;
LAB_00a65e90:
    pvVar4 = (void *)FUN_00a2cdf8();
    if (pvVar4 != (void *)*puVar7) goto LAB_00a65ea0;
  }
  if (*(int *)((long)puVar7 + 0xc) == -1) {
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed(&DAT_00382941,0x26,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afb318)
    ;
  }
  iVar6 = *(int *)((long)puVar7 + 0xc) + 1;
LAB_00a65ec0:
  *(int *)((long)puVar7 + 0xc) = iVar6;
                    /* try { // try from 00a65ec8 to 00a65ed7 has its CatchHandler @ 00a65f74 */
  local_18 = puVar7;
  uVar5 = <std::io::stdio::StdoutLock_as_core::io::write::Write>::write_all
                    (&local_18,param_2,param_3);
  iVar6 = *(int *)((long)puVar7 + 0xc) + -1;
  *(int *)((long)puVar7 + 0xc) = iVar6;
  if (iVar6 == 0) {
    piVar1 = (int *)(puVar7 + 1);
    *puVar7 = 0;
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = 0;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 == 2) {
      syscall(0x62,piVar1,0x81,1);
      return uVar5;
    }
  }
  return uVar5;
}


// ===== 00a65f88  <&std::io::stdio::Stdout_as_core::io::write::Write>::write_fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::io::stdio::Stdout as core::io::write::Write>::write_fmt */

ulong __rustcall
<&std::io::stdio::Stdout_as_core::io::write::Write>::write_fmt
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  pthread_key_t __key;
  int iVar4;
  void *pvVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 **local_50;
  ulong local_48;
  undefined1 local_40;
  long local_38;
  undefined8 *local_18;
  
  puVar7 = *(undefined8 **)*param_1;
  if (DAT_00b108d8 == 0) {
    __key = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(&DAT_00b108d8);
    pvVar5 = pthread_getspecific(__key);
    if (pvVar5 == (void *)0x0) goto LAB_00a65ff8;
LAB_00a65fc4:
    if (pvVar5 != (void *)*puVar7) {
LAB_00a66008:
      piVar1 = (int *)(puVar7 + 1);
      do {
        if (*piVar1 != 0) {
          ClearExclusiveLocal();
          <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                    (puVar7 + 1);
          break;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *puVar7 = pvVar5;
      iVar4 = 1;
      goto LAB_00a66028;
    }
  }
  else {
    pvVar5 = pthread_getspecific((pthread_key_t)DAT_00b108d8);
    if (pvVar5 != (void *)0x0) goto LAB_00a65fc4;
LAB_00a65ff8:
    pvVar5 = (void *)FUN_00a2cdf8();
    if (pvVar5 != (void *)*puVar7) goto LAB_00a66008;
  }
  if (*(int *)((long)puVar7 + 0xc) == -1) {
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed(&DAT_00382941,0x26,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afb318)
    ;
  }
  iVar4 = *(int *)((long)puVar7 + 0xc) + 1;
LAB_00a66028:
  *(int *)((long)puVar7 + 0xc) = iVar4;
  local_50 = &local_18;
  local_48 = 0;
                    /* try { // try from 00a66038 to 00a66077 has its CatchHandler @ 00a66168 */
  local_18 = puVar7;
  iVar4 = core::fmt::write(&local_50,&PTR_FUN_00afaa68,param_2,param_3);
  uVar6 = local_48;
  if (iVar4 == 0) {
    if (local_48 != 0) {
      if ((1 < (local_48 & 3) - 2) && ((local_48 & 3) != 0)) {
        local_38 = local_48 - 1;
        local_40 = 3;
                    /* try { // try from 00a660a8 to 00a660af has its CatchHandler @ 00a66154 */
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_38);
      }
      uVar6 = 0;
    }
  }
  else if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_00382152,0xad,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afa9f0);
  }
  iVar4 = *(int *)((long)local_18 + 0xc) + -1;
  *(int *)((long)local_18 + 0xc) = iVar4;
  if (iVar4 == 0) {
    piVar1 = (int *)(local_18 + 1);
    *local_18 = 0;
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = 0;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 2) {
      syscall(0x62,piVar1,0x81,1);
      return uVar6;
    }
  }
  return uVar6;
}


// ===== 00a66188  <std::net::tcp::TcpListener_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::net::tcp::TcpListener as core::fmt::Debug>::fmt */

void __rustcall <std::net::tcp::TcpListener_as_core::fmt::Debug>::fmt(void)

{
  (*(code *)PTR_fmt_00b078d8)();
  return;
}


// ===== 00a6618c  <std::fs::File_as_std::sys::io::kernel_copy::linux::CopyWrite>::properties =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::fs::File as std::sys::io::kernel_copy::linux::CopyWrite>::properties */

void __rustcall
<std::fs::File_as_std::sys::io::kernel_copy::linux::CopyWrite>::properties
          (undefined8 *param_1,int *param_2)

{
  int __fd;
  int iVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **extraout_x9;
  __ino_t local_130;
  __nlink_t _Stack_128;
  __mode_t _Stack_120;
  __uid_t _Stack_11c;
  __gid_t _Stack_118;
  int iStack_114;
  __dev_t local_110;
  __off_t _Stack_108;
  __blksize_t _Stack_100;
  __blkcnt_t _Stack_f8;
  __time_t local_f0;
  long lStack_e8;
  __time_t _Stack_e0;
  long lStack_d8;
  __time_t local_d0;
  long lStack_c8;
  long local_c0;
  undefined **local_b0;
  __ino_t _Stack_a8;
  __nlink_t _Stack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  __dev_t _Stack_88;
  __off_t _Stack_80;
  __blksize_t _Stack_78;
  __blkcnt_t local_70;
  __time_t _Stack_68;
  long lStack_60;
  __time_t _Stack_58;
  long local_50;
  __time_t _Stack_48;
  long lStack_40;
  long local_38;
  
  __fd = *param_2;
  _Stack_a8 = 0;
  local_b0 = (undefined **)0x0;
  uStack_98._0_4_ = 0;
  uStack_98._4_4_ = 0;
  _Stack_a0 = 0;
  _Stack_88 = 0;
  local_90._0_4_ = 0;
  local_90._4_4_ = 0;
  _Stack_78 = 0;
  _Stack_80 = 0;
  _Stack_68 = 0;
  local_70 = 0;
  _Stack_58 = 0;
  lStack_60 = 0;
  _Stack_48 = 0;
  local_50 = 0;
  local_38 = 0;
  lStack_40 = 0;
  iVar1 = fstat(__fd,(stat *)&local_b0);
  if (iVar1 == -1) {
    __errno();
    ppuVar3 = &PTR_FUN_00afaaf8;
    if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
      ppuVar3 = extraout_x9;
    }
    uVar2 = 3;
  }
  else {
    uVar2 = 0;
    local_c0 = local_38;
    lStack_e8 = lStack_60;
    local_f0 = _Stack_68;
    lStack_d8 = local_50;
    _Stack_e0 = _Stack_58;
    lStack_c8 = lStack_40;
    local_d0 = _Stack_48;
    _Stack_128 = _Stack_a0;
    local_130 = _Stack_a8;
    _Stack_118 = (__gid_t)local_90;
    iStack_114 = local_90._4_4_;
    _Stack_120 = (__mode_t)uStack_98;
    _Stack_11c = uStack_98._4_4_;
    _Stack_108 = _Stack_80;
    local_110 = _Stack_88;
    _Stack_f8 = local_70;
    _Stack_100 = _Stack_78;
    ppuVar3 = local_b0;
  }
  *param_1 = uVar2;
  param_1[1] = ppuVar3;
  param_1[0xf] = lStack_c8;
  param_1[0xe] = local_d0;
  param_1[0xb] = lStack_e8;
  param_1[10] = local_f0;
  param_1[0xd] = lStack_d8;
  param_1[0xc] = _Stack_e0;
  param_1[0x10] = local_c0;
  param_1[3] = _Stack_128;
  param_1[2] = local_130;
  param_1[5] = __Stack_118;
  param_1[4] = __Stack_120;
  param_1[7] = _Stack_108;
  param_1[6] = local_110;
  param_1[9] = _Stack_f8;
  param_1[8] = _Stack_100;
  *(undefined4 *)(param_1 + 0x11) = 1;
  *(int *)((long)param_1 + 0x8c) = __fd;
  return;
}


// ===== 00a66290  <&std::fs::File_as_std::sys::io::kernel_copy::linux::CopyWrite>::properties =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::fs::File as std::sys::io::kernel_copy::linux::CopyWrite>::properties */

void __rustcall
<&std::fs::File_as_std::sys::io::kernel_copy::linux::CopyWrite>::properties
          (undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **extraout_x9;
  int *piVar4;
  __ino_t local_130;
  __nlink_t _Stack_128;
  __mode_t _Stack_120;
  __uid_t _Stack_11c;
  __gid_t _Stack_118;
  int iStack_114;
  __dev_t local_110;
  __off_t _Stack_108;
  __blksize_t _Stack_100;
  __blkcnt_t _Stack_f8;
  __time_t local_f0;
  long lStack_e8;
  __time_t _Stack_e0;
  long lStack_d8;
  __time_t local_d0;
  long lStack_c8;
  long local_c0;
  undefined **local_b0;
  __ino_t _Stack_a8;
  __nlink_t _Stack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  __dev_t _Stack_88;
  __off_t _Stack_80;
  __blksize_t _Stack_78;
  __blkcnt_t local_70;
  __time_t _Stack_68;
  long lStack_60;
  __time_t _Stack_58;
  long local_50;
  __time_t _Stack_48;
  long lStack_40;
  long local_38;
  
  piVar4 = (int *)*param_2;
  _Stack_a8 = 0;
  local_b0 = (undefined **)0x0;
  uStack_98._0_4_ = 0;
  uStack_98._4_4_ = 0;
  _Stack_a0 = 0;
  _Stack_88 = 0;
  local_90._0_4_ = 0;
  local_90._4_4_ = 0;
  _Stack_78 = 0;
  _Stack_80 = 0;
  _Stack_68 = 0;
  local_70 = 0;
  _Stack_58 = 0;
  lStack_60 = 0;
  _Stack_48 = 0;
  local_50 = 0;
  local_38 = 0;
  lStack_40 = 0;
  iVar1 = fstat(*piVar4,(stat *)&local_b0);
  if (iVar1 == -1) {
    __errno();
    ppuVar3 = &PTR_FUN_00afaaf8;
    if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
      ppuVar3 = extraout_x9;
    }
    uVar2 = 3;
  }
  else {
    uVar2 = 0;
    local_c0 = local_38;
    lStack_e8 = lStack_60;
    local_f0 = _Stack_68;
    lStack_d8 = local_50;
    _Stack_e0 = _Stack_58;
    lStack_c8 = lStack_40;
    local_d0 = _Stack_48;
    _Stack_128 = _Stack_a0;
    local_130 = _Stack_a8;
    _Stack_118 = (__gid_t)local_90;
    iStack_114 = local_90._4_4_;
    _Stack_120 = (__mode_t)uStack_98;
    _Stack_11c = uStack_98._4_4_;
    _Stack_108 = _Stack_80;
    local_110 = _Stack_88;
    _Stack_f8 = local_70;
    _Stack_100 = _Stack_78;
    ppuVar3 = local_b0;
  }
  *param_1 = uVar2;
  param_1[1] = ppuVar3;
  param_1[0xf] = lStack_c8;
  param_1[0xe] = local_d0;
  iVar1 = *piVar4;
  param_1[0xb] = lStack_e8;
  param_1[10] = local_f0;
  param_1[0xd] = lStack_d8;
  param_1[0xc] = _Stack_e0;
  param_1[0x10] = local_c0;
  param_1[3] = _Stack_128;
  param_1[2] = local_130;
  param_1[5] = __Stack_118;
  param_1[4] = __Stack_120;
  param_1[7] = _Stack_108;
  param_1[6] = local_110;
  param_1[9] = _Stack_f8;
  param_1[8] = _Stack_100;
  *(undefined4 *)(param_1 + 0x11) = 1;
  *(int *)((long)param_1 + 0x8c) = iVar1;
  return;
}


// ===== 00a66398  <std::process::ChildStderr_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::process::ChildStderr as core::fmt::Debug>::fmt */

void __rustcall
<std::process::ChildStderr_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,&DAT_003839a4,0xb);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish_non_exhaustive(auStack_20);
  return;
}


// ===== 00a663d0  <std::sys::fs::unix::OpenOptions_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::fs::unix::OpenOptions as core::fmt::Debug>::fmt */

void __rustcall
<std::sys::fs::unix::OpenOptions_as_core::fmt::Debug>::fmt(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [20];
  undefined4 local_24;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_38,param_2,&DAT_003839af,0xb);
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (auStack_38,&DAT_002bd09c,4,param_1 + 8,&DAT_00afb940);
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (uVar1,&DAT_00382e9c,5,param_1 + 9,&DAT_00afb940);
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (uVar1,&DAT_003839ba,6,param_1 + 10,&DAT_00afb940);
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (uVar1,&DAT_002a1640,8,param_1 + 0xb,&DAT_00afb940);
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (uVar1,&DAT_003839c0,6,param_1 + 0xc,&DAT_00afb940);
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (uVar1,&DAT_003839c6,10,param_1 + 0xd,&DAT_00afb940);
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (uVar1,&DAT_003839d0,0xc,param_1,&DAT_00afb920);
  local_24 = *(undefined4 *)(param_1 + 4);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (uVar1,&DAT_002bd244,4,&local_24,&DAT_00afc1f8);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 00a664f0  <std::fs::Dir_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::fs::Dir as core::fmt::Debug>::fmt */

void __rustcall <std::fs::Dir_as_core::fmt::Debug>::fmt(undefined4 *param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  FUN_00a515f4(auStack_20,*param_1,param_2,&DAT_00383934,3);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish(auStack_20);
  return;
}


// ===== 00a66530  <std::path::Components_as_core::iter::traits::iterator::Iterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::path::Components as core::iter::traits::iterator::Iterator>::next */

void __rustcall
<std::path::Components_as_core::iter::traits::iterator::Iterator>::next
          (undefined1 *param_1,long *param_2)

{
  byte bVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  long lVar6;
  ulong uVar7;
  undefined1 uVar8;
  char *pcVar9;
  char *pcVar10;
  ulong uVar11;
  char *pcVar12;
  
  bVar5 = *(byte *)(param_2 + 7);
  uVar8 = 0xff;
  if (((bVar5 != 3) && (bVar1 = *(byte *)((long)param_2 + 0x39), bVar1 != 3)) && (bVar5 <= bVar1)) {
    pcVar10 = (char *)*param_2;
    uVar4 = param_2[1];
    uVar8 = *param_1;
    uVar11 = uVar4;
    if ((*(byte *)((long)param_2 + 0x3a) & 1) == 0) {
      do {
        if (bVar5 == 1) {
          *(undefined1 *)(param_2 + 7) = 2;
          uVar3 = uVar4;
          if (uVar4 != 0) {
            if (uVar4 == 1) {
              if (*pcVar10 == '.') {
LAB_00a667d0:
                if (uVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  core::slice::index::slice_index_fail
                            (1,0,0,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afc5b0);
                }
                *param_2 = (long)(pcVar10 + 1);
                param_2[1] = uVar11 - 1;
                *param_1 = 7;
                return;
              }
              uVar3 = 1;
            }
            else if ((*pcVar10 == '.') && (pcVar10[1] == '/')) goto LAB_00a667d0;
          }
        }
        else {
          if (bVar5 != 2) goto LAB_00a66820;
          if (uVar4 == 0) {
            *(undefined1 *)(param_2 + 7) = 3;
            *param_1 = 0xff;
            return;
          }
          uVar11 = 0;
          do {
            if (pcVar10[uVar11] == '/') {
              lVar6 = 1;
              if (uVar11 == 0) goto LAB_00a66704;
              goto LAB_00a666e8;
            }
            uVar11 = uVar11 + 1;
          } while (uVar4 != uVar11);
          lVar6 = 0;
          uVar11 = uVar4;
          if (uVar4 == 0) {
LAB_00a66704:
            uVar8 = 0xff;
            bVar2 = true;
          }
          else {
LAB_00a666e8:
            if (uVar11 == 2) {
              if ((*pcVar10 != '.') || (pcVar10[1] != '.')) goto LAB_00a66750;
              bVar2 = false;
              uVar8 = 8;
            }
            else {
              if ((uVar11 == 1) && (*pcVar10 == '.')) goto LAB_00a66704;
LAB_00a66750:
              bVar2 = false;
              uVar8 = 9;
            }
          }
          uVar7 = lVar6 + uVar11;
          *(char **)(param_1 + 8) = pcVar10;
          *(ulong *)(param_1 + 0x10) = uVar11;
          uVar3 = uVar4 - uVar7;
          if (uVar4 < uVar7) goto code_r0x00a66860;
          pcVar10 = pcVar10 + uVar7;
          *param_2 = (long)pcVar10;
          param_2[1] = uVar3;
          uVar11 = uVar3;
          if (!bVar2) goto LAB_00a6679c;
        }
        bVar5 = 2;
        uVar4 = uVar3;
        if (bVar1 < 2) {
          *param_1 = 0xff;
          return;
        }
      } while( true );
    }
    uVar11 = *(ulong *)(param_1 + 0x10);
    pcVar12 = *(char **)(param_1 + 8);
    while (pcVar9 = pcVar10, bVar5 != 1) {
      if (bVar5 != 2) {
        *(char **)(param_1 + 8) = pcVar12;
        *(ulong *)(param_1 + 0x10) = uVar11;
LAB_00a66820:
        *param_1 = uVar8;
                    /* WARNING: Subroutine does not return */
        core::panicking::panic(&DAT_003821fa,0x28,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afc5f8);
      }
      if (uVar4 == 0) {
        *(char **)(param_1 + 8) = pcVar12;
        *(ulong *)(param_1 + 0x10) = uVar11;
        *(undefined1 *)(param_2 + 7) = 3;
        *param_1 = 0xff;
        return;
      }
      uVar11 = 0;
      do {
        if (pcVar9[uVar11] == '/') {
          lVar6 = 1;
          if (uVar11 == 0) goto LAB_00a66604;
          goto LAB_00a665c4;
        }
        uVar11 = uVar11 + 1;
      } while (uVar4 != uVar11);
      lVar6 = 0;
      uVar11 = uVar4;
      if (uVar4 == 0) {
LAB_00a66604:
        uVar8 = 0xff;
        bVar2 = true;
      }
      else {
LAB_00a665c4:
        if (uVar11 == 1) {
          if (*pcVar9 != '.') goto LAB_00a66610;
          goto LAB_00a66604;
        }
        if (((uVar11 == 2) && (*pcVar9 == '.')) && (pcVar9[1] == '.')) {
          bVar2 = false;
          uVar8 = 8;
        }
        else {
LAB_00a66610:
          bVar2 = false;
          uVar8 = 9;
        }
      }
      uVar7 = lVar6 + uVar11;
      if (uVar4 < uVar7) {
        *(char **)(param_1 + 8) = pcVar9;
        *(ulong *)(param_1 + 0x10) = uVar11;
code_r0x00a66860:
        *param_1 = uVar8;
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (uVar7,uVar4,uVar4,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afc5e0);
      }
      *param_2 = (long)(pcVar9 + uVar7);
      param_2[1] = uVar4 - uVar7;
      if (!bVar2) {
        *(char **)(param_1 + 8) = pcVar9;
        *(ulong *)(param_1 + 0x10) = uVar11;
        *param_1 = uVar8;
        return;
      }
      bVar5 = 2;
      uVar4 = uVar4 - uVar7;
      pcVar10 = pcVar9 + uVar7;
      pcVar12 = pcVar9;
      if (bVar1 < 2) {
        *(char **)(param_1 + 8) = pcVar9;
        *(ulong *)(param_1 + 0x10) = uVar11;
        *param_1 = 0xff;
        return;
      }
    }
    *(char **)(param_1 + 8) = pcVar12;
    *(ulong *)(param_1 + 0x10) = uVar11;
    *(undefined1 *)(param_2 + 7) = 2;
    if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail(1,0,0,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afc5c8);
    }
    uVar8 = 6;
    *param_2 = (long)(pcVar9 + 1);
    param_2[1] = uVar4 - 1;
  }
LAB_00a6679c:
  *param_1 = uVar8;
  return;
}


// ===== 00a6688c  <std::io::stdio::StdoutLock_as_core::io::write::Write>::write_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StdoutLock as core::io::write::Write>::write_vectored */

void __rustcall
<std::io::stdio::StdoutLock_as_core::io::write::Write>::write_vectored(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (*(long *)(lVar1 + 0x10) == 0) {
    *(undefined8 *)(lVar1 + 0x10) = 0xffffffffffffffff;
                    /* try { // try from 00a668ac to 00a668b3 has its CatchHandler @ 00a668d8 */
    FUN_00a639d0(lVar1 + 0x18);
    *(long *)(lVar1 + 0x10) = *(long *)(lVar1 + 0x10) + 1;
    return;
  }
  core::cell::panic_already_borrowed(&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afc610);
                    /* catch() { ... } // from try @ 00a668ac with catch @ 00a668d8 */
  *(long *)(lVar1 + 0x10) = *(long *)(lVar1 + 0x10) + 1;
                    /* WARNING: Subroutine does not return */
  FUN_00ab2530();
}


// ===== 00a668e8  <std::io::stdio::StdoutLock_as_core::io::write::Write>::write_all_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StdoutLock as core::io::write::Write>::write_all_vectored */

undefined ** __rustcall
<std::io::stdio::StdoutLock_as_core::io::write::Write>::write_all_vectored
          (long *param_1,long param_2,ulong param_3)

{
  undefined **ppuVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  long lVar12;
  uint uVar13;
  undefined1 auVar14 [16];
  long local_68;
  
  lVar12 = *param_1;
  if (*(long *)(lVar12 + 0x10) != 0) {
    core::cell::panic_already_borrowed(&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afc628);
code_r0x00a66b10:
    ppuVar8 = &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afb378;
    puVar9 = &DAT_0038298a;
    uVar10 = 0x4f;
LAB_00a66b20:
                    /* try { // try from 00a66b20 to 00a66b2f has its CatchHandler @ 00a66b6c */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(puVar9,uVar10,ppuVar8);
  }
  *(undefined8 *)(lVar12 + 0x10) = 0xffffffffffffffff;
  if (param_3 != 0) {
    lVar4 = param_3 * 0x10;
    uVar2 = 0;
    uVar5 = lVar4 - 0x10;
    plVar6 = (long *)(param_2 + 8);
    do {
      uVar3 = uVar2;
      if (*plVar6 != 0) break;
      lVar4 = lVar4 + -0x10;
      uVar2 = uVar2 + 1;
      uVar3 = (uVar5 >> 4) + 1;
      plVar6 = plVar6 + 2;
    } while (lVar4 != 0);
    if (param_3 < uVar3) {
code_r0x00a66aec:
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (uVar3,param_3,param_3,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afb390);
    }
    if (param_3 - uVar3 != 0) {
      plVar6 = (long *)(param_2 + uVar3 * 0x10);
      ppuVar8 = &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afb360;
      puVar9 = &DAT_00382967;
      uVar10 = 0x47;
      param_3 = param_3 - uVar3;
LAB_00a669a4:
      do {
        while( true ) {
                    /* try { // try from 00a669a4 to 00a669f3 has its CatchHandler @ 00a66b5c */
          auVar14 = FUN_00a639d0(lVar12 + 0x18,plVar6,param_3);
          ppuVar11 = auVar14._8_8_;
          if (auVar14._0_8_ == 1) break;
          if (ppuVar11 == (undefined **)0x0) {
            ppuVar11 = &PTR_DAT_00afb878;
            goto LAB_00a66ab8;
          }
          lVar4 = param_3 * 0x10;
          uVar2 = 0;
          uVar5 = lVar4 - 0x10;
          puVar7 = (ulong *)(plVar6 + 1);
          do {
            ppuVar1 = (undefined **)((long)ppuVar11 - (long)*puVar7);
            uVar3 = uVar2;
            if (ppuVar11 < (undefined **)*puVar7) break;
            lVar4 = lVar4 + -0x10;
            uVar2 = uVar2 + 1;
            uVar3 = (uVar5 >> 4) + 1;
            puVar7 = puVar7 + 2;
            ppuVar11 = ppuVar1;
          } while (lVar4 != 0);
          if (param_3 < uVar3) goto code_r0x00a66aec;
          if (param_3 - uVar3 == 0) {
            if (ppuVar11 != (undefined **)0x0) goto code_r0x00a66b10;
            goto LAB_00a66ab8;
          }
          plVar6 = plVar6 + uVar3 * 2;
          if ((undefined **)plVar6[1] < ppuVar11) goto LAB_00a66b20;
          *plVar6 = *plVar6 + (long)ppuVar11;
          plVar6[1] = plVar6[1] - (long)ppuVar11;
          param_3 = param_3 - uVar3;
        }
        if (1 < ((ulong)ppuVar11 & 3)) {
          if (((ulong)ppuVar11 & 3) == 2) {
                    /* try { // try from 00a66a70 to 00a66a83 has its CatchHandler @ 00a66b34 */
            lVar4 = core::io::error::os_functions::get_os_functions();
            uVar2 = (**(code **)(lVar4 + 0x10))((ulong)ppuVar11 >> 0x20);
            if ((uVar2 & 1) == 0) break;
          }
          else {
            uVar13 = auVar14._12_4_ & 0xff;
            if (10 < (ulong)ppuVar11 >> 0x22) {
              uVar13 = 0xff;
            }
            if (uVar13 != 0x23) break;
          }
          goto LAB_00a669a4;
        }
        if ((auVar14 & (undefined1  [16])0x3) != (undefined1  [16])0x0) {
          if (*(char *)((long)ppuVar11 + 0x1f) != '#') break;
          local_68 = (long)ppuVar11 - 1;
          <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_68);
          goto LAB_00a669a4;
        }
      } while (*(char *)(ppuVar11 + 2) == '#');
LAB_00a66ab8:
      lVar4 = *(long *)(lVar12 + 0x10) + 1;
      goto LAB_00a66ac0;
    }
  }
  lVar4 = 0;
  ppuVar11 = (undefined **)0x0;
LAB_00a66ac0:
  *(long *)(lVar12 + 0x10) = lVar4;
  return ppuVar11;
}


// ===== 00a66b7c  <std::io::stdio::StdoutLock_as_core::io::write::Write>::flush =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StdoutLock as core::io::write::Write>::flush */

void __rustcall <std::io::stdio::StdoutLock_as_core::io::write::Write>::flush(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (*(long *)(lVar1 + 0x10) == 0) {
    *(undefined8 *)(lVar1 + 0x10) = 0xffffffffffffffff;
                    /* try { // try from 00a66b9c to 00a66ba3 has its CatchHandler @ 00a66bc8 */
    FUN_00a400a4(lVar1 + 0x18);
    *(long *)(lVar1 + 0x10) = *(long *)(lVar1 + 0x10) + 1;
    return;
  }
  core::cell::panic_already_borrowed(&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afc640);
                    /* catch() { ... } // from try @ 00a66b9c with catch @ 00a66bc8 */
  *(long *)(lVar1 + 0x10) = *(long *)(lVar1 + 0x10) + 1;
                    /* WARNING: Subroutine does not return */
  FUN_00ab2530();
}


// ===== 00a66bd8  <std::io::stdio::StdoutLock_as_core::io::write::Write>::write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StdoutLock as core::io::write::Write>::write */

undefined1  [16] __rustcall
<std::io::stdio::StdoutLock_as_core::io::write::Write>::write
          (long *param_1,void *param_2,ulong param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined **ppuVar7;
  ulong uVar8;
  ulong unaff_x19;
  void *unaff_x20;
  ulong __n;
  long lVar9;
  undefined1 auVar10 [16];
  
  lVar9 = *param_1;
  if (*(long *)(lVar9 + 0x10) == 0) {
    *(undefined8 *)(lVar9 + 0x10) = 0xffffffffffffffff;
                    /* try { // try from 00a66c08 to 00a66cff has its CatchHandler @ 00a66e48 */
    auVar10 = core::slice::memchr::memrchr(10);
    if (auVar10._0_8_ == 1) {
      lVar4 = FUN_00a400a4(lVar9 + 0x18);
      if (lVar4 != 0) {
LAB_00a66d08:
        auVar10._8_8_ = lVar4;
        auVar10._0_8_ = 1;
        goto LAB_00a66d48;
      }
      uVar8 = auVar10._8_8_ + 1;
      if (param_3 < uVar8) {
        uVar5 = 0;
        ppuVar7 = &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afc3d8;
LAB_00a66e14:
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail(uVar5,uVar8,param_3,ppuVar7);
      }
      uVar5 = ::write(1,param_2,uVar8);
      if (uVar5 == 0xffffffffffffffff) {
        piVar6 = (int *)__errno();
        iVar1 = *piVar6;
        if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
          core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
        }
        uVar5 = uVar8;
        if (iVar1 != 9) {
          auVar10._8_8_ = (long)iVar1 << 0x20 | 2;
          auVar10._0_8_ = 1;
          goto LAB_00a66d48;
        }
      }
      if (uVar5 == 0) {
        auVar10 = ZEXT816(0);
        goto LAB_00a66d48;
      }
      __n = uVar8 - uVar5;
      if (uVar8 < uVar5 || __n == 0) {
        if (param_3 < uVar5) {
          ppuVar7 = &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afc3c0;
          uVar8 = param_3;
          goto LAB_00a66e14;
        }
        __n = param_3 - uVar5;
        if (*(ulong *)(lVar9 + 0x18) <= param_3 - uVar5) {
          auVar3._8_8_ = 0;
          auVar3._0_8_ = uVar5;
          auVar10 = auVar3 << 0x40;
          goto LAB_00a66d48;
        }
      }
      else {
        param_3 = *(ulong *)(lVar9 + 0x18);
        if (param_3 < __n) {
          auVar10 = core::slice::memchr::memrchr(10,(long)param_2 + uVar5,param_3);
          __n = param_3;
          if ((auVar10._0_8_ == 1) && (__n = auVar10._8_8_ + 1, param_3 < __n)) {
            uVar5 = 0;
            ppuVar7 = &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afc3a8;
            uVar8 = __n;
            goto LAB_00a66e14;
          }
        }
      }
      lVar4 = *(long *)(lVar9 + 0x28);
      uVar8 = *(long *)(lVar9 + 0x18) - lVar4;
      if (uVar8 <= __n) {
        __n = uVar8;
      }
      memcpy((void *)(*(long *)(lVar9 + 0x20) + lVar4),(void *)((long)param_2 + uVar5),__n);
      lVar4 = __n + lVar4;
      param_3 = __n + uVar5;
    }
    else {
      lVar4 = *(long *)(lVar9 + 0x28);
      if ((lVar4 != 0) && (*(char *)(*(long *)(lVar9 + 0x20) + lVar4 + -1) == '\n')) {
        lVar4 = FUN_00a400a4(lVar9 + 0x18);
        if (lVar4 != 0) goto LAB_00a66d08;
        lVar4 = *(long *)(lVar9 + 0x28);
      }
      unaff_x19 = param_3;
      unaff_x20 = param_2;
      if ((ulong)(*(long *)(lVar9 + 0x18) - lVar4) <= param_3) goto LAB_00a66df0;
      memcpy((void *)(*(long *)(lVar9 + 0x20) + lVar4),param_2,param_3);
      lVar4 = lVar4 + param_3;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = param_3;
    auVar10 = auVar2 << 0x40;
    *(long *)(lVar9 + 0x28) = lVar4;
  }
  else {
    core::cell::panic_already_borrowed(&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afc658);
LAB_00a66df0:
                    /* try { // try from 00a66df0 to 00a66e33 has its CatchHandler @ 00a66e48 */
    auVar10 = <alloc::io::buffered::bufwriter::alloc::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutRaw>>
              ::write_cold(lVar9 + 0x18,unaff_x20,unaff_x19);
  }
LAB_00a66d48:
  *(long *)(lVar9 + 0x10) = *(long *)(lVar9 + 0x10) + 1;
  return auVar10;
}


// ===== 00a66e58  <std::io::stdio::StdoutLock_as_core::io::write::Write>::write_all =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StdoutLock as core::io::write::Write>::write_all */

ulong __rustcall
<std::io::stdio::StdoutLock_as_core::io::write::Write>::write_all
          (long *param_1,void *param_2,ulong param_3)

{
  ulong __n;
  ulong uVar1;
  ulong unaff_x19;
  void *unaff_x20;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  lVar2 = *param_1;
  if (*(long *)(lVar2 + 0x10) == 0) {
    *(undefined8 *)(lVar2 + 0x10) = 0xffffffffffffffff;
                    /* try { // try from 00a66e88 to 00a66e8f has its CatchHandler @ 00a67018 */
    auVar4 = core::slice::memchr::memrchr(10);
    if (auVar4._0_8_ == 1) {
      __n = auVar4._8_8_ + 1;
      unaff_x19 = param_3 - __n;
      if (param_3 < __n) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_fmt
                  (&DAT_0038247a,0x13,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afc3f0);
      }
      lVar3 = *(long *)(lVar2 + 0x28);
      if (lVar3 == 0) {
                    /* try { // try from 00a66f40 to 00a66f4b has its CatchHandler @ 00a67018 */
        uVar1 = FUN_00a6b090(param_2,__n);
        if ((uVar1 != 0) && ((((uVar1 & 3) < 2 || ((uVar1 & 3) != 2)) || (uVar1 >> 0x20 != 9))))
        goto LAB_00a66fa4;
      }
      else {
        if (__n < (ulong)(*(long *)(lVar2 + 0x18) - lVar3)) {
          memcpy((void *)(*(long *)(lVar2 + 0x20) + lVar3),param_2,__n);
          *(ulong *)(lVar2 + 0x28) = lVar3 + __n;
        }
        else {
          uVar1 = <alloc::io::buffered::bufwriter::alloc::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutRaw>>
                  ::write_all_cold(lVar2 + 0x18,param_2,__n);
          if (uVar1 != 0) goto LAB_00a66fa4;
        }
                    /* try { // try from 00a66ed8 to 00a66f0b has its CatchHandler @ 00a67018 */
        uVar1 = FUN_00a400a4(lVar2 + 0x18);
        if (uVar1 != 0) goto LAB_00a66fa4;
      }
      lVar3 = *(long *)(lVar2 + 0x28);
      unaff_x20 = (void *)((long)param_2 + __n);
      if ((ulong)(*(long *)(lVar2 + 0x18) - lVar3) <= unaff_x19) goto LAB_00a66fd0;
      memcpy((void *)(*(long *)(lVar2 + 0x20) + lVar3),(void *)((long)param_2 + __n),unaff_x19);
      lVar3 = lVar3 + unaff_x19;
    }
    else {
      lVar3 = *(long *)(lVar2 + 0x28);
      if ((lVar3 != 0) && (*(char *)(*(long *)(lVar2 + 0x20) + lVar3 + -1) == '\n')) {
        uVar1 = FUN_00a400a4(lVar2 + 0x18);
        if (uVar1 != 0) goto LAB_00a66fa4;
        lVar3 = *(long *)(lVar2 + 0x28);
      }
      unaff_x19 = param_3;
      unaff_x20 = param_2;
      if ((ulong)(*(long *)(lVar2 + 0x18) - lVar3) <= param_3) goto LAB_00a66fd0;
      memcpy((void *)(*(long *)(lVar2 + 0x20) + lVar3),param_2,param_3);
      lVar3 = lVar3 + param_3;
    }
    uVar1 = 0;
    *(long *)(lVar2 + 0x28) = lVar3;
  }
  else {
    core::cell::panic_already_borrowed(&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afc670);
LAB_00a66fd0:
                    /* try { // try from 00a66fd0 to 00a6700f has its CatchHandler @ 00a67018 */
    uVar1 = <alloc::io::buffered::bufwriter::alloc::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutRaw>>
            ::write_all_cold(lVar2 + 0x18,unaff_x20,unaff_x19);
  }
LAB_00a66fa4:
  *(long *)(lVar2 + 0x10) = *(long *)(lVar2 + 0x10) + 1;
  return uVar1;
}


// ===== 00a67028  <std::ffi::os_str::OsString_as_core::fmt::Write>::write_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::ffi::os_str::OsString as core::fmt::Write>::write_str */

undefined8 __rustcall
<std::ffi::os_str::OsString_as_core::fmt::Write>::write_str
          (long *param_1,void *param_2,ulong param_3)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if ((ulong)(*param_1 - lVar1) < param_3) {
    FUN_00a29778(param_1,lVar1,param_3,1,1);
    lVar1 = param_1[2];
  }
  else if (param_3 == 0) goto LAB_00a67068;
  memcpy((void *)(param_1[1] + lVar1),param_2,param_3);
LAB_00a67068:
  param_1[2] = lVar1 + param_3;
  return 0;
}


// ===== 00a670ac  <std::path::Components_as_core::iter::traits::double_ended::DoubleEndedIterator>::next_back =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::path::Components as core::iter::traits::double_ended::DoubleEndedIterator>::next_back */

void __rustcall
<std::path::Components_as_core::iter::traits::double_ended::DoubleEndedIterator>::next_back
          (char *param_1,long *param_2)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  byte bVar5;
  char cVar6;
  ulong uVar7;
  ulong uVar8;
  ulong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  bVar2 = *(byte *)(param_2 + 7);
  cVar6 = -1;
  if (((bVar2 == 3) || (bVar5 = *(byte *)((long)param_2 + 0x39), bVar5 == 3)) || (bVar5 < bVar2))
  goto LAB_00a67430;
  bVar3 = *(byte *)((long)param_2 + 0x3a);
  pcVar1 = (char *)*param_2;
  uVar7 = param_2[1];
  uVar8 = (ulong)(bVar2 < 2 & bVar3);
  if (bVar2 < 2) {
    if ((bVar3 & 1) != 0) {
      while (bVar5 != 1) {
        if (bVar5 != 2) goto LAB_00a67478;
        if (uVar7 <= uVar8) {
          *(undefined1 *)((long)param_2 + 0x39) = 1;
          break;
        }
        FUN_00a3acdc(&local_80,param_2);
        uVar4 = uVar7 - local_80;
        *(undefined8 *)(param_1 + 8) = uStack_70;
        *(undefined8 *)param_1 = local_78;
        *(undefined8 *)(param_1 + 0x18) = uStack_60;
        *(undefined8 *)(param_1 + 0x10) = local_68;
        *(undefined8 *)(param_1 + 0x28) = uStack_50;
        *(undefined8 *)(param_1 + 0x20) = local_58;
        *(undefined8 *)(param_1 + 0x30) = local_48;
        if (uVar7 < local_80) goto code_r0x00a67454;
        cVar6 = *param_1;
        param_2[1] = uVar4;
        bVar5 = 2;
        uVar7 = uVar4;
        if (cVar6 != -1) {
          return;
        }
      }
LAB_00a67418:
      *(undefined1 *)((long)param_2 + 0x39) = 3;
      if (uVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (0,uVar7 - 1,0,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afc6a0);
      }
      cVar6 = '\x06';
      param_2[1] = uVar7 - 1;
      goto LAB_00a67430;
    }
    while (bVar5 != 1) {
      if (bVar5 != 2) goto LAB_00a67478;
      uVar8 = uVar7;
      if (uVar7 != 0) {
        if (uVar7 == 1) {
          if (*pcVar1 == '.') {
LAB_00a67228:
            uVar8 = 1;
            goto LAB_00a67234;
          }
        }
        else if ((*pcVar1 == '.') && (pcVar1[1] == '/')) goto LAB_00a67228;
        uVar8 = 0;
      }
LAB_00a67234:
      if (uVar7 <= uVar8) {
        *(undefined1 *)((long)param_2 + 0x39) = 1;
        break;
      }
      FUN_00a3acdc(&local_80,param_2);
      uVar4 = uVar7 - local_80;
      *(undefined8 *)(param_1 + 8) = uStack_70;
      *(undefined8 *)param_1 = local_78;
      *(undefined8 *)(param_1 + 0x18) = uStack_60;
      *(undefined8 *)(param_1 + 0x10) = local_68;
      *(undefined8 *)(param_1 + 0x28) = uStack_50;
      *(undefined8 *)(param_1 + 0x20) = local_58;
      *(undefined8 *)(param_1 + 0x30) = local_48;
      if (uVar7 < local_80) goto code_r0x00a67454;
      cVar6 = *param_1;
      param_2[1] = uVar4;
      bVar5 = 2;
      uVar7 = uVar4;
      if (cVar6 != -1) {
        return;
      }
    }
LAB_00a673a0:
    *(undefined1 *)((long)param_2 + 0x39) = 3;
    if (uVar7 != 0) {
      if (uVar7 == 1) {
        if (*pcVar1 == '.') {
LAB_00a673dc:
          if (uVar7 != 0) {
            param_2[1] = uVar7 - 1;
            *param_1 = '\a';
            return;
          }
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (0,uVar7 - 1,0,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afc688);
        }
      }
      else if ((*pcVar1 == '.') && (pcVar1[1] == '/')) goto LAB_00a673dc;
    }
  }
  else {
    if ((bVar3 & 1) == 0) {
      if (bVar5 == 1) goto LAB_00a673a0;
      if (bVar5 != 2) goto LAB_00a67478;
      if (uVar8 < uVar7) {
        FUN_00a3acdc(&local_80,param_2);
        uVar4 = uVar7 - local_80;
        *(undefined8 *)(param_1 + 8) = uStack_70;
        *(undefined8 *)param_1 = local_78;
        *(undefined8 *)(param_1 + 0x18) = uStack_60;
        *(undefined8 *)(param_1 + 0x10) = local_68;
        *(undefined8 *)(param_1 + 0x28) = uStack_50;
        *(undefined8 *)(param_1 + 0x20) = local_58;
        *(undefined8 *)(param_1 + 0x30) = local_48;
        if (uVar7 < local_80) goto LAB_00a67490;
        cVar6 = *param_1;
        param_2[1] = uVar4;
        uVar7 = uVar4;
        while( true ) {
          if (cVar6 != -1) {
            return;
          }
          if (uVar7 <= uVar8) break;
          FUN_00a3acdc(&local_80,param_2);
          uVar4 = uVar7 - local_80;
          *(undefined8 *)(param_1 + 8) = uStack_70;
          *(undefined8 *)param_1 = local_78;
          *(undefined8 *)(param_1 + 0x18) = uStack_60;
          *(undefined8 *)(param_1 + 0x10) = local_68;
          *(undefined8 *)(param_1 + 0x28) = uStack_50;
          *(undefined8 *)(param_1 + 0x20) = local_58;
          *(undefined8 *)(param_1 + 0x30) = local_48;
          if (uVar7 < local_80) goto code_r0x00a67454;
          cVar6 = *param_1;
          param_2[1] = uVar4;
          uVar7 = uVar4;
        }
      }
    }
    else {
      if (bVar5 == 1) goto LAB_00a67418;
      if (bVar5 != 2) {
LAB_00a67478:
                    /* WARNING: Subroutine does not return */
        core::panicking::panic(&DAT_003821fa,0x28,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afc6d0);
      }
      if (uVar8 < uVar7) {
        FUN_00a3acdc(&local_80,param_2);
        uVar4 = uVar7 - local_80;
        *(undefined8 *)(param_1 + 8) = uStack_70;
        *(undefined8 *)param_1 = local_78;
        *(undefined8 *)(param_1 + 0x18) = uStack_60;
        *(undefined8 *)(param_1 + 0x10) = local_68;
        *(undefined8 *)(param_1 + 0x28) = uStack_50;
        *(undefined8 *)(param_1 + 0x20) = local_58;
        *(undefined8 *)(param_1 + 0x30) = local_48;
        if (uVar7 < local_80) {
LAB_00a67490:
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (0,uVar4,uVar7,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afc6b8);
        }
        cVar6 = *param_1;
        param_2[1] = uVar4;
        uVar7 = uVar4;
        while( true ) {
          if (cVar6 != -1) {
            return;
          }
          if (uVar7 <= uVar8) break;
          FUN_00a3acdc(&local_80,param_2);
          uVar4 = uVar7 - local_80;
          *(undefined8 *)(param_1 + 8) = uStack_70;
          *(undefined8 *)param_1 = local_78;
          *(undefined8 *)(param_1 + 0x18) = uStack_60;
          *(undefined8 *)(param_1 + 0x10) = local_68;
          *(undefined8 *)(param_1 + 0x28) = uStack_50;
          *(undefined8 *)(param_1 + 0x20) = local_58;
          *(undefined8 *)(param_1 + 0x30) = local_48;
          if (uVar7 < local_80) {
code_r0x00a67454:
                    /* WARNING: Subroutine does not return */
            core::slice::index::slice_index_fail
                      (0,uVar4,uVar7,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afc6b8);
          }
          cVar6 = *param_1;
          param_2[1] = uVar4;
          uVar7 = uVar4;
        }
      }
    }
    *(undefined1 *)((long)param_2 + 0x39) = 1;
  }
  cVar6 = -1;
LAB_00a67430:
  *param_1 = cVar6;
  return;
}


// ===== 00a674bc  <std::process::Command_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::process::Command as core::fmt::Debug>::fmt */

void __rustcall <std::process::Command_as_core::fmt::Debug>::fmt(void)

{
  (*(code *)PTR_fmt_00b078c8)();
  return;
}


// ===== 00a674c0  <std::io::stdio::StdoutLock_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StdoutLock as core::fmt::Debug>::fmt */

void __rustcall
<std::io::stdio::StdoutLock_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,&DAT_00383a15,10);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish_non_exhaustive(auStack_20);
  return;
}


// ===== 00a674f8  <std::sys::fs::unix::DirBuilder_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::fs::unix::DirBuilder as core::fmt::Debug>::fmt */

void __rustcall
<std::sys::fs::unix::DirBuilder_as_core::fmt::Debug>::fmt(undefined4 *param_1,undefined8 param_2)

{
  undefined1 auStack_30 [16];
  undefined4 local_4;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,&DAT_00383a1f,10);
  local_4 = *param_1;
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (auStack_30,&DAT_002bd244,4,&local_4,&DAT_00afc1f8);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 00a67564  FUN_00a67564 =====

undefined1  [16] FUN_00a67564(long *param_1,ulong param_2)

{
  ushort *puVar1;
  undefined1 auVar2 [16];
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  
  if (param_1[8] == 0) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = param_2;
    return auVar2 << 0x40;
  }
  param_1[8] = param_1[8] + -1;
  if (*param_1 != 1) {
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afc6e8);
  }
  plVar3 = (long *)param_1[1];
  if (plVar3 == (long *)0x0) {
    plVar3 = (long *)param_1[2];
    for (lVar6 = param_1[3]; lVar6 != 0; lVar6 = lVar6 + -1) {
      plVar3 = (long *)plVar3[0x44];
    }
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 1;
    param_1[1] = (long)plVar3;
    lVar6 = param_1[2];
    uVar5 = param_1[3];
    if (uVar5 < *(ushort *)((long)plVar3 + 0x21a)) goto LAB_00a67608;
  }
  else {
    lVar6 = param_1[2];
    uVar5 = param_1[3];
    if (uVar5 < *(ushort *)((long)plVar3 + 0x21a)) goto LAB_00a67608;
  }
  do {
    plVar4 = (long *)*plVar3;
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      core::option::unwrap_failed(&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afac98);
    }
    puVar1 = (ushort *)(plVar3 + 0x43);
    uVar5 = (ulong)*puVar1;
    lVar6 = lVar6 + 1;
    plVar3 = plVar4;
  } while (*(ushort *)((long)plVar4 + 0x21a) <= *puVar1);
LAB_00a67608:
  if (lVar6 == 0) {
    lVar6 = uVar5 + 1;
    plVar4 = plVar3;
  }
  else {
    plVar7 = plVar3 + uVar5 + 0x45;
    do {
      plVar4 = (long *)*plVar7;
      lVar6 = lVar6 + -1;
      plVar7 = plVar4 + 0x44;
    } while (lVar6 != 0);
    lVar6 = 0;
  }
  param_1[1] = (long)plVar4;
  param_1[2] = 0;
  param_1[3] = lVar6;
  auVar8._8_8_ = plVar3 + uVar5 * 3 + 0x22;
  auVar8._0_8_ = plVar3 + uVar5 * 3 + 1;
  return auVar8;
}


// ===== 00a67674  <std::env::ArgsOs_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::env::ArgsOs as core::fmt::Debug>::fmt */

void __rustcall <std::env::ArgsOs_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_30 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,&DAT_00383a29,6);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (auStack_30,&DAT_003835d7,5,param_1,&PTR_FUN_00afc518);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 00a676d8  FUN_00a676d8 =====

bool FUN_00a676d8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  size_t __n;
  void *__s1;
  size_t sVar2;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined7 uStack_1e8;
  undefined1 local_1e1;
  undefined7 uStack_1e0;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined7 uStack_1b8;
  undefined1 local_1b1;
  undefined7 uStack_1b0;
  void *local_1a0;
  size_t sStack_198;
  char local_190;
  undefined8 local_18f;
  undefined8 uStack_187;
  undefined8 local_17f;
  undefined7 uStack_177;
  undefined1 uStack_170;
  undefined7 uStack_16f;
  undefined1 local_168;
  undefined1 local_167;
  undefined1 local_166;
  undefined8 local_160;
  size_t sStack_158;
  char local_150;
  undefined8 local_14f;
  undefined8 uStack_147;
  undefined8 local_13f;
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined7 uStack_12f;
  undefined2 local_128;
  undefined1 local_126;
  char local_120 [8];
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  char local_e8 [8];
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  char local_b0 [8];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 local_78 [8];
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  __n = param_1[1];
  sVar2 = param_2[1];
  if (__n == sVar2) {
    __s1 = (void *)*param_1;
    if ((((*(char *)(param_1 + 7) == *(char *)(param_2 + 7)) &&
         (*(char *)((long)param_1 + 0x39) == '\x02')) && (*(char *)((long)param_2 + 0x39) == '\x02')
        ) && (iVar1 = memcmp(__s1,(void *)*param_2,__n), iVar1 == 0)) {
      return true;
    }
  }
  else {
    __s1 = (void *)*param_1;
  }
  local_190 = *(char *)(param_1 + 2);
  if (local_190 != -1) {
    uStack_1f8 = *(undefined8 *)((long)param_1 + 0x19);
    local_200 = *(undefined8 *)((long)param_1 + 0x11);
    uStack_1f0 = *(undefined8 *)((long)param_1 + 0x21);
    uStack_1e8 = (undefined7)*(undefined8 *)((long)param_1 + 0x29);
    local_1e1 = (undefined1)param_1[6];
    uStack_1e0 = (undefined7)((ulong)param_1[6] >> 8);
  }
  local_150 = *(char *)(param_2 + 2);
  local_166 = *(undefined1 *)((long)param_1 + 0x3a);
  local_168 = *(undefined1 *)(param_1 + 7);
  local_167 = *(undefined1 *)((long)param_1 + 0x39);
  local_160 = *param_2;
  if (local_150 != -1) {
    uStack_1c8 = *(undefined8 *)((long)param_2 + 0x19);
    local_1d0 = *(undefined8 *)((long)param_2 + 0x11);
    uStack_1c0 = *(undefined8 *)((long)param_2 + 0x21);
    uStack_1b8 = (undefined7)*(undefined8 *)((long)param_2 + 0x29);
    local_1b1 = (undefined1)param_2[6];
    uStack_1b0 = (undefined7)((ulong)param_2[6] >> 8);
  }
  local_126 = *(undefined1 *)((long)param_2 + 0x3a);
  uStack_187 = uStack_1f8;
  local_18f = local_200;
  uStack_177 = uStack_1e8;
  local_17f = uStack_1f0;
  local_128 = *(undefined2 *)(param_2 + 7);
  uStack_137 = uStack_1b8;
  local_13f = uStack_1c0;
  uStack_130 = local_1b1;
  uStack_12f = uStack_1b0;
  uStack_147 = uStack_1c8;
  local_14f = local_1d0;
  uStack_170 = local_1e1;
  uStack_16f = uStack_1e0;
  local_1a0 = __s1;
  sStack_198 = __n;
  sStack_158 = sVar2;
  <std::path::Components_as_core::iter::traits::double_ended::DoubleEndedIterator>::next_back
            (local_120,&local_1a0);
  while( true ) {
    if (local_120[0] == -1) {
      <std::path::Components_as_core::iter::traits::double_ended::DoubleEndedIterator>::next_back
                (local_b0,&local_160);
      return local_b0[0] == -1;
    }
    <std::path::Components_as_core::iter::traits::double_ended::DoubleEndedIterator>::next_back
              (local_e8,&local_160);
    if (local_e8[0] == -1) break;
    local_b0[0] = local_120[0];
    uStack_a8 = uStack_118;
    uStack_98 = uStack_108;
    uStack_a0 = uStack_110;
    local_80 = local_f0;
    uStack_70 = uStack_e0;
    uStack_88 = uStack_f8;
    local_90 = local_100;
    uStack_60 = uStack_d0;
    local_68 = local_d8;
    uStack_50 = uStack_c0;
    local_58 = local_c8;
    local_48 = local_b8;
    iVar1 = FUN_00a5a3a0(local_b0,local_78);
    if (iVar1 == 0) {
      return false;
    }
    <std::path::Components_as_core::iter::traits::double_ended::DoubleEndedIterator>::next_back
              (local_120,&local_1a0);
  }
  return false;
}


// ===== 00a67900  <std::process::CommandArgs_as_core::iter::traits::iterator::Iterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::process::CommandArgs as core::iter::traits::iterator::Iterator>::next */

undefined1  [16] __rustcall
<std::process::CommandArgs_as_core::iter::traits::iterator::Iterator>::next
          (long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  size_t sVar3;
  char *__s;
  undefined1 auVar4 [16];
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)param_1[1]) {
    __s = (char *)*puVar1;
    *param_1 = (long)(puVar1 + 1);
    sVar3 = strlen(__s);
    auVar4._8_8_ = sVar3;
    auVar4._0_8_ = __s;
    return auVar4;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_2;
  return auVar2 << 0x40;
}


// ===== 00a67950  <std::process::CommandArgs_as_core::iter::traits::iterator::Iterator>::size_hint =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::process::CommandArgs as core::iter::traits::iterator::Iterator>::size_hint */

void __rustcall
<std::process::CommandArgs_as_core::iter::traits::iterator::Iterator>::size_hint
          (ulong *param_1,long *param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)(param_2[1] - *param_2) >> 3;
  *param_1 = uVar1;
  param_1[1] = 1;
  param_1[2] = uVar1;
  return;
}


// ===== 00a6796c  <std::fs::Metadata_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::fs::Metadata as core::fmt::Debug>::fmt */

void __rustcall <std::fs::Metadata_as_core::fmt::Debug>::fmt(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_50 [16];
  undefined8 local_40;
  undefined4 local_38;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_50,param_2,&DAT_002a19a8,8);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  local_40._0_4_ = uVar1;
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (auStack_50,&DAT_00383a2f,9,&local_40,&DAT_00afc700);
  local_40 = CONCAT44(local_40._4_4_,uVar1);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (auStack_50,&DAT_00383a38,0xb,&local_40,&DAT_00afc720);
  local_40 = *(undefined8 *)(param_1 + 0x30);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (auStack_50,&DAT_00383a43,3,&local_40,&DAT_00afc740);
  if (*(ulong *)(param_1 + 0x60) < 1000000000) {
    local_40 = *(undefined8 *)(param_1 + 0x58);
    local_38 = (undefined4)*(ulong *)(param_1 + 0x60);
                    /* try { // try from 00a67a34 to 00a67a53 has its CatchHandler @ 00a67abc */
    <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
              (auStack_50,&DAT_002a15c8,8,&local_40,&DAT_00afc760);
  }
  if (*(ulong *)(param_1 + 0x50) < 1000000000) {
    local_40 = *(undefined8 *)(param_1 + 0x48);
    local_38 = (undefined4)*(ulong *)(param_1 + 0x50);
                    /* try { // try from 00a67a6c to 00a67a8b has its CatchHandler @ 00a67aa8 */
    <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
              (auStack_50,"accessed",8,&local_40,&DAT_00afc760);
  }
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish_non_exhaustive(auStack_50);
  return;
}


// ===== 00a67ad8  <std::process::CommandArgs_as_core::iter::traits::exact_size::ExactSizeIterator>::len =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::process::CommandArgs as core::iter::traits::exact_size::ExactSizeIterator>::len */

ulong __rustcall
<std::process::CommandArgs_as_core::iter::traits::exact_size::ExactSizeIterator>::len(long *param_1)

{
  return (ulong)(param_1[1] - *param_1) >> 3;
}


// ===== 00a67ae8  <std::io::stdio::Stderr_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::Stderr as core::fmt::Debug>::fmt */

void __rustcall
<std::io::stdio::Stderr_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,&DAT_00383a46,6);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish_non_exhaustive(auStack_20);
  return;
}


// ===== 00a67b20  <std::process::CommandEnvs_as_core::iter::traits::iterator::Iterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::process::CommandEnvs as core::iter::traits::iterator::Iterator>::next */

void __rustcall
<std::process::CommandEnvs_as_core::iter::traits::iterator::Iterator>::next(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  
  auVar7 = FUN_00a67564();
  plVar6 = auVar7._8_8_;
  lVar5 = auVar7._0_8_;
  if (lVar5 != 0) {
    lVar1 = *plVar6;
    lVar3 = plVar6[1];
    uVar2 = *(undefined8 *)(lVar5 + 8);
    uVar4 = *(undefined8 *)(lVar5 + 0x10);
    param_1[3] = plVar6[2];
    lVar5 = 0;
    if (lVar1 != -1) {
      lVar5 = lVar3;
    }
    param_1[1] = uVar4;
    param_1[2] = lVar5;
    *param_1 = uVar2;
    return;
  }
  *param_1 = 0;
  return;
}


// ===== 00a67b74  <std::io::stdio::Stderr_as_core::io::write::Write>::write_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::Stderr as core::io::write::Write>::write_vectored */

void __rustcall
<std::io::stdio::Stderr_as_core::io::write::Write>::write_vectored(undefined8 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <&std::io::stdio::Stderr_as_core::io::write::Write>::write_vectored(&local_18);
  return;
}


// ===== 00a67b98  <std::io::stdio::Stderr_as_core::io::write::Write>::write_all_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::Stderr as core::io::write::Write>::write_all_vectored */

void __rustcall
<std::io::stdio::Stderr_as_core::io::write::Write>::write_all_vectored(undefined8 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <&std::io::stdio::Stderr_as_core::io::write::Write>::write_all_vectored(&local_18);
  return;
}


// ===== 00a67bbc  <std::io::stdio::Stderr_as_core::io::write::Write>::flush =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::Stderr as core::io::write::Write>::flush */

void __rustcall <std::io::stdio::Stderr_as_core::io::write::Write>::flush(undefined8 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <&std::io::stdio::Stderr_as_core::io::write::Write>::flush(&local_18);
  return;
}


// ===== 00a67be0  <std::io::stdio::Stderr_as_core::io::write::Write>::write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::Stderr as core::io::write::Write>::write */

void __rustcall <std::io::stdio::Stderr_as_core::io::write::Write>::write(undefined8 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <&std::io::stdio::Stderr_as_core::io::write::Write>::write(&local_18);
  return;
}


// ===== 00a67c04  <std::io::stdio::Stderr_as_core::io::write::Write>::write_all =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::Stderr as core::io::write::Write>::write_all */

void __rustcall <std::io::stdio::Stderr_as_core::io::write::Write>::write_all(undefined8 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <&std::io::stdio::Stderr_as_core::io::write::Write>::write_all(&local_18);
  return;
}


// ===== 00a67c28  <std::io::stdio::Stderr_as_core::io::write::Write>::write_fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::Stderr as core::io::write::Write>::write_fmt */

void __rustcall <std::io::stdio::Stderr_as_core::io::write::Write>::write_fmt(undefined8 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <&std::io::stdio::Stderr_as_core::io::write::Write>::write_fmt(&local_18);
  return;
}


// ===== 00a67c4c  <&std::io::stdio::Stderr_as_core::io::write::Write>::write_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::io::stdio::Stderr as core::io::write::Write>::write_vectored */

undefined8 __rustcall
<&std::io::stdio::Stderr_as_core::io::write::Write>::write_vectored
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  pthread_key_t __key;
  void *pvVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *local_18;
  
  puVar7 = *(undefined8 **)*param_1;
  if (DAT_00b108d8 == 0) {
    __key = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(&DAT_00b108d8);
    pvVar4 = pthread_getspecific(__key);
    if (pvVar4 == (void *)0x0) goto LAB_00a67cbc;
LAB_00a67c88:
    if (pvVar4 != (void *)*puVar7) {
LAB_00a67ccc:
      piVar1 = (int *)(puVar7 + 1);
      do {
        if (*piVar1 != 0) {
          ClearExclusiveLocal();
          <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                    (puVar7 + 1);
          break;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *puVar7 = pvVar4;
      iVar6 = 1;
      goto LAB_00a67cec;
    }
  }
  else {
    pvVar4 = pthread_getspecific((pthread_key_t)DAT_00b108d8);
    if (pvVar4 != (void *)0x0) goto LAB_00a67c88;
LAB_00a67cbc:
    pvVar4 = (void *)FUN_00a2cdf8();
    if (pvVar4 != (void *)*puVar7) goto LAB_00a67ccc;
  }
  if (*(int *)((long)puVar7 + 0xc) == -1) {
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed(&DAT_00382941,0x26,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afb318)
    ;
  }
  iVar6 = *(int *)((long)puVar7 + 0xc) + 1;
LAB_00a67cec:
  *(int *)((long)puVar7 + 0xc) = iVar6;
                    /* try { // try from 00a67cf4 to 00a67d03 has its CatchHandler @ 00a67dac */
  local_18 = puVar7;
  uVar5 = <std::io::stdio::StderrLock_as_core::io::write::Write>::write_vectored
                    (&local_18,param_2,param_3);
  iVar6 = *(int *)((long)puVar7 + 0xc) + -1;
  *(int *)((long)puVar7 + 0xc) = iVar6;
  if (iVar6 == 0) {
    piVar1 = (int *)(puVar7 + 1);
    *puVar7 = 0;
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = 0;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 == 2) {
      syscall(0x62,piVar1,0x81,1);
      return uVar5;
    }
  }
  return uVar5;
}


// ===== 00a67dc0  <&std::io::stdio::Stderr_as_core::io::write::Write>::write_all_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::io::stdio::Stderr as core::io::write::Write>::write_all_vectored */

ulong __rustcall
<&std::io::stdio::Stderr_as_core::io::write::Write>::write_all_vectored
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  pthread_key_t __key;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  undefined8 *puVar9;
  
  puVar9 = *(undefined8 **)*param_1;
  if (DAT_00b108d8 == 0) {
    __key = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(&DAT_00b108d8);
    pvVar5 = pthread_getspecific(__key);
    if (pvVar5 != (void *)0x0) goto LAB_00a67df8;
LAB_00a67e2c:
    pvVar5 = (void *)FUN_00a2cdf8();
    if (pvVar5 != (void *)*puVar9) {
LAB_00a67e3c:
      piVar1 = (int *)(puVar9 + 1);
      do {
        if (*piVar1 != 0) {
          ClearExclusiveLocal();
          <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                    (puVar9 + 1);
          break;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *puVar9 = pvVar5;
      iVar8 = 1;
      goto LAB_00a67e5c;
    }
  }
  else {
    pvVar5 = pthread_getspecific((pthread_key_t)DAT_00b108d8);
    if (pvVar5 == (void *)0x0) goto LAB_00a67e2c;
LAB_00a67df8:
    if (pvVar5 != (void *)*puVar9) goto LAB_00a67e3c;
  }
  if (*(int *)((long)puVar9 + 0xc) == -1) {
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed(&DAT_00382941,0x26,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afb318)
    ;
  }
  iVar8 = *(int *)((long)puVar9 + 0xc) + 1;
LAB_00a67e5c:
  *(int *)((long)puVar9 + 0xc) = iVar8;
  if (puVar9[2] != 0) {
    core::cell::panic_already_borrowed(&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afc818);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0xa67f1c);
    (*pcVar4)();
  }
  puVar9[2] = 0xffffffffffffffff;
                    /* try { // try from 00a67e70 to 00a67e7b has its CatchHandler @ 00a67f4c */
  uVar6 = FUN_00a6aca0(pvVar5,param_2,param_3);
  uVar7 = uVar6;
  if ((((uVar6 != 0) && (1 < (uVar6 & 3))) && ((uVar6 & 3) == 2)) && (uVar7 = 0, uVar6 >> 0x20 != 9)
     ) {
    uVar7 = uVar6;
  }
  iVar8 = *(int *)((long)puVar9 + 0xc) + -1;
  puVar9[2] = puVar9[2] + 1;
  *(int *)((long)puVar9 + 0xc) = iVar8;
  if (iVar8 == 0) {
    piVar1 = (int *)(puVar9 + 1);
    *puVar9 = 0;
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = 0;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 == 2) {
      syscall(0x62,piVar1,0x81,1);
      return uVar7;
    }
  }
  return uVar7;
}


// ===== 00a67f80  <&std::io::stdio::Stderr_as_core::io::write::Write>::flush =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::io::stdio::Stderr as core::io::write::Write>::flush */

undefined8 __rustcall
<&std::io::stdio::Stderr_as_core::io::write::Write>::flush(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  pthread_key_t __key;
  void *pvVar6;
  long lVar7;
  undefined8 *puVar8;
  
  puVar8 = *(undefined8 **)*param_1;
  if (DAT_00b108d8 == 0) {
    __key = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(&DAT_00b108d8);
    pvVar6 = pthread_getspecific(__key);
    if (pvVar6 == (void *)0x0) goto LAB_00a68000;
LAB_00a67fac:
    if (pvVar6 != (void *)*puVar8) {
LAB_00a68010:
      piVar1 = (int *)(puVar8 + 1);
      do {
        if (*piVar1 != 0) {
          ClearExclusiveLocal();
          <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                    (puVar8 + 1);
          *puVar8 = pvVar6;
          lVar7 = puVar8[2];
          *(undefined4 *)((long)puVar8 + 0xc) = 1;
          goto joined_r0x00a680b4;
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      *puVar8 = pvVar6;
      lVar7 = puVar8[2];
      *(undefined4 *)((long)puVar8 + 0xc) = 1;
joined_r0x00a680b4:
      if (lVar7 != 0) goto code_r0x00a680bc;
      *(undefined4 *)((long)puVar8 + 0xc) = 0;
      goto LAB_00a68040;
    }
  }
  else {
    pvVar6 = pthread_getspecific((pthread_key_t)DAT_00b108d8);
    if (pvVar6 != (void *)0x0) goto LAB_00a67fac;
LAB_00a68000:
    pvVar6 = (void *)FUN_00a2cdf8();
    if (pvVar6 != (void *)*puVar8) goto LAB_00a68010;
  }
  iVar2 = *(int *)((long)puVar8 + 0xc);
  if (iVar2 == -1) {
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed(&DAT_00382941,0x26,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afb318)
    ;
  }
  *(int *)((long)puVar8 + 0xc) = iVar2 + 1;
  if (puVar8[2] != 0) {
code_r0x00a680bc:
    core::cell::panic_already_borrowed(&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afc830);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0xa680c8);
    (*pcVar5)();
  }
  *(int *)((long)puVar8 + 0xc) = iVar2;
  if (iVar2 != 0) {
    return 0;
  }
LAB_00a68040:
  piVar1 = (int *)(puVar8 + 1);
  *puVar8 = 0;
  do {
    iVar2 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar2 != 2) {
    return 0;
  }
  syscall(0x62,piVar1,0x81,1);
  return 0;
}


// ===== 00a680dc  <&std::io::stdio::Stderr_as_core::io::write::Write>::write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::io::stdio::Stderr as core::io::write::Write>::write */

undefined1  [16] __rustcall
<&std::io::stdio::Stderr_as_core::io::write::Write>::write
          (undefined8 *param_1,void *param_2,size_t param_3)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  pthread_key_t __key;
  void *pvVar4;
  size_t sVar5;
  ulong uVar6;
  int *piVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  puVar9 = *(undefined8 **)*param_1;
  if (DAT_00b108d8 == 0) {
    __key = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(&DAT_00b108d8);
    pvVar4 = pthread_getspecific(__key);
    if (pvVar4 != (void *)0x0) goto LAB_00a68114;
LAB_00a68148:
    pvVar4 = (void *)FUN_00a2cdf8();
    if (pvVar4 != (void *)*puVar9) {
LAB_00a68158:
      piVar7 = (int *)(puVar9 + 1);
      do {
        if (*piVar7 != 0) {
          ClearExclusiveLocal();
          <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                    (puVar9 + 1);
          break;
        }
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      *puVar9 = pvVar4;
      iVar8 = 1;
      goto LAB_00a68178;
    }
  }
  else {
    pvVar4 = pthread_getspecific((pthread_key_t)DAT_00b108d8);
    if (pvVar4 == (void *)0x0) goto LAB_00a68148;
LAB_00a68114:
    if (pvVar4 != (void *)*puVar9) goto LAB_00a68158;
  }
  if (*(int *)((long)puVar9 + 0xc) == -1) {
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed(&DAT_00382941,0x26,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afb318)
    ;
  }
  iVar8 = *(int *)((long)puVar9 + 0xc) + 1;
LAB_00a68178:
  *(int *)((long)puVar9 + 0xc) = iVar8;
  if (puVar9[2] != 0) {
    core::cell::panic_already_borrowed(&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afc848);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0xa68270);
    (*pcVar3)();
  }
  puVar9[2] = 0xffffffffffffffff;
  sVar5 = ::write(2,param_2,param_3);
  if (sVar5 == 0xffffffffffffffff) {
    piVar7 = (int *)__errno();
    iVar8 = *piVar7;
    if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
    }
    uVar6 = (ulong)(iVar8 != 9);
    sVar5 = (long)iVar8 << 0x20 | 2;
    if (iVar8 == 9) {
      sVar5 = param_3;
    }
  }
  else {
    uVar6 = 0;
  }
  iVar8 = *(int *)((long)puVar9 + 0xc) + -1;
  puVar9[2] = puVar9[2] + 1;
  *(int *)((long)puVar9 + 0xc) = iVar8;
  if (iVar8 == 0) {
    piVar7 = (int *)(puVar9 + 1);
    *puVar9 = 0;
    do {
      iVar8 = *piVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = 0;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar8 == 2) {
      syscall(0x62,piVar7,0x81,1);
      auVar11._8_8_ = sVar5;
      auVar11._0_8_ = uVar6;
      return auVar11;
    }
  }
  auVar10._8_8_ = sVar5;
  auVar10._0_8_ = uVar6;
  return auVar10;
}


// ===== 00a682e4  <&std::io::stdio::Stderr_as_core::io::write::Write>::write_all =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::io::stdio::Stderr as core::io::write::Write>::write_all */

ulong __rustcall
<&std::io::stdio::Stderr_as_core::io::write::Write>::write_all
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  pthread_key_t __key;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  undefined8 *puVar9;
  
  puVar9 = *(undefined8 **)*param_1;
  if (DAT_00b108d8 == 0) {
    __key = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(&DAT_00b108d8);
    pvVar5 = pthread_getspecific(__key);
    if (pvVar5 != (void *)0x0) goto LAB_00a6831c;
LAB_00a68350:
    pvVar5 = (void *)FUN_00a2cdf8();
    if (pvVar5 != (void *)*puVar9) {
LAB_00a68360:
      piVar1 = (int *)(puVar9 + 1);
      do {
        if (*piVar1 != 0) {
          ClearExclusiveLocal();
          <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                    (puVar9 + 1);
          break;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *puVar9 = pvVar5;
      iVar8 = 1;
      goto LAB_00a68380;
    }
  }
  else {
    pvVar5 = pthread_getspecific((pthread_key_t)DAT_00b108d8);
    if (pvVar5 == (void *)0x0) goto LAB_00a68350;
LAB_00a6831c:
    if (pvVar5 != (void *)*puVar9) goto LAB_00a68360;
  }
  if (*(int *)((long)puVar9 + 0xc) == -1) {
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed(&DAT_00382941,0x26,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afb318)
    ;
  }
  iVar8 = *(int *)((long)puVar9 + 0xc) + 1;
LAB_00a68380:
  *(int *)((long)puVar9 + 0xc) = iVar8;
  if (puVar9[2] != 0) {
    core::cell::panic_already_borrowed(&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afc860);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0xa68440);
    (*pcVar4)();
  }
  puVar9[2] = 0xffffffffffffffff;
                    /* try { // try from 00a68394 to 00a6839f has its CatchHandler @ 00a68470 */
  uVar6 = FUN_00a6aea4(pvVar5,param_2,param_3);
  uVar7 = uVar6;
  if ((((uVar6 != 0) && (1 < (uVar6 & 3))) && ((uVar6 & 3) == 2)) && (uVar7 = 0, uVar6 >> 0x20 != 9)
     ) {
    uVar7 = uVar6;
  }
  iVar8 = *(int *)((long)puVar9 + 0xc) + -1;
  puVar9[2] = puVar9[2] + 1;
  *(int *)((long)puVar9 + 0xc) = iVar8;
  if (iVar8 == 0) {
    piVar1 = (int *)(puVar9 + 1);
    *puVar9 = 0;
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = 0;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 == 2) {
      syscall(0x62,piVar1,0x81,1);
      return uVar7;
    }
  }
  return uVar7;
}


// ===== 00a684a4  <&std::io::stdio::Stderr_as_core::io::write::Write>::write_fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::io::stdio::Stderr as core::io::write::Write>::write_fmt */

ulong __rustcall
<&std::io::stdio::Stderr_as_core::io::write::Write>::write_fmt
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  pthread_key_t __key;
  int iVar4;
  void *pvVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 **local_50;
  ulong local_48;
  undefined1 local_40;
  long local_38;
  undefined8 *local_18;
  
  puVar7 = *(undefined8 **)*param_1;
  if (DAT_00b108d8 == 0) {
    __key = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(&DAT_00b108d8);
    pvVar5 = pthread_getspecific(__key);
    if (pvVar5 == (void *)0x0) goto LAB_00a68514;
LAB_00a684e0:
    if (pvVar5 != (void *)*puVar7) {
LAB_00a68524:
      piVar1 = (int *)(puVar7 + 1);
      do {
        if (*piVar1 != 0) {
          ClearExclusiveLocal();
          <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                    (puVar7 + 1);
          break;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *puVar7 = pvVar5;
      iVar4 = 1;
      goto LAB_00a68544;
    }
  }
  else {
    pvVar5 = pthread_getspecific((pthread_key_t)DAT_00b108d8);
    if (pvVar5 != (void *)0x0) goto LAB_00a684e0;
LAB_00a68514:
    pvVar5 = (void *)FUN_00a2cdf8();
    if (pvVar5 != (void *)*puVar7) goto LAB_00a68524;
  }
  if (*(int *)((long)puVar7 + 0xc) == -1) {
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed(&DAT_00382941,0x26,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afb318)
    ;
  }
  iVar4 = *(int *)((long)puVar7 + 0xc) + 1;
LAB_00a68544:
  *(int *)((long)puVar7 + 0xc) = iVar4;
  local_50 = &local_18;
  local_48 = 0;
                    /* try { // try from 00a68554 to 00a68593 has its CatchHandler @ 00a68684 */
  local_18 = puVar7;
  iVar4 = core::fmt::write(&local_50,&PTR_FUN_00afaa38,param_2,param_3);
  uVar6 = local_48;
  if (iVar4 == 0) {
    if (local_48 != 0) {
      if ((1 < (local_48 & 3) - 2) && ((local_48 & 3) != 0)) {
        local_38 = local_48 - 1;
        local_40 = 3;
                    /* try { // try from 00a685c4 to 00a685cb has its CatchHandler @ 00a68670 */
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_38);
      }
      uVar6 = 0;
    }
  }
  else if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_00382152,0xad,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afa9f0);
  }
  iVar4 = *(int *)((long)local_18 + 0xc) + -1;
  *(int *)((long)local_18 + 0xc) = iVar4;
  if (iVar4 == 0) {
    piVar1 = (int *)(local_18 + 1);
    *local_18 = 0;
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = 0;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 2) {
      syscall(0x62,piVar1,0x81,1);
      return uVar6;
    }
  }
  return uVar6;
}


// ===== 00a686a4  <std::sync::mpsc::RecvError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sync::mpsc::RecvError as core::fmt::Display>::fmt */

void __rustcall
<std::sync::mpsc::RecvError_as_core::fmt::Display>::fmt(undefined8 param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt(&DAT_00383a4c,0x1d,param_2);
  return;
}


// ===== 00a686b8  <std::process::CommandEnvs_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::process::CommandEnvs as core::fmt::Debug>::fmt */

void __rustcall
<std::process::CommandEnvs_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field1_finish
            (param_2,&DAT_00383a69,0xb,&DAT_002bd06c,4,&local_18,&DAT_00afc780);
  return;
}


// ===== 00a68704  FUN_00a68704 =====

void FUN_00a68704(undefined8 *param_1)

{
  core::fmt::pointer_fmt_inner(*param_1);
  return;
}


// ===== 00a6870c  FUN_00a6870c =====

void FUN_00a6870c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_40 [16];
  long local_18;
  
  lVar1 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  <core::fmt::[a]::core::fmt::Formatter>::debug_list(auStack_40,param_2);
  lVar3 = local_18;
  for (; local_18 = lVar1, lVar2 != 0; lVar2 = lVar2 + -1) {
    lVar1 = local_18 + 1;
    <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry
              (auStack_40,&local_18,&DAT_00afa708);
    lVar3 = local_18;
  }
  local_18 = lVar3;
  <core::fmt::builders::[6]::core::fmt::builders::DebugList>::finish(auStack_40);
  return;
}


// ===== 00a68778  <std::sync::mpsc::TryRecvError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sync::mpsc::TryRecvError as core::fmt::Display>::fmt */

void __rustcall
<std::sync::mpsc::TryRecvError_as_core::fmt::Display>::fmt(char *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_00383a4c;
  if (*param_1 == '\0') {
    puVar1 = &UNK_00383a74;
  }
  <str_as_core::fmt::Display>::fmt(puVar1,0x1d,param_2);
  return;
}


// ===== 00a687a0  <std::process::Output_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::process::Output as core::fmt::Debug>::fmt */

void __rustcall
<std::process::Output_as_core::fmt::Debug>::fmt(undefined1 *param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined1 *puVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  int local_90 [2];
  undefined1 auStack_88 [16];
  int local_78 [2];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  
  core::str::converts::from_utf8
            (local_90,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  ppuVar1 = &PTR_FUN_00afc7c0;
  puVar2 = param_1;
  if (local_90[0] == 0) {
    ppuVar1 = (undefined **)&UNK_00afc7a0;
    puVar2 = auStack_88;
  }
  core::str::converts::from_utf8
            (local_78,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  ppuVar3 = &PTR_FUN_00afc7c0;
  puVar4 = param_1 + 0x18;
  if (local_78[0] == 0) {
    ppuVar3 = (undefined **)&UNK_00afc7a0;
    puVar4 = auStack_70;
  }
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_60,param_2,&DAT_00383a91,6);
  uVar5 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (auStack_60,&DAT_00383a97,6,param_1 + 0x30,&DAT_00afc7e0);
  uVar5 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (uVar5,"stdout",6,puVar2,ppuVar1);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (uVar5,"stderr",6,puVar4,ppuVar3);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 00a688b0  FUN_00a688b0 =====

void FUN_00a688b0(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,&DAT_00383a9d,2);
  return;
}


// ===== 00a688c4  <std::io::stdio::StderrLock_as_core::io::write::Write>::write_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StderrLock as core::io::write::Write>::write_vectored */

undefined1  [16] __rustcall
<std::io::stdio::StderrLock_as_core::io::write::Write>::write_vectored
          (long *param_1,iovec *param_2,ulong param_3)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint *puVar5;
  long lVar6;
  long lVar7;
  size_t *psVar8;
  long lVar9;
  long *plVar10;
  ulong unaff_x19;
  iovec *unaff_x20;
  long lVar11;
  uint unaff_w22;
  long lVar12;
  long lVar13;
  long lVar14;
  size_t sVar15;
  undefined1 auVar16 [16];
  
  lVar11 = *param_1;
  if (*(long *)(lVar11 + 0x10) == 0) {
    uVar3 = param_3;
    if (0x3ff < param_3) {
      uVar3 = 0x400;
    }
    *(undefined8 *)(lVar11 + 0x10) = 0xffffffffffffffff;
    uVar3 = writev(2,param_2,(int)uVar3);
    if (uVar3 == 0xffffffffffffffff) {
      puVar5 = (uint *)__errno();
      unaff_w22 = *puVar5;
      unaff_x19 = param_3;
      unaff_x20 = param_2;
      if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) goto code_r0x00a68a14;
      goto LAB_00a68954;
    }
  }
  else {
    core::cell::panic_already_borrowed(&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afc800);
code_r0x00a68a14:
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
LAB_00a68954:
    if (unaff_w22 != 9) {
      uVar4 = 1;
      uVar3 = (ulong)unaff_w22 << 0x20 | 2;
      goto LAB_00a68914;
    }
    if (unaff_x19 == 0) {
      uVar3 = 0;
    }
    else {
      if (unaff_x19 < 5) {
        lVar6 = 0;
        uVar3 = 0;
      }
      else {
        lVar7 = 0;
        lVar12 = 0;
        lVar13 = 0;
        lVar14 = 0;
        uVar3 = 4;
        if ((unaff_x19 & 3) != 0) {
          uVar3 = unaff_x19 & 3;
        }
        psVar8 = &unaff_x20[2].iov_len;
        lVar6 = unaff_x19 - uVar3;
        lVar9 = lVar6;
        do {
          plVar1 = (long *)(psVar8 + -4);
          sVar15 = *psVar8;
          plVar10 = (long *)(psVar8 + -2);
          plVar2 = (long *)(psVar8 + 2);
          lVar9 = lVar9 + -4;
          psVar8 = psVar8 + 8;
          lVar7 = *plVar1 + lVar7;
          lVar12 = *plVar10 + lVar12;
          lVar13 = sVar15 + lVar13;
          lVar14 = *plVar2 + lVar14;
        } while (lVar9 != 0);
        uVar3 = lVar13 + lVar7 + lVar14 + lVar12;
      }
      lVar7 = unaff_x19 - lVar6;
      psVar8 = &unaff_x20[lVar6].iov_len;
      do {
        lVar7 = lVar7 + -1;
        uVar3 = *psVar8 + uVar3;
        psVar8 = psVar8 + 2;
      } while (lVar7 != 0);
    }
  }
  uVar4 = 0;
LAB_00a68914:
  *(long *)(lVar11 + 0x10) = *(long *)(lVar11 + 0x10) + 1;
  auVar16._8_8_ = uVar3;
  auVar16._0_8_ = uVar4;
  return auVar16;
}


// ===== 00a68a30  <std::io::stdio::StderrLock_as_core::io::write::Write>::write_all_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StderrLock as core::io::write::Write>::write_all_vectored */

ulong __rustcall
<std::io::stdio::StderrLock_as_core::io::write::Write>::write_all_vectored(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (*(long *)(lVar3 + 0x10) != 0) {
    core::cell::panic_already_borrowed(&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afc818);
                    /* catch() { ... } // from try @ 00a68a50 with catch @ 00a68a98 */
    *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 1;
                    /* WARNING: Subroutine does not return */
    FUN_00ab2530();
  }
  *(undefined8 *)(lVar3 + 0x10) = 0xffffffffffffffff;
                    /* try { // try from 00a68a50 to 00a68a53 has its CatchHandler @ 00a68a98 */
  uVar1 = FUN_00a6aca0();
  uVar2 = uVar1;
  if ((((uVar1 != 0) && (1 < (uVar1 & 3))) && ((uVar1 & 3) == 2)) && (uVar2 = 0, uVar1 >> 0x20 != 9)
     ) {
    uVar2 = uVar1;
  }
  *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 1;
  return uVar2;
}


// ===== 00a68aa8  <std::io::stdio::StderrLock_as_core::io::write::Write>::flush =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StderrLock as core::io::write::Write>::flush */

undefined1  [16] __rustcall
<std::io::stdio::StderrLock_as_core::io::write::Write>::flush
          (long *param_1,ulong param_2,size_t param_3)

{
  size_t sVar1;
  ulong uVar2;
  uint *puVar3;
  size_t unaff_x19;
  long lVar4;
  uint unaff_w21;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (*(long *)(*param_1 + 0x10) == 0) {
    auVar5._8_8_ = 0;
    auVar5._0_8_ = param_2;
    return auVar5 << 0x40;
  }
  auVar5 = core::cell::panic_already_borrowed(&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afc830);
  lVar4 = *auVar5._0_8_;
  if (*(long *)(lVar4 + 0x10) == 0) {
    *(undefined8 *)(lVar4 + 0x10) = 0xffffffffffffffff;
    sVar1 = ::write(2,auVar5._8_8_,param_3);
    if (sVar1 != 0xffffffffffffffff) {
      uVar2 = 0;
      goto LAB_00a68b4c;
    }
    puVar3 = (uint *)__errno();
    unaff_w21 = *puVar3;
    unaff_x19 = param_3;
    if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) goto code_r0x00a68b78;
  }
  else {
    core::cell::panic_already_borrowed(&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afc848);
code_r0x00a68b78:
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  }
  uVar2 = (ulong)(unaff_w21 != 9);
  sVar1 = (ulong)unaff_w21 << 0x20 | 2;
  if (unaff_w21 == 9) {
    sVar1 = unaff_x19;
  }
LAB_00a68b4c:
  *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
  auVar6._8_8_ = sVar1;
  auVar6._0_8_ = uVar2;
  return auVar6;
}


// ===== 00a68ad0  <std::io::stdio::StderrLock_as_core::io::write::Write>::write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StderrLock as core::io::write::Write>::write */

undefined1  [16] __rustcall
<std::io::stdio::StderrLock_as_core::io::write::Write>::write
          (long *param_1,void *param_2,size_t param_3)

{
  size_t sVar1;
  ulong uVar2;
  uint *puVar3;
  size_t unaff_x19;
  long lVar4;
  uint unaff_w21;
  undefined1 auVar5 [16];
  
  lVar4 = *param_1;
  if (*(long *)(lVar4 + 0x10) == 0) {
    *(undefined8 *)(lVar4 + 0x10) = 0xffffffffffffffff;
    sVar1 = ::write(2,param_2,param_3);
    if (sVar1 != 0xffffffffffffffff) {
      uVar2 = 0;
      goto LAB_00a68b4c;
    }
    puVar3 = (uint *)__errno();
    unaff_w21 = *puVar3;
    unaff_x19 = param_3;
    if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) goto code_r0x00a68b78;
  }
  else {
    core::cell::panic_already_borrowed(&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afc848);
code_r0x00a68b78:
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  }
  uVar2 = (ulong)(unaff_w21 != 9);
  sVar1 = (ulong)unaff_w21 << 0x20 | 2;
  if (unaff_w21 == 9) {
    sVar1 = unaff_x19;
  }
LAB_00a68b4c:
  *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
  auVar5._8_8_ = sVar1;
  auVar5._0_8_ = uVar2;
  return auVar5;
}


// ===== 00a68b94  <std::io::stdio::StderrLock_as_core::io::write::Write>::write_all =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StderrLock as core::io::write::Write>::write_all */

ulong __rustcall <std::io::stdio::StderrLock_as_core::io::write::Write>::write_all(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (*(long *)(lVar3 + 0x10) != 0) {
    core::cell::panic_already_borrowed(&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afc860);
                    /* catch() { ... } // from try @ 00a68bb4 with catch @ 00a68bfc */
    *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 1;
                    /* WARNING: Subroutine does not return */
    FUN_00ab2530();
  }
  *(undefined8 *)(lVar3 + 0x10) = 0xffffffffffffffff;
                    /* try { // try from 00a68bb4 to 00a68bb7 has its CatchHandler @ 00a68bfc */
  uVar1 = FUN_00a6aea4();
  uVar2 = uVar1;
  if ((((uVar1 != 0) && (1 < (uVar1 & 3))) && ((uVar1 & 3) == 2)) && (uVar2 = 0, uVar1 >> 0x20 != 9)
     ) {
    uVar2 = uVar1;
  }
  *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 1;
  return uVar2;
}


// ===== 00a68c0c  FUN_00a68c0c =====

void FUN_00a68c0c(undefined4 *param_1,long param_2)

{
  undefined4 local_14;
  
  local_14 = *param_1;
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <i32_as_core::fmt::LowerHex>::fmt(&local_14);
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <i32_as_core::fmt::Display>::fmt();
    return;
  }
  <i32_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 00a68c60  <alloc::boxed::Box<std::path::Path>as_core::convert::From<&mut{backref_13}>>::from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::boxed::Box<std::path::Path> as core::convert::From<&mut {backref 13}>>::from */

undefined1  [16] __rustcall
<alloc::boxed::Box<std::path::Path>as_core::convert::From<&mut{backref_13}>>::from
          (void *param_1,size_t param_2)

{
  undefined1 *__dest;
  undefined1 auVar1 [16];
  
  if (param_2 == 0) {
    __dest = &DAT_00000001;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    __dest = (undefined1 *)FUN_004b25a4(param_2,1);
    if (__dest == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(1,param_2);
    }
  }
  memcpy(__dest,param_1,param_2);
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = __dest;
  return auVar1;
}


// ===== 00a68ccc  <std::io::stdio::StderrLock_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StderrLock as core::fmt::Debug>::fmt */

void __rustcall
<std::io::stdio::StderrLock_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,&DAT_00383a9f,10);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish_non_exhaustive(auStack_20);
  return;
}


// ===== 00a68d04  FUN_00a68d04  [FAILED] =====
/* decompilation failed: 
Recoverable Error: Unable to find unique hash for varnode */

// ===== 00a6945c  <std::sys::fs::unix::File_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::fs::unix::File as core::fmt::Debug>::fmt */

void __rustcall
<std::sys::fs::unix::File_as_core::fmt::Debug>::fmt(undefined4 *param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  FUN_00a515f4(auStack_20,*param_1,param_2,&DAT_002bd008,4);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish(auStack_20);
  return;
}


// ===== 00a6949c  <std::sync::mpsc::RecvTimeoutError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sync::mpsc::RecvTimeoutError as core::fmt::Display>::fmt */

void __rustcall
<std::sync::mpsc::RecvTimeoutError_as_core::fmt::Display>::fmt(char *param_1,undefined8 param_2)

{
  if (*param_1 == '\x01') {
    <str_as_core::fmt::Display>::fmt(&DAT_00383ac5,0x2b,param_2);
    return;
  }
  <str_as_core::fmt::Display>::fmt(&DAT_00383aa9,0x1c,param_2);
  return;
}


// ===== 00a694cc  <std::sys::fs::unix::Mode_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::fs::unix::Mode as core::fmt::Debug>::fmt */

undefined8 __rustcall
<std::sys::fs::unix::Mode_as_core::fmt::Debug>::fmt(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  uint local_44;
  uint *local_40;
  undefined *puStack_38;
  
  local_44 = *param_1;
  local_40 = &local_44;
  puStack_38 = PTR_fmt_00b00da0;
  uVar4 = core::fmt::write(*param_2,param_2[1],&DAT_00383af0,&local_40);
  if ((uVar4 & 1) != 0) {
    return 1;
  }
  uVar1 = (local_44 & 0xf000) - 0x1000 >> 0xc;
  if (uVar1 < 5) {
    if (uVar1 == 0) {
      uVar8 = 0x70;
      uVar4 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2," (",2);
      goto joined_r0x00a695b4;
    }
    if (uVar1 == 1) {
      uVar8 = 99;
      uVar4 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2," (",2);
      goto joined_r0x00a695b4;
    }
    if (uVar1 != 3) {
      return 0;
    }
    uVar8 = 100;
    bVar2 = true;
    uVar4 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2," (",2);
  }
  else {
    if (uVar1 == 9) {
      uVar8 = 0x6c;
      uVar4 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2," (",2);
    }
    else if (uVar1 == 7) {
      uVar8 = 0x2d;
      uVar4 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2," (",2);
    }
    else {
      if (uVar1 != 5) {
        return 0;
      }
      uVar8 = 0x62;
      uVar4 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2," (",2);
    }
joined_r0x00a695b4:
    bVar2 = false;
  }
  if ((uVar4 & 1) != 0) {
    return 1;
  }
  uVar4 = <core::fmt::Formatter_as_core::fmt::Write>::write_char(param_2,uVar8);
  if ((uVar4 & 1) != 0) {
    return 1;
  }
  uVar6 = 0x2d;
  uVar5 = uVar6;
  if ((local_44 & 0x100) != 0) {
    uVar5 = 0x72;
  }
  uVar4 = <core::fmt::Formatter_as_core::fmt::Write>::write_char(param_2,uVar5);
  if ((uVar4 & 1) != 0) {
    return 1;
  }
  if ((local_44 & 0x80) != 0) {
    uVar6 = 0x77;
  }
  uVar4 = <core::fmt::Formatter_as_core::fmt::Write>::write_char(param_2,uVar6);
  uVar1 = local_44;
  if ((uVar4 & 1) != 0) {
    return 1;
  }
  bVar3 = (local_44 & 0x800) != 0;
  uVar6 = 0x2d;
  uVar5 = uVar6;
  if (bVar3) {
    uVar5 = 0x53;
  }
  uVar7 = 0x78;
  if (bVar3) {
    uVar7 = 0x73;
  }
  if ((local_44 & 0x40) != 0) {
    uVar5 = uVar7;
  }
  uVar4 = <core::fmt::Formatter_as_core::fmt::Write>::write_char(param_2,uVar5);
  if ((uVar4 & 1) != 0) {
    return 1;
  }
  if ((local_44 & 0x20) != 0) {
    uVar6 = 0x72;
  }
  uVar4 = <core::fmt::Formatter_as_core::fmt::Write>::write_char(param_2,uVar6);
  if ((uVar4 & 1) != 0) {
    return 1;
  }
  uVar6 = 0x2d;
  uVar5 = uVar6;
  if ((local_44 & 0x10) != 0) {
    uVar5 = 0x77;
  }
  uVar4 = <core::fmt::Formatter_as_core::fmt::Write>::write_char(param_2,uVar5);
  if ((uVar4 & 1) != 0) {
    return 1;
  }
  bVar3 = (uVar1 & 0x400) != 0;
  uVar5 = uVar6;
  if (bVar3) {
    uVar5 = 0x53;
  }
  uVar7 = 0x78;
  if (bVar3) {
    uVar7 = 0x73;
  }
  if ((local_44 & 8) != 0) {
    uVar5 = uVar7;
  }
  uVar4 = <core::fmt::Formatter_as_core::fmt::Write>::write_char(param_2,uVar5);
  if ((uVar4 & 1) != 0) {
    return 1;
  }
  uVar5 = uVar6;
  if ((local_44 & 4) != 0) {
    uVar5 = 0x72;
  }
  uVar4 = <core::fmt::Formatter_as_core::fmt::Write>::write_char(param_2,uVar5);
  if ((uVar4 & 1) != 0) {
    return 1;
  }
  if ((local_44 & 2) != 0) {
    uVar6 = 0x77;
  }
  uVar4 = <core::fmt::Formatter_as_core::fmt::Write>::write_char(param_2,uVar6);
  if ((uVar4 & 1) != 0) {
    return 1;
  }
  if (bVar2) {
    if ((local_44 & 1) == 0) {
      uVar5 = 0x2d;
      if ((uVar1 & 0x200) != 0) {
        uVar5 = 0x54;
      }
      goto LAB_00a69890;
    }
    if ((uVar1 >> 9 & 1) != 0) {
      uVar5 = 0x74;
      goto LAB_00a69890;
    }
  }
  else if ((local_44 & 1) == 0) {
    uVar5 = 0x2d;
    goto LAB_00a69890;
  }
  uVar5 = 0x78;
LAB_00a69890:
  uVar4 = <core::fmt::Formatter_as_core::fmt::Write>::write_char(param_2,uVar5);
  if ((uVar4 & 1) == 0) {
    uVar8 = <core::fmt::Formatter_as_core::fmt::Write>::write_char(param_2,0x29);
    return uVar8;
  }
  return 1;
}


// ===== 00a698d4  <std::fs::FileType_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::fs::FileType as core::fmt::Debug>::fmt */

void __rustcall <std::fs::FileType_as_core::fmt::Debug>::fmt(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [20];
  undefined1 local_2c [4];
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_40,param_2,&DAT_002a1780,8);
  uVar1 = *param_1 & 0xf000;
  local_2c[0] = uVar1 == 0x8000;
  uVar2 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (auStack_40,"is_file",7,local_2c,&DAT_00afb940);
  local_28[0] = uVar1 == 0x4000;
  uVar2 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (uVar2,"is_dir",6,local_28,&DAT_00afb940);
  local_24[0] = uVar1 == 0xa000;
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (uVar2,"is_symlink",10,local_24,&DAT_00afb940);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish_non_exhaustive();
  return;
}


// ===== 00a69998  <std::process::Stdio_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::process::Stdio as core::fmt::Debug>::fmt */

void __rustcall
<std::process::Stdio_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,"Stdio",5);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish_non_exhaustive(auStack_20);
  return;
}


// ===== 00a699d0  <std::io::stdio::StdinLock_as_std::sys::io::kernel_copy::linux::CopyRead>::properties =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StdinLock as std::sys::io::kernel_copy::linux::CopyRead>::properties */

void __rustcall
<std::io::stdio::StdinLock_as_std::sys::io::kernel_copy::linux::CopyRead>::properties
          (undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **extraout_x9;
  __ino_t local_120;
  __nlink_t _Stack_118;
  __mode_t _Stack_110;
  __uid_t _Stack_10c;
  __gid_t _Stack_108;
  int iStack_104;
  __dev_t local_100;
  __off_t _Stack_f8;
  __blksize_t _Stack_f0;
  __blkcnt_t _Stack_e8;
  __time_t local_e0;
  long lStack_d8;
  __time_t _Stack_d0;
  long lStack_c8;
  __time_t local_c0;
  long lStack_b8;
  long local_b0;
  undefined **local_a0;
  __ino_t _Stack_98;
  __nlink_t _Stack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  __dev_t _Stack_78;
  __off_t _Stack_70;
  __blksize_t _Stack_68;
  __blkcnt_t local_60;
  __time_t _Stack_58;
  long lStack_50;
  __time_t _Stack_48;
  long local_40;
  __time_t _Stack_38;
  long lStack_30;
  long local_28;
  
  _Stack_98 = 0;
  local_a0 = (undefined **)0x0;
  uStack_88._0_4_ = 0;
  uStack_88._4_4_ = 0;
  _Stack_90 = 0;
  _Stack_78 = 0;
  local_80._0_4_ = 0;
  local_80._4_4_ = 0;
  _Stack_68 = 0;
  _Stack_70 = 0;
  _Stack_58 = 0;
  local_60 = 0;
  _Stack_48 = 0;
  lStack_50 = 0;
  _Stack_38 = 0;
  local_40 = 0;
  local_28 = 0;
  lStack_30 = 0;
  iVar1 = fstat(0,(stat *)&local_a0);
  if (iVar1 == -1) {
    __errno();
    ppuVar3 = &PTR_FUN_00afaaf8;
    if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
      ppuVar3 = extraout_x9;
    }
    uVar2 = 3;
  }
  else {
    uVar2 = 0;
    local_b0 = local_28;
    lStack_d8 = lStack_50;
    local_e0 = _Stack_58;
    lStack_c8 = local_40;
    _Stack_d0 = _Stack_48;
    lStack_b8 = lStack_30;
    local_c0 = _Stack_38;
    _Stack_118 = _Stack_90;
    local_120 = _Stack_98;
    _Stack_108 = (__gid_t)local_80;
    iStack_104 = local_80._4_4_;
    _Stack_110 = (__mode_t)uStack_88;
    _Stack_10c = uStack_88._4_4_;
    _Stack_f8 = _Stack_70;
    local_100 = _Stack_78;
    _Stack_e8 = local_60;
    _Stack_f0 = _Stack_68;
    ppuVar3 = local_a0;
  }
  *param_1 = uVar2;
  param_1[1] = ppuVar3;
  param_1[0xf] = lStack_b8;
  param_1[0xe] = local_c0;
  param_1[0xb] = lStack_d8;
  param_1[10] = local_e0;
  param_1[0xd] = lStack_c8;
  param_1[0xc] = _Stack_d0;
  param_1[0x10] = local_b0;
  param_1[3] = _Stack_118;
  param_1[2] = local_120;
  param_1[5] = __Stack_108;
  param_1[4] = __Stack_110;
  param_1[7] = _Stack_f8;
  param_1[6] = local_100;
  param_1[9] = _Stack_e8;
  param_1[8] = _Stack_f0;
  param_1[0x11] = DAT_002a14c8;
  return;
}


// ===== 00a69acc  <std::fs::ReadDir_as_core::iter::traits::iterator::Iterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next */

void __rustcall
<std::fs::ReadDir_as_core::iter::traits::iterator::Iterator>::next(undefined8 *param_1)

{
  long local_70;
  long local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  <std::sys::fs::unix::ReadDir_as_core::iter::traits::iterator::Iterator>::next(&local_70);
  if (local_70 == 1) {
    if (local_68 != 0) {
      uStack_38 = uStack_50;
      local_40 = local_58;
      local_30 = local_48;
    }
    param_1[2] = uStack_60;
    param_1[1] = local_68;
    param_1[4] = uStack_38;
    param_1[3] = local_40;
    param_1[5] = local_30;
    *param_1 = 1;
    return;
  }
  *param_1 = 0;
  return;
}


// ===== 00a69b50  <std::io::stdio::StdoutLock_as_std::sys::io::kernel_copy::linux::CopyWrite>::properties =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StdoutLock as std::sys::io::kernel_copy::linux::CopyWrite>::properties */

void __rustcall
<std::io::stdio::StdoutLock_as_std::sys::io::kernel_copy::linux::CopyWrite>::properties
          (undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **extraout_x9;
  __ino_t local_120;
  __nlink_t _Stack_118;
  __mode_t _Stack_110;
  __uid_t _Stack_10c;
  __gid_t _Stack_108;
  int iStack_104;
  __dev_t local_100;
  __off_t _Stack_f8;
  __blksize_t _Stack_f0;
  __blkcnt_t _Stack_e8;
  __time_t local_e0;
  long lStack_d8;
  __time_t _Stack_d0;
  long lStack_c8;
  __time_t local_c0;
  long lStack_b8;
  long local_b0;
  undefined **local_a0;
  __ino_t _Stack_98;
  __nlink_t _Stack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  __dev_t _Stack_78;
  __off_t _Stack_70;
  __blksize_t _Stack_68;
  __blkcnt_t local_60;
  __time_t _Stack_58;
  long lStack_50;
  __time_t _Stack_48;
  long local_40;
  __time_t _Stack_38;
  long lStack_30;
  long local_28;
  
  _Stack_98 = 0;
  local_a0 = (undefined **)0x0;
  uStack_88._0_4_ = 0;
  uStack_88._4_4_ = 0;
  _Stack_90 = 0;
  _Stack_78 = 0;
  local_80._0_4_ = 0;
  local_80._4_4_ = 0;
  _Stack_68 = 0;
  _Stack_70 = 0;
  _Stack_58 = 0;
  local_60 = 0;
  _Stack_48 = 0;
  lStack_50 = 0;
  _Stack_38 = 0;
  local_40 = 0;
  local_28 = 0;
  lStack_30 = 0;
  iVar1 = fstat(1,(stat *)&local_a0);
  if (iVar1 == -1) {
    __errno();
    ppuVar3 = &PTR_FUN_00afaaf8;
    if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
      ppuVar3 = extraout_x9;
    }
    uVar2 = 3;
  }
  else {
    uVar2 = 0;
    local_b0 = local_28;
    lStack_d8 = lStack_50;
    local_e0 = _Stack_58;
    lStack_c8 = local_40;
    _Stack_d0 = _Stack_48;
    lStack_b8 = lStack_30;
    local_c0 = _Stack_38;
    _Stack_118 = _Stack_90;
    local_120 = _Stack_98;
    _Stack_108 = (__gid_t)local_80;
    iStack_104 = local_80._4_4_;
    _Stack_110 = (__mode_t)uStack_88;
    _Stack_10c = uStack_88._4_4_;
    _Stack_f8 = _Stack_70;
    local_100 = _Stack_78;
    _Stack_e8 = local_60;
    _Stack_f0 = _Stack_68;
    ppuVar3 = local_a0;
  }
  *param_1 = uVar2;
  param_1[1] = ppuVar3;
  param_1[0xf] = lStack_b8;
  param_1[0xe] = local_c0;
  param_1[0xb] = lStack_d8;
  param_1[10] = local_e0;
  param_1[0xd] = lStack_c8;
  param_1[0xc] = _Stack_d0;
  param_1[0x10] = local_b0;
  param_1[3] = _Stack_118;
  param_1[2] = local_120;
  param_1[5] = __Stack_108;
  param_1[4] = __Stack_110;
  param_1[7] = _Stack_f8;
  param_1[6] = local_100;
  param_1[9] = _Stack_e8;
  param_1[8] = _Stack_f0;
  param_1[0x11] = 0x100000001;
  return;
}


// ===== 00a69c48  FUN_00a69c48 =====

ulong FUN_00a69c48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_40;
  ulong local_38;
  undefined1 local_30;
  long local_28;
  
  local_38 = 0;
  local_40 = param_1;
                    /* try { // try from 00a69c64 to 00a69c73 has its CatchHandler @ 00a69cf8 */
  iVar1 = core::fmt::write(&local_40,&PTR_FUN_00afaa08,param_2,param_3);
  if (iVar1 == 0) {
    if (local_38 != 0) {
      if ((1 < (local_38 & 3) - 2) && ((local_38 & 3) != 0)) {
        local_28 = local_38 - 1;
        local_30 = 3;
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
      }
      return 0;
    }
  }
  else if (local_38 == 0) {
                    /* try { // try from 00a69cdc to 00a69cf3 has its CatchHandler @ 00a69cf8 */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_00382152,0xad,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afa9f0);
  }
  return local_38;
}


// ===== 00a69d10  FUN_00a69d10 =====

void FUN_00a69d10(undefined8 *param_1,long *param_2,char param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  
  if (param_3 == '\b') {
    puVar4 = (uint *)*param_2;
    if (7 < (ulong)param_2[1]) {
      uVar3 = puVar4[1];
      uVar1 = *puVar4;
      bVar2 = *(byte *)((long)puVar4 + 7);
      *param_2 = (long)(puVar4 + 2);
      param_2[1] = param_2[1] - 8;
      param_1[1] = ((ulong)uVar1 << 8 | (ulong)(uint3)uVar3 << 0x28) >> 8 | (ulong)bVar2 << 0x38;
      *(undefined1 *)param_1 = 0xff;
      return;
    }
  }
  else {
    puVar4 = (uint *)*param_2;
    if (3 < (ulong)param_2[1]) {
      uVar1 = *puVar4;
      *param_2 = (long)(puVar4 + 1);
      param_2[1] = param_2[1] - 4;
      param_1[1] = (ulong)uVar1;
      *(undefined1 *)param_1 = 0xff;
      return;
    }
  }
  *param_1 = 0x11;
  param_1[1] = puVar4;
  return;
}


// ===== 00a69d98  FUN_00a69d98 =====

void FUN_00a69d98(undefined1 *param_1,long *param_2)

{
  byte *pbVar1;
  long lVar2;
  ulong uVar3;
  byte bVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  byte *pbVar8;
  
  pbVar1 = (byte *)*param_2;
  lVar2 = param_2[1];
  if (lVar2 == 0) {
    param_1[1] = 0;
    *param_1 = 0x11;
    *(byte **)(param_1 + 8) = pbVar1;
    return;
  }
  lVar7 = lVar2 + -1;
  pbVar8 = pbVar1 + 1;
  bVar4 = *pbVar1;
  uVar3 = (ulong)bVar4 & 0x7f;
  if ((char)bVar4 < '\0') {
    if (lVar7 == 0) {
LAB_00a69f50:
      *param_2 = (long)(pbVar1 + lVar2);
      param_2[1] = 0;
      param_1[1] = bVar4;
      *param_1 = 0x11;
      *(byte **)(param_1 + 8) = pbVar1 + lVar2;
      return;
    }
    bVar4 = pbVar1[1];
    lVar7 = lVar2 + -2;
    uVar3 = uVar3 | ((ulong)bVar4 & 0x7f) << 7;
    if ((char)bVar4 < '\0') {
      if (lVar7 == 0) goto LAB_00a69f50;
      bVar4 = pbVar1[2];
      lVar7 = lVar2 + -3;
      uVar3 = uVar3 | ((ulong)bVar4 & 0x7f) << 0xe;
      if ((char)bVar4 < '\0') {
        if (lVar7 == 0) goto LAB_00a69f50;
        bVar4 = pbVar1[3];
        lVar7 = lVar2 + -4;
        uVar3 = uVar3 | ((ulong)bVar4 & 0x7f) << 0x15;
        if ((char)bVar4 < '\0') {
          if (lVar7 == 0) goto LAB_00a69f50;
          bVar4 = pbVar1[4];
          lVar7 = lVar2 + -5;
          uVar3 = uVar3 | ((ulong)bVar4 & 0x7f) << 0x1c;
          if ((char)bVar4 < '\0') {
            if (lVar7 == 0) goto LAB_00a69f50;
            bVar4 = pbVar1[5];
            lVar7 = lVar2 + -6;
            uVar3 = uVar3 | (ulong)((int)(char)bVar4 & 0x7f) << 0x23;
            if ((char)bVar4 < '\0') {
              if (lVar7 == 0) goto LAB_00a69f50;
              bVar4 = pbVar1[6];
              lVar7 = lVar2 + -7;
              uVar3 = uVar3 | (ulong)((int)(char)bVar4 & 0x7f) << 0x2a;
              if ((char)bVar4 < '\0') {
                if (lVar7 == 0) goto LAB_00a69f50;
                bVar4 = pbVar1[7];
                lVar7 = lVar2 + -8;
                uVar3 = uVar3 | (ulong)((int)(char)bVar4 & 0x7f) << 0x31;
                if ((char)bVar4 < '\0') {
                  if (lVar7 == 0) goto LAB_00a69f50;
                  bVar4 = pbVar1[8];
                  pbVar8 = pbVar1 + 9;
                  lVar7 = lVar2 + -9;
                  uVar3 = uVar3 | (ulong)((int)(char)bVar4 & 0x7f) << 0x38;
                  if ((char)bVar4 < '\0') {
                    if (lVar7 == 0) goto LAB_00a69f50;
                    bVar4 = *pbVar8;
                    *param_2 = (long)(pbVar1 + 10);
                    param_2[1] = lVar2 + -10;
                    if ((bVar4 != 0x7f) && (bVar4 != 0)) {
                      *param_1 = 7;
                      return;
                    }
                    uVar3 = uVar3 | (ulong)bVar4 << 0x3f;
                    uVar5 = 0x46;
                    goto LAB_00a69dc0;
                  }
                  uVar5 = 0x3f;
                }
                else {
                  pbVar8 = pbVar1 + 8;
                  uVar5 = 0x38;
                }
              }
              else {
                pbVar8 = pbVar1 + 7;
                uVar5 = 0x31;
              }
            }
            else {
              pbVar8 = pbVar1 + 6;
              uVar5 = 0x2a;
            }
          }
          else {
            pbVar8 = pbVar1 + 5;
            uVar5 = 0x23;
          }
        }
        else {
          pbVar8 = pbVar1 + 4;
          uVar5 = 0x1c;
        }
      }
      else {
        pbVar8 = pbVar1 + 3;
        uVar5 = 0x15;
      }
    }
    else {
      pbVar8 = pbVar1 + 2;
      uVar5 = 0xe;
    }
  }
  else {
    uVar5 = 7;
  }
  *param_2 = (long)pbVar8;
  param_2[1] = lVar7;
LAB_00a69dc0:
  uVar6 = -1L << (uVar5 & 0x3f);
  if (0x3f < (uint)uVar5 || bVar4 < 0x40) {
    uVar6 = 0;
  }
  *(ulong *)(param_1 + 8) = uVar6 | uVar3;
  *param_1 = 0xff;
  return;
}


// ===== 00a69f78  FUN_00a69f78 =====

void FUN_00a69f78(undefined1 *param_1,long *param_2)

{
  char *pcVar1;
  long lVar2;
  byte bVar3;
  char cVar4;
  ulong uVar5;
  long lVar6;
  char *pcVar7;
  
  pcVar1 = (char *)*param_2;
  lVar2 = param_2[1];
  if (lVar2 == 0) {
    *(char **)(param_1 + 8) = pcVar1;
    *param_1 = 0x11;
    return;
  }
  uVar5 = (ulong)*pcVar1;
  *param_2 = (long)(pcVar1 + 1);
  param_2[1] = lVar2 + -1;
  if (-1 < (long)uVar5) {
    *(ulong *)(param_1 + 8) = uVar5;
    *param_1 = 0xff;
    return;
  }
  if (lVar2 + -1 == 0) {
    param_1[1] = 0;
    *param_1 = 0x11;
    *(char **)(param_1 + 8) = pcVar1 + 1;
    return;
  }
  cVar4 = pcVar1[1];
  uVar5 = uVar5 & 0x7f | (ulong)((int)cVar4 & 0x7f) << 7;
  lVar6 = lVar2 + -2;
  if (-1 < cVar4) {
    pcVar7 = pcVar1 + 2;
    goto LAB_00a69fd4;
  }
  if (lVar6 != 0) {
    cVar4 = pcVar1[2];
    uVar5 = uVar5 | (ulong)((int)cVar4 & 0x7f) << 0xe;
    if (-1 < cVar4) {
      *param_2 = (long)(pcVar1 + 3);
      param_2[1] = lVar2 + -3;
      *(ulong *)(param_1 + 8) = uVar5;
      *param_1 = 0xff;
      return;
    }
    if (lVar2 + -3 != 0) {
      cVar4 = pcVar1[3];
      uVar5 = uVar5 | (ulong)((int)cVar4 & 0x7f) << 0x15;
      if (-1 < cVar4) {
        *param_2 = (long)(pcVar1 + 4);
        param_2[1] = lVar2 + -4;
        *(ulong *)(param_1 + 8) = uVar5;
        *param_1 = 0xff;
        return;
      }
      if (lVar2 + -4 != 0) {
        cVar4 = pcVar1[4];
        uVar5 = uVar5 | (ulong)((int)cVar4 & 0x7f) << 0x1c;
        if (-1 < cVar4) {
          *param_2 = (long)(pcVar1 + 5);
          param_2[1] = lVar2 + -5;
          *(ulong *)(param_1 + 8) = uVar5;
          *param_1 = 0xff;
          return;
        }
        if (lVar2 + -5 != 0) {
          cVar4 = pcVar1[5];
          uVar5 = uVar5 | (ulong)((int)cVar4 & 0x7f) << 0x23;
          if (-1 < cVar4) {
            *param_2 = (long)(pcVar1 + 6);
            param_2[1] = lVar2 + -6;
            *(ulong *)(param_1 + 8) = uVar5;
            *param_1 = 0xff;
            return;
          }
          if (lVar2 + -6 != 0) {
            cVar4 = pcVar1[6];
            uVar5 = uVar5 | (ulong)((int)cVar4 & 0x7f) << 0x2a;
            if (-1 < cVar4) {
              *param_2 = (long)(pcVar1 + 7);
              param_2[1] = lVar2 + -7;
              *(ulong *)(param_1 + 8) = uVar5;
              *param_1 = 0xff;
              return;
            }
            if (lVar2 + -7 != 0) {
              cVar4 = pcVar1[7];
              pcVar7 = pcVar1 + 8;
              uVar5 = uVar5 | (ulong)((int)cVar4 & 0x7f) << 0x31;
              lVar6 = lVar2 + -8;
              if (cVar4 < 0) {
                if (lVar6 == 0) goto LAB_00a6a158;
                cVar4 = *pcVar7;
                pcVar7 = pcVar1 + 9;
                uVar5 = uVar5 | (ulong)((int)cVar4 & 0x7f) << 0x38;
                lVar6 = lVar2 + -9;
                if (cVar4 < 0) {
                  *param_2 = (long)pcVar7;
                  param_2[1] = lVar6;
                  if (lVar6 == 0) {
                    *(char **)(param_1 + 8) = pcVar7;
                    *param_1 = 0x11;
                    return;
                  }
                  bVar3 = pcVar1[9];
                  *param_2 = (long)(pcVar1 + 10);
                  param_2[1] = lVar2 + -10;
                  if ((ulong)bVar3 < 2) {
                    *param_1 = 0xff;
                    *(ulong *)(param_1 + 8) = uVar5 | (ulong)bVar3 << 0x3f;
                    return;
                  }
                  *param_1 = 6;
                  return;
                }
              }
LAB_00a69fd4:
              *param_2 = (long)pcVar7;
              param_2[1] = lVar6;
              *(ulong *)(param_1 + 8) = uVar5;
              *param_1 = 0xff;
              return;
            }
          }
        }
      }
    }
  }
LAB_00a6a158:
  *param_2 = (long)(pcVar1 + lVar2);
  param_2[1] = 0;
  param_1[1] = cVar4;
  *param_1 = 0x11;
  *(char **)(param_1 + 8) = pcVar1 + lVar2;
  return;
}


// ===== 00a6a190  FUN_00a6a190 =====

void FUN_00a6a190(ulong *param_1,ulong *param_2,ulong param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint *puVar5;
  
  uVar2 = (uint)param_3;
  uVar3 = uVar2 - 1;
  uVar4 = (ulong)uVar3;
  if (((uVar2 ^ uVar3) & 0xff) <= (uVar3 & 0xff)) {
LAB_00a6a1f0:
    *param_1 = (param_3 & 0xff) << 8 | 0x15;
    param_1[1] = uVar4;
    return;
  }
  uVar3 = (uVar2 & 0xaaaaaaaa) >> 1 | (uVar2 & 0x55555555) << 1;
  uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
  uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  uVar4 = LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10);
  uVar3 = (uint)uVar4;
  if (uVar3 < 2) {
    if (uVar3 == 0) {
      puVar5 = (uint *)*param_2;
      if (param_2[1] != 0) {
        uVar3 = *puVar5;
        *param_2 = (long)puVar5 + 1;
        param_2[1] = param_2[1] - 1;
        param_1[1] = (ulong)(byte)uVar3;
        *(undefined1 *)param_1 = 0xff;
        return;
      }
    }
    else {
      if (uVar3 != 1) goto LAB_00a6a1f0;
      puVar5 = (uint *)*param_2;
      if (1 < param_2[1]) {
        uVar3 = *puVar5;
        *param_2 = (long)puVar5 + 2;
        param_2[1] = param_2[1] - 2;
        param_1[1] = (ulong)(ushort)uVar3;
        *(undefined1 *)param_1 = 0xff;
        return;
      }
    }
  }
  else if (uVar3 == 2) {
    puVar5 = (uint *)*param_2;
    if (3 < param_2[1]) {
      uVar3 = *puVar5;
      *param_2 = (ulong)(puVar5 + 1);
      param_2[1] = param_2[1] - 4;
      param_1[1] = (ulong)uVar3;
      *(undefined1 *)param_1 = 0xff;
      return;
    }
  }
  else {
    if (uVar3 != 3) goto LAB_00a6a1f0;
    puVar5 = (uint *)*param_2;
    if (7 < param_2[1]) {
      uVar2 = puVar5[1];
      uVar3 = *puVar5;
      bVar1 = *(byte *)((long)puVar5 + 7);
      *param_2 = (ulong)(puVar5 + 2);
      param_2[1] = param_2[1] - 8;
      param_1[1] = ((ulong)uVar3 << 8 | (ulong)(uint3)uVar2 << 0x28) >> 8 | (ulong)bVar1 << 0x38;
      *(undefined1 *)param_1 = 0xff;
      return;
    }
  }
  *param_1 = 0x11;
  param_1[1] = (ulong)puVar5;
  return;
}


// ===== 00a6a2b0  FUN_00a6a2b0 =====

ulong FUN_00a6a2b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_40;
  ulong local_38;
  undefined1 local_30;
  long local_28;
  
  local_38 = 0;
  local_40 = param_1;
                    /* try { // try from 00a6a2cc to 00a6a2db has its CatchHandler @ 00a6a360 */
  iVar1 = core::fmt::write(&local_40,&PTR_FUN_00afa9c0,param_2,param_3);
  if (iVar1 == 0) {
    if (local_38 != 0) {
      if ((1 < (local_38 & 3) - 2) && ((local_38 & 3) != 0)) {
        local_28 = local_38 - 1;
        local_30 = 3;
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
      }
      return 0;
    }
  }
  else if (local_38 == 0) {
                    /* try { // try from 00a6a344 to 00a6a35b has its CatchHandler @ 00a6a360 */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_00382152,0xad,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afa9f0);
  }
  return local_38;
}


// ===== 00a6a378  FUN_00a6a378 =====

undefined8 FUN_00a6a378(void)

{
  return 0;
}


// ===== 00a6a380  FUN_00a6a380 =====

bool FUN_00a6a380(undefined8 *param_1,uint param_2)

{
  size_t __n;
  ulong uVar1;
  undefined1 uVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  uint local_54;
  undefined1 local_50;
  long local_48;
  
  uVar2 = (undefined1)param_2;
  if (param_2 < 0x80) {
    local_54 = param_2 & 0xff;
    uVar5 = 1;
  }
  else if (param_2 < 0x800) {
    uVar5 = 2;
    local_54 = CONCAT11(uVar2,(char)(param_2 >> 6)) & 0xffff3fff | 0x80c0;
  }
  else {
    bVar3 = (byte)(param_2 >> 6);
    if (param_2 >> 0x10 == 0) {
      local_54._0_2_ = (bVar3 & 0xff3f | 0x80) << 8;
      uVar5 = 3;
      local_54 = CONCAT31(CONCAT12(uVar2,(short)local_54) >> 8,(char)(param_2 >> 0xc)) & 0x3fffff |
                 0x8000e0;
    }
    else {
      uVar5 = 4;
      local_54 = CONCAT31(CONCAT21(CONCAT11(uVar2,bVar3),(char)(param_2 >> 0xc)),
                          (char)(param_2 >> 0x12)) & 0x3f3f3fff | 0x808080f0;
    }
  }
  plVar7 = (long *)*param_1;
  uVar6 = plVar7[1];
  uVar1 = plVar7[2];
  uVar4 = uVar6;
  if (uVar1 <= uVar6) {
    uVar4 = uVar1;
  }
  uVar6 = uVar6 - uVar4;
  __n = uVar6;
  if (uVar5 <= uVar6) {
    __n = uVar5;
  }
  memcpy((void *)(*plVar7 + uVar4),&local_54,__n);
  plVar7[2] = __n + uVar1;
  if (uVar6 < uVar5) {
    uVar4 = param_1[1];
    if (((uVar4 != 0) && (1 < (uVar4 & 3) - 2)) && ((uVar4 & 3) != 0)) {
      local_48 = uVar4 - 1;
      local_50 = 3;
                    /* try { // try from 00a6a49c to 00a6a4a3 has its CatchHandler @ 00a6a4d0 */
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_48);
    }
    param_1[1] = &PTR_DAT_00afb878;
  }
  return uVar6 < uVar5;
}


// ===== 00a6a4e0  FUN_00a6a4e0 =====

void FUN_00a6a4e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  core::fmt::write(param_1,&PTR_FUN_00afa9c0,param_2,param_3);
  return;
}


// ===== 00a6a4f4  FUN_00a6a4f4 =====

undefined8 FUN_00a6a4f4(undefined8 *param_1,uint param_2)

{
  undefined1 uVar1;
  byte bVar2;
  ulong __n;
  long *plVar3;
  long lVar4;
  uint local_14;
  
  uVar1 = (undefined1)param_2;
  if (param_2 < 0x80) {
    local_14 = param_2 & 0xff;
    __n = 1;
  }
  else if (param_2 < 0x800) {
    __n = 2;
    local_14 = CONCAT11(uVar1,(char)(param_2 >> 6)) & 0xffff3fff | 0x80c0;
  }
  else {
    bVar2 = (byte)(param_2 >> 6);
    if (param_2 >> 0x10 == 0) {
      local_14._0_2_ = (bVar2 & 0xff3f | 0x80) << 8;
      __n = 3;
      local_14 = CONCAT31(CONCAT12(uVar1,(short)local_14) >> 8,(char)(param_2 >> 0xc)) & 0x3fffff |
                 0x8000e0;
    }
    else {
      __n = 4;
      local_14 = CONCAT31(CONCAT21(CONCAT11(uVar1,bVar2),(char)(param_2 >> 0xc)),
                          (char)(param_2 >> 0x12)) & 0x3f3f3fff | 0x808080f0;
    }
  }
  plVar3 = (long *)*param_1;
  lVar4 = plVar3[2];
  if ((ulong)(*plVar3 - lVar4) < __n) {
    FUN_00a29778(plVar3,lVar4,__n,1,1);
    lVar4 = plVar3[2];
  }
  memcpy((void *)(plVar3[1] + lVar4),&local_14,__n);
  plVar3[2] = lVar4 + __n;
  return 0;
}


// ===== 00a6a5fc  FUN_00a6a5fc =====

void FUN_00a6a5fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  core::fmt::write(param_1,&PTR_FUN_00afaa08,param_2,param_3);
  return;
}


// ===== 00a6a610  FUN_00a6a610 =====

void FUN_00a6a610(undefined8 param_1,uint param_2)

{
  byte bVar1;
  undefined1 uVar2;
  uint local_14;
  
  if (param_2 < 0x80) {
    local_14 = param_2 & 0xff;
    FUN_00a58d68(param_1,&local_14,1);
    return;
  }
  uVar2 = (undefined1)param_2;
  if (param_2 < 0x800) {
    local_14 = (CONCAT11(uVar2,(char)(param_2 >> 6)) & 0x3fff | 0x8000) | 0xc0;
    FUN_00a58d68(param_1,&local_14,2);
    return;
  }
  bVar1 = (byte)(param_2 >> 6);
  if (param_2 >> 0x10 == 0) {
    local_14._0_2_ = (bVar1 & 0xff3f | 0x80) << 8;
    local_14 = CONCAT31(CONCAT12(uVar2,(short)local_14) >> 8,(char)(param_2 >> 0xc)) & 0x3fffff |
               0x8000e0;
    FUN_00a58d68(param_1,&local_14,3);
    return;
  }
  local_14 = CONCAT31(CONCAT21(CONCAT11(uVar2,bVar1),(char)(param_2 >> 0xc)),(char)(param_2 >> 0x12)
                     ) & 0x3f3f3fff | 0x808080f0;
  FUN_00a58d68(param_1,&local_14,4);
  return;
}


