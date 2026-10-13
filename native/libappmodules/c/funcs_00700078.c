// ===== 00700078  <std::sys::time::unix::Instant_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::time::unix::Instant as core::fmt::Debug>::fmt */

void __rustcall
<std::sys::time::unix::Instant_as_core::fmt::Debug>::fmt(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_30 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,&DAT_0045c325,7);
  uVar1 = <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
                    (auStack_30,&DAT_0045c32c,6,param_1,&DAT_00978560);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
            (uVar1,&DAT_0045c332,7,param_1 + 8,&DAT_00978580);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 007000f8  <std::sys::os_str::bytes::Buf_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::os_str::bytes::Buf as core::fmt::Display>::fmt */

void __rustcall
<std::sys::os_str::bytes::Buf_as_core::fmt::Display>::fmt(long param_1,undefined8 param_2)

{
  <core::bstr::ByteStr_as_core::fmt::Display>::fmt
            (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_2);
  return;
}


// ===== 0070010c  <std::fs::File_as_std::io::Write>::write_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::fs::File as std::io::Write>::write_vectored */

undefined1  [16] __rustcall
<std::fs::File_as_std::io::Write>::write_vectored(int *param_1,iovec *param_2,ulong param_3)

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
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 007001a0  <std::os::unix::net::stream::UnixStream_as_std::io::Write>::write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::os::unix::net::stream::UnixStream as std::io::Write>::write */

undefined1  [16] __rustcall
<std::os::unix::net::stream::UnixStream_as_std::io::Write>::write
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
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 0070022c  <std::os::unix::net::ancillary::ScmCredentials_as_core::iter::traits::iterator::Iterator>::next =====

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


// ===== 00700268  <std::fs::Dir_as_std::os::fd::raw::FromRawFd>::from_raw_fd =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::fs::Dir as std::os::fd::raw::FromRawFd>::from_raw_fd */

void __rustcall <std::fs::Dir_as_std::os::fd::raw::FromRawFd>::from_raw_fd(int param_1)

{
  if (param_1 != -1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed(&DAT_00373580,8,&PTR_s__rustc_48a229ceaefd4985c50990b14_009785a0);
}


// ===== 00700294  <std::sys::net::connection::socket::LookupHost_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::net::connection::socket::LookupHost as core::ops::drop::Drop>::drop */

void __rustcall
<std::sys::net::connection::socket::LookupHost_as_core::ops::drop::Drop>::drop(undefined8 *param_1)

{
  freeaddrinfo((addrinfo *)*param_1);
  return;
}


// ===== 0070029c  <std::io::pipe::PipeReader_as_std::os::fd::owned::AsFd>::as_fd =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::pipe::PipeReader as std::os::fd::owned::AsFd>::as_fd */

undefined4 __rustcall
<std::io::pipe::PipeReader_as_std::os::fd::owned::AsFd>::as_fd(undefined4 *param_1)

{
  return *param_1;
}


// ===== 007002a4  <std::panicking::panic_handler::StaticStrPayload_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::panicking::panic_handler::StaticStrPayload as core::fmt::Display>::fmt */

void __rustcall
<std::panicking::panic_handler::StaticStrPayload_as_core::fmt::Display>::fmt
          (undefined8 *param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,*param_1,param_1[1]);
  return;
}


// ===== 007002b4  <std::env::VarsOs_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::env::VarsOs as core::fmt::Debug>::fmt */

void __rustcall <std::env::VarsOs_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_30 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,&DAT_0045c339,6);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
            (auStack_30,&DAT_0045c1bf,5,param_1,&PTR_FUN_00978430);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 00700318  <std::time::Instant_as_core::ops::arith::Sub>::sub =====

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
  FUN_006d62cc(local_28,&local_48,&local_38);
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


// ===== 00700368  <&std::io::pipe::PipeWriter_as_std::io::Write>::write_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::io::pipe::PipeWriter as std::io::Write>::write_vectored */

undefined1  [16] __rustcall
<&std::io::pipe::PipeWriter_as_std::io::Write>::write_vectored
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
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 00700400  <&std::process::ChildStdin_as_std::io::Write>::write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::process::ChildStdin as std::io::Write>::write */

undefined1  [16] __rustcall
<&std::process::ChildStdin_as_std::io::Write>::write
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
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 0070048c  <std::backtrace_rs::symbolize::SymbolName_as_core::fmt::Debug>::fmt =====

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
      uVar3 = <str_as_core::fmt::Debug>::fmt(&DAT_0045b7d5,3,param_2);
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
                  (uVar7,uVar5,uVar5,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977da8);
      }
      lVar6 = lVar6 + uVar7;
      uVar5 = uVar3;
    } while (uVar3 != 0);
  }
  return 0;
}


// ===== 00700590  <std::io::stdio::Stdin_as_std::io::Read>::read_exact =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::Stdin as std::io::Read>::read_exact */

undefined8 __rustcall
<std::io::stdio::Stdin_as_std::io::Read>::read_exact
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
      uVar7 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
      puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
      goto joined_r0x0070069c;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
    if (bVar3) {
      *piVar8 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar7 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
  puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
joined_r0x0070069c:
  PTR_GLOBAL_PANIC_COUNT_0099f6c0 = (undefined *)puVar4;
  if ((uVar7 & 0x7fffffffffffffff) == 0) {
    bVar5 = 0;
  }
  else {
    bVar5 = std::panicking::panic_count::is_zero_slow_path(param_1,param_2,param_3);
    bVar5 = bVar5 ^ 1;
  }
  local_40 = piVar8;
  local_38 = bVar5;
                    /* try { // try from 007005e0 to 007005e7 has its CatchHandler @ 007006bc */
  uVar6 = <std::io::stdio::StdinLock_as_std::io::Read>::read_exact(&local_40,param_2,param_3);
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


// ===== 007006d8  <std::io::stdio::Stdin_as_std::io::Read>::read_to_end =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::Stdin as std::io::Read>::read_to_end */

undefined8 __rustcall
<std::io::stdio::Stdin_as_std::io::Read>::read_to_end(undefined8 *param_1,undefined8 param_2)

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
      uVar7 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
      puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
      goto joined_r0x007007d8;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
    if (bVar3) {
      *piVar8 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar7 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
  puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
joined_r0x007007d8:
  PTR_GLOBAL_PANIC_COUNT_0099f6c0 = (undefined *)puVar4;
  if ((uVar7 & 0x7fffffffffffffff) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = std::panicking::panic_count::is_zero_slow_path(param_1,param_2);
    uVar5 = uVar5 ^ 1;
  }
                    /* try { // try from 0070071c to 00700723 has its CatchHandler @ 007007f0 */
  uVar6 = FUN_00700eb8(piVar8 + 2,param_2);
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


// ===== 0070080c  <std::io::stdio::Stdin_as_std::io::Read>::read_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::Stdin as std::io::Read>::read_vectored */

undefined8 __rustcall
<std::io::stdio::Stdin_as_std::io::Read>::read_vectored
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
      uVar7 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
      puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
      goto joined_r0x00700928;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
    if (bVar3) {
      *piVar8 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar7 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
  puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
joined_r0x00700928:
  PTR_GLOBAL_PANIC_COUNT_0099f6c0 = (undefined *)puVar4;
  if ((uVar7 & 0x7fffffffffffffff) == 0) {
    bVar5 = 0;
  }
  else {
    bVar5 = std::panicking::panic_count::is_zero_slow_path(param_1,param_2,param_3);
    bVar5 = bVar5 ^ 1;
  }
  local_40 = piVar8;
  local_38 = bVar5;
                    /* try { // try from 0070085c to 00700863 has its CatchHandler @ 00700948 */
  uVar6 = <std::io::stdio::StdinLock_as_std::io::Read>::read_vectored(&local_40,param_2,param_3);
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


// ===== 00700964  <std::io::stdio::Stdin_as_std::io::Read>::read_buf_exact =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::Stdin as std::io::Read>::read_buf_exact */

undefined8 __rustcall
<std::io::stdio::Stdin_as_std::io::Read>::read_buf_exact(undefined8 *param_1,undefined8 param_2)

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
      uVar7 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
      puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
      goto joined_r0x00700a68;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
    if (bVar3) {
      *piVar8 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar7 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
  puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
joined_r0x00700a68:
  PTR_GLOBAL_PANIC_COUNT_0099f6c0 = (undefined *)puVar4;
  if ((uVar7 & 0x7fffffffffffffff) == 0) {
    bVar5 = 0;
  }
  else {
    bVar5 = std::panicking::panic_count::is_zero_slow_path(param_1,param_2);
    bVar5 = bVar5 ^ 1;
  }
  local_40 = piVar8;
  local_38 = bVar5;
                    /* try { // try from 007009b4 to 007009bb has its CatchHandler @ 00700a80 */
  uVar6 = <std::io::stdio::StdinLock_as_std::io::Read>::read_buf_exact(&local_40,param_2);
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


// ===== 00700a9c  <std::io::stdio::Stdin_as_std::io::Read>::read_to_string =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::Stdin as std::io::Read>::read_to_string */

undefined8 __rustcall
<std::io::stdio::Stdin_as_std::io::Read>::read_to_string(undefined8 *param_1,undefined8 param_2)

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
      uVar7 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
      puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
      goto joined_r0x00700bb0;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
    if (bVar3) {
      *piVar8 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar7 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
  puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
joined_r0x00700bb0:
  PTR_GLOBAL_PANIC_COUNT_0099f6c0 = (undefined *)puVar4;
  if ((uVar7 & 0x7fffffffffffffff) == 0) {
    bVar5 = 0;
  }
  else {
    bVar5 = std::panicking::panic_count::is_zero_slow_path(param_1,param_2);
    bVar5 = bVar5 ^ 1;
  }
  local_40 = piVar8;
  local_38 = bVar5;
                    /* try { // try from 00700aec to 00700af3 has its CatchHandler @ 00700bc8 */
  uVar6 = <std::io::stdio::StdinLock_as_std::io::Read>::read_to_string(&local_40,param_2);
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


// ===== 00700be4  <std::io::stdio::Stdin_as_std::io::Read>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::Stdin as std::io::Read>::read */

undefined8 __rustcall
<std::io::stdio::Stdin_as_std::io::Read>::read
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
      uVar7 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
      puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
      goto joined_r0x00700cec;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
    if (bVar3) {
      *piVar8 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar7 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
  puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
joined_r0x00700cec:
  PTR_GLOBAL_PANIC_COUNT_0099f6c0 = (undefined *)puVar4;
  if ((uVar7 & 0x7fffffffffffffff) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = std::panicking::panic_count::is_zero_slow_path(param_1,param_2,param_3);
    uVar5 = uVar5 ^ 1;
  }
                    /* try { // try from 00700c28 to 00700c2f has its CatchHandler @ 00700d0c */
  uVar6 = FUN_0070100c(piVar8 + 2,param_2,param_3);
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


// ===== 00700d28  <std::io::stdio::Stdin_as_std::io::Read>::read_buf =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::Stdin as std::io::Read>::read_buf */

undefined8 __rustcall
<std::io::stdio::Stdin_as_std::io::Read>::read_buf(undefined8 *param_1,undefined8 param_2)

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
      uVar7 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
      puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
      goto joined_r0x00700e18;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
    if (bVar3) {
      *piVar8 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar7 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
  puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
joined_r0x00700e18:
  PTR_GLOBAL_PANIC_COUNT_0099f6c0 = (undefined *)puVar4;
  if ((uVar7 & 0x7fffffffffffffff) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = std::panicking::panic_count::is_zero_slow_path(param_1,param_2);
    uVar5 = uVar5 ^ 1;
  }
                    /* try { // try from 00700d6c to 00700d73 has its CatchHandler @ 00700e30 */
  uVar6 = FUN_00701220(piVar8 + 2,param_2);
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


// ===== 00700e4c  <std::sync::once::OnceState_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sync::once::OnceState as core::fmt::Debug>::fmt */

void __rustcall
<std::sync::once::OnceState_as_core::fmt::Debug>::fmt(long param_1,undefined8 param_2)

{
  undefined1 auStack_30 [16];
  undefined1 local_4 [4];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,&DAT_0045c33f,9);
  local_4[0] = *(undefined1 *)(param_1 + 4);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
            (auStack_30,&DAT_00373e30,8,local_4,&DAT_00977f80);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 00700eb8  FUN_00700eb8 =====

undefined1  [16] FUN_00700eb8(long *param_1,ulong *param_2)

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
      FUN_006df348(&local_78,uVar3,param_2[1],uVar2,1,1);
      if (local_78 != 1) {
        *param_2 = uVar2;
        param_2[1] = local_70;
        goto LAB_00700f68;
      }
    }
    uVar2 = 1;
  }
  else {
LAB_00700f68:
    if (lVar8 != lVar6) {
      memcpy((void *)(param_2[1] + uVar5),(void *)(lVar7 + lVar6),__n);
    }
    param_1[2] = 0;
    param_1[3] = 0;
    param_2[2] = uVar5 + __n;
    auVar9 = FUN_006c5978(param_2,0);
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


// ===== 0070100c  FUN_0070100c =====

undefined1  [16] FUN_0070100c(undefined8 *param_1,undefined1 *param_2,ulong param_3)

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
    if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
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
      if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
        core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
      }
      if (iVar2 != 9) {
        *puVar7 = 0;
        param_1[3] = 0;
        __n = (long)iVar2 << 0x20 | 2;
        *(undefined1 *)(param_1 + 4) = uVar1;
        goto LAB_00701204;
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
LAB_00701204:
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


// ===== 00701220  FUN_00701220 =====

ulong FUN_00701220(undefined8 *param_1,long *param_2)

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
      if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
        core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
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
      if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
        core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
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


// ===== 00701420  <std::io::buffered::bufwriter::WriterPanicked_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::buffered::bufwriter::WriterPanicked as core::fmt::Debug>::fmt */

void __rustcall
<std::io::buffered::bufwriter::WriterPanicked_as_core::fmt::Debug>::fmt
          (undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_68 [16];
  undefined *local_58;
  undefined8 **ppuStack_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined *puStack_38;
  undefined8 *local_30;
  undefined *puStack_28;
  undefined8 local_8;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_68,param_2,&DAT_0045c348,0xe);
  local_48 = param_1[2];
  local_8 = *param_1;
  local_40 = &local_48;
  puStack_38 = PTR_fmt_0099f458;
  local_30 = &local_8;
  puStack_28 = PTR_fmt_0099f458;
  ppuStack_50 = &local_40;
  local_58 = &DAT_00368a3f;
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
            (auStack_68,&DAT_0045c356,6,&local_58,&DAT_009785b8);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 007014bc  <std::io::stdio::StderrLock_as_std::os::unix::io::StdioExt>::take_fd =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined2 local_1ec;
  int local_1e8;
  int local_1e4;
  undefined **local_1e0;
  undefined8 local_1d8;
  undefined2 local_1d0;
  long local_58;
  undefined8 local_50;
  
  local_1d8 = DAT_0045b9b4;
  local_1d0 = 0x6c;
  local_1ec = 0;
  local_1f0 = 0x101;
  local_1f8 = _s__00373250;
  uVar5 = <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul
                    (&local_58,&local_1d8,10);
  if (local_58 == 1) {
    local_1e0 = &PTR_DAT_00977090;
  }
  else {
    uVar5 = FUN_006ea8b8(&local_1e8,local_50,&local_1f8);
    if (local_1e8 != 1) {
      iVar2 = fcntl(2,0x406,3);
      if (iVar2 == -1) {
        piVar6 = (int *)__errno();
        iVar2 = *piVar6;
        if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
                    /* try { // try from 00701690 to 0070169b has its CatchHandler @ 007016b4 */
          core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
        }
        *param_1 = 1;
        *(ulong *)(param_1 + 2) = (long)iVar2 << 0x20 | 2;
      }
      else {
        if (*(long *)(*param_2 + 0x10) != 0) {
                    /* try { // try from 00701680 to 0070168b has its CatchHandler @ 007016cc */
          core::cell::panic_already_borrowed(&PTR_s__rustc_48a229ceaefd4985c50990b14_00978e90);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x701690);
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
        if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
                    /* try { // try from 007016a0 to 007016ab has its CatchHandler @ 007016b0 */
          core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
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


// ===== 007016e8  <std::fs::Dir_as_std::os::fd::owned::AsFd>::as_fd =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::fs::Dir as std::os::fd::owned::AsFd>::as_fd */

undefined4 __rustcall <std::fs::Dir_as_std::os::fd::owned::AsFd>::as_fd(undefined4 *param_1)

{
  return *param_1;
}


// ===== 007016f0  <std::sys::stdio::unix::Stderr_as_std::io::Write>::write_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::stdio::unix::Stderr as std::io::Write>::write_vectored */

undefined1  [16] __rustcall
<std::sys::stdio::unix::Stderr_as_std::io::Write>::write_vectored
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
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 00701784  FUN_00701784 =====

undefined8 FUN_00701784(void)

{
  return 1;
}


// ===== 0070178c  FUN_0070178c =====

undefined8 FUN_0070178c(void)

{
  return 0;
}


// ===== 00701794  <std::sys::stdio::unix::Stderr_as_std::io::Write>::write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::stdio::unix::Stderr as std::io::Write>::write */

undefined1  [16] __rustcall
<std::sys::stdio::unix::Stderr_as_std::io::Write>::write
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
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 0070181c  <std::sys::process::env::CommandResolvedEnvs_as_core::iter::traits::iterator::Iterator>::next =====

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
  
  FUN_006eda68(local_68,param_2);
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


// ===== 007018a0  <&std::fs::File_as_std::io::Write>::write_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::fs::File as std::io::Write>::write_vectored */

undefined1  [16] __rustcall
<&std::fs::File_as_std::io::Write>::write_vectored(undefined8 *param_1,iovec *param_2,ulong param_3)

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
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 00701938  <std::fs::File_as_std::sys::io::kernel_copy::linux::CopyRead>::properties =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::fs::File as std::sys::io::kernel_copy::linux::CopyRead>::properties */

void __rustcall
<std::fs::File_as_std::sys::io::kernel_copy::linux::CopyRead>::properties
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
    ppuVar3 = &PTR_FUN_00977078;
    if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
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


// ===== 00701a3c  <std::sys::process::unix::unix::ExitStatus_as_core::fmt::Display>::fmt =====

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
      local_28 = PTR_fmt_0099f688;
      core::fmt::write(*param_2,param_2[1],&DAT_00364c05,&local_30);
      return;
    }
    uVar2 = local_44 - 1;
    uStack_38 = 0;
    local_40 = (undefined *)0x1;
    if ((uVar2 < 0x1f) && ((0x5fff7fffU >> (ulong)(uVar2 & 0x1f) & 1) != 0)) {
      uStack_38 = *(undefined8 *)(&DAT_0045c800 + (ulong)uVar2 * 8);
      local_40 = (&PTR_DAT_00978f08)[uVar2];
    }
    if ((uVar1 >> 7 & 1) == 0) {
      uVar3 = *param_2;
      uVar4 = param_2[1];
      puVar5 = &DAT_003708b2;
    }
    else {
      uVar3 = *param_2;
      uVar4 = param_2[1];
      puVar5 = &DAT_0036bd7b;
    }
    local_28 = PTR_fmt_0099f688;
    local_20 = (uint *)&local_40;
    local_30 = &local_44;
    local_18 = FUN_006ff764;
    core::fmt::write(uVar3,uVar4,puVar5,&local_30);
    return;
  }
  if ((uVar1 & 0xff) == 0x7f) {
    local_44 = uVar1 >> 8 & 0xff;
    uVar1 = (uVar1 >> 8) - 1;
    if (((uVar1 & 0xff) < 0x1f) && ((0x5fff7fffU >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
      uStack_38 = *(undefined8 *)(&DAT_0045c800 + ((ulong)uVar1 & 0xff) * 8);
      local_40 = (&PTR_DAT_00978f08)[(ulong)uVar1 & 0xff];
    }
    else {
      uStack_38 = 0;
      local_40 = (undefined *)0x1;
    }
    local_30 = &local_44;
    local_28 = PTR_fmt_0099f688;
    local_20 = (uint *)&local_40;
    local_18 = FUN_006ff764;
    core::fmt::write(*param_2,param_2[1],&DAT_0036aafc,&local_30);
    return;
  }
  if (uVar1 == 0xffff) {
                    /* WARNING: Could not recover jumptable at 0x00701b7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2[1] + 0x18))(*param_2,&UNK_0045c35c,0x18);
    return;
  }
  local_28 = PTR_fmt_0099f688;
  local_18 = (code *)PTR_fmt_0099f690;
  local_30 = param_1;
  local_20 = param_1;
  core::fmt::write(*param_2,param_2[1],&DAT_0045c374,&local_30);
  return;
}


// ===== 00701c4c  <std::sys::process::unix::common::cstring_array::CStringArray_as_core::ops::drop::Drop>::drop =====

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
      puVar2 = *(undefined8 **)(param_1 + 8);
      lVar1 = lVar1 * 8;
      do {
        auVar3 = <alloc::ffi::c_str::alloc::ffi::c_str::CString>::from_raw(*puVar2);
        *auVar3._0_8_ = 0;
        if (auVar3._8_8_ != 0) {
          __rustc::__rust_dealloc(auVar3._0_8_,auVar3._8_8_,1);
        }
        lVar1 = lVar1 + -8;
        puVar2 = puVar2 + 1;
      } while (lVar1 != 0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail(0,lVar1,0,&PTR_s__rustc_48a229ceaefd4985c50990b14_009785d8);
}


// ===== 00701cbc  <std::env::VarError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::env::VarError as core::fmt::Display>::fmt */

void __rustcall <std::env::VarError_as_core::fmt::Display>::fmt(long *param_1,undefined8 *param_2)

{
  long *local_28;
  long **local_20;
  code *pcStack_18;
  
  if (*param_1 != -1) {
    local_20 = &local_28;
    pcStack_18 = FUN_006ff218;
    local_28 = param_1;
    core::fmt::write(*param_2,param_2[1],&DAT_00365380,&local_20);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00701d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,&UNK_0045c398,0x1e);
  return;
}


// ===== 00701d20  <std::time::Instant_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::time::Instant as core::fmt::Debug>::fmt */

void __rustcall <std::time::Instant_as_core::fmt::Debug>::fmt(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_30 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,&DAT_0045c325,7);
  uVar1 = <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
                    (auStack_30,&DAT_0045c32c,6,param_1,&DAT_00978560);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
            (uVar1,&DAT_0045c332,7,param_1 + 8,&DAT_00978580);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 00701da0  <std::backtrace::Backtrace_as_core::fmt::Display>::fmt =====

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
  ulong uStack_1b0;
  undefined8 local_1a8;
  long local_1a0;
  ulong uStack_198;
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
    puVar5 = &DAT_0045c3b6;
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
                  (param_1 + 5,1,&local_140,&DAT_00976b18,
                   &PTR_s__rustc_48a229ceaefd4985c50990b14_00976a88);
        uVar3 = *(uint *)(param_2 + 0x10);
        uVar9 = param_1[3];
      }
      if ((uVar3 >> 0x17 & 1) == 0) {
        uVar6 = param_1[4];
        if (uVar9 < uVar6) {
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (uVar6,uVar9,uVar9,&PTR_s__rustc_48a229ceaefd4985c50990b14_009785f0);
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
      uStack_198 = uStack_1b0;
      local_1a0 = local_1b8;
      local_190 = local_1a8;
      local_168 = &PTR_FUN_00978608;
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
              uVar4 = FUN_00751e80(uVar4);
            }
            local_140 = (long ****)0xffffffffffffffff;
            local_b0 = (long ****)&DAT_00000002;
                    /* try { // try from 0070206c to 00702083 has its CatchHandler @ 00702184 */
            uVar9 = FUN_006e18a0(&local_f0,uVar4,&local_140,&local_b0,0);
            local_f0[3] = local_f0[3] + 1;
            if ((uVar9 & 1) != 0) {
LAB_007020c4:
              if (local_1a0 == -1) {
                if ((1 < (uStack_198 & 3) - 2) && ((uStack_198 & 3) != 0)) {
                  local_138 = (long *)(uStack_198 - 1);
                  local_140 = (long ****)CONCAT71(local_140._1_7_,3);
                  <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_138);
                }
              }
              else if (local_1a0 != 0) {
                __rustc::__rust_dealloc(uStack_198,local_1a0,1);
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
                uVar4 = FUN_00751e80(uVar4);
              }
              if (puVar12[-1] == -1) {
                ppppplVar8 = (long *****)puVar12[-5];
                local_140 = (long ****)0xffffffffffffffff;
                if (ppppplVar8 != (long *****)0x0) goto LAB_00701fe0;
                ppppplVar8 = (long *****)0x0;
LAB_00701ff4:
                local_a8 = (long *)puVar12[-3];
                uStack_a0 = puVar12[-2];
                local_b0 = (long ****)ppppplVar8;
              }
              else {
                uVar1 = *puVar12;
                uVar2 = puVar12[1];
                    /* try { // try from 00701f4c to 0070201b has its CatchHandler @ 00702190 */
                core::str::converts::from_utf8(&local_b0,uVar1,uVar2);
                if ((long *****)local_b0 == (long *****)0x1) {
                  local_b0 = (long ****)&DAT_00000002;
                }
                else {
                  rustc_demangle::try_demangle(&local_b0,local_a8,uStack_a0);
                  if (local_b0 != (long ****)&DAT_00000002) {
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
                if (ppppplVar8 == (long *****)0x0) goto LAB_00701ff4;
LAB_00701fe0:
                if (ppppplVar8 != (long *****)&DAT_00000002) {
                  ppppplVar8 = (long *****)0x1;
                  goto LAB_00701ff4;
                }
                local_b0 = (long ****)&DAT_00000002;
              }
              uVar9 = FUN_006e18a0(&local_150,uVar4,&local_140,&local_b0,
                                   *(undefined4 *)(puVar12 + 2),
                                   *(undefined4 *)((long)puVar12 + 0x14),
                                   *(undefined4 *)(puVar12 + 3),
                                   *(undefined4 *)((long)puVar12 + 0x1c));
              local_150[3] = local_150[3] + 1;
              if ((uVar9 & 1) != 0) goto LAB_007020c4;
              lVar11 = lVar11 + -0x48;
              puVar12 = puVar12 + 9;
            } while (lVar11 != 0);
          }
          puVar10 = puVar10 + 0xe;
        } while (puVar10 != puVar7);
      }
      if (local_1a0 == -1) {
        if ((1 < (uStack_198 & 3) - 2) && ((uStack_198 & 3) != 0)) {
          local_138 = (long *)(uStack_198 - 1);
          local_140 = (long ****)CONCAT71(local_140._1_7_,3);
          <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_138);
        }
      }
      else if (local_1a0 != 0) {
        __rustc::__rust_dealloc(uStack_198,local_1a0,1);
      }
      return 0;
    }
    puVar5 = &DAT_0045c3cb;
    uVar4 = 0x12;
  }
  uVar4 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,puVar5,uVar4);
  return uVar4;
}


// ===== 007021bc  <alloc::vec::Vec<u8>as_std::io::copy::BufferedWriterSpec>::buffer_size =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::vec::Vec<u8> as std::io::copy::BufferedWriterSpec>::buffer_size */

ulong __rustcall
<alloc::vec::Vec<u8>as_std::io::copy::BufferedWriterSpec>::buffer_size(long *param_1)

{
  ulong uVar1;
  
  uVar1 = *param_1 - param_1[2];
  if (uVar1 < 0x2001) {
    uVar1 = 0x2000;
  }
  return uVar1;
}


// ===== 007021d8  <&std::io::pipe::PipeReader_as_std::io::Read>::read_to_end =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::io::pipe::PipeReader as std::io::Read>::read_to_end */

void __rustcall <&std::io::pipe::PipeReader_as_std::io::Read>::read_to_end(undefined8 *param_1)

{
  <std::sys::fd::unix::std::sys::fd::unix::FileDesc>::read_to_end(*param_1);
  return;
}


// ===== 007021e0  <&std::io::pipe::PipeReader_as_std::io::Read>::read_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::io::pipe::PipeReader as std::io::Read>::read_vectored */

undefined1  [16] __rustcall
<&std::io::pipe::PipeReader_as_std::io::Read>::read_vectored
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
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 00702278  <&std::sys::fd::unix::FileDesc_as_std::io::Read>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::sys::fd::unix::FileDesc as std::io::Read>::read */

undefined1  [16] __rustcall
<&std::sys::fd::unix::FileDesc_as_std::io::Read>::read
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
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 00702304  <&std::io::pipe::PipeReader_as_std::io::Read>::read_buf =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::io::pipe::PipeReader as std::io::Read>::read_buf */

ulong __rustcall
<&std::io::pipe::PipeReader_as_std::io::Read>::read_buf(undefined8 *param_1,long *param_2)

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
  if (*(undefined ***)PTR_PTR_0099f738 == &PTR_FUN_00977078) {
    return (long)iVar2 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  return (long)iVar2 << 0x20 | 2;
}


// ===== 007023b8  <&std::io::stdio::Stdin_as_std::io::Read>::read_exact =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::io::stdio::Stdin as std::io::Read>::read_exact */

undefined8 __rustcall
<&std::io::stdio::Stdin_as_std::io::Read>::read_exact
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
      uVar7 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
      puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
      goto joined_r0x007024c8;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
    if (bVar3) {
      *piVar8 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar7 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
  puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
joined_r0x007024c8:
  PTR_GLOBAL_PANIC_COUNT_0099f6c0 = (undefined *)puVar4;
  if ((uVar7 & 0x7fffffffffffffff) == 0) {
    bVar5 = 0;
  }
  else {
    bVar5 = std::panicking::panic_count::is_zero_slow_path(param_1,param_2,param_3);
    bVar5 = bVar5 ^ 1;
  }
  local_40 = piVar8;
  local_38 = bVar5;
                    /* try { // try from 0070240c to 00702413 has its CatchHandler @ 007024e8 */
  uVar6 = <std::io::stdio::StdinLock_as_std::io::Read>::read_exact(&local_40,param_2,param_3);
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


// ===== 00702504  <&std::io::stdio::Stdin_as_std::io::Read>::read_to_end =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::io::stdio::Stdin as std::io::Read>::read_to_end */

undefined8 __rustcall
<&std::io::stdio::Stdin_as_std::io::Read>::read_to_end(undefined8 *param_1,undefined8 param_2)

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
      uVar7 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
      puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
      goto joined_r0x00702608;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
    if (bVar3) {
      *piVar8 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar7 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
  puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
joined_r0x00702608:
  PTR_GLOBAL_PANIC_COUNT_0099f6c0 = (undefined *)puVar4;
  if ((uVar7 & 0x7fffffffffffffff) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = std::panicking::panic_count::is_zero_slow_path(param_1,param_2);
    uVar5 = uVar5 ^ 1;
  }
                    /* try { // try from 0070254c to 00702553 has its CatchHandler @ 00702620 */
  uVar6 = FUN_00700eb8(piVar8 + 2,param_2);
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


// ===== 0070263c  <&std::io::stdio::Stdin_as_std::io::Read>::read_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::io::stdio::Stdin as std::io::Read>::read_vectored */

undefined8 __rustcall
<&std::io::stdio::Stdin_as_std::io::Read>::read_vectored
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
      uVar7 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
      puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
      goto joined_r0x0070275c;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
    if (bVar3) {
      *piVar8 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar7 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
  puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
joined_r0x0070275c:
  PTR_GLOBAL_PANIC_COUNT_0099f6c0 = (undefined *)puVar4;
  if ((uVar7 & 0x7fffffffffffffff) == 0) {
    bVar5 = 0;
  }
  else {
    bVar5 = std::panicking::panic_count::is_zero_slow_path(param_1,param_2,param_3);
    bVar5 = bVar5 ^ 1;
  }
  local_40 = piVar8;
  local_38 = bVar5;
                    /* try { // try from 00702690 to 00702697 has its CatchHandler @ 0070277c */
  uVar6 = <std::io::stdio::StdinLock_as_std::io::Read>::read_vectored(&local_40,param_2,param_3);
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


// ===== 00702798  <&std::io::stdio::Stdin_as_std::io::Read>::read_buf_exact =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::io::stdio::Stdin as std::io::Read>::read_buf_exact */

undefined8 __rustcall
<&std::io::stdio::Stdin_as_std::io::Read>::read_buf_exact(undefined8 *param_1,undefined8 param_2)

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
      uVar7 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
      puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
      goto joined_r0x007028a0;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
    if (bVar3) {
      *piVar8 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar7 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
  puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
joined_r0x007028a0:
  PTR_GLOBAL_PANIC_COUNT_0099f6c0 = (undefined *)puVar4;
  if ((uVar7 & 0x7fffffffffffffff) == 0) {
    bVar5 = 0;
  }
  else {
    bVar5 = std::panicking::panic_count::is_zero_slow_path(param_1,param_2);
    bVar5 = bVar5 ^ 1;
  }
  local_40 = piVar8;
  local_38 = bVar5;
                    /* try { // try from 007027ec to 007027f3 has its CatchHandler @ 007028b8 */
  uVar6 = <std::io::stdio::StdinLock_as_std::io::Read>::read_buf_exact(&local_40,param_2);
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


// ===== 007028d4  <&std::io::stdio::Stdin_as_std::io::Read>::read_to_string =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::io::stdio::Stdin as std::io::Read>::read_to_string */

undefined8 __rustcall
<&std::io::stdio::Stdin_as_std::io::Read>::read_to_string(undefined8 *param_1,undefined8 param_2)

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
      uVar7 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
      puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
      goto joined_r0x007029ec;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
    if (bVar3) {
      *piVar8 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar7 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
  puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
joined_r0x007029ec:
  PTR_GLOBAL_PANIC_COUNT_0099f6c0 = (undefined *)puVar4;
  if ((uVar7 & 0x7fffffffffffffff) == 0) {
    bVar5 = 0;
  }
  else {
    bVar5 = std::panicking::panic_count::is_zero_slow_path(param_1,param_2);
    bVar5 = bVar5 ^ 1;
  }
  local_40 = piVar8;
  local_38 = bVar5;
                    /* try { // try from 00702928 to 0070292f has its CatchHandler @ 00702a04 */
  uVar6 = <std::io::stdio::StdinLock_as_std::io::Read>::read_to_string(&local_40,param_2);
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


// ===== 00702a20  <&std::io::stdio::Stdin_as_std::io::Read>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::io::stdio::Stdin as std::io::Read>::read */

undefined8 __rustcall
<&std::io::stdio::Stdin_as_std::io::Read>::read
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
      uVar7 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
      puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
      goto joined_r0x00702b2c;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
    if (bVar3) {
      *piVar8 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar7 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
  puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
joined_r0x00702b2c:
  PTR_GLOBAL_PANIC_COUNT_0099f6c0 = (undefined *)puVar4;
  if ((uVar7 & 0x7fffffffffffffff) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = std::panicking::panic_count::is_zero_slow_path(param_1,param_2,param_3);
    uVar5 = uVar5 ^ 1;
  }
                    /* try { // try from 00702a68 to 00702a6f has its CatchHandler @ 00702b4c */
  uVar6 = FUN_0070100c(piVar8 + 2,param_2,param_3);
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


// ===== 00702b68  <&std::io::stdio::Stdin_as_std::io::Read>::read_buf =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::io::stdio::Stdin as std::io::Read>::read_buf */

undefined8 __rustcall
<&std::io::stdio::Stdin_as_std::io::Read>::read_buf(undefined8 *param_1,undefined8 param_2)

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
      uVar7 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
      puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
      goto joined_r0x00702c5c;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
    if (bVar3) {
      *piVar8 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar7 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
  puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
joined_r0x00702c5c:
  PTR_GLOBAL_PANIC_COUNT_0099f6c0 = (undefined *)puVar4;
  if ((uVar7 & 0x7fffffffffffffff) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = std::panicking::panic_count::is_zero_slow_path(param_1,param_2);
    uVar5 = uVar5 ^ 1;
  }
                    /* try { // try from 00702bb0 to 00702bb7 has its CatchHandler @ 00702c74 */
  uVar6 = FUN_00701220(piVar8 + 2,param_2);
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


// ===== 00702c90  <(&str,u16)as_std::net::socket_addr::ToSocketAddrs>::to_socket_addrs =====

/* WARNING: Removing unreachable block (ram,0x00702d30) */
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
    puVar3 = (ushort *)__rustc::__rust_alloc(0x20,4);
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
      FUN_006d20c0(&local_210,&local_1e8,uStack_58);
      goto joined_r0x00702e10;
    }
    local_208 = &PTR_DAT_00977090;
  }
  else {
    FUN_006c9704(&local_210,__src,__n,&local_1e8);
joined_r0x00702e10:
    if ((local_210 & 1) == 0) {
      FUN_006fa580(&local_1e0,&local_60);
      local_208 = (undefined **)CONCAT35((undefined3)uStack_1d3,local_1d8);
      param_1[2] = CONCAT35(uStack_1db,CONCAT41(iStack_1df,local_1e0));
      param_1[3] = (long)(local_208 + CONCAT71(uStack_1cf,uStack_1d3._3_1_) * 4);
      ppuVar4 = local_208;
      goto LAB_00702e44;
    }
  }
  ppuVar4 = (undefined **)0x0;
LAB_00702e44:
  *param_1 = (long)ppuVar4;
  param_1[1] = (long)local_208;
  return;
}


// ===== 00702e60  <std::hash::random::RandomState_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::hash::random::RandomState as core::fmt::Debug>::fmt */

void __rustcall
<std::hash::random::RandomState_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,&DAT_0045c3dd,0xb);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish_non_exhaustive(auStack_20);
  return;
}


// ===== 00702e98  <std::fs::DirEntry_as_std::os::unix::fs::DirEntryExt2>::file_name_ref =====

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


// ===== 00702ea4  <std::sys::os_str::bytes::Slice_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::os_str::bytes::Slice as core::fmt::Display>::fmt */

void __rustcall <std::sys::os_str::bytes::Slice_as_core::fmt::Display>::fmt(void)

{
  (*(code *)PTR_fmt_009a1a30)();
  return;
}


// ===== 00702ea8  <std::os::unix::net::ancillary::Messages_as_core::iter::traits::iterator::Iterator>::next =====

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
    if (plVar6 != (long *)0x0) goto LAB_00702f00;
  }
  else {
    plVar1 = (long *)(param_2[1] + (long)plVar6);
    plVar2 = (long *)((*plVar9 + 7U & 0xfffffffffffffff8) + (long)plVar9);
    plVar6 = (long *)0x0;
    if (plVar2 + 2 <= plVar1) {
      plVar6 = plVar2;
    }
    if (plVar6 != (long *)0x0 && plVar9 != plVar6) {
LAB_00702f00:
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


// ===== 00702f64  <&std::fs::File_as_std::sys::io::kernel_copy::linux::CopyRead>::properties =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::fs::File as std::sys::io::kernel_copy::linux::CopyRead>::properties */

void __rustcall
<&std::fs::File_as_std::sys::io::kernel_copy::linux::CopyRead>::properties
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
    ppuVar3 = &PTR_FUN_00977078;
    if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
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


// ===== 0070306c  <std::io::pipe::PipeReader_as_std::io::Read>::read_to_end =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::pipe::PipeReader as std::io::Read>::read_to_end */

void __rustcall <std::io::pipe::PipeReader_as_std::io::Read>::read_to_end(void)

{
  (*(code *)PTR_read_to_end_009a16f0)();
  return;
}


// ===== 00703070  <(alloc::string::String,u16)as_std::net::socket_addr::ToSocketAddrs>::to_socket_addrs =====

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


// ===== 007030a0  <std::sys::process::unix::unix::ExitStatusError_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::process::unix::unix::ExitStatusError as core::fmt::Debug>::fmt */

void __rustcall
<std::sys::process::unix::unix::ExitStatusError_as_core::fmt::Debug>::fmt
          (undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple(auStack_38,param_2,&DAT_00372c00,0x10);
  <core::fmt::builders::[2]::core::fmt::builders::DebugTuple>::field
            (auStack_38,param_1,&DAT_00978630);
  <core::fmt::builders::[2]::core::fmt::builders::DebugTuple>::finish();
  return;
}


// ===== 007030f8  <std::sys::fd::unix::FileDesc_as_std::os::fd::raw::FromRawFd>::from_raw_fd =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::fd::unix::FileDesc as std::os::fd::raw::FromRawFd>::from_raw_fd */

void __rustcall
<std::sys::fd::unix::FileDesc_as_std::os::fd::raw::FromRawFd>::from_raw_fd(int param_1)

{
  if (param_1 != -1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed(&DAT_00373580,8,&PTR_s__rustc_48a229ceaefd4985c50990b14_009786b0);
}


// ===== 00703124  <std::fs::File_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::fs::File as core::fmt::Debug>::fmt */

void __rustcall <std::fs::File_as_core::fmt::Debug>::fmt(undefined4 *param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  FUN_006f4ca0(auStack_20,*param_1,param_2,&DAT_00376bdc,4);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish(auStack_20);
  return;
}


// ===== 00703164  <std::env::SplitPaths_as_core::iter::traits::iterator::Iterator>::next =====

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
        goto joined_r0x0070321c;
      }
      lVar2 = lVar2 + -1;
      sVar3 = sVar3 + 1;
      pcVar1 = pcVar1 + 1;
    } while (lVar2 != -1);
  }
  *(undefined1 *)(param_2 + 2) = 1;
joined_r0x0070321c:
  if (__n == 0) {
    *param_1 = 0;
    param_1[1] = 1;
    param_1[2] = 0;
    return;
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  __dest = (void *)__rustc::__rust_alloc(__n,1);
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


// ===== 00703248  <std[29fbf8137994c300]::time::SystemTime_as_core[188d2c0002da36d0]::ops::arith::Add<core[188d2c0002da36d0]::time::Duration>>::add =====

/* <std[29fbf8137994c300]::time::SystemTime as
   core[188d2c0002da36d0]::ops::arith::Add<core[188d2c0002da36d0]::time::Duration>>::add */

undefined1  [16]
<std[29fbf8137994c300]::time::SystemTime_as_core[188d2c0002da36d0]::ops::arith::Add<core[188d2c0002da36d0]::time::Duration>>
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
      if (bVar2) goto LAB_0070328c;
      uVar1 = uVar1 + 0xc4653600;
    }
    auVar4._8_4_ = uVar1;
    auVar4._0_8_ = lVar3;
    auVar4._12_4_ = 0;
    return auVar4;
  }
LAB_0070328c:
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed(&DAT_0045c3e8,0x2d,param_5);
}


// ===== 007032a8  FUN_007032a8 =====

void FUN_007032a8(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,&DAT_0045c415,0xf,&local_18,&DAT_00978650);
  return;
}


