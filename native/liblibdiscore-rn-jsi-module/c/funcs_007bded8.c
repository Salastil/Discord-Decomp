// ===== 007bded8  FUN_007bded8 =====

void FUN_007bded8(long *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  code *pcVar2;
  
  if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x007bdf00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x20))(param_1 + 3,param_1[1],param_1[2]);
    return;
  }
  __ptr = (void *)param_1[1];
  puVar1 = (undefined8 *)param_1[2];
  pcVar2 = (code *)*puVar1;
  if (pcVar2 != (code *)0x0) {
                    /* try { // try from 007bdf10 to 007bdf17 has its CatchHandler @ 007bdf40 */
    (*pcVar2)(__ptr);
  }
  if (puVar1[1] != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 007bdf64  FUN_007bdf64 =====

void FUN_007bdf64(void *param_1,undefined8 *param_2)

{
  if ((code *)*param_2 != (code *)0x0) {
                    /* try { // try from 007bdf84 to 007bdf8b has its CatchHandler @ 007bdfbc */
    (*(code *)*param_2)(param_1);
  }
  if (param_2[1] != 0) {
    free(param_1);
    return;
  }
  return;
}


// ===== 007bdfdc  FUN_007bdfdc =====

void FUN_007bdfdc(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 007bdfec to 007bdfef has its CatchHandler @ 007be078 */
  <tokio::runtime::time::entry::TimerEntry_as_core::ops::drop::Drop>::drop();
  if (*param_1 == 0) {
    plVar3 = (long *)param_1[1];
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>>::
      drop_slow();
    }
  }
  else {
    plVar3 = (long *)param_1[1];
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 007be018 to 007be03f has its CatchHandler @ 007be070 */
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>>
      ::drop_slow();
    }
  }
  if ((param_1[4] != 0) && (param_1[9] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x007be060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[9] + 0x18))(param_1[10]);
    return;
  }
  return;
}


// ===== 007be0ac  FUN_007be0ac =====

void FUN_007be0ac(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (*param_1 == 0) {
    plVar3 = (long *)param_1[1];
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>>::
      drop_slow();
      return;
    }
  }
  else {
    plVar3 = (long *)param_1[1];
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>>
      ::drop_slow();
      return;
    }
  }
  return;
}


// ===== 007be0f8  FUN_007be0f8 =====

void FUN_007be0f8(long param_1)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    free(*(void **)(param_1 + 0x48));
  }
                    /* try { // try from 007be128 to 007be12f has its CatchHandler @ 007be1bc */
  FUN_0078aa8c(param_1 + 0x18);
  if (*(long *)(param_1 + 0x18) != 0) {
    free(*(void **)(param_1 + 0x20));
  }
  __ptr = *(void **)(param_1 + 0x38);
  lVar2 = *(long *)(param_1 + 0x40) + 1;
  lVar1 = (long)__ptr + 0x38;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 007be170 to 007be173 has its CatchHandler @ 007be1ec */
    (**(code **)(*(long *)(lVar1 + -0x18) + 0x20))
              (lVar1,*(undefined8 *)(lVar1 + -0x10),*(undefined8 *)(lVar1 + -8));
    lVar1 = lVar1 + 0x48;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 007be240  FUN_007be240 =====

void FUN_007be240(undefined8 *param_1)

{
  code *pcVar1;
  void *__ptr;
  undefined8 *puVar2;
  
  __ptr = (void *)*param_1;
  if (__ptr != (void *)0x0) {
    puVar2 = (undefined8 *)param_1[1];
    pcVar1 = (code *)*puVar2;
    if (pcVar1 != (code *)0x0) {
                    /* try { // try from 007be268 to 007be26f has its CatchHandler @ 007be2b4 */
      (*pcVar1)(__ptr);
    }
    if (puVar2[1] != 0) {
      free(__ptr);
    }
  }
  if (*(char *)((long)param_1 + 0x29) == '\x02') {
    return;
  }
  FUN_007be2f0(param_1 + 2);
  return;
}


// ===== 007be2f0  FUN_007be2f0 =====

void FUN_007be2f0(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  void *__ptr;
  undefined8 *puVar6;
  
  __ptr = (void *)*param_1;
  if (__ptr != (void *)0x0) {
    puVar6 = (undefined8 *)param_1[1];
    pcVar3 = (code *)*puVar6;
    if (pcVar3 != (code *)0x0) {
                    /* try { // try from 007be318 to 007be31f has its CatchHandler @ 007be374 */
      (*pcVar3)(__ptr);
    }
    if (puVar6[1] != 0) {
      free(__ptr);
    }
  }
  plVar4 = (long *)param_1[2];
  do {
    lVar5 = *plVar4;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = lVar5 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar5 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<core::sync::atomic::Atomic<bool>>>::drop_slow(param_1 + 2);
    return;
  }
  return;
}


// ===== 007be3c0  FUN_007be3c0 =====

void FUN_007be3c0(long param_1)

{
                    /* try { // try from 007be3d0 to 007be3d3 has its CatchHandler @ 007be3f4 */
  FUN_007dfadc();
  if (*(int *)(param_1 + 0x18) != -1) {
    close(*(int *)(param_1 + 0x18));
  }
  FUN_007be420(param_1);
  return;
}


// ===== 007be420  FUN_007be420 =====

void FUN_007be420(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 007be430 to 007be433 has its CatchHandler @ 007be4c4 */
  <tokio::runtime::io::registration::Registration_as_core::ops::drop::Drop>::drop();
  if (*param_1 == 0) {
    plVar3 = (long *)param_1[1];
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>>::
      drop_slow();
    }
  }
  else {
    plVar3 = (long *)param_1[1];
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 007be45c to 007be483 has its CatchHandler @ 007be4bc */
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>>
      ::drop_slow();
    }
  }
  plVar3 = (long *)param_1[2];
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::io::scheduled_io::ScheduledIo>>::drop_slow
              (param_1 + 2);
    return;
  }
  return;
}


// ===== 007be500  FUN_007be500 =====

void FUN_007be500(long param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  
  if (*(long *)(param_1 + 0x20) != -1) {
                    /* try { // try from 007be524 to 007be527 has its CatchHandler @ 007be6e0 */
    FUN_007be0f8();
  }
                    /* try { // try from 007be52c to 007be52f has its CatchHandler @ 007be6f4 */
  FUN_007bc55c(*(undefined8 *)(param_1 + 0x120));
  if (((*(byte *)(param_1 + 0x108) != 0xff) && (9 < *(byte *)(param_1 + 0x108))) &&
     (*(long *)(param_1 + 0x118) != 0)) {
    free(*(void **)(param_1 + 0x110));
  }
  plVar5 = *(long **)(param_1 + 0x128);
  if (plVar5 != (long *)0x0) {
    do {
      lVar7 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 007be578 to 007be57f has its CatchHandler @ 007be69c */
      <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
      drop_slow(param_1 + 0x128);
    }
  }
  if ((*(long *)(param_1 + 0x80) == 1) || (*(long *)(param_1 + 0x80) == 2)) {
    if ((*(ulong *)(param_1 + 0x88) < 2) && (*(long *)(param_1 + 0xb8) != 0)) {
                    /* try { // try from 007be5ac to 007be5af has its CatchHandler @ 007be6a4 */
      <bytes::bytes_mut::BytesMut_as_core::ops::drop::Drop>::drop();
    }
  }
  if ((-0x7ffffffffffffffd < *(long *)(param_1 + 0xe8)) && (1 < *(long *)(param_1 + 0xe8) + 2U)) {
    lVar7 = *(long *)(param_1 + 0xf8) + 1;
    lVar3 = *(long *)(param_1 + 0xf0) + 0x18;
    while (lVar7 = lVar7 + -1, lVar7 != 0) {
                    /* try { // try from 007be5f4 to 007be5f7 has its CatchHandler @ 007be73c */
      (**(code **)(*(long *)(lVar3 + -0x18) + 0x20))
                (lVar3,*(undefined8 *)(lVar3 + -0x10),*(undefined8 *)(lVar3 + -8));
      lVar3 = lVar3 + 0x28;
    }
    if (*(long *)(param_1 + 0xe8) != 0) {
      free(*(void **)(param_1 + 0xf0));
    }
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar5 = (long *)(param_1 + 0x18);
    lVar7 = *plVar5;
    if (lVar7 != 0) {
                    /* try { // try from 007be62c to 007be64f has its CatchHandler @ 007be6ac */
      uVar4 = <tokio::sync::oneshot::[9]::tokio::sync::oneshot::State>::set_complete(lVar7 + 0x30);
      if ((uVar4 & 5) == 1) {
        (**(code **)(*(long *)(lVar7 + 0x20) + 0x10))(*(undefined8 *)(lVar7 + 0x28));
      }
      plVar6 = (long *)*plVar5;
      if (plVar6 != (long *)0x0) {
        do {
          lVar7 = *plVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 + -1 == 0) {
          DataMemoryBarrier(2,1);
          <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<hyper::upgrade::Upgraded,{backref_38}::error::Error>>>>
          ::drop_slow(plVar5);
          return;
        }
      }
    }
  }
  return;
}


// ===== 007be79c  FUN_007be79c =====

void FUN_007be79c(long *param_1)

{
  if ((*param_1 == 1) || (*param_1 == 2)) {
    if (((ulong)param_1[1] < 2) && (param_1[7] != 0)) {
      <bytes::bytes_mut::BytesMut_as_core::ops::drop::Drop>::drop();
      return;
    }
  }
  return;
}


// ===== 007be7cc  FUN_007be7cc =====

void FUN_007be7cc(long *param_1)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  if ((-0x7ffffffffffffffd < lVar2) && (1 < lVar2 + 2U)) {
    __ptr = (void *)param_1[1];
    lVar3 = param_1[2] + 1;
    lVar1 = (long)__ptr + 0x18;
    while (lVar3 = lVar3 + -1, lVar3 != 0) {
                    /* try { // try from 007be838 to 007be83b has its CatchHandler @ 007be86c */
      (**(code **)(*(long *)(lVar1 + -0x18) + 0x20))
                (lVar1,*(undefined8 *)(lVar1 + -0x10),*(undefined8 *)(lVar1 + -8));
      lVar1 = lVar1 + 0x28;
    }
    if (lVar2 != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 007be8bc  FUN_007be8bc =====

void FUN_007be8bc(undefined8 *param_1)

{
  code *pcVar1;
  void *__ptr;
  undefined8 *puVar2;
  
  if (param_1[1] != 0) {
    free((void *)*param_1);
  }
  __ptr = (void *)param_1[2];
  if (__ptr != (void *)0x0) {
    puVar2 = (undefined8 *)param_1[3];
    pcVar1 = (code *)*puVar2;
    if (pcVar1 != (code *)0x0) {
                    /* try { // try from 007be8f4 to 007be8fb has its CatchHandler @ 007be924 */
      (*pcVar1)(__ptr);
    }
    if (puVar2[1] != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 007be948  FUN_007be948 =====

void FUN_007be948(byte *param_1)

{
  long *__ptr;
  
  if (1 < *param_1) {
    __ptr = *(long **)(param_1 + 8);
                    /* try { // try from 007be978 to 007be97f has its CatchHandler @ 007be9b0 */
    (**(code **)(*__ptr + 0x20))(__ptr + 3,__ptr[1],__ptr[2]);
    free(__ptr);
  }
                    /* WARNING: Could not recover jumptable at 0x007be9ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x20))
            (param_1 + 0x28,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  return;
}


// ===== 007be9e4  FUN_007be9e4 =====

ulong FUN_007be9e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_40;
  ulong local_38;
  undefined1 local_30;
  long local_28;
  
  local_38 = 0;
  local_40 = param_1;
                    /* try { // try from 007bea00 to 007bea0f has its CatchHandler @ 007bea94 */
  iVar1 = core::fmt::write(&local_40,&PTR_FUN_00addfc0,param_2,param_3);
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
                    /* try { // try from 007bea78 to 007bea8f has its CatchHandler @ 007bea94 */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              ("a formatting trait implementation returned an error when the underlying stream did not"
               ,0xad,&PTR_s__nix_store_8006w282fgsx3273c878b_00addff0);
  }
  return local_38;
}


// ===== 007beaac  FUN_007beaac =====

ulong FUN_007beaac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_40;
  ulong local_38;
  undefined1 local_30;
  long local_28;
  
  local_38 = 0;
  local_40 = param_1;
                    /* try { // try from 007beac8 to 007bead7 has its CatchHandler @ 007beb5c */
  iVar1 = core::fmt::write(&local_40,&PTR_FUN_00ade008,param_2,param_3);
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
                    /* try { // try from 007beb40 to 007beb57 has its CatchHandler @ 007beb5c */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              ("a formatting trait implementation returned an error when the underlying stream did not"
               ,0xad,&PTR_s__nix_store_8006w282fgsx3273c878b_00addff0);
  }
  return local_38;
}


// ===== 007beb74  FUN_007beb74 =====

void FUN_007beb74(void *param_1)

{
  pthread_key_t __key;
  int iVar1;
  
  __key = *(pthread_key_t *)((long)param_1 + 8);
  pthread_setspecific(__key,&DAT_00000001);
  free(param_1);
  iVar1 = pthread_setspecific(__key,(void *)0x0);
                    /* try { // try from 007beba8 to 007bebab has its CatchHandler @ 007bebb8 */
  std::sys::thread_local::guard::key::enable(iVar1);
  return;
}


// ===== 007bebc4  FUN_007bebc4 =====

undefined1  [16] FUN_007bebc4(void)

{
  return ZEXT816(0xade238);
}


// ===== 007bebd4  FUN_007bebd4 =====

void FUN_007bebd4(void)

{
  return;
}


// ===== 007bebd8  <reqwest[6fed810f3e38d558]::connect::rustls_tls_conn::RustlsTlsConn<hyper_util[52a210df7efc1bae]::rt::tokio::TokioIo<hyper_util[52a210df7efc1bae]::rt::tokio::TokioIo<tokio[8c8895dbfa691109]::net::tcp::stream::TcpStream>>>as_hyper_util[52a210df7efc1bae]::client::legacy::connect::Connection>::connected =====

/* <reqwest[6fed810f3e38d558]::connect::rustls_tls_conn::RustlsTlsConn<hyper_util[52a210df7efc1bae]::rt::tokio::TokioIo<hyper_util[52a210df7efc1bae]::rt::tokio::TokioIo<tokio[8c8895dbfa691109]::net::tcp::stream::TcpStream>>>
   as hyper_util[52a210df7efc1bae]::client::legacy::connect::Connection>::connected */

void <reqwest[6fed810f3e38d558]::connect::rustls_tls_conn::RustlsTlsConn<hyper_util[52a210df7efc1bae]::rt::tokio::TokioIo<hyper_util[52a210df7efc1bae]::rt::tokio::TokioIo<tokio[8c8895dbfa691109]::net::tcp::stream::TcpStream>>>as_hyper_util[52a210df7efc1bae]::client::legacy::connect::Connection>
     ::connected(long param_1,long param_2)

{
  if (((*(long *)(param_2 + 0x2f8) != -1) && (*(long *)(param_2 + 0x308) == 2)) &&
     (**(short **)(param_2 + 0x300) == 0x3268)) {
    <tokio::net::tcp::stream::TcpStream_as_hyper_util::client::legacy::connect::Connection>::
    connected();
    *(undefined1 *)(param_1 + 0x18) = 0;
    return;
  }
  <tokio::net::tcp::stream::TcpStream_as_hyper_util::client::legacy::connect::Connection>::connected
            ();
  return;
}


// ===== 007bec2c  FUN_007bec2c =====

void FUN_007bec2c(void)

{
  undefined1 uStack_11;
  
  FUN_007c26dc(&uStack_11);
  FUN_007bcbe0();
                    /* WARNING: Subroutine does not return */
  std::process::abort();
}


// ===== 007bec48  FUN_007bec48 =====

bool FUN_007bec48(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  long local_28;
  
  lVar1 = FUN_007af310(*param_1);
  if (lVar1 != 0) {
    uVar2 = param_1[1];
    if (((uVar2 != 0) && (1 < (uVar2 & 3) - 2)) && ((uVar2 & 3) != 0)) {
      local_28 = uVar2 - 1;
                    /* try { // try from 007bec9c to 007beca3 has its CatchHandler @ 007becc0 */
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
    }
    param_1[1] = lVar1;
  }
  return lVar1 != 0;
}


// ===== 007becc8  FUN_007becc8 =====

bool FUN_007becc8(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  long local_28;
  
  lVar1 = FUN_007af7b0(*param_1);
  if (lVar1 != 0) {
    uVar2 = param_1[1];
    if (((uVar2 != 0) && (1 < (uVar2 & 3) - 2)) && ((uVar2 & 3) != 0)) {
      local_28 = uVar2 - 1;
                    /* try { // try from 007bed1c to 007bed23 has its CatchHandler @ 007bed40 */
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
    }
    param_1[1] = lVar1;
  }
  return lVar1 != 0;
}


// ===== 007bed48  FUN_007bed48 =====

bool FUN_007bed48(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  long local_28;
  
  lVar1 = FUN_007c1db4(*param_1);
  if (lVar1 != 0) {
    uVar2 = param_1[1];
    if (((uVar2 != 0) && (1 < (uVar2 & 3) - 2)) && ((uVar2 & 3) != 0)) {
      local_28 = uVar2 - 1;
                    /* try { // try from 007bed9c to 007beda3 has its CatchHandler @ 007bedc0 */
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
    }
    param_1[1] = lVar1;
  }
  return lVar1 != 0;
}


// ===== 007bedc8  thunk_FUN_007df090 =====

void thunk_FUN_007df090(undefined8 param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  long lStack_40;
  ulong uStack_38;
  ulong uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uStack_38 = uVar1 - uVar2;
  if (uVar1 < uVar2) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (uVar2,uVar1,uVar1,&PTR_s__root__cargo_registry_src_index__00adfeb8);
  }
  uStack_30 = 0;
  uStack_28 = 0;
  lStack_40 = *param_3 + uVar2;
  auVar3 = FUN_00773180(param_1,param_2,&lStack_40);
  if (((auVar3 & (undefined1  [16])0x1) == (undefined1  [16])0x0) && (auVar3._8_8_ == 0)) {
    if (uStack_38 < uStack_30) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (0,uStack_30,uStack_38,&PTR_s__root__cargo_registry_src_index__00adfea0);
    }
    uVar1 = uStack_30 + uVar2;
    if (CARRY8(uStack_30,uVar2)) {
                    /* WARNING: Subroutine does not return */
      core::option::expect_failed(&DAT_002a1770,8,&PTR_s__root__cargo_registry_src_index__00adfc90);
    }
    uVar2 = param_3[3];
    if ((ulong)param_3[3] <= uVar1) {
      uVar2 = uVar1;
    }
    param_3[2] = uVar1;
    param_3[3] = uVar2;
  }
  return;
}


// ===== 007bedcc  thunk_FUN_007df148 =====

void thunk_FUN_007df148(undefined8 param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  long lStack_40;
  ulong uStack_38;
  ulong uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uStack_38 = uVar1 - uVar2;
  if (uVar1 < uVar2) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (uVar2,uVar1,uVar1,&PTR_s__root__cargo_registry_src_index__00adfeb8);
  }
  uStack_30 = 0;
  uStack_28 = 0;
  lStack_40 = *param_3 + uVar2;
  auVar3 = FUN_00773354(param_1,param_2,&lStack_40);
  if (((auVar3 & (undefined1  [16])0x1) == (undefined1  [16])0x0) && (auVar3._8_8_ == 0)) {
    if (uStack_38 < uStack_30) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (0,uStack_30,uStack_38,&PTR_s__root__cargo_registry_src_index__00adfea0);
    }
    uVar1 = uStack_30 + uVar2;
    if (CARRY8(uStack_30,uVar2)) {
                    /* WARNING: Subroutine does not return */
      core::option::expect_failed(&DAT_002a1770,8,&PTR_s__root__cargo_registry_src_index__00adfc90);
    }
    uVar2 = param_3[3];
    if ((ulong)param_3[3] <= uVar1) {
      uVar2 = uVar1;
    }
    param_3[2] = uVar1;
    param_3[3] = uVar2;
  }
  return;
}


// ===== 007bedd0  FUN_007bedd0 =====

bool FUN_007bedd0(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined1 local_b0 [112];
  uint local_40;
  
  if (*param_1 == -3) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("Map must not be polled after it returned `Poll::Ready`",0x36,
               &PTR_s__root__cargo_registry_src_index__00ade300);
  }
  FUN_007bf420(local_b0);
  if ((char)local_40 != -1) {
    lVar1 = *param_1;
    if (lVar1 != -2) {
      if (lVar1 == -3) {
                    /* try { // try from 007bef1c to 007bef33 has its CatchHandler @ 007bef5c */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic
                  ("internal error: entered unreachable code",0x28,
                   &PTR_s__root__cargo_registry_src_index__00ade2e8);
      }
      lVar2 = lVar1 + -5;
      if (lVar1 < 5) {
        lVar2 = 1;
      }
      if (lVar2 == 1) {
        if (lVar1 == -1) {
          if ((char)param_1[0xf] == '\x02') {
            FUN_007d2768(param_1 + 1);
          }
          else if ((char)param_1[0xf] != -1) {
                    /* try { // try from 007beeec to 007beeff has its CatchHandler @ 007bef38 */
            FUN_007d0e54(param_1 + 1);
          }
        }
        else {
          FUN_007d11a4(param_1);
        }
      }
      else if (lVar2 == 0) {
                    /* try { // try from 007bee5c to 007bee77 has its CatchHandler @ 007bef38 */
        FUN_007d19e8(param_1 + 1);
      }
    }
    *param_1 = -3;
    if ((local_40 & 0xff) != 2) {
      FUN_0078c534(local_b0);
    }
  }
  return (char)local_40 == -1;
}


// ===== 007bef80  FUN_007bef80 =====

undefined8 FUN_007bef80(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 local_60 [41];
  char cStack_37;
  undefined6 uStack_36;
  
  if (*(char *)(param_1 + 0x70) == '\x02') {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("Map must not be polled after it returned `Poll::Ready`",0x36,
               &PTR_s__root__cargo_registry_src_index__00ade300);
  }
  if (*(char *)(param_1 + 0x61) == '\x02') {
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed("not dropped",0xb,&PTR_s__root__cargo_registry_src_index__00ade0e8);
  }
  cVar2 = <want::[0]::want::Giver>::poll_want(param_1 + 0x30);
  if (cVar2 == '\x02') {
    return 1;
  }
  if (cVar2 == '\0') {
    stack0xffffffffffffffc8 = CONCAT11(0xff,local_60[0x28]);
  }
  else {
    <hyper::error::hyper::error::Error>::new_closed();
    <hyper_util::client::legacy::client::[f]::hyper_util::client::legacy::client::Error>::closed
              (local_60);
    if (cStack_37 == -2) {
      return 1;
    }
  }
  uVar1 = stack0xffffffffffffffc8;
  if (*(char *)(param_1 + 0x70) == '\x02') {
                    /* try { // try from 007bf0a0 to 007bf0b7 has its CatchHandler @ 007bf0e0 */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("internal error: entered unreachable code",0x28,
               &PTR_s__root__cargo_registry_src_index__00ade2e8);
  }
                    /* try { // try from 007bf020 to 007bf027 has its CatchHandler @ 007bf0bc */
  FUN_007d0e54(param_1);
  *(undefined1 *)(param_1 + 0x70) = 2;
  cStack_37 = SUB81(uVar1,1);
  if (cStack_37 != -1) {
    unique0x1000011e = uVar1;
    FUN_0078df18(local_60);
  }
  return 0;
}


// ===== 007bf104  FUN_007bf104 =====

void FUN_007bf104(long param_1,long *param_2)

{
  long local_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long local_f0;
  long lStack_e8;
  long local_e0;
  long local_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long local_b0;
  undefined8 uStack_a8;
  long local_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long local_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long local_50;
  long lStack_48;
  long local_40;
  
  if (*param_2 == 2) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("Map must not be polled after it returned `Poll::Ready`",0x36,
               &PTR_s__root__cargo_registry_src_index__00ade300);
  }
  FUN_007bf608(&local_d0,param_2 + 0x13);
  local_e0 = local_a0;
  lStack_e8 = uStack_a8;
  local_f0 = local_b0;
  lStack_f8 = lStack_b8;
  lStack_100 = lStack_c0;
  lStack_108 = lStack_c8;
  local_110 = local_d0;
  if (uStack_a8._1_1_ == -2) {
    *(undefined1 *)(param_1 + 0x70) = 3;
    return;
  }
  if (*param_2 != 2) {
    lStack_68 = param_2[0xd];
    local_70 = param_2[0xc];
    lStack_58 = param_2[0xf];
    lStack_60 = param_2[0xe];
    lStack_48 = param_2[0x11];
    local_50 = param_2[0x10];
    local_40 = param_2[0x12];
    uStack_a8 = param_2[5];
    local_b0 = param_2[4];
    lStack_98 = param_2[7];
    local_a0 = param_2[6];
    lStack_88 = param_2[9];
    local_90 = param_2[8];
    lStack_78 = param_2[0xb];
    lStack_80 = param_2[10];
    lStack_c8 = param_2[1];
    local_d0 = *param_2;
    lStack_b8 = param_2[3];
    lStack_c0 = param_2[2];
    if ((int)param_2[0x14] != -3) {
                    /* try { // try from 007bf1c0 to 007bf1c7 has its CatchHandler @ 007bf2c8 */
      FUN_007d0fa0(param_2 + 0x13);
    }
    *param_2 = 2;
    if (local_d0 != 2) {
      FUN_007cb81c(param_1,&local_d0,&local_110);
      return;
    }
  }
                    /* try { // try from 007bf2ac to 007bf2c3 has its CatchHandler @ 007bf2ec */
                    /* WARNING: Subroutine does not return */
  core::panicking::panic
            ("internal error: entered unreachable code",0x28,
             &PTR_s__root__cargo_registry_src_index__00ade2e8);
}


// ===== 007bf304  FUN_007bf304 =====

void FUN_007bf304(undefined1 (*param_1) [16],undefined8 *param_2)

{
  void *__ptr;
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  char cStack_37;
  undefined6 uStack_36;
  
  __ptr = (void *)*param_2;
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("Map must not be polled after it returned `Poll::Ready`",0x36,
               &PTR_s__root__cargo_registry_src_index__00ade300);
  }
  puVar1 = (undefined8 *)param_2[1];
  (*(code *)puVar1[3])(&local_48,__ptr);
  if (cStack_37 != -1) {
    if ((code *)*puVar1 != (code *)0x0) {
                    /* try { // try from 007bf360 to 007bf367 has its CatchHandler @ 007bf3f0 */
      (*(code *)*puVar1)(__ptr);
    }
    if (puVar1[1] != 0) {
      free(__ptr);
    }
    *param_2 = 0;
    if (cStack_37 != '\x02') {
      *(undefined8 *)(*param_1 + 8) = uStack_40;
      *(undefined8 *)*param_1 = local_48;
      *(ulong *)param_1[1] = CONCAT62(uStack_36,CONCAT11(cStack_37,local_38));
      return;
    }
    auVar2 = FUN_00772e5c(local_48,uStack_40);
    cStack_37 = '\x02';
    *param_1 = auVar2;
  }
  param_1[1][1] = cStack_37;
  return;
}


// ===== 007bf420  FUN_007bf420 =====

void FUN_007bf420(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if (*param_2 == -2) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("Map must not be polled after it returned `Poll::Ready`",0x36,
               &PTR_s__root__cargo_registry_src_index__00ade300);
  }
  FUN_007d6370(&local_b0);
  if ((char)local_40 == -1) {
    *(undefined1 *)(param_1 + 0xe) = 0xff;
    return;
  }
  lVar1 = *param_2;
  if (lVar1 == -2) {
                    /* try { // try from 007bf5bc to 007bf5d3 has its CatchHandler @ 007bf5f0 */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("internal error: entered unreachable code",0x28,
               &PTR_s__root__cargo_registry_src_index__00ade2e8);
  }
  lVar2 = lVar1 + -5;
  if (lVar1 < 5) {
    lVar2 = 1;
  }
  if (lVar2 == 1) {
    if (lVar1 == -1) {
      if ((char)param_2[0xf] == '\x02') {
        FUN_007d2768(param_2 + 1);
      }
      else if ((char)param_2[0xf] != -1) {
                    /* try { // try from 007bf58c to 007bf59f has its CatchHandler @ 007bf5d8 */
        FUN_007d0e54(param_2 + 1);
      }
    }
    else {
      FUN_007d11a4(param_2);
    }
  }
  else if (lVar2 == 0) {
                    /* try { // try from 007bf4a8 to 007bf4db has its CatchHandler @ 007bf5d8 */
    FUN_007d19e8(param_2 + 1);
  }
  *param_2 = -2;
  if (((uint)local_40 & 0xff) == 2) {
    FUN_007925c0(&local_b0);
    *(undefined1 *)(param_1 + 0xe) = 2;
    return;
  }
  param_1[0xd] = uStack_48;
  param_1[0xc] = local_50;
  param_1[9] = uStack_68;
  param_1[8] = local_70;
  param_1[0xb] = uStack_58;
  param_1[10] = uStack_60;
  param_1[0xe] = local_40;
  param_1[1] = uStack_a8;
  *param_1 = local_b0;
  param_1[3] = uStack_98;
  param_1[2] = uStack_a0;
  param_1[5] = uStack_88;
  param_1[4] = local_90;
  param_1[7] = uStack_78;
  param_1[6] = uStack_80;
  return;
}


// ===== 007bf608  FUN_007bf608 =====

void FUN_007bf608(undefined8 *param_1,long param_2)

{
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  char cStack_27;
  undefined6 uStack_26;
  
  if (*(int *)(param_2 + 8) == -3) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("Map must not be polled after it returned `Poll::Ready`",0x36,
               &PTR_s__root__cargo_registry_src_index__00ade300);
  }
  FUN_007932ec(&local_38);
  if (cStack_27 == -1) {
    *(undefined1 *)((long)param_1 + 0x29) = 0xfe;
    return;
  }
  if (*(int *)(param_2 + 8) == -3) {
                    /* try { // try from 007bf6f0 to 007bf707 has its CatchHandler @ 007bf724 */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("internal error: entered unreachable code",0x28,
               &PTR_s__root__cargo_registry_src_index__00ade2e8);
  }
                    /* try { // try from 007bf65c to 007bf663 has its CatchHandler @ 007bf70c */
  FUN_007d0fa0(param_2);
  *(undefined4 *)(param_2 + 8) = 0xfffffffd;
  if (cStack_27 == '\x02') {
    *(undefined1 *)(param_1 + 6) = 2;
    param_1[1] = uStack_30;
    *param_1 = local_38;
    *(undefined1 *)((long)param_1 + 0x29) = 2;
    return;
  }
  param_1[2] = CONCAT62(uStack_26,CONCAT11(cStack_27,local_28));
  param_1[1] = uStack_30;
  *param_1 = local_38;
  *(undefined1 *)((long)param_1 + 0x29) = 0xff;
  return;
}


// ===== 007bf73c  FUN_007bf73c =====

void FUN_007bf73c(undefined1 (*param_1) [16],long *param_2,undefined8 param_3)

{
  void *__ptr;
  undefined8 *puVar1;
  ulong uVar2;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined1 uVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  char cVar7;
  undefined1 auVar8 [16];
  undefined8 local_68;
  undefined *puStack_60;
  undefined1 local_58;
  char local_57;
  undefined4 local_56;
  undefined2 local_52;
  undefined4 local_38;
  undefined2 local_34;
  
  if (*param_2 == 2) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("Map must not be polled after it returned `Poll::Ready`",0x36,
               &PTR_s__root__cargo_registry_src_index__00ade300);
  }
  (**(code **)(param_2[0x10] + 0x18))(&local_68,param_2[0xf]);
  if (local_57 == -1) {
    uVar2 = <tokio::time::sleep::Sleep_as_core::future::future::Future>::poll(param_2,param_3);
    if ((uVar2 & 1) != 0) {
      param_1[1][1] = 0xff;
      return;
    }
    puVar5 = &DAT_00adcd08;
    uVar6 = 1;
    uVar3 = extraout_w8_00;
    cVar7 = '\x02';
  }
  else {
    puVar5 = puStack_60;
    uVar6 = local_68;
    uVar3 = extraout_w8;
    cVar7 = local_57;
    if (local_57 != '\x02') {
      local_38 = local_56;
      local_34 = local_52;
      uVar3 = local_58;
    }
  }
  if (*param_2 != 2) {
    __ptr = (void *)param_2[0xf];
    puVar1 = (undefined8 *)param_2[0x10];
    pcVar4 = (code *)*puVar1;
    if (pcVar4 != (code *)0x0) {
                    /* try { // try from 007bf810 to 007bf817 has its CatchHandler @ 007bf8bc */
      (*pcVar4)(__ptr);
    }
    if (puVar1[1] != 0) {
      free(__ptr);
    }
                    /* try { // try from 007bf82c to 007bf833 has its CatchHandler @ 007bf8e4 */
    FUN_007d21d8(param_2);
    *param_2 = 2;
    if (cVar7 == '\x02') {
      auVar8 = FUN_00772e5c(uVar6,puVar5);
      param_1[1][1] = 2;
      *param_1 = auVar8;
    }
    else {
      *(undefined **)(*param_1 + 8) = puVar5;
      *(undefined8 *)*param_1 = uVar6;
      *(ulong *)param_1[1] = CONCAT26(local_34,CONCAT42(local_38,CONCAT11(cVar7,uVar3)));
    }
    return;
  }
                    /* try { // try from 007bf8a0 to 007bf8b7 has its CatchHandler @ 007bf8fc */
                    /* WARNING: Subroutine does not return */
  core::panicking::panic
            ("internal error: entered unreachable code",0x28,
             &PTR_s__root__cargo_registry_src_index__00ade2e8);
}


// ===== 007bf914  FUN_007bf914 =====

bool FUN_007bf914(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long local_368;
  long local_360;
  long local_358;
  undefined8 *local_350;
  undefined **ppuStack_348;
  undefined8 local_340;
  long lStack_338;
  undefined8 *local_330;
  undefined **ppuStack_328;
  undefined8 local_320;
  undefined8 *local_318;
  undefined **ppuStack_310;
  undefined8 local_308;
  undefined8 *puStack_300;
  long local_2f8 [3];
  undefined1 auStack_2e0 [32];
  undefined8 *local_2c0;
  undefined **ppuStack_2b8;
  undefined8 *local_2b0;
  undefined **ppuStack_2a8;
  undefined8 uStack_2a0;
  undefined8 *puStack_298;
  
  if (*param_1 == -1) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("Map must not be polled after it returned `Poll::Ready`",0x36,
               &PTR_s__root__cargo_registry_src_index__00ade300);
  }
  if (*param_1 == 2) {
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00ade258);
  }
  FUN_007d2e84(&local_368,param_1,param_2,1);
  if (local_368 == -1) {
    return (bool)2;
  }
  if (local_368 != 0) {
    lVar1 = local_360;
    if (local_368 == 2) goto LAB_007bfa40;
    puVar2 = (undefined8 *)*param_1;
    local_358 = local_360;
    *param_1 = 2;
    if (puVar2 == (undefined8 *)0x2) {
                    /* try { // try from 007bfab8 to 007bfac3 has its CatchHandler @ 007bfba0 */
                    /* WARNING: Subroutine does not return */
      core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00ade270);
    }
    memcpy(&ppuStack_2b8,param_1 + 1,0x260);
                    /* try { // try from 007bf9a0 to 007bf9af has its CatchHandler @ 007bfba0 */
    local_2c0 = puVar2;
    FUN_007d2d40(&local_330,&local_2c0);
    ppuStack_2b8 = ppuStack_310;
    local_2c0 = local_318;
    ppuStack_2a8 = (undefined **)puStack_300;
    local_2b0 = (undefined8 *)local_308;
    if (local_2f8[0] != 2) {
                    /* try { // try from 007bf9d4 to 007bf9db has its CatchHandler @ 007bfaf4 */
      FUN_007bcf54(local_2f8);
    }
                    /* try { // try from 007bf9e0 to 007bf9e7 has its CatchHandler @ 007bfb0c */
    FUN_007bd10c(auStack_2e0);
    local_350 = local_330;
    ppuStack_348 = ppuStack_328;
    local_340 = local_320;
    lStack_338 = local_360;
    ppuStack_328 = ppuStack_2b8;
    local_330 = local_2c0;
    local_318 = ppuStack_2a8;
    local_320 = local_2b0;
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar2 = (undefined8 *)FUN_004b25a4(0x18,8);
    if (puVar2 == (undefined8 *)0x0) {
                    /* try { // try from 007bfac8 to 007bfad3 has its CatchHandler @ 007bfb68 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x18);
    }
    puVar2[1] = ppuStack_348;
    *puVar2 = local_350;
    puVar2[2] = local_340;
    ppuStack_2b8 = &PTR_FUN_00adc070;
    ppuStack_2a8 = ppuStack_328;
    local_2b0 = local_330;
    puStack_298 = local_318;
    uStack_2a0 = local_320;
    local_2c0 = puVar2;
    <hyper::upgrade::[5]::hyper::upgrade::Pending>::fulfill(local_360,&local_2c0);
  }
  lVar1 = 0;
LAB_007bfa40:
  if (*param_1 != -1) {
                    /* try { // try from 007bfa4c to 007bfa53 has its CatchHandler @ 007bfb3c */
    FUN_007d10e0(param_1);
    *param_1 = -1;
    if (lVar1 != 0) {
      FUN_00791f14(lVar1);
    }
    return lVar1 != 0;
  }
                    /* try { // try from 007bfad8 to 007bfaef has its CatchHandler @ 007bfb54 */
                    /* WARNING: Subroutine does not return */
  core::panicking::panic
            ("internal error: entered unreachable code",0x28,
             &PTR_s__root__cargo_registry_src_index__00ade2e8);
}


// ===== 007bfbb8  FUN_007bfbb8 =====

void FUN_007bfbb8(undefined8 *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("Map must not be polled after it returned `Poll::Ready`",0x36,
               &PTR_s__root__cargo_registry_src_index__00ade300);
  }
  <hyper_util::client::legacy::connect::dns::GaiFuture_as_core::future::future::Future>::poll
            (&local_58);
  if (local_58 == 1) {
    *param_1 = 2;
    return;
  }
  uStack_78 = uStack_48;
  local_80 = local_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  if (*param_2 != 0) {
                    /* try { // try from 007bfc1c to 007bfc23 has its CatchHandler @ 007bfc94 */
    <hyper_util::client::legacy::connect::dns::GaiFuture_as_core::ops::drop::Drop>::drop(param_2);
    lVar2 = *param_2;
                    /* try { // try from 007bfc28 to 007bfc3b has its CatchHandler @ 007bfcb8 */
    iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::drop_join_handle_fast
                      (lVar2);
    if (iVar1 != 0) {
      <tokio::runtime::task::raw::tokio::runtime::task::raw::RawTask>::drop_join_handle_slow(lVar2);
    }
    *param_2 = 0;
    FUN_007deae0(param_1,&local_80);
    return;
  }
                    /* try { // try from 007bfc78 to 007bfc8f has its CatchHandler @ 007bfca8 */
                    /* WARNING: Subroutine does not return */
  core::panicking::panic
            ("internal error: entered unreachable code",0x28,
             &PTR_s__root__cargo_registry_src_index__00ade2e8);
}


// ===== 007bfcd4  FUN_007bfcd4 =====

undefined8 FUN_007bfcd4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  long local_40;
  undefined **ppuStack_38;
  
  local_40 = param_1 + 0x20;
  ppuStack_38 = &PTR_FUN_00add8d8;
  lVar1 = <rustls::conn::connection::Writer_as_core::io::write::Write>::flush(&local_40);
  if (lVar1 != 0) {
    return 0;
  }
  while( true ) {
    if (*(long *)(param_1 + 0xd0) == 0) {
      return 0;
    }
    auVar2 = FUN_007aa798(param_1,param_1 + 0x20,param_2);
    if (auVar2._0_8_ != 0) break;
    if (auVar2._8_8_ == 0) {
      return 0;
    }
  }
  if (auVar2._0_8_ != 2) {
    return 0;
  }
  return 1;
}


// ===== 007bfda0  FUN_007bfda0 =====

undefined1  [16] FUN_007bfda0(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  long local_60;
  undefined **ppuStack_58;
  
  if (param_4 == 0) {
    lVar1 = 0;
    param_4 = 0;
  }
  else {
    uVar2 = 0;
    do {
      ppuStack_58 = &PTR_FUN_00add8d8;
      local_60 = param_1 + 0x20;
      if (param_4 < uVar2) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (uVar2,param_4,param_4,&PTR_s__root__cargo_registry_src_index__00add908);
      }
      auVar3 = <rustls::conn::connection::Writer_as_core::io::write::Write>::write
                         (&local_60,param_3 + uVar2,param_4 - uVar2);
      if ((auVar3 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
        lVar1 = 1;
        param_4 = auVar3._8_8_;
        goto LAB_007bfe64;
      }
      uVar2 = uVar2 + auVar3._8_8_;
LAB_007bfe00:
      if (*(long *)(param_1 + 0xd0) != 0) {
        auVar3 = FUN_007aa798(param_1,param_1 + 0x20,param_2);
        lVar1 = auVar3._0_8_;
        if (lVar1 == 0) goto code_r0x007bfe1c;
        param_4 = auVar3._8_8_;
        if (lVar1 == 2) goto LAB_007bfe40;
        goto LAB_007bfe64;
      }
    } while (uVar2 != param_4);
    lVar1 = 0;
  }
LAB_007bfe64:
  auVar3._8_8_ = param_4;
  auVar3._0_8_ = lVar1;
  return auVar3;
code_r0x007bfe1c:
  if (auVar3._8_8_ == 0) {
LAB_007bfe40:
    lVar1 = 2;
    param_4 = uVar2;
    if (uVar2 != 0) {
      lVar1 = 0;
    }
    goto LAB_007bfe64;
  }
  goto LAB_007bfe00;
}


// ===== 007bfe9c  FUN_007bfe9c =====

void FUN_007bfe9c(long param_1,undefined8 param_2)

{
  long local_38;
  long lStack_30;
  byte local_28;
  
  local_28 = *(byte *)(param_1 + 0x440);
  if (local_28 < 2) {
    <rustls::common_state::rustls::common_state::CommonState>::send_close_notify(param_1 + 0x20);
    local_28 = *(byte *)(param_1 + 0x440) | 2;
    *(byte *)(param_1 + 0x440) = local_28;
  }
  lStack_30 = param_1 + 0x20;
  local_28 = local_28 & 1;
  local_38 = param_1;
  FUN_007ad210(&local_38,param_2);
  return;
}


// ===== 007bff00  FUN_007bff00 =====

undefined1  [16] FUN_007bff00(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  long local_60;
  undefined **ppuStack_58;
  ulong uVar4;
  
  lVar5 = param_4 << 4;
  lVar6 = param_3;
  do {
    if (lVar5 == 0) {
      return ZEXT816(0);
    }
    plVar1 = (long *)(lVar6 + 8);
    lVar6 = lVar6 + 0x10;
    lVar5 = lVar5 + -0x10;
  } while (*plVar1 == 0);
  do {
    ppuStack_58 = &PTR_FUN_00add8d8;
    local_60 = param_1 + 0x20;
    auVar7 = <rustls::conn::connection::Writer_as_core::io::write::Write>::write_vectored
                       (&local_60,param_3,param_4);
    uVar4 = auVar7._8_8_;
    if (auVar7._0_8_ == 1) {
      return auVar7;
    }
    while (*(long *)(param_1 + 0xd0) != 0) {
      auVar7 = FUN_007aa798(param_1,param_1 + 0x20,param_2);
      if (auVar7._0_8_ != 0) {
        if (auVar7._0_8_ != 2) {
          return auVar7;
        }
        goto LAB_007bffb8;
      }
      if (auVar7._8_8_ == 0) {
LAB_007bffb8:
        auVar7._8_8_ = uVar4;
        auVar7._0_8_ = 2;
        if (uVar4 == 0) {
          return auVar7;
        }
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar4;
        return auVar3 << 0x40;
      }
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar4;
    if (uVar4 != 0) {
      return auVar2 << 0x40;
    }
  } while( true );
}


// ===== 007bffec  FUN_007bffec =====

void FUN_007bffec(long param_1)

{
  long local_28;
  long lStack_20;
  byte local_18;
  
  local_28 = param_1 + 0x420;
  local_18 = *(byte *)(param_1 + 0x868) & 1;
  lStack_20 = param_1;
  FUN_007ad358(&local_28);
  return;
}


// ===== 007c0020  FUN_007c0020 =====

undefined1  [16] FUN_007c0020(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  long local_50;
  undefined **ppuStack_48;
  
  if (param_4 == 0) {
    lVar1 = 0;
    param_4 = 0;
  }
  else {
    uVar2 = 0;
    do {
      ppuStack_48 = &PTR_FUN_00add8d8;
      local_50 = param_1;
      if (param_4 < uVar2) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (uVar2,param_4,param_4,&PTR_s__root__cargo_registry_src_index__00add908);
      }
      auVar3 = <rustls::conn::connection::Writer_as_core::io::write::Write>::write
                         (&local_50,param_3 + uVar2,param_4 - uVar2);
      if ((auVar3 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
        lVar1 = 1;
        param_4 = auVar3._8_8_;
        goto LAB_007c00dc;
      }
      uVar2 = uVar2 + auVar3._8_8_;
LAB_007c0078:
      if (*(long *)(param_1 + 0xb0) != 0) {
        auVar3 = FUN_007aace0(param_1 + 0x420,param_1,param_2);
        lVar1 = auVar3._0_8_;
        if (lVar1 == 0) goto code_r0x007c0094;
        param_4 = auVar3._8_8_;
        if (lVar1 == 2) goto LAB_007c00b8;
        goto LAB_007c00dc;
      }
    } while (uVar2 != param_4);
    lVar1 = 0;
  }
LAB_007c00dc:
  auVar3._8_8_ = param_4;
  auVar3._0_8_ = lVar1;
  return auVar3;
code_r0x007c0094:
  if (auVar3._8_8_ == 0) {
LAB_007c00b8:
    lVar1 = 2;
    param_4 = uVar2;
    if (uVar2 != 0) {
      lVar1 = 0;
    }
    goto LAB_007c00dc;
  }
  goto LAB_007c0078;
}


// ===== 007c0110  FUN_007c0110 =====

void FUN_007c0110(long param_1,undefined8 param_2)

{
  long local_38;
  long lStack_30;
  byte local_28;
  
  local_28 = *(byte *)(param_1 + 0x868);
  if (local_28 < 2) {
    <rustls::common_state::rustls::common_state::CommonState>::send_close_notify(param_1);
    local_28 = *(byte *)(param_1 + 0x868) | 2;
    *(byte *)(param_1 + 0x868) = local_28;
  }
  local_38 = param_1 + 0x420;
  local_28 = local_28 & 1;
  lStack_30 = param_1;
  FUN_007ad458(&local_38,param_2);
  return;
}


// ===== 007c0174  FUN_007c0174 =====

undefined1  [16] FUN_007c0174(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  long local_50;
  undefined **ppuStack_48;
  ulong uVar4;
  
  lVar5 = param_4 << 4;
  lVar6 = param_3;
  do {
    if (lVar5 == 0) {
      return ZEXT816(0);
    }
    plVar1 = (long *)(lVar6 + 8);
    lVar6 = lVar6 + 0x10;
    lVar5 = lVar5 + -0x10;
  } while (*plVar1 == 0);
  do {
    ppuStack_48 = &PTR_FUN_00add8d8;
    local_50 = param_1;
    auVar7 = <rustls::conn::connection::Writer_as_core::io::write::Write>::write_vectored
                       (&local_50,param_3,param_4);
    uVar4 = auVar7._8_8_;
    if (auVar7._0_8_ == 1) {
      return auVar7;
    }
    while (*(long *)(param_1 + 0xb0) != 0) {
      auVar7 = FUN_007aace0(param_1 + 0x420,param_1,param_2);
      if (auVar7._0_8_ != 0) {
        if (auVar7._0_8_ != 2) {
          return auVar7;
        }
        goto LAB_007c0224;
      }
      if (auVar7._8_8_ == 0) {
LAB_007c0224:
        auVar7._8_8_ = uVar4;
        auVar7._0_8_ = 2;
        if (uVar4 == 0) {
          return auVar7;
        }
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar4;
        return auVar3 << 0x40;
      }
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar4;
    if (uVar4 != 0) {
      return auVar2 << 0x40;
    }
  } while( true );
}


// ===== 007c0254  FUN_007c0254 =====

void FUN_007c0254(void *param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong __n;
  long *plVar5;
  byte *pbVar6;
  
  if (((*(byte *)((long)param_1 + 0x423) & 1) == 0) &&
     (plVar5 = *(long **)((long)param_1 + 0x400), plVar5 != (long *)0x0)) {
    uVar4 = *(ulong *)((long)param_1 + 0x410);
    if (uVar4 != 0) {
      *(undefined1 *)((long)param_1 + 0x423) = 1;
      if (0x400 < uVar4) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (0,uVar4,0x400,&PTR_s__root__cargo_registry_src_index__00ade208);
      }
      lVar3 = plVar5[2];
      if ((ulong)(*plVar5 - lVar3) < uVar4) {
        FUN_0079be54(plVar5,lVar3,uVar4,1,1);
        lVar3 = plVar5[2];
      }
      memcpy((void *)(plVar5[1] + lVar3),param_1,uVar4);
      lVar3 = plVar5[2];
      *(undefined1 *)((long)param_1 + 0x423) = 0;
      *(undefined8 *)((long)param_1 + 0x410) = 0;
      plVar5[2] = lVar3 + uVar4;
    }
    uVar4 = *(ulong *)((long)param_1 + 0x408);
    if (uVar4 != 0) {
      if (3 < uVar4) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (0,uVar4,3,&PTR_s__root__cargo_registry_src_index__00ade220);
      }
      pbVar6 = *(byte **)((long)param_1 + 0x418);
      if ((uVar4 == 3) || ((*pbVar6 & 1) != 0)) {
        __n = 4;
      }
      else {
        __n = 2;
        if (uVar4 != 1) {
          __n = 3;
        }
      }
      uVar4 = <base64::engine::general_purpose::GeneralPurpose_as_base64::engine::Engine>::
              internal_encode(pbVar6,(long)param_1 + 0x420,uVar4,param_1,__n);
      if (*pbVar6 == 1) {
        lVar3 = __n - uVar4;
        if (__n < uVar4) {
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (uVar4,__n,__n,&PTR_s__root__cargo_registry_src_index__00adf6b8);
        }
        uVar2 = -(int)uVar4 & 3;
        if ((-(int)uVar4 & 3U) != 0) {
          if (__n == uVar4) {
LAB_007c0478:
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_bounds_check
                      (lVar3,lVar3,&PTR_s__root__cargo_registry_src_index__00adf6a0);
          }
          puVar1 = (undefined1 *)((long)param_1 + uVar4);
          *puVar1 = 0x3d;
          if (uVar2 != 1) {
            if (lVar3 == 1) goto LAB_007c0478;
            puVar1[1] = 0x3d;
            if (uVar2 != 2) {
              if (lVar3 == 2) goto LAB_007c0478;
              puVar1[2] = 0x3d;
            }
          }
        }
      }
      plVar5 = *(long **)((long)param_1 + 0x400);
      *(ulong *)((long)param_1 + 0x410) = __n;
      *(undefined1 *)((long)param_1 + 0x423) = 1;
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        core::option::expect_failed
                  ("Writer must be present",0x16,&PTR_s__root__cargo_registry_src_index__00ade1f0);
      }
      lVar3 = plVar5[2];
      if ((ulong)(*plVar5 - lVar3) < __n) {
        FUN_0079be54(plVar5,lVar3,__n,1,1);
        lVar3 = plVar5[2];
      }
      memcpy((void *)(plVar5[1] + lVar3),param_1,__n);
      lVar3 = plVar5[2];
      *(undefined1 *)((long)param_1 + 0x423) = 0;
      plVar5[2] = lVar3 + __n;
      *(undefined8 *)((long)param_1 + 0x408) = 0;
      *(undefined8 *)((long)param_1 + 0x410) = 0;
    }
  }
  return;
}


// ===== 007c0488  FUN_007c0488 =====

void FUN_007c0488(size_t *param_1,long param_2)

{
  size_t __n;
  undefined1 *unaff_x20;
  void *__src;
  undefined8 uVar1;
  
  __n = 0xffffffffffffffff;
  if ((*(long *)(param_2 + 0x310) != -1) && (*(long *)(param_2 + 800) != 0)) {
    __n = *(size_t *)(*(long *)(param_2 + 0x318) + 0x10);
    if ((long)__n < 0) {
      uVar1 = 0;
LAB_007c04c4:
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(uVar1,__n);
    }
    if (__n == 0) {
      unaff_x20 = &DAT_00000001;
    }
    else {
      __src = *(void **)(*(long *)(param_2 + 0x318) + 8);
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar1 = 1;
      unaff_x20 = (undefined1 *)FUN_004b25a4(__n,1);
      if (unaff_x20 == (undefined1 *)0x0) goto LAB_007c04c4;
      memcpy(unaff_x20,__src,__n);
    }
  }
  *param_1 = __n;
  param_1[1] = (size_t)unaff_x20;
  param_1[2] = __n;
  return;
}


// ===== 007c0530  FUN_007c0530 =====

void FUN_007c0530(size_t *param_1,long param_2)

{
  size_t __n;
  undefined1 *unaff_x20;
  void *__src;
  undefined8 uVar1;
  
  __n = 0xffffffffffffffff;
  if ((*(long *)(param_2 + 0x2f0) != -1) && (*(long *)(param_2 + 0x300) != 0)) {
    __n = *(size_t *)(*(long *)(param_2 + 0x2f8) + 0x10);
    if ((long)__n < 0) {
      uVar1 = 0;
LAB_007c056c:
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(uVar1,__n);
    }
    if (__n == 0) {
      unaff_x20 = &DAT_00000001;
    }
    else {
      __src = *(void **)(*(long *)(param_2 + 0x2f8) + 8);
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar1 = 1;
      unaff_x20 = (undefined1 *)FUN_004b25a4(__n,1);
      if (unaff_x20 == (undefined1 *)0x0) goto LAB_007c056c;
      memcpy(unaff_x20,__src,__n);
    }
  }
  *param_1 = __n;
  param_1[1] = (size_t)unaff_x20;
  param_1[2] = __n;
  return;
}


// ===== 007c05d8  FUN_007c05d8 =====

void FUN_007c05d8(undefined8 param_1,long param_2)

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


// ===== 007c05f0  <reqwest[6fed810f3e38d558]::connect::rustls_tls_conn::RustlsTlsConn<hyper_util[52a210df7efc1bae]::rt::tokio::TokioIo<hyper_rustls[8b73b3c5adfefd00]::stream::MaybeHttpsStream<hyper_util[52a210df7efc1bae]::rt::tokio::TokioIo<tokio[8c8895dbfa691109]::net::tcp::stream::TcpStream>>>>as_hyper_util[52a210df7efc1bae]::client::legacy::connect::Connection>::connected =====

/* <reqwest[6fed810f3e38d558]::connect::rustls_tls_conn::RustlsTlsConn<hyper_util[52a210df7efc1bae]::rt::tokio::TokioIo<hyper_rustls[8b73b3c5adfefd00]::stream::MaybeHttpsStream<hyper_util[52a210df7efc1bae]::rt::tokio::TokioIo<tokio[8c8895dbfa691109]::net::tcp::stream::TcpStream>>>>
   as hyper_util[52a210df7efc1bae]::client::legacy::connect::Connection>::connected */

void <reqwest[6fed810f3e38d558]::connect::rustls_tls_conn::RustlsTlsConn<hyper_util[52a210df7efc1bae]::rt::tokio::TokioIo<hyper_rustls[8b73b3c5adfefd00]::stream::MaybeHttpsStream<hyper_util[52a210df7efc1bae]::rt::tokio::TokioIo<tokio[8c8895dbfa691109]::net::tcp::stream::TcpStream>>>>as_hyper_util[52a210df7efc1bae]::client::legacy::connect::Connection>
     ::connected(long param_1,long param_2)

{
  long lVar1;
  
  if (((*(long *)(param_2 + 0x2d8) != -1) && (*(long *)(param_2 + 0x2e8) == 2)) &&
     (**(short **)(param_2 + 0x2e0) == 0x3268)) {
    lVar1 = param_2 + 0x428;
    if (*(long *)(param_2 + 0x420) != 2) {
      lVar1 = param_2 + 0x420;
    }
    <tokio::net::tcp::stream::TcpStream_as_hyper_util::client::legacy::connect::Connection>::
    connected(lVar1);
    *(undefined1 *)(param_1 + 0x18) = 0;
    return;
  }
  if (*(long *)(param_2 + 0x420) == 2) {
    <tokio::net::tcp::stream::TcpStream_as_hyper_util::client::legacy::connect::Connection>::
    connected(param_2 + 0x428);
    return;
  }
  if (((*(long *)(param_2 + 0x718) != -1) && (*(long *)(param_2 + 0x728) == 2)) &&
     (**(short **)(param_2 + 0x720) == DAT_002e5e77)) {
    <tokio::net::tcp::stream::TcpStream_as_hyper_util::client::legacy::connect::Connection>::
    connected(param_2 + 0x420);
    *(undefined1 *)(param_1 + 0x18) = 0;
    return;
  }
  <tokio::net::tcp::stream::TcpStream_as_hyper_util::client::legacy::connect::Connection>::connected
            (param_2 + 0x420);
  return;
}


// ===== 007c06d0  FUN_007c06d0 =====

void FUN_007c06d0(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007c06d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x18))(*param_1);
  return;
}


// ===== 007c06dc  FUN_007c06dc =====

void FUN_007c06dc(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007c06e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x18))(*param_1);
  return;
}


// ===== 007c06e8  FUN_007c06e8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007c06e8(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined4 uVar5;
  code *pcVar6;
  char cVar7;
  byte bVar8;
  int iVar9;
  undefined1 *puVar10;
  void *__dest;
  char *pcVar11;
  undefined1 uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  uint *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 *local_aa0;
  undefined *puStack_a98;
  ulong uStack_a90;
  undefined1 uStack_a88;
  undefined7 uStack_a87;
  undefined1 uStack_a80;
  undefined7 uStack_a7f;
  undefined1 uStack_a78;
  char cStack_a77;
  undefined6 uStack_a76;
  undefined2 uStack_a70;
  undefined6 uStack_a6e;
  undefined1 uStack_a68;
  undefined7 local_a67;
  undefined1 uStack_a60;
  undefined7 uStack_a5f;
  undefined1 uStack_a58;
  char local_a57;
  undefined6 local_a56;
  undefined2 uStack_a50;
  undefined6 uStack_a4e;
  undefined8 local_a48;
  undefined8 uStack_a40;
  undefined8 local_a38;
  undefined1 local_a30;
  undefined4 uStack_a2f;
  undefined3 uStack_a2b;
  undefined1 *local_820;
  undefined8 *puStack_818;
  undefined *local_810;
  undefined1 uStack_808;
  undefined7 local_807;
  undefined1 uStack_800;
  undefined7 uStack_7ff;
  undefined1 uStack_7f8;
  undefined7 uStack_7f7;
  undefined8 uStack_7f0;
  undefined *local_5c0;
  ulong uStack_5b8;
  undefined *local_5b0;
  undefined8 uStack_5a8;
  undefined8 local_5a0;
  undefined1 uStack_598;
  undefined7 uStack_597;
  undefined1 uStack_590;
  undefined8 uStack_58f;
  undefined6 local_586;
  undefined1 auStack_578 [24];
  ulong local_560;
  char local_558;
  undefined2 local_550;
  undefined8 local_548;
  ulong local_540;
  undefined8 local_4f8;
  undefined8 local_4f0;
  undefined8 local_4e8;
  undefined8 local_4d8;
  undefined8 local_478;
  undefined8 local_410;
  undefined1 local_3f0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined1 uStack_3c0;
  undefined4 local_3bf;
  undefined2 local_3bb;
  undefined1 uStack_3b9;
  undefined1 uStack_3b8;
  undefined1 uStack_3b7;
  undefined1 uStack_3b6;
  undefined2 uStack_3b5;
  undefined2 local_3b3;
  undefined *local_350;
  ulong uStack_348;
  undefined1 *local_340;
  undefined *puStack_338;
  ulong uStack_330;
  undefined8 local_320;
  undefined8 local_318;
  undefined6 local_310;
  undefined2 uStack_30a;
  undefined6 local_308;
  undefined2 uStack_302;
  undefined8 *local_300;
  char *local_2f8;
  undefined8 local_2f0;
  undefined1 local_2e8;
  char *local_2e0;
  undefined *puStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined1 local_2c0;
  undefined7 uStack_2bf;
  undefined1 uStack_2b8;
  undefined7 uStack_2b7;
  undefined1 local_2b0;
  char cStack_2af;
  undefined6 uStack_2ae;
  undefined1 auStack_2a0 [576];
  
  local_aa0 = (undefined1 *)0x0;
  puVar19 = (undefined8 *)*param_2;
  bVar8 = *(byte *)((long)puVar19 + 0xc9);
  if (bVar8 < 3) {
    if (bVar8 != 0) {
      if (bVar8 == 1) {
        core::panicking::panic_const::panic_const_async_fn_resumed
                  (&PTR_s__root__cargo_registry_src_index__00ade098);
      }
      core::panicking::panic_const::panic_const_async_fn_resumed_panic();
      goto LAB_007c0ee4;
    }
    *(int *)((long)puVar19 + 0xca) = (int)_s__002a1850;
    if ((*(byte *)(puVar19 + 0x19) & 1) != 0) {
                    /* try { // try from 007c0ef4 to 007c0f0b has its CatchHandler @ 007c0ff4 */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                ("http2 feature is not enabled",0x39,
                 &PTR_s__root__cargo_registry_src_index__00ade080);
    }
    puVar19[0x1b] = puVar19[1];
    puVar19[0x1a] = *puVar19;
    puVar19[0x22] = puVar19[10];
    *(undefined1 *)(puVar19 + 0x23) = *(undefined1 *)(puVar19 + 6);
    puVar19[0x1d] = puVar19[3];
    puVar19[0x1c] = puVar19[2];
    puVar19[0x1f] = puVar19[5];
    puVar19[0x1e] = puVar19[4];
    *(undefined4 *)((long)puVar19 + 0x11c) = *(undefined4 *)((long)puVar19 + 0x34);
    *(undefined1 *)((long)puVar19 + 0xcd) = 0;
    puVar19[0x21] = puVar19[9];
    puVar19[0x20] = puVar19[8];
    *(undefined4 *)((long)puVar19 + 0x119) = *(undefined4 *)((long)puVar19 + 0x31);
    *(undefined2 *)(puVar19 + 0x24) = *(undefined2 *)(puVar19 + 7);
    *(undefined1 *)((long)puVar19 + 0x122) = *(undefined1 *)((long)puVar19 + 0x3a);
    *(undefined1 *)((long)puVar19 + 0x123) = 0;
LAB_007c07c4:
                    /* try { // try from 007c07c4 to 007c07cb has its CatchHandler @ 007c103c */
    puVar17 = (uint *)(puVar19 + 0x1a);
    auVar20 = FUN_0079bd68(0);
    pcVar11 = auVar20._8_8_;
    local_5b0 = auVar20._0_8_;
    local_2e0 = pcVar11;
                    /* try { // try from 007c07dc to 007c07df has its CatchHandler @ 007c1020 */
    auVar21 = want::new();
    puVar10 = auVar21._0_8_;
    puStack_2d8 = (undefined *)puVar19[0x21];
    local_2e0 = (char *)puVar19[0x20];
    local_2d0 = puVar19[0x22];
    uStack_330 = uStack_330 & 0xffffffffffffff00;
                    /* try { // try from 007c080c to 007c081b has its CatchHandler @ 007c1018 */
    local_340 = puVar10;
    puStack_338 = auVar20._0_8_;
    local_320 = pcVar11;
    local_318 = auVar21._8_8_;
    FUN_007d50ac(&local_5b0,&local_2e0);
    local_478 = 0;
    local_410 = 0x8000000000000000;
    local_3f0 = 0xff;
    uStack_3b8 = 0;
    uStack_3b7 = 0;
    uStack_3b6 = 0;
    uStack_3b5 = 0;
    local_3d0 = 0;
    local_3d8 = 0;
    uStack_3c0 = 0;
    local_3b3 = 0x201;
    local_3bb = *(undefined2 *)((long)puVar19 + 0x11d);
    local_3bf = *(undefined4 *)((long)puVar19 + 0x119);
    uStack_3b9 = *(undefined1 *)((long)puVar19 + 0x11f);
    local_4f8 = 0;
    local_4d8 = 0xffffffffffffffff;
    cVar7 = *(char *)((long)puVar19 + 0x122);
    local_4e8 = 0;
    if ((cVar7 != '\x02') && (local_558 = cVar7, cVar7 != '\0')) {
      local_558 = '\x01';
    }
    if ((*(byte *)(puVar19 + 0x24) & 1) == 0) {
      if ((*(byte *)((long)puVar19 + 0x121) & 1) != 0) goto LAB_007c0908;
LAB_007c08b0:
      if ((*puVar17 & 1) != 0) goto LAB_007c0918;
LAB_007c08b8:
      if ((*(byte *)(puVar19 + 0x23) & 1) != 0) goto LAB_007c0930;
LAB_007c08c0:
      if ((*(uint *)(puVar19 + 0x1c) & 1) != 0) goto LAB_007c0940;
LAB_007c08c8:
      lVar13 = puVar19[0x1e];
    }
    else {
      uStack_3b7 = 1;
      if ((*(byte *)((long)puVar19 + 0x121) & 1) == 0) goto LAB_007c08b0;
LAB_007c0908:
      uStack_3b8 = 1;
      if ((*puVar17 & 1) == 0) goto LAB_007c08b8;
LAB_007c0918:
      local_4f0 = puVar19[0x1b];
      local_4f8 = 1;
      if ((*(byte *)(puVar19 + 0x23) & 1) == 0) goto LAB_007c08c0;
LAB_007c0930:
      uStack_3b6 = 1;
      if ((*(uint *)(puVar19 + 0x1c) & 1) == 0) goto LAB_007c08c8;
LAB_007c0940:
      local_548 = puVar19[0x1d];
      lVar13 = puVar19[0x1e];
      local_550 = CONCAT11(local_550._1_1_,1);
    }
    if (lVar13 == 1) {
      local_560 = puVar19[0x1f];
      if (local_560 >> 0xd == 0) {
        local_2e0 = "";
        puStack_2d8 = PTR_fmt_00b00c10;
                    /* try { // try from 007c0e88 to 007c0e9f has its CatchHandler @ 007c1094 */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_fmt
                  (&DAT_002abbeb,&local_2e0,&PTR_s__root__cargo_registry_src_index__00adf748);
      }
      local_550 = 0;
      local_548 = 0x2000;
      local_540 = local_560;
    }
    local_310 = 2;
    uStack_30a = 0;
    local_2e8 = 0;
                    /* try { // try from 007c098c to 007c099f has its CatchHandler @ 007c1010 */
    local_2f8 = pcVar11;
    local_2f0 = auVar21._8_8_;
    FUN_007d42bc(&local_2e0,&local_310,&local_5b0);
    pcVar11 = local_2e0;
    uStack_5b8 = uStack_330;
    local_5c0 = puStack_338;
    memcpy(&local_820,&puStack_2d8,0x260);
    *(undefined1 *)((long)puVar19 + 0x123) = 1;
    if (pcVar11 == (char *)0xffffffffffffffff) {
      *(undefined1 *)(param_1 + 0xe) = 0xff;
      uVar12 = 3;
      goto LAB_007c0db4;
    }
    uStack_348 = uStack_5b8;
    local_350 = local_5c0;
    memcpy(&local_5b0,&local_820,0x260);
    if (pcVar11 != (char *)0x2) {
      uStack_a90 = uStack_348;
      puStack_a98 = local_350;
      uStack_a88 = SUB81(pcVar11,0);
      uStack_a87 = (undefined7)((ulong)pcVar11 >> 8);
      local_aa0 = puVar10;
      memcpy(&uStack_a80,&local_5b0,0x260);
      cVar7 = local_a57;
      uStack_330 = uStack_a90;
      puStack_338 = puStack_a98;
      local_340 = local_aa0;
      memcpy(auStack_2a0,auStack_578,0x228);
      local_2d0 = uStack_5a8;
      puStack_2d8 = local_5b0;
      uStack_2ae = local_586;
      local_2c0 = uStack_598;
      uStack_2c8 = local_5a0;
      uStack_2b7 = (undefined7)uStack_58f;
      local_2b0 = (undefined1)((ulong)uStack_58f >> 0x38);
      uStack_2bf = uStack_597;
      uStack_2b8 = uStack_590;
      puVar19[0x1c] = uStack_330;
      puVar19[0x1b] = puStack_338;
      *(undefined1 **)puVar17 = local_340;
      *(undefined1 *)((long)puVar19 + 0xca) = 1;
      puVar4 = PTR___CALLSITE_00b00f18;
      cStack_2af = cVar7;
      local_2e0 = pcVar11;
      if (*(long *)PTR_MAX_LEVEL_00b00e60 == 0) {
        bVar8 = PTR___CALLSITE_00b00f18[0x10];
        if (2 < bVar8) {
                    /* try { // try from 007c0eb4 to 007c0ebf has its CatchHandler @ 007c0f4c */
          bVar8 = <tracing_core::callsite::tracing_core::callsite::DefaultCallsite>::register
                            (PTR___CALLSITE_00b00f18);
        }
                    /* try { // try from 007c0df4 to 007c0df7 has its CatchHandler @ 007c0f58 */
        if ((bVar8 != 0) &&
           (iVar9 = tracing::__macro_support::__is_enabled(*(undefined8 *)puVar4), iVar9 != 0)) {
          lVar13 = *(long *)puVar4;
          if (*(undefined **)(lVar13 + 0x38) == (undefined *)0x0) {
                    /* try { // try from 007c0f30 to 007c0f47 has its CatchHandler @ 007c0f54 */
                    /* WARNING: Subroutine does not return */
            core::option::expect_failed
                      ("FieldSet corrupted (this is a bug)",0x22,
                       &PTR_s__root__cargo_registry_src_index__00ade0b0);
          }
          uStack_a90 = *(ulong *)(lVar13 + 0x40);
          uStack_a80 = 0;
          uStack_a7f = 0;
          local_300 = (undefined8 *)(lVar13 + 0x30);
          local_aa0 = (undefined1 *)*local_300;
          uStack_a88 = (undefined1)*(undefined8 *)(lVar13 + 0x48);
          uStack_a87 = (undefined7)((ulong)*(undefined8 *)(lVar13 + 0x48) >> 8);
          local_318 = 0x7b;
          local_320 = "http1 handshake complete, spawning background dispatcher task";
          puStack_818 = &local_320;
          local_810 = &DAT_00ade0c8;
          local_310 = SUB86(&local_820,0);
          uStack_30a = (undefined2)((ulong)&local_820 >> 0x30);
          local_308 = 1;
          uStack_302 = 0;
                    /* try { // try from 007c0e64 to 007c0e6b has its CatchHandler @ 007c0f50 */
          puStack_a98 = *(undefined **)(lVar13 + 0x38);
          local_820 = (undefined1 *)&local_aa0;
          <tracing_core::event::tracing_core::event::Event>::dispatch(lVar13,&local_310);
        }
      }
      *(undefined1 *)((long)puVar19 + 0xca) = 0;
      memcpy(&local_aa0,&local_2e0,0x268);
      lVar13 = puVar19[0x16];
      lVar1 = puVar19[0x17];
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      __dest = (void *)FUN_004b25a4(0x268,8);
      if (__dest == (void *)0x0) {
                    /* try { // try from 007c0ea4 to 007c0eaf has its CatchHandler @ 007c1064 */
                    /* WARNING: Subroutine does not return */
        alloc::alloc::handle_alloc_error(8,0x268);
      }
      lVar14 = *(long *)(lVar1 + 0x10);
      memcpy(__dest,&local_2e0,0x268);
                    /* try { // try from 007c0b34 to 007c0b47 has its CatchHandler @ 007c0fd8 */
      (**(code **)(lVar1 + 0x18))
                (lVar13 + (lVar14 - 1U & 0xfffffffffffffff0) + 0x10,__dest,&PTR_FUN_00adce00);
      puVar19[0x1e] = puVar17;
      *(undefined1 *)(puVar19 + 0x1f) = 0;
      puVar19[0x1d] = puVar17;
      goto LAB_007c0b68;
    }
                    /* try { // try from 007c09f8 to 007c0a03 has its CatchHandler @ 007c0fdc */
    <hyper_util::client::legacy::client::[f]::hyper_util::client::legacy::client::Error>::tx
              (&uStack_a80,puVar10);
    puStack_818 = (undefined8 *)CONCAT62(uStack_a76,CONCAT11(cStack_a77,uStack_a78));
    local_820 = (undefined1 *)CONCAT71(uStack_a7f,uStack_a80);
    local_810 = (undefined *)CONCAT62(uStack_a6e,uStack_a70);
    uStack_808 = uStack_a68;
    uStack_7ff = uStack_a5f;
    uStack_7f8 = uStack_a58;
    local_807 = local_a67;
    uStack_800 = uStack_a60;
    local_310 = local_a56;
    uStack_30a = uStack_a50;
    local_308 = uStack_a4e;
    cVar7 = local_a57;
LAB_007c0bf4:
    plVar15 = (long *)puVar19[0x16];
    do {
      lVar13 = *plVar15;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar3) {
        *plVar15 = lVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar13 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 007c0c14 to 007c0c17 has its CatchHandler @ 007c0f98 */
      <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
      drop_slow();
    }
    plVar15 = (long *)puVar19[0x18];
    if (plVar15 != (long *)0x0) {
      do {
        lVar13 = *plVar15;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar3) {
          *plVar15 = lVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar13 + -1 == 0) {
        DataMemoryBarrier(2,1);
                    /* try { // try from 007c0c3c to 007c0c3f has its CatchHandler @ 007c0f5c */
        <alloc[c1f8e832b0d782c7]::sync::Arc<std[17aff9129faa4dc5]::sync::poison::mutex::Mutex<hyper_util[52a210df7efc1bae]::client::legacy::pool::PoolInner<hyper_util[52a210df7efc1bae]::client::legacy::client::PoolClient<reqwest[6fed810f3e38d558]::async_impl::body::Body>,(http[b87e90c26fe47eb4]::uri::scheme::Scheme,http[b87e90c26fe47eb4]::uri::authority::Authority)>>>>
        ::drop_slow();
      }
    }
                    /* try { // try from 007c0c40 to 007c0c47 has its CatchHandler @ 007c0fe4 */
    FUN_007bd334(puVar19 + 0xf);
                    /* try { // try from 007c0c48 to 007c0c4f has its CatchHandler @ 007c1004 */
    FUN_007be2f0(puVar19 + 0xb);
    local_a30 = 2;
    cStack_a77 = cVar7;
  }
  else {
    if (bVar8 == 3) {
      if (*(char *)((long)puVar19 + 0x123) == '\0') goto LAB_007c07c4;
      if (*(char *)((long)puVar19 + 0x123) == '\x01') {
                    /* try { // try from 007c0748 to 007c0753 has its CatchHandler @ 007c104c */
        core::panicking::panic_const::panic_const_async_fn_resumed
                  (&PTR_s__root__cargo_registry_src_index__00ade068);
        goto LAB_007c0f48;
      }
LAB_007c0ee4:
                    /* try { // try from 007c0ee4 to 007c0eef has its CatchHandler @ 007c104c */
      core::panicking::panic_const::panic_const_async_fn_resumed_panic
                (&PTR_s__root__cargo_registry_src_index__00ade068);
LAB_007c0f48:
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x7c0f4c);
      (*pcVar6)();
    }
    bVar8 = *(byte *)(puVar19 + 0x1f);
    if (bVar8 < 2) {
      if (bVar8 != 0) {
                    /* try { // try from 007c0f10 to 007c0f2b has its CatchHandler @ 007c0ffc */
        core::panicking::panic_const::panic_const_async_fn_resumed
                  (&PTR_s__root__cargo_registry_src_index__00ade148);
        goto LAB_007c0f48;
      }
      puVar17 = (uint *)puVar19[0x1d];
      puVar19[0x1e] = puVar17;
    }
    else {
      if (bVar8 != 3) {
        core::panicking::panic_const::panic_const_async_fn_resumed_panic
                  (&PTR_s__root__cargo_registry_src_index__00ade148);
        goto LAB_007c0f48;
      }
      puVar17 = (uint *)puVar19[0x1e];
    }
LAB_007c0b68:
                    /* try { // try from 007c0b68 to 007c0bab has its CatchHandler @ 007c1054 */
    puVar18 = puVar19 + 0x1f;
    cVar7 = <want::[0]::want::Giver>::poll_want(puVar17,param_3);
    if (cVar7 == '\x02') {
      *(undefined1 *)puVar18 = 3;
      uVar12 = 4;
      *(undefined1 *)(param_1 + 0xe) = 0xff;
      goto LAB_007c0db4;
    }
    if (cVar7 == '\0') {
      *(undefined1 *)puVar18 = 1;
    }
    else {
      <hyper::error::hyper::error::Error>::new_closed();
      *(undefined1 *)puVar18 = 1;
                    /* try { // try from 007c0bb4 to 007c0bbb has its CatchHandler @ 007c0fd4 */
      <hyper_util::client::legacy::client::[f]::hyper_util::client::legacy::client::Error>::tx
                (&local_aa0);
      if (cStack_a77 != -1) {
        *(undefined1 *)((long)puVar19 + 0xca) = 0;
        puStack_818 = (undefined8 *)puStack_a98;
        local_820 = local_aa0;
        uStack_808 = uStack_a88;
        local_810 = (undefined *)uStack_a90;
        uStack_7ff = uStack_a7f;
        uStack_7f8 = uStack_a78;
        local_807 = uStack_a87;
        uStack_800 = uStack_a80;
        local_310 = uStack_a76;
        uStack_30a = uStack_a70;
        local_308 = uStack_a6e;
                    /* try { // try from 007c0bec to 007c0bf3 has its CatchHandler @ 007c0f64 */
        FUN_007bce98(puVar19 + 0x1a);
        cVar7 = cStack_a77;
        goto LAB_007c0bf4;
      }
    }
    puStack_818 = (undefined8 *)puVar19[0x1b];
    local_820 = (undefined1 *)puVar19[0x1a];
    local_810 = (undefined *)puVar19[0x1c];
    puStack_2d8 = (undefined *)puVar19[0x10];
    local_2e0 = (char *)puVar19[0xf];
    *(undefined1 *)((long)puVar19 + 0xca) = 0;
    uStack_2c8 = puVar19[0x12];
    local_2d0 = puVar19[0x11];
    uVar16 = puVar19[0x15];
    uStack_7f0 = puVar19[0xe];
    uStack_2b8 = (undefined1)puVar19[0x14];
    uStack_2b7 = (undefined7)((ulong)puVar19[0x14] >> 8);
    local_2c0 = (undefined1)puVar19[0x13];
    uStack_2bf = (undefined7)((ulong)puVar19[0x13] >> 8);
    local_2b0 = (undefined1)uVar16;
    cStack_2af = (char)((ulong)uVar16 >> 8);
    uStack_2ae = (undefined6)((ulong)uVar16 >> 0x10);
    *(undefined2 *)((long)puVar19 + 0xcb) = 0;
    uStack_7f8 = (undefined1)puVar19[0xd];
    uStack_7f7 = (undefined7)((ulong)puVar19[0xd] >> 8);
    uStack_800 = (undefined1)puVar19[0xc];
    uStack_7ff = (undefined7)((ulong)puVar19[0xc] >> 8);
    uStack_808 = (undefined1)puVar19[0xb];
    local_807 = (undefined7)((ulong)puVar19[0xb] >> 8);
                    /* try { // try from 007c0ca0 to 007c0cb3 has its CatchHandler @ 007c0fe0 */
    FUN_007cafb8(&local_aa0,puVar19 + 0x18,&local_2e0,&local_820);
    puStack_818 = (undefined8 *)puStack_a98;
    local_820 = local_aa0;
    uStack_808 = uStack_a88;
    local_810 = (undefined *)uStack_a90;
    puStack_2d8 = (undefined *)CONCAT71(uStack_a5f,uStack_a60);
    local_2e0 = (char *)CONCAT71(local_a67,uStack_a68);
    local_310 = uStack_a76;
    uStack_7ff = uStack_a7f;
    uStack_7f8 = uStack_a78;
    local_807 = uStack_a87;
    uStack_800 = uStack_a80;
    local_2b0 = (undefined1)local_a38;
    cStack_2af = (char)((ulong)local_a38 >> 8);
    uStack_2ae = (undefined6)((ulong)local_a38 >> 0x10);
    uStack_30a = uStack_a70;
    local_308 = uStack_a6e;
    uStack_2b8 = (undefined1)uStack_a40;
    uStack_2b7 = (undefined7)((ulong)uStack_a40 >> 8);
    local_2c0 = (undefined1)local_a48;
    uStack_2bf = (undefined7)((ulong)local_a48 >> 8);
    uStack_2c8 = CONCAT62(uStack_a4e,uStack_a50);
    local_2d0 = CONCAT62(local_a56,CONCAT11(local_a57,uStack_a58));
    plVar15 = (long *)puVar19[0x16];
    local_320 = (char *)CONCAT44(CONCAT13(local_320._7_1_,uStack_a2b),uStack_a2f);
    do {
      lVar13 = *plVar15;
      cVar7 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar3) {
        *plVar15 = lVar13 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar13 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 007c0d2c to 007c0d2f has its CatchHandler @ 007c0f68 */
      <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
      drop_slow();
    }
    plVar15 = (long *)puVar19[0x18];
    if (plVar15 != (long *)0x0) {
      do {
        lVar13 = *plVar15;
        cVar7 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar3) {
          *plVar15 = lVar13 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar13 + -1 == 0) {
        DataMemoryBarrier(2,1);
                    /* try { // try from 007c0d50 to 007c0d57 has its CatchHandler @ 007c1004 */
        <alloc[c1f8e832b0d782c7]::sync::Arc<std[17aff9129faa4dc5]::sync::poison::mutex::Mutex<hyper_util[52a210df7efc1bae]::client::legacy::pool::PoolInner<hyper_util[52a210df7efc1bae]::client::legacy::client::PoolClient<reqwest[6fed810f3e38d558]::async_impl::body::Body>,(http[b87e90c26fe47eb4]::uri::scheme::Scheme,http[b87e90c26fe47eb4]::uri::authority::Authority)>>>>
        ::drop_slow(puVar19 + 0x18);
      }
    }
  }
  *(char *)((long)param_1 + 0x29) = cStack_a77;
  *(ulong *)((long)param_1 + 0x2a) = CONCAT26(uStack_30a,local_310);
  param_1[1] = puStack_818;
  *param_1 = local_820;
  param_1[3] = CONCAT71(local_807,uStack_808);
  param_1[2] = local_810;
  param_1[6] = CONCAT62(local_308,uStack_30a);
  uVar5 = (undefined4)local_320;
  param_1[0xc] = CONCAT71(uStack_2b7,uStack_2b8);
  param_1[0xb] = CONCAT71(uStack_2bf,local_2c0);
  param_1[0xd] = CONCAT62(uStack_2ae,CONCAT11(cStack_2af,local_2b0));
  *(ulong *)((long)param_1 + 0x21) = CONCAT17(uStack_7f8,uStack_7ff);
  *(ulong *)((long)param_1 + 0x19) = CONCAT17(uStack_800,local_807);
  param_1[10] = uStack_2c8;
  param_1[9] = local_2d0;
  param_1[8] = puStack_2d8;
  param_1[7] = local_2e0;
  *(undefined1 *)(param_1 + 0xe) = local_a30;
  *(undefined4 *)((long)param_1 + 0x74) = local_320._3_4_;
  uVar12 = 1;
  *(undefined4 *)((long)param_1 + 0x71) = uVar5;
LAB_007c0db4:
  *(undefined1 *)((long)puVar19 + 0xc9) = uVar12;
  return;
}


// ===== 007c1154  FUN_007c1154 =====

void FUN_007c1154(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long ******pppppplVar9;
  undefined1 uVar10;
  code *pcVar11;
  short *psVar12;
  long *plVar13;
  void *pvVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 *puVar17;
  long ******pppppplVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [12];
  undefined6 uStack_578;
  undefined2 uStack_572;
  long *****local_560;
  long *****ppppplStack_558;
  long *****ppppplStack_550;
  long *****ppppplStack_548;
  long *****local_410;
  undefined8 uStack_408;
  long *****local_400;
  long *****ppppplStack_3f8;
  long *****local_3f0;
  long lStack_3e8;
  long local_3e0;
  long lStack_3d8;
  long local_3d0;
  long lStack_3c8;
  long local_3c0;
  long lStack_3b8;
  long local_3b0;
  long lStack_3a8;
  long local_3a0;
  long *****local_398;
  long *****ppppplStack_390;
  undefined8 *local_388;
  long lStack_380;
  long local_378;
  long lStack_370;
  long local_368;
  long lStack_360;
  long local_358;
  long lStack_350;
  long local_348;
  long lStack_340;
  long *****local_2b0;
  long *****ppppplStack_2a8;
  long *****ppppplStack_2a0;
  long *****ppppplStack_298;
  long *****local_290;
  long *****ppppplStack_288;
  long *****local_280;
  long *****ppppplStack_278;
  long *****local_270;
  long *****local_268;
  long *****local_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long local_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long local_220;
  long lStack_218;
  long local_210;
  long *****ppppplStack_208;
  long *****local_200;
  undefined8 *puStack_1f8;
  long local_1f0;
  long lStack_1e8;
  long local_1e0;
  long lStack_1d8;
  long local_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long local_1b0;
  long *****local_1a0;
  long *****ppppplStack_198;
  undefined8 *local_190;
  long lStack_188;
  long local_180;
  long lStack_178;
  long local_170;
  long lStack_168;
  long local_160;
  long lStack_158;
  long local_150;
  long lStack_148;
  long *****local_140;
  long *****ppppplStack_138;
  long *****local_128;
  long *****local_120;
  long *****ppppplStack_118;
  long *****local_110;
  long *****ppppplStack_108;
  long *****local_100;
  long *****ppppplStack_f8;
  long *****local_f0;
  long *****ppppplStack_e8;
  long *****local_e0;
  long *****ppppplStack_d8;
  long *****ppppplStack_d0;
  long lStack_c8;
  long local_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long local_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long local_80;
  
  puVar3 = PTR_fmt_00b00ef0;
  puVar1 = PTR_MAX_LEVEL_00b00e60;
  plVar13 = (long *)*param_2;
  bVar5 = *(byte *)((long)plVar13 + 0x1b9);
  if (bVar5 < 2) {
    if (bVar5 == 0) {
      *plVar13 = 0;
      lVar7 = plVar13[0x35];
      *(undefined1 *)(plVar13 + 0x37) = 1;
      plVar13[0x33] = plVar13[0x36];
      plVar13[0x32] = lVar7;
      plVar13[0x34] = lVar7;
      psVar12 = *(short **)(lVar7 + 8);
      if (psVar12 != *(short **)(lVar7 + 0x18)) {
        while( true ) {
          *(short **)(lVar7 + 8) = psVar12 + 0x10;
          uVar15 = *(undefined8 *)(psVar12 + 1);
          lVar16 = *(long *)(psVar12 + 0xc);
          lVar7 = *(long *)(psVar12 + 8);
          uStack_578 = (undefined6)*(undefined8 *)(psVar12 + 5);
          uStack_572 = (undefined2)lVar7;
          if (*psVar12 == 2) break;
          pppppplVar18 = (long ******)(plVar13 + 4);
          *(short *)pppppplVar18 = *psVar12;
          *(ulong *)((long)plVar13 + 0x2a) = CONCAT26(uStack_572,uStack_578);
          *(undefined8 *)((long)plVar13 + 0x22) = uVar15;
          plVar13[7] = lVar16;
          plVar13[6] = lVar7;
          puVar2 = PTR___CALLSITE_00b00ee8;
          if (3 < *(long *)puVar1 - 2U) {
            bVar5 = PTR___CALLSITE_00b00ee8[0x10];
            if (2 < bVar5) {
                    /* try { // try from 007c1a9c to 007c1aa7 has its CatchHandler @ 007c1ba0 */
              bVar5 = <tracing_core::callsite::tracing_core::callsite::DefaultCallsite>::register
                                (PTR___CALLSITE_00b00ee8);
            }
                    /* try { // try from 007c1330 to 007c1333 has its CatchHandler @ 007c1ca0 */
            if ((bVar5 != 0) &&
               (uVar6 = tracing::__macro_support::__is_enabled(*(undefined8 *)puVar2),
               (uVar6 & 1) != 0)) {
              lVar7 = *(long *)puVar2;
              if (*(long *******)(lVar7 + 0x38) == (long ******)0x0) {
                    /* try { // try from 007c1b24 to 007c1b3b has its CatchHandler @ 007c1bf8 */
                    /* WARNING: Subroutine does not return */
                core::option::expect_failed
                          ("FieldSet corrupted (this is a bug)",0x22,
                           &PTR_s__root__cargo_registry_src_index__00ade1a8);
              }
              ppppplStack_3f8 = *(long ******)(lVar7 + 0x48);
              local_400 = *(long ******)(lVar7 + 0x40);
              local_3f0 = (long *****)0x0;
              local_e0 = (long *****)(lVar7 + 0x30);
              local_410 = (long *****)*local_e0;
              local_120 = (long *****)&local_1a0;
              ppppplStack_198 = (long *****)puVar3;
              local_128 = (long *****)&DAT_002ad4fb;
              local_280 = (long *****)&local_410;
              ppppplStack_278 = (long *****)&local_128;
              local_270 = (long *****)&DAT_00ade0c8;
              local_f0 = (long *****)&local_280;
              ppppplStack_e8 = (long *****)&DAT_00000001;
                    /* try { // try from 007c13a0 to 007c13a7 has its CatchHandler @ 007c1bfc */
              uStack_408 = *(long *******)(lVar7 + 0x38);
              local_1a0 = (long *****)pppppplVar18;
              <tracing_core::event::tracing_core::event::Event>::dispatch(lVar7,&local_f0);
            }
          }
                    /* try { // try from 007c13b4 to 007c13c3 has its CatchHandler @ 007c1cec */
          hyper_util::client::legacy::connect::http::connect
                    (&local_410,pppppplVar18,plVar13[0x33],*(undefined8 *)(plVar13[0x32] + 0x20),
                     *(undefined4 *)(plVar13[0x32] + 0x28));
          if (((ulong)local_410 & 1) != 0) {
            uVar15 = 1;
            pvVar14 = (void *)*plVar13;
            ppppplStack_558 = local_400;
            local_560 = (long *****)uStack_408;
            ppppplStack_548 = local_3f0;
            ppppplStack_550 = ppppplStack_3f8;
            pppppplVar18 = (long ******)local_400;
            local_410 = (long *****)uStack_408;
            pppppplVar9 = (long ******)local_3f0;
            local_400 = ppppplStack_3f8;
joined_r0x007c1990:
            ppppplStack_3f8 = (long *****)pppppplVar9;
            uStack_408 = pppppplVar18;
            if (pvVar14 != (void *)0x0) {
              if (plVar13[1] != 0) {
                free(pvVar14);
              }
              pvVar14 = (void *)plVar13[2];
              if (pvVar14 != (void *)0x0) {
                puVar17 = (undefined8 *)plVar13[3];
                pcVar11 = (code *)*puVar17;
                if (pcVar11 != (code *)0x0) {
                    /* try { // try from 007c19b8 to 007c19bf has its CatchHandler @ 007c1bbc */
                  (*pcVar11)(pvVar14);
                }
                if (puVar17[1] != 0) {
                  free(pvVar14);
                }
              }
            }
            goto LAB_007c1a10;
          }
          memcpy(&local_560,&uStack_408,0x150);
          memcpy(plVar13 + 8,&local_560,0x150);
          bVar5 = *(byte *)(plVar13 + 0x16);
          if (bVar5 < 3) {
LAB_007c13f8:
            if (bVar5 != 0) {
              if (bVar5 == 1) {
                    /* try { // try from 007c1af4 to 007c1b0f has its CatchHandler @ 007c1ce4 */
                core::panicking::panic_const::panic_const_async_fn_resumed
                          (&PTR_s__root__cargo_registry_src_index__00ade1d8);
              }
              else {
                core::panicking::panic_const::panic_const_async_fn_resumed_panic
                          (&PTR_s__root__cargo_registry_src_index__00ade1d8);
              }
              goto LAB_007c1b94;
            }
            lVar7 = plVar13[9];
            if ((int)lVar7 != -1) {
              lStack_158 = plVar13[0x13];
              local_160 = plVar13[0x12];
              lStack_148 = plVar13[0x15];
              local_150 = plVar13[0x14];
              lVar16 = plVar13[8];
              lStack_178 = plVar13[0xf];
              local_180 = plVar13[0xe];
              lStack_168 = plVar13[0x11];
              local_170 = plVar13[0x10];
              ppppplStack_198 = (long *****)plVar13[0xb];
              local_1a0 = (long *****)plVar13[10];
              lStack_188 = plVar13[0xd];
              local_190 = (undefined8 *)plVar13[0xc];
                    /* try { // try from 007c142c to 007c1463 has its CatchHandler @ 007c1cd0 */
              auVar20 = <tokio::time::instant::tokio::time::instant::Instant>::now();
              local_f0 = auVar20._0_8_;
              ppppplStack_e8 = (long *****)CONCAT44(ppppplStack_e8._4_4_,auVar20._8_4_);
              auVar19 = <tokio::time::instant::tokio::time::instant::Instant>::checked_add
                                  (&local_f0,lVar16,(int)lVar7);
              if (auVar19._8_4_ == -1) {
                    /* try { // try from 007c1594 to 007c159f has its CatchHandler @ 007c1cd0 */
                <tokio::time::sleep::tokio::time::sleep::Sleep>::far_future(&local_f0,0);
              }
              else {
                <tokio::time::sleep::tokio::time::sleep::Sleep>::new_timeout
                          (&local_f0,auVar19._0_8_,auVar19._8_8_,0,
                           &PTR_s__root__cargo_registry_src_index__00ade1c0);
              }
              lStack_370 = lStack_178;
              local_378 = local_180;
              lStack_360 = lStack_168;
              local_368 = local_170;
              lStack_350 = lStack_158;
              local_358 = local_160;
              lStack_340 = lStack_148;
              local_348 = local_150;
              local_3a0 = local_80;
              ppppplStack_390 = ppppplStack_198;
              local_398 = local_1a0;
              lStack_380 = lStack_188;
              local_388 = local_190;
              lStack_3b8 = lStack_98;
              local_3c0 = local_a0;
              lStack_3a8 = lStack_88;
              local_3b0 = lStack_90;
              local_1b0 = lStack_148;
              lStack_3d8 = lStack_b8;
              local_3e0 = local_c0;
              lStack_3c8 = lStack_a8;
              local_3d0 = lStack_b0;
              plVar13[0x31] = lStack_148;
              uStack_408 = (long ******)ppppplStack_e8;
              local_410 = local_f0;
              ppppplStack_3f8 = ppppplStack_d8;
              local_400 = local_e0;
              lStack_3e8 = lStack_c8;
              local_3f0 = ppppplStack_d0;
              ppppplStack_278 = ppppplStack_e8;
              local_280 = local_f0;
              local_268 = ppppplStack_d8;
              local_270 = local_e0;
              lStack_238 = lStack_a8;
              local_240 = lStack_b0;
              lStack_228 = lStack_98;
              lStack_230 = local_a0;
              lStack_258 = lStack_c8;
              local_260 = ppppplStack_d0;
              lStack_248 = lStack_b8;
              lStack_250 = local_c0;
              puStack_1f8 = local_190;
              local_200 = ppppplStack_198;
              lStack_1e8 = local_180;
              local_1f0 = lStack_188;
              lStack_218 = lStack_88;
              local_220 = lStack_90;
              ppppplStack_208 = local_1a0;
              local_210 = local_80;
              lStack_1c8 = local_160;
              local_1d0 = lStack_168;
              lStack_1b8 = local_150;
              lStack_1c0 = lStack_158;
              lStack_1d8 = local_170;
              local_1e0 = lStack_178;
              plVar13[0x2e] = local_160;
              plVar13[0x2d] = lStack_168;
              plVar13[0x30] = local_150;
              plVar13[0x2f] = lStack_158;
              plVar13[0x2a] = local_180;
              plVar13[0x29] = lStack_188;
              plVar13[0x2c] = local_170;
              plVar13[0x2b] = lStack_178;
              plVar13[0x26] = (long)local_1a0;
              plVar13[0x25] = local_80;
              plVar13[0x28] = (long)local_190;
              plVar13[0x27] = (long)ppppplStack_198;
              plVar13[0x1c] = lStack_c8;
              plVar13[0x1b] = (long)ppppplStack_d0;
              plVar13[0x1e] = lStack_b8;
              plVar13[0x1d] = local_c0;
              plVar13[0x20] = lStack_a8;
              plVar13[0x1f] = lStack_b0;
              plVar13[0x22] = lStack_98;
              plVar13[0x21] = local_a0;
              plVar13[0x24] = lStack_88;
              plVar13[0x23] = lStack_90;
              plVar13[0x18] = (long)ppppplStack_e8;
              plVar13[0x17] = (long)local_f0;
              plVar13[0x1a] = (long)ppppplStack_d8;
              plVar13[0x19] = (long)local_e0;
              goto LAB_007c1680;
            }
            plVar13[0x1c] = plVar13[0xf];
            plVar13[0x1b] = plVar13[0xe];
            plVar13[0x1e] = plVar13[0x11];
            plVar13[0x1d] = plVar13[0x10];
            plVar13[0x20] = plVar13[0x13];
            plVar13[0x1f] = plVar13[0x12];
            plVar13[0x22] = plVar13[0x15];
            plVar13[0x21] = plVar13[0x14];
            plVar13[0x18] = plVar13[0xb];
            plVar13[0x17] = plVar13[10];
            plVar13[0x1a] = plVar13[0xd];
            plVar13[0x19] = plVar13[0xc];
            bVar5 = *(byte *)(plVar13 + 0x22);
            if (bVar5 < 2) goto LAB_007c1208;
LAB_007c149c:
            if (bVar5 != 3) {
                    /* try { // try from 007c1b14 to 007c1b1f has its CatchHandler @ 007c1cac */
              core::panicking::panic_const::panic_const_async_fn_resumed_panic
                        (&PTR_s__root__cargo_registry_src_index__00ade100);
LAB_007c1b94:
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x7c1b98);
              (*pcVar11)();
            }
            bVar5 = *(byte *)((long)plVar13 + 0x104);
            if (bVar5 < 2) {
              if (bVar5 != 0) {
                core::panicking::panic_const::panic_const_async_fn_resumed
                          (&PTR_s__root__cargo_registry_src_index__00ade118);
                goto LAB_007c1b94;
              }
              uVar6 = (ulong)*(uint *)(plVar13 + 0x20);
LAB_007c14c0:
                    /* try { // try from 007c14c0 to 007c14c7 has its CatchHandler @ 007c1c48 */
              plVar8 = plVar13 + 0x1b;
              <tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::new(&local_410,uVar6);
              pppppplVar9 = uStack_408;
              if ((long ******)local_410 != (long ******)0x2) {
                plVar13[0x1b] = (long)local_410;
                plVar13[0x1c] = (long)uStack_408;
                plVar13[0x1f] = (long)plVar8;
                ppppplStack_e8 = ppppplStack_3f8;
                local_f0 = local_400;
                plVar13[0x1e] = (long)ppppplStack_3f8;
                plVar13[0x1d] = (long)local_400;
                goto LAB_007c14fc;
              }
LAB_007c1560:
              *(undefined1 *)((long)plVar13 + 0x104) = 1;
              pppppplVar18 = (long ******)0x2;
            }
            else {
              if (bVar5 != 3) {
                    /* try { // try from 007c1b40 to 007c1b5b has its CatchHandler @ 007c1c64 */
                core::panicking::panic_const::panic_const_async_fn_resumed_panic
                          (&PTR_s__root__cargo_registry_src_index__00ade118);
                goto LAB_007c1b94;
              }
              plVar8 = (long *)plVar13[0x1f];
LAB_007c14fc:
                    /* try { // try from 007c14fc to 007c1507 has its CatchHandler @ 007c1c60 */
              <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>
              ::poll_write_ready(&local_410,plVar8,param_3);
              if (uStack_408._1_1_ == -1) {
                *(undefined1 *)((long)plVar13 + 0x104) = 3;
LAB_007c1a7c:
                *(undefined1 *)(plVar13 + 0x22) = 3;
                uVar10 = 4;
                goto LAB_007c1a88;
              }
              pppppplVar9 = (long ******)local_410;
              if (uStack_408._1_1_ == '\x02') {
LAB_007c1540:
                    /* try { // try from 007c1540 to 007c1547 has its CatchHandler @ 007c1c1c */
                FUN_007dfadc(plVar13 + 0x1b);
                if ((int)plVar13[0x1e] != -1) {
                  close((int)plVar13[0x1e]);
                }
                    /* try { // try from 007c1558 to 007c155f has its CatchHandler @ 007c1c18 */
                FUN_007be420(plVar13 + 0x1b);
                goto LAB_007c1560;
              }
              if ((int)plVar13[0x1e] == -1) {
                    /* try { // try from 007c1ac4 to 007c1acf has its CatchHandler @ 007c1cf8 */
                    /* WARNING: Subroutine does not return */
                core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00adfed0);
              }
                    /* try { // try from 007c1530 to 007c1533 has its CatchHandler @ 007c1bec */
              auVar19 = <mio::net::tcp::stream::mio::net::tcp::stream::TcpStream>::take_error();
              pppppplVar9 = auVar19._8_8_;
              if (((auVar19 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (pppppplVar9 != (long ******)0x0)) goto LAB_007c1540;
              pppppplVar18 = (long ******)plVar13[0x1b];
              pppppplVar9 = (long ******)plVar13[0x1c];
              ppppplStack_f8 = (long *****)plVar13[0x1e];
              local_100 = (long *****)plVar13[0x1d];
              *(undefined1 *)((long)plVar13 + 0x104) = 1;
              if (pppppplVar18 == (long ******)0xffffffffffffffff) goto LAB_007c1a7c;
            }
            ppppplStack_198 = ppppplStack_f8;
            local_1a0 = local_100;
                    /* try { // try from 007c1574 to 007c157b has its CatchHandler @ 007c1ca4 */
            FUN_007bdaf0(plVar13 + 0x1b);
LAB_007c157c:
            *(undefined1 *)((long)plVar13 + 0x111) = 0;
            *(undefined1 *)(plVar13 + 0x22) = 1;
            ppppplStack_288 = ppppplStack_198;
            local_290 = local_1a0;
          }
          else {
LAB_007c11f4:
            if (bVar5 != 3) {
              bVar5 = *(byte *)(plVar13 + 0x22);
              if (1 < bVar5) goto LAB_007c149c;
LAB_007c1208:
              if (bVar5 != 0) {
                    /* try { // try from 007c1298 to 007c12a3 has its CatchHandler @ 007c1cac */
                core::panicking::panic_const::panic_const_async_fn_resumed
                          (&PTR_s__root__cargo_registry_src_index__00ade100);
                goto LAB_007c1b94;
              }
              ppppplStack_278 = (long *****)plVar13[0x18];
              local_280 = (long *****)plVar13[0x17];
              local_268 = (long *****)plVar13[0x1a];
              local_270 = (long *****)plVar13[0x19];
              *(undefined1 *)((long)plVar13 + 0x111) = 1;
              *(int *)((long)plVar13 + 0x10c) = (int)plVar13[0x21];
                    /* try { // try from 007c1228 to 007c123f has its CatchHandler @ 007c12c4 */
              <socket2[797b7815e2a0656b]::sockaddr::SockAddr_as_core[bcece726f298455b]::convert::From<core[bcece726f298455b]::net::socket_addr::SocketAddr>>
              ::from(&local_410,&local_280);
              pppppplVar9 = (long ******)
                            <socket2::socket::socket2::socket::Socket>::connect
                                      ((long)plVar13 + 0x10c,&local_410);
              if ((pppppplVar9 == (long ******)0x0) ||
                 (((1 < ((ulong)pppppplVar9 & 3) && (((ulong)pppppplVar9 & 3) != 3)) &&
                  ((ulong)pppppplVar9 >> 0x20 == 0x73)))) {
                *(undefined1 *)((long)plVar13 + 0x111) = 0;
                    /* try { // try from 007c1270 to 007c1273 has its CatchHandler @ 007c12c0 */
                uVar6 = <mio::net::tcp::stream::TcpStream_as_std::os::fd::raw::FromRawFd>::
                        from_raw_fd(*(undefined4 *)((long)plVar13 + 0x10c));
                *(int *)(plVar13 + 0x20) = (int)uVar6;
                *(undefined1 *)((long)plVar13 + 0x104) = 0;
                goto LAB_007c14c0;
              }
              close(*(int *)((long)plVar13 + 0x10c));
              pppppplVar18 = (long ******)0x2;
              goto LAB_007c157c;
            }
LAB_007c1680:
                    /* try { // try from 007c1680 to 007c168f has its CatchHandler @ 007c1cc0 */
            FUN_00773860(&local_410,plVar13 + 0x17,param_3);
            pppppplVar9 = uStack_408;
            pppppplVar18 = (long ******)local_410;
            if (local_410 == (long *****)&DAT_fffffffffffffffe) {
              uVar10 = 3;
LAB_007c1a88:
              *(undefined1 *)(plVar13 + 0x16) = uVar10;
              *param_1 = 2;
              uVar10 = 3;
              goto LAB_007c1a28;
            }
            ppppplStack_138 = ppppplStack_3f8;
            local_140 = local_400;
            if ((char)plVar13[0x31] == '\x03') {
                    /* try { // try from 007c16c4 to 007c16cb has its CatchHandler @ 007c1c00 */
              FUN_007bdaf0(plVar13 + 0x2a);
              *(undefined1 *)((long)plVar13 + 0x189) = 0;
            }
            else if ((char)plVar13[0x31] == '\0') {
              close((int)plVar13[0x30]);
            }
                    /* try { // try from 007c16d0 to 007c16d7 has its CatchHandler @ 007c1cb8 */
            FUN_007bdfdc(plVar13 + 0x17);
            if (pppppplVar18 == (long ******)0xffffffffffffffff) {
              pppppplVar18 = (long ******)0x2;
                    /* try { // try from 007c16f0 to 007c16fb has its CatchHandler @ 007c1c44 */
              pppppplVar9 = (long ******)
                            <alloc::io::error::core::io::error::Error>::
                            new<tokio::time::error::Elapsed>(0x16);
            }
            else {
              ppppplStack_288 = ppppplStack_138;
              local_290 = local_140;
            }
          }
          if (pppppplVar18 == (long ******)0x2) {
                    /* try { // try from 007c1708 to 007c171f has its CatchHandler @ 007c1cb4 */
            FUN_007b43bc(&local_120,"tcp connect error",0x11,pppppplVar9);
          }
          else {
            ppppplStack_108 = ppppplStack_288;
            local_110 = local_290;
            local_120 = (long *****)pppppplVar18;
            ppppplStack_118 = (long *****)pppppplVar9;
          }
          *(undefined1 *)(plVar13 + 0x16) = 1;
          ppppplStack_2a8 = ppppplStack_118;
          local_2b0 = local_120;
          ppppplStack_298 = ppppplStack_108;
          ppppplStack_2a0 = local_110;
                    /* try { // try from 007c1744 to 007c174b has its CatchHandler @ 007c1cf0 */
          FUN_007bdb80(plVar13 + 8);
          puVar4 = PTR___CALLSITE_00b00f08;
          puVar2 = PTR___CALLSITE_00b00ef8;
          if (pppppplVar18 != (long ******)0x2) {
            ppppplStack_278 = ppppplStack_2a8;
            local_280 = local_2b0;
            local_268 = ppppplStack_298;
            local_270 = ppppplStack_2a0;
            if (3 < *(long *)puVar1 - 2U) {
              bVar5 = PTR___CALLSITE_00b00f08[0x10];
              if (2 < bVar5) {
                    /* try { // try from 007c1ad4 to 007c1adf has its CatchHandler @ 007c1b98 */
                bVar5 = <tracing_core::callsite::tracing_core::callsite::DefaultCallsite>::register
                                  (PTR___CALLSITE_00b00f08);
              }
                    /* try { // try from 007c18e8 to 007c18eb has its CatchHandler @ 007c1bac */
              if ((bVar5 != 0) &&
                 (uVar6 = tracing::__macro_support::__is_enabled(*(undefined8 *)puVar4),
                 (uVar6 & 1) != 0)) {
                lVar7 = *(long *)puVar4;
                if (*(long *)(lVar7 + 0x38) == 0) {
                    /* try { // try from 007c1b7c to 007c1b93 has its CatchHandler @ 007c1ba8 */
                    /* WARNING: Subroutine does not return */
                  core::option::expect_failed
                            ("FieldSet corrupted (this is a bug)",0x22,
                             &PTR_s__root__cargo_registry_src_index__00ade178);
                }
                ppppplStack_3f8 = *(long ******)(lVar7 + 0x48);
                local_400 = *(long ******)(lVar7 + 0x40);
                local_3f0 = (long *****)0x0;
                local_190 = (undefined8 *)(lVar7 + 0x30);
                local_410 = (long *****)*local_190;
                local_128 = (long *****)(plVar13 + 4);
                local_120 = (long *****)puVar3;
                ppppplStack_f8 = (long *****)&local_128;
                local_100 = (long *****)&DAT_002a6866;
                local_f0 = (long *****)&local_410;
                ppppplStack_e8 = (long *****)&local_100;
                local_e0 = (long *****)&DAT_00ade0c8;
                local_1a0 = (long *****)&local_f0;
                ppppplStack_198 = (long *****)&DAT_00000001;
                    /* try { // try from 007c1958 to 007c195f has its CatchHandler @ 007c1ba4 */
                uStack_408 = (long ******)*(long *)(lVar7 + 0x38);
                <tracing_core::event::tracing_core::event::Event>::dispatch(lVar7,&local_1a0);
              }
            }
            uVar15 = 0;
            pvVar14 = (void *)*plVar13;
            pppppplVar18 = (long ******)ppppplStack_278;
            local_410 = local_280;
            pppppplVar9 = (long ******)local_268;
            local_400 = local_270;
            goto joined_r0x007c1990;
          }
          ppppplStack_e8 = ppppplStack_2a8;
          local_f0 = local_2b0;
          ppppplStack_d8 = ppppplStack_298;
          local_e0 = ppppplStack_2a0;
          if (*(long *)puVar1 == 0) {
            bVar5 = PTR___CALLSITE_00b00ef8[0x10];
            if (2 < bVar5) {
                    /* try { // try from 007c1ab0 to 007c1abb has its CatchHandler @ 007c1b9c */
              bVar5 = <tracing_core::callsite::tracing_core::callsite::DefaultCallsite>::register
                                (PTR___CALLSITE_00b00ef8);
            }
                    /* try { // try from 007c1820 to 007c1823 has its CatchHandler @ 007c1c50 */
            if ((bVar5 != 0) &&
               (uVar6 = tracing::__macro_support::__is_enabled(*(undefined8 *)puVar2),
               (uVar6 & 1) != 0)) {
              lVar7 = *(long *)puVar2;
              if (*(long *)(lVar7 + 0x38) == 0) {
                    /* try { // try from 007c1b60 to 007c1b77 has its CatchHandler @ 007c1bf0 */
                    /* WARNING: Subroutine does not return */
                core::option::expect_failed
                          ("FieldSet corrupted (this is a bug)",0x22,
                           &PTR_s__root__cargo_registry_src_index__00ade190);
              }
              ppppplStack_3f8 = *(long ******)(lVar7 + 0x48);
              local_400 = *(long ******)(lVar7 + 0x40);
              local_3f0 = (long *****)0x0;
              ppppplStack_118 = (long *****)(lVar7 + 0x30);
              local_410 = (long *****)*ppppplStack_118;
              ppppplStack_278 = (long *****)puVar3;
              local_280 = (long *****)(plVar13 + 4);
              local_270 = (long *****)&local_f0;
              local_268 = (long *****)PTR_fmt_00b00f00;
              ppppplStack_f8 = (long *****)&local_280;
              local_100 = (long *****)&DAT_002a6876;
              local_1a0 = (long *****)&local_410;
              ppppplStack_198 = (long *****)&local_100;
              local_190 = (undefined8 *)&DAT_00ade0c8;
              local_128 = (long *****)&local_1a0;
              local_120 = (long *****)&DAT_00000001;
                    /* try { // try from 007c18a8 to 007c18af has its CatchHandler @ 007c1bf4 */
              uStack_408 = (long ******)*(long *)(lVar7 + 0x38);
              <tracing_core::event::tracing_core::event::Event>::dispatch(lVar7,&local_128);
            }
          }
          uStack_408 = (long ******)ppppplStack_e8;
          local_410 = local_f0;
          ppppplStack_3f8 = ppppplStack_d8;
          local_400 = local_e0;
          if ((void *)*plVar13 != (void *)0x0) {
            if (plVar13[1] != 0) {
              free((void *)*plVar13);
            }
            pvVar14 = (void *)plVar13[2];
            if (pvVar14 != (void *)0x0) {
              puVar17 = (undefined8 *)plVar13[3];
              pcVar11 = (code *)*puVar17;
              if (pcVar11 != (code *)0x0) {
                    /* try { // try from 007c1798 to 007c179f has its CatchHandler @ 007c1c6c */
                (*pcVar11)(pvVar14);
              }
              if (puVar17[1] != 0) {
                free(pvVar14);
              }
            }
          }
          *(undefined1 *)(plVar13 + 0x37) = 1;
          lVar7 = plVar13[0x34];
          plVar13[1] = (long)uStack_408;
          *plVar13 = (long)local_410;
          plVar13[3] = (long)ppppplStack_3f8;
          plVar13[2] = (long)local_400;
          psVar12 = *(short **)(lVar7 + 8);
          if (psVar12 == *(short **)(lVar7 + 0x18)) break;
        }
      }
      if (*plVar13 == 0) {
                    /* try { // try from 007c19d8 to 007c19eb has its CatchHandler @ 007c1be8 */
        uVar15 = <alloc::io::error::core::io::error::Error>::new<&str>(7,"Network unreachable",0x13)
        ;
                    /* try { // try from 007c19ec to 007c1a03 has its CatchHandler @ 007c1be4 */
        FUN_007b43bc(&local_280,"tcp connect error",0x11,uVar15);
        uVar15 = 1;
        uStack_408 = (long ******)ppppplStack_278;
        local_410 = local_280;
        ppppplStack_3f8 = local_268;
        local_400 = local_270;
      }
      else {
        uStack_408 = (long ******)plVar13[1];
        local_410 = (long *****)*plVar13;
        *(undefined1 *)(plVar13 + 0x37) = 0;
        uVar15 = 1;
        ppppplStack_3f8 = (long *****)plVar13[3];
        local_400 = (long *****)plVar13[2];
      }
LAB_007c1a10:
      uVar10 = 1;
      *(undefined1 *)(plVar13 + 0x37) = 0;
      *param_1 = uVar15;
      param_1[2] = uStack_408;
      param_1[1] = local_410;
      param_1[4] = ppppplStack_3f8;
      param_1[3] = local_400;
LAB_007c1a28:
      *(undefined1 *)((long)plVar13 + 0x1b9) = uVar10;
      return;
    }
    core::panicking::panic_const::panic_const_async_fn_resumed
              (&PTR_s__root__cargo_registry_src_index__00ade160);
  }
  else if (bVar5 == 3) {
    bVar5 = *(byte *)(plVar13 + 0x16);
    if (bVar5 < 3) goto LAB_007c13f8;
    goto LAB_007c11f4;
  }
  uVar15 = core::panicking::panic_const::panic_const_async_fn_resumed_panic
                     (&PTR_s__root__cargo_registry_src_index__00ade160);
                    /* catch() { ... } // from try @ 007c1574 with catch @ 007c1ca4 */
                    /* catch() { ... } // from try @ 007c1270 with catch @ 007c12c0 */
  if ((*(byte *)((long)plVar13 + 0x111) & 1) != 0) {
    close(*(int *)((long)plVar13 + 0x10c));
  }
  *(undefined2 *)(plVar13 + 0x22) = 2;
                    /* try { // try from 007c1d2c to 007c1d33 has its CatchHandler @ 007c1d74 */
  FUN_007bdaa0(plVar13 + 0x17);
  *(undefined1 *)(plVar13 + 0x16) = 2;
                    /* try { // try from 007c1d3c to 007c1d5f has its CatchHandler @ 007c1d70 */
  FUN_007bdb80(plVar13 + 8);
  if ((*plVar13 != 0) && ((char)plVar13[0x37] == '\x01')) {
    FUN_007be8bc(plVar13);
  }
  *(undefined2 *)(plVar13 + 0x37) = 0x200;
                    /* WARNING: Subroutine does not return */
  FUN_00ab2530(uVar15);
}


// ===== 007c1d80  FUN_007c1d80 =====

undefined8 FUN_007c1d80(long param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  if (((uVar1 != 0) && (param_3 != 0)) && (uVar2 = *(ulong *)(param_1 + 0x10), uVar2 != 0)) {
    if (uVar2 <= uVar1) {
      uVar1 = uVar2;
    }
    *param_2 = *(undefined8 *)(param_1 + 8);
    param_2[1] = uVar1;
    return 1;
  }
  return 0;
}


// ===== 007c1db4  FUN_007c1db4 =====

undefined ** FUN_007c1db4(void *param_1,undefined1 *param_2,ulong param_3)

{
  long lVar1;
  undefined1 *puVar2;
  ulong uVar3;
  ulong __n;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  
  if (param_3 != 0) {
    do {
      plVar4 = *(long **)((long)param_1 + 0x400);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::panicking::begin_panic<&str>
                  ("Cannot write more after calling finish()",0x28,
                   &PTR_s__root__cargo_registry_src_index__00ade2d0);
      }
      uVar3 = *(ulong *)((long)param_1 + 0x410);
      if (uVar3 != 0) {
        *(undefined1 *)((long)param_1 + 0x423) = 1;
        if (uVar3 < 0x401) {
          lVar6 = plVar4[2];
          if ((ulong)(*plVar4 - lVar6) < uVar3) {
            FUN_0079be54(plVar4,lVar6,uVar3,1,1);
            lVar6 = plVar4[2];
          }
          memcpy((void *)(plVar4[1] + lVar6),param_1,uVar3);
          lVar6 = plVar4[2];
          *(undefined1 *)((long)param_1 + 0x423) = 0;
          *(undefined8 *)((long)param_1 + 0x410) = 0;
          plVar4[2] = lVar6 + uVar3;
          return &PTR_s_failed_to_write_whole_buffer_00ade348;
        }
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (0,uVar3,0x400,&PTR_s__root__cargo_registry_src_index__00ade208);
      }
      uVar3 = *(ulong *)((long)param_1 + 0x408);
      if (uVar3 == 0) {
        if (2 < param_3) {
          lVar6 = 0;
          __n = 0;
          uVar3 = 0x300;
          puVar2 = param_2;
          uVar5 = param_3;
          goto LAB_007c1ec0;
        }
        memcpy((void *)((long)param_1 + 0x420),param_2,param_3);
        *(ulong *)((long)param_1 + 0x408) = param_3;
        uVar3 = param_3;
      }
      else if (uVar3 + param_3 < 3) {
        if (2 < uVar3) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check
                    (uVar3,3,&PTR_s__root__cargo_registry_src_index__00ade288);
        }
        *(undefined1 *)((long)param_1 + uVar3 + 0x420) = *param_2;
        *(ulong *)((long)param_1 + 0x408) = uVar3 + 1;
        uVar3 = 1;
      }
      else {
        if (3 < uVar3) {
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (uVar3,3,3,&PTR_s__root__cargo_registry_src_index__00ade2b8);
        }
        __n = 3 - uVar3;
        if (param_3 < __n) {
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (0,__n,param_3,&PTR_s__root__cargo_registry_src_index__00ade2a0);
        }
        memcpy((void *)((long)param_1 + uVar3 + 0x420),param_2,__n);
        <base64::engine::general_purpose::GeneralPurpose_as_base64::engine::Engine>::internal_encode
                  (*(undefined8 *)((long)param_1 + 0x418),(long)param_1 + 0x420,3,param_1,0x400);
        uVar3 = 0x2fd;
        lVar6 = 4;
        *(undefined8 *)((long)param_1 + 0x408) = 0;
        puVar2 = param_2 + __n;
        uVar5 = param_3 - __n;
LAB_007c1ec0:
        uVar5 = (uVar5 / 3) * 3;
        if (uVar5 <= uVar3) {
          uVar3 = uVar5;
        }
        lVar1 = <base64::engine::general_purpose::GeneralPurpose_as_base64::engine::Engine>::
                internal_encode(*(undefined8 *)((long)param_1 + 0x418),puVar2,uVar3,
                                (long)param_1 + lVar6,0x400 - lVar6);
        plVar4 = *(long **)((long)param_1 + 0x400);
        *(undefined1 *)((long)param_1 + 0x423) = 1;
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          core::option::expect_failed
                    ("Writer must be present",0x16,&PTR_s__root__cargo_registry_src_index__00ade1f0)
          ;
        }
        uVar5 = lVar1 + lVar6;
        if (0x400 < uVar5) {
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (0,uVar5,0x400,&PTR_s__root__cargo_registry_src_index__00ade208);
        }
        lVar6 = plVar4[2];
        if ((ulong)(*plVar4 - lVar6) < uVar5) {
          FUN_0079be54(plVar4,lVar6,uVar5,1,1);
          lVar6 = plVar4[2];
LAB_007c1f24:
          memcpy((void *)(plVar4[1] + lVar6),param_1,uVar5);
          lVar6 = plVar4[2];
        }
        else if (uVar5 != 0) goto LAB_007c1f24;
        *(undefined1 *)((long)param_1 + 0x423) = 0;
        plVar4[2] = lVar6 + uVar5;
        *(undefined8 *)((long)param_1 + 0x410) = 0;
        uVar3 = uVar3 + __n;
      }
      if (uVar3 == 0) {
        return &PTR_s_failed_to_write_whole_buffer_00ade348;
      }
      uVar5 = param_3 - uVar3;
      if (param_3 < uVar3) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (uVar3,param_3,param_3,&PTR_s__nix_store_8006w282fgsx3273c878b_00ade360);
      }
      param_2 = param_2 + uVar3;
      param_3 = uVar5;
    } while (uVar5 != 0);
  }
  return (undefined **)0x0;
}


// ===== 007c20d0  FUN_007c20d0 =====

ulong FUN_007c20d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_40;
  ulong local_38;
  undefined1 local_30;
  long local_28;
  
  local_38 = 0;
  local_40 = param_1;
                    /* try { // try from 007c20ec to 007c20fb has its CatchHandler @ 007c2180 */
  iVar1 = core::fmt::write(&local_40,&PTR_FUN_00ade038,param_2,param_3);
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
                    /* try { // try from 007c2164 to 007c217b has its CatchHandler @ 007c2180 */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              ("a formatting trait implementation returned an error when the underlying stream did not"
               ,0xad,&PTR_s__nix_store_8006w282fgsx3273c878b_00addff0);
  }
  return local_38;
}


// ===== 007c2198  FUN_007c2198 =====

bool FUN_007c2198(undefined8 *param_1,uint param_2)

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
    lVar3 = FUN_007af310(*param_1,&local_34,1);
    if (lVar3 != 0) goto LAB_007c22a0;
    lVar3 = 0;
  }
  else {
    uVar2 = (undefined1)param_2;
    if (param_2 < 0x800) {
      local_34 = (CONCAT11(uVar2,(char)(param_2 >> 6)) & 0x3fff | 0x8000) | 0xc0;
      lVar3 = FUN_007af310(*param_1,&local_34,2);
      if (lVar3 != 0) {
LAB_007c22a0:
        uVar4 = param_1[1];
        if (((uVar4 != 0) && (1 < (uVar4 & 3) - 2)) && ((uVar4 & 3) != 0)) {
          local_28 = uVar4 - 1;
          local_30 = 3;
                    /* try { // try from 007c22d0 to 007c22d7 has its CatchHandler @ 007c22f4 */
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
        lVar3 = FUN_007af310(*param_1,&local_34,3);
      }
      else {
        local_34 = CONCAT31(CONCAT21(CONCAT11(uVar2,bVar1),(char)(param_2 >> 0xc)),
                            (char)(param_2 >> 0x12)) & 0x3f3f3fff | 0x808080f0;
        lVar3 = FUN_007af310(*param_1,&local_34,4);
      }
      if (lVar3 != 0) goto LAB_007c22a0;
    }
  }
  return lVar3 != 0;
}


// ===== 007c22fc  FUN_007c22fc =====

void FUN_007c22fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  core::fmt::write(param_1,&PTR_FUN_00addfc0,param_2,param_3);
  return;
}


// ===== 007c2310  FUN_007c2310 =====

bool FUN_007c2310(undefined8 *param_1,uint param_2)

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
    lVar3 = FUN_007af7b0(*param_1,&local_34,1);
    if (lVar3 != 0) goto LAB_007c2418;
    lVar3 = 0;
  }
  else {
    uVar2 = (undefined1)param_2;
    if (param_2 < 0x800) {
      local_34 = (CONCAT11(uVar2,(char)(param_2 >> 6)) & 0x3fff | 0x8000) | 0xc0;
      lVar3 = FUN_007af7b0(*param_1,&local_34,2);
      if (lVar3 != 0) {
LAB_007c2418:
        uVar4 = param_1[1];
        if (((uVar4 != 0) && (1 < (uVar4 & 3) - 2)) && ((uVar4 & 3) != 0)) {
          local_28 = uVar4 - 1;
          local_30 = 3;
                    /* try { // try from 007c2448 to 007c244f has its CatchHandler @ 007c246c */
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
        lVar3 = FUN_007af7b0(*param_1,&local_34,3);
      }
      else {
        local_34 = CONCAT31(CONCAT21(CONCAT11(uVar2,bVar1),(char)(param_2 >> 0xc)),
                            (char)(param_2 >> 0x12)) & 0x3f3f3fff | 0x808080f0;
        lVar3 = FUN_007af7b0(*param_1,&local_34,4);
      }
      if (lVar3 != 0) goto LAB_007c2418;
    }
  }
  return lVar3 != 0;
}


// ===== 007c2474  FUN_007c2474 =====

void FUN_007c2474(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  core::fmt::write(param_1,&PTR_FUN_00ade008,param_2,param_3);
  return;
}


// ===== 007c2488  FUN_007c2488 =====

bool FUN_007c2488(undefined8 *param_1,uint param_2)

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
    lVar3 = FUN_007c1db4(*param_1,&local_34,1);
    if (lVar3 != 0) goto LAB_007c2590;
    lVar3 = 0;
  }
  else {
    uVar2 = (undefined1)param_2;
    if (param_2 < 0x800) {
      local_34 = (CONCAT11(uVar2,(char)(param_2 >> 6)) & 0x3fff | 0x8000) | 0xc0;
      lVar3 = FUN_007c1db4(*param_1,&local_34,2);
      if (lVar3 != 0) {
LAB_007c2590:
        uVar4 = param_1[1];
        if (((uVar4 != 0) && (1 < (uVar4 & 3) - 2)) && ((uVar4 & 3) != 0)) {
          local_28 = uVar4 - 1;
          local_30 = 3;
                    /* try { // try from 007c25c0 to 007c25c7 has its CatchHandler @ 007c25e4 */
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
        lVar3 = FUN_007c1db4(*param_1,&local_34,3);
      }
      else {
        local_34 = CONCAT31(CONCAT21(CONCAT11(uVar2,bVar1),(char)(param_2 >> 0xc)),
                            (char)(param_2 >> 0x12)) & 0x3f3f3fff | 0x808080f0;
        lVar3 = FUN_007c1db4(*param_1,&local_34,4);
      }
      if (lVar3 != 0) goto LAB_007c2590;
    }
  }
  return lVar3 != 0;
}


// ===== 007c25ec  FUN_007c25ec =====

void FUN_007c25ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  core::fmt::write(param_1,&PTR_FUN_00ade038,param_2,param_3);
  return;
}


// ===== 007c2600  FUN_007c2600 =====

void FUN_007c2600(void *param_1,undefined8 *param_2)

{
  byte bVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined **local_168;
  undefined8 uStack_160;
  undefined ***local_158;
  undefined ***pppuStack_150;
  undefined8 local_148;
  undefined1 auStack_138 [256];
  long local_38;
  
  local_168 = &PTR_FUN_00ade238;
  uStack_160 = 0;
  bVar1 = *(byte *)(param_2 + 2);
  local_158 = &local_168;
  local_148 = 0;
  pppuStack_150 = local_158;
  if (bVar1 < 2) {
    if (bVar1 != 0) {
                    /* try { // try from 007c269c to 007c26b7 has its CatchHandler @ 007c26c0 */
      core::panicking::panic_const::panic_const_async_fn_resumed
                (&PTR_s__root__cargo_registry_src_index__00ade130);
LAB_007c26b8:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x7c26bc);
      (*pcVar2)();
    }
    uVar3 = *param_2;
  }
  else {
    if (bVar1 != 3) {
      core::panicking::panic_const::panic_const_async_fn_resumed_panic
                (&PTR_s__root__cargo_registry_src_index__00ade130);
      goto LAB_007c26b8;
    }
    uVar3 = param_2[1];
  }
                    /* try { // try from 007c2650 to 007c265b has its CatchHandler @ 007c26bc */
  FUN_0079d0a0(auStack_138,uVar3,&local_158);
  if (local_38 == -2) {
    *(undefined8 *)((long)param_1 + 0x100) = 0xfffffffffffffffe;
  }
  else {
    memcpy(param_1,auStack_138,0x118);
  }
  (*(code *)local_168[3])(uStack_160);
  return;
}


// ===== 007c26dc  FUN_007c26dc =====

undefined ** FUN_007c26dc(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined **ppuVar3;
  char *pcVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  long local_58;
  
  pcVar4 = "fatal runtime er";
  ppuVar5 = (undefined **)0x3d;
  do {
    auVar8 = <std::sys::stdio::unix::Stderr_as_core::io::write::Write>::write
                       (param_1,pcVar4,ppuVar5);
    ppuVar3 = auVar8._8_8_;
    if (auVar8._0_8_ == 1) {
      ppuVar6 = ppuVar5;
      if (((ulong)ppuVar3 & 3) < 2) {
        if ((auVar8 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
          if (*(char *)(ppuVar3 + 2) != '#') {
            return ppuVar3;
          }
        }
        else {
          if (*(char *)((long)ppuVar3 + 0x1f) != '#') {
            return ppuVar3;
          }
          local_58 = (long)ppuVar3 - 1;
          <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_58);
        }
      }
      else if (((ulong)ppuVar3 & 3) == 2) {
                    /* try { // try from 007c27a0 to 007c27b3 has its CatchHandler @ 007c281c */
        lVar2 = core::io::error::os_functions::get_os_functions();
        iVar1 = (**(code **)(lVar2 + 0x10))((ulong)ppuVar3 >> 0x20);
        if (iVar1 == 0) {
          return ppuVar3;
        }
      }
      else {
        uVar7 = auVar8._12_4_ & 0xff;
        if (10 < (ulong)ppuVar3 >> 0x22) {
          uVar7 = 0xff;
        }
        if (uVar7 != 0x23) {
          return ppuVar3;
        }
      }
    }
    else {
      if (ppuVar3 == (undefined **)0x0) {
        return &PTR_s_failed_to_write_whole_buffer_00ade348;
      }
      ppuVar6 = (undefined **)((long)ppuVar5 - (long)ppuVar3);
      if (ppuVar5 < ppuVar3) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (ppuVar3,ppuVar5,ppuVar5,&PTR_s__nix_store_8006w282fgsx3273c878b_00ade360);
      }
      pcVar4 = pcVar4 + (long)ppuVar3;
    }
    ppuVar5 = ppuVar6;
    if (ppuVar6 == (undefined **)0x0) {
      return (undefined **)0x0;
    }
  } while( true );
}


// ===== 007c2834  <core[bcece726f298455b]::io::error::Error>::new::<core[bcece726f298455b]::io::error::Error> =====

/* <core[bcece726f298455b]::io::error::Error>::new::<core[bcece726f298455b]::io::error::Error> */

void <core[bcece726f298455b]::io::error::Error>::new::<core[bcece726f298455b]::io::error::Error>
               (undefined4 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)FUN_004b25a4(8,8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
    alloc::io::error::custom_owner_from_box(param_1,puVar1,&PTR_FUN_00adee50);
    <core::io::error::repr::[0]::core::io::error::repr::Repr>::new_custom();
    return;
  }
                    /* try { // try from 007c288c to 007c2897 has its CatchHandler @ 007c289c */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,8);
}


// ===== 007c28b4  <alloc::io::error::core::io::error::Error>::new<rustls::error::Error> =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::io::error::core::io::error::Error>::new<rustls::error::Error> */

void __rustcall
<alloc::io::error::core::io::error::Error>::new<rustls::error::Error>
          (undefined4 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)FUN_004b25a4(0x38,8);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = *param_2;
    uVar5 = param_2[3];
    uVar4 = param_2[2];
    uVar7 = param_2[5];
    uVar6 = param_2[4];
    uVar2 = param_2[6];
    puVar1[1] = param_2[1];
    *puVar1 = uVar3;
    puVar1[3] = uVar5;
    puVar1[2] = uVar4;
    puVar1[5] = uVar7;
    puVar1[4] = uVar6;
    puVar1[6] = uVar2;
    alloc::io::error::custom_owner_from_box(param_1,puVar1,&PTR_FUN_00adebf8);
    <core::io::error::repr::[0]::core::io::error::repr::Repr>::new_custom();
    return;
  }
                    /* try { // try from 007c2914 to 007c291f has its CatchHandler @ 007c2924 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x38);
}


// ===== 007c293c  <alloc::io::error::core::io::error::Error>::new<tokio::time::error::Elapsed> =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::io::error::core::io::error::Error>::new<tokio::time::error::Elapsed> */

void __rustcall
<alloc::io::error::core::io::error::Error>::new<tokio::time::error::Elapsed>(undefined8 param_1)

{
  alloc::io::error::custom_owner_from_box(param_1,1,&DAT_00adeec8);
  <core::io::error::repr::[0]::core::io::error::repr::Repr>::new_custom();
  return;
}


// ===== 007c295c  <alloc::io::error::core::io::error::Error>::new<hyper::proto::h1::decode::IncompleteBody> =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::io::error::core::io::error::Error>::new<hyper::proto::h1::decode::IncompleteBody> */

void __rustcall
<alloc::io::error::core::io::error::Error>::new<hyper::proto::h1::decode::IncompleteBody>
          (undefined8 param_1)

{
  alloc::io::error::custom_owner_from_box(param_1,1,&DAT_00adf030);
  <core::io::error::repr::[0]::core::io::error::repr::Repr>::new_custom();
  return;
}


// ===== 007c297c  FUN_007c297c =====

void FUN_007c297c(long *param_1,long *param_2,long *param_3)

{
  ushort *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ushort uVar5;
  ushort uVar6;
  long lVar7;
  ushort uVar8;
  int iVar9;
  void *__s2;
  size_t sVar10;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  
                    /* try { // try from 007c29a8 to 007c29af has its CatchHandler @ 007c2bb4 */
  iVar9 = FUN_007c545c(param_2);
  if (iVar9 == 0) {
    uVar8 = FUN_007c4738(param_2,param_3);
    uVar5 = *(ushort *)(param_2 + 0xb);
    lVar12 = param_2[9];
    uVar3 = param_2[10];
    lVar17 = param_2[4];
    uVar4 = param_2[5];
    lVar2 = *param_3;
    __s2 = (void *)param_3[1];
    lVar7 = param_3[1];
    uVar16 = 0;
    uVar13 = (ulong)(uVar5 & uVar8);
    sVar10 = param_3[2];
    do {
      if ((uVar3 <= uVar13) && (uVar13 = 0, uVar3 == 0)) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      puVar1 = (ushort *)(lVar12 + uVar13 * 4);
      uVar15 = (ulong)*puVar1;
      if ((uVar15 == 0xffff) ||
         (uVar6 = puVar1[1], ((ulong)((int)uVar13 - (uint)(uVar6 & uVar5)) & (ulong)uVar5) < uVar16)
         ) {
        lVar12 = *param_2;
        lVar17 = param_3[3];
        sVar10 = param_3[2];
        *param_1 = (long)param_2;
        param_1[1] = lVar2;
        uVar11 = 0x1ff < uVar16 && lVar12 != 2;
        param_1[2] = (long)__s2;
        param_1[4] = lVar17;
        param_1[3] = sVar10;
        param_1[5] = uVar13;
        *(ushort *)(param_1 + 6) = uVar8;
LAB_007c2b60:
        *(undefined1 *)((long)param_1 + 0x32) = uVar11;
        return;
      }
      if (uVar6 == uVar8) {
        if (uVar4 <= uVar15) {
                    /* try { // try from 007c2b98 to 007c2baf has its CatchHandler @ 007c2bb4 */
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check
                    (uVar15,uVar4,&PTR_s__root__cargo_registry_src_index__00ade378);
        }
        lVar14 = lVar17 + uVar15 * 0x68;
        if ((lVar2 == 0) != (*(long *)(lVar14 + 0x40) != 0)) {
          if (*(long *)(lVar14 + 0x40) == 0) {
            if (*(char *)(lVar14 + 0x48) == (char)lVar7) {
              uVar11 = 2;
              *param_1 = (long)param_2;
              param_1[1] = uVar13;
              param_1[2] = uVar15;
              goto LAB_007c2b60;
            }
          }
          else if ((*(size_t *)(lVar14 + 0x50) == sVar10) &&
                  (iVar9 = memcmp(*(void **)(lVar14 + 0x48),__s2,sVar10), iVar9 == 0))
          goto code_r0x007c2b04;
        }
      }
      uVar16 = uVar16 + 1;
      uVar13 = uVar13 + 1;
    } while( true );
  }
  lVar12 = *param_3;
  *(undefined1 *)((long)param_1 + 0x32) = 0xff;
  if (lVar12 == 0) {
    return;
  }
  __s2 = (void *)param_3[1];
  sVar10 = param_3[2];
  UNRECOVERED_JUMPTABLE = *(code **)(lVar12 + 0x20);
LAB_007c29d0:
                    /* WARNING: Could not recover jumptable at 0x007c29ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_3 + 3,__s2,sVar10);
  return;
code_r0x007c2b04:
  UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 0x20);
  *param_1 = (long)param_2;
  param_1[1] = uVar13;
  param_1[2] = uVar15;
  *(undefined1 *)((long)param_1 + 0x32) = 2;
  goto LAB_007c29d0;
}


// ===== 007c2bdc  FUN_007c2bdc =====

void FUN_007c2bdc(long *param_1,long *param_2,long *param_3)

{
  ushort *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined1 uVar13;
  ulong uVar14;
  long *local_98 [3];
  long local_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  local_98[0] = param_3;
  uVar10 = FUN_007c545c();
  if ((uVar10 & 1) == 0) {
    uVar8 = FUN_007c4ba0(param_2,local_98);
    uVar6 = *(ushort *)(param_2 + 0xb);
    lVar2 = param_2[9];
    uVar4 = param_2[10];
    lVar3 = param_2[4];
    uVar5 = param_2[5];
    uVar10 = 0;
    uVar11 = (ulong)(uVar6 & uVar8);
    do {
      if ((uVar4 <= uVar11) && (uVar11 = 0, uVar4 == 0)) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      puVar1 = (ushort *)(lVar2 + uVar11 * 4);
      uVar14 = (ulong)*puVar1;
      if ((uVar14 == 0xffff) ||
         (uVar7 = puVar1[1], ((ulong)((int)uVar11 - (uint)(uVar7 & uVar6)) & (ulong)uVar6) < uVar10)
         ) {
        uVar13 = 0x1ff < uVar10 && *param_2 != 2;
        <http[b87e90c26fe47eb4]::header::name::HeaderName_as_core[bcece726f298455b]::convert::From<&http[b87e90c26fe47eb4]::header::name::HeaderName>>
        ::from(&local_80,param_3);
        *param_1 = (long)param_2;
        param_1[2] = lStack_78;
        param_1[1] = local_80;
        param_1[5] = uVar11;
        param_1[4] = lStack_68;
        param_1[3] = lStack_70;
        *(ushort *)(param_1 + 6) = uVar8;
        goto LAB_007c2d60;
      }
      if (uVar7 == uVar8) {
        if (uVar5 <= uVar14) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check
                    (uVar14,uVar5,&PTR_s__root__cargo_registry_src_index__00ade378);
        }
        lVar12 = lVar3 + uVar14 * 0x68;
        if ((*(long *)(lVar12 + 0x40) != 0) != (*param_3 == 0)) {
          if (*(long *)(lVar12 + 0x40) == 0) {
            if (*(char *)(lVar12 + 0x48) == (char)param_3[1]) goto LAB_007c2d08;
          }
          else if ((*(size_t *)(lVar12 + 0x50) == param_3[2]) &&
                  (iVar9 = memcmp(*(void **)(lVar12 + 0x48),(void *)param_3[1],
                                  *(size_t *)(lVar12 + 0x50)), iVar9 == 0)) goto LAB_007c2d08;
        }
      }
      uVar10 = uVar10 + 1;
      uVar11 = uVar11 + 1;
    } while( true );
  }
  uVar13 = 0xff;
LAB_007c2d60:
  *(undefined1 *)((long)param_1 + 0x32) = uVar13;
  return;
LAB_007c2d08:
  uVar13 = 2;
  *param_1 = (long)param_2;
  param_1[1] = uVar11;
  param_1[2] = uVar14;
  goto LAB_007c2d60;
}


// ===== 007c2d94  FUN_007c2d94 =====

undefined4 FUN_007c2d94(long param_1,long *param_2)

{
  ushort *puVar1;
  long lVar2;
  ulong uVar3;
  void *__s2;
  ushort uVar4;
  ushort uVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined4 uVar13;
  size_t __n;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  
  uVar15 = *(ulong *)(param_1 + 0x28);
  if (uVar15 != 0) {
    uVar7 = FUN_007c4738(param_1,param_2);
    uVar4 = *(ushort *)(param_1 + 0x58);
    lVar2 = *(long *)(param_1 + 0x48);
    uVar3 = *(ulong *)(param_1 + 0x50);
    lVar12 = *param_2;
    __s2 = (void *)param_2[1];
    lVar14 = *(long *)(param_1 + 0x20);
    uVar16 = 0;
    uVar10 = (ulong)((uint)uVar4 & uVar7 & 0xffff);
    lVar6 = param_2[1];
    __n = param_2[2];
    do {
      if ((uVar3 <= uVar10) && (uVar10 = 0, uVar3 == 0)) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      puVar1 = (ushort *)(lVar2 + uVar10 * 4);
      uVar9 = (ulong)*puVar1;
      if ((uVar9 == 0xffff) ||
         (uVar5 = puVar1[1], ((ulong)((int)uVar10 - (uint)(uVar5 & uVar4)) & (ulong)uVar4) < uVar16)
         ) {
        uVar13 = 0;
        goto joined_r0x007c2ed4;
      }
      if ((uint)uVar5 == (uVar7 & 0xffff)) {
        if (uVar15 <= uVar9) {
                    /* try { // try from 007c2f24 to 007c2f33 has its CatchHandler @ 007c2f38 */
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check
                    (uVar9,uVar15,&PTR_s__root__cargo_registry_src_index__00ade390);
        }
        lVar11 = lVar14 + uVar9 * 0x68;
        if ((lVar12 == 0) != (*(long *)(lVar11 + 0x40) != 0)) {
          if (*(long *)(lVar11 + 0x40) == 0) {
            if (*(char *)(lVar11 + 0x48) == (char)lVar6) {
              return 1;
            }
          }
          else if ((*(size_t *)(lVar11 + 0x50) == __n) &&
                  (iVar8 = memcmp(*(void **)(lVar11 + 0x48),__s2,__n), iVar8 == 0))
          goto code_r0x007c2eb8;
        }
      }
      uVar16 = uVar16 + 1;
      uVar10 = uVar10 + 1;
    } while( true );
  }
  lVar12 = *param_2;
  uVar13 = 0;
joined_r0x007c2ed4:
  if (lVar12 != 0) {
    (**(code **)(lVar12 + 0x20))(param_2 + 3,param_2[1],param_2[2]);
  }
  return uVar13;
code_r0x007c2eb8:
  uVar13 = 1;
  goto joined_r0x007c2ed4;
}


// ===== 007c2f68  FUN_007c2f68 =====

long FUN_007c2f68(long param_1,long *param_2)

{
  ushort *puVar1;
  long lVar2;
  ulong uVar3;
  void *__s2;
  ushort uVar4;
  ushort uVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  size_t __n;
  ulong uVar15;
  
  uVar14 = *(ulong *)(param_1 + 0x28);
  if (uVar14 != 0) {
    uVar7 = FUN_007c4738(param_1,param_2);
    uVar4 = *(ushort *)(param_1 + 0x58);
    lVar2 = *(long *)(param_1 + 0x48);
    uVar3 = *(ulong *)(param_1 + 0x50);
    lVar12 = *param_2;
    __s2 = (void *)param_2[1];
    lVar11 = *(long *)(param_1 + 0x20);
    uVar15 = 0;
    uVar10 = (ulong)((uint)uVar4 & uVar7 & 0xffff);
    lVar6 = param_2[1];
    __n = param_2[2];
    do {
      if ((uVar3 <= uVar10) && (uVar10 = 0, uVar3 == 0)) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      puVar1 = (ushort *)(lVar2 + uVar10 * 4);
      uVar9 = (ulong)*puVar1;
      if ((uVar9 == 0xffff) ||
         (uVar5 = puVar1[1], ((ulong)((int)uVar10 - (uint)(uVar5 & uVar4)) & (ulong)uVar4) < uVar15)
         ) {
        lVar13 = 0;
        if (lVar12 == 0) {
          return 0;
        }
        goto LAB_007c30b4;
      }
      if ((uint)uVar5 == (uVar7 & 0xffff)) {
        if (uVar14 <= uVar9) {
                    /* try { // try from 007c30f4 to 007c3103 has its CatchHandler @ 007c3108 */
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check
                    (uVar9,uVar14,&PTR_s__root__cargo_registry_src_index__00ade390);
        }
        lVar13 = lVar11 + uVar9 * 0x68;
        if ((lVar12 == 0) != (*(long *)(lVar13 + 0x40) != 0)) {
          if (*(long *)(lVar13 + 0x40) == 0) {
            if (*(char *)(lVar13 + 0x48) == (char)lVar6) goto LAB_007c3094;
          }
          else if ((*(size_t *)(lVar13 + 0x50) == __n) &&
                  (iVar8 = memcmp(*(void **)(lVar13 + 0x48),__s2,__n), iVar8 == 0))
          goto LAB_007c3094;
        }
      }
      uVar15 = uVar15 + 1;
      uVar10 = uVar10 + 1;
    } while( true );
  }
  lVar12 = *param_2;
  lVar13 = 0;
joined_r0x007c309c:
  if (lVar12 != 0) {
LAB_007c30b4:
    (**(code **)(lVar12 + 0x20))(param_2 + 3,param_2[1],param_2[2]);
  }
  return lVar13;
LAB_007c3094:
  lVar13 = lVar13 + 0x18;
  goto joined_r0x007c309c;
}


// ===== 007c3138  FUN_007c3138 =====

void FUN_007c3138(undefined8 *param_1,long param_2,long *param_3)

{
  ushort *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  void *__s2;
  ushort uVar5;
  ushort uVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  size_t __n;
  ulong uVar14;
  ulong uVar15;
  undefined1 auStack_c8 [24];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  
  uVar11 = *(ulong *)(param_2 + 0x28);
  if (uVar11 != 0) {
    uVar8 = FUN_007c4738(param_2,param_3);
    uVar5 = *(ushort *)(param_2 + 0x58);
    lVar2 = *(long *)(param_2 + 0x48);
    uVar4 = *(ulong *)(param_2 + 0x50);
    lVar3 = *param_3;
    __s2 = (void *)param_3[1];
    lVar12 = *(long *)(param_2 + 0x20);
    uVar15 = 0;
    uVar10 = (ulong)((uint)uVar5 & uVar8 & 0xffff);
    lVar7 = param_3[1];
    __n = param_3[2];
    do {
      if ((uVar4 <= uVar10) && (uVar10 = 0, uVar4 == 0)) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      puVar1 = (ushort *)(lVar2 + uVar10 * 4);
      uVar14 = (ulong)*puVar1;
      if ((uVar14 == 0xffff) ||
         (uVar6 = puVar1[1], ((ulong)((int)uVar10 - (uint)(uVar6 & uVar5)) & (ulong)uVar5) < uVar15)
         ) break;
      if ((uint)uVar6 == (uVar8 & 0xffff)) {
        if (uVar11 <= uVar14) {
                    /* try { // try from 007c3314 to 007c3327 has its CatchHandler @ 007c332c */
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check
                    (uVar14,uVar11,&PTR_s__root__cargo_registry_src_index__00ade390);
        }
        plVar13 = (long *)(lVar12 + uVar14 * 0x68);
        if ((lVar3 == 0) != (plVar13[8] != 0)) {
          if (plVar13[8] == 0) {
            if ((char)plVar13[9] == (char)lVar7) goto LAB_007c326c;
          }
          else if ((plVar13[10] == __n) && (iVar9 = memcmp((void *)plVar13[9],__s2,__n), iVar9 == 0)
                  ) goto LAB_007c326c;
        }
      }
      uVar15 = uVar15 + 1;
      uVar10 = uVar10 + 1;
    } while( true );
  }
  *(undefined1 *)(param_1 + 4) = 2;
LAB_007c32d8:
  if (*param_3 != 0) {
    (**(code **)(*param_3 + 0x20))(param_3 + 3,param_3[1],param_3[2]);
  }
  return;
LAB_007c326c:
  if (*plVar13 == 1) {
                    /* try { // try from 007c327c to 007c32c3 has its CatchHandler @ 007c332c */
    FUN_007c5b7c(param_2,plVar13[1]);
  }
  FUN_007c5224(auStack_c8,param_2,uVar10,uVar14);
  param_1[1] = uStack_a8;
  *param_1 = local_b0;
  param_1[3] = uStack_98;
  param_1[2] = uStack_a0;
  param_1[4] = local_90;
  if (lStack_88 != 0) {
    (**(code **)(lStack_88 + 0x20))(auStack_70,local_80,uStack_78);
  }
  goto LAB_007c32d8;
}


// ===== 007c335c  FUN_007c335c =====

void FUN_007c335c(undefined8 *param_1,long param_2,long *param_3)

{
  ushort *puVar1;
  long lVar2;
  ulong uVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 auStack_c8 [24];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  
  uVar11 = *(ulong *)(param_2 + 0x28);
  if (uVar11 == 0) {
LAB_007c34dc:
    *(undefined1 *)(param_1 + 4) = 2;
    return;
  }
  uVar6 = FUN_007c4738(param_2);
  uVar4 = *(ushort *)(param_2 + 0x58);
  lVar2 = *(long *)(param_2 + 0x48);
  uVar3 = *(ulong *)(param_2 + 0x50);
  lVar9 = *(long *)(param_2 + 0x20);
  uVar13 = 0;
  uVar8 = (ulong)((uint)uVar4 & uVar6 & 0xffff);
  do {
    if ((uVar3 <= uVar8) && (uVar8 = 0, uVar3 == 0)) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    puVar1 = (ushort *)(lVar2 + uVar8 * 4);
    uVar12 = (ulong)*puVar1;
    if ((uVar12 == 0xffff) ||
       (uVar5 = puVar1[1], ((ulong)((int)uVar8 - (uint)(uVar5 & uVar4)) & (ulong)uVar4) < uVar13))
    goto LAB_007c34dc;
    if ((uint)uVar5 == (uVar6 & 0xffff)) {
      if (uVar11 <= uVar12) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (uVar12,uVar11,&PTR_s__root__cargo_registry_src_index__00ade390);
      }
      plVar10 = (long *)(lVar9 + uVar12 * 0x68);
      if ((plVar10[8] != 0) != (*param_3 == 0)) {
        if (plVar10[8] == 0) {
          if ((char)plVar10[9] == (char)param_3[1]) {
LAB_007c347c:
            if (*plVar10 == 1) {
              FUN_007c5b7c(param_2,plVar10[1]);
            }
            FUN_007c5224(auStack_c8,param_2,uVar8,uVar12);
            param_1[1] = uStack_a8;
            *param_1 = local_b0;
            param_1[3] = uStack_98;
            param_1[2] = uStack_a0;
            param_1[4] = local_90;
            if (lStack_88 == 0) {
              return;
            }
            (**(code **)(lStack_88 + 0x20))(auStack_70,local_80,uStack_78);
            return;
          }
        }
        else if ((plVar10[10] == param_3[2]) &&
                (iVar7 = memcmp((void *)plVar10[9],(void *)param_3[1],plVar10[10]), iVar7 == 0))
        goto LAB_007c347c;
      }
    }
    uVar13 = uVar13 + 1;
    uVar8 = uVar8 + 1;
  } while( true );
}


// ===== 007c351c  FUN_007c351c =====

void FUN_007c351c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  uint *puVar1;
  long local_98;
  undefined8 local_90;
  ulong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long lStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  
  FUN_0077b10c(&local_98,param_3,param_4,param_2);
  if ((local_98 != 2) && (local_98 == 1)) {
    if (local_88 < *(ulong *)(param_2 + 0x28)) {
      puVar1 = (uint *)(*(long *)(param_2 + 0x20) + local_88 * 0x68);
      if ((*puVar1 & 1) != 0) {
        FUN_007c5b7c(param_2,*(undefined8 *)(puVar1 + 2));
      }
      FUN_007c5224(&local_98,param_2,local_90,local_88);
      param_1[1] = uStack_78;
      *param_1 = local_80;
      param_1[3] = uStack_68;
      param_1[2] = uStack_70;
      param_1[4] = local_60;
      if (lStack_58 != 0) {
        (**(code **)(lStack_58 + 0x20))(auStack_40,local_50,uStack_48);
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check
              (local_88,*(ulong *)(param_2 + 0x28),&PTR_s__root__cargo_registry_src_index__00ade3c0)
    ;
  }
  *(undefined1 *)(param_1 + 4) = 2;
  return;
}


// ===== 007c3610  FUN_007c3610 =====

long FUN_007c3610(long *param_1,long param_2)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar4;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 uStack_fe;
  undefined8 *local_f0;
  code *pcStack_e8;
  long *plStack_e0;
  code *pcStack_d8;
  undefined8 local_d0;
  undefined1 local_c0 [16];
  undefined8 *local_b0;
  code *pcStack_a8;
  long *local_a0;
  code *pcStack_98;
  undefined1 local_90;
  undefined7 uStack_8f;
  long local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_58;
  void *local_50;
  long lStack_48;
  undefined1 uStack_21;
  undefined8 uVar3;
  long lVar5;
  
  if (*(char *)((long)param_1 + 0x32) == '\x02') {
    uVar2 = param_1[2];
    uVar4 = *(ulong *)(*param_1 + 0x28);
    if (uVar4 <= uVar2) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (uVar2,uVar4,&PTR_s__root__cargo_registry_src_index__00ade3f0);
    }
    lVar6 = *(long *)(*param_1 + 0x20) + uVar2 * 0x68;
  }
  else {
    lVar6 = *param_1;
    lVar9 = param_1[5];
    uVar2 = param_1[6];
    if (*(long *)(param_2 + 0x20) == 0) {
                    /* try { // try from 007c3848 to 007c385f has its CatchHandler @ 007c38c8 */
                    /* WARNING: Subroutine does not return */
      core::option::expect_failed
                ("authority implies host",0x16,&PTR_s__root__cargo_registry_src_index__00ade608);
    }
                    /* try { // try from 007c3684 to 007c36eb has its CatchHandler @ 007c38c8 */
    auVar10 = http::uri::authority::host(*(undefined8 *)(param_2 + 0x18));
    lVar5 = auVar10._8_8_;
    uVar3 = auVar10._0_8_;
    local_c0 = auVar10;
    hyper_util::client::legacy::client::get_non_default_port(&local_88,param_2);
    lVar7 = lVar5;
    if (local_88 == 0) {
      while (lVar7 != 0) {
        pbVar8 = auVar10._0_8_;
        bVar1 = *pbVar8;
        if (bVar1 < 0x20) {
          if (bVar1 != 9) goto LAB_007c3798;
        }
        else if (bVar1 == 0x7f) goto LAB_007c3798;
        lVar7 = auVar10._8_8_ + -1;
        auVar10._8_8_ = lVar7;
        auVar10._0_8_ = pbVar8 + 1;
      }
      <bytes::bytes::bytes::bytes::Bytes>::copy_from_slice(&local_b0,uVar3,lVar5);
      local_90 = 0;
    }
    else {
      local_b0 = (undefined8 *)local_c0;
      local_60 = local_78;
      pcStack_a8 = FUN_00782f80;
      local_a0 = &local_70;
      uStack_68 = uStack_80;
      local_70 = local_88;
      pcStack_98 = FUN_007a6ddc;
      alloc::fmt::format::format_inner(&local_58,&DAT_002a59d3,&local_b0);
      if (lStack_48 != 0) {
        lVar7 = 0;
        do {
          bVar1 = *(byte *)((long)local_50 + lVar7);
          if (bVar1 < 0x20) {
            if (bVar1 != 9) {
LAB_007c3724:
              if (local_58 != 0) {
                free(local_50);
              }
LAB_007c3798:
                    /* try { // try from 007c3798 to 007c37cf has its CatchHandler @ 007c38c8 */
                    /* WARNING: Subroutine does not return */
              core::result::unwrap_failed
                        ("uri host is valid header value",0x1e,&uStack_21,&DAT_00ade640,
                         &PTR_s__root__cargo_registry_src_index__00ade5f0);
            }
          }
          else if (bVar1 == 0x7f) goto LAB_007c3724;
          lVar7 = lVar7 + 1;
        } while (lStack_48 != lVar7);
      }
                    /* try { // try from 007c373c to 007c3747 has its CatchHandler @ 007c38a8 */
      <bytes::bytes::bytes::bytes::Bytes>::copy_from_slice(&local_b0,local_50);
      local_90 = 0;
      if (local_58 != 0) {
        free(local_50);
      }
    }
    local_d0 = CONCAT71(uStack_8f,local_90);
    uStack_fe = (undefined1)(uVar2 >> 0x10);
    pcStack_e8 = pcStack_a8;
    local_f0 = local_b0;
    pcStack_d8 = pcStack_98;
    plStack_e0 = local_a0;
    pcStack_a8 = (code *)param_1[2];
    local_b0 = (undefined8 *)param_1[1];
    pcStack_98 = (code *)param_1[4];
    local_a0 = (long *)param_1[3];
    auVar10 = FUN_007c59ac(lVar6,&local_b0,&local_f0,uVar2 & 0xffff,lVar9,uStack_fe);
    uVar2 = auVar10._8_8_;
    if ((auVar10 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
                    /* WARNING: Subroutine does not return */
      core::result::unwrap_failed
                (&DAT_002e53da,0x17,&uStack_21,&DAT_00ade620,
                 &PTR_s__root__cargo_registry_src_index__00ade3d8);
    }
    if (*(ulong *)(lVar6 + 0x28) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (uVar2,*(ulong *)(lVar6 + 0x28),&PTR_s__root__cargo_registry_src_index__00ade720);
    }
    lVar6 = *(long *)(lVar6 + 0x20) + uVar2 * 0x68;
  }
  return lVar6 + 0x18;
}


// ===== 007c38f4  FUN_007c38f4 =====

void FUN_007c38f4(undefined8 *param_1,long *param_2,long *param_3)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  ulong uVar4;
  long local_4c0;
  byte *local_4b8;
  long local_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined1 local_488;
  uint7 uStack_487;
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  undefined2 local_88;
  undefined1 local_86;
  undefined1 local_85;
  long local_80;
  void *pvStack_78;
  long local_70;
  long *plStack_68;
  code *local_60;
  long *local_58;
  code *local_50;
  undefined1 uStack_41;
  
  local_4c0 = 0;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  local_4b8 = (byte *)FUN_004b25a4(6,1);
  if (local_4b8 == (byte *)0x0) {
                    /* try { // try from 007c3b38 to 007c3b43 has its CatchHandler @ 007c3b70 */
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(1,6);
  }
  local_4c0 = 6;
  local_4b8[0] = 0x42;
  local_4b8[1] = 0x61;
  local_4b8[2] = 0x73;
  local_4b8[3] = 0x69;
  local_4b8[4] = 99;
  local_4b8[5] = 0x20;
  local_4b0 = 6;
  local_86 = 0;
  local_88 = 0;
  memset(&local_4a8,0,0x400);
  local_90 = &DAT_002e53f1;
  local_85 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  local_50 = FUN_007c7fe4;
                    /* try { // try from 007c399c to 007c39e3 has its CatchHandler @ 007c3b7c */
  local_a8 = (undefined1 *)&local_4c0;
  local_58 = param_2;
  uVar4 = FUN_007c20d0(&local_4a8,&DAT_002a59cf,&local_58);
  if (((uVar4 != 0) && (1 < (uVar4 & 3) - 2)) && ((uVar4 & 3) != 0)) {
    pvStack_78 = (void *)(uVar4 - 1);
    local_80 = CONCAT71(local_80._1_7_,3);
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&pvStack_78);
  }
  if (*param_3 != -1) {
    pvStack_78 = (void *)param_3[1];
    local_80 = *param_3;
    local_70 = param_3[2];
    plStack_68 = &local_80;
    local_60 = FUN_007c7fe4;
                    /* try { // try from 007c3a0c to 007c3a53 has its CatchHandler @ 007c3b48 */
    uVar4 = FUN_007c20d0(&local_4a8,&DAT_002ab692,&plStack_68);
    if (((uVar4 != 0) && (1 < (uVar4 & 3) - 2)) && ((uVar4 & 3) != 0)) {
      local_50 = (code *)(uVar4 - 1);
      local_58 = (long *)CONCAT71(local_58._1_7_,3);
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_50);
    }
    if (local_80 != 0) {
      free(pvStack_78);
    }
  }
                    /* try { // try from 007c3a68 to 007c3ad7 has its CatchHandler @ 007c3b94 */
  FUN_007c0254(&local_4a8);
  pbVar3 = local_4b8;
  lVar2 = local_4b0;
  do {
    if (lVar2 == 0) {
      <bytes::bytes::bytes::bytes::Bytes>::copy_from_slice(&local_4a8);
      local_488 = 0;
      param_1[1] = uStack_4a0;
      *param_1 = local_4a8;
      param_1[3] = uStack_490;
      param_1[2] = local_498;
      param_1[4] = (ulong)uStack_487 << 8;
      *(undefined1 *)(param_1 + 4) = 1;
      if (local_4c0 != 0) {
        free(local_4b8);
      }
      if (*param_2 != 0) {
        free((void *)param_2[1]);
      }
      return;
    }
    bVar1 = *pbVar3;
    if (bVar1 < 0x20) {
      if (bVar1 != 9) {
LAB_007c3aa8:
                    /* WARNING: Subroutine does not return */
        core::result::unwrap_failed
                  ("base64 is always valid HeaderValue",0x22,&uStack_41,&DAT_00ade640,
                   &PTR_s__root__cargo_registry_src_index__00ade408);
      }
    }
    else if (bVar1 == 0x7f) goto LAB_007c3aa8;
    lVar2 = lVar2 + -1;
    pbVar3 = pbVar3 + 1;
  } while( true );
}


// ===== 007c3be4  FUN_007c3be4 =====

void FUN_007c3be4(undefined8 *param_1,long param_2,undefined8 param_3,long param_4,
                 undefined8 param_5)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  ulong uVar4;
  long local_4c0;
  undefined8 uStack_4b8;
  long local_4b0;
  byte *local_4a8;
  long local_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined1 local_478;
  uint7 uStack_477;
  long *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined *local_80;
  undefined2 local_78;
  undefined1 local_76;
  undefined1 local_75;
  long local_70;
  undefined8 uStack_68;
  long *local_60;
  code *pcStack_58;
  undefined1 local_50;
  long local_48;
  undefined1 uStack_21;
  
  local_4c0 = param_2;
  uStack_4b8 = param_3;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  local_4a8 = (byte *)FUN_004b25a4(6,1);
  if (local_4a8 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(1,6);
  }
  local_4b0 = 6;
  local_4a8[0] = 0x42;
  local_4a8[1] = 0x61;
  local_4a8[2] = 0x73;
  local_4a8[3] = 0x69;
  local_4a8[4] = 99;
  local_4a8[5] = 0x20;
  local_4a0 = 6;
  local_76 = 0;
  local_78 = 0;
  memset(&local_498,0,0x400);
  local_80 = &DAT_002e53f1;
  local_98 = &local_4b0;
  local_75 = 0;
  uStack_88 = 0;
  local_90 = 0;
  pcStack_58 = FUN_00782f80;
                    /* try { // try from 007c3c94 to 007c3cdb has its CatchHandler @ 007c3e00 */
  local_60 = &local_4c0;
  uVar4 = FUN_007c20d0(&local_498,&DAT_002a59cf,&local_60);
  if (((uVar4 != 0) && (1 < (uVar4 & 3) - 2)) && ((uVar4 & 3) != 0)) {
    local_48 = uVar4 - 1;
    local_50 = 3;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_48);
  }
  if (param_4 != 0) {
    local_60 = &local_70;
    pcStack_58 = FUN_00782f80;
                    /* try { // try from 007c3cec to 007c3d33 has its CatchHandler @ 007c3dfc */
    local_70 = param_4;
    uStack_68 = param_5;
    uVar4 = FUN_007c20d0(&local_498,&DAT_002ab692,&local_60);
    if (((uVar4 != 0) && (1 < (uVar4 & 3) - 2)) && ((uVar4 & 3) != 0)) {
      local_48 = uVar4 - 1;
      local_50 = 3;
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_48);
    }
  }
                    /* try { // try from 007c3d34 to 007c3da3 has its CatchHandler @ 007c3e14 */
  FUN_007c0254(&local_498);
  pbVar3 = local_4a8;
  lVar2 = local_4a0;
  do {
    if (lVar2 == 0) {
      <bytes::bytes::bytes::bytes::Bytes>::copy_from_slice(&local_498);
      local_478 = 0;
      param_1[1] = uStack_490;
      *param_1 = local_498;
      param_1[3] = uStack_480;
      param_1[2] = local_488;
      param_1[4] = (ulong)uStack_477 << 8;
      *(undefined1 *)(param_1 + 4) = 1;
      if (local_4b0 != 0) {
        free(local_4a8);
      }
      return;
    }
    bVar1 = *pbVar3;
    if (bVar1 < 0x20) {
      if (bVar1 != 9) {
LAB_007c3d74:
                    /* WARNING: Subroutine does not return */
        core::result::unwrap_failed
                  ("base64 is always valid HeaderValue",0x22,&uStack_21,&DAT_00ade640,
                   &PTR_s__root__cargo_registry_src_index__00ade408);
      }
    }
    else if (bVar1 == 0x7f) goto LAB_007c3d74;
    lVar2 = lVar2 + -1;
    pbVar3 = pbVar3 + 1;
  } while( true );
}


// ===== 007c3e34  FUN_007c3e34 =====

void FUN_007c3e34(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  void *__ptr;
  undefined8 *puVar6;
  
  if (*(char *)((long)param_1 + 0x19) != '\x02') {
    __ptr = (void *)*param_1;
    if (__ptr != (void *)0x0) {
      puVar6 = (undefined8 *)param_1[1];
      pcVar3 = (code *)*puVar6;
      if (pcVar3 != (code *)0x0) {
                    /* try { // try from 007c3e68 to 007c3e6f has its CatchHandler @ 007c3ec4 */
        (*pcVar3)(__ptr);
      }
      if (puVar6[1] != 0) {
        free(__ptr);
      }
    }
    plVar4 = (long *)param_1[2];
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<core::sync::atomic::Atomic<bool>>>::drop_slow(param_1 + 2)
      ;
      return;
    }
  }
  return;
}


// ===== 007c3f10  FUN_007c3f10 =====

void FUN_007c3f10(long *param_1)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  
  __ptr = (void *)param_1[1];
  lVar2 = param_1[2] + 1;
  lVar1 = (long)__ptr + 0x38;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 007c3f4c to 007c3f4f has its CatchHandler @ 007c3f98 */
    (**(code **)(*(long *)(lVar1 + -0x18) + 0x20))
              (lVar1,*(undefined8 *)(lVar1 + -0x10),*(undefined8 *)(lVar1 + -8));
    lVar1 = lVar1 + 0x48;
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 007c3fec  FUN_007c3fec =====

void FUN_007c3fec(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 007c4008  FUN_007c4008 =====

void FUN_007c4008(long param_1)

{
  if (*(long *)(param_1 + 0x40) != 0) {
                    /* try { // try from 007c4028 to 007c402f has its CatchHandler @ 007c404c */
    (**(code **)(*(long *)(param_1 + 0x40) + 0x20))
              (param_1 + 0x58,*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
  }
                    /* WARNING: Could not recover jumptable at 0x007c4048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x20))
            (param_1 + 0x30,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}


// ===== 007c4070  FUN_007c4070 =====

void FUN_007c4070(long param_1)

{
  long lVar1;
  long lVar2;
  
                    /* try { // try from 007c4088 to 007c408b has its CatchHandler @ 007c410c */
  FUN_007c7868();
                    /* try { // try from 007c408c to 007c4093 has its CatchHandler @ 007c4104 */
  FUN_0077a95c(param_1 + 0x28);
  lVar2 = *(long *)(param_1 + 0x20) + 1;
  lVar1 = *(long *)(param_1 + 0x18) + 0x38;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 007c40b8 to 007c40bb has its CatchHandler @ 007c4128 */
    (**(code **)(*(long *)(lVar1 + -0x18) + 0x20))
              (lVar1,*(undefined8 *)(lVar1 + -0x10),*(undefined8 *)(lVar1 + -8));
    lVar1 = lVar1 + 0x48;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    free(*(void **)(param_1 + 0x18));
    return;
  }
  return;
}


// ===== 007c417c  FUN_007c417c =====

void FUN_007c417c(undefined8 *param_1)

{
  code *pcVar1;
  long *__ptr;
  undefined8 *puVar2;
  void *__ptr_00;
  
  __ptr = (long *)*param_1;
  __ptr_00 = (void *)__ptr[0xb];
  if (__ptr_00 != (void *)0x0) {
    puVar2 = (undefined8 *)__ptr[0xc];
    pcVar1 = (code *)*puVar2;
    if (pcVar1 != (code *)0x0) {
                    /* try { // try from 007c41a4 to 007c41ab has its CatchHandler @ 007c41f8 */
      (*pcVar1)(__ptr_00);
    }
    if (puVar2[1] != 0) {
      free(__ptr_00);
    }
  }
  if ((*__ptr != -1) && (*__ptr != 0)) {
    free((void *)__ptr[1]);
  }
  free(__ptr);
  return;
}


// ===== 007c4248  FUN_007c4248 =====

void FUN_007c4248(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  uVar6 = *param_1;
  lVar7 = uVar6 + 0x7fffffffffffffef;
  if (uVar6 < 0x8000000000000011) {
    lVar7 = 0xb;
  }
  if (lVar7 < 0xb) {
    if (lVar7 < 8) {
      if (lVar7 - 2U < 6) {
        return;
      }
      if ((lVar7 == 0) || (lVar7 == 1)) {
        if (param_1[1] == 0) {
          return;
        }
        free((void *)param_1[2]);
        return;
      }
    }
    else {
      if (lVar7 - 9U < 2) {
        return;
      }
      if (lVar7 == 8) {
        if ((long)param_1[1] < -0x7fffffffffffffeb) {
          return;
        }
        if (param_1[1] == 0xffffffffffffffff) {
          return;
        }
        lVar7 = param_1[3] + 1;
        uVar6 = param_1[2];
        while (lVar7 = lVar7 + -1, lVar7 != 0) {
                    /* try { // try from 007c4328 to 007c432b has its CatchHandler @ 007c44c4 */
          FUN_00787428(uVar6);
          uVar6 = uVar6 + 0x70;
        }
        if (param_1[1] == 0) {
          return;
        }
        free((void *)param_1[2]);
        return;
      }
    }
  }
  else if (lVar7 < 0xe) {
    if (lVar7 == 0xb) {
      uVar4 = uVar6 ^ 0x8000000000000000;
      if (-1 < (long)uVar6) {
        uVar4 = 0xd;
      }
      if (uVar4 < 0xd) {
        return;
      }
      if (uVar4 - 0xe < 2) {
        return;
      }
      if (uVar4 == 0xd) {
        if ((((param_1[3] & 1) == 0) && (param_1[4] != 0xffffffffffffffff)) && (param_1[4] != 0)) {
          free((void *)param_1[5]);
        }
                    /* try { // try from 007c43a4 to 007c43ab has its CatchHandler @ 007c44a8 */
        FUN_0078aba0(param_1);
        if (*param_1 == 0) {
          return;
        }
        free((void *)param_1[1]);
        return;
      }
      param_1 = param_1 + 1;
      plVar5 = (long *)*param_1;
      do {
        bVar3 = *plVar5 + -1 == 0;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      goto LAB_007c4410;
    }
    if (lVar7 == 0xc) {
      if (param_1[1] != 4) {
        return;
      }
      param_1 = param_1 + 2;
      plVar5 = (long *)*param_1;
      do {
        bVar3 = *plVar5 + -1 == 0;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      goto LAB_007c4410;
    }
    if (lVar7 == 0xd) {
      if (param_1[1] == 0) {
        return;
      }
      free((void *)param_1[2]);
      return;
    }
  }
  else if (lVar7 - 0xeU < 7) {
    return;
  }
  param_1 = param_1 + 1;
  plVar5 = (long *)*param_1;
  do {
    bVar3 = *plVar5 + -1 == 0;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = *plVar5 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_007c4410:
  if (!bVar3) {
    return;
  }
  DataMemoryBarrier(2,1);
  <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+rustls::server::server_conn::StoresServerSessions>>
  ::drop_slow(param_1);
  return;
}


// ===== 007c450c  FUN_007c450c =====

void FUN_007c450c(undefined8 *param_1)

{
  code *pcVar1;
  void *__ptr;
  undefined8 *puVar2;
  
  param_1 = (undefined8 *)*param_1;
  __ptr = (void *)*param_1;
  if (__ptr != (void *)0x0) {
    puVar2 = (undefined8 *)param_1[1];
    pcVar1 = (code *)*puVar2;
    if (pcVar1 != (code *)0x0) {
                    /* try { // try from 007c4534 to 007c453b has its CatchHandler @ 007c456c */
      (*pcVar1)(__ptr);
    }
    if (puVar2[1] != 0) {
      free(__ptr);
    }
  }
  free(param_1);
  return;
}


// ===== 007c45a0  FUN_007c45a0 =====

void FUN_007c45a0(ulong *param_1)

{
  ulong uVar1;
  long local_18;
  
  uVar1 = *param_1 & 3;
  if (uVar1 - 2 < 2 || uVar1 == 0) {
    return;
  }
  local_18 = *param_1 - 1;
  <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
  return;
}


// ===== 007c45f0  FUN_007c45f0 =====

void FUN_007c45f0(undefined8 *param_1)

{
  code *pcVar1;
  void *__ptr;
  undefined8 *puVar2;
  
  __ptr = (void *)*param_1;
  if (__ptr != (void *)0x0) {
    puVar2 = (undefined8 *)param_1[1];
    pcVar1 = (code *)*puVar2;
    if (pcVar1 != (code *)0x0) {
                    /* try { // try from 007c4618 to 007c461f has its CatchHandler @ 007c4648 */
      (*pcVar1)(__ptr);
    }
    if (puVar2[1] != 0) {
      free(__ptr);
    }
  }
  FUN_007c3e34(param_1 + 2);
  return;
}


// ===== 007c4678  FUN_007c4678 =====

void FUN_007c4678(undefined8 *param_1)

{
  code *pcVar1;
  void *__ptr;
  undefined8 *puVar2;
  
  if (param_1[1] != 0) {
    free((void *)*param_1);
  }
  __ptr = (void *)param_1[2];
  if (__ptr != (void *)0x0) {
    puVar2 = (undefined8 *)param_1[3];
    pcVar1 = (code *)*puVar2;
    if (pcVar1 != (code *)0x0) {
                    /* try { // try from 007c46b0 to 007c46b7 has its CatchHandler @ 007c46e0 */
      (*pcVar1)(__ptr);
    }
    if (puVar2[1] != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 007c4704  core[bcece726f298455b]::panicking::assert_failed::<core[bcece726f298455b]::option::Option<core[bcece726f298455b]::ptr::non_null::NonNull<tokio[8c8895dbfa691109]::runtime::task::core::Header>>,core[bcece726f298455b]::option::Option<core[bcece726f298455b]::ptr::non_null::NonNull<tokio[8c8895dbfa691109]::runtime::task::core::Header>>> =====

/* core[bcece726f298455b]::panicking::assert_failed::<core[bcece726f298455b]::option::Option<core[bcece726f298455b]::ptr::non_null::NonNull<tokio[8c8895dbfa691109]::runtime::task::core::Header>>,
   core[bcece726f298455b]::option::Option<core[bcece726f298455b]::ptr::non_null::NonNull<tokio[8c8895dbfa691109]::runtime::task::core::Header>>>
    */

void core[bcece726f298455b]::panicking::assert_failed::
     <core[bcece726f298455b]::option::Option<core[bcece726f298455b]::ptr::non_null::NonNull<tokio[8c8895dbfa691109]::runtime::task::core::Header>>,core[bcece726f298455b]::option::Option<core[bcece726f298455b]::ptr::non_null::NonNull<tokio[8c8895dbfa691109]::runtime::task::core::Header>>>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = param_2;
  uStack_18 = param_3;
                    /* WARNING: Subroutine does not return */
  core::panicking::assert_failed_inner
            (param_1,&local_20,&DAT_00ade420,&uStack_18,&DAT_00ade420,param_4,param_5,param_6);
}


// ===== 007c4738  FUN_007c4738 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_007c4738(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong *puVar3;
  uint uVar4;
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  long local_70;
  long lStack_68;
  ulong local_60;
  ulong uStack_58;
  long lStack_50;
  long lStack_48;
  long local_40;
  ulong uStack_38;
  undefined8 local_30;
  ulong local_28;
  
  if (*param_1 == 2) {
    lStack_48 = param_1[2];
    lStack_50 = param_1[1];
    lVar9 = *param_2;
    local_28 = (ulong)(lVar9 != 0);
    local_40 = 0;
    uStack_38 = 0;
    bVar10 = (byte)((ulong)lStack_50 >> 8);
    bVar11 = (byte)((ulong)lStack_50 >> 0x10);
    bVar12 = (byte)((ulong)lStack_50 >> 0x18);
    bVar13 = (byte)((ulong)lStack_50 >> 0x20);
    bVar14 = (byte)((ulong)lStack_50 >> 0x28);
    bVar15 = (byte)((ulong)lStack_50 >> 0x30);
    bVar16 = (byte)((ulong)lStack_50 >> 0x38);
    local_70 = CONCAT17(bVar16 ^ (byte)((ulong)_DAT_0029fb60 >> 0x38),
                        CONCAT16(bVar15 ^ (byte)((ulong)_DAT_0029fb60 >> 0x30),
                                 CONCAT15(bVar14 ^ (byte)((ulong)_DAT_0029fb60 >> 0x28),
                                          CONCAT14(bVar13 ^ (byte)((ulong)_DAT_0029fb60 >> 0x20),
                                                   CONCAT13(bVar12 ^ (byte)((ulong)_DAT_0029fb60 >>
                                                                           0x18),
                                                            CONCAT12(bVar11 ^ (byte)((ulong)
                                                  _DAT_0029fb60 >> 0x10),
                                                  CONCAT11(bVar10 ^ (byte)((ulong)_DAT_0029fb60 >> 8
                                                                          ),
                                                           (byte)lStack_50 ^ (byte)_DAT_0029fb60))))
                                         )));
    lStack_68 = CONCAT17(bVar16 ^ (byte)((ulong)_UNK_0029fb68 >> 0x38),
                         CONCAT16(bVar15 ^ (byte)((ulong)_UNK_0029fb68 >> 0x30),
                                  CONCAT15(bVar14 ^ (byte)((ulong)_UNK_0029fb68 >> 0x28),
                                           CONCAT14(bVar13 ^ (byte)((ulong)_UNK_0029fb68 >> 0x20),
                                                    CONCAT13(bVar12 ^ (byte)((ulong)_UNK_0029fb68 >>
                                                                            0x18),
                                                             CONCAT12(bVar11 ^ (byte)((ulong)
                                                  _UNK_0029fb68 >> 0x10),
                                                  CONCAT11(bVar10 ^ (byte)((ulong)_UNK_0029fb68 >> 8
                                                                          ),
                                                           (byte)lStack_50 ^ (byte)_UNK_0029fb68))))
                                          )));
    bVar10 = (byte)((ulong)lStack_48 >> 8);
    bVar11 = (byte)((ulong)lStack_48 >> 0x10);
    bVar12 = (byte)((ulong)lStack_48 >> 0x18);
    bVar13 = (byte)((ulong)lStack_48 >> 0x20);
    bVar14 = (byte)((ulong)lStack_48 >> 0x28);
    bVar15 = (byte)((ulong)lStack_48 >> 0x30);
    bVar16 = (byte)((ulong)lStack_48 >> 0x38);
    local_60 = CONCAT17(bVar16 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x38),
                        CONCAT16(bVar15 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x30),
                                 CONCAT15(bVar14 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x28),
                                          CONCAT14(bVar13 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x20),
                                                   CONCAT13(bVar12 ^ (byte)((ulong)_DAT_0029f5c0 >>
                                                                           0x18),
                                                            CONCAT12(bVar11 ^ (byte)((ulong)
                                                  _DAT_0029f5c0 >> 0x10),
                                                  CONCAT11(bVar10 ^ (byte)((ulong)_DAT_0029f5c0 >> 8
                                                                          ),
                                                           (byte)lStack_48 ^ (byte)_DAT_0029f5c0))))
                                         )));
    uStack_58 = CONCAT17(bVar16 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x38),
                         CONCAT16(bVar15 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x30),
                                  CONCAT15(bVar14 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x28),
                                           CONCAT14(bVar13 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x20),
                                                    CONCAT13(bVar12 ^ (byte)((ulong)_UNK_0029f5c8 >>
                                                                            0x18),
                                                             CONCAT12(bVar11 ^ (byte)((ulong)
                                                  _UNK_0029f5c8 >> 0x10),
                                                  CONCAT11(bVar10 ^ (byte)((ulong)_UNK_0029f5c8 >> 8
                                                                          ),
                                                           (byte)lStack_48 ^ (byte)_UNK_0029f5c8))))
                                          )));
    local_30 = 0;
    FUN_007c75fc(&local_70,&local_28,8);
    if (lVar9 == 0) {
      local_28 = (ulong)*(byte *)(param_2 + 1);
      puVar3 = &local_28;
      lVar9 = 8;
    }
    else {
      puVar3 = (ulong *)param_2[1];
      lVar9 = param_2[2];
    }
    FUN_007c75fc(&local_70,puVar3,lVar9);
    uStack_38 = uStack_38 | local_40 << 0x38;
    uStack_58 = uStack_38 ^ uStack_58;
    uVar5 = local_60 + local_70;
    uVar7 = uVar5 ^ (local_60 >> 0x33 | local_60 << 0xd);
    uVar8 = uStack_58 + lStack_68 ^ (uStack_58 >> 0x30 | uStack_58 << 0x10);
    uVar1 = uStack_58 + lStack_68 + uVar7;
    uVar5 = uVar8 + (uVar5 >> 0x20 | uVar5 << 0x20);
    uVar7 = uVar1 ^ (uVar7 >> 0x2f | uVar7 << 0x11);
    uVar8 = uVar5 ^ (uVar8 >> 0x2b | uVar8 << 0x15);
    uVar5 = (uVar5 ^ uStack_38) + uVar7;
    uVar1 = uVar8 + ((uVar1 >> 0x20 | uVar1 << 0x20) ^ 0xff);
    uVar7 = uVar5 ^ (uVar7 >> 0x33 | uVar7 << 0xd);
    uVar8 = uVar1 ^ (uVar8 >> 0x30 | uVar8 << 0x10);
    uVar1 = uVar7 + uVar1;
    uVar5 = uVar8 + (uVar5 >> 0x20 | uVar5 << 0x20);
    uVar7 = uVar1 ^ (uVar7 >> 0x2f | uVar7 << 0x11);
    uVar8 = uVar5 ^ (uVar8 >> 0x2b | uVar8 << 0x15);
    uVar5 = uVar7 + uVar5;
    uVar1 = uVar8 + (uVar1 >> 0x20 | uVar1 << 0x20);
    uVar7 = uVar5 ^ (uVar7 >> 0x33 | uVar7 << 0xd);
    uVar8 = uVar1 ^ (uVar8 >> 0x30 | uVar8 << 0x10);
    uVar1 = uVar7 + uVar1;
    uVar5 = uVar8 + (uVar5 >> 0x20 | uVar5 << 0x20);
    uVar7 = uVar1 ^ (uVar7 >> 0x2f | uVar7 << 0x11);
    uVar8 = uVar5 ^ (uVar8 >> 0x2b | uVar8 << 0x15);
    lVar9 = uVar8 + (uVar1 >> 0x20 | uVar1 << 0x20);
    uVar5 = uVar7 + uVar5 ^ (uVar7 >> 0x33 | uVar7 << 0xd);
    lVar2 = uVar5 + lVar9;
    return (((uint)((ulong)lVar9 >> 0x20) ^ (uint)(uVar8 >> 0x10)) >> 0xb ^ (uint)(uVar5 >> 0x2f) ^
            (uint)((ulong)lVar2 >> 0x20) ^ (uint)lVar2) & 0x7fff;
  }
  uVar4 = (*param_2 != 0 ^ 0x2325) * 0x4a21;
  if (*param_2 != 0) {
    lVar9 = param_2[2];
    if (lVar9 != 0) {
      pbVar6 = (byte *)param_2[1];
      do {
        lVar9 = lVar9 + -1;
        uVar4 = (uVar4 ^ *pbVar6) * 0x1b3;
        pbVar6 = pbVar6 + 1;
      } while (lVar9 != 0);
    }
    return uVar4 & 0x7fff;
  }
  return (uVar4 ^ *(byte *)(param_2 + 1)) * 0x4a21 & 0x7fff;
}


// ===== 007c4934  FUN_007c4934 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_007c4934(long *param_1,byte *param_2)

{
  ulong uVar1;
  long lVar2;
  byte *pbVar3;
  byte bVar4;
  ulong *puVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  long local_80;
  long lStack_78;
  ulong local_70;
  ulong uStack_68;
  long lStack_60;
  long lStack_58;
  long local_50;
  ulong uStack_48;
  undefined8 local_40;
  ulong local_18;
  
  if (*param_1 != 2) {
    bVar4 = param_2[0x10];
    uVar7 = (bVar4 != 2 ^ 0x2325) * 0x4a21;
    if (bVar4 != 2) {
      pbVar3 = *(byte **)param_2;
      lVar6 = *(long *)(param_2 + 8);
      if ((bVar4 & 1) == 0) {
        for (; lVar6 != 0; lVar6 = lVar6 + -1) {
          uVar7 = (uVar7 ^ (byte)""[*pbVar3]) * 0x1b3;
          pbVar3 = pbVar3 + 1;
        }
      }
      else {
        for (; lVar6 != 0; lVar6 = lVar6 + -1) {
          uVar7 = (uVar7 ^ *pbVar3) * 0x1b3;
          pbVar3 = pbVar3 + 1;
        }
      }
    }
    else {
      uVar7 = (uVar7 ^ *param_2) * 0x4a21;
    }
    return uVar7 & 0x7fff;
  }
  lStack_58 = param_1[2];
  lStack_60 = param_1[1];
  bVar4 = param_2[0x10];
  local_18 = (ulong)(bVar4 != 2);
  local_50 = 0;
  uStack_48 = 0;
  bVar11 = (byte)((ulong)lStack_60 >> 8);
  bVar12 = (byte)((ulong)lStack_60 >> 0x10);
  bVar13 = (byte)((ulong)lStack_60 >> 0x18);
  bVar14 = (byte)((ulong)lStack_60 >> 0x20);
  bVar15 = (byte)((ulong)lStack_60 >> 0x28);
  bVar16 = (byte)((ulong)lStack_60 >> 0x30);
  bVar17 = (byte)((ulong)lStack_60 >> 0x38);
  local_80 = CONCAT17(bVar17 ^ (byte)((ulong)_DAT_0029fb60 >> 0x38),
                      CONCAT16(bVar16 ^ (byte)((ulong)_DAT_0029fb60 >> 0x30),
                               CONCAT15(bVar15 ^ (byte)((ulong)_DAT_0029fb60 >> 0x28),
                                        CONCAT14(bVar14 ^ (byte)((ulong)_DAT_0029fb60 >> 0x20),
                                                 CONCAT13(bVar13 ^ (byte)((ulong)_DAT_0029fb60 >>
                                                                         0x18),
                                                          CONCAT12(bVar12 ^ (byte)((ulong)
                                                  _DAT_0029fb60 >> 0x10),
                                                  CONCAT11(bVar11 ^ (byte)((ulong)_DAT_0029fb60 >> 8
                                                                          ),
                                                           (byte)lStack_60 ^ (byte)_DAT_0029fb60))))
                                       )));
  lStack_78 = CONCAT17(bVar17 ^ (byte)((ulong)_UNK_0029fb68 >> 0x38),
                       CONCAT16(bVar16 ^ (byte)((ulong)_UNK_0029fb68 >> 0x30),
                                CONCAT15(bVar15 ^ (byte)((ulong)_UNK_0029fb68 >> 0x28),
                                         CONCAT14(bVar14 ^ (byte)((ulong)_UNK_0029fb68 >> 0x20),
                                                  CONCAT13(bVar13 ^ (byte)((ulong)_UNK_0029fb68 >>
                                                                          0x18),
                                                           CONCAT12(bVar12 ^ (byte)((ulong)
                                                  _UNK_0029fb68 >> 0x10),
                                                  CONCAT11(bVar11 ^ (byte)((ulong)_UNK_0029fb68 >> 8
                                                                          ),
                                                           (byte)lStack_60 ^ (byte)_UNK_0029fb68))))
                                        )));
  bVar11 = (byte)((ulong)lStack_58 >> 8);
  bVar12 = (byte)((ulong)lStack_58 >> 0x10);
  bVar13 = (byte)((ulong)lStack_58 >> 0x18);
  bVar14 = (byte)((ulong)lStack_58 >> 0x20);
  bVar15 = (byte)((ulong)lStack_58 >> 0x28);
  bVar16 = (byte)((ulong)lStack_58 >> 0x30);
  bVar17 = (byte)((ulong)lStack_58 >> 0x38);
  local_70 = CONCAT17(bVar17 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x38),
                      CONCAT16(bVar16 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x30),
                               CONCAT15(bVar15 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x28),
                                        CONCAT14(bVar14 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x20),
                                                 CONCAT13(bVar13 ^ (byte)((ulong)_DAT_0029f5c0 >>
                                                                         0x18),
                                                          CONCAT12(bVar12 ^ (byte)((ulong)
                                                  _DAT_0029f5c0 >> 0x10),
                                                  CONCAT11(bVar11 ^ (byte)((ulong)_DAT_0029f5c0 >> 8
                                                                          ),
                                                           (byte)lStack_58 ^ (byte)_DAT_0029f5c0))))
                                       )));
  uStack_68 = CONCAT17(bVar17 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x38),
                       CONCAT16(bVar16 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x30),
                                CONCAT15(bVar15 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x28),
                                         CONCAT14(bVar14 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x20),
                                                  CONCAT13(bVar13 ^ (byte)((ulong)_UNK_0029f5c8 >>
                                                                          0x18),
                                                           CONCAT12(bVar12 ^ (byte)((ulong)
                                                  _UNK_0029f5c8 >> 0x10),
                                                  CONCAT11(bVar11 ^ (byte)((ulong)_UNK_0029f5c8 >> 8
                                                                          ),
                                                           (byte)lStack_58 ^ (byte)_UNK_0029f5c8))))
                                        )));
  local_40 = 0;
  FUN_007c75fc(&local_80,&local_18,8);
  if (bVar4 == 2) {
    local_18 = (ulong)*param_2;
    puVar5 = &local_18;
    lVar6 = 8;
  }
  else {
    puVar5 = *(ulong **)param_2;
    lVar6 = *(long *)(param_2 + 8);
    if ((bVar4 & 1) == 0) {
      for (; lVar6 != 0; lVar6 = lVar6 + -1) {
        uVar8 = local_18 >> 8;
        local_18 = CONCAT71((int7)uVar8,""[(byte)*puVar5]);
        FUN_007c75fc(&local_80,&local_18,1);
        puVar5 = (ulong *)((long)puVar5 + 1);
      }
      goto LAB_007c4a40;
    }
  }
  FUN_007c75fc(&local_80,puVar5,lVar6);
LAB_007c4a40:
  uStack_48 = uStack_48 | local_50 << 0x38;
  uStack_68 = uStack_48 ^ uStack_68;
  uVar8 = local_70 + local_80;
  uVar9 = uVar8 ^ (local_70 >> 0x33 | local_70 << 0xd);
  uVar10 = uStack_68 + lStack_78 ^ (uStack_68 >> 0x30 | uStack_68 << 0x10);
  uVar1 = uStack_68 + lStack_78 + uVar9;
  uVar8 = uVar10 + (uVar8 >> 0x20 | uVar8 << 0x20);
  uVar9 = uVar1 ^ (uVar9 >> 0x2f | uVar9 << 0x11);
  uVar10 = uVar8 ^ (uVar10 >> 0x2b | uVar10 << 0x15);
  uVar8 = (uVar8 ^ uStack_48) + uVar9;
  uVar1 = uVar10 + ((uVar1 >> 0x20 | uVar1 << 0x20) ^ 0xff);
  uVar9 = uVar8 ^ (uVar9 >> 0x33 | uVar9 << 0xd);
  uVar10 = uVar1 ^ (uVar10 >> 0x30 | uVar10 << 0x10);
  uVar1 = uVar9 + uVar1;
  uVar8 = uVar10 + (uVar8 >> 0x20 | uVar8 << 0x20);
  uVar9 = uVar1 ^ (uVar9 >> 0x2f | uVar9 << 0x11);
  uVar10 = uVar8 ^ (uVar10 >> 0x2b | uVar10 << 0x15);
  uVar8 = uVar9 + uVar8;
  uVar1 = uVar10 + (uVar1 >> 0x20 | uVar1 << 0x20);
  uVar9 = uVar8 ^ (uVar9 >> 0x33 | uVar9 << 0xd);
  uVar10 = uVar1 ^ (uVar10 >> 0x30 | uVar10 << 0x10);
  uVar1 = uVar9 + uVar1;
  uVar8 = uVar10 + (uVar8 >> 0x20 | uVar8 << 0x20);
  uVar9 = uVar1 ^ (uVar9 >> 0x2f | uVar9 << 0x11);
  uVar10 = uVar8 ^ (uVar10 >> 0x2b | uVar10 << 0x15);
  lVar6 = uVar10 + (uVar1 >> 0x20 | uVar1 << 0x20);
  uVar8 = uVar9 + uVar8 ^ (uVar9 >> 0x33 | uVar9 << 0xd);
  lVar2 = uVar8 + lVar6;
  return (((uint)((ulong)lVar6 >> 0x20) ^ (uint)(uVar10 >> 0x10)) >> 0xb ^ (uint)(uVar8 >> 0x2f) ^
          (uint)((ulong)lVar2 >> 0x20) ^ (uint)lVar2) & 0x7fff;
}


// ===== 007c4ba0  FUN_007c4ba0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_007c4ba0(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong *puVar3;
  uint uVar4;
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  long local_70;
  long lStack_68;
  ulong local_60;
  ulong uStack_58;
  long lStack_50;
  long lStack_48;
  long local_40;
  ulong uStack_38;
  undefined8 local_30;
  ulong local_28;
  
  if (*param_1 == 2) {
    lStack_48 = param_1[2];
    lStack_50 = param_1[1];
    param_2 = (long *)*param_2;
    lVar9 = *param_2;
    local_40 = 0;
    uStack_38 = 0;
    bVar10 = (byte)((ulong)lStack_50 >> 8);
    bVar11 = (byte)((ulong)lStack_50 >> 0x10);
    bVar12 = (byte)((ulong)lStack_50 >> 0x18);
    bVar13 = (byte)((ulong)lStack_50 >> 0x20);
    bVar14 = (byte)((ulong)lStack_50 >> 0x28);
    bVar15 = (byte)((ulong)lStack_50 >> 0x30);
    bVar16 = (byte)((ulong)lStack_50 >> 0x38);
    local_70 = CONCAT17(bVar16 ^ (byte)((ulong)_DAT_0029fb60 >> 0x38),
                        CONCAT16(bVar15 ^ (byte)((ulong)_DAT_0029fb60 >> 0x30),
                                 CONCAT15(bVar14 ^ (byte)((ulong)_DAT_0029fb60 >> 0x28),
                                          CONCAT14(bVar13 ^ (byte)((ulong)_DAT_0029fb60 >> 0x20),
                                                   CONCAT13(bVar12 ^ (byte)((ulong)_DAT_0029fb60 >>
                                                                           0x18),
                                                            CONCAT12(bVar11 ^ (byte)((ulong)
                                                  _DAT_0029fb60 >> 0x10),
                                                  CONCAT11(bVar10 ^ (byte)((ulong)_DAT_0029fb60 >> 8
                                                                          ),
                                                           (byte)lStack_50 ^ (byte)_DAT_0029fb60))))
                                         )));
    lStack_68 = CONCAT17(bVar16 ^ (byte)((ulong)_UNK_0029fb68 >> 0x38),
                         CONCAT16(bVar15 ^ (byte)((ulong)_UNK_0029fb68 >> 0x30),
                                  CONCAT15(bVar14 ^ (byte)((ulong)_UNK_0029fb68 >> 0x28),
                                           CONCAT14(bVar13 ^ (byte)((ulong)_UNK_0029fb68 >> 0x20),
                                                    CONCAT13(bVar12 ^ (byte)((ulong)_UNK_0029fb68 >>
                                                                            0x18),
                                                             CONCAT12(bVar11 ^ (byte)((ulong)
                                                  _UNK_0029fb68 >> 0x10),
                                                  CONCAT11(bVar10 ^ (byte)((ulong)_UNK_0029fb68 >> 8
                                                                          ),
                                                           (byte)lStack_50 ^ (byte)_UNK_0029fb68))))
                                          )));
    bVar10 = (byte)((ulong)lStack_48 >> 8);
    bVar11 = (byte)((ulong)lStack_48 >> 0x10);
    bVar12 = (byte)((ulong)lStack_48 >> 0x18);
    bVar13 = (byte)((ulong)lStack_48 >> 0x20);
    bVar14 = (byte)((ulong)lStack_48 >> 0x28);
    bVar15 = (byte)((ulong)lStack_48 >> 0x30);
    bVar16 = (byte)((ulong)lStack_48 >> 0x38);
    local_60 = CONCAT17(bVar16 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x38),
                        CONCAT16(bVar15 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x30),
                                 CONCAT15(bVar14 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x28),
                                          CONCAT14(bVar13 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x20),
                                                   CONCAT13(bVar12 ^ (byte)((ulong)_DAT_0029f5c0 >>
                                                                           0x18),
                                                            CONCAT12(bVar11 ^ (byte)((ulong)
                                                  _DAT_0029f5c0 >> 0x10),
                                                  CONCAT11(bVar10 ^ (byte)((ulong)_DAT_0029f5c0 >> 8
                                                                          ),
                                                           (byte)lStack_48 ^ (byte)_DAT_0029f5c0))))
                                         )));
    uStack_58 = CONCAT17(bVar16 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x38),
                         CONCAT16(bVar15 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x30),
                                  CONCAT15(bVar14 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x28),
                                           CONCAT14(bVar13 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x20),
                                                    CONCAT13(bVar12 ^ (byte)((ulong)_UNK_0029f5c8 >>
                                                                            0x18),
                                                             CONCAT12(bVar11 ^ (byte)((ulong)
                                                  _UNK_0029f5c8 >> 0x10),
                                                  CONCAT11(bVar10 ^ (byte)((ulong)_UNK_0029f5c8 >> 8
                                                                          ),
                                                           (byte)lStack_48 ^ (byte)_UNK_0029f5c8))))
                                          )));
    local_28 = (ulong)(lVar9 != 0);
    local_30 = 0;
    FUN_007c75fc(&local_70,&local_28,8);
    if (lVar9 == 0) {
      local_28 = (ulong)*(byte *)(param_2 + 1);
      puVar3 = &local_28;
      lVar9 = 8;
    }
    else {
      puVar3 = (ulong *)param_2[1];
      lVar9 = param_2[2];
    }
    FUN_007c75fc(&local_70,puVar3,lVar9);
    uStack_38 = uStack_38 | local_40 << 0x38;
    uStack_58 = uStack_38 ^ uStack_58;
    uVar5 = local_60 + local_70;
    uVar7 = uVar5 ^ (local_60 >> 0x33 | local_60 << 0xd);
    uVar8 = uStack_58 + lStack_68 ^ (uStack_58 >> 0x30 | uStack_58 << 0x10);
    uVar1 = uStack_58 + lStack_68 + uVar7;
    uVar5 = uVar8 + (uVar5 >> 0x20 | uVar5 << 0x20);
    uVar7 = uVar1 ^ (uVar7 >> 0x2f | uVar7 << 0x11);
    uVar8 = uVar5 ^ (uVar8 >> 0x2b | uVar8 << 0x15);
    uVar5 = (uVar5 ^ uStack_38) + uVar7;
    uVar1 = uVar8 + ((uVar1 >> 0x20 | uVar1 << 0x20) ^ 0xff);
    uVar7 = uVar5 ^ (uVar7 >> 0x33 | uVar7 << 0xd);
    uVar8 = uVar1 ^ (uVar8 >> 0x30 | uVar8 << 0x10);
    uVar1 = uVar7 + uVar1;
    uVar5 = uVar8 + (uVar5 >> 0x20 | uVar5 << 0x20);
    uVar7 = uVar1 ^ (uVar7 >> 0x2f | uVar7 << 0x11);
    uVar8 = uVar5 ^ (uVar8 >> 0x2b | uVar8 << 0x15);
    uVar5 = uVar7 + uVar5;
    uVar1 = uVar8 + (uVar1 >> 0x20 | uVar1 << 0x20);
    uVar7 = uVar5 ^ (uVar7 >> 0x33 | uVar7 << 0xd);
    uVar8 = uVar1 ^ (uVar8 >> 0x30 | uVar8 << 0x10);
    uVar1 = uVar7 + uVar1;
    uVar5 = uVar8 + (uVar5 >> 0x20 | uVar5 << 0x20);
    uVar7 = uVar1 ^ (uVar7 >> 0x2f | uVar7 << 0x11);
    uVar8 = uVar5 ^ (uVar8 >> 0x2b | uVar8 << 0x15);
    lVar9 = uVar8 + (uVar1 >> 0x20 | uVar1 << 0x20);
    uVar5 = uVar7 + uVar5 ^ (uVar7 >> 0x33 | uVar7 << 0xd);
    lVar2 = uVar5 + lVar9;
    return (((uint)((ulong)lVar9 >> 0x20) ^ (uint)(uVar8 >> 0x10)) >> 0xb ^ (uint)(uVar5 >> 0x2f) ^
            (uint)((ulong)lVar2 >> 0x20) ^ (uint)lVar2) & 0x7fff;
  }
  param_2 = (long *)*param_2;
  uVar4 = (*param_2 != 0 ^ 0x2325) * 0x4a21;
  if (*param_2 != 0) {
    lVar9 = param_2[2];
    if (lVar9 != 0) {
      pbVar6 = (byte *)param_2[1];
      do {
        lVar9 = lVar9 + -1;
        uVar4 = (uVar4 ^ *pbVar6) * 0x1b3;
        pbVar6 = pbVar6 + 1;
      } while (lVar9 != 0);
    }
    return uVar4 & 0x7fff;
  }
  return (uVar4 ^ *(byte *)(param_2 + 1)) * 0x4a21 & 0x7fff;
}


// ===== 007c4da0  FUN_007c4da0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_007c4da0(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  long local_60;
  long lStack_58;
  ulong local_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long local_30;
  ulong local_28;
  undefined8 uStack_20;
  undefined1 local_14 [4];
  
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  local_28 = 0;
  uStack_20 = 0;
  local_30 = 0;
  bVar5 = (byte)((ulong)uStack_40 >> 8);
  bVar6 = (byte)((ulong)uStack_40 >> 0x10);
  bVar7 = (byte)((ulong)uStack_40 >> 0x18);
  bVar8 = (byte)((ulong)uStack_40 >> 0x20);
  bVar9 = (byte)((ulong)uStack_40 >> 0x28);
  bVar10 = (byte)((ulong)uStack_40 >> 0x30);
  bVar11 = (byte)((ulong)uStack_40 >> 0x38);
  local_60 = CONCAT17(bVar11 ^ (byte)((ulong)_DAT_0029fb60 >> 0x38),
                      CONCAT16(bVar10 ^ (byte)((ulong)_DAT_0029fb60 >> 0x30),
                               CONCAT15(bVar9 ^ (byte)((ulong)_DAT_0029fb60 >> 0x28),
                                        CONCAT14(bVar8 ^ (byte)((ulong)_DAT_0029fb60 >> 0x20),
                                                 CONCAT13(bVar7 ^ (byte)((ulong)_DAT_0029fb60 >>
                                                                        0x18),
                                                          CONCAT12(bVar6 ^ (byte)((ulong)
                                                  _DAT_0029fb60 >> 0x10),
                                                  CONCAT11(bVar5 ^ (byte)((ulong)_DAT_0029fb60 >> 8)
                                                           ,(byte)uStack_40 ^ (byte)_DAT_0029fb60)))
                                                ))));
  lStack_58 = CONCAT17(bVar11 ^ (byte)((ulong)_UNK_0029fb68 >> 0x38),
                       CONCAT16(bVar10 ^ (byte)((ulong)_UNK_0029fb68 >> 0x30),
                                CONCAT15(bVar9 ^ (byte)((ulong)_UNK_0029fb68 >> 0x28),
                                         CONCAT14(bVar8 ^ (byte)((ulong)_UNK_0029fb68 >> 0x20),
                                                  CONCAT13(bVar7 ^ (byte)((ulong)_UNK_0029fb68 >>
                                                                         0x18),
                                                           CONCAT12(bVar6 ^ (byte)((ulong)
                                                  _UNK_0029fb68 >> 0x10),
                                                  CONCAT11(bVar5 ^ (byte)((ulong)_UNK_0029fb68 >> 8)
                                                           ,(byte)uStack_40 ^ (byte)_UNK_0029fb68)))
                                                 ))));
  bVar5 = (byte)((ulong)uStack_38 >> 8);
  bVar6 = (byte)((ulong)uStack_38 >> 0x10);
  bVar7 = (byte)((ulong)uStack_38 >> 0x18);
  bVar8 = (byte)((ulong)uStack_38 >> 0x20);
  bVar9 = (byte)((ulong)uStack_38 >> 0x28);
  bVar10 = (byte)((ulong)uStack_38 >> 0x30);
  bVar11 = (byte)((ulong)uStack_38 >> 0x38);
  local_50 = CONCAT17(bVar11 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x38),
                      CONCAT16(bVar10 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x30),
                               CONCAT15(bVar9 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x28),
                                        CONCAT14(bVar8 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x20),
                                                 CONCAT13(bVar7 ^ (byte)((ulong)_DAT_0029f5c0 >>
                                                                        0x18),
                                                          CONCAT12(bVar6 ^ (byte)((ulong)
                                                  _DAT_0029f5c0 >> 0x10),
                                                  CONCAT11(bVar5 ^ (byte)((ulong)_DAT_0029f5c0 >> 8)
                                                           ,(byte)uStack_38 ^ (byte)_DAT_0029f5c0)))
                                                ))));
  uStack_48 = CONCAT17(bVar11 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x38),
                       CONCAT16(bVar10 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x30),
                                CONCAT15(bVar9 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x28),
                                         CONCAT14(bVar8 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x20),
                                                  CONCAT13(bVar7 ^ (byte)((ulong)_UNK_0029f5c8 >>
                                                                         0x18),
                                                           CONCAT12(bVar6 ^ (byte)((ulong)
                                                  _UNK_0029f5c8 >> 0x10),
                                                  CONCAT11(bVar5 ^ (byte)((ulong)_UNK_0029f5c8 >> 8)
                                                           ,(byte)uStack_38 ^ (byte)_UNK_0029f5c8)))
                                                 ))));
  FUN_007c75fc(&local_60,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  local_14[0] = 0xff;
  FUN_007c75fc(&local_60,local_14,1);
  local_28 = local_28 | local_30 << 0x38;
  uStack_48 = local_28 ^ uStack_48;
  uVar2 = local_50 + local_60;
  uVar3 = uVar2 ^ (local_50 >> 0x33 | local_50 << 0xd);
  uVar4 = uStack_48 + lStack_58 ^ (uStack_48 >> 0x30 | uStack_48 << 0x10);
  uVar1 = uStack_48 + lStack_58 + uVar3;
  uVar2 = uVar4 + (uVar2 >> 0x20 | uVar2 << 0x20);
  uVar3 = uVar1 ^ (uVar3 >> 0x2f | uVar3 << 0x11);
  uVar4 = uVar2 ^ (uVar4 >> 0x2b | uVar4 << 0x15);
  uVar2 = (uVar2 ^ local_28) + uVar3;
  uVar1 = uVar4 + ((uVar1 >> 0x20 | uVar1 << 0x20) ^ 0xff);
  uVar3 = uVar2 ^ (uVar3 >> 0x33 | uVar3 << 0xd);
  uVar4 = uVar1 ^ (uVar4 >> 0x30 | uVar4 << 0x10);
  uVar1 = uVar3 + uVar1;
  uVar2 = uVar4 + (uVar2 >> 0x20 | uVar2 << 0x20);
  uVar3 = uVar1 ^ (uVar3 >> 0x2f | uVar3 << 0x11);
  uVar4 = uVar2 ^ (uVar4 >> 0x2b | uVar4 << 0x15);
  uVar2 = uVar3 + uVar2;
  uVar1 = uVar4 + (uVar1 >> 0x20 | uVar1 << 0x20);
  uVar3 = uVar2 ^ (uVar3 >> 0x33 | uVar3 << 0xd);
  uVar4 = uVar1 ^ (uVar4 >> 0x30 | uVar4 << 0x10);
  uVar1 = uVar3 + uVar1;
  uVar2 = uVar4 + (uVar2 >> 0x20 | uVar2 << 0x20);
  uVar3 = uVar1 ^ (uVar3 >> 0x2f | uVar3 << 0x11);
  uVar4 = uVar2 ^ (uVar4 >> 0x2b | uVar4 << 0x15);
  uVar1 = uVar4 + (uVar1 >> 0x20 | uVar1 << 0x20);
  uVar2 = uVar3 + uVar2 ^ (uVar3 >> 0x33 | uVar3 << 0xd);
  uVar3 = uVar1 ^ (uVar4 >> 0x30 | uVar4 << 0x10);
  uVar1 = uVar2 + uVar1;
  return (uVar3 >> 0x2b | uVar3 << 0x15) ^ (uVar2 >> 0x2f | uVar2 << 0x11) ^
         (uVar1 >> 0x20 | uVar1 << 0x20) ^ uVar1;
}


// ===== 007c4ecc  FUN_007c4ecc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_007c4ecc(undefined8 *param_1,char *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  byte *pbVar5;
  long lVar6;
  long lVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  long local_80;
  long lStack_78;
  ulong local_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long local_50;
  ulong local_48;
  undefined8 uStack_40;
  long local_38;
  
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  bVar8 = (byte)((ulong)uStack_60 >> 8);
  bVar9 = (byte)((ulong)uStack_60 >> 0x10);
  bVar10 = (byte)((ulong)uStack_60 >> 0x18);
  bVar11 = (byte)((ulong)uStack_60 >> 0x20);
  bVar12 = (byte)((ulong)uStack_60 >> 0x28);
  bVar13 = (byte)((ulong)uStack_60 >> 0x30);
  bVar14 = (byte)((ulong)uStack_60 >> 0x38);
  local_80 = CONCAT17(bVar14 ^ (byte)((ulong)_DAT_0029fb60 >> 0x38),
                      CONCAT16(bVar13 ^ (byte)((ulong)_DAT_0029fb60 >> 0x30),
                               CONCAT15(bVar12 ^ (byte)((ulong)_DAT_0029fb60 >> 0x28),
                                        CONCAT14(bVar11 ^ (byte)((ulong)_DAT_0029fb60 >> 0x20),
                                                 CONCAT13(bVar10 ^ (byte)((ulong)_DAT_0029fb60 >>
                                                                         0x18),
                                                          CONCAT12(bVar9 ^ (byte)((ulong)
                                                  _DAT_0029fb60 >> 0x10),
                                                  CONCAT11(bVar8 ^ (byte)((ulong)_DAT_0029fb60 >> 8)
                                                           ,(byte)uStack_60 ^ (byte)_DAT_0029fb60)))
                                                ))));
  lStack_78 = CONCAT17(bVar14 ^ (byte)((ulong)_UNK_0029fb68 >> 0x38),
                       CONCAT16(bVar13 ^ (byte)((ulong)_UNK_0029fb68 >> 0x30),
                                CONCAT15(bVar12 ^ (byte)((ulong)_UNK_0029fb68 >> 0x28),
                                         CONCAT14(bVar11 ^ (byte)((ulong)_UNK_0029fb68 >> 0x20),
                                                  CONCAT13(bVar10 ^ (byte)((ulong)_UNK_0029fb68 >>
                                                                          0x18),
                                                           CONCAT12(bVar9 ^ (byte)((ulong)
                                                  _UNK_0029fb68 >> 0x10),
                                                  CONCAT11(bVar8 ^ (byte)((ulong)_UNK_0029fb68 >> 8)
                                                           ,(byte)uStack_60 ^ (byte)_UNK_0029fb68)))
                                                 ))));
  bVar8 = (byte)((ulong)uStack_58 >> 8);
  bVar9 = (byte)((ulong)uStack_58 >> 0x10);
  bVar10 = (byte)((ulong)uStack_58 >> 0x18);
  bVar11 = (byte)((ulong)uStack_58 >> 0x20);
  bVar12 = (byte)((ulong)uStack_58 >> 0x28);
  bVar13 = (byte)((ulong)uStack_58 >> 0x30);
  bVar14 = (byte)((ulong)uStack_58 >> 0x38);
  local_70 = CONCAT17(bVar14 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x38),
                      CONCAT16(bVar13 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x30),
                               CONCAT15(bVar12 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x28),
                                        CONCAT14(bVar11 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x20),
                                                 CONCAT13(bVar10 ^ (byte)((ulong)_DAT_0029f5c0 >>
                                                                         0x18),
                                                          CONCAT12(bVar9 ^ (byte)((ulong)
                                                  _DAT_0029f5c0 >> 0x10),
                                                  CONCAT11(bVar8 ^ (byte)((ulong)_DAT_0029f5c0 >> 8)
                                                           ,(byte)uStack_58 ^ (byte)_DAT_0029f5c0)))
                                                ))));
  uStack_68 = CONCAT17(bVar14 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x38),
                       CONCAT16(bVar13 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x30),
                                CONCAT15(bVar12 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x28),
                                         CONCAT14(bVar11 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x20),
                                                  CONCAT13(bVar10 ^ (byte)((ulong)_UNK_0029f5c8 >>
                                                                          0x18),
                                                           CONCAT12(bVar9 ^ (byte)((ulong)
                                                  _UNK_0029f5c8 >> 0x10),
                                                  CONCAT11(bVar8 ^ (byte)((ulong)_UNK_0029f5c8 >> 8)
                                                           ,(byte)uStack_58 ^ (byte)_UNK_0029f5c8)))
                                                 ))));
  if (*param_2 != '\0') {
    if (*param_2 == '\x01') {
      if ((param_2[1] & 1U) == 0) {
        local_38 = CONCAT71(local_38._1_7_,1);
      }
      else {
        local_38 = CONCAT71(local_38._1_7_,2);
      }
      FUN_007c75fc(&local_80,&local_38,1);
    }
    else {
      lVar7 = *(long *)(param_2 + 8);
      lVar6 = *(long *)(lVar7 + 0x10);
      local_38 = lVar6;
      FUN_007c75fc(&local_80,&local_38,8);
      if (lVar6 != 0) {
        pbVar5 = *(byte **)(lVar7 + 8);
        do {
          bVar8 = 0x20;
          if (0x19 < *pbVar5 - 0x41) {
            bVar8 = 0;
          }
          local_38 = CONCAT71(local_38._1_7_,bVar8 | *pbVar5);
          FUN_007c75fc(&local_80,&local_38,1);
          lVar6 = lVar6 + -1;
          pbVar5 = pbVar5 + 1;
        } while (lVar6 != 0);
      }
    }
  }
  lVar6 = *(long *)(param_2 + 0x20);
  local_38 = lVar6;
  FUN_007c75fc(&local_80,&local_38,8);
  if (lVar6 != 0) {
    pbVar5 = *(byte **)(param_2 + 0x18);
    do {
      bVar8 = 0x20;
      if (0x19 < *pbVar5 - 0x41) {
        bVar8 = 0;
      }
      local_38 = CONCAT71(local_38._1_7_,bVar8 | *pbVar5);
      FUN_007c75fc(&local_80,&local_38,1);
      lVar6 = lVar6 + -1;
      pbVar5 = pbVar5 + 1;
    } while (lVar6 != 0);
  }
  local_48 = local_48 | local_50 << 0x38;
  uStack_68 = local_48 ^ uStack_68;
  uVar2 = local_70 + local_80;
  uVar3 = uVar2 ^ (local_70 >> 0x33 | local_70 << 0xd);
  uVar4 = uStack_68 + lStack_78 ^ (uStack_68 >> 0x30 | uStack_68 << 0x10);
  uVar1 = uStack_68 + lStack_78 + uVar3;
  uVar2 = uVar4 + (uVar2 >> 0x20 | uVar2 << 0x20);
  uVar3 = uVar1 ^ (uVar3 >> 0x2f | uVar3 << 0x11);
  uVar4 = uVar2 ^ (uVar4 >> 0x2b | uVar4 << 0x15);
  uVar2 = (uVar2 ^ local_48) + uVar3;
  uVar1 = uVar4 + ((uVar1 >> 0x20 | uVar1 << 0x20) ^ 0xff);
  uVar3 = uVar2 ^ (uVar3 >> 0x33 | uVar3 << 0xd);
  uVar4 = uVar1 ^ (uVar4 >> 0x30 | uVar4 << 0x10);
  uVar1 = uVar3 + uVar1;
  uVar2 = uVar4 + (uVar2 >> 0x20 | uVar2 << 0x20);
  uVar3 = uVar1 ^ (uVar3 >> 0x2f | uVar3 << 0x11);
  uVar4 = uVar2 ^ (uVar4 >> 0x2b | uVar4 << 0x15);
  uVar2 = uVar3 + uVar2;
  uVar1 = uVar4 + (uVar1 >> 0x20 | uVar1 << 0x20);
  uVar3 = uVar2 ^ (uVar3 >> 0x33 | uVar3 << 0xd);
  uVar4 = uVar1 ^ (uVar4 >> 0x30 | uVar4 << 0x10);
  uVar1 = uVar3 + uVar1;
  uVar2 = uVar4 + (uVar2 >> 0x20 | uVar2 << 0x20);
  uVar3 = uVar1 ^ (uVar3 >> 0x2f | uVar3 << 0x11);
  uVar4 = uVar2 ^ (uVar4 >> 0x2b | uVar4 << 0x15);
  uVar1 = uVar4 + (uVar1 >> 0x20 | uVar1 << 0x20);
  uVar2 = uVar3 + uVar2 ^ (uVar3 >> 0x33 | uVar3 << 0xd);
  uVar3 = uVar1 ^ (uVar4 >> 0x30 | uVar4 << 0x10);
  uVar1 = uVar2 + uVar1;
  return (uVar3 >> 0x2b | uVar3 << 0x15) ^ (uVar2 >> 0x2f | uVar2 << 0x11) ^
         (uVar1 >> 0x20 | uVar1 << 0x20) ^ uVar1;
}


// ===== 007c50d0  FUN_007c50d0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_007c50d0(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  long local_60;
  long lStack_58;
  ulong local_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long local_30;
  ulong local_28;
  undefined8 uStack_20;
  undefined1 local_14 [4];
  
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  local_28 = 0;
  uStack_20 = 0;
  local_30 = 0;
  bVar5 = (byte)((ulong)uStack_40 >> 8);
  bVar6 = (byte)((ulong)uStack_40 >> 0x10);
  bVar7 = (byte)((ulong)uStack_40 >> 0x18);
  bVar8 = (byte)((ulong)uStack_40 >> 0x20);
  bVar9 = (byte)((ulong)uStack_40 >> 0x28);
  bVar10 = (byte)((ulong)uStack_40 >> 0x30);
  bVar11 = (byte)((ulong)uStack_40 >> 0x38);
  local_60 = CONCAT17(bVar11 ^ (byte)((ulong)_DAT_0029fb60 >> 0x38),
                      CONCAT16(bVar10 ^ (byte)((ulong)_DAT_0029fb60 >> 0x30),
                               CONCAT15(bVar9 ^ (byte)((ulong)_DAT_0029fb60 >> 0x28),
                                        CONCAT14(bVar8 ^ (byte)((ulong)_DAT_0029fb60 >> 0x20),
                                                 CONCAT13(bVar7 ^ (byte)((ulong)_DAT_0029fb60 >>
                                                                        0x18),
                                                          CONCAT12(bVar6 ^ (byte)((ulong)
                                                  _DAT_0029fb60 >> 0x10),
                                                  CONCAT11(bVar5 ^ (byte)((ulong)_DAT_0029fb60 >> 8)
                                                           ,(byte)uStack_40 ^ (byte)_DAT_0029fb60)))
                                                ))));
  lStack_58 = CONCAT17(bVar11 ^ (byte)((ulong)_UNK_0029fb68 >> 0x38),
                       CONCAT16(bVar10 ^ (byte)((ulong)_UNK_0029fb68 >> 0x30),
                                CONCAT15(bVar9 ^ (byte)((ulong)_UNK_0029fb68 >> 0x28),
                                         CONCAT14(bVar8 ^ (byte)((ulong)_UNK_0029fb68 >> 0x20),
                                                  CONCAT13(bVar7 ^ (byte)((ulong)_UNK_0029fb68 >>
                                                                         0x18),
                                                           CONCAT12(bVar6 ^ (byte)((ulong)
                                                  _UNK_0029fb68 >> 0x10),
                                                  CONCAT11(bVar5 ^ (byte)((ulong)_UNK_0029fb68 >> 8)
                                                           ,(byte)uStack_40 ^ (byte)_UNK_0029fb68)))
                                                 ))));
  bVar5 = (byte)((ulong)uStack_38 >> 8);
  bVar6 = (byte)((ulong)uStack_38 >> 0x10);
  bVar7 = (byte)((ulong)uStack_38 >> 0x18);
  bVar8 = (byte)((ulong)uStack_38 >> 0x20);
  bVar9 = (byte)((ulong)uStack_38 >> 0x28);
  bVar10 = (byte)((ulong)uStack_38 >> 0x30);
  bVar11 = (byte)((ulong)uStack_38 >> 0x38);
  local_50 = CONCAT17(bVar11 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x38),
                      CONCAT16(bVar10 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x30),
                               CONCAT15(bVar9 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x28),
                                        CONCAT14(bVar8 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x20),
                                                 CONCAT13(bVar7 ^ (byte)((ulong)_DAT_0029f5c0 >>
                                                                        0x18),
                                                          CONCAT12(bVar6 ^ (byte)((ulong)
                                                  _DAT_0029f5c0 >> 0x10),
                                                  CONCAT11(bVar5 ^ (byte)((ulong)_DAT_0029f5c0 >> 8)
                                                           ,(byte)uStack_38 ^ (byte)_DAT_0029f5c0)))
                                                ))));
  uStack_48 = CONCAT17(bVar11 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x38),
                       CONCAT16(bVar10 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x30),
                                CONCAT15(bVar9 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x28),
                                         CONCAT14(bVar8 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x20),
                                                  CONCAT13(bVar7 ^ (byte)((ulong)_UNK_0029f5c8 >>
                                                                         0x18),
                                                           CONCAT12(bVar6 ^ (byte)((ulong)
                                                  _UNK_0029f5c8 >> 0x10),
                                                  CONCAT11(bVar5 ^ (byte)((ulong)_UNK_0029f5c8 >> 8)
                                                           ,(byte)uStack_38 ^ (byte)_UNK_0029f5c8)))
                                                 ))));
  FUN_007c75fc(&local_60);
  local_14[0] = 0xff;
  FUN_007c75fc(&local_60,local_14,1);
  local_28 = local_28 | local_30 << 0x38;
  uStack_48 = local_28 ^ uStack_48;
  uVar2 = local_50 + local_60;
  uVar3 = uVar2 ^ (local_50 >> 0x33 | local_50 << 0xd);
  uVar4 = uStack_48 + lStack_58 ^ (uStack_48 >> 0x30 | uStack_48 << 0x10);
  uVar1 = uStack_48 + lStack_58 + uVar3;
  uVar2 = uVar4 + (uVar2 >> 0x20 | uVar2 << 0x20);
  uVar3 = uVar1 ^ (uVar3 >> 0x2f | uVar3 << 0x11);
  uVar4 = uVar2 ^ (uVar4 >> 0x2b | uVar4 << 0x15);
  uVar2 = (uVar2 ^ local_28) + uVar3;
  uVar1 = uVar4 + ((uVar1 >> 0x20 | uVar1 << 0x20) ^ 0xff);
  uVar3 = uVar2 ^ (uVar3 >> 0x33 | uVar3 << 0xd);
  uVar4 = uVar1 ^ (uVar4 >> 0x30 | uVar4 << 0x10);
  uVar1 = uVar3 + uVar1;
  uVar2 = uVar4 + (uVar2 >> 0x20 | uVar2 << 0x20);
  uVar3 = uVar1 ^ (uVar3 >> 0x2f | uVar3 << 0x11);
  uVar4 = uVar2 ^ (uVar4 >> 0x2b | uVar4 << 0x15);
  uVar2 = uVar3 + uVar2;
  uVar1 = uVar4 + (uVar1 >> 0x20 | uVar1 << 0x20);
  uVar3 = uVar2 ^ (uVar3 >> 0x33 | uVar3 << 0xd);
  uVar4 = uVar1 ^ (uVar4 >> 0x30 | uVar4 << 0x10);
  uVar1 = uVar3 + uVar1;
  uVar2 = uVar4 + (uVar2 >> 0x20 | uVar2 << 0x20);
  uVar3 = uVar1 ^ (uVar3 >> 0x2f | uVar3 << 0x11);
  uVar4 = uVar2 ^ (uVar4 >> 0x2b | uVar4 << 0x15);
  uVar1 = uVar4 + (uVar1 >> 0x20 | uVar1 << 0x20);
  uVar2 = uVar3 + uVar2 ^ (uVar3 >> 0x33 | uVar3 << 0xd);
  uVar3 = uVar1 ^ (uVar4 >> 0x30 | uVar4 << 0x10);
  uVar1 = uVar2 + uVar1;
  return (uVar3 >> 0x2b | uVar3 << 0x15) ^ (uVar2 >> 0x2f | uVar2 << 0x11) ^
         (uVar1 >> 0x20 | uVar1 << 0x20) ^ uVar1;
}


// ===== 007c51f4  FUN_007c51f4 =====

void FUN_007c51f4(void)

{
  long lVar1;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  lVar1 = FUN_004b25a4(0x20,8);
  if (lVar1 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x20);
}


// ===== 007c5224  FUN_007c5224 =====

void FUN_007c5224(long *param_1,long param_2,ulong param_3,ulong param_4)

{
  undefined2 *puVar1;
  short *psVar2;
  short *psVar3;
  ushort uVar4;
  ushort uVar5;
  ulong uVar6;
  ulong extraout_x1;
  undefined **extraout_x8;
  undefined **ppuVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  
  uVar6 = *(ulong *)(param_2 + 0x50);
  if (uVar6 <= param_3) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check
              (param_3,uVar6,&PTR_s__root__cargo_registry_src_index__00ade678);
  }
  uVar8 = *(ulong *)(param_2 + 0x28);
  lVar10 = *(long *)(param_2 + 0x48);
  *(undefined4 *)(lVar10 + param_3 * 4) = 0xffff;
  if (uVar8 <= param_4) {
    <alloc::vec::alloc::vec::Vec<_,_>>::swap_remove::assert_failed(param_4,uVar8);
    ppuVar7 = extraout_x8;
    uVar6 = extraout_x1;
    goto LAB_007c53fc;
  }
  uVar8 = uVar8 - 1;
  plVar11 = (long *)(*(long *)(param_2 + 0x20) + param_4 * 0x68);
  *(ulong *)(param_2 + 0x28) = uVar8;
  plVar13 = (long *)(*(long *)(param_2 + 0x20) + uVar8 * 0x68);
  lVar20 = plVar11[1];
  lVar18 = *plVar11;
  lVar26 = plVar11[3];
  lVar23 = plVar11[2];
  lVar32 = plVar11[5];
  lVar29 = plVar11[4];
  lVar27 = plVar11[9];
  lVar24 = plVar11[8];
  lVar21 = plVar11[0xb];
  lVar19 = plVar11[10];
  lVar9 = plVar11[0xc];
  lVar33 = plVar11[7];
  lVar30 = plVar11[6];
  lVar22 = plVar13[1];
  lVar16 = *plVar13;
  lVar28 = plVar13[3];
  lVar25 = plVar13[2];
  lVar34 = plVar13[9];
  lVar31 = plVar13[8];
  lVar36 = plVar13[0xb];
  lVar35 = plVar13[10];
  lVar38 = plVar13[5];
  lVar37 = plVar13[4];
  lVar40 = plVar13[7];
  lVar39 = plVar13[6];
  plVar11[0xc] = plVar13[0xc];
  plVar11[1] = lVar22;
  *plVar11 = lVar16;
  plVar11[3] = lVar28;
  plVar11[2] = lVar25;
  plVar11[9] = lVar34;
  plVar11[8] = lVar31;
  plVar11[0xb] = lVar36;
  plVar11[10] = lVar35;
  plVar11[5] = lVar38;
  plVar11[4] = lVar37;
  plVar11[7] = lVar40;
  plVar11[6] = lVar39;
  if (param_4 < uVar8) {
    uVar4 = *(ushort *)(plVar11 + 0xc);
    uVar17 = (ulong)(uVar4 & *(ushort *)(param_2 + 0x58));
    while( true ) {
      do {
        uVar14 = uVar17;
        uVar17 = 0;
      } while (uVar6 <= uVar14);
      uVar17 = (ulong)*(ushort *)(lVar10 + uVar14 * 4);
      if ((uVar17 != 0xffff) && (uVar8 <= uVar17)) break;
      uVar17 = uVar14 + 1;
    }
    puVar1 = (undefined2 *)(lVar10 + uVar14 * 4);
    *puVar1 = (short)param_4;
    puVar1[1] = uVar4;
    if (*plVar11 == 1) {
      uVar14 = plVar11[1];
      uVar17 = *(ulong *)(param_2 + 0x40);
      if (uVar17 <= uVar14) {
        ppuVar7 = &PTR_s__root__cargo_registry_src_index__00ade690;
        param_3 = uVar14;
        uVar6 = uVar17;
        goto LAB_007c53fc;
      }
      lVar16 = *(long *)(param_2 + 0x38);
      uVar12 = plVar11[2];
      puVar15 = (undefined8 *)(lVar16 + uVar14 * 0x48);
      *puVar15 = 0;
      puVar15[1] = param_4;
      if (uVar17 <= uVar12) {
        ppuVar7 = &PTR_s__root__cargo_registry_src_index__00ade6a8;
        param_3 = uVar12;
        uVar6 = uVar17;
        goto LAB_007c53fc;
      }
      lVar16 = lVar16 + uVar12 * 0x48;
      *(undefined8 *)(lVar16 + 0x10) = 0;
      *(ulong *)(lVar16 + 0x18) = param_4;
    }
  }
  if (uVar8 == 0) {
LAB_007c53bc:
    param_1[0xc] = lVar9;
    param_1[9] = lVar27;
    param_1[8] = lVar24;
    param_1[0xb] = lVar21;
    param_1[10] = lVar19;
    param_1[1] = lVar20;
    *param_1 = lVar18;
    param_1[3] = lVar26;
    param_1[2] = lVar23;
    param_1[5] = lVar32;
    param_1[4] = lVar29;
    param_1[7] = lVar33;
    param_1[6] = lVar30;
    return;
  }
  uVar4 = *(ushort *)(param_2 + 0x58);
  ppuVar7 = &PTR_s__root__cargo_registry_src_index__00ade6c0;
  while( true ) {
    uVar8 = 0;
    if (param_3 + 1 < uVar6) {
      uVar8 = param_3 + 1;
    }
    psVar2 = (short *)(lVar10 + uVar8 * 4);
    if ((*psVar2 == -1) ||
       (uVar5 = psVar2[1], ((int)uVar8 - (uint)(uVar5 & uVar4) & (uint)uVar4) == 0))
    goto LAB_007c53bc;
    if (uVar6 <= param_3) break;
    psVar3 = (short *)(lVar10 + param_3 * 4);
    *psVar3 = *psVar2;
    psVar3[1] = uVar5;
    *psVar2 = -1;
    psVar2[1] = 0;
    param_3 = uVar8;
  }
LAB_007c53fc:
                    /* try { // try from 007c53fc to 007c540b has its CatchHandler @ 007c5444 */
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_bounds_check(param_3,uVar6,ppuVar7);
}


// ===== 007c545c  FUN_007c545c =====

undefined8 FUN_007c545c(long *param_1)

{
  long lVar1;
  short *psVar2;
  ushort uVar3;
  ushort uVar4;
  short sVar5;
  ushort uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined4 *puVar10;
  ulong uVar11;
  long lVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  short sVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  short sVar19;
  
  uVar8 = param_1[5];
  uVar16 = param_1[10];
  if (*param_1 != 1) {
    if (uVar8 != uVar16 - (uVar16 >> 2)) {
      return 0;
    }
    if (uVar8 == 0) {
      *(undefined2 *)(param_1 + 0xb) = 7;
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      puVar7 = (undefined8 *)FUN_004b25a4(0x20,2);
      if (puVar7 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        alloc::raw_vec::handle_error(2,0x20);
      }
      puVar7[1] = 0xffff0000ffff;
      *puVar7 = 0xffff0000ffff;
      puVar7[3] = 0xffff0000ffff;
      puVar7[2] = 0xffff0000ffff;
      if (uVar16 != 0) {
        free((void *)param_1[9]);
      }
      param_1[9] = (long)puVar7;
      param_1[10] = 8;
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      lVar9 = FUN_004b25a4(0x270,8);
      if (lVar9 != 0) {
                    /* try { // try from 007c5588 to 007c5593 has its CatchHandler @ 007c5778 */
        FUN_0078aa8c(param_1 + 3);
        if (param_1[3] != 0) {
          free((void *)param_1[4]);
        }
        param_1[5] = 0;
        param_1[3] = 6;
        param_1[4] = lVar9;
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(8,0x270);
    }
    uVar8 = FUN_007c5f44(param_1,uVar16 << 1);
joined_r0x007c550c:
    if ((uVar8 & 1) == 0) {
      return 0;
    }
    return 1;
  }
  if ((float)uVar8 / (float)uVar16 < 0.2 == NAN((float)uVar8 / (float)uVar16)) {
    *param_1 = 0;
    uVar8 = FUN_007c5f44(param_1,uVar16 << 1);
    goto joined_r0x007c550c;
  }
  <http::header::map::[12]::http::header::map::Danger>::set_red(param_1);
  lVar9 = param_1[10];
  if (lVar9 == 0) goto LAB_007c562c;
  puVar10 = (undefined4 *)param_1[9];
  uVar8 = lVar9 * 4 - 4;
  puVar13 = puVar10;
  if (0xb < uVar8) {
    uVar16 = (uVar8 >> 2) + 1;
    if (uVar8 < 0x3c) {
      uVar11 = 0;
    }
    else {
      uVar11 = uVar16 & 0x7ffffffffffffff0;
      uVar8 = uVar16 & 0x7ffffffffffffff0;
      puVar7 = (undefined8 *)(puVar10 + 8);
      do {
        uVar8 = uVar8 - 0x10;
        puVar7[-3] = 0xffff0000ffff;
        puVar7[-4] = 0xffff0000ffff;
        puVar7[-1] = 0xffff0000ffff;
        puVar7[-2] = 0xffff0000ffff;
        puVar7[1] = 0xffff0000ffff;
        *puVar7 = 0xffff0000ffff;
        puVar7[3] = 0xffff0000ffff;
        puVar7[2] = 0xffff0000ffff;
        puVar7 = puVar7 + 8;
      } while (uVar8 != 0);
      if (uVar16 == uVar11) goto LAB_007c562c;
      if ((uVar16 & 0xc) == 0) {
        puVar13 = puVar10 + uVar11;
        goto LAB_007c5618;
      }
    }
    uVar8 = uVar16 & 0x7ffffffffffffffc;
    puVar13 = puVar10 + uVar8;
    lVar12 = uVar11 - uVar8;
    puVar7 = (undefined8 *)(puVar10 + uVar11);
    do {
      lVar12 = lVar12 + 4;
      puVar7[1] = 0xffff0000ffff;
      *puVar7 = 0xffff0000ffff;
      puVar7 = puVar7 + 2;
    } while (lVar12 != 0);
    if (uVar16 == uVar8) goto LAB_007c562c;
  }
LAB_007c5618:
  do {
    puVar14 = puVar13 + 1;
    *puVar13 = 0xffff;
    puVar13 = puVar14;
  } while (puVar14 != puVar10 + lVar9);
LAB_007c562c:
  lVar9 = param_1[5];
  if (lVar9 == 0) {
    return 0;
  }
  lVar17 = param_1[4];
  uVar3 = *(ushort *)(param_1 + 0xb);
  lVar12 = param_1[9];
  uVar8 = param_1[10];
  lVar18 = lVar17;
  sVar15 = 0;
  do {
    lVar1 = lVar18 + 0x68;
    uVar6 = FUN_007c4738(param_1,lVar18 + 0x40);
    uVar16 = 0;
    uVar11 = (ulong)(uVar6 & uVar3);
    *(ushort *)(lVar18 + 0x60) = uVar6;
    while( true ) {
      if ((uVar8 <= uVar11) && (uVar11 = 0, uVar8 == 0)) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      psVar2 = (short *)(lVar12 + uVar11 * 4);
      if (*psVar2 == -1) {
        *psVar2 = sVar15;
        *(ushort *)(lVar12 + uVar11 * 4 + 2) = uVar6;
        goto joined_r0x007c572c;
      }
      sVar19 = sVar15;
      if (((ulong)((int)uVar11 - (uint)(psVar2[1] & uVar3)) & (ulong)uVar3) < uVar16) break;
      uVar16 = uVar16 + 1;
      uVar11 = uVar11 + 1;
    }
    while( true ) {
      if ((uVar8 <= uVar11) && (uVar11 = 0, uVar8 == 0)) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      psVar2 = (short *)(lVar12 + uVar11 * 4);
      sVar5 = *psVar2;
      if (sVar5 == -1) break;
      uVar4 = psVar2[1];
      *psVar2 = sVar19;
      uVar11 = uVar11 + 1;
      psVar2[1] = uVar6;
      sVar19 = sVar5;
      uVar6 = uVar4;
    }
    *psVar2 = sVar19;
    *(ushort *)(lVar12 + uVar11 * 4 + 2) = uVar6;
joined_r0x007c572c:
    lVar18 = lVar1;
    sVar15 = sVar15 + 1;
    if (lVar1 == lVar17 + lVar9 * 0x68) {
      return 0;
    }
  } while( true );
}


// ===== 007c57ac  FUN_007c57ac =====

void FUN_007c57ac(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 *puVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long unaff_x22;
  undefined8 uVar11;
  ulong uVar12;
  ulong local_68;
  ulong *local_60;
  undefined *puStack_58;
  
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[3] = 0;
    param_1[4] = 8;
    param_1[7] = 8;
    param_1[8] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[9] = 2;
    param_1[10] = 0;
    *(undefined2 *)(param_1 + 0xb) = 0;
  }
  else {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = param_2;
    auVar4._8_8_ = 2;
    auVar4._0_8_ = 0xaaaaaaaaaaaaaaab;
    uVar1 = SUB168(auVar3 * auVar4,8) >> 1;
    local_68 = param_2;
    if (CARRY8(param_2,param_2 / 3)) {
      local_60 = &local_68;
      puStack_58 = PTR_fmt_00b00c10;
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                (&DAT_002ba43f,&local_60,&PTR_s__root__cargo_registry_src_index__00ade768);
    }
    uVar2 = 0;
    if (1 < uVar1) {
      uVar2 = 0xffffffffffffffff >> (LZCOUNT(uVar1 - 1) & 0x3fU);
    }
    if (uVar2 == 0xffffffffffffffff) {
      *param_1 = 0xffffffffffffffff;
    }
    else {
      uVar1 = uVar2 + 1;
      if (uVar1 < 0x8001) {
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        puVar5 = (undefined4 *)FUN_004b25a4(uVar1 * 4,2);
        if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          alloc::raw_vec::handle_error(2,uVar1 * 4);
        }
        puVar8 = puVar5;
        if (1 < uVar1) {
          if (uVar2 < 0x10) {
            uVar9 = 1;
            puVar7 = puVar5;
          }
          else {
            uVar12 = uVar2 & 0xfffffffffffffff0;
            puVar7 = puVar5 + uVar12;
            uVar9 = uVar12 | 1;
            puVar10 = (undefined8 *)(puVar5 + 8);
            do {
              uVar12 = uVar12 - 0x10;
              puVar10[-3] = 0xffff0000ffff;
              puVar10[-4] = 0xffff0000ffff;
              puVar10[-1] = 0xffff0000ffff;
              puVar10[-2] = 0xffff0000ffff;
              puVar10[1] = 0xffff0000ffff;
              *puVar10 = 0xffff0000ffff;
              puVar10[3] = 0xffff0000ffff;
              puVar10[2] = 0xffff0000ffff;
              puVar10 = puVar10 + 8;
            } while (uVar12 != 0);
          }
          lVar6 = (uVar2 - uVar9) + 1;
          do {
            lVar6 = lVar6 + -1;
            puVar8 = puVar7 + 1;
            *puVar7 = 0xffff;
            puVar7 = puVar8;
          } while (lVar6 != 0);
        }
        uVar12 = uVar1 - (uVar1 >> 2);
        *puVar8 = 0xffff;
        if (0x13b13b13b13b13b < uVar12) {
          uVar11 = 0;
LAB_007c58e0:
                    /* try { // try from 007c58e0 to 007c58eb has its CatchHandler @ 007c5990 */
                    /* WARNING: Subroutine does not return */
          alloc::raw_vec::handle_error(uVar11,unaff_x22);
        }
        if (uVar1 == 0) {
          lVar6 = 8;
        }
        else {
          unaff_x22 = uVar12 * 0x68;
          __rustc::__rust_no_alloc_shim_is_unstable_v2();
          uVar11 = 8;
          lVar6 = FUN_004b25a4(unaff_x22,8);
          if (lVar6 == 0) goto LAB_007c58e0;
        }
        *param_1 = 0;
        param_1[3] = uVar12;
        param_1[4] = lVar6;
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[7] = 8;
        param_1[8] = 0;
        param_1[9] = puVar5;
        param_1[10] = uVar1;
        *(short *)(param_1 + 0xb) = (short)uVar2;
      }
      else {
        *param_1 = 0xffffffffffffffff;
      }
    }
  }
  return;
}


// ===== 007c59ac  FUN_007c59ac =====

undefined1  [16]
FUN_007c59ac(long *param_1,long *param_2,long *param_3,ushort param_4,ulong param_5,int param_6)

{
  ushort *puVar1;
  ulong uVar2;
  ushort uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ushort uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined1 auVar19 [16];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined6 uStack_46;
  
  uVar9 = param_1[5];
  if (uVar9 >> 0xf == 0) {
    lVar13 = param_2[1];
    lVar11 = *param_2;
    lVar16 = param_2[3];
    lVar15 = param_2[2];
    lVar5 = param_3[4];
    lVar18 = param_3[1];
    lVar17 = *param_3;
    lVar14 = param_3[3];
    lVar12 = param_3[2];
    if (uVar9 == param_1[3]) {
                    /* try { // try from 007c5a64 to 007c5a67 has its CatchHandler @ 007c5b40 */
      <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<http[b87e90c26fe47eb4]::header::map::Bucket<http[b87e90c26fe47eb4]::header::value::HeaderValue>>>
      ::grow_one();
    }
    puVar7 = (undefined8 *)(param_1[4] + uVar9 * 0x68);
    uVar6 = 0;
    uVar8 = uVar9 & 0xffffffff;
    puVar7[3] = lVar17;
    puVar7[2] = uStack_98;
    puVar7[5] = lVar12;
    puVar7[4] = lVar18;
    puVar7[1] = uStack_a0;
    *puVar7 = 0;
    puVar7[0xc] = CONCAT62(uStack_46,param_4);
    puVar7[9] = lVar13;
    puVar7[8] = lVar11;
    puVar7[0xb] = lVar16;
    puVar7[10] = lVar15;
    puVar7[7] = lVar5;
    puVar7[6] = lVar14;
    lVar5 = param_1[9];
    uVar2 = param_1[10];
    param_1[5] = uVar9 + 1;
    uVar10 = param_4;
    if (uVar2 <= param_5) goto LAB_007c5ac8;
    while( true ) {
      puVar1 = (ushort *)(lVar5 + param_5 * 4);
      uVar3 = *puVar1;
      if (uVar3 == 0xffff) break;
      param_4 = puVar1[1];
      *puVar1 = (ushort)uVar8;
      uVar6 = uVar6 + 1;
      puVar1[1] = uVar10;
      param_5 = param_5 + 1;
      uVar8 = (ulong)(uint)uVar3;
      uVar10 = param_4;
      if (uVar2 <= param_5) {
LAB_007c5ac8:
        param_5 = 0;
        uVar10 = param_4;
        if (uVar2 == 0) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
      }
    }
    uVar4 = 0;
    *puVar1 = (ushort)uVar8;
    if (0x7f < uVar6) {
      param_6 = 1;
    }
    puVar1[1] = uVar10;
    if ((param_6 == 1) && (*param_1 == 0)) {
      uVar4 = 0;
      *param_1 = 1;
    }
  }
  else {
                    /* try { // try from 007c59e0 to 007c59eb has its CatchHandler @ 007c5b54 */
    (**(code **)(*param_3 + 0x20))(param_3 + 3,param_3[1],param_3[2]);
    if (*param_2 != 0) {
      (**(code **)(*param_2 + 0x20))(param_2 + 3,param_2[1],param_2[2]);
    }
    uVar4 = 1;
  }
  auVar19._8_8_ = uVar9;
  auVar19._0_8_ = uVar4;
  return auVar19;
}


// ===== 007c5b7c  FUN_007c5b7c =====

void FUN_007c5b7c(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined **ppuVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  uint *puVar10;
  long lVar11;
  uint *puVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined **local_108;
  undefined8 uStack_c8;
  undefined8 local_c0;
  long local_b0;
  ulong uStack_a8;
  long local_a0;
  ulong uStack_98;
  long local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  uVar13 = *(ulong *)(param_1 + 0x40);
  if (param_2 < uVar13) {
    lVar15 = *(long *)(param_1 + 0x38);
    lVar1 = *(long *)(param_1 + 0x20);
    uVar2 = *(ulong *)(param_1 + 0x28);
    local_108 = &PTR_s__root__cargo_registry_src_index__00ade548;
    uVar14 = param_2;
    puVar4 = (undefined8 *)(lVar15 + uVar13 * 0x48);
    do {
      puVar10 = (uint *)(lVar15 + uVar14 * 0x48);
      uVar5 = *(ulong *)(puVar10 + 2);
      uVar7 = *(ulong *)(puVar10 + 6);
      if ((*puVar10 & 1) == 0) {
        if (puVar10[4] == 0) {
          if (uVar2 <= uVar5) {
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_bounds_check
                      (uVar5,uVar2,&PTR_s__root__cargo_registry_src_index__00ade470);
          }
          *(undefined8 *)(lVar1 + uVar5 * 0x68) = 0;
        }
        else {
          if (uVar2 <= uVar5) {
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_bounds_check
                      (uVar5,uVar2,&PTR_s__root__cargo_registry_src_index__00ade488);
          }
          puVar12 = (uint *)(lVar1 + uVar5 * 0x68);
          if ((*puVar12 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
            core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00ade4a0);
          }
          *(ulong *)(puVar12 + 2) = uVar7;
          if (uVar13 <= uVar7) {
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_bounds_check
                      (uVar7,uVar13,&PTR_s__root__cargo_registry_src_index__00ade4b8);
          }
          puVar8 = (undefined8 *)(lVar15 + uVar7 * 0x48);
          *puVar8 = 0;
          puVar8[1] = uVar5;
        }
      }
      else if ((puVar10[4] & 1) == 0) {
        if (uVar2 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check
                    (uVar7,uVar2,&PTR_s__root__cargo_registry_src_index__00ade4d0);
        }
        puVar12 = (uint *)(lVar1 + uVar7 * 0x68);
        if ((*puVar12 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00ade4e8);
        }
        *(ulong *)(puVar12 + 4) = uVar5;
        if (uVar13 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check
                    (uVar5,uVar13,&PTR_s__root__cargo_registry_src_index__00ade500);
        }
        lVar11 = lVar15 + uVar5 * 0x48;
        *(undefined8 *)(lVar11 + 0x10) = 0;
        *(ulong *)(lVar11 + 0x18) = uVar7;
      }
      else {
        if (uVar13 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check
                    (uVar5,uVar13,&PTR_s__root__cargo_registry_src_index__00ade518);
        }
        lVar11 = lVar15 + uVar5 * 0x48;
        *(undefined8 *)(lVar11 + 0x10) = 1;
        *(ulong *)(lVar11 + 0x18) = uVar7;
        if (uVar13 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check
                    (uVar7,uVar13,&PTR_s__root__cargo_registry_src_index__00ade530);
        }
        puVar8 = (undefined8 *)(lVar15 + uVar7 * 0x48);
        *puVar8 = 1;
        puVar8[1] = uVar5;
      }
      uStack_a8 = *(ulong *)(puVar10 + 2);
      local_b0 = *(long *)puVar10;
      uVar13 = uVar13 - 1;
      *(ulong *)(param_1 + 0x40) = uVar13;
      uStack_88 = *(undefined8 *)(puVar10 + 10);
      local_90 = *(long *)(puVar10 + 8);
      uStack_78 = *(undefined8 *)(puVar10 + 0xe);
      local_80 = *(undefined8 *)(puVar10 + 0xc);
      local_70 = *(undefined8 *)(puVar10 + 0x10);
      uStack_98 = *(ulong *)(puVar10 + 6);
      local_a0 = *(long *)(puVar10 + 4);
      uVar17 = puVar4[-4];
      uVar16 = puVar4[-5];
      uVar19 = puVar4[-2];
      uVar18 = puVar4[-3];
      uVar21 = puVar4[-8];
      uVar20 = puVar4[-9];
      uVar23 = puVar4[-6];
      uVar22 = puVar4[-7];
      *(undefined8 *)(puVar10 + 0x10) = puVar4[-1];
      *(undefined8 *)(puVar10 + 10) = uVar17;
      *(undefined8 *)(puVar10 + 8) = uVar16;
      *(undefined8 *)(puVar10 + 0xe) = uVar19;
      *(undefined8 *)(puVar10 + 0xc) = uVar18;
      *(undefined8 *)(puVar10 + 2) = uVar21;
      *(undefined8 *)puVar10 = uVar20;
      *(undefined8 *)(puVar10 + 6) = uVar23;
      *(undefined8 *)(puVar10 + 4) = uVar22;
      if ((local_b0 != 0) && (uVar13 == uStack_a8)) {
        local_b0 = 1;
        uStack_a8 = uVar14;
      }
      if ((local_a0 != 0) && (uVar13 == uStack_98)) {
        local_a0 = 1;
        uStack_98 = uVar14;
      }
      param_2 = uStack_98;
      if (uVar13 != uVar14) {
        uVar5 = uVar14;
        if (uVar13 <= uVar14) {
LAB_007c5f08:
                    /* try { // try from 007c5f08 to 007c5f17 has its CatchHandler @ 007c5f1c */
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check(uVar5,uVar13,local_108);
        }
        uVar7 = *(ulong *)(puVar10 + 4);
        uVar3 = *(ulong *)(puVar10 + 6);
        uVar5 = *(ulong *)(puVar10 + 2);
        if ((*puVar10 & 1) == 0) {
          if (uVar2 <= uVar5) {
            local_108 = &PTR_s__root__cargo_registry_src_index__00ade560;
            uVar13 = uVar2;
            goto LAB_007c5f08;
          }
          plVar9 = (long *)(lVar1 + uVar5 * 0x68);
          if (*plVar9 != 1) {
            ppuVar6 = &PTR_s__root__cargo_registry_src_index__00ade578;
            goto LAB_007c5e3c;
          }
          plVar9[1] = uVar14;
        }
        else {
          if (uVar13 <= uVar5) {
            local_108 = &PTR_s__root__cargo_registry_src_index__00ade590;
            goto LAB_007c5f08;
          }
          lVar11 = lVar15 + uVar5 * 0x48;
          *(undefined8 *)(lVar11 + 0x10) = 1;
          *(ulong *)(lVar11 + 0x18) = uVar14;
        }
        uVar5 = uVar3;
        if ((uVar7 & 1) == 0) {
          if (uVar2 <= uVar3) {
            local_108 = &PTR_s__root__cargo_registry_src_index__00ade5a8;
            uVar13 = uVar2;
            goto LAB_007c5f08;
          }
          plVar9 = (long *)(lVar1 + uVar3 * 0x68);
          if (*plVar9 != 1) {
            ppuVar6 = &PTR_s__root__cargo_registry_src_index__00ade5c0;
LAB_007c5e3c:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 007c5e3c to 007c5e3f has its CatchHandler @ 007c5f1c */
            core::option::unwrap_failed(ppuVar6);
          }
          plVar9[2] = uVar14;
        }
        else {
          if (uVar13 <= uVar3) {
            local_108 = &PTR_s__root__cargo_registry_src_index__00ade5d8;
            goto LAB_007c5f08;
          }
          puVar8 = (undefined8 *)(lVar15 + uVar3 * 0x48);
          *puVar8 = 1;
          puVar8[1] = uVar14;
        }
      }
      uStack_c8 = uStack_78;
      local_c0 = local_70;
      if (local_a0 != 1) {
        (**(code **)(local_90 + 0x20))(&uStack_c8,uStack_88,local_80);
        return;
      }
      (**(code **)(local_90 + 0x20))(&uStack_c8,uStack_88,local_80);
      uVar14 = param_2;
      puVar4 = puVar4 + -9;
    } while (param_2 < uVar13);
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_bounds_check
            (param_2,uVar13,&PTR_s__root__cargo_registry_src_index__00ade458);
}


// ===== 007c5f44  FUN_007c5f44 =====

bool FUN_007c5f44(long param_1,ulong param_2)

{
  short *__ptr;
  ulong uVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 *puVar4;
  ushort *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  short *psVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long local_68;
  undefined8 local_60;
  long lStack_58;
  
  if (0x8000 < param_2) goto LAB_007c611c;
  __ptr = *(short **)(param_1 + 0x48);
  uVar1 = *(ulong *)(param_1 + 0x50);
  uVar15 = 0;
  lVar14 = uVar1 << 2;
  if (uVar1 == 0) {
LAB_007c5fbc:
    if (param_2 != 0) goto LAB_007c5fc0;
LAB_007c600c:
    uVar8 = 0;
    puVar4 = (undefined4 *)0x2;
  }
  else {
    puVar5 = (ushort *)(__ptr + 1);
    do {
      if ((puVar5[-1] != 0xffff) &&
         (((int)uVar15 - (uint)(*puVar5 & *(ushort *)(param_1 + 0x58)) &
          (uint)*(ushort *)(param_1 + 0x58)) == 0)) goto LAB_007c5fbc;
      lVar14 = lVar14 + -4;
      puVar5 = puVar5 + 2;
      uVar15 = uVar15 + 1;
    } while (lVar14 != 0);
    uVar15 = 0;
    if (param_2 == 0) goto LAB_007c600c;
LAB_007c5fc0:
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar4 = (undefined4 *)FUN_004b25a4(param_2 << 2,2);
    if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(2,param_2 << 2);
    }
    uVar8 = param_2 - 1;
    puVar7 = puVar4;
    if (uVar8 != 0) {
      if (param_2 < 0x11) {
        uVar9 = 1;
      }
      else {
        uVar10 = uVar8 & 0xfffffffffffffff0;
        puVar7 = puVar4 + uVar10;
        uVar9 = uVar10 | 1;
        uVar13 = uVar8 & 0xfffffffffffffff0;
        puVar11 = (undefined8 *)(puVar4 + 8);
        do {
          uVar13 = uVar13 - 0x10;
          puVar11[-3] = 0xffff0000ffff;
          puVar11[-4] = 0xffff0000ffff;
          puVar11[-1] = 0xffff0000ffff;
          puVar11[-2] = 0xffff0000ffff;
          puVar11[1] = 0xffff0000ffff;
          *puVar11 = 0xffff0000ffff;
          puVar11[3] = 0xffff0000ffff;
          puVar11[2] = 0xffff0000ffff;
          puVar11 = puVar11 + 8;
        } while (uVar13 != 0);
        if (uVar8 == uVar10) goto LAB_007c605c;
      }
      lVar14 = param_2 - uVar9;
      puVar6 = puVar7;
      do {
        lVar14 = lVar14 + -1;
        puVar7 = puVar6 + 1;
        *puVar6 = 0xffff;
        puVar6 = puVar7;
      } while (lVar14 != 0);
    }
LAB_007c605c:
    *puVar7 = 0xffff;
    uVar8 = param_2;
  }
  uVar3 = (int)param_2 - 1;
  *(undefined4 **)(param_1 + 0x48) = puVar4;
  *(ulong *)(param_1 + 0x50) = uVar8;
  *(short *)(param_1 + 0x58) = (short)uVar3;
  if (uVar1 < uVar15) {
                    /* try { // try from 007c61e4 to 007c6207 has its CatchHandler @ 007c6220 */
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (uVar15,uVar1,uVar1,&PTR_s__root__cargo_registry_src_index__00ade708);
  }
  if (uVar15 != uVar1) {
    psVar12 = __ptr + uVar15 * 2;
    do {
      if (*psVar12 != -1) {
        uVar2 = psVar12[1];
        uVar13 = (ulong)(uVar2 & uVar3);
        while( true ) {
          do {
            uVar9 = uVar13;
            uVar13 = 0;
          } while (uVar8 <= uVar9);
          if (*(short *)(puVar4 + uVar9) == -1) break;
          uVar13 = uVar9 + 1;
        }
        *(short *)(puVar4 + uVar9) = *psVar12;
        *(ushort *)((long)(puVar4 + uVar9) + 2) = uVar2;
      }
      psVar12 = psVar12 + 2;
    } while (psVar12 != __ptr + uVar1 * 2);
  }
  psVar12 = __ptr;
  if (uVar15 != 0) {
    do {
      if (*psVar12 != -1) {
        uVar2 = psVar12[1];
        uVar13 = (ulong)(uVar2 & uVar3);
        while( true ) {
          do {
            uVar9 = uVar13;
            uVar13 = 0;
          } while (uVar8 <= uVar9);
          if (*(short *)(puVar4 + uVar9) == -1) break;
          uVar13 = uVar9 + 1;
        }
        *(short *)(puVar4 + uVar9) = *psVar12;
        *(ushort *)((long)(puVar4 + uVar9) + 2) = uVar2;
      }
      psVar12 = psVar12 + 2;
    } while (psVar12 != __ptr + uVar15 * 2);
  }
  uVar15 = *(ulong *)(param_1 + 0x28);
  lVar14 = *(long *)(param_1 + 0x18);
  uVar8 = uVar8 - (uVar15 + (uVar8 >> 2));
  if (lVar14 - uVar15 < uVar8) {
    if (CARRY8(uVar8,uVar15)) {
      local_60 = 0;
      lStack_58 = lVar14;
LAB_007c6204:
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(local_60,lStack_58);
    }
    FUN_0079c54c(&local_68,lVar14,*(undefined8 *)(param_1 + 0x20),uVar8 + uVar15,8,0x68);
    if (local_68 == 1) goto LAB_007c6204;
    *(ulong *)(param_1 + 0x18) = uVar8 + uVar15;
    *(undefined8 *)(param_1 + 0x20) = local_60;
  }
  if (uVar1 != 0) {
    free(__ptr);
  }
LAB_007c611c:
  return 0x8000 < param_2;
}


// ===== 007c6240  reqwest::util::fast_random =====

/* WARNING: Unknown calling convention: __rustcall */
/* reqwest::util::fast_random */

long __rustcall reqwest::util::fast_random(void)

{
  ulong *puVar1;
  ulong uVar2;
  
  uVar2 = DAT_00b0f1d0;
  if (DAT_00b0f1d0 == 0) {
    uVar2 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(&DAT_00b0f1d0);
    puVar1 = (ulong *)pthread_getspecific((pthread_key_t)uVar2);
  }
  else {
    puVar1 = (ulong *)pthread_getspecific((pthread_key_t)DAT_00b0f1d0);
  }
  if (puVar1 < (ulong *)0x2) {
    puVar1 = (ulong *)FUN_007bbee0(uVar2 & 0xffffffff,puVar1,0);
  }
  if (puVar1 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::thread::local::panic_access_error(&PTR_s__nix_store_8006w282fgsx3273c878b_00adfa00);
  }
  uVar2 = *puVar1 ^ *puVar1 >> 0xc;
  uVar2 = uVar2 ^ uVar2 << 0x19;
  uVar2 = uVar2 ^ uVar2 >> 0x1b;
  *puVar1 = uVar2;
  return uVar2 * 0x2545f4914f6cdd1d;
}


// ===== 007c62e8  FUN_007c62e8 =====

void FUN_007c62e8(undefined8 param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  uint *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined **local_1c0;
  ulong uStack_1b8;
  ulong local_198;
  ulong local_190;
  undefined8 uStack_188;
  long local_180;
  ulong local_178;
  ulong *local_170;
  ulong *local_168;
  ulong local_160;
  ulong *local_158;
  ulong local_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong local_130;
  ulong local_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong local_100;
  ulong uStack_f8;
  ulong local_f0;
  ulong uStack_e8;
  ulong local_e0;
  ulong uStack_d8;
  undefined8 local_d0;
  ulong local_c0;
  ulong uStack_b8;
  ulong local_b0;
  ulong uStack_a8;
  ulong local_a0;
  ulong uStack_98;
  undefined8 local_90;
  ulong uStack_88;
  ulong local_80;
  undefined1 auStack_71 [17];
  
  puVar4 = *(ulong **)(param_2 + 0x20);
  lVar2 = *(long *)(param_2 + 0x28);
  lVar11 = *(long *)(param_2 + 0x38);
  uVar10 = *(undefined8 *)(param_2 + 0x30);
  uVar7 = *(ulong *)(param_2 + 0x18);
  uVar5 = *(ulong *)(param_2 + 0x40);
  if (*(long *)(param_2 + 0x50) != 0) {
    free(*(void **)(param_2 + 0x48));
  }
  uVar6 = 0;
  local_190 = uStack_1b8;
  local_198 = 0;
  local_1c0 = &PTR_s__root__cargo_registry_src_index__00ade6d8;
  uStack_188 = uVar10;
  local_180 = lVar11;
  local_178 = uVar5;
  local_170 = puVar4;
  local_168 = puVar4;
  local_160 = uVar7;
  local_158 = puVar4 + lVar2 * 0xd;
LAB_007c63c4:
  do {
    while (local_198 == 1) {
      if (local_178 <= local_190) {
                    /* try { // try from 007c66d8 to 007c66e3 has its CatchHandler @ 007c67fc */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (local_190,local_178,&PTR_s__root__cargo_registry_src_index__00ade808);
      }
      lVar2 = local_180 + local_190 * 0x48;
      local_190 = (ulong)*(uint *)(lVar2 + 0x10);
      bVar1 = (*(uint *)(lVar2 + 0x10) & 1) != 0;
      if (bVar1) {
        local_190 = *(ulong *)(lVar2 + 0x18);
      }
      local_198 = (ulong)bVar1;
      uStack_148 = *(ulong *)(lVar2 + 0x28);
      local_150 = *(ulong *)(lVar2 + 0x20);
      uStack_138 = *(ulong *)(lVar2 + 0x38);
      uStack_140 = *(ulong *)(lVar2 + 0x30);
      local_130 = *(ulong *)(lVar2 + 0x40);
      if (uVar6 == 0) {
                    /* try { // try from 007c6694 to 007c66d3 has its CatchHandler @ 007c6804 */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_fmt
                  ("internal error: entered unreachable code: HeaderMap::into_iter yielded None firststream did not contain valid UTF-8"
                   ,0xa3,&PTR_s__root__cargo_registry_src_index__00ade738);
      }
      uStack_e8 = *(ulong *)(lVar2 + 0x28);
      local_f0 = *(ulong *)(lVar2 + 0x20);
      uStack_d8 = *(ulong *)(lVar2 + 0x38);
      local_e0 = *(ulong *)(lVar2 + 0x30);
      local_d0 = *(undefined8 *)(lVar2 + 0x40);
      if (*(ulong *)(uVar6 + 0x28) <= uVar7) {
                    /* try { // try from 007c66e8 to 007c66f7 has its CatchHandler @ 007c67d8 */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (uVar7,*(ulong *)(uVar6 + 0x28),&PTR_s__root__cargo_registry_src_index__00ade660);
      }
      plVar9 = (long *)(*(long *)(uVar6 + 0x20) + uVar7 * 0x68);
      uStack_a8 = uVar7;
      if (*plVar9 == 1) {
        uStack_98 = *(ulong *)(lVar2 + 0x28);
        local_a0 = *(ulong *)(lVar2 + 0x20);
        uStack_88 = *(ulong *)(lVar2 + 0x38);
        local_90 = *(ulong *)(lVar2 + 0x30);
        local_80 = *(ulong *)(lVar2 + 0x40);
        uVar8 = plVar9[2];
        uVar5 = *(ulong *)(uVar6 + 0x40);
        local_b0 = 0;
        local_c0 = 1;
        uStack_b8 = uVar8;
        if (uVar5 == *(ulong *)(uVar6 + 0x30)) {
                    /* try { // try from 007c6588 to 007c658f has its CatchHandler @ 007c677c */
          <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<http[b87e90c26fe47eb4]::header::map::ExtraValue<http[b87e90c26fe47eb4]::header::value::HeaderValue>>>
          ::grow_one(uVar6 + 0x30);
        }
        puVar4 = (ulong *)(*(long *)(uVar6 + 0x38) + uVar5 * 0x48);
        puVar4[1] = uStack_b8;
        *puVar4 = local_c0;
        puVar4[8] = local_80;
        puVar4[5] = uStack_98;
        puVar4[4] = local_a0;
        puVar4[7] = uStack_88;
        puVar4[6] = local_90;
        puVar4[3] = uStack_a8;
        puVar4[2] = local_b0;
        *(ulong *)(uVar6 + 0x40) = uVar5 + 1;
        if (uVar5 < uVar8) {
                    /* try { // try from 007c66fc to 007c6733 has its CatchHandler @ 007c67d0 */
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check
                    (uVar8,uVar5 + 1,&PTR_s__root__cargo_registry_src_index__00ade440);
        }
        lVar2 = *(long *)(uVar6 + 0x38) + uVar8 * 0x48;
        *(undefined8 *)(lVar2 + 0x10) = 1;
        *(ulong *)(lVar2 + 0x18) = uVar5;
        *plVar9 = 1;
        plVar9[2] = uVar5;
      }
      else {
        uStack_98 = *(ulong *)(lVar2 + 0x28);
        local_a0 = *(ulong *)(lVar2 + 0x20);
        uStack_88 = *(ulong *)(lVar2 + 0x38);
        local_90 = *(ulong *)(lVar2 + 0x30);
        local_80 = *(ulong *)(lVar2 + 0x40);
        lVar2 = *(long *)(uVar6 + 0x40);
        local_c0 = 0;
        local_b0 = 0;
        uStack_b8 = uVar7;
        if (lVar2 == *(long *)(uVar6 + 0x30)) {
                    /* try { // try from 007c6614 to 007c661b has its CatchHandler @ 007c6758 */
          <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<http[b87e90c26fe47eb4]::header::map::ExtraValue<http[b87e90c26fe47eb4]::header::value::HeaderValue>>>
          ::grow_one(uVar6 + 0x30);
        }
        puVar4 = (ulong *)(*(long *)(uVar6 + 0x38) + lVar2 * 0x48);
        puVar4[1] = uStack_b8;
        *puVar4 = local_c0;
        puVar4[8] = local_80;
        puVar4[5] = uStack_98;
        puVar4[4] = local_a0;
        puVar4[7] = uStack_88;
        puVar4[6] = local_90;
        puVar4[3] = uStack_a8;
        puVar4[2] = local_b0;
        *(long *)(uVar6 + 0x40) = lVar2 + 1;
        *plVar9 = 1;
        plVar9[1] = lVar2;
        plVar9[2] = lVar2;
      }
    }
    puVar4 = local_168;
    if (local_168 == local_158) {
LAB_007c666c:
      local_168 = puVar4;
      FUN_007c4070(&local_198);
      return;
    }
    puVar4 = local_168 + 0xd;
    if (*local_168 == 2) goto LAB_007c666c;
    uStack_148 = local_168[4];
    local_150 = local_168[3];
    uStack_138 = local_168[6];
    uStack_140 = local_168[5];
    local_198 = *local_168 & 1;
    local_190 = local_168[1];
    uStack_118 = local_168[9];
    local_120 = local_168[8];
    uStack_108 = local_168[0xb];
    uStack_110 = local_168[10];
    local_130 = local_168[7];
                    /* try { // try from 007c6444 to 007c6453 has its CatchHandler @ 007c67cc */
    local_168 = local_168 + 0xd;
    FUN_007c297c(&local_c0,param_1,&local_120);
    uVar7 = local_b0;
    uVar5 = uStack_b8;
    uVar6 = local_c0;
    if (local_90._2_1_ == 0xff) {
                    /* WARNING: Subroutine does not return */
      core::result::unwrap_failed
                (&DAT_002e53da,0x17,auStack_71,&DAT_00ade620,
                 &PTR_s__root__cargo_registry_src_index__00ade3a8);
    }
    uStack_f8 = local_a0;
    local_100 = uStack_a8;
    if (local_90._2_1_ == 2) {
      uVar5 = *(ulong *)(local_c0 + 0x28);
      bVar1 = local_b0 < uVar5;
      uStack_b8 = uStack_148;
      local_c0 = local_150;
      uStack_a8 = uStack_138;
      local_b0 = uStack_140;
      local_a0 = local_130;
      if (bVar1) {
        puVar3 = (uint *)(*(long *)(uVar6 + 0x20) + uVar7 * 0x68);
        if ((*puVar3 & 1) != 0) {
                    /* try { // try from 007c64ac to 007c64b3 has its CatchHandler @ 007c6754 */
          FUN_007c5b7c(uVar6,*(undefined8 *)(puVar3 + 2));
          uVar5 = *(ulong *)(uVar6 + 0x28);
        }
        if (uVar7 < uVar5) {
          lVar2 = *(long *)(uVar6 + 0x20) + uVar7 * 0x68;
          uStack_e8 = *(ulong *)(lVar2 + 0x20);
          local_f0 = *(ulong *)(lVar2 + 0x18);
          uStack_d8 = *(ulong *)(lVar2 + 0x30);
          local_e0 = *(ulong *)(lVar2 + 0x28);
          local_d0 = *(undefined8 *)(lVar2 + 0x38);
          *(ulong *)(lVar2 + 0x38) = local_130;
          *(ulong *)(lVar2 + 0x30) = uStack_138;
          *(ulong *)(lVar2 + 0x28) = uStack_140;
          *(ulong *)(lVar2 + 0x20) = uStack_148;
          *(ulong *)(lVar2 + 0x18) = local_150;
                    /* try { // try from 007c64fc to 007c6507 has its CatchHandler @ 007c67c4 */
          (**(code **)(local_f0 + 0x20))(&uStack_d8,uStack_e8,local_e0);
          goto LAB_007c63c4;
        }
        local_1c0 = &PTR_s__root__cargo_registry_src_index__00ade6f0;
      }
                    /* try { // try from 007c6744 to 007c674f has its CatchHandler @ 007c67a0 */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check(uVar7,uVar5,local_1c0);
    }
    uStack_d8 = local_a0;
    local_e0 = uStack_a8;
    uStack_b8 = uStack_148;
    local_c0 = local_150;
    uStack_a8 = uStack_138;
    local_b0 = uStack_140;
    local_a0 = local_130;
    uStack_e8 = uVar7;
    local_f0 = uVar5;
                    /* try { // try from 007c6648 to 007c665b has its CatchHandler @ 007c67c4 */
    auVar12 = FUN_007c59ac(uVar6,&local_f0,&local_c0,local_90 & 0xffff,uStack_98,local_90._2_1_ & 1)
    ;
    uVar7 = auVar12._8_8_;
    if ((auVar12 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
                    /* WARNING: Subroutine does not return */
      core::result::unwrap_failed
                (&DAT_002e53da,0x17,auStack_71,&DAT_00ade620,
                 &PTR_s__root__cargo_registry_src_index__00ade750);
    }
  } while( true );
}


// ===== 007c6834  FUN_007c6834 =====

ulong FUN_007c6834(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong local_a0;
  ulong uStack_98;
  ulong local_90;
  ulong uStack_88;
  ulong local_80;
  ulong uStack_78;
  long local_70;
  ulong local_68;
  undefined8 uStack_60;
  long local_58;
  
  uVar7 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00bf8;
  if (uVar7 == 0) {
    uVar7 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00bf8);
    puVar3 = (ulong *)pthread_getspecific((pthread_key_t)uVar7);
  }
  else {
    puVar3 = (ulong *)pthread_getspecific((pthread_key_t)uVar7);
  }
  if (puVar3 < (ulong *)0x2) {
    puVar3 = (ulong *)FUN_007bbf8c(uVar7 & 0xffffffff,puVar3,0);
  }
  if (puVar3 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::thread::local::panic_access_error(&PTR_s__nix_store_8006w282fgsx3273c878b_00adfa00);
  }
  uVar7 = *puVar3;
  uVar2 = puVar3[1];
  lVar8 = 1;
  *puVar3 = uVar7 + 1;
  do {
    local_68 = 0;
    uStack_60 = 0;
    local_70 = 0;
    local_a0 = uVar7 ^ 0x736f6d6570736575;
    uStack_98 = uVar7 ^ 0x6c7967656e657261;
    local_90 = uVar2 ^ 0x646f72616e646f6d;
    uStack_88 = uVar2 ^ 0x7465646279746573;
    local_80 = uVar7;
    uStack_78 = uVar2;
    local_58 = lVar8;
    FUN_007c75fc(&local_a0,&local_58,8);
    lVar8 = lVar8 + 1;
    local_68 = local_68 | local_70 << 0x38;
    uStack_88 = local_68 ^ uStack_88;
    local_a0 = local_90 + local_a0;
    uVar5 = local_a0 ^ (local_90 >> 0x33 | local_90 << 0xd);
    uVar6 = uStack_88 + uStack_98 ^ (uStack_88 >> 0x30 | uStack_88 << 0x10);
    uVar1 = uStack_88 + uStack_98 + uVar5;
    uVar4 = uVar6 + (local_a0 >> 0x20 | local_a0 << 0x20);
    uVar5 = uVar1 ^ (uVar5 >> 0x2f | uVar5 << 0x11);
    uVar6 = uVar4 ^ (uVar6 >> 0x2b | uVar6 << 0x15);
    uVar4 = (uVar4 ^ local_68) + uVar5;
    uVar1 = uVar6 + ((uVar1 >> 0x20 | uVar1 << 0x20) ^ 0xff);
    uVar5 = uVar4 ^ (uVar5 >> 0x33 | uVar5 << 0xd);
    uVar6 = uVar1 ^ (uVar6 >> 0x30 | uVar6 << 0x10);
    uVar1 = uVar5 + uVar1;
    uVar4 = uVar6 + (uVar4 >> 0x20 | uVar4 << 0x20);
    uVar5 = uVar1 ^ (uVar5 >> 0x2f | uVar5 << 0x11);
    uVar6 = uVar4 ^ (uVar6 >> 0x2b | uVar6 << 0x15);
    uVar4 = uVar5 + uVar4;
    uVar1 = uVar6 + (uVar1 >> 0x20 | uVar1 << 0x20);
    uVar5 = uVar4 ^ (uVar5 >> 0x33 | uVar5 << 0xd);
    uVar6 = uVar1 ^ (uVar6 >> 0x30 | uVar6 << 0x10);
    uVar1 = uVar5 + uVar1;
    uVar4 = uVar6 + (uVar4 >> 0x20 | uVar4 << 0x20);
    uVar5 = uVar1 ^ (uVar5 >> 0x2f | uVar5 << 0x11);
    uVar6 = uVar4 ^ (uVar6 >> 0x2b | uVar6 << 0x15);
    uVar1 = uVar6 + (uVar1 >> 0x20 | uVar1 << 0x20);
    uVar4 = uVar5 + uVar4 ^ (uVar5 >> 0x33 | uVar5 << 0xd);
    uVar5 = uVar1 ^ (uVar6 >> 0x30 | uVar6 << 0x10);
    uVar1 = uVar4 + uVar1;
    uVar4 = (uVar5 >> 0x2b | uVar5 << 0x15) ^ (uVar4 >> 0x2f | uVar4 << 0x11) ^
            (uVar1 >> 0x20 | uVar1 << 0x20);
  } while (uVar4 == uVar1);
  return uVar4 ^ uVar1;
}


// ===== 007c6a24  FUN_007c6a24 =====

undefined ** FUN_007c6a24(long param_1,undefined1 *param_2,size_t param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  uVar3 = *(ulong *)(param_1 + 0x18);
  uVar1 = uVar2;
  if (uVar3 <= uVar2) {
    uVar1 = uVar3;
  }
  if (uVar2 - uVar1 < param_3) {
    *(ulong *)(param_1 + 0x18) = uVar2;
    return &PTR_s_failed_to_fill_whole_buffer_00ade7f0;
  }
  if (param_3 == 1) {
    *param_2 = *(undefined1 *)(*(long *)(param_1 + 8) + uVar1);
  }
  else {
    memcpy(param_2,(void *)(*(long *)(param_1 + 8) + uVar1),param_3);
  }
  *(ulong *)(param_1 + 0x18) = uVar3 + param_3;
  return (undefined **)0x0;
}


// ===== 007c6ab4  FUN_007c6ab4 =====

undefined1  [16] FUN_007c6ab4(long param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong __n;
  ulong uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  long local_78;
  ulong local_70;
  
  uVar3 = *(ulong *)(param_1 + 0x10);
  uVar4 = *(ulong *)(param_1 + 0x18);
  uVar7 = param_2[2];
  uVar5 = *param_2;
  lVar8 = *(long *)(param_1 + 8);
  uVar1 = uVar3;
  if (uVar4 <= uVar3) {
    uVar1 = uVar4;
  }
  __n = uVar3 - uVar1;
  if (uVar5 - uVar7 < __n) {
    if (CARRY8(__n,uVar7)) {
      uVar6 = 1;
      __n = 0x2600000003;
      goto LAB_007c6bb8;
    }
    uVar2 = __n + uVar7;
    if (__n + uVar7 <= uVar5 * 2) {
      uVar2 = uVar5 * 2;
    }
    if (uVar2 < 9) {
      uVar2 = 8;
    }
    FUN_0079c54c(&local_78,uVar5,param_2[1],uVar2,1,1);
    if (local_78 == 1) {
      __n = 0x2600000003;
      uVar6 = 1;
      goto LAB_007c6bb8;
    }
    *param_2 = uVar2;
    param_2[1] = local_70;
  }
  if (uVar4 < uVar3) {
    memcpy((void *)(param_2[1] + uVar7),(void *)(lVar8 + uVar1),__n);
  }
  uVar6 = 0;
  param_2[2] = uVar7 + __n;
  *(ulong *)(param_1 + 0x18) = __n + uVar4;
LAB_007c6bb8:
  auVar9._8_8_ = __n;
  auVar9._0_8_ = uVar6;
  return auVar9;
}


// ===== 007c6be0  FUN_007c6be0 =====

undefined1  [16] FUN_007c6be0(long param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  size_t __n;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar2 = *(long *)(param_1 + 8);
  uVar3 = *(ulong *)(param_1 + 0x10);
  param_3 = param_3 << 4;
  uVar7 = *(ulong *)(param_1 + 0x18);
  uVar6 = 0;
  do {
    if (param_3 == 0) break;
    uVar4 = param_2[1];
    uVar1 = uVar3;
    if (uVar7 <= uVar3) {
      uVar1 = uVar7;
    }
    uVar8 = uVar3 - uVar1;
    __n = uVar8;
    if (uVar4 <= uVar8) {
      __n = uVar4;
    }
    if (__n == 1) {
      *(undefined1 *)*param_2 = *(undefined1 *)(lVar2 + uVar1);
    }
    else {
      memcpy((undefined1 *)*param_2,(void *)(lVar2 + uVar1),__n);
    }
    param_2 = param_2 + 2;
    uVar7 = __n + uVar7;
    uVar6 = __n + uVar6;
    param_3 = param_3 + -0x10;
    *(ulong *)(param_1 + 0x18) = uVar7;
  } while (uVar4 <= uVar8);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar6;
  return auVar5 << 0x40;
}


// ===== 007c6c94  FUN_007c6c94 =====

undefined ** FUN_007c6c94(long param_1,long *param_2)

{
  void *__src;
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined **ppuVar4;
  ulong uVar5;
  long lVar6;
  
  uVar5 = *(ulong *)(param_1 + 0x10);
  uVar2 = *(ulong *)(param_1 + 0x18);
  lVar6 = param_2[1];
  lVar3 = param_2[2];
  uVar1 = uVar5;
  if (uVar2 <= uVar5) {
    uVar1 = uVar2;
  }
  uVar5 = uVar5 - uVar1;
  __src = (void *)(*(long *)(param_1 + 8) + uVar1);
  if (uVar5 < (ulong)(lVar6 - lVar3)) {
    memcpy((void *)(*param_2 + lVar3),__src,uVar5);
    lVar6 = uVar5 + lVar3;
    ppuVar4 = &PTR_s_failed_to_fill_whole_buffer_00ade7f0;
  }
  else {
    memcpy((void *)(*param_2 + lVar3),__src,lVar6 - lVar3);
    ppuVar4 = (undefined **)0x0;
  }
  param_2[2] = lVar6;
  *(ulong *)(param_1 + 0x18) = (uVar2 - lVar3) + lVar6;
  return ppuVar4;
}


// ===== 007c6d28  FUN_007c6d28 =====

undefined1  [16] FUN_007c6d28(long param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  long local_58;
  void *local_50;
  undefined *puStack_48;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  uVar3 = *(ulong *)(param_1 + 0x18);
  uVar1 = uVar2;
  if (uVar3 <= uVar2) {
    uVar1 = uVar3;
  }
  core::str::converts::from_utf8(&local_58,*(long *)(param_1 + 8) + uVar1,uVar2 - uVar1);
  if (local_58 == 1) {
    puStack_48 = &UNK_00ade780;
    uVar4 = 1;
    goto LAB_007c6df0;
  }
  lVar5 = <alloc::string::alloc::string::String>::try_reserve(param_2,puStack_48);
  if (lVar5 != -1) {
    uVar4 = 1;
    puStack_48 = (undefined *)0x2600000003;
    goto LAB_007c6df0;
  }
  lVar5 = param_2[2];
  if ((undefined *)(*param_2 - lVar5) < puStack_48) {
    FUN_0079be54(param_2,lVar5,puStack_48,1,1);
    lVar5 = param_2[2];
LAB_007c6dc4:
    memcpy((void *)(param_2[1] + lVar5),local_50,(size_t)puStack_48);
    lVar5 = param_2[2];
  }
  else if (puStack_48 != (undefined *)0x0) goto LAB_007c6dc4;
  uVar4 = 0;
  param_2[2] = (long)(puStack_48 + lVar5);
  *(undefined **)(param_1 + 0x18) = puStack_48 + uVar3;
LAB_007c6df0:
  auVar6._8_8_ = puStack_48;
  auVar6._0_8_ = uVar4;
  return auVar6;
}


// ===== 007c6e28  FUN_007c6e28 =====

undefined1  [16] FUN_007c6e28(long param_1,undefined1 *param_2,ulong param_3)

{
  ulong uVar1;
  ulong __n;
  ulong uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  uVar3 = *(ulong *)(param_1 + 0x18);
  uVar1 = uVar2;
  if (uVar3 <= uVar2) {
    uVar1 = uVar3;
  }
  __n = uVar2 - uVar1;
  if (param_3 <= uVar2 - uVar1) {
    __n = param_3;
  }
  if (__n == 1) {
    *param_2 = *(undefined1 *)(*(long *)(param_1 + 8) + uVar1);
  }
  else {
    memcpy(param_2,(void *)(*(long *)(param_1 + 8) + uVar1),__n);
  }
  *(ulong *)(param_1 + 0x18) = __n + uVar3;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = __n;
  return auVar4 << 0x40;
}


// ===== 007c6e9c  FUN_007c6e9c =====

undefined8 FUN_007c6e9c(long param_1,long *param_2)

{
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  uVar3 = *(ulong *)(param_1 + 0x18);
  lVar4 = param_2[2];
  uVar1 = uVar2;
  if (uVar3 <= uVar2) {
    uVar1 = uVar3;
  }
  __n = uVar2 - uVar1;
  if ((ulong)(param_2[1] - lVar4) <= uVar2 - uVar1) {
    __n = param_2[1] - lVar4;
  }
  memcpy((void *)(*param_2 + lVar4),(void *)(*(long *)(param_1 + 8) + uVar1),__n);
  param_2[2] = __n + lVar4;
  *(size_t *)(param_1 + 0x18) = __n + uVar3;
  return 0;
}


// ===== 007c6f18  FUN_007c6f18 =====

undefined ** FUN_007c6f18(long *param_1,undefined1 *param_2,size_t param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar1 = uVar2;
  if (uVar3 <= uVar2) {
    uVar1 = uVar3;
  }
  if (uVar2 - uVar1 < param_3) {
    param_1[2] = uVar2;
    return &PTR_s_failed_to_fill_whole_buffer_00ade7f0;
  }
  if (param_3 == 1) {
    *param_2 = *(undefined1 *)(*param_1 + uVar1);
  }
  else {
    memcpy(param_2,(void *)(*param_1 + uVar1),param_3);
  }
  param_1[2] = uVar3 + param_3;
  return (undefined **)0x0;
}


// ===== 007c6fa8  FUN_007c6fa8 =====

undefined1  [16] FUN_007c6fa8(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong __n;
  ulong uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  long local_78;
  ulong local_70;
  
  uVar3 = param_1[1];
  uVar4 = param_1[2];
  uVar7 = param_2[2];
  uVar5 = *param_2;
  lVar8 = *param_1;
  uVar1 = uVar3;
  if (uVar4 <= uVar3) {
    uVar1 = uVar4;
  }
  __n = uVar3 - uVar1;
  if (uVar5 - uVar7 < __n) {
    if (CARRY8(__n,uVar7)) {
      uVar6 = 1;
      __n = 0x2600000003;
      goto LAB_007c70ac;
    }
    uVar2 = __n + uVar7;
    if (__n + uVar7 <= uVar5 * 2) {
      uVar2 = uVar5 * 2;
    }
    if (uVar2 < 9) {
      uVar2 = 8;
    }
    FUN_0079c54c(&local_78,uVar5,param_2[1],uVar2,1,1);
    if (local_78 == 1) {
      __n = 0x2600000003;
      uVar6 = 1;
      goto LAB_007c70ac;
    }
    *param_2 = uVar2;
    param_2[1] = local_70;
  }
  if (uVar4 < uVar3) {
    memcpy((void *)(param_2[1] + uVar7),(void *)(lVar8 + uVar1),__n);
  }
  uVar6 = 0;
  param_2[2] = uVar7 + __n;
  param_1[2] = __n + uVar4;
LAB_007c70ac:
  auVar9._8_8_ = __n;
  auVar9._0_8_ = uVar6;
  return auVar9;
}


// ===== 007c70d4  FUN_007c70d4 =====

undefined1  [16] FUN_007c70d4(long *param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  size_t __n;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar2 = *param_1;
  uVar3 = param_1[1];
  param_3 = param_3 << 4;
  uVar7 = param_1[2];
  uVar6 = 0;
  do {
    if (param_3 == 0) break;
    uVar4 = param_2[1];
    uVar1 = uVar3;
    if (uVar7 <= uVar3) {
      uVar1 = uVar7;
    }
    uVar8 = uVar3 - uVar1;
    __n = uVar8;
    if (uVar4 <= uVar8) {
      __n = uVar4;
    }
    if (__n == 1) {
      *(undefined1 *)*param_2 = *(undefined1 *)(lVar2 + uVar1);
    }
    else {
      memcpy((undefined1 *)*param_2,(void *)(lVar2 + uVar1),__n);
    }
    param_2 = param_2 + 2;
    uVar7 = __n + uVar7;
    uVar6 = __n + uVar6;
    param_3 = param_3 + -0x10;
    param_1[2] = uVar7;
  } while (uVar4 <= uVar8);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar6;
  return auVar5 << 0x40;
}


// ===== 007c7188  FUN_007c7188 =====

undefined ** FUN_007c7188(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined **ppuVar4;
  ulong uVar5;
  long lVar6;
  
  uVar5 = param_1[1];
  uVar2 = param_1[2];
  lVar6 = param_2[1];
  lVar3 = param_2[2];
  uVar1 = uVar5;
  if (uVar2 <= uVar5) {
    uVar1 = uVar2;
  }
  uVar5 = uVar5 - uVar1;
  if (uVar5 < (ulong)(lVar6 - lVar3)) {
    memcpy((void *)(*param_2 + lVar3),(void *)(*param_1 + uVar1),uVar5);
    lVar6 = uVar5 + lVar3;
    ppuVar4 = &PTR_s_failed_to_fill_whole_buffer_00ade7f0;
  }
  else {
    memcpy((void *)(*param_2 + lVar3),(void *)(*param_1 + uVar1),lVar6 - lVar3);
    ppuVar4 = (undefined **)0x0;
  }
  param_2[2] = lVar6;
  param_1[2] = (uVar2 - lVar3) + lVar6;
  return ppuVar4;
}


// ===== 007c721c  FUN_007c721c =====

undefined1  [16] FUN_007c721c(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  long local_58;
  void *local_50;
  undefined *puStack_48;
  
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar1 = uVar2;
  if (uVar3 <= uVar2) {
    uVar1 = uVar3;
  }
  core::str::converts::from_utf8(&local_58,*param_1 + uVar1,uVar2 - uVar1);
  if (local_58 == 1) {
    puStack_48 = &UNK_00ade780;
    uVar4 = 1;
    goto LAB_007c72e4;
  }
  lVar5 = <alloc::string::alloc::string::String>::try_reserve(param_2,puStack_48);
  if (lVar5 != -1) {
    uVar4 = 1;
    puStack_48 = (undefined *)0x2600000003;
    goto LAB_007c72e4;
  }
  lVar5 = param_2[2];
  if ((undefined *)(*param_2 - lVar5) < puStack_48) {
    FUN_0079be54(param_2,lVar5,puStack_48,1,1);
    lVar5 = param_2[2];
LAB_007c72b8:
    memcpy((void *)(param_2[1] + lVar5),local_50,(size_t)puStack_48);
    lVar5 = param_2[2];
  }
  else if (puStack_48 != (undefined *)0x0) goto LAB_007c72b8;
  uVar4 = 0;
  param_2[2] = (long)(puStack_48 + lVar5);
  param_1[2] = (long)(puStack_48 + uVar3);
LAB_007c72e4:
  auVar6._8_8_ = puStack_48;
  auVar6._0_8_ = uVar4;
  return auVar6;
}


// ===== 007c731c  FUN_007c731c =====

undefined1  [16] FUN_007c731c(long *param_1,undefined1 *param_2,ulong param_3)

{
  ulong uVar1;
  ulong __n;
  ulong uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar1 = uVar2;
  if (uVar3 <= uVar2) {
    uVar1 = uVar3;
  }
  __n = uVar2 - uVar1;
  if (param_3 <= uVar2 - uVar1) {
    __n = param_3;
  }
  if (__n == 1) {
    *param_2 = *(undefined1 *)(*param_1 + uVar1);
  }
  else {
    memcpy(param_2,(void *)(*param_1 + uVar1),__n);
  }
  param_1[2] = __n + uVar3;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = __n;
  return auVar4 << 0x40;
}


// ===== 007c7390  FUN_007c7390 =====

undefined8 FUN_007c7390(long *param_1,long *param_2)

{
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  lVar4 = param_2[2];
  uVar1 = uVar2;
  if (uVar3 <= uVar2) {
    uVar1 = uVar3;
  }
  __n = uVar2 - uVar1;
  if ((ulong)(param_2[1] - lVar4) <= uVar2 - uVar1) {
    __n = param_2[1] - lVar4;
  }
  memcpy((void *)(*param_2 + lVar4),(void *)(*param_1 + uVar1),__n);
  param_2[2] = __n + lVar4;
  param_1[2] = __n + uVar3;
  return 0;
}


// ===== 007c740c  FUN_007c740c =====

void FUN_007c740c(long param_1,undefined8 param_2)

{
  undefined1 auStack_40 [24];
  long local_28;
  long local_8;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple(auStack_40,param_2,1,0);
  local_8 = param_1 + 0x10;
  local_28 = param_1;
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::field
            (auStack_40,&local_28,&DAT_00ade7b0);
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::field
            (auStack_40,&local_8,&DAT_00ade7d0);
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::finish(auStack_40);
  return;
}


// ===== 007c7480  FUN_007c7480 =====

void FUN_007c7480(long *param_1)

{
  if (*(long *)(*param_1 + 0x58) != 0) {
    return;
  }
  return;
}


// ===== 007c7498  FUN_007c7498 =====

void FUN_007c7498(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    return;
  }
  return;
}


// ===== 007c74b0  FUN_007c74b0 =====

void FUN_007c74b0(undefined8 *param_1,undefined8 param_2)

{
  char *pcVar1;
  char *local_18;
  
  pcVar1 = (char *)*param_1;
  if (*pcVar1 == '\0') {
    local_18 = pcVar1 + 8;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,
               "DomainInappropriateMessageexpect_typesInappropriateHandshakeMessageInvalidEncryptedClientHelloInvalidMessageNoCertificatesPresentedUnsupportedNameTypeDecryptErrorEncryptErrorPeerMisbehavedAlertReceivedInvalidCertificateInvalidCertRevocationListGeneralFailedToGetCurrentTimeFailedToGetRandomBytesHandshakeNotCompletePeerSentOversizedRecordNoApplicationProtocolBadMaxFragmentSizeOther"
               ,6,&local_18,&DAT_00ade820);
    return;
  }
  local_18 = pcVar1 + 1;
  if (*pcVar1 == '\x01') {
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002bcfec,4,&local_18,&DAT_00ade840);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,&DAT_002bd20c,4,&local_18,&DAT_00ade860);
  return;
}


// ===== 007c7560  FUN_007c7560 =====

void FUN_007c7560(undefined8 *param_1)

{
  <http::uri::scheme::Scheme_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 007c7568  FUN_007c7568 =====

void FUN_007c7568(undefined8 *param_1)

{
  <http::uri::authority::Authority_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 007c7570  FUN_007c7570 =====

void FUN_007c7570(undefined8 *param_1)

{
  <http::header::value::HeaderValue_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 007c7578  FUN_007c7578 =====

void FUN_007c7578(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_40 [24];
  long local_28;
  long local_8;
  
  lVar1 = *param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple(auStack_40,param_2,1,0);
  local_8 = lVar1 + 0x10;
  local_28 = lVar1;
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::field
            (auStack_40,&local_28,&DAT_00ade7b0);
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::field
            (auStack_40,&local_8,&DAT_00ade7d0);
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::finish(auStack_40);
  return;
}


// ===== 007c75ec  FUN_007c75ec =====

void FUN_007c75ec(undefined8 *param_1)

{
  <http::uri::scheme::Scheme_as_core::fmt::Display>::fmt(*param_1);
  return;
}


// ===== 007c75f4  FUN_007c75f4 =====

void FUN_007c75f4(undefined8 *param_1)

{
  <http::uri::authority::Authority_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 007c75fc  FUN_007c75fc =====

void FUN_007c75fc(ulong *param_1,uint *param_2,ulong param_3)

{
  ushort *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  uVar4 = param_1[8];
  param_1[6] = param_1[6] + param_3;
  if (uVar4 == 0) {
    uVar3 = 0;
    uVar4 = param_3 & 0xfffffffffffffff8;
    param_3 = param_3 & 7;
    if (uVar4 != 0) goto LAB_007c7734;
LAB_007c7658:
    if (param_3 < 4) goto LAB_007c778c;
LAB_007c7660:
    uVar4 = (ulong)*(uint *)((long)param_2 + uVar3);
    uVar7 = 4;
    if (param_3 < 6) goto LAB_007c77b8;
  }
  else {
    uVar3 = 8 - uVar4;
    uVar7 = uVar3;
    if (param_3 <= uVar3) {
      uVar7 = param_3;
    }
    if (uVar7 < 4) {
      uVar9 = 0;
      uVar6 = 0;
      if (1 < uVar7) goto LAB_007c768c;
    }
    else {
      uVar6 = (ulong)*param_2;
      uVar9 = 4;
      if (5 < uVar7) {
LAB_007c768c:
        puVar1 = (ushort *)((long)param_2 + uVar9);
        lVar11 = uVar9 << 3;
        uVar9 = uVar9 | 2;
        uVar6 = (ulong)*puVar1 << lVar11 | uVar6;
      }
    }
    if (uVar9 < uVar7) {
      uVar6 = (ulong)*(byte *)((long)param_2 + uVar9) << (uVar9 << 3) | uVar6;
    }
    uVar7 = param_1[7] | uVar6 << ((uVar4 & 7) << 3);
    param_1[7] = uVar7;
    if (param_3 < uVar3) {
      param_1[8] = uVar4 + param_3;
      return;
    }
    uVar6 = param_1[2];
    uVar9 = param_1[3] ^ uVar7;
    uVar4 = uVar6 + *param_1;
    uVar8 = uVar4 ^ (uVar6 >> 0x33 | uVar6 << 0xd);
    uVar5 = param_1[1] + uVar9 ^ (uVar9 >> 0x30 | uVar9 << 0x10);
    uVar6 = param_1[1] + uVar9 + uVar8;
    uVar4 = uVar5 + (uVar4 >> 0x20 | uVar4 << 0x20);
    param_1[2] = uVar6 ^ (uVar8 >> 0x2f | uVar8 << 0x11);
    param_1[3] = uVar4 ^ (uVar5 >> 0x2b | uVar5 << 0x15);
    *param_1 = uVar4 ^ uVar7;
    param_1[1] = uVar6 >> 0x20 | uVar6 << 0x20;
    uVar4 = param_3 - uVar3 & 0xfffffffffffffff8;
    param_3 = param_3 - uVar3 & 7;
    if (uVar4 <= uVar3) goto LAB_007c7658;
LAB_007c7734:
    uVar6 = param_1[2];
    uVar9 = param_1[3];
    uVar7 = *param_1;
    uVar5 = param_1[1];
    do {
      puVar2 = (ulong *)((long)param_2 + uVar3);
      uVar7 = uVar7 + uVar6;
      uVar3 = uVar3 + 8;
      uVar6 = uVar7 ^ (uVar6 >> 0x33 | uVar6 << 0xd);
      uVar9 = *puVar2 ^ uVar9;
      uVar8 = uVar9 + uVar5 ^ (uVar9 >> 0x30 | uVar9 << 0x10);
      uVar9 = uVar9 + uVar5 + uVar6;
      uVar6 = uVar9 ^ (uVar6 >> 0x2f | uVar6 << 0x11);
      uVar5 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar7 = uVar8 + (uVar7 >> 0x20 | uVar7 << 0x20);
      uVar9 = uVar7 ^ (uVar8 >> 0x2b | uVar8 << 0x15);
      uVar7 = uVar7 ^ *puVar2;
    } while (uVar3 < uVar4);
    param_1[2] = uVar6;
    param_1[3] = uVar9;
    *param_1 = uVar7;
    param_1[1] = uVar5;
    if (3 < param_3) goto LAB_007c7660;
LAB_007c778c:
    uVar7 = 0;
    uVar4 = 0;
    if (param_3 < 2) goto LAB_007c77b8;
  }
  lVar10 = uVar7 << 3;
  lVar11 = uVar7 + uVar3;
  uVar7 = uVar7 | 2;
  uVar4 = (ulong)*(ushort *)((long)param_2 + lVar11) << lVar10 | uVar4;
LAB_007c77b8:
  if (uVar7 < param_3) {
    param_1[7] = (ulong)*(byte *)((long)param_2 + uVar7 + uVar3) << (uVar7 << 3) | uVar4;
    param_1[8] = param_3;
    return;
  }
  param_1[7] = uVar4;
  param_1[8] = param_3;
  return;
}


// ===== 007c77e4  FUN_007c77e4 =====

void FUN_007c77e4(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"TimedOutDTLSv1_3",8);
  return;
}


// ===== 007c77f8  FUN_007c77f8 =====

void FUN_007c77f8(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"BadScheme",9);
  return;
}


// ===== 007c780c  FUN_007c780c =====

void FUN_007c780c(long param_1,undefined8 param_2)

{
  undefined1 auStack_50 [16];
  undefined8 local_40 [2];
  long local_30;
  undefined8 uStack_28;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_map(auStack_50,param_2);
  uStack_28 = 0;
  local_40[0] = 2;
  if (*(long *)(param_1 + 0x28) != 0) {
    local_40[0] = 0;
  }
  local_30 = param_1;
  FUN_0077626c(auStack_50,local_40);
  <core::fmt::builders::[7]::core::fmt::builders::DebugMap>::finish(auStack_50);
  return;
}


// ===== 007c7868  FUN_007c7868 =====

void FUN_007c7868(ulong *param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uStack_90;
  ulong local_88;
  ulong uStack_80;
  ulong local_78;
  ulong uStack_70;
  ulong local_68;
  
  uVar5 = *param_1;
  uVar6 = param_1[1];
  uVar2 = param_1[3];
  uVar3 = param_1[4];
  puVar7 = (ulong *)param_1[8];
  puVar9 = (ulong *)param_1[6];
  do {
    if (uVar5 == 1) {
      if (uVar3 <= uVar6) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (uVar6,uVar3,&PTR_s__root__cargo_registry_src_index__00ade808);
      }
      lVar4 = uVar2 + uVar6 * 0x48;
      bVar1 = (*(uint *)(lVar4 + 0x10) & 1) != 0;
      if (bVar1) {
        uVar6 = *(ulong *)(lVar4 + 0x18);
      }
      uVar5 = (ulong)bVar1;
      uStack_80 = *(ulong *)(lVar4 + 0x28);
      local_88 = *(ulong *)(lVar4 + 0x20);
      uStack_70 = *(ulong *)(lVar4 + 0x38);
      local_78 = *(ulong *)(lVar4 + 0x30);
      local_68 = *(ulong *)(lVar4 + 0x40);
      *param_1 = uVar5;
      param_1[1] = uVar6;
      puVar8 = puVar9;
    }
    else {
      if (puVar9 == puVar7) {
LAB_007c7980:
        param_1[4] = 0;
        return;
      }
      puVar8 = puVar9 + 0xd;
      uVar5 = *puVar9;
      param_1[6] = (ulong)puVar8;
      if (uVar5 == 2) goto LAB_007c7980;
      uVar12 = puVar9[9];
      uVar11 = puVar9[8];
      uStack_90 = puVar9[0xb];
      uVar10 = puVar9[10];
      uVar5 = uVar5 & 1;
      uVar6 = puVar9[1];
      local_68 = puVar9[7];
      uStack_70 = puVar9[6];
      local_78 = puVar9[5];
      uStack_80 = puVar9[4];
      local_88 = puVar9[3];
      *param_1 = uVar5;
      param_1[1] = uVar6;
      if (uVar11 != 0) {
                    /* try { // try from 007c7968 to 007c796f has its CatchHandler @ 007c79b8 */
        (**(code **)(uVar11 + 0x20))(&uStack_90,uVar12,uVar10);
      }
    }
    (**(code **)(local_88 + 0x20))(&uStack_70,uStack_80,local_78);
    puVar9 = puVar8;
  } while( true );
}


// ===== 007c79dc  FUN_007c79dc =====

void FUN_007c79dc(long *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_2 + 0x10);
  uVar1 = uVar2;
  if (*(ulong *)(param_2 + 0x18) <= uVar2) {
    uVar1 = *(ulong *)(param_2 + 0x18);
  }
  *param_1 = *(long *)(param_2 + 8) + uVar1;
  param_1[1] = uVar2 - uVar1;
  return;
}


// ===== 007c79fc  FUN_007c79fc =====

void FUN_007c79fc(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = param_2[1];
  uVar1 = uVar2;
  if ((ulong)param_2[2] <= uVar2) {
    uVar1 = param_2[2];
  }
  *param_1 = *param_2 + uVar1;
  param_1[1] = uVar2 - uVar1;
  return;
}


// ===== 007c7a1c  FUN_007c7a1c =====

undefined1  [16] FUN_007c7a1c(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x10);
}


// ===== 007c7a28  FUN_007c7a28 =====

void FUN_007c7a28(ulong *param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *param_1 + 0x7fffffffffffffef;
  if (*param_1 < 0x8000000000000011) {
    lVar1 = 0xb;
  }
                    /* WARNING: Could not recover jumptable at 0x007c7a6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_007c7a70 + (ulong)(byte)""[lVar1] * 4))(param_2);
  return;
}


// ===== 007c7e1c  FUN_007c7e1c =====

undefined1  [16] FUN_007c7e1c(undefined8 *param_1)

{
  size_t __n;
  void *__src;
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  __n = param_1[1];
  if ((long)__n < 0) {
    uVar1 = 0;
  }
  else {
    if (__n == 0) {
      return ZEXT816(1);
    }
    __src = (void *)*param_1;
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar1 = 1;
    auVar2._0_8_ = (void *)FUN_004b25a4(__n,1);
    if (auVar2._0_8_ != (void *)0x0) {
      memcpy(auVar2._0_8_,__src,__n);
      auVar2._8_8_ = __n;
      return auVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar1,__n);
}


// ===== 007c7ea8  FUN_007c7ea8 =====

void FUN_007c7ea8(undefined8 param_1)

{
  undefined8 *puVar1;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)FUN_004b25a4(8,8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    return;
  }
                    /* try { // try from 007c7ee8 to 007c7ef3 has its CatchHandler @ 007c7ef8 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,8);
}


// ===== 007c7f10  FUN_007c7f10 =====

undefined1  [16] FUN_007c7f10(undefined1 (*param_1) [16])

{
  return *param_1;
}


// ===== 007c7f1c  FUN_007c7f1c =====

void FUN_007c7f1c(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,
             "NotEofEmptyHostIdnaErrorInvalidPortInvalidIpv4AddressInvalidIpv6AddressInvalidDomainCharacterRelativeUrlWithoutBaseRelativeUrlWithCannotBeABaseBaseSetHostOnCannotBeABaseUrlOverflow"
             ,6,&local_18,&DAT_00adf178);
  return;
}


// ===== 007c7f5c  FUN_007c7f5c =====

void FUN_007c7f5c(byte *param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,&DAT_002e5a30 + *(int *)(&DAT_002e5a30 + (ulong)*param_1 * 4),
             *(undefined8 *)(&DAT_002e59e0 + (ulong)*param_1 * 8));
  return;
}


// ===== 007c7f84  FUN_007c7f84 =====

void FUN_007c7f84(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"IncompleteBody",0xe);
  return;
}


// ===== 007c7f98  FUN_007c7f98 =====

void FUN_007c7f98(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,"Elapsed",7,&local_18,&DAT_00adf198);
  return;
}


// ===== 007c7fd8  FUN_007c7fd8 =====

void FUN_007c7fd8(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007c7fe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x18))(*param_1);
  return;
}


// ===== 007c7fe4  FUN_007c7fe4 =====

void FUN_007c7fe4(long param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt
            (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_2);
  return;
}


// ===== 007c7ff8  FUN_007c7ff8 =====

void FUN_007c7ff8(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,"InvalidUriPoolDisabledCheckoutNoLongerWantedCheckedOutClosedValue",10,
             &local_18,&DAT_00adf1b8);
  return;
}


// ===== 007c8038  FUN_007c8038 =====

void FUN_007c8038(byte *param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,&DAT_002e5a70 + *(int *)(&DAT_002e5a70 + (ulong)*param_1 * 4),
             *(undefined8 *)(&DAT_002e5a58 + (ulong)*param_1 * 8));
  return;
}


// ===== 007c8060  thunk_FUN_007b6fd0 =====

undefined1  [16] thunk_FUN_007b6fd0(long param_1,uint param_2,long *param_3)

{
  void *__src;
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong __n;
  long lVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  
  lVar1 = *(long *)(param_1 + 8);
  uVar2 = *(ulong *)(param_1 + 0x10);
  uVar8 = *(ulong *)(param_1 + 0x18);
  uVar6 = 0;
  do {
    uVar4 = uVar2;
    if (uVar8 <= uVar2) {
      uVar4 = uVar8;
    }
    __n = uVar2 - uVar4;
    __src = (void *)(lVar1 + uVar4);
    if (__n < 0x10) {
      uVar4 = 0;
      if (__n == 0) {
        uVar4 = 0;
      }
      else {
        do {
          if ((uint)*(byte *)((long)__src + uVar4) == (param_2 & 0xff)) {
            auVar9._8_8_ = uVar4;
            auVar9._0_8_ = 1;
            goto LAB_007b7098;
          }
          uVar4 = uVar4 + 1;
        } while (__n != uVar4);
        uVar4 = 0;
      }
    }
    else {
      auVar9 = core::slice::memchr::memchr_aligned(param_2,__src,__n);
      uVar4 = auVar9._0_8_;
      if (uVar4 == 1) {
LAB_007b7098:
        uVar5 = auVar9._8_8_;
        uVar4 = auVar9._0_8_;
        if (__n <= uVar5) {
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (0,uVar5,__n,&PTR_s__nix_store_8006w282fgsx3273c878b_00add9e0);
        }
        __n = uVar5 + 1;
      }
    }
    lVar7 = param_3[2];
    if ((ulong)(*param_3 - lVar7) < __n) {
      FUN_0079be54(param_3,lVar7,__n,1,1);
      lVar7 = param_3[2];
    }
    else if (__n == 0) {
      *(ulong *)(param_1 + 0x18) = uVar8;
      break;
    }
    memcpy((void *)(param_3[1] + lVar7),__src,__n);
    uVar8 = __n + uVar8;
    uVar6 = __n + uVar6;
    param_3[2] = lVar7 + __n;
    *(ulong *)(param_1 + 0x18) = uVar8;
  } while ((uVar4 & 1) == 0);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar6;
  return auVar3 << 0x40;
}


// ===== 007c8064  thunk_FUN_007b74f0 =====

/* WARNING: Removing unreachable block (ram,0x007b7564) */
/* WARNING: Removing unreachable block (ram,0x007b7590) */

undefined1  [16] thunk_FUN_007b74f0(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  lVar2 = *(long *)(param_1 + 8);
  uVar3 = *(ulong *)(param_1 + 0x10);
  uVar7 = *(ulong *)(param_1 + 0x18);
  uVar5 = 0;
  do {
    uVar4 = uVar3;
    if (uVar7 <= uVar3) {
      uVar4 = uVar7;
    }
    uVar6 = uVar3 - uVar4;
    lVar1 = lVar2 + uVar4;
    if (uVar6 < 0x10) {
      uVar4 = 0;
      if (uVar6 != 0) {
        do {
          if ((uint)*(byte *)(lVar1 + uVar4) == (param_2 & 0xff)) goto LAB_007b75b4;
          uVar4 = uVar4 + 1;
        } while (uVar6 != uVar4);
      }
    }
    else {
      auVar8 = core::slice::memchr::memchr_aligned(param_2,lVar1,uVar6);
      uVar4 = auVar8._8_8_;
      if (auVar8._0_8_ == 1) {
LAB_007b75b4:
        uVar5 = uVar4 + 1 + uVar5;
        *(ulong *)(param_1 + 0x18) = uVar4 + 1 + uVar7;
        break;
      }
    }
    uVar7 = uVar6 + uVar7;
    uVar5 = uVar6 + uVar5;
    *(ulong *)(param_1 + 0x18) = uVar7;
  } while (uVar6 != 0);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar5;
  return auVar8 << 0x40;
}


// ===== 007c8068  FUN_007c8068 =====

void FUN_007c8068(undefined1 *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_2 + 0x10);
  uVar2 = *(ulong *)(param_2 + 0x18);
  *param_1 = 0;
  param_1[1] = uVar2 < uVar1;
  return;
}


// ===== 007c8080  FUN_007c8080 =====

undefined1  [16] FUN_007c8080(undefined8 param_1,long param_2)

{
  undefined **ppuVar1;
  long lVar2;
  undefined1 auVar3 [16];
  long local_58 [3];
  
  lVar2 = *(long *)(param_2 + 0x10);
                    /* try { // try from 007c80a0 to 007c80ab has its CatchHandler @ 007c8128 */
  auVar3 = FUN_007b6fd0(param_1,10,param_2);
                    /* try { // try from 007c80bc to 007c80c7 has its CatchHandler @ 007c8110 */
  <core::str::str>::from_utf8
            (local_58,*(long *)(param_2 + 8) + lVar2,*(long *)(param_2 + 0x10) - lVar2);
  if (local_58[0] == 0) {
    lVar2 = *(long *)(param_2 + 0x10);
  }
  else {
    ppuVar1 = auVar3._8_8_;
    if ((auVar3 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
      ppuVar1 = &PTR_DAT_00add650;
    }
    auVar3._8_8_ = ppuVar1;
    auVar3._0_8_ = 1;
  }
  *(long *)(param_2 + 0x10) = lVar2;
  return auVar3;
}


// ===== 007c8138  thunk_FUN_007b714c =====

undefined1  [16] thunk_FUN_007b714c(long *param_1,uint param_2,long *param_3)

{
  void *__src;
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong __n;
  long lVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  
  lVar1 = *param_1;
  uVar2 = param_1[1];
  uVar8 = param_1[2];
  uVar6 = 0;
  do {
    uVar4 = uVar2;
    if (uVar8 <= uVar2) {
      uVar4 = uVar8;
    }
    __n = uVar2 - uVar4;
    __src = (void *)(lVar1 + uVar4);
    if (__n < 0x10) {
      uVar4 = 0;
      if (__n == 0) {
        uVar4 = 0;
      }
      else {
        do {
          if ((uint)*(byte *)((long)__src + uVar4) == (param_2 & 0xff)) {
            auVar9._8_8_ = uVar4;
            auVar9._0_8_ = 1;
            goto LAB_007b7214;
          }
          uVar4 = uVar4 + 1;
        } while (__n != uVar4);
        uVar4 = 0;
      }
    }
    else {
      auVar9 = core::slice::memchr::memchr_aligned(param_2,__src,__n);
      uVar4 = auVar9._0_8_;
      if (uVar4 == 1) {
LAB_007b7214:
        uVar5 = auVar9._8_8_;
        uVar4 = auVar9._0_8_;
        if (__n <= uVar5) {
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (0,uVar5,__n,&PTR_s__nix_store_8006w282fgsx3273c878b_00add9e0);
        }
        __n = uVar5 + 1;
      }
    }
    lVar7 = param_3[2];
    if ((ulong)(*param_3 - lVar7) < __n) {
      FUN_0079be54(param_3,lVar7,__n,1,1);
      lVar7 = param_3[2];
    }
    else if (__n == 0) {
      param_1[2] = uVar8;
      break;
    }
    memcpy((void *)(param_3[1] + lVar7),__src,__n);
    uVar8 = __n + uVar8;
    uVar6 = __n + uVar6;
    param_3[2] = lVar7 + __n;
    param_1[2] = uVar8;
  } while ((uVar4 & 1) == 0);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar6;
  return auVar3 << 0x40;
}


// ===== 007c813c  thunk_FUN_007b75e4 =====

/* WARNING: Removing unreachable block (ram,0x007b7658) */
/* WARNING: Removing unreachable block (ram,0x007b7684) */

undefined1  [16] thunk_FUN_007b75e4(long *param_1,uint param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  lVar2 = *param_1;
  uVar3 = param_1[1];
  uVar7 = param_1[2];
  uVar5 = 0;
  do {
    uVar1 = uVar3;
    if (uVar7 <= uVar3) {
      uVar1 = uVar7;
    }
    uVar6 = uVar3 - uVar1;
    if (uVar6 < 0x10) {
      uVar4 = 0;
      if (uVar6 != 0) {
        do {
          if ((uint)*(byte *)(lVar2 + uVar1 + uVar4) == (param_2 & 0xff)) goto LAB_007b76a8;
          uVar4 = uVar4 + 1;
        } while (uVar6 != uVar4);
      }
    }
    else {
      auVar8 = core::slice::memchr::memchr_aligned(param_2,lVar2 + uVar1,uVar6);
      uVar4 = auVar8._8_8_;
      if (auVar8._0_8_ == 1) {
LAB_007b76a8:
        uVar5 = uVar4 + 1 + uVar5;
        param_1[2] = uVar4 + 1 + uVar7;
        break;
      }
    }
    uVar7 = uVar6 + uVar7;
    uVar5 = uVar6 + uVar5;
    param_1[2] = uVar7;
  } while (uVar6 != 0);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar5;
  return auVar8 << 0x40;
}


// ===== 007c8140  FUN_007c8140 =====

void FUN_007c8140(undefined1 *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_2 + 8);
  uVar2 = *(ulong *)(param_2 + 0x10);
  *param_1 = 0;
  param_1[1] = uVar2 < uVar1;
  return;
}


// ===== 007c8158  FUN_007c8158 =====

undefined1  [16] FUN_007c8158(undefined8 param_1,long param_2)

{
  undefined **ppuVar1;
  long lVar2;
  undefined1 auVar3 [16];
  long local_58 [3];
  
  lVar2 = *(long *)(param_2 + 0x10);
                    /* try { // try from 007c8178 to 007c8183 has its CatchHandler @ 007c8200 */
  auVar3 = FUN_007b714c(param_1,10,param_2);
                    /* try { // try from 007c8194 to 007c819f has its CatchHandler @ 007c81e8 */
  <core::str::str>::from_utf8
            (local_58,*(long *)(param_2 + 8) + lVar2,*(long *)(param_2 + 0x10) - lVar2);
  if (local_58[0] == 0) {
    lVar2 = *(long *)(param_2 + 0x10);
  }
  else {
    ppuVar1 = auVar3._8_8_;
    if ((auVar3 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
      ppuVar1 = &PTR_DAT_00add650;
    }
    auVar3._8_8_ = ppuVar1;
    auVar3._0_8_ = 1;
  }
  *(long *)(param_2 + 0x10) = lVar2;
  return auVar3;
}


// ===== 007c8210  FUN_007c8210 =====

undefined1 * FUN_007c8210(undefined8 param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  
  uVar2 = DAT_00b0f1d0;
  if (DAT_00b0f1d0 == 0) {
    uVar2 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(&DAT_00b0f1d0);
    puVar1 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar2);
  }
  else {
    puVar1 = (undefined1 *)pthread_getspecific((pthread_key_t)DAT_00b0f1d0);
  }
  if (&DAT_00000001 < puVar1) {
    return puVar1;
  }
  puVar1 = (undefined1 *)FUN_007bbee0(uVar2 & 0xffffffff,puVar1,param_1);
  return puVar1;
}


// ===== 007c8288  FUN_007c8288 =====

undefined1  [16] FUN_007c8288(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x28;
  auVar1._0_8_ = "description() is deprecated; use Display";
  return auVar1;
}


// ===== 007c8298  FUN_007c8298 =====

void FUN_007c8298(void)

{
  return;
}


// ===== 007c829c  FUN_007c829c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007c829c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a0d50;
  param_1[1] = _UNK_002a0d58;
  *param_1 = uVar1;
  return;
}


// ===== 007c82b0  FUN_007c82b0 =====

undefined1  [16] FUN_007c82b0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x28;
  auVar1._0_8_ = "description() is deprecated; use Display";
  return auVar1;
}


// ===== 007c82c0  FUN_007c82c0 =====

undefined8 FUN_007c82c0(void)

{
  return 0;
}


// ===== 007c82c8  FUN_007c82c8 =====

void FUN_007c82c8(void)

{
  return;
}


// ===== 007c82cc  FUN_007c82cc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007c82cc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a0820;
  param_1[1] = _UNK_002a0828;
  *param_1 = uVar1;
  return;
}


// ===== 007c82e0  FUN_007c82e0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007c82e0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a06f0;
  param_1[1] = _UNK_002a06f8;
  *param_1 = uVar1;
  return;
}


// ===== 007c82f4  FUN_007c82f4 =====

undefined8 FUN_007c82f4(void)

{
  return 0;
}


// ===== 007c82fc  FUN_007c82fc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007c82fc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a0600;
  param_1[1] = _UNK_002a0608;
  *param_1 = uVar1;
  return;
}


// ===== 007c8310  FUN_007c8310 =====

undefined1  [16] FUN_007c8310(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x28;
  auVar1._0_8_ = "description() is deprecated; use Display";
  return auVar1;
}


// ===== 007c8320  FUN_007c8320 =====

undefined8 FUN_007c8320(void)

{
  return 0;
}


// ===== 007c8328  FUN_007c8328 =====

void FUN_007c8328(void)

{
  return;
}


// ===== 007c832c  FUN_007c832c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007c832c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a01f0;
  param_1[1] = _UNK_002a01f8;
  *param_1 = uVar1;
  return;
}


// ===== 007c8340  FUN_007c8340 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007c8340(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a08e0;
  param_1[1] = _UNK_002a08e8;
  *param_1 = uVar1;
  return;
}


// ===== 007c8354  FUN_007c8354 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007c8354(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a0f50;
  param_1[1] = _UNK_002a0f58;
  *param_1 = uVar1;
  return;
}


// ===== 007c8368  FUN_007c8368 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007c8368(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029fb90;
  param_1[1] = _UNK_0029fb98;
  *param_1 = uVar1;
  return;
}


// ===== 007c837c  FUN_007c837c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007c837c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a0f60;
  param_1[1] = _UNK_002a0f68;
  *param_1 = uVar1;
  return;
}


// ===== 007c8390  FUN_007c8390 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007c8390(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a0f30;
  param_1[1] = _UNK_002a0f38;
  *param_1 = uVar1;
  return;
}


// ===== 007c83a4  FUN_007c83a4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007c83a4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a0e70;
  param_1[1] = _UNK_002a0e78;
  *param_1 = uVar1;
  return;
}


// ===== 007c83b8  FUN_007c83b8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007c83b8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029fba0;
  param_1[1] = _UNK_0029fba8;
  *param_1 = uVar1;
  return;
}


// ===== 007c83cc  FUN_007c83cc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007c83cc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a0130;
  param_1[1] = _UNK_002a0138;
  *param_1 = uVar1;
  return;
}


// ===== 007c83e0  FUN_007c83e0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007c83e0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a04f0;
  param_1[1] = _UNK_002a04f8;
  *param_1 = uVar1;
  return;
}


// ===== 007c83f4  FUN_007c83f4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007c83f4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a08f0;
  param_1[1] = _UNK_002a08f8;
  *param_1 = uVar1;
  return;
}


// ===== 007c8408  FUN_007c8408 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_007c8408(long *param_1,ulong param_2,long param_3,ulong param_4,long param_5)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long *local_1c0;
  undefined **ppuStack_1b8;
  long *local_1b0;
  undefined **ppuStack_1a8;
  undefined *local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long local_180;
  long lStack_178;
  undefined *local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long local_150;
  long lStack_148;
  undefined8 local_138;
  long local_130;
  long lStack_128;
  ulong local_120;
  long *local_118;
  undefined **ppuStack_110;
  undefined *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  long local_e8;
  long lStack_e0;
  undefined *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  long local_b8;
  long lStack_b0;
  undefined *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  long local_88;
  long lStack_80;
  long *local_78;
  undefined **ppuStack_70;
  long local_68;
  undefined8 uStack_60;
  long local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  
  lStack_128 = 1;
  local_130 = 1;
  local_120 = param_2;
  local_118 = (long *)param_3;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  local_1c0 = (long *)FUN_004b25a4(0x20,8);
  if (local_1c0 == (long *)0x0) {
                    /* try { // try from 007c86c4 to 007c86cf has its CatchHandler @ 007c8888 */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x20);
  }
  ppuStack_1b8 = &PTR_FUN_00adf1d8;
  local_1c0[1] = lStack_128;
  *local_1c0 = local_130;
  local_1c0[3] = (long)local_118;
  local_1c0[2] = local_120;
  if (param_4 == 0) {
    lVar11 = *param_1;
    local_1b0 = (long *)0x0;
    if (lVar11 == 0) goto LAB_007c8684;
  }
  else {
    lStack_128 = 1;
    local_130 = 1;
    local_120 = param_4;
    local_118 = (long *)param_5;
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    local_1b0 = (long *)FUN_004b25a4(0x20,8);
    if (local_1b0 == (long *)0x0) {
                    /* try { // try from 007c86d4 to 007c86e3 has its CatchHandler @ 007c8838 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x20);
    }
    lVar11 = *param_1;
    ppuStack_1a8 = &PTR_FUN_00adf1f8;
    local_1b0[1] = lStack_128;
    *local_1b0 = local_130;
    local_1b0[3] = (long)local_118;
    local_1b0[2] = local_120;
    if (lVar11 == 0) {
      do {
        lVar11 = *local_1b0;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(local_1b0,0x10);
        if (bVar2) {
          *local_1b0 = lVar11 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar11 + -1 == 0) {
        DataMemoryBarrier(2,1);
                    /* try { // try from 007c84cc to 007c84d3 has its CatchHandler @ 007c87c4 */
        <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
        drop_slow(&local_1b0);
      }
LAB_007c8684:
      do {
        lVar11 = *local_1c0;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(local_1c0,0x10);
        if (bVar2) {
          *local_1c0 = lVar11 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar11 == 1) {
        DataMemoryBarrier(2,1);
        <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
        drop_slow(&local_1c0);
      }
      return (undefined8 *)0x0;
    }
  }
  puVar7 = PTR___RUST_STD_INTERNAL_VAL_00b00bf8;
  uVar10 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00bf8;
  if (uVar10 == 0) {
                    /* try { // try from 007c86e8 to 007c8717 has its CatchHandler @ 007c87f4 */
    uVar10 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
             lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00bf8);
    plVar8 = (long *)pthread_getspecific((pthread_key_t)uVar10);
  }
  else {
    plVar8 = (long *)pthread_getspecific((pthread_key_t)uVar10);
  }
  if (plVar8 < (long *)0x2) {
    plVar8 = (long *)FUN_007bbf8c(uVar10 & 0xffffffff,plVar8,0);
  }
  uVar6 = _UNK_00adf240;
  uVar5 = _DAT_00adf238;
  uVar4 = _UNK_00adf230;
  puVar3 = PTR_DAT_00adf228;
  if (plVar8 == (long *)0x0) {
                    /* try { // try from 007c8794 to 007c879f has its CatchHandler @ 007c87f4 */
                    /* WARNING: Subroutine does not return */
    std::thread::local::panic_access_error(&PTR_s__nix_store_8006w282fgsx3273c878b_00adfa00);
  }
  lStack_178 = plVar8[1];
  local_180 = *plVar8;
  *plVar8 = *plVar8 + 1;
  uStack_198 = uVar4;
  local_1a0 = puVar3;
  uStack_188 = uVar6;
  uStack_190 = uVar5;
  uVar10 = *(ulong *)puVar7;
  if (uVar10 == 0) {
                    /* try { // try from 007c871c to 007c874b has its CatchHandler @ 007c87e4 */
    uVar10 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
             lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00bf8);
    plVar8 = (long *)pthread_getspecific((pthread_key_t)uVar10);
  }
  else {
    plVar8 = (long *)pthread_getspecific((pthread_key_t)uVar10);
  }
  if (plVar8 < (long *)0x2) {
    plVar8 = (long *)FUN_007bbf8c(uVar10 & 0xffffffff,plVar8,0);
  }
  if (plVar8 == (long *)0x0) {
                    /* try { // try from 007c87a4 to 007c87af has its CatchHandler @ 007c87e4 */
                    /* WARNING: Subroutine does not return */
    std::thread::local::panic_access_error(&PTR_s__nix_store_8006w282fgsx3273c878b_00adfa00);
  }
  lStack_148 = plVar8[1];
  local_150 = *plVar8;
  uStack_168 = uVar4;
  local_170 = puVar3;
  uStack_158 = uVar6;
  uStack_160 = uVar5;
  *plVar8 = *plVar8 + 1;
  local_138 = 0;
  uVar10 = *(ulong *)puVar7;
  if (uVar10 == 0) {
                    /* try { // try from 007c8750 to 007c877f has its CatchHandler @ 007c87cc */
    uVar10 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
             lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00bf8);
    plVar8 = (long *)pthread_getspecific((pthread_key_t)uVar10);
  }
  else {
    plVar8 = (long *)pthread_getspecific((pthread_key_t)uVar10);
  }
  if (plVar8 < (long *)0x2) {
    plVar8 = (long *)FUN_007bbf8c(uVar10 & 0xffffffff,plVar8,0);
  }
  if (plVar8 == (long *)0x0) {
                    /* try { // try from 007c87b4 to 007c87bf has its CatchHandler @ 007c87cc */
                    /* WARNING: Subroutine does not return */
    std::thread::local::panic_access_error(&PTR_s__nix_store_8006w282fgsx3273c878b_00adfa00);
  }
  lStack_80 = plVar8[1];
  local_88 = *plVar8;
  local_50 = (undefined4)param_1[2];
  *plVar8 = *plVar8 + 1;
  uStack_d0 = uStack_168;
  local_d8 = local_170;
  uStack_c0 = uStack_158;
  local_c8 = uStack_160;
  lStack_e0 = lStack_178;
  local_e8 = local_180;
  uStack_100 = uStack_198;
  local_108 = local_1a0;
  uStack_f0 = uStack_188;
  local_f8 = uStack_190;
  local_58 = param_1[1];
  lStack_b0 = lStack_148;
  local_b8 = local_150;
  local_120 = local_120 & 0xffffff0000000000;
  lStack_128 = 1;
  local_130 = 1;
  ppuStack_110 = ppuStack_1a8;
  local_118 = local_1b0;
  uStack_60 = 0;
  uStack_a0 = uVar4;
  local_a8 = puVar3;
  uStack_90 = uVar6;
  local_98 = uVar5;
  ppuStack_70 = ppuStack_1b8;
  local_78 = local_1c0;
  local_68 = lVar11;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar9 = (undefined8 *)FUN_004b25a4(0xe8,8);
  if (puVar9 != (undefined8 *)0x0) {
    puVar9[0x1c] = CONCAT44(uStack_4c,local_50);
    puVar9[0x19] = local_68;
    puVar9[0x18] = ppuStack_70;
    puVar9[0x1b] = local_58;
    puVar9[0x1a] = uStack_60;
    puVar9[0x11] = local_a8;
    puVar9[0x10] = lStack_b0;
    puVar9[0x13] = local_98;
    puVar9[0x12] = uStack_a0;
    puVar9[0x15] = local_88;
    puVar9[0x14] = uStack_90;
    puVar9[0x17] = local_78;
    puVar9[0x16] = lStack_80;
    puVar9[9] = local_e8;
    puVar9[8] = uStack_f0;
    puVar9[0xb] = local_d8;
    puVar9[10] = lStack_e0;
    puVar9[0xd] = local_c8;
    puVar9[0xc] = uStack_d0;
    puVar9[0xf] = local_b8;
    puVar9[0xe] = uStack_c0;
    puVar9[1] = lStack_128;
    *puVar9 = local_130;
    puVar9[3] = local_118;
    puVar9[2] = local_120;
    puVar9[5] = local_108;
    puVar9[4] = ppuStack_110;
    puVar9[7] = local_f8;
    puVar9[6] = uStack_100;
    return puVar9;
  }
                    /* try { // try from 007c8784 to 007c878f has its CatchHandler @ 007c8824 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0xe8);
}


// ===== 007c88e4  FUN_007c88e4 =====

void FUN_007c88e4(long *param_1,long *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar5 = *param_2;
  if (lVar5 == 0) {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar1 = (undefined8 *)FUN_004b25a4(0x18,8);
    if (puVar1 == (undefined8 *)0x0) {
                    /* try { // try from 007c89bc to 007c89c7 has its CatchHandler @ 007c89cc */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x18);
    }
    uVar6 = *param_3;
    uVar3 = param_3[2];
    puVar1[1] = param_3[1];
    *puVar1 = uVar6;
    puVar1[2] = uVar3;
    ppuVar4 = &PTR_FUN_00adf270;
  }
  else {
    lVar2 = param_2[1];
    uVar7 = param_3[1];
    uVar6 = *param_3;
    uVar3 = param_3[2];
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar1 = (undefined8 *)FUN_004b25a4(0x28,8);
    if (puVar1 == (undefined8 *)0x0) {
                    /* try { // try from 007c89ac to 007c89b7 has its CatchHandler @ 007c89f0 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x28);
    }
    puVar1[4] = lVar2;
    ppuVar4 = &PTR_FUN_00adf248;
    puVar1[1] = uVar7;
    *puVar1 = uVar6;
    puVar1[3] = lVar5;
    puVar1[2] = uVar3;
  }
  *param_2 = (long)puVar1;
  param_2[1] = (long)ppuVar4;
  lVar8 = *param_2;
  lVar2 = param_2[3];
  lVar5 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = lVar8;
  param_1[3] = lVar2;
  param_1[2] = lVar5;
  return;
}


// ===== 007c8a30  FUN_007c8a30 =====

long FUN_007c8a30(long param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  char cVar2;
  ulong uVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  
  auVar5 = <mio::sys::unix::pipe::Receiver_as_mio::event::source::Source>::deregister
                     (param_3,param_1 + 0x40);
  if (auVar5._0_8_ != 0) {
    return auVar5._0_8_;
  }
  pcVar1 = (char *)(param_1 + 8);
  if (*pcVar1 == '\0') {
    cVar2 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar4) {
      *pcVar1 = '\x01';
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_007c8a88;
  }
  else {
    ClearExclusiveLocal();
  }
  <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
            (param_1 + 8,auVar5._8_8_,0xffffffff);
LAB_007c8a88:
                    /* try { // try from 007c8a88 to 007c8a97 has its CatchHandler @ 007c8b28 */
  uVar3 = <tokio::runtime::io::registration_set::tokio::runtime::io::registration_set::RegistrationSet>
          ::deregister(param_1,param_1 + 0x10,param_2);
  do {
    if (*pcVar1 != '\x01') {
      bVar4 = false;
      ClearExclusiveLocal();
      goto joined_r0x007c8b00;
    }
    cVar2 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar4) {
      *pcVar1 = '\0';
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  bVar4 = true;
joined_r0x007c8b00:
  if ((uVar3 & 1) != 0) {
    if (!bVar4) {
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(param_1 + 8,0);
    }
    <tokio::runtime::io::driver::[0]::tokio::runtime::io::driver::Handle>::unpark(param_1);
    return 0;
  }
  if (!bVar4) {
    <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(pcVar1,0);
    return 0;
  }
  return 0;
}


// ===== 007c8b60  FUN_007c8b60 =====

undefined8
FUN_007c8b60(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 local_28;
  
  plVar6 = (long *)*param_1;
  do {
    lVar5 = *plVar6;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = lVar5 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (-1 < lVar5) {
    uVar4 = FUN_007792f8(param_2,param_3,plVar6,0xcc,param_4);
                    /* try { // try from 007c8bb0 to 007c8bbf has its CatchHandler @ 007c8c3c */
    lVar5 = FUN_007ca4ac(plVar6 + 0xf,uVar4,uVar4);
                    /* try { // try from 007c8bc8 to 007c8bd3 has its CatchHandler @ 007c8c08 */
    local_28 = param_4;
    <tokio::runtime::task_hooks::tokio::runtime::task_hooks::TaskHooks>::spawn
              (plVar6 + 0x30,&local_28);
    if (lVar5 != 0) {
                    /* try { // try from 007c8bd8 to 007c8be3 has its CatchHandler @ 007c8c00 */
      <alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>as_tokio::runtime::task::Schedule>
      ::schedule(param_1,lVar5);
    }
    return uVar4;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x7c8c00);
  (*pcVar3)();
}


// ===== 007c8c64  FUN_007c8c64 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007c8c64(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  long local_50;
  long lStack_48;
  
  puVar6 = (undefined8 *)*param_2;
  if (puVar6 == (undefined8 *)0x0) {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar6 = (undefined8 *)FUN_004b25a4(0x20,8);
    uVar2 = _UNK_00adf240;
    uVar7 = _DAT_00adf238;
    uVar5 = _UNK_00adf230;
    puVar1 = PTR_DAT_00adf228;
    if (puVar6 == (undefined8 *)0x0) {
                    /* try { // try from 007c8df8 to 007c8e03 has its CatchHandler @ 007c8e38 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x20);
    }
    *param_2 = puVar6;
    puVar6[1] = uVar5;
    *puVar6 = puVar1;
    puVar6[3] = uVar2;
    puVar6[2] = uVar7;
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar3 = (undefined8 *)FUN_004b25a4(0x18,8);
  lStack_48 = _UNK_002a02f8;
  local_50 = _DAT_002a02f0;
  if (puVar3 == (undefined8 *)0x0) {
                    /* try { // try from 007c8de8 to 007c8df3 has its CatchHandler @ 007c8e54 */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x18);
  }
  uVar7 = *param_3;
  uVar5 = param_3[2];
  puVar3[1] = param_3[1];
  *puVar3 = uVar7;
  puVar3[2] = uVar5;
  auVar8 = FUN_007b3028(puVar6,&local_50,puVar3,&PTR_FUN_00adf298);
  if (auVar8._0_8_ != 0) {
    auVar8 = (**(code **)(auVar8._8_8_ + 0x38))();
    puVar4 = auVar8._8_8_;
    puVar3 = auVar8._0_8_;
                    /* try { // try from 007c8d24 to 007c8d2b has its CatchHandler @ 007c8e20 */
    (*(code *)puVar4[3])(&local_50);
    puVar6 = puVar3;
    if (local_50 != 0x7ee16d128ace40cb || lStack_48 != 0x32fc7f6c4332c92f) {
      puVar6 = (undefined8 *)0x0;
      if ((code *)*puVar4 != (code *)0x0) {
                    /* try { // try from 007c8d70 to 007c8d77 has its CatchHandler @ 007c8e08 */
        (*(code *)*puVar4)(puVar3);
      }
      if (puVar4[1] != 0) {
        free(puVar3);
      }
    }
    if (puVar6 != (undefined8 *)0x0) {
      uVar7 = *puVar3;
      uVar5 = puVar3[2];
      param_1[1] = puVar3[1];
      *param_1 = uVar7;
      param_1[2] = uVar5;
      free(puVar6);
      return;
    }
  }
  *param_1 = 0xfffffffffffffffe;
  return;
}


// ===== 007c8e7c  FUN_007c8e7c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007c8e7c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  long local_50;
  long lStack_48;
  
  puVar5 = (undefined8 *)*param_2;
  if (puVar5 == (undefined8 *)0x0) {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar5 = (undefined8 *)FUN_004b25a4(0x20,8);
    uVar7 = _UNK_00adf240;
    uVar6 = _DAT_00adf238;
    uVar4 = _UNK_00adf230;
    puVar1 = PTR_DAT_00adf228;
    if (puVar5 == (undefined8 *)0x0) {
                    /* try { // try from 007c9030 to 007c903b has its CatchHandler @ 007c9070 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x20);
    }
    *param_2 = puVar5;
    puVar5[1] = uVar4;
    *puVar5 = puVar1;
    puVar5[3] = uVar7;
    puVar5[2] = uVar6;
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar2 = (undefined8 *)FUN_004b25a4(0x58,8);
  if (puVar2 == (undefined8 *)0x0) {
                    /* try { // try from 007c9020 to 007c902b has its CatchHandler @ 007c9088 */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x58);
  }
  uVar6 = param_3[4];
  uVar8 = param_3[7];
  uVar7 = param_3[6];
  uVar4 = param_3[10];
  puVar2[5] = param_3[5];
  puVar2[4] = uVar6;
  puVar2[7] = uVar8;
  puVar2[6] = uVar7;
  uVar7 = param_3[9];
  uVar6 = param_3[8];
  puVar2[10] = uVar4;
  puVar2[9] = uVar7;
  puVar2[8] = uVar6;
  uVar7 = *param_3;
  uVar6 = param_3[3];
  uVar4 = param_3[2];
  puVar2[1] = param_3[1];
  *puVar2 = uVar7;
  puVar2[3] = uVar6;
  puVar2[2] = uVar4;
  lStack_48 = _UNK_0029f928;
  local_50 = _DAT_0029f920;
  auVar12 = FUN_007b3028(puVar5,&local_50,puVar2,&PTR_FUN_00adf2d8);
  if (auVar12._0_8_ != 0) {
    auVar12 = (**(code **)(auVar12._8_8_ + 0x38))();
    puVar3 = auVar12._8_8_;
    puVar2 = auVar12._0_8_;
                    /* try { // try from 007c8f4c to 007c8f53 has its CatchHandler @ 007c9058 */
    (*(code *)puVar3[3])(&local_50);
    puVar5 = puVar2;
    if (local_50 != -0x39007a2060bf9f6f || lStack_48 != 0x40f5414126fec087) {
      puVar5 = (undefined8 *)0x0;
      if ((code *)*puVar3 != (code *)0x0) {
                    /* try { // try from 007c8f98 to 007c8f9f has its CatchHandler @ 007c9040 */
        (*(code *)*puVar3)(puVar2);
      }
      if (puVar3[1] != 0) {
        free(puVar2);
      }
    }
    if (puVar5 != (undefined8 *)0x0) {
      uVar6 = puVar2[4];
      uVar8 = puVar2[7];
      uVar7 = puVar2[6];
      uVar11 = puVar2[9];
      uVar10 = puVar2[8];
      uVar4 = puVar2[10];
      param_1[5] = puVar2[5];
      param_1[4] = uVar6;
      param_1[7] = uVar8;
      param_1[6] = uVar7;
      uVar7 = puVar2[1];
      uVar6 = *puVar2;
      uVar9 = puVar2[3];
      uVar8 = puVar2[2];
      param_1[9] = uVar11;
      param_1[8] = uVar10;
      param_1[10] = uVar4;
      param_1[1] = uVar7;
      *param_1 = uVar6;
      param_1[3] = uVar9;
      param_1[2] = uVar8;
      free(puVar5);
      return;
    }
  }
  *param_1 = 0xffffffffffffffff;
  return;
}


// ===== 007c90a8  FUN_007c90a8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_007c90a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 *local_40;
  long lStack_38;
  
  puVar8 = (undefined8 *)*param_1;
  if (puVar8 == (undefined8 *)0x0) {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar8 = (undefined8 *)FUN_004b25a4(0x20,8);
    uVar3 = _UNK_00adf240;
    uVar2 = _DAT_00adf238;
    uVar7 = _UNK_00adf230;
    puVar1 = PTR_DAT_00adf228;
    if (puVar8 == (undefined8 *)0x0) {
                    /* try { // try from 007c9220 to 007c922b has its CatchHandler @ 007c926c */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x20);
    }
    *param_1 = puVar8;
    puVar8[1] = uVar7;
    *puVar8 = puVar1;
    puVar8[3] = uVar3;
    puVar8[2] = uVar2;
  }
  local_40 = param_2;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar4 = (undefined8 *)FUN_004b25a4(8,8);
  lStack_38 = _UNK_002a04e8;
  puVar6 = _DAT_002a04e0;
  if (puVar4 == (undefined8 *)0x0) {
                    /* try { // try from 007c9210 to 007c921b has its CatchHandler @ 007c92a8 */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,8);
  }
  *puVar4 = param_2;
  local_40 = puVar6;
  auVar9 = FUN_007b3028(puVar8,&local_40,puVar4,&PTR_FUN_00adf318);
  lVar5 = auVar9._0_8_;
  if (lVar5 != 0) {
    auVar9 = (**(code **)(auVar9._8_8_ + 0x38))();
    puVar6 = auVar9._8_8_;
    param_2 = auVar9._0_8_;
                    /* try { // try from 007c9158 to 007c915f has its CatchHandler @ 007c9250 */
    (*(code *)puVar6[3])(&local_40);
    puVar8 = param_2;
    if (local_40 != (undefined8 *)0xe47bc95db31cda33 || lStack_38 != 0x38a441a833e8c31b) {
      puVar8 = (undefined8 *)0x0;
      if ((code *)*puVar6 != (code *)0x0) {
                    /* try { // try from 007c91a4 to 007c91ab has its CatchHandler @ 007c9230 */
        (*(code *)*puVar6)(param_2);
      }
      if (puVar6[1] != 0) {
        free(param_2);
      }
    }
    if (puVar8 != (undefined8 *)0x0) {
      uVar7 = *param_2;
      free(puVar8);
      auVar9._8_8_ = uVar7;
      auVar9._0_8_ = 1;
      return auVar9;
    }
    lVar5 = 0;
  }
  auVar10._8_8_ = param_2;
  auVar10._0_8_ = lVar5;
  return auVar10;
}


// ===== 007c92dc  FUN_007c92dc =====

undefined1  [16] FUN_007c92dc(undefined8 *param_1)

{
  undefined1 (*__ptr) [16];
  ulong uVar1;
  long *plVar3;
  long lVar4;
  undefined1 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 (*unaff_x19) [16];
  byte bVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  long local_40;
  long lStack_38;
  undefined8 *puVar2;
  
  plVar3 = (long *)*param_1;
  if (plVar3 != (long *)0x0) {
    lVar6 = 0;
    lVar4 = *plVar3;
    uVar1 = plVar3[1];
    uVar9 = uVar1 & 0xa5d189f2f2c8d1f5;
    uVar11 = *(undefined8 *)(lVar4 + uVar9);
    uVar12 = NEON_cmeq(uVar11,0x5252525252525252,1);
    uVar12 = uVar12 & 0x8080808080808080;
    while( true ) {
      for (; uVar12 == 0; uVar12 = uVar12 & 0x8080808080808080) {
        uVar11 = NEON_cmeq(uVar11,0xffffffffffffffff,1);
        bVar10 = NEON_umaxv(uVar11,1);
        if ((bVar10 & 1) != 0) goto LAB_007c94b0;
        lVar6 = lVar6 + 8;
        uVar9 = uVar9 + lVar6 & uVar1;
        uVar11 = *(undefined8 *)(lVar4 + uVar9);
        uVar12 = NEON_cmeq(uVar11,0x5252525252525252,1);
      }
      uVar8 = (uVar12 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar12 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar9 + ((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3) & uVar1;
      lVar7 = lVar4 + uVar8 * -0x20;
      if (*(long *)(lVar7 + -0x18) == -0x5a2e760d0d372e0b &&
          *(long *)(lVar7 + -0x20) == -0x6589b6a9568d9125) break;
      uVar12 = uVar12 - 1 & uVar12;
    }
    puVar2 = (undefined8 *)(lVar4 + (uVar8 - 8 & uVar1));
    uVar12 = NEON_cmeq(*(undefined8 *)(lVar4 + uVar8),0xffffffffffffffff,1);
    uVar11 = NEON_cmeq(*puVar2,0xffffffffffffffff,1);
    uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
    uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
    uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
    uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
    if (((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3) + ((ulong)LZCOUNT(uVar11) >> 3) < 8)
    {
      plVar3[2] = plVar3[2] + 1;
      uVar5 = 0xff;
    }
    else {
      uVar5 = 0x80;
    }
    *(undefined1 *)(lVar4 + uVar8) = uVar5;
    lVar4 = plVar3[3];
    *(undefined1 *)(puVar2 + 1) = uVar5;
    lVar6 = *(long *)(lVar7 + -0x10);
    plVar3[3] = lVar4 + -1;
    if (lVar6 == 0) goto LAB_007c94b4;
    auVar13 = (**(code **)(*(long *)(lVar7 + -8) + 0x38))();
    puVar2 = auVar13._8_8_;
    unaff_x19 = auVar13._0_8_;
                    /* try { // try from 007c9434 to 007c943b has its CatchHandler @ 007c94ec */
    (*(code *)puVar2[3])(&local_40);
    __ptr = unaff_x19;
    if (local_40 != -0x6589b6a9568d9125 || lStack_38 != -0x5a2e760d0d372e0b) {
      __ptr = (undefined1 (*) [16])0x0;
      if ((code *)*puVar2 != (code *)0x0) {
                    /* try { // try from 007c9460 to 007c9467 has its CatchHandler @ 007c94cc */
        (*(code *)*puVar2)(unaff_x19);
      }
      if (puVar2[1] != 0) {
        free(unaff_x19);
      }
    }
    if (__ptr != (undefined1 (*) [16])0x0) {
      auVar13 = *unaff_x19;
      free(__ptr);
      return auVar13;
    }
  }
LAB_007c94b0:
  lVar6 = 0;
LAB_007c94b4:
  auVar13._8_8_ = unaff_x19;
  auVar13._0_8_ = lVar6;
  return auVar13;
}


// ===== 007c9508  FUN_007c9508 =====

void FUN_007c9508(void *param_1,undefined8 *param_2)

{
  if ((code *)*param_2 != (code *)0x0) {
                    /* try { // try from 007c9528 to 007c952f has its CatchHandler @ 007c9560 */
    (*(code *)*param_2)(param_1);
  }
  if (param_2[1] != 0) {
    free(param_1);
    return;
  }
  return;
}


// ===== 007c9580  FUN_007c9580 =====

void FUN_007c9580(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 4;
    *(undefined4 *)(plVar5 + 8) = 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(char *)plVar1 = '\x01';
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((char)lVar4 == '\0') {
      lVar4 = plVar5[2];
      plVar5[2] = 0;
      *(undefined4 *)(plVar5 + 4) = 0;
      if (lVar4 != 0) {
                    /* try { // try from 007c95d4 to 007c95d7 has its CatchHandler @ 007c9654 */
        (**(code **)(lVar4 + 8))(plVar5[3]);
      }
    }
    plVar1 = plVar5 + 7;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(char *)plVar1 = '\x01';
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((char)lVar4 == '\0') {
      lVar4 = plVar5[5];
      plVar5[5] = 0;
      if (lVar4 != 0) {
                    /* try { // try from 007c9600 to 007c9603 has its CatchHandler @ 007c9644 */
        (**(code **)(lVar4 + 0x18))(plVar5[6]);
      }
      *(undefined4 *)plVar1 = 0;
    }
    do {
      lVar4 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<futures_channel::oneshot::Inner<core::convert::Infallible>>>
      ::drop_slow(param_1);
      return;
    }
  }
  return;
}


// ===== 007c9684  FUN_007c9684 =====

void FUN_007c9684(long *param_1)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  
  lVar7 = *param_1;
  pcVar1 = (char *)(lVar7 + 0x60);
  *(undefined4 *)(lVar7 + 0x80) = 1;
  do {
    cVar2 = *pcVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar5) {
      *pcVar1 = '\x01';
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (cVar2 == '\0') {
    lVar3 = *(long *)(lVar7 + 0x50);
    *(undefined8 *)(lVar7 + 0x50) = 0;
    *(undefined4 *)(lVar7 + 0x60) = 0;
    if (lVar3 != 0) {
                    /* try { // try from 007c96d4 to 007c96d7 has its CatchHandler @ 007c9754 */
      (**(code **)(lVar3 + 8))(*(undefined8 *)(lVar7 + 0x58));
    }
  }
  pcVar1 = (char *)(lVar7 + 0x78);
  do {
    cVar2 = *pcVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar5) {
      *pcVar1 = '\x01';
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (cVar2 == '\0') {
    lVar3 = *(long *)(lVar7 + 0x68);
    *(undefined8 *)(lVar7 + 0x68) = 0;
    if (lVar3 != 0) {
                    /* try { // try from 007c9700 to 007c9703 has its CatchHandler @ 007c9748 */
      (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar7 + 0x70));
    }
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
  }
  plVar6 = (long *)*param_1;
  do {
    lVar7 = *plVar6;
    cVar2 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar5) {
      *plVar6 = lVar7 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar7 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<futures_channel::oneshot::Inner<hyper_util::client::legacy::client::PoolClient<reqwest::async_impl::body::Body>>>>
    ::drop_slow(param_1);
    return;
  }
  return;
}


// ===== 007c9788  FUN_007c9788 =====

void FUN_007c9788(long *param_1)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  
  lVar7 = *param_1;
  pcVar1 = (char *)(lVar7 + 0x60);
  *(undefined4 *)(lVar7 + 0x80) = 1;
  do {
    cVar2 = *pcVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar5) {
      *pcVar1 = '\x01';
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (cVar2 == '\0') {
    lVar3 = *(long *)(lVar7 + 0x50);
    *(undefined8 *)(lVar7 + 0x50) = 0;
    *(undefined4 *)(lVar7 + 0x60) = 0;
    if (lVar3 != 0) {
                    /* try { // try from 007c97d4 to 007c980b has its CatchHandler @ 007c9844 */
      (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar7 + 0x58));
    }
  }
  pcVar1 = (char *)(lVar7 + 0x78);
  do {
    cVar2 = *pcVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar5) {
      *pcVar1 = '\x01';
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (cVar2 == '\0') {
    lVar3 = *(long *)(lVar7 + 0x68);
    *(undefined8 *)(lVar7 + 0x68) = 0;
    *(undefined4 *)(lVar7 + 0x78) = 0;
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 8))(*(undefined8 *)(lVar7 + 0x70));
    }
  }
  plVar6 = (long *)*param_1;
  do {
    lVar7 = *plVar6;
    cVar2 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar5) {
      *plVar6 = lVar7 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar7 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<futures_channel::oneshot::Inner<hyper_util::client::legacy::client::PoolClient<reqwest::async_impl::body::Body>>>>
    ::drop_slow(param_1);
    return;
  }
  return;
}


// ===== 007c9878  FUN_007c9878 =====

void FUN_007c9878(long *param_1)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  
  lVar7 = *param_1;
  pcVar1 = (char *)(lVar7 + 0x20);
  *(undefined4 *)(lVar7 + 0x40) = 1;
  do {
    cVar2 = *pcVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar5) {
      *pcVar1 = '\x01';
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (cVar2 == '\0') {
    lVar3 = *(long *)(lVar7 + 0x10);
    *(undefined8 *)(lVar7 + 0x10) = 0;
    *(undefined4 *)(lVar7 + 0x20) = 0;
    if (lVar3 != 0) {
                    /* try { // try from 007c98c4 to 007c98fb has its CatchHandler @ 007c9934 */
      (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar7 + 0x18));
    }
  }
  pcVar1 = (char *)(lVar7 + 0x38);
  do {
    cVar2 = *pcVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar5) {
      *pcVar1 = '\x01';
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (cVar2 == '\0') {
    lVar3 = *(long *)(lVar7 + 0x28);
    *(undefined8 *)(lVar7 + 0x28) = 0;
    *(undefined4 *)(lVar7 + 0x38) = 0;
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 8))(*(undefined8 *)(lVar7 + 0x30));
    }
  }
  plVar6 = (long *)*param_1;
  do {
    lVar7 = *plVar6;
    cVar2 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar5) {
      *plVar6 = lVar7 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar7 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<futures_channel::oneshot::Inner<core::convert::Infallible>>>
    ::drop_slow(param_1);
    return;
  }
  return;
}


// ===== 007c9968  FUN_007c9968 =====

void FUN_007c9968(long param_1)

{
  if (*(char *)(param_1 + 0x41) != '\x02') {
                    /* try { // try from 007c9984 to 007c998b has its CatchHandler @ 007c99c8 */
    FUN_007ca00c(param_1 + 0x10);
  }
  if (*(long *)(param_1 + 0x50) != 0) {
                    /* try { // try from 007c999c to 007c999f has its CatchHandler @ 007c99e4 */
    (**(code **)(*(long *)(param_1 + 0x50) + 0x18))(*(undefined8 *)(param_1 + 0x58));
  }
  if (*(long *)(param_1 + 0x68) != 0) {
                    /* WARNING: Could not recover jumptable at 0x007c99b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x68) + 0x18))(*(undefined8 *)(param_1 + 0x70));
    return;
  }
  return;
}


// ===== 007c9a08  FUN_007c9a08 =====

void FUN_007c9a08(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* try { // try from 007c9a28 to 007c9a2b has its CatchHandler @ 007c9a54 */
    (**(code **)(*(long *)(param_1 + 0x10) + 0x18))(*(undefined8 *)(param_1 + 0x18));
  }
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x007c9a44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x18))(*(undefined8 *)(param_1 + 0x30));
    return;
  }
  return;
}


// ===== 007c9a78  FUN_007c9a78 =====

void FUN_007c9a78(long param_1)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  ulong uVar10;
  
                    /* try { // try from 007c9a94 to 007c9a9b has its CatchHandler @ 007c9d24 */
  FUN_007b3ee0(param_1 + 0x28);
  lVar5 = *(long *)(param_1 + 0x60);
  if (lVar5 != 0) {
    lVar6 = *(long *)(param_1 + 0x70);
    if (lVar6 != 0) {
      puVar7 = *(undefined8 **)(param_1 + 0x58);
      puVar9 = puVar7 + 1;
      uVar10 = NEON_cmge(*puVar7,0,1);
      uVar10 = uVar10 & 0x8080808080808080;
      do {
        for (; uVar10 == 0; uVar10 = uVar10 & 0x8080808080808080) {
          puVar7 = puVar7 + -0x48;
          uVar10 = NEON_cmge(*puVar9,0,1);
          puVar9 = puVar9 + 1;
        }
        uVar2 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
                    /* try { // try from 007c9af8 to 007c9afb has its CatchHandler @ 007c9d3c */
        FUN_007b23ec(puVar7 + (long)-(int)((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) * 9 +
                              -9);
        lVar6 = lVar6 + -1;
        uVar10 = uVar10 - 1 & uVar10;
      } while (lVar6 != 0);
    }
    if (lVar5 * 0x49 != -0x51) {
      free((void *)(*(long *)(param_1 + 0x58) + lVar5 * -0x48 + -0x48));
    }
  }
  lVar5 = *(long *)(param_1 + 0x90);
  if (lVar5 != 0) {
    lVar6 = *(long *)(param_1 + 0xa0);
    if (lVar6 != 0) {
      puVar7 = *(undefined8 **)(param_1 + 0x88);
      puVar9 = puVar7 + 1;
      uVar10 = NEON_cmge(*puVar7,0,1);
      uVar10 = uVar10 & 0x8080808080808080;
      do {
        for (; uVar10 == 0; uVar10 = uVar10 & 0x8080808080808080) {
          puVar7 = puVar7 + -0x50;
          uVar10 = NEON_cmge(*puVar9,0,1);
          puVar9 = puVar9 + 1;
        }
        uVar2 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
                    /* try { // try from 007c9b90 to 007c9b93 has its CatchHandler @ 007c9d34 */
        FUN_007b2538(puVar7 + (long)-(int)((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) * 10
                              + -10);
        lVar6 = lVar6 + -1;
        uVar10 = uVar10 - 1 & uVar10;
      } while (lVar6 != 0);
    }
    if (lVar5 * 0x51 != -0x59) {
      free((void *)(*(long *)(param_1 + 0x88) + lVar5 * -0x50 + -0x50));
    }
  }
  plVar8 = *(long **)(param_1 + 0xd0);
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 4;
    *(undefined4 *)(plVar8 + 8) = 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(char *)plVar1 = '\x01';
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((char)lVar5 == '\0') {
      lVar5 = plVar8[2];
      plVar8[2] = 0;
      *(undefined4 *)(plVar8 + 4) = 0;
      if (lVar5 != 0) {
                    /* try { // try from 007c9c10 to 007c9c13 has its CatchHandler @ 007c9ce8 */
        (**(code **)(lVar5 + 8))(plVar8[3]);
      }
    }
    plVar1 = plVar8 + 7;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(char *)plVar1 = '\x01';
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((char)lVar5 == '\0') {
      lVar5 = plVar8[5];
      plVar8[5] = 0;
      if (lVar5 != 0) {
                    /* try { // try from 007c9c3c to 007c9c3f has its CatchHandler @ 007c9cdc */
        (**(code **)(lVar5 + 0x18))(plVar8[6]);
      }
      *(undefined4 *)plVar1 = 0;
    }
    do {
      lVar5 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 007c9c5c to 007c9c63 has its CatchHandler @ 007c9d14 */
      <alloc::sync::[n]::alloc::sync::Arc<futures_channel::oneshot::Inner<core::convert::Infallible>>>
      ::drop_slow((undefined8 *)(param_1 + 0xd0));
    }
  }
  plVar8 = *(long **)(param_1 + 0xb8);
  do {
    lVar5 = *plVar8;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar4) {
      *plVar8 = lVar5 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar5 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 007c9c84 to 007c9c87 has its CatchHandler @ 007c9d1c */
    <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
    drop_slow();
  }
  plVar8 = *(long **)(param_1 + 0x18);
  if (plVar8 != (long *)0x0) {
    do {
      lVar5 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
      drop_slow(param_1 + 0x18);
      return;
    }
  }
  return;
}


// ===== 007c9da8  FUN_007c9da8 =====

void FUN_007c9da8(void *param_1,undefined8 *param_2)

{
  if ((code *)*param_2 != (code *)0x0) {
                    /* try { // try from 007c9dc8 to 007c9dcf has its CatchHandler @ 007c9e00 */
    (*(code *)*param_2)(param_1);
  }
  if (param_2[1] != 0) {
    free(param_1);
    return;
  }
  return;
}


// ===== 007c9e20  FUN_007c9e20 =====

void FUN_007c9e20(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  int *piVar5;
  
  piVar5 = (int *)*param_1;
  if ((((*(byte *)(param_1 + 1) & 1) == 0) &&
      ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) != 0)) &&
     (uVar4 = std::panicking::panic_count::is_zero_slow_path(), (uVar4 & 1) == 0)) {
    *(undefined1 *)(piVar5 + 1) = 1;
  }
  do {
    iVar1 = *piVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
    if (bVar3) {
      *piVar5 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 != 2) {
    return;
  }
  <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(piVar5);
  return;
}


// ===== 007c9e90  FUN_007c9e90 =====

void FUN_007c9e90(int *param_1,uint param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  
  if (((param_2 & 1) == 0) &&
     ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) != 0)) {
    uVar4 = std::panicking::panic_count::is_zero_slow_path();
    if ((uVar4 & 1) == 0) {
      *(undefined1 *)(param_1 + 1) = 1;
    }
  }
  do {
    iVar1 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 != 2) {
    return;
  }
  <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake();
  return;
}


// ===== 007c9f00  FUN_007c9f00 =====

void FUN_007c9f00(byte *param_1)

{
  char cVar1;
  bool bVar2;
  void *__ptr;
  long lVar3;
  long *plVar4;
  
                    /* try { // try from 007c9f10 to 007c9f13 has its CatchHandler @ 007c9fe4 */
  FUN_007ce4a4();
  if (1 < *param_1) {
    plVar4 = *(long **)(param_1 + 8);
                    /* try { // try from 007c9f30 to 007c9f37 has its CatchHandler @ 007c9fa8 */
    (**(code **)(*plVar4 + 0x20))(plVar4 + 3,plVar4[1],plVar4[2]);
    free(plVar4);
  }
                    /* try { // try from 007c9f54 to 007c9f5b has its CatchHandler @ 007c9fdc */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x20))
            (param_1 + 0x28,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  __ptr = *(void **)(param_1 + 0x30);
  if ((long)__ptr - 1U < 0xfffffffffffffffe) {
    plVar4 = (long *)((long)__ptr + 8);
    do {
      lVar3 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar3 + -1 == 0) {
      DataMemoryBarrier(2,1);
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 007ca00c  FUN_007ca00c =====

void FUN_007ca00c(long param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  void *__ptr;
  
  __ptr = *(void **)(param_1 + 0x18);
  if (__ptr != (void *)0x0) {
    puVar6 = *(undefined8 **)(param_1 + 0x20);
    pcVar3 = (code *)*puVar6;
    if (pcVar3 != (code *)0x0) {
                    /* try { // try from 007ca034 to 007ca03b has its CatchHandler @ 007ca088 */
      (*pcVar3)(__ptr);
    }
    if (puVar6[1] != 0) {
      free(__ptr);
    }
  }
  plVar4 = *(long **)(param_1 + 0x28);
  do {
    lVar5 = *plVar4;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = lVar5 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar5 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 007ca070 to 007ca073 has its CatchHandler @ 007ca0d0 */
    <alloc::sync::[n]::alloc::sync::Arc<core::sync::atomic::Atomic<bool>>>::drop_slow();
  }
  FUN_007ca0e8(param_1);
  return;
}


// ===== 007ca0e8  FUN_007ca0e8 =====

void FUN_007ca0e8(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 007ca114 to 007ca11b has its CatchHandler @ 007ca15c */
    <alloc::sync::[n]::alloc::sync::Arc<want::Inner>>::drop_slow(param_1);
  }
                    /* try { // try from 007ca11c to 007ca123 has its CatchHandler @ 007ca170 */
  FUN_0079f408(param_1 + 1);
  plVar3 = (long *)param_1[1];
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::mpsc::chan::Chan<hyper[9f1bfd30b08ca095]::client::dispatch::Envelope<http[b87e90c26fe47eb4]::request::Request<reqwest[6fed810f3e38d558]::async_impl::body::Body>,http[b87e90c26fe47eb4]::response::Response<hyper[9f1bfd30b08ca095]::body::incoming::Incoming>>,tokio[8c8895dbfa691109]::sync::mpsc::unbounded::Semaphore>>>
    ::drop_slow(param_1 + 1);
    return;
  }
  return;
}


// ===== 007ca1a4  FUN_007ca1a4 =====

void FUN_007ca1a4(long *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  code *pcVar2;
  
  __ptr = (void *)param_1[3];
  puVar1 = (undefined8 *)param_1[4];
  pcVar2 = (code *)*puVar1;
  if (pcVar2 != (code *)0x0) {
                    /* try { // try from 007ca1c4 to 007ca1cb has its CatchHandler @ 007ca218 */
    (*pcVar2)(__ptr);
  }
  if (puVar1[1] != 0) {
    free(__ptr);
  }
  if ((*param_1 != -1) && (*param_1 != 0)) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 007ca258  FUN_007ca258 =====

void FUN_007ca258(long *param_1)

{
  if ((*param_1 != -1) && (*param_1 != 0)) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 007ca278  FUN_007ca278 =====

void FUN_007ca278(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 007ca288 to 007ca28b has its CatchHandler @ 007ca2c4 */
  FUN_0079f408();
  plVar3 = (long *)*param_1;
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::mpsc::chan::Chan<hyper[9f1bfd30b08ca095]::client::dispatch::Envelope<http[b87e90c26fe47eb4]::request::Request<reqwest[6fed810f3e38d558]::async_impl::body::Body>,http[b87e90c26fe47eb4]::response::Response<hyper[9f1bfd30b08ca095]::body::incoming::Incoming>>,tokio[8c8895dbfa691109]::sync::mpsc::unbounded::Semaphore>>>
    ::drop_slow(param_1);
    return;
  }
  return;
}


// ===== 007ca2f8  FUN_007ca2f8 =====

void FUN_007ca2f8(long *param_1)

{
  if ((*param_1 != -1) && (*param_1 != 0)) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 007ca318  FUN_007ca318 =====

void FUN_007ca318(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 007ca330  FUN_007ca330 =====

void FUN_007ca330(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  if (plVar3 != (long *)0x0) {
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc[c1f8e832b0d782c7]::sync::Arc<std[17aff9129faa4dc5]::sync::poison::mutex::Mutex<tokio[8c8895dbfa691109]::sync::oneshot::Receiver<core[bcece726f298455b]::result::Result<hyper[9f1bfd30b08ca095]::upgrade::Upgraded,hyper[9f1bfd30b08ca095]::error::Error>>>>>
      ::drop_slow();
      return;
    }
  }
  return;
}


// ===== 007ca358  FUN_007ca358 =====

void FUN_007ca358(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
    drop_slow();
    return;
  }
  return;
}


// ===== 007ca37c  FUN_007ca37c =====

void FUN_007ca37c(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
    drop_slow();
    return;
  }
  return;
}


// ===== 007ca3a0  FUN_007ca3a0 =====

void FUN_007ca3a0(byte param_1,long *param_2)

{
  if (param_1 < 2) {
    return;
  }
                    /* try { // try from 007ca3d4 to 007ca3db has its CatchHandler @ 007ca3f4 */
  (**(code **)(*param_2 + 0x20))(param_2 + 3,param_2[1],param_2[2]);
  free(param_2);
  return;
}


// ===== 007ca410  FUN_007ca410 =====

void FUN_007ca410(byte *param_1)

{
  long *__ptr;
  
  if (1 < *param_1) {
    __ptr = *(long **)(param_1 + 8);
                    /* try { // try from 007ca440 to 007ca447 has its CatchHandler @ 007ca478 */
    (**(code **)(*__ptr + 0x20))(__ptr + 3,__ptr[1],__ptr[2]);
    free(__ptr);
  }
                    /* WARNING: Could not recover jumptable at 0x007ca474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x20))
            (param_1 + 0x28,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  return;
}


// ===== 007ca4ac  FUN_007ca4ac =====

undefined8
FUN_007ca4ac(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  char *pcVar7;
  ulong uVar8;
  ulong uStack_50;
  ulong local_48;
  long local_28;
  
  *(long *)(param_2 + 0x18) = param_1[5];
  uVar8 = *(ulong *)(param_2 + *(long *)(*(long *)(param_2 + 0x10) + 0x48));
  pcVar7 = (char *)(*param_1 + (param_1[4] & uVar8) * 0x18);
  if (*pcVar7 == '\0') {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar7,0x10);
    if (bVar3) {
      *pcVar7 = '\x01';
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_007ca50c;
  }
  else {
    ClearExclusiveLocal();
  }
                    /* try { // try from 007ca65c to 007ca667 has its CatchHandler @ 007ca69c */
  <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
            (pcVar7,param_2,0xffffffff);
LAB_007ca50c:
  if ((char)param_1[6] == '\0') {
    plVar1 = param_1 + 2;
    param_1 = param_1 + 3;
    local_48 = *(ulong *)(param_2 + *(long *)(*(long *)(param_2 + 0x10) + 0x48));
    uStack_50 = uVar8;
    if (local_48 != uVar8) {
                    /* try { // try from 007ca618 to 007ca637 has its CatchHandler @ 007ca6b8 */
                    /* WARNING: Subroutine does not return */
      core::panicking::assert_failed<usize,usize>
                (0,&local_48,&uStack_50,0,param_5,&PTR_s__root__cargo_registry_src_index__00adf3c8);
    }
    lVar6 = *(long *)(pcVar7 + 8);
    local_28 = param_2;
    if (lVar6 == param_2) {
                    /* try { // try from 007ca63c to 007ca653 has its CatchHandler @ 007ca6b0 */
      core[bcece726f298455b]::panicking::assert_failed::
      <core[bcece726f298455b]::option::Option<core[bcece726f298455b]::ptr::non_null::NonNull<tokio[8c8895dbfa691109]::runtime::task::core::Header>>,core[bcece726f298455b]::option::Option<core[bcece726f298455b]::ptr::non_null::NonNull<tokio[8c8895dbfa691109]::runtime::task::core::Header>>>
                (1,pcVar7 + 8,&local_28,0,param_5,&PTR_s__root__cargo_registry_src_index__00adf458);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x7ca658);
      (*pcVar4)();
    }
    *(long *)(param_2 + *(long *)(*(long *)(param_2 + 0x10) + 0x38) + 8) = lVar6;
    *(undefined8 *)(param_2 + *(long *)(*(long *)(param_2 + 0x10) + 0x38)) = 0;
    if (lVar6 != 0) {
      *(long *)(lVar6 + *(long *)(*(long *)(lVar6 + 0x10) + 0x38)) = param_2;
    }
    *(long *)(pcVar7 + 8) = param_2;
    if (*(long *)(pcVar7 + 0x10) == 0) {
      *(long *)(pcVar7 + 0x10) = param_2;
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar3) {
        *param_1 = *param_1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      if (*pcVar7 != '\x01') {
        ClearExclusiveLocal();
        <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(pcVar7,0);
        return param_3;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pcVar7,0x10);
      if (bVar3) {
        *pcVar7 = '\0';
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    do {
      if (*pcVar7 != '\x01') {
        ClearExclusiveLocal();
                    /* try { // try from 007ca670 to 007ca697 has its CatchHandler @ 007ca6a8 */
        <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(pcVar7,0);
        break;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pcVar7,0x10);
      if (bVar3) {
        *pcVar7 = '\0';
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
                    /* try { // try from 007ca52c to 007ca537 has its CatchHandler @ 007ca6a8 */
    <tokio::runtime::task::raw::tokio::runtime::task::raw::RawTask>::shutdown(param_2);
    iVar5 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(param_3);
    if (iVar5 != 0) {
      <tokio::runtime::task::raw::tokio::runtime::task::raw::RawTask>::dealloc(param_3);
    }
    param_3 = 0;
  }
  return param_3;
}


// ===== 007ca73c  FUN_007ca73c =====

void FUN_007ca73c(undefined8 *param_1,long *param_2,char *param_3,int param_4)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  ulong *puVar4;
  char *pcVar5;
  undefined *puVar6;
  char cVar7;
  byte bVar8;
  long lVar9;
  char extraout_w8;
  char cVar10;
  char extraout_w8_00;
  char extraout_w8_01;
  ulong uVar11;
  undefined8 *extraout_x8;
  long lVar12;
  bool bVar13;
  undefined8 *unaff_x19;
  undefined8 *unaff_x22;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *local_e0;
  undefined **ppuStack_d8;
  undefined *local_d0;
  undefined *local_c8;
  char ***pppcStack_c0;
  char **local_b8;
  code *pcStack_b0;
  undefined8 local_a8;
  undefined8 *puStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined **local_78;
  code *pcStack_70;
  undefined8 *local_68;
  char *local_48;
  
  local_48 = param_3;
  if ((param_4 == 0) || (lVar14 = *param_2, lVar14 == 0)) {
    cVar7 = *param_3;
    puVar15 = param_1;
    if (cVar7 != '\0') {
      if (cVar7 == '\x01') {
        puVar15 = (undefined8 *)(ulong)(byte)param_3[1];
      }
      else {
        puVar15 = *(undefined8 **)(param_3 + 8);
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        unaff_x19 = (undefined8 *)FUN_004b25a4(0x20,8);
        if (unaff_x19 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          alloc::alloc::handle_alloc_error(8,0x20);
        }
                    /* try { // try from 007ca848 to 007ca853 has its CatchHandler @ 007cac00 */
        (**(code **)*puVar15)(&local_a8,puVar15 + 3,puVar15[1],puVar15[2]);
        unaff_x19[1] = puStack_a0;
        *unaff_x19 = local_a8;
        unaff_x19[3] = uStack_90;
        unaff_x19[2] = local_98;
        puVar15 = extraout_x8;
      }
    }
    local_a8._0_2_ = CONCAT11((char)puVar15,cVar7);
                    /* try { // try from 007ca880 to 007ca88f has its CatchHandler @ 007cac54 */
    puStack_a0 = unaff_x19;
    (*(code *)**(undefined8 **)(param_3 + 0x10))
              (&local_98,param_3 + 0x28,*(undefined8 *)(param_3 + 0x18),
               *(undefined8 *)(param_3 + 0x20));
    param_1[6] = 0;
    param_1[1] = puStack_a0;
    *param_1 = local_a8;
    param_1[3] = uStack_90;
    param_1[2] = local_98;
    param_1[5] = uStack_80;
    param_1[4] = local_88;
  }
  else {
    piVar1 = (int *)(lVar14 + 0x10);
    do {
      if (*piVar1 != 0) {
        ClearExclusiveLocal();
        <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                  (lVar14 + 0x10);
        uVar11 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
        puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
        goto joined_r0x007cab84;
      }
      cVar7 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar13) {
        *piVar1 = 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    uVar11 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
    puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
joined_r0x007cab84:
    PTR_GLOBAL_PANIC_COUNT_00b00bf0 = (undefined *)puVar4;
    if ((uVar11 & 0x7fffffffffffffff) == 0) {
      bVar8 = 0;
      cVar7 = *(char *)(lVar14 + 0x14);
      pcVar5 = local_48;
    }
    else {
      bVar8 = std::panicking::panic_count::is_zero_slow_path();
      bVar8 = bVar8 ^ 1;
      cVar7 = *(char *)(lVar14 + 0x14);
      pcVar5 = local_48;
    }
    local_48 = pcVar5;
    if (cVar7 != '\0') {
      uVar11 = (ulong)puStack_a0 >> 8;
      puStack_a0 = (undefined8 *)CONCAT71((int7)uVar11,bVar8);
                    /* try { // try from 007caba0 to 007cabc3 has its CatchHandler @ 007cac78 */
      local_a8 = piVar1;
                    /* WARNING: Subroutine does not return */
      core::result::unwrap_failed
                (&DAT_002e5a9e,0x2b,&local_a8,&PTR_FUN_00adf390,
                 &PTR_s__root__cargo_registry_src_index__00adf3e0);
    }
    cVar7 = *pcVar5;
    if (cVar7 == '\0') {
      cVar10 = '\0';
    }
    else if (cVar7 == '\x02') {
      puVar15 = *(undefined8 **)(pcVar5 + 8);
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      unaff_x22 = (undefined8 *)FUN_004b25a4(0x20,8);
      if (unaff_x22 == (undefined8 *)0x0) goto LAB_007cab38;
                    /* try { // try from 007ca7e4 to 007ca7ef has its CatchHandler @ 007cabe8 */
      (**(code **)*puVar15)(&local_a8,puVar15 + 3,puVar15[1],puVar15[2]);
      unaff_x22[1] = puStack_a0;
      *unaff_x22 = local_a8;
      unaff_x22[3] = uStack_90;
      unaff_x22[2] = local_98;
      cVar10 = extraout_w8;
    }
    else {
      cVar10 = pcVar5[1];
    }
    local_a8._0_2_ = CONCAT11(cVar10,cVar7);
                    /* try { // try from 007ca8d0 to 007ca8db has its CatchHandler @ 007cac38 */
    puStack_a0 = unaff_x22;
    (*(code *)**(undefined8 **)(pcVar5 + 0x10))
              (&local_98,pcVar5 + 0x28,*(undefined8 *)(pcVar5 + 0x18),*(undefined8 *)(pcVar5 + 0x20)
              );
                    /* try { // try from 007ca8dc to 007ca8e7 has its CatchHandler @ 007cac70 */
    uVar11 = FUN_007b31ec(lVar14 + 0x28,&local_a8);
    puVar6 = PTR___CALLSITE_00b00f28;
    if ((uVar11 & 1) == 0) {
      cVar7 = *pcVar5;
      cVar10 = extraout_w8_00;
      if (cVar7 != '\0') {
        if (cVar7 == '\x02') {
          puVar15 = *(undefined8 **)(pcVar5 + 8);
          __rustc::__rust_no_alloc_shim_is_unstable_v2();
          unaff_x22 = (undefined8 *)FUN_004b25a4(0x20,8);
          if (unaff_x22 == (undefined8 *)0x0) {
LAB_007cab38:
                    /* try { // try from 007cab38 to 007cab43 has its CatchHandler @ 007cac70 */
                    /* WARNING: Subroutine does not return */
            alloc::alloc::handle_alloc_error(8,0x20);
          }
                    /* try { // try from 007ca944 to 007ca94f has its CatchHandler @ 007cabe4 */
          (**(code **)*puVar15)(&local_a8,puVar15 + 3,puVar15[1],puVar15[2]);
          unaff_x22[1] = puStack_a0;
          *unaff_x22 = local_a8;
          unaff_x22[3] = uStack_90;
          unaff_x22[2] = local_98;
          cVar10 = extraout_w8_01;
        }
        else {
          cVar10 = pcVar5[1];
        }
      }
      local_a8._0_2_ = CONCAT11(cVar10,cVar7);
                    /* try { // try from 007caa20 to 007caa2b has its CatchHandler @ 007cac1c */
      puStack_a0 = unaff_x22;
      (*(code *)**(undefined8 **)(pcVar5 + 0x10))
                (&local_98,pcVar5 + 0x28,*(undefined8 *)(pcVar5 + 0x18),
                 *(undefined8 *)(pcVar5 + 0x20));
      plVar2 = (long *)(lVar14 + 8);
      do {
        lVar9 = *plVar2;
        while (lVar9 != -1) {
          if (lVar9 < 0) {
            local_78 = &PTR_s_Arc_counter_overflow_00adcbc0;
            pcStack_70 = FUN_00782f80;
                    /* try { // try from 007cab10 to 007cab27 has its CatchHandler @ 007cac8c */
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_fmt
                      (&DAT_002ab692,&local_78,&PTR_s__nix_store_8006w282fgsx3273c878b_00adcbd0);
          }
          lVar12 = *plVar2;
          if (lVar12 == lVar9) {
            cVar7 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar13) {
              *plVar2 = lVar9 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 == '\0') {
              bVar13 = true;
            }
            else {
              bVar13 = false;
            }
          }
          else {
            bVar13 = false;
            ClearExclusiveLocal();
          }
          lVar9 = lVar12;
          if (bVar13) {
            param_1[6] = lVar14;
            param_1[1] = puStack_a0;
            *param_1 = local_a8;
            param_1[3] = uStack_90;
            param_1[2] = local_98;
            param_1[5] = uStack_80;
            param_1[4] = local_88;
            goto joined_r0x007caa9c;
          }
        }
        InstructionSynchronizationBarrier();
      } while( true );
    }
                    /* try { // try from 007caae4 to 007caaef has its CatchHandler @ 007cac70 */
                    /* try { // try from 007ca97c to 007ca9f7 has its CatchHandler @ 007cac70 */
    if ((*(long *)PTR_MAX_LEVEL_00b00e60 == 0) &&
       ((((byte)PTR___CALLSITE_00b00f28[0x10] - 1 < 2 ||
         (((byte)PTR___CALLSITE_00b00f28[0x10] != 0 &&
          (cVar7 = <tracing_core::callsite::tracing_core::callsite::DefaultCallsite>::register
                             (PTR___CALLSITE_00b00f28), cVar7 != '\0')))) &&
        (uVar11 = tracing::__macro_support::__is_enabled(*(undefined8 *)puVar6), (uVar11 & 1) != 0))
       )) {
      lVar9 = *(long *)puVar6;
      if (*(undefined8 **)(lVar9 + 0x38) == (undefined8 *)0x0) {
                    /* try { // try from 007cabc8 to 007cabdf has its CatchHandler @ 007cac70 */
                    /* WARNING: Subroutine does not return */
        core::option::expect_failed
                  (&DAT_002e5a7c,0x22,&PTR_s__root__cargo_registry_src_index__00adf3f8);
      }
      uStack_90 = *(undefined8 *)(lVar9 + 0x48);
      local_98 = *(undefined8 *)(lVar9 + 0x40);
      local_88 = 0;
      local_68 = (undefined8 *)(lVar9 + 0x30);
      local_a8 = (int *)*local_68;
      local_b8 = &local_48;
      pcStack_b0 = FUN_007c7578;
      pppcStack_c0 = &local_b8;
      local_c8 = &DAT_002bca1a;
      local_e0 = &local_a8;
      ppuStack_d8 = &local_c8;
      local_d0 = &DAT_00adf370;
      pcStack_70 = (code *)0x1;
      puStack_a0 = *(undefined8 **)(lVar9 + 0x38);
      local_78 = (undefined **)&local_e0;
      <tracing_core::event::tracing_core::event::Event>::dispatch(lVar9,&local_78);
    }
    *(undefined1 *)param_1 = 0xff;
joined_r0x007caa9c:
    if ((((bVar8 & 1) == 0) && ((*puVar4 & 0x7fffffffffffffff) != 0)) &&
       (uVar11 = std::panicking::panic_count::is_zero_slow_path(), (uVar11 & 1) == 0)) {
      *(undefined1 *)(lVar14 + 0x14) = 1;
    }
    do {
      iVar3 = *piVar1;
      cVar7 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar13) {
        *piVar1 = 0;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar3 == 2) {
      <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(piVar1);
    }
  }
  return;
}


// ===== 007cacb0  FUN_007cacb0 =====

void FUN_007cacb0(undefined8 *param_1,long *param_2,char *param_3,undefined8 *param_4)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  char *pcVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  char cVar8;
  char extraout_w8;
  long *plVar9;
  long *extraout_x8;
  long *extraout_x8_00;
  undefined8 uVar10;
  long *extraout_x8_01;
  long lVar11;
  long lVar12;
  undefined8 *unaff_x22;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 *local_d0;
  undefined **ppuStack_c8;
  undefined *local_c0;
  undefined *local_b8;
  char ***pppcStack_b0;
  char **local_a8;
  code *pcStack_a0;
  undefined8 local_98;
  code *pcStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 *local_68;
  undefined8 uStack_60;
  undefined8 *local_58;
  char *local_38;
  
  puVar3 = PTR___CALLSITE_00b00f30;
  plVar9 = *(long **)PTR_MAX_LEVEL_00b00e60;
  local_38 = param_3;
  if (plVar9 <= &DAT_00000001) {
    uVar2 = (byte)PTR___CALLSITE_00b00f30[0x10] - 1;
    plVar9 = (long *)(ulong)uVar2;
    unaff_x22 = (undefined8 *)puVar3;
                    /* try { // try from 007caef8 to 007caf27 has its CatchHandler @ 007caf44 */
                    /* try { // try from 007cad0c to 007cad87 has its CatchHandler @ 007caf44 */
    if (((uVar2 < 2) ||
        (((byte)PTR___CALLSITE_00b00f30[0x10] != 0 &&
         (cVar5 = <tracing_core::callsite::tracing_core::callsite::DefaultCallsite>::register
                            (PTR___CALLSITE_00b00f30), plVar9 = extraout_x8_01, cVar5 != '\0')))) &&
       (iVar6 = tracing::__macro_support::__is_enabled(*(undefined8 *)puVar3), plVar9 = extraout_x8,
       iVar6 != 0)) {
      lVar7 = *(long *)puVar3;
      pcStack_90 = *(code **)(lVar7 + 0x38);
      if (pcStack_90 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
        core::option::expect_failed
                  (&DAT_002e5a7c,0x22,&PTR_s__root__cargo_registry_src_index__00adf410);
      }
      uStack_80 = *(undefined8 *)(lVar7 + 0x48);
      local_88 = *(undefined8 *)(lVar7 + 0x40);
      local_78 = 0;
      local_58 = (undefined8 *)(lVar7 + 0x30);
      local_98 = (undefined **)*local_58;
      local_a8 = &local_38;
      pcStack_a0 = FUN_007c7578;
      pppcStack_b0 = &local_a8;
      local_b8 = &DAT_002b362a;
      local_d0 = &local_98;
      ppuStack_c8 = &local_b8;
      local_c0 = &DAT_00adf370;
      uStack_60 = 1;
      local_68 = (undefined1 *)&local_d0;
      <tracing_core::event::tracing_core::event::Event>::dispatch(lVar7,&local_68);
      plVar9 = extraout_x8_00;
    }
  }
  pcVar4 = local_38;
  lVar7 = *param_2;
  if (lVar7 == 0) {
LAB_007cade0:
    cVar8 = (char)plVar9;
    cVar5 = *local_38;
    if (cVar5 != '\0') {
      if (cVar5 == '\x01') {
        cVar8 = local_38[1];
      }
      else {
        puVar13 = *(undefined8 **)(local_38 + 8);
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        unaff_x22 = (undefined8 *)FUN_004b25a4(0x20,8);
        if (unaff_x22 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          alloc::alloc::handle_alloc_error(8,0x20);
        }
                    /* try { // try from 007cae28 to 007cae33 has its CatchHandler @ 007caf2c */
        (**(code **)*puVar13)(&local_98,puVar13 + 3,puVar13[1],puVar13[2]);
        unaff_x22[1] = pcStack_90;
        *unaff_x22 = local_98;
        unaff_x22[3] = uStack_80;
        unaff_x22[2] = local_88;
        cVar8 = extraout_w8;
      }
    }
    local_98._0_2_ = CONCAT11(cVar8,cVar5);
                    /* try { // try from 007cae5c to 007cae67 has its CatchHandler @ 007caf4c */
    pcStack_90 = (code *)unaff_x22;
    (*(code *)**(undefined8 **)(pcVar4 + 0x10))
              (&local_88,pcVar4 + 0x28,*(undefined8 *)(pcVar4 + 0x18),*(undefined8 *)(pcVar4 + 0x20)
              );
    uVar15 = param_4[3];
    uVar14 = param_4[2];
    uVar17 = param_4[5];
    uVar16 = param_4[4];
    *(undefined1 *)(param_1 + 0xe) = 1;
    uVar10 = param_4[6];
    param_1[9] = uVar15;
    param_1[8] = uVar14;
    param_1[0xb] = uVar17;
    param_1[10] = uVar16;
    uVar15 = param_4[1];
    uVar14 = *param_4;
    param_1[1] = pcStack_90;
    *param_1 = local_98;
    param_1[3] = uStack_80;
    param_1[2] = local_88;
    param_1[5] = uStack_70;
    param_1[4] = local_78;
    param_1[7] = uVar15;
    param_1[6] = uVar14;
    param_1[0xc] = uVar10;
    param_1[0xd] = lVar7;
    return;
  }
  plVar9 = (long *)(lVar7 + 8);
  do {
    lVar11 = *plVar9;
    while (lVar11 != -1) {
      if (lVar11 < 0) {
        local_98 = &PTR_s_Arc_counter_overflow_00adcbc0;
        pcStack_90 = FUN_00782f80;
                    /* try { // try from 007caec8 to 007caef3 has its CatchHandler @ 007caf68 */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_fmt
                  (&DAT_002ab692,&local_98,&PTR_s__nix_store_8006w282fgsx3273c878b_00adcbd0);
      }
      lVar12 = *plVar9;
      if (lVar12 == lVar11) {
        cVar5 = '\x01';
        bVar1 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar1) {
          *plVar9 = lVar11 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        lVar11 = lVar12;
        if (cVar5 == '\0') goto LAB_007cade0;
      }
      else {
        ClearExclusiveLocal();
        lVar11 = lVar12;
      }
    }
    InstructionSynchronizationBarrier();
  } while( true );
}


// ===== 007cafb8  FUN_007cafb8 =====

void FUN_007cafb8(undefined8 *param_1,long *param_2,char *param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  ulong extraout_x8;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *unaff_x22;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 local_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  lVar8 = *param_2;
  if (lVar8 == 0) {
LAB_007cb040:
    uVar11 = param_4[1];
    uVar10 = *param_4;
    uVar13 = param_4[3];
    uVar12 = param_4[2];
    uVar15 = param_4[5];
    uVar14 = param_4[4];
    uVar4 = param_4[6];
    cVar2 = *param_3;
    uVar5 = uVar4;
    if (cVar2 != '\0') {
      if (cVar2 == '\x01') {
        uVar5 = (ulong)(byte)param_3[1];
      }
      else {
        puVar9 = *(undefined8 **)(param_3 + 8);
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        unaff_x22 = (undefined8 *)FUN_004b25a4(0x20,8);
        if (unaff_x22 == (undefined8 *)0x0) {
                    /* try { // try from 007cb164 to 007cb16f has its CatchHandler @ 007cb1a8 */
                    /* WARNING: Subroutine does not return */
          alloc::alloc::handle_alloc_error(8,0x20);
        }
                    /* try { // try from 007cb0b0 to 007cb0bb has its CatchHandler @ 007cb174 */
        (**(code **)*puVar9)(&local_70,puVar9 + 3,puVar9[1],puVar9[2]);
        unaff_x22[1] = pcStack_68;
        *unaff_x22 = local_70;
        unaff_x22[3] = uStack_58;
        unaff_x22[2] = uStack_60;
        uVar5 = extraout_x8;
      }
    }
    local_70._0_2_ = CONCAT11((char)uVar5,cVar2);
                    /* try { // try from 007cb0e0 to 007cb0eb has its CatchHandler @ 007cb18c */
    pcStack_68 = (code *)unaff_x22;
    (*(code *)**(undefined8 **)(param_3 + 0x10))
              (&uStack_60,param_3 + 0x28,*(undefined8 *)(param_3 + 0x18),
               *(undefined8 *)(param_3 + 0x20));
    *(undefined1 *)(param_1 + 0xe) = 0;
    param_1[9] = uVar13;
    param_1[8] = uVar12;
    param_1[0xb] = uVar15;
    param_1[10] = uVar14;
    param_1[0xc] = uVar4;
    param_1[0xd] = lVar8;
    param_1[1] = pcStack_68;
    *param_1 = local_70;
    param_1[3] = uStack_58;
    param_1[2] = uStack_60;
    param_1[5] = uStack_48;
    param_1[4] = local_50;
    param_1[7] = uVar11;
    param_1[6] = uVar10;
    FUN_007c9f00(param_3);
    return;
  }
  plVar1 = (long *)(lVar8 + 8);
  do {
    lVar6 = *plVar1;
    while (lVar6 != -1) {
      if (lVar6 < 0) {
        local_70 = &PTR_s_Arc_counter_overflow_00adcbc0;
        pcStack_68 = FUN_00782f80;
                    /* try { // try from 007cb148 to 007cb15f has its CatchHandler @ 007cb1f0 */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_fmt
                  (&DAT_002ab692,&local_70,&PTR_s__nix_store_8006w282fgsx3273c878b_00adcbd0);
      }
      lVar7 = *plVar1;
      if (lVar7 == lVar6) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        lVar6 = lVar7;
        if (cVar2 == '\0') goto LAB_007cb040;
      }
      else {
        ClearExclusiveLocal();
        lVar6 = lVar7;
      }
    }
    InstructionSynchronizationBarrier();
  } while( true );
}


// ===== 007cb210  FUN_007cb210 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007cb210(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a02f0;
  param_1[1] = _UNK_002a02f8;
  *param_1 = uVar1;
  return;
}


// ===== 007cb224  FUN_007cb224 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007cb224(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029f920;
  param_1[1] = _UNK_0029f928;
  *param_1 = uVar1;
  return;
}


// ===== 007cb238  FUN_007cb238 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007cb238(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a04e0;
  param_1[1] = _UNK_002a04e8;
  *param_1 = uVar1;
  return;
}


// ===== 007cb24c  <reqwest::async_impl::upgrade::Upgraded_as_tokio::io::async_read::AsyncRead>::poll_read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::async_impl::upgrade::Upgraded as tokio::io::async_read::AsyncRead>::poll_read */

void __rustcall
<reqwest::async_impl::upgrade::Upgraded_as_tokio::io::async_read::AsyncRead>::poll_read
          (undefined8 param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  long local_40;
  ulong local_38;
  ulong local_30;
  undefined8 uStack_28;
  
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  local_38 = uVar1 - uVar2;
  if (uVar1 < uVar2) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (0,uVar2,uVar1,&PTR_s__root__cargo_registry_src_index__00adfea0);
  }
  local_30 = 0;
  uStack_28 = 0;
  local_40 = *param_3 + uVar2;
  auVar3 = <hyper::upgrade::Upgraded_as_hyper::rt::io::Read>::poll_read(param_1,param_2,&local_40);
  if (((auVar3 & (undefined1  [16])0x1) == (undefined1  [16])0x0) && (auVar3._8_8_ == 0)) {
    if (local_38 < local_30) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (0,local_30,local_38,&PTR_s__root__cargo_registry_src_index__00adff68);
    }
    local_30 = local_30 + uVar2;
    if ((ulong)param_3[3] < local_30) {
      param_3[3] = local_30;
    }
    param_3[2] = local_30;
  }
  return;
}


// ===== 007cb2ec  <reqwest::async_impl::upgrade::Upgraded_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::async_impl::upgrade::Upgraded as core::fmt::Debug>::fmt */

void __rustcall
<reqwest::async_impl::upgrade::Upgraded_as_core::fmt::Debug>::fmt
          (undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,&DAT_002a1200,8);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish(auStack_20);
  return;
}


// ===== 007cb324  FUN_007cb324 =====

void FUN_007cb324(void)

{
  return;
}


// ===== 007cb330  FUN_007cb330 =====

void FUN_007cb330(void)

{
  return;
}


// ===== 007cb33c  FUN_007cb33c =====

void FUN_007cb33c(void)

{
  return;
}


// ===== 007cb348  FUN_007cb348 =====

void FUN_007cb348(void)

{
  return;
}


// ===== 007cb354  FUN_007cb354 =====

void FUN_007cb354(void)

{
  return;
}


// ===== 007cb360  FUN_007cb360 =====

void FUN_007cb360(void)

{
  return;
}


// ===== 007cb36c  FUN_007cb36c =====

void FUN_007cb36c(void)

{
  return;
}


// ===== 007cb378  FUN_007cb378 =====

void FUN_007cb378(void)

{
  return;
}


// ===== 007cb384  FUN_007cb384 =====

void FUN_007cb384(void)

{
  return;
}


// ===== 007cb390  FUN_007cb390 =====

void FUN_007cb390(undefined8 *param_1)

{
  <core::net::socket_addr::SocketAddr_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 007cb398  FUN_007cb398 =====

void FUN_007cb398(undefined8 *param_1)

{
  <rustls::msgs::base::PayloadU8_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 007cb3a0  FUN_007cb3a0 =====

void FUN_007cb3a0(undefined8 *param_1)

{
  <rustls::msgs::base::Payload_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 007cb3a8  FUN_007cb3a8 =====

void FUN_007cb3a8(undefined8 *param_1)

{
  <rustls::msgs::enums::HpkeAead_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 007cb3b0  FUN_007cb3b0 =====

void FUN_007cb3b0(long *param_1,undefined8 param_2)

{
  size_t __n;
  undefined1 *unaff_x20;
  void *__src;
  undefined8 uVar1;
  ulong local_70;
  void *local_68;
  size_t local_58;
  undefined1 *puStack_50;
  size_t local_48;
  
  if (*param_1 == -1) {
    __n = 0xffffffffffffffff;
  }
  else {
    __n = param_1[2];
    if ((long)__n < 0) {
      uVar1 = 0;
LAB_007cb3e0:
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(uVar1,__n);
    }
    if (__n == 0) {
      unaff_x20 = &DAT_00000001;
    }
    else {
      __src = (void *)param_1[1];
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar1 = 1;
      unaff_x20 = (undefined1 *)FUN_004b25a4(__n,1);
      if (unaff_x20 == (undefined1 *)0x0) goto LAB_007cb3e0;
      memcpy(unaff_x20,__src,__n);
    }
  }
  local_58 = __n;
  puStack_50 = unaff_x20;
  local_48 = __n;
  FUN_007c8c64(&local_70,param_2,&local_58);
  if ((local_70 < 0xfffffffffffffffe) && (local_70 != 0)) {
    free(local_68);
    return;
  }
  return;
}


// ===== 007cb490  FUN_007cb490 =====

void FUN_007cb490(long *param_1)

{
  size_t *psVar1;
  size_t __n;
  undefined1 *unaff_x20;
  void *__src;
  undefined8 uVar2;
  
  if (*param_1 == -1) {
    __n = 0xffffffffffffffff;
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    psVar1 = (size_t *)FUN_004b25a4(0x18,8);
  }
  else {
    __n = param_1[2];
    if ((long)__n < 0) {
      uVar2 = 0;
LAB_007cb4b8:
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(uVar2,__n);
    }
    if (__n == 0) {
      unaff_x20 = &DAT_00000001;
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      psVar1 = (size_t *)FUN_004b25a4(0x18,8);
    }
    else {
      __src = (void *)param_1[1];
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar2 = 1;
      unaff_x20 = (undefined1 *)FUN_004b25a4(__n,1);
      if (unaff_x20 == (undefined1 *)0x0) goto LAB_007cb4b8;
      memcpy(unaff_x20,__src,__n);
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      psVar1 = (size_t *)FUN_004b25a4(0x18,8);
    }
  }
  if (psVar1 == (size_t *)0x0) {
                    /* try { // try from 007cb55c to 007cb567 has its CatchHandler @ 007cb56c */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x18);
  }
  *psVar1 = __n;
  psVar1[1] = (size_t)unaff_x20;
  psVar1[2] = __n;
  return;
}


// ===== 007cb590  FUN_007cb590 =====

void FUN_007cb590(long *param_1,undefined8 param_2)

{
  size_t __n;
  void *__src;
  undefined8 uVar1;
  ulong local_70;
  void *local_68;
  size_t local_58;
  long *plStack_50;
  size_t local_48;
  
  (**(code **)(param_1[4] + 0x20))(param_1[3]);
  if (*param_1 == -1) {
    __n = 0xffffffffffffffff;
  }
  else {
    __n = param_1[2];
    if ((long)__n < 0) {
      uVar1 = 0;
LAB_007cb5d4:
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(uVar1,__n);
    }
    if (__n == 0) {
      param_1 = (long *)&DAT_00000001;
    }
    else {
      __src = (void *)param_1[1];
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar1 = 1;
      param_1 = (long *)FUN_004b25a4(__n,1);
      if (param_1 == (long *)0x0) goto LAB_007cb5d4;
      memcpy(param_1,__src,__n);
    }
  }
  local_58 = __n;
  plStack_50 = param_1;
  local_48 = __n;
  FUN_007c8c64(&local_70,param_2,&local_58);
  if ((local_70 < 0xfffffffffffffffe) && (local_70 != 0)) {
    free(local_68);
    return;
  }
  return;
}


// ===== 007cb680  FUN_007cb680 =====

void FUN_007cb680(long *param_1)

{
  size_t *psVar1;
  size_t __n;
  void *__src;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  auVar3 = (**(code **)(param_1[4] + 0x18))(param_1[3]);
  if (*param_1 == -1) {
    __n = 0xffffffffffffffff;
  }
  else {
    __n = param_1[2];
    if ((long)__n < 0) {
      uVar2 = 0;
LAB_007cb6c8:
                    /* try { // try from 007cb6c8 to 007cb6d3 has its CatchHandler @ 007cb790 */
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(uVar2,__n);
    }
    if (__n == 0) {
      param_1 = (long *)&DAT_00000001;
    }
    else {
      __src = (void *)param_1[1];
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar2 = 1;
      param_1 = (long *)FUN_004b25a4(__n,1);
      if (param_1 == (long *)0x0) goto LAB_007cb6c8;
      memcpy(param_1,__src,__n);
    }
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  psVar1 = (size_t *)FUN_004b25a4(0x28,8);
  if (psVar1 != (size_t *)0x0) {
    psVar1[1] = (size_t)param_1;
    *psVar1 = __n;
    psVar1[3] = auVar3._0_8_;
    psVar1[2] = __n;
    psVar1[4] = auVar3._8_8_;
    return;
  }
                    /* try { // try from 007cb76c to 007cb777 has its CatchHandler @ 007cb77c */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x28);
}


// ===== 007cb7ac  FUN_007cb7ac =====

void FUN_007cb7ac(long param_1,undefined8 param_2)

{
  long local_18;
  
  if (*(int *)(param_1 + 8) != -1) {
    local_18 = param_1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002bd0bc,4,&local_18,&DAT_00adf5f0);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd198,4);
  return;
}


// ===== 007cb808  <reqwest::async_impl::upgrade::Upgraded_as_tokio::io::async_write::AsyncWrite>::poll_flush =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::async_impl::upgrade::Upgraded as tokio::io::async_write::AsyncWrite>::poll_flush */

void __rustcall
<reqwest::async_impl::upgrade::Upgraded_as_tokio::io::async_write::AsyncWrite>::poll_flush(void)

{
  (*(code *)PTR_poll_flush_00b03c20)();
  return;
}


// ===== 007cb80c  <reqwest::async_impl::upgrade::Upgraded_as_tokio::io::async_write::AsyncWrite>::poll_write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::async_impl::upgrade::Upgraded as tokio::io::async_write::AsyncWrite>::poll_write */

void __rustcall
<reqwest::async_impl::upgrade::Upgraded_as_tokio::io::async_write::AsyncWrite>::poll_write(void)

{
  (*(code *)PTR_poll_write_00b03c28)();
  return;
}


// ===== 007cb810  <reqwest::async_impl::upgrade::Upgraded_as_tokio::io::async_write::AsyncWrite>::poll_shutdown =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::async_impl::upgrade::Upgraded as tokio::io::async_write::AsyncWrite>::poll_shutdown */

void __rustcall
<reqwest::async_impl::upgrade::Upgraded_as_tokio::io::async_write::AsyncWrite>::poll_shutdown(void)

{
  (*(code *)PTR_poll_shutdown_00b03c30)();
  return;
}


// ===== 007cb814  <reqwest::async_impl::upgrade::Upgraded_as_tokio::io::async_write::AsyncWrite>::is_write_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::async_impl::upgrade::Upgraded as tokio::io::async_write::AsyncWrite>::is_write_vectored
    */

void __rustcall
<reqwest::async_impl::upgrade::Upgraded_as_tokio::io::async_write::AsyncWrite>::is_write_vectored
          (void)

{
  (*(code *)PTR_is_write_vectored_00b03c38)();
  return;
}


// ===== 007cb818  <reqwest::async_impl::upgrade::Upgraded_as_tokio::io::async_write::AsyncWrite>::poll_write_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::async_impl::upgrade::Upgraded as
   tokio::io::async_write::AsyncWrite>::poll_write_vectored */

void __rustcall
<reqwest::async_impl::upgrade::Upgraded_as_tokio::io::async_write::AsyncWrite>::poll_write_vectored
          (void)

{
  (*(code *)PTR_poll_write_vectored_00b03c40)();
  return;
}


// ===== 007cb81c  FUN_007cb81c =====

void FUN_007cb81c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long *local_f8;
  undefined8 local_f0;
  long *plStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  uStack_108 = param_2[0xd];
  local_110 = param_2[0xc];
  local_f8 = (long *)param_2[0xf];
  uStack_100 = param_2[0xe];
  plStack_e8 = (long *)param_2[0x11];
  local_f0 = param_2[0x10];
  local_e0 = param_2[0x12];
  uStack_128 = param_2[9];
  local_130 = param_2[8];
  uStack_118 = param_2[0xb];
  uStack_120 = param_2[10];
  if (*(char *)((long)param_3 + 0x29) == -1) {
    uStack_68 = param_2[0xd];
    local_70 = param_2[0xc];
    uStack_58 = param_2[0xf];
    uStack_60 = param_2[0xe];
    uStack_48 = param_2[0x11];
    local_50 = param_2[0x10];
    local_40 = param_2[0x12];
    uStack_a8 = param_2[5];
    local_b0 = param_2[4];
    uStack_98 = param_2[7];
    uStack_a0 = param_2[6];
    uStack_88 = param_2[9];
    local_90 = param_2[8];
    uStack_78 = param_2[0xb];
    uStack_80 = param_2[10];
    uStack_c8 = param_2[1];
    local_d0 = *param_2;
    uStack_b8 = param_2[3];
    uStack_c0 = param_2[2];
    FUN_007920c0(&local_d0);
    return;
  }
  uVar6 = param_3[1];
  uVar5 = *param_3;
  uVar8 = param_3[3];
  uVar7 = param_3[2];
  uVar10 = param_3[5];
  uVar9 = param_3[4];
  uVar3 = param_3[6];
  *(undefined1 *)(param_1 + 0xe) = 0xfd;
  param_1[1] = uVar6;
  *param_1 = uVar5;
  param_1[3] = uVar8;
  param_1[2] = uVar7;
  param_1[5] = uVar10;
  param_1[4] = uVar9;
  param_1[6] = uVar3;
                    /* try { // try from 007cb890 to 007cb897 has its CatchHandler @ 007cb950 */
  FUN_007c9f00(&local_130);
  if (plStack_e8 != (long *)0x0) {
    do {
      lVar4 = *plStack_e8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_e8,0x10);
      if (bVar2) {
        *plStack_e8 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 007cb8b8 to 007cb8bf has its CatchHandler @ 007cb948 */
      <alloc[c1f8e832b0d782c7]::sync::Arc<std[17aff9129faa4dc5]::sync::poison::mutex::Mutex<hyper_util[52a210df7efc1bae]::client::legacy::pool::PoolInner<hyper_util[52a210df7efc1bae]::client::legacy::client::PoolClient<reqwest[6fed810f3e38d558]::async_impl::body::Body>,(http[b87e90c26fe47eb4]::uri::scheme::Scheme,http[b87e90c26fe47eb4]::uri::authority::Authority)>>>>
      ::drop_slow(&plStack_e8);
    }
  }
  do {
    lVar4 = *local_f8;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(local_f8,0x10);
    if (bVar2) {
      *local_f8 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
    drop_slow(&local_f8);
  }
  return;
}


// ===== 007cb9b0  FUN_007cb9b0 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_007cb9b0(undefined ********param_1)

{
  undefined *******pppppppuVar1;
  undefined ********ppppppppuVar2;
  undefined *******pppppppuVar3;
  char cVar4;
  undefined *******pppppppuVar5;
  bool bVar6;
  char cVar7;
  bool bVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [12];
  undefined1 auVar18 [12];
  undefined *puVar19;
  undefined *puVar20;
  undefined ********ppppppppuVar21;
  code *pcVar22;
  char cVar23;
  int iVar25;
  char cVar24;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  undefined ********ppppppppuVar29;
  undefined **ppuVar30;
  byte extraout_w8;
  undefined *******extraout_x8;
  undefined *******pppppppuVar31;
  undefined *******pppppppuVar32;
  undefined ******ppppppuVar33;
  undefined ******ppppppuVar34;
  undefined *******pppppppuVar35;
  long lVar36;
  undefined ********unaff_x22;
  undefined *******pppppppuVar37;
  byte bVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [12];
  undefined1 *local_320;
  uint local_314;
  undefined ********local_310;
  undefined ********ppppppppuStack_308;
  undefined *******pppppppuStack_300;
  undefined *******pppppppuStack_2f8;
  undefined *******local_2f0;
  undefined *******pppppppuStack_2e8;
  undefined1 local_2e0;
  char cStack_2df;
  undefined4 uStack_2de;
  undefined2 uStack_2da;
  undefined *******local_2d8;
  byte local_2d0;
  byte local_2cf;
  undefined ********local_2c8;
  undefined8 *local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined1 auStack_2a8 [8];
  undefined ********local_2a0;
  undefined ********ppppppppuStack_298;
  undefined *******pppppppuStack_290;
  undefined *******pppppppuStack_288;
  undefined *******local_280;
  undefined *******pppppppuStack_278;
  undefined *******local_270;
  undefined ********local_260;
  undefined ********ppppppppuStack_258;
  undefined *******pppppppuStack_250;
  undefined *******pppppppuStack_248;
  undefined *******local_240;
  undefined *******pppppppuStack_238;
  undefined8 local_230;
  undefined ********local_220;
  undefined ********ppppppppuStack_218;
  undefined *******pppppppuStack_210;
  undefined *******pppppppuStack_208;
  undefined *******local_200;
  undefined *******pppppppuStack_1f8;
  undefined1 local_1f0;
  char cStack_1ef;
  undefined4 uStack_1ee;
  undefined2 uStack_1ea;
  undefined4 local_1e8;
  undefined2 local_1e4;
  undefined ********local_1e0;
  undefined ********ppppppppuStack_1d8;
  undefined *******pppppppuStack_1d0;
  undefined *******pppppppuStack_1c8;
  undefined *******local_1c0;
  undefined *******pppppppuStack_1b8;
  undefined1 local_1b0;
  undefined ********local_1a0;
  undefined ********ppppppppuStack_198;
  undefined *******local_190;
  undefined *******pppppppuStack_188;
  undefined *******local_180;
  undefined *******pppppppuStack_178;
  undefined *******local_170;
  undefined ********local_160;
  undefined ********local_158;
  undefined *local_150 [4];
  undefined ********local_130;
  undefined *******pppppppuStack_128;
  undefined *******local_120;
  undefined ********ppppppppuStack_118;
  undefined ********local_110;
  undefined ********ppppppppuStack_108;
  undefined *******pppppppuStack_100;
  undefined *******local_f8;
  undefined *******pppppppuStack_f0;
  undefined *******local_e8;
  undefined *******local_e0;
  undefined8 local_d8;
  undefined ********local_d0;
  undefined ********ppppppppuStack_c8;
  undefined1 local_c0 [16];
  undefined *******local_b0;
  undefined *******pppppppuStack_a8;
  undefined *******local_a0;
  undefined ******local_98;
  undefined1 local_90 [12];
  
  cStack_2df = *(char *)((long)param_1 + 0x61);
  *(undefined1 *)((long)param_1 + 0x61) = 2;
  if (cStack_2df == '\x02') {
    return;
  }
  local_2e0 = *(undefined1 *)(param_1 + 0xc);
  ppppppppuStack_308 = (undefined ********)param_1[7];
  local_310 = (undefined ********)param_1[6];
  pppppppuStack_2f8 = param_1[9];
  pppppppuStack_300 = param_1[8];
  pppppppuStack_2e8 = param_1[0xb];
  local_2f0 = param_1[10];
  uStack_2de = *(undefined4 *)((long)param_1 + 0x62);
  uStack_2da = *(undefined2 *)((long)param_1 + 0x66);
                    /* try { // try from 007cba1c to 007cbbc3 has its CatchHandler @ 007ccd94 */
  uVar26 = <hyper_util::client::legacy::connect::hyper_util::client::legacy::connect::PoisonPill>::
           poisoned(&pppppppuStack_2e8);
  auVar18._8_4_ = local_90._8_4_;
  auVar18._0_8_ = local_90._0_8_;
  auVar17._8_4_ = local_90._8_4_;
  auVar17._0_8_ = local_90._0_8_;
  auVar42._8_4_ = local_90._8_4_;
  auVar42._0_8_ = local_90._0_8_;
  auVar16._8_8_ = local_c0._8_8_;
  auVar16._0_8_ = local_c0._0_8_;
  auVar15._8_8_ = local_c0._8_8_;
  auVar15._0_8_ = local_c0._0_8_;
  auVar41._8_8_ = local_c0._8_8_;
  auVar41._0_8_ = local_c0._0_8_;
  if (((uVar26 & 1) != 0) ||
     (local_c0 = auVar41, local_90 = auVar42, local_310[2] != (undefined *******)0x1))
  goto LAB_007cc76c;
  pppppppuVar37 = param_1[0xd];
  if (0xfffffffffffffffd < (long)pppppppuVar37 - 1U) {
LAB_007cba84:
    puVar19 = PTR___CALLSITE_00b00f38;
    local_c0 = auVar15;
    local_90 = auVar17;
    if (*(long *)PTR_MAX_LEVEL_00b00e60 != 0) goto LAB_007cc76c;
    if (1 < (byte)PTR___CALLSITE_00b00f38[0x10] - 1) {
      local_c0 = auVar16;
      local_90 = auVar18;
      if ((byte)PTR___CALLSITE_00b00f38[0x10] == 0) goto LAB_007cc76c;
      cVar24 = <tracing_core::callsite::tracing_core::callsite::DefaultCallsite>::register
                         (PTR___CALLSITE_00b00f38);
      if (cVar24 == '\0') goto LAB_007cc76c;
    }
    iVar25 = tracing::__macro_support::__is_enabled(*(undefined8 *)puVar19);
    if (iVar25 != 0) {
      lVar36 = *(long *)puVar19;
      ppppppppuStack_c8 = *(undefined *********)(lVar36 + 0x38);
      if (ppppppppuStack_c8 == (undefined ********)0x0) {
                    /* try { // try from 007cc9b0 to 007cc9c7 has its CatchHandler @ 007ccd94 */
                    /* WARNING: Subroutine does not return */
        core::option::expect_failed
                  (&DAT_002e5a7c,0x22,&PTR_s__root__cargo_registry_src_index__00adf610);
      }
      local_c0._8_8_ = *(undefined8 *)(lVar36 + 0x48);
      local_c0._0_8_ = *(undefined8 *)(lVar36 + 0x40);
      local_b0 = (undefined *******)0x0;
      pppppppuStack_100 = (undefined *******)(lVar36 + 0x30);
      local_d0 = (undefined ********)*pppppppuStack_100;
      ppppppppuStack_218 = (undefined ********)FUN_007c740c;
      ppppppppuStack_258 = (undefined ********)&local_220;
      local_260 = (undefined ********)&DAT_002b17dc;
      local_1a0 = (undefined ********)&local_d0;
      ppppppppuStack_198 = (undefined ********)&local_260;
      local_190 = (undefined *******)&DAT_00adf370;
      local_110 = (undefined ********)&local_1a0;
      ppppppppuStack_108 = (undefined ********)&DAT_00000001;
      local_220 = param_1;
      <tracing_core::event::tracing_core::event::Event>::dispatch(lVar36,&local_110);
    }
    goto LAB_007cc76c;
  }
  ppppppuVar34 = *pppppppuVar37;
  do {
    while( true ) {
      if (ppppppuVar34 == (undefined ******)0x0) goto LAB_007cba84;
      if ((long)ppppppuVar34 < 0) {
        local_d0 = (undefined ********)&PTR_s_Arc_counter_overflow_00adcbc0;
        ppppppppuStack_c8 = (undefined ********)FUN_00782f80;
                    /* try { // try from 007cbc18 to 007cbc2f has its CatchHandler @ 007ccd94 */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_fmt
                  (&DAT_002ab692,&local_d0,&PTR_s__nix_store_8006w282fgsx3273c878b_00adcc10);
      }
      ppppppuVar33 = *pppppppuVar37;
      if (ppppppuVar33 == ppppppuVar34) break;
      ClearExclusiveLocal();
      ppppppuVar34 = ppppppuVar33;
    }
    cVar24 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(pppppppuVar37,0x10);
    if (bVar8) {
      *pppppppuVar37 = (undefined ******)((long)ppppppuVar34 + 1);
      cVar24 = ExclusiveMonitorsStatus();
    }
    ppppppuVar34 = ppppppuVar33;
  } while (cVar24 != '\0');
  pppppppuVar1 = pppppppuVar37 + 2;
  do {
    local_2d8 = pppppppuVar37;
    if (*(int *)pppppppuVar1 != 0) {
      ClearExclusiveLocal();
                    /* try { // try from 007cc988 to 007cc98f has its CatchHandler @ 007cca3c */
      <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                (pppppppuVar37 + 2);
      break;
    }
    cVar24 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(pppppppuVar1,0x10);
    if (bVar8) {
      *(undefined4 *)pppppppuVar1 = 1;
      cVar24 = ExclusiveMonitorsStatus();
    }
  } while (cVar24 != '\0');
  if ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) == 0) {
    if (*(char *)((long)pppppppuVar37 + 0x14) != '\0') {
LAB_007cbb68:
      if (((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) != 0) &&
         (uVar26 = std::panicking::panic_count::is_zero_slow_path(), (uVar26 & 1) == 0)) {
        *(undefined1 *)((long)pppppppuVar37 + 0x14) = 1;
      }
      goto LAB_007cbb74;
    }
    local_2cf = (char)pppppppuVar37 + 0x14;
    local_314 = 0;
    bVar38 = *(byte *)param_1;
joined_r0x007cbc8c:
    if (bVar38 != 0) {
      if (bVar38 == 1) {
        local_2cf = *(byte *)((long)param_1 + 1);
      }
      else {
        pppppppuVar35 = param_1[1];
                    /* try { // try from 007cbbd8 to 007cbbdb has its CatchHandler @ 007ccc94 */
        unaff_x22 = (undefined ********)FUN_007c51f4();
                    /* try { // try from 007cbbec to 007cbbf7 has its CatchHandler @ 007ccb24 */
        (*(code *)**pppppppuVar35)(&local_d0,pppppppuVar35 + 3,pppppppuVar35[1],pppppppuVar35[2]);
        unaff_x22[1] = (undefined *******)ppppppppuStack_c8;
        *unaff_x22 = (undefined *******)local_d0;
        unaff_x22[3] = (undefined *******)local_c0._8_8_;
        unaff_x22[2] = (undefined *******)local_c0._0_8_;
        local_2cf = extraout_w8;
      }
    }
    local_320 = (undefined1 *)((long)pppppppuVar37 + 0x14);
                    /* try { // try from 007cbcac to 007cbcb7 has its CatchHandler @ 007ccc70 */
    local_2d0 = bVar38;
    local_2c8 = unaff_x22;
    (*(code *)*param_1[2])(&local_2c0,param_1 + 5,param_1[3],param_1[4]);
    puVar19 = PTR___CALLSITE_00b00f48;
    local_270 = (undefined *******)
                CONCAT26(uStack_2da,CONCAT42(uStack_2de,CONCAT11(cStack_2df,local_2e0)));
    ppppppppuStack_298 = ppppppppuStack_308;
    local_2a0 = local_310;
    pppppppuStack_288 = pppppppuStack_2f8;
    pppppppuStack_290 = pppppppuStack_300;
    pppppppuStack_278 = pppppppuStack_2e8;
    local_280 = local_2f0;
                    /* try { // try from 007cc1bc to 007cc24b has its CatchHandler @ 007ccb90 */
    if ((*(long *)PTR_MAX_LEVEL_00b00e60 == 0) &&
       ((((byte)PTR___CALLSITE_00b00f48[0x10] - 1 < 2 ||
         (((byte)PTR___CALLSITE_00b00f48[0x10] != 0 &&
          (cVar24 = <tracing_core::callsite::tracing_core::callsite::DefaultCallsite>::register
                              (PTR___CALLSITE_00b00f48), cVar24 != '\0')))) &&
        (uVar26 = tracing::__macro_support::__is_enabled(*(undefined8 *)puVar19), (uVar26 & 1) != 0)
        ))) {
      lVar36 = *(long *)puVar19;
      ppppppppuStack_c8 = *(undefined *********)(lVar36 + 0x38);
      if (ppppppppuStack_c8 == (undefined ********)0x0) {
                    /* try { // try from 007cc9cc to 007cc9e3 has its CatchHandler @ 007ccb90 */
                    /* WARNING: Subroutine does not return */
        core::option::expect_failed
                  (&DAT_002e5a7c,0x22,&PTR_s__root__cargo_registry_src_index__00adf470);
      }
      local_c0._8_8_ = *(long *)(lVar36 + 0x48);
      local_c0._0_8_ = *(undefined8 *)(lVar36 + 0x40);
      local_b0 = (undefined *******)0x0;
      pppppppuStack_100 = (undefined *******)(lVar36 + 0x30);
      local_d0 = (undefined ********)*pppppppuStack_100;
      local_220 = (undefined ********)&local_2d0;
      ppppppppuStack_218 = (undefined ********)FUN_007c740c;
      ppppppppuStack_258 = (undefined ********)&local_220;
      local_260 = (undefined ********)&DAT_002b5305;
      local_1a0 = (undefined ********)&local_d0;
      ppppppppuStack_198 = (undefined ********)&local_260;
      local_190 = (undefined *******)&DAT_00adf370;
      local_110 = (undefined ********)&local_1a0;
      ppppppppuStack_108 = (undefined ********)&DAT_00000001;
      <tracing_core::event::tracing_core::event::Event>::dispatch(lVar36,&local_110);
    }
    pppppppuStack_238 = pppppppuStack_278;
    local_240 = local_280;
    ppppppppuStack_258 = ppppppppuStack_298;
    local_260 = local_2a0;
    pppppppuStack_248 = pppppppuStack_288;
    pppppppuStack_250 = pppppppuStack_290;
    local_230 = local_270;
    if (pppppppuVar37[0x14] != (undefined ******)0x0) {
      unaff_x22 = (undefined ********)&DAT_00000001;
                    /* try { // try from 007cbd04 to 007cbd0f has its CatchHandler @ 007ccca8 */
      uVar27 = FUN_007c4ecc(pppppppuVar37 + 0x15,&local_2d0);
      lVar36 = 0;
      ppppppuVar34 = pppppppuVar37[0x11];
      ppppppuVar33 = pppppppuVar37[0x12];
      bVar38 = (byte)(uVar27 >> 0x39);
      uVar39 = CONCAT17(bVar38,CONCAT16(bVar38,CONCAT15(bVar38,CONCAT14(bVar38,CONCAT13(bVar38,
                                                  CONCAT12(bVar38,CONCAT11(bVar38,bVar38)))))));
      uVar27 = uVar27 & (ulong)ppppppuVar33;
      uVar40 = *(undefined8 *)((long)ppppppuVar34 + uVar27);
      uVar26 = NEON_cmeq(uVar40,uVar39,1);
      uVar26 = uVar26 & 0x8080808080808080;
      while( true ) {
        for (; uVar26 == 0; uVar26 = uVar26 & 0x8080808080808080) {
          uVar40 = NEON_cmeq(uVar40,0xffffffffffffffff,1);
          bVar38 = NEON_umaxv(uVar40,1);
          if ((bVar38 & 1) != 0) goto LAB_007cc29c;
          lVar36 = lVar36 + 8;
          uVar27 = uVar27 + lVar36 & (ulong)ppppppuVar33;
          uVar40 = *(undefined8 *)((long)ppppppuVar34 + uVar27);
          uVar26 = NEON_cmeq(uVar40,uVar39,1);
        }
        uVar28 = (uVar26 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar26 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar28 = (uVar28 & 0xffff0000ffff0000) >> 0x10 | (uVar28 & 0xffff0000ffff) << 0x10;
        unaff_x22 = (undefined ********)
                    (ppppppuVar34 +
                    (uVar27 + ((ulong)LZCOUNT(uVar28 >> 0x20 | uVar28 << 0x20) >> 3) &
                    (ulong)ppppppuVar33) * -10);
                    /* try { // try from 007cbd58 to 007cbd73 has its CatchHandler @ 007ccc1c */
        iVar25 = <http::uri::scheme::Scheme_as_core::cmp::PartialEq>::eq(&local_2d0,unaff_x22 + -10)
        ;
        if ((iVar25 != 0) &&
           (uVar28 = <http::uri::authority::Authority_as_core::cmp::PartialEq>::eq
                               (&local_2c0,unaff_x22 + -8), (uVar28 & 1) != 0)) break;
        uVar26 = uVar26 - 1 & uVar26;
      }
      pppppppuVar35 = unaff_x22[-1];
      pppppppuVar31 = local_230;
      while (local_230 = pppppppuVar31, pppppppuVar35 != (undefined *******)0x0) {
        pppppppuVar5 = unaff_x22[-2];
        pppppppuVar32 = (undefined *******)((long)pppppppuVar5 + 1);
        pppppppuVar3 = (undefined *******)0x0;
        if (unaff_x22[-4] <= pppppppuVar32) {
          pppppppuVar3 = unaff_x22[-4];
        }
        unaff_x22[-2] = (undefined *******)((long)pppppppuVar32 - (long)pppppppuVar3);
        unaff_x22[-1] = (undefined *******)((long)pppppppuVar35 + -1);
        ppppppppuVar29 = (undefined ********)unaff_x22[-3][(long)pppppppuVar5];
        cVar24 = *(char *)(ppppppppuVar29 + 0x10);
        local_130 = ppppppppuVar29;
        if (cVar24 == '\0') {
          local_230._1_1_ = (char)((ulong)pppppppuVar31 >> 8);
          cVar23 = local_230._1_1_;
          local_230._2_6_ = (undefined6)((ulong)pppppppuVar31 >> 0x10);
          local_230._0_1_ = SUB81(pppppppuVar31,0);
          local_230._0_2_ = CONCAT11(2,(undefined1)local_230);
          pppppppuVar35 = local_230;
          if (cVar23 == '\x02') {
                    /* try { // try from 007cc900 to 007cc917 has its CatchHandler @ 007ccd24 */
                    /* WARNING: Subroutine does not return */
            core::option::expect_failed
                      (&DAT_002e5ac9,0x12,&PTR_s__root__cargo_registry_src_index__00adf488);
          }
          cStack_1ef = cVar23;
          local_1f0 = (undefined1)local_230;
          local_230._2_4_ = (undefined4)((ulong)pppppppuVar31 >> 0x10);
          uStack_1ee = local_230._2_4_;
          local_230._6_2_ = (undefined2)((ulong)pppppppuVar31 >> 0x30);
          uStack_1ea = local_230._6_2_;
          local_230 = pppppppuVar35;
          local_220 = local_260;
          ppppppppuStack_218 = ppppppppuStack_258;
          pppppppuStack_210 = pppppppuStack_250;
          pppppppuStack_208 = pppppppuStack_248;
          local_200 = local_240;
          pppppppuStack_1f8 = pppppppuStack_238;
          local_d0 = ppppppppuVar29;
          if (*(char *)(ppppppppuVar29 + 0x10) == '\0') {
            ppppppppuVar2 = ppppppppuVar29 + 9;
            do {
              cVar4 = *(char *)ppppppppuVar2;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar2,0x10);
              if (bVar8) {
                *(undefined1 *)ppppppppuVar2 = 1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (cVar4 != '\0') goto LAB_007cbf24;
            if (*(char *)((long)ppppppppuVar29 + 0x41) != '\x02') {
                    /* try { // try from 007cc940 to 007cc957 has its CatchHandler @ 007ccd00 */
                    /* WARNING: Subroutine does not return */
              core::panicking::panic
                        ("assertion failed: slot.is_none()",0x20,
                         &PTR_s__root__cargo_registry_src_index__00adf3b0);
            }
            ppppppppuVar29[8] = pppppppuVar31;
            ppppppppuVar29[3] = (undefined *******)ppppppppuStack_258;
            ppppppppuVar29[2] = (undefined *******)local_260;
            ppppppppuVar29[5] = pppppppuStack_248;
            ppppppppuVar29[4] = pppppppuStack_250;
            ppppppppuVar29[7] = pppppppuStack_238;
            ppppppppuVar29[6] = local_240;
            *(undefined4 *)(ppppppppuVar29 + 9) = 0;
            if (*(char *)(ppppppppuVar29 + 0x10) == '\0') {
LAB_007cc148:
              cVar23 = '\x02';
            }
            else {
              do {
                cVar23 = *(char *)ppppppppuVar2;
                cVar4 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar2,0x10);
                if (bVar8) {
                  *(undefined1 *)ppppppppuVar2 = 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (cVar23 != '\0') goto LAB_007cc148;
              cVar23 = *(char *)((long)ppppppppuVar29 + 0x41);
              *(undefined1 *)((long)ppppppppuVar29 + 0x41) = 2;
              if (cVar23 == '\x02') {
                *(undefined4 *)ppppppppuVar2 = 0;
              }
              else {
                local_1b0 = *(undefined1 *)(ppppppppuVar29 + 8);
                ppppppppuStack_1d8 = (undefined ********)ppppppppuVar29[3];
                local_1e0 = (undefined ********)ppppppppuVar29[2];
                pppppppuStack_1c8 = ppppppppuVar29[5];
                pppppppuStack_1d0 = ppppppppuVar29[4];
                pppppppuStack_1b8 = ppppppppuVar29[7];
                local_1c0 = ppppppppuVar29[6];
                local_1e8 = *(undefined4 *)((long)ppppppppuVar29 + 0x42);
                local_1e4 = *(undefined2 *)((long)ppppppppuVar29 + 0x46);
                *(undefined4 *)(ppppppppuVar29 + 9) = 0;
              }
            }
          }
          else {
LAB_007cbf24:
            local_1b0 = (undefined1)local_230;
            local_1e8 = local_230._2_4_;
            local_1e4 = local_230._6_2_;
            local_1e0 = local_260;
            ppppppppuStack_1d8 = ppppppppuStack_258;
            pppppppuStack_1d0 = pppppppuStack_250;
            pppppppuStack_1c8 = pppppppuStack_248;
            local_1c0 = local_240;
            pppppppuStack_1b8 = pppppppuStack_238;
          }
          ppppppppuVar2 = ppppppppuVar29 + 0xc;
          *(undefined4 *)(ppppppppuVar29 + 0x10) = 1;
          do {
            cVar4 = *(char *)ppppppppuVar2;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar2,0x10);
            if (bVar8) {
              *(undefined1 *)ppppppppuVar2 = 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (cVar4 == '\0') {
            pppppppuVar35 = ppppppppuVar29[10];
            ppppppppuVar29[10] = (undefined *******)0x0;
            *(undefined4 *)(ppppppppuVar29 + 0xc) = 0;
            if (pppppppuVar35 != (undefined *******)0x0) {
                    /* try { // try from 007cbf88 to 007cbf8b has its CatchHandler @ 007ccbac */
              (*(code *)pppppppuVar35[1])(ppppppppuVar29[0xb]);
            }
          }
          ppppppppuVar2 = ppppppppuVar29 + 0xf;
          do {
            cVar4 = *(char *)ppppppppuVar2;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar2,0x10);
            if (bVar8) {
              *(undefined1 *)ppppppppuVar2 = 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (cVar4 == '\0') {
            pppppppuVar35 = ppppppppuVar29[0xd];
            ppppppppuVar29[0xd] = (undefined *******)0x0;
            if (pppppppuVar35 != (undefined *******)0x0) {
                    /* try { // try from 007cbfb0 to 007cbfb3 has its CatchHandler @ 007ccba0 */
              (*(code *)pppppppuVar35[3])(ppppppppuVar29[0xe]);
            }
            *(undefined4 *)ppppppppuVar2 = 0;
          }
          do {
            pppppppuVar35 = *local_d0;
            cVar4 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(local_d0,0x10);
            if (bVar8) {
              *local_d0 = (undefined *******)((long)pppppppuVar35 + -1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((undefined *******)((long)pppppppuVar35 + -1) == (undefined *******)0x0) {
            DataMemoryBarrier(2,1);
                    /* try { // try from 007cbfd4 to 007cbfdb has its CatchHandler @ 007ccc90 */
            <alloc::sync::[n]::alloc::sync::Arc<futures_channel::oneshot::Inner<hyper_util::client::legacy::client::PoolClient<reqwest::async_impl::body::Body>>>>
            ::drop_slow(&local_d0);
          }
          if (cVar23 != '\x02') {
            if (local_230._1_1_ != '\x02') {
                    /* try { // try from 007cbff0 to 007cbff7 has its CatchHandler @ 007ccbe0 */
              FUN_007ca00c(&local_260);
            }
            local_230 = (undefined *******)
                        CONCAT26(local_1e4,CONCAT42(local_1e8,CONCAT11(cVar23,local_1b0)));
            lVar36 = *(long *)PTR_MAX_LEVEL_00b00e60;
            local_260 = local_1e0;
            ppppppppuStack_258 = ppppppppuStack_1d8;
            pppppppuStack_250 = pppppppuStack_1d0;
            pppppppuStack_248 = pppppppuStack_1c8;
            local_240 = local_1c0;
            pppppppuStack_238 = pppppppuStack_1b8;
            goto joined_r0x007cc030;
          }
          if (local_230._1_1_ == '\x02') {
            if (unaff_x22[-1] != (undefined *******)0x0) goto LAB_007cc29c;
            break;
          }
        }
        else {
          lVar36 = *(long *)PTR_MAX_LEVEL_00b00e60;
joined_r0x007cc030:
                    /* try { // try from 007cc058 to 007cc0f3 has its CatchHandler @ 007cccb8 */
          if (((lVar36 == 0) &&
              (((byte)PTR___CALLSITE_00b00f40[0x10] - 1 < 2 ||
               (((byte)PTR___CALLSITE_00b00f40[0x10] != 0 &&
                (cVar23 = <tracing_core::callsite::tracing_core::callsite::DefaultCallsite>::
                          register(PTR___CALLSITE_00b00f40), cVar23 != '\0')))))) &&
             (uVar26 = tracing::__macro_support::__is_enabled
                                 (*(undefined8 *)PTR___CALLSITE_00b00f40), (uVar26 & 1) != 0)) {
            lVar36 = *(long *)PTR___CALLSITE_00b00f40;
            if (*(undefined *********)(lVar36 + 0x38) == (undefined ********)0x0) {
                    /* try { // try from 007cc994 to 007cc9ab has its CatchHandler @ 007ccc18 */
                    /* WARNING: Subroutine does not return */
              core::option::expect_failed
                        (&DAT_002e5a7c,0x22,&PTR_s__root__cargo_registry_src_index__00adf4a0);
            }
            local_c0._8_8_ = *(long *)(lVar36 + 0x48);
            local_c0._0_8_ = *(undefined8 *)(lVar36 + 0x40);
            local_b0 = (undefined *******)0x0;
            pppppppuStack_100 = (undefined *******)(lVar36 + 0x30);
            local_d0 = (undefined ********)*pppppppuStack_100;
            local_160 = (undefined ********)&local_2d0;
            local_158 = (undefined ********)FUN_007c740c;
            ppppppppuStack_118 = (undefined ********)&local_160;
            local_120 = (undefined *******)&DAT_002b89ca;
            local_1a0 = (undefined ********)&local_d0;
            ppppppppuStack_198 = &local_120;
            local_190 = (undefined *******)&DAT_00adf370;
            local_110 = (undefined ********)&local_1a0;
            ppppppppuStack_108 = (undefined ********)&DAT_00000001;
            ppppppppuStack_c8 = *(undefined *********)(lVar36 + 0x38);
            <tracing_core::event::tracing_core::event::Event>::dispatch(lVar36,&local_110);
          }
          ppppppppuVar29 = local_130;
          if (cVar24 != '\0') {
            ppppppppuVar2 = local_130 + 0xc;
            *(undefined4 *)(local_130 + 0x10) = 1;
            do {
              cVar24 = *(char *)ppppppppuVar2;
              cVar23 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar2,0x10);
              if (bVar8) {
                *(undefined1 *)ppppppppuVar2 = 1;
                cVar23 = ExclusiveMonitorsStatus();
              }
            } while (cVar23 != '\0');
            if (cVar24 == '\0') {
              pppppppuVar35 = local_130[10];
              local_130[10] = (undefined *******)0x0;
              *(undefined4 *)(local_130 + 0xc) = 0;
              if (pppppppuVar35 != (undefined *******)0x0) {
                    /* try { // try from 007cbe64 to 007cbe67 has its CatchHandler @ 007ccc2c */
                (*(code *)pppppppuVar35[1])(local_130[0xb]);
              }
            }
            ppppppppuVar2 = ppppppppuVar29 + 0xf;
            do {
              cVar24 = *(char *)ppppppppuVar2;
              cVar23 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar2,0x10);
              if (bVar8) {
                *(undefined1 *)ppppppppuVar2 = 1;
                cVar23 = ExclusiveMonitorsStatus();
              }
            } while (cVar23 != '\0');
            if (cVar24 == '\0') {
              pppppppuVar35 = ppppppppuVar29[0xd];
              ppppppppuVar29[0xd] = (undefined *******)0x0;
              if (pppppppuVar35 != (undefined *******)0x0) {
                    /* try { // try from 007cbe8c to 007cbe8f has its CatchHandler @ 007ccc20 */
                (*(code *)pppppppuVar35[3])(ppppppppuVar29[0xe]);
              }
              *(undefined4 *)ppppppppuVar2 = 0;
            }
            do {
              pppppppuVar35 = *local_130;
              cVar24 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(local_130,0x10);
              if (bVar8) {
                *local_130 = (undefined *******)((long)pppppppuVar35 + -1);
                cVar24 = ExclusiveMonitorsStatus();
              }
            } while (cVar24 != '\0');
            if ((undefined *******)((long)pppppppuVar35 + -1) == (undefined *******)0x0) {
              DataMemoryBarrier(2,1);
                    /* try { // try from 007cbeb0 to 007cbeb7 has its CatchHandler @ 007cccb0 */
              <alloc::sync::[n]::alloc::sync::Arc<futures_channel::oneshot::Inner<hyper_util::client::legacy::client::PoolClient<reqwest::async_impl::body::Body>>>>
              ::drop_slow(&local_130);
            }
          }
        }
        pppppppuVar31 = local_230;
        pppppppuVar35 = unaff_x22[-1];
      }
      unaff_x22 = (undefined ********)&DAT_00000001;
                    /* try { // try from 007cc264 to 007cc273 has its CatchHandler @ 007ccca8 */
      FUN_007afd0c(&local_d0,pppppppuVar37 + 0x11,&local_2d0);
      ppppppppuVar29 = local_d0;
                    /* try { // try from 007cc280 to 007cc287 has its CatchHandler @ 007ccaf8 */
      if ((local_d0 != (undefined ********)0xffffffffffffffff) &&
         (FUN_00792710(&local_d0), ppppppppuVar29 != (undefined ********)0x0)) {
        free(ppppppppuStack_c8);
      }
    }
LAB_007cc29c:
    ppppppppuVar29 = local_2c8;
    bVar38 = local_2d0;
    puVar19 = PTR___CALLSITE_00b00f50;
    auVar12._8_4_ = local_90._8_4_;
    auVar12._0_8_ = local_90._0_8_;
    auVar9._8_8_ = local_c0._8_8_;
    auVar9._0_8_ = local_c0._0_8_;
    if (local_230._1_1_ == '\x02') {
      if (*(long *)PTR_MAX_LEVEL_00b00e60 == 0) {
        if ((byte)PTR___CALLSITE_00b00f50[0x10] - 1 < 2) {
LAB_007cc2d0:
                    /* try { // try from 007cc2d8 to 007cc353 has its CatchHandler @ 007ccca8 */
          iVar25 = tracing::__macro_support::__is_enabled(*(undefined8 *)puVar19);
          if (iVar25 != 0) {
            lVar36 = *(long *)puVar19;
            if (*(undefined *********)(lVar36 + 0x38) == (undefined ********)0x0) {
                    /* try { // try from 007cc9ec to 007cca03 has its CatchHandler @ 007ccca8 */
                    /* WARNING: Subroutine does not return */
              core::option::expect_failed
                        (&DAT_002e5a7c,0x22,&PTR_s__root__cargo_registry_src_index__00adf4b8);
            }
            local_c0._8_8_ = *(undefined8 *)(lVar36 + 0x48);
            local_c0._0_8_ = *(undefined8 *)(lVar36 + 0x40);
            pppppppuStack_100 = (undefined *******)(lVar36 + 0x30);
            local_d0 = (undefined ********)*pppppppuStack_100;
            local_b0 = (undefined *******)0x0;
            local_160 = (undefined ********)&local_2d0;
            local_158 = (undefined ********)FUN_007c740c;
            ppppppppuStack_118 = (undefined ********)&local_160;
            local_120 = (undefined *******)&DAT_002ad50c;
            local_1a0 = (undefined ********)&local_d0;
            ppppppppuStack_198 = &local_120;
            local_190 = (undefined *******)&DAT_00adf370;
            local_110 = (undefined ********)&local_1a0;
            ppppppppuStack_108 = (undefined ********)&DAT_00000001;
            ppppppppuStack_c8 = *(undefined *********)(lVar36 + 0x38);
            <tracing_core::event::tracing_core::event::Event>::dispatch(lVar36,&local_110);
          }
        }
        else {
          local_c0 = auVar9;
          local_90 = auVar12;
          if ((byte)PTR___CALLSITE_00b00f50[0x10] != 0) {
                    /* try { // try from 007cc614 to 007cc61f has its CatchHandler @ 007ccca8 */
            cVar24 = <tracing_core::callsite::tracing_core::callsite::DefaultCallsite>::register
                               (PTR___CALLSITE_00b00f50);
            if (cVar24 != '\0') goto LAB_007cc2d0;
          }
        }
      }
LAB_007cc6bc:
      ppppppppuVar29 = local_2c8;
      if (1 < local_2d0) {
                    /* try { // try from 007cc6d8 to 007cc6df has its CatchHandler @ 007ccb40 */
        (*(code *)(*local_2c8)[4])(local_2c8 + 3,local_2c8[1],local_2c8[2]);
        free(ppppppppuVar29);
      }
    }
    else {
      pppppppuStack_178 = pppppppuStack_238;
      local_180 = local_240;
      ppppppppuStack_198 = ppppppppuStack_258;
      local_1a0 = local_260;
      pppppppuStack_188 = pppppppuStack_248;
      local_190 = pppppppuStack_250;
      local_170 = local_230;
      pppppppuVar35 = local_230;
      if (local_2d0 != 0) {
        if (local_2d0 == 2) {
                    /* try { // try from 007cc384 to 007cc387 has its CatchHandler @ 007ccc60 */
          unaff_x22 = (undefined ********)FUN_007c51f4();
                    /* try { // try from 007cc398 to 007cc3a3 has its CatchHandler @ 007ccae0 */
          (*(code *)**ppppppppuVar29)
                    (&local_d0,ppppppppuVar29 + 3,ppppppppuVar29[1],ppppppppuVar29[2]);
          unaff_x22[1] = (undefined *******)ppppppppuStack_c8;
          *unaff_x22 = (undefined *******)local_d0;
          unaff_x22[3] = (undefined *******)local_c0._8_8_;
          unaff_x22[2] = (undefined *******)local_c0._0_8_;
          pppppppuVar35 = extraout_x8;
        }
        else {
          pppppppuVar35 = (undefined *******)(ulong)local_2cf;
        }
      }
      local_160 = (undefined ********)CONCAT71(CONCAT61(local_160._2_6_,(char)pppppppuVar35),bVar38)
      ;
                    /* try { // try from 007cc3dc to 007cc3e7 has its CatchHandler @ 007ccb74 */
      local_158 = unaff_x22;
      (*(code *)*local_2c0)(local_150,auStack_2a8,uStack_2b8,local_2b0);
                    /* try { // try from 007cc3e8 to 007cc51b has its CatchHandler @ 007ccc60 */
      FUN_007b26ac(&local_110,pppppppuVar37 + 0xb,&local_160);
      ppppppppuVar29 = ppppppppuStack_108;
      if ((char)local_110 != -1) {
        local_120._0_7_ = (undefined7)((ulong)local_110 >> 8);
        local_b0 = pppppppuStack_f0;
        local_c0._8_8_ = local_f8;
        local_d0 = local_110;
        local_c0._0_8_ = pppppppuStack_100;
        ppppppppuStack_c8 = ppppppppuStack_108;
        pppppppuStack_a8 = local_e8;
        local_a0 = (undefined *******)0x0;
        local_98 = (undefined ******)0x8;
        local_90._0_8_ = 0;
        ppppppppuVar29 = (undefined ********)FUN_007b346c(local_e0,local_d8,&local_d0);
      }
      puVar20 = PTR___CALLSITE_00b00f60;
      puVar19 = PTR___CALLSITE_00b00f58;
      if (ppppppppuVar29[-1] < pppppppuVar37[0x19]) {
                    /* try { // try from 007cc95c to 007cc967 has its CatchHandler @ 007ccc60 */
        if (((*(ulong *)PTR_MAX_LEVEL_00b00e60 < 2) &&
            (((byte)PTR___CALLSITE_00b00f58[0x10] - 1 < 2 ||
             (((byte)PTR___CALLSITE_00b00f58[0x10] != 0 &&
              (cVar24 = <tracing_core::callsite::tracing_core::callsite::DefaultCallsite>::register
                                  (PTR___CALLSITE_00b00f58), cVar24 != '\0')))))) &&
           (uVar26 = tracing::__macro_support::__is_enabled(*(undefined8 *)puVar19),
           (uVar26 & 1) != 0)) {
          lVar36 = *(long *)puVar19;
          if (*(undefined *********)(lVar36 + 0x38) == (undefined ********)0x0) {
            ppuVar30 = &PTR_s__root__cargo_registry_src_index__00adf4d0;
            goto LAB_007cca1c;
          }
          local_c0._8_8_ = *(long *)(lVar36 + 0x48);
          local_c0._0_8_ = *(undefined8 *)(lVar36 + 0x40);
          local_b0 = (undefined *******)0x0;
          pppppppuStack_100 = (undefined *******)(lVar36 + 0x30);
          local_d0 = (undefined ********)*pppppppuStack_100;
          local_120 = (undefined *******)&local_2d0;
          ppppppppuStack_118 = (undefined ********)FUN_007c740c;
          pppppppuStack_128 = (undefined *******)&local_120;
          local_130 = (undefined ********)&DAT_002ae44a;
          local_160 = (undefined ********)&local_d0;
          local_158 = (undefined ********)&local_130;
          local_150[0] = &DAT_00adf370;
          local_110 = (undefined ********)&local_160;
          ppppppppuStack_108 = (undefined ********)0x1;
          ppppppppuStack_c8 = *(undefined *********)(lVar36 + 0x38);
          <tracing_core::event::tracing_core::event::Event>::dispatch(lVar36,&local_110);
        }
        local_e8 = pppppppuStack_178;
        pppppppuStack_f0 = local_180;
        ppppppppuStack_108 = ppppppppuStack_198;
        local_110 = local_1a0;
        local_f8 = pppppppuStack_188;
        pppppppuStack_100 = local_190;
        local_e0 = local_170;
                    /* try { // try from 007cc648 to 007cc64b has its CatchHandler @ 007ccb14 */
        auVar42 = <std::time::std::time::Instant>::now();
        local_98 = auVar42._0_8_;
        local_90._0_4_ = auVar42._8_4_;
        pppppppuStack_a8 = local_e8;
        local_b0 = pppppppuStack_f0;
        ppppppppuStack_c8 = ppppppppuStack_108;
        local_d0 = local_110;
        local_c0._8_8_ = local_f8;
        local_c0._0_8_ = pppppppuStack_100;
        local_a0 = local_e0;
        pppppppuVar35 = ppppppppuVar29[-1];
        if (pppppppuVar35 == ppppppppuVar29[-3]) {
                    /* try { // try from 007cc678 to 007cc67f has its CatchHandler @ 007cca9c */
          <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<hyper_util[52a210df7efc1bae]::client::legacy::pool::Idle<hyper_util[52a210df7efc1bae]::client::legacy::client::PoolClient<reqwest[6fed810f3e38d558]::async_impl::body::Body>>>>
          ::grow_one(ppppppppuVar29 + -3);
        }
        auVar14._8_4_ = local_90._8_4_;
        auVar14._0_8_ = local_90._0_8_;
        auVar13._8_4_ = local_90._8_4_;
        auVar13._0_8_ = local_90._0_8_;
        auVar11._8_8_ = local_c0._8_8_;
        auVar11._0_8_ = local_c0._0_8_;
        auVar10._8_8_ = local_c0._8_8_;
        auVar10._0_8_ = local_c0._0_8_;
        pppppppuVar31 = ppppppppuVar29[-2] + (long)pppppppuVar35 * 9;
        pppppppuVar31[1] = (undefined ******)ppppppppuStack_c8;
        *pppppppuVar31 = (undefined ******)local_d0;
        pppppppuVar31[8] = (undefined ******)local_90._0_8_;
        pppppppuVar31[5] = (undefined ******)pppppppuStack_a8;
        pppppppuVar31[4] = (undefined ******)local_b0;
        pppppppuVar31[7] = local_98;
        pppppppuVar31[6] = (undefined ******)local_a0;
        pppppppuVar31[3] = (undefined ******)local_c0._8_8_;
        pppppppuVar31[2] = (undefined ******)local_c0._0_8_;
        ppppppppuVar29[-1] = (undefined *******)((long)pppppppuVar35 + 1);
        if (((pppppppuVar37[0x1a] == (undefined ******)0x0) &&
            (iVar25 = *(int *)(pppppppuVar37 + 0x1c), local_c0 = auVar10, local_90 = auVar13,
            iVar25 != -1)) &&
           (ppppppppuVar29 = (undefined ********)pppppppuVar37[3], local_c0 = auVar11,
           local_90 = auVar14, ppppppppuVar29 != (undefined ********)0x0)) {
          pppppppuVar35 = (undefined *******)pppppppuVar37[0x1b];
          do {
            pppppppuVar31 = *ppppppppuVar29;
            cVar24 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar29,0x10);
            if (bVar8) {
              *ppppppppuVar29 = (undefined *******)((long)pppppppuVar31 + 1);
              cVar24 = ExclusiveMonitorsStatus();
            }
          } while (cVar24 != '\0');
          if ((long)pppppppuVar31 < 0) {
LAB_007cca2c:
                    /* WARNING: Does not return */
            pcVar22 = (code *)SoftwareBreakpoint(1,0x7cca30);
            (*pcVar22)();
          }
          local_158 = (undefined ********)pppppppuVar37[4];
          local_c0._0_8_ = (undefined *******)0x0;
          local_b0 = (undefined *******)((ulong)local_b0 & 0xffffffffffffff00);
          pppppppuStack_a8 = (undefined *******)0x0;
          ppppppppuStack_c8 = (undefined ********)&DAT_00000001;
          local_d0 = (undefined ********)&DAT_00000001;
          local_98 = (undefined ******)((ulong)local_98 & 0xffffffffffffff00);
          local_90._0_8_ = local_90._0_8_ & 0xffffffffffff0000;
          local_160 = ppppppppuVar29;
          __rustc::__rust_no_alloc_shim_is_unstable_v2();
          pppppppuVar31 = (undefined *******)FUN_004b25a4(0x48,8);
          ppppppppuVar21 = local_158;
          ppppppppuVar2 = local_160;
          if (pppppppuVar31 == (undefined *******)0x0) {
                    /* try { // try from 007cc974 to 007cc97f has its CatchHandler @ 007cccc4 */
                    /* WARNING: Subroutine does not return */
            alloc::alloc::handle_alloc_error(8,0x48);
          }
          pppppppuVar31[5] = (undefined ******)pppppppuStack_a8;
          pppppppuVar31[4] = (undefined ******)local_b0;
          pppppppuVar31[7] = local_98;
          pppppppuVar31[6] = (undefined ******)local_a0;
          pppppppuVar31[8] = (undefined ******)local_90._0_8_;
          pppppppuVar31[1] = (undefined ******)ppppppppuStack_c8;
          *pppppppuVar31 = (undefined ******)local_d0;
          pppppppuVar31[3] = (undefined ******)local_c0._8_8_;
          pppppppuVar31[2] = (undefined ******)local_c0._0_8_;
          do {
            ppppppuVar34 = *pppppppuVar31;
            cVar24 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(pppppppuVar31,0x10);
            if (bVar8) {
              *pppppppuVar31 = (undefined ******)((long)ppppppuVar34 + 1);
              cVar24 = ExclusiveMonitorsStatus();
            }
          } while (cVar24 != '\0');
          if ((long)ppppppuVar34 < 0) goto LAB_007cca2c;
          pppppppuVar37[0x1a] = (undefined ******)pppppppuVar31;
          do {
            pppppppuVar32 = *ppppppppuVar29;
            cVar24 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar29,0x10);
            if (bVar8) {
              *ppppppppuVar29 = (undefined *******)((long)pppppppuVar32 + 1);
              cVar24 = ExclusiveMonitorsStatus();
            }
          } while (cVar24 != '\0');
          local_120 = pppppppuVar31;
          if ((long)pppppppuVar32 < 0) goto LAB_007cca2c;
          local_110 = local_160;
          ppppppppuStack_108 = local_158;
                    /* try { // try from 007cc858 to 007cc87f has its CatchHandler @ 007cca6c */
          auVar42 = <std::time::std::time::Instant>::now();
          auVar41 = <std::time::std::time::Instant>::now();
          auVar41 = <hyper_util::common::timer::Timer_as_hyper::rt::timer::Timer>::sleep_until
                              (&local_160,auVar41._0_8_,auVar41._8_8_ & 0xffffffff);
                    /* try { // try from 007cc880 to 007cc88f has its CatchHandler @ 007cca58 */
          local_b0 = (undefined *******)FUN_0079dc04(&local_2d8);
          local_d0 = ppppppppuVar2;
          ppppppppuStack_c8 = ppppppppuVar21;
          local_98 = (undefined ******)CONCAT44(local_98._4_4_,iVar25);
                    /* try { // try from 007cc8b0 to 007cc8bb has its CatchHandler @ 007cca50 */
          pppppppuStack_a8 = pppppppuVar31;
          local_a0 = pppppppuVar35;
          local_90 = auVar42;
          local_c0 = auVar41;
          FUN_0079fff8(pppppppuVar37 + 0x17,&local_d0);
          do {
            pppppppuVar37 = *local_160;
            cVar24 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(local_160,0x10);
            if (bVar8) {
              *local_160 = (undefined *******)((long)pppppppuVar37 + -1);
              cVar24 = ExclusiveMonitorsStatus();
            }
          } while (cVar24 != '\0');
          if ((undefined *******)((long)pppppppuVar37 + -1) == (undefined *******)0x0) {
            DataMemoryBarrier(2,1);
                    /* try { // try from 007cc8d8 to 007cc8df has its CatchHandler @ 007cca48 */
            <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>
            ::drop_slow(&local_160);
          }
        }
        goto LAB_007cc6bc;
      }
                    /* try { // try from 007cc8e8 to 007cc8f3 has its CatchHandler @ 007ccc60 */
                    /* try { // try from 007cc58c to 007cc607 has its CatchHandler @ 007ccc60 */
      if ((*(ulong *)PTR_MAX_LEVEL_00b00e60 == 0) &&
         ((((byte)PTR___CALLSITE_00b00f60[0x10] - 1 < 2 ||
           (((byte)PTR___CALLSITE_00b00f60[0x10] != 0 &&
            (cVar24 = <tracing_core::callsite::tracing_core::callsite::DefaultCallsite>::register
                                (PTR___CALLSITE_00b00f60), cVar24 != '\0')))) &&
          (uVar26 = tracing::__macro_support::__is_enabled(*(undefined8 *)puVar20),
          (uVar26 & 1) != 0)))) {
        lVar36 = *(long *)puVar20;
        if (*(undefined *********)(lVar36 + 0x38) == (undefined ********)0x0) {
          ppuVar30 = &PTR_s__root__cargo_registry_src_index__00adf4e8;
LAB_007cca1c:
                    /* try { // try from 007cca1c to 007cca2b has its CatchHandler @ 007ccc60 */
                    /* WARNING: Subroutine does not return */
          core::option::expect_failed(&DAT_002e5a7c,0x22,ppuVar30);
        }
        local_c0._8_8_ = *(long *)(lVar36 + 0x48);
        local_c0._0_8_ = *(undefined8 *)(lVar36 + 0x40);
        local_b0 = (undefined *******)0x0;
        pppppppuStack_100 = (undefined *******)(lVar36 + 0x30);
        local_d0 = (undefined ********)*pppppppuStack_100;
        local_120 = (undefined *******)&local_2d0;
        ppppppppuStack_118 = (undefined ********)FUN_007c740c;
        pppppppuStack_128 = (undefined *******)&local_120;
        local_130 = (undefined ********)&DAT_002a78e7;
        local_160 = (undefined ********)&local_d0;
        local_158 = (undefined ********)&local_130;
        local_150[0] = &DAT_00adf370;
        local_110 = (undefined ********)&local_160;
        ppppppppuStack_108 = (undefined ********)&DAT_00000001;
        ppppppppuStack_c8 = *(undefined *********)(lVar36 + 0x38);
        <tracing_core::event::tracing_core::event::Event>::dispatch(lVar36,&local_110);
      }
                    /* try { // try from 007cc524 to 007cc52f has its CatchHandler @ 007ccca8 */
      FUN_007ca00c(&local_1a0);
      ppppppppuVar29 = local_2c8;
      if (1 < local_2d0) {
                    /* try { // try from 007cc54c to 007cc553 has its CatchHandler @ 007ccab0 */
        (*(code *)(*local_2c8)[4])(local_2c8 + 3,local_2c8[1],local_2c8[2]);
        free(ppppppppuVar29);
      }
    }
                    /* try { // try from 007cc704 to 007cc70f has its CatchHandler @ 007ccc94 */
    (*(code *)local_2c0[4])(auStack_2a8,uStack_2b8,local_2b0);
    if (((local_314 & 1) == 0) &&
       ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) != 0)) {
      uVar26 = std::panicking::panic_count::is_zero_slow_path();
      if ((uVar26 & 1) == 0) {
        *local_320 = 1;
      }
    }
    do {
      iVar25 = *(int *)pppppppuVar1;
      cVar24 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(pppppppuVar1,0x10);
      if (bVar8) {
        *(undefined4 *)pppppppuVar1 = 0;
        cVar24 = ExclusiveMonitorsStatus();
      }
    } while (cVar24 != '\0');
    if (iVar25 == 2) {
                    /* try { // try from 007cc91c to 007cc92b has its CatchHandler @ 007cca30 */
      <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(pppppppuVar1);
    }
    bVar8 = false;
  }
  else {
                    /* try { // try from 007cbc34 to 007cbc6f has its CatchHandler @ 007cca3c */
    local_314 = std::panicking::panic_count::is_zero_slow_path();
    if (*(char *)((long)pppppppuVar37 + 0x14) == '\0') {
      local_314 = local_314 ^ 1;
      local_2cf = (byte)local_314;
      bVar38 = *(byte *)param_1;
      goto joined_r0x007cbc8c;
    }
    if (local_314 != 0) goto LAB_007cbb68;
LAB_007cbb74:
    do {
      iVar25 = *(int *)pppppppuVar1;
      cVar24 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(pppppppuVar1,0x10);
      if (bVar8) {
        *(undefined4 *)pppppppuVar1 = 0;
        cVar24 = ExclusiveMonitorsStatus();
      }
    } while (cVar24 != '\0');
    if (iVar25 == 2) {
      <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(pppppppuVar1);
    }
    bVar8 = true;
  }
  do {
    ppppppuVar34 = *local_2d8;
    cVar24 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(local_2d8,0x10);
    if (bVar6) {
      *local_2d8 = (undefined ******)((long)ppppppuVar34 + -1);
      cVar24 = ExclusiveMonitorsStatus();
    }
  } while (cVar24 != '\0');
  if ((undefined ******)((long)ppppppuVar34 + -1) == (undefined ******)0x0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 007cc760 to 007cc767 has its CatchHandler @ 007ccc9c */
    <alloc[c1f8e832b0d782c7]::sync::Arc<std[17aff9129faa4dc5]::sync::poison::mutex::Mutex<hyper_util[52a210df7efc1bae]::client::legacy::pool::PoolInner<hyper_util[52a210df7efc1bae]::client::legacy::client::PoolClient<reqwest[6fed810f3e38d558]::async_impl::body::Body>,(http[b87e90c26fe47eb4]::uri::scheme::Scheme,http[b87e90c26fe47eb4]::uri::authority::Authority)>>>>
    ::drop_slow(&local_2d8);
  }
  if (!bVar8) {
    return;
  }
LAB_007cc76c:
  FUN_007ca00c(&local_310);
  return;
}


// ===== 007ccdac  FUN_007ccdac =====

/* WARNING: Type propagation algorithm not settling */

void FUN_007ccdac(undefined8 *param_1,long ****param_2,undefined8 *param_3)

{
  long ***ppplVar1;
  long ***ppplVar2;
  bool bVar3;
  char cVar4;
  void *__ptr;
  undefined5 uVar5;
  undefined6 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long ****pppplVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  code *pcVar12;
  bool bVar13;
  char cVar14;
  byte bVar15;
  int iVar16;
  ulong uVar17;
  ulong uVar18;
  void *pvVar19;
  long ****pppplVar20;
  long ****pppplVar21;
  undefined1 extraout_w8;
  ulong uVar22;
  ulong uVar23;
  long ***ppplVar24;
  ulong extraout_x8;
  long lVar25;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  long **pplVar26;
  long lVar27;
  long *plVar28;
  long **pplVar29;
  undefined **ppuVar30;
  uint uVar31;
  long ****pppplVar32;
  long ****pppplVar33;
  undefined8 *puVar34;
  undefined1 uVar35;
  long ***ppplVar36;
  byte bVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined1 auVar40 [16];
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined7 uStack_2a8;
  undefined1 uStack_2a1;
  undefined7 local_2a0;
  undefined1 uStack_299;
  undefined7 uStack_298;
  undefined1 uStack_291;
  char local_290;
  undefined7 uStack_28f;
  long ***local_280;
  long **pplStack_278;
  long **pplStack_270;
  long **pplStack_268;
  long **local_260;
  long **pplStack_258;
  undefined8 local_250;
  long lStack_248;
  long **local_240;
  undefined4 local_238;
  long ***local_230;
  long **pplStack_228;
  long **pplStack_220;
  long **pplStack_218;
  long **local_210;
  long **pplStack_208;
  undefined8 local_200;
  undefined8 local_1f0;
  long ****local_1e8;
  undefined8 *local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  long ****local_1c0;
  long **local_1b8;
  long ****local_1b0;
  long **pplStack_1a8;
  long **local_1a0;
  long **pplStack_198;
  long **local_190;
  long **pplStack_188;
  undefined8 local_180;
  long lStack_178;
  long local_170;
  undefined8 local_168;
  long ****local_160;
  undefined *local_158;
  long ****local_150;
  long *****ppppplStack_148;
  long ****local_140;
  code *local_138;
  undefined8 local_130;
  byte bStack_128;
  undefined7 uStack_127;
  undefined1 local_120;
  undefined7 uStack_11f;
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined1 local_110;
  undefined7 uStack_10f;
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined1 local_100;
  char cStack_ff;
  undefined4 uStack_fe;
  undefined2 uStack_fa;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined1 uStack_f0;
  undefined1 uStack_ef;
  undefined2 uStack_ee;
  undefined4 uStack_ec;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 local_e0;
  undefined7 uStack_df;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  long ***ppplStack_c8;
  uint local_c0;
  undefined4 local_bc;
  undefined1 local_b8;
  undefined7 uStack_b7;
  undefined1 local_b0;
  undefined7 uStack_af;
  undefined8 local_a0;
  long *****ppppplStack_98;
  undefined8 *local_90;
  
  pppplVar33 = param_2 + 7;
  ppplVar36 = *pppplVar33;
  *pppplVar33 = (long ***)0x0;
  if (ppplVar36 == (long ***)0x0) {
LAB_007cd120:
    pppplVar32 = param_2 + 6;
    ppplVar36 = *pppplVar32;
    if (ppplVar36 != (long ***)0x0) {
      ppplVar1 = ppplVar36 + 2;
      do {
        if (*(int *)ppplVar1 != 0) {
          ClearExclusiveLocal();
          <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                    (ppplVar36 + 2);
          uVar22 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
          goto joined_r0x007cdd10;
        }
        cVar14 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(ppplVar1,0x10);
        if (bVar13) {
          *(int *)ppplVar1 = 1;
          cVar14 = ExclusiveMonitorsStatus();
        }
      } while (cVar14 != '\0');
      uVar22 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
joined_r0x007cdd10:
      if ((uVar22 & 0x7fffffffffffffff) == 0) {
        bVar15 = 0;
        cVar14 = *(char *)((long)ppplVar36 + 0x14);
      }
      else {
        bVar15 = std::panicking::panic_count::is_zero_slow_path();
        bVar15 = bVar15 ^ 1;
        cVar14 = *(char *)((long)ppplVar36 + 0x14);
      }
      if (cVar14 != '\0') {
                    /* try { // try from 007cdd2c to 007cdd4f has its CatchHandler @ 007cdfbc */
        bStack_128 = bVar15;
        local_130 = ppplVar1;
                    /* WARNING: Subroutine does not return */
        core::result::unwrap_failed
                  (&DAT_002e5a9e,0x2b,&local_130,&PTR_FUN_00adf390,
                   &PTR_s__root__cargo_registry_src_index__00adf518);
      }
      local_240 = ppplVar36[0x1b];
      local_238 = *(undefined4 *)(ppplVar36 + 0x1c);
      if (ppplVar36[0xe] != (long **)0x0) {
                    /* try { // try from 007cd18c to 007cd197 has its CatchHandler @ 007cdf0c */
        uVar17 = FUN_007c4ecc(ppplVar36 + 0xf,param_2);
        pplVar26 = ppplVar36[0xb];
        pplVar29 = ppplVar36[0xc];
        lVar27 = 0;
        bVar37 = (byte)(uVar17 >> 0x39);
        uVar38 = CONCAT17(bVar37,CONCAT16(bVar37,CONCAT15(bVar37,CONCAT14(bVar37,CONCAT13(bVar37,
                                                  CONCAT12(bVar37,CONCAT11(bVar37,bVar37)))))));
        uVar17 = uVar17 & (ulong)pplVar29;
        uVar39 = *(undefined8 *)((long)pplVar26 + uVar17);
        uVar22 = NEON_cmeq(uVar39,uVar38,1);
        uVar22 = uVar22 & 0x8080808080808080;
        while( true ) {
          for (; uVar22 == 0; uVar22 = uVar22 & 0x8080808080808080) {
            uVar39 = NEON_cmeq(uVar39,0xffffffffffffffff,1);
            bVar37 = NEON_umaxv(uVar39,1);
            if ((bVar37 & 1) != 0) goto LAB_007cd4f0;
            lVar27 = lVar27 + 8;
            uVar17 = uVar17 + lVar27 & (ulong)pplVar29;
            uVar39 = *(undefined8 *)((long)pplVar26 + uVar17);
            uVar22 = NEON_cmeq(uVar39,uVar38,1);
          }
          uVar23 = (uVar22 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar22 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
          uVar23 = uVar17 + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3) & (ulong)pplVar29
          ;
                    /* try { // try from 007cd1e8 to 007cd20b has its CatchHandler @ 007cded8 */
          iVar16 = <http::uri::scheme::Scheme_as_core::cmp::PartialEq>::eq
                             (param_2,pplVar26 + uVar23 * -9 + -9);
          if ((iVar16 != 0) &&
             (uVar18 = <http::uri::authority::Authority_as_core::cmp::PartialEq>::eq
                                 (param_2 + 2,pplVar26 + uVar23 * -9 + -7),
             puVar8 = PTR___CALLSITE_00b00f78, puVar7 = PTR_MAX_LEVEL_00b00e60, (uVar18 & 1) != 0))
          break;
          uVar22 = uVar22 - 1 & uVar22;
        }
                    /* try { // try from 007cd7f0 to 007cd7fb has its CatchHandler @ 007cdf0c */
                    /* try { // try from 007cd5b8 to 007cd647 has its CatchHandler @ 007cdf0c */
        if ((*(long *)PTR_MAX_LEVEL_00b00e60 == 0) &&
           ((((byte)PTR___CALLSITE_00b00f78[0x10] - 1 < 2 ||
             (((byte)PTR___CALLSITE_00b00f78[0x10] != 0 &&
              (cVar14 = <tracing_core::callsite::tracing_core::callsite::DefaultCallsite>::register
                                  (PTR___CALLSITE_00b00f78), cVar14 != '\0')))) &&
            (uVar22 = tracing::__macro_support::__is_enabled(*(undefined8 *)puVar8),
            (uVar22 & 1) != 0)))) {
          lVar27 = *(long *)puVar8;
          lVar25 = *(long *)(lVar27 + 0x38);
          if (lVar25 == 0) {
                    /* try { // try from 007cdda8 to 007cddbf has its CatchHandler @ 007cdf0c */
                    /* WARNING: Subroutine does not return */
            core::option::expect_failed
                      (&DAT_002e5a7c,0x22,&PTR_s__root__cargo_registry_src_index__00adf358);
          }
          local_110 = 0;
          uStack_10f = 0;
          local_1e0 = (undefined8 *)(lVar27 + 0x30);
          uStack_118 = (undefined1)*(undefined8 *)(lVar27 + 0x48);
          uStack_117 = (undefined7)((ulong)*(undefined8 *)(lVar27 + 0x48) >> 8);
          local_120 = (undefined1)*(undefined8 *)(lVar27 + 0x40);
          uStack_11f = (undefined7)((ulong)*(undefined8 *)(lVar27 + 0x40) >> 8);
          local_130._0_4_ = (undefined4)*local_1e0;
          local_130._4_4_ = (undefined4)((ulong)*local_1e0 >> 0x20);
          bStack_128 = (byte)lVar25;
          uStack_127 = (undefined7)((ulong)lVar25 >> 8);
          pplStack_1a8 = (long **)FUN_007c740c;
          local_1a0 = (long **)&local_240;
          pplStack_198 = (long **)FUN_007cb7ac;
          local_160 = (long ****)&local_1b0;
          local_168 = (long ****)&DAT_002aa10f;
          local_a0 = (long **)&local_130;
          ppppplStack_98 = (long *****)&local_168;
          local_90 = (undefined8 *)&DAT_00adf370;
          local_1f0 = (long ***)&local_a0;
          local_1e8 = (long ****)&DAT_00000001;
          local_1b0 = param_2;
          <tracing_core::event::tracing_core::event::Event>::dispatch(lVar27,&local_1f0);
        }
        local_1b8 = pplVar26 + uVar23 * -9 + -3;
        pplVar26 = pplVar26 + uVar23 * -9 + -1;
        plVar28 = *pplVar26;
        local_1c0 = param_2;
        if (plVar28 != (long *)0x0) {
          ppuVar30 = &PTR_s__root__cargo_registry_src_index__00adf428;
          pplVar29 = pplVar26;
          goto LAB_007cd2a4;
        }
      }
      goto LAB_007cd4f0;
    }
    goto LAB_007cdbe0;
  }
  local_1f0 = ppplVar36;
  if (*(char *)(ppplVar36 + 0x10) == '\0') {
                    /* try { // try from 007cce14 to 007cce3b has its CatchHandler @ 007cdf18 */
    auVar40 = (*(code *)**(undefined8 **)*param_3)(((undefined8 *)*param_3)[1]);
    ppplVar1 = ppplVar36 + 0xc;
    do {
      cVar14 = *(char *)ppplVar1;
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(ppplVar1,0x10);
      if (bVar13) {
        *(char *)ppplVar1 = '\x01';
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (cVar14 != '\0') {
      (**(code **)(auVar40._0_8_ + 0x18))(auVar40._8_8_);
      goto LAB_007cce74;
    }
    if (ppplVar36[10] != (long **)0x0) {
                    /* try { // try from 007cce58 to 007cce5b has its CatchHandler @ 007cde94 */
      (*(code *)ppplVar36[10][3])(ppplVar36[0xb]);
    }
    *(undefined1 (*) [16])(ppplVar36 + 10) = auVar40;
    *(undefined4 *)(ppplVar36 + 0xc) = 0;
    if (*(char *)(ppplVar36 + 0x10) != '\0') goto LAB_007cce74;
LAB_007ccef0:
    *pppplVar33 = local_1f0;
    uVar35 = 0xff;
    goto LAB_007cdbf8;
  }
LAB_007cce74:
  ppplVar1 = ppplVar36 + 9;
  do {
    cVar14 = *(char *)ppplVar1;
    cVar4 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(ppplVar1,0x10);
    if (bVar13) {
      *(char *)ppplVar1 = '\x01';
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  uVar31 = 2;
  if (cVar14 == '\0') {
    cVar14 = *(char *)((long)ppplVar36 + 0x41);
    *(undefined1 *)((long)ppplVar36 + 0x41) = 2;
    if (cVar14 == '\x02') {
      *(undefined4 *)ppplVar1 = 0;
      uVar35 = 1;
    }
    else {
      pplStack_278 = ppplVar36[3];
      local_280 = (long ***)ppplVar36[2];
      pplStack_268 = ppplVar36[5];
      pplStack_270 = ppplVar36[4];
      local_200 = CONCAT71(local_200._1_7_,*(undefined1 *)(ppplVar36 + 8));
      pplStack_258 = ppplVar36[7];
      local_260 = ppplVar36[6];
      uVar6 = *(undefined6 *)((long)ppplVar36 + 0x42);
      local_168 = (long ****)CONCAT26(local_168._6_2_,uVar6);
      pppplVar32 = local_168;
      *(undefined4 *)(ppplVar36 + 9) = 0;
      if (cVar14 == -1) goto LAB_007ccef0;
      local_168._4_2_ = (undefined2)((uint6)uVar6 >> 0x20);
      local_168._0_4_ = (undefined4)uVar6;
      local_250 = CONCAT26(local_168._4_2_,
                           CONCAT42((undefined4)local_168,
                                    CONCAT11(cVar14,*(undefined1 *)(ppplVar36 + 8))));
                    /* try { // try from 007ccf30 to 007ccf37 has its CatchHandler @ 007cdea8 */
      local_230 = local_280;
      pplStack_228 = pplStack_278;
      pplStack_220 = pplStack_270;
      pplStack_218 = pplStack_268;
      local_210 = local_260;
      pplStack_208 = pplStack_258;
      local_168 = pppplVar32;
      uVar22 = <hyper_util::client::legacy::connect::hyper_util::client::legacy::connect::PoisonPill>
               ::poisoned(&pplStack_258);
      if (((uVar22 & 1) == 0) && (local_280[2] == (long **)0x1)) {
        pplStack_1a8 = pplStack_228;
        local_1b0 = (long ****)local_230;
        pplStack_198 = pplStack_218;
        local_1a0 = pplStack_220;
        pplStack_188 = pplStack_208;
        local_190 = local_210;
        local_180 = CONCAT26(local_168._4_2_,
                             CONCAT42((undefined4)local_168,CONCAT11(cVar14,(undefined1)local_200)))
        ;
                    /* try { // try from 007ccf7c to 007ccf8f has its CatchHandler @ 007cde3c */
        FUN_007cacb0(&local_130,param_2 + 6,param_2,&local_1b0);
        uStack_2c8 = CONCAT17(uStack_f0,uStack_f7);
        local_2d0 = CONCAT17(uStack_f8,CONCAT25(uStack_fa,CONCAT41(uStack_fe,cStack_ff)));
        uStack_2b8 = CONCAT17(local_e0,uStack_e7);
        local_2c0 = CONCAT17(uStack_e8,CONCAT43(uStack_ec,CONCAT21(uStack_ee,uStack_ef)));
        local_2b0 = CONCAT17(uStack_d8,uStack_df);
        uStack_2f8 = CONCAT17(local_120,uStack_127);
        local_300 = CONCAT17(bStack_128,CONCAT43(local_130._4_4_,local_130._1_3_));
        uStack_2a8 = uStack_d7;
        uVar31 = local_c0 & 0xff;
        uStack_299 = SUB81(ppplStack_c8,0);
        uStack_298 = (undefined7)((ulong)ppplStack_c8 >> 8);
        uStack_2a1 = uStack_d0;
        local_2a0 = uStack_cf;
        uStack_2e8 = CONCAT17(local_110,uStack_117);
        local_2f0 = CONCAT17(uStack_118,uStack_11f);
        uStack_2d8 = CONCAT17(local_100,uStack_107);
        local_2e0 = CONCAT17(uStack_108,uStack_10f);
        uVar5 = CONCAT14(local_a0._7_1_,local_bc);
        local_a0 = (long **)CONCAT44((int)((uint5)uVar5 >> 8),
                                     CONCAT13((undefined1)local_bc,local_c0._1_3_));
        uVar35 = (char)local_130;
      }
      else {
                    /* try { // try from 007ccfe0 to 007ccfe7 has its CatchHandler @ 007cdf18 */
        FUN_007ca00c(&local_280);
        uVar35 = 2;
      }
    }
  }
  else {
    uVar35 = 1;
  }
  ppplVar1 = local_1f0;
  ppplVar36 = local_1f0 + 0xc;
  *(undefined4 *)(local_1f0 + 0x10) = 1;
  do {
    cVar14 = *(char *)ppplVar36;
    cVar4 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(ppplVar36,0x10);
    if (bVar13) {
      *(char *)ppplVar36 = '\x01';
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (cVar14 == '\0') {
    pplVar26 = local_1f0[10];
    local_1f0[10] = (long **)0x0;
    *(undefined4 *)(local_1f0 + 0xc) = 0;
    if (pplVar26 != (long **)0x0) {
                    /* try { // try from 007cd024 to 007cd05b has its CatchHandler @ 007cdedc */
      (*(code *)pplVar26[3])(local_1f0[0xb]);
    }
  }
  ppplVar36 = ppplVar1 + 0xf;
  do {
    cVar14 = *(char *)ppplVar36;
    cVar4 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(ppplVar36,0x10);
    if (bVar13) {
      *(char *)ppplVar36 = '\x01';
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (cVar14 == '\0') {
    pplVar26 = ppplVar1[0xd];
    ppplVar1[0xd] = (long **)0x0;
    *(undefined4 *)(ppplVar1 + 0xf) = 0;
    if (pplVar26 != (long **)0x0) {
      (*(code *)pplVar26[1])(ppplVar1[0xe]);
    }
  }
  do {
    pplVar26 = *local_1f0;
    cVar14 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(local_1f0,0x10);
    if (bVar13) {
      *local_1f0 = (long **)((long)pplVar26 + -1);
      cVar14 = ExclusiveMonitorsStatus();
    }
  } while (cVar14 != '\0');
  if ((long **)((long)pplVar26 + -1) == (long **)0x0) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<futures_channel::oneshot::Inner<hyper_util::client::legacy::client::PoolClient<reqwest::async_impl::body::Body>>>>
    ::drop_slow(&local_1f0);
  }
  if (uVar31 == 2) {
    *(undefined1 *)param_1 = uVar35;
    goto LAB_007cdbf4;
  }
  if (uVar31 == 0xff) goto LAB_007cd120;
  if (uVar31 != 0xfe) {
    uVar10 = (undefined4)local_a0;
    *(undefined1 *)param_1 = uVar35;
    *(undefined8 *)((long)param_1 + 0x39) = uStack_2c8;
    *(undefined8 *)((long)param_1 + 0x31) = local_2d0;
    *(undefined8 *)((long)param_1 + 0x49) = uStack_2b8;
    *(undefined8 *)((long)param_1 + 0x41) = local_2c0;
    *(ulong *)((long)param_1 + 0x59) = CONCAT17(uStack_2a1,uStack_2a8);
    *(undefined8 *)((long)param_1 + 0x51) = local_2b0;
    param_1[0xd] = CONCAT71(uStack_298,uStack_299);
    param_1[0xc] = CONCAT71(local_2a0,uStack_2a1);
    *(undefined8 *)((long)param_1 + 9) = uStack_2f8;
    *(undefined8 *)((long)param_1 + 1) = local_300;
    *(char *)(param_1 + 0xe) = (char)uVar31;
    *(undefined8 *)((long)param_1 + 0x19) = uStack_2e8;
    *(undefined8 *)((long)param_1 + 0x11) = local_2f0;
    *(undefined8 *)((long)param_1 + 0x29) = uStack_2d8;
    *(undefined8 *)((long)param_1 + 0x21) = local_2e0;
    *(undefined4 *)((long)param_1 + 0x74) = local_a0._3_4_;
    *(undefined4 *)((long)param_1 + 0x71) = uVar10;
    return;
  }
  goto LAB_007cdbe8;
LAB_007cd2a4:
  do {
    *pplVar29 = (long *)((long)plVar28 + -1);
    plVar28 = local_1b8[1] + ((long)plVar28 + -1) * 9;
    pplStack_198 = (long **)plVar28[3];
    local_1a0 = (long **)plVar28[2];
    pplStack_188 = (long **)plVar28[5];
    local_190 = (long **)plVar28[4];
    lStack_178 = plVar28[7];
    local_180 = plVar28[6];
    local_170 = plVar28[8];
    pplStack_1a8 = (long **)plVar28[1];
    local_1b0 = (long ****)*plVar28;
    uStack_108 = SUB81(pplStack_188,0);
    uStack_107 = (undefined7)((ulong)pplStack_188 >> 8);
    local_110 = SUB81(local_190,0);
    uStack_10f = (undefined7)((ulong)local_190 >> 8);
    uStack_f8 = (undefined1)lStack_178;
    uStack_f7 = (undefined7)((ulong)lStack_178 >> 8);
    local_100 = (undefined1)local_180;
    cStack_ff = (char)((ulong)local_180 >> 8);
    uStack_fe = (undefined4)((ulong)local_180 >> 0x10);
    uStack_fa = (undefined2)((ulong)local_180 >> 0x30);
    uStack_f0 = (undefined1)local_170;
    uStack_ef = (undefined1)((ulong)local_170 >> 8);
    uStack_ee = (undefined2)((ulong)local_170 >> 0x10);
    uStack_ec = (undefined4)((ulong)local_170 >> 0x20);
    bStack_128 = (byte)pplStack_1a8;
    uStack_127 = (undefined7)((ulong)pplStack_1a8 >> 8);
    local_130._0_4_ = SUB84(local_1b0,0);
    local_130._4_4_ = (undefined4)((ulong)local_1b0 >> 0x20);
    uStack_118 = SUB81(pplStack_198,0);
    uStack_117 = (undefined7)((ulong)pplStack_198 >> 8);
    local_120 = SUB81(local_1a0,0);
    uStack_11f = (undefined7)((ulong)local_1a0 >> 8);
                    /* try { // try from 007cd2e8 to 007cd3d7 has its CatchHandler @ 007cdf34 */
    uVar22 = <hyper_util::client::legacy::connect::hyper_util::client::legacy::connect::PoisonPill>
             ::poisoned(&uStack_108);
    if (((uVar22 & 1) == 0) &&
       (*(long *)(CONCAT44(local_130._4_4_,(undefined4)local_130) + 0x10) == 1)) {
      iVar16 = <hyper_util::client::legacy::pool::[k]::hyper_util::client::legacy::pool::Expiration>
               ::expires(&local_240,CONCAT71(uStack_f7,uStack_f8),
                         CONCAT22(uStack_ee,CONCAT11(uStack_ef,uStack_f0)));
      if (iVar16 == 0) {
        pplStack_228 = (long **)CONCAT71(uStack_127,bStack_128);
        local_230 = (long ***)CONCAT44(local_130._4_4_,(undefined4)local_130);
        pplStack_218 = (long **)CONCAT71(uStack_117,uStack_118);
        pplStack_220 = (long **)CONCAT71(uStack_11f,local_120);
        local_200 = CONCAT26(uStack_fa,CONCAT42(uStack_fe,CONCAT11(cStack_ff,local_100)));
        lStack_178 = CONCAT71(uStack_f7,uStack_f8);
        pplStack_208 = (long **)CONCAT71(uStack_107,uStack_108);
        local_210 = (long **)CONCAT71(uStack_10f,local_110);
        iVar16 = CONCAT22(uStack_ee,CONCAT11(uStack_ef,uStack_f0));
        local_170 = CONCAT44(local_170._4_4_,iVar16);
        if (*pplVar26 == (long *)0x0) goto LAB_007cd514;
        bVar13 = false;
        local_1b0 = (long ****)local_230;
        pplStack_1a8 = pplStack_228;
        local_1a0 = pplStack_220;
        pplStack_198 = pplStack_218;
        local_190 = local_210;
        pplStack_188 = pplStack_208;
        local_180 = local_200;
        goto LAB_007cdb60;
      }
      if (((*(long *)puVar7 == 0) &&
          (((byte)PTR___CALLSITE_00b00f68[0x10] - 1 < 2 ||
           (((byte)PTR___CALLSITE_00b00f68[0x10] != 0 &&
            (cVar14 = <tracing_core::callsite::tracing_core::callsite::DefaultCallsite>::register
                                (PTR___CALLSITE_00b00f68), cVar14 != '\0')))))) &&
         (iVar16 = tracing::__macro_support::__is_enabled(*(undefined8 *)PTR___CALLSITE_00b00f68),
         iVar16 != 0)) {
        lVar27 = *(long *)PTR___CALLSITE_00b00f68;
        if (*(long *****)(lVar27 + 0x38) == (long ****)0x0) {
          ppuVar30 = &PTR_s__root__cargo_registry_src_index__00adf440;
          goto LAB_007cdd5c;
        }
        uStack_1d8 = *(undefined8 *)(lVar27 + 0x48);
        local_1e0 = *(undefined8 **)(lVar27 + 0x40);
        local_90 = (undefined8 *)(lVar27 + 0x30);
        local_1f0 = (long ***)*local_90;
        local_1d0 = 0;
        local_140 = (long ****)&local_1c0;
        local_138 = FUN_007c7578;
        ppppplStack_148 = &local_140;
        local_150 = (long ****)&DAT_002a688f;
        local_168 = (long ****)&local_1f0;
        local_160 = (long ****)&local_150;
        local_158 = &DAT_00adf370;
        local_a0 = (long **)&local_168;
        ppppplStack_98 = (long *****)&DAT_00000001;
        local_1e8 = *(long *****)(lVar27 + 0x38);
        <tracing_core::event::tracing_core::event::Event>::dispatch(lVar27,&local_a0);
      }
    }
    else {
                    /* try { // try from 007cd424 to 007cd4e3 has its CatchHandler @ 007cdf34 */
      if (((*(long *)puVar7 == 0) &&
          (((byte)PTR___CALLSITE_00b00f70[0x10] - 1 < 2 ||
           (((byte)PTR___CALLSITE_00b00f70[0x10] != 0 &&
            (cVar14 = <tracing_core::callsite::tracing_core::callsite::DefaultCallsite>::register
                                (PTR___CALLSITE_00b00f70), cVar14 != '\0')))))) &&
         (iVar16 = tracing::__macro_support::__is_enabled(*(undefined8 *)PTR___CALLSITE_00b00f70),
         iVar16 != 0)) {
        lVar27 = *(long *)PTR___CALLSITE_00b00f70;
        if (*(long *****)(lVar27 + 0x38) == (long ****)0x0) {
LAB_007cdd5c:
                    /* try { // try from 007cdd5c to 007cdd6f has its CatchHandler @ 007cded4 */
                    /* WARNING: Subroutine does not return */
          core::option::expect_failed(&DAT_002e5a7c,0x22,ppuVar30);
        }
        uStack_1d8 = *(undefined8 *)(lVar27 + 0x48);
        local_1e0 = *(undefined8 **)(lVar27 + 0x40);
        local_90 = (undefined8 *)(lVar27 + 0x30);
        local_1f0 = (long ***)*local_90;
        local_1d0 = 0;
        local_140 = (long ****)&local_1c0;
        local_138 = FUN_007c7578;
        ppppplStack_148 = &local_140;
        local_150 = (long ****)&DAT_002a59d8;
        local_168 = (long ****)&local_1f0;
        local_160 = (long ****)&local_150;
        local_158 = &DAT_00adf370;
        local_a0 = (long **)&local_168;
        ppppplStack_98 = (long *****)&DAT_00000001;
        local_1e8 = *(long *****)(lVar27 + 0x38);
        <tracing_core::event::tracing_core::event::Event>::dispatch(lVar27,&local_a0);
      }
    }
                    /* try { // try from 007cd3e4 to 007cd3eb has its CatchHandler @ 007cdf2c */
    FUN_007ca00c(&local_130);
    pplVar29 = local_1b8 + 2;
    plVar28 = *pplVar29;
  } while (plVar28 != (long *)0x0);
LAB_007cd4f0:
  iVar16 = -1;
  local_170 = CONCAT44(local_170._4_4_,0xffffffff);
LAB_007cd514:
                    /* try { // try from 007cd518 to 007cd527 has its CatchHandler @ 007cdf10 */
  local_1b0 = (long ****)local_230;
  pplStack_1a8 = pplStack_228;
  local_1a0 = pplStack_220;
  pplStack_198 = pplStack_218;
  local_190 = local_210;
  pplStack_188 = pplStack_208;
  local_180 = local_200;
  FUN_007afa9c(&local_130,ppplVar36 + 0xb,param_2);
  lVar27 = CONCAT44(local_130._4_4_,(undefined4)local_130);
  if (lVar27 != -1) {
    __ptr = (void *)CONCAT71(uStack_127,bStack_128);
    lVar25 = CONCAT71(uStack_11f,local_120) + 1;
    pvVar19 = __ptr;
    while (lVar25 = lVar25 + -1, lVar25 != 0) {
                    /* try { // try from 007cd550 to 007cd553 has its CatchHandler @ 007cdf48 */
      FUN_0078618c(pvVar19);
      pvVar19 = (void *)((long)pvVar19 + 0x48);
    }
    if (lVar27 != 0) {
      free(__ptr);
    }
  }
  if (iVar16 == -1) {
    if (*pppplVar33 == (long ***)0x0) {
      uStack_e8 = 0;
      local_e0 = 0;
      uStack_df = 0;
      uStack_d0 = 0;
      uStack_ef = 2;
      bStack_128 = 1;
      uStack_127 = 0;
      local_130._0_4_ = 1;
      local_130._4_4_ = 0;
      ppplStack_c8 = (long ***)0x0;
      local_b8 = 0;
      local_b0 = 0;
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      pppplVar20 = (long ****)FUN_004b25a4(0x88,8);
      if (pppplVar20 == (long ****)0x0) {
                    /* try { // try from 007cdc9c to 007cdca7 has its CatchHandler @ 007cdf98 */
                    /* WARNING: Subroutine does not return */
        alloc::alloc::handle_alloc_error(8,0x88);
      }
      pppplVar20[0xd] = ppplStack_c8;
      pppplVar20[0xc] = (long ***)CONCAT71(uStack_cf,uStack_d0);
      pppplVar20[0xf] = (long ***)CONCAT71(uStack_b7,local_b8);
      pppplVar20[0xe] = (long ***)CONCAT44(local_bc,local_c0);
      pppplVar20[0x10] = (long ***)CONCAT71(uStack_af,local_b0);
      pppplVar20[5] = (long ***)CONCAT71(uStack_107,uStack_108);
      pppplVar20[4] = (long ***)CONCAT71(uStack_10f,local_110);
      pppplVar20[7] = (long ***)CONCAT71(uStack_f7,uStack_f8);
      pppplVar20[6] =
           (long ***)CONCAT26(uStack_fa,CONCAT42(uStack_fe,CONCAT11(cStack_ff,local_100)));
      pppplVar20[9] = (long ***)CONCAT71(uStack_e7,uStack_e8);
      pppplVar20[8] =
           (long ***)CONCAT44(uStack_ec,CONCAT22(uStack_ee,CONCAT11(uStack_ef,uStack_f0)));
      pppplVar20[0xb] = (long ***)CONCAT71(uStack_d7,uStack_d8);
      pppplVar20[10] = (long ***)CONCAT71(uStack_df,local_e0);
      pppplVar20[1] = (long ***)CONCAT71(uStack_127,bStack_128);
      *pppplVar20 = (long ***)CONCAT44(local_130._4_4_,(undefined4)local_130);
      pppplVar20[3] = (long ***)CONCAT71(uStack_117,uStack_118);
      pppplVar20[2] = (long ***)CONCAT71(uStack_11f,local_120);
      do {
        ppplVar24 = *pppplVar20;
        cVar14 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(pppplVar20,0x10);
        if (bVar13) {
          *pppplVar20 = (long ***)((long)ppplVar24 + 1);
          cVar14 = ExclusiveMonitorsStatus();
        }
        puVar7 = PTR___CALLSITE_00b00f80;
      } while (cVar14 != '\0');
      if ((long)ppplVar24 < 0) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x7cdde4);
        (*pcVar12)();
      }
      uVar22 = *(ulong *)PTR_MAX_LEVEL_00b00e60;
      local_1c0 = pppplVar20;
      local_150 = pppplVar20;
      if (uVar22 == 0) {
        uVar31 = (byte)PTR___CALLSITE_00b00f80[0x10] - 1;
        uVar22 = (ulong)uVar31;
                    /* try { // try from 007cdc58 to 007cdc63 has its CatchHandler @ 007cdeb8 */
                    /* try { // try from 007cd71c to 007cd79b has its CatchHandler @ 007cdeb8 */
        if (((uVar31 < 2) ||
            (((byte)PTR___CALLSITE_00b00f80[0x10] != 0 &&
             (cVar14 = <tracing_core::callsite::tracing_core::callsite::DefaultCallsite>::register
                                 (PTR___CALLSITE_00b00f80), uVar22 = extraout_x8_01, cVar14 != '\0')
             ))) && (uVar17 = tracing::__macro_support::__is_enabled(*(undefined8 *)puVar7),
                    uVar22 = extraout_x8, (uVar17 & 1) != 0)) {
          lVar27 = *(long *)puVar7;
          lVar25 = *(long *)(lVar27 + 0x38);
          if (lVar25 == 0) {
                    /* try { // try from 007cddc8 to 007cdddf has its CatchHandler @ 007cdeb8 */
                    /* WARNING: Subroutine does not return */
            core::option::expect_failed
                      (&DAT_002e5a7c,0x22,&PTR_s__root__cargo_registry_src_index__00adf530);
          }
          local_1e0 = (undefined8 *)(lVar27 + 0x30);
          local_110 = 0;
          uStack_10f = 0;
          uStack_118 = (undefined1)*(undefined8 *)(lVar27 + 0x48);
          uStack_117 = (undefined7)((ulong)*(undefined8 *)(lVar27 + 0x48) >> 8);
          local_120 = (undefined1)*(undefined8 *)(lVar27 + 0x40);
          uStack_11f = (undefined7)((ulong)*(undefined8 *)(lVar27 + 0x40) >> 8);
          local_130._0_4_ = (undefined4)*local_1e0;
          local_130._4_4_ = (undefined4)((ulong)*local_1e0 >> 0x20);
          bStack_128 = (byte)lVar25;
          uStack_127 = (undefined7)((ulong)lVar25 >> 8);
          local_160 = (long ****)FUN_007c740c;
          local_138 = (code *)&local_168;
          local_140 = (long ****)&DAT_002b6da6;
          local_a0 = (long **)&local_130;
          ppppplStack_98 = &local_140;
          local_90 = (undefined8 *)&DAT_00adf370;
          local_1f0 = (long ***)&local_a0;
          local_1e8 = (long ****)&DAT_00000001;
          local_168 = param_2;
          <tracing_core::event::tracing_core::event::Event>::dispatch(lVar27,&local_1f0);
          uVar22 = extraout_x8_00;
        }
      }
      uVar35 = (undefined1)uVar22;
      cVar14 = *(char *)param_2;
      pppplVar21 = param_2;
      if (cVar14 != '\0') {
        if (cVar14 == '\x01') {
          uVar35 = *(undefined1 *)((long)param_2 + 1);
        }
        else {
          ppplVar24 = param_2[1];
                    /* try { // try from 007cd814 to 007cd817 has its CatchHandler @ 007cdeb8 */
          pppplVar21 = (long ****)FUN_007c51f4();
                    /* try { // try from 007cd828 to 007cd833 has its CatchHandler @ 007cde40 */
          (*(code *)**ppplVar24)(&local_130,ppplVar24 + 3,ppplVar24[1],ppplVar24[2]);
          pppplVar21[1] = (long ***)CONCAT71(uStack_127,bStack_128);
          *pppplVar21 = (long ***)CONCAT44(local_130._4_4_,(undefined4)local_130);
          pppplVar21[3] = (long ***)CONCAT71(uStack_117,uStack_118);
          pppplVar21[2] = (long ***)CONCAT71(uStack_11f,local_120);
          uVar35 = extraout_w8;
        }
      }
      local_1f0._0_2_ = CONCAT11(uVar35,cVar14);
                    /* try { // try from 007cd85c to 007cd867 has its CatchHandler @ 007cde74 */
      local_1e8 = pppplVar21;
      (*(code *)*param_2[2])(&local_1e0,param_2 + 5,param_2[3],param_2[4]);
                    /* try { // try from 007cd86c to 007cd87b has its CatchHandler @ 007cdeb8 */
      FUN_007b289c(&local_130,ppplVar36 + 0x11,&local_1f0);
      uVar11 = local_130._4_4_;
      uVar10 = (undefined4)local_130;
      cVar14 = (char)local_130;
      bVar13 = (char)local_130 == -1;
      local_130._0_4_ = SUB84(pppplVar20,0);
      local_130._4_4_ = (undefined4)((ulong)pppplVar20 >> 0x20);
      pppplVar21 = pppplVar20;
      if (bVar13) {
        puVar34 = (undefined8 *)CONCAT71(uStack_127,bStack_128);
        uVar22 = puVar34[-4];
        uVar17 = puVar34[-1];
        if (uVar17 == uVar22) goto LAB_007cd970;
      }
      else {
        ppppplStack_98 = (long *****)CONCAT71(uStack_10f,local_110);
        local_a0 = (long **)CONCAT71(uStack_117,uStack_118);
        local_90 = (undefined8 *)CONCAT71(uStack_107,uStack_108);
        plVar28 = (long *)CONCAT26(uStack_fa,CONCAT42(uStack_fe,CONCAT11(cStack_ff,local_100)));
        local_168._0_7_ = CONCAT43(uVar11,(int3)((uint)uVar10 >> 8));
        pppplVar9 = local_168;
        puVar34 = (undefined8 *)*plVar28;
        uVar17 = plVar28[1];
        uVar22 = uVar17 & CONCAT71(uStack_f7,uStack_f8);
        uVar23 = NEON_cmlt(*(undefined8 *)((long)puVar34 + uVar22),0,1);
        if (uVar23 == 0) {
          lVar27 = 8;
          do {
            uVar22 = uVar22 + lVar27;
            lVar27 = lVar27 + 8;
            uVar22 = uVar22 & uVar17;
            uVar23 = NEON_cmlt(*(undefined8 *)((long)puVar34 + uVar22),0,1);
          } while (uVar23 == 0);
        }
        uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
        uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
        uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
        uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
        uVar23 = uVar22 + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3) & uVar17;
        uVar22 = (ulong)*(char *)((long)puVar34 + uVar23);
        if (-1 < *(char *)((long)puVar34 + uVar23)) {
          uVar22 = NEON_cmlt(*puVar34,0,1);
          uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
          uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
          uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
          uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
          uVar23 = (ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3;
          uVar22 = (ulong)*(byte *)((long)puVar34 + uVar23);
        }
        bVar37 = (byte)((uint7)uStack_f7 >> 0x30);
        *(byte *)((long)puVar34 + uVar23) = bVar37 >> 1;
        *(byte *)((long)puVar34 + (uVar23 - 8 & uVar17) + 8) = bVar37 >> 1;
        puVar34 = puVar34 + uVar23 * -10;
        plVar28[2] = plVar28[2] - (uVar22 & 1);
        *(char *)(puVar34 + -10) = cVar14;
        *(undefined4 *)((long)puVar34 + -0x4f) = (undefined4)local_168;
        puVar34[-8] = CONCAT71(uStack_11f,local_120);
        puVar34[-9] = CONCAT71(uStack_127,bStack_128);
        *(undefined4 *)((long)puVar34 + -0x4c) = uVar11;
        puVar34[-6] = ppppplStack_98;
        puVar34[-7] = local_a0;
        puVar34[-2] = 0;
        puVar34[-1] = 0;
        puVar34[-5] = local_90;
        puVar34[-4] = 0;
        puVar34[-3] = 8;
        plVar28[3] = plVar28[3] + 1;
        uVar22 = puVar34[-4];
        uVar17 = puVar34[-1];
        local_168 = pppplVar9;
        if (uVar17 == uVar22) {
LAB_007cd970:
                    /* try { // try from 007cd970 to 007cd973 has its CatchHandler @ 007cde5c */
          <alloc::collections::vec_deque::[4]::alloc::collections::vec_deque::VecDeque<futures_channel::oneshot::Sender<hyper_util::client::legacy::client::PoolClient<reqwest::async_impl::body::Body>>>>
          ::grow();
          uVar17 = puVar34[-1];
          uVar22 = puVar34[-4];
          pppplVar21 = local_150;
        }
      }
      puVar34[-1] = uVar17 + 1;
      uVar23 = 0;
      if (uVar22 <= puVar34[-2] + uVar17) {
        uVar23 = uVar22;
      }
      *(long *****)(puVar34[-3] + ((puVar34[-2] + uVar17) - uVar23) * 8) = pppplVar20;
      if (*(char *)(pppplVar21 + 0x10) == '\0') {
                    /* try { // try from 007cd9e0 to 007cda0f has its CatchHandler @ 007cdeb8 */
        auVar40 = (*(code *)**(undefined8 **)*param_3)(((undefined8 *)*param_3)[1]);
        pppplVar20 = pppplVar21 + 0xc;
        do {
          cVar14 = *(char *)pppplVar20;
          cVar4 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(pppplVar20,0x10);
          if (bVar13) {
            *(undefined1 *)pppplVar20 = 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (cVar14 != '\0') {
          (**(code **)(auVar40._0_8_ + 0x18))(auVar40._8_8_);
          goto LAB_007cda48;
        }
        if (pppplVar21[10] != (long ***)0x0) {
                    /* try { // try from 007cda2c to 007cda2f has its CatchHandler @ 007cdde4 */
          (*(code *)pppplVar21[10][3])(pppplVar21[0xb]);
        }
        *(undefined1 (*) [16])(pppplVar21 + 10) = auVar40;
        *(undefined4 *)(pppplVar21 + 0xc) = 0;
        if (*(char *)(pppplVar21 + 0x10) != '\0') goto LAB_007cda48;
      }
      else {
LAB_007cda48:
        pppplVar20 = pppplVar21 + 9;
        do {
          cVar14 = *(char *)pppplVar20;
          cVar4 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(pppplVar20,0x10);
          if (bVar13) {
            *(undefined1 *)pppplVar20 = 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (cVar14 != '\0') {
LAB_007cdd88:
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    (&DAT_002e5af3,0x39,&PTR_s__root__cargo_registry_src_index__00adf548);
        }
        cVar14 = *(char *)((long)pppplVar21 + 0x41);
        *(undefined1 *)((long)pppplVar21 + 0x41) = 2;
        if (cVar14 == '\x02') {
          *(undefined4 *)pppplVar20 = 0;
          goto LAB_007cdd88;
        }
        local_100 = *(undefined1 *)(pppplVar21 + 8);
        uStack_fe = *(undefined4 *)((long)pppplVar21 + 0x42);
        bStack_128 = (byte)pppplVar21[3];
        uStack_127 = (undefined7)((ulong)pppplVar21[3] >> 8);
        local_130._0_4_ = SUB84(pppplVar21[2],0);
        local_130._4_4_ = (undefined4)((ulong)pppplVar21[2] >> 0x20);
        uStack_118 = SUB81(pppplVar21[5],0);
        uStack_117 = (undefined7)((ulong)pppplVar21[5] >> 8);
        local_120 = SUB81(pppplVar21[4],0);
        uStack_11f = (undefined7)((ulong)pppplVar21[4] >> 8);
        uStack_fa = *(undefined2 *)((long)pppplVar21 + 0x46);
        uStack_108 = SUB81(pppplVar21[7],0);
        uStack_107 = (undefined7)((ulong)pppplVar21[7] >> 8);
        local_110 = SUB81(pppplVar21[6],0);
        uStack_10f = (undefined7)((ulong)pppplVar21[6] >> 8);
        *(undefined4 *)(pppplVar21 + 9) = 0;
        cStack_ff = cVar14;
        if (cVar14 != -1) {
                    /* try { // try from 007cdd7c to 007cdda3 has its CatchHandler @ 007cdeb8 */
          FUN_007ca00c(&local_130);
          goto LAB_007cdd88;
        }
      }
      ppplVar24 = *pppplVar33;
      if (ppplVar24 != (long ***)0x0) {
        ppplVar2 = ppplVar24 + 0xc;
        *(undefined4 *)(ppplVar24 + 0x10) = 1;
        do {
          cVar14 = *(char *)ppplVar2;
          cVar4 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(ppplVar2,0x10);
          if (bVar13) {
            *(char *)ppplVar2 = '\x01';
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (cVar14 == '\0') {
          pplVar26 = ppplVar24[10];
          ppplVar24[10] = (long **)0x0;
          *(undefined4 *)(ppplVar24 + 0xc) = 0;
          if (pplVar26 != (long **)0x0) {
                    /* try { // try from 007cdaf8 to 007cdb2f has its CatchHandler @ 007cddfc */
            (*(code *)pplVar26[3])(ppplVar24[0xb]);
          }
        }
        ppplVar2 = ppplVar24 + 0xf;
        do {
          cVar14 = *(char *)ppplVar2;
          cVar4 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(ppplVar2,0x10);
          if (bVar13) {
            *(char *)ppplVar2 = '\x01';
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (cVar14 == '\0') {
          pplVar26 = ppplVar24[0xd];
          ppplVar24[0xd] = (long **)0x0;
          *(undefined4 *)(ppplVar24 + 0xf) = 0;
          if (pplVar26 != (long **)0x0) {
            (*(code *)pplVar26[1])(ppplVar24[0xe]);
          }
        }
        do {
          pplVar26 = *ppplVar24;
          cVar14 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(ppplVar24,0x10);
          if (bVar13) {
            *ppplVar24 = (long **)((long)pplVar26 + -1);
            cVar14 = ExclusiveMonitorsStatus();
          }
        } while (cVar14 != '\0');
        if ((long **)((long)pplVar26 + -1) == (long **)0x0) {
          DataMemoryBarrier(2,1);
                    /* try { // try from 007cdb48 to 007cdb4f has its CatchHandler @ 007cde28 */
          <alloc::sync::[n]::alloc::sync::Arc<futures_channel::oneshot::Inner<hyper_util::client::legacy::client::PoolClient<reqwest::async_impl::body::Body>>>>
          ::drop_slow(pppplVar33);
        }
      }
      *pppplVar33 = (long ***)pppplVar21;
      bVar13 = (int)local_170 == -1;
    }
    else {
      bVar13 = true;
    }
  }
  else {
    bVar13 = false;
  }
LAB_007cdb60:
  pplStack_278 = pplStack_1a8;
  local_280 = (long ***)local_1b0;
  pplStack_268 = pplStack_198;
  pplStack_270 = local_1a0;
  pplStack_258 = pplStack_188;
  local_260 = local_190;
  lStack_248 = lStack_178;
  local_250 = local_180;
  if ((((bVar15 & 1) == 0) &&
      ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) != 0)) &&
     (uVar22 = std::panicking::panic_count::is_zero_slow_path(), (uVar22 & 1) == 0)) {
    *(undefined1 *)((long)ppplVar36 + 0x14) = 1;
  }
  do {
    iVar16 = *(int *)ppplVar1;
    cVar14 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(ppplVar1,0x10);
    if (bVar3) {
      *(int *)ppplVar1 = 0;
      cVar14 = ExclusiveMonitorsStatus();
    }
  } while (cVar14 != '\0');
  if (iVar16 == 2) {
    <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(ppplVar1);
  }
  if (!bVar13) {
    bStack_128 = (byte)pplStack_278;
    uStack_127 = (undefined7)((ulong)pplStack_278 >> 8);
    local_130._0_4_ = SUB84(local_280,0);
    local_130._4_4_ = (undefined4)((ulong)local_280 >> 0x20);
    uStack_118 = SUB81(pplStack_268,0);
    uStack_117 = (undefined7)((ulong)pplStack_268 >> 8);
    local_120 = SUB81(pplStack_270,0);
    uStack_11f = (undefined7)((ulong)pplStack_270 >> 8);
    uStack_108 = SUB81(pplStack_258,0);
    uStack_107 = (undefined7)((ulong)pplStack_258 >> 8);
    local_110 = SUB81(local_260,0);
    uStack_10f = (undefined7)((ulong)local_260 >> 8);
    local_100 = (undefined1)local_250;
    cStack_ff = (char)((ulong)local_250 >> 8);
    uStack_fe = (undefined4)((ulong)local_250 >> 0x10);
    uStack_fa = (undefined2)((ulong)local_250 >> 0x30);
    FUN_007cacb0(&local_300,pppplVar32,param_2,&local_130);
    if (local_290 != '\x02') {
      param_1[0xd] = CONCAT17(uStack_291,uStack_298);
      param_1[0xc] = CONCAT17(uStack_299,local_2a0);
      param_1[9] = uStack_2b8;
      param_1[8] = local_2c0;
      param_1[0xb] = CONCAT17(uStack_2a1,uStack_2a8);
      param_1[10] = local_2b0;
      param_1[0xe] = CONCAT71(uStack_28f,local_290);
      param_1[1] = uStack_2f8;
      *param_1 = local_300;
      param_1[3] = uStack_2e8;
      param_1[2] = local_2f0;
      param_1[5] = uStack_2d8;
      param_1[4] = local_2e0;
      param_1[7] = uStack_2c8;
      param_1[6] = local_2d0;
      return;
    }
  }
LAB_007cdbe0:
  if (*pppplVar32 == (long ***)0x0) {
    *(undefined1 *)param_1 = 0;
LAB_007cdbf4:
    uVar35 = 2;
    goto LAB_007cdbf8;
  }
LAB_007cdbe8:
  uVar35 = 0xff;
LAB_007cdbf8:
  *(undefined1 *)(param_1 + 0xe) = uVar35;
  return;
}


// ===== 007cdfd4  FUN_007cdfd4 =====

void FUN_007cdfd4(long param_1)

{
  int *piVar1;
  long lVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  ulong *puVar6;
  undefined *puVar7;
  void *__ptr;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  byte bVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 *local_f8;
  long **local_e8;
  undefined **ppuStack_e0;
  undefined *local_d8;
  long *local_d0;
  void *local_c8;
  long *local_c0;
  ulong uStack_b8;
  undefined8 local_b0;
  undefined *local_a8;
  long *plStack_a0;
  long local_98;
  code *pcStack_90;
  long ***local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  
  plVar17 = *(long **)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (plVar17 == (long *)0x0) {
    return;
  }
  plVar16 = plVar17 + 0xc;
  *(undefined4 *)(plVar17 + 0x10) = 1;
  do {
    lVar12 = *plVar16;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar5) {
      *(char *)plVar16 = '\x01';
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  local_d0 = plVar17;
  if ((char)lVar12 == '\0') {
    lVar12 = plVar17[10];
    plVar17[10] = 0;
    *(undefined4 *)(plVar17 + 0xc) = 0;
    if (lVar12 != 0) {
                    /* try { // try from 007ce044 to 007ce07b has its CatchHandler @ 007ce474 */
      (**(code **)(lVar12 + 0x18))(plVar17[0xb]);
    }
  }
  plVar16 = plVar17 + 0xf;
  do {
    lVar12 = *plVar16;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar5) {
      *(char *)plVar16 = '\x01';
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if ((char)lVar12 == '\0') {
    lVar12 = plVar17[0xd];
    plVar17[0xd] = 0;
    *(undefined4 *)(plVar17 + 0xf) = 0;
    if (lVar12 != 0) {
      (**(code **)(lVar12 + 8))(plVar17[0xe]);
    }
  }
  do {
    lVar12 = *plVar17;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar5) {
      *plVar17 = lVar12 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar12 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<futures_channel::oneshot::Inner<hyper_util::client::legacy::client::PoolClient<reqwest::async_impl::body::Body>>>>
    ::drop_slow(&local_d0);
  }
  puVar7 = PTR___CALLSITE_00b00f88;
  if (*(long *)PTR_MAX_LEVEL_00b00e60 == 0) {
    bVar18 = PTR___CALLSITE_00b00f88[0x10];
    if (((bVar18 - 1 < 2) ||
        ((bVar18 != 0 &&
         (bVar18 = <tracing_core::callsite::tracing_core::callsite::DefaultCallsite>::register
                             (PTR___CALLSITE_00b00f88), bVar18 != 0)))) &&
       (uVar13 = tracing::__macro_support::__is_enabled(*(undefined8 *)puVar7,bVar18),
       (uVar13 & 1) != 0)) {
      lVar12 = *(long *)puVar7;
      local_c8 = *(void **)(lVar12 + 0x38);
      if (local_c8 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        core::option::expect_failed
                  (&DAT_002e5a7c,0x22,&PTR_s__root__cargo_registry_src_index__00adf628);
      }
      uStack_b8 = *(ulong *)(lVar12 + 0x48);
      local_c0 = *(long **)(lVar12 + 0x40);
      local_78 = (undefined8 *)(lVar12 + 0x30);
      local_d0 = (long *)*local_78;
      local_b0 = 0;
      pcStack_90 = FUN_007c740c;
      plStack_a0 = &local_98;
      local_a8 = &DAT_002b6161;
      local_e8 = &local_d0;
      ppuStack_e0 = &local_a8;
      local_d8 = &DAT_00adf370;
      local_88 = &local_e8;
      uStack_80 = 1;
      local_98 = param_1;
      <tracing_core::event::tracing_core::event::Event>::dispatch(lVar12,&local_88);
    }
  }
  lVar12 = *(long *)(param_1 + 0x30);
  if (lVar12 == 0) {
    return;
  }
  piVar1 = (int *)(lVar12 + 0x10);
  do {
    if (*piVar1 != 0) {
      ClearExclusiveLocal();
      <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                (lVar12 + 0x10);
      uVar13 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      puVar6 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      goto joined_r0x007ce3d8;
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  uVar13 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
  puVar6 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
joined_r0x007ce3d8:
  PTR_GLOBAL_PANIC_COUNT_00b00bf0 = (undefined *)puVar6;
  if ((uVar13 & 0x7fffffffffffffff) == 0) {
    if (*(char *)(lVar12 + 0x14) == '\0') {
      uVar9 = 0;
      lVar14 = *(long *)(lVar12 + 0xa0);
joined_r0x007ce404:
      if (lVar14 != 0) {
                    /* try { // try from 007ce1b4 to 007ce1c3 has its CatchHandler @ 007ce45c */
        uVar10 = FUN_007c4ecc(lVar12 + 0xa8,param_1);
        lVar14 = 0;
        lVar15 = *(long *)(lVar12 + 0x88);
        uVar3 = *(ulong *)(lVar12 + 0x90);
        bVar18 = (byte)(uVar10 >> 0x39);
        uVar19 = CONCAT17(bVar18,CONCAT16(bVar18,CONCAT15(bVar18,CONCAT14(bVar18,CONCAT13(bVar18,
                                                  CONCAT12(bVar18,CONCAT11(bVar18,bVar18)))))));
        uVar10 = uVar10 & uVar3;
        uVar20 = *(undefined8 *)(lVar15 + uVar10);
        uVar13 = NEON_cmeq(uVar20,uVar19,1);
        uVar13 = uVar13 & 0x8080808080808080;
        while( true ) {
          for (; uVar13 == 0; uVar13 = uVar13 & 0x8080808080808080) {
            uVar20 = NEON_cmeq(uVar20,0xffffffffffffffff,1);
            bVar18 = NEON_umaxv(uVar20,1);
            if ((bVar18 & 1) != 0) goto LAB_007ce2a8;
            lVar14 = lVar14 + 8;
            uVar10 = uVar10 + lVar14 & uVar3;
            uVar20 = *(undefined8 *)(lVar15 + uVar10);
            uVar13 = NEON_cmeq(uVar20,uVar19,1);
          }
          uVar11 = (uVar13 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar13 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
          lVar2 = lVar15 + (uVar10 + ((ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3) & uVar3)
                           * -0x50;
                    /* try { // try from 007ce20c to 007ce227 has its CatchHandler @ 007ce458 */
          iVar8 = <http::uri::scheme::Scheme_as_core::cmp::PartialEq>::eq(param_1,lVar2 + -0x50);
          if ((iVar8 != 0) &&
             (uVar11 = <http::uri::authority::Authority_as_core::cmp::PartialEq>::eq
                                 (param_1 + 0x10,lVar2 + -0x40), (uVar11 & 1) != 0)) break;
          uVar13 = uVar13 - 1 & uVar13;
        }
                    /* try { // try from 007ce294 to 007ce2ff has its CatchHandler @ 007ce45c */
        FUN_0078b1f4(lVar2 + -0x20);
        if ((*(long *)(lVar2 + -8) == 0) &&
           (FUN_007afd0c(&local_d0,lVar12 + 0x88,param_1), __ptr = local_c8, plVar17 = local_d0,
           local_d0 != (long *)0xffffffffffffffff)) {
          if (uStack_b8 == 0) {
            lVar14 = 0;
            lVar15 = 0;
            plVar16 = (long *)0x0;
          }
          else {
            plVar16 = (long *)0x0;
            if (local_d0 <= local_c0) {
              plVar16 = local_d0;
            }
            lVar15 = (long)local_c0 - (long)plVar16;
            lVar14 = uStack_b8 - ((long)local_d0 - lVar15);
            plVar16 = local_d0;
            if (uStack_b8 < (ulong)((long)local_d0 - lVar15) || lVar14 == 0) {
              lVar14 = 0;
              plVar16 = (long *)(lVar15 + uStack_b8);
            }
          }
                    /* try { // try from 007ce35c to 007ce35f has its CatchHandler @ 007ce42c */
          FUN_0078e0b0((void *)((long)local_c8 + lVar15 * 8),(long)plVar16 - lVar15);
                    /* try { // try from 007ce360 to 007ce36b has its CatchHandler @ 007ce424 */
          FUN_0078e0b0(__ptr,lVar14);
          if (plVar17 != (long *)0x0) {
            free(__ptr);
          }
        }
      }
LAB_007ce2a8:
      local_f8 = (undefined1 *)(lVar12 + 0x14);
      if ((((uVar9 & 1) == 0) && ((*puVar6 & 0x7fffffffffffffff) != 0)) &&
         (uVar13 = std::panicking::panic_count::is_zero_slow_path(), (uVar13 & 1) == 0)) {
        *local_f8 = 1;
      }
      do {
        iVar8 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = 0;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto LAB_007ce2c4;
    }
LAB_007ce0ec:
    if (((*puVar6 & 0x7fffffffffffffff) != 0) &&
       (uVar13 = std::panicking::panic_count::is_zero_slow_path(), (uVar13 & 1) == 0)) {
      *(undefined1 *)(lVar12 + 0x14) = 1;
    }
  }
  else {
    uVar9 = std::panicking::panic_count::is_zero_slow_path();
    if (*(char *)(lVar12 + 0x14) == '\0') {
      uVar9 = uVar9 ^ 1;
      lVar14 = *(long *)(lVar12 + 0xa0);
      goto joined_r0x007ce404;
    }
    if (uVar9 != 0) goto LAB_007ce0ec;
  }
  do {
    iVar8 = *piVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_007ce2c4:
  if (iVar8 == 2) {
    <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(piVar1);
  }
  return;
}


// ===== 007ce4a4  FUN_007ce4a4 =====

void FUN_007ce4a4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  undefined **ppuVar8;
  long lVar9;
  long *plVar10;
  undefined **local_70;
  code *local_68;
  undefined **local_60;
  ulong local_58;
  long *local_38;
  
  plVar10 = *(long **)(param_1 + 0x30);
  if (0xfffffffffffffffd < (long)plVar10 - 1U) {
    return;
  }
  lVar9 = *plVar10;
  do {
    while( true ) {
      if (lVar9 == 0) {
        return;
      }
      if (lVar9 < 0) {
        local_70 = &PTR_s_Arc_counter_overflow_00adcbc0;
        local_68 = FUN_00782f80;
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_fmt
                  (&DAT_002ab692,&local_70,&PTR_s__nix_store_8006w282fgsx3273c878b_00adcc10);
      }
      lVar7 = *plVar10;
      if (lVar7 == lVar9) break;
      ClearExclusiveLocal();
      lVar9 = lVar7;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar3) {
      *plVar10 = lVar9 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    lVar9 = lVar7;
  } while (cVar2 != '\0');
  plVar1 = plVar10 + 2;
  do {
    local_38 = plVar10;
    if ((int)*plVar1 != 0) {
      ClearExclusiveLocal();
                    /* try { // try from 007ce6f8 to 007ce6ff has its CatchHandler @ 007ce708 */
      <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                (plVar10 + 2);
      break;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(undefined4 *)plVar1 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  puVar4 = PTR_GLOBAL_PANIC_COUNT_00b00bf0;
  if ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) == 0) {
    if (*(char *)((long)plVar10 + 0x14) == '\0') {
      uVar5 = 0;
LAB_007ce578:
                    /* try { // try from 007ce578 to 007ce593 has its CatchHandler @ 007ce744 */
      FUN_007aff68(plVar10 + 5,param_1);
      FUN_007afd0c(&local_70,plVar10 + 0x11,param_1);
      if (local_70 != (undefined **)0xffffffffffffffff) {
        if (local_58 == 0) {
          lVar9 = 0;
          lVar7 = 0;
          ppuVar8 = (undefined **)0x0;
        }
        else {
          ppuVar8 = (undefined **)0x0;
          if (local_70 <= local_60) {
            ppuVar8 = local_70;
          }
          lVar7 = (long)local_60 - (long)ppuVar8;
          lVar9 = local_58 - ((long)local_70 - lVar7);
          ppuVar8 = local_70;
          if (local_58 < (ulong)((long)local_70 - lVar7) || lVar9 == 0) {
            lVar9 = 0;
            ppuVar8 = (undefined **)(lVar7 + local_58);
          }
        }
                    /* try { // try from 007ce5ec to 007ce5ef has its CatchHandler @ 007ce718 */
        FUN_0078e0b0((void *)((long)local_68 + lVar7 * 8),(long)ppuVar8 - lVar7);
                    /* try { // try from 007ce5f0 to 007ce5fb has its CatchHandler @ 007ce710 */
        FUN_0078e0b0(local_68,lVar9);
        if (local_70 != (undefined **)0x0) {
          free(local_68);
        }
      }
      if ((((uVar5 & 1) == 0) && ((*(ulong *)puVar4 & 0x7fffffffffffffff) != 0)) &&
         (uVar6 = std::panicking::panic_count::is_zero_slow_path(), (uVar6 & 1) == 0)) {
        *(undefined1 *)((long)plVar10 + 0x14) = 1;
      }
      do {
        lVar9 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(undefined4 *)plVar1 = 0;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar9 == 2) {
                    /* try { // try from 007ce6d4 to 007ce6e3 has its CatchHandler @ 007ce704 */
        <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(plVar1);
      }
      goto LAB_007ce638;
    }
LAB_007ce548:
    if (((*(ulong *)puVar4 & 0x7fffffffffffffff) != 0) &&
       (uVar6 = std::panicking::panic_count::is_zero_slow_path(), (uVar6 & 1) == 0)) {
      *(undefined1 *)((long)plVar10 + 0x14) = 1;
    }
  }
  else {
                    /* try { // try from 007ce6a0 to 007ce6bb has its CatchHandler @ 007ce708 */
    uVar5 = std::panicking::panic_count::is_zero_slow_path();
    if (*(char *)((long)plVar10 + 0x14) == '\0') {
      uVar5 = uVar5 ^ 1;
      goto LAB_007ce578;
    }
    if (uVar5 != 0) goto LAB_007ce548;
  }
  do {
    lVar9 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(undefined4 *)plVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((int)lVar9 == 2) {
                    /* try { // try from 007ce568 to 007ce56f has its CatchHandler @ 007ce708 */
    <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(plVar1);
  }
LAB_007ce638:
  do {
    lVar9 = *local_38;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(local_38,0x10);
    if (bVar3) {
      *local_38 = lVar9 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar9 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc[c1f8e832b0d782c7]::sync::Arc<std[17aff9129faa4dc5]::sync::poison::mutex::Mutex<hyper_util[52a210df7efc1bae]::client::legacy::pool::PoolInner<hyper_util[52a210df7efc1bae]::client::legacy::client::PoolClient<reqwest[6fed810f3e38d558]::async_impl::body::Body>,(http[b87e90c26fe47eb4]::uri::scheme::Scheme,http[b87e90c26fe47eb4]::uri::authority::Authority)>>>>
    ::drop_slow(&local_38);
  }
  return;
}


// ===== 007ce784  FUN_007ce784 =====

uint FUN_007ce784(long param_1,undefined8 *param_2)

{
  char *pcVar1;
  long *plVar2;
  void *__ptr;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  char cVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  char *pcVar15;
  long *plVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [12];
  long *local_d0;
  undefined ***local_c8;
  undefined **local_c0;
  undefined *local_b8;
  undefined **local_b0;
  code *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined *local_88;
  undefined8 uStack_80;
  undefined ****local_78;
  undefined8 local_70;
  undefined8 *local_68;
  
  puVar6 = PTR_MAX_LEVEL_00b00e60;
  lVar14 = *(long *)(param_1 + 0x28);
  pcVar15 = (char *)(lVar14 + 0x40);
  if (*pcVar15 == '\0') {
LAB_007ce7f4:
    auVar17 = (*(code *)**(undefined8 **)*param_2)(((undefined8 *)*param_2)[1]);
    pcVar1 = (char *)(lVar14 + 0x20);
    do {
      cVar7 = *pcVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar5) {
        *pcVar1 = '\x01';
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (cVar7 != '\0') {
      (**(code **)(auVar17._0_8_ + 0x18))(auVar17._8_8_);
      goto LAB_007ce7bc;
    }
    if (*(long *)(lVar14 + 0x10) != 0) {
                    /* try { // try from 007ce830 to 007ce833 has its CatchHandler @ 007ced64 */
      (**(code **)(*(long *)(lVar14 + 0x10) + 0x18))(*(undefined8 *)(lVar14 + 0x18));
    }
    *(undefined1 (*) [16])(lVar14 + 0x10) = auVar17;
    *(undefined4 *)(lVar14 + 0x20) = 0;
    if (*pcVar15 != '\0') goto LAB_007ce7bc;
    uVar9 = (**(code **)(*(long *)(param_1 + 0x18) + 0x18))(*(undefined8 *)(param_1 + 0x10),param_2)
    ;
    if ((uVar9 & 1) != 0) {
      return uVar9;
    }
    <std[17aff9129faa4dc5]::time::Instant_as_core[bcece726f298455b]::ops::arith::AddAssign<core[bcece726f298455b]::time::Duration>>
    ::add_assign(param_1 + 0x40,*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
    auVar17 = <std::time::std::time::Instant>::now();
    auVar18 = <std[17aff9129faa4dc5]::time::Instant_as_core[bcece726f298455b]::ops::arith::Sub<core[bcece726f298455b]::time::Duration>>
              ::sub(auVar17._0_8_,auVar17._8_8_,0,&LAB_004c4b40,
                    &PTR_s__root__cargo_registry_src_index__00adf658);
    lVar14 = auVar18._0_8_;
    lVar13 = *(long *)(param_1 + 0x40);
    if (lVar13 == lVar14) {
      uVar11 = (ulong)*(uint *)(param_1 + 0x48);
      if (*(uint *)(param_1 + 0x48) < auVar18._8_4_) {
LAB_007ce8ac:
        auVar17 = <std::time::std::time::Instant>::now();
        auVar17 = <std[17aff9129faa4dc5]::time::Instant_as_core[bcece726f298455b]::ops::arith::Add<core[bcece726f298455b]::time::Duration>>
                  ::add(auVar17._0_8_,auVar17._8_8_,*(undefined8 *)(param_1 + 0x30),
                        *(undefined4 *)(param_1 + 0x38),
                        &PTR_s__root__cargo_registry_src_index__00adf670);
        uVar11 = auVar17._8_8_ & 0xffffffff;
        *(long *)(param_1 + 0x40) = auVar17._0_8_;
        *(int *)(param_1 + 0x48) = auVar17._8_4_;
        lVar14 = auVar17._0_8_;
      }
    }
    else {
      if (lVar13 < lVar14) goto LAB_007ce8ac;
      uVar11 = (ulong)*(uint *)(param_1 + 0x48);
      lVar14 = lVar13;
    }
    auVar17 = <hyper_util::common::timer::Timer_as_hyper::rt::timer::Timer>::sleep_until
                        (param_1,lVar14,uVar11);
    __ptr = *(void **)(param_1 + 0x10);
    puVar3 = *(undefined8 **)(param_1 + 0x18);
    pcVar12 = (code *)*puVar3;
    if (pcVar12 != (code *)0x0) {
                    /* try { // try from 007ce900 to 007ce907 has its CatchHandler @ 007ced40 */
      (*pcVar12)(__ptr);
    }
    if (puVar3[1] != 0) {
      free(__ptr);
    }
    plVar16 = *(long **)(param_1 + 0x20);
    *(undefined1 (*) [16])(param_1 + 0x10) = auVar17;
    if (0xfffffffffffffffd < (long)plVar16 - 1U) {
      return uVar9;
    }
    lVar14 = *plVar16;
    do {
      if (lVar14 == 0) {
        return 0;
      }
      if (lVar14 < 0) {
        local_b0 = &PTR_s_Arc_counter_overflow_00adcbc0;
        local_a8 = FUN_00782f80;
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_fmt
                  (&DAT_002ab692,&local_b0,&PTR_s__nix_store_8006w282fgsx3273c878b_00adcc10);
      }
      lVar13 = *plVar16;
      if (lVar13 == lVar14) {
        cVar7 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar5) {
          *plVar16 = lVar14 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
        if (cVar7 == '\0') {
          bVar5 = true;
        }
        else {
          bVar5 = false;
        }
      }
      else {
        bVar5 = false;
        ClearExclusiveLocal();
      }
      lVar14 = lVar13;
    } while (!bVar5);
    plVar2 = plVar16 + 2;
    do {
      local_d0 = plVar16;
      if ((int)*plVar2 != 0) {
        ClearExclusiveLocal();
                    /* try { // try from 007ceb48 to 007ceb4f has its CatchHandler @ 007ced38 */
        <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                  (plVar16 + 2);
        break;
      }
      cVar7 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(undefined4 *)plVar2 = 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) != 0) {
                    /* try { // try from 007cea54 to 007cea57 has its CatchHandler @ 007ced38 */
      uVar9 = std::panicking::panic_count::is_zero_slow_path();
      if (*(char *)((long)plVar16 + 0x14) != '\0') {
        if (uVar9 != 0) goto LAB_007cec8c;
        goto LAB_007ceca0;
      }
      uVar9 = uVar9 ^ 1;
      lVar14 = *(long *)puVar6;
joined_r0x007cea6c:
                    /* try { // try from 007cea94 to 007ceb1b has its CatchHandler @ 007ced74 */
      if ((lVar14 == 0) &&
         ((((byte)PTR___CALLSITE_00b00f90[0x10] - 1 < 2 ||
           (((byte)PTR___CALLSITE_00b00f90[0x10] != 0 &&
            (cVar7 = <tracing_core::callsite::tracing_core::callsite::DefaultCallsite>::register
                               (PTR___CALLSITE_00b00f90), cVar7 != '\0')))) &&
          (uVar11 = tracing::__macro_support::__is_enabled(*(undefined8 *)PTR___CALLSITE_00b00f90),
          (uVar11 & 1) != 0)))) {
        lVar14 = *(long *)PTR___CALLSITE_00b00f90;
        if (*(long *)(lVar14 + 0x38) == 0) {
                    /* try { // try from 007ced14 to 007ced2b has its CatchHandler @ 007ced78 */
                    /* WARNING: Subroutine does not return */
          core::option::expect_failed
                    (&DAT_002e5a7c,0x22,&PTR_s__root__cargo_registry_src_index__00adf688);
        }
        uStack_98 = *(undefined8 *)(lVar14 + 0x48);
        local_a0 = *(undefined8 *)(lVar14 + 0x40);
        local_90 = 0;
        local_68 = (undefined8 *)(lVar14 + 0x30);
        local_b0 = (undefined **)*local_68;
        local_88 = &DAT_002e5b5b;
        uStack_80 = 0x45;
        local_c8 = &local_b0;
        local_c0 = &local_88;
        local_b8 = &DAT_00adf370;
        local_78 = &local_c8;
        local_70 = 1;
        local_a8 = (code *)*(long *)(lVar14 + 0x38);
        <tracing_core::event::tracing_core::event::Event>::dispatch(lVar14,&local_78);
      }
      if ((int)plVar16[0x1c] == -1) {
                    /* try { // try from 007cec54 to 007cec6b has its CatchHandler @ 007ced78 */
                    /* WARNING: Subroutine does not return */
        core::option::expect_failed
                  (&DAT_002e5adb,0x18,&PTR_s__root__cargo_registry_src_index__00adf500);
      }
      local_78 = (undefined ****)plVar16[0x1b];
      local_70 = CONCAT44(local_70._4_4_,(int)plVar16[0x1c]);
                    /* try { // try from 007ce9d4 to 007ce9ef has its CatchHandler @ 007ced74 */
      auVar18 = <std::time::std::time::Instant>::now();
      local_b0 = auVar18._0_8_;
      local_a8 = (code *)CONCAT44(local_a8._4_4_,auVar18._8_4_);
      FUN_007af92c(plVar16 + 0xb,&local_b0,&local_78);
      if ((((uVar9 & 1) == 0) &&
          ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) != 0)) &&
         (uVar11 = std::panicking::panic_count::is_zero_slow_path(), (uVar11 & 1) == 0)) {
        *(undefined1 *)((long)plVar16 + 0x14) = 1;
      }
      do {
        lVar14 = *plVar2;
        cVar7 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(undefined4 *)plVar2 = 0;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if ((int)lVar14 == 2) {
                    /* try { // try from 007ceb28 to 007ceb37 has its CatchHandler @ 007ced34 */
        <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(plVar2);
      }
      do {
        lVar14 = *local_d0;
        cVar7 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(local_d0,0x10);
        if (bVar5) {
          *local_d0 = lVar14 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar14 + -1 == 0) {
        DataMemoryBarrier(2,1);
        <alloc[c1f8e832b0d782c7]::sync::Arc<std[17aff9129faa4dc5]::sync::poison::mutex::Mutex<hyper_util[52a210df7efc1bae]::client::legacy::pool::PoolInner<hyper_util[52a210df7efc1bae]::client::legacy::client::PoolClient<reqwest[6fed810f3e38d558]::async_impl::body::Body>,(http[b87e90c26fe47eb4]::uri::scheme::Scheme,http[b87e90c26fe47eb4]::uri::authority::Authority)>>>>
        ::drop_slow(&local_d0);
      }
      lVar14 = *(long *)(param_1 + 0x28);
      pcVar15 = (char *)(lVar14 + 0x40);
      if (*pcVar15 != '\0') goto LAB_007ce7bc;
      goto LAB_007ce7f4;
    }
    if (*(char *)((long)plVar16 + 0x14) == '\0') {
      uVar9 = 0;
      lVar14 = *(long *)puVar6;
      goto joined_r0x007cea6c;
    }
LAB_007cec8c:
    if (((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) != 0) &&
       (uVar11 = std::panicking::panic_count::is_zero_slow_path(), (uVar11 & 1) == 0)) {
      *(undefined1 *)((long)plVar16 + 0x14) = 1;
    }
LAB_007ceca0:
    do {
      lVar14 = *plVar2;
      cVar7 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(undefined4 *)plVar2 = 0;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if ((int)lVar14 == 2) {
                    /* try { // try from 007cecdc to 007ceceb has its CatchHandler @ 007ced30 */
      <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(plVar2);
    }
    do {
      lVar14 = *local_d0;
      cVar7 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(local_d0,0x10);
      if (bVar5) {
        *local_d0 = lVar14 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar14 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc[c1f8e832b0d782c7]::sync::Arc<std[17aff9129faa4dc5]::sync::poison::mutex::Mutex<hyper_util[52a210df7efc1bae]::client::legacy::pool::PoolInner<hyper_util[52a210df7efc1bae]::client::legacy::client::PoolClient<reqwest[6fed810f3e38d558]::async_impl::body::Body>,(http[b87e90c26fe47eb4]::uri::scheme::Scheme,http[b87e90c26fe47eb4]::uri::authority::Authority)>>>>
      ::drop_slow(&local_d0);
    }
  }
  else {
LAB_007ce7bc:
    pcVar15 = (char *)(lVar14 + 0x41);
    do {
      cVar7 = *pcVar15;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pcVar15,0x10);
      if (bVar5) {
        *pcVar15 = '\x01';
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (cVar7 == '\0') {
      pcVar15[0] = '\0';
      pcVar15[1] = '\0';
      pcVar15[2] = '\0';
      pcVar15[3] = '\0';
      lVar14 = *(long *)puVar6;
      plVar16 = (long *)PTR___CALLSITE_00b00f98;
    }
    else {
      lVar14 = *(long *)puVar6;
      plVar16 = (long *)PTR___CALLSITE_00b00f98;
    }
    PTR___CALLSITE_00b00f98 = (undefined *)plVar16;
    if (lVar14 == 0) {
      bVar8 = *(byte *)(plVar16 + 2);
      if (((bVar8 - 1 < 2) ||
          ((bVar8 != 0 &&
           (bVar8 = <tracing_core::callsite::tracing_core::callsite::DefaultCallsite>::register
                              (plVar16), bVar8 != 0)))) &&
         (iVar10 = tracing::__macro_support::__is_enabled(*plVar16,bVar8), iVar10 != 0)) {
        lVar14 = *plVar16;
        if (*(long *)(lVar14 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
          core::option::expect_failed
                    (&DAT_002e5a7c,0x22,&PTR_s__root__cargo_registry_src_index__00adf640);
        }
        uStack_98 = *(undefined8 *)(lVar14 + 0x48);
        local_a0 = *(undefined8 *)(lVar14 + 0x40);
        local_68 = (undefined8 *)(lVar14 + 0x30);
        local_b0 = (undefined **)*local_68;
        local_90 = 0;
        local_88 = &DAT_002e5b37;
        uStack_80 = 0x49;
        local_c8 = &local_b0;
        local_c0 = &local_88;
        local_b8 = &DAT_00adf370;
        local_78 = &local_c8;
        local_70 = 1;
        local_a8 = (code *)*(long *)(lVar14 + 0x38);
        <tracing_core::event::tracing_core::event::Event>::dispatch(lVar14,&local_78);
      }
    }
  }
  return 0;
}


// ===== 007cedb8  FUN_007cedb8 =====

void FUN_007cedb8(undefined8 param_1,undefined1 (*param_2) [16],undefined8 param_3,
                 undefined4 param_4)

{
  void *__ptr;
  undefined8 *puVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  
  auVar3 = <hyper_util::common::timer::Timer_as_hyper::rt::timer::Timer>::sleep_until
                     (param_1,param_3,param_4);
  __ptr = *(void **)*param_2;
  puVar1 = *(undefined8 **)(*param_2 + 8);
  pcVar2 = (code *)*puVar1;
  if (pcVar2 != (code *)0x0) {
                    /* try { // try from 007cedf0 to 007cedf7 has its CatchHandler @ 007cee24 */
    (*pcVar2)(__ptr);
  }
  if (puVar1[1] != 0) {
    free(__ptr);
  }
  *param_2 = auVar3;
  return;
}


// ===== 007cee4c  FUN_007cee4c =====

undefined8 FUN_007cee4c(void)

{
  return 0;
}


// ===== 007cee54  FUN_007cee54 =====

void FUN_007cee54(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  void *__src;
  ulong *local_90;
  code *pcStack_88;
  ulong *puStack_80;
  code *pcStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong local_40;
  ulong local_38;
  
  if ((*(byte *)(param_1 + 9) & 1) != 0) {
    puStack_80 = (ulong *)param_2[1];
    pcStack_88 = (code *)*param_2;
    lStack_70 = param_2[3];
    pcStack_78 = (code *)param_2[2];
    uVar4 = param_1[4];
    uVar3 = param_1[7];
    local_90 = (ulong *)0x0;
    if (uVar3 == uVar4) {
                    /* try { // try from 007cee9c to 007cee9f has its CatchHandler @ 007cefec */
      <alloc::collections::vec_deque::[4]::alloc::collections::vec_deque::VecDeque<hyper::proto::h1::encode::EncodedBuf<bytes::bytes::Bytes>>>
      ::grow();
      uVar3 = param_1[7];
      uVar4 = param_1[4];
    }
    param_1[7] = uVar3 + 1;
    uVar1 = 0;
    if (uVar4 <= param_1[6] + uVar3) {
      uVar1 = uVar4;
    }
    puVar5 = (undefined8 *)(param_1[5] + ((param_1[6] + uVar3) - uVar1) * 0x50);
    puVar5[3] = pcStack_78;
    puVar5[2] = puStack_80;
    puVar5[5] = uStack_68;
    puVar5[4] = lStack_70;
    puVar5[7] = uStack_58;
    puVar5[6] = local_60;
    puVar5[9] = uStack_48;
    puVar5[8] = uStack_50;
    puVar5[1] = pcStack_88;
    *puVar5 = local_90;
    return;
  }
  uVar3 = param_2[2];
                    /* try { // try from 007ceefc to 007cef07 has its CatchHandler @ 007cf000 */
  <hyper::proto::h1::io::[5]::hyper::proto::h1::io::Cursor<alloc::vec::Vec<u8>>>::maybe_unshift
            (param_1,uVar3);
  __src = (void *)param_2[1];
  if (uVar3 != 0) {
    lVar2 = param_1[2];
    do {
      uVar4 = uVar3;
      if ((ulong)(*param_1 - lVar2) < uVar4) {
                    /* try { // try from 007cef6c to 007cef7f has its CatchHandler @ 007cefe8 */
        FUN_0079be54(param_1,lVar2,uVar4,1,1);
        lVar2 = param_1[2];
      }
      memcpy((void *)(param_1[1] + lVar2),__src,uVar4);
      local_38 = param_2[2];
      lVar2 = param_1[2] + uVar4;
      uVar3 = local_38 - uVar4;
      param_1[2] = lVar2;
      local_40 = uVar4;
      if (local_38 < uVar4) {
        local_90 = &local_40;
        pcStack_88 = FUN_007d6358;
        puStack_80 = &local_38;
        pcStack_78 = FUN_007d6358;
                    /* try { // try from 007cefcc to 007cefe3 has its CatchHandler @ 007cf000 */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_fmt
                  (&DAT_002afeea,&local_90,&PTR_s__root__cargo_registry_src_index__00adf870);
      }
      __src = (void *)(param_2[1] + uVar4);
      param_2[1] = (long)__src;
      param_2[2] = uVar3;
    } while (uVar3 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x007cefac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2 + 3,__src,0);
  return;
}


// ===== 007cf024  FUN_007cf024 =====

void FUN_007cf024(long *param_1,ulong *param_2)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  void *__src;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  
  if ((*(byte *)(param_1 + 9) & 1) != 0) {
    uVar15 = param_2[5];
    uVar9 = param_2[4];
    uVar19 = param_2[7];
    uVar18 = param_2[6];
    uVar7 = param_1[4];
    uVar5 = param_1[7];
    uVar16 = param_2[9];
    uVar10 = param_2[8];
    uVar17 = param_2[1];
    uVar12 = *param_2;
    uVar21 = param_2[3];
    uVar20 = param_2[2];
    if (uVar5 == uVar7) {
                    /* try { // try from 007cf07c to 007cf07f has its CatchHandler @ 007cf328 */
      <alloc::collections::vec_deque::[4]::alloc::collections::vec_deque::VecDeque<hyper::proto::h1::encode::EncodedBuf<bytes::bytes::Bytes>>>
      ::grow();
      uVar5 = param_1[7];
      uVar7 = param_1[4];
    }
    param_1[7] = uVar5 + 1;
    uVar1 = 0;
    if (uVar7 <= param_1[6] + uVar5) {
      uVar1 = uVar7;
    }
    puVar8 = (ulong *)(param_1[5] + ((param_1[6] + uVar5) - uVar1) * 0x50);
    puVar8[3] = uVar21;
    puVar8[2] = uVar20;
    puVar8[5] = uVar15;
    puVar8[4] = uVar9;
    puVar8[7] = uVar19;
    puVar8[6] = uVar18;
    puVar8[9] = uVar16;
    puVar8[8] = uVar10;
    puVar8[1] = uVar17;
    *puVar8 = uVar12;
    return;
  }
  uVar5 = *param_2;
  if ((long)uVar5 < 2) {
    if (uVar5 == 0) {
      uVar5 = param_2[3];
    }
    else {
      uVar5 = param_2[5];
      if (param_2[3] <= param_2[5]) {
        uVar5 = param_2[3];
      }
    }
  }
  else {
    if (uVar5 == 2) {
      uVar9 = param_2[9];
      uVar7 = (ulong)(byte)(*(char *)((long)param_2 + 0x3b) - *(char *)((long)param_2 + 0x3a));
      bVar4 = CARRY8(param_2[3],uVar7);
      uVar7 = param_2[3] + uVar7;
    }
    else {
      if (uVar5 == 3) {
        uVar5 = param_2[2];
        goto LAB_007cf15c;
      }
      bVar4 = CARRY8(param_2[2],param_2[5]);
      uVar7 = param_2[2] + param_2[5];
      uVar9 = param_2[8];
    }
    if (bVar4) {
      uVar7 = 0xffffffffffffffff;
    }
    uVar5 = uVar7 + uVar9;
    if (CARRY8(uVar7,uVar9)) {
      uVar5 = 0xffffffffffffffff;
    }
  }
LAB_007cf15c:
                    /* try { // try from 007cf15c to 007cf163 has its CatchHandler @ 007cf33c */
  <hyper::proto::h1::io::[5]::hyper::proto::h1::io::Cursor<alloc::vec::Vec<u8>>>::maybe_unshift
            (param_1,uVar5);
  do {
    uVar5 = *param_2;
    if ((long)uVar5 < 2) {
      if (uVar5 == 0) {
        __src = (void *)param_2[2];
        uVar7 = param_2[3];
      }
      else {
        __src = (void *)param_2[2];
        uVar7 = param_2[5];
        if (param_2[3] <= param_2[5]) {
          uVar7 = param_2[3];
        }
      }
    }
    else if (uVar5 == 2) {
      bVar2 = *(byte *)((long)param_2 + 0x3a);
      uVar7 = (ulong)bVar2;
      bVar3 = *(byte *)((long)param_2 + 0x3b);
      if (param_2[3] == 0 && bVar3 == bVar2) {
        __src = (void *)param_2[8];
        uVar7 = param_2[9];
      }
      else if (bVar3 == bVar2) {
        __src = (void *)param_2[2];
        uVar7 = param_2[3];
      }
      else {
        if ((bVar3 < bVar2) || (0x12 < bVar3)) {
                    /* try { // try from 007cf314 to 007cf323 has its CatchHandler @ 007cf344 */
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (uVar7,(ulong)bVar3,0x12,&PTR_s__root__cargo_registry_src_index__00adcc68);
        }
        __src = (void *)((long)param_2 + uVar7 + 0x28);
        uVar7 = bVar3 - uVar7;
      }
    }
    else if (uVar5 == 3) {
      __src = (void *)param_2[1];
      uVar7 = param_2[2];
    }
    else {
      uVar10 = param_2[2];
      uVar12 = param_2[5];
      lVar6 = 0x18;
      uVar9 = uVar12;
      if (uVar10 != 0) {
        lVar6 = 0;
        uVar9 = uVar10;
      }
      puVar8 = param_2 + 7;
      if (uVar12 != 0 || uVar10 != 0) {
        puVar8 = (ulong *)((long)param_2 + lVar6 + 8);
      }
      __src = (void *)*puVar8;
      uVar7 = param_2[8];
      if (uVar12 != 0 || uVar10 != 0) {
        uVar7 = uVar9;
      }
    }
    if (uVar7 == 0) {
      if (uVar5 < 3) {
        lVar6 = 0x18;
        lVar11 = 0x10;
        lVar13 = 0x20;
        lVar14 = 8;
      }
      else {
        if (uVar5 == 3) {
          return;
        }
        lVar6 = 0x28;
        lVar11 = 0x20;
        lVar13 = 0x30;
        lVar14 = 0x18;
      }
                    /* WARNING: Could not recover jumptable at 0x007cf310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)((long)param_2 + lVar14) + 0x20))
                ((long)param_2 + lVar13,*(undefined8 *)((long)param_2 + lVar11),
                 *(undefined8 *)((long)param_2 + lVar6));
      return;
    }
    lVar6 = param_1[2];
    if ((ulong)(*param_1 - lVar6) < uVar7) {
      FUN_0079be54(param_1,lVar6,uVar7,1,1);
      lVar6 = param_1[2];
    }
    memcpy((void *)(param_1[1] + lVar6),__src,uVar7);
    param_1[2] = param_1[2] + uVar7;
                    /* try { // try from 007cf288 to 007cf2ab has its CatchHandler @ 007cf340 */
    FUN_007d7304(param_2,uVar7);
  } while( true );
}


// ===== 007cf35c  FUN_007cf35c =====

void FUN_007cf35c(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  void *__src;
  ulong *local_98;
  code *pcStack_90;
  ulong *puStack_88;
  code *pcStack_80;
  long local_78;
  long lStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulong local_48;
  ulong local_28;
  
  if ((*(byte *)(param_1 + 9) & 1) != 0) {
    puStack_88 = (ulong *)param_2[1];
    pcStack_90 = (code *)*param_2;
    local_78 = param_2[3];
    pcStack_80 = (code *)param_2[2];
    uVar3 = param_1[4];
    lStack_70 = param_2[4];
    uVar2 = param_1[7];
    local_98 = (ulong *)0x1;
    if (uVar2 == uVar3) {
                    /* try { // try from 007cf3b0 to 007cf3b3 has its CatchHandler @ 007cf54c */
      <alloc::collections::vec_deque::[4]::alloc::collections::vec_deque::VecDeque<hyper::proto::h1::encode::EncodedBuf<bytes::bytes::Bytes>>>
      ::grow();
      uVar2 = param_1[7];
      uVar3 = param_1[4];
    }
    param_1[7] = uVar2 + 1;
    uVar5 = 0;
    if (uVar3 <= param_1[6] + uVar2) {
      uVar5 = uVar3;
    }
    puVar4 = (undefined8 *)(param_1[5] + ((param_1[6] + uVar2) - uVar5) * 0x50);
    puVar4[3] = pcStack_80;
    puVar4[2] = puStack_88;
    puVar4[5] = lStack_70;
    puVar4[4] = local_78;
    puVar4[7] = uStack_60;
    puVar4[6] = local_68;
    puVar4[9] = uStack_50;
    puVar4[8] = local_58;
    puVar4[1] = pcStack_90;
    *puVar4 = local_98;
    return;
  }
  uVar3 = param_2[2];
  uVar2 = param_2[4];
  if (uVar3 <= (ulong)param_2[4]) {
    uVar2 = uVar3;
  }
                    /* try { // try from 007cf428 to 007cf433 has its CatchHandler @ 007cf560 */
  <hyper::proto::h1::io::[5]::hyper::proto::h1::io::Cursor<alloc::vec::Vec<u8>>>::maybe_unshift
            (param_1,uVar2);
  __src = (void *)param_2[1];
  if (uVar2 != 0) {
    lVar1 = param_1[2];
    do {
      uVar5 = uVar2;
      if ((ulong)(*param_1 - lVar1) < uVar5) {
                    /* try { // try from 007cf4ac to 007cf4bf has its CatchHandler @ 007cf548 */
        FUN_0079be54(param_1,lVar1,uVar5,1,1);
        lVar1 = param_1[2];
      }
      memcpy((void *)(param_1[1] + lVar1),__src,uVar5);
      uVar3 = param_2[4];
      lVar1 = param_1[2] + uVar5;
      uVar2 = uVar3 - uVar5;
      param_1[2] = lVar1;
      if (uVar3 < uVar5) {
                    /* try { // try from 007cf4f4 to 007cf543 has its CatchHandler @ 007cf564 */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic
                  ("assertion failed: cnt <= self.limit",0x23,
                   &PTR_s__root__cargo_registry_src_index__00ade330);
      }
      local_28 = param_2[2];
      uVar3 = local_28 - uVar5;
      local_48 = uVar5;
      if (local_28 < uVar5) {
        local_98 = &local_48;
        pcStack_90 = FUN_007c05d8;
        puStack_88 = &local_28;
        pcStack_80 = FUN_007c05d8;
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_fmt
                  (&DAT_002afeea,&local_98,&PTR_s__root__cargo_registry_src_index__00ade318);
      }
      param_2[4] = uVar2;
      __src = (void *)(param_2[1] + uVar5);
      if (uVar3 <= uVar2) {
        uVar2 = uVar3;
      }
      param_2[1] = (long)__src;
      param_2[2] = uVar3;
    } while (uVar2 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x007cf4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2 + 3,__src,uVar3);
  return;
}


// ===== 007cf588  FUN_007cf588 =====

void FUN_007cf588(long *param_1,long *param_2)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  void *__src;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  if ((*(byte *)(param_1 + 9) & 1) != 0) {
    lVar10 = param_2[3];
    lVar8 = param_2[2];
    lVar13 = param_2[5];
    lVar12 = param_2[4];
    lVar7 = param_2[8];
    uVar5 = param_1[4];
    uVar4 = param_1[7];
    lVar15 = param_2[1];
    lVar14 = *param_2;
    lVar11 = param_2[7];
    lVar9 = param_2[6];
    if (uVar4 == uVar5) {
                    /* try { // try from 007cf5f0 to 007cf5f3 has its CatchHandler @ 007cf774 */
      <alloc::collections::vec_deque::[4]::alloc::collections::vec_deque::VecDeque<hyper::proto::h1::encode::EncodedBuf<bytes::bytes::Bytes>>>
      ::grow();
      uVar4 = param_1[7];
      uVar5 = param_1[4];
    }
    param_1[7] = uVar4 + 1;
    uVar1 = 0;
    if (uVar5 <= param_1[6] + uVar4) {
      uVar1 = uVar5;
    }
    puVar6 = (undefined8 *)(param_1[5] + ((param_1[6] + uVar4) - uVar1) * 0x50);
    puVar6[3] = lVar8;
    puVar6[2] = lVar15;
    puVar6[5] = lVar12;
    puVar6[4] = lVar10;
    puVar6[7] = lVar9;
    puVar6[6] = lVar13;
    puVar6[9] = lVar7;
    puVar6[8] = lVar11;
    puVar6[1] = lVar14;
    *puVar6 = 2;
    return;
  }
  uVar4 = (ulong)(byte)(*(char *)((long)param_2 + 0x33) - *(char *)((long)param_2 + 0x32));
  uVar5 = param_2[2] + uVar4;
  if (CARRY8(param_2[2],uVar4)) {
    uVar5 = 0xffffffffffffffff;
  }
  lVar7 = uVar5 + param_2[8];
  if (CARRY8(uVar5,param_2[8])) {
    lVar7 = -1;
  }
                    /* try { // try from 007cf674 to 007cf67b has its CatchHandler @ 007cf788 */
  <hyper::proto::h1::io::[5]::hyper::proto::h1::io::Cursor<alloc::vec::Vec<u8>>>::maybe_unshift
            (param_1,lVar7);
  do {
    bVar2 = *(byte *)((long)param_2 + 0x32);
    uVar5 = (ulong)bVar2;
    bVar3 = *(byte *)((long)param_2 + 0x33);
    uVar4 = param_2[2];
    if (uVar4 == 0 && bVar3 == bVar2) {
      __src = (void *)param_2[7];
      uVar4 = param_2[8];
    }
    else if (bVar3 == bVar2) {
      __src = (void *)param_2[1];
    }
    else {
      if ((bVar3 < bVar2) || (0x12 < bVar3)) {
                    /* try { // try from 007cf760 to 007cf76f has its CatchHandler @ 007cf790 */
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (uVar5,(ulong)bVar3,0x12,&PTR_s__root__cargo_registry_src_index__00adcc68);
      }
      uVar4 = bVar3 - uVar5;
      __src = (void *)((long)param_2 + uVar5 + 0x20);
    }
    if (uVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x007cf75c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x20))(param_2 + 3,param_2[1]);
      return;
    }
    lVar7 = param_1[2];
    if ((ulong)(*param_1 - lVar7) < uVar4) {
      FUN_0079be54(param_1,lVar7,uVar4,1,1);
      lVar7 = param_1[2];
    }
    memcpy((void *)(param_1[1] + lVar7),__src,uVar4);
    param_1[2] = param_1[2] + uVar4;
                    /* try { // try from 007cf710 to 007cf733 has its CatchHandler @ 007cf78c */
    FUN_0079f714(param_2,uVar4);
  } while( true );
}


// ===== 007cf7b4  FUN_007cf7b4 =====

void FUN_007cf7b4(long *param_1,ulong *param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  long local_1a0;
  undefined1 local_198;
  undefined8 local_197;
  undefined8 uStack_18f;
  undefined8 local_187;
  undefined8 uStack_17f;
  undefined8 local_177;
  undefined8 uStack_16f;
  undefined8 local_167;
  undefined8 uStack_15f;
  undefined8 local_157;
  undefined8 uStack_14f;
  undefined8 local_147;
  undefined8 uStack_13f;
  undefined8 local_137;
  undefined7 uStack_12f;
  undefined1 uStack_128;
  undefined7 uStack_127;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  while( true ) {
    uStack_98 = param_4[1];
    local_a0 = *param_4;
    uStack_88 = param_4[3];
    uStack_90 = param_4[2];
    uStack_78 = param_4[5];
    local_80 = param_4[4];
    local_70 = param_4[6];
    if ((param_2[0x13] != 0) &&
       ((*param_2 == 0 ||
        (uVar1 = hyper::proto::h1::role::is_complete_fast(param_2[0x12],param_2[0x13],param_2[1]),
        (uVar1 & 1) != 0)))) {
      <hyper::proto::h1::role::Client_as_hyper::proto::h1::Http1Transaction>::parse
                (&local_1a0,param_2 + 0x12,&local_a0);
      if (local_1a0 == -2) {
        lVar2 = <hyper::error::Error_as_core::convert::From<hyper::error::Parse>>::from();
        goto LAB_007cf8f8;
      }
      uStack_d8 = uStack_14f;
      local_e0 = local_157;
      uStack_c8 = uStack_13f;
      uStack_d0 = local_147;
      local_c0 = local_137;
      uStack_118 = uStack_18f;
      local_120 = local_197;
      uStack_108 = uStack_17f;
      uStack_110 = local_187;
      uStack_f8 = uStack_16f;
      local_100 = local_177;
      uStack_e8 = uStack_15f;
      uStack_f0 = local_167;
      if (local_1a0 != -1) {
        *param_1 = local_1a0;
        *param_2 = 0;
        *(undefined1 *)(param_1 + 1) = local_198;
        *(undefined8 *)((long)param_1 + 0x51) = uStack_14f;
        *(undefined8 *)((long)param_1 + 0x49) = local_157;
        *(undefined8 *)((long)param_1 + 0x61) = uStack_13f;
        *(undefined8 *)((long)param_1 + 0x59) = local_147;
        *(ulong *)((long)param_1 + 0x71) = CONCAT17(uStack_128,uStack_12f);
        *(undefined8 *)((long)param_1 + 0x69) = local_137;
        param_1[0xf] = CONCAT71(uStack_127,uStack_128);
        *(undefined8 *)((long)param_1 + 0x11) = uStack_18f;
        *(undefined8 *)((long)param_1 + 9) = local_197;
        *(undefined8 *)((long)param_1 + 0x21) = uStack_17f;
        *(undefined8 *)((long)param_1 + 0x19) = local_187;
        *(undefined8 *)((long)param_1 + 0x31) = uStack_16f;
        *(undefined8 *)((long)param_1 + 0x29) = local_177;
        *(undefined8 *)((long)param_1 + 0x41) = uStack_15f;
        *(undefined8 *)((long)param_1 + 0x39) = local_167;
        return;
      }
    }
    lVar2 = 0x68;
    if ((char)param_2[0xc] == '\0') {
      lVar2 = 0x70;
    }
    uVar1 = param_2[0x13];
    if (*(ulong *)((long)param_2 + lVar2) <= uVar1) {
      lVar2 = <hyper::error::hyper::error::Error>::new_too_large();
      goto LAB_007cf8f8;
    }
    if (uVar1 != 0) {
      param_2[1] = uVar1;
      uVar1 = 1;
    }
    *param_2 = uVar1;
    auVar3 = FUN_007d4f8c(param_2,param_3);
    if (auVar3._0_8_ != 0) break;
    if (auVar3._8_8_ == 0) {
      lVar2 = <hyper::error::hyper::error::Error>::new_incomplete();
LAB_007cf8f8:
      *param_1 = -1;
      param_1[1] = lVar2;
      return;
    }
  }
  if (auVar3._0_8_ == 2) {
    *param_1 = -2;
    return;
  }
  lVar2 = <hyper::error::hyper::error::Error>::new_io(auVar3._8_8_);
  goto LAB_007cf8f8;
}


// ===== 007cf964  FUN_007cf964 =====

void FUN_007cf964(undefined8 *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  code *pcVar2;
  
  __ptr = (void *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  pcVar2 = (code *)*puVar1;
  if (pcVar2 != (code *)0x0) {
                    /* try { // try from 007cf97c to 007cf983 has its CatchHandler @ 007cf9ac */
    (*pcVar2)(__ptr);
  }
  if (puVar1[1] != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 007cf9d0  FUN_007cf9d0 =====

void FUN_007cf9d0(long *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  code *pcVar2;
  
  if (*param_1 != 0) {
    if (param_1[1] == 0) {
      __ptr = (void *)param_1[2];
      puVar1 = (undefined8 *)param_1[3];
      pcVar2 = (code *)*puVar1;
      if (pcVar2 != (code *)0x0) {
                    /* try { // try from 007cfa14 to 007cfa1b has its CatchHandler @ 007cfa4c */
        (*pcVar2)(__ptr);
      }
      if (puVar1[1] != 0) {
        free(__ptr);
      }
    }
    else {
                    /* try { // try from 007cf9fc to 007cfa03 has its CatchHandler @ 007cfa80 */
      (**(code **)(param_1[1] + 0x20))(param_1 + 4,param_1[2],param_1[3]);
    }
  }
  free(param_1);
  return;
}


// ===== 007cfa9c  FUN_007cfa9c =====

void FUN_007cfa9c(long *param_1)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  
  lVar7 = *param_1;
  if (lVar7 != 0) {
    pcVar1 = (char *)(lVar7 + 0x88);
    *(undefined4 *)(lVar7 + 0xa8) = 1;
    do {
      cVar2 = *pcVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar5) {
        *pcVar1 = '\x01';
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (cVar2 == '\0') {
      lVar3 = *(long *)(lVar7 + 0x78);
      *(undefined8 *)(lVar7 + 0x78) = 0;
      *(undefined4 *)(lVar7 + 0x88) = 0;
      if (lVar3 != 0) {
                    /* try { // try from 007cfaf0 to 007cfaf3 has its CatchHandler @ 007cfb70 */
        (**(code **)(lVar3 + 8))(*(undefined8 *)(lVar7 + 0x80));
      }
    }
    pcVar1 = (char *)(lVar7 + 0xa0);
    do {
      cVar2 = *pcVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar5) {
        *pcVar1 = '\x01';
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (cVar2 == '\0') {
      lVar3 = *(long *)(lVar7 + 0x90);
      *(undefined8 *)(lVar7 + 0x90) = 0;
      if (lVar3 != 0) {
                    /* try { // try from 007cfb1c to 007cfb1f has its CatchHandler @ 007cfb64 */
        (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar7 + 0x98));
      }
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
    }
    plVar6 = (long *)*param_1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar5) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<futures_channel::oneshot::Inner<http::header::map::HeaderMap>>>
      ::drop_slow(param_1);
      return;
    }
  }
  return;
}


// ===== 007cfba4  FUN_007cfba4 =====

void FUN_007cfba4(long *param_1)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  
  lVar7 = *param_1;
  if (lVar7 != 0) {
    pcVar1 = (char *)(lVar7 + 0x60);
    *(undefined4 *)(lVar7 + 0x80) = 1;
    do {
      cVar2 = *pcVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar5) {
        *pcVar1 = '\x01';
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (cVar2 == '\0') {
      lVar3 = *(long *)(lVar7 + 0x50);
      *(undefined8 *)(lVar7 + 0x50) = 0;
      *(undefined4 *)(lVar7 + 0x60) = 0;
      if (lVar3 != 0) {
                    /* try { // try from 007cfbf4 to 007cfc2b has its CatchHandler @ 007cfc64 */
        (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar7 + 0x58));
      }
    }
    pcVar1 = (char *)(lVar7 + 0x78);
    do {
      cVar2 = *pcVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar5) {
        *pcVar1 = '\x01';
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (cVar2 == '\0') {
      lVar3 = *(long *)(lVar7 + 0x68);
      *(undefined8 *)(lVar7 + 0x68) = 0;
      *(undefined4 *)(lVar7 + 0x78) = 0;
      if (lVar3 != 0) {
        (**(code **)(lVar3 + 8))(*(undefined8 *)(lVar7 + 0x70));
      }
    }
    plVar6 = (long *)*param_1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar5) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<futures_channel::oneshot::Inner<hyper_util::client::legacy::client::PoolClient<reqwest::async_impl::body::Body>>>>
      ::drop_slow(param_1);
      return;
    }
  }
  return;
}


// ===== 007cfc98  FUN_007cfc98 =====

void FUN_007cfc98(long *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  if (*param_1 != 0) {
    param_1 = param_1 + 1;
    plVar5 = (long *)*param_1;
    if (plVar5 != (long *)0x0) {
                    /* try { // try from 007cfcb8 to 007cfcdb has its CatchHandler @ 007cfd18 */
      uVar3 = <tokio::sync::oneshot::[9]::tokio::sync::oneshot::State>::set_complete(plVar5 + 6);
      if ((uVar3 & 5) == 1) {
        (**(code **)(plVar5[4] + 0x10))(plVar5[5]);
        plVar5 = (long *)*param_1;
        if (plVar5 == (long *)0x0) {
          return;
        }
      }
      do {
        lVar4 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar4 + -1 == 0) {
        DataMemoryBarrier(2,1);
        <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::oneshot::Inner<core[bcece726f298455b]::result::Result<http[b87e90c26fe47eb4]::response::Response<hyper[9f1bfd30b08ca095]::body::incoming::Incoming>,hyper[9f1bfd30b08ca095]::client::dispatch::TrySendError<http[b87e90c26fe47eb4]::request::Request<reqwest[6fed810f3e38d558]::async_impl::body::Body>>>>>>
        ::drop_slow(param_1);
        return;
      }
    }
  }
  return;
}


// ===== 007cfd50  FUN_007cfd50 =====

void FUN_007cfd50(long *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  if (*param_1 != 0) {
    param_1 = param_1 + 1;
    plVar5 = (long *)*param_1;
    if (plVar5 != (long *)0x0) {
                    /* try { // try from 007cfd70 to 007cfd93 has its CatchHandler @ 007cfdd0 */
      uVar3 = <tokio::sync::oneshot::[9]::tokio::sync::oneshot::State>::set_complete(plVar5 + 0x18);
      if ((uVar3 & 5) == 1) {
        (**(code **)(plVar5[0x16] + 0x10))(plVar5[0x17]);
        plVar5 = (long *)*param_1;
        if (plVar5 == (long *)0x0) {
          return;
        }
      }
      do {
        lVar4 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar4 + -1 == 0) {
        DataMemoryBarrier(2,1);
        <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::oneshot::Inner<core[bcece726f298455b]::result::Result<http[b87e90c26fe47eb4]::response::Response<hyper[9f1bfd30b08ca095]::body::incoming::Incoming>,hyper[9f1bfd30b08ca095]::error::Error>>>>
        ::drop_slow(param_1);
        return;
      }
    }
  }
  return;
}


// ===== 007cfe08  FUN_007cfe08 =====

void FUN_007cfe08(long param_1)

{
  if (*(char *)(param_1 + 0x31) == '\x02') {
    return;
  }
                    /* try { // try from 007cfe2c to 007cfe37 has its CatchHandler @ 007cfe48 */
  FUN_007d2818(param_1 + 0x18);
  FUN_007d192c(param_1);
  return;
}


// ===== 007cfe60  FUN_007cfe60 =====

void FUN_007cfe60(undefined8 *param_1)

{
  code *pcVar1;
  void *__ptr;
  undefined8 *puVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    __ptr = (void *)*param_1;
    if (__ptr != (void *)0x0) {
      puVar2 = (undefined8 *)param_1[1];
      pcVar1 = (code *)*puVar2;
      if (pcVar1 != (code *)0x0) {
                    /* try { // try from 007cfe8c to 007cfe93 has its CatchHandler @ 007cfed4 */
        (*pcVar1)(__ptr);
      }
      if (puVar2[1] != 0) {
        free(__ptr);
      }
    }
    free(param_1);
    return;
  }
  return;
}


// ===== 007cff08  FUN_007cff08 =====

void FUN_007cff08(long *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  if (*param_1 != 0) {
    param_1 = param_1 + 1;
    plVar5 = (long *)*param_1;
    if (plVar5 != (long *)0x0) {
                    /* try { // try from 007cff28 to 007cff4b has its CatchHandler @ 007cff88 */
      uVar3 = <tokio::sync::oneshot::[9]::tokio::sync::oneshot::State>::set_complete(plVar5 + 6);
      if ((uVar3 & 5) == 1) {
        (**(code **)(plVar5[4] + 0x10))(plVar5[5]);
        plVar5 = (long *)*param_1;
        if (plVar5 == (long *)0x0) {
          return;
        }
      }
      do {
        lVar4 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar4 + -1 == 0) {
        DataMemoryBarrier(2,1);
        <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<hyper::upgrade::Upgraded,{backref_38}::error::Error>>>>
        ::drop_slow(param_1);
        return;
      }
    }
  }
  return;
}


// ===== 007cffc0  FUN_007cffc0 =====

void FUN_007cffc0(byte *param_1)

{
  if (((*param_1 != 0xff) && (9 < *param_1)) && (*(long *)(param_1 + 0x10) != 0)) {
    free(*(void **)(param_1 + 8));
    return;
  }
  return;
}


// ===== 007cffec  FUN_007cffec =====

void FUN_007cffec(long *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  code *pcVar2;
  
  if (*param_1 != 0) {
    if (param_1[1] != 0) {
                    /* WARNING: Could not recover jumptable at 0x007d001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1[1] + 0x20))(param_1 + 4,param_1[2],param_1[3]);
      return;
    }
    __ptr = (void *)param_1[2];
    puVar1 = (undefined8 *)param_1[3];
    pcVar2 = (code *)*puVar1;
    if (pcVar2 != (code *)0x0) {
                    /* try { // try from 007d002c to 007d0033 has its CatchHandler @ 007d005c */
      (*pcVar2)(__ptr);
    }
    if (puVar1[1] != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 007d0080  FUN_007d0080 =====

void FUN_007d0080(long param_1)

{
  if (*(char *)(param_1 + 0x70) == '\x02') {
    FUN_007d2768();
    return;
  }
  FUN_007d0e54();
  return;
}


// ===== 007d0094  FUN_007d0094 =====

void FUN_007d0094(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 007d00a4 to 007d00ab has its CatchHandler @ 007d0114 */
  FUN_007d0d48(param_1 + 0x40);
  plVar3 = *(long **)(param_1 + 0x88);
  if (plVar3 != (long *)0x0) {
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 007d00d0 to 007d00d3 has its CatchHandler @ 007d010c */
      <alloc[c1f8e832b0d782c7]::sync::Arc<std[17aff9129faa4dc5]::sync::poison::mutex::Mutex<hyper_util[52a210df7efc1bae]::client::legacy::pool::PoolInner<hyper_util[52a210df7efc1bae]::client::legacy::client::PoolClient<reqwest[6fed810f3e38d558]::async_impl::body::Body>,(http[b87e90c26fe47eb4]::uri::scheme::Scheme,http[b87e90c26fe47eb4]::uri::authority::Authority)>>>>
      ::drop_slow();
    }
  }
  plVar3 = *(long **)(param_1 + 0x78);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
    drop_slow((undefined8 *)(param_1 + 0x78));
    return;
  }
  return;
}


// ===== 007d0174  FUN_007d0174 =====

void FUN_007d0174(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  if ((char)param_1[2] != '\x02') {
    lVar4 = *param_1;
    plVar5 = (long *)(lVar4 + 0x40);
    do {
      lVar6 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      puVar1 = (ulong *)(lVar4 + 0x38);
      if ((long)*puVar1 < 0) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 & 0x7fffffffffffffff;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
                    /* try { // try from 007d01c8 to 007d01cf has its CatchHandler @ 007d0234 */
      <futures_core::task::__internal::atomic_waker::futures_core::task::__internal::atomic_waker::AtomicWaker>
      ::wake(lVar4 + 0x48);
    }
    plVar5 = (long *)*param_1;
    do {
      lVar4 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 007d01ec to 007d01f3 has its CatchHandler @ 007d022c */
      <alloc::sync::[n]::alloc::sync::Arc<futures_channel::mpsc::BoundedInner<core::result::Result<bytes::bytes::Bytes,hyper::error::Error>>>>
      ::drop_slow(param_1);
    }
    plVar5 = (long *)param_1[1];
    do {
      lVar4 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<std::sync::poison::mutex::Mutex<futures_channel::mpsc::SenderTask>>>
      ::drop_slow(param_1 + 1);
      return;
    }
  }
  return;
}


// ===== 007d028c  FUN_007d028c =====

void FUN_007d028c(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 007d029c to 007d029f has its CatchHandler @ 007d02dc */
  FUN_0079377c();
  plVar3 = (long *)*param_1;
  if (plVar3 != (long *)0x0) {
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<futures_channel::mpsc::BoundedInner<core::result::Result<bytes::bytes::Bytes,hyper::error::Error>>>>
      ::drop_slow(param_1);
      return;
    }
  }
  return;
}


// ===== 007d0314  FUN_007d0314 =====

void FUN_007d0314(long *param_1)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  
  lVar7 = *param_1;
  pcVar1 = (char *)(lVar7 + 0x88);
  *(undefined4 *)(lVar7 + 0xa8) = 1;
  do {
    cVar2 = *pcVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar5) {
      *pcVar1 = '\x01';
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (cVar2 == '\0') {
    lVar3 = *(long *)(lVar7 + 0x78);
    *(undefined8 *)(lVar7 + 0x78) = 0;
    *(undefined4 *)(lVar7 + 0x88) = 0;
    if (lVar3 != 0) {
                    /* try { // try from 007d0360 to 007d0397 has its CatchHandler @ 007d03d0 */
      (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar7 + 0x80));
    }
  }
  pcVar1 = (char *)(lVar7 + 0xa0);
  do {
    cVar2 = *pcVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar5) {
      *pcVar1 = '\x01';
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (cVar2 == '\0') {
    lVar3 = *(long *)(lVar7 + 0x90);
    *(undefined8 *)(lVar7 + 0x90) = 0;
    *(undefined4 *)(lVar7 + 0xa0) = 0;
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 8))(*(undefined8 *)(lVar7 + 0x98));
    }
  }
  plVar6 = (long *)*param_1;
  do {
    lVar7 = *plVar6;
    cVar2 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar5) {
      *plVar6 = lVar7 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar7 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<futures_channel::oneshot::Inner<http::header::map::HeaderMap>>>
    ::drop_slow(param_1);
    return;
  }
  return;
}


// ===== 007d0404  FUN_007d0404 =====

void FUN_007d0404(long param_1)

{
  void *__ptr;
  
  if ((9 < *(byte *)(param_1 + 0xb8)) && (*(long *)(param_1 + 200) != 0)) {
    free(*(void **)(param_1 + 0xc0));
  }
                    /* try { // try from 007d0434 to 007d043b has its CatchHandler @ 007d049c */
  FUN_007d200c(param_1 + 0x60);
                    /* try { // try from 007d043c to 007d0443 has its CatchHandler @ 007d0494 */
  FUN_007d2620(param_1);
  __ptr = *(void **)(param_1 + 0xd0);
  if (__ptr != (void *)0x0) {
                    /* try { // try from 007d044c to 007d0453 has its CatchHandler @ 007d0478 */
    FUN_007b3bec(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 007d04bc  FUN_007d04bc =====

void FUN_007d04bc(long param_1)

{
  void *__ptr;
  
                    /* try { // try from 007d04cc to 007d04cf has its CatchHandler @ 007d0524 */
  FUN_007d2620();
  __ptr = *(void **)(param_1 + 0x60);
  if (__ptr != (void *)0x0) {
                    /* try { // try from 007d04d8 to 007d04df has its CatchHandler @ 007d0504 */
    FUN_007b3bec(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 007d0540  FUN_007d0540 =====

void FUN_007d0540(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  void *pvVar3;
  
  if ((9 < *(byte *)(param_1 + 0xb8)) && (*(long *)(param_1 + 200) != 0)) {
    free(*(void **)(param_1 + 0xc0));
  }
                    /* try { // try from 007d0570 to 007d0577 has its CatchHandler @ 007d0644 */
  FUN_007d200c(param_1 + 0x60);
                    /* try { // try from 007d0578 to 007d057f has its CatchHandler @ 007d063c */
  FUN_007d2620(param_1);
  pvVar3 = *(void **)(param_1 + 0xd0);
  if (pvVar3 != (void *)0x0) {
                    /* try { // try from 007d0588 to 007d058f has its CatchHandler @ 007d0620 */
    FUN_007b3bec(pvVar3);
    free(pvVar3);
  }
  if (*(long *)(param_1 + 0xe0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x007d05bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0xe0) + 0x20))
              (param_1 + 0xf8,*(undefined8 *)(param_1 + 0xe8),*(undefined8 *)(param_1 + 0xf0));
    return;
  }
  pvVar3 = *(void **)(param_1 + 0xe8);
  puVar1 = *(undefined8 **)(param_1 + 0xf0);
  pcVar2 = (code *)*puVar1;
  if (pcVar2 != (code *)0x0) {
                    /* try { // try from 007d05cc to 007d05d3 has its CatchHandler @ 007d05fc */
    (*pcVar2)(pvVar3);
  }
  if (puVar1[1] != 0) {
    free(pvVar3);
    return;
  }
  return;
}


// ===== 007d0670  FUN_007d0670 =====

void FUN_007d0670(long param_1)

{
  void *__ptr;
  
                    /* try { // try from 007d0680 to 007d0683 has its CatchHandler @ 007d06d0 */
  FUN_007d2620();
  __ptr = *(void **)(param_1 + 0x60);
  if (__ptr != (void *)0x0) {
                    /* try { // try from 007d068c to 007d0693 has its CatchHandler @ 007d06b4 */
    FUN_007b3bec(__ptr);
    free(__ptr);
  }
  FUN_007d2448(param_1 + 0x70);
  return;
}


// ===== 007d06f8  FUN_007d06f8 =====

void FUN_007d06f8(long *param_1)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  
  __ptr = (void *)param_1[1];
  lVar2 = param_1[2] + 1;
  lVar1 = (long)__ptr + 0x38;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 007d0734 to 007d0737 has its CatchHandler @ 007d0780 */
    (**(code **)(*(long *)(lVar1 + -0x18) + 0x20))
              (lVar1,*(undefined8 *)(lVar1 + -0x10),*(undefined8 *)(lVar1 + -8));
    lVar1 = lVar1 + 0x48;
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 007d07d4  FUN_007d07d4 =====

void FUN_007d07d4(long *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  code *pcVar2;
  
  if (*param_1 != 2) {
    __ptr = (void *)param_1[1];
    puVar1 = (undefined8 *)param_1[2];
    pcVar2 = (code *)*puVar1;
    if (*param_1 == 0) {
      if (pcVar2 != (code *)0x0) {
                    /* try { // try from 007d080c to 007d0813 has its CatchHandler @ 007d083c */
        (*pcVar2)(__ptr);
      }
    }
    else if (pcVar2 != (code *)0x0) {
                    /* try { // try from 007d07fc to 007d0803 has its CatchHandler @ 007d0840 */
      (*pcVar2)(__ptr);
    }
    if (puVar1[1] != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 007d0864  FUN_007d0864 =====

void FUN_007d0864(long *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  
                    /* try { // try from 007d0874 to 007d0877 has its CatchHandler @ 007d09b4 */
  FUN_007a6df0();
  if (*param_1 == 0) {
    if (param_1[1] != 0) {
      param_1 = param_1 + 2;
      lVar5 = *param_1;
      if (lVar5 != 0) {
                    /* try { // try from 007d08ec to 007d090f has its CatchHandler @ 007d094c */
        uVar3 = <tokio::sync::oneshot::[9]::tokio::sync::oneshot::State>::set_complete(lVar5 + 0x30)
        ;
        if ((uVar3 & 5) == 1) {
          (**(code **)(*(long *)(lVar5 + 0x20) + 0x10))(*(undefined8 *)(lVar5 + 0x28));
        }
        plVar4 = (long *)*param_1;
        if (plVar4 != (long *)0x0) {
          do {
            lVar5 = *plVar4;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar2) {
              *plVar4 = lVar5 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar5 + -1 == 0) {
            DataMemoryBarrier(2,1);
            <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::oneshot::Inner<core[bcece726f298455b]::result::Result<http[b87e90c26fe47eb4]::response::Response<hyper[9f1bfd30b08ca095]::body::incoming::Incoming>,hyper[9f1bfd30b08ca095]::client::dispatch::TrySendError<http[b87e90c26fe47eb4]::request::Request<reqwest[6fed810f3e38d558]::async_impl::body::Body>>>>>>
            ::drop_slow(param_1);
            return;
          }
        }
      }
    }
  }
  else if (param_1[1] != 0) {
    param_1 = param_1 + 2;
    lVar5 = *param_1;
    if (lVar5 != 0) {
                    /* try { // try from 007d088c to 007d08af has its CatchHandler @ 007d0980 */
      uVar3 = <tokio::sync::oneshot::[9]::tokio::sync::oneshot::State>::set_complete(lVar5 + 0xc0);
      if ((uVar3 & 5) == 1) {
        (**(code **)(*(long *)(lVar5 + 0xb0) + 0x10))(*(undefined8 *)(lVar5 + 0xb8));
      }
      plVar4 = (long *)*param_1;
      if (plVar4 != (long *)0x0) {
        do {
          lVar5 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar5 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar5 + -1 == 0) {
          DataMemoryBarrier(2,1);
          <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::oneshot::Inner<core[bcece726f298455b]::result::Result<http[b87e90c26fe47eb4]::response::Response<hyper[9f1bfd30b08ca095]::body::incoming::Incoming>,hyper[9f1bfd30b08ca095]::error::Error>>>>
          ::drop_slow(param_1);
          return;
        }
      }
    }
  }
  return;
}


// ===== 007d09e0  FUN_007d09e0 =====

void FUN_007d09e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  char *pcVar2;
  long lVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  
  plVar9 = param_1 + 1;
  lVar10 = *plVar9;
  puVar1 = (undefined8 *)(lVar10 + 0x10);
  do {
    uVar7 = *puVar1;
    cVar6 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = 3;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
                    /* try { // try from 007d0a10 to 007d0a57 has its CatchHandler @ 007d0b8c */
  cVar6 = <want::State_as_core::convert::From<usize>>::from(uVar7);
  if (cVar6 == '\x02') {
    pcVar2 = (char *)(lVar10 + 0x28);
    do {
      cVar6 = *pcVar2;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
      if (bVar4) {
        *pcVar2 = '\x01';
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0' || cVar6 != '\0');
    lVar3 = *(long *)(lVar10 + 0x18);
    *(undefined8 *)(lVar10 + 0x18) = 0;
    *(undefined4 *)(lVar10 + 0x28) = 0;
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 8))(*(undefined8 *)(lVar10 + 0x20));
    }
  }
                    /* try { // try from 007d0a58 to 007d0a5f has its CatchHandler @ 007d0b2c */
  FUN_0079fa40(param_1);
  plVar8 = (long *)*param_1;
  do {
    lVar10 = *plVar8;
    cVar6 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar4) {
      *plVar8 = lVar10 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (lVar10 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 007d0a7c to 007d0a83 has its CatchHandler @ 007d0b24 */
    <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::mpsc::chan::Chan<hyper[9f1bfd30b08ca095]::client::dispatch::Envelope<http[b87e90c26fe47eb4]::request::Request<reqwest[6fed810f3e38d558]::async_impl::body::Body>,http[b87e90c26fe47eb4]::response::Response<hyper[9f1bfd30b08ca095]::body::incoming::Incoming>>,tokio[8c8895dbfa691109]::sync::mpsc::unbounded::Semaphore>>>
    ::drop_slow(param_1);
  }
  lVar10 = *plVar9;
  puVar1 = (undefined8 *)(lVar10 + 0x10);
  do {
    uVar7 = *puVar1;
    cVar6 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = 3;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
                    /* try { // try from 007d0a9c to 007d0ae3 has its CatchHandler @ 007d0b5c */
  cVar6 = <want::State_as_core::convert::From<usize>>::from(uVar7);
  if (cVar6 == '\x02') {
    pcVar2 = (char *)(lVar10 + 0x28);
    do {
      cVar6 = *pcVar2;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
      if (bVar4) {
        *pcVar2 = '\x01';
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0' || cVar6 != '\0');
    lVar3 = *(long *)(lVar10 + 0x18);
    *(undefined8 *)(lVar10 + 0x18) = 0;
    *(undefined4 *)(lVar10 + 0x28) = 0;
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 8))(*(undefined8 *)(lVar10 + 0x20));
    }
  }
  plVar8 = (long *)*plVar9;
  do {
    lVar10 = *plVar8;
    cVar6 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar4) {
      *plVar8 = lVar10 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (lVar10 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<want::Inner>>::drop_slow(plVar9);
    return;
  }
  return;
}


// ===== 007d0bac  thunk_FUN_007d1c84 =====

void thunk_FUN_007d1c84(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  FUN_007d1d54(param_1 + 0x38);
  plVar3 = *(long **)(param_1 + 0x60);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<alloc::vec::Vec<reqwest::proxy::Proxy>>>::drop_slow();
  }
  if (*(char *)(param_1 + 0x30) == '\x02') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007d1cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x20))
            (param_1 + 0x28,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  return;
}


// ===== 007d0bb0  FUN_007d0bb0 =====

void FUN_007d0bb0(undefined8 *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  code *pcVar2;
  
  __ptr = (void *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  pcVar2 = (code *)*puVar1;
  if (pcVar2 != (code *)0x0) {
                    /* try { // try from 007d0bc8 to 007d0bcf has its CatchHandler @ 007d0bf8 */
    (*pcVar2)(__ptr);
  }
  if (puVar1[1] != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 007d0c1c  FUN_007d0c1c =====

void FUN_007d0c1c(undefined8 *param_1)

{
  code *pcVar1;
  void *__ptr;
  undefined8 *puVar2;
  
  __ptr = (void *)*param_1;
  if (__ptr != (void *)0x0) {
    puVar2 = (undefined8 *)param_1[1];
    pcVar1 = (code *)*puVar2;
    if (pcVar1 != (code *)0x0) {
                    /* try { // try from 007d0c3c to 007d0c43 has its CatchHandler @ 007d0c6c */
      (*pcVar1)(__ptr);
    }
    if (puVar2[1] != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 007d0c90  FUN_007d0c90 =====

void FUN_007d0c90(long *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  code *pcVar2;
  
  if (*param_1 == 2) {
    return;
  }
  __ptr = (void *)param_1[0xf];
  puVar1 = (undefined8 *)param_1[0x10];
  pcVar2 = (code *)*puVar1;
  if (pcVar2 != (code *)0x0) {
                    /* try { // try from 007d0ccc to 007d0cd3 has its CatchHandler @ 007d0cfc */
    (*pcVar2)(__ptr);
  }
  if (puVar1[1] != 0) {
    free(__ptr);
  }
  FUN_007d21d8(param_1);
  return;
}


// ===== 007d0d2c  FUN_007d0d2c =====

void FUN_007d0d2c(undefined8 *param_1)

{
  if (param_1[2] != 0) {
    free((void *)*param_1);
    return;
  }
  return;
}


// ===== 007d0d48  FUN_007d0d48 =====

void FUN_007d0d48(byte *param_1)

{
  char cVar1;
  bool bVar2;
  void *__ptr;
  long lVar3;
  long *plVar4;
  
                    /* try { // try from 007d0d58 to 007d0d5b has its CatchHandler @ 007d0e2c */
  FUN_007ce4a4();
  if (1 < *param_1) {
    plVar4 = *(long **)(param_1 + 8);
                    /* try { // try from 007d0d78 to 007d0d7f has its CatchHandler @ 007d0df0 */
    (**(code **)(*plVar4 + 0x20))(plVar4 + 3,plVar4[1],plVar4[2]);
    free(plVar4);
  }
                    /* try { // try from 007d0d9c to 007d0da3 has its CatchHandler @ 007d0e24 */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x20))
            (param_1 + 0x28,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  __ptr = *(void **)(param_1 + 0x30);
  if ((long)__ptr - 1U < 0xfffffffffffffffe) {
    plVar4 = (long *)((long)__ptr + 8);
    do {
      lVar3 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar3 + -1 == 0) {
      DataMemoryBarrier(2,1);
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 007d0e54  FUN_007d0e54 =====

void FUN_007d0e54(byte *param_1)

{
  char cVar1;
  bool bVar2;
  void *__ptr;
  long lVar3;
  long *plVar4;
  
                    /* try { // try from 007d0e64 to 007d0e67 has its CatchHandler @ 007d0f70 */
  FUN_007cb9b0();
  if (param_1[0x61] != 2) {
                    /* try { // try from 007d0e74 to 007d0e7b has its CatchHandler @ 007d0f54 */
    FUN_007d2818(param_1 + 0x48);
                    /* try { // try from 007d0e7c to 007d0e83 has its CatchHandler @ 007d0f4c */
    FUN_007d192c(param_1 + 0x30);
  }
  if (1 < *param_1) {
    plVar4 = *(long **)(param_1 + 8);
                    /* try { // try from 007d0ea0 to 007d0ea7 has its CatchHandler @ 007d0f18 */
    (**(code **)(*plVar4 + 0x20))(plVar4 + 3,plVar4[1],plVar4[2]);
    free(plVar4);
  }
                    /* try { // try from 007d0ec4 to 007d0ecb has its CatchHandler @ 007d0f68 */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x20))
            (param_1 + 0x28,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  __ptr = *(void **)(param_1 + 0x68);
  if ((long)__ptr - 1U < 0xfffffffffffffffe) {
    plVar4 = (long *)((long)__ptr + 8);
    do {
      lVar3 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar3 + -1 == 0) {
      DataMemoryBarrier(2,1);
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 007d0fa0  FUN_007d0fa0 =====

void FUN_007d0fa0(long param_1)

{
  int iVar1;
  void *pvVar2;
  undefined8 *puVar3;
  int iVar4;
  code *pcVar5;
  
  iVar4 = *(int *)(param_1 + 8);
  iVar1 = iVar4;
  if (iVar4 < 1000000000) {
    iVar1 = 999999999;
  }
  if (iVar1 == 1000000000) {
    pvVar2 = *(void **)(param_1 + 0x10);
    puVar3 = *(undefined8 **)(param_1 + 0x18);
    pcVar5 = (code *)*puVar3;
    if (pcVar5 != (code *)0x0) {
                    /* try { // try from 007d1020 to 007d1027 has its CatchHandler @ 007d10c0 */
      (*pcVar5)(pvVar2);
    }
    if (puVar3[1] != 0) {
      free(pvVar2);
      return;
    }
  }
  else if (iVar1 == 999999999) {
    if (iVar4 == -2) {
      pvVar2 = *(void **)(param_1 + 0x10);
      puVar3 = *(undefined8 **)(param_1 + 0x18);
      pcVar5 = (code *)*puVar3;
      if (pcVar5 != (code *)0x0) {
                    /* try { // try from 007d0ff4 to 007d0ffb has its CatchHandler @ 007d1080 */
        (*pcVar5)(pvVar2);
      }
      if (puVar3[1] != 0) {
        free(pvVar2);
      }
    }
    else {
                    /* try { // try from 007d1048 to 007d104f has its CatchHandler @ 007d10a0 */
      FUN_007d1c84(param_1);
    }
    if (*(char *)(param_1 + 0x70) != -1) {
      FUN_007d200c((char *)(param_1 + 0x70));
      return;
    }
  }
  return;
}


// ===== 007d10e0  FUN_007d10e0 =====

void FUN_007d10e0(long *param_1)

{
  if (*param_1 == 2) {
    return;
  }
                    /* try { // try from 007d1104 to 007d110b has its CatchHandler @ 007d1170 */
  FUN_007d16cc();
  if (param_1[0x40] != 2) {
                    /* try { // try from 007d1118 to 007d111f has its CatchHandler @ 007d114c */
    FUN_007d0864(param_1 + 0x40);
  }
                    /* try { // try from 007d1120 to 007d1127 has its CatchHandler @ 007d1168 */
  FUN_007d09e0(param_1 + 0x43);
  if ((char)param_1[0x4a] != -1) {
                    /* try { // try from 007d1134 to 007d113b has its CatchHandler @ 007d1160 */
    FUN_007d22f4(param_1 + 0x46);
  }
  FUN_007cf9d0(param_1[0x4b]);
  return;
}


// ===== 007d11a4  FUN_007d11a4 =====

void FUN_007d11a4(ulong *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  code *pcVar6;
  long *plVar7;
  long lVar8;
  void *__ptr;
  
  lVar5 = *param_1 - 2;
  lVar8 = 0;
  if (1 < *param_1) {
    lVar8 = lVar5;
  }
  if (lVar8 == 0) {
    if (lVar5 == 0) {
      return;
    }
    if ((int)param_1[0x14] != -3) {
                    /* try { // try from 007d1238 to 007d123f has its CatchHandler @ 007d152c */
      FUN_007d0fa0(param_1 + 0x13);
    }
    FUN_007d0094(param_1);
    return;
  }
  if (lVar8 != 1) {
    return;
  }
  cVar3 = (char)param_1[0xf];
  if (cVar3 == '\x02') {
    FUN_007d2768(param_1 + 1);
    return;
  }
  if (cVar3 == -1) {
    return;
  }
  if (cVar3 != -2) {
    FUN_007d0e54(param_1 + 1);
    return;
  }
  __ptr = (void *)param_1[1];
  cVar3 = *(char *)((long)__ptr + 0xc9);
  if (cVar3 == '\0') {
    pvVar1 = *(void **)((long)__ptr + 0x40);
    puVar2 = *(undefined8 **)((long)__ptr + 0x48);
    pcVar6 = (code *)*puVar2;
    if (pcVar6 != (code *)0x0) {
                    /* try { // try from 007d1310 to 007d1317 has its CatchHandler @ 007d13dc */
      (*pcVar6)(pvVar1);
    }
    if (puVar2[1] != 0) {
      free(pvVar1);
    }
    plVar7 = *(long **)((long)__ptr + 0xb0);
    do {
      lVar8 = *plVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 007d134c to 007d134f has its CatchHandler @ 007d13cc */
      <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
      drop_slow();
    }
    plVar7 = *(long **)((long)__ptr + 0xc0);
    if (plVar7 != (long *)0x0) {
      do {
        lVar8 = *plVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 + -1 == 0) {
        DataMemoryBarrier(2,1);
                    /* try { // try from 007d1374 to 007d1377 has its CatchHandler @ 007d13c4 */
        <alloc[c1f8e832b0d782c7]::sync::Arc<std[17aff9129faa4dc5]::sync::poison::mutex::Mutex<hyper_util[52a210df7efc1bae]::client::legacy::pool::PoolInner<hyper_util[52a210df7efc1bae]::client::legacy::client::PoolClient<reqwest[6fed810f3e38d558]::async_impl::body::Body>,(http[b87e90c26fe47eb4]::uri::scheme::Scheme,http[b87e90c26fe47eb4]::uri::authority::Authority)>>>>
        ::drop_slow();
      }
    }
                    /* try { // try from 007d1378 to 007d137f has its CatchHandler @ 007d1450 */
    FUN_007d0d48((long)__ptr + 0x78);
  }
  else {
    if (cVar3 == '\x03') {
      if (*(char *)((long)__ptr + 0x123) == '\0') {
        pvVar1 = *(void **)((long)__ptr + 0x100);
        puVar2 = *(undefined8 **)((long)__ptr + 0x108);
        pcVar6 = (code *)*puVar2;
        if (pcVar6 != (code *)0x0) {
                    /* try { // try from 007d1290 to 007d1297 has its CatchHandler @ 007d13a4 */
          (*pcVar6)(pvVar1);
        }
        if (puVar2[1] != 0) {
          free(pvVar1);
        }
      }
    }
    else {
      if (cVar3 != '\x04') goto LAB_007d1388;
      *(undefined1 *)((long)__ptr + 0xca) = 0;
                    /* try { // try from 007d1208 to 007d120f has its CatchHandler @ 007d149c */
      FUN_007d192c((long)__ptr + 0xd0);
    }
    plVar7 = *(long **)((long)__ptr + 0xb0);
    do {
      lVar8 = *plVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 007d12cc to 007d12cf has its CatchHandler @ 007d1460 */
      <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
      drop_slow();
    }
    plVar7 = *(long **)((long)__ptr + 0xc0);
    if (plVar7 != (long *)0x0) {
      do {
        lVar8 = *plVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 + -1 == 0) {
        DataMemoryBarrier(2,1);
                    /* try { // try from 007d12f4 to 007d12f7 has its CatchHandler @ 007d13d4 */
        <alloc[c1f8e832b0d782c7]::sync::Arc<std[17aff9129faa4dc5]::sync::poison::mutex::Mutex<hyper_util[52a210df7efc1bae]::client::legacy::pool::PoolInner<hyper_util[52a210df7efc1bae]::client::legacy::client::PoolClient<reqwest[6fed810f3e38d558]::async_impl::body::Body>,(http[b87e90c26fe47eb4]::uri::scheme::Scheme,http[b87e90c26fe47eb4]::uri::authority::Authority)>>>>
        ::drop_slow();
      }
    }
                    /* try { // try from 007d12f8 to 007d12ff has its CatchHandler @ 007d1500 */
    FUN_007d0d48((long)__ptr + 0x78);
  }
                    /* try { // try from 007d1380 to 007d1387 has its CatchHandler @ 007d1510 */
  FUN_007d2818((long)__ptr + 0x58);
LAB_007d1388:
  free(__ptr);
  return;
}


// ===== 007d1548  FUN_007d1548 =====

void FUN_007d1548(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 007d1558 to 007d155b has its CatchHandler @ 007d1594 */
  FUN_0079f408();
  plVar3 = (long *)*param_1;
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::mpsc::chan::Chan<hyper[9f1bfd30b08ca095]::client::dispatch::Envelope<http[b87e90c26fe47eb4]::request::Request<reqwest[6fed810f3e38d558]::async_impl::body::Body>,http[b87e90c26fe47eb4]::response::Response<hyper[9f1bfd30b08ca095]::body::incoming::Incoming>>,tokio[8c8895dbfa691109]::sync::mpsc::unbounded::Semaphore>>>
    ::drop_slow(param_1);
    return;
  }
  return;
}


// ===== 007d15c8  FUN_007d15c8 =====

void FUN_007d15c8(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 007d15d8 to 007d15db has its CatchHandler @ 007d1614 */
  FUN_0079fa40();
  plVar3 = (long *)*param_1;
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::mpsc::chan::Chan<hyper[9f1bfd30b08ca095]::client::dispatch::Envelope<http[b87e90c26fe47eb4]::request::Request<reqwest[6fed810f3e38d558]::async_impl::body::Body>,http[b87e90c26fe47eb4]::response::Response<hyper[9f1bfd30b08ca095]::body::incoming::Incoming>>,tokio[8c8895dbfa691109]::sync::mpsc::unbounded::Semaphore>>>
    ::drop_slow(param_1);
    return;
  }
  return;
}


// ===== 007d1648  FUN_007d1648 =====

void FUN_007d1648(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
  }
                    /* try { // try from 007d166c to 007d1673 has its CatchHandler @ 007d16a4 */
  FUN_007927a4(param_1 + 4);
  if (param_1[4] != 0) {
    free((void *)param_1[5]);
    return;
  }
  return;
}


// ===== 007d16cc  FUN_007d16cc =====

void FUN_007d16cc(long param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  code *pcVar2;
  
  __ptr = *(void **)(param_1 + 0x78);
  puVar1 = *(undefined8 **)(param_1 + 0x80);
  pcVar2 = (code *)*puVar1;
  if (pcVar2 != (code *)0x0) {
                    /* try { // try from 007d16ec to 007d16f3 has its CatchHandler @ 007d175c */
    (*pcVar2)(__ptr);
  }
  if (puVar1[1] != 0) {
    free(__ptr);
  }
                    /* try { // try from 007d1708 to 007d170f has its CatchHandler @ 007d17a8 */
  <bytes::bytes_mut::BytesMut_as_core::ops::drop::Drop>::drop(param_1 + 0x90);
  if (*(long *)(param_1 + 0x10) != 0) {
    free(*(void **)(param_1 + 0x18));
  }
                    /* try { // try from 007d1724 to 007d172b has its CatchHandler @ 007d1784 */
  FUN_007927a4(param_1 + 0x30);
  if (*(long *)(param_1 + 0x30) != 0) {
    free(*(void **)(param_1 + 0x38));
  }
  FUN_007d28e8(param_1 + 0xb8);
  return;
}


// ===== 007d17cc  FUN_007d17cc =====

void FUN_007d17cc(ulong *param_1)

{
  if (*param_1 < 3) {
                    /* WARNING: Could not recover jumptable at 0x007d17fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[1] + 0x20))(param_1 + 4,param_1[2],param_1[3]);
    return;
  }
  if (*param_1 == 3) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007d182c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[3] + 0x20))(param_1 + 6,param_1[4],param_1[5]);
  return;
}


// ===== 007d1830  FUN_007d1830 =====

void FUN_007d1830(long *param_1)

{
  if (*param_1 != 2) {
                    /* try { // try from 007d184c to 007d1853 has its CatchHandler @ 007d1864 */
    FUN_007d0864(param_1);
  }
  FUN_007d09e0(param_1 + 3);
  return;
}


// ===== 007d187c  FUN_007d187c =====

void FUN_007d187c(long *param_1,ulong param_2)

{
  void *__ptr;
  undefined8 *puVar1;
  code *pcVar2;
  
  if ((param_2 & 1) != 0) {
    if (*param_1 != 0) {
      if (param_1[1] == 0) {
        __ptr = (void *)param_1[2];
        puVar1 = (undefined8 *)param_1[3];
        pcVar2 = (code *)*puVar1;
        if (pcVar2 != (code *)0x0) {
                    /* try { // try from 007d18c4 to 007d18cb has its CatchHandler @ 007d18f4 */
          (*pcVar2)(__ptr);
        }
        if (puVar1[1] != 0) {
          free(__ptr);
        }
      }
      else {
                    /* try { // try from 007d18ac to 007d18b3 has its CatchHandler @ 007d191c */
        (**(code **)(param_1[1] + 0x20))(param_1 + 4,param_1[2],param_1[3]);
      }
    }
    *param_1 = 0;
  }
  return;
}


// ===== 007d192c  FUN_007d192c =====

void FUN_007d192c(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 007d1958 to 007d195f has its CatchHandler @ 007d19a0 */
    <alloc::sync::[n]::alloc::sync::Arc<want::Inner>>::drop_slow(param_1);
  }
                    /* try { // try from 007d1960 to 007d1967 has its CatchHandler @ 007d19b4 */
  FUN_0079f408(param_1 + 1);
  plVar3 = (long *)param_1[1];
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::mpsc::chan::Chan<hyper[9f1bfd30b08ca095]::client::dispatch::Envelope<http[b87e90c26fe47eb4]::request::Request<reqwest[6fed810f3e38d558]::async_impl::body::Body>,http[b87e90c26fe47eb4]::response::Response<hyper[9f1bfd30b08ca095]::body::incoming::Incoming>>,tokio[8c8895dbfa691109]::sync::mpsc::unbounded::Semaphore>>>
    ::drop_slow(param_1 + 1);
    return;
  }
  return;
}


// ===== 007d19e8  FUN_007d19e8 =====

void FUN_007d19e8(long param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  
  plVar4 = *(long **)(param_1 + 0x148);
  if (plVar4 != (long *)0x0) {
    do {
      lVar6 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 007d1a1c to 007d1a23 has its CatchHandler @ 007d1b14 */
      <alloc[c1f8e832b0d782c7]::sync::Arc<std[17aff9129faa4dc5]::sync::poison::mutex::Mutex<hyper_util[52a210df7efc1bae]::client::legacy::pool::PoolInner<hyper_util[52a210df7efc1bae]::client::legacy::client::PoolClient<reqwest[6fed810f3e38d558]::async_impl::body::Body>,(http[b87e90c26fe47eb4]::uri::scheme::Scheme,http[b87e90c26fe47eb4]::uri::authority::Authority)>>>>
      ::drop_slow(param_1 + 0x148);
    }
  }
  if (1 < *(byte *)(param_1 + 0xb0)) {
    plVar4 = *(long **)(param_1 + 0xb8);
                    /* try { // try from 007d1a40 to 007d1a47 has its CatchHandler @ 007d1b2c */
    (**(code **)(*plVar4 + 0x20))(plVar4 + 3,plVar4[1],plVar4[2]);
    free(plVar4);
  }
                    /* try { // try from 007d1a64 to 007d1a6b has its CatchHandler @ 007d1b64 */
  (**(code **)(*(long *)(param_1 + 0xc0) + 0x20))
            (param_1 + 0xd8,*(undefined8 *)(param_1 + 200),*(undefined8 *)(param_1 + 0xd0));
  if (*(int *)(param_1 + 0x48) == -2) {
    __ptr = *(void **)(param_1 + 0x50);
    puVar1 = *(undefined8 **)(param_1 + 0x58);
    pcVar5 = (code *)*puVar1;
    if (pcVar5 != (code *)0x0) {
                    /* try { // try from 007d1a84 to 007d1a8b has its CatchHandler @ 007d1af4 */
      (*pcVar5)(__ptr);
    }
    if (puVar1[1] != 0) {
      free(__ptr);
    }
  }
  else {
                    /* try { // try from 007d1aa4 to 007d1aab has its CatchHandler @ 007d1b24 */
    FUN_007d1c84(param_1 + 0x40);
  }
                    /* try { // try from 007d1aac to 007d1ab3 has its CatchHandler @ 007d1b5c */
  FUN_007d200c(param_1 + 0xe0);
  plVar4 = *(long **)(param_1 + 0x138);
  do {
    lVar6 = *plVar4;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar3) {
      *plVar4 = lVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar6 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
    drop_slow(param_1 + 0x138);
    return;
  }
  return;
}


// ===== 007d1ba8  FUN_007d1ba8 =====

void FUN_007d1ba8(long *param_1)

{
  undefined8 *puVar1;
  char *pcVar2;
  long lVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  
  lVar9 = *param_1;
  puVar1 = (undefined8 *)(lVar9 + 0x10);
  do {
    uVar7 = *puVar1;
    cVar6 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = 3;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
                    /* try { // try from 007d1bd0 to 007d1c17 has its CatchHandler @ 007d1c50 */
  cVar6 = <want::State_as_core::convert::From<usize>>::from(uVar7);
  if (cVar6 == '\x02') {
    pcVar2 = (char *)(lVar9 + 0x28);
    do {
      cVar6 = *pcVar2;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
      if (bVar4) {
        *pcVar2 = '\x01';
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0' || cVar6 != '\0');
    lVar3 = *(long *)(lVar9 + 0x18);
    *(undefined8 *)(lVar9 + 0x18) = 0;
    *(undefined4 *)(lVar9 + 0x28) = 0;
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 8))(*(undefined8 *)(lVar9 + 0x20));
    }
  }
  plVar8 = (long *)*param_1;
  do {
    lVar9 = *plVar8;
    cVar6 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar4) {
      *plVar8 = lVar9 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (lVar9 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<want::Inner>>::drop_slow(param_1);
    return;
  }
  return;
}


// ===== 007d1c84  FUN_007d1c84 =====

void FUN_007d1c84(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 007d1c94 to 007d1c9b has its CatchHandler @ 007d1cfc */
  FUN_007d1d54(param_1 + 0x38);
  plVar3 = *(long **)(param_1 + 0x60);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 007d1cbc to 007d1cbf has its CatchHandler @ 007d1cf4 */
    <alloc::sync::[n]::alloc::sync::Arc<alloc::vec::Vec<reqwest::proxy::Proxy>>>::drop_slow();
  }
  if (*(char *)(param_1 + 0x30) == '\x02') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007d1cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x20))
            (param_1 + 0x28,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  return;
}


// ===== 007d1d54  FUN_007d1d54 =====

void FUN_007d1d54(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 007d1d80 to 007d1d87 has its CatchHandler @ 007d1e18 */
    <alloc::sync::[n]::alloc::sync::Arc<hyper_util::client::legacy::connect::http::Config>>::
    drop_slow(param_1);
  }
  plVar3 = (long *)param_1[1];
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 007d1da8 to 007d1dab has its CatchHandler @ 007d1e10 */
    <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
    drop_slow();
  }
  plVar3 = (long *)param_1[3];
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 007d1dcc to 007d1dcf has its CatchHandler @ 007d1e08 */
    <alloc::sync::[n]::alloc::sync::Arc<rustls::client::client_conn::ClientConfig>>::drop_slow();
  }
  plVar3 = (long *)param_1[4];
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<rustls::client::client_conn::ClientConfig>>::drop_slow
              (param_1 + 4);
    return;
  }
  return;
}


// ===== 007d1e9c  FUN_007d1e9c =====

void FUN_007d1e9c(long param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  code *pcVar2;
  
  if (*(int *)(param_1 + 8) != -2) {
    FUN_007d1c84();
    return;
  }
  __ptr = *(void **)(param_1 + 0x10);
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  pcVar2 = (code *)*puVar1;
  if (pcVar2 != (code *)0x0) {
                    /* try { // try from 007d1ec0 to 007d1ec7 has its CatchHandler @ 007d1efc */
    (*pcVar2)(__ptr);
  }
  if (puVar1[1] != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 007d1f20  FUN_007d1f20 =====

void FUN_007d1f20(undefined8 *param_1)

{
  code *pcVar1;
  void *__ptr;
  undefined8 *puVar2;
  
  __ptr = (void *)*param_1;
  if (__ptr != (void *)0x0) {
    puVar2 = (undefined8 *)param_1[1];
    pcVar1 = (code *)*puVar2;
    if (pcVar1 != (code *)0x0) {
                    /* try { // try from 007d1f48 to 007d1f4f has its CatchHandler @ 007d1f80 */
      (*pcVar1)(__ptr);
    }
    if (puVar2[1] != 0) {
      free(__ptr);
    }
  }
  free(param_1);
  return;
}


// ===== 007d1fb4  FUN_007d1fb4 =====

void FUN_007d1fb4(void *param_1)

{
  if (param_1 != (void *)0x0) {
                    /* try { // try from 007d1fc4 to 007d1fcb has its CatchHandler @ 007d1ff0 */
    FUN_007b3bec();
    free(param_1);
    return;
  }
  return;
}


// ===== 007d200c  FUN_007d200c =====

void FUN_007d200c(byte *param_1)

{
  long *__ptr;
  
  if (1 < *param_1) {
    __ptr = *(long **)(param_1 + 8);
                    /* try { // try from 007d2038 to 007d203f has its CatchHandler @ 007d2080 */
    (**(code **)(*__ptr + 0x20))(__ptr + 3,__ptr[1],__ptr[2]);
    free(__ptr);
  }
                    /* try { // try from 007d205c to 007d2063 has its CatchHandler @ 007d20b0 */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x20))
            (param_1 + 0x28,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x007d207c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x20))
            (param_1 + 0x48,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  return;
}


// ===== 007d20d4  FUN_007d20d4 =====

void FUN_007d20d4(long *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  code *pcVar2;
  
  if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x007d20fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x20))(param_1 + 3,param_1[1],param_1[2]);
    return;
  }
  __ptr = (void *)param_1[1];
  puVar1 = (undefined8 *)param_1[2];
  pcVar2 = (code *)*puVar1;
  if (pcVar2 != (code *)0x0) {
                    /* try { // try from 007d210c to 007d2113 has its CatchHandler @ 007d213c */
    (*pcVar2)(__ptr);
  }
  if (puVar1[1] != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 007d2160  FUN_007d2160 =====

void FUN_007d2160(void *param_1,undefined8 *param_2)

{
  if ((code *)*param_2 != (code *)0x0) {
                    /* try { // try from 007d2180 to 007d2187 has its CatchHandler @ 007d21b8 */
    (*(code *)*param_2)(param_1);
  }
  if (param_2[1] != 0) {
    free(param_1);
    return;
  }
  return;
}


// ===== 007d21d8  FUN_007d21d8 =====

void FUN_007d21d8(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 007d21e8 to 007d21eb has its CatchHandler @ 007d2274 */
  <tokio::runtime::time::entry::TimerEntry_as_core::ops::drop::Drop>::drop();
  if (*param_1 == 0) {
    plVar3 = (long *)param_1[1];
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>>::
      drop_slow();
    }
  }
  else {
    plVar3 = (long *)param_1[1];
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 007d2214 to 007d223b has its CatchHandler @ 007d226c */
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>>
      ::drop_slow();
    }
  }
  if ((param_1[4] != 0) && (param_1[9] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x007d225c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[9] + 0x18))(param_1[10]);
    return;
  }
  return;
}


// ===== 007d22a8  FUN_007d22a8 =====

void FUN_007d22a8(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (*param_1 == 0) {
    plVar3 = (long *)param_1[1];
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>>::
      drop_slow();
      return;
    }
  }
  else {
    plVar3 = (long *)param_1[1];
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>>
      ::drop_slow();
      return;
    }
  }
  return;
}


// ===== 007d22f4  FUN_007d22f4 =====

void FUN_007d22f4(long *param_1)

{
  char *pcVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  char cVar5;
  long *plVar6;
  long lVar7;
  
  plVar6 = (long *)param_1[1];
  do {
    lVar7 = *plVar6;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar4) {
      *plVar6 = lVar7 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar7 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 007d2324 to 007d2327 has its CatchHandler @ 007d2420 */
    <alloc::sync::[n]::alloc::sync::Arc<hyper::common::watch::Shared>>::drop_slow();
  }
                    /* try { // try from 007d2328 to 007d232f has its CatchHandler @ 007d2430 */
  FUN_007d0174(param_1 + 2);
  lVar7 = *param_1;
  if (lVar7 != 0) {
    pcVar1 = (char *)(lVar7 + 0x88);
    *(undefined4 *)(lVar7 + 0xa8) = 1;
    do {
      cVar3 = *pcVar1;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar4) {
        *pcVar1 = '\x01';
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (cVar3 == '\0') {
      lVar2 = *(long *)(lVar7 + 0x78);
      *(undefined8 *)(lVar7 + 0x78) = 0;
      *(undefined4 *)(lVar7 + 0x88) = 0;
      if (lVar2 != 0) {
                    /* try { // try from 007d2370 to 007d2373 has its CatchHandler @ 007d23f0 */
        (**(code **)(lVar2 + 8))(*(undefined8 *)(lVar7 + 0x80));
      }
    }
    pcVar1 = (char *)(lVar7 + 0xa0);
    do {
      cVar3 = *pcVar1;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar4) {
        *pcVar1 = '\x01';
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (cVar3 == '\0') {
      lVar2 = *(long *)(lVar7 + 0x90);
      *(undefined8 *)(lVar7 + 0x90) = 0;
      if (lVar2 != 0) {
                    /* try { // try from 007d239c to 007d239f has its CatchHandler @ 007d23e4 */
        (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar7 + 0x98));
      }
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
    }
    plVar6 = (long *)*param_1;
    do {
      lVar7 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<futures_channel::oneshot::Inner<http::header::map::HeaderMap>>>
      ::drop_slow(param_1);
      return;
    }
  }
  return;
}


// ===== 007d2448  FUN_007d2448 =====

void FUN_007d2448(long *param_1)

{
  char *pcVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  char cVar5;
  long *plVar6;
  long lVar7;
  
  if (*param_1 != 0) {
                    /* try { // try from 007d245c to 007d2463 has its CatchHandler @ 007d25d8 */
    <hyper::common::watch::Sender_as_core::ops::drop::Drop>::drop();
    plVar6 = (long *)*param_1;
    do {
      lVar7 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 007d2480 to 007d2487 has its CatchHandler @ 007d259c */
      <alloc::sync::[n]::alloc::sync::Arc<hyper::common::watch::Shared>>::drop_slow(param_1);
    }
                    /* try { // try from 007d2488 to 007d248f has its CatchHandler @ 007d25a4 */
    FUN_0079377c(param_1 + 3);
    plVar6 = (long *)param_1[3];
    if (plVar6 != (long *)0x0) {
      do {
        lVar7 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 + -1 == 0) {
        DataMemoryBarrier(2,1);
                    /* try { // try from 007d24b0 to 007d24b7 has its CatchHandler @ 007d2564 */
        <alloc::sync::[n]::alloc::sync::Arc<futures_channel::mpsc::BoundedInner<core::result::Result<bytes::bytes::Bytes,hyper::error::Error>>>>
        ::drop_slow(param_1 + 3);
      }
    }
    param_1 = param_1 + 1;
    lVar7 = *param_1;
    pcVar1 = (char *)(lVar7 + 0x88);
    *(undefined4 *)(lVar7 + 0xa8) = 1;
    do {
      cVar3 = *pcVar1;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar4) {
        *pcVar1 = '\x01';
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (cVar3 == '\0') {
      lVar2 = *(long *)(lVar7 + 0x78);
      *(undefined8 *)(lVar7 + 0x78) = 0;
      *(undefined4 *)(lVar7 + 0x88) = 0;
      if (lVar2 != 0) {
                    /* try { // try from 007d24f4 to 007d252b has its CatchHandler @ 007d256c */
        (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar7 + 0x80));
      }
    }
    pcVar1 = (char *)(lVar7 + 0xa0);
    do {
      cVar3 = *pcVar1;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar4) {
        *pcVar1 = '\x01';
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (cVar3 == '\0') {
      lVar2 = *(long *)(lVar7 + 0x90);
      *(undefined8 *)(lVar7 + 0x90) = 0;
      *(undefined4 *)(lVar7 + 0xa0) = 0;
      if (lVar2 != 0) {
        (**(code **)(lVar2 + 8))(*(undefined8 *)(lVar7 + 0x98));
      }
    }
    plVar6 = (long *)*param_1;
    do {
      lVar7 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<futures_channel::oneshot::Inner<http::header::map::HeaderMap>>>
      ::drop_slow(param_1);
      return;
    }
  }
  return;
}


// ===== 007d2620  FUN_007d2620 =====

void FUN_007d2620(long param_1)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    free(*(void **)(param_1 + 0x48));
  }
                    /* try { // try from 007d2650 to 007d2657 has its CatchHandler @ 007d26e4 */
  FUN_0078aa8c(param_1 + 0x18);
  if (*(long *)(param_1 + 0x18) != 0) {
    free(*(void **)(param_1 + 0x20));
  }
  __ptr = *(void **)(param_1 + 0x38);
  lVar2 = *(long *)(param_1 + 0x40) + 1;
  lVar1 = (long)__ptr + 0x38;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 007d2698 to 007d269b has its CatchHandler @ 007d2714 */
    (**(code **)(*(long *)(lVar1 + -0x18) + 0x20))
              (lVar1,*(undefined8 *)(lVar1 + -0x10),*(undefined8 *)(lVar1 + -8));
    lVar1 = lVar1 + 0x48;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 007d2768  FUN_007d2768 =====

void FUN_007d2768(undefined8 *param_1)

{
  code *pcVar1;
  void *__ptr;
  undefined8 *puVar2;
  
  __ptr = (void *)*param_1;
  if (__ptr != (void *)0x0) {
    puVar2 = (undefined8 *)param_1[1];
    pcVar1 = (code *)*puVar2;
    if (pcVar1 != (code *)0x0) {
                    /* try { // try from 007d2790 to 007d2797 has its CatchHandler @ 007d27dc */
      (*pcVar1)(__ptr);
    }
    if (puVar2[1] != 0) {
      free(__ptr);
    }
  }
  if (*(char *)((long)param_1 + 0x29) == '\x02') {
    return;
  }
  FUN_007d2818(param_1 + 2);
  return;
}


// ===== 007d2818  FUN_007d2818 =====

void FUN_007d2818(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  void *__ptr;
  undefined8 *puVar6;
  
  __ptr = (void *)*param_1;
  if (__ptr != (void *)0x0) {
    puVar6 = (undefined8 *)param_1[1];
    pcVar3 = (code *)*puVar6;
    if (pcVar3 != (code *)0x0) {
                    /* try { // try from 007d2840 to 007d2847 has its CatchHandler @ 007d289c */
      (*pcVar3)(__ptr);
    }
    if (puVar6[1] != 0) {
      free(__ptr);
    }
  }
  plVar4 = (long *)param_1[2];
  do {
    lVar5 = *plVar4;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = lVar5 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar5 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<core::sync::atomic::Atomic<bool>>>::drop_slow(param_1 + 2);
    return;
  }
  return;
}


// ===== 007d28e8  FUN_007d28e8 =====

void FUN_007d28e8(long param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  
  if (*(long *)(param_1 + 0x20) != -1) {
                    /* try { // try from 007d290c to 007d290f has its CatchHandler @ 007d2ac8 */
    FUN_007d2620();
  }
                    /* try { // try from 007d2914 to 007d2917 has its CatchHandler @ 007d2adc */
  FUN_007cfe60(*(undefined8 *)(param_1 + 0x120));
  if (((*(byte *)(param_1 + 0x108) != 0xff) && (9 < *(byte *)(param_1 + 0x108))) &&
     (*(long *)(param_1 + 0x118) != 0)) {
    free(*(void **)(param_1 + 0x110));
  }
  plVar5 = *(long **)(param_1 + 0x128);
  if (plVar5 != (long *)0x0) {
    do {
      lVar7 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 007d2960 to 007d2967 has its CatchHandler @ 007d2a84 */
      <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
      drop_slow(param_1 + 0x128);
    }
  }
  if ((*(long *)(param_1 + 0x80) == 1) || (*(long *)(param_1 + 0x80) == 2)) {
    if ((*(ulong *)(param_1 + 0x88) < 2) && (*(long *)(param_1 + 0xb8) != 0)) {
                    /* try { // try from 007d2994 to 007d2997 has its CatchHandler @ 007d2a8c */
      <bytes::bytes_mut::BytesMut_as_core::ops::drop::Drop>::drop();
    }
  }
  if ((-0x7ffffffffffffffd < *(long *)(param_1 + 0xe8)) && (1 < *(long *)(param_1 + 0xe8) + 2U)) {
    lVar7 = *(long *)(param_1 + 0xf8) + 1;
    lVar3 = *(long *)(param_1 + 0xf0) + 0x18;
    while (lVar7 = lVar7 + -1, lVar7 != 0) {
                    /* try { // try from 007d29dc to 007d29df has its CatchHandler @ 007d2b24 */
      (**(code **)(*(long *)(lVar3 + -0x18) + 0x20))
                (lVar3,*(undefined8 *)(lVar3 + -0x10),*(undefined8 *)(lVar3 + -8));
      lVar3 = lVar3 + 0x28;
    }
    if (*(long *)(param_1 + 0xe8) != 0) {
      free(*(void **)(param_1 + 0xf0));
    }
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar5 = (long *)(param_1 + 0x18);
    lVar7 = *plVar5;
    if (lVar7 != 0) {
                    /* try { // try from 007d2a14 to 007d2a37 has its CatchHandler @ 007d2a94 */
      uVar4 = <tokio::sync::oneshot::[9]::tokio::sync::oneshot::State>::set_complete(lVar7 + 0x30);
      if ((uVar4 & 5) == 1) {
        (**(code **)(*(long *)(lVar7 + 0x20) + 0x10))(*(undefined8 *)(lVar7 + 0x28));
      }
      plVar6 = (long *)*plVar5;
      if (plVar6 != (long *)0x0) {
        do {
          lVar7 = *plVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 + -1 == 0) {
          DataMemoryBarrier(2,1);
          <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<hyper::upgrade::Upgraded,{backref_38}::error::Error>>>>
          ::drop_slow(plVar5);
          return;
        }
      }
    }
  }
  return;
}


// ===== 007d2b84  FUN_007d2b84 =====

void FUN_007d2b84(long *param_1)

{
  if ((*param_1 == 1) || (*param_1 == 2)) {
    if (((ulong)param_1[1] < 2) && (param_1[7] != 0)) {
      <bytes::bytes_mut::BytesMut_as_core::ops::drop::Drop>::drop();
      return;
    }
  }
  return;
}


// ===== 007d2bb4  FUN_007d2bb4 =====

void FUN_007d2bb4(long *param_1)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  if ((-0x7ffffffffffffffd < lVar2) && (1 < lVar2 + 2U)) {
    __ptr = (void *)param_1[1];
    lVar3 = param_1[2] + 1;
    lVar1 = (long)__ptr + 0x18;
    while (lVar3 = lVar3 + -1, lVar3 != 0) {
                    /* try { // try from 007d2c20 to 007d2c23 has its CatchHandler @ 007d2c54 */
      (**(code **)(*(long *)(lVar1 + -0x18) + 0x20))
                (lVar1,*(undefined8 *)(lVar1 + -0x10),*(undefined8 *)(lVar1 + -8));
      lVar1 = lVar1 + 0x28;
    }
    if (lVar2 != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 007d2ca4  FUN_007d2ca4 =====

void FUN_007d2ca4(byte *param_1)

{
  long *__ptr;
  
  if (1 < *param_1) {
    __ptr = *(long **)(param_1 + 8);
                    /* try { // try from 007d2cd4 to 007d2cdb has its CatchHandler @ 007d2d0c */
    (**(code **)(*__ptr + 0x20))(__ptr + 3,__ptr[1],__ptr[2]);
    free(__ptr);
  }
                    /* WARNING: Could not recover jumptable at 0x007d2d08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x20))
            (param_1 + 0x28,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  return;
}


// ===== 007d2d40  FUN_007d2d40 =====

void FUN_007d2d40(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined1 auStack_300 [184];
  undefined1 auStack_248 [328];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  memcpy(auStack_300,param_2,0x200);
  uStack_78 = param_2[0x11];
  local_80 = param_2[0x10];
  uStack_68 = param_2[0x13];
  uStack_70 = param_2[0x12];
  uStack_58 = param_2[0x15];
  local_60 = param_2[0x14];
  local_50 = param_2[0x16];
  uStack_b8 = param_2[9];
  local_c0 = param_2[8];
  uStack_a8 = param_2[0xb];
  uStack_b0 = param_2[10];
  uStack_98 = param_2[0xd];
  local_a0 = param_2[0xc];
  uStack_88 = param_2[0xf];
  uStack_90 = param_2[0xe];
  uStack_f8 = param_2[1];
  local_100 = *param_2;
  uStack_e8 = param_2[3];
  uStack_f0 = param_2[2];
  uStack_d8 = param_2[5];
  local_e0 = param_2[4];
  uStack_c8 = param_2[7];
  uStack_d0 = param_2[6];
                    /* try { // try from 007d2db0 to 007d2dbb has its CatchHandler @ 007d2e44 */
  FUN_007d447c(&local_338,&local_100);
                    /* try { // try from 007d2dbc to 007d2dc3 has its CatchHandler @ 007d2e3c */
  FUN_007a39c8(auStack_248);
  cVar1 = *(char *)(param_2 + 0x4a);
  param_1[1] = uStack_330;
  *param_1 = local_338;
  param_1[2] = local_328;
  param_1[4] = uStack_318;
  param_1[3] = local_320;
  param_1[6] = uStack_308;
  param_1[5] = uStack_310;
  uVar5 = param_2[0x41];
  uVar4 = param_2[0x40];
  uVar2 = param_2[0x42];
  param_1[10] = param_2[0x43];
  param_1[9] = uVar2;
  uVar3 = param_2[0x45];
  uVar2 = param_2[0x44];
  param_1[8] = uVar5;
  param_1[7] = uVar4;
  param_1[0xc] = uVar3;
  param_1[0xb] = uVar2;
  if (cVar1 != -1) {
                    /* try { // try from 007d2e00 to 007d2e07 has its CatchHandler @ 007d2e28 */
    FUN_007d22f4(param_2 + 0x46);
  }
  FUN_007cf9d0(param_2[0x4b]);
  return;
}


// ===== 007d2e84  FUN_007d2e84 =====

/* WARNING: Removing unreachable block (ram,0x007d3354) */

void FUN_007d2e84(undefined8 *param_1,long param_2,undefined8 param_3,uint param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  uint *puVar9;
  code *pcVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  uint *puVar16;
  int iVar17;
  uint *unaff_x24;
  uint uVar18;
  void *pvVar19;
  long *plVar20;
  uint *puVar21;
  uint *puVar22;
  uint *puVar23;
  undefined1 auVar24 [16];
  uint *local_610;
  uint *puStack_608;
  uint *puStack_600;
  uint *local_5f8;
  uint *puStack_5f0;
  uint *local_5e8;
  uint *puStack_5e0;
  uint *local_5d8;
  uint *puStack_5d0;
  uint *local_5c8;
  uint *puStack_5c0;
  uint *local_5b8;
  uint *local_5b0;
  uint *puStack_5a8;
  uint *puStack_5a0;
  uint *puStack_598;
  uint *local_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 local_570;
  undefined8 uStack_568;
  undefined8 local_560;
  undefined8 uStack_558;
  undefined8 local_550;
  undefined8 uStack_548;
  undefined8 local_540;
  uint *puStack_538;
  uint *puStack_530;
  uint *local_528;
  uint *puStack_520;
  uint *local_510;
  uint *puStack_508;
  uint *local_500;
  uint *puStack_4f8;
  undefined8 local_4f0;
  uint *puStack_4e8;
  uint *local_4e0;
  uint *puStack_4d8;
  uint *local_4d0;
  uint *puStack_4c8;
  uint *local_4c0;
  uint *puStack_4b8;
  uint *local_4b0;
  uint *puStack_4a8;
  uint *puStack_4a0;
  uint *puStack_498;
  uint *local_490;
  uint *puStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  uint *local_430;
  uint *puStack_428;
  uint *puStack_420;
  uint *puStack_418;
  uint *local_410;
  uint *puStack_408;
  uint *local_400;
  uint *local_3f0;
  uint *puStack_3e8;
  uint *puStack_3e0;
  uint *local_3d8;
  uint *puStack_3d0;
  uint *local_3c8;
  uint *puStack_3c0;
  uint *local_3b8;
  uint *puStack_3b0;
  uint *local_3a8;
  uint *puStack_3a0;
  uint *local_398;
  uint *puStack_390;
  uint *puStack_388;
  uint *local_380;
  uint *puStack_378;
  uint *local_370;
  uint *puStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 local_318;
  uint *local_310;
  uint *puStack_308;
  uint *puStack_300;
  uint *puStack_2f8;
  uint *local_2f0;
  uint *puStack_2e8;
  uint *local_2e0 [2];
  uint *local_2d0;
  uint *puStack_2c8;
  uint *puStack_2c0;
  uint *puStack_2b8;
  uint *local_2b0;
  uint *puStack_2a8;
  uint *local_2a0;
  uint *puStack_298;
  undefined8 local_290;
  uint *puStack_288;
  uint *puStack_280;
  uint *puStack_278;
  uint *local_270;
  uint *puStack_268;
  uint *puStack_260;
  uint *puStack_258;
  uint *local_250;
  uint *puStack_248;
  uint *puStack_240;
  uint *puStack_238;
  uint *local_230;
  uint *puStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8;
  undefined7 uStack_1d7;
  undefined1 local_1d0 [8];
  uint *puStack_1c8;
  uint *local_1c0;
  uint *puStack_1b8;
  uint *local_1b0;
  uint *puStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 local_168;
  uint *local_160;
  uint *puStack_158;
  uint *local_150;
  uint *puStack_148;
  uint *local_140;
  uint *puStack_138;
  uint *local_130;
  uint *puStack_128;
  uint *local_120;
  uint *puStack_118;
  uint *local_110;
  uint *puStack_108;
  uint *local_100;
  uint *puStack_f8;
  uint *local_f0;
  uint *local_e8;
  uint *local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  uint *local_88;
  uint *puStack_80;
  uint *local_78;
  uint *puStack_70;
  
  iVar17 = 0;
  puVar1 = (undefined8 *)(param_2 + 0x230);
LAB_007d2ee0:
  if (iVar17 != 0x10) {
LAB_007d2f04:
    do {
      if ((*(byte *)(param_2 + 0x260) & 1) != 0) goto LAB_007d33c8;
      if ((*(long *)(param_2 + 0x138) != 0) || (*(long *)(param_2 + 0x1a0) == -0x8000000000000000))
      {
        cVar4 = *(char *)(param_2 + 0x250);
        *(undefined1 *)(param_2 + 0x250) = 0xff;
        if (cVar4 == -1) {
          auVar24 = FUN_007a604c(param_2,param_3);
          puVar21 = auVar24._8_8_;
          if ((auVar24 & (undefined1  [16])0x1) != (undefined1  [16])0x0) goto LAB_007d33c8;
          break;
        }
        puStack_2a8 = *(uint **)(param_2 + 0x238);
        local_2b0 = (uint *)*puVar1;
        puStack_298 = *(uint **)(param_2 + 0x248);
        local_2a0 = *(uint **)(param_2 + 0x240);
        local_290._0_5_ = CONCAT41(*(undefined4 *)(param_2 + 0x251),cVar4);
        local_290 = (uint *)CONCAT44(*(undefined4 *)(param_2 + 0x254),(undefined4)local_290);
        puVar21 = unaff_x24;
        if (*(long *)(param_2 + 0x138) - 1U < 2) {
                    /* try { // try from 007d2f60 to 007d2f6b has its CatchHandler @ 007d4288 */
          auVar24 = <hyper::body::incoming::[1]::hyper::body::incoming::Sender>::poll_ready
                              (&local_2b0,param_3);
          puVar21 = auVar24._8_8_;
          if (auVar24._0_8_ == 1) {
            puStack_508 = puStack_2a8;
            local_510 = local_2b0;
            puStack_4f8 = puStack_298;
            local_500 = local_2a0;
            local_4f0 = local_290;
            if (*(char *)(param_2 + 0x250) != -1) {
                    /* try { // try from 007d3390 to 007d3397 has its CatchHandler @ 007d4068 */
              FUN_007d22f4(param_2 + 0x230);
            }
LAB_007d3398:
            *(uint **)(param_2 + 0x250) = local_4f0;
            *(uint **)(param_2 + 0x238) = puStack_508;
            *puVar1 = local_510;
            *(uint **)(param_2 + 0x248) = puStack_4f8;
            *(uint **)(param_2 + 0x240) = local_500;
            goto LAB_007d33c8;
          }
          if (puVar21 == (uint *)0x0) {
                    /* try { // try from 007d2fe4 to 007d2ff3 has its CatchHandler @ 007d4288 */
            FUN_007a52c0(&local_3f0,param_2,param_3);
            puVar16 = puStack_3e8;
            unaff_x24 = puVar21;
            if (local_3f0 == (uint *)&DAT_fffffffffffffffe ||
                (long)local_3f0 + 2 < 0 != SCARRY8((long)local_3f0,2)) {
              if (local_3f0 != (uint *)0xfffffffffffffffd) {
                if (local_3f0 != (uint *)&DAT_fffffffffffffffe) goto LAB_007d311c;
                    /* try { // try from 007d3014 to 007d301b has its CatchHandler @ 007d41d0 */
                uVar7 = <hyper::error::hyper::error::Error>::new(7);
                    /* try { // try from 007d301c to 007d3033 has its CatchHandler @ 007d4288 */
                FUN_0079fda8(uVar7,puVar16);
                <hyper::body::incoming::[1]::hyper::body::incoming::Sender>::send_error
                          (&local_2b0,uVar7);
                puVar21 = puVar16;
              }
            }
            else if (local_3f0 == (uint *)0xffffffffffffffff) {
                    /* try { // try from 007d3064 to 007d3077 has its CatchHandler @ 007d4258 */
              <hyper::body::incoming::[1]::hyper::body::incoming::Sender>::try_send_data
                        (&local_160,&local_2b0,&puStack_3e8);
              if (local_160 == (uint *)0x0) {
                puStack_508 = puStack_2a8;
                local_510 = local_2b0;
                puStack_4f8 = puStack_298;
                local_500 = local_2a0;
                local_4f0 = local_290;
                puVar21 = local_290;
                puVar16 = local_2b0;
                puVar9 = puStack_2a8;
                puVar22 = local_2a0;
                puVar23 = puStack_298;
                if (*(char *)(param_2 + 0x250) != -1) {
                    /* try { // try from 007d329c to 007d32a3 has its CatchHandler @ 007d408c */
                  FUN_007d22f4(param_2 + 0x230);
                  puVar21 = local_4f0;
                  puVar16 = local_510;
                  puVar9 = puStack_508;
                  puVar22 = local_500;
                  puVar23 = puStack_4f8;
                }
                goto LAB_007d32ac;
              }
              puStack_508 = puStack_158;
              local_510 = local_160;
              puStack_4f8 = puStack_148;
              local_500 = local_150;
              if (*(long *)(param_2 + 0x138) - 1U < 2) {
                    /* try { // try from 007d3098 to 007d309f has its CatchHandler @ 007d40dc */
                <hyper::proto::h1::conn::[5]::hyper::proto::h1::conn::State>::close_read
                          (param_2 + 0xb8);
              }
                    /* try { // try from 007d30ac to 007d30b7 has its CatchHandler @ 007d4258 */
              (**(code **)(local_510 + 8))(&puStack_4f8,puStack_508,local_500);
            }
            else {
              if (local_3f0 == (uint *)0x3) {
                puStack_508 = puStack_2a8;
                local_510 = local_2b0;
                puStack_4f8 = puStack_298;
                local_500 = local_2a0;
                local_4f0 = local_290;
                if (*(char *)(param_2 + 0x250) != -1) {
                    /* try { // try from 007d3cbc to 007d3cc3 has its CatchHandler @ 007d3f98 */
                  FUN_007d22f4(param_2 + 0x230);
                }
                goto LAB_007d3398;
              }
LAB_007d311c:
              local_610 = local_3f0;
              puStack_5e0 = puStack_3c0;
              local_5e8 = local_3c8;
              puStack_5d0 = puStack_3b0;
              local_5d8 = local_3b8;
              puStack_5c0 = puStack_3a0;
              local_5c8 = local_3a8;
              local_5b8 = local_398;
              puStack_600 = puStack_3e0;
              puStack_608 = puStack_3e8;
              puStack_5f0 = puStack_3d0;
              local_5f8 = local_3d8;
                    /* try { // try from 007d3158 to 007d3167 has its CatchHandler @ 007d4258 */
              <hyper::body::incoming::[1]::hyper::body::incoming::Sender>::try_send_trailers
                        (&local_510,&local_2b0,&local_610);
              puVar16 = local_510;
              if (local_510 == (uint *)&DAT_fffffffffffffffe) {
                puStack_158 = puStack_2a8;
                local_160 = local_2b0;
                puStack_148 = puStack_298;
                local_150 = local_2a0;
                local_140 = local_290;
                puVar21 = local_290;
                puVar16 = local_2b0;
                puVar9 = puStack_2a8;
                puVar22 = local_2a0;
                puVar23 = puStack_298;
                if (*(char *)(param_2 + 0x250) != -1) {
                    /* try { // try from 007d3190 to 007d3197 has its CatchHandler @ 007d40c4 */
                  FUN_007d22f4(param_2 + 0x230);
                  puVar21 = local_140;
                  puVar16 = local_160;
                  puVar9 = puStack_158;
                  puVar22 = local_150;
                  puVar23 = puStack_148;
                }
LAB_007d32ac:
                *(uint **)(param_2 + 0x238) = puVar9;
                *puVar1 = puVar16;
                *(uint **)(param_2 + 0x248) = puVar23;
                *(uint **)(param_2 + 0x240) = puVar22;
                *(uint **)(param_2 + 0x250) = puVar21;
                goto LAB_007d2f04;
              }
              if (*(long *)(param_2 + 0x138) - 1U < 2) {
                    /* try { // try from 007d31b8 to 007d31bf has its CatchHandler @ 007d40a4 */
                <hyper::proto::h1::conn::[5]::hyper::proto::h1::conn::State>::close_read
                          (param_2 + 0xb8);
              }
              if (puVar16 != (uint *)0xffffffffffffffff) {
                    /* try { // try from 007d31c8 to 007d31cf has its CatchHandler @ 007d4258 */
                FUN_007d2620(&local_510);
              }
            }
          }
          else {
                    /* try { // try from 007d2f7c to 007d2f87 has its CatchHandler @ 007d425c */
            FUN_007a61f8(param_2,param_3);
            pvVar19 = *(void **)puVar21;
            if (pvVar19 != (void *)0x0) {
              puVar15 = *(undefined8 **)(puVar21 + 2);
              pcVar10 = (code *)*puVar15;
              if (pcVar10 != (code *)0x0) {
                    /* try { // try from 007d2f9c to 007d2fa3 has its CatchHandler @ 007d422c */
                (*pcVar10)(pvVar19);
              }
              if (puVar15[1] != 0) {
                free(pvVar19);
              }
            }
            free(puVar21);
          }
        }
        FUN_007d22f4(&local_2b0);
        unaff_x24 = puVar21;
        goto LAB_007d2f04;
      }
      if (*(long *)(param_2 + 0x200) == 2) {
LAB_007d2fc8:
        *(undefined1 *)(param_2 + 0x260) = 1;
        <hyper::proto::h1::conn::[5]::hyper::proto::h1::conn::State>::close_read(param_2 + 0xb8);
        <hyper::proto::h1::conn::[5]::hyper::proto::h1::conn::State>::close_write(param_2 + 0xb8);
        goto LAB_007d2f04;
      }
      if (*(long *)(param_2 + 0x200) != 1) {
        if ((*(uint *)(param_2 + 0x208) & 1) == 0) goto LAB_007d3f08;
        uVar14 = FUN_0079c930(param_2 + 0x210,param_3);
        if ((uVar14 & 1) != 0) goto LAB_007d30d0;
        goto LAB_007d2fc8;
      }
      if ((*(uint *)(param_2 + 0x208) & 1) == 0) {
LAB_007d3f08:
                    /* WARNING: Subroutine does not return */
        core::panicking::panic(&DAT_002e3a54,0x28,&PTR_s__root__cargo_registry_src_index__00adcfa0);
      }
      uVar14 = FUN_0079ccdc(param_2 + 0x210,param_3);
      if ((uVar14 & 1) == 0) goto LAB_007d2fc8;
LAB_007d30d0:
      FUN_007a56c0(&local_160,param_2,param_3);
      if (local_160 == (uint *)0xfffffffffffffffd) goto LAB_007d33c8;
      if (local_160 == (uint *)0xffffffffffffffff) {
        local_510 = local_160;
        puStack_508 = puStack_158;
        puVar21 = (uint *)FUN_007d5e34(param_2 + 0x200,&local_510);
        if (puVar21 == (uint *)0x0) goto LAB_007d2fc8;
        break;
      }
      if (local_160 == (uint *)&DAT_fffffffffffffffe) {
        if (*(long *)(param_2 + 0x1a0) == -0x7ffffffffffffffd) goto LAB_007d2fc8;
        goto LAB_007d2f04;
      }
      local_510 = local_160;
      puStack_508 = puStack_158;
      bVar3 = (byte)local_e8;
      puStack_4d8 = puStack_128;
      local_4e0 = local_130;
      puStack_4c8 = puStack_118;
      local_4d0 = local_120;
      puStack_4b8 = puStack_108;
      local_4c0 = local_110;
      puStack_4a8 = puStack_f8;
      local_4b0 = local_100;
      puStack_4f8 = puStack_148;
      local_500 = local_150;
      puStack_4e8 = puStack_138;
      local_4f0 = local_140;
      if (local_f0 == (uint *)0x0) {
        local_2b0 = (uint *)0x0;
      }
      else {
                    /* try { // try from 007d321c to 007d3227 has its CatchHandler @ 007d40bc */
        <hyper::body::incoming::hyper::body::incoming::Incoming>::new_channel
                  (&local_2b0,local_f0,(byte)local_e8 & 1);
        puStack_1c8 = puStack_2a8;
        local_1d0 = (undefined1  [8])local_2b0;
        puStack_1b8 = puStack_298;
        local_1c0 = local_2a0;
        local_1b0 = local_290;
        puStack_2c8 = puStack_280;
        local_2d0 = puStack_288;
        puStack_2b8 = local_270;
        puStack_2c0 = puStack_278;
        if (*(char *)(param_2 + 0x250) != -1) {
                    /* try { // try from 007d3254 to 007d325b has its CatchHandler @ 007d4030 */
          FUN_007d22f4(param_2 + 0x230);
        }
        *(uint **)(param_2 + 0x238) = puStack_1c8;
        *puVar1 = local_1d0;
        *(uint **)(param_2 + 0x248) = puStack_1b8;
        *(uint **)(param_2 + 0x240) = local_1c0;
        *(uint **)(param_2 + 0x250) = local_1b0;
        local_2b0 = local_2d0;
        puStack_2a8 = puStack_2c8;
        local_2a0 = puStack_2c0;
        puStack_298 = puStack_2b8;
      }
      if ((bVar3 >> 1 & 1) != 0) {
                    /* try { // try from 007d32c0 to 007d330b has its CatchHandler @ 007d4120 */
        uVar7 = <hyper::proto::h1::conn::[5]::hyper::proto::h1::conn::State>::prepare_upgrade
                          (param_2 + 0xb8);
        auVar24 = FUN_007c90a8(&local_4b0,uVar7);
        plVar20 = auVar24._8_8_;
        _local_1d0 = auVar24;
        if ((auVar24._0_8_ != 0) && (plVar20 != (long *)0x0)) {
          do {
            lVar13 = *plVar20;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar5) {
              *plVar20 = lVar13 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar13 + -1 == 0) {
            DataMemoryBarrier(2,1);
            <alloc[c1f8e832b0d782c7]::sync::Arc<std[17aff9129faa4dc5]::sync::poison::mutex::Mutex<tokio[8c8895dbfa691109]::sync::oneshot::Receiver<core[bcece726f298455b]::result::Result<hyper[9f1bfd30b08ca095]::upgrade::Upgraded,hyper[9f1bfd30b08ca095]::error::Error>>>>>
            ::drop_slow(&puStack_1c8);
          }
        }
      }
      local_3a8 = puStack_4c8;
      puStack_3b0 = local_4d0;
      local_398 = puStack_4b8;
      puStack_3a0 = local_4c0;
      puStack_388 = puStack_4a8;
      puStack_390 = local_4b0;
      puStack_3e8 = puStack_508;
      local_3f0 = local_510;
      local_3d8 = puStack_4f8;
      puStack_3e0 = local_500;
      local_3c8 = puStack_4e8;
      puStack_3d0 = local_4f0;
      local_3b8 = puStack_4d8;
      puStack_3c0 = local_4e0;
      puStack_378 = puStack_2a8;
      local_380 = local_2b0;
      puStack_368 = puStack_298;
      local_370 = local_2a0;
      puVar21 = (uint *)FUN_007d5e34(param_2 + 0x200,&local_3f0);
    } while (puVar21 == (uint *)0x0);
    do {
      if (puVar21 != (uint *)0x0) goto LAB_007d3e18;
LAB_007d33c8:
      if ((*(byte *)(param_2 + 0x260) & 1) != 0) goto LAB_007d3c70;
      if (((**(long **)(param_2 + 600) == 0) && (*(long *)(param_2 + 0x138) != 4)) &&
         (*(long *)(param_2 + 0x1a0) == -0x8000000000000000)) {
        uVar14 = *(ulong *)(param_2 + 0x48);
        if (uVar14 == 0) {
          lVar12 = 0;
          uVar11 = 0;
          lVar13 = 0;
        }
        else {
          uVar11 = *(ulong *)(param_2 + 0x30);
          uVar2 = 0;
          if (uVar11 <= *(ulong *)(param_2 + 0x40)) {
            uVar2 = uVar11;
          }
          lVar12 = *(ulong *)(param_2 + 0x40) - uVar2;
          lVar13 = uVar14 - (uVar11 - lVar12);
          if (uVar14 < uVar11 - lVar12 || lVar13 == 0) {
            lVar13 = 0;
            uVar11 = lVar12 + uVar14;
          }
        }
        local_500 = *(uint **)(param_2 + 0x38);
        local_510 = local_500 + lVar12 * 0x14;
        puStack_508 = local_500 + uVar11 * 0x14;
        puStack_4f8 = local_500 + lVar13 * 0x14;
        lVar13 = FUN_007965e0(&local_510,0);
        if ((lVar13 == 0) && (*(long *)(param_2 + 0x200) == 2)) {
          FUN_007a68a0(&local_510,param_2 + 0x218,param_3);
          if (local_410 == (uint *)0x2) {
            *(undefined1 *)(param_2 + 0x228) = 1;
          }
          else {
            if (local_410 == (uint *)0xffffffffffffffff) goto LAB_007d3c70;
            uStack_328 = uStack_448;
            local_330 = local_450;
            local_318 = uStack_438;
            local_320 = uStack_440;
            puStack_308 = puStack_428;
            local_310 = local_430;
            puStack_2f8 = puStack_418;
            puStack_300 = puStack_420;
            puStack_368 = puStack_488;
            local_370 = local_490;
            uStack_358 = uStack_478;
            uStack_360 = uStack_480;
            uStack_348 = uStack_468;
            local_350 = local_470;
            uStack_338 = uStack_458;
            uStack_340 = local_460;
            local_3a8 = puStack_4c8;
            puStack_3b0 = local_4d0;
            local_398 = puStack_4b8;
            puStack_3a0 = local_4c0;
            puStack_388 = puStack_4a8;
            puStack_390 = local_4b0;
            puStack_378 = puStack_498;
            local_380 = puStack_4a0;
            puStack_2e8 = puStack_408;
            puVar21 = puStack_2e8;
            local_2f0 = local_410;
            local_2e0[0] = local_400;
            puStack_3e8 = puStack_508;
            local_3f0 = local_510;
            local_3d8 = puStack_4f8;
            puStack_3e0 = local_500;
            puStack_2e8._0_4_ = (int)puStack_408;
            local_3c8 = puStack_4e8;
            puStack_3d0 = local_4f0;
            local_3b8 = puStack_4d8;
            puStack_3c0 = local_4e0;
            puStack_2e8 = puVar21;
            if (local_410 == (uint *)&DAT_00000001) {
              if (((ulong)puStack_408 & 1) == 0) {
LAB_007d3f20:
                    /* try { // try from 007d3f20 to 007d3f37 has its CatchHandler @ 007d429c */
                    /* WARNING: Subroutine does not return */
                core::panicking::panic
                          (&DAT_002e3a54,0x28,&PTR_s__root__cargo_registry_src_index__00adcfa0);
              }
                    /* try { // try from 007d3514 to 007d3523 has its CatchHandler @ 007d41e4 */
              iVar6 = FUN_0079ccdc(local_2e0,param_3);
            }
            else {
              if ((int)puStack_2e8 == 0) goto LAB_007d3f20;
                    /* try { // try from 007d3794 to 007d37a3 has its CatchHandler @ 007d41e4 */
              iVar6 = FUN_0079c930(local_2e0,param_3);
            }
            if (iVar6 == 0) {
                    /* try { // try from 007d3c48 to 007d3c4f has its CatchHandler @ 007d3f9c */
              FUN_007d0864(&local_2f0);
              FUN_007d0540(&local_3f0);
            }
            else {
              uStack_170 = local_450;
              uStack_178 = uStack_458;
              puStack_2c8 = puStack_428;
              local_2d0 = local_430;
              puStack_2b8 = puStack_418;
              puStack_2c0 = puStack_420;
              uStack_188 = uStack_468;
              local_190 = local_470;
              local_168 = uStack_448;
              puStack_1a8 = puStack_488;
              local_1b0 = local_490;
              uStack_198 = uStack_478;
              local_1a0 = uStack_480;
              local_180 = local_460;
              puStack_1b8 = puStack_498;
              local_1d8 = (undefined1)local_318;
              puStack_2a8 = puStack_508;
              local_2b0 = local_510;
              puStack_298 = puStack_4f8;
              local_2a0 = local_500;
              uStack_1e0 = local_320;
              puStack_268 = puStack_4c8;
              local_270 = local_4d0;
              puStack_258 = puStack_4b8;
              puStack_260 = local_4c0;
              puStack_288 = puStack_4e8;
              local_290 = local_4f0;
              puStack_278 = puStack_4d8;
              puStack_280 = local_4e0;
              local_1c0 = local_2e0[0];
              puStack_248 = puStack_4a8;
              local_250 = local_4b0;
              puStack_238 = puStack_498;
              puStack_240 = puStack_4a0;
              uStack_1f8 = uStack_458;
              local_200 = local_460;
              local_1e8 = uStack_448;
              uStack_1f0 = local_450;
              puStack_228 = puStack_488;
              local_230 = local_490;
              uStack_218 = uStack_478;
              local_220 = uStack_480;
              uStack_208 = uStack_468;
              uStack_210 = local_470;
              puStack_1c8 = puStack_2e8;
              local_1d0 = (undefined1  [8])local_2f0;
              if (*(long *)(param_2 + 0x200) != 2) {
                    /* try { // try from 007d3860 to 007d3867 has its CatchHandler @ 007d4138 */
                FUN_007d0864(param_2 + 0x200);
              }
              local_540 = CONCAT71(uStack_1d7,local_1d8);
              *(uint **)(param_2 + 0x208) = puStack_1c8;
              *(long *)(param_2 + 0x200) = (long)local_1d0;
              uStack_b8 = local_200;
              local_c0 = uStack_208;
              uStack_a8 = uStack_1f0;
              uStack_b0 = uStack_1f8;
              uStack_98 = uStack_1e0;
              local_a0 = local_1e8;
              puStack_f8 = puStack_240;
              local_100 = puStack_248;
              local_e8 = local_230;
              local_f0 = puStack_238;
              *(uint **)(param_2 + 0x210) = local_1c0;
              uStack_d8 = local_220;
              local_e0 = puStack_228;
              uStack_c8 = uStack_210;
              uStack_d0 = uStack_218;
              puStack_138 = puStack_280;
              local_140 = puStack_288;
              puStack_128 = local_270;
              local_130 = puStack_278;
              puStack_118 = puStack_260;
              local_120 = puStack_268;
              puStack_108 = local_250;
              local_110 = puStack_258;
              puStack_158 = local_2a0;
              local_160 = puStack_2a8;
              puStack_148 = local_290;
              local_150 = puStack_298;
              puStack_70 = puStack_418;
              local_78 = puStack_420;
              puStack_80 = puStack_428;
              local_88 = local_430;
              uStack_588 = local_220;
              local_590 = puStack_228;
              uStack_578 = uStack_210;
              uStack_580 = uStack_218;
              puStack_520 = puStack_418;
              uStack_558 = uStack_1f0;
              local_560 = uStack_1f8;
              uStack_548 = uStack_1e0;
              local_550 = local_1e8;
              uStack_568 = local_200;
              local_570 = uStack_208;
              local_5c8 = puStack_260;
              puStack_5d0 = puStack_268;
              local_5b8 = local_250;
              puStack_5c0 = puStack_258;
              puStack_5a8 = puStack_240;
              local_5b0 = puStack_248;
              puStack_598 = local_230;
              puStack_5a0 = puStack_238;
              puStack_608 = local_2a0;
              local_610 = puStack_2a8;
              local_5f8 = local_290;
              puStack_600 = puStack_298;
              local_5e8 = puStack_280;
              puStack_5f0 = puStack_288;
              local_5d8 = local_270;
              puStack_5e0 = puStack_278;
              puStack_538 = local_430;
              local_528 = puStack_420;
              puStack_530 = puStack_428;
              local_90 = local_540;
              if (local_2b0 == (uint *)&DAT_fffffffffffffffe) goto LAB_007d3c70;
              if (local_2b0 != (uint *)0xffffffffffffffff) {
                local_3f0 = local_2b0;
                uStack_340 = local_200;
                uStack_348 = uStack_208;
                local_330 = uStack_1f0;
                uStack_338 = uStack_1f8;
                local_320 = uStack_1e0;
                uStack_328 = local_1e8;
                local_380 = puStack_240;
                puStack_388 = puStack_248;
                local_370 = local_230;
                puStack_378 = puStack_238;
                uStack_360 = local_220;
                puStack_368 = puStack_228;
                local_350 = uStack_210;
                uStack_358 = uStack_218;
                puStack_3c0 = puStack_280;
                local_3c8 = puStack_288;
                puStack_3b0 = local_270;
                local_3b8 = puStack_278;
                puStack_3a0 = puStack_260;
                local_3a8 = puStack_268;
                puStack_390 = local_250;
                local_398 = puStack_258;
                puStack_3e0 = local_2a0;
                puStack_3e8 = puStack_2a8;
                puStack_3d0 = local_290;
                local_3d8 = puStack_298;
                puStack_2a8 = puStack_428;
                local_2b0 = local_430;
                puStack_298 = puStack_418;
                local_2a0 = puStack_420;
                local_318 = local_540;
                if (local_430 == (uint *)0x0) {
                    /* try { // try from 007d3a40 to 007d3a43 has its CatchHandler @ 007d4104 */
                  uVar14 = (**(code **)(puStack_420 + 8))(puStack_428);
                  if ((uVar14 & 1) == 0) {
                    if (local_2b0 != (uint *)0x0) goto LAB_007d3a98;
                    /* try { // try from 007d3b48 to 007d3b4f has its CatchHandler @ 007d4104 */
                    (**(code **)(local_2a0 + 10))(&local_510,puStack_2a8);
                    uVar18 = (uint)local_510 ^ 1;
                    if (local_500 != puStack_508) {
                      uVar18 = 1;
                    }
                    plVar20 = *(long **)(param_2 + 600);
                    lVar13 = *plVar20;
                    unaff_x24 = puStack_508;
                    local_510 = local_2b0;
                    puStack_508 = puStack_2a8;
                    local_500 = local_2a0;
                    puStack_4f8 = puStack_298;
                    goto joined_r0x007d3b78;
                  }
LAB_007d3a48:
                  plVar20 = *(long **)(param_2 + 600);
                  if (*plVar20 != 0) {
                    if (plVar20[1] == 0) {
                      unaff_x24 = (uint *)plVar20[2];
                      puVar15 = (undefined8 *)plVar20[3];
                      pcVar10 = (code *)*puVar15;
                      if (pcVar10 != (code *)0x0) {
                    /* try { // try from 007d3b10 to 007d3b17 has its CatchHandler @ 007d3fc0 */
                        (*pcVar10)(unaff_x24);
                      }
                      if (puVar15[1] != 0) {
                        free(unaff_x24);
                      }
                    }
                    else {
                    /* try { // try from 007d3a64 to 007d3a6b has its CatchHandler @ 007d4024 */
                      (**(code **)(plVar20[1] + 0x20))(plVar20 + 4,plVar20[2],plVar20[3]);
                    }
                  }
                  *plVar20 = 0;
                  bVar5 = true;
                  uVar18 = 2;
                }
                else {
                  unaff_x24 = puStack_420;
                  if (puStack_420 == (uint *)0x0) goto LAB_007d3a48;
LAB_007d3a98:
                  uVar18 = 0;
                  plVar20 = *(long **)(param_2 + 600);
                  lVar13 = *plVar20;
                  unaff_x24 = local_2a0;
                  local_510 = local_2b0;
                  puStack_508 = puStack_2a8;
                  local_500 = local_2a0;
                  puStack_4f8 = puStack_298;
joined_r0x007d3b78:
                  local_2b0 = local_510;
                  puStack_2a8 = puStack_508;
                  local_2a0 = local_500;
                  puStack_298 = puStack_4f8;
                  local_160 = local_510;
                  puStack_158 = puStack_508;
                  local_150 = local_500;
                  puStack_148 = puStack_4f8;
                  if (lVar13 != 0) {
                    if (plVar20[1] == 0) {
                      pvVar19 = (void *)plVar20[2];
                      puVar15 = (undefined8 *)plVar20[3];
                      pcVar10 = (code *)*puVar15;
                      if (pcVar10 != (code *)0x0) {
                    /* try { // try from 007d3ae0 to 007d3ae7 has its CatchHandler @ 007d3fe0 */
                        (*pcVar10)(pvVar19);
                      }
                      if (puVar15[1] != 0) {
                        free(pvVar19);
                      }
                    }
                    else {
                    /* try { // try from 007d3ac4 to 007d3acb has its CatchHandler @ 007d406c */
                      (**(code **)(plVar20[1] + 0x20))(plVar20 + 4,plVar20[2],plVar20[3]);
                    }
                  }
                  bVar5 = false;
                  *plVar20 = 1;
                  plVar20[2] = (long)puStack_508;
                  plVar20[1] = (long)local_510;
                  plVar20[4] = (long)puStack_4f8;
                  plVar20[3] = (long)local_500;
                }
                uStack_468 = uStack_348;
                local_470 = local_350;
                uStack_458 = uStack_338;
                local_460 = uStack_340;
                uStack_448 = uStack_328;
                local_450 = local_330;
                uStack_438 = local_318;
                uStack_440 = local_320;
                puStack_4a8 = puStack_388;
                local_4b0 = puStack_390;
                puStack_498 = puStack_378;
                puStack_4a0 = local_380;
                puStack_488 = puStack_368;
                local_490 = local_370;
                uStack_478 = uStack_358;
                uStack_480 = uStack_360;
                puStack_4e8 = local_3c8;
                local_4f0 = puStack_3d0;
                puStack_4d8 = local_3b8;
                local_4e0 = puStack_3c0;
                puStack_4c8 = local_3a8;
                local_4d0 = puStack_3b0;
                puStack_4b8 = local_398;
                local_4c0 = puStack_3a0;
                puStack_508 = puStack_3e8;
                local_510 = local_3f0;
                puStack_4f8 = local_3d8;
                local_500 = puStack_3e0;
                    /* try { // try from 007d3bd4 to 007d3be7 has its CatchHandler @ 007d41ac */
                FUN_007a4aa8(param_2,&local_510,uVar18,unaff_x24);
                puVar16 = local_2a0;
                puVar21 = puStack_2a8;
                if (bVar5) {
                  if (local_2b0 == (uint *)0x0) {
                    if (*(code **)local_2a0 != (code *)0x0) {
                    /* try { // try from 007d3c1c to 007d3c23 has its CatchHandler @ 007d4004 */
                      (**(code **)local_2a0)(puStack_2a8);
                    }
                    unaff_x24 = puVar21;
                    if (*(long *)(puVar16 + 2) != 0) {
                      free(puVar21);
                    }
                  }
                  else {
                    (**(code **)(local_2b0 + 8))(&puStack_298,puStack_2a8,local_2a0);
                  }
                }
                goto LAB_007d33c8;
              }
            }
          }
          *(undefined1 *)(param_2 + 0x260) = 1;
          <hyper::proto::h1::conn::[5]::hyper::proto::h1::conn::State>::close_read(param_2 + 0xb8);
          <hyper::proto::h1::conn::[5]::hyper::proto::h1::conn::State>::close_write(param_2 + 0xb8);
          goto LAB_007d3c70;
        }
      }
      if ((*(byte *)(param_2 + 0xb0) & 1) == 0) {
        if (*(char *)(param_2 + 0x58) == '\x01') {
          uVar14 = *(ulong *)(param_2 + 0x48);
          if (uVar14 < 0x10) {
            if (uVar14 != 0) goto LAB_007d3564;
LAB_007d354c:
            lVar12 = 0;
            uVar11 = 0;
            lVar13 = 0;
            goto LAB_007d358c;
          }
        }
        else {
          uVar14 = *(ulong *)(param_2 + 0x48);
          if (uVar14 == 0) goto LAB_007d354c;
LAB_007d3564:
          uVar11 = *(ulong *)(param_2 + 0x30);
          uVar2 = 0;
          if (uVar11 <= *(ulong *)(param_2 + 0x40)) {
            uVar2 = uVar11;
          }
          lVar12 = *(ulong *)(param_2 + 0x40) - uVar2;
          lVar13 = uVar14 - (uVar11 - lVar12);
          if (uVar14 < uVar11 - lVar12 || lVar13 == 0) {
            lVar13 = 0;
            uVar11 = lVar12 + uVar14;
          }
LAB_007d358c:
          local_500 = *(uint **)(param_2 + 0x38);
          puStack_508 = local_500 + uVar11 * 0x14;
          local_510 = local_500 + lVar12 * 0x14;
          puStack_4f8 = local_500 + lVar13 * 0x14;
          lVar13 = *(long *)(param_2 + 0x20);
          lVar12 = *(long *)(param_2 + 0x28);
          lVar8 = FUN_007965e0(&local_510,0);
          if ((ulong)((lVar13 - lVar12) + lVar8) < *(ulong *)(param_2 + 0x50)) goto LAB_007d35d0;
        }
        auVar24 = FUN_007d4628(param_2,param_3);
        lVar13 = auVar24._8_8_;
        if ((auVar24 & (undefined1  [16])0x1) != (undefined1  [16])0x0) goto LAB_007d3c70;
        if (lVar13 != 0) {
                    /* try { // try from 007d3cc8 to 007d3ccf has its CatchHandler @ 007d4054 */
          puVar21 = (uint *)<hyper::error::hyper::error::Error>::new(8);
          goto LAB_007d3d0c;
        }
        FUN_007a0098(param_2 + 0xb8);
        FUN_007a51b4(param_2,param_3);
        unaff_x24 = (uint *)0x0;
        goto LAB_007d33c8;
      }
LAB_007d35d0:
      unaff_x24 = *(uint **)(param_2 + 600);
      if ((*unaff_x24 & 1) != 0) {
        if (*(long *)(param_2 + 0x1a0) < -0x7ffffffffffffffc) {
          if (*(long *)(unaff_x24 + 2) == 0) {
            pvVar19 = *(void **)(unaff_x24 + 4);
            puVar15 = *(undefined8 **)(unaff_x24 + 6);
            if ((code *)*puVar15 != (code *)0x0) {
                    /* try { // try from 007d3438 to 007d343f has its CatchHandler @ 007d4188 */
              (*(code *)*puVar15)(pvVar19);
            }
LAB_007d3774:
            if (puVar15[1] != 0) {
              free(pvVar19);
              unaff_x24[0] = 0;
              unaff_x24[1] = 0;
              goto LAB_007d33c8;
            }
          }
          else {
                    /* try { // try from 007d33bc to 007d33c3 has its CatchHandler @ 007d421c */
            (**(code **)(*(long *)(unaff_x24 + 2) + 0x20))
                      (unaff_x24 + 8,*(undefined8 *)(unaff_x24 + 4),*(undefined8 *)(unaff_x24 + 6));
          }
        }
        else {
                    /* try { // try from 007d35ec to 007d35fb has its CatchHandler @ 007d426c */
          <reqwest::async_impl::body::Body_as_http_body::Body>::poll_frame
                    (&local_510,unaff_x24 + 2,param_3);
          if (local_510 == (uint *)0x3) goto LAB_007d3c70;
          local_3a8 = puStack_4b8;
          puStack_3b0 = local_4c0;
          local_3c8 = puStack_4d8;
          puStack_3d0 = local_4e0;
          local_3b8 = puStack_4c8;
          puStack_3c0 = local_4d0;
          puStack_3e8 = puStack_4f8;
          local_3f0 = local_500;
          local_3d8 = puStack_4e8;
          puStack_3e0 = local_4f0;
          if (local_510 == (uint *)0xfffffffffffffffd) {
                    /* try { // try from 007d372c to 007d3733 has its CatchHandler @ 007d4208 */
            puVar21 = (uint *)FUN_007a647c(param_2);
            if (puVar21 != (uint *)0x0) {
LAB_007d3d98:
              lVar13 = *(long *)unaff_x24;
joined_r0x007d3f00:
              if (lVar13 != 0) {
                if (*(long *)(unaff_x24 + 2) == 0) {
                  pvVar19 = *(void **)(unaff_x24 + 4);
                  puVar15 = *(undefined8 **)(unaff_x24 + 6);
                  pcVar10 = (code *)*puVar15;
                  if (pcVar10 != (code *)0x0) {
                    /* try { // try from 007d3df8 to 007d3dff has its CatchHandler @ 007d3f40 */
                    (*pcVar10)(pvVar19);
                  }
                  if (puVar15[1] != 0) {
                    free(pvVar19);
                  }
                }
                else {
                    /* try { // try from 007d3db0 to 007d3db7 has its CatchHandler @ 007d3fa4 */
                  (**(code **)(*(long *)(unaff_x24 + 2) + 0x20))
                            (unaff_x24 + 8,*(undefined8 *)(unaff_x24 + 4),
                             *(undefined8 *)(unaff_x24 + 6));
                }
              }
              unaff_x24[0] = 0;
              unaff_x24[1] = 0;
              goto LAB_007d3e18;
            }
          }
          else {
            if (local_510 == (uint *)0xffffffffffffffff) {
              local_160 = puStack_508;
              puStack_148 = local_4f0;
              local_150 = puStack_4f8;
              puStack_158 = local_500;
              if (*(long *)(unaff_x24 + 2) == 0) {
                    /* try { // try from 007d39cc to 007d39f3 has its CatchHandler @ 007d416c */
                uVar14 = (**(code **)(*(long *)(unaff_x24 + 6) + 0x20))
                                   (*(undefined8 *)(unaff_x24 + 4));
                bVar5 = local_150 == (uint *)0x0;
                if ((uVar14 & 1) != 0) goto LAB_007d39e4;
              }
              else {
                bVar5 = puStack_4f8 == (uint *)0x0;
                if (*(long *)(unaff_x24 + 6) == 0) {
LAB_007d39e4:
                  if (bVar5) {
                    puVar21 = (uint *)FUN_007a647c(param_2);
                    if (puVar21 != (uint *)0x0) {
                    /* try { // try from 007d3ef0 to 007d3ef7 has its CatchHandler @ 007d3f3c */
                      (**(code **)(local_160 + 8))(&puStack_148,puStack_158,local_150);
                      lVar13 = *(long *)unaff_x24;
                      goto joined_r0x007d3f00;
                    }
                    /* try { // try from 007d3a08 to 007d3a0f has its CatchHandler @ 007d4214 */
                    (**(code **)(local_160 + 8))(&puStack_148,puStack_158,local_150);
                  }
                  else {
                    puStack_508 = puStack_158;
                    local_510 = local_160;
                    puStack_4f8 = puStack_148;
                    local_500 = local_150;
                    /* try { // try from 007d3a7c to 007d3a87 has its CatchHandler @ 007d4164 */
                    FUN_007a5ec0(param_2,&local_510);
                  }
                  goto LAB_007d373c;
                }
              }
              if (bVar5) {
                    /* try { // try from 007d3714 to 007d3723 has its CatchHandler @ 007d4214 */
                (**(code **)(local_160 + 8))(&puStack_148,puStack_158,0);
              }
              else {
                puStack_508 = puStack_158;
                local_510 = local_160;
                puStack_4f8 = puStack_148;
                local_500 = local_150;
                    /* try { // try from 007d3a1c to 007d3a2b has its CatchHandler @ 007d4164 */
                FUN_007a4920(param_2,&local_510);
              }
              goto LAB_007d33c8;
            }
            if (local_510 == (uint *)&DAT_fffffffffffffffe) {
                    /* try { // try from 007d3d90 to 007d3d93 has its CatchHandler @ 007d3fa8 */
              puVar21 = (uint *)FUN_0079fba8();
              goto LAB_007d3d98;
            }
                    /* try { // try from 007d3664 to 007d366f has its CatchHandler @ 007d4214 */
            FUN_007a5cf8(param_2,&local_510);
          }
LAB_007d373c:
          if (*(long *)unaff_x24 != 0) {
            if (*(long *)(unaff_x24 + 2) == 0) {
              pvVar19 = *(void **)(unaff_x24 + 4);
              puVar15 = *(undefined8 **)(unaff_x24 + 6);
              if ((code *)*puVar15 != (code *)0x0) {
                    /* try { // try from 007d376c to 007d3773 has its CatchHandler @ 007d4110 */
                (*(code *)*puVar15)(pvVar19);
              }
              goto LAB_007d3774;
            }
                    /* try { // try from 007d3754 to 007d375b has its CatchHandler @ 007d41e8 */
            (**(code **)(*(long *)(unaff_x24 + 2) + 0x20))
                      (unaff_x24 + 8,*(undefined8 *)(unaff_x24 + 4),*(undefined8 *)(unaff_x24 + 6));
          }
        }
        unaff_x24[0] = 0;
        unaff_x24[1] = 0;
        goto LAB_007d33c8;
      }
      if (*(long *)(param_2 + 0x1a0) < -0x7ffffffffffffffc) goto LAB_007d3c70;
                    /* try { // try from 007d368c to 007d3693 has its CatchHandler @ 007d426c */
      puVar21 = (uint *)FUN_007a647c(param_2);
    } while( true );
  }
  hyper::common::task::yield_now(param_3);
  goto LAB_007d3cf4;
LAB_007d3c70:
  auVar24 = FUN_007d4628(param_2,param_3);
  lVar13 = auVar24._8_8_;
  if ((auVar24 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
    if (lVar13 != 0) {
                    /* try { // try from 007d3d04 to 007d3d0b has its CatchHandler @ 007d3fac */
      puVar21 = (uint *)<hyper::error::hyper::error::Error>::new(8);
LAB_007d3d0c:
      FUN_0079fda8(puVar21,lVar13);
      goto LAB_007d3e18;
    }
    FUN_007a0098(param_2 + 0xb8);
    FUN_007a51b4(param_2,param_3);
    unaff_x24 = (uint *)0x0;
  }
  bVar3 = *(byte *)(param_2 + 0x1fb);
  iVar17 = iVar17 + 1;
  *(undefined1 *)(param_2 + 0x1fb) = 0;
  if ((bVar3 & 1) == 0) goto LAB_007d3ce0;
  goto LAB_007d2ee0;
LAB_007d3ce0:
  if (((*(byte *)(param_2 + 0x260) & 1) == 0) && (*(long *)(param_2 + 0x138) != 4)) {
LAB_007d3cf4:
    *param_1 = 0xffffffffffffffff;
    return;
  }
  lVar13 = *(long *)(param_2 + 200);
  puVar16 = *(uint **)(param_2 + 0xd0);
  *(undefined8 *)(param_2 + 200) = 0;
  if (lVar13 == 1) {
    puVar21 = *(uint **)(param_2 + 0x1d8);
    *(undefined8 *)(param_2 + 0x1d8) = 0;
    if (puVar21 == (uint *)0x0) {
      uVar7 = 1;
      goto LAB_007d3ea0;
    }
    local_510 = puVar16;
    if (puVar16 != (uint *)0x0) {
                    /* try { // try from 007d3d40 to 007d3d63 has its CatchHandler @ 007d3f64 */
      uVar14 = <tokio::sync::oneshot::[9]::tokio::sync::oneshot::State>::set_complete(puVar16 + 0xc)
      ;
      if ((uVar14 & 5) == 1) {
        (**(code **)(*(long *)(puVar16 + 8) + 0x10))(*(long *)(puVar16 + 10));
      }
    }
    if (local_510 != (uint *)0x0) {
      do {
        lVar13 = *(long *)local_510;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(local_510,0x10);
        if (bVar5) {
          *(long *)local_510 = lVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar13 + -1 == 0) {
        DataMemoryBarrier(2,1);
        <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<hyper::upgrade::Upgraded,{backref_38}::error::Error>>>>
        ::drop_slow(&local_510);
      }
    }
  }
  else {
    if ((param_4 & 1) != 0) {
      auVar24 = (**(code **)(*(long *)(param_2 + 0x80) + 0x30))
                          (*(undefined8 *)(param_2 + 0x78),param_3);
      if ((auVar24 & (undefined1  [16])0x1) != (undefined1  [16])0x0) goto LAB_007d3cf4;
      if (auVar24._8_8_ != 0) {
        puVar21 = (uint *)<hyper::error::hyper::error::Error>::new_shutdown(auVar24._8_8_);
        goto LAB_007d3e18;
      }
    }
    puVar21 = *(uint **)(param_2 + 0x1d8);
    *(undefined8 *)(param_2 + 0x1d8) = 0;
    if (puVar21 == (uint *)0x0) {
      uVar7 = 0;
      goto LAB_007d3ea0;
    }
  }
LAB_007d3e18:
  cVar4 = *(char *)(param_2 + 0x250);
  *(undefined1 *)(param_2 + 0x250) = 0xff;
  if (cVar4 != -1) {
    puStack_508 = *(uint **)(param_2 + 0x238);
    local_510 = (uint *)*puVar1;
    puStack_4f8 = *(uint **)(param_2 + 0x248);
    local_500 = *(uint **)(param_2 + 0x240);
    local_4f0._0_5_ = CONCAT41(*(undefined4 *)(param_2 + 0x251),cVar4);
    local_4f0 = (uint *)CONCAT44(*(undefined4 *)(param_2 + 0x254),(undefined4)local_4f0);
                    /* try { // try from 007d3e4c to 007d3e73 has its CatchHandler @ 007d41ec */
    uVar7 = <hyper::error::hyper::error::Error>::new(7);
    FUN_0079fe98(uVar7,&DAT_002a0e80,0x10);
    <hyper::body::incoming::[1]::hyper::body::incoming::Sender>::send_error(&local_510,uVar7);
                    /* try { // try from 007d3e74 to 007d3e7b has its CatchHandler @ 007d40fc */
    FUN_007d22f4(&local_510);
  }
  local_510 = (uint *)0xffffffffffffffff;
  puStack_508 = puVar21;
  puVar9 = (uint *)FUN_007d5e34(param_2 + 0x200,&local_510);
  puVar16 = puVar21;
  if (puVar9 != (uint *)0x0) {
    puVar16 = puVar9;
  }
  uVar7 = 0;
  if (puVar9 != (uint *)0x0) {
    uVar7 = 2;
  }
LAB_007d3ea0:
  *param_1 = uVar7;
  param_1[1] = puVar16;
  return;
}


// ===== 007d42bc  FUN_007d42bc =====

void FUN_007d42bc(void *param_1,undefined8 *param_2,void *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_2a0 [512];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  memcpy(auStack_2a0,param_3,0x200);
  uStack_98 = param_2[1];
  local_a0 = *param_2;
  uStack_88 = param_2[3];
  uStack_90 = param_2[2];
  uStack_78 = param_2[5];
  local_80 = param_2[4];
  local_68 = 0;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)FUN_004b25a4(0x28,8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[4] = local_48;
    puVar1[1] = uStack_60;
    *puVar1 = local_68;
    puVar1[3] = uStack_50;
    puVar1[2] = uStack_58;
    memcpy(param_1,param_3,0x200);
    uVar3 = param_2[1];
    uVar2 = *param_2;
    uVar5 = param_2[3];
    uVar4 = param_2[2];
    uVar7 = param_2[5];
    uVar6 = param_2[4];
    *(undefined1 *)((long)param_1 + 0x250) = 0xff;
    *(undefined8 **)((long)param_1 + 600) = puVar1;
    *(undefined8 *)((long)param_1 + 0x208) = uVar3;
    *(undefined8 *)((long)param_1 + 0x200) = uVar2;
    *(undefined8 *)((long)param_1 + 0x218) = uVar5;
    *(undefined8 *)((long)param_1 + 0x210) = uVar4;
    *(undefined8 *)((long)param_1 + 0x228) = uVar7;
    *(undefined8 *)((long)param_1 + 0x220) = uVar6;
    *(undefined1 *)((long)param_1 + 0x260) = 0;
    return;
  }
                    /* try { // try from 007d4374 to 007d437f has its CatchHandler @ 007d4384 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x28);
}


// ===== 007d43b0  FUN_007d43b0 =====

void FUN_007d43b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar5 = param_4[1];
  uVar4 = *param_4;
  uVar7 = param_4[3];
  uVar6 = param_4[2];
  uVar3 = param_4[5];
  uVar2 = param_4[4];
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)FUN_004b25a4(0x40,8);
  if (puVar1 != (undefined8 *)0x0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    puVar1[1] = 1;
    *puVar1 = 1;
    puVar1[3] = uVar5;
    puVar1[2] = uVar4;
    puVar1[5] = uVar7;
    puVar1[4] = uVar6;
    puVar1[7] = uVar3;
    puVar1[6] = uVar2;
    param_1[2] = puVar1;
    return;
  }
                    /* try { // try from 007d442c to 007d443b has its CatchHandler @ 007d4440 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x40);
}


// ===== 007d447c  FUN_007d447c =====

void FUN_007d447c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long local_b0;
  long lStack_a8;
  long local_a0;
  undefined8 local_98;
  long lStack_90;
  ulong local_88;
  undefined8 local_80;
  ulong local_78;
  ulong *local_70;
  code *pcStack_68;
  ulong *local_60;
  code *pcStack_58;
  ulong local_38;
  
  puVar5 = PTR_SHARED_VTABLE_00b00e28;
  uVar1 = *(undefined8 *)(param_2 + 0x78);
  uVar3 = *(undefined8 *)(param_2 + 0x80);
  uVar2 = *(undefined8 *)(param_2 + 0x88);
  lVar4 = *(long *)(param_2 + 0x90);
  uVar8 = *(ulong *)(param_2 + 0xa8);
  lVar7 = *(long *)(param_2 + 0x98);
  if ((uVar8 & 1) == 0) {
    lVar6 = *(long *)(param_2 + 0x10);
    *param_1 = uVar1;
    param_1[1] = uVar3;
    param_1[2] = uVar2;
    param_1[3] = puVar5;
    param_1[4] = lVar4;
    param_1[5] = lVar7;
    param_1[6] = uVar8;
  }
  else {
    uVar8 = uVar8 >> 5;
    local_b0 = *(long *)(param_2 + 0xa0) + uVar8;
    lStack_a8 = lVar4 - uVar8;
    local_a0 = uVar8 + lVar7;
                    /* try { // try from 007d453c to 007d4547 has its CatchHandler @ 007d45b8 */
    <bytes::bytes::Bytes_as_core::convert::From<alloc::vec::Vec<u8>>>::from(&local_98,&local_b0);
    local_78 = uVar8;
    if (local_88 < uVar8) {
      local_70 = &local_78;
      pcStack_68 = FUN_007d6358;
      local_60 = &local_38;
      local_38 = local_88;
      pcStack_58 = FUN_007d6358;
                    /* try { // try from 007d459c to 007d45b3 has its CatchHandler @ 007d45e8 */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                (&DAT_002afeea,&local_70,&PTR_s__root__cargo_registry_src_index__00adf870);
    }
    lVar6 = *(long *)(param_2 + 0x10);
    *param_1 = uVar1;
    param_1[1] = uVar3;
    param_1[2] = uVar2;
    param_1[3] = local_98;
    param_1[4] = lStack_90 + uVar8;
    param_1[5] = local_88 - uVar8;
    param_1[6] = local_80;
  }
  if (lVar6 != 0) {
    free(*(void **)(param_2 + 0x18));
  }
                    /* try { // try from 007d44e0 to 007d44e7 has its CatchHandler @ 007d45c0 */
  FUN_007927a4(param_2 + 0x30);
  if (*(long *)(param_2 + 0x30) != 0) {
    free(*(void **)(param_2 + 0x38));
  }
  return;
}


// ===== 007d4628  FUN_007d4628 =====

/* WARNING: Removing unreachable block (ram,0x007d4a70) */
/* WARNING: Removing unreachable block (ram,0x007d4ac8) */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_007d4628(long param_1,undefined8 param_2)

{
  char cVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  long *plVar5;
  long *plVar6;
  ulong *puVar7;
  ulong uVar8;
  code *pcVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong *puVar13;
  long lVar14;
  long lVar15;
  ulong *puVar16;
  long lVar17;
  ulong *puVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  long *plVar23;
  undefined8 uVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  undefined1 auVar28 [16];
  ulong local_470;
  ulong uStack_468;
  ulong local_460;
  ulong uStack_458;
  ulong local_450;
  ulong local_448;
  ulong local_440;
  ulong uStack_438;
  ulong local_430;
  ulong uStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  
  if ((*(char *)(param_1 + 0xb0) == '\x01') && (*(long *)(param_1 + 0x98) != 0)) {
    uVar24 = 0;
  }
  else {
    puVar7 = (ulong *)(param_1 + 0x20);
    uVar10 = *puVar7;
    uVar20 = *(ulong *)(param_1 + 0x28);
    uVar19 = *(ulong *)(param_1 + 0x48);
    if (uVar19 == 0) {
      lVar14 = 0;
      uVar8 = 0;
      lVar17 = 0;
    }
    else {
      uVar8 = *(ulong *)(param_1 + 0x30);
      uVar12 = 0;
      if (uVar8 <= *(ulong *)(param_1 + 0x40)) {
        uVar12 = uVar8;
      }
      lVar14 = *(ulong *)(param_1 + 0x40) - uVar12;
      lVar17 = uVar19 - (uVar8 - lVar14);
      if (uVar19 < uVar8 - lVar14 || lVar17 == 0) {
        lVar17 = 0;
        uVar8 = lVar14 + uVar19;
      }
    }
    local_460 = *(ulong *)(param_1 + 0x38);
    local_470 = local_460 + lVar14 * 0x50;
    uStack_468 = local_460 + uVar8 * 0x50;
    uStack_458 = local_460 + lVar17 * 0x50;
    lVar17 = FUN_007965e0(&local_470,0);
    if ((uVar10 - uVar20) + lVar17 == 0) {
      uVar24 = *(undefined8 *)(param_1 + 0x78);
      pcVar9 = *(code **)(*(long *)(param_1 + 0x80) + 0x28);
LAB_007d4700:
      uVar24 = (*pcVar9)(uVar24,param_2);
    }
    else if (*(char *)(param_1 + 0x58) == '\x01') {
      do {
        uVar20 = *(ulong *)(param_1 + 0x20);
        uVar10 = *(ulong *)(param_1 + 0x28);
        local_470 = 1;
        uStack_468 = 0;
        local_460 = 1;
        uStack_458 = 0;
        local_450 = 1;
        local_448 = 0;
        uVar19 = uVar20 - uVar10;
        local_440 = 1;
        uStack_438 = 0;
        local_430 = 1;
        uStack_428 = 0;
        local_420 = 1;
        uStack_418 = 0;
        local_410 = 1;
        uStack_408 = 0;
        local_400 = 1;
        uStack_3f8 = 0;
        local_3f0 = 1;
        uStack_3e8 = 0;
        local_3e0 = 1;
        uStack_3d8 = 0;
        local_3d0 = 1;
        uStack_3c8 = 0;
        local_3c0 = 1;
        uStack_3b8 = 0;
        local_3b0 = 1;
        uStack_3a8 = 0;
        local_3a0 = 1;
        uStack_398 = 0;
        local_390 = 1;
        uStack_388 = 0;
        local_380 = 1;
        uStack_378 = 0;
        local_370 = 1;
        uStack_368 = 0;
        local_360 = 1;
        uStack_358 = 0;
        local_350 = 1;
        uStack_348 = 0;
        local_340 = 1;
        uStack_338 = 0;
        local_330 = 1;
        uStack_328 = 0;
        local_320 = 1;
        uStack_318 = 0;
        local_310 = 1;
        uStack_308 = 0;
        local_300 = 1;
        uStack_2f8 = 0;
        local_2f0 = 1;
        uStack_2e8 = 0;
        local_2e0 = 1;
        uStack_2d8 = 0;
        local_2d0 = 1;
        uStack_2c8 = 0;
        local_2c0 = 1;
        local_2b8 = 0;
        local_2b0 = 1;
        local_2a8 = 0;
        local_2a0 = 1;
        local_298 = 0;
        local_290 = 1;
        local_288 = 0;
        local_280 = 1;
        local_278 = 0;
        local_270 = 1;
        local_268 = 0;
        local_260 = 1;
        local_258 = 0;
        local_250 = 1;
        local_248 = 0;
        local_240 = 1;
        local_238 = 0;
        local_230 = 1;
        local_228 = 0;
        local_220 = 1;
        local_218 = 0;
        local_210 = 1;
        local_208 = 0;
        local_200 = 1;
        local_1f8 = 0;
        local_1f0 = 1;
        local_1e8 = 0;
        local_1e0 = 1;
        local_1d8 = 0;
        local_1d0 = 1;
        local_1c8 = 0;
        local_1c0 = 1;
        local_1b8 = 0;
        local_1b0 = 1;
        local_1a8 = 0;
        local_1a0 = 1;
        local_198 = 0;
        local_190 = 1;
        local_188 = 0;
        local_180 = 1;
        local_178 = 0;
        local_170 = 1;
        local_168 = 0;
        local_160 = 1;
        local_158 = 0;
        local_150 = 1;
        local_148 = 0;
        local_140 = 1;
        local_138 = 0;
        local_130 = 1;
        local_128 = 0;
        local_120 = 1;
        local_118 = 0;
        local_110 = 1;
        local_108 = 0;
        local_100 = 1;
        local_f8 = 0;
        local_f0 = 1;
        local_e8 = 0;
        local_e0 = 1;
        local_d8 = 0;
        local_d0 = 1;
        local_c8 = 0;
        local_c0 = 1;
        local_b8 = 0;
        local_b0 = 1;
        local_a8 = 0;
        local_a0 = 1;
        local_98 = 0;
        local_90 = 1;
        local_88 = 0;
        local_80 = 1;
        local_78 = 0;
        if (uVar19 == 0) {
          lVar17 = 0;
          uVar20 = *(ulong *)(param_1 + 0x48);
          puVar13 = &local_470;
          if (uVar20 == 0) goto LAB_007d4970;
LAB_007d4924:
          uVar10 = *(ulong *)(param_1 + 0x30);
          uVar19 = 0;
          if (uVar10 <= *(ulong *)(param_1 + 0x40)) {
            uVar19 = uVar10;
          }
          lVar15 = *(ulong *)(param_1 + 0x40) - uVar19;
          lVar14 = uVar20 - (uVar10 - lVar15);
          if (uVar20 < uVar10 - lVar15 || lVar14 == 0) {
            lVar14 = 0;
            uVar10 = lVar15 + uVar20;
          }
        }
        else {
          if (uVar20 < uVar10) {
                    /* WARNING: Subroutine does not return */
            core::slice::index::slice_index_fail
                      (uVar10,uVar20,uVar20,&PTR_s__root__cargo_registry_src_index__00adf8e0);
          }
          lVar17 = 1;
          local_470 = *(long *)(param_1 + 0x18) + uVar10;
          uVar20 = *(ulong *)(param_1 + 0x48);
          puVar13 = &local_460;
          uStack_468 = uVar19;
          if (uVar20 != 0) goto LAB_007d4924;
LAB_007d4970:
          lVar15 = 0;
          uVar10 = 0;
          lVar14 = 0;
        }
        plVar25 = *(long **)(param_1 + 0x38);
        uVar20 = 0;
        plVar6 = plVar25 + lVar15 * 10;
        plVar27 = plVar25 + uVar10 * 10;
        uVar10 = 0x40 - lVar17;
        plVar23 = plVar25 + lVar14 * 10;
        do {
          plVar5 = plVar23;
          plVar26 = plVar25;
          if ((plVar6 == plVar27) &&
             (plVar5 = plVar27, plVar26 = plVar27, plVar27 = plVar23, plVar6 = plVar25,
             plVar25 == plVar23)) goto LAB_007d4bbc;
          uVar19 = uVar10 - uVar20;
          if (uVar10 < uVar20) {
                    /* WARNING: Subroutine does not return */
            core::slice::index::slice_index_fail
                      (uVar20,uVar10,uVar10,&PTR_s__root__cargo_registry_src_index__00adf9b8);
          }
          puVar11 = puVar13 + uVar20 * 2;
          lVar14 = *plVar6;
          if (lVar14 < 2) {
            if (lVar14 == 0) {
              if ((uVar10 != uVar20) && (uVar19 = plVar6[3], uVar19 != 0)) {
                uVar8 = plVar6[2];
                goto LAB_007d4a3c;
              }
LAB_007d49a0:
              lVar14 = 0;
            }
            else {
              lVar14 = FUN_007c1d80();
            }
          }
          else {
            if (lVar14 == 2) {
              if (uVar10 == uVar20) {
                lVar14 = 0;
LAB_007d4a54:
                lVar15 = 0;
              }
              else {
                bVar3 = *(byte *)((long)plVar6 + 0x3a);
                uVar8 = (ulong)bVar3;
                bVar4 = *(byte *)((long)plVar6 + 0x3b);
                if (bVar4 == bVar3) {
                  lVar14 = 0;
                  uVar8 = plVar6[3];
                  puVar16 = puVar11;
                  if (uVar8 == 0) goto LAB_007d4a54;
LAB_007d4b6c:
                  *puVar16 = plVar6[2];
                  puVar16[1] = uVar8;
                  lVar15 = 1;
                }
                else {
                  if ((bVar4 < bVar3) || (0x12 < bVar4)) {
                    /* WARNING: Subroutine does not return */
                    core::slice::index::slice_index_fail
                              (uVar8,(ulong)bVar4,0x12,
                               &PTR_s__root__cargo_registry_src_index__00adc7d8);
                  }
                  *puVar11 = (long)plVar6 + uVar8 + 0x28;
                  puVar11[1] = bVar4 - uVar8;
                  if (uVar19 != 1) {
                    puVar16 = puVar11 + 2;
                    lVar14 = 1;
                    uVar8 = plVar6[3];
                    if (uVar8 != 0) goto LAB_007d4b6c;
                    goto LAB_007d4a54;
                  }
                  lVar15 = 0;
                  lVar14 = 1;
                }
              }
              uVar8 = lVar15 + lVar14;
              if (uVar19 < uVar8) {
LAB_007d4f0c:
                    /* WARNING: Subroutine does not return */
                core::slice::index::slice_index_fail
                          (uVar8,uVar19,uVar19,&PTR_s__root__cargo_registry_src_index__00adcd60);
              }
              if (uVar19 == uVar8) goto LAB_007d4b8c;
              uVar19 = plVar6[9];
              if (uVar19 != 0) {
                uVar12 = plVar6[8];
                goto LAB_007d4ba4;
              }
            }
            else {
              if (lVar14 == 3) {
                if ((uVar10 == uVar20) || (uVar19 = plVar6[2], uVar19 == 0)) goto LAB_007d49a0;
                uVar8 = plVar6[1];
LAB_007d4a3c:
                *puVar11 = uVar8;
                puVar11[1] = uVar19;
                lVar14 = 1;
                goto LAB_007d49a4;
              }
              if (uVar10 == uVar20) {
                uVar8 = 0;
              }
              else {
                uVar8 = plVar6[2];
                if (uVar8 == 0) {
                  uVar12 = plVar6[5];
                  uVar8 = 0;
                  puVar16 = puVar11;
                }
                else {
                  *puVar11 = plVar6[1];
                  puVar11[1] = uVar8;
                  if (uVar19 == 1) {
                    uVar8 = 1;
                    goto LAB_007d4b40;
                  }
                  puVar16 = puVar11 + 2;
                  uVar8 = 1;
                  uVar12 = plVar6[5];
                }
                if (uVar12 != 0) {
                  *puVar16 = plVar6[4];
                  puVar16[1] = uVar12;
                  uVar8 = uVar8 + 1;
                }
                if (uVar19 < uVar8) goto LAB_007d4f0c;
              }
LAB_007d4b40:
              if (uVar19 == uVar8) {
LAB_007d4b8c:
                uVar19 = 0;
              }
              else {
                uVar19 = plVar6[8];
                if (uVar19 != 0) {
                  uVar12 = plVar6[7];
LAB_007d4ba4:
                  puVar11[uVar8 * 2] = uVar12;
                  (puVar11 + uVar8 * 2)[1] = uVar19;
                  uVar19 = 1;
                }
              }
            }
            lVar14 = uVar19 + uVar8;
          }
LAB_007d49a4:
          uVar20 = lVar14 + uVar20;
          plVar6 = plVar6 + 10;
          plVar23 = plVar5;
          plVar25 = plVar26;
        } while (uVar20 != uVar10);
        uVar20 = 0x40 - lVar17;
LAB_007d4bbc:
        if (0x40 < uVar20 + lVar17) {
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (0,uVar20 + lVar17,0x40,&PTR_s__root__cargo_registry_src_index__00adf730);
        }
        uVar24 = *(undefined8 *)(param_1 + 0x78);
        lVar17 = *(long *)(param_1 + 0x80);
        auVar28 = (**(code **)(lVar17 + 0x40))(uVar24,param_2,&local_470);
        uVar20 = auVar28._8_8_;
        if (auVar28._0_8_ == 2) {
          return 1;
        }
        if (auVar28._0_8_ == 1) {
          return 0;
        }
        lVar14 = *(long *)(param_1 + 0x20);
        uVar10 = lVar14 - *(long *)(param_1 + 0x28);
        cVar1 = uVar20 < uVar10;
        if (uVar10 < uVar20) {
          cVar1 = -1;
        }
        if (cVar1 == '\0') {
          *puVar7 = 0;
          *(undefined8 *)(param_1 + 0x28) = 0;
          uVar10 = *(ulong *)(param_1 + 0x48);
joined_r0x007d4c68:
          lVar14 = 0;
          lVar15 = 0;
          if (uVar10 == 0) goto LAB_007d4c6c;
LAB_007d4c28:
          uVar19 = *(ulong *)(param_1 + 0x30);
          uVar8 = 0;
          if (uVar19 <= *(ulong *)(param_1 + 0x40)) {
            uVar8 = uVar19;
          }
          lVar21 = *(ulong *)(param_1 + 0x40) - uVar8;
          lVar22 = uVar10 - (uVar19 - lVar21);
          if (uVar10 < uVar19 - lVar21 || lVar22 == 0) {
            lVar22 = 0;
            uVar19 = lVar21 + uVar10;
          }
        }
        else {
          if (cVar1 != '\x01') {
            uVar10 = uVar20 - uVar10;
            *puVar7 = 0;
            *(undefined8 *)(param_1 + 0x28) = 0;
            if (uVar10 != 0) {
              uVar19 = *(ulong *)(param_1 + 0x40);
              lVar14 = *(long *)(param_1 + 0x48);
              uVar8 = *(ulong *)(param_1 + 0x30);
              lVar15 = *(long *)(param_1 + 0x38);
              do {
                lVar14 = lVar14 + -1;
                if (lVar14 == -1) {
                    /* WARNING: Subroutine does not return */
                  core::option::expect_failed
                            (&DAT_002e5c40,0x14,&PTR_s__root__cargo_registry_src_index__00adf9d0);
                }
                uVar12 = 0;
                if (uVar8 <= uVar19) {
                  uVar12 = uVar8;
                }
                plVar6 = (long *)(lVar15 + (uVar19 - uVar12) * 0x50);
                lVar22 = *plVar6;
                if (lVar22 < 2) {
                  if (lVar22 == 0) {
                    uVar12 = plVar6[3];
                  }
                  else {
                    uVar12 = plVar6[5];
                    if ((ulong)plVar6[3] <= (ulong)plVar6[5]) {
                      uVar12 = plVar6[3];
                    }
                  }
                }
                else if (lVar22 == 2) {
                  uVar12 = (ulong)(byte)(*(char *)((long)plVar6 + 0x3b) -
                                        *(char *)((long)plVar6 + 0x3a));
                  uVar2 = plVar6[3] + uVar12;
                  if (CARRY8(plVar6[3],uVar12)) {
                    uVar2 = 0xffffffffffffffff;
                  }
                  uVar12 = uVar2 + plVar6[9];
                  if (CARRY8(uVar2,plVar6[9])) {
                    uVar12 = 0xffffffffffffffff;
                  }
                }
                else if (lVar22 == 3) {
                  uVar12 = plVar6[2];
                }
                else {
                  uVar2 = plVar6[2] + plVar6[5];
                  if (CARRY8(plVar6[2],plVar6[5])) {
                    uVar2 = 0xffffffffffffffff;
                  }
                  uVar12 = uVar2 + plVar6[8];
                  if (CARRY8(uVar2,plVar6[8])) {
                    uVar12 = 0xffffffffffffffff;
                  }
                }
                if (uVar10 < uVar12) {
                  FUN_007d7304();
                  break;
                }
                uVar10 = uVar10 - uVar12;
                FUN_007d7304(plVar6,uVar12);
                puVar13 = (ulong *)(lVar15 + uVar19 * 0x50);
                uVar12 = 0;
                if (uVar8 <= uVar19 + 1) {
                  uVar12 = uVar8;
                }
                uVar19 = (uVar19 + 1) - uVar12;
                *(ulong *)(param_1 + 0x40) = uVar19;
                *(long *)(param_1 + 0x48) = lVar14;
                uStack_468 = puVar13[1];
                local_470 = *puVar13;
                uStack_438 = puVar13[7];
                local_440 = puVar13[6];
                uStack_428 = puVar13[9];
                local_430 = puVar13[8];
                uStack_458 = puVar13[3];
                local_460 = puVar13[2];
                local_448 = puVar13[5];
                local_450 = puVar13[4];
                if ((local_470 != 0xffffffffffffffff) &&
                   ((puVar13 = &local_450, puVar11 = &uStack_468, puVar16 = &local_460,
                    puVar18 = &uStack_458, local_470 < 3 ||
                    (puVar13 = &local_440, puVar11 = &uStack_458, puVar16 = &local_450,
                    puVar18 = &local_448, local_470 != 3)))) {
                  (**(code **)(*puVar11 + 0x20))(puVar13,*puVar16,*puVar18);
                }
              } while (uVar10 != 0);
            }
            uVar10 = *(ulong *)(param_1 + 0x48);
            goto joined_r0x007d4c68;
          }
          lVar15 = *(long *)(param_1 + 0x28) + uVar20;
          *(long *)(param_1 + 0x28) = lVar15;
          uVar10 = *(ulong *)(param_1 + 0x48);
          if (uVar10 != 0) goto LAB_007d4c28;
LAB_007d4c6c:
          lVar21 = 0;
          uVar19 = 0;
          lVar22 = 0;
        }
        local_460 = *(ulong *)(param_1 + 0x38);
        local_470 = local_460 + lVar21 * 0x50;
        uStack_468 = local_460 + uVar19 * 0x50;
        uStack_458 = local_460 + lVar22 * 0x50;
        lVar22 = FUN_007965e0(&local_470,0);
        if ((lVar14 - lVar15) + lVar22 == 0) {
          pcVar9 = *(code **)(lVar17 + 0x28);
          goto LAB_007d4700;
        }
        uVar24 = 0;
      } while (uVar20 != 0);
    }
    else {
      uVar24 = *(undefined8 *)(param_1 + 0x78);
      lVar17 = *(long *)(param_1 + 0x80);
      lVar14 = *(long *)(param_1 + 0x18);
      do {
        if (uVar10 < uVar20) {
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (uVar20,uVar10,uVar10,&PTR_s__root__cargo_registry_src_index__00adf8e0);
        }
        auVar28 = (**(code **)(lVar17 + 0x20))(uVar24,param_2,lVar14 + uVar20,uVar10 - uVar20);
        if (auVar28._0_8_ != 0) {
          if (auVar28._0_8_ == 2) {
            return 1;
          }
          return 0;
        }
        uVar20 = uVar20 + auVar28._8_8_;
        *(ulong *)(param_1 + 0x28) = uVar20;
        if (uVar10 == uVar20) {
          pcVar9 = *(code **)(lVar17 + 0x28);
          *puVar7 = 0;
          *(undefined8 *)(param_1 + 0x28) = 0;
          goto LAB_007d4700;
        }
      } while (auVar28._8_8_ != 0);
      uVar24 = 0;
    }
  }
  return uVar24;
}


// ===== 007d4f8c  FUN_007d4f8c =====

undefined8 FUN_007d4f8c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  long local_50;
  ulong local_48;
  ulong local_40;
  undefined8 uStack_38;
  ulong local_30;
  ulong uStack_28;
  
  local_50 = *(long *)(param_1 + 0x98);
  lVar1 = *(long *)(param_1 + 0xa0);
  *(undefined1 *)(param_1 + 0xb1) = 0;
  if ((ulong)(lVar1 - local_50) < *(ulong *)(param_1 + 0x68)) {
    <bytes::bytes_mut::bytes::bytes_mut::BytesMut>::reserve_inner
              (param_1 + 0x90,*(ulong *)(param_1 + 0x68),1);
    local_50 = *(long *)(param_1 + 0x98);
    lVar1 = *(long *)(param_1 + 0xa0);
  }
  if (lVar1 == local_50) {
    <bytes::bytes_mut::bytes::bytes_mut::BytesMut>::reserve_inner(param_1 + 0x90,0x40,1);
    local_50 = *(long *)(param_1 + 0x98);
    lVar1 = *(long *)(param_1 + 0xa0);
  }
  local_48 = lVar1 - local_50;
  local_40 = 0;
  uStack_38 = 0;
  local_50 = *(long *)(param_1 + 0x90) + local_50;
  auVar2 = (**(code **)(*(long *)(param_1 + 0x80) + 0x18))
                     (*(undefined8 *)(param_1 + 0x78),param_2,&local_50);
  if ((auVar2 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
    *(undefined1 *)(param_1 + 0xb1) = 1;
    return 2;
  }
  if (auVar2._8_8_ != 0) {
    return 1;
  }
  if (local_40 <= local_48) {
    uStack_28 = *(long *)(param_1 + 0xa0) - *(long *)(param_1 + 0x98);
    if (local_40 <= uStack_28) {
      *(ulong *)(param_1 + 0x98) = *(long *)(param_1 + 0x98) + local_40;
      <hyper::proto::h1::io::[2]::hyper::proto::h1::io::ReadStrategy>::record(param_1 + 0x60);
      return 0;
    }
    local_30 = local_40;
                    /* WARNING: Subroutine does not return */
    bytes::panic_advance(&local_30);
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (0,local_40,local_48,&PTR_s__root__cargo_registry_src_index__00adf760);
}


// ===== 007d50ac  FUN_007d50ac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007d50ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  lVar2 = param_2[1];
                    /* try { // try from 007d50d0 to 007d5167 has its CatchHandler @ 007d516c */
  uVar4 = (**(code **)(lVar2 + 0x38))(uVar1);
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  lVar5 = FUN_004b25a4(0x2000,1);
  if (lVar5 != 0) {
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0x2000;
    param_1[3] = lVar5;
    param_1[6] = 0;
    param_1[7] = 8;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0x66000;
    uVar6 = param_2[2];
    *(undefined1 *)(param_1 + 0xb) = uVar4;
    param_1[0x11] = uVar6;
    param_1[0x12] = 1;
    uVar3 = _UNK_0029f778;
    uVar6 = _s__0029f770;
    *(undefined2 *)(param_1 + 0x16) = 0;
    param_1[0xf] = uVar1;
    param_1[0x10] = lVar2;
    *param_1 = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 1;
    *(undefined2 *)(param_1 + 0xc) = 0;
    param_1[0xe] = uVar3;
    param_1[0xd] = uVar6;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(1,0x2000);
}


// ===== 007d5188  FUN_007d5188 =====

void FUN_007d5188(ulong *param_1,ulong *param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulong local_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong local_1a0;
  ulong uStack_198;
  ulong local_190;
  ulong uStack_188;
  ulong local_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong local_160;
  ulong uStack_158;
  undefined1 local_e0;
  undefined4 uStack_df;
  undefined8 local_d0;
  ulong uStack_c8;
  ulong local_c0;
  ulong uStack_b8;
  ulong local_b0;
  ulong uStack_a8;
  ulong local_a0;
  ulong uStack_98;
  ulong local_90;
  ulong uStack_88;
  ulong local_80;
  ulong uStack_78;
  ulong local_70;
  ulong uStack_68;
  uint local_60;
  uint uStack_5c;
  
  lVar1 = 0;
  if (1 < *param_2) {
    lVar1 = *param_2 - 2;
  }
  if (lVar1 == 0) {
    FUN_007bf104(&local_d0,param_2,param_3);
    cVar4 = (char)local_60;
    if ((local_60 & 0xff) == 3) goto LAB_007d526c;
    if ((local_60 & 0xff) == 0xfd) {
                    /* try { // try from 007d5238 to 007d523f has its CatchHandler @ 007d5458 */
      FUN_007d11a4(param_2);
      *param_2 = 4;
      local_e0 = 2;
      uStack_1b8 = uStack_c8;
      local_1c0 = local_d0;
      uStack_1a8 = uStack_b8;
      uStack_1b0 = local_c0;
      uStack_198 = uStack_a8;
      local_1a0 = local_b0;
      local_190 = local_a0;
      goto LAB_007d538c;
    }
                    /* try { // try from 007d5274 to 007d527f has its CatchHandler @ 007d540c */
    FUN_007d11a4(param_2);
    *param_2 = 3;
    *(char *)(param_2 + 0xf) = cVar4;
    param_2[8] = uStack_98;
    param_2[7] = local_a0;
    param_2[10] = uStack_88;
    param_2[9] = local_90;
    *(uint *)((long)param_2 + 0x7c) = uStack_5c;
    *(undefined4 *)((long)param_2 + 0x79) = CONCAT13((undefined1)uStack_5c,local_60._1_3_);
    param_2[0xe] = uStack_68;
    param_2[0xd] = local_70;
    param_2[0xc] = uStack_78;
    param_2[0xb] = local_80;
    param_2[2] = uStack_c8;
    param_2[1] = local_d0;
    param_2[4] = uStack_b8;
    param_2[3] = local_c0;
    param_2[6] = uStack_a8;
    param_2[5] = local_b0;
  }
  else {
    if (lVar1 != 1) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic(&DAT_002e5ba5,0x22,&PTR_s__root__cargo_registry_src_index__00adf790);
    }
    cVar4 = (char)param_2[0xf];
  }
  if (cVar4 == -2) {
    FUN_007c06e8(&local_d0,param_2 + 1,param_3);
    if ((char)local_60 == -1) {
LAB_007d526c:
      *(undefined1 *)(param_1 + 0xe) = 0xff;
      return;
    }
  }
  else {
    *(undefined1 *)(param_2 + 0xf) = 0xff;
    if (cVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      core::option::expect_failed
                (&DAT_002e5bc7,0x1d,&PTR_s__root__cargo_registry_src_index__00adf7a8);
    }
    uStack_88 = param_2[10];
    local_90 = param_2[9];
    uStack_78 = param_2[0xc];
    local_80 = param_2[0xb];
    uStack_68 = param_2[0xe];
    local_70 = param_2[0xd];
    uVar2 = *(undefined4 *)((long)param_2 + 0x79);
    uStack_c8 = param_2[2];
    local_d0 = param_2[1];
    uStack_b8 = param_2[4];
    local_c0 = param_2[3];
    uStack_98 = param_2[8];
    local_a0 = param_2[7];
    uStack_a8 = param_2[6];
    local_b0 = param_2[5];
    local_60._1_3_ = (undefined3)uVar2;
    local_60 = CONCAT31(local_60._1_3_,cVar4);
    uStack_5c._1_3_ = (undefined3)((uint)*(undefined4 *)((long)param_2 + 0x7c) >> 8);
    uStack_5c._0_1_ = (undefined1)((uint)uVar2 >> 0x18);
  }
  uVar6 = uStack_5c;
  uVar5 = local_60;
  uStack_158 = uStack_68;
  local_160 = local_70;
  uStack_168 = uStack_78;
  uStack_170 = local_80;
  uStack_178 = uStack_88;
  local_180 = local_90;
  uStack_188 = uStack_98;
  local_190 = local_a0;
  uStack_198 = uStack_a8;
  local_1a0 = local_b0;
  uStack_1a8 = uStack_b8;
  uStack_1b0 = local_c0;
  uStack_1b8 = uStack_c8;
  local_1c0 = local_d0;
  uVar3 = CONCAT44(uStack_5c,local_60);
                    /* try { // try from 007d5348 to 007d534f has its CatchHandler @ 007d5470 */
  FUN_007d11a4(param_2);
  uStack_df = (undefined4)((ulong)uVar3 >> 8);
  *param_2 = 4;
  local_e0 = (undefined1)uVar5;
  local_d0 = CONCAT44(uVar6 >> 8,uStack_df);
LAB_007d538c:
  uVar2 = local_d0._3_4_;
  *(undefined1 *)(param_1 + 0xe) = local_e0;
  param_1[0xd] = uStack_158;
  param_1[0xc] = local_160;
  param_1[9] = uStack_178;
  param_1[8] = local_180;
  param_1[0xb] = uStack_168;
  param_1[10] = uStack_170;
  *(undefined4 *)((long)param_1 + 0x74) = uVar2;
  *(undefined4 *)((long)param_1 + 0x71) = (undefined4)local_d0;
  param_1[1] = uStack_1b8;
  *param_1 = local_1c0;
  param_1[3] = uStack_1a8;
  param_1[2] = uStack_1b0;
  param_1[5] = uStack_198;
  param_1[4] = local_1a0;
  param_1[7] = uStack_188;
  param_1[6] = local_190;
  return;
}


// ===== 007d5490  <reqwest::dns::resolve::DynResolver_as_tower_service::Service<hyper_util::client::legacy::connect::dns::Name>>::call =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::dns::resolve::DynResolver as
   tower_service::Service<hyper_util::client::legacy::connect::dns::Name>>::call */

void __rustcall
<reqwest::dns::resolve::DynResolver_as_tower_service::Service<hyper_util::client::legacy::connect::dns::Name>>
::call(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007d54a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x18))
            (*param_1 + (*(long *)(param_1[1] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
  return;
}


// ===== 007d54ac  FUN_007d54ac =====

void FUN_007d54ac(undefined8 *param_1)

{
  int iVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined8 unaff_x26;
  long *plVar15;
  undefined8 uVar16;
  undefined5 uStack_e5;
  undefined7 uStack_e0;
  undefined1 local_d9;
  undefined7 uStack_d8;
  undefined1 uStack_d1;
  undefined7 uStack_d0;
  undefined1 local_c9;
  undefined7 uStack_c8;
  undefined1 uStack_c1;
  undefined7 uStack_c0;
  long *local_b9;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  plVar6 = (long *)param_1[7];
  do {
    lVar8 = *plVar6;
    cVar5 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = lVar8 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (lVar8 < 0) {
LAB_007d569c:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x7d56a0);
    (*pcVar3)();
  }
  uVar16 = param_1[9];
  plVar15 = (long *)param_1[8];
  do {
    lVar8 = *plVar15;
    cVar5 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar2) {
      *plVar15 = lVar8 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (lVar8 < 0) goto LAB_007d569c;
  plVar9 = (long *)param_1[10];
  do {
    lVar8 = *plVar9;
    cVar5 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar2) {
      *plVar9 = lVar8 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (lVar8 < 0) goto LAB_007d569c;
  plVar10 = (long *)param_1[0xb];
  do {
    lVar8 = *plVar10;
    cVar5 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar2) {
      *plVar10 = lVar8 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (lVar8 < 0) goto LAB_007d569c;
  plVar7 = (long *)param_1[0xc];
  do {
    lVar8 = *plVar7;
    cVar5 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar2) {
      *plVar7 = lVar8 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (lVar8 < 0) goto LAB_007d569c;
  iVar1 = *(int *)(param_1 + 1);
  uVar11 = param_1[0xc];
  local_88 = uVar11;
  if (iVar1 == -1) {
    cVar5 = *(char *)(param_1 + 6);
    uVar12 = *(undefined1 *)(param_1 + 0xd);
    uVar13 = *(undefined1 *)((long)param_1 + 0x69);
    uVar14 = *(undefined1 *)((long)param_1 + 0x6a);
    if (cVar5 == '\x02') goto LAB_007d55cc;
  }
  else {
    unaff_x26 = *param_1;
    uVar12 = *(undefined1 *)(param_1 + 0xd);
    uVar13 = *(undefined1 *)((long)param_1 + 0x69);
    uVar14 = *(undefined1 *)((long)param_1 + 0x6a);
    if (*(char *)(param_1 + 6) == '\x02') {
      cVar5 = '\x02';
      goto LAB_007d55cc;
    }
  }
                    /* try { // try from 007d55b4 to 007d55bf has its CatchHandler @ 007d56a0 */
  (**(code **)param_1[2])(&uStack_e0,param_1 + 5,param_1[3],param_1[4]);
  uStack_78 = CONCAT17(uStack_d1,uStack_d8);
  local_80 = CONCAT17(local_d9,uStack_e0);
  uStack_68 = CONCAT17(uStack_c1,uStack_c8);
  uStack_70 = CONCAT17(local_c9,uStack_d0);
  cVar5 = *(char *)(param_1 + 6);
LAB_007d55cc:
  uStack_d1 = SUB81(plVar15,0);
  uStack_d0 = (undefined7)((ulong)plVar15 >> 8);
  local_d9 = SUB81(plVar6,0);
  uStack_d8 = (undefined7)((ulong)plVar6 >> 8);
  uStack_c1 = SUB81(plVar9,0);
  uStack_c0 = (undefined7)((ulong)plVar9 >> 8);
  local_c9 = (undefined1)uVar16;
  uStack_c8 = (undefined7)((ulong)uVar16 >> 8);
  uStack_a0 = (undefined4)uStack_78;
  uStack_9c = (undefined4)((ulong)uStack_78 >> 0x20);
  local_a8 = (undefined4)local_80;
  uStack_a4 = (undefined4)((ulong)local_80 >> 0x20);
  uStack_90 = (undefined4)uStack_68;
  uStack_8c = (undefined4)((ulong)uStack_68 >> 0x20);
  local_98 = (undefined4)uStack_70;
  uStack_94 = (undefined4)((ulong)uStack_70 >> 0x20);
  local_b9 = plVar10;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar4 = (undefined8 *)FUN_004b25a4(0x70,8);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[7] = plVar6;
    puVar4[6] = CONCAT71(uStack_e0,cVar5);
    puVar4[9] = uVar16;
    puVar4[8] = plVar15;
    puVar4[0xb] = plVar10;
    puVar4[10] = plVar9;
    puVar4[0xd] = CONCAT53(uStack_e5,CONCAT12(uVar14,CONCAT11(uVar13,uVar12)));
    puVar4[0xc] = uVar11;
    puVar4[1] = CONCAT44(uStack_ac,iVar1);
    *puVar4 = unaff_x26;
    puVar4[3] = uStack_78;
    puVar4[2] = local_80;
    puVar4[5] = uStack_68;
    puVar4[4] = uStack_70;
    return;
  }
                    /* try { // try from 007d5690 to 007d569b has its CatchHandler @ 007d56d4 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x70);
}


// ===== 007d56ec  FUN_007d56ec =====

void FUN_007d56ec(undefined8 *param_1)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  
  auVar2 = (**(code **)(param_1[1] + 0x28))(*param_1);
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  pauVar1 = (undefined1 (*) [16])FUN_004b25a4(0x10,8);
  if (pauVar1 != (undefined1 (*) [16])0x0) {
    *pauVar1 = auVar2;
    return;
  }
                    /* try { // try from 007d5744 to 007d574f has its CatchHandler @ 007d5754 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x10);
}


// ===== 007d576c  FUN_007d576c =====

void FUN_007d576c(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined1 (*pauVar2) [16];
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined4 uStack_24;
  
  auVar4 = (**(code **)(param_1[1] + 0x28))(*param_1);
  uVar3 = param_1[2];
  uVar1 = *(undefined4 *)(param_1 + 3);
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  pauVar2 = (undefined1 (*) [16])FUN_004b25a4(0x20,8);
  if (pauVar2 != (undefined1 (*) [16])0x0) {
    *pauVar2 = auVar4;
    *(ulong *)(pauVar2[1] + 8) = CONCAT44(uStack_24,uVar1);
    *(undefined8 *)pauVar2[1] = uVar3;
    return;
  }
                    /* try { // try from 007d57d4 to 007d57df has its CatchHandler @ 007d57e4 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x20);
}


// ===== 007d57fc  FUN_007d57fc =====

void FUN_007d57fc(undefined8 *param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long local_b0;
  long local_a8;
  long lStack_a0;
  ulong local_98;
  long local_90;
  long lStack_88;
  long local_80;
  undefined *local_78;
  long lStack_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong *local_50;
  code *pcStack_48;
  ulong *local_40;
  code *pcStack_38;
  ulong local_18;
  
  uVar1 = *(ulong *)(param_2 + 0x98);
  if (uVar1 == 0) {
    auVar4 = FUN_007d4f8c();
    uVar1 = auVar4._8_8_;
    if (auVar4._0_8_ != 0) {
      if (auVar4._0_8_ == 2) {
        *param_1 = 1;
        return;
      }
      param_1[1] = 0;
      lVar3 = 0x10;
      goto LAB_007d58d0;
    }
    if (param_4 <= uVar1) {
      uVar1 = param_4;
    }
    <bytes::bytes_mut::bytes::bytes_mut::BytesMut>::split_to(&local_b0,param_2 + 0x90,uVar1);
    uVar1 = local_98;
    puVar2 = PTR_SHARED_VTABLE_00b00e28;
    if ((local_98 & 1) != 0) {
      uVar1 = local_98 >> 5;
      local_90 = lStack_a0 + uVar1;
      lStack_88 = local_b0 - uVar1;
      local_80 = local_a8 + uVar1;
      <bytes::bytes::Bytes_as_core::convert::From<alloc::vec::Vec<u8>>>::from(&local_78,&local_90);
      local_a8 = local_68 - uVar1;
      if (local_68 < uVar1) {
        local_50 = &local_58;
        pcStack_48 = FUN_007d6358;
        local_40 = &local_18;
        local_18 = local_68;
        pcStack_38 = FUN_007d6358;
                    /* try { // try from 007d5960 to 007d5977 has its CatchHandler @ 007d59c0 */
        local_58 = uVar1;
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_fmt
                  (&DAT_002afeea,&local_50,&PTR_s__root__cargo_registry_src_index__00adf870);
      }
      goto LAB_007d58b8;
    }
  }
  else {
    if (param_4 <= uVar1) {
      uVar1 = param_4;
    }
    <bytes::bytes_mut::bytes::bytes_mut::BytesMut>::split_to(&local_b0,param_2 + 0x90,uVar1);
    uVar1 = local_98;
    puVar2 = PTR_SHARED_VTABLE_00b00e28;
    if ((local_98 & 1) != 0) {
      uVar1 = local_98 >> 5;
      local_90 = lStack_a0 + uVar1;
      lStack_88 = local_b0 - uVar1;
      local_80 = local_a8 + uVar1;
      <bytes::bytes::Bytes_as_core::convert::From<alloc::vec::Vec<u8>>>::from(&local_78,&local_90);
      local_a8 = local_68 - uVar1;
      if (local_68 < uVar1) {
        local_50 = &local_58;
        pcStack_48 = FUN_007d6358;
        local_40 = &local_18;
        local_18 = local_68;
        pcStack_38 = FUN_007d6358;
                    /* try { // try from 007d59a4 to 007d59bb has its CatchHandler @ 007d59e4 */
        local_58 = uVar1;
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_fmt
                  (&DAT_002afeea,&local_50,&PTR_s__root__cargo_registry_src_index__00adf870);
      }
LAB_007d58b8:
      local_b0 = lStack_70 + uVar1;
      uVar1 = local_60;
      puVar2 = local_78;
    }
  }
  param_1[1] = puVar2;
  param_1[2] = local_b0;
  lVar3 = 0x20;
  param_1[3] = local_a8;
LAB_007d58d0:
  *(ulong *)((long)param_1 + lVar3) = uVar1;
  *param_1 = 0;
  return;
}


// ===== 007d5a0c  FUN_007d5a0c =====

void FUN_007d5a0c(undefined8 *param_1,undefined8 param_2)

{
  long *local_18;
  
  local_18 = (long *)*param_1;
  if (*local_18 != -1) {
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002bd0bc,4,&local_18,&DAT_00adf8f8);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd198,4);
  return;
}


// ===== 007d5a68  FUN_007d5a68 =====

void FUN_007d5a68(undefined8 *param_1,undefined8 param_2)

{
  long *local_18;
  
  local_18 = (long *)*param_1;
  if (*local_18 != 0) {
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002bd0bc,4,&local_18,&DAT_00adf918);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd198,4);
  return;
}


// ===== 007d5ac0  FUN_007d5ac0 =====

void FUN_007d5ac0(long *param_1,undefined8 param_2)

{
  long *local_18;
  
  local_18 = (long *)*param_1 + 1;
  if (*(long *)*param_1 == 1) {
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002bd0bc,4,&local_18,&DAT_00adf938);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd198,4);
  return;
}


// ===== 007d5b1c  FUN_007d5b1c =====

void FUN_007d5b1c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = *param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,&DAT_002e5be4,10,&local_18,&DAT_00adf850);
  return;
}


// ===== 007d5b60  <reqwest::dns::resolve::DnsResolverWithOverrides_as_reqwest::dns::resolve::Resolve>::resolve =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::dns::resolve::DnsResolverWithOverrides as reqwest::dns::resolve::Resolve>::resolve */

undefined1  [16] __rustcall
<reqwest::dns::resolve::DnsResolverWithOverrides_as_reqwest::dns::resolve::Resolve>::resolve
          (long *param_1,void *param_2,size_t param_3)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  undefined1 *__dest;
  undefined8 *puVar5;
  long lVar6;
  void *__src;
  long lVar7;
  ulong uVar8;
  byte bVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  
  lVar7 = param_1[2];
  if (*(long *)(lVar7 + 0x28) != 0) {
    uVar4 = FUN_007c50d0(lVar7 + 0x30,param_2,param_3);
    lVar6 = 0;
    lVar1 = *(long *)(lVar7 + 0x10);
    uVar8 = *(ulong *)(lVar7 + 0x18);
    bVar9 = (byte)(uVar4 >> 0x39);
    uVar11 = CONCAT17(bVar9,CONCAT16(bVar9,CONCAT15(bVar9,CONCAT14(bVar9,CONCAT13(bVar9,CONCAT12(
                                                  bVar9,CONCAT11(bVar9,bVar9)))))));
    uVar4 = uVar4 & uVar8;
    uVar12 = *(undefined8 *)(lVar1 + uVar4);
    uVar10 = NEON_cmeq(uVar12,uVar11,1);
    uVar10 = uVar10 & 0x8080808080808080;
    do {
      for (; uVar10 != 0; uVar10 = uVar10 - 1 & uVar10) {
        uVar2 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
        lVar7 = lVar1 + (uVar4 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & uVar8) *
                        -0x30;
        if ((param_3 == *(size_t *)(lVar7 + -0x20)) &&
           (iVar3 = memcmp(param_2,*(void **)(lVar7 + -0x28),param_3), iVar3 == 0)) {
          uVar8 = *(ulong *)(lVar7 + -8);
          uVar10 = uVar8 * 0x20;
          if (uVar8 >> 0x3b == 0 && uVar10 < 0x7ffffffffffffffd) {
            __src = *(void **)(lVar7 + -0x10);
            if (uVar10 == 0) {
              __dest = &DAT_00000004;
              uVar4 = 0;
            }
            else {
              __rustc::__rust_no_alloc_shim_is_unstable_v2();
              uVar12 = 4;
              __dest = (undefined1 *)FUN_004b25a4(uVar10,4);
              uVar4 = uVar8;
              if (__dest == (undefined1 *)0x0) goto LAB_007d5cbc;
            }
            if (uVar8 != 0) {
              memcpy(__dest,__src,uVar10);
            }
            __rustc::__rust_no_alloc_shim_is_unstable_v2();
            puVar5 = (undefined8 *)FUN_004b25a4(0x20,8);
            if (puVar5 != (undefined8 *)0x0) {
              *puVar5 = __dest;
              puVar5[1] = __dest;
              puVar5[2] = uVar4;
              puVar5[3] = __dest + uVar8 * 0x20;
              __rustc::__rust_no_alloc_shim_is_unstable_v2();
              auVar13._0_8_ = (undefined8 *)FUN_004b25a4(0x18,8);
              if (auVar13._0_8_ == (undefined8 *)0x0) {
                    /* try { // try from 007d5dc4 to 007d5dcf has its CatchHandler @ 007d5dd4 */
                    /* WARNING: Subroutine does not return */
                alloc::alloc::handle_alloc_error(8,0x18);
              }
              auVar13._0_8_[1] = puVar5;
              *auVar13._0_8_ = 0;
              auVar13._0_8_[2] = &PTR_FUN_00adf888;
              if (param_3 != 0) {
                free(param_2);
              }
              auVar13._8_8_ = &PTR_FUN_00adf8c0;
              return auVar13;
            }
                    /* try { // try from 007d5db4 to 007d5dbf has its CatchHandler @ 007d5dec */
                    /* WARNING: Subroutine does not return */
            alloc::alloc::handle_alloc_error(8,0x20);
          }
          uVar12 = 0;
LAB_007d5cbc:
                    /* try { // try from 007d5cbc to 007d5cc7 has its CatchHandler @ 007d5e14 */
                    /* WARNING: Subroutine does not return */
          alloc::raw_vec::handle_error(uVar12,uVar10);
        }
      }
      uVar12 = NEON_cmeq(uVar12,0xffffffffffffffff,1);
      bVar9 = NEON_umaxv(uVar12,1);
      if ((bVar9 & 1) != 0) break;
      lVar6 = lVar6 + 8;
      uVar4 = uVar4 + lVar6 & uVar8;
      uVar12 = *(undefined8 *)(lVar1 + uVar4);
      uVar10 = NEON_cmeq(uVar12,uVar11,1);
      uVar10 = uVar10 & 0x8080808080808080;
    } while( true );
  }
                    /* WARNING: Could not recover jumptable at 0x007d5c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  auVar13 = (**(code **)(param_1[1] + 0x18))
                      (*param_1 + (*(long *)(param_1[1] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
                       param_2,param_3);
  return auVar13;
}


// ===== 007d5e34  FUN_007d5e34 =====

ulong FUN_007d5e34(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  char *pcVar2;
  ulong *puVar3;
  long lVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  ulong uVar8;
  undefined8 uVar9;
  long **pplVar10;
  long *plVar11;
  void *pvVar12;
  long lVar13;
  long *local_3a0;
  long *plStack_398;
  long *plStack_390;
  long lStack_388;
  long *local_380;
  long *plStack_378;
  long lStack_370;
  long *local_360;
  long *plStack_358;
  long lStack_350;
  void *pvStack_348;
  void *local_340;
  void *pvStack_338;
  void *pvStack_330;
  void *pvStack_328;
  void *local_320;
  void *pvStack_318;
  void *pvStack_310;
  void *pvStack_308;
  void *local_300;
  void *pvStack_2f8;
  void *pvStack_2f0;
  void *pvStack_2e8;
  void *local_2e0;
  void *pvStack_2d8;
  void *pvStack_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long *local_260;
  long *plStack_258;
  void *local_250;
  void *pvStack_248;
  void *local_240;
  void *pvStack_238;
  void *local_230;
  void *pvStack_228;
  void *local_220;
  void *pvStack_218;
  void *local_210;
  void *pvStack_208;
  void *local_200;
  undefined8 uStack_1f8;
  void *local_1f0;
  void *pvStack_1e8;
  void *local_1e0;
  void *pvStack_1d8;
  void *pvStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long *local_160;
  long *plStack_158;
  long lStack_150;
  void *pvStack_148;
  void *local_140;
  void *pvStack_138;
  void *pvStack_130;
  void *pvStack_128;
  void *local_120;
  void *pvStack_118;
  void *pvStack_110;
  void *pvStack_108;
  void *local_100;
  void *pvStack_f8;
  void *pvStack_f0;
  void *local_e8;
  void *pvStack_e0;
  void *local_d8;
  void *pvStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long *local_60;
  long *local_58;
  long *plStack_50;
  
  pplVar10 = &local_3a0;
  if (*param_2 == -1) {
    local_260 = (long *)*param_1;
    plVar11 = (long *)param_2[1];
    *param_1 = 2;
    if (local_260 == (long *)0x2) {
      if ((*(byte *)(param_1 + 5) & 1) != 0) {
        return (ulong)plVar11;
      }
      lVar13 = param_1[4];
      puVar1 = (undefined8 *)(lVar13 + 0x10);
      do {
        uVar9 = *puVar1;
        cVar7 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = 3;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
                    /* try { // try from 007d5ef0 to 007d5f7b has its CatchHandler @ 007d6224 */
      cVar7 = <want::State_as_core::convert::From<usize>>::from(uVar9);
      if (cVar7 == '\x02') {
        pcVar2 = (char *)(lVar13 + 0x28);
        do {
          cVar7 = *pcVar2;
          cVar6 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
          if (bVar5) {
            *pcVar2 = '\x01';
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0' || cVar7 != '\0');
        lVar4 = *(long *)(lVar13 + 0x18);
        *(undefined8 *)(lVar13 + 0x18) = 0;
        *(undefined4 *)(lVar13 + 0x28) = 0;
        if (lVar4 != 0) {
          (**(code **)(lVar4 + 8))(*(undefined8 *)(lVar13 + 0x20));
        }
      }
      lVar13 = param_1[3];
      if ((*(byte *)(lVar13 + 0x1b8) & 1) == 0) {
        *(undefined1 *)(lVar13 + 0x1b8) = 1;
      }
      puVar3 = (ulong *)(lVar13 + 0x1c0);
      do {
        cVar7 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar5) {
          *puVar3 = *puVar3 | 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      <tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notify_waiters(lVar13 + 0x180);
      local_250 = (void *)((ulong)local_250 & 0xffffffffffffff00);
      local_260 = param_1 + 3;
      FUN_007c2600(&local_160,&local_260);
      if ((long *)0xfffffffffffffffd < local_60) {
        return (ulong)plVar11;
      }
      uStack_298 = uStack_98;
      local_2a0 = local_a0;
      uStack_288 = uStack_88;
      uStack_290 = uStack_90;
      uStack_278 = uStack_78;
      local_280 = local_80;
      uStack_268 = uStack_68;
      uStack_270 = uStack_70;
      pvStack_2d8 = local_d8;
      local_2e0 = pvStack_e0;
      uStack_2c8 = uStack_c8;
      pvStack_2d0 = pvStack_d0;
      uStack_2b8 = uStack_b8;
      local_2c0 = local_c0;
      uStack_2a8 = uStack_a8;
      uStack_2b0 = uStack_b0;
      pvStack_318 = pvStack_118;
      local_320 = local_120;
      pvStack_308 = pvStack_108;
      pvStack_310 = pvStack_110;
      pvStack_2f8 = pvStack_f8;
      local_300 = local_100;
      pvStack_2e8 = local_e8;
      pvStack_2f0 = pvStack_f0;
      plStack_358 = plStack_158;
      local_360 = local_160;
      pvStack_348 = pvStack_148;
      lStack_350 = lStack_150;
      plStack_378 = plStack_50;
      local_380 = local_58;
      pvStack_338 = pvStack_138;
      local_340 = local_140;
      pvStack_328 = pvStack_128;
      pvStack_330 = pvStack_130;
      if (local_60 == (long *)0x2) {
        return (ulong)plVar11;
      }
      local_3a0 = local_60;
      uStack_198 = uStack_98;
      local_1a0 = local_a0;
      uStack_188 = uStack_88;
      uStack_190 = uStack_90;
      uStack_178 = uStack_78;
      local_180 = local_80;
      uStack_168 = uStack_68;
      uStack_170 = uStack_70;
      pvStack_1d8 = local_d8;
      local_1e0 = pvStack_e0;
      uStack_1c8 = uStack_c8;
      pvStack_1d0 = pvStack_d0;
      uStack_1b8 = uStack_b8;
      local_1c0 = local_c0;
      uStack_1a8 = uStack_a8;
      uStack_1b0 = uStack_b0;
      pvStack_218 = pvStack_118;
      local_220 = local_120;
      pvStack_208 = pvStack_108;
      local_210 = pvStack_110;
      uStack_1f8 = pvStack_f8;
      local_200 = local_100;
      pvStack_1e8 = local_e8;
      local_1f0 = pvStack_f0;
      plStack_258 = plStack_158;
      local_260 = local_160;
      pvStack_248 = pvStack_148;
      local_250 = (void *)lStack_150;
      pvStack_238 = pvStack_138;
      local_240 = local_140;
      pvStack_228 = pvStack_128;
      local_230 = pvStack_130;
      plStack_390 = plStack_50;
      plStack_398 = local_58;
                    /* try { // try from 007d6030 to 007d603f has its CatchHandler @ 007d61c8 */
      uVar9 = <hyper::error::hyper::error::Error>::new_canceled();
      local_60 = (long *)FUN_0079fcb8(uVar9,plVar11);
      uStack_98 = uStack_298;
      local_a0 = local_2a0;
      uStack_88 = uStack_288;
      uStack_90 = uStack_290;
      uStack_78 = uStack_278;
      local_80 = local_280;
      uStack_68 = uStack_268;
      uStack_70 = uStack_270;
      local_d8 = pvStack_2d8;
      pvStack_e0 = local_2e0;
      uStack_c8 = uStack_2c8;
      pvStack_d0 = pvStack_2d0;
      uStack_b8 = uStack_2b8;
      local_c0 = local_2c0;
      uStack_a8 = uStack_2a8;
      uStack_b0 = uStack_2b0;
      pvStack_118 = pvStack_318;
      local_120 = local_320;
      pvStack_108 = pvStack_308;
      pvStack_110 = pvStack_310;
      pvStack_f8 = pvStack_2f8;
      local_100 = local_300;
      local_e8 = pvStack_2e8;
      pvStack_f0 = pvStack_2f0;
      plStack_158 = plStack_358;
      local_160 = local_360;
      pvStack_148 = pvStack_348;
      lStack_150 = lStack_350;
      pvStack_138 = pvStack_338;
      local_140 = local_340;
      pvStack_128 = pvStack_328;
      pvStack_130 = pvStack_330;
      goto LAB_007d61a0;
    }
    local_250 = (void *)param_1[2];
    plStack_258 = (long *)param_1[1];
    local_160 = (long *)0xffffffffffffffff;
    local_60 = plVar11;
  }
  else {
    plStack_398 = (long *)param_2[0xf];
    local_3a0 = (long *)param_2[0xe];
    lStack_388 = param_2[0x11];
    plStack_390 = (long *)param_2[0x10];
    local_380 = (long *)*param_1;
    *param_1 = 2;
    if (local_380 == (long *)0x2) {
                    /* try { // try from 007d5e78 to 007d5e7b has its CatchHandler @ 007d62b0 */
      uVar8 = <hyper::error::hyper::error::Error>::new_unexpected_message();
                    /* try { // try from 007d5e7c to 007d5e87 has its CatchHandler @ 007d627c */
      FUN_007d2448(&local_3a0);
                    /* try { // try from 007d5e88 to 007d5e8f has its CatchHandler @ 007d6234 */
      FUN_007d2620(param_2);
      pvVar12 = (void *)param_2[0xc];
      if (pvVar12 == (void *)0x0) {
        return uVar8;
      }
                    /* try { // try from 007d5e98 to 007d5e9f has its CatchHandler @ 007d61e4 */
      FUN_007b3bec(pvVar12);
      free(pvVar12);
      return uVar8;
    }
    plStack_358 = (long *)param_2[0xf];
    local_360 = (long *)param_2[0xe];
    pvStack_348 = (void *)param_2[0x11];
    lStack_350 = param_2[0x10];
    lStack_370 = param_1[2];
    plStack_378 = (long *)param_1[1];
                    /* try { // try from 007d60a0 to 007d60a7 has its CatchHandler @ 007d6284 */
    <http::response::[2]::http::response::Parts>::new(&local_160);
    pvStack_1e8 = (void *)param_2[0xf];
    local_1f0 = (void *)param_2[0xe];
    pvStack_1d8 = (void *)param_2[0x11];
    local_1e0 = (void *)param_2[0x10];
    pvStack_218 = pvStack_118;
    local_220 = local_120;
    pvStack_208 = pvStack_108;
    local_210 = pvStack_110;
    local_200 = local_100;
    plStack_258 = plStack_158;
    local_260 = local_160;
    pvStack_248 = pvStack_148;
    local_250 = (void *)lStack_150;
    uStack_1f8 = (void *)CONCAT62((int6)((ulong)pvStack_f8 >> 0x10),(short)param_2[0xd]);
    pvStack_238 = pvStack_138;
    local_240 = local_140;
    pvStack_228 = pvStack_128;
    local_230 = pvStack_130;
                    /* try { // try from 007d60d8 to 007d60df has its CatchHandler @ 007d624c */
    FUN_007d2620(&local_260);
    pvVar12 = local_200;
    pvStack_238 = (void *)param_2[5];
    local_240 = (void *)param_2[4];
    pvStack_228 = (void *)param_2[7];
    local_230 = (void *)param_2[6];
    pvStack_f8 = (void *)param_2[0xc];
    uStack_1f8._0_3_ = CONCAT12(*(undefined1 *)((long)param_2 + 0x6a),(undefined2)uStack_1f8);
    pvStack_218 = (void *)param_2[9];
    local_220 = (void *)param_2[8];
    pvStack_208 = (void *)param_2[0xb];
    local_210 = (void *)param_2[10];
    plStack_258 = (long *)param_2[1];
    local_260 = (long *)*param_2;
    pvStack_248 = (void *)param_2[3];
    local_250 = (void *)param_2[2];
    if (local_200 != (void *)0x0) {
                    /* try { // try from 007d610c to 007d6113 has its CatchHandler @ 007d6200 */
      FUN_007b3bec(local_200);
      free(pvVar12);
    }
    local_140 = pvStack_248;
    pvStack_148 = local_250;
    local_100 = pvStack_208;
    pvStack_108 = local_210;
    pvStack_f0 = uStack_1f8;
    local_120 = pvStack_228;
    pvStack_128 = local_230;
    local_250 = (void *)lStack_370;
    pvStack_e0 = pvStack_1e8;
    local_e8 = local_1f0;
    pvStack_d0 = pvStack_1d8;
    local_d8 = local_1e0;
    pvStack_130 = pvStack_238;
    pvStack_138 = local_240;
    pvStack_110 = pvStack_218;
    pvStack_118 = local_220;
    lStack_150 = (long)plStack_258;
    plStack_158 = local_260;
    plStack_258 = plStack_378;
    local_260 = local_380;
    local_160 = (long *)0xfffffffffffffffe;
    local_200 = pvStack_f8;
  }
  pplVar10 = &local_260;
LAB_007d61a0:
  FUN_007a66c0(pplVar10,&local_160);
  return 0;
}


// ===== 007d62d4  FUN_007d62d4 =====

long FUN_007d62d4(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = (ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 8)) >> 5;
  uVar1 = param_2;
  if (uVar2 <= param_2) {
    uVar1 = uVar2;
  }
  *(ulong *)(param_1 + 8) = *(long *)(param_1 + 8) + uVar1 * 0x20;
  return param_2 - uVar1;
}


// ===== 007d6300  FUN_007d6300 =====

void FUN_007d6300(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = *(undefined8 **)(param_2 + 8);
  if (puVar1 != *(undefined8 **)(param_2 + 0x18)) {
    uVar3 = puVar1[1];
    uVar2 = *puVar1;
    uVar5 = puVar1[3];
    uVar4 = puVar1[2];
    *(undefined8 **)(param_2 + 8) = puVar1 + 4;
    param_1[1] = uVar3;
    *param_1 = uVar2;
    param_1[3] = uVar5;
    param_1[2] = uVar4;
    return;
  }
  *(undefined2 *)param_1 = 2;
  return;
}


// ===== 007d6330  FUN_007d6330 =====

void FUN_007d6330(ulong *param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)(*(long *)(param_2 + 0x18) - *(long *)(param_2 + 8)) >> 5;
  *param_1 = uVar1;
  param_1[1] = 1;
  param_1[2] = uVar1;
  return;
}


// ===== 007d6350  thunk_FUN_007bf304 =====

void thunk_FUN_007bf304(undefined1 (*param_1) [16],undefined8 *param_2)

{
  void *__ptr;
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  char cStack_37;
  undefined6 uStack_36;
  
  __ptr = (void *)*param_2;
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("Map must not be polled after it returned `Poll::Ready`",0x36,
               &PTR_s__root__cargo_registry_src_index__00ade300);
  }
  puVar1 = (undefined8 *)param_2[1];
  (*(code *)puVar1[3])(&uStack_48,__ptr);
  if (cStack_37 != -1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)(__ptr);
    }
    if (puVar1[1] != 0) {
      free(__ptr);
    }
    *param_2 = 0;
    if (cStack_37 != '\x02') {
      *(undefined8 *)(*param_1 + 8) = uStack_40;
      *(undefined8 *)*param_1 = uStack_48;
      *(ulong *)param_1[1] = CONCAT62(uStack_36,CONCAT11(cStack_37,uStack_38));
      return;
    }
    auVar2 = FUN_00772e5c(uStack_48,uStack_40);
    cStack_37 = '\x02';
    *param_1 = auVar2;
  }
  param_1[1][1] = cStack_37;
  return;
}


// ===== 007d6354  thunk_FUN_007bf73c =====

void thunk_FUN_007bf73c(undefined1 (*param_1) [16],long *param_2,undefined8 param_3)

{
  void *__ptr;
  undefined8 *puVar1;
  ulong uVar2;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined1 uVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  char cVar7;
  undefined1 auVar8 [16];
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 uStack_58;
  char cStack_57;
  undefined4 uStack_56;
  undefined2 uStack_52;
  undefined4 uStack_38;
  undefined2 uStack_34;
  
  if (*param_2 == 2) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("Map must not be polled after it returned `Poll::Ready`",0x36,
               &PTR_s__root__cargo_registry_src_index__00ade300);
  }
  (**(code **)(param_2[0x10] + 0x18))(&uStack_68,param_2[0xf]);
  if (cStack_57 == -1) {
    uVar2 = <tokio::time::sleep::Sleep_as_core::future::future::Future>::poll(param_2,param_3);
    if ((uVar2 & 1) != 0) {
      param_1[1][1] = 0xff;
      return;
    }
    puVar5 = &DAT_00adcd08;
    uVar6 = 1;
    uVar3 = extraout_w8_00;
    cVar7 = '\x02';
  }
  else {
    puVar5 = puStack_60;
    uVar6 = uStack_68;
    uVar3 = extraout_w8;
    cVar7 = cStack_57;
    if (cStack_57 != '\x02') {
      uStack_38 = uStack_56;
      uStack_34 = uStack_52;
      uVar3 = uStack_58;
    }
  }
  if (*param_2 != 2) {
    __ptr = (void *)param_2[0xf];
    puVar1 = (undefined8 *)param_2[0x10];
    pcVar4 = (code *)*puVar1;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(__ptr);
    }
    if (puVar1[1] != 0) {
      free(__ptr);
    }
    FUN_007d21d8(param_2);
    *param_2 = 2;
    if (cVar7 == '\x02') {
      auVar8 = FUN_00772e5c(uVar6,puVar5);
      param_1[1][1] = 2;
      *param_1 = auVar8;
    }
    else {
      *(undefined **)(*param_1 + 8) = puVar5;
      *(undefined8 *)*param_1 = uVar6;
      *(ulong *)param_1[1] = CONCAT26(uStack_34,CONCAT42(uStack_38,CONCAT11(cVar7,uVar3)));
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic
            ("internal error: entered unreachable code",0x28,
             &PTR_s__root__cargo_registry_src_index__00ade2e8);
}


// ===== 007d6358  FUN_007d6358 =====

void FUN_007d6358(undefined8 param_1,long param_2)

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


// ===== 007d6370  FUN_007d6370 =====

void FUN_007d6370(ulong *param_1,ulong *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined1 uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 local_514;
  ulong local_510;
  ulong local_500;
  ulong uStack_4f8;
  ulong local_4e8;
  ulong uStack_4e0;
  ulong local_4d8;
  ulong uStack_4d0;
  ulong local_4c8;
  ulong uStack_4c0;
  undefined1 local_4b8;
  undefined1 local_4b7;
  undefined4 local_4b6;
  undefined2 local_4b2;
  undefined1 local_4b0;
  undefined4 uStack_4af;
  undefined3 uStack_4ab;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 uStack_440;
  byte local_438 [8];
  long *local_430;
  long local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined1 auStack_410 [8];
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  ulong local_3b8;
  ulong local_3b0;
  ulong uStack_3a8;
  ulong local_3a0;
  undefined1 local_398;
  undefined1 local_397;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined7 uStack_2d8;
  undefined1 local_2d1;
  undefined7 uStack_2d0;
  ulong uStack_2c9;
  undefined4 local_2b8;
  undefined2 local_2b4;
  ulong local_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  undefined1 local_290;
  char local_288;
  undefined6 uStack_287;
  undefined1 uStack_281;
  undefined7 uStack_280;
  undefined1 uStack_279;
  undefined7 local_278;
  undefined1 uStack_271;
  undefined7 uStack_270;
  undefined1 uStack_269;
  undefined7 local_268;
  undefined1 uStack_261;
  undefined7 uStack_260;
  undefined1 uStack_259;
  undefined7 local_258;
  undefined1 uStack_251;
  undefined7 uStack_250;
  undefined1 uStack_249;
  undefined7 uStack_248;
  undefined1 uStack_241;
  undefined7 uStack_240;
  undefined1 uStack_239;
  undefined7 uStack_238;
  undefined1 local_231;
  undefined7 uStack_230;
  undefined1 uStack_229;
  undefined7 uStack_228;
  undefined1 local_221;
  undefined7 uStack_220;
  undefined1 uStack_219;
  undefined7 uStack_218;
  undefined1 local_211;
  undefined7 uStack_210;
  undefined1 uStack_209;
  undefined7 uStack_208;
  undefined1 local_201;
  undefined7 uStack_200;
  undefined1 uStack_1f9;
  undefined7 uStack_1f8;
  undefined1 local_1f1;
  undefined7 uStack_1f0;
  undefined1 uStack_1e9;
  undefined7 uStack_1e8;
  undefined1 local_1e1;
  undefined7 uStack_1e0;
  undefined1 uStack_1d9;
  undefined7 uStack_1d8;
  undefined1 local_1d1;
  undefined7 uStack_1d0;
  undefined1 uStack_1c9;
  undefined7 uStack_1c8;
  ulong local_1c1;
  undefined4 local_1b8;
  undefined2 local_1b4;
  ulong local_1b0;
  ulong uStack_1a8;
  ulong local_1a0;
  ulong uStack_198;
  undefined1 local_190;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  ulong local_c0;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined7 uStack_a8;
  undefined1 uStack_a1;
  undefined7 uStack_a0;
  undefined1 uStack_99;
  undefined7 uStack_98;
  undefined1 uStack_91;
  undefined7 uStack_90;
  undefined1 local_89;
  undefined7 uStack_88;
  undefined1 uStack_81;
  undefined7 uStack_80;
  ulong local_79;
  
  uVar5 = *param_2;
  if ((4 < (long)uVar5) && (uVar5 != 6)) {
    if (uVar5 == 5) {
      puVar8 = param_2 + 1;
      local_4e8 = *puVar8;
      *param_2 = 7;
      if (local_4e8 < 2) {
        memcpy(&uStack_4e0,param_2 + 2,0x150);
                    /* try { // try from 007d63f0 to 007d63ff has its CatchHandler @ 007d69f4 */
        FUN_007ca73c(&local_288,&local_3a0,local_438,local_398);
        uVar5 = local_4e8;
        if (local_288 == -1) {
          FUN_007d19e8(&local_4e8);
          uVar7 = 2;
          uVar3 = 0;
          uVar9 = 0;
          uVar5 = 0xffffffffffffffff;
          uStack_4f8 = 0;
          local_500 = 2;
        }
        else {
          local_79 = CONCAT17(uStack_251,local_258);
          uStack_a1 = (undefined1)uStack_280;
          uStack_a0 = (undefined7)(CONCAT17(uStack_279,uStack_280) >> 8);
          uStack_a8 = (undefined7)(CONCAT17(uStack_281,CONCAT61(uStack_287,local_288)) >> 8);
          uStack_91 = (undefined1)uStack_270;
          uStack_90 = (undefined7)(CONCAT17(uStack_269,uStack_270) >> 8);
          uStack_99 = (undefined1)local_278;
          uStack_98 = (undefined7)(CONCAT17(uStack_271,local_278) >> 8);
          uStack_81 = (undefined1)uStack_260;
          uStack_80 = (undefined7)(CONCAT17(uStack_259,uStack_260) >> 8);
          local_89 = (undefined1)local_268;
          uStack_88 = (undefined7)(CONCAT17(uStack_261,local_268) >> 8);
          uStack_138 = uStack_460;
          local_140 = local_468;
          uStack_128 = uStack_450;
          local_130 = local_458;
          uStack_178 = uStack_4a0;
          local_180 = local_4a8;
          uStack_168 = uStack_490;
          uStack_170 = local_498;
          uStack_158 = uStack_480;
          local_160 = local_488;
          uStack_148 = uStack_470;
          local_150 = local_478;
          uStack_118 = uStack_440;
          local_120 = local_448;
          uStack_108 = uStack_400;
          local_110 = local_408;
          local_c0 = local_3b8;
          uStack_259 = (undefined1)uStack_480;
          local_258 = (undefined7)((ulong)uStack_480 >> 8);
          uStack_261 = (undefined1)local_488;
          uStack_260 = (undefined7)((ulong)local_488 >> 8);
          uStack_d8 = uStack_3d0;
          local_e0 = local_3d8;
          uStack_c8 = uStack_3c0;
          local_d0 = local_3c8;
          local_510 = local_3a0;
          uStack_f8 = uStack_3f0;
          local_100 = local_3f8;
          uStack_e8 = uStack_3e0;
          local_f0 = local_3e8;
          local_190 = local_4b8;
          uStack_198 = uStack_4c0;
          local_1a0 = local_4c8;
          uStack_1a8 = uStack_4d0;
          local_1b0 = local_4d8;
          local_1b4 = local_4b2;
          uStack_279 = (undefined1)uStack_4a0;
          local_278 = (undefined7)((ulong)uStack_4a0 >> 8);
          uStack_281 = (undefined1)local_4a8;
          uStack_280 = (undefined7)((ulong)local_4a8 >> 8);
          uStack_269 = (undefined1)uStack_490;
          local_268 = (undefined7)((ulong)uStack_490 >> 8);
          uStack_271 = (undefined1)local_498;
          uStack_270 = (undefined7)((ulong)local_498 >> 8);
          uStack_ac = CONCAT13(local_288,uStack_4ab);
          uStack_239 = (undefined1)uStack_460;
          uStack_238 = (undefined7)((ulong)uStack_460 >> 8);
          uStack_241 = (undefined1)local_468;
          uStack_240 = (undefined7)((ulong)local_468 >> 8);
          uStack_249 = (undefined1)uStack_470;
          uStack_248 = (undefined7)((ulong)uStack_470 >> 8);
          uStack_251 = (undefined1)local_478;
          uStack_250 = (undefined7)((ulong)local_478 >> 8);
          local_1b8 = local_4b6;
          uStack_219 = (undefined1)uStack_440;
          uStack_218 = (undefined7)((ulong)uStack_440 >> 8);
          local_221 = (undefined1)local_448;
          uStack_220 = (undefined7)((ulong)local_448 >> 8);
          local_b0 = uStack_4af;
          uStack_1c9 = (undefined1)uStack_3c0;
          uStack_1c8 = (undefined7)((ulong)uStack_3c0 >> 8);
          local_1d1 = (undefined1)local_3c8;
          uStack_1d0 = (undefined7)((ulong)local_3c8 >> 8);
          uStack_229 = (undefined1)uStack_450;
          uStack_228 = (undefined7)((ulong)uStack_450 >> 8);
          local_231 = (undefined1)local_458;
          uStack_230 = (undefined7)((ulong)local_458 >> 8);
          local_1c1 = local_3b8;
          uStack_4f8 = uStack_3a8;
          local_500 = local_3b0;
          uStack_1f9 = (undefined1)uStack_3f0;
          uStack_1f8 = (undefined7)((ulong)uStack_3f0 >> 8);
          local_201 = (undefined1)local_3f8;
          uStack_200 = (undefined7)((ulong)local_3f8 >> 8);
          uStack_209 = (undefined1)uStack_400;
          uStack_208 = (undefined7)((ulong)uStack_400 >> 8);
          local_211 = (undefined1)local_408;
          uStack_210 = (undefined7)((ulong)local_408 >> 8);
          uStack_1d9 = (undefined1)uStack_3d0;
          uStack_1d8 = (undefined7)((ulong)uStack_3d0 >> 8);
          local_1e1 = (undefined1)local_3d8;
          uStack_1e0 = (undefined7)((ulong)local_3d8 >> 8);
          uStack_1e9 = (undefined1)uStack_3e0;
          uStack_1e8 = (undefined7)((ulong)uStack_3e0 >> 8);
          local_1f1 = (undefined1)local_3e8;
          uStack_1f0 = (undefined7)((ulong)local_3e8 >> 8);
          if (1 < local_438[0]) {
                    /* try { // try from 007d6584 to 007d658b has its CatchHandler @ 007d6908 */
            (**(code **)(*local_430 + 0x20))(local_430 + 3,local_430[1],local_430[2]);
            free(local_430);
          }
          (**(code **)(local_428 + 0x20))(auStack_410,uStack_420,local_418);
          uVar9 = uStack_4e0;
          uVar7 = local_4b7;
          local_514 = local_397;
          uVar3 = local_4b0;
        }
        local_290 = local_190;
        uStack_2a8 = uStack_1a8;
        local_2b0 = local_1b0;
        uStack_298 = uStack_198;
        uStack_2a0 = local_1a0;
        local_2b4 = local_1b4;
        uStack_2e0 = CONCAT17(local_1d1,uStack_1d8);
        uStack_2c9 = local_1c1;
        uStack_2d0 = uStack_1c8;
        uStack_2e8 = CONCAT17(uStack_1d9,uStack_1e0);
        local_2f0 = CONCAT17(local_1e1,uStack_1e8);
        local_2b8 = local_1b8;
        uStack_2f8 = CONCAT17(uStack_1e9,uStack_1f0);
        local_300 = CONCAT17(local_1f1,uStack_1f8);
        uStack_2d8 = uStack_1d0;
        local_2d1 = uStack_1c9;
        uStack_308 = CONCAT17(uStack_1f9,uStack_200);
        local_310 = CONCAT17(local_201,uStack_208);
        uStack_318 = CONCAT17(uStack_209,uStack_210);
        local_320 = CONCAT17(local_211,uStack_218);
        uStack_328 = CONCAT17(uStack_219,uStack_220);
        local_330 = CONCAT17(local_221,uStack_228);
        uStack_338 = CONCAT17(uStack_229,uStack_230);
        local_340 = CONCAT17(local_231,uStack_238);
        uStack_348 = CONCAT17(uStack_239,uStack_240);
        local_350 = CONCAT17(uStack_241,uStack_248);
        uVar4 = *param_2;
        uStack_358 = CONCAT17(uStack_249,uStack_250);
        local_360 = CONCAT17(uStack_251,local_258);
        uStack_368 = CONCAT17(uStack_259,uStack_260);
        local_370 = CONCAT17(uStack_261,local_268);
        lVar6 = uVar4 - 5;
        uStack_378 = CONCAT17(uStack_269,uStack_270);
        uStack_380 = CONCAT17(uStack_271,local_278);
        if ((long)uVar4 < 5) {
          lVar6 = 1;
        }
        uStack_388 = CONCAT17(uStack_279,uStack_280);
        local_390 = CONCAT17(uStack_281,CONCAT61(uStack_287,local_288));
        if (lVar6 == 1) {
          if (uVar4 == 0xffffffffffffffff) {
            if ((char)param_2[0xf] == '\x02') {
              FUN_007d2768(puVar8);
            }
            else if ((char)param_2[0xf] != -1) {
                    /* try { // try from 007d68a0 to 007d68b3 has its CatchHandler @ 007d693c */
              FUN_007d0e54(puVar8);
            }
          }
          else {
            FUN_007d11a4(param_2);
          }
        }
        else if (lVar6 == 0) {
                    /* try { // try from 007d6728 to 007d6743 has its CatchHandler @ 007d693c */
          FUN_007d19e8(puVar8);
        }
        *param_2 = uVar5;
        param_2[1] = uVar9;
        *(undefined1 *)(param_2 + 6) = local_290;
        param_2[3] = uStack_2a8;
        param_2[2] = local_2b0;
        param_2[5] = uStack_298;
        param_2[4] = uStack_2a0;
        *(undefined4 *)((long)param_2 + 0x32) = local_2b8;
        *(undefined2 *)((long)param_2 + 0x36) = local_2b4;
        *(undefined1 *)((long)param_2 + 0x31) = uVar7;
        param_2[0xe] = local_79;
        param_2[0xd] = CONCAT71(uStack_80,uStack_81);
        *(ulong *)((long)param_2 + 0x41) = CONCAT17(uStack_a1,uStack_a8);
        *(ulong *)((long)param_2 + 0x39) = CONCAT44(uStack_ac,local_b0);
        *(undefined1 *)(param_2 + 7) = uVar3;
        *(ulong *)((long)param_2 + 0x51) = CONCAT17(uStack_91,uStack_98);
        *(ulong *)((long)param_2 + 0x49) = CONCAT17(uStack_99,uStack_a0);
        *(ulong *)((long)param_2 + 0x61) = CONCAT17(uStack_81,uStack_88);
        *(ulong *)((long)param_2 + 0x59) = CONCAT17(local_89,uStack_90);
        param_2[0x10] = uStack_4f8;
        param_2[0xf] = local_500;
        param_2[0x11] = local_510;
        *(undefined8 *)((long)param_2 + 0x99) = uStack_388;
        *(undefined8 *)((long)param_2 + 0x91) = local_390;
        *(undefined1 *)(param_2 + 0x12) = local_514;
        *(undefined8 *)((long)param_2 + 0xa9) = uStack_378;
        *(undefined8 *)((long)param_2 + 0xa1) = uStack_380;
        *(undefined8 *)((long)param_2 + 0xd9) = uStack_348;
        *(undefined8 *)((long)param_2 + 0xd1) = local_350;
        *(undefined8 *)((long)param_2 + 0xc9) = uStack_358;
        *(undefined8 *)((long)param_2 + 0xc1) = local_360;
        *(undefined8 *)((long)param_2 + 0xb9) = uStack_368;
        *(undefined8 *)((long)param_2 + 0xb1) = local_370;
        *(undefined8 *)((long)param_2 + 0xf9) = uStack_328;
        *(undefined8 *)((long)param_2 + 0xf1) = local_330;
        *(undefined8 *)((long)param_2 + 0xe9) = uStack_338;
        *(undefined8 *)((long)param_2 + 0xe1) = local_340;
        *(undefined8 *)((long)param_2 + 0x109) = uStack_318;
        *(undefined8 *)((long)param_2 + 0x101) = local_320;
        *(undefined8 *)((long)param_2 + 0x119) = uStack_308;
        *(undefined8 *)((long)param_2 + 0x111) = local_310;
        param_2[0x2b] = uStack_2c9;
        param_2[0x2a] = CONCAT71(uStack_2d0,local_2d1);
        *(undefined8 *)((long)param_2 + 0x139) = uStack_2e8;
        *(undefined8 *)((long)param_2 + 0x131) = local_2f0;
        *(ulong *)((long)param_2 + 0x149) = CONCAT17(local_2d1,uStack_2d8);
        *(undefined8 *)((long)param_2 + 0x141) = uStack_2e0;
        *(undefined8 *)((long)param_2 + 0x129) = uStack_2f8;
        *(undefined8 *)((long)param_2 + 0x121) = local_300;
        if (4 < (long)uVar5) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    (&DAT_002e5b7d,0x28,&PTR_s__root__cargo_registry_src_index__00adf958);
        }
        if (uVar5 != 0xffffffffffffffff) {
          FUN_007d5188(param_1,param_2,param_3);
          return;
        }
        *(undefined1 *)(param_2 + 0xf) = 0xff;
        if ((((uint)local_500 ^ 0xffffffff) & 0xff) != 0) {
          uVar9 = param_2[10];
          uVar5 = param_2[9];
          uVar10 = param_2[0xc];
          uVar4 = param_2[0xb];
          uVar12 = param_2[0xe];
          uVar11 = param_2[0xd];
          uVar1 = *(undefined4 *)((long)param_2 + 0x7c);
          *(char *)(param_1 + 0xe) = (char)local_500;
          uVar2 = *(undefined4 *)((long)param_2 + 0x79);
          param_1[0xd] = uVar12;
          param_1[0xc] = uVar11;
          param_1[9] = uVar9;
          param_1[8] = uVar5;
          param_1[0xb] = uVar10;
          param_1[10] = uVar4;
          uVar9 = param_2[2];
          uVar5 = *puVar8;
          uVar10 = param_2[4];
          uVar4 = param_2[3];
          *(undefined4 *)((long)param_1 + 0x74) = uVar1;
          *(undefined4 *)((long)param_1 + 0x71) = uVar2;
          param_1[1] = uVar9;
          *param_1 = uVar5;
          param_1[3] = uVar10;
          param_1[2] = uVar4;
          uVar5 = param_2[5];
          uVar4 = param_2[8];
          uVar9 = param_2[7];
          param_1[5] = param_2[6];
          param_1[4] = uVar5;
          param_1[7] = uVar4;
          param_1[6] = uVar9;
          return;
        }
        goto LAB_007d68d0;
      }
    }
    else {
      *param_2 = 7;
    }
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_002e5bee,0x75,&PTR_s__root__cargo_registry_src_index__00adf970);
  }
  if (uVar5 != 0xffffffffffffffff) {
    FUN_007d5188(param_1,param_2,param_3);
    return;
  }
  uVar5 = param_2[0xf];
  *(undefined1 *)(param_2 + 0xf) = 0xff;
  if ((char)uVar5 != -1) {
    uVar4 = param_2[10];
    uVar9 = param_2[9];
    uVar11 = param_2[0xc];
    uVar10 = param_2[0xb];
    uVar13 = param_2[0xe];
    uVar12 = param_2[0xd];
    *(char *)(param_1 + 0xe) = (char)uVar5;
    uVar1 = *(undefined4 *)((long)param_2 + 0x7c);
    uVar2 = *(undefined4 *)((long)param_2 + 0x79);
    param_1[9] = uVar4;
    param_1[8] = uVar9;
    param_1[0xb] = uVar11;
    param_1[10] = uVar10;
    uVar9 = param_2[2];
    uVar5 = param_2[1];
    uVar10 = param_2[4];
    uVar4 = param_2[3];
    param_1[0xd] = uVar13;
    param_1[0xc] = uVar12;
    param_1[1] = uVar9;
    *param_1 = uVar5;
    param_1[3] = uVar10;
    param_1[2] = uVar4;
    uVar9 = param_2[8];
    uVar5 = param_2[7];
    uVar10 = param_2[6];
    uVar4 = param_2[5];
    *(undefined4 *)((long)param_1 + 0x74) = uVar1;
    param_1[5] = uVar10;
    param_1[4] = uVar4;
    param_1[7] = uVar9;
    param_1[6] = uVar5;
    *(undefined4 *)((long)param_1 + 0x71) = uVar2;
    return;
  }
LAB_007d68d0:
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed(&DAT_002e5bc7,0x1d,&PTR_s__root__cargo_registry_src_index__00adf7a8);
}


// ===== 007d6a70  <reqwest::dns::resolve::Name_as_core::str::traits::FromStr>::from_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::dns::resolve::Name as core::str::traits::FromStr>::from_str */

void __rustcall <reqwest::dns::resolve::Name_as_core::str::traits::FromStr>::from_str(void)

{
  <hyper_util::client::legacy::connect::dns::Name_as_core::str::traits::FromStr>::from_str();
  return;
}


// ===== 007d6a84  FUN_007d6a84 =====

void FUN_007d6a84(void *param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 local_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 local_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 local_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 local_520;
  undefined8 uStack_518;
  undefined1 auStack_508 [352];
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  char local_338;
  undefined7 uStack_337;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_1f0;
  long *plStack_1e8;
  long local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  long *local_1c0;
  long *local_1b8;
  long local_1b0;
  undefined1 auStack_1a8 [112];
  char local_138;
  
  local_580 = 0;
  plVar6 = param_2 + 8;
  if (*plVar6 == -2) {
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed(&DAT_002e5c28,0x18,&PTR_s__root__cargo_registry_src_index__00adf988)
    ;
  }
  FUN_007ccdac(&local_3a8);
  if (local_338 == -1) {
    FUN_007d6370(&local_3a8,plVar6,param_3);
    if (local_338 == -1) {
      *(undefined8 *)((long)param_1 + 0x78) = 0xfffffffffffffffd;
    }
    else {
      lVar5 = *plVar6;
      *plVar6 = -2;
      uStack_228 = uStack_360;
      local_230 = local_368;
      uStack_218 = uStack_350;
      uStack_220 = uStack_358;
      uStack_208 = uStack_340;
      local_210 = local_348;
      uStack_268 = uStack_3a0;
      local_270 = local_3a8;
      uStack_258 = uStack_390;
      uStack_260 = uStack_398;
      uStack_248 = uStack_380;
      local_250 = local_388;
      uStack_238 = uStack_370;
      uStack_240 = uStack_378;
      if (lVar5 == -2) {
                    /* try { // try from 007d6e68 to 007d6e7f has its CatchHandler @ 007d6f48 */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic(&DAT_002e5b7d,0x28,&PTR_s__root__cargo_registry_src_index__00adf9a0);
      }
      plStack_1e8 = (long *)param_2[1];
      local_1f0 = *param_2;
      local_1d8 = param_2[3];
      local_1e0 = param_2[2];
      uStack_1c8 = param_2[5];
      local_1d0 = param_2[4];
      local_1b8 = (long *)param_2[7];
      local_1c0 = (long *)param_2[6];
      local_1b0 = lVar5;
      memcpy(auStack_1a8,param_2 + 9,0x158);
      uStack_2b0 = param_2[1];
      local_2b8 = *param_2;
      uStack_2a0 = param_2[3];
      local_2a8 = param_2[2];
      *(undefined8 *)((long)param_1 + 0x78) = 0xfffffffffffffffe;
      uStack_290 = param_2[5];
      local_298 = param_2[4];
      uStack_280 = param_2[7];
      local_288 = param_2[6];
      uStack_2e8 = uStack_360;
      local_2f0 = local_368;
      uStack_2d8 = uStack_350;
      uStack_2e0 = uStack_358;
      uStack_2c8 = uStack_340;
      local_2d0 = local_348;
      *(undefined8 *)((long)param_1 + 0x130) = uStack_280;
      lVar4 = lVar5 + -5;
      uStack_328 = uStack_3a0;
      local_330 = local_3a8;
      uStack_318 = uStack_390;
      uStack_320 = uStack_398;
      if (lVar5 < 5) {
        lVar4 = 1;
      }
      uStack_308 = uStack_380;
      local_310 = local_388;
      uStack_2f8 = uStack_370;
      uStack_300 = uStack_378;
      *(undefined8 *)((long)param_1 + 0x108) = local_2a8;
      *(undefined8 *)((long)param_1 + 0x100) = uStack_2b0;
      *(undefined8 *)((long)param_1 + 0x118) = local_298;
      *(undefined8 *)((long)param_1 + 0x110) = uStack_2a0;
      *(undefined8 *)((long)param_1 + 0x128) = local_288;
      *(undefined8 *)((long)param_1 + 0x120) = uStack_290;
      *(undefined8 *)((long)param_1 + 200) = uStack_360;
      *(undefined8 *)((long)param_1 + 0xc0) = local_368;
      *(undefined8 *)((long)param_1 + 0xd8) = uStack_350;
      *(undefined8 *)((long)param_1 + 0xd0) = uStack_358;
      *(undefined8 *)((long)param_1 + 0xe8) = uStack_340;
      *(undefined8 *)((long)param_1 + 0xe0) = local_348;
      *(undefined8 *)((long)param_1 + 0xf8) = local_2b8;
      *(ulong *)((long)param_1 + 0xf0) = CONCAT71(uStack_337,local_338);
      *(undefined8 *)((long)param_1 + 0x88) = uStack_3a0;
      *(undefined8 *)((long)param_1 + 0x80) = local_3a8;
      *(undefined8 *)((long)param_1 + 0x98) = uStack_390;
      *(undefined8 *)((long)param_1 + 0x90) = uStack_398;
      *(undefined8 *)((long)param_1 + 0xa8) = uStack_380;
      *(undefined8 *)((long)param_1 + 0xa0) = local_388;
      *(undefined8 *)((long)param_1 + 0xb8) = uStack_370;
      *(undefined8 *)((long)param_1 + 0xb0) = uStack_378;
      if (lVar4 == 1) {
        if (lVar5 == -1) {
          if (local_138 == '\x02') {
            FUN_007d2768(auStack_1a8);
          }
          else if (local_138 != -1) {
            FUN_007d0e54(auStack_1a8);
          }
        }
        else {
          FUN_007d11a4(&local_1b0);
        }
      }
      else if (lVar4 == 0) {
        FUN_007d19e8(auStack_1a8);
      }
    }
  }
  else {
    local_1b0 = *plVar6;
    uStack_228 = uStack_360;
    local_230 = local_368;
    uStack_218 = uStack_350;
    uStack_220 = uStack_358;
    uStack_208 = uStack_340;
    local_210 = local_348;
    *plVar6 = -2;
    uStack_268 = uStack_3a0;
    local_270 = local_3a8;
    uStack_258 = uStack_390;
    uStack_260 = uStack_398;
    uStack_248 = uStack_380;
    local_250 = local_388;
    uStack_238 = uStack_370;
    uStack_240 = uStack_378;
    if (local_1b0 == -2) {
                    /* try { // try from 007d6e4c to 007d6e63 has its CatchHandler @ 007d6f58 */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic(&DAT_002e5b7d,0x28,&PTR_s__root__cargo_registry_src_index__00adf9a0);
    }
    plStack_1e8 = (long *)param_2[1];
    local_1f0 = *param_2;
    local_1d8 = param_2[3];
    local_1e0 = param_2[2];
    uStack_1c8 = param_2[5];
    local_1d0 = param_2[4];
    local_1b8 = (long *)param_2[7];
    local_1c0 = (long *)param_2[6];
    memcpy(auStack_1a8,param_2 + 9,0x158);
    memcpy(auStack_508,&local_1b0,0x160);
    uStack_538 = uStack_360;
    local_540 = local_368;
    uStack_528 = uStack_350;
    uStack_530 = uStack_358;
    uStack_518 = uStack_340;
    local_520 = local_348;
    uStack_578 = uStack_3a0;
    local_580 = local_3a8;
    uStack_568 = uStack_390;
    uStack_570 = uStack_398;
    uStack_558 = uStack_380;
    local_560 = local_388;
    uStack_548 = uStack_370;
    uStack_550 = uStack_378;
    memcpy(param_1,&local_580,0x1d8);
                    /* try { // try from 007d6b88 to 007d6b8f has its CatchHandler @ 007d6efc */
    FUN_007cdfd4(&local_1f0);
    plVar6 = plStack_1e8;
    if (1 < (byte)local_1f0) {
                    /* try { // try from 007d6bac to 007d6bb3 has its CatchHandler @ 007d6ebc */
      (**(code **)(*plStack_1e8 + 0x20))(plStack_1e8 + 3,plStack_1e8[1],plStack_1e8[2]);
      free(plVar6);
    }
                    /* try { // try from 007d6bd8 to 007d6bdf has its CatchHandler @ 007d6ef4 */
    (**(code **)(local_1e0 + 0x20))(&uStack_1c8,local_1d8,local_1d0);
    if (local_1c0 != (long *)0x0) {
      do {
        lVar5 = *local_1c0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(local_1c0,0x10);
        if (bVar3) {
          *local_1c0 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        DataMemoryBarrier(2,1);
                    /* try { // try from 007d6c00 to 007d6c07 has its CatchHandler @ 007d6eb4 */
        <alloc[c1f8e832b0d782c7]::sync::Arc<std[17aff9129faa4dc5]::sync::poison::mutex::Mutex<hyper_util[52a210df7efc1bae]::client::legacy::pool::PoolInner<hyper_util[52a210df7efc1bae]::client::legacy::client::PoolClient<reqwest[6fed810f3e38d558]::async_impl::body::Body>,(http[b87e90c26fe47eb4]::uri::scheme::Scheme,http[b87e90c26fe47eb4]::uri::authority::Authority)>>>>
        ::drop_slow(&local_1c0);
      }
    }
    plVar6 = local_1b8;
    if (local_1b8 != (long *)0x0) {
      plVar1 = local_1b8 + 0xc;
      *(undefined4 *)(local_1b8 + 0x10) = 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(char *)plVar1 = '\x01';
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((char)lVar5 == '\0') {
        lVar5 = local_1b8[10];
        local_1b8[10] = 0;
        *(undefined4 *)(local_1b8 + 0xc) = 0;
        if (lVar5 != 0) {
                    /* try { // try from 007d6c4c to 007d6c83 has its CatchHandler @ 007d6e84 */
          (**(code **)(lVar5 + 0x18))(local_1b8[0xb]);
        }
      }
      plVar1 = plVar6 + 0xf;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(char *)plVar1 = '\x01';
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((char)lVar5 == '\0') {
        lVar5 = plVar6[0xd];
        plVar6[0xd] = 0;
        *(undefined4 *)(plVar6 + 0xf) = 0;
        if (lVar5 != 0) {
          (**(code **)(lVar5 + 8))(plVar6[0xe]);
        }
      }
      do {
        lVar5 = *local_1b8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(local_1b8,0x10);
        if (bVar3) {
          *local_1b8 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        DataMemoryBarrier(2,1);
        <alloc::sync::[n]::alloc::sync::Arc<futures_channel::oneshot::Inner<hyper_util::client::legacy::client::PoolClient<reqwest::async_impl::body::Body>>>>
        ::drop_slow(&local_1b8);
      }
    }
  }
  return;
}


// ===== 007d6f7c  FUN_007d6f7c =====

void FUN_007d6f7c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 007d6f84  FUN_007d6f84 =====

void FUN_007d6f84(undefined8 param_1,undefined8 *param_2)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  undefined1 local_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  uStack_58 = param_2[5];
  local_60 = param_2[4];
  uStack_48 = param_2[7];
  uStack_50 = param_2[6];
  uStack_38 = param_2[9];
  local_40 = param_2[8];
  local_30 = param_2[10];
  local_80._8_8_ = param_2[1];
  local_80._0_8_ = *param_2;
  uStack_68 = param_2[3];
  uStack_70 = param_2[2];
  auVar2 = <reqwest::connect::ConnectorService_as_tower_service::Service<http::uri::Uri>>::call
                     (param_1,local_80);
  local_80 = auVar2;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  pauVar1 = (undefined1 (*) [16])FUN_004b25a4(0x10,8);
  if (pauVar1 != (undefined1 (*) [16])0x0) {
    *pauVar1 = auVar2;
    return;
  }
                    /* try { // try from 007d6ff8 to 007d7003 has its CatchHandler @ 007d7008 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x10);
}


// ===== 007d7020  FUN_007d7020 =====

void FUN_007d7020(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  uint local_38 [2];
  long local_30;
  undefined8 local_28;
  
  (**(code **)(param_2[1] + 0x18))(local_38,*param_2);
  if ((local_38[0] & 1) != 0) {
    *param_1 = 1;
    return;
  }
  if (local_30 != 0) {
    auVar1 = FUN_00772e5c(local_30,local_28);
    *param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 1) = auVar1;
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 007d70a0  FUN_007d70a0 =====

void FUN_007d70a0(undefined8 *param_1)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  
  auVar2 = (**(code **)(param_1[1] + 0x20))(*param_1);
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  pauVar1 = (undefined1 (*) [16])FUN_004b25a4(0x10,8);
  if (pauVar1 != (undefined1 (*) [16])0x0) {
    *pauVar1 = auVar2;
    return;
  }
                    /* try { // try from 007d70f8 to 007d7103 has its CatchHandler @ 007d7108 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x10);
}


// ===== 007d7120  FUN_007d7120 =====

void FUN_007d7120(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  uint local_38 [2];
  long local_30;
  undefined8 local_28;
  
  (**(code **)(param_2[1] + 0x18))(local_38,*param_2);
  if ((local_38[0] & 1) != 0) {
    *param_1 = 1;
    return;
  }
  if (local_30 != 0) {
    auVar1 = FUN_00772e5c(local_30,local_28);
    *param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 1) = auVar1;
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 007d71a0  FUN_007d71a0 =====

void FUN_007d71a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  auVar2 = (**(code **)(param_1[1] + 0x20))(*param_1);
                    /* try { // try from 007d71d4 to 007d71e7 has its CatchHandler @ 007d7288 */
  tokio::time::sleep::sleep
            (&local_a8,param_1[2],*(undefined4 *)(param_1 + 3),
             &PTR_s__root__cargo_registry_src_index__00ad8bd8);
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)FUN_004b25a4(0x88,8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[0xd] = uStack_40;
    puVar1[0xc] = local_48;
    puVar1[0xf] = auVar2._0_8_;
    puVar1[0xe] = local_38;
    puVar1[0xb] = uStack_50;
    puVar1[10] = uStack_58;
    puVar1[0x10] = auVar2._8_8_;
    puVar1[3] = uStack_90;
    puVar1[2] = uStack_98;
    puVar1[5] = uStack_80;
    puVar1[4] = local_88;
    puVar1[7] = uStack_70;
    puVar1[6] = uStack_78;
    puVar1[9] = uStack_60;
    puVar1[8] = local_68;
    puVar1[1] = uStack_a0;
    *puVar1 = local_a8;
    return;
  }
                    /* try { // try from 007d7278 to 007d7283 has its CatchHandler @ 007d72a8 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x88);
}


// ===== 007d72c0  FUN_007d72c0 =====

void FUN_007d72c0(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *param_2;
  *param_2 = 2;
  if (lVar1 != 2) {
    lVar3 = param_2[2];
    lVar2 = param_2[1];
    *param_1 = lVar1;
    param_1[2] = lVar3;
    param_1[1] = lVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed(&DAT_002e5c54,0x1f,&PTR_s__nix_store_8006w282fgsx3273c878b_00adf9e8);
}


// ===== 007d7304  FUN_007d7304 =====

void FUN_007d7304(long *param_1,undefined1 *param_2)

{
  long lVar1;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  code *pcStack_28;
  undefined1 **local_20;
  code *pcStack_18;
  
  local_30 = (undefined1 *)&local_40;
  lVar1 = *param_1;
  if (lVar1 < 2) {
    local_40 = param_2;
    if (lVar1 == 0) {
      local_38 = (undefined1 *)param_1[3];
      if (param_2 <= local_38) {
        param_1[2] = (long)(param_2 + param_1[2]);
        param_1[3] = (long)local_38 - (long)param_2;
        return;
      }
      pcStack_28 = FUN_007d6358;
      local_20 = &local_38;
      pcStack_18 = FUN_007d6358;
      local_30 = (undefined1 *)&local_40;
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                (&DAT_002afeea,&local_30,&PTR_s__root__cargo_registry_src_index__00adf870);
    }
    if ((undefined1 *)param_1[5] < param_2) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: cnt <= self.limit",0x23,
                 &PTR_s__root__cargo_registry_src_index__00ade330);
    }
    local_38 = (undefined1 *)param_1[3];
    if (param_2 <= local_38) {
      param_1[5] = param_1[5] - (long)param_2;
      param_1[2] = (long)(param_2 + param_1[2]);
      param_1[3] = (long)local_38 - (long)param_2;
      return;
    }
    pcStack_28 = FUN_007c05d8;
    local_20 = &local_38;
    pcStack_18 = FUN_007c05d8;
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              (&DAT_002afeea,&local_30,&PTR_s__root__cargo_registry_src_index__00ade318);
  }
  if (lVar1 == 2) {
    FUN_0079f714(param_1 + 1);
    return;
  }
  if (lVar1 == 3) {
    pcStack_28 = (code *)param_1[2];
    if (param_2 <= pcStack_28) {
      param_1[1] = (long)(param_2 + param_1[1]);
      param_1[2] = (long)pcStack_28 - (long)param_2;
      return;
    }
    local_30 = param_2;
                    /* WARNING: Subroutine does not return */
    bytes::panic_advance(&local_30);
  }
  FUN_0079f848(param_1 + 1);
  return;
}


// ===== 007d7460  FUN_007d7460 =====

void FUN_007d7460(undefined8 *param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = (ulong)((long)*(undefined8 **)(param_2 + 0x18) - *(long *)(param_2 + 8)) >> 5;
  uVar2 = param_3;
  if (uVar3 <= param_3) {
    uVar2 = uVar3;
  }
  puVar1 = (undefined8 *)(*(long *)(param_2 + 8) + uVar2 * 0x20);
  *(undefined8 **)(param_2 + 8) = puVar1;
  if ((param_3 <= uVar3) && (puVar1 != *(undefined8 **)(param_2 + 0x18))) {
    uVar5 = puVar1[1];
    uVar4 = *puVar1;
    uVar7 = puVar1[3];
    uVar6 = puVar1[2];
    *(undefined8 **)(param_2 + 8) = puVar1 + 4;
    param_1[1] = uVar5;
    *param_1 = uVar4;
    param_1[3] = uVar7;
    param_1[2] = uVar6;
    return;
  }
  *(undefined2 *)param_1 = 2;
  return;
}


// ===== 007d74ac  FUN_007d74ac =====

void FUN_007d74ac(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long local_40;
  long lStack_38;
  undefined8 local_30;
  long lStack_28;
  
  local_40 = param_3[1];
  lStack_28 = local_40 + param_3[2] * 0x18;
  local_30 = *param_3;
  lStack_38 = local_40;
                    /* try { // try from 007d74dc to 007d74e3 has its CatchHandler @ 007d750c */
  FUN_007891c0(param_2,&local_40);
  uVar2 = param_2[5];
  uVar1 = param_2[4];
  uVar4 = param_2[7];
  uVar3 = param_2[6];
  param_1[8] = param_2[8];
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  uVar3 = *param_2;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return;
}


// ===== 007d7524  FUN_007d7524 =====

undefined8
FUN_007d7524(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 local_38;
  
  plVar7 = (long *)*param_1;
  do {
    lVar6 = *plVar7;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar2) {
      *plVar7 = lVar6 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (-1 < lVar6) {
    uVar4 = FUN_007793c8(param_2,param_3,plVar7,0xcc,param_4);
                    /* try { // try from 007d7570 to 007d757f has its CatchHandler @ 007d75f8 */
    uVar5 = FUN_007ca4ac(plVar7 + 0x11,uVar4,uVar4);
                    /* try { // try from 007d7588 to 007d7593 has its CatchHandler @ 007d75c4 */
    local_38 = param_4;
    <tokio::runtime::task_hooks::tokio::runtime::task_hooks::TaskHooks>::spawn
              (plVar7 + 0x3c,&local_38);
                    /* try { // try from 007d7594 to 007d759f has its CatchHandler @ 007d75bc */
    <tokio::runtime::scheduler::multi_thread::worker::[3]::tokio::runtime::scheduler::multi_thread::handle::Handle>
    ::schedule_option_task_without_yield(plVar7 + 2,uVar5);
    return uVar4;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x7d75bc);
  (*pcVar3)();
}


// ===== 007d7620  FUN_007d7620 =====

void FUN_007d7620(long param_1,undefined8 *param_2,undefined8 *param_3,size_t param_4,
                 undefined8 *param_5,char *param_6,void *param_7,size_t param_8,undefined1 param_9,
                 undefined1 param_10)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined4 uVar6;
  byte bVar7;
  byte bVar8;
  undefined1 uVar9;
  undefined2 uVar10;
  char cVar11;
  byte bVar12;
  bool bVar13;
  code *pcVar14;
  long lVar15;
  undefined1 *__dest;
  undefined8 *puVar16;
  undefined8 *puVar17;
  size_t sVar18;
  long *plVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 *extraout_x9;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 **ppuVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 **ppuVar27;
  undefined8 *extraout_x11;
  undefined8 *extraout_x11_00;
  undefined8 *extraout_x11_01;
  undefined8 *extraout_x11_02;
  undefined8 *extraout_x11_03;
  undefined2 uVar28;
  undefined8 *extraout_x12;
  undefined8 *extraout_x12_00;
  undefined8 *extraout_x12_01;
  undefined8 *extraout_x12_02;
  undefined8 *puVar29;
  undefined8 *puVar30;
  undefined8 *extraout_x17;
  undefined8 *extraout_x17_00;
  undefined8 *extraout_x17_01;
  undefined8 *extraout_x17_02;
  undefined1 uVar31;
  long *plVar32;
  undefined1 uVar33;
  long *plVar34;
  size_t sVar35;
  undefined8 *puVar36;
  void *pvVar37;
  ulong *puVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 *puVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  size_t local_4d0;
  undefined1 local_4c4;
  undefined8 *local_4c0;
  void *local_4b8;
  undefined8 *local_4b0;
  undefined8 *local_4a8;
  undefined8 *local_498;
  undefined8 *local_490;
  ulong local_478;
  undefined8 *local_470;
  undefined8 *local_3e8;
  undefined8 *puStack_3e0;
  undefined8 *local_3d8;
  long lStack_3d0;
  undefined8 local_3c8;
  ulong local_3c0;
  undefined8 *puStack_3b8;
  ulong local_3b0;
  undefined8 *local_3a8;
  undefined8 *puStack_3a0;
  undefined8 *local_398;
  undefined8 *puStack_390;
  undefined8 *local_388;
  undefined8 *puStack_380;
  undefined8 *local_378;
  undefined8 *puStack_370;
  undefined8 *local_368;
  undefined8 uStack_360;
  undefined8 *local_358;
  size_t sStack_350;
  undefined8 *local_348;
  undefined8 *puStack_340;
  size_t local_338;
  undefined8 *puStack_330;
  undefined1 local_328;
  undefined8 *local_320;
  undefined8 *puStack_318;
  long *local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  long *plStack_2f8;
  undefined8 *local_2f0;
  long *local_2e8;
  undefined8 local_2e0;
  long *local_2d8;
  undefined8 local_2d0;
  long *local_2c8;
  long *local_2c0;
  undefined8 local_2b8;
  ulong *local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined1 local_298;
  undefined1 local_297;
  byte local_296;
  byte local_295;
  undefined8 *local_290;
  undefined8 *puStack_288;
  undefined8 *local_280;
  undefined8 *local_278;
  void *local_270;
  undefined8 *local_268;
  undefined2 local_260;
  undefined2 uStack_25e;
  undefined4 uStack_25c;
  undefined8 local_120;
  long lStack_118;
  long local_110;
  long *local_108;
  undefined8 uStack_100;
  undefined1 local_f8;
  undefined7 uStack_f7;
  long *local_f0;
  undefined8 *puStack_e8;
  long *local_e0;
  undefined8 uStack_d8;
  long *local_d0;
  undefined8 uStack_c8;
  long *local_c0;
  long *local_b8;
  undefined8 uStack_b0;
  ulong *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  size_t sStack_88;
  undefined8 *local_80;
  
  uVar6 = *(undefined4 *)(param_6 + 1);
  if (*param_6 == '\0') {
    uVar33 = 0;
    uVar31 = 1;
  }
  else if (*param_6 == '\x02') {
    uVar31 = 0;
    uVar33 = 0;
  }
  else {
    local_290 = *(undefined8 **)(param_6 + 5);
    uVar31 = 0;
    uVar33 = 1;
    puStack_288 = (undefined8 *)CONCAT44(puStack_288._4_4_,*(undefined4 *)(param_6 + 0xd));
  }
                    /* try { // try from 007d76a8 to 007d76e7 has its CatchHandler @ 007d81a4 */
  sVar18 = param_4;
  puVar17 = param_5;
  lVar15 = FUN_007de0d4(param_2);
  *(undefined1 *)(lVar15 + 0x91) = uVar31;
  *(undefined4 *)(lVar15 + 0x92) = uVar6;
  *(undefined1 *)(lVar15 + 0x96) = uVar33;
  *(undefined4 *)(lVar15 + 0x97) = uVar6;
  *(undefined8 **)(lVar15 + 0x9b) = local_290;
  *(undefined4 *)(lVar15 + 0xa3) = puStack_288._0_4_;
  if (param_7 != (void *)0x0) {
    if ((long)param_8 < 0) {
      uVar39 = 0;
LAB_007d76dc:
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(uVar39,param_8);
    }
    if (param_8 == 0) {
      __dest = &DAT_00000001;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar39 = 1;
      __dest = (undefined1 *)FUN_004b25a4(param_8,1);
      if (__dest == (undefined1 *)0x0) goto LAB_007d76dc;
      sVar18 = param_8;
      memcpy(__dest,param_7,param_8);
    }
                    /* try { // try from 007d772c to 007d7733 has its CatchHandler @ 007d7f8c */
    lVar15 = FUN_007de0d4(param_2);
    if ((*(long *)(lVar15 + 0x20) != -1) && (*(long *)(lVar15 + 0x20) != 0)) {
      sVar18 = 1;
      free(*(void **)(lVar15 + 0x28));
    }
    *(size_t *)(lVar15 + 0x20) = param_8;
    *(undefined1 **)(lVar15 + 0x28) = __dest;
    *(size_t *)(lVar15 + 0x30) = param_8;
  }
                    /* try { // try from 007d7760 to 007d778b has its CatchHandler @ 007d81a4 */
  lVar15 = FUN_007de0d4(param_2);
  *(undefined1 *)(lVar15 + 0xa7) = param_9;
  lVar15 = FUN_007de0d4(param_2);
  *(undefined1 *)(lVar15 + 0x90) = 0;
  if (*(long *)(param_4 + 0x20) == 0) {
    memcpy(&local_280,param_3,0x158);
    puStack_288 = (undefined8 *)&DAT_00000001;
    local_290 = (undefined8 *)0x1;
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    plVar19 = (long *)FUN_004b25a4(0x168,8);
    if (plVar19 == (long *)0x0) {
                    /* try { // try from 007d7f1c to 007d7f27 has its CatchHandler @ 007d8014 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x168);
    }
    memcpy(plVar19,&local_290,0x168);
    do {
      lVar15 = *plVar19;
      cVar11 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar13) {
        *plVar19 = lVar15 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    plVar34 = plVar19;
    if (lVar15 < 0) goto LAB_007d79d8;
    goto LAB_007d7ebc;
  }
  FUN_007899c4(&local_120,param_3 + 2);
  plVar19 = (long *)param_3[0x1b];
  do {
    lVar15 = *plVar19;
    cVar11 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar19,0x10);
    if (bVar13) {
      *plVar19 = lVar15 + 1;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  if (lVar15 < 0) {
LAB_007d79d8:
                    /* WARNING: Does not return */
    pcVar14 = (code *)SoftwareBreakpoint(1,0x7d79dc);
    (*pcVar14)();
  }
  puVar1 = (undefined8 *)*param_3;
  puVar3 = (undefined8 *)param_3[1];
  uStack_100 = param_3[0x1c];
  local_f8 = *(undefined1 *)(param_3 + 0x1d);
  plVar34 = (long *)param_3[0x1e];
  do {
    lVar15 = *plVar34;
    cVar11 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar34,0x10);
    if (bVar13) {
      *plVar34 = lVar15 + 1;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  local_108 = plVar19;
  if (lVar15 < 0) goto LAB_007d79d8;
  puVar2 = (undefined8 *)param_3[0x1f];
  plVar19 = (long *)param_3[0x20];
  uVar31 = *(undefined1 *)(param_3 + 0x2a);
  do {
    lVar15 = *plVar19;
    cVar11 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar19,0x10);
    if (bVar13) {
      *plVar19 = lVar15 + 1;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  local_f0 = plVar34;
  puStack_e8 = puVar2;
  if (lVar15 < 0) goto LAB_007d79d8;
  uVar39 = param_3[0x21];
  plVar4 = (long *)param_3[0x22];
  uVar33 = *(undefined1 *)((long)param_3 + 0x151);
  bVar7 = *(byte *)((long)param_3 + 0x152);
  local_4a8 = (undefined8 *)(ulong)bVar7;
  bVar8 = *(byte *)((long)param_3 + 0x153);
  puVar16 = (undefined8 *)(ulong)bVar8;
  do {
    lVar15 = *plVar4;
    cVar11 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar13) {
      *plVar4 = lVar15 + 1;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  local_e0 = plVar19;
  uStack_d8 = uVar39;
  if (lVar15 < 0) goto LAB_007d79d8;
  uVar25 = param_3[0x23];
  plVar5 = (long *)param_3[0x24];
  do {
    lVar15 = *plVar5;
    cVar11 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar13) {
      *plVar5 = lVar15 + 1;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  local_d0 = plVar4;
  uStack_c8 = uVar25;
  if (lVar15 < 0) goto LAB_007d79d8;
  uVar43 = param_3[0x29];
  uVar42 = param_3[0x28];
  plVar32 = (long *)param_3[0x25];
  do {
    lVar15 = *plVar32;
    cVar11 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar32,0x10);
    if (bVar13) {
      *plVar32 = lVar15 + 1;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  local_c0 = plVar5;
  if (lVar15 < 0) goto LAB_007d79d8;
  uVar21 = param_3[7];
  uVar26 = param_3[0x26];
  uVar40 = 0;
  sVar35 = uVar21 * 0x10;
  local_b8 = plVar32;
  uStack_b0 = uVar26;
  if ((uVar21 >> 0x3c != 0) || (0x7ffffffffffffff8 < sVar35)) {
LAB_007d79dc:
                    /* try { // try from 007d79dc to 007d79e7 has its CatchHandler @ 007d80b8 */
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar40,sVar35);
  }
  pvVar37 = (void *)param_3[6];
  if (sVar35 == 0) {
    local_478 = 0;
    local_470 = (undefined8 *)&DAT_00000008;
    puVar22 = puVar3;
    puStack_370 = puVar2;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar40 = 8;
    puVar16 = (undefined8 *)FUN_004b25a4(sVar35,8);
    puVar22 = extraout_x11;
    puStack_370 = extraout_x12;
    local_4a8 = extraout_x17;
    local_478 = uVar21;
    local_470 = puVar16;
    if (puVar16 == (undefined8 *)0x0) goto LAB_007d79dc;
  }
  if (uVar21 != 0) {
    puVar16 = (undefined8 *)memcpy(local_470,pvVar37,sVar35);
    sVar18 = sVar35;
    puVar22 = extraout_x11_00;
    puStack_370 = extraout_x12_00;
    local_4a8 = extraout_x17_00;
  }
  puVar41 = (undefined8 *)param_3[10];
  puVar36 = (undefined8 *)0x0;
  sVar35 = (long)puVar41 * 0x10;
  if (((ulong)puVar41 >> 0x3c != 0) || (0x7ffffffffffffff8 < sVar35)) {
LAB_007d79ec:
                    /* try { // try from 007d79ec to 007d79f7 has its CatchHandler @ 007d8090 */
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(puVar36,sVar35);
  }
  pvVar37 = (void *)param_3[9];
  if (sVar35 == 0) {
    local_498 = (undefined8 *)0x0;
    local_490 = (undefined8 *)&DAT_00000008;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar36 = (undefined8 *)&DAT_00000008;
    puVar16 = (undefined8 *)FUN_004b25a4(sVar35,8);
    puVar22 = extraout_x11_01;
    puStack_370 = extraout_x12_01;
    local_4a8 = extraout_x17_01;
    local_498 = puVar41;
    local_490 = puVar16;
    if (puVar16 == (undefined8 *)0x0) goto LAB_007d79ec;
  }
  if (puVar41 != (undefined8 *)0x0) {
    puVar16 = (undefined8 *)memcpy(local_490,pvVar37,sVar35);
    sVar18 = sVar35;
    puVar22 = extraout_x11_02;
    puStack_370 = extraout_x12_02;
    local_4a8 = extraout_x17_02;
  }
  puVar38 = (ulong *)param_3[0x27];
  do {
    uVar20 = *puVar38;
    puVar23 = (undefined8 *)(uVar20 + 1);
    bVar12 = 1;
    bVar13 = (bool)ExclusiveMonitorPass(puVar38,0x10);
    if (bVar13) {
      *puVar38 = (ulong)puVar23;
      bVar12 = ExclusiveMonitorsStatus();
    }
  } while (bVar12 != 0);
  if ((long)uVar20 < 0) goto LAB_007d79d8;
  lVar15 = param_3[0xb];
  local_a8 = puVar38;
  if (lVar15 != -3) {
    if (lVar15 == -1) {
      puVar16 = (undefined8 *)param_3[0xe];
      if (-1 < (long)puVar16) {
        local_4b8 = (void *)(ulong)*(ushort *)(param_3 + 0xf);
        uVar28 = *(undefined2 *)((long)param_3 + 0x7a);
        if (puVar16 == (undefined8 *)0x0) {
          uStack_360 = 0xffffffffffffffff;
          puVar17 = (undefined8 *)&DAT_00000001;
          local_4b0 = (undefined8 *)0xffffffffffffffff;
          local_4a8 = (undefined8 *)0x0;
        }
        else {
          pvVar37 = (void *)param_3[0xd];
          __rustc::__rust_no_alloc_shim_is_unstable_v2();
          uVar40 = 1;
          puVar17 = (undefined8 *)FUN_004b25a4(puVar16,1);
          if (puVar17 == (undefined8 *)0x0) goto LAB_007d7b04;
          memcpy(puVar17,pvVar37,(size_t)puVar16);
          uStack_360 = 0xffffffffffffffff;
          local_4b0 = (undefined8 *)0xffffffffffffffff;
          puVar23 = extraout_x9;
          puVar22 = extraout_x11_03;
          puVar36 = puVar17;
          local_4a8 = puVar16;
        }
LAB_007d7cd8:
        puVar29 = (undefined8 *)param_3[0x19];
        puVar30 = (undefined8 *)param_3[0x1a];
        local_290 = (undefined8 *)CONCAT62(CONCAT42((int)puVar23,uVar28),(short)local_4b8);
        ppuVar24 = &local_a0;
        ppuVar27 = &local_98;
        local_3e8 = puVar22;
LAB_007d7cf8:
        *ppuVar27 = puVar29;
        *ppuVar24 = puVar30;
        puStack_370 = local_290;
        local_328 = local_4c4;
        goto LAB_007d7d1c;
      }
    }
    else if (lVar15 == -2) {
      puVar16 = (undefined8 *)param_3[0xe];
      if (-1 < (long)puVar16) {
        puVar29 = (undefined8 *)param_3[0xf];
        puVar30 = (undefined8 *)param_3[0x10];
        if (puVar16 == (undefined8 *)0x0) {
          uStack_360 = 0xfffffffffffffffe;
          ppuVar24 = &local_3e8;
          ppuVar27 = &local_290;
          local_4b0 = (undefined8 *)&DAT_fffffffffffffffe;
          local_4a8 = (undefined8 *)0x0;
          puVar17 = (undefined8 *)&DAT_00000001;
        }
        else {
          pvVar37 = (void *)param_3[0xd];
          __rustc::__rust_no_alloc_shim_is_unstable_v2();
          uVar40 = 1;
          puVar17 = (undefined8 *)FUN_004b25a4(puVar16,1);
          if (puVar17 == (undefined8 *)0x0) goto LAB_007d7b04;
          memcpy(puVar17,pvVar37,(size_t)puVar16);
          uStack_360 = 0xfffffffffffffffe;
          ppuVar24 = &local_3e8;
          ppuVar27 = &local_290;
          local_4b0 = (undefined8 *)&DAT_fffffffffffffffe;
          puVar36 = puVar17;
          local_4a8 = puVar16;
        }
        goto LAB_007d7cf8;
      }
    }
    else {
      puVar17 = (undefined8 *)param_3[0xd];
      puVar16 = puVar17;
      if (-1 < (long)puVar17) {
        uVar9 = *(undefined1 *)((long)param_3 + 0x8c);
        uVar28 = *(undefined2 *)(param_3 + 0x11);
        uVar10 = *(undefined2 *)((long)param_3 + 0x8a);
        if (puVar17 == (undefined8 *)0x0) {
          local_4a8 = (undefined8 *)&DAT_00000001;
        }
        else {
          pvVar37 = (void *)param_3[0xc];
          __rustc::__rust_no_alloc_shim_is_unstable_v2();
          uVar40 = 1;
          local_4a8 = (undefined8 *)FUN_004b25a4(puVar17,1);
          if (local_4a8 == (undefined8 *)0x0) goto LAB_007d7b04;
          memcpy(local_4a8,pvVar37,(size_t)puVar17);
        }
        puVar22 = (undefined8 *)param_3[0x10];
        uVar40 = 0;
        uVar20 = (long)puVar22 * 8;
        if (((ulong)puVar22 >> 0x3d != 0) || (0x7ffffffffffffffe < uVar20)) {
LAB_007d7bf8:
                    /* try { // try from 007d7bf8 to 007d7c03 has its CatchHandler @ 007d802c */
                    /* WARNING: Subroutine does not return */
          alloc::raw_vec::handle_error(uVar40,uVar20);
        }
        pvVar37 = (void *)param_3[0xf];
        if (uVar20 == 0) {
          local_4b8 = (void *)0x2;
          puVar16 = (undefined8 *)0x0;
        }
        else {
          __rustc::__rust_no_alloc_shim_is_unstable_v2();
          uVar40 = 2;
          local_4b8 = (void *)FUN_004b25a4(uVar20,2);
          puVar16 = puVar22;
          if (local_4b8 == (void *)0x0) goto LAB_007d7bf8;
        }
        if (puVar22 != (undefined8 *)0x0) {
          memcpy(local_4b8,pvVar37,uVar20);
        }
        local_270 = local_4b8;
        uStack_25c = CONCAT31(uStack_25c._1_3_,uVar9);
        puStack_288 = local_4a8;
        local_4c4 = *(undefined1 *)(param_3 + 0x18);
        local_290 = puVar17;
        local_280 = puVar17;
        local_278 = puVar16;
        local_268 = puVar22;
        local_260 = uVar28;
        uStack_25e = uVar10;
        if (param_3[0x15] == -1) {
          local_4d0 = param_3[0x16];
          puVar36 = (undefined8 *)param_3[0x17];
          local_4c0 = (undefined8 *)0xffffffffffffffff;
        }
        else {
                    /* try { // try from 007d7c78 to 007d7c7f has its CatchHandler @ 007d7f4c */
          <alloc::string::String_as_core::clone::Clone>::clone(&local_3e8);
          local_4c0 = local_3e8;
          local_4d0 = (size_t)puStack_3e0;
          puVar36 = local_3d8;
        }
                    /* try { // try from 007d7ca4 to 007d7caf has its CatchHandler @ 007d7f54 */
        FUN_00789fc4(&local_3e8,param_3 + 0x12);
        local_80 = local_3d8;
        sStack_88 = (size_t)puStack_3e0;
        local_90 = local_3e8;
        uVar28 = (undefined2)((ulong)local_4b8 >> 0x10);
        puVar23 = (undefined8 *)((ulong)local_4b8 >> 0x20);
        uStack_360 = CONCAT44(uStack_25c,CONCAT22(uStack_25e,local_260));
        local_4b0 = puVar17;
        goto LAB_007d7cd8;
      }
    }
    uVar40 = 0;
LAB_007d7b04:
                    /* try { // try from 007d7b04 to 007d7b17 has its CatchHandler @ 007d8050 */
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar40,puVar16);
  }
  local_4b0 = (undefined8 *)0xfffffffffffffffd;
  uStack_360 = 0xfffffffffffffffd;
  local_4c0 = puVar16;
  local_4d0 = sVar18;
  local_a0 = puVar23;
  local_98 = (undefined8 *)(ulong)bVar12;
  local_3e8 = puVar22;
  puVar16 = puVar41;
  local_328 = (char)pvVar37;
LAB_007d7d1c:
  local_300 = CONCAT71(uStack_f7,local_f8);
  lStack_3d0 = lStack_118;
  local_3d8 = (undefined8 *)local_120;
  uStack_308 = uStack_100;
  local_310 = local_108;
  local_348 = local_80;
  sStack_350 = sStack_88;
  local_358 = local_90;
  local_3c8 = 0;
  puStack_3e0 = puVar3;
  local_3c0 = local_478;
  puStack_3b8 = local_470;
  local_3b0 = uVar21;
  local_3a8 = local_498;
  puStack_3a0 = local_490;
  local_398 = puVar41;
  puStack_390 = local_4b0;
  local_388 = local_4a8;
  puStack_380 = puVar17;
  local_378 = puVar16;
  local_368 = local_3e8;
  puStack_340 = local_4c0;
  local_338 = local_4d0;
  puStack_330 = puVar36;
  local_320 = local_98;
  puStack_318 = local_a0;
  plStack_2f8 = plVar34;
  local_2f0 = puVar2;
  local_2e8 = plVar19;
  local_2e0 = uVar39;
  local_2d8 = plVar4;
  local_2d0 = uVar25;
  local_2c8 = plVar5;
  local_2c0 = plVar32;
  local_2b8 = uVar26;
  local_2b0 = puVar38;
  local_2a8 = uVar42;
  uStack_2a0 = uVar43;
  local_298 = uVar31;
  local_297 = uVar33;
  local_296 = bVar7;
  local_295 = bVar8;
  if (local_110 != 0) {
    puVar17 = (undefined8 *)(lStack_118 + 8);
    lVar15 = local_110;
    do {
      local_3e8 = puVar1;
      if (puVar17[-1] != 0) {
        free((void *)*puVar17);
      }
      lVar15 = lVar15 + -1;
      puVar17 = puVar17 + 3;
      puVar1 = local_3e8;
    } while (lVar15 != 0);
  }
  local_3e8 = puVar1;
  memcpy(&local_280,param_3,0x158);
  puStack_288 = (undefined8 *)0x1;
  local_290 = (undefined8 *)0x1;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  plVar19 = (long *)FUN_004b25a4(0x168,8);
  if (plVar19 == (long *)0x0) {
                    /* try { // try from 007d7f2c to 007d7f37 has its CatchHandler @ 007d7ff4 */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x168);
  }
  memcpy(plVar19,&local_290,0x168);
  local_108 = plVar19;
  memcpy(&local_280,&local_3e8,0x158);
  puStack_288 = (undefined8 *)0x1;
  local_290 = (undefined8 *)0x1;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  plVar34 = (long *)FUN_004b25a4(0x168,8);
  if (plVar34 == (long *)0x0) {
                    /* try { // try from 007d7f3c to 007d7f47 has its CatchHandler @ 007d7fac */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x168);
  }
  memcpy(plVar34,&local_290,0x168);
LAB_007d7ebc:
  uVar42 = param_2[1];
  uVar39 = *param_2;
  uVar25 = param_2[2];
  *(long **)(param_1 + 0x58) = plVar34;
  *(size_t *)(param_1 + 0x60) = param_4;
  *(undefined8 *)(param_1 + 0x40) = uVar42;
  *(undefined8 *)(param_1 + 0x38) = uVar39;
  uVar40 = param_5[1];
  uVar26 = *param_5;
  uVar43 = param_5[3];
  uVar42 = param_5[2];
  uVar39 = param_5[4];
  *(undefined8 *)(param_1 + 0x48) = uVar25;
  *(long **)(param_1 + 0x50) = plVar19;
  *(undefined1 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x30) = uVar39;
  *(undefined8 *)(param_1 + 0x18) = uVar40;
  *(undefined8 *)(param_1 + 0x10) = uVar26;
  *(undefined8 *)(param_1 + 0x28) = uVar43;
  *(undefined8 *)(param_1 + 0x20) = uVar42;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x69) = param_9;
  *(undefined1 *)(param_1 + 0x6a) = param_10;
  return;
}


// ===== 007d8214  FUN_007d8214 =====

void FUN_007d8214(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined5 uStack_3d;
  
  uVar8 = param_2[0x11];
  uVar6 = param_2[0x10];
  uVar11 = param_2[0x13];
  uVar10 = param_2[0x12];
  lVar3 = param_2[0x12];
  uVar13 = *(undefined8 *)(lVar3 + 0x48);
  uVar12 = *(undefined8 *)(lVar3 + 0x40);
  uVar15 = *(undefined8 *)(lVar3 + 0x58);
  uVar14 = *(undefined8 *)(lVar3 + 0x50);
  uVar4 = param_2[0x14];
  uVar5 = param_3[2];
  uVar9 = param_3[1];
  uVar7 = *param_3;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)FUN_004b25a4(0x28,8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* try { // try from 007d835c to 007d8367 has its CatchHandler @ 007d8394 */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x28);
  }
  puVar1[4] = uVar5;
  puVar1[1] = 1;
  *puVar1 = 1;
  puVar1[3] = uVar9;
  puVar1[2] = uVar7;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar2 = (undefined8 *)FUN_004b25a4(0x58,8);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[9] = uVar15;
    puVar2[8] = uVar14;
    puVar2[5] = puVar1;
    puVar2[4] = 0;
    puVar2[7] = uVar13;
    puVar2[6] = uVar12;
    puVar2[10] = CONCAT53(uStack_3d,0x10001);
    param_1[0x10] = puVar2;
    param_1[0x11] = &PTR_FUN_00adfa18;
    puVar2[1] = 1;
    *puVar2 = 1;
    puVar2[3] = 8;
    puVar2[2] = 0;
    uVar9 = param_2[8];
    uVar7 = param_2[0xb];
    uVar5 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar9;
    param_1[0xb] = uVar7;
    param_1[10] = uVar5;
    uVar9 = param_2[0xc];
    uVar7 = param_2[0xf];
    uVar5 = param_2[0xe];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar9;
    param_1[0xf] = uVar7;
    param_1[0xe] = uVar5;
    uVar9 = *param_2;
    uVar7 = param_2[3];
    uVar5 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar9;
    param_1[3] = uVar7;
    param_1[2] = uVar5;
    uVar9 = param_2[4];
    uVar7 = param_2[7];
    uVar5 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar9;
    param_1[7] = uVar7;
    param_1[6] = uVar5;
    param_1[0x13] = uVar8;
    param_1[0x12] = uVar6;
    param_1[0x15] = uVar11;
    param_1[0x14] = uVar10;
    param_1[0x16] = uVar4;
    return;
  }
                    /* try { // try from 007d836c to 007d837b has its CatchHandler @ 007d8380 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x58);
}


// ===== 007d83c4  FUN_007d83c4 =====

void FUN_007d83c4(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long local_58;
  
  uVar4 = *param_1;
  lVar7 = uVar4 - (uVar4 != 0);
  if (uVar4 != (uVar4 != 0)) {
    if (lVar7 != 1) {
      if (lVar7 == 2) {
                    /* try { // try from 007d8408 to 007d840f has its CatchHandler @ 007d8580 */
        FUN_007d8900(param_1 + 8);
        uVar4 = param_1[6];
        if (uVar4 != 0) {
          uVar2 = param_1[4];
          uVar3 = param_1[5];
          uVar5 = param_1[3];
          uVar1 = 0;
          if (uVar5 <= uVar3) {
            uVar1 = uVar5;
          }
          lVar6 = uVar3 - uVar1;
          uVar9 = uVar5 - lVar6;
          lVar7 = 0;
          if (uVar9 <= uVar4) {
            lVar7 = uVar4 - uVar9;
          }
          if (uVar4 <= uVar9) {
            uVar5 = lVar6 + uVar4;
          }
          lVar6 = uVar5 - lVar6;
          if (lVar6 != 0) {
            puVar8 = (undefined8 *)(uVar3 * 0x18 + uVar1 * -0x18 + uVar2 + 8);
            do {
              if (puVar8[-1] != 0) {
                free((void *)*puVar8);
              }
              lVar6 = lVar6 + -1;
              puVar8 = puVar8 + 3;
            } while (lVar6 != 0);
          }
          if (uVar9 < uVar4) {
            puVar8 = (undefined8 *)(uVar2 + 8);
            do {
              if (puVar8[-1] != 0) {
                free((void *)*puVar8);
              }
              lVar7 = lVar7 + -1;
              puVar8 = puVar8 + 3;
            } while (lVar7 != 0);
          }
        }
        if (param_1[3] != 0) {
          free((void *)param_1[4]);
        }
        uVar4 = param_1[0x91];
      }
      else {
                    /* try { // try from 007d84a8 to 007d84af has its CatchHandler @ 007d8570 */
        FUN_007d8900(param_1 + 1);
        uVar4 = param_1[0x8a];
      }
      if ((1 < (uVar4 & 3) - 2) && ((uVar4 & 3) != 0)) {
        local_58 = uVar4 - 1;
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_58);
      }
    }
    return;
  }
                    /* try { // try from 007d8480 to 007d8487 has its CatchHandler @ 007d859c */
  FUN_007d8900(param_1 + 0x84);
  FUN_007dac1c(param_1);
  return;
}


// ===== 007d85b4  FUN_007d85b4 =====

void FUN_007d85b4(void *param_1,undefined8 *param_2)

{
  if ((code *)*param_2 != (code *)0x0) {
                    /* try { // try from 007d85d4 to 007d85db has its CatchHandler @ 007d860c */
    (*(code *)*param_2)(param_1);
  }
  if (param_2[1] != 0) {
    free(param_1);
    return;
  }
  return;
}


// ===== 007d862c  FUN_007d862c =====

void FUN_007d862c(long *param_1)

{
  if ((*param_1 != -1) && (*param_1 != 0)) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 007d864c  FUN_007d864c =====

void FUN_007d864c(long param_1)

{
  if (*(char *)(param_1 + 0xa9) == '\x02') {
    return;
  }
                    /* try { // try from 007d8670 to 007d867b has its CatchHandler @ 007d868c */
  <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop(param_1 + 0x10);
  <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop(param_1 + 0x58);
  return;
}


// ===== 007d86a4  FUN_007d86a4 =====

void FUN_007d86a4(long *param_1)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar1 = *param_1;
  if (lVar1 != -1) {
    __ptr = (void *)param_1[1];
    lVar2 = param_1[2];
    if (lVar2 != 0) {
      puVar3 = (undefined8 *)((long)__ptr + 8);
      do {
        if ((puVar3[-1] != -1) && (puVar3[-1] != 0)) {
          free((void *)*puVar3);
        }
        lVar2 = lVar2 + -1;
        puVar3 = puVar3 + 3;
      } while (lVar2 != 0);
    }
    if (lVar1 != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 007d8730  FUN_007d8730 =====

void FUN_007d8730(long *param_1)

{
  void *__ptr;
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = *param_1;
  if ((lVar1 == -1) || (lVar1 == -2)) {
    if (param_1[1] != 0) {
      free((void *)param_1[2]);
      return;
    }
  }
  else if (lVar1 != -3) {
    if (lVar1 != 0) {
      free((void *)param_1[1]);
    }
    if (param_1[3] != 0) {
      free((void *)param_1[4]);
    }
    if ((param_1[10] != -1) && (param_1[10] != 0)) {
      free((void *)param_1[0xb]);
    }
    __ptr = (void *)param_1[8];
    lVar1 = param_1[9];
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)((long)__ptr + 8);
      do {
        if ((puVar2[-1] != -1) && (puVar2[-1] != 0)) {
          free((void *)*puVar2);
        }
        lVar1 = lVar1 + -1;
        puVar2 = puVar2 + 4;
      } while (lVar1 != 0);
    }
    if (param_1[7] != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 007d8834  FUN_007d8834 =====

void FUN_007d8834(char *param_1)

{
  if (((*param_1 == '\0') && (*(long *)(param_1 + 8) != -1)) && (*(long *)(param_1 + 8) != 0)) {
    free(*(void **)(param_1 + 0x10));
    return;
  }
  return;
}


// ===== 007d885c  FUN_007d885c =====

void FUN_007d885c(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  FUN_007d8730();
  plVar3 = *(long **)(param_1 + 0x90);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 007d8890 to 007d8893 has its CatchHandler @ 007d88cc */
    <alloc::sync::[n]::alloc::sync::Arc<rustls::crypto::CryptoProvider>>::drop_slow();
  }
  plVar3 = *(long **)(param_1 + 0x98);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+rustls::server::server_conn::StoresServerSessions>>
    ::drop_slow((undefined8 *)(param_1 + 0x98));
    return;
  }
  return;
}


// ===== 007d8900  FUN_007d8900 =====

void FUN_007d8900(long *param_1)

{
  if (*param_1 == 2) {
                    /* try { // try from 007d891c to 007d8923 has its CatchHandler @ 007d8954 */
    FUN_007dfadc(param_1 + 1);
    if ((int)param_1[4] != -1) {
      close((int)param_1[4]);
    }
    FUN_007db044(param_1 + 1);
    return;
  }
  FUN_007d8df4(param_1);
  return;
}


// ===== 007d8980  FUN_007d8980 =====

void FUN_007d8980(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 007d89ac to 007d89b3 has its CatchHandler @ 007d8a44 */
    <alloc::sync::[n]::alloc::sync::Arc<hyper_util::client::legacy::connect::http::Config>>::
    drop_slow(param_1);
  }
  plVar3 = (long *)param_1[1];
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 007d89d4 to 007d89d7 has its CatchHandler @ 007d8a3c */
    <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
    drop_slow();
  }
  plVar3 = (long *)param_1[3];
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 007d89f8 to 007d89fb has its CatchHandler @ 007d8a34 */
    <alloc::sync::[n]::alloc::sync::Arc<rustls::client::client_conn::ClientConfig>>::drop_slow();
  }
  plVar3 = (long *)param_1[4];
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_hyper_rustls[8b73b3c5adfefd00]::connector::ResolveServerName+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
    ::drop_slow(param_1 + 4);
    return;
  }
  return;
}


// ===== 007d8ac8  FUN_007d8ac8 =====

void FUN_007d8ac8(long *param_1)

{
  void *__ptr;
  long lVar1;
  undefined8 *puVar2;
  
  __ptr = (void *)param_1[1];
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)((long)__ptr + 8);
    do {
      if (puVar2[-1] != 0) {
        free((void *)*puVar2);
      }
      lVar1 = lVar1 + -1;
      puVar2 = puVar2 + 3;
    } while (lVar1 != 0);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 007d8b48  FUN_007d8b48 =====

void FUN_007d8b48(long *param_1)

{
  void *__ptr;
  long lVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  __ptr = (void *)param_1[1];
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    lVar6 = 0;
    do {
      lVar5 = lVar6 * 0x10;
      lVar6 = lVar6 + 1;
      plVar4 = *(long **)((long)__ptr + lVar5);
      do {
        lVar5 = *plVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        DataMemoryBarrier(2,1);
                    /* try { // try from 007d8b9c to 007d8b9f has its CatchHandler @ 007d8be0 */
        <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
        drop_slow();
      }
    } while (lVar6 != lVar1);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 007d8c44  FUN_007d8c44 =====

void FUN_007d8c44(long *param_1)

{
  void *__ptr;
  long lVar1;
  undefined8 *puVar2;
  
  __ptr = (void *)param_1[1];
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)((long)__ptr + 8);
    do {
      if ((puVar2[-1] != -1) && (puVar2[-1] != 0)) {
        free((void *)*puVar2);
      }
      lVar1 = lVar1 + -1;
      puVar2 = puVar2 + 3;
    } while (lVar1 != 0);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 007d8ccc  FUN_007d8ccc =====

void FUN_007d8ccc(long *param_1)

{
  void *__ptr;
  void *pvVar1;
  long lVar2;
  
  __ptr = (void *)param_1[1];
  lVar2 = param_1[2] + 1;
  pvVar1 = __ptr;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 007d8cfc to 007d8cff has its CatchHandler @ 007d8d48 */
    FUN_007868b4(pvVar1);
    pvVar1 = (void *)((long)pvVar1 + 0x98);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 007d8d90  FUN_007d8d90 =====

void FUN_007d8d90(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<rustls::webpki::anchors::RootCertStore>>::drop_slow();
    return;
  }
  return;
}


// ===== 007d8db4  FUN_007d8db4 =====

void FUN_007d8db4(long param_1)

{
                    /* try { // try from 007d8dc4 to 007d8dcb has its CatchHandler @ 007d8ddc */
  FUN_007d8900(param_1 + 0x420);
  FUN_007dac1c(param_1);
  return;
}


// ===== 007d8df4  FUN_007d8df4 =====

void FUN_007d8df4(long param_1)

{
                    /* try { // try from 007d8e04 to 007d8e07 has its CatchHandler @ 007d8e38 */
  FUN_007dfadc();
  if (*(int *)(param_1 + 0x18) != -1) {
    close(*(int *)(param_1 + 0x18));
  }
                    /* try { // try from 007d8e18 to 007d8e1f has its CatchHandler @ 007d8e30 */
  FUN_007db044(param_1);
  FUN_007dac1c(param_1 + 0x20);
  return;
}


// ===== 007d8e70  FUN_007d8e70 =====

void FUN_007d8e70(long *param_1)

{
  int iVar1;
  long lVar2;
  
  if (*param_1 != 0) {
                    /* try { // try from 007d8e84 to 007d8e8b has its CatchHandler @ 007d8eb8 */
    <hyper_util::client::legacy::connect::dns::GaiFuture_as_core::ops::drop::Drop>::drop();
    lVar2 = *param_1;
    iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::drop_join_handle_fast
                      (lVar2);
    if (iVar1 != 0) {
      <tokio::runtime::task::raw::tokio::runtime::task::raw::RawTask>::drop_join_handle_slow(lVar2);
      return;
    }
  }
  return;
}


// ===== 007d8ed0  FUN_007d8ed0 =====

void FUN_007d8ed0(long param_1)

{
                    /* try { // try from 007d8ee0 to 007d8ee7 has its CatchHandler @ 007d8ef8 */
  FUN_007d93c4(param_1 + 0x78);
  FUN_007daa14(param_1);
  return;
}


// ===== 007d8f10  FUN_007d8f10 =====

void FUN_007d8f10(long param_1)

{
                    /* try { // try from 007d8f20 to 007d8f27 has its CatchHandler @ 007d8f38 */
  FUN_007d97c0(param_1 + 0x78);
  FUN_007daa14(param_1);
  return;
}


// ===== 007d8f50  thunk_FUN_007d9bbc =====

void thunk_FUN_007d9bbc(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  FUN_007d9c8c(param_1 + 0x38);
  plVar3 = *(long **)(param_1 + 0x60);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<alloc::vec::Vec<reqwest::proxy::Proxy>>>::drop_slow();
  }
  if (*(char *)(param_1 + 0x30) == '\x02') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007d9c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x20))
            (param_1 + 0x28,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  return;
}


// ===== 007d8f54  FUN_007d8f54 =====

void FUN_007d8f54(undefined8 *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  code *pcVar2;
  
  __ptr = (void *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  pcVar2 = (code *)*puVar1;
  if (pcVar2 != (code *)0x0) {
                    /* try { // try from 007d8f6c to 007d8f73 has its CatchHandler @ 007d8f9c */
    (*pcVar2)(__ptr);
  }
  if (puVar1[1] != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 007d8fc0  FUN_007d8fc0 =====

void FUN_007d8fc0(undefined8 *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  code *pcVar2;
  
  __ptr = (void *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  pcVar2 = (code *)*puVar1;
  if (pcVar2 != (code *)0x0) {
                    /* try { // try from 007d8fd8 to 007d8fdf has its CatchHandler @ 007d9008 */
    (*pcVar2)(__ptr);
  }
  if (puVar1[1] != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 007d902c  FUN_007d902c =====

void FUN_007d902c(void *param_1,undefined8 *param_2)

{
  if ((code *)*param_2 != (code *)0x0) {
                    /* try { // try from 007d904c to 007d9053 has its CatchHandler @ 007d9084 */
    (*(code *)*param_2)(param_1);
  }
  if (param_2[1] != 0) {
    free(param_1);
    return;
  }
  return;
}


// ===== 007d90a4  thunk_FUN_007b3770 =====

void thunk_FUN_007b3770(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long alStack_48 [2];
  long lStack_38;
  
  lVar3 = *param_1;
  if (lVar3 == 0) {
    lStack_50 = 0;
  }
  else {
    lStack_78 = param_1[1];
    lStack_50 = param_1[2];
    uStack_88 = 0;
    uStack_68 = 0;
    lStack_80 = lVar3;
    lStack_60 = lVar3;
    lStack_58 = lStack_78;
  }
  uStack_90 = (ulong)(lVar3 != 0);
  uStack_70 = uStack_90;
  FUN_007b3548(alStack_48,&uStack_90);
  lVar3 = alStack_48[0];
  lVar1 = lStack_38;
  while (lVar3 != 0) {
    lVar2 = lVar3 + lVar1 * 0x18;
    alStack_48[0] = lVar3;
    lStack_38 = lVar1;
    if (*(long *)(lVar2 + 8) != 0) {
      free(*(void **)(lVar2 + 0x10));
    }
    lVar3 = lVar3 + lVar1 * 0x38;
    if (*(long *)(lVar3 + 0x120) != 0) {
      free(*(void **)(lVar3 + 0x128));
    }
    FUN_007b3548(alStack_48,&uStack_90);
    lVar3 = alStack_48[0];
    lVar1 = lStack_38;
  }
  return;
}


// ===== 007d90a8  FUN_007d90a8 =====

void FUN_007d90a8(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 007d90d4 to 007d90db has its CatchHandler @ 007d9114 */
    <alloc::sync::[n]::alloc::sync::Arc<hyper_util::client::legacy::connect::http::Config>>::
    drop_slow(param_1);
  }
  plVar3 = (long *)param_1[1];
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
    drop_slow(param_1 + 1);
    return;
  }
  return;
}


// ===== 007d9148  FUN_007d9148 =====

void FUN_007d9148(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x2ca0);
  if (cVar1 == '\0') {
    FUN_007d93c4(param_1 + 0x10);
    return;
  }
  if (cVar1 != '\x03') {
    if (cVar1 == '\x04') {
      FUN_007d93c4(param_1 + 0x2ca8);
      return;
    }
    return;
  }
                    /* try { // try from 007d918c to 007d9197 has its CatchHandler @ 007d91c4 */
  FUN_007d93c4(param_1 + 0x2d20);
  FUN_007daa14(param_1 + 0x2ca8);
  return;
}


// ===== 007d91e0  FUN_007d91e0 =====

void FUN_007d91e0(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x228);
  if (cVar1 == '\0') {
    FUN_007d97c0(param_1 + 0x10);
    return;
  }
  if (cVar1 != '\x03') {
    if (cVar1 == '\x04') {
      FUN_007d97c0(param_1 + 0x230);
      return;
    }
    return;
  }
                    /* try { // try from 007d9214 to 007d921f has its CatchHandler @ 007d924c */
  FUN_007d97c0(param_1 + 0x2a8);
  FUN_007daa14(param_1 + 0x230);
  return;
}


// ===== 007d9264  FUN_007d9264 =====

void FUN_007d9264(long param_1)

{
  if (*(byte *)(param_1 + 0x984) - 3 < 2) {
    if (*(long *)(param_1 + 0x960) != 0) {
      free(*(void **)(param_1 + 0x968));
    }
    *(undefined2 *)(param_1 + 0x986) = 0;
    if (*(long *)(param_1 + 0x8f8) != 0) {
      free(*(void **)(param_1 + 0x900));
    }
                    /* try { // try from 007d92b0 to 007d92b7 has its CatchHandler @ 007d93b4 */
    FUN_007d8900(param_1 + 0x4b0);
    *(undefined1 *)(param_1 + 0x985) = 0;
    return;
  }
  if (*(byte *)(param_1 + 0x984) == 0) {
                    /* try { // try from 007d92cc to 007d92d3 has its CatchHandler @ 007d934c */
    FUN_007d8900(param_1);
    if (*(long *)(param_1 + 0x448) != 0) {
      free(*(void **)(param_1 + 0x450));
    }
    if (*(char *)(param_1 + 0x480) != '\x02') {
                    /* try { // try from 007d9304 to 007d930b has its CatchHandler @ 007d9344 */
      (**(code **)(*(long *)(param_1 + 0x460) + 0x20))
                (param_1 + 0x478,*(undefined8 *)(param_1 + 0x468),*(undefined8 *)(param_1 + 0x470));
    }
    if (*(char *)(param_1 + 0x4a8) != '\x02') {
                    /* WARNING: Could not recover jumptable at 0x007d9340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(param_1 + 0x488) + 0x20))
                (param_1 + 0x4a0,*(undefined8 *)(param_1 + 0x490),*(undefined8 *)(param_1 + 0x498));
      return;
    }
  }
  return;
}


// ===== 007d93c4  FUN_007d93c4 =====

void FUN_007d93c4(long param_1)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  void *__ptr;
  
  bVar1 = *(byte *)(param_1 + 0x2b2);
  if (bVar1 < 4) {
    if (bVar1 == 0) {
                    /* try { // try from 007d95a0 to 007d95a7 has its CatchHandler @ 007d963c */
      FUN_007d9bbc(param_1 + 0x50);
                    /* try { // try from 007d95a8 to 007d95af has its CatchHandler @ 007d9634 */
      FUN_007da3f0(param_1 + 0xc0);
      FUN_007d9b04(param_1);
      return;
    }
    if (bVar1 != 3) {
      return;
    }
    puVar7 = *(undefined8 **)(param_1 + 0x2d0);
    __ptr = *(void **)(param_1 + 0x2c8);
    pcVar4 = (code *)*puVar7;
    if (pcVar4 != (code *)0x0) {
                    /* try { // try from 007d944c to 007d9453 has its CatchHandler @ 007d95f8 */
      (*pcVar4)(__ptr);
    }
    if (puVar7[1] != 0) {
      free(__ptr);
    }
    bVar1 = *(byte *)(param_1 + 0x2b5);
    *(undefined1 *)(param_1 + 699) = 0;
  }
  else {
    if (bVar1 == 4) {
                    /* try { // try from 007d9478 to 007d947f has its CatchHandler @ 007d9688 */
      FUN_007d9264(param_1 + 0x2c8);
      bVar1 = *(byte *)(param_1 + 0x2b4);
      *(undefined1 *)(param_1 + 0x2b3) = 0;
    }
    else {
      if (bVar1 != 5) {
        if (bVar1 != 6) {
          return;
        }
                    /* try { // try from 007d9400 to 007d9407 has its CatchHandler @ 007d96fc */
        FUN_007d97c0(param_1 + 0x2c8);
        if (*(char *)(param_1 + 0x250) != '\x02') {
                    /* try { // try from 007d9424 to 007d942b has its CatchHandler @ 007d95f0 */
          (**(code **)(*(long *)(param_1 + 0x230) + 0x20))
                    (param_1 + 0x248,*(undefined8 *)(param_1 + 0x238),
                     *(undefined8 *)(param_1 + 0x240));
        }
        goto LAB_007d9564;
      }
                    /* try { // try from 007d9490 to 007d9497 has its CatchHandler @ 007d9658 */
      FUN_007d83c4(param_1 + 0x2d0);
      plVar5 = *(long **)(param_1 + 0x2c8);
      do {
        lVar6 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 + -1 == 0) {
        DataMemoryBarrier(2,1);
                    /* try { // try from 007d94b4 to 007d94bb has its CatchHandler @ 007d95e4 */
        <alloc::sync::[n]::alloc::sync::Arc<rustls::client::client_conn::ClientConfig>>::drop_slow
                  (param_1 + 0x2c8);
      }
      *(undefined1 *)(param_1 + 0x2ba) = 0;
      bVar1 = *(byte *)(param_1 + 0x2b4);
      *(undefined1 *)(param_1 + 0x2b3) = 0;
    }
    if (((((bVar1 & 1) != 0) && (*(char *)(param_1 + 0x2c70) == '\0')) &&
        (*(long *)(param_1 + 0x2c78) != -1)) && (*(long *)(param_1 + 0x2c78) != 0)) {
      free(*(void **)(param_1 + 0x2c80));
    }
    *(undefined1 *)(param_1 + 0x2b4) = 0;
    bVar1 = *(byte *)(param_1 + 0x2b5);
    *(undefined1 *)(param_1 + 699) = 0;
  }
  if ((bVar1 & 1) != 0) {
    plVar5 = *(long **)(param_1 + 0x2a8);
    do {
      lVar6 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 007d9504 to 007d950b has its CatchHandler @ 007d962c */
      <alloc::sync::[n]::alloc::sync::Arc<rustls::client::client_conn::ClientConfig>>::drop_slow
                (param_1 + 0x2a8);
    }
  }
  *(undefined1 *)(param_1 + 0x2b5) = 0;
                    /* try { // try from 007d9510 to 007d9517 has its CatchHandler @ 007d9730 */
  FUN_007d8980(param_1 + 0x270);
  if (((*(byte *)(param_1 + 0x2b6) & 1) != 0) && (*(long *)(param_1 + 600) != 0)) {
    free(*(void **)(param_1 + 0x260));
  }
  *(undefined1 *)(param_1 + 0x2b6) = 0;
  if (((*(byte *)(param_1 + 0x2b7) & 1) != 0) && (*(char *)(param_1 + 0x250) != '\x02')) {
                    /* try { // try from 007d955c to 007d9563 has its CatchHandler @ 007d9624 */
    (**(code **)(*(long *)(param_1 + 0x230) + 0x20))
              (param_1 + 0x248,*(undefined8 *)(param_1 + 0x238),*(undefined8 *)(param_1 + 0x240));
  }
LAB_007d9564:
  *(undefined1 *)(param_1 + 0x2b7) = 0;
  *(undefined1 *)(param_1 + 700) = 0;
  *(undefined1 *)(param_1 + 0x2b8) = 0;
  *(undefined4 *)(param_1 + 0x2bd) = 0;
                    /* try { // try from 007d9574 to 007d957b has its CatchHandler @ 007d979c */
  FUN_007da3f0(param_1 + 0x188);
  if ((*(byte *)(param_1 + 0x2b9) & 1) != 0) {
                    /* try { // try from 007d9584 to 007d958b has its CatchHandler @ 007d9728 */
    FUN_007d9bbc(param_1 + 0x118);
  }
  *(undefined1 *)(param_1 + 0x2b9) = 0;
  return;
}


// ===== 007d97c0  FUN_007d97c0 =====

void FUN_007d97c0(long param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  void *__ptr;
  
  if (*(char *)(param_1 + 0x211) == '\0') {
                    /* try { // try from 007d98f0 to 007d98f7 has its CatchHandler @ 007d9a8c */
    FUN_007d9bbc(param_1);
    FUN_007da3f0(param_1 + 0x70);
    return;
  }
  if (*(char *)(param_1 + 0x211) == '\x03') {
    puVar6 = *(undefined8 **)(param_1 + 0x208);
    __ptr = *(void **)(param_1 + 0x200);
    pcVar3 = (code *)*puVar6;
    if (pcVar3 != (code *)0x0) {
                    /* try { // try from 007d97f4 to 007d97fb has its CatchHandler @ 007d99c0 */
      (*pcVar3)(__ptr);
    }
    if (puVar6[1] != 0) {
      free(__ptr);
    }
                    /* try { // try from 007d9810 to 007d9817 has its CatchHandler @ 007d99e8 */
    FUN_007d8980(param_1 + 0x1c8);
    plVar4 = *(long **)(param_1 + 0x1a8);
    *(undefined1 *)(param_1 + 0x213) = 0;
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 007d9838 to 007d983f has its CatchHandler @ 007d99b8 */
      <alloc::sync::[n]::alloc::sync::Arc<rustls::client::client_conn::ClientConfig>>::drop_slow
                (param_1 + 0x1a8);
    }
    plVar4 = *(long **)(param_1 + 400);
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 007d985c to 007d9863 has its CatchHandler @ 007d9988 */
      <alloc::sync::[n]::alloc::sync::Arc<hyper_util::client::legacy::connect::http::Config>>::
      drop_slow(param_1 + 400);
    }
    plVar4 = *(long **)(param_1 + 0x198);
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 007d9880 to 007d9887 has its CatchHandler @ 007d9980 */
      <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
      drop_slow(param_1 + 0x198);
    }
    plVar4 = *(long **)(param_1 + 0x120);
    *(undefined1 *)(param_1 + 0x214) = 0;
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 007d98a8 to 007d98af has its CatchHandler @ 007d9934 */
      <alloc::sync::[n]::alloc::sync::Arc<rustls::client::client_conn::ClientConfig>>::drop_slow
                (param_1 + 0x120);
    }
    plVar4 = *(long **)(param_1 + 0x128);
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 007d98cc to 007d98d3 has its CatchHandler @ 007d992c */
      <alloc::sync::[n]::alloc::sync::Arc<alloc::vec::Vec<reqwest::proxy::Proxy>>>::drop_slow
                (param_1 + 0x128);
    }
    if (*(char *)(param_1 + 0xf8) != '\x02') {
                    /* WARNING: Could not recover jumptable at 0x007d9928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(param_1 + 0xd8) + 0x20))
                (param_1 + 0xf0,*(undefined8 *)(param_1 + 0xe0),*(undefined8 *)(param_1 + 0xe8));
      return;
    }
  }
  return;
}


// ===== 007d9aa4  FUN_007d9aa4 =====

void FUN_007d9aa4(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
  }
  if (param_1[3] != 0) {
    free((void *)param_1[4]);
  }
  if (param_1[6] != 0) {
    free((void *)param_1[7]);
    return;
  }
  return;
}


// ===== 007d9b04  FUN_007d9b04 =====

void FUN_007d9b04(long *param_1)

{
  if (*param_1 == 0) {
    if ((char)param_1[9] != '\x02') {
                    /* try { // try from 007d9b58 to 007d9b5f has its CatchHandler @ 007d9b7c */
      (**(code **)(param_1[5] + 0x20))(param_1 + 8,param_1[6],param_1[7]);
    }
  }
  else if ((char)param_1[9] != '\x02') {
                    /* try { // try from 007d9b34 to 007d9b3b has its CatchHandler @ 007d9b98 */
    (**(code **)(param_1[5] + 0x20))(param_1 + 8,param_1[6],param_1[7]);
  }
                    /* WARNING: Could not recover jumptable at 0x007d9b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x20))(param_1 + 4,param_1[2],param_1[3]);
  return;
}


// ===== 007d9bbc  FUN_007d9bbc =====

void FUN_007d9bbc(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 007d9bcc to 007d9bd3 has its CatchHandler @ 007d9c34 */
  FUN_007d9c8c(param_1 + 0x38);
  plVar3 = *(long **)(param_1 + 0x60);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 007d9bf4 to 007d9bf7 has its CatchHandler @ 007d9c2c */
    <alloc::sync::[n]::alloc::sync::Arc<alloc::vec::Vec<reqwest::proxy::Proxy>>>::drop_slow();
  }
  if (*(char *)(param_1 + 0x30) == '\x02') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007d9c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x20))
            (param_1 + 0x28,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  return;
}


// ===== 007d9c8c  FUN_007d9c8c =====

void FUN_007d9c8c(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 007d9cb8 to 007d9cbf has its CatchHandler @ 007d9d50 */
    <alloc::sync::[n]::alloc::sync::Arc<hyper_util::client::legacy::connect::http::Config>>::
    drop_slow(param_1);
  }
  plVar3 = (long *)param_1[1];
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 007d9ce0 to 007d9ce3 has its CatchHandler @ 007d9d48 */
    <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
    drop_slow();
  }
  plVar3 = (long *)param_1[3];
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 007d9d04 to 007d9d07 has its CatchHandler @ 007d9d40 */
    <alloc::sync::[n]::alloc::sync::Arc<rustls::client::client_conn::ClientConfig>>::drop_slow();
  }
  plVar3 = (long *)param_1[4];
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<rustls::client::client_conn::ClientConfig>>::drop_slow
              (param_1 + 4);
    return;
  }
  return;
}


// ===== 007d9dd4  FUN_007d9dd4 =====

void FUN_007d9dd4(long param_1)

{
  ulong uVar1;
  void *pvVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  
  pvVar2 = *(void **)(param_1 + 0x10);
  puVar10 = *(undefined8 **)(param_1 + 0x18);
  pcVar4 = (code *)*puVar10;
  if (pcVar4 != (code *)0x0) {
                    /* try { // try from 007d9dfc to 007d9e03 has its CatchHandler @ 007da0a8 */
    (*pcVar4)(pvVar2);
  }
  if (puVar10[1] != 0) {
    free(pvVar2);
  }
  pvVar2 = *(void **)(param_1 + 0x20);
  puVar10 = *(undefined8 **)(param_1 + 0x28);
  pcVar4 = (code *)*puVar10;
  if (pcVar4 != (code *)0x0) {
                    /* try { // try from 007d9e24 to 007d9e2b has its CatchHandler @ 007da08c */
    (*pcVar4)(pvVar2);
  }
  if (puVar10[1] != 0) {
    free(pvVar2);
  }
  if ((*(long *)(param_1 + 0x2d8) != -1) && (*(long *)(param_1 + 0x2d8) != 0)) {
    free(*(void **)(param_1 + 0x2e0));
  }
  lVar5 = *(long *)(param_1 + 0x2f0);
  if (lVar5 != -1) {
    lVar8 = *(long *)(param_1 + 0x300);
    if (lVar8 != 0) {
      puVar10 = (undefined8 *)(*(long *)(param_1 + 0x2f8) + 8);
      do {
        if ((puVar10[-1] != -1) && (puVar10[-1] != 0)) {
          free((void *)*puVar10);
        }
        lVar8 = lVar8 + -1;
        puVar10 = puVar10 + 3;
      } while (lVar8 != 0);
      lVar5 = *(long *)(param_1 + 0x2f0);
    }
    if (lVar5 != 0) {
      free(*(void **)(param_1 + 0x2f8));
    }
  }
  uVar9 = *(ulong *)(param_1 + 0x78);
  if (uVar9 != 0) {
    lVar5 = *(long *)(param_1 + 0x68);
    uVar3 = *(ulong *)(param_1 + 0x70);
    uVar6 = *(ulong *)(param_1 + 0x60);
    uVar1 = 0;
    if (uVar6 <= uVar3) {
      uVar1 = uVar6;
    }
    lVar7 = uVar3 - uVar1;
    uVar11 = uVar6 - lVar7;
    lVar8 = 0;
    if (uVar11 <= uVar9) {
      lVar8 = uVar9 - uVar11;
    }
    if (uVar9 <= uVar11) {
      uVar6 = lVar7 + uVar9;
    }
    lVar7 = uVar6 - lVar7;
    if (lVar7 != 0) {
      puVar10 = (undefined8 *)(uVar3 * 0x18 + uVar1 * -0x18 + lVar5 + 8);
      do {
        if (puVar10[-1] != 0) {
          free((void *)*puVar10);
        }
        lVar7 = lVar7 + -1;
        puVar10 = puVar10 + 3;
      } while (lVar7 != 0);
    }
    if (uVar11 < uVar9) {
      puVar10 = (undefined8 *)(lVar5 + 8);
      do {
        if (puVar10[-1] != 0) {
          free((void *)*puVar10);
        }
        lVar8 = lVar8 + -1;
        puVar10 = puVar10 + 3;
      } while (lVar8 != 0);
    }
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    free(*(void **)(param_1 + 0x68));
  }
  uVar9 = *(ulong *)(param_1 + 0xb0);
  if (uVar9 != 0) {
    lVar5 = *(long *)(param_1 + 0xa0);
    uVar3 = *(ulong *)(param_1 + 0xa8);
    uVar6 = *(ulong *)(param_1 + 0x98);
    uVar1 = 0;
    if (uVar6 <= uVar3) {
      uVar1 = uVar6;
    }
    lVar7 = uVar3 - uVar1;
    uVar11 = uVar6 - lVar7;
    lVar8 = 0;
    if (uVar11 <= uVar9) {
      lVar8 = uVar9 - uVar11;
    }
    if (uVar9 <= uVar11) {
      uVar6 = lVar7 + uVar9;
    }
    lVar7 = uVar6 - lVar7;
    if (lVar7 != 0) {
      puVar10 = (undefined8 *)(uVar3 * 0x18 + uVar1 * -0x18 + lVar5 + 8);
      do {
        if (puVar10[-1] != 0) {
          free((void *)*puVar10);
        }
        lVar7 = lVar7 + -1;
        puVar10 = puVar10 + 3;
      } while (lVar7 != 0);
    }
    if (uVar11 < uVar9) {
      puVar10 = (undefined8 *)(lVar5 + 8);
      do {
        if (puVar10[-1] != 0) {
          free((void *)*puVar10);
        }
        lVar8 = lVar8 + -1;
        puVar10 = puVar10 + 3;
      } while (lVar8 != 0);
    }
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    free(*(void **)(param_1 + 0xa0));
  }
  if ((*(long *)(param_1 + 0x308) != -1) && (*(long *)(param_1 + 0x308) != 0)) {
    free(*(void **)(param_1 + 0x310));
  }
  FUN_007da130(param_1 + 0xc0);
  return;
}


