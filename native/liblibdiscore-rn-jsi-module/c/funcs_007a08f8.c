// ===== 007a08f8  FUN_007a08f8 =====

void FUN_007a08f8(long *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  if (*param_1 != 0) {
    plVar5 = (long *)param_1[1];
    if (plVar5 != (long *)0x0) {
                    /* try { // try from 007a091c to 007a093f has its CatchHandler @ 007a097c */
      uVar3 = <tokio::sync::oneshot::[9]::tokio::sync::oneshot::State>::set_complete(plVar5 + 6);
      if ((uVar3 & 5) == 1) {
        (**(code **)(plVar5[4] + 0x10))(plVar5[5]);
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
        ::drop_slow(param_1 + 1);
        return;
      }
    }
  }
  return;
}


// ===== 007a09ac  FUN_007a09ac =====

void FUN_007a09ac(long *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  if (*param_1 != 0) {
    plVar5 = (long *)param_1[1];
    if (plVar5 != (long *)0x0) {
                    /* try { // try from 007a09d0 to 007a09f3 has its CatchHandler @ 007a0a30 */
      uVar3 = <tokio::sync::oneshot::[9]::tokio::sync::oneshot::State>::set_complete(plVar5 + 0x18);
      if ((uVar3 & 5) == 1) {
        (**(code **)(plVar5[0x16] + 0x10))(plVar5[0x17]);
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
        ::drop_slow(param_1 + 1);
        return;
      }
    }
  }
  return;
}


// ===== 007a0a60  FUN_007a0a60 =====

void FUN_007a0a60(long param_1)

{
  if (*(char *)(param_1 + 0x31) == '\x02') {
    return;
  }
                    /* try { // try from 007a0a84 to 007a0a8f has its CatchHandler @ 007a0aa0 */
  FUN_007a38f8(param_1 + 0x18);
  FUN_007a2e60(param_1);
  return;
}


// ===== 007a0ab8  FUN_007a0ab8 =====

void FUN_007a0ab8(undefined8 *param_1)

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
                    /* try { // try from 007a0ae4 to 007a0aeb has its CatchHandler @ 007a0b2c */
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


// ===== 007a0b60  FUN_007a0b60 =====

void FUN_007a0b60(long *param_1)

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
                    /* try { // try from 007a0b80 to 007a0ba3 has its CatchHandler @ 007a0be0 */
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


// ===== 007a0c18  FUN_007a0c18 =====

void FUN_007a0c18(byte *param_1)

{
  if (((*param_1 != 0xff) && (9 < *param_1)) && (*(long *)(param_1 + 0x10) != 0)) {
    free(*(void **)(param_1 + 8));
    return;
  }
  return;
}


// ===== 007a0c44  FUN_007a0c44 =====

void FUN_007a0c44(long *param_1)

{
  char *pcVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  char cVar5;
  long *plVar6;
  long lVar7;
  
  if ((char)param_1[4] != -1) {
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
                    /* try { // try from 007a0c80 to 007a0c83 has its CatchHandler @ 007a0d7c */
      <alloc::sync::[n]::alloc::sync::Arc<hyper::common::watch::Shared>>::drop_slow();
    }
                    /* try { // try from 007a0c84 to 007a0c8b has its CatchHandler @ 007a0d8c */
    FUN_007a11a4(param_1 + 2);
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
                    /* try { // try from 007a0ccc to 007a0ccf has its CatchHandler @ 007a0d4c */
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
                    /* try { // try from 007a0cf8 to 007a0cfb has its CatchHandler @ 007a0d40 */
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
  }
  return;
}


// ===== 007a0da4  FUN_007a0da4 =====

void FUN_007a0da4(long param_1)

{
  if (*(long *)(param_1 + 0x100) == 2) {
    return;
  }
                    /* try { // try from 007a0dc8 to 007a0dcf has its CatchHandler @ 007a0de0 */
  FUN_007a1524();
  FUN_007a23e8(param_1 + 0x100);
  return;
}


// ===== 007a0df8  FUN_007a0df8 =====

void FUN_007a0df8(long *param_1)

{
  code *pcVar1;
  undefined8 *__ptr;
  void *__ptr_00;
  undefined8 *puVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 == -2) {
    FUN_007a1654(param_1 + 1);
    return;
  }
  __ptr = (undefined8 *)param_1[0x20];
  __ptr_00 = (void *)*__ptr;
  if (__ptr_00 != (void *)0x0) {
    puVar2 = (undefined8 *)__ptr[1];
    pcVar1 = (code *)*puVar2;
    if (pcVar1 != (code *)0x0) {
                    /* try { // try from 007a0e4c to 007a0e53 has its CatchHandler @ 007a0eac */
      (*pcVar1)(__ptr_00);
    }
    if (puVar2[1] != 0) {
      free(__ptr_00);
    }
  }
  free(__ptr);
  if (lVar3 != -1) {
    FUN_007a1524(param_1);
    return;
  }
  return;
}


// ===== 007a0ef4  FUN_007a0ef4 =====

void FUN_007a0ef4(long param_1,void *param_2)

{
  long local_18;
  
  if (1 < param_1 + 1U) {
    if (param_1 != -2) {
      free(param_2);
      return;
    }
    if ((1 < ((ulong)param_2 & 3) - 2) && (((ulong)param_2 & 3) != 0)) {
      local_18 = (long)param_2 + -1;
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
      return;
    }
  }
  return;
}


// ===== 007a0f68  FUN_007a0f68 =====

void FUN_007a0f68(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long local_18;
  
  lVar1 = *param_1;
  if (lVar1 == -2) {
    uVar2 = param_1[1] & 3;
    if ((1 < uVar2 - 2) && (uVar2 != 0)) {
      local_18 = param_1[1] - 1;
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
    }
  }
  else if ((lVar1 != -1) && (lVar1 != 0)) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 007a0fd8  FUN_007a0fd8 =====

void FUN_007a0fd8(long *param_1)

{
  code *pcVar1;
  undefined8 *__ptr;
  void *__ptr_00;
  undefined8 *puVar2;
  
  if (*param_1 == -2) {
    return;
  }
  if (*param_1 != -1) {
    FUN_007a1654();
    return;
  }
  __ptr = (undefined8 *)param_1[1];
  __ptr_00 = (void *)*__ptr;
  if (__ptr_00 != (void *)0x0) {
    puVar2 = (undefined8 *)__ptr[1];
    pcVar1 = (code *)*puVar2;
    if (pcVar1 != (code *)0x0) {
                    /* try { // try from 007a1034 to 007a103b has its CatchHandler @ 007a106c */
      (*pcVar1)(__ptr_00);
    }
    if (puVar2[1] != 0) {
      free(__ptr_00);
    }
  }
  free(__ptr);
  return;
}


// ===== 007a10a0  FUN_007a10a0 =====

void FUN_007a10a0(long *param_1)

{
  if (*param_1 != -1) {
    FUN_007a37b0();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007a10c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x20))(param_1 + 4,param_1[2],param_1[3]);
  return;
}


// ===== 007a10c4  FUN_007a10c4 =====

void FUN_007a10c4(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 007a10d4 to 007a10db has its CatchHandler @ 007a1144 */
  FUN_007a27f8(param_1 + 0x40);
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
                    /* try { // try from 007a1100 to 007a1103 has its CatchHandler @ 007a113c */
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


// ===== 007a11a4  FUN_007a11a4 =====

void FUN_007a11a4(long *param_1)

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
                    /* try { // try from 007a11f8 to 007a11ff has its CatchHandler @ 007a1264 */
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
                    /* try { // try from 007a121c to 007a1223 has its CatchHandler @ 007a125c */
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


// ===== 007a12bc  FUN_007a12bc =====

void FUN_007a12bc(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 007a12cc to 007a12cf has its CatchHandler @ 007a130c */
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


// ===== 007a1344  FUN_007a1344 =====

void FUN_007a1344(long *param_1)

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
                    /* try { // try from 007a1390 to 007a13c7 has its CatchHandler @ 007a1400 */
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


// ===== 007a1434  FUN_007a1434 =====

void FUN_007a1434(long *param_1)

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
                    /* try { // try from 007a1480 to 007a14b7 has its CatchHandler @ 007a14f0 */
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


// ===== 007a1524  FUN_007a1524 =====

void FUN_007a1524(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  void *pvVar3;
  
  if ((9 < *(byte *)(param_1 + 0xb8)) && (*(long *)(param_1 + 200) != 0)) {
    free(*(void **)(param_1 + 0xc0));
  }
                    /* try { // try from 007a1554 to 007a155b has its CatchHandler @ 007a1628 */
  FUN_007a343c(param_1 + 0x60);
                    /* try { // try from 007a155c to 007a1563 has its CatchHandler @ 007a1620 */
  FUN_007a37b0(param_1);
  pvVar3 = *(void **)(param_1 + 0xd0);
  if (pvVar3 != (void *)0x0) {
                    /* try { // try from 007a156c to 007a1573 has its CatchHandler @ 007a1604 */
    FUN_007b3bec(pvVar3);
    free(pvVar3);
  }
  if (*(long *)(param_1 + 0xe0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x007a15a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0xe0) + 0x20))
              (param_1 + 0xf8,*(undefined8 *)(param_1 + 0xe8),*(undefined8 *)(param_1 + 0xf0));
    return;
  }
  pvVar3 = *(void **)(param_1 + 0xe8);
  puVar1 = *(undefined8 **)(param_1 + 0xf0);
  pcVar2 = (code *)*puVar1;
  if (pcVar2 != (code *)0x0) {
                    /* try { // try from 007a15b0 to 007a15b7 has its CatchHandler @ 007a15e0 */
    (*pcVar2)(pvVar3);
  }
  if (puVar1[1] != 0) {
    free(pvVar3);
    return;
  }
  return;
}


// ===== 007a1654  FUN_007a1654 =====

void FUN_007a1654(long param_1)

{
  void *__ptr;
  
                    /* try { // try from 007a1664 to 007a1667 has its CatchHandler @ 007a16b4 */
  FUN_007a37b0();
  __ptr = *(void **)(param_1 + 0x60);
  if (__ptr != (void *)0x0) {
                    /* try { // try from 007a1670 to 007a1677 has its CatchHandler @ 007a1698 */
    FUN_007b3bec(__ptr);
    free(__ptr);
  }
  FUN_007a35d8(param_1 + 0x70);
  return;
}


// ===== 007a16dc  FUN_007a16dc =====

void FUN_007a16dc(long *param_1)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  
  __ptr = (void *)param_1[1];
  lVar2 = param_1[2] + 1;
  lVar1 = (long)__ptr + 0x38;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 007a1718 to 007a171b has its CatchHandler @ 007a1764 */
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


// ===== 007a17b8  FUN_007a17b8 =====

void FUN_007a17b8(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long local_18;
  
  lVar1 = *param_1;
  if ((lVar1 != 3) && (lVar1 != -3)) {
    if (lVar1 != -2) {
      if (lVar1 != -1) {
        FUN_007a37b0();
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x007a1840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1[1] + 0x20))(param_1 + 4,param_1[2],param_1[3]);
      return;
    }
    uVar2 = param_1[1] & 3;
    if ((1 < uVar2 - 2) && (uVar2 != 0)) {
      local_18 = param_1[1] - 1;
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
      return;
    }
  }
  return;
}


// ===== 007a1844  FUN_007a1844 =====

void FUN_007a1844(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  void *__ptr;
  undefined8 *puVar2;
  
  if ((param_1 == 0) && (param_2 != (undefined8 *)0x0)) {
    __ptr = (void *)*param_2;
    if (__ptr != (void *)0x0) {
      puVar2 = (undefined8 *)param_2[1];
      pcVar1 = (code *)*puVar2;
      if (pcVar1 != (code *)0x0) {
                    /* try { // try from 007a1874 to 007a187b has its CatchHandler @ 007a18bc */
        (*pcVar1)(__ptr);
      }
      if (puVar2[1] != 0) {
        free(__ptr);
      }
    }
    free(param_2);
    return;
  }
  return;
}


// ===== 007a18f0  FUN_007a18f0 =====

void FUN_007a18f0(undefined8 *param_1)

{
  code *pcVar1;
  void *__ptr;
  undefined8 *puVar2;
  
  if (*(char *)(param_1 + 0xe) != -1) {
    if (*(char *)(param_1 + 0xe) != '\x02') {
      FUN_007a2904(param_1);
      return;
    }
    __ptr = (void *)*param_1;
    if (__ptr != (void *)0x0) {
      puVar2 = (undefined8 *)param_1[1];
      pcVar1 = (code *)*puVar2;
      if (pcVar1 != (code *)0x0) {
                    /* try { // try from 007a193c to 007a1943 has its CatchHandler @ 007a198c */
        (*pcVar1)(__ptr);
      }
      if (puVar2[1] != 0) {
        free(__ptr);
      }
    }
    if (*(char *)((long)param_1 + 0x29) != '\x02') {
      FUN_007a38f8(param_1 + 2);
      return;
    }
  }
  return;
}


// ===== 007a19c8  FUN_007a19c8 =====

void FUN_007a19c8(ulong *param_1)

{
  int iVar1;
  void *pvVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  long *plVar7;
  code *pcVar8;
  long lVar9;
  void *pvVar10;
  
  uVar6 = *param_1;
  if ((uVar6 == 0xfffffffffffffffd) || (uVar6 == 0xfffffffffffffffe)) {
    return;
  }
  lVar9 = uVar6 - 5;
  if ((long)uVar6 < 5) {
    lVar9 = 1;
  }
  if (lVar9 != 1) {
    if (lVar9 != 0) {
      return;
    }
    plVar7 = (long *)param_1[0x2a];
    if (plVar7 != (long *)0x0) {
      do {
        lVar9 = *plVar7;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = lVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar9 + -1 == 0) {
        DataMemoryBarrier(2,1);
                    /* try { // try from 007a1a28 to 007a1a2f has its CatchHandler @ 007a1ed0 */
        <alloc[c1f8e832b0d782c7]::sync::Arc<std[17aff9129faa4dc5]::sync::poison::mutex::Mutex<hyper_util[52a210df7efc1bae]::client::legacy::pool::PoolInner<hyper_util[52a210df7efc1bae]::client::legacy::client::PoolClient<reqwest[6fed810f3e38d558]::async_impl::body::Body>,(http[b87e90c26fe47eb4]::uri::scheme::Scheme,http[b87e90c26fe47eb4]::uri::authority::Authority)>>>>
        ::drop_slow(param_1 + 0x2a);
      }
    }
    if (1 < (byte)param_1[0x17]) {
      plVar7 = (long *)param_1[0x18];
                    /* try { // try from 007a1a4c to 007a1a53 has its CatchHandler @ 007a1ee0 */
      (**(code **)(*plVar7 + 0x20))(plVar7 + 3,plVar7[1],plVar7[2]);
      free(plVar7);
    }
                    /* try { // try from 007a1a70 to 007a1a77 has its CatchHandler @ 007a1f20 */
    (**(code **)(param_1[0x19] + 0x20))(param_1 + 0x1c,param_1[0x1a],param_1[0x1b]);
                    /* try { // try from 007a1a78 to 007a1a7f has its CatchHandler @ 007a1f18 */
    FUN_007a30c4(param_1 + 9);
                    /* try { // try from 007a1a80 to 007a1a87 has its CatchHandler @ 007a1f10 */
    FUN_007a343c(param_1 + 0x1d);
    plVar7 = (long *)param_1[0x28];
    do {
      lVar9 = *plVar7;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 + -1 != 0) {
      return;
    }
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
    drop_slow(param_1 + 0x28);
    return;
  }
  if (uVar6 == 0xffffffffffffffff) {
LAB_007a1b24:
    FUN_007a18f0(param_1 + 1);
    return;
  }
  lVar9 = 0;
  if (1 < uVar6) {
    lVar9 = uVar6 - 2;
  }
  if (lVar9 != 1) {
    if (lVar9 != 0) {
      return;
    }
    if (uVar6 == 2) {
      return;
    }
    iVar1 = (int)param_1[0x14];
    if (iVar1 != -3) {
      if (iVar1 < 1000000000) {
        iVar1 = 999999999;
      }
      if (iVar1 == 1000000000) {
        pvVar10 = (void *)param_1[0x15];
        puVar3 = (undefined8 *)param_1[0x16];
        pcVar8 = (code *)*puVar3;
        if (pcVar8 != (code *)0x0) {
                    /* try { // try from 007a1cc0 to 007a1cc7 has its CatchHandler @ 007a1d20 */
          (*pcVar8)(pvVar10);
        }
        if (puVar3[1] != 0) {
          free(pvVar10);
        }
      }
      else {
                    /* try { // try from 007a1b6c to 007a1b73 has its CatchHandler @ 007a1dc4 */
        if ((iVar1 == 999999999) && (FUN_007a30c4(param_1 + 0x13), (char)param_1[0x21] != -1)) {
                    /* try { // try from 007a1b80 to 007a1b87 has its CatchHandler @ 007a1d18 */
          FUN_007a343c(param_1 + 0x21);
        }
      }
    }
    FUN_007a10c4(param_1);
    return;
  }
  if ((char)param_1[0xf] != -2) goto LAB_007a1b24;
  pvVar10 = (void *)param_1[1];
  cVar4 = *(char *)((long)pvVar10 + 0xc9);
  if (cVar4 == '\0') {
    pvVar2 = *(void **)((long)pvVar10 + 0x40);
    puVar3 = *(undefined8 **)((long)pvVar10 + 0x48);
    pcVar8 = (code *)*puVar3;
    if (pcVar8 != (code *)0x0) {
                    /* try { // try from 007a1c20 to 007a1c27 has its CatchHandler @ 007a1d50 */
      (*pcVar8)(pvVar2);
    }
    if (puVar3[1] != 0) {
      free(pvVar2);
    }
    plVar7 = *(long **)((long)pvVar10 + 0xb0);
    do {
      lVar9 = *plVar7;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 007a1c5c to 007a1c5f has its CatchHandler @ 007a1d40 */
      <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
      drop_slow();
    }
    plVar7 = *(long **)((long)pvVar10 + 0xc0);
    if (plVar7 != (long *)0x0) {
      do {
        lVar9 = *plVar7;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = lVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar9 + -1 == 0) {
        DataMemoryBarrier(2,1);
                    /* try { // try from 007a1c84 to 007a1c87 has its CatchHandler @ 007a1d10 */
        <alloc[c1f8e832b0d782c7]::sync::Arc<std[17aff9129faa4dc5]::sync::poison::mutex::Mutex<hyper_util[52a210df7efc1bae]::client::legacy::pool::PoolInner<hyper_util[52a210df7efc1bae]::client::legacy::client::PoolClient<reqwest[6fed810f3e38d558]::async_impl::body::Body>,(http[b87e90c26fe47eb4]::uri::scheme::Scheme,http[b87e90c26fe47eb4]::uri::authority::Authority)>>>>
        ::drop_slow();
      }
    }
                    /* try { // try from 007a1c88 to 007a1c8f has its CatchHandler @ 007a1df0 */
    FUN_007a27f8((long)pvVar10 + 0x78);
  }
  else {
    if (cVar4 == '\x03') {
      if (*(char *)((long)pvVar10 + 0x123) == '\0') {
        pvVar2 = *(void **)((long)pvVar10 + 0x100);
        puVar3 = *(undefined8 **)((long)pvVar10 + 0x108);
        pcVar8 = (code *)*puVar3;
        if (pcVar8 != (code *)0x0) {
                    /* try { // try from 007a1ba0 to 007a1ba7 has its CatchHandler @ 007a1cf0 */
          (*pcVar8)(pvVar2);
        }
        if (puVar3[1] != 0) {
          free(pvVar2);
        }
      }
    }
    else {
      if (cVar4 != '\x04') goto LAB_007a1c98;
      *(undefined1 *)((long)pvVar10 + 0xca) = 0;
                    /* try { // try from 007a1b18 to 007a1b1f has its CatchHandler @ 007a1e3c */
      FUN_007a2e60((long)pvVar10 + 0xd0);
    }
    plVar7 = *(long **)((long)pvVar10 + 0xb0);
    do {
      lVar9 = *plVar7;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 007a1bdc to 007a1bdf has its CatchHandler @ 007a1e00 */
      <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
      drop_slow();
    }
    plVar7 = *(long **)((long)pvVar10 + 0xc0);
    if (plVar7 != (long *)0x0) {
      do {
        lVar9 = *plVar7;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = lVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar9 + -1 == 0) {
        DataMemoryBarrier(2,1);
                    /* try { // try from 007a1c04 to 007a1c07 has its CatchHandler @ 007a1d48 */
        <alloc[c1f8e832b0d782c7]::sync::Arc<std[17aff9129faa4dc5]::sync::poison::mutex::Mutex<hyper_util[52a210df7efc1bae]::client::legacy::pool::PoolInner<hyper_util[52a210df7efc1bae]::client::legacy::client::PoolClient<reqwest[6fed810f3e38d558]::async_impl::body::Body>,(http[b87e90c26fe47eb4]::uri::scheme::Scheme,http[b87e90c26fe47eb4]::uri::authority::Authority)>>>>
        ::drop_slow();
      }
    }
                    /* try { // try from 007a1c08 to 007a1c0f has its CatchHandler @ 007a1ea0 */
    FUN_007a27f8((long)pvVar10 + 0x78);
  }
                    /* try { // try from 007a1c90 to 007a1c97 has its CatchHandler @ 007a1eb0 */
  FUN_007a38f8((long)pvVar10 + 0x58);
LAB_007a1c98:
  free(pvVar10);
  return;
}


// ===== 007a1f64  FUN_007a1f64 =====

void FUN_007a1f64(long *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  
  lVar2 = *param_1;
  if (((lVar2 != -2) && (lVar2 != -1)) && (lVar2 != 2)) {
    __ptr = (void *)param_1[0xf];
    puVar1 = (undefined8 *)param_1[0x10];
    pcVar3 = (code *)*puVar1;
    if (pcVar3 != (code *)0x0) {
                    /* try { // try from 007a1fb0 to 007a1fb7 has its CatchHandler @ 007a2060 */
      (*pcVar3)(__ptr);
    }
    if (puVar1[1] != 0) {
      free(__ptr);
    }
                    /* try { // try from 007a1fcc to 007a1fd3 has its CatchHandler @ 007a20c4 */
    <bytes::bytes_mut::BytesMut_as_core::ops::drop::Drop>::drop(param_1 + 0x12);
    if (param_1[2] != 0) {
      free((void *)param_1[3]);
    }
                    /* try { // try from 007a1fe8 to 007a1fef has its CatchHandler @ 007a20a0 */
    FUN_007927a4(param_1 + 6);
    if (param_1[6] != 0) {
      free((void *)param_1[7]);
    }
                    /* try { // try from 007a200c to 007a2013 has its CatchHandler @ 007a2098 */
    FUN_007a39c8(param_1 + 0x17);
    if (param_1[0x40] != 2) {
                    /* try { // try from 007a2020 to 007a2027 has its CatchHandler @ 007a204c */
      FUN_007a23e8(param_1 + 0x40);
    }
                    /* try { // try from 007a2028 to 007a202f has its CatchHandler @ 007a2090 */
    FUN_007a25c4(param_1 + 0x43);
                    /* try { // try from 007a2030 to 007a2037 has its CatchHandler @ 007a2088 */
    FUN_007a0c44(param_1 + 0x46);
    FUN_007a0724(param_1[0x4b]);
    return;
  }
  return;
}


// ===== 007a2104  FUN_007a2104 =====

void FUN_007a2104(long param_1)

{
  if (*(char *)(param_1 + 0x70) == '\x02') {
    return;
  }
  FUN_007a2904();
  return;
}


// ===== 007a2118  FUN_007a2118 =====

void FUN_007a2118(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
                    /* try { // try from 007a2130 to 007a2157 has its CatchHandler @ 007a2194 */
    uVar3 = <tokio::sync::oneshot::[9]::tokio::sync::oneshot::State>::set_complete(plVar5 + 6);
    if ((uVar3 & 5) == 1) {
      (**(code **)(plVar5[4] + 0x10))(plVar5[5]);
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
  return;
}


// ===== 007a21c4  FUN_007a21c4 =====

void FUN_007a21c4(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
                    /* try { // try from 007a21dc to 007a2203 has its CatchHandler @ 007a2240 */
    uVar3 = <tokio::sync::oneshot::[9]::tokio::sync::oneshot::State>::set_complete(plVar5 + 0x18);
    if ((uVar3 & 5) == 1) {
      (**(code **)(plVar5[0x16] + 0x10))(plVar5[0x17]);
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
  return;
}


// ===== 007a2270  FUN_007a2270 =====

void FUN_007a2270(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long local_138 [33];
  
  plVar6 = (long *)*param_1;
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 6);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 | 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 10) == 8) {
                    /* try { // try from 007a22bc to 007a22bf has its CatchHandler @ 007a2334 */
      (**(code **)(plVar6[2] + 0x10))(plVar6[3]);
    }
    if (((uint)uVar5 >> 1 & 1) != 0) {
      memcpy(local_138,plVar6 + 7,0x108);
      plVar6[7] = -3;
      if (local_138[0] != -3) {
                    /* try { // try from 007a22e8 to 007a22ef has its CatchHandler @ 007a2334 */
        FUN_0079a540(local_138);
      }
    }
    do {
      lVar4 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::oneshot::Inner<core[bcece726f298455b]::result::Result<http[b87e90c26fe47eb4]::response::Response<hyper[9f1bfd30b08ca095]::body::incoming::Incoming>,hyper[9f1bfd30b08ca095]::client::dispatch::TrySendError<http[b87e90c26fe47eb4]::request::Request<reqwest[6fed810f3e38d558]::async_impl::body::Body>>>>>>
      ::drop_slow(param_1);
      return;
    }
  }
  return;
}


// ===== 007a2364  FUN_007a2364 =====

void FUN_007a2364(long param_1)

{
  void *__ptr;
  
                    /* try { // try from 007a2374 to 007a2377 has its CatchHandler @ 007a23cc */
  FUN_007a37b0();
  __ptr = *(void **)(param_1 + 0x60);
  if (__ptr != (void *)0x0) {
                    /* try { // try from 007a2380 to 007a2387 has its CatchHandler @ 007a23ac */
    FUN_007b3bec(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 007a23e8  FUN_007a23e8 =====

void FUN_007a23e8(long *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
                    /* try { // try from 007a23fc to 007a23ff has its CatchHandler @ 007a2528 */
  FUN_007a6df0();
  if (*param_1 == 0) {
    if (param_1[1] != 0) {
      plVar5 = (long *)param_1[2];
      if (plVar5 != (long *)0x0) {
                    /* try { // try from 007a2470 to 007a2493 has its CatchHandler @ 007a24d0 */
        uVar3 = <tokio::sync::oneshot::[9]::tokio::sync::oneshot::State>::set_complete(plVar5 + 6);
        if ((uVar3 & 5) == 1) {
          (**(code **)(plVar5[4] + 0x10))(plVar5[5]);
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
          ::drop_slow(param_1 + 2);
          return;
        }
      }
    }
  }
  else if (param_1[1] != 0) {
    plVar5 = (long *)param_1[2];
    if (plVar5 != (long *)0x0) {
                    /* try { // try from 007a2414 to 007a2437 has its CatchHandler @ 007a24fc */
      uVar3 = <tokio::sync::oneshot::[9]::tokio::sync::oneshot::State>::set_complete(plVar5 + 0x18);
      if ((uVar3 & 5) == 1) {
        (**(code **)(plVar5[0x16] + 0x10))(plVar5[0x17]);
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
        ::drop_slow(param_1 + 2);
        return;
      }
    }
  }
  return;
}


// ===== 007a2554  FUN_007a2554 =====

void FUN_007a2554(long param_1)

{
                    /* try { // try from 007a2564 to 007a2567 has its CatchHandler @ 007a25ac */
  FUN_007a6ccc();
  if (*(long *)(param_1 + 0x100) == 2) {
    return;
  }
                    /* try { // try from 007a2580 to 007a2587 has its CatchHandler @ 007a2598 */
  FUN_007a1524(param_1);
  FUN_007a23e8(param_1 + 0x100);
  return;
}


// ===== 007a25c4  FUN_007a25c4 =====

void FUN_007a25c4(undefined8 *param_1)

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
                    /* try { // try from 007a25f4 to 007a263b has its CatchHandler @ 007a2770 */
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
                    /* try { // try from 007a263c to 007a2643 has its CatchHandler @ 007a2710 */
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
                    /* try { // try from 007a2660 to 007a2667 has its CatchHandler @ 007a2708 */
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
                    /* try { // try from 007a2680 to 007a26c7 has its CatchHandler @ 007a2740 */
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


// ===== 007a2790  FUN_007a2790 =====

void FUN_007a2790(long param_1)

{
  if (*(long *)(param_1 + 0x40) != 0) {
                    /* try { // try from 007a27b0 to 007a27b7 has its CatchHandler @ 007a27d4 */
    (**(code **)(*(long *)(param_1 + 0x40) + 0x20))
              (param_1 + 0x58,*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
  }
                    /* WARNING: Could not recover jumptable at 0x007a27d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x20))
            (param_1 + 0x30,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}


// ===== 007a27f8  FUN_007a27f8 =====

void FUN_007a27f8(byte *param_1)

{
  char cVar1;
  bool bVar2;
  void *__ptr;
  long lVar3;
  long *plVar4;
  
                    /* try { // try from 007a2808 to 007a280b has its CatchHandler @ 007a28dc */
  FUN_007ce4a4();
  if (1 < *param_1) {
    plVar4 = *(long **)(param_1 + 8);
                    /* try { // try from 007a2828 to 007a282f has its CatchHandler @ 007a28a0 */
    (**(code **)(*plVar4 + 0x20))(plVar4 + 3,plVar4[1],plVar4[2]);
    free(plVar4);
  }
                    /* try { // try from 007a284c to 007a2853 has its CatchHandler @ 007a28d4 */
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


// ===== 007a2904  FUN_007a2904 =====

void FUN_007a2904(byte *param_1)

{
  char cVar1;
  bool bVar2;
  void *__ptr;
  long lVar3;
  long *plVar4;
  
                    /* try { // try from 007a2914 to 007a2917 has its CatchHandler @ 007a2a20 */
  FUN_007cb9b0();
  if (param_1[0x61] != 2) {
                    /* try { // try from 007a2924 to 007a292b has its CatchHandler @ 007a2a04 */
    FUN_007a38f8(param_1 + 0x48);
                    /* try { // try from 007a292c to 007a2933 has its CatchHandler @ 007a29fc */
    FUN_007a2e60(param_1 + 0x30);
  }
  if (1 < *param_1) {
    plVar4 = *(long **)(param_1 + 8);
                    /* try { // try from 007a2950 to 007a2957 has its CatchHandler @ 007a29c8 */
    (**(code **)(*plVar4 + 0x20))(plVar4 + 3,plVar4[1],plVar4[2]);
    free(plVar4);
  }
                    /* try { // try from 007a2974 to 007a297b has its CatchHandler @ 007a2a18 */
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


// ===== 007a2a50  FUN_007a2a50 =====

void FUN_007a2a50(undefined8 *param_1)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  char cVar6;
  void *pvVar7;
  long *plVar8;
  code *pcVar9;
  long *plVar10;
  long lVar11;
  
  plVar8 = (long *)*param_1;
  do {
    lVar11 = *plVar8;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar5) {
      *plVar8 = lVar11 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar11 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 007a2a80 to 007a2a87 has its CatchHandler @ 007a2bcc */
    <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
    drop_slow(param_1);
  }
  pvVar7 = (void *)param_1[2];
  puVar3 = (undefined8 *)param_1[3];
  pcVar9 = (code *)*puVar3;
  if (pcVar9 != (code *)0x0) {
                    /* try { // try from 007a2a94 to 007a2a9b has its CatchHandler @ 007a2be0 */
    (*pcVar9)(pvVar7);
  }
  if (puVar3[1] != 0) {
    free(pvVar7);
  }
  pvVar7 = (void *)param_1[4];
  if ((long)pvVar7 - 1U < 0xfffffffffffffffe) {
    plVar8 = (long *)((long)pvVar7 + 8);
    do {
      lVar11 = *plVar8;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar11 + -1 == 0) {
      DataMemoryBarrier(2,1);
      free(pvVar7);
    }
  }
  plVar8 = param_1 + 5;
  lVar11 = *plVar8;
  pcVar1 = (char *)(lVar11 + 0x20);
  *(undefined4 *)(lVar11 + 0x40) = 1;
  do {
    cVar4 = *pcVar1;
    cVar6 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar5) {
      *pcVar1 = '\x01';
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (cVar4 == '\0') {
    lVar2 = *(long *)(lVar11 + 0x10);
    *(undefined8 *)(lVar11 + 0x10) = 0;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    if (lVar2 != 0) {
                    /* try { // try from 007a2b24 to 007a2b5b has its CatchHandler @ 007a2b9c */
      (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar11 + 0x18));
    }
  }
  pcVar1 = (char *)(lVar11 + 0x38);
  do {
    cVar4 = *pcVar1;
    cVar6 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar5) {
      *pcVar1 = '\x01';
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (cVar4 == '\0') {
    lVar2 = *(long *)(lVar11 + 0x28);
    *(undefined8 *)(lVar11 + 0x28) = 0;
    *(undefined4 *)(lVar11 + 0x38) = 0;
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 8))(*(undefined8 *)(lVar11 + 0x30));
    }
  }
  plVar10 = (long *)*plVar8;
  do {
    lVar11 = *plVar10;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar5) {
      *plVar10 = lVar11 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar11 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<futures_channel::oneshot::Inner<core::convert::Infallible>>>
    ::drop_slow(plVar8);
    return;
  }
  return;
}


// ===== 007a2c20  FUN_007a2c20 =====

void FUN_007a2c20(long param_1)

{
                    /* try { // try from 007a2c30 to 007a2c33 has its CatchHandler @ 007a2c78 */
  FUN_007a6ccc();
  if (*(long *)(param_1 + 0x100) == 2) {
    return;
  }
                    /* try { // try from 007a2c4c to 007a2c53 has its CatchHandler @ 007a2c64 */
  FUN_007a1524(param_1);
  FUN_007a23e8(param_1 + 0x100);
  return;
}


// ===== 007a2c90  FUN_007a2c90 =====

void FUN_007a2c90(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 007a2ca0 to 007a2ca3 has its CatchHandler @ 007a2cdc */
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


// ===== 007a2d10  FUN_007a2d10 =====

void FUN_007a2d10(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 007a2d20 to 007a2d23 has its CatchHandler @ 007a2d5c */
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


// ===== 007a2d90  FUN_007a2d90 =====

void FUN_007a2d90(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
  }
                    /* try { // try from 007a2db4 to 007a2dbb has its CatchHandler @ 007a2dec */
  FUN_007927a4(param_1 + 4);
  if (param_1[4] != 0) {
    free((void *)param_1[5]);
    return;
  }
  return;
}


// ===== 007a2e14  FUN_007a2e14 =====

void FUN_007a2e14(long *param_1)

{
  if (*param_1 != 2) {
                    /* try { // try from 007a2e30 to 007a2e37 has its CatchHandler @ 007a2e48 */
    FUN_007a23e8(param_1);
  }
  FUN_007a25c4(param_1 + 3);
  return;
}


// ===== 007a2e60  FUN_007a2e60 =====

void FUN_007a2e60(undefined8 *param_1)

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
                    /* try { // try from 007a2e8c to 007a2e93 has its CatchHandler @ 007a2ed4 */
    <alloc::sync::[n]::alloc::sync::Arc<want::Inner>>::drop_slow(param_1);
  }
                    /* try { // try from 007a2e94 to 007a2e9b has its CatchHandler @ 007a2ee8 */
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


// ===== 007a2f1c  FUN_007a2f1c =====

void FUN_007a2f1c(long *param_1)

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
                    /* try { // try from 007a2f44 to 007a2f8b has its CatchHandler @ 007a2fc4 */
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


// ===== 007a2ff8  FUN_007a2ff8 =====

void FUN_007a2ff8(long *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  void *__ptr;
  
  __ptr = (void *)param_1[0xb];
  if (__ptr != (void *)0x0) {
    puVar2 = (undefined8 *)param_1[0xc];
    pcVar1 = (code *)*puVar2;
    if (pcVar1 != (code *)0x0) {
                    /* try { // try from 007a3020 to 007a3027 has its CatchHandler @ 007a3074 */
      (*pcVar1)(__ptr);
    }
    if (puVar2[1] != 0) {
      free(__ptr);
    }
  }
  if ((*param_1 != -1) && (*param_1 != 0)) {
    free((void *)param_1[1]);
  }
  free(param_1);
  return;
}


// ===== 007a30c4  FUN_007a30c4 =====

void FUN_007a30c4(long param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  
  if (*(int *)(param_1 + 8) == -2) {
    __ptr = *(void **)(param_1 + 0x10);
    puVar1 = *(undefined8 **)(param_1 + 0x18);
    pcVar4 = (code *)*puVar1;
    if (pcVar4 != (code *)0x0) {
                    /* try { // try from 007a30ec to 007a30f3 has its CatchHandler @ 007a32dc */
      (*pcVar4)(__ptr);
    }
    if (puVar1[1] != 0) {
      free(__ptr);
      return;
    }
  }
  else {
    plVar5 = *(long **)(param_1 + 0x38);
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
                    /* try { // try from 007a3130 to 007a3133 has its CatchHandler @ 007a3218 */
      <alloc::sync::[n]::alloc::sync::Arc<hyper_util::client::legacy::connect::http::Config>>::
      drop_slow();
    }
    plVar5 = *(long **)(param_1 + 0x40);
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
                    /* try { // try from 007a3154 to 007a3157 has its CatchHandler @ 007a3210 */
      <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
      drop_slow();
    }
    plVar5 = *(long **)(param_1 + 0x50);
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
                    /* try { // try from 007a3178 to 007a317b has its CatchHandler @ 007a3208 */
      <alloc::sync::[n]::alloc::sync::Arc<rustls::client::client_conn::ClientConfig>>::drop_slow();
    }
    plVar5 = *(long **)(param_1 + 0x58);
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
                    /* try { // try from 007a319c to 007a319f has its CatchHandler @ 007a3200 */
      <alloc::sync::[n]::alloc::sync::Arc<rustls::client::client_conn::ClientConfig>>::drop_slow();
    }
    plVar5 = *(long **)(param_1 + 0x60);
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
                    /* try { // try from 007a31c0 to 007a31c3 has its CatchHandler @ 007a31f8 */
      <alloc::sync::[n]::alloc::sync::Arc<alloc::vec::Vec<reqwest::proxy::Proxy>>>::drop_slow();
    }
    if (*(char *)(param_1 + 0x30) != '\x02') {
                    /* WARNING: Could not recover jumptable at 0x007a31f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(param_1 + 0x10) + 0x20))
                (param_1 + 0x28,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
      return;
    }
  }
  return;
}


// ===== 007a330c  FUN_007a330c =====

void FUN_007a330c(undefined8 *param_1)

{
  code *pcVar1;
  void *__ptr;
  undefined8 *puVar2;
  
  __ptr = (void *)*param_1;
  if (__ptr != (void *)0x0) {
    puVar2 = (undefined8 *)param_1[1];
    pcVar1 = (code *)*puVar2;
    if (pcVar1 != (code *)0x0) {
                    /* try { // try from 007a3334 to 007a333b has its CatchHandler @ 007a336c */
      (*pcVar1)(__ptr);
    }
    if (puVar2[1] != 0) {
      free(__ptr);
    }
  }
  free(param_1);
  return;
}


// ===== 007a33a0  FUN_007a33a0 =====

void FUN_007a33a0(long param_1)

{
  if ((9 < *(byte *)(param_1 + 0x58)) && (*(long *)(param_1 + 0x68) != 0)) {
    free(*(void **)(param_1 + 0x60));
  }
  FUN_007a343c(param_1);
  return;
}


// ===== 007a33e4  FUN_007a33e4 =====

void FUN_007a33e4(void *param_1)

{
  if (param_1 != (void *)0x0) {
                    /* try { // try from 007a33f4 to 007a33fb has its CatchHandler @ 007a3420 */
    FUN_007b3bec();
    free(param_1);
    return;
  }
  return;
}


// ===== 007a343c  FUN_007a343c =====

void FUN_007a343c(byte *param_1)

{
  long *__ptr;
  
  if (1 < *param_1) {
    __ptr = *(long **)(param_1 + 8);
                    /* try { // try from 007a3468 to 007a346f has its CatchHandler @ 007a34b0 */
    (**(code **)(*__ptr + 0x20))(__ptr + 3,__ptr[1],__ptr[2]);
    free(__ptr);
  }
                    /* try { // try from 007a348c to 007a3493 has its CatchHandler @ 007a34e0 */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x20))
            (param_1 + 0x28,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x007a34ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x20))
            (param_1 + 0x48,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  return;
}


// ===== 007a3504  FUN_007a3504 =====

void FUN_007a3504(ulong param_1)

{
  long local_18;
  
  if ((1 < (param_1 & 3) - 2) && ((param_1 & 3) != 0)) {
    local_18 = param_1 - 1;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
  }
  return;
}


// ===== 007a354c  FUN_007a354c =====

void FUN_007a354c(long *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  code *pcVar2;
  
  if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x007a3574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x20))(param_1 + 3,param_1[1],param_1[2]);
    return;
  }
  __ptr = (void *)param_1[1];
  puVar1 = (undefined8 *)param_1[2];
  pcVar2 = (code *)*puVar1;
  if (pcVar2 != (code *)0x0) {
                    /* try { // try from 007a3584 to 007a358b has its CatchHandler @ 007a35b4 */
    (*pcVar2)(__ptr);
  }
  if (puVar1[1] != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 007a35d8  FUN_007a35d8 =====

void FUN_007a35d8(long *param_1)

{
  char *pcVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  char cVar5;
  long *plVar6;
  long lVar7;
  
  if (*param_1 != 0) {
                    /* try { // try from 007a35ec to 007a35f3 has its CatchHandler @ 007a3768 */
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
                    /* try { // try from 007a3610 to 007a3617 has its CatchHandler @ 007a372c */
      <alloc::sync::[n]::alloc::sync::Arc<hyper::common::watch::Shared>>::drop_slow(param_1);
    }
                    /* try { // try from 007a3618 to 007a361f has its CatchHandler @ 007a3734 */
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
                    /* try { // try from 007a3640 to 007a3647 has its CatchHandler @ 007a36f4 */
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
                    /* try { // try from 007a3684 to 007a36bb has its CatchHandler @ 007a36fc */
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


// ===== 007a37b0  FUN_007a37b0 =====

void FUN_007a37b0(long param_1)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    free(*(void **)(param_1 + 0x48));
  }
                    /* try { // try from 007a37e0 to 007a37e7 has its CatchHandler @ 007a3874 */
  FUN_0078aa8c(param_1 + 0x18);
  if (*(long *)(param_1 + 0x18) != 0) {
    free(*(void **)(param_1 + 0x20));
  }
  __ptr = *(void **)(param_1 + 0x38);
  lVar2 = *(long *)(param_1 + 0x40) + 1;
  lVar1 = (long)__ptr + 0x38;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 007a3828 to 007a382b has its CatchHandler @ 007a38a4 */
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


// ===== 007a38f8  FUN_007a38f8 =====

void FUN_007a38f8(undefined8 *param_1)

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
                    /* try { // try from 007a3920 to 007a3927 has its CatchHandler @ 007a397c */
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


// ===== 007a39c8  FUN_007a39c8 =====

void FUN_007a39c8(long param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  
  if (*(long *)(param_1 + 0x20) != -1) {
                    /* try { // try from 007a39ec to 007a39ef has its CatchHandler @ 007a3ba8 */
    FUN_007a37b0();
  }
                    /* try { // try from 007a39f4 to 007a39f7 has its CatchHandler @ 007a3bbc */
  FUN_007a0ab8(*(undefined8 *)(param_1 + 0x120));
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
                    /* try { // try from 007a3a40 to 007a3a47 has its CatchHandler @ 007a3b64 */
      <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
      drop_slow(param_1 + 0x128);
    }
  }
  if ((*(long *)(param_1 + 0x80) == 1) || (*(long *)(param_1 + 0x80) == 2)) {
    if ((*(ulong *)(param_1 + 0x88) < 2) && (*(long *)(param_1 + 0xb8) != 0)) {
                    /* try { // try from 007a3a74 to 007a3a77 has its CatchHandler @ 007a3b6c */
      <bytes::bytes_mut::BytesMut_as_core::ops::drop::Drop>::drop();
    }
  }
  if ((-0x7ffffffffffffffd < *(long *)(param_1 + 0xe8)) && (1 < *(long *)(param_1 + 0xe8) + 2U)) {
    lVar7 = *(long *)(param_1 + 0xf8) + 1;
    lVar3 = *(long *)(param_1 + 0xf0) + 0x18;
    while (lVar7 = lVar7 + -1, lVar7 != 0) {
                    /* try { // try from 007a3abc to 007a3abf has its CatchHandler @ 007a3c04 */
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
                    /* try { // try from 007a3af4 to 007a3b17 has its CatchHandler @ 007a3b74 */
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


// ===== 007a3c64  FUN_007a3c64 =====

void FUN_007a3c64(long *param_1)

{
  if ((*param_1 == 1) || (*param_1 == 2)) {
    if (((ulong)param_1[1] < 2) && (param_1[7] != 0)) {
      <bytes::bytes_mut::BytesMut_as_core::ops::drop::Drop>::drop();
      return;
    }
  }
  return;
}


// ===== 007a3c94  FUN_007a3c94 =====

void FUN_007a3c94(long *param_1)

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
                    /* try { // try from 007a3d00 to 007a3d03 has its CatchHandler @ 007a3d34 */
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


// ===== 007a3d84  FUN_007a3d84 =====

void FUN_007a3d84(ulong *param_1)

{
  void *__ptr;
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = *param_1;
  if (uVar2 < 0xfffffffffffffffe) {
    __ptr = (void *)param_1[1];
    lVar3 = param_1[2] + 1;
    lVar1 = (long)__ptr + 0x18;
    while (lVar3 = lVar3 + -1, lVar3 != 0) {
                    /* try { // try from 007a3dc8 to 007a3dcb has its CatchHandler @ 007a3e10 */
      (**(code **)(*(long *)(lVar1 + -0x18) + 0x20))
                (lVar1,*(undefined8 *)(lVar1 + -0x10),*(undefined8 *)(lVar1 + -8));
      lVar1 = lVar1 + 0x28;
    }
    if (uVar2 != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 007a3e60  FUN_007a3e60 =====

void FUN_007a3e60(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 007a3e78  FUN_007a3e78 =====

void FUN_007a3e78(byte *param_1)

{
  long *__ptr;
  
  if (1 < *param_1) {
    __ptr = *(long **)(param_1 + 8);
                    /* try { // try from 007a3ea8 to 007a3eaf has its CatchHandler @ 007a3ee0 */
    (**(code **)(*__ptr + 0x20))(__ptr + 3,__ptr[1],__ptr[2]);
    free(__ptr);
  }
                    /* WARNING: Could not recover jumptable at 0x007a3edc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x20))
            (param_1 + 0x28,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  return;
}


// ===== 007a3f14  FUN_007a3f14 =====

void FUN_007a3f14(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 extraout_x1;
  undefined1 *extraout_x8;
  undefined1 *extraout_x8_00;
  undefined1 *extraout_x8_01;
  undefined1 *__ptr;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 local_50;
  undefined1 *local_48;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  while( true ) {
    rustls_pemfile::pemfile::read_one(&local_70,uVar1,uVar2);
    if (local_70 == (undefined1 *)0xffffffffffffffff) {
      *param_1 = 0xfffffffffffffffd;
      return;
    }
    if (local_70 == (undefined1 *)0xfffffffffffffffe) break;
    if (local_70 == (undefined1 *)0x5) {
      if (local_68 != (undefined1 *)0xfffffffffffffffd) {
        __ptr = local_60;
        local_70 = local_68;
        if (local_68 == &DAT_fffffffffffffffe) {
LAB_007a3fa0:
                    /* try { // try from 007a3fa0 to 007a3fb3 has its CatchHandler @ 007a4084 */
          puVar3 = local_70;
          lVar4 = FUN_0076e4f4(0,extraout_x1,&DAT_002e3aac,0x14);
          local_58 = puVar3 + 1;
          if ((undefined1 *)0x1 < local_58) {
            if (puVar3 == &DAT_fffffffffffffffe) {
              local_58 = (undefined1 *)((ulong)__ptr & 3);
              if (((undefined1 *)0x1 < local_58 + -2) && (local_58 != (undefined1 *)0x0)) {
                local_48 = __ptr + -1;
                local_50 = 3;
                <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_48);
                local_58 = extraout_x8;
              }
            }
            else {
              free(__ptr);
              local_58 = extraout_x8_00;
            }
          }
          if (*param_4 != 0) {
                    /* try { // try from 007a4050 to 007a4053 has its CatchHandler @ 007a407c */
            FUN_007a2ff8();
            local_58 = extraout_x8_01;
          }
          local_68 = &DAT_fffffffffffffffe;
          *param_4 = lVar4;
        }
        *param_1 = local_68;
        param_1[1] = __ptr;
        param_1[2] = local_58;
        return;
      }
    }
    else if (local_68 + -1 < (undefined1 *)0xfffffffffffffffe) {
      free(local_60);
    }
  }
  local_70 = &DAT_fffffffffffffffe;
  __ptr = local_68;
  goto LAB_007a3fa0;
}


// ===== 007a409c  FUN_007a409c =====

void FUN_007a409c(size_t *param_1,undefined8 *param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *extraout_x1;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 local_60;
  undefined7 uStack_5f;
  undefined1 *local_58;
  undefined1 *puStack_50;
  size_t local_48;
  
  uVar5 = *param_2;
  uVar1 = param_2[1];
  do {
    while( true ) {
      rustls_pemfile::pemfile::read_one(&local_60,uVar5,uVar1);
      lVar2 = CONCAT71(uStack_5f,local_60);
      if (lVar2 == -1) {
        *param_1 = 0xfffffffffffffffe;
        return;
      }
      puVar3 = extraout_x1;
      puVar4 = local_58;
      if (lVar2 == -2) goto LAB_007a4144;
      if (lVar2 == 0) break;
      if (local_58 + -1 < (undefined1 *)0xfffffffffffffffe) {
        free(puStack_50);
      }
    }
  } while (local_58 == (undefined1 *)0xfffffffffffffffd);
  puVar3 = local_58;
  puVar4 = puStack_50;
  if (local_58 == &DAT_fffffffffffffffe) {
LAB_007a4144:
                    /* try { // try from 007a4144 to 007a4157 has its CatchHandler @ 007a424c */
    puVar3 = (undefined1 *)FUN_0076e4f4(0,puVar3,&DAT_002e3a7c,0x1c);
    if ((1 < ((ulong)puVar4 & 3) - 2) && (((ulong)puVar4 & 3) != 0)) {
      local_58 = puVar4 + -1;
      local_60 = 3;
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_58);
    }
    if (*param_4 != 0) {
                    /* try { // try from 007a4194 to 007a4197 has its CatchHandler @ 007a4244 */
      FUN_007a2ff8();
    }
    *param_4 = (long)puVar3;
    local_48 = 0xffffffffffffffff;
  }
  else {
    if ((long)local_48 < 0) {
      uVar5 = 0;
LAB_007a41d0:
                    /* try { // try from 007a41d0 to 007a41db has its CatchHandler @ 007a4268 */
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(uVar5,local_48);
    }
    if (local_48 == 0) {
      puVar3 = &DAT_00000001;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar5 = 1;
      puVar3 = (undefined1 *)FUN_004b25a4(local_48,1);
      if (puVar3 == (undefined1 *)0x0) goto LAB_007a41d0;
      memcpy(puVar3,puStack_50,local_48);
    }
    if (local_58 + -1 < &DAT_fffffffffffffffe) {
      free(puStack_50);
    }
  }
  *param_1 = local_48;
  param_1[1] = (size_t)puVar3;
  param_1[2] = local_48;
  return;
}


// ===== 007a4290  FUN_007a4290 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007a4290(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  long *plVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  long *local_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
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
  long local_2e0;
  undefined8 uStack_2d8;
  long *local_2d0;
  long *local_2c0;
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
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  long local_1b8;
  undefined8 local_1b0;
  long *plStack_1a8;
  long *local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
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
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long local_a0;
  undefined8 local_98;
  long *plStack_90;
  
  plVar6 = (long *)(*param_2 + 0x10);
  do {
    if (*plVar6 != 1) {
      ClearExclusiveLocal();
      if ((*(byte *)(param_2 + 2) & 1) != 0) {
        uVar10 = param_3[0x18];
        uVar30 = param_3[0x1b];
        uVar18 = param_3[0x1a];
        param_1[0x19] = param_3[0x19];
        param_1[0x18] = uVar10;
        param_1[0x1b] = uVar30;
        param_1[0x1a] = uVar18;
        uVar10 = param_3[0x1c];
        uVar30 = param_3[0x1f];
        uVar18 = param_3[0x1e];
        param_1[0x1d] = param_3[0x1d];
        param_1[0x1c] = uVar10;
        param_1[0x1f] = uVar30;
        param_1[0x1e] = uVar18;
        uVar30 = param_3[0x10];
        uVar18 = param_3[0x13];
        uVar10 = param_3[0x12];
        param_1[0x11] = param_3[0x11];
        param_1[0x10] = uVar30;
        param_1[0x13] = uVar18;
        param_1[0x12] = uVar10;
        uVar30 = param_3[0x14];
        uVar18 = param_3[0x17];
        uVar10 = param_3[0x16];
        param_1[0x15] = param_3[0x15];
        param_1[0x14] = uVar30;
        param_1[0x17] = uVar18;
        param_1[0x16] = uVar10;
        uVar30 = param_3[8];
        uVar18 = param_3[0xb];
        uVar10 = param_3[10];
        param_1[9] = param_3[9];
        param_1[8] = uVar30;
        param_1[0xb] = uVar18;
        param_1[10] = uVar10;
        uVar30 = param_3[0xc];
        uVar18 = param_3[0xf];
        uVar10 = param_3[0xe];
        param_1[0xd] = param_3[0xd];
        param_1[0xc] = uVar30;
        param_1[0xf] = uVar18;
        param_1[0xe] = uVar10;
        uVar30 = *param_3;
        uVar18 = param_3[3];
        uVar10 = param_3[2];
        param_1[1] = param_3[1];
        *param_1 = uVar30;
        param_1[3] = uVar18;
        param_1[2] = uVar10;
        uVar38 = param_3[5];
        uVar30 = param_3[4];
        uVar18 = param_3[7];
        uVar10 = param_3[6];
        goto LAB_007a4338;
      }
      break;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uStack_168 = _UNK_0029fad8;
  local_170 = _DAT_0029fad0;
  *(undefined1 *)(param_2 + 2) = 1;
  uStack_198 = 1;
  local_1a0 = (long *)0x1;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  plVar6 = (long *)FUN_004b25a4(0x140,8);
  if (plVar6 == (long *)0x0) {
                    /* try { // try from 007a4820 to 007a482b has its CatchHandler @ 007a48fc */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x140);
  }
  memcpy(plVar6,&local_1a0,0x140);
  do {
    lVar8 = *plVar6;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = lVar8 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    uVar7 = _UNK_0029fa78;
    lVar4 = _DAT_0029fa70;
  } while (cVar2 != '\0');
  if (lVar8 < 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x7a4854);
    (*pcVar5)();
  }
  uVar19 = param_3[0x19];
  uVar11 = param_3[0x18];
  uVar31 = param_3[0x1b];
  uVar26 = param_3[0x1a];
  uVar20 = param_3[0x1d];
  uVar12 = param_3[0x1c];
  uVar39 = param_3[0x1f];
  uVar35 = param_3[0x1e];
  uVar32 = param_3[0x11];
  uVar27 = param_3[0x10];
  uVar21 = param_3[0x13];
  uVar13 = param_3[0x12];
  uVar40 = param_3[0x15];
  uVar36 = param_3[0x14];
  uVar22 = param_3[0x17];
  uVar14 = param_3[0x16];
  uVar33 = param_3[9];
  uVar28 = param_3[8];
  uVar23 = param_3[0xb];
  uVar15 = param_3[10];
  uVar41 = param_3[0xd];
  uVar37 = param_3[0xc];
  uVar24 = param_3[0xf];
  uVar16 = param_3[0xe];
  uVar34 = param_3[1];
  plVar29 = (long *)*param_3;
  uVar25 = param_3[3];
  uVar17 = param_3[2];
  uVar38 = param_3[5];
  uVar30 = param_3[4];
  uVar18 = param_3[7];
  uVar10 = param_3[6];
  uStack_2d8 = _UNK_0029fa78;
  local_2e0 = _DAT_0029fa70;
  puVar1 = (ulong *)(param_2[1] + 0x1c0);
  uVar9 = *puVar1;
  while (local_3e0 = plVar29, uStack_3d8 = uVar34, uStack_3d0 = uVar17, uStack_3c8 = uVar25,
        local_3c0 = uVar30, uStack_3b8 = uVar38, local_3b0 = uVar10, uStack_3a8 = uVar18,
        local_3a0 = uVar28, uStack_398 = uVar33, local_390 = uVar15, uStack_388 = uVar23,
        local_380 = uVar37, uStack_378 = uVar41, local_370 = uVar16, uStack_368 = uVar24,
        local_360 = uVar27, uStack_358 = uVar32, local_350 = uVar13, uStack_348 = uVar21,
        local_340 = uVar36, uStack_338 = uVar40, local_330 = uVar14, uStack_328 = uVar22,
        local_320 = uVar11, uStack_318 = uVar19, local_310 = uVar26, uStack_308 = uVar31,
        local_300 = uVar12, uStack_2f8 = uVar20, local_2f0 = uVar35, uStack_2e8 = uVar39,
        local_2d0 = plVar6, (uVar9 & 1) == 0) {
    if (uVar9 == 0xfffffffffffffffe) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 007a4830 to 007a4833 has its CatchHandler @ 007a48e0 */
      std::process::abort();
    }
    while (*puVar1 == uVar9) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar9 + 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        memcpy(&local_1a0,&local_3e0,0x118);
                    /* try { // try from 007a47ec to 007a47f7 has its CatchHandler @ 007a48c4 */
        FUN_0079c6e4(param_2 + 1,&local_1a0);
        goto LAB_007a47f8;
      }
    }
    ClearExclusiveLocal();
    uVar9 = *puVar1;
  }
  if (lVar4 == -1) {
LAB_007a47f8:
    *param_1 = 0xffffffffffffffff;
    param_1[1] = plVar6;
  }
  else {
    puVar1 = (ulong *)(plVar6 + 6);
    do {
      uVar9 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar9 | 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    local_3e0 = plVar6;
    local_2c0 = (long *)uVar34;
    uStack_2b8 = uVar17;
    uStack_2b0 = uVar25;
    uStack_2a8 = uVar30;
    local_2a0 = uVar38;
    uStack_298 = uVar10;
    uStack_290 = uVar18;
    uStack_288 = uVar28;
    local_280 = uVar33;
    uStack_278 = uVar15;
    uStack_270 = uVar23;
    uStack_268 = uVar37;
    local_260 = uVar41;
    uStack_258 = uVar16;
    uStack_250 = uVar24;
    uStack_248 = uVar27;
    local_240 = uVar32;
    uStack_238 = uVar13;
    local_230 = uVar21;
    uStack_228 = uVar36;
    local_220 = uVar40;
    uStack_218 = uVar14;
    local_210 = uVar22;
    uStack_208 = uVar11;
    local_200 = uVar19;
    uStack_1f8 = uVar26;
    local_1f0 = uVar31;
    uStack_1e8 = uVar12;
    local_1e0 = uVar20;
    uStack_1d8 = uVar35;
    local_1d0 = uVar39;
    if ((uVar9 & 10) == 8) {
                    /* try { // try from 007a4534 to 007a4537 has its CatchHandler @ 007a4870 */
      (**(code **)(plVar6[2] + 0x10))(plVar6[3]);
    }
    if (((uint)uVar9 >> 1 & 1) != 0) {
      memcpy(&local_1a0,plVar6 + 7,0x108);
      plVar6[7] = -3;
      if (local_1a0 != (long *)0xfffffffffffffffd) {
                    /* try { // try from 007a4560 to 007a4567 has its CatchHandler @ 007a4870 */
        FUN_0079a540(&local_1a0);
      }
    }
    do {
      lVar8 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::oneshot::Inner<core[bcece726f298455b]::result::Result<http[b87e90c26fe47eb4]::response::Response<hyper[9f1bfd30b08ca095]::body::incoming::Incoming>,hyper[9f1bfd30b08ca095]::client::dispatch::TrySendError<http[b87e90c26fe47eb4]::request::Request<reqwest[6fed810f3e38d558]::async_impl::body::Body>>>>>>
      ::drop_slow(&local_3e0);
    }
    local_2e0 = 2;
    uStack_2d8 = uVar7;
    if (lVar4 == 2) {
      local_3e0 = plVar29;
      uStack_3d8 = uVar34;
      uStack_3d0 = uVar17;
      uStack_3c8 = uVar25;
      local_3c0 = uVar30;
      uStack_3b8 = uVar38;
      local_3b0 = uVar10;
      uStack_3a8 = uVar18;
      local_3a0 = uVar28;
      uStack_398 = uVar33;
      local_390 = uVar15;
      uStack_388 = uVar23;
      local_380 = uVar37;
      uStack_378 = uVar41;
      local_370 = uVar16;
      uStack_368 = uVar24;
      local_360 = uVar27;
      uStack_358 = uVar32;
      local_350 = uVar13;
      uStack_348 = uVar21;
      local_340 = uVar36;
      uStack_338 = uVar40;
      local_330 = uVar14;
      uStack_328 = uVar22;
      local_320 = uVar11;
      uStack_318 = uVar19;
      local_310 = uVar26;
      uStack_308 = uVar31;
      local_300 = uVar12;
      uStack_2f8 = uVar20;
      local_2f0 = uVar35;
      uStack_2e8 = uVar39;
      local_2d0 = plVar6;
                    /* try { // try from 007a4838 to 007a484f has its CatchHandler @ 007a48cc */
                    /* WARNING: Subroutine does not return */
      core::option::expect_failed
                (&DAT_002e3a98,0x14,&PTR_s__root__cargo_registry_src_index__00adceb0);
    }
    local_a0 = lVar4;
    local_98 = uVar7;
                    /* try { // try from 007a46b4 to 007a46bb has its CatchHandler @ 007a48cc */
    local_3e0 = plVar29;
    uStack_3d8 = uVar34;
    uStack_3d0 = uVar17;
    uStack_3c8 = uVar25;
    local_3c0 = uVar30;
    uStack_3b8 = uVar38;
    local_3b0 = uVar10;
    uStack_3a8 = uVar18;
    local_3a0 = uVar28;
    uStack_398 = uVar33;
    local_390 = uVar15;
    uStack_388 = uVar23;
    local_380 = uVar37;
    uStack_378 = uVar41;
    local_370 = uVar16;
    uStack_368 = uVar24;
    local_360 = uVar27;
    uStack_358 = uVar32;
    local_350 = uVar13;
    uStack_348 = uVar21;
    local_340 = uVar36;
    uStack_338 = uVar40;
    local_330 = uVar14;
    uStack_328 = uVar22;
    local_320 = uVar11;
    uStack_318 = uVar19;
    local_310 = uVar26;
    uStack_308 = uVar31;
    local_300 = uVar12;
    uStack_2f8 = uVar20;
    local_2f0 = uVar35;
    uStack_2e8 = uVar39;
    local_2d0 = plVar6;
    local_1a0 = plVar29;
    uStack_198 = uVar34;
    uStack_190 = uVar17;
    uStack_188 = uVar25;
    local_180 = uVar30;
    uStack_178 = uVar38;
    local_170 = uVar10;
    uStack_168 = uVar18;
    local_160 = uVar28;
    uStack_158 = uVar33;
    uStack_150 = uVar15;
    uStack_148 = uVar23;
    local_140 = uVar37;
    uStack_138 = uVar41;
    uStack_130 = uVar16;
    uStack_128 = uVar24;
    local_120 = uVar27;
    uStack_118 = uVar32;
    uStack_110 = uVar13;
    uStack_108 = uVar21;
    local_100 = uVar36;
    uStack_f8 = uVar40;
    uStack_f0 = uVar14;
    uStack_e8 = uVar22;
    local_e0 = uVar11;
    uStack_d8 = uVar19;
    local_d0 = uVar26;
    uStack_c8 = uVar31;
    local_c0 = uVar12;
    uStack_b8 = uVar20;
    local_b0 = uVar35;
    uStack_a8 = uVar39;
    plStack_90 = plVar6;
    FUN_007a23e8(&local_a0);
    local_1b8 = local_2e0;
    local_2e0 = 2;
    if (local_1b8 != 2) {
      uStack_1f8 = uStack_318;
      local_200 = local_320;
      uStack_1e8 = uStack_308;
      local_1f0 = local_310;
      uStack_1d8 = uStack_2f8;
      local_1e0 = local_300;
      uStack_1c8 = uStack_2e8;
      local_1d0 = local_2f0;
      uStack_238 = uStack_358;
      local_240 = local_360;
      uStack_228 = uStack_348;
      local_230 = local_350;
      uStack_218 = uStack_338;
      local_220 = local_340;
      uStack_208 = uStack_328;
      local_210 = local_330;
      uStack_278 = uStack_398;
      local_280 = local_3a0;
      uStack_268 = uStack_388;
      uStack_270 = local_390;
      uStack_258 = uStack_378;
      local_260 = local_380;
      uStack_248 = uStack_368;
      uStack_250 = local_370;
      uStack_2b8 = uStack_3d8;
      local_2c0 = local_3e0;
      uStack_2a8 = uStack_3c8;
      uStack_2b0 = uStack_3d0;
      uStack_298 = uStack_3b8;
      local_2a0 = local_3c0;
      uStack_288 = uStack_3a8;
      uStack_290 = local_3b0;
      plStack_1a8 = local_2d0;
      local_1b0 = uStack_2d8;
                    /* try { // try from 007a471c to 007a472f has its CatchHandler @ 007a489c */
      uVar7 = <hyper::error::hyper::error::Error>::new_canceled();
      local_a0 = FUN_0079fe98(uVar7,&DAT_002e3b04,0x11);
      uStack_d8 = uStack_318;
      local_e0 = local_320;
      uStack_c8 = uStack_308;
      local_d0 = local_310;
      uStack_b8 = uStack_2f8;
      local_c0 = local_300;
      uStack_a8 = uStack_2e8;
      local_b0 = local_2f0;
      uStack_118 = uStack_358;
      local_120 = local_360;
      uStack_108 = uStack_348;
      uStack_110 = local_350;
      uStack_f8 = uStack_338;
      local_100 = local_340;
      uStack_e8 = uStack_328;
      uStack_f0 = local_330;
      uStack_158 = uStack_398;
      local_160 = local_3a0;
      uStack_148 = uStack_388;
      uStack_150 = local_390;
      uStack_138 = uStack_378;
      local_140 = local_380;
      uStack_128 = uStack_368;
      uStack_130 = local_370;
      uStack_198 = uStack_3d8;
      local_1a0 = local_3e0;
      uStack_188 = uStack_3c8;
      uStack_190 = uStack_3d0;
      uStack_178 = uStack_3b8;
      local_180 = local_3c0;
      uStack_168 = uStack_3a8;
      local_170 = local_3b0;
                    /* try { // try from 007a4774 to 007a477f has its CatchHandler @ 007a4868 */
      FUN_007a66c0(&local_1b8,&local_1a0);
      if (local_2e0 != 2) {
                    /* try { // try from 007a478c to 007a4793 has its CatchHandler @ 007a4854 */
        FUN_007a1524(&local_3e0);
        FUN_007a23e8(&local_2e0);
      }
    }
    param_1[0x19] = uVar19;
    param_1[0x18] = uVar11;
    param_1[0x1b] = uVar31;
    param_1[0x1a] = uVar26;
    param_1[0x1d] = uVar20;
    param_1[0x1c] = uVar12;
    param_1[0x1f] = uVar39;
    param_1[0x1e] = uVar35;
    param_1[0x11] = uVar32;
    param_1[0x10] = uVar27;
    param_1[0x13] = uVar21;
    param_1[0x12] = uVar13;
    param_1[0x15] = uVar40;
    param_1[0x14] = uVar36;
    param_1[0x17] = uVar22;
    param_1[0x16] = uVar14;
    param_1[9] = uVar33;
    param_1[8] = uVar28;
    param_1[0xb] = uVar23;
    param_1[10] = uVar15;
    param_1[0xd] = uVar41;
    param_1[0xc] = uVar37;
    param_1[0xf] = uVar24;
    param_1[0xe] = uVar16;
    param_1[1] = uVar34;
    *param_1 = plVar29;
    param_1[3] = uVar25;
    param_1[2] = uVar17;
LAB_007a4338:
    param_1[5] = uVar38;
    param_1[4] = uVar30;
    param_1[7] = uVar18;
    param_1[6] = uVar10;
  }
  return;
}


// ===== 007a4920  FUN_007a4920 =====

void FUN_007a4920(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong local_d0;
  undefined *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulong local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  ulong local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (-0x7ffffffffffffffd < *(long *)(param_1 + 0x1a0)) {
    uStack_78 = param_2[1];
    local_80 = *param_2;
    uStack_68 = param_2[3];
    local_70 = param_2[2];
    if (*(long *)(param_1 + 0x1a0) == -2) {
      local_d0 = *(ulong *)(param_1 + 0x1a8);
      if (local_70 <= local_d0) {
        uStack_48 = param_2[1];
        local_50 = *param_2;
        uStack_38 = param_2[3];
        uStack_40 = param_2[2];
        *(ulong *)(param_1 + 0x1a8) = local_d0 - local_70;
      }
      else {
        uStack_48 = param_2[1];
        local_50 = *param_2;
        uStack_38 = param_2[3];
        uStack_40 = param_2[2];
        *(undefined8 *)(param_1 + 0x1a8) = 0;
      }
      uVar2 = (ulong)(local_70 > local_d0);
    }
    else {
                    /* try { // try from 007a4980 to 007a498b has its CatchHandler @ 007a4a60 */
      <hyper::proto::h1::encode::[0]::hyper::proto::h1::encode::ChunkSize>::new(&local_d0,local_70);
      uStack_48 = param_2[1];
      local_50 = *param_2;
      uStack_38 = param_2[3];
      uStack_40 = param_2[2];
      uStack_58 = (undefined4)uStack_c0;
      local_60 = local_c8;
      uVar2 = 2;
    }
    uStack_c0 = uStack_48;
    local_c8 = (undefined *)local_50;
    uStack_98 = CONCAT44(uStack_54,uStack_58);
    uStack_b0 = uStack_38;
    local_b8 = uStack_40;
    local_a0 = local_60;
    local_90 = &DAT_002e2d16;
    uStack_88 = 2;
    local_a8 = local_d0;
    local_d0 = uVar2;
    FUN_007cf024(param_1 + 0x10,&local_d0);
    if ((*(long *)(param_1 + 0x1a0) == -2) && (*(long *)(param_1 + 0x1a8) == 0)) {
      uVar1 = 0x8000000000000002;
      if (*(char *)(param_1 + 0x1b8) != '\0') {
        uVar1 = 0x8000000000000003;
      }
      *(undefined8 *)(param_1 + 0x1a0) = uVar1;
    }
    return;
  }
  local_d0 = param_1 + 0x1a0;
  local_c8 = PTR_fmt_00b00ec8;
                    /* try { // try from 007a4a44 to 007a4a5b has its CatchHandler @ 007a4a84 */
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002b0bea,&local_d0,&PTR_s__root__cargo_registry_src_index__00adcf28);
}


// ===== 007a4aa8  FUN_007a4aa8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007a4aa8(long param_1,long *param_2,undefined **param_3,long param_4)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  void *__ptr;
  long *plVar10;
  undefined **ppuVar11;
  undefined1 auVar12 [16];
  undefined *local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined **local_130;
  undefined *puStack_128;
  long *local_120;
  long local_118;
  long local_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long local_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined **local_d0;
  undefined *puStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined **local_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined **local_80;
  undefined *puStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined1 uStack_51;
  
  cVar1 = *(char *)(param_1 + 0x1fd);
  if (cVar1 != '\x02') {
    *(undefined1 *)(param_1 + 0x1fd) = 1;
  }
  uVar5 = _UNK_002c02a0;
  uVar9 = _DAT_002c0298;
  puVar4 = _UNK_002c0290;
  ppuVar11 = _s__002c0288;
  if (*(char *)(param_1 + 0x1fe) == '\x02') {
    if (cVar1 == '\x02') {
      local_80 = &PTR_FUN_00adcf00;
      puStack_78 = &DAT_002e3afa;
      puStack_98 = _UNK_002c0290;
      local_a0 = _s__002c0288;
      uStack_88 = _UNK_002c02a0;
      uStack_90 = _DAT_002c0298;
      local_60 = 0;
      uStack_68 = _UNK_0029f328;
      local_70 = _DAT_0029f320;
      FUN_007a01f0(&local_130,param_2,&local_a0,&local_80);
      if ((char)local_110 == -1) {
LAB_007a4fac:
                    /* try { // try from 007a4fac to 007a4fcf has its CatchHandler @ 007a5184 */
                    /* WARNING: Subroutine does not return */
        core::result::unwrap_failed
                  (&DAT_002e3aca,0x17,&uStack_51,&DAT_00adcee0,
                   &PTR_s__root__cargo_registry_src_index__00adcf40);
      }
      local_b0 = local_110;
      puStack_c8 = puStack_128;
      local_d0 = local_130;
      uStack_b8 = local_118;
      local_c0 = local_120;
      if (((uint)local_110 & 0xff) != 2) {
        (*(code *)local_130[4])(&uStack_b8,puStack_128,local_120);
      }
    }
  }
  else if (*(char *)(param_1 + 0x1fe) == '\x01') {
    puStack_128 = _UNK_002c0290;
    local_130 = _s__002c0288;
    local_118 = _UNK_002c02a0;
    local_120 = (long *)_DAT_002c0298;
                    /* try { // try from 007a4b10 to 007a4c93 has its CatchHandler @ 007a5184 */
    lVar6 = FUN_007c2f68(param_2,&local_130);
    if ((lVar6 == 0) || (uVar7 = hyper::headers::connection_keep_alive(), (uVar7 & 1) == 0)) {
      if ((char)param_2[0x1b] == '\x02') {
        if (*(char *)(param_1 + 0x1fd) != '\x02') {
          local_60 = 0;
          puStack_98 = puVar4;
          local_a0 = ppuVar11;
          uStack_88 = uVar5;
          uStack_90 = uVar9;
          local_80 = &PTR_FUN_00adcf00;
          puStack_78 = &DAT_002e3ac0;
          uStack_68 = _UNK_0029f528;
          local_70 = _DAT_0029f520;
          FUN_007a01f0(&local_130,param_2,&local_a0,&local_80);
          if ((char)local_110 == -1) goto LAB_007a4fac;
          local_b0 = local_110;
          puStack_c8 = puStack_128;
          local_d0 = local_130;
          uStack_b8 = local_118;
          local_c0 = local_120;
          if (((uint)local_110 & 0xff) != 2) {
            (*(code *)local_130[4])(&uStack_b8,puStack_128,local_120);
          }
        }
      }
      else if ((char)param_2[0x1b] == '\x01') {
        *(undefined1 *)(param_1 + 0x1fd) = 2;
      }
    }
    *(undefined1 *)(param_2 + 0x1b) = 1;
  }
  local_118 = param_1 + 0x1c0;
  local_110 = CONCAT71(local_110._1_7_,*(undefined1 *)(param_1 + 0x1f9));
  local_130 = param_3;
  puStack_128 = (undefined *)param_4;
  local_120 = param_2;
  <hyper::proto::h1::role::Client_as_hyper::proto::h1::Http1Transaction>::encode
            (&local_d0,&local_130,param_1 + 0x10);
  puVar4 = puStack_c8;
  if (local_d0 == (undefined **)0xfffffffffffffffd) {
                    /* try { // try from 007a4ca8 to 007a4cab has its CatchHandler @ 007a503c */
    FUN_007a0ab8(*(undefined8 *)(param_1 + 0x1d8));
    *(undefined **)(param_1 + 0x1d8) = puVar4;
    if ((-0x7ffffffffffffffd < *(long *)(param_1 + 0x1a0)) && (1 < *(long *)(param_1 + 0x1a0) + 2U))
    {
      lVar6 = *(long *)(param_1 + 0x1b0) + 1;
      lVar8 = *(long *)(param_1 + 0x1a8) + 0x18;
      while (lVar6 = lVar6 + -1, lVar6 != 0) {
                    /* try { // try from 007a4cf4 to 007a4cf7 has its CatchHandler @ 007a512c */
        (**(code **)(*(long *)(lVar8 + -0x18) + 0x20))
                  (lVar8,*(undefined8 *)(lVar8 + -0x10),*(undefined8 *)(lVar8 + -8));
        lVar8 = lVar8 + 0x28;
      }
      if (*(long *)(param_1 + 0x1a0) != 0) {
        free(*(void **)(param_1 + 0x1a8));
      }
    }
    bVar2 = *(byte *)(param_2 + 0x17);
    *(undefined8 *)(param_1 + 0x1a0) = 0x8000000000000003;
    if ((9 < bVar2) && (param_2[0x19] != 0)) {
      free((void *)param_2[0x18]);
    }
                    /* try { // try from 007a4e20 to 007a4e27 has its CatchHandler @ 007a5008 */
    FUN_007a343c(param_2 + 0xc);
                    /* try { // try from 007a4e28 to 007a4e2f has its CatchHandler @ 007a5004 */
    FUN_007a37b0(param_2);
    ppuVar11 = (undefined **)0xfffffffffffffffd;
    __ptr = (void *)param_2[0x1a];
  }
  else {
    plVar10 = (long *)(param_1 + 0xd8);
    puStack_78 = puStack_c8;
    local_80 = local_d0;
    uStack_68 = uStack_b8;
    local_70 = local_c0;
    lStack_108 = param_2[5];
    local_110 = param_2[4];
    lStack_f8 = param_2[7];
    lStack_100 = param_2[6];
    lStack_e8 = param_2[9];
    local_f0 = param_2[8];
    lStack_d8 = param_2[0xb];
    lStack_e0 = param_2[10];
    puStack_128 = (undefined *)param_2[1];
    local_130 = (undefined **)*param_2;
    local_118 = param_2[3];
    local_120 = (long *)param_2[2];
    if (*plVar10 != -1) {
                    /* try { // try from 007a4d30 to 007a4d37 has its CatchHandler @ 007a4fe4 */
      FUN_007a37b0(plVar10);
    }
    *(long *)(param_1 + 0x100) = lStack_108;
    *(long *)(param_1 + 0xf8) = local_110;
    *(long *)(param_1 + 0x110) = lStack_f8;
    *(long *)(param_1 + 0x108) = lStack_100;
    *(long *)(param_1 + 0x120) = lStack_e8;
    *(long *)(param_1 + 0x118) = local_f0;
    *(long *)(param_1 + 0x130) = lStack_d8;
    *(long *)(param_1 + 0x128) = lStack_e0;
    *(undefined **)(param_1 + 0xe0) = puStack_128;
    *plVar10 = (long)local_130;
    *(long *)(param_1 + 0xf0) = local_118;
    *(long **)(param_1 + 0xe8) = local_120;
                    /* try { // try from 007a4d50 to 007a4d57 has its CatchHandler @ 007a5028 */
    auVar12 = FUN_007c92dc(param_2 + 0x1a);
    plVar10 = *(long **)(param_1 + 0x1e0);
    if (plVar10 != (long *)0x0) {
      do {
        lVar6 = *plVar10;
        cVar1 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 + -1 == 0) {
        DataMemoryBarrier(2,1);
                    /* try { // try from 007a4d80 to 007a4d87 has its CatchHandler @ 007a4fd4 */
        <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
        drop_slow(param_1 + 0x1e0);
      }
    }
    local_140 = uStack_68;
    uStack_148 = local_70;
    local_150 = puStack_78;
    ppuVar11 = local_80;
    bVar2 = *(byte *)(param_2 + 0x17);
    *(undefined1 (*) [16])(param_1 + 0x1e0) = auVar12;
    if ((9 < bVar2) && (param_2[0x19] != 0)) {
      free((void *)param_2[0x18]);
    }
                    /* try { // try from 007a4dc0 to 007a4dc7 has its CatchHandler @ 007a5018 */
    FUN_007a343c(param_2 + 0xc);
    __ptr = (void *)param_2[0x1a];
  }
  if (__ptr != (void *)0x0) {
                    /* try { // try from 007a4e3c to 007a4e43 has its CatchHandler @ 007a5048 */
    FUN_007b3bec(__ptr);
    free(__ptr);
  }
  if (ppuVar11 != (undefined **)0xfffffffffffffffd) {
    local_120 = (long *)uStack_148;
    local_118 = local_140;
    if ((ppuVar11 == (undefined **)0xfffffffffffffffe) && (local_150 == (undefined *)0x0)) {
      local_118._0_1_ = (char)local_140;
      uVar9 = 0x8000000000000002;
      if ((char)local_118 != '\0') {
        uVar9 = 0x8000000000000003;
      }
      if ((-0x7ffffffffffffffd < *(long *)(param_1 + 0x1a0)) &&
         (1 < *(long *)(param_1 + 0x1a0) + 2U)) {
        lVar6 = *(long *)(param_1 + 0x1b0) + 1;
        local_130 = (undefined **)0xfffffffffffffffe;
        puStack_128 = (undefined *)0x0;
        lVar8 = *(long *)(param_1 + 0x1a8) + 0x18;
        while (lVar6 = lVar6 + -1, lVar6 != 0) {
                    /* try { // try from 007a4ed8 to 007a4edb has its CatchHandler @ 007a50cc */
          (**(code **)(*(long *)(lVar8 + -0x18) + 0x20))
                    (lVar8,*(undefined8 *)(lVar8 + -0x10),*(undefined8 *)(lVar8 + -8));
          lVar8 = lVar8 + 0x28;
        }
        if (*(long *)(param_1 + 0x1a0) != 0) {
          free(*(void **)(param_1 + 0x1a8));
        }
      }
      *(undefined8 *)(param_1 + 0x1a0) = uVar9;
    }
    else {
      if ((-0x7ffffffffffffffd < *(long *)(param_1 + 0x1a0)) &&
         (1 < *(long *)(param_1 + 0x1a0) + 2U)) {
        lVar6 = *(long *)(param_1 + 0x1b0) + 1;
        lVar8 = *(long *)(param_1 + 0x1a8) + 0x18;
        local_130 = ppuVar11;
        puStack_128 = local_150;
        while (lVar6 = lVar6 + -1, lVar6 != 0) {
                    /* try { // try from 007a4f2c to 007a4f2f has its CatchHandler @ 007a5064 */
          (**(code **)(*(long *)(lVar8 + -0x18) + 0x20))
                    (lVar8,*(undefined8 *)(lVar8 + -0x10),*(undefined8 *)(lVar8 + -8));
          lVar8 = lVar8 + 0x28;
        }
        if (*(long *)(param_1 + 0x1a0) != 0) {
          free(*(void **)(param_1 + 0x1a8));
        }
      }
      *(undefined ***)(param_1 + 0x1a0) = ppuVar11;
      *(undefined8 *)(param_1 + 0x1b8) = local_140;
      *(undefined8 *)(param_1 + 0x1b0) = uStack_148;
      *(undefined **)(param_1 + 0x1a8) = local_150;
    }
  }
  return;
}


// ===== 007a51b4  FUN_007a51b4 =====

void FUN_007a51b4(long param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if (((*(long *)(param_1 + 0x138) != 0) || (-0x7ffffffffffffffd < *(long *)(param_1 + 0x1a0))) ||
     ((*(byte *)(param_1 + 0xb1) & 1) != 0)) {
    return;
  }
  if (*(long *)(param_1 + 0x98) == 0) {
    auVar2 = FUN_007d4f8c();
    if (auVar2._0_8_ != 0) {
      if (auVar2._0_8_ == 2) {
        return;
      }
                    /* try { // try from 007a522c to 007a5233 has its CatchHandler @ 007a52a8 */
      <hyper::proto::h1::conn::[5]::hyper::proto::h1::conn::State>::close(param_1 + 0xb8);
      uVar1 = <hyper::error::hyper::error::Error>::new_io(auVar2._8_8_);
                    /* try { // try from 007a5244 to 007a524b has its CatchHandler @ 007a52a0 */
      FUN_007a0ab8(*(undefined8 *)(param_1 + 0x1d8));
      *(undefined8 *)(param_1 + 0x1d8) = uVar1;
      *(undefined1 *)(param_1 + 0x1fb) = 1;
      return;
    }
    if (auVar2._8_8_ == 0) {
      if (*(char *)(param_1 + 0x1fd) == '\0') {
        <hyper::proto::h1::conn::[5]::hyper::proto::h1::conn::State>::close(param_1 + 0xb8);
        return;
      }
      <hyper::proto::h1::conn::[5]::hyper::proto::h1::conn::State>::close_read(param_1 + 0xb8);
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x1fb) = 1;
  return;
}


// ===== 007a52c0  FUN_007a52c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007a52c0(long *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long extraout_x8;
  ulong uVar6;
  undefined8 unaff_x23;
  long lVar7;
  undefined8 unaff_x24;
  long *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  ulong uVar8;
  undefined8 local_1a0;
  undefined1 local_194;
  long *local_190;
  long local_188;
  long local_180;
  long lStack_178;
  long local_170;
  long lStack_168;
  long local_160;
  long lStack_158;
  long local_150;
  long lStack_148;
  long local_140;
  long lStack_138;
  long *local_130;
  code *pcStack_128;
  long local_120;
  long lStack_118;
  long local_110;
  long lStack_108;
  long local_100;
  long lStack_f8;
  long local_f0;
  long lStack_e8;
  long local_e0;
  long lStack_d8;
  long local_d0;
  long lStack_c8;
  long local_c0;
  long lStack_b8;
  long local_b0;
  long lStack_a8;
  long local_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  plVar1 = (long *)(param_2 + 0x138);
  if (*(long *)(param_2 + 0x138) == 1) {
    if (*(long *)(param_2 + 0x1a0) == -0x8000000000000000) {
      lVar7 = *(long *)(param_2 + 0x20);
      if ((ulong)(*(long *)(param_2 + 0x10) - lVar7) < 0x19) {
        FUN_0079be54(param_2 + 0x10,lVar7,0x19,1,1);
        lVar7 = *(long *)(param_2 + 0x20);
      }
      uVar5 = _UNK_002e3af2;
      uVar4 = _DAT_002e3ae1;
      uVar3 = CONCAT17(UNK_002e3af1,_DAT_002e3aea);
      puVar2 = (undefined8 *)(*(long *)(param_2 + 0x18) + lVar7);
      puVar2[1] = CONCAT71(_DAT_002e3aea,UNK_002e3ae9);
      *puVar2 = uVar4;
      *(undefined8 *)((long)puVar2 + 0x11) = uVar5;
      *(undefined8 *)((long)puVar2 + 9) = uVar3;
      *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x20) + 0x19;
    }
    uVar8 = *(ulong *)(param_2 + 0x140);
    lVar7 = uVar8 - 2;
    if (uVar8 < 2) {
      lVar7 = 1;
    }
    if (lVar7 == 0) {
      uVar6 = *(ulong *)(param_2 + 0x148);
      uVar8 = 2;
      lVar7 = *plVar1;
    }
    else if (lVar7 == 1) {
      local_194 = *(undefined1 *)(param_2 + 0x198);
      unaff_x27 = *(undefined8 *)(param_2 + 0x160);
      local_1a0 = *(undefined8 *)(param_2 + 0x168);
      if (*(long *)(param_2 + 0x170) == 0) {
        local_130 = (long *)0x0;
      }
      else {
        <bytes::bytes_mut::BytesMut_as_core::clone::Clone>::clone(&local_130,param_2 + 0x170);
        uStack_78 = local_120;
        local_80 = pcStack_128;
        local_70 = lStack_118;
      }
      uVar6 = *(ulong *)(param_2 + 0x148);
      unaff_x24 = *(undefined8 *)(param_2 + 0x150);
      uVar8 = uVar8 & 1;
      unaff_x26 = *(undefined8 *)(param_2 + 400);
      unaff_x23 = *(undefined8 *)(param_2 + 0x158);
      lVar7 = *plVar1;
      unaff_x25 = local_130;
    }
    else {
      uVar6 = (ulong)*(byte *)(param_2 + 0x148);
      uVar8 = 4;
      lVar7 = *plVar1;
    }
    if ((((lVar7 == 1) || (lVar7 == 2)) && (*(ulong *)(param_2 + 0x140) < 2)) &&
       (*(long *)(param_2 + 0x170) != 0)) {
                    /* try { // try from 007a5538 to 007a553b has its CatchHandler @ 007a5670 */
      <bytes::bytes_mut::BytesMut_as_core::ops::drop::Drop>::drop(param_2 + 0x170);
    }
    *(undefined8 *)(param_2 + 0x138) = 2;
    *(ulong *)(param_2 + 0x140) = uVar8;
    *(ulong *)(param_2 + 0x148) = uVar6;
    *(undefined8 *)(param_2 + 0x150) = unaff_x24;
    *(undefined8 *)(param_2 + 0x168) = local_1a0;
    *(long **)(param_2 + 0x170) = unaff_x25;
    *(undefined8 *)(param_2 + 0x180) = uStack_78;
    *(undefined8 *)(param_2 + 0x178) = local_80;
    *(undefined8 *)(param_2 + 0x158) = unaff_x23;
    *(undefined8 *)(param_2 + 0x160) = unaff_x27;
    *(undefined1 *)(param_2 + 0x198) = local_194;
    *(undefined8 *)(param_2 + 0x188) = local_70;
    *(undefined8 *)(param_2 + 400) = unaff_x26;
    FUN_007a52c0(param_1,param_2,param_3);
    return;
  }
  if (*(long *)(param_2 + 0x138) != 2) {
    pcStack_128 = FUN_007a7868;
    local_130 = plVar1;
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              (&DAT_002aaf5c,&local_130,&PTR_s__root__cargo_registry_src_index__00adcf58);
  }
  FUN_0076e838(&local_190,param_2 + 0x140,param_3,param_2);
  if (local_190 == (long *)0xfffffffffffffffd) {
    *param_1 = 3;
    return;
  }
  if (local_190 == (long *)0xfffffffffffffffe) {
LAB_007a540c:
    lVar7 = 4;
LAB_007a5420:
    lStack_a8 = lStack_158;
    local_b0 = local_160;
    lStack_b8 = lStack_168;
    local_c0 = local_170;
    lStack_98 = lStack_148;
    local_a0 = local_150;
    lStack_88 = lStack_138;
    local_90 = local_140;
    lStack_c8 = lStack_178;
    local_d0 = local_180;
  }
  else {
    local_130 = local_190;
    pcStack_128 = (code *)local_188;
    lStack_f8 = lStack_158;
    local_100 = local_160;
    lStack_e8 = lStack_148;
    local_f0 = local_150;
    lStack_d8 = lStack_138;
    local_e0 = local_140;
    lStack_118 = lStack_178;
    local_120 = local_180;
    lStack_108 = lStack_168;
    local_110 = local_170;
    if (local_190 != (long *)0xffffffffffffffff) goto LAB_007a540c;
    lVar7 = *(ulong *)(param_2 + 0x140) - 2;
    if (*(ulong *)(param_2 + 0x140) < 2) {
      lVar7 = 1;
    }
    if (lVar7 != 0) {
      if (lVar7 != 1) {
        if ((*(byte *)(param_2 + 0x148) & 1) != 0) goto LAB_007a55c8;
        goto LAB_007a55f4;
      }
      if (*(char *)(param_2 + 0x198) != '\f') goto LAB_007a55f4;
LAB_007a55c8:
      if (lStack_178 == 0) {
        lVar7 = 3;
        goto LAB_007a5614;
      }
      local_190 = (long *)0xffffffffffffffff;
      lVar7 = 3;
      goto LAB_007a5420;
    }
    if (*(long *)(param_2 + 0x148) == 0) goto LAB_007a55c8;
LAB_007a55f4:
    if (lStack_178 != 0) goto LAB_007a548c;
    lVar7 = 4;
LAB_007a5614:
    FUN_007a10a0(&local_130);
    local_190 = (long *)0xfffffffffffffffd;
    local_188 = extraout_x8;
  }
  lStack_f8 = lStack_a8;
  local_100 = local_b0;
  lStack_e8 = lStack_98;
  local_f0 = local_a0;
  lStack_d8 = lStack_88;
  local_e0 = local_90;
  lStack_118 = lStack_c8;
  local_120 = local_d0;
  lStack_108 = lStack_b8;
  local_110 = local_c0;
  local_130 = local_190;
  pcStack_128 = (code *)local_188;
  if (((*plVar1 == 1) || (*plVar1 == 2)) &&
     ((*(ulong *)(param_2 + 0x140) < 2 && (*(long *)(param_2 + 0x170) != 0)))) {
                    /* try { // try from 007a5470 to 007a5473 has its CatchHandler @ 007a5664 */
    <bytes::bytes_mut::BytesMut_as_core::ops::drop::Drop>::drop(param_2 + 0x170);
  }
  *plVar1 = lVar7;
                    /* try { // try from 007a5478 to 007a548b has its CatchHandler @ 007a56a8 */
  FUN_007a0098(param_2 + 0xb8);
  FUN_007a51b4(param_2,param_3);
LAB_007a548c:
  param_1[5] = lStack_108;
  param_1[4] = local_110;
  param_1[7] = lStack_f8;
  param_1[6] = local_100;
  param_1[9] = lStack_e8;
  param_1[8] = local_f0;
  param_1[0xb] = lStack_d8;
  param_1[10] = local_e0;
  param_1[1] = (long)pcStack_128;
  *param_1 = (long)local_130;
  param_1[3] = lStack_118;
  param_1[2] = local_120;
  return;
}


// ===== 007a56c0  FUN_007a56c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007a56c0(long *param_1,long param_2,ulong param_3)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  bool bVar4;
  ulong uVar5;
  long *plVar6;
  code *pcVar7;
  long lVar8;
  void *pvVar9;
  undefined1 uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  byte bVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  ulong *local_160;
  code *pcStack_158;
  ulong *local_150;
  code *pcStack_148;
  long local_140;
  undefined8 uStack_138;
  long local_130;
  long lStack_128;
  long local_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long local_100;
  undefined8 uStack_f8;
  ulong local_f0;
  undefined8 local_e8;
  ulong *local_e0;
  undefined8 *puStack_d8;
  long lStack_d0;
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
  long lStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong local_60;
  ulong local_58;
  
  local_150 = (ulong *)(param_2 + 0xd8);
  pcStack_148 = (code *)(param_2 + 0x1c0);
  local_140 = param_2 + 0x1e0;
  puVar11 = (undefined8 *)(param_2 + 0xb8);
  pcStack_158 = *(code **)(param_2 + 0xc0);
  local_160 = (ulong *)*puVar11;
  uStack_138 = CONCAT17(*(undefined1 *)(param_2 + 0x1f8),
                        CONCAT43(*(undefined4 *)(param_2 + 500),
                                 (int3)*(undefined4 *)(param_2 + 0x1f1)));
  local_130 = CONCAT71(local_130._1_7_,*(undefined1 *)(param_2 + 0x1fa));
  FUN_007cf7b4(&local_e0,param_2,param_3,&local_160);
  if (local_e0 == (ulong *)0xffffffffffffffff) {
    cVar2 = *(char *)(param_2 + 0x1fd);
                    /* try { // try from 007a5760 to 007a57db has its CatchHandler @ 007a5ce0 */
    <hyper::proto::h1::conn::[5]::hyper::proto::h1::conn::State>::close_read(puVar11);
    local_58 = *(ulong *)(param_2 + 0x98);
    if (local_58 != 0) {
      uVar5 = 0;
      do {
        cVar1 = *(char *)(*(long *)(param_2 + 0x90) + uVar5);
        if ((cVar1 != '\r') && (cVar1 != '\n')) {
          uVar12 = uVar5;
          local_60 = uVar5;
          if (local_58 < uVar5) {
            local_160 = &local_60;
            pcStack_158 = FUN_007d6358;
            local_150 = &local_58;
            pcStack_148 = FUN_007d6358;
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_fmt
                      (&DAT_002afeea,&local_160,&PTR_s__root__cargo_registry_src_index__00adf778);
          }
          break;
        }
        uVar5 = uVar5 + 1;
        uVar12 = local_58;
      } while (local_58 != uVar5);
                    /* try { // try from 007a591c to 007a593f has its CatchHandler @ 007a5ce0 */
      <bytes::bytes_mut::bytes::bytes_mut::BytesMut>::advance_unchecked(param_2 + 0x90,uVar12);
      local_58 = *(ulong *)(param_2 + 0x98);
    }
    if (((*(char *)(puStack_d8 + 2) != '\0') && (cVar2 == '\0')) && (local_58 == 0)) {
      <hyper::proto::h1::conn::[5]::hyper::proto::h1::conn::State>::close_write(puVar11);
      pvVar9 = (void *)*puStack_d8;
      *param_1 = -2;
      if (pvVar9 != (void *)0x0) {
        puVar11 = (undefined8 *)puStack_d8[1];
        pcVar7 = (code *)*puVar11;
        if (pcVar7 != (code *)0x0) {
                    /* try { // try from 007a595c to 007a5963 has its CatchHandler @ 007a5c90 */
          (*pcVar7)(pvVar9);
        }
        if (puVar11[1] != 0) {
          free(pvVar9);
        }
      }
      free(puStack_d8);
      return;
    }
    puVar11 = puStack_d8;
    if (((*(long *)(param_2 + 0x1a0) == -0x8000000000000000) && (0x17 < local_58)) &&
       (plVar6 = *(long **)(param_2 + 0x90),
       (*plVar6 == 0x5448202a20495250 && plVar6[1] == 0xa0d302e322f5054) &&
       plVar6[2] == 0xa0d0a0d4d530a0d)) {
                    /* try { // try from 007a59f0 to 007a59f3 has its CatchHandler @ 007a5c20 */
      puVar11 = (undefined8 *)<hyper::error::hyper::error::Error>::new_version_h2();
      pvVar9 = (void *)*puStack_d8;
      if (pvVar9 != (void *)0x0) {
        puVar14 = (undefined8 *)puStack_d8[1];
        pcVar7 = (code *)*puVar14;
        if (pcVar7 != (code *)0x0) {
                    /* try { // try from 007a5a0c to 007a5a13 has its CatchHandler @ 007a5c08 */
          (*pcVar7)(pvVar9);
        }
        if (puVar14[1] != 0) {
          free(pvVar9);
        }
      }
      free(puStack_d8);
    }
    *param_1 = -1;
    param_1[1] = (long)puVar11;
    return;
  }
  if (local_e0 == (ulong *)0xfffffffffffffffe) {
    *param_1 = -3;
    return;
  }
  plVar6 = *(long **)(param_2 + 0x1e0);
  *(undefined1 *)(param_2 + 0x1fa) = 0;
  lStack_118 = lStack_98;
  local_120 = local_a0;
  lStack_108 = lStack_88;
  lStack_110 = lStack_90;
  uStack_f8 = lStack_78;
  local_100 = local_80;
  local_e8 = uStack_68;
  local_f0 = uStack_70;
  pcStack_158 = (code *)puStack_d8;
  local_160 = local_e0;
  pcStack_148 = (code *)lStack_c8;
  local_150 = (ulong *)lStack_d0;
  uStack_138 = lStack_b8;
  local_140 = local_c0;
  lStack_128 = lStack_a8;
  local_130 = lStack_b0;
  if (plVar6 != (long *)0x0) {
    do {
      lVar8 = *plVar6;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 007a5824 to 007a582b has its CatchHandler @ 007a5cc0 */
      <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
      drop_slow(param_2 + 0x1e0);
    }
  }
  uVar5 = local_f0;
  *(undefined8 *)(param_2 + 0x1e0) = 0;
  if (*(char *)(param_2 + 0x1fd) == '\x02') {
    if ((local_e8 & 0x100) != 0) goto LAB_007a5844;
LAB_007a58a8:
    *(undefined1 *)(param_2 + 0x1fd) = 2;
    *(byte *)(param_2 + 0x1fe) = uStack_f8._2_1_;
  }
  else {
    *(undefined1 *)(param_2 + 0x1fd) = 1;
    if ((local_e8 & 0x100) == 0) goto LAB_007a58a8;
LAB_007a5844:
    *(byte *)(param_2 + 0x1fe) = uStack_f8._2_1_;
  }
  if (local_f0 == 0) {
    bVar13 = local_e8._2_1_ << 1;
    if (((*(long *)(param_2 + 0x138) == 1) || (*(long *)(param_2 + 0x138) == 2)) &&
       ((*(ulong *)(param_2 + 0x140) < 2 && (*(long *)(param_2 + 0x170) != 0)))) {
                    /* try { // try from 007a58f4 to 007a58f7 has its CatchHandler @ 007a5c80 */
      <bytes::bytes_mut::BytesMut_as_core::ops::drop::Drop>::drop(param_2 + 0x170);
    }
    *(undefined8 *)(param_2 + 0x138) = 3;
                    /* try { // try from 007a5900 to 007a5913 has its CatchHandler @ 007a5ccc */
    FUN_007a0098(puVar11);
    FUN_007a51b4(param_2,param_3);
    goto LAB_007a5b6c;
  }
  bVar13 = local_e8._2_1_ << 1;
  if (((char)local_e8 == '\x01') && (1 < uStack_f8._2_1_)) {
    if (local_f0 == 0xfffffffffffffffe) {
      uVar15 = *(undefined8 *)(param_2 + 0xb8);
      uVar12 = *(ulong *)(param_2 + 0xc0);
      lVar8 = *(long *)(param_2 + 0x138);
      param_3 = uVar12;
joined_r0x007a5a98:
      uVar10 = (undefined1)uVar12;
      param_3 = param_3 >> 8;
      uVar3 = uVar10;
      if (lVar8 == 1) goto LAB_007a5b14;
LAB_007a5b0c:
      uVar10 = uVar3;
      if (lVar8 == 2) goto LAB_007a5b14;
    }
    else {
      if (local_f0 != 0xffffffffffffffff) {
        uVar15 = 2;
        uVar12 = local_f0 & 0xffffffff;
        lVar8 = *(long *)(param_2 + 0x138);
        param_3 = local_f0;
        goto joined_r0x007a5a98;
      }
      uVar10 = 0;
      uVar15 = 4;
      lVar8 = *(long *)(param_2 + 0x138);
      uVar3 = 0;
      if (lVar8 != 1) goto LAB_007a5b0c;
LAB_007a5b14:
      if ((*(ulong *)(param_2 + 0x140) < 2) && (*(long *)(param_2 + 0x170) != 0)) {
                    /* try { // try from 007a5b2c to 007a5b2f has its CatchHandler @ 007a5c34 */
        <bytes::bytes_mut::BytesMut_as_core::ops::drop::Drop>::drop(param_2 + 0x170);
      }
    }
    *(undefined8 *)(param_2 + 0x138) = 1;
    *(undefined8 *)(param_2 + 0x140) = uVar15;
    bVar13 = bVar13 | 1;
  }
  else {
    if (local_f0 == 0xfffffffffffffffe) {
      uVar15 = *(undefined8 *)(param_2 + 0xb8);
      uVar12 = *(ulong *)(param_2 + 0xc0);
      lVar8 = *(long *)(param_2 + 0x138);
      param_3 = uVar12;
joined_r0x007a5a80:
      uVar10 = (undefined1)uVar12;
      param_3 = param_3 >> 8;
      uVar3 = uVar10;
      if (lVar8 == 1) goto LAB_007a5ac0;
LAB_007a5ab8:
      uVar10 = uVar3;
      if (lVar8 == 2) goto LAB_007a5ac0;
    }
    else {
      if (local_f0 != 0xffffffffffffffff) {
        uVar15 = 2;
        uVar12 = local_f0 & 0xffffffff;
        lVar8 = *(long *)(param_2 + 0x138);
        param_3 = local_f0;
        goto joined_r0x007a5a80;
      }
      uVar10 = 0;
      uVar15 = 4;
      lVar8 = *(long *)(param_2 + 0x138);
      uVar3 = 0;
      if (lVar8 != 1) goto LAB_007a5ab8;
LAB_007a5ac0:
      if ((*(ulong *)(param_2 + 0x140) < 2) && (*(long *)(param_2 + 0x170) != 0)) {
                    /* try { // try from 007a5ad8 to 007a5adb has its CatchHandler @ 007a5c40 */
        <bytes::bytes_mut::BytesMut_as_core::ops::drop::Drop>::drop(param_2 + 0x170);
      }
    }
    *(undefined8 *)(param_2 + 0x138) = 2;
    *(undefined8 *)(param_2 + 0x140) = uVar15;
  }
  *(undefined1 *)(param_2 + 0x148) = uVar10;
  *(int *)(param_2 + 0x149) = (int)param_3;
  *(char *)(param_2 + 0x14f) = (char)(param_3 >> 0x30);
  *(short *)(param_2 + 0x14d) = (short)(param_3 >> 0x20);
  *(undefined8 *)(param_2 + 0x150) = 0;
  *(undefined8 *)(param_2 + 400) = 0;
  *(undefined1 *)(param_2 + 0x198) = 0;
  *(undefined8 *)(param_2 + 0x160) = 0;
  *(undefined8 *)(param_2 + 0x168) = 0;
  *(undefined8 *)(param_2 + 0x170) = 0;
LAB_007a5b6c:
  puStack_d8 = (undefined8 *)_UNK_002bfbf0;
  local_e0 = _DAT_002bfbe8;
  lStack_c8 = _UNK_002bfc00;
  lStack_d0 = _DAT_002bfbf8;
                    /* try { // try from 007a5b7c to 007a5b87 has its CatchHandler @ 007a5ccc */
  lVar8 = FUN_007c2f68(&local_160,&local_e0);
  if ((lVar8 == 0) || (*(long *)(lVar8 + 0x10) != 8)) {
    bVar4 = false;
  }
  else {
    bVar4 = **(long **)(lVar8 + 8) == 0x7372656c69617274;
  }
  *(bool *)(param_2 + 0x1fc) = bVar4;
  param_1[0xd] = uStack_f8;
  param_1[0xc] = local_100;
  param_1[9] = lStack_118;
  param_1[8] = local_120;
  param_1[0xb] = lStack_108;
  param_1[10] = lStack_110;
  param_1[0xe] = uVar5;
  *(byte *)(param_1 + 0xf) = bVar13;
  param_1[1] = (long)pcStack_158;
  *param_1 = (long)local_160;
  param_1[3] = (long)pcStack_148;
  param_1[2] = (long)local_150;
  param_1[5] = uStack_138;
  param_1[4] = local_140;
  param_1[7] = lStack_128;
  param_1[6] = local_130;
  return;
}


// ===== 007a5cf8  FUN_007a5cf8 =====

void FUN_007a5cf8(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long *local_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar1 = (long *)(param_1 + 0x1a0);
  if (-0x7ffffffffffffffd < *(long *)(param_1 + 0x1a0)) {
    uStack_78 = param_2[5];
    local_80 = param_2[4];
    uStack_68 = param_2[7];
    uStack_70 = param_2[6];
    uStack_58 = param_2[9];
    local_60 = param_2[8];
    uStack_48 = param_2[0xb];
    uStack_50 = param_2[10];
    puStack_98 = (undefined *)param_2[1];
    local_a0 = (long *)*param_2;
    uStack_88 = param_2[3];
    uStack_90 = param_2[2];
    FUN_007940d4(&local_f0,param_1 + 0x1a0,&local_a0,*(undefined1 *)(param_1 + 0x1f9));
    if (local_f0 != (long *)0xffffffffffffffff) {
      uStack_78 = uStack_c8;
      local_80 = local_d0;
      uStack_68 = uStack_b8;
      uStack_70 = uStack_c0;
      uStack_58 = uStack_a8;
      local_60 = local_b0;
      puStack_98 = (undefined *)uStack_e8;
      local_a0 = local_f0;
      uStack_88 = uStack_d8;
      uStack_90 = uStack_e0;
      FUN_007cf024(param_1 + 0x10,&local_a0);
      lVar3 = -0x7ffffffffffffffe;
      if (*(char *)(param_1 + 0x1b8) != '\0') {
        lVar3 = -0x7ffffffffffffffd;
      }
      if ((-0x7ffffffffffffffd < *(long *)(param_1 + 0x1a0)) &&
         (1 < *(long *)(param_1 + 0x1a0) + 2U)) {
        lVar4 = *(long *)(param_1 + 0x1b0) + 1;
        lVar2 = *(long *)(param_1 + 0x1a8) + 0x18;
        while (lVar4 = lVar4 + -1, lVar4 != 0) {
                    /* try { // try from 007a5ddc to 007a5ddf has its CatchHandler @ 007a5e4c */
          (**(code **)(*(long *)(lVar2 + -0x18) + 0x20))
                    (lVar2,*(undefined8 *)(lVar2 + -0x10),*(undefined8 *)(lVar2 + -8));
          lVar2 = lVar2 + 0x28;
        }
        if (*plVar1 != 0) {
          free(*(void **)(param_1 + 0x1a8));
        }
      }
      *plVar1 = lVar3;
    }
    return;
  }
  puStack_98 = PTR_fmt_00b00ec8;
                    /* try { // try from 007a5e30 to 007a5e47 has its CatchHandler @ 007a5ea8 */
  local_a0 = plVar1;
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002a93d6,&local_a0,&PTR_s__root__cargo_registry_src_index__00adcf70);
}


// ===== 007a5ec0  FUN_007a5ec0 =====

void FUN_007a5ec0(long param_1,undefined8 *param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *local_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar1 = (long *)(param_1 + 0x1a0);
  if (-0x7ffffffffffffffd < *(long *)(param_1 + 0x1a0)) {
    puStack_58 = (undefined *)param_2[1];
    local_60 = (long *)*param_2;
    uStack_48 = param_2[3];
    uStack_50 = param_2[2];
    iVar2 = FUN_00793f94(param_1 + 0x1a0,&local_60,param_1 + 0x10);
    lVar4 = -0x7ffffffffffffffe;
    if (iVar2 == 0) {
      lVar4 = -0x7ffffffffffffffd;
    }
    if ((-0x7ffffffffffffffd < *(long *)(param_1 + 0x1a0)) && (1 < *(long *)(param_1 + 0x1a0) + 2U))
    {
      lVar5 = *(long *)(param_1 + 0x1b0) + 1;
      lVar3 = *(long *)(param_1 + 0x1a8) + 0x18;
      while (lVar5 = lVar5 + -1, lVar5 != 0) {
                    /* try { // try from 007a5f58 to 007a5f5b has its CatchHandler @ 007a5fc8 */
        (**(code **)(*(long *)(lVar3 + -0x18) + 0x20))
                  (lVar3,*(undefined8 *)(lVar3 + -0x10),*(undefined8 *)(lVar3 + -8));
        lVar3 = lVar3 + 0x28;
      }
      if (*plVar1 != 0) {
        free(*(void **)(param_1 + 0x1a8));
      }
    }
    *plVar1 = lVar4;
    return;
  }
  puStack_58 = PTR_fmt_00b00ec8;
                    /* try { // try from 007a5fac to 007a5fc3 has its CatchHandler @ 007a6024 */
  local_60 = plVar1;
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002b0bea,&local_60,&PTR_s__root__cargo_registry_src_index__00adcf88);
}


// ===== 007a604c  FUN_007a604c =====

undefined1  [16] FUN_007a604c(long param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulong uVar5;
  long unaff_x19;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if (*(long *)(param_1 + 0x138) != 4) {
    if ((*(long *)(param_1 + 0x138) == 0) && (*(long *)(param_1 + 0x1a0) == -0x8000000000000000)) {
      if (*(long *)(param_1 + 0x98) == 0) {
        auVar6 = FUN_007d4f8c(param_1);
        unaff_x19 = auVar6._8_8_;
        if (auVar6._0_8_ != 0) {
          if (auVar6._0_8_ != 2) {
                    /* try { // try from 007a6178 to 007a617f has its CatchHandler @ 007a61cc */
            <hyper::proto::h1::conn::[5]::hyper::proto::h1::conn::State>::close(param_1 + 0xb8);
            goto LAB_007a6180;
          }
          goto LAB_007a6124;
        }
        if (unaff_x19 == 0) {
          if (*(char *)(param_1 + 0x1fd) == '\0') {
            uVar5 = 0;
          }
          else {
            uVar5 = <hyper::error::hyper::error::Error>::new_incomplete();
          }
                    /* try { // try from 007a61a8 to 007a61af has its CatchHandler @ 007a61b4 */
          <hyper::proto::h1::conn::[5]::hyper::proto::h1::conn::State>::close_read(param_1 + 0xb8);
          goto LAB_007a60f4;
        }
      }
      uVar5 = <hyper::error::hyper::error::Error>::new_unexpected_message();
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar5;
      return auVar1 << 0x40;
    }
    if (((*(byte *)(param_1 + 0x1f0) & 1) != 0) || (*(long *)(param_1 + 0x98) != 0)) {
      auVar6._8_8_ = unaff_x19;
      auVar6._0_8_ = 1;
      return auVar6;
    }
    auVar6 = FUN_007d4f8c(param_1);
    unaff_x19 = auVar6._8_8_;
    if (auVar6._0_8_ == 0) {
      if (unaff_x19 == 0) {
        <hyper::proto::h1::conn::[5]::hyper::proto::h1::conn::State>::close_read(param_1 + 0xb8);
        uVar5 = <hyper::error::hyper::error::Error>::new_incomplete();
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar5;
        return auVar3 << 0x40;
      }
      uVar5 = 0;
LAB_007a60f4:
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar5;
      return auVar2 << 0x40;
    }
    if (auVar6._0_8_ != 2) {
                    /* try { // try from 007a60d0 to 007a60d7 has its CatchHandler @ 007a61e0 */
      <hyper::proto::h1::conn::[5]::hyper::proto::h1::conn::State>::close(param_1 + 0xb8);
LAB_007a6180:
      uVar5 = <hyper::error::hyper::error::Error>::new_io(unaff_x19);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar5;
      return auVar4 << 0x40;
    }
  }
LAB_007a6124:
  auVar7._8_8_ = unaff_x19;
  auVar7._0_8_ = 1;
  return auVar7;
}


// ===== 007a61f8  FUN_007a61f8 =====

void FUN_007a61f8(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 unaff_x21;
  ulong uVar3;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long unaff_x25;
  ulong uVar4;
  undefined8 unaff_x28;
  undefined8 local_100;
  undefined1 local_f4;
  long local_f0;
  ulong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined1 auStack_d0 [64];
  ulong local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 local_70;
  long local_68;
  
  if (*(long *)(param_1 + 0x138) == 1) {
    uVar3 = *(ulong *)(param_1 + 0x140);
    lVar1 = uVar3 - 2;
    if (uVar3 < 2) {
      lVar1 = 1;
    }
    if (lVar1 == 0) {
      uVar2 = *(ulong *)(param_1 + 0x148);
      uVar4 = 2;
joined_r0x007a62cc:
      if (1 < uVar3) goto LAB_007a631c;
LAB_007a630c:
      lVar1 = *(long *)(param_1 + 0x170);
joined_r0x007a643c:
      if (lVar1 != 0) {
                    /* try { // try from 007a6318 to 007a631b has its CatchHandler @ 007a6444 */
        <bytes::bytes_mut::BytesMut_as_core::ops::drop::Drop>::drop(param_1 + 0x170);
      }
    }
    else {
      if (lVar1 == 1) {
        local_f4 = *(undefined1 *)(param_1 + 0x198);
        unaff_x23 = *(undefined8 *)(param_1 + 0x160);
        local_100 = *(undefined8 *)(param_1 + 0x168);
        if (*(long *)(param_1 + 0x170) == 0) {
          uVar2 = *(ulong *)(param_1 + 0x148);
          unaff_x28 = *(undefined8 *)(param_1 + 0x150);
          unaff_x25 = 0;
          unaff_x24 = *(undefined8 *)(param_1 + 400);
          unaff_x21 = *(undefined8 *)(param_1 + 0x158);
          uVar4 = uVar3 & 1;
          goto joined_r0x007a62e8;
        }
        <bytes::bytes_mut::BytesMut_as_core::clone::Clone>::clone(&local_f0,param_1 + 0x170);
        uVar2 = *(ulong *)(param_1 + 0x148);
        unaff_x28 = *(undefined8 *)(param_1 + 0x150);
        uVar4 = uVar3 & 1;
        unaff_x24 = *(undefined8 *)(param_1 + 400);
        unaff_x21 = *(undefined8 *)(param_1 + 0x158);
        uStack_88 = uStack_e0;
        local_90 = local_e8;
        local_80 = local_d8;
        unaff_x25 = local_f0;
        if (*(long *)(param_1 + 0x138) != 2) {
          if (*(long *)(param_1 + 0x138) == 1) {
            uVar3 = *(ulong *)(param_1 + 0x140);
            goto joined_r0x007a62cc;
          }
          goto LAB_007a631c;
        }
        if (1 < *(ulong *)(param_1 + 0x140)) goto LAB_007a631c;
        lVar1 = *(long *)(param_1 + 0x170);
        goto joined_r0x007a643c;
      }
      uVar2 = (ulong)*(byte *)(param_1 + 0x148);
      uVar4 = 4;
joined_r0x007a62e8:
      if (uVar3 < 2) goto LAB_007a630c;
    }
LAB_007a631c:
    *(undefined8 *)(param_1 + 0x138) = 2;
    *(ulong *)(param_1 + 0x140) = uVar4;
    *(ulong *)(param_1 + 0x148) = uVar2;
    *(undefined8 *)(param_1 + 0x150) = unaff_x28;
    *(undefined8 *)(param_1 + 0x168) = local_100;
    *(long *)(param_1 + 0x170) = unaff_x25;
    *(undefined8 *)(param_1 + 0x180) = uStack_88;
    *(ulong *)(param_1 + 0x178) = local_90;
    *(undefined8 *)(param_1 + 0x158) = unaff_x21;
    *(undefined8 *)(param_1 + 0x160) = unaff_x23;
    *(undefined8 *)(param_1 + 0x188) = local_80;
    *(undefined8 *)(param_1 + 400) = unaff_x24;
    *(undefined1 *)(param_1 + 0x198) = local_f4;
  }
  FUN_007a52c0(&local_f0,param_1,param_2);
  if ((local_f0 != 3) && (local_f0 != -3)) {
    if (local_f0 == -2) {
      if ((1 < (local_e8 & 3) - 2) && ((local_e8 & 3) != 0)) {
        local_68 = local_e8 - 1;
        local_70 = 3;
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_68);
        lVar1 = *(long *)(param_1 + 0x138);
        goto joined_r0x007a63d0;
      }
    }
    else {
      if (local_f0 == -1) {
        (**(code **)(local_e8 + 0x20))(auStack_d0,uStack_e0,local_d8);
        lVar1 = *(long *)(param_1 + 0x138);
        goto joined_r0x007a63d0;
      }
      FUN_007a37b0(&local_f0);
    }
  }
  lVar1 = *(long *)(param_1 + 0x138);
joined_r0x007a63d0:
  if ((lVar1 != 0) && (lVar1 != 3)) {
    <hyper::proto::h1::conn::[5]::hyper::proto::h1::conn::State>::close_read(param_1 + 0xb8);
  }
  return;
}


// ===== 007a647c  FUN_007a647c =====

long * FUN_007a647c(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  void *__ptr;
  long lVar6;
  undefined8 *puVar7;
  undefined8 local_90;
  undefined *puStack_88;
  undefined8 local_80;
  
  if (-0x7ffffffffffffffd < *(long *)(param_1 + 0x1a0)) {
    if (*(long *)(param_1 + 0x1a0) == -2) {
      lVar6 = *(long *)(param_1 + 0x1a8);
      if (lVar6 != 0) {
        *(undefined8 *)(param_1 + 0x1a0) = 0x8000000000000003;
        plVar1 = (long *)<hyper::error::hyper::error::Error>::new_body_write_aborted();
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        plVar2 = (long *)FUN_004b25a4(8,8);
        if (plVar2 == (long *)0x0) {
                    /* try { // try from 007a6610 to 007a661b has its CatchHandler @ 007a66a8 */
                    /* WARNING: Subroutine does not return */
          alloc::alloc::handle_alloc_error(8,8);
        }
        __ptr = (void *)*plVar1;
        *plVar2 = lVar6;
        if (__ptr != (void *)0x0) {
          puVar7 = (undefined8 *)plVar1[1];
          pcVar4 = (code *)*puVar7;
          if (pcVar4 != (code *)0x0) {
                    /* try { // try from 007a64fc to 007a6503 has its CatchHandler @ 007a6620 */
            (*pcVar4)(__ptr);
          }
          if (puVar7[1] != 0) {
            free(__ptr);
          }
        }
        *plVar1 = (long)plVar2;
        plVar1[1] = (long)&DAT_00adf0a8;
        return plVar1;
      }
      uVar5 = 0x8000000000000002;
      if (*(char *)(param_1 + 0x1b8) != '\0') {
        uVar5 = 0x8000000000000003;
      }
    }
    else {
      local_90 = 3;
      puStack_88 = &DAT_002e3aff;
      local_80 = 5;
      FUN_007cf024(param_1 + 0x10,&local_90);
      uVar5 = 0x8000000000000002;
      if (*(char *)(param_1 + 0x1b8) != '\0') {
        uVar5 = 0x8000000000000003;
      }
      if ((-0x7ffffffffffffffd < *(long *)(param_1 + 0x1a0)) &&
         (1 < *(long *)(param_1 + 0x1a0) + 2U)) {
        lVar6 = *(long *)(param_1 + 0x1b0) + 1;
        lVar3 = *(long *)(param_1 + 0x1a8) + 0x18;
        while (lVar6 = lVar6 + -1, lVar6 != 0) {
                    /* try { // try from 007a65ac to 007a65af has its CatchHandler @ 007a664c */
          (**(code **)(*(long *)(lVar3 + -0x18) + 0x20))
                    (lVar3,*(undefined8 *)(lVar3 + -0x10),*(undefined8 *)(lVar3 + -8));
          lVar3 = lVar3 + 0x28;
        }
        if (*(long *)(param_1 + 0x1a0) != 0) {
          free(*(void **)(param_1 + 0x1a8));
        }
      }
    }
    *(undefined8 *)(param_1 + 0x1a0) = uVar5;
  }
  return (long *)0x0;
}


// ===== 007a66c0  FUN_007a66c0 =====

void FUN_007a66c0(long *param_1,long *param_2)

{
  uint uVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  long local_250 [33];
  long local_148;
  long local_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long local_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long local_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long local_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long local_c0;
  long lStack_b8;
  long lStack_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  long lStack_90;
  long local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  long local_68;
  long lStack_60;
  long local_58;
  long lStack_50;
  long local_48;
  long lStack_40;
  
  if (*param_1 == 1) {
    uVar1 = *(uint *)(param_1 + 1);
    lVar3 = param_1[2];
    param_1[1] = 0;
    if ((uVar1 & 1) == 0) {
      ppuVar2 = &PTR_s__root__cargo_registry_src_index__00adcfd0;
LAB_007a685c:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 007a685c to 007a685f has its CatchHandler @ 007a6880 */
      core::option::unwrap_failed(ppuVar2);
    }
    local_140 = *param_2;
    local_148 = lVar3;
    if (local_140 == -2) {
      lStack_d8 = param_2[0xe];
      local_e0 = param_2[0xd];
      lStack_c8 = param_2[0x10];
      lStack_d0 = param_2[0xf];
      lStack_b8 = param_2[0x12];
      local_c0 = param_2[0x11];
      lStack_118 = param_2[6];
      local_120 = param_2[5];
      lStack_108 = param_2[8];
      lStack_110 = param_2[7];
      lStack_f8 = param_2[10];
      local_100 = param_2[9];
      lStack_e8 = param_2[0xc];
      lStack_f0 = param_2[0xb];
      local_140 = param_2[1];
      lStack_128 = param_2[4];
      lStack_130 = param_2[3];
      lStack_138 = param_2[2];
    }
    else {
      local_e0 = param_2[0xc];
      lStack_e8 = param_2[0xb];
      lStack_d0 = param_2[0xe];
      lStack_d8 = param_2[0xd];
      local_c0 = param_2[0x10];
      lStack_c8 = param_2[0xf];
      lStack_b0 = param_2[0x12];
      lStack_b8 = param_2[0x11];
      local_120 = param_2[4];
      lStack_128 = param_2[3];
      lStack_110 = param_2[6];
      lStack_118 = param_2[5];
      lStack_130 = param_2[2];
      lStack_138 = param_2[1];
      local_100 = param_2[8];
      lStack_108 = param_2[7];
      lStack_f0 = param_2[10];
      lStack_f8 = param_2[9];
      lVar4 = param_2[0x20];
      local_48 = param_2[0x1f];
      lStack_70 = param_2[0x1a];
      local_78 = param_2[0x19];
      lStack_60 = param_2[0x1c];
      local_68 = param_2[0x1b];
      lStack_50 = param_2[0x1e];
      local_58 = param_2[0x1d];
      lStack_a0 = param_2[0x14];
      local_a8 = param_2[0x13];
      lStack_90 = param_2[0x16];
      local_98 = param_2[0x15];
      lStack_80 = param_2[0x18];
      local_88 = param_2[0x17];
      lStack_40 = lVar4;
      if (local_140 != -1) {
                    /* try { // try from 007a6804 to 007a680b has its CatchHandler @ 007a6864 */
        FUN_007a1524(&local_140);
      }
      local_140 = -1;
      lStack_138 = lVar4;
    }
                    /* try { // try from 007a6814 to 007a6823 has its CatchHandler @ 007a6874 */
    FUN_0079ceb8(local_250,lVar3,&local_140);
                    /* try { // try from 007a6824 to 007a682b has its CatchHandler @ 007a6878 */
    FUN_007a0fd8(local_250);
  }
  else {
    lVar3 = param_1[1];
    lVar4 = param_1[2];
    param_1[1] = 0;
    if (lVar3 != 1) {
      ppuVar2 = &PTR_s__root__cargo_registry_src_index__00adcfb8;
      goto LAB_007a685c;
    }
    memcpy(&local_140,param_2,0x108);
                    /* try { // try from 007a6758 to 007a677b has its CatchHandler @ 007a6878 */
    FUN_0079cb0c(local_250,lVar4,&local_140);
    if (local_250[0] != -3) {
      FUN_007a0df8(local_250);
    }
  }
  FUN_007a23e8(param_1);
  return;
}


// ===== 007a68a0  FUN_007a68a0 =====

void FUN_007a68a0(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  char *pcVar2;
  long lVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  long local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
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
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
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
  undefined8 local_48;
  undefined8 uStack_40;
  
  FUN_0079d0a0(&local_378);
  if (local_278 == -2) {
    lVar8 = *(long *)(param_2 + 8);
    puVar1 = (undefined8 *)(lVar8 + 0x10);
    do {
      uVar7 = *puVar1;
      cVar6 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    cVar6 = <want::State_as_core::convert::From<usize>>::from(uVar7);
    if (cVar6 == '\x02') {
      pcVar2 = (char *)(lVar8 + 0x28);
      do {
        cVar6 = *pcVar2;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
        if (bVar4) {
          *pcVar2 = '\x01';
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0' || cVar6 != '\0');
      lVar3 = *(long *)(lVar8 + 0x18);
      *(undefined8 *)(lVar8 + 0x18) = 0;
      *(undefined4 *)(lVar8 + 0x28) = 0;
      if (lVar3 != 0) {
        (**(code **)(lVar3 + 8))(*(undefined8 *)(lVar8 + 0x20));
      }
    }
    param_1[0x20] = 0xffffffffffffffff;
    return;
  }
  if (local_278 == -1) {
    local_278 = 2;
  }
  else {
    uStack_88 = uStack_2b0;
    local_90 = local_2b8;
    uStack_78 = uStack_2a0;
    uStack_80 = local_2a8;
    uStack_68 = uStack_290;
    local_70 = local_298;
    uStack_58 = uStack_280;
    uStack_60 = local_288;
    uStack_c8 = uStack_2f0;
    local_d0 = local_2f8;
    uStack_b8 = uStack_2e0;
    uStack_c0 = local_2e8;
    uStack_a8 = uStack_2d0;
    local_b0 = local_2d8;
    uStack_98 = uStack_2c0;
    uStack_a0 = local_2c8;
    uStack_108 = uStack_330;
    local_110 = local_338;
    uStack_f8 = uStack_320;
    uStack_100 = local_328;
    uStack_e8 = uStack_310;
    local_f0 = local_318;
    uStack_d8 = uStack_300;
    uStack_e0 = local_308;
    uStack_148 = uStack_370;
    local_150 = local_378;
    uStack_138 = uStack_360;
    uStack_140 = local_368;
    uStack_40 = uStack_268;
    local_48 = local_270;
    uStack_128 = uStack_350;
    local_130 = local_358;
    uStack_118 = uStack_340;
    uStack_120 = local_348;
    local_50 = 2;
    if (local_278 == 2) {
                    /* try { // try from 007a6ab4 to 007a6acb has its CatchHandler @ 007a6ad0 */
                    /* WARNING: Subroutine does not return */
      core::option::expect_failed
                (&DAT_002e3a98,0x14,&PTR_s__root__cargo_registry_src_index__00adcec8);
    }
    uStack_178 = uStack_2a0;
    local_180 = local_2a8;
    uStack_168 = uStack_290;
    local_170 = local_298;
    uStack_158 = uStack_280;
    local_160 = local_288;
    uStack_1b8 = uStack_2e0;
    local_1c0 = local_2e8;
    uStack_1a8 = uStack_2d0;
    local_1b0 = local_2d8;
    uStack_198 = uStack_2c0;
    local_1a0 = local_2c8;
    uStack_188 = uStack_2b0;
    local_190 = local_2b8;
    uStack_1f8 = uStack_320;
    local_200 = local_328;
    uStack_1e8 = uStack_310;
    local_1f0 = local_318;
    uStack_1d8 = uStack_300;
    local_1e0 = local_308;
    uStack_1c8 = uStack_2f0;
    local_1d0 = local_2f8;
    uStack_238 = uStack_360;
    local_240 = local_368;
    uStack_228 = uStack_350;
    local_230 = local_358;
    uStack_218 = uStack_340;
    local_220 = local_348;
    uStack_208 = uStack_330;
    local_210 = local_338;
    uStack_258 = uStack_268;
    local_260 = local_270;
    uStack_248 = uStack_370;
    local_250 = local_378;
  }
  param_1[0x20] = local_278;
  param_1[0x19] = uStack_188;
  param_1[0x18] = local_190;
  param_1[0x1b] = uStack_178;
  param_1[0x1a] = local_180;
  param_1[0x1d] = uStack_168;
  param_1[0x1c] = local_170;
  param_1[0x1f] = uStack_158;
  param_1[0x1e] = local_160;
  param_1[0x11] = uStack_1c8;
  param_1[0x10] = local_1d0;
  param_1[0x13] = uStack_1b8;
  param_1[0x12] = local_1c0;
  param_1[0x15] = uStack_1a8;
  param_1[0x14] = local_1b0;
  param_1[0x17] = uStack_198;
  param_1[0x16] = local_1a0;
  param_1[9] = uStack_208;
  param_1[8] = local_210;
  param_1[0xb] = uStack_1f8;
  param_1[10] = local_200;
  param_1[0xd] = uStack_1e8;
  param_1[0xc] = local_1f0;
  param_1[0xf] = uStack_1d8;
  param_1[0xe] = local_1e0;
  param_1[1] = uStack_248;
  *param_1 = local_250;
  param_1[3] = uStack_238;
  param_1[2] = local_240;
  param_1[5] = uStack_228;
  param_1[4] = local_230;
  param_1[7] = uStack_218;
  param_1[6] = local_220;
  param_1[0x22] = uStack_258;
  param_1[0x21] = local_260;
  return;
}


// ===== 007a6ae8  FUN_007a6ae8 =====

bool FUN_007a6ae8(long param_1,undefined2 param_2,long *param_3,long *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined6 uStack_36;
  
  uVar3 = *(ulong *)(param_1 + 0x28);
  if (uVar3 >> 0xf == 0) {
    lVar6 = param_3[1];
    lVar4 = *param_3;
    lVar9 = param_3[3];
    lVar8 = param_3[2];
    lVar1 = param_4[4];
    lVar11 = param_4[1];
    lVar10 = *param_4;
    lVar7 = param_4[3];
    lVar5 = param_4[2];
    if (uVar3 == *(ulong *)(param_1 + 0x18)) {
                    /* try { // try from 007a6b70 to 007a6b73 has its CatchHandler @ 007a6bd4 */
      <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<http[b87e90c26fe47eb4]::header::map::Bucket<http[b87e90c26fe47eb4]::header::value::HeaderValue>>>
      ::grow_one();
    }
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x20) + uVar3 * 0x68);
    puVar2[3] = lVar10;
    puVar2[2] = uStack_88;
    puVar2[5] = lVar5;
    puVar2[4] = lVar11;
    puVar2[1] = uStack_90;
    *puVar2 = 0;
    puVar2[0xc] = CONCAT62(uStack_36,param_2);
    puVar2[9] = lVar6;
    puVar2[8] = lVar4;
    puVar2[0xb] = lVar9;
    puVar2[10] = lVar8;
    puVar2[7] = lVar1;
    puVar2[6] = lVar7;
    *(ulong *)(param_1 + 0x28) = uVar3 + 1;
  }
  else {
                    /* try { // try from 007a6b18 to 007a6b1f has its CatchHandler @ 007a6be8 */
    (**(code **)(*param_4 + 0x20))(param_4 + 3,param_4[1],param_4[2]);
    if (*param_3 != 0) {
      (**(code **)(*param_3 + 0x20))(param_3 + 3,param_3[1],param_3[2]);
    }
  }
  return (uVar3 & 0xffffffffffff8000) != 0;
}


// ===== 007a6c10  FUN_007a6c10 =====

void FUN_007a6c10(void)

{
  return;
}


// ===== 007a6c14  FUN_007a6c14 =====

void FUN_007a6c14(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  param_1[2] = param_4;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_00adcf00;
  param_1[1] = param_3;
  return;
}


// ===== 007a6c28  FUN_007a6c28 =====

undefined8 FUN_007a6c28(void)

{
  return 0;
}


// ===== 007a6c30  FUN_007a6c30 =====

void FUN_007a6c30(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar3 = (undefined8 *)FUN_004b25a4(0x10,8);
  if (puVar3 != (undefined8 *)0x0) {
    lVar4 = *(long *)(lVar2 + 0x10);
    *puVar3 = param_2;
    puVar3[1] = param_3;
                    /* WARNING: Could not recover jumptable at 0x007a6ca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x18))
              (lVar1 + (lVar4 - 1U & 0xfffffffffffffff0) + 0x10,puVar3,&UNK_00adcdc0);
    return;
  }
                    /* try { // try from 007a6ca4 to 007a6caf has its CatchHandler @ 007a6cb4 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x10);
}


// ===== 007a6ccc  FUN_007a6ccc =====

void FUN_007a6ccc(undefined8 *param_1)

{
  undefined8 uVar1;
  long local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  local_148 = param_1[0x20];
  param_1[0x20] = 2;
  if (local_148 != 2) {
    uStack_138 = param_1[0x22];
    local_140 = param_1[0x21];
                    /* try { // try from 007a6d48 to 007a6d5b has its CatchHandler @ 007a6dbc */
    uVar1 = <hyper::error::hyper::error::Error>::new_canceled();
    local_30 = FUN_0079fe98(uVar1,&DAT_002e3b04,0x11);
    uStack_68 = param_1[0x19];
    local_70 = param_1[0x18];
    uStack_58 = param_1[0x1b];
    uStack_60 = param_1[0x1a];
    uStack_48 = param_1[0x1d];
    local_50 = param_1[0x1c];
    uStack_38 = param_1[0x1f];
    uStack_40 = param_1[0x1e];
    uStack_a8 = param_1[0x11];
    local_b0 = param_1[0x10];
    uStack_98 = param_1[0x13];
    uStack_a0 = param_1[0x12];
    uStack_88 = param_1[0x15];
    local_90 = param_1[0x14];
    uStack_78 = param_1[0x17];
    uStack_80 = param_1[0x16];
    uStack_e8 = param_1[9];
    local_f0 = param_1[8];
    uStack_d8 = param_1[0xb];
    uStack_e0 = param_1[10];
    uStack_c8 = param_1[0xd];
    local_d0 = param_1[0xc];
    uStack_b8 = param_1[0xf];
    uStack_c0 = param_1[0xe];
    uStack_128 = param_1[1];
    local_130 = *param_1;
    uStack_118 = param_1[3];
    uStack_120 = param_1[2];
    uStack_108 = param_1[5];
    local_110 = param_1[4];
    uStack_f8 = param_1[7];
    uStack_100 = param_1[6];
    FUN_007a66c0(&local_148,&local_130);
  }
  return;
}


// ===== 007a6ddc  FUN_007a6ddc =====

void FUN_007a6ddc(long param_1)

{
  <u16_as_core::fmt::Display>::fmt(param_1 + 0x10);
  return;
}


// ===== 007a6de4  FUN_007a6de4 =====

void FUN_007a6de4(undefined8 *param_1)

{
  core::fmt::pointer_fmt_inner(*(undefined8 *)*param_1);
  return;
}


// ===== 007a6df0  FUN_007a6df0 =====

void FUN_007a6df0(long *param_1)

{
  uint uVar1;
  long lVar2;
  long local_238 [33];
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_30;
  long local_28;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar2 = param_1[2];
  param_1[1] = 0;
  local_28 = lVar2;
  if (*param_1 == 1) {
    if ((uVar1 & 1) != 0) {
                    /* try { // try from 007a6e7c to 007a6e7f has its CatchHandler @ 007a6eb0 */
      uStack_128 = hyper::client::dispatch::dispatch_gone();
      local_130 = 0xffffffffffffffff;
      FUN_0079ceb8(local_238,lVar2,&local_130);
      FUN_007a0fd8(local_238);
      return;
    }
  }
  else if (uVar1 != 0) {
                    /* try { // try from 007a6e34 to 007a6e37 has its CatchHandler @ 007a6ec0 */
    local_30 = hyper::client::dispatch::dispatch_gone();
    local_130 = 0xffffffffffffffff;
    FUN_0079cb0c(local_238,lVar2,&local_130);
    if (local_238[0] != -3) {
      FUN_007a0df8(local_238);
      return;
    }
  }
  return;
}


// ===== 007a6ed8  FUN_007a6ed8 =====

undefined8 FUN_007a6ed8(long *param_1,void *param_2,size_t param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1[2];
  if ((ulong)(param_1[3] - lVar1) < param_3) {
    uVar2 = FUN_007a946c();
    return uVar2;
  }
  memcpy(param_2,(void *)(*param_1 + lVar1),param_3);
  param_1[2] = lVar1 + param_3;
  return 0;
}


// ===== 007a6f40  FUN_007a6f40 =====

undefined1  [16] FUN_007a6f40(long *param_1,ulong *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  void *__src;
  ulong __n;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auVar9 [16];
  long local_78;
  ulong local_70;
  
  lVar8 = param_1[3];
  lVar6 = param_1[2];
  uVar5 = param_2[2];
  uVar3 = *param_2;
  lVar7 = *param_1;
  __n = lVar8 - lVar6;
  if (uVar3 - uVar5 < __n) {
    if (!CARRY8(__n,uVar5)) {
      uVar4 = __n + uVar5;
      if (__n + uVar5 <= uVar3 * 2) {
        uVar4 = uVar3 * 2;
      }
      if (uVar4 < 9) {
        uVar4 = 8;
      }
      FUN_0079c54c(&local_78,uVar3,param_2[1],uVar4,1,1);
      if (local_78 != 1) {
        *param_2 = uVar4;
        param_2[1] = local_70;
        goto LAB_007a6fe4;
      }
LAB_007a70c8:
      uVar2 = 1;
      lVar6 = 0x2600000003;
      goto LAB_007a7068;
    }
LAB_007a7030:
    lVar6 = 0x2600000003;
    uVar2 = 1;
  }
  else {
LAB_007a6fe4:
    if (lVar8 != lVar6) {
      memcpy((void *)(param_2[1] + uVar5),(void *)(lVar7 + lVar6),__n);
    }
    uVar3 = *param_2;
    uVar5 = uVar5 + __n;
    uVar4 = param_1[6];
    param_2[2] = uVar5;
    param_1[2] = 0;
    param_1[3] = 0;
    if (uVar3 - uVar5 < uVar4) {
      if (CARRY8(uVar4,uVar5)) goto LAB_007a7030;
      uVar1 = uVar4 + uVar5;
      if (uVar4 + uVar5 <= uVar3 * 2) {
        uVar1 = uVar3 * 2;
      }
      if (uVar1 < 9) {
        uVar1 = 8;
      }
      FUN_0079c54c(&local_78,uVar3,param_2[1],uVar1,1,1);
      if (local_78 == 1) goto LAB_007a70c8;
      __src = (void *)param_1[5];
      *param_2 = uVar1;
      param_2[1] = local_70;
      lVar6 = (long)__src + uVar4;
LAB_007a7044:
      memcpy((void *)(param_2[1] + uVar5),__src,uVar4);
    }
    else {
      __src = (void *)param_1[5];
      lVar6 = (long)__src + uVar4;
      if (uVar4 != 0) goto LAB_007a7044;
    }
    uVar2 = 0;
    param_1[5] = lVar6;
    param_1[6] = 0;
    param_2[2] = uVar5 + uVar4;
    lVar6 = uVar4 + __n;
  }
LAB_007a7068:
  auVar9._8_8_ = lVar6;
  auVar9._0_8_ = uVar2;
  return auVar9;
}


// ===== 007a70ec  FUN_007a70ec =====

undefined1  [16] FUN_007a70ec(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  void *__src;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  undefined1 *puVar12;
  size_t sVar13;
  size_t sVar14;
  void *__dest;
  ulong *puVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  size_t sVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined1 auVar24 [16];
  
  lVar16 = param_3 << 4;
  if (param_3 == 0) {
    uVar5 = 0;
  }
  else {
    if (param_3 < 5) {
      lVar7 = 0;
      uVar5 = 0;
    }
    else {
      lVar8 = 0;
      lVar20 = 0;
      lVar21 = 0;
      lVar22 = 0;
      uVar5 = 4;
      if ((param_3 & 3) != 0) {
        uVar5 = param_3 & 3;
      }
      lVar7 = param_3 - uVar5;
      plVar6 = param_2 + 5;
      lVar10 = lVar7;
      do {
        plVar2 = plVar6 + -4;
        lVar23 = *plVar6;
        plVar11 = plVar6 + -2;
        plVar3 = plVar6 + 2;
        lVar10 = lVar10 + -4;
        plVar6 = plVar6 + 8;
        lVar8 = *plVar2 + lVar8;
        lVar20 = *plVar11 + lVar20;
        lVar21 = lVar23 + lVar21;
        lVar22 = *plVar3 + lVar22;
      } while (lVar10 != 0);
      uVar5 = lVar21 + lVar8 + lVar22 + lVar20;
    }
    lVar8 = param_3 - lVar7;
    plVar6 = param_2 + lVar7 * 2 + 1;
    do {
      lVar8 = lVar8 + -1;
      uVar5 = *plVar6 + uVar5;
      plVar6 = plVar6 + 2;
    } while (lVar8 != 0);
  }
  puVar15 = param_1 + 2;
  uVar17 = *puVar15;
  uVar18 = param_1[3];
  uVar9 = param_1[1];
  if ((uVar18 == uVar17) && (uVar9 <= uVar5)) {
    puVar12 = (undefined1 *)param_1[5];
    sVar13 = 0;
    *puVar15 = 0;
    param_1[3] = 0;
    uVar5 = param_1[6];
    do {
      if (lVar16 == 0) break;
      uVar18 = param_2[1];
      sVar19 = uVar5;
      if (uVar18 <= uVar5) {
        sVar19 = uVar18;
      }
      if (sVar19 == 1) {
        *(undefined1 *)*param_2 = *puVar12;
      }
      else {
        memcpy((undefined1 *)*param_2,puVar12,sVar19);
      }
      puVar12 = puVar12 + sVar19;
      param_2 = param_2 + 2;
      sVar13 = sVar19 + sVar13;
      lVar16 = lVar16 + -0x10;
      param_1[5] = puVar12;
      param_1[6] = uVar5 - sVar19;
      bVar1 = uVar18 < uVar5;
      uVar5 = uVar5 - sVar19;
    } while (bVar1);
    uVar4 = 0;
  }
  else {
    __dest = (void *)*param_1;
    sVar13 = uVar18 - uVar17;
    if (uVar18 < uVar17 || sVar13 == 0) {
      __src = (void *)param_1[5];
      uVar5 = param_1[6];
      sVar13 = uVar5;
      if (uVar9 <= uVar5) {
        sVar13 = uVar9;
      }
      memcpy(__dest,__src,sVar13);
      uVar17 = 0;
      param_1[5] = (long)__src + sVar13;
      param_1[6] = uVar5 - sVar13;
      param_1[3] = sVar13;
      uVar18 = sVar13;
    }
    else if (__dest == (void *)0x0) {
      uVar4 = 1;
      goto LAB_007a72e8;
    }
    sVar19 = 0;
    puVar12 = (undefined1 *)((long)__dest + uVar17);
    sVar14 = sVar13;
    do {
      sVar13 = sVar19;
      if (lVar16 == 0) break;
      uVar5 = param_2[1];
      sVar13 = sVar14;
      if (uVar5 <= sVar14) {
        sVar13 = uVar5;
      }
      if (sVar13 == 1) {
        *(undefined1 *)*param_2 = *puVar12;
      }
      else {
        memcpy((undefined1 *)*param_2,puVar12,sVar13);
      }
      param_2 = param_2 + 2;
      puVar12 = puVar12 + sVar13;
      sVar19 = sVar13 + sVar19;
      lVar16 = lVar16 + -0x10;
      bVar1 = uVar5 < sVar14;
      sVar14 = sVar14 - sVar13;
      sVar13 = sVar19;
    } while (bVar1);
    uVar4 = 0;
    if (sVar13 + uVar17 <= uVar18) {
      uVar18 = sVar13 + uVar17;
    }
    *puVar15 = uVar18;
  }
LAB_007a72e8:
  auVar24._8_8_ = sVar13;
  auVar24._0_8_ = uVar4;
  return auVar24;
}


// ===== 007a7308  FUN_007a7308 =====

undefined8 FUN_007a7308(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong __n;
  
  lVar1 = param_2[1];
  lVar2 = param_1[2];
  __n = lVar1 - param_2[2];
  if ((ulong)(param_1[3] - lVar2) < __n) {
    uVar3 = FUN_007a9d1c();
    return uVar3;
  }
  memcpy((void *)(*param_2 + param_2[2]),(void *)(*param_1 + lVar2),__n);
  param_2[2] = lVar1;
  param_1[2] = lVar2 + __n;
  return 0;
}


// ===== 007a738c  FUN_007a738c =====

undefined1  [16] FUN_007a738c(undefined8 param_1,long *param_2)

{
  undefined **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 *__ptr;
  long lVar5;
  undefined1 auVar6 [16];
  long local_70;
  undefined1 *local_68;
  undefined8 local_60;
  long local_58;
  void *local_50;
  ulong uStack_48;
  undefined *puVar4;
  
  lVar5 = param_2[2];
  if (lVar5 == 0) {
                    /* try { // try from 007a73ec to 007a73f3 has its CatchHandler @ 007a750c */
    auVar6 = FUN_007a6f40(param_1,param_2);
    lVar5 = param_2[2];
                    /* try { // try from 007a7400 to 007a740b has its CatchHandler @ 007a74f4 */
    <core::str::str>::from_utf8(&local_58,param_2[1],lVar5);
    if (local_58 != 0) {
      ppuVar1 = auVar6._8_8_;
      if ((auVar6 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
        ppuVar1 = &PTR_DAT_00add650;
      }
      auVar6._8_8_ = ppuVar1;
      auVar6._0_8_ = 1;
      param_2[2] = 0;
      return auVar6;
    }
    param_2[2] = lVar5;
    return auVar6;
  }
  local_60 = 0;
  local_70 = 0;
  local_68 = &DAT_00000001;
                    /* try { // try from 007a73bc to 007a73c3 has its CatchHandler @ 007a751c */
  auVar6 = FUN_007a6f40(param_1,&local_70);
  __ptr = local_68;
  puVar4 = auVar6._8_8_;
  if (auVar6._0_8_ == 1) {
joined_r0x007a7458:
    if (local_70 != 0) {
      free(local_68);
    }
    auVar2._8_8_ = puVar4;
    auVar2._0_8_ = 1;
    return auVar2;
  }
                    /* try { // try from 007a7434 to 007a743f has its CatchHandler @ 007a751c */
  core::str::converts::from_utf8(&local_58,local_68,local_60);
  if (local_58 == 1) {
    puVar4 = &UNK_00add000;
    goto joined_r0x007a7458;
  }
  if ((ulong)(*param_2 - lVar5) < uStack_48) {
                    /* try { // try from 007a74d4 to 007a74eb has its CatchHandler @ 007a751c */
    FUN_0079be54(param_2,lVar5,uStack_48,1,1);
    lVar5 = param_2[2];
  }
  else if (uStack_48 == 0) goto LAB_007a748c;
  memcpy((void *)(param_2[1] + lVar5),local_50,uStack_48);
LAB_007a748c:
  param_2[2] = lVar5 + uStack_48;
  if (local_70 != 0) {
    free(__ptr);
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uStack_48;
  return auVar3 << 0x40;
}


// ===== 007a753c  FUN_007a753c =====

undefined8 FUN_007a753c(void)

{
  return 1;
}


// ===== 007a7544  FUN_007a7544 =====

undefined1  [16] FUN_007a7544(undefined8 *param_1,undefined1 *param_2,ulong param_3)

{
  undefined1 *__src;
  ulong uVar1;
  void *pvVar2;
  undefined8 uVar3;
  ulong uVar4;
  size_t __n;
  void *__dest;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  puVar5 = param_1 + 2;
  uVar6 = *puVar5;
  uVar7 = param_1[3];
  uVar4 = param_1[1];
  if ((uVar7 == uVar6) && (uVar4 <= param_3)) {
    __src = (undefined1 *)param_1[5];
    uVar7 = param_1[6];
    *puVar5 = 0;
    param_1[3] = 0;
    __n = uVar7;
    if (param_3 <= uVar7) {
      __n = param_3;
    }
    if (__n == 1) {
      *param_2 = *__src;
    }
    else {
      memcpy(param_2,__src,__n);
    }
    uVar3 = 0;
    param_1[5] = __src + __n;
    param_1[6] = uVar7 - __n;
    goto LAB_007a7678;
  }
  __dest = (void *)*param_1;
  __n = uVar7 - uVar6;
  if (uVar7 < uVar6 || __n == 0) {
    pvVar2 = (void *)param_1[5];
    uVar1 = param_1[6];
    uVar7 = uVar1;
    if (uVar4 <= uVar1) {
      uVar7 = uVar4;
    }
    memcpy(__dest,pvVar2,uVar7);
    uVar6 = 0;
    param_1[5] = (long)pvVar2 + uVar7;
    param_1[6] = uVar1 - uVar7;
    param_1[3] = uVar7;
    __n = uVar7;
    if (param_3 <= uVar7) {
      __n = param_3;
    }
    pvVar2 = __dest;
    if (__n != 1) goto LAB_007a75c0;
LAB_007a7630:
    *param_2 = *(undefined1 *)((long)__dest + uVar6);
  }
  else {
    if (__dest == (void *)0x0) {
      uVar3 = 1;
      goto LAB_007a7678;
    }
    if (param_3 <= __n) {
      __n = param_3;
    }
    pvVar2 = (void *)((long)__dest + uVar6);
    if (__n == 1) goto LAB_007a7630;
LAB_007a75c0:
    memcpy(param_2,pvVar2,__n);
  }
  uVar3 = 0;
  if (uVar6 + __n <= uVar7) {
    uVar7 = uVar6 + __n;
  }
  *puVar5 = uVar7;
LAB_007a7678:
  auVar8._8_8_ = __n;
  auVar8._0_8_ = uVar3;
  return auVar8;
}


// ===== 007a76a0  FUN_007a76a0 =====

ulong FUN_007a76a0(undefined8 *param_1,long *param_2)

{
  void *__src;
  size_t sVar1;
  ulong uVar2;
  void *pvVar3;
  ulong *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  puVar4 = param_1 + 2;
  uVar6 = *puVar4;
  uVar7 = param_1[3];
  if (uVar7 == uVar6) {
    lVar5 = param_2[2];
    uVar2 = param_2[1] - lVar5;
    if ((ulong)param_1[1] <= uVar2) {
      pvVar3 = (void *)param_1[5];
      uVar7 = param_1[6];
      *puVar4 = 0;
      param_1[3] = 0;
      sVar1 = uVar7;
      if (uVar2 <= uVar7) {
        sVar1 = uVar2;
      }
      memcpy((void *)(*param_2 + lVar5),pvVar3,sVar1);
      param_1[5] = (long)pvVar3 + sVar1;
      param_1[6] = uVar7 - sVar1;
      param_2[2] = sVar1 + lVar5;
      return 0;
    }
  }
  else {
    lVar5 = param_2[2];
  }
  pvVar3 = (void *)*param_1;
  sVar1 = uVar7 - uVar6;
  if (uVar7 < uVar6 || sVar1 == 0) {
    __src = (void *)param_1[5];
    uVar7 = param_1[6];
    sVar1 = uVar7;
    if ((ulong)param_1[1] <= uVar7) {
      sVar1 = param_1[1];
    }
    memcpy(pvVar3,__src,sVar1);
    uVar6 = 0;
    param_1[5] = (long)__src + sVar1;
    param_1[6] = uVar7 - sVar1;
    param_1[3] = sVar1;
    uVar7 = sVar1;
  }
  else if (pvVar3 == (void *)0x0) {
    return sVar1;
  }
  if ((ulong)(param_2[1] - lVar5) <= sVar1) {
    sVar1 = param_2[1] - lVar5;
  }
  memcpy((void *)(*param_2 + lVar5),(void *)((long)pvVar3 + uVar6),sVar1);
  param_2[2] = sVar1 + lVar5;
  if (sVar1 + uVar6 <= uVar7) {
    uVar7 = sVar1 + uVar6;
  }
  *puVar4 = uVar7;
  return 0;
}


// ===== 007a77d4  FUN_007a77d4 =====

void FUN_007a77d4(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(long *)(param_1 + 0x10) + param_2;
  uVar2 = *(ulong *)(param_1 + 0x18);
  if (uVar1 <= *(ulong *)(param_1 + 0x18)) {
    uVar2 = uVar1;
  }
  *(ulong *)(param_1 + 0x10) = uVar2;
  return;
}


// ===== 007a77ec  FUN_007a77ec =====

void FUN_007a77ec(long *param_1,undefined8 *param_2)

{
  void *__src;
  ulong uVar1;
  ulong uVar2;
  void *__dest;
  size_t __n;
  
  uVar2 = param_2[2];
  __n = param_2[3];
  __dest = (void *)*param_2;
  if (__n <= uVar2) {
    __src = (void *)param_2[5];
    uVar1 = param_2[6];
    __n = uVar1;
    if ((ulong)param_2[1] <= uVar1) {
      __n = param_2[1];
    }
    memcpy(__dest,__src,__n);
    uVar2 = 0;
    param_2[5] = (long)__src + __n;
    param_2[6] = uVar1 - __n;
    param_2[2] = 0;
    param_2[3] = __n;
  }
  *param_1 = (long)__dest + uVar2;
  param_1[1] = __n - uVar2;
  return;
}


// ===== 007a7868  FUN_007a7868 =====

void FUN_007a7868(long *param_1,undefined8 param_2)

{
  long lVar1;
  long *local_18;
  
  lVar1 = *param_1;
  if (lVar1 < 2) {
    if (lVar1 == 0) {
      <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd098,4);
      return;
    }
    local_18 = param_1 + 1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,"Continue",8,&local_18,&DAT_00add018);
    return;
  }
  if (lVar1 != 2) {
    if (lVar1 == 3) {
      <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002e3b37,9);
      return;
    }
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002e3b40,6);
    return;
  }
  local_18 = param_1 + 1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,&DAT_002bd114,4,&local_18,&DAT_00add018);
  return;
}


// ===== 007a7944  thunk_FUN_007b6d18 =====

undefined1  [16] thunk_FUN_007b6d18(undefined8 *param_1,uint param_2,long *param_3)

{
  void *__dest;
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  size_t __n;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  void *pvStack_80;
  ulong uStack_78;
  long lStack_68;
  
  __dest = (void *)*param_1;
  uVar1 = param_1[1];
  uVar6 = param_1[2];
  __n = param_1[3];
  pvStack_80 = (void *)param_1[5];
  uStack_78 = param_1[6];
  if (__dest == (void *)0x0) {
    uVar8 = 1;
    if (uVar6 < __n) goto LAB_007b6dbc;
LAB_007b6d90:
    do {
      __n = 0;
      uVar6 = 0;
      uVar7 = uStack_78;
      if (uVar1 <= uStack_78) {
        uVar7 = uVar1;
      }
      pvStack_80 = (void *)((long)pvStack_80 + uVar7);
      uStack_78 = uStack_78 - uVar7;
      param_1[2] = 0;
      param_1[3] = uVar7;
      param_1[5] = pvStack_80;
      param_1[6] = uStack_78;
LAB_007b6dbc:
      do {
        while( true ) {
          uVar7 = __n - uVar6;
          uVar9 = uVar7 & 3;
          if (uVar9 < 2) break;
          if (uVar9 == 2) {
            lVar10 = core::io::error::os_functions::get_os_functions();
            iVar2 = (**(code **)(lVar10 + 0x10))(uVar7 >> 0x20);
            if (iVar2 == 0) goto LAB_007b6f7c;
          }
          else {
            uVar5 = (uint)(uVar7 >> 0x20);
            if (10 < uVar7 >> 0x22) {
              uVar5 = 0xffffffff;
            }
            if ((uVar5 & 0xff) != 0x23) goto LAB_007b6f7c;
          }
LAB_007b6d88:
          if (__n <= uVar6) goto LAB_007b6d90;
        }
        if (uVar9 == 0) {
          if (*(char *)(uVar7 + 0x10) == '#') goto LAB_007b6d88;
          goto LAB_007b6f7c;
        }
        if (*(char *)(uVar7 + 0x1f) != '#') goto LAB_007b6f7c;
        lStack_68 = uVar7 - 1;
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&lStack_68);
      } while (uVar6 < __n);
    } while( true );
  }
  uVar7 = 0;
  do {
    if (__n <= uVar6) {
      __n = uStack_78;
      if (uVar1 <= uStack_78) {
        __n = uVar1;
      }
      uStack_78 = uStack_78 - __n;
      memcpy(__dest,pvStack_80,__n);
      uVar6 = 0;
      param_1[5] = (void *)((long)pvStack_80 + __n);
      param_1[6] = uStack_78;
      param_1[2] = 0;
      param_1[3] = __n;
      pvStack_80 = (void *)((long)pvStack_80 + __n);
    }
    uVar9 = __n - uVar6;
    if (uVar9 < 0x10) {
      uVar3 = 0;
      if (uVar9 == 0) {
        uVar3 = 0;
      }
      else {
        do {
          if ((uint)*(byte *)((long)__dest + uVar3 + uVar6) == (param_2 & 0xff)) {
            auVar11._8_8_ = uVar3;
            auVar11._0_8_ = 1;
            goto LAB_007b6f4c;
          }
          uVar3 = uVar3 + 1;
        } while (uVar9 != uVar3);
        uVar3 = 0;
      }
    }
    else {
      auVar11 = core::slice::memchr::memchr_aligned(param_2,(long)__dest + uVar6,__n - uVar6);
      uVar3 = auVar11._0_8_;
      if (uVar3 == 1) {
LAB_007b6f4c:
        uVar4 = auVar11._8_8_;
        uVar3 = auVar11._0_8_;
        if (uVar9 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (0,uVar4,uVar9,&PTR_s__nix_store_8006w282fgsx3273c878b_00add9e0);
        }
        uVar9 = uVar4 + 1;
      }
    }
    lVar10 = param_3[2];
    if ((ulong)(*param_3 - lVar10) < uVar9) {
      FUN_0079be54(param_3,lVar10,uVar9,1,1);
      lVar10 = param_3[2];
LAB_007b6e5c:
      memcpy((void *)(param_3[1] + lVar10),(void *)((long)__dest + uVar6),uVar9);
    }
    else {
      if (uVar9 != 0) goto LAB_007b6e5c;
      uVar3 = 1;
    }
    uVar4 = uVar6 + uVar9;
    uVar7 = uVar9 + uVar7;
    param_3[2] = lVar10 + uVar9;
    uVar6 = __n;
    if (uVar4 <= __n) {
      uVar6 = uVar4;
    }
    param_1[2] = uVar6;
    if ((uVar3 & 1) != 0) {
      uVar8 = 0;
LAB_007b6f7c:
      auVar12._8_8_ = uVar7;
      auVar12._0_8_ = uVar8;
      return auVar12;
    }
  } while( true );
}


// ===== 007a7948  thunk_FUN_007b72c8 =====

/* WARNING: Removing unreachable block (ram,0x007b737c) */
/* WARNING: Removing unreachable block (ram,0x007b73a8) */

undefined1  [16] thunk_FUN_007b72c8(undefined8 *param_1,uint param_2)

{
  void *__dest;
  ulong uVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  ulong __n;
  void *pvVar5;
  void *__src;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  long lStack_68;
  
  __dest = (void *)*param_1;
  uVar1 = param_1[1];
  uVar9 = param_1[2];
  __n = param_1[3];
  __src = (void *)param_1[5];
  uVar8 = param_1[6];
  if (__dest == (void *)0x0) {
    uVar7 = 1;
LAB_007b73d4:
    if (__n <= uVar9) {
      __n = 0;
      uVar9 = 0;
      uVar6 = uVar8;
      if (uVar1 <= uVar8) {
        uVar6 = uVar1;
      }
      __src = (void *)((long)__src + uVar6);
      uVar8 = uVar8 - uVar6;
      param_1[2] = 0;
      param_1[3] = uVar6;
      param_1[5] = __src;
      param_1[6] = uVar8;
    }
    uVar6 = __n - uVar9;
    uVar10 = uVar6 & 3;
    if (uVar10 < 2) {
      if (uVar10 == 0) {
        cVar2 = *(char *)(uVar6 + 0x10);
      }
      else {
        cVar2 = *(char *)(uVar6 + 0x1f);
      }
joined_r0x007b7450:
      if (cVar2 != '#') goto LAB_007b74b0;
    }
    else {
      if (uVar10 == 2) {
        lVar3 = core::io::error::os_functions::get_os_functions();
        cVar2 = (**(code **)(lVar3 + 8))(uVar6 >> 0x20);
        goto joined_r0x007b7450;
      }
      if (((uint)(uVar6 >> 0x20) & 0xff) != 0x23) goto LAB_007b74b0;
    }
    if ((1 < uVar10 - 2) && (uVar10 != 0)) {
      lStack_68 = uVar6 - 1;
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&lStack_68);
    }
    goto LAB_007b73d4;
  }
  uVar6 = 0;
  do {
    pvVar5 = __src;
    if (__n <= uVar9) {
      __n = uVar8;
      if (uVar1 <= uVar8) {
        __n = uVar1;
      }
      pvVar5 = (void *)((long)__src + __n);
      uVar8 = uVar8 - __n;
      memcpy(__dest,__src,__n);
      uVar9 = 0;
      param_1[5] = pvVar5;
      param_1[6] = uVar8;
      param_1[2] = 0;
      param_1[3] = __n;
    }
    uVar10 = __n - uVar9;
    if (uVar10 < 0x10) {
      uVar4 = 0;
      if (uVar10 != 0) {
        do {
          if ((uint)*(byte *)((long)__dest + uVar4 + uVar9) == (param_2 & 0xff)) goto LAB_007b7494;
          uVar4 = uVar4 + 1;
        } while (uVar10 != uVar4);
      }
    }
    else {
      auVar11 = core::slice::memchr::memchr_aligned(param_2,(long)__dest + uVar9,__n - uVar9);
      uVar4 = auVar11._8_8_;
      if (auVar11._0_8_ == 1) {
LAB_007b7494:
        uVar9 = uVar9 + uVar4 + 1;
        uVar6 = uVar4 + 1 + uVar6;
        if (uVar9 <= __n) {
          __n = uVar9;
        }
        param_1[2] = __n;
        break;
      }
    }
    uVar6 = uVar10 + uVar6;
    param_1[2] = __n;
    __src = pvVar5;
    uVar9 = __n;
  } while (uVar10 != 0);
  uVar7 = 0;
LAB_007b74b0:
  auVar11._8_8_ = uVar6;
  auVar11._0_8_ = uVar7;
  return auVar11;
}


// ===== 007a794c  FUN_007a794c =====

void FUN_007a794c(undefined1 *param_1,undefined8 *param_2)

{
  size_t __n;
  void *__src;
  ulong uVar1;
  long lVar2;
  bool bVar3;
  
  lVar2 = param_2[3] - param_2[2];
  if ((ulong)param_2[3] < (ulong)param_2[2] || lVar2 == 0) {
    __src = (void *)param_2[5];
    uVar1 = param_2[6];
    __n = uVar1;
    if ((ulong)param_2[1] <= uVar1) {
      __n = param_2[1];
    }
    memcpy((void *)*param_2,__src,__n);
    bVar3 = __n != 0;
    param_2[5] = (long)__src + __n;
    param_2[6] = uVar1 - __n;
    param_2[2] = 0;
    param_2[3] = __n;
  }
  else {
    if ((void *)*param_2 == (void *)0x0) {
      *(long *)(param_1 + 8) = lVar2;
      *param_1 = 1;
      return;
    }
    bVar3 = true;
  }
  param_1[1] = bVar3;
  *param_1 = 0;
  return;
}


// ===== 007a79f4  FUN_007a79f4 =====

undefined1  [16] FUN_007a79f4(undefined8 param_1,long param_2)

{
  undefined **ppuVar1;
  long lVar2;
  undefined1 auVar3 [16];
  long local_58 [3];
  
  lVar2 = *(long *)(param_2 + 0x10);
                    /* try { // try from 007a7a14 to 007a7a1f has its CatchHandler @ 007a7a9c */
  auVar3 = FUN_007b6d18(param_1,10,param_2);
                    /* try { // try from 007a7a30 to 007a7a3b has its CatchHandler @ 007a7a84 */
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


// ===== 007a7aac  FUN_007a7aac =====

void FUN_007a7aac(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    return;
  }
  return;
}


// ===== 007a7ac4  FUN_007a7ac4 =====

undefined1  [16] FUN_007a7ac4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x28;
  auVar1._0_8_ = &DAT_002e3b46;
  return auVar1;
}


// ===== 007a7ad4  FUN_007a7ad4 =====

undefined8 FUN_007a7ad4(void)

{
  return 0;
}


// ===== 007a7adc  FUN_007a7adc =====

void FUN_007a7adc(void)

{
  return;
}


// ===== 007a7ae0  FUN_007a7ae0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007a7ae0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a0db0;
  param_1[1] = _UNK_002a0db8;
  *param_1 = uVar1;
  return;
}


// ===== 007a7af4  FUN_007a7af4 =====

undefined1  [16] FUN_007a7af4(byte *param_1,void *param_2)

{
  int iVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 local_480;
  undefined *puStack_478;
  undefined8 local_470;
  int local_38;
  undefined1 uStack_11;
  
  local_480 = 0;
  if (((*param_1 & 1) != 0) && (4 < *(ulong *)PTR_MAX_LOG_LEVEL_FILTER_00b00c78)) {
    local_480 = 5;
    puStack_478 = &DAT_002e3b6e;
    local_470 = 0x19;
                    /* try { // try from 007a7b44 to 007a7b5b has its CatchHandler @ 007a7c5c */
    iVar1 = <log::__private_api::GlobalLogger_as_log::Log>::enabled(&uStack_11,&local_480);
    if (iVar1 != 0) {
      puVar2 = (ulong *)FUN_007c8210(0);
      if (puVar2 == (ulong *)0x0) {
                    /* try { // try from 007a7c4c to 007a7c57 has its CatchHandler @ 007a7c5c */
                    /* WARNING: Subroutine does not return */
        std::thread::local::panic_access_error(&PTR_s__nix_store_8006w282fgsx3273c878b_00adfa00);
      }
      uVar3 = *puVar2 ^ *puVar2 >> 0xc;
      uVar3 = uVar3 ^ uVar3 << 0x19;
      uVar3 = uVar3 ^ uVar3 >> 0x1b;
      *puVar2 = uVar3;
      memcpy(&local_480,param_2,0x448);
      local_38 = (int)uVar3 * 0x4f6cdd1d;
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      auVar4._0_8_ = (void *)FUN_004b25a4(0x450,8);
      if (auVar4._0_8_ != (void *)0x0) {
        memcpy(auVar4._0_8_,&local_480,0x450);
        auVar4._8_8_ = &PTR_thunk_FUN_007a8430_00add220;
        return auVar4;
      }
                    /* try { // try from 007a7c3c to 007a7c47 has its CatchHandler @ 007a7c70 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x450);
    }
  }
  memcpy(&local_480,param_2,0x448);
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  auVar5._0_8_ = (void *)FUN_004b25a4(0x448,8);
  if (auVar5._0_8_ != (void *)0x0) {
    memcpy(auVar5._0_8_,param_2,0x448);
    auVar5._8_8_ = &PTR_thunk_FUN_007a8430_00add130;
    return auVar5;
  }
                    /* try { // try from 007a7c2c to 007a7c37 has its CatchHandler @ 007a7c84 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x448);
}


// ===== 007a7c9c  FUN_007a7c9c =====

undefined1  [16] FUN_007a7c9c(byte *param_1,void *param_2)

{
  int iVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 local_8a8;
  undefined *puStack_8a0;
  undefined8 local_898;
  int local_38;
  undefined1 uStack_11;
  
  if (((*param_1 & 1) != 0) && (4 < *(ulong *)PTR_MAX_LOG_LEVEL_FILTER_00b00c78)) {
    local_8a8 = 5;
    puStack_8a0 = &DAT_002e3b6e;
    local_898 = 0x19;
                    /* try { // try from 007a7cec to 007a7d03 has its CatchHandler @ 007a7e04 */
    iVar1 = <log::__private_api::GlobalLogger_as_log::Log>::enabled(&uStack_11,&local_8a8);
    if (iVar1 != 0) {
      puVar2 = (ulong *)FUN_007c8210(0);
      if (puVar2 == (ulong *)0x0) {
                    /* try { // try from 007a7df4 to 007a7dff has its CatchHandler @ 007a7e04 */
                    /* WARNING: Subroutine does not return */
        std::thread::local::panic_access_error(&PTR_s__nix_store_8006w282fgsx3273c878b_00adfa00);
      }
      uVar3 = *puVar2 ^ *puVar2 >> 0xc;
      uVar3 = uVar3 ^ uVar3 << 0x19;
      uVar3 = uVar3 ^ uVar3 >> 0x1b;
      *puVar2 = uVar3;
      memcpy(&local_8a8,param_2,0x870);
      local_38 = (int)uVar3 * 0x4f6cdd1d;
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      auVar4._0_8_ = (void *)FUN_004b25a4(0x878,8);
      if (auVar4._0_8_ != (void *)0x0) {
        memcpy(auVar4._0_8_,&local_8a8,0x878);
        auVar4._8_8_ = &PTR_FUN_00add400;
        return auVar4;
      }
                    /* try { // try from 007a7de4 to 007a7def has its CatchHandler @ 007a7e18 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x878);
    }
  }
  memcpy(&local_8a8,param_2,0x870);
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  auVar5._0_8_ = (void *)FUN_004b25a4(0x870,8);
  if (auVar5._0_8_ != (void *)0x0) {
    memcpy(auVar5._0_8_,param_2,0x870);
    auVar5._8_8_ = &PTR_FUN_00add310;
    return auVar5;
  }
                    /* try { // try from 007a7dd4 to 007a7ddf has its CatchHandler @ 007a7e2c */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x870);
}


// ===== 007a7e44  FUN_007a7e44 =====

undefined1  [16] FUN_007a7e44(byte *param_1,void *param_2)

{
  int iVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 local_480;
  undefined *puStack_478;
  undefined8 local_470;
  int local_38;
  undefined1 uStack_11;
  
  local_480 = 0;
  if (((*param_1 & 1) != 0) && (4 < *(ulong *)PTR_MAX_LOG_LEVEL_FILTER_00b00c78)) {
    local_480 = 5;
    puStack_478 = &DAT_002e3b6e;
    local_470 = 0x19;
                    /* try { // try from 007a7e94 to 007a7eab has its CatchHandler @ 007a7fac */
    iVar1 = <log::__private_api::GlobalLogger_as_log::Log>::enabled(&uStack_11,&local_480);
    if (iVar1 != 0) {
      puVar2 = (ulong *)FUN_007c8210(0);
      if (puVar2 == (ulong *)0x0) {
                    /* try { // try from 007a7f9c to 007a7fa7 has its CatchHandler @ 007a7fac */
                    /* WARNING: Subroutine does not return */
        std::thread::local::panic_access_error(&PTR_s__nix_store_8006w282fgsx3273c878b_00adfa00);
      }
      uVar3 = *puVar2 ^ *puVar2 >> 0xc;
      uVar3 = uVar3 ^ uVar3 << 0x19;
      uVar3 = uVar3 ^ uVar3 >> 0x1b;
      *puVar2 = uVar3;
      memcpy(&local_480,param_2,0x448);
      local_38 = (int)uVar3 * 0x4f6cdd1d;
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      auVar4._0_8_ = (void *)FUN_004b25a4(0x450,8);
      if (auVar4._0_8_ != (void *)0x0) {
        memcpy(auVar4._0_8_,&local_480,0x450);
        auVar4._8_8_ = &PTR_thunk_FUN_007a8338_00add5e0;
        return auVar4;
      }
                    /* try { // try from 007a7f8c to 007a7f97 has its CatchHandler @ 007a7fc0 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x450);
    }
  }
  memcpy(&local_480,param_2,0x448);
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  auVar5._0_8_ = (void *)FUN_004b25a4(0x448,8);
  if (auVar5._0_8_ != (void *)0x0) {
    memcpy(auVar5._0_8_,param_2,0x448);
    auVar5._8_8_ = &PTR_FUN_00add4f0;
    return auVar5;
  }
                    /* try { // try from 007a7f7c to 007a7f87 has its CatchHandler @ 007a7fd4 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x448);
}


// ===== 007a7fec  FUN_007a7fec =====

void FUN_007a7fec(long param_1)

{
  if (*(char *)(param_1 + 0xa9) == '\x02') {
    return;
  }
                    /* try { // try from 007a8010 to 007a801b has its CatchHandler @ 007a802c */
  <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop(param_1 + 0x10);
  <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop(param_1 + 0x58);
  return;
}


// ===== 007a8044  FUN_007a8044 =====

void FUN_007a8044(long *param_1)

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


// ===== 007a80d0  FUN_007a80d0 =====

void FUN_007a80d0(long param_1,ulong param_2)

{
  long local_18;
  
  if (((param_1 != 0) && (1 < (param_2 & 3) - 2)) && ((param_2 & 3) != 0)) {
    local_18 = param_2 - 1;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
  }
  return;
}


// ===== 007a811c  FUN_007a811c =====

void FUN_007a811c(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  void *__ptr;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  
  if (*(long *)(param_1 + 0x388) == -1) {
    puVar8 = *(undefined8 **)(param_1 + 0x398);
    __ptr = *(void **)(param_1 + 0x390);
    pcVar2 = (code *)*puVar8;
    if (pcVar2 != (code *)0x0) {
                    /* try { // try from 007a8160 to 007a8167 has its CatchHandler @ 007a82ac */
      (*pcVar2)(__ptr);
    }
    if (puVar8[1] != 0) {
      free(__ptr);
    }
  }
  else {
                    /* try { // try from 007a8144 to 007a814b has its CatchHandler @ 007a82c8 */
    FUN_007a8f28(param_1 + 0x388);
  }
                    /* try { // try from 007a817c to 007a8183 has its CatchHandler @ 007a82dc */
  FUN_007a8a20(param_1);
  if (*(long *)(param_1 + 0x368) != 0) {
    free(*(void **)(param_1 + 0x370));
  }
  if (*(long *)(param_1 + 0x400) != 0) {
    free(*(void **)(param_1 + 0x408));
  }
  uVar7 = *(ulong *)(param_1 + 0x3f0);
  if (uVar7 != 0) {
    uVar4 = *(ulong *)(param_1 + 0x3d8);
    uVar3 = *(ulong *)(param_1 + 1000);
    lVar10 = *(long *)(param_1 + 0x3e0);
    uVar1 = 0;
    if (uVar4 <= uVar3) {
      uVar1 = uVar4;
    }
    lVar5 = uVar3 - uVar1;
    uVar9 = uVar4 - lVar5;
    lVar6 = 0;
    if (uVar9 <= uVar7) {
      lVar6 = uVar7 - uVar9;
    }
    if (uVar7 <= uVar9) {
      uVar4 = lVar5 + uVar7;
    }
    lVar5 = uVar4 - lVar5;
    if (lVar5 != 0) {
      puVar8 = (undefined8 *)(uVar3 * 0x18 + uVar1 * -0x18 + lVar10 + 8);
      do {
        if (puVar8[-1] != 0) {
          free((void *)*puVar8);
        }
        lVar5 = lVar5 + -1;
        puVar8 = puVar8 + 3;
      } while (lVar5 != 0);
    }
    if (uVar9 < uVar7) {
      puVar8 = (undefined8 *)(lVar10 + 8);
      do {
        if (puVar8[-1] != 0) {
          free((void *)*puVar8);
        }
        lVar6 = lVar6 + -1;
        puVar8 = puVar8 + 3;
      } while (lVar6 != 0);
    }
  }
  if (*(long *)(param_1 + 0x3d8) != 0) {
    free(*(void **)(param_1 + 0x3e0));
    return;
  }
  return;
}


// ===== 007a8338  FUN_007a8338 =====

void FUN_007a8338(long *param_1)

{
  if (*param_1 == 2) {
                    /* try { // try from 007a8354 to 007a835b has its CatchHandler @ 007a838c */
    FUN_007dfadc(param_1 + 1);
    if ((int)param_1[4] != -1) {
      close((int)param_1[4]);
    }
    FUN_007a938c(param_1 + 1);
    return;
  }
  FUN_007a8430(param_1);
  return;
}


// ===== 007a83b8  FUN_007a83b8 =====

void FUN_007a83b8(void *param_1,undefined8 *param_2)

{
  if ((code *)*param_2 != (code *)0x0) {
                    /* try { // try from 007a83d8 to 007a83df has its CatchHandler @ 007a8410 */
    (*(code *)*param_2)(param_1);
  }
  if (param_2[1] != 0) {
    free(param_1);
    return;
  }
  return;
}


// ===== 007a8430  FUN_007a8430 =====

void FUN_007a8430(long param_1)

{
                    /* try { // try from 007a8440 to 007a8443 has its CatchHandler @ 007a8474 */
  FUN_007dfadc();
  if (*(int *)(param_1 + 0x18) != -1) {
    close(*(int *)(param_1 + 0x18));
  }
                    /* try { // try from 007a8454 to 007a845b has its CatchHandler @ 007a846c */
  FUN_007a938c(param_1);
  FUN_007a811c(param_1 + 0x20);
  return;
}


// ===== 007a84ac  FUN_007a84ac =====

void FUN_007a84ac(long param_1)

{
                    /* try { // try from 007a84bc to 007a84c3 has its CatchHandler @ 007a84d4 */
  FUN_007a8338(param_1 + 0x420);
  FUN_007a811c(param_1);
  return;
}


// ===== 007a84ec  FUN_007a84ec =====

void FUN_007a84ec(long param_1)

{
                    /* try { // try from 007a84fc to 007a84ff has its CatchHandler @ 007a8520 */
  FUN_007dfadc();
  if (*(int *)(param_1 + 0x18) != -1) {
    close(*(int *)(param_1 + 0x18));
  }
  FUN_007a938c(param_1);
  return;
}


// ===== 007a854c  thunk_FUN_007a8430 =====

void thunk_FUN_007a8430(long param_1)

{
  FUN_007dfadc();
  if (*(int *)(param_1 + 0x18) != -1) {
    close(*(int *)(param_1 + 0x18));
  }
  FUN_007a938c(param_1);
  FUN_007a811c(param_1 + 0x20);
  return;
}


// ===== 007a8550  FUN_007a8550 =====

void FUN_007a8550(long param_1)

{
                    /* try { // try from 007a8560 to 007a8567 has its CatchHandler @ 007a8578 */
  FUN_007a8338(param_1 + 0x420);
  FUN_007a811c(param_1);
  return;
}


// ===== 007a8590  thunk_FUN_007a8430 =====

void thunk_FUN_007a8430(long param_1)

{
  FUN_007dfadc();
  if (*(int *)(param_1 + 0x18) != -1) {
    close(*(int *)(param_1 + 0x18));
  }
  FUN_007a938c(param_1);
  FUN_007a811c(param_1 + 0x20);
  return;
}


// ===== 007a8594  FUN_007a8594 =====

void FUN_007a8594(long param_1)

{
                    /* try { // try from 007a85a4 to 007a85ab has its CatchHandler @ 007a85bc */
  FUN_007a8338(param_1 + 0x420);
  FUN_007a811c(param_1);
  return;
}


// ===== 007a85d4  thunk_FUN_007a8338 =====

void thunk_FUN_007a8338(long *param_1)

{
  if (*param_1 == 2) {
    FUN_007dfadc(param_1 + 1);
    if ((int)param_1[4] != -1) {
      close((int)param_1[4]);
    }
    FUN_007a938c(param_1 + 1);
    return;
  }
  FUN_007a8430(param_1);
  return;
}


// ===== 007a85d8  FUN_007a85d8 =====

void FUN_007a85d8(ulong *param_1)

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
                    /* try { // try from 007a861c to 007a8623 has its CatchHandler @ 007a87ec */
        FUN_007dfadc(param_1 + 1);
        if ((int)param_1[4] != -1) {
          close((int)param_1[4]);
        }
                    /* try { // try from 007a8634 to 007a863b has its CatchHandler @ 007a87b4 */
        FUN_007a938c(param_1 + 1);
        uVar4 = param_1[10];
        if (uVar4 != 0) {
          uVar2 = param_1[8];
          uVar3 = param_1[9];
          uVar5 = param_1[7];
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
        if (param_1[7] != 0) {
          free((void *)param_1[8]);
        }
        uVar4 = param_1[0xc];
      }
      else {
                    /* try { // try from 007a86cc to 007a86d3 has its CatchHandler @ 007a87bc */
        FUN_007dfadc(param_1 + 1);
        if ((int)param_1[4] != -1) {
          close((int)param_1[4]);
        }
                    /* try { // try from 007a86e4 to 007a86eb has its CatchHandler @ 007a87ac */
        FUN_007a938c(param_1 + 1);
        uVar4 = param_1[5];
      }
      if ((1 < (uVar4 & 3) - 2) && ((uVar4 & 3) != 0)) {
        local_58 = uVar4 - 1;
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_58);
      }
    }
    return;
  }
  FUN_007a8430(param_1);
  return;
}


// ===== 007a882c  FUN_007a882c =====

void FUN_007a882c(ulong *param_1)

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
                    /* try { // try from 007a8870 to 007a8877 has its CatchHandler @ 007a89ec */
        FUN_007a8338(param_1 + 8);
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
                    /* try { // try from 007a8910 to 007a8917 has its CatchHandler @ 007a89d8 */
        FUN_007a8338(param_1 + 1);
        uVar4 = param_1[0x8a];
      }
      if ((1 < (uVar4 & 3) - 2) && ((uVar4 & 3) != 0)) {
        local_58 = uVar4 - 1;
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_58);
      }
    }
    return;
  }
                    /* try { // try from 007a88e8 to 007a88ef has its CatchHandler @ 007a8a08 */
  FUN_007a8338(param_1 + 0x84);
  FUN_007a811c(param_1);
  return;
}


// ===== 007a8a20  FUN_007a8a20 =====

void FUN_007a8a20(long param_1)

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
                    /* try { // try from 007a8a48 to 007a8a4f has its CatchHandler @ 007a8cf4 */
    (*pcVar4)(pvVar2);
  }
  if (puVar10[1] != 0) {
    free(pvVar2);
  }
  pvVar2 = *(void **)(param_1 + 0x20);
  puVar10 = *(undefined8 **)(param_1 + 0x28);
  pcVar4 = (code *)*puVar10;
  if (pcVar4 != (code *)0x0) {
                    /* try { // try from 007a8a70 to 007a8a77 has its CatchHandler @ 007a8cd8 */
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
  FUN_007a8d74(param_1 + 0xc0);
  return;
}


// ===== 007a8d74  FUN_007a8d74 =====

void FUN_007a8d74(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  
  if ((param_1[0xe] != -1) && (param_1[0xe] != 0)) {
    free((void *)param_1[0xf]);
  }
  uVar8 = param_1[0xd];
  uVar6 = param_1[10];
  if (uVar8 != 0) {
    lVar3 = param_1[0xb];
    uVar4 = param_1[0xc];
    uVar1 = 0;
    if (uVar6 <= uVar4) {
      uVar1 = uVar6;
    }
    lVar5 = uVar4 - uVar1;
    uVar10 = uVar6 - lVar5;
    lVar7 = 0;
    if (uVar10 <= uVar8) {
      lVar7 = uVar8 - uVar10;
    }
    uVar2 = uVar6;
    if (uVar8 <= uVar10) {
      uVar2 = lVar5 + uVar8;
    }
    lVar5 = uVar2 - lVar5;
    if (lVar5 != 0) {
      puVar9 = (undefined8 *)(lVar3 + uVar1 * -0x20 + uVar4 * 0x20 + 0x10);
      do {
        if (puVar9[-1] != 0) {
          free((void *)*puVar9);
        }
        lVar5 = lVar5 + -1;
        puVar9 = puVar9 + 4;
      } while (lVar5 != 0);
    }
    if (uVar10 < uVar8) {
      puVar9 = (undefined8 *)(lVar3 + 0x10);
      do {
        if (puVar9[-1] != 0) {
          free((void *)*puVar9);
        }
        lVar7 = lVar7 + -1;
        puVar9 = puVar9 + 4;
      } while (lVar7 != 0);
    }
  }
  if (uVar6 != 0) {
    free((void *)param_1[0xb]);
  }
  if (*param_1 != 0) {
                    /* try { // try from 007a8e38 to 007a8e3f has its CatchHandler @ 007a8f08 */
    <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop(param_1 + 1);
  }
  if (*(char *)((long)param_1 + 0x131) != '\x02') {
                    /* try { // try from 007a8e4c to 007a8e53 has its CatchHandler @ 007a8ef4 */
    <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop(param_1 + 0x13);
                    /* try { // try from 007a8e54 to 007a8e5b has its CatchHandler @ 007a8eec */
    <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop(param_1 + 0x1c);
  }
  if (*(char *)((long)param_1 + 0x1e1) == '\x02') {
    return;
  }
                    /* try { // try from 007a8e80 to 007a8e87 has its CatchHandler @ 007a8ed8 */
  <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop(param_1 + 0x29);
  <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop(param_1 + 0x32);
  return;
}


// ===== 007a8f28  FUN_007a8f28 =====

void FUN_007a8f28(ulong *param_1)

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
                    /* try { // try from 007a9008 to 007a900b has its CatchHandler @ 007a91a4 */
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
                    /* try { // try from 007a9084 to 007a908b has its CatchHandler @ 007a9188 */
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
      goto LAB_007a90f0;
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
      goto LAB_007a90f0;
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
LAB_007a90f0:
  if (!bVar3) {
    return;
  }
  DataMemoryBarrier(2,1);
  <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+rustls::server::server_conn::StoresServerSessions>>
  ::drop_slow(param_1);
  return;
}


// ===== 007a91ec  FUN_007a91ec =====

void FUN_007a91ec(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  
  uVar8 = *(ulong *)(param_1 + 0x28);
  uVar6 = *(ulong *)(param_1 + 0x10);
  if (uVar8 != 0) {
    lVar3 = *(long *)(param_1 + 0x18);
    uVar4 = *(ulong *)(param_1 + 0x20);
    uVar1 = 0;
    if (uVar6 <= uVar4) {
      uVar1 = uVar6;
    }
    lVar5 = uVar4 - uVar1;
    uVar10 = uVar6 - lVar5;
    lVar7 = 0;
    if (uVar10 <= uVar8) {
      lVar7 = uVar8 - uVar10;
    }
    uVar2 = uVar6;
    if (uVar8 <= uVar10) {
      uVar2 = lVar5 + uVar8;
    }
    lVar5 = uVar2 - lVar5;
    if (lVar5 != 0) {
      puVar9 = (undefined8 *)(uVar4 * 0x18 + uVar1 * -0x18 + lVar3 + 8);
      do {
        if (puVar9[-1] != 0) {
          free((void *)*puVar9);
        }
        lVar5 = lVar5 + -1;
        puVar9 = puVar9 + 3;
      } while (lVar5 != 0);
    }
    if (uVar10 < uVar8) {
      puVar9 = (undefined8 *)(lVar3 + 8);
      do {
        if (puVar9[-1] != 0) {
          free((void *)*puVar9);
        }
        lVar7 = lVar7 + -1;
        puVar9 = puVar9 + 3;
      } while (lVar7 != 0);
    }
  }
  if (uVar6 != 0) {
    free(*(void **)(param_1 + 0x18));
    return;
  }
  return;
}


// ===== 007a92f8  FUN_007a92f8 =====

void FUN_007a92f8(ulong param_1)

{
  long local_18;
  
  if ((1 < (param_1 & 3) - 2) && ((param_1 & 3) != 0)) {
    local_18 = param_1 - 1;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
  }
  return;
}


// ===== 007a9340  FUN_007a9340 =====

void FUN_007a9340(long *param_1)

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


// ===== 007a938c  FUN_007a938c =====

void FUN_007a938c(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 007a939c to 007a939f has its CatchHandler @ 007a9430 */
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
                    /* try { // try from 007a93c8 to 007a93ef has its CatchHandler @ 007a9428 */
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


// ===== 007a946c  FUN_007a946c =====

undefined ** FUN_007a946c(undefined8 *param_1,undefined1 *param_2,undefined **param_3)

{
  undefined **ppuVar1;
  void *__dest;
  undefined **ppuVar2;
  long lVar3;
  ulong *puVar4;
  ulong uVar5;
  uint uVar6;
  undefined1 *__src;
  undefined1 *puVar7;
  undefined **ppuVar8;
  undefined **__n;
  undefined **__n_00;
  undefined **ppuVar9;
  void *__src_00;
  long local_68;
  
  if (param_3 != (undefined **)0x0) {
    __dest = (void *)*param_1;
    ppuVar2 = (undefined **)param_1[1];
    __src = (undefined1 *)param_1[5];
    ppuVar9 = (undefined **)param_1[6];
    __n = (undefined **)param_1[3];
    puVar4 = param_1 + 2;
    ppuVar8 = (undefined **)*puVar4;
    do {
      if ((__n == ppuVar8) && (ppuVar2 <= param_3)) {
        __n_00 = ppuVar9;
        if (param_3 <= ppuVar9) {
          __n_00 = param_3;
        }
        *puVar4 = 0;
        param_1[3] = 0;
        if (__n_00 == (undefined **)0x1) {
          *param_2 = *__src;
        }
        else {
          memcpy(param_2,__src,(size_t)__n_00);
        }
        puVar7 = __src + (long)__n_00;
        __n = (undefined **)0x0;
        ppuVar8 = (undefined **)0x0;
        ppuVar9 = (undefined **)((long)ppuVar9 - (long)__n_00);
        param_1[5] = puVar7;
        param_1[6] = ppuVar9;
joined_r0x007a9590:
        if (__n_00 == (undefined **)0x0) {
          return &PTR_DAT_00add698;
        }
        if (param_3 < __n_00) {
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (__n_00,param_3,param_3,&PTR_s__nix_store_8006w282fgsx3273c878b_00add680);
        }
        param_2 = param_2 + (long)__n_00;
        __src = puVar7;
        param_3 = (undefined **)((long)param_3 - (long)__n_00);
      }
      else {
        __n_00 = (undefined **)((long)__n - (long)ppuVar8);
        if (__n < ppuVar8 || __n_00 == (undefined **)0x0) {
          __n = ppuVar9;
          if (ppuVar2 <= ppuVar9) {
            __n = ppuVar2;
          }
          puVar7 = __src + (long)__n;
          ppuVar9 = (undefined **)((long)ppuVar9 - (long)__n);
          memcpy(__dest,__src,(size_t)__n);
          ppuVar8 = (undefined **)0x0;
          param_1[5] = puVar7;
          param_1[6] = ppuVar9;
          param_1[3] = __n;
          __n_00 = __n;
          if (param_3 <= __n) {
            __n_00 = param_3;
          }
          __src_00 = __dest;
          if (__n_00 != (undefined **)0x1) goto LAB_007a9514;
LAB_007a9570:
          *param_2 = *(undefined1 *)((long)__dest + (long)ppuVar8);
LAB_007a9578:
          ppuVar1 = (undefined **)((long)ppuVar8 + (long)__n_00);
          ppuVar8 = __n;
          if (ppuVar1 <= __n) {
            ppuVar8 = ppuVar1;
          }
          *puVar4 = (ulong)ppuVar8;
          goto joined_r0x007a9590;
        }
        if (__dest != (void *)0x0) {
          if (param_3 <= __n_00) {
            __n_00 = param_3;
          }
          puVar7 = __src;
          __src_00 = (void *)((long)__dest + (long)ppuVar8);
          if (__n_00 == (undefined **)0x1) goto LAB_007a9570;
LAB_007a9514:
          memcpy(param_2,__src_00,(size_t)__n_00);
          goto LAB_007a9578;
        }
        uVar5 = (ulong)__n_00 & 3;
        if (uVar5 < 2) {
          if (uVar5 == 0) {
            if (*(char *)(__n_00 + 2) != '#') {
              return __n_00;
            }
          }
          else {
            if (*(char *)((long)__n_00 + 0x1f) != '#') {
              return __n_00;
            }
            local_68 = (long)__n_00 - 1;
            <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_68);
          }
        }
        else if (uVar5 == 2) {
                    /* try { // try from 007a960c to 007a961f has its CatchHandler @ 007a96c4 */
          lVar3 = core::io::error::os_functions::get_os_functions();
          uVar5 = (**(code **)(lVar3 + 0x10))((ulong)__n_00 >> 0x20);
          if ((uVar5 & 1) == 0) {
            return __n_00;
          }
        }
        else {
          uVar6 = (uint)((ulong)__n_00 >> 0x20);
          if (10 < (ulong)__n_00 >> 0x22) {
            uVar6 = 0xffffffff;
          }
          if ((uVar6 & 0xff) != 0x23) {
            return __n_00;
          }
        }
      }
    } while (param_3 != (undefined **)0x0);
  }
  return (undefined **)0x0;
}


// ===== 007a96dc  FUN_007a96dc =====

undefined1  [16] FUN_007a96dc(undefined8 param_1,undefined8 param_2,ulong *param_3)

{
  undefined1 *__s;
  bool bVar1;
  ulong __n;
  undefined1 auVar2 [16];
  int iVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  undefined1 *local_80;
  ulong local_78;
  ulong local_70;
  ulong uStack_68;
  
  uVar11 = param_3[2];
  uVar10 = *param_3;
  uVar8 = uVar10;
  uVar12 = uVar11;
  if (uVar10 - uVar11 < 0x20) {
    auVar14 = FUN_007a9f64(param_1,param_2,param_3);
    if (auVar14._0_8_ == 1) {
      return auVar14;
    }
    if (auVar14._8_8_ == 0) {
      return ZEXT816(0) << 0x40;
    }
    uVar8 = *param_3;
    uVar12 = param_3[2];
  }
  uVar7 = 0x2000;
  do {
    if ((uVar12 == uVar8) && (uVar8 == uVar10)) {
      auVar14 = FUN_007a9f64(param_1,param_2,param_3);
      if (auVar14._0_8_ == 1) {
        return auVar14;
      }
      uVar12 = param_3[2];
      if (auVar14._8_8_ == 0) {
LAB_007a9978:
        auVar2._8_8_ = 0;
        auVar2._0_8_ = uVar12 - uVar11;
        return auVar2 << 0x40;
      }
      uVar8 = *param_3;
    }
    uVar9 = uVar8;
    if (uVar12 == uVar8) {
      uVar9 = uVar8 + 0x20;
      if (uVar8 + 0x20 <= uVar8 * 2) {
        uVar9 = uVar8 * 2;
      }
      FUN_0079c54c(&local_80,uVar8,param_3[1],uVar9,1,1);
      if (local_80 == &DAT_00000001) {
        uVar8 = 0x2600000003;
        goto LAB_007a9990;
      }
      *param_3 = uVar9;
      param_3[1] = local_78;
    }
    uVar13 = uVar9 - uVar12;
    __s = (undefined1 *)(param_3[1] + uVar12);
    __n = uVar7;
    if (uVar13 <= uVar7) {
      __n = uVar13;
    }
    memset(__s,0,__n);
    local_70 = 0;
    local_80 = __s;
    local_78 = __n;
    uStack_68 = __n;
    auVar14 = FUN_007df6f4(param_1,param_2,&local_80);
    uVar8 = 0xd00000003;
    if (((auVar14 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
       (uVar8 = auVar14._8_8_, auVar14._8_8_ != 0)) {
      uVar6 = uVar8 & 3;
      if (uVar6 < 2) goto LAB_007a97fc;
      if (uVar6 != 2) goto LAB_007a9904;
                    /* try { // try from 007a9844 to 007a9857 has its CatchHandler @ 007a99e0 */
      lVar4 = core::io::error::os_functions::get_os_functions();
      iVar3 = (**(code **)(lVar4 + 0x10))(uVar8 >> 0x20);
      while (iVar3 != 0) {
        while( true ) {
          while( true ) {
            local_70 = 0;
            local_80 = __s;
            local_78 = __n;
            uStack_68 = __n;
            auVar14 = FUN_007df6f4(param_1,param_2,&local_80);
            uVar8 = 0xd00000003;
            if (((auVar14 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
               (uVar8 = auVar14._8_8_, auVar14._8_8_ == 0)) goto LAB_007a9924;
            uVar6 = uVar8 & 3;
            if (1 < uVar6) break;
LAB_007a97fc:
            if (uVar6 == 0) {
              if (*(char *)(uVar8 + 0x10) != '#') goto LAB_007a9990;
            }
            else {
              if (*(char *)(uVar8 + 0x1f) != '#') goto LAB_007a9990;
              local_78 = uVar8 - 1;
              local_80 = (undefined1 *)CONCAT71(local_80._1_7_,3);
              <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_78);
            }
          }
          if (uVar6 == 2) break;
LAB_007a9904:
          uVar5 = (uint)(uVar8 >> 0x20) & 0xff;
          if (10 < uVar8 >> 0x22) {
            uVar5 = 0xff;
          }
          if (uVar5 != 0x23) goto LAB_007a9990;
        }
                    /* try { // try from 007a98e8 to 007a98fb has its CatchHandler @ 007a99e4 */
        lVar4 = core::io::error::os_functions::get_os_functions();
        iVar3 = (**(code **)(lVar4 + 0x10))(uVar8 >> 0x20);
      }
LAB_007a9990:
      auVar14._8_8_ = uVar8;
      auVar14._0_8_ = 1;
      return auVar14;
    }
LAB_007a9924:
    if (local_78 < local_70) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (0,local_70,local_78,&PTR_s__root__cargo_registry_src_index__00add920);
    }
    if (__n < local_70) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic(&DAT_002e3ba9,0x24,&PTR_s__nix_store_8006w282fgsx3273c878b_00add668);
    }
    uVar12 = uVar12 + local_70;
    param_3[2] = uVar12;
    if (local_70 == 0) goto LAB_007a9978;
    uVar8 = uVar9;
    if (((uVar7 <= uVar13) && (local_70 == __n)) &&
       (bVar1 = (long)uVar7 < 0, uVar7 = uVar7 << 1, bVar1)) {
      uVar7 = 0xffffffffffffffff;
    }
  } while( true );
}


// ===== 007a99fc  FUN_007a99fc =====

undefined1  [16] FUN_007a99fc(undefined8 param_1,undefined8 param_2,ulong *param_3)

{
  undefined1 *__s;
  bool bVar1;
  ulong __n;
  undefined1 auVar2 [16];
  int iVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  undefined1 *local_80;
  ulong local_78;
  ulong local_70;
  ulong uStack_68;
  
  uVar11 = param_3[2];
  uVar10 = *param_3;
  uVar8 = uVar10;
  uVar12 = uVar11;
  if (uVar10 - uVar11 < 0x20) {
    auVar14 = FUN_007aa160(param_1,param_2,param_3);
    if (auVar14._0_8_ == 1) {
      return auVar14;
    }
    if (auVar14._8_8_ == 0) {
      return ZEXT816(0) << 0x40;
    }
    uVar8 = *param_3;
    uVar12 = param_3[2];
  }
  uVar7 = 0x2000;
  do {
    if ((uVar12 == uVar8) && (uVar8 == uVar10)) {
      auVar14 = FUN_007aa160(param_1,param_2,param_3);
      if (auVar14._0_8_ == 1) {
        return auVar14;
      }
      uVar12 = param_3[2];
      if (auVar14._8_8_ == 0) {
LAB_007a9c98:
        auVar2._8_8_ = 0;
        auVar2._0_8_ = uVar12 - uVar11;
        return auVar2 << 0x40;
      }
      uVar8 = *param_3;
    }
    uVar9 = uVar8;
    if (uVar12 == uVar8) {
      uVar9 = uVar8 + 0x20;
      if (uVar8 + 0x20 <= uVar8 * 2) {
        uVar9 = uVar8 * 2;
      }
      FUN_0079c54c(&local_80,uVar8,param_3[1],uVar9,1,1);
      if (local_80 == &DAT_00000001) {
        uVar8 = 0x2600000003;
        goto LAB_007a9cb0;
      }
      *param_3 = uVar9;
      param_3[1] = local_78;
    }
    uVar13 = uVar9 - uVar12;
    __s = (undefined1 *)(param_3[1] + uVar12);
    __n = uVar7;
    if (uVar13 <= uVar7) {
      __n = uVar13;
    }
    memset(__s,0,__n);
    local_70 = 0;
    local_80 = __s;
    local_78 = __n;
    uStack_68 = __n;
    auVar14 = FUN_007df7d8(param_1,param_2,&local_80);
    uVar8 = 0xd00000003;
    if (((auVar14 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
       (uVar8 = auVar14._8_8_, auVar14._8_8_ != 0)) {
      uVar6 = uVar8 & 3;
      if (uVar6 < 2) goto LAB_007a9b1c;
      if (uVar6 != 2) goto LAB_007a9c24;
                    /* try { // try from 007a9b64 to 007a9b77 has its CatchHandler @ 007a9d00 */
      lVar4 = core::io::error::os_functions::get_os_functions();
      iVar3 = (**(code **)(lVar4 + 0x10))(uVar8 >> 0x20);
      while (iVar3 != 0) {
        while( true ) {
          while( true ) {
            local_70 = 0;
            local_80 = __s;
            local_78 = __n;
            uStack_68 = __n;
            auVar14 = FUN_007df7d8(param_1,param_2,&local_80);
            uVar8 = 0xd00000003;
            if (((auVar14 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
               (uVar8 = auVar14._8_8_, auVar14._8_8_ == 0)) goto LAB_007a9c44;
            uVar6 = uVar8 & 3;
            if (1 < uVar6) break;
LAB_007a9b1c:
            if (uVar6 == 0) {
              if (*(char *)(uVar8 + 0x10) != '#') goto LAB_007a9cb0;
            }
            else {
              if (*(char *)(uVar8 + 0x1f) != '#') goto LAB_007a9cb0;
              local_78 = uVar8 - 1;
              local_80 = (undefined1 *)CONCAT71(local_80._1_7_,3);
              <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_78);
            }
          }
          if (uVar6 == 2) break;
LAB_007a9c24:
          uVar5 = (uint)(uVar8 >> 0x20) & 0xff;
          if (10 < uVar8 >> 0x22) {
            uVar5 = 0xff;
          }
          if (uVar5 != 0x23) goto LAB_007a9cb0;
        }
                    /* try { // try from 007a9c08 to 007a9c1b has its CatchHandler @ 007a9d04 */
        lVar4 = core::io::error::os_functions::get_os_functions();
        iVar3 = (**(code **)(lVar4 + 0x10))(uVar8 >> 0x20);
      }
LAB_007a9cb0:
      auVar14._8_8_ = uVar8;
      auVar14._0_8_ = 1;
      return auVar14;
    }
LAB_007a9c44:
    if (local_78 < local_70) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (0,local_70,local_78,&PTR_s__root__cargo_registry_src_index__00add920);
    }
    if (__n < local_70) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic(&DAT_002e3ba9,0x24,&PTR_s__nix_store_8006w282fgsx3273c878b_00add668);
    }
    uVar12 = uVar12 + local_70;
    param_3[2] = uVar12;
    if (local_70 == 0) goto LAB_007a9c98;
    uVar8 = uVar9;
    if (((uVar7 <= uVar13) && (local_70 == __n)) &&
       (bVar1 = (long)uVar7 < 0, uVar7 = uVar7 << 1, bVar1)) {
      uVar7 = 0xffffffffffffffff;
    }
  } while( true );
}


// ===== 007a9d1c  FUN_007a9d1c =====

undefined ** FUN_007a9d1c(undefined8 *param_1,long *param_2)

{
  undefined **ppuVar1;
  long lVar2;
  void *__dest;
  undefined **ppuVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  ulong *puVar7;
  long lVar8;
  undefined **ppuVar9;
  ulong uVar10;
  uint uVar11;
  undefined **ppuVar12;
  undefined **__n;
  long lVar13;
  undefined **ppuVar14;
  void *local_78;
  long local_68;
  
  lVar2 = param_2[1];
  lVar13 = param_2[2];
  if (lVar2 != lVar13) {
    __dest = (void *)*param_1;
    ppuVar3 = (undefined **)param_1[1];
    puVar7 = param_1 + 2;
    ppuVar14 = (undefined **)*puVar7;
    __n = (undefined **)param_1[3];
    lVar8 = *param_2;
    local_78 = (void *)param_1[5];
    ppuVar12 = (undefined **)param_1[6];
    do {
      if ((__n == ppuVar14) && (ppuVar9 = (undefined **)(lVar2 - lVar13), ppuVar3 <= ppuVar9)) {
        ppuVar1 = ppuVar12;
        if (ppuVar9 <= ppuVar12) {
          ppuVar1 = ppuVar9;
        }
        ppuVar12 = (undefined **)((long)ppuVar12 - (long)ppuVar1);
        *puVar7 = 0;
        param_1[3] = 0;
        memcpy((void *)(lVar8 + lVar13),local_78,(size_t)ppuVar1);
        __n = (undefined **)0x0;
        ppuVar14 = (undefined **)0x0;
        lVar6 = (long)ppuVar1 + lVar13;
        param_1[5] = (void *)((long)local_78 + (long)ppuVar1);
        param_1[6] = ppuVar12;
        param_2[2] = lVar6;
        local_78 = (void *)((long)local_78 + (long)ppuVar1);
joined_r0x007a9e80:
        bVar4 = lVar6 == lVar13;
        lVar13 = lVar6;
        if (bVar4) {
          return &PTR_DAT_00add698;
        }
      }
      else {
        ppuVar9 = (undefined **)((long)__n - (long)ppuVar14);
        if (__n < ppuVar14 || ppuVar9 == (undefined **)0x0) {
          __n = ppuVar12;
          if (ppuVar3 <= ppuVar12) {
            __n = ppuVar3;
          }
          ppuVar12 = (undefined **)((long)ppuVar12 - (long)__n);
          memcpy(__dest,local_78,(size_t)__n);
          ppuVar14 = (undefined **)0x0;
          param_1[5] = (void *)((long)local_78 + (long)__n);
          param_1[6] = ppuVar12;
          param_1[3] = __n;
          ppuVar9 = __n;
          local_78 = (void *)((long)local_78 + (long)__n);
LAB_007a9e38:
          if ((undefined **)(lVar2 - lVar13) <= ppuVar9) {
            ppuVar9 = (undefined **)(lVar2 - lVar13);
          }
          memcpy((void *)(lVar8 + lVar13),(void *)((long)__dest + (long)ppuVar14),(size_t)ppuVar9);
          ppuVar1 = (undefined **)((long)ppuVar9 + (long)ppuVar14);
          lVar6 = (long)ppuVar9 + lVar13;
          ppuVar14 = __n;
          if (ppuVar1 <= __n) {
            ppuVar14 = ppuVar1;
          }
          param_2[2] = lVar6;
          *puVar7 = (ulong)ppuVar14;
          goto joined_r0x007a9e80;
        }
        if (__dest != (void *)0x0) goto LAB_007a9e38;
        uVar10 = (ulong)ppuVar9 & 3;
        if (uVar10 < 2) {
          if (uVar10 == 0) {
            if (*(char *)(ppuVar9 + 2) != '#') {
              return ppuVar9;
            }
          }
          else {
            if (*(char *)((long)ppuVar9 + 0x1f) != '#') {
              return ppuVar9;
            }
            local_68 = (long)ppuVar9 - 1;
            <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_68);
          }
        }
        else if (uVar10 == 2) {
                    /* try { // try from 007a9eb8 to 007a9ecb has its CatchHandler @ 007a9f4c */
          lVar6 = core::io::error::os_functions::get_os_functions();
          iVar5 = (**(code **)(lVar6 + 0x10))((ulong)ppuVar9 >> 0x20);
          if (iVar5 == 0) {
            return ppuVar9;
          }
        }
        else {
          uVar11 = (uint)((ulong)ppuVar9 >> 0x20);
          if (10 < (ulong)ppuVar9 >> 0x22) {
            uVar11 = 0xffffffff;
          }
          if ((uVar11 & 0xff) != 0x23) {
            return ppuVar9;
          }
        }
      }
    } while (lVar2 != lVar13);
  }
  return (undefined **)0x0;
}


// ===== 007a9f64  FUN_007a9f64 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_007a9f64(undefined8 param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong __n;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *local_80;
  ulong local_78;
  ulong uStack_70;
  undefined8 local_68;
  
  uVar2 = _UNK_002a06c8;
  uVar1 = _DAT_002a06c0;
  uVar6 = 1;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
LAB_007a9fcc:
  do {
    while( true ) {
      uStack_70 = uVar2;
      local_78 = uVar1;
      local_68 = 0x20;
      local_80 = &local_a0;
      auVar8 = FUN_007df6f4(param_1,param_2,&local_80);
      __n = uStack_70;
      uVar5 = auVar8._8_8_;
      if (auVar8._0_8_ != 1) break;
      uVar5 = 0xd00000003;
LAB_007aa004:
      uVar7 = (uint)(uVar5 >> 0x20) & 0xff;
      if (10 < uVar5 >> 0x22) {
        uVar7 = 0xff;
      }
      if (uVar7 != 0x23) goto LAB_007aa0d4;
    }
    if (uVar5 == 0) {
      if (local_78 < uStack_70) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (0,uStack_70,local_78,&PTR_s__root__cargo_registry_src_index__00add920);
      }
      if (0x20 < uStack_70) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (0,uStack_70,0x20,&PTR_s__nix_store_8006w282fgsx3273c878b_00add6b0);
      }
      lVar4 = param_3[2];
      if ((ulong)(*param_3 - lVar4) < uStack_70) {
        FUN_0079be54(param_3,lVar4,uStack_70,1,1);
        lVar4 = param_3[2];
LAB_007aa0b4:
        memcpy((void *)(param_3[1] + lVar4),&local_a0,__n);
      }
      else if (uStack_70 != 0) goto LAB_007aa0b4;
      uVar6 = 0;
      param_3[2] = lVar4 + __n;
      uVar5 = __n;
      goto LAB_007aa0d4;
    }
    if (1 < (uVar5 & 3)) {
      if ((uVar5 & 3) != 2) goto LAB_007aa004;
                    /* try { // try from 007aa064 to 007aa077 has its CatchHandler @ 007aa148 */
      lVar4 = core::io::error::os_functions::get_os_functions();
      iVar3 = (**(code **)(lVar4 + 0x10))(uVar5 >> 0x20);
      if (iVar3 == 0) goto LAB_007aa0d4;
      goto LAB_007a9fcc;
    }
    if ((auVar8 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
      if (*(char *)(uVar5 + 0x10) != '#') {
LAB_007aa0d4:
        auVar8._8_8_ = uVar5;
        auVar8._0_8_ = uVar6;
        return auVar8;
      }
    }
    else {
      if (*(char *)(uVar5 + 0x1f) != '#') goto LAB_007aa0d4;
      local_78 = uVar5 - 1;
      local_80 = (undefined8 *)CONCAT71(local_80._1_7_,3);
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_78);
    }
  } while( true );
}


// ===== 007aa160  FUN_007aa160 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_007aa160(undefined8 param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong __n;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *local_80;
  ulong local_78;
  ulong uStack_70;
  undefined8 local_68;
  
  uVar2 = _UNK_002a06c8;
  uVar1 = _DAT_002a06c0;
  uVar6 = 1;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
LAB_007aa1c8:
  do {
    while( true ) {
      uStack_70 = uVar2;
      local_78 = uVar1;
      local_68 = 0x20;
      local_80 = &local_a0;
      auVar8 = FUN_007df7d8(param_1,param_2,&local_80);
      __n = uStack_70;
      uVar5 = auVar8._8_8_;
      if (auVar8._0_8_ != 1) break;
      uVar5 = 0xd00000003;
LAB_007aa200:
      uVar7 = (uint)(uVar5 >> 0x20) & 0xff;
      if (10 < uVar5 >> 0x22) {
        uVar7 = 0xff;
      }
      if (uVar7 != 0x23) goto LAB_007aa2d0;
    }
    if (uVar5 == 0) {
      if (local_78 < uStack_70) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (0,uStack_70,local_78,&PTR_s__root__cargo_registry_src_index__00add920);
      }
      if (0x20 < uStack_70) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (0,uStack_70,0x20,&PTR_s__nix_store_8006w282fgsx3273c878b_00add6b0);
      }
      lVar4 = param_3[2];
      if ((ulong)(*param_3 - lVar4) < uStack_70) {
        FUN_0079be54(param_3,lVar4,uStack_70,1,1);
        lVar4 = param_3[2];
LAB_007aa2b0:
        memcpy((void *)(param_3[1] + lVar4),&local_a0,__n);
      }
      else if (uStack_70 != 0) goto LAB_007aa2b0;
      uVar6 = 0;
      param_3[2] = lVar4 + __n;
      uVar5 = __n;
      goto LAB_007aa2d0;
    }
    if (1 < (uVar5 & 3)) {
      if ((uVar5 & 3) != 2) goto LAB_007aa200;
                    /* try { // try from 007aa260 to 007aa273 has its CatchHandler @ 007aa344 */
      lVar4 = core::io::error::os_functions::get_os_functions();
      iVar3 = (**(code **)(lVar4 + 0x10))(uVar5 >> 0x20);
      if (iVar3 == 0) goto LAB_007aa2d0;
      goto LAB_007aa1c8;
    }
    if ((auVar8 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
      if (*(char *)(uVar5 + 0x10) != '#') {
LAB_007aa2d0:
        auVar8._8_8_ = uVar5;
        auVar8._0_8_ = uVar6;
        return auVar8;
      }
    }
    else {
      if (*(char *)(uVar5 + 0x1f) != '#') goto LAB_007aa2d0;
      local_78 = uVar5 - 1;
      local_80 = (undefined8 *)CONCAT71(local_80._1_7_,3);
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_78);
    }
  } while( true );
}


// ===== 007aa35c  FUN_007aa35c =====

void FUN_007aa35c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  long local_60;
  ulong local_58;
  long local_50;
  long local_48;
  
  lVar3 = param_2[1];
  if ((*(byte *)(param_2 + 2) & 1) == 0) {
    uVar4 = *param_2;
    do {
      if (((*(long *)(lVar3 + 0x78) != 0) || ((*(byte *)(lVar3 + 0x337) & 1) != 0)) ||
         (((*(byte *)(lVar3 + 0x332) & 1) == 0 && (*(long *)(lVar3 + 0xb0) != 0)))) break;
      auVar6 = FUN_007aa528(uVar4,lVar3,param_3);
      if (auVar6._0_8_ != 0) {
        if (auVar6._0_8_ == 2) {
          bVar1 = true;
          goto LAB_007aa38c;
        }
        param_1[1] = 0;
        param_1[2] = auVar6._8_8_;
        goto LAB_007aa4e4;
      }
    } while (auVar6._8_8_ != 0);
  }
  bVar1 = false;
LAB_007aa38c:
  local_50 = lVar3 + 0x50;
  local_48 = CONCAT62(local_48._2_6_,*(undefined2 *)(lVar3 + 0x337));
  <rustls::conn::connection::[1]::rustls::conn::connection::Reader>::into_first_chunk
            (&local_60,&local_50);
  if (local_60 != 0) {
    param_1[1] = local_60;
    param_1[2] = local_58;
    goto LAB_007aa4e4;
  }
  uVar5 = local_58 & 3;
  if (uVar5 < 2) {
    if (uVar5 != 0) {
      uVar2 = (uint)*(byte *)(local_58 + 0x1f);
      goto joined_r0x007aa4dc;
    }
    if (*(char *)(local_58 + 0x10) == '\r') goto LAB_007aa470;
  }
  else {
    if (uVar5 == 2) {
                    /* try { // try from 007aa440 to 007aa453 has its CatchHandler @ 007aa510 */
      lVar3 = core::io::error::os_functions::get_os_functions();
      uVar2 = (**(code **)(lVar3 + 8))(local_58 >> 0x20);
    }
    else {
      uVar2 = (uint)(local_58 >> 0x20);
    }
joined_r0x007aa4dc:
    if ((uVar2 & 0xff) == 0xd) {
LAB_007aa470:
      if (!bVar1) {
                    /* try { // try from 007aa480 to 007aa483 has its CatchHandler @ 007aa500 */
        (**(code **)(*(long *)*param_3 + 0x10))(((long *)*param_3)[1]);
      }
      *param_1 = 1;
      if ((1 < uVar5 - 2) && (uVar5 != 0)) {
        local_48 = local_58 - 1;
        local_50 = CONCAT71(local_50._1_7_,3);
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_48);
      }
      return;
    }
  }
  param_1[1] = 0;
  param_1[2] = local_58;
LAB_007aa4e4:
  *param_1 = 0;
  return;
}


// ===== 007aa528  FUN_007aa528 =====

undefined1  [16] FUN_007aa528(undefined8 param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 local_f8;
  undefined8 uStack_f0;
  long local_e8;
  long lStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  long local_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long local_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  local_f8 = param_1;
  uStack_f0 = param_3;
  uVar2 = <rustls::vecbuf::rustls::vecbuf::ChunkVecBuffer>::is_full(param_2 + 0x50);
  if ((uVar2 & 1) == 0) {
    if ((*(byte *)(param_2 + 0x337) & 1) == 0) {
      auVar6 = <rustls::msgs::deframer::buffers::[3]::rustls::msgs::deframer::buffers::DeframerVecBuffer>
               ::read(param_2 + 0x400,&local_f8,&DAT_00add728,*(long *)(param_2 + 0x378) != 0);
      uVar2 = auVar6._8_8_;
      if (((auVar6 & (undefined1  [16])0x1) == (undefined1  [16])0x0) && (uVar2 == 0)) {
        *(undefined1 *)(param_2 + 0x338) = 1;
      }
      else if ((auVar6 & (undefined1  [16])0x1) != (undefined1  [16])0x0) goto LAB_007aa570;
    }
    else {
      uVar2 = 0;
    }
    FUN_00787758(&local_e8,param_2,param_2 + 0x400,param_2 + 0x3c8);
    if (local_e8 == -1) {
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar2;
      return auVar6 << 0x40;
    }
    lStack_a8 = lStack_e0;
    local_b0 = local_e8;
    uStack_98 = uStack_d0;
    uStack_a0 = local_d8;
    uStack_88 = uStack_c0;
    local_90 = local_c8;
    local_80 = local_b8;
                    /* try { // try from 007aa6b4 to 007aa6c3 has its CatchHandler @ 007aa780 */
    auVar6 = FUN_007aa798(param_1,param_2,param_3);
    if ((((auVar6 & (undefined1  [16])0xfffffffffffffffd) != (undefined1  [16])0x0) &&
        (1 < (auVar6._8_8_ & 3) - 2)) && ((auVar6 & (undefined1  [16])0x3) != (undefined1  [16])0x0)
       ) {
      lStack_68 = auVar6._8_8_ - 1;
      local_70 = CONCAT71(local_70._1_7_,3);
                    /* try { // try from 007aa75c to 007aa763 has its CatchHandler @ 007aa780 */
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&lStack_68);
    }
    lStack_68 = lStack_e0;
    local_70 = local_e8;
    uStack_58 = uStack_d0;
    uStack_60 = local_d8;
    uStack_48 = uStack_c0;
    local_50 = local_c8;
    local_40 = local_b8;
    uVar2 = <alloc::io::error::core::io::error::Error>::new<rustls::error::Error>(0x15,&local_70);
  }
  else {
    uVar2 = <alloc::io::error::core::io::error::Error>::new<&str>
                      (0x2a,"received plaintext buffer full",0x1e);
LAB_007aa570:
    uVar4 = uVar2 & 3;
    if (uVar4 < 2) {
      if (uVar4 != 0) {
        if (*(char *)(uVar2 + 0x1f) != '\r') goto LAB_007aa6fc;
        goto LAB_007aa62c;
      }
      cVar1 = *(char *)(uVar2 + 0x10);
    }
    else {
      if (uVar4 != 2) {
        if (((uint)(uVar2 >> 0x20) & 0xff) == 0xd) goto LAB_007aa62c;
        goto LAB_007aa6fc;
      }
                    /* try { // try from 007aa5ac to 007aa5bf has its CatchHandler @ 007aa768 */
      lVar3 = core::io::error::os_functions::get_os_functions();
      cVar1 = (**(code **)(lVar3 + 8))(uVar2 >> 0x20);
    }
    if (cVar1 == '\r') {
LAB_007aa62c:
      if ((1 < uVar4 - 2) && (uVar4 != 0)) {
        lStack_68 = uVar2 - 1;
        local_70 = CONCAT71(local_70._1_7_,3);
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&lStack_68);
      }
      auVar5._8_8_ = uVar2;
      auVar5._0_8_ = 2;
      return auVar5;
    }
  }
LAB_007aa6fc:
  auVar7._8_8_ = uVar2;
  auVar7._0_8_ = 1;
  return auVar7;
}


// ===== 007aa798  FUN_007aa798 =====

undefined1  [16] FUN_007aa798(undefined8 param_1,long param_2,long param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined8 local_40;
  long local_38;
  
  local_40 = param_1;
  local_38 = param_3;
  auVar5 = <rustls::vecbuf::rustls::vecbuf::ChunkVecBuffer>::write_to
                     (param_2 + 0x88,&local_40,&DAT_00add780);
  lVar3 = auVar5._0_8_;
  if (lVar3 != 1) goto LAB_007aa86c;
  uVar4 = auVar5._8_8_ & 3;
  if (uVar4 < 2) {
    if ((auVar5 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
      cVar1 = *(char *)(auVar5._8_8_ + 0x10);
    }
    else {
      cVar1 = *(char *)(auVar5._8_8_ + 0x1f);
    }
joined_r0x007aa824:
    if (cVar1 != '\r') goto LAB_007aa86c;
  }
  else {
    if (uVar4 == 2) {
                    /* try { // try from 007aa800 to 007aa813 has its CatchHandler @ 007aa888 */
      lVar2 = core::io::error::os_functions::get_os_functions();
      cVar1 = (**(code **)(lVar2 + 8))(auVar5._8_8_ >> 0x20);
      goto joined_r0x007aa824;
    }
    if ((auVar5._12_4_ & 0xff) != 0xd) goto LAB_007aa86c;
  }
  if ((1 < uVar4 - 2) && ((auVar5 & (undefined1  [16])0x3) != (undefined1  [16])0x0)) {
    local_38 = auVar5._8_8_ - 1;
    local_40 = CONCAT71(local_40._1_7_,3);
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_38);
  }
  lVar3 = 2;
LAB_007aa86c:
  auVar5._0_8_ = lVar3;
  return auVar5;
}


// ===== 007aa8a4  FUN_007aa8a4 =====

void FUN_007aa8a4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  long local_60;
  ulong local_58;
  long local_50;
  long local_48;
  
  lVar3 = param_2[1];
  if ((*(byte *)(param_2 + 2) & 1) == 0) {
    uVar4 = *param_2;
    do {
      if (((*(long *)(lVar3 + 0x78) != 0) || ((*(byte *)(lVar3 + 0x337) & 1) != 0)) ||
         (((*(byte *)(lVar3 + 0x332) & 1) == 0 && (*(long *)(lVar3 + 0xb0) != 0)))) break;
      auVar6 = FUN_007aaa70(uVar4,lVar3,param_3);
      if (auVar6._0_8_ != 0) {
        if (auVar6._0_8_ == 2) {
          bVar1 = true;
          goto LAB_007aa8d4;
        }
        param_1[1] = 0;
        param_1[2] = auVar6._8_8_;
        goto LAB_007aaa2c;
      }
    } while (auVar6._8_8_ != 0);
  }
  bVar1 = false;
LAB_007aa8d4:
  local_50 = lVar3 + 0x50;
  local_48 = CONCAT62(local_48._2_6_,*(undefined2 *)(lVar3 + 0x337));
  <rustls::conn::connection::[1]::rustls::conn::connection::Reader>::into_first_chunk
            (&local_60,&local_50);
  if (local_60 != 0) {
    param_1[1] = local_60;
    param_1[2] = local_58;
    goto LAB_007aaa2c;
  }
  uVar5 = local_58 & 3;
  if (uVar5 < 2) {
    if (uVar5 != 0) {
      uVar2 = (uint)*(byte *)(local_58 + 0x1f);
      goto joined_r0x007aaa24;
    }
    if (*(char *)(local_58 + 0x10) == '\r') goto LAB_007aa9b8;
  }
  else {
    if (uVar5 == 2) {
                    /* try { // try from 007aa988 to 007aa99b has its CatchHandler @ 007aaa58 */
      lVar3 = core::io::error::os_functions::get_os_functions();
      uVar2 = (**(code **)(lVar3 + 8))(local_58 >> 0x20);
    }
    else {
      uVar2 = (uint)(local_58 >> 0x20);
    }
joined_r0x007aaa24:
    if ((uVar2 & 0xff) == 0xd) {
LAB_007aa9b8:
      if (!bVar1) {
                    /* try { // try from 007aa9c8 to 007aa9cb has its CatchHandler @ 007aaa48 */
        (**(code **)(*(long *)*param_3 + 0x10))(((long *)*param_3)[1]);
      }
      *param_1 = 1;
      if ((1 < uVar5 - 2) && (uVar5 != 0)) {
        local_48 = local_58 - 1;
        local_50 = CONCAT71(local_50._1_7_,3);
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_48);
      }
      return;
    }
  }
  param_1[1] = 0;
  param_1[2] = local_58;
LAB_007aaa2c:
  *param_1 = 0;
  return;
}


// ===== 007aaa70  FUN_007aaa70 =====

undefined1  [16] FUN_007aaa70(undefined8 param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 local_f8;
  undefined8 uStack_f0;
  long local_e8;
  long lStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  long local_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long local_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  local_f8 = param_1;
  uStack_f0 = param_3;
  uVar2 = <rustls::vecbuf::rustls::vecbuf::ChunkVecBuffer>::is_full(param_2 + 0x50);
  if ((uVar2 & 1) == 0) {
    if ((*(byte *)(param_2 + 0x337) & 1) == 0) {
      auVar6 = <rustls::msgs::deframer::buffers::[3]::rustls::msgs::deframer::buffers::DeframerVecBuffer>
               ::read(param_2 + 0x400,&local_f8,&DAT_00add7d0,*(long *)(param_2 + 0x378) != 0);
      uVar2 = auVar6._8_8_;
      if (((auVar6 & (undefined1  [16])0x1) == (undefined1  [16])0x0) && (uVar2 == 0)) {
        *(undefined1 *)(param_2 + 0x338) = 1;
      }
      else if ((auVar6 & (undefined1  [16])0x1) != (undefined1  [16])0x0) goto LAB_007aaab8;
    }
    else {
      uVar2 = 0;
    }
    FUN_00787758(&local_e8,param_2,param_2 + 0x400,param_2 + 0x3c8);
    if (local_e8 == -1) {
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar2;
      return auVar6 << 0x40;
    }
    lStack_a8 = lStack_e0;
    local_b0 = local_e8;
    uStack_98 = uStack_d0;
    uStack_a0 = local_d8;
    uStack_88 = uStack_c0;
    local_90 = local_c8;
    local_80 = local_b8;
                    /* try { // try from 007aabfc to 007aac0b has its CatchHandler @ 007aacc8 */
    auVar6 = FUN_007aace0(param_1,param_2,param_3);
    if ((((auVar6 & (undefined1  [16])0xfffffffffffffffd) != (undefined1  [16])0x0) &&
        (1 < (auVar6._8_8_ & 3) - 2)) && ((auVar6 & (undefined1  [16])0x3) != (undefined1  [16])0x0)
       ) {
      lStack_68 = auVar6._8_8_ - 1;
      local_70 = CONCAT71(local_70._1_7_,3);
                    /* try { // try from 007aaca4 to 007aacab has its CatchHandler @ 007aacc8 */
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&lStack_68);
    }
    lStack_68 = lStack_e0;
    local_70 = local_e8;
    uStack_58 = uStack_d0;
    uStack_60 = local_d8;
    uStack_48 = uStack_c0;
    local_50 = local_c8;
    local_40 = local_b8;
    uVar2 = <alloc::io::error::core::io::error::Error>::new<rustls::error::Error>(0x15,&local_70);
  }
  else {
    uVar2 = <alloc::io::error::core::io::error::Error>::new<&str>
                      (0x2a,"received plaintext buffer full",0x1e);
LAB_007aaab8:
    uVar4 = uVar2 & 3;
    if (uVar4 < 2) {
      if (uVar4 != 0) {
        if (*(char *)(uVar2 + 0x1f) != '\r') goto LAB_007aac44;
        goto LAB_007aab74;
      }
      cVar1 = *(char *)(uVar2 + 0x10);
    }
    else {
      if (uVar4 != 2) {
        if (((uint)(uVar2 >> 0x20) & 0xff) == 0xd) goto LAB_007aab74;
        goto LAB_007aac44;
      }
                    /* try { // try from 007aaaf4 to 007aab07 has its CatchHandler @ 007aacb0 */
      lVar3 = core::io::error::os_functions::get_os_functions();
      cVar1 = (**(code **)(lVar3 + 8))(uVar2 >> 0x20);
    }
    if (cVar1 == '\r') {
LAB_007aab74:
      if ((1 < uVar4 - 2) && (uVar4 != 0)) {
        lStack_68 = uVar2 - 1;
        local_70 = CONCAT71(local_70._1_7_,3);
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&lStack_68);
      }
      auVar5._8_8_ = uVar2;
      auVar5._0_8_ = 2;
      return auVar5;
    }
  }
LAB_007aac44:
  auVar7._8_8_ = uVar2;
  auVar7._0_8_ = 1;
  return auVar7;
}


// ===== 007aace0  FUN_007aace0 =====

undefined1  [16] FUN_007aace0(undefined8 param_1,long param_2,long param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined8 local_40;
  long local_38;
  
  local_40 = param_1;
  local_38 = param_3;
  auVar5 = <rustls::vecbuf::rustls::vecbuf::ChunkVecBuffer>::write_to
                     (param_2 + 0x88,&local_40,&DAT_00add828);
  lVar3 = auVar5._0_8_;
  if (lVar3 != 1) goto LAB_007aadb4;
  uVar4 = auVar5._8_8_ & 3;
  if (uVar4 < 2) {
    if ((auVar5 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
      cVar1 = *(char *)(auVar5._8_8_ + 0x10);
    }
    else {
      cVar1 = *(char *)(auVar5._8_8_ + 0x1f);
    }
joined_r0x007aad6c:
    if (cVar1 != '\r') goto LAB_007aadb4;
  }
  else {
    if (uVar4 == 2) {
                    /* try { // try from 007aad48 to 007aad5b has its CatchHandler @ 007aadd0 */
      lVar2 = core::io::error::os_functions::get_os_functions();
      cVar1 = (**(code **)(lVar2 + 8))(auVar5._8_8_ >> 0x20);
      goto joined_r0x007aad6c;
    }
    if ((auVar5._12_4_ & 0xff) != 0xd) goto LAB_007aadb4;
  }
  if ((1 < uVar4 - 2) && ((auVar5 & (undefined1  [16])0x3) != (undefined1  [16])0x0)) {
    local_38 = auVar5._8_8_ - 1;
    local_40 = CONCAT71(local_40._1_7_,3);
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_38);
  }
  lVar3 = 2;
LAB_007aadb4:
  auVar5._0_8_ = lVar3;
  return auVar5;
}


// ===== 007aadec  FUN_007aadec =====

void FUN_007aadec(undefined8 *param_1,ulong *param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  void *pvVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  byte bVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  byte bVar13;
  ulong *puVar14;
  ulong *puVar15;
  byte bVar16;
  ulong uVar17;
  undefined1 auVar18 [16];
  ulong *local_958;
  undefined **ppuStack_950;
  ulong uStack_948;
  void *pvStack_940;
  ulong uStack_938;
  ulong *local_930;
  ulong uStack_928;
  ulong uStack_920;
  ulong local_918;
  ulong uStack_910;
  ulong local_908;
  ulong uStack_900;
  ulong local_8f8;
  undefined1 auStack_8f0 [48];
  long local_8c0;
  long local_888;
  byte local_606;
  byte local_605;
  byte local_601;
  byte local_518;
  ulong local_510;
  ulong uStack_508;
  ulong uStack_500;
  ulong uStack_4f8;
  ulong *local_4f0;
  undefined8 local_4e8;
  ulong *local_4e0;
  ulong uStack_4d8;
  ulong uStack_4d0;
  ulong uStack_4c8;
  ulong *local_4c0;
  undefined **ppuStack_4b8;
  ulong uStack_4b0;
  void *pvStack_4a8;
  ulong local_4a0;
  ulong uStack_498;
  ulong local_490;
  
  puVar15 = (ulong *)*param_2;
  puVar14 = (ulong *)param_2[5];
  uVar11 = param_2[0xc];
  *param_2 = 2;
  lVar6 = (long)puVar15 - (long)(ulong)(puVar15 != (ulong *)0x0);
  if (lVar6 < 2) {
    if (puVar15 != (ulong *)(ulong)(puVar15 != (ulong *)0x0)) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                (&DAT_002e3c43,0x45,&PTR_s__root__cargo_registry_src_index__00add878);
    }
    uStack_948 = param_2[2];
    ppuStack_950 = (undefined **)param_2[1];
    uStack_938 = param_2[4];
    pvStack_940 = (void *)param_2[3];
    uStack_920 = param_2[7];
    uStack_928 = param_2[6];
    uStack_910 = param_2[9];
    local_918 = param_2[8];
    uStack_900 = param_2[0xb];
    local_908 = param_2[10];
    memcpy(auStack_8f0,param_2 + 0xd,0x3e0);
    local_958 = puVar15;
    local_930 = puVar14;
    local_8f8 = uVar11;
    bVar13 = local_518;
    bVar16 = local_605;
    if (local_606 != 1) goto LAB_007ab080;
    while ((bVar16 & 1) == 0) {
LAB_007ab080:
      do {
        lVar8 = 0;
        lVar6 = 0;
        bVar16 = bVar13;
        do {
          if (local_888 != 0) {
                    /* try { // try from 007ab094 to 007ab0a3 has its CatchHandler @ 007ab4f0 */
            auVar18 = FUN_007aa798(&local_958,&uStack_938,param_3);
            lVar5 = auVar18._8_8_;
            if (auVar18._0_8_ == 2) {
LAB_007ab0f0:
              bVar1 = true;
              if ((bVar16 & 1) == 0) goto joined_r0x007ab100;
              goto LAB_007ab1a4;
            }
            if (auVar18._0_8_ == 0) {
              if (lVar5 != 0) {
                while (lVar6 = lVar6 + lVar5, local_888 != 0) {
                    /* try { // try from 007ab0c0 to 007ab0cf has its CatchHandler @ 007ab4f8 */
                  auVar18 = FUN_007aa798(&local_958,&uStack_938,param_3);
                  lVar5 = auVar18._8_8_;
                  if (auVar18._0_8_ != 0) {
                    if (auVar18._0_8_ != 2) goto LAB_007ab360;
                    goto LAB_007ab0f0;
                  }
                  if (lVar5 == 0) goto LAB_007ab358;
                }
                goto LAB_007ab0dc;
              }
LAB_007ab358:
              lVar5 = 0x1700000003;
            }
LAB_007ab360:
            memcpy(&local_4c0,&local_958,0x448);
            uStack_4d8 = (ulong)ppuStack_950;
            local_4e0 = local_958;
            uStack_4c8 = (ulong)pvStack_940;
            uStack_4d0 = uStack_948;
                    /* try { // try from 007ab380 to 007ab387 has its CatchHandler @ 007ab4dc */
            FUN_007a811c(&local_4a0);
            goto LAB_007ab388;
          }
LAB_007ab0dc:
          bVar1 = false;
          if ((bVar16 & 1) != 0) {
LAB_007ab1a4:
            if ((local_606 != 1) || ((local_605 & 1) == 0)) {
                    /* try { // try from 007ab414 to 007ab427 has its CatchHandler @ 007ab4ec */
              lVar5 = <alloc::io::error::core::io::error::Error>::new<&str>(0x25,&DAT_002e3c32,0x11)
              ;
              goto LAB_007ab360;
            }
LAB_007ab1b8:
            bVar16 = 1;
            bVar7 = 1;
            goto LAB_007ab1c0;
          }
joined_r0x007ab100:
          while (((local_8c0 == 0 && ((local_601 & 1) == 0)) &&
                 (((local_606 & 1) != 0 || (local_888 == 0))))) {
                    /* try { // try from 007ab11c to 007ab12b has its CatchHandler @ 007ab4fc */
            auVar18 = FUN_007aa528(&local_958,&uStack_938,param_3);
            lVar5 = auVar18._8_8_;
            if (auVar18._0_8_ != 0) {
              if (auVar18._0_8_ != 2) goto LAB_007ab360;
              bVar2 = true;
              goto joined_r0x007ab180;
            }
            if (lVar5 == 0) {
              bVar13 = 1;
              goto LAB_007ab1a4;
            }
            lVar8 = lVar8 + lVar5;
          }
          bVar2 = false;
joined_r0x007ab180:
          if ((local_606 == 1) && ((local_605 & 1) != 0)) goto LAB_007ab1b8;
          bVar16 = 0;
        } while (!bVar1 && !bVar2);
        bVar7 = local_606;
        bVar16 = local_605;
        if (lVar8 == 0 && lVar6 == 0) {
          memcpy(&local_4c0,&local_958,0x448);
                    /* try { // try from 007ab1e4 to 007ab1eb has its CatchHandler @ 007ab448 */
          FUN_007a85d8(param_2);
          goto LAB_007aaf5c;
        }
LAB_007ab1c0:
      } while (bVar7 == 0);
    }
    ppuStack_4b8 = &PTR_FUN_00add8d8;
                    /* try { // try from 007aaf28 to 007aaf33 has its CatchHandler @ 007ab4ec */
    local_4c0 = &uStack_938;
    lVar5 = <rustls::conn::connection::Writer_as_core::io::write::Write>::flush(&local_4c0);
    if (lVar5 == 0) {
      bVar1 = true;
      do {
        if (local_888 == 0) {
          bVar1 = false;
          lVar5 = 0;
          goto LAB_007aaf3c;
        }
                    /* try { // try from 007ab330 to 007ab33f has its CatchHandler @ 007ab4f4 */
        auVar18 = FUN_007aa798(&local_958,&uStack_938,param_3);
        lVar5 = auVar18._8_8_;
        if (auVar18._0_8_ != 0) {
          if (auVar18._0_8_ != 2) goto LAB_007aaf38;
          lVar5 = 0x1700000003;
          goto LAB_007aaf3c;
        }
      } while (lVar5 != 0);
      bVar1 = false;
      lVar5 = 0x1700000003;
    }
    else {
LAB_007aaf38:
      bVar1 = false;
    }
LAB_007aaf3c:
    if (bVar1) {
      memcpy(&local_4c0,&local_958,0x448);
                    /* try { // try from 007aaf54 to 007aaf5b has its CatchHandler @ 007ab4c0 */
      FUN_007a85d8(param_2);
LAB_007aaf5c:
      memcpy(param_2,&local_4c0,0x448);
      *param_1 = 0xffffffffffffffff;
    }
    else if (lVar5 == 0) {
      memcpy(param_1,&local_958,0x448);
    }
    else {
      memcpy(&local_4c0,&local_958,0x448);
      uStack_4d8 = (ulong)ppuStack_950;
      local_4e0 = local_958;
      uStack_4c8 = (ulong)pvStack_940;
      uStack_4d0 = uStack_948;
                    /* try { // try from 007ab220 to 007ab227 has its CatchHandler @ 007ab460 */
      FUN_007a811c(&local_4a0);
LAB_007ab388:
      *param_1 = 2;
      param_1[1] = lVar5;
      param_1[3] = uStack_4d8;
      param_1[2] = local_4e0;
      param_1[5] = uStack_4c8;
      param_1[4] = uStack_4d0;
    }
  }
  else if (lVar6 == 2) {
    uStack_508 = param_2[2];
    local_510 = param_2[1];
    uStack_4f8 = param_2[4];
    uStack_500 = param_2[3];
    uStack_948 = param_2[7];
    ppuStack_950 = (undefined **)param_2[6];
    uStack_938 = param_2[9];
    pvStack_940 = (void *)param_2[8];
    uStack_928 = param_2[0xb];
    local_930 = (ulong *)param_2[10];
    local_958 = puVar14;
    do {
                    /* try { // try from 007aae88 to 007aae97 has its CatchHandler @ 007ab50c */
      local_4f0 = &local_510;
      local_4e8 = param_3;
      auVar18 = <rustls::server::server_conn::connection::[7]::rustls::server::server_conn::connection::AcceptedAlert>
                ::write(&local_958,&local_4f0,&DAT_00add780);
      uVar12 = auVar18._8_8_;
      if (auVar18._0_8_ == 1) {
        uVar10 = uVar12 & 3;
        if (uVar10 < 2) {
          if ((auVar18 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
            cVar4 = *(char *)(uVar12 + 0x10);
          }
          else {
            cVar4 = *(char *)(uVar12 + 0x1f);
          }
joined_r0x007ab3c4:
          if (cVar4 == '\r') {
LAB_007ab254:
            uStack_4d8 = uStack_508;
            local_4e0 = (ulong *)local_510;
            uStack_4c8 = uStack_4f8;
            uStack_4d0 = uStack_500;
            local_490 = uStack_928;
            ppuStack_4b8 = ppuStack_950;
            local_4c0 = local_958;
            pvStack_4a8 = pvStack_940;
            uStack_4b0 = uStack_948;
            uStack_498 = (ulong)local_930;
            local_4a0 = uStack_938;
                    /* try { // try from 007ab278 to 007ab27f has its CatchHandler @ 007ab470 */
            FUN_007a85d8(param_2);
            *param_2 = 3;
            param_2[0xc] = uVar11;
            param_2[2] = uStack_4d8;
            param_2[1] = (ulong)local_4e0;
            param_2[4] = uStack_4c8;
            param_2[3] = uStack_4d0;
            param_2[0xb] = local_490;
            *param_1 = 0xffffffffffffffff;
            param_2[6] = (ulong)ppuStack_4b8;
            param_2[5] = (ulong)local_4c0;
            param_2[8] = (ulong)pvStack_4a8;
            param_2[7] = uStack_4b0;
            param_2[10] = uStack_498;
            param_2[9] = local_4a0;
            if (uVar10 - 2 < 2) {
              return;
            }
            if ((auVar18 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
              return;
            }
            ppuStack_4b8 = (undefined **)(uVar12 - 1);
            local_4c0 = (ulong *)CONCAT71(local_4c0._1_7_,3);
            <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&ppuStack_4b8);
            return;
          }
        }
        else {
          if (uVar10 == 2) {
                    /* try { // try from 007ab234 to 007ab247 has its CatchHandler @ 007ab4b0 */
            lVar6 = core::io::error::os_functions::get_os_functions();
            cVar4 = (**(code **)(lVar6 + 8))(uVar12 >> 0x20);
            goto joined_r0x007ab3c4;
          }
          if ((auVar18._12_4_ & 0xff) == 0xd) goto LAB_007ab254;
        }
        *param_1 = 2;
        param_1[1] = uVar11;
        param_1[3] = uStack_508;
        param_1[2] = local_510;
        param_1[5] = uStack_4f8;
        param_1[4] = uStack_500;
        if ((1 < uVar10 - 2) && ((auVar18 & (undefined1  [16])0x3) != (undefined1  [16])0x0)) {
          ppuStack_4b8 = (undefined **)(uVar12 - 1);
          local_4c0 = (ulong *)CONCAT71(local_4c0._1_7_,3);
                    /* try { // try from 007aafe4 to 007aafeb has its CatchHandler @ 007ab44c */
          <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&ppuStack_4b8);
        }
        goto LAB_007aafec;
      }
    } while (uVar12 != 0);
    *param_1 = 2;
    param_1[1] = uVar11;
    param_1[3] = uStack_508;
    param_1[2] = local_510;
    param_1[5] = uStack_4f8;
    param_1[4] = uStack_500;
LAB_007aafec:
    puVar14 = local_930;
    pvVar3 = pvStack_940;
    if (local_930 != (ulong *)0x0) {
      uVar11 = 0;
      if (uStack_948 <= uStack_938) {
        uVar11 = uStack_948;
      }
      lVar8 = uStack_938 - uVar11;
      uVar12 = uStack_948 - lVar8;
      lVar6 = 0;
      if (uVar12 <= local_930) {
        lVar6 = (long)local_930 - uVar12;
      }
      uVar10 = uStack_948;
      if (local_930 <= uVar12) {
        uVar10 = lVar8 + (long)local_930;
      }
      lVar8 = uVar10 - lVar8;
      if (lVar8 != 0) {
        puVar9 = (undefined8 *)((long)pvStack_940 + uStack_938 * 0x18 + uVar11 * -0x18 + 8);
        do {
          if (puVar9[-1] != 0) {
            free((void *)*puVar9);
          }
          lVar8 = lVar8 + -1;
          puVar9 = puVar9 + 3;
        } while (lVar8 != 0);
      }
      if (uVar12 < puVar14) {
        puVar9 = (undefined8 *)((long)pvVar3 + 8);
        do {
          if (puVar9[-1] != 0) {
            free((void *)*puVar9);
          }
          lVar6 = lVar6 + -1;
          puVar9 = puVar9 + 3;
        } while (lVar6 != 0);
      }
    }
    if (uStack_948 != 0) {
      free(pvStack_940);
    }
  }
  else {
    uVar12 = param_2[2];
    uVar11 = param_2[1];
    uVar17 = param_2[4];
    uVar10 = param_2[3];
    *param_1 = 2;
    param_1[1] = puVar14;
    param_1[3] = uVar12;
    param_1[2] = uVar11;
    param_1[5] = uVar17;
    param_1[4] = uVar10;
  }
  return;
}


// ===== 007ab534  FUN_007ab534 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_007ab534(undefined8 *param_1,ulong *param_2,undefined8 param_3)

{
  ulong uVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  void *pvVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  byte bVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  byte bVar13;
  ulong uVar14;
  ulong uVar15;
  byte bVar16;
  undefined1 auVar17 [16];
  ulong local_15e0;
  undefined1 auStack_15d8 [112];
  long local_1568;
  long local_1530;
  byte local_12ae;
  byte local_12ad;
  byte local_12a9;
  ulong local_11d0;
  ulong local_11c8;
  ulong uStack_11c0;
  ulong uStack_11b8;
  ulong uStack_11b0;
  ulong local_11a8;
  ulong auStack_11a0 [2];
  ulong local_1190;
  ulong local_1188;
  ulong uStack_1180;
  ulong uStack_1178;
  ulong uStack_1170;
  ulong local_1168;
  ulong uStack_1160;
  ulong local_1158;
  undefined1 auStack_1150 [96];
  long local_10f0;
  undefined8 local_1060;
  byte local_d78;
  ulong local_d70;
  ulong uStack_d68;
  ulong local_d60;
  void *pvStack_d58;
  ulong local_d50;
  ulong uStack_d48;
  ulong local_d40;
  undefined1 *local_d30;
  undefined8 local_d28;
  ulong local_d20;
  ulong uStack_d18;
  ulong local_d10;
  void *pvStack_d08;
  ulong local_d00;
  ulong uStack_cf8;
  ulong local_cf0;
  ulong *local_8d8;
  undefined **local_8d0 [270];
  
  local_1060 = 0;
  local_15e0 = 0;
  uVar15 = *param_2;
  uVar14 = param_2[0x8a];
  uVar12 = param_2[0x91];
  *param_2 = 2;
  lVar7 = uVar15 - (uVar15 != 0);
  if (lVar7 < 2) {
    if (uVar15 != (uVar15 != 0)) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                (&DAT_002e3c43,0x45,&PTR_s__root__cargo_registry_src_index__00add878);
    }
    memcpy(auStack_15d8,param_2 + 1,0x448);
    uStack_1180 = param_2[0x8c];
    local_1188 = param_2[0x8b];
    uStack_1170 = param_2[0x8e];
    uStack_1178 = param_2[0x8d];
    uStack_1160 = param_2[0x90];
    local_1168 = param_2[0x8f];
    memcpy(auStack_1150,param_2 + 0x92,0x3e0);
    local_15e0 = uVar15;
    local_1190 = uVar14;
    local_1158 = uVar12;
    bVar13 = local_d78;
    bVar16 = local_12ad;
    if (local_12ae != 1) goto LAB_007ab810;
    while ((bVar16 & 1) == 0) {
LAB_007ab810:
      do {
        lVar9 = 0;
        lVar7 = 0;
        bVar16 = bVar13;
        do {
          if (local_1530 != 0) {
                    /* try { // try from 007ab824 to 007ab833 has its CatchHandler @ 007abd5c */
            auVar17 = FUN_007aace0(&uStack_11c0,&local_15e0,param_3);
            lVar11 = auVar17._8_8_;
            if (auVar17._0_8_ == 2) {
LAB_007ab8c4:
              bVar2 = true;
              goto LAB_007ab8c8;
            }
            if (auVar17._0_8_ == 0) {
              if (lVar11 != 0) {
                while (lVar7 = lVar7 + lVar11, local_1530 != 0) {
                    /* try { // try from 007ab850 to 007ab85f has its CatchHandler @ 007abd60 */
                  auVar17 = FUN_007aace0(&uStack_11c0,&local_15e0,param_3);
                  lVar11 = auVar17._8_8_;
                  if (auVar17._0_8_ != 0) {
                    if (auVar17._0_8_ != 2) goto LAB_007abba4;
                    bVar2 = true;
                    goto joined_r0x007ab89c;
                  }
                  if (lVar11 == 0) goto LAB_007abb9c;
                }
                bVar2 = false;
joined_r0x007ab89c:
                if (uStack_11c0 != 2) {
                  local_8d8 = auStack_11a0;
                  local_8d0[0] = &PTR_FUN_00add8d8;
                    /* try { // try from 007ab8ac to 007ab8b7 has its CatchHandler @ 007abd5c */
                  lVar11 = <rustls::conn::connection::Writer_as_core::io::write::Write>::flush
                                     (&local_8d8);
                  if (lVar11 == 0) {
                    do {
                      if (local_10f0 == 0) {
                        lVar11 = 0;
                        bVar6 = false;
                        goto LAB_007ab8c0;
                      }
                    /* try { // try from 007ab944 to 007ab953 has its CatchHandler @ 007abd54 */
                      auVar17 = FUN_007aa798(&uStack_11c0,auStack_11a0,param_3);
                      lVar11 = auVar17._8_8_;
                      if (auVar17._0_8_ != 0) {
                        if (auVar17._0_8_ != 2) goto LAB_007ab8bc;
                        bVar6 = true;
                        lVar11 = 0x1700000003;
                        goto LAB_007ab8c0;
                      }
                    } while (lVar11 != 0);
                    bVar6 = false;
                    lVar11 = 0x1700000003;
                  }
                  else {
LAB_007ab8bc:
                    bVar6 = false;
                  }
LAB_007ab8c0:
                  if (bVar6) goto LAB_007ab8c4;
                  if (lVar11 != 0) goto LAB_007abba4;
                }
                goto LAB_007ab8c8;
              }
LAB_007abb9c:
              lVar11 = 0x1700000003;
            }
LAB_007abba4:
            memcpy(&local_8d8,&local_15e0,0x870);
            memcpy(&local_d20,&uStack_11c0,0x448);
                    /* try { // try from 007abbc4 to 007abbcb has its CatchHandler @ 007abd40 */
            FUN_007a811c(&local_8d8);
            goto LAB_007abbcc;
          }
          bVar2 = false;
LAB_007ab8c8:
          if ((bVar16 & 1) != 0) {
LAB_007ab9d0:
            if ((local_12ae != 1) || ((local_12ad & 1) == 0)) {
              lVar11 = <alloc::io::error::core::io::error::Error>::new<&str>
                                 (0x25,&DAT_002e3c32,0x11);
              goto LAB_007abba4;
            }
LAB_007ab9e4:
            bVar16 = 1;
            bVar8 = 1;
            goto LAB_007ab9ec;
          }
          while (((local_1568 == 0 && ((local_12a9 & 1) == 0)) &&
                 (((local_12ae & 1) != 0 || (local_1530 == 0))))) {
                    /* try { // try from 007ab8f0 to 007ab8ff has its CatchHandler @ 007abd64 */
            auVar17 = FUN_007aaa70(&uStack_11c0,&local_15e0,param_3);
            lVar11 = auVar17._8_8_;
            if (auVar17._0_8_ != 0) {
              if (auVar17._0_8_ != 2) goto LAB_007abba4;
              bVar6 = true;
              goto joined_r0x007ab984;
            }
            if (lVar11 == 0) {
              bVar13 = 1;
              goto LAB_007ab9d0;
            }
            lVar9 = lVar9 + lVar11;
          }
          bVar6 = false;
joined_r0x007ab984:
          if ((local_12ae == 1) && ((local_12ad & 1) != 0)) goto LAB_007ab9e4;
          bVar16 = 0;
        } while (!bVar2 && !bVar6);
        bVar8 = local_12ae;
        bVar16 = local_12ad;
        if (lVar9 == 0 && lVar7 == 0) {
          memcpy(&local_8d8,&local_15e0,0x870);
                    /* try { // try from 007aba10 to 007aba17 has its CatchHandler @ 007abca0 */
          FUN_007a882c(param_2);
          goto LAB_007ab6dc;
        }
LAB_007ab9ec:
      } while (bVar8 == 0);
    }
    local_8d0[0] = &PTR_FUN_00add8d8;
                    /* try { // try from 007ab6a8 to 007ab6b3 has its CatchHandler @ 007abd50 */
    local_8d8 = &local_15e0;
    uVar12 = <rustls::conn::connection::Writer_as_core::io::write::Write>::flush(&local_8d8);
    if (uVar12 == 0) {
      do {
        if (local_1530 == 0) {
                    /* try { // try from 007abc58 to 007abc7f has its CatchHandler @ 007abd50 */
          auVar17 = FUN_007dfb7c(&uStack_11c0,param_3);
          goto LAB_007ab6bc;
        }
                    /* try { // try from 007abb74 to 007abb83 has its CatchHandler @ 007abd58 */
        auVar17 = FUN_007aace0(&uStack_11c0,&local_15e0,param_3);
        uVar12 = auVar17._8_8_;
        if (auVar17._0_8_ != 0) {
          if (auVar17._0_8_ != 2) goto LAB_007ab6b8;
          auVar17._8_8_ = 0x1700000003;
          auVar17._0_8_ = 1;
          goto LAB_007ab6bc;
        }
      } while (uVar12 != 0);
      auVar17 = ZEXT816(0x1700000003) << 0x40;
    }
    else {
LAB_007ab6b8:
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar12;
      auVar17 = auVar3 << 0x40;
    }
LAB_007ab6bc:
    lVar11 = auVar17._8_8_;
    if (auVar17._0_8_ == 1) {
      memcpy(&local_8d8,&local_15e0,0x870);
                    /* try { // try from 007ab6d4 to 007ab6db has its CatchHandler @ 007abd24 */
      FUN_007a882c(param_2);
LAB_007ab6dc:
      memcpy(param_2,&local_8d8,0x870);
      *param_1 = 0xffffffffffffffff;
    }
    else if (lVar11 == 0) {
      memcpy(param_1,&local_15e0,0x870);
    }
    else {
      memcpy(&local_8d8,&local_15e0,0x870);
      memcpy(&local_d20,&uStack_11c0,0x448);
                    /* try { // try from 007aba4c to 007aba53 has its CatchHandler @ 007abcb8 */
      FUN_007a811c(&local_8d8);
LAB_007abbcc:
      memcpy(param_1 + 2,&local_d20,0x448);
      *param_1 = 2;
      param_1[1] = lVar11;
    }
  }
  else if (lVar7 == 2) {
    memcpy(&local_15e0,param_2 + 8,0x410);
    uStack_11c0 = param_2[0x8c];
    local_11c8 = param_2[0x8b];
    uStack_11b0 = param_2[0x8e];
    uStack_11b8 = param_2[0x8d];
    auStack_11a0[0] = param_2[0x90];
    local_11a8 = param_2[0x8f];
    uStack_d68 = param_2[2];
    local_d70 = param_2[1];
    pvStack_d58 = (void *)param_2[4];
    local_d60 = param_2[3];
    local_d40 = param_2[7];
    uStack_d48 = param_2[6];
    local_d50 = param_2[5];
    local_11d0 = uVar14;
    do {
                    /* try { // try from 007ab5fc to 007ab60b has its CatchHandler @ 007abd74 */
      local_d30 = (undefined1 *)&local_15e0;
      local_d28 = param_3;
      auVar17 = <rustls::server::server_conn::connection::[7]::rustls::server::server_conn::connection::AcceptedAlert>
                ::write(&local_d70,&local_d30,&DAT_00add828);
      uVar14 = auVar17._8_8_;
      if (auVar17._0_8_ == 1) {
        uVar15 = uVar14 & 3;
        if (uVar15 < 2) {
          if ((auVar17 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
            cVar5 = *(char *)(uVar14 + 0x10);
          }
          else {
            cVar5 = *(char *)(uVar14 + 0x1f);
          }
joined_r0x007abc14:
          if (cVar5 == '\r') {
LAB_007aba80:
            memcpy(&local_8d8,&local_15e0,0x448);
            uStack_d18 = uStack_d68;
            local_d20 = local_d70;
            pvStack_d08 = pvStack_d58;
            local_d10 = local_d60;
            uStack_cf8 = uStack_d48;
            local_d00 = local_d50;
            local_cf0 = local_d40;
                    /* try { // try from 007abab0 to 007abab7 has its CatchHandler @ 007abcc8 */
            FUN_007a882c(param_2);
            *param_2 = 3;
            param_2[2] = uStack_d18;
            param_2[1] = local_d20;
            param_2[4] = (ulong)pvStack_d08;
            param_2[3] = local_d10;
            param_2[6] = uStack_cf8;
            param_2[5] = local_d00;
            param_2[7] = local_cf0;
            memcpy(param_2 + 8,&local_8d8,0x448);
            param_2[0x91] = uVar12;
            *param_1 = 0xffffffffffffffff;
            if (uVar15 - 2 < 2) {
              return;
            }
            if ((auVar17 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
              return;
            }
            local_8d0[0] = (undefined **)(uVar14 - 1);
            local_8d8 = (ulong *)CONCAT71(local_8d8._1_7_,3);
            <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(local_8d0);
            return;
          }
        }
        else {
          if (uVar15 == 2) {
                    /* try { // try from 007aba60 to 007aba73 has its CatchHandler @ 007abd14 */
            lVar7 = core::io::error::os_functions::get_os_functions();
            cVar5 = (**(code **)(lVar7 + 8))(uVar14 >> 0x20);
            goto joined_r0x007abc14;
          }
          if ((auVar17._12_4_ & 0xff) == 0xd) goto LAB_007aba80;
        }
        memcpy(param_1 + 2,&local_15e0,0x448);
        *param_1 = 2;
        param_1[1] = uVar12;
        if ((1 < uVar15 - 2) && ((auVar17 & (undefined1  [16])0x3) != (undefined1  [16])0x0)) {
          local_8d0[0] = (undefined **)(uVar14 - 1);
          local_8d8 = (ulong *)CONCAT71(local_8d8._1_7_,3);
                    /* try { // try from 007ab770 to 007ab777 has its CatchHandler @ 007abca4 */
          <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(local_8d0);
        }
        goto LAB_007ab778;
      }
    } while (uVar14 != 0);
    memcpy(param_1 + 2,&local_15e0,0x448);
    *param_1 = 2;
    param_1[1] = uVar12;
LAB_007ab778:
    uVar12 = uStack_d48;
    pvVar4 = pvStack_d58;
    if (uStack_d48 != 0) {
      uVar14 = 0;
      if (local_d60 <= local_d50) {
        uVar14 = local_d60;
      }
      lVar9 = local_d50 - uVar14;
      uVar15 = local_d60 - lVar9;
      lVar7 = 0;
      if (uVar15 <= uStack_d48) {
        lVar7 = uStack_d48 - uVar15;
      }
      uVar1 = local_d60;
      if (uStack_d48 <= uVar15) {
        uVar1 = lVar9 + uStack_d48;
      }
      lVar9 = uVar1 - lVar9;
      if (lVar9 != 0) {
        puVar10 = (undefined8 *)((long)pvStack_d58 + local_d50 * 0x18 + uVar14 * -0x18 + 8);
        do {
          if (puVar10[-1] != 0) {
            free((void *)*puVar10);
          }
          lVar9 = lVar9 + -1;
          puVar10 = puVar10 + 3;
        } while (lVar9 != 0);
      }
      if (uVar15 < uVar12) {
        puVar10 = (undefined8 *)((long)pvVar4 + 8);
        do {
          if (puVar10[-1] != 0) {
            free((void *)*puVar10);
          }
          lVar7 = lVar7 + -1;
          puVar10 = puVar10 + 3;
        } while (lVar7 != 0);
      }
    }
    if (local_d60 != 0) {
      free(pvStack_d58);
    }
  }
  else {
    memcpy(param_1 + 2,param_2 + 1,0x448);
    *param_1 = 2;
    param_1[1] = uVar14;
  }
  return;
}


// ===== 007abd9c  <reqwest::async_impl::decoder::Decoder_as_http_body::Body>::size_hint =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::async_impl::decoder::Decoder as http_body::Body>::size_hint */

void __rustcall
<reqwest::async_impl::decoder::Decoder_as_http_body::Body>::size_hint(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007abda4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x28))(*param_1);
  return;
}


// ===== 007abda8  FUN_007abda8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_007abda8(long param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined1 auVar6 [16];
  long local_d8;
  undefined *puStack_d0;
  long local_c8;
  undefined *puStack_c0;
  long *local_b8;
  undefined *puStack_b0;
  long local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined8 uStack_90;
  char *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined *local_58;
  long *plStack_50;
  undefined1 uStack_41;
  
  uVar2 = param_3[1];
  uVar4 = param_3[2];
  puVar1 = (undefined *)(uVar2 - uVar4);
  if (uVar2 < uVar4) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (uVar4,uVar2,uVar2,&PTR_s__root__cargo_registry_src_index__00add8a8);
  }
  lVar3 = *param_3;
  local_98 = (undefined *)0x0;
  uStack_90 = 0;
  local_a8 = lVar3 + uVar4;
  local_a0 = puVar1;
  auVar6 = FUN_00773180(param_1,param_2,&local_a8);
  if (((auVar6 & (undefined1  [16])0x1) == (undefined1  [16])0x0) && (auVar6._8_8_ == 0)) {
    puVar5 = local_98;
    if (local_a0 < local_98) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (0,local_98,local_a0,&PTR_s__root__cargo_registry_src_index__00adfea0);
    }
  }
  else {
    if ((auVar6 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
      return 1;
    }
    puVar5 = (undefined *)0x0;
    if (auVar6._8_8_ != 0) {
      return 0;
    }
  }
  if (4 < *(ulong *)PTR_MAX_LOG_LEVEL_FILTER_00b00c78) {
    if (puVar1 < puVar5) goto LAB_007abf14;
    local_c8 = param_1 + 0x448;
    plStack_50 = &local_c8;
    puStack_c0 = PTR_fmt_00b00c48;
    local_b8 = &local_d8;
    uStack_90 = _UNK_002a00f8;
    local_98 = _DAT_002a00f0;
    puStack_b0 = PTR_fmt_00b00ed0;
    local_a8 = 0;
    local_a0 = &DAT_002e3b6e;
    local_70 = &DAT_002e3b6e;
    uStack_68 = 0x19;
    local_58 = &DAT_002e3c65;
    uStack_78 = _UNK_002a03d8;
    local_80 = _DAT_002a03d0;
    local_88 = 
    "/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/reqwest-0.12.15/src/connect.rs";
    local_60 = DAT_002a1730;
    local_d8 = lVar3 + uVar4;
    puStack_d0 = puVar5;
    <log::__private_api::GlobalLogger_as_log::Log>::log(&uStack_41,&local_a8);
  }
  if (puVar5 <= puVar1) {
    puVar1 = puVar5 + uVar4;
    if (!CARRY8((ulong)puVar5,uVar4)) {
      puVar5 = (undefined *)param_3[3];
      if ((undefined *)param_3[3] <= puVar1) {
        puVar5 = puVar1;
      }
      param_3[2] = (long)puVar1;
      param_3[3] = (long)puVar5;
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed(&DAT_002a1770,8,&PTR_s__root__cargo_registry_src_index__00add6c8);
  }
LAB_007abf14:
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (0,puVar5,puVar1,&PTR_s__root__cargo_registry_src_index__00add890);
}


// ===== 007abf6c  FUN_007abf6c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_007abf6c(long param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined1 auVar6 [16];
  long local_d8;
  undefined *puStack_d0;
  long local_c8;
  undefined *puStack_c0;
  long *local_b8;
  undefined *puStack_b0;
  long local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined8 uStack_90;
  char *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined *local_58;
  long *plStack_50;
  undefined1 uStack_41;
  
  uVar2 = param_3[1];
  uVar4 = param_3[2];
  puVar1 = (undefined *)(uVar2 - uVar4);
  if (uVar2 < uVar4) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (uVar4,uVar2,uVar2,&PTR_s__root__cargo_registry_src_index__00add8a8);
  }
  lVar3 = *param_3;
  local_98 = (undefined *)0x0;
  uStack_90 = 0;
  local_a8 = lVar3 + uVar4;
  local_a0 = puVar1;
  auVar6 = FUN_00773354(param_1,param_2,&local_a8);
  if (((auVar6 & (undefined1  [16])0x1) == (undefined1  [16])0x0) && (auVar6._8_8_ == 0)) {
    puVar5 = local_98;
    if (local_a0 < local_98) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (0,local_98,local_a0,&PTR_s__root__cargo_registry_src_index__00adfea0);
    }
  }
  else {
    if ((auVar6 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
      return 1;
    }
    puVar5 = (undefined *)0x0;
    if (auVar6._8_8_ != 0) {
      return 0;
    }
  }
  if (4 < *(ulong *)PTR_MAX_LOG_LEVEL_FILTER_00b00c78) {
    if (puVar1 < puVar5) goto LAB_007ac0d8;
    local_c8 = param_1 + 0x870;
    plStack_50 = &local_c8;
    puStack_c0 = PTR_fmt_00b00c48;
    local_b8 = &local_d8;
    uStack_90 = _UNK_002a00f8;
    local_98 = _DAT_002a00f0;
    puStack_b0 = PTR_fmt_00b00ed0;
    local_a8 = 0;
    local_a0 = &DAT_002e3b6e;
    local_70 = &DAT_002e3b6e;
    uStack_68 = 0x19;
    local_58 = &DAT_002e3c65;
    uStack_78 = _UNK_002a03d8;
    local_80 = _DAT_002a03d0;
    local_88 = 
    "/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/reqwest-0.12.15/src/connect.rs";
    local_60 = DAT_002a1730;
    local_d8 = lVar3 + uVar4;
    puStack_d0 = puVar5;
    <log::__private_api::GlobalLogger_as_log::Log>::log(&uStack_41,&local_a8);
  }
  if (puVar5 <= puVar1) {
    puVar1 = puVar5 + uVar4;
    if (!CARRY8((ulong)puVar5,uVar4)) {
      puVar5 = (undefined *)param_3[3];
      if ((undefined *)param_3[3] <= puVar1) {
        puVar5 = puVar1;
      }
      param_3[2] = (long)puVar1;
      param_3[3] = (long)puVar5;
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed(&DAT_002a1770,8,&PTR_s__root__cargo_registry_src_index__00add6c8);
  }
LAB_007ac0d8:
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (0,puVar5,puVar1,&PTR_s__root__cargo_registry_src_index__00add890);
}


// ===== 007ac130  FUN_007ac130 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_007ac130(long *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined1 auVar6 [16];
  long local_d8;
  undefined *puStack_d0;
  long *local_c8;
  undefined *puStack_c0;
  long *local_b8;
  undefined *puStack_b0;
  long local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined8 uStack_90;
  char *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined *local_58;
  long **pplStack_50;
  undefined1 uStack_41;
  
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  puVar2 = (undefined *)(uVar3 - uVar4);
  if (uVar3 < uVar4) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (uVar4,uVar3,uVar3,&PTR_s__root__cargo_registry_src_index__00add8a8);
  }
  lVar1 = *param_3 + uVar4;
  local_a8 = lVar1;
  local_a0 = puVar2;
  if (*param_1 == 2) {
    local_98 = (undefined *)0x0;
    uStack_90 = 0;
    auVar6 = <tokio::net::tcp::stream::TcpStream_as_tokio::io::async_read::AsyncRead>::poll_read
                       (param_1 + 1,param_2,&local_a8);
    uVar3 = auVar6._0_8_;
    if (((auVar6 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || (auVar6._8_8_ != 0))
    goto LAB_007ac1e4;
LAB_007ac1b0:
    if (local_a0 < local_98) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (0,local_98,local_a0,&PTR_s__root__cargo_registry_src_index__00adfea0);
    }
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar3;
    puVar5 = local_98;
  }
  else {
    local_98 = (undefined *)0x0;
    uStack_90 = 0;
    auVar6 = FUN_00773180(param_1,param_2,&local_a8);
    uVar3 = auVar6._0_8_;
    if (((auVar6 & (undefined1  [16])0x1) == (undefined1  [16])0x0) && (auVar6._8_8_ == 0))
    goto LAB_007ac1b0;
LAB_007ac1e4:
    puVar5 = (undefined *)0x0;
  }
  if ((auVar6 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
    return 1;
  }
  if (auVar6._8_8_ != 0) {
    return 0;
  }
  if (4 < *(ulong *)PTR_MAX_LOG_LEVEL_FILTER_00b00c78) {
    if (puVar2 < puVar5) goto LAB_007ac310;
    local_c8 = param_1 + 0x89;
    pplStack_50 = &local_c8;
    local_b8 = &local_d8;
    local_a8 = 0;
    local_a0 = &DAT_002e3b6e;
    local_70 = &DAT_002e3b6e;
    uStack_68 = 0x19;
    local_58 = &DAT_002e3c65;
    local_88 = 
    "/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/reqwest-0.12.15/src/connect.rs";
    local_d8 = lVar1;
    puStack_d0 = puVar5;
    puStack_c0 = PTR_fmt_00b00c48;
    puStack_b0 = PTR_fmt_00b00ed0;
    local_98 = _DAT_002a00f0;
    uStack_90 = _UNK_002a00f8;
    local_80 = _DAT_002a03d0;
    uStack_78 = _UNK_002a03d8;
    local_60 = DAT_002a1730;
    <log::__private_api::GlobalLogger_as_log::Log>::log(&uStack_41,&local_a8);
  }
  if (puVar5 <= puVar2) {
    puVar2 = puVar5 + uVar4;
    if (!CARRY8((ulong)puVar5,uVar4)) {
      puVar5 = (undefined *)param_3[3];
      if ((undefined *)param_3[3] <= puVar2) {
        puVar5 = puVar2;
      }
      param_3[2] = (long)puVar2;
      param_3[3] = (long)puVar5;
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed(&DAT_002a1770,8,&PTR_s__root__cargo_registry_src_index__00add6c8);
  }
LAB_007ac310:
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (0,puVar5,puVar2,&PTR_s__root__cargo_registry_src_index__00add890);
}


// ===== 007ac340  <reqwest::async_impl::decoder::Decoder_as_http_body::Body>::poll_frame =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::async_impl::decoder::Decoder as http_body::Body>::poll_frame */

void __rustcall
<reqwest::async_impl::decoder::Decoder_as_http_body::Body>::poll_frame
          (long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long local_f0;
  long local_e8;
  long lStack_e0;
  long local_d8;
  long lStack_d0;
  long local_c8;
  long lStack_c0;
  long local_b8;
  long lStack_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long lStack_38;
  long lStack_30;
  undefined2 local_28;
  undefined6 uStack_26;
  
  (**(code **)(param_2[1] + 0x18))(&local_f0,*param_2);
  if (local_f0 == 3) {
    *param_1 = 3;
    return;
  }
  if (local_f0 != -2) {
    if (local_f0 == -3) {
      *param_1 = -3;
      return;
    }
    *param_1 = local_f0;
    param_1[1] = local_e8;
    param_1[6] = lStack_c0;
    param_1[5] = local_c8;
    param_1[8] = lStack_b0;
    param_1[7] = local_b8;
    param_1[10] = lStack_a0;
    param_1[9] = local_a8;
    param_1[0xb] = local_98;
    param_1[4] = lStack_d0;
    param_1[3] = local_d8;
    param_1[2] = lStack_e0;
    return;
  }
  lStack_38 = local_e8;
  lStack_30 = lStack_e0;
  local_28 = 5;
  local_90 = 0xffffffffffffffff;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)FUN_004b25a4(0x70,8);
  if (puVar1 != (undefined8 *)0x0) {
    *param_1 = -2;
    param_1[1] = (long)puVar1;
    puVar1[7] = uStack_58;
    puVar1[6] = local_60;
    puVar1[9] = uStack_48;
    puVar1[8] = uStack_50;
    puVar1[0xb] = lStack_38;
    puVar1[10] = local_40;
    puVar1[0xd] = CONCAT62(uStack_26,local_28);
    puVar1[0xc] = lStack_30;
    puVar1[1] = uStack_88;
    *puVar1 = local_90;
    puVar1[3] = uStack_78;
    puVar1[2] = local_80;
    puVar1[5] = uStack_68;
    puVar1[4] = uStack_70;
    return;
  }
                    /* try { // try from 007ac454 to 007ac45f has its CatchHandler @ 007ac464 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x70);
}


// ===== 007ac47c  FUN_007ac47c =====

undefined8 FUN_007ac47c(void)

{
  return 1;
}


// ===== 007ac484  FUN_007ac484 =====

undefined8 FUN_007ac484(long param_1,undefined8 param_2)

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


// ===== 007ac550  FUN_007ac550 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_007ac550(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  long local_e0;
  ulong uStack_d8;
  long local_d0;
  undefined *puStack_c8;
  undefined1 *local_c0;
  undefined *puStack_b8;
  long local_b0;
  undefined **ppuStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined *local_60;
  long *plStack_58;
  undefined1 uStack_31;
  
  if (param_4 == 0) {
    if (*(ulong *)PTR_MAX_LOG_LEVEL_FILTER_00b00c78 < 5) {
      return ZEXT816(0);
    }
    uVar4 = 0;
  }
  else {
    uVar3 = 0;
    do {
      ppuStack_a8 = &PTR_FUN_00add8d8;
      local_b0 = param_1 + 0x20;
      if (param_4 < uVar3) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (uVar3,param_4,param_4,&PTR_s__root__cargo_registry_src_index__00add908);
      }
      auVar5 = <rustls::conn::connection::Writer_as_core::io::write::Write>::write
                         (&local_b0,param_3 + uVar3,param_4 - uVar3);
      if ((auVar5 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
        auVar5._8_8_ = auVar5._8_8_;
        auVar5._0_8_ = 1;
        return auVar5;
      }
      uVar3 = uVar3 + auVar5._8_8_;
LAB_007ac5b0:
      if (*(long *)(param_1 + 0xd0) != 0) {
        auVar5 = FUN_007aa798(param_1,param_1 + 0x20,param_2);
        if (auVar5._0_8_ == 0) goto code_r0x007ac5cc;
        if (auVar5._0_8_ != 2) {
          return auVar5;
        }
        goto LAB_007ac5ec;
      }
      uVar4 = param_4;
    } while (uVar3 != param_4);
LAB_007ac5f0:
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar4;
    if (*(ulong *)PTR_MAX_LOG_LEVEL_FILTER_00b00c78 < 5) {
      return auVar1 << 0x40;
    }
    if (param_4 < uVar4) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (0,uVar4,param_4,&PTR_s__root__cargo_registry_src_index__00add8c0);
    }
  }
  local_d0 = param_1 + 0x448;
  plStack_58 = &local_d0;
  puStack_c8 = PTR_fmt_00b00c48;
  uStack_98 = _UNK_002a00f8;
  local_a0 = _DAT_002a00f0;
  puStack_b8 = PTR_fmt_00b00ed0;
  local_b0 = 0;
  ppuStack_a8 = (undefined **)&DAT_002e3b6e;
  local_78 = &DAT_002e3b6e;
  uStack_70 = 0x19;
  local_60 = &DAT_002e3c76;
  uStack_80 = _UNK_002a03d8;
  local_88 = _DAT_002a03d0;
  local_90 = 
  "/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/reqwest-0.12.15/src/connect.rs";
  local_68 = DAT_002a1918;
  local_e0 = param_3;
  uStack_d8 = uVar4;
  local_c0 = (undefined1 *)&local_e0;
  <log::__private_api::GlobalLogger_as_log::Log>::log(&uStack_31,&local_b0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar4;
  return auVar2 << 0x40;
code_r0x007ac5cc:
  if (auVar5._8_8_ == 0) {
LAB_007ac5ec:
    uVar4 = uVar3;
    if (uVar3 == 0) {
      return ZEXT816(2);
    }
    goto LAB_007ac5f0;
  }
  goto LAB_007ac5b0;
}


// ===== 007ac730  FUN_007ac730 =====

void FUN_007ac730(long param_1,undefined8 param_2)

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


// ===== 007ac794  FUN_007ac794 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_007ac794(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  long local_e8;
  long lStack_e0;
  ulong local_d8;
  long local_d0;
  undefined *puStack_c8;
  long *local_c0;
  undefined *puStack_b8;
  long local_b0;
  undefined **ppuStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined *local_60;
  long *plStack_58;
  undefined1 uStack_31;
  
  lVar2 = param_4 << 4;
  lVar3 = param_3;
  do {
    if (lVar2 == 0) {
      uVar4 = 0;
      goto LAB_007ac848;
    }
    plVar1 = (long *)(lVar3 + 8);
    lVar3 = lVar3 + 0x10;
    lVar2 = lVar2 + -0x10;
  } while (*plVar1 == 0);
  do {
    ppuStack_a8 = &PTR_FUN_00add8d8;
    local_b0 = param_1 + 0x20;
    auVar5 = <rustls::conn::connection::Writer_as_core::io::write::Write>::write_vectored
                       (&local_b0,param_3,param_4);
    uVar4 = auVar5._8_8_;
    if (auVar5._0_8_ == 1) {
      return auVar5;
    }
LAB_007ac808:
    if (*(long *)(param_1 + 0xd0) != 0) {
      auVar5 = FUN_007aa798(param_1,param_1 + 0x20,param_2);
      if (auVar5._0_8_ == 0) goto code_r0x007ac824;
      if (auVar5._0_8_ != 2) {
        return auVar5;
      }
      goto LAB_007ac844;
    }
  } while (uVar4 == 0);
LAB_007ac848:
  if (4 < *(ulong *)PTR_MAX_LOG_LEVEL_FILTER_00b00c78) {
    local_d0 = param_1 + 0x448;
    plStack_58 = &local_d0;
    puStack_c8 = PTR_fmt_00b00c48;
    local_c0 = &local_e8;
    uStack_98 = _UNK_002a00f8;
    local_a0 = _DAT_002a00f0;
    puStack_b8 = PTR_fmt_00b00ed8;
    local_b0 = 0;
    ppuStack_a8 = (undefined **)&DAT_002e3b6e;
    local_78 = &DAT_002e3b6e;
    uStack_70 = 0x19;
    local_60 = &DAT_002e3c88;
    uStack_80 = _UNK_002a03d8;
    local_88 = _DAT_002a03d0;
    local_90 = 
    "/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/reqwest-0.12.15/src/connect.rs";
    local_68 = DAT_002a1990;
    local_e8 = param_3;
    lStack_e0 = param_4;
    local_d8 = uVar4;
    <log::__private_api::GlobalLogger_as_log::Log>::log(&uStack_31,&local_b0);
  }
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar4;
  return auVar5 << 0x40;
code_r0x007ac824:
  if (auVar5._8_8_ == 0) {
LAB_007ac844:
    if (uVar4 == 0) {
      return ZEXT816(2);
    }
    goto LAB_007ac848;
  }
  goto LAB_007ac808;
}


// ===== 007ac918  FUN_007ac918 =====

void FUN_007ac918(long param_1)

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


// ===== 007ac94c  FUN_007ac94c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_007ac94c(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  long local_d8;
  ulong uStack_d0;
  long local_c8;
  undefined *puStack_c0;
  long *local_b8;
  undefined *puStack_b0;
  long local_a8;
  undefined **ppuStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  char *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined *local_58;
  long *plStack_50;
  undefined1 uStack_41;
  
  if (param_4 == 0) {
    if (*(ulong *)PTR_MAX_LOG_LEVEL_FILTER_00b00c78 < 5) {
      return ZEXT816(0);
    }
    uVar4 = 0;
  }
  else {
    uVar3 = 0;
    do {
      ppuStack_a0 = &PTR_FUN_00add8d8;
      local_a8 = param_1;
      if (param_4 < uVar3) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (uVar3,param_4,param_4,&PTR_s__root__cargo_registry_src_index__00add908);
      }
      auVar5 = <rustls::conn::connection::Writer_as_core::io::write::Write>::write
                         (&local_a8,param_3 + uVar3,param_4 - uVar3);
      if ((auVar5 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
        auVar5._8_8_ = auVar5._8_8_;
        auVar5._0_8_ = 1;
        return auVar5;
      }
      uVar3 = uVar3 + auVar5._8_8_;
LAB_007ac9a4:
      if (*(long *)(param_1 + 0xb0) != 0) {
        auVar5 = FUN_007aace0(param_1 + 0x420,param_1,param_2);
        if (auVar5._0_8_ == 0) goto code_r0x007ac9c0;
        if (auVar5._0_8_ != 2) {
          return auVar5;
        }
        goto LAB_007ac9e0;
      }
      uVar4 = param_4;
    } while (uVar3 != param_4);
LAB_007ac9e4:
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar4;
    if (*(ulong *)PTR_MAX_LOG_LEVEL_FILTER_00b00c78 < 5) {
      return auVar1 << 0x40;
    }
    if (param_4 < uVar4) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (0,uVar4,param_4,&PTR_s__root__cargo_registry_src_index__00add8c0);
    }
  }
  local_c8 = param_1 + 0x870;
  plStack_50 = &local_c8;
  puStack_c0 = PTR_fmt_00b00c48;
  local_b8 = &local_d8;
  uStack_90 = _UNK_002a00f8;
  local_98 = _DAT_002a00f0;
  puStack_b0 = PTR_fmt_00b00ed0;
  local_a8 = 0;
  ppuStack_a0 = (undefined **)&DAT_002e3b6e;
  local_70 = &DAT_002e3b6e;
  uStack_68 = 0x19;
  local_58 = &DAT_002e3c76;
  uStack_78 = _UNK_002a03d8;
  local_80 = _DAT_002a03d0;
  local_88 = 
  "/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/reqwest-0.12.15/src/connect.rs";
  local_60 = DAT_002a1918;
  local_d8 = param_3;
  uStack_d0 = uVar4;
  <log::__private_api::GlobalLogger_as_log::Log>::log(&uStack_41,&local_a8);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar4;
  return auVar2 << 0x40;
code_r0x007ac9c0:
  if (auVar5._8_8_ == 0) {
LAB_007ac9e0:
    uVar4 = uVar3;
    if (uVar3 == 0) {
      return ZEXT816(2);
    }
    goto LAB_007ac9e4;
  }
  goto LAB_007ac9a4;
}


// ===== 007acb20  FUN_007acb20 =====

void FUN_007acb20(long param_1,undefined8 param_2)

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


// ===== 007acb84  FUN_007acb84 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_007acb84(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  long local_e0;
  long lStack_d8;
  ulong local_d0;
  long local_c8;
  undefined *puStack_c0;
  undefined1 *local_b8;
  undefined *puStack_b0;
  long local_a8;
  undefined **ppuStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  char *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined *local_58;
  long *plStack_50;
  undefined1 uStack_41;
  
  lVar2 = param_4 << 4;
  lVar3 = param_3;
  do {
    if (lVar2 == 0) {
      uVar4 = 0;
      goto LAB_007acc30;
    }
    plVar1 = (long *)(lVar3 + 8);
    lVar3 = lVar3 + 0x10;
    lVar2 = lVar2 + -0x10;
  } while (*plVar1 == 0);
  do {
    ppuStack_a0 = &PTR_FUN_00add8d8;
    local_a8 = param_1;
    auVar5 = <rustls::conn::connection::Writer_as_core::io::write::Write>::write_vectored
                       (&local_a8,param_3,param_4);
    uVar4 = auVar5._8_8_;
    if (auVar5._0_8_ == 1) {
      return auVar5;
    }
LAB_007acbf0:
    if (*(long *)(param_1 + 0xb0) != 0) {
      auVar5 = FUN_007aace0(param_1 + 0x420,param_1,param_2);
      if (auVar5._0_8_ == 0) goto code_r0x007acc0c;
      if (auVar5._0_8_ != 2) {
        return auVar5;
      }
      goto LAB_007acc2c;
    }
  } while (uVar4 == 0);
LAB_007acc30:
  if (4 < *(ulong *)PTR_MAX_LOG_LEVEL_FILTER_00b00c78) {
    local_c8 = param_1 + 0x870;
    plStack_50 = &local_c8;
    puStack_c0 = PTR_fmt_00b00c48;
    uStack_90 = _UNK_002a00f8;
    local_98 = _DAT_002a00f0;
    puStack_b0 = PTR_fmt_00b00ed8;
    local_a8 = 0;
    ppuStack_a0 = (undefined **)&DAT_002e3b6e;
    local_70 = &DAT_002e3b6e;
    uStack_68 = 0x19;
    local_58 = &DAT_002e3c88;
    uStack_78 = _UNK_002a03d8;
    local_80 = _DAT_002a03d0;
    local_88 = 
    "/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/reqwest-0.12.15/src/connect.rs";
    local_60 = DAT_002a1990;
    local_e0 = param_3;
    lStack_d8 = param_4;
    local_d0 = uVar4;
    local_b8 = (undefined1 *)&local_e0;
    <log::__private_api::GlobalLogger_as_log::Log>::log(&uStack_41,&local_a8);
  }
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar4;
  return auVar5 << 0x40;
code_r0x007acc0c:
  if (auVar5._8_8_ == 0) {
LAB_007acc2c:
    if (uVar4 == 0) {
      return ZEXT816(2);
    }
    goto LAB_007acc30;
  }
  goto LAB_007acbf0;
}


// ===== 007accfc  FUN_007accfc =====

undefined1  [16] FUN_007accfc(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  long *local_40;
  undefined **ppuStack_38;
  
  if (*param_1 != 2) {
    local_40 = param_1 + 4;
    ppuStack_38 = &PTR_FUN_00add8d8;
    uVar1 = <rustls::conn::connection::Writer_as_core::io::write::Write>::flush(&local_40);
    if (uVar1 != 0) {
LAB_007acd64:
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar1;
      return auVar3 << 0x40;
    }
    uVar2 = 1;
    while (param_1[0x1a] != 0) {
      auVar3 = FUN_007aa798(param_1,param_1 + 4,param_2);
      uVar1 = auVar3._8_8_;
      if (auVar3._0_8_ != 0) {
        if (auVar3._0_8_ != 2) goto LAB_007acd64;
        goto LAB_007acdb4;
      }
      if (uVar1 == 0) {
        uVar2 = 0;
LAB_007acdb4:
        auVar4._8_8_ = 0x1700000003;
        auVar4._0_8_ = uVar2;
        return auVar4;
      }
    }
  }
  return ZEXT816(0);
}


// ===== 007acdd4  FUN_007acdd4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_007acdd4(long *param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  long lVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  long local_e0;
  ulong uStack_d8;
  long *local_d0;
  undefined *puStack_c8;
  undefined1 *local_c0;
  undefined *puStack_b8;
  long *local_b0;
  undefined **ppuStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined *local_60;
  long **pplStack_58;
  undefined1 uStack_31;
  
  if (*param_1 == 2) {
    auVar5 = <tokio::net::tcp::stream::TcpStream_as_tokio::io::async_write::AsyncWrite>::poll_write
                       (param_1 + 1,param_2,param_3,param_4);
LAB_007ace20:
    uVar4 = auVar5._8_8_;
    lVar3 = auVar5._0_8_;
    if (lVar3 != 0) {
      return auVar5;
    }
  }
  else {
    uVar4 = 0;
    if (param_4 == 0) {
      lVar3 = 0;
    }
    else {
      do {
        ppuStack_a8 = &PTR_FUN_00add8d8;
        local_b0 = param_1 + 4;
        if (param_4 < uVar4) {
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (uVar4,param_4,param_4,&PTR_s__root__cargo_registry_src_index__00add908);
        }
        auVar5 = <rustls::conn::connection::Writer_as_core::io::write::Write>::write
                           (&local_b0,param_3 + uVar4,param_4 - uVar4);
        if ((auVar5 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
          auVar5._8_8_ = auVar5._8_8_;
          auVar5._0_8_ = 1;
          goto LAB_007ace20;
        }
        uVar4 = uVar4 + auVar5._8_8_;
LAB_007ace60:
        if (param_1[0x1a] != 0) {
          auVar5 = FUN_007aa798(param_1,param_1 + 4,param_2);
          if (auVar5._0_8_ == 0) goto code_r0x007ace7c;
          if (auVar5._0_8_ == 2) goto LAB_007acea0;
          goto LAB_007ace20;
        }
      } while (uVar4 != param_4);
      lVar3 = 0;
      uVar4 = param_4;
    }
  }
LAB_007aceb8:
  if (4 < *(ulong *)PTR_MAX_LOG_LEVEL_FILTER_00b00c78) {
    if (param_4 < uVar4) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (0,uVar4,param_4,&PTR_s__root__cargo_registry_src_index__00add8c0);
    }
    local_d0 = param_1 + 0x89;
    pplStack_58 = &local_d0;
    puStack_c8 = PTR_fmt_00b00c48;
    uStack_98 = _UNK_002a00f8;
    local_a0 = _DAT_002a00f0;
    puStack_b8 = PTR_fmt_00b00ed0;
    local_b0 = (long *)0x0;
    ppuStack_a8 = (undefined **)&DAT_002e3b6e;
    local_78 = &DAT_002e3b6e;
    uStack_70 = 0x19;
    local_60 = &DAT_002e3c76;
    uStack_80 = _UNK_002a03d8;
    local_88 = _DAT_002a03d0;
    local_90 = 
    "/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/reqwest-0.12.15/src/connect.rs";
    local_68 = DAT_002a1918;
    local_e0 = param_3;
    uStack_d8 = uVar4;
    local_c0 = (undefined1 *)&local_e0;
    <log::__private_api::GlobalLogger_as_log::Log>::log(&uStack_31,&local_b0);
  }
  auVar1._8_8_ = uVar4;
  auVar1._0_8_ = lVar3;
  return auVar1;
code_r0x007ace7c:
  if (auVar5._8_8_ == 0) {
LAB_007acea0:
    lVar3 = 2;
    if (uVar4 != 0) {
      lVar3 = 0;
    }
    auVar2._8_8_ = uVar4;
    auVar2._0_8_ = lVar3;
    if (lVar3 != 0) {
      return auVar2;
    }
    goto LAB_007aceb8;
  }
  goto LAB_007ace60;
}


// ===== 007acfb8  FUN_007acfb8 =====

void FUN_007acfb8(long *param_1,undefined8 param_2)

{
  long *local_38;
  long *plStack_30;
  byte local_28;
  
  if (*param_1 == 2) {
    <tokio::net::tcp::stream::TcpStream_as_tokio::io::async_write::AsyncWrite>::poll_shutdown
              (param_1 + 1);
    return;
  }
  local_28 = *(byte *)(param_1 + 0x88);
  if (local_28 < 2) {
    <rustls::common_state::rustls::common_state::CommonState>::send_close_notify(param_1 + 4);
    local_28 = *(byte *)(param_1 + 0x88) | 2;
    *(byte *)(param_1 + 0x88) = local_28;
  }
  plStack_30 = param_1 + 4;
  local_28 = local_28 & 1;
  local_38 = param_1;
  FUN_007ad210(&local_38,param_2);
  return;
}


// ===== 007ad034  FUN_007ad034 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_007ad034(long *param_1,undefined8 param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long local_e8;
  long lStack_e0;
  undefined8 local_d8;
  long *local_d0;
  undefined *puStack_c8;
  long *local_c0;
  undefined *puStack_b8;
  long *local_b0;
  undefined **ppuStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined *local_60;
  long **pplStack_58;
  undefined1 uStack_31;
  
  if (*param_1 == 2) {
    auVar4 = <tokio::net::tcp::stream::TcpStream_as_tokio::io::async_write::AsyncWrite>::
             poll_write_vectored(param_1 + 1,param_2,param_3,param_4);
LAB_007ad080:
    lVar2 = auVar4._0_8_;
  }
  else {
    lVar3 = param_4 << 4;
    lVar2 = param_3;
    do {
      if (lVar3 == 0) {
        lVar3 = 0;
        lVar2 = 0;
        goto joined_r0x007ad10c;
      }
      plVar1 = (long *)(lVar2 + 8);
      lVar2 = lVar2 + 0x10;
      lVar3 = lVar3 + -0x10;
    } while (*plVar1 == 0);
    do {
      ppuStack_a8 = &PTR_FUN_00add8d8;
      local_b0 = param_1 + 4;
      auVar4 = <rustls::conn::connection::Writer_as_core::io::write::Write>::write_vectored
                         (&local_b0,param_3,param_4);
      lVar3 = auVar4._8_8_;
      lVar2 = auVar4._0_8_;
      if (lVar2 == 1) break;
LAB_007ad0d4:
      if (param_1[0x1a] != 0) {
        auVar4 = FUN_007aa798(param_1,param_1 + 4,param_2);
        if (auVar4._0_8_ == 0) goto code_r0x007ad0f0;
        if (auVar4._0_8_ == 2) goto LAB_007ad1c0;
        goto LAB_007ad080;
      }
      lVar2 = 0;
    } while (lVar3 == 0);
joined_r0x007ad10c:
    auVar4._8_8_ = lVar3;
    auVar4._0_8_ = lVar2;
  }
  if ((lVar2 == 0) && (local_d8 = auVar4._8_8_, 4 < *(ulong *)PTR_MAX_LOG_LEVEL_FILTER_00b00c78)) {
    local_d0 = param_1 + 0x89;
    pplStack_58 = &local_d0;
    local_c0 = &local_e8;
    local_b0 = (long *)0x0;
    ppuStack_a8 = (undefined **)&DAT_002e3b6e;
    local_78 = &DAT_002e3b6e;
    uStack_70 = 0x19;
    local_60 = &DAT_002e3c88;
    local_90 = 
    "/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/reqwest-0.12.15/src/connect.rs";
    local_e8 = param_3;
    lStack_e0 = param_4;
    puStack_c8 = PTR_fmt_00b00c48;
    puStack_b8 = PTR_fmt_00b00ed8;
    local_a0 = _DAT_002a00f0;
    uStack_98 = _UNK_002a00f8;
    local_88 = _DAT_002a03d0;
    uStack_80 = _UNK_002a03d8;
    local_68 = DAT_002a1990;
    <log::__private_api::GlobalLogger_as_log::Log>::log(&uStack_31,&local_b0);
  }
  return auVar4;
code_r0x007ad0f0:
  if (auVar4._8_8_ == 0) {
LAB_007ad1c0:
    lVar2 = 2;
    if (lVar3 != 0) {
      lVar2 = 0;
    }
    goto joined_r0x007ad10c;
  }
  goto LAB_007ad0d4;
}


// ===== 007ad1f0  FUN_007ad1f0 =====

void FUN_007ad1f0(undefined8 *param_1)

{
  <ipnet::ipnet::IpNet_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 007ad1f8  FUN_007ad1f8 =====

void FUN_007ad1f8(long *param_1)

{
  if (*param_1 == 2) {
    FUN_007df200(param_1 + 1);
    return;
  }
  FUN_007df090();
  return;
}


// ===== 007ad210  FUN_007ad210 =====

undefined1  [16] FUN_007ad210(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  ulong unaff_x19;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  long local_48;
  
  uVar1 = *param_1;
  lVar3 = param_1[1];
  uVar5 = 1;
  do {
    if (*(long *)(lVar3 + 0xb0) == 0) {
      auVar7 = <tokio::net::tcp::stream::TcpStream_as_tokio::io::async_write::AsyncWrite>::
               poll_shutdown(uVar1,param_2);
      uVar4 = auVar7._8_8_;
      if ((auVar7 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
        if (uVar4 != 0) {
          uVar6 = uVar4 & 3;
          if (uVar6 < 2) {
            if ((auVar7 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
              uVar2 = (uint)*(byte *)(uVar4 + 0x10);
            }
            else {
              uVar2 = (uint)*(byte *)(uVar4 + 0x1f);
            }
          }
          else if (uVar6 == 2) {
                    /* try { // try from 007ad2bc to 007ad2cf has its CatchHandler @ 007ad340 */
            lVar3 = core::io::error::os_functions::get_os_functions();
            uVar2 = (**(code **)(lVar3 + 8))(uVar4 >> 0x20);
          }
          else {
            uVar2 = auVar7._12_4_;
          }
          if ((uVar2 & 0xff) == 7) {
            if ((1 < uVar6 - 2) && ((auVar7 & (undefined1  [16])0x3) != (undefined1  [16])0x0)) {
              local_48 = uVar4 - 1;
              <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_48);
            }
            uVar4 = 0;
          }
        }
LAB_007ad31c:
        uVar5 = 0;
        unaff_x19 = uVar4;
      }
      else {
        uVar5 = 1;
      }
      goto LAB_007ad320;
    }
    auVar7 = FUN_007aa798(uVar1,lVar3,param_2);
    uVar4 = auVar7._8_8_;
    if (auVar7._0_8_ != 0) {
      if (auVar7._0_8_ != 2) goto LAB_007ad31c;
      unaff_x19 = 0x1700000003;
      goto LAB_007ad320;
    }
    unaff_x19 = uVar4;
    if (uVar4 == 0) {
      uVar5 = 0;
      unaff_x19 = 0x1700000003;
LAB_007ad320:
      auVar7._8_8_ = unaff_x19;
      auVar7._0_8_ = uVar5;
      return auVar7;
    }
  } while( true );
}


// ===== 007ad358  FUN_007ad358 =====

undefined8 FUN_007ad358(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  long *local_50;
  undefined **ppuStack_48;
  
  plVar3 = (long *)param_1[1];
  ppuStack_48 = &PTR_FUN_00add8d8;
  local_50 = plVar3;
  lVar1 = <rustls::conn::connection::Writer_as_core::io::write::Write>::flush(&local_50);
  if (lVar1 != 0) {
    return 0;
  }
  plVar2 = (long *)*param_1;
  while (plVar3[0x16] != 0) {
    auVar4 = FUN_007aace0(plVar2,plVar3,param_2);
    lVar1 = auVar4._0_8_;
    if (lVar1 != 0) goto LAB_007ad438;
    if (auVar4._8_8_ == 0) {
      return 0;
    }
  }
  if (*plVar2 == 2) {
    return 0;
  }
  local_50 = plVar2 + 4;
  ppuStack_48 = &PTR_FUN_00add8d8;
  lVar1 = <rustls::conn::connection::Writer_as_core::io::write::Write>::flush(&local_50);
  if (lVar1 != 0) {
    return 0;
  }
  while( true ) {
    if (plVar2[0x1a] == 0) {
      return 0;
    }
    auVar4 = FUN_007aa798(plVar2,plVar2 + 4,param_2);
    lVar1 = auVar4._0_8_;
    if (lVar1 != 0) break;
    if (auVar4._8_8_ == 0) {
      return 0;
    }
  }
LAB_007ad438:
  if (lVar1 != 2) {
    return 0;
  }
  return 1;
}


// ===== 007ad458  FUN_007ad458 =====

undefined1  [16] FUN_007ad458(long *param_1,undefined8 param_2)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  long *local_58;
  long *local_50;
  byte local_48;
  
  plVar1 = (long *)*param_1;
  lVar3 = param_1[1];
  uVar6 = 1;
  do {
    if (*(long *)(lVar3 + 0xb0) == 0) {
      if (*plVar1 == 2) {
        auVar7 = <tokio::net::tcp::stream::TcpStream_as_tokio::io::async_write::AsyncWrite>::
                 poll_shutdown(plVar1 + 1,param_2);
      }
      else {
        local_48 = *(byte *)(plVar1 + 0x88);
        if (local_48 < 2) {
          <rustls::common_state::rustls::common_state::CommonState>::send_close_notify(plVar1 + 4);
          local_48 = *(byte *)(plVar1 + 0x88) | 2;
          *(byte *)(plVar1 + 0x88) = local_48;
        }
        local_50 = plVar1 + 4;
        local_48 = local_48 & 1;
        local_58 = plVar1;
        auVar7 = FUN_007ad210(&local_58,param_2);
      }
      uVar4 = auVar7._8_8_;
      if ((auVar7 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
        if (uVar4 != 0) {
          uVar5 = uVar4 & 3;
          if (uVar5 < 2) {
            if ((auVar7 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
              uVar2 = (uint)*(byte *)(uVar4 + 0x10);
            }
            else {
              uVar2 = (uint)*(byte *)(uVar4 + 0x1f);
            }
          }
          else if (uVar5 == 2) {
                    /* try { // try from 007ad554 to 007ad567 has its CatchHandler @ 007ad5d8 */
            lVar3 = core::io::error::os_functions::get_os_functions();
            uVar2 = (**(code **)(lVar3 + 8))(uVar4 >> 0x20);
          }
          else {
            uVar2 = auVar7._12_4_;
          }
          if ((uVar2 & 0xff) == 7) {
            if ((1 < uVar5 - 2) && ((auVar7 & (undefined1  [16])0x3) != (undefined1  [16])0x0)) {
              local_50 = (long *)(uVar4 - 1);
              local_58 = (long *)CONCAT71(local_58._1_7_,3);
              <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_50);
            }
            uVar4 = 0;
          }
        }
LAB_007ad5b4:
        uVar6 = 0;
      }
      else {
        uVar6 = 1;
      }
      goto LAB_007ad5b8;
    }
    auVar7 = FUN_007aace0(plVar1,lVar3,param_2);
    uVar4 = auVar7._8_8_;
    if (auVar7._0_8_ != 0) {
      if (auVar7._0_8_ != 2) goto LAB_007ad5b4;
      uVar4 = 0x1700000003;
      goto LAB_007ad5b8;
    }
  } while (uVar4 != 0);
  uVar6 = 0;
  uVar4 = 0x1700000003;
LAB_007ad5b8:
  auVar7._8_8_ = uVar4;
  auVar7._0_8_ = uVar6;
  return auVar7;
}


// ===== 007ad5f0  FUN_007ad5f0 =====

void FUN_007ad5f0(size_t *param_1,long param_2)

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
LAB_007ad62c:
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
      if (unaff_x20 == (undefined1 *)0x0) goto LAB_007ad62c;
      memcpy(unaff_x20,__src,__n);
    }
  }
  *param_1 = __n;
  param_1[1] = (size_t)unaff_x20;
  param_1[2] = __n;
  return;
}


// ===== 007ad698  FUN_007ad698 =====

void FUN_007ad698(size_t *param_1,long param_2)

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
LAB_007ad6d4:
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
      if (unaff_x20 == (undefined1 *)0x0) goto LAB_007ad6d4;
      memcpy(unaff_x20,__src,__n);
    }
  }
  *param_1 = __n;
  param_1[1] = (size_t)unaff_x20;
  param_1[2] = __n;
  return;
}


// ===== 007ad740  FUN_007ad740 =====

void FUN_007ad740(size_t *param_1,long *param_2)

{
  size_t __n;
  undefined1 *unaff_x20;
  void *__src;
  undefined8 uVar1;
  
  if (*param_2 == 2) {
    *param_1 = 0xfffffffffffffffe;
    return;
  }
  __n = 0xffffffffffffffff;
  if ((param_2[0x62] != -1) && (param_2[100] != 0)) {
    __n = *(size_t *)(param_2[99] + 0x10);
    if ((long)__n < 0) {
      uVar1 = 0;
LAB_007ad7a4:
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(uVar1,__n);
    }
    if (__n == 0) {
      unaff_x20 = &DAT_00000001;
    }
    else {
      __src = *(void **)(param_2[99] + 8);
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar1 = 1;
      unaff_x20 = (undefined1 *)FUN_004b25a4(__n,1);
      if (unaff_x20 == (undefined1 *)0x0) goto LAB_007ad7a4;
      memcpy(unaff_x20,__src,__n);
    }
  }
  *param_1 = __n;
  param_1[1] = (size_t)unaff_x20;
  param_1[2] = __n;
  return;
}


// ===== 007ad810  FUN_007ad810 =====

undefined1  [16] FUN_007ad810(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  long *local_40;
  undefined **ppuStack_38;
  
  if (*param_1 != 2) {
    local_40 = param_1 + 4;
    ppuStack_38 = &PTR_FUN_00add8d8;
    uVar1 = <rustls::conn::connection::Writer_as_core::io::write::Write>::flush(&local_40);
    if (uVar1 != 0) {
LAB_007ad878:
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar1;
      return auVar3 << 0x40;
    }
    uVar2 = 1;
    while (param_1[0x1a] != 0) {
      auVar3 = FUN_007aa798(param_1,param_1 + 4,param_2);
      uVar1 = auVar3._8_8_;
      if (auVar3._0_8_ != 0) {
        if (auVar3._0_8_ != 2) goto LAB_007ad878;
        goto LAB_007ad8c8;
      }
      if (uVar1 == 0) {
        uVar2 = 0;
LAB_007ad8c8:
        auVar4._8_8_ = 0x1700000003;
        auVar4._0_8_ = uVar2;
        return auVar4;
      }
    }
  }
  return ZEXT816(0);
}


// ===== 007ad8e8  FUN_007ad8e8 =====

long FUN_007ad8e8(long *param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  long *local_60;
  undefined **ppuStack_58;
  
  if (*param_1 == 2) {
    lVar1 = <tokio::net::tcp::stream::TcpStream_as_tokio::io::async_write::AsyncWrite>::poll_write
                      (param_1 + 1,param_2);
    return lVar1;
  }
  uVar2 = 0;
  if (param_4 != 0) {
    do {
      ppuStack_58 = &PTR_FUN_00add8d8;
      local_60 = param_1 + 4;
      if (param_4 < uVar2) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (uVar2,param_4,param_4,&PTR_s__root__cargo_registry_src_index__00add908);
      }
      auVar3 = <rustls::conn::connection::Writer_as_core::io::write::Write>::write
                         (&local_60,param_3 + uVar2,param_4 - uVar2);
      if ((auVar3 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
        return 1;
      }
      uVar2 = uVar2 + auVar3._8_8_;
      while (param_1[0x1a] != 0) {
        auVar3 = FUN_007aa798(param_1,param_1 + 4,param_2);
        lVar1 = auVar3._0_8_;
        if (lVar1 != 0) {
          if (lVar1 != 2) {
            return lVar1;
          }
          goto LAB_007ad9c4;
        }
        if (auVar3._8_8_ == 0) {
LAB_007ad9c4:
          if (uVar2 != 0) {
            return 0;
          }
          return 2;
        }
      }
    } while (uVar2 != param_4);
  }
  return 0;
}


// ===== 007ada20  FUN_007ada20 =====

void FUN_007ada20(long *param_1,undefined8 param_2)

{
  long *local_38;
  long *plStack_30;
  byte local_28;
  
  if (*param_1 == 2) {
    <tokio::net::tcp::stream::TcpStream_as_tokio::io::async_write::AsyncWrite>::poll_shutdown
              (param_1 + 1);
    return;
  }
  local_28 = *(byte *)(param_1 + 0x88);
  if (local_28 < 2) {
    <rustls::common_state::rustls::common_state::CommonState>::send_close_notify(param_1 + 4);
    local_28 = *(byte *)(param_1 + 0x88) | 2;
    *(byte *)(param_1 + 0x88) = local_28;
  }
  plStack_30 = param_1 + 4;
  local_28 = local_28 & 1;
  local_38 = param_1;
  FUN_007ad210(&local_38,param_2);
  return;
}


// ===== 007ada9c  FUN_007ada9c =====

undefined8 FUN_007ada9c(void)

{
  return 1;
}


// ===== 007adaa4  FUN_007adaa4 =====

long FUN_007adaa4(long *param_1,undefined8 param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  long *local_60;
  undefined **ppuStack_58;
  
  if (*param_1 == 2) {
    lVar2 = <tokio::net::tcp::stream::TcpStream_as_tokio::io::async_write::AsyncWrite>::
            poll_write_vectored(param_1 + 1,param_2);
    return lVar2;
  }
  lVar3 = param_4 << 4;
  lVar2 = param_3;
  do {
    if (lVar3 == 0) {
      return 0;
    }
    plVar1 = (long *)(lVar2 + 8);
    lVar2 = lVar2 + 0x10;
    lVar3 = lVar3 + -0x10;
  } while (*plVar1 == 0);
  do {
    ppuStack_58 = &PTR_FUN_00add8d8;
    local_60 = param_1 + 4;
    auVar4 = <rustls::conn::connection::Writer_as_core::io::write::Write>::write_vectored
                       (&local_60,param_3,param_4);
    if (auVar4._0_8_ == 1) {
      return 1;
    }
    while (param_1[0x1a] != 0) {
      auVar5 = FUN_007aa798(param_1,param_1 + 4,param_2);
      lVar2 = auVar5._0_8_;
      if (lVar2 != 0) {
        if (lVar2 != 2) {
          return lVar2;
        }
        goto LAB_007adb94;
      }
      if (auVar5._8_8_ == 0) {
LAB_007adb94:
        if (auVar4._8_8_ == 0) {
          return 2;
        }
        return 0;
      }
    }
    if (auVar4._8_8_ != 0) {
      return 0;
    }
  } while( true );
}


// ===== 007adbc8  FUN_007adbc8 =====

undefined1  [16] FUN_007adbc8(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 local_30;
  ulong local_28;
  ulong local_20;
  ulong uStack_18;
  
  local_20 = 0;
  local_30 = param_2;
  local_28 = param_3;
  uStack_18 = param_3;
  auVar2 = FUN_007df6f4(*param_1,param_1[1],&local_30);
  if ((auVar2 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
    auVar3._8_8_ = 0xd00000003;
    auVar3._0_8_ = 1;
    return auVar3;
  }
  if (auVar2._8_8_ != 0) {
    auVar2._0_8_ = 1;
    return auVar2;
  }
  if (local_20 <= local_28) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_20;
    return auVar1 << 0x40;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (0,local_20,local_28,&PTR_s__root__cargo_registry_src_index__00add920);
}


// ===== 007adc44  FUN_007adc44 =====

undefined1  [16] FUN_007adc44(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 local_30;
  ulong local_28;
  ulong local_20;
  ulong uStack_18;
  
  local_20 = 0;
  local_30 = param_2;
  local_28 = param_3;
  uStack_18 = param_3;
  auVar2 = FUN_007df7d8(*param_1,param_1[1],&local_30);
  if ((auVar2 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
    auVar3._8_8_ = 0xd00000003;
    auVar3._0_8_ = 1;
    return auVar3;
  }
  if (auVar2._8_8_ != 0) {
    auVar2._0_8_ = 1;
    return auVar2;
  }
  if (local_20 <= local_28) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_20;
    return auVar1 << 0x40;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (0,local_20,local_28,&PTR_s__root__cargo_registry_src_index__00add920);
}


// ===== 007adcc0  <reqwest::connect::verbose::Escape_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::connect::verbose::Escape as core::fmt::Debug>::fmt */

undefined8 __rustcall
<reqwest::connect::verbose::Escape_as_core::fmt::Debug>::fmt
          (undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  uint uVar5;
  undefined *puVar6;
  long lVar7;
  byte *pbVar8;
  code *pcVar9;
  byte local_78 [4];
  uint local_74;
  uint *local_70;
  undefined *local_68;
  
  uVar3 = *param_2;
  lVar1 = param_2[1];
  pcVar9 = *(code **)(lVar1 + 0x18);
  uVar2 = (*pcVar9)(uVar3,&DAT_002e3ca5,2);
  puVar6 = PTR_fmt_00b00ee0;
  if ((uVar2 & 1) == 0) {
    lVar7 = param_1[1];
    if (lVar7 != 0) {
      pbVar8 = (byte *)*param_1;
      do {
        local_78[0] = *pbVar8;
        uVar5 = (uint)local_78[0];
        if (local_78[0] < 0xd) {
          if (uVar5 == 0) {
            puVar4 = &DAT_002e3cad;
          }
          else if (uVar5 == 9) {
            puVar4 = &DAT_002e3cab;
          }
          else {
            puVar4 = &DAT_002e3ca7;
            if (uVar5 != 10) goto LAB_007addd8;
          }
LAB_007add4c:
          uVar2 = (*pcVar9)(uVar3,puVar4,2);
        }
        else {
          if (local_78[0] == 0xd) {
            puVar4 = &DAT_002e3ca9;
            goto LAB_007add4c;
          }
          if ((local_78[0] == 0x22) || (local_78[0] == 0x5c)) {
            puVar4 = &DAT_002a78e3;
            local_68 = puVar6;
            local_74 = uVar5;
            local_70 = &local_74;
          }
          else {
LAB_007addd8:
            if (uVar5 - 0x20 < 0x5f) {
              puVar4 = &DAT_002ab692;
              local_74 = uVar5;
              local_70 = &local_74;
              local_68 = puVar6;
            }
            else {
              puVar4 = &DAT_002e3caf;
              local_68 = PTR_fmt_00b00c20;
              local_70 = (uint *)local_78;
            }
          }
          uVar2 = core::fmt::write(uVar3,lVar1,puVar4,&local_70);
        }
        if ((uVar2 & 1) != 0) goto LAB_007add04;
        lVar7 = lVar7 + -1;
        pbVar8 = pbVar8 + 1;
      } while (lVar7 != 0);
    }
    uVar3 = (*pcVar9)(uVar3,&DAT_002e3cba,1);
  }
  else {
LAB_007add04:
    uVar3 = 1;
  }
  return uVar3;
}


// ===== 007ade74  <reqwest::connect::verbose::Vectored_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::connect::verbose::Vectored as core::fmt::Debug>::fmt */

undefined8 __rustcall
<reqwest::connect::verbose::Vectored_as_core::fmt::Debug>::fmt(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong local_50;
  ulong uStack_48;
  
  if (param_1[1] == 0) {
    return 0;
  }
  lVar3 = param_1[1] << 4;
  uVar4 = param_1[2];
  puVar5 = (ulong *)(*param_1 + 8);
  while( true ) {
    if (uVar4 == 0) {
      return 0;
    }
    local_50 = puVar5[-1];
    uVar1 = *puVar5;
    if (uVar4 <= *puVar5) {
      uVar1 = uVar4;
    }
    uStack_48 = uVar1;
    uVar2 = <reqwest::connect::verbose::Escape_as_core::fmt::Debug>::fmt(&local_50,param_2);
    if ((uVar2 & 1) != 0) break;
    lVar3 = lVar3 + -0x10;
    puVar5 = puVar5 + 2;
    uVar4 = uVar4 - uVar1;
    if (lVar3 == 0) {
      return 0;
    }
  }
  return 1;
}


// ===== 007adf1c  FUN_007adf1c =====

undefined1  [16] FUN_007adf1c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  auVar1 = <tokio::net::tcp::stream::TcpStream_as_tokio::io::async_write::AsyncWrite>::
           poll_write_vectored(*param_1,param_1[1],param_2,param_3);
  if (auVar1._0_8_ == 2) {
    auVar1._8_8_ = 0xd00000003;
    auVar1._0_8_ = 1;
  }
  return auVar1;
}


// ===== 007adf58  FUN_007adf58 =====

undefined8 FUN_007adf58(void)

{
  return 0;
}


// ===== 007adf60  FUN_007adf60 =====

undefined1  [16] FUN_007adf60(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  auVar1 = <tokio::net::tcp::stream::TcpStream_as_tokio::io::async_write::AsyncWrite>::poll_write
                     (*param_1,param_1[1],param_2,param_3);
  if (auVar1._0_8_ == 2) {
    auVar1._8_8_ = 0xd00000003;
    auVar1._0_8_ = 1;
  }
  return auVar1;
}


// ===== 007adf9c  FUN_007adf9c =====

undefined1  [16] FUN_007adf9c(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined1 auVar9 [16];
  long *local_60;
  undefined **ppuStack_58;
  
  plVar2 = (long *)*param_1;
  lVar3 = param_1[1];
  if (*plVar2 == 2) {
    auVar9 = <tokio::net::tcp::stream::TcpStream_as_tokio::io::async_write::AsyncWrite>::
             poll_write_vectored(plVar2 + 1,lVar3,param_2,param_3);
  }
  else {
    lVar7 = param_3 << 4;
    lVar8 = param_2;
    do {
      if (lVar7 == 0) {
        auVar9 = ZEXT816(0);
        goto LAB_007ae084;
      }
      plVar1 = (long *)(lVar8 + 8);
      lVar8 = lVar8 + 0x10;
      lVar7 = lVar7 + -0x10;
    } while (*plVar1 == 0);
    while( true ) {
      ppuStack_58 = &PTR_FUN_00add8d8;
      local_60 = plVar2 + 4;
      auVar9 = <rustls::conn::connection::Writer_as_core::io::write::Write>::write_vectored
                         (&local_60,param_2,param_3);
      uVar6 = auVar9._8_8_;
      if (auVar9._0_8_ == 1) break;
LAB_007ae034:
      if (plVar2[0x1a] != 0) {
        auVar9 = FUN_007aa798(plVar2,plVar2 + 4,lVar3);
        if (auVar9._0_8_ == 0) goto code_r0x007ae050;
        if (auVar9._0_8_ == 2) goto LAB_007ae078;
        break;
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar6;
      auVar9 = auVar4 << 0x40;
      if (uVar6 != 0) break;
    }
  }
LAB_007ae084:
  if (auVar9._0_8_ == 2) {
    auVar9._8_8_ = 0xd00000003;
    auVar9._0_8_ = 1;
  }
  return auVar9;
code_r0x007ae050:
  if (auVar9._8_8_ == 0) {
LAB_007ae078:
    auVar9._8_8_ = uVar6;
    auVar9._0_8_ = 2;
    if (uVar6 != 0) {
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar6;
      auVar9 = auVar5 << 0x40;
    }
    goto LAB_007ae084;
  }
  goto LAB_007ae034;
}


// ===== 007ae0b4  FUN_007ae0b4 =====

long FUN_007ae0b4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  long *local_40;
  undefined **ppuStack_38;
  
  plVar3 = (long *)*param_1;
  if (*plVar3 == 2) {
    return 0;
  }
  uVar4 = param_1[1];
  local_40 = plVar3 + 4;
  ppuStack_38 = &PTR_FUN_00add8d8;
  lVar2 = <rustls::conn::connection::Writer_as_core::io::write::Write>::flush(&local_40);
  if (lVar2 == 0) {
    bVar5 = true;
    do {
      if (plVar3[0x1a] == 0) {
        bVar5 = false;
        lVar2 = 0;
        goto LAB_007ae164;
      }
      auVar6 = FUN_007aa798(plVar3,plVar3 + 4,uVar4);
      lVar2 = auVar6._8_8_;
      if (auVar6._0_8_ != 0) {
        if (auVar6._0_8_ != 2) goto LAB_007ae114;
        goto LAB_007ae150;
      }
    } while (lVar2 != 0);
    bVar5 = false;
LAB_007ae150:
    lVar2 = 0x1700000003;
  }
  else {
LAB_007ae114:
    bVar5 = false;
  }
LAB_007ae164:
  lVar1 = 0xd00000003;
  if (!bVar5) {
    lVar1 = lVar2;
  }
  return lVar1;
}


// ===== 007ae188  FUN_007ae188 =====

undefined1  [16] FUN_007ae188(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  auVar1 = FUN_007dfc60(*param_1,param_1[1],param_2,param_3);
  if (auVar1._0_8_ == 2) {
    auVar1._8_8_ = 0xd00000003;
    auVar1._0_8_ = 1;
  }
  return auVar1;
}


// ===== 007ae1c4  FUN_007ae1c4 =====

undefined8 FUN_007ae1c4(void)

{
  return 0;
}


// ===== 007ae1cc  <reqwest::async_impl::decoder::Decoder_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::async_impl::decoder::Decoder as core::fmt::Debug>::fmt */

void __rustcall
<reqwest::async_impl::decoder::Decoder_as_core::fmt::Debug>::fmt
          (undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,&DAT_002e3cbb,7);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish(auStack_20);
  return;
}


// ===== 007ae204  FUN_007ae204 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007ae204(long param_1,long param_2)

{
  if (((*(long *)(param_2 + 0x2f8) != -1) && (*(long *)(param_2 + 0x308) == 2)) &&
     (**(short **)(param_2 + 0x300) == _s_h_002e52e8)) {
    <tokio::net::tcp::stream::TcpStream_as_hyper_util::client::legacy::connect::Connection>::
    connected();
    *(undefined1 *)(param_1 + 0x18) = 0;
    return;
  }
  <tokio::net::tcp::stream::TcpStream_as_hyper_util::client::legacy::connect::Connection>::connected
            ();
  return;
}


// ===== 007ae260  <reqwest[6fed810f3e38d558]::connect::rustls_tls_conn::RustlsTlsConn<hyper_util[52a210df7efc1bae]::rt::tokio::TokioIo<hyper_rustls[8b73b3c5adfefd00]::stream::MaybeHttpsStream<hyper_util[52a210df7efc1bae]::rt::tokio::TokioIo<tokio[8c8895dbfa691109]::net::tcp::stream::TcpStream>>>>as_hyper_util[52a210df7efc1bae]::client::legacy::connect::Connection>::connected =====

void <reqwest[6fed810f3e38d558]::connect::rustls_tls_conn::RustlsTlsConn<hyper_util[52a210df7efc1bae]::rt::tokio::TokioIo<hyper_rustls[8b73b3c5adfefd00]::stream::MaybeHttpsStream<hyper_util[52a210df7efc1bae]::rt::tokio::TokioIo<tokio[8c8895dbfa691109]::net::tcp::stream::TcpStream>>>>as_hyper_util[52a210df7efc1bae]::client::legacy::connect::Connection>
     ::connected(void)

{
  (*(code *)PTR_connected_00b03a90)();
  return;
}


// ===== 007ae264  FUN_007ae264 =====

void FUN_007ae264(long param_1,long *param_2)

{
  if (*param_2 == 2) {
    <tokio::net::tcp::stream::TcpStream_as_hyper_util::client::legacy::connect::Connection>::
    connected(param_2 + 1);
    return;
  }
  if (((param_2[0x5f] != -1) && (param_2[0x61] == 2)) && (*(short *)param_2[0x60] == DAT_002e5e77))
  {
    <tokio::net::tcp::stream::TcpStream_as_hyper_util::client::legacy::connect::Connection>::
    connected();
    *(undefined1 *)(param_1 + 0x18) = 0;
    return;
  }
  <tokio::net::tcp::stream::TcpStream_as_hyper_util::client::legacy::connect::Connection>::connected
            ();
  return;
}


// ===== 007ae2d4  FUN_007ae2d4 =====

/* WARNING: Removing unreachable block (ram,0x007ae35c) */

undefined ** FUN_007ae2d4(undefined8 *param_1,long param_2,ulong param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  undefined **ppuVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  long local_80;
  ulong local_78;
  ulong local_70;
  ulong uStack_68;
  
  if (param_3 != 0) {
    uVar2 = *param_1;
    uVar3 = param_1[1];
    do {
      while( true ) {
        local_70 = 0;
        local_80 = param_2;
        local_78 = param_3;
        uStack_68 = param_3;
        auVar9 = FUN_007df6f4(uVar2,uVar3,&local_80);
        ppuVar7 = auVar9._8_8_;
        if (auVar9._0_8_ == 1) {
          return (undefined **)0xd00000003;
        }
        if (ppuVar7 != (undefined **)0x0) break;
        if (local_78 < local_70) {
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (0,local_70,local_78,&PTR_s__root__cargo_registry_src_index__00add920);
        }
        if (local_70 == 0) {
          return &PTR_DAT_00add698;
        }
        uVar8 = param_3 - local_70;
        if (param_3 < local_70) {
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (local_70,param_3,param_3,&PTR_s__nix_store_8006w282fgsx3273c878b_00add680);
        }
        param_2 = param_2 + local_70;
LAB_007ae31c:
        param_3 = uVar8;
        if (uVar8 == 0) {
          return (undefined **)0x0;
        }
      }
      if (((ulong)ppuVar7 & 3) < 2) {
        if ((auVar9 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
          cVar4 = *(char *)(ppuVar7 + 2);
        }
        else {
          cVar4 = *(char *)((long)ppuVar7 + 0x1f);
        }
        if (cVar4 != '#') {
          return ppuVar7;
        }
      }
      else if (((ulong)ppuVar7 & 3) == 2) {
                    /* try { // try from 007ae3d0 to 007ae3e3 has its CatchHandler @ 007ae4a0 */
        lVar6 = core::io::error::os_functions::get_os_functions();
        iVar5 = (**(code **)(lVar6 + 0x10))((ulong)ppuVar7 >> 0x20);
        if (iVar5 == 0) {
          return ppuVar7;
        }
      }
      else {
        uVar1 = auVar9._12_4_ & 0xff;
        if (10 < (ulong)ppuVar7 >> 0x22) {
          uVar1 = 0xff;
        }
        if (uVar1 != 0x23) {
          return ppuVar7;
        }
      }
      uVar8 = param_3;
      if ((((ulong)ppuVar7 & 3) - 2 < 2) ||
         ((auVar9 & (undefined1  [16])0x3) == (undefined1  [16])0x0)) goto LAB_007ae31c;
      local_78 = (long)ppuVar7 - 1;
      uVar8 = (ulong)local_80 >> 8;
      local_80 = CONCAT71((int7)uVar8,3);
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_78);
    } while (param_3 != 0);
  }
  return (undefined **)0x0;
}


// ===== 007ae4b8  FUN_007ae4b8 =====

void FUN_007ae4b8(undefined8 *param_1,undefined8 param_2)

{
  FUN_007a96dc(*param_1,param_1[1],param_2);
  return;
}


// ===== 007ae4cc  FUN_007ae4cc =====

undefined8 FUN_007ae4cc(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined8 local_30;
  ulong local_28;
  ulong local_20;
  ulong uStack_18;
  
  param_3 = param_3 << 4;
  puVar1 = (undefined8 *)(param_2 + -0x10);
  do {
    if (param_3 == 0) {
      local_30 = 1;
      local_28 = 0;
      local_20 = 0;
      uStack_18 = 0;
      auVar2 = FUN_007df6f4(*param_1,param_1[1],&local_30);
      goto joined_r0x007ae544;
    }
    local_28 = puVar1[3];
    puVar1 = puVar1 + 2;
    param_3 = param_3 + -0x10;
  } while (local_28 == 0);
  local_30 = *puVar1;
  local_20 = 0;
  uStack_18 = local_28;
  auVar2 = FUN_007df6f4(*param_1,param_1[1],&local_30);
joined_r0x007ae544:
  if ((auVar2 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
    return 1;
  }
  if (auVar2._8_8_ == 0) {
    if (local_28 < local_20) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (0,local_20,local_28,&PTR_s__root__cargo_registry_src_index__00add920);
    }
    return 0;
  }
  return 1;
}


// ===== 007ae58c  FUN_007ae58c =====

undefined ** FUN_007ae58c(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined1 auVar12 [16];
  long local_80;
  ulong local_78;
  ulong local_70;
  ulong uStack_68;
  
  lVar1 = param_2[1];
  lVar3 = param_2[2];
  uVar9 = lVar1 - lVar3;
  if (uVar9 == 0) {
LAB_007ae6cc:
    ppuVar10 = (undefined **)0x0;
  }
  else {
    lVar11 = *param_2;
    uVar2 = *param_1;
    uVar4 = param_1[1];
    if ((*(byte *)(param_2 + 3) & 1) == 0) {
      memset((void *)(lVar11 + lVar3),0,uVar9);
      *(undefined1 *)(param_2 + 3) = 1;
    }
    local_70 = 0;
    local_80 = lVar11 + lVar3;
    local_78 = uVar9;
    uStack_68 = uVar9;
    auVar12 = FUN_007df6f4(uVar2,uVar4,&local_80);
    ppuVar10 = (undefined **)0xd00000003;
    if (((auVar12 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
       (ppuVar10 = auVar12._8_8_, auVar12._8_8_ == (undefined **)0x0)) {
      if (local_78 < local_70) {
LAB_007ae7ec:
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (0,local_70,local_78,&PTR_s__root__cargo_registry_src_index__00add920);
      }
      if (uVar9 < local_70) {
LAB_007ae7fc:
                    /* WARNING: Subroutine does not return */
        core::panicking::panic(&DAT_002e3ba9,0x24,&PTR_s__nix_store_8006w282fgsx3273c878b_00add668);
      }
      lVar3 = local_70 + lVar3;
      param_2[2] = lVar3;
      while (local_70 != 0) {
joined_r0x007ae6c8:
        while( true ) {
          if (lVar1 == lVar3) goto LAB_007ae6cc;
          local_80 = lVar11 + lVar3;
          uVar9 = lVar1 - lVar3;
          local_70 = 0;
          local_78 = uVar9;
          uStack_68 = uVar9;
          auVar12 = FUN_007df6f4(uVar2,uVar4,&local_80);
          ppuVar10 = (undefined **)0xd00000003;
          if (((auVar12 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
             (ppuVar10 = auVar12._8_8_, auVar12._8_8_ == (undefined **)0x0)) break;
          uVar9 = (ulong)ppuVar10 & 3;
          if (uVar9 < 2) {
            if (uVar9 == 0) {
              cVar5 = *(char *)(ppuVar10 + 2);
joined_r0x007ae62c:
              if (cVar5 != '#') {
                return ppuVar10;
              }
            }
            else {
              if (*(char *)((long)ppuVar10 + 0x1f) != '#') {
                return ppuVar10;
              }
              local_78 = (long)ppuVar10 - 1;
              local_80 = CONCAT71(local_80._1_7_,3);
              <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_78);
            }
          }
          else if (uVar9 == 2) {
                    /* try { // try from 007ae788 to 007ae79b has its CatchHandler @ 007ae818 */
            lVar7 = core::io::error::os_functions::get_os_functions();
            iVar6 = (**(code **)(lVar7 + 0x10))((ulong)ppuVar10 >> 0x20);
joined_r0x007ae650:
            if (iVar6 == 0) {
              return ppuVar10;
            }
          }
          else {
            uVar8 = (uint)((ulong)ppuVar10 >> 0x20) & 0xff;
            if (10 < (ulong)ppuVar10 >> 0x22) {
              uVar8 = 0xff;
            }
            if (uVar8 != 0x23) {
              return ppuVar10;
            }
          }
        }
        if (local_78 < local_70) goto LAB_007ae7ec;
        if (uVar9 < local_70) goto LAB_007ae7fc;
        lVar3 = local_70 + lVar3;
        param_2[2] = lVar3;
      }
      ppuVar10 = &PTR_DAT_00add698;
    }
    else {
      uVar9 = (ulong)ppuVar10 & 3;
      if (uVar9 < 2) {
        if (uVar9 == 0) {
          cVar5 = *(char *)(ppuVar10 + 2);
          goto joined_r0x007ae62c;
        }
        if (*(char *)((long)ppuVar10 + 0x1f) == '#') {
          local_78 = (long)ppuVar10 - 1;
          local_80 = CONCAT71(local_80._1_7_,3);
          <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_78);
          goto joined_r0x007ae6c8;
        }
      }
      else {
        if (uVar9 == 2) {
                    /* try { // try from 007ae63c to 007ae64f has its CatchHandler @ 007ae814 */
          lVar7 = core::io::error::os_functions::get_os_functions();
          iVar6 = (**(code **)(lVar7 + 0x10))((ulong)ppuVar10 >> 0x20);
          goto joined_r0x007ae650;
        }
        uVar8 = (uint)((ulong)ppuVar10 >> 0x20) & 0xff;
        if (10 < (ulong)ppuVar10 >> 0x22) {
          uVar8 = 0xff;
        }
        if (uVar8 == 0x23) goto joined_r0x007ae6c8;
      }
    }
  }
  return ppuVar10;
}


// ===== 007ae830  FUN_007ae830 =====

undefined1  [16] FUN_007ae830(undefined8 *param_1,long param_2)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long local_58 [3];
  
  lVar3 = *(long *)(param_2 + 0x10);
                    /* try { // try from 007ae854 to 007ae85f has its CatchHandler @ 007ae8d4 */
  auVar4 = FUN_007a96dc(*param_1,param_1[1],param_2);
  lVar2 = *(long *)(param_2 + 0x10);
                    /* try { // try from 007ae86c to 007ae87b has its CatchHandler @ 007ae8bc */
  <core::str::str>::from_utf8(local_58,*(long *)(param_2 + 8) + lVar3,lVar2 - lVar3);
  ppuVar1 = auVar4._8_8_;
  if ((auVar4 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
    ppuVar1 = &PTR_DAT_00add650;
  }
  if (local_58[0] != 0) {
    auVar4._8_8_ = ppuVar1;
    auVar4._0_8_ = 1;
    lVar2 = lVar3;
  }
  *(long *)(param_2 + 0x10) = lVar2;
  return auVar4;
}


// ===== 007ae8e4  FUN_007ae8e4 =====

undefined8 FUN_007ae8e4(void)

{
  return 0;
}


// ===== 007ae8ec  FUN_007ae8ec =====

long FUN_007ae8ec(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong __n;
  long lVar4;
  undefined1 auVar5 [16];
  void *local_60;
  ulong local_58;
  ulong local_50;
  ulong uStack_48;
  
  lVar3 = *param_2;
  lVar4 = param_2[2];
  uVar1 = *param_1;
  uVar2 = param_1[1];
  __n = param_2[1] - lVar4;
  if ((*(byte *)(param_2 + 3) & 1) == 0) {
    memset((void *)(lVar3 + lVar4),0,__n);
    *(undefined1 *)(param_2 + 3) = 1;
  }
  local_50 = 0;
  local_60 = (void *)(lVar3 + lVar4);
  local_58 = __n;
  uStack_48 = __n;
  auVar5 = FUN_007df6f4(uVar1,uVar2,&local_60);
  lVar3 = auVar5._8_8_;
  if ((auVar5 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
    if (lVar3 == 0) {
      if (local_58 < local_50) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (0,local_50,local_58,&PTR_s__root__cargo_registry_src_index__00add920);
      }
      if (__n < local_50) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic(&DAT_002e3ba9,0x24,&PTR_s__nix_store_8006w282fgsx3273c878b_00add668);
      }
      lVar3 = 0;
      param_2[2] = local_50 + lVar4;
    }
  }
  else {
    lVar3 = 0xd00000003;
  }
  return lVar3;
}


// ===== 007ae9d0  FUN_007ae9d0 =====

/* WARNING: Removing unreachable block (ram,0x007aea58) */

undefined ** FUN_007ae9d0(undefined8 *param_1,long param_2,ulong param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  undefined **ppuVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  long local_80;
  ulong local_78;
  ulong local_70;
  ulong uStack_68;
  
  if (param_3 != 0) {
    uVar2 = *param_1;
    uVar3 = param_1[1];
    do {
      while( true ) {
        local_70 = 0;
        local_80 = param_2;
        local_78 = param_3;
        uStack_68 = param_3;
        auVar9 = FUN_007df7d8(uVar2,uVar3,&local_80);
        ppuVar7 = auVar9._8_8_;
        if (auVar9._0_8_ == 1) {
          return (undefined **)0xd00000003;
        }
        if (ppuVar7 != (undefined **)0x0) break;
        if (local_78 < local_70) {
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (0,local_70,local_78,&PTR_s__root__cargo_registry_src_index__00add920);
        }
        if (local_70 == 0) {
          return &PTR_DAT_00add698;
        }
        uVar8 = param_3 - local_70;
        if (param_3 < local_70) {
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (local_70,param_3,param_3,&PTR_s__nix_store_8006w282fgsx3273c878b_00add680);
        }
        param_2 = param_2 + local_70;
LAB_007aea18:
        param_3 = uVar8;
        if (uVar8 == 0) {
          return (undefined **)0x0;
        }
      }
      if (((ulong)ppuVar7 & 3) < 2) {
        if ((auVar9 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
          cVar4 = *(char *)(ppuVar7 + 2);
        }
        else {
          cVar4 = *(char *)((long)ppuVar7 + 0x1f);
        }
        if (cVar4 != '#') {
          return ppuVar7;
        }
      }
      else if (((ulong)ppuVar7 & 3) == 2) {
                    /* try { // try from 007aeacc to 007aeadf has its CatchHandler @ 007aeb9c */
        lVar6 = core::io::error::os_functions::get_os_functions();
        iVar5 = (**(code **)(lVar6 + 0x10))((ulong)ppuVar7 >> 0x20);
        if (iVar5 == 0) {
          return ppuVar7;
        }
      }
      else {
        uVar1 = auVar9._12_4_ & 0xff;
        if (10 < (ulong)ppuVar7 >> 0x22) {
          uVar1 = 0xff;
        }
        if (uVar1 != 0x23) {
          return ppuVar7;
        }
      }
      uVar8 = param_3;
      if ((((ulong)ppuVar7 & 3) - 2 < 2) ||
         ((auVar9 & (undefined1  [16])0x3) == (undefined1  [16])0x0)) goto LAB_007aea18;
      local_78 = (long)ppuVar7 - 1;
      uVar8 = (ulong)local_80 >> 8;
      local_80 = CONCAT71((int7)uVar8,3);
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_78);
    } while (param_3 != 0);
  }
  return (undefined **)0x0;
}


// ===== 007aebb4  FUN_007aebb4 =====

void FUN_007aebb4(undefined8 *param_1,undefined8 param_2)

{
  FUN_007a99fc(*param_1,param_1[1],param_2);
  return;
}


// ===== 007aebc8  FUN_007aebc8 =====

undefined8 FUN_007aebc8(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined8 local_30;
  ulong local_28;
  ulong local_20;
  ulong uStack_18;
  
  param_3 = param_3 << 4;
  puVar1 = (undefined8 *)(param_2 + -0x10);
  do {
    if (param_3 == 0) {
      local_30 = 1;
      local_28 = 0;
      local_20 = 0;
      uStack_18 = 0;
      auVar2 = FUN_007df7d8(*param_1,param_1[1],&local_30);
      goto joined_r0x007aec40;
    }
    local_28 = puVar1[3];
    puVar1 = puVar1 + 2;
    param_3 = param_3 + -0x10;
  } while (local_28 == 0);
  local_30 = *puVar1;
  local_20 = 0;
  uStack_18 = local_28;
  auVar2 = FUN_007df7d8(*param_1,param_1[1],&local_30);
joined_r0x007aec40:
  if ((auVar2 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
    return 1;
  }
  if (auVar2._8_8_ == 0) {
    if (local_28 < local_20) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (0,local_20,local_28,&PTR_s__root__cargo_registry_src_index__00add920);
    }
    return 0;
  }
  return 1;
}


// ===== 007aec88  FUN_007aec88 =====

undefined ** FUN_007aec88(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined1 auVar12 [16];
  long local_80;
  ulong local_78;
  ulong local_70;
  ulong uStack_68;
  
  lVar1 = param_2[1];
  lVar3 = param_2[2];
  uVar9 = lVar1 - lVar3;
  if (uVar9 == 0) {
LAB_007aedc8:
    ppuVar10 = (undefined **)0x0;
  }
  else {
    lVar11 = *param_2;
    uVar2 = *param_1;
    uVar4 = param_1[1];
    if ((*(byte *)(param_2 + 3) & 1) == 0) {
      memset((void *)(lVar11 + lVar3),0,uVar9);
      *(undefined1 *)(param_2 + 3) = 1;
    }
    local_70 = 0;
    local_80 = lVar11 + lVar3;
    local_78 = uVar9;
    uStack_68 = uVar9;
    auVar12 = FUN_007df7d8(uVar2,uVar4,&local_80);
    ppuVar10 = (undefined **)0xd00000003;
    if (((auVar12 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
       (ppuVar10 = auVar12._8_8_, auVar12._8_8_ == (undefined **)0x0)) {
      if (local_78 < local_70) {
LAB_007aeee8:
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (0,local_70,local_78,&PTR_s__root__cargo_registry_src_index__00add920);
      }
      if (uVar9 < local_70) {
LAB_007aeef8:
                    /* WARNING: Subroutine does not return */
        core::panicking::panic(&DAT_002e3ba9,0x24,&PTR_s__nix_store_8006w282fgsx3273c878b_00add668);
      }
      lVar3 = local_70 + lVar3;
      param_2[2] = lVar3;
      while (local_70 != 0) {
joined_r0x007aedc4:
        while( true ) {
          if (lVar1 == lVar3) goto LAB_007aedc8;
          local_80 = lVar11 + lVar3;
          uVar9 = lVar1 - lVar3;
          local_70 = 0;
          local_78 = uVar9;
          uStack_68 = uVar9;
          auVar12 = FUN_007df7d8(uVar2,uVar4,&local_80);
          ppuVar10 = (undefined **)0xd00000003;
          if (((auVar12 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
             (ppuVar10 = auVar12._8_8_, auVar12._8_8_ == (undefined **)0x0)) break;
          uVar9 = (ulong)ppuVar10 & 3;
          if (uVar9 < 2) {
            if (uVar9 == 0) {
              cVar5 = *(char *)(ppuVar10 + 2);
joined_r0x007aed28:
              if (cVar5 != '#') {
                return ppuVar10;
              }
            }
            else {
              if (*(char *)((long)ppuVar10 + 0x1f) != '#') {
                return ppuVar10;
              }
              local_78 = (long)ppuVar10 - 1;
              local_80 = CONCAT71(local_80._1_7_,3);
              <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_78);
            }
          }
          else if (uVar9 == 2) {
                    /* try { // try from 007aee84 to 007aee97 has its CatchHandler @ 007aef14 */
            lVar7 = core::io::error::os_functions::get_os_functions();
            iVar6 = (**(code **)(lVar7 + 0x10))((ulong)ppuVar10 >> 0x20);
joined_r0x007aed4c:
            if (iVar6 == 0) {
              return ppuVar10;
            }
          }
          else {
            uVar8 = (uint)((ulong)ppuVar10 >> 0x20) & 0xff;
            if (10 < (ulong)ppuVar10 >> 0x22) {
              uVar8 = 0xff;
            }
            if (uVar8 != 0x23) {
              return ppuVar10;
            }
          }
        }
        if (local_78 < local_70) goto LAB_007aeee8;
        if (uVar9 < local_70) goto LAB_007aeef8;
        lVar3 = local_70 + lVar3;
        param_2[2] = lVar3;
      }
      ppuVar10 = &PTR_DAT_00add698;
    }
    else {
      uVar9 = (ulong)ppuVar10 & 3;
      if (uVar9 < 2) {
        if (uVar9 == 0) {
          cVar5 = *(char *)(ppuVar10 + 2);
          goto joined_r0x007aed28;
        }
        if (*(char *)((long)ppuVar10 + 0x1f) == '#') {
          local_78 = (long)ppuVar10 - 1;
          local_80 = CONCAT71(local_80._1_7_,3);
          <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_78);
          goto joined_r0x007aedc4;
        }
      }
      else {
        if (uVar9 == 2) {
                    /* try { // try from 007aed38 to 007aed4b has its CatchHandler @ 007aef10 */
          lVar7 = core::io::error::os_functions::get_os_functions();
          iVar6 = (**(code **)(lVar7 + 0x10))((ulong)ppuVar10 >> 0x20);
          goto joined_r0x007aed4c;
        }
        uVar8 = (uint)((ulong)ppuVar10 >> 0x20) & 0xff;
        if (10 < (ulong)ppuVar10 >> 0x22) {
          uVar8 = 0xff;
        }
        if (uVar8 == 0x23) goto joined_r0x007aedc4;
      }
    }
  }
  return ppuVar10;
}


// ===== 007aef2c  FUN_007aef2c =====

undefined1  [16] FUN_007aef2c(undefined8 *param_1,long param_2)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long local_58 [3];
  
  lVar3 = *(long *)(param_2 + 0x10);
                    /* try { // try from 007aef50 to 007aef5b has its CatchHandler @ 007aefd0 */
  auVar4 = FUN_007a99fc(*param_1,param_1[1],param_2);
  lVar2 = *(long *)(param_2 + 0x10);
                    /* try { // try from 007aef68 to 007aef77 has its CatchHandler @ 007aefb8 */
  <core::str::str>::from_utf8(local_58,*(long *)(param_2 + 8) + lVar3,lVar2 - lVar3);
  ppuVar1 = auVar4._8_8_;
  if ((auVar4 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
    ppuVar1 = &PTR_DAT_00add650;
  }
  if (local_58[0] != 0) {
    auVar4._8_8_ = ppuVar1;
    auVar4._0_8_ = 1;
    lVar2 = lVar3;
  }
  *(long *)(param_2 + 0x10) = lVar2;
  return auVar4;
}


// ===== 007aefe0  FUN_007aefe0 =====

long FUN_007aefe0(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong __n;
  long lVar4;
  undefined1 auVar5 [16];
  void *local_60;
  ulong local_58;
  ulong local_50;
  ulong uStack_48;
  
  lVar3 = *param_2;
  lVar4 = param_2[2];
  uVar1 = *param_1;
  uVar2 = param_1[1];
  __n = param_2[1] - lVar4;
  if ((*(byte *)(param_2 + 3) & 1) == 0) {
    memset((void *)(lVar3 + lVar4),0,__n);
    *(undefined1 *)(param_2 + 3) = 1;
  }
  local_50 = 0;
  local_60 = (void *)(lVar3 + lVar4);
  local_58 = __n;
  uStack_48 = __n;
  auVar5 = FUN_007df7d8(uVar1,uVar2,&local_60);
  lVar3 = auVar5._8_8_;
  if ((auVar5 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
    if (lVar3 == 0) {
      if (local_58 < local_50) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (0,local_50,local_58,&PTR_s__root__cargo_registry_src_index__00add920);
      }
      if (__n < local_50) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic(&DAT_002e3ba9,0x24,&PTR_s__nix_store_8006w282fgsx3273c878b_00add668);
      }
      lVar3 = 0;
      param_2[2] = local_50 + lVar4;
    }
  }
  else {
    lVar3 = 0xd00000003;
  }
  return lVar3;
}


// ===== 007af0c4  FUN_007af0c4 =====

undefined ** FUN_007af0c4(undefined8 *param_1,long param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  long *plVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  undefined1 auVar14 [16];
  undefined *local_80;
  undefined **ppuStack_78;
  long local_68;
  
  if (param_3 != 0) {
    lVar6 = param_3 * 0x10;
    uVar5 = 0;
    uVar8 = lVar6 - 0x10;
    plVar10 = (long *)(param_2 + 8);
    do {
      uVar7 = uVar5;
      if (*plVar10 != 0) break;
      lVar6 = lVar6 + -0x10;
      uVar5 = uVar5 + 1;
      uVar7 = (uVar8 >> 4) + 1;
      plVar10 = plVar10 + 2;
    } while (lVar6 != 0);
    if (param_3 < uVar7) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (uVar7,param_3,param_3,&PTR_s__nix_store_8006w282fgsx3273c878b_00add710);
    }
    if (param_3 - uVar7 != 0) {
      uVar1 = *param_1;
      uVar2 = param_1[1];
      plVar10 = (long *)(param_2 + uVar7 * 0x10);
      uVar12 = 0x47;
      local_80 = &DAT_002e3be8;
      ppuStack_78 = &PTR_s__nix_store_8006w282fgsx3273c878b_00add6e0;
      uVar5 = param_3 - uVar7;
      do {
        while( true ) {
          auVar14 = <tokio::net::tcp::stream::TcpStream_as_tokio::io::async_write::AsyncWrite>::
                    poll_write_vectored(uVar1,uVar2,plVar10,uVar5);
          ppuVar13 = (undefined **)0xd00000003;
          if (auVar14._0_8_ != 2) {
            ppuVar13 = auVar14._8_8_;
          }
          if (1 < auVar14._0_8_ - 1U) break;
          uVar8 = (ulong)ppuVar13 & 3;
          if (uVar8 < 2) {
            if (uVar8 == 0) {
              if (*(char *)(ppuVar13 + 2) != '#') {
                return ppuVar13;
              }
            }
            else {
              if (*(char *)((long)ppuVar13 + 0x1f) != '#') {
                return ppuVar13;
              }
              local_68 = (long)ppuVar13 - 1;
              <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_68);
            }
          }
          else if (uVar8 == 2) {
                    /* try { // try from 007af1f4 to 007af207 has its CatchHandler @ 007af2f8 */
            lVar6 = core::io::error::os_functions::get_os_functions();
            uVar8 = (**(code **)(lVar6 + 0x10))((ulong)ppuVar13 >> 0x20);
            if ((uVar8 & 1) == 0) {
              return ppuVar13;
            }
          }
          else {
            uVar11 = (uint)((ulong)ppuVar13 >> 0x20) & 0xff;
            if (10 < (ulong)ppuVar13 >> 0x22) {
              uVar11 = 0xff;
            }
            if (uVar11 != 0x23) {
              return ppuVar13;
            }
          }
        }
        if (auVar14._8_8_ == (undefined **)0x0) {
          return &PTR_DAT_00add938;
        }
        lVar6 = uVar5 * 0x10;
        uVar8 = 0;
        uVar7 = lVar6 - 0x10;
        puVar9 = (ulong *)(plVar10 + 1);
        do {
          ppuVar3 = (undefined **)((long)ppuVar13 - (long)*puVar9);
          uVar4 = uVar8;
          if (ppuVar13 < (undefined **)*puVar9) break;
          lVar6 = lVar6 + -0x10;
          uVar8 = uVar8 + 1;
          uVar4 = (uVar7 >> 4) + 1;
          puVar9 = puVar9 + 2;
          ppuVar13 = ppuVar3;
        } while (lVar6 != 0);
        if (uVar5 < uVar4) {
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (uVar4,uVar5,uVar5,&PTR_s__nix_store_8006w282fgsx3273c878b_00add710);
        }
        if (uVar5 - uVar4 == 0) {
          if (ppuVar13 == (undefined **)0x0) {
            return (undefined **)0x0;
          }
          uVar12 = 0x4f;
          local_80 = &DAT_002e3c0b;
          ppuStack_78 = &PTR_s__nix_store_8006w282fgsx3273c878b_00add6f8;
LAB_007af2c4:
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_fmt(local_80,uVar12,ppuStack_78);
        }
        plVar10 = plVar10 + uVar4 * 2;
        if ((undefined **)plVar10[1] < ppuVar13) goto LAB_007af2c4;
        *plVar10 = *plVar10 + (long)ppuVar13;
        plVar10[1] = plVar10[1] - (long)ppuVar13;
        uVar5 = uVar5 - uVar4;
      } while( true );
    }
  }
  return (undefined **)0x0;
}


// ===== 007af310  FUN_007af310 =====

undefined ** FUN_007af310(undefined8 *param_1,long param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined **ppuVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  long local_68;
  
  if (param_3 != (undefined **)0x0) {
    uVar2 = *param_1;
    uVar3 = param_1[1];
    do {
      auVar8 = <tokio::net::tcp::stream::TcpStream_as_tokio::io::async_write::AsyncWrite>::
               poll_write(uVar2,uVar3,param_2,param_3);
      ppuVar1 = (undefined **)0xd00000003;
      if (auVar8._0_8_ != 2) {
        ppuVar1 = auVar8._8_8_;
      }
      if (auVar8._0_8_ - 1U < 2) {
        uVar5 = (ulong)ppuVar1 & 3;
        ppuVar6 = param_3;
        if (uVar5 < 2) {
          if (uVar5 == 0) {
            if (*(char *)(ppuVar1 + 2) != '#') {
              return ppuVar1;
            }
          }
          else {
            if (*(char *)((long)ppuVar1 + 0x1f) != '#') {
              return ppuVar1;
            }
            local_68 = (long)ppuVar1 - 1;
            <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_68);
          }
        }
        else if (uVar5 == 2) {
                    /* try { // try from 007af3e4 to 007af3f7 has its CatchHandler @ 007af46c */
          lVar4 = core::io::error::os_functions::get_os_functions();
          uVar5 = (**(code **)(lVar4 + 0x10))((ulong)ppuVar1 >> 0x20);
          if ((uVar5 & 1) == 0) {
            return ppuVar1;
          }
        }
        else {
          uVar7 = (uint)((ulong)ppuVar1 >> 0x20) & 0xff;
          if (10 < (ulong)ppuVar1 >> 0x22) {
            uVar7 = 0xff;
          }
          if (uVar7 != 0x23) {
            return ppuVar1;
          }
        }
      }
      else {
        if (auVar8._8_8_ == (undefined **)0x0) {
          return &PTR_DAT_00add938;
        }
        ppuVar6 = (undefined **)((long)param_3 - (long)ppuVar1);
        if (param_3 < ppuVar1) {
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (ppuVar1,param_3,param_3,&PTR_s__nix_store_8006w282fgsx3273c878b_00add950);
        }
        param_2 = param_2 + (long)ppuVar1;
      }
      param_3 = ppuVar6;
    } while (ppuVar6 != (undefined **)0x0);
  }
  return (undefined **)0x0;
}


// ===== 007af484  thunk_FUN_007be9e4 =====

ulong thunk_FUN_007be9e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined1 uStack_30;
  long lStack_28;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  iVar1 = core::fmt::write(&uStack_40,&PTR_FUN_00addfc0,param_2,param_3);
  if (iVar1 == 0) {
    if (uStack_38 != 0) {
      if ((1 < (uStack_38 & 3) - 2) && ((uStack_38 & 3) != 0)) {
        lStack_28 = uStack_38 - 1;
        uStack_30 = 3;
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&lStack_28);
      }
      return 0;
    }
  }
  else if (uStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              ("a formatting trait implementation returned an error when the underlying stream did not"
               ,0xad,&PTR_s__nix_store_8006w282fgsx3273c878b_00addff0);
  }
  return uStack_38;
}


// ===== 007af488  FUN_007af488 =====

undefined ** FUN_007af488(long *param_1,long param_2,ulong param_3)

{
  long *plVar1;
  long *plVar2;
  undefined **ppuVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong *puVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  undefined **ppuVar17;
  long lVar18;
  undefined1 auVar19 [16];
  undefined8 local_88;
  undefined *local_80;
  undefined **local_78;
  long *local_70;
  undefined **local_68;
  
  if (param_3 != 0) {
    lVar12 = param_3 * 0x10;
    uVar8 = 0;
    uVar15 = lVar12 - 0x10;
    plVar14 = (long *)(param_2 + 8);
    do {
      uVar10 = uVar8;
      if (*plVar14 != 0) break;
      lVar12 = lVar12 + -0x10;
      uVar8 = uVar8 + 1;
      uVar10 = (uVar15 >> 4) + 1;
      plVar14 = plVar14 + 2;
    } while (lVar12 != 0);
    uVar8 = param_3 - uVar10;
    if (param_3 < uVar10) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (uVar10,param_3,param_3,&PTR_s__nix_store_8006w282fgsx3273c878b_00add710);
    }
    if (uVar8 != 0) {
      plVar2 = (long *)*param_1;
      lVar12 = param_1[1];
      local_80 = &DAT_002e3be8;
      local_78 = &PTR_s__nix_store_8006w282fgsx3273c878b_00add6e0;
      local_88 = 0x47;
      lVar9 = *plVar2;
      plVar14 = (long *)(param_2 + uVar10 * 0x10);
      lVar11 = uVar8 * 0x10;
joined_r0x007af554:
      lVar18 = lVar11;
      plVar16 = plVar14;
      if (lVar9 == 2) goto LAB_007af5ec;
LAB_007af610:
      do {
        if (lVar11 == 0) {
          auVar19 = ZEXT816(0);
          goto LAB_007af694;
        }
        plVar1 = plVar14 + 1;
        plVar14 = plVar14 + 2;
        lVar11 = lVar11 + -0x10;
      } while (*plVar1 == 0);
      while( true ) {
        local_68 = &PTR_FUN_00add8d8;
        local_70 = plVar2 + 4;
        auVar19 = <rustls::conn::connection::Writer_as_core::io::write::Write>::write_vectored
                            (&local_70,plVar16,uVar8);
        uVar15 = auVar19._8_8_;
        if (auVar19._0_8_ == 1) break;
LAB_007af65c:
        if (plVar2[0x1a] != 0) {
          auVar19 = FUN_007aa798(plVar2,plVar2 + 4,lVar12);
          if (auVar19._0_8_ == 0) goto code_r0x007af678;
          if (auVar19._0_8_ == 2) goto LAB_007af688;
          break;
        }
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar15;
        auVar19 = auVar4 << 0x40;
        if (uVar15 != 0) break;
      }
LAB_007af694:
      do {
        ppuVar17 = (undefined **)0xd00000003;
        if (auVar19._0_8_ != 2) {
          ppuVar17 = auVar19._8_8_;
        }
        if (auVar19._0_8_ - 1U < 2) {
          uVar15 = (ulong)ppuVar17 & 3;
          plVar14 = plVar16;
          lVar11 = lVar18;
          if (uVar15 < 2) {
            if (uVar15 != 0) {
              if (*(char *)((long)ppuVar17 + 0x1f) != '#') {
                return ppuVar17;
              }
              local_68 = (undefined **)((long)ppuVar17 - 1);
              local_70 = (long *)CONCAT71(local_70._1_7_,3);
              <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_68);
              lVar9 = *plVar2;
              goto joined_r0x007af554;
            }
            if (*(char *)(ppuVar17 + 2) != '#') {
              return ppuVar17;
            }
          }
          else if (uVar15 == 2) {
                    /* try { // try from 007af6f8 to 007af70b has its CatchHandler @ 007af798 */
            lVar9 = core::io::error::os_functions::get_os_functions();
            uVar15 = (**(code **)(lVar9 + 0x10))((ulong)ppuVar17 >> 0x20);
            if ((uVar15 & 1) == 0) {
              return ppuVar17;
            }
          }
          else {
            uVar7 = (uint)((ulong)ppuVar17 >> 0x20) & 0xff;
            if (10 < (ulong)ppuVar17 >> 0x22) {
              uVar7 = 0xff;
            }
            if (uVar7 != 0x23) {
              return ppuVar17;
            }
          }
          lVar9 = *plVar2;
        }
        else {
          if (auVar19._8_8_ == (undefined **)0x0) {
            return &PTR_DAT_00add938;
          }
          uVar10 = lVar18 - 0x10;
          uVar15 = 0;
          puVar13 = (ulong *)(plVar16 + 1);
          do {
            ppuVar3 = (undefined **)((long)ppuVar17 - (long)*puVar13);
            uVar6 = uVar15;
            if (ppuVar17 < (undefined **)*puVar13) break;
            lVar18 = lVar18 + -0x10;
            uVar15 = uVar15 + 1;
            uVar6 = (uVar10 >> 4) + 1;
            puVar13 = puVar13 + 2;
            ppuVar17 = ppuVar3;
          } while (lVar18 != 0);
          uVar15 = uVar8 - uVar6;
          if (uVar8 < uVar6) {
                    /* WARNING: Subroutine does not return */
            core::slice::index::slice_index_fail
                      (uVar6,uVar8,uVar8,&PTR_s__nix_store_8006w282fgsx3273c878b_00add710);
          }
          if (uVar15 == 0) {
            if (ppuVar17 == (undefined **)0x0) {
              return (undefined **)0x0;
            }
            local_80 = &DAT_002e3c0b;
            local_78 = &PTR_s__nix_store_8006w282fgsx3273c878b_00add6f8;
            local_88 = 0x4f;
LAB_007af764:
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_fmt(local_80,local_88,local_78);
          }
          plVar14 = plVar16 + uVar6 * 2;
          if ((undefined **)plVar14[1] < ppuVar17) goto LAB_007af764;
          *plVar14 = *plVar14 + (long)ppuVar17;
          plVar14[1] = plVar14[1] - (long)ppuVar17;
          lVar9 = *plVar2;
          uVar8 = uVar15;
          lVar11 = uVar15 * 0x10;
        }
        lVar18 = lVar11;
        plVar16 = plVar14;
        if (lVar9 != 2) goto LAB_007af610;
LAB_007af5ec:
        auVar19 = <tokio::net::tcp::stream::TcpStream_as_tokio::io::async_write::AsyncWrite>::
                  poll_write_vectored(plVar2 + 1,lVar12,plVar14,uVar8);
        plVar16 = plVar14;
        lVar18 = lVar11;
      } while( true );
    }
  }
  return (undefined **)0x0;
code_r0x007af678:
  if (auVar19._8_8_ == 0) {
LAB_007af688:
    auVar19._8_8_ = uVar15;
    auVar19._0_8_ = 2;
    if (uVar15 != 0) {
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar15;
      auVar19 = auVar5 << 0x40;
    }
    goto LAB_007af694;
  }
  goto LAB_007af65c;
}


// ===== 007af7b0  FUN_007af7b0 =====

undefined ** FUN_007af7b0(undefined8 *param_1,long param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined **ppuVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  long local_68;
  
  if (param_3 != (undefined **)0x0) {
    uVar2 = *param_1;
    uVar3 = param_1[1];
    do {
      auVar8 = FUN_007dfc60(uVar2,uVar3,param_2,param_3);
      ppuVar1 = (undefined **)0xd00000003;
      if (auVar8._0_8_ != 2) {
        ppuVar1 = auVar8._8_8_;
      }
      if (auVar8._0_8_ - 1U < 2) {
        uVar5 = (ulong)ppuVar1 & 3;
        ppuVar6 = param_3;
        if (uVar5 < 2) {
          if (uVar5 == 0) {
            if (*(char *)(ppuVar1 + 2) != '#') {
              return ppuVar1;
            }
          }
          else {
            if (*(char *)((long)ppuVar1 + 0x1f) != '#') {
              return ppuVar1;
            }
            local_68 = (long)ppuVar1 - 1;
            <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_68);
          }
        }
        else if (uVar5 == 2) {
                    /* try { // try from 007af884 to 007af897 has its CatchHandler @ 007af90c */
          lVar4 = core::io::error::os_functions::get_os_functions();
          uVar5 = (**(code **)(lVar4 + 0x10))((ulong)ppuVar1 >> 0x20);
          if ((uVar5 & 1) == 0) {
            return ppuVar1;
          }
        }
        else {
          uVar7 = (uint)((ulong)ppuVar1 >> 0x20) & 0xff;
          if (10 < (ulong)ppuVar1 >> 0x22) {
            uVar7 = 0xff;
          }
          if (uVar7 != 0x23) {
            return ppuVar1;
          }
        }
      }
      else {
        if (auVar8._8_8_ == (undefined **)0x0) {
          return &PTR_DAT_00add938;
        }
        ppuVar6 = (undefined **)((long)param_3 - (long)ppuVar1);
        if (param_3 < ppuVar1) {
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (ppuVar1,param_3,param_3,&PTR_s__nix_store_8006w282fgsx3273c878b_00add950);
        }
        param_2 = param_2 + (long)ppuVar1;
      }
      param_3 = ppuVar6;
    } while (ppuVar6 != (undefined **)0x0);
  }
  return (undefined **)0x0;
}


// ===== 007af924  thunk_FUN_007beaac =====

ulong thunk_FUN_007beaac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined1 uStack_30;
  long lStack_28;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  iVar1 = core::fmt::write(&uStack_40,&PTR_FUN_00ade008,param_2,param_3);
  if (iVar1 == 0) {
    if (uStack_38 != 0) {
      if ((1 < (uStack_38 & 3) - 2) && ((uStack_38 & 3) != 0)) {
        lStack_28 = uStack_38 - 1;
        uStack_30 = 3;
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&lStack_28);
      }
      return 0;
    }
  }
  else if (uStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              ("a formatting trait implementation returned an error when the underlying stream did not"
               ,0xad,&PTR_s__nix_store_8006w282fgsx3273c878b_00addff0);
  }
  return uStack_38;
}


// ===== 007af928  <http::error::Error_as_core::error::Error>::source =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <http::error::Error_as_core::error::Error>::source(void)

{
  (*(code *)PTR_source_00b03238)();
  return;
}


// ===== 007af92c  FUN_007af92c =====

void FUN_007af92c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 *local_80;
  undefined1 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  lVar6 = param_1[3];
  if (lVar6 != 0) {
    puVar7 = (undefined8 *)*param_1;
    puVar8 = puVar7 + 1;
    uVar10 = NEON_cmge(*puVar7,0,1);
    uVar10 = uVar10 & 0x8080808080808080;
    do {
      for (; uVar10 == 0; uVar10 = uVar10 & 0x8080808080808080) {
        puVar7 = puVar7 + -0x48;
        uVar10 = NEON_cmge(*puVar8,0,1);
        puVar8 = puVar8 + 1;
      }
      uVar11 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      puVar9 = puVar7 + (long)-(int)((ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3) * 9;
      local_80 = puVar9 + -9;
      local_78 = (undefined1 *)&local_80;
      uStack_70 = param_2;
      local_68 = param_3;
      FUN_0078590c(puVar9 + -3,&local_78);
      if (puVar9[-1] == 0) {
        lVar2 = *param_1;
        lVar3 = (lVar2 - (long)puVar9 >> 3) * -0x71c71c71c71c71c7;
        uVar11 = NEON_cmeq(*(undefined8 *)(lVar2 + lVar3),0xffffffffffffffff,1);
        puVar1 = (undefined8 *)(lVar2 + (lVar3 - 8U & param_1[1]));
        uVar12 = NEON_cmeq(*puVar1,0xffffffffffffffff,1);
        uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        if (((ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3) + ((ulong)LZCOUNT(uVar12) >> 3) <
            8) {
          param_1[2] = param_1[2] + 1;
          uVar4 = 0xff;
        }
        else {
          uVar4 = 0x80;
        }
        lVar5 = param_1[3];
        *(undefined1 *)(lVar2 + lVar3) = uVar4;
        *(undefined1 *)(puVar1 + 1) = uVar4;
        param_1[3] = lVar5 + -1;
        FUN_007b23ec(puVar9 + -9);
      }
      lVar6 = lVar6 + -1;
      uVar10 = uVar10 - 1 & uVar10;
    } while (lVar6 != 0);
  }
  return;
}


// ===== 007afa9c  FUN_007afa9c =====

void FUN_007afa9c(undefined8 *param_1,long *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  ulong uVar10;
  byte bVar11;
  ulong uVar12;
  undefined8 uVar13;
  long *__ptr;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  byte local_c0;
  undefined8 uStack_98;
  long local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  uVar5 = FUN_007c4ecc(param_2 + 4);
  lVar7 = 0;
  lVar14 = *param_2;
  uVar3 = param_2[1];
  bVar11 = (byte)(uVar5 >> 0x39);
  uVar15 = CONCAT17(bVar11,CONCAT16(bVar11,CONCAT15(bVar11,CONCAT14(bVar11,CONCAT13(bVar11,CONCAT12(
                                                  bVar11,CONCAT11(bVar11,bVar11)))))));
  uVar5 = uVar5 & uVar3;
  uVar16 = *(undefined8 *)(lVar14 + uVar5);
  uVar12 = NEON_cmeq(uVar16,uVar15,1);
  uVar12 = uVar12 & 0x8080808080808080;
  while( true ) {
    for (; uVar12 == 0; uVar12 = uVar12 & 0x8080808080808080) {
      uVar16 = NEON_cmeq(uVar16,0xffffffffffffffff,1);
      bVar11 = NEON_umaxv(uVar16,1);
      if ((bVar11 & 1) != 0) goto LAB_007afca8;
      lVar7 = lVar7 + 8;
      uVar5 = uVar5 + lVar7 & uVar3;
      uVar16 = *(undefined8 *)(lVar14 + uVar5);
      uVar12 = NEON_cmeq(uVar16,uVar15,1);
    }
    uVar10 = (uVar12 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar12 >> 7 & 0xff00ff00ff00ff) << 8;
    uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
    uVar10 = uVar5 + ((ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3) & uVar3;
    lVar1 = lVar14 + uVar10 * -0x48;
    iVar4 = <http::uri::scheme::Scheme_as_core::cmp::PartialEq>::eq(param_3,lVar1 + -0x48);
    if ((iVar4 != 0) &&
       (uVar6 = <http::uri::authority::Authority_as_core::cmp::PartialEq>::eq
                          (param_3 + 0x10,lVar1 + -0x38), (uVar6 & 1) != 0)) break;
    uVar12 = uVar12 - 1 & uVar12;
  }
  lVar7 = ((long)(uVar10 * 0x48) >> 3) * -0x71c71c71c71c71c7;
  uVar12 = NEON_cmeq(*(undefined8 *)(lVar14 + lVar7),0xffffffffffffffff,1);
  puVar2 = (undefined8 *)(lVar14 + (lVar7 - 8U & uVar3));
  uVar16 = NEON_cmeq(*puVar2,0xffffffffffffffff,1);
  uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
  uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
  uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
  uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
  if (((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3) + ((ulong)LZCOUNT(uVar16) >> 3) < 8) {
    param_2[2] = param_2[2] + 1;
    uVar9 = 0xff;
  }
  else {
    uVar9 = 0x80;
  }
  *(undefined1 *)(lVar14 + lVar7) = uVar9;
  lVar7 = param_2[3];
  *(undefined1 *)(puVar2 + 1) = uVar9;
  uStack_98 = *(undefined8 *)(lVar1 + -0x20);
  uVar16 = *(undefined8 *)(lVar1 + -0x28);
  uStack_88 = *(undefined8 *)(lVar1 + -0x10);
  local_90 = *(long *)(lVar1 + -0x18);
  local_80 = *(undefined8 *)(lVar1 + -8);
  uVar15 = *(undefined8 *)(lVar1 + -0x30);
  lVar14 = *(long *)(lVar1 + -0x38);
  param_2[3] = lVar7 + -1;
  __ptr = *(long **)(lVar1 + -0x40);
  if (local_90 != -1) {
    local_c0 = (byte)*(undefined8 *)(lVar1 + -0x48);
    uVar13 = *(undefined8 *)(lVar1 + -0x18);
    uVar8 = *(undefined8 *)(lVar1 + -8);
    param_1[1] = *(undefined8 *)(lVar1 + -0x10);
    *param_1 = uVar13;
    param_1[2] = uVar8;
    if (1 < local_c0) {
                    /* try { // try from 007afc74 to 007afc7b has its CatchHandler @ 007afcd4 */
      (**(code **)(*__ptr + 0x20))(__ptr + 3,__ptr[1],__ptr[2]);
      free(__ptr);
    }
    (**(code **)(lVar14 + 0x20))(&uStack_98,uVar15,uVar16);
    return;
  }
LAB_007afca8:
  *param_1 = 0xffffffffffffffff;
  return;
}


// ===== 007afd0c  FUN_007afd0c =====

void FUN_007afd0c(undefined8 *param_1,long *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined1 uVar8;
  ulong uVar9;
  byte bVar10;
  ulong uVar11;
  undefined8 uVar12;
  long *__ptr;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  byte local_c0;
  undefined8 uStack_98;
  long local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  uVar5 = FUN_007c4ecc(param_2 + 4);
  lVar7 = 0;
  lVar15 = *param_2;
  uVar3 = param_2[1];
  bVar10 = (byte)(uVar5 >> 0x39);
  uVar16 = CONCAT17(bVar10,CONCAT16(bVar10,CONCAT15(bVar10,CONCAT14(bVar10,CONCAT13(bVar10,CONCAT12(
                                                  bVar10,CONCAT11(bVar10,bVar10)))))));
  uVar5 = uVar5 & uVar3;
  uVar17 = *(undefined8 *)(lVar15 + uVar5);
  uVar11 = NEON_cmeq(uVar17,uVar16,1);
  uVar11 = uVar11 & 0x8080808080808080;
  while( true ) {
    for (; uVar11 == 0; uVar11 = uVar11 & 0x8080808080808080) {
      uVar17 = NEON_cmeq(uVar17,0xffffffffffffffff,1);
      bVar10 = NEON_umaxv(uVar17,1);
      if ((bVar10 & 1) != 0) goto LAB_007aff04;
      lVar7 = lVar7 + 8;
      uVar5 = uVar5 + lVar7 & uVar3;
      uVar17 = *(undefined8 *)(lVar15 + uVar5);
      uVar11 = NEON_cmeq(uVar17,uVar16,1);
    }
    uVar9 = (uVar11 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar11 >> 7 & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    uVar9 = uVar5 + ((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3) & uVar3;
    lVar1 = lVar15 + uVar9 * -0x50;
    iVar4 = <http::uri::scheme::Scheme_as_core::cmp::PartialEq>::eq(param_3,lVar1 + -0x50);
    if ((iVar4 != 0) &&
       (uVar6 = <http::uri::authority::Authority_as_core::cmp::PartialEq>::eq
                          (param_3 + 0x10,lVar1 + -0x40), (uVar6 & 1) != 0)) break;
    uVar11 = uVar11 - 1 & uVar11;
  }
  lVar7 = ((long)(uVar9 * 0x50) >> 4) * -0x3333333333333333;
  uVar11 = NEON_cmeq(*(undefined8 *)(lVar15 + lVar7),0xffffffffffffffff,1);
  puVar2 = (undefined8 *)(lVar15 + (lVar7 - 8U & uVar3));
  uVar17 = NEON_cmeq(*puVar2,0xffffffffffffffff,1);
  uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
  uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
  uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
  uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
  if (((ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3) + ((ulong)LZCOUNT(uVar17) >> 3) < 8) {
    param_2[2] = param_2[2] + 1;
    uVar8 = 0xff;
  }
  else {
    uVar8 = 0x80;
  }
  *(undefined1 *)(lVar15 + lVar7) = uVar8;
  lVar7 = param_2[3];
  *(undefined1 *)(puVar2 + 1) = uVar8;
  uStack_88 = *(undefined8 *)(lVar1 + -0x18);
  local_90 = *(long *)(lVar1 + -0x20);
  uStack_78 = *(undefined8 *)(lVar1 + -8);
  local_80 = *(undefined8 *)(lVar1 + -0x10);
  uVar16 = *(undefined8 *)(lVar1 + -0x38);
  lVar15 = *(long *)(lVar1 + -0x40);
  uStack_98 = *(undefined8 *)(lVar1 + -0x28);
  uVar17 = *(undefined8 *)(lVar1 + -0x30);
  param_2[3] = lVar7 + -1;
  __ptr = *(long **)(lVar1 + -0x48);
  if (local_90 != -1) {
    local_c0 = (byte)*(undefined8 *)(lVar1 + -0x50);
    uVar12 = *(undefined8 *)(lVar1 + -0x20);
    uVar14 = *(undefined8 *)(lVar1 + -8);
    uVar13 = *(undefined8 *)(lVar1 + -0x10);
    param_1[1] = *(undefined8 *)(lVar1 + -0x18);
    *param_1 = uVar12;
    param_1[3] = uVar14;
    param_1[2] = uVar13;
    if (1 < local_c0) {
                    /* try { // try from 007afed0 to 007afed7 has its CatchHandler @ 007aff30 */
      (**(code **)(*__ptr + 0x20))(__ptr + 3,__ptr[1],__ptr[2]);
      free(__ptr);
    }
    (**(code **)(lVar15 + 0x20))(&uStack_98,uVar16,uVar17);
    return;
  }
LAB_007aff04:
  *param_1 = 0xffffffffffffffff;
  return;
}


// ===== 007aff68  FUN_007aff68 =====

undefined8 FUN_007aff68(long *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 uVar7;
  long lVar8;
  ulong uVar9;
  byte bVar10;
  ulong uVar11;
  long *__ptr;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  byte local_a0;
  undefined8 uStack_78;
  
  uVar5 = FUN_007c4ecc(param_1 + 4);
  lVar8 = 0;
  lVar12 = *param_1;
  uVar3 = param_1[1];
  bVar10 = (byte)(uVar5 >> 0x39);
  uVar13 = CONCAT17(bVar10,CONCAT16(bVar10,CONCAT15(bVar10,CONCAT14(bVar10,CONCAT13(bVar10,CONCAT12(
                                                  bVar10,CONCAT11(bVar10,bVar10)))))));
  uVar5 = uVar5 & uVar3;
  uVar15 = *(undefined8 *)(lVar12 + uVar5);
  uVar11 = NEON_cmeq(uVar15,uVar13,1);
  uVar11 = uVar11 & 0x8080808080808080;
  while( true ) {
    for (; uVar11 == 0; uVar11 = uVar11 & 0x8080808080808080) {
      uVar15 = NEON_cmeq(uVar15,0xffffffffffffffff,1);
      bVar10 = NEON_umaxv(uVar15,1);
      if ((bVar10 & 1) != 0) {
        return 0;
      }
      lVar8 = lVar8 + 8;
      uVar5 = uVar5 + lVar8 & uVar3;
      uVar15 = *(undefined8 *)(lVar12 + uVar5);
      uVar11 = NEON_cmeq(uVar15,uVar13,1);
    }
    uVar9 = (uVar11 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar11 >> 7 & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    uVar9 = uVar5 + ((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3) & uVar3;
    lVar1 = lVar12 + uVar9 * -0x30;
    iVar4 = <http::uri::scheme::Scheme_as_core::cmp::PartialEq>::eq(param_2,lVar1 + -0x30);
    if ((iVar4 != 0) &&
       (uVar6 = <http::uri::authority::Authority_as_core::cmp::PartialEq>::eq
                          (param_2 + 0x10,lVar1 + -0x20), (uVar6 & 1) != 0)) break;
    uVar11 = uVar11 - 1 & uVar11;
  }
  lVar8 = ((long)(uVar9 * 0x30) >> 4) * -0x5555555555555555;
  uVar11 = NEON_cmeq(*(undefined8 *)(lVar12 + lVar8),0xffffffffffffffff,1);
  puVar2 = (undefined8 *)(lVar12 + (lVar8 - 8U & uVar3));
  uVar15 = NEON_cmeq(*puVar2,0xffffffffffffffff,1);
  uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
  uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
  uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
  uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
  if (((ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3) + ((ulong)LZCOUNT(uVar15) >> 3) < 8) {
    param_1[2] = param_1[2] + 1;
    uVar7 = 0xff;
  }
  else {
    uVar7 = 0x80;
  }
  *(undefined1 *)(lVar12 + lVar8) = uVar7;
  lVar8 = param_1[3];
  *(undefined1 *)(puVar2 + 1) = uVar7;
  __ptr = *(long **)(lVar1 + -0x28);
  uVar15 = *(undefined8 *)(lVar1 + -0x30);
  uVar13 = *(undefined8 *)(lVar1 + -0x18);
  lVar12 = *(long *)(lVar1 + -0x20);
  uStack_78 = *(undefined8 *)(lVar1 + -8);
  uVar14 = *(undefined8 *)(lVar1 + -0x10);
  param_1[3] = lVar8 + -1;
  local_a0 = (byte)uVar15;
  if (local_a0 == 0xff) {
    return 0;
  }
  if (1 < local_a0) {
                    /* try { // try from 007b0110 to 007b0117 has its CatchHandler @ 007b0168 */
    (**(code **)(*__ptr + 0x20))(__ptr + 3,__ptr[1],__ptr[2]);
    free(__ptr);
  }
  (**(code **)(lVar12 + 0x20))(&uStack_78,uVar13,uVar14);
  return 1;
}


// ===== 007b01a0  <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(alloc[c1f8e832b0d782c7]::string::String,alloc[c1f8e832b0d782c7]::vec::Vec<core[bcece726f298455b]::net::socket_addr::SocketAddr>)>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<alloc[c1f8e832b0d782c7]::string::String,alloc[c1f8e832b0d782c7]::vec::Vec<core[bcece726f298455b]::net::socket_addr::SocketAddr>,std[17aff9129faa4dc5]::hash::random::RandomState>::{closure#0}> =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(alloc[c1f8e832b0d782c7]::string::String,
   alloc[c1f8e832b0d782c7]::vec::Vec<core[bcece726f298455b]::net::socket_addr::SocketAddr>)>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<alloc[c1f8e832b0d782c7]::string::String,
   alloc[c1f8e832b0d782c7]::vec::Vec<core[bcece726f298455b]::net::socket_addr::SocketAddr>,
   std[17aff9129faa4dc5]::hash::random::RandomState>::{closure#0}> */

undefined8
<hashbrown[32fc5d502e7f9af5]::raw::RawTable<(alloc[c1f8e832b0d782c7]::string::String,alloc[c1f8e832b0d782c7]::vec::Vec<core[bcece726f298455b]::net::socket_addr::SocketAddr>)>>
::reserve_rehash::
<hashbrown[32fc5d502e7f9af5]::map::make_hasher<alloc[c1f8e832b0d782c7]::string::String,alloc[c1f8e832b0d782c7]::vec::Vec<core[bcece726f298455b]::net::socket_addr::SocketAddr>,std[17aff9129faa4dc5]::hash::random::RandomState>::_closure_0_>
          (long *param_1,ulong param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  undefined1 auVar2 [16];
  byte bVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong *__src;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined8 *puVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  
  uVar11 = param_1[3];
  uVar20 = uVar11 + param_2;
  if (!CARRY8(uVar11,param_2)) {
    uVar17 = param_1[1];
    uVar5 = uVar17 + 1;
    uVar13 = uVar5 >> 3;
    uVar9 = uVar17;
    if (7 < uVar17) {
      uVar9 = uVar13 * 7;
    }
    if (uVar20 <= uVar9 >> 1) {
      if (uVar5 != 0) {
        __src = (ulong *)*param_1;
        puVar14 = __src;
        if ((uVar5 & 7) != 0) {
          uVar13 = uVar13 + 1;
        }
        do {
          uVar13 = uVar13 - 1;
          uVar20 = NEON_cmlt(*puVar14,0,1);
          *puVar14 = uVar20 | 0x8080808080808080;
          puVar14 = puVar14 + 1;
        } while (uVar13 != 0);
        if (uVar5 < 8) {
          memmove(__src + 1,__src,uVar17 + 1);
        }
        else {
          *(ulong *)((long)__src + uVar5) = *__src;
        }
        uVar20 = 0;
        do {
          lVar6 = *param_1;
          if (*(char *)(lVar6 + uVar20) == -0x80) {
            puVar18 = (undefined8 *)(lVar6 + ~uVar20 * 0x30);
            while( true ) {
                    /* try { // try from 007b028c to 007b0293 has its CatchHandler @ 007b072c */
              uVar5 = FUN_007c4da0(param_3,lVar6 + uVar20 * -0x30 + -0x30);
              puVar10 = (undefined8 *)*param_1;
              uVar11 = param_1[1];
              uVar13 = uVar11 & uVar5;
              uVar9 = NEON_cmlt(*(undefined8 *)((long)puVar10 + uVar13),0,1);
              if (uVar9 == 0) {
                lVar6 = 8;
                uVar21 = uVar11 & uVar5;
                do {
                  uVar21 = uVar21 + lVar6;
                  lVar6 = lVar6 + 8;
                  uVar21 = uVar21 & uVar11;
                  uVar9 = NEON_cmlt(*(undefined8 *)((long)puVar10 + uVar21),0,1);
                } while (uVar9 == 0);
              }
              else {
                uVar21 = uVar11 & uVar5;
              }
              uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
              uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
              uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
              uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
              uVar9 = uVar21 + ((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3) & uVar11;
              bVar3 = (byte)(uVar5 >> 0x38);
              if (*(char *)((long)puVar10 + uVar9) < '\0') {
                uVar5 = uVar9 - uVar13 ^ uVar20 - uVar13;
              }
              else {
                uVar5 = NEON_cmlt(*puVar10,0,1);
                uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
                uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
                uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
                uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
                uVar9 = (ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3;
                uVar5 = uVar9 - uVar13 ^ uVar20 - uVar13;
              }
              if ((uVar5 & uVar11) < 8) {
                *(byte *)((long)puVar10 + uVar20) = bVar3 >> 1;
                *(byte *)(*param_1 + (uVar11 & uVar20 - 8) + 8) = bVar3 >> 1;
                goto LAB_007b03ec;
              }
              cVar1 = *(char *)((long)puVar10 + uVar9);
              puVar8 = puVar10 + ~uVar9 * 6;
              *(byte *)((long)puVar10 + uVar9) = bVar3 >> 1;
              *(byte *)(*param_1 + (uVar9 - 8 & uVar11) + 8) = bVar3 >> 1;
              if (cVar1 == -1) break;
              uVar7 = *puVar18;
              *puVar18 = *puVar8;
              *puVar8 = uVar7;
              uVar7 = puVar18[1];
              puVar18[1] = puVar8[1];
              puVar8[1] = uVar7;
              uVar7 = puVar18[2];
              puVar18[2] = puVar8[2];
              puVar8[2] = uVar7;
              uVar7 = puVar18[3];
              puVar18[3] = puVar8[3];
              puVar8[3] = uVar7;
              uVar7 = puVar18[4];
              puVar18[4] = puVar8[4];
              puVar8[4] = uVar7;
              uVar7 = puVar18[5];
              puVar18[5] = puVar8[5];
              puVar8[5] = uVar7;
              lVar6 = *param_1;
            }
            uVar11 = param_1[1];
            *(undefined1 *)(*param_1 + uVar20) = 0xff;
            *(undefined1 *)(*param_1 + (uVar11 & uVar20 - 8) + 8) = 0xff;
            uVar24 = puVar18[3];
            uVar23 = puVar18[2];
            uVar22 = puVar18[5];
            uVar7 = puVar18[4];
            uVar25 = *puVar18;
            puVar8[1] = puVar18[1];
            *puVar8 = uVar25;
            puVar8[3] = uVar24;
            puVar8[2] = uVar23;
            puVar8[5] = uVar22;
            puVar8[4] = uVar7;
          }
LAB_007b03ec:
          bVar4 = uVar20 != uVar17;
          uVar20 = uVar20 + 1;
        } while (bVar4);
        uVar5 = param_1[1];
        uVar11 = param_1[3];
        if (7 < uVar5) {
          uVar5 = (uVar5 + 1 >> 3) * 7;
        }
      }
      param_1[2] = uVar5 - uVar11;
      return 0xffffffffffffffff;
    }
    if (uVar20 < uVar9 + 1) {
      uVar20 = uVar9 + 1;
    }
    if (uVar20 < 0xf) {
      uVar11 = 4;
      if (3 < uVar20) {
        uVar11 = (uVar20 & 8) + 8;
      }
    }
    else {
      if (uVar20 >> 0x3d != 0) goto LAB_007b066c;
      uVar11 = (0xffffffffffffffffU >> (LZCOUNT((uVar20 * 8) / 7 - 1) & 0x3fU)) + 1;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar11;
    if (SUB168(auVar2 * ZEXT816(0x30),8) == 0) {
      uVar20 = uVar11 + 8;
      uVar13 = uVar11 * 0x30;
      uVar5 = uVar13 + uVar20;
      if ((!CARRY8(uVar13,uVar20)) && (uVar5 < 0x7ffffffffffffff9)) {
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        lVar6 = FUN_004b25a4(uVar5,8);
        if (lVar6 == 0) {
          uVar7 = <hashbrown::raw::hashbrown::raw::Fallibility>::alloc_err(param_4,8,uVar5);
          return uVar7;
        }
        puVar18 = (undefined8 *)(lVar6 + uVar13);
        uVar13 = uVar11 - 1;
        uVar5 = uVar13;
        if (8 < uVar11) {
          uVar5 = (uVar11 >> 3) * 7;
        }
        memset(puVar18,0xff,uVar20);
        lVar6 = param_1[3];
        if (lVar6 == 0) {
          puVar10 = (undefined8 *)*param_1;
          lVar6 = param_1[1];
          *param_1 = (long)puVar18;
          param_1[1] = uVar13;
          param_1[2] = uVar5;
          param_1[3] = 0;
        }
        else {
          puVar8 = (undefined8 *)*param_1;
          lVar19 = 0;
          uVar20 = NEON_cmge(*puVar8,0,1);
          uVar20 = uVar20 & 0x8080808080808080;
          puVar10 = puVar8;
          do {
            for (; uVar20 == 0; uVar20 = uVar20 & 0x8080808080808080) {
              puVar8 = puVar8 + 1;
              lVar19 = lVar19 + 8;
              uVar20 = NEON_cmge(*puVar8,0,1);
            }
            uVar11 = (uVar20 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar20 >> 7 & 0xff00ff00ff00ff) << 8
            ;
            uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
            uVar11 = lVar19 + ((ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3);
                    /* try { // try from 007b05a8 to 007b05af has its CatchHandler @ 007b0718 */
            uVar17 = FUN_007c4da0(param_3,puVar10 + uVar11 * -6 + -6);
            uVar9 = uVar17 & uVar13;
            uVar21 = NEON_cmlt(*(undefined8 *)((long)puVar18 + uVar9),0,1);
            if (uVar21 == 0) {
              lVar12 = 8;
              do {
                uVar9 = uVar9 + lVar12;
                lVar12 = lVar12 + 8;
                uVar9 = uVar9 & uVar13;
                uVar21 = NEON_cmlt(*(undefined8 *)((long)puVar18 + uVar9),0,1);
              } while (uVar21 == 0);
            }
            uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
            uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
            uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
            uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
            uVar9 = uVar9 + ((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3) & uVar13;
            if (-1 < *(char *)((long)puVar18 + uVar9)) {
              uVar9 = NEON_cmlt(*puVar18,0,1);
              uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
              uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
              uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
              uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
              uVar9 = (ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3;
            }
            puVar10 = (undefined8 *)*param_1;
            puVar15 = puVar10 + ~uVar11 * 6;
            bVar3 = (byte)(uVar17 >> 0x38);
            *(byte *)((long)puVar18 + uVar9) = bVar3 >> 1;
            lVar6 = lVar6 + -1;
            puVar16 = puVar18 + ~uVar9 * 6;
            *(byte *)((long)puVar18 + (uVar9 - 8 & uVar13) + 8) = bVar3 >> 1;
            uVar20 = uVar20 - 1 & uVar20;
            uVar22 = puVar15[1];
            uVar7 = *puVar15;
            uVar24 = puVar15[3];
            uVar23 = puVar15[2];
            uVar25 = puVar15[4];
            puVar16[5] = puVar15[5];
            puVar16[4] = uVar25;
            puVar16[1] = uVar22;
            *puVar16 = uVar7;
            puVar16[3] = uVar24;
            puVar16[2] = uVar23;
          } while (lVar6 != 0);
          lVar6 = param_1[1];
          *param_1 = (long)puVar18;
          param_1[1] = uVar13;
          param_1[2] = uVar5 - param_1[3];
          param_1[3] = param_1[3];
        }
        if (lVar6 == 0) {
          return 0xffffffffffffffff;
        }
        lVar19 = lVar6 * 0x30 + 0x30;
        if (lVar6 + lVar19 == -9) {
          return 0xffffffffffffffff;
        }
        free((void *)((long)puVar10 - lVar19));
        return 0xffffffffffffffff;
      }
    }
  }
LAB_007b066c:
  uVar7 = <hashbrown::raw::hashbrown::raw::Fallibility>::capacity_overflow(param_4);
  return uVar7;
}


// ===== 007b0744  <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(alloc[c1f8e832b0d782c7]::string::String,reqwest[6fed810f3e38d558]::proxy::ProxyScheme)>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<alloc[c1f8e832b0d782c7]::string::String,reqwest[6fed810f3e38d558]::proxy::ProxyScheme,std[17aff9129faa4dc5]::hash::random::RandomState>::{closure#0}> =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(alloc[c1f8e832b0d782c7]::string::String,
   reqwest[6fed810f3e38d558]::proxy::ProxyScheme)>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<alloc[c1f8e832b0d782c7]::string::String,
   reqwest[6fed810f3e38d558]::proxy::ProxyScheme,
   std[17aff9129faa4dc5]::hash::random::RandomState>::{closure#0}> */

undefined8
<hashbrown[32fc5d502e7f9af5]::raw::RawTable<(alloc[c1f8e832b0d782c7]::string::String,reqwest[6fed810f3e38d558]::proxy::ProxyScheme)>>
::reserve_rehash::
<hashbrown[32fc5d502e7f9af5]::map::make_hasher<alloc[c1f8e832b0d782c7]::string::String,reqwest[6fed810f3e38d558]::proxy::ProxyScheme,std[17aff9129faa4dc5]::hash::random::RandomState>::_closure_0_>
          (long *param_1,ulong param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  undefined1 auVar2 [16];
  byte bVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong *__src;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined8 *puVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  
  uVar11 = param_1[3];
  uVar20 = uVar11 + param_2;
  if (!CARRY8(uVar11,param_2)) {
    uVar17 = param_1[1];
    uVar5 = uVar17 + 1;
    uVar13 = uVar5 >> 3;
    uVar9 = uVar17;
    if (7 < uVar17) {
      uVar9 = uVar13 * 7;
    }
    if (uVar20 <= uVar9 >> 1) {
      if (uVar5 != 0) {
        __src = (ulong *)*param_1;
        puVar14 = __src;
        if ((uVar5 & 7) != 0) {
          uVar13 = uVar13 + 1;
        }
        do {
          uVar13 = uVar13 - 1;
          uVar20 = NEON_cmlt(*puVar14,0,1);
          *puVar14 = uVar20 | 0x8080808080808080;
          puVar14 = puVar14 + 1;
        } while (uVar13 != 0);
        if (uVar5 < 8) {
          memmove(__src + 1,__src,uVar17 + 1);
        }
        else {
          *(ulong *)((long)__src + uVar5) = *__src;
        }
        uVar20 = 0;
        do {
          lVar6 = *param_1;
          if (*(char *)(lVar6 + uVar20) == -0x80) {
            puVar18 = (undefined8 *)(lVar6 + ~uVar20 * 0x68);
            while( true ) {
                    /* try { // try from 007b0830 to 007b0837 has its CatchHandler @ 007b0d6c */
              uVar5 = FUN_007c4da0(param_3,lVar6 + uVar20 * -0x68 + -0x68);
              puVar10 = (undefined8 *)*param_1;
              uVar11 = param_1[1];
              uVar13 = uVar11 & uVar5;
              uVar9 = NEON_cmlt(*(undefined8 *)((long)puVar10 + uVar13),0,1);
              if (uVar9 == 0) {
                lVar6 = 8;
                uVar21 = uVar11 & uVar5;
                do {
                  uVar21 = uVar21 + lVar6;
                  lVar6 = lVar6 + 8;
                  uVar21 = uVar21 & uVar11;
                  uVar9 = NEON_cmlt(*(undefined8 *)((long)puVar10 + uVar21),0,1);
                } while (uVar9 == 0);
              }
              else {
                uVar21 = uVar11 & uVar5;
              }
              uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
              uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
              uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
              uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
              uVar9 = uVar21 + ((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3) & uVar11;
              bVar3 = (byte)(uVar5 >> 0x38);
              if (*(char *)((long)puVar10 + uVar9) < '\0') {
                uVar5 = uVar9 - uVar13 ^ uVar20 - uVar13;
              }
              else {
                uVar5 = NEON_cmlt(*puVar10,0,1);
                uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
                uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
                uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
                uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
                uVar9 = (ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3;
                uVar5 = uVar9 - uVar13 ^ uVar20 - uVar13;
              }
              if ((uVar5 & uVar11) < 8) {
                *(byte *)((long)puVar10 + uVar20) = bVar3 >> 1;
                *(byte *)(*param_1 + (uVar11 & uVar20 - 8) + 8) = bVar3 >> 1;
                goto LAB_007b0a00;
              }
              cVar1 = *(char *)((long)puVar10 + uVar9);
              puVar8 = puVar10 + ~uVar9 * 0xd;
              *(byte *)((long)puVar10 + uVar9) = bVar3 >> 1;
              *(byte *)(*param_1 + (uVar9 - 8 & uVar11) + 8) = bVar3 >> 1;
              if (cVar1 == -1) break;
              uVar7 = *puVar18;
              *puVar18 = *puVar8;
              *puVar8 = uVar7;
              uVar7 = puVar18[1];
              puVar18[1] = puVar8[1];
              puVar8[1] = uVar7;
              uVar7 = puVar18[2];
              puVar18[2] = puVar8[2];
              puVar8[2] = uVar7;
              uVar7 = puVar18[3];
              puVar18[3] = puVar8[3];
              puVar8[3] = uVar7;
              uVar7 = puVar18[4];
              puVar18[4] = puVar8[4];
              puVar8[4] = uVar7;
              uVar7 = puVar18[5];
              puVar18[5] = puVar8[5];
              puVar8[5] = uVar7;
              uVar7 = puVar18[6];
              puVar18[6] = puVar8[6];
              puVar8[6] = uVar7;
              uVar7 = puVar18[7];
              puVar18[7] = puVar8[7];
              puVar8[7] = uVar7;
              uVar7 = puVar18[8];
              puVar18[8] = puVar8[8];
              puVar8[8] = uVar7;
              uVar7 = puVar18[9];
              puVar18[9] = puVar8[9];
              puVar8[9] = uVar7;
              uVar7 = puVar18[10];
              puVar18[10] = puVar8[10];
              puVar8[10] = uVar7;
              uVar7 = puVar18[0xb];
              puVar18[0xb] = puVar8[0xb];
              puVar8[0xb] = uVar7;
              uVar7 = puVar18[0xc];
              puVar18[0xc] = puVar8[0xc];
              puVar8[0xc] = uVar7;
              lVar6 = *param_1;
            }
            uVar11 = param_1[1];
            *(undefined1 *)(*param_1 + uVar20) = 0xff;
            *(undefined1 *)(*param_1 + (uVar11 & uVar20 - 8) + 8) = 0xff;
            uVar24 = puVar18[3];
            uVar23 = puVar18[2];
            uVar22 = puVar18[5];
            uVar7 = puVar18[4];
            uVar25 = *puVar18;
            puVar8[1] = puVar18[1];
            *puVar8 = uVar25;
            puVar8[3] = uVar24;
            puVar8[2] = uVar23;
            puVar8[5] = uVar22;
            puVar8[4] = uVar7;
            uVar26 = puVar18[9];
            uVar25 = puVar18[8];
            uVar22 = puVar18[0xb];
            uVar7 = puVar18[10];
            uVar24 = puVar18[7];
            uVar23 = puVar18[6];
            puVar8[0xc] = puVar18[0xc];
            puVar8[9] = uVar26;
            puVar8[8] = uVar25;
            puVar8[0xb] = uVar22;
            puVar8[10] = uVar7;
            puVar8[7] = uVar24;
            puVar8[6] = uVar23;
          }
LAB_007b0a00:
          bVar4 = uVar20 != uVar17;
          uVar20 = uVar20 + 1;
        } while (bVar4);
        uVar5 = param_1[1];
        uVar11 = param_1[3];
        if (7 < uVar5) {
          uVar5 = (uVar5 + 1 >> 3) * 7;
        }
      }
      param_1[2] = uVar5 - uVar11;
      return 0xffffffffffffffff;
    }
    if (uVar20 < uVar9 + 1) {
      uVar20 = uVar9 + 1;
    }
    if (uVar20 < 0xf) {
      uVar11 = 4;
      if (3 < uVar20) {
        uVar11 = (uVar20 & 8) + 8;
      }
    }
    else {
      if (uVar20 >> 0x3d != 0) goto LAB_007b0cac;
      uVar11 = (0xffffffffffffffffU >> (LZCOUNT((uVar20 * 8) / 7 - 1) & 0x3fU)) + 1;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar11;
    if (SUB168(auVar2 * ZEXT816(0x68),8) == 0) {
      uVar13 = uVar11 * 0x68;
      uVar20 = uVar11 + 8;
      uVar5 = uVar13 + uVar20;
      if ((!CARRY8(uVar13,uVar20)) && (uVar5 < 0x7ffffffffffffff9)) {
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        lVar6 = FUN_004b25a4(uVar5,8);
        if (lVar6 == 0) {
          uVar7 = <hashbrown::raw::hashbrown::raw::Fallibility>::alloc_err(param_4,8,uVar5);
          return uVar7;
        }
        puVar18 = (undefined8 *)(lVar6 + uVar13);
        uVar13 = uVar11 - 1;
        uVar5 = uVar13;
        if (8 < uVar11) {
          uVar5 = (uVar11 >> 3) * 7;
        }
        memset(puVar18,0xff,uVar20);
        lVar6 = param_1[3];
        if (lVar6 == 0) {
          puVar10 = (undefined8 *)*param_1;
          lVar6 = param_1[1];
          *param_1 = (long)puVar18;
          param_1[1] = uVar13;
          param_1[2] = uVar5;
          param_1[3] = 0;
        }
        else {
          puVar8 = (undefined8 *)*param_1;
          lVar19 = 0;
          uVar20 = NEON_cmge(*puVar8,0,1);
          uVar20 = uVar20 & 0x8080808080808080;
          puVar10 = puVar8;
          do {
            for (; uVar20 == 0; uVar20 = uVar20 & 0x8080808080808080) {
              puVar8 = puVar8 + 1;
              lVar19 = lVar19 + 8;
              uVar20 = NEON_cmge(*puVar8,0,1);
            }
            uVar11 = (uVar20 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar20 >> 7 & 0xff00ff00ff00ff) << 8
            ;
            uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
            uVar11 = lVar19 + ((ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3);
                    /* try { // try from 007b0bd0 to 007b0bd7 has its CatchHandler @ 007b0d58 */
            uVar17 = FUN_007c4da0(param_3,puVar10 + uVar11 * -0xd + -0xd);
            uVar9 = uVar17 & uVar13;
            uVar21 = NEON_cmlt(*(undefined8 *)((long)puVar18 + uVar9),0,1);
            if (uVar21 == 0) {
              lVar12 = 8;
              do {
                uVar9 = uVar9 + lVar12;
                lVar12 = lVar12 + 8;
                uVar9 = uVar9 & uVar13;
                uVar21 = NEON_cmlt(*(undefined8 *)((long)puVar18 + uVar9),0,1);
              } while (uVar21 == 0);
            }
            uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
            uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
            uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
            uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
            uVar9 = uVar9 + ((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3) & uVar13;
            if (-1 < *(char *)((long)puVar18 + uVar9)) {
              uVar9 = NEON_cmlt(*puVar18,0,1);
              uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
              uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
              uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
              uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
              uVar9 = (ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3;
            }
            puVar10 = (undefined8 *)*param_1;
            puVar15 = puVar10 + ~uVar11 * 0xd;
            bVar3 = (byte)(uVar17 >> 0x38);
            *(byte *)((long)puVar18 + uVar9) = bVar3 >> 1;
            lVar6 = lVar6 + -1;
            puVar16 = puVar18 + ~uVar9 * 0xd;
            *(byte *)((long)puVar18 + (uVar9 - 8 & uVar13) + 8) = bVar3 >> 1;
            uVar22 = puVar15[1];
            uVar7 = *puVar15;
            uVar24 = puVar15[3];
            uVar23 = puVar15[2];
            uVar25 = puVar15[4];
            puVar16[5] = puVar15[5];
            puVar16[4] = uVar25;
            puVar16[1] = uVar22;
            *puVar16 = uVar7;
            puVar16[3] = uVar24;
            puVar16[2] = uVar23;
            uVar22 = puVar15[7];
            uVar7 = puVar15[6];
            uVar24 = puVar15[9];
            uVar23 = puVar15[8];
            uVar26 = puVar15[0xb];
            uVar25 = puVar15[10];
            puVar16[0xc] = puVar15[0xc];
            uVar20 = uVar20 - 1 & uVar20;
            puVar16[7] = uVar22;
            puVar16[6] = uVar7;
            puVar16[9] = uVar24;
            puVar16[8] = uVar23;
            puVar16[0xb] = uVar26;
            puVar16[10] = uVar25;
          } while (lVar6 != 0);
          lVar6 = param_1[1];
          *param_1 = (long)puVar18;
          param_1[1] = uVar13;
          param_1[2] = uVar5 - param_1[3];
          param_1[3] = param_1[3];
        }
        if (lVar6 == 0) {
          return 0xffffffffffffffff;
        }
        lVar19 = lVar6 * 0x68 + 0x68;
        if (lVar6 + lVar19 == -9) {
          return 0xffffffffffffffff;
        }
        free((void *)((long)puVar10 - lVar19));
        return 0xffffffffffffffff;
      }
    }
  }
LAB_007b0cac:
  uVar7 = <hashbrown::raw::hashbrown::raw::Fallibility>::capacity_overflow(param_4);
  return uVar7;
}


// ===== 007b0d84  <hashbrown[32fc5d502e7f9af5]::raw::RawTable<((http[b87e90c26fe47eb4]::uri::scheme::Scheme,http[b87e90c26fe47eb4]::uri::authority::Authority),alloc[c1f8e832b0d782c7]::vec::Vec<hyper_util[52a210df7efc1bae]::client::legacy::pool::Idle<hyper_util[52a210df7efc1bae]::client::legacy::client::PoolClient<reqwest[6fed810f3e38d558]::async_impl::body::Body>>>)>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher< =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <hashbrown[32fc5d502e7f9af5]::raw::RawTable<((http[b87e90c26fe47eb4]::uri::scheme::Scheme,
   http[b87e90c26fe47eb4]::uri::authority::Authority),
   alloc[c1f8e832b0d782c7]::vec::Vec<hyper_util[52a210df7efc1bae]::client::legacy::pool::Idle<hyper_util[52a210df7efc1bae]::client::legacy::client::PoolClient<reqwest[6fed810f3e38d558]::async_impl::body::Body>>>)>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<(http[b87e90c26fe47eb4]::uri::scheme::Scheme,
   http[b87e90c26fe47eb4]::uri::authority::Authority),
   alloc[c1f8e832b0d782c7]::vec::Vec<hyper_util[52a210df7efc1bae]::client::legacy::pool::Idle<hyper_util[52a210df7efc1bae]::client::legacy::client::PoolClient<reqwest[6fed810f3e38d558]::async_impl::body::Body>>>,
   std[17aff9129faa4dc5]::hash::random::RandomState>::{closure#0}> */

undefined8
<hashbrown[32fc5d502e7f9af5]::raw::RawTable<((http[b87e90c26fe47eb4]::uri::scheme::
Scheme,http[b87e90c26fe47eb4]::uri::authority::Authority),alloc[c1f8e832b0d782c7]::vec::
Vec<hyper_util[52a210df7efc1bae]::client::legacy::pool::Idle<hyper_util[52a210df7efc1bae]::client::
legacy::client::PoolClient<reqwest[6fed810f3e38d558]::async_impl::body::Body>>>)>>::reserve_rehash::
<hashbrown[32fc5d502e7f9af5]::map::make_hasher<
          (long *param_1,ulong param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  undefined1 auVar2 [16];
  byte bVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong *__src;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined8 *puVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  
  uVar11 = param_1[3];
  uVar20 = uVar11 + param_2;
  if (!CARRY8(uVar11,param_2)) {
    uVar17 = param_1[1];
    uVar5 = uVar17 + 1;
    uVar13 = uVar5 >> 3;
    uVar9 = uVar17;
    if (7 < uVar17) {
      uVar9 = uVar13 * 7;
    }
    if (uVar20 <= uVar9 >> 1) {
      if (uVar5 != 0) {
        __src = (ulong *)*param_1;
        puVar14 = __src;
        if ((uVar5 & 7) != 0) {
          uVar13 = uVar13 + 1;
        }
        do {
          uVar13 = uVar13 - 1;
          uVar20 = NEON_cmlt(*puVar14,0,1);
          *puVar14 = uVar20 | 0x8080808080808080;
          puVar14 = puVar14 + 1;
        } while (uVar13 != 0);
        if (uVar5 < 8) {
          memmove(__src + 1,__src,uVar17 + 1);
        }
        else {
          *(ulong *)((long)__src + uVar5) = *__src;
        }
        uVar20 = 0;
        do {
          lVar6 = *param_1;
          if (*(char *)(lVar6 + uVar20) == -0x80) {
            puVar18 = (undefined8 *)(lVar6 + ~uVar20 * 0x48);
            while( true ) {
                    /* try { // try from 007b0e70 to 007b0e77 has its CatchHandler @ 007b1360 */
              uVar5 = FUN_007c4ecc(param_3,lVar6 + uVar20 * -0x48 + -0x48);
              puVar10 = (undefined8 *)*param_1;
              uVar11 = param_1[1];
              uVar13 = uVar11 & uVar5;
              uVar9 = NEON_cmlt(*(undefined8 *)((long)puVar10 + uVar13),0,1);
              if (uVar9 == 0) {
                lVar6 = 8;
                uVar21 = uVar11 & uVar5;
                do {
                  uVar21 = uVar21 + lVar6;
                  lVar6 = lVar6 + 8;
                  uVar21 = uVar21 & uVar11;
                  uVar9 = NEON_cmlt(*(undefined8 *)((long)puVar10 + uVar21),0,1);
                } while (uVar9 == 0);
              }
              else {
                uVar21 = uVar11 & uVar5;
              }
              uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
              uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
              uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
              uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
              uVar9 = uVar21 + ((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3) & uVar11;
              bVar3 = (byte)(uVar5 >> 0x38);
              if (*(char *)((long)puVar10 + uVar9) < '\0') {
                uVar5 = uVar9 - uVar13 ^ uVar20 - uVar13;
              }
              else {
                uVar5 = NEON_cmlt(*puVar10,0,1);
                uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
                uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
                uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
                uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
                uVar9 = (ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3;
                uVar5 = uVar9 - uVar13 ^ uVar20 - uVar13;
              }
              if ((uVar5 & uVar11) < 8) {
                *(byte *)((long)puVar10 + uVar20) = bVar3 >> 1;
                *(byte *)(*param_1 + (uVar11 & uVar20 - 8) + 8) = bVar3 >> 1;
                goto LAB_007b1000;
              }
              cVar1 = *(char *)((long)puVar10 + uVar9);
              puVar8 = puVar10 + ~uVar9 * 9;
              *(byte *)((long)puVar10 + uVar9) = bVar3 >> 1;
              *(byte *)(*param_1 + (uVar9 - 8 & uVar11) + 8) = bVar3 >> 1;
              if (cVar1 == -1) break;
              uVar7 = *puVar18;
              *puVar18 = *puVar8;
              *puVar8 = uVar7;
              uVar7 = puVar18[1];
              puVar18[1] = puVar8[1];
              puVar8[1] = uVar7;
              uVar7 = puVar18[2];
              puVar18[2] = puVar8[2];
              puVar8[2] = uVar7;
              uVar7 = puVar18[3];
              puVar18[3] = puVar8[3];
              puVar8[3] = uVar7;
              uVar7 = puVar18[4];
              puVar18[4] = puVar8[4];
              puVar8[4] = uVar7;
              uVar7 = puVar18[5];
              puVar18[5] = puVar8[5];
              puVar8[5] = uVar7;
              uVar7 = puVar18[6];
              puVar18[6] = puVar8[6];
              puVar8[6] = uVar7;
              uVar7 = puVar18[7];
              puVar18[7] = puVar8[7];
              puVar8[7] = uVar7;
              uVar7 = puVar18[8];
              puVar18[8] = puVar8[8];
              puVar8[8] = uVar7;
              lVar6 = *param_1;
            }
            uVar11 = param_1[1];
            *(undefined1 *)(*param_1 + uVar20) = 0xff;
            *(undefined1 *)(*param_1 + (uVar11 & uVar20 - 8) + 8) = 0xff;
            uVar7 = *puVar18;
            puVar8[1] = puVar18[1];
            *puVar8 = uVar7;
            uVar26 = puVar18[5];
            uVar25 = puVar18[4];
            uVar22 = puVar18[7];
            uVar7 = puVar18[6];
            uVar24 = puVar18[3];
            uVar23 = puVar18[2];
            puVar8[8] = puVar18[8];
            puVar8[5] = uVar26;
            puVar8[4] = uVar25;
            puVar8[7] = uVar22;
            puVar8[6] = uVar7;
            puVar8[3] = uVar24;
            puVar8[2] = uVar23;
          }
LAB_007b1000:
          bVar4 = uVar20 != uVar17;
          uVar20 = uVar20 + 1;
        } while (bVar4);
        uVar5 = param_1[1];
        uVar11 = param_1[3];
        if (7 < uVar5) {
          uVar5 = (uVar5 + 1 >> 3) * 7;
        }
      }
      param_1[2] = uVar5 - uVar11;
      return 0xffffffffffffffff;
    }
    if (uVar20 < uVar9 + 1) {
      uVar20 = uVar9 + 1;
    }
    if (uVar20 < 0xf) {
      uVar11 = 4;
      if (3 < uVar20) {
        uVar11 = (uVar20 & 8) + 8;
      }
    }
    else {
      if (uVar20 >> 0x3d != 0) goto LAB_007b12a0;
      uVar11 = (0xffffffffffffffffU >> (LZCOUNT((uVar20 * 8) / 7 - 1) & 0x3fU)) + 1;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar11;
    if (SUB168(auVar2 * ZEXT816(0x48),8) == 0) {
      uVar20 = uVar11 + 8;
      uVar13 = uVar11 * 0x48;
      uVar5 = uVar13 + uVar20;
      if ((!CARRY8(uVar13,uVar20)) && (uVar5 < 0x7ffffffffffffff9)) {
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        lVar6 = FUN_004b25a4(uVar5,8);
        if (lVar6 == 0) {
          uVar7 = <hashbrown::raw::hashbrown::raw::Fallibility>::alloc_err(param_4,8,uVar5);
          return uVar7;
        }
        puVar18 = (undefined8 *)(lVar6 + uVar13);
        uVar13 = uVar11 - 1;
        uVar5 = uVar13;
        if (8 < uVar11) {
          uVar5 = (uVar11 >> 3) * 7;
        }
        memset(puVar18,0xff,uVar20);
        lVar6 = param_1[3];
        if (lVar6 == 0) {
          puVar10 = (undefined8 *)*param_1;
          lVar6 = param_1[1];
          *param_1 = (long)puVar18;
          param_1[1] = uVar13;
          param_1[2] = uVar5;
          param_1[3] = 0;
        }
        else {
          puVar8 = (undefined8 *)*param_1;
          lVar19 = 0;
          uVar20 = NEON_cmge(*puVar8,0,1);
          uVar20 = uVar20 & 0x8080808080808080;
          puVar10 = puVar8;
          do {
            for (; uVar20 == 0; uVar20 = uVar20 & 0x8080808080808080) {
              puVar8 = puVar8 + 1;
              lVar19 = lVar19 + 8;
              uVar20 = NEON_cmge(*puVar8,0,1);
            }
            uVar11 = (uVar20 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar20 >> 7 & 0xff00ff00ff00ff) << 8
            ;
            uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
            uVar11 = lVar19 + ((ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3);
                    /* try { // try from 007b11cc to 007b11d3 has its CatchHandler @ 007b134c */
            uVar17 = FUN_007c4ecc(param_3,puVar10 + uVar11 * -9 + -9);
            uVar9 = uVar17 & uVar13;
            uVar21 = NEON_cmlt(*(undefined8 *)((long)puVar18 + uVar9),0,1);
            if (uVar21 == 0) {
              lVar12 = 8;
              do {
                uVar9 = uVar9 + lVar12;
                lVar12 = lVar12 + 8;
                uVar9 = uVar9 & uVar13;
                uVar21 = NEON_cmlt(*(undefined8 *)((long)puVar18 + uVar9),0,1);
              } while (uVar21 == 0);
            }
            uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
            uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
            uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
            uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
            uVar9 = uVar9 + ((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3) & uVar13;
            if (-1 < *(char *)((long)puVar18 + uVar9)) {
              uVar9 = NEON_cmlt(*puVar18,0,1);
              uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
              uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
              uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
              uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
              uVar9 = (ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3;
            }
            puVar10 = (undefined8 *)*param_1;
            puVar15 = puVar10 + ~uVar11 * 9;
            bVar3 = (byte)(uVar17 >> 0x38);
            *(byte *)((long)puVar18 + uVar9) = bVar3 >> 1;
            lVar6 = lVar6 + -1;
            puVar16 = puVar18 + ~uVar9 * 9;
            *(byte *)((long)puVar18 + (uVar9 - 8 & uVar13) + 8) = bVar3 >> 1;
            uVar7 = *puVar15;
            puVar16[1] = puVar15[1];
            *puVar16 = uVar7;
            uVar22 = puVar15[3];
            uVar7 = puVar15[2];
            uVar24 = puVar15[5];
            uVar23 = puVar15[4];
            uVar26 = puVar15[7];
            uVar25 = puVar15[6];
            puVar16[8] = puVar15[8];
            uVar20 = uVar20 - 1 & uVar20;
            puVar16[3] = uVar22;
            puVar16[2] = uVar7;
            puVar16[5] = uVar24;
            puVar16[4] = uVar23;
            puVar16[7] = uVar26;
            puVar16[6] = uVar25;
          } while (lVar6 != 0);
          lVar6 = param_1[1];
          *param_1 = (long)puVar18;
          param_1[1] = uVar13;
          param_1[2] = uVar5 - param_1[3];
          param_1[3] = param_1[3];
        }
        if (lVar6 == 0) {
          return 0xffffffffffffffff;
        }
        lVar19 = lVar6 * 0x48 + 0x48;
        if (lVar6 + lVar19 == -9) {
          return 0xffffffffffffffff;
        }
        free((void *)((long)puVar10 - lVar19));
        return 0xffffffffffffffff;
      }
    }
  }
LAB_007b12a0:
  uVar7 = <hashbrown::raw::hashbrown::raw::Fallibility>::capacity_overflow(param_4);
  return uVar7;
}


// ===== 007b1378  <hashbrown[32fc5d502e7f9af5]::raw::RawTable<((http[b87e90c26fe47eb4]::uri::scheme::Scheme,http[b87e90c26fe47eb4]::uri::authority::Authority),alloc[c1f8e832b0d782c7]::collections::vec_deque::VecDeque<futures_channel[8e2a30f4763cc095]::oneshot::Sender<hyper_util[52a210df7efc1bae]::client::legacy::client::PoolClient<reqwest[6fed810f3e38d558]::async_impl::body::Body>>>)>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher< =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <hashbrown[32fc5d502e7f9af5]::raw::RawTable<((http[b87e90c26fe47eb4]::uri::scheme::Scheme,
   http[b87e90c26fe47eb4]::uri::authority::Authority),
   alloc[c1f8e832b0d782c7]::collections::vec_deque::VecDeque<futures_channel[8e2a30f4763cc095]::oneshot::Sender<hyper_util[52a210df7efc1bae]::client::legacy::client::PoolClient<reqwest[6fed810f3e38d558]::async_impl::body::Body>>>)>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<(http[b87e90c26fe47eb4]::uri::scheme::Scheme,
   http[b87e90c26fe47eb4]::uri::authority::Authority),
   alloc[c1f8e832b0d782c7]::collections::vec_deque::VecDeque<futures_channel[8e2a30f4763cc095]::oneshot::Sender<hyper_util[52a210df7efc1bae]::client::legacy::client::PoolClient<reqwest[6fed810f3e38d558]::async_impl::body::Body>>>,
   std[17aff9129faa4dc5]::hash::random::RandomState>::{closure#0}> */

undefined8
<hashbrown[32fc5d502e7f9af5]::raw::RawTable<((http[b87e90c26fe47eb4]::uri::scheme::
Scheme,http[b87e90c26fe47eb4]::uri::authority::Authority),alloc[c1f8e832b0d782c7]::collections::
vec_deque::VecDeque<futures_channel[8e2a30f4763cc095]::oneshot::Sender<hyper_util[52a210df7efc1bae]
::client::legacy::client::PoolClient<reqwest[6fed810f3e38d558]::async_impl::body::Body>>>)>>::
reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<
          (long *param_1,ulong param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  undefined1 auVar2 [16];
  byte bVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong *__src;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined8 *puVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  
  uVar11 = param_1[3];
  uVar20 = uVar11 + param_2;
  if (!CARRY8(uVar11,param_2)) {
    uVar17 = param_1[1];
    uVar5 = uVar17 + 1;
    uVar13 = uVar5 >> 3;
    uVar9 = uVar17;
    if (7 < uVar17) {
      uVar9 = uVar13 * 7;
    }
    if (uVar20 <= uVar9 >> 1) {
      if (uVar5 != 0) {
        __src = (ulong *)*param_1;
        puVar14 = __src;
        if ((uVar5 & 7) != 0) {
          uVar13 = uVar13 + 1;
        }
        do {
          uVar13 = uVar13 - 1;
          uVar20 = NEON_cmlt(*puVar14,0,1);
          *puVar14 = uVar20 | 0x8080808080808080;
          puVar14 = puVar14 + 1;
        } while (uVar13 != 0);
        if (uVar5 < 8) {
          memmove(__src + 1,__src,uVar17 + 1);
        }
        else {
          *(ulong *)((long)__src + uVar5) = *__src;
        }
        uVar20 = 0;
        do {
          lVar6 = *param_1;
          if (*(char *)(lVar6 + uVar20) == -0x80) {
            puVar18 = (undefined8 *)(lVar6 + ~uVar20 * 0x50);
            while( true ) {
                    /* try { // try from 007b1464 to 007b146b has its CatchHandler @ 007b1954 */
              uVar5 = FUN_007c4ecc(param_3,lVar6 + uVar20 * -0x50 + -0x50);
              puVar10 = (undefined8 *)*param_1;
              uVar11 = param_1[1];
              uVar13 = uVar11 & uVar5;
              uVar9 = NEON_cmlt(*(undefined8 *)((long)puVar10 + uVar13),0,1);
              if (uVar9 == 0) {
                lVar6 = 8;
                uVar21 = uVar11 & uVar5;
                do {
                  uVar21 = uVar21 + lVar6;
                  lVar6 = lVar6 + 8;
                  uVar21 = uVar21 & uVar11;
                  uVar9 = NEON_cmlt(*(undefined8 *)((long)puVar10 + uVar21),0,1);
                } while (uVar9 == 0);
              }
              else {
                uVar21 = uVar11 & uVar5;
              }
              uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
              uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
              uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
              uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
              uVar9 = uVar21 + ((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3) & uVar11;
              bVar3 = (byte)(uVar5 >> 0x38);
              if (*(char *)((long)puVar10 + uVar9) < '\0') {
                uVar5 = uVar9 - uVar13 ^ uVar20 - uVar13;
              }
              else {
                uVar5 = NEON_cmlt(*puVar10,0,1);
                uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
                uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
                uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
                uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
                uVar9 = (ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3;
                uVar5 = uVar9 - uVar13 ^ uVar20 - uVar13;
              }
              if ((uVar5 & uVar11) < 8) {
                *(byte *)((long)puVar10 + uVar20) = bVar3 >> 1;
                *(byte *)(*param_1 + (uVar11 & uVar20 - 8) + 8) = bVar3 >> 1;
                goto LAB_007b1604;
              }
              cVar1 = *(char *)((long)puVar10 + uVar9);
              puVar8 = puVar10 + ~uVar9 * 10;
              *(byte *)((long)puVar10 + uVar9) = bVar3 >> 1;
              *(byte *)(*param_1 + (uVar9 - 8 & uVar11) + 8) = bVar3 >> 1;
              if (cVar1 == -1) break;
              uVar7 = *puVar18;
              *puVar18 = *puVar8;
              *puVar8 = uVar7;
              uVar7 = puVar18[1];
              puVar18[1] = puVar8[1];
              puVar8[1] = uVar7;
              uVar7 = puVar18[2];
              puVar18[2] = puVar8[2];
              puVar8[2] = uVar7;
              uVar7 = puVar18[3];
              puVar18[3] = puVar8[3];
              puVar8[3] = uVar7;
              uVar7 = puVar18[4];
              puVar18[4] = puVar8[4];
              puVar8[4] = uVar7;
              uVar7 = puVar18[5];
              puVar18[5] = puVar8[5];
              puVar8[5] = uVar7;
              uVar7 = puVar18[6];
              puVar18[6] = puVar8[6];
              puVar8[6] = uVar7;
              uVar7 = puVar18[7];
              puVar18[7] = puVar8[7];
              puVar8[7] = uVar7;
              uVar7 = puVar18[8];
              puVar18[8] = puVar8[8];
              puVar8[8] = uVar7;
              uVar7 = puVar18[9];
              puVar18[9] = puVar8[9];
              puVar8[9] = uVar7;
              lVar6 = *param_1;
            }
            uVar11 = param_1[1];
            *(undefined1 *)(*param_1 + uVar20) = 0xff;
            *(undefined1 *)(*param_1 + (uVar11 & uVar20 - 8) + 8) = 0xff;
            uVar7 = *puVar18;
            puVar8[1] = puVar18[1];
            *puVar8 = uVar7;
            uVar23 = puVar18[6];
            uVar22 = puVar18[9];
            uVar7 = puVar18[8];
            uVar25 = puVar18[3];
            uVar24 = puVar18[2];
            uVar27 = puVar18[5];
            uVar26 = puVar18[4];
            puVar8[7] = puVar18[7];
            puVar8[6] = uVar23;
            puVar8[9] = uVar22;
            puVar8[8] = uVar7;
            puVar8[3] = uVar25;
            puVar8[2] = uVar24;
            puVar8[5] = uVar27;
            puVar8[4] = uVar26;
          }
LAB_007b1604:
          bVar4 = uVar20 != uVar17;
          uVar20 = uVar20 + 1;
        } while (bVar4);
        uVar5 = param_1[1];
        uVar11 = param_1[3];
        if (7 < uVar5) {
          uVar5 = (uVar5 + 1 >> 3) * 7;
        }
      }
      param_1[2] = uVar5 - uVar11;
      return 0xffffffffffffffff;
    }
    if (uVar20 < uVar9 + 1) {
      uVar20 = uVar9 + 1;
    }
    if (uVar20 < 0xf) {
      uVar11 = 4;
      if (3 < uVar20) {
        uVar11 = (uVar20 & 8) + 8;
      }
    }
    else {
      if (uVar20 >> 0x3d != 0) goto LAB_007b1894;
      uVar11 = (0xffffffffffffffffU >> (LZCOUNT((uVar20 * 8) / 7 - 1) & 0x3fU)) + 1;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar11;
    if (SUB168(auVar2 * ZEXT816(0x50),8) == 0) {
      uVar20 = uVar11 + 8;
      uVar13 = uVar11 * 0x50;
      uVar5 = uVar13 + uVar20;
      if ((!CARRY8(uVar13,uVar20)) && (uVar5 < 0x7ffffffffffffff9)) {
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        lVar6 = FUN_004b25a4(uVar5,8);
        if (lVar6 == 0) {
          uVar7 = <hashbrown::raw::hashbrown::raw::Fallibility>::alloc_err(param_4,8,uVar5);
          return uVar7;
        }
        puVar18 = (undefined8 *)(lVar6 + uVar13);
        uVar13 = uVar11 - 1;
        uVar5 = uVar13;
        if (8 < uVar11) {
          uVar5 = (uVar11 >> 3) * 7;
        }
        memset(puVar18,0xff,uVar20);
        lVar6 = param_1[3];
        if (lVar6 == 0) {
          puVar10 = (undefined8 *)*param_1;
          lVar6 = param_1[1];
          *param_1 = (long)puVar18;
          param_1[1] = uVar13;
          param_1[2] = uVar5;
          param_1[3] = 0;
        }
        else {
          puVar8 = (undefined8 *)*param_1;
          lVar19 = 0;
          uVar20 = NEON_cmge(*puVar8,0,1);
          uVar20 = uVar20 & 0x8080808080808080;
          puVar10 = puVar8;
          do {
            for (; uVar20 == 0; uVar20 = uVar20 & 0x8080808080808080) {
              puVar8 = puVar8 + 1;
              lVar19 = lVar19 + 8;
              uVar20 = NEON_cmge(*puVar8,0,1);
            }
            uVar11 = (uVar20 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar20 >> 7 & 0xff00ff00ff00ff) << 8
            ;
            uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
            uVar11 = lVar19 + ((ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3);
                    /* try { // try from 007b17c8 to 007b17cf has its CatchHandler @ 007b1940 */
            uVar17 = FUN_007c4ecc(param_3,puVar10 + uVar11 * -10 + -10);
            uVar9 = uVar17 & uVar13;
            uVar21 = NEON_cmlt(*(undefined8 *)((long)puVar18 + uVar9),0,1);
            if (uVar21 == 0) {
              lVar12 = 8;
              do {
                uVar9 = uVar9 + lVar12;
                lVar12 = lVar12 + 8;
                uVar9 = uVar9 & uVar13;
                uVar21 = NEON_cmlt(*(undefined8 *)((long)puVar18 + uVar9),0,1);
              } while (uVar21 == 0);
            }
            uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
            uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
            uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
            uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
            uVar9 = uVar9 + ((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3) & uVar13;
            if (-1 < *(char *)((long)puVar18 + uVar9)) {
              uVar9 = NEON_cmlt(*puVar18,0,1);
              uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
              uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
              uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
              uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
              uVar9 = (ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3;
            }
            puVar10 = (undefined8 *)*param_1;
            puVar15 = puVar10 + ~uVar11 * 10;
            bVar3 = (byte)(uVar17 >> 0x38);
            *(byte *)((long)puVar18 + uVar9) = bVar3 >> 1;
            lVar6 = lVar6 + -1;
            puVar16 = puVar18 + ~uVar9 * 10;
            *(byte *)((long)puVar18 + (uVar9 - 8 & uVar13) + 8) = bVar3 >> 1;
            uVar20 = uVar20 - 1 & uVar20;
            uVar7 = *puVar15;
            puVar16[1] = puVar15[1];
            *puVar16 = uVar7;
            uVar7 = puVar15[2];
            uVar25 = puVar15[5];
            uVar24 = puVar15[4];
            uVar27 = puVar15[7];
            uVar26 = puVar15[6];
            uVar23 = puVar15[9];
            uVar22 = puVar15[8];
            puVar16[3] = puVar15[3];
            puVar16[2] = uVar7;
            puVar16[5] = uVar25;
            puVar16[4] = uVar24;
            puVar16[7] = uVar27;
            puVar16[6] = uVar26;
            puVar16[9] = uVar23;
            puVar16[8] = uVar22;
          } while (lVar6 != 0);
          lVar6 = param_1[1];
          *param_1 = (long)puVar18;
          param_1[1] = uVar13;
          param_1[2] = uVar5 - param_1[3];
          param_1[3] = param_1[3];
        }
        if (lVar6 == 0) {
          return 0xffffffffffffffff;
        }
        lVar19 = lVar6 * 0x50 + 0x50;
        if (lVar6 + lVar19 == -9) {
          return 0xffffffffffffffff;
        }
        free((void *)((long)puVar10 - lVar19));
        return 0xffffffffffffffff;
      }
    }
  }
LAB_007b1894:
  uVar7 = <hashbrown::raw::hashbrown::raw::Fallibility>::capacity_overflow(param_4);
  return uVar7;
}


// ===== 007b196c  <hashbrown[32fc5d502e7f9af5]::raw::RawTable<((http[b87e90c26fe47eb4]::uri::scheme::Scheme,http[b87e90c26fe47eb4]::uri::authority::Authority),())>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<(http[b87e90c26fe47eb4]::uri::scheme::Scheme,http[b87e90c26fe47eb4]::uri::authority::Authority), =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <hashbrown[32fc5d502e7f9af5]::raw::RawTable<((http[b87e90c26fe47eb4]::uri::scheme::Scheme,
   http[b87e90c26fe47eb4]::uri::authority::Authority),
   ())>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<(http[b87e90c26fe47eb4]::uri::scheme::Scheme,
   http[b87e90c26fe47eb4]::uri::authority::Authority), (),
   std[17aff9129faa4dc5]::hash::random::RandomState>::{closure#0}> */

undefined8
<hashbrown[32fc5d502e7f9af5]::raw::RawTable<((http[b87e90c26fe47eb4]::uri::scheme::
Scheme,http[b87e90c26fe47eb4]::uri::authority::Authority),())>>::reserve_rehash::
<hashbrown[32fc5d502e7f9af5]::map::make_hasher<(http[b87e90c26fe47eb4]::uri::scheme::
Scheme,http[b87e90c26fe47eb4]::uri::authority::Authority__(void)

{
  char cVar1;
  undefined1 auVar2 [16];
  byte bVar3;
  bool bVar4;
  long *in_x0;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong in_x1;
  ulong *__src;
  undefined4 in_w3;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  uVar10 = in_x0[3];
  uVar19 = uVar10 + in_x1;
  if (!CARRY8(uVar10,in_x1)) {
    uVar15 = in_x0[1];
    uVar5 = uVar15 + 1;
    uVar11 = uVar5 >> 3;
    uVar18 = uVar15;
    if (7 < uVar15) {
      uVar18 = uVar11 * 7;
    }
    if (uVar19 <= uVar18 >> 1) {
      if (uVar5 != 0) {
        __src = (ulong *)*in_x0;
        puVar12 = __src;
        if ((uVar5 & 7) != 0) {
          uVar11 = uVar11 + 1;
        }
        do {
          uVar11 = uVar11 - 1;
          uVar19 = NEON_cmlt(*puVar12,0,1);
          *puVar12 = uVar19 | 0x8080808080808080;
          puVar12 = puVar12 + 1;
        } while (uVar11 != 0);
        if (uVar5 < 8) {
          memmove(__src + 1,__src,uVar15 + 1);
        }
        else {
          *(ulong *)((long)__src + uVar5) = *__src;
        }
        uVar19 = 0;
        do {
          if (*(char *)(*in_x0 + uVar19) == -0x80) {
            puVar16 = (undefined8 *)(*in_x0 + ~uVar19 * 0x30);
            while( true ) {
                    /* try { // try from 007b1a58 to 007b1a5f has its CatchHandler @ 007b1ef8 */
              uVar5 = FUN_007c4ecc();
              puVar8 = (undefined8 *)*in_x0;
              uVar10 = in_x0[1];
              uVar11 = uVar10 & uVar5;
              uVar18 = NEON_cmlt(*(undefined8 *)((long)puVar8 + uVar11),0,1);
              if (uVar18 == 0) {
                lVar6 = 8;
                uVar20 = uVar10 & uVar5;
                do {
                  uVar20 = uVar20 + lVar6;
                  lVar6 = lVar6 + 8;
                  uVar20 = uVar20 & uVar10;
                  uVar18 = NEON_cmlt(*(undefined8 *)((long)puVar8 + uVar20),0,1);
                } while (uVar18 == 0);
              }
              else {
                uVar20 = uVar10 & uVar5;
              }
              uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
              uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
              uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
              uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
              uVar18 = uVar20 + ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3) & uVar10;
              bVar3 = (byte)(uVar5 >> 0x38);
              if (*(char *)((long)puVar8 + uVar18) < '\0') {
                uVar5 = uVar18 - uVar11 ^ uVar19 - uVar11;
              }
              else {
                uVar5 = NEON_cmlt(*puVar8,0,1);
                uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
                uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
                uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
                uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
                uVar18 = (ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3;
                uVar5 = uVar18 - uVar11 ^ uVar19 - uVar11;
              }
              if ((uVar5 & uVar10) < 8) {
                *(byte *)((long)puVar8 + uVar19) = bVar3 >> 1;
                *(byte *)(*in_x0 + (uVar10 & uVar19 - 8) + 8) = bVar3 >> 1;
                goto LAB_007b1bb8;
              }
              cVar1 = *(char *)((long)puVar8 + uVar18);
              puVar13 = puVar8 + ~uVar18 * 6;
              *(byte *)((long)puVar8 + uVar18) = bVar3 >> 1;
              *(byte *)(*in_x0 + (uVar18 - 8 & uVar10) + 8) = bVar3 >> 1;
              if (cVar1 == -1) break;
              uVar7 = *puVar16;
              *puVar16 = *puVar13;
              *puVar13 = uVar7;
              uVar7 = puVar16[1];
              puVar16[1] = puVar13[1];
              puVar13[1] = uVar7;
              uVar7 = puVar16[2];
              puVar16[2] = puVar13[2];
              puVar13[2] = uVar7;
              uVar7 = puVar16[3];
              puVar16[3] = puVar13[3];
              puVar13[3] = uVar7;
              uVar7 = puVar16[4];
              puVar16[4] = puVar13[4];
              puVar13[4] = uVar7;
              uVar7 = puVar16[5];
              puVar16[5] = puVar13[5];
              puVar13[5] = uVar7;
            }
            uVar10 = in_x0[1];
            *(undefined1 *)(*in_x0 + uVar19) = 0xff;
            *(undefined1 *)(*in_x0 + (uVar10 & uVar19 - 8) + 8) = 0xff;
            uVar23 = puVar16[3];
            uVar22 = puVar16[2];
            uVar21 = puVar16[5];
            uVar7 = puVar16[4];
            uVar24 = *puVar16;
            puVar13[1] = puVar16[1];
            *puVar13 = uVar24;
            puVar13[3] = uVar23;
            puVar13[2] = uVar22;
            puVar13[5] = uVar21;
            puVar13[4] = uVar7;
          }
LAB_007b1bb8:
          bVar4 = uVar19 != uVar15;
          uVar19 = uVar19 + 1;
        } while (bVar4);
        uVar5 = in_x0[1];
        uVar10 = in_x0[3];
        if (7 < uVar5) {
          uVar5 = (uVar5 + 1 >> 3) * 7;
        }
      }
      in_x0[2] = uVar5 - uVar10;
      return 0xffffffffffffffff;
    }
    if (uVar19 < uVar18 + 1) {
      uVar19 = uVar18 + 1;
    }
    if (uVar19 < 0xf) {
      uVar10 = 4;
      if (3 < uVar19) {
        uVar10 = (uVar19 & 8) + 8;
      }
    }
    else {
      if (uVar19 >> 0x3d != 0) goto LAB_007b1e38;
      uVar10 = (0xffffffffffffffffU >> (LZCOUNT((uVar19 * 8) / 7 - 1) & 0x3fU)) + 1;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar10;
    if (SUB168(auVar2 * ZEXT816(0x30),8) == 0) {
      uVar19 = uVar10 + 8;
      uVar11 = uVar10 * 0x30;
      uVar5 = uVar11 + uVar19;
      if ((!CARRY8(uVar11,uVar19)) && (uVar5 < 0x7ffffffffffffff9)) {
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        lVar6 = FUN_004b25a4(uVar5,8);
        if (lVar6 == 0) {
          uVar7 = <hashbrown::raw::hashbrown::raw::Fallibility>::alloc_err(in_w3,8,uVar5);
          return uVar7;
        }
        puVar16 = (undefined8 *)(lVar6 + uVar11);
        uVar11 = uVar10 - 1;
        uVar5 = uVar11;
        if (8 < uVar10) {
          uVar5 = (uVar10 >> 3) * 7;
        }
        memset(puVar16,0xff,uVar19);
        lVar6 = in_x0[3];
        if (lVar6 == 0) {
          lVar9 = *in_x0;
          lVar6 = in_x0[1];
          *in_x0 = (long)puVar16;
          in_x0[1] = uVar11;
          in_x0[2] = uVar5;
          in_x0[3] = 0;
        }
        else {
          puVar8 = (undefined8 *)*in_x0;
          lVar17 = 0;
          uVar19 = NEON_cmge(*puVar8,0,1);
          uVar19 = uVar19 & 0x8080808080808080;
          do {
            for (; uVar19 == 0; uVar19 = uVar19 & 0x8080808080808080) {
              puVar8 = puVar8 + 1;
              lVar17 = lVar17 + 8;
              uVar19 = NEON_cmge(*puVar8,0,1);
            }
            uVar10 = (uVar19 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar19 >> 7 & 0xff00ff00ff00ff) << 8
            ;
            uVar18 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
                    /* try { // try from 007b1d74 to 007b1d7b has its CatchHandler @ 007b1ee4 */
            uVar15 = FUN_007c4ecc();
            uVar10 = uVar15 & uVar11;
            uVar20 = NEON_cmlt(*(undefined8 *)((long)puVar16 + uVar10),0,1);
            if (uVar20 == 0) {
              lVar9 = 8;
              do {
                uVar10 = uVar10 + lVar9;
                lVar9 = lVar9 + 8;
                uVar10 = uVar10 & uVar11;
                uVar20 = NEON_cmlt(*(undefined8 *)((long)puVar16 + uVar10),0,1);
              } while (uVar20 == 0);
            }
            uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
            uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
            uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
            uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
            uVar10 = uVar10 + ((ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3) & uVar11;
            if (-1 < *(char *)((long)puVar16 + uVar10)) {
              uVar10 = NEON_cmlt(*puVar16,0,1);
              uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
              uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
              uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
              uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
              uVar10 = (ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3;
            }
            lVar9 = *in_x0;
            puVar13 = (undefined8 *)
                      (lVar9 + ~(lVar17 + ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3)) *
                               0x30);
            bVar3 = (byte)(uVar15 >> 0x38);
            *(byte *)((long)puVar16 + uVar10) = bVar3 >> 1;
            lVar6 = lVar6 + -1;
            puVar14 = puVar16 + ~uVar10 * 6;
            *(byte *)((long)puVar16 + (uVar10 - 8 & uVar11) + 8) = bVar3 >> 1;
            uVar19 = uVar19 - 1 & uVar19;
            uVar21 = puVar13[1];
            uVar7 = *puVar13;
            uVar23 = puVar13[3];
            uVar22 = puVar13[2];
            uVar24 = puVar13[4];
            puVar14[5] = puVar13[5];
            puVar14[4] = uVar24;
            puVar14[1] = uVar21;
            *puVar14 = uVar7;
            puVar14[3] = uVar23;
            puVar14[2] = uVar22;
          } while (lVar6 != 0);
          lVar6 = in_x0[1];
          *in_x0 = (long)puVar16;
          in_x0[1] = uVar11;
          in_x0[2] = uVar5 - in_x0[3];
          in_x0[3] = in_x0[3];
        }
        if (lVar6 == 0) {
          return 0xffffffffffffffff;
        }
        lVar17 = lVar6 * 0x30 + 0x30;
        if (lVar6 + lVar17 == -9) {
          return 0xffffffffffffffff;
        }
        free((void *)(lVar9 - lVar17));
        return 0xffffffffffffffff;
      }
    }
  }
LAB_007b1e38:
  uVar7 = <hashbrown::raw::hashbrown::raw::Fallibility>::capacity_overflow(in_w3);
  return uVar7;
}


// ===== 007b1f10  FUN_007b1f10 =====

void FUN_007b1f10(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if ((lVar1 != 0) &&
     (uVar2 = (*(long *)(param_1 + 0x10) + *(long *)(param_1 + 8) + *(long *)(param_1 + 8) * lVar1)
              - 1U & -*(long *)(param_1 + 0x10), lVar1 + uVar2 != -9)) {
    free((void *)(*(long *)(param_1 + 0x18) - uVar2));
    return;
  }
  return;
}


// ===== 007b1f4c  FUN_007b1f4c =====

void FUN_007b1f4c(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  plVar3 = (long *)*param_1;
  lVar1 = plVar3[1];
  if (lVar1 != -1) {
    pcVar4 = (code *)param_1[1];
    if (pcVar4 == (code *)0x0) {
      lVar5 = 0;
      do {
        if (*(char *)(*plVar3 + lVar5) == -0x80) {
          uVar2 = plVar3[1];
          *(undefined1 *)(*plVar3 + lVar5) = 0xff;
          *(undefined1 *)(*plVar3 + (uVar2 & lVar5 - 8U) + 8) = 0xff;
          plVar3[3] = plVar3[3] + -1;
        }
        lVar5 = lVar5 + 1;
      } while (lVar1 + 1 != lVar5);
    }
    else {
      lVar6 = param_1[2];
      lVar5 = 0;
      lVar7 = -lVar6;
      do {
        if (*(char *)(*plVar3 + lVar5) == -0x80) {
          uVar2 = plVar3[1];
          *(undefined1 *)(*plVar3 + lVar5) = 0xff;
          *(undefined1 *)(*plVar3 + (uVar2 & lVar5 - 8U) + 8) = 0xff;
          (*pcVar4)(*plVar3 + lVar7);
          plVar3[3] = plVar3[3] + -1;
        }
        lVar5 = lVar5 + 1;
        lVar7 = lVar7 - lVar6;
      } while (lVar1 + 1 != lVar5);
    }
  }
  uVar2 = plVar3[1];
  if (7 < uVar2) {
    uVar2 = (uVar2 + 1 >> 3) * 7;
  }
  plVar3[2] = uVar2 - plVar3[3];
  return;
}


// ===== 007b2084  FUN_007b2084 =====

void FUN_007b2084(long *param_1)

{
  void *__ptr;
  void *pvVar1;
  long lVar2;
  
  __ptr = (void *)param_1[1];
  lVar2 = param_1[2] + 1;
  pvVar1 = __ptr;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 007b20b4 to 007b20b7 has its CatchHandler @ 007b2100 */
    FUN_0078618c(pvVar1);
    pvVar1 = (void *)((long)pvVar1 + 0x48);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 007b2148  FUN_007b2148 =====

void FUN_007b2148(void *param_1,undefined8 *param_2)

{
  if ((code *)*param_2 != (code *)0x0) {
                    /* try { // try from 007b2168 to 007b216f has its CatchHandler @ 007b21a0 */
    (*(code *)*param_2)(param_1);
  }
  if (param_2[1] != 0) {
    free(param_1);
    return;
  }
  return;
}


// ===== 007b21c0  FUN_007b21c0 =====

void FUN_007b21c0(ulong *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  void *__ptr;
  long lVar4;
  ulong uVar5;
  
  uVar2 = param_1[3];
  uVar5 = *param_1;
  if (uVar2 == 0) {
    lVar4 = 0;
    lVar1 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    if (uVar5 <= param_1[2]) {
      uVar3 = uVar5;
    }
    lVar1 = param_1[2] - uVar3;
    lVar4 = uVar2 - (uVar5 - lVar1);
    uVar3 = uVar5;
    if (uVar2 < uVar5 - lVar1 || lVar4 == 0) {
      lVar4 = 0;
      uVar3 = lVar1 + uVar2;
    }
  }
  __ptr = (void *)param_1[1];
                    /* try { // try from 007b2220 to 007b2223 has its CatchHandler @ 007b2268 */
  FUN_0078e0b0((void *)((long)__ptr + lVar1 * 8),uVar3 - lVar1);
                    /* try { // try from 007b2224 to 007b222f has its CatchHandler @ 007b2260 */
  FUN_0078e0b0(__ptr,lVar4);
  if (uVar5 == 0) {
    return;
  }
  free(__ptr);
  return;
}


// ===== 007b2298  FUN_007b2298 =====

void FUN_007b2298(long *param_1)

{
  if (*param_1 == 0) {
    if ((char)param_1[9] != '\x02') {
                    /* try { // try from 007b22ec to 007b22f3 has its CatchHandler @ 007b2310 */
      (**(code **)(param_1[5] + 0x20))(param_1 + 8,param_1[6],param_1[7]);
    }
  }
  else if ((char)param_1[9] != '\x02') {
                    /* try { // try from 007b22c8 to 007b22cf has its CatchHandler @ 007b232c */
    (**(code **)(param_1[5] + 0x20))(param_1 + 8,param_1[6],param_1[7]);
  }
                    /* WARNING: Could not recover jumptable at 0x007b230c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x20))(param_1 + 4,param_1[2],param_1[3]);
  return;
}


// ===== 007b2350  FUN_007b2350 =====

void FUN_007b2350(byte *param_1)

{
  long *__ptr;
  
  if (1 < *param_1) {
    __ptr = *(long **)(param_1 + 8);
                    /* try { // try from 007b2380 to 007b2387 has its CatchHandler @ 007b23b8 */
    (**(code **)(*__ptr + 0x20))(__ptr + 3,__ptr[1],__ptr[2]);
    free(__ptr);
  }
                    /* WARNING: Could not recover jumptable at 0x007b23b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x20))
            (param_1 + 0x28,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  return;
}


// ===== 007b23ec  FUN_007b23ec =====

void FUN_007b23ec(byte *param_1)

{
  long lVar1;
  long *__ptr;
  long lVar2;
  
  if (1 < *param_1) {
    __ptr = *(long **)(param_1 + 8);
                    /* try { // try from 007b2420 to 007b2427 has its CatchHandler @ 007b24ac */
    (**(code **)(*__ptr + 0x20))(__ptr + 3,__ptr[1],__ptr[2]);
    free(__ptr);
  }
                    /* try { // try from 007b2444 to 007b244b has its CatchHandler @ 007b24dc */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x20))
            (param_1 + 0x28,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  lVar2 = *(long *)(param_1 + 0x40) + 1;
  lVar1 = *(long *)(param_1 + 0x38);
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 007b2460 to 007b2463 has its CatchHandler @ 007b24f0 */
    FUN_0078618c(lVar1);
    lVar1 = lVar1 + 0x48;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    free(*(void **)(param_1 + 0x38));
    return;
  }
  return;
}


// ===== 007b2538  FUN_007b2538 =====

void FUN_007b2538(byte *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long *__ptr;
  long lVar5;
  long lVar6;
  
  if (1 < *param_1) {
    __ptr = *(long **)(param_1 + 8);
                    /* try { // try from 007b2568 to 007b256f has its CatchHandler @ 007b2624 */
    (**(code **)(*__ptr + 0x20))(__ptr + 3,__ptr[1],__ptr[2]);
    free(__ptr);
  }
                    /* try { // try from 007b258c to 007b2593 has its CatchHandler @ 007b2694 */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x20))
            (param_1 + 0x28,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  uVar4 = *(ulong *)(param_1 + 0x48);
  if (uVar4 == 0) {
    lVar5 = 0;
    uVar2 = 0;
    lVar3 = 0;
  }
  else {
    uVar2 = *(ulong *)(param_1 + 0x30);
    uVar1 = 0;
    if (uVar2 <= *(ulong *)(param_1 + 0x40)) {
      uVar1 = uVar2;
    }
    lVar3 = *(ulong *)(param_1 + 0x40) - uVar1;
    lVar5 = uVar4 - (uVar2 - lVar3);
    if (uVar4 < uVar2 - lVar3 || lVar5 == 0) {
      lVar5 = 0;
      uVar2 = lVar3 + uVar4;
    }
  }
  lVar6 = *(long *)(param_1 + 0x38);
                    /* try { // try from 007b25e0 to 007b25e3 has its CatchHandler @ 007b2660 */
  FUN_0078e0b0(lVar6 + lVar3 * 8,uVar2 - lVar3);
                    /* try { // try from 007b25e4 to 007b25ef has its CatchHandler @ 007b2658 */
  FUN_0078e0b0(lVar6,lVar5);
  if (*(long *)(param_1 + 0x30) != 0) {
    free(*(void **)(param_1 + 0x38));
    return;
  }
  return;
}


// ===== 007b26ac  FUN_007b26ac =====

void FUN_007b26ac(undefined8 *param_1,long *param_2,byte *param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long *__ptr;
  long lVar7;
  ulong uVar8;
  byte bVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
                    /* try { // try from 007b26d8 to 007b26df has its CatchHandler @ 007b2880 */
  uVar5 = FUN_007c4ecc(param_2 + 4);
  lVar2 = *param_2;
  uVar3 = param_2[1];
  lVar7 = 0;
  bVar9 = (byte)(uVar5 >> 0x39);
  uVar11 = CONCAT17(bVar9,CONCAT16(bVar9,CONCAT15(bVar9,CONCAT14(bVar9,CONCAT13(bVar9,CONCAT12(bVar9
                                                  ,CONCAT11(bVar9,bVar9)))))));
  uVar8 = uVar5 & uVar3;
  uVar15 = *(undefined8 *)(lVar2 + uVar8);
  uVar10 = NEON_cmeq(uVar15,uVar11,1);
  uVar10 = uVar10 & 0x8080808080808080;
  while( true ) {
    for (; uVar10 == 0; uVar10 = uVar10 & 0x8080808080808080) {
      uVar15 = NEON_cmeq(uVar15,0xffffffffffffffff,1);
      bVar9 = NEON_umaxv(uVar15,1);
      if ((bVar9 & 1) != 0) {
        if (param_2[2] == 0) {
                    /* try { // try from 007b2838 to 007b284b has its CatchHandler @ 007b2880 */
          <hashbrown[32fc5d502e7f9af5]::raw::RawTable<((http[b87e90c26fe47eb4]::uri::scheme::
          Scheme,http[b87e90c26fe47eb4]::uri::authority::Authority),alloc[c1f8e832b0d782c7]::vec::
          Vec<hyper_util[52a210df7efc1bae]::client::legacy::pool::Idle<hyper_util[52a210df7efc1bae]
          ::client::legacy::client::PoolClient<reqwest[6fed810f3e38d558]::async_impl::body::
          Body>>>)>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<
                    (param_2,1,param_2 + 4,1);
        }
        uVar11 = *(undefined8 *)(param_3 + 8);
        uVar15 = *(undefined8 *)param_3;
        uVar13 = *(undefined8 *)(param_3 + 0x18);
        uVar12 = *(undefined8 *)(param_3 + 0x10);
        uVar14 = *(undefined8 *)(param_3 + 0x20);
        param_1[5] = *(undefined8 *)(param_3 + 0x28);
        param_1[4] = uVar14;
        param_1[1] = uVar11;
        *param_1 = uVar15;
        param_1[3] = uVar13;
        param_1[2] = uVar12;
        param_1[6] = param_2;
        param_1[7] = uVar5;
        return;
      }
      lVar7 = lVar7 + 8;
      uVar8 = uVar8 + lVar7 & uVar3;
      uVar15 = *(undefined8 *)(lVar2 + uVar8);
      uVar10 = NEON_cmeq(uVar15,uVar11,1);
    }
    uVar6 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
    uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
    lVar1 = lVar2 + (uVar8 + ((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3) & uVar3) * -0x48;
                    /* try { // try from 007b2728 to 007b2743 has its CatchHandler @ 007b2884 */
    iVar4 = <http::uri::scheme::Scheme_as_core::cmp::PartialEq>::eq(lVar1 + -0x48,param_3);
    if ((iVar4 != 0) &&
       (uVar6 = <http::uri::authority::Authority_as_core::cmp::PartialEq>::eq
                          (lVar1 + -0x38,param_3 + 0x10), (uVar6 & 1) != 0)) break;
    uVar10 = uVar10 - 1 & uVar10;
  }
  bVar9 = *param_3;
  param_1[1] = lVar1;
  param_1[2] = param_2;
  *(undefined1 *)param_1 = 0xff;
  if (1 < bVar9) {
    __ptr = *(long **)(param_3 + 8);
                    /* try { // try from 007b27b4 to 007b27bb has its CatchHandler @ 007b2850 */
    (**(code **)(*__ptr + 0x20))(__ptr + 3,__ptr[1],__ptr[2]);
    free(__ptr);
  }
                    /* WARNING: Could not recover jumptable at 0x007b27f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + 0x10) + 0x20))
            (param_3 + 0x28,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x20));
  return;
}


// ===== 007b289c  FUN_007b289c =====

void FUN_007b289c(undefined8 *param_1,long *param_2,byte *param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long *__ptr;
  long lVar7;
  ulong uVar8;
  byte bVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
                    /* try { // try from 007b28c8 to 007b28cf has its CatchHandler @ 007b2a70 */
  uVar5 = FUN_007c4ecc(param_2 + 4);
  lVar2 = *param_2;
  uVar3 = param_2[1];
  lVar7 = 0;
  bVar9 = (byte)(uVar5 >> 0x39);
  uVar11 = CONCAT17(bVar9,CONCAT16(bVar9,CONCAT15(bVar9,CONCAT14(bVar9,CONCAT13(bVar9,CONCAT12(bVar9
                                                  ,CONCAT11(bVar9,bVar9)))))));
  uVar8 = uVar5 & uVar3;
  uVar15 = *(undefined8 *)(lVar2 + uVar8);
  uVar10 = NEON_cmeq(uVar15,uVar11,1);
  uVar10 = uVar10 & 0x8080808080808080;
  while( true ) {
    for (; uVar10 == 0; uVar10 = uVar10 & 0x8080808080808080) {
      uVar15 = NEON_cmeq(uVar15,0xffffffffffffffff,1);
      bVar9 = NEON_umaxv(uVar15,1);
      if ((bVar9 & 1) != 0) {
        if (param_2[2] == 0) {
                    /* try { // try from 007b2a28 to 007b2a3b has its CatchHandler @ 007b2a70 */
          <hashbrown[32fc5d502e7f9af5]::raw::RawTable<((http[b87e90c26fe47eb4]::uri::scheme::
          Scheme,http[b87e90c26fe47eb4]::uri::authority::Authority),alloc[c1f8e832b0d782c7]::
          collections::vec_deque::VecDeque<futures_channel[8e2a30f4763cc095]::oneshot::
          Sender<hyper_util[52a210df7efc1bae]::client::legacy::client::
          PoolClient<reqwest[6fed810f3e38d558]::async_impl::body::Body>>>)>>::reserve_rehash::
          <hashbrown[32fc5d502e7f9af5]::map::make_hasher<(param_2,1,param_2 + 4,1);
        }
        uVar11 = *(undefined8 *)(param_3 + 8);
        uVar15 = *(undefined8 *)param_3;
        uVar13 = *(undefined8 *)(param_3 + 0x18);
        uVar12 = *(undefined8 *)(param_3 + 0x10);
        uVar14 = *(undefined8 *)(param_3 + 0x20);
        param_1[5] = *(undefined8 *)(param_3 + 0x28);
        param_1[4] = uVar14;
        param_1[1] = uVar11;
        *param_1 = uVar15;
        param_1[3] = uVar13;
        param_1[2] = uVar12;
        param_1[6] = param_2;
        param_1[7] = uVar5;
        return;
      }
      lVar7 = lVar7 + 8;
      uVar8 = uVar8 + lVar7 & uVar3;
      uVar15 = *(undefined8 *)(lVar2 + uVar8);
      uVar10 = NEON_cmeq(uVar15,uVar11,1);
    }
    uVar6 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
    uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
    lVar1 = lVar2 + (uVar8 + ((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3) & uVar3) * -0x50;
                    /* try { // try from 007b2918 to 007b2933 has its CatchHandler @ 007b2a74 */
    iVar4 = <http::uri::scheme::Scheme_as_core::cmp::PartialEq>::eq(lVar1 + -0x50,param_3);
    if ((iVar4 != 0) &&
       (uVar6 = <http::uri::authority::Authority_as_core::cmp::PartialEq>::eq
                          (lVar1 + -0x40,param_3 + 0x10), (uVar6 & 1) != 0)) break;
    uVar10 = uVar10 - 1 & uVar10;
  }
  bVar9 = *param_3;
  param_1[1] = lVar1;
  param_1[2] = param_2;
  *(undefined1 *)param_1 = 0xff;
  if (1 < bVar9) {
    __ptr = *(long **)(param_3 + 8);
                    /* try { // try from 007b29a4 to 007b29ab has its CatchHandler @ 007b2a40 */
    (**(code **)(*__ptr + 0x20))(__ptr + 3,__ptr[1],__ptr[2]);
    free(__ptr);
  }
                    /* WARNING: Could not recover jumptable at 0x007b29e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + 0x10) + 0x20))
            (param_3 + 0x28,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x20));
  return;
}


// ===== 007b2a8c  FUN_007b2a8c =====

void FUN_007b2a8c(undefined8 *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  void *__s1;
  ulong uVar2;
  size_t __n;
  byte bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  byte bVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  ulong local_c8;
  
                    /* try { // try from 007b2ac0 to 007b2ccf has its CatchHandler @ 007b2cf4 */
  uVar6 = FUN_007c4da0(param_2 + 4);
  if (param_2[2] == 0) {
    <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(alloc[c1f8e832b0d782c7]::string::String,alloc[c1f8e832b0d782c7]::vec::Vec<core[bcece726f298455b]::net::socket_addr::SocketAddr>)>>
    ::reserve_rehash::
    <hashbrown[32fc5d502e7f9af5]::map::make_hasher<alloc[c1f8e832b0d782c7]::string::String,alloc[c1f8e832b0d782c7]::vec::Vec<core[bcece726f298455b]::net::socket_addr::SocketAddr>,std[17aff9129faa4dc5]::hash::random::RandomState>::_closure_0_>
              (param_2,1,param_2 + 4,1);
  }
  bVar4 = false;
  puVar1 = (undefined8 *)*param_2;
  uVar2 = param_2[1];
  lVar8 = 0;
  bVar3 = (byte)(uVar6 >> 0x38);
  bVar10 = bVar3 >> 1;
  uVar9 = CONCAT17(bVar10,CONCAT16(bVar10,CONCAT15(bVar10,CONCAT14(bVar10,CONCAT13(bVar10,CONCAT12(
                                                  bVar10,CONCAT11(bVar10,bVar10)))))));
  __s1 = (void *)param_3[1];
  __n = param_3[2];
  uVar6 = uVar6 & uVar2;
  uVar19 = *(undefined8 *)((long)puVar1 + uVar6);
  uVar11 = NEON_cmeq(uVar19,uVar9,1);
  uVar11 = uVar11 & 0x8080808080808080;
  do {
    for (; uVar11 != 0; uVar11 = uVar11 - 1 & uVar11) {
      uVar7 = (uVar11 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar11 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar6 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) & uVar2;
      if ((__n == puVar1[uVar7 * -6 + -4]) &&
         (iVar5 = memcmp(__s1,(void *)puVar1[uVar7 * -6 + -5],__n), iVar5 == 0)) {
        uVar12 = *param_4;
        uVar19 = param_4[2];
        uVar15 = puVar1[uVar7 * -6 + -2];
        uVar13 = puVar1[uVar7 * -6 + -3];
        uVar9 = puVar1[uVar7 * -6 + -1];
        puVar1[uVar7 * -6 + -2] = param_4[1];
        puVar1[uVar7 * -6 + -3] = uVar12;
        puVar1[uVar7 * -6 + -1] = uVar19;
        lVar8 = *param_3;
        param_1[1] = uVar15;
        *param_1 = uVar13;
        param_1[2] = uVar9;
        if (lVar8 == 0) {
          return;
        }
        free((void *)param_3[1]);
        return;
      }
    }
    if (bVar4) {
LAB_007b2b90:
      uVar19 = NEON_cmeq(uVar19,0xffffffffffffffff,1);
      bVar10 = NEON_umaxv(uVar19,1);
      if ((bVar10 & 1) != 0) {
        uVar6 = (ulong)*(char *)((long)puVar1 + local_c8);
        if (-1 < *(char *)((long)puVar1 + local_c8)) {
          uVar6 = NEON_cmlt(*puVar1,0,1);
          uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
          uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
          uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
          uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
          local_c8 = (ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3;
          uVar6 = (ulong)*(byte *)((long)puVar1 + local_c8);
        }
        uVar12 = param_4[1];
        uVar9 = *param_4;
        lVar8 = param_3[2];
        uVar19 = param_4[2];
        lVar16 = param_3[1];
        lVar14 = *param_3;
        bVar3 = bVar3 >> 1;
        *(byte *)((long)puVar1 + local_c8) = bVar3;
        lVar18 = param_2[3];
        lVar17 = param_2[2];
        *(byte *)((long)puVar1 + (local_c8 - 8 & uVar2) + 8) = bVar3;
        puVar1[local_c8 * -6 + -5] = lVar16;
        puVar1[local_c8 * -6 + -6] = lVar14;
        puVar1[local_c8 * -6 + -3] = uVar9;
        puVar1[local_c8 * -6 + -4] = lVar8;
        puVar1[local_c8 * -6 + -1] = uVar19;
        puVar1[local_c8 * -6 + -2] = uVar12;
        param_2[3] = lVar18 + 1;
        param_2[2] = lVar17 - (uVar6 & 1);
        *param_1 = 0xffffffffffffffff;
        return;
      }
      bVar4 = true;
    }
    else {
      uVar11 = NEON_cmlt(uVar19,0,1);
      if (uVar11 != 0) {
        uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        local_c8 = uVar6 + ((ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3) & uVar2;
        goto LAB_007b2b90;
      }
      bVar4 = false;
    }
    lVar8 = lVar8 + 8;
    uVar6 = lVar8 + uVar6 & uVar2;
    uVar19 = *(undefined8 *)((long)puVar1 + uVar6);
    uVar11 = NEON_cmeq(uVar19,uVar9,1);
    uVar11 = uVar11 & 0x8080808080808080;
  } while( true );
}


// ===== 007b2d40  FUN_007b2d40 =====

void FUN_007b2d40(undefined8 *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  void *__s1;
  ulong uVar2;
  size_t __n;
  byte bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  byte bVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  ulong local_108;
  
                    /* try { // try from 007b2d74 to 007b2fd7 has its CatchHandler @ 007b2ffc */
  uVar6 = FUN_007c4da0(param_2 + 4);
  if (param_2[2] == 0) {
    <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(alloc[c1f8e832b0d782c7]::string::String,reqwest[6fed810f3e38d558]::proxy::ProxyScheme)>>
    ::reserve_rehash::
    <hashbrown[32fc5d502e7f9af5]::map::make_hasher<alloc[c1f8e832b0d782c7]::string::String,reqwest[6fed810f3e38d558]::proxy::ProxyScheme,std[17aff9129faa4dc5]::hash::random::RandomState>::_closure_0_>
              (param_2,1,param_2 + 4,1);
  }
  bVar4 = false;
  puVar1 = (undefined8 *)*param_2;
  uVar2 = param_2[1];
  lVar8 = 0;
  bVar3 = (byte)(uVar6 >> 0x38);
  bVar9 = bVar3 >> 1;
  uVar12 = CONCAT17(bVar9,CONCAT16(bVar9,CONCAT15(bVar9,CONCAT14(bVar9,CONCAT13(bVar9,CONCAT12(bVar9
                                                  ,CONCAT11(bVar9,bVar9)))))));
  __s1 = (void *)param_3[1];
  __n = param_3[2];
  uVar6 = uVar6 & uVar2;
  uVar26 = *(undefined8 *)((long)puVar1 + uVar6);
  uVar10 = NEON_cmeq(uVar26,uVar12,1);
  uVar10 = uVar10 & 0x8080808080808080;
  do {
    for (; uVar10 != 0; uVar10 = uVar10 - 1 & uVar10) {
      uVar7 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar6 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) & uVar2;
      if ((__n == puVar1[uVar7 * -0xd + -0xb]) &&
         (iVar5 = memcmp(__s1,(void *)puVar1[uVar7 * -0xd + -0xc],__n), iVar5 == 0)) {
        uVar26 = *param_4;
        uVar12 = puVar1[uVar7 * -0xd + -6];
        uVar16 = puVar1[uVar7 * -0xd + -3];
        uVar14 = puVar1[uVar7 * -0xd + -4];
        uVar21 = puVar1[uVar7 * -0xd + -9];
        uVar20 = puVar1[uVar7 * -0xd + -10];
        uVar23 = puVar1[uVar7 * -0xd + -1];
        uVar22 = puVar1[uVar7 * -0xd + -2];
        puVar1[uVar7 * -0xd + -9] = param_4[1];
        puVar1[uVar7 * -0xd + -10] = uVar26;
        param_1[5] = puVar1[uVar7 * -0xd + -5];
        param_1[4] = uVar12;
        param_1[7] = uVar16;
        param_1[6] = uVar14;
        uVar16 = param_4[7];
        uVar14 = param_4[6];
        uVar12 = param_4[9];
        uVar26 = param_4[8];
        uVar25 = param_4[3];
        uVar24 = param_4[2];
        uVar19 = param_4[5];
        uVar18 = param_4[4];
        param_1[9] = uVar23;
        param_1[8] = uVar22;
        puVar1[uVar7 * -0xd + -3] = uVar16;
        puVar1[uVar7 * -0xd + -4] = uVar14;
        puVar1[uVar7 * -0xd + -1] = uVar12;
        puVar1[uVar7 * -0xd + -2] = uVar26;
        uVar12 = puVar1[uVar7 * -0xd + -7];
        uVar26 = puVar1[uVar7 * -0xd + -8];
        puVar1[uVar7 * -0xd + -7] = uVar25;
        puVar1[uVar7 * -0xd + -8] = uVar24;
        puVar1[uVar7 * -0xd + -5] = uVar19;
        puVar1[uVar7 * -0xd + -6] = uVar18;
        lVar8 = *param_3;
        param_1[1] = uVar21;
        *param_1 = uVar20;
        param_1[3] = uVar12;
        param_1[2] = uVar26;
        if (lVar8 == 0) {
          return;
        }
        free((void *)param_3[1]);
        return;
      }
    }
    if (bVar4) {
LAB_007b2e4c:
      uVar26 = NEON_cmeq(uVar26,0xffffffffffffffff,1);
      bVar9 = NEON_umaxv(uVar26,1);
      if ((bVar9 & 1) != 0) {
        uVar6 = (ulong)*(char *)((long)puVar1 + local_108);
        if (-1 < *(char *)((long)puVar1 + local_108)) {
          uVar6 = NEON_cmlt(*puVar1,0,1);
          uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
          uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
          uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
          uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
          local_108 = (ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3;
          uVar6 = (ulong)*(byte *)((long)puVar1 + local_108);
        }
        lVar13 = param_3[1];
        lVar11 = *param_3;
        uVar14 = param_4[3];
        uVar26 = param_4[2];
        uVar20 = param_4[5];
        uVar18 = param_4[4];
        uVar23 = param_4[1];
        uVar22 = *param_4;
        uVar16 = param_4[7];
        uVar12 = param_4[6];
        uVar21 = param_4[9];
        uVar19 = param_4[8];
        lVar8 = param_3[2];
        lVar17 = param_2[3];
        lVar15 = param_2[2];
        bVar3 = bVar3 >> 1;
        *(byte *)((long)puVar1 + local_108) = bVar3;
        *(byte *)((long)puVar1 + (local_108 - 8 & uVar2) + 8) = bVar3;
        puVar1[local_108 * -0xd + -6] = uVar18;
        puVar1[local_108 * -0xd + -7] = uVar14;
        param_2[3] = lVar17 + 1;
        param_2[2] = lVar15 - (uVar6 & 1);
        puVar1[local_108 * -0xd + -2] = uVar19;
        puVar1[local_108 * -0xd + -3] = uVar16;
        puVar1[local_108 * -0xd + -1] = uVar21;
        puVar1[local_108 * -0xd + -4] = uVar12;
        puVar1[local_108 * -0xd + -5] = uVar20;
        puVar1[local_108 * -0xd + -10] = uVar22;
        puVar1[local_108 * -0xd + -0xb] = lVar8;
        puVar1[local_108 * -0xd + -8] = uVar26;
        puVar1[local_108 * -0xd + -9] = uVar23;
        puVar1[local_108 * -0xd + -0xc] = lVar13;
        puVar1[local_108 * -0xd + -0xd] = lVar11;
        *param_1 = 2;
        return;
      }
      bVar4 = true;
    }
    else {
      uVar10 = NEON_cmlt(uVar26,0,1);
      if (uVar10 != 0) {
        uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        local_108 = uVar6 + ((ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3) & uVar2;
        goto LAB_007b2e4c;
      }
      bVar4 = false;
    }
    lVar8 = lVar8 + 8;
    uVar6 = lVar8 + uVar6 & uVar2;
    uVar26 = *(undefined8 *)((long)puVar1 + uVar6);
    uVar10 = NEON_cmeq(uVar26,uVar12,1);
    uVar10 = uVar10 & 0x8080808080808080;
  } while( true );
}


// ===== 007b3028  FUN_007b3028 =====

undefined8 FUN_007b3028(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  byte bVar3;
  bool bVar4;
  ulong uVar5;
  ulong in_x11;
  ulong extraout_x11;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  byte bVar12;
  undefined8 uVar13;
  ulong uVar14;
  
  uVar7 = param_2[1];
  if (param_1[2] == 0) {
                    /* try { // try from 007b3194 to 007b31ab has its CatchHandler @ 007b31d0 */
    <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(core[bcece726f298455b]::any::TypeId,alloc[c1f8e832b0d782c7]::boxed::Box<dyn_http[b87e90c26fe47eb4]::extensions::AnyClone+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>)>>
    ::reserve_rehash::
    <hashbrown[32fc5d502e7f9af5]::map::make_hasher<core[bcece726f298455b]::any::TypeId,alloc[c1f8e832b0d782c7]::boxed::Box<dyn_http[b87e90c26fe47eb4]::extensions::AnyClone_core[bcece726f298455b]::marker::Sync_core[bcece726f298455b]::marker::Send>,core[bcece726f298455b]::hash::BuildHasherDefault<http[b87e90c26fe47eb4]::extensions::IdHasher>>::_closure_0_>
              (param_1,1,param_1 + 4,1);
    in_x11 = extraout_x11;
  }
  bVar4 = false;
  puVar1 = (undefined8 *)*param_1;
  uVar2 = param_1[1];
  lVar6 = 0;
  bVar3 = (byte)(uVar7 >> 0x38);
  bVar12 = bVar3 >> 1;
  uVar8 = CONCAT17(bVar12,CONCAT16(bVar12,CONCAT15(bVar12,CONCAT14(bVar12,CONCAT13(bVar12,CONCAT12(
                                                  bVar12,CONCAT11(bVar12,bVar12)))))));
  uVar7 = uVar7 & uVar2;
  uVar13 = *(undefined8 *)((long)puVar1 + uVar7);
  uVar14 = NEON_cmeq(uVar13,uVar8,1);
  do {
    for (uVar14 = uVar14 & 0x8080808080808080; uVar14 != 0; uVar14 = uVar14 - 1 & uVar14) {
      uVar5 = (uVar14 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar14 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar7 + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3) & uVar2;
      if (param_2[1] == puVar1[uVar5 * -4 + -3] && *param_2 == puVar1[uVar5 * -4 + -4]) {
        uVar13 = puVar1[uVar5 * -4 + -2];
        puVar1[uVar5 * -4 + -2] = param_3;
        puVar1[uVar5 * -4 + -1] = param_4;
        return uVar13;
      }
    }
    if (bVar4) {
LAB_007b30dc:
      uVar13 = NEON_cmeq(uVar13,0xffffffffffffffff,1);
      bVar12 = NEON_umaxv(uVar13,1);
      if ((bVar12 & 1) != 0) {
        uVar7 = (ulong)*(char *)((long)puVar1 + in_x11);
        if (-1 < *(char *)((long)puVar1 + in_x11)) {
          uVar7 = NEON_cmlt(*puVar1,0,1);
          uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
          uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
          uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
          uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
          in_x11 = (ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3;
          uVar7 = (ulong)*(byte *)((long)puVar1 + in_x11);
        }
        lVar10 = param_1[3];
        lVar6 = param_1[2];
        *(byte *)((long)puVar1 + in_x11) = bVar3 >> 1;
        *(byte *)((long)puVar1 + (in_x11 - 8 & uVar2) + 8) = bVar3 >> 1;
        lVar11 = param_2[1];
        lVar9 = *param_2;
        puVar1[in_x11 * -4 + -2] = param_3;
        puVar1[in_x11 * -4 + -1] = param_4;
        puVar1[in_x11 * -4 + -3] = lVar11;
        puVar1[in_x11 * -4 + -4] = lVar9;
        param_1[3] = lVar10 + 1;
        param_1[2] = lVar6 - (uVar7 & 1);
        return 0;
      }
      bVar4 = true;
    }
    else {
      uVar14 = NEON_cmlt(uVar13,0,1);
      if (uVar14 != 0) {
        uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
        uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
        uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
        in_x11 = uVar7 + ((ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3) & uVar2;
        goto LAB_007b30dc;
      }
      bVar4 = false;
      in_x11 = 0;
    }
    lVar6 = lVar6 + 8;
    uVar7 = lVar6 + uVar7 & uVar2;
    uVar13 = *(undefined8 *)((long)puVar1 + uVar7);
    uVar14 = NEON_cmeq(uVar13,uVar8,1);
  } while( true );
}


// ===== 007b31ec  FUN_007b31ec =====

undefined8 FUN_007b31ec(long *param_1,byte *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  long *__ptr;
  long lVar9;
  byte bVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulong local_a8;
  
                    /* try { // try from 007b3218 to 007b321f has its CatchHandler @ 007b3450 */
  uVar7 = FUN_007c4ecc(param_1 + 4);
  if (param_1[2] == 0) {
                    /* try { // try from 007b33ec to 007b33ff has its CatchHandler @ 007b3450 */
    <hashbrown[32fc5d502e7f9af5]::raw::RawTable<((http[b87e90c26fe47eb4]::uri::scheme::
    Scheme,http[b87e90c26fe47eb4]::uri::authority::Authority),())>>::reserve_rehash::
    <hashbrown[32fc5d502e7f9af5]::map::make_hasher<(http[b87e90c26fe47eb4]::uri::scheme::
    Scheme,http[b87e90c26fe47eb4]::uri::authority::Authority__();
  }
  bVar5 = false;
  puVar2 = (undefined8 *)*param_1;
  uVar3 = param_1[1];
  lVar9 = 0;
  bVar4 = (byte)(uVar7 >> 0x38);
  bVar10 = bVar4 >> 1;
  uVar12 = CONCAT17(bVar10,CONCAT16(bVar10,CONCAT15(bVar10,CONCAT14(bVar10,CONCAT13(bVar10,CONCAT12(
                                                  bVar10,CONCAT11(bVar10,bVar10)))))));
  uVar7 = uVar7 & uVar3;
  uVar19 = *(undefined8 *)((long)puVar2 + uVar7);
  uVar11 = NEON_cmeq(uVar19,uVar12,1);
  uVar11 = uVar11 & 0x8080808080808080;
  do {
    for (; uVar11 != 0; uVar11 = uVar11 - 1 & uVar11) {
      uVar8 = (uVar11 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar11 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      lVar1 = *param_1 +
              (uVar7 + ((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3) & uVar3) * -0x30;
                    /* try { // try from 007b327c to 007b3297 has its CatchHandler @ 007b3454 */
      iVar6 = <http::uri::scheme::Scheme_as_core::cmp::PartialEq>::eq(param_2,lVar1 + -0x30);
      if ((iVar6 != 0) &&
         (uVar8 = <http::uri::authority::Authority_as_core::cmp::PartialEq>::eq
                            (param_2 + 0x10,lVar1 + -0x20), (uVar8 & 1) != 0)) {
        if (1 < *param_2) {
          __ptr = *(long **)(param_2 + 8);
                    /* try { // try from 007b3338 to 007b333f has its CatchHandler @ 007b3420 */
          (**(code **)(*__ptr + 0x20))(__ptr + 3,__ptr[1],__ptr[2]);
          free(__ptr);
        }
        (**(code **)(*(long *)(param_2 + 0x10) + 0x20))
                  (param_2 + 0x28,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20));
        return 1;
      }
    }
    if (bVar5) {
LAB_007b32d8:
      uVar19 = NEON_cmeq(uVar19,0xffffffffffffffff,1);
      bVar10 = NEON_umaxv(uVar19,1);
      if ((bVar10 & 1) != 0) {
        if (-1 < *(char *)((long)puVar2 + local_a8)) {
          uVar7 = NEON_cmlt(*puVar2,0,1);
          uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
          uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
          uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
          uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
          local_a8 = (ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3;
        }
        lVar1 = *param_1;
        uVar7 = param_1[1];
        lVar14 = param_1[3];
        lVar13 = param_1[2];
        uVar18 = *(undefined8 *)(param_2 + 8);
        uVar17 = *(undefined8 *)param_2;
        uVar16 = *(undefined8 *)(param_2 + 0x18);
        uVar15 = *(undefined8 *)(param_2 + 0x10);
        uVar12 = *(undefined8 *)(param_2 + 0x28);
        uVar19 = *(undefined8 *)(param_2 + 0x20);
        bVar10 = *(byte *)(lVar1 + local_a8);
        *(byte *)(lVar1 + local_a8) = bVar4 >> 1;
        lVar9 = lVar1 + local_a8 * -0x30;
        *(byte *)(lVar1 + (uVar7 & local_a8 - 8) + 8) = bVar4 >> 1;
        *(undefined8 *)(lVar9 + -0x28) = uVar18;
        *(undefined8 *)(lVar9 + -0x30) = uVar17;
        *(undefined8 *)(lVar9 + -0x18) = uVar16;
        *(undefined8 *)(lVar9 + -0x20) = uVar15;
        *(undefined8 *)(lVar9 + -8) = uVar12;
        *(undefined8 *)(lVar9 + -0x10) = uVar19;
        param_1[3] = lVar14 + 1;
        param_1[2] = lVar13 - ((ulong)bVar10 & 1);
        return 0;
      }
      bVar5 = true;
    }
    else {
      uVar11 = NEON_cmlt(uVar19,0,1);
      if (uVar11 != 0) {
        uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        local_a8 = uVar7 + ((ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3) & uVar3;
        goto LAB_007b32d8;
      }
      bVar5 = false;
    }
    lVar9 = lVar9 + 8;
    uVar7 = lVar9 + uVar7 & uVar3;
    uVar19 = *(undefined8 *)((long)puVar2 + uVar7);
    uVar11 = NEON_cmeq(uVar19,uVar12,1);
    uVar11 = uVar11 & 0x8080808080808080;
  } while( true );
}


// ===== 007b346c  FUN_007b346c =====

void FUN_007b346c(long *param_1,ulong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  byte bVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = param_1[1];
  uVar5 = uVar2 & param_2;
  uVar7 = NEON_cmlt(*(undefined8 *)((long)puVar1 + uVar5),0,1);
  if (uVar7 == 0) {
    lVar6 = 8;
    do {
      uVar5 = uVar5 + lVar6;
      lVar6 = lVar6 + 8;
      uVar5 = uVar5 & uVar2;
      uVar7 = NEON_cmlt(*(undefined8 *)((long)puVar1 + uVar5),0,1);
    } while (uVar7 == 0);
  }
  uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
  uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
  uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
  uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
  uVar5 = uVar5 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) & uVar2;
  uVar7 = (ulong)*(char *)((long)puVar1 + uVar5);
  if (-1 < *(char *)((long)puVar1 + uVar5)) {
    uVar5 = NEON_cmlt(*puVar1,0,1);
    uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
    uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
    uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
    uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
    uVar5 = (ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3;
    uVar7 = (ulong)*(byte *)((long)puVar1 + uVar5);
  }
  uVar9 = param_3[3];
  uVar8 = param_3[2];
  uVar12 = param_3[5];
  uVar11 = param_3[4];
  bVar3 = (byte)(param_2 >> 0x38);
  *(byte *)((long)puVar1 + uVar5) = bVar3 >> 1;
  uVar14 = param_3[7];
  uVar13 = param_3[6];
  *(byte *)((long)puVar1 + (uVar5 - 8 & uVar2) + 8) = bVar3 >> 1;
  uVar16 = param_3[1];
  uVar15 = *param_3;
  uVar4 = param_3[8];
  puVar1[uVar5 * -9 + -6] = uVar9;
  puVar1[uVar5 * -9 + -7] = uVar8;
  lVar10 = param_1[3];
  lVar6 = param_1[2];
  puVar1[uVar5 * -9 + -4] = uVar12;
  puVar1[uVar5 * -9 + -5] = uVar11;
  puVar1[uVar5 * -9 + -2] = uVar14;
  puVar1[uVar5 * -9 + -3] = uVar13;
  puVar1[uVar5 * -9 + -1] = uVar4;
  puVar1[uVar5 * -9 + -8] = uVar16;
  puVar1[uVar5 * -9 + -9] = uVar15;
  param_1[3] = lVar10 + 1;
  param_1[2] = lVar6 - (uVar7 & 1);
  return;
}


// ===== 007b3548  FUN_007b3548 =====

void FUN_007b3548(long *param_1,long *param_2)

{
  ushort uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  
  if (param_2[8] == 0) {
    lVar3 = *param_2;
    puVar7 = (undefined8 *)param_2[1];
    *param_2 = 0;
    puVar2 = (undefined8 *)param_2[2];
    lVar5 = param_2[3];
    if (lVar3 == 1) {
      if (puVar7 == (undefined8 *)0x0) {
        for (; lVar5 != 0; lVar5 = lVar5 + -1) {
          puVar2 = (undefined8 *)puVar2[0x70];
        }
        puVar7 = (undefined8 *)*puVar2;
      }
      else {
        puVar2 = puVar7;
        puVar7 = (undefined8 *)*puVar7;
      }
      for (; puVar7 != (undefined8 *)0x0; puVar7 = (undefined8 *)*puVar7) {
        free(puVar2);
        puVar2 = puVar7;
      }
      free(puVar2);
    }
    *param_1 = 0;
    return;
  }
  param_2[8] = param_2[8] + -1;
  if (*param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00add968);
  }
  puVar2 = (undefined8 *)param_2[1];
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)param_2[2];
    for (lVar3 = param_2[3]; lVar3 != 0; lVar3 = lVar3 + -1) {
      puVar2 = (undefined8 *)puVar2[0x70];
    }
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 1;
    param_2[1] = (long)puVar2;
    lVar3 = param_2[2];
    uVar6 = param_2[3];
    puVar7 = puVar2;
    if (uVar6 < *(ushort *)((long)puVar2 + 0x37a)) goto joined_r0x007b35a0;
  }
  else {
    lVar3 = param_2[2];
    uVar6 = param_2[3];
    puVar7 = puVar2;
    if (uVar6 < *(ushort *)((long)puVar2 + 0x37a)) goto joined_r0x007b35a0;
  }
  do {
    puVar7 = (undefined8 *)*puVar2;
    if (puVar7 == (undefined8 *)0x0) {
      free(puVar2);
                    /* try { // try from 007b373c to 007b3747 has its CatchHandler @ 007b3758 */
                    /* WARNING: Subroutine does not return */
      core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00add980);
    }
    uVar1 = *(ushort *)(puVar2 + 0x6f);
    uVar6 = (ulong)uVar1;
    lVar3 = lVar3 + 1;
    free(puVar2);
    puVar2 = puVar7;
  } while (*(ushort *)((long)puVar7 + 0x37a) <= uVar1);
joined_r0x007b35a0:
  if (lVar3 == 0) {
    lVar5 = uVar6 + 1;
    puVar2 = puVar7;
  }
  else {
    puVar4 = puVar7 + uVar6 + 0x71;
    lVar5 = lVar3;
    do {
      puVar2 = (undefined8 *)*puVar4;
      lVar5 = lVar5 + -1;
      puVar4 = puVar2 + 0x70;
    } while (lVar5 != 0);
    lVar5 = 0;
  }
  *param_1 = (long)puVar7;
  param_1[1] = lVar3;
  param_1[2] = uVar6;
  param_2[1] = (long)puVar2;
  param_2[2] = 0;
  param_2[3] = lVar5;
  return;
}


// ===== 007b375c  <reqwest::dns::resolve::sealed::InvalidNameError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::dns::resolve::sealed::InvalidNameError as core::fmt::Display>::fmt */

void __rustcall
<reqwest::dns::resolve::sealed::InvalidNameError_as_core::fmt::Display>::fmt
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002a0ab0,0x10);
  return;
}


// ===== 007b3770  FUN_007b3770 =====

void FUN_007b3770(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong local_90;
  undefined8 local_88;
  long lStack_80;
  long local_78;
  ulong local_70;
  undefined8 local_68;
  long lStack_60;
  long local_58;
  long local_50;
  long local_48 [2];
  long local_38;
  
  lVar3 = *param_1;
  if (lVar3 == 0) {
    local_50 = 0;
  }
  else {
    local_78 = param_1[1];
    local_50 = param_1[2];
    local_88 = 0;
    local_68 = 0;
    lStack_80 = lVar3;
    lStack_60 = lVar3;
    local_58 = local_78;
  }
  local_90 = (ulong)(lVar3 != 0);
  local_70 = local_90;
  FUN_007b3548(local_48,&local_90);
  lVar3 = local_48[0];
  lVar1 = local_38;
  while (lVar3 != 0) {
    lVar2 = lVar3 + lVar1 * 0x18;
    local_48[0] = lVar3;
    local_38 = lVar1;
    if (*(long *)(lVar2 + 8) != 0) {
      free(*(void **)(lVar2 + 0x10));
    }
    lVar3 = lVar3 + lVar1 * 0x38;
    if (*(long *)(lVar3 + 0x120) != 0) {
      free(*(void **)(lVar3 + 0x128));
    }
    FUN_007b3548(local_48,&local_90);
    lVar3 = local_48[0];
    lVar1 = local_38;
  }
  return;
}


// ===== 007b3838  FUN_007b3838 =====

void FUN_007b3838(undefined8 *param_1)

{
  <rustls::webpki::verify::WebPkiSupportedAlgorithms_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 007b3840  FUN_007b3840 =====

void FUN_007b3840(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_78 [16];
  ulong local_68 [3];
  long local_50;
  ulong local_48;
  undefined8 local_40;
  long lStack_38;
  long local_30;
  long local_28;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_map(auStack_78,param_2);
  lVar1 = *param_1;
  if (lVar1 == 0) {
    local_28 = 0;
  }
  else {
    local_50 = param_1[1];
    local_28 = param_1[2];
    local_68[1] = 0;
    local_40 = 0;
    local_68[2] = lVar1;
    lStack_38 = lVar1;
    local_30 = local_50;
  }
  local_68[0] = (ulong)(lVar1 != 0);
  local_48 = local_68[0];
  FUN_00776110(auStack_78,local_68);
  <core::fmt::builders::[7]::core::fmt::builders::DebugMap>::finish(auStack_78);
  return;
}


// ===== 007b38b8  FUN_007b38b8 =====

void FUN_007b38b8(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,&DAT_002e3cde,0xb);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish_non_exhaustive(auStack_20);
  return;
}


// ===== 007b38f0  FUN_007b38f0 =====

void FUN_007b38f0(long *param_1)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  
  lVar3 = param_1[1];
  if (lVar3 != 0) {
    lVar4 = param_1[3];
    if (lVar4 != 0) {
      puVar5 = (undefined8 *)*param_1;
      puVar6 = puVar5 + 1;
      uVar7 = NEON_cmge(*puVar5,0,1);
      uVar7 = uVar7 & 0x8080808080808080;
      do {
        for (; uVar7 == 0; uVar7 = uVar7 & 0x8080808080808080) {
          puVar5 = puVar5 + -0x30;
          uVar7 = NEON_cmge(*puVar6,0,1);
          puVar6 = puVar6 + 1;
        }
        uVar1 = (uVar7 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        iVar2 = (int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3);
        if (puVar5[(long)-iVar2 * 6 + -6] != 0) {
          free((void *)puVar5[(long)-iVar2 * 6 + -5]);
        }
        if (puVar5[(long)-iVar2 * 6 + -3] != 0) {
          free((void *)puVar5[(long)-iVar2 * 6 + -2]);
        }
        lVar4 = lVar4 + -1;
        uVar7 = uVar7 - 1 & uVar7;
      } while (lVar4 != 0);
    }
    if (lVar3 * 0x31 != -0x39) {
      free((void *)(*param_1 + lVar3 * -0x30 + -0x30));
      return;
    }
  }
  return;
}


// ===== 007b39fc  FUN_007b39fc =====

void FUN_007b39fc(long *param_1)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  
  lVar3 = param_1[1];
  if (lVar3 != 0) {
    lVar4 = param_1[3];
    if (lVar4 != 0) {
      puVar5 = (undefined8 *)*param_1;
      puVar6 = puVar5 + 1;
      uVar7 = NEON_cmge(*puVar5,0,1);
      uVar7 = uVar7 & 0x8080808080808080;
      do {
        for (; uVar7 == 0; uVar7 = uVar7 & 0x8080808080808080) {
          puVar5 = puVar5 + -0x68;
          uVar7 = NEON_cmge(*puVar6,0,1);
          puVar6 = puVar6 + 1;
        }
        uVar1 = (uVar7 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        iVar2 = (int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3);
        if (puVar5[(long)-iVar2 * 0xd + -0xd] != 0) {
          free((void *)puVar5[(long)-iVar2 * 0xd + -0xc]);
        }
        lVar4 = lVar4 + -1;
        uVar7 = uVar7 - 1 & uVar7;
        FUN_007b2298(puVar5 + (long)-iVar2 * 0xd + -10);
      } while (lVar4 != 0);
    }
    if (lVar3 * 0x69 != -0x71) {
      free((void *)(*param_1 + lVar3 * -0x68 + -0x68));
      return;
    }
  }
  return;
}


// ===== 007b3af8  FUN_007b3af8 =====

void FUN_007b3af8(long *param_1)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  
  lVar3 = param_1[1];
  if (lVar3 != 0) {
    lVar4 = param_1[3];
    if (lVar4 != 0) {
      puVar5 = (undefined8 *)*param_1;
      puVar6 = puVar5 + 1;
      uVar7 = NEON_cmge(*puVar5,0,1);
      uVar7 = uVar7 & 0x8080808080808080;
      do {
        for (; uVar7 == 0; uVar7 = uVar7 & 0x8080808080808080) {
          puVar5 = puVar5 + -0x18;
          uVar7 = NEON_cmge(*puVar6,0,1);
          puVar6 = puVar6 + 1;
        }
        uVar1 = (uVar7 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        iVar2 = (int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3);
        if (puVar5[(long)-iVar2 * 3 + -3] != 0) {
          free((void *)puVar5[(long)-iVar2 * 3 + -2]);
        }
        lVar4 = lVar4 + -1;
        uVar7 = uVar7 - 1 & uVar7;
      } while (lVar4 != 0);
    }
    if (lVar3 * 0x19 != -0x21) {
      free((void *)(*param_1 + lVar3 * -0x18 + -0x18));
      return;
    }
  }
  return;
}


// ===== 007b3bec  FUN_007b3bec =====

void FUN_007b3bec(long *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  
  lVar4 = param_1[1];
  if (lVar4 != 0) {
    lVar5 = param_1[3];
    if (lVar5 != 0) {
      puVar6 = (undefined8 *)*param_1;
      puVar7 = puVar6 + 1;
      uVar8 = NEON_cmge(*puVar6,0,1);
      uVar8 = uVar8 & 0x8080808080808080;
      do {
        for (; uVar8 == 0; uVar8 = uVar8 & 0x8080808080808080) {
          puVar6 = puVar6 + -0x20;
          uVar8 = NEON_cmge(*puVar7,0,1);
          puVar7 = puVar7 + 1;
        }
        uVar2 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
        uVar2 = LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) & 0x78;
        __ptr = *(void **)((long)puVar6 + uVar2 * -4 + -0x10);
        puVar1 = *(undefined8 **)((long)puVar6 + uVar2 * -4 + -8);
        pcVar3 = (code *)*puVar1;
        if (pcVar3 != (code *)0x0) {
                    /* try { // try from 007b3c80 to 007b3c87 has its CatchHandler @ 007b3cf0 */
          (*pcVar3)(__ptr);
        }
        if (puVar1[1] != 0) {
          free(__ptr);
        }
        lVar5 = lVar5 + -1;
        uVar8 = uVar8 - 1 & uVar8;
      } while (lVar5 != 0);
    }
    if (lVar4 * 0x21 != -0x29) {
      free((void *)(*param_1 + lVar4 * -0x20 + -0x20));
      return;
    }
  }
  return;
}


// ===== 007b3d10  FUN_007b3d10 =====

void FUN_007b3d10(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    lVar3 = param_1[3];
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)*param_1;
      puVar5 = puVar4 + 1;
      uVar6 = NEON_cmge(*puVar4,0,1);
      uVar6 = uVar6 & 0x8080808080808080;
      do {
        for (; uVar6 == 0; uVar6 = uVar6 & 0x8080808080808080) {
          puVar4 = puVar4 + -0x48;
          uVar6 = NEON_cmge(*puVar5,0,1);
          puVar5 = puVar5 + 1;
        }
        uVar1 = (uVar6 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar6 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        lVar3 = lVar3 + -1;
        uVar6 = uVar6 - 1 & uVar6;
        FUN_007b23ec(puVar4 + (long)-(int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) * 9 +
                              -9);
      } while (lVar3 != 0);
    }
    if (lVar2 * 0x49 != -0x51) {
      free((void *)(*param_1 + lVar2 * -0x48 + -0x48));
      return;
    }
  }
  return;
}


// ===== 007b3df8  FUN_007b3df8 =====

void FUN_007b3df8(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    lVar3 = param_1[3];
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)*param_1;
      puVar5 = puVar4 + 1;
      uVar6 = NEON_cmge(*puVar4,0,1);
      uVar6 = uVar6 & 0x8080808080808080;
      do {
        for (; uVar6 == 0; uVar6 = uVar6 & 0x8080808080808080) {
          puVar4 = puVar4 + -0x50;
          uVar6 = NEON_cmge(*puVar5,0,1);
          puVar5 = puVar5 + 1;
        }
        uVar1 = (uVar6 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar6 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        lVar3 = lVar3 + -1;
        uVar6 = uVar6 - 1 & uVar6;
        FUN_007b2538(puVar4 + (long)-(int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) * 10
                              + -10);
      } while (lVar3 != 0);
    }
    if (lVar2 * 0x51 != -0x59) {
      free((void *)(*param_1 + lVar2 * -0x50 + -0x50));
      return;
    }
  }
  return;
}


// ===== 007b3ee0  FUN_007b3ee0 =====

void FUN_007b3ee0(long *param_1)

{
  ulong uVar1;
  int iVar2;
  long *__ptr;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  
  lVar3 = param_1[1];
  if (lVar3 != 0) {
    lVar4 = param_1[3];
    if (lVar4 != 0) {
      puVar5 = (undefined8 *)*param_1;
      puVar6 = puVar5 + 1;
      uVar7 = NEON_cmge(*puVar5,0,1);
      uVar7 = uVar7 & 0x8080808080808080;
      do {
        for (; uVar7 == 0; uVar7 = uVar7 & 0x8080808080808080) {
          puVar5 = puVar5 + -0x30;
          uVar7 = NEON_cmge(*puVar6,0,1);
          puVar6 = puVar6 + 1;
        }
        uVar1 = (uVar7 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        iVar2 = (int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3);
        if (1 < *(byte *)(puVar5 + (long)-iVar2 * 6 + -6)) {
          __ptr = (long *)puVar5[(long)-iVar2 * 6 + -5];
                    /* try { // try from 007b3fac to 007b3fb3 has its CatchHandler @ 007b4014 */
          (**(code **)(*__ptr + 0x20))(__ptr + 3,__ptr[1],__ptr[2]);
          free(__ptr);
        }
        uVar7 = uVar7 - 1 & uVar7;
        lVar4 = lVar4 + -1;
        (**(code **)(puVar5[(long)-iVar2 * 6 + -4] + 0x20))
                  (puVar5 + (long)-iVar2 * 6 + -1,puVar5[(long)-iVar2 * 6 + -3],
                   puVar5[(long)-iVar2 * 6 + -2]);
      } while (lVar4 != 0);
    }
    if (lVar3 * 0x31 != -0x39) {
      free((void *)(*param_1 + lVar3 * -0x30 + -0x30));
      return;
    }
  }
  return;
}


// ===== 007b4048  FUN_007b4048 =====

void FUN_007b4048(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
  }
  if (param_1[3] != 0) {
    free((void *)param_1[4]);
    return;
  }
  return;
}


// ===== 007b4098  FUN_007b4098 =====

void FUN_007b4098(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
  }
  FUN_007b2298(param_1 + 3);
  return;
}


// ===== 007b40cc  thunk_FUN_007b23ec =====

void thunk_FUN_007b23ec(byte *param_1)

{
  long lVar1;
  long *__ptr;
  long lVar2;
  
  if (1 < *param_1) {
    __ptr = *(long **)(param_1 + 8);
    (**(code **)(*__ptr + 0x20))(__ptr + 3,__ptr[1],__ptr[2]);
    free(__ptr);
  }
  (**(code **)(*(long *)(param_1 + 0x10) + 0x20))
            (param_1 + 0x28,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  lVar2 = *(long *)(param_1 + 0x40) + 1;
  lVar1 = *(long *)(param_1 + 0x38);
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
    FUN_0078618c(lVar1);
    lVar1 = lVar1 + 0x48;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    free(*(void **)(param_1 + 0x38));
    return;
  }
  return;
}


// ===== 007b40d0  thunk_FUN_007b2538 =====

void thunk_FUN_007b2538(byte *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long *__ptr;
  long lVar5;
  long lVar6;
  
  if (1 < *param_1) {
    __ptr = *(long **)(param_1 + 8);
    (**(code **)(*__ptr + 0x20))(__ptr + 3,__ptr[1],__ptr[2]);
    free(__ptr);
  }
  (**(code **)(*(long *)(param_1 + 0x10) + 0x20))
            (param_1 + 0x28,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  uVar4 = *(ulong *)(param_1 + 0x48);
  if (uVar4 == 0) {
    lVar5 = 0;
    uVar2 = 0;
    lVar3 = 0;
  }
  else {
    uVar2 = *(ulong *)(param_1 + 0x30);
    uVar1 = 0;
    if (uVar2 <= *(ulong *)(param_1 + 0x40)) {
      uVar1 = uVar2;
    }
    lVar3 = *(ulong *)(param_1 + 0x40) - uVar1;
    lVar5 = uVar4 - (uVar2 - lVar3);
    if (uVar4 < uVar2 - lVar3 || lVar5 == 0) {
      lVar5 = 0;
      uVar2 = lVar3 + uVar4;
    }
  }
  lVar6 = *(long *)(param_1 + 0x38);
  FUN_0078e0b0(lVar6 + lVar3 * 8,uVar2 - lVar3);
  FUN_0078e0b0(lVar6,lVar5);
  if (*(long *)(param_1 + 0x30) != 0) {
    free(*(void **)(param_1 + 0x38));
    return;
  }
  return;
}


// ===== 007b40d4  FUN_007b40d4 =====

void FUN_007b40d4(byte *param_1)

{
  long *__ptr;
  
  if (1 < *param_1) {
    __ptr = *(long **)(param_1 + 8);
                    /* try { // try from 007b4104 to 007b410b has its CatchHandler @ 007b413c */
    (**(code **)(*__ptr + 0x20))(__ptr + 3,__ptr[1],__ptr[2]);
    free(__ptr);
  }
                    /* WARNING: Could not recover jumptable at 0x007b4138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x20))
            (param_1 + 0x28,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  return;
}


// ===== 007b4170  FUN_007b4170 =====

void FUN_007b4170(long *param_1,long param_2,long *param_3,void *param_4,undefined8 *param_5,
                 undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  long local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  long local_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long local_120;
  long lStack_118;
  long local_110;
  long local_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long local_e0;
  long lStack_d8;
  long local_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long local_b0;
  long lStack_a8;
  long lStack_a0;
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
  
  if ((((*(char *)(param_2 + 0x333) == '\x01') && (*(short *)(param_2 + 0x328) != 5)) &&
      (-0x7ffffffffffffffc < *param_3)) && (*(char *)(param_2 + 0x330) == (char)param_3[0x16])) {
    if (*(char *)(param_2 + 0x32d) == '\0') {
      pcVar1 = (code *)*param_5;
      *param_1 = -0x7fffffffffffffe6;
      *(undefined1 *)(param_1 + 1) = 0x41;
      if (pcVar1 != (code *)0x0) {
                    /* try { // try from 007b4330 to 007b4337 has its CatchHandler @ 007b4368 */
        (*pcVar1)(param_4);
      }
      if (param_5[1] != 0) {
        free(param_4);
      }
    }
    else {
      *(char *)(param_2 + 0x32d) = *(char *)(param_2 + 0x32d) + -1;
                    /* try { // try from 007b41ec to 007b41f7 has its CatchHandler @ 007b4384 */
      <rustls::common_state::rustls::common_state::CommonState>::send_warning_alert(param_2,0x18);
      param_1[1] = (long)param_4;
      param_1[2] = (long)param_5;
      *param_1 = -1;
    }
    FUN_007b63f8(param_3);
    return;
  }
  lStack_68 = param_3[0x13];
  local_70 = param_3[0x12];
  lStack_58 = param_3[0x15];
  lStack_60 = param_3[0x14];
  lStack_48 = param_3[0x17];
  local_50 = param_3[0x16];
  lStack_a8 = param_3[0xb];
  local_b0 = param_3[10];
  lStack_98 = param_3[0xd];
  lStack_a0 = param_3[0xc];
  lStack_88 = param_3[0xf];
  local_90 = param_3[0xe];
  lStack_78 = param_3[0x11];
  lStack_80 = param_3[0x10];
  lStack_f8 = param_3[1];
  local_100 = *param_3;
  lStack_e8 = param_3[3];
  lStack_f0 = param_3[2];
  lStack_d8 = param_3[5];
  local_e0 = param_3[4];
  lStack_c8 = param_3[7];
  local_d0 = param_3[6];
  lStack_b8 = param_3[9];
  lStack_c0 = param_3[8];
  local_158 = param_2;
  local_150 = param_6;
  uStack_148 = param_7;
  (*(code *)param_5[3])(param_1,param_4,&local_158,&local_100);
  if (*param_1 != -1) {
    if (*param_1 + 0x7fffffffffffffefU < 2) {
      lStack_138 = param_1[1];
      local_140 = *param_1;
      lStack_128 = param_1[3];
      lStack_130 = param_1[2];
      local_110 = param_1[6];
      lStack_48 = CONCAT62(lStack_48._2_6_,4);
      lStack_118 = param_1[5];
      local_120 = param_1[4];
      local_100 = -0x8000000000000000;
      lStack_f8 = CONCAT44(lStack_f8._4_4_,0x10001);
                    /* try { // try from 007b42c0 to 007b42cb has its CatchHandler @ 007b43a4 */
      <rustls::common_state::rustls::common_state::CommonState>::send_msg
                (param_2,&local_100,*(char *)(param_2 + 0x49) == '\x02');
      *(undefined1 *)(param_2 + 0x335) = 1;
    }
    return;
  }
  auVar2 = (**(code **)(param_1[2] + 0x40))(param_1[1]);
  *(undefined1 (*) [16])(param_1 + 1) = auVar2;
  return;
}


// ===== 007b43bc  FUN_007b43bc =====

void FUN_007b43bc(undefined8 *param_1,void *param_2,size_t param_3,undefined8 param_4)

{
  undefined1 *__dest;
  undefined8 *puVar1;
  
  if (param_3 == 0) {
    __dest = &DAT_00000001;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    __dest = (undefined1 *)FUN_004b25a4(param_3,1);
    if (__dest == (undefined1 *)0x0) {
                    /* try { // try from 007b43fc to 007b4407 has its CatchHandler @ 007b4470 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(1,param_3);
    }
  }
  memcpy(__dest,param_2,param_3);
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)FUN_004b25a4(8,8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_4;
    *param_1 = __dest;
    param_1[1] = param_3;
    param_1[2] = puVar1;
    param_1[3] = &PTR_FUN_00adee50;
    return;
  }
                    /* try { // try from 007b4460 to 007b446b has its CatchHandler @ 007b4484 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,8);
}


// ===== 007b44b0  FUN_007b44b0 =====

void FUN_007b44b0(ulong *param_1)

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
                    /* try { // try from 007b44f4 to 007b44fb has its CatchHandler @ 007b4720 */
        FUN_007dfadc(param_1 + 1);
        if ((int)param_1[4] != -1) {
          close((int)param_1[4]);
        }
                    /* try { // try from 007b450c to 007b4513 has its CatchHandler @ 007b46ac */
        FUN_007b6bac(param_1 + 1);
        uVar4 = param_1[10];
        if (uVar4 != 0) {
          uVar2 = param_1[8];
          uVar3 = param_1[9];
          uVar5 = param_1[7];
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
        if (param_1[7] != 0) {
          free((void *)param_1[8]);
        }
        uVar4 = param_1[0xc];
      }
      else {
                    /* try { // try from 007b45c4 to 007b45cb has its CatchHandler @ 007b46bc */
        FUN_007dfadc(param_1 + 1);
        if ((int)param_1[4] != -1) {
          close((int)param_1[4]);
        }
                    /* try { // try from 007b45dc to 007b45e3 has its CatchHandler @ 007b46a4 */
        FUN_007b6bac(param_1 + 1);
        uVar4 = param_1[5];
      }
      if ((1 < (uVar4 & 3) - 2) && ((uVar4 & 3) != 0)) {
        local_58 = uVar4 - 1;
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_58);
      }
    }
    return;
  }
                    /* try { // try from 007b4584 to 007b458b has its CatchHandler @ 007b46ec */
  FUN_007dfadc(param_1);
  if ((int)param_1[3] != -1) {
    close((int)param_1[3]);
  }
                    /* try { // try from 007b459c to 007b45a3 has its CatchHandler @ 007b46b4 */
  FUN_007b6bac(param_1);
  FUN_007b6930(param_1 + 4);
  return;
}


// ===== 007b4760  FUN_007b4760 =====

void FUN_007b4760(void *param_1,undefined8 *param_2)

{
  if ((code *)*param_2 != (code *)0x0) {
                    /* try { // try from 007b4780 to 007b4787 has its CatchHandler @ 007b47b8 */
    (*(code *)*param_2)(param_1);
  }
  if (param_2[1] != 0) {
    free(param_1);
    return;
  }
  return;
}


// ===== 007b47d8  FUN_007b47d8 =====

void FUN_007b47d8(long param_1)

{
  if (*(char *)(param_1 + 0xa9) == '\x02') {
    return;
  }
                    /* try { // try from 007b47fc to 007b4807 has its CatchHandler @ 007b4818 */
  <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop(param_1 + 0x10);
  <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop(param_1 + 0x58);
  return;
}


// ===== 007b4830  FUN_007b4830 =====

void FUN_007b4830(long *param_1)

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


// ===== 007b48bc  FUN_007b48bc =====

void FUN_007b48bc(undefined8 *param_1)

{
  code *pcVar1;
  void *__ptr;
  undefined8 *puVar2;
  
  if ((void *)*param_1 != (void *)0x0) {
    if (param_1[1] != 0) {
      free((void *)*param_1);
    }
    __ptr = (void *)param_1[2];
    if (__ptr != (void *)0x0) {
      puVar2 = (undefined8 *)param_1[3];
      pcVar1 = (code *)*puVar2;
      if (pcVar1 != (code *)0x0) {
                    /* try { // try from 007b48f8 to 007b48ff has its CatchHandler @ 007b4928 */
        (*pcVar1)(__ptr);
      }
      if (puVar2[1] != 0) {
        free(__ptr);
        return;
      }
    }
  }
  return;
}


// ===== 007b494c  FUN_007b494c =====

void FUN_007b494c(long *param_1)

{
  ulong uVar1;
  long local_18;
  
  if (*param_1 == -1) {
    uVar1 = param_1[1] & 3;
    if ((1 < uVar1 - 2) && (uVar1 != 0)) {
      local_18 = param_1[1] - 1;
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
    }
  }
  else if (0 < param_1[1]) {
    free((void *)param_1[2]);
    return;
  }
  return;
}


// ===== 007b49bc  FUN_007b49bc =====

void FUN_007b49bc(long *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  void *__ptr;
  
  if (*param_1 == 0) {
                    /* try { // try from 007b4a38 to 007b4a3f has its CatchHandler @ 007b4a84 */
    FUN_007dfadc(param_1 + 1);
    if ((int)param_1[4] != -1) {
      close((int)param_1[4]);
    }
    FUN_007b6bac(param_1 + 1);
    return;
  }
  if (param_1[2] != 0) {
    free((void *)param_1[1]);
  }
  __ptr = (void *)param_1[3];
  if (__ptr != (void *)0x0) {
    puVar2 = (undefined8 *)param_1[4];
    pcVar1 = (code *)*puVar2;
    if (pcVar1 != (code *)0x0) {
                    /* try { // try from 007b4a00 to 007b4a07 has its CatchHandler @ 007b4a64 */
      (*pcVar1)(__ptr);
    }
    if (puVar2[1] != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 007b4ab0  FUN_007b4ab0 =====

void FUN_007b4ab0(ulong param_1)

{
  long local_18;
  
  if ((1 < (param_1 & 3) - 2) && ((param_1 & 3) != 0)) {
    local_18 = param_1 - 1;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
  }
  return;
}


// ===== 007b4af8  FUN_007b4af8 =====

void FUN_007b4af8(long *param_1)

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


// ===== 007b4b78  FUN_007b4b78 =====

void FUN_007b4b78(long *param_1)

{
  void *__ptr;
  long lVar1;
  undefined8 *puVar2;
  
  __ptr = (void *)param_1[1];
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)((long)__ptr + 0x10);
    do {
      if ((puVar2[-1] != -1) && (puVar2[-1] != 0)) {
        free((void *)*puVar2);
      }
      lVar1 = lVar1 + -1;
      puVar2 = puVar2 + 4;
    } while (lVar1 != 0);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 007b4bfc  FUN_007b4bfc =====

void FUN_007b4bfc(long *param_1)

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


// ===== 007b4c84  FUN_007b4c84 =====

void FUN_007b4c84(long *param_1)

{
  void *__ptr;
  long lVar1;
  undefined8 *puVar2;
  
  __ptr = (void *)param_1[1];
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)((long)__ptr + 8);
    do {
      if (((ulong)puVar2[-1] < 0xfffffffffffffffe) && (puVar2[-1] != 0)) {
        free((void *)*puVar2);
      }
      lVar1 = lVar1 + -1;
      puVar2 = puVar2 + 4;
    } while (lVar1 != 0);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 007b4d08  FUN_007b4d08 =====

void FUN_007b4d08(void *param_1,undefined8 *param_2)

{
  if ((code *)*param_2 != (code *)0x0) {
                    /* try { // try from 007b4d28 to 007b4d2f has its CatchHandler @ 007b4d60 */
    (*(code *)*param_2)(param_1);
  }
  if (param_2[1] != 0) {
    free(param_1);
    return;
  }
  return;
}


// ===== 007b4d80  FUN_007b4d80 =====

void FUN_007b4d80(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 007b4d98  FUN_007b4d98 =====

void FUN_007b4d98(long param_1)

{
  if (*(char *)(param_1 + 0xd0) != '\x03') {
    if (*(char *)(param_1 + 0xd0) == '\0') {
      close(*(int *)(param_1 + 200));
    }
    FUN_007b6814(param_1);
    return;
  }
                    /* try { // try from 007b4dd4 to 007b4ddf has its CatchHandler @ 007b4df4 */
  FUN_007b4ff8(param_1 + 0x98);
  *(undefined1 *)(param_1 + 0xd1) = 0;
  FUN_007b6814(param_1);
  return;
}


// ===== 007b4e10  FUN_007b4e10 =====

void FUN_007b4e10(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    free((void *)*param_1);
    return;
  }
  return;
}


// ===== 007b4e28  FUN_007b4e28 =====

void FUN_007b4e28(undefined8 *param_1)

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
                    /* try { // try from 007b4e54 to 007b4e5b has its CatchHandler @ 007b4e94 */
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


// ===== 007b4ec8  FUN_007b4ec8 =====

void FUN_007b4ec8(undefined8 *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  char cVar2;
  code *pcVar3;
  
  cVar2 = *(char *)((long)param_1 + 0x21);
  if (cVar2 == '\0') {
    if (param_1[1] != 0) {
      free((void *)*param_1);
      return;
    }
  }
  else {
    if (cVar2 != '\x03') {
      if (cVar2 != '\x04') {
        return;
      }
      __ptr = (void *)param_1[5];
      puVar1 = (undefined8 *)param_1[6];
      pcVar3 = (code *)*puVar1;
      if (pcVar3 != (code *)0x0) {
                    /* try { // try from 007b4f00 to 007b4f07 has its CatchHandler @ 007b4f80 */
        (*pcVar3)(__ptr);
      }
      if (puVar1[1] != 0) {
        free(__ptr);
      }
    }
    if (((*(byte *)(param_1 + 4) & 1) == 0) || (param_1[7] == 0)) {
      *(undefined1 *)(param_1 + 4) = 0;
      return;
    }
    free((void *)param_1[6]);
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}


// ===== 007b4fa8  FUN_007b4fa8 =====

ulong FUN_007b4fa8(ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  
  if (*(char *)(param_1 + 0x58) != '\0') {
    uVar2 = param_1;
    if (*(char *)(param_1 + 0x58) == '\x03') {
                    /* try { // try from 007b4fc4 to 007b4fcf has its CatchHandler @ 007b4ff0 */
      uVar2 = FUN_007b4ff8(param_1 + 0x20);
      *(undefined1 *)(param_1 + 0x59) = 0;
    }
    return uVar2;
  }
  uVar1 = close(*(int *)(param_1 + 0x50));
  return (ulong)uVar1;
}


// ===== 007b4ff8  FUN_007b4ff8 =====

ulong FUN_007b4ff8(ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  
  if (*(char *)(param_1 + 0x2c) == '\0') {
    uVar1 = close(*(int *)(param_1 + 0x28));
    return (ulong)uVar1;
  }
  if (*(char *)(param_1 + 0x2c) == '\x03') {
                    /* try { // try from 007b5018 to 007b501f has its CatchHandler @ 007b505c */
    FUN_007dfadc(param_1);
    if (*(int *)(param_1 + 0x18) != -1) {
      close(*(int *)(param_1 + 0x18));
    }
    uVar2 = FUN_007b6bac(param_1);
    return uVar2;
  }
  return param_1;
}


// ===== 007b5088  FUN_007b5088 =====

void FUN_007b5088(long param_1)

{
  char cVar1;
  long lVar2;
  
  cVar1 = *(char *)(param_1 + 0xc2);
  if (cVar1 == '\x04') {
                    /* try { // try from 007b50c8 to 007b50d3 has its CatchHandler @ 007b50e8 */
    FUN_007b51d0(param_1 + 200);
  }
  else {
    if (cVar1 != '\x03') {
      lVar2 = param_1;
      if (cVar1 != '\0') {
        return;
      }
      goto LAB_007b50dc;
    }
                    /* try { // try from 007b50b8 to 007b50c3 has its CatchHandler @ 007b50ec */
    FUN_007b4ec8(param_1 + 200);
  }
  lVar2 = param_1 + 0x60;
  *(undefined1 *)(param_1 + 0xc3) = 0;
LAB_007b50dc:
  FUN_007b62e8(lVar2);
  return;
}


// ===== 007b5108  FUN_007b5108 =====

void FUN_007b5108(undefined8 *param_1)

{
  code *pcVar1;
  void *__ptr;
  undefined8 *puVar2;
  
  if (*(char *)((long)param_1 + 0x1b9) == '\x03') {
                    /* try { // try from 007b5124 to 007b512f has its CatchHandler @ 007b51b4 */
    FUN_007b5370(param_1 + 8);
    if ((void *)*param_1 != (void *)0x0) {
      if (param_1[1] != 0) {
        free((void *)*param_1);
      }
      __ptr = (void *)param_1[2];
      if (__ptr != (void *)0x0) {
        puVar2 = (undefined8 *)param_1[3];
        pcVar1 = (code *)*puVar2;
        if (pcVar1 != (code *)0x0) {
                    /* try { // try from 007b515c to 007b5163 has its CatchHandler @ 007b518c */
          (*pcVar1)(__ptr);
        }
        if (puVar2[1] != 0) {
          free(__ptr);
        }
      }
    }
    *(undefined1 *)(param_1 + 0x37) = 0;
  }
  return;
}


// ===== 007b51d0  FUN_007b51d0 =====

void FUN_007b51d0(long *param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = (uint)*(byte *)(param_1 + 0xd2);
  if (*(byte *)(param_1 + 0xd2) < 4) {
    if (uVar2 == 0) {
      if (param_1[0x17] != 0) {
        free((void *)param_1[0x15]);
      }
      if (*param_1 == 2) {
        return;
      }
                    /* try { // try from 007b52b4 to 007b52bb has its CatchHandler @ 007b52d8 */
      FUN_007b6814(param_1);
      plVar1 = param_1 + 0xf;
      lVar3 = param_1[0x11];
    }
    else {
      if (uVar2 != 3) {
        return;
      }
                    /* try { // try from 007b5260 to 007b5267 has its CatchHandler @ 007b52ec */
      FUN_007b5108(param_1 + 0xd3);
      plVar1 = param_1 + 0x31;
      lVar3 = param_1[0x33];
    }
  }
  else {
    if (1 < uVar2 - 4) {
      if (uVar2 != 6) {
        return;
      }
                    /* try { // try from 007b5200 to 007b5207 has its CatchHandler @ 007b52f4 */
      FUN_007b49bc(param_1 + 0xd3);
      *(undefined1 *)((long)param_1 + 0x691) = 0;
    }
                    /* try { // try from 007b520c to 007b5213 has its CatchHandler @ 007b5318 */
    FUN_007b6814(param_1 + 0xbd);
                    /* try { // try from 007b5214 to 007b521b has its CatchHandler @ 007b5310 */
    FUN_007b5108(param_1 + 0x85);
                    /* try { // try from 007b521c to 007b5223 has its CatchHandler @ 007b5308 */
    FUN_007b5108(param_1 + 0x4d);
    if (param_1[0x49] != 0) {
      free((void *)param_1[0x47]);
    }
    *(undefined1 *)((long)param_1 + 0x692) = 0;
    plVar1 = param_1 + 0x31;
    lVar3 = param_1[0x33];
  }
  if (lVar3 == 0) {
    return;
  }
  free((void *)*plVar1);
  return;
}


// ===== 007b5370  FUN_007b5370 =====

ulong FUN_007b5370(ulong param_1)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  
  cVar1 = *(char *)(param_1 + 0x70);
  uVar3 = param_1;
  if (cVar1 == '\0') {
    if (*(char *)(param_1 + 0x68) == '\x03') {
                    /* try { // try from 007b5428 to 007b5433 has its CatchHandler @ 007b546c */
      uVar3 = FUN_007b4ff8(param_1 + 0x30);
      *(undefined1 *)(param_1 + 0x69) = 0;
    }
    else if (*(char *)(param_1 + 0x68) == '\0') {
      uVar2 = close(*(int *)(param_1 + 0x60));
      return (ulong)uVar2;
    }
  }
  else {
    if (cVar1 == '\x03') {
      if (*(char *)(param_1 + 0x148) != '\x03') {
        if (*(char *)(param_1 + 0x148) == '\0') {
          close(*(int *)(param_1 + 0x140));
        }
        uVar3 = FUN_007b6814(param_1 + 0x78);
        return uVar3;
      }
                    /* try { // try from 007b5408 to 007b5413 has its CatchHandler @ 007b5480 */
      FUN_007b4ff8(param_1 + 0x110);
      *(undefined1 *)(param_1 + 0x149) = 0;
      uVar3 = FUN_007b6814(param_1 + 0x78);
      return uVar3;
    }
    if (cVar1 == '\x04') {
      if (*(char *)(param_1 + 0xd0) == '\x03') {
                    /* try { // try from 007b5444 to 007b544f has its CatchHandler @ 007b5460 */
        uVar3 = FUN_007b4ff8(param_1 + 0x98);
        *(undefined1 *)(param_1 + 0xd1) = 0;
        return uVar3;
      }
      if (*(char *)(param_1 + 0xd0) == '\0') {
        uVar2 = close(*(int *)(param_1 + 200));
        return (ulong)uVar2;
      }
    }
  }
  return uVar3;
}


// ===== 007b549c  FUN_007b549c =====

void FUN_007b549c(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (*(char *)(param_1 + 0x990) == '\0') {
    plVar3 = *(long **)(param_1 + 0x58);
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
                    /* try { // try from 007b54fc to 007b54ff has its CatchHandler @ 007b5604 */
      <alloc::sync::[n]::alloc::sync::Arc<hyper_util::client::legacy::connect::http::Config>>::
      drop_slow();
    }
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
                    /* try { // try from 007b5520 to 007b5523 has its CatchHandler @ 007b55fc */
      <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
      drop_slow();
    }
    FUN_007b62e8(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x990) != '\x03') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x132);
  if (cVar1 == '\x04') {
                    /* try { // try from 007b5540 to 007b5547 has its CatchHandler @ 007b55b0 */
    FUN_007b51d0(param_1 + 0x138);
LAB_007b5548:
    *(undefined1 *)(param_1 + 0x133) = 0;
    lVar4 = param_1 + 0xd0;
  }
  else {
    if (cVar1 == '\x03') {
                    /* try { // try from 007b5534 to 007b553b has its CatchHandler @ 007b55b4 */
      FUN_007b4ec8(param_1 + 0x138);
      goto LAB_007b5548;
    }
    if (cVar1 != '\0') goto LAB_007b5554;
    lVar4 = param_1 + 0x70;
  }
                    /* try { // try from 007b5550 to 007b5553 has its CatchHandler @ 007b5640 */
  FUN_007b62e8(lVar4);
LAB_007b5554:
  plVar3 = *(long **)(param_1 + 0x58);
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
                    /* try { // try from 007b5574 to 007b5577 has its CatchHandler @ 007b55cc */
    <alloc::sync::[n]::alloc::sync::Arc<hyper_util::client::legacy::connect::http::Config>>::
    drop_slow();
  }
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
  if (lVar4 + -1 != 0) {
    return;
  }
  DataMemoryBarrier(2,1);
  <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::drop_slow
            ((undefined8 *)(param_1 + 0x60));
  return;
}


// ===== 007b5658  FUN_007b5658 =====

void FUN_007b5658(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *__ptr;
  
  if (*(char *)(param_1 + 4) == '\0') {
    __ptr = (void *)*param_1;
    puVar1 = (undefined8 *)param_1[1];
    if ((code *)*puVar1 != (code *)0x0) {
                    /* try { // try from 007b5698 to 007b569f has its CatchHandler @ 007b56c8 */
      (*(code *)*puVar1)(__ptr);
    }
  }
  else {
    if (*(char *)(param_1 + 4) != '\x03') {
      return;
    }
    __ptr = (void *)param_1[2];
    puVar1 = (undefined8 *)param_1[3];
    if ((code *)*puVar1 != (code *)0x0) {
                    /* try { // try from 007b5680 to 007b5687 has its CatchHandler @ 007b56cc */
      (*(code *)*puVar1)(__ptr);
    }
  }
  if (puVar1[1] == 0) {
    return;
  }
  free(__ptr);
  return;
}


// ===== 007b56f0  FUN_007b56f0 =====

void FUN_007b56f0(void)

{
  return;
}


// ===== 007b56f4  FUN_007b56f4 =====

void FUN_007b56f4(undefined8 *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  code *pcVar2;
  
  if (*(char *)(param_1 + 2) == '\0') {
    __ptr = (void *)*param_1;
    puVar1 = (undefined8 *)param_1[1];
    pcVar2 = (code *)*puVar1;
    if (pcVar2 != (code *)0x0) {
                    /* try { // try from 007b5720 to 007b5727 has its CatchHandler @ 007b5744 */
      (*pcVar2)(__ptr);
    }
    if (puVar1[1] != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 007b5768  FUN_007b5768 =====

void FUN_007b5768(byte *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  code *pcVar7;
  long lVar8;
  
  bVar3 = param_1[0x38];
  if (bVar3 == 0) {
    pvVar1 = *(void **)(param_1 + 0x20);
    puVar2 = *(undefined8 **)(param_1 + 0x28);
    pcVar7 = (code *)*puVar2;
    if (pcVar7 != (code *)0x0) {
                    /* try { // try from 007b5830 to 007b5837 has its CatchHandler @ 007b58d0 */
      (*pcVar7)(pvVar1);
    }
    if (puVar2[1] != 0) {
      free(pvVar1);
    }
    plVar6 = *(long **)(param_1 + 0x30);
    do {
      lVar8 = *plVar6;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar5) {
        *plVar6 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 007b586c to 007b586f has its CatchHandler @ 007b58c8 */
      <alloc::sync::[n]::alloc::sync::Arc<rustls::client::client_conn::ClientConfig>>::drop_slow();
    }
  }
  else {
    if (bVar3 == 3) {
      pvVar1 = *(void **)(param_1 + 0x40);
      puVar2 = *(undefined8 **)(param_1 + 0x48);
      pcVar7 = (code *)*puVar2;
      if (pcVar7 != (code *)0x0) {
                    /* try { // try from 007b57d0 to 007b57d7 has its CatchHandler @ 007b5914 */
        (*pcVar7)(pvVar1);
      }
      if (puVar2[1] != 0) {
        free(pvVar1);
      }
    }
    else {
      if (bVar3 != 4) {
        return;
      }
                    /* try { // try from 007b5794 to 007b579b has its CatchHandler @ 007b5934 */
      FUN_007b44b0(param_1 + 0x48);
      plVar6 = *(long **)(param_1 + 0x40);
      do {
        lVar8 = *plVar6;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar5) {
          *plVar6 = lVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar8 + -1 == 0) {
        DataMemoryBarrier(2,1);
                    /* try { // try from 007b57bc to 007b57bf has its CatchHandler @ 007b58c0 */
        <alloc::sync::[n]::alloc::sync::Arc<rustls::client::client_conn::ClientConfig>>::drop_slow()
        ;
      }
    }
    if ((param_1[0x3a] & 1) != 0) {
      plVar6 = *(long **)(param_1 + 0x30);
      do {
        lVar8 = *plVar6;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar5) {
          *plVar6 = lVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar8 + -1 == 0) {
        DataMemoryBarrier(2,1);
                    /* try { // try from 007b5814 to 007b5817 has its CatchHandler @ 007b58b0 */
        <alloc::sync::[n]::alloc::sync::Arc<rustls::client::client_conn::ClientConfig>>::drop_slow()
        ;
      }
    }
    if ((param_1[0x39] & 1) == 0) {
      return;
    }
  }
  if ((((*param_1 & 1) == 0) && (*(long *)(param_1 + 8) != -1)) && (*(long *)(param_1 + 8) != 0)) {
    free(*(void **)(param_1 + 0x10));
    return;
  }
  return;
}


// ===== 007b59a8  FUN_007b59a8 =====

void FUN_007b59a8(long *param_1)

{
  if (((char)param_1[3] == '\0') && (*param_1 != 0)) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 007b59c8  FUN_007b59c8 =====

void FUN_007b59c8(long *param_1)

{
  if ((*param_1 != -1) && (*param_1 != 0)) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 007b59e8  FUN_007b59e8 =====

void FUN_007b59e8(byte *param_1)

{
  if ((((*param_1 & 1) == 0) && (*(long *)(param_1 + 8) != -1)) && (*(long *)(param_1 + 8) != 0)) {
    free(*(void **)(param_1 + 0x10));
    return;
  }
  return;
}


// ===== 007b5a10  FUN_007b5a10 =====

void FUN_007b5a10(long param_1)

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
                    /* try { // try from 007b5a38 to 007b5a3f has its CatchHandler @ 007b5ce4 */
    (*pcVar4)(pvVar2);
  }
  if (puVar10[1] != 0) {
    free(pvVar2);
  }
  pvVar2 = *(void **)(param_1 + 0x20);
  puVar10 = *(undefined8 **)(param_1 + 0x28);
  pcVar4 = (code *)*puVar10;
  if (pcVar4 != (code *)0x0) {
                    /* try { // try from 007b5a60 to 007b5a67 has its CatchHandler @ 007b5cc8 */
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
  FUN_007b5d64(param_1 + 0xc0);
  return;
}


// ===== 007b5d64  FUN_007b5d64 =====

void FUN_007b5d64(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  
  if ((param_1[0xe] != -1) && (param_1[0xe] != 0)) {
    free((void *)param_1[0xf]);
  }
  uVar8 = param_1[0xd];
  uVar6 = param_1[10];
  if (uVar8 != 0) {
    lVar3 = param_1[0xb];
    uVar4 = param_1[0xc];
    uVar1 = 0;
    if (uVar6 <= uVar4) {
      uVar1 = uVar6;
    }
    lVar5 = uVar4 - uVar1;
    uVar10 = uVar6 - lVar5;
    lVar7 = 0;
    if (uVar10 <= uVar8) {
      lVar7 = uVar8 - uVar10;
    }
    uVar2 = uVar6;
    if (uVar8 <= uVar10) {
      uVar2 = lVar5 + uVar8;
    }
    lVar5 = uVar2 - lVar5;
    if (lVar5 != 0) {
      puVar9 = (undefined8 *)(lVar3 + uVar1 * -0x20 + uVar4 * 0x20 + 0x10);
      do {
        if (puVar9[-1] != 0) {
          free((void *)*puVar9);
        }
        lVar5 = lVar5 + -1;
        puVar9 = puVar9 + 4;
      } while (lVar5 != 0);
    }
    if (uVar10 < uVar8) {
      puVar9 = (undefined8 *)(lVar3 + 0x10);
      do {
        if (puVar9[-1] != 0) {
          free((void *)*puVar9);
        }
        lVar7 = lVar7 + -1;
        puVar9 = puVar9 + 4;
      } while (lVar7 != 0);
    }
  }
  if (uVar6 != 0) {
    free((void *)param_1[0xb]);
  }
  if (*param_1 != 0) {
                    /* try { // try from 007b5e28 to 007b5e2f has its CatchHandler @ 007b5ef8 */
    <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop(param_1 + 1);
  }
  if (*(char *)((long)param_1 + 0x131) != '\x02') {
                    /* try { // try from 007b5e3c to 007b5e43 has its CatchHandler @ 007b5ee4 */
    <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop(param_1 + 0x13);
                    /* try { // try from 007b5e44 to 007b5e4b has its CatchHandler @ 007b5edc */
    <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop(param_1 + 0x1c);
  }
  if (*(char *)((long)param_1 + 0x1e1) == '\x02') {
    return;
  }
                    /* try { // try from 007b5e70 to 007b5e77 has its CatchHandler @ 007b5ec8 */
  <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop(param_1 + 0x29);
  <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop(param_1 + 0x32);
  return;
}


// ===== 007b5f18  FUN_007b5f18 =====

void FUN_007b5f18(ulong *param_1)

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
                    /* try { // try from 007b5ff8 to 007b5ffb has its CatchHandler @ 007b6194 */
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
                    /* try { // try from 007b6074 to 007b607b has its CatchHandler @ 007b6178 */
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
      goto LAB_007b60e0;
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
      goto LAB_007b60e0;
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
LAB_007b60e0:
  if (!bVar3) {
    return;
  }
  DataMemoryBarrier(2,1);
  <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+rustls::server::server_conn::StoresServerSessions>>
  ::drop_slow(param_1);
  return;
}


// ===== 007b61dc  FUN_007b61dc =====

void FUN_007b61dc(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  
  uVar8 = *(ulong *)(param_1 + 0x28);
  uVar6 = *(ulong *)(param_1 + 0x10);
  if (uVar8 != 0) {
    lVar3 = *(long *)(param_1 + 0x18);
    uVar4 = *(ulong *)(param_1 + 0x20);
    uVar1 = 0;
    if (uVar6 <= uVar4) {
      uVar1 = uVar6;
    }
    lVar5 = uVar4 - uVar1;
    uVar10 = uVar6 - lVar5;
    lVar7 = 0;
    if (uVar10 <= uVar8) {
      lVar7 = uVar8 - uVar10;
    }
    uVar2 = uVar6;
    if (uVar8 <= uVar10) {
      uVar2 = lVar5 + uVar8;
    }
    lVar5 = uVar2 - lVar5;
    if (lVar5 != 0) {
      puVar9 = (undefined8 *)(uVar4 * 0x18 + uVar1 * -0x18 + lVar3 + 8);
      do {
        if (puVar9[-1] != 0) {
          free((void *)*puVar9);
        }
        lVar5 = lVar5 + -1;
        puVar9 = puVar9 + 3;
      } while (lVar5 != 0);
    }
    if (uVar10 < uVar8) {
      puVar9 = (undefined8 *)(lVar3 + 8);
      do {
        if (puVar9[-1] != 0) {
          free((void *)*puVar9);
        }
        lVar7 = lVar7 + -1;
        puVar9 = puVar9 + 3;
      } while (lVar7 != 0);
    }
  }
  if (uVar6 != 0) {
    free(*(void **)(param_1 + 0x18));
    return;
  }
  return;
}


// ===== 007b62e8  FUN_007b62e8 =====

void FUN_007b62e8(byte *param_1)

{
  long *__ptr;
  
  if (1 < *param_1) {
    __ptr = *(long **)(param_1 + 8);
                    /* try { // try from 007b6314 to 007b631b has its CatchHandler @ 007b635c */
    (**(code **)(*__ptr + 0x20))(__ptr + 3,__ptr[1],__ptr[2]);
    free(__ptr);
  }
                    /* try { // try from 007b6338 to 007b633f has its CatchHandler @ 007b638c */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x20))
            (param_1 + 0x28,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x007b6358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x20))
            (param_1 + 0x48,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  return;
}


// ===== 007b63b0  FUN_007b63b0 =====

void FUN_007b63b0(ulong param_1)

{
  long local_18;
  
  if ((1 < (param_1 & 3) - 2) && ((param_1 & 3) != 0)) {
    local_18 = param_1 - 1;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
  }
  return;
}


// ===== 007b63f8  FUN_007b63f8 =====

void FUN_007b63f8(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  void *__ptr;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong *puVar7;
  
  uVar3 = *param_1 ^ 0x8000000000000000;
  if (4 < uVar3) {
    uVar3 = 1;
  }
  if (1 < (long)uVar3) {
    if ((uVar3 != 2) && (uVar3 == 3)) {
      return;
    }
LAB_007b6484:
    param_1 = param_1 + 1;
    uVar3 = *param_1;
    if (uVar3 == 0xffffffffffffffff) {
      return;
    }
    goto LAB_007b6704;
  }
  if (uVar3 == 0) {
    return;
  }
  if (uVar3 != 1) goto LAB_007b6484;
  uVar4 = param_1[3];
  uVar3 = uVar4 ^ 0x8000000000000000;
  if (-1 < (long)uVar4) {
    uVar3 = 1;
  }
  switch(uVar3) {
  case 0:
  case 0xb:
  case 0xc:
  case 0x11:
    break;
  case 1:
    if (uVar4 != 0) {
      free((void *)param_1[4]);
    }
    if (param_1[6] != 0) {
      free((void *)param_1[7]);
    }
                    /* try { // try from 007b6558 to 007b655f has its CatchHandler @ 007b6790 */
    FUN_0078abf0(param_1 + 9);
    if (param_1[9] == 0) break;
    __ptr = (void *)param_1[10];
    goto LAB_007b66f4;
  case 2:
                    /* try { // try from 007b663c to 007b6643 has its CatchHandler @ 007b6744 */
    FUN_0078ac28(param_1 + 4);
    goto LAB_007b6644;
  case 3:
                    /* try { // try from 007b64fc to 007b6503 has its CatchHandler @ 007b67c4 */
    FUN_0078ae24(param_1 + 4);
    if (param_1[4] != 0) {
      __ptr = (void *)param_1[5];
      goto LAB_007b66f4;
    }
    break;
  case 4:
                    /* try { // try from 007b6514 to 007b651b has its CatchHandler @ 007b67a8 */
    FUN_0078ab48(param_1 + 4);
    if (param_1[4] == 0) break;
    goto LAB_007b6650;
  case 5:
    if (param_1[4] != 0) {
      free((void *)param_1[5]);
    }
                    /* try { // try from 007b65f0 to 007b65f7 has its CatchHandler @ 007b6748 */
    FUN_0078ac98(param_1 + 7);
    if (param_1[7] != 0) {
      __ptr = (void *)param_1[8];
      goto LAB_007b66f4;
    }
    break;
  default:
    puVar7 = param_1 + 4;
    uVar3 = *puVar7;
    goto joined_r0x007b66c0;
  case 7:
    if (param_1[4] != 0xffffffffffffffff) {
      if (param_1[8] == 0xffffffffffffffff) {
        lVar6 = 0x48;
      }
      else {
        if (param_1[8] != 0) {
          free((void *)param_1[9]);
        }
        if (param_1[0xb] != 0) {
          free((void *)param_1[0xc]);
        }
        lVar6 = 0x70;
      }
      if (*(long *)((long)param_1 + lVar6) != 0) {
        free((void *)((long *)((long)param_1 + lVar6))[1]);
      }
      goto LAB_007b66e4;
    }
    puVar7 = param_1 + 5;
    uVar3 = *puVar7;
joined_r0x007b66c0:
    if (uVar3 == 0xffffffffffffffff) break;
joined_r0x007b66e8:
    if (uVar3 == 0) break;
    __ptr = (void *)puVar7[1];
    goto LAB_007b66f4;
  case 8:
    if (param_1[4] != 0) {
      free((void *)param_1[5]);
    }
    if (param_1[7] != 0) {
      free((void *)param_1[8]);
    }
                    /* try { // try from 007b65a4 to 007b65ab has its CatchHandler @ 007b6778 */
    FUN_0078add4(param_1 + 10);
    if (param_1[10] != 0) {
      __ptr = (void *)param_1[0xb];
      goto LAB_007b66f4;
    }
    break;
  case 9:
    if (param_1[4] != 0) {
      free((void *)param_1[5]);
    }
                    /* try { // try from 007b64a8 to 007b64af has its CatchHandler @ 007b67d8 */
    FUN_0078ac60(param_1 + 7);
    goto LAB_007b669c;
  case 10:
LAB_007b66e4:
    puVar7 = param_1 + 4;
    uVar3 = *puVar7;
    goto joined_r0x007b66e8;
  case 0xe:
    plVar5 = (long *)param_1[4];
    do {
      lVar6 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 007b6630 to 007b6633 has its CatchHandler @ 007b6738 */
      <alloc::sync::[n]::alloc::sync::Arc<rustls::msgs::base::PayloadU16>>::drop_slow();
    }
    break;
  case 0xf:
    if (param_1[4] != 0) {
      free((void *)param_1[5]);
    }
    plVar5 = (long *)param_1[10];
    do {
      lVar6 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 007b6690 to 007b6693 has its CatchHandler @ 007b6728 */
      <alloc::sync::[n]::alloc::sync::Arc<rustls::msgs::base::PayloadU16>>::drop_slow();
    }
                    /* try { // try from 007b6694 to 007b669b has its CatchHandler @ 007b6740 */
    FUN_0078aee0(param_1 + 7);
LAB_007b669c:
    if (param_1[7] == 0) break;
    __ptr = (void *)param_1[8];
    goto LAB_007b66f4;
  case 0x10:
                    /* try { // try from 007b65d0 to 007b65d7 has its CatchHandler @ 007b6764 */
    FUN_0078ac28(param_1 + 4);
LAB_007b6644:
    if (param_1[4] != 0) {
LAB_007b6650:
      __ptr = (void *)param_1[5];
LAB_007b66f4:
      free(__ptr);
    }
  }
  uVar3 = *param_1;
  if (uVar3 != 0xffffffffffffffff) {
LAB_007b6704:
    if (uVar3 != 0) {
      free((void *)param_1[1]);
      return;
    }
  }
  return;
}


// ===== 007b6814  FUN_007b6814 =====

void FUN_007b6814(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 007b6824 to 007b6827 has its CatchHandler @ 007b68b0 */
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
                    /* try { // try from 007b6850 to 007b6877 has its CatchHandler @ 007b68a8 */
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>>
      ::drop_slow();
    }
  }
  if ((param_1[4] != 0) && (param_1[9] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x007b6898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[9] + 0x18))(param_1[10]);
    return;
  }
  return;
}


// ===== 007b68e4  FUN_007b68e4 =====

void FUN_007b68e4(long *param_1)

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


// ===== 007b6930  FUN_007b6930 =====

void FUN_007b6930(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  void *__ptr;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  
  if (*(long *)(param_1 + 0x388) == -1) {
    puVar8 = *(undefined8 **)(param_1 + 0x398);
    __ptr = *(void **)(param_1 + 0x390);
    pcVar2 = (code *)*puVar8;
    if (pcVar2 != (code *)0x0) {
                    /* try { // try from 007b6974 to 007b697b has its CatchHandler @ 007b6ac0 */
      (*pcVar2)(__ptr);
    }
    if (puVar8[1] != 0) {
      free(__ptr);
    }
  }
  else {
                    /* try { // try from 007b6958 to 007b695f has its CatchHandler @ 007b6adc */
    FUN_007b5f18(param_1 + 0x388);
  }
                    /* try { // try from 007b6990 to 007b6997 has its CatchHandler @ 007b6af0 */
  FUN_007b5a10(param_1);
  if (*(long *)(param_1 + 0x368) != 0) {
    free(*(void **)(param_1 + 0x370));
  }
  if (*(long *)(param_1 + 0x400) != 0) {
    free(*(void **)(param_1 + 0x408));
  }
  uVar7 = *(ulong *)(param_1 + 0x3f0);
  if (uVar7 != 0) {
    uVar4 = *(ulong *)(param_1 + 0x3d8);
    uVar3 = *(ulong *)(param_1 + 1000);
    lVar10 = *(long *)(param_1 + 0x3e0);
    uVar1 = 0;
    if (uVar4 <= uVar3) {
      uVar1 = uVar4;
    }
    lVar5 = uVar3 - uVar1;
    uVar9 = uVar4 - lVar5;
    lVar6 = 0;
    if (uVar9 <= uVar7) {
      lVar6 = uVar7 - uVar9;
    }
    if (uVar7 <= uVar9) {
      uVar4 = lVar5 + uVar7;
    }
    lVar5 = uVar4 - lVar5;
    if (lVar5 != 0) {
      puVar8 = (undefined8 *)(uVar3 * 0x18 + uVar1 * -0x18 + lVar10 + 8);
      do {
        if (puVar8[-1] != 0) {
          free((void *)*puVar8);
        }
        lVar5 = lVar5 + -1;
        puVar8 = puVar8 + 3;
      } while (lVar5 != 0);
    }
    if (uVar9 < uVar7) {
      puVar8 = (undefined8 *)(lVar10 + 8);
      do {
        if (puVar8[-1] != 0) {
          free((void *)*puVar8);
        }
        lVar6 = lVar6 + -1;
        puVar8 = puVar8 + 3;
      } while (lVar6 != 0);
    }
  }
  if (*(long *)(param_1 + 0x3d8) != 0) {
    free(*(void **)(param_1 + 0x3e0));
    return;
  }
  return;
}


// ===== 007b6b4c  FUN_007b6b4c =====

void FUN_007b6b4c(long param_1)

{
                    /* try { // try from 007b6b5c to 007b6b5f has its CatchHandler @ 007b6b80 */
  FUN_007dfadc();
  if (*(int *)(param_1 + 0x18) != -1) {
    close(*(int *)(param_1 + 0x18));
  }
  FUN_007b6bac(param_1);
  return;
}


// ===== 007b6bac  FUN_007b6bac =====

void FUN_007b6bac(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 007b6bbc to 007b6bbf has its CatchHandler @ 007b6c50 */
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
                    /* try { // try from 007b6be8 to 007b6c0f has its CatchHandler @ 007b6c48 */
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


// ===== 007b6c8c  FUN_007b6c8c =====

void FUN_007b6c8c(undefined8 *param_1)

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
                    /* try { // try from 007b6cc4 to 007b6ccb has its CatchHandler @ 007b6cf4 */
      (*pcVar1)(__ptr);
    }
    if (puVar2[1] != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 007b6d18  FUN_007b6d18 =====

undefined1  [16] FUN_007b6d18(undefined8 *param_1,uint param_2,long *param_3)

{
  void *__dest;
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  size_t __n;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  void *local_80;
  ulong local_78;
  long local_68;
  
  __dest = (void *)*param_1;
  uVar1 = param_1[1];
  uVar6 = param_1[2];
  __n = param_1[3];
  local_80 = (void *)param_1[5];
  local_78 = param_1[6];
  if (__dest == (void *)0x0) {
    uVar8 = 1;
    if (uVar6 < __n) goto LAB_007b6dbc;
LAB_007b6d90:
    do {
      __n = 0;
      uVar6 = 0;
      uVar7 = local_78;
      if (uVar1 <= local_78) {
        uVar7 = uVar1;
      }
      local_80 = (void *)((long)local_80 + uVar7);
      local_78 = local_78 - uVar7;
      param_1[2] = 0;
      param_1[3] = uVar7;
      param_1[5] = local_80;
      param_1[6] = local_78;
LAB_007b6dbc:
      do {
        while( true ) {
          uVar7 = __n - uVar6;
          uVar9 = uVar7 & 3;
          if (uVar9 < 2) break;
          if (uVar9 == 2) {
                    /* try { // try from 007b6e04 to 007b6e17 has its CatchHandler @ 007b6fb8 */
            lVar10 = core::io::error::os_functions::get_os_functions();
            iVar2 = (**(code **)(lVar10 + 0x10))(uVar7 >> 0x20);
            if (iVar2 == 0) goto LAB_007b6f7c;
          }
          else {
            uVar5 = (uint)(uVar7 >> 0x20);
            if (10 < uVar7 >> 0x22) {
              uVar5 = 0xffffffff;
            }
            if ((uVar5 & 0xff) != 0x23) goto LAB_007b6f7c;
          }
LAB_007b6d88:
          if (__n <= uVar6) goto LAB_007b6d90;
        }
        if (uVar9 == 0) {
          if (*(char *)(uVar7 + 0x10) == '#') goto LAB_007b6d88;
          goto LAB_007b6f7c;
        }
        if (*(char *)(uVar7 + 0x1f) != '#') goto LAB_007b6f7c;
        local_68 = uVar7 - 1;
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_68);
      } while (uVar6 < __n);
    } while( true );
  }
  uVar7 = 0;
  do {
    if (__n <= uVar6) {
      __n = local_78;
      if (uVar1 <= local_78) {
        __n = uVar1;
      }
      local_78 = local_78 - __n;
      memcpy(__dest,local_80,__n);
      uVar6 = 0;
      param_1[5] = (void *)((long)local_80 + __n);
      param_1[6] = local_78;
      param_1[2] = 0;
      param_1[3] = __n;
      local_80 = (void *)((long)local_80 + __n);
    }
    uVar9 = __n - uVar6;
    if (uVar9 < 0x10) {
      uVar3 = 0;
      if (uVar9 == 0) {
        uVar3 = 0;
      }
      else {
        do {
          if ((uint)*(byte *)((long)__dest + uVar3 + uVar6) == (param_2 & 0xff)) {
            auVar11._8_8_ = uVar3;
            auVar11._0_8_ = 1;
            goto LAB_007b6f4c;
          }
          uVar3 = uVar3 + 1;
        } while (uVar9 != uVar3);
        uVar3 = 0;
      }
    }
    else {
      auVar11 = core::slice::memchr::memchr_aligned(param_2,(long)__dest + uVar6,__n - uVar6);
      uVar3 = auVar11._0_8_;
      if (uVar3 == 1) {
LAB_007b6f4c:
        uVar4 = auVar11._8_8_;
        uVar3 = auVar11._0_8_;
        if (uVar9 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (0,uVar4,uVar9,&PTR_s__nix_store_8006w282fgsx3273c878b_00add9e0);
        }
        uVar9 = uVar4 + 1;
      }
    }
    lVar10 = param_3[2];
    if ((ulong)(*param_3 - lVar10) < uVar9) {
      FUN_0079be54(param_3,lVar10,uVar9,1,1);
      lVar10 = param_3[2];
LAB_007b6e5c:
      memcpy((void *)(param_3[1] + lVar10),(void *)((long)__dest + uVar6),uVar9);
    }
    else {
      if (uVar9 != 0) goto LAB_007b6e5c;
      uVar3 = 1;
    }
    uVar4 = uVar6 + uVar9;
    uVar7 = uVar9 + uVar7;
    param_3[2] = lVar10 + uVar9;
    uVar6 = __n;
    if (uVar4 <= __n) {
      uVar6 = uVar4;
    }
    param_1[2] = uVar6;
    if ((uVar3 & 1) != 0) {
      uVar8 = 0;
LAB_007b6f7c:
      auVar12._8_8_ = uVar7;
      auVar12._0_8_ = uVar8;
      return auVar12;
    }
  } while( true );
}


// ===== 007b6fd0  FUN_007b6fd0 =====

undefined1  [16] FUN_007b6fd0(long param_1,uint param_2,long *param_3)

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


// ===== 007b714c  FUN_007b714c =====

undefined1  [16] FUN_007b714c(long *param_1,uint param_2,long *param_3)

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


// ===== 007b72c8  FUN_007b72c8 =====

/* WARNING: Removing unreachable block (ram,0x007b737c) */
/* WARNING: Removing unreachable block (ram,0x007b73a8) */

undefined1  [16] FUN_007b72c8(undefined8 *param_1,uint param_2)

{
  void *__dest;
  ulong uVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  ulong __n;
  void *pvVar5;
  void *__src;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  long local_68;
  
  __dest = (void *)*param_1;
  uVar1 = param_1[1];
  uVar9 = param_1[2];
  __n = param_1[3];
  __src = (void *)param_1[5];
  uVar8 = param_1[6];
  if (__dest == (void *)0x0) {
    uVar7 = 1;
LAB_007b73d4:
    if (__n <= uVar9) {
      __n = 0;
      uVar9 = 0;
      uVar6 = uVar8;
      if (uVar1 <= uVar8) {
        uVar6 = uVar1;
      }
      __src = (void *)((long)__src + uVar6);
      uVar8 = uVar8 - uVar6;
      param_1[2] = 0;
      param_1[3] = uVar6;
      param_1[5] = __src;
      param_1[6] = uVar8;
    }
    uVar6 = __n - uVar9;
    uVar10 = uVar6 & 3;
    if (uVar10 < 2) {
      if (uVar10 == 0) {
        cVar2 = *(char *)(uVar6 + 0x10);
      }
      else {
        cVar2 = *(char *)(uVar6 + 0x1f);
      }
joined_r0x007b7450:
      if (cVar2 != '#') goto LAB_007b74b0;
    }
    else {
      if (uVar10 == 2) {
                    /* try { // try from 007b742c to 007b743f has its CatchHandler @ 007b74d8 */
        lVar3 = core::io::error::os_functions::get_os_functions();
        cVar2 = (**(code **)(lVar3 + 8))(uVar6 >> 0x20);
        goto joined_r0x007b7450;
      }
      if (((uint)(uVar6 >> 0x20) & 0xff) != 0x23) goto LAB_007b74b0;
    }
    if ((1 < uVar10 - 2) && (uVar10 != 0)) {
      local_68 = uVar6 - 1;
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_68);
    }
    goto LAB_007b73d4;
  }
  uVar6 = 0;
  do {
    pvVar5 = __src;
    if (__n <= uVar9) {
      __n = uVar8;
      if (uVar1 <= uVar8) {
        __n = uVar1;
      }
      pvVar5 = (void *)((long)__src + __n);
      uVar8 = uVar8 - __n;
      memcpy(__dest,__src,__n);
      uVar9 = 0;
      param_1[5] = pvVar5;
      param_1[6] = uVar8;
      param_1[2] = 0;
      param_1[3] = __n;
    }
    uVar10 = __n - uVar9;
    if (uVar10 < 0x10) {
      uVar4 = 0;
      if (uVar10 != 0) {
        do {
          if ((uint)*(byte *)((long)__dest + uVar4 + uVar9) == (param_2 & 0xff)) goto LAB_007b7494;
          uVar4 = uVar4 + 1;
        } while (uVar10 != uVar4);
      }
    }
    else {
      auVar11 = core::slice::memchr::memchr_aligned(param_2,(long)__dest + uVar9,__n - uVar9);
      uVar4 = auVar11._8_8_;
      if (auVar11._0_8_ == 1) {
LAB_007b7494:
        uVar9 = uVar9 + uVar4 + 1;
        uVar6 = uVar4 + 1 + uVar6;
        if (uVar9 <= __n) {
          __n = uVar9;
        }
        param_1[2] = __n;
        break;
      }
    }
    uVar6 = uVar10 + uVar6;
    param_1[2] = __n;
    __src = pvVar5;
    uVar9 = __n;
  } while (uVar10 != 0);
  uVar7 = 0;
LAB_007b74b0:
  auVar11._8_8_ = uVar6;
  auVar11._0_8_ = uVar7;
  return auVar11;
}


// ===== 007b74f0  FUN_007b74f0 =====

/* WARNING: Removing unreachable block (ram,0x007b7564) */
/* WARNING: Removing unreachable block (ram,0x007b7590) */

undefined1  [16] FUN_007b74f0(long param_1,uint param_2)

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


// ===== 007b75e4  FUN_007b75e4 =====

/* WARNING: Removing unreachable block (ram,0x007b7658) */
/* WARNING: Removing unreachable block (ram,0x007b7684) */

undefined1  [16] FUN_007b75e4(long *param_1,uint param_2)

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


// ===== 007b76d8  FUN_007b76d8 =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007b76d8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  byte ******ppppppbVar5;
  undefined *puVar6;
  undefined *puVar7;
  size_t sVar8;
  byte bVar9;
  undefined1 *__dest;
  byte *******pppppppbVar10;
  byte ******ppppppbVar11;
  ulong uVar12;
  undefined1 uVar13;
  uint extraout_w8;
  undefined8 uVar14;
  long *plVar15;
  code *pcVar16;
  uint uVar17;
  short *psVar18;
  long lVar19;
  uint uVar20;
  byte *pbVar21;
  undefined8 *puVar22;
  byte *******pppppppbVar23;
  undefined **unaff_x21;
  size_t __n;
  void *pvVar24;
  undefined8 *puVar25;
  byte *******pppppppbVar26;
  byte *******unaff_x27;
  byte *******pppppppbVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [12];
  undefined8 *local_638;
  undefined8 *local_628;
  byte *******local_620;
  byte *******pppppppbStack_618;
  long lStack_610;
  undefined8 uStack_608;
  undefined8 local_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 local_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 local_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 local_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 local_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 local_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  byte *******local_540;
  byte *******pppppppbStack_538;
  byte *******local_530;
  byte *******pppppppbStack_528;
  byte *******local_520;
  byte *******pppppppbStack_518;
  byte *******local_510;
  byte ******local_500;
  undefined6 uStack_4f8;
  undefined2 uStack_4f2;
  undefined6 uStack_4f0;
  undefined8 uStack_4ea;
  byte *******local_4e0;
  byte *******pppppppbStack_4d8;
  byte *******local_4d0;
  byte *******local_4c8;
  byte *******local_3b0;
  undefined8 uStack_3a8;
  byte *******local_3a0;
  byte *******pppppppbStack_398;
  byte *******local_390;
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
  byte *******local_338;
  byte *******pppppppbStack_330;
  undefined8 *local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  byte *******local_258;
  undefined1 *local_250;
  undefined8 *local_248;
  byte ******local_240;
  byte *******local_238;
  byte *******local_230;
  byte *******pppppppbStack_228;
  byte *******local_220;
  byte *******pppppppbStack_218;
  byte *******local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  byte *******pppppppbStack_1b8;
  byte *******local_1b0;
  undefined8 *puStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  byte *******local_150;
  byte *******pppppppbStack_148;
  undefined8 *local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  byte *******local_f0;
  byte *******pppppppbStack_e8;
  byte *******local_e0;
  byte *******pppppppbStack_d8;
  byte *******pppppppbStack_d0;
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
  
  bVar9 = *(byte *)(param_2 + 0x132);
  if (bVar9 < 2) {
    if (bVar9 != 0) {
      core::panicking::panic_const::panic_const_async_fn_resumed
                (&PTR_s__root__cargo_registry_src_index__00addb38);
LAB_007b7fa4:
      core::panicking::panic_const::panic_const_async_fn_resumed_panic
                (&PTR_s__root__cargo_registry_src_index__00addb38);
      uVar17 = extraout_w8;
LAB_007b7fb0:
      if (uVar17 == 1) {
                    /* try { // try from 007b7fc0 to 007b7fdb has its CatchHandler @ 007b8178 */
        core::panicking::panic_const::panic_const_async_fn_resumed
                  (&PTR_s__root__cargo_registry_src_index__00adda40);
      }
      else {
        core::panicking::panic_const::panic_const_async_fn_resumed_panic
                  (&PTR_s__root__cargo_registry_src_index__00adda40);
      }
LAB_007b8f1c:
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x7b8f20);
      (*pcVar16)();
    }
    plVar15 = param_2 + 0xb;
    *(undefined1 *)((long)param_2 + 0x132) = 0;
    param_2[0x13] = param_2[5];
    param_2[0x12] = param_2[4];
    param_2[0x15] = param_2[7];
    param_2[0x14] = param_2[6];
    param_2[0x17] = param_2[9];
    param_2[0x16] = param_2[8];
    param_2[0x18] = param_2[10];
    param_2[0x19] = plVar15;
    param_2[0xf] = param_2[1];
    param_2[0xe] = *param_2;
    param_2[0x11] = param_2[3];
    param_2[0x10] = param_2[2];
LAB_007b77b0:
    *(undefined1 *)((long)param_2 + 0x133) = 0;
    param_2[0x23] = param_2[0x17];
    param_2[0x22] = param_2[0x16];
    param_2[0x1f] = param_2[0x13];
    param_2[0x1e] = param_2[0x12];
    param_2[0x21] = param_2[0x15];
    param_2[0x20] = param_2[0x14];
    param_2[0x24] = param_2[0x18];
    param_2[0x25] = plVar15;
    param_2[0x1b] = param_2[0xf];
    param_2[0x1a] = param_2[0xe];
    param_2[0x1d] = param_2[0x11];
    param_2[0x1c] = param_2[0x10];
                    /* try { // try from 007b77d8 to 007b77e7 has its CatchHandler @ 007b8180 */
    hyper_util::client::legacy::connect::http::get_host_port
              (&local_3b0,*plVar15 + 0x10,param_2 + 0x1a);
    unaff_x21 = (undefined **)pppppppbStack_398;
    pppppppbVar26 = uStack_3a8;
    unaff_x27 = local_3a0;
    pppppppbVar27 = local_3b0;
    if (local_3b0 == (byte *******)0x0) {
      lVar19 = (long)uStack_3a8 + (long)local_3a0;
      *(undefined2 *)(param_2 + 0x26) = pppppppbStack_398._0_2_;
      pppppppbVar27 = (byte *******)0x0;
      do {
        pppppppbVar26 = pppppppbVar27;
        pppppppbVar27 = local_3a0;
        if (pppppppbVar26 == local_3a0) goto LAB_007b78e0;
        lVar1 = (long)uStack_3a8 + (long)pppppppbVar26;
        pbVar21 = (byte *)((long)uStack_3a8 + (long)pppppppbVar26) + 1;
        bVar9 = *(byte *)((long)uStack_3a8 + (long)pppppppbVar26);
        uVar17 = (uint)bVar9;
        if ((char)bVar9 < '\0') {
          uVar20 = *(byte *)(lVar1 + 1) & 0x3f;
          if (uVar17 < 0xe0) {
            uVar17 = uVar20 | (uVar17 & 0x1f) << 6;
            pbVar21 = (byte *)(lVar1 + 2);
          }
          else {
            uVar20 = *(byte *)(lVar1 + 2) & 0x3f | uVar20 << 6;
            if (uVar17 < 0xf0) {
              uVar17 = uVar20 | (uVar17 & 0x1f) << 0xc;
              pbVar21 = (byte *)(lVar1 + 3);
            }
            else {
              uVar17 = *(byte *)(lVar1 + 3) & 0x3f | uVar20 << 6 | (uVar17 & 7) << 0x12;
              pbVar21 = (byte *)(lVar1 + 4);
            }
          }
        }
        pppppppbVar27 = (byte *******)(pbVar21 + ((long)local_3a0 - lVar19));
      } while (uVar17 == 0x5b);
      lVar19 = (long)uStack_3a8 + (long)pppppppbVar26;
      pppppppbVar27 = pppppppbVar26;
LAB_007b78e0:
      pvVar24 = (void *)((long)uStack_3a8 + (long)pppppppbVar27);
      sVar8 = (long)local_3a0 - (long)pppppppbVar27;
      do {
        __n = sVar8;
        if (__n == 0) break;
        pbVar21 = (byte *)((long)pvVar24 + (__n - 1));
        uVar17 = (uint)(char)*pbVar21;
        if ((int)uVar17 < 0) {
          pbVar21 = (byte *)((long)pvVar24 + (__n - 2));
          bVar9 = *pbVar21;
          uVar20 = (uint)(char)bVar9;
          if ((int)(uVar20 + 0x40) < 0 == SCARRY4(uVar20,0x40)) {
            uVar20 = uVar20 & 0x1f;
          }
          else {
            pbVar21 = (byte *)((long)pvVar24 + (__n - 3));
            bVar2 = *pbVar21;
            if ((char)bVar2 + 0x40 < 0 == SCARRY4((int)(char)bVar2,0x40)) {
              uVar20 = (int)(char)bVar2 & 0xf;
            }
            else {
              pbVar21 = (byte *)((long)pvVar24 + (__n - 4));
              uVar20 = bVar2 & 0x3f | (*pbVar21 & 7) << 6;
            }
            uVar20 = bVar9 & 0x3f | uVar20 << 6;
          }
          uVar17 = uVar17 & 0x3f | uVar20 << 6;
        }
        sVar8 = (long)pbVar21 - lVar19;
      } while (uVar17 == 0x5d);
                    /* try { // try from 007b7968 to 007b7977 has its CatchHandler @ 007b8124 */
      <hyper_util::client::legacy::connect::dns::[c]::hyper_util::client::legacy::connect::dns::SocketAddrs>
      ::try_parse(&local_4e0,pvVar24,__n);
      if (local_4e0 != (byte *******)0x0) {
        *(undefined1 *)((long)param_2 + 0x133) = 1;
        uStack_3a8 = pppppppbStack_4d8;
        local_3b0 = local_4e0;
        local_3a0 = local_4d0;
LAB_007b7b58:
        *(undefined1 *)((long)param_2 + 0x133) = 0;
                    /* try { // try from 007b7b78 to 007b7b87 has its CatchHandler @ 007b8120 */
        pppppppbStack_398 = local_4c8;
        <hyper_util::client::legacy::connect::http::[c]::hyper_util::client::legacy::connect::http::ConnectingTcp>
        ::new(&local_620,&local_3b0,*(long *)param_2[0x25] + 0x10);
        *(undefined1 *)(param_2 + 0xf9) = 0;
        param_2[0x3c] = uStack_578;
        param_2[0x3b] = local_580;
        param_2[0x3e] = uStack_568;
        param_2[0x3d] = uStack_570;
        param_2[0x40] = uStack_558;
        param_2[0x3f] = local_560;
        param_2[0x42] = uStack_548;
        param_2[0x41] = uStack_550;
        param_2[0x34] = uStack_5b8;
        param_2[0x33] = local_5c0;
        param_2[0x36] = uStack_5a8;
        param_2[0x35] = uStack_5b0;
        param_2[0x38] = uStack_598;
        param_2[0x37] = local_5a0;
        param_2[0x3a] = uStack_588;
        param_2[0x39] = uStack_590;
        param_2[0x2c] = uStack_5f8;
        param_2[0x2b] = local_600;
        param_2[0x2e] = uStack_5e8;
        param_2[0x2d] = uStack_5f0;
        param_2[0x30] = uStack_5d8;
        param_2[0x2f] = local_5e0;
        param_2[0x32] = uStack_5c8;
        param_2[0x31] = uStack_5d0;
        param_2[0x28] = pppppppbStack_618;
        param_2[0x27] = local_620;
        param_2[0x2a] = uStack_608;
        param_2[0x29] = lStack_610;
LAB_007b7bd0:
        puVar25 = param_2 + 0x27;
        *(undefined2 *)((long)param_2 + 0x7c9) = 0;
        param_2[0x58] = param_2[0x3c];
        param_2[0x57] = param_2[0x3b];
        param_2[0x5a] = param_2[0x3e];
        param_2[0x59] = param_2[0x3d];
        param_2[0x5c] = param_2[0x40];
        param_2[0x5b] = param_2[0x3f];
        param_2[0x5e] = param_2[0x42];
        param_2[0x5d] = param_2[0x41];
        param_2[0x50] = param_2[0x34];
        param_2[0x4f] = param_2[0x33];
        param_2[0x52] = param_2[0x36];
        param_2[0x51] = param_2[0x35];
        param_2[0x54] = param_2[0x38];
        param_2[0x53] = param_2[0x37];
        param_2[0x56] = param_2[0x3a];
        param_2[0x55] = param_2[0x39];
        param_2[0x48] = param_2[0x2c];
        param_2[0x47] = param_2[0x2b];
        param_2[0x4a] = param_2[0x2e];
        param_2[0x49] = param_2[0x2d];
        param_2[0x44] = param_2[0x28];
        param_2[0x43] = *puVar25;
        param_2[0x46] = param_2[0x2a];
        param_2[0x45] = param_2[0x29];
        param_2[0x4c] = param_2[0x30];
        param_2[0x4b] = param_2[0x2f];
        param_2[0x4e] = param_2[0x32];
        param_2[0x4d] = param_2[0x31];
        if (param_2[0x43] != 2) {
          puVar22 = param_2 + 0x74;
          param_2[0x70] = param_2[0x38];
          param_2[0x6f] = param_2[0x37];
          param_2[0x72] = param_2[0x3a];
          param_2[0x71] = param_2[0x39];
          param_2[0xa9] = param_2 + 0x58;
          param_2[0xed] = param_2[0x30];
          param_2[0xec] = param_2[0x2f];
          param_2[0x68] = param_2[0x30];
          param_2[0x67] = param_2[0x2f];
          param_2[0x6a] = param_2[0x32];
          param_2[0x69] = param_2[0x31];
          param_2[0xef] = param_2[0x32];
          param_2[0xee] = param_2[0x31];
          param_2[0xf1] = param_2[0x34];
          param_2[0xf0] = param_2[0x33];
          param_2[0x6c] = param_2[0x34];
          param_2[0x6b] = param_2[0x33];
          param_2[0x6e] = param_2[0x36];
          param_2[0x6d] = param_2[0x35];
          param_2[0xe9] = param_2[0x2c];
          param_2[0xe8] = param_2[0x2b];
          *(undefined1 *)((long)param_2 + 0x559) = 0;
          param_2[0x60] = param_2[0x28];
          param_2[0x5f] = *puVar25;
          param_2[0x62] = param_2[0x2a];
          param_2[0x61] = param_2[0x29];
          param_2[0xe1] = param_2 + 0x6e;
          *(undefined1 *)((long)param_2 + 0x719) = 0;
          param_2[100] = param_2[0x2c];
          param_2[99] = param_2[0x2b];
          param_2[0x66] = param_2[0x2e];
          param_2[0x65] = param_2[0x2d];
          param_2[0xe5] = param_2[0x28];
          param_2[0xe4] = *puVar25;
          param_2[0x73] = param_2[0x3b];
          param_2[0xe7] = param_2[0x2a];
          param_2[0xe6] = param_2[0x29];
          param_2[0xaa] = param_2[0x5e];
          param_2[0xe2] = param_2[0x5e];
          param_2[0xfa] = param_2 + 0xac;
          *(undefined1 *)((long)param_2 + 0x7ca) = 0;
          param_2[0xf2] = param_2[0x35];
          param_2[0xeb] = param_2[0x2e];
          param_2[0xea] = param_2[0x2d];
          param_2[0xfb] = puVar22;
          param_2[0xfc] = param_2 + 0xe4;
LAB_007b7d4c:
                    /* try { // try from 007b7d4c to 007b7d73 has its CatchHandler @ 007b8194 */
          FUN_007c1154(&local_3b0,param_2 + 0xfb,param_3);
          if (local_3b0 != (byte *******)0x2) {
            puVar22 = (undefined8 *)param_2[0xfa];
            param_2[0xfb] = 0;
            pppppppbStack_518 = pppppppbStack_398;
            local_520 = local_3a0;
            local_510 = local_390;
            param_2[0xf3] = local_3b0;
            param_2[0xf4] = uStack_3a8;
            param_2[0xf6] = pppppppbStack_398;
            param_2[0xf5] = local_3a0;
            param_2[0xf7] = local_390;
            param_2[0xf8] = param_2[0xfc];
            uVar14 = 1;
LAB_007b7e90:
            param_2[0xfa] = local_3b0;
            *(undefined1 *)((long)param_2 + 0x7c9) = 1;
            param_2[0xfb] = uStack_3a8;
            param_2[0xfd] = pppppppbStack_398;
            param_2[0xfc] = local_3a0;
            param_2[0xfe] = local_390;
            local_230 = local_3a0;
            pppppppbStack_228 = pppppppbStack_398;
            local_220 = local_390;
            if (local_3b0 != (byte *******)0x0) {
              param_2[0xff] = uVar14;
              param_2[0x100] = puVar22;
              goto LAB_007b7ebc;
            }
            pppppppbVar26 = (byte *******)param_2[0xfc];
            unaff_x27 = (byte *******)param_2[0xfd];
            pppppppbVar23 = (byte *******)0x0;
            unaff_x21 = (undefined **)param_2[0xfe];
            *(undefined1 *)((long)param_2 + 0x7c9) = 0;
            pppppppbVar27 = uStack_3a8;
            goto LAB_007b7f18;
          }
          uVar12 = <tokio::time::sleep::Sleep_as_core::future::future::Future>::poll
                             (param_2[0xfc],param_3);
          if ((uVar12 & 1) == 0) {
            param_2[0xf3] = 2;
            param_2[0xf6] = pppppppbStack_518;
            param_2[0xf5] = local_520;
            uVar14 = param_2[0xfa];
            param_2[0xf4] = puVar22;
            param_2[0xf7] = local_510;
            param_2[0xfa] = puVar22;
            param_2[0xfb] = uVar14;
LAB_007b7df4:
                    /* try { // try from 007b7df8 to 007b7e27 has its CatchHandler @ 007b8190 */
            FUN_007c1154(&local_3b0,param_2 + 0xfa,param_3);
            if (local_3b0 == (byte *******)0x2) {
              FUN_007c1154(&local_3b0,param_2 + 0xfb,param_3);
              if (local_3b0 == (byte *******)0x2) {
                uVar13 = 5;
                goto LAB_007b8d50;
              }
              param_2[0xfa] = 0;
              uVar14 = 1;
              local_4e0 = local_3a0;
              pppppppbStack_4d8 = pppppppbStack_398;
              local_4d0 = local_390;
            }
            else {
              uVar14 = 0;
              puVar22 = (undefined8 *)param_2[0xfb];
              param_2[0xfa] = 0;
              local_4e0 = local_3a0;
              pppppppbStack_4d8 = pppppppbStack_398;
              local_4d0 = local_390;
            }
            goto LAB_007b7e90;
          }
          uVar13 = 4;
          goto LAB_007b8d50;
        }
        uVar14 = param_2[0x5e];
        puVar22 = param_2 + 0x58;
        param_2[0x12f] = puVar22;
        param_2[0x130] = uVar14;
        *(undefined1 *)((long)param_2 + 0x989) = 0;
LAB_007b7c3c:
        param_2[0x12d] = uVar14;
        param_2[300] = puVar22;
        *(undefined1 *)(param_2 + 0x131) = 1;
        param_2[0xfa] = 0;
        param_2[0x12e] = puVar22;
        psVar18 = (short *)puVar22[1];
        if (psVar18 != (short *)puVar22[3]) {
          while( true ) {
            puVar22[1] = psVar18 + 0x10;
            local_500 = *(byte *******)(psVar18 + 1);
            uStack_4f8 = (undefined6)*(undefined8 *)(psVar18 + 5);
            uStack_4ea = *(undefined8 *)(psVar18 + 0xc);
            uVar14 = *(undefined8 *)(psVar18 + 8);
            uStack_4f2 = (undefined2)uVar14;
            uStack_4f0 = (undefined6)((ulong)uVar14 >> 0x10);
            if (*psVar18 == 2) break;
            *(short *)(param_2 + 0xfe) = *psVar18;
            param_2[0x101] = uStack_4ea;
            param_2[0x100] = uVar14;
            *(ulong *)((long)param_2 + 0x7fa) = CONCAT26(uStack_4f2,uStack_4f8);
            *(byte *******)((long)param_2 + 0x7f2) = local_500;
            puVar6 = PTR___CALLSITE_00b00ee8;
            if (3 < *(long *)PTR_MAX_LEVEL_00b00e60 - 2U) {
              bVar9 = PTR___CALLSITE_00b00ee8[0x10];
              if (2 < bVar9) {
                    /* try { // try from 007b8da0 to 007b8dab has its CatchHandler @ 007b8f2c */
                bVar9 = <tracing_core::callsite::tracing_core::callsite::DefaultCallsite>::register
                                  (PTR___CALLSITE_00b00ee8);
              }
                    /* try { // try from 007b8314 to 007b8317 has its CatchHandler @ 007b9084 */
              if ((bVar9 != 0) &&
                 (uVar12 = tracing::__macro_support::__is_enabled(*(undefined8 *)puVar6),
                 (uVar12 & 1) != 0)) {
                lVar19 = *(long *)puVar6;
                if (*(byte ********)(lVar19 + 0x38) == (byte *******)0x0) {
                    /* try { // try from 007b8e7c to 007b8e93 has its CatchHandler @ 007b8fd4 */
                    /* WARNING: Subroutine does not return */
                  core::option::expect_failed
                            (&DAT_002e3d4d,0x22,&PTR_s__root__cargo_registry_src_index__00addad8);
                }
                pppppppbStack_398 = *(byte ********)(lVar19 + 0x48);
                local_3a0 = *(byte ********)(lVar19 + 0x40);
                local_390 = (byte *******)0x0;
                local_220 = (byte *******)(lVar19 + 0x30);
                local_3b0 = (byte *******)*local_220;
                pppppppbStack_e8 = (byte *******)PTR_fmt_00b00ef0;
                pppppppbStack_148 = (byte *******)&local_f0;
                local_150 = (byte *******)&DAT_002ad4fb;
                local_4e0 = (byte *******)&local_3b0;
                pppppppbStack_4d8 = (byte *******)&local_150;
                local_4d0 = (byte *******)&DAT_00adda70;
                local_230 = (byte *******)&local_4e0;
                pppppppbStack_228 = (byte *******)&DAT_00000001;
                    /* try { // try from 007b838c to 007b8393 has its CatchHandler @ 007b8fd8 */
                uStack_3a8 = *(byte ********)(lVar19 + 0x38);
                local_f0 = (byte *******)(param_2 + 0xfe);
                <tracing_core::event::tracing_core::event::Event>::dispatch(lVar19,&local_230);
              }
            }
            local_628 = param_2 + 0xfa;
                    /* try { // try from 007b83a4 to 007b83af has its CatchHandler @ 007b90f4 */
            hyper_util::client::legacy::connect::http::connect
                      (&local_3b0,param_2 + 0xfe,param_2[0x12d],*(undefined8 *)(param_2[300] + 0x20)
                       ,*(undefined4 *)(param_2[300] + 0x28));
            unaff_x21 = (undefined **)local_390;
            unaff_x27 = pppppppbStack_398;
            pppppppbVar26 = local_3a0;
            pppppppbVar27 = uStack_3a8;
            if (((ulong)local_3b0 & 1) != 0) {
              pppppppbVar23 = (byte *******)&DAT_00000001;
              pvVar24 = (void *)*local_628;
joined_r0x007b8ac8:
              if (pvVar24 != (void *)0x0) {
                if (param_2[0xfb] != 0) {
                  free(pvVar24);
                }
                pvVar24 = (void *)param_2[0xfc];
                if (pvVar24 != (void *)0x0) {
                  puVar22 = (undefined8 *)param_2[0xfd];
                  pcVar16 = (code *)*puVar22;
                  if (pcVar16 != (code *)0x0) {
                    /* try { // try from 007b8af4 to 007b8afb has its CatchHandler @ 007b8f54 */
                    (*pcVar16)(pvVar24);
                  }
                  if (puVar22[1] != 0) {
                    free(pvVar24);
                  }
                }
              }
              goto LAB_007b8b90;
            }
            memcpy(&local_4e0,&uStack_388,0x130);
            param_2[0x102] = pppppppbVar27;
            param_2[0x103] = pppppppbVar26;
            param_2[0x104] = unaff_x27;
            param_2[0x105] = unaff_x21;
            memcpy(param_2 + 0x106,&local_4e0,0x130);
LAB_007b83fc:
            local_628 = param_2 + 0xfa;
            bVar9 = *(byte *)(param_2 + 0x110);
            if (bVar9 < 3) {
              if (bVar9 != 0) {
                if (bVar9 == 1) {
                    /* try { // try from 007b8e2c to 007b8e37 has its CatchHandler @ 007b90ec */
                  core::panicking::panic_const::panic_const_async_fn_resumed
                            (&PTR_s__root__cargo_registry_src_index__00addb20);
                }
                else {
                    /* try { // try from 007b8e4c to 007b8e57 has its CatchHandler @ 007b90ec */
                  core::panicking::panic_const::panic_const_async_fn_resumed_panic
                            (&PTR_s__root__cargo_registry_src_index__00addb20);
                }
                goto LAB_007b8f1c;
              }
              uVar17 = *(uint *)(param_2 + 0x103);
              unaff_x21 = (undefined **)(ulong)uVar17;
              if (uVar17 == 0xffffffff) {
                param_2[0x116] = param_2[0x109];
                param_2[0x115] = param_2[0x108];
                param_2[0x118] = param_2[0x10b];
                param_2[0x117] = param_2[0x10a];
                param_2[0x11a] = param_2[0x10d];
                param_2[0x119] = param_2[0x10c];
                param_2[0x11c] = param_2[0x10f];
                param_2[0x11b] = param_2[0x10e];
                param_2[0x112] = param_2[0x105];
                param_2[0x111] = param_2[0x104];
                param_2[0x114] = param_2[0x107];
                param_2[0x113] = param_2[0x106];
                bVar9 = *(byte *)(param_2 + 0x11c);
                goto joined_r0x007b855c;
              }
              uStack_128 = param_2[0x109];
              local_130 = param_2[0x108];
              uStack_118 = param_2[0x10b];
              uStack_120 = param_2[0x10a];
              uStack_108 = param_2[0x10d];
              local_110 = param_2[0x10c];
              uVar14 = param_2[0x102];
              uStack_f8 = param_2[0x10f];
              uStack_100 = param_2[0x10e];
              pppppppbStack_148 = (byte *******)param_2[0x105];
              local_150 = (byte *******)param_2[0x104];
              uStack_138 = param_2[0x107];
              local_140 = (undefined8 *)param_2[0x106];
                    /* try { // try from 007b84d8 to 007b850f has its CatchHandler @ 007b90c8 */
              auVar29 = <tokio::time::instant::tokio::time::instant::Instant>::now();
              local_f0 = auVar29._0_8_;
              pppppppbStack_e8 = (byte *******)CONCAT44(pppppppbStack_e8._4_4_,auVar29._8_4_);
              auVar28 = <tokio::time::instant::tokio::time::instant::Instant>::checked_add
                                  (&local_f0,uVar14,uVar17);
              if (auVar28._8_4_ == -1) {
                    /* try { // try from 007b8654 to 007b865f has its CatchHandler @ 007b90c8 */
                <tokio::time::sleep::tokio::time::sleep::Sleep>::far_future(&local_f0,0);
              }
              else {
                <tokio::time::sleep::tokio::time::sleep::Sleep>::new_timeout
                          (&local_f0,auVar28._0_8_,auVar28._8_8_,0,
                           &PTR_s__root__cargo_registry_src_index__00addb08);
              }
              uStack_310 = uStack_128;
              local_318 = local_130;
              uStack_300 = uStack_118;
              local_308 = uStack_120;
              local_340 = local_80;
              uStack_2f0 = uStack_108;
              local_2f8 = local_110;
              uStack_2e0 = uStack_f8;
              local_2e8 = uStack_100;
              pppppppbStack_330 = pppppppbStack_148;
              local_338 = local_150;
              uStack_320 = uStack_138;
              local_328 = local_140;
              uStack_358 = uStack_98;
              local_360 = local_a0;
              uStack_348 = uStack_88;
              local_350 = uStack_90;
              local_160 = uStack_f8;
              uStack_378 = uStack_b8;
              local_380 = local_c0;
              uStack_368 = uStack_a8;
              local_370 = uStack_b0;
              param_2[299] = uStack_f8;
              uStack_3a8 = pppppppbStack_e8;
              local_3b0 = local_f0;
              pppppppbStack_398 = pppppppbStack_d8;
              local_3a0 = local_e0;
              uStack_388 = uStack_c8;
              local_390 = pppppppbStack_d0;
              pppppppbStack_218 = pppppppbStack_d8;
              local_220 = local_e0;
              pppppppbStack_228 = pppppppbStack_e8;
              local_230 = local_f0;
              uStack_1d8 = uStack_98;
              local_1e0 = local_a0;
              uStack_1e8 = uStack_a8;
              local_1f0 = uStack_b0;
              uStack_1f8 = uStack_b8;
              local_200 = local_c0;
              uStack_208 = uStack_c8;
              local_210 = pppppppbStack_d0;
              uStack_198 = local_130;
              local_1a0 = uStack_138;
              puStack_1a8 = local_140;
              local_1b0 = pppppppbStack_148;
              pppppppbStack_1b8 = local_150;
              local_1c0 = local_80;
              uStack_1c8 = uStack_88;
              local_1d0 = uStack_90;
              uStack_178 = local_110;
              local_180 = uStack_118;
              uStack_188 = uStack_120;
              local_190 = uStack_128;
              uStack_168 = uStack_100;
              local_170 = uStack_108;
              param_2[0x126] = uStack_120;
              param_2[0x125] = uStack_128;
              param_2[0x128] = local_110;
              param_2[0x127] = uStack_118;
              param_2[0x12a] = uStack_100;
              param_2[0x129] = uStack_108;
              param_2[0x11e] = uStack_88;
              param_2[0x11d] = uStack_90;
              param_2[0x120] = local_150;
              param_2[0x11f] = local_80;
              param_2[0x122] = local_140;
              param_2[0x121] = pppppppbStack_148;
              param_2[0x124] = local_130;
              param_2[0x123] = uStack_138;
              param_2[0x116] = uStack_c8;
              param_2[0x115] = pppppppbStack_d0;
              param_2[0x118] = uStack_b8;
              param_2[0x117] = local_c0;
              param_2[0x11a] = uStack_a8;
              param_2[0x119] = uStack_b0;
              param_2[0x11c] = uStack_98;
              param_2[0x11b] = local_a0;
              param_2[0x112] = pppppppbStack_e8;
              param_2[0x111] = local_f0;
              param_2[0x114] = pppppppbStack_d8;
              param_2[0x113] = local_e0;
LAB_007b8764:
                    /* try { // try from 007b8764 to 007b8773 has its CatchHandler @ 007b90b8 */
              FUN_00773860(&local_3b0,param_2 + 0x111,param_3);
              unaff_x21 = (undefined **)pppppppbStack_398;
              unaff_x27 = local_3a0;
              pppppppbVar26 = uStack_3a8;
              pppppppbVar23 = local_3b0;
              if (local_3b0 == (byte *******)&DAT_fffffffffffffffe) {
                uVar13 = 3;
LAB_007b8d44:
                *(undefined1 *)(param_2 + 0x110) = uVar13;
                uVar13 = 3;
                *(undefined1 *)((long)param_2 + 0x989) = 3;
                goto LAB_007b8d50;
              }
              if (*(char *)(param_2 + 299) == '\x03') {
                    /* try { // try from 007b87a8 to 007b87af has its CatchHandler @ 007b8fe0 */
                FUN_007b4ff8(param_2 + 0x124);
                *(undefined1 *)((long)param_2 + 0x959) = 0;
              }
              else if (*(char *)(param_2 + 299) == '\0') {
                close(*(int *)(param_2 + 0x12a));
              }
                    /* try { // try from 007b87b4 to 007b87bb has its CatchHandler @ 007b90b0 */
              pppppppbVar10 = (byte *******)FUN_007b6814(param_2 + 0x111);
              if ((pppppppbVar23 != (byte *******)0x2) &&
                 (pppppppbVar23 == (byte *******)0xffffffffffffffff)) {
                pppppppbVar23 = (byte *******)0x2;
                    /* try { // try from 007b87d0 to 007b87db has its CatchHandler @ 007b8fdc */
                pppppppbVar10 =
                     (byte *******)
                     <alloc::io::error::core::io::error::Error>::new<tokio::time::error::Elapsed>
                               (0x16);
                pppppppbVar26 = pppppppbVar10;
              }
            }
            else {
              if (bVar9 == 3) goto LAB_007b8764;
              bVar9 = *(byte *)(param_2 + 0x11c);
joined_r0x007b855c:
              if (1 < bVar9) {
                if (bVar9 == 3) {
                  bVar9 = *(byte *)((long)param_2 + 0x8d4);
                  if (bVar9 < 2) {
                    if (bVar9 == 0) {
                      uVar12 = (ulong)*(uint *)(param_2 + 0x11a);
                      goto LAB_007b8584;
                    }
                    core::panicking::panic_const::panic_const_async_fn_resumed
                              (&PTR_s__root__cargo_registry_src_index__00adda28);
                  }
                  else {
                    if (bVar9 == 3) {
                      puVar22 = (undefined8 *)param_2[0x119];
LAB_007b85cc:
                    /* try { // try from 007b85cc to 007b85d7 has its CatchHandler @ 007b9048 */
                      <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>
                      ::poll_write_ready(&local_3b0,puVar22,param_3);
                      if (uStack_3a8._1_1_ != -1) {
                        pppppppbVar26 = local_3b0;
                        if (uStack_3a8._1_1_ == '\x02') {
LAB_007b8610:
                    /* try { // try from 007b8610 to 007b8617 has its CatchHandler @ 007b8ffc */
                          FUN_007dfadc(param_2 + 0x115);
                          if (*(int *)(param_2 + 0x118) != -1) {
                            close(*(int *)(param_2 + 0x118));
                          }
                    /* try { // try from 007b8628 to 007b862f has its CatchHandler @ 007b8ff8 */
                          FUN_007b6bac(param_2 + 0x115);
LAB_007b8630:
                          *(undefined1 *)((long)param_2 + 0x8d4) = 1;
                          pppppppbVar23 = (byte *******)0x2;
                        }
                        else {
                          if (*(int *)(param_2 + 0x118) == -1) {
                    /* try { // try from 007b8dc8 to 007b8dd3 has its CatchHandler @ 007b9124 */
                    /* WARNING: Subroutine does not return */
                            core::option::unwrap_failed
                                      (&PTR_s__root__cargo_registry_src_index__00adfed0);
                          }
                    /* try { // try from 007b8600 to 007b8603 has its CatchHandler @ 007b8fa8 */
                          auVar28 = <mio::net::tcp::stream::mio::net::tcp::stream::TcpStream>::
                                    take_error();
                          pppppppbVar26 = auVar28._8_8_;
                          if (((auVar28 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                             (pppppppbVar26 != (byte *******)0x0)) goto LAB_007b8610;
                          pppppppbVar23 = (byte *******)param_2[0x115];
                          pppppppbVar26 = (byte *******)param_2[0x116];
                          unaff_x27 = (byte *******)param_2[0x117];
                          unaff_x21 = (undefined **)param_2[0x118];
                          *(undefined1 *)((long)param_2 + 0x8d4) = 1;
                          if (pppppppbVar23 == (byte *******)0xffffffffffffffff) goto LAB_007b8d38;
                        }
                    /* try { // try from 007b863c to 007b8643 has its CatchHandler @ 007b9088 */
                        pppppppbVar10 = (byte *******)FUN_007b4ff8(param_2 + 0x115);
                        *(undefined1 *)((long)param_2 + 0x8e1) = 0;
                        goto LAB_007b8648;
                      }
                      *(undefined1 *)((long)param_2 + 0x8d4) = 3;
LAB_007b8d38:
                      *(undefined1 *)(param_2 + 0x11c) = 3;
                      uVar13 = 4;
                      goto LAB_007b8d44;
                    }
                    /* try { // try from 007b8e98 to 007b8eb3 has its CatchHandler @ 007b904c */
                    core::panicking::panic_const::panic_const_async_fn_resumed_panic
                              (&PTR_s__root__cargo_registry_src_index__00adda28);
                  }
                }
                else {
                    /* try { // try from 007b8e5c to 007b8e77 has its CatchHandler @ 007b908c */
                  core::panicking::panic_const::panic_const_async_fn_resumed_panic
                            (&PTR_s__root__cargo_registry_src_index__00adda10);
                }
                goto LAB_007b8f1c;
              }
              if (bVar9 != 0) {
                core::panicking::panic_const::panic_const_async_fn_resumed
                          (&PTR_s__root__cargo_registry_src_index__00adda10);
                goto LAB_007b8f1c;
              }
              pppppppbStack_228 = (byte *******)param_2[0x112];
              local_230 = (byte *******)param_2[0x111];
              pppppppbStack_218 = (byte *******)param_2[0x114];
              local_220 = (byte *******)param_2[0x113];
              *(undefined1 *)((long)param_2 + 0x8e1) = 1;
              *(undefined4 *)((long)param_2 + 0x8dc) = *(undefined4 *)(param_2 + 0x11b);
                    /* try { // try from 007b8440 to 007b8457 has its CatchHandler @ 007b9094 */
              <socket2[797b7815e2a0656b]::sockaddr::SockAddr_as_core[bcece726f298455b]::convert::From<core[bcece726f298455b]::net::socket_addr::SocketAddr>>
              ::from(&local_3b0,&local_230);
              pppppppbVar26 =
                   (byte *******)
                   <socket2::socket::socket2::socket::Socket>::connect
                             ((long)param_2 + 0x8dc,&local_3b0);
              if ((pppppppbVar26 == (byte *******)0x0) ||
                 (((1 < ((ulong)pppppppbVar26 & 3) && (((ulong)pppppppbVar26 & 3) != 3)) &&
                  ((ulong)pppppppbVar26 >> 0x20 == 0x73)))) {
                *(undefined1 *)((long)param_2 + 0x8e1) = 0;
                    /* try { // try from 007b8488 to 007b848b has its CatchHandler @ 007b8fa4 */
                uVar12 = <mio::net::tcp::stream::TcpStream_as_std::os::fd::raw::FromRawFd>::
                         from_raw_fd(*(undefined4 *)((long)param_2 + 0x8dc));
                *(int *)(param_2 + 0x11a) = (int)uVar12;
                *(undefined1 *)((long)param_2 + 0x8d4) = 0;
LAB_007b8584:
                    /* try { // try from 007b8584 to 007b858b has its CatchHandler @ 007b9024 */
                puVar22 = param_2 + 0x115;
                <tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::new
                          (&local_3b0,uVar12);
                pppppppbVar26 = uStack_3a8;
                if (local_3b0 != (byte *******)0x2) {
                  param_2[0x115] = local_3b0;
                  param_2[0x116] = uStack_3a8;
                  pppppppbStack_e8 = pppppppbStack_398;
                  local_f0 = local_3a0;
                  param_2[0x118] = pppppppbStack_398;
                  param_2[0x117] = local_3a0;
                  param_2[0x119] = puVar22;
                  goto LAB_007b85cc;
                }
                goto LAB_007b8630;
              }
              uVar17 = close(*(int *)((long)param_2 + 0x8dc));
              pppppppbVar10 = (byte *******)(ulong)uVar17;
              pppppppbVar23 = (byte *******)0x2;
              *(undefined1 *)((long)param_2 + 0x8e1) = 0;
LAB_007b8648:
              *(undefined1 *)(param_2 + 0x11c) = 1;
            }
            pppppppbVar27 = pppppppbVar23;
            if (pppppppbVar23 == (byte *******)0x2) {
              __rustc::__rust_no_alloc_shim_is_unstable_v2(pppppppbVar10);
              pppppppbVar27 = (byte *******)FUN_004b25a4(0x11,1);
              ppppppbVar5 = _UNK_002e3d8a;
              ppppppbVar11 = _DAT_002e3d82;
              if (pppppppbVar27 == (byte *******)0x0) {
                    /* try { // try from 007b8e3c to 007b8e47 has its CatchHandler @ 007b909c */
                    /* WARNING: Subroutine does not return */
                alloc::alloc::handle_alloc_error(1,0x11);
              }
              *(undefined1 *)(pppppppbVar27 + 2) = 0x72;
              pppppppbVar27[1] = ppppppbVar5;
              *pppppppbVar27 = ppppppbVar11;
              local_3b0 = pppppppbVar26;
              __rustc::__rust_no_alloc_shim_is_unstable_v2();
              unaff_x27 = (byte *******)FUN_004b25a4(8,8);
              if (unaff_x27 == (byte *******)0x0) {
                    /* try { // try from 007b8d90 to 007b8d9b has its CatchHandler @ 007b9170 */
                    /* WARNING: Subroutine does not return */
                alloc::alloc::handle_alloc_error(8,8);
              }
              *unaff_x27 = (byte ******)pppppppbVar26;
              unaff_x21 = &PTR_FUN_00adee50;
              pppppppbVar26 = (byte *******)&DAT_00000011;
            }
            *(undefined1 *)(param_2 + 0x110) = 1;
                    /* try { // try from 007b8850 to 007b8857 has its CatchHandler @ 007b90f8 */
            FUN_007b5370(param_2 + 0x102);
            puVar7 = PTR___CALLSITE_00b00f08;
            puVar6 = PTR___CALLSITE_00b00ef8;
            if (pppppppbVar23 != (byte *******)0x2) {
              local_230 = pppppppbVar27;
              pppppppbStack_228 = pppppppbVar26;
              local_220 = unaff_x27;
              pppppppbStack_218 = (byte *******)unaff_x21;
              if (3 < *(long *)PTR_MAX_LEVEL_00b00e60 - 2U) {
                bVar9 = PTR___CALLSITE_00b00f08[0x10];
                if (2 < bVar9) {
                    /* try { // try from 007b8e0c to 007b8e17 has its CatchHandler @ 007b8f20 */
                  bVar9 = <tracing_core::callsite::tracing_core::callsite::DefaultCallsite>::
                          register(PTR___CALLSITE_00b00f08);
                }
                    /* try { // try from 007b8a20 to 007b8a23 has its CatchHandler @ 007b8f38 */
                if ((bVar9 != 0) &&
                   (uVar12 = tracing::__macro_support::__is_enabled(*(undefined8 *)puVar7),
                   (uVar12 & 1) != 0)) {
                  lVar19 = *(long *)puVar7;
                  if (*(byte ********)(lVar19 + 0x38) == (byte *******)0x0) {
                    /* try { // try from 007b8f04 to 007b8f1b has its CatchHandler @ 007b8f34 */
                    /* WARNING: Subroutine does not return */
                    core::option::expect_failed
                              (&DAT_002e3d4d,0x22,&PTR_s__root__cargo_registry_src_index__00addaa8);
                  }
                  local_390 = (byte *******)0x0;
                  pppppppbStack_398 = *(byte ********)(lVar19 + 0x48);
                  local_3a0 = *(byte ********)(lVar19 + 0x40);
                  local_140 = (undefined8 *)(lVar19 + 0x30);
                  local_3b0 = (byte *******)*local_140;
                  local_258 = (byte *******)(param_2 + 0xfe);
                  local_238 = (byte *******)&local_258;
                  pppppppbStack_e8 = &local_240;
                  local_250 = PTR_fmt_00b00ef0;
                  local_240 = (byte ******)&DAT_002a6866;
                  local_f0 = (byte *******)&local_3b0;
                  local_e0 = (byte *******)&DAT_00adda70;
                  local_150 = (byte *******)&local_f0;
                  pppppppbStack_148 = (byte *******)&DAT_00000001;
                    /* try { // try from 007b8aa0 to 007b8aa7 has its CatchHandler @ 007b8f30 */
                  uStack_3a8 = *(byte ********)(lVar19 + 0x38);
                  <tracing_core::event::tracing_core::event::Event>::dispatch(lVar19,&local_150);
                }
              }
              pppppppbVar23 = (byte *******)0x0;
              pvVar24 = (void *)*local_628;
              goto joined_r0x007b8ac8;
            }
            local_f0 = pppppppbVar27;
            pppppppbStack_e8 = pppppppbVar26;
            local_e0 = unaff_x27;
            pppppppbStack_d8 = (byte *******)unaff_x21;
            if (*(long *)PTR_MAX_LEVEL_00b00e60 == 0) {
              bVar9 = PTR___CALLSITE_00b00ef8[0x10];
              if (2 < bVar9) {
                    /* try { // try from 007b8db4 to 007b8dbf has its CatchHandler @ 007b8f28 */
                bVar9 = <tracing_core::callsite::tracing_core::callsite::DefaultCallsite>::register
                                  (PTR___CALLSITE_00b00ef8);
              }
                    /* try { // try from 007b8938 to 007b893b has its CatchHandler @ 007b9038 */
              if ((bVar9 != 0) &&
                 (uVar12 = tracing::__macro_support::__is_enabled(*(undefined8 *)puVar6),
                 (uVar12 & 1) != 0)) {
                lVar19 = *(long *)puVar6;
                if (*(long *)(lVar19 + 0x38) == 0) {
                    /* try { // try from 007b8eb8 to 007b8ecf has its CatchHandler @ 007b8fc0 */
                    /* WARNING: Subroutine does not return */
                  core::option::expect_failed
                            (&DAT_002e3d4d,0x22,&PTR_s__root__cargo_registry_src_index__00addac0);
                }
                local_390 = (byte *******)0x0;
                pppppppbStack_398 = *(byte ********)(lVar19 + 0x48);
                local_3a0 = *(byte ********)(lVar19 + 0x40);
                local_248 = (undefined8 *)(lVar19 + 0x30);
                local_3b0 = (byte *******)*local_248;
                local_230 = (byte *******)(param_2 + 0xfe);
                pppppppbStack_228 = (byte *******)PTR_fmt_00b00ef0;
                local_220 = (byte *******)&local_f0;
                pppppppbStack_218 = (byte *******)PTR_fmt_00b00f00;
                local_238 = (byte *******)&local_230;
                local_240 = (byte ******)&DAT_002a6876;
                local_150 = (byte *******)&local_3b0;
                pppppppbStack_148 = &local_240;
                local_140 = (undefined8 *)&DAT_00adda70;
                local_258 = (byte *******)&local_150;
                local_250 = &DAT_00000001;
                    /* try { // try from 007b89d0 to 007b89d7 has its CatchHandler @ 007b8fc4 */
                uStack_3a8 = (byte *******)*(long *)(lVar19 + 0x38);
                <tracing_core::event::tracing_core::event::Event>::dispatch(lVar19,&local_258);
              }
            }
            local_628 = param_2 + 0xfa;
            uStack_3a8 = pppppppbStack_e8;
            local_3b0 = local_f0;
            pppppppbStack_398 = pppppppbStack_d8;
            local_3a0 = local_e0;
            if ((void *)*local_628 != (void *)0x0) {
              if (param_2[0xfb] != 0) {
                free((void *)*local_628);
              }
              pvVar24 = (void *)param_2[0xfc];
              if (pvVar24 != (void *)0x0) {
                puVar22 = (undefined8 *)param_2[0xfd];
                pcVar16 = (code *)*puVar22;
                if (pcVar16 != (code *)0x0) {
                    /* try { // try from 007b88b0 to 007b88b7 has its CatchHandler @ 007b9054 */
                  (*pcVar16)(pvVar24);
                }
                if (puVar22[1] != 0) {
                  free(pvVar24);
                }
              }
            }
            *(undefined1 *)(param_2 + 0x131) = 1;
            param_2[0xfb] = uStack_3a8;
            *local_628 = local_3b0;
            param_2[0xfd] = pppppppbStack_398;
            param_2[0xfc] = local_3a0;
            puVar22 = (undefined8 *)param_2[0x12e];
            psVar18 = (short *)puVar22[1];
            if (psVar18 == (short *)puVar22[3]) break;
          }
        }
        local_628 = param_2 + 0xfa;
        pppppppbVar27 = (byte *******)*local_628;
        if (pppppppbVar27 == (byte *******)0x0) {
                    /* try { // try from 007b8b18 to 007b8b2b has its CatchHandler @ 007b8fa0 */
          pppppppbVar26 =
               (byte *******)
               <alloc::io::error::core::io::error::Error>::new<&str>(7,&DAT_002e3d6f,0x13);
          __rustc::__rust_no_alloc_shim_is_unstable_v2();
          pppppppbVar27 = (byte *******)FUN_004b25a4(0x11,1);
          ppppppbVar5 = _UNK_002e3d8a;
          ppppppbVar11 = _DAT_002e3d82;
          if (pppppppbVar27 == (byte *******)0x0) {
                    /* try { // try from 007b8ed4 to 007b8edf has its CatchHandler @ 007b8f8c */
                    /* WARNING: Subroutine does not return */
            alloc::alloc::handle_alloc_error(1,0x11);
          }
          *(undefined1 *)(pppppppbVar27 + 2) = 0x72;
          pppppppbVar27[1] = ppppppbVar5;
          *pppppppbVar27 = ppppppbVar11;
          local_3b0 = pppppppbVar26;
          __rustc::__rust_no_alloc_shim_is_unstable_v2();
          unaff_x27 = (byte *******)FUN_004b25a4(8,8);
          if (unaff_x27 == (byte *******)0x0) {
                    /* try { // try from 007b8dd8 to 007b8de3 has its CatchHandler @ 007b9100 */
                    /* WARNING: Subroutine does not return */
            alloc::alloc::handle_alloc_error(8,8);
          }
          unaff_x21 = &PTR_FUN_00adee50;
          *unaff_x27 = (byte ******)pppppppbVar26;
          pppppppbVar26 = (byte *******)&DAT_00000011;
          pppppppbVar23 = (byte *******)&DAT_00000001;
        }
        else {
          pppppppbVar26 = (byte *******)param_2[0xfb];
          unaff_x27 = (byte *******)param_2[0xfc];
          pppppppbVar23 = (byte *******)&DAT_00000001;
          unaff_x21 = (undefined **)param_2[0xfd];
          *(undefined1 *)(param_2 + 0x131) = 0;
        }
LAB_007b8b90:
        local_628 = param_2 + 0xfa;
        *(undefined2 *)(param_2 + 0x131) = 0x100;
                    /* try { // try from 007b8b98 to 007b8b9f has its CatchHandler @ 007b8fc8 */
        FUN_007b5108(local_628);
        goto LAB_007b8ba0;
      }
      if (__n == 0) {
        __dest = &DAT_00000001;
      }
      else {
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        __dest = (undefined1 *)FUN_004b25a4(__n,1);
        if (__dest == (undefined1 *)0x0) {
                    /* try { // try from 007b79b4 to 007b79bf has its CatchHandler @ 007b808c */
                    /* WARNING: Subroutine does not return */
          alloc::alloc::handle_alloc_error(1,__n);
        }
      }
      plVar15 = plVar15 + 1;
      memcpy(__dest,pvVar24,__n);
      param_2[0x27] = __dest;
      param_2[0x28] = __n;
      param_2[0x2a] = plVar15;
      *(undefined1 *)((long)param_2 + 0x159) = 0;
LAB_007b7a20:
      param_2[0x29] = plVar15;
      *(undefined1 *)(param_2 + 0x2b) = 1;
      param_2[0x2d] = __dest;
      param_2[0x2e] = __n;
      param_2[0x2c] = plVar15;
LAB_007b7a34:
      *(undefined1 *)(param_2 + 0x2b) = 0;
                    /* try { // try from 007b7a4c to 007b7a5b has its CatchHandler @ 007b8118 */
      auVar28 = (**(code **)(plVar15[1] + 0x18))
                          (*plVar15 + (*(long *)(plVar15[1] + 0x10) - 1U & 0xfffffffffffffff0) +
                           0x10,__dest,__n);
      *(undefined1 (*) [16])(param_2 + 0x2c) = auVar28;
LAB_007b7a64:
                    /* try { // try from 007b7a68 to 007b7a73 has its CatchHandler @ 007b8130 */
      (**(code **)(auVar28._8_8_ + 0x18))(&local_3b0,auVar28._0_8_,param_3);
      unaff_x21 = (undefined **)local_3a0;
      unaff_x27 = uStack_3a8;
      pppppppbVar27 = local_3b0;
      if (local_3b0 == (byte *******)0x2) {
        *(undefined1 *)((long)param_2 + 0x159) = 4;
        uVar13 = 3;
        goto LAB_007b8d5c;
      }
      pvVar24 = (void *)param_2[0x2c];
      puVar22 = (undefined8 *)param_2[0x2d];
      pcVar16 = (code *)*puVar22;
      if (pcVar16 != (code *)0x0) {
                    /* try { // try from 007b7aa8 to 007b7aaf has its CatchHandler @ 007b80b4 */
        (*pcVar16)(pvVar24);
      }
      if (puVar22[1] != 0) {
        free(pvVar24);
      }
      *(undefined2 *)(param_2 + 0x2b) = 0x100;
                    /* try { // try from 007b7acc to 007b7ad3 has its CatchHandler @ 007b8114 */
      FUN_007b4ec8(param_2 + 0x27);
      if (pppppppbVar27 != (byte *******)&DAT_00000001) {
        local_3a0 = (byte *******)(param_2 + 0x26);
        pppppppbStack_398 = (byte *******)(param_2 + 0x1a);
        local_3b0 = unaff_x27;
        uStack_3a8 = (byte *******)unaff_x21;
                    /* try { // try from 007b7b34 to 007b7b3f has its CatchHandler @ 007b80a8 */
        FUN_00788e3c(&local_620,&local_3b0);
        *(undefined1 *)((long)param_2 + 0x133) = 1;
        local_4c8 = pppppppbStack_618 + lStack_610 * 4;
        uStack_3a8 = pppppppbStack_618;
        local_3b0 = pppppppbStack_618;
        local_3a0 = local_620;
        goto LAB_007b7b58;
      }
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      pppppppbVar27 = (byte *******)FUN_004b25a4(9,1);
      ppppppbVar11 = DAT_002e3d44;
      if (pppppppbVar27 == (byte *******)0x0) {
                    /* try { // try from 007b7ff8 to 007b8003 has its CatchHandler @ 007b8090 */
                    /* WARNING: Subroutine does not return */
        alloc::alloc::handle_alloc_error(1,9);
      }
      pppppppbVar26 = (byte *******)&DAT_00000009;
      *(undefined1 *)(pppppppbVar27 + 1) = 0x72;
      *pppppppbVar27 = ppppppbVar11;
      goto LAB_007b8298;
    }
LAB_007b81e4:
                    /* try { // try from 007b81e4 to 007b81eb has its CatchHandler @ 007b90dc */
    FUN_007b62e8(param_2 + 0x1a);
    uVar14 = 1;
  }
  else {
    if (bVar9 != 3) goto LAB_007b7fa4;
    bVar9 = *(byte *)((long)param_2 + 0x132);
    uVar17 = (uint)bVar9;
    if (bVar9 < 3) {
      if (bVar9 == 0) {
        plVar15 = (long *)param_2[0x19];
        goto LAB_007b77b0;
      }
      goto LAB_007b7fb0;
    }
    if (bVar9 == 3) {
      bVar9 = *(byte *)((long)param_2 + 0x159);
      if (bVar9 < 3) {
        if (bVar9 != 0) {
          if (bVar9 == 1) {
                    /* try { // try from 007b7fe8 to 007b7ff3 has its CatchHandler @ 007b80f4 */
            core::panicking::panic_const::panic_const_async_fn_resumed
                      (&PTR_s__root__cargo_registry_src_index__00add9f8);
          }
          else {
                    /* try { // try from 007b8008 to 007b8013 has its CatchHandler @ 007b80f4 */
            core::panicking::panic_const::panic_const_async_fn_resumed_panic
                      (&PTR_s__root__cargo_registry_src_index__00add9f8);
          }
          goto LAB_007b8f1c;
        }
        __dest = (undefined1 *)param_2[0x27];
        __n = param_2[0x28];
        plVar15 = (long *)param_2[0x2a];
        goto LAB_007b7a20;
      }
      if (bVar9 == 3) {
        __dest = (undefined1 *)param_2[0x2d];
        __n = param_2[0x2e];
        plVar15 = (long *)param_2[0x29];
        goto LAB_007b7a34;
      }
      auVar28 = *(undefined1 (*) [16])(param_2 + 0x2c);
      goto LAB_007b7a64;
    }
    bVar9 = *(byte *)(param_2 + 0xf9);
    if (bVar9 < 4) {
      if (bVar9 < 2) {
        if (bVar9 != 0) {
                    /* try { // try from 007b8018 to 007b8043 has its CatchHandler @ 007b80ac */
          core::panicking::panic_const::panic_const_async_fn_resumed
                    (&PTR_s__root__cargo_registry_src_index__00addaf0);
          goto LAB_007b8f1c;
        }
        goto LAB_007b7bd0;
      }
      if (bVar9 != 3) {
        core::panicking::panic_const::panic_const_async_fn_resumed_panic
                  (&PTR_s__root__cargo_registry_src_index__00addaf0);
        goto LAB_007b8f1c;
      }
      bVar9 = *(byte *)((long)param_2 + 0x989);
      if (1 < bVar9) {
        if (bVar9 == 3) goto LAB_007b83fc;
        core::panicking::panic_const::panic_const_async_fn_resumed_panic
                  (&PTR_s__root__cargo_registry_src_index__00adda90);
        goto LAB_007b8f1c;
      }
      if (bVar9 != 0) {
                    /* try { // try from 007b8048 to 007b8073 has its CatchHandler @ 007b8084 */
        core::panicking::panic_const::panic_const_async_fn_resumed
                  (&PTR_s__root__cargo_registry_src_index__00adda90);
        goto LAB_007b8f1c;
      }
      puVar22 = (undefined8 *)param_2[0x12f];
      uVar14 = param_2[0x130];
      goto LAB_007b7c3c;
    }
    if (bVar9 == 4) {
      puVar22 = (undefined8 *)param_2[0xfb];
      if (puVar22 == (undefined8 *)0x0) {
                    /* try { // try from 007b7f60 to 007b7f77 has its CatchHandler @ 007b8194 */
                    /* WARNING: Subroutine does not return */
        core::option::expect_failed
                  (&DAT_002e5c28,0x18,&PTR_s__root__cargo_registry_src_index__00adf988);
      }
      goto LAB_007b7d4c;
    }
    if (bVar9 == 5) {
      puVar22 = (undefined8 *)param_2[0xfa];
      if (puVar22 == (undefined8 *)0x0) {
                    /* try { // try from 007b7f7c to 007b7f93 has its CatchHandler @ 007b8190 */
                    /* WARNING: Subroutine does not return */
        core::option::expect_failed
                  (&DAT_002e5c28,0x18,&PTR_s__root__cargo_registry_src_index__00adf988);
      }
      goto LAB_007b7df4;
    }
LAB_007b7ebc:
                    /* try { // try from 007b7ebc to 007b7ecb has its CatchHandler @ 007b80fc */
    FUN_007c1154(&local_3b0,param_2 + 0x100,param_3);
    unaff_x21 = (undefined **)local_390;
    unaff_x27 = pppppppbStack_398;
    pppppppbVar26 = local_3a0;
    pppppppbVar27 = uStack_3a8;
    pppppppbVar23 = local_3b0;
    if (local_3b0 == (byte *******)0x2) {
      uVar13 = 6;
LAB_007b8d50:
      local_638 = param_2 + 0xf9;
      *(undefined1 *)local_638 = uVar13;
      uVar13 = 4;
LAB_007b8d5c:
      *(undefined1 *)((long)param_2 + 0x132) = uVar13;
      *param_1 = 2;
      uVar13 = 3;
      goto LAB_007b8d6c;
    }
    if ((*(byte *)((long)param_2 + 0x7c9) & 1) != 0) {
                    /* try { // try from 007b7ef8 to 007b7eff has its CatchHandler @ 007b8078 */
      FUN_007b49bc(param_2 + 0xfa);
    }
LAB_007b7f18:
    *(undefined1 *)((long)param_2 + 0x7c9) = 0;
                    /* try { // try from 007b7f1c to 007b7f23 has its CatchHandler @ 007b80e8 */
    FUN_007b6814(param_2 + 0xe4);
                    /* try { // try from 007b7f24 to 007b7f2b has its CatchHandler @ 007b80dc */
    FUN_007b5108(param_2 + 0xac);
                    /* try { // try from 007b7f2c to 007b7f33 has its CatchHandler @ 007b80d0 */
    FUN_007b5108(param_2 + 0x74);
    if (param_2[0x70] != 0) {
      free((void *)param_2[0x6e]);
    }
    *(undefined1 *)((long)param_2 + 0x7ca) = 0;
LAB_007b8ba0:
    local_638 = param_2 + 0xf9;
    if (param_2[0x5a] != 0) {
      free((void *)param_2[0x58]);
    }
    *(undefined1 *)local_638 = 1;
                    /* try { // try from 007b8bc4 to 007b8bcb has its CatchHandler @ 007b902c */
    FUN_007b51d0(param_2 + 0x27);
    if (((ulong)pppppppbVar23 & 1) != 0) {
LAB_007b8298:
      *(undefined1 *)((long)param_2 + 0x133) = 0;
      goto LAB_007b81e4;
    }
                    /* try { // try from 007b8be8 to 007b8bef has its CatchHandler @ 007b8fac */
    local_540 = pppppppbVar27;
    pppppppbStack_538 = pppppppbVar26;
    local_530 = unaff_x27;
    pppppppbStack_528 = (byte *******)unaff_x21;
    ppppppbVar11 = (byte ******)
                   <tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::set_nodelay
                             (&local_540,*(undefined1 *)(*(long *)param_2[0x25] + 0xb7));
    puVar6 = PTR___CALLSITE_00b00f10;
    if (ppppppbVar11 != (byte ******)0x0) {
      local_500 = ppppppbVar11;
      if ((*(ulong *)PTR_MAX_LEVEL_00b00e60 & 0xfffffffffffffffe) != 4) {
        bVar9 = PTR___CALLSITE_00b00f10[0x10];
        if (2 < bVar9) {
                    /* try { // try from 007b8de8 to 007b8df7 has its CatchHandler @ 007b8f24 */
          bVar9 = <tracing_core::callsite::tracing_core::callsite::DefaultCallsite>::register
                            (PTR___CALLSITE_00b00f10);
        }
                    /* try { // try from 007b8c30 to 007b8c33 has its CatchHandler @ 007b8f78 */
        if ((bVar9 != 0) &&
           (uVar12 = tracing::__macro_support::__is_enabled(*(undefined8 *)puVar6),
           (uVar12 & 1) != 0)) {
          lVar19 = *(long *)puVar6;
          if (*(byte ********)(lVar19 + 0x38) == (byte *******)0x0) {
                    /* try { // try from 007b8ee4 to 007b8eff has its CatchHandler @ 007b8f50 */
                    /* WARNING: Subroutine does not return */
            core::option::expect_failed
                      (&DAT_002e3d4d,0x22,&PTR_s__root__cargo_registry_src_index__00adda58);
          }
          local_390 = (byte *******)0x0;
          pppppppbStack_398 = *(byte ********)(lVar19 + 0x48);
          local_3a0 = *(byte ********)(lVar19 + 0x40);
          local_220 = (byte *******)(lVar19 + 0x30);
          local_3b0 = (byte *******)*local_220;
          local_f0 = &local_500;
          pppppppbStack_e8 = (byte *******)PTR_fmt_00b00cb0;
          pppppppbStack_148 = (byte *******)&local_f0;
          local_150 = (byte *******)&DAT_002a9421;
          local_4e0 = (byte *******)&local_3b0;
          pppppppbStack_4d8 = (byte *******)&local_150;
          local_4d0 = (byte *******)&DAT_00adda70;
          local_230 = (byte *******)&local_4e0;
          pppppppbStack_228 = (byte *******)&DAT_00000001;
                    /* try { // try from 007b8cac to 007b8cb3 has its CatchHandler @ 007b8f48 */
          uStack_3a8 = *(byte ********)(lVar19 + 0x38);
          <tracing_core::event::tracing_core::event::Event>::dispatch(lVar19,&local_230);
          ppppppbVar11 = local_500;
        }
      }
      if ((1 < ((ulong)ppppppbVar11 & 3) - 2) && (((ulong)ppppppbVar11 & 3) != 0)) {
        uStack_3a8 = (byte *******)((long)ppppppbVar11 - 1);
        local_3b0 = (byte *******)CONCAT71(local_3b0._1_7_,3);
                    /* try { // try from 007b8ce0 to 007b8ce7 has its CatchHandler @ 007b8f74 */
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&uStack_3a8);
      }
    }
    unaff_x21 = (undefined **)pppppppbStack_528;
    unaff_x27 = local_530;
    pppppppbVar26 = pppppppbStack_538;
    pppppppbVar27 = local_540;
    *(undefined1 *)((long)param_2 + 0x133) = 0;
                    /* try { // try from 007b8cf4 to 007b8cfb has its CatchHandler @ 007b90dc */
    FUN_007b62e8(param_2 + 0x1a);
    uVar14 = 0;
  }
  *param_1 = uVar14;
  param_1[1] = pppppppbVar27;
  plVar15 = (long *)param_2[0xb];
  param_1[2] = pppppppbVar26;
  param_1[3] = unaff_x27;
  param_1[4] = unaff_x21;
  *(undefined1 *)((long)param_2 + 0x132) = 1;
  do {
    lVar19 = *plVar15;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar4) {
      *plVar15 = lVar19 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar19 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 007b8224 to 007b8227 has its CatchHandler @ 007b8264 */
    <alloc::sync::[n]::alloc::sync::Arc<hyper_util::client::legacy::connect::http::Config>>::
    drop_slow();
  }
  plVar15 = (long *)param_2[0xc];
  do {
    lVar19 = *plVar15;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar4) {
      *plVar15 = lVar19 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar19 == 1) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 007b824c to 007b824f has its CatchHandler @ 007b8258 */
    <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
    drop_slow();
  }
  uVar13 = 1;
LAB_007b8d6c:
  *(undefined1 *)(param_2 + 0x132) = uVar13;
  return;
}


// ===== 007b926c  FUN_007b926c =====

void FUN_007b926c(undefined8 *param_1,undefined8 *param_2)

{
  void *__ptr;
  undefined8 *puVar1;
  byte bVar2;
  undefined **ppuVar3;
  undefined1 uVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
  void *unaff_x22;
  long unaff_x27;
  undefined **local_88;
  undefined **ppuStack_80;
  undefined **local_78;
  undefined **ppuStack_70;
  undefined *puStack_68;
  
  bVar2 = *(byte *)(param_2 + 4);
  if (bVar2 < 2) {
    if (bVar2 != 0) {
      core::panicking::panic_const::panic_const_async_fn_resumed
                (&PTR_s__root__cargo_registry_src_index__00addb50);
LAB_007b93c0:
      uVar7 = core::panicking::panic_const::panic_const_async_fn_resumed_panic
                        (&PTR_s__root__cargo_registry_src_index__00addb50);
                    /* catch() { ... } // from try @ 007b92f8 with catch @ 007b93cc */
      if (*(long *)(unaff_x27 + 8) != 0) {
        free(unaff_x22);
        *(undefined1 *)(param_2 + 4) = 2;
                    /* WARNING: Subroutine does not return */
        FUN_00ab2530(uVar7);
      }
      *(undefined1 *)(param_2 + 4) = 2;
                    /* WARNING: Subroutine does not return */
      FUN_00ab2530(uVar7);
    }
    uVar7 = *param_2;
    lVar5 = param_2[1];
    param_2[2] = uVar7;
    param_2[3] = lVar5;
  }
  else {
    if (bVar2 != 3) goto LAB_007b93c0;
    uVar7 = param_2[2];
    lVar5 = param_2[3];
  }
                    /* try { // try from 007b92c0 to 007b92c7 has its CatchHandler @ 007b93f4 */
  (**(code **)(lVar5 + 0x18))(&local_88,uVar7);
  if (local_88 == (undefined **)0x2) {
    *param_1 = 0xfffffffffffffffe;
    uVar4 = 3;
    goto LAB_007b9380;
  }
  __ptr = (void *)param_2[2];
  puVar1 = (undefined8 *)param_2[3];
  pcVar6 = (code *)*puVar1;
  if (pcVar6 != (code *)0x0) {
                    /* try { // try from 007b92f8 to 007b92ff has its CatchHandler @ 007b93cc */
    (*pcVar6)(__ptr);
  }
  if (puVar1[1] != 0) {
    free(__ptr);
  }
  if (local_88 == (undefined **)0x1) {
    local_88 = ppuStack_80;
    ppuStack_80 = local_78;
    local_78 = ppuStack_70;
    ppuStack_70 = (undefined **)puStack_68;
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    ppuVar3 = (undefined **)FUN_004b25a4(0x20,8);
    if (ppuVar3 == (undefined **)0x0) {
                    /* try { // try from 007b93a4 to 007b93af has its CatchHandler @ 007b940c */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x20);
    }
    ppuVar3[1] = (undefined *)ppuStack_80;
    *ppuVar3 = (undefined *)local_88;
    ppuVar3[3] = (undefined *)ppuStack_70;
    ppuVar3[2] = (undefined *)local_78;
    local_78 = ppuVar3;
    ppuStack_70 = &PTR_FUN_00adf120;
LAB_007b935c:
    uVar7 = 0xffffffffffffffff;
    ppuVar3 = ppuStack_70;
  }
  else {
    if (ppuStack_80 == (undefined **)0x2) goto LAB_007b935c;
    uVar7 = 2;
    ppuVar3 = local_78;
    local_78 = ppuStack_80;
  }
  *param_1 = uVar7;
  param_1[1] = local_78;
  uVar4 = 1;
  param_1[2] = ppuVar3;
  param_1[3] = ppuStack_70;
  param_1[4] = puStack_68;
LAB_007b9380:
  *(undefined1 *)(param_2 + 4) = uVar4;
  return;
}


// ===== 007b942c  FUN_007b942c =====

void FUN_007b942c(undefined8 *param_1,char *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *unaff_x19;
  
  if (*param_2 != '\0') {
    if (*param_2 == '\x01') {
      core::panicking::panic_const::panic_const_async_fn_resumed
                (&PTR_s__root__cargo_registry_src_index__00addb68);
    }
    core::panicking::panic_const::panic_const_async_fn_resumed_panic();
                    /* catch() { ... } // from try @ 007b9444 with catch @ 007b94d4 */
    *unaff_x19 = 2;
                    /* WARNING: Subroutine does not return */
    FUN_00ab2530();
  }
                    /* try { // try from 007b9444 to 007b945f has its CatchHandler @ 007b94d4 */
  uVar1 = <alloc::io::error::core::io::error::Error>::new<&str>(0x2a,&DAT_002e3d93,0xe);
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar2 = (undefined8 *)FUN_004b25a4(8,8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = uVar1;
    *param_1 = 0xffffffffffffffff;
    param_1[1] = puVar2;
    param_1[2] = &PTR_FUN_00adee50;
    *param_2 = '\x01';
    return;
  }
                    /* try { // try from 007b94ac to 007b94b7 has its CatchHandler @ 007b94e0 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,8);
}


// ===== 007b9500  FUN_007b9500 =====

void FUN_007b9500(undefined8 *param_1,undefined8 *param_2)

{
  void *__ptr;
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 **ppuVar4;
  undefined8 **ppuVar5;
  byte *pbVar6;
  undefined8 ***pppuVar7;
  undefined8 ***pppuVar8;
  undefined8 ***pppuVar9;
  undefined8 uVar10;
  byte bVar11;
  undefined8 *extraout_x8;
  code *pcVar12;
  long *plVar13;
  long lVar14;
  undefined8 ***unaff_x24;
  undefined **ppuVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined8 auStack_1630 [130];
  undefined8 **ppuStack_1220;
  undefined8 **ppuStack_1218;
  undefined8 **ppuStack_1210;
  undefined8 **ppuStack_1200;
  undefined8 **ppuStack_11f8;
  undefined8 **ppuStack_11f0;
  undefined8 **ppuStack_11e8;
  undefined8 uStack_11e0;
  undefined8 uStack_1070;
  undefined8 **ppuStack_df0;
  undefined8 **ppuStack_de8;
  undefined8 **ppuStack_de0;
  undefined8 uStack_dd0;
  undefined8 uStack_dc8;
  undefined8 uStack_dc0;
  undefined8 uStack_db8;
  undefined8 **ppuStack_da8;
  undefined8 **ppuStack_da0;
  undefined8 **ppuStack_d98;
  undefined8 **ppuStack_d90;
  undefined1 auStack_d88 [1072];
  undefined1 auStack_958 [1072];
  undefined8 **ppuStack_528;
  undefined8 **ppuStack_520;
  undefined8 **ppuStack_518;
  undefined8 **ppuStack_510;
  undefined8 **ppuStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 **ppuStack_e0;
  undefined8 **ppuStack_d8;
  undefined8 **ppuStack_d0;
  undefined8 **ppuStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 **ppuStack_a0;
  undefined8 **ppuStack_98;
  undefined8 **ppuStack_90;
  undefined8 **ppuStack_88;
  undefined1 *puStack_70;
  code *pcStack_68;
  
  if (*(char *)(param_2 + 2) == '\0') {
    uVar16 = param_2[1];
    uVar10 = *param_2;
    *param_1 = 0xffffffffffffffff;
    param_1[2] = uVar16;
    param_1[1] = uVar10;
    *(undefined1 *)(param_2 + 2) = 1;
    return;
  }
  if (*(char *)(param_2 + 2) == '\x01') {
    core::panicking::panic_const::panic_const_async_fn_resumed
              (&PTR_s__root__cargo_registry_src_index__00addb80);
  }
  auVar17 = core::panicking::panic_const::panic_const_async_fn_resumed_panic();
  pbVar6 = auVar17._0_8_;
  pcStack_68 = FUN_007b9548;
  uStack_1070 = 0;
  auStack_1630[0] = 0;
  bVar11 = pbVar6[0x38];
  if (bVar11 < 3) {
    if (bVar11 != 0) {
      puStack_70 = &stack0xfffffffffffffff0;
      if (bVar11 == 1) {
        puStack_70 = &stack0xfffffffffffffff0;
        core::panicking::panic_const::panic_const_async_fn_resumed
                  (&PTR_s__root__cargo_registry_src_index__00addb98);
      }
      uVar10 = core::panicking::panic_const::panic_const_async_fn_resumed_panic();
      FUN_00770304(&ppuStack_a0);
      plVar13 = *(long **)(pbVar6 + 0x40);
      do {
        lVar14 = *plVar13;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *plVar13 = lVar14 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar14 + -1 == 0) {
        DataMemoryBarrier(2,1);
        <alloc::sync::[n]::alloc::sync::Arc<rustls::client::client_conn::ClientConfig>>::drop_slow()
        ;
      }
      if ((pbVar6[0x3a] & 1) != 0) {
        plVar13 = *(long **)(pbVar6 + 0x30);
        do {
          lVar14 = *plVar13;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar3) {
            *plVar13 = lVar14 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar14 + -1 == 0) {
          DataMemoryBarrier(2,1);
          <alloc::sync::[n]::alloc::sync::Arc<rustls::client::client_conn::ClientConfig>>::drop_slow
                    ();
        }
      }
      if ((pbVar6[0x39] & 1) != 0) {
        FUN_007b59e8(pbVar6);
      }
      pbVar6[0x38] = 2;
                    /* WARNING: Subroutine does not return */
      FUN_00ab2530(uVar10);
    }
    uVar10 = *(undefined8 *)(pbVar6 + 0x20);
    lVar14 = *(long *)(pbVar6 + 0x28);
    pbVar6[0x39] = 1;
    pbVar6[0x3a] = 1;
    *(undefined8 *)(pbVar6 + 0x40) = uVar10;
    *(long *)(pbVar6 + 0x48) = lVar14;
LAB_007b961c:
    puStack_70 = &stack0xfffffffffffffff0;
    (**(code **)(lVar14 + 0x18))(&ppuStack_528,uVar10);
    ppuVar5 = ppuStack_508;
    ppuVar15 = (undefined **)ppuStack_510;
    pppuVar9 = (undefined8 ***)ppuStack_518;
    pppuVar8 = (undefined8 ***)ppuStack_520;
    ppuVar4 = ppuStack_528;
    if ((undefined8 ***)ppuStack_528 == (undefined8 ***)0x2) {
      *extraout_x8 = 0xfffffffffffffffe;
      bVar11 = 3;
      goto LAB_007b987c;
    }
    __ptr = *(void **)(pbVar6 + 0x40);
    puVar1 = *(undefined8 **)(pbVar6 + 0x48);
    pcVar12 = (code *)*puVar1;
    if (pcVar12 != (code *)0x0) {
      (*pcVar12)(__ptr);
    }
    if (puVar1[1] != 0) {
      free(__ptr);
    }
    if (ppuVar4 == (undefined8 **)&DAT_00000001) {
      ppuStack_528 = pppuVar8;
      ppuStack_520 = pppuVar9;
      ppuStack_518 = (undefined8 **)ppuVar15;
      ppuStack_510 = ppuVar5;
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      pppuVar9 = (undefined8 ***)FUN_004b25a4(0x20,8);
      if (pppuVar9 == (undefined8 ***)0x0) {
                    /* WARNING: Subroutine does not return */
        alloc::alloc::handle_alloc_error(8,0x20);
      }
      ppuVar15 = &PTR_FUN_00adf120;
      pppuVar9[1] = ppuStack_520;
      *pppuVar9 = ppuStack_528;
      pppuVar9[3] = ppuStack_510;
      pppuVar9[2] = ppuStack_518;
    }
    else if (pppuVar8 != (undefined8 ***)0x2) {
      uStack_dc8 = *(undefined8 *)(pbVar6 + 8);
      uStack_dd0 = *(undefined8 *)pbVar6;
      uStack_db8 = *(undefined8 *)(pbVar6 + 0x18);
      uStack_dc0 = *(undefined8 *)(pbVar6 + 0x10);
      plVar13 = *(long **)(pbVar6 + 0x30);
      ppuStack_d98 = (undefined8 **)ppuVar15;
      unaff_x24 = &ppuStack_da8;
      pbVar6[0x3a] = 0;
      pbVar6[0x39] = 0;
      *(long **)(pbVar6 + 0x40) = plVar13;
      ppuStack_da8 = pppuVar8;
      ppuStack_da0 = pppuVar9;
      ppuStack_d90 = ppuVar5;
      do {
        lVar14 = *plVar13;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *plVar13 = lVar14 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar14 < 0) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x7b99a4);
        (*pcVar12)();
      }
      <rustls::client::client_conn::connection::[2]::rustls::client::client_conn::connection::ClientConnection>
      ::new(&ppuStack_528,plVar13,&uStack_dd0);
      pppuVar7 = (undefined8 ***)ppuStack_520;
      pppuVar9 = (undefined8 ***)ppuStack_528;
      if ((undefined8 ***)ppuStack_528 == (undefined8 ***)0x2) {
        uStack_b0 = uStack_4f0;
        ppuStack_d8 = ppuStack_518;
        ppuStack_e0 = ppuStack_520;
        ppuStack_c8 = ppuStack_508;
        ppuStack_d0 = ppuStack_510;
        uStack_b8 = uStack_4f8;
        uStack_c0 = uStack_500;
        ppuStack_98 = ppuStack_da0;
        ppuStack_a0 = ppuStack_da8;
        ppuStack_88 = ppuStack_d90;
        ppuStack_90 = ppuStack_d98;
        pppuVar7 = (undefined8 ***)
                   <alloc::io::error::core::io::error::Error>::new<rustls::error::Error>
                             (0x2a,&ppuStack_e0);
        pppuVar8 = (undefined8 ***)&DAT_00000004;
        ppuStack_1210 = ppuStack_d98;
        pppuVar9 = (undefined8 ***)ppuVar5;
        ppuStack_1220 = ppuStack_da8;
        ppuStack_1218 = ppuStack_da0;
      }
      else {
        memcpy(&ppuStack_1200,&ppuStack_518,0x410);
        ppuStack_1210 = ppuStack_d90;
        ppuStack_1220 = ppuStack_da0;
        ppuStack_1218 = ppuStack_d98;
      }
      ppuStack_df0 = ppuStack_1220;
      ppuStack_de8 = ppuStack_1218;
      ppuStack_de0 = ppuStack_1210;
      memcpy(auStack_1630,&ppuStack_1200,0x410);
      *(undefined8 ****)(pbVar6 + 0x48) = pppuVar8;
      *(undefined8 ***)(pbVar6 + 0x58) = ppuStack_1218;
      *(undefined8 ***)(pbVar6 + 0x50) = ppuStack_1220;
      *(undefined8 ***)(pbVar6 + 0x60) = ppuStack_1210;
      *(undefined8 ****)(pbVar6 + 0x68) = pppuVar9;
      *(undefined8 ****)(pbVar6 + 0x70) = pppuVar7;
      memcpy(pbVar6 + 0x78,auStack_1630,0x410);
      pbVar6[0x488] = 0;
      goto LAB_007b9598;
    }
LAB_007b9820:
    if ((pbVar6[0x3a] & 1) != 0) {
      plVar13 = *(long **)(pbVar6 + 0x30);
      do {
        lVar14 = *plVar13;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *plVar13 = lVar14 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar14 + -1 == 0) {
        DataMemoryBarrier(2,1);
        <alloc::sync::[n]::alloc::sync::Arc<rustls::client::client_conn::ClientConfig>>::drop_slow()
        ;
      }
    }
    if (((((pbVar6[0x39] & 1) != 0) && ((*pbVar6 & 1) == 0)) && (*(long *)(pbVar6 + 8) != -1)) &&
       (*(long *)(pbVar6 + 8) != 0)) {
      free(*(void **)(pbVar6 + 0x10));
    }
    pppuVar8 = (undefined8 ***)0xffffffffffffffff;
  }
  else {
    puStack_70 = &stack0xfffffffffffffff0;
    if (bVar11 != 4) {
      uVar10 = *(undefined8 *)(pbVar6 + 0x40);
      lVar14 = *(long *)(pbVar6 + 0x48);
      goto LAB_007b961c;
    }
LAB_007b9598:
    FUN_007aadec(&ppuStack_528,pbVar6 + 0x48,auVar17._8_8_);
    ppuVar15 = (undefined **)ppuStack_518;
    pppuVar9 = (undefined8 ***)ppuStack_520;
    pppuVar8 = (undefined8 ***)ppuStack_528;
    if ((undefined8 ***)ppuStack_528 == (undefined8 ***)0xffffffffffffffff) {
      *extraout_x8 = 0xfffffffffffffffe;
      bVar11 = 4;
      goto LAB_007b987c;
    }
    if ((undefined8 ***)ppuStack_528 == (undefined8 ***)0x2) {
      ppuStack_11f8 = ppuStack_518;
      ppuStack_1200 = ppuStack_520;
      ppuStack_11e8 = ppuStack_508;
      ppuStack_11f0 = ppuStack_510;
      uStack_11e0 = uStack_500;
      FUN_007dfadc((ulong)&ppuStack_1200 | 8);
      if ((int)uStack_11e0 != -1) {
        close((int)uStack_11e0);
      }
      FUN_007b6bac((ulong)&ppuStack_1200 | 8);
      ppuVar15 = (undefined **)unaff_x24;
    }
    else {
      memcpy(auStack_d88,&ppuStack_510,0x430);
    }
    FUN_007b44b0(pbVar6 + 0x48);
    if (pppuVar8 == (undefined8 ***)0x2) {
      pppuVar8 = (undefined8 ***)
                 <core[bcece726f298455b]::io::error::Error>::new::
                 <core[bcece726f298455b]::io::error::Error>(0x2a,pppuVar9);
      ppuStack_528 = pppuVar8;
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      pppuVar9 = (undefined8 ***)FUN_004b25a4(8,8);
      if (pppuVar9 == (undefined8 ***)0x0) {
                    /* WARNING: Subroutine does not return */
        alloc::alloc::handle_alloc_error(8,8);
      }
      plVar13 = *(long **)(pbVar6 + 0x40);
      *pppuVar9 = pppuVar8;
      do {
        lVar14 = *plVar13;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *plVar13 = lVar14 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar14 + -1 == 0) {
        DataMemoryBarrier(2,1);
        <alloc::sync::[n]::alloc::sync::Arc<rustls::client::client_conn::ClientConfig>>::drop_slow()
        ;
      }
      ppuVar15 = &PTR_FUN_00adee50;
      goto LAB_007b9820;
    }
    memcpy(auStack_958,auStack_d88,0x430);
    plVar13 = *(long **)(pbVar6 + 0x40);
    do {
      lVar14 = *plVar13;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = lVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar14 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<rustls::client::client_conn::ClientConfig>>::drop_slow();
    }
  }
  *extraout_x8 = pppuVar8;
  extraout_x8[1] = pppuVar9;
  extraout_x8[2] = ppuVar15;
  memcpy(extraout_x8 + 3,auStack_958,0x430);
  bVar11 = 1;
LAB_007b987c:
  pbVar6[0x38] = bVar11;
  return;
}


// ===== 007b9548  FUN_007b9548 =====

void FUN_007b9548(undefined8 *param_1,byte *param_2,undefined8 param_3)

{
  void *__ptr;
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 **ppuVar4;
  undefined8 **ppuVar5;
  undefined8 ***pppuVar6;
  undefined8 ***pppuVar7;
  undefined8 ***pppuVar8;
  undefined8 uVar9;
  byte bVar10;
  code *pcVar11;
  long *plVar12;
  long lVar13;
  undefined8 ***unaff_x24;
  undefined **ppuVar14;
  undefined8 local_1620 [130];
  undefined8 **local_1210;
  undefined8 **ppuStack_1208;
  undefined8 **local_1200;
  undefined8 **local_11f0;
  undefined8 **ppuStack_11e8;
  undefined8 **local_11e0;
  undefined8 **ppuStack_11d8;
  undefined8 local_11d0;
  undefined8 local_1060;
  undefined8 **local_de0;
  undefined8 **ppuStack_dd8;
  undefined8 **local_dd0;
  undefined8 local_dc0;
  undefined8 uStack_db8;
  undefined8 local_db0;
  undefined8 uStack_da8;
  undefined8 **local_d98;
  undefined8 **ppuStack_d90;
  undefined8 **local_d88;
  undefined8 **local_d80;
  undefined1 auStack_d78 [1072];
  undefined1 auStack_948 [1072];
  undefined8 **local_518;
  undefined8 **ppuStack_510;
  undefined8 **ppuStack_508;
  undefined8 **ppuStack_500;
  undefined8 **ppuStack_4f8;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4e0;
  undefined8 **local_d0;
  undefined8 **ppuStack_c8;
  undefined8 **ppuStack_c0;
  undefined8 **ppuStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 **local_90;
  undefined8 **ppuStack_88;
  undefined8 **ppuStack_80;
  undefined8 **ppuStack_78;
  
  local_1060 = 0;
  local_1620[0] = 0;
  bVar10 = param_2[0x38];
  if (bVar10 < 3) {
    if (bVar10 != 0) {
      if (bVar10 == 1) {
        core::panicking::panic_const::panic_const_async_fn_resumed
                  (&PTR_s__root__cargo_registry_src_index__00addb98);
      }
      uVar9 = core::panicking::panic_const::panic_const_async_fn_resumed_panic();
                    /* catch() { ... } // from try @ 007b9764 with catch @ 007b99bc */
                    /* try { // try from 007b99c0 to 007b99d7 has its CatchHandler @ 007b99dc */
      FUN_00770304(&local_90);
      plVar12 = *(long **)(param_2 + 0x40);
      do {
        lVar13 = *plVar12;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = lVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar13 + -1 == 0) {
        DataMemoryBarrier(2,1);
                    /* try { // try from 007b9a98 to 007b9a9b has its CatchHandler @ 007b9b00 */
        <alloc::sync::[n]::alloc::sync::Arc<rustls::client::client_conn::ClientConfig>>::drop_slow()
        ;
      }
      if ((param_2[0x3a] & 1) != 0) {
        plVar12 = *(long **)(param_2 + 0x30);
        do {
          lVar13 = *plVar12;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *plVar12 = lVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar13 + -1 == 0) {
          DataMemoryBarrier(2,1);
                    /* try { // try from 007b9adc to 007b9adf has its CatchHandler @ 007b9b00 */
          <alloc::sync::[n]::alloc::sync::Arc<rustls::client::client_conn::ClientConfig>>::drop_slow
                    ();
        }
      }
      if ((param_2[0x39] & 1) != 0) {
        FUN_007b59e8(param_2);
      }
      param_2[0x38] = 2;
                    /* WARNING: Subroutine does not return */
      FUN_00ab2530(uVar9);
    }
    uVar9 = *(undefined8 *)(param_2 + 0x20);
    lVar13 = *(long *)(param_2 + 0x28);
    param_2[0x39] = 1;
    param_2[0x3a] = 1;
    *(undefined8 *)(param_2 + 0x40) = uVar9;
    *(long *)(param_2 + 0x48) = lVar13;
LAB_007b961c:
                    /* try { // try from 007b9620 to 007b962f has its CatchHandler @ 007b9a54 */
    (**(code **)(lVar13 + 0x18))(&local_518,uVar9);
    ppuVar5 = ppuStack_4f8;
    ppuVar14 = (undefined **)ppuStack_500;
    pppuVar8 = (undefined8 ***)ppuStack_508;
    pppuVar7 = (undefined8 ***)ppuStack_510;
    ppuVar4 = local_518;
    if ((undefined8 ***)local_518 == (undefined8 ***)0x2) {
      *param_1 = 0xfffffffffffffffe;
      bVar10 = 3;
      goto LAB_007b987c;
    }
    __ptr = *(void **)(param_2 + 0x40);
    puVar1 = *(undefined8 **)(param_2 + 0x48);
    pcVar11 = (code *)*puVar1;
    if (pcVar11 != (code *)0x0) {
                    /* try { // try from 007b9668 to 007b966f has its CatchHandler @ 007b9a20 */
      (*pcVar11)(__ptr);
    }
    if (puVar1[1] != 0) {
      free(__ptr);
    }
    if (ppuVar4 == (undefined8 **)&DAT_00000001) {
      local_518 = pppuVar7;
      ppuStack_510 = pppuVar8;
      ppuStack_508 = (undefined8 **)ppuVar14;
      ppuStack_500 = ppuVar5;
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      pppuVar8 = (undefined8 ***)FUN_004b25a4(0x20,8);
      if (pppuVar8 == (undefined8 ***)0x0) {
                    /* try { // try from 007b9984 to 007b998f has its CatchHandler @ 007b9aa4 */
                    /* WARNING: Subroutine does not return */
        alloc::alloc::handle_alloc_error(8,0x20);
      }
      ppuVar14 = &PTR_FUN_00adf120;
      pppuVar8[1] = ppuStack_510;
      *pppuVar8 = local_518;
      pppuVar8[3] = ppuStack_500;
      pppuVar8[2] = ppuStack_508;
    }
    else if (pppuVar7 != (undefined8 ***)0x2) {
      uStack_db8 = *(undefined8 *)(param_2 + 8);
      local_dc0 = *(undefined8 *)param_2;
      uStack_da8 = *(undefined8 *)(param_2 + 0x18);
      local_db0 = *(undefined8 *)(param_2 + 0x10);
      plVar12 = *(long **)(param_2 + 0x30);
      local_d88 = (undefined8 **)ppuVar14;
      unaff_x24 = &local_d98;
      param_2[0x3a] = 0;
      param_2[0x39] = 0;
      *(long **)(param_2 + 0x40) = plVar12;
      local_d98 = pppuVar7;
      ppuStack_d90 = pppuVar8;
      local_d80 = ppuVar5;
      do {
        lVar13 = *plVar12;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = lVar13 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar13 < 0) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x7b99a4);
        (*pcVar11)();
      }
                    /* try { // try from 007b971c to 007b972b has its CatchHandler @ 007b99cc */
      <rustls::client::client_conn::connection::[2]::rustls::client::client_conn::connection::ClientConnection>
      ::new(&local_518,plVar12,&local_dc0);
      pppuVar6 = (undefined8 ***)ppuStack_510;
      pppuVar8 = (undefined8 ***)local_518;
      if ((undefined8 ***)local_518 == (undefined8 ***)0x2) {
        local_a0 = local_4e0;
        ppuStack_c8 = ppuStack_508;
        local_d0 = ppuStack_510;
        ppuStack_b8 = ppuStack_4f8;
        ppuStack_c0 = ppuStack_500;
        uStack_a8 = uStack_4e8;
        local_b0 = local_4f0;
        ppuStack_88 = ppuStack_d90;
        local_90 = local_d98;
        ppuStack_78 = local_d80;
        ppuStack_80 = local_d88;
                    /* try { // try from 007b9764 to 007b976f has its CatchHandler @ 007b99bc */
        pppuVar6 = (undefined8 ***)
                   <alloc::io::error::core::io::error::Error>::new<rustls::error::Error>
                             (0x2a,&local_d0);
        pppuVar7 = (undefined8 ***)&DAT_00000004;
        local_1200 = local_d88;
        pppuVar8 = (undefined8 ***)ppuVar5;
        local_1210 = local_d98;
        ppuStack_1208 = ppuStack_d90;
      }
      else {
        memcpy(&local_11f0,&ppuStack_508,0x410);
        local_1200 = local_d80;
        local_1210 = ppuStack_d90;
        ppuStack_1208 = local_d88;
      }
      local_de0 = local_1210;
      ppuStack_dd8 = ppuStack_1208;
      local_dd0 = local_1200;
      memcpy(local_1620,&local_11f0,0x410);
      *(undefined8 ****)(param_2 + 0x48) = pppuVar7;
      *(undefined8 ***)(param_2 + 0x58) = ppuStack_1208;
      *(undefined8 ***)(param_2 + 0x50) = local_1210;
      *(undefined8 ***)(param_2 + 0x60) = local_1200;
      *(undefined8 ****)(param_2 + 0x68) = pppuVar8;
      *(undefined8 ****)(param_2 + 0x70) = pppuVar6;
      memcpy(param_2 + 0x78,local_1620,0x410);
      param_2[0x488] = 0;
      goto LAB_007b9598;
    }
LAB_007b9820:
    if ((param_2[0x3a] & 1) != 0) {
      plVar12 = *(long **)(param_2 + 0x30);
      do {
        lVar13 = *plVar12;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = lVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar13 + -1 == 0) {
        DataMemoryBarrier(2,1);
                    /* try { // try from 007b9848 to 007b984b has its CatchHandler @ 007b99e0 */
        <alloc::sync::[n]::alloc::sync::Arc<rustls::client::client_conn::ClientConfig>>::drop_slow()
        ;
      }
    }
    if (((((param_2[0x39] & 1) != 0) && ((*param_2 & 1) == 0)) && (*(long *)(param_2 + 8) != -1)) &&
       (*(long *)(param_2 + 8) != 0)) {
      free(*(void **)(param_2 + 0x10));
    }
    pppuVar7 = (undefined8 ***)0xffffffffffffffff;
  }
  else {
    if (bVar10 != 4) {
      uVar9 = *(undefined8 *)(param_2 + 0x40);
      lVar13 = *(long *)(param_2 + 0x48);
      goto LAB_007b961c;
    }
LAB_007b9598:
                    /* try { // try from 007b9598 to 007b95a7 has its CatchHandler @ 007b9a44 */
    FUN_007aadec(&local_518,param_2 + 0x48,param_3);
    ppuVar14 = (undefined **)ppuStack_508;
    pppuVar8 = (undefined8 ***)ppuStack_510;
    pppuVar7 = (undefined8 ***)local_518;
    if ((undefined8 ***)local_518 == (undefined8 ***)0xffffffffffffffff) {
      *param_1 = 0xfffffffffffffffe;
      bVar10 = 4;
      goto LAB_007b987c;
    }
    if ((undefined8 ***)local_518 == (undefined8 ***)0x2) {
      ppuStack_11e8 = ppuStack_508;
      local_11f0 = ppuStack_510;
      ppuStack_11d8 = ppuStack_4f8;
      local_11e0 = ppuStack_500;
      local_11d0 = local_4f0;
                    /* try { // try from 007b95dc to 007b95e3 has its CatchHandler @ 007b99f8 */
      FUN_007dfadc((ulong)&local_11f0 | 8);
      if ((int)local_11d0 != -1) {
        close((int)local_11d0);
      }
                    /* try { // try from 007b95f4 to 007b95fb has its CatchHandler @ 007b9a44 */
      FUN_007b6bac((ulong)&local_11f0 | 8);
      ppuVar14 = (undefined **)unaff_x24;
    }
    else {
      memcpy(auStack_d78,&ppuStack_500,0x430);
    }
                    /* try { // try from 007b97b4 to 007b97cf has its CatchHandler @ 007b9a3c */
    FUN_007b44b0(param_2 + 0x48);
    if (pppuVar7 == (undefined8 ***)0x2) {
      pppuVar7 = (undefined8 ***)
                 <core[bcece726f298455b]::io::error::Error>::new::
                 <core[bcece726f298455b]::io::error::Error>(0x2a,pppuVar8);
      local_518 = pppuVar7;
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      pppuVar8 = (undefined8 ***)FUN_004b25a4(8,8);
      if (pppuVar8 == (undefined8 ***)0x0) {
                    /* try { // try from 007b9994 to 007b999f has its CatchHandler @ 007b9a68 */
                    /* WARNING: Subroutine does not return */
        alloc::alloc::handle_alloc_error(8,8);
      }
      plVar12 = *(long **)(param_2 + 0x40);
      *pppuVar8 = pppuVar7;
      do {
        lVar13 = *plVar12;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = lVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar13 + -1 == 0) {
        DataMemoryBarrier(2,1);
                    /* try { // try from 007b9814 to 007b9817 has its CatchHandler @ 007b99f0 */
        <alloc::sync::[n]::alloc::sync::Arc<rustls::client::client_conn::ClientConfig>>::drop_slow()
        ;
      }
      ppuVar14 = &PTR_FUN_00adee50;
      goto LAB_007b9820;
    }
    memcpy(auStack_948,auStack_d78,0x430);
    plVar12 = *(long **)(param_2 + 0x40);
    do {
      lVar13 = *plVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = lVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar13 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 007b98d4 to 007b98d7 has its CatchHandler @ 007b99f0 */
      <alloc::sync::[n]::alloc::sync::Arc<rustls::client::client_conn::ClientConfig>>::drop_slow();
    }
  }
  *param_1 = pppuVar7;
  param_1[1] = pppuVar8;
  param_1[2] = ppuVar14;
  memcpy(param_1 + 3,auStack_948,0x430);
  bVar10 = 1;
LAB_007b987c:
  param_2[0x38] = bVar10;
  return;
}


// ===== 007b9b08  FUN_007b9b08 =====

void FUN_007b9b08(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x19;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if (*(char *)(param_2 + 3) != '\0') {
    if (*(char *)(param_2 + 3) == '\x01') {
      core::panicking::panic_const::panic_const_async_fn_resumed
                (&PTR_s__root__cargo_registry_src_index__00addbb0);
    }
    core::panicking::panic_const::panic_const_async_fn_resumed_panic();
                    /* catch() { ... } // from try @ 007b9b3c with catch @ 007b9bc0 */
    *(undefined1 *)(unaff_x19 + 0x18) = 2;
                    /* WARNING: Subroutine does not return */
    FUN_00ab2530();
  }
  uStack_48 = param_2[1];
  local_50 = *param_2;
  local_40 = param_2[2];
                    /* try { // try from 007b9b3c to 007b9b47 has its CatchHandler @ 007b9bc0 */
  uVar1 = <alloc::io::error::core::io::error::Error>::new<alloc::string::String>(0x2a,&local_50);
  local_50 = uVar1;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar2 = (undefined8 *)FUN_004b25a4(8,8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = uVar1;
    *param_1 = 0xffffffffffffffff;
    param_1[1] = puVar2;
    param_1[2] = &PTR_FUN_00adee50;
    *(undefined1 *)(param_2 + 3) = 1;
    return;
  }
                    /* try { // try from 007b9b98 to 007b9ba3 has its CatchHandler @ 007b9bcc */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,8);
}


// ===== 007b9bec  FUN_007b9bec =====

void FUN_007b9bec(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 extraout_x1;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  long local_188;
  undefined1 auStack_180 [336];
  
  uStack_1b8 = param_2[1];
  local_1c0 = *param_2;
  uStack_1a8 = param_2[3];
  uStack_1b0 = param_2[2];
  local_190 = param_2[6];
  uStack_198 = param_2[5];
  local_1a0 = param_2[4];
  <rustls::client::builder::[0]::rustls::builder::ConfigBuilder<rustls::client::client_conn::ClientConfig,rustls::client::builder::WantsClientCert>>
  ::with_client_auth_cert(&local_188,param_3,&local_1a0,&local_1c0);
  if (local_188 == 2) {
    uVar1 = FUN_0076dff0(0,extraout_x1,auStack_180);
    *param_1 = 2;
    param_1[1] = uVar1;
    return;
  }
  memcpy(param_1,&local_188,0x158);
  return;
}


// ===== 007b9c90  <reqwest::tls::[0]::reqwest::tls::Identity>::from_pem =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::tls::[0]::reqwest::tls::Identity>::from_pem */

void __rustcall
<reqwest::tls::[0]::reqwest::tls::Identity>::from_pem
          (long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  void *pvVar6;
  bool bVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  void *unaff_x20;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  long local_120;
  undefined1 *local_118;
  long local_110;
  long local_108;
  undefined1 *puStack_100;
  long local_f8;
  ulong local_f0;
  void *pvStack_e8;
  void *local_e0;
  undefined8 uStack_d8;
  long local_d0;
  undefined1 *puStack_c8;
  long local_c0;
  ulong local_b0;
  void *pvStack_a8;
  undefined8 *local_a0;
  undefined8 uStack_98;
  
  puVar11 = &DAT_00addbc8;
  uStack_128 = 0;
  local_120 = 0;
  local_118 = &DAT_00000008;
  local_110 = 0;
  local_108 = 0;
  puStack_100 = &DAT_00000008;
  local_f8 = 0;
  uStack_138 = param_2;
  local_130 = param_3;
LAB_007b9d04:
  do {
                    /* try { // try from 007b9d04 to 007b9d13 has its CatchHandler @ 007ba2e4 */
    rustls_pemfile::pemfile::read_one(&local_b0,&uStack_138,&DAT_00addbc8);
    uVar2 = uStack_98;
    puVar10 = local_a0;
    pvVar6 = pvStack_a8;
    uVar5 = local_b0;
    lVar14 = local_f8;
    lVar8 = local_110;
    if (local_b0 == 0xffffffffffffffff) break;
    if (local_b0 == 0xfffffffffffffffe) {
      local_f0 = 0xffffffffffffffff;
      pvStack_e8 = pvStack_a8;
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar12 = 0x19;
      auVar15 = FUN_004b25a4(0x19,1);
      uVar3 = _UNK_002e3df4;
      uVar2 = _DAT_002e3de3;
      pvStack_a8 = _UNK_0029f338;
      local_b0 = _DAT_0029f330;
      local_a0 = auVar15._0_8_;
      if (local_a0 == (undefined8 *)0x0) goto LAB_007ba1fc;
      uVar12 = CONCAT17(UNK_002e3df3,_DAT_002e3dec);
      local_a0[1] = CONCAT71(_DAT_002e3dec,UNK_002e3deb);
      *local_a0 = uVar2;
      *(undefined8 *)((long)local_a0 + 0x11) = uVar3;
      *(undefined8 *)((long)local_a0 + 9) = uVar12;
      uStack_98 = 0x19;
                    /* try { // try from 007b9ee0 to 007b9eeb has its CatchHandler @ 007ba220 */
      lVar8 = FUN_0076dff0(0,auVar15._8_8_,&local_b0);
      *param_1 = -1;
      param_1[1] = lVar8;
      if ((1 < ((ulong)pvVar6 & 3) - 2) && (((ulong)pvVar6 & 3) != 0)) {
        pvStack_a8 = (void *)((long)pvVar6 + -1);
        local_b0 = CONCAT71(local_b0._1_7_,3);
                    /* try { // try from 007b9f20 to 007b9f27 has its CatchHandler @ 007ba21c */
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&pvStack_a8);
      }
      goto LAB_007ba0d0;
    }
    uStack_d8 = uStack_98;
    local_e0 = local_a0;
    pvStack_e8 = pvStack_a8;
    local_f0 = local_b0;
    unaff_x20 = pvVar6;
    if ((long)local_b0 < 3) {
      if (local_b0 == 0) {
        if (local_f8 == local_108) {
                    /* try { // try from 007b9dc8 to 007b9dcf has its CatchHandler @ 007ba2a0 */
          <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<rustls::msgs::handshake::DistinguishedName>>
          ::grow_one(&local_108);
        }
        local_f8 = lVar14 + 1;
        puVar9 = (undefined8 *)(puStack_100 + lVar14 * 0x18);
        *puVar9 = pvVar6;
        puVar9[1] = puVar10;
        puVar9[2] = uVar2;
        goto LAB_007b9d04;
      }
      if (local_b0 != 2) {
LAB_007ba064:
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        uVar12 = 0x1e;
        auVar15 = FUN_004b25a4(0x1e,1);
        uVar3 = _UNK_002e3ddb;
        uVar2 = _DAT_002e3dc5;
        pvStack_a8 = _UNK_002a0bc8;
        local_b0 = _DAT_002a0bc0;
        local_a0 = auVar15._0_8_;
        if (local_a0 == (undefined8 *)0x0) {
LAB_007ba1fc:
                    /* WARNING: Subroutine does not return */
          alloc::raw_vec::handle_error(1,uVar12);
        }
        uVar12 = CONCAT62(_UNK_002e3dd5,_DAT_002e3dd3);
        local_a0[1] = CONCAT26(_DAT_002e3dd3,_UNK_002e3dcd);
        *local_a0 = uVar2;
        *(undefined8 *)((long)local_a0 + 0x16) = uVar3;
        *(undefined8 *)((long)local_a0 + 0xe) = uVar12;
        uStack_98 = 0x1e;
                    /* try { // try from 007ba0a8 to 007ba207 has its CatchHandler @ 007ba270 */
        lVar8 = FUN_0076dff0(0,auVar15._8_8_,&local_b0);
        *param_1 = -1;
        param_1[1] = lVar8;
        if (((4 < uVar5) || (uVar5 == 1)) && ((long)pvVar6 - 1U < 0xfffffffffffffffe)) {
          free(local_e0);
        }
LAB_007ba0d0:
        if (local_f8 != 0) {
          puVar10 = (undefined8 *)(puStack_100 + 8);
          lVar8 = local_f8;
          do {
            if ((puVar10[-1] != -1) && (puVar10[-1] != 0)) {
              free((void *)*puVar10);
            }
            lVar8 = lVar8 + -1;
            puVar10 = puVar10 + 3;
          } while (lVar8 != 0);
        }
        if (local_108 != 0) {
          free(puStack_100);
        }
        if (local_110 != 0) {
          puVar10 = (undefined8 *)(local_118 + 0x10);
          lVar8 = local_110;
          do {
            if ((puVar10[-1] != -1) && (puVar10[-1] != 0)) {
              free((void *)*puVar10);
            }
            lVar8 = lVar8 + -1;
            puVar10 = puVar10 + 4;
          } while (lVar8 != 0);
        }
        if (local_120 == 0) {
          return;
        }
        free(local_118);
        return;
      }
      if (local_110 == local_120) {
                    /* try { // try from 007b9d60 to 007b9d67 has its CatchHandler @ 007ba2a4 */
        <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<rustls_pki_types::PrivateKeyDer>>::grow_one
                  (&local_120);
      }
      puVar9 = (undefined8 *)(local_118 + lVar8 * 0x20);
      *puVar9 = 0;
    }
    else if (local_b0 == 3) {
      if (local_110 == local_120) {
                    /* try { // try from 007b9e00 to 007b9e07 has its CatchHandler @ 007ba2a8 */
        <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<rustls_pki_types::PrivateKeyDer>>::grow_one
                  (&local_120);
      }
      puVar9 = (undefined8 *)(local_118 + lVar8 * 0x20);
      *puVar9 = 2;
    }
    else {
      if (local_b0 != 4) goto LAB_007ba064;
      if (local_110 == local_120) {
                    /* try { // try from 007b9d9c to 007b9da3 has its CatchHandler @ 007ba2ac */
        <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<rustls_pki_types::PrivateKeyDer>>::grow_one
                  (&local_120);
      }
      puVar9 = (undefined8 *)(local_118 + lVar8 * 0x20);
      *puVar9 = 1;
    }
    local_110 = lVar8 + 1;
    puVar9[1] = pvVar6;
    puVar9[2] = puVar10;
    puVar9[3] = uVar2;
  } while( true );
  if (local_110 == 0) {
    bVar7 = true;
LAB_007b9f30:
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    auVar15 = FUN_004b25a4(0x24,1);
    uVar4 = _UNK_002e3db9;
    uVar12 = _DAT_002e3db1;
    uVar3 = _UNK_002e3da9;
    uVar2 = _DAT_002e3da1;
    local_a0 = auVar15._0_8_;
    if (local_a0 != (undefined8 *)0x0) {
      *(undefined4 *)(local_a0 + 4) = 0x646e756f;
      pvStack_a8 = _UNK_0029fee8;
      local_b0 = _DAT_0029fee0;
      local_a0[1] = uVar3;
      *local_a0 = uVar2;
      local_a0[3] = uVar4;
      local_a0[2] = uVar12;
      uStack_98 = 0x24;
                    /* try { // try from 007b9f74 to 007b9f7f has its CatchHandler @ 007ba234 */
      lVar8 = FUN_0076dff0(0,auVar15._8_8_,&local_b0);
      *param_1 = -1;
      param_1[1] = lVar8;
      if (local_f8 != 0) {
        puVar10 = (undefined8 *)(puStack_100 + 8);
        lVar8 = local_f8;
        do {
          if ((puVar10[-1] != -1) && (puVar10[-1] != 0)) {
            free((void *)*puVar10);
          }
          lVar8 = lVar8 + -1;
          puVar10 = puVar10 + 3;
        } while (lVar8 != 0);
      }
      if (local_108 != 0) {
        free(puStack_100);
      }
      if (local_110 != 0) {
        puVar10 = (undefined8 *)(local_118 + 0x10);
        lVar8 = local_110;
        do {
          if ((puVar10[-1] != -1) && (puVar10[-1] != 0)) {
            free((void *)*puVar10);
          }
          lVar8 = lVar8 + -1;
          puVar10 = puVar10 + 4;
        } while (lVar8 != 0);
      }
      if (local_120 != 0) {
        free(local_118);
      }
      if (puVar11 + 1 < (undefined *)0x2) {
        bVar7 = true;
      }
      if (!bVar7) {
        free(unaff_x20);
      }
      return;
    }
                    /* try { // try from 007ba20c to 007ba217 has its CatchHandler @ 007ba234 */
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(1,0x24);
  }
  lVar14 = local_110 + -1;
  plVar1 = (long *)(local_118 + lVar14 * 0x20);
  lVar8 = *plVar1;
  puVar11 = (undefined *)plVar1[1];
  unaff_x20 = (void *)plVar1[2];
  bVar7 = lVar8 == -1;
  local_110 = lVar14;
  if ((bVar7) || (local_f8 == 0)) goto LAB_007b9f30;
  lVar13 = plVar1[3];
  puStack_c8 = puStack_100;
  local_d0 = local_108;
  local_c0 = local_f8;
  if (lVar14 != 0) {
    puVar10 = (undefined8 *)(local_118 + 0x10);
    do {
      if ((puVar10[-1] != -1) && (puVar10[-1] != 0)) {
        free((void *)*puVar10);
      }
      lVar14 = lVar14 + -1;
      puVar10 = puVar10 + 4;
    } while (lVar14 != 0);
    if (local_120 == 0) goto LAB_007ba1a0;
  }
  free(local_118);
LAB_007ba1a0:
  *param_1 = lVar8;
  param_1[1] = (long)puVar11;
  param_1[2] = (long)unaff_x20;
  param_1[3] = lVar13;
  param_1[5] = (long)puStack_c8;
  param_1[4] = local_d0;
  param_1[6] = local_c0;
  return;
}


// ===== 007ba300  FUN_007ba300 =====

void FUN_007ba300(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)FUN_004b25a4(0xc0,8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[6] = 0xffffffffffffffff;
    puVar1[2] = 0;
    puVar1[4] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar1[1] = 1;
    *puVar1 = 1;
    *(undefined4 *)(puVar1 + 0xb) = 0xffffffff;
    *(undefined4 *)(puVar1 + 0xd) = 0xffffffff;
    *(undefined4 *)(puVar1 + 0xf) = 0xffffffff;
    puVar1[0x10] = 0;
    *(undefined4 *)(puVar1 + 0x11) = 300000000;
    *(undefined4 *)(puVar1 + 0x13) = 0xffffffff;
    *(undefined2 *)(puVar1 + 0x14) = 1;
    *(undefined1 *)((long)puVar1 + 0xa6) = 0;
    *(undefined2 *)((long)puVar1 + 0xb7) = 0;
    *param_1 = puVar1;
    param_1[1] = param_2;
    param_1[2] = param_3;
    return;
  }
                    /* try { // try from 007ba3a4 to 007ba3af has its CatchHandler @ 007ba3b4 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0xc0);
}


// ===== 007ba3e4  <reqwest::tls::[1]::reqwest::tls::CertificateRevocationList>::from_pem_bundle =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::tls::[1]::reqwest::tls::CertificateRevocationList>::from_pem_bundle */

void __rustcall
<reqwest::tls::[1]::reqwest::tls::CertificateRevocationList>::from_pem_bundle
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  void *local_68;
  long local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  local_68 = (void *)FUN_004b25a4(0x2000,1);
  if (local_68 != (void *)0x0) {
    local_58 = 0;
    uStack_50 = 0;
    local_60 = 0x2000;
    local_48 = 0;
                    /* try { // try from 007ba42c to 007ba43f has its CatchHandler @ 007ba474 */
    local_40 = param_2;
    uStack_38 = param_3;
    FUN_00777818(param_1,&local_68,&PTR_FUN_00addc50);
    if (local_60 != 0) {
      free(local_68);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(1,0x2000);
}


// ===== 007ba494  <reqwest::tls::[1]::reqwest::tls::CertificateRevocationList>::from_pem =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::tls::[1]::reqwest::tls::CertificateRevocationList>::from_pem */

void __rustcall
<reqwest::tls::[1]::reqwest::tls::CertificateRevocationList>::from_pem
          (size_t *param_1,void *param_2,size_t param_3)

{
  void *__dest;
  
  if (param_3 == 0) {
    *param_1 = 0;
    param_1[1] = 1;
    param_1[2] = 0;
    return;
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  __dest = (void *)FUN_004b25a4(param_3,1);
  if (__dest != (void *)0x0) {
    memcpy(__dest,param_2,param_3);
    *param_1 = param_3;
    param_1[1] = (size_t)__dest;
    param_1[2] = param_3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(1,param_3);
}


// ===== 007ba518  FUN_007ba518 =====

void * FUN_007ba518(long *param_1,undefined8 param_2)

{
  void *__ptr;
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  void *pvVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long local_128 [7];
  long local_f0;
  void *pvStack_e8;
  long local_e0;
  undefined8 uStack_d8;
  void *local_d0;
  void *pvStack_c8;
  void *local_c0;
  void *pvStack_b8;
  long local_b0 [7];
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (*param_1 == 1) {
    pvStack_e8 = (void *)param_1[2];
    local_f0 = param_1[1];
    local_e0 = param_1[3];
    uStack_d8 = 0;
                    /* try { // try from 007ba558 to 007ba56b has its CatchHandler @ 007ba778 */
    FUN_0077790c(&local_d0,&local_f0,&PTR_FUN_00addcd8);
    pvVar1 = local_c0;
    __ptr = pvStack_c8;
    pvVar2 = local_d0;
    pvVar3 = pvStack_c8;
    if (local_d0 == (void *)0xffffffffffffffff) {
LAB_007ba738:
      if (local_f0 == 0) {
        return pvVar3;
      }
      free(pvStack_e8);
      return pvVar3;
    }
    local_d0 = pvStack_c8;
    lVar6 = (long)local_c0 * 0x18;
    pvVar3 = (void *)((long)pvStack_c8 + lVar6);
    local_c0 = pvVar2;
    pvVar4 = pvStack_c8;
    pvStack_b8 = pvVar3;
    if (pvVar1 != (void *)0x0) {
      lVar8 = 0;
      do {
        if (*(long *)((long)pvStack_c8 + lVar8) == -1) {
          pvVar4 = (void *)((long)pvStack_c8 + lVar8 + 0x18);
          break;
        }
        uStack_68 = *(undefined8 *)((long)pvStack_c8 + lVar8 + 0x10);
        local_70 = *(undefined8 *)((long)pvStack_c8 + lVar8 + 8);
                    /* try { // try from 007ba5bc to 007ba5cb has its CatchHandler @ 007ba780 */
        local_78 = *(long *)((long)pvStack_c8 + lVar8);
        <rustls::webpki::anchors::rustls::webpki::anchors::RootCertStore>::add
                  (local_b0,param_2,&local_78);
        if (local_b0[0] != -1) {
          pvStack_c8 = (void *)((long)pvStack_c8 + lVar8 + 0x18);
                    /* try { // try from 007ba6bc to 007ba6c7 has its CatchHandler @ 007ba770 */
          pvVar3 = (void *)FUN_0076dff0(0,extraout_x1,local_b0);
          if (lVar6 + -0x18 != lVar8) {
            puVar7 = (undefined8 *)((long)__ptr + lVar8 + 0x20);
            uVar5 = ((lVar6 - lVar8) - 0x18U) / 0x18;
            do {
              if (puVar7[-1] != 0) {
                free((void *)*puVar7);
              }
              uVar5 = uVar5 - 1;
              puVar7 = puVar7 + 3;
            } while (uVar5 != 0);
          }
          if (pvVar2 != (void *)0x0) {
            free(__ptr);
          }
          goto LAB_007ba738;
        }
        lVar8 = lVar8 + 0x18;
        pvVar4 = pvVar3;
      } while (lVar6 - lVar8 != 0);
    }
    pvStack_c8 = pvVar4;
    if ((long)pvVar3 - (long)pvVar4 != 0) {
      puVar7 = (undefined8 *)((long)pvVar4 + 8);
      uVar5 = (ulong)((long)pvVar3 - (long)pvVar4) / 0x18;
      do {
        if (puVar7[-1] != 0) {
          free((void *)*puVar7);
        }
        uVar5 = uVar5 - 1;
        puVar7 = puVar7 + 3;
      } while (uVar5 != 0);
    }
    if (pvVar2 != (void *)0x0) {
      free(__ptr);
    }
    if (local_f0 != 0) {
      free(pvStack_e8);
    }
  }
  else {
    local_c0 = (void *)param_1[3];
    pvStack_c8 = (void *)param_1[2];
    local_d0 = (void *)param_1[1];
    <rustls::webpki::anchors::rustls::webpki::anchors::RootCertStore>::add
              (local_128,param_2,&local_d0);
    if (local_128[0] != -1) {
      pvVar2 = (void *)FUN_0076dff0(0,extraout_x1_00,local_128);
      return pvVar2;
    }
  }
  return (void *)0x0;
}


// ===== 007ba7b4  <reqwest::tls::reqwest::tls::Certificate>::from_pem_bundle =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::tls::reqwest::tls::Certificate>::from_pem_bundle */

void __rustcall
<reqwest::tls::reqwest::tls::Certificate>::from_pem_bundle
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  void *local_80;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  void *pvStack_40;
  long local_38;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  local_80 = (void *)FUN_004b25a4(0x2000,1);
  if (local_80 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(1,0x2000);
  }
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0x2000;
  local_60 = 0;
                    /* try { // try from 007ba7fc to 007ba80f has its CatchHandler @ 007ba8fc */
  local_58 = param_2;
  uStack_50 = param_3;
  FUN_007779f8(&local_48,&local_80,&PTR_FUN_00addc50);
  if (local_48 == -1) {
    *param_1 = 0xffffffffffffffff;
    param_1[1] = pvStack_40;
    pvStack_40 = local_80;
    local_48 = local_78;
  }
  else {
                    /* try { // try from 007ba830 to 007ba83b has its CatchHandler @ 007ba8d4 */
    FUN_00777ae4(param_1,pvStack_40,(void *)((long)pvStack_40 + local_38 * 0x18));
    if (local_78 != 0) {
      free(local_80);
    }
    if (local_38 != 0) {
      puVar1 = (undefined8 *)((long)pvStack_40 + 8);
      lVar2 = local_38;
      do {
        if (puVar1[-1] != 0) {
          free((void *)*puVar1);
        }
        lVar2 = lVar2 + -1;
        puVar1 = puVar1 + 3;
      } while (lVar2 != 0);
    }
  }
  if (local_48 != 0) {
    free(pvStack_40);
  }
  return;
}


// ===== 007ba91c  <reqwest::tls::reqwest::tls::Certificate>::from_der =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::tls::reqwest::tls::Certificate>::from_der */

void __rustcall
<reqwest::tls::reqwest::tls::Certificate>::from_der
          (undefined8 *param_1,void *param_2,size_t param_3)

{
  void *__dest;
  
  if (param_3 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 1;
    param_1[3] = 0;
    return;
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  __dest = (void *)FUN_004b25a4(param_3,1);
  if (__dest != (void *)0x0) {
    memcpy(__dest,param_2,param_3);
    *param_1 = 0;
    param_1[1] = param_3;
    param_1[2] = __dest;
    param_1[3] = param_3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(1,param_3);
}


// ===== 007ba9a0  <reqwest::tls::reqwest::tls::Certificate>::from_pem =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::tls::reqwest::tls::Certificate>::from_pem */

void __rustcall
<reqwest::tls::reqwest::tls::Certificate>::from_pem
          (undefined8 *param_1,void *param_2,size_t param_3)

{
  undefined1 *__dest;
  
  if (param_3 == 0) {
    __dest = &DAT_00000001;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    __dest = (undefined1 *)FUN_004b25a4(param_3,1);
    if (__dest == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(1,param_3);
    }
    memcpy(__dest,param_2,param_3);
  }
  *param_1 = 1;
  param_1[1] = param_3;
  param_1[2] = __dest;
  param_1[3] = param_3;
  return;
}


// ===== 007baa14  <reqwest::tls::ClientCert_as_core::clone::Clone>::clone =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::tls::ClientCert as core::clone::Clone>::clone */

void __rustcall
<reqwest::tls::ClientCert_as_core::clone::Clone>::clone(undefined8 *param_1,long param_2)

{
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  <rustls_pki_types::rustls_pki_types::PrivateKeyDer>::clone_key(&local_58);
                    /* try { // try from 007baa34 to 007baa3f has its CatchHandler @ 007baa6c */
  FUN_00789e4c(&local_38,param_2 + 0x20);
  param_1[1] = uStack_50;
  *param_1 = local_58;
  param_1[3] = uStack_40;
  param_1[2] = local_48;
  param_1[5] = uStack_30;
  param_1[4] = local_38;
  param_1[6] = local_28;
  return;
}


// ===== 007baa90  FUN_007baa90 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007baa90(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a02f0;
  param_1[1] = _UNK_002a02f8;
  *param_1 = uVar1;
  return;
}


// ===== 007baaa4  FUN_007baaa4 =====

undefined8 FUN_007baaa4(void)

{
  return 1;
}


// ===== 007baaac  FUN_007baaac =====

void FUN_007baaac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_2[3];
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar2 = (undefined8 *)FUN_004b25a4(0x10,8);
  if (puVar2 != (undefined8 *)0x0) {
    uVar5 = param_2[1];
    uVar4 = *param_2;
    uVar3 = param_2[2];
    *(undefined1 *)(param_1 + 6) = 0;
    param_1[1] = uVar5;
    *param_1 = uVar4;
    param_1[2] = uVar3;
    param_1[3] = uVar1;
    puVar2[1] = 1;
    *puVar2 = 1;
    param_1[4] = puVar2;
    param_1[5] = &DAT_00addd60;
    return;
  }
                    /* try { // try from 007bab30 to 007bab3b has its CatchHandler @ 007bab40 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x10);
}


// ===== 007bab78  FUN_007bab78 =====

void FUN_007bab78(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,&DAT_002a19f8,8,&local_18,&DAT_00addd80);
  return;
}


// ===== 007babb8  FUN_007babb8 =====

void FUN_007babb8(void)

{
  return;
}


// ===== 007babc4  FUN_007babc4 =====

void FUN_007babc4(void)

{
  return;
}


// ===== 007babd0  FUN_007babd0 =====

void FUN_007babd0(void)

{
  return;
}


// ===== 007babdc  FUN_007babdc =====

void FUN_007babdc(long *param_1)

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
LAB_007bac04:
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
      if (unaff_x20 == (undefined1 *)0x0) goto LAB_007bac04;
      memcpy(unaff_x20,__src,__n);
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      psVar1 = (size_t *)FUN_004b25a4(0x18,8);
    }
  }
  if (psVar1 == (size_t *)0x0) {
                    /* try { // try from 007baca8 to 007bacb3 has its CatchHandler @ 007bacb8 */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x18);
  }
  *psVar1 = __n;
  psVar1[1] = (size_t)unaff_x20;
  psVar1[2] = __n;
  return;
}


// ===== 007bacdc  FUN_007bacdc =====

void FUN_007bacdc(undefined8 *param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,&DAT_002e4d9c + *(int *)(&DAT_002e4d9c + (ulong)*(byte *)*param_1 * 4),6);
  return;
}


// ===== 007bad00  FUN_007bad00 =====

void FUN_007bad00(undefined8 *param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x007bad2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_007bad30 + (ulong)(byte)(&DAT_002e3cfe)[*(byte *)*param_1] * 4))(param_2);
  return;
}


// ===== 007baf88  FUN_007baf88 =====

void FUN_007baf88(undefined8 *param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,&DAT_002e5008 + *(int *)(&DAT_002e5008 + (ulong)*(byte *)*param_1 * 4),
             *(undefined8 *)(&DAT_002e4db0 + (ulong)*(byte *)*param_1 * 8));
  return;
}


// ===== 007bafb4  FUN_007bafb4 =====

void FUN_007bafb4(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)*param_1 ^ 0x8000000000000000;
  if (-1 < (long)*(ulong *)*param_1) {
    uVar1 = 0xd;
  }
                    /* WARNING: Could not recover jumptable at 0x007baff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_007baff4 + (ulong)(byte)(&UNK_002e3d13)[uVar1] * 4))(param_2);
  return;
}


// ===== 007bb2f4  FUN_007bb2f4 =====

void FUN_007bb2f4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = 7;
  if (*(char *)*param_1 == '\0') {
    uVar1 = 0xb;
  }
  puVar2 = &UNK_002e4071;
  if (*(char *)*param_1 == '\0') {
    puVar2 = &UNK_002e4066;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,puVar2,uVar1);
  return;
}


// ===== 007bb32c  FUN_007bb32c =====

void FUN_007bb32c(undefined8 *param_1,undefined8 param_2)

{
  ulong *local_18;
  
  local_18 = (ulong *)*param_1;
  switch(*local_18 ^ 0x8000000000000000) {
  case 0:
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002e4b18,0x19);
    return;
  case 1:
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002e4b31,0x25);
    return;
  case 2:
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002e4b56,0x21);
    return;
  case 3:
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002e4b77,0x19);
    return;
  case 4:
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002e4b90,0x1c);
    return;
  case 5:
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002e4bac,0x2c);
    return;
  case 6:
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002e4bd8,0x16);
    return;
  case 7:
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002e4bee,0x18);
    return;
  case 8:
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002e4c06,0x12);
    return;
  case 9:
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002e4c18,0x1a);
    return;
  case 10:
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002e4c32,0x17);
    return;
  case 0xb:
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002e4c49,0x1d);
    return;
  case 0xc:
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002e4c66,0x2f);
    return;
  case 0xd:
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002e4c95,0x25);
    return;
  case 0xe:
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002e4cba,0x24);
    return;
  case 0xf:
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002e4cde,0x22);
    return;
  case 0x10:
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002e4d00,0xf);
    return;
  case 0x11:
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002e4d0f,0x18);
    return;
  case 0x12:
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002e4d27,0x14);
    return;
  case 0x13:
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002e4d3b,0x1c);
    return;
  case 0x14:
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002e4d57,0x23);
    return;
  default:
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002e4d7a,0x22,&local_18,&DAT_00addfa0);
    return;
  }
}


// ===== 007bb4e4  FUN_007bb4e4 =====

void FUN_007bb4e4(long *param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x007bb504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_007bb508 + (ulong)(byte)(&DAT_002e3d39)[*(long *)*param_1] * 4))
            ((long *)*param_1 + 1,param_2);
  return;
}


// ===== 007bb5e0  FUN_007bb5e0 =====

void FUN_007bb5e0(undefined8 *param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,&DAT_002e5150 + *(int *)(&DAT_002e5150 + (ulong)*(byte *)*param_1 * 4),
             *(undefined8 *)(&DAT_002e5138 + (ulong)*(byte *)*param_1 * 8));
  return;
}


// ===== 007bb60c  <reqwest::tls::Certificate_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::tls::Certificate as core::fmt::Debug>::fmt */

void __rustcall
<reqwest::tls::Certificate_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,&DAT_002e3dfc,0xb);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish(auStack_20);
  return;
}


// ===== 007bb644  FUN_007bb644 =====

void * FUN_007bb644(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  void *__dest;
  long lVar4;
  undefined8 local_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined8 local_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 local_980;
  undefined8 uStack_978;
  undefined8 local_970;
  long *plStack_968;
  long *local_960;
  undefined8 uStack_958;
  undefined1 local_30;
  
  local_9c0 = 0;
  plStack_968 = (long *)*param_1;
  do {
    lVar4 = *plStack_968;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plStack_968,0x10);
    if (bVar2) {
      *plStack_968 = lVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (-1 < lVar4) {
    uStack_958 = param_1[2];
    local_960 = (long *)param_1[1];
    do {
      lVar4 = *local_960;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(local_960,0x10);
      if (bVar2) {
        *local_960 = lVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (-1 < lVar4) {
      uStack_998 = param_2[5];
      local_9a0 = param_2[4];
      uStack_988 = param_2[7];
      uStack_990 = param_2[6];
      uStack_978 = param_2[9];
      local_980 = param_2[8];
      local_970 = param_2[10];
      local_30 = 0;
      uStack_9b8 = param_2[1];
      local_9c0 = *param_2;
      uStack_9a8 = param_2[3];
      uStack_9b0 = param_2[2];
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      __dest = (void *)FUN_004b25a4(0x998,8);
      if (__dest != (void *)0x0) {
        memcpy(__dest,&local_9c0,0x998);
        return __dest;
      }
                    /* try { // try from 007bb6ec to 007bb6f7 has its CatchHandler @ 007bb6fc */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x998);
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x7bb6fc);
  (*pcVar3)();
}


// ===== 007bb714  <reqwest::tls::Identity_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::tls::Identity as core::fmt::Debug>::fmt */

void __rustcall
<reqwest::tls::Identity_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,&DAT_002a1998,8);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish(auStack_20);
  return;
}


// ===== 007bb74c  <reqwest::tls::CertificateRevocationList_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::tls::CertificateRevocationList as core::fmt::Debug>::fmt */

void __rustcall
<reqwest::tls::CertificateRevocationList_as_core::fmt::Debug>::fmt
          (undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,&DAT_002e3e07,0x19);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish(auStack_20);
  return;
}


// ===== 007bb784  <reqwest::tls::TlsBackend_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::tls::TlsBackend as core::fmt::Debug>::fmt */

void __rustcall
<reqwest::tls::TlsBackend_as_core::fmt::Debug>::fmt(ulong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  long lVar2;
  
  uVar1 = *param_2;
  lVar2 = *param_1 - 2;
  UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0x18);
  if (*param_1 < 2) {
    lVar2 = 1;
  }
  if (lVar2 != 0) {
    if (lVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x007bb7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(uVar1,&UNK_002e3e26,0xb);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x007bb7d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(uVar1,&UNK_002e3e31,0x14);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007bb7c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,&UNK_002e3e20,6);
  return;
}


// ===== 007bb7d8  <reqwest::tls::NoVerifier_as_rustls::verify::ServerCertVerifier>::supported_verify_schemes =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::tls::NoVerifier as rustls::verify::ServerCertVerifier>::supported_verify_schemes */

void __rustcall
<reqwest::tls::NoVerifier_as_rustls::verify::ServerCertVerifier>::supported_verify_schemes
          (undefined8 *param_1)

{
  undefined2 *puVar1;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined2 *)FUN_004b25a4(0x34,2);
  if (puVar1 != (undefined2 *)0x0) {
    *puVar1 = 0;
    puVar1[2] = 1;
    puVar1[6] = 3;
    puVar1[8] = 4;
    puVar1[10] = 5;
    puVar1[0xc] = 6;
    puVar1[0xe] = 7;
    puVar1[0x10] = 8;
    puVar1[0x12] = 9;
    puVar1[0x14] = 10;
    puVar1[0x16] = 0xb;
    puVar1[0x18] = 0xc;
    puVar1[4] = 2;
    *param_1 = 0xd;
    param_1[1] = puVar1;
    param_1[2] = 0xd;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(2,0x34);
}


// ===== 007bb884  FUN_007bb884 =====

undefined1  [16] FUN_007bb884(long param_1,code *param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  int iVar4;
  undefined8 *__dest;
  long lVar5;
  undefined **ppuVar6;
  undefined1 auVar7 [16];
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  long *local_510;
  undefined4 local_508;
  undefined3 uStack_504;
  code *local_500;
  undefined8 uStack_4f8;
  undefined1 local_4f0;
  undefined7 uStack_4ef;
  undefined8 local_4e0;
  undefined **ppuStack_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  ulong local_4c0;
  undefined **ppuStack_4b8;
  long *plStack_4b0;
  ulong local_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  
  if (*param_2 == (code)0x0) {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    __dest = (undefined8 *)FUN_004b25a4(1,1);
    if (__dest == (undefined8 *)0x0) {
                    /* try { // try from 007bbb5c to 007bbb67 has its CatchHandler @ 007bbc6c */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(1,1);
    }
    *(undefined1 *)__dest = 0;
    ppuVar6 = &PTR_FUN_00addf40;
  }
  else {
                    /* try { // try from 007bb8b0 to 007bb8c3 has its CatchHandler @ 007bbbe4 */
    iVar4 = <http::uri::scheme::Scheme_as_core::cmp::PartialEq>::eq(param_2,&DAT_002a02b0);
    if ((iVar4 != 0) && ((*(byte *)(param_1 + 0x30) & 1) == 0)) {
      ppuStack_4b8 = *(undefined ***)(param_2 + 0x28);
      local_4c0 = *(ulong *)(param_2 + 0x20);
      local_4a8 = *(ulong *)(param_2 + 0x38);
      plStack_4b0 = *(long **)(param_2 + 0x30);
      uStack_498 = *(undefined8 *)(param_2 + 0x48);
      local_4a0 = *(undefined8 *)(param_2 + 0x40);
      local_490 = *(undefined8 *)(param_2 + 0x50);
      ppuStack_4d8 = *(undefined ***)(param_2 + 8);
      local_4e0 = *(code ***)param_2;
      local_4c8 = *(undefined8 *)(param_2 + 0x18);
      uStack_4d0 = *(undefined8 *)(param_2 + 0x10);
      local_4e0 = (code **)FUN_007bb644(param_1,&local_4e0);
      local_4c0 = local_4c0 & 0xffffffffffffff00;
      ppuStack_4d8 = &PTR_FUN_00adde00;
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      __dest = (undefined8 *)FUN_004b25a4(0x28,8);
      if (__dest == (undefined8 *)0x0) {
                    /* try { // try from 007bbb6c to 007bbb77 has its CatchHandler @ 007bbc58 */
                    /* WARNING: Subroutine does not return */
        alloc::alloc::handle_alloc_error(8,0x28);
      }
      ppuVar6 = &PTR_FUN_00addec0;
      __dest[1] = ppuStack_4d8;
      *__dest = local_4e0;
      __dest[3] = local_4c8;
      __dest[2] = uStack_4d0;
      __dest[4] = local_4c0;
      goto LAB_007bba94;
    }
                    /* try { // try from 007bb968 to 007bb977 has its CatchHandler @ 007bbbe4 */
    iVar4 = <http::uri::scheme::Scheme_as_core::cmp::PartialEq>::eq(param_2,&DAT_0029f4e0);
    if (iVar4 == 0) {
      local_4e0 = &local_500;
      ppuStack_4d8 = (undefined **)FUN_007c75ec;
      local_500 = param_2;
      alloc::fmt::format::format_inner(&local_528,&DAT_002aff74,&local_4e0);
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      __dest = (undefined8 *)FUN_004b25a4(0x20,8);
      if (__dest == (undefined8 *)0x0) {
                    /* try { // try from 007bbb7c to 007bbb87 has its CatchHandler @ 007bbc3c */
                    /* WARNING: Subroutine does not return */
        alloc::alloc::handle_alloc_error(8,0x20);
      }
      *__dest = local_528;
      __dest[1] = uStack_520;
      __dest[2] = local_518;
      ppuVar6 = &PTR_FUN_00addf20;
      *(undefined1 *)(__dest + 3) = 0;
    }
    else {
      local_510 = *(long **)(param_1 + 0x18);
      do {
        lVar5 = *local_510;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(local_510,0x10);
        if (bVar2) {
          *local_510 = lVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x7bbbac);
        (*pcVar3)();
      }
                    /* try { // try from 007bb9ac to 007bb9bb has its CatchHandler @ 007bbbdc */
      (**(code **)(*(long *)(param_1 + 0x28) + 0x18))
                (&local_4e0,
                 *(long *)(param_1 + 0x20) +
                 (*(long *)(*(long *)(param_1 + 0x28) + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
                 param_2);
      cVar1 = (char)local_4e0;
      if ((char)local_4e0 != '\x02') {
        local_4a8 = *(ulong *)(param_2 + 0x38);
        plStack_4b0 = *(long **)(param_2 + 0x30);
        uStack_498 = *(undefined8 *)(param_2 + 0x48);
        local_4a0 = *(undefined8 *)(param_2 + 0x40);
        local_4c8 = *(undefined8 *)(param_2 + 0x18);
        uStack_4d0 = *(undefined8 *)(param_2 + 0x10);
        ppuStack_4b8 = *(undefined ***)(param_2 + 0x28);
        local_4c0 = *(ulong *)(param_2 + 0x20);
        local_490 = *(undefined8 *)(param_2 + 0x50);
        uStack_504 = (undefined3)((ulong)local_4e0 >> 0x28);
        ppuStack_4d8 = *(undefined ***)(param_2 + 8);
                    /* try { // try from 007bbaec to 007bbaf7 has its CatchHandler @ 007bbbac */
        local_508 = local_4e0._1_4_;
        local_4e0 = (code **)*(undefined8 *)param_2;
        local_4c0 = FUN_007bb644(param_1,&local_4e0);
        ppuStack_4b8 = &PTR_FUN_00adde00;
        plStack_4b0 = local_510;
        local_4e0 = (code **)CONCAT44(CONCAT31(uStack_504,local_508._3_1_),
                                      (int)CONCAT41(local_508,cVar1));
        local_4a8 = local_4a8 & 0xffffffffffffff00;
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        __dest = (undefined8 *)FUN_004b25a4(0x490,8);
        if (__dest == (undefined8 *)0x0) {
                    /* try { // try from 007bbb9c to 007bbba7 has its CatchHandler @ 007bbbe8 */
                    /* WARNING: Subroutine does not return */
          alloc::alloc::handle_alloc_error(8,0x490);
        }
        memcpy(__dest,&local_4e0,0x490);
        ppuVar6 = &PTR_FUN_00addee0;
        goto LAB_007bba94;
      }
      local_4f0 = 0;
      uStack_4f8 = uStack_4d0;
      local_500 = (code *)ppuStack_4d8;
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      __dest = (undefined8 *)FUN_004b25a4(0x18,8);
      if (__dest == (undefined8 *)0x0) {
                    /* try { // try from 007bbb8c to 007bbb97 has its CatchHandler @ 007bbbfc */
                    /* WARNING: Subroutine does not return */
        alloc::alloc::handle_alloc_error(8,0x18);
      }
      __dest[1] = uStack_4f8;
      *__dest = local_500;
      __dest[2] = CONCAT71(uStack_4ef,local_4f0);
      do {
        lVar5 = *local_510;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(local_510,0x10);
        if (bVar2) {
          *local_510 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 + -1 == 0) {
        DataMemoryBarrier(2,1);
                    /* try { // try from 007bba18 to 007bba53 has its CatchHandler @ 007bbbe4 */
        <alloc::sync::[n]::alloc::sync::Arc<rustls::client::client_conn::ClientConfig>>::drop_slow
                  (&local_510);
      }
      ppuVar6 = (undefined **)&UNK_00addf00;
    }
  }
  FUN_007b62e8(param_2);
LAB_007bba94:
  auVar7._8_8_ = ppuVar6;
  auVar7._0_8_ = __dest;
  return auVar7;
}


// ===== 007bbc84  FUN_007bbc84 =====

void FUN_007bbc84(long param_1,long param_2)

{
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + param_2;
  return;
}


// ===== 007bbc94  FUN_007bbc94 =====

void FUN_007bbc94(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}


// ===== 007bbca4  <reqwest::tls::IgnoreHostname_as_rustls::verify::ServerCertVerifier>::verify_server_cert =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::tls::IgnoreHostname as rustls::verify::ServerCertVerifier>::verify_server_cert */

void __rustcall
<reqwest::tls::IgnoreHostname_as_rustls::verify::ServerCertVerifier>::verify_server_cert
          (long *param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 in_x7;
  long local_278;
  void *local_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long local_250;
  long lStack_248;
  long local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  void *local_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long local_160;
  long lStack_158;
  long local_150;
  long local_148;
  void *pvStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long local_120;
  long lStack_118;
  long local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  <rustls::webpki::verify::ParsedCertificate_as_core::convert::TryFrom<&rustls_pki_types::CertificateDer>>
  ::try_from(&local_148,param_3);
  lVar1 = local_148;
  lStack_178 = lStack_138;
  local_180 = pvStack_140;
  lStack_168 = lStack_128;
  lStack_170 = lStack_130;
  lStack_158 = lStack_118;
  local_160 = local_120;
  local_150 = local_110;
  if (local_148 == -2) {
    param_1[5] = lStack_118;
    param_1[4] = local_120;
    param_1[1] = lStack_138;
    *param_1 = (long)pvStack_140;
    param_1[3] = lStack_128;
    param_1[2] = lStack_130;
    param_1[6] = local_110;
  }
  else {
    local_278 = local_148;
    uStack_1b0 = uStack_80;
    local_1b8 = local_88;
    uStack_1a0 = uStack_70;
    local_1a8 = local_78;
    uStack_1f0 = uStack_c0;
    local_1f8 = local_c8;
    uStack_1e0 = uStack_b0;
    local_1e8 = local_b8;
    uStack_1c0 = uStack_90;
    local_1c8 = local_98;
    uStack_230 = uStack_100;
    local_238 = local_108;
    uStack_220 = uStack_f0;
    local_228 = local_f8;
    uStack_190 = uStack_60;
    local_198 = local_68;
    uStack_200 = uStack_d0;
    local_208 = local_d8;
    uStack_1d0 = uStack_a0;
    local_1d8 = local_a8;
    local_188 = local_58;
    lStack_268 = lStack_138;
    local_270 = pvStack_140;
    lStack_258 = lStack_128;
    lStack_260 = lStack_130;
    uStack_210 = uStack_e0;
    local_218 = local_e8;
    lStack_248 = lStack_118;
    local_250 = local_120;
    local_240 = local_110;
                    /* try { // try from 007bbda4 to 007bbdbf has its CatchHandler @ 007bbe30 */
    rustls::webpki::verify::verify_server_cert_signed_by_trust_anchor
              (&local_148,&local_278,param_2,param_4,param_5,in_x7,*(undefined8 *)(param_2 + 0x18),
               *(undefined8 *)(param_2 + 0x20));
    if (local_148 == -1) {
      *param_1 = -1;
    }
    else {
      param_1[1] = (long)pvStack_140;
      *param_1 = local_148;
      param_1[3] = lStack_130;
      param_1[2] = lStack_138;
      param_1[5] = local_120;
      param_1[4] = lStack_128;
      param_1[6] = lStack_118;
    }
    if ((lVar1 != -1) && (lVar1 != 0)) {
      free(local_270);
    }
  }
  return;
}


// ===== 007bbe54  <reqwest::tls::IgnoreHostname_as_rustls::verify::ServerCertVerifier>::verify_tls12_signature =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::tls::IgnoreHostname as rustls::verify::ServerCertVerifier>::verify_tls12_signature */

void __rustcall
<reqwest::tls::IgnoreHostname_as_rustls::verify::ServerCertVerifier>::verify_tls12_signature
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  rustls::webpki::verify::verify_tls12_signature(param_2,param_3,param_4,param_5,param_1 + 0x18);
  return;
}


// ===== 007bbe70  <reqwest::tls::IgnoreHostname_as_rustls::verify::ServerCertVerifier>::verify_tls13_signature =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::tls::IgnoreHostname as rustls::verify::ServerCertVerifier>::verify_tls13_signature */

void __rustcall
<reqwest::tls::IgnoreHostname_as_rustls::verify::ServerCertVerifier>::verify_tls13_signature
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  rustls::webpki::verify::verify_tls13_signature(param_2,param_3,param_4,param_5,param_1 + 0x18);
  return;
}


// ===== 007bbe8c  <reqwest::tls::IgnoreHostname_as_rustls::verify::ServerCertVerifier>::supported_verify_schemes =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::tls::IgnoreHostname as rustls::verify::ServerCertVerifier>::supported_verify_schemes */

void __rustcall
<reqwest::tls::IgnoreHostname_as_rustls::verify::ServerCertVerifier>::supported_verify_schemes
          (long param_1)

{
  <rustls::webpki::verify::rustls::webpki::verify::WebPkiSupportedAlgorithms>::supported_schemes
            (param_1 + 0x18);
  return;
}


// ===== 007bbe94  <reqwest::tls::TlsInfo_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::tls::TlsInfo as core::fmt::Debug>::fmt */

void __rustcall
<reqwest::tls::TlsInfo_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,&DAT_002e405f,7);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish(auStack_20);
  return;
}


// ===== 007bbecc  FUN_007bbecc =====

undefined8 FUN_007bbecc(void)

{
  return 0;
}


// ===== 007bbed4  FUN_007bbed4 =====

undefined1  [16] FUN_007bbed4(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x10);
}


// ===== 007bbee0  FUN_007bbee0 =====

undefined8 * FUN_007bbee0(pthread_key_t param_1,long param_2,uint *param_3)

{
  undefined8 *__pointer;
  void *__ptr;
  undefined8 uVar1;
  
  if (param_2 == 1) {
    return (undefined8 *)0x0;
  }
  if (param_3 != (uint *)0x0) {
    uVar1 = *(undefined8 *)(param_3 + 2);
    param_3[0] = 0;
    param_3[1] = 0;
    if ((*param_3 & 1) != 0) goto LAB_007bbf18;
  }
  uVar1 = FUN_007c6834();
LAB_007bbf18:
  __pointer = (undefined8 *)malloc(0x10);
  if (__pointer != (undefined8 *)0x0) {
    *__pointer = uVar1;
    *(pthread_key_t *)(__pointer + 1) = param_1;
    __ptr = pthread_getspecific(param_1);
    pthread_setspecific(param_1,__pointer);
    if (__ptr != (void *)0x0) {
      free(__ptr);
    }
    return __pointer;
  }
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x10);
}


// ===== 007bbf8c  FUN_007bbf8c =====

undefined1 (*) [16] FUN_007bbf8c(pthread_key_t param_1,long param_2,uint *param_3)

{
  undefined1 (*__pointer) [16];
  void *__ptr;
  undefined1 auVar1 [16];
  
  if (param_2 == 1) {
    return (undefined1 (*) [16])0x0;
  }
  if (param_3 != (uint *)0x0) {
    auVar1 = *(undefined1 (*) [16])(param_3 + 2);
    param_3[0] = 0;
    param_3[1] = 0;
    if ((*param_3 & 1) != 0) goto LAB_007bbfc8;
  }
  auVar1 = std::sys::random::linux::hashmap_random_keys();
LAB_007bbfc8:
  __pointer = (undefined1 (*) [16])malloc(0x18);
  if (__pointer != (undefined1 (*) [16])0x0) {
    *__pointer = auVar1;
    *(pthread_key_t *)__pointer[1] = param_1;
    __ptr = pthread_getspecific(param_1);
    pthread_setspecific(param_1,__pointer);
    if (__ptr != (void *)0x0) {
      free(__ptr);
    }
    return __pointer;
  }
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x18);
}


// ===== 007bc03c  FUN_007bc03c =====

undefined8 * FUN_007bc03c(pthread_key_t param_1,long param_2,uint *param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 *__pointer;
  void *__ptr;
  uint *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined4 uStack_34;
  
  if (param_2 == 1) {
    __pointer = (undefined8 *)0x0;
  }
  else {
    puVar3 = (uint *)&DAT_002e52a0;
    if (param_3 != (uint *)0x0) {
      param_3[0] = 0;
      param_3[1] = 0;
      puVar3 = param_3 + 2;
      if ((*param_3 & 1) == 0) {
        puVar3 = (uint *)&DAT_002e52a0;
      }
    }
    uVar9 = *(undefined8 *)(puVar3 + 10);
    uVar7 = *(undefined8 *)(puVar3 + 8);
    uVar13 = *(undefined8 *)(puVar3 + 0xe);
    uVar11 = *(undefined8 *)(puVar3 + 0xc);
    uVar5 = *(undefined8 *)(puVar3 + 0x10);
    uVar14 = *(undefined8 *)(puVar3 + 2);
    uVar12 = *(undefined8 *)puVar3;
    uVar10 = *(undefined8 *)(puVar3 + 6);
    uVar8 = *(undefined8 *)(puVar3 + 4);
    __pointer = (undefined8 *)malloc(0x50);
    if (__pointer == (undefined8 *)0x0) {
                    /* try { // try from 007bc170 to 007bc17b has its CatchHandler @ 007bc1a8 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x50);
    }
    __pointer[5] = uVar9;
    __pointer[4] = uVar7;
    __pointer[7] = uVar13;
    __pointer[6] = uVar11;
    __pointer[9] = CONCAT44(uStack_34,param_1);
    __pointer[8] = uVar5;
    __pointer[1] = uVar14;
    *__pointer = uVar12;
    __pointer[3] = uVar10;
    __pointer[2] = uVar8;
    __ptr = pthread_getspecific(param_1);
    pthread_setspecific(param_1,__pointer);
    if (__ptr != (void *)0x0) {
      if (*(long *)((long)__ptr + 8) != 2) {
        if (*(long *)((long)__ptr + 8) == 0) {
          plVar4 = *(long **)((long)__ptr + 0x10);
          do {
            lVar6 = *plVar4;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar2) {
              *plVar4 = lVar6 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar6 + -1 == 0) {
            DataMemoryBarrier(2,1);
            <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>>
            ::drop_slow((long)__ptr + 0x10);
          }
        }
        else {
          plVar4 = *(long **)((long)__ptr + 0x10);
          do {
            lVar6 = *plVar4;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar2) {
              *plVar4 = lVar6 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar6 + -1 == 0) {
            DataMemoryBarrier(2,1);
                    /* try { // try from 007bc104 to 007bc14f has its CatchHandler @ 007bc180 */
            <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>>
            ::drop_slow((long)__ptr + 0x10);
          }
        }
      }
      free(__ptr);
      return __pointer;
    }
  }
  return __pointer;
}


// ===== 007bc1c0  FUN_007bc1c0 =====

void FUN_007bc1c0(long *param_1)

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
                    /* try { // try from 007bc204 to 007bc20b has its CatchHandler @ 007bc23c */
        (*pcVar2)(__ptr);
      }
      if (puVar1[1] != 0) {
        free(__ptr);
      }
    }
    else {
                    /* try { // try from 007bc1ec to 007bc1f3 has its CatchHandler @ 007bc270 */
      (**(code **)(param_1[1] + 0x20))(param_1 + 4,param_1[2],param_1[3]);
    }
  }
  free(param_1);
  return;
}


// ===== 007bc28c  FUN_007bc28c =====

void FUN_007bc28c(long *param_1)

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
                    /* try { // try from 007bc2e0 to 007bc2e3 has its CatchHandler @ 007bc360 */
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
                    /* try { // try from 007bc30c to 007bc30f has its CatchHandler @ 007bc354 */
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


// ===== 007bc394  FUN_007bc394 =====

void FUN_007bc394(long *param_1)

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
                    /* try { // try from 007bc3b4 to 007bc3d7 has its CatchHandler @ 007bc414 */
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


// ===== 007bc44c  FUN_007bc44c =====

void FUN_007bc44c(long *param_1)

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
                    /* try { // try from 007bc46c to 007bc48f has its CatchHandler @ 007bc4cc */
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


// ===== 007bc504  FUN_007bc504 =====

void FUN_007bc504(long param_1)

{
  if (*(char *)(param_1 + 0x31) == '\x02') {
    return;
  }
                    /* try { // try from 007bc528 to 007bc533 has its CatchHandler @ 007bc544 */
  FUN_007be2f0(param_1 + 0x18);
  FUN_007bce98(param_1);
  return;
}


// ===== 007bc55c  FUN_007bc55c =====

void FUN_007bc55c(undefined8 *param_1)

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
                    /* try { // try from 007bc588 to 007bc58f has its CatchHandler @ 007bc5d0 */
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


// ===== 007bc604  FUN_007bc604 =====

void FUN_007bc604(long *param_1)

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
                    /* try { // try from 007bc624 to 007bc647 has its CatchHandler @ 007bc684 */
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


// ===== 007bc6bc  FUN_007bc6bc =====

void FUN_007bc6bc(byte *param_1)

{
  if (((*param_1 != 0xff) && (9 < *param_1)) && (*(long *)(param_1 + 0x10) != 0)) {
    free(*(void **)(param_1 + 8));
    return;
  }
  return;
}


// ===== 007bc6e8  FUN_007bc6e8 =====

void FUN_007bc6e8(long *param_1)

{
  char *pcVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  char cVar5;
  long *plVar6;
  long lVar7;
  
  if ((char)param_1[4] != -1) {
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
                    /* try { // try from 007bc724 to 007bc727 has its CatchHandler @ 007bc820 */
      <alloc::sync::[n]::alloc::sync::Arc<hyper::common::watch::Shared>>::drop_slow();
    }
                    /* try { // try from 007bc728 to 007bc72f has its CatchHandler @ 007bc830 */
    FUN_007bcc2c(param_1 + 2);
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
                    /* try { // try from 007bc770 to 007bc773 has its CatchHandler @ 007bc7f0 */
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
                    /* try { // try from 007bc79c to 007bc79f has its CatchHandler @ 007bc7e4 */
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
  }
  return;
}


// ===== 007bc848  FUN_007bc848 =====

void FUN_007bc848(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  long *__ptr;
  void *pvVar3;
  
  if (*(long *)(param_1 + 0x100) == 2) {
    return;
  }
  if ((9 < *(byte *)(param_1 + 0xb8)) && (*(long *)(param_1 + 200) != 0)) {
    free(*(void **)(param_1 + 0xc0));
  }
  if (1 < *(byte *)(param_1 + 0x60)) {
    __ptr = *(long **)(param_1 + 0x68);
                    /* try { // try from 007bc8b4 to 007bc8bb has its CatchHandler @ 007bc9a4 */
    (**(code **)(*__ptr + 0x20))(__ptr + 3,__ptr[1],__ptr[2]);
    free(__ptr);
  }
                    /* try { // try from 007bc8d8 to 007bc8df has its CatchHandler @ 007bca00 */
  (**(code **)(*(long *)(param_1 + 0x70) + 0x20))
            (param_1 + 0x88,*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80));
                    /* try { // try from 007bc8ec to 007bc8f3 has its CatchHandler @ 007bc9f8 */
  (**(code **)(*(long *)(param_1 + 0x90) + 0x20))
            (param_1 + 0xa8,*(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa0));
                    /* try { // try from 007bc8f4 to 007bc8fb has its CatchHandler @ 007bc9f0 */
  FUN_007be0f8(param_1);
  pvVar3 = *(void **)(param_1 + 0xd0);
  if (pvVar3 != (void *)0x0) {
                    /* try { // try from 007bc904 to 007bc90b has its CatchHandler @ 007bc9d8 */
    FUN_007b3bec(pvVar3);
    free(pvVar3);
  }
  if (*(long *)(param_1 + 0xe0) == 0) {
    pvVar3 = *(void **)(param_1 + 0xe8);
    puVar1 = *(undefined8 **)(param_1 + 0xf0);
    pcVar2 = (code *)*puVar1;
    if (pcVar2 != (code *)0x0) {
                    /* try { // try from 007bc954 to 007bc95b has its CatchHandler @ 007bc984 */
      (*pcVar2)(pvVar3);
    }
    if (puVar1[1] != 0) {
      free(pvVar3);
      FUN_007bcf54(param_1 + 0x100);
      return;
    }
  }
  else {
                    /* try { // try from 007bc92c to 007bc933 has its CatchHandler @ 007bc9d0 */
    (**(code **)(*(long *)(param_1 + 0xe0) + 0x20))
              (param_1 + 0xf8,*(undefined8 *)(param_1 + 0xe8),*(undefined8 *)(param_1 + 0xf0));
  }
  FUN_007bcf54(param_1 + 0x100);
  return;
}


// ===== 007bca50  FUN_007bca50 =====

void FUN_007bca50(long param_1)

{
  if (*(char *)(param_1 + 0x70) == '\x02') {
    FUN_007be240();
    return;
  }
  FUN_007bd440();
  return;
}


// ===== 007bca64  FUN_007bca64 =====

void FUN_007bca64(undefined8 *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  code *pcVar2;
  
  __ptr = (void *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  pcVar2 = (code *)*puVar1;
  if (*(char *)((long)param_1 + 0x11) == '\x02') {
    if (pcVar2 != (code *)0x0) {
                    /* try { // try from 007bca88 to 007bca8f has its CatchHandler @ 007bcacc */
      (*pcVar2)(__ptr);
    }
  }
  else if (pcVar2 != (code *)0x0) {
                    /* try { // try from 007bca98 to 007bca9f has its CatchHandler @ 007bcac8 */
    (*pcVar2)(__ptr);
  }
  if (puVar1[1] != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 007bcaf0  FUN_007bcaf0 =====

void FUN_007bcaf0(undefined8 *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  code *pcVar2;
  
  if (*(char *)((long)param_1 + 0x29) != -1) {
    FUN_007be240();
    return;
  }
  __ptr = (void *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  pcVar2 = (code *)*puVar1;
  if (pcVar2 != (code *)0x0) {
                    /* try { // try from 007bcb20 to 007bcb27 has its CatchHandler @ 007bcb50 */
    (*pcVar2)(__ptr);
  }
  if (puVar1[1] != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 007bcb74  FUN_007bcb74 =====

void FUN_007bcb74(undefined8 *param_1)

{
  ulong uVar1;
  long local_18;
  
  if ((void *)*param_1 == (void *)0x0) {
    uVar1 = param_1[1] & 3;
    if ((1 < uVar1 - 2) && (uVar1 != 0)) {
      local_18 = param_1[1] - 1;
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
    }
  }
  else if (param_1[2] != 0) {
    free((void *)*param_1);
    return;
  }
  return;
}


// ===== 007bcbe0  FUN_007bcbe0 =====

void FUN_007bcbe0(ulong param_1)

{
  long local_18;
  
  if (((param_1 != 0) && (1 < (param_1 & 3) - 2)) && ((param_1 & 3) != 0)) {
    local_18 = param_1 - 1;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
  }
  return;
}


// ===== 007bcc2c  FUN_007bcc2c =====

void FUN_007bcc2c(long *param_1)

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
                    /* try { // try from 007bcc80 to 007bcc87 has its CatchHandler @ 007bccec */
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
                    /* try { // try from 007bcca4 to 007bccab has its CatchHandler @ 007bcce4 */
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


// ===== 007bcd44  FUN_007bcd44 =====

void FUN_007bcd44(long *param_1)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  
  __ptr = (void *)param_1[1];
  lVar2 = param_1[2] + 1;
  lVar1 = (long)__ptr + 0x38;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 007bcd80 to 007bcd83 has its CatchHandler @ 007bcdcc */
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


// ===== 007bce20  FUN_007bce20 =====

void FUN_007bce20(long param_1)

{
  if (*(char *)(param_1 + 0xd0) != '\x03') {
    if (*(char *)(param_1 + 0xd0) == '\0') {
      close(*(int *)(param_1 + 200));
    }
    FUN_007bdfdc(param_1);
    return;
  }
                    /* try { // try from 007bce5c to 007bce67 has its CatchHandler @ 007bce7c */
  FUN_007bdaf0(param_1 + 0x98);
  *(undefined1 *)(param_1 + 0xd1) = 0;
  FUN_007bdfdc(param_1);
  return;
}


// ===== 007bce98  FUN_007bce98 =====

void FUN_007bce98(undefined8 *param_1)

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
                    /* try { // try from 007bcec4 to 007bcecb has its CatchHandler @ 007bcf0c */
    <alloc::sync::[n]::alloc::sync::Arc<want::Inner>>::drop_slow(param_1);
  }
                    /* try { // try from 007bcecc to 007bced3 has its CatchHandler @ 007bcf20 */
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


// ===== 007bcf54  FUN_007bcf54 =====

void FUN_007bcf54(long *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  
                    /* try { // try from 007bcf64 to 007bcf67 has its CatchHandler @ 007bd0a4 */
  FUN_007a6df0();
  if (*param_1 == 0) {
    if (param_1[1] != 0) {
      param_1 = param_1 + 2;
      lVar5 = *param_1;
      if (lVar5 != 0) {
                    /* try { // try from 007bcfdc to 007bcfff has its CatchHandler @ 007bd03c */
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
                    /* try { // try from 007bcf7c to 007bcf9f has its CatchHandler @ 007bd070 */
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


// ===== 007bd0d0  FUN_007bd0d0 =====

void FUN_007bd0d0(undefined8 param_1)

{
                    /* try { // try from 007bd0e0 to 007bd0e3 has its CatchHandler @ 007bd0f4 */
  FUN_007a6ccc();
  FUN_007bc848(param_1);
  return;
}


// ===== 007bd10c  FUN_007bd10c =====

void FUN_007bd10c(undefined8 *param_1)

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
                    /* try { // try from 007bd13c to 007bd183 has its CatchHandler @ 007bd2b8 */
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
                    /* try { // try from 007bd184 to 007bd18b has its CatchHandler @ 007bd258 */
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
                    /* try { // try from 007bd1a8 to 007bd1af has its CatchHandler @ 007bd250 */
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
                    /* try { // try from 007bd1c8 to 007bd20f has its CatchHandler @ 007bd288 */
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


// ===== 007bd2d8  FUN_007bd2d8 =====

void FUN_007bd2d8(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 8) != 2) {
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x10);
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
        drop_slow(param_1 + 0x10);
        return;
      }
    }
    else {
      plVar3 = *(long **)(param_1 + 0x10);
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
        ::drop_slow(param_1 + 0x10);
        return;
      }
    }
  }
  return;
}


// ===== 007bd334  FUN_007bd334 =====

void FUN_007bd334(byte *param_1)

{
  char cVar1;
  bool bVar2;
  void *__ptr;
  long lVar3;
  long *plVar4;
  
                    /* try { // try from 007bd344 to 007bd347 has its CatchHandler @ 007bd418 */
  FUN_007ce4a4();
  if (1 < *param_1) {
    plVar4 = *(long **)(param_1 + 8);
                    /* try { // try from 007bd364 to 007bd36b has its CatchHandler @ 007bd3dc */
    (**(code **)(*plVar4 + 0x20))(plVar4 + 3,plVar4[1],plVar4[2]);
    free(plVar4);
  }
                    /* try { // try from 007bd388 to 007bd38f has its CatchHandler @ 007bd410 */
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


// ===== 007bd440  FUN_007bd440 =====

void FUN_007bd440(byte *param_1)

{
  char cVar1;
  bool bVar2;
  void *__ptr;
  long lVar3;
  long *plVar4;
  
                    /* try { // try from 007bd450 to 007bd453 has its CatchHandler @ 007bd55c */
  FUN_007cb9b0();
  if (param_1[0x61] != 2) {
                    /* try { // try from 007bd460 to 007bd467 has its CatchHandler @ 007bd540 */
    FUN_007be2f0(param_1 + 0x48);
                    /* try { // try from 007bd468 to 007bd46f has its CatchHandler @ 007bd538 */
    FUN_007bce98(param_1 + 0x30);
  }
  if (1 < *param_1) {
    plVar4 = *(long **)(param_1 + 8);
                    /* try { // try from 007bd48c to 007bd493 has its CatchHandler @ 007bd504 */
    (**(code **)(*plVar4 + 0x20))(plVar4 + 3,plVar4[1],plVar4[2]);
    free(plVar4);
  }
                    /* try { // try from 007bd4b0 to 007bd4b7 has its CatchHandler @ 007bd554 */
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


// ===== 007bd58c  FUN_007bd58c =====

void FUN_007bd58c(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (*param_1 != 2) {
                    /* try { // try from 007bd5a4 to 007bd5af has its CatchHandler @ 007bd618 */
    FUN_007bd334(param_1 + 8);
    plVar3 = (long *)param_1[0x11];
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
                    /* try { // try from 007bd5d4 to 007bd5d7 has its CatchHandler @ 007bd610 */
        <alloc[c1f8e832b0d782c7]::sync::Arc<std[17aff9129faa4dc5]::sync::poison::mutex::Mutex<hyper_util[52a210df7efc1bae]::client::legacy::pool::PoolInner<hyper_util[52a210df7efc1bae]::client::legacy::client::PoolClient<reqwest[6fed810f3e38d558]::async_impl::body::Body>,(http[b87e90c26fe47eb4]::uri::scheme::Scheme,http[b87e90c26fe47eb4]::uri::authority::Authority)>>>>
        ::drop_slow();
      }
    }
    plVar3 = (long *)param_1[0xf];
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
      drop_slow(param_1 + 0xf);
      return;
    }
  }
  return;
}


// ===== 007bd678  FUN_007bd678 =====

void FUN_007bd678(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 007bd688 to 007bd68b has its CatchHandler @ 007bd6c4 */
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


// ===== 007bd6f8  FUN_007bd6f8 =====

void FUN_007bd6f8(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 007bd708 to 007bd70b has its CatchHandler @ 007bd744 */
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


// ===== 007bd778  FUN_007bd778 =====

void FUN_007bd778(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
  }
                    /* try { // try from 007bd79c to 007bd7a3 has its CatchHandler @ 007bd7d4 */
  FUN_007927a4(param_1 + 4);
  if (param_1[4] != 0) {
    free((void *)param_1[5]);
    return;
  }
  return;
}


// ===== 007bd7fc  FUN_007bd7fc =====

void FUN_007bd7fc(long param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  code *pcVar2;
  
  __ptr = *(void **)(param_1 + 0x78);
  puVar1 = *(undefined8 **)(param_1 + 0x80);
  pcVar2 = (code *)*puVar1;
  if (pcVar2 != (code *)0x0) {
                    /* try { // try from 007bd81c to 007bd823 has its CatchHandler @ 007bd88c */
    (*pcVar2)(__ptr);
  }
  if (puVar1[1] != 0) {
    free(__ptr);
  }
                    /* try { // try from 007bd838 to 007bd83f has its CatchHandler @ 007bd8d8 */
  <bytes::bytes_mut::BytesMut_as_core::ops::drop::Drop>::drop(param_1 + 0x90);
  if (*(long *)(param_1 + 0x10) != 0) {
    free(*(void **)(param_1 + 0x18));
  }
                    /* try { // try from 007bd854 to 007bd85b has its CatchHandler @ 007bd8b4 */
  FUN_007927a4(param_1 + 0x30);
  if (*(long *)(param_1 + 0x30) != 0) {
    free(*(void **)(param_1 + 0x38));
  }
  FUN_007be500(param_1 + 0xb8);
  return;
}


// ===== 007bd8fc  FUN_007bd8fc =====

void FUN_007bd8fc(long *param_1)

{
  if (*param_1 != 2) {
                    /* try { // try from 007bd918 to 007bd91f has its CatchHandler @ 007bd930 */
    FUN_007bcf54(param_1);
  }
  FUN_007bd10c(param_1 + 3);
  return;
}


// ===== 007bd948  FUN_007bd948 =====

void FUN_007bd948(long param_1)

{
                    /* try { // try from 007bd958 to 007bd95b has its CatchHandler @ 007bd9b4 */
  FUN_007bd7fc();
  if (*(long *)(param_1 + 0x200) != 2) {
                    /* try { // try from 007bd968 to 007bd96f has its CatchHandler @ 007bd990 */
    FUN_007bcf54(param_1 + 0x200);
  }
                    /* try { // try from 007bd970 to 007bd977 has its CatchHandler @ 007bd9ac */
  FUN_007bd10c(param_1 + 0x218);
                    /* try { // try from 007bd978 to 007bd97f has its CatchHandler @ 007bd9a4 */
  FUN_007bc6e8(param_1 + 0x230);
  FUN_007bc1c0(*(undefined8 *)(param_1 + 600));
  return;
}


// ===== 007bd9dc  FUN_007bd9dc =====

void FUN_007bd9dc(long param_1)

{
  ulong uVar1;
  long local_18;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (((uVar1 != 0) && (1 < (uVar1 & 3) - 2)) && ((uVar1 & 3) != 0)) {
    local_18 = uVar1 - 1;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
  }
  return;
}


// ===== 007bda2c  FUN_007bda2c =====

void FUN_007bda2c(long param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  code *pcVar2;
  
  if (*(char *)(param_1 + 0x53) == '\0') {
    __ptr = *(void **)(param_1 + 0x30);
    puVar1 = *(undefined8 **)(param_1 + 0x38);
    pcVar2 = (code *)*puVar1;
    if (pcVar2 != (code *)0x0) {
                    /* try { // try from 007bda58 to 007bda5f has its CatchHandler @ 007bda7c */
      (*pcVar2)(__ptr);
    }
    if (puVar1[1] != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 007bdaa0  FUN_007bdaa0 =====

ulong FUN_007bdaa0(ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  
  if (*(char *)(param_1 + 0x58) != '\0') {
    uVar2 = param_1;
    if (*(char *)(param_1 + 0x58) == '\x03') {
                    /* try { // try from 007bdabc to 007bdac7 has its CatchHandler @ 007bdae8 */
      uVar2 = FUN_007bdaf0(param_1 + 0x20);
      *(undefined1 *)(param_1 + 0x59) = 0;
    }
    return uVar2;
  }
  uVar1 = close(*(int *)(param_1 + 0x50));
  return (ulong)uVar1;
}


// ===== 007bdaf0  FUN_007bdaf0 =====

ulong FUN_007bdaf0(ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  
  if (*(char *)(param_1 + 0x2c) == '\0') {
    uVar1 = close(*(int *)(param_1 + 0x28));
    return (ulong)uVar1;
  }
  if (*(char *)(param_1 + 0x2c) == '\x03') {
                    /* try { // try from 007bdb10 to 007bdb17 has its CatchHandler @ 007bdb54 */
    FUN_007dfadc(param_1);
    if (*(int *)(param_1 + 0x18) != -1) {
      close(*(int *)(param_1 + 0x18));
    }
    uVar2 = FUN_007be420(param_1);
    return uVar2;
  }
  return param_1;
}


// ===== 007bdb80  FUN_007bdb80 =====

ulong FUN_007bdb80(ulong param_1)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  
  cVar1 = *(char *)(param_1 + 0x70);
  uVar3 = param_1;
  if (cVar1 == '\0') {
    if (*(char *)(param_1 + 0x68) == '\x03') {
                    /* try { // try from 007bdc38 to 007bdc43 has its CatchHandler @ 007bdc7c */
      uVar3 = FUN_007bdaf0(param_1 + 0x30);
      *(undefined1 *)(param_1 + 0x69) = 0;
    }
    else if (*(char *)(param_1 + 0x68) == '\0') {
      uVar2 = close(*(int *)(param_1 + 0x60));
      return (ulong)uVar2;
    }
  }
  else {
    if (cVar1 == '\x03') {
      if (*(char *)(param_1 + 0x148) != '\x03') {
        if (*(char *)(param_1 + 0x148) == '\0') {
          close(*(int *)(param_1 + 0x140));
        }
        uVar3 = FUN_007bdfdc(param_1 + 0x78);
        return uVar3;
      }
                    /* try { // try from 007bdc18 to 007bdc23 has its CatchHandler @ 007bdc90 */
      FUN_007bdaf0(param_1 + 0x110);
      *(undefined1 *)(param_1 + 0x149) = 0;
      uVar3 = FUN_007bdfdc(param_1 + 0x78);
      return uVar3;
    }
    if (cVar1 == '\x04') {
      if (*(char *)(param_1 + 0xd0) == '\x03') {
                    /* try { // try from 007bdc54 to 007bdc5f has its CatchHandler @ 007bdc70 */
        uVar3 = FUN_007bdaf0(param_1 + 0x98);
        *(undefined1 *)(param_1 + 0xd1) = 0;
        return uVar3;
      }
      if (*(char *)(param_1 + 0xd0) == '\0') {
        uVar2 = close(*(int *)(param_1 + 200));
        return (ulong)uVar2;
      }
    }
  }
  return uVar3;
}


// ===== 007bdcac  FUN_007bdcac =====

void FUN_007bdcac(long *param_1)

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
                    /* try { // try from 007bdcd4 to 007bdd1b has its CatchHandler @ 007bdd54 */
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


// ===== 007bdd88  FUN_007bdd88 =====

void FUN_007bdd88(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
                    /* try { // try from 007bdd9c to 007bddc3 has its CatchHandler @ 007bde00 */
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
  return;
}


// ===== 007bde38  FUN_007bde38 =====

void FUN_007bde38(void *param_1)

{
  if (param_1 != (void *)0x0) {
                    /* try { // try from 007bde48 to 007bde4f has its CatchHandler @ 007bde74 */
    FUN_007b3bec();
    free(param_1);
    return;
  }
  return;
}


// ===== 007bde90  FUN_007bde90 =====

void FUN_007bde90(ulong param_1)

{
  long local_18;
  
  if ((1 < (param_1 & 3) - 2) && ((param_1 & 3) != 0)) {
    local_18 = param_1 - 1;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
  }
  return;
}