// ===== 007032e8  <std::io::stdio::StdinLock_as_std::io::Read>::read_exact =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StdinLock as std::io::Read>::read_exact */

undefined ** __rustcall
<std::io::stdio::StdinLock_as_std::io::Read>::read_exact
          (long *param_1,void *param_2,undefined **param_3)

{
  int iVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  long local_68;
  
  lVar5 = *param_1;
  lVar2 = *(long *)(lVar5 + 0x18);
  if ((undefined **)(*(long *)(lVar5 + 0x20) - lVar2) < param_3) {
    do {
      auVar7 = FUN_0070100c(lVar5 + 8,param_2,param_3);
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
                    /* try { // try from 007033c4 to 007033d7 has its CatchHandler @ 00703468 */
          lVar2 = core::io::error::os_functions::get_os_functions();
          iVar1 = (**(code **)(lVar2 + 0x10))((ulong)ppuVar3 >> 0x20);
          if (iVar1 == 0) {
            return ppuVar3;
          }
        }
        else {
          uVar6 = auVar7._12_4_ & 0xff;
          if (0x2a < (ulong)ppuVar3 >> 0x20) {
            uVar6 = 0xff;
          }
          if (uVar6 != 0x23) {
            return ppuVar3;
          }
        }
      }
      else {
        if (ppuVar3 == (undefined **)0x0) {
          return &PTR_DAT_00976fb0;
        }
        ppuVar4 = (undefined **)((long)param_3 - (long)ppuVar3);
        if (param_3 < ppuVar3) {
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (ppuVar3,param_3,param_3,&PTR_s__rustc_48a229ceaefd4985c50990b14_00976fc8);
        }
        param_2 = (void *)((long)param_2 + (long)ppuVar3);
      }
      param_3 = ppuVar4;
    } while (ppuVar4 != (undefined **)0x0);
  }
  else {
    memcpy(param_2,(void *)(*(long *)(lVar5 + 8) + lVar2),(size_t)param_3);
    *(long *)(lVar5 + 0x18) = lVar2 + (long)param_3;
  }
  return (undefined **)0x0;
}


// ===== 00703480  <std::io::stdio::StdinLock_as_std::io::Read>::read_to_end =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StdinLock as std::io::Read>::read_to_end */

void __rustcall <std::io::stdio::StdinLock_as_std::io::Read>::read_to_end(long *param_1)

{
  FUN_00700eb8(*param_1 + 8);
  return;
}


// ===== 0070348c  <std::io::stdio::StdinLock_as_std::io::Read>::read_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StdinLock as std::io::Read>::read_vectored */

undefined1  [16] __rustcall
<std::io::stdio::StdinLock_as_std::io::Read>::read_vectored
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
      if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
        core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
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
    goto LAB_00703700;
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
      if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
        core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
      }
      if (iVar5 != 9) {
        *puVar17 = 0;
        *(undefined8 *)(lVar16 + 0x20) = 0;
        uVar11 = (long)iVar5 << 0x20 | 2;
        *(undefined1 *)(lVar16 + 0x28) = uVar4;
        goto LAB_007036fc;
      }
      uVar11 = 0;
    }
    uVar18 = 0;
    *(ulong *)(lVar16 + 0x20) = uVar11;
    *(undefined1 *)(lVar16 + 0x28) = uVar4;
    uVar19 = uVar11;
  }
  else if (__buf == (void *)0x0) {
LAB_007036fc:
    uVar6 = 1;
    goto LAB_00703700;
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
LAB_00703700:
  auVar23._8_8_ = uVar11;
  auVar23._0_8_ = uVar6;
  return auVar23;
}


// ===== 00703720  <std::io::stdio::StdinLock_as_std::io::Read>::read_buf_exact =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StdinLock as std::io::Read>::read_buf_exact */

undefined ** __rustcall
<std::io::stdio::StdinLock_as_std::io::Read>::read_buf_exact(long *param_1,long *param_2)

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
          while (ppuVar2 = (undefined **)FUN_00701220(lVar6 + 8,param_2),
                ppuVar2 == (undefined **)0x0) {
            lVar3 = param_2[2];
            if (lVar3 == lVar7) {
              return &PTR_DAT_00976fb0;
            }
            lVar7 = lVar3;
            if (param_2[1] == lVar3) {
              return (undefined **)0x0;
            }
          }
          uVar5 = (ulong)ppuVar2 & 3;
          if (uVar5 < 2) break;
          if (uVar5 == 2) {
                    /* try { // try from 007037d0 to 007037e3 has its CatchHandler @ 00703898 */
            lVar3 = core::io::error::os_functions::get_os_functions();
            uVar5 = (**(code **)(lVar3 + 0x10))((ulong)ppuVar2 >> 0x20);
            if ((uVar5 & 1) == 0) {
              return ppuVar2;
            }
          }
          else {
            uVar4 = (uint)((ulong)ppuVar2 >> 0x20) & 0xff;
            if (0x2a < (ulong)ppuVar2 >> 0x20) {
              uVar4 = 0xff;
            }
LAB_0070382c:
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
          goto LAB_0070382c;
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


// ===== 007038b0  <std::io::stdio::StdinLock_as_std::io::Read>::read_to_string =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StdinLock as std::io::Read>::read_to_string */

undefined1  [16] __rustcall
<std::io::stdio::StdinLock_as_std::io::Read>::read_to_string(long *param_1,long *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar5;
  undefined1 auVar6 [16];
  long local_70;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  void *local_50;
  ulong uStack_48;
  undefined *puVar4;
  
  lVar5 = param_2[2];
  if (lVar5 == 0) {
                    /* try { // try from 00703918 to 00703923 has its CatchHandler @ 00703a3c */
    auVar6 = FUN_00700eb8(*param_1 + 8,param_2);
    lVar5 = param_2[2];
                    /* try { // try from 00703930 to 0070393b has its CatchHandler @ 00703a24 */
    core::str::converts::from_utf8(&local_58,param_2[1],lVar5);
    if (local_58 != 0) {
      puVar4 = auVar6._8_8_;
      if ((auVar6 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
        puVar4 = &UNK_00976e60;
      }
      auVar6._8_8_ = puVar4;
      auVar6._0_8_ = 1;
      param_2[2] = 0;
      return auVar6;
    }
    param_2[2] = lVar5;
    return auVar6;
  }
  local_60 = 0;
  local_70 = 0;
  local_68 = 1;
                    /* try { // try from 007038e4 to 007038ef has its CatchHandler @ 00703a4c */
  auVar6 = FUN_00700eb8(*param_1 + 8,&local_70);
  uVar3 = local_68;
  puVar4 = auVar6._8_8_;
  if (auVar6._0_8_ == 1) {
joined_r0x00703988:
    if (local_70 != 0) {
      __rustc::__rust_dealloc(local_68,local_70,1);
    }
    auVar1._8_8_ = puVar4;
    auVar1._0_8_ = 1;
    return auVar1;
  }
                    /* try { // try from 00703964 to 0070396f has its CatchHandler @ 00703a4c */
  core::str::converts::from_utf8(&local_58,local_68,local_60);
  if (local_58 == 1) {
    puVar4 = &UNK_00976e60;
    goto joined_r0x00703988;
  }
  if ((ulong)(*param_2 - lVar5) < uStack_48) {
                    /* try { // try from 00703a04 to 00703a1b has its CatchHandler @ 00703a4c */
    FUN_006cecec(param_2,lVar5,uStack_48,1,1);
    lVar5 = param_2[2];
  }
  else if (uStack_48 == 0) goto LAB_007039bc;
  memcpy((void *)(param_2[1] + lVar5),local_50,uStack_48);
LAB_007039bc:
  param_2[2] = lVar5 + uStack_48;
  if (local_70 != 0) {
    __rustc::__rust_dealloc(uVar3,local_70,1);
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uStack_48;
  return auVar2 << 0x40;
}


// ===== 00703a6c  <std::io::stdio::StdinLock_as_std::io::Read>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StdinLock as std::io::Read>::read */

void __rustcall <std::io::stdio::StdinLock_as_std::io::Read>::read(long *param_1)

{
  FUN_0070100c(*param_1 + 8);
  return;
}


// ===== 00703a78  <std::io::stdio::StdinLock_as_std::io::Read>::read_buf =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StdinLock as std::io::Read>::read_buf */

void __rustcall <std::io::stdio::StdinLock_as_std::io::Read>::read_buf(long *param_1)

{
  FUN_00701220(*param_1 + 8);
  return;
}


// ===== 00703a84  <str_as_std::net::socket_addr::ToSocketAddrs>::to_socket_addrs =====

/* WARNING: Removing unreachable block (ram,0x00703cd8) */
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
    puVar4 = (undefined8 *)__rustc::__rust_alloc(0x20,4);
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
  FUN_006fcdd8(&local_200,&local_1d0);
  ppuVar2 = local_1f8;
  if (local_200 == 1) {
    param_3 = param_3 - lStack_1f0;
    if (param_3 == 0) {
LAB_00703b70:
      ppuVar3 = &PTR_DAT_00977fb8;
    }
    else {
      pbVar6 = (byte *)((long)param_2 + lStack_1f0);
      if (param_3 == 1) {
        bVar1 = *pbVar6;
        ppuVar3 = &PTR_DAT_00977fb8;
        if ((bVar1 == 0x2b) || (bVar1 == 0x2d)) goto LAB_00703bc8;
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
            ppuVar3 = &PTR_DAT_00977fb8;
            if (9 < *pbVar6 - 0x30) goto LAB_00703bc8;
            iVar7 = (*pbVar6 - 0x30) + iVar7 * 10;
            local_1dc[0] = (undefined2)iVar7;
            uVar5 = uVar5 - 1;
            pbVar6 = pbVar6 + 1;
          } while (uVar5 != 0);
        }
LAB_00703b68:
        local_1d8 = local_1dc;
        if (local_1f8 < (undefined **)0x180) {
          memcpy(&local_1d0,param_2,(size_t)local_1f8);
          *(undefined1 *)((long)&local_1d0 + (long)ppuVar2) = 0;
          <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul
                    (&local_50,&local_1d0,(long)ppuVar2 + 1);
          if (local_50 == 1) {
            local_1f8 = &PTR_DAT_00977090;
            ppuVar3 = local_1f8;
            goto LAB_00703bc8;
          }
          FUN_006d20c0(&local_200,&local_1d8,uStack_48);
        }
        else {
          FUN_006c9704(&local_200,param_2,local_1f8,&local_1d8);
        }
        ppuVar3 = local_1f8;
        if ((local_200 & 1) == 0) {
          FUN_006fa580(&local_1d0,&local_50);
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
          if (uVar5 == 0) goto LAB_00703b68;
          uVar8 = ((uVar8 & 0xffff) + (uVar8 & 0xffff) * 4) * 2;
          if ((uVar8 & 0xf0000) != 0) goto LAB_00703b70;
          ppuVar3 = &PTR_DAT_00977fb8;
          if (9 < *pbVar6 - 0x30) break;
          uVar5 = uVar5 - 1;
          uVar8 = (uVar8 & 0xffff) + (*pbVar6 - 0x30 & 0xffff);
          pbVar6 = pbVar6 + 1;
          ppuVar3 = &PTR_DAT_00977fb8;
        } while (uVar8 >> 0x10 == 0);
      }
    }
  }
  else {
    ppuVar3 = &PTR_DAT_00977fd0;
  }
LAB_00703bc8:
  local_1f8 = ppuVar3;
  *param_1 = 0;
  param_1[1] = (long)local_1f8;
  return;
}


// ===== 00703d58  <std::net::tcp::TcpStream_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::net::tcp::TcpStream as core::fmt::Debug>::fmt */

void __rustcall <std::net::tcp::TcpStream_as_core::fmt::Debug>::fmt(void)

{
  (*(code *)PTR_fmt_009a1bf0)();
  return;
}


// ===== 00703d5c  FUN_00703d5c =====

void FUN_00703d5c(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,&DAT_003748b0,8,&local_18,&DAT_00978670);
  return;
}


// ===== 00703d9c  <std::os::fd::owned::BorrowedFd_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::os::fd::owned::BorrowedFd as core::fmt::Debug>::fmt */

void __rustcall
<std::os::fd::owned::BorrowedFd_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_30 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,&DAT_0045c424,10);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
            (auStack_30,&DAT_0045ba82,2,param_1,&DAT_00978690);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 00703e00  <std::sys::net::connection::socket::TcpStream_as_core::fmt::Debug>::fmt =====

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
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_70,param_2,&DAT_0045c42e,9);
  uVar1 = *param_1;
  FUN_006dcc64(&local_60,uVar1);
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
                    /* try { // try from 00703e8c to 00703eab has its CatchHandler @ 00703f70 */
    <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
              (auStack_70,&DAT_003769d8,4,&local_40,&DAT_009786c8);
  }
  FUN_006dcdfc(&local_60,uVar1);
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
                    /* try { // try from 00703f04 to 00703f23 has its CatchHandler @ 00703f5c */
    <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
              (auStack_70,&DAT_00379d90,4,&local_40,&DAT_009786c8);
  }
  local_40 = CONCAT44(local_40._4_4_,uVar1);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
            (auStack_70,&DAT_0045ba82,2,&local_40,&DAT_00977f60);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 00703f8c  <std::sys::process::unix::common::Command_as_core::fmt::Debug>::fmt =====

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
    <core::fmt::[a]::core::fmt::Formatter>::debug_struct(&local_80,param_2,&DAT_0045c43e,7);
    uVar17 = <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
                       (&local_80,&DAT_0045c445,7,param_1 + 0x80,&PTR_FUN_00978700);
    <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
              (uVar17,&DAT_003767c8,4,param_1,&PTR_FUN_00978720);
    if (((*(byte *)(param_1 + 0x78) & 1) != 0) || (*(long *)(param_1 + 0x70) != 0)) {
      <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
                (&local_80,&DAT_0045c44c,3,param_1 + 0x60,&PTR_FUN_00978740);
    }
    if (*(long *)(param_1 + 0x90) != 0) {
      <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
                (&local_80,&DAT_0045c44f,3,(long *)(param_1 + 0x90),&PTR_FUN_00978760);
    }
    if (*(int *)(param_1 + 0x30) != 0) {
      <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
                (&local_80,&DAT_0045c452,3,(int *)(param_1 + 0x30),&DAT_00978780);
    }
    if (*(int *)(param_1 + 0x38) != 0) {
      <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
                (&local_80,&DAT_0045c455,3,(int *)(param_1 + 0x38),&DAT_00978780);
    }
    if (*(long *)(param_1 + 0xb0) != 0) {
      <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
                (&local_80,&DAT_0045c458,6,(long *)(param_1 + 0xb0),&PTR_FUN_009787a0);
    }
    if (*(int *)(param_1 + 0x48) != -1) {
      <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
                (&local_80,&DAT_0045c1f8,5,(int *)(param_1 + 0x48),&PTR_FUN_009787c0);
    }
    if (*(int *)(param_1 + 0x50) != -1) {
      <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
                (&local_80,&DAT_0045b81e,6,(int *)(param_1 + 0x50),&PTR_FUN_009787c0);
    }
    if (*(int *)(param_1 + 0x58) != -1) {
      <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
                (&local_80,&DAT_0045b824,6,(int *)(param_1 + 0x58),&PTR_FUN_009787c0);
    }
    if (*(int *)(param_1 + 0x40) != 0) {
      <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
                (&local_80,&DAT_0045c45e,6,(int *)(param_1 + 0x40),&DAT_009787e0);
    }
    uVar17 = <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish(&local_80);
    return uVar17;
  }
  if (*(long *******)(param_1 + 0x90) != (long ******)0x0) {
    local_80 = &local_98;
    local_78 = FUN_006ff244;
    local_98 = (long *******)(param_1 + 0x90);
    uVar6 = core::fmt::write(*param_2,param_2[1],&DAT_003690ac,&local_80);
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
          if (*(short *)((long)plVar21 + 0x21a) == 0) goto LAB_00704288;
        }
        else {
          plVar11 = plVar21;
          if (*(ushort *)((long)plVar21 + 0x21a) <= uVar6) {
LAB_00704288:
            do {
              plVar21 = (long *)*plVar11;
              if (plVar21 == (long *)0x0) {
                    /* try { // try from 00704664 to 0070466f has its CatchHandler @ 007046c4 */
                    /* WARNING: Subroutine does not return */
                core::option::unwrap_failed(&PTR_s__rustc_48a229ceaefd4985c50990b14_00977248);
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
             (uVar19 = (**(code **)(lVar3 + 0x18))(uVar17,&DAT_00379d98,4), (uVar19 & 1) != 0)) {
            return 1;
          }
          <alloc::string::alloc::string::String>::from_utf8_lossy(&local_80,lVar10,lVar2);
          local_98 = (long *******)&local_80;
          local_90 = FUN_00708a54;
                    /* try { // try from 00704340 to 00704357 has its CatchHandler @ 00704688 */
          iVar5 = core::fmt::write(uVar17,lVar3,&DAT_00370329,&local_98);
          if (iVar5 != 0) {
            if ((long)local_80 < 1) {
              return 1;
            }
            __rustc::__rust_dealloc(local_78,local_80,1);
            return 1;
          }
          if (0 < (long)local_80) {
            __rustc::__rust_dealloc(local_78,local_80,1);
          }
          bVar8 = true;
        }
        lVar12 = lVar12 + -1;
        plVar9 = (long *)0x0;
      } while (lVar12 != 0);
    }
  }
  else {
    uVar6 = (**(code **)(param_2[1] + 0x18))(*param_2,&DAT_0045c437,7);
    if ((uVar6 & 1) != 0) {
      return 1;
    }
    plVar13 = *(long **)(param_1 + 0x60);
    lVar15 = *(long *)(param_1 + 0x70);
  }
  puVar4 = PTR_fmt_0099f7b8;
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
        if (*(short *)((long)plVar9 + 0x21a) == 0) goto LAB_007043f8;
      }
      else {
        plVar21 = plVar9;
        if (*(ushort *)((long)plVar9 + 0x21a) <= uVar6) {
LAB_007043f8:
          do {
            plVar9 = (long *)*plVar21;
            if (plVar9 == (long *)0x0) {
                    /* try { // try from 00704654 to 0070465f has its CatchHandler @ 007046c8 */
                    /* WARNING: Subroutine does not return */
              core::option::unwrap_failed(&PTR_s__rustc_48a229ceaefd4985c50990b14_00977248);
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
        local_78 = FUN_00708a54;
                    /* try { // try from 00704490 to 0070449b has its CatchHandler @ 007046a0 */
        local_80 = &local_98;
        local_70 = &local_a8;
        iVar5 = core::fmt::write(*param_2,param_2[1],&DAT_00365960,&local_80);
        if (iVar5 != 0) {
          if ((long)local_98 < 1) {
            return 1;
          }
          __rustc::__rust_dealloc(local_90,local_98,1);
          return 1;
        }
        if (0 < (long)local_98) {
          __rustc::__rust_dealloc(local_90,local_98,1);
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
              (0,lVar12,0,&PTR_s__rustc_48a229ceaefd4985c50990b14_009786e8);
  }
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check(0,0,&PTR_s__rustc_48a229ceaefd4985c50990b14_009786e8);
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
      goto LAB_00704548;
    }
  }
  else {
    uVar17 = *param_2;
  }
  uVar14 = param_2[1];
  local_78 = (code *)PTR_fmt_0099f7f0;
  local_80 = (undefined8 *******)(param_1 + 0x80);
  uVar6 = core::fmt::write(uVar17,uVar14,&DAT_0036710e,&local_80);
  if ((uVar6 & 1) != 0) {
    return 1;
  }
  __s = (undefined8 ******)*puVar20;
LAB_00704548:
  sVar7 = strlen((char *)__s);
  local_90 = (code *)(sVar7 + 1);
  local_80 = &local_98;
  local_78 = FUN_006ff1d8;
  local_98 = (long *******)__s;
  uVar6 = core::fmt::write(uVar17,uVar14,&DAT_00368e80,&local_80);
  puVar4 = PTR_fmt_0099f7b8;
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
      uVar6 = core::fmt::write(uVar17,uVar14,&DAT_00369523,&local_80);
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


// ===== 007046cc  <std::sys::process::unix::common::cstring_array::CStringIter_as_core::iter::traits::iterator::Iterator>::next =====

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


// ===== 0070471c  <std::sys::process::unix::common::cstring_array::CStringIter_as_core::iter::traits::iterator::Iterator>::size_hint =====

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


// ===== 00704738  <&std::fs::File_as_std::io::Read>::read_to_end =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::fs::File as std::io::Read>::read_to_end */

undefined1  [16] __rustcall
<&std::fs::File_as_std::io::Read>::read_to_end(undefined8 *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  long local_58;
  ulong local_50;
  
  auVar5 = FUN_006ee098(*param_1);
  uVar4 = param_2[2];
  uVar3 = *param_2;
  uVar1 = auVar5._8_8_;
  if ((auVar5 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
    uVar1 = 0;
  }
  if (uVar1 <= uVar3 - uVar4) {
LAB_00704804:
    auVar5 = FUN_006c5c18(param_1,param_2,auVar5._0_8_,auVar5._8_8_);
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
    FUN_006df348(&local_58,uVar3,param_2[1],uVar2,1,1);
    if (local_58 != 1) {
      *param_2 = uVar2;
      param_2[1] = local_50;
      goto LAB_00704804;
    }
  }
  auVar5._8_8_ = 0x2600000003;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 0070482c  <&std::fs::File_as_std::io::Read>::read_to_string =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::fs::File as std::io::Read>::read_to_string */

undefined1  [16] __rustcall
<&std::fs::File_as_std::io::Read>::read_to_string(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long local_58 [3];
  
  auVar5 = FUN_006ee098(*param_1);
  uVar1 = auVar5._8_8_;
  if ((auVar5 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
    uVar1 = 0;
  }
  lVar3 = <alloc::string::alloc::string::String>::try_reserve(param_2,uVar1);
  if (lVar3 == -1) {
    lVar4 = *(long *)(param_2 + 0x10);
                    /* try { // try from 0070489c to 007048af has its CatchHandler @ 0070492c */
    auVar6 = FUN_006c5c18(param_1,param_2,auVar5._0_8_,auVar5._8_8_);
    lVar3 = *(long *)(param_2 + 0x10);
                    /* try { // try from 007048bc to 007048cb has its CatchHandler @ 00704914 */
    core::str::converts::from_utf8(local_58,*(long *)(param_2 + 8) + lVar4,lVar3 - lVar4);
    if (local_58[0] != 0) {
      puVar2 = auVar6._8_8_;
      if ((auVar6 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
        puVar2 = &UNK_00976e60;
      }
      auVar6._8_8_ = puVar2;
      auVar6._0_8_ = 1;
      lVar3 = lVar4;
    }
    *(long *)(param_2 + 0x10) = lVar3;
    return auVar6;
  }
  auVar5._8_8_ = 0x2600000003;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 0070493c  <std::env::SplitPaths_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::env::SplitPaths as core::fmt::Debug>::fmt */

void __rustcall
<std::env::SplitPaths_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,&DAT_0045c464,10);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish_non_exhaustive(auStack_20);
  return;
}


// ===== 00704974  <std::path::Components_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::path::Components as core::fmt::Debug>::fmt */

void __rustcall
<std::path::Components_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [24];
  undefined1 local_30 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple(auStack_48,param_2,&DAT_0045c46e,10);
  local_30 = <std::path::[8]::std::path::Components>::as_path(param_1);
  <core::fmt::builders::[2]::core::fmt::builders::DebugTuple>::field
            (auStack_48,local_30,&DAT_00978800);
  <core::fmt::builders::[2]::core::fmt::builders::DebugTuple>::finish();
  return;
}


// ===== 007049d8  <std[29fbf8137994c300]::time::SystemTime_as_core[188d2c0002da36d0]::ops::arith::AddAssign<core[188d2c0002da36d0]::time::Duration>>::add_assign =====

/* <std[29fbf8137994c300]::time::SystemTime as
   core[188d2c0002da36d0]::ops::arith::AddAssign<core[188d2c0002da36d0]::time::Duration>>::add_assign
    */

void <std[29fbf8137994c300]::time::SystemTime_as_core[188d2c0002da36d0]::ops::arith::AddAssign<core[188d2c0002da36d0]::time::Duration>>
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
      if (bVar1) goto LAB_00704a2c;
      uVar3 = uVar3 + 0xc4653600;
    }
    *param_1 = lVar2;
    *(uint *)(param_1 + 1) = uVar3;
    return;
  }
LAB_00704a2c:
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed(&DAT_0045c3e8,0x2d,&PTR_s__rustc_48a229ceaefd4985c50990b14_00978820);
}


// ===== 00704a4c  <std::process::ChildStdin_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::process::ChildStdin as core::fmt::Debug>::fmt */

void __rustcall
<std::process::ChildStdin_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,&DAT_0045c478,10);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish_non_exhaustive(auStack_20);
  return;
}


// ===== 00704a84  <std::io::pipe::PipeWriter_as_std::io::Write>::write_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::pipe::PipeWriter as std::io::Write>::write_vectored */

undefined1  [16] __rustcall
<std::io::pipe::PipeWriter_as_std::io::Write>::write_vectored
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
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 00704b18  <std::io::pipe::PipeWriter_as_std::io::Write>::write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::pipe::PipeWriter as std::io::Write>::write */

undefined1  [16] __rustcall
<std::io::pipe::PipeWriter_as_std::io::Write>::write(int *param_1,void *param_2,size_t param_3)

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
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 00704ba0  <std::os::fd::owned::OwnedFd_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::os::fd::owned::OwnedFd as core::fmt::Debug>::fmt */

void __rustcall
<std::os::fd::owned::OwnedFd_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_30 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,&DAT_0045c482,7);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
            (auStack_30,&DAT_0045ba82,2,param_1,&DAT_00978690);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 00704c04  FUN_00704c04 =====

void FUN_00704c04(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,&DAT_00375c28,8,&local_18,&DAT_00978838);
  return;
}


// ===== 00704c44  <std::sys::fs::unix::FileType_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::fs::unix::FileType as core::fmt::Debug>::fmt */

void __rustcall
<std::sys::fs::unix::FileType_as_core::fmt::Debug>::fmt(undefined4 *param_1,undefined8 param_2)

{
  undefined1 auStack_30 [16];
  undefined4 local_4;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,&DAT_00375120,8);
  local_4 = *param_1;
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
            (auStack_30,&DAT_003799a4,4,&local_4,&DAT_00978858);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 00704cb0  <std::os::unix::net::listener::Incoming_as_core::iter::traits::iterator::Iterator>::next =====

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
  FUN_006d7c74(&local_30,*param_2,&local_a0,&local_4);
  if (local_30 == 1) {
    local_2c = 0xffffffff;
  }
  else {
    local_28 = local_a0;
    if ((local_4 != 0) && (((ulong)local_a0 & 0xffff) != 1)) {
      close(local_2c);
      local_2c = 0xffffffff;
      local_28 = &PTR_DAT_009774f8;
    }
  }
  *param_1 = (uint)(local_2c == 0xffffffff);
  param_1[1] = local_2c;
  *(undefined ***)(param_1 + 2) = local_28;
  return;
}


// ===== 00704d58  <std::sys::process::unix::common::ExitCode_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::process::unix::common::ExitCode as core::fmt::Debug>::fmt */

void __rustcall
<std::sys::process::unix::common::ExitCode_as_core::fmt::Debug>::fmt
          (undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple(auStack_38,param_2,&DAT_00371430,0x10);
  <core::fmt::builders::[2]::core::fmt::builders::DebugTuple>::field
            (auStack_38,param_1,&DAT_00978878);
  <core::fmt::builders::[2]::core::fmt::builders::DebugTuple>::finish();
  return;
}


// ===== 00704db0  <std::sys::process::unix::common::cstring_array::CStringIter_as_core::iter::traits::exact_size::ExactSizeIterator>::len =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::process::unix::common::cstring_array::CStringIter as
   core::iter::traits::exact_size::ExactSizeIterator>::len */

ulong __rustcall
<std::sys::process::unix::common::cstring_array::CStringIter_as_core::iter::traits::exact_size::ExactSizeIterator>
::len(long *param_1)

{
  return (ulong)(param_1[1] - *param_1) >> 3;
}


// ===== 00704dc0  <&std::fs::File_as_std::io::Write>::write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::fs::File as std::io::Write>::write */

undefined1  [16] __rustcall
<&std::fs::File_as_std::io::Write>::write(undefined8 *param_1,void *param_2,size_t param_3)

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
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 00704e4c  <std::env::JoinPathsError_as_core::fmt::Display>::fmt =====

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
  puStack_18 = PTR_fmt_0099f5a8;
  core::fmt::write(*param_2,param_2[1],&DAT_0036836f,&local_20);
  return;
}


// ===== 00704e90  <std[29fbf8137994c300]::time::SystemTime_as_core[188d2c0002da36d0]::ops::arith::Sub<core[188d2c0002da36d0]::time::Duration>>::sub =====

/* <std[29fbf8137994c300]::time::SystemTime as
   core[188d2c0002da36d0]::ops::arith::Sub<core[188d2c0002da36d0]::time::Duration>>::sub */

undefined1  [16]
<std[29fbf8137994c300]::time::SystemTime_as_core[188d2c0002da36d0]::ops::arith::Sub<core[188d2c0002da36d0]::time::Duration>>
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
  core::option::expect_failed(&DAT_0045c489,0x34,param_5);
}


// ===== 00704ee8  <std::io::stdio::StdinLock_as_std::io::BufRead>::read_until =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StdinLock as std::io::BufRead>::read_until */

void __rustcall <std::io::stdio::StdinLock_as_std::io::BufRead>::read_until(long *param_1)

{
  FUN_006c534c(*param_1 + 8);
  return;
}


// ===== 00704ef4  <std::io::stdio::StdinLock_as_std::io::BufRead>::consume =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StdinLock as std::io::BufRead>::consume */

void __rustcall <std::io::stdio::StdinLock_as_std::io::BufRead>::consume(long *param_1,long param_2)

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


// ===== 00704f10  <std::io::stdio::StdinLock_as_std::io::BufRead>::fill_buf =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StdinLock as std::io::BufRead>::fill_buf */

void __rustcall
<std::io::stdio::StdinLock_as_std::io::BufRead>::fill_buf(long *param_1,long *param_2)

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
      if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
        core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
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


// ===== 0070500c  <std::io::stdio::StdinLock_as_std::io::BufRead>::read_line =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StdinLock as std::io::BufRead>::read_line */

undefined1  [16] __rustcall
<std::io::stdio::StdinLock_as_std::io::BufRead>::read_line(long *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long local_58 [3];
  
  lVar3 = *(long *)(param_2 + 0x10);
                    /* try { // try from 00705030 to 0070503f has its CatchHandler @ 007050b4 */
  auVar4 = FUN_006c534c(*param_1 + 8,10,param_2);
  lVar2 = *(long *)(param_2 + 0x10);
                    /* try { // try from 0070504c to 0070505b has its CatchHandler @ 0070509c */
  core::str::converts::from_utf8(local_58,*(long *)(param_2 + 8) + lVar3,lVar2 - lVar3);
  puVar1 = auVar4._8_8_;
  if ((auVar4 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
    puVar1 = &UNK_00976e60;
  }
  if (local_58[0] != 0) {
    auVar4._8_8_ = puVar1;
    auVar4._0_8_ = 1;
    lVar2 = lVar3;
  }
  *(long *)(param_2 + 0x10) = lVar2;
  return auVar4;
}


// ===== 007050c4  <std::net::tcp::Incoming_as_core::iter::traits::iterator::Iterator>::next =====

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


// ===== 00705104  <&std::fs::File_as_std::io::Seek>::stream_len =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::fs::File as std::io::Seek>::stream_len */

undefined1  [16] __rustcall <&std::fs::File_as_std::io::Seek>::stream_len(undefined8 *param_1)

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
        if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
          core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
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
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  auVar8._8_8_ = (long)iVar3 << 0x20 | 2;
  auVar8._0_8_ = 1;
  return auVar8;
}


// ===== 0070528c  <&std::fs::File_as_std::io::Seek>::stream_position =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::fs::File as std::io::Seek>::stream_position */

undefined1  [16] __rustcall <&std::fs::File_as_std::io::Seek>::stream_position(undefined8 *param_1)

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
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 00705320  <&std::fs::File_as_std::io::Seek>::seek =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::fs::File as std::io::Seek>::seek */

undefined1  [16] __rustcall
<&std::fs::File_as_std::io::Seek>::seek(undefined8 *param_1,long param_2,__off64_t param_3)

{
  int iVar1;
  __off64_t _Var2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  _Var2 = lseek64(*(int *)*param_1,param_3,*(int *)(&DAT_0045c8f8 + param_2 * 4));
  if (_Var2 != -1) {
    auVar4._1_7_ = 0;
    auVar4[0] = _Var2 == -1;
    auVar4._8_8_ = _Var2;
    return auVar4;
  }
  piVar3 = (int *)__errno(0xffffffffffffffff,0xffffffffffffffff);
  iVar1 = *piVar3;
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 007053c0  <std[29fbf8137994c300]::time::SystemTime_as_core[188d2c0002da36d0]::ops::arith::SubAssign<core[188d2c0002da36d0]::time::Duration>>::sub_assign =====

/* <std[29fbf8137994c300]::time::SystemTime as
   core[188d2c0002da36d0]::ops::arith::SubAssign<core[188d2c0002da36d0]::time::Duration>>::sub_assign
    */

void <std[29fbf8137994c300]::time::SystemTime_as_core[188d2c0002da36d0]::ops::arith::SubAssign<core[188d2c0002da36d0]::time::Duration>>
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
  core::option::expect_failed(&DAT_0045c489,0x34,&PTR_s__rustc_48a229ceaefd4985c50990b14_00978898);
}


// ===== 00705434  FUN_00705434 =====

undefined1  [16] FUN_00705434(long *param_1,undefined8 *param_2,ulong param_3)

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
      FUN_006cecec(param_1,param_1[2],uVar10,1,1);
    }
    lVar6 = param_1[2];
    do {
      __src = (void *)*param_2;
      __n = param_2[1];
      if ((ulong)(*param_1 - lVar6) < __n) {
        FUN_006cecec(param_1,lVar6,__n,1,1);
        lVar6 = param_1[2];
LAB_00705548:
        memcpy((void *)(param_1[1] + lVar6),__src,__n);
      }
      else if (__n != 0) goto LAB_00705548;
      param_2 = param_2 + 2;
      lVar6 = lVar6 + __n;
      param_1[2] = lVar6;
    } while (param_2 != puVar3);
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar10;
  return auVar4 << 0x40;
}


// ===== 007055a0  FUN_007055a0 =====

undefined8 FUN_007055a0(void)

{
  return 1;
}


// ===== 007055a8  FUN_007055a8 =====

undefined8 FUN_007055a8(long *param_1,undefined8 *param_2,ulong param_3)

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
      FUN_006cecec(param_1,lVar7,uVar4,1,1);
      lVar7 = param_1[2];
    }
    do {
      __src = (void *)*param_2;
      uVar4 = param_2[1];
      if ((ulong)(*param_1 - lVar7) < uVar4) {
        FUN_006cecec(param_1,lVar7,uVar4,1,1);
        lVar7 = param_1[2];
LAB_007056ac:
        memcpy((void *)(param_1[1] + lVar7),__src,uVar4);
      }
      else if (uVar4 != 0) goto LAB_007056ac;
      param_2 = param_2 + 2;
      lVar7 = lVar7 + uVar4;
      param_1[2] = lVar7;
    } while (param_2 != puVar3);
  }
  return 0;
}


// ===== 00705704  FUN_00705704 =====

undefined8 FUN_00705704(void)

{
  return 0;
}


// ===== 0070570c  FUN_0070570c =====

undefined1  [16] FUN_0070570c(long *param_1,void *param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  long lVar2;
  
  lVar2 = param_1[2];
  if ((ulong)(*param_1 - lVar2) < param_3) {
    FUN_006cecec(param_1,lVar2,param_3,1,1);
    lVar2 = param_1[2];
  }
  else if (param_3 == 0) goto LAB_0070574c;
  memcpy((void *)(param_1[1] + lVar2),param_2,param_3);
LAB_0070574c:
  param_1[2] = lVar2 + param_3;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_3;
  return auVar1 << 0x40;
}


// ===== 00705794  FUN_00705794 =====

undefined8 FUN_00705794(long *param_1,void *param_2,ulong param_3)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if ((ulong)(*param_1 - lVar1) < param_3) {
    FUN_006cecec(param_1,lVar1,param_3,1,1);
    lVar1 = param_1[2];
  }
  else if (param_3 == 0) goto LAB_007057d4;
  memcpy((void *)(param_1[1] + lVar1),param_2,param_3);
LAB_007057d4:
  param_1[2] = lVar1 + param_3;
  return 0;
}


// ===== 00705818  <std::io::stdio::StdinLock_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StdinLock as core::fmt::Debug>::fmt */

void __rustcall
<std::io::stdio::StdinLock_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,&DAT_0045c4bd,9);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish_non_exhaustive(auStack_20);
  return;
}


// ===== 00705850  <alloc::string::String_as_std::net::socket_addr::ToSocketAddrs>::to_socket_addrs =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::string::String as std::net::socket_addr::ToSocketAddrs>::to_socket_addrs */

void __rustcall
<alloc::string::String_as_std::net::socket_addr::ToSocketAddrs>::to_socket_addrs(long param_1)

{
  <str_as_std::net::socket_addr::ToSocketAddrs>::to_socket_addrs
            (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  return;
}


// ===== 0070585c  <std::sys::fs::unix::FilePermissions_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::fs::unix::FilePermissions as core::fmt::Debug>::fmt */

void __rustcall
<std::sys::fs::unix::FilePermissions_as_core::fmt::Debug>::fmt
          (undefined4 *param_1,undefined8 param_2)

{
  undefined1 auStack_30 [16];
  undefined4 local_4;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,&DAT_0045c4c6,0xf);
  local_4 = *param_1;
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
            (auStack_30,&DAT_003799a4,4,&local_4,&DAT_00978858);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 007058c8  <std::sys::net::connection::socket::TcpListener_as_core::fmt::Debug>::fmt =====

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
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_70,param_2,&DAT_0045c4d5,0xb);
  uVar1 = *param_1;
  FUN_006dcc64(&local_60,uVar1);
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
                    /* try { // try from 00705954 to 00705973 has its CatchHandler @ 007059ac */
    <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
              (auStack_70,&DAT_003769d8,4,&local_40,&DAT_009786c8);
  }
  local_40 = CONCAT44(local_40._4_4_,uVar1);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
            (auStack_70,&DAT_0045ba82,2,&local_40,&DAT_00977f60);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 007059c8  <std::fs::DirEntry_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::fs::DirEntry as core::fmt::Debug>::fmt */

ulong __rustcall <std::fs::DirEntry_as_core::fmt::Debug>::fmt(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined1 auStack_50 [24];
  long local_38;
  undefined8 local_30;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple(auStack_50,param_2,&DAT_00374b70,8);
  <std::path::[16]::std::path::Path>::_join
            (&local_38,*(undefined8 *)(*param_1 + 0x18),*(undefined8 *)(*param_1 + 0x20),param_1[1],
             param_1[2] + -1);
                    /* try { // try from 00705a10 to 00705a27 has its CatchHandler @ 00705a58 */
  <core::fmt::builders::[2]::core::fmt::builders::DebugTuple>::field
            (auStack_50,&local_38,&PTR_FUN_009788b0);
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugTuple>::finish();
  if (local_38 != 0) {
    uVar1 = uVar1 & 0xffffffff;
    __rustc::__rust_dealloc(local_30,local_38,1);
  }
  return uVar1;
}


// ===== 00705a78  <&str_as_core::convert::TryFrom<&std::ffi::os_str::OsStr>>::try_from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&str as core::convert::TryFrom<&std::ffi::os_str::OsStr>>::try_from */

void __rustcall <&str_as_core::convert::TryFrom<&std::ffi::os_str::OsStr>>::try_from(void)

{
  (*(code *)PTR_from_utf8_009a0658)();
  return;
}


// ===== 00705a7c  <std::process::ExitStatus_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::process::ExitStatus as core::fmt::Display>::fmt */

void __rustcall <std::process::ExitStatus_as_core::fmt::Display>::fmt(void)

{
  (*(code *)PTR_fmt_009a1bc8)();
  return;
}


// ===== 00705a80  FUN_00705a80 =====

void FUN_00705a80(undefined8 param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00705a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_00705a9c + (ulong)(byte)(&DAT_0045ab9c)[*param_2] * 4))();
  return;
}


// ===== 00705ae8  <std::process::ExitStatusError_as_core::fmt::Display>::fmt =====

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
  puStack_18 = PTR_fmt_0099f7f8;
  core::fmt::write(*param_2,param_2[1],&DAT_00367c7f,&local_20);
  return;
}


// ===== 00705b2c  <std::ffi::os_str::Display_as_core::fmt::Debug>::fmt =====

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


// ===== 00705b54  <std::ffi::os_str::Display_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::ffi::os_str::Display as core::fmt::Display>::fmt */

void __rustcall
<std::ffi::os_str::Display_as_core::fmt::Display>::fmt(undefined8 *param_1,undefined8 param_2)

{
  <core::bstr::ByteStr_as_core::fmt::Display>::fmt(*param_1,param_1[1],param_2);
  return;
}


// ===== 00705b68  FUN_00705b68 =====

void FUN_00705b68(undefined8 param_1,long param_2)

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


// ===== 00705b80  FUN_00705b80 =====

void FUN_00705b80(long *param_1,undefined8 param_2)

{
  long *local_18;
  
  if (*param_1 != 0) {
    local_18 = param_1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_00377930,4,&local_18,&DAT_009788d0);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_00378aa0,4);
  return;
}


// ===== 00705bd8  FUN_00705bd8 =====

void FUN_00705bd8(int *param_1,undefined8 param_2)

{
  int *local_18;
  
  if (*param_1 != -1) {
    local_18 = param_1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_00377930,4,&local_18,&DAT_009788f0);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_00378aa0,4);
  return;
}


// ===== 00705c34  FUN_00705c34 =====

void FUN_00705c34(int *param_1,undefined8 param_2)

{
  int *local_18;
  
  if (*param_1 != -1) {
    local_18 = param_1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_00377930,4,&local_18,&DAT_00978910);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_00378aa0,4);
  return;
}


// ===== 00705c90  FUN_00705c90 =====

void FUN_00705c90(int *param_1,undefined8 param_2)

{
  int *local_18;
  
  if (*param_1 != -1) {
    local_18 = param_1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_00377930,4,&local_18,&DAT_00978930);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_00378aa0,4);
  return;
}


// ===== 00705cec  FUN_00705cec =====

void FUN_00705cec(long *param_1,undefined8 param_2)

{
  long *local_18;
  
  if (*param_1 != 0) {
    local_18 = param_1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_00377930,4,&local_18,&DAT_00978950);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_00378aa0,4);
  return;
}


// ===== 00705d44  FUN_00705d44 =====

void FUN_00705d44(int *param_1,undefined8 param_2)

{
  int *local_18;
  
  if (*param_1 != -1) {
    local_18 = param_1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_00377930,4,&local_18,&DAT_00978970);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_00378aa0,4);
  return;
}


// ===== 00705da0  FUN_00705da0 =====

void FUN_00705da0(long *param_1,undefined8 param_2)

{
  long *local_18;
  
  if (*param_1 != 0) {
    local_18 = param_1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_00377930,4,&local_18,&DAT_00978990);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_00378aa0,4);
  return;
}


// ===== 00705df8  FUN_00705df8 =====

void FUN_00705df8(int *param_1,undefined8 param_2)

{
  int *local_18;
  
  if (*param_1 == 1) {
    local_18 = param_1 + 1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_00377930,4,&local_18,&DAT_00976e08);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_00378aa0,4);
  return;
}


// ===== 00705e58  FUN_00705e58 =====

void FUN_00705e58(int *param_1,undefined8 param_2)

{
  int *local_18;
  
  if (*param_1 == 1) {
    local_18 = param_1 + 1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_00377930,4,&local_18,&DAT_00976ca8);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_00378aa0,4);
  return;
}


// ===== 00705eb8  FUN_00705eb8 =====

void FUN_00705eb8(undefined8 param_1,long param_2)

{
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <i64_as_core::fmt::LowerHex>::fmt();
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <i64_as_core::fmt::Display>::fmt();
    return;
  }
  <i64_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 00705ed0  FUN_00705ed0 =====

void FUN_00705ed0(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,&DAT_0045c4e0,0xb,&local_18,&DAT_009789b0);
  return;
}


// ===== 00705f10  FUN_00705f10 =====

void FUN_00705f10(undefined8 param_1,long param_2)

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


// ===== 00705f28  FUN_00705f28 =====

void FUN_00705f28(undefined8 param_1,long param_2)

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


// ===== 00705f40  FUN_00705f40 =====

void FUN_00705f40(undefined8 param_1,long param_2)

{
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <u64_as_core::fmt::LowerHex>::fmt();
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <usize_as_core::fmt::Display>::fmt();
    return;
  }
  <u64_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 00705f58  FUN_00705f58 =====

void FUN_00705f58(long param_1,undefined8 param_2)

{
  long local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field2_finish
            (param_2,&DAT_00375ed8,8,param_1 + 0x18,&DAT_00978508,&local_18,&DAT_009789d0);
  return;
}


// ===== 00705fa4  FUN_00705fa4 =====

undefined8 FUN_00705fa4(long *param_1,uint param_2)

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
    FUN_006cecec(param_1,lVar5,uVar6,1,1);
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


// ===== 007060c8  FUN_007060c8 =====

undefined8 FUN_007060c8(long *param_1,void *param_2,ulong param_3)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if ((ulong)(*param_1 - lVar1) < param_3) {
    FUN_006cecec(param_1,lVar1,param_3,1,1);
    lVar1 = param_1[2];
  }
  else if (param_3 == 0) goto LAB_00706108;
  memcpy((void *)(param_1[1] + lVar1),param_2,param_3);
LAB_00706108:
  param_1[2] = lVar1 + param_3;
  return 0;
}


// ===== 0070614c  FUN_0070614c =====

void FUN_0070614c(undefined8 param_1,long param_2)

{
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <u64_as_core::fmt::LowerHex>::fmt();
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <usize_as_core::fmt::Display>::fmt();
    return;
  }
  <u64_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 00706164  <std::fs::TryLockError_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::fs::TryLockError as core::fmt::Debug>::fmt */

void __rustcall <std::fs::TryLockError_as_core::fmt::Debug>::fmt(long *param_1,undefined8 param_2)

{
  if (*param_1 != 0) {
    <core::io::error::Error_as_core::fmt::Debug>::fmt(param_1,param_2);
    return;
  }
  <str_as_core::fmt::Debug>::fmt(&DAT_0045bf90,10);
  return;
}


// ===== 00706188  <std[29fbf8137994c300]::time::Instant_as_core[188d2c0002da36d0]::ops::arith::Add<core[188d2c0002da36d0]::time::Duration>>::add =====

/* <std[29fbf8137994c300]::time::Instant as
   core[188d2c0002da36d0]::ops::arith::Add<core[188d2c0002da36d0]::time::Duration>>::add */

undefined1  [16]
<std[29fbf8137994c300]::time::Instant_as_core[188d2c0002da36d0]::ops::arith::Add<core[188d2c0002da36d0]::time::Duration>>
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
      if (bVar2) goto LAB_007061cc;
      uVar1 = uVar1 + 0xc4653600;
    }
    auVar4._8_4_ = uVar1;
    auVar4._0_8_ = lVar3;
    auVar4._12_4_ = 0;
    return auVar4;
  }
LAB_007061cc:
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed(&DAT_0045c4eb,0x28,param_5);
}


// ===== 007061e8  <std::panic::PanicHookInfo_as_core::fmt::Display>::fmt =====

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
  
  uVar1 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_0045c513,0xc);
  if ((uVar1 & 1) == 0) {
    puVar2 = (undefined8 *)param_1[2];
    local_70 = *puVar2;
    uStack_68 = puVar2[1];
    pcStack_58 = FUN_006ff764;
    local_50 = puVar2 + 2;
    local_40 = (long)puVar2 + 0x14;
    puStack_48 = PTR_fmt_0099f518;
    puStack_38 = PTR_fmt_0099f518;
    local_60 = (undefined1 *)&local_70;
    uVar1 = core::fmt::write(*param_2,param_2[1],&DAT_0036fcf1,&local_60);
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
        if (pcStack_58 != (code *)0xbd0e79dcdba5d442 || local_60 != (undefined1 *)0x8e886d0ed19c3540
           ) {
          return 0;
        }
        puVar4 = puVar2 + 1;
        lVar3 = 0x10;
      }
      uVar7 = *puVar4;
      uVar5 = *(undefined8 *)((long)puVar2 + lVar3);
      uVar1 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_0045c51f,2);
      if (((uVar1 & 1) == 0) &&
         (uVar5 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,uVar7,uVar5),
         (int)uVar5 == 0)) {
        return uVar5;
      }
    }
  }
  return 1;
}


// ===== 00706360  <std::backtrace::BacktraceFrame_as_core::fmt::Debug>::fmt =====

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
      <core::fmt::builders::[4]::core::fmt::builders::DebugSet>::entry
                (auStack_40,&local_18,&DAT_00976be8);
      lVar1 = lVar1 + -0x48;
      lVar2 = lVar2 + 0x48;
    } while (lVar1 != 0);
  }
  <core::fmt::builders::[5]::core::fmt::builders::DebugList>::finish(auStack_40);
  return;
}


// ===== 007063dc  FUN_007063dc =====

void FUN_007063dc(undefined8 *param_1,long *param_2)

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
          if (uVar1 == uVar7) goto LAB_007065a8;
          while (*(char *)(lVar9 + uVar7 + uVar5) != cVar2) {
            uVar5 = uVar5 + 1;
            if (uVar1 - uVar7 == uVar5) goto LAB_007065a8;
          }
        }
        else {
          auVar10 = core::slice::memchr::memchr_aligned(cVar2,lVar9 + uVar7,uVar1 - uVar7);
          uVar5 = auVar10._8_8_;
          if (auVar10._0_8_ != 1) goto LAB_007065a8;
        }
        uVar7 = uVar7 + uVar5 + 1;
        param_2[2] = uVar7;
        if (((__n <= uVar7) && (uVar7 <= uVar8)) &&
           (iVar4 = memcmp((void *)(lVar9 + (uVar7 - __n)),param_2 + 4,__n), iVar4 == 0)) {
          uVar6 = 1;
          param_1[1] = uVar7 - __n;
          param_1[2] = uVar7;
          goto LAB_007065b0;
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
                goto LAB_0070656c;
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
LAB_0070656c:
        if (auVar10._0_8_ != 1) goto LAB_007065a8;
        uVar7 = uVar7 + auVar10._8_8_ + 1;
        param_2[2] = uVar7;
        if ((__n <= uVar7) && (uVar7 <= uVar8)) {
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (0,__n,4,&PTR_s__rustc_48a229ceaefd4985c50990b14_009789f0);
        }
        uVar6 = 0;
      } while (uVar7 <= uVar1);
    }
  }
LAB_007065b0:
  *param_1 = uVar6;
  return;
LAB_007065a8:
  uVar6 = 0;
  param_2[2] = uVar1;
  goto LAB_007065b0;
}


// ===== 007065d0  <std::backtrace_rs::backtrace::Frame_as_core::fmt::Debug>::fmt =====

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
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_40,param_2,&DAT_0045c521,5);
  lVar1 = param_1[1];
  if (*param_1 == 1) {
    local_30 = lVar1;
    uVar2 = <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
                      (auStack_40,&DAT_0045c526,2,&local_30,&DAT_00978318);
    local_28 = param_1[3];
  }
  else {
    local_30 = FUN_00751e80(lVar1);
    uVar2 = <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
                      (auStack_40,&DAT_0045c526,2,&local_30,&DAT_00978318);
    FUN_00751e80(lVar1);
    local_28 = FUN_00755a8c();
  }
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
            (uVar2,&DAT_0045c528,0xe,&local_28,&DAT_00978318);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 007066b0  <std::io::stdio::StdoutRaw_as_std::io::Write>::write_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StdoutRaw as std::io::Write>::write_vectored */

undefined1  [16] __rustcall
<std::io::stdio::StdoutRaw_as_std::io::Write>::write_vectored
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
    if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
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


// ===== 00706800  <std::io::stdio::StdoutRaw_as_std::io::Write>::write_all_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StdoutRaw as std::io::Write>::write_all_vectored */

undefined ** __rustcall
<std::io::stdio::StdoutRaw_as_std::io::Write>::write_all_vectored
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
  
  puVar3 = PTR_PTR_0099f738;
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
                (ppuVar6,param_3,param_3,&PTR_s__rustc_48a229ceaefd4985c50990b14_009779a0);
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
            return &PTR_DAT_00977df0;
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
                      (uVar11,uVar12,uVar12,&PTR_s__rustc_48a229ceaefd4985c50990b14_009779a0);
          }
          if (uVar12 - uVar11 == 0) {
            if (uVar7 == 0) {
              return (undefined **)0x0;
            }
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_fmt
                      (&DAT_0045b552,0x4f,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977970);
          }
          __iovec = __iovec + uVar11;
          if (__iovec->iov_len < uVar7) {
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_fmt
                      (&DAT_0045b579,0x47,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977988);
          }
          __iovec->iov_base = (void *)((long)__iovec->iov_base + uVar7);
          __iovec->iov_len = __iovec->iov_len - uVar7;
          uVar12 = uVar12 - uVar11;
        }
        piVar8 = (int *)__errno();
        iVar1 = *piVar8;
        if (*(undefined ***)puVar3 != &PTR_FUN_00977078) {
          core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
        }
                    /* try { // try from 00706938 to 00706947 has its CatchHandler @ 00706a10 */
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


// ===== 00706a2c  <std::io::stdio::StdoutRaw_as_std::io::Write>::write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StdoutRaw as std::io::Write>::write */

undefined1  [16] __rustcall
<std::io::stdio::StdoutRaw_as_std::io::Write>::write
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
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
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


// ===== 00706ab4  <std::io::stdio::StdoutRaw_as_std::io::Write>::write_all =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StdoutRaw as std::io::Write>::write_all */

ulong __rustcall
<std::io::stdio::StdoutRaw_as_std::io::Write>::write_all
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = FUN_0070e9f0(param_2,param_3);
  uVar2 = uVar1;
  if ((((uVar1 != 0) && (1 < (uVar1 & 3))) && ((uVar1 & 3) == 2)) && (uVar2 = 0, uVar1 >> 0x20 != 9)
     ) {
    uVar2 = uVar1;
  }
  return uVar2;
}


// ===== 00706af0  <std::io::stdio::StdoutRaw_as_std::io::Write>::write_fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StdoutRaw as std::io::Write>::write_fmt */

ulong __rustcall
<std::io::stdio::StdoutRaw_as_std::io::Write>::write_fmt
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
                    /* try { // try from 00706b0c to 00706b43 has its CatchHandler @ 00706bb4 */
  iVar1 = core::fmt::write(&local_40,&PTR_FUN_00976f80,param_2,param_3);
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
    core::panicking::panic_fmt(&DAT_0045acd3,0xad,&PTR_s__rustc_48a229ceaefd4985c50990b14_00976ea8);
  }
  uVar2 = local_38;
  if ((((local_38 != 0) && (1 < (local_38 & 3))) && ((local_38 & 3) != 3)) &&
     (uVar2 = 0, local_38 >> 0x20 != 9)) {
    uVar2 = local_38;
  }
  return uVar2;
}


// ===== 00706bcc  <std::net::tcp::TcpStream_as_std::io::Read>::read_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::net::tcp::TcpStream as std::io::Read>::read_vectored */

undefined1  [16] __rustcall
<std::net::tcp::TcpStream_as_std::io::Read>::read_vectored
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
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 00706c60  <std::net::tcp::TcpStream_as_std::io::Read>::read_buf =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::net::tcp::TcpStream as std::io::Read>::read_buf */

ulong __rustcall <std::net::tcp::TcpStream_as_std::io::Read>::read_buf(int *param_1,long *param_2)

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
  if (*(undefined ***)PTR_PTR_0099f738 == &PTR_FUN_00977078) {
    return (long)iVar2 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  return (long)iVar2 << 0x20 | 2;
}


// ===== 00706d08  <std::sync::barrier::Barrier_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sync::barrier::Barrier as core::fmt::Debug>::fmt */

void __rustcall
<std::sync::barrier::Barrier_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,&DAT_0045c536,7);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish_non_exhaustive(auStack_20);
  return;
}


// ===== 00706d40  <std::sync::nonpoison::WouldBlock_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sync::nonpoison::WouldBlock as core::fmt::Display>::fmt */

void __rustcall
<std::sync::nonpoison::WouldBlock_as_core::fmt::Display>::fmt(undefined8 param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt(&DAT_0045c53d,0x31,param_2);
  return;
}


// ===== 00706d54  <std::thread::local::AccessError_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::thread::local::AccessError as core::fmt::Debug>::fmt */

void __rustcall
<std::thread::local::AccessError_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,&DAT_0045c56e,0xb);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish(auStack_20);
  return;
}


// ===== 00706d8c  FUN_00706d8c =====

undefined1  [16] FUN_00706d8c(ulong *param_1,iovec *param_2,ulong param_3)

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
        if ((uVar7 & 1) == 0) goto LAB_00706de8;
LAB_00706e28:
        uVar7 = FUN_006e4500(param_1);
        if (uVar7 != 0) goto LAB_00706ebc;
        if (uVar3 < uVar20) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_fmt
                    (&DAT_0045b053,0x13,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977498);
        }
        uVar7 = writev(1,param_2,(int)uVar20);
        if (uVar7 != 0xffffffffffffffff) goto LAB_00706e58;
        piVar9 = (int *)__errno();
        iVar5 = *piVar9;
        if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
          core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
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
LAB_00706e58:
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
                  if (uVar7 < uVar11) goto LAB_00706f80;
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
              goto LAB_007071d0;
            }
            goto LAB_00706f80;
          }
          uVar7 = 0;
          uVar8 = 0;
        }
        else {
          uVar8 = 1;
          uVar7 = (long)iVar5 << 0x20 | 2;
        }
        goto LAB_007071d0;
      }
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        if (*pcVar4 == '\n') goto LAB_00706e28;
        pcVar4 = pcVar4 + 1;
      }
LAB_00706de8:
      uVar20 = uVar20 - 1;
      psVar15 = psVar15 + -2;
      lVar21 = lVar21 + 0x10;
      lVar22 = lVar22 + -0x10;
      piVar18 = piVar19;
    } while (param_2 != piVar19);
  }
  if (((param_1[2] == 0) || (*(char *)(param_1[1] + param_1[2] + -1) != '\n')) ||
     (uVar7 = FUN_006e4500(param_1), uVar7 == 0)) {
    lVar21 = uVar3 * 0x10;
    uVar7 = 0;
    piVar18 = param_2;
    do {
      if (lVar21 == 0) {
        if (param_3 == 0) {
LAB_00706f80:
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
        goto LAB_007071d0;
      }
      uVar20 = uVar7 + piVar18->iov_len;
      uVar11 = *param_1;
      if (CARRY8(uVar7,piVar18->iov_len)) {
        uVar20 = 0xffffffffffffffff;
      }
      if ((param_1[2] != 0) && (uVar11 - param_1[2] < uVar20)) {
        uVar7 = FUN_006e4500(param_1);
        if (uVar7 != 0) goto LAB_00706ebc;
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
      if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
        core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
      }
      if (iVar5 != 9) {
        uVar8 = 1;
        *(undefined1 *)(param_1 + 3) = 0;
        uVar7 = (long)iVar5 << 0x20 | 2;
        goto LAB_007071d0;
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
LAB_00706ebc:
    uVar8 = 1;
  }
LAB_007071d0:
  auVar26._8_8_ = uVar7;
  auVar26._0_8_ = uVar8;
  return auVar26;
}


// ===== 007071f0  <std::io::stdio::StdoutLock_as_std::os::unix::io::StdioExt>::take_fd =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined2 local_1ec;
  int local_1e8;
  int local_1e4;
  undefined **local_1e0;
  undefined8 local_1d8;
  undefined2 local_1d0;
  long local_58;
  undefined8 local_50;
  
  local_1d8 = DAT_0045b9b4;
  local_1d0 = 0x6c;
  local_1ec = 0;
  local_1f0 = 0x101;
  local_1f8 = _s__00373250;
  uVar5 = <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul
                    (&local_58,&local_1d8,10);
  if (local_58 == 1) {
    local_1e0 = &PTR_DAT_00977090;
  }
  else {
    uVar5 = FUN_006ea8b8(&local_1e8,local_50,&local_1f8);
    if (local_1e8 != 1) {
      iVar2 = fcntl(1,0x406,3);
      if (iVar2 == -1) {
        piVar6 = (int *)__errno();
        iVar2 = *piVar6;
        if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
                    /* try { // try from 007073ec to 007073f7 has its CatchHandler @ 00707410 */
          core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
        }
        *param_1 = 1;
        *(ulong *)(param_1 + 2) = (long)iVar2 << 0x20 | 2;
      }
      else {
        lVar7 = *param_2;
        if (*(long *)(lVar7 + 0x10) != 0) {
                    /* try { // try from 007073dc to 007073e7 has its CatchHandler @ 00707450 */
          core::cell::panic_already_borrowed(&PTR_s__rustc_48a229ceaefd4985c50990b14_00978ca0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x7073ec);
          (*pcVar1)();
        }
        *(undefined8 *)(lVar7 + 0x10) = 0xffffffffffffffff;
                    /* try { // try from 007072e4 to 007072eb has its CatchHandler @ 00707428 */
        uVar5 = FUN_006e4500(lVar7 + 0x18);
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
          if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
                    /* try { // try from 007073fc to 00707407 has its CatchHandler @ 0070740c */
            core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
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


// ===== 0070746c  <std::os::unix::xdg::XdgDirsIter_as_core::iter::traits::iterator::Iterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::os::unix::xdg::XdgDirsIter as core::iter::traits::iterator::Iterator>::next */

void __rustcall
<std::os::unix::xdg::XdgDirsIter_as_core::iter::traits::iterator::Iterator>::next
          (size_t *param_1,long param_2)

{
  void *__src;
  ulong uVar1;
  ulong uVar2;
  void *__dest;
  size_t __n;
  size_t sVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x10);
  uVar2 = *(ulong *)(param_2 + 0x18);
  if (uVar1 < uVar2) {
LAB_0070748c:
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
      __dest = (void *)__rustc::__rust_alloc(__n,1);
      if (__dest == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        alloc::raw_vec::handle_error(1,__n);
      }
      memcpy(__dest,__src,__n);
      if (__n == 0xffffffffffffffff) goto LAB_0070748c;
      goto LAB_00707520;
    }
  }
  __dest = (void *)0x1;
LAB_00707520:
  *param_1 = __n;
  param_1[1] = (size_t)__dest;
  param_1[2] = __n;
  *(ulong *)(param_2 + 0x18) = uVar2 + __n + 1;
  return;
}


// ===== 00707554  <std::os::unix::xdg::XdgDirsIter_as_core::iter::traits::iterator::Iterator>::size_hint =====

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


// ===== 00707574  <std::sys::fs::common::Dir_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::fs::common::Dir as core::fmt::Debug>::fmt */

void __rustcall
<std::sys::fs::common::Dir_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_30 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,&DAT_0045c579,3);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
            (auStack_30,&DAT_003786d4,4,param_1,&PTR_FUN_009788b0);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 007075d8  <std::sys::env::common::Env_as_core::fmt::Debug>::fmt =====

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
    <core::fmt::builders::[4]::core::fmt::builders::DebugSet>::entry
              (auStack_40,&local_18,&DAT_00976c68);
  }
  <core::fmt::builders::[5]::core::fmt::builders::DebugList>::finish(auStack_40);
  return;
}


// ===== 00707650  <std::sys::time::unix::SystemTime_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::time::unix::SystemTime as core::fmt::Debug>::fmt */

void __rustcall
<std::sys::time::unix::SystemTime_as_core::fmt::Debug>::fmt(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_30 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,&DAT_0045c57c,10);
  uVar1 = <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
                    (auStack_30,&DAT_0045c32c,6,param_1,&DAT_00978560);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
            (uVar1,&DAT_0045c332,7,param_1 + 8,&DAT_00978580);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 007076d0  <std::sys::stdio::unix::Stdin_as_std::io::Read>::read_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::stdio::unix::Stdin as std::io::Read>::read_vectored */

undefined1  [16] __rustcall
<std::sys::stdio::unix::Stdin_as_std::io::Read>::read_vectored
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
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 00707764  <std::sys::stdio::unix::Stdin_as_std::io::Read>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::stdio::unix::Stdin as std::io::Read>::read */

undefined1  [16] __rustcall
<std::sys::stdio::unix::Stdin_as_std::io::Read>::read
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
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 007077ec  <std::sys::stdio::unix::Stdin_as_std::io::Read>::read_buf =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::stdio::unix::Stdin as std::io::Read>::read_buf */

ulong __rustcall
<std::sys::stdio::unix::Stdin_as_std::io::Read>::read_buf(undefined8 param_1,long *param_2)

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
  if (*(undefined ***)PTR_PTR_0099f738 == &PTR_FUN_00977078) {
    return (long)iVar2 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  return (long)iVar2 << 0x20 | 2;
}


// ===== 0070789c  <std::sys::helpers::wstr::WStrUnits_as_core::iter::traits::iterator::Iterator>::next =====

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


// ===== 007078b4  <std::sync::mpmc::zero::ZeroToken_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sync::mpmc::zero::ZeroToken as core::fmt::Debug>::fmt */

void __rustcall
<std::sync::mpmc::zero::ZeroToken_as_core::fmt::Debug>::fmt(undefined8 *param_1,long param_2)

{
  undefined8 local_18;
  
  local_18 = *param_1;
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <u64_as_core::fmt::LowerHex>::fmt(&local_18);
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <usize_as_core::fmt::Display>::fmt();
    return;
  }
  <u64_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 00707908  <std::sync::poison::condvar::Condvar_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sync::poison::condvar::Condvar as core::fmt::Debug>::fmt */

void __rustcall
<std::sync::poison::condvar::Condvar_as_core::fmt::Debug>::fmt
          (undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,&DAT_0045c586,7);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish_non_exhaustive(auStack_20);
  return;
}


// ===== 00707940  <std::backtrace_rs::symbolize::gimli::parse_running_mmaps::MapsEntry_as_core::str::traits::FromStr>::from_str =====

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
        if (param_3 == 0) goto LAB_00707bf4;
        goto LAB_00707988;
      }
      uVar5 = uVar5 + 1;
    } while (param_3 != uVar5);
    if (param_3 != 0) {
LAB_00707988:
      uVar5 = 0;
      do {
        if (param_2[uVar5] == 0x20) {
          if ((uVar5 != 0) && (param_3 - 1 != uVar5)) {
            lVar6 = ~uVar5 + param_3;
            uVar9 = uVar5 + 1;
            goto LAB_007079c8;
          }
          break;
        }
        uVar5 = uVar5 + 1;
      } while (param_3 != uVar5);
    }
  }
  goto LAB_00707bf4;
  while (uVar9 = uVar9 + 1, param_3 != uVar9) {
LAB_007079c8:
    if (param_2[uVar9] != 0x20) {
      lVar6 = param_3 - uVar9;
      if (lVar6 == 0) goto LAB_00707bf4;
      goto LAB_007079f4;
    }
  }
  uVar9 = uVar5 + 1;
  if (lVar6 != 0) {
LAB_007079f4:
    lVar11 = 0;
    lVar6 = 1 - lVar6;
    pbVar12 = param_2 + uVar9;
    do {
      pbVar8 = pbVar12 + 1;
      if (*pbVar12 == 0x20) {
        if ((lVar11 != 0) && (lVar6 != 0)) {
          pbVar12 = pbVar8;
          uVar9 = -lVar6;
          goto LAB_00707a3c;
        }
        break;
      }
      lVar6 = lVar6 + 1;
      lVar11 = lVar11 + -1;
      pbVar12 = pbVar8;
    } while (lVar6 != 1);
  }
  goto LAB_00707bf4;
  while( true ) {
    uVar9 = uVar9 - 1;
    pbVar12 = pbVar12 + 1;
    pbVar7 = pbVar8;
    uVar13 = -lVar6;
    if (uVar9 == 0) break;
LAB_00707a3c:
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
          goto LAB_00707aa8;
        }
        break;
      }
      uVar9 = uVar9 + 1;
    } while (uVar13 != uVar9);
  }
  goto LAB_00707bf4;
  while( true ) {
    uVar13 = uVar13 - 1;
    pbVar8 = pbVar8 + 1;
    uVar14 = -lVar11;
    pbVar10 = pbVar12;
    if (uVar13 == 0) break;
LAB_00707b20:
    uVar14 = uVar13;
    pbVar10 = pbVar8;
    if (*pbVar8 != 0x20) break;
  }
  if (uVar14 == 0) goto LAB_00707bf4;
  uVar13 = 0;
  local_a0 = (byte *)0x1;
  do {
    if (pbVar10[uVar13] == 0x20) {
      if (uVar13 == 0) goto LAB_00707bf4;
      local_a0 = pbVar10 + uVar13 + 1;
      if (uVar14 - 1 != uVar13) {
        local_b8 = ~uVar13 + uVar14;
        goto LAB_00707c3c;
      }
      break;
    }
    uVar13 = uVar13 + 1;
  } while (uVar14 != uVar13);
  local_b8 = 0;
  goto LAB_00707b94;
  while( true ) {
    local_b8 = local_b8 + -1;
    local_a0 = local_a0 + 1;
    if (local_b8 == 0) break;
LAB_00707c3c:
    if (0x20 < *local_a0 || (1L << ((ulong)*local_a0 & 0x3f) & 0x100003600U) == 0)
    goto LAB_00707b94;
  }
  local_b8 = 0;
  local_a0 = pbVar10 + uVar14;
LAB_00707b94:
  local_50 = 0;
  local_38 = 1;
  local_40 = 0x2d0000002d;
  local_60 = param_2;
  local_58 = uVar5;
  uStack_48 = uVar5;
  FUN_007063dc(local_78,&local_60);
  if (((local_78[0] & 1) != 0) && (local_70 != 0)) {
    if (local_70 == 1) {
      bVar3 = *param_2;
      if ((bVar3 == 0x2b) || (bVar3 == 0x2d)) goto LAB_00707d3c;
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
        if (0xf < uVar1) goto LAB_00707d3c;
        uVar14 = (ulong)uVar1 | uVar14 << 4;
        pbVar12 = pbVar12 + 1;
      }
LAB_00707cc8:
      if (uVar5 != local_68) {
        param_2 = param_2 + local_68;
        if (uVar5 - local_68 == 1) {
          bVar3 = *param_2;
          if ((bVar3 == 0x2b) || (bVar3 == 0x2d)) goto LAB_00707d3c;
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
              if (0xf < uVar1) goto LAB_00707d3c;
              uVar13 = (ulong)uVar1 | uVar13 << 4;
              bVar4 = lVar6 != -1;
              lVar6 = lVar6 + 1;
              param_2 = param_2 + 1;
            } while (bVar4);
          }
LAB_00707dd8:
          FUN_006e0b9c(&local_60,pbVar7,uVar9);
          uVar5 = local_58;
          if ((char)local_60 != '\x01') {
            FUN_006cf360(&local_90,local_a0,local_b8);
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
            if (lVar6 == 0) goto LAB_00707dd8;
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
        if (uVar13 == 0) goto LAB_00707cc8;
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
LAB_00707d3c:
  param_1[1] = &DAT_0045c58d;
  param_1[2] = 0x11;
  *param_1 = 0xffffffffffffffff;
  return;
  while( true ) {
    lVar6 = lVar6 + -1;
    pbVar12 = pbVar12 + 1;
    lVar11 = ~uVar9 + uVar13;
    pbVar8 = pbVar7 + uVar9 + 1;
    if (lVar6 == 0) break;
LAB_00707aa8:
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
          goto LAB_00707b20;
        }
        break;
      }
      lVar11 = lVar11 + 1;
      lVar6 = lVar6 + -1;
      pbVar8 = pbVar12;
    } while (lVar11 != 1);
  }
LAB_00707bf4:
  param_1[1] = &DAT_0045c58d;
  param_1[2] = 0x11;
  *param_1 = 0xffffffffffffffff;
  return;
}


// ===== 00707e78  <std::backtrace_rs::symbolize::gimli::mmap::Mmap_as_core::ops::deref::Deref>::deref =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::backtrace_rs::symbolize::gimli::mmap::Mmap as core::ops::deref::Deref>::deref */

undefined1  [16] __rustcall
<std::backtrace_rs::symbolize::gimli::mmap::Mmap_as_core::ops::deref::Deref>::deref
          (undefined1 (*param_1) [16])

{
  return *param_1;
}


// ===== 00707e84  <std::os::unix::net::addr::SocketAddr_as_std::os::net::linux_ext::addr::SocketAddrExt>::as_abstract_name =====

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
                (1,uVar2,0x6c,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977510);
    }
    uVar2 = uVar3 - 3;
    if (0x6c < uVar2) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (0,uVar2,0x6c,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977528);
    }
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  return auVar1 << 0x40;
}


// ===== 00707ef8  <std::sys::fs::unix::cfm::CachedFileMetadata_as_std::io::Write>::write_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::fs::unix::cfm::CachedFileMetadata as std::io::Write>::write_vectored */

undefined1  [16] __rustcall
<std::sys::fs::unix::cfm::CachedFileMetadata_as_std::io::Write>::write_vectored
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
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 00707f8c  <std::sys::fs::unix::cfm::CachedFileMetadata_as_std::io::Write>::write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::fs::unix::cfm::CachedFileMetadata as std::io::Write>::write */

undefined1  [16] __rustcall
<std::sys::fs::unix::cfm::CachedFileMetadata_as_std::io::Write>::write
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
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 00708014  <std::sys::fs::unix::dir::Dir_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::fs::unix::dir::Dir as core::fmt::Debug>::fmt */

void __rustcall
<std::sys::fs::unix::dir::Dir_as_core::fmt::Debug>::fmt(undefined4 *param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  FUN_006f4ca0(auStack_20,*param_1,param_2,&DAT_0045c579,3);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish(auStack_20);
  return;
}


// ===== 00708054  <std::sys::net::connection::socket::LookupHost_as_core::iter::traits::iterator::Iterator>::next =====

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
        core::panicking::panic(&DAT_0045bcdc,0x34,&PTR_s__rustc_48a229ceaefd4985c50990b14_00978150);
      }
      iVar4 = *(int *)(psVar6 + 2);
      sVar8 = 0;
      ppuVar7 = &PTR_s_invalid_argument_00978180;
      uVar1 = (ushort)psVar6[1] >> 8 | (ushort)(((ushort)psVar6[1] & 0xff00ff) << 8);
LAB_007080ec:
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
    core::panicking::panic(&DAT_0045bd10,0x35,&PTR_s__rustc_48a229ceaefd4985c50990b14_00978168);
  }
  uVar3 = (ulong)*(uint *)(psVar6 + 2);
  in_w16 = *(undefined4 *)(psVar6 + 10);
  in_w13 = *(undefined4 *)(psVar6 + 0xc);
  uVar1 = psVar6[5];
  iVar4 = (uint)(ushort)psVar6[4] << 0x10;
  ppuVar7 = *(undefined ***)(psVar6 + 6);
  psVar6 = (short *)(ulong)((uint)((ushort)psVar6[1] >> 8) | ((ushort)psVar6[1] & 0xff00ff) << 8);
  sVar8 = 1;
  goto LAB_007080ec;
}


// ===== 00708150  <std::sys::sync::once::futex::CompletionGuard_as_core::ops::drop::Drop>::drop =====

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


// ===== 0070817c  <std::sys::process::unix::common::cstring_array::CStringArray_as_core::ops::index::Index<usize>>::index =====

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


// ===== 007081e8  <<std::io::buffered::bufwriter::std::io::buffered::bufwriter::BufWriter<_>>::flush_buf::BufGuard_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<std::io::buffered::bufwriter::std::io::buffered::bufwriter::BufWriter<_>>::flush_buf::BufGuard
   as core::ops::drop::Drop>::drop */

void __rustcall
<<std::io::buffered::bufwriter::std::io::buffered::bufwriter::BufWriter<_>>::flush_buf::BufGuard_as_core::ops::drop::Drop>
::drop(long *param_1)

{
  ulong __n;
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = param_1[1];
  if (uVar1 != 0) {
    lVar3 = *param_1;
    uVar2 = *(ulong *)(lVar3 + 0x10);
    __n = uVar2 - uVar1;
    if (uVar2 < uVar1) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (uVar1,uVar2,uVar2,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977d90);
    }
    memmove(*(void **)(lVar3 + 8),(void *)((long)*(void **)(lVar3 + 8) + uVar1),__n);
    if (__n <= *(ulong *)(lVar3 + 0x10)) {
      *(ulong *)(lVar3 + 0x10) = __n;
    }
  }
  return;
}


// ===== 00708250  FUN_00708250 =====

void FUN_00708250(long *param_1,undefined8 param_2)

{
  if (*param_1 != 0) {
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,*param_1,param_1[1]);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::process::abort();
}


// ===== 00708274  <std::panicking::panic_handler::FormatStringPayload_as_core::panic::PanicPayload>::get =====

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
    auVar1._8_8_ = &UNK_00978a68;
    auVar1._0_8_ = param_1;
    return auVar1;
  }
  local_28 = 0;
  local_38 = 0;
  lStack_30 = 1;
                    /* try { // try from 007082c4 to 007082d3 has its CatchHandler @ 00708308 */
  core::fmt::write(&local_38,&PTR_FUN_009771d0,**(undefined8 **)param_1[3],
                   (*(undefined8 **)param_1[3])[1]);
  param_1[1] = lStack_30;
  *param_1 = local_38;
  param_1[2] = local_28;
  auVar2._8_8_ = &UNK_00978a68;
  auVar2._0_8_ = param_1;
  return auVar2;
}


// ===== 00708328  <std::panicking::panic_handler::FormatStringPayload_as_core::panic::PanicPayload>::take_box =====

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
                    /* try { // try from 00708364 to 00708373 has its CatchHandler @ 007083ec */
    core::fmt::write(&local_48,&PTR_FUN_009771d0,**(undefined8 **)param_1[3],
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
  plVar3 = (long *)__rustc::__rust_alloc(0x18,8);
  if (plVar3 != (long *)0x0) {
    *plVar3 = lVar4;
    plVar3[1] = lVar1;
    plVar3[2] = lVar2;
    return;
  }
                    /* try { // try from 007083dc to 007083e7 has its CatchHandler @ 0070840c */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x18);
}


// ===== 00708430  <std::panicking::resume_unwind::RewrapBox_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::panicking::resume_unwind::RewrapBox as core::fmt::Display>::fmt */

void __rustcall
<std::panicking::resume_unwind::RewrapBox_as_core::fmt::Display>::fmt
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_0045b768,0xc);
  return;
}


// ===== 00708444  FUN_00708444 =====

void FUN_00708444(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [16];
  long local_28;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_list(auStack_38,param_2);
  local_28 = param_1;
  <core::fmt::builders::[4]::core::fmt::builders::DebugSet>::entry
            (auStack_38,&local_28,&DAT_00976c88);
  local_28 = param_1 + 1;
  <core::fmt::builders::[4]::core::fmt::builders::DebugSet>::entry
            (auStack_38,&local_28,&DAT_00976c88);
  local_28 = param_1 + 2;
  <core::fmt::builders::[4]::core::fmt::builders::DebugSet>::entry
            (auStack_38,&local_28,&DAT_00976c88);
  local_28 = param_1 + 3;
  <core::fmt::builders::[4]::core::fmt::builders::DebugSet>::entry
            (auStack_38,&local_28,&DAT_00976c88);
  local_28 = param_1 + 4;
  <core::fmt::builders::[4]::core::fmt::builders::DebugSet>::entry
            (auStack_38,&local_28,&DAT_00976c88);
  local_28 = param_1 + 5;
  <core::fmt::builders::[4]::core::fmt::builders::DebugSet>::entry
            (auStack_38,&local_28,&DAT_00976c88);
  local_28 = param_1 + 6;
  <core::fmt::builders::[4]::core::fmt::builders::DebugSet>::entry
            (auStack_38,&local_28,&DAT_00976c88);
  local_28 = param_1 + 7;
  <core::fmt::builders::[4]::core::fmt::builders::DebugSet>::entry
            (auStack_38,&local_28,&DAT_00976c88);
  <core::fmt::builders::[5]::core::fmt::builders::DebugList>::finish(auStack_38);
  return;
}


// ===== 00708540  <std::fs::File_as_std::io::Read>::read_to_end =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::fs::File as std::io::Read>::read_to_end */

undefined1  [16] __rustcall
<std::fs::File_as_std::io::Read>::read_to_end(undefined8 param_1,ulong *param_2)

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
  auVar5 = FUN_006ee098();
  uVar4 = param_2[2];
  uVar3 = *param_2;
  uVar1 = auVar5._8_8_;
  if ((auVar5 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
    uVar1 = 0;
  }
  if (uVar1 <= uVar3 - uVar4) {
LAB_00708600:
    auVar5 = FUN_006c5c18(&local_50,param_2,auVar5._0_8_,auVar5._8_8_);
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
    FUN_006df348(&local_48,uVar3,param_2[1],uVar2,1,1);
    if (local_48 != 1) {
      *param_2 = uVar2;
      param_2[1] = local_40;
      goto LAB_00708600;
    }
  }
  auVar5._8_8_ = 0x2600000003;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 00708624  <std::fs::File_as_std::io::Read>::read_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::fs::File as std::io::Read>::read_vectored */

undefined1  [16] __rustcall
<std::fs::File_as_std::io::Read>::read_vectored(int *param_1,iovec *param_2,ulong param_3)

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
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 007086b8  <std::fs::File_as_std::io::Read>::read_to_string =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::fs::File as std::io::Read>::read_to_string */

void __rustcall <std::fs::File_as_std::io::Read>::read_to_string(undefined8 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <&std::fs::File_as_std::io::Read>::read_to_string(&local_18);
  return;
}


// ===== 007086dc  <std::fs::File_as_std::io::Read>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::fs::File as std::io::Read>::read */

undefined1  [16] __rustcall
<std::fs::File_as_std::io::Read>::read(int *param_1,void *param_2,size_t param_3)

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
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 00708764  <std::fs::File_as_std::io::Read>::read_buf =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::fs::File as std::io::Read>::read_buf */

ulong __rustcall <std::fs::File_as_std::io::Read>::read_buf(int *param_1,long *param_2)

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
  if (*(undefined ***)PTR_PTR_0099f738 == &PTR_FUN_00977078) {
    return (long)iVar2 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  return (long)iVar2 << 0x20 | 2;
}


// ===== 00708814  <std::time::SystemTime_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::time::SystemTime as core::fmt::Debug>::fmt */

void __rustcall <std::time::SystemTime_as_core::fmt::Debug>::fmt(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_30 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,&DAT_0045c57c,10);
  uVar1 = <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
                    (auStack_30,&DAT_0045c32c,6,param_1,&DAT_00978560);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
            (uVar1,&DAT_0045c332,7,param_1 + 8,&DAT_00978580);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 00708894  <std::net::tcp::IntoIncoming_as_core::iter::traits::iterator::Iterator>::next =====

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


// ===== 007088d0  <std::sys::fs::unix::ReadDir_as_core::fmt::Debug>::fmt =====

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


// ===== 007088fc  <std::sys::process::unix::common::CommandArgs_as_core::iter::traits::iterator::Iterator>::next =====

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


// ===== 0070894c  <std::sys::process::unix::common::CommandArgs_as_core::iter::traits::iterator::Iterator>::size_hint =====

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


// ===== 00708968  <std::fs::File_as_std::io::Write>::write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::fs::File as std::io::Write>::write */

undefined1  [16] __rustcall
<std::fs::File_as_std::io::Write>::write(int *param_1,void *param_2,size_t param_3)

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
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 007089f0  <std::path::Iter_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::path::Iter as core::fmt::Debug>::fmt */

void __rustcall <std::path::Iter_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [24];
  undefined1 local_30 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple(auStack_48,param_2,&DAT_003769dc,4);
  local_30 = <std::path::[8]::std::path::Components>::as_path(param_1);
  <core::fmt::builders::[2]::core::fmt::builders::DebugTuple>::field
            (auStack_48,local_30,&DAT_00978a88);
  <core::fmt::builders::[2]::core::fmt::builders::DebugTuple>::finish();
  return;
}


// ===== 00708a54  FUN_00708a54 =====

void FUN_00708a54(long param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt
            (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_2);
  return;
}


// ===== 00708a68  <std::sys::fs::unix::ReadDir_as_core::iter::traits::iterator::Iterator>::next =====

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
        if (pdVar7->d_name[0] != '.') goto LAB_00708b10;
      }
      else if ((sVar8 != 2) || (*(short *)pdVar7->d_name != 0x2e2e)) {
LAB_00708b10:
        _Var10 = pdVar7->d_ino;
        uVar1 = pdVar7->d_type;
        auVar12 = <alloc::wtf8::[5]::core::wtf8::Wtf8>::into_box(pdVar7->d_name,sVar8 + 1);
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
        pcVar5 = (code *)SoftwareBreakpoint(1,0x708bcc);
        (*pcVar5)();
      }
      *piVar6 = 0;
      pdVar7 = readdir((DIR *)plVar11[5]);
    }
    iVar2 = *piVar6;
    *(undefined1 *)(param_2 + 1) = 1;
    if (iVar2 != 0) {
      if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
        core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
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


// ===== 00708bcc  <std::sys::process::unix::common::CommandArgs_as_core::iter::traits::exact_size::ExactSizeIterator>::len =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::process::unix::common::CommandArgs as
   core::iter::traits::exact_size::ExactSizeIterator>::len */

ulong __rustcall
<std::sys::process::unix::common::CommandArgs_as_core::iter::traits::exact_size::ExactSizeIterator>
::len(long *param_1)

{
  return (ulong)(param_1[1] - *param_1) >> 3;
}


// ===== 00708bdc  <std::fs::File_as_std::io::Seek>::stream_len =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::fs::File as std::io::Seek>::stream_len */

void __rustcall <std::fs::File_as_std::io::Seek>::stream_len(undefined8 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <&std::fs::File_as_std::io::Seek>::stream_len(&local_18);
  return;
}


// ===== 00708c00  <std::fs::File_as_std::io::Seek>::stream_position =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::fs::File as std::io::Seek>::stream_position */

undefined1  [16] __rustcall <std::fs::File_as_std::io::Seek>::stream_position(int *param_1)

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
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 00708c90  <std::fs::File_as_std::io::Seek>::seek =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::fs::File as std::io::Seek>::seek */

undefined1  [16] __rustcall
<std::fs::File_as_std::io::Seek>::seek(int *param_1,long param_2,__off64_t param_3)

{
  int iVar1;
  __off64_t _Var2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  _Var2 = lseek64(*param_1,param_3,*(int *)(&DAT_0045c8f8 + param_2 * 4));
  if (_Var2 != -1) {
    auVar4._1_7_ = 0;
    auVar4[0] = _Var2 == -1;
    auVar4._8_8_ = _Var2;
    return auVar4;
  }
  piVar3 = (int *)__errno(0xffffffffffffffff,0xffffffffffffffff);
  iVar1 = *piVar3;
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  auVar5._8_8_ = (long)iVar1 << 0x20 | 2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 00708d2c  <std::env::Args_as_core::iter::traits::iterator::Iterator>::next =====

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
                    /* try { // try from 00708d68 to 00708d7b has its CatchHandler @ 00708e00 */
      lVar1 = plVar3[1];
      lVar2 = plVar3[2];
      core::str::converts::from_utf8(&local_48,lVar1,lVar2);
      if (((uint)local_48 & 1) == 0) {
        *param_1 = lVar4;
        param_1[1] = lVar1;
        param_1[2] = lVar2;
        return;
      }
                    /* try { // try from 00708dc4 to 00708de7 has its CatchHandler @ 00708dec */
      local_48 = lVar4;
      lStack_40 = lVar1;
      local_38 = lVar2;
                    /* WARNING: Subroutine does not return */
      core::result::unwrap_failed
                (&DAT_0045b05c,0x2b,&local_48,&PTR_FUN_00977408,
                 &PTR_s__rustc_48a229ceaefd4985c50990b14_00977348);
    }
  }
  *param_1 = -1;
  return;
}


// ===== 00708e20  <std::process::ChildStdout_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::process::ChildStdout as core::fmt::Debug>::fmt */

void __rustcall
<std::process::ChildStdout_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,&DAT_0045c59e,0xb);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish_non_exhaustive(auStack_20);
  return;
}


// ===== 00708e58  <std::sys::fs::unix::DirStream_as_core::ops::drop::Drop>::drop =====

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
    puVar1 = PTR_PTR_0099f738;
    iVar2 = *piVar3;
    if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
    }
    local_40 = (ulong *)((long)iVar2 << 0x20 | 2);
                    /* try { // try from 00708eb8 to 00708ec7 has its CatchHandler @ 00708f50 */
    lVar4 = core::io::error::os_functions::get_os_functions();
    uVar5 = (**(code **)(lVar4 + 0x10))(iVar2);
    if ((uVar5 & 1) == 0) {
      FUN_006c46d4(&local_40);
      iVar2 = *piVar3;
      if (*(undefined ***)puVar1 != &PTR_FUN_00977078) {
        core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
      }
      local_40 = &local_48;
      local_48 = (long)iVar2 << 0x20 | 2;
      local_38 = PTR_fmt_0099f788;
                    /* try { // try from 00708f24 to 00708f3b has its CatchHandler @ 00708f60 */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                (&DAT_00366bd4,&local_40,&PTR_s__rustc_48a229ceaefd4985c50990b14_00978aa8);
    }
  }
  return;
}


// ===== 00708f78  <std::sys::net::connection::socket::UdpSocket_as_core::fmt::Debug>::fmt =====

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
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_70,param_2,&DAT_0045c5a9,9);
  uVar1 = *param_1;
  FUN_006dcc64(&local_60,uVar1);
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
                    /* try { // try from 00709004 to 00709023 has its CatchHandler @ 0070905c */
    <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
              (auStack_70,&DAT_003769d8,4,&local_40,&DAT_009786c8);
  }
  local_40 = CONCAT44(local_40._4_4_,uVar1);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
            (auStack_70,&DAT_0045ba82,2,&local_40,&DAT_00977f60);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 00709078  <std::sys::process::unix::common::CommandArgs_as_core::fmt::Debug>::fmt =====

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
    <core::fmt::builders::[4]::core::fmt::builders::DebugSet>::entry
              (auStack_50,&local_40,&DAT_00976c08);
    puVar2 = puVar2 + 1;
  }
  <core::fmt::builders::[5]::core::fmt::builders::DebugList>::finish(auStack_50);
  return;
}


// ===== 007090fc  <std::time::SystemTimeError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::time::SystemTimeError as core::fmt::Display>::fmt */

void __rustcall
<std::time::SystemTimeError_as_core::fmt::Display>::fmt(undefined8 param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00709114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,&UNK_0045c5b2,0x28);
  return;
}


// ===== 00709118  <std::io::stdio::Stdout_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::Stdout as core::fmt::Debug>::fmt */

void __rustcall
<std::io::stdio::Stdout_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,&DAT_0045c5da,6);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish_non_exhaustive(auStack_20);
  return;
}


// ===== 00709150  <std::env::Args_as_core::iter::traits::double_ended::DoubleEndedIterator>::next_back =====

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
                    /* try { // try from 00709188 to 0070919b has its CatchHandler @ 00709220 */
      lVar1 = *(long *)(lVar2 + -0x10);
      lVar2 = *(long *)(lVar2 + -8);
      core::str::converts::from_utf8(&local_48,lVar1,lVar2);
      if (((uint)local_48 & 1) == 0) {
        *param_1 = lVar3;
        param_1[1] = lVar1;
        param_1[2] = lVar2;
        return;
      }
                    /* try { // try from 007091e4 to 00709207 has its CatchHandler @ 0070920c */
      local_48 = lVar3;
      lStack_40 = lVar1;
      local_38 = lVar2;
                    /* WARNING: Subroutine does not return */
      core::result::unwrap_failed
                (&DAT_0045b05c,0x2b,&local_48,&PTR_FUN_00977408,
                 &PTR_s__rustc_48a229ceaefd4985c50990b14_00977360);
    }
  }
  *param_1 = -1;
  return;
}


// ===== 00709240  <std::io::stdio::Stdout_as_std::io::Write>::write_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::Stdout as std::io::Write>::write_vectored */

void __rustcall <std::io::stdio::Stdout_as_std::io::Write>::write_vectored(undefined8 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <&std::io::stdio::Stdout_as_std::io::Write>::write_vectored(&local_18);
  return;
}


// ===== 00709264  <std::io::stdio::Stdout_as_std::io::Write>::write_all_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::Stdout as std::io::Write>::write_all_vectored */

void __rustcall <std::io::stdio::Stdout_as_std::io::Write>::write_all_vectored(undefined8 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <&std::io::stdio::Stdout_as_std::io::Write>::write_all_vectored(&local_18);
  return;
}


// ===== 00709288  <std::io::stdio::Stdout_as_std::io::Write>::flush =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::Stdout as std::io::Write>::flush */

void __rustcall <std::io::stdio::Stdout_as_std::io::Write>::flush(undefined8 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <&std::io::stdio::Stdout_as_std::io::Write>::flush(&local_18);
  return;
}


// ===== 007092ac  <std::io::stdio::Stdout_as_std::io::Write>::write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::Stdout as std::io::Write>::write */

void __rustcall <std::io::stdio::Stdout_as_std::io::Write>::write(undefined8 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <&std::io::stdio::Stdout_as_std::io::Write>::write(&local_18);
  return;
}


// ===== 007092d0  <std::io::stdio::Stdout_as_std::io::Write>::write_all =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::Stdout as std::io::Write>::write_all */

void __rustcall <std::io::stdio::Stdout_as_std::io::Write>::write_all(undefined8 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <&std::io::stdio::Stdout_as_std::io::Write>::write_all(&local_18);
  return;
}


// ===== 007092f4  <std::io::stdio::Stdout_as_std::io::Write>::write_fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::Stdout as std::io::Write>::write_fmt */

void __rustcall <std::io::stdio::Stdout_as_std::io::Write>::write_fmt(undefined8 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <&std::io::stdio::Stdout_as_std::io::Write>::write_fmt(&local_18);
  return;
}


// ===== 00709318  <bool_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <bool_as_core::fmt::Display>::fmt(void)

{
  (*(code *)PTR_fmt_009a06e0)();
  return;
}


// ===== 0070931c  <std::env::Args_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::env::Args as core::fmt::Debug>::fmt */

void __rustcall <std::env::Args_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_30 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,&DAT_00376f98,4);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
            (auStack_30,&DAT_0045c1bf,5,param_1,&PTR_FUN_00978b78);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 00709380  <&std::io::stdio::Stdout_as_std::io::Write>::write_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::io::stdio::Stdout as std::io::Write>::write_vectored */

undefined8 __rustcall
<&std::io::stdio::Stdout_as_std::io::Write>::write_vectored
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
  if (DAT_009a6f60 == 0) {
    __key = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(&DAT_009a6f60);
    pvVar5 = pthread_getspecific(__key);
    if (pvVar5 == (void *)0x0) goto LAB_007093ec;
LAB_007093b8:
    if (pvVar5 != (void *)*puVar8) {
LAB_007093fc:
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
      goto LAB_0070941c;
    }
  }
  else {
    pvVar5 = pthread_getspecific((pthread_key_t)DAT_009a6f60);
    if (pvVar5 != (void *)0x0) goto LAB_007093b8;
LAB_007093ec:
    pvVar5 = (void *)FUN_006d2020();
    if (pvVar5 != (void *)*puVar8) goto LAB_007093fc;
  }
  if (*(int *)((long)puVar8 + 0xc) == -1) {
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed(&DAT_0045b52c,0x26,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977928)
    ;
  }
  iVar7 = *(int *)((long)puVar8 + 0xc) + 1;
LAB_0070941c:
  *(int *)((long)puVar8 + 0xc) = iVar7;
  if (puVar8[2] != 0) {
                    /* try { // try from 007094bc to 007094c7 has its CatchHandler @ 0070951c */
    core::cell::panic_already_borrowed(&PTR_s__rustc_48a229ceaefd4985c50990b14_00978c70);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x7094cc);
    (*pcVar4)();
  }
  puVar8[2] = 0xffffffffffffffff;
                    /* try { // try from 00709430 to 0070943f has its CatchHandler @ 007094fc */
  uVar6 = FUN_00706d8c(puVar8 + 3,param_2,param_3);
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


// ===== 00709530  <&std::io::stdio::Stdout_as_std::io::Write>::write_all_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::io::stdio::Stdout as std::io::Write>::write_all_vectored */

undefined8 __rustcall
<&std::io::stdio::Stdout_as_std::io::Write>::write_all_vectored
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
  if (DAT_009a6f60 == 0) {
    __key = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(&DAT_009a6f60);
    pvVar4 = pthread_getspecific(__key);
    if (pvVar4 == (void *)0x0) goto LAB_007095a0;
LAB_0070956c:
    if (pvVar4 != (void *)*puVar7) {
LAB_007095b0:
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
      goto LAB_007095d0;
    }
  }
  else {
    pvVar4 = pthread_getspecific((pthread_key_t)DAT_009a6f60);
    if (pvVar4 != (void *)0x0) goto LAB_0070956c;
LAB_007095a0:
    pvVar4 = (void *)FUN_006d2020();
    if (pvVar4 != (void *)*puVar7) goto LAB_007095b0;
  }
  if (*(int *)((long)puVar7 + 0xc) == -1) {
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed(&DAT_0045b52c,0x26,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977928)
    ;
  }
  iVar6 = *(int *)((long)puVar7 + 0xc) + 1;
LAB_007095d0:
  *(int *)((long)puVar7 + 0xc) = iVar6;
                    /* try { // try from 007095d8 to 007095e7 has its CatchHandler @ 00709684 */
  local_18 = puVar7;
  uVar5 = <std::io::stdio::StdoutLock_as_std::io::Write>::write_all_vectored
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


// ===== 00709698  <&std::io::stdio::Stdout_as_std::io::Write>::flush =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::io::stdio::Stdout as std::io::Write>::flush */

undefined8 __rustcall <&std::io::stdio::Stdout_as_std::io::Write>::flush(undefined8 *param_1)

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
  if (DAT_009a6f60 == 0) {
    __key = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(&DAT_009a6f60);
    pvVar5 = pthread_getspecific(__key);
    if (pvVar5 == (void *)0x0) goto LAB_007096f8;
LAB_007096c4:
    if (pvVar5 != (void *)*puVar8) {
LAB_00709708:
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
      goto LAB_00709728;
    }
  }
  else {
    pvVar5 = pthread_getspecific((pthread_key_t)DAT_009a6f60);
    if (pvVar5 != (void *)0x0) goto LAB_007096c4;
LAB_007096f8:
    pvVar5 = (void *)FUN_006d2020();
    if (pvVar5 != (void *)*puVar8) goto LAB_00709708;
  }
  if (*(int *)((long)puVar8 + 0xc) == -1) {
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed(&DAT_0045b52c,0x26,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977928)
    ;
  }
  iVar7 = *(int *)((long)puVar8 + 0xc) + 1;
LAB_00709728:
  *(int *)((long)puVar8 + 0xc) = iVar7;
  if (puVar8[2] != 0) {
                    /* try { // try from 007097ac to 007097b7 has its CatchHandler @ 0070980c */
    core::cell::panic_already_borrowed(&PTR_s__rustc_48a229ceaefd4985c50990b14_00978ca0);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x7097bc);
    (*pcVar4)();
  }
  puVar8[2] = 0xffffffffffffffff;
                    /* try { // try from 0070973c to 00709743 has its CatchHandler @ 007097ec */
  uVar6 = FUN_006e4500(puVar8 + 3);
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


// ===== 00709820  <&std::io::stdio::Stdout_as_std::io::Write>::write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::io::stdio::Stdout as std::io::Write>::write */

undefined8 __rustcall
<&std::io::stdio::Stdout_as_std::io::Write>::write
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
  if (DAT_009a6f60 == 0) {
    __key = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(&DAT_009a6f60);
    pvVar4 = pthread_getspecific(__key);
    if (pvVar4 == (void *)0x0) goto LAB_00709890;
LAB_0070985c:
    if (pvVar4 != (void *)*puVar7) {
LAB_007098a0:
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
      goto LAB_007098c0;
    }
  }
  else {
    pvVar4 = pthread_getspecific((pthread_key_t)DAT_009a6f60);
    if (pvVar4 != (void *)0x0) goto LAB_0070985c;
LAB_00709890:
    pvVar4 = (void *)FUN_006d2020();
    if (pvVar4 != (void *)*puVar7) goto LAB_007098a0;
  }
  if (*(int *)((long)puVar7 + 0xc) == -1) {
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed(&DAT_0045b52c,0x26,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977928)
    ;
  }
  iVar6 = *(int *)((long)puVar7 + 0xc) + 1;
LAB_007098c0:
  *(int *)((long)puVar7 + 0xc) = iVar6;
                    /* try { // try from 007098c8 to 007098d7 has its CatchHandler @ 00709980 */
  local_18 = puVar7;
  uVar5 = <std::io::stdio::StdoutLock_as_std::io::Write>::write(&local_18,param_2,param_3);
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


// ===== 00709994  <&std::io::stdio::Stdout_as_std::io::Write>::write_all =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::io::stdio::Stdout as std::io::Write>::write_all */

undefined8 __rustcall
<&std::io::stdio::Stdout_as_std::io::Write>::write_all
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
  if (DAT_009a6f60 == 0) {
    __key = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(&DAT_009a6f60);
    pvVar4 = pthread_getspecific(__key);
    if (pvVar4 == (void *)0x0) goto LAB_00709a04;
LAB_007099d0:
    if (pvVar4 != (void *)*puVar7) {
LAB_00709a14:
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
      goto LAB_00709a34;
    }
  }
  else {
    pvVar4 = pthread_getspecific((pthread_key_t)DAT_009a6f60);
    if (pvVar4 != (void *)0x0) goto LAB_007099d0;
LAB_00709a04:
    pvVar4 = (void *)FUN_006d2020();
    if (pvVar4 != (void *)*puVar7) goto LAB_00709a14;
  }
  if (*(int *)((long)puVar7 + 0xc) == -1) {
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed(&DAT_0045b52c,0x26,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977928)
    ;
  }
  iVar6 = *(int *)((long)puVar7 + 0xc) + 1;
LAB_00709a34:
  *(int *)((long)puVar7 + 0xc) = iVar6;
                    /* try { // try from 00709a3c to 00709a4b has its CatchHandler @ 00709ae8 */
  local_18 = puVar7;
  uVar5 = <std::io::stdio::StdoutLock_as_std::io::Write>::write_all(&local_18,param_2,param_3);
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


// ===== 00709afc  <&std::io::stdio::Stdout_as_std::io::Write>::write_fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::io::stdio::Stdout as std::io::Write>::write_fmt */

ulong __rustcall
<&std::io::stdio::Stdout_as_std::io::Write>::write_fmt
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
  if (DAT_009a6f60 == 0) {
    __key = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(&DAT_009a6f60);
    pvVar5 = pthread_getspecific(__key);
    if (pvVar5 == (void *)0x0) goto LAB_00709b6c;
LAB_00709b38:
    if (pvVar5 != (void *)*puVar7) {
LAB_00709b7c:
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
      goto LAB_00709b9c;
    }
  }
  else {
    pvVar5 = pthread_getspecific((pthread_key_t)DAT_009a6f60);
    if (pvVar5 != (void *)0x0) goto LAB_00709b38;
LAB_00709b6c:
    pvVar5 = (void *)FUN_006d2020();
    if (pvVar5 != (void *)*puVar7) goto LAB_00709b7c;
  }
  if (*(int *)((long)puVar7 + 0xc) == -1) {
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed(&DAT_0045b52c,0x26,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977928)
    ;
  }
  iVar4 = *(int *)((long)puVar7 + 0xc) + 1;
LAB_00709b9c:
  *(int *)((long)puVar7 + 0xc) = iVar4;
  local_50 = &local_18;
  local_48 = 0;
                    /* try { // try from 00709bac to 00709beb has its CatchHandler @ 00709cdc */
  local_18 = puVar7;
  iVar4 = core::fmt::write(&local_50,&PTR_FUN_00976f20,param_2,param_3);
  uVar6 = local_48;
  if (iVar4 == 0) {
    if (local_48 != 0) {
      if ((1 < (local_48 & 3) - 2) && ((local_48 & 3) != 0)) {
        local_38 = local_48 - 1;
        local_40 = 3;
                    /* try { // try from 00709c1c to 00709c23 has its CatchHandler @ 00709cc8 */
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_38);
      }
      uVar6 = 0;
    }
  }
  else if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_0045acd3,0xad,&PTR_s__rustc_48a229ceaefd4985c50990b14_00976ea8);
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


// ===== 00709cfc  <std::net::tcp::TcpListener_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::net::tcp::TcpListener as core::fmt::Debug>::fmt */

void __rustcall <std::net::tcp::TcpListener_as_core::fmt::Debug>::fmt(void)

{
  (*(code *)PTR_fmt_009a1c10)();
  return;
}


// ===== 00709d00  <std::process::ChildStderr_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::process::ChildStderr as core::fmt::Debug>::fmt */

void __rustcall
<std::process::ChildStderr_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,&DAT_0045c5e9,0xb);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish_non_exhaustive(auStack_20);
  return;
}


// ===== 00709d38  <std::sys::fs::unix::OpenOptions_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::fs::unix::OpenOptions as core::fmt::Debug>::fmt */

void __rustcall
<std::sys::fs::unix::OpenOptions_as_core::fmt::Debug>::fmt(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [20];
  undefined4 local_24;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_38,param_2,&DAT_0045c5f4,0xb);
  uVar1 = <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
                    (auStack_38,&DAT_00377758,4,param_1 + 8,&DAT_00977f80);
  uVar1 = <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
                    (uVar1,&DAT_0045ba84,5,param_1 + 9,&DAT_00977f80);
  uVar1 = <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
                    (uVar1,&DAT_0045c5ff,6,param_1 + 10,&DAT_00977f80);
  uVar1 = <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
                    (uVar1,&DAT_00374b78,8,param_1 + 0xb,&DAT_00977f80);
  uVar1 = <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
                    (uVar1,&DAT_0045c605,6,param_1 + 0xc,&DAT_00977f80);
  uVar1 = <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
                    (uVar1,&DAT_0045c60b,10,param_1 + 0xd,&DAT_00977f80);
  uVar1 = <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
                    (uVar1,&DAT_0045c615,0xc,param_1,&DAT_00977f60);
  local_24 = *(undefined4 *)(param_1 + 4);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
            (uVar1,&DAT_003799a4,4,&local_24,&DAT_00978858);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 00709e58  <std::fs::Dir_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::fs::Dir as core::fmt::Debug>::fmt */

void __rustcall <std::fs::Dir_as_core::fmt::Debug>::fmt(undefined4 *param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  FUN_006f4ca0(auStack_20,*param_1,param_2,&DAT_0045c579,3);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish(auStack_20);
  return;
}


// ===== 00709e98  <std::path::Components_as_core::iter::traits::iterator::Iterator>::next =====

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
LAB_0070a138:
                if (uVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  core::slice::index::slice_index_fail
                            (1,0,0,&PTR_s__rustc_48a229ceaefd4985c50990b14_00978c10);
                }
                *param_2 = (long)(pcVar10 + 1);
                param_2[1] = uVar11 - 1;
                *param_1 = 7;
                return;
              }
              uVar3 = 1;
            }
            else if ((*pcVar10 == '.') && (pcVar10[1] == '/')) goto LAB_0070a138;
          }
        }
        else {
          if (bVar5 != 2) goto LAB_0070a188;
          if (uVar4 == 0) {
            *(undefined1 *)(param_2 + 7) = 3;
            *param_1 = 0xff;
            return;
          }
          uVar11 = 0;
          do {
            if (pcVar10[uVar11] == '/') {
              lVar6 = 1;
              if (uVar11 == 0) goto LAB_0070a06c;
              goto LAB_0070a050;
            }
            uVar11 = uVar11 + 1;
          } while (uVar4 != uVar11);
          lVar6 = 0;
          uVar11 = uVar4;
          if (uVar4 == 0) {
LAB_0070a06c:
            uVar8 = 0xff;
            bVar2 = true;
          }
          else {
LAB_0070a050:
            if (uVar11 == 2) {
              if ((*pcVar10 != '.') || (pcVar10[1] != '.')) goto LAB_0070a0b8;
              bVar2 = false;
              uVar8 = 8;
            }
            else {
              if ((uVar11 == 1) && (*pcVar10 == '.')) goto LAB_0070a06c;
LAB_0070a0b8:
              bVar2 = false;
              uVar8 = 9;
            }
          }
          uVar7 = lVar6 + uVar11;
          *(char **)(param_1 + 8) = pcVar10;
          *(ulong *)(param_1 + 0x10) = uVar11;
          uVar3 = uVar4 - uVar7;
          if (uVar4 < uVar7) goto LAB_0070a1c4;
          pcVar10 = pcVar10 + uVar7;
          *param_2 = (long)pcVar10;
          param_2[1] = uVar3;
          uVar11 = uVar3;
          if (!bVar2) goto LAB_0070a104;
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
LAB_0070a188:
        *param_1 = uVar8;
                    /* WARNING: Subroutine does not return */
        core::panicking::panic(&DAT_0045ad81,0x28,&PTR_s__rustc_48a229ceaefd4985c50990b14_00978c58);
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
          if (uVar11 == 0) goto LAB_00709f6c;
          goto LAB_00709f2c;
        }
        uVar11 = uVar11 + 1;
      } while (uVar4 != uVar11);
      lVar6 = 0;
      uVar11 = uVar4;
      if (uVar4 == 0) {
LAB_00709f6c:
        uVar8 = 0xff;
        bVar2 = true;
      }
      else {
LAB_00709f2c:
        if (uVar11 == 1) {
          if (*pcVar9 != '.') goto LAB_00709f78;
          goto LAB_00709f6c;
        }
        if (((uVar11 == 2) && (*pcVar9 == '.')) && (pcVar9[1] == '.')) {
          bVar2 = false;
          uVar8 = 8;
        }
        else {
LAB_00709f78:
          bVar2 = false;
          uVar8 = 9;
        }
      }
      uVar7 = lVar6 + uVar11;
      if (uVar4 < uVar7) {
        *(char **)(param_1 + 8) = pcVar9;
        *(ulong *)(param_1 + 0x10) = uVar11;
LAB_0070a1c4:
        *param_1 = uVar8;
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (uVar7,uVar4,uVar4,&PTR_s__rustc_48a229ceaefd4985c50990b14_00978c40);
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
      core::slice::index::slice_index_fail(1,0,0,&PTR_s__rustc_48a229ceaefd4985c50990b14_00978c28);
    }
    uVar8 = 6;
    *param_2 = (long)(pcVar9 + 1);
    param_2[1] = uVar4 - 1;
  }
LAB_0070a104:
  *param_1 = uVar8;
  return;
}


// ===== 0070a1f4  <std::io::stdio::StdoutLock_as_std::io::Write>::write_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StdoutLock as std::io::Write>::write_vectored */

void __rustcall <std::io::stdio::StdoutLock_as_std::io::Write>::write_vectored(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (*(long *)(lVar1 + 0x10) == 0) {
    *(undefined8 *)(lVar1 + 0x10) = 0xffffffffffffffff;
                    /* try { // try from 0070a214 to 0070a21b has its CatchHandler @ 0070a240 */
    FUN_00706d8c(lVar1 + 0x18);
    *(long *)(lVar1 + 0x10) = *(long *)(lVar1 + 0x10) + 1;
    return;
  }
  core::cell::panic_already_borrowed(&PTR_s__rustc_48a229ceaefd4985c50990b14_00978c70);
                    /* catch() { ... } // from try @ 0070a214 with catch @ 0070a240 */
  *(long *)(lVar1 + 0x10) = *(long *)(lVar1 + 0x10) + 1;
                    /* WARNING: Subroutine does not return */
  FUN_00751c7c();
}


// ===== 0070a250  <std::io::stdio::StdoutLock_as_std::io::Write>::write_all_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StdoutLock as std::io::Write>::write_all_vectored */

undefined ** __rustcall
<std::io::stdio::StdoutLock_as_std::io::Write>::write_all_vectored
          (long *param_1,long param_2,ulong param_3)

{
  undefined **ppuVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  ulong *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  long lVar13;
  uint uVar14;
  undefined1 auVar15 [16];
  long local_68;
  
  lVar13 = *param_1;
  if (*(long *)(lVar13 + 0x10) != 0) {
    core::cell::panic_already_borrowed(&PTR_s__rustc_48a229ceaefd4985c50990b14_00978c88);
LAB_0070a470:
    ppuVar9 = &PTR_s__rustc_48a229ceaefd4985c50990b14_00977970;
    puVar10 = &DAT_0045b552;
    uVar11 = 0x4f;
LAB_0070a484:
                    /* try { // try from 0070a484 to 0070a493 has its CatchHandler @ 0070a4d0 */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(puVar10,uVar11,ppuVar9);
  }
  *(undefined8 *)(lVar13 + 0x10) = 0xffffffffffffffff;
  if (param_3 != 0) {
    lVar5 = param_3 * 0x10;
    uVar3 = 0;
    uVar6 = lVar5 - 0x10;
    plVar7 = (long *)(param_2 + 8);
    do {
      uVar4 = uVar3;
      if (*plVar7 != 0) break;
      lVar5 = lVar5 + -0x10;
      uVar3 = uVar3 + 1;
      uVar4 = (uVar6 >> 4) + 1;
      plVar7 = plVar7 + 2;
    } while (lVar5 != 0);
    if (param_3 < uVar4) {
LAB_0070a44c:
                    /* try { // try from 0070a44c to 0070a45f has its CatchHandler @ 0070a4d0 */
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (uVar4,param_3,param_3,&PTR_s__rustc_48a229ceaefd4985c50990b14_009779a0);
    }
    if (param_3 - uVar4 != 0) {
      plVar7 = (long *)(param_2 + uVar4 * 0x10);
      ppuVar9 = &PTR_s__rustc_48a229ceaefd4985c50990b14_00977988;
      puVar10 = &DAT_0045b579;
      uVar11 = 0x47;
      param_3 = param_3 - uVar4;
LAB_0070a30c:
      do {
        while( true ) {
                    /* try { // try from 0070a30c to 0070a357 has its CatchHandler @ 0070a4c0 */
          auVar15 = FUN_00706d8c(lVar13 + 0x18,plVar7,param_3);
          ppuVar12 = auVar15._8_8_;
          if ((auVar15 & (undefined1  [16])0x1) != (undefined1  [16])0x0) break;
          if (ppuVar12 == (undefined **)0x0) {
            ppuVar12 = &PTR_DAT_00977df0;
            goto LAB_0070a41c;
          }
          lVar5 = param_3 * 0x10;
          uVar3 = 0;
          uVar6 = lVar5 - 0x10;
          puVar8 = (ulong *)(plVar7 + 1);
          do {
            ppuVar1 = (undefined **)((long)ppuVar12 - (long)*puVar8);
            uVar4 = uVar3;
            if (ppuVar12 < (undefined **)*puVar8) break;
            lVar5 = lVar5 + -0x10;
            uVar3 = uVar3 + 1;
            uVar4 = (uVar6 >> 4) + 1;
            puVar8 = puVar8 + 2;
            ppuVar12 = ppuVar1;
          } while (lVar5 != 0);
          if (param_3 < uVar4) goto LAB_0070a44c;
          if (param_3 - uVar4 == 0) {
            if (ppuVar12 != (undefined **)0x0) goto LAB_0070a470;
            goto LAB_0070a41c;
          }
          plVar7 = plVar7 + uVar4 * 2;
          if ((undefined **)plVar7[1] < ppuVar12) goto LAB_0070a484;
          *plVar7 = *plVar7 + (long)ppuVar12;
          plVar7[1] = plVar7[1] - (long)ppuVar12;
          param_3 = param_3 - uVar4;
        }
        if (1 < ((ulong)ppuVar12 & 3)) {
          if (((ulong)ppuVar12 & 3) == 2) {
                    /* try { // try from 0070a3d4 to 0070a3e7 has its CatchHandler @ 0070a498 */
            lVar5 = core::io::error::os_functions::get_os_functions();
            iVar2 = (**(code **)(lVar5 + 0x10))((ulong)ppuVar12 >> 0x20);
            if (iVar2 == 0) break;
          }
          else {
            uVar14 = auVar15._12_4_ & 0xff;
            if (0x2a < (ulong)ppuVar12 >> 0x20) {
              uVar14 = 0xff;
            }
            if (uVar14 != 0x23) break;
          }
          goto LAB_0070a30c;
        }
        if ((auVar15 & (undefined1  [16])0x3) != (undefined1  [16])0x0) {
          if (*(char *)((long)ppuVar12 + 0x1f) != '#') break;
          local_68 = (long)ppuVar12 - 1;
          <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_68);
          goto LAB_0070a30c;
        }
      } while (*(char *)(ppuVar12 + 2) == '#');
LAB_0070a41c:
      lVar5 = *(long *)(lVar13 + 0x10) + 1;
      goto LAB_0070a424;
    }
  }
  lVar5 = 0;
  ppuVar12 = (undefined **)0x0;
LAB_0070a424:
  *(long *)(lVar13 + 0x10) = lVar5;
  return ppuVar12;
}


// ===== 0070a4e0  <std::io::stdio::StdoutLock_as_std::io::Write>::flush =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StdoutLock as std::io::Write>::flush */

void __rustcall <std::io::stdio::StdoutLock_as_std::io::Write>::flush(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (*(long *)(lVar1 + 0x10) == 0) {
    *(undefined8 *)(lVar1 + 0x10) = 0xffffffffffffffff;
                    /* try { // try from 0070a500 to 0070a507 has its CatchHandler @ 0070a52c */
    FUN_006e4500(lVar1 + 0x18);
    *(long *)(lVar1 + 0x10) = *(long *)(lVar1 + 0x10) + 1;
    return;
  }
  core::cell::panic_already_borrowed(&PTR_s__rustc_48a229ceaefd4985c50990b14_00978ca0);
                    /* catch() { ... } // from try @ 0070a500 with catch @ 0070a52c */
  *(long *)(lVar1 + 0x10) = *(long *)(lVar1 + 0x10) + 1;
                    /* WARNING: Subroutine does not return */
  FUN_00751c7c();
}


// ===== 0070a53c  <std::io::stdio::StdoutLock_as_std::io::Write>::write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StdoutLock as std::io::Write>::write */

undefined1  [16] __rustcall
<std::io::stdio::StdoutLock_as_std::io::Write>::write(long *param_1,void *param_2,ulong param_3)

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
                    /* try { // try from 0070a56c to 0070a663 has its CatchHandler @ 0070a7ac */
    auVar10 = core::slice::memchr::memrchr(10);
    if (auVar10._0_8_ == 1) {
      lVar4 = FUN_006e4500(lVar9 + 0x18);
      if (lVar4 != 0) {
LAB_0070a66c:
        auVar10._8_8_ = lVar4;
        auVar10._0_8_ = 1;
        goto LAB_0070a6ac;
      }
      uVar8 = auVar10._8_8_ + 1;
      if (param_3 < uVar8) {
        uVar5 = 0;
        ppuVar7 = &PTR_s__rustc_48a229ceaefd4985c50990b14_00978a38;
LAB_0070a778:
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail(uVar5,uVar8,param_3,ppuVar7);
      }
      uVar5 = ::write(1,param_2,uVar8);
      if (uVar5 == 0xffffffffffffffff) {
        piVar6 = (int *)__errno();
        iVar1 = *piVar6;
        if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
          core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
        }
        uVar5 = uVar8;
        if (iVar1 != 9) {
          auVar10._8_8_ = (long)iVar1 << 0x20 | 2;
          auVar10._0_8_ = 1;
          goto LAB_0070a6ac;
        }
      }
      if (uVar5 == 0) {
        auVar10 = ZEXT816(0);
        goto LAB_0070a6ac;
      }
      __n = uVar8 - uVar5;
      if (uVar8 < uVar5 || __n == 0) {
        if (param_3 < uVar5) {
          ppuVar7 = &PTR_s__rustc_48a229ceaefd4985c50990b14_00978a20;
          uVar8 = param_3;
          goto LAB_0070a778;
        }
        __n = param_3 - uVar5;
        if (*(ulong *)(lVar9 + 0x18) <= param_3 - uVar5) {
          auVar3._8_8_ = 0;
          auVar3._0_8_ = uVar5;
          auVar10 = auVar3 << 0x40;
          goto LAB_0070a6ac;
        }
      }
      else {
        param_3 = *(ulong *)(lVar9 + 0x18);
        if (param_3 < __n) {
          auVar10 = core::slice::memchr::memrchr(10,(long)param_2 + uVar5,param_3);
          __n = param_3;
          if ((auVar10._0_8_ == 1) && (__n = auVar10._8_8_ + 1, param_3 < __n)) {
            uVar5 = 0;
            ppuVar7 = &PTR_s__rustc_48a229ceaefd4985c50990b14_00978a08;
            uVar8 = __n;
            goto LAB_0070a778;
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
        lVar4 = FUN_006e4500(lVar9 + 0x18);
        if (lVar4 != 0) goto LAB_0070a66c;
        lVar4 = *(long *)(lVar9 + 0x28);
      }
      unaff_x19 = param_3;
      unaff_x20 = param_2;
      if ((ulong)(*(long *)(lVar9 + 0x18) - lVar4) <= param_3) goto LAB_0070a754;
      memcpy((void *)(*(long *)(lVar9 + 0x20) + lVar4),param_2,param_3);
      lVar4 = lVar4 + param_3;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = param_3;
    auVar10 = auVar2 << 0x40;
    *(long *)(lVar9 + 0x28) = lVar4;
  }
  else {
    core::cell::panic_already_borrowed(&PTR_s__rustc_48a229ceaefd4985c50990b14_00978cb8);
LAB_0070a754:
                    /* try { // try from 0070a754 to 0070a797 has its CatchHandler @ 0070a7ac */
    auVar10 = <std::io::buffered::bufwriter::std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutRaw>>
              ::write_cold(lVar9 + 0x18,unaff_x20,unaff_x19);
  }
LAB_0070a6ac:
  *(long *)(lVar9 + 0x10) = *(long *)(lVar9 + 0x10) + 1;
  return auVar10;
}


// ===== 0070a7bc  <std::io::stdio::StdoutLock_as_std::io::Write>::write_all =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StdoutLock as std::io::Write>::write_all */

ulong __rustcall
<std::io::stdio::StdoutLock_as_std::io::Write>::write_all(long *param_1,void *param_2,ulong param_3)

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
                    /* try { // try from 0070a7ec to 0070a7f3 has its CatchHandler @ 0070a97c */
    auVar4 = core::slice::memchr::memrchr(10);
    if (auVar4._0_8_ == 1) {
      __n = auVar4._8_8_ + 1;
      unaff_x19 = param_3 - __n;
      if (param_3 < __n) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_fmt
                  (&DAT_0045b053,0x13,&PTR_s__rustc_48a229ceaefd4985c50990b14_00978a50);
      }
      lVar3 = *(long *)(lVar2 + 0x28);
      if (lVar3 == 0) {
                    /* try { // try from 0070a8a4 to 0070a8af has its CatchHandler @ 0070a97c */
        uVar1 = FUN_0070e9f0(param_2,__n);
        if ((uVar1 != 0) && ((((uVar1 & 3) < 2 || ((uVar1 & 3) != 2)) || (uVar1 >> 0x20 != 9))))
        goto LAB_0070a908;
      }
      else {
        if (__n < (ulong)(*(long *)(lVar2 + 0x18) - lVar3)) {
          memcpy((void *)(*(long *)(lVar2 + 0x20) + lVar3),param_2,__n);
          *(ulong *)(lVar2 + 0x28) = lVar3 + __n;
        }
        else {
          uVar1 = <std::io::buffered::bufwriter::std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutRaw>>
                  ::write_all_cold(lVar2 + 0x18,param_2,__n);
          if (uVar1 != 0) goto LAB_0070a908;
        }
                    /* try { // try from 0070a83c to 0070a86f has its CatchHandler @ 0070a97c */
        uVar1 = FUN_006e4500(lVar2 + 0x18);
        if (uVar1 != 0) goto LAB_0070a908;
      }
      lVar3 = *(long *)(lVar2 + 0x28);
      unaff_x20 = (void *)((long)param_2 + __n);
      if ((ulong)(*(long *)(lVar2 + 0x18) - lVar3) <= unaff_x19) goto LAB_0070a934;
      memcpy((void *)(*(long *)(lVar2 + 0x20) + lVar3),(void *)((long)param_2 + __n),unaff_x19);
      lVar3 = lVar3 + unaff_x19;
    }
    else {
      lVar3 = *(long *)(lVar2 + 0x28);
      if ((lVar3 != 0) && (*(char *)(*(long *)(lVar2 + 0x20) + lVar3 + -1) == '\n')) {
        uVar1 = FUN_006e4500(lVar2 + 0x18);
        if (uVar1 != 0) goto LAB_0070a908;
        lVar3 = *(long *)(lVar2 + 0x28);
      }
      unaff_x19 = param_3;
      unaff_x20 = param_2;
      if ((ulong)(*(long *)(lVar2 + 0x18) - lVar3) <= param_3) goto LAB_0070a934;
      memcpy((void *)(*(long *)(lVar2 + 0x20) + lVar3),param_2,param_3);
      lVar3 = lVar3 + param_3;
    }
    uVar1 = 0;
    *(long *)(lVar2 + 0x28) = lVar3;
  }
  else {
    core::cell::panic_already_borrowed(&PTR_s__rustc_48a229ceaefd4985c50990b14_00978cd0);
LAB_0070a934:
                    /* try { // try from 0070a934 to 0070a973 has its CatchHandler @ 0070a97c */
    uVar1 = <std::io::buffered::bufwriter::std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutRaw>>
            ::write_all_cold(lVar2 + 0x18,unaff_x20,unaff_x19);
  }
LAB_0070a908:
  *(long *)(lVar2 + 0x10) = *(long *)(lVar2 + 0x10) + 1;
  return uVar1;
}


// ===== 0070a98c  <std::ffi::os_str::OsString_as_core::fmt::Write>::write_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::ffi::os_str::OsString as core::fmt::Write>::write_str */

undefined8 __rustcall
<std::ffi::os_str::OsString_as_core::fmt::Write>::write_str
          (long *param_1,void *param_2,ulong param_3)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if ((ulong)(*param_1 - lVar1) < param_3) {
    FUN_006cecec(param_1,lVar1,param_3,1,1);
    lVar1 = param_1[2];
  }
  else if (param_3 == 0) goto LAB_0070a9cc;
  memcpy((void *)(param_1[1] + lVar1),param_2,param_3);
LAB_0070a9cc:
  param_1[2] = lVar1 + param_3;
  return 0;
}


// ===== 0070aa10  <std::path::Components_as_core::iter::traits::double_ended::DoubleEndedIterator>::next_back =====

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
  goto LAB_0070ad94;
  bVar3 = *(byte *)((long)param_2 + 0x3a);
  pcVar1 = (char *)*param_2;
  uVar7 = param_2[1];
  uVar8 = (ulong)(bVar2 < 2 & bVar3);
  if (bVar2 < 2) {
    if ((bVar3 & 1) != 0) {
      while (bVar5 != 1) {
        if (bVar5 != 2) goto LAB_0070addc;
        if (uVar7 <= uVar8) {
          *(undefined1 *)((long)param_2 + 0x39) = 1;
          break;
        }
        FUN_006dfdd0(&local_80,param_2);
        uVar4 = uVar7 - local_80;
        *(undefined8 *)(param_1 + 8) = uStack_70;
        *(undefined8 *)param_1 = local_78;
        *(undefined8 *)(param_1 + 0x18) = uStack_60;
        *(undefined8 *)(param_1 + 0x10) = local_68;
        *(undefined8 *)(param_1 + 0x28) = uStack_50;
        *(undefined8 *)(param_1 + 0x20) = local_58;
        *(undefined8 *)(param_1 + 0x30) = local_48;
        if (uVar7 < local_80) goto LAB_0070adb4;
        cVar6 = *param_1;
        param_2[1] = uVar4;
        bVar5 = 2;
        uVar7 = uVar4;
        if (cVar6 != -1) {
          return;
        }
      }
LAB_0070ad7c:
      *(undefined1 *)((long)param_2 + 0x39) = 3;
      if (uVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (0,uVar7 - 1,0,&PTR_s__rustc_48a229ceaefd4985c50990b14_00978d00);
      }
      cVar6 = '\x06';
      param_2[1] = uVar7 - 1;
      goto LAB_0070ad94;
    }
    while (bVar5 != 1) {
      if (bVar5 != 2) goto LAB_0070addc;
      uVar8 = uVar7;
      if (uVar7 != 0) {
        if (uVar7 == 1) {
          if (*pcVar1 == '.') {
LAB_0070ab8c:
            uVar8 = 1;
            goto LAB_0070ab98;
          }
        }
        else if ((*pcVar1 == '.') && (pcVar1[1] == '/')) goto LAB_0070ab8c;
        uVar8 = 0;
      }
LAB_0070ab98:
      if (uVar7 <= uVar8) {
        *(undefined1 *)((long)param_2 + 0x39) = 1;
        break;
      }
      FUN_006dfdd0(&local_80,param_2);
      uVar4 = uVar7 - local_80;
      *(undefined8 *)(param_1 + 8) = uStack_70;
      *(undefined8 *)param_1 = local_78;
      *(undefined8 *)(param_1 + 0x18) = uStack_60;
      *(undefined8 *)(param_1 + 0x10) = local_68;
      *(undefined8 *)(param_1 + 0x28) = uStack_50;
      *(undefined8 *)(param_1 + 0x20) = local_58;
      *(undefined8 *)(param_1 + 0x30) = local_48;
      if (uVar7 < local_80) goto LAB_0070adb4;
      cVar6 = *param_1;
      param_2[1] = uVar4;
      bVar5 = 2;
      uVar7 = uVar4;
      if (cVar6 != -1) {
        return;
      }
    }
LAB_0070ad04:
    *(undefined1 *)((long)param_2 + 0x39) = 3;
    if (uVar7 != 0) {
      if (uVar7 == 1) {
        if (*pcVar1 == '.') {
LAB_0070ad40:
          if (uVar7 != 0) {
            param_2[1] = uVar7 - 1;
            *param_1 = '\a';
            return;
          }
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (0,uVar7 - 1,0,&PTR_s__rustc_48a229ceaefd4985c50990b14_00978ce8);
        }
      }
      else if ((*pcVar1 == '.') && (pcVar1[1] == '/')) goto LAB_0070ad40;
    }
  }
  else {
    if ((bVar3 & 1) == 0) {
      if (bVar5 == 1) goto LAB_0070ad04;
      if (bVar5 != 2) goto LAB_0070addc;
      if (uVar8 < uVar7) {
        FUN_006dfdd0(&local_80,param_2);
        uVar4 = uVar7 - local_80;
        *(undefined8 *)(param_1 + 8) = uStack_70;
        *(undefined8 *)param_1 = local_78;
        *(undefined8 *)(param_1 + 0x18) = uStack_60;
        *(undefined8 *)(param_1 + 0x10) = local_68;
        *(undefined8 *)(param_1 + 0x28) = uStack_50;
        *(undefined8 *)(param_1 + 0x20) = local_58;
        *(undefined8 *)(param_1 + 0x30) = local_48;
        if (uVar7 < local_80) goto LAB_0070adf4;
        cVar6 = *param_1;
        param_2[1] = uVar4;
        uVar7 = uVar4;
        while( true ) {
          if (cVar6 != -1) {
            return;
          }
          if (uVar7 <= uVar8) break;
          FUN_006dfdd0(&local_80,param_2);
          uVar4 = uVar7 - local_80;
          *(undefined8 *)(param_1 + 8) = uStack_70;
          *(undefined8 *)param_1 = local_78;
          *(undefined8 *)(param_1 + 0x18) = uStack_60;
          *(undefined8 *)(param_1 + 0x10) = local_68;
          *(undefined8 *)(param_1 + 0x28) = uStack_50;
          *(undefined8 *)(param_1 + 0x20) = local_58;
          *(undefined8 *)(param_1 + 0x30) = local_48;
          if (uVar7 < local_80) goto LAB_0070adb4;
          cVar6 = *param_1;
          param_2[1] = uVar4;
          uVar7 = uVar4;
        }
      }
    }
    else {
      if (bVar5 == 1) goto LAB_0070ad7c;
      if (bVar5 != 2) {
LAB_0070addc:
                    /* WARNING: Subroutine does not return */
        core::panicking::panic(&DAT_0045ad81,0x28,&PTR_s__rustc_48a229ceaefd4985c50990b14_00978d30);
      }
      if (uVar8 < uVar7) {
        FUN_006dfdd0(&local_80,param_2);
        uVar4 = uVar7 - local_80;
        *(undefined8 *)(param_1 + 8) = uStack_70;
        *(undefined8 *)param_1 = local_78;
        *(undefined8 *)(param_1 + 0x18) = uStack_60;
        *(undefined8 *)(param_1 + 0x10) = local_68;
        *(undefined8 *)(param_1 + 0x28) = uStack_50;
        *(undefined8 *)(param_1 + 0x20) = local_58;
        *(undefined8 *)(param_1 + 0x30) = local_48;
        if (uVar7 < local_80) {
LAB_0070adf4:
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (0,uVar4,uVar7,&PTR_s__rustc_48a229ceaefd4985c50990b14_00978d18);
        }
        cVar6 = *param_1;
        param_2[1] = uVar4;
        uVar7 = uVar4;
        while( true ) {
          if (cVar6 != -1) {
            return;
          }
          if (uVar7 <= uVar8) break;
          FUN_006dfdd0(&local_80,param_2);
          uVar4 = uVar7 - local_80;
          *(undefined8 *)(param_1 + 8) = uStack_70;
          *(undefined8 *)param_1 = local_78;
          *(undefined8 *)(param_1 + 0x18) = uStack_60;
          *(undefined8 *)(param_1 + 0x10) = local_68;
          *(undefined8 *)(param_1 + 0x28) = uStack_50;
          *(undefined8 *)(param_1 + 0x20) = local_58;
          *(undefined8 *)(param_1 + 0x30) = local_48;
          if (uVar7 < local_80) {
LAB_0070adb4:
                    /* WARNING: Subroutine does not return */
            core::slice::index::slice_index_fail
                      (0,uVar4,uVar7,&PTR_s__rustc_48a229ceaefd4985c50990b14_00978d18);
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
LAB_0070ad94:
  *param_1 = cVar6;
  return;
}


// ===== 0070ae20  <std::process::Command_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::process::Command as core::fmt::Debug>::fmt */

void __rustcall <std::process::Command_as_core::fmt::Debug>::fmt(void)

{
  (*(code *)PTR_fmt_009a1bf8)();
  return;
}


// ===== 0070ae24  <std::io::stdio::StdoutLock_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StdoutLock as core::fmt::Debug>::fmt */

void __rustcall
<std::io::stdio::StdoutLock_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,&DAT_0045c65a,10);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish_non_exhaustive(auStack_20);
  return;
}


// ===== 0070ae5c  <std::sys::fs::unix::DirBuilder_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::fs::unix::DirBuilder as core::fmt::Debug>::fmt */

void __rustcall
<std::sys::fs::unix::DirBuilder_as_core::fmt::Debug>::fmt(undefined4 *param_1,undefined8 param_2)

{
  undefined1 auStack_30 [16];
  undefined4 local_4;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,&DAT_0045c664,10);
  local_4 = *param_1;
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
            (auStack_30,&DAT_003799a4,4,&local_4,&DAT_00978858);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 0070aec8  FUN_0070aec8 =====

undefined1  [16] FUN_0070aec8(long *param_1,ulong param_2)

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
    core::option::unwrap_failed(&PTR_s__rustc_48a229ceaefd4985c50990b14_00978d48);
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
    if (uVar5 < *(ushort *)((long)plVar3 + 0x21a)) goto LAB_0070af6c;
  }
  else {
    lVar6 = param_1[2];
    uVar5 = param_1[3];
    if (uVar5 < *(ushort *)((long)plVar3 + 0x21a)) goto LAB_0070af6c;
  }
  do {
    plVar4 = (long *)*plVar3;
    if (plVar4 == (long *)0x0) {
                    /* try { // try from 0070afb8 to 0070afc3 has its CatchHandler @ 0070afd4 */
                    /* WARNING: Subroutine does not return */
      core::option::unwrap_failed(&PTR_s__rustc_48a229ceaefd4985c50990b14_00977248);
    }
    puVar1 = (ushort *)(plVar3 + 0x43);
    uVar5 = (ulong)*puVar1;
    lVar6 = lVar6 + 1;
    plVar3 = plVar4;
  } while (*(ushort *)((long)plVar4 + 0x21a) <= *puVar1);
LAB_0070af6c:
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


// ===== 0070afd8  <std::env::ArgsOs_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::env::ArgsOs as core::fmt::Debug>::fmt */

void __rustcall <std::env::ArgsOs_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_30 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,&DAT_0045c66e,6);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
            (auStack_30,&DAT_0045c1bf,5,param_1,&PTR_FUN_00978b78);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 0070b03c  FUN_0070b03c =====

bool FUN_0070b03c(undefined8 *param_1,undefined8 *param_2)

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
    iVar1 = FUN_006fdcac(local_b0,local_78);
    if (iVar1 == 0) {
      return false;
    }
    <std::path::Components_as_core::iter::traits::double_ended::DoubleEndedIterator>::next_back
              (local_120,&local_1a0);
  }
  return false;
}


// ===== 0070b264  <std::process::CommandArgs_as_core::iter::traits::iterator::Iterator>::next =====

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


// ===== 0070b2b4  <std::process::CommandArgs_as_core::iter::traits::iterator::Iterator>::size_hint =====

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


// ===== 0070b2d0  <std::io::stdio::StdinLock_as_std::sys::io::kernel_copy::linux::CopyRead>::properties =====

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
    ppuVar3 = &PTR_FUN_00977078;
    if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
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
  param_1[0x11] = DAT_003743c8;
  return;
}


// ===== 0070b3cc  <std::fs::Metadata_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::fs::Metadata as core::fmt::Debug>::fmt */

void __rustcall <std::fs::Metadata_as_core::fmt::Debug>::fmt(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_50 [16];
  undefined8 local_40;
  undefined4 local_38;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_50,param_2,&DAT_00375c20,8);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  local_40._0_4_ = uVar1;
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
            (auStack_50,&DAT_0045c674,9,&local_40,&DAT_00978d60);
  local_40 = CONCAT44(local_40._4_4_,uVar1);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
            (auStack_50,&DAT_0045c67d,0xb,&local_40,&DAT_00978d80);
  local_40 = *(undefined8 *)(param_1 + 0x30);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
            (auStack_50,&DAT_0045c688,3,&local_40,&DAT_00978da0);
  if (*(ulong *)(param_1 + 0x60) < 1000000000) {
    local_40 = *(undefined8 *)(param_1 + 0x58);
    local_38 = (undefined4)*(ulong *)(param_1 + 0x60);
                    /* try { // try from 0070b494 to 0070b4b3 has its CatchHandler @ 0070b51c */
    <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
              (auStack_50,&DAT_00374a08,8,&local_40,&DAT_00978dc0);
  }
  if (*(ulong *)(param_1 + 0x50) < 1000000000) {
    local_40 = *(undefined8 *)(param_1 + 0x48);
    local_38 = (undefined4)*(ulong *)(param_1 + 0x50);
                    /* try { // try from 0070b4cc to 0070b4eb has its CatchHandler @ 0070b508 */
    <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
              (auStack_50,"accessed",8,&local_40,&DAT_00978dc0);
  }
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish_non_exhaustive(auStack_50);
  return;
}


// ===== 0070b538  <std::process::CommandArgs_as_core::iter::traits::exact_size::ExactSizeIterator>::len =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::process::CommandArgs as core::iter::traits::exact_size::ExactSizeIterator>::len */

ulong __rustcall
<std::process::CommandArgs_as_core::iter::traits::exact_size::ExactSizeIterator>::len(long *param_1)

{
  return (ulong)(param_1[1] - *param_1) >> 3;
}


// ===== 0070b548  <std::io::stdio::Stderr_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::Stderr as core::fmt::Debug>::fmt */

void __rustcall
<std::io::stdio::Stderr_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,&DAT_0045c68b,6);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish_non_exhaustive(auStack_20);
  return;
}


// ===== 0070b580  <std::io::stdio::StdoutLock_as_std::sys::io::kernel_copy::linux::CopyWrite>::properties =====

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
    ppuVar3 = &PTR_FUN_00977078;
    if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
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


// ===== 0070b678  <std::process::CommandEnvs_as_core::iter::traits::iterator::Iterator>::next =====

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
  
  auVar7 = FUN_0070aec8();
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


// ===== 0070b6cc  <std::io::stdio::Stderr_as_std::io::Write>::write_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::Stderr as std::io::Write>::write_vectored */

void __rustcall <std::io::stdio::Stderr_as_std::io::Write>::write_vectored(undefined8 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <&std::io::stdio::Stderr_as_std::io::Write>::write_vectored(&local_18);
  return;
}


// ===== 0070b6f0  <std::io::stdio::Stderr_as_std::io::Write>::write_all_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::Stderr as std::io::Write>::write_all_vectored */

void __rustcall <std::io::stdio::Stderr_as_std::io::Write>::write_all_vectored(undefined8 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <&std::io::stdio::Stderr_as_std::io::Write>::write_all_vectored(&local_18);
  return;
}


// ===== 0070b714  <std::io::stdio::Stderr_as_std::io::Write>::flush =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::Stderr as std::io::Write>::flush */

void __rustcall <std::io::stdio::Stderr_as_std::io::Write>::flush(undefined8 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <&std::io::stdio::Stderr_as_std::io::Write>::flush(&local_18);
  return;
}


// ===== 0070b738  <std::io::stdio::Stderr_as_std::io::Write>::write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::Stderr as std::io::Write>::write */

void __rustcall <std::io::stdio::Stderr_as_std::io::Write>::write(undefined8 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <&std::io::stdio::Stderr_as_std::io::Write>::write(&local_18);
  return;
}


// ===== 0070b75c  <std::io::stdio::Stderr_as_std::io::Write>::write_all =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::Stderr as std::io::Write>::write_all */

void __rustcall <std::io::stdio::Stderr_as_std::io::Write>::write_all(undefined8 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <&std::io::stdio::Stderr_as_std::io::Write>::write_all(&local_18);
  return;
}


// ===== 0070b780  <std::io::stdio::Stderr_as_std::io::Write>::write_fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::Stderr as std::io::Write>::write_fmt */

void __rustcall <std::io::stdio::Stderr_as_std::io::Write>::write_fmt(undefined8 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <&std::io::stdio::Stderr_as_std::io::Write>::write_fmt(&local_18);
  return;
}


// ===== 0070b7a4  <std::io::stdio::StderrLock_as_std::sys::io::kernel_copy::linux::CopyWrite>::properties =====

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
    ppuVar3 = &PTR_FUN_00977078;
    if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
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
  param_1[0x11] = DAT_00374d58;
  return;
}


// ===== 0070b8a0  <&std::io::stdio::Stderr_as_std::io::Write>::write_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::io::stdio::Stderr as std::io::Write>::write_vectored */

undefined8 __rustcall
<&std::io::stdio::Stderr_as_std::io::Write>::write_vectored
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
  if (DAT_009a6f60 == 0) {
    __key = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(&DAT_009a6f60);
    pvVar4 = pthread_getspecific(__key);
    if (pvVar4 == (void *)0x0) goto LAB_0070b910;
LAB_0070b8dc:
    if (pvVar4 != (void *)*puVar7) {
LAB_0070b920:
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
      goto LAB_0070b940;
    }
  }
  else {
    pvVar4 = pthread_getspecific((pthread_key_t)DAT_009a6f60);
    if (pvVar4 != (void *)0x0) goto LAB_0070b8dc;
LAB_0070b910:
    pvVar4 = (void *)FUN_006d2020();
    if (pvVar4 != (void *)*puVar7) goto LAB_0070b920;
  }
  if (*(int *)((long)puVar7 + 0xc) == -1) {
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed(&DAT_0045b52c,0x26,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977928)
    ;
  }
  iVar6 = *(int *)((long)puVar7 + 0xc) + 1;
LAB_0070b940:
  *(int *)((long)puVar7 + 0xc) = iVar6;
                    /* try { // try from 0070b948 to 0070b957 has its CatchHandler @ 0070ba00 */
  local_18 = puVar7;
  uVar5 = <std::io::stdio::StderrLock_as_std::io::Write>::write_vectored(&local_18,param_2,param_3);
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


// ===== 0070ba14  <&std::io::stdio::Stderr_as_std::io::Write>::write_all_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::io::stdio::Stderr as std::io::Write>::write_all_vectored */

ulong __rustcall
<&std::io::stdio::Stderr_as_std::io::Write>::write_all_vectored
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
  if (DAT_009a6f60 == 0) {
    __key = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(&DAT_009a6f60);
    pvVar5 = pthread_getspecific(__key);
    if (pvVar5 != (void *)0x0) goto LAB_0070ba4c;
LAB_0070ba80:
    pvVar5 = (void *)FUN_006d2020();
    if (pvVar5 != (void *)*puVar9) {
LAB_0070ba90:
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
      goto LAB_0070bab0;
    }
  }
  else {
    pvVar5 = pthread_getspecific((pthread_key_t)DAT_009a6f60);
    if (pvVar5 == (void *)0x0) goto LAB_0070ba80;
LAB_0070ba4c:
    if (pvVar5 != (void *)*puVar9) goto LAB_0070ba90;
  }
  if (*(int *)((long)puVar9 + 0xc) == -1) {
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed(&DAT_0045b52c,0x26,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977928)
    ;
  }
  iVar8 = *(int *)((long)puVar9 + 0xc) + 1;
LAB_0070bab0:
  *(int *)((long)puVar9 + 0xc) = iVar8;
  if (puVar9[2] != 0) {
                    /* try { // try from 0070bb60 to 0070bb6b has its CatchHandler @ 0070bbc0 */
    core::cell::panic_already_borrowed(&PTR_s__rustc_48a229ceaefd4985c50990b14_00978e78);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x70bb70);
    (*pcVar4)();
  }
  puVar9[2] = 0xffffffffffffffff;
                    /* try { // try from 0070bac4 to 0070bacf has its CatchHandler @ 0070bba0 */
  uVar6 = FUN_0070e600(pvVar5,param_2,param_3);
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


// ===== 0070bbd4  <&std::io::stdio::Stderr_as_std::io::Write>::flush =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::io::stdio::Stderr as std::io::Write>::flush */

undefined8 __rustcall <&std::io::stdio::Stderr_as_std::io::Write>::flush(undefined8 *param_1)

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
  if (DAT_009a6f60 == 0) {
    __key = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(&DAT_009a6f60);
    pvVar6 = pthread_getspecific(__key);
    if (pvVar6 == (void *)0x0) goto LAB_0070bc54;
LAB_0070bc00:
    if (pvVar6 != (void *)*puVar8) {
LAB_0070bc64:
      piVar1 = (int *)(puVar8 + 1);
      do {
        if (*piVar1 != 0) {
          ClearExclusiveLocal();
          <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                    (puVar8 + 1);
          *puVar8 = pvVar6;
          lVar7 = puVar8[2];
          *(undefined4 *)((long)puVar8 + 0xc) = 1;
          goto joined_r0x0070bd08;
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
joined_r0x0070bd08:
      if (lVar7 != 0) goto LAB_0070bd0c;
      *(undefined4 *)((long)puVar8 + 0xc) = 0;
      goto LAB_0070bc94;
    }
  }
  else {
    pvVar6 = pthread_getspecific((pthread_key_t)DAT_009a6f60);
    if (pvVar6 != (void *)0x0) goto LAB_0070bc00;
LAB_0070bc54:
    pvVar6 = (void *)FUN_006d2020();
    if (pvVar6 != (void *)*puVar8) goto LAB_0070bc64;
  }
  iVar2 = *(int *)((long)puVar8 + 0xc);
  if (iVar2 == -1) {
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed(&DAT_0045b52c,0x26,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977928)
    ;
  }
  *(int *)((long)puVar8 + 0xc) = iVar2 + 1;
  if (puVar8[2] != 0) {
LAB_0070bd0c:
                    /* try { // try from 0070bd0c to 0070bd17 has its CatchHandler @ 0070bd1c */
    core::cell::panic_already_borrowed(&PTR_s__rustc_48a229ceaefd4985c50990b14_00978e90);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x70bd1c);
    (*pcVar5)();
  }
  *(int *)((long)puVar8 + 0xc) = iVar2;
  if (iVar2 != 0) {
    return 0;
  }
LAB_0070bc94:
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


// ===== 0070bd30  <&std::io::stdio::Stderr_as_std::io::Write>::write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::io::stdio::Stderr as std::io::Write>::write */

undefined1  [16] __rustcall
<&std::io::stdio::Stderr_as_std::io::Write>::write(undefined8 *param_1,void *param_2,size_t param_3)

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
  if (DAT_009a6f60 == 0) {
    __key = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(&DAT_009a6f60);
    pvVar4 = pthread_getspecific(__key);
    if (pvVar4 != (void *)0x0) goto LAB_0070bd68;
LAB_0070bd9c:
    pvVar4 = (void *)FUN_006d2020();
    if (pvVar4 != (void *)*puVar9) {
LAB_0070bdac:
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
      goto LAB_0070bdcc;
    }
  }
  else {
    pvVar4 = pthread_getspecific((pthread_key_t)DAT_009a6f60);
    if (pvVar4 == (void *)0x0) goto LAB_0070bd9c;
LAB_0070bd68:
    if (pvVar4 != (void *)*puVar9) goto LAB_0070bdac;
  }
  if (*(int *)((long)puVar9 + 0xc) == -1) {
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed(&DAT_0045b52c,0x26,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977928)
    ;
  }
  iVar8 = *(int *)((long)puVar9 + 0xc) + 1;
LAB_0070bdcc:
  *(int *)((long)puVar9 + 0xc) = iVar8;
  if (puVar9[2] != 0) {
                    /* try { // try from 0070beb4 to 0070bebf has its CatchHandler @ 0070bf24 */
    core::cell::panic_already_borrowed(&PTR_s__rustc_48a229ceaefd4985c50990b14_00978ea8);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x70bec4);
    (*pcVar3)();
  }
  puVar9[2] = 0xffffffffffffffff;
  sVar5 = ::write(2,param_2,param_3);
  if (sVar5 == 0xffffffffffffffff) {
    piVar7 = (int *)__errno();
    iVar8 = *piVar7;
    if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
                    /* try { // try from 0070bedc to 0070bee7 has its CatchHandler @ 0070bf04 */
      core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
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


// ===== 0070bf38  <&std::io::stdio::Stderr_as_std::io::Write>::write_all =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::io::stdio::Stderr as std::io::Write>::write_all */

ulong __rustcall
<&std::io::stdio::Stderr_as_std::io::Write>::write_all
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
  if (DAT_009a6f60 == 0) {
    __key = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(&DAT_009a6f60);
    pvVar5 = pthread_getspecific(__key);
    if (pvVar5 != (void *)0x0) goto LAB_0070bf70;
LAB_0070bfa4:
    pvVar5 = (void *)FUN_006d2020();
    if (pvVar5 != (void *)*puVar9) {
LAB_0070bfb4:
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
      goto LAB_0070bfd4;
    }
  }
  else {
    pvVar5 = pthread_getspecific((pthread_key_t)DAT_009a6f60);
    if (pvVar5 == (void *)0x0) goto LAB_0070bfa4;
LAB_0070bf70:
    if (pvVar5 != (void *)*puVar9) goto LAB_0070bfb4;
  }
  if (*(int *)((long)puVar9 + 0xc) == -1) {
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed(&DAT_0045b52c,0x26,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977928)
    ;
  }
  iVar8 = *(int *)((long)puVar9 + 0xc) + 1;
LAB_0070bfd4:
  *(int *)((long)puVar9 + 0xc) = iVar8;
  if (puVar9[2] != 0) {
                    /* try { // try from 0070c084 to 0070c08f has its CatchHandler @ 0070c0e4 */
    core::cell::panic_already_borrowed(&PTR_s__rustc_48a229ceaefd4985c50990b14_00978ec0);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x70c094);
    (*pcVar4)();
  }
  puVar9[2] = 0xffffffffffffffff;
                    /* try { // try from 0070bfe8 to 0070bff3 has its CatchHandler @ 0070c0c4 */
  uVar6 = FUN_0070e804(pvVar5,param_2,param_3);
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


// ===== 0070c0f8  <&std::io::stdio::Stderr_as_std::io::Write>::write_fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&std::io::stdio::Stderr as std::io::Write>::write_fmt */

ulong __rustcall
<&std::io::stdio::Stderr_as_std::io::Write>::write_fmt
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
  if (DAT_009a6f60 == 0) {
    __key = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(&DAT_009a6f60);
    pvVar5 = pthread_getspecific(__key);
    if (pvVar5 == (void *)0x0) goto LAB_0070c168;
LAB_0070c134:
    if (pvVar5 != (void *)*puVar7) {
LAB_0070c178:
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
      goto LAB_0070c198;
    }
  }
  else {
    pvVar5 = pthread_getspecific((pthread_key_t)DAT_009a6f60);
    if (pvVar5 != (void *)0x0) goto LAB_0070c134;
LAB_0070c168:
    pvVar5 = (void *)FUN_006d2020();
    if (pvVar5 != (void *)*puVar7) goto LAB_0070c178;
  }
  if (*(int *)((long)puVar7 + 0xc) == -1) {
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed(&DAT_0045b52c,0x26,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977928)
    ;
  }
  iVar4 = *(int *)((long)puVar7 + 0xc) + 1;
LAB_0070c198:
  *(int *)((long)puVar7 + 0xc) = iVar4;
  local_50 = &local_18;
  local_48 = 0;
                    /* try { // try from 0070c1a8 to 0070c1e7 has its CatchHandler @ 0070c2d8 */
  local_18 = puVar7;
  iVar4 = core::fmt::write(&local_50,&PTR_FUN_00976ef0,param_2,param_3);
  uVar6 = local_48;
  if (iVar4 == 0) {
    if (local_48 != 0) {
      if ((1 < (local_48 & 3) - 2) && ((local_48 & 3) != 0)) {
        local_38 = local_48 - 1;
        local_40 = 3;
                    /* try { // try from 0070c218 to 0070c21f has its CatchHandler @ 0070c2c4 */
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_38);
      }
      uVar6 = 0;
    }
  }
  else if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_0045acd3,0xad,&PTR_s__rustc_48a229ceaefd4985c50990b14_00976ea8);
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


// ===== 0070c2f8  <std::sync::mpsc::RecvError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sync::mpsc::RecvError as core::fmt::Display>::fmt */

void __rustcall
<std::sync::mpsc::RecvError_as_core::fmt::Display>::fmt(undefined8 param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt(&DAT_0045c691,0x1d,param_2);
  return;
}


// ===== 0070c30c  FUN_0070c30c =====

void FUN_0070c30c(undefined8 *param_1)

{
  core::fmt::pointer_fmt_inner(*param_1);
  return;
}


// ===== 0070c314  <std::process::CommandEnvs_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::process::CommandEnvs as core::fmt::Debug>::fmt */

void __rustcall
<std::process::CommandEnvs_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field1_finish
            (param_2,&DAT_0045c6ae,0xb,&DAT_003771a8,4,&local_18,&DAT_00978de0);
  return;
}


// ===== 0070c360  FUN_0070c360 =====

void FUN_0070c360(long param_1,undefined8 param_2)

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
    <core::fmt::builders::[4]::core::fmt::builders::DebugSet>::entry
              (auStack_40,&local_18,&DAT_00976c88);
    lVar3 = local_18;
  }
  local_18 = lVar3;
  <core::fmt::builders::[5]::core::fmt::builders::DebugList>::finish(auStack_40);
  return;
}


// ===== 0070c3cc  <std::sync::mpsc::TryRecvError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sync::mpsc::TryRecvError as core::fmt::Display>::fmt */

void __rustcall
<std::sync::mpsc::TryRecvError_as_core::fmt::Display>::fmt(char *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_0045c691;
  if (*param_1 == '\0') {
    puVar1 = &UNK_0045c6b9;
  }
  <str_as_core::fmt::Display>::fmt(puVar1,0x1d,param_2);
  return;
}


// ===== 0070c3f4  FUN_0070c3f4 =====

void FUN_0070c3f4(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,&DAT_0045c6d6,2);
  return;
}


// ===== 0070c408  <std::process::Output_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::process::Output as core::fmt::Debug>::fmt */

void __rustcall
<std::process::Output_as_core::fmt::Debug>::fmt(undefined1 *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  int local_90 [2];
  undefined1 auStack_88 [16];
  int local_78 [2];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  
  core::str::converts::from_utf8
            (local_90,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  puVar1 = param_1;
  ppuVar3 = &PTR_FUN_00978e20;
  if (local_90[0] == 0) {
    puVar1 = auStack_88;
    ppuVar3 = (undefined **)&UNK_00978e00;
  }
  core::str::converts::from_utf8
            (local_78,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  puVar2 = param_1 + 0x18;
  ppuVar4 = &PTR_FUN_00978e20;
  if (local_78[0] == 0) {
    puVar2 = auStack_70;
    ppuVar4 = (undefined **)&UNK_00978e00;
  }
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_60,param_2,&DAT_0045c6d8,6);
  uVar5 = <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
                    (auStack_60,&DAT_0045c6de,6,param_1 + 0x30,&DAT_00978e40);
  uVar5 = <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
                    (uVar5,&DAT_0045b81e,6,puVar1,ppuVar3);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
            (uVar5,&DAT_0045b824,6,puVar2,ppuVar4);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 0070c518  FUN_0070c518 =====

void FUN_0070c518(undefined4 *param_1,long param_2)

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


// ===== 0070c56c  <std::io::stdio::StderrLock_as_std::io::Write>::write_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StderrLock as std::io::Write>::write_vectored */

undefined1  [16] __rustcall
<std::io::stdio::StderrLock_as_std::io::Write>::write_vectored
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
      if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) goto LAB_0070c6b8;
      goto LAB_0070c5fc;
    }
  }
  else {
    core::cell::panic_already_borrowed(&PTR_s__rustc_48a229ceaefd4985c50990b14_00978e60);
LAB_0070c6b8:
                    /* try { // try from 0070c6b8 to 0070c6c3 has its CatchHandler @ 0070c6c8 */
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
LAB_0070c5fc:
    if (unaff_w22 != 9) {
      uVar4 = 1;
      uVar3 = (ulong)unaff_w22 << 0x20 | 2;
      goto LAB_0070c5bc;
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
LAB_0070c5bc:
  *(long *)(lVar11 + 0x10) = *(long *)(lVar11 + 0x10) + 1;
  auVar16._8_8_ = uVar3;
  auVar16._0_8_ = uVar4;
  return auVar16;
}


// ===== 0070c6d8  <std::io::stdio::StderrLock_as_std::io::Write>::write_all_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StderrLock as std::io::Write>::write_all_vectored */

ulong __rustcall <std::io::stdio::StderrLock_as_std::io::Write>::write_all_vectored(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (*(long *)(lVar3 + 0x10) != 0) {
    core::cell::panic_already_borrowed(&PTR_s__rustc_48a229ceaefd4985c50990b14_00978e78);
                    /* catch() { ... } // from try @ 0070c6f8 with catch @ 0070c740 */
    *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 1;
                    /* WARNING: Subroutine does not return */
    FUN_00751c7c();
  }
  *(undefined8 *)(lVar3 + 0x10) = 0xffffffffffffffff;
                    /* try { // try from 0070c6f8 to 0070c6fb has its CatchHandler @ 0070c740 */
  uVar1 = FUN_0070e600();
  uVar2 = uVar1;
  if ((((uVar1 != 0) && (1 < (uVar1 & 3))) && ((uVar1 & 3) == 2)) && (uVar2 = 0, uVar1 >> 0x20 != 9)
     ) {
    uVar2 = uVar1;
  }
  *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 1;
  return uVar2;
}


// ===== 0070c750  <std::io::stdio::StderrLock_as_std::io::Write>::flush =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StderrLock as std::io::Write>::flush */

undefined1  [16] __rustcall
<std::io::stdio::StderrLock_as_std::io::Write>::flush(long *param_1,ulong param_2,size_t param_3)

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
  auVar5 = core::cell::panic_already_borrowed(&PTR_s__rustc_48a229ceaefd4985c50990b14_00978e90);
  lVar4 = *auVar5._0_8_;
  if (*(long *)(lVar4 + 0x10) == 0) {
    *(undefined8 *)(lVar4 + 0x10) = 0xffffffffffffffff;
    sVar1 = ::write(2,auVar5._8_8_,param_3);
    if (sVar1 != 0xffffffffffffffff) {
      uVar2 = 0;
      goto LAB_0070c7f4;
    }
    puVar3 = (uint *)__errno();
    unaff_w21 = *puVar3;
    unaff_x19 = param_3;
    if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) goto LAB_0070c81c;
  }
  else {
    core::cell::panic_already_borrowed(&PTR_s__rustc_48a229ceaefd4985c50990b14_00978ea8);
LAB_0070c81c:
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  uVar2 = (ulong)(unaff_w21 != 9);
  sVar1 = (ulong)unaff_w21 << 0x20 | 2;
  if (unaff_w21 == 9) {
    sVar1 = unaff_x19;
  }
LAB_0070c7f4:
  *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
  auVar6._8_8_ = sVar1;
  auVar6._0_8_ = uVar2;
  return auVar6;
}


// ===== 0070c778  <std::io::stdio::StderrLock_as_std::io::Write>::write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StderrLock as std::io::Write>::write */

undefined1  [16] __rustcall
<std::io::stdio::StderrLock_as_std::io::Write>::write(long *param_1,void *param_2,size_t param_3)

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
      goto LAB_0070c7f4;
    }
    puVar3 = (uint *)__errno();
    unaff_w21 = *puVar3;
    unaff_x19 = param_3;
    if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) goto LAB_0070c81c;
  }
  else {
    core::cell::panic_already_borrowed(&PTR_s__rustc_48a229ceaefd4985c50990b14_00978ea8);
LAB_0070c81c:
                    /* try { // try from 0070c81c to 0070c827 has its CatchHandler @ 0070c82c */
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  uVar2 = (ulong)(unaff_w21 != 9);
  sVar1 = (ulong)unaff_w21 << 0x20 | 2;
  if (unaff_w21 == 9) {
    sVar1 = unaff_x19;
  }
LAB_0070c7f4:
  *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
  auVar5._8_8_ = sVar1;
  auVar5._0_8_ = uVar2;
  return auVar5;
}


// ===== 0070c83c  <std::io::stdio::StderrLock_as_std::io::Write>::write_all =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StderrLock as std::io::Write>::write_all */

ulong __rustcall <std::io::stdio::StderrLock_as_std::io::Write>::write_all(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (*(long *)(lVar3 + 0x10) != 0) {
    core::cell::panic_already_borrowed(&PTR_s__rustc_48a229ceaefd4985c50990b14_00978ec0);
                    /* catch() { ... } // from try @ 0070c85c with catch @ 0070c8a4 */
    *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 1;
                    /* WARNING: Subroutine does not return */
    FUN_00751c7c();
  }
  *(undefined8 *)(lVar3 + 0x10) = 0xffffffffffffffff;
                    /* try { // try from 0070c85c to 0070c85f has its CatchHandler @ 0070c8a4 */
  uVar1 = FUN_0070e804();
  uVar2 = uVar1;
  if ((((uVar1 != 0) && (1 < (uVar1 & 3))) && ((uVar1 & 3) == 2)) && (uVar2 = 0, uVar1 >> 0x20 != 9)
     ) {
    uVar2 = uVar1;
  }
  *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 1;
  return uVar2;
}


// ===== 0070c8b4  <alloc::boxed::Box<std::path::Path>as_core::convert::From<&{backref_13}>>::from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::boxed::Box<std::path::Path> as core::convert::From<&{backref 13}>>::from */

undefined1  [16] __rustcall
<alloc::boxed::Box<std::path::Path>as_core::convert::From<&{backref_13}>>::from
          (void *param_1,size_t param_2)

{
  void *__dest;
  undefined1 auVar1 [16];
  
  if (param_2 == 0) {
    __dest = (void *)0x1;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    __dest = (void *)__rustc::__rust_alloc(param_2,1);
    if (__dest == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(1,param_2);
    }
  }
  memcpy(__dest,param_1,param_2);
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = __dest;
  return auVar1;
}


// ===== 0070c920  FUN_0070c920  [FAILED] =====
/* decompilation failed: 
Recoverable Error: Unable to find unique hash for varnode */

// ===== 0070d078  <std::io::stdio::StderrLock_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::io::stdio::StderrLock as core::fmt::Debug>::fmt */

void __rustcall
<std::io::stdio::StderrLock_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,&DAT_0045c6e4,10);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish_non_exhaustive(auStack_20);
  return;
}


// ===== 0070d0b0  <std::sys::fs::unix::File_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sys::fs::unix::File as core::fmt::Debug>::fmt */

void __rustcall
<std::sys::fs::unix::File_as_core::fmt::Debug>::fmt(undefined4 *param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  FUN_006f4ca0(auStack_20,*param_1,param_2,&DAT_00376bdc,4);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish(auStack_20);
  return;
}


// ===== 0070d0f0  <std::sync::mpsc::RecvTimeoutError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::sync::mpsc::RecvTimeoutError as core::fmt::Display>::fmt */

void __rustcall
<std::sync::mpsc::RecvTimeoutError_as_core::fmt::Display>::fmt(char *param_1,undefined8 param_2)

{
  if (*param_1 == '\x01') {
    <str_as_core::fmt::Display>::fmt(&DAT_0045c70a,0x2b,param_2);
    return;
  }
  <str_as_core::fmt::Display>::fmt(&DAT_0045c6ee,0x1c,param_2);
  return;
}


// ===== 0070d120  <std::sys::fs::unix::Mode_as_core::fmt::Debug>::fmt =====

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
  puStack_38 = PTR_fmt_0099f800;
  uVar4 = core::fmt::write(*param_2,param_2[1],&DAT_0045c735,&local_40);
  if ((uVar4 & 1) != 0) {
    return 1;
  }
  uVar1 = (local_44 & 0xf000) - 0x1000 >> 0xc;
  if (uVar1 < 5) {
    if (uVar1 == 0) {
      uVar8 = 0x70;
      uVar4 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2," (",2);
      goto joined_r0x0070d208;
    }
    if (uVar1 == 1) {
      uVar8 = 99;
      uVar4 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2," (",2);
      goto joined_r0x0070d208;
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
joined_r0x0070d208:
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
      goto LAB_0070d4e4;
    }
    if ((uVar1 >> 9 & 1) != 0) {
      uVar5 = 0x74;
      goto LAB_0070d4e4;
    }
  }
  else if ((local_44 & 1) == 0) {
    uVar5 = 0x2d;
    goto LAB_0070d4e4;
  }
  uVar5 = 0x78;
LAB_0070d4e4:
  uVar4 = <core::fmt::Formatter_as_core::fmt::Write>::write_char(param_2,uVar5);
  if ((uVar4 & 1) == 0) {
    uVar8 = <core::fmt::Formatter_as_core::fmt::Write>::write_char(param_2,0x29);
    return uVar8;
  }
  return 1;
}


// ===== 0070d528  <std::fs::FileType_as_core::fmt::Debug>::fmt =====

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
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_40,param_2,&DAT_00375120,8);
  uVar1 = *param_1 & 0xf000;
  local_2c[0] = uVar1 == 0x8000;
  uVar2 = <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
                    (auStack_40,"is_file",7,local_2c,&DAT_00977f80);
  local_28[0] = uVar1 == 0x4000;
  uVar2 = <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
                    (uVar2,"is_dir",6,local_28,&DAT_00977f80);
  local_24[0] = uVar1 == 0xa000;
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
            (uVar2,"is_symlink",10,local_24,&DAT_00977f80);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish_non_exhaustive();
  return;
}


// ===== 0070d5ec  <std::process::Stdio_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::process::Stdio as core::fmt::Debug>::fmt */

void __rustcall
<std::process::Stdio_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,"Stdio",5);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish_non_exhaustive(auStack_20);
  return;
}


// ===== 0070d624  <std::fs::ReadDir_as_core::iter::traits::iterator::Iterator>::next =====

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


// ===== 0070d6a8  FUN_0070d6a8 =====

ulong FUN_0070d6a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_40;
  ulong local_38;
  undefined1 local_30;
  long local_28;
  
  local_38 = 0;
  local_40 = param_1;
                    /* try { // try from 0070d6c4 to 0070d6d3 has its CatchHandler @ 0070d758 */
  iVar1 = core::fmt::write(&local_40,&PTR_FUN_00976e78,param_2,param_3);
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
                    /* try { // try from 0070d73c to 0070d753 has its CatchHandler @ 0070d758 */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_0045acd3,0xad,&PTR_s__rustc_48a229ceaefd4985c50990b14_00976ea8);
  }
  return local_38;
}


// ===== 0070d770  FUN_0070d770 =====

ulong FUN_0070d770(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_40;
  ulong local_38;
  undefined1 local_30;
  long local_28;
  
  local_38 = 0;
  local_40 = param_1;
                    /* try { // try from 0070d78c to 0070d79b has its CatchHandler @ 0070d820 */
  iVar1 = core::fmt::write(&local_40,&PTR_FUN_00976ec0,param_2,param_3);
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
                    /* try { // try from 0070d804 to 0070d81b has its CatchHandler @ 0070d820 */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_0045acd3,0xad,&PTR_s__rustc_48a229ceaefd4985c50990b14_00976ea8);
  }
  return local_38;
}


// ===== 0070d838  FUN_0070d838 =====

void FUN_0070d838(undefined8 *param_1,long *param_2,char param_3)

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
  *param_1 = 0x13;
  param_1[1] = puVar4;
  return;
}


// ===== 0070d8c0  FUN_0070d8c0 =====

void FUN_0070d8c0(undefined2 *param_1,long *param_2)

{
  byte *pbVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  byte bVar6;
  byte *pbVar7;
  
  pbVar1 = (byte *)*param_2;
  lVar4 = param_2[1];
  pbVar7 = pbVar1;
  if (lVar4 != 0) {
    pbVar7 = pbVar1 + 1;
    bVar6 = *pbVar1;
    *param_2 = (long)pbVar7;
    param_2[1] = lVar4 + -1;
    uVar3 = (ulong)bVar6 & 0x7f;
    if ((char)bVar6 < '\0') {
      if (lVar4 + -1 == 0) goto LAB_0070d944;
      bVar6 = pbVar1[1];
      pbVar7 = pbVar1 + 2;
      *param_2 = (long)pbVar7;
      param_2[1] = lVar4 + -2;
      uVar3 = uVar3 | ((ulong)bVar6 & 0x7f) << 7;
      if ((char)bVar6 < '\0') {
        if (lVar4 + -2 == 0) {
LAB_0070da04:
          param_1[3] = 0;
          *param_1 = 0x13;
          *(undefined4 *)(param_1 + 1) = 0;
          *(byte **)(param_1 + 4) = pbVar7;
          return;
        }
        bVar6 = pbVar1[2];
        pbVar7 = pbVar1 + 3;
        *param_2 = (long)pbVar7;
        param_2[1] = lVar4 + -3;
        uVar3 = uVar3 | ((ulong)bVar6 & 0x7f) << 0xe;
        if ((char)bVar6 < '\0') {
          if (lVar4 + -3 == 0) goto LAB_0070da04;
          bVar6 = pbVar1[3];
          pbVar7 = pbVar1 + 4;
          *param_2 = (long)pbVar7;
          param_2[1] = lVar4 + -4;
          uVar3 = uVar3 | ((ulong)bVar6 & 0x7f) << 0x15;
          if ((char)bVar6 < '\0') {
            if (lVar4 + -4 == 0) goto LAB_0070da04;
            bVar6 = pbVar1[4];
            pbVar7 = pbVar1 + 5;
            *param_2 = (long)pbVar7;
            param_2[1] = lVar4 + -5;
            uVar3 = uVar3 | ((ulong)bVar6 & 0x7f) << 0x1c;
            if ((char)bVar6 < '\0') {
              if (lVar4 + -5 == 0) goto LAB_0070da04;
              bVar6 = pbVar1[5];
              pbVar7 = pbVar1 + 6;
              *param_2 = (long)pbVar7;
              param_2[1] = lVar4 + -6;
              uVar3 = uVar3 | (ulong)((int)(char)bVar6 & 0x7f) << 0x23;
              if ((char)bVar6 < 0) {
                if (lVar4 + -6 == 0) {
LAB_0070dadc:
                  param_1[3] = 0;
                  *param_1 = 0x13;
                  *(undefined4 *)(param_1 + 1) = 0;
                  *(byte **)(param_1 + 4) = pbVar7;
                  return;
                }
                bVar6 = pbVar1[6];
                pbVar7 = pbVar1 + 7;
                *param_2 = (long)pbVar7;
                param_2[1] = lVar4 + -7;
                uVar3 = uVar3 | (ulong)((int)(char)bVar6 & 0x7f) << 0x2a;
                if ((char)bVar6 < 0) {
                  if (lVar4 + -7 == 0) goto LAB_0070dadc;
                  bVar6 = pbVar1[7];
                  pbVar7 = pbVar1 + 8;
                  *param_2 = (long)pbVar7;
                  param_2[1] = lVar4 + -8;
                  uVar3 = uVar3 | (ulong)((int)(char)bVar6 & 0x7f) << 0x31;
                  if ((char)bVar6 < 0) {
                    if (lVar4 + -8 == 0) goto LAB_0070dadc;
                    bVar6 = pbVar1[8];
                    pbVar7 = pbVar1 + 9;
                    *param_2 = (long)pbVar7;
                    param_2[1] = lVar4 + -9;
                    uVar3 = uVar3 | (ulong)((int)(char)bVar6 & 0x7f) << 0x38;
                    if ((char)bVar6 < 0) {
                      if (lVar4 + -9 == 0) goto LAB_0070dadc;
                      bVar6 = pbVar1[9];
                      *param_2 = (long)(pbVar1 + 10);
                      param_2[1] = lVar4 + -10;
                      if ((bVar6 != 0x7f) && (bVar6 != 0)) {
                        *(undefined1 *)param_1 = 7;
                        return;
                      }
                      uVar3 = uVar3 | (ulong)bVar6 << 0x3f;
                      bVar2 = 0;
                      lVar4 = 6;
                    }
                    else {
                      bVar2 = 1;
                      lVar4 = 0x3f;
                    }
                  }
                  else {
                    bVar2 = 1;
                    lVar4 = 0x38;
                  }
                }
                else {
                  bVar2 = 1;
                  lVar4 = 0x31;
                }
              }
              else {
                bVar2 = 1;
                lVar4 = 0x2a;
              }
            }
            else {
              bVar2 = 1;
              lVar4 = 0x23;
            }
          }
          else {
            bVar2 = 1;
            lVar4 = 0x1c;
          }
        }
        else {
          bVar2 = 1;
          lVar4 = 0x15;
        }
      }
      else {
        bVar2 = 1;
        lVar4 = 0xe;
      }
    }
    else {
      bVar2 = 1;
      lVar4 = 7;
    }
    uVar5 = -1L << lVar4;
    if (!(bool)(0x3f < bVar6 & bVar2)) {
      uVar5 = 0;
    }
    *(ulong *)(param_1 + 4) = uVar5 | uVar3;
    *(undefined1 *)param_1 = 0xff;
    return;
  }
LAB_0070d944:
  param_1[3] = 0;
  *param_1 = 0x13;
  *(undefined4 *)(param_1 + 1) = 0;
  *(byte **)(param_1 + 4) = pbVar7;
  return;
}


// ===== 0070db00  FUN_0070db00 =====

void FUN_0070db00(undefined2 *param_1,long *param_2)

{
  byte *pbVar1;
  long lVar2;
  byte bVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  long lVar8;
  
  pbVar1 = (byte *)*param_2;
  lVar2 = param_2[1];
  if (lVar2 == 0) {
    param_1[3] = 0;
    *param_1 = 0x13;
    *(undefined4 *)(param_1 + 1) = 0;
    *(byte **)(param_1 + 4) = pbVar1;
    return;
  }
  uVar5 = 0;
  uVar6 = 0;
  lVar8 = 1 - lVar2;
  pbVar4 = pbVar1;
  do {
    pbVar7 = pbVar4 + 1;
    bVar3 = *pbVar4;
    if (((int)uVar6 == 0x3f) && (1 < bVar3)) {
      *param_2 = (long)pbVar7;
      param_2[1] = -lVar8;
      *(undefined1 *)param_1 = 6;
      return;
    }
    uVar5 = ((ulong)bVar3 & 0x7f) << (uVar6 & 0x3f) | uVar5;
    if (-1 < (char)bVar3) {
      *(ulong *)(param_1 + 4) = uVar5;
      *param_2 = (long)pbVar7;
      param_2[1] = -lVar8;
      *(undefined1 *)param_1 = 0xff;
      return;
    }
    lVar8 = lVar8 + 1;
    uVar6 = (ulong)((int)uVar6 + 7);
    pbVar4 = pbVar7;
  } while (lVar8 != 1);
  *param_2 = (long)(pbVar1 + lVar2);
  param_2[1] = 0;
  param_1[3] = 0;
  *param_1 = 0x13;
  *(undefined4 *)(param_1 + 1) = 0;
  *(byte **)(param_1 + 4) = pbVar1 + lVar2;
  return;
}


// ===== 0070dbb8  FUN_0070dbb8 =====

void FUN_0070dbb8(ulong *param_1,ulong *param_2,ulong param_3)

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
LAB_0070dc18:
    *param_1 = (param_3 & 0xff) << 8 | 0x1a;
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
      if (uVar3 != 1) goto LAB_0070dc18;
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
    if (uVar3 != 3) goto LAB_0070dc18;
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
  *param_1 = 0x13;
  param_1[1] = (ulong)puVar5;
  return;
}


// ===== 0070dcd8  FUN_0070dcd8 =====

undefined8 FUN_0070dcd8(undefined8 *param_1,uint param_2)

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
    FUN_006cecec(plVar3,lVar4,__n,1,1);
    lVar4 = plVar3[2];
  }
  memcpy((void *)(plVar3[1] + lVar4),&local_14,__n);
  plVar3[2] = lVar4 + __n;
  return 0;
}


// ===== 0070dde0  FUN_0070dde0 =====

void FUN_0070dde0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  core::fmt::write(param_1,&PTR_FUN_00976e78,param_2,param_3);
  return;
}


// ===== 0070ddf4  FUN_0070ddf4 =====

bool FUN_0070ddf4(undefined8 *param_1,uint param_2)

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
                    /* try { // try from 0070df10 to 0070df17 has its CatchHandler @ 0070df44 */
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_48);
    }
    param_1[1] = &PTR_DAT_00977df0;
  }
  return uVar6 < uVar5;
}


// ===== 0070df54  FUN_0070df54 =====

void FUN_0070df54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  core::fmt::write(param_1,&PTR_FUN_00976ec0,param_2,param_3);
  return;
}


// ===== 0070df68  FUN_0070df68 =====

void FUN_0070df68(undefined8 param_1,uint param_2)

{
  byte bVar1;
  undefined1 uVar2;
  uint local_14;
  
  if (param_2 < 0x80) {
    local_14 = param_2 & 0xff;
    FUN_006fc3d8(param_1,&local_14,1);
    return;
  }
  uVar2 = (undefined1)param_2;
  if (param_2 < 0x800) {
    local_14 = (CONCAT11(uVar2,(char)(param_2 >> 6)) & 0x3fff | 0x8000) | 0xc0;
    FUN_006fc3d8(param_1,&local_14,2);
    return;
  }
  bVar1 = (byte)(param_2 >> 6);
  if (param_2 >> 0x10 == 0) {
    local_14._0_2_ = (bVar1 & 0xff3f | 0x80) << 8;
    local_14 = CONCAT31(CONCAT12(uVar2,(short)local_14) >> 8,(char)(param_2 >> 0xc)) & 0x3fffff |
               0x8000e0;
    FUN_006fc3d8(param_1,&local_14,3);
    return;
  }
  local_14 = CONCAT31(CONCAT21(CONCAT11(uVar2,bVar1),(char)(param_2 >> 0xc)),(char)(param_2 >> 0x12)
                     ) & 0x3f3f3fff | 0x808080f0;
  FUN_006fc3d8(param_1,&local_14,4);
  return;
}


// ===== 0070e048  FUN_0070e048 =====

void FUN_0070e048(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  core::fmt::write(param_1,&PTR_FUN_00976ef0,param_2,param_3);
  return;
}


// ===== 0070e05c  FUN_0070e05c =====

bool FUN_0070e05c(undefined8 *param_1,uint param_2)

{
  byte bVar1;
  undefined1 uVar2;
  long lVar3;
  ulong uVar4;
  uint local_34;
  undefined1 local_30;
  long local_28;
  
  if (param_2 < 0x80) {
    local_34 = param_2 & 0xff;
    lVar3 = <std::io::stdio::StdoutLock_as_std::io::Write>::write_all(*param_1,&local_34,1);
    if (lVar3 != 0) goto LAB_0070e164;
    lVar3 = 0;
  }
  else {
    uVar2 = (undefined1)param_2;
    if (param_2 < 0x800) {
      local_34 = (CONCAT11(uVar2,(char)(param_2 >> 6)) & 0x3fff | 0x8000) | 0xc0;
      lVar3 = <std::io::stdio::StdoutLock_as_std::io::Write>::write_all(*param_1,&local_34,2);
      if (lVar3 != 0) {
LAB_0070e164:
        uVar4 = param_1[1];
        if (((uVar4 != 0) && (1 < (uVar4 & 3) - 2)) && ((uVar4 & 3) != 0)) {
          local_28 = uVar4 - 1;
          local_30 = 3;
                    /* try { // try from 0070e194 to 0070e19b has its CatchHandler @ 0070e1b8 */
          <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
        }
        param_1[1] = lVar3;
        return lVar3 != 0;
      }
      lVar3 = 0;
    }
    else {
      bVar1 = (byte)(param_2 >> 6);
      if (param_2 >> 0x10 == 0) {
        local_34._0_2_ = (bVar1 & 0xff3f | 0x80) << 8;
        local_34 = CONCAT31(CONCAT12(uVar2,(short)local_34) >> 8,(char)(param_2 >> 0xc)) & 0x3fffff
                   | 0x8000e0;
        lVar3 = <std::io::stdio::StdoutLock_as_std::io::Write>::write_all(*param_1,&local_34,3);
      }
      else {
        local_34 = CONCAT31(CONCAT21(CONCAT11(uVar2,bVar1),(char)(param_2 >> 0xc)),
                            (char)(param_2 >> 0x12)) & 0x3f3f3fff | 0x808080f0;
        lVar3 = <std::io::stdio::StdoutLock_as_std::io::Write>::write_all(*param_1,&local_34,4);
      }
      if (lVar3 != 0) goto LAB_0070e164;
    }
  }
  return lVar3 != 0;
}


// ===== 0070e1c0  FUN_0070e1c0 =====

void FUN_0070e1c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  core::fmt::write(param_1,&PTR_FUN_00976f20,param_2,param_3);
  return;
}


// ===== 0070e1d4  FUN_0070e1d4 =====

bool FUN_0070e1d4(long param_1,uint param_2)

{
  byte bVar1;
  undefined1 uVar2;
  long lVar3;
  ulong uVar4;
  uint local_34;
  undefined1 local_30;
  long local_28;
  
  if (param_2 < 0x80) {
    local_34 = param_2 & 0xff;
    lVar3 = FUN_0070e804(param_1,&local_34,1);
    if (lVar3 != 0) goto LAB_0070e2cc;
    lVar3 = 0;
  }
  else {
    uVar2 = (undefined1)param_2;
    if (param_2 < 0x800) {
      local_34 = (CONCAT11(uVar2,(char)(param_2 >> 6)) & 0x3fff | 0x8000) | 0xc0;
      lVar3 = FUN_0070e804(param_1,&local_34,2);
      if (lVar3 != 0) {
LAB_0070e2cc:
        uVar4 = *(ulong *)(param_1 + 8);
        if (((uVar4 != 0) && (1 < (uVar4 & 3) - 2)) && ((uVar4 & 3) != 0)) {
          local_28 = uVar4 - 1;
          local_30 = 3;
                    /* try { // try from 0070e2fc to 0070e303 has its CatchHandler @ 0070e320 */
          <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
        }
        *(long *)(param_1 + 8) = lVar3;
        return lVar3 != 0;
      }
      lVar3 = 0;
    }
    else {
      bVar1 = (byte)(param_2 >> 6);
      if (param_2 >> 0x10 == 0) {
        local_34._0_2_ = (bVar1 & 0xff3f | 0x80) << 8;
        local_34 = CONCAT31(CONCAT12(uVar2,(short)local_34) >> 8,(char)(param_2 >> 0xc)) & 0x3fffff
                   | 0x8000e0;
        lVar3 = FUN_0070e804(param_1,&local_34,3);
      }
      else {
        local_34 = CONCAT31(CONCAT21(CONCAT11(uVar2,bVar1),(char)(param_2 >> 0xc)),
                            (char)(param_2 >> 0x12)) & 0x3f3f3fff | 0x808080f0;
        lVar3 = FUN_0070e804(param_1,&local_34,4);
      }
      if (lVar3 != 0) goto LAB_0070e2cc;
    }
  }
  return lVar3 != 0;
}


// ===== 0070e328  FUN_0070e328 =====

void FUN_0070e328(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  core::fmt::write(param_1,&PTR_FUN_00976f50,param_2,param_3);
  return;
}


// ===== 0070e33c  FUN_0070e33c =====

bool FUN_0070e33c(long param_1,uint param_2)

{
  byte bVar1;
  undefined1 uVar2;
  long lVar3;
  ulong uVar4;
  uint local_34;
  undefined1 local_30;
  long local_28;
  
  if (param_2 < 0x80) {
    local_34 = param_2 & 0xff;
    lVar3 = FUN_0070e9f0(&local_34,1);
    if (lVar3 != 0) goto LAB_0070e434;
    lVar3 = 0;
  }
  else {
    uVar2 = (undefined1)param_2;
    if (param_2 < 0x800) {
      local_34 = (CONCAT11(uVar2,(char)(param_2 >> 6)) & 0x3fff | 0x8000) | 0xc0;
      lVar3 = FUN_0070e9f0(&local_34,2);
      if (lVar3 != 0) {
LAB_0070e434:
        uVar4 = *(ulong *)(param_1 + 8);
        if (((uVar4 != 0) && (1 < (uVar4 & 3) - 2)) && ((uVar4 & 3) != 0)) {
          local_28 = uVar4 - 1;
          local_30 = 3;
                    /* try { // try from 0070e464 to 0070e46b has its CatchHandler @ 0070e488 */
          <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
        }
        *(long *)(param_1 + 8) = lVar3;
        return lVar3 != 0;
      }
      lVar3 = 0;
    }
    else {
      bVar1 = (byte)(param_2 >> 6);
      if (param_2 >> 0x10 == 0) {
        local_34._0_2_ = (bVar1 & 0xff3f | 0x80) << 8;
        local_34 = CONCAT31(CONCAT12(uVar2,(short)local_34) >> 8,(char)(param_2 >> 0xc)) & 0x3fffff
                   | 0x8000e0;
        lVar3 = FUN_0070e9f0(&local_34,3);
      }
      else {
        local_34 = CONCAT31(CONCAT21(CONCAT11(uVar2,bVar1),(char)(param_2 >> 0xc)),
                            (char)(param_2 >> 0x12)) & 0x3f3f3fff | 0x808080f0;
        lVar3 = FUN_0070e9f0(&local_34,4);
      }
      if (lVar3 != 0) goto LAB_0070e434;
    }
  }
  return lVar3 != 0;
}


// ===== 0070e490  FUN_0070e490 =====

void FUN_0070e490(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  core::fmt::write(param_1,&PTR_FUN_00976f80,param_2,param_3);
  return;
}


// ===== 0070e4a4  FUN_0070e4a4 =====

undefined8 FUN_0070e4a4(void)

{
  return 0;
}


// ===== 0070e4ac  FUN_0070e4ac =====

void FUN_0070e4ac(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0xffffffffffffffff;
  param_1[1] = &DAT_0045af8e;
  param_1[2] = 0x12;
  param_1[3] = param_2;
  param_1[4] = param_3;
  return;
}


// ===== 0070e4cc  FUN_0070e4cc =====

void FUN_0070e4cc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0xffffffffffffffff;
  param_1[1] = &DAT_0045afa0;
  param_1[2] = 0x1a;
  param_1[3] = param_2;
  param_1[4] = param_3;
  return;
}


// ===== 0070e4ec  FUN_0070e4ec =====

ulong FUN_0070e4ec(int param_1,undefined8 param_2)

{
  char *pcVar1;
  size_t sVar2;
  ulong uVar3;
  long local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  char local_c0 [136];
  undefined1 auStack_38 [24];
  
  local_c0[8] = '\0';
  local_c0[9] = '\0';
  local_c0[10] = '\0';
  local_c0[0xb] = '\0';
  local_c0[0xc] = '\0';
  local_c0[0xd] = '\0';
  local_c0[0xe] = '\0';
  local_c0[0xf] = '\0';
  local_c0[0] = '\0';
  local_c0[1] = '\0';
  local_c0[2] = '\0';
  local_c0[3] = '\0';
  local_c0[4] = '\0';
  local_c0[5] = '\0';
  local_c0[6] = '\0';
  local_c0[7] = '\0';
  local_c0[0x18] = '\0';
  local_c0[0x19] = '\0';
  local_c0[0x1a] = '\0';
  local_c0[0x1b] = '\0';
  local_c0[0x1c] = '\0';
  local_c0[0x1d] = '\0';
  local_c0[0x1e] = '\0';
  local_c0[0x1f] = '\0';
  local_c0[0x10] = '\0';
  local_c0[0x11] = '\0';
  local_c0[0x12] = '\0';
  local_c0[0x13] = '\0';
  local_c0[0x14] = '\0';
  local_c0[0x15] = '\0';
  local_c0[0x16] = '\0';
  local_c0[0x17] = '\0';
  local_c0[0x28] = '\0';
  local_c0[0x29] = '\0';
  local_c0[0x2a] = '\0';
  local_c0[0x2b] = '\0';
  local_c0[0x2c] = '\0';
  local_c0[0x2d] = '\0';
  local_c0[0x2e] = '\0';
  local_c0[0x2f] = '\0';
  local_c0[0x20] = '\0';
  local_c0[0x21] = '\0';
  local_c0[0x22] = '\0';
  local_c0[0x23] = '\0';
  local_c0[0x24] = '\0';
  local_c0[0x25] = '\0';
  local_c0[0x26] = '\0';
  local_c0[0x27] = '\0';
  local_c0[0x38] = '\0';
  local_c0[0x39] = '\0';
  local_c0[0x3a] = '\0';
  local_c0[0x3b] = '\0';
  local_c0[0x3c] = '\0';
  local_c0[0x3d] = '\0';
  local_c0[0x3e] = '\0';
  local_c0[0x3f] = '\0';
  local_c0[0x30] = '\0';
  local_c0[0x31] = '\0';
  local_c0[0x32] = '\0';
  local_c0[0x33] = '\0';
  local_c0[0x34] = '\0';
  local_c0[0x35] = '\0';
  local_c0[0x36] = '\0';
  local_c0[0x37] = '\0';
  local_c0[0x48] = '\0';
  local_c0[0x49] = '\0';
  local_c0[0x4a] = '\0';
  local_c0[0x4b] = '\0';
  local_c0[0x4c] = '\0';
  local_c0[0x4d] = '\0';
  local_c0[0x4e] = '\0';
  local_c0[0x4f] = '\0';
  local_c0[0x40] = '\0';
  local_c0[0x41] = '\0';
  local_c0[0x42] = '\0';
  local_c0[0x43] = '\0';
  local_c0[0x44] = '\0';
  local_c0[0x45] = '\0';
  local_c0[0x46] = '\0';
  local_c0[0x47] = '\0';
  local_c0[0x58] = '\0';
  local_c0[0x59] = '\0';
  local_c0[0x5a] = '\0';
  local_c0[0x5b] = '\0';
  local_c0[0x5c] = '\0';
  local_c0[0x5d] = '\0';
  local_c0[0x5e] = '\0';
  local_c0[0x5f] = '\0';
  local_c0[0x50] = '\0';
  local_c0[0x51] = '\0';
  local_c0[0x52] = '\0';
  local_c0[0x53] = '\0';
  local_c0[0x54] = '\0';
  local_c0[0x55] = '\0';
  local_c0[0x56] = '\0';
  local_c0[0x57] = '\0';
  local_c0[0x68] = '\0';
  local_c0[0x69] = '\0';
  local_c0[0x6a] = '\0';
  local_c0[0x6b] = '\0';
  local_c0[0x6c] = '\0';
  local_c0[0x6d] = '\0';
  local_c0[0x6e] = '\0';
  local_c0[0x6f] = '\0';
  local_c0[0x60] = '\0';
  local_c0[0x61] = '\0';
  local_c0[0x62] = '\0';
  local_c0[99] = '\0';
  local_c0[100] = '\0';
  local_c0[0x65] = '\0';
  local_c0[0x66] = '\0';
  local_c0[0x67] = '\0';
  local_c0[0x78] = '\0';
  local_c0[0x79] = '\0';
  local_c0[0x7a] = '\0';
  local_c0[0x7b] = '\0';
  local_c0[0x7c] = '\0';
  local_c0[0x7d] = '\0';
  local_c0[0x7e] = '\0';
  local_c0[0x7f] = '\0';
  local_c0[0x70] = '\0';
  local_c0[0x71] = '\0';
  local_c0[0x72] = '\0';
  local_c0[0x73] = '\0';
  local_c0[0x74] = '\0';
  local_c0[0x75] = '\0';
  local_c0[0x76] = '\0';
  local_c0[0x77] = '\0';
  pcVar1 = strerror_r(param_1,local_c0,0x80);
  if (-1 < (int)pcVar1) {
    sVar2 = strlen(local_c0);
    <alloc::string::alloc::string::String>::from_utf8_lossy(auStack_38,local_c0,sVar2);
    <alloc::string::String_as_core::convert::From<alloc::borrow::Cow<str>>>::from
              (&local_d8,auStack_38);
                    /* try { // try from 0070e54c to 0070e557 has its CatchHandler @ 0070e59c */
    uVar3 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,local_d0,uStack_c8);
    if (local_d8 != 0) {
      uVar3 = uVar3 & 0xffffffff;
      __rustc::__rust_dealloc(local_d0,local_d8,1);
    }
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_0045bcca,0x25,&PTR_s__rustc_48a229ceaefd4985c50990b14_00978138);
}


// ===== 0070e5bc  FUN_0070e5bc =====

void FUN_0070e5bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  core::fmt::write(param_1,&PTR_FUN_009771d0,param_2,param_3);
  return;
}


// ===== 0070e5d0  FUN_0070e5d0 =====

undefined1  [16] FUN_0070e5d0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x28;
  auVar1._0_8_ = "description() is deprecated; use Display";
  return auVar1;
}


// ===== 0070e5e0  FUN_0070e5e0 =====

undefined8 FUN_0070e5e0(void)

{
  return 0;
}


// ===== 0070e5e8  FUN_0070e5e8 =====

void FUN_0070e5e8(void)

{
  return;
}


// ===== 0070e5ec  FUN_0070e5ec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0070e5ec(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_003727d0;
  param_1[1] = _UNK_003727d8;
  *param_1 = uVar1;
  return;
}


// ===== 0070e600  FUN_0070e600 =====

undefined ** FUN_0070e600(undefined8 param_1,long param_2,undefined **param_3)

{
  ulong uVar1;
  undefined *puVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  size_t *psVar14;
  iovec *__iovec;
  
  puVar2 = PTR_PTR_0099f738;
  ppuVar4 = (undefined **)0x0;
  if (param_3 != (undefined **)0x0) {
    lVar8 = (long)param_3 * 0x10;
    uVar11 = lVar8 - 0x10;
    plVar12 = (long *)(param_2 + 8);
    do {
      ppuVar5 = ppuVar4;
      if (*plVar12 != 0) break;
      lVar8 = lVar8 + -0x10;
      ppuVar4 = (undefined **)((long)ppuVar4 + 1);
      ppuVar5 = (undefined **)((uVar11 >> 4) + 1);
      plVar12 = plVar12 + 2;
    } while (lVar8 != 0);
    if (param_3 < ppuVar5) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (ppuVar5,param_3,param_3,&PTR_s__rustc_48a229ceaefd4985c50990b14_009779a0);
    }
    if ((long)param_3 - (long)ppuVar5 == 0) {
      ppuVar4 = (undefined **)0x0;
    }
    else {
      __iovec = (iovec *)(param_2 + (long)ppuVar5 * 0x10);
      uVar11 = (long)param_3 - (long)ppuVar5;
      do {
        while( true ) {
          uVar6 = uVar11;
          if (0x3ff < uVar11) {
            uVar6 = 0x400;
          }
          uVar6 = writev(2,__iovec,(int)uVar6);
          if (uVar6 == 0xffffffffffffffff) break;
          if (uVar6 == 0) {
            return &PTR_DAT_00977df0;
          }
          lVar8 = uVar11 * 0x10;
          uVar9 = 0;
          uVar13 = lVar8 - 0x10;
          psVar14 = &__iovec->iov_len;
          do {
            uVar1 = uVar6 - *psVar14;
            uVar10 = uVar9;
            if (uVar6 < *psVar14) break;
            lVar8 = lVar8 + -0x10;
            uVar9 = uVar9 + 1;
            uVar6 = uVar1;
            uVar10 = (uVar13 >> 4) + 1;
            psVar14 = psVar14 + 2;
          } while (lVar8 != 0);
          if (uVar11 < uVar10) {
                    /* WARNING: Subroutine does not return */
            core::slice::index::slice_index_fail
                      (uVar10,uVar11,uVar11,&PTR_s__rustc_48a229ceaefd4985c50990b14_009779a0);
          }
          if (uVar11 - uVar10 == 0) {
            if (uVar6 == 0) {
              return (undefined **)0x0;
            }
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_fmt
                      (&DAT_0045b552,0x4f,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977970);
          }
          __iovec = __iovec + uVar10;
          if (__iovec->iov_len < uVar6) {
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_fmt
                      (&DAT_0045b579,0x47,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977988);
          }
          __iovec->iov_base = (void *)((long)__iovec->iov_base + uVar6);
          __iovec->iov_len = __iovec->iov_len - uVar6;
          uVar11 = uVar11 - uVar10;
        }
        piVar7 = (int *)__errno();
        iVar3 = *piVar7;
        if (*(undefined ***)puVar2 != &PTR_FUN_00977078) {
          core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
        }
        ppuVar4 = (undefined **)((long)iVar3 << 0x20 | 2);
                    /* try { // try from 0070e73c to 0070e74b has its CatchHandler @ 0070e7e8 */
        lVar8 = core::io::error::os_functions::get_os_functions();
        iVar3 = (**(code **)(lVar8 + 0x10))(iVar3);
      } while (iVar3 != 0);
    }
  }
  return ppuVar4;
}


// ===== 0070e804  FUN_0070e804 =====

undefined ** FUN_0070e804(undefined8 param_1,void *param_2,ulong param_3)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  
  puVar2 = PTR_PTR_0099f738;
  if (param_3 != 0) {
    do {
      uVar4 = write(2,param_2,param_3);
      if (uVar4 == 0xffffffffffffffff) {
        piVar5 = (int *)__errno();
        iVar1 = *piVar5;
        if (*(undefined ***)puVar2 != &PTR_FUN_00977078) {
          core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
        }
                    /* try { // try from 0070e8a8 to 0070e8b7 has its CatchHandler @ 0070e910 */
        lVar6 = core::io::error::os_functions::get_os_functions();
        iVar3 = (**(code **)(lVar6 + 0x10))(iVar1);
        if (iVar3 == 0) {
          return (undefined **)((long)iVar1 << 0x20 | 2);
        }
      }
      else {
        if (uVar4 == 0) {
          return &PTR_DAT_00977df0;
        }
        if (param_3 < uVar4) {
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (uVar4,param_3,param_3,&PTR_s__rustc_48a229ceaefd4985c50990b14_00978ef0);
        }
        param_2 = (void *)((long)param_2 + uVar4);
        param_3 = param_3 - uVar4;
      }
    } while (param_3 != 0);
  }
  return (undefined **)0x0;
}


// ===== 0070e928  FUN_0070e928 =====

ulong FUN_0070e928(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_40;
  ulong local_38;
  undefined1 local_30;
  long local_28;
  
  local_38 = 0;
  local_40 = param_1;
                    /* try { // try from 0070e944 to 0070e953 has its CatchHandler @ 0070e9d8 */
  iVar1 = core::fmt::write(&local_40,&PTR_FUN_00976f50,param_2,param_3);
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
                    /* try { // try from 0070e9bc to 0070e9d3 has its CatchHandler @ 0070e9d8 */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_0045acd3,0xad,&PTR_s__rustc_48a229ceaefd4985c50990b14_00976ea8);
  }
  return local_38;
}


// ===== 0070e9f0  FUN_0070e9f0 =====

undefined ** FUN_0070e9f0(void *param_1,ulong param_2)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  
  puVar2 = PTR_PTR_0099f738;
  if (param_2 != 0) {
    do {
      uVar4 = write(1,param_1,param_2);
      if (uVar4 == 0xffffffffffffffff) {
        piVar5 = (int *)__errno();
        iVar1 = *piVar5;
        if (*(undefined ***)puVar2 != &PTR_FUN_00977078) {
          core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
        }
                    /* try { // try from 0070ea94 to 0070eaa3 has its CatchHandler @ 0070eafc */
        lVar6 = core::io::error::os_functions::get_os_functions();
        iVar3 = (**(code **)(lVar6 + 0x10))(iVar1);
        if (iVar3 == 0) {
          return (undefined **)((long)iVar1 << 0x20 | 2);
        }
      }
      else {
        if (uVar4 == 0) {
          return &PTR_DAT_00977df0;
        }
        if (param_2 < uVar4) {
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (uVar4,param_2,param_2,&PTR_s__rustc_48a229ceaefd4985c50990b14_00978ef0);
        }
        param_1 = (void *)((long)param_1 + uVar4);
        param_2 = param_2 - uVar4;
      }
    } while (param_2 != 0);
  }
  return (undefined **)0x0;
}


// ===== 0070eb14  FUN_0070eb14 =====

undefined1  [16] FUN_0070eb14(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x28;
  auVar1._0_8_ = "description() is deprecated; use Display";
  return auVar1;
}


// ===== 0070eb24  FUN_0070eb24 =====

undefined8 FUN_0070eb24(void)

{
  return 0;
}


// ===== 0070eb2c  FUN_0070eb2c =====

void FUN_0070eb2c(void)

{
  return;
}


// ===== 0070eb30  FUN_0070eb30 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0070eb30(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_00371ed0;
  param_1[1] = _UNK_00371ed8;
  *param_1 = uVar1;
  return;
}


// ===== 0070eb44  FUN_0070eb44 =====

void FUN_0070eb44(undefined8 param_1,undefined8 param_2)

{
  std::panicking::default_hook(param_2);
  return;
}


// ===== 0070eb4c  FUN_0070eb4c =====

void FUN_0070eb4c(undefined8 param_1,undefined8 param_2)

{
  std::panicking::default_hook(param_2);
  return;
}


// ===== 0070eb54  FUN_0070eb54 =====

void FUN_0070eb54(undefined8 param_1)

{
  FUN_006f4bc0(param_1);
  return;
}


// ===== 0070eb5c  FUN_0070eb5c =====

void FUN_0070eb5c(undefined8 *param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  int *piVar2;
  __dev_t local_a0;
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
  long lStack_28;
  
  _Stack_98 = 0;
  local_a0 = 0;
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
  lStack_28 = 0;
  lStack_30 = 0;
  iVar1 = stat(param_3,(stat *)&local_a0);
  if (iVar1 != -1) {
    param_1[10] = _Stack_58;
    param_1[9] = local_60;
    param_1[0xc] = _Stack_48;
    param_1[0xb] = lStack_50;
    param_1[0xe] = _Stack_38;
    param_1[0xd] = local_40;
    param_1[0x10] = lStack_28;
    param_1[0xf] = lStack_30;
    param_1[2] = _Stack_98;
    param_1[1] = local_a0;
    param_1[4] = uStack_88;
    param_1[3] = _Stack_90;
    param_1[6] = _Stack_78;
    param_1[5] = local_80;
    param_1[8] = _Stack_68;
    param_1[7] = _Stack_70;
    *param_1 = 0;
    return;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  *param_1 = 1;
  param_1[1] = (long)iVar1 << 0x20 | 2;
  return;
}


// ===== 0070ec30  FUN_0070ec30 =====

void FUN_0070ec30(undefined8 *param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  int *piVar2;
  __dev_t local_a0;
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
  long lStack_28;
  
  _Stack_98 = 0;
  local_a0 = 0;
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
  lStack_28 = 0;
  lStack_30 = 0;
  iVar1 = lstat(param_3,(stat *)&local_a0);
  if (iVar1 != -1) {
    param_1[10] = _Stack_58;
    param_1[9] = local_60;
    param_1[0xc] = _Stack_48;
    param_1[0xb] = lStack_50;
    param_1[0xe] = _Stack_38;
    param_1[0xd] = local_40;
    param_1[0x10] = lStack_28;
    param_1[0xf] = lStack_30;
    param_1[2] = _Stack_98;
    param_1[1] = local_a0;
    param_1[4] = uStack_88;
    param_1[3] = _Stack_90;
    param_1[6] = _Stack_78;
    param_1[5] = local_80;
    param_1[8] = _Stack_68;
    param_1[7] = _Stack_70;
    *param_1 = 0;
    return;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_0099f738 != &PTR_FUN_00977078) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  }
  *param_1 = 1;
  param_1[1] = (long)iVar1 << 0x20 | 2;
  return;
}


// ===== 0070ed04  FUN_0070ed04 =====

ulong FUN_0070ed04(undefined8 param_1,char *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = rmdir(param_2);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_0099f738 == &PTR_FUN_00977078) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 0070ed88  FUN_0070ed88 =====

ulong FUN_0070ed88(undefined8 param_1,char *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = unlink(param_2);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_0099f738 == &PTR_FUN_00977078) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 0070ee0c  FUN_0070ee0c =====

void FUN_0070ee0c(undefined8 param_1)

{
  FUN_006f5284(param_1);
  return;
}


// ===== 0070ee14  FUN_0070ee14 =====

void FUN_0070ee14(undefined8 param_1,undefined8 param_2)

{
  FUN_006f6f60(param_2);
  return;
}


// ===== 0070ee1c  rust_eh_personality =====

/* WARNING: Type propagation algorithm not settling */

undefined4
rust_eh_personality(int param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  bool bVar5;
  byte *pbVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  ulong uVar14;
  byte *pbVar15;
  byte *unaff_x22;
  byte *pbVar16;
  ulong uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 local_88;
  int local_7c;
  undefined8 *local_78;
  undefined8 *puStack_70;
  byte *local_68;
  
  if (param_1 != 1) {
    return 3;
  }
  local_88 = param_5;
  pbVar6 = (byte *)FUN_00751df4(param_5);
  local_7c = 0;
  lVar7 = FUN_00755bac(param_5,&local_7c);
  bVar5 = local_7c == 0;
  pbVar8 = (byte *)FUN_00751e28(param_5);
  local_78 = &local_88;
  puStack_70 = local_78;
  if (pbVar6 == (byte *)0x0) {
    uVar11 = 0;
    pbVar8 = unaff_x22;
    goto joined_r0x0070f07c;
  }
  pbVar16 = pbVar6 + 1;
  bVar2 = *pbVar6;
  pbVar9 = pbVar8;
  local_68 = pbVar16;
  if (bVar2 != 0xff) {
    bVar3 = bVar2 >> 4 & 7;
    if (bVar3 < 3) {
      if (bVar3 == 0) goto LAB_0070f11c;
      if (bVar3 != 1) {
        if (bVar3 != 2) {
          return 3;
        }
        lVar10 = -0x18;
        puVar13 = &UNK_00977f00;
        goto LAB_0070f0d0;
      }
      auVar20 = FUN_006f6ddc(&local_68,bVar2 & 0xf);
      lVar10 = auVar20._8_8_;
      pbVar9 = pbVar16;
joined_r0x0070f104:
      if ((auVar20 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
        return 3;
      }
      pbVar9 = pbVar9 + lVar10;
    }
    else {
      if (bVar3 == 3) {
        lVar10 = -0x10;
        puVar13 = &UNK_00977f30;
LAB_0070f0d0:
                    /* try { // try from 0070f0d4 to 0070f0d7 has its CatchHandler @ 0070f190 */
        pbVar9 = (byte *)(**(code **)(puVar13 + 0x28))(&stack0xffffffffffffffa0 + lVar10);
        if (pbVar9 != (byte *)0x0) goto LAB_0070f0e0;
      }
      else {
        if (bVar3 != 5) {
          if (bVar3 != 4) {
            return 3;
          }
          if (pbVar8 == (byte *)0x0) {
            return 3;
          }
LAB_0070f0e0:
          auVar20 = FUN_006f6ddc(&local_68,bVar2 & 0xf);
          lVar10 = auVar20._8_8_;
          goto joined_r0x0070f104;
        }
        pbVar16 = (byte *)((ulong)(pbVar6 + 8) & 0xfffffffffffffff8);
      }
LAB_0070f11c:
      if ((bVar2 & 0xf) != 0) {
        return 3;
      }
      local_68 = pbVar16 + 8;
      pbVar9 = *(byte **)pbVar16;
    }
    if ((char)bVar2 < '\0') {
      pbVar9 = *(byte **)pbVar9;
    }
  }
  pbVar16 = local_68 + 1;
  pbVar6 = pbVar16;
  if (*local_68 != 0xff) {
    do {
      pbVar16 = pbVar6 + 1;
      bVar2 = *pbVar6;
      pbVar6 = pbVar16;
    } while ((char)bVar2 < '\0');
  }
  pbVar15 = (byte *)(lVar7 - (ulong)bVar5);
  bVar2 = *pbVar16;
  uVar17 = 0;
  uVar11 = 0;
  pbVar6 = pbVar16 + 1;
  do {
    pbVar16 = pbVar6 + 1;
    bVar3 = *pbVar6;
    uVar14 = uVar11 & 0x3f;
    uVar11 = uVar11 + 7;
    uVar17 = ((ulong)bVar3 & 0x7f) << uVar14 | uVar17;
    pbVar6 = pbVar16;
  } while ((char)bVar3 < '\0');
  uVar11 = 4;
  local_68 = pbVar16;
  do {
    if (pbVar16 + uVar17 <= local_68) goto joined_r0x0070f07c;
    auVar20 = FUN_006f6ddc(&local_68,bVar2);
    if ((auVar20 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
      return 3;
    }
    auVar18 = FUN_006f6ddc(&local_68,bVar2);
    if ((auVar18 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
      return 3;
    }
    auVar19 = FUN_006f6ddc(&local_68,bVar2);
    if ((auVar19 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
      return 3;
    }
    uVar12 = 0;
    uVar14 = 0;
    pbVar6 = local_68;
    do {
      local_68 = pbVar6 + 1;
      bVar3 = *pbVar6;
      uVar4 = uVar14 & 0x3f;
      uVar14 = uVar14 + 7;
      uVar12 = ((ulong)bVar3 & 0x7f) << uVar4 | uVar12;
      pbVar6 = local_68;
    } while ((char)bVar3 < '\0');
    if (pbVar15 < pbVar8 + auVar20._8_8_) goto joined_r0x0070f07c;
  } while (pbVar8 + auVar20._8_8_ + auVar18._8_8_ <= pbVar15);
  if (auVar19._8_8_ == 0) {
    uVar11 = 0;
  }
  else {
    pbVar8 = pbVar9 + auVar19._8_8_;
    if (uVar12 == 0) {
      uVar11 = 1;
    }
    else {
      uVar14 = 0;
      uVar11 = 0;
      pbVar6 = pbVar16 + uVar12 + uVar17 + -1;
      do {
        bVar2 = *pbVar6;
        uVar17 = uVar11 & 0x3f;
        uVar1 = (int)uVar11 + 7;
        uVar11 = (ulong)uVar1;
        uVar14 = ((ulong)bVar2 & 0x7f) << uVar17 | uVar14;
        pbVar6 = pbVar6 + 1;
      } while ((char)bVar2 < '\0');
      uVar17 = 0;
      if (0x3f < bVar2 && uVar1 < 0x40) {
        uVar17 = -1L << (uVar11 & 0x3f);
      }
      uVar11 = 2;
      if ((long)(uVar14 | uVar17) < 1) {
        uVar11 = 3;
      }
      if ((uVar14 | uVar17) == 0) {
        uVar11 = 1;
      }
    }
  }
joined_r0x0070f07c:
  if ((param_2 & 1) != 0) {
    return (&DAT_0045c904)[uVar11];
  }
  if (uVar11 < 3) {
    if (1 < uVar11 - 1) {
      return 8;
    }
  }
  else {
    if (uVar11 != 3) {
      return 2;
    }
    if ((param_2 >> 3 & 1) != 0) {
      return 8;
    }
  }
  thunk_FUN_00751fe4(param_5,0,param_4);
  thunk_FUN_00751fe4(param_5,1,0);
  FUN_00751eb0(param_5,pbVar8);
  return 7;
}


// ===== 0070f194  FUN_0070f194 =====

void FUN_0070f194(void)

{
  FUN_006cecec();
  return;
}


// ===== 0070f1a0  FUN_0070f1a0 =====

void FUN_0070f1a0(void)

{
  FUN_006e592c();
  return;
}


// ===== 0070f1b0  FUN_0070f1b0 =====

void FUN_0070f1b0(void)

{
  FUN_006e592c();
  return;
}


// ===== 0070f1c0  FUN_0070f1c0 =====

void FUN_0070f1c0(long param_1,undefined8 param_2)

{
  __rustc::__rust_dealloc(param_2,param_1 << 3,8);
  return;
}


// ===== 0070f1cc  FUN_0070f1cc =====

void FUN_0070f1cc(void)

{
  FUN_006e592c();
  return;
}


// ===== 0070f1dc  FUN_0070f1dc =====

void FUN_0070f1dc(void)

{
  FUN_006e592c();
  return;
}


// ===== 0070f1ec  FUN_0070f1ec =====

void FUN_0070f1ec(void)

{
  FUN_006e592c();
  return;
}


// ===== 0070f1fc  FUN_0070f1fc =====

void FUN_0070f1fc(void)

{
  undefined8 in_stack_000001e8;
  undefined8 in_stack_000001f0;
  
  __rustc::__rust_dealloc(in_stack_000001e8,in_stack_000001f0,8);
  return;
}


// ===== 0070f208  FUN_0070f208 =====

void FUN_0070f208(undefined8 param_1,undefined8 param_2)

{
  __rustc::__rust_dealloc(param_1,param_2,1);
  return;
}


// ===== 0070f210  FUN_0070f210 =====

void FUN_0070f210(void)

{
  return;
}


// ===== 0070f21c  FUN_0070f21c =====

void FUN_0070f21c(void)

{
  return;
}


// ===== 0070f22c  FUN_0070f22c =====

void FUN_0070f22c(void)

{
  return;
}


// ===== 0070f23c  FUN_0070f23c =====

void FUN_0070f23c(undefined8 param_1,undefined8 param_2)

{
  __rustc::__rust_dealloc(param_1,param_2,8);
  return;
}


// ===== 0070f244  FUN_0070f244 =====

void FUN_0070f244(long param_1,undefined8 param_2)

{
  long in_x9;
  
  __rustc::__rust_dealloc(param_2,param_1 * in_x9,8);
  return;
}


// ===== 0070f250  FUN_0070f250 =====

void FUN_0070f250(void)

{
  __rustc::__rust_dealloc();
  return;
}


// ===== 0070f260  FUN_0070f260 =====

void FUN_0070f260(void)

{
  FUN_006c3fbc();
  return;
}


// ===== 0070f26c  FUN_0070f26c =====

void FUN_0070f26c(void)

{
  FUN_006e592c();
  return;
}


// ===== 0070f27c  FUN_0070f27c =====

void FUN_0070f27c(long param_1,undefined8 param_2)

{
  __rustc::__rust_dealloc(param_2,param_1 << 2,2);
  return;
}


// ===== 0070f288  FUN_0070f288 =====

void FUN_0070f288(void)

{
  FUN_006e8254(&stack0x000004c0,&stack0x00000490);
  return;
}


// ===== 0070f294  FUN_0070f294 =====

int FUN_0070f294(void)

{
  int iVar1;
  void *in_stack_00000228;
  size_t in_stack_00000230;
  
  iVar1 = munmap(in_stack_00000228,in_stack_00000230);
  return iVar1;
}


// ===== 0070f2a0  FUN_0070f2a0 =====

void FUN_0070f2a0(void)

{
  FUN_006e592c();
  return;
}


// ===== 0070f2a8  FUN_0070f2a8 =====

undefined1 * FUN_0070f2a8(void)

{
  return &stack0x00000e00;
}


// ===== 0070f2b4  FUN_0070f2b4 =====

void FUN_0070f2b4(long param_1)

{
  <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(param_1 + 8);
  return;
}


// ===== 0070f2bc  FUN_0070f2bc =====

void FUN_0070f2bc(void)

{
                    /* WARNING: Subroutine does not return */
  core::panicking::assert_failed_inner();
}


// ===== 0070f2d8  FUN_0070f2d8 =====

void FUN_0070f2d8(void)

{
  return;
}


// ===== 0070f2e4  FUN_0070f2e4 =====

void FUN_0070f2e4(void)

{
  __rustc::__rust_alloc(0x128,8);
  return;
}


// ===== 0070f2f0  FUN_0070f2f0 =====

void FUN_0070f2f0(void)

{
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x128);
}


// ===== 0070f2fc  FUN_0070f2fc =====

void FUN_0070f2fc(void)

{
  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<addr2line::function::InlinedFunctionAddress>>::
  grow_one(&stack0x000003b0);
  return;
}


// ===== 0070f304  FUN_0070f304 =====

void FUN_0070f304(void)

{
  long unaff_x29;
  
  FUN_0070e928(unaff_x29 + 0x1f,&DAT_00368e80,&stack0x00000010);
  return;
}


// ===== 0070f318  FUN_0070f318 =====

void FUN_0070f318(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00751c7c();
}


// ===== 0070f320  FUN_0070f320 =====

void FUN_0070f320(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack0000000000000000;
  
  uStack0000000000000000 = param_1;
  <std::sys::sync::once::futex::[0]::std::sys::sync::once::futex::Once>::call
            (param_2,1,&stack0x00000010);
  return;
}


// ===== 0070f334  FUN_0070f334 =====

void FUN_0070f334(long param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  
  __rustc::__rust_realloc(param_2,param_3,8,unaff_x19 * param_1);
  return;
}


// ===== 0070f344  FUN_0070f344 =====

void FUN_0070f344(void)

{
  FUN_006e592c();
  return;
}


// ===== 0070f34c  FUN_0070f34c =====

void FUN_0070f34c(void *param_1)

{
  memcpy(param_1,&stack0x00000240,0x128);
  return;
}


// ===== 0070f35c  FUN_0070f35c =====

void FUN_0070f35c(void)

{
  FUN_006e592c();
  return;
}


// ===== 0070f364  FUN_0070f364 =====

void FUN_0070f364(void)

{
  memcpy(&stack0x00000e00,&stack0x00000240,0x248);
  return;
}


// ===== 0070f374  FUN_0070f374 =====

void FUN_0070f374(void)

{
  FUN_006e5200(&DAT_009a6478);
  return;
}


// ===== 0070f384  FUN_0070f384 =====

void FUN_0070f384(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x29;
  undefined8 uStack0000000000000010;
  
  uStack0000000000000010 = param_1;
  FUN_0070e928(unaff_x29 + 0x1f,param_3,&stack0x00000010);
  return;
}


// ===== 0070f394  FUN_0070f394 =====

void FUN_0070f394(void)

{
  void *unaff_x20;
  
  memcpy(unaff_x20,&stack0x00000e00,0x248);
  return;
}


// ===== 0070f3a4  FUN_0070f3a4 =====

void FUN_0070f3a4(void)

{
  memcpy(&stack0x000004c0,&stack0x000006f0,0x1c0);
  return;
}


// ===== 0070f3b4  FUN_0070f3b4 =====

void FUN_0070f3b4(void)

{
  return;
}


// ===== 0070f3d0  FUN_0070f3d0 =====

void FUN_0070f3d0(void)

{
  return;
}


// ===== 0070f3e8  FUN_0070f3e8 =====

void FUN_0070f3e8(void)

{
  return;
}


// ===== 0070f400  FUN_0070f400 =====

void FUN_0070f400(void)

{
  return;
}


// ===== 0070f40c  FUN_0070f40c =====

void FUN_0070f40c(void)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001c0;
  long in_stack_000011f0;
  
  puVar1 = (undefined8 *)(in_stack_000011f0 + unaff_x20 * 0x10);
  *puVar1 = in_stack_000001b0;
  puVar1[1] = in_stack_000001c0;
  return;
}


// ===== 0070f424  FUN_0070f424 =====

void FUN_0070f424(void)

{
  return;
}


// ===== 0070f43c  FUN_0070f43c =====

void FUN_0070f43c(void)

{
  FUN_006c3fbc();
  return;
}


// ===== 0070f448  FUN_0070f448 =====

void FUN_0070f448(void)

{
  FUN_006c33b8(&stack0x00000490);
  return;
}


// ===== 0070f450  FUN_0070f450 =====

void FUN_0070f450(void)

{
  FUN_006c403c(PTR_HOOK_0099f7c0);
  return;
}


// ===== 0070f45c  FUN_0070f45c =====

void FUN_0070f45c(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_006bc2d8(param_3 + 0x1c8,param_2,param_3,param_3 + 0x60);
  return;
}


// ===== 0070f468  FUN_0070f468 =====

void FUN_0070f468(void)

{
  FUN_006e592c();
  return;
}


// ===== 0070f470  FUN_0070f470 =====

void FUN_0070f470(void)

{
  FUN_006e592c();
  return;
}


// ===== 0070f478  FUN_0070f478 =====

void FUN_0070f478(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 in_stack_00000220;
  
                    /* WARNING: Could not recover jumptable at 0x0070f480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(in_stack_00000220,&stack0x00000240);
  return;
}


// ===== 0070f484  FUN_0070f484 =====

void FUN_0070f484(long param_1)

{
  <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(param_1 + 8);
  return;
}


// ===== 0070f490  FUN_0070f490 =====

void FUN_0070f490(void)

{
  FUN_006c2770(&stack0x000002a0);
  return;
}


// ===== 0070f49c  FUN_0070f49c =====

void FUN_0070f49c(void)

{
  FUN_006c4dc4(&stack0x000011d0);
  return;
}


// ===== 0070f4a8  FUN_0070f4a8 =====

void FUN_0070f4a8(void)

{
  FUN_006c4dc4(&stack0x00001148);
  return;
}


// ===== 0070f4b4  FUN_0070f4b4 =====

void FUN_0070f4b4(void)

{
  <alloc[cc0d62b833a55794]::sync::Arc<gimli[d400ddce60e1bc02]::read::dwarf::Dwarf<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>>>
  ::drop_slow(&stack0x00001110);
  return;
}


// ===== 0070f4c0  FUN_0070f4c0 =====

void FUN_0070f4c0(void)

{
  <alloc[cc0d62b833a55794]::sync::Arc<gimli[d400ddce60e1bc02]::read::dwarf::Dwarf<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>>>
  ::drop_slow(&stack0x000011c0);
  return;
}


// ===== 0070f4cc  FUN_0070f4cc =====

void FUN_0070f4cc(void)

{
  FUN_006c4dc4(&stack0x000010e0);
  return;
}


// ===== 0070f4d8  FUN_0070f4d8 =====

void FUN_0070f4d8(void)

{
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error();
}


// ===== 0070f4e0  FUN_0070f4e0 =====

void FUN_0070f4e0(void)

{
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__rustc_48a229ceaefd4985c50990b14_009774c8);
}


// ===== 0070f4ec  FUN_0070f4ec =====

void FUN_0070f4ec(void)

{
  return;
}


// ===== 0070f4f8  FUN_0070f4f8 =====

void FUN_0070f4f8(void)

{
  return;
}


// ===== 0070f504  FUN_0070f504 =====

void FUN_0070f504(void)

{
  return;
}


// ===== 0070f518  FUN_0070f518 =====

void FUN_0070f518(void)

{
  return;
}


// ===== 0070f524  FUN_0070f524 =====

void FUN_0070f524(void)

{
  return;
}


