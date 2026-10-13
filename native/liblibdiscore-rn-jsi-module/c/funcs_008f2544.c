// ===== 008f2544  FUN_008f2544 =====

void FUN_008f2544(void)

{
  return;
}


// ===== 008f2550  FUN_008f2550 =====

void FUN_008f2550(void)

{
  return;
}


// ===== 008f255c  <hyper::proto::h1::conn::State_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper::proto::h1::conn::State as core::fmt::Debug>::fmt */

void __rustcall
<hyper::proto::h1::conn::State_as_core::fmt::Debug>::fmt(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_30 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,&DAT_00330928,5);
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (auStack_30,&DAT_0033092d,7,param_1 + 0x80,&PTR_FUN_00aeef50);
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (uVar1,&DAT_00330934,7,param_1 + 0xe8,&PTR_FUN_00aeef70);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (uVar1,&DAT_0033093b,10,param_1 + 0x145,&DAT_00aeef90);
  if (*(long *)(param_1 + 0x120) != 0) {
    <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
              (auStack_30,&DAT_00330945,5,param_1 + 0x120,&PTR_FUN_00aeefb0);
  }
  if ((*(byte *)(param_1 + 0x138) & 1) != 0) {
    <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
              (auStack_30,&DAT_002a0610,0x10,&DAT_0033094a,&DAT_00aeefd0);
  }
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish(auStack_30);
  return;
}


// ===== 008f2650  <hyper::proto::h1::conn::Writing_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper::proto::h1::conn::Writing as core::fmt::Debug>::fmt */

void __rustcall
<hyper::proto::h1::conn::Writing_as_core::fmt::Debug>::fmt(ulong *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1 ^ 0x8000000000000000;
  if (3 < uVar1) {
    uVar1 = 1;
  }
  if ((long)uVar1 < 2) {
    if (uVar1 == 0) {
      <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd098,4);
      return;
    }
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple(auStack_38,param_2,&DAT_002bd114,4);
    <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::field
              (auStack_38,param_1,&PTR_FUN_00aeeff0);
    <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::finish();
    return;
  }
  if (uVar1 == 2) {
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"KeepAlive",9);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"Closed",6);
  return;
}


// ===== 008f271c  FUN_008f271c =====

void FUN_008f271c(ulong *param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  undefined1 *puVar6;
  char *pcVar7;
  char cVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  ulong local_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong local_90;
  ulong uStack_88;
  ulong local_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong local_60;
  ulong uStack_58;
  char local_44;
  char local_43;
  
  lVar12 = *param_2;
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              ("called after complete",0x2b,&PTR_s__root__cargo_registry_src_index__00aef010);
  }
  uVar11 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar11 == 0) {
    uVar11 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
             lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar6 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar11);
    if (&DAT_00000001 < puVar6) goto LAB_008f276c;
LAB_008f27fc:
    puVar6 = (undefined1 *)FUN_008f0f14(uVar11 & 0xffffffff);
    if (puVar6 != (undefined1 *)0x0) goto LAB_008f2770;
LAB_008f280c:
    local_44 = '\0';
    local_43 = '\0';
  }
  else {
    puVar6 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar11);
    if (puVar6 <= &DAT_00000001) goto LAB_008f27fc;
LAB_008f276c:
    if (puVar6 == (undefined1 *)0x0) goto LAB_008f280c;
LAB_008f2770:
    cVar2 = puVar6[0x44];
    cVar3 = puVar6[0x45];
    cVar8 = cVar3;
    if (cVar2 == '\x01') {
      if (cVar3 == '\0') {
        tokio::task::coop::register_waker(param_3);
        local_b8 = local_b8 & 0xffffffffff000000;
        pcVar7 = (char *)((ulong)&local_b8 | 1);
        goto LAB_008f289c;
      }
      cVar8 = cVar3 + -1;
    }
    puVar6[0x45] = cVar8;
    local_b8 = local_b8 & 0xffffffffff000000;
    <tokio::task::coop::RestoreOnPending_as_core::ops::drop::Drop>::drop((ulong)&local_b8 | 1);
    local_44 = cVar2;
    local_43 = cVar3;
  }
  puVar1 = (ulong *)(lVar12 + 0x30);
                    /* try { // try from 008f2820 to 008f2883 has its CatchHandler @ 008f29b8 */
  uVar5 = <tokio::sync::oneshot::[9]::tokio::sync::oneshot::State>::load(lVar12 + 0x30,2);
  if ((uVar5 >> 1 & 1) == 0) {
    if ((uVar5 >> 2 & 1) == 0) {
      if ((uVar5 & 1) == 0) {
LAB_008f2878:
        <tokio::sync::oneshot::tokio::sync::oneshot::Task>::set_task(lVar12 + 0x20,param_3);
        do {
          uVar11 = *puVar1;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar11 | 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (((uint)uVar11 >> 1 & 1) != 0) {
LAB_008f28d0:
          lVar9 = *(long *)(lVar12 + 0x38);
          *(undefined8 *)(lVar12 + 0x38) = 0;
          if (lVar9 == 1) goto LAB_008f28f8;
          goto LAB_008f2914;
        }
      }
      else if ((*(long *)(lVar12 + 0x28) != ((long *)*param_3)[1]) ||
              (*(long *)(lVar12 + 0x20) != *(long *)*param_3)) {
        do {
          uVar11 = *puVar1;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar11 & 0xfffffffffffffffe;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (((uint)uVar11 >> 1 & 1) == 0) {
          <tokio::sync::oneshot::tokio::sync::oneshot::Task>::drop_task(lVar12 + 0x20);
          goto LAB_008f2878;
        }
        do {
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 | 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        goto LAB_008f28d0;
      }
      pcVar7 = &local_44;
LAB_008f289c:
      <tokio::task::coop::RestoreOnPending_as_core::ops::drop::Drop>::drop(pcVar7);
      *param_1 = 2;
      return;
    }
  }
  else {
    uVar5 = *(uint *)(lVar12 + 0x38);
    *(undefined8 *)(lVar12 + 0x38) = 0;
    if ((uVar5 & 1) != 0) {
LAB_008f28f8:
      uStack_78 = *(ulong *)(lVar12 + 0x48);
      local_80 = *(ulong *)(lVar12 + 0x40);
      uStack_68 = *(ulong *)(lVar12 + 0x58);
      uStack_70 = *(ulong *)(lVar12 + 0x50);
      uVar11 = 0;
      uStack_58 = *(ulong *)(lVar12 + 0x68);
      local_60 = *(ulong *)(lVar12 + 0x60);
      goto LAB_008f2918;
    }
  }
LAB_008f2914:
  uVar11 = 1;
LAB_008f2918:
  local_44 = '\0';
  <tokio::task::coop::RestoreOnPending_as_core::ops::drop::Drop>::drop(&local_44);
  plVar10 = (long *)*param_2;
  uStack_88 = uStack_58;
  local_90 = local_60;
  uStack_a8 = uStack_78;
  uStack_b0 = local_80;
  uStack_98 = uStack_68;
  uStack_a0 = uStack_70;
  local_b8 = uVar11;
  if (plVar10 != (long *)0x0) {
    do {
      lVar12 = *plVar10;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 008f2958 to 008f295f has its CatchHandler @ 008f2998 */
      <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<hyper::upgrade::Upgraded,{backref_38}::error::Error>>>>
      ::drop_slow(param_2);
    }
  }
  *param_2 = 0;
  param_1[1] = uStack_b0;
  *param_1 = local_b8;
  param_1[3] = uStack_a0;
  param_1[2] = uStack_a8;
  param_1[5] = local_90;
  param_1[4] = uStack_98;
  param_1[6] = uStack_88;
  return;
}


// ===== 008f29d0  FUN_008f29d0 =====

void FUN_008f29d0(long *param_1,undefined8 param_2)

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
              (param_2,"Continue",8,&local_18,&DAT_00aef028);
    return;
  }
  if (lVar1 != 2) {
    if (lVar1 == 3) {
      <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"KeepAlive",9);
      return;
    }
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"Closed",6);
    return;
  }
  local_18 = param_1 + 1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,&DAT_002bd114,4,&local_18,&DAT_00aef028);
  return;
}


// ===== 008f2aac  FUN_008f2aac =====

void FUN_008f2aac(long param_1,undefined8 param_2)

{
  long local_18;
  
  local_18 = param_1 + 0x18;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field2_finish
            (param_2,"Encoder",7,"kind",4,param_1,&PTR_FUN_00aef068,"is_lastIdleBusyDisabled",7,
             &local_18,&DAT_00aef088);
  return;
}


// ===== 008f2b1c  <hyper::common::watch::Sender_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper::common::watch::Sender as core::ops::drop::Drop>::drop */

void __rustcall <hyper::common::watch::Sender_as_core::ops::drop::Drop>::drop(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *param_1;
  plVar1 = (long *)(lVar4 + 0x10);
  do {
    lVar5 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 != 0) {
    <futures_core::task::__internal::atomic_waker::futures_core::task::__internal::atomic_waker::AtomicWaker>
    ::wake(lVar4 + 0x18);
    return;
  }
  return;
}


// ===== 008f2b40  FUN_008f2b40 =====

void FUN_008f2b40(byte *param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,&DAT_003309b8 + *(int *)(&DAT_003309b8 + (ulong)*param_1 * 4),
             *(undefined8 *)(&DAT_003309a0 + (ulong)*param_1 * 8));
  return;
}


// ===== 008f2b68  <bool_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <bool_as_core::fmt::Display>::fmt(void)

{
  (*(code *)PTR_fmt_00b02798)();
  return;
}


// ===== 008f2b6c  FUN_008f2b6c =====

void FUN_008f2b6c(long *param_1,undefined8 param_2)

{
  long *local_18;
  
  if (*param_1 == -2) {
    local_18 = param_1 + 1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,"Length",6,&local_18,&DAT_00aef0c8);
    return;
  }
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,"Chunked",7,&local_18,&DAT_00aef0a8);
  return;
}


// ===== 008f2be8  FUN_008f2be8 =====

void FUN_008f2be8(long *param_1)

{
  if (*param_1 != 0) {
    <bytes::bytes_mut::BytesMut_as_core::ops::drop::Drop>::drop();
    return;
  }
  return;
}


// ===== 008f2bf8  FUN_008f2bf8 =====

void FUN_008f2bf8(long *param_1)

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
                    /* try { // try from 008f2c4c to 008f2c53 has its CatchHandler @ 008f2cb8 */
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
                    /* try { // try from 008f2c70 to 008f2c77 has its CatchHandler @ 008f2cb0 */
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


// ===== 008f2d10  FUN_008f2d10 =====

void FUN_008f2d10(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 008f2d20 to 008f2d23 has its CatchHandler @ 008f2d60 */
  FUN_008fa7d0();
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


// ===== 008f2d98  FUN_008f2d98 =====

void FUN_008f2d98(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  plVar1 = plVar5 + 0x11;
  *(undefined4 *)(plVar5 + 0x15) = 1;
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
    lVar4 = plVar5[0xf];
    plVar5[0xf] = 0;
    *(undefined4 *)(plVar5 + 0x11) = 0;
    if (lVar4 != 0) {
                    /* try { // try from 008f2de8 to 008f2deb has its CatchHandler @ 008f2e68 */
      (**(code **)(lVar4 + 8))(plVar5[0x10]);
    }
  }
  plVar1 = plVar5 + 0x14;
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
    lVar4 = plVar5[0x12];
    plVar5[0x12] = 0;
    if (lVar4 != 0) {
                    /* try { // try from 008f2e14 to 008f2e17 has its CatchHandler @ 008f2e58 */
      (**(code **)(lVar4 + 0x18))(plVar5[0x13]);
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
    <alloc::sync::[n]::alloc::sync::Arc<futures_channel::oneshot::Inner<http::header::map::HeaderMap>>>
    ::drop_slow(param_1);
    return;
  }
  return;
}


// ===== 008f2e98  FUN_008f2e98 =====

void FUN_008f2e98(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  plVar1 = plVar5 + 0x11;
  *(undefined4 *)(plVar5 + 0x15) = 1;
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
    lVar4 = plVar5[0xf];
    plVar5[0xf] = 0;
    *(undefined4 *)(plVar5 + 0x11) = 0;
    if (lVar4 != 0) {
                    /* try { // try from 008f2ee8 to 008f2f1f has its CatchHandler @ 008f2f5c */
      (**(code **)(lVar4 + 0x18))(plVar5[0x10]);
    }
  }
  plVar1 = plVar5 + 0x14;
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
    lVar4 = plVar5[0x12];
    plVar5[0x12] = 0;
    *(undefined4 *)(plVar5 + 0x14) = 0;
    if (lVar4 != 0) {
      (**(code **)(lVar4 + 8))(plVar5[0x13]);
    }
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
    <alloc::sync::[n]::alloc::sync::Arc<futures_channel::oneshot::Inner<http::header::map::HeaderMap>>>
    ::drop_slow(param_1);
    return;
  }
  return;
}


// ===== 008f2f8c  FUN_008f2f8c =====

void FUN_008f2f8c(long *param_1)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  
  __ptr = (void *)param_1[1];
  lVar2 = param_1[2] + 1;
  lVar1 = (long)__ptr + 0x38;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 008f2fc8 to 008f2fcb has its CatchHandler @ 008f3014 */
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


// ===== 008f3068  FUN_008f3068 =====

void FUN_008f3068(long param_1)

{
  if (*(long *)(param_1 + 0x40) != 0) {
                    /* try { // try from 008f3088 to 008f308f has its CatchHandler @ 008f30ac */
    (**(code **)(*(long *)(param_1 + 0x40) + 0x20))
              (param_1 + 0x58,*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
  }
                    /* WARNING: Could not recover jumptable at 0x008f30a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x20))
            (param_1 + 0x30,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}


// ===== 008f30d0  FUN_008f30d0 =====

void FUN_008f30d0(undefined8 *param_1)

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
                    /* try { // try from 008f30f8 to 008f30ff has its CatchHandler @ 008f3130 */
      (*pcVar1)(__ptr);
    }
    if (puVar2[1] != 0) {
      free(__ptr);
    }
  }
  free(param_1);
  return;
}


// ===== 008f3164  FUN_008f3164 =====

void FUN_008f3164(long param_1)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    free(*(void **)(param_1 + 0x48));
  }
                    /* try { // try from 008f3194 to 008f319b has its CatchHandler @ 008f3228 */
  FUN_008f0a90(param_1 + 0x18);
  if (*(long *)(param_1 + 0x18) != 0) {
    free(*(void **)(param_1 + 0x20));
  }
  __ptr = *(void **)(param_1 + 0x38);
  lVar2 = *(long *)(param_1 + 0x40) + 1;
  lVar1 = (long)__ptr + 0x38;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 008f31dc to 008f31df has its CatchHandler @ 008f3258 */
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


// ===== 008f32ac  <hyper::body::incoming::hyper::body::incoming::Incoming>::new_channel =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper::body::incoming::hyper::body::incoming::Incoming>::new_channel */

void __rustcall
<hyper::body::incoming::hyper::body::incoming::Incoming>::new_channel
          (undefined8 *param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  FUN_008f86e8(&local_68,0);
  uVar3 = local_68;
                    /* try { // try from 008f32f0 to 008f32f3 has its CatchHandler @ 008f338c */
  auVar7 = FUN_008f5780();
  local_68 = auVar7._8_8_;
  local_48 = auVar7._0_8_;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  plVar5 = (long *)FUN_004b25a4(0x30,8);
  if (plVar5 == (long *)0x0) {
                    /* try { // try from 008f337c to 008f3387 has its CatchHandler @ 008f3394 */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x30);
  }
  plVar5[5] = 0;
  lVar6 = 1;
  if (param_3 == 0) {
    lVar6 = 2;
  }
  plVar5[2] = lVar6;
  plVar5[3] = 0;
  plVar5[1] = 1;
  *plVar5 = 1;
  do {
    lVar6 = *plVar5;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = lVar6 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (-1 < lVar6) {
    *param_1 = auVar7._0_8_;
    param_1[1] = plVar5;
    param_1[6] = auVar7._8_8_;
    param_1[7] = param_2;
    param_1[3] = uStack_60;
    param_1[2] = uVar3;
    param_1[4] = local_58;
    param_1[5] = plVar5;
    param_1[8] = uStack_50;
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x8f338c);
  (*pcVar4)();
}


// ===== 008f33c4  <hyper::body::incoming::[1]::hyper::body::incoming::Sender>::poll_ready =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper::body::incoming::[1]::hyper::body::incoming::Sender>::poll_ready */

undefined1  [16] __rustcall
<hyper::body::incoming::[1]::hyper::body::incoming::Sender>::poll_ready
          (long param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 extraout_x1;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long *local_40;
  undefined *puStack_38;
  long local_18;
  
  lVar4 = *(long *)(param_1 + 8);
  <futures_core::task::__internal::atomic_waker::futures_core::task::__internal::atomic_waker::AtomicWaker>
  ::register(lVar4 + 0x18,*param_2);
  local_18 = *(long *)(lVar4 + 0x10);
  if (local_18 != 0) {
    if (local_18 == 1) {
      auVar5._8_8_ = extraout_x1;
      auVar5._0_8_ = 1;
      return auVar5;
    }
    if (local_18 != 2) {
      local_40 = &local_18;
      puStack_38 = PTR_fmt_00b00c10;
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                (&DAT_002a951b,&local_40,&PTR_s__root__cargo_registry_src_index__00aef190);
    }
    if ((*(char *)(param_1 + 0x20) != '\x02') && (*(long *)(*(long *)(param_1 + 0x10) + 0x38) < 0))
    {
      uVar3 = FUN_008f9634(param_1 + 0x10,param_2);
      auVar6._0_8_ = uVar3 & 0xffffffff;
      auVar6._8_8_ = 0;
      return auVar6;
    }
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar2 = (undefined8 *)FUN_004b25a4(0x18,8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    *(undefined1 *)(puVar2 + 2) = 5;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = puVar2;
    return auVar1 << 0x40;
  }
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x18);
}


// ===== 008f34d8  <hyper::body::incoming::[1]::hyper::body::incoming::Sender>::send_error =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper::body::incoming::[1]::hyper::body::incoming::Sender>::send_error */

void __rustcall
<hyper::body::incoming::[1]::hyper::body::incoming::Sender>::send_error
          (long param_1,undefined8 *param_2)

{
  undefined8 *__ptr;
  code *pcVar1;
  undefined8 *puVar2;
  void *__ptr_00;
  long local_b0;
  undefined8 *puStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char local_90;
  long local_80;
  undefined8 *puStack_78;
  char local_70;
  undefined4 local_6f;
  undefined3 uStack_6b;
  long local_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 local_38;
  undefined3 uStack_34;
  
  local_70 = *(char *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0x20) != '\x02') {
                    /* try { // try from 008f3504 to 008f350f has its CatchHandler @ 008f3634 */
    FUN_008fa5b0(&local_b0,param_1 + 0x10);
    puStack_58 = puStack_a8;
    local_60 = local_b0;
    uStack_34 = (undefined3)((ulong)local_a0 >> 0x28);
    local_70 = (char)local_a0;
    local_38 = local_a0._1_4_;
  }
  puStack_78 = puStack_58;
  local_80 = local_60;
  local_6f = local_38;
  uStack_6b = uStack_34;
  local_60 = 0;
  puStack_58 = param_2;
  if (local_70 == '\x02') {
    local_90 = '\x01';
    local_b0 = 0;
    uStack_98 = uStack_48;
    local_a0 = uStack_50;
    puStack_a8 = param_2;
  }
  else {
                    /* try { // try from 008f3568 to 008f359f has its CatchHandler @ 008f3644 */
    FUN_008f9878(&local_b0,&local_80,&local_60);
    if (local_90 == '\x02') goto LAB_008f35e8;
  }
  __ptr = puStack_a8;
  if (local_b0 == 0) {
    __ptr_00 = (void *)*puStack_a8;
    if (__ptr_00 != (void *)0x0) {
      puVar2 = (undefined8 *)puStack_a8[1];
      pcVar1 = (code *)*puVar2;
      if (pcVar1 != (code *)0x0) {
                    /* try { // try from 008f35bc to 008f35c3 has its CatchHandler @ 008f3604 */
        (*pcVar1)(__ptr_00);
      }
      if (puVar2[1] != 0) {
        free(__ptr_00);
      }
    }
    free(__ptr);
  }
  else {
    (**(code **)(local_b0 + 0x20))(&uStack_98,puStack_a8,local_a0);
  }
LAB_008f35e8:
  FUN_008f2bf8(&local_80);
  return;
}


// ===== 008f365c  <hyper::body::incoming::[1]::hyper::body::incoming::Sender>::try_send_data =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper::body::incoming::[1]::hyper::body::incoming::Sender>::try_send_data */

void __rustcall
<hyper::body::incoming::[1]::hyper::body::incoming::Sender>::try_send_data
          (long *param_1,long param_2,long *param_3)

{
  long local_70;
  long lStack_68;
  long local_60;
  long lStack_58;
  char local_50;
  long local_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_38 = param_3[1];
  local_40 = *param_3;
  lStack_28 = param_3[3];
  lStack_30 = param_3[2];
  if (*(char *)(param_2 + 0x20) == '\x02') {
    lStack_68 = param_3[1];
    local_70 = *param_3;
    lStack_58 = param_3[3];
    local_60 = param_3[2];
  }
  else {
    FUN_008f9878(&local_70,param_2 + 0x10,&local_40);
    if (local_50 == '\x02') {
      *param_1 = 0;
      return;
    }
  }
  if (local_70 != 0) {
    *param_1 = local_70;
    param_1[1] = lStack_68;
    param_1[3] = lStack_58;
    param_1[2] = local_60;
    return;
  }
  local_40 = lStack_68;
                    /* try { // try from 008f36e8 to 008f370b has its CatchHandler @ 008f3710 */
                    /* WARNING: Subroutine does not return */
  core::result::unwrap_failed
            ("just sent Ok",0xc,&local_40,&PTR_FUN_00aef138,
             &PTR_s__root__cargo_registry_src_index__00aef178);
}


// ===== 008f3728  <hyper::body::incoming::[1]::hyper::body::incoming::Sender>::try_send_trailers =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper::body::incoming::[1]::hyper::body::incoming::Sender>::try_send_trailers */

void __rustcall
<hyper::body::incoming::[1]::hyper::body::incoming::Sender>::try_send_trailers
          (long *param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  long local_e0;
  long lStack_d8;
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
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar1 = *param_2;
  *param_2 = 0;
  if (lVar1 == 0) {
    *param_1 = -1;
    FUN_008f3164(param_3);
    return;
  }
  uStack_58 = param_3[5];
  local_60 = param_3[4];
  uStack_48 = param_3[7];
  uStack_50 = param_3[6];
  uStack_38 = param_3[9];
  local_40 = param_3[8];
  uStack_28 = param_3[0xb];
  uStack_30 = param_3[10];
  uStack_78 = param_3[1];
  local_80 = *param_3;
  uStack_68 = param_3[3];
  uStack_70 = param_3[2];
  FUN_008f5f94(&local_e0,lVar1,&local_80);
  if (local_e0 != -1) {
    param_1[5] = lStack_b8;
    param_1[4] = local_c0;
    param_1[7] = lStack_a8;
    param_1[6] = lStack_b0;
    param_1[9] = lStack_98;
    param_1[8] = local_a0;
    param_1[0xb] = lStack_88;
    param_1[10] = lStack_90;
    param_1[1] = lStack_d8;
    *param_1 = local_e0;
    param_1[3] = lStack_c8;
    param_1[2] = lStack_d0;
    return;
  }
  *param_1 = -2;
  return;
}


// ===== 008f37d8  FUN_008f37d8 =====

bool FUN_008f37d8(long param_1,undefined2 param_2,long *param_3,long *param_4)

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
                    /* try { // try from 008f3860 to 008f3863 has its CatchHandler @ 008f38c4 */
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
                    /* try { // try from 008f3808 to 008f380f has its CatchHandler @ 008f38d8 */
    (**(code **)(*param_4 + 0x20))(param_4 + 3,param_4[1],param_4[2]);
    if (*param_3 != 0) {
      (**(code **)(*param_3 + 0x20))(param_3 + 3,param_3[1],param_3[2]);
    }
  }
  return (uVar3 & 0xffffffffffff8000) != 0;
}


// ===== 008f3900  FUN_008f3900 =====

undefined1  [16] FUN_008f3900(ulong *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  char cVar3;
  long lVar4;
  undefined1 auVar5 [16];
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  ulong __n;
  ulong uVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  if ((*(byte *)((long)param_1 + 0x41) & 1) != 0) {
    auVar11._8_8_ = 0;
    auVar11._0_8_ = param_2;
    return auVar11 << 0x40;
  }
  uVar2 = param_1[2];
  uVar8 = param_1[3];
  uVar9 = param_1[5];
  if ((uVar9 <= uVar8) && (uVar10 = param_1[4], uVar10 <= uVar9)) {
    __n = (ulong)(byte)param_1[7];
    cVar3 = *(char *)((long)param_1 + __n + 0x2f);
    if (__n < 5) {
      do {
        if (uVar9 - uVar10 < 0x10) {
          uVar7 = 0;
          if (uVar9 == uVar10) goto LAB_008f3af4;
          while (*(char *)(uVar2 + uVar10 + uVar7) != cVar3) {
            uVar7 = uVar7 + 1;
            if (uVar9 - uVar10 == uVar7) goto LAB_008f3af4;
          }
        }
        else {
          auVar11 = core::slice::memchr::memchr_aligned(cVar3,uVar2 + uVar10,uVar9 - uVar10);
          uVar7 = auVar11._8_8_;
          if (auVar11._0_8_ != 1) goto LAB_008f3af4;
        }
        uVar10 = uVar10 + uVar7 + 1;
        param_1[4] = uVar10;
        if (((__n <= uVar10) && (uVar10 <= uVar8)) &&
           (iVar6 = memcmp((void *)(uVar2 + (uVar10 - __n)),param_1 + 6,__n), iVar6 == 0)) {
          uVar8 = *param_1;
          *param_1 = uVar10;
          auVar12._8_8_ = (uVar10 - __n) - uVar8;
          auVar12._0_8_ = uVar2 + uVar8;
          return auVar12;
        }
      } while (uVar10 <= uVar9);
    }
    else {
      do {
        if (uVar9 - uVar10 < 0x10) {
          uVar7 = 0;
          if (uVar9 == uVar10) {
            auVar13 = ZEXT816(0);
          }
          else {
            do {
              if (*(char *)(uVar2 + uVar10 + uVar7) == cVar3) {
                auVar13._8_8_ = uVar7;
                auVar13._0_8_ = 1;
                goto LAB_008f3ab8;
              }
              uVar7 = uVar7 + 1;
            } while (uVar9 - uVar10 != uVar7);
            auVar5._8_8_ = 0;
            auVar5._0_8_ = uVar9 - uVar10;
            auVar13 = auVar5 << 0x40;
          }
        }
        else {
          auVar13 = core::slice::memchr::memchr_aligned(cVar3,uVar2 + uVar10,uVar9 - uVar10);
        }
LAB_008f3ab8:
        if (auVar13._0_8_ != 1) goto LAB_008f3af4;
        uVar10 = uVar10 + auVar13._8_8_ + 1;
        param_1[4] = uVar10;
        if ((__n <= uVar10) && (uVar10 <= uVar8)) {
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (0,__n,4,&PTR_s__nix_store_8006w282fgsx3273c878b_00aef4c8);
        }
      } while (uVar10 <= uVar9);
    }
  }
LAB_008f3af8:
  lVar4 = param_1[1] - *param_1;
  lVar1 = uVar2 + *param_1;
  *(undefined1 *)((long)param_1 + 0x41) = 1;
  if ((param_1[8] & 1) == 0 && lVar4 == 0) {
    lVar1 = 0;
  }
  auVar14._8_8_ = lVar4;
  auVar14._0_8_ = lVar1;
  return auVar14;
LAB_008f3af4:
  param_1[4] = uVar9;
  goto LAB_008f3af8;
}


// ===== 008f3b38  FUN_008f3b38 =====

long FUN_008f3b38(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  ulong __n;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  if ((*(byte *)((long)param_1 + 0x41) & 1) != 0) {
    return 0;
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *(undefined1 *)(param_1 + 8) = 1;
    auVar8 = FUN_008f3b38(param_1);
    if ((auVar8._0_8_ != 0) && (auVar8._8_8_ != 0)) {
      return auVar8._0_8_;
    }
    if (*(char *)((long)param_1 + 0x41) == '\x01') {
      return 0;
    }
  }
  uVar1 = param_1[4];
  uVar7 = param_1[5];
  lVar4 = param_1[2];
  if ((uVar1 <= uVar7) && (uVar5 = param_1[3], uVar7 <= uVar5)) {
    __n = (ulong)*(byte *)(param_1 + 7);
    uVar6 = __n - 1;
    if (__n < 5) {
      do {
        auVar8 = core::slice::memchr::memrchr
                           (*(undefined1 *)((long)param_1 + __n + 0x2f),lVar4 + uVar1,uVar7 - uVar1)
        ;
        if (auVar8._0_8_ != 1) goto LAB_008f3c88;
        uVar7 = auVar8._8_8_ + uVar1;
        uVar2 = uVar7 - uVar6;
        if (((uVar6 <= uVar7) && (!CARRY8(uVar2,__n))) &&
           ((uVar2 + __n <= uVar5 &&
            (iVar3 = memcmp((void *)(lVar4 + uVar2),param_1 + 6,__n), iVar3 == 0)))) {
          param_1[5] = uVar2;
          param_1[1] = uVar2;
          return lVar4 + uVar2 + __n;
        }
        param_1[5] = uVar7;
      } while ((uVar1 <= uVar7) && (uVar7 <= uVar5));
    }
    else {
      do {
        auVar8 = core::slice::memchr::memrchr
                           (*(undefined1 *)((long)param_1 + __n + 0x2f),lVar4 + uVar1,uVar7 - uVar1)
        ;
        if (auVar8._0_8_ != 1) goto LAB_008f3c88;
        uVar7 = auVar8._8_8_ + uVar1;
        if (((uVar6 <= uVar7) && (!CARRY8(uVar7 - uVar6,__n))) && ((uVar7 - uVar6) + __n <= uVar5))
        {
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (0,__n,4,&PTR_s__nix_store_8006w282fgsx3273c878b_00aef260);
        }
        param_1[5] = uVar7;
      } while ((uVar1 <= uVar7) && (uVar7 <= uVar5));
    }
  }
LAB_008f3c8c:
  *(undefined1 *)((long)param_1 + 0x41) = 1;
  return lVar4 + *param_1;
LAB_008f3c88:
  param_1[5] = uVar1;
  goto LAB_008f3c8c;
}


// ===== 008f3cd4  FUN_008f3cd4 =====

/* WARNING: Type propagation algorithm not settling */

bool FUN_008f3cd4(long param_1)

{
  ulong uVar1;
  byte *pbVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined8 local_58;
  long lStack_50;
  byte *local_48;
  long lStack_40;
  undefined8 local_38;
  long lStack_30;
  undefined8 local_28;
  undefined1 local_20;
  undefined2 local_18;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar1 = *(ulong *)(param_1 + 0x28);
    uVar3 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x28);
    if (uVar3 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (uVar1,uVar3,&PTR_s__root__cargo_registry_src_index__00aef440);
    }
    lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 0x20) + uVar1 * 0x68;
    pbVar2 = *(byte **)(lVar5 + 0x20);
    lVar5 = *(long *)(lVar5 + 0x28);
    local_48 = pbVar2;
    lStack_50 = lVar5;
  }
  else {
    if (*(long *)(param_1 + 0x10) == 2) {
      return false;
    }
    uVar1 = *(ulong *)(param_1 + 0x18);
    uVar3 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x40);
    if (uVar3 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (uVar1,uVar3,&PTR_s__root__cargo_registry_src_index__00aef458);
    }
    lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 0x38) + uVar1 * 0x48;
    pbVar2 = *(byte **)(lVar5 + 0x28);
    lVar5 = *(long *)(lVar5 + 0x30);
    local_48 = pbVar2;
    lStack_50 = lVar5;
  }
  for (; lVar5 != 0; lVar5 = lVar5 + -1) {
    if ((*pbVar2 != 9) && (0x5e < *pbVar2 - 0x20)) {
      return false;
    }
    pbVar2 = pbVar2 + 1;
  }
  local_58 = 0;
  local_38 = 0;
  local_20 = 1;
  local_28 = 0x2c0000002c;
  local_18 = 1;
  lStack_40 = lStack_50;
  lStack_30 = lStack_50;
  lVar5 = FUN_008f3b38(&local_58);
  if (lVar5 == 0) {
    return false;
  }
  auVar7 = FUN_008f0c20();
  pbVar2 = auVar7._0_8_;
  if (auVar7._8_8_ == 7) {
    uVar4 = 0x20;
    uVar6 = uVar4;
    if (0x19 < *pbVar2 - 0x41) {
      uVar6 = 0;
    }
    if ((uVar6 | *pbVar2) == 99) {
      if (0x19 < pbVar2[1] - 0x41) {
        uVar4 = 0;
      }
      if ((uVar4 | pbVar2[1]) == 0x68) {
        uVar4 = 0x20;
        uVar6 = uVar4;
        if (0x19 < pbVar2[2] - 0x41) {
          uVar6 = 0;
        }
        if ((uVar6 | pbVar2[2]) == 0x75) {
          if (0x19 < pbVar2[3] - 0x41) {
            uVar4 = 0;
          }
          if ((uVar4 | pbVar2[3]) == 0x6e) {
            uVar4 = 0x20;
            uVar6 = uVar4;
            if (0x19 < pbVar2[4] - 0x41) {
              uVar6 = 0;
            }
            if ((uVar6 | pbVar2[4]) == 0x6b) {
              if (0x19 < pbVar2[5] - 0x41) {
                uVar4 = 0;
              }
              if ((uVar4 | pbVar2[5]) == 0x65) {
                uVar6 = 0x20;
                if (0x19 < pbVar2[6] - 0x41) {
                  uVar6 = 0;
                }
                return (uVar6 | pbVar2[6]) == 100;
              }
            }
          }
        }
      }
    }
  }
  return false;
}


// ===== 008f3ecc  FUN_008f3ecc =====

void FUN_008f3ecc(long *param_1)

{
  uint *puVar1;
  void *__src;
  ulong *__n;
  ulong uVar2;
  long lVar3;
  ulong *puVar4;
  uint *puVar5;
  undefined8 uVar6;
  long local_e0;
  long local_d8;
  ulong *local_d0;
  ulong local_c8;
  ulong *local_c0;
  long lStack_b8;
  ulong local_b0;
  ulong uStack_a8;
  long local_a0;
  ulong *local_90;
  code *pcStack_88;
  ulong *local_80;
  code *pcStack_78;
  char local_70;
  undefined7 uStack_6f;
  ulong local_68;
  ulong local_60;
  long local_58;
  long local_50;
  long local_48;
  ulong local_40;
  undefined1 uStack_31;
  
  lVar3 = *param_1;
  uVar2 = param_1[2];
  if (*(ulong *)(lVar3 + 0x28) <= uVar2) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check
              (uVar2,*(ulong *)(lVar3 + 0x28),&PTR_s__root__cargo_registry_src_index__00aef1c0);
  }
  puVar5 = (uint *)(*(long *)(lVar3 + 0x20) + uVar2 * 0x68);
  if ((*puVar5 & 1) == 0) {
    puVar1 = puVar5 + 6;
    lVar3 = *(long *)(puVar5 + 10);
  }
  else {
    uVar2 = *(ulong *)(puVar5 + 4);
    if (*(ulong *)(lVar3 + 0x40) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (uVar2,*(ulong *)(lVar3 + 0x40),&PTR_s__root__cargo_registry_src_index__00aef470);
    }
    lVar3 = *(long *)(lVar3 + 0x38) + uVar2 * 0x48;
    puVar1 = (uint *)(lVar3 + 0x20);
    lVar3 = *(long *)(lVar3 + 0x30);
  }
  puVar4 = (ulong *)(lVar3 + 9);
  if ((long)puVar4 < 0) {
    uVar6 = 0;
LAB_008f3f68:
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar6,puVar4);
  }
  if (puVar4 == (ulong *)0x0) {
    local_e0 = 1;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar6 = 1;
    local_e0 = FUN_004b25a4(puVar4,1);
    if (local_e0 == 0) goto LAB_008f3f68;
  }
  local_d8 = 0;
  uVar2 = 0x40 - LZCOUNT((ulong)puVar4 >> 10);
  if (6 < uVar2) {
    uVar2 = 7;
  }
  local_c8 = uVar2 << 2 | 1;
  __src = *(void **)(puVar1 + 2);
  __n = *(ulong **)(puVar1 + 4);
  local_d0 = puVar4;
  if (puVar4 < __n) {
                    /* try { // try from 008f3fb0 to 008f3fbf has its CatchHandler @ 008f42a8 */
    <bytes::bytes_mut::bytes::bytes_mut::BytesMut>::reserve_inner(&local_e0,__n,1);
  }
  memcpy((void *)(local_e0 + local_d8),__src,(size_t)__n);
  puVar4 = (ulong *)((long)local_d0 - local_d8);
  if (__n <= puVar4) {
    local_d8 = local_d8 + (long)__n;
    if ((ulong)((long)local_d0 - local_d8) < 2) {
                    /* try { // try from 008f4000 to 008f4053 has its CatchHandler @ 008f42a8 */
      <bytes::bytes_mut::bytes::bytes_mut::BytesMut>::reserve_inner(&local_e0,2,1);
    }
    *(undefined2 *)(local_e0 + local_d8) = 0x202c;
    puVar4 = (ulong *)((long)local_d0 - local_d8);
    if (puVar4 < (ulong *)0x2) {
      __n = (ulong *)0x2;
    }
    else {
      local_d8 = local_d8 + 2;
      if ((ulong)((long)local_d0 - local_d8) < 7) {
        <bytes::bytes_mut::bytes::bytes_mut::BytesMut>::reserve_inner(&local_e0,7,1);
      }
      *(undefined4 *)(local_e0 + local_d8 + 3) = 0x64656b6e;
      *(undefined4 *)(local_e0 + local_d8) = 0x6e756863;
      puVar4 = (ulong *)((long)local_d0 - local_d8);
      if ((ulong *)0x6 < puVar4) {
        lVar3 = local_d8 + 7;
        local_40 = local_c8;
        local_50 = local_e0;
        puVar4 = (ulong *)PTR_SHARED_VTABLE_00b00e28;
        local_d8 = lVar3;
        if ((local_c8 & 1) != 0) {
          uVar2 = local_c8 >> 5;
          local_48 = uVar2 + lVar3;
          local_58 = uVar2 + (long)local_d0;
          local_50 = local_e0 - uVar2;
          <bytes::bytes::Bytes_as_core::convert::From<alloc::vec::Vec<u8>>>::from
                    (&local_c0,&local_58);
          lVar3 = local_b0 - uVar2;
          local_68 = uVar2;
          if (local_b0 < uVar2) {
            local_90 = &local_68;
            pcStack_88 = FUN_008f5344;
            local_80 = &local_60;
            local_60 = local_b0;
            pcStack_78 = FUN_008f5344;
                    /* try { // try from 008f4210 to 008f4227 has its CatchHandler @ 008f4260 */
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_fmt
                      (&DAT_002afeea,&local_90,&PTR_s__root__cargo_registry_src_index__00aef2b8);
          }
          local_50 = lStack_b8 + uVar2;
          local_40 = uStack_a8;
          local_58 = 0;
          puVar4 = local_c0;
          if (local_c0 == (ulong *)0x0) {
            local_48 = lVar3;
                    /* try { // try from 008f41c0 to 008f41cb has its CatchHandler @ 008f4284 */
                    /* WARNING: Subroutine does not return */
            core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00aef6e8);
          }
        }
        local_58 = 0;
                    /* try { // try from 008f4118 to 008f4123 has its CatchHandler @ 008f4284 */
        local_c0 = puVar4;
        lStack_b8 = local_50;
        local_b0 = lVar3;
        uStack_a8 = local_40;
        local_48 = lVar3;
        <http::header::value::http::header::value::HeaderValue>::from_shared(&local_90,&local_c0);
        if (local_58 != 0) {
          (**(code **)(local_58 + 0x20))(&local_40,local_50,local_48);
        }
        if (local_70 != '\x02') {
          local_a0 = CONCAT71(uStack_6f,local_70);
          lStack_b8 = (long)pcStack_88;
          local_c0 = local_90;
          uStack_a8 = (ulong)pcStack_78;
          local_b0 = (ulong)local_80;
                    /* try { // try from 008f4164 to 008f416b has its CatchHandler @ 008f4244 */
          (**(code **)(*(long *)puVar1 + 0x20))
                    (puVar1 + 6,*(long *)(puVar1 + 2),*(long *)(puVar1 + 4));
          *(long *)(puVar1 + 2) = lStack_b8;
          *(ulong **)puVar1 = local_c0;
          *(ulong *)(puVar1 + 6) = uStack_a8;
          *(ulong *)(puVar1 + 4) = local_b0;
          *(long *)(puVar1 + 8) = local_a0;
          return;
        }
                    /* WARNING: Subroutine does not return */
        core::result::unwrap_failed
                  ("original header value plus ascii is valid",0x29,&uStack_31,&DAT_00aef158,
                   &PTR_s__root__cargo_registry_src_index__00aef1d8);
      }
      __n = (ulong *)0x7;
    }
  }
  local_90 = __n;
  pcStack_88 = (code *)puVar4;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 008f41b8 to 008f41bb has its CatchHandler @ 008f42a8 */
  bytes::panic_advance();
}


// ===== 008f42c0  FUN_008f42c0 =====

undefined8 FUN_008f42c0(long param_1)

{
  uint uVar1;
  long lVar2;
  byte *pbVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined8 local_68;
  long lStack_60;
  byte *local_58;
  long lStack_50;
  undefined8 local_48;
  long lStack_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined2 local_28;
  
  local_58 = *(byte **)(param_1 + 8);
  lStack_60 = *(long *)(param_1 + 0x10);
  pbVar3 = local_58;
  for (lVar2 = lStack_60; lVar2 != 0; lVar2 = lVar2 + -1) {
    if ((*pbVar3 != 9) && (0x5e < *pbVar3 - 0x20)) {
      return 0;
    }
    pbVar3 = pbVar3 + 1;
  }
  local_68 = 0;
  local_48 = 0;
  local_30 = 1;
  local_38 = 0x2c0000002c;
  local_28 = 1;
  lStack_50 = lStack_60;
  lStack_40 = lStack_60;
  lVar2 = FUN_008f3900(&local_68);
  do {
    if (lVar2 == 0) {
      return 0;
    }
    auVar5 = FUN_008f0c20();
    pbVar3 = auVar5._0_8_;
    if (auVar5._8_8_ == 5) {
      uVar4 = 0x20;
      uVar1 = uVar4;
      if (0x19 < *pbVar3 - 0x41) {
        uVar1 = 0;
      }
      if ((uVar1 | *pbVar3) == 99) {
        if (0x19 < pbVar3[1] - 0x41) {
          uVar4 = 0;
        }
        if ((uVar4 | pbVar3[1]) == 0x6c) {
          uVar4 = 0x20;
          uVar1 = uVar4;
          if (0x19 < pbVar3[2] - 0x41) {
            uVar1 = 0;
          }
          if ((uVar1 | pbVar3[2]) == 0x6f) {
            uVar1 = uVar4;
            if (0x19 < pbVar3[3] - 0x41) {
              uVar1 = 0;
            }
            if ((uVar1 | pbVar3[3]) == 0x73) {
              if (0x19 < pbVar3[4] - 0x41) {
                uVar4 = 0;
              }
              if ((uVar4 | pbVar3[4]) == 0x65) {
                return 1;
              }
            }
          }
        }
      }
    }
    lVar2 = FUN_008f3900(&local_68);
  } while( true );
}


// ===== 008f4408  hyper::headers::connection_keep_alive =====

/* WARNING: Unknown calling convention: __rustcall */
/* hyper::headers::connection_keep_alive */

undefined8 __rustcall hyper::headers::connection_keep_alive(long param_1)

{
  uint uVar1;
  long lVar2;
  byte *pbVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined8 local_68;
  long lStack_60;
  byte *local_58;
  long lStack_50;
  undefined8 local_48;
  long lStack_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined2 local_28;
  
  local_58 = *(byte **)(param_1 + 8);
  lStack_60 = *(long *)(param_1 + 0x10);
  pbVar3 = local_58;
  for (lVar2 = lStack_60; lVar2 != 0; lVar2 = lVar2 + -1) {
    if ((*pbVar3 != 9) && (0x5e < *pbVar3 - 0x20)) {
      return 0;
    }
    pbVar3 = pbVar3 + 1;
  }
  local_68 = 0;
  local_48 = 0;
  local_30 = 1;
  local_38 = 0x2c0000002c;
  local_28 = 1;
  lStack_50 = lStack_60;
  lStack_40 = lStack_60;
  lVar2 = FUN_008f3900(&local_68);
  do {
    if (lVar2 == 0) {
      return 0;
    }
    auVar5 = FUN_008f0c20();
    pbVar3 = auVar5._0_8_;
    if (auVar5._8_8_ == 10) {
      uVar4 = 0x20;
      uVar1 = uVar4;
      if (0x19 < *pbVar3 - 0x41) {
        uVar1 = 0;
      }
      if ((uVar1 | *pbVar3) == 0x6b) {
        if (0x19 < pbVar3[1] - 0x41) {
          uVar4 = 0;
        }
        if ((uVar4 | pbVar3[1]) == 0x65) {
          uVar4 = 0x20;
          uVar1 = uVar4;
          if (0x19 < pbVar3[2] - 0x41) {
            uVar1 = 0;
          }
          if ((uVar1 | pbVar3[2]) == 0x65) {
            uVar1 = uVar4;
            if (0x19 < pbVar3[3] - 0x41) {
              uVar1 = 0;
            }
            if ((uVar1 | pbVar3[3]) == 0x70) {
              uVar1 = uVar4;
              if (0x19 < pbVar3[4] - 0x41) {
                uVar1 = 0;
              }
              if ((uVar1 | pbVar3[4]) == 0x2d) {
                if (0x19 < pbVar3[5] - 0x41) {
                  uVar4 = 0;
                }
                if ((uVar4 | pbVar3[5]) == 0x61) {
                  uVar4 = 0x20;
                  uVar1 = uVar4;
                  if (0x19 < pbVar3[6] - 0x41) {
                    uVar1 = 0;
                  }
                  if ((uVar1 | pbVar3[6]) == 0x6c) {
                    uVar1 = uVar4;
                    if (0x19 < pbVar3[7] - 0x41) {
                      uVar1 = 0;
                    }
                    if ((uVar1 | pbVar3[7]) == 0x69) {
                      uVar1 = uVar4;
                      if (0x19 < pbVar3[8] - 0x41) {
                        uVar1 = 0;
                      }
                      if ((uVar1 | pbVar3[8]) == 0x76) {
                        if (0x19 < pbVar3[9] - 0x41) {
                          uVar4 = 0;
                        }
                        if ((uVar4 | pbVar3[9]) == 0x65) {
                          return 1;
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
    }
    lVar2 = FUN_008f3900(&local_68);
  } while( true );
}


// ===== 008f45dc  FUN_008f45dc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_008f45dc(undefined8 param_1)

{
  ulong uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  byte *pbVar5;
  uint *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x20;
  ulong unaff_x21;
  long lVar11;
  ulong unaff_x24;
  long lVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  long local_d8;
  ulong local_d0;
  long local_c8;
  undefined8 local_c0;
  long lStack_b8;
  byte *local_b0;
  long lStack_a8;
  undefined8 local_a0;
  long lStack_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined2 local_80;
  
  lStack_b8 = _UNK_002c0370;
  local_c0 = _DAT_002c0368;
  lStack_a8 = _UNK_002c0380;
  local_b0 = _DAT_002c0378;
  FUN_008ed058(&local_d8,param_1,&local_c0);
  if (local_d8 == 1) {
    if (*(ulong *)(local_c8 + 0x28) <= local_d0) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (local_d0,*(ulong *)(local_c8 + 0x28),
                 &PTR_s__root__cargo_registry_src_index__00aef1f0);
    }
    puVar6 = (uint *)(*(long *)(local_c8 + 0x20) + local_d0 * 0x68);
    uVar10 = local_d0;
    if ((*puVar6 & 1) == 0) {
      lVar12 = 0;
      lVar13 = 0;
    }
    else {
      unaff_x24 = *(ulong *)(puVar6 + 4);
      lVar13 = 0;
      lVar12 = 1;
    }
  }
  else {
    uVar10 = 0xffffffffffffffff;
    lVar12 = 2;
    lVar13 = 2;
  }
  lVar11 = 0;
  do {
    if (lVar13 == 0) {
      if (*(ulong *)(local_c8 + 0x28) <= uVar10) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (uVar10,*(ulong *)(local_c8 + 0x28),
                   &PTR_s__root__cargo_registry_src_index__00aeedd0);
      }
      puVar6 = (uint *)(*(long *)(local_c8 + 0x20) + uVar10 * 0x68);
      if (lVar12 == 0) {
        lVar12 = 2;
        lVar13 = 2;
        pbVar5 = *(byte **)(puVar6 + 8);
        lVar7 = *(long *)(puVar6 + 10);
        local_b0 = pbVar5;
        lStack_b8 = lVar7;
      }
      else {
        if ((*puVar6 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    ("internal error: entered unreachable code",0x28,
                     &PTR_s__root__cargo_registry_src_index__00aeede8);
        }
        unaff_x21 = *(ulong *)(puVar6 + 2);
        lVar13 = 1;
        pbVar5 = *(byte **)(puVar6 + 8);
        lVar7 = *(long *)(puVar6 + 10);
        local_b0 = pbVar5;
        lStack_b8 = lVar7;
      }
    }
    else {
      if (lVar13 == 2) goto LAB_008f4850;
      if (*(ulong *)(local_c8 + 0x40) <= unaff_x21) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (unaff_x21,*(ulong *)(local_c8 + 0x40),
                   &PTR_s__root__cargo_registry_src_index__00aeee00);
      }
      lVar7 = *(long *)(local_c8 + 0x38) + unaff_x21 * 0x48;
      if (((lVar12 == 2) || (lVar13 != lVar12)) || (unaff_x21 != unaff_x24)) {
        if (*(long *)(lVar7 + 0x10) == 1) {
          unaff_x21 = *(ulong *)(lVar7 + 0x18);
          lVar13 = 1;
          pbVar5 = *(byte **)(lVar7 + 0x28);
          lVar7 = *(long *)(lVar7 + 0x30);
          local_b0 = pbVar5;
          lStack_b8 = lVar7;
          goto joined_r0x008f46f8;
        }
      }
      else {
        lVar12 = 2;
        unaff_x21 = unaff_x24;
      }
      lVar13 = 2;
      pbVar5 = *(byte **)(lVar7 + 0x28);
      lVar7 = *(long *)(lVar7 + 0x30);
      local_b0 = pbVar5;
      lStack_b8 = lVar7;
    }
joined_r0x008f46f8:
    for (; lVar7 != 0; lVar7 = lVar7 + -1) {
      if ((*pbVar5 != 9) && (0x5e < *pbVar5 - 0x20)) goto LAB_008f484c;
      pbVar5 = pbVar5 + 1;
    }
    local_c0 = 0;
    local_a0 = 0;
    local_90 = 0x2c0000002c;
    local_88 = 1;
    local_80 = 1;
    lStack_a8 = lStack_b8;
    lStack_98 = lStack_b8;
    lVar7 = FUN_008f3900(&local_c0);
    if (lVar7 != 0) {
      bVar4 = lVar11 == 0;
      do {
        auVar14 = FUN_008f0c20();
        if (auVar14._8_8_ == 0) goto LAB_008f484c;
        uVar8 = 0;
        while( true ) {
          pbVar5 = auVar14._0_8_;
          if (auVar14._8_8_ == 0) break;
          uVar2 = *pbVar5 - 0x30;
          if (9 < uVar2) goto LAB_008f484c;
          auVar3._8_8_ = 0;
          auVar3._0_8_ = uVar8;
          uVar9 = uVar8 * 10;
          uVar1 = (ulong)(byte)uVar2;
          uVar8 = uVar9 + uVar1;
          if ((SUB168(auVar3 * ZEXT816(10),8) != 0) ||
             (auVar14._8_8_ = auVar14._8_8_ + -1, auVar14._0_8_ = pbVar5 + 1, CARRY8(uVar9,uVar1)))
          goto LAB_008f484c;
        }
        if ((!bVar4) && (bVar4 = unaff_x20 != uVar8, uVar8 = unaff_x20, bVar4)) goto LAB_008f484c;
        lVar11 = FUN_008f3900(&local_c0);
        bVar4 = false;
        unaff_x20 = uVar8;
      } while (lVar11 != 0);
      lVar11 = 1;
    }
  } while( true );
LAB_008f484c:
  lVar11 = 0;
LAB_008f4850:
  auVar15._8_8_ = unaff_x20;
  auVar15._0_8_ = lVar11;
  return auVar15;
}


// ===== 008f48c4  FUN_008f48c4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f48c4(undefined8 param_1)

{
  bool bVar1;
  ulong *puVar2;
  uint *puVar3;
  undefined8 local_70;
  undefined8 uStack_68;
  ulong local_60;
  ulong local_58 [2];
  ulong local_48;
  long local_38;
  ulong local_30;
  long local_28;
  
  uStack_68 = _UNK_002bf9d0;
  local_70 = _s__002bf9c8;
  local_58[0] = _UNK_002bf9e0;
  local_60 = _DAT_002bf9d8;
  FUN_008ed058(&local_38,param_1,&local_70);
  if (local_38 == 1) {
    if (*(ulong *)(local_28 + 0x28) <= local_30) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (local_30,*(ulong *)(local_28 + 0x28),
                 &PTR_s__root__cargo_registry_src_index__00aef1f0);
    }
    puVar3 = (uint *)(*(long *)(local_28 + 0x20) + local_30 * 0x68);
    puVar2 = local_58;
    bVar1 = (*puVar3 & 1) != 0;
    if (bVar1) {
      puVar3 = *(uint **)(puVar3 + 4);
    }
    local_60 = (ulong)bVar1;
    local_48 = local_30;
    local_70 = 0;
  }
  else {
    puVar3 = (uint *)0x2;
    local_48 = 0xffffffffffffffff;
    puVar2 = &local_60;
    local_70 = 2;
  }
  *puVar2 = (ulong)puVar3;
  FUN_008f3cd4(&local_70);
  return;
}


// ===== 008f498c  hyper::proto::h1::decode::decode_trailers =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* hyper::proto::h1::decode::decode_trailers */

void __rustcall
hyper::proto::h1::decode::decode_trailers(long *param_1,undefined8 *param_2,ulong param_3)

{
  ushort *puVar1;
  undefined2 *puVar2;
  byte bVar3;
  char cVar4;
  ushort uVar5;
  byte *pbVar6;
  ushort uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 **ppuVar12;
  void *__s2;
  size_t __n;
  bool bVar13;
  int iVar14;
  uint uVar15;
  undefined8 *__ptr;
  ulong uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  long lVar19;
  ulong uVar20;
  undefined8 *puVar21;
  ulong uVar22;
  undefined8 uVar23;
  ulong uVar24;
  uint *puVar25;
  ulong uVar26;
  ulong uVar27;
  ulong local_250;
  long local_248;
  long lStack_240;
  long local_238;
  long lStack_230;
  long local_228;
  ulong uStack_220;
  long local_218;
  long lStack_210;
  long local_208;
  long lStack_200;
  ulong local_1f8;
  ushort uStack_1f0;
  undefined6 uStack_1ee;
  char local_1e8;
  undefined1 local_1e7;
  undefined8 *local_1d8;
  long local_1d0;
  undefined8 *local_1c8;
  undefined8 **local_1c0;
  void *pvStack_1b8;
  size_t local_1b0;
  ulong auStack_1a8 [2];
  undefined1 auStack_198 [24];
  long local_180;
  undefined8 **ppuStack_178;
  void *local_170;
  size_t sStack_168;
  ulong local_160;
  undefined1 auStack_158 [24];
  undefined8 ***local_140;
  code *pcStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  char local_120;
  undefined4 local_11f;
  undefined3 uStack_11b;
  undefined8 **local_110;
  void *pvStack_108;
  size_t local_100;
  ulong auStack_f8 [2];
  undefined4 local_e8;
  undefined3 uStack_e4;
  undefined8 ***local_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 **local_c0;
  void *pvStack_b8;
  size_t sStack_b0;
  ulong uStack_a8;
  long local_a0;
  undefined8 **ppuStack_98;
  void *pvStack_90;
  size_t local_88;
  ulong uStack_80;
  undefined1 auStack_71 [17];
  
  <http::header::map::http::header::map::HeaderMap>::new(&local_248);
  uVar22 = param_3 * 0x20;
  uVar23 = 0;
  if ((param_3 >> 0x3b != 0) || (0x7ffffffffffffff8 < uVar22)) {
LAB_008f4a2c:
                    /* try { // try from 008f4a2c to 008f4a37 has its CatchHandler @ 008f512c */
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar23,uVar22);
  }
  if (uVar22 == 0) {
    uVar22 = 0;
    __ptr = (undefined8 *)&DAT_00000008;
    puVar21 = __ptr;
    if (1 < param_3) goto LAB_008f4a10;
LAB_008f4a54:
    puVar21 = __ptr;
    if (param_3 == 0) goto LAB_008f4a64;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar23 = 8;
    __ptr = (undefined8 *)FUN_004b25a4(uVar22,8);
    if (__ptr == (undefined8 *)0x0) goto LAB_008f4a2c;
    puVar21 = __ptr;
    uVar22 = param_3;
    if (param_3 < 2) goto LAB_008f4a54;
LAB_008f4a10:
    uVar10 = _UNK_002bfa60;
    uVar9 = _DAT_002bfa58;
    uVar8 = _UNK_002bfa50;
    uVar23 = _DAT_002bfa48;
    lVar19 = param_3 - 1;
    puVar18 = puVar21;
    do {
      lVar19 = lVar19 + -1;
      __ptr = puVar18 + 4;
      puVar18[1] = uVar8;
      *puVar18 = uVar23;
      puVar18[3] = uVar10;
      puVar18[2] = uVar9;
      puVar18 = __ptr;
    } while (lVar19 != 0);
  }
  uVar9 = _UNK_002bfa60;
  uVar8 = _DAT_002bfa58;
  uVar23 = _DAT_002bfa48;
  __ptr[1] = _UNK_002bfa50;
  *__ptr = uVar23;
  __ptr[3] = uVar9;
  __ptr[2] = uVar8;
  __ptr = puVar21;
LAB_008f4a64:
                    /* try { // try from 008f4a68 to 008f4a8f has its CatchHandler @ 008f5108 */
  httparse::parse_headers(&local_1e8,*param_2,param_2[1],__ptr,param_3);
  if (local_1e8 == '\x01') {
    lVar19 = <alloc::io::error::core::io::error::Error>::new<httparse::Error>(0x14,local_1e7);
  }
  else {
    if (local_1d8 != (undefined8 *)0x0) {
      if (local_1d0 == 0) {
LAB_008f4ee4:
        param_1[5] = uStack_220;
        param_1[4] = local_228;
        param_1[7] = lStack_210;
        param_1[6] = local_218;
        param_1[9] = lStack_200;
        param_1[8] = local_208;
        param_1[0xb] = CONCAT62(uStack_1ee,uStack_1f0);
        param_1[10] = local_1f8;
        param_1[1] = lStack_240;
        *param_1 = local_248;
        param_1[3] = lStack_230;
        param_1[2] = local_238;
        if (uVar22 == 0) {
          return;
        }
        free(__ptr);
        return;
      }
      puVar21 = local_1d8;
LAB_008f4ab4:
                    /* try { // try from 008f4abc to 008f4ac3 has its CatchHandler @ 008f50c0 */
      local_1c8 = puVar21;
      <http::header::name::http::header::name::HeaderName>::from_bytes
                (&local_a0,*puVar21,puVar21[1]);
      if (local_a0 != 1) {
        auStack_1a8[0] = uStack_80;
        local_1b0 = local_88;
        lVar19 = local_1c8[3];
        pvStack_1b8 = pvStack_90;
        local_1c0 = ppuStack_98;
        pbVar6 = (byte *)local_1c8[2];
        for (; lVar19 != 0; lVar19 = lVar19 + -1) {
          bVar3 = *pbVar6;
          if (bVar3 < 0x20) {
            if (bVar3 != 9) {
LAB_008f4f20:
              local_c0 = &local_1c8;
              local_140 = &local_c0;
              pcStack_138 = FUN_008fa384;
                    /* try { // try from 008f4f38 to 008f4f57 has its CatchHandler @ 008f5094 */
              alloc::fmt::format::format_inner(auStack_158,&DAT_002bafcc,&local_140);
              lVar19 = <alloc::io::error::core::io::error::Error>::new<alloc::string::String>
                                 (0x14,auStack_158);
              *param_1 = -1;
              param_1[1] = lVar19;
              if (local_1c0 != (undefined8 **)0x0) {
                    /* try { // try from 008f4f74 to 008f4fbb has its CatchHandler @ 008f5108 */
                (*(code *)local_1c0[4])(auStack_1a8,pvStack_1b8,local_1b0);
              }
              goto joined_r0x008f4f7c;
            }
          }
          else if (bVar3 == 0x7f) goto LAB_008f4f20;
          pbVar6 = pbVar6 + 1;
        }
                    /* try { // try from 008f4b20 to 008f4b27 has its CatchHandler @ 008f5098 */
        <bytes::bytes::bytes::bytes::Bytes>::copy_from_slice(&local_a0);
        uStack_80 = uStack_80 & 0xffffffffffffff00;
        ppuStack_178 = ppuStack_98;
        local_180 = local_a0;
        sStack_168 = local_88;
        local_170 = pvStack_90;
        local_160 = uStack_80;
        pvStack_108 = pvStack_1b8;
        local_110 = local_1c0;
        auStack_f8[0] = auStack_1a8[0];
        local_100 = local_1b0;
                    /* try { // try from 008f4b44 to 008f4b5b has its CatchHandler @ 008f50c4 */
        iVar14 = FUN_008ee324(&local_248);
        if (iVar14 == 0) {
          uVar15 = FUN_008ed464(&local_248,&local_110);
          __n = local_100;
          __s2 = pvStack_108;
          ppuVar12 = local_110;
          uVar7 = uStack_1f0;
          uVar16 = local_1f8;
          lVar11 = lStack_200;
          uVar20 = uStack_220;
          lVar19 = local_228;
          uVar27 = (ulong)uStack_1f0;
          puVar21 = puVar21 + 4;
          cVar4 = (char)pvStack_108;
          local_250 = uStack_220;
          uVar26 = 0;
          uVar17 = (ulong)(uStack_1f0 & uVar15);
          do {
            if ((uVar16 <= uVar17) && (uVar17 = 0, uVar16 == 0)) {
              do {
                    /* WARNING: Do nothing block with infinite loop */
              } while( true );
            }
            puVar1 = (ushort *)(lVar11 + uVar17 * 4);
            uVar24 = (ulong)*puVar1;
            if (uVar24 == 0xffff) {
              uStack_80 = local_160;
              pvStack_b8 = pvStack_108;
              local_c0 = local_110;
              uStack_a8 = auStack_f8[0];
              sStack_b0 = local_100;
              ppuStack_98 = ppuStack_178;
              local_a0 = local_180;
              local_88 = sStack_168;
              pvStack_90 = local_170;
              uVar26 = FUN_008f37d8(&local_248,uVar15,&local_c0,&local_a0);
              if ((uVar26 & 1) != 0) goto LAB_008f500c;
              if (local_1f8 <= uVar17) {
                    /* WARNING: Subroutine does not return */
                core::panicking::panic_bounds_check
                          (uVar17,local_1f8,&PTR_s__root__cargo_registry_src_index__00aef100);
              }
              puVar2 = (undefined2 *)(lStack_200 + uVar17 * 4);
              *puVar2 = (short)uVar20;
              puVar2[1] = (ushort)uVar15;
              goto LAB_008f4d94;
            }
            uVar5 = puVar1[1];
            if (((int)uVar17 - (uint)(uVar5 & uVar7) & uVar27) < uVar26) {
              bVar13 = local_248 != 2;
              uStack_80 = local_160;
              pvStack_b8 = pvStack_108;
              local_c0 = local_110;
              uStack_a8 = auStack_f8[0];
              sStack_b0 = local_100;
              ppuStack_98 = ppuStack_178;
              local_a0 = local_180;
              local_88 = sStack_168;
              pvStack_90 = local_170;
              uVar16 = FUN_008f37d8(&local_248,uVar15,&local_c0,&local_a0);
              if ((uVar16 & 1) == 0) {
                uVar16 = 0;
                while( true ) {
                  uVar7 = (ushort)uVar15;
                  if ((local_1f8 <= uVar17) && (uVar17 = 0, local_1f8 == 0)) {
                    do {
                    /* WARNING: Do nothing block with infinite loop */
                    } while( true );
                  }
                  puVar1 = (ushort *)(lStack_200 + uVar17 * 4);
                  uVar5 = *puVar1;
                  if (uVar5 == 0xffff) break;
                  uVar15 = (uint)puVar1[1];
                  uVar16 = uVar16 + 1;
                  puVar1[1] = uVar7;
                  uVar17 = uVar17 + 1;
                  *puVar1 = (ushort)uVar20;
                  uVar20 = (ulong)(uint)uVar5;
                }
                puVar1[1] = uVar7;
                *puVar1 = (ushort)uVar20;
                if ((0x7f < uVar16 || 0x1ff < uVar26 && bVar13) && (local_248 == 0)) {
                  local_248 = 1;
                }
                goto LAB_008f4d94;
              }
              goto LAB_008f500c;
            }
            if (uVar5 == (ushort)uVar15) {
              if (uVar20 <= uVar24) {
                    /* try { // try from 008f4fc0 to 008f4fd3 has its CatchHandler @ 008f50c8 */
                    /* WARNING: Subroutine does not return */
                core::panicking::panic_bounds_check
                          (uVar24,uVar20,&PTR_s__root__cargo_registry_src_index__00aef0e8);
              }
              puVar25 = (uint *)(lVar19 + uVar24 * 0x68);
              if ((ppuVar12 == (undefined8 **)0x0) != (*(long *)(puVar25 + 0x10) != 0)) {
                if (*(long *)(puVar25 + 0x10) == 0) {
                  if ((char)puVar25[0x12] == cVar4) goto LAB_008f4c4c;
                }
                else if ((*(size_t *)(puVar25 + 0x14) == __n) &&
                        (iVar14 = memcmp(*(void **)(puVar25 + 0x12),__s2,__n), iVar14 == 0))
                goto LAB_008f4c4c;
              }
            }
            uVar26 = uVar26 + 1;
            uVar17 = uVar17 + 1;
          } while( true );
        }
                    /* try { // try from 008f4fe8 to 008f4fef has its CatchHandler @ 008f5088 */
        (**(code **)(local_180 + 0x20))(&sStack_168,ppuStack_178,local_170);
        if (local_110 != (undefined8 **)0x0) {
                    /* try { // try from 008f5000 to 008f5043 has its CatchHandler @ 008f50bc */
          (*(code *)local_110[4])(auStack_f8,pvStack_108,local_100);
        }
        goto LAB_008f500c;
      }
      local_c0 = &local_1c8;
      local_140 = &local_c0;
      pcStack_138 = FUN_008fa384;
      alloc::fmt::format::format_inner(auStack_198,&DAT_002b1a28,&local_140);
      lVar19 = <alloc::io::error::core::io::error::Error>::new<alloc::string::String>
                         (0x14,auStack_198);
      goto LAB_008f4ea0;
    }
                    /* try { // try from 008f4e8c to 008f4e9f has its CatchHandler @ 008f5108 */
    lVar19 = <alloc::io::error::core::io::error::Error>::new<&str>(0x14,"Partial header",0xe);
  }
LAB_008f4ea0:
  *param_1 = -1;
  param_1[1] = lVar19;
joined_r0x008f4f7c:
  if (uVar22 != 0) {
    free(__ptr);
  }
  FUN_008f3164(&local_248);
  return;
LAB_008f4c4c:
  uStack_80 = local_160;
  ppuStack_98 = ppuStack_178;
  local_a0 = local_180;
  local_88 = sStack_168;
  pvStack_90 = local_170;
  if ((*puVar25 & 1) != 0) {
                    /* try { // try from 008f4c74 to 008f4c7b has its CatchHandler @ 008f5060 */
    FUN_008ee874(&local_248,*(undefined8 *)(puVar25 + 2));
    local_250 = uStack_220;
  }
  if (local_250 <= uVar24) {
                    /* try { // try from 008f5048 to 008f505b has its CatchHandler @ 008f5064 */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check
              (uVar24,local_250,&PTR_s__root__cargo_registry_src_index__00aef1a8);
  }
  lVar19 = local_228 + uVar24 * 0x68;
  pcStack_d8 = *(code **)(lVar19 + 0x20);
  local_e0 = *(undefined8 ****)(lVar19 + 0x18);
  *(undefined8 ***)(lVar19 + 0x20) = ppuStack_98;
  *(long *)(lVar19 + 0x18) = local_a0;
  uStack_c8 = *(undefined8 *)(lVar19 + 0x30);
  uStack_d0 = *(undefined8 *)(lVar19 + 0x28);
  *(size_t *)(lVar19 + 0x30) = local_88;
  *(void **)(lVar19 + 0x28) = pvStack_90;
  cVar4 = *(char *)(lVar19 + 0x38);
  *(ulong *)(lVar19 + 0x38) = uStack_80;
  local_e8._0_3_ = (undefined3)*(undefined4 *)(lVar19 + 0x39);
  local_e8._3_1_ = (undefined1)*(undefined4 *)(lVar19 + 0x3c);
  uStack_e4 = (undefined3)((uint)*(undefined4 *)(lVar19 + 0x3c) >> 8);
  if (local_110 != (undefined8 **)0x0) {
                    /* try { // try from 008f4ce0 to 008f4de7 has its CatchHandler @ 008f5090 */
    (*(code *)local_110[4])(auStack_f8,pvStack_108,local_100);
  }
  if (cVar4 == -1) {
LAB_008f500c:
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              ("size overflows MAX_SIZE",0x17,auStack_71,&DAT_00aef118,
               &PTR_s__root__cargo_registry_src_index__00aef208);
  }
  pcStack_138 = pcStack_d8;
  local_140 = local_e0;
  uStack_128 = uStack_c8;
  local_130 = uStack_d0;
  local_11f = local_e8;
  uStack_11b = uStack_e4;
  local_120 = cVar4;
  if (cVar4 != '\x02') {
    (*(code *)local_e0[4])(&uStack_128,pcStack_d8,uStack_d0);
  }
LAB_008f4d94:
  if (puVar21 == local_1d8 + local_1d0 * 4) goto LAB_008f4ee4;
  goto LAB_008f4ab4;
}


// ===== 008f5144  FUN_008f5144 =====

void FUN_008f5144(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"Streaming",9);
  return;
}


// ===== 008f5158  FUN_008f5158 =====

void FUN_008f5158(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd230,4);
  return;
}


// ===== 008f516c  <hyper::body::incoming::Incoming_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper::body::incoming::Incoming as core::fmt::Debug>::fmt */

void __rustcall
<hyper::body::incoming::Incoming_as_core::fmt::Debug>::fmt(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_38 [24];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple
            (auStack_38,param_2,"Bodyend of file before message length reached",4);
  puVar1 = &UNK_00aef220;
  if (*param_1 != 0) {
    puVar1 = &DAT_00aef240;
  }
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::field(auStack_38,1,puVar1);
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::finish(auStack_38);
  return;
}


// ===== 008f51dc  <hyper::proto::h1::decode::IncompleteBody_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper::proto::h1::decode::IncompleteBody as core::fmt::Display>::fmt */

void __rustcall
<hyper::proto::h1::decode::IncompleteBody_as_core::fmt::Display>::fmt
          (undefined8 param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x008f51f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,"end of file before message length reached",0x29);
  return;
}


// ===== 008f51f8  FUN_008f51f8 =====

void FUN_008f51f8(undefined8 *param_1)

{
  <hyper::proto::h1::decode::Decoder_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 008f5200  <hyper::body::incoming::Sender_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper::body::incoming::Sender as core::fmt::Debug>::fmt */

void __rustcall
<hyper::body::incoming::Sender_as_core::fmt::Debug>::fmt(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_38 [24];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple(auStack_38,param_2,"Sender",6);
  puVar1 = &UNK_00aef278;
  if (*(long *)(*(long *)(param_1 + 8) + 0x10) != 0) {
    puVar1 = &DAT_00aef298;
  }
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::field(auStack_38,1,puVar1);
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::finish(auStack_38);
  return;
}


// ===== 008f5274  FUN_008f5274 =====

void FUN_008f5274(long *param_1,undefined8 param_2)

{
  long *local_18;
  
  if (*param_1 != 0) {
    local_18 = param_1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002bd0bc,4,&local_18,&DAT_00aef488);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd198,4);
  return;
}


// ===== 008f52cc  FUN_008f52cc =====

void FUN_008f52cc(long *param_1,undefined8 param_2)

{
  long *local_18;
  
  if (*param_1 == 1) {
    local_18 = param_1 + 1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002bd0bc,4,&local_18,&DAT_00aef4a8);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd198,4);
  return;
}


// ===== 008f532c  FUN_008f532c =====

void FUN_008f532c(undefined8 param_1,long param_2)

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


// ===== 008f5344  FUN_008f5344 =====

void FUN_008f5344(undefined8 param_1,long param_2)

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


// ===== 008f535c  <hyper::body::incoming::Incoming_as_http_body::Body>::poll_frame =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper::body::incoming::Incoming as http_body::Body>::poll_frame */

void __rustcall
<hyper::body::incoming::Incoming_as_http_body::Body>::poll_frame
          (long *param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  char *pcVar2;
  char cVar3;
  bool bVar4;
  char cVar5;
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
  undefined1 auVar18 [16];
  long local_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  long local_70;
  
  lVar6 = *param_2;
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + 0x10);
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = 2;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 != 2) {
      <futures_core::task::__internal::atomic_waker::futures_core::task::__internal::atomic_waker::AtomicWaker>
      ::wake(lVar6 + 0x18);
    }
    if (param_2[3] != 0) {
      FUN_008fa6cc(&local_90,param_2 + 3,param_3);
      if (local_90 != 0) {
        if (local_90 != 2) {
          if (lStack_88 != 0) {
            if ((ulong)param_2[2] < 0xfffffffffffffffe) {
              param_2[2] = param_2[2] - lStack_78;
            }
            param_1[3] = lStack_78;
            param_1[2] = local_80;
            *param_1 = -1;
            param_1[1] = lStack_88;
            param_1[4] = local_70;
            return;
          }
          *param_1 = -2;
          param_1[1] = local_80;
          return;
        }
        goto LAB_008f5518;
      }
    }
    lVar6 = param_2[1];
    if (*(char *)(lVar6 + 0xa8) == '\0') {
      auVar18 = (*(code *)**(undefined8 **)*param_3)(((undefined8 *)*param_3)[1]);
      pcVar2 = (char *)(lVar6 + 0x88);
      do {
        cVar3 = *pcVar2;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
        if (bVar4) {
          *pcVar2 = '\x01';
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (cVar3 == '\0') {
        if (*(long *)(lVar6 + 0x78) != 0) {
                    /* try { // try from 008f547c to 008f547f has its CatchHandler @ 008f559c */
          (**(code **)(*(long *)(lVar6 + 0x78) + 0x18))(*(undefined8 *)(lVar6 + 0x80));
        }
        *(undefined1 (*) [16])(lVar6 + 0x78) = auVar18;
        *(undefined4 *)(lVar6 + 0x88) = 0;
        if (*(char *)(lVar6 + 0xa8) == '\0') goto LAB_008f5518;
      }
      else {
        (**(code **)(auVar18._0_8_ + 0x18))(auVar18._8_8_);
      }
    }
    pcVar2 = (char *)(lVar6 + 0x70);
    do {
      cVar3 = *pcVar2;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
      if (bVar4) {
        *pcVar2 = '\x01';
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (cVar3 == '\0') {
      lVar8 = *(long *)(lVar6 + 0x10);
      *(undefined8 *)(lVar6 + 0x10) = 0xffffffffffffffff;
      if (lVar8 != -1) {
        lVar11 = *(long *)(lVar6 + 0x40);
        lVar9 = *(long *)(lVar6 + 0x38);
        lVar15 = *(long *)(lVar6 + 0x50);
        lVar13 = *(long *)(lVar6 + 0x48);
        lVar7 = *(long *)(lVar6 + 0x68);
        lVar17 = *(long *)(lVar6 + 0x58);
        lVar12 = *(long *)(lVar6 + 0x20);
        lVar10 = *(long *)(lVar6 + 0x18);
        lVar16 = *(long *)(lVar6 + 0x30);
        lVar14 = *(long *)(lVar6 + 0x28);
        *(undefined4 *)(lVar6 + 0x70) = 0;
        if (lVar8 != -2) {
          param_1[10] = *(long *)(lVar6 + 0x60);
          param_1[9] = lVar17;
          param_1[6] = lVar11;
          param_1[5] = lVar9;
          param_1[8] = lVar15;
          param_1[7] = lVar13;
          param_1[0xb] = lVar7;
          param_1[2] = lVar12;
          param_1[1] = lVar10;
          param_1[4] = lVar16;
          param_1[3] = lVar14;
          *param_1 = lVar8;
          return;
        }
LAB_008f5518:
        *param_1 = 3;
        return;
      }
      pcVar2[0] = '\0';
      pcVar2[1] = '\0';
      pcVar2[2] = '\0';
      pcVar2[3] = '\0';
    }
  }
  *param_1 = -3;
  return;
}


// ===== 008f55ac  <hyper::proto::h1::decode::Decoder_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper::proto::h1::decode::Decoder as core::fmt::Debug>::fmt */

void __rustcall
<hyper::proto::h1::decode::Decoder_as_core::fmt::Debug>::fmt(ulong *param_1,undefined8 param_2)

{
  long lVar1;
  ulong *local_88;
  ulong *local_80;
  undefined *local_78;
  ulong *puStack_70;
  undefined *local_68;
  ulong *puStack_60;
  undefined *local_58;
  ulong *puStack_50;
  undefined **local_48;
  ulong *puStack_40;
  undefined *local_38;
  ulong *puStack_30;
  undefined *local_28;
  ulong **ppuStack_20;
  undefined *local_18;
  
  lVar1 = *param_1 - 2;
  if (*param_1 < 2) {
    lVar1 = 1;
  }
  if (lVar1 != 0) {
    if (lVar1 == 1) {
      local_88 = param_1 + 2;
      local_80 = param_1 + 0xb;
      puStack_70 = param_1 + 4;
      local_78 = &DAT_00aef2f0;
      puStack_60 = param_1 + 5;
      local_68 = &DAT_00aef310;
      puStack_50 = param_1 + 6;
      local_58 = &DAT_00aef310;
      puStack_40 = param_1 + 10;
      local_48 = &PTR_FUN_00aef330;
      local_38 = &DAT_00aef350;
      ppuStack_20 = &local_88;
      local_28 = &DAT_00aef370;
      local_18 = &DAT_00aef390;
      puStack_30 = param_1;
      <core::fmt::[a]::core::fmt::Formatter>::debug_struct_fields_finish
                (param_2,"Chunked",7,&PTR_s_statechunk_lenextensions_cnttrai_00aef3b0,7,&local_80,7)
      ;
      return;
    }
    local_80 = param_1 + 1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,"Eof",3,&local_80,&DAT_00aef420);
    return;
  }
  local_80 = param_1 + 1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,"Length",6,&local_80,&DAT_00aef2d0);
  return;
}


// ===== 008f56d8  FUN_008f56d8 =====

void FUN_008f56d8(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"Empty",5);
  return;
}


// ===== 008f56ec  FUN_008f56ec =====

void FUN_008f56ec(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,
             "ClosedStartSizeSizeLwsExtensionSizeLfBodyCrBodyLfTrailerTrailerLfEndCrEndLfEnd",6);
  return;
}


// ===== 008f5700  FUN_008f5700 =====

void FUN_008f5700(byte *param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,&DAT_00330b80 + *(int *)(&DAT_00330b80 + (ulong)*param_1 * 4),
             *(undefined8 *)(&DAT_00330b18 + (ulong)*param_1 * 8));
  return;
}


// ===== 008f5728  <alloc::io::error::core::io::error::Error>::new<httparse::Error> =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::io::error::core::io::error::Error>::new<httparse::Error> */

void __rustcall
<alloc::io::error::core::io::error::Error>::new<httparse::Error>
          (undefined4 param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined1 *)FUN_004b25a4(1,1);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = param_2;
    alloc::io::error::custom_owner_from_box(param_1,puVar1,&DAT_00aefbd0);
    <core::io::error::repr::[0]::core::io::error::repr::Repr>::new_custom();
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(1,1);
}


// ===== 008f5780  FUN_008f5780 =====

void FUN_008f5780(void)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
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
  uint7 uStack_5f;
  long local_50;
  uint7 uStack_47;
  long lStack_38;
  uint7 uStack_2f;
  uint7 uStack_27;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  plVar4 = (long *)FUN_004b25a4(0xb0,8);
  if (plVar4 == (long *)0x0) {
                    /* try { // try from 008f5828 to 008f5833 has its CatchHandler @ 008f5838 */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0xb0);
  }
  plVar4[0x15] = (ulong)uStack_27 << 8;
  plVar4[0x14] = (ulong)uStack_2f << 8;
  plVar4[0x11] = (ulong)uStack_47 << 8;
  plVar4[0x10] = local_50;
  plVar4[0x13] = lStack_38;
  plVar4[0x12] = 0;
  plVar4[9] = lStack_88;
  plVar4[8] = local_90;
  plVar4[0xb] = lStack_78;
  plVar4[10] = lStack_80;
  plVar4[0xd] = lStack_68;
  plVar4[0xc] = local_70;
  plVar4[0xf] = 0;
  plVar4[0xe] = (ulong)uStack_5f << 8;
  plVar4[1] = 1;
  *plVar4 = 1;
  plVar4[3] = lStack_b8;
  plVar4[2] = -1;
  plVar4[5] = lStack_a8;
  plVar4[4] = local_b0;
  plVar4[7] = lStack_98;
  plVar4[6] = lStack_a0;
  do {
    lVar5 = *plVar4;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = lVar5 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (-1 < lVar5) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x8f5838);
  (*pcVar3)();
}


// ===== 008f5850  FUN_008f5850 =====

void FUN_008f5850(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  plVar1 = plVar5 + 0x11;
  *(undefined4 *)(plVar5 + 0x15) = 1;
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
    lVar4 = plVar5[0xf];
    plVar5[0xf] = 0;
    *(undefined4 *)(plVar5 + 0x11) = 0;
    if (lVar4 != 0) {
                    /* try { // try from 008f58a0 to 008f58a3 has its CatchHandler @ 008f5920 */
      (**(code **)(lVar4 + 8))(plVar5[0x10]);
    }
  }
  plVar1 = plVar5 + 0x14;
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
    lVar4 = plVar5[0x12];
    plVar5[0x12] = 0;
    if (lVar4 != 0) {
                    /* try { // try from 008f58cc to 008f58cf has its CatchHandler @ 008f5910 */
      (**(code **)(lVar4 + 0x18))(plVar5[0x13]);
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
    <alloc::sync::[n]::alloc::sync::Arc<futures_channel::oneshot::Inner<http::header::map::HeaderMap>>>
    ::drop_slow(param_1);
    return;
  }
  return;
}


// ===== 008f5950  FUN_008f5950 =====

void FUN_008f5950(long *param_1)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  
  __ptr = (void *)param_1[1];
  lVar2 = param_1[2] + 1;
  lVar1 = (long)__ptr + 0x38;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 008f598c to 008f598f has its CatchHandler @ 008f59d8 */
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


// ===== 008f5a2c  FUN_008f5a2c =====

void FUN_008f5a2c(long param_1)

{
  if (*(long *)(param_1 + 0x10) != -1) {
                    /* try { // try from 008f5a48 to 008f5a4b has its CatchHandler @ 008f5a90 */
    FUN_008f5c80();
  }
  if (*(long *)(param_1 + 0x78) != 0) {
                    /* try { // try from 008f5a5c to 008f5a5f has its CatchHandler @ 008f5a88 */
    (**(code **)(*(long *)(param_1 + 0x78) + 0x18))(*(undefined8 *)(param_1 + 0x80));
  }
  if (*(long *)(param_1 + 0x90) != 0) {
                    /* WARNING: Could not recover jumptable at 0x008f5a78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x90) + 0x18))(*(undefined8 *)(param_1 + 0x98));
    return;
  }
  return;
}


// ===== 008f5ac8  FUN_008f5ac8 =====

void FUN_008f5ac8(void *param_1,undefined8 *param_2)

{
  if ((code *)*param_2 != (code *)0x0) {
                    /* try { // try from 008f5ae8 to 008f5aef has its CatchHandler @ 008f5b20 */
    (*(code *)*param_2)(param_1);
  }
  if (param_2[1] != 0) {
    free(param_1);
    return;
  }
  return;
}


// ===== 008f5b40  FUN_008f5b40 =====

void FUN_008f5b40(long *param_1)

{
  code *pcVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (*param_1 != 0) {
    pvVar2 = (void *)param_1[1];
    if (pvVar2 == (void *)0x0) {
      puVar4 = (undefined8 *)param_1[2];
      pvVar2 = (void *)*puVar4;
      if (pvVar2 != (void *)0x0) {
        puVar3 = (undefined8 *)puVar4[1];
        pcVar1 = (code *)*puVar3;
        if (pcVar1 != (code *)0x0) {
                    /* try { // try from 008f5be0 to 008f5be7 has its CatchHandler @ 008f5c18 */
          (*pcVar1)(pvVar2);
        }
        if (puVar3[1] != 0) {
          free(pvVar2);
        }
      }
      free(puVar4);
      return;
    }
    if (param_1[3] != 0) {
                    /* try { // try from 008f5b70 to 008f5b7b has its CatchHandler @ 008f5c64 */
      (**(code **)(param_1[3] + 0x20))(param_1 + 6,param_1[4],param_1[5]);
      pvVar2 = (void *)param_1[1];
    }
    puVar4 = (undefined8 *)param_1[2];
    pcVar1 = (code *)*puVar4;
    if (pcVar1 != (code *)0x0) {
                    /* try { // try from 008f5b90 to 008f5b97 has its CatchHandler @ 008f5c44 */
      (*pcVar1)(pvVar2);
    }
    if (puVar4[1] != 0) {
      free(pvVar2);
      return;
    }
  }
  return;
}


// ===== 008f5c80  FUN_008f5c80 =====

void FUN_008f5c80(long param_1)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    free(*(void **)(param_1 + 0x48));
  }
                    /* try { // try from 008f5cb0 to 008f5cb7 has its CatchHandler @ 008f5d44 */
  FUN_008f0a90(param_1 + 0x18);
  if (*(long *)(param_1 + 0x18) != 0) {
    free(*(void **)(param_1 + 0x20));
  }
  __ptr = *(void **)(param_1 + 0x38);
  lVar2 = *(long *)(param_1 + 0x40) + 1;
  lVar1 = (long)__ptr + 0x38;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 008f5cf8 to 008f5cfb has its CatchHandler @ 008f5d74 */
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


// ===== 008f5dd0  FUN_008f5dd0 =====

void FUN_008f5dd0(ulong *param_1,ulong param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long local_38;
  ulong local_30;
  undefined8 uStack_28;
  
  if ((param_5 == 0) || (CARRY8(param_3,param_2))) {
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(0);
  }
  uVar3 = *param_1 * 2;
  uVar2 = param_3 + param_2;
  if (param_3 + param_2 <= uVar3) {
    uVar2 = uVar3;
  }
  uVar3 = 4;
  if (0x400 < param_5) {
    uVar3 = 1;
  }
  uVar1 = 8;
  if (param_5 != 1) {
    uVar1 = uVar3;
  }
  if (uVar2 <= uVar1) {
    uVar2 = uVar1;
  }
  FUN_008f63dc(&local_38,*param_1,param_1[1],uVar2,param_4);
  if (local_38 != 1) {
    *param_1 = uVar2;
    param_1[1] = local_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(local_30,uStack_28);
}


// ===== 008f5e68  FUN_008f5e68 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_008f5e68(undefined8 *param_1,long param_2)

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
  FUN_008f6b68(&local_60,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  local_14[0] = 0xff;
  FUN_008f6b68(&local_60,local_14,1);
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


// ===== 008f5f94  FUN_008f5f94 =====

void FUN_008f5f94(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *local_18;
  
  local_18 = param_2;
  if ((char)param_2[0x15] == '\0') {
    plVar1 = param_2 + 0xe;
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
      if (param_2[2] != -1) {
                    /* try { // try from 008f613c to 008f6157 has its CatchHandler @ 008f6194 */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic
                  ("assertion failed: slot.is_none()",0x20,
                   &PTR_s__root__cargo_registry_src_index__00aef4e0);
      }
      lVar4 = param_3[4];
      lVar6 = param_3[7];
      lVar5 = param_3[6];
      param_2[7] = param_3[5];
      param_2[6] = lVar4;
      param_2[9] = lVar6;
      param_2[8] = lVar5;
      lVar4 = param_3[8];
      lVar6 = param_3[0xb];
      lVar5 = param_3[10];
      param_2[0xb] = param_3[9];
      param_2[10] = lVar4;
      param_2[0xd] = lVar6;
      param_2[0xc] = lVar5;
      lVar6 = *param_3;
      lVar5 = param_3[3];
      lVar4 = param_3[2];
      param_2[3] = param_3[1];
      param_2[2] = lVar6;
      param_2[5] = lVar5;
      param_2[4] = lVar4;
      *(undefined4 *)(param_2 + 0xe) = 0;
      if ((char)param_2[0x15] != '\0') {
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
          lVar4 = param_2[2];
          param_2[2] = -1;
          if (lVar4 != -1) {
            lVar7 = param_2[8];
            lVar6 = param_2[7];
            lVar9 = param_2[10];
            lVar8 = param_2[9];
            lVar5 = param_2[0xd];
            *param_1 = lVar4;
            param_1[6] = lVar7;
            param_1[5] = lVar6;
            lVar6 = param_2[0xc];
            lVar4 = param_2[0xb];
            param_1[8] = lVar9;
            param_1[7] = lVar8;
            lVar8 = param_2[4];
            lVar7 = param_2[3];
            param_1[10] = lVar6;
            param_1[9] = lVar4;
            lVar6 = param_2[6];
            lVar4 = param_2[5];
            param_1[2] = lVar8;
            param_1[1] = lVar7;
            param_1[0xb] = lVar5;
            param_1[4] = lVar6;
            param_1[3] = lVar4;
            *(undefined4 *)(param_2 + 0xe) = 0;
            goto LAB_008f5fec;
          }
          *(undefined4 *)plVar1 = 0;
        }
      }
      *param_1 = -1;
      goto LAB_008f5fec;
    }
  }
  lVar4 = param_3[4];
  lVar6 = param_3[7];
  lVar5 = param_3[6];
  param_1[5] = param_3[5];
  param_1[4] = lVar4;
  param_1[7] = lVar6;
  param_1[6] = lVar5;
  lVar4 = param_3[8];
  lVar6 = param_3[0xb];
  lVar5 = param_3[10];
  param_1[9] = param_3[9];
  param_1[8] = lVar4;
  param_1[0xb] = lVar6;
  param_1[10] = lVar5;
  lVar6 = *param_3;
  lVar5 = param_3[3];
  lVar4 = param_3[2];
  param_1[1] = param_3[1];
  *param_1 = lVar6;
  param_1[3] = lVar5;
  param_1[2] = lVar4;
LAB_008f5fec:
  plVar1 = param_2 + 0x11;
  *(undefined4 *)(param_2 + 0x15) = 1;
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
    lVar4 = param_2[0xf];
    param_2[0xf] = 0;
    *(undefined4 *)(param_2 + 0x11) = 0;
    if (lVar4 != 0) {
                    /* try { // try from 008f6024 to 008f6027 has its CatchHandler @ 008f6168 */
      (**(code **)(lVar4 + 8))(param_2[0x10]);
    }
  }
  plVar1 = param_2 + 0x14;
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
    lVar4 = param_2[0x12];
    param_2[0x12] = 0;
    if (lVar4 != 0) {
                    /* try { // try from 008f6050 to 008f6053 has its CatchHandler @ 008f615c */
      (**(code **)(lVar4 + 0x18))(param_2[0x13]);
    }
    *(undefined4 *)plVar1 = 0;
  }
  do {
    lVar4 = *param_2;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_2,0x10);
    if (bVar3) {
      *param_2 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<futures_channel::oneshot::Inner<http::header::map::HeaderMap>>>
    ::drop_slow(&local_18);
  }
  return;
}


// ===== 008f61bc  <hyper::proto::h1::io::[2]::hyper::proto::h1::io::ReadStrategy>::record =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper::proto::h1::io::[2]::hyper::proto::h1::io::ReadStrategy>::record */

void __rustcall
<hyper::proto::h1::io::[2]::hyper::proto::h1::io::ReadStrategy>::record(char *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (*param_1 == '\x01') {
    return;
  }
  uVar2 = *(ulong *)(param_1 + 8);
  if (param_2 < uVar2) {
    uVar2 = (0xffffffffffffffffU >> ((ulong)((int)LZCOUNT(uVar2) + 2) & 0x3f)) + 1;
    if (uVar2 <= param_2) goto LAB_008f6228;
    if ((param_1[1] & 1U) == 0) {
      param_1[1] = '\x01';
      return;
    }
    if (uVar2 < 0x2001) {
      uVar2 = 0x2000;
    }
  }
  else {
    uVar1 = 0xffffffffffffffff;
    if ((uVar2 & 0x8000000000000000) == 0) {
      uVar1 = uVar2 << 1;
    }
    uVar2 = *(ulong *)(param_1 + 0x10);
    if (uVar1 <= *(ulong *)(param_1 + 0x10)) {
      uVar2 = uVar1;
    }
  }
  *(ulong *)(param_1 + 8) = uVar2;
LAB_008f6228:
  param_1[1] = '\0';
  return;
}


// ===== 008f623c  <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<http[b87e90c26fe47eb4]::header::map::ExtraValue<http[b87e90c26fe47eb4]::header::value::HeaderValue>>>::grow_one =====

/* <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<http[b87e90c26fe47eb4]::header::map::ExtraValue<http[b87e90c26fe47eb4]::header::value::HeaderValue>>>::grow_one
    */

void <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<http[b87e90c26fe47eb4]::header::map::ExtraValue<http[b87e90c26fe47eb4]::header::value::HeaderValue>>>
     ::grow_one(ulong *param_1)

{
  ulong uVar1;
  long local_38;
  ulong local_30;
  undefined8 uStack_28;
  
  uVar1 = *param_1 * 2;
  if (uVar1 < 5) {
    uVar1 = 4;
  }
  FUN_008f63dc(&local_38,*param_1,param_1[1],uVar1,8,0x48);
  if (local_38 != 1) {
    *param_1 = uVar1;
    param_1[1] = local_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(local_30,uStack_28);
}


// ===== 008f62a4  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<http::header::map::ExtraValue<bytes::bytes::Bytes>>>::grow_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<http::header::map::ExtraValue<bytes::bytes::Bytes>>>::grow_one
    */

void __rustcall
<alloc::raw_vec::[4]::alloc::raw_vec::RawVec<http::header::map::ExtraValue<bytes::bytes::Bytes>>>::
grow_one(ulong *param_1)

{
  ulong uVar1;
  long local_38;
  ulong local_30;
  undefined8 uStack_28;
  
  uVar1 = *param_1 * 2;
  if (uVar1 < 5) {
    uVar1 = 4;
  }
  FUN_008f63dc(&local_38,*param_1,param_1[1],uVar1,8,0x40);
  if (local_38 != 1) {
    *param_1 = uVar1;
    param_1[1] = local_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(local_30,uStack_28);
}


// ===== 008f630c  <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<http[b87e90c26fe47eb4]::header::map::Bucket<http[b87e90c26fe47eb4]::header::value::HeaderValue>>>::grow_one =====

/* <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<http[b87e90c26fe47eb4]::header::map::Bucket<http[b87e90c26fe47eb4]::header::value::HeaderValue>>>::grow_one
    */

void <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<http[b87e90c26fe47eb4]::header::map::Bucket<http[b87e90c26fe47eb4]::header::value::HeaderValue>>>
     ::grow_one(ulong *param_1)

{
  ulong uVar1;
  long local_38;
  ulong local_30;
  undefined8 uStack_28;
  
  uVar1 = *param_1 * 2;
  if (uVar1 < 5) {
    uVar1 = 4;
  }
  FUN_008f63dc(&local_38,*param_1,param_1[1],uVar1,8,0x68);
  if (local_38 != 1) {
    *param_1 = uVar1;
    param_1[1] = local_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(local_30,uStack_28);
}


// ===== 008f6374  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<http::header::map::Bucket<bytes::bytes::Bytes>>>::grow_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<http::header::map::Bucket<bytes::bytes::Bytes>>>::grow_one
    */

void __rustcall
<alloc::raw_vec::[4]::alloc::raw_vec::RawVec<http::header::map::Bucket<bytes::bytes::Bytes>>>::
grow_one(ulong *param_1)

{
  ulong uVar1;
  long local_38;
  ulong local_30;
  undefined8 uStack_28;
  
  uVar1 = *param_1 * 2;
  if (uVar1 < 5) {
    uVar1 = 4;
  }
  FUN_008f63dc(&local_38,*param_1,param_1[1],uVar1,8,0x60);
  if (local_38 != 1) {
    *param_1 = uVar1;
    param_1[1] = local_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(local_30,uStack_28);
}


// ===== 008f63dc  FUN_008f63dc =====

void FUN_008f63dc(undefined8 *param_1,long param_2,undefined8 param_3,ulong param_4,long param_5,
                 ulong param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_6;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_4;
  lVar5 = 8;
  uVar3 = 1;
  uVar4 = 0;
  if ((SUB168(auVar1 * auVar2,8) != 0) ||
     (param_4 = param_6 * param_4,
     0x8000000000000000U - param_5 <= param_4 && param_4 - (0x8000000000000000U - param_5) != 0))
  goto LAB_008f6478;
  if (param_2 == 0) {
    lVar5 = param_5;
    if (param_4 != 0) {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      lVar5 = FUN_004b25a4(param_4,param_5);
      if (lVar5 == 0) goto LAB_008f6458;
    }
LAB_008f6468:
    uVar3 = 0;
    param_1[1] = lVar5;
  }
  else {
    lVar5 = FUN_004b2600(param_3,param_6 * param_2,param_5,param_4);
    if (lVar5 != 0) goto LAB_008f6468;
LAB_008f6458:
    uVar3 = 1;
    param_1[1] = param_5;
  }
  lVar5 = 0x10;
  uVar4 = param_4;
LAB_008f6478:
  *(ulong *)((long)param_1 + lVar5) = uVar4;
  *param_1 = uVar3;
  return;
}


// ===== 008f6490  <hyper::proto::h1::io::[5]::hyper::proto::h1::io::Cursor<alloc::vec::Vec<u8>>>::maybe_unshift =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper::proto::h1::io::[5]::hyper::proto::h1::io::Cursor<alloc::vec::Vec<u8>>>::maybe_unshift */

void __rustcall
<hyper::proto::h1::io::[5]::hyper::proto::h1::io::Cursor<alloc::vec::Vec<u8>>>::maybe_unshift
          (long *param_1,ulong param_2)

{
  size_t __n;
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = param_1[3];
  if ((uVar2 != 0) && (uVar1 = param_1[2], *param_1 - uVar1 < param_2)) {
    __n = uVar1 - uVar2;
    if (uVar1 < uVar2) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (0,uVar2,uVar1,&PTR_s__nix_store_8006w282fgsx3273c878b_00aefab8);
    }
    param_1[2] = 0;
    if (__n != 0) {
      memmove((void *)param_1[1],(void *)(param_1[1] + uVar2),__n);
      param_1[2] = __n;
    }
    param_1[3] = 0;
  }
  return;
}


// ===== 008f650c  <alloc::sync::[n]::alloc::sync::Arc<futures_channel::mpsc::BoundedInner<core::result::Result<bytes::bytes::Bytes,hyper::error::Error>>>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<futures_channel::mpsc::BoundedInner<core::result::Result<bytes::bytes::Bytes,
   hyper::error::Error>>>>::drop_slow */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<futures_channel::mpsc::BoundedInner<core::result::Result<bytes::bytes::Bytes,hyper::error::Error>>>>
::drop_slow(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *__ptr;
  long *plVar3;
  long lVar4;
  void *__ptr_00;
  long *plVar5;
  void *pvVar6;
  
  __ptr_00 = (void *)*param_1;
  plVar3 = *(long **)((long)__ptr_00 + 0x18);
  while (plVar3 != (long *)0x0) {
    plVar5 = (long *)plVar3[5];
    if (*plVar3 != 0) {
                    /* try { // try from 008f65a8 to 008f65af has its CatchHandler @ 008f6630 */
      FUN_008f6d50(plVar3 + 1);
    }
    free(plVar3);
    plVar3 = plVar5;
  }
  __ptr = (undefined8 *)*(void **)((long)__ptr_00 + 0x28);
  while (__ptr != (undefined8 *)0x0) {
    pvVar6 = (void *)*__ptr;
    plVar3 = (long *)__ptr[1];
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
                    /* try { // try from 008f65f4 to 008f65f7 has its CatchHandler @ 008f6614 */
        <alloc::sync::[n]::alloc::sync::Arc<std::sync::poison::mutex::Mutex<futures_channel::mpsc::SenderTask>>>
        ::drop_slow();
      }
    }
    free(__ptr);
    __ptr = (undefined8 *)pvVar6;
  }
  if (*(long *)((long)__ptr_00 + 0x48) != 0) {
                    /* try { // try from 008f6540 to 008f6543 has its CatchHandler @ 008f660c */
    (**(code **)(*(long *)((long)__ptr_00 + 0x48) + 0x18))(*(undefined8 *)((long)__ptr_00 + 0x50));
  }
  if (__ptr_00 != (void *)0xffffffffffffffff) {
    plVar3 = (long *)((long)__ptr_00 + 8);
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
      free(__ptr_00);
      return;
    }
  }
  return;
}


// ===== 008f66a4  <alloc::sync::[n]::alloc::sync::Arc<futures_channel::oneshot::Inner<http::header::map::HeaderMap>>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<futures_channel::oneshot::Inner<http::header::map::HeaderMap>>>::drop_slow
    */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<futures_channel::oneshot::Inner<http::header::map::HeaderMap>>>
::drop_slow(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  void *__ptr;
  
  __ptr = (void *)*param_1;
  if (*(long *)((long)__ptr + 0x10) != -1) {
                    /* try { // try from 008f66c4 to 008f66c7 has its CatchHandler @ 008f6748 */
    FUN_008f5c80();
  }
  if (*(long *)((long)__ptr + 0x78) != 0) {
                    /* try { // try from 008f66d8 to 008f66db has its CatchHandler @ 008f6740 */
    (**(code **)(*(long *)((long)__ptr + 0x78) + 0x18))(*(undefined8 *)((long)__ptr + 0x80));
  }
  if (*(long *)((long)__ptr + 0x90) != 0) {
                    /* try { // try from 008f66ec to 008f66ef has its CatchHandler @ 008f6738 */
    (**(code **)(*(long *)((long)__ptr + 0x90) + 0x18))(*(undefined8 *)((long)__ptr + 0x98));
  }
  if (__ptr != (void *)0xffffffffffffffff) {
    plVar1 = (long *)((long)__ptr + 8);
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 008f67b4  <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<hyper::upgrade::Upgraded,{backref_38}::error::Error>>>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<hyper::upgrade::Upgraded,
   {backref 38}::error::Error>>>>::drop_slow */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<hyper::upgrade::Upgraded,{backref_38}::error::Error>>>>
::drop_slow(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  void *__ptr;
  ulong uVar5;
  
  __ptr = (void *)*param_1;
  uVar5 = *(ulong *)((long)__ptr + 0x30);
  if ((uVar5 & 1) != 0) {
                    /* try { // try from 008f67cc to 008f67df has its CatchHandler @ 008f6838 */
    <tokio::sync::oneshot::tokio::sync::oneshot::Task>::drop_task((long)__ptr + 0x20);
  }
  if (((uint)uVar5 >> 3 & 1) != 0) {
    <tokio::sync::oneshot::tokio::sync::oneshot::Task>::drop_task((long)__ptr + 0x10);
  }
                    /* try { // try from 008f67e0 to 008f67e7 has its CatchHandler @ 008f6830 */
  FUN_008f5b40((long)__ptr + 0x38);
  if (__ptr != (void *)0xffffffffffffffff) {
    plVar1 = (long *)((long)__ptr + 8);
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 008f6884  <alloc[c1f8e832b0d782c7]::sync::Arc<std[17aff9129faa4dc5]::sync::poison::mutex::Mutex<tokio[8c8895dbfa691109]::sync::oneshot::Receiver<core[bcece726f298455b]::result::Result<hyper[9f1bfd30b08ca095]::upgrade::Upgraded,hyper[9f1bfd30b08ca095]::error::Error>>>>>::drop_slow =====

/* <alloc[c1f8e832b0d782c7]::sync::Arc<std[17aff9129faa4dc5]::sync::poison::mutex::Mutex<tokio[8c8895dbfa691109]::sync::oneshot::Receiver<core[bcece726f298455b]::result::Result<hyper[9f1bfd30b08ca095]::upgrade::Upgraded,
   hyper[9f1bfd30b08ca095]::error::Error>>>>>::drop_slow */

void <alloc[c1f8e832b0d782c7]::sync::Arc<std[17aff9129faa4dc5]::sync::poison::mutex::Mutex<tokio[8c8895dbfa691109]::sync::oneshot::Receiver<core[bcece726f298455b]::result::Result<hyper[9f1bfd30b08ca095]::upgrade::Upgraded,hyper[9f1bfd30b08ca095]::error::Error>>>>>
     ::drop_slow(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  void *__ptr;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  __ptr = (void *)*param_1;
  plVar5 = (long *)((long)__ptr + 0x18);
  lVar6 = *plVar5;
  if (lVar6 != 0) {
    puVar1 = (ulong *)(lVar6 + 0x30);
    do {
      uVar7 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar7 | 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar7 & 10) == 8) {
                    /* try { // try from 008f68d4 to 008f690f has its CatchHandler @ 008f6998 */
      (**(code **)(*(long *)(lVar6 + 0x10) + 0x10))(*(undefined8 *)(lVar6 + 0x18));
    }
    if (((uint)uVar7 >> 1 & 1) != 0) {
      uStack_68 = *(undefined8 *)(lVar6 + 0x40);
      local_70 = *(long *)(lVar6 + 0x38);
      uStack_58 = *(undefined8 *)(lVar6 + 0x50);
      uStack_60 = *(undefined8 *)(lVar6 + 0x48);
      uStack_48 = *(undefined8 *)(lVar6 + 0x60);
      local_50 = *(undefined8 *)(lVar6 + 0x58);
      local_40 = *(undefined8 *)(lVar6 + 0x68);
      *(undefined8 *)(lVar6 + 0x38) = 0;
      if (local_70 != 0) {
        FUN_008f1494((ulong)&local_70 | 8);
      }
    }
    plVar4 = (long *)*plVar5;
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
                    /* try { // try from 008f6930 to 008f6937 has its CatchHandler @ 008f6990 */
        <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<hyper::upgrade::Upgraded,{backref_38}::error::Error>>>>
        ::drop_slow(plVar5);
      }
    }
  }
  if (__ptr != (void *)0xffffffffffffffff) {
    plVar5 = (long *)((long)__ptr + 8);
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
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 008f6a04  <alloc::sync::[n]::alloc::sync::Arc<std::sync::poison::mutex::Mutex<futures_channel::mpsc::SenderTask>>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<std::sync::poison::mutex::Mutex<futures_channel::mpsc::SenderTask>>>::drop_slow
    */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<std::sync::poison::mutex::Mutex<futures_channel::mpsc::SenderTask>>>
::drop_slow(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  void *__ptr;
  
  __ptr = (void *)*param_1;
  if (*(long *)((long)__ptr + 0x18) != 0) {
                    /* try { // try from 008f6a24 to 008f6a27 has its CatchHandler @ 008f6a70 */
    (**(code **)(*(long *)((long)__ptr + 0x18) + 0x18))(*(undefined8 *)((long)__ptr + 0x20));
  }
  if (__ptr != (void *)0xffffffffffffffff) {
    plVar1 = (long *)((long)__ptr + 8);
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 008f6ab0  FUN_008f6ab0 =====

void FUN_008f6ab0(undefined8 *param_1,undefined8 param_2)

{
  long *local_18;
  
  local_18 = (long *)*param_1;
  if (*local_18 != -1) {
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002bd0bc,4,&local_18,&DAT_00aef4f8);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd198,4);
  return;
}


// ===== 008f6b0c  FUN_008f6b0c =====

void FUN_008f6b0c(long *param_1,undefined8 param_2)

{
  long *local_18;
  
  local_18 = (long *)*param_1 + 1;
  if (*(long *)*param_1 == 1) {
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002bd0bc,4,&local_18,&DAT_00aef518);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd198,4);
  return;
}


// ===== 008f6b68  FUN_008f6b68 =====

void FUN_008f6b68(ulong *param_1,uint *param_2,ulong param_3)

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
    if (uVar4 != 0) goto LAB_008f6ca0;
LAB_008f6bc4:
    if (param_3 < 4) goto LAB_008f6cf8;
LAB_008f6bcc:
    uVar4 = (ulong)*(uint *)((long)param_2 + uVar3);
    uVar7 = 4;
    if (param_3 < 6) goto LAB_008f6d24;
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
      if (1 < uVar7) goto LAB_008f6bf8;
    }
    else {
      uVar6 = (ulong)*param_2;
      uVar9 = 4;
      if (5 < uVar7) {
LAB_008f6bf8:
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
    if (uVar4 <= uVar3) goto LAB_008f6bc4;
LAB_008f6ca0:
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
    if (3 < param_3) goto LAB_008f6bcc;
LAB_008f6cf8:
    uVar7 = 0;
    uVar4 = 0;
    if (param_3 < 2) goto LAB_008f6d24;
  }
  lVar10 = uVar7 << 3;
  lVar11 = uVar7 + uVar3;
  uVar7 = uVar7 | 2;
  uVar4 = (ulong)*(ushort *)((long)param_2 + lVar11) << lVar10 | uVar4;
LAB_008f6d24:
  if (uVar7 < param_3) {
    param_1[7] = (ulong)*(byte *)((long)param_2 + uVar7 + uVar3) << (uVar7 << 3) | uVar4;
    param_1[8] = param_3;
    return;
  }
  param_1[7] = uVar4;
  param_1[8] = param_3;
  return;
}


// ===== 008f6d50  FUN_008f6d50 =====

void FUN_008f6d50(long *param_1)

{
  code *pcVar1;
  undefined8 *__ptr;
  void *__ptr_00;
  undefined8 *puVar2;
  
  if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x008f6d80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x20))(param_1 + 3,param_1[1],param_1[2]);
    return;
  }
  __ptr = (undefined8 *)param_1[1];
  __ptr_00 = (void *)*__ptr;
  if (__ptr_00 != (void *)0x0) {
    puVar2 = (undefined8 *)__ptr[1];
    pcVar1 = (code *)*puVar2;
    if (pcVar1 != (code *)0x0) {
                    /* try { // try from 008f6d9c to 008f6da3 has its CatchHandler @ 008f6dd4 */
      (*pcVar1)(__ptr_00);
    }
    if (puVar2[1] != 0) {
      free(__ptr_00);
    }
  }
  free(__ptr);
  return;
}


// ===== 008f6e08  FUN_008f6e08 =====

void FUN_008f6e08(long *param_1)

{
  code *pcVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (*param_1 != 0) {
    pvVar2 = (void *)param_1[1];
    if (pvVar2 == (void *)0x0) {
      puVar4 = (undefined8 *)param_1[2];
      pvVar2 = (void *)*puVar4;
      if (pvVar2 != (void *)0x0) {
        puVar3 = (undefined8 *)puVar4[1];
        pcVar1 = (code *)*puVar3;
        if (pcVar1 != (code *)0x0) {
                    /* try { // try from 008f6ea8 to 008f6eaf has its CatchHandler @ 008f6ee0 */
          (*pcVar1)(pvVar2);
        }
        if (puVar3[1] != 0) {
          free(pvVar2);
        }
      }
      free(puVar4);
      return;
    }
    if (param_1[3] != 0) {
                    /* try { // try from 008f6e38 to 008f6e43 has its CatchHandler @ 008f6f2c */
      (**(code **)(param_1[3] + 0x20))(param_1 + 6,param_1[4],param_1[5]);
      pvVar2 = (void *)param_1[1];
    }
    puVar4 = (undefined8 *)param_1[2];
    pcVar1 = (code *)*puVar4;
    if (pcVar1 != (code *)0x0) {
                    /* try { // try from 008f6e58 to 008f6e5f has its CatchHandler @ 008f6f0c */
      (*pcVar1)(pvVar2);
    }
    if (puVar4[1] != 0) {
      free(pvVar2);
      return;
    }
  }
  return;
}


// ===== 008f6f48  FUN_008f6f48 =====

void FUN_008f6f48(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  plVar5 = (long *)(param_1 + 0x18);
  lVar6 = *plVar5;
  if (lVar6 != 0) {
    puVar1 = (ulong *)(lVar6 + 0x30);
    do {
      uVar7 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar7 | 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar7 & 10) == 8) {
                    /* try { // try from 008f6f94 to 008f6fcf has its CatchHandler @ 008f701c */
      (**(code **)(*(long *)(lVar6 + 0x10) + 0x10))(*(undefined8 *)(lVar6 + 0x18));
    }
    if (((uint)uVar7 >> 1 & 1) != 0) {
      uStack_68 = *(undefined8 *)(lVar6 + 0x40);
      local_70 = *(long *)(lVar6 + 0x38);
      uStack_58 = *(undefined8 *)(lVar6 + 0x50);
      uStack_60 = *(undefined8 *)(lVar6 + 0x48);
      uStack_48 = *(undefined8 *)(lVar6 + 0x60);
      local_50 = *(undefined8 *)(lVar6 + 0x58);
      local_40 = *(undefined8 *)(lVar6 + 0x68);
      *(undefined8 *)(lVar6 + 0x38) = 0;
      if (local_70 != 0) {
        FUN_008f1494((ulong)&local_70 | 8);
      }
    }
    plVar4 = (long *)*plVar5;
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
        <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<hyper::upgrade::Upgraded,{backref_38}::error::Error>>>>
        ::drop_slow(plVar5);
        return;
      }
    }
  }
  return;
}


// ===== 008f7054  FUN_008f7054 =====

void FUN_008f7054(void *param_1,undefined8 *param_2)

{
  if ((code *)*param_2 != (code *)0x0) {
                    /* try { // try from 008f7074 to 008f707b has its CatchHandler @ 008f70ac */
    (*(code *)*param_2)(param_1);
  }
  if (param_2[1] != 0) {
    free(param_1);
    return;
  }
  return;
}


// ===== 008f70cc  FUN_008f70cc =====

void FUN_008f70cc(void *param_1,undefined8 *param_2)

{
  if ((code *)*param_2 != (code *)0x0) {
                    /* try { // try from 008f70ec to 008f70f3 has its CatchHandler @ 008f7124 */
    (*(code *)*param_2)(param_1);
  }
  if (param_2[1] != 0) {
    free(param_1);
    return;
  }
  return;
}


// ===== 008f7144  FUN_008f7144 =====

void FUN_008f7144(undefined8 *param_1)

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


// ===== 008f71b4  FUN_008f71b4 =====

void FUN_008f71b4(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
                    /* try { // try from 008f71c8 to 008f71ef has its CatchHandler @ 008f722c */
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


// ===== 008f7264  FUN_008f7264 =====

void FUN_008f7264(int *param_1,uint param_2)

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


// ===== 008f72d4  FUN_008f72d4 =====

void FUN_008f72d4(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
                    /* try { // try from 008f72e8 to 008f730f has its CatchHandler @ 008f734c */
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


// ===== 008f7384  FUN_008f7384 =====

void FUN_008f7384(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008f7394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1 + 3,param_1[1],param_1[2]);
  return;
}


// ===== 008f7398  <hyper::ext::h1_reason_phrase::hyper::ext::h1_reason_phrase::ReasonPhrase>::from_static =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper::ext::h1_reason_phrase::hyper::ext::h1_reason_phrase::ReasonPhrase>::from_static */

void __rustcall
<hyper::ext::h1_reason_phrase::hyper::ext::h1_reason_phrase::ReasonPhrase>::from_static
          (undefined8 *param_1,byte *param_2,long param_3)

{
  byte bVar1;
  byte *pbVar2;
  long lVar3;
  
  pbVar2 = param_2;
  lVar3 = param_3;
  if (param_3 != 0) {
    do {
      bVar1 = *pbVar2;
      if ((((bVar1 != 9) && (bVar1 != 0x20)) && (-1 < (char)bVar1)) && (0x5d < bVar1 - 0x21)) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_fmt
                  ("invalid byte in static reason phrase",0x49,
                   &PTR_s__root__cargo_registry_src_index__00aef5d8);
      }
      lVar3 = lVar3 + -1;
      pbVar2 = pbVar2 + 1;
    } while (lVar3 != 0);
  }
  *param_1 = &PTR_FUN_00aef5b0;
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = 0;
  return;
}


// ===== 008f740c  FUN_008f740c =====

undefined8 FUN_008f740c(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

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
                    /* try { // try from 008f7578 to 008f758f has its CatchHandler @ 008f75b4 */
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
LAB_008f74c0:
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
        goto LAB_008f74c0;
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


// ===== 008f75d0  FUN_008f75d0 =====

long FUN_008f75d0(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *__ptr;
  
  __ptr = (long *)param_1[1];
  lVar3 = *__ptr;
  while (lVar3 == 0) {
    if ((long *)*param_1 == __ptr) {
      return 0;
    }
    std::thread::functions::yield_now();
    __ptr = (long *)param_1[1];
    lVar3 = *__ptr;
  }
  param_1[1] = lVar3;
  if (__ptr[1] != 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("assertion failed: (*tail).value.is_none()",0x29,
               &PTR_s__root__cargo_registry_src_index__00aef608);
  }
  lVar5 = *(long *)(lVar3 + 8);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("assertion failed: (*next).value.is_some()",0x29,
               &PTR_s__root__cargo_registry_src_index__00aef620);
  }
  *(undefined8 *)(lVar3 + 8) = 0;
  plVar4 = (long *)__ptr[1];
  if (plVar4 != (long *)0x0) {
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
                    /* try { // try from 008f764c to 008f764f has its CatchHandler @ 008f76b8 */
      <alloc::sync::[n]::alloc::sync::Arc<std::sync::poison::mutex::Mutex<futures_channel::mpsc::SenderTask>>>
      ::drop_slow();
    }
  }
  free(__ptr);
  return lVar5;
}


// ===== 008f76fc  FUN_008f76fc =====

void FUN_008f76fc(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *__ptr;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  __ptr = (long *)param_2[1];
  plVar1 = (long *)__ptr[5];
  while (plVar1 == (long *)0x0) {
    if ((long *)*param_2 == __ptr) {
      *param_1 = 0;
      return;
    }
    std::thread::functions::yield_now();
    __ptr = (long *)param_2[1];
    plVar1 = (long *)__ptr[5];
  }
  param_2[1] = plVar1;
  if (*__ptr != 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("assertion failed: (*tail).value.is_none()",0x29,
               &PTR_s__root__cargo_registry_src_index__00aef608);
  }
  if (*plVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("assertion failed: (*next).value.is_some()",0x29,
               &PTR_s__root__cargo_registry_src_index__00aef620);
  }
  lVar3 = plVar1[4];
  lVar2 = plVar1[3];
  lVar5 = plVar1[2];
  lVar4 = plVar1[1];
  *plVar1 = 0;
  if (*__ptr != 0) {
                    /* try { // try from 008f7754 to 008f775b has its CatchHandler @ 008f77fc */
    FUN_008f6d50(__ptr + 1);
  }
  free(__ptr);
  param_1[2] = lVar5;
  param_1[1] = lVar4;
  param_1[4] = lVar3;
  param_1[3] = lVar2;
  *param_1 = 1;
  return;
}


// ===== 008f7824  <hyper::upgrade::[5]::hyper::upgrade::Pending>::manual =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper::upgrade::[5]::hyper::upgrade::Pending>::manual */

void __rustcall <hyper::upgrade::[5]::hyper::upgrade::Pending>::manual(undefined8 param_1)

{
  undefined1 auStack_88 [56];
  undefined8 local_50;
  undefined8 *puStack_48;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puStack_48 = (undefined8 *)FUN_004b25a4(0x18,8);
  if (puStack_48 != (undefined8 *)0x0) {
    *puStack_48 = 0;
    *(undefined2 *)(puStack_48 + 2) = 0x401;
    local_50 = 0;
    FUN_008f2184(auStack_88,param_1,&local_50);
    FUN_008f6e08(auStack_88);
    return;
  }
                    /* try { // try from 008f7888 to 008f7893 has its CatchHandler @ 008f7898 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x18);
}


// ===== 008f78b0  <hyper::upgrade::[5]::hyper::upgrade::Pending>::fulfill =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper::upgrade::[5]::hyper::upgrade::Pending>::fulfill */

void __rustcall
<hyper::upgrade::[5]::hyper::upgrade::Pending>::fulfill(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_78 [56];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  uStack_38 = param_2[1];
  local_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_18 = param_2[5];
  local_20 = param_2[4];
  FUN_008f2184(auStack_78,param_1,&local_40);
  FUN_008f6e08(auStack_78);
  return;
}


// ===== 008f78ec  <hyper::client::conn::http1::[5]::hyper::client::conn::http1::Builder>::max_buf_size =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper::client::conn::http1::[5]::hyper::client::conn::http1::Builder>::max_buf_size */

void __rustcall
<hyper::client::conn::http1::[5]::hyper::client::conn::http1::Builder>::max_buf_size
          (long param_1,ulong param_2)

{
  if (param_2 >> 0xd != 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x20) = 1;
    *(ulong *)(param_1 + 0x28) = param_2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            ("the max_buf_size cannot be smaller than the minimum that h1 specifies.",0x8d,
             &PTR_s__root__cargo_registry_src_index__00aef638);
}


// ===== 008f7924  FUN_008f7924 =====

long * FUN_008f7924(void)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long local_80;
  long lStack_78;
  long local_70;
  long lStack_68;
  long local_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long local_30;
  long lStack_28;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  plVar4 = (long *)FUN_004b25a4(0x70,8);
  if (plVar4 == (long *)0x0) {
                    /* try { // try from 008f79dc to 008f79e7 has its CatchHandler @ 008f7a1c */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x70);
  }
  plVar4[9] = lStack_48;
  plVar4[8] = local_50;
  plVar4[0xb] = lStack_38;
  plVar4[10] = lStack_40;
  plVar4[0xd] = lStack_28;
  plVar4[0xc] = local_30;
  plVar4[1] = 1;
  *plVar4 = 1;
  plVar4[3] = lStack_78;
  plVar4[2] = local_80;
  plVar4[5] = lStack_68;
  plVar4[4] = local_70;
  plVar4[7] = 0;
  plVar4[6] = 0;
  do {
    lVar6 = *plVar4;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = lVar6 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (-1 < lVar6) {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar5 = (undefined8 *)FUN_004b25a4(0x20,8);
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[1] = 1;
      *puVar5 = 1;
      puVar5[3] = plVar4;
      puVar5[2] = 0;
      return plVar4;
    }
                    /* try { // try from 008f79ec to 008f79f7 has its CatchHandler @ 008f79fc */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x20);
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x8f79fc);
  (*pcVar3)();
}


// ===== 008f7a34  FUN_008f7a34 =====

void FUN_008f7a34(void)

{
  return;
}


// ===== 008f7a38  FUN_008f7a38 =====

void FUN_008f7a38(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  param_1[2] = param_4;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_00aef5b0;
  param_1[1] = param_3;
  return;
}


// ===== 008f7a4c  FUN_008f7a4c =====

undefined8 FUN_008f7a4c(void)

{
  return 0;
}


// ===== 008f7a54  FUN_008f7a54 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f7a54(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a0730;
  param_1[1] = _UNK_002a0738;
  *param_1 = uVar1;
  return;
}


// ===== 008f7a68  <hyper::upgrade::Upgraded_as_hyper::rt::io::Write>::poll_flush =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper::upgrade::Upgraded as hyper::rt::io::Write>::poll_flush */

void __rustcall <hyper::upgrade::Upgraded_as_hyper::rt::io::Write>::poll_flush(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008f7a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x28))(*param_1);
  return;
}


// ===== 008f7a74  <hyper::upgrade::Upgraded_as_hyper::rt::io::Write>::poll_write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper::upgrade::Upgraded as hyper::rt::io::Write>::poll_write */

void __rustcall <hyper::upgrade::Upgraded_as_hyper::rt::io::Write>::poll_write(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008f7a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x20))(*param_1);
  return;
}


// ===== 008f7a84  <hyper::upgrade::Upgraded_as_hyper::rt::io::Write>::poll_shutdown =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper::upgrade::Upgraded as hyper::rt::io::Write>::poll_shutdown */

void __rustcall
<hyper::upgrade::Upgraded_as_hyper::rt::io::Write>::poll_shutdown(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008f7a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x30))(*param_1);
  return;
}


// ===== 008f7a90  <hyper::upgrade::Upgraded_as_hyper::rt::io::Write>::is_write_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper::upgrade::Upgraded as hyper::rt::io::Write>::is_write_vectored */

void __rustcall
<hyper::upgrade::Upgraded_as_hyper::rt::io::Write>::is_write_vectored(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008f7a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x38))(*param_1);
  return;
}


// ===== 008f7a9c  <hyper::upgrade::Upgraded_as_hyper::rt::io::Write>::poll_write_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper::upgrade::Upgraded as hyper::rt::io::Write>::poll_write_vectored */

void __rustcall
<hyper::upgrade::Upgraded_as_hyper::rt::io::Write>::poll_write_vectored(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008f7aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x40))(*param_1);
  return;
}


// ===== 008f7aac  <hyper::ext::h1_reason_phrase::ReasonPhrase_as_core::convert::TryFrom<alloc::vec::Vec<u8>>>::try_from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper::ext::h1_reason_phrase::ReasonPhrase as
   core::convert::TryFrom<alloc::vec::Vec<u8>>>::try_from */

void __rustcall
<hyper::ext::h1_reason_phrase::ReasonPhrase_as_core::convert::TryFrom<alloc::vec::Vec<u8>>>::
try_from(undefined8 *param_1,long *param_2)

{
  byte bVar1;
  void *__ptr;
  long lVar2;
  
  if (param_2[2] != 0) {
    __ptr = (void *)param_2[1];
    lVar2 = 0;
    do {
      bVar1 = *(byte *)((long)__ptr + lVar2);
      if ((((bVar1 != 9) && (bVar1 != 0x20)) && (-1 < (char)bVar1)) && (0x5d < bVar1 - 0x21)) {
        lVar2 = *param_2;
        *(byte *)(param_1 + 1) = bVar1;
        *param_1 = 0;
        if (lVar2 != 0) {
          free(__ptr);
          return;
        }
        return;
      }
      lVar2 = lVar2 + 1;
    } while (param_2[2] != lVar2);
  }
  <bytes::bytes::Bytes_as_core::convert::From<alloc::vec::Vec<u8>>>::from();
  return;
}


// ===== 008f7b14  <hyper::upgrade::Upgraded_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper::upgrade::Upgraded as core::fmt::Debug>::fmt */

void __rustcall
<hyper::upgrade::Upgraded_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,&DAT_002a1200,8);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish(auStack_20);
  return;
}


// ===== 008f7b4c  FUN_008f7b4c =====

void FUN_008f7b4c(void)

{
  return;
}


// ===== 008f7b58  FUN_008f7b58 =====

void FUN_008f7b58(void)

{
  return;
}


// ===== 008f7b64  FUN_008f7b64 =====

void FUN_008f7b64(void)

{
  return;
}


// ===== 008f7b70  FUN_008f7b70 =====

void FUN_008f7b70(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  (**(code **)*param_1)(&local_40,param_1 + 3,param_1[1],param_1[2]);
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)FUN_004b25a4(0x20,8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = uStack_38;
    *puVar1 = local_40;
    puVar1[3] = uStack_28;
    puVar1[2] = uStack_30;
    return;
  }
                    /* try { // try from 008f7bcc to 008f7bd7 has its CatchHandler @ 008f7bdc */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x20);
}


// ===== 008f7c04  <hyper::ext::h1_reason_phrase::ReasonPhrase_as_core::convert::TryFrom<alloc::string::String>>::try_from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper::ext::h1_reason_phrase::ReasonPhrase as
   core::convert::TryFrom<alloc::string::String>>::try_from */

void __rustcall
<hyper::ext::h1_reason_phrase::ReasonPhrase_as_core::convert::TryFrom<alloc::string::String>>::
try_from(undefined8 *param_1,long *param_2)

{
  byte bVar1;
  void *__ptr;
  long lVar2;
  
  if (param_2[2] != 0) {
    __ptr = (void *)param_2[1];
    lVar2 = 0;
    do {
      bVar1 = *(byte *)((long)__ptr + lVar2);
      if ((((bVar1 != 9) && (bVar1 != 0x20)) && (-1 < (char)bVar1)) && (0x5d < bVar1 - 0x21)) {
        lVar2 = *param_2;
        *(byte *)(param_1 + 1) = bVar1;
        *param_1 = 0;
        if (lVar2 != 0) {
          free(__ptr);
          return;
        }
        return;
      }
      lVar2 = lVar2 + 1;
    } while (param_2[2] != lVar2);
  }
  <bytes::bytes::Bytes_as_core::convert::From<alloc::string::String>>::from();
  return;
}


// ===== 008f7c6c  FUN_008f7c6c =====

void FUN_008f7c6c(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *__ptr;
  long *plVar3;
  long lVar4;
  void *pvVar5;
  
  __ptr = (undefined8 *)*(void **)(param_1 + 8);
  while (__ptr != (undefined8 *)0x0) {
    pvVar5 = (void *)*__ptr;
    plVar3 = (long *)__ptr[1];
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
                    /* try { // try from 008f7ccc to 008f7ccf has its CatchHandler @ 008f7cd4 */
        <alloc::sync::[n]::alloc::sync::Arc<std::sync::poison::mutex::Mutex<futures_channel::mpsc::SenderTask>>>
        ::drop_slow();
      }
    }
    free(__ptr);
    __ptr = (undefined8 *)pvVar5;
  }
  return;
}


// ===== 008f7cf0  FUN_008f7cf0 =====

void FUN_008f7cf0(long param_1)

{
  long *__ptr;
  long *plVar1;
  
  __ptr = *(long **)(param_1 + 8);
  while (__ptr != (long *)0x0) {
    plVar1 = (long *)__ptr[5];
    if (*__ptr != 0) {
                    /* try { // try from 008f7d34 to 008f7d3b has its CatchHandler @ 008f7d40 */
      FUN_008f6d50(__ptr + 1);
    }
    free(__ptr);
    __ptr = plVar1;
  }
  return;
}


// ===== 008f7d5c  <hyper::ext::h1_reason_phrase::ReasonPhrase_as_core::convert::TryFrom<bytes::bytes::Bytes>>::try_from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper::ext::h1_reason_phrase::ReasonPhrase as
   core::convert::TryFrom<bytes::bytes::Bytes>>::try_from */

void __rustcall
<hyper::ext::h1_reason_phrase::ReasonPhrase_as_core::convert::TryFrom<bytes::bytes::Bytes>>::
try_from(long *param_1,long *param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_2[2] != 0) {
    lVar2 = 0;
    do {
      bVar1 = *(byte *)(param_2[1] + lVar2);
      if ((((bVar1 != 9) && (bVar1 != 0x20)) && (-1 < (char)bVar1)) && (0x5d < bVar1 - 0x21)) {
        lVar2 = *param_2;
        *(byte *)(param_1 + 1) = bVar1;
        *param_1 = 0;
                    /* WARNING: Could not recover jumptable at 0x008f7db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar2 + 0x20))(param_2 + 3);
        return;
      }
      lVar2 = lVar2 + 1;
    } while (param_2[2] != lVar2);
  }
  lVar2 = *param_2;
  lVar4 = param_2[3];
  lVar3 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = lVar2;
  param_1[3] = lVar4;
  param_1[2] = lVar3;
  return;
}


// ===== 008f7dc0  <hyper::upgrade::OnUpgrade_as_core::future::future::Future>::poll =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper::upgrade::OnUpgrade as core::future::future::Future>::poll */

void __rustcall
<hyper::upgrade::OnUpgrade_as_core::future::future::Future>::poll
          (undefined8 *param_1,long *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong *puVar5;
  byte bVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  int *local_98;
  byte local_90;
  undefined7 uStack_8f;
  undefined8 *puStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar10 = *param_2;
  if (lVar10 == 0) {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar7 = (undefined8 *)FUN_004b25a4(0x18,8);
    if (puVar7 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x18);
    }
    *puVar7 = 0;
    *(undefined2 *)(puVar7 + 2) = 0x301;
    param_1[1] = 0;
    param_1[2] = puVar7;
    *param_1 = 0;
    return;
  }
  piVar1 = (int *)(lVar10 + 0x10);
  do {
    if (*piVar1 != 0) {
      ClearExclusiveLocal();
      param_2 = (long *)<std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::
                        lock_contended(lVar10 + 0x10);
      uVar8 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      puVar5 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      goto joined_r0x008f7f8c;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar8 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
  puVar5 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
joined_r0x008f7f8c:
  PTR_GLOBAL_PANIC_COUNT_00b00bf0 = (undefined *)puVar5;
  if ((uVar8 & 0x7fffffffffffffff) == 0) {
    bVar6 = 0;
    cVar3 = *(char *)(lVar10 + 0x14);
  }
  else {
    bVar6 = std::panicking::panic_count::is_zero_slow_path(param_2,param_3);
    bVar6 = bVar6 ^ 1;
    cVar3 = *(char *)(lVar10 + 0x14);
  }
  if (cVar3 != '\0') {
                    /* try { // try from 008f7fb0 to 008f7fd3 has its CatchHandler @ 008f7ff0 */
    local_98 = piVar1;
    local_90 = bVar6;
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              ("called `Result::unwrap()` on an `Err` value",0x2b,&local_98,&PTR_FUN_00aef590,
               &PTR_s__root__cargo_registry_src_index__00aef6b0);
  }
                    /* try { // try from 008f7e1c to 008f7e27 has its CatchHandler @ 008f7fd8 */
  FUN_008f271c(&local_98,lVar10 + 0x18,param_3);
  if (local_98 == (int *)0x2) {
    *param_1 = 1;
  }
  else {
    if (local_98 == (int *)0x1) {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      puStack_88 = (undefined8 *)FUN_004b25a4(0x18,8);
      if (puStack_88 == (undefined8 *)0x0) {
                    /* try { // try from 008f7f58 to 008f7f63 has its CatchHandler @ 008f7fd8 */
                    /* WARNING: Subroutine does not return */
        alloc::alloc::handle_alloc_error(8,0x18);
      }
      uVar9 = 0;
      *(undefined1 *)(puStack_88 + 2) = 4;
      *puStack_88 = 1;
      puStack_88[1] = &DAT_00aefc48;
    }
    else {
      uVar9 = CONCAT71(uStack_8f,local_90);
      uStack_58 = uStack_78;
      local_60 = local_80;
      uStack_48 = uStack_68;
      uStack_50 = uStack_70;
    }
    param_1[1] = uVar9;
    param_1[2] = puStack_88;
    *param_1 = 0;
    param_1[4] = uStack_58;
    param_1[3] = local_60;
    param_1[6] = uStack_48;
    param_1[5] = uStack_50;
  }
  if ((((bVar6 & 1) == 0) && ((*puVar5 & 0x7fffffffffffffff) != 0)) &&
     (uVar8 = std::panicking::panic_count::is_zero_slow_path(), (uVar8 & 1) == 0)) {
    *(undefined1 *)(lVar10 + 0x14) = 1;
  }
  do {
    iVar2 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar2 == 2) {
    <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(piVar1);
    return;
  }
  return;
}


// ===== 008f8008  <hyper::upgrade::OnUpgrade_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper::upgrade::OnUpgrade as core::fmt::Debug>::fmt */

void __rustcall
<hyper::upgrade::OnUpgrade_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,"OnUpgrade",9);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish(auStack_20);
  return;
}


// ===== 008f8040  <hyper::ext::h1_reason_phrase::InvalidReasonPhrase_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper::ext::h1_reason_phrase::InvalidReasonPhrase as core::fmt::Display>::fmt */

void __rustcall
<hyper::ext::h1_reason_phrase::InvalidReasonPhrase_as_core::fmt::Display>::fmt
          (undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_fmt_00b00c18;
  local_20 = param_1;
  core::fmt::write(*param_2,param_2[1],&DAT_002bbc39,&local_20);
  return;
}


// ===== 008f807c  <hyper::upgrade::UpgradeExpected_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper::upgrade::UpgradeExpected as core::fmt::Display>::fmt */

void __rustcall
<hyper::upgrade::UpgradeExpected_as_core::fmt::Display>::fmt(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,"upgrade expected but not completed",0x22);
  return;
}


// ===== 008f8090  FUN_008f8090 =====

void FUN_008f8090(undefined8 param_1,long param_2)

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


// ===== 008f80a8  <hyper::upgrade::Upgraded_as_hyper::rt::io::Read>::poll_read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper::upgrade::Upgraded as hyper::rt::io::Read>::poll_read */

undefined8 __rustcall
<hyper::upgrade::Upgraded_as_hyper::rt::io::Read>::poll_read
          (undefined8 *param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  void *__src;
  ulong uVar8;
  undefined8 local_58;
  
  plVar5 = param_1 + 2;
  lVar6 = *plVar5;
  *plVar5 = 0;
  if (lVar6 != 0) {
    uVar8 = param_1[4];
    __src = (void *)param_1[3];
    local_58 = param_1[5];
    if (uVar8 != 0) {
      uVar2 = param_3[1];
      uVar3 = param_3[2];
      uVar7 = uVar2 - uVar3;
      __n = uVar7;
      if (uVar8 <= uVar7) {
        __n = uVar8;
      }
      uVar1 = __n + uVar3;
      if ((uVar3 <= uVar1) && (uVar1 <= uVar2)) {
        memcpy((void *)(*param_3 + uVar3),__src,__n);
        if ((ulong)param_3[3] < uVar1) {
          param_3[3] = uVar1;
        }
        param_3[2] = uVar1;
        if (uVar7 < uVar8) {
          param_1[3] = (long)__src + __n;
          *plVar5 = lVar6;
          param_1[5] = local_58;
          param_1[4] = uVar8 - __n;
        }
        else {
          (**(code **)(lVar6 + 0x20))(&local_58);
        }
        return 0;
      }
                    /* try { // try from 008f81d8 to 008f81e7 has its CatchHandler @ 008f81ec */
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (uVar3,uVar1,uVar2,&PTR_s__root__cargo_registry_src_index__00aef5f0);
    }
    (**(code **)(lVar6 + 0x20))(&local_58,__src,0);
  }
  uVar4 = (**(code **)(param_1[1] + 0x18))(*param_1,param_2,param_3);
  return uVar4;
}


// ===== 008f8214  FUN_008f8214 =====

void FUN_008f8214(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,"PoisonError",0xb);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish_non_exhaustive(auStack_20);
  return;
}


// ===== 008f824c  FUN_008f824c =====

void FUN_008f824c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,"PoisonError",0xb);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish_non_exhaustive(auStack_20);
  return;
}


// ===== 008f8284  <hyper::rt::io::ReadBuf_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper::rt::io::ReadBuf as core::fmt::Debug>::fmt */

void __rustcall <hyper::rt::io::ReadBuf_as_core::fmt::Debug>::fmt(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [16];
  undefined8 local_28;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_38,param_2,"ReadBuf",7);
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (auStack_38,"filled",6,param_1 + 0x10,&DAT_00aef6c8);
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (uVar1,&DAT_002bd130,4,param_1 + 0x18,&DAT_00aef6c8);
  local_28 = *(undefined8 *)(param_1 + 8);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (uVar1,&DAT_002a12b0,8,&local_28,&DAT_00aef6c8);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 008f8324  <hyper::ext::h1_reason_phrase::ReasonPhrase_as_core::convert::TryFrom<&[u8]>>::try_from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper::ext::h1_reason_phrase::ReasonPhrase as core::convert::TryFrom<&[u8]>>::try_from */

void __rustcall
<hyper::ext::h1_reason_phrase::ReasonPhrase_as_core::convert::TryFrom<&[u8]>>::try_from
          (undefined8 *param_1,byte *param_2,long param_3)

{
  byte bVar1;
  
  if (param_3 != 0) {
    do {
      bVar1 = *param_2;
      if ((((bVar1 != 9) && (bVar1 != 0x20)) && (-1 < (char)bVar1)) && (0x5d < bVar1 - 0x21)) {
        *(byte *)(param_1 + 1) = bVar1;
        *param_1 = 0;
        return;
      }
      param_3 = param_3 + -1;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  <bytes::bytes::bytes::bytes::Bytes>::copy_from_slice();
  return;
}


// ===== 008f8370  FUN_008f8370 =====

undefined8 FUN_008f8370(void)

{
  return 0;
}


// ===== 008f8378  FUN_008f8378 =====

long * FUN_008f8378(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  void *__ptr;
  undefined8 *puVar3;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)FUN_004b25a4(8,8);
  if (puVar1 != (undefined8 *)0x0) {
    __ptr = (void *)*param_1;
    *puVar1 = param_2;
    if (__ptr != (void *)0x0) {
      puVar3 = (undefined8 *)param_1[1];
      pcVar2 = (code *)*puVar3;
      if (pcVar2 != (code *)0x0) {
                    /* try { // try from 008f83c8 to 008f83cf has its CatchHandler @ 008f8418 */
        (*pcVar2)(__ptr);
      }
      if (puVar3[1] != 0) {
        free(__ptr);
      }
    }
    *param_1 = (long)puVar1;
    param_1[1] = (long)&PTR_FUN_00aefcc0;
    return param_1;
  }
                    /* try { // try from 008f8408 to 008f8413 has its CatchHandler @ 008f8444 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,8);
}


// ===== 008f8468  FUN_008f8468 =====

long * FUN_008f8468(long *param_1,void *param_2,size_t param_3)

{
  undefined1 *__dest;
  size_t *psVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  void *__ptr;
  
  if (-1 < (long)param_3) {
    if (param_3 == 0) {
      __dest = &DAT_00000001;
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      psVar1 = (size_t *)FUN_004b25a4(0x18,8);
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar4 = 1;
      __dest = (undefined1 *)FUN_004b25a4(param_3,1);
      if (__dest == (undefined1 *)0x0) goto LAB_008f848c;
      memcpy(__dest,param_2,param_3);
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      psVar1 = (size_t *)FUN_004b25a4(0x18,8);
    }
    if (psVar1 != (size_t *)0x0) {
      __ptr = (void *)*param_1;
      *psVar1 = param_3;
      psVar1[1] = (size_t)__dest;
      psVar1[2] = param_3;
      if (__ptr != (void *)0x0) {
        puVar3 = (undefined8 *)param_1[1];
        pcVar2 = (code *)*puVar3;
        if (pcVar2 != (code *)0x0) {
                    /* try { // try from 008f8500 to 008f8507 has its CatchHandler @ 008f8568 */
          (*pcVar2)(__ptr);
        }
        if (puVar3[1] != 0) {
          free(__ptr);
        }
      }
      *param_1 = (long)psVar1;
      param_1[1] = (long)&PTR_FUN_00aef938;
      return param_1;
    }
                    /* try { // try from 008f8558 to 008f8563 has its CatchHandler @ 008f8594 */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x18);
  }
  uVar4 = 0;
LAB_008f848c:
                    /* try { // try from 008f848c to 008f8497 has its CatchHandler @ 008f85b0 */
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar4,param_3);
}


// ===== 008f85c8  FUN_008f85c8 =====

void FUN_008f85c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
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
  undefined8 uStack_50;
  undefined8 uStack_48;
  void *local_40;
  undefined2 uStack_38;
  undefined1 uStack_36;
  undefined5 uStack_35;
  
                    /* try { // try from 008f85e4 to 008f85eb has its CatchHandler @ 008f86c8 */
  <http::response::[2]::http::response::Parts>::new(&local_a0);
  uStack_38 = *(undefined2 *)(param_2 + 0xd);
                    /* try { // try from 008f85f4 to 008f85fb has its CatchHandler @ 008f8698 */
  FUN_008f9120(&local_a0);
  uStack_78 = param_2[5];
  local_80 = param_2[4];
  uStack_68 = param_2[7];
  uStack_70 = param_2[6];
  uStack_36 = *(undefined1 *)((long)param_2 + 0x6a);
  uVar1 = param_2[0xc];
  uStack_58 = param_2[9];
  local_60 = param_2[8];
  uStack_48 = param_2[0xb];
  uStack_50 = param_2[10];
  uStack_98 = param_2[1];
  local_a0 = *param_2;
  uStack_88 = param_2[3];
  uStack_90 = param_2[2];
  if (local_40 != (void *)0x0) {
                    /* try { // try from 008f8628 to 008f862f has its CatchHandler @ 008f8678 */
    FUN_008f096c(local_40);
    free(local_40);
  }
  param_1[9] = uStack_58;
  param_1[8] = local_60;
  param_1[0xb] = uStack_48;
  param_1[10] = uStack_50;
  param_1[1] = uStack_98;
  *param_1 = local_a0;
  param_1[3] = uStack_88;
  param_1[2] = uStack_90;
  param_1[5] = uStack_78;
  param_1[4] = local_80;
  param_1[7] = uStack_68;
  param_1[6] = uStack_70;
  param_1[0xd] = CONCAT53(uStack_35,CONCAT12(uStack_36,uStack_38));
  param_1[0xc] = uVar1;
  return;
}


// ===== 008f86e8  FUN_008f86e8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f86e8(undefined8 *param_1,ulong param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lStack_30;
  
  if (0x3ffffffffffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("requested buffer size too large",0x1f,
               &PTR_s__root__cargo_registry_src_index__00aef718);
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar5 = (undefined8 *)FUN_004b25a4(0x30,8);
  if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x30);
  }
  *puVar5 = 0;
  puVar5[5] = 0;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  lVar6 = FUN_004b263c(0x10,8);
  lVar3 = _UNK_002a0dc8;
  lVar8 = _DAT_002a0dc0;
  if (lVar6 == 0) {
                    /* try { // try from 008f8828 to 008f8833 has its CatchHandler @ 008f88b8 */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x10);
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  plVar7 = (long *)FUN_004b25a4(0x60,8);
  if (plVar7 != (long *)0x0) {
    plVar7[5] = lVar6;
    plVar7[4] = lVar6;
    plVar7[7] = lVar8;
    plVar7[6] = param_2;
    plVar7[9] = 0;
    plVar7[8] = lVar3;
    plVar7[0xb] = 0;
    plVar7[10] = lStack_30;
    plVar7[1] = 1;
    *plVar7 = 1;
    plVar7[3] = (long)puVar5;
    plVar7[2] = (long)puVar5;
    do {
      lVar8 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (-1 < lVar8) {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      puVar5 = (undefined8 *)FUN_004b25a4(0x30,8);
      if (puVar5 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar5 + 2) = 0;
        *(undefined1 *)((long)puVar5 + 0x14) = 0;
        puVar5[3] = 0;
        *(undefined1 *)(puVar5 + 5) = 0;
        puVar5[1] = 1;
        *puVar5 = 1;
        *param_1 = plVar7;
        param_1[1] = puVar5;
        *(undefined1 *)(param_1 + 2) = 0;
        param_1[3] = plVar7;
        return;
      }
                    /* try { // try from 008f8848 to 008f8853 has its CatchHandler @ 008f8858 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x30);
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x8f8858);
    (*pcVar4)();
  }
                    /* try { // try from 008f8838 to 008f8843 has its CatchHandler @ 008f88a4 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x60);
}


// ===== 008f88d0  FUN_008f88d0 =====

void FUN_008f88d0(long *param_1)

{
  code *pcVar1;
  undefined8 *__ptr;
  void *__ptr_00;
  undefined8 *puVar2;
  
  if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x008f8900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x20))(param_1 + 3,param_1[1],param_1[2]);
    return;
  }
  __ptr = (undefined8 *)param_1[1];
  __ptr_00 = (void *)*__ptr;
  if (__ptr_00 != (void *)0x0) {
    puVar2 = (undefined8 *)__ptr[1];
    pcVar1 = (code *)*puVar2;
    if (pcVar1 != (code *)0x0) {
                    /* try { // try from 008f891c to 008f8923 has its CatchHandler @ 008f8954 */
      (*pcVar1)(__ptr_00);
    }
    if (puVar2[1] != 0) {
      free(__ptr_00);
    }
  }
  free(__ptr);
  return;
}


// ===== 008f8988  FUN_008f8988 =====

void FUN_008f8988(long param_1)

{
  void *__ptr;
  
                    /* try { // try from 008f8998 to 008f899b has its CatchHandler @ 008f89f0 */
  FUN_008f9120();
  __ptr = *(void **)(param_1 + 0x60);
  if (__ptr != (void *)0x0) {
                    /* try { // try from 008f89a4 to 008f89ab has its CatchHandler @ 008f89d0 */
    FUN_008f096c(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 008f8a0c  FUN_008f8a0c =====

void FUN_008f8a0c(long *param_1)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  
  __ptr = (void *)param_1[1];
  lVar2 = param_1[2] + 1;
  lVar1 = (long)__ptr + 0x38;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 008f8a48 to 008f8a4b has its CatchHandler @ 008f8a94 */
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


// ===== 008f8ae8  FUN_008f8ae8 =====

void FUN_008f8ae8(long *param_1)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  
  __ptr = (void *)param_1[1];
  lVar2 = param_1[2] + 1;
  lVar1 = (long)__ptr + 0x38;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 008f8b24 to 008f8b27 has its CatchHandler @ 008f8b6c */
    (**(code **)(*(long *)(lVar1 + -0x18) + 0x20))
              (lVar1,*(undefined8 *)(lVar1 + -0x10),*(undefined8 *)(lVar1 + -8));
    lVar1 = lVar1 + 0x40;
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 008f8bbc  FUN_008f8bbc =====

void FUN_008f8bbc(long *param_1)

{
                    /* try { // try from 008f8bcc to 008f8bcf has its CatchHandler @ 008f8c00 */
  FUN_008f0b4c();
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 008f8c28  FUN_008f8c28 =====

void FUN_008f8c28(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *__ptr;
  long *plVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  
  plVar3 = *(long **)(param_1 + 0x18);
  while (plVar3 != (long *)0x0) {
    plVar5 = (long *)plVar3[5];
    if (*plVar3 != 0) {
                    /* try { // try from 008f8c90 to 008f8c97 has its CatchHandler @ 008f8d10 */
      FUN_008f6d50(plVar3 + 1);
    }
    free(plVar3);
    plVar3 = plVar5;
  }
  __ptr = (undefined8 *)*(void **)(param_1 + 0x28);
  while (__ptr != (undefined8 *)0x0) {
    pvVar6 = (void *)*__ptr;
    plVar3 = (long *)__ptr[1];
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
                    /* try { // try from 008f8cdc to 008f8cdf has its CatchHandler @ 008f8cf4 */
        <alloc::sync::[n]::alloc::sync::Arc<std::sync::poison::mutex::Mutex<futures_channel::mpsc::SenderTask>>>
        ::drop_slow();
      }
    }
    free(__ptr);
    __ptr = (undefined8 *)pvVar6;
  }
  if (*(long *)(param_1 + 0x48) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x008f8c68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x48) + 0x18))(*(undefined8 *)(param_1 + 0x50));
  return;
}


// ===== 008f8d50  FUN_008f8d50 =====

void FUN_008f8d50(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)param_1[1];
  pcVar1 = (code *)*puVar2;
  if (pcVar1 != (code *)0x0) {
                    /* try { // try from 008f8d74 to 008f8d7b has its CatchHandler @ 008f8dac */
    (*pcVar1)(*param_1);
  }
  if (puVar2[1] != 0) {
    free((void *)*param_1);
    return;
  }
  return;
}


// ===== 008f8dcc  FUN_008f8dcc =====

void FUN_008f8dcc(undefined8 *param_1)

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


// ===== 008f8e3c  FUN_008f8e3c =====

void FUN_008f8e3c(int *param_1,uint param_2)

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


// ===== 008f8eac  FUN_008f8eac =====

void FUN_008f8eac(long param_1)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    free(*(void **)(param_1 + 0x48));
  }
                    /* try { // try from 008f8edc to 008f8ee3 has its CatchHandler @ 008f8f6c */
  FUN_008f0b4c(param_1 + 0x18);
  if (*(long *)(param_1 + 0x18) != 0) {
    free(*(void **)(param_1 + 0x20));
  }
  __ptr = *(void **)(param_1 + 0x38);
  lVar2 = *(long *)(param_1 + 0x40) + 1;
  lVar1 = (long)__ptr + 0x38;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 008f8f24 to 008f8f27 has its CatchHandler @ 008f8f9c */
    (**(code **)(*(long *)(lVar1 + -0x18) + 0x20))
              (lVar1,*(undefined8 *)(lVar1 + -0x10),*(undefined8 *)(lVar1 + -8));
    lVar1 = lVar1 + 0x40;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 008f8fec  FUN_008f8fec =====

void FUN_008f8fec(undefined8 *param_1)

{
  code *pcVar1;
  void *__ptr;
  undefined8 *puVar2;
  
  __ptr = (void *)*param_1;
  if (__ptr != (void *)0x0) {
    puVar2 = (undefined8 *)param_1[1];
    pcVar1 = (code *)*puVar2;
    if (pcVar1 != (code *)0x0) {
                    /* try { // try from 008f9014 to 008f901b has its CatchHandler @ 008f904c */
      (*pcVar1)(__ptr);
    }
    if (puVar2[1] != 0) {
      free(__ptr);
    }
  }
  free(param_1);
  return;
}


// ===== 008f9080  FUN_008f9080 =====

void FUN_008f9080(void *param_1)

{
  if (param_1 != (void *)0x0) {
                    /* try { // try from 008f9090 to 008f9097 has its CatchHandler @ 008f90bc */
    FUN_008f096c();
    free(param_1);
    return;
  }
  return;
}


// ===== 008f90d8  FUN_008f90d8 =====

void FUN_008f90d8(ulong param_1)

{
  long local_18;
  
  if ((1 < (param_1 & 3) - 2) && ((param_1 & 3) != 0)) {
    local_18 = param_1 - 1;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
  }
  return;
}


// ===== 008f9120  FUN_008f9120 =====

void FUN_008f9120(long param_1)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    free(*(void **)(param_1 + 0x48));
  }
                    /* try { // try from 008f9150 to 008f9157 has its CatchHandler @ 008f91e4 */
  FUN_008f0a90(param_1 + 0x18);
  if (*(long *)(param_1 + 0x18) != 0) {
    free(*(void **)(param_1 + 0x20));
  }
  __ptr = *(void **)(param_1 + 0x38);
  lVar2 = *(long *)(param_1 + 0x40) + 1;
  lVar1 = (long)__ptr + 0x38;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 008f9198 to 008f919b has its CatchHandler @ 008f9214 */
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


// ===== 008f9268  FUN_008f9268 =====

void FUN_008f9268(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 008f9280  <hyper::error::hyper::error::Error>::is_timeout =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper::error::hyper::error::Error>::is_timeout */

bool __rustcall <hyper::error::hyper::error::Error>::is_timeout(long *param_1)

{
  bool bVar1;
  long lVar2;
  undefined1 auVar3 [16];
  long local_50;
  long lStack_48;
  
  lVar2 = *(long *)*param_1;
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    auVar3._8_8_ = ((long *)*param_1)[1];
    auVar3._0_8_ = lVar2;
    do {
      (**(code **)(auVar3._8_8_ + 0x38))(&local_50,auVar3._0_8_);
      bVar1 = local_50 == -0x346dfb042a9caef5 && lStack_48 == 0x2dbe4c3c5a26b6eb;
      if (local_50 == -0x346dfb042a9caef5 && lStack_48 == 0x2dbe4c3c5a26b6eb) {
        return bVar1;
      }
      auVar3 = (**(code **)(auVar3._8_8_ + 0x30))(auVar3._0_8_);
    } while (auVar3._0_8_ != 0);
  }
  return bVar1;
}


// ===== 008f9328  <hyper::error::hyper::error::Error>::new_closed =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper::error::hyper::error::Error>::new_closed */

void __rustcall <hyper::error::hyper::error::Error>::new_closed(void)

{
  undefined8 *puVar1;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)FUN_004b25a4(0x18,8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 2) = 5;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x18);
}


// ===== 008f9364  <hyper::error::hyper::error::Error>::new_canceled =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper::error::hyper::error::Error>::new_canceled */

void __rustcall <hyper::error::hyper::error::Error>::new_canceled(void)

{
  undefined8 *puVar1;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)FUN_004b25a4(0x18,8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 2) = 4;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x18);
}


// ===== 008f93a0  <hyper::error::hyper::error::Error>::new_shutdown =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper::error::hyper::error::Error>::new_shutdown */

void __rustcall <hyper::error::hyper::error::Error>::new_shutdown(undefined8 param_1)

{
  undefined8 *puVar1;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)FUN_004b25a4(0x18,8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 2) = 9;
    FUN_008f8378(puVar1,param_1);
    return;
  }
                    /* try { // try from 008f93e0 to 008f93eb has its CatchHandler @ 008f93f0 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x18);
}


// ===== 008f9408  <hyper::error::hyper::error::Error>::new_too_large =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper::error::hyper::error::Error>::new_too_large */

void __rustcall <hyper::error::hyper::error::Error>::new_too_large(void)

{
  undefined8 *puVar1;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)FUN_004b25a4(0x18,8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    *(undefined2 *)(puVar1 + 2) = 0x800;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x18);
}


// ===== 008f9444  <hyper::error::hyper::error::Error>::new_incomplete =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper::error::hyper::error::Error>::new_incomplete */

void __rustcall <hyper::error::hyper::error::Error>::new_incomplete(void)

{
  undefined8 *puVar1;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)FUN_004b25a4(0x18,8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 2) = 2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x18);
}


// ===== 008f9480  <hyper::error::hyper::error::Error>::new_version_h2 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper::error::hyper::error::Error>::new_version_h2 */

void __rustcall <hyper::error::hyper::error::Error>::new_version_h2(void)

{
  undefined8 *puVar1;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)FUN_004b25a4(0x18,8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    *(undefined2 *)(puVar1 + 2) = 0x500;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x18);
}


// ===== 008f94bc  <hyper::error::hyper::error::Error>::new_body_write_aborted =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper::error::hyper::error::Error>::new_body_write_aborted */

void __rustcall <hyper::error::hyper::error::Error>::new_body_write_aborted(void)

{
  undefined8 *puVar1;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)FUN_004b25a4(0x18,8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    *(undefined2 *)(puVar1 + 2) = 0x101;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x18);
}


// ===== 008f94f8  <hyper::error::hyper::error::Error>::new_unexpected_message =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper::error::hyper::error::Error>::new_unexpected_message */

void __rustcall <hyper::error::hyper::error::Error>::new_unexpected_message(void)

{
  undefined8 *puVar1;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)FUN_004b25a4(0x18,8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 2) = 3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x18);
}


// ===== 008f9534  <hyper::error::hyper::error::Error>::new =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper::error::hyper::error::Error>::new */

void __rustcall <hyper::error::hyper::error::Error>::new(undefined1 param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)FUN_004b25a4(0x18,8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 2) = param_1;
    *(undefined1 *)((long)puVar1 + 0x11) = param_2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x18);
}


// ===== 008f9580  <hyper::error::hyper::error::Error>::new_io =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper::error::hyper::error::Error>::new_io */

void __rustcall <hyper::error::hyper::error::Error>::new_io(undefined8 param_1)

{
  undefined8 *puVar1;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)FUN_004b25a4(0x18,8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 2) = 6;
    FUN_008f8378(puVar1,param_1);
    return;
  }
                    /* try { // try from 008f95c0 to 008f95cb has its CatchHandler @ 008f95d0 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x18);
}


// ===== 008f95e8  <hyper::error::hyper::error::Error>::new_user =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper::error::hyper::error::Error>::new_user */

void __rustcall <hyper::error::hyper::error::Error>::new_user(undefined1 param_1)

{
  undefined8 *puVar1;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)FUN_004b25a4(0x18,8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 2) = 1;
    *(undefined1 *)((long)puVar1 + 0x11) = param_1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x18);
}


// ===== 008f9634  FUN_008f9634 =====

byte FUN_008f9634(long param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong *puVar5;
  byte bVar6;
  byte bVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 unaff_x22;
  long lVar11;
  undefined1 auVar12 [16];
  int *local_60;
  byte local_58;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    lVar11 = *(long *)(param_1 + 8);
    piVar1 = (int *)(lVar11 + 0x10);
    do {
      if (*piVar1 != 0) {
        ClearExclusiveLocal();
        <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                  (lVar11 + 0x10);
        uVar8 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
        puVar5 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
        goto joined_r0x008f97e0;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar8 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
    puVar5 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
joined_r0x008f97e0:
    PTR_GLOBAL_PANIC_COUNT_00b00bf0 = (undefined *)puVar5;
    if ((uVar8 & 0x7fffffffffffffff) == 0) {
      bVar7 = 0;
      cVar3 = *(char *)(lVar11 + 0x14);
    }
    else {
      bVar7 = std::panicking::panic_count::is_zero_slow_path();
      bVar7 = bVar7 ^ 1;
      cVar3 = *(char *)(lVar11 + 0x14);
    }
    if (cVar3 != '\0') {
      local_60 = piVar1;
      local_58 = bVar7;
                    /* try { // try from 008f9810 to 008f9833 has its CatchHandler @ 008f9860 */
                    /* WARNING: Subroutine does not return */
      core::result::unwrap_failed
                ("called `Result::unwrap()` on an `Err` value",0x2b,&local_60,&PTR_FUN_00aef780,
                 &PTR_s__root__cargo_registry_src_index__00aef7a0);
    }
    bVar6 = *(byte *)(lVar11 + 0x28);
    if ((bVar6 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x10) = 0;
      if ((((bVar7 & 1) == 0) && ((*puVar5 & 0x7fffffffffffffff) != 0)) &&
         (uVar8 = std::panicking::panic_count::is_zero_slow_path(), (uVar8 & 1) == 0)) {
        *(undefined1 *)(lVar11 + 0x14) = 1;
      }
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = 0;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 != 2) goto LAB_008f96f8;
    }
    else {
      if (param_2 == (undefined8 *)0x0) {
        uVar10 = 0;
        lVar9 = *(long *)(lVar11 + 0x18);
      }
      else {
                    /* try { // try from 008f96b4 to 008f96b7 has its CatchHandler @ 008f9844 */
        auVar12 = (*(code *)**(undefined8 **)*param_2)(((undefined8 *)*param_2)[1]);
        unaff_x22 = auVar12._8_8_;
        uVar10 = auVar12._0_8_;
        lVar9 = *(long *)(lVar11 + 0x18);
      }
      if (lVar9 != 0) {
                    /* try { // try from 008f9714 to 008f971f has its CatchHandler @ 008f9838 */
        (**(code **)(lVar9 + 0x18))(bVar6,*(undefined8 *)(lVar11 + 0x20));
      }
      *(undefined8 *)(lVar11 + 0x18) = uVar10;
      *(undefined8 *)(lVar11 + 0x20) = unaff_x22;
      if ((((bVar7 & 1) == 0) && ((*puVar5 & 0x7fffffffffffffff) != 0)) &&
         (uVar8 = std::panicking::panic_count::is_zero_slow_path(bVar6), (uVar8 & 1) == 0)) {
        *(undefined1 *)(lVar11 + 0x14) = 1;
      }
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
        return 1;
      }
    }
    <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(bVar6,piVar1);
  }
  else {
LAB_008f96f8:
    bVar6 = 0;
  }
  return bVar6;
}


// ===== 008f9878  FUN_008f9878 =====

void FUN_008f9878(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  ulong *puVar1;
  int *piVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  code *pcVar7;
  byte bVar8;
  int iVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined1 uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  int *local_70;
  long *plStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
                    /* try { // try from 008f989c to 008f98a3 has its CatchHandler @ 008f9b70 */
  iVar9 = FUN_008f9634(param_2,0);
  if (iVar9 != 0) {
    uVar17 = param_3[1];
    uVar16 = *param_3;
    uVar19 = param_3[3];
    uVar18 = param_3[2];
    *(undefined1 *)(param_1 + 4) = 0;
    param_1[1] = uVar17;
    *param_1 = uVar16;
    param_1[3] = uVar19;
    param_1[2] = uVar18;
    return;
  }
  uVar17 = param_3[1];
  uVar16 = *param_3;
  uVar19 = param_3[3];
  uVar18 = param_3[2];
  puVar1 = (ulong *)(*param_2 + 0x38);
  uVar11 = *puVar1;
  while ((long)uVar11 < 0) {
    if ((uVar11 & 0x7fffffffffffffff) == 0x7fffffffffffffff) {
                    /* try { // try from 008f9aa0 to 008f9ab7 has its CatchHandler @ 008f9bd8 */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("buffer space exhausted; sending this messages would overflow the state",0x46,
                 &PTR_s__root__cargo_registry_src_index__00aef7b8);
    }
    while (*puVar1 == uVar11) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar11 + 1 | 0x8000000000000000;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        lVar14 = *param_2;
        if ((uVar11 & 0x7fffffffffffffff) < *(ulong *)(lVar14 + 0x30)) goto LAB_008f9a24;
        lVar14 = param_2[1];
        piVar2 = (int *)(lVar14 + 0x10);
        goto LAB_008f994c;
      }
    }
    ClearExclusiveLocal();
    uVar11 = *puVar1;
  }
  uVar12 = 1;
  param_1[1] = uVar17;
  *param_1 = uVar16;
  param_1[3] = uVar19;
  param_1[2] = uVar18;
  goto LAB_008f9a84;
  while( true ) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar5) {
      *piVar2 = 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') break;
LAB_008f994c:
    if (*piVar2 != 0) {
      ClearExclusiveLocal();
      <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                (lVar14 + 0x10);
      break;
    }
  }
  puVar6 = PTR_GLOBAL_PANIC_COUNT_00b00bf0;
  if ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) == 0) {
    bVar8 = 0;
    cVar4 = *(char *)(lVar14 + 0x14);
  }
  else {
                    /* try { // try from 008f9ad0 to 008f9ad3 has its CatchHandler @ 008f9bd8 */
    bVar8 = std::panicking::panic_count::is_zero_slow_path();
    bVar8 = bVar8 ^ 1;
    cVar4 = *(char *)(lVar14 + 0x14);
  }
  if (cVar4 != '\0') {
    uVar11 = (ulong)plStack_68 >> 8;
    plStack_68 = (long *)CONCAT71((int7)uVar11,bVar8);
                    /* try { // try from 008f9ae8 to 008f9b0b has its CatchHandler @ 008f9bb0 */
    local_70 = piVar2;
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              ("called `Result::unwrap()` on an `Err` value",0x2b,&local_70,&PTR_FUN_00aef780,
               &PTR_s__root__cargo_registry_src_index__00aef7d0);
  }
  if (*(long *)(lVar14 + 0x18) != 0) {
                    /* try { // try from 008f998c to 008f998f has its CatchHandler @ 008f9b54 */
    (**(code **)(*(long *)(lVar14 + 0x18) + 0x18))(*(undefined8 *)(lVar14 + 0x20));
  }
  *(undefined8 *)(lVar14 + 0x18) = 0;
  *(undefined1 *)(lVar14 + 0x28) = 1;
                    /* try { // try from 008f9b30 to 008f9b4f has its CatchHandler @ 008f9bd8 */
  if ((((bVar8 & 1) == 0) && ((*(ulong *)puVar6 & 0x7fffffffffffffff) != 0)) &&
     (uVar11 = std::panicking::panic_count::is_zero_slow_path(), (uVar11 & 1) == 0)) {
    *(undefined1 *)(lVar14 + 0x14) = 1;
  }
  do {
    iVar9 = *piVar2;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar5) {
      *piVar2 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar9 == 2) {
                    /* try { // try from 008f9b10 to 008f9b17 has its CatchHandler @ 008f9bd8 */
    <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(piVar2);
  }
  plStack_68 = (long *)param_2[1];
  do {
    lVar14 = *plStack_68;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
    if (bVar5) {
      *plStack_68 = lVar14 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar14 < 0) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x8f9b30);
    (*pcVar7)();
  }
  lVar15 = *param_2;
  local_70 = (int *)0x0;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar10 = (undefined8 *)FUN_004b25a4(0x10,8);
  if (puVar10 == (undefined8 *)0x0) {
                    /* try { // try from 008f9b1c to 008f9b2b has its CatchHandler @ 008f9b84 */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x10);
  }
  plVar3 = (long *)(lVar15 + 0x20);
  puVar10[1] = plStack_68;
  *puVar10 = local_70;
  do {
    plVar13 = (long *)*plVar3;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar5) {
      *plVar3 = (long)puVar10;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  *plVar13 = (long)puVar10;
  lVar14 = *param_2;
  *(byte *)(param_2 + 2) = (byte)((ulong)*(undefined8 *)(lVar15 + 0x38) >> 0x3f);
LAB_008f9a24:
  local_48 = 0;
  local_70 = (int *)0x1;
  plStack_68 = (long *)uVar16;
  uStack_60 = uVar17;
  local_58 = uVar18;
  uStack_50 = uVar19;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar10 = (undefined8 *)FUN_004b25a4(0x30,8);
  if (puVar10 == (undefined8 *)0x0) {
                    /* try { // try from 008f9abc to 008f9acb has its CatchHandler @ 008f9bc4 */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x30);
  }
  plVar3 = (long *)(lVar14 + 0x10);
  puVar10[1] = plStack_68;
  *puVar10 = local_70;
  puVar10[3] = local_58;
  puVar10[2] = uStack_60;
  puVar10[5] = local_48;
  puVar10[4] = uStack_50;
  do {
    lVar15 = *plVar3;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar5) {
      *plVar3 = (long)puVar10;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  *(undefined8 **)(lVar15 + 0x28) = puVar10;
  <futures_core::task::__internal::atomic_waker::futures_core::task::__internal::atomic_waker::AtomicWaker>
  ::wake(lVar14 + 0x48);
  uVar12 = 2;
LAB_008f9a84:
  *(undefined1 *)(param_1 + 4) = uVar12;
  return;
}


// ===== 008f9bf0  FUN_008f9bf0 =====

void FUN_008f9bf0(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  uint local_a8 [2];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long *local_58;
  long *local_50;
  byte local_48;
  
  lVar7 = *param_2;
  if (lVar7 == 0) {
LAB_008f9d70:
    *param_1 = 0;
    return;
  }
  FUN_008f76fc(local_a8,lVar7 + 0x10);
  if ((local_a8[0] & 1) == 0) {
    if (*(long *)(lVar7 + 0x38) != 0) {
      *param_1 = 2;
      return;
    }
    plVar5 = (long *)*param_2;
    if (plVar5 != (long *)0x0) {
      do {
        lVar7 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 + -1 == 0) {
        DataMemoryBarrier(2,1);
                    /* try { // try from 008f9d64 to 008f9d6b has its CatchHandler @ 008f9e04 */
        <alloc::sync::[n]::alloc::sync::Arc<futures_channel::mpsc::BoundedInner<core::result::Result<bytes::bytes::Bytes,hyper::error::Error>>>>
        ::drop_slow(param_2);
      }
    }
    *param_2 = 0;
    goto LAB_008f9d70;
  }
  uStack_78 = uStack_98;
  local_80 = local_a0;
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
                    /* try { // try from 008f9c34 to 008f9c3b has its CatchHandler @ 008f9e20 */
  plVar5 = (long *)FUN_008f75d0(lVar7 + 0x20);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 2;
    do {
      local_58 = plVar5;
      if ((int)*plVar1 != 0) {
        ClearExclusiveLocal();
        <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                  (plVar5 + 2);
        break;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puVar4 = PTR_GLOBAL_PANIC_COUNT_00b00bf0;
    if ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) == 0) {
      local_48 = 0;
      cVar2 = *(char *)((long)plVar5 + 0x14);
    }
    else {
                    /* try { // try from 008f9d8c to 008f9d8f has its CatchHandler @ 008f9dfc */
      local_48 = std::panicking::panic_count::is_zero_slow_path();
      local_48 = local_48 ^ 1;
      cVar2 = *(char *)((long)plVar5 + 0x14);
    }
    if (cVar2 != '\0') {
                    /* try { // try from 008f9da4 to 008f9dc7 has its CatchHandler @ 008f9e28 */
      local_50 = plVar1;
                    /* WARNING: Subroutine does not return */
      core::result::unwrap_failed
                ("called `Result::unwrap()` on an `Err` value",0x2b,&local_50,&PTR_FUN_00aef780,
                 &PTR_s__root__cargo_registry_src_index__00aef7e8);
    }
                    /* try { // try from 008f9c80 to 008f9c87 has its CatchHandler @ 008f9e0c */
    <futures_channel::mpsc::[c]::futures_channel::mpsc::SenderTask>::notify(plVar5 + 3);
    if ((((local_48 & 1) == 0) && ((*(ulong *)puVar4 & 0x7fffffffffffffff) != 0)) &&
       (uVar6 = std::panicking::panic_count::is_zero_slow_path(), (uVar6 & 1) == 0)) {
      *(undefined1 *)((long)plVar5 + 0x14) = 1;
    }
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = 0;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar7 == 2) {
                    /* try { // try from 008f9dcc to 008f9df7 has its CatchHandler @ 008f9dfc */
      <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(plVar1);
    }
    do {
      lVar7 = *local_58;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(local_58,0x10);
      if (bVar3) {
        *local_58 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 008f9cc8 to 008f9ccf has its CatchHandler @ 008f9e20 */
      <alloc::sync::[n]::alloc::sync::Arc<std::sync::poison::mutex::Mutex<futures_channel::mpsc::SenderTask>>>
      ::drop_slow(&local_58);
    }
    lVar7 = *param_2;
    if (lVar7 == 0) goto LAB_008f9cec;
  }
  plVar5 = (long *)(lVar7 + 0x38);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = *plVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_008f9cec:
  *param_1 = 1;
  param_1[2] = uStack_78;
  param_1[1] = local_80;
  param_1[4] = uStack_68;
  param_1[3] = uStack_70;
  return;
}


// ===== 008f9e74  hyper::common::task::yield_now =====

/* WARNING: Unknown calling convention: __rustcall */
/* hyper::common::task::yield_now */

void __rustcall hyper::common::task::yield_now(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008f9e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x10))(((long *)*param_1)[1]);
  return;
}


// ===== 008f9e84  FUN_008f9e84 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f9e84(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029ff20;
  param_1[1] = _UNK_0029ff28;
  *param_1 = uVar1;
  return;
}


// ===== 008f9e98  <hyper::error::Error_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper::error::Error as core::fmt::Display>::fmt */

void __rustcall <hyper::error::Error_as_core::fmt::Display>::fmt(long *param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x008f9ec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_008f9ec8 + (ulong)(byte)""[*(byte *)(*param_1 + 0x10)] * 4))
            (param_2,param_1,
             "connection closed before message completedreceived unexpected message from connectionoperation was canceledchannel closederror reading a body from connectionerror writing a body to connectionerror shutting down connection"
             ,0x2a);
  return;
}


// ===== 008fa068  FUN_008fa068 =====

void FUN_008fa068(void)

{
  return;
}


// ===== 008fa074  FUN_008fa074 =====

void FUN_008fa074(void)

{
  return;
}


// ===== 008fa080  FUN_008fa080 =====

void FUN_008fa080(void)

{
  return;
}


// ===== 008fa08c  FUN_008fa08c =====

void FUN_008fa08c(undefined8 *param_1)

{
  undefined2 uVar1;
  void *__dest;
  undefined8 *puVar2;
  ulong __n;
  void *__src;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  void *pvStack_c8;
  ulong local_c0;
  undefined2 local_b8;
  undefined6 uStack_b6;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  uVar4 = param_1[10];
  __n = uVar4 * 4;
  if (uVar4 >> 0x3e != 0 || 0x7ffffffffffffffe < __n) {
    uVar3 = 0;
LAB_008fa0c8:
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar3,__n);
  }
  uVar1 = *(undefined2 *)(param_1 + 0xb);
  if (__n == 0) {
    __dest = (void *)0x2;
  }
  else {
    __src = (void *)param_1[9];
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar3 = 2;
    __dest = (void *)FUN_004b25a4(__n,2);
    if (__dest == (void *)0x0) goto LAB_008fa0c8;
    if (uVar4 != 0) {
      memcpy(__dest,__src,__n);
    }
  }
                    /* try { // try from 008fa11c to 008fa127 has its CatchHandler @ 008fa1f0 */
  FUN_008f0778(&local_68,param_1 + 3);
                    /* try { // try from 008fa128 to 008fa133 has its CatchHandler @ 008fa1dc */
  FUN_008f0664(&local_110,param_1 + 6);
  local_a0 = param_1[2];
  local_88 = local_58;
  uStack_90 = uStack_60;
  uStack_98 = local_68;
  uStack_a8 = param_1[1];
  local_b0 = *param_1;
  uStack_78 = uStack_108;
  local_80 = local_110;
  local_70 = local_100;
  uStack_f8 = local_68;
  uStack_e8 = local_58;
  local_f0 = uStack_60;
  uStack_d8 = uStack_108;
  uStack_e0 = local_110;
  local_d0 = local_100;
  local_110 = local_b0;
  uStack_108 = uStack_a8;
  local_100 = local_a0;
  pvStack_c8 = __dest;
  local_c0 = uVar4;
  local_b8 = uVar1;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar2 = (undefined8 *)FUN_004b25a4(0x60,8);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[5] = uStack_e8;
    puVar2[4] = local_f0;
    puVar2[7] = uStack_d8;
    puVar2[6] = uStack_e0;
    puVar2[9] = pvStack_c8;
    puVar2[8] = local_d0;
    puVar2[0xb] = CONCAT62(uStack_b6,local_b8);
    puVar2[10] = local_c0;
    puVar2[1] = uStack_108;
    *puVar2 = local_110;
    puVar2[3] = uStack_f8;
    puVar2[2] = local_100;
    return;
  }
                    /* try { // try from 008fa1cc to 008fa1d7 has its CatchHandler @ 008fa210 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x60);
}


// ===== 008fa228  FUN_008fa228 =====

void FUN_008fa228(undefined8 *param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,&DAT_00331258 + *(int *)(&DAT_00331258 + (ulong)*(byte *)*param_1 * 4),
             *(undefined8 *)(&DAT_00331228 + (ulong)*(byte *)*param_1 * 8));
  return;
}


// ===== 008fa254  FUN_008fa254 =====

void FUN_008fa254(undefined8 *param_1,undefined8 param_2)

{
  byte bVar1;
  byte *local_18;
  
  local_18 = (byte *)*param_1;
  bVar1 = *local_18 - 3;
  if (*local_18 < 3) {
    bVar1 = 4;
  }
  if (3 < bVar1) {
    if (5 < bVar1) {
      if (bVar1 == 6) {
        <core::fmt::[a]::core::fmt::Formatter>::write_str
                  (param_2,
                   "StatusTokenContentLengthInvalidTransferEncodingUnexpectedBodyWriteAbortedServiceNoUpgradeManualUpgradeDispatchGone"
                   ,6);
        return;
      }
      <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002a16c8,8);
      return;
    }
    if (bVar1 == 4) {
      <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
                (param_2,"Header",6,&local_18,&DAT_00aef8f8);
      return;
    }
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002a1738,8);
    return;
  }
  if (1 < bVar1) {
    if (bVar1 == 2) {
      <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"VersionH2",9);
      return;
    }
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"Uri",3);
    return;
  }
  if (bVar1 == 0) {
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"Method",6);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"Version",7);
  return;
}


// ===== 008fa350  FUN_008fa350 =====

void FUN_008fa350(undefined8 *param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,&DAT_00331288 + *(int *)(&DAT_00331288 + (ulong)*(byte *)*param_1 * 4),
             *(undefined8 *)(&DAT_00331270 + (ulong)*(byte *)*param_1 * 8));
  return;
}


// ===== 008fa37c  FUN_008fa37c =====

void FUN_008fa37c(undefined8 *param_1)

{
  <http::header::value::HeaderValue_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 008fa384  FUN_008fa384 =====

void FUN_008fa384(undefined8 *param_1)

{
  <httparse::Header_as_core::fmt::Debug>::fmt(*(undefined8 *)*param_1);
  return;
}


// ===== 008fa390  <hyper::error::Error_as_core::convert::From<hyper::error::Parse>>::from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper::error::Error as core::convert::From<hyper::error::Parse>>::from */

void __rustcall
<hyper::error::Error_as_core::convert::From<hyper::error::Parse>>::from(undefined1 param_1)

{
  undefined8 *puVar1;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)FUN_004b25a4(0x18,8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 2) = 0;
    *(undefined1 *)((long)puVar1 + 0x11) = param_1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x18);
}


// ===== 008fa3d8  <hyper::error::TimedOut_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper::error::TimedOut as core::fmt::Display>::fmt */

void __rustcall
<hyper::error::TimedOut_as_core::fmt::Display>::fmt(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"operation timed out",0x13);
  return;
}


// ===== 008fa3ec  <hyper::error::Error_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper::error::Error as core::fmt::Debug>::fmt */

void __rustcall
<hyper::error::Error_as_core::fmt::Debug>::fmt(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 auStack_38 [24];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple
            (auStack_38,param_2,
             "hyper::ErrorParseIncompleteMessageUnexpectedMessageChannelClosedIoBodyBodyWrite",0xc);
  plVar1 = (long *)*param_1;
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::field
            (auStack_38,plVar1 + 2,&DAT_00aef878);
  if (*plVar1 != 0) {
    <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::field
              (auStack_38,plVar1,&PTR_FUN_00aef898);
  }
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::finish(auStack_38);
  return;
}


// ===== 008fa468  FUN_008fa468 =====

void FUN_008fa468(byte *param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x008fa494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_008fa498 + (ulong)(byte)(&DAT_00330ce8)[*param_1] * 4))(param_1 + 1,param_2);
  return;
}


// ===== 008fa5b0  FUN_008fa5b0 =====

void FUN_008fa5b0(undefined8 *param_1,undefined8 *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  
  plVar9 = (long *)*param_2;
  puVar1 = (ulong *)(plVar9 + 8);
  uVar7 = *puVar1;
  if (*puVar1 != (plVar9[6] ^ 0x7fffffffffffffffU)) {
    do {
      while (uVar8 = *puVar1, uVar8 == uVar7) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          do {
            lVar6 = *plVar9;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *plVar9 = lVar6 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar6 < 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x8fa69c);
            (*pcVar4)();
          }
          __rustc::__rust_no_alloc_shim_is_unstable_v2();
          puVar5 = (undefined8 *)FUN_004b25a4(0x30,8);
          if (puVar5 == (undefined8 *)0x0) {
                    /* try { // try from 008fa68c to 008fa697 has its CatchHandler @ 008fa69c */
                    /* WARNING: Subroutine does not return */
            alloc::alloc::handle_alloc_error(8,0x30);
          }
          *(undefined4 *)(puVar5 + 2) = 0;
          *(undefined1 *)((long)puVar5 + 0x14) = 0;
          puVar5[3] = 0;
          *(undefined1 *)(puVar5 + 5) = 0;
          puVar5[1] = 1;
          *puVar5 = 1;
          *param_1 = plVar9;
          param_1[1] = puVar5;
          *(undefined1 *)(param_1 + 2) = 0;
          return;
        }
      }
      ClearExclusiveLocal();
      uVar7 = uVar8;
    } while (uVar8 != (plVar9[6] ^ 0x7fffffffffffffffU));
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic
            ("cannot clone `Sender` -- too many outstanding senders",0x35,
             &PTR_s__root__cargo_registry_src_index__00aef990);
}


// ===== 008fa6cc  FUN_008fa6cc =====

void FUN_008fa6cc(long *param_1,long *param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  long local_68;
  long local_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long local_40;
  
  FUN_008f9bf0(&local_88,param_2);
  if (local_88 != 2) {
    lStack_58 = lStack_80;
    local_60 = local_88;
    lStack_48 = lStack_70;
    lStack_50 = local_78;
    local_40 = local_68;
    if (local_88 == 0) {
      plVar3 = (long *)*param_2;
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
                    /* try { // try from 008fa76c to 008fa773 has its CatchHandler @ 008fa7a8 */
          <alloc::sync::[n]::alloc::sync::Arc<futures_channel::mpsc::BoundedInner<core::result::Result<bytes::bytes::Bytes,hyper::error::Error>>>>
          ::drop_slow(param_2);
        }
      }
      *param_2 = 0;
    }
    param_1[1] = lStack_58;
    *param_1 = local_60;
    param_1[3] = lStack_48;
    param_1[2] = lStack_50;
    param_1[4] = local_40;
    return;
  }
  if (*param_2 != 0) {
    <futures_core::task::__internal::atomic_waker::futures_core::task::__internal::atomic_waker::AtomicWaker>
    ::register(*param_2 + 0x48,*param_3);
    FUN_008f9bf0(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00aef9a8);
}


// ===== 008fa7d0  FUN_008fa7d0 =====

/* WARNING: Removing unreachable block (ram,0x008fa978) */

void FUN_008fa7d0(long *param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *local_78;
  byte local_70 [32];
  long *local_38;
  
  lVar9 = *param_1;
  if (lVar9 != 0) {
    puVar1 = (ulong *)(lVar9 + 0x38);
    if ((long)*puVar1 < 0) {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 & 0x7fffffffffffffff;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar6 = (long *)FUN_008f75d0(lVar9 + 0x20);
    puVar5 = PTR_GLOBAL_PANIC_COUNT_00b00bf0;
    while (plVar6 != (long *)0x0) {
      plVar2 = plVar6 + 2;
      do {
        local_38 = plVar6;
        if ((int)*plVar2 != 0) {
          ClearExclusiveLocal();
          <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                    (plVar6 + 2);
          break;
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((*(ulong *)puVar5 & 0x7fffffffffffffff) == 0) {
        local_70[0] = 0;
        cVar3 = *(char *)((long)plVar6 + 0x14);
      }
      else {
                    /* try { // try from 008fa8c8 to 008fa903 has its CatchHandler @ 008fa9dc */
        local_70[0] = std::panicking::panic_count::is_zero_slow_path();
        local_70[0] = local_70[0] ^ 1;
        cVar3 = *(char *)((long)plVar6 + 0x14);
      }
      if (cVar3 != '\0') {
                    /* try { // try from 008fa9a4 to 008fa9c7 has its CatchHandler @ 008faa1c */
        local_78 = plVar2;
                    /* WARNING: Subroutine does not return */
        core::result::unwrap_failed
                  ("called `Result::unwrap()` on an `Err` value",0x2b,&local_78,&PTR_FUN_00aef780,
                   &PTR_s__root__cargo_registry_src_index__00aef800);
      }
                    /* try { // try from 008fa874 to 008fa87b has its CatchHandler @ 008fa9e8 */
      <futures_channel::mpsc::[c]::futures_channel::mpsc::SenderTask>::notify(plVar6 + 3);
      if ((((local_70[0] & 1) == 0) && ((*(ulong *)puVar5 & 0x7fffffffffffffff) != 0)) &&
         (uVar7 = std::panicking::panic_count::is_zero_slow_path(), (uVar7 & 1) == 0)) {
        *(undefined1 *)((long)plVar6 + 0x14) = 1;
      }
      do {
        lVar8 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = 0;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((int)lVar8 == 2) {
        <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(plVar2);
      }
      do {
        lVar8 = *local_38;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(local_38,0x10);
        if (bVar4) {
          *local_38 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 + -1 == 0) {
        DataMemoryBarrier(2,1);
        <alloc::sync::[n]::alloc::sync::Arc<std::sync::poison::mutex::Mutex<futures_channel::mpsc::SenderTask>>>
        ::drop_slow(&local_38);
      }
      plVar6 = (long *)FUN_008f75d0(lVar9 + 0x20);
    }
    if (*param_1 != 0) {
      do {
        FUN_008f9bf0(&local_78,param_1);
        if (local_78 == (long *)0x2) {
          if (*param_1 == 0) {
                    /* try { // try from 008fa9cc to 008fa9d7 has its CatchHandler @ 008fa9fc */
                    /* WARNING: Subroutine does not return */
            core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00aef9c0);
          }
          if (*(long *)(*param_1 + 0x38) == 0) {
            return;
          }
                    /* try { // try from 008fa950 to 008fa953 has its CatchHandler @ 008fa9e4 */
          std::thread::functions::yield_now();
        }
        else if (local_78 == (long *)0x0) {
          return;
        }
        if (local_78 == (long *)0x1) {
          FUN_008f88d0(local_70);
        }
      } while( true );
    }
  }
  return;
}


// ===== 008faa5c  FUN_008faa5c =====

undefined8 FUN_008faa5c(void)

{
  return 0;
}


// ===== 008faa64  FUN_008faa64 =====

undefined1  [16] FUN_008faa64(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x28;
  auVar1._0_8_ = "description() is deprecated; use Display";
  return auVar1;
}


// ===== 008faa74  FUN_008faa74 =====

undefined8 FUN_008faa74(void)

{
  return 0;
}


// ===== 008faa7c  FUN_008faa7c =====

void FUN_008faa7c(void)

{
  return;
}


// ===== 008faa80  FUN_008faa80 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008faa80(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a0db0;
  param_1[1] = _UNK_002a0db8;
  *param_1 = uVar1;
  return;
}


// ===== 008faa94  FUN_008faa94 =====

void FUN_008faa94(ulong *param_1)

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


// ===== 008faae4  FUN_008faae4 =====

void FUN_008faae4(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  void *__ptr;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = *param_2;
  if (lVar2 == -2) {
    __ptr = (void *)param_3[1];
    lVar3 = *param_2;
    lVar4 = param_2[3];
    lVar1 = param_2[2];
    lVar2 = param_3[2] + 1;
    param_1[1] = param_2[1];
    *param_1 = lVar3;
    param_1[3] = lVar4;
    param_1[2] = lVar1;
    lVar3 = (long)__ptr + 0x18;
    while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 008fab34 to 008fab37 has its CatchHandler @ 008fac08 */
      (**(code **)(*(long *)(lVar3 + -0x18) + 0x20))
                (lVar3,*(undefined8 *)(lVar3 + -0x10),*(undefined8 *)(lVar3 + -8));
      lVar3 = lVar3 + 0x28;
    }
    lVar2 = *param_3;
  }
  else {
    lVar4 = *param_3;
    lVar1 = param_3[2];
    lVar3 = param_2[3];
    param_1[1] = param_3[1];
    *param_1 = lVar4;
    param_1[2] = lVar1;
    *(char *)(param_1 + 3) = (char)lVar3;
    if (lVar2 == -1) {
      return;
    }
    __ptr = (void *)param_2[1];
    lVar3 = param_2[2] + 1;
    lVar1 = (long)__ptr + 0x18;
    while (lVar3 = lVar3 + -1, lVar3 != 0) {
                    /* try { // try from 008fab84 to 008fab87 has its CatchHandler @ 008fabd0 */
      (**(code **)(*(long *)(lVar1 + -0x18) + 0x20))
                (lVar1,*(undefined8 *)(lVar1 + -0x10),*(undefined8 *)(lVar1 + -8));
      lVar1 = lVar1 + 0x28;
    }
  }
  if (lVar2 == 0) {
    return;
  }
  free(__ptr);
  return;
}


// ===== 008fac5c  <hyper::proto::h1::encode::[0]::hyper::proto::h1::encode::ChunkSize>::new =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper::proto::h1::encode::[0]::hyper::proto::h1::encode::ChunkSize>::new */

void __rustcall
<hyper::proto::h1::encode::[0]::hyper::proto::h1::encode::ChunkSize>::new
          (undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined1 *local_30;
  undefined *puStack_28;
  undefined1 uStack_1;
  
  local_30 = (undefined1 *)&local_50;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  puStack_28 = PTR_fmt_00b00c38;
  local_50 = param_2;
  iVar1 = core::fmt::write(&local_48,&DAT_00aefa70,&DAT_002bcc4a,&local_30);
  if (iVar1 == 0) {
    param_1[1] = uStack_40;
    *param_1 = local_48;
    *(undefined4 *)(param_1 + 2) = local_38;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::result::unwrap_failed
            ("CHUNK_SIZE_MAX_BYTES should fit any usizeinvalid header nameinvalid header valueinvalid new lineinvalid response statusinvalid tokentoo many headersinvalid HTTP version"
             ,0x29,&uStack_1,&DAT_00aefa30,&PTR_s__root__cargo_registry_src_index__00aefaa0);
}


// ===== 008facf0  FUN_008facf0 =====

void FUN_008facf0(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_cd0;
  undefined8 auStack_cc8 [400];
  ulong local_48;
  
  local_cd0 = 0;
  if (param_3 < 0x65) {
    local_cd0 = 0;
    if (param_3 != 0) {
      puVar2 = auStack_cc8;
      uVar5 = param_3;
      do {
        uVar6 = *param_2;
        uVar8 = param_2[3];
        uVar7 = param_2[2];
        uVar5 = uVar5 - 1;
        puVar2[1] = param_2[1];
        *puVar2 = uVar6;
        puVar2[3] = uVar8;
        puVar2[2] = uVar7;
        puVar2 = puVar2 + 4;
      } while (uVar5 != 0);
    }
    local_48 = param_3;
    memcpy(param_1,&local_cd0,0xc90);
    return;
  }
  uVar5 = param_3 * 0x20;
  uVar6 = 0;
  if ((param_3 >> 0x3b == 0) && (uVar5 < 0x7ffffffffffffff9)) {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar6 = 8;
    puVar2 = (undefined8 *)FUN_004b25a4(uVar5,8);
    if (puVar2 != (undefined8 *)0x0) {
      lVar4 = param_3 - 1;
      puVar1 = puVar2;
      do {
        puVar3 = puVar1;
        uVar6 = *param_2;
        uVar8 = param_2[3];
        uVar7 = param_2[2];
        lVar4 = lVar4 + -1;
        puVar3[1] = param_2[1];
        *puVar3 = uVar6;
        puVar3[3] = uVar8;
        puVar3[2] = uVar7;
        puVar1 = puVar3 + 4;
      } while (lVar4 != 0);
      uVar7 = param_2[1];
      uVar6 = *param_2;
      uVar9 = param_2[3];
      uVar8 = param_2[2];
      param_1[0x191] = param_3;
      *param_1 = 1;
      param_1[1] = param_3;
      puVar3[5] = uVar7;
      puVar3[4] = uVar6;
      puVar3[7] = uVar9;
      puVar3[6] = uVar8;
      param_1[2] = puVar2;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar6,uVar5);
}


// ===== 008fae04  FUN_008fae04 =====

void FUN_008fae04(void)

{
  return;
}


// ===== 008fae08  FUN_008fae08 =====

void FUN_008fae08(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  param_1[2] = param_4;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_00aefa08;
  param_1[1] = param_3;
  return;
}


// ===== 008fae1c  FUN_008fae1c =====

undefined8 FUN_008fae1c(void)

{
  return 0;
}


// ===== 008fae24  hyper::proto::h1::encode::allowed_trailer_field_map =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* hyper::proto::h1::encode::allowed_trailer_field_map */

void __rustcall hyper::proto::h1::encode::allowed_trailer_field_map(long *param_1,long param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *__ptr;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  byte *pbVar16;
  void *__src;
  long lVar17;
  byte bVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long local_110;
  long lStack_108;
  long local_100;
  long lStack_f8;
  long local_e8;
  undefined8 *local_e0;
  long lStack_d8;
  byte *local_d0;
  byte *pbStack_c8;
  byte *local_c0;
  byte *pbStack_b8;
  undefined8 local_b0;
  byte *pbStack_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined2 local_90;
  byte *local_78;
  
  uVar13 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00bf8;
  if (uVar13 == 0) {
    uVar13 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
             lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00bf8);
    plVar8 = (long *)pthread_getspecific((pthread_key_t)uVar13);
  }
  else {
    plVar8 = (long *)pthread_getspecific((pthread_key_t)uVar13);
  }
  puVar4 = (undefined8 *)PTR_DAT_00aefad0;
  uVar5 = _UNK_00aefad8;
  local_110 = _DAT_00aefae0;
  lStack_108 = _UNK_00aefae8;
  if (plVar8 < (long *)0x2) {
    plVar8 = (long *)FUN_008f0e64(uVar13 & 0xffffffff,plVar8,0);
    puVar4 = (undefined8 *)PTR_DAT_00aefad0;
    uVar5 = _UNK_00aefad8;
    local_110 = _DAT_00aefae0;
    lStack_108 = _UNK_00aefae8;
  }
  PTR_DAT_00aefad0 = (undefined *)puVar4;
  _UNK_00aefad8 = uVar5;
  _DAT_00aefae0 = local_110;
  _UNK_00aefae8 = lStack_108;
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::thread::local::panic_access_error(&PTR_s__nix_store_8006w282fgsx3273c878b_00aef538);
  }
  lStack_f8 = plVar8[1];
  local_100 = *plVar8;
  *plVar8 = *plVar8 + 1;
  if (*(long *)(param_2 + 0x10) != 0) {
    lVar17 = *(long *)(param_2 + 8);
    lVar14 = lVar17 + *(long *)(param_2 + 0x10) * 0x28;
    do {
      local_c0 = *(byte **)(lVar17 + 8);
      pbStack_c8 = *(byte **)(lVar17 + 0x10);
      pbVar16 = local_c0;
      for (pbVar3 = pbStack_c8; pbVar3 != (byte *)0x0; pbVar3 = pbVar3 + -1) {
        if ((*pbVar16 != 9) && (0x5e < *pbVar16 - 0x20)) goto LAB_008fb1c0;
        pbVar16 = pbVar16 + 1;
      }
      local_d0 = (byte *)0x0;
      local_b0 = 0;
      local_a0 = 0x2c0000002c;
      local_98 = 1;
      local_90 = 1;
                    /* try { // try from 008faee8 to 008faef3 has its CatchHandler @ 008fb288 */
      pbStack_b8 = pbStack_c8;
      pbStack_a8 = pbStack_c8;
      FUN_008f0280(&local_e8,&local_d0);
      __ptr = local_e0;
      lVar6 = local_e8;
      if (lStack_d8 != 0) {
        pbVar16 = (byte *)local_e0[1];
        if ((long)pbVar16 < 0) {
LAB_008fb208:
          uVar20 = 0;
          pbVar16 = local_78;
LAB_008fb20c:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 008fb20c to 008fb20f has its CatchHandler @ 008fb290 */
          alloc::raw_vec::handle_error(uVar20,pbVar16);
        }
        puVar1 = local_e0 + lStack_d8 * 2;
        __src = (void *)*local_e0;
        puVar15 = local_e0;
LAB_008faf20:
        if (pbVar16 == (byte *)0x0) {
          local_78 = &DAT_00000001;
        }
        else {
          __rustc::__rust_no_alloc_shim_is_unstable_v2();
          local_78 = (byte *)FUN_004b25a4(pbVar16,1);
          if (local_78 == (byte *)0x0) {
            uVar20 = 1;
            goto LAB_008fb20c;
          }
          memcpy(local_78,__src,(size_t)pbVar16);
        }
                    /* try { // try from 008faf64 to 008fb11f has its CatchHandler @ 008fb260 */
        local_d0 = pbVar16;
        pbStack_c8 = local_78;
        local_c0 = pbVar16;
        uVar9 = FUN_008f5e68(&local_100,&local_d0);
        bVar2 = (byte)(uVar9 >> 0x38);
        bVar18 = bVar2 >> 1;
        uVar19 = CONCAT17(bVar18,CONCAT16(bVar18,CONCAT15(bVar18,CONCAT14(bVar18,CONCAT13(bVar18,
                                                  CONCAT12(bVar18,CONCAT11(bVar18,bVar18)))))));
        lVar11 = 0;
        uVar12 = uVar9 & uVar5;
        uVar20 = *(undefined8 *)((long)puVar4 + uVar12);
        uVar13 = NEON_cmeq(uVar20,uVar19,1);
        uVar13 = uVar13 & 0x8080808080808080;
        do {
          if (uVar13 == 0) {
LAB_008faff4:
            uVar20 = NEON_cmeq(uVar20,0xffffffffffffffff,1);
            bVar18 = NEON_umaxv(uVar20,1);
            if ((bVar18 & 1) == 0) goto code_r0x008fb008;
            if (local_110 == 0) {
              <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(alloc[c1f8e832b0d782c7]::string::
              String,())>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::
              make_hasher<alloc[c1f8e832b0d782c7]::string::String_();
              uVar13 = NEON_cmlt(*(undefined8 *)((long)puVar4 + (uVar5 & uVar9)),0,1);
            }
            else {
              uVar13 = NEON_cmlt(*(undefined8 *)((long)puVar4 + (uVar5 & uVar9)),0,1);
            }
            uVar12 = uVar5 & uVar9;
            if (uVar13 == 0) {
              uVar12 = uVar5 & uVar9;
              lVar11 = 8;
              do {
                uVar12 = uVar12 + lVar11;
                lVar11 = lVar11 + 8;
                uVar12 = uVar12 & uVar5;
                uVar13 = NEON_cmlt(*(undefined8 *)((long)puVar4 + uVar12),0,1);
              } while (uVar13 == 0);
            }
            uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
            uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
            uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
            uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
            uVar12 = uVar12 + ((ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3) & uVar5;
            uVar13 = (ulong)*(char *)((long)puVar4 + uVar12);
            if (-1 < *(char *)((long)puVar4 + uVar12)) {
              uVar13 = NEON_cmlt(*puVar4,0,1);
              uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
              uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
              uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
              uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
              uVar12 = (ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3;
              uVar13 = (ulong)*(byte *)((long)puVar4 + uVar12);
            }
            bVar2 = bVar2 >> 1;
            *(byte *)((long)puVar4 + uVar12) = bVar2;
            *(byte *)((long)puVar4 + (uVar12 - 8 & uVar5) + 8) = bVar2;
            puVar4[uVar12 * -3 + -3] = pbVar16;
            puVar4[uVar12 * -3 + -2] = local_78;
            puVar4[uVar12 * -3 + -1] = pbVar16;
            local_110 = local_110 - (uVar13 & 1);
            lStack_108 = lStack_108 + 1;
            if (puVar15 + 2 != puVar1) goto LAB_008fb0f8;
            break;
          }
LAB_008fafa8:
          uVar10 = (uVar13 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar13 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
          uVar10 = uVar12 + ((ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3) & uVar5;
          if (((byte *)puVar4[uVar10 * -3 + -1] == pbVar16) &&
             (iVar7 = memcmp((void *)puVar4[uVar10 * -3 + -2],local_78,(size_t)pbVar16), iVar7 == 0)
             ) goto LAB_008fb02c;
          uVar13 = uVar13 - 1 & uVar13;
        } while( true );
      }
LAB_008fb1ac:
      if (lVar6 != 0) {
        free(__ptr);
      }
LAB_008fb1c0:
      lVar17 = lVar17 + 0x28;
    } while (lVar17 != lVar14);
  }
  param_1[1] = uVar5;
  *param_1 = (long)puVar4;
  param_1[3] = lStack_108;
  param_1[2] = local_110;
  param_1[5] = lStack_f8;
  param_1[4] = local_100;
  return;
code_r0x008fb008:
  lVar11 = lVar11 + 8;
  uVar12 = uVar12 + lVar11 & uVar5;
  uVar20 = *(undefined8 *)((long)puVar4 + uVar12);
  uVar13 = NEON_cmeq(uVar20,uVar19,1);
  uVar13 = uVar13 & 0x8080808080808080;
  if (uVar13 != 0) goto LAB_008fafa8;
  goto LAB_008faff4;
LAB_008fb02c:
  if (pbVar16 != (byte *)0x0) {
    free(local_78);
  }
  if (puVar15 + 2 == puVar1) goto LAB_008fb1ac;
LAB_008fb0f8:
  __src = (void *)puVar15[2];
  pbVar16 = (byte *)puVar15[3];
  puVar15 = puVar15 + 2;
  if ((long)pbVar16 < 0) goto LAB_008fb208;
  goto LAB_008faf20;
}


// ===== 008fb35c  FUN_008fb35c =====

undefined1  [16] FUN_008fb35c(byte *param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = *(undefined8 *)(&DAT_00331438 + (ulong)*param_1 * 8);
  auVar1._0_8_ = &DAT_00331470 + *(int *)(&DAT_00331470 + (ulong)*param_1 * 4);
  return auVar1;
}


// ===== 008fb380  <hyper::body::length::DecodedLength_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper::body::length::DecodedLength as core::fmt::Debug>::fmt */

void __rustcall
<hyper::body::length::DecodedLength_as_core::fmt::Debug>::fmt(long *param_1,undefined8 param_2)

{
  long local_30;
  undefined1 auStack_28 [24];
  
  local_30 = *param_1;
  if (local_30 == -2) {
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"CHUNKED",7);
    return;
  }
  if (local_30 == -1) {
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"CLOSE_DELIMITED",0xf);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple(auStack_28,param_2,"DecodedLength",0xd);
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::field
            (auStack_28,&local_30,&DAT_00aefaf0);
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::finish();
  return;
}


// ===== 008fb400  <hyper::body::length::DecodedLength_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper::body::length::DecodedLength as core::fmt::Display>::fmt */

void __rustcall
<hyper::body::length::DecodedLength_as_core::fmt::Display>::fmt(long *param_1,undefined8 *param_2)

{
  long local_28;
  long *local_20;
  undefined *puStack_18;
  
  local_28 = *param_1;
  if (local_28 == -2) {
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002a0cf0,0x10);
    return;
  }
  if (local_28 != -1) {
    if (local_28 == 0) {
      <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"empty",5);
      return;
    }
    local_20 = &local_28;
    puStack_18 = PTR_fmt_00b00c60;
    core::fmt::write(*param_2,param_2[1],&DAT_002bbc5b,&local_20);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"close-delimited",0xf);
  return;
}


// ===== 008fb4a0  FUN_008fb4a0 =====

void FUN_008fb4a0(undefined8 *param_1)

{
  <bytes::bytes_mut::BytesMut_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 008fb4a8  FUN_008fb4a8 =====

void FUN_008fb4a8(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_40 [16];
  long local_18;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  <core::fmt::[a]::core::fmt::Formatter>::debug_list(auStack_40,param_2);
  lVar3 = local_18;
  for (; local_18 = lVar1, lVar2 != 0; lVar2 = lVar2 + -1) {
    lVar1 = local_18 + 1;
    <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry
              (auStack_40,&local_18,&DAT_00aef570);
    lVar3 = local_18;
  }
  local_18 = lVar3;
  <core::fmt::builders::[6]::core::fmt::builders::DebugList>::finish(auStack_40);
  return;
}


// ===== 008fb514  FUN_008fb514 =====

void FUN_008fb514(undefined8 *param_1)

{
  <bool_as_core::fmt::Display>::fmt(*param_1);
  return;
}


// ===== 008fb51c  FUN_008fb51c =====

void FUN_008fb51c(undefined8 *param_1,long param_2)

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


// ===== 008fb538  FUN_008fb538 =====

void FUN_008fb538(undefined8 *param_1,long param_2)

{
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <usize_as_core::fmt::LowerHex>::fmt(*param_1);
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <usize_as_core::fmt::Display>::fmt();
    return;
  }
  <usize_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 008fb554  FUN_008fb554 =====

void FUN_008fb554(undefined8 *param_1,long param_2)

{
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <usize_as_core::fmt::LowerHex>::fmt(*param_1);
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <usize_as_core::fmt::Display>::fmt();
    return;
  }
  <usize_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 008fb570  <hyper::proto::h1::encode::ChunkSize_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper::proto::h1::encode::ChunkSize as core::fmt::Debug>::fmt */

void __rustcall
<hyper::proto::h1::encode::ChunkSize_as_core::fmt::Debug>::fmt(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_40 [16];
  long local_30;
  ulong uStack_28;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_40,param_2,"ChunkSize",9);
  uStack_28 = (ulong)*(byte *)(param_1 + 0x13);
  if (uStack_28 < 0x13) {
    local_30 = param_1;
    uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                      (auStack_40,"bytes",5,&local_30,&DAT_00aefb10);
    <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
              (uVar1,"pos",3,param_1 + 0x12,&DAT_00aefb30);
    <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (0,uStack_28,0x12,&PTR_s__root__cargo_registry_src_index__00aefb50);
}


// ===== 008fb614  <hyper::proto::h1::encode::ChunkSize_as_core::fmt::Write>::write_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper::proto::h1::encode::ChunkSize as core::fmt::Write>::write_str */

undefined8 __rustcall
<hyper::proto::h1::encode::ChunkSize_as_core::fmt::Write>::write_str
          (long param_1,void *param_2,ulong param_3)

{
  size_t __n;
  ulong uVar1;
  ulong uVar2;
  undefined **local_18;
  
  uVar1 = (ulong)*(byte *)(param_1 + 0x13);
  if (0x12 < uVar1) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (uVar1,0x12,0x12,&PTR_s__root__cargo_registry_src_index__00aefb98);
  }
  uVar2 = 0x12 - uVar1;
  __n = uVar2;
  if (param_3 <= uVar2) {
    __n = param_3;
  }
  memcpy((void *)(param_1 + uVar1),param_2,__n);
  if (param_3 <= uVar2) {
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + (char)param_3;
    return 0;
  }
  local_18 = &PTR_s_failed_to_write_whole_buffer_00aefb68;
                    /* try { // try from 008fb698 to 008fb6bb has its CatchHandler @ 008fb6c0 */
                    /* WARNING: Subroutine does not return */
  core::result::unwrap_failed
            ("&mut [u8].write() cannot error",0x1e,&local_18,&PTR_FUN_00aefa50,
             &PTR_s__root__cargo_registry_src_index__00aefb80);
}


// ===== 008fb6d8  <hyper::proto::h1::encode::NotEof_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper::proto::h1::encode::NotEof as core::fmt::Display>::fmt */

void __rustcall
<hyper::proto::h1::encode::NotEof_as_core::fmt::Display>::fmt
          (undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_fmt_00b00c60;
  local_20 = param_1;
  core::fmt::write(*param_2,param_2[1],&DAT_002bb018,&local_20);
  return;
}


// ===== 008fb714  FUN_008fb714 =====

void FUN_008fb714(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"Error",5);
  return;
}


// ===== 008fb728  FUN_008fb728 =====

void FUN_008fb728(undefined8 param_1,long param_2)

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


// ===== 008fb740  FUN_008fb740 =====

void FUN_008fb740(undefined8 param_1,long param_2)

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


// ===== 008fb758  FUN_008fb758 =====

void FUN_008fb758(undefined8 param_1,long param_2)

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


// ===== 008fb770  FUN_008fb770 =====

void FUN_008fb770(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,"UpgradeExpectedHeaderNameHeaderValueNewLineStatusTokenTooManyHeadersVersion",
             0xf);
  return;
}


// ===== 008fb784  FUN_008fb784 =====

void FUN_008fb784(byte *param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,&DAT_003314c8 + *(int *)(&DAT_003314c8 + (ulong)*param_1 * 4),
             *(undefined8 *)(&DAT_00331490 + (ulong)*param_1 * 8));
  return;
}


// ===== 008fb7ac  FUN_008fb7ac =====

void FUN_008fb7ac(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008fb7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x18))(*param_1);
  return;
}


// ===== 008fb7b8  FUN_008fb7b8 =====

undefined8 FUN_008fb7b8(void)

{
  return 0;
}


// ===== 008fb7c0  FUN_008fb7c0 =====

void FUN_008fb7c0(void)

{
  return;
}


// ===== 008fb7c4  FUN_008fb7c4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fb7c4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029f970;
  param_1[1] = _UNK_0029f978;
  *param_1 = uVar1;
  return;
}


// ===== 008fb7d8  FUN_008fb7d8 =====

undefined1  [16] FUN_008fb7d8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x28;
  auVar1._0_8_ = "description() is deprecated; use Display";
  return auVar1;
}


// ===== 008fb7e8  FUN_008fb7e8 =====

undefined8 FUN_008fb7e8(void)

{
  return 0;
}


// ===== 008fb7f0  FUN_008fb7f0 =====

void FUN_008fb7f0(void)

{
  return;
}


// ===== 008fb7f4  FUN_008fb7f4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fb7f4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029ff30;
  param_1[1] = _UNK_0029ff38;
  *param_1 = uVar1;
  return;
}


// ===== 008fb808  FUN_008fb808 =====

undefined1  [16] FUN_008fb808(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x28;
  auVar1._0_8_ = "description() is deprecated; use Display";
  return auVar1;
}


// ===== 008fb818  FUN_008fb818 =====

void FUN_008fb818(void)

{
  return;
}


// ===== 008fb81c  FUN_008fb81c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fb81c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a0f30;
  param_1[1] = _UNK_002a0f38;
  *param_1 = uVar1;
  return;
}


// ===== 008fb830  FUN_008fb830 =====

undefined8 FUN_008fb830(long param_1,uint param_2)

{
  size_t __n;
  byte bVar1;
  undefined1 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint local_34;
  undefined **local_18;
  
  if (param_2 < 0x80) {
    local_34 = param_2 & 0xff;
    uVar4 = 1;
  }
  else {
    uVar2 = (undefined1)param_2;
    if (param_2 < 0x800) {
      uVar4 = 2;
      local_34 = (CONCAT11(uVar2,(char)(param_2 >> 6)) & 0x3fff | 0x8000) | 0xc0;
    }
    else {
      bVar1 = (byte)(param_2 >> 6);
      if (param_2 >> 0x10 == 0) {
        local_34._0_2_ = (bVar1 & 0xff3f | 0x80) << 8;
        uVar4 = 3;
        local_34 = CONCAT31(CONCAT12(uVar2,(short)local_34) >> 8,(char)(param_2 >> 0xc)) & 0x3fffff
                   | 0x8000e0;
      }
      else {
        uVar4 = 4;
        local_34 = CONCAT31(CONCAT21(CONCAT11(uVar2,bVar1),(char)(param_2 >> 0xc)),
                            (char)(param_2 >> 0x12)) & 0x3f3f3fff | 0x808080f0;
      }
    }
  }
  uVar3 = (ulong)*(byte *)(param_1 + 0x13);
  if (uVar3 < 0x13) {
    uVar5 = 0x12 - uVar3;
    __n = uVar5;
    if (uVar4 <= uVar5) {
      __n = uVar4;
    }
    memcpy((void *)(param_1 + uVar3),&local_34,__n);
    if (uVar4 <= uVar5) {
      *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + (char)uVar4;
      return 0;
    }
    local_18 = &PTR_s_failed_to_write_whole_buffer_00aefb68;
                    /* try { // try from 008fb94c to 008fb96f has its CatchHandler @ 008fb974 */
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              ("&mut [u8].write() cannot error",0x1e,&local_18,&PTR_FUN_00aefa50,
               &PTR_s__root__cargo_registry_src_index__00aefb80);
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (uVar3,0x12,0x12,&PTR_s__root__cargo_registry_src_index__00aefb98);
}


// ===== 008fb98c  FUN_008fb98c =====

void FUN_008fb98c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  core::fmt::write(param_1,&DAT_00aefa70,param_2,param_3);
  return;
}


// ===== 008fb9a0  want::new =====

/* WARNING: Unknown calling convention: __rustcall */
/* want::new */

void __rustcall want::new(void)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  plVar4 = (long *)FUN_004b25a4(0x30,8);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x30);
  }
  *(undefined1 *)(plVar4 + 5) = 0;
  plVar4[2] = 0;
  plVar4[3] = 0;
  plVar4[1] = 1;
  *plVar4 = 1;
  do {
    lVar5 = *plVar4;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = lVar5 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (-1 < lVar5) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x8fba00);
  (*pcVar3)();
}


// ===== 008fba00  <want::[0]::want::Giver>::poll_want =====

/* WARNING: Unknown calling convention: __rustcall */
/* <want::[0]::want::Giver>::poll_want */

undefined8 __rustcall <want::[0]::want::Giver>::poll_want(long *param_1,undefined8 *param_2)

{
  ulong *puVar1;
  char *pcVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  undefined1 auVar11 [16];
  ulong local_38;
  ulong *local_30;
  undefined *puStack_28;
  
  lVar10 = *param_1;
  puVar1 = (ulong *)(lVar10 + 0x10);
  local_38 = *puVar1;
  if (local_38 < 4) {
    pcVar2 = (char *)(lVar10 + 0x28);
    do {
      while( true ) {
        iVar8 = (int)local_38;
        if (iVar8 < 2) {
          if (iVar8 != 0) {
            return 0;
          }
        }
        else if (iVar8 != 2) {
          return 1;
        }
        do {
          cVar3 = *pcVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
          if (bVar5) {
            *pcVar2 = '\x01';
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (cVar3 == '\0') break;
        local_38 = *puVar1;
        if (3 < local_38) goto LAB_008fbaa0;
      }
      while (*puVar1 == local_38) {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = 2;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          plVar9 = (long *)*param_2;
          if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
            puVar7 = (undefined8 *)*plVar9;
            lVar6 = plVar9[1];
          }
          else {
            puVar7 = (undefined8 *)*plVar9;
            lVar6 = plVar9[1];
            if ((*(long *)(lVar10 + 0x20) == lVar6) && (*(undefined8 **)(lVar10 + 0x18) == puVar7))
            {
              pcVar2[0] = '\0';
              pcVar2[1] = '\0';
              pcVar2[2] = '\0';
              pcVar2[3] = '\0';
              return 2;
            }
          }
                    /* try { // try from 008fbb0c to 008fbb0f has its CatchHandler @ 008fbb6c */
          auVar11 = (*(code *)*puVar7)(lVar6);
          lVar6 = *(long *)(lVar10 + 0x18);
          *(undefined1 (*) [16])(lVar10 + 0x18) = auVar11;
          *(undefined4 *)(lVar10 + 0x28) = 0;
          if (lVar6 != 0) {
            (**(code **)(lVar6 + 8))(*(undefined8 *)(lVar10 + 0x20));
          }
          return 2;
        }
      }
      ClearExclusiveLocal();
      pcVar2[0] = '\0';
      pcVar2[1] = '\0';
      pcVar2[2] = '\0';
      pcVar2[3] = '\0';
      local_38 = *puVar1;
    } while (local_38 < 4);
  }
LAB_008fbaa0:
  local_30 = &local_38;
  puStack_28 = PTR_fmt_00b00c10;
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002ab143,&local_30,&PTR_s__root__cargo_registry_src_index__00aefd38);
}


// ===== 008fbb74  <want::Giver_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <want::Giver as core::fmt::Debug>::fmt */

void __rustcall <want::Giver_as_core::fmt::Debug>::fmt(long *param_1,undefined8 param_2)

{
  undefined1 auStack_40 [16];
  ulong *local_30;
  undefined *puStack_28;
  ulong local_8;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_40,param_2,&DAT_003314e4,5);
  local_8 = *(ulong *)(*param_1 + 0x10);
  if (local_8 < 4) {
    local_30 = (ulong *)CONCAT71(local_30._1_7_,(char)local_8);
    <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
              (auStack_40,&DAT_003314e9,5,&local_30,&DAT_00aefd18);
    <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
    return;
  }
  local_30 = &local_8;
  puStack_28 = PTR_fmt_00b00c10;
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002ab143,&local_30,&PTR_s__root__cargo_registry_src_index__00aefd38);
}


// ===== 008fbc1c  <want::SharedGiver_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <want::SharedGiver as core::fmt::Debug>::fmt */

void __rustcall <want::SharedGiver_as_core::fmt::Debug>::fmt(long *param_1,undefined8 param_2)

{
  undefined1 auStack_40 [16];
  ulong *local_30;
  undefined *puStack_28;
  ulong local_8;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_40,param_2,&DAT_003314ee,0xb);
  local_8 = *(ulong *)(*param_1 + 0x10);
  if (local_8 < 4) {
    local_30 = (ulong *)CONCAT71(local_30._1_7_,(char)local_8);
    <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
              (auStack_40,&DAT_003314e9,5,&local_30,&DAT_00aefd18);
    <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
    return;
  }
  local_30 = &local_8;
  puStack_28 = PTR_fmt_00b00c10;
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002ab143,&local_30,&PTR_s__root__cargo_registry_src_index__00aefd38);
}


// ===== 008fbcc4  <want::Taker_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <want::Taker as core::fmt::Debug>::fmt */

void __rustcall <want::Taker_as_core::fmt::Debug>::fmt(long *param_1,undefined8 param_2)

{
  undefined1 auStack_40 [16];
  ulong *local_30;
  undefined *puStack_28;
  ulong local_8;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_40,param_2,&DAT_003314f9,5);
  local_8 = *(ulong *)(*param_1 + 0x10);
  if (local_8 < 4) {
    local_30 = (ulong *)CONCAT71(local_30._1_7_,(char)local_8);
    <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
              (auStack_40,&DAT_003314e9,5,&local_30,&DAT_00aefd18);
    <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
    return;
  }
  local_30 = &local_8;
  puStack_28 = PTR_fmt_00b00c10;
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002ab143,&local_30,&PTR_s__root__cargo_registry_src_index__00aefd38);
}


// ===== 008fbd6c  <want::Closed_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <want::Closed as core::fmt::Debug>::fmt */

void __rustcall <want::Closed_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,&DAT_003314fe,6);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish(auStack_20);
  return;
}


// ===== 008fbda4  <want::Want_as_core::future::future::Future>::poll =====

/* WARNING: Unknown calling convention: __rustcall */
/* <want::Want as core::future::future::Future>::poll */

void __rustcall <want::Want_as_core::future::future::Future>::poll(undefined8 *param_1)

{
  <want::[0]::want::Giver>::poll_want(*param_1);
  return;
}


// ===== 008fbdac  <want::State_as_core::convert::From<usize>>::from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <want::State as core::convert::From<usize>>::from */

void __rustcall <want::State_as_core::convert::From<usize>>::from(ulong param_1)

{
  ulong local_28;
  ulong *local_20;
  undefined *puStack_18;
  
  if (param_1 < 4) {
    return;
  }
  local_20 = &local_28;
  puStack_18 = PTR_fmt_00b00c10;
  local_28 = param_1;
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002ab143,&local_20,&PTR_s__root__cargo_registry_src_index__00aefd38);
}


// ===== 008fbdf8  FUN_008fbdf8 =====

void FUN_008fbdf8(byte *param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,&DAT_00331510 + *(int *)(&DAT_00331510 + (ulong)*param_1 * 4),
             *(undefined8 *)(&DAT_002bfba8 + (ulong)*param_1 * 8));
  return;
}


// ===== 008fbe20  FUN_008fbe20 =====

int FUN_008fbe20(long param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  
  pbVar1 = *(byte **)(param_1 + 8);
  pbVar2 = *(byte **)(param_1 + 0x10);
  iVar6 = 0x30001;
  if (pbVar2 < pbVar1) {
    bVar3 = *pbVar2;
    *(byte **)(param_1 + 0x10) = pbVar2 + 1;
    if (9 < bVar3 - 0x30) {
      return 0x30002;
    }
    if (pbVar2 + 1 < pbVar1) {
      bVar4 = pbVar2[1];
      *(byte **)(param_1 + 0x10) = pbVar2 + 2;
      if (9 < bVar4 - 0x30) {
        return 0x30002;
      }
      if (pbVar2 + 2 < pbVar1) {
        bVar5 = pbVar2[2];
        *(byte **)(param_1 + 0x10) = pbVar2 + 3;
        if (9 < bVar5 - 0x30) {
          return 0x30002;
        }
        iVar6 = (((uint)bVar4 * 10 + 0x20 & 0xfe) + (bVar3 - 0x30 & 0xff) * 100 +
                (bVar5 - 0x30 & 0xff)) * 0x10000;
      }
    }
  }
  return iVar6;
}


// ===== 008fbec0  FUN_008fbec0 =====

void FUN_008fbec0(undefined1 *param_1,long *param_2)

{
  long lVar1;
  byte *pbVar2;
  byte bVar3;
  bool bVar4;
  long lVar5;
  byte *pbVar6;
  byte *pbVar7;
  long lVar8;
  
  pbVar2 = (byte *)param_2[1];
  pbVar7 = (byte *)param_2[2];
  if (pbVar7 < pbVar2) {
    bVar4 = false;
    lVar5 = -(long)pbVar7;
    do {
      pbVar6 = pbVar7 + 1;
      bVar3 = *pbVar7;
      if (bVar3 < 0xd) {
        if (bVar3 != 9) {
          if (bVar3 == 10) {
            lVar8 = *param_2;
            param_2[2] = (long)pbVar6;
            pbVar7 = pbVar6;
LAB_008fbf9c:
            lVar5 = lVar8 + lVar5;
            *param_2 = (long)pbVar7;
            if (bVar4) {
              lVar8 = 1;
            }
            lVar1 = 0;
            if (!bVar4) {
              lVar1 = -lVar5;
            }
            *param_1 = 0;
            *(long *)(param_1 + 8) = lVar8;
            *(long *)(param_1 + 0x10) = lVar1;
            return;
          }
LAB_008fbf2c:
          if ((-1 < (char)bVar3) && (0x5d < bVar3 - 0x21)) {
            param_2[2] = (long)pbVar6;
LAB_008fbf7c:
            param_1[1] = 3;
            *param_1 = 1;
            return;
          }
        }
      }
      else if (bVar3 != 0x20) {
        if (bVar3 != 0xd) goto LAB_008fbf2c;
        param_2[2] = (long)pbVar6;
        if (pbVar6 < pbVar2) {
          pbVar7 = pbVar7 + 2;
          bVar3 = *pbVar6;
          param_2[2] = (long)pbVar7;
          if (bVar3 == 10) {
            lVar8 = *param_2;
            goto LAB_008fbf9c;
          }
          goto LAB_008fbf7c;
        }
        goto LAB_008fbf48;
      }
      lVar5 = lVar5 + -1;
      bVar4 = (bool)((char)bVar3 < '\0' | bVar4);
      pbVar7 = pbVar6;
    } while (pbVar6 != pbVar2);
    param_2[2] = (long)pbVar2;
  }
LAB_008fbf48:
  *(undefined8 *)(param_1 + 8) = 0;
  *param_1 = 0;
  return;
}


// ===== 008fbfbc  httparse::parse_headers =====

/* WARNING: Unknown calling convention: __rustcall */
/* httparse::parse_headers */

void __rustcall
httparse::parse_headers
          (undefined1 *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  long lStack_40;
  long local_38;
  long local_30;
  undefined1 local_28;
  undefined7 uStack_27;
  undefined4 local_4;
  
  lStack_40 = param_2 + param_3;
  local_4 = 0;
  local_58 = param_4;
  uStack_50 = param_5;
  local_48 = param_2;
  local_38 = param_2;
  FUN_008fc30c(&local_30,&local_58,&local_48,&local_4);
  if (local_30 == 2) {
    *param_1 = 1;
    param_1[1] = local_28;
    return;
  }
  if (local_30 == 1) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    return;
  }
  *(ulong *)(param_1 + 8) = CONCAT71(uStack_27,local_28);
  *(undefined8 *)(param_1 + 0x10) = local_58;
  *(undefined8 *)(param_1 + 0x18) = uStack_50;
  *param_1 = 0;
  return;
}


// ===== 008fc068  FUN_008fc068 =====

uint FUN_008fc068(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  
  plVar1 = *(long **)(param_1 + 8);
  plVar2 = *(long **)(param_1 + 0x10);
  if (7 < (ulong)((long)plVar1 - (long)plVar2)) {
    lVar5 = *plVar2;
    *(long **)(param_1 + 0x10) = plVar2 + 1;
    if (lVar5 != 0x302e312f50545448) {
      iVar6 = 6;
      if (lVar5 == 0x312e312f50545448) {
        iVar6 = 1;
      }
      uVar4 = 0;
      if (lVar5 != 0x312e312f50545448) {
        uVar4 = 2;
      }
      return uVar4 | iVar6 << 8;
    }
    return 0;
  }
  if (plVar2 < plVar1) {
    lVar5 = *plVar2;
    *(long **)(param_1 + 0x10) = (long *)((long)plVar2 + 1U);
    if ((char)lVar5 != 'H') {
      return 0x602;
    }
    if ((long *)((long)plVar2 + 1U) < plVar1) {
      cVar3 = *(char *)((long)plVar2 + 1);
      *(long **)(param_1 + 0x10) = (long *)((long)plVar2 + 2U);
      if (cVar3 != 'T') {
        return 0x602;
      }
      if ((long *)((long)plVar2 + 2U) < plVar1) {
        cVar3 = *(char *)((long)plVar2 + 2);
        *(long **)(param_1 + 0x10) = (long *)((long)plVar2 + 3U);
        if (cVar3 != 'T') {
          return 0x602;
        }
        if ((long *)((long)plVar2 + 3U) < plVar1) {
          cVar3 = *(char *)((long)plVar2 + 3);
          *(long **)(param_1 + 0x10) = (long *)((long)plVar2 + 4U);
          if (cVar3 != 'P') {
            return 0x602;
          }
          if ((long *)((long)plVar2 + 4U) < plVar1) {
            cVar3 = *(char *)((long)plVar2 + 4);
            *(long **)(param_1 + 0x10) = (long *)((long)plVar2 + 5U);
            if (cVar3 != '/') {
              return 0x602;
            }
            if ((long *)((long)plVar2 + 5U) < plVar1) {
              cVar3 = *(char *)((long)plVar2 + 5);
              *(long **)(param_1 + 0x10) = (long *)((long)plVar2 + 6U);
              if (cVar3 != '1') {
                return 0x602;
              }
              if ((long *)((long)plVar2 + 6U) < plVar1) {
                cVar3 = *(char *)((long)plVar2 + 6);
                *(char **)(param_1 + 0x10) = (char *)((long)plVar2 + 7);
                uVar4 = 1;
                if (cVar3 != '.') {
                  uVar4 = 2;
                }
                return uVar4 | 0x600;
              }
            }
          }
        }
      }
    }
  }
  return 0x601;
}


// ===== 008fc1c0  httparse::parse_chunk_size =====

/* WARNING: Unknown calling convention: __rustcall */
/* httparse::parse_chunk_size */

void __rustcall httparse::parse_chunk_size(undefined8 *param_1,long param_2,long param_3)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  if (param_3 != 0) {
    lVar4 = 0;
    uVar5 = 0;
    bVar3 = false;
    iVar6 = 0;
    bVar2 = true;
    do {
      bVar1 = *(byte *)(param_2 + lVar4);
      uVar7 = bVar1 - 0x30;
      if (uVar7 < 10) {
        if (!bVar2) goto LAB_008fc2bc;
        if (0xf < iVar6) goto LAB_008fc300;
        uVar5 = (ulong)uVar7 & 0xff | uVar5 << 4;
LAB_008fc1e4:
        iVar6 = iVar6 + 1;
        bVar2 = true;
        goto LAB_008fc1ec;
      }
      uVar7 = (uint)bVar1;
      if (bVar1 - 0x61 < 6) {
        if (bVar2) {
          if (0xf < iVar6) goto LAB_008fc300;
          uVar7 = uVar7 - 0x57;
LAB_008fc1e0:
          uVar5 = uVar5 * 0x10 + ((ulong)uVar7 & 0xff);
          goto LAB_008fc1e4;
        }
LAB_008fc2bc:
        if (!bVar3) {
LAB_008fc300:
          *param_1 = 2;
          return;
        }
LAB_008fc2c0:
        bVar3 = true;
      }
      else {
        uVar8 = (uint)bVar1;
        if (uVar8 - 0x41 < 6) {
          if (bVar2) {
            if (0xf < iVar6) goto LAB_008fc300;
            uVar7 = uVar8 - 0x37;
            goto LAB_008fc1e0;
          }
          goto LAB_008fc2bc;
        }
        if (0x1f < uVar8) {
          if (uVar7 == 0x20) goto LAB_008fc294;
          if (uVar8 != 0x3b) goto LAB_008fc2bc;
          bVar2 = (bool)(bVar3 & bVar2);
          goto LAB_008fc2c0;
        }
        if (uVar8 != 9) {
          if (uVar7 != 0xd) goto LAB_008fc2bc;
          if (param_2 + lVar4 + 1U < (ulong)(param_2 + param_3)) {
            if (*(char *)(param_2 + lVar4 + 1) == '\n') {
              param_1[2] = uVar5;
              *param_1 = 0;
              param_1[1] = lVar4 + 2;
              return;
            }
            goto LAB_008fc300;
          }
          break;
        }
LAB_008fc294:
        if (bVar3 || bVar2) {
          if (!bVar2) goto LAB_008fc2bc;
          bVar2 = false;
        }
        else {
          bVar3 = false;
          bVar2 = false;
        }
      }
LAB_008fc1ec:
      lVar4 = lVar4 + 1;
    } while ((ulong)(param_2 + lVar4) < (ulong)(param_2 + param_3));
  }
  *param_1 = 1;
  return;
}


// ===== 008fc30c  FUN_008fc30c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fc30c(undefined8 *param_1,long *param_2,undefined8 *param_3,char *param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined1 (*pauVar3) [16];
  undefined1 (*pauVar4) [16];
  byte bVar5;
  char cVar6;
  char cVar7;
  byte bVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined *puVar14;
  byte bVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 *puVar18;
  undefined1 (*pauVar19) [16];
  undefined1 (*pauVar20) [16];
  undefined1 (*pauVar21) [16];
  undefined1 *puVar22;
  undefined8 uVar23;
  undefined8 *puVar24;
  ulong uVar25;
  ulong uVar26;
  char cVar27;
  ulong uVar28;
  undefined1 (*pauVar29) [16];
  long lVar30;
  undefined1 (*pauVar31) [16];
  undefined1 *puVar32;
  uint uVar33;
  long lVar34;
  unkuint9 Var35;
  undefined1 auVar37 [11];
  undefined1 auVar46 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar36 [11];
  undefined1 auVar38 [12];
  undefined1 auVar39 [12];
  undefined1 auVar40 [13];
  undefined1 auVar41 [13];
  undefined1 auVar42 [14];
  undefined1 auVar43 [14];
  undefined1 auVar44 [15];
  undefined1 auVar45 [15];
  undefined1 auVar47 [16];
  
  pauVar3 = (undefined1 (*) [16])param_3[1];
  pauVar4 = (undefined1 (*) [16])param_3[2];
  *(undefined1 *)(param_1 + 1) = 5;
  uVar26 = 0;
  *param_1 = 2;
  puVar14 = PTR_TOKEN_MAP_00b010b8;
  if (pauVar3 <= pauVar4) {
LAB_008fcc28:
    uVar23 = 1;
LAB_008fcc2c:
    *param_1 = uVar23;
    uVar25 = uVar26;
LAB_008fcc30:
    param_2[1] = uVar25;
    return;
  }
  puVar24 = (undefined8 *)*param_2;
  pauVar20 = (undefined1 (*) [16])*param_3;
  puVar1 = puVar24 + param_2[1] * 4;
  uVar25 = param_2[1] & 0x7ffffffffffffff;
  bVar5 = param_4[2];
  cVar6 = param_4[3];
  cVar7 = *param_4;
  bVar8 = param_4[1];
  auVar12._8_8_ = _UNK_002a0748;
  auVar12._0_8_ = _DAT_002a0740;
  auVar13._8_8_ = _UNK_002a0d88;
  auVar13._0_8_ = _DAT_002a0d80;
  uVar23 = 1;
  pauVar19 = pauVar4;
LAB_008fc3c4:
  pauVar21 = pauVar20;
  bVar2 = 0;
  if (uVar26 == 0) {
    bVar2 = bVar5;
  }
LAB_008fc3d0:
  pauVar31 = (undefined1 (*) [16])(*pauVar19 + 1);
  bVar15 = (*pauVar19)[0];
  param_3[2] = pauVar31;
  if (bVar15 == 10) {
    lVar34 = (long)pauVar31 - (long)pauVar4;
LAB_008fcbfc:
    *param_1 = 0;
    param_1[1] = lVar34;
    uVar25 = uVar26;
    goto LAB_008fcc30;
  }
  if (bVar15 == 0xd) {
    if (pauVar3 <= pauVar31) goto LAB_008fcc28;
    cVar6 = (*pauVar19)[1];
    param_3[2] = *pauVar19 + 2;
    if (cVar6 == '\n') {
      lVar34 = (long)(*pauVar19 + 2) - (long)pauVar4;
      goto LAB_008fcbfc;
    }
    uVar23 = 2;
    *(undefined1 *)(param_1 + 1) = 2;
    goto LAB_008fcc2c;
  }
  if ((puVar14[bVar15] & 1) != 0) {
    uVar16 = (long)pauVar3 - (long)pauVar31;
    if (0xf < uVar16) {
      pauVar20 = (undefined1 (*) [16])(pauVar19[1] + 1);
      do {
        pauVar31 = pauVar20;
        auVar46 = pauVar31[-1];
        auVar48._0_8_ = auVar46._0_8_ & 0x8f8f8f8f8f8f8f8f;
        auVar48[8] = auVar46[8] & 0x8f;
        auVar48[9] = auVar46[9] & 0x8f;
        auVar48[10] = auVar46[10] & 0x8f;
        auVar48[0xb] = auVar46[0xb] & 0x8f;
        auVar48[0xc] = auVar46[0xc] & 0x8f;
        auVar48[0xd] = auVar46[0xd] & 0x8f;
        auVar48[0xe] = auVar46[0xe] & 0x8f;
        auVar48[0xf] = auVar46[0xf] & 0x8f;
        auVar50[0] = auVar46[0] >> 4;
        auVar50[1] = auVar46[1] >> 4;
        auVar50[2] = auVar46[2] >> 4;
        auVar50[3] = auVar46[3] >> 4;
        auVar50[4] = auVar46[4] >> 4;
        auVar50[5] = auVar46[5] >> 4;
        auVar50[6] = auVar46[6] >> 4;
        auVar50[7] = auVar46[7] >> 4;
        auVar50[8] = auVar46[8] >> 4;
        auVar50[9] = auVar46[9] >> 4;
        auVar50[10] = auVar46[10] >> 4;
        auVar50[0xb] = auVar46[0xb] >> 4;
        auVar50[0xc] = auVar46[0xc] >> 4;
        auVar50[0xd] = auVar46[0xd] >> 4;
        auVar50[0xe] = auVar46[0xe] >> 4;
        auVar50[0xf] = auVar46[0xf] >> 4;
        auVar48 = a64_TBL(ZEXT816(0),auVar12,auVar48);
        auVar46 = a64_TBL(ZEXT816(0),auVar13,auVar50);
        auVar49[0] = auVar46[0] & auVar48[0];
        auVar49[1] = auVar46[1] & auVar48[1];
        auVar49[2] = auVar46[2] & auVar48[2];
        auVar49[3] = auVar46[3] & auVar48[3];
        auVar49[4] = auVar46[4] & auVar48[4];
        auVar49[5] = auVar46[5] & auVar48[5];
        auVar49[6] = auVar46[6] & auVar48[6];
        auVar49[7] = auVar46[7] & auVar48[7];
        auVar49[8] = auVar46[8] & auVar48[8];
        auVar49[9] = auVar46[9] & auVar48[9];
        auVar49[10] = auVar46[10] & auVar48[10];
        auVar49[0xb] = auVar46[0xb] & auVar48[0xb];
        auVar49[0xc] = auVar46[0xc] & auVar48[0xc];
        auVar49[0xd] = auVar46[0xd] & auVar48[0xd];
        auVar49[0xe] = auVar46[0xe] & auVar48[0xe];
        auVar49[0xf] = auVar46[0xf] & auVar48[0xf];
        auVar46 = NEON_cmeq(auVar49,auVar46,1);
        lVar34 = CONCAT17(~auVar46[7],
                          CONCAT16(~auVar46[6],
                                   CONCAT15(~auVar46[5],
                                            CONCAT14(~auVar46[4],
                                                     CONCAT13(~auVar46[3],
                                                              CONCAT12(~auVar46[2],
                                                                       CONCAT11(~auVar46[1],
                                                                                ~auVar46[0])))))));
        Var35 = CONCAT18(~auVar46[8],lVar34);
        auVar36._0_10_ = CONCAT19(~auVar46[9],Var35);
        auVar36[10] = ~auVar46[10];
        auVar38[0xb] = ~auVar46[0xb];
        auVar38._0_11_ = auVar36;
        auVar40[0xc] = ~auVar46[0xc];
        auVar40._0_12_ = auVar38;
        auVar42[0xd] = ~auVar46[0xd];
        auVar42._0_13_ = auVar40;
        auVar44[0xe] = ~auVar46[0xe];
        auVar44._0_14_ = auVar42;
        auVar46[0xf] = ~auVar46[0xf];
        auVar46._0_15_ = auVar44;
        if (lVar34 != 0) {
          if ((Var35 & 0xff) == 0) {
            if ((auVar36._0_10_ & 0xff00) == 0) {
              lVar34 = 6;
              if ((auVar44 & (undefined1  [15])0xff000000000000) == (undefined1  [15])0x0) {
                lVar34 = 7;
              }
              lVar30 = 5;
              if ((auVar42 & (undefined1  [14])0xff0000000000) == (undefined1  [14])0x0) {
                lVar30 = lVar34;
              }
              lVar34 = 4;
              if ((auVar40 & (undefined1  [13])0xff00000000) == (undefined1  [13])0x0) {
                lVar34 = lVar30;
              }
              lVar30 = 3;
              if ((auVar38 & (undefined1  [12])0xff000000) == (undefined1  [12])0x0) {
                lVar30 = lVar34;
              }
              lVar34 = 2;
              if ((auVar36 & (undefined1  [11])0xff0000) == (undefined1  [11])0x0) {
                lVar34 = lVar30;
              }
            }
            else {
              lVar34 = 1;
            }
          }
          else {
            lVar34 = 0;
          }
LAB_008fc6d4:
          pauVar31 = (undefined1 (*) [16])(pauVar31[-1] + lVar34);
          goto LAB_008fc6dc;
        }
        if (auVar46._8_8_ != 0) {
          if ((Var35 & 0xff) == 0) {
            if ((auVar36._0_10_ & 0xff00) == 0) {
              if ((auVar36 & (undefined1  [11])0xff0000) == (undefined1  [11])0x0) {
                if ((auVar38 & (undefined1  [12])0xff000000) == (undefined1  [12])0x0) {
                  if ((auVar40 & (undefined1  [13])0xff00000000) == (undefined1  [13])0x0) {
                    if ((auVar42 & (undefined1  [14])0xff0000000000) == (undefined1  [14])0x0) {
                      lVar34 = 0xe;
                      if ((auVar44 & (undefined1  [15])0xff000000000000) == (undefined1  [15])0x0) {
                        lVar34 = 0xf;
                      }
                    }
                    else {
                      lVar34 = 0xd;
                    }
                  }
                  else {
                    lVar34 = 0xc;
                  }
                }
                else {
                  lVar34 = 0xb;
                }
              }
              else {
                lVar34 = 10;
              }
            }
            else {
              lVar34 = 9;
            }
          }
          else {
            lVar34 = 8;
          }
          goto LAB_008fc6d4;
        }
        uVar16 = uVar16 - 0x10;
        param_3[2] = pauVar31;
        pauVar20 = pauVar31 + 1;
      } while (0xf < uVar16);
    }
    if (7 < uVar16) {
      uVar16 = (long)pauVar3 - (long)pauVar31;
      do {
        uVar28 = *(ulong *)*pauVar31;
        if (puVar14[uVar28 & 0xff] != '\x01') goto LAB_008fc6dc;
        if (puVar14[uVar28 >> 8 & 0xff] != '\x01') {
          pauVar31 = (undefined1 (*) [16])(*pauVar31 + 1);
          goto LAB_008fc6dc;
        }
        if (puVar14[uVar28 >> 0x10 & 0xff] != '\x01') {
          pauVar31 = (undefined1 (*) [16])(*pauVar31 + 2);
          goto LAB_008fc6dc;
        }
        if (puVar14[uVar28 >> 0x18 & 0xff] != '\x01') {
          pauVar31 = (undefined1 (*) [16])(*pauVar31 + 3);
          goto LAB_008fc6dc;
        }
        if (puVar14[uVar28 >> 0x20 & 0xff] != '\x01') {
          pauVar31 = (undefined1 (*) [16])(*pauVar31 + 4);
          goto LAB_008fc6dc;
        }
        if (puVar14[uVar28 >> 0x28 & 0xff] != '\x01') {
          pauVar31 = (undefined1 (*) [16])(*pauVar31 + 5);
          goto LAB_008fc6dc;
        }
        if (puVar14[uVar28 >> 0x30 & 0xff] != '\x01') {
          pauVar31 = (undefined1 (*) [16])(*pauVar31 + 6);
          goto LAB_008fc6dc;
        }
        if ((puVar14[uVar28 >> 0x38] & 1) == 0) {
          pauVar31 = (undefined1 (*) [16])(*pauVar31 + 7);
          goto LAB_008fc6dc;
        }
        uVar16 = uVar16 - 8;
        pauVar31 = (undefined1 (*) [16])(*pauVar31 + 8);
      } while (7 < uVar16);
    }
    uVar28 = 0;
    do {
      pauVar20 = (undefined1 (*) [16])(*pauVar31 + uVar28);
      uVar17 = uVar16;
      if (pauVar20 == pauVar3) break;
      uVar17 = uVar28;
      uVar28 = uVar28 + 1;
    } while ((puVar14[(byte)(*pauVar20)[0]] & 1) != 0);
    pauVar31 = (undefined1 (*) [16])(*pauVar31 + uVar17);
LAB_008fc6dc:
    param_3[2] = pauVar31;
    if (pauVar31 < pauVar3) {
      pauVar19 = (undefined1 (*) [16])(*pauVar31 + 1);
      cVar27 = (*pauVar31)[0];
      param_3[2] = pauVar19;
      *param_3 = pauVar19;
      if (cVar27 != ':') {
        if (cVar7 != '\0') {
          do {
            if ((cVar27 != ' ') && (cVar27 != '\t')) goto LAB_008fca58;
            if (pauVar3 <= pauVar19) goto LAB_008fcc28;
            pauVar20 = (undefined1 (*) [16])(*pauVar19 + 1);
            cVar27 = (*pauVar19)[0];
            param_3[2] = pauVar20;
            pauVar19 = pauVar20;
          } while (cVar27 != ':');
          *param_3 = pauVar20;
          goto joined_r0x008fc708;
        }
LAB_008fca58:
        pauVar31 = pauVar19;
        if (cVar6 == '\0') goto LAB_008fcbec;
        while( true ) {
          if (cVar27 == '\0') goto LAB_008fcbec;
          if (cVar27 == '\n') goto LAB_008fcaa4;
          if (cVar27 == '\r') break;
          if (pauVar3 <= pauVar31) goto LAB_008fcc28;
          cVar27 = (*pauVar31)[0];
          param_3[2] = (undefined1 (*) [16])(*pauVar31 + 1);
          pauVar31 = (undefined1 (*) [16])(*pauVar31 + 1);
        }
        if (pauVar31 < pauVar3) {
          cVar27 = (*pauVar31)[0];
          param_3[2] = (undefined1 (*) [16])(*pauVar31 + 1);
          pauVar31 = (undefined1 (*) [16])(*pauVar31 + 1);
joined_r0x008fcaa0:
          if (cVar27 == '\n') goto LAB_008fcaa4;
          uVar23 = 2;
          *(undefined1 *)(param_1 + 1) = 0;
        }
        goto LAB_008fcc5c;
      }
joined_r0x008fc708:
      pauVar29 = pauVar19;
      if (pauVar19 < pauVar3) {
        while( true ) {
          pauVar20 = (undefined1 (*) [16])(*pauVar29 + 1);
          bVar15 = (*pauVar29)[0];
          param_3[2] = pauVar20;
          if ((bVar15 != 0x20) && (bVar15 != 9)) break;
          *param_3 = pauVar20;
          pauVar19 = pauVar20;
          pauVar29 = pauVar20;
joined_r0x008fc7e4:
          if (pauVar3 <= pauVar29) goto LAB_008fcc28;
        }
        if ((&DAT_00331520)[bVar15] != '\x01') {
          if (bVar15 != 10) {
            if (bVar15 != 0xd) {
              pauVar31 = pauVar20;
              if (cVar6 != '\0') goto joined_r0x008fcac4;
              goto LAB_008fcc70;
            }
            if (pauVar3 <= pauVar20) goto LAB_008fcc5c;
            cVar27 = (*pauVar29)[1];
            pauVar20 = (undefined1 (*) [16])(*pauVar29 + 2);
            param_3[2] = pauVar20;
            if (cVar27 != '\n') goto LAB_008fcc50;
          }
          if ((bVar8 & 1) != 0) {
            if (pauVar3 <= pauVar20) goto LAB_008fcc28;
            pauVar29 = pauVar20;
            if (((*pauVar20)[0] == '\t') || ((*pauVar20)[0] == ' ')) goto joined_r0x008fc7e4;
          }
          *param_3 = pauVar20;
          if (puVar24 == puVar1) goto LAB_008fcc30;
          lVar34 = (long)pauVar31 - (long)pauVar21;
          puVar18 = (undefined1 *)0x0;
          goto LAB_008fcb5c;
        }
LAB_008fc7ec:
        for (uVar16 = (long)pauVar3 - (long)pauVar20; pauVar29 = pauVar20, 0xf < uVar16;
            uVar16 = uVar16 - 0x10) {
          auVar46 = *pauVar20;
          auVar9[8] = 9;
          auVar9._0_8_ = 0x909090909090909;
          auVar9[9] = 9;
          auVar9[10] = 9;
          auVar9[0xb] = 9;
          auVar9[0xc] = 9;
          auVar9[0xd] = 9;
          auVar9[0xe] = 9;
          auVar9[0xf] = 9;
          auVar50 = NEON_cmeq(auVar46,auVar9,1);
          auVar10[8] = 0x20;
          auVar10._0_8_ = 0x2020202020202020;
          auVar10[9] = 0x20;
          auVar10[10] = 0x20;
          auVar10[0xb] = 0x20;
          auVar10[0xc] = 0x20;
          auVar10[0xd] = 0x20;
          auVar10[0xe] = 0x20;
          auVar10[0xf] = 0x20;
          auVar48 = NEON_cmhi(auVar10,auVar46,1);
          auVar11[8] = 0x7f;
          auVar11._0_8_ = 0x7f7f7f7f7f7f7f7f;
          auVar11[9] = 0x7f;
          auVar11[10] = 0x7f;
          auVar11[0xb] = 0x7f;
          auVar11[0xc] = 0x7f;
          auVar11[0xd] = 0x7f;
          auVar11[0xe] = 0x7f;
          auVar11[0xf] = 0x7f;
          auVar46 = NEON_cmeq(auVar46,auVar11,1);
          lVar34 = CONCAT17(auVar46[7] | auVar48[7] & ~auVar50[7],
                            CONCAT16(auVar46[6] | auVar48[6] & ~auVar50[6],
                                     CONCAT15(auVar46[5] | auVar48[5] & ~auVar50[5],
                                              CONCAT14(auVar46[4] | auVar48[4] & ~auVar50[4],
                                                       CONCAT13(auVar46[3] |
                                                                auVar48[3] & ~auVar50[3],
                                                                CONCAT12(auVar46[2] |
                                                                         auVar48[2] & ~auVar50[2],
                                                                         CONCAT11(auVar46[1] |
                                                                                  auVar48[1] &
                                                                                  ~auVar50[1],
                                                                                  auVar46[0] |
                                                                                  auVar48[0] &
                                                                                  ~auVar50[0])))))))
          ;
          Var35 = CONCAT18(auVar46[8] | auVar48[8] & ~auVar50[8],lVar34);
          auVar37._0_10_ = CONCAT19(auVar46[9] | auVar48[9] & ~auVar50[9],Var35);
          auVar37[10] = auVar46[10] | auVar48[10] & ~auVar50[10];
          auVar39[0xb] = auVar46[0xb] | auVar48[0xb] & ~auVar50[0xb];
          auVar39._0_11_ = auVar37;
          auVar41[0xc] = auVar46[0xc] | auVar48[0xc] & ~auVar50[0xc];
          auVar41._0_12_ = auVar39;
          auVar43[0xd] = auVar46[0xd] | auVar48[0xd] & ~auVar50[0xd];
          auVar43._0_13_ = auVar41;
          auVar45[0xe] = auVar46[0xe] | auVar48[0xe] & ~auVar50[0xe];
          auVar45._0_14_ = auVar43;
          auVar47[0xf] = auVar46[0xf] | auVar48[0xf] & ~auVar50[0xf];
          auVar47._0_15_ = auVar45;
          if (lVar34 != 0) {
            if ((Var35 & 0xff) == 0) {
              if ((auVar37._0_10_ & 0xff00) == 0) {
                if ((auVar37 & (undefined1  [11])0xff0000) == (undefined1  [11])0x0) {
                  if ((auVar39 & (undefined1  [12])0xff000000) == (undefined1  [12])0x0) {
                    if ((auVar41 & (undefined1  [13])0xff00000000) == (undefined1  [13])0x0) {
                      if ((auVar43 & (undefined1  [14])0xff0000000000) == (undefined1  [14])0x0) {
                        lVar34 = 6;
                        if ((auVar45 & (undefined1  [15])0xff000000000000) == (undefined1  [15])0x0)
                        {
                          lVar34 = 7;
                        }
                      }
                      else {
                        lVar34 = 5;
                      }
                    }
                    else {
                      lVar34 = 4;
                    }
                  }
                  else {
                    lVar34 = 3;
                  }
                }
                else {
                  lVar34 = 2;
                }
              }
              else {
                lVar34 = 1;
              }
            }
            else {
              lVar34 = 0;
            }
LAB_008fc9e0:
            pauVar29 = (undefined1 (*) [16])(*pauVar20 + lVar34);
            param_3[2] = pauVar29;
            goto LAB_008fc9e8;
          }
          if (auVar47._8_8_ != 0) {
            if ((Var35 & 0xff) == 0) {
              if ((auVar37._0_10_ & 0xff00) == 0) {
                if ((auVar37 & (undefined1  [11])0xff0000) == (undefined1  [11])0x0) {
                  if ((auVar39 & (undefined1  [12])0xff000000) == (undefined1  [12])0x0) {
                    if ((auVar41 & (undefined1  [13])0xff00000000) == (undefined1  [13])0x0) {
                      if ((auVar43 & (undefined1  [14])0xff0000000000) == (undefined1  [14])0x0) {
                        lVar34 = 0xe;
                        if ((auVar45 & (undefined1  [15])0xff000000000000) == (undefined1  [15])0x0)
                        {
                          lVar34 = 0xf;
                        }
                      }
                      else {
                        lVar34 = 0xd;
                      }
                    }
                    else {
                      lVar34 = 0xc;
                    }
                  }
                  else {
                    lVar34 = 0xb;
                  }
                }
                else {
                  lVar34 = 10;
                }
              }
              else {
                lVar34 = 9;
              }
            }
            else {
              lVar34 = 8;
            }
            goto LAB_008fc9e0;
          }
          pauVar20 = pauVar20 + 1;
          param_3[2] = pauVar20;
        }
        do {
          while (7 < (ulong)((long)pauVar3 - (long)pauVar29)) {
            uVar16 = *(ulong *)*pauVar29;
            uVar16 = ((uVar16 ^ 0x7f7f7f7f7f7f7f7f) + 0xfefefefefefefeff |
                     uVar16 + 0xdfdfdfdfdfdfdfe0) & (uVar16 ^ 0xffffffffffffffff);
            if ((uVar16 & 0x8080808080808080) != 0) {
              uVar33 = (uint)uVar16;
              if ((uVar33 >> 7 & 1) == 0) {
                if ((uVar33 >> 0xf & 1) == 0) {
                  if ((uVar33 >> 0x17 & 1) == 0) {
                    if ((int)uVar33 < 0) {
                      lVar34 = 3;
                    }
                    else if ((uVar16 >> 0x27 & 1) == 0) {
                      if ((uVar16 >> 0x2f & 1) == 0) {
                        lVar34 = 6;
                        if ((uVar16 & 0x80000000000000) == 0) {
                          lVar34 = 7;
                        }
                      }
                      else {
                        lVar34 = 5;
                      }
                    }
                    else {
                      lVar34 = 4;
                    }
                  }
                  else {
                    lVar34 = 2;
                  }
                }
                else {
                  lVar34 = 1;
                }
              }
              else {
                lVar34 = 0;
              }
              pauVar29 = (undefined1 (*) [16])(*pauVar29 + lVar34);
              param_3[2] = pauVar29;
              break;
            }
            param_3[2] = (undefined1 (*) [16])(*pauVar29 + 8);
            pauVar29 = (undefined1 (*) [16])(*pauVar29 + 8);
          }
          if ((pauVar3 <= pauVar29) || ((&DAT_00331520)[(byte)(*pauVar29)[0]] != '\x01'))
          goto LAB_008fc9e8;
          param_3[2] = (undefined1 (*) [16])(*pauVar29 + 1);
          pauVar29 = (undefined1 (*) [16])(*pauVar29 + 1);
        } while( true );
      }
    }
    goto LAB_008fcc28;
  }
  if (((bVar2 & 1) != 0) && ((bVar15 == 0x20 || (bVar15 == 9)))) {
    if (pauVar31 < pauVar3) {
      puVar18 = (undefined1 *)((long)pauVar3 + (-1 - (long)pauVar19));
      do {
        if (((*pauVar31)[0] != ' ') && ((*pauVar31)[0] != '\t')) break;
        pauVar31 = (undefined1 (*) [16])(*pauVar31 + 1);
        puVar18 = puVar18 + -1;
        param_3[2] = pauVar31;
      } while (puVar18 != (undefined1 *)0x0);
    }
    goto LAB_008fcaa4;
  }
  if ((cVar6 == '\0') || ((ulong)bVar15 == 0)) {
LAB_008fcbec:
    *(undefined1 *)(param_1 + 1) = 0;
    uVar23 = 2;
    goto LAB_008fcc2c;
  }
  while (bVar15 != 10) {
    if (bVar15 == 0xd) {
      if (pauVar3 <= pauVar31) goto LAB_008fcc5c;
      cVar27 = (*pauVar31)[0];
      param_3[2] = (undefined1 (*) [16])(*pauVar31 + 1);
      pauVar31 = (undefined1 (*) [16])(*pauVar31 + 1);
      goto joined_r0x008fcaa0;
    }
    if (pauVar3 <= pauVar31) goto LAB_008fcc28;
    bVar15 = (*pauVar31)[0];
    param_3[2] = (undefined1 (*) [16])(*pauVar31 + 1);
    pauVar31 = (undefined1 (*) [16])(*pauVar31 + 1);
    if (bVar15 == 0) goto LAB_008fcbec;
  }
  goto LAB_008fcaa4;
joined_r0x008fcac4:
  if (bVar15 == 0) goto LAB_008fcc70;
  if (bVar15 == 10) goto LAB_008fcaa4;
  pauVar20 = pauVar31;
  if (bVar15 == 0xd) goto LAB_008fcb2c;
  if (pauVar3 <= pauVar31) goto LAB_008fcc28;
  bVar15 = (*pauVar31)[0];
  param_3[2] = (undefined1 (*) [16])(*pauVar31 + 1);
  pauVar31 = (undefined1 (*) [16])(*pauVar31 + 1);
  goto joined_r0x008fcac4;
LAB_008fc9e8:
  if (pauVar3 <= pauVar29) goto LAB_008fcc28;
  pauVar20 = (undefined1 (*) [16])(*pauVar29 + 1);
  cVar27 = (*pauVar29)[0];
  param_3[2] = pauVar20;
  if (cVar27 == '\n') {
    lVar30 = -1;
  }
  else {
    if (cVar27 != '\r') goto LAB_008fcaf4;
    if (pauVar3 <= pauVar20) goto LAB_008fcc5c;
    cVar27 = (*pauVar29)[1];
    pauVar20 = (undefined1 (*) [16])(*pauVar29 + 2);
    param_3[2] = pauVar20;
    if (cVar27 != '\n') goto LAB_008fcc50;
    lVar30 = -2;
  }
  if ((bVar8 & 1) != 0) {
    if (pauVar3 <= pauVar20) goto LAB_008fcc28;
    if (((*pauVar20)[0] == '\t') || ((*pauVar20)[0] == ' ')) goto LAB_008fc7ec;
  }
  *param_3 = pauVar20;
  if (puVar24 == puVar1) goto LAB_008fcc30;
  lVar34 = (long)pauVar31 - (long)pauVar21;
  puVar22 = (undefined1 *)((long)pauVar20 + (lVar30 - (long)pauVar19));
  puVar18 = puVar22;
  puVar32 = puVar22;
  if (puVar22 == (undefined1 *)0x0) goto LAB_008fcb5c;
  goto LAB_008fcba0;
LAB_008fcaf4:
  pauVar31 = pauVar20;
  if (cVar6 == '\0') {
LAB_008fcc70:
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = 2;
    uVar25 = uVar26;
    goto LAB_008fcc30;
  }
  while( true ) {
    if (cVar27 == '\0') goto LAB_008fcc70;
    if (cVar27 == '\n') goto LAB_008fcaa4;
    pauVar20 = pauVar31;
    if (cVar27 == '\r') break;
    if (pauVar3 <= pauVar31) goto LAB_008fcc28;
    cVar27 = (*pauVar31)[0];
    param_3[2] = (undefined1 (*) [16])(*pauVar31 + 1);
    pauVar31 = (undefined1 (*) [16])(*pauVar31 + 1);
  }
LAB_008fcb2c:
  if (pauVar20 < pauVar3) {
    pauVar31 = (undefined1 (*) [16])(*pauVar20 + 1);
    cVar27 = (*pauVar20)[0];
    param_3[2] = pauVar31;
    if (cVar27 == '\n') {
LAB_008fcaa4:
      *param_3 = pauVar31;
      pauVar21 = pauVar31;
      pauVar19 = pauVar31;
      if (pauVar3 <= pauVar31) goto LAB_008fcc28;
      goto LAB_008fc3d0;
    }
LAB_008fcc50:
    uVar23 = 2;
    *(undefined1 *)(param_1 + 1) = 1;
  }
LAB_008fcc5c:
  *param_1 = uVar23;
  uVar25 = uVar26;
  goto LAB_008fcc30;
  while (puVar32 = puVar32 + -1, puVar32 != (undefined1 *)0x0) {
LAB_008fcba0:
    if (0x20 < (byte)pauVar19[-1][(long)puVar32 + 0xf] ||
        (1L << ((ulong)(byte)pauVar19[-1][(long)puVar32 + 0xf] & 0x3f) & 0x100002600U) == 0) {
      puVar18 = puVar32;
      if (puVar22 < puVar32) {
                    /* try { // try from 008fcc98 to 008fccaf has its CatchHandler @ 008fccb4 */
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (0,puVar32,puVar22,&PTR_s__root__cargo_registry_src_index__00aefd70);
      }
      break;
    }
  }
LAB_008fcb5c:
  *puVar24 = pauVar21;
  puVar24[1] = lVar34;
  uVar26 = uVar26 + 1;
  puVar24[2] = pauVar19;
  puVar24[3] = puVar18;
  puVar24 = puVar24 + 4;
  pauVar19 = pauVar20;
  if (pauVar3 <= pauVar20) goto LAB_008fcc28;
  goto LAB_008fc3c4;
}


// ===== 008fccbc  <httparse::[3]::httparse::ParserConfig>::parse_request =====

/* WARNING: Unknown calling convention: __rustcall */
/* <httparse::[3]::httparse::ParserConfig>::parse_request */

void __rustcall
<httparse::[3]::httparse::ParserConfig>::parse_request
          (long *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  *param_3 = 8;
  param_3[1] = 0;
  FUN_008fcdcc(param_1);
  if (*param_1 != 0) {
    *param_3 = uVar1;
    param_3[1] = uVar2;
  }
  return;
}


// ===== 008fcd10  <httparse::[3]::httparse::ParserConfig>::parse_response =====

/* WARNING: Unknown calling convention: __rustcall */
/* <httparse::[3]::httparse::ParserConfig>::parse_response */

void __rustcall
<httparse::[3]::httparse::ParserConfig>::parse_response
          (long *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  uVar2 = *(undefined8 *)(param_3 + 0x18);
  *(undefined8 *)(param_3 + 0x10) = 8;
  *(undefined8 *)(param_3 + 0x18) = 0;
  FUN_008fd58c(param_1);
  if (*param_1 != 0) {
    *(undefined8 *)(param_3 + 0x10) = uVar1;
    *(undefined8 *)(param_3 + 0x18) = uVar2;
  }
  return;
}


// ===== 008fcd64  <httparse::[3]::httparse::ParserConfig>::parse_request_with_uninit_headers =====

/* WARNING: Unknown calling convention: __rustcall */
/* <httparse::[3]::httparse::ParserConfig>::parse_request_with_uninit_headers */

void __rustcall
<httparse::[3]::httparse::ParserConfig>::parse_request_with_uninit_headers(undefined8 param_1)

{
  FUN_008fcdcc(param_1);
  return;
}


// ===== 008fcd78  <httparse::[3]::httparse::ParserConfig>::parse_response_with_uninit_headers =====

/* WARNING: Unknown calling convention: __rustcall */
/* <httparse::[3]::httparse::ParserConfig>::parse_response_with_uninit_headers */

void __rustcall
<httparse::[3]::httparse::ParserConfig>::parse_response_with_uninit_headers(undefined8 param_1)

{
  FUN_008fd58c(param_1);
  return;
}


// ===== 008fcd8c  <httparse::[4]::httparse::Request>::parse_with_uninit_headers =====

/* WARNING: Unknown calling convention: __rustcall */
/* <httparse::[4]::httparse::Request>::parse_with_uninit_headers */

void __rustcall
<httparse::[4]::httparse::Request>::parse_with_uninit_headers
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  undefined4 uStack_18;
  undefined3 uStack_14;
  
  uStack_14 = 0;
  uStack_18 = 0;
  FUN_008fcdcc(param_1,param_2,param_3,param_4,&uStack_18,param_5,param_6);
  return;
}


// ===== 008fcdcc  FUN_008fcdcc =====

void FUN_008fcdcc(undefined8 *param_1,undefined8 *param_2,undefined1 (*param_3) [16],long param_4,
                 long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 (*pauVar1) [16];
  uint uVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 uVar8;
  undefined1 *puVar9;
  undefined1 (*pauVar10) [16];
  uint uVar11;
  undefined1 (*pauVar12) [16];
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 (*pauVar17) [16];
  unkuint9 Var18;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 (*local_88) [16];
  undefined1 (*local_80) [16];
  undefined1 (*local_78) [16];
  undefined2 local_6c;
  undefined1 local_6a;
  undefined1 local_69;
  ulong local_68;
  undefined1 local_60;
  undefined7 uStack_5f;
  undefined8 uStack_58;
  undefined1 auVar19 [11];
  undefined1 auVar20 [12];
  undefined1 auVar21 [13];
  undefined1 auVar22 [14];
  undefined1 auVar23 [15];
  
  pauVar1 = (undefined1 (*) [16])(*param_3 + param_4);
  uVar13 = 1;
  pauVar10 = param_3;
  if (param_4 != 0) {
    do {
      while( true ) {
        bVar3 = (*pauVar10)[0];
        uVar11 = (uint)bVar3;
        if (bVar3 == 10) break;
        if (bVar3 != 0xd) {
          if (3 < (ulong)((long)pauVar1 - (long)pauVar10)) {
            uVar2 = *(uint *)*pauVar10;
            uVar5 = uVar2 >> 8 & 0xff;
            uVar11 = uVar2 & 0xff;
            uVar6 = uVar2 >> 0x10 & 0xff;
            if (uVar11 == 0x47) {
              if (((uVar2 >> 0x18 == 0x20) && (uVar5 == 0x45)) && (uVar6 == 0x54)) {
                pauVar12 = (undefined1 (*) [16])(*pauVar10 + 4);
                lVar14 = 3;
                goto LAB_008fcfb4;
              }
            }
            else if (((uVar11 == 0x50) && (uVar2 >> 0x18 == 0x54)) &&
                    ((uVar5 == 0x4f && (uVar6 == 0x53)))) {
              if (((undefined1 (*) [16])(*pauVar10 + 4) < pauVar1) &&
                 ((*(undefined1 (*) [16])(*pauVar10 + 4))[0] == ' ')) {
                pauVar12 = (undefined1 (*) [16])(*pauVar10 + 5);
                lVar14 = 4;
                goto LAB_008fcfb4;
              }
              uVar11 = 0x50;
            }
          }
          if (pauVar10 < pauVar1) {
            if ((0x19 < uVar11 - 0x41) && (PTR_TOKEN_MAP_00b010b8[uVar11] != '\x01'))
            goto LAB_008fcf8c;
            if ((undefined1 (*) [16])(*pauVar10 + 1) < pauVar1) {
              lVar14 = -1;
              uVar13 = 1;
              pauVar12 = pauVar10;
              goto LAB_008fcf68;
            }
          }
          *param_1 = 1;
          return;
        }
        if (pauVar1 <= (undefined1 (*) [16])(*pauVar10 + 1)) goto LAB_008fcec0;
        if ((*pauVar10)[1] != '\n') {
          uVar13 = 2;
          *(undefined1 *)(param_1 + 1) = 2;
          goto LAB_008fcec0;
        }
        puVar9 = *pauVar10;
        pauVar10 = (undefined1 (*) [16])(puVar9 + 2);
        if (pauVar1 <= (undefined1 (*) [16])(puVar9 + 2)) goto LAB_008fcec0;
      }
      puVar9 = *pauVar10;
      pauVar10 = (undefined1 (*) [16])(puVar9 + 1);
    } while ((undefined1 (*) [16])(puVar9 + 1) < pauVar1);
  }
LAB_008fcec0:
  *param_1 = uVar13;
  return;
LAB_008fcf68:
  bVar3 = (*pauVar12)[1];
  if (bVar3 != 0x20) {
    if ((0x19 < bVar3 - 0x41) && (PTR_TOKEN_MAP_00b010b8[bVar3] != '\x01')) goto LAB_008fcf8c;
    puVar9 = *pauVar12;
    pauVar12 = (undefined1 (*) [16])(*pauVar12 + 1);
    lVar14 = lVar14 + -1;
    if ((undefined1 (*) [16])(puVar9 + 2) == pauVar1) goto LAB_008fcf98;
    goto LAB_008fcf68;
  }
  pauVar12 = (undefined1 (*) [16])(*pauVar12 + 2);
  lVar14 = -lVar14;
LAB_008fcfb4:
  cVar4 = *(char *)(param_5 + 2);
  param_2[2] = pauVar10;
  param_2[3] = lVar14;
  if (cVar4 == '\x01') {
    if (pauVar1 <= pauVar12) goto LAB_008fd214;
    uVar15 = (long)(*param_3 + param_4) - (long)pauVar12;
    for (uVar16 = uVar15 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
      if ((*pauVar12)[0] != ' ') goto LAB_008fd06c;
      pauVar12 = (undefined1 (*) [16])(*pauVar12 + 1);
    }
    if (uVar15 - 1 < 3) goto LAB_008fd214;
    pauVar12 = (undefined1 (*) [16])(*pauVar12 + 3);
    while( true ) {
      if (pauVar12[-1][0xd] != ' ') {
        pauVar12 = (undefined1 (*) [16])(pauVar12[-1] + 0xd);
        goto LAB_008fd06c;
      }
      if (pauVar12[-1][0xe] != ' ') break;
      if (pauVar12[-1][0xf] != ' ') {
        pauVar12 = (undefined1 (*) [16])(pauVar12[-1] + 0xf);
        goto LAB_008fd06c;
      }
      if ((*pauVar12)[0] != ' ') goto LAB_008fd06c;
      puVar9 = *pauVar12;
      pauVar12 = (undefined1 (*) [16])(*pauVar12 + 4);
      if (puVar9 + 1 == *param_3 + param_4) goto LAB_008fd214;
    }
    pauVar12 = (undefined1 (*) [16])(pauVar12[-1] + 0xe);
  }
LAB_008fd06c:
  uVar16 = (long)pauVar1 - (long)pauVar12;
  pauVar10 = pauVar12;
  if (0xf < uVar16) {
    do {
      auVar24[8] = 0x21;
      auVar24._0_8_ = 0x2121212121212121;
      auVar24[9] = 0x21;
      auVar24[10] = 0x21;
      auVar24[0xb] = 0x21;
      auVar24[0xc] = 0x21;
      auVar24[0xd] = 0x21;
      auVar24[0xe] = 0x21;
      auVar24[0xf] = 0x21;
      auVar25 = NEON_cmhi(auVar24,*pauVar10,1);
      auVar7[8] = 0x7f;
      auVar7._0_8_ = 0x7f7f7f7f7f7f7f7f;
      auVar7[9] = 0x7f;
      auVar7[10] = 0x7f;
      auVar7[0xb] = 0x7f;
      auVar7[0xc] = 0x7f;
      auVar7[0xd] = 0x7f;
      auVar7[0xe] = 0x7f;
      auVar7[0xf] = 0x7f;
      auVar24 = NEON_cmeq(*pauVar10,auVar7,1);
      lVar14 = CONCAT17(auVar25[7] | auVar24[7],
                        CONCAT16(auVar25[6] | auVar24[6],
                                 CONCAT15(auVar25[5] | auVar24[5],
                                          CONCAT14(auVar25[4] | auVar24[4],
                                                   CONCAT13(auVar25[3] | auVar24[3],
                                                            CONCAT12(auVar25[2] | auVar24[2],
                                                                     CONCAT11(auVar25[1] |
                                                                              auVar24[1],
                                                                              auVar25[0] |
                                                                              auVar24[0])))))));
      Var18 = CONCAT18(auVar25[8] | auVar24[8],lVar14);
      auVar19._0_10_ = CONCAT19(auVar25[9] | auVar24[9],Var18);
      auVar19[10] = auVar25[10] | auVar24[10];
      auVar20[0xb] = auVar25[0xb] | auVar24[0xb];
      auVar20._0_11_ = auVar19;
      auVar21[0xc] = auVar25[0xc] | auVar24[0xc];
      auVar21._0_12_ = auVar20;
      auVar22[0xd] = auVar25[0xd] | auVar24[0xd];
      auVar22._0_13_ = auVar21;
      auVar23[0xe] = auVar25[0xe] | auVar24[0xe];
      auVar23._0_14_ = auVar22;
      auVar25[0xf] = auVar25[0xf] | auVar24[0xf];
      auVar25._0_15_ = auVar23;
      if (lVar14 != 0) {
        if ((Var18 & 0xff) == 0) {
          if ((auVar19._0_10_ & 0xff00) == 0) {
            if ((auVar19 & (undefined1  [11])0xff0000) == (undefined1  [11])0x0) {
              if ((auVar20 & (undefined1  [12])0xff000000) == (undefined1  [12])0x0) {
                if ((auVar21 & (undefined1  [13])0xff00000000) == (undefined1  [13])0x0) {
                  if ((auVar22 & (undefined1  [14])0xff0000000000) == (undefined1  [14])0x0) {
                    lVar14 = 6;
LAB_008fd510:
                    if ((auVar23 & (undefined1  [15])0xff000000000000) == (undefined1  [15])0x0) {
                      lVar14 = lVar14 + 1;
                    }
                    pauVar10 = (undefined1 (*) [16])(*pauVar10 + lVar14);
                  }
                  else {
                    pauVar10 = (undefined1 (*) [16])(*pauVar10 + 5);
                  }
                }
                else {
                  pauVar10 = (undefined1 (*) [16])(*pauVar10 + 4);
                }
              }
              else {
                pauVar10 = (undefined1 (*) [16])(*pauVar10 + 3);
              }
            }
            else {
              pauVar10 = (undefined1 (*) [16])(*pauVar10 + 2);
            }
          }
          else {
            pauVar10 = (undefined1 (*) [16])(*pauVar10 + 1);
          }
        }
        goto LAB_008fd1a4;
      }
      if (auVar25._8_8_ != 0) {
        if ((Var18 & 0xff) == 0) {
          if ((auVar19._0_10_ & 0xff00) == 0) {
            if ((auVar19 & (undefined1  [11])0xff0000) == (undefined1  [11])0x0) {
              if ((auVar20 & (undefined1  [12])0xff000000) == (undefined1  [12])0x0) {
                if ((auVar21 & (undefined1  [13])0xff00000000) == (undefined1  [13])0x0) {
                  if ((auVar22 & (undefined1  [14])0xff0000000000) == (undefined1  [14])0x0) {
                    lVar14 = 0xe;
                    goto LAB_008fd510;
                  }
                  pauVar10 = (undefined1 (*) [16])(*pauVar10 + 0xd);
                }
                else {
                  pauVar10 = (undefined1 (*) [16])(*pauVar10 + 0xc);
                }
              }
              else {
                pauVar10 = (undefined1 (*) [16])(*pauVar10 + 0xb);
              }
            }
            else {
              pauVar10 = (undefined1 (*) [16])(*pauVar10 + 10);
            }
          }
          else {
            pauVar10 = (undefined1 (*) [16])(*pauVar10 + 9);
          }
        }
        else {
          pauVar10 = (undefined1 (*) [16])(*pauVar10 + 8);
        }
        goto LAB_008fd1a4;
      }
      uVar16 = uVar16 - 0x10;
      pauVar10 = pauVar10 + 1;
      if (uVar16 < 0x10) break;
    } while( true );
  }
joined_r0x008fd0e8:
  do {
    if (7 < (ulong)((long)pauVar1 - (long)pauVar10)) {
      uVar16 = *(ulong *)*pauVar10;
      uVar16 = ((uVar16 ^ 0x7f7f7f7f7f7f7f7f) + 0xfefefefefefefeff | uVar16 + 0xdedededededededf) &
               (uVar16 ^ 0xffffffffffffffff);
      if ((uVar16 & 0x8080808080808080) == 0) {
        pauVar10 = (undefined1 (*) [16])(*pauVar10 + 8);
        goto joined_r0x008fd0e8;
      }
      uVar11 = (uint)uVar16;
      if ((uVar11 >> 7 & 1) == 0) {
        if ((uVar11 >> 0xf & 1) == 0) {
          if ((uVar11 >> 0x17 & 1) == 0) {
            if ((int)uVar11 < 0) {
              lVar14 = 3;
            }
            else if ((uVar16 >> 0x27 & 1) == 0) {
              if ((uVar16 >> 0x2f & 1) == 0) {
                lVar14 = 6;
                if ((uVar16 & 0x80000000000000) == 0) {
                  lVar14 = 7;
                }
              }
              else {
                lVar14 = 5;
              }
            }
            else {
              lVar14 = 4;
            }
          }
          else {
            lVar14 = 2;
          }
        }
        else {
          lVar14 = 1;
        }
      }
      else {
        lVar14 = 0;
      }
      pauVar10 = (undefined1 (*) [16])(*pauVar10 + lVar14);
    }
    if ((pauVar1 <= pauVar10) || (PTR_URI_MAP_00b010c0[(byte)(*pauVar10)[0]] != '\x01'))
    goto LAB_008fd1a4;
    pauVar10 = (undefined1 (*) [16])(*pauVar10 + 1);
  } while( true );
LAB_008fcf8c:
  uVar13 = 2;
  *(undefined1 *)(param_1 + 1) = 4;
LAB_008fcf98:
  *param_1 = uVar13;
  return;
LAB_008fd1a4:
  if (pauVar1 <= pauVar10) {
LAB_008fd214:
    *param_1 = 1;
    return;
  }
  pauVar17 = (undefined1 (*) [16])(*pauVar10 + 1);
  if ((((long)pauVar10 - (long)pauVar12 == 0) || ((*pauVar10)[0] != ' ')) ||
     (local_98 = param_6, uStack_90 = param_7, local_88 = pauVar17, local_80 = pauVar1,
     local_78 = pauVar17,
     core::str::converts::from_utf8(&local_68,pauVar12,(long)pauVar10 - (long)pauVar12),
     local_68 == 1)) {
    *(undefined1 *)(param_1 + 1) = 4;
    *param_1 = 2;
    return;
  }
  param_2[4] = CONCAT71(uStack_5f,local_60);
  param_2[5] = uStack_58;
  if (cVar4 != '\0') {
    if (pauVar1 <= pauVar17) goto LAB_008fd478;
    uVar15 = (long)(*param_3 + param_4) - (long)pauVar17;
    local_88 = pauVar17;
    for (uVar16 = uVar15 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
      local_78 = local_88;
      if ((*local_88)[0] != ' ') goto LAB_008fd39c;
      local_88 = (undefined1 (*) [16])(*local_88 + 1);
    }
    if (uVar15 - 1 < 3) goto LAB_008fd478;
    local_88 = (undefined1 (*) [16])(*local_88 + 3);
    while( true ) {
      if (local_88[-1][0xd] != ' ') {
        local_88 = (undefined1 (*) [16])(local_88[-1] + 0xd);
        local_78 = local_88;
        goto LAB_008fd39c;
      }
      if (local_88[-1][0xe] != ' ') break;
      if (local_88[-1][0xf] != ' ') {
        local_88 = (undefined1 (*) [16])(local_88[-1] + 0xf);
        local_78 = local_88;
        goto LAB_008fd39c;
      }
      local_78 = local_88;
      if ((*local_88)[0] != ' ') goto LAB_008fd39c;
      puVar9 = *local_88;
      local_88 = (undefined1 (*) [16])(*local_88 + 4);
      if (puVar9 + 1 == *param_3 + param_4) goto LAB_008fd478;
    }
    local_88 = (undefined1 (*) [16])(local_88[-1] + 0xe);
    local_78 = local_88;
  }
LAB_008fd39c:
  uVar11 = FUN_008fc068(&local_88);
  pauVar1 = local_80;
  uVar8 = (undefined1)(uVar11 >> 8);
  if ((uVar11 & 0xff) == 2) {
    uVar13 = 2;
    *(undefined1 *)(param_1 + 1) = uVar8;
LAB_008fd3d4:
    *param_1 = uVar13;
    return;
  }
  uVar13 = 1;
  if ((uVar11 & 1) != 0) goto LAB_008fd3d4;
  *(undefined1 *)(param_2 + 6) = 1;
  *(undefined1 *)((long)param_2 + 0x31) = uVar8;
  if (local_80 <= local_78) {
LAB_008fd478:
    *param_1 = 1;
    return;
  }
  pauVar10 = (undefined1 (*) [16])(*local_78 + 1);
  if ((*local_78)[0] != '\n') {
    if ((*local_78)[0] != '\r') {
      *(undefined1 *)(param_1 + 1) = 2;
      *param_1 = 2;
      return;
    }
    if (local_80 <= pauVar10) goto LAB_008fd498;
    pauVar10 = (undefined1 (*) [16])(*local_78 + 2);
    if ((*local_78)[1] != '\n') {
      *(undefined1 *)(param_1 + 1) = 2;
      *param_1 = 2;
      return;
    }
  }
  local_6a = *(undefined1 *)(param_5 + 4);
  local_69 = *(undefined1 *)(param_5 + 6);
  local_6c = 0;
  local_88 = pauVar10;
  local_78 = pauVar10;
  FUN_008fc30c(&local_68,&local_98,&local_88,&local_6c);
  if (local_68 == 2) {
    *(undefined1 *)(param_1 + 1) = local_60;
    *param_1 = 2;
    return;
  }
  if ((local_68 & 1) == 0) {
    *param_2 = local_98;
    param_2[1] = uStack_90;
    *param_1 = 0;
    param_1[1] = (long)pauVar10 + (param_4 - (long)pauVar1) + CONCAT71(uStack_5f,local_60);
    return;
  }
LAB_008fd498:
  *param_1 = 1;
  return;
}


// ===== 008fd51c  <httparse::[4]::httparse::Request>::parse =====

/* WARNING: Unknown calling convention: __rustcall */
/* <httparse::[4]::httparse::Request>::parse */

void __rustcall
<httparse::[4]::httparse::Request>::parse
          (long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uStack_38;
  undefined3 uStack_34;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  *param_2 = 8;
  param_2[1] = 0;
  uStack_34 = 0;
  uStack_38 = 0;
  FUN_008fcdcc(param_1,param_2,param_3,param_4,&uStack_38,uVar1,uVar2);
  if (*param_1 != 0) {
    *param_2 = uVar1;
    param_2[1] = uVar2;
  }
  return;
}


// ===== 008fd58c  FUN_008fd58c =====

void FUN_008fd58c(undefined8 *param_1,long *param_2,long *param_3,long param_4,undefined2 *param_5,
                 long param_6,long param_7)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  char cVar4;
  long *plVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  long local_90;
  long lStack_88;
  long *local_80;
  long *local_78;
  long *local_70;
  byte local_68;
  undefined1 uStack_67;
  undefined6 uStack_66;
  undefined1 local_60;
  undefined7 uStack_5f;
  long local_58;
  undefined2 local_34;
  undefined2 local_32;
  
  local_78 = (long *)((long)param_3 + param_4);
  uVar9 = 1;
  plVar7 = param_3;
  if (param_4 != 0) {
    do {
      while (cVar4 = (char)*plVar7, cVar4 != '\n') {
        if (cVar4 != '\r') {
          if ((ulong)((long)local_78 - (long)plVar7) < 8) {
            if ((plVar7 < local_78) &&
               ((cVar4 != 'H' ||
                (((long *)((long)plVar7 + 1U) < local_78 &&
                 ((*(char *)((long)plVar7 + 1) != 'T' ||
                  (((long *)((long)plVar7 + 2U) < local_78 &&
                   ((*(char *)((long)plVar7 + 2) != 'T' ||
                    (((long *)((long)plVar7 + 3U) < local_78 &&
                     ((*(char *)((long)plVar7 + 3) != 'P' ||
                      (((long *)((long)plVar7 + 4U) < local_78 &&
                       ((*(char *)((long)plVar7 + 4) != '/' ||
                        (((long *)((long)plVar7 + 5U) < local_78 &&
                         ((*(char *)((long)plVar7 + 5) != '1' ||
                          (((long *)((long)plVar7 + 6U) < local_78 &&
                           (*(char *)((long)plVar7 + 6U) != '.')))))))))))))))))))))))))) {
LAB_008fd734:
              *(undefined1 *)(param_1 + 1) = 6;
              *param_1 = 2;
              return;
            }
            goto LAB_008fd7c0;
          }
          if (*plVar7 == 0x302e312f50545448) {
            *(undefined1 *)((long)param_2 + 0x21) = 0;
            *(undefined1 *)(param_2 + 4) = 1;
          }
          else {
            if (*plVar7 != 0x312e312f50545448) goto LAB_008fd734;
            *(undefined1 *)((long)param_2 + 0x21) = 1;
            *(undefined1 *)(param_2 + 4) = 1;
          }
          uVar9 = 1;
          if (plVar7 + 1 < local_78) {
            local_70 = (long *)((long)plVar7 + 9);
            if ((char)plVar7[1] == ' ') {
              cVar4 = *(char *)((long)param_5 + 3);
              if (cVar4 != '\x01') goto LAB_008fd844;
              if (local_78 <= local_70) goto LAB_008fd7c0;
              pcVar2 = (char *)(param_4 + (long)param_3);
              uVar6 = (int)pcVar2 - (int)local_70;
              uVar8 = (ulong)uVar6 & 3;
              if ((uVar6 & 3) == 0) goto LAB_008fd7b0;
              goto LAB_008fd798;
            }
            uVar9 = 2;
            *(undefined1 *)(param_1 + 1) = 6;
          }
          *param_1 = uVar9;
          return;
        }
        if (local_78 <= (long *)((long)plVar7 + 1U)) goto LAB_008fd674;
        if (*(char *)((long)plVar7 + 1) != '\n') {
          uVar9 = 2;
          *(undefined1 *)(param_1 + 1) = 2;
          goto LAB_008fd674;
        }
        plVar7 = (long *)((long)plVar7 + 2);
        if (local_78 <= plVar7) goto LAB_008fd674;
      }
      plVar7 = (long *)((long)plVar7 + 1);
    } while (plVar7 < local_78);
  }
LAB_008fd674:
  *param_1 = uVar9;
  return;
  while( true ) {
    uVar8 = uVar8 - 1;
    local_70 = (long *)((long)local_70 + 1);
    if (uVar8 == 0) break;
LAB_008fd798:
    if ((char)*local_70 != ' ') goto LAB_008fd844;
  }
LAB_008fd7b0:
  if (pcVar2 + (-10 - (long)plVar7) < (char *)0x3) {
LAB_008fd7c0:
    *param_1 = 1;
    return;
  }
  local_70 = (long *)((long)local_70 + 3);
  while( true ) {
    if (*(char *)((long)local_70 - 3) != ' ') {
      local_70 = (long *)((long)local_70 - 3);
      goto LAB_008fd844;
    }
    if (*(char *)((long)local_70 - 2) != ' ') break;
    if (*(char *)((long)local_70 - 1) != ' ') {
      local_70 = (long *)((long)local_70 - 1);
      goto LAB_008fd844;
    }
    if ((char)*local_70 != ' ') goto LAB_008fd844;
    pcVar1 = (char *)((long)local_70 + 1);
    local_70 = (long *)((long)local_70 + 4);
    if (pcVar1 == pcVar2) goto LAB_008fd7c0;
  }
  local_70 = (long *)((long)local_70 - 2);
LAB_008fd844:
  local_90 = param_6;
  lStack_88 = param_7;
  local_80 = local_70;
  uVar6 = FUN_008fbe20(&local_80);
  if ((uVar6 & 0xffff) == 2) {
    uVar9 = 2;
    *(char *)(param_1 + 1) = (char)(uVar6 >> 0x10);
LAB_008fd888:
    *param_1 = uVar9;
    return;
  }
  uVar9 = 1;
  if ((uVar6 & 1) != 0) goto LAB_008fd888;
  *(undefined2 *)((long)param_2 + 0x22) = 1;
  *(short *)((long)param_2 + 0x24) = (short)(uVar6 >> 0x10);
  if (local_78 <= local_70) goto LAB_008fd994;
  local_80 = (long *)((long)local_70 + 1);
  cVar3 = (char)*local_70;
  if (cVar3 == '\n') {
    *param_2 = 1;
    param_2[1] = 0;
    local_70 = local_80;
  }
  else if (cVar3 == '\r') {
    if (local_78 <= local_80) goto LAB_008fd994;
    local_80 = (long *)((long)local_70 + 2);
    if (*(char *)((long)local_70 + 1) != '\n') {
      *(undefined1 *)(param_1 + 1) = 3;
      *param_1 = 2;
      return;
    }
    *param_2 = 1;
    param_2[1] = 0;
    local_70 = local_80;
  }
  else {
    if (cVar3 != ' ') {
      *(undefined1 *)(param_1 + 1) = 3;
      *param_1 = 2;
      return;
    }
    if (cVar4 != '\0') {
      if (local_80 < local_78) {
        uVar6 = ~((int)local_70 - (int)local_78);
        uVar8 = (ulong)uVar6 & 3;
        if ((uVar6 & 3) != 0) {
          do {
            if ((char)*local_80 != ' ') goto LAB_008fda58;
            uVar8 = uVar8 - 1;
            local_80 = (long *)((long)local_80 + 1);
          } while (uVar8 != 0);
        }
        if ((char *)0x2 < (char *)((long)local_78 + (-2 - (long)local_70))) {
          local_80 = (long *)((long)local_80 + 3);
          do {
            if (*(char *)((long)local_80 + -3) != ' ') {
              local_80 = (long *)((long)local_80 + -3);
              goto LAB_008fda58;
            }
            if (*(char *)((long)local_80 + -2) != ' ') {
              local_80 = (long *)((long)local_80 + -2);
              goto LAB_008fda58;
            }
            if (*(char *)((long)local_80 + -1) != ' ') {
              local_80 = (long *)((long)local_80 + -1);
              goto LAB_008fda58;
            }
            if ((char)*local_80 != ' ') goto LAB_008fda58;
            plVar7 = (long *)((long)local_80 + 1);
            local_80 = (long *)((long)local_80 + 4);
          } while (plVar7 != local_78);
        }
      }
LAB_008fd994:
      *param_1 = 1;
      return;
    }
LAB_008fda58:
    local_70 = local_80;
    FUN_008fbec0(&local_68,&local_80);
    if ((local_68 & 1) != 0) {
      *(undefined1 *)(param_1 + 1) = uStack_67;
      *param_1 = 2;
      return;
    }
    if (CONCAT71(uStack_5f,local_60) == 0) goto LAB_008fda9c;
    *param_2 = CONCAT71(uStack_5f,local_60);
    param_2[1] = local_58;
  }
  plVar5 = local_70;
  plVar7 = local_78;
  local_34 = *param_5;
  local_32 = param_5[2];
  FUN_008fc30c(&local_68,&local_90,&local_80,&local_34);
  if (CONCAT62(uStack_66,CONCAT11(uStack_67,local_68)) == 2) {
    *(undefined1 *)(param_1 + 1) = local_60;
    *param_1 = 2;
    return;
  }
  if ((local_68 & 1) == 0) {
    param_2[2] = local_90;
    param_2[3] = lStack_88;
    *param_1 = 0;
    param_1[1] = (char *)((long)plVar5 + (param_4 - (long)plVar7) + CONCAT71(uStack_5f,local_60));
    return;
  }
LAB_008fda9c:
  *param_1 = 1;
  return;
}


// ===== 008fdaa8  <httparse::[5]::httparse::Response>::parse =====

/* WARNING: Unknown calling convention: __rustcall */
/* <httparse::[5]::httparse::Response>::parse */

void __rustcall
<httparse::[5]::httparse::Response>::parse
          (long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uStack_38;
  undefined3 uStack_34;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x10) = 8;
  *(undefined8 *)(param_2 + 0x18) = 0;
  uStack_34 = 0;
  uStack_38 = 0;
  FUN_008fd58c(param_1,param_2,param_3,param_4,&uStack_38,uVar1,uVar2);
  if (*param_1 != 0) {
    *(undefined8 *)(param_2 + 0x10) = uVar1;
    *(undefined8 *)(param_2 + 0x18) = uVar2;
  }
  return;
}


// ===== 008fdb18  <httparse::InvalidChunkSize_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <httparse::InvalidChunkSize as core::fmt::Display>::fmt */

void __rustcall
<httparse::InvalidChunkSize_as_core::fmt::Display>::fmt(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"invalid chunk size",0x12);
  return;
}


// ===== 008fdb2c  FUN_008fdb2c =====

void FUN_008fdb2c(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_40 [16];
  long local_18;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  <core::fmt::[a]::core::fmt::Formatter>::debug_list(auStack_40,param_2);
  lVar3 = local_18;
  for (; local_18 = lVar1, lVar2 != 0; lVar2 = lVar2 + -1) {
    lVar1 = local_18 + 1;
    <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry
              (auStack_40,&local_18,&DAT_00aefd50);
    lVar3 = local_18;
  }
  local_18 = lVar3;
  <core::fmt::builders::[6]::core::fmt::builders::DebugList>::finish(auStack_40);
  return;
}


// ===== 008fdb98  FUN_008fdb98 =====

void FUN_008fdb98(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Debug>::fmt(*param_1,param_1[1],param_2);
  return;
}


// ===== 008fdbac  FUN_008fdbac =====

void FUN_008fdbac(undefined8 *param_1,long param_2)

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


// ===== 008fdbc8  <httparse::Header_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <httparse::Header as core::fmt::Debug>::fmt */

void __rustcall <httparse::Header_as_core::fmt::Debug>::fmt(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [16];
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_58,param_2,"Header",6);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (auStack_58,&DAT_002bd1cc,4,param_1,&DAT_00aefd88);
  puVar2 = (undefined8 *)(param_1 + 0x10);
  core::str::converts::from_utf8(&local_48,*puVar2,*(undefined8 *)(param_1 + 0x18));
  if (local_48 == 1) {
    puVar1 = &DAT_00aefda8;
  }
  else {
    puVar1 = &DAT_00aefd88;
    puVar2 = &local_30;
    local_30 = local_40;
    uStack_28 = uStack_38;
  }
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (auStack_58,
             "valueinvalid header nameinvalid header valueinvalid new lineinvalid response statusinvalid tokentoo many headersinvalid HTTP version"
             ,5,puVar2,puVar1);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish(auStack_58);
  return;
}


// ===== 008fdc90  <httparse::Error_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <httparse::Error as core::fmt::Display>::fmt */

void __rustcall <httparse::Error_as_core::fmt::Display>::fmt(byte *param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,&DAT_003318f8 + *(int *)(&DAT_003318f8 + (ulong)*param_1 * 4),
             *(undefined8 *)(&DAT_003318c0 + (ulong)*param_1 * 8));
  return;
}


// ===== 008fdcb8  <futures_channel::mpsc::[c]::futures_channel::mpsc::SenderTask>::notify =====

/* WARNING: Unknown calling convention: __rustcall */
/* <futures_channel::mpsc::[c]::futures_channel::mpsc::SenderTask>::notify */

void __rustcall
<futures_channel::mpsc::[c]::futures_channel::mpsc::SenderTask>::notify(long *param_1)

{
  long lVar1;
  
  *(undefined1 *)(param_1 + 2) = 0;
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x008fdcd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))(param_1[1]);
    return;
  }
  return;
}


// ===== 008fdcd8  <futures_channel::mpsc::SendError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <futures_channel::mpsc::SendError as core::fmt::Display>::fmt */

void __rustcall
<futures_channel::mpsc::SendError_as_core::fmt::Display>::fmt(char *param_1,undefined8 *param_2)

{
  if (*param_1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x008fdcf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2[1] + 0x18))
              (*param_2,"send failed because receiver is gonesend failed because channel is full",
               0x24);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x008fdd04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,"send failed because channel is full",0x23);
  return;
}


// ===== 008fdd08  <futures_channel::oneshot::Canceled_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <futures_channel::oneshot::Canceled as core::fmt::Display>::fmt */

void __rustcall
<futures_channel::oneshot::Canceled_as_core::fmt::Display>::fmt
          (undefined8 param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x008fdd20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,"oneshot canceled",0x10);
  return;
}


// ===== 008fdd24  <futures_channel::mpsc::TryRecvError_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <futures_channel::mpsc::TryRecvError as core::fmt::Debug>::fmt */

void __rustcall
<futures_channel::mpsc::TryRecvError_as_core::fmt::Debug>::fmt
          (undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_28 [24];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple
            (auStack_28,param_2,"TryRecvErrorreceiver channel is empty",0xc);
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::finish(auStack_28);
  return;
}


// ===== 008fdd5c  <futures_channel::mpsc::TryRecvError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <futures_channel::mpsc::TryRecvError as core::fmt::Display>::fmt */

void __rustcall
<futures_channel::mpsc::TryRecvError_as_core::fmt::Display>::fmt
          (undefined8 param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x008fdd74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,"receiver channel is empty",0x19);
  return;
}


// ===== 008fdd78  <alloc::io::error::core::io::error::Error>::new<tokio_util::codec::length_delimited::LengthDelimitedCodecError> =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::io::error::core::io::error::Error>::new<tokio_util::codec::length_delimited::LengthDelimitedCodecError>
    */

void __rustcall
<alloc::io::error::core::io::error::Error>::
new<tokio_util::codec::length_delimited::LengthDelimitedCodecError>(undefined8 param_1)

{
  alloc::io::error::custom_owner_from_box(param_1,1,&DAT_00af0160);
  <core::io::error::repr::[0]::core::io::error::repr::Repr>::new_custom();
  return;
}


// ===== 008fdd98  FUN_008fdd98 =====

void FUN_008fdd98(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = (long *)*param_1;
  if (plVar4 != (long *)0x0) {
                    /* try { // try from 008fddb0 to 008fddb7 has its CatchHandler @ 008fddf4 */
    FUN_008ff2f8();
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
      <alloc::sync::[n]::alloc::sync::Arc<tokio_util::sync::cancellation_token::tree_node::TreeNode>>
      ::drop_slow(param_1);
      return;
    }
  }
  return;
}


// ===== 008fde24  FUN_008fde24 =====

void FUN_008fde24(long *param_1)

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
      lVar5 = lVar6 * 8;
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
                    /* try { // try from 008fde78 to 008fde7b has its CatchHandler @ 008fdebc */
        <alloc::sync::[n]::alloc::sync::Arc<tokio_util::sync::cancellation_token::tree_node::TreeNode>>
        ::drop_slow();
      }
    } while (lVar6 != lVar1);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 008fdf20  FUN_008fdf20 =====

void FUN_008fdf20(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  plVar3 = *(long **)(param_1 + 0x30);
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
                    /* try { // try from 008fdf5c to 008fdf5f has its CatchHandler @ 008fdfe4 */
      <alloc::sync::[n]::alloc::sync::Arc<tokio_util::sync::cancellation_token::tree_node::TreeNode>>
      ::drop_slow();
    }
  }
  lVar4 = *(long *)(param_1 + 0x28);
  if (lVar4 != 0) {
    lVar6 = *(long *)(param_1 + 0x20);
    lVar7 = 0;
    do {
      lVar5 = lVar7 * 8;
      lVar7 = lVar7 + 1;
      plVar3 = *(long **)(lVar6 + lVar5);
      do {
        lVar5 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 + -1 == 0) {
        DataMemoryBarrier(2,1);
                    /* try { // try from 008fdfa0 to 008fdfa3 has its CatchHandler @ 008fdff8 */
        <alloc::sync::[n]::alloc::sync::Arc<tokio_util::sync::cancellation_token::tree_node::TreeNode>>
        ::drop_slow();
      }
    } while (lVar7 != lVar4);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    free(*(void **)(param_1 + 0x20));
    return;
  }
  return;
}


// ===== 008fe05c  FUN_008fe05c =====

void FUN_008fe05c(undefined8 *param_1)

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


// ===== 008fe0cc  FUN_008fe0cc =====

void FUN_008fe0cc(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  lVar6 = param_1[1];
  uVar3 = param_1[3] - lVar6;
  if (uVar3 != 0) {
    uVar7 = 0;
    do {
      lVar5 = uVar7 * 8;
      uVar7 = uVar7 + 1;
      plVar4 = *(long **)(lVar6 + lVar5);
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
                    /* try { // try from 008fe12c to 008fe12f has its CatchHandler @ 008fe170 */
        <alloc::sync::[n]::alloc::sync::Arc<tokio_util::sync::cancellation_token::tree_node::TreeNode>>
        ::drop_slow();
      }
    } while (uVar7 != uVar3 >> 3);
  }
  if (param_1[2] != 0) {
    free((void *)*param_1);
    return;
  }
  return;
}


// ===== 008fe1d4  FUN_008fe1d4 =====

void FUN_008fe1d4(int *param_1,uint param_2)

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


// ===== 008fe244  FUN_008fe244 =====

void FUN_008fe244(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = (long *)*param_1;
  if (plVar4 != (long *)0x0) {
                    /* try { // try from 008fe25c to 008fe263 has its CatchHandler @ 008fe2d4 */
    FUN_008ffc54();
                    /* try { // try from 008fe264 to 008fe26b has its CatchHandler @ 008fe2a8 */
    FUN_008ff2f8(param_1);
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
      <alloc::sync::[n]::alloc::sync::Arc<tokio_util::sync::cancellation_token::tree_node::TreeNode>>
      ::drop_slow(param_1);
      return;
    }
  }
  return;
}


// ===== 008fe2ec  FUN_008fe2ec =====

void FUN_008fe2ec(ulong *param_1,ulong param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long local_38;
  ulong local_30;
  undefined8 uStack_28;
  
  if ((param_5 == 0) || (CARRY8(param_3,param_2))) {
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(0);
  }
  uVar3 = *param_1 * 2;
  uVar2 = param_3 + param_2;
  if (param_3 + param_2 <= uVar3) {
    uVar2 = uVar3;
  }
  uVar3 = 4;
  if (0x400 < param_5) {
    uVar3 = 1;
  }
  uVar1 = 8;
  if (param_5 != 1) {
    uVar1 = uVar3;
  }
  if (uVar2 <= uVar1) {
    uVar2 = uVar1;
  }
  FUN_008fedb4(&local_38,*param_1,param_1[1],uVar2,param_4);
  if (local_38 != 1) {
    *param_1 = uVar2;
    param_1[1] = local_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(local_30,uStack_28);
}


// ===== 008fe384  FUN_008fe384 =====

void FUN_008fe384(int *param_1,ulong param_2,int *param_3,byte param_4)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  code *pcVar5;
  int iVar6;
  ulong uVar7;
  undefined **ppuVar8;
  byte bVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *local_98;
  long *local_90;
  undefined8 local_88;
  long *plStack_80;
  long *local_78;
  long *local_70;
  byte local_68;
  
  if (param_4 == 2) {
    local_88 = *(undefined8 *)(param_1 + 2);
    plVar16 = *(long **)(param_1 + 4);
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 8;
    param_1[5] = 0;
    lVar13 = *(long *)(param_1 + 6);
    param_1[6] = 0;
    puVar4 = PTR_GLOBAL_PANIC_COUNT_00b00bf0;
    param_1[7] = 0;
    plVar12 = plVar16 + lVar13;
    local_98 = plVar16;
    local_90 = plVar16;
    plStack_80 = plVar12;
    if (lVar13 != 0) {
      do {
        plVar17 = plVar16 + 1;
        plVar16 = (long *)*plVar16;
        plVar20 = plVar16 + 2;
        do {
          local_90 = plVar17;
          local_78 = plVar16;
          if ((int)*plVar20 != 0) {
            ClearExclusiveLocal();
            <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                      (plVar16 + 2);
            break;
          }
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar3) {
            *(int *)plVar20 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((*(ulong *)puVar4 & 0x7fffffffffffffff) == 0) {
          local_68 = 0;
          cVar2 = *(char *)((long)plVar16 + 0x14);
        }
        else {
                    /* try { // try from 008fe4ac to 008fe4e7 has its CatchHandler @ 008feb14 */
          local_68 = std::panicking::panic_count::is_zero_slow_path();
          local_68 = local_68 ^ 1;
          cVar2 = *(char *)((long)plVar16 + 0x14);
        }
        if (cVar2 != '\0') {
                    /* try { // try from 008fe958 to 008fe97b has its CatchHandler @ 008fec94 */
          local_70 = plVar20;
                    /* WARNING: Subroutine does not return */
          core::result::unwrap_failed
                    ("called `Result::unwrap()` on an `Err` value",0x2b,&local_70,&PTR_FUN_00aefe28,
                     &PTR_s__root__cargo_registry_src_index__00aefef0);
        }
        plVar11 = plVar16 + 6;
        plVar10 = (long *)*plVar11;
        plVar16[7] = 0;
        if (plVar10 != (long *)0x0) {
          do {
            lVar13 = *plVar10;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar3) {
              *plVar10 = lVar13 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar13 + -1 == 0) {
            DataMemoryBarrier(2,1);
                    /* try { // try from 008fe458 to 008fe45f has its CatchHandler @ 008feb98 */
            <alloc::sync::[n]::alloc::sync::Arc<tokio_util::sync::cancellation_token::tree_node::TreeNode>>
            ::drop_slow(plVar11);
          }
        }
        *plVar11 = 0;
        if ((((local_68 & 1) == 0) && ((*(ulong *)puVar4 & 0x7fffffffffffffff) != 0)) &&
           (uVar7 = std::panicking::panic_count::is_zero_slow_path(), (uVar7 & 1) == 0)) {
          *(undefined1 *)((long)plVar16 + 0x14) = 1;
        }
        do {
          lVar13 = *plVar20;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar3) {
            *(int *)plVar20 = 0;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((int)lVar13 == 2) {
          <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(plVar16 + 2);
        }
        do {
          lVar13 = *plVar16;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar3) {
            *plVar16 = lVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar13 + -1 == 0) {
          DataMemoryBarrier(2,1);
                    /* try { // try from 008fe4a0 to 008fe4a7 has its CatchHandler @ 008febe8 */
          <alloc::sync::[n]::alloc::sync::Arc<tokio_util::sync::cancellation_token::tree_node::TreeNode>>
          ::drop_slow(&local_78);
        }
        plVar16 = plVar17;
      } while (plVar17 != plVar12);
    }
                    /* try { // try from 008fe6b0 to 008fe6b7 has its CatchHandler @ 008feb70 */
    FUN_008fe0cc(&local_98);
    if ((((param_2 & 1) == 0) &&
        ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) != 0)) &&
       (uVar7 = std::panicking::panic_count::is_zero_slow_path(), (uVar7 & 1) == 0)) {
      *(undefined1 *)(param_1 + 1) = 1;
    }
    do {
      iVar6 = *param_1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar3) {
        *param_1 = 0;
        cVar2 = ExclusiveMonitorsStatus();
      }
      param_3 = param_1;
    } while (cVar2 != '\0');
    goto joined_r0x008fe928;
  }
  uVar7 = *(ulong *)(param_1 + 6);
  plVar12 = (long *)(param_3 + 2);
  if ((ulong)(*plVar12 - *(long *)(param_3 + 6)) < uVar7) {
                    /* try { // try from 008fe9b4 to 008fe9d7 has its CatchHandler @ 008fec34 */
    FUN_008fe2ec(plVar12,*(long *)(param_3 + 6),uVar7,8,8);
  }
  local_88 = *(undefined8 *)(param_1 + 2);
  plVar20 = *(long **)(param_1 + 4);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 8;
  param_1[5] = 0;
  plVar16 = plVar20 + uVar7;
  param_1[6] = 0;
  puVar4 = PTR_GLOBAL_PANIC_COUNT_00b00bf0;
  param_1[7] = 0;
  local_98 = plVar20;
  local_90 = plVar20;
  plStack_80 = plVar16;
  if (uVar7 != 0) {
    do {
      plVar10 = plVar20 + 1;
      plVar20 = (long *)*plVar20;
      plVar17 = plVar20 + 2;
      do {
        local_90 = plVar10;
        local_78 = plVar20;
        if ((int)*plVar17 != 0) {
          ClearExclusiveLocal();
          <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                    (plVar20 + 2);
          break;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar3) {
          *(int *)plVar17 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((*(ulong *)puVar4 & 0x7fffffffffffffff) == 0) {
        bVar9 = 0;
        cVar2 = *(char *)((long)plVar20 + 0x14);
      }
      else {
                    /* try { // try from 008fe66c to 008fe6ab has its CatchHandler @ 008feb08 */
        bVar9 = std::panicking::panic_count::is_zero_slow_path();
        bVar9 = bVar9 ^ 1;
        cVar2 = *(char *)((long)plVar20 + 0x14);
      }
      if (cVar2 != '\0') {
                    /* try { // try from 008fe988 to 008fe9ab has its CatchHandler @ 008fec3c */
        local_70 = plVar17;
        local_68 = bVar9;
                    /* WARNING: Subroutine does not return */
        core::result::unwrap_failed
                  ("called `Result::unwrap()` on an `Err` value",0x2b,&local_70,&PTR_FUN_00aefe28,
                   &PTR_s__root__cargo_registry_src_index__00aeff08);
      }
      plVar18 = *(long **)(param_1 + 8);
      plVar19 = plVar20 + 6;
      plVar11 = (long *)*plVar19;
      if ((plVar11 == (long *)0x0) || (plVar18 == (long *)0x0)) {
        if (plVar18 != (long *)0x0) {
          do {
            lVar13 = *plVar18;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar3) {
              *plVar18 = lVar13 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar13 < 0) goto LAB_008feaf4;
        }
        if (plVar11 != (long *)0x0) {
          do {
            lVar13 = *plVar11;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar3) {
              *plVar11 = lVar13 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar13 + -1 == 0) {
            DataMemoryBarrier(2,1);
                    /* try { // try from 008fe614 to 008fe61b has its CatchHandler @ 008feb78 */
            <alloc::sync::[n]::alloc::sync::Arc<tokio_util::sync::cancellation_token::tree_node::TreeNode>>
            ::drop_slow(plVar19);
          }
        }
      }
      else {
        do {
          lVar13 = *plVar18;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar3) {
            *plVar18 = lVar13 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar13 < 0) {
LAB_008feaf4:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x8feaf8);
          (*pcVar5)();
        }
        do {
          lVar13 = *plVar11;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar3) {
            *plVar11 = lVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar13 + -1 == 0) {
          DataMemoryBarrier(2,1);
                    /* try { // try from 008fe5d4 to 008fe5db has its CatchHandler @ 008feb7c */
          <alloc::sync::[n]::alloc::sync::Arc<tokio_util::sync::cancellation_token::tree_node::TreeNode>>
          ::drop_slow(plVar19);
        }
      }
      plVar20[6] = (long)plVar18;
      plVar20[7] = *(long *)(param_3 + 6);
      if ((((bVar9 & 1) == 0) && ((*(ulong *)puVar4 & 0x7fffffffffffffff) != 0)) &&
         (uVar7 = std::panicking::panic_count::is_zero_slow_path(), (uVar7 & 1) == 0)) {
        *(undefined1 *)((long)plVar20 + 0x14) = 1;
      }
      do {
        lVar13 = *plVar17;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar3) {
          *(int *)plVar17 = 0;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar13 == 2) {
        <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(plVar20 + 2);
      }
      lVar13 = *(long *)(param_3 + 6);
      local_70 = plVar20;
      if (lVar13 == *(long *)(param_3 + 2)) {
                    /* try { // try from 008fe660 to 008fe667 has its CatchHandler @ 008febb0 */
        <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<alloc::sync::Arc<tokio_util::sync::cancellation_token::tree_node::TreeNode>>>
        ::grow_one(plVar12);
      }
      *(long **)(*(long *)(param_3 + 4) + lVar13 * 8) = plVar20;
      *(long *)(param_3 + 6) = lVar13 + 1;
      plVar20 = plVar10;
    } while (plVar10 != plVar16);
  }
                    /* try { // try from 008fe708 to 008fe713 has its CatchHandler @ 008fec34 */
  FUN_008fe0cc(&local_98);
  plVar16 = (long *)(param_1 + 8);
  plVar12 = (long *)*plVar16;
  uVar7 = *(ulong *)(param_1 + 10);
  if (plVar12 != (long *)0x0) {
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
                    /* try { // try from 008fe738 to 008fe73f has its CatchHandler @ 008feb2c */
      <alloc::sync::[n]::alloc::sync::Arc<tokio_util::sync::cancellation_token::tree_node::TreeNode>>
      ::drop_slow(plVar16);
    }
  }
  *plVar16 = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
                    /* try { // try from 008fe9f0 to 008fea23 has its CatchHandler @ 008fec34 */
  if ((((param_2 & 1) == 0) &&
      ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) != 0)) &&
     (uVar14 = std::panicking::panic_count::is_zero_slow_path(), (uVar14 & 1) == 0)) {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  do {
    iVar6 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar6 == 2) {
    <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(param_1);
  }
  lVar13 = *(long *)(param_3 + 6);
  if (lVar13 == uVar7 + 1) {
    if (lVar13 == 0) {
      ppuVar8 = &PTR_s__root__cargo_registry_src_index__00aefed8;
LAB_008fea1c:
                    /* WARNING: Subroutine does not return */
      core::option::unwrap_failed(ppuVar8);
    }
    *(long *)(param_3 + 6) = lVar13 + -1;
    local_98 = *(long **)(*(long *)(param_3 + 4) + (lVar13 + -1) * 8);
    do {
      lVar13 = *local_98;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(local_98,0x10);
      if (bVar3) {
        *local_98 = lVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar13 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 008fe7b0 to 008fe7bb has its CatchHandler @ 008fec34 */
      <alloc::sync::[n]::alloc::sync::Arc<tokio_util::sync::cancellation_token::tree_node::TreeNode>>
      ::drop_slow(&local_98);
    }
    uVar14 = *(ulong *)(param_3 + 6);
    uVar7 = *(ulong *)(param_3 + 2);
    if (uVar14 << 2 <= uVar7) goto LAB_008fe894;
  }
  else {
    if (lVar13 == 0) {
      ppuVar8 = &PTR_s__root__cargo_registry_src_index__00aefe90;
      goto LAB_008fea1c;
    }
    *(long *)(param_3 + 6) = lVar13 + -1;
    plVar16 = *(long **)(*(long *)(param_3 + 4) + (lVar13 + -1) * 8);
    plVar12 = plVar16 + 2;
    do {
      local_70 = plVar16;
      if ((int)*plVar12 != 0) {
        ClearExclusiveLocal();
                    /* try { // try from 008fead8 to 008feadf has its CatchHandler @ 008feb00 */
        <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                  (plVar16 + 2);
        break;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *(int *)plVar12 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puVar4 = PTR_GLOBAL_PANIC_COUNT_00b00bf0;
    if ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) == 0) {
      if (*(char *)((long)plVar16 + 0x14) != '\0') {
        bVar9 = 0;
LAB_008fea78:
        local_90 = (long *)CONCAT71(local_90._1_7_,bVar9);
                    /* try { // try from 008fea80 to 008feaa3 has its CatchHandler @ 008febf0 */
        local_98 = plVar12;
                    /* WARNING: Subroutine does not return */
        core::result::unwrap_failed
                  ("called `Result::unwrap()` on an `Err` value",0x2b,&local_98,&PTR_FUN_00aefe28,
                   &PTR_s__root__cargo_registry_src_index__00aefea8);
      }
      plVar16[7] = uVar7;
      uVar14 = *(ulong *)puVar4;
joined_r0x008fea48:
      if ((uVar14 & 0x7fffffffffffffff) != 0) {
        uVar14 = std::panicking::panic_count::is_zero_slow_path();
        if ((uVar14 & 1) == 0) {
          *(undefined1 *)((long)plVar16 + 0x14) = 1;
        }
      }
    }
    else {
                    /* try { // try from 008fea28 to 008fea4f has its CatchHandler @ 008feb00 */
      iVar6 = std::panicking::panic_count::is_zero_slow_path();
      if (*(char *)((long)plVar16 + 0x14) != '\0') {
        bVar9 = (byte)iVar6 ^ 1;
        goto LAB_008fea78;
      }
      plVar16[7] = uVar7;
      if (iVar6 != 0) {
        uVar14 = *(ulong *)puVar4;
        goto joined_r0x008fea48;
      }
    }
    do {
      lVar13 = *plVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *(int *)plVar12 = 0;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar13 == 2) {
                    /* try { // try from 008feaa8 to 008feaaf has its CatchHandler @ 008feb00 */
      <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(plVar16 + 2);
    }
    local_98 = plVar16;
    if (*(ulong *)(param_3 + 6) <= uVar7) {
                    /* try { // try from 008feae4 to 008feaf3 has its CatchHandler @ 008feb44 */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (uVar7,*(ulong *)(param_3 + 6),&PTR_s__root__cargo_registry_src_index__00aefec0);
    }
    puVar1 = (undefined8 *)(*(long *)(param_3 + 4) + uVar7 * 8);
    plVar12 = (long *)*puVar1;
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
                    /* try { // try from 008fe878 to 008fe87f has its CatchHandler @ 008feb1c */
      <alloc::sync::[n]::alloc::sync::Arc<tokio_util::sync::cancellation_token::tree_node::TreeNode>>
      ::drop_slow(puVar1);
    }
    *puVar1 = plVar16;
    uVar14 = *(ulong *)(param_3 + 6);
    uVar7 = *(ulong *)(param_3 + 2);
    if (uVar14 << 2 <= uVar7) {
LAB_008fe894:
      uVar15 = uVar14 * 2;
      if (uVar15 < uVar7) {
        if (uVar7 < uVar14) {
                    /* try { // try from 008feab4 to 008feacf has its CatchHandler @ 008fec34 */
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_fmt
                    ("Tried to shrink to a larger capacity",0x49,
                     &PTR_s__nix_store_8006w282fgsx3273c878b_00af0038);
        }
        if (uVar15 < uVar14 || uVar14 == 0) {
          uVar15 = uVar14;
        }
        if (uVar15 == 0) {
          lVar13 = 8;
          free(*(void **)(param_3 + 4));
        }
        else {
          lVar13 = FUN_004b2600(*(void **)(param_3 + 4),uVar7 << 3,8,uVar15 << 3);
          if (lVar13 == 0) {
                    /* try { // try from 008fe8d4 to 008fe8e3 has its CatchHandler @ 008fec34 */
                    /* WARNING: Subroutine does not return */
            alloc::raw_vec::handle_error(8,uVar15 << 3);
          }
        }
        *(ulong *)(param_3 + 2) = uVar15;
        *(long *)(param_3 + 4) = lVar13;
      }
    }
  }
  if ((((param_4 & 1) == 0) &&
      ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) != 0)) &&
     (uVar7 = std::panicking::panic_count::is_zero_slow_path(), (uVar7 & 1) == 0)) {
    *(undefined1 *)(param_3 + 1) = 1;
  }
  do {
    iVar6 = *param_3;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_3,0x10);
    if (bVar3) {
      *param_3 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
joined_r0x008fe928:
  if (iVar6 != 2) {
    return;
  }
  <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(param_3);
  return;
}


// ===== 008fece8  <tokio_util::sync::cancellation_token::guard::tokio_util::sync::cancellation_token::guard::DropGuard>::disarm =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio_util::sync::cancellation_token::guard::tokio_util::sync::cancellation_token::guard::DropGuard>::disarm
    */

long __rustcall
<tokio_util::sync::cancellation_token::guard::tokio_util::sync::cancellation_token::guard::DropGuard>
::disarm(long param_1)

{
  undefined8 local_8;
  
  local_8 = 0;
  if (param_1 != 0) {
    FUN_008fe244(&local_8);
    return param_1;
  }
                    /* try { // try from 008fed18 to 008fed2f has its CatchHandler @ 008fed34 */
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed
            ("`inner` can be only None in a destructor",0x28,
             &PTR_s__root__cargo_registry_src_index__00aefe48);
}


// ===== 008fed4c  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<alloc::sync::Arc<tokio_util::sync::cancellation_token::tree_node::TreeNode>>>::grow_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<alloc::sync::Arc<tokio_util::sync::cancellation_token::tree_node::TreeNode>>>::grow_one
    */

void __rustcall
<alloc::raw_vec::[4]::alloc::raw_vec::RawVec<alloc::sync::Arc<tokio_util::sync::cancellation_token::tree_node::TreeNode>>>
::grow_one(ulong *param_1)

{
  ulong uVar1;
  long local_38;
  ulong local_30;
  undefined8 uStack_28;
  
  uVar1 = *param_1 * 2;
  if (uVar1 < 5) {
    uVar1 = 4;
  }
  FUN_008fedb4(&local_38,*param_1,param_1[1],uVar1,8,8);
  if (local_38 != 1) {
    *param_1 = uVar1;
    param_1[1] = local_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(local_30,uStack_28);
}


// ===== 008fedb4  FUN_008fedb4 =====

void FUN_008fedb4(undefined8 *param_1,long param_2,undefined8 param_3,ulong param_4,long param_5,
                 ulong param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_6;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_4;
  lVar5 = 8;
  uVar3 = 1;
  uVar4 = 0;
  if ((SUB168(auVar1 * auVar2,8) != 0) ||
     (param_4 = param_6 * param_4,
     0x8000000000000000U - param_5 <= param_4 && param_4 - (0x8000000000000000U - param_5) != 0))
  goto LAB_008fee50;
  if (param_2 == 0) {
    lVar5 = param_5;
    if (param_4 != 0) {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      lVar5 = FUN_004b25a4(param_4,param_5);
      if (lVar5 == 0) goto LAB_008fee30;
    }
LAB_008fee40:
    uVar3 = 0;
    param_1[1] = lVar5;
  }
  else {
    lVar5 = FUN_004b2600(param_3,param_6 * param_2,param_5,param_4);
    if (lVar5 != 0) goto LAB_008fee40;
LAB_008fee30:
    uVar3 = 1;
    param_1[1] = param_5;
  }
  lVar5 = 0x10;
  uVar4 = param_4;
LAB_008fee50:
  *(ulong *)((long)param_1 + lVar5) = uVar4;
  *param_1 = uVar3;
  return;
}


// ===== 008fee68  FUN_008fee68 =====

long * FUN_008fee68(undefined8 *param_1)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong *puVar5;
  code *pcVar6;
  byte bVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *local_b0;
  long lStack_a8;
  undefined4 local_a0;
  int local_9c;
  long local_98;
  long local_90;
  long lStack_88;
  long *plStack_80;
  long local_78;
  long local_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  long local_60;
  long lStack_58;
  long local_50;
  long lStack_48;
  
  plVar11 = (long *)*param_1;
  plVar1 = plVar11 + 2;
  do {
    if ((int)*plVar1 != 0) {
      ClearExclusiveLocal();
      <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                (plVar11 + 2);
      uVar9 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      puVar5 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      goto joined_r0x008ff0c0;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(undefined4 *)plVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar9 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
  puVar5 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
joined_r0x008ff0c0:
  PTR_GLOBAL_PANIC_COUNT_00b00bf0 = (undefined *)puVar5;
  if ((uVar9 & 0x7fffffffffffffff) == 0) {
    bVar7 = 0;
    cVar3 = *(char *)((long)plVar11 + 0x14);
    iVar2 = local_9c;
  }
  else {
    bVar7 = std::panicking::panic_count::is_zero_slow_path();
    bVar7 = bVar7 ^ 1;
    cVar3 = *(char *)((long)plVar11 + 0x14);
    iVar2 = local_9c;
  }
  if (cVar3 != '\0') {
    uVar9 = (ulong)lStack_a8 >> 8;
    lStack_a8 = CONCAT71((int7)uVar9,bVar7);
                    /* try { // try from 008ff0dc to 008ff0ff has its CatchHandler @ 008ff194 */
    local_b0 = plVar1;
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              ("called `Result::unwrap()` on an `Err` value",0x2b,&local_b0,&PTR_FUN_00aefe28,
               &PTR_s__root__cargo_registry_src_index__00aefe60);
  }
  local_9c._1_3_ = (uint3)((uint)iVar2 >> 8);
  if ((*(byte *)(plVar11 + 9) & 1) != 0) {
    local_a0 = 0;
    local_9c = (uint)local_9c._1_3_ << 8;
    local_98 = 0;
    local_90 = 8;
    lStack_88 = 0;
    plStack_80 = (long *)0x0;
    lStack_a8 = 1;
    local_b0 = (long *)&DAT_00000001;
    local_78 = 0;
    local_70 = 1;
    uStack_68 = 1;
    lStack_58 = 0;
    local_60 = 0;
    lStack_48 = 0;
    local_50 = 0;
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    plVar8 = (long *)FUN_004b25a4(0x70,8);
    if (plVar8 == (long *)0x0) {
                    /* try { // try from 008ff05c to 008ff067 has its CatchHandler @ 008ff170 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x70);
    }
    plVar8[9] = CONCAT71(uStack_67,uStack_68);
    plVar8[8] = local_70;
    plVar8[0xb] = lStack_58;
    plVar8[10] = local_60;
    plVar8[0xd] = lStack_48;
    plVar8[0xc] = local_50;
    plVar8[1] = lStack_a8;
    *plVar8 = (long)local_b0;
    plVar8[3] = local_98;
    plVar8[2] = CONCAT44(local_9c,local_a0);
    plVar8[5] = lStack_88;
    plVar8[4] = local_90;
    plVar8[7] = local_78;
    plVar8[6] = (long)plStack_80;
    if ((((bVar7 & 1) == 0) && ((*puVar5 & 0x7fffffffffffffff) != 0)) &&
       (uVar9 = std::panicking::panic_count::is_zero_slow_path(), (uVar9 & 1) == 0)) {
      *(undefined1 *)((long)plVar11 + 0x14) = 1;
    }
    do {
      iVar2 = (int)*plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(undefined4 *)plVar1 = 0;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_008ff02c:
    if (iVar2 == 2) {
      <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(plVar1);
    }
    return plVar8;
  }
  do {
    lVar10 = *plVar11;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar4) {
      *plVar11 = lVar10 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (-1 < lVar10) {
    local_a0 = 0;
    local_98 = 0;
    local_90 = 8;
    local_78 = plVar11[5];
    local_9c = (uint)local_9c._1_3_ << 8;
    lStack_88 = 0;
    lStack_a8 = 1;
    local_b0 = (long *)0x1;
    local_70 = 1;
    uStack_68 = 0;
    lStack_58 = 0;
    local_60 = 0;
    lStack_48 = 0;
    local_50 = 0;
    plStack_80 = plVar11;
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    plVar8 = (long *)FUN_004b25a4(0x70,8);
    if (plVar8 == (long *)0x0) {
                    /* try { // try from 008ff06c to 008ff077 has its CatchHandler @ 008ff15c */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x70);
    }
    plVar8[9] = CONCAT71(uStack_67,uStack_68);
    plVar8[8] = local_70;
    plVar8[0xb] = lStack_58;
    plVar8[10] = local_60;
    plVar8[0xd] = lStack_48;
    plVar8[0xc] = local_50;
    plVar8[1] = lStack_a8;
    *plVar8 = (long)local_b0;
    plVar8[3] = local_98;
    plVar8[2] = CONCAT44(local_9c,local_a0);
    plVar8[5] = lStack_88;
    plVar8[4] = local_90;
    plVar8[7] = local_78;
    plVar8[6] = (long)plStack_80;
    do {
      lVar10 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    iVar2 = local_9c;
    if (-1 < lVar10) {
      lVar10 = plVar11[5];
      local_b0 = plVar8;
      if (lVar10 == plVar11[3]) {
                    /* try { // try from 008feffc to 008fefff has its CatchHandler @ 008ff104 */
        <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<alloc::sync::Arc<tokio_util::sync::cancellation_token::tree_node::TreeNode>>>
        ::grow_one();
      }
      *(long **)(plVar11[4] + lVar10 * 8) = plVar8;
      plVar11[5] = lVar10 + 1;
      if ((((bVar7 & 1) == 0) && ((*puVar5 & 0x7fffffffffffffff) != 0)) &&
         (uVar9 = std::panicking::panic_count::is_zero_slow_path(), (uVar9 & 1) == 0)) {
        *(undefined1 *)((long)plVar11 + 0x14) = 1;
      }
      do {
        iVar2 = (int)*plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(undefined4 *)plVar1 = 0;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      goto LAB_008ff02c;
    }
  }
  local_9c = iVar2;
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x8ff104);
  (*pcVar6)();
}


// ===== 008ff1ac  FUN_008ff1ac =====

byte FUN_008ff1ac(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  int iVar5;
  ulong uVar6;
  byte bVar7;
  long lVar8;
  int *local_40;
  byte local_38;
  
  lVar8 = *param_1;
  piVar1 = (int *)(lVar8 + 0x10);
  do {
    if (*piVar1 != 0) {
      ClearExclusiveLocal();
      <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                (lVar8 + 0x10);
      uVar6 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      goto joined_r0x008ff2bc;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar6 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
  puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
joined_r0x008ff2bc:
  PTR_GLOBAL_PANIC_COUNT_00b00bf0 = (undefined *)puVar4;
  if ((uVar6 & 0x7fffffffffffffff) == 0) {
    if (*(char *)(lVar8 + 0x14) != '\0') {
      local_38 = 0;
LAB_008ff23c:
      local_40 = piVar1;
                    /* try { // try from 008ff244 to 008ff267 has its CatchHandler @ 008ff2e0 */
                    /* WARNING: Subroutine does not return */
      core::result::unwrap_failed
                ("called `Result::unwrap()` on an `Err` value",0x2b,&local_40,&PTR_FUN_00aefe28,
                 &PTR_s__root__cargo_registry_src_index__00aefe78);
    }
    bVar7 = *(byte *)(lVar8 + 0x48);
  }
  else {
    iVar5 = std::panicking::panic_count::is_zero_slow_path();
    if (*(char *)(lVar8 + 0x14) != '\0') {
      local_38 = (byte)iVar5 ^ 1;
      goto LAB_008ff23c;
    }
    bVar7 = *(byte *)(lVar8 + 0x48);
    if (iVar5 == 0) goto LAB_008ff20c;
  }
  if (((*puVar4 & 0x7fffffffffffffff) != 0) &&
     (uVar6 = std::panicking::panic_count::is_zero_slow_path(), (uVar6 & 1) == 0)) {
    *(undefined1 *)(lVar8 + 0x14) = 1;
  }
LAB_008ff20c:
  do {
    iVar5 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar5 != 2) {
    return bVar7 & 1;
  }
  <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(piVar1);
  return bVar7 & 1;
}


// ===== 008ff2f8  FUN_008ff2f8 =====

void FUN_008ff2f8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  code *pcVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  byte bVar9;
  long lVar10;
  long lVar11;
  char *pcVar12;
  long *local_80;
  byte local_74;
  long *local_70;
  byte local_68;
  long *local_48;
  
  lVar11 = *param_1;
  plVar1 = (long *)(lVar11 + 0x10);
  do {
    if (*(int *)plVar1 != 0) {
      ClearExclusiveLocal();
      <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                (lVar11 + 0x10);
      uVar7 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      goto joined_r0x008ff7e0;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar7 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
  puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
joined_r0x008ff7e0:
  PTR_GLOBAL_PANIC_COUNT_00b00bf0 = (undefined *)puVar4;
  local_70 = plVar1;
  if ((uVar7 & 0x7fffffffffffffff) == 0) {
    if (*(char *)(lVar11 + 0x14) != '\0') {
      local_68 = 0;
LAB_008ff6ec:
                    /* try { // try from 008ff6f4 to 008ff717 has its CatchHandler @ 008ffacc */
                    /* WARNING: Subroutine does not return */
      core::result::unwrap_failed
                ("called `Result::unwrap()` on an `Err` value",0x2b,&local_70,&PTR_FUN_00aefe28,
                 &PTR_s__root__cargo_registry_src_index__00aeff20);
    }
    lVar10 = *(long *)(lVar11 + 0x40) + -1;
    *(long *)(lVar11 + 0x40) = lVar10;
LAB_008ff360:
    if (((*puVar4 & 0x7fffffffffffffff) != 0) &&
       (uVar7 = std::panicking::panic_count::is_zero_slow_path(), (uVar7 & 1) == 0)) {
      *(undefined1 *)(lVar11 + 0x14) = 1;
    }
  }
  else {
    iVar6 = std::panicking::panic_count::is_zero_slow_path();
    if (*(char *)(lVar11 + 0x14) != '\0') {
      local_68 = (byte)iVar6 ^ 1;
      goto LAB_008ff6ec;
    }
    lVar10 = *(long *)(lVar11 + 0x40) + -1;
    *(long *)(lVar11 + 0x40) = lVar10;
    if (iVar6 != 0) goto LAB_008ff360;
  }
  do {
    pcVar12 = (char *)(lVar11 + 0x14);
    iVar6 = *(int *)plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar6 == 2) {
    <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(lVar11 + 0x10);
  }
  if (lVar10 != 0) {
    return;
  }
  do {
    if (*(int *)plVar1 != 0) {
      ClearExclusiveLocal();
      <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                (lVar11 + 0x10);
      uVar7 = *puVar4;
      goto joined_r0x008ff81c;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar7 = *puVar4;
joined_r0x008ff81c:
  if ((uVar7 & 0x7fffffffffffffff) == 0) {
    local_68 = 0;
    cVar2 = *pcVar12;
  }
  else {
    local_68 = std::panicking::panic_count::is_zero_slow_path();
    local_68 = local_68 ^ 1;
    cVar2 = *pcVar12;
  }
  if (cVar2 != '\0') {
                    /* try { // try from 008ff838 to 008ff85b has its CatchHandler @ 008ffab8 */
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              ("called `Result::unwrap()` on an `Err` value",0x2b,&local_70,&PTR_FUN_00aefe28,
               &PTR_s__root__cargo_registry_src_index__00aefdc8);
  }
  plVar8 = *(long **)(lVar11 + 0x30);
  bVar9 = local_68;
  if (plVar8 != (long *)0x0) {
    do {
      lVar10 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (-1 < lVar10) {
      local_80 = *(long **)(lVar11 + 0x30);
      plVar8 = local_80 + 2;
LAB_008ff3dc:
      local_48 = local_80;
      if ((int)*plVar8 == 0) goto code_r0x008ff3e4;
      ClearExclusiveLocal();
                    /* try { // try from 008ff9b8 to 008ff9e7 has its CatchHandler @ 008ffa08 */
      if ((((local_68 & 1) == 0) && ((*puVar4 & 0x7fffffffffffffff) != 0)) &&
         (uVar7 = std::panicking::panic_count::is_zero_slow_path(), (uVar7 & 1) == 0)) {
        *(undefined1 *)(lVar11 + 0x14) = 1;
      }
      do {
        iVar6 = *(int *)plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = 0;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 == 2) {
                    /* try { // try from 008ff930 to 008ff94f has its CatchHandler @ 008ffa08 */
        <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(lVar11 + 0x10);
      }
      do {
        if ((int)local_80[2] != 0) {
          ClearExclusiveLocal();
          <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                    (local_80 + 2);
          break;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(local_80 + 2,0x10);
        if (bVar3) {
          *(undefined4 *)(local_80 + 2) = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((*puVar4 & 0x7fffffffffffffff) == 0) {
        local_74 = 0;
        cVar2 = *(char *)((long)local_80 + 0x14);
      }
      else {
        local_74 = std::panicking::panic_count::is_zero_slow_path();
        local_74 = local_74 ^ 1;
        cVar2 = *(char *)((long)local_80 + 0x14);
      }
      if (cVar2 != '\0') {
LAB_008ff960:
        local_80 = local_80 + 2;
        local_70 = local_80;
        local_68 = local_74;
                    /* try { // try from 008ff974 to 008ff997 has its CatchHandler @ 008ffa34 */
                    /* WARNING: Subroutine does not return */
        core::result::unwrap_failed
                  ("called `Result::unwrap()` on an `Err` value",0x2b,&local_70,&PTR_FUN_00aefe28,
                   &PTR_s__root__cargo_registry_src_index__00aefdf8);
      }
      do {
        if (*(int *)plVar1 != 0) {
          ClearExclusiveLocal();
                    /* try { // try from 008ff9f0 to 008ff9f7 has its CatchHandler @ 008ff9fc */
          <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                    (lVar11 + 0x10);
          break;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((*puVar4 & 0x7fffffffffffffff) == 0) {
        local_68 = 0;
        cVar2 = *pcVar12;
      }
      else {
                    /* try { // try from 008ff99c to 008ff99f has its CatchHandler @ 008ff9fc */
        local_68 = std::panicking::panic_count::is_zero_slow_path();
        local_68 = local_68 ^ 1;
        cVar2 = *pcVar12;
      }
      bVar9 = local_68;
      if (cVar2 != '\0') {
LAB_008ff900:
                    /* try { // try from 008ff908 to 008ff92b has its CatchHandler @ 008ffa0c */
                    /* WARNING: Subroutine does not return */
        core::result::unwrap_failed
                  ("called `Result::unwrap()` on an `Err` value",0x2b,&local_70,&PTR_FUN_00aefe28,
                   &PTR_s__root__cargo_registry_src_index__00aefe10);
      }
      goto LAB_008ff408;
    }
LAB_008ff998:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x8ff99c);
    (*pcVar5)();
  }
LAB_008ff6b8:
  FUN_008fe384(plVar1,bVar9 & 1);
  return;
code_r0x008ff3e4:
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
  if (bVar3) {
    *(int *)plVar8 = 1;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto code_r0x008ff3ec;
  goto LAB_008ff3dc;
code_r0x008ff3ec:
  if ((*puVar4 & 0x7fffffffffffffff) == 0) {
    local_74 = 0;
    cVar2 = *(char *)((long)local_80 + 0x14);
  }
  else {
                    /* try { // try from 008ff744 to 008ff74b has its CatchHandler @ 008ffa08 */
    local_74 = std::panicking::panic_count::is_zero_slow_path();
    local_74 = local_74 ^ 1;
    cVar2 = *(char *)((long)local_80 + 0x14);
  }
  if (cVar2 != '\0') {
LAB_008ff760:
    local_68 = local_74;
    local_70 = local_80 + 2;
                    /* try { // try from 008ff770 to 008ff793 has its CatchHandler @ 008ffa6c */
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              ("called `Result::unwrap()` on an `Err` value",0x2b,&local_70,&PTR_FUN_00aefe28,
               &PTR_s__root__cargo_registry_src_index__00aefde0);
  }
LAB_008ff408:
  if (*(long **)(lVar11 + 0x30) == local_80) {
LAB_008ff684:
                    /* try { // try from 008ff684 to 008ff68f has its CatchHandler @ 008ffa58 */
    FUN_008fe384(plVar1,bVar9 & 1);
    do {
      lVar11 = *local_80;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(local_80,0x10);
      if (bVar3) {
        *local_80 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 + -1 != 0) {
      return;
    }
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<tokio_util::sync::cancellation_token::tree_node::TreeNode>>
    ::drop_slow(&local_48);
    return;
  }
  if ((((local_74 & 1) == 0) && ((*puVar4 & 0x7fffffffffffffff) != 0)) &&
     (uVar7 = std::panicking::panic_count::is_zero_slow_path(), (uVar7 & 1) == 0)) {
    *(undefined1 *)((long)local_80 + 0x14) = 1;
  }
  do {
    plVar8 = local_80 + 2;
    lVar10 = *plVar8;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar3) {
      *(int *)plVar8 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((int)lVar10 == 2) {
                    /* try { // try from 008ff79c to 008ff7af has its CatchHandler @ 008ffa08 */
    <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(local_80 + 2);
  }
  do {
    lVar10 = *local_80;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(local_80,0x10);
    if (bVar3) {
      *local_80 = lVar10 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar10 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 008ff450 to 008ff457 has its CatchHandler @ 008ffa54 */
    <alloc::sync::[n]::alloc::sync::Arc<tokio_util::sync::cancellation_token::tree_node::TreeNode>>
    ::drop_slow(&local_48);
  }
  plVar8 = *(long **)(lVar11 + 0x30);
  if (plVar8 != (long *)0x0) {
LAB_008ff474:
    do {
      lVar10 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (-1 < lVar10) {
      local_80 = *(long **)(lVar11 + 0x30);
      plVar8 = local_80 + 2;
LAB_008ff494:
      local_48 = local_80;
      if ((int)*plVar8 == 0) goto code_r0x008ff49c;
      ClearExclusiveLocal();
                    /* try { // try from 008ff644 to 008ff66f has its CatchHandler @ 008ffa4c */
      if ((((bVar9 & 1) == 0) && ((*puVar4 & 0x7fffffffffffffff) != 0)) &&
         (uVar7 = std::panicking::panic_count::is_zero_slow_path(), (uVar7 & 1) == 0)) {
        *(undefined1 *)(lVar11 + 0x14) = 1;
      }
      do {
        iVar6 = *(int *)plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = 0;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 == 2) {
        <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(lVar11 + 0x10);
      }
      do {
        if ((int)local_80[2] != 0) {
          ClearExclusiveLocal();
          <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                    (local_80 + 2);
          break;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(local_80 + 2,0x10);
        if (bVar3) {
          *(undefined4 *)(local_80 + 2) = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((*puVar4 & 0x7fffffffffffffff) == 0) {
        local_74 = 0;
        cVar2 = *(char *)((long)local_80 + 0x14);
      }
      else {
        local_74 = std::panicking::panic_count::is_zero_slow_path();
        local_74 = local_74 ^ 1;
        cVar2 = *(char *)((long)local_80 + 0x14);
      }
      if (cVar2 != '\0') goto LAB_008ff960;
      do {
        if (*(int *)plVar1 != 0) {
          ClearExclusiveLocal();
                    /* try { // try from 008ff678 to 008ff67f has its CatchHandler @ 008ffa00 */
          <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                    (lVar11 + 0x10);
          break;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((*puVar4 & 0x7fffffffffffffff) == 0) {
        local_68 = 0;
        cVar2 = *pcVar12;
      }
      else {
                    /* try { // try from 008ff628 to 008ff62b has its CatchHandler @ 008ffa00 */
        local_68 = std::panicking::panic_count::is_zero_slow_path();
        local_68 = local_68 ^ 1;
        cVar2 = *pcVar12;
      }
      bVar9 = local_68;
      if (cVar2 != '\0') goto LAB_008ff900;
      goto LAB_008ff4c0;
    }
    goto LAB_008ff998;
  }
  goto LAB_008ff6b8;
code_r0x008ff49c:
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
  if (bVar3) {
    *(int *)plVar8 = 1;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto code_r0x008ff4a4;
  goto LAB_008ff494;
code_r0x008ff4a4:
  if ((*puVar4 & 0x7fffffffffffffff) == 0) {
    local_74 = 0;
    cVar2 = *(char *)((long)local_80 + 0x14);
  }
  else {
                    /* try { // try from 008ff518 to 008ff613 has its CatchHandler @ 008ffa4c */
    local_74 = std::panicking::panic_count::is_zero_slow_path();
    local_74 = local_74 ^ 1;
    cVar2 = *(char *)((long)local_80 + 0x14);
  }
  if (cVar2 != '\0') goto LAB_008ff760;
LAB_008ff4c0:
  if (*(long **)(lVar11 + 0x30) == local_80) goto LAB_008ff684;
  if ((((local_74 & 1) == 0) && ((*puVar4 & 0x7fffffffffffffff) != 0)) &&
     (uVar7 = std::panicking::panic_count::is_zero_slow_path(), (uVar7 & 1) == 0)) {
    *(undefined1 *)((long)local_80 + 0x14) = 1;
  }
  do {
    plVar8 = local_80 + 2;
    lVar10 = *plVar8;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar3) {
      *(int *)plVar8 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((int)lVar10 == 2) {
    <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(local_80 + 2);
  }
  do {
    lVar10 = *local_80;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(local_80,0x10);
    if (bVar3) {
      *local_80 = lVar10 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar10 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 008ff508 to 008ff50f has its CatchHandler @ 008ffa64 */
    <alloc::sync::[n]::alloc::sync::Arc<tokio_util::sync::cancellation_token::tree_node::TreeNode>>
    ::drop_slow(&local_48);
  }
  plVar8 = *(long **)(lVar11 + 0x30);
  if (plVar8 == (long *)0x0) goto LAB_008ff6b8;
  goto LAB_008ff474;
}


// ===== 008ffae4  FUN_008ffae4 =====

void FUN_008ffae4(long *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong *puVar5;
  ulong uVar6;
  long lVar7;
  int *local_40;
  byte local_38;
  
  lVar7 = *param_1;
  piVar1 = (int *)(lVar7 + 0x10);
  do {
    if (*piVar1 != 0) {
      ClearExclusiveLocal();
      <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                (lVar7 + 0x10);
      uVar6 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      puVar5 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      goto joined_r0x008ffbe0;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar6 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
  puVar5 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
joined_r0x008ffbe0:
  PTR_GLOBAL_PANIC_COUNT_00b00bf0 = (undefined *)puVar5;
  if ((uVar6 & 0x7fffffffffffffff) == 0) {
    local_38 = 0;
    cVar3 = *(char *)(lVar7 + 0x14);
  }
  else {
    local_38 = std::panicking::panic_count::is_zero_slow_path();
    local_38 = local_38 ^ 1;
    cVar3 = *(char *)(lVar7 + 0x14);
  }
  if (cVar3 != '\0') {
    local_40 = piVar1;
                    /* try { // try from 008ffbfc to 008ffc1f has its CatchHandler @ 008ffc3c */
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              ("called `Result::unwrap()` on an `Err` value",0x2b,&local_40,&PTR_FUN_00aefe28,
               &PTR_s__root__cargo_registry_src_index__00aeff38);
  }
  if (*(long *)(lVar7 + 0x40) == 0) {
                    /* try { // try from 008ffb7c to 008ffb93 has its CatchHandler @ 008ffc24 */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("assertion failed: locked_node.num_handles > 0",0x2d,
               &PTR_s__root__cargo_registry_src_index__00aeff50);
  }
  *(long *)(lVar7 + 0x40) = *(long *)(lVar7 + 0x40) + 1;
  if ((((local_38 & 1) == 0) && ((*puVar5 & 0x7fffffffffffffff) != 0)) &&
     (uVar6 = std::panicking::panic_count::is_zero_slow_path(), (uVar6 & 1) == 0)) {
    *(undefined1 *)(lVar7 + 0x14) = 1;
  }
  do {
    iVar2 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar2 == 2) {
    <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(piVar1);
    return;
  }
  return;
}


// ===== 008ffc54  FUN_008ffc54 =====

void FUN_008ffc54(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong *puVar5;
  code *pcVar6;
  byte bVar7;
  byte bVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  byte local_84;
  long *local_80;
  long *local_78;
  long *local_70;
  byte local_68;
  
  plVar14 = (long *)*param_1;
  plVar1 = plVar14 + 2;
  do {
    if ((int)*plVar1 != 0) {
      ClearExclusiveLocal();
      <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                (plVar14 + 2);
      uVar9 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      puVar5 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      goto joined_r0x00900244;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(undefined4 *)plVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar9 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
  puVar5 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
joined_r0x00900244:
  PTR_GLOBAL_PANIC_COUNT_00b00bf0 = (undefined *)puVar5;
  if ((uVar9 & 0x7fffffffffffffff) == 0) {
    bVar8 = 0;
    cVar3 = *(char *)((long)plVar14 + 0x14);
  }
  else {
    bVar8 = std::panicking::panic_count::is_zero_slow_path();
    bVar8 = bVar8 ^ 1;
    cVar3 = *(char *)((long)plVar14 + 0x14);
  }
  if (cVar3 != '\0') {
                    /* try { // try from 00900260 to 00900283 has its CatchHandler @ 00900310 */
    local_70 = plVar1;
    local_68 = bVar8;
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              ("called `Result::unwrap()` on an `Err` value",0x2b,&local_70,&PTR_FUN_00aefe28,
               &PTR_s__root__cargo_registry_src_index__00aeff68);
  }
  if ((*(byte *)(plVar14 + 9) & 1) != 0) {
    if ((((bVar8 & 1) == 0) && ((*puVar5 & 0x7fffffffffffffff) != 0)) &&
       (uVar9 = std::panicking::panic_count::is_zero_slow_path(), (uVar9 & 1) == 0)) {
      *(undefined1 *)((long)plVar14 + 0x14) = 1;
    }
    do {
      lVar10 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(undefined4 *)plVar1 = 0;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar10 == 2) {
      <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(plVar1);
      return;
    }
    return;
  }
  lVar10 = plVar14[5];
  do {
    if (lVar10 == 0) {
      *(undefined1 *)(plVar14 + 9) = 1;
      if (plVar14[3] != 0) {
        free((void *)plVar14[4]);
      }
      plVar14[5] = 0;
      plVar14[3] = 0;
      plVar14[4] = 8;
      if ((((bVar8 & 1) == 0) && ((*puVar5 & 0x7fffffffffffffff) != 0)) &&
         (uVar9 = std::panicking::panic_count::is_zero_slow_path(), (uVar9 & 1) == 0)) {
        *(undefined1 *)((long)plVar14 + 0x14) = 1;
      }
      do {
        lVar10 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(undefined4 *)plVar1 = 0;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((int)lVar10 == 2) {
        <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(plVar14 + 2);
      }
      <tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notify_waiters(plVar14 + 10);
      return;
    }
    plVar14[5] = lVar10 + -1;
    plVar16 = *(long **)(plVar14[4] + (lVar10 + -1) * 8);
    plVar2 = plVar16 + 2;
    do {
      local_80 = plVar16;
      if ((int)*plVar2 != 0) {
        ClearExclusiveLocal();
                    /* try { // try from 009000e8 to 009000ef has its CatchHandler @ 00900288 */
        <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                  (plVar16 + 2);
        break;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((*puVar5 & 0x7fffffffffffffff) == 0) {
      local_84 = 0;
      cVar3 = *(char *)((long)plVar16 + 0x14);
    }
    else {
                    /* try { // try from 00900094 to 009000b3 has its CatchHandler @ 00900288 */
      local_84 = std::panicking::panic_count::is_zero_slow_path();
      local_84 = local_84 ^ 1;
      cVar3 = *(char *)((long)plVar16 + 0x14);
    }
    if (cVar3 != '\0') {
                    /* try { // try from 009001a8 to 009001cb has its CatchHandler @ 00900324 */
      local_70 = plVar2;
      local_68 = local_84;
                    /* WARNING: Subroutine does not return */
      core::result::unwrap_failed
                ("called `Result::unwrap()` on an `Err` value",0x2b,&local_70,&PTR_FUN_00aefe28,
                 &PTR_s__root__cargo_registry_src_index__00aeff80);
    }
    plVar13 = plVar16 + 6;
    plVar11 = (long *)*plVar13;
    if (plVar11 != (long *)0x0) {
      do {
        lVar10 = *plVar11;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *plVar11 = lVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar10 + -1 == 0) {
        DataMemoryBarrier(2,1);
                    /* try { // try from 008ffd7c to 008ffd83 has its CatchHandler @ 00900290 */
        <alloc::sync::[n]::alloc::sync::Arc<tokio_util::sync::cancellation_token::tree_node::TreeNode>>
        ::drop_slow(plVar13);
      }
    }
    *plVar13 = 0;
    plVar16[7] = 0;
    if ((*(byte *)(plVar16 + 9) & 1) == 0) {
      while (plVar16[5] != 0) {
        lVar10 = plVar16[5] + -1;
        plVar16[5] = lVar10;
        plVar13 = *(long **)(plVar16[4] + lVar10 * 8);
        plVar11 = plVar13 + 2;
        do {
          local_78 = plVar13;
          if ((int)*plVar11 != 0) {
            ClearExclusiveLocal();
                    /* try { // try from 0090000c to 00900013 has its CatchHandler @ 0090028c */
            <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                      (plVar13 + 2);
            break;
          }
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *(int *)plVar11 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((*puVar5 & 0x7fffffffffffffff) == 0) {
          bVar7 = 0;
          cVar3 = *(char *)((long)plVar13 + 0x14);
        }
        else {
                    /* try { // try from 008fffa0 to 008fffbb has its CatchHandler @ 0090028c */
          bVar7 = std::panicking::panic_count::is_zero_slow_path();
          bVar7 = bVar7 ^ 1;
          cVar3 = *(char *)((long)plVar13 + 0x14);
        }
        if (cVar3 != '\0') {
                    /* try { // try from 00900174 to 00900197 has its CatchHandler @ 00900338 */
          local_70 = plVar11;
          local_68 = bVar7;
                    /* WARNING: Subroutine does not return */
          core::result::unwrap_failed
                    ("called `Result::unwrap()` on an `Err` value",0x2b,&local_70,&PTR_FUN_00aefe28,
                     &PTR_s__root__cargo_registry_src_index__00aeff98);
        }
        plVar15 = plVar13 + 6;
        plVar12 = (long *)*plVar15;
        if (plVar12 != (long *)0x0) {
          do {
            lVar10 = *plVar12;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar4) {
              *plVar12 = lVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar10 + -1 == 0) {
            DataMemoryBarrier(2,1);
                    /* try { // try from 008ffe48 to 008ffe4f has its CatchHandler @ 009002ec */
            <alloc::sync::[n]::alloc::sync::Arc<tokio_util::sync::cancellation_token::tree_node::TreeNode>>
            ::drop_slow(plVar15);
          }
        }
        *plVar15 = 0;
        plVar13[7] = 0;
        if ((*(byte *)(plVar13 + 9) & 1) == 0) {
          if (plVar13[5] == 0) {
            *(undefined1 *)(plVar13 + 9) = 1;
            if (plVar13[3] != 0) {
              free((void *)plVar13[4]);
            }
            plVar13[5] = 0;
            plVar13[3] = 0;
            plVar13[4] = 8;
            if ((((bVar7 & 1) == 0) && ((*puVar5 & 0x7fffffffffffffff) != 0)) &&
               (uVar9 = std::panicking::panic_count::is_zero_slow_path(), (uVar9 & 1) == 0)) {
              *(undefined1 *)((long)plVar13 + 0x14) = 1;
            }
            do {
              lVar10 = *plVar11;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar4) {
                *(int *)plVar11 = 0;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if ((int)lVar10 == 2) {
                    /* try { // try from 008fffdc to 008ffffb has its CatchHandler @ 009002e4 */
              <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(plVar13 + 2)
              ;
            }
                    /* try { // try from 008fff74 to 008fff7b has its CatchHandler @ 009002e4 */
            <tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notify_waiters(plVar13 + 10);
            do {
              lVar10 = *plVar13 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar4) {
                *plVar13 = lVar10;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            goto LAB_008fff8c;
          }
          do {
            lVar10 = *plVar14;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar4) {
              *plVar14 = lVar10 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar10 < 0) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x900288);
            (*pcVar6)();
          }
          plVar12 = (long *)*plVar15;
          if (plVar12 != (long *)0x0) {
            do {
              lVar10 = *plVar12;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar4) {
                *plVar12 = lVar10 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar10 + -1 == 0) {
              DataMemoryBarrier(2,1);
                    /* try { // try from 008ffed0 to 008ffed7 has its CatchHandler @ 009002ac */
              <alloc::sync::[n]::alloc::sync::Arc<tokio_util::sync::cancellation_token::tree_node::TreeNode>>
              ::drop_slow(plVar15);
            }
          }
          plVar13[6] = (long)plVar14;
          plVar13[7] = plVar14[5];
          if ((((bVar7 & 1) == 0) && ((*puVar5 & 0x7fffffffffffffff) != 0)) &&
             (uVar9 = std::panicking::panic_count::is_zero_slow_path(), (uVar9 & 1) == 0)) {
            *(undefined1 *)((long)plVar13 + 0x14) = 1;
          }
          do {
            lVar10 = *plVar11;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar4) {
              *(int *)plVar11 = 0;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((int)lVar10 == 2) {
                    /* try { // try from 008fffc0 to 008fffc7 has its CatchHandler @ 009002e4 */
            <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(plVar13 + 2);
          }
          lVar10 = plVar14[5];
          local_70 = plVar13;
          if (lVar10 == plVar14[3]) {
                    /* try { // try from 008fff1c to 008fff23 has its CatchHandler @ 009002b8 */
            <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<alloc::sync::Arc<tokio_util::sync::cancellation_token::tree_node::TreeNode>>>
            ::grow_one(plVar14 + 3);
          }
          *(long **)(plVar14[4] + lVar10 * 8) = plVar13;
          plVar14[5] = lVar10 + 1;
        }
        else {
                    /* try { // try from 008fffcc to 008fffcf has its CatchHandler @ 0090028c */
          if ((((bVar7 & 1) == 0) && ((*puVar5 & 0x7fffffffffffffff) != 0)) &&
             (uVar9 = std::panicking::panic_count::is_zero_slow_path(), (uVar9 & 1) == 0)) {
            *(undefined1 *)((long)plVar13 + 0x14) = 1;
          }
          do {
            lVar10 = *plVar11;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar4) {
              *(int *)plVar11 = 0;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((int)lVar10 == 2) {
            <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(plVar13 + 2);
          }
          do {
            lVar10 = *plVar13 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar4) {
              *plVar13 = lVar10;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
LAB_008fff8c:
          if (lVar10 == 0) {
            DataMemoryBarrier(2,1);
                    /* try { // try from 008fff94 to 008fff9b has its CatchHandler @ 00900308 */
            <alloc::sync::[n]::alloc::sync::Arc<tokio_util::sync::cancellation_token::tree_node::TreeNode>>
            ::drop_slow(&local_78);
          }
        }
      }
      *(undefined1 *)(plVar16 + 9) = 1;
      if (plVar16[3] != 0) {
        free((void *)plVar16[4]);
      }
      plVar16[5] = 0;
      plVar16[3] = 0;
      plVar16[4] = 8;
                    /* try { // try from 009000d4 to 009000d7 has its CatchHandler @ 0090029c */
      if ((((local_84 & 1) == 0) && ((*puVar5 & 0x7fffffffffffffff) != 0)) &&
         (uVar9 = std::panicking::panic_count::is_zero_slow_path(), (uVar9 & 1) == 0)) {
        *(undefined1 *)((long)plVar16 + 0x14) = 1;
      }
      do {
        lVar10 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = 0;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((int)lVar10 == 2) {
                    /* try { // try from 009000b8 to 009000bf has its CatchHandler @ 0090029c */
        <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(plVar16 + 2);
      }
                    /* try { // try from 00900068 to 0090006f has its CatchHandler @ 0090029c */
      <tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notify_waiters(plVar16 + 10);
      do {
        lVar10 = *plVar16 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar4) {
          *plVar16 = lVar10;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    else {
                    /* try { // try from 009000c4 to 009000c7 has its CatchHandler @ 00900288 */
      if ((((local_84 & 1) == 0) && ((*puVar5 & 0x7fffffffffffffff) != 0)) &&
         (uVar9 = std::panicking::panic_count::is_zero_slow_path(), (uVar9 & 1) == 0)) {
        *(undefined1 *)((long)plVar16 + 0x14) = 1;
      }
      do {
        lVar10 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = 0;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((int)lVar10 == 2) {
        <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(plVar16 + 2);
      }
      do {
        lVar10 = *plVar16 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar4) {
          *plVar16 = lVar10;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (lVar10 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 00900088 to 0090008f has its CatchHandler @ 009002a4 */
      <alloc::sync::[n]::alloc::sync::Arc<tokio_util::sync::cancellation_token::tree_node::TreeNode>>
      ::drop_slow(&local_80);
    }
    lVar10 = plVar14[5];
  } while( true );
}


// ===== 00900468  tokio_util::time::wheel::level::slot_range =====

/* WARNING: Unknown calling convention: __rustcall */
/* tokio_util::time::wheel::level::slot_range */

long __rustcall tokio_util::time::wheel::level::slot_range(ulong param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = ((param_1 & 0xffffffff) + (param_1 & 0xffffffff) * 2) * 2;
  lVar2 = 1L << (uVar3 & 0x3f);
  if (0x3f < (uint)uVar3) {
    lVar2 = 0;
  }
  lVar1 = 0;
  if ((uVar3 & 0xffffffff00000000) == 0) {
    lVar1 = lVar2;
  }
  return lVar1;
}


// ===== 00900494  tokio_util::time::wheel::level::level_range =====

/* WARNING: Unknown calling convention: __rustcall */
/* tokio_util::time::wheel::level::level_range */

long __rustcall tokio_util::time::wheel::level::level_range(ulong param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = ((param_1 & 0xffffffff) + (param_1 & 0xffffffff) * 2) * 2;
  lVar2 = 0x40L << (uVar3 & 0x3f);
  if (0x3f < (uint)uVar3) {
    lVar2 = 0;
  }
  lVar1 = 0;
  if ((uVar3 & 0xffffffff00000000) == 0) {
    lVar1 = lVar2;
  }
  return lVar1;
}


// ===== 009004c0  <tokio_util::codec::framed_impl::ReadFrame_as_core::default::Default>::default =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <tokio_util::codec::framed_impl::ReadFrame as core::default::Default>::default */

void __rustcall
<tokio_util::codec::framed_impl::ReadFrame_as_core::default::Default>::default(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  lVar3 = FUN_004b25a4(0x2000,1);
  if (lVar3 != 0) {
    *(undefined2 *)(param_1 + 4) = 0;
    lVar2 = _UNK_002a0228;
    lVar1 = _s__002a0220;
    *param_1 = lVar3;
    param_1[3] = 0x11;
    param_1[2] = lVar2;
    param_1[1] = lVar1;
    *(undefined1 *)((long)param_1 + 0x22) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(1,0x2000);
}


// ===== 0090051c  <tokio_util::codec::bytes_codec::BytesCodec_as_tokio_util::codec::encoder::Encoder<bytes::bytes::Bytes>>::encode =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio_util::codec::bytes_codec::BytesCodec as
   tokio_util::codec::encoder::Encoder<bytes::bytes::Bytes>>::encode */

undefined8 __rustcall
<tokio_util::codec::bytes_codec::BytesCodec_as_tokio_util::codec::encoder::Encoder<bytes::bytes::Bytes>>
::encode(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  ulong __n;
  long lVar2;
  void *__src;
  long lStack_48;
  ulong local_40;
  ulong uStack_38;
  
  if ((ulong)(param_3[2] - param_3[1]) < (ulong)param_2[2]) {
                    /* try { // try from 0090054c to 0090055b has its CatchHandler @ 00900618 */
    <bytes::bytes_mut::bytes::bytes_mut::BytesMut>::reserve_inner(param_3,param_2[2],1);
  }
  __src = (void *)param_2[1];
  lVar2 = *param_2;
  lStack_48 = param_2[3];
  __n = param_2[2];
  if (__n != 0) {
    lVar1 = param_3[1];
    if ((ulong)(param_3[2] - lVar1) < __n) {
                    /* try { // try from 0090057c to 0090058b has its CatchHandler @ 0090060c */
      <bytes::bytes_mut::bytes::bytes_mut::BytesMut>::reserve_inner(param_3,__n,1);
      lVar1 = param_3[1];
    }
    memcpy((void *)(*param_3 + lVar1),__src,__n);
    uStack_38 = param_3[2] - param_3[1];
    if (uStack_38 < __n) {
                    /* try { // try from 00900600 to 00900607 has its CatchHandler @ 00900638 */
      local_40 = __n;
                    /* WARNING: Subroutine does not return */
      bytes::panic_advance(&local_40);
    }
    __src = (void *)((long)__src + __n);
    param_3[1] = param_3[1] + __n;
  }
  (**(code **)(lVar2 + 0x20))(&lStack_48,__src,0);
  return 0;
}


// ===== 00900664  <tokio_util::codec::framed_impl::ReadFrame_as_core::convert::From<bytes::bytes_mut::BytesMut>>::from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio_util::codec::framed_impl::ReadFrame as
   core::convert::From<bytes::bytes_mut::BytesMut>>::from */

void __rustcall
<tokio_util::codec::framed_impl::ReadFrame_as_core::convert::From<bytes::bytes_mut::BytesMut>>::from
          (undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_2[2];
  if (uVar1 < 0x2000) {
    if (uVar1 - param_2[1] < 0x2000 - uVar1) {
                    /* try { // try from 009006a0 to 009006ab has its CatchHandler @ 009006d8 */
      <bytes::bytes_mut::bytes::bytes_mut::BytesMut>::reserve_inner(param_2,0x2000 - uVar1,1);
    }
  }
  uVar3 = param_2[1];
  uVar2 = *param_2;
  uVar5 = param_2[3];
  uVar4 = param_2[2];
  *(undefined1 *)(param_1 + 4) = 0;
  *(bool *)((long)param_1 + 0x21) = uVar1 != 0;
  param_1[1] = uVar3;
  *param_1 = uVar2;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  *(undefined1 *)((long)param_1 + 0x22) = 0;
  return;
}


// ===== 009006f0  <tokio_util::codec::bytes_codec::BytesCodec_as_tokio_util::codec::encoder::Encoder<bytes::bytes_mut::BytesMut>>::encode =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio_util::codec::bytes_codec::BytesCodec as
   tokio_util::codec::encoder::Encoder<bytes::bytes_mut::BytesMut>>::encode */

undefined8 __rustcall
<tokio_util::codec::bytes_codec::BytesCodec_as_tokio_util::codec::encoder::Encoder<bytes::bytes_mut::BytesMut>>
::encode(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  void *__src;
  ulong *__n;
  long lVar1;
  void *local_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *local_58;
  ulong *local_50;
  code *pcStack_48;
  ulong *local_40;
  code *pcStack_38;
  undefined8 *local_18;
  
  if ((ulong)(param_3[2] - param_3[1]) < (ulong)param_2[1]) {
                    /* try { // try from 00900720 to 0090072b has its CatchHandler @ 0090081c */
    <bytes::bytes_mut::bytes::bytes_mut::BytesMut>::reserve_inner(param_3,param_2[1],1);
  }
  uStack_68 = param_2[3];
  uStack_70 = param_2[2];
  __src = (void *)*param_2;
  __n = (ulong *)param_2[1];
  while( true ) {
    local_80 = __src;
    puStack_78 = __n;
    if (__n == (ulong *)0x0) {
      <bytes::bytes_mut::BytesMut_as_core::ops::drop::Drop>::drop(&local_80);
      return 0;
    }
    lVar1 = param_3[1];
    if ((ulong *)(param_3[2] - lVar1) < __n) {
                    /* try { // try from 00900750 to 0090075f has its CatchHandler @ 00900830 */
      <bytes::bytes_mut::bytes::bytes_mut::BytesMut>::reserve_inner(param_3,__n,1);
      lVar1 = param_3[1];
    }
    memcpy((void *)(*param_3 + lVar1),__src,(size_t)__n);
    pcStack_48 = (code *)(param_3[2] - param_3[1]);
    if (pcStack_48 < __n) break;
    param_3[1] = param_3[1] + (long)__n;
    local_58 = __n;
    if (puStack_78 < __n) {
      local_18 = puStack_78;
      local_50 = (ulong *)&local_58;
      pcStack_48 = FUN_009008d4;
      local_40 = (ulong *)&local_18;
      pcStack_38 = FUN_009008d4;
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                (&DAT_002afeea,&local_50,&PTR_s__root__cargo_registry_src_index__00aeffb0);
    }
                    /* try { // try from 009007a0 to 009007ab has its CatchHandler @ 00900830 */
    <bytes::bytes_mut::bytes::bytes_mut::BytesMut>::advance_unchecked(&local_80,__n);
    __src = local_80;
    __n = puStack_78;
  }
                    /* try { // try from 009007d8 to 00900817 has its CatchHandler @ 00900834 */
  local_50 = __n;
                    /* WARNING: Subroutine does not return */
  bytes::panic_advance(&local_50);
}


// ===== 0090084c  <tokio_util::codec::framed_impl::WriteFrame_as_core::convert::From<bytes::bytes_mut::BytesMut>>::from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio_util::codec::framed_impl::WriteFrame as
   core::convert::From<bytes::bytes_mut::BytesMut>>::from */

void __rustcall
<tokio_util::codec::framed_impl::WriteFrame_as_core::convert::From<bytes::bytes_mut::BytesMut>>::
from(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[2];
  if (uVar1 < 0x2000) {
    if (uVar1 - param_2[1] < 0x2000 - uVar1) {
                    /* try { // try from 00900884 to 0090088f has its CatchHandler @ 009008ac */
      <bytes::bytes_mut::bytes::bytes_mut::BytesMut>::reserve_inner(param_2,0x2000 - uVar1,1);
    }
  }
  uVar2 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[4] = 0x2000;
  return;
}


// ===== 009008c4  FUN_009008c4 =====

void FUN_009008c4(undefined8 *param_1)

{
  <tokio::sync::batch_semaphore::Semaphore_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 009008cc  FUN_009008cc =====

void FUN_009008cc(undefined8 *param_1)

{
  <core::io::error::Error_as_core::fmt::Display>::fmt(*param_1);
  return;
}


// ===== 009008d4  FUN_009008d4 =====

void FUN_009008d4(undefined8 param_1,long param_2)

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


// ===== 009008ec  <tokio_util::codec::bytes_codec::BytesCodec_as_tokio_util::codec::decoder::Decoder>::decode =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio_util::codec::bytes_codec::BytesCodec as tokio_util::codec::decoder::Decoder>::decode */

void __rustcall
<tokio_util::codec::bytes_codec::BytesCodec_as_tokio_util::codec::decoder::Decoder>::decode
          (undefined8 *param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_3 + 8) != 0) {
    <bytes::bytes_mut::bytes::bytes_mut::BytesMut>::split_to
              (param_1 + 1,param_3,*(long *)(param_3 + 8));
    *param_1 = 0;
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 00900934  <tokio_util::codec::framed_impl::WriteFrame_as_core::default::Default>::default =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <tokio_util::codec::framed_impl::WriteFrame as core::default::Default>::default */

void __rustcall
<tokio_util::codec::framed_impl::WriteFrame_as_core::default::Default>::default(long *param_1)

{
  long lVar1;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  lVar1 = FUN_004b25a4(0x2000,1);
  if (lVar1 != 0) {
    *param_1 = lVar1;
    lVar1 = _s__002a0220;
    param_1[2] = _UNK_002a0228;
    param_1[1] = lVar1;
    param_1[3] = 0x11;
    param_1[4] = 0x2000;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(1,0x2000);
}


// ===== 0090098c  <tokio_util::sync::cancellation_token::guard::DropGuard_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio_util::sync::cancellation_token::guard::DropGuard as core::ops::drop::Drop>::drop */

void __rustcall
<tokio_util::sync::cancellation_token::guard::DropGuard_as_core::ops::drop::Drop>::drop
          (long *param_1)

{
  if (*param_1 != 0) {
    FUN_008ffc54();
    return;
  }
  return;
}


// ===== 0090099c  FUN_0090099c =====

void FUN_0090099c(long *param_1,undefined8 *param_2)

{
  long lVar1;
  void *__ptr;
  undefined8 *puVar2;
  undefined8 **ppuVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *local_c0;
  undefined8 *puStack_b8;
  undefined1 *local_b0;
  long *plStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  local_b0 = (undefined1 *)&local_c0;
  puVar4 = (undefined8 *)*param_1;
  puStack_b8 = (undefined8 *)param_1[1];
  *param_1 = 1;
  param_1[1] = (long)&DAT_00aeffe8;
  lVar1 = puStack_b8[1];
  if (lVar1 == 0x60 && puStack_b8[2] == 8) {
    uStack_78 = param_2[5];
    local_80 = param_2[4];
    uStack_68 = param_2[7];
    local_70 = param_2[6];
    uStack_58 = param_2[9];
    local_60 = param_2[8];
    uStack_48 = param_2[0xb];
    uStack_50 = param_2[10];
    uStack_98 = param_2[1];
    local_a0 = *param_2;
    uStack_88 = param_2[3];
    local_90 = param_2[2];
    local_c0 = puVar4;
    ppuVar3 = &local_c0;
    plStack_a8 = param_1;
    if ((code *)*puStack_b8 != (code *)0x0) {
                    /* try { // try from 00900a84 to 00900a8b has its CatchHandler @ 00900b34 */
      (*(code *)*puStack_b8)(puVar4);
      ppuVar3 = (undefined8 **)local_b0;
    }
    local_b0 = (undefined1 *)ppuVar3;
    puVar2 = local_c0;
    uVar6 = *param_2;
    uVar8 = param_2[3];
    uVar7 = param_2[2];
    local_c0[1] = param_2[1];
    *local_c0 = uVar6;
    local_c0[3] = uVar8;
    local_c0[2] = uVar7;
    uVar8 = param_2[8];
    uVar7 = param_2[0xb];
    uVar6 = param_2[10];
    local_c0[9] = param_2[9];
    local_c0[8] = uVar8;
    local_c0[0xb] = uVar7;
    local_c0[10] = uVar6;
    uVar6 = param_2[4];
    uVar8 = param_2[7];
    uVar7 = param_2[6];
    local_c0[5] = param_2[5];
    local_c0[4] = uVar6;
    local_c0[7] = uVar8;
    local_c0[6] = uVar7;
    __ptr = (void *)*param_1;
    puVar4 = (undefined8 *)param_1[1];
    pcVar5 = (code *)*puVar4;
    if (pcVar5 != (code *)0x0) {
                    /* try { // try from 00900ab4 to 00900abb has its CatchHandler @ 00900b08 */
      (*pcVar5)(__ptr);
    }
    if (puVar4[1] != 0) {
      free(__ptr);
    }
    *param_1 = (long)puVar2;
  }
  else {
    if ((code *)*puStack_b8 != (code *)0x0) {
                    /* try { // try from 009009e8 to 009009ef has its CatchHandler @ 00900b48 */
      (*(code *)*puStack_b8)(puVar4);
    }
    if (lVar1 != 0) {
      free(puVar4);
    }
    uStack_88 = param_2[5];
    local_90 = param_2[4];
    uStack_78 = param_2[7];
    local_80 = param_2[6];
    uStack_68 = param_2[9];
    local_70 = param_2[8];
    uStack_58 = param_2[0xb];
    local_60 = param_2[10];
    plStack_a8 = (long *)param_2[1];
    local_b0 = (undefined1 *)*param_2;
    uStack_98 = param_2[3];
    local_a0 = param_2[2];
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar4 = (undefined8 *)FUN_004b25a4(0x60,8);
    if (puVar4 == (undefined8 *)0x0) {
                    /* try { // try from 00900af8 to 00900b03 has its CatchHandler @ 00900b68 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x60);
    }
    uVar7 = param_2[5];
    uVar6 = param_2[4];
    uVar9 = param_2[7];
    uVar8 = param_2[6];
    *param_1 = (long)puVar4;
    puVar4[5] = uVar7;
    puVar4[4] = uVar6;
    puVar4[7] = uVar9;
    puVar4[6] = uVar8;
    uVar6 = param_2[8];
    uVar8 = param_2[0xb];
    uVar7 = param_2[10];
    puVar4[9] = param_2[9];
    puVar4[8] = uVar6;
    puVar4[0xb] = uVar8;
    puVar4[10] = uVar7;
    uVar8 = *param_2;
    uVar7 = param_2[3];
    uVar6 = param_2[2];
    puVar4[1] = param_2[1];
    *puVar4 = uVar8;
    puVar4[3] = uVar7;
    puVar4[2] = uVar6;
  }
  param_1[1] = (long)&PTR_FUN_00aeffc8;
  return;
}


// ===== 00900b80  FUN_00900b80 =====

void FUN_00900b80(long *param_1)

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
      lVar5 = lVar6 * 8;
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
                    /* try { // try from 00900bd4 to 00900bd7 has its CatchHandler @ 00900c18 */
        <alloc::sync::[n]::alloc::sync::Arc<tokio_util::sync::cancellation_token::tree_node::TreeNode>>
        ::drop_slow();
      }
    } while (lVar6 != lVar1);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00900c7c  FUN_00900c7c =====

void FUN_00900c7c(undefined8 *param_1)

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
    <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::semaphore::Semaphore>>::drop_slow();
    return;
  }
  return;
}


// ===== 00900ca0  FUN_00900ca0 =====

void FUN_00900ca0(undefined8 *param_1)

{
  void *__ptr;
  long *plVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 *puVar4;
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
  
  plVar1 = (long *)param_1[1];
  uVar8 = param_1[0xb];
  uVar7 = param_1[10];
  uVar6 = param_1[0xd];
  uVar5 = param_1[0xc];
  uVar9 = param_1[2];
  uVar11 = param_1[5];
  uVar10 = param_1[4];
  uVar13 = param_1[7];
  uVar12 = param_1[6];
  uVar15 = param_1[9];
  uVar14 = param_1[8];
  puVar4 = *(undefined8 **)*param_1;
  puVar4[1] = param_1[3];
  *puVar4 = uVar9;
  puVar4[3] = uVar11;
  puVar4[2] = uVar10;
  puVar4[5] = uVar13;
  puVar4[4] = uVar12;
  puVar4[7] = uVar15;
  puVar4[6] = uVar14;
  puVar4[9] = uVar8;
  puVar4[8] = uVar7;
  puVar4[0xb] = uVar6;
  puVar4[10] = uVar5;
  __ptr = (void *)*plVar1;
  puVar2 = (undefined8 *)plVar1[1];
  pcVar3 = (code *)*puVar2;
  if (pcVar3 != (code *)0x0) {
                    /* try { // try from 00900cdc to 00900ce3 has its CatchHandler @ 00900d14 */
    (*pcVar3)(__ptr);
  }
  if (puVar2[1] != 0) {
    free(__ptr);
  }
  *plVar1 = (long)puVar4;
  plVar1[1] = (long)&PTR_FUN_00aeffc8;
  return;
}


// ===== 00900d44  FUN_00900d44 =====

void FUN_00900d44(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  
  if (*(char *)(param_1 + 0xb) == '\0') {
    plVar4 = (long *)*param_1;
    do {
      lVar3 = *plVar4 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  else {
    if (*(char *)(param_1 + 0xb) != '\x03') {
      return;
    }
                    /* try { // try from 00900d64 to 00900d6b has its CatchHandler @ 00900dd8 */
    <tokio::sync::batch_semaphore::Acquire_as_core::ops::drop::Drop>::drop(param_1 + 2);
    if (param_1[3] != 0) {
                    /* try { // try from 00900d7c to 00900d7f has its CatchHandler @ 00900dd0 */
      (**(code **)(param_1[3] + 0x18))(param_1[4]);
    }
    param_1 = param_1 + 1;
    plVar4 = (long *)*param_1;
    do {
      lVar3 = *plVar4 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if (lVar3 != 0) {
    return;
  }
  DataMemoryBarrier(2,1);
  <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::semaphore::Semaphore>>::drop_slow(param_1);
  return;
}


// ===== 00900e24  FUN_00900e24 =====

void FUN_00900e24(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 00900e34 to 00900e37 has its CatchHandler @ 00900e70 */
  FUN_008ff2f8();
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
    <alloc::sync::[n]::alloc::sync::Arc<tokio_util::sync::cancellation_token::tree_node::TreeNode>>
    ::drop_slow(param_1);
    return;
  }
  return;
}


// ===== 00900ea4  FUN_00900ea4 =====

void FUN_00900ea4(long param_1)

{
                    /* try { // try from 00900eb4 to 00900eb7 has its CatchHandler @ 00900ee0 */
  <tokio::sync::batch_semaphore::Acquire_as_core::ops::drop::Drop>::drop();
  if (*(long *)(param_1 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00900ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 8) + 0x18))(*(undefined8 *)(param_1 + 0x10));
    return;
  }
  return;
}


// ===== 00900f04  FUN_00900f04 =====

void FUN_00900f04(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 00900f14 to 00900f17 has its CatchHandler @ 00900f50 */
  <tokio::sync::semaphore::OwnedSemaphorePermit_as_core::ops::drop::Drop>::drop();
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
    <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::semaphore::Semaphore>>::drop_slow(param_1);
    return;
  }
  return;
}


// ===== 00900f84  FUN_00900f84 =====

void FUN_00900f84(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  plVar3 = (long *)param_1[3];
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
                    /* try { // try from 00900fbc to 00900fbf has its CatchHandler @ 00901044 */
      <alloc::sync::[n]::alloc::sync::Arc<tokio_util::sync::cancellation_token::tree_node::TreeNode>>
      ::drop_slow();
    }
  }
  lVar4 = param_1[2];
  if (lVar4 != 0) {
    lVar6 = param_1[1];
    lVar7 = 0;
    do {
      lVar5 = lVar7 * 8;
      lVar7 = lVar7 + 1;
      plVar3 = *(long **)(lVar6 + lVar5);
      do {
        lVar5 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 + -1 == 0) {
        DataMemoryBarrier(2,1);
                    /* try { // try from 00901000 to 00901003 has its CatchHandler @ 00901058 */
        <alloc::sync::[n]::alloc::sync::Arc<tokio_util::sync::cancellation_token::tree_node::TreeNode>>
        ::drop_slow();
      }
    } while (lVar7 != lVar4);
  }
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 009010bc  FUN_009010bc =====

void FUN_009010bc(undefined8 *param_1,long *param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  undefined1 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 uVar9;
  long lVar10;
  long extraout_x10;
  long local_48;
  
  bVar4 = *(byte *)(param_2 + 0xb);
  if (bVar4 < 2) {
    if (bVar4 != 0) {
      core::panicking::panic_const::panic_const_async_fn_resumed
                (&PTR_s__root__cargo_registry_src_index__00af0008);
LAB_009011d4:
      core::panicking::panic_const::panic_const_async_fn_resumed_panic
                (&PTR_s__root__cargo_registry_src_index__00af0008);
                    /* catch() { ... } // from try @ 00901184 with catch @ 009011e0 */
      *(undefined1 *)(param_2 + 0xb) = 2;
                    /* WARNING: Subroutine does not return */
      FUN_00ab2530();
    }
    uVar1 = *(uint *)(param_2 + 10);
    param_2[3] = 0;
    *(uint *)((long)param_2 + 0x54) = uVar1;
    param_2[1] = *param_2;
    param_2[2] = *param_2 + 0x10;
    param_2[5] = 0;
    param_2[4] = local_48;
    param_2[6] = 0;
    param_2[7] = (ulong)uVar1;
    param_2[8] = (ulong)uVar1;
    *(undefined1 *)(param_2 + 9) = 0;
  }
  else if (bVar4 != 3) goto LAB_009011d4;
                    /* try { // try from 00901124 to 0090112b has its CatchHandler @ 00901214 */
  bVar4 = <tokio::sync::batch_semaphore::Acquire_as_core::future::future::Future>::poll(param_2 + 2)
  ;
  if (bVar4 == 2) {
    uVar5 = 3;
    uVar7 = 1;
  }
  else {
                    /* try { // try from 00901144 to 0090114b has its CatchHandler @ 009011f4 */
    <tokio::sync::batch_semaphore::Acquire_as_core::ops::drop::Drop>::drop(param_2 + 2);
    if (param_2[3] != 0) {
                    /* try { // try from 0090115c to 0090115f has its CatchHandler @ 009011ec */
      (**(code **)(param_2[3] + 0x18))(param_2[4]);
    }
    if ((bVar4 & 1) == 0) {
      lVar10 = param_2[1];
      uVar9 = *(undefined4 *)((long)param_2 + 0x54);
    }
    else {
      plVar6 = (long *)param_2[1];
      do {
        lVar8 = *plVar6;
        lVar10 = lVar8 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar10;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 1) {
        DataMemoryBarrier(2,1);
                    /* try { // try from 00901184 to 0090118b has its CatchHandler @ 009011e0 */
        <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::semaphore::Semaphore>>::drop_slow
                  (param_2 + 1);
        lVar10 = extraout_x10;
      }
      uVar9 = (undefined4)lVar10;
      lVar10 = 0;
    }
    uVar7 = 0;
    param_1[1] = lVar10;
    uVar5 = 1;
    *(undefined4 *)(param_1 + 2) = uVar9;
  }
  *param_1 = uVar7;
  *(undefined1 *)(param_2 + 0xb) = uVar5;
  return;
}


// ===== 00901258  <tokio_util::sync::poll_semaphore::tokio_util::sync::poll_semaphore::PollSemaphore>::into_inner =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio_util::sync::poll_semaphore::tokio_util::sync::poll_semaphore::PollSemaphore>::into_inner
    */

undefined8 __rustcall
<tokio_util::sync::poll_semaphore::tokio_util::sync::poll_semaphore::PollSemaphore>::into_inner
          (undefined8 *param_1)

{
  code *pcVar1;
  void *__ptr;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  __ptr = (void *)param_1[2];
  uVar2 = *param_1;
  if (__ptr != (void *)0x0) {
    puVar3 = (undefined8 *)param_1[3];
    pcVar1 = (code *)*puVar3;
    if (pcVar1 != (code *)0x0) {
                    /* try { // try from 00901280 to 00901287 has its CatchHandler @ 009012b0 */
      (*pcVar1)(__ptr);
    }
    if (puVar3[1] != 0) {
      free(__ptr);
    }
  }
  return uVar2;
}


// ===== 009012d0  <tokio_util::sync::poll_semaphore::tokio_util::sync::poll_semaphore::PollSemaphore>::add_permits =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio_util::sync::poll_semaphore::tokio_util::sync::poll_semaphore::PollSemaphore>::add_permits
    */

void __rustcall
<tokio_util::sync::poll_semaphore::tokio_util::sync::poll_semaphore::PollSemaphore>::add_permits
          (long *param_1)

{
  <tokio::sync::semaphore::tokio::sync::semaphore::Semaphore>::add_permits(*param_1 + 0x10);
  return;
}


// ===== 009012dc  <tokio_util::sync::poll_semaphore::PollSemaphore_as_futures_core::stream::Stream>::poll_next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio_util::sync::poll_semaphore::PollSemaphore as futures_core::stream::Stream>::poll_next */

void __rustcall
<tokio_util::sync::poll_semaphore::PollSemaphore_as_futures_core::stream::Stream>::poll_next
          (undefined8 param_1,undefined8 param_2)

{
  <tokio_util::sync::poll_semaphore::tokio_util::sync::poll_semaphore::PollSemaphore>::
  poll_acquire_many(param_1,param_2,1);
  return;
}


// ===== 009012e4  <tokio_util::sync::poll_semaphore::tokio_util::sync::poll_semaphore::PollSemaphore>::available_permits =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio_util::sync::poll_semaphore::tokio_util::sync::poll_semaphore::PollSemaphore>::available_permits
    */

void __rustcall
<tokio_util::sync::poll_semaphore::tokio_util::sync::poll_semaphore::PollSemaphore>::
available_permits(long *param_1)

{
  <tokio::sync::semaphore::tokio::sync::semaphore::Semaphore>::available_permits(*param_1 + 0x10);
  return;
}


// ===== 009012f0  <tokio_util::sync::poll_semaphore::tokio_util::sync::poll_semaphore::PollSemaphore>::poll_acquire_many =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio_util::sync::poll_semaphore::tokio_util::sync::poll_semaphore::PollSemaphore>::poll_acquire_many
    */

void __rustcall
<tokio_util::sync::poll_semaphore::tokio_util::sync::poll_semaphore::PollSemaphore>::
poll_acquire_many(undefined8 *param_1,ulong *param_2,undefined8 param_3,int param_4)

{
  char cVar1;
  bool bVar2;
  ulong *__ptr;
  long *plVar3;
  ulong uVar4;
  code *pcVar5;
  long lVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  void *__ptr_00;
  ulong local_a0;
  uint uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  ulong uStack_88;
  ulong local_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong local_60;
  ulong uStack_58;
  int local_50;
  undefined4 uStack_4c;
  undefined1 local_48;
  undefined7 uStack_47;
  
  puVar7 = param_2 + 2;
  if (*puVar7 == 0) {
    plVar3 = (long *)*param_2;
    do {
      lVar6 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 < 0) goto LAB_00901530;
    <tokio::sync::semaphore::tokio::sync::semaphore::Semaphore>::try_acquire_many_owned
              (&local_a0,*param_2,param_4);
    if (local_a0 != 0) {
      param_1[1] = local_a0;
      *(uint *)(param_1 + 2) = uStack_98;
      goto LAB_009014f4;
    }
    if ((uStack_98 & 1) != 0) {
      plVar3 = (long *)*param_2;
      do {
        lVar6 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 < 0) goto LAB_00901530;
      local_a0 = *param_2;
      local_48 = 0;
      local_50 = param_4;
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      __ptr = (ulong *)FUN_004b25a4(0x60,8);
      if (__ptr == (ulong *)0x0) {
                    /* try { // try from 00901524 to 0090152f has its CatchHandler @ 0090158c */
                    /* WARNING: Subroutine does not return */
        alloc::alloc::handle_alloc_error(8,0x60);
      }
      uVar4 = *puVar7;
      __ptr[5] = uStack_78;
      __ptr[4] = local_80;
      __ptr[7] = uStack_68;
      __ptr[6] = uStack_70;
      __ptr[9] = uStack_58;
      __ptr[8] = local_60;
      __ptr[0xb] = CONCAT71(uStack_47,local_48);
      __ptr[10] = CONCAT44(uStack_4c,local_50);
      __ptr[1] = CONCAT44(uStack_94,uStack_98);
      *__ptr = local_a0;
      __ptr[3] = uStack_88;
      __ptr[2] = CONCAT44(uStack_8c,local_90);
      if (uVar4 == 0) {
        *(int *)(param_2 + 1) = param_4;
        param_2[2] = (ulong)__ptr;
        param_2[3] = (ulong)&PTR_FUN_00aeffc8;
      }
      else {
                    /* try { // try from 009014a0 to 009014a7 has its CatchHandler @ 00901534 */
        FUN_00900d44(__ptr);
        free(__ptr);
      }
      goto LAB_00901368;
    }
  }
  else {
    if ((int)param_2[1] != param_4) {
      plVar3 = (long *)*param_2;
      do {
        lVar6 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 < 0) goto LAB_00901530;
      local_a0 = *param_2;
      local_48 = 0;
      local_50 = param_4;
      FUN_0090099c(puVar7,&local_a0);
      *(int *)(param_2 + 1) = param_4;
    }
LAB_00901368:
    (**(code **)(param_2[3] + 0x18))(&local_a0,param_2[2],param_3);
    if ((local_a0 & 1) != 0) {
      *param_1 = 1;
      return;
    }
    plVar3 = (long *)*param_2;
    do {
      lVar6 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 < 0) {
LAB_00901530:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x901534);
      (*pcVar5)();
    }
    local_a0 = *param_2;
    local_48 = 0;
                    /* try { // try from 0090141c to 00901427 has its CatchHandler @ 00901574 */
    local_50 = param_4;
    FUN_0090099c(puVar7,&local_a0);
    if (CONCAT44(uStack_94,uStack_98) != 0) {
      param_1[1] = CONCAT44(uStack_94,uStack_98);
      *(undefined4 *)(param_1 + 2) = local_90;
      goto LAB_009014f4;
    }
    __ptr_00 = (void *)param_2[2];
    if (__ptr_00 != (void *)0x0) {
      puVar8 = (undefined8 *)param_2[3];
      pcVar5 = (code *)*puVar8;
      if (pcVar5 != (code *)0x0) {
                    /* try { // try from 009014d0 to 009014d7 has its CatchHandler @ 00901550 */
        (*pcVar5)(__ptr_00);
      }
      if (puVar8[1] != 0) {
        free(__ptr_00);
      }
    }
    *puVar7 = 0;
  }
  param_1[1] = 0;
LAB_009014f4:
  *param_1 = 0;
  return;
}


// ===== 009015a4  <tokio_util::sync::poll_semaphore::tokio_util::sync::poll_semaphore::PollSemaphore>::close =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio_util::sync::poll_semaphore::tokio_util::sync::poll_semaphore::PollSemaphore>::close */

void __rustcall
<tokio_util::sync::poll_semaphore::tokio_util::sync::poll_semaphore::PollSemaphore>::close
          (long *param_1)

{
  <tokio::sync::semaphore::tokio::sync::semaphore::Semaphore>::close(*param_1 + 0x10);
  return;
}


// ===== 009015b0  <tokio_util::sync::cancellation_token::guard_ref::tokio_util::sync::cancellation_token::guard_ref::DropGuardRef>::disarm =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio_util::sync::cancellation_token::guard_ref::tokio_util::sync::cancellation_token::guard_ref::DropGuardRef>::disarm
    */

void __rustcall
<tokio_util::sync::cancellation_token::guard_ref::tokio_util::sync::cancellation_token::guard_ref::DropGuardRef>
::disarm(long param_1)

{
  if (param_1 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed
            ("`inner` can be only None in a destructor",0x28,
             &PTR_s__root__cargo_registry_src_index__00af0020);
}


// ===== 009015d8  <tokio_util::codec::length_delimited::[2]::tokio_util::codec::length_delimited::Builder>::length_field_length =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio_util::codec::length_delimited::[2]::tokio_util::codec::length_delimited::Builder>::length_field_length
    */

void __rustcall
<tokio_util::codec::length_delimited::[2]::tokio_util::codec::length_delimited::Builder>::
length_field_length(long param_1,long param_2)

{
  if (param_2 - 1U < 8) {
    *(long *)(param_1 + 0x18) = param_2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            ("invalid length field length",0x37,&PTR_s__root__cargo_registry_src_index__00af0050);
}


// ===== 0090160c  <tokio_util::codec::length_delimited::[2]::tokio_util::codec::length_delimited::Builder>::new_codec =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio_util::codec::length_delimited::[2]::tokio_util::codec::length_delimited::Builder>::new_codec
    */

void __rustcall
<tokio_util::codec::length_delimited::[2]::tokio_util::codec::length_delimited::Builder>::new_codec
          (undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  iVar3 = *(int *)(param_2 + 3);
  uVar4 = param_2[5];
  uVar6 = param_2[1];
  uVar5 = *param_2;
  uVar8 = param_2[4];
  uVar7 = param_2[3];
  param_1[7] = 0;
  param_1[1] = uVar6;
  *param_1 = uVar5;
  uVar6 = param_2[6];
  uVar5 = param_2[5];
  param_1[4] = uVar8;
  param_1[3] = uVar7;
  param_1[6] = uVar6;
  param_1[5] = uVar5;
  uVar2 = 0xffffffffffffffff;
  if ((uint)(iVar3 << 3) < 0x40) {
    uVar2 = ~(-1L << ((ulong)(uint)(iVar3 << 3) & 0x3f));
  }
  uVar1 = uVar2 + uVar4;
  if ((uVar4 != 0xffffffffffffffff && (long)(uVar4 + 1) < 0 == SCARRY8(uVar4,1)) ==
      CARRY8(uVar2,uVar4)) {
    uVar1 = -(ulong)CARRY8(uVar2,uVar4);
  }
  uVar2 = param_2[2];
  if (uVar1 <= (ulong)param_2[2]) {
    uVar2 = uVar1;
  }
  param_1[2] = uVar2;
  return;
}


// ===== 00901678  <tokio_util::sync::cancellation_token::[4]::tokio_util::sync::cancellation_token::CancellationToken>::child_token =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio_util::sync::cancellation_token::[4]::tokio_util::sync::cancellation_token::CancellationToken>::child_token
    */

long * __rustcall
<tokio_util::sync::cancellation_token::[4]::tokio_util::sync::cancellation_token::CancellationToken>
::child_token(undefined8 *param_1)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong *puVar5;
  code *pcVar6;
  byte bVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *plStack_b0;
  long lStack_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long *plStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  plVar11 = (long *)*param_1;
  plVar1 = plVar11 + 2;
  do {
    if ((int)*plVar1 != 0) {
      ClearExclusiveLocal();
      <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                (plVar11 + 2);
      uVar9 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      puVar5 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      goto joined_r0x008ff0c0;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(undefined4 *)plVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar9 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
  puVar5 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
joined_r0x008ff0c0:
  PTR_GLOBAL_PANIC_COUNT_00b00bf0 = (undefined *)puVar5;
  if ((uVar9 & 0x7fffffffffffffff) == 0) {
    bVar7 = 0;
    cVar3 = *(char *)((long)plVar11 + 0x14);
    iVar2 = iStack_9c;
  }
  else {
    bVar7 = std::panicking::panic_count::is_zero_slow_path();
    bVar7 = bVar7 ^ 1;
    cVar3 = *(char *)((long)plVar11 + 0x14);
    iVar2 = iStack_9c;
  }
  if (cVar3 != '\0') {
    uVar9 = (ulong)lStack_a8 >> 8;
    lStack_a8 = CONCAT71((int7)uVar9,bVar7);
    plStack_b0 = plVar1;
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              ("called `Result::unwrap()` on an `Err` value",0x2b,&plStack_b0,&PTR_FUN_00aefe28,
               &PTR_s__root__cargo_registry_src_index__00aefe60);
  }
  iStack_9c._1_3_ = (uint3)((uint)iVar2 >> 8);
  if ((*(byte *)(plVar11 + 9) & 1) != 0) {
    uStack_a0 = 0;
    iStack_9c = (uint)iStack_9c._1_3_ << 8;
    lStack_98 = 0;
    lStack_90 = 8;
    lStack_88 = 0;
    plStack_80 = (long *)0x0;
    lStack_a8 = 1;
    plStack_b0 = (long *)&DAT_00000001;
    lStack_78 = 0;
    lStack_70 = 1;
    uStack_68 = 1;
    lStack_58 = 0;
    lStack_60 = 0;
    lStack_48 = 0;
    lStack_50 = 0;
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    plVar8 = (long *)FUN_004b25a4(0x70,8);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x70);
    }
    plVar8[9] = CONCAT71(uStack_67,uStack_68);
    plVar8[8] = lStack_70;
    plVar8[0xb] = lStack_58;
    plVar8[10] = lStack_60;
    plVar8[0xd] = lStack_48;
    plVar8[0xc] = lStack_50;
    plVar8[1] = lStack_a8;
    *plVar8 = (long)plStack_b0;
    plVar8[3] = lStack_98;
    plVar8[2] = CONCAT44(iStack_9c,uStack_a0);
    plVar8[5] = lStack_88;
    plVar8[4] = lStack_90;
    plVar8[7] = lStack_78;
    plVar8[6] = (long)plStack_80;
    if ((((bVar7 & 1) == 0) && ((*puVar5 & 0x7fffffffffffffff) != 0)) &&
       (uVar9 = std::panicking::panic_count::is_zero_slow_path(), (uVar9 & 1) == 0)) {
      *(undefined1 *)((long)plVar11 + 0x14) = 1;
    }
    do {
      iVar2 = (int)*plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(undefined4 *)plVar1 = 0;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_008ff02c:
    if (iVar2 == 2) {
      <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(plVar1);
    }
    return plVar8;
  }
  do {
    lVar10 = *plVar11;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar4) {
      *plVar11 = lVar10 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (-1 < lVar10) {
    uStack_a0 = 0;
    lStack_98 = 0;
    lStack_90 = 8;
    lStack_78 = plVar11[5];
    iStack_9c = (uint)iStack_9c._1_3_ << 8;
    lStack_88 = 0;
    lStack_a8 = 1;
    plStack_b0 = (long *)0x1;
    lStack_70 = 1;
    uStack_68 = 0;
    lStack_58 = 0;
    lStack_60 = 0;
    lStack_48 = 0;
    lStack_50 = 0;
    plStack_80 = plVar11;
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    plVar8 = (long *)FUN_004b25a4(0x70,8);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x70);
    }
    plVar8[9] = CONCAT71(uStack_67,uStack_68);
    plVar8[8] = lStack_70;
    plVar8[0xb] = lStack_58;
    plVar8[10] = lStack_60;
    plVar8[0xd] = lStack_48;
    plVar8[0xc] = lStack_50;
    plVar8[1] = lStack_a8;
    *plVar8 = (long)plStack_b0;
    plVar8[3] = lStack_98;
    plVar8[2] = CONCAT44(iStack_9c,uStack_a0);
    plVar8[5] = lStack_88;
    plVar8[4] = lStack_90;
    plVar8[7] = lStack_78;
    plVar8[6] = (long)plStack_80;
    do {
      lVar10 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    iVar2 = iStack_9c;
    if (-1 < lVar10) {
      lVar10 = plVar11[5];
      plStack_b0 = plVar8;
      if (lVar10 == plVar11[3]) {
        <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<alloc::sync::Arc<tokio_util::sync::cancellation_token::tree_node::TreeNode>>>
        ::grow_one();
      }
      *(long **)(plVar11[4] + lVar10 * 8) = plVar8;
      plVar11[5] = lVar10 + 1;
      if ((((bVar7 & 1) == 0) && ((*puVar5 & 0x7fffffffffffffff) != 0)) &&
         (uVar9 = std::panicking::panic_count::is_zero_slow_path(), (uVar9 & 1) == 0)) {
        *(undefined1 *)((long)plVar11 + 0x14) = 1;
      }
      do {
        iVar2 = (int)*plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(undefined4 *)plVar1 = 0;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      goto LAB_008ff02c;
    }
  }
  iStack_9c = iVar2;
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x8ff104);
  (*pcVar6)();
}


// ===== 0090167c  <tokio_util::sync::cancellation_token::[4]::tokio_util::sync::cancellation_token::CancellationToken>::is_cancelled =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio_util::sync::cancellation_token::[4]::tokio_util::sync::cancellation_token::CancellationToken>::is_cancelled
    */

byte __rustcall
<tokio_util::sync::cancellation_token::[4]::tokio_util::sync::cancellation_token::CancellationToken>
::is_cancelled(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  int iVar5;
  ulong uVar6;
  byte bVar7;
  long lVar8;
  int *piStack_40;
  byte bStack_38;
  
  lVar8 = *param_1;
  piVar1 = (int *)(lVar8 + 0x10);
  do {
    if (*piVar1 != 0) {
      ClearExclusiveLocal();
      <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                (lVar8 + 0x10);
      uVar6 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      goto joined_r0x008ff2bc;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar6 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
  puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
joined_r0x008ff2bc:
  PTR_GLOBAL_PANIC_COUNT_00b00bf0 = (undefined *)puVar4;
  if ((uVar6 & 0x7fffffffffffffff) == 0) {
    if (*(char *)(lVar8 + 0x14) != '\0') {
      bStack_38 = 0;
LAB_008ff23c:
      piStack_40 = piVar1;
                    /* WARNING: Subroutine does not return */
      core::result::unwrap_failed
                ("called `Result::unwrap()` on an `Err` value",0x2b,&piStack_40,&PTR_FUN_00aefe28,
                 &PTR_s__root__cargo_registry_src_index__00aefe78);
    }
    bVar7 = *(byte *)(lVar8 + 0x48);
  }
  else {
    iVar5 = std::panicking::panic_count::is_zero_slow_path();
    if (*(char *)(lVar8 + 0x14) != '\0') {
      bStack_38 = (byte)iVar5 ^ 1;
      goto LAB_008ff23c;
    }
    bVar7 = *(byte *)(lVar8 + 0x48);
    if (iVar5 == 0) goto LAB_008ff20c;
  }
  if (((*puVar4 & 0x7fffffffffffffff) != 0) &&
     (uVar6 = std::panicking::panic_count::is_zero_slow_path(), (uVar6 & 1) == 0)) {
    *(undefined1 *)(lVar8 + 0x14) = 1;
  }
LAB_008ff20c:
  do {
    iVar5 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar5 != 2) {
    return bVar7 & 1;
  }
  <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(piVar1);
  return bVar7 & 1;
}


// ===== 00901680  <tokio_util::sync::cancellation_token::[4]::tokio_util::sync::cancellation_token::CancellationToken>::cancelled_owned =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio_util::sync::cancellation_token::[4]::tokio_util::sync::cancellation_token::CancellationToken>::cancelled_owned
    */

void __rustcall
<tokio_util::sync::cancellation_token::[4]::tokio_util::sync::cancellation_token::CancellationToken>
::cancelled_owned(long *param_1,long param_2)

{
  long local_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long local_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
                    /* try { // try from 0090169c to 009016a7 has its CatchHandler @ 009016d4 */
  <tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notified(&local_60,param_2 + 0x50);
  param_1[2] = lStack_58;
  param_1[1] = local_60;
  param_1[4] = lStack_48;
  param_1[3] = lStack_50;
  param_1[6] = lStack_38;
  param_1[5] = local_40;
  param_1[8] = lStack_28;
  param_1[7] = lStack_30;
  *param_1 = param_2;
  return;
}


// ===== 009016ec  <tokio_util::sync::cancellation_token::CancellationToken_as_core::default::Default>::default =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio_util::sync::cancellation_token::CancellationToken as core::default::Default>::default */

void __rustcall
<tokio_util::sync::cancellation_token::CancellationToken_as_core::default::Default>::default(void)

{
  undefined8 *puVar1;
  uint uStack_7c;
  uint7 uStack_47;
  
  uStack_7c = uStack_7c & 0xffffff00;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)FUN_004b25a4(0x70,8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = (ulong)uStack_47 << 8;
    puVar1[8] = 1;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar1[0xd] = 0;
    puVar1[0xc] = 0;
    puVar1[1] = 1;
    *puVar1 = 1;
    puVar1[3] = 0;
    puVar1[2] = (ulong)uStack_7c << 0x20;
    puVar1[5] = 0;
    puVar1[4] = 8;
    return;
  }
                    /* try { // try from 00901770 to 0090177f has its CatchHandler @ 00901784 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x70);
}


// ===== 0090179c  <tokio_util::sync::cancellation_token::[4]::tokio_util::sync::cancellation_token::CancellationToken>::cancel =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio_util::sync::cancellation_token::[4]::tokio_util::sync::cancellation_token::CancellationToken>::cancel
    */

void __rustcall
<tokio_util::sync::cancellation_token::[4]::tokio_util::sync::cancellation_token::CancellationToken>
::cancel(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong *puVar5;
  code *pcVar6;
  byte bVar7;
  byte bVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  byte bStack_84;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  byte bStack_68;
  
  plVar14 = (long *)*param_1;
  plVar1 = plVar14 + 2;
  do {
    if ((int)*plVar1 != 0) {
      ClearExclusiveLocal();
      <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                (plVar14 + 2);
      uVar9 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      puVar5 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      goto joined_r0x00900244;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(undefined4 *)plVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar9 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
  puVar5 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
joined_r0x00900244:
  PTR_GLOBAL_PANIC_COUNT_00b00bf0 = (undefined *)puVar5;
  if ((uVar9 & 0x7fffffffffffffff) == 0) {
    bVar8 = 0;
    cVar3 = *(char *)((long)plVar14 + 0x14);
  }
  else {
    bVar8 = std::panicking::panic_count::is_zero_slow_path();
    bVar8 = bVar8 ^ 1;
    cVar3 = *(char *)((long)plVar14 + 0x14);
  }
  if (cVar3 != '\0') {
    plStack_70 = plVar1;
    bStack_68 = bVar8;
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              ("called `Result::unwrap()` on an `Err` value",0x2b,&plStack_70,&PTR_FUN_00aefe28,
               &PTR_s__root__cargo_registry_src_index__00aeff68);
  }
  if ((*(byte *)(plVar14 + 9) & 1) != 0) {
    if ((((bVar8 & 1) == 0) && ((*puVar5 & 0x7fffffffffffffff) != 0)) &&
       (uVar9 = std::panicking::panic_count::is_zero_slow_path(), (uVar9 & 1) == 0)) {
      *(undefined1 *)((long)plVar14 + 0x14) = 1;
    }
    do {
      lVar10 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(undefined4 *)plVar1 = 0;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar10 == 2) {
      <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(plVar1);
      return;
    }
    return;
  }
  lVar10 = plVar14[5];
  do {
    if (lVar10 == 0) {
      *(undefined1 *)(plVar14 + 9) = 1;
      if (plVar14[3] != 0) {
        free((void *)plVar14[4]);
      }
      plVar14[5] = 0;
      plVar14[3] = 0;
      plVar14[4] = 8;
      if ((((bVar8 & 1) == 0) && ((*puVar5 & 0x7fffffffffffffff) != 0)) &&
         (uVar9 = std::panicking::panic_count::is_zero_slow_path(), (uVar9 & 1) == 0)) {
        *(undefined1 *)((long)plVar14 + 0x14) = 1;
      }
      do {
        lVar10 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(undefined4 *)plVar1 = 0;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((int)lVar10 == 2) {
        <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(plVar14 + 2);
      }
      <tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notify_waiters(plVar14 + 10);
      return;
    }
    plVar14[5] = lVar10 + -1;
    plVar16 = *(long **)(plVar14[4] + (lVar10 + -1) * 8);
    plVar2 = plVar16 + 2;
    do {
      plStack_80 = plVar16;
      if ((int)*plVar2 != 0) {
        ClearExclusiveLocal();
        <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                  (plVar16 + 2);
        break;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((*puVar5 & 0x7fffffffffffffff) == 0) {
      bStack_84 = 0;
      cVar3 = *(char *)((long)plVar16 + 0x14);
    }
    else {
      bStack_84 = std::panicking::panic_count::is_zero_slow_path();
      bStack_84 = bStack_84 ^ 1;
      cVar3 = *(char *)((long)plVar16 + 0x14);
    }
    if (cVar3 != '\0') {
      plStack_70 = plVar2;
      bStack_68 = bStack_84;
                    /* WARNING: Subroutine does not return */
      core::result::unwrap_failed
                ("called `Result::unwrap()` on an `Err` value",0x2b,&plStack_70,&PTR_FUN_00aefe28,
                 &PTR_s__root__cargo_registry_src_index__00aeff80);
    }
    plVar13 = plVar16 + 6;
    plVar11 = (long *)*plVar13;
    if (plVar11 != (long *)0x0) {
      do {
        lVar10 = *plVar11;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *plVar11 = lVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar10 + -1 == 0) {
        DataMemoryBarrier(2,1);
        <alloc::sync::[n]::alloc::sync::Arc<tokio_util::sync::cancellation_token::tree_node::TreeNode>>
        ::drop_slow(plVar13);
      }
    }
    *plVar13 = 0;
    plVar16[7] = 0;
    if ((*(byte *)(plVar16 + 9) & 1) == 0) {
      while (plVar16[5] != 0) {
        lVar10 = plVar16[5] + -1;
        plVar16[5] = lVar10;
        plVar13 = *(long **)(plVar16[4] + lVar10 * 8);
        plVar11 = plVar13 + 2;
        do {
          plStack_78 = plVar13;
          if ((int)*plVar11 != 0) {
            ClearExclusiveLocal();
            <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                      (plVar13 + 2);
            break;
          }
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *(int *)plVar11 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((*puVar5 & 0x7fffffffffffffff) == 0) {
          bVar7 = 0;
          cVar3 = *(char *)((long)plVar13 + 0x14);
        }
        else {
          bVar7 = std::panicking::panic_count::is_zero_slow_path();
          bVar7 = bVar7 ^ 1;
          cVar3 = *(char *)((long)plVar13 + 0x14);
        }
        if (cVar3 != '\0') {
          plStack_70 = plVar11;
          bStack_68 = bVar7;
                    /* WARNING: Subroutine does not return */
          core::result::unwrap_failed
                    ("called `Result::unwrap()` on an `Err` value",0x2b,&plStack_70,
                     &PTR_FUN_00aefe28,&PTR_s__root__cargo_registry_src_index__00aeff98);
        }
        plVar15 = plVar13 + 6;
        plVar12 = (long *)*plVar15;
        if (plVar12 != (long *)0x0) {
          do {
            lVar10 = *plVar12;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar4) {
              *plVar12 = lVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar10 + -1 == 0) {
            DataMemoryBarrier(2,1);
            <alloc::sync::[n]::alloc::sync::Arc<tokio_util::sync::cancellation_token::tree_node::TreeNode>>
            ::drop_slow(plVar15);
          }
        }
        *plVar15 = 0;
        plVar13[7] = 0;
        if ((*(byte *)(plVar13 + 9) & 1) == 0) {
          if (plVar13[5] == 0) {
            *(undefined1 *)(plVar13 + 9) = 1;
            if (plVar13[3] != 0) {
              free((void *)plVar13[4]);
            }
            plVar13[5] = 0;
            plVar13[3] = 0;
            plVar13[4] = 8;
            if ((((bVar7 & 1) == 0) && ((*puVar5 & 0x7fffffffffffffff) != 0)) &&
               (uVar9 = std::panicking::panic_count::is_zero_slow_path(), (uVar9 & 1) == 0)) {
              *(undefined1 *)((long)plVar13 + 0x14) = 1;
            }
            do {
              lVar10 = *plVar11;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar4) {
                *(int *)plVar11 = 0;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if ((int)lVar10 == 2) {
              <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(plVar13 + 2)
              ;
            }
            <tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notify_waiters(plVar13 + 10);
            do {
              lVar10 = *plVar13 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar4) {
                *plVar13 = lVar10;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            goto LAB_008fff8c;
          }
          do {
            lVar10 = *plVar14;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar4) {
              *plVar14 = lVar10 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar10 < 0) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x900288);
            (*pcVar6)();
          }
          plVar12 = (long *)*plVar15;
          if (plVar12 != (long *)0x0) {
            do {
              lVar10 = *plVar12;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar4) {
                *plVar12 = lVar10 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar10 + -1 == 0) {
              DataMemoryBarrier(2,1);
              <alloc::sync::[n]::alloc::sync::Arc<tokio_util::sync::cancellation_token::tree_node::TreeNode>>
              ::drop_slow(plVar15);
            }
          }
          plVar13[6] = (long)plVar14;
          plVar13[7] = plVar14[5];
          if ((((bVar7 & 1) == 0) && ((*puVar5 & 0x7fffffffffffffff) != 0)) &&
             (uVar9 = std::panicking::panic_count::is_zero_slow_path(), (uVar9 & 1) == 0)) {
            *(undefined1 *)((long)plVar13 + 0x14) = 1;
          }
          do {
            lVar10 = *plVar11;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar4) {
              *(int *)plVar11 = 0;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((int)lVar10 == 2) {
            <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(plVar13 + 2);
          }
          lVar10 = plVar14[5];
          plStack_70 = plVar13;
          if (lVar10 == plVar14[3]) {
            <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<alloc::sync::Arc<tokio_util::sync::cancellation_token::tree_node::TreeNode>>>
            ::grow_one(plVar14 + 3);
          }
          *(long **)(plVar14[4] + lVar10 * 8) = plVar13;
          plVar14[5] = lVar10 + 1;
        }
        else {
          if ((((bVar7 & 1) == 0) && ((*puVar5 & 0x7fffffffffffffff) != 0)) &&
             (uVar9 = std::panicking::panic_count::is_zero_slow_path(), (uVar9 & 1) == 0)) {
            *(undefined1 *)((long)plVar13 + 0x14) = 1;
          }
          do {
            lVar10 = *plVar11;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar4) {
              *(int *)plVar11 = 0;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((int)lVar10 == 2) {
            <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(plVar13 + 2);
          }
          do {
            lVar10 = *plVar13 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar4) {
              *plVar13 = lVar10;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
LAB_008fff8c:
          if (lVar10 == 0) {
            DataMemoryBarrier(2,1);
            <alloc::sync::[n]::alloc::sync::Arc<tokio_util::sync::cancellation_token::tree_node::TreeNode>>
            ::drop_slow(&plStack_78);
          }
        }
      }
      *(undefined1 *)(plVar16 + 9) = 1;
      if (plVar16[3] != 0) {
        free((void *)plVar16[4]);
      }
      plVar16[5] = 0;
      plVar16[3] = 0;
      plVar16[4] = 8;
      if ((((bStack_84 & 1) == 0) && ((*puVar5 & 0x7fffffffffffffff) != 0)) &&
         (uVar9 = std::panicking::panic_count::is_zero_slow_path(), (uVar9 & 1) == 0)) {
        *(undefined1 *)((long)plVar16 + 0x14) = 1;
      }
      do {
        lVar10 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = 0;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((int)lVar10 == 2) {
        <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(plVar16 + 2);
      }
      <tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notify_waiters(plVar16 + 10);
      do {
        lVar10 = *plVar16 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar4) {
          *plVar16 = lVar10;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    else {
      if ((((bStack_84 & 1) == 0) && ((*puVar5 & 0x7fffffffffffffff) != 0)) &&
         (uVar9 = std::panicking::panic_count::is_zero_slow_path(), (uVar9 & 1) == 0)) {
        *(undefined1 *)((long)plVar16 + 0x14) = 1;
      }
      do {
        lVar10 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = 0;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((int)lVar10 == 2) {
        <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(plVar16 + 2);
      }
      do {
        lVar10 = *plVar16 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar4) {
          *plVar16 = lVar10;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (lVar10 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<tokio_util::sync::cancellation_token::tree_node::TreeNode>>
      ::drop_slow(&plStack_80);
    }
    lVar10 = plVar14[5];
  } while( true );
}


// ===== 009017a0  <tokio_util::sync::cancellation_token::[4]::tokio_util::sync::cancellation_token::CancellationToken>::cancelled =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio_util::sync::cancellation_token::[4]::tokio_util::sync::cancellation_token::CancellationToken>::cancelled
    */

void __rustcall
<tokio_util::sync::cancellation_token::[4]::tokio_util::sync::cancellation_token::CancellationToken>
::cancelled(undefined8 *param_1,long *param_2)

{
  <tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notified(param_1 + 1,*param_2 + 0x50);
  *param_1 = param_2;
  return;
}


// ===== 009017d4  <alloc::sync::[n]::alloc::sync::Arc<tokio_util::sync::cancellation_token::tree_node::TreeNode>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<tokio_util::sync::cancellation_token::tree_node::TreeNode>>::drop_slow
    */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<tokio_util::sync::cancellation_token::tree_node::TreeNode>>::
drop_slow(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  void *__ptr;
  
  __ptr = (void *)*param_1;
                    /* try { // try from 009017e4 to 009017eb has its CatchHandler @ 00901834 */
  FUN_00900f84((long)__ptr + 0x18);
  if (__ptr != (void *)0xffffffffffffffff) {
    plVar1 = (long *)((long)__ptr + 8);
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 00901874  FUN_00901874 =====

void FUN_00901874(undefined8 *param_1)

{
  *param_1 = 1;
  return;
}


// ===== 00901880  <tokio_util::sync::cancellation_token::CancellationToken_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio_util::sync::cancellation_token::CancellationToken as core::fmt::Debug>::fmt */

void __rustcall
<tokio_util::sync::cancellation_token::CancellationToken_as_core::fmt::Debug>::fmt
          (undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_30 [16];
  undefined1 local_4 [4];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,"CancellationToken",0x11);
  local_4[0] = FUN_008ff1ac(param_1);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (auStack_30,"is_cancelled",0xc,local_4,&DAT_00af0080);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 009018f0  <tokio_util::codec::length_delimited::LengthDelimitedCodec_as_tokio_util::codec::encoder::Encoder<bytes::bytes::Bytes>>::encode =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio_util::codec::length_delimited::LengthDelimitedCodec as
   tokio_util::codec::encoder::Encoder<bytes::bytes::Bytes>>::encode */

undefined8 __rustcall
<tokio_util::codec::length_delimited::LengthDelimitedCodec_as_tokio_util::codec::encoder::Encoder<bytes::bytes::Bytes>>
::encode(long param_1,long *param_2,long *param_3)

{
  void *__src;
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong local_50;
  ulong uStack_48;
  
  uVar5 = param_2[2];
  if (*(ulong *)(param_1 + 0x10) < uVar5) {
                    /* try { // try from 0090191c to 00901923 has its CatchHandler @ 00901ab0 */
    uVar4 = <alloc::io::error::core::io::error::Error>::
            new<tokio_util::codec::length_delimited::LengthDelimitedCodecError>(0x14);
  }
  else {
    uVar7 = *(ulong *)(param_1 + 0x28);
    uVar2 = uVar5 - uVar7;
    if ((long)uVar7 < 0 == uVar5 < uVar7) {
      uVar5 = *(ulong *)(param_1 + 0x18);
      if ((ulong)(param_3[2] - param_3[1]) < uVar5 + uVar2) {
                    /* try { // try from 00901994 to 00901a17 has its CatchHandler @ 00901ab0 */
        <bytes::bytes_mut::bytes::bytes_mut::BytesMut>::reserve_inner(param_3,uVar5 + uVar2,1);
      }
      if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
        local_50 = uVar2;
        if (8 < uVar5) goto LAB_00901a90;
        <bytes::bytes_mut::BytesMut_as_bytes::buf::buf_mut::BufMut>::put_slice
                  (param_3,&local_50,uVar5);
      }
      else {
        if (8 < uVar5) {
LAB_00901a90:
          bytes::panic_does_not_fit(uVar5,8);
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x901ab0);
          (*pcVar3)();
        }
        uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
        uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
        local_50 = uVar2 >> 0x20 | uVar2 << 0x20;
        <bytes::bytes_mut::BytesMut_as_bytes::buf::buf_mut::BufMut>::put_slice
                  (param_3,(long)&uStack_48 - uVar5,uVar5);
      }
      lVar6 = param_3[1];
      __src = (void *)param_2[1];
      uVar5 = param_2[2];
      if ((ulong)(param_3[2] - lVar6) < uVar5) {
        <bytes::bytes_mut::bytes::bytes_mut::BytesMut>::reserve_inner(param_3,uVar5,1);
        lVar6 = param_3[1];
      }
      memcpy((void *)(*param_3 + lVar6),__src,uVar5);
      uStack_48 = param_3[2] - param_3[1];
      if (uVar5 <= uStack_48) {
        lVar6 = *param_2;
        lVar1 = param_2[1];
        param_3[1] = param_3[1] + uVar5;
        (**(code **)(lVar6 + 0x20))(param_2 + 3,lVar1,param_2[2]);
        return 0;
      }
      local_50 = uVar5;
                    /* WARNING: Subroutine does not return */
      bytes::panic_advance(&local_50);
    }
                    /* try { // try from 00901a78 to 00901aab has its CatchHandler @ 00901ab0 */
    uVar4 = <alloc::io::error::core::io::error::Error>::new<&str>
                      (0x14,"provided length would overflow after adjustment",0x2f);
  }
  (**(code **)(*param_2 + 0x20))(param_2 + 3,param_2[1],param_2[2]);
  return uVar4;
}


// ===== 00901ad4  <tokio_util::sync::poll_semaphore::PollSemaphore_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio_util::sync::poll_semaphore::PollSemaphore as core::fmt::Debug>::fmt */

void __rustcall
<tokio_util::sync::poll_semaphore::PollSemaphore_as_core::fmt::Debug>::fmt
          (undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_30 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,"PollSemaphore",0xd);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (auStack_30,"semaphoremax line length exceededmax chunk length exceeded",9,param_1,
             &PTR_FUN_00af00a0);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 00901b38  <tokio_util::sync::cancellation_token::CancellationToken_as_core::clone::Clone>::clone =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio_util::sync::cancellation_token::CancellationToken as core::clone::Clone>::clone */

void __rustcall
<tokio_util::sync::cancellation_token::CancellationToken_as_core::clone::Clone>::clone
          (undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  
  FUN_008ffae4();
  plVar4 = (long *)*param_1;
  do {
    lVar5 = *plVar4;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = lVar5 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (-1 < lVar5) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x901b74);
  (*pcVar3)();
}


// ===== 00901b74  <tokio_util::codec::any_delimiter_codec::AnyDelimiterCodec_as_core::default::Default>::default =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <tokio_util::codec::any_delimiter_codec::AnyDelimiterCodec as core::default::Default>::default */

void __rustcall
<tokio_util::codec::any_delimiter_codec::AnyDelimiterCodec_as_core::default::Default>::default
          (undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar3 = (undefined4 *)FUN_004b25a4(4,1);
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(1,4);
  }
  *puVar3 = 0xd0a3b2c;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar4 = (undefined1 *)FUN_004b25a4(1,1);
  if (puVar4 != (undefined1 *)0x0) {
    *(undefined1 *)(param_1 + 8) = 0;
    param_1[7] = 0xffffffffffffffff;
    *puVar4 = 0x2c;
    uVar2 = _UNK_002a0ee8;
    uVar1 = _DAT_002a0ee0;
    *param_1 = 4;
    param_1[1] = puVar3;
    param_1[3] = uVar2;
    param_1[2] = uVar1;
    uVar2 = _UNK_002a02b8;
    uVar1 = _DAT_002a02b0;
    param_1[4] = puVar4;
    param_1[6] = uVar2;
    param_1[5] = uVar1;
    return;
  }
                    /* try { // try from 00901c0c to 00901c17 has its CatchHandler @ 00901c1c */
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(1,1);
}


// ===== 00901c38  <tokio_util::sync::cancellation_token::CancellationToken_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio_util::sync::cancellation_token::CancellationToken as core::ops::drop::Drop>::drop */

void __rustcall
<tokio_util::sync::cancellation_token::CancellationToken_as_core::ops::drop::Drop>::drop
          (long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  code *pcVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  byte bVar9;
  long lVar10;
  long lVar11;
  char *pcVar12;
  long *plStack_80;
  byte bStack_74;
  long *plStack_70;
  byte bStack_68;
  long *plStack_48;
  
  lVar11 = *param_1;
  plVar1 = (long *)(lVar11 + 0x10);
  do {
    if (*(int *)plVar1 != 0) {
      ClearExclusiveLocal();
      <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                (lVar11 + 0x10);
      uVar7 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      goto joined_r0x008ff7e0;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar7 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
  puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
joined_r0x008ff7e0:
  PTR_GLOBAL_PANIC_COUNT_00b00bf0 = (undefined *)puVar4;
  plStack_70 = plVar1;
  if ((uVar7 & 0x7fffffffffffffff) == 0) {
    if (*(char *)(lVar11 + 0x14) != '\0') {
      bStack_68 = 0;
LAB_008ff6ec:
                    /* WARNING: Subroutine does not return */
      core::result::unwrap_failed
                ("called `Result::unwrap()` on an `Err` value",0x2b,&plStack_70,&PTR_FUN_00aefe28,
                 &PTR_s__root__cargo_registry_src_index__00aeff20);
    }
    lVar10 = *(long *)(lVar11 + 0x40) + -1;
    *(long *)(lVar11 + 0x40) = lVar10;
LAB_008ff360:
    if (((*puVar4 & 0x7fffffffffffffff) != 0) &&
       (uVar7 = std::panicking::panic_count::is_zero_slow_path(), (uVar7 & 1) == 0)) {
      *(undefined1 *)(lVar11 + 0x14) = 1;
    }
  }
  else {
    iVar6 = std::panicking::panic_count::is_zero_slow_path();
    if (*(char *)(lVar11 + 0x14) != '\0') {
      bStack_68 = (byte)iVar6 ^ 1;
      goto LAB_008ff6ec;
    }
    lVar10 = *(long *)(lVar11 + 0x40) + -1;
    *(long *)(lVar11 + 0x40) = lVar10;
    if (iVar6 != 0) goto LAB_008ff360;
  }
  do {
    pcVar12 = (char *)(lVar11 + 0x14);
    iVar6 = *(int *)plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar6 == 2) {
    <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(lVar11 + 0x10);
  }
  if (lVar10 != 0) {
    return;
  }
  do {
    if (*(int *)plVar1 != 0) {
      ClearExclusiveLocal();
      <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                (lVar11 + 0x10);
      uVar7 = *puVar4;
      goto joined_r0x008ff81c;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar7 = *puVar4;
joined_r0x008ff81c:
  if ((uVar7 & 0x7fffffffffffffff) == 0) {
    bStack_68 = 0;
    cVar2 = *pcVar12;
  }
  else {
    bStack_68 = std::panicking::panic_count::is_zero_slow_path();
    bStack_68 = bStack_68 ^ 1;
    cVar2 = *pcVar12;
  }
  if (cVar2 != '\0') {
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              ("called `Result::unwrap()` on an `Err` value",0x2b,&plStack_70,&PTR_FUN_00aefe28,
               &PTR_s__root__cargo_registry_src_index__00aefdc8);
  }
  plVar8 = *(long **)(lVar11 + 0x30);
  bVar9 = bStack_68;
  if (plVar8 != (long *)0x0) {
    do {
      lVar10 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (-1 < lVar10) {
      plStack_80 = *(long **)(lVar11 + 0x30);
      plVar8 = plStack_80 + 2;
LAB_008ff3dc:
      plStack_48 = plStack_80;
      if ((int)*plVar8 == 0) goto code_r0x008ff3e4;
      ClearExclusiveLocal();
      if ((((bStack_68 & 1) == 0) && ((*puVar4 & 0x7fffffffffffffff) != 0)) &&
         (uVar7 = std::panicking::panic_count::is_zero_slow_path(), (uVar7 & 1) == 0)) {
        *(undefined1 *)(lVar11 + 0x14) = 1;
      }
      do {
        iVar6 = *(int *)plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = 0;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 == 2) {
        <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(lVar11 + 0x10);
      }
      do {
        if ((int)plStack_80[2] != 0) {
          ClearExclusiveLocal();
          <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                    (plStack_80 + 2);
          break;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_80 + 2,0x10);
        if (bVar3) {
          *(undefined4 *)(plStack_80 + 2) = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((*puVar4 & 0x7fffffffffffffff) == 0) {
        bStack_74 = 0;
        cVar2 = *(char *)((long)plStack_80 + 0x14);
      }
      else {
        bStack_74 = std::panicking::panic_count::is_zero_slow_path();
        bStack_74 = bStack_74 ^ 1;
        cVar2 = *(char *)((long)plStack_80 + 0x14);
      }
      if (cVar2 != '\0') {
LAB_008ff960:
        plStack_80 = plStack_80 + 2;
        plStack_70 = plStack_80;
        bStack_68 = bStack_74;
                    /* WARNING: Subroutine does not return */
        core::result::unwrap_failed
                  ("called `Result::unwrap()` on an `Err` value",0x2b,&plStack_70,&PTR_FUN_00aefe28,
                   &PTR_s__root__cargo_registry_src_index__00aefdf8);
      }
      do {
        if (*(int *)plVar1 != 0) {
          ClearExclusiveLocal();
          <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                    (lVar11 + 0x10);
          break;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((*puVar4 & 0x7fffffffffffffff) == 0) {
        bStack_68 = 0;
        cVar2 = *pcVar12;
      }
      else {
        bStack_68 = std::panicking::panic_count::is_zero_slow_path();
        bStack_68 = bStack_68 ^ 1;
        cVar2 = *pcVar12;
      }
      bVar9 = bStack_68;
      if (cVar2 != '\0') {
LAB_008ff900:
                    /* WARNING: Subroutine does not return */
        core::result::unwrap_failed
                  ("called `Result::unwrap()` on an `Err` value",0x2b,&plStack_70,&PTR_FUN_00aefe28,
                   &PTR_s__root__cargo_registry_src_index__00aefe10);
      }
      goto LAB_008ff408;
    }
LAB_008ff998:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x8ff99c);
    (*pcVar5)();
  }
LAB_008ff6b8:
  FUN_008fe384(plVar1,bVar9 & 1);
  return;
code_r0x008ff3e4:
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
  if (bVar3) {
    *(int *)plVar8 = 1;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto code_r0x008ff3ec;
  goto LAB_008ff3dc;
code_r0x008ff3ec:
  if ((*puVar4 & 0x7fffffffffffffff) == 0) {
    bStack_74 = 0;
    cVar2 = *(char *)((long)plStack_80 + 0x14);
  }
  else {
    bStack_74 = std::panicking::panic_count::is_zero_slow_path();
    bStack_74 = bStack_74 ^ 1;
    cVar2 = *(char *)((long)plStack_80 + 0x14);
  }
  if (cVar2 != '\0') {
LAB_008ff760:
    bStack_68 = bStack_74;
    plStack_70 = plStack_80 + 2;
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              ("called `Result::unwrap()` on an `Err` value",0x2b,&plStack_70,&PTR_FUN_00aefe28,
               &PTR_s__root__cargo_registry_src_index__00aefde0);
  }
LAB_008ff408:
  if (*(long **)(lVar11 + 0x30) == plStack_80) {
LAB_008ff684:
    FUN_008fe384(plVar1,bVar9 & 1);
    do {
      lVar11 = *plStack_80;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_80,0x10);
      if (bVar3) {
        *plStack_80 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 + -1 != 0) {
      return;
    }
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<tokio_util::sync::cancellation_token::tree_node::TreeNode>>
    ::drop_slow(&plStack_48);
    return;
  }
  if ((((bStack_74 & 1) == 0) && ((*puVar4 & 0x7fffffffffffffff) != 0)) &&
     (uVar7 = std::panicking::panic_count::is_zero_slow_path(), (uVar7 & 1) == 0)) {
    *(undefined1 *)((long)plStack_80 + 0x14) = 1;
  }
  do {
    plVar8 = plStack_80 + 2;
    lVar10 = *plVar8;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar3) {
      *(int *)plVar8 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((int)lVar10 == 2) {
    <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(plStack_80 + 2);
  }
  do {
    lVar10 = *plStack_80;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plStack_80,0x10);
    if (bVar3) {
      *plStack_80 = lVar10 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar10 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<tokio_util::sync::cancellation_token::tree_node::TreeNode>>
    ::drop_slow(&plStack_48);
  }
  plVar8 = *(long **)(lVar11 + 0x30);
  if (plVar8 != (long *)0x0) {
LAB_008ff474:
    do {
      lVar10 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (-1 < lVar10) {
      plStack_80 = *(long **)(lVar11 + 0x30);
      plVar8 = plStack_80 + 2;
LAB_008ff494:
      plStack_48 = plStack_80;
      if ((int)*plVar8 == 0) goto code_r0x008ff49c;
      ClearExclusiveLocal();
      if ((((bVar9 & 1) == 0) && ((*puVar4 & 0x7fffffffffffffff) != 0)) &&
         (uVar7 = std::panicking::panic_count::is_zero_slow_path(), (uVar7 & 1) == 0)) {
        *(undefined1 *)(lVar11 + 0x14) = 1;
      }
      do {
        iVar6 = *(int *)plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = 0;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 == 2) {
        <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(lVar11 + 0x10);
      }
      do {
        if ((int)plStack_80[2] != 0) {
          ClearExclusiveLocal();
          <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                    (plStack_80 + 2);
          break;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_80 + 2,0x10);
        if (bVar3) {
          *(undefined4 *)(plStack_80 + 2) = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((*puVar4 & 0x7fffffffffffffff) == 0) {
        bStack_74 = 0;
        cVar2 = *(char *)((long)plStack_80 + 0x14);
      }
      else {
        bStack_74 = std::panicking::panic_count::is_zero_slow_path();
        bStack_74 = bStack_74 ^ 1;
        cVar2 = *(char *)((long)plStack_80 + 0x14);
      }
      if (cVar2 != '\0') goto LAB_008ff960;
      do {
        if (*(int *)plVar1 != 0) {
          ClearExclusiveLocal();
          <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                    (lVar11 + 0x10);
          break;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((*puVar4 & 0x7fffffffffffffff) == 0) {
        bStack_68 = 0;
        cVar2 = *pcVar12;
      }
      else {
        bStack_68 = std::panicking::panic_count::is_zero_slow_path();
        bStack_68 = bStack_68 ^ 1;
        cVar2 = *pcVar12;
      }
      bVar9 = bStack_68;
      if (cVar2 != '\0') goto LAB_008ff900;
      goto LAB_008ff4c0;
    }
    goto LAB_008ff998;
  }
  goto LAB_008ff6b8;
code_r0x008ff49c:
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
  if (bVar3) {
    *(int *)plVar8 = 1;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto code_r0x008ff4a4;
  goto LAB_008ff494;
code_r0x008ff4a4:
  if ((*puVar4 & 0x7fffffffffffffff) == 0) {
    bStack_74 = 0;
    cVar2 = *(char *)((long)plStack_80 + 0x14);
  }
  else {
    bStack_74 = std::panicking::panic_count::is_zero_slow_path();
    bStack_74 = bStack_74 ^ 1;
    cVar2 = *(char *)((long)plStack_80 + 0x14);
  }
  if (cVar2 != '\0') goto LAB_008ff760;
LAB_008ff4c0:
  if (*(long **)(lVar11 + 0x30) == plStack_80) goto LAB_008ff684;
  if ((((bStack_74 & 1) == 0) && ((*puVar4 & 0x7fffffffffffffff) != 0)) &&
     (uVar7 = std::panicking::panic_count::is_zero_slow_path(), (uVar7 & 1) == 0)) {
    *(undefined1 *)((long)plStack_80 + 0x14) = 1;
  }
  do {
    plVar8 = plStack_80 + 2;
    lVar10 = *plVar8;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar3) {
      *(int *)plVar8 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((int)lVar10 == 2) {
    <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(plStack_80 + 2);
  }
  do {
    lVar10 = *plStack_80;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plStack_80,0x10);
    if (bVar3) {
      *plStack_80 = lVar10 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar10 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<tokio_util::sync::cancellation_token::tree_node::TreeNode>>
    ::drop_slow(&plStack_48);
  }
  plVar8 = *(long **)(lVar11 + 0x30);
  if (plVar8 == (long *)0x0) goto LAB_008ff6b8;
  goto LAB_008ff474;
}


// ===== 00901c3c  <tokio_util::codec::lines_codec::LinesCodecError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio_util::codec::lines_codec::LinesCodecError as core::fmt::Display>::fmt */

void __rustcall
<tokio_util::codec::lines_codec::LinesCodecError_as_core::fmt::Display>::fmt
          (long *param_1,undefined8 *param_2)

{
  long *local_28;
  long **local_20;
  code *pcStack_18;
  
  if (*param_1 != 0) {
    local_20 = &local_28;
    pcStack_18 = FUN_009008cc;
    local_28 = param_1;
    core::fmt::write(*param_2,param_2[1],&DAT_002ab692,&local_20);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00901c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))
            (*param_2,"max line length exceededmax chunk length exceeded",0x18);
  return;
}


// ===== 00901c9c  <tokio_util::codec::any_delimiter_codec::AnyDelimiterCodecError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio_util::codec::any_delimiter_codec::AnyDelimiterCodecError as core::fmt::Display>::fmt */

void __rustcall
<tokio_util::codec::any_delimiter_codec::AnyDelimiterCodecError_as_core::fmt::Display>::fmt
          (long *param_1,undefined8 *param_2)

{
  long *local_28;
  long **local_20;
  code *pcStack_18;
  
  if (*param_1 != 0) {
    local_20 = &local_28;
    pcStack_18 = FUN_009008cc;
    local_28 = param_1;
    core::fmt::write(*param_2,param_2[1],&DAT_002ab692,&local_20);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00901cf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,"max chunk length exceeded",0x19);
  return;
}


// ===== 00901cfc  <tokio_util::codec::length_delimited::LengthDelimitedCodecError_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio_util::codec::length_delimited::LengthDelimitedCodecError as core::fmt::Debug>::fmt */

void __rustcall
<tokio_util::codec::length_delimited::LengthDelimitedCodecError_as_core::fmt::Debug>::fmt
          (undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct
            (auStack_20,param_2,"LengthDelimitedCodecError",0x19);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish(auStack_20);
  return;
}


// ===== 00901d34  <tokio_util::sync::cancellation_token::WaitForCancellationFuture_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio_util::sync::cancellation_token::WaitForCancellationFuture as core::fmt::Debug>::fmt */

void __rustcall
<tokio_util::sync::cancellation_token::WaitForCancellationFuture_as_core::fmt::Debug>::fmt
          (undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct
            (auStack_20,param_2,"WaitForCancellationFuture",0x19);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish(auStack_20);
  return;
}


// ===== 00901d6c  <tokio_util::codec::length_delimited::LengthDelimitedCodecError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio_util::codec::length_delimited::LengthDelimitedCodecError as core::fmt::Display>::fmt */

void __rustcall
<tokio_util::codec::length_delimited::LengthDelimitedCodecError_as_core::fmt::Display>::fmt
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"frame size too big",0x12);
  return;
}


// ===== 00901d80  <tokio_util::sync::cancellation_token::WaitForCancellationFuture_as_core::future::future::Future>::poll =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio_util::sync::cancellation_token::WaitForCancellationFuture as
   core::future::future::Future>::poll */

uint __rustcall
<tokio_util::sync::cancellation_token::WaitForCancellationFuture_as_core::future::future::Future>::
poll(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar4 = param_1 + 1;
  uVar3 = FUN_008ff1ac(*param_1);
  if ((uVar3 & 1) == 0) {
    do {
      uVar2 = <tokio::sync::notify::Notified_as_core::future::future::Future>::poll(puVar4,param_2);
      if ((uVar2 & 1) != 0) {
        return uVar2;
      }
      <tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notified
                (&local_70,*(long *)*param_1 + 0x50);
                    /* try { // try from 00901e0c to 00901e13 has its CatchHandler @ 00901e40 */
      <tokio::sync::notify::Notified_as_core::ops::drop::Drop>::drop(puVar4);
      if (param_1[5] != 0) {
                    /* try { // try from 00901e24 to 00901e27 has its CatchHandler @ 00901e2c */
        (**(code **)(param_1[5] + 0x18))(param_1[6]);
      }
      param_1[2] = uStack_68;
      *puVar4 = local_70;
      param_1[4] = uStack_58;
      param_1[3] = uStack_60;
      param_1[6] = uStack_48;
      param_1[5] = local_50;
      param_1[8] = uStack_38;
      param_1[7] = uStack_40;
      iVar1 = FUN_008ff1ac(*param_1);
    } while (iVar1 == 0);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


// ===== 00901e74  <tokio_util::sync::cancellation_token::WaitForCancellationFutureOwned_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio_util::sync::cancellation_token::WaitForCancellationFutureOwned as core::fmt::Debug>::fmt
    */

void __rustcall
<tokio_util::sync::cancellation_token::WaitForCancellationFutureOwned_as_core::fmt::Debug>::fmt
          (undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct
            (auStack_20,param_2,"WaitForCancellationFutureOwned",0x1e);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish(auStack_20);
  return;
}


// ===== 00901eac  <tokio_util::sync::cancellation_token::WaitForCancellationFutureOwned_as_core::future::future::Future>::poll =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio_util::sync::cancellation_token::WaitForCancellationFutureOwned as
   core::future::future::Future>::poll */

uint __rustcall
<tokio_util::sync::cancellation_token::WaitForCancellationFutureOwned_as_core::future::future::Future>
::poll(long *param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long local_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long local_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  uVar3 = FUN_008ff1ac();
  if ((uVar3 & 1) == 0) {
    do {
      uVar2 = <tokio::sync::notify::Notified_as_core::future::future::Future>::poll
                        (param_1 + 1,param_2);
      if ((uVar2 & 1) != 0) {
        return uVar2;
      }
      <tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notified(&local_70,*param_1 + 0x50);
                    /* try { // try from 00901f34 to 00901f3b has its CatchHandler @ 00901f5c */
      <tokio::sync::notify::Notified_as_core::ops::drop::Drop>::drop(param_1 + 1);
      if (param_1[5] != 0) {
                    /* try { // try from 00901f4c to 00901f4f has its CatchHandler @ 00901f54 */
        (**(code **)(param_1[5] + 0x18))(param_1[6]);
      }
      param_1[2] = lStack_68;
      param_1[1] = local_70;
      param_1[4] = lStack_58;
      param_1[3] = lStack_60;
      param_1[6] = lStack_48;
      param_1[5] = local_50;
      param_1[8] = lStack_38;
      param_1[7] = lStack_40;
      iVar1 = FUN_008ff1ac(param_1);
    } while (iVar1 == 0);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


// ===== 00901f98  FUN_00901f98 =====

void FUN_00901f98(long *param_1,undefined8 param_2)

{
  long local_18;
  
  local_18 = *param_1 + 0x10;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field1_finish
            (param_2,"Semaphore",9,"ll_sem",6,&local_18,&DAT_00af00d8);
  return;
}


// ===== 00901fec  FUN_00901fec =====

void FUN_00901fec(undefined8 param_1,long param_2)

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


// ===== 00902004  <tokio_util::codec::lines_codec::LinesCodec_as_tokio_util::codec::decoder::Decoder>::decode_eof =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio_util::codec::lines_codec::LinesCodec as tokio_util::codec::decoder::Decoder>::decode_eof
    */

void __rustcall
<tokio_util::codec::lines_codec::LinesCodec_as_tokio_util::codec::decoder::Decoder>::decode_eof
          (size_t *param_1,undefined8 *param_2,undefined8 *param_3)

{
  size_t sVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 uVar4;
  size_t local_78;
  undefined1 *puStack_70;
  size_t local_68;
  long local_58;
  void *local_50;
  size_t local_48;
  
  decode(&local_78);
  if (local_78 == 0xfffffffffffffffe) {
    *param_1 = 0xfffffffffffffffe;
    param_1[1] = (size_t)puStack_70;
    return;
  }
  puVar2 = puStack_70;
  if (local_78 == 0xffffffffffffffff) {
    lVar3 = param_3[1];
    *param_2 = 0;
    if ((lVar3 == 0) || ((lVar3 == 1 && (*(char *)*param_3 == '\r')))) {
      local_78 = 0xffffffffffffffff;
    }
    else {
      <bytes::bytes_mut::bytes::bytes_mut::BytesMut>::split_to(&local_78,param_3);
      if (puStack_70 == (undefined1 *)0x0) {
        puVar2 = (undefined1 *)0x0;
      }
      else {
        puVar2 = puStack_70 + -1;
        if ((puStack_70 + -1)[local_78] != '\r') {
          puVar2 = puStack_70;
        }
      }
                    /* try { // try from 009020d8 to 009020ff has its CatchHandler @ 0090218c */
      core::str::converts::from_utf8(&local_58,local_78,puVar2);
      if (local_58 == 1) {
        sVar1 = <alloc::io::error::core::io::error::Error>::new<&str>
                          (0x15,"Unable to decode input as UTF8",0x1e);
        *param_1 = 0xfffffffffffffffe;
        param_1[1] = sVar1;
        <bytes::bytes_mut::BytesMut_as_core::ops::drop::Drop>::drop(&local_78);
        return;
      }
      if ((long)local_48 < 0) {
        uVar4 = 0;
LAB_00902134:
                    /* try { // try from 00902134 to 0090213f has its CatchHandler @ 0090218c */
                    /* WARNING: Subroutine does not return */
        alloc::raw_vec::handle_error(uVar4,local_48);
      }
      if (local_48 == 0) {
        puVar2 = &DAT_00000001;
      }
      else {
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        uVar4 = 1;
        puVar2 = (undefined1 *)FUN_004b25a4(local_48,1);
        if (puVar2 == (undefined1 *)0x0) goto LAB_00902134;
        memcpy(puVar2,local_50,local_48);
      }
      <bytes::bytes_mut::BytesMut_as_core::ops::drop::Drop>::drop(&local_78);
      local_78 = local_48;
      local_68 = local_48;
    }
  }
  *param_1 = local_78;
  param_1[1] = (size_t)puVar2;
  param_1[2] = local_68;
  return;
}


// ===== 009021a4  <tokio_util::codec::lines_codec::LinesCodec_as_tokio_util::codec::decoder::Decoder>::decode =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio_util::codec::lines_codec::LinesCodec as tokio_util::codec::decoder::Decoder>::decode */

void __rustcall
<tokio_util::codec::lines_codec::LinesCodec_as_tokio_util::codec::decoder::Decoder>::decode
          (size_t *param_1,ulong *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 *__dest;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  byte bVar7;
  size_t sVar8;
  long lVar9;
  char *pcVar10;
  undefined8 uVar11;
  ulong local_78;
  void *local_70;
  size_t local_68;
  ulong *local_60;
  code *local_58;
  ulong *local_50;
  code *pcStack_48;
  ulong local_28;
  
  uVar3 = *param_2;
  uVar2 = param_2[1];
  uVar6 = param_3[1];
  uVar1 = uVar2 + 1;
  if (uVar2 == 0xffffffffffffffff) {
    uVar1 = 0xffffffffffffffff;
  }
  uVar4 = uVar6;
  if (uVar1 <= uVar6) {
    uVar4 = uVar1;
  }
  if (uVar4 < uVar3) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail();
  }
  bVar7 = (byte)param_2[2];
  do {
    if (uVar3 != uVar4) {
      lVar9 = 0;
      pcVar10 = (char *)(*param_3 + uVar3);
      do {
        if (*pcVar10 == '\n') {
          if ((bVar7 & 1) == 0) {
            *param_2 = 0;
            <bytes::bytes_mut::bytes::bytes_mut::BytesMut>::split_to
                      (&local_60,param_3,(uVar3 - lVar9) + 1);
            lVar9 = (long)local_58 + -1;
            if (local_58 == (code *)0x0) {
                    /* try { // try from 009023e8 to 009023fb has its CatchHandler @ 00902400 */
                    /* WARNING: Subroutine does not return */
              core::slice::index::slice_index_fail
                        (0,lVar9,0,&PTR_s__root__cargo_registry_src_index__00af00f8);
            }
            lVar5 = lVar9;
            if ((lVar9 != 0) &&
               (lVar5 = (long)local_58 + -2, *(char *)((long)local_60 + (long)local_58 + -2) != '\r'
               )) {
              lVar5 = lVar9;
            }
                    /* try { // try from 009022f8 to 00902343 has its CatchHandler @ 00902400 */
            core::str::converts::from_utf8(&local_78,local_60,lVar5);
            if (local_78 == 1) {
              sVar8 = <alloc::io::error::core::io::error::Error>::new<&str>
                                (0x15,"Unable to decode input as UTF8",0x1e);
              *param_1 = 0xfffffffffffffffe;
              param_1[1] = sVar8;
            }
            else {
              if ((long)local_68 < 0) {
                uVar11 = 0;
LAB_00902338:
                    /* WARNING: Subroutine does not return */
                alloc::raw_vec::handle_error(uVar11,local_68);
              }
              if (local_68 == 0) {
                __dest = &DAT_00000001;
              }
              else {
                __rustc::__rust_no_alloc_shim_is_unstable_v2();
                uVar11 = 1;
                __dest = (undefined1 *)FUN_004b25a4(local_68,1);
                if (__dest == (undefined1 *)0x0) goto LAB_00902338;
                memcpy(__dest,local_70,local_68);
              }
              *param_1 = local_68;
              param_1[1] = (size_t)__dest;
              param_1[2] = local_68;
            }
            <bytes::bytes_mut::BytesMut_as_core::ops::drop::Drop>::drop(&local_60);
            return;
          }
          local_28 = (uVar3 - lVar9) + 1;
          if (uVar6 < local_28) {
            local_60 = &local_28;
            local_58 = FUN_00901fec;
            local_50 = &local_78;
            pcStack_48 = FUN_00901fec;
            local_78 = uVar6;
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_fmt
                      (&DAT_002afeea,&local_60,&PTR_s__root__cargo_registry_src_index__00af0068);
          }
          <bytes::bytes_mut::bytes::bytes_mut::BytesMut>::advance_unchecked(param_3);
          uVar6 = param_3[1];
          bVar7 = 0;
          *(undefined1 *)(param_2 + 2) = 0;
          *param_2 = 0;
          goto LAB_009021f0;
        }
        lVar9 = lVar9 + -1;
        pcVar10 = pcVar10 + 1;
      } while (uVar3 - uVar4 != lVar9);
    }
    if ((bVar7 & 1) == 0) {
      if (uVar2 < uVar6) {
        param_1[1] = 0;
        *(undefined1 *)(param_2 + 2) = 1;
        sVar8 = 0xfffffffffffffffe;
        goto LAB_009022a0;
      }
      *param_2 = uVar4;
LAB_0090229c:
      sVar8 = 0xffffffffffffffff;
LAB_009022a0:
      *param_1 = sVar8;
      return;
    }
    <bytes::bytes_mut::bytes::bytes_mut::BytesMut>::advance_unchecked(param_3);
    uVar6 = param_3[1];
    *param_2 = 0;
    if (uVar6 == 0) goto LAB_0090229c;
    bVar7 = 1;
LAB_009021f0:
    uVar3 = 0;
    uVar4 = uVar6;
    if (uVar1 <= uVar6) {
      uVar4 = uVar1;
    }
  } while( true );
}


// ===== 00902418  <tokio_util::codec::length_delimited::LengthDelimitedCodec_as_tokio_util::codec::decoder::Decoder>::decode =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio_util::codec::length_delimited::LengthDelimitedCodec as
   tokio_util::codec::decoder::Decoder>::decode */

void __rustcall
<tokio_util::codec::length_delimited::LengthDelimitedCodec_as_tokio_util::codec::decoder::Decoder>::
decode(undefined8 *param_1,int *param_2,long *param_3)

{
  ulong ***pppuVar1;
  ulong uVar2;
  ulong ***pppuVar3;
  ulong uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong ***pppuVar8;
  ulong ***pppuVar9;
  ulong ***pppuVar10;
  ulong uVar11;
  ulong ***pppuVar12;
  void *__dest;
  undefined8 ****__dest_00;
  ulong ***__n;
  ulong ***pppuVar13;
  long lVar14;
  undefined8 ***local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 ***local_88;
  ulong ***local_80;
  undefined8 ***pppuStack_78;
  ulong ***local_70;
  code *pcStack_68;
  
  if (*(long *)(param_2 + 0xe) == 1) {
    uVar11 = *(ulong *)(param_2 + 0x10);
    if ((ulong)param_3[1] < uVar11) goto LAB_00902624;
LAB_00902460:
    <bytes::bytes_mut::bytes::bytes_mut::BytesMut>::split_to(&local_a8,param_3,uVar11);
    if (local_a8 != (ulong ***)0x0) {
      param_2[0xe] = 0;
      param_2[0xf] = 0;
      uVar11 = *(long *)(param_2 + 6) + *(long *)(param_2 + 8);
      pppuStack_78 = (undefined8 ***)uStack_a0;
      local_80 = local_a8;
      pcStack_68 = (code *)uStack_90;
      local_70 = (ulong ***)local_98;
      uVar2 = *(ulong *)(param_2 + 2);
      if (*(ulong *)(param_2 + 2) <= uVar11) {
        uVar2 = uVar11;
      }
      if (*param_2 == 0) {
        uVar2 = uVar11;
      }
      uVar4 = param_3[1];
      uVar11 = 0;
      if (uVar4 <= uVar2) {
        uVar11 = uVar2 - uVar4;
      }
      if (param_3[2] - uVar4 < uVar11) {
                    /* try { // try from 009024c0 to 009024cb has its CatchHandler @ 00902798 */
        <bytes::bytes_mut::bytes::bytes_mut::BytesMut>::reserve_inner(param_3,uVar11,1);
      }
      *param_1 = 0;
      param_1[2] = uStack_a0;
      param_1[1] = local_a8;
      param_1[4] = uStack_90;
      param_1[3] = local_98;
      return;
    }
LAB_00902624:
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  pppuVar12 = *(ulong ****)(param_2 + 6);
  pppuVar8 = *(ulong ****)(param_2 + 8);
  pppuVar9 = *(ulong ****)(param_2 + 2);
  iVar5 = *param_2;
  pppuVar13 = (ulong ***)param_3[1];
  pppuVar1 = (ulong ***)((long)pppuVar12 + (long)pppuVar8);
  pppuVar3 = pppuVar9;
  if (pppuVar9 <= pppuVar1) {
    pppuVar3 = pppuVar1;
  }
  if (iVar5 == 0) {
    pppuVar3 = pppuVar1;
  }
  if (pppuVar13 < pppuVar3) {
    uVar6 = 0;
    uVar7 = 0;
    goto LAB_009026d4;
  }
  if (pppuVar13 < pppuVar8) goto LAB_00902780;
  if ((*(byte *)(param_2 + 0xc) & 1) == 0) {
    local_a8 = (ulong ***)0x0;
    if (pppuVar12 < (ulong ***)0x9) {
      pppuStack_78 = (ulong ***)0x0;
      if (pppuVar8 <= pppuVar13) {
        pppuStack_78 = (ulong ***)((long)pppuVar13 - (long)pppuVar8);
      }
      if (pppuStack_78 < pppuVar12) goto LAB_0090278c;
      if (pppuVar12 == (ulong ***)0x0) goto LAB_009026b8;
      lVar14 = *param_3;
      __dest_00 = &local_a8;
      do {
        pppuVar3 = pppuVar13;
        if (pppuVar8 <= pppuVar13) {
          pppuVar3 = pppuVar8;
        }
        pppuVar10 = (ulong ***)0x0;
        if (pppuVar8 <= pppuVar13) {
          pppuVar10 = (ulong ***)((long)pppuVar13 - (long)pppuVar8);
        }
        __n = pppuVar12;
        if ((ulong ***)((long)pppuVar13 - (long)pppuVar3) <= pppuVar12) {
          __n = (ulong ***)((long)pppuVar13 - (long)pppuVar3);
        }
        memcpy(__dest_00,(void *)(lVar14 + (long)pppuVar3),(size_t)__n);
        if (pppuVar10 < __n) goto LAB_00902768;
        pppuVar12 = (ulong ***)((long)pppuVar12 - (long)__n);
        __dest_00 = (undefined8 ****)((long)__dest_00 + (long)__n);
        pppuVar8 = (ulong ***)((long)__n + (long)pppuVar8);
      } while (pppuVar12 != (ulong ***)0x0);
      pppuVar8 = local_a8;
      if (*(ulong ****)(param_2 + 4) < local_a8) goto LAB_009026c8;
LAB_009025c0:
      uVar11 = *(ulong *)(param_2 + 10);
      local_88 = pppuVar9;
      if ((long)uVar11 < 0) {
        if (pppuVar8 < (ulong ***)-uVar11) goto LAB_00902704;
        if (iVar5 == 0) {
          local_88 = pppuVar1;
        }
      }
      else {
        if (CARRY8(uVar11,(ulong)pppuVar8)) {
LAB_00902704:
          uVar6 = <alloc::io::error::core::io::error::Error>::new<&str>
                            (0x14,"provided length would overflow after adjustment",0x2f);
          goto LAB_009026d0;
        }
        if (iVar5 == 0) {
          local_88 = pppuVar1;
        }
      }
      if (pppuVar13 < local_88) {
        local_80 = (ulong ***)&local_88;
        pppuStack_78 = (undefined8 ***)FUN_00901fec;
        local_70 = (ulong ***)&local_a8;
        pcStack_68 = FUN_00901fec;
        local_a8 = pppuVar13;
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_fmt
                  (&DAT_002afeea,&local_80,&PTR_s__root__cargo_registry_src_index__00af0068);
      }
      uVar11 = uVar11 + (long)pppuVar8;
      <bytes::bytes_mut::bytes::bytes_mut::BytesMut>::advance_unchecked(param_3);
      uVar4 = param_3[1];
      uVar2 = 0;
      if (uVar4 <= uVar11) {
        uVar2 = uVar11 - uVar4;
      }
      if (param_3[2] - uVar4 < uVar2) {
        <bytes::bytes_mut::bytes::bytes_mut::BytesMut>::reserve_inner(param_3,uVar2,1);
      }
      param_2[0xe] = 1;
      param_2[0xf] = 0;
      *(ulong *)(param_2 + 0x10) = uVar11;
      if ((ulong)param_3[1] < uVar11) goto LAB_00902624;
      goto LAB_00902460;
    }
  }
  else if (pppuVar12 < (ulong ***)0x9) {
    local_a8 = (ulong ***)0x0;
    pppuStack_78 = (ulong ***)0x0;
    if (pppuVar8 <= pppuVar13) {
      pppuStack_78 = (ulong ***)((long)pppuVar13 - (long)pppuVar8);
    }
    if (pppuStack_78 < pppuVar12) {
LAB_0090278c:
      local_a8 = (undefined8 ***)0x0;
      local_80 = pppuVar12;
                    /* WARNING: Subroutine does not return */
      bytes::panic_advance(&local_80);
    }
    if (pppuVar12 == (ulong ***)0x0) {
LAB_009026b8:
      local_a8 = (ulong ***)0x0;
      pppuVar8 = (ulong ***)0x0;
      goto LAB_009025c0;
    }
    lVar14 = *param_3;
    __dest = (void *)((long)&uStack_a0 - (long)pppuVar12);
    do {
      pppuVar3 = pppuVar13;
      if (pppuVar8 <= pppuVar13) {
        pppuVar3 = pppuVar8;
      }
      pppuVar10 = (ulong ***)0x0;
      if (pppuVar8 <= pppuVar13) {
        pppuVar10 = (ulong ***)((long)pppuVar13 - (long)pppuVar8);
      }
      __n = pppuVar12;
      if ((ulong ***)((long)pppuVar13 - (long)pppuVar3) <= pppuVar12) {
        __n = (ulong ***)((long)pppuVar13 - (long)pppuVar3);
      }
      memcpy(__dest,(void *)(lVar14 + (long)pppuVar3),(size_t)__n);
      if (pppuVar10 < __n) {
LAB_00902768:
        local_80 = __n;
        pppuStack_78 = pppuVar10;
                    /* WARNING: Subroutine does not return */
        bytes::panic_advance(&local_80);
      }
      pppuVar12 = (ulong ***)((long)pppuVar12 - (long)__n);
      __dest = (void *)((long)__dest + (long)__n);
      pppuVar8 = (ulong ***)((long)__n + (long)pppuVar8);
    } while (pppuVar12 != (ulong ***)0x0);
    uVar11 = ((ulong)local_a8 & 0xff00ff00ff00ff00) >> 8 | ((ulong)local_a8 & 0xff00ff00ff00ff) << 8
    ;
    uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
    pppuVar8 = (ulong ***)(uVar11 >> 0x20 | uVar11 << 0x20);
    if (pppuVar8 <= *(ulong ****)(param_2 + 4)) goto LAB_009025c0;
LAB_009026c8:
    uVar6 = <alloc::io::error::core::io::error::Error>::
            new<tokio_util::codec::length_delimited::LengthDelimitedCodecError>(0x15);
LAB_009026d0:
    uVar7 = 1;
LAB_009026d4:
    *param_1 = uVar7;
    param_1[1] = uVar6;
    return;
  }
  bytes::panic_does_not_fit(8,pppuVar12);
LAB_00902780:
  local_80 = pppuVar8;
  pppuStack_78 = pppuVar13;
                    /* WARNING: Subroutine does not return */
  bytes::panic_advance(&local_80);
}


// ===== 009027b0  <tokio_util::codec::any_delimiter_codec::AnyDelimiterCodec_as_tokio_util::codec::decoder::Decoder>::decode_eof =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio_util::codec::any_delimiter_codec::AnyDelimiterCodec as
   tokio_util::codec::decoder::Decoder>::decode_eof */

void __rustcall
<tokio_util::codec::any_delimiter_codec::AnyDelimiterCodec_as_tokio_util::codec::decoder::Decoder>::
decode_eof(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong *local_b8;
  code *pcStack_b0;
  ulong *local_a8;
  code *pcStack_a0;
  undefined *local_98;
  long local_90;
  long local_88;
  long lStack_80;
  undefined *local_78;
  long local_70;
  long lStack_68;
  long local_60;
  undefined *local_58;
  long lStack_50;
  ulong local_48;
  undefined *local_40;
  ulong local_38;
  ulong local_18;
  
  decode(&local_b8);
  if (local_b8 == (ulong *)0x1) {
    uVar2 = 1;
    lVar1 = 8;
  }
  else {
    if (pcStack_b0 == (code *)0x0) {
      if (*(long *)(param_3 + 8) == 0) {
        pcStack_b0 = (code *)0x0;
      }
      else {
        <bytes::bytes_mut::bytes::bytes_mut::BytesMut>::split_to(&local_90,param_3);
        *(undefined8 *)(param_2 + 0x30) = 0;
        pcStack_a0 = (code *)local_88;
        local_98 = local_78;
        pcStack_b0 = (code *)PTR_SHARED_VTABLE_00b00e28;
        local_a8 = (ulong *)local_90;
        if (((ulong)local_78 & 1) != 0) {
          uVar3 = (ulong)local_78 >> 5;
          local_70 = lStack_80 + uVar3;
          lStack_68 = local_90 - uVar3;
          local_60 = local_88 + uVar3;
          <bytes::bytes::Bytes_as_core::convert::From<alloc::vec::Vec<u8>>>::from
                    (&local_58,&local_70);
          pcStack_a0 = (code *)(local_48 - uVar3);
          if (local_48 < uVar3) {
            local_18 = local_48;
            local_b8 = &local_38;
            pcStack_b0 = FUN_00901fec;
            local_a8 = &local_18;
            pcStack_a0 = FUN_00901fec;
                    /* try { // try from 009028d0 to 009028e7 has its CatchHandler @ 009028ec */
            local_38 = uVar3;
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_fmt
                      (&DAT_002afeea,&local_b8,&PTR_s__root__cargo_registry_src_index__00af00c0);
          }
          local_a8 = (ulong *)(lStack_50 + uVar3);
          local_98 = local_40;
          pcStack_b0 = (code *)local_58;
        }
      }
    }
    uVar2 = 0;
    param_1[1] = pcStack_b0;
    param_1[2] = local_a8;
    lVar1 = 0x20;
    param_1[3] = pcStack_a0;
    pcStack_b0 = (code *)local_98;
  }
  *(code **)((long)param_1 + lVar1) = pcStack_b0;
  *param_1 = uVar2;
  return;
}


// ===== 00902914  <tokio_util::codec::any_delimiter_codec::AnyDelimiterCodec_as_tokio_util::codec::decoder::Decoder>::decode =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio_util::codec::any_delimiter_codec::AnyDelimiterCodec as
   tokio_util::codec::decoder::Decoder>::decode */

void __rustcall
<tokio_util::codec::any_delimiter_codec::AnyDelimiterCodec_as_tokio_util::codec::decoder::Decoder>::
decode(undefined8 *param_1,long param_2,long *param_3)

{
  char *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  char *pcVar9;
  char *pcVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined1 *puVar14;
  byte bVar15;
  undefined *local_e8;
  long local_e0;
  long local_d8;
  ulong local_d0;
  undefined *local_c8;
  long lStack_c0;
  undefined *local_b8;
  undefined *local_b0;
  long lStack_a8;
  undefined *local_a0;
  ulong local_98;
  undefined *local_90;
  undefined *local_88;
  undefined **local_80;
  code *local_78;
  undefined **local_70;
  code *local_68;
  char *pcVar10;
  
  puVar6 = *(undefined **)(param_2 + 0x30);
  puVar2 = *(undefined **)(param_2 + 0x38);
  puVar5 = (undefined *)param_3[1];
  puVar13 = puVar2 + 1;
  if (puVar2 == (undefined *)0xffffffffffffffff) {
    puVar13 = (undefined *)0xffffffffffffffff;
  }
  puVar8 = puVar5;
  if (puVar13 <= puVar5) {
    puVar8 = puVar13;
  }
  if (puVar8 < puVar6) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (puVar6,puVar8,puVar5,&PTR_s__root__cargo_registry_src_index__00af0128);
  }
  pcVar1 = *(char **)(param_2 + 8);
  uVar3 = *(ulong *)(param_2 + 0x10);
  bVar15 = *(byte *)(param_2 + 0x40);
  if (uVar3 < 0x10) {
    if (uVar3 != 0) {
LAB_009029c4:
      if (puVar6 != puVar8) {
        lVar7 = 0;
        pcVar10 = puVar6 + *param_3;
        do {
          pcVar9 = pcVar10 + 1;
          pcVar11 = pcVar1;
          uVar12 = uVar3;
          do {
            if (*pcVar11 == *pcVar10) {
              if ((bVar15 & 1) == 0) goto LAB_00902b74;
              local_c8 = puVar6 + lVar7 + 1;
              if (puVar5 < local_c8) goto LAB_00902c2c;
              <bytes::bytes_mut::bytes::bytes_mut::BytesMut>::advance_unchecked(param_3);
              puVar5 = (undefined *)param_3[1];
              bVar15 = 0;
              *(undefined1 *)(param_2 + 0x40) = 0;
              *(undefined8 *)(param_2 + 0x30) = 0;
              goto LAB_009029b8;
            }
            uVar12 = uVar12 - 1;
            pcVar11 = pcVar11 + 1;
          } while (uVar12 != 0);
          lVar7 = lVar7 + 1;
          pcVar10 = pcVar9;
        } while (pcVar9 != puVar8 + *param_3);
      }
      if ((bVar15 & 1) != 0) goto code_r0x009029d0;
      goto joined_r0x00902b5c;
    }
    if ((bVar15 & 1) == 0) {
joined_r0x00902b5c:
      if (puVar2 < puVar5) {
        *param_1 = 1;
        param_1[1] = 0;
        *(undefined1 *)(param_2 + 0x40) = 1;
        return;
      }
      *(undefined **)(param_2 + 0x30) = puVar8;
    }
    else {
      <bytes::bytes_mut::bytes::bytes_mut::BytesMut>::advance_unchecked(param_3,puVar8);
      puVar6 = (undefined *)param_3[1];
      *(undefined8 *)(param_2 + 0x30) = 0;
      while (puVar6 != (undefined *)0x0) {
        if (puVar13 <= puVar6) {
          puVar6 = puVar13;
        }
        <bytes::bytes_mut::bytes::bytes_mut::BytesMut>::advance_unchecked(param_3,puVar6);
        puVar6 = (undefined *)param_3[1];
        *(undefined8 *)(param_2 + 0x30) = 0;
      }
    }
  }
  else {
LAB_00902a84:
    if (puVar6 != puVar8) {
      lVar7 = 0;
      puVar14 = puVar6 + *param_3;
      do {
        lVar4 = core::slice::memchr::memchr_aligned(*puVar14,pcVar1,uVar3);
        if (lVar4 == 1) {
          if ((bVar15 & 1) == 0) {
            lVar7 = -lVar7;
LAB_00902b74:
            *(undefined8 *)(param_2 + 0x30) = 0;
            <bytes::bytes_mut::bytes::bytes_mut::BytesMut>::split_to
                      (&local_e8,param_3,puVar6 + lVar7 + 1);
            local_e0 = local_e0 - (ulong)(local_e0 != 0);
            puVar13 = PTR_SHARED_VTABLE_00b00e28;
            if ((local_d0 & 1) != 0) {
              puVar13 = (undefined *)(local_d0 >> 5);
              local_b8 = puVar13 + local_e0;
              local_c8 = puVar13 + local_d8;
              lStack_c0 = (long)local_e8 - (long)puVar13;
              <bytes::bytes::Bytes_as_core::convert::From<alloc::vec::Vec<u8>>>::from
                        (&local_b0,&local_c8);
              local_e0 = (long)local_a0 - (long)puVar13;
              if (local_a0 < puVar13) {
                local_80 = &local_90;
                local_88 = local_a0;
                local_70 = &local_88;
                local_78 = FUN_00901fec;
                local_68 = FUN_00901fec;
                    /* try { // try from 00902c90 to 00902ca7 has its CatchHandler @ 00902cac */
                local_90 = puVar13;
                    /* WARNING: Subroutine does not return */
                core::panicking::panic_fmt
                          (&DAT_002afeea,&local_80,&PTR_s__root__cargo_registry_src_index__00af00c0)
                ;
              }
              local_e8 = puVar13 + lStack_a8;
              local_d0 = local_98;
              puVar13 = local_b0;
            }
            param_1[2] = local_e8;
            param_1[3] = local_e0;
            param_1[4] = local_d0;
            *param_1 = 0;
            param_1[1] = puVar13;
            return;
          }
          puVar5 = (undefined *)param_3[1];
          local_c8 = puVar6 + (1 - lVar7);
          if (puVar5 < local_c8) goto LAB_00902c2c;
          <bytes::bytes_mut::bytes::bytes_mut::BytesMut>::advance_unchecked(param_3);
          puVar8 = (undefined *)param_3[1];
          bVar15 = 0;
          *(undefined1 *)(param_2 + 0x40) = 0;
          *(undefined8 *)(param_2 + 0x30) = 0;
          goto LAB_00902a78;
        }
        lVar7 = lVar7 + -1;
        puVar14 = puVar14 + 1;
      } while ((long)puVar6 - (long)puVar8 != lVar7);
    }
    if ((bVar15 & 1) == 0) {
      puVar5 = (undefined *)param_3[1];
      goto joined_r0x00902b5c;
    }
    puVar5 = (undefined *)param_3[1];
    local_c8 = puVar8;
    if (puVar5 < puVar8) goto LAB_00902c2c;
    <bytes::bytes_mut::bytes::bytes_mut::BytesMut>::advance_unchecked(param_3,puVar8);
    puVar8 = (undefined *)param_3[1];
    *(undefined8 *)(param_2 + 0x30) = 0;
    if (puVar8 != (undefined *)0x0) {
      bVar15 = 1;
LAB_00902a78:
      puVar6 = (undefined *)0x0;
      if (puVar13 <= puVar8) {
        puVar8 = puVar13;
      }
      goto LAB_00902a84;
    }
  }
LAB_00902b64:
  *param_1 = 0;
  param_1[1] = 0;
  return;
code_r0x009029d0:
  local_c8 = puVar8;
  if (puVar5 < puVar8) {
LAB_00902c2c:
    local_80 = &local_c8;
    local_78 = FUN_00901fec;
    local_70 = &local_b0;
    local_68 = FUN_00901fec;
    local_b0 = puVar5;
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              (&DAT_002afeea,&local_80,&PTR_s__root__cargo_registry_src_index__00af0068);
  }
  <bytes::bytes_mut::bytes::bytes_mut::BytesMut>::advance_unchecked(param_3,puVar8);
  puVar5 = (undefined *)param_3[1];
  *(undefined8 *)(param_2 + 0x30) = 0;
  if (puVar5 != (undefined *)0x0) {
    bVar15 = 1;
LAB_009029b8:
    puVar6 = (undefined *)0x0;
    puVar8 = puVar5;
    if (puVar13 <= puVar5) {
      puVar8 = puVar13;
    }
    goto LAB_009029c4;
  }
  goto LAB_00902b64;
}


// ===== 00902cd4  FUN_00902cd4 =====

void FUN_00902cd4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,"PoisonError",0xb);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish_non_exhaustive(auStack_20);
  return;
}


// ===== 00902d0c  <tokio_util::sync::cancellation_token::guard_ref::DropGuardRef_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio_util::sync::cancellation_token::guard_ref::DropGuardRef as core::ops::drop::Drop>::drop */

void __rustcall
<tokio_util::sync::cancellation_token::guard_ref::DropGuardRef_as_core::ops::drop::Drop>::drop
          (long *param_1)

{
  if (*param_1 != 0) {
    FUN_008ffc54();
    return;
  }
  return;
}


// ===== 00902d1c  <bool_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <bool_as_core::fmt::Display>::fmt(void)

{
  (*(code *)PTR_fmt_00b02798)();
  return;
}


// ===== 00902d20  FUN_00902d20 =====

undefined1  [16] FUN_00902d20(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x28;
  auVar1._0_8_ = "description() is deprecated; use Display";
  return auVar1;
}


// ===== 00902d30  FUN_00902d30 =====

undefined8 FUN_00902d30(void)

{
  return 0;
}


// ===== 00902d38  FUN_00902d38 =====

void FUN_00902d38(void)

{
  return;
}


// ===== 00902d3c  FUN_00902d3c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00902d3c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029f980;
  param_1[1] = _UNK_0029f988;
  *param_1 = uVar1;
  return;
}


// ===== 00902d50  FUN_00902d50 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00902d50(undefined8 *param_1,undefined8 param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  int iVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined4 local_68;
  undefined1 local_64;
  undefined1 local_63;
  
  uVar12 = *param_1;
  lVar6 = FUN_00907ae0(uVar12,"\"",1);
  puVar5 = PTR_ESCAPE_00b00cc0;
  uVar4 = DAT_002a17e0;
  if (lVar6 == 0) {
    uVar11 = 0;
    lVar6 = param_3;
    do {
      while( true ) {
        lVar8 = 0;
        do {
          lVar7 = lVar8;
          if ((byte *)(lVar6 + lVar7) == (byte *)(param_3 + param_4)) {
            if (param_4 - uVar11 != 0) {
              if ((uVar11 != 0) &&
                 ((param_4 <= uVar11 ||
                  (iVar10 = (int)*(char *)(param_3 + uVar11),
                  iVar10 == -0x41 || iVar10 + 0x41 < 0 != SCARRY4(iVar10,0x41))))) {
                    /* WARNING: Subroutine does not return */
                core::str::slice_error_fail
                          (param_3,param_4,uVar11,param_4,
                           &PTR_s__root__cargo_registry_src_index__00af01b8);
              }
              lVar6 = FUN_00907ae0(uVar12,param_3 + uVar11,param_4 - uVar11);
              if (lVar6 != 0) {
                return;
              }
            }
            FUN_00907ae0(uVar12,"\"",1);
            return;
          }
          bVar2 = *(byte *)(lVar6 + lVar7);
          lVar8 = lVar7 + 1;
          bVar3 = puVar5[bVar2];
        } while (bVar3 == 0);
        uVar1 = uVar11 + lVar8;
        if (uVar11 < uVar1 - 1) {
          if (((param_4 < uVar1 - 1) ||
              ((uVar11 != 0 &&
               (iVar10 = (int)*(char *)(param_3 + uVar11),
               iVar10 == -0x41 || iVar10 + 0x41 < 0 != SCARRY4(iVar10,0x41))))) ||
             ((uVar1 + ~param_4 != 0 &&
              (iVar10 = (int)*(char *)(param_3 + -1 + uVar11 + lVar8),
              iVar10 == -0x41 || iVar10 + 0x41 < 0 != SCARRY4(iVar10,0x41))))) {
                    /* WARNING: Subroutine does not return */
            core::str::slice_error_fail
                      (param_3,param_4,uVar11,uVar11 + lVar8 + -1,
                       &PTR_s__root__cargo_registry_src_index__00af01d0);
          }
          lVar7 = FUN_00907ae0(uVar12,param_3 + uVar11,lVar7);
          if (lVar7 != 0) {
            return;
          }
        }
        lVar6 = lVar6 + lVar8;
        uVar11 = uVar1;
        if (0x6d < bVar3) break;
        if (bVar3 < 0x62) {
          if (bVar3 != 0x22) {
            pcVar9 = "\\\\";
            if (bVar3 != 0x5c) goto LAB_00903020;
            goto LAB_00902f68;
          }
          lVar8 = FUN_00907ae0(uVar12,"\\\"",2);
        }
        else if (bVar3 == 0x62) {
          pcVar9 = "\\b";
LAB_00902f68:
          lVar8 = FUN_00907ae0(uVar12,pcVar9,2);
        }
        else {
          if (bVar3 != 0x66) {
LAB_00903020:
                    /* WARNING: Subroutine does not return */
            core::panicking::panic
                      ("internal error: entered unreachable code",0x28,
                       &PTR_s__root__cargo_registry_src_index__00af01e8);
          }
          lVar8 = FUN_00907ae0(uVar12,"\\f",2);
        }
joined_r0x00902f90:
        if (lVar8 != 0) {
          return;
        }
      }
      if (0x73 < bVar3) {
        if (bVar3 == 0x74) {
          lVar8 = FUN_00907ae0(uVar12,"\\t",2);
        }
        else {
          if (bVar3 != 0x75) goto LAB_00903020;
          local_64 = PTR_HEX_DIGITS_00b00cc8[bVar2 >> 4];
          local_63 = PTR_HEX_DIGITS_00b00cc8[(ulong)bVar2 & 0xf];
          local_68 = (undefined4)uVar4;
          lVar8 = FUN_00907ae0(uVar12,&local_68,6);
        }
        goto joined_r0x00902f90;
      }
      if (bVar3 != 0x6e) {
        if (bVar3 != 0x72) goto LAB_00903020;
        lVar8 = FUN_00907ae0(uVar12,"\\r",2);
        goto joined_r0x00902f90;
      }
      lVar8 = FUN_00907ae0(uVar12,"\\n",2);
    } while (lVar8 == 0);
  }
  return;
}


// ===== 00903050  FUN_00903050 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00903050(undefined8 *param_1,undefined8 param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  int iVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined4 local_68;
  undefined1 local_64;
  undefined1 local_63;
  
  uVar12 = *param_1;
  lVar6 = FUN_00907ae0(uVar12,"\"",1);
  puVar5 = PTR_ESCAPE_00b00cc0;
  uVar4 = DAT_002a17e0;
  if (lVar6 == 0) {
    uVar11 = 0;
    lVar6 = param_3;
    do {
      while( true ) {
        lVar8 = 0;
        do {
          lVar7 = lVar8;
          if ((byte *)(lVar6 + lVar7) == (byte *)(param_3 + param_4)) {
            if (param_4 - uVar11 != 0) {
              if ((uVar11 != 0) &&
                 ((param_4 <= uVar11 ||
                  (iVar10 = (int)*(char *)(param_3 + uVar11),
                  iVar10 == -0x41 || iVar10 + 0x41 < 0 != SCARRY4(iVar10,0x41))))) {
                    /* WARNING: Subroutine does not return */
                core::str::slice_error_fail
                          (param_3,param_4,uVar11,param_4,
                           &PTR_s__root__cargo_registry_src_index__00af01b8);
              }
              lVar6 = FUN_00907ae0(uVar12,param_3 + uVar11,param_4 - uVar11);
              if (lVar6 != 0) {
                return;
              }
            }
            FUN_00907ae0(uVar12,"\"",1);
            return;
          }
          bVar2 = *(byte *)(lVar6 + lVar7);
          lVar8 = lVar7 + 1;
          bVar3 = puVar5[bVar2];
        } while (bVar3 == 0);
        uVar1 = uVar11 + lVar8;
        if (uVar11 < uVar1 - 1) {
          if (((param_4 < uVar1 - 1) ||
              ((uVar11 != 0 &&
               (iVar10 = (int)*(char *)(param_3 + uVar11),
               iVar10 == -0x41 || iVar10 + 0x41 < 0 != SCARRY4(iVar10,0x41))))) ||
             ((uVar1 + ~param_4 != 0 &&
              (iVar10 = (int)*(char *)(param_3 + -1 + uVar11 + lVar8),
              iVar10 == -0x41 || iVar10 + 0x41 < 0 != SCARRY4(iVar10,0x41))))) {
                    /* WARNING: Subroutine does not return */
            core::str::slice_error_fail
                      (param_3,param_4,uVar11,uVar11 + lVar8 + -1,
                       &PTR_s__root__cargo_registry_src_index__00af01d0);
          }
          lVar7 = FUN_00907ae0(uVar12,param_3 + uVar11,lVar7);
          if (lVar7 != 0) {
            return;
          }
        }
        lVar6 = lVar6 + lVar8;
        uVar11 = uVar1;
        if (0x6d < bVar3) break;
        if (bVar3 < 0x62) {
          if (bVar3 != 0x22) {
            pcVar9 = "\\\\";
            if (bVar3 != 0x5c) goto LAB_00903320;
            goto LAB_00903268;
          }
          lVar8 = FUN_00907ae0(uVar12,"\\\"",2);
        }
        else if (bVar3 == 0x62) {
          pcVar9 = "\\b";
LAB_00903268:
          lVar8 = FUN_00907ae0(uVar12,pcVar9,2);
        }
        else {
          if (bVar3 != 0x66) {
LAB_00903320:
                    /* WARNING: Subroutine does not return */
            core::panicking::panic
                      ("internal error: entered unreachable code",0x28,
                       &PTR_s__root__cargo_registry_src_index__00af01e8);
          }
          lVar8 = FUN_00907ae0(uVar12,"\\f",2);
        }
joined_r0x00903290:
        if (lVar8 != 0) {
          return;
        }
      }
      if (0x73 < bVar3) {
        if (bVar3 == 0x74) {
          lVar8 = FUN_00907ae0(uVar12,"\\t",2);
        }
        else {
          if (bVar3 != 0x75) goto LAB_00903320;
          local_64 = PTR_HEX_DIGITS_00b00cc8[bVar2 >> 4];
          local_63 = PTR_HEX_DIGITS_00b00cc8[(ulong)bVar2 & 0xf];
          local_68 = (undefined4)uVar4;
          lVar8 = FUN_00907ae0(uVar12,&local_68,6);
        }
        goto joined_r0x00903290;
      }
      if (bVar3 != 0x6e) {
        if (bVar3 != 0x72) goto LAB_00903320;
        lVar8 = FUN_00907ae0(uVar12,"\\r",2);
        goto joined_r0x00903290;
      }
      lVar8 = FUN_00907ae0(uVar12,"\\n",2);
    } while (lVar8 == 0);
  }
  return;
}


// ===== 00903350  FUN_00903350 =====

void FUN_00903350(byte *param_1)

{
  void *__ptr;
  byte bVar1;
  void *pvVar2;
  long lVar3;
  ulong local_88 [3];
  undefined8 local_70;
  ulong local_68;
  undefined8 local_60;
  long lStack_58;
  undefined8 local_50;
  undefined8 local_48;
  
  bVar1 = *param_1;
  if (bVar1 < 3) {
    if (2 < bVar1) {
LAB_009033b0:
      lVar3 = *(long *)(param_1 + 8);
      if (lVar3 == 0) {
        local_48 = 0;
      }
      else {
        local_70 = *(undefined8 *)(param_1 + 0x10);
        local_48 = *(undefined8 *)(param_1 + 0x18);
        local_88[1] = 0;
        local_60 = 0;
        local_88[2] = lVar3;
        lStack_58 = lVar3;
        local_50 = local_70;
      }
      local_88[0] = (ulong)(lVar3 != 0);
      local_68 = local_88[0];
      FUN_0090e1c4(local_88);
      return;
    }
  }
  else if (bVar1 == 3) {
    if (*(long *)(param_1 + 8) != 0) {
      free(*(void **)(param_1 + 0x10));
      return;
    }
  }
  else if (bVar1 == 4) {
    __ptr = *(void **)(param_1 + 0x10);
    lVar3 = *(long *)(param_1 + 0x18) + 1;
    pvVar2 = __ptr;
    while (lVar3 = lVar3 + -1, lVar3 != 0) {
                    /* try { // try from 00903414 to 00903417 has its CatchHandler @ 0090347c */
      FUN_00907ca8(pvVar2);
      pvVar2 = (void *)((long)pvVar2 + 0x20);
    }
    if (*(long *)(param_1 + 8) != 0) {
      free(__ptr);
      return;
    }
  }
  else if (bVar1 != 0xff) goto LAB_009033b0;
  return;
}


// ===== 009034c0  FUN_009034c0 =====

long FUN_009034c0(byte *param_1,undefined8 *param_2)

{
  ushort *puVar1;
  byte bVar2;
  bool bVar3;
  long lVar4;
  char *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *local_40;
  char local_38;
  
  bVar2 = *param_1;
  if (bVar2 < 3) {
    if (bVar2 == 0) {
      lVar4 = FUN_00907ae0(*param_2,&DAT_002bd074,4);
      if (lVar4 != 0) {
        lVar4 = <serde_json::error::[0]::serde_json::error::Error>::io();
        return lVar4;
      }
    }
    else {
      if (bVar2 != 1) {
        lVar4 = FUN_00907ee8(param_1 + 8);
        return lVar4;
      }
      if ((param_1[1] & 1) == 0) {
        pcVar5 = "false";
        uVar6 = 5;
      }
      else {
        pcVar5 = "true";
        uVar6 = 4;
      }
      lVar4 = FUN_00907ae0(*param_2,pcVar5,uVar6);
      if (lVar4 != 0) {
        lVar4 = <serde_json::error::[0]::serde_json::error::Error>::io();
        return lVar4;
      }
    }
  }
  else if (bVar2 == 3) {
    lVar4 = FUN_00903050(param_2,param_2,*(undefined8 *)(param_1 + 0x10),
                         *(undefined8 *)(param_1 + 0x18));
    if (lVar4 != 0) {
      lVar4 = <serde_json::error::[0]::serde_json::error::Error>::io();
      return lVar4;
    }
  }
  else {
    if (bVar2 == 4) {
      lVar4 = FUN_00903cc4(param_2,param_1 + 8);
      return lVar4;
    }
    uVar6 = *param_2;
    lVar10 = *(long *)(param_1 + 0x18);
    lVar4 = FUN_00907ae0(uVar6,"{",1);
    if (lVar4 != 0) {
LAB_00903728:
      lVar4 = <serde_json::error::[0]::serde_json::error::Error>::io();
      return lVar4;
    }
    if (lVar10 == 0) {
      lVar4 = FUN_00907ae0(uVar6,"}",1);
      if (lVar4 != 0) goto LAB_00903728;
      local_38 = '\0';
    }
    else {
      local_38 = '\x01';
    }
    lVar8 = *(long *)(param_1 + 8);
    uVar7 = *(ulong *)(param_1 + 0x10);
    lVar11 = 0;
    bVar3 = lVar8 != 0;
    local_40 = param_2;
    if (!bVar3) {
      lVar10 = 0;
    }
    do {
      if (lVar10 == 0) {
        if (local_38 == '\0') {
          return 0;
        }
        lVar4 = FUN_00907ae0(*local_40,"}",1);
        if (lVar4 == 0) {
          return 0;
        }
        goto LAB_00903728;
      }
      if (!bVar3) {
                    /* WARNING: Subroutine does not return */
        core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00af0610);
      }
      if (lVar11 == 0) {
        for (; lVar11 = lVar8, uVar7 != 0; uVar7 = uVar7 - 1) {
          lVar8 = *(long *)(lVar11 + 0x278);
        }
        lVar8 = 0;
        uVar7 = 0;
        lVar4 = lVar11;
        if (*(short *)(lVar11 + 0x272) == 0) goto LAB_009036c0;
      }
      else {
        lVar4 = lVar11;
        if (*(ushort *)(lVar11 + 0x272) <= uVar7) {
LAB_009036c0:
          do {
            lVar11 = *(long *)(lVar4 + 0x160);
            if (lVar11 == 0) {
                    /* try { // try from 0090376c to 00903777 has its CatchHandler @ 00903788 */
                    /* WARNING: Subroutine does not return */
              core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00af0508);
            }
            puVar1 = (ushort *)(lVar4 + 0x270);
            uVar7 = (ulong)*puVar1;
            lVar8 = lVar8 + 1;
            lVar4 = lVar11;
          } while (*(ushort *)(lVar11 + 0x272) <= *puVar1);
        }
      }
      if (lVar8 == 0) {
        uVar13 = uVar7 + 1;
        lVar12 = lVar11;
      }
      else {
        plVar9 = (long *)(lVar11 + uVar7 * 8 + 0x280);
        do {
          lVar12 = *plVar9;
          lVar8 = lVar8 + -1;
          plVar9 = (long *)(lVar12 + 0x278);
        } while (lVar8 != 0);
        uVar13 = 0;
      }
      lVar10 = lVar10 + -1;
      lVar4 = FUN_00903c04(&local_40,lVar11 + uVar7 * 0x18 + 0x168,lVar11 + uVar7 * 0x20);
      lVar8 = 0;
      bVar3 = true;
      uVar7 = uVar13;
      lVar11 = lVar12;
    } while (lVar4 == 0);
  }
  return lVar4;
}


// ===== 0090378c  FUN_0090378c =====

long FUN_0090378c(byte *param_1,undefined8 *param_2)

{
  ushort *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 *puVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  char *pcVar10;
  undefined8 uVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *local_50;
  char local_48;
  
  bVar4 = *param_1;
  if (bVar4 < 3) {
    if (bVar4 == 0) {
      lVar8 = FUN_00907ae0(*param_2,&DAT_002bd074,4);
      if (lVar8 == 0) {
        return 0;
      }
      lVar8 = <serde_json::error::[0]::serde_json::error::Error>::io();
      return lVar8;
    }
    if (bVar4 == 1) {
      if ((param_1[1] & 1) == 0) {
        pcVar10 = "false";
        uVar11 = 5;
      }
      else {
        pcVar10 = "true";
        uVar11 = 4;
      }
      lVar8 = FUN_00907ae0(*param_2,pcVar10,uVar11);
      if (lVar8 == 0) {
        return 0;
      }
      lVar8 = <serde_json::error::[0]::serde_json::error::Error>::io();
      return lVar8;
    }
    lVar8 = FUN_009081f8(param_1 + 8);
    return lVar8;
  }
  if (bVar4 == 3) {
    lVar8 = FUN_00902d50(param_2,param_2,*(undefined8 *)(param_1 + 0x10),
                         *(undefined8 *)(param_1 + 0x18));
    if (lVar8 == 0) {
      return 0;
    }
    lVar8 = <serde_json::error::[0]::serde_json::error::Error>::io();
    return lVar8;
  }
  if (bVar4 == 4) {
    lVar8 = FUN_00903da0(param_2,param_1 + 8);
    return lVar8;
  }
  lVar16 = param_2[3];
  uVar11 = *param_2;
  lVar8 = *(long *)(param_1 + 0x18);
  *(undefined1 *)(param_2 + 4) = 0;
  param_2[3] = lVar16 + 1;
  lVar7 = FUN_00907ae0(uVar11,"{",1);
  if (lVar7 == 0) {
    if (lVar8 == 0) {
      param_2[3] = lVar16;
      lVar7 = FUN_00907ae0(uVar11,"}",1);
      if (lVar7 != 0) goto LAB_00903a58;
      local_48 = '\0';
    }
    else {
      local_48 = '\x01';
    }
    lVar7 = *(long *)(param_1 + 8);
    uVar12 = *(ulong *)(param_1 + 0x10);
    lVar16 = 0;
    bVar6 = lVar7 != 0;
    local_50 = param_2;
    if (!bVar6) {
      lVar8 = 0;
    }
    while (puVar5 = local_50, lVar8 != 0) {
      if (!bVar6) {
                    /* WARNING: Subroutine does not return */
        core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00af0610);
      }
      if (lVar16 == 0) {
        for (; lVar16 = lVar7, uVar12 != 0; uVar12 = uVar12 - 1) {
          lVar7 = *(long *)(lVar16 + 0x278);
        }
        lVar7 = 0;
        uVar12 = 0;
        lVar14 = lVar16;
        if (*(short *)(lVar16 + 0x272) == 0) goto LAB_009039b4;
      }
      else {
        lVar14 = lVar16;
        if (*(ushort *)(lVar16 + 0x272) <= uVar12) {
LAB_009039b4:
          do {
            lVar16 = *(long *)(lVar14 + 0x160);
            if (lVar16 == 0) {
                    /* try { // try from 00903ac4 to 00903acf has its CatchHandler @ 00903ae0 */
                    /* WARNING: Subroutine does not return */
              core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00af0508);
            }
            puVar1 = (ushort *)(lVar14 + 0x270);
            uVar12 = (ulong)*puVar1;
            lVar7 = lVar7 + 1;
            lVar14 = lVar16;
          } while (*(ushort *)(lVar16 + 0x272) <= *puVar1);
        }
      }
      if (lVar7 == 0) {
        uVar15 = uVar12 + 1;
        lVar14 = lVar16;
      }
      else {
        plVar13 = (long *)(lVar16 + uVar12 * 8 + 0x280);
        do {
          lVar14 = *plVar13;
          lVar7 = lVar7 + -1;
          plVar13 = (long *)(lVar14 + 0x278);
        } while (lVar7 != 0);
        uVar15 = 0;
      }
      lVar8 = lVar8 + -1;
      lVar9 = FUN_00903ae4(&local_50,lVar16 + uVar12 * 0x18 + 0x168,lVar16 + uVar12 * 0x20);
      lVar7 = 0;
      bVar6 = true;
      uVar12 = uVar15;
      lVar16 = lVar14;
      if (lVar9 != 0) {
        return lVar9;
      }
    }
    if (local_48 == '\0') {
      return 0;
    }
    lVar8 = local_50[3];
    uVar11 = *local_50;
    local_50[3] = lVar8 + -1;
    if (*(char *)(local_50 + 4) == '\x01') {
      lVar7 = FUN_00907ae0(uVar11,"\n",1);
      if (lVar7 == 0) {
        uVar2 = puVar5[1];
        uVar3 = puVar5[2];
        do {
          lVar8 = lVar8 + -1;
          if (lVar8 == 0) goto LAB_00903a74;
          lVar7 = FUN_00907ae0(uVar11,uVar2,uVar3);
        } while (lVar7 == 0);
      }
    }
    else {
LAB_00903a74:
      lVar8 = FUN_00907ae0(uVar11,"}",1);
      if (lVar8 == 0) {
        return 0;
      }
    }
  }
LAB_00903a58:
  lVar8 = <serde_json::error::[0]::serde_json::error::Error>::io();
  return lVar8;
}


// ===== 00903ae4  FUN_00903ae4 =====

void FUN_00903ae4(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  
  puVar6 = (undefined8 *)*param_1;
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  uVar7 = *puVar6;
  if (*(char *)(param_1 + 1) == '\x01') {
    auVar9 = FUN_00907ae0(uVar7,"\n",1);
  }
  else {
    auVar9 = FUN_00907ae0(uVar7,",\n",2);
  }
  uVar5 = auVar9._8_8_;
  if (auVar9._0_8_ == 0) {
    uVar2 = puVar6[2];
    uVar8 = puVar6[1];
    lVar4 = puVar6[3] + 1;
    do {
      lVar4 = lVar4 + -1;
      if (lVar4 == 0) {
        *(undefined1 *)(param_1 + 1) = 2;
        lVar4 = FUN_00902d50(puVar6,uVar5,uVar1,uVar3);
        if ((lVar4 == 0) && (lVar4 = FUN_00907ae0(*puVar6,": ",2), lVar4 == 0)) {
          lVar4 = FUN_0090378c(param_3,puVar6);
          if (lVar4 == 0) {
            *(undefined1 *)(puVar6 + 4) = 1;
          }
          return;
        }
        break;
      }
      auVar9 = FUN_00907ae0(uVar7,uVar8,uVar2);
      uVar5 = auVar9._8_8_;
    } while (auVar9._0_8_ == 0);
  }
  <serde_json::error::[0]::serde_json::error::Error>::io();
  return;
}


// ===== 00903c04  FUN_00903c04 =====

void FUN_00903c04(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  puVar4 = (undefined8 *)*param_1;
  if ((*(char *)(param_1 + 1) == '\x01') ||
     (auVar5 = FUN_00907ae0(*puVar4,",",1), param_2 = auVar5._8_8_, auVar5._0_8_ == 0)) {
    *(undefined1 *)(param_1 + 1) = 2;
    lVar3 = FUN_00903050(puVar4,param_2,uVar1,uVar2);
    if (lVar3 == 0) {
      lVar3 = FUN_00907ae0(*puVar4,":",1);
      if (lVar3 == 0) {
        FUN_009034c0(param_3,puVar4);
        return;
      }
      <serde_json::error::[0]::serde_json::error::Error>::io();
      return;
    }
  }
  <serde_json::error::[0]::serde_json::error::Error>::io();
  return;
}


// ===== 00903cc4  FUN_00903cc4 =====

void FUN_00903cc4(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *param_1;
  lVar3 = *(long *)(param_2 + 8);
  lVar2 = *(long *)(param_2 + 0x10);
  lVar1 = FUN_00907ae0(uVar4,"[",1);
  if (lVar1 == 0) {
    if (lVar2 == 0) {
      lVar3 = FUN_00907ae0(uVar4,"]",1);
joined_r0x00903d68:
      if (lVar3 != 0) goto LAB_00903d90;
    }
    else {
      lVar1 = FUN_009034c0(lVar3,param_1);
      if (lVar1 == 0) {
        lVar2 = lVar2 * 0x20;
        do {
          lVar2 = lVar2 + -0x20;
          lVar3 = lVar3 + 0x20;
          if (lVar2 == 0) {
            lVar3 = FUN_00907ae0(*param_1,"]",1);
            goto joined_r0x00903d68;
          }
          lVar1 = FUN_00907ae0(*param_1,",",1);
          if (lVar1 != 0) goto LAB_00903d90;
          lVar1 = FUN_009034c0(lVar3,param_1);
        } while (lVar1 == 0);
      }
    }
    return;
  }
LAB_00903d90:
  <serde_json::error::[0]::serde_json::error::Error>::io();
  return;
}


// ===== 00903da0  FUN_00903da0 =====

void FUN_00903da0(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  char *pcVar6;
  bool bVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  uint uVar16;
  long local_68;
  
  lVar9 = param_1[3];
  uVar11 = *param_1;
  lVar12 = *(long *)(param_2 + 8);
  lVar1 = *(long *)(param_2 + 0x10);
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[3] = lVar9 + 1;
  uVar4 = FUN_00907ae0(uVar11,"[",1);
  if (uVar4 == 0) {
    if (lVar1 == 0) {
      param_1[3] = lVar9;
      uVar4 = FUN_00907ae0(uVar11,"]",1);
joined_r0x00904018:
      if (uVar4 == 0) {
        return;
      }
    }
    else {
      lVar1 = lVar12 + lVar1 * 0x20;
      bVar7 = true;
      do {
        puVar14 = (undefined8 *)*param_1;
        if (bVar7) {
          pcVar6 = "\n";
          uVar11 = 1;
        }
        else {
          pcVar6 = ",\n";
          uVar11 = 2;
        }
        uVar4 = FUN_00907ae0(puVar14,pcVar6,uVar11);
        if (uVar4 != 0) goto LAB_00903fdc;
        lVar9 = param_1[3];
        if ((lVar9 != 0) && (lVar13 = param_1[2], lVar13 != 0)) {
          uVar15 = *puVar14;
          lVar10 = 0;
          uVar11 = param_1[1];
          do {
            iVar3 = <core::fmt::[a]::core::fmt::Formatter>::write_str(uVar15,uVar11,lVar13);
            if (iVar3 != 0) {
              do {
                while( true ) {
                  uVar4 = <alloc::io::error::core::io::error::Error>::new<&str>(0x2a,"fmt error",9);
                  uVar8 = uVar4 & 3;
                  if (uVar8 < 2) break;
                  if (uVar8 == 2) {
                    /* try { // try from 00903f28 to 00903f3b has its CatchHandler @ 00904058 */
                    lVar5 = core::io::error::os_functions::get_os_functions();
                    iVar3 = (**(code **)(lVar5 + 0x10))(uVar4 >> 0x20);
                    if (iVar3 == 0) goto LAB_00903fdc;
                  }
                  else {
                    uVar16 = (uint)(uVar4 >> 0x20) & 0xff;
                    if (10 < uVar4 >> 0x22) {
                      uVar16 = 0xff;
                    }
                    if (uVar16 != 0x23) goto LAB_00903fdc;
                  }
LAB_00903eb0:
                  uVar4 = <core::fmt::[a]::core::fmt::Formatter>::write_str(uVar15,uVar11,lVar13);
                  if ((uVar4 & 1) == 0) goto LAB_00903e80;
                }
                if (uVar8 == 0) {
                  if (*(char *)(uVar4 + 0x10) == '#') goto LAB_00903eb0;
                  goto LAB_00903fdc;
                }
                if (*(char *)(uVar4 + 0x1f) != '#') goto LAB_00903fdc;
                local_68 = uVar4 - 1;
                <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_68);
                uVar4 = <core::fmt::[a]::core::fmt::Formatter>::write_str(uVar15,uVar11,lVar13);
              } while ((uVar4 & 1) != 0);
            }
LAB_00903e80:
            lVar10 = lVar10 + 1;
          } while (lVar10 != lVar9);
        }
        lVar9 = FUN_0090378c(lVar12,param_1);
        if (lVar9 != 0) {
          return;
        }
        lVar12 = lVar12 + 0x20;
        bVar7 = false;
        *(undefined1 *)(param_1 + 4) = 1;
      } while (lVar12 != lVar1);
      lVar12 = param_1[3];
      uVar11 = *param_1;
      param_1[3] = lVar12 + -1;
      uVar4 = FUN_00907ae0(uVar11,"\n",1);
      if (uVar4 == 0) {
        uVar15 = param_1[1];
        uVar2 = param_1[2];
        do {
          lVar12 = lVar12 + -1;
          if (lVar12 == 0) {
            uVar4 = FUN_00907ae0(uVar11,"]",1);
            goto joined_r0x00904018;
          }
          uVar4 = FUN_00907ae0(uVar11,uVar15,uVar2);
        } while (uVar4 == 0);
      }
    }
  }
LAB_00903fdc:
  <serde_json::error::[0]::serde_json::error::Error>::io(uVar4);
  return;
}


// ===== 00904070  serde_json::ser::key_must_be_a_string =====

/* WARNING: Unknown calling convention: __rustcall */
/* serde_json::ser::key_must_be_a_string */

void __rustcall serde_json::ser::key_must_be_a_string(void)

{
  undefined8 local_28 [3];
  
  local_28[0] = 0x11;
  <serde_json::error::[0]::serde_json::error::Error>::syntax(local_28,0,0);
  return;
}


// ===== 009040a0  serde_json::ser::float_key_must_be_finite =====

/* WARNING: Unknown calling convention: __rustcall */
/* serde_json::ser::float_key_must_be_finite */

void __rustcall serde_json::ser::float_key_must_be_finite(void)

{
  undefined8 local_28 [3];
  
  local_28[0] = 0x13;
  <serde_json::error::[0]::serde_json::error::Error>::syntax(local_28,0,0);
  return;
}


// ===== 009040d0  <serde_json::value::ser::SerializeTupleVariant_as_serde::ser::SerializeTupleVariant>::end =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::ser::SerializeTupleVariant as serde::ser::SerializeTupleVariant>::end */

void __rustcall
<serde_json::value::ser::SerializeTupleVariant_as_serde::ser::SerializeTupleVariant>::end
          (undefined1 *param_1,undefined8 *param_2)

{
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 auStack_80 [32];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 local_40;
  undefined6 uStack_3f;
  undefined1 uStack_39;
  undefined7 uStack_38;
  undefined1 uStack_31;
  undefined7 uStack_30;
  undefined1 uStack_29;
  undefined7 uStack_28;
  undefined1 uStack_21;
  
  local_50 = param_2[2];
  uStack_58 = param_2[1];
  local_60 = *param_2;
  local_98 = 0;
  local_88 = 0;
  uStack_30 = (undefined7)param_2[4];
  uStack_29 = (undefined1)((ulong)param_2[4] >> 0x38);
  uStack_38 = (undefined7)param_2[3];
  uStack_31 = (undefined1)((ulong)param_2[3] >> 0x38);
  uStack_28 = (undefined7)param_2[5];
  uStack_21 = (undefined1)((ulong)param_2[5] >> 0x38);
  local_40 = 4;
                    /* try { // try from 00904114 to 0090412f has its CatchHandler @ 00904168 */
  FUN_0090eb24(auStack_80,&local_98,&local_60,&local_40);
  FUN_00903350(auStack_80);
  *param_1 = 5;
  uStack_31 = (undefined1)uStack_90;
  uStack_39 = (undefined1)local_98;
  uStack_38 = (undefined7)((ulong)local_98 >> 8);
  *(ulong *)(param_1 + 9) = CONCAT17(uStack_31,uStack_38);
  *(ulong *)(param_1 + 1) = CONCAT17(uStack_39,CONCAT61(uStack_3f,local_40));
  *(undefined8 *)(param_1 + 0x18) = local_88;
  *(undefined8 *)(param_1 + 0x10) = uStack_90;
  return;
}


// ===== 00904180  <serde_json::value::ser::SerializeMap_as_serde::ser::SerializeMap>::end =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::ser::SerializeMap as serde::ser::SerializeMap>::end */

void __rustcall
<serde_json::value::ser::SerializeMap_as_serde::ser::SerializeMap>::end
          (undefined1 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined7 uStack_20;
  undefined1 local_19;
  undefined7 uStack_18;
  undefined1 uStack_11;
  
  lVar4 = param_2[4];
  lVar3 = param_2[3];
  lVar2 = param_2[5];
  lVar1 = *param_2;
  *param_1 = 5;
  uStack_11 = (undefined1)lVar4;
  local_19 = (undefined1)lVar3;
  uStack_18 = (undefined7)((ulong)lVar3 >> 8);
  *(ulong *)(param_1 + 9) = CONCAT17(uStack_11,uStack_18);
  *(ulong *)(param_1 + 1) = CONCAT17(local_19,uStack_20);
  *(long *)(param_1 + 0x18) = lVar2;
  *(long *)(param_1 + 0x10) = lVar4;
  if ((lVar1 != -1) && (lVar1 != 0)) {
    free((void *)param_2[1]);
    return;
  }
  return;
}


// ===== 009041d4  <serde_json::value::ser::MapKeySerializer_as_serde::ser::Serializer>::serialize_i8 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::ser::MapKeySerializer as serde::ser::Serializer>::serialize_i8 */

void __rustcall
<serde_json::value::ser::MapKeySerializer_as_serde::ser::Serializer>::serialize_i8
          (size_t *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  void *__dest;
  size_t __n;
  long lVar3;
  long lVar4;
  undefined1 auStack_59 [3];
  ushort local_56;
  
  uVar2 = (uint)(char)param_2;
  uVar1 = -uVar2;
  if (-1 < (int)uVar2) {
    uVar1 = uVar2;
  }
  if (uVar1 < 100) {
    if ((uVar1 & 0xff) < 10) {
      lVar3 = 3;
      local_56 = CONCAT11((char)uVar1,(undefined1)local_56) | 0x3000;
    }
    else {
      local_56 = *(ushort *)
                  (
                  "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                  + ((ulong)uVar1 & 0xff) * 2);
      lVar3 = 2;
    }
  }
  else {
    lVar3 = 1;
    local_56 = *(ushort *)
                (
                "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                + ((ulong)(uVar1 * 2 + 0x38) & 0xfe));
    auStack_59[2] = 0x31;
  }
  lVar4 = lVar3;
  if ((param_2 >> 7 & 1) != 0) {
    lVar4 = lVar3 + -1;
    auStack_59[lVar3] = 0x2d;
  }
  __n = 4 - lVar4;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  __dest = (void *)FUN_004b25a4(__n,1);
  if (__dest != (void *)0x0) {
    memcpy(__dest,auStack_59 + lVar4 + 1,__n);
    *param_1 = __n;
    param_1[1] = (size_t)__dest;
    param_1[2] = __n;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(1,__n);
}


// ===== 009042e0  <serde_json::value::ser::MapKeySerializer_as_serde::ser::Serializer>::serialize_u8 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::ser::MapKeySerializer as serde::ser::Serializer>::serialize_u8 */

void __rustcall
<serde_json::value::ser::MapKeySerializer_as_serde::ser::Serializer>::serialize_u8
          (size_t *param_1,ulong param_2)

{
  uint uVar1;
  byte bVar2;
  void *__dest;
  size_t __n;
  ulong uVar3;
  byte local_58;
  undefined2 local_57;
  
  bVar2 = (byte)param_2;
  uVar1 = (uint)param_2 & 0xff;
  if (uVar1 < 100) {
    if (9 < uVar1) {
      local_57 = *(undefined2 *)
                  (
                  "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                  + (param_2 & 0xff) * 2);
      uVar3 = 1;
      __n = 2;
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      __dest = (void *)FUN_004b25a4(2,1);
      goto joined_r0x009043c4;
    }
    uVar3 = 2;
  }
  else {
    uVar3 = 0;
    uVar1 = uVar1 * 0x29 >> 0xc;
    bVar2 = (byte)uVar1;
    local_57 = *(undefined2 *)
                (
                "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                + ((ulong)((uint)param_2 + uVar1 * -100) & 0xff) * 2);
  }
  (&local_58)[uVar3] = bVar2 | 0x30;
  __n = uVar3 ^ 3;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  __dest = (void *)FUN_004b25a4(uVar3 ^ 3,1);
joined_r0x009043c4:
  if (__dest != (void *)0x0) {
    memcpy(__dest,&local_58 + uVar3,__n);
    *param_1 = __n;
    param_1[1] = (size_t)__dest;
    param_1[2] = __n;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(1,__n);
}


// ===== 009043d4  <serde_json::value::ser::MapKeySerializer_as_serde::ser::Serializer>::serialize_f32 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::ser::MapKeySerializer as serde::ser::Serializer>::serialize_f32 */

void __rustcall
<serde_json::value::ser::MapKeySerializer_as_serde::ser::Serializer>::serialize_f32
          (size_t *param_1,uint param_2)

{
  size_t sVar1;
  undefined1 *__dest;
  undefined8 uVar2;
  undefined8 local_48 [3];
  
  if (0x7f7fffff < (param_2 & 0x7fffffff)) {
    local_48[0] = 0x13;
    sVar1 = <serde_json::error::[0]::serde_json::error::Error>::syntax(local_48,0,0);
    *param_1 = 0xffffffffffffffff;
    param_1[1] = sVar1;
    return;
  }
  sVar1 = ryu::pretty::format32(local_48);
  if ((long)sVar1 < 0) {
    uVar2 = 0;
LAB_00904414:
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar2,sVar1);
  }
  if (sVar1 == 0) {
    __dest = &DAT_00000001;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar2 = 1;
    __dest = (undefined1 *)FUN_004b25a4(sVar1,1);
    if (__dest == (undefined1 *)0x0) goto LAB_00904414;
    memcpy(__dest,local_48,sVar1);
  }
  *param_1 = sVar1;
  param_1[1] = (size_t)__dest;
  param_1[2] = sVar1;
  return;
}


// ===== 009044a4  <serde_json::value::ser::MapKeySerializer_as_serde::ser::Serializer>::serialize_f64 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::ser::MapKeySerializer as serde::ser::Serializer>::serialize_f64 */

void __rustcall
<serde_json::value::ser::MapKeySerializer_as_serde::ser::Serializer>::serialize_f64
          (size_t *param_1,ulong param_2)

{
  size_t sVar1;
  undefined1 *__dest;
  undefined8 uVar2;
  undefined8 local_48 [3];
  
  if (0x7fefffffffffffff < (param_2 & 0x7fffffffffffffff)) {
    local_48[0] = 0x13;
    sVar1 = <serde_json::error::[0]::serde_json::error::Error>::syntax(local_48,0,0);
    *param_1 = 0xffffffffffffffff;
    param_1[1] = sVar1;
    return;
  }
  sVar1 = ryu::pretty::format64(local_48);
  if ((long)sVar1 < 0) {
    uVar2 = 0;
LAB_009044e4:
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar2,sVar1);
  }
  if (sVar1 == 0) {
    __dest = &DAT_00000001;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar2 = 1;
    __dest = (undefined1 *)FUN_004b25a4(sVar1,1);
    if (__dest == (undefined1 *)0x0) goto LAB_009044e4;
    memcpy(__dest,local_48,sVar1);
  }
  *param_1 = sVar1;
  param_1[1] = (size_t)__dest;
  param_1[2] = sVar1;
  return;
}


// ===== 00904574  <serde_json::value::ser::MapKeySerializer_as_serde::ser::Serializer>::serialize_i16 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::ser::MapKeySerializer as serde::ser::Serializer>::serialize_i16 */

void __rustcall
<serde_json::value::ser::MapKeySerializer_as_serde::ser::Serializer>::serialize_i16
          (size_t *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  void *__dest;
  uint uVar3;
  long lVar4;
  size_t __n;
  long lVar5;
  undefined2 uStack_5a;
  byte local_58 [2];
  undefined2 local_56;
  undefined2 local_54;
  
  uVar3 = (uint)(short)param_2;
  uVar2 = -uVar3;
  if (-1 < (int)uVar3) {
    uVar2 = uVar3;
  }
  if (uVar2 >> 4 < 0x271) {
    if ((uVar2 & 0xffff) < 100) {
      lVar4 = 6;
      uVar3 = uVar2;
      uVar2 = uVar2 & 0xffff;
    }
    else {
      uVar3 = (uVar2 >> 2 & 0x3fff) / 0x19;
      local_54 = *(undefined2 *)
                  (
                  "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                  + ((ulong)(uVar2 + uVar3 * -100) & 0xffff) * 2);
      lVar4 = 4;
      uVar2 = uVar3;
    }
    if (9 < uVar2) {
      lVar5 = lVar4 + -2;
      *(undefined2 *)((long)&uStack_5a + lVar4) =
           *(undefined2 *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
            + ((ulong)uVar3 & 0xffff) * 2);
      goto joined_r0x00904654;
    }
  }
  else {
    uVar3 = (uVar2 >> 4 & 0xfff) / 0x271;
    uVar2 = uVar2 + uVar3 * -10000;
    uVar1 = (uVar2 >> 2 & 0x3fff) / 0x19;
    local_56 = *(undefined2 *)
                (
                "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                + (ulong)uVar1 * 2);
    lVar4 = 2;
    local_54 = *(undefined2 *)
                (
                "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                + ((ulong)(uVar2 + uVar1 * -100) & 0xffff) * 2);
  }
  lVar5 = lVar4 + -1;
  *(byte *)((long)&uStack_5a + lVar4 + 1) = (byte)uVar3 | 0x30;
joined_r0x00904654:
  lVar4 = lVar5;
  if ((param_2 >> 0xf & 1) != 0) {
    lVar4 = lVar5 + -1;
    *(undefined1 *)((long)&uStack_5a + lVar5 + 1) = 0x2d;
  }
  __n = 6 - lVar4;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  __dest = (void *)FUN_004b25a4(__n,1);
  if (__dest == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(1,__n);
  }
  memcpy(__dest,local_58 + lVar4,__n);
  *param_1 = __n;
  param_1[1] = (size_t)__dest;
  param_1[2] = __n;
  return;
}


// ===== 009046ec  <serde_json::value::ser::MapKeySerializer_as_serde::ser::Serializer>::serialize_i32 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::ser::MapKeySerializer as serde::ser::Serializer>::serialize_i32 */

void __rustcall
<serde_json::value::ser::MapKeySerializer_as_serde::ser::Serializer>::serialize_i32
          (size_t *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  size_t __n;
  ulong uVar3;
  undefined1 *__dest;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  undefined2 *puVar8;
  long lVar9;
  undefined2 uStack_5a;
  undefined1 auStack_58 [7];
  undefined2 local_51 [16];
  
  uVar4 = -param_2;
  if (-1 < (int)param_2) {
    uVar4 = param_2;
  }
  if (uVar4 >> 4 < 0x271) {
    lVar7 = 0xb;
    if (uVar4 < 100) goto LAB_009047c0;
  }
  else {
    lVar7 = 0xb;
    uVar3 = (ulong)uVar4;
    puVar8 = local_51 + 1;
    do {
      uVar6 = uVar3;
      lVar7 = lVar7 + -4;
      uVar4 = (uint)(uVar6 / 10000);
      uVar5 = (uint)(uVar6 / 10000);
      uVar2 = (uint)uVar6 + uVar5 * -10000;
      uVar1 = (uVar2 >> 2 & 0x3fff) / 0x19;
      puVar8[-1] = *(undefined2 *)
                    (
                    "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                    + (ulong)uVar1 * 2);
      *puVar8 = *(undefined2 *)
                 (
                 "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                 + ((ulong)(uVar2 + uVar1 * -100) & 0xffff) * 2);
      uVar3 = uVar6 / 10000;
      puVar8 = puVar8 + -2;
    } while (99999999 < (uint)uVar6);
    if (uVar5 < 99 || (int)(uVar6 / 10000) == 99) goto LAB_009047c0;
  }
  uVar1 = (uVar4 >> 2 & 0x3fff) / 0x19;
  *(undefined2 *)((long)&uStack_5a + lVar7) =
       *(undefined2 *)
        (
        "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
        + ((ulong)(uVar4 + uVar1 * -100) & 0xffff) * 2);
  lVar7 = lVar7 + -2;
  uVar4 = uVar1;
LAB_009047c0:
  if (uVar4 < 10) {
    lVar9 = lVar7 + -1;
    *(byte *)((long)&uStack_5a + lVar7 + 1) = (byte)uVar4 | 0x30;
  }
  else {
    lVar9 = lVar7 + -2;
    *(undefined2 *)((long)&uStack_5a + lVar7) =
         *(undefined2 *)
          (
          "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
          + (ulong)uVar4 * 2);
  }
  if ((int)param_2 < 0) {
    *(undefined1 *)((long)&uStack_5a + lVar9 + 1) = 0x2d;
    lVar9 = lVar9 + -1;
  }
  __n = 0xb - lVar9;
  if (lVar9 == 0xb) {
    __dest = &DAT_00000001;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    __dest = (undefined1 *)FUN_004b25a4(__n,1);
    if (__dest == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(1,__n);
    }
    memcpy(__dest,auStack_58 + lVar9,__n);
  }
  *param_1 = __n;
  param_1[1] = (size_t)__dest;
  param_1[2] = __n;
  return;
}


// ===== 0090488c  <serde_json::value::ser::MapKeySerializer_as_serde::ser::Serializer>::serialize_i64 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::ser::MapKeySerializer as serde::ser::Serializer>::serialize_i64 */

void __rustcall
<serde_json::value::ser::MapKeySerializer_as_serde::ser::Serializer>::serialize_i64
          (size_t *param_1,ulong param_2)

{
  bool bVar1;
  uint uVar2;
  size_t __n;
  undefined1 *__dest;
  long lVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  undefined2 *puVar7;
  ulong uVar8;
  undefined2 uStack_5a;
  undefined1 auStack_58 [16];
  undefined2 local_48 [12];
  
  uVar6 = -param_2;
  if (-1 < (long)param_2) {
    uVar6 = param_2;
  }
  if (uVar6 >> 4 < 0x271) {
    lVar3 = 0x14;
  }
  else {
    lVar3 = 0x14;
    puVar7 = local_48 + 1;
    uVar8 = uVar6;
    do {
      lVar3 = lVar3 + -4;
      uVar6 = uVar8 / 10000;
      uVar5 = (int)uVar8 + (int)uVar6 * -10000;
      uVar2 = (uVar5 >> 2 & 0x3fff) / 0x19;
      puVar7[-1] = *(undefined2 *)
                    (
                    "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                    + (ulong)uVar2 * 2);
      *puVar7 = *(undefined2 *)
                 (
                 "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                 + ((ulong)(uVar5 + uVar2 * -100) & 0xffff) * 2);
      bVar1 = 99999999 < uVar8;
      puVar7 = puVar7 + -2;
      uVar8 = uVar6;
    } while (bVar1);
  }
  lVar4 = lVar3;
  if (99 < uVar6) {
    uVar5 = (uint)uVar6;
    lVar4 = lVar3 + -2;
    uVar2 = (uVar5 >> 2 & 0x3fff) / 0x19;
    uVar6 = (ulong)uVar2;
    *(undefined2 *)((long)&uStack_5a + lVar3) =
         *(undefined2 *)
          (
          "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
          + ((ulong)(uVar5 + uVar2 * -100) & 0xffff) * 2);
  }
  if (uVar6 < 10) {
    lVar3 = lVar4 + -1;
    *(byte *)((long)&uStack_5a + lVar4 + 1) = (byte)uVar6 | 0x30;
  }
  else {
    lVar3 = lVar4 + -2;
    *(undefined2 *)((long)&uStack_5a + lVar4) =
         *(undefined2 *)
          (
          "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
          + uVar6 * 2);
  }
  if ((long)param_2 < 0) {
    *(undefined1 *)((long)&uStack_5a + lVar3 + 1) = 0x2d;
    lVar3 = lVar3 + -1;
  }
  __n = 0x14 - lVar3;
  if (lVar3 == 0x14) {
    __dest = &DAT_00000001;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    __dest = (undefined1 *)FUN_004b25a4(__n,1);
    if (__dest == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(1,__n);
    }
    memcpy(__dest,auStack_58 + lVar3,__n);
  }
  *param_1 = __n;
  param_1[1] = (size_t)__dest;
  param_1[2] = __n;
  return;
}


// ===== 00904a38  <serde_json::value::ser::MapKeySerializer_as_serde::ser::Serializer>::serialize_seq =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::ser::MapKeySerializer as serde::ser::Serializer>::serialize_seq */

void __rustcall
<serde_json::value::ser::MapKeySerializer_as_serde::ser::Serializer>::serialize_seq(void)

{
  undefined8 local_28 [3];
  
  local_28[0] = 0x11;
  <serde_json::error::[0]::serde_json::error::Error>::syntax(local_28,0,0);
  return;
}


// ===== 00904a68  <serde_json::value::ser::MapKeySerializer_as_serde::ser::Serializer>::serialize_u16 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::ser::MapKeySerializer as serde::ser::Serializer>::serialize_u16 */

void __rustcall
<serde_json::value::ser::MapKeySerializer_as_serde::ser::Serializer>::serialize_u16
          (size_t *param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  void *__dest;
  uint uVar3;
  long lVar4;
  size_t __n;
  long lVar5;
  undefined2 uStack_5a;
  byte local_58;
  undefined2 local_57;
  undefined2 local_55;
  
  uVar2 = (uint)param_2;
  uVar3 = uVar2 >> 4 & 0xfff;
  if (uVar3 < 0x271) {
    if ((uVar2 & 0xffff) < 100) {
      lVar4 = 5;
      param_2 = param_2 & 0xffffffff;
      uVar3 = uVar2;
      uVar2 = uVar2 & 0xffff;
    }
    else {
      uVar3 = (uVar2 >> 2 & 0x3fff) / 0x19;
      param_2 = (ulong)uVar3;
      local_55 = *(undefined2 *)
                  (
                  "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                  + ((ulong)(uVar2 + uVar3 * -100) & 0xffff) * 2);
      lVar4 = 3;
      uVar2 = uVar3;
    }
    if (9 < uVar2) {
      lVar5 = lVar4 + -2;
      *(undefined2 *)((long)&uStack_5a + lVar4) =
           *(undefined2 *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
            + (param_2 & 0xffff) * 2);
      goto LAB_00904b60;
    }
  }
  else {
    uVar3 = uVar3 / 0x271;
    uVar2 = uVar2 + uVar3 * -10000;
    uVar1 = (uVar2 >> 2 & 0x3fff) / 0x19;
    local_57 = *(undefined2 *)
                (
                "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                + (ulong)uVar1 * 2);
    lVar4 = 1;
    local_55 = *(undefined2 *)
                (
                "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                + ((ulong)(uVar2 + uVar1 * -100) & 0xffff) * 2);
  }
  lVar5 = lVar4 + -1;
  *(byte *)((long)&uStack_5a + lVar4 + 1) = (byte)uVar3 | 0x30;
LAB_00904b60:
  __n = 5 - lVar5;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  __dest = (void *)FUN_004b25a4(__n,1);
  if (__dest == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(1,__n);
  }
  memcpy(__dest,&local_58 + lVar5,__n);
  *param_1 = __n;
  param_1[1] = (size_t)__dest;
  param_1[2] = __n;
  return;
}


// ===== 00904bb8  <serde_json::value::ser::MapKeySerializer_as_serde::ser::Serializer>::serialize_u32 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::ser::MapKeySerializer as serde::ser::Serializer>::serialize_u32 */

void __rustcall
<serde_json::value::ser::MapKeySerializer_as_serde::ser::Serializer>::serialize_u32
          (size_t *param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  size_t __n;
  uint uVar5;
  uint uVar6;
  undefined1 *__dest;
  long lVar7;
  undefined2 *puVar8;
  long lVar9;
  undefined2 uStack_5a;
  undefined1 auStack_58 [6];
  undefined2 local_52 [17];
  
  uVar5 = (uint)param_2;
  if (((uint)(param_2 >> 4) & 0xfffffff) < 0x271) {
    lVar7 = 10;
    if (uVar5 < 100) goto LAB_00904c84;
  }
  else {
    lVar7 = 10;
    puVar8 = local_52 + 1;
    do {
      uVar3 = param_2 & 0xffffffff;
      uVar4 = (uint)param_2;
      lVar7 = lVar7 + -4;
      param_2 = uVar3 / 10000;
      uVar5 = (uint)param_2;
      uVar6 = (uint)(uVar3 / 10000);
      uVar2 = uVar4 + uVar6 * -10000;
      uVar1 = (uVar2 >> 2 & 0x3fff) / 0x19;
      puVar8[-1] = *(undefined2 *)
                    (
                    "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                    + (ulong)uVar1 * 2);
      *puVar8 = *(undefined2 *)
                 (
                 "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                 + ((ulong)(uVar2 + uVar1 * -100) & 0xffff) * 2);
      puVar8 = puVar8 + -2;
    } while (99999999 < uVar4);
    if (uVar6 < 99 || (int)(uVar3 / 10000) == 99) goto LAB_00904c84;
  }
  uVar1 = (uVar5 >> 2 & 0x3fff) / 0x19;
  param_2 = (ulong)uVar1;
  *(undefined2 *)((long)&uStack_5a + lVar7) =
       *(undefined2 *)
        (
        "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
        + ((ulong)(uVar5 + uVar1 * -100) & 0xffff) * 2);
  lVar7 = lVar7 + -2;
LAB_00904c84:
  if ((uint)param_2 < 10) {
    lVar9 = lVar7 + -1;
    *(byte *)((long)&uStack_5a + lVar7 + 1) = (byte)param_2 | 0x30;
  }
  else {
    lVar9 = lVar7 + -2;
    *(undefined2 *)((long)&uStack_5a + lVar7) =
         *(undefined2 *)
          (
          "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
          + (param_2 & 0xffffffff) * 2);
  }
  __n = 10 - lVar9;
  if (lVar9 == 10) {
    __dest = &DAT_00000001;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    __dest = (undefined1 *)FUN_004b25a4(__n,1);
    if (__dest == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(1,__n);
    }
    memcpy(__dest,auStack_58 + lVar9,__n);
  }
  *param_1 = __n;
  param_1[1] = (size_t)__dest;
  param_1[2] = __n;
  return;
}


// ===== 00904d34  <serde_json::value::ser::MapKeySerializer_as_serde::ser::Serializer>::serialize_u64 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::ser::MapKeySerializer as serde::ser::Serializer>::serialize_u64 */

void __rustcall
<serde_json::value::ser::MapKeySerializer_as_serde::ser::Serializer>::serialize_u64
          (size_t *param_1,ulong param_2)

{
  bool bVar1;
  uint uVar2;
  size_t __n;
  uint uVar3;
  undefined1 *__dest;
  long lVar4;
  undefined2 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined2 uStack_5a;
  undefined1 auStack_58 [16];
  undefined2 local_48 [12];
  
  if (param_2 >> 4 < 0x271) {
    lVar4 = 0x14;
    if (param_2 < 100) goto LAB_00904e0c;
  }
  else {
    lVar4 = 0x14;
    puVar5 = local_48 + 1;
    uVar6 = param_2;
    do {
      lVar4 = lVar4 + -4;
      param_2 = uVar6 / 10000;
      uVar3 = (int)uVar6 + (int)param_2 * -10000;
      uVar2 = (uVar3 >> 2 & 0x3fff) / 0x19;
      puVar5[-1] = *(undefined2 *)
                    (
                    "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                    + (ulong)uVar2 * 2);
      *puVar5 = *(undefined2 *)
                 (
                 "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                 + ((ulong)(uVar3 + uVar2 * -100) & 0xffff) * 2);
      bVar1 = 99999999 < uVar6;
      puVar5 = puVar5 + -2;
      uVar6 = param_2;
    } while (bVar1);
    if (param_2 < 100) goto LAB_00904e0c;
  }
  uVar3 = (uint)param_2;
  uVar2 = (uVar3 >> 2 & 0x3fff) / 0x19;
  param_2 = (ulong)uVar2;
  *(undefined2 *)((long)&uStack_5a + lVar4) =
       *(undefined2 *)
        (
        "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
        + ((ulong)(uVar3 + uVar2 * -100) & 0xffff) * 2);
  lVar4 = lVar4 + -2;
LAB_00904e0c:
  if (param_2 < 10) {
    lVar7 = lVar4 + -1;
    *(byte *)((long)&uStack_5a + lVar4 + 1) = (byte)param_2 | 0x30;
  }
  else {
    lVar7 = lVar4 + -2;
    *(undefined2 *)((long)&uStack_5a + lVar4) =
         *(undefined2 *)
          (
          "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
          + param_2 * 2);
  }
  __n = 0x14 - lVar7;
  if (lVar7 == 0x14) {
    __dest = &DAT_00000001;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    __dest = (undefined1 *)FUN_004b25a4(__n,1);
    if (__dest == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(1,__n);
    }
    memcpy(__dest,auStack_58 + lVar7,__n);
  }
  *param_1 = __n;
  param_1[1] = (size_t)__dest;
  param_1[2] = __n;
  return;
}


// ===== 00904ebc  <serde_json::value::ser::MapKeySerializer_as_serde::ser::Serializer>::serialize_bool =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::ser::MapKeySerializer as serde::ser::Serializer>::serialize_bool */

void __rustcall
<serde_json::value::ser::MapKeySerializer_as_serde::ser::Serializer>::serialize_bool
          (size_t *param_1,int param_2)

{
  size_t __n;
  char *__src;
  void *__dest;
  
  __n = 4;
  if (param_2 == 0) {
    __n = 5;
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  __dest = (void *)FUN_004b25a4(__n,1);
  if (__dest != (void *)0x0) {
    __src = "true";
    if (param_2 == 0) {
      __src = "false";
    }
    memcpy(__dest,__src,__n);
    *param_1 = __n;
    param_1[1] = (size_t)__dest;
    param_1[2] = __n;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(1,__n);
}


// ===== 00904f3c  <serde_json::value::ser::MapKeySerializer_as_serde::ser::Serializer>::serialize_i128 =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::ser::MapKeySerializer as serde::ser::Serializer>::serialize_i128 */

void __rustcall
<serde_json::value::ser::MapKeySerializer_as_serde::ser::Serializer>::serialize_i128
          (size_t *param_1,ulong param_2,ulong param_3)

{
  bool bVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  size_t __n;
  undefined1 *__dest;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined2 *puVar16;
  byte *pbVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  undefined2 uStack_79;
  undefined1 local_77;
  undefined2 auStack_76 [7];
  undefined1 local_67 [2];
  byte abStack_65 [17];
  undefined2 local_54 [2];
  
  uVar8 = (long)param_3 >> 0x3f;
  uVar10 = (param_2 ^ uVar8) - uVar8;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar10;
  uVar13 = SUB168(auVar3 * ZEXT816(0x9598f4f1e8361973),8);
  uVar9 = (param_3 ^ uVar8) - (uVar8 + ((param_2 ^ uVar8) < uVar8));
  uVar19 = uVar10 * 0x760f253edb4ab0d2;
  lVar21 = 0x7538dcfb76180000;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar10;
  uVar18 = SUB168(auVar4 * ZEXT816(0x760f253edb4ab0d2),8);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar9;
  uVar20 = SUB168(auVar5 * ZEXT816(0x760f253edb4ab0d2),8);
  uVar14 = uVar9 * 0x760f253edb4ab0d2;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar9;
  uVar8 = SUB168(auVar6 * ZEXT816(0x9598f4f1e8361973),8);
  uVar15 = uVar14 + uVar18 + (ulong)CARRY8(uVar13,uVar19);
  if (CARRY8(uVar14,uVar18) || CARRY8(uVar14 + uVar18,(ulong)CARRY8(uVar13,uVar19))) {
    uVar20 = uVar20 + 1;
  }
  if (CARRY8(uVar13 + uVar19,uVar9 * -0x6a670b0e17c9e68d)) {
    uVar8 = uVar8 + 1;
  }
  if (CARRY8(uVar15,uVar8)) {
    uVar20 = uVar20 + 1;
  }
  uVar13 = (uVar10 >> 0x13 | uVar9 << 0x2d) / 0x1158e460913d;
  if (0x7ffff < uVar9) {
    uVar13 = uVar15 + uVar8 >> 0x3e | uVar20 << 2;
  }
  uVar10 = uVar10 + uVar13 * 0x7538dcfb76180000;
  uVar8 = 0;
  if (0x7ffff < uVar9) {
    uVar8 = uVar20 >> 0x3e;
  }
  if (uVar10 >> 4 < 0x271) {
    lVar11 = 0x14;
  }
  else {
    lVar11 = 0x14;
    puVar16 = local_54 + 1;
    uVar20 = uVar10;
    do {
      lVar11 = lVar11 + -4;
      uVar10 = uVar20 / 10000;
      uVar7 = (int)uVar20 + (int)uVar10 * -10000;
      uVar2 = (uVar7 >> 2 & 0x3fff) / 0x19;
      puVar16[-1] = *(undefined2 *)
                     (
                     "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                     + (ulong)uVar2 * 2);
      *puVar16 = *(undefined2 *)
                  (
                  "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                  + ((ulong)(uVar7 + uVar2 * -100) & 0xffff) * 2);
      bVar1 = 99999999 < uVar20;
      puVar16 = puVar16 + -2;
      uVar20 = uVar10;
    } while (bVar1);
  }
  lVar12 = lVar11;
  if (99 < uVar10) {
    uVar7 = (uint)uVar10;
    lVar12 = lVar11 + -2;
    uVar2 = (uVar7 >> 2 & 0x3fff) / 0x19;
    uVar10 = (ulong)uVar2;
    *(undefined2 *)(local_67 + lVar11 + 1) =
         *(undefined2 *)
          (
          "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
          + ((ulong)(uVar7 + uVar2 * -100) & 0xffff) * 2);
  }
  if (uVar10 < 10) {
    lVar11 = lVar12 + -1;
    abStack_65[lVar12] = (byte)uVar10 | 0x30;
    if (uVar13 == 0 && uVar8 == 0) {
LAB_00905240:
      lVar11 = lVar11 + 0x14;
      goto joined_r0x00905210;
    }
  }
  else {
    lVar11 = lVar12 + -2;
    *(undefined2 *)(local_67 + lVar12 + 1) =
         *(undefined2 *)
          (
          "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
          + uVar10 * 2);
    if (uVar13 == 0 && uVar8 == 0) goto LAB_00905240;
  }
  memset(abStack_65 + 2,0x30,lVar11 - 1);
  uVar8 = uVar13 >> 0x13 | uVar8 << 0x2d;
  if (uVar8 < 0x1158e460913d) {
    lVar21 = 0;
  }
  uVar13 = lVar21 + uVar13;
  if (uVar13 >> 4 < 0x271) {
    lVar21 = 0x14;
  }
  else {
    lVar21 = 0x14;
    pbVar17 = abStack_65;
    uVar20 = uVar13;
    do {
      lVar21 = lVar21 + -4;
      uVar13 = uVar20 / 10000;
      uVar7 = (int)uVar20 + (int)uVar13 * -10000;
      uVar2 = (uVar7 >> 2 & 0x3fff) / 0x19;
      *(undefined2 *)(pbVar17 + -2) =
           *(undefined2 *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
            + (ulong)uVar2 * 2);
      *(undefined2 *)pbVar17 =
           *(undefined2 *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
            + ((ulong)(uVar7 + uVar2 * -100) & 0xffff) * 2);
      bVar1 = 99999999 < uVar20;
      pbVar17 = pbVar17 + -4;
      uVar20 = uVar13;
    } while (bVar1);
  }
  lVar12 = lVar21;
  if (99 < uVar13) {
    uVar7 = (uint)uVar13;
    lVar12 = lVar21 + -2;
    uVar2 = (uVar7 >> 2 & 0x3fff) / 0x19;
    uVar13 = (ulong)uVar2;
    *(undefined2 *)((long)&uStack_79 + lVar21) =
         *(undefined2 *)
          (
          "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
          + ((ulong)(uVar7 + uVar2 * -100) & 0xffff) * 2);
  }
  if (uVar13 < 10) {
    lVar11 = lVar12 + -1;
    *(byte *)((long)&uStack_79 + lVar12 + 1) = (byte)uVar13 | 0x30;
  }
  else {
    lVar11 = lVar12 + -2;
    *(undefined2 *)((long)&uStack_79 + lVar12) =
         *(undefined2 *)
          (
          "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
          + uVar13 * 2);
  }
  if (uVar8 < 0x1158e460913d) {
    lVar11 = lVar11 + 1;
  }
  else {
    memset(auStack_76,0x30,lVar11 - 1);
    lVar11 = 1;
    local_77 = 0x31;
  }
joined_r0x00905210:
  if ((long)param_3 < 0) {
    *(undefined1 *)((long)&uStack_79 + lVar11) = 0x2d;
    lVar11 = lVar11 + -1;
  }
  __n = 0x28 - lVar11;
  if (lVar11 == 0x28) {
    __dest = &DAT_00000001;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    __dest = (undefined1 *)FUN_004b25a4(__n,1);
    if (__dest == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(1,__n);
    }
    memcpy(__dest,(void *)((long)&uStack_79 + lVar11 + 1),__n);
  }
  *param_1 = __n;
  param_1[1] = (size_t)__dest;
  param_1[2] = __n;
  return;
}


// ===== 0090530c  <serde_json::value::ser::MapKeySerializer_as_serde::ser::Serializer>::serialize_none =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::ser::MapKeySerializer as serde::ser::Serializer>::serialize_none */

void __rustcall
<serde_json::value::ser::MapKeySerializer_as_serde::ser::Serializer>::serialize_none
          (undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 local_38 [3];
  
  local_38[0] = 0x11;
  uVar1 = <serde_json::error::[0]::serde_json::error::Error>::syntax(local_38,0,0);
  *param_1 = 0xffffffffffffffff;
  param_1[1] = uVar1;
  return;
}


// ===== 00905350  <serde_json::value::ser::MapKeySerializer_as_serde::ser::Serializer>::serialize_u128 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::ser::MapKeySerializer as serde::ser::Serializer>::serialize_u128 */

void __rustcall
<serde_json::value::ser::MapKeySerializer_as_serde::ser::Serializer>::serialize_u128
          (size_t *param_1,ulong param_2,ulong param_3)

{
  bool bVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined2 *puVar16;
  byte *pbVar17;
  ulong uVar18;
  size_t __n;
  undefined1 *__dest;
  undefined2 uStack_7a;
  byte local_78 [16];
  undefined1 local_68 [2];
  byte abStack_66 [17];
  undefined2 local_55 [2];
  
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_2;
  uVar9 = SUB168(auVar3 * ZEXT816(0x9598f4f1e8361973),8);
  uVar15 = param_2 * 0x760f253edb4ab0d2;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_2;
  uVar14 = SUB168(auVar4 * ZEXT816(0x760f253edb4ab0d2),8);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = param_3;
  uVar18 = SUB168(auVar5 * ZEXT816(0x760f253edb4ab0d2),8);
  uVar12 = param_3 * 0x760f253edb4ab0d2;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_3;
  uVar8 = SUB168(auVar6 * ZEXT816(0x9598f4f1e8361973),8);
  uVar13 = uVar12 + uVar14 + (ulong)CARRY8(uVar9,uVar15);
  if (CARRY8(uVar12,uVar14) || CARRY8(uVar12 + uVar14,(ulong)CARRY8(uVar9,uVar15))) {
    uVar18 = uVar18 + 1;
  }
  if (CARRY8(uVar9 + uVar15,param_3 * -0x6a670b0e17c9e68d)) {
    uVar8 = uVar8 + 1;
  }
  if (CARRY8(uVar13,uVar8)) {
    uVar18 = uVar18 + 1;
  }
  uVar9 = (param_2 >> 0x13 | param_3 << 0x2d) / 0x1158e460913d;
  if (0x7ffff < param_3) {
    uVar9 = uVar13 + uVar8 >> 0x3e | uVar18 << 2;
  }
  uVar8 = 0;
  if (0x7ffff < param_3) {
    uVar8 = uVar18 >> 0x3e;
  }
  param_2 = param_2 + uVar9 * 0x7538dcfb76180000;
  if (param_2 >> 4 < 0x271) {
    lVar10 = 0x14;
  }
  else {
    lVar10 = 0x14;
    puVar16 = local_55 + 1;
    uVar18 = param_2;
    do {
      lVar10 = lVar10 + -4;
      param_2 = uVar18 / 10000;
      uVar7 = (int)uVar18 + (int)param_2 * -10000;
      uVar2 = (uVar7 >> 2 & 0x3fff) / 0x19;
      puVar16[-1] = *(undefined2 *)
                     (
                     "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                     + (ulong)uVar2 * 2);
      *puVar16 = *(undefined2 *)
                  (
                  "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                  + ((ulong)(uVar7 + uVar2 * -100) & 0xffff) * 2);
      bVar1 = 99999999 < uVar18;
      puVar16 = puVar16 + -2;
      uVar18 = param_2;
    } while (bVar1);
  }
  lVar11 = lVar10;
  if (99 < param_2) {
    uVar7 = (uint)param_2;
    lVar11 = lVar10 + -2;
    uVar2 = (uVar7 >> 2 & 0x3fff) / 0x19;
    param_2 = (ulong)uVar2;
    *(undefined2 *)(local_68 + lVar10 + 1) =
         *(undefined2 *)
          (
          "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
          + ((ulong)(uVar7 + uVar2 * -100) & 0xffff) * 2);
  }
  if (param_2 < 10) {
    lVar10 = lVar11 + -1;
    abStack_66[lVar11] = (byte)param_2 | 0x30;
    if (uVar9 != 0 || uVar8 != 0) goto LAB_009054e4;
LAB_00905624:
    lVar10 = lVar10 + 0x13;
joined_r0x009055ec:
    if (lVar10 == 0x27) {
      __n = 0;
      __dest = &DAT_00000001;
      goto LAB_00905664;
    }
    __n = 0x27 - lVar10;
    pbVar17 = local_78 + lVar10;
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    __dest = (undefined1 *)FUN_004b25a4(__n,1);
  }
  else {
    lVar10 = lVar11 + -2;
    *(undefined2 *)(local_68 + lVar11 + 1) =
         *(undefined2 *)
          (
          "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
          + param_2 * 2);
    if (uVar9 == 0 && uVar8 == 0) goto LAB_00905624;
LAB_009054e4:
    memset(abStack_66 + 2,0x30,lVar10 - 1);
    uVar8 = uVar9 >> 0x13 | uVar8 << 0x2d;
    uVar9 = uVar9 + (uVar8 / 0x1158e460913d) * 0x7538dcfb76180000;
    if (uVar9 >> 4 < 0x271) {
      lVar10 = 0x14;
    }
    else {
      lVar10 = 0x14;
      pbVar17 = abStack_66;
      uVar18 = uVar9;
      do {
        lVar10 = lVar10 + -4;
        uVar9 = uVar18 / 10000;
        uVar7 = (int)uVar18 + (int)uVar9 * -10000;
        uVar2 = (uVar7 >> 2 & 0x3fff) / 0x19;
        *(undefined2 *)(pbVar17 + -2) =
             *(undefined2 *)
              (
              "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
              + (ulong)uVar2 * 2);
        *(undefined2 *)pbVar17 =
             *(undefined2 *)
              (
              "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
              + ((ulong)(uVar7 + uVar2 * -100) & 0xffff) * 2);
        bVar1 = 99999999 < uVar18;
        pbVar17 = pbVar17 + -4;
        uVar18 = uVar9;
      } while (bVar1);
    }
    lVar11 = lVar10;
    if (99 < uVar9) {
      uVar7 = (uint)uVar9;
      lVar11 = lVar10 + -2;
      uVar2 = (uVar7 >> 2 & 0x3fff) / 0x19;
      uVar9 = (ulong)uVar2;
      *(undefined2 *)((long)&uStack_7a + lVar10) =
           *(undefined2 *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
            + ((ulong)(uVar7 + uVar2 * -100) & 0xffff) * 2);
    }
    if (uVar9 < 10) {
      lVar10 = lVar11 + -1;
      *(byte *)((long)&uStack_7a + lVar11 + 1) = (byte)uVar9 | 0x30;
    }
    else {
      lVar10 = lVar11 + -2;
      *(undefined2 *)((long)&uStack_7a + lVar11) =
           *(undefined2 *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
            + uVar9 * 2);
    }
    if (uVar8 < 0x1158e460913d) goto joined_r0x009055ec;
    pbVar17 = local_78;
    memset((void *)((ulong)pbVar17 | 1),0x30,lVar10 - 1);
    local_78[0] = (byte)(uVar8 / 0x1158e460913d) | 0x30;
    __n = 0x27;
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    __dest = (undefined1 *)FUN_004b25a4(0x27,1);
  }
  if (__dest == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(1,__n);
  }
  memcpy(__dest,pbVar17,__n);
LAB_00905664:
  *param_1 = __n;
  param_1[1] = (size_t)__dest;
  param_1[2] = __n;
  return;
}


// ===== 009056fc  <serde_json::value::ser::MapKeySerializer_as_serde::ser::Serializer>::serialize_bytes =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::ser::MapKeySerializer as serde::ser::Serializer>::serialize_bytes */

void __rustcall
<serde_json::value::ser::MapKeySerializer_as_serde::ser::Serializer>::serialize_bytes
          (undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 local_38 [3];
  
  local_38[0] = 0x11;
  uVar1 = <serde_json::error::[0]::serde_json::error::Error>::syntax(local_38,0,0);
  *param_1 = 0xffffffffffffffff;
  param_1[1] = uVar1;
  return;
}


// ===== 00905740  <serde_json::value::ser::MapKeySerializer_as_serde::ser::Serializer>::serialize_tuple =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::ser::MapKeySerializer as serde::ser::Serializer>::serialize_tuple */

void __rustcall
<serde_json::value::ser::MapKeySerializer_as_serde::ser::Serializer>::serialize_tuple(void)

{
  undefined8 local_28 [3];
  
  local_28[0] = 0x11;
  <serde_json::error::[0]::serde_json::error::Error>::syntax(local_28,0,0);
  return;
}


// ===== 00905770  <serde_json::value::ser::MapKeySerializer_as_serde::ser::Serializer>::serialize_struct =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::ser::MapKeySerializer as serde::ser::Serializer>::serialize_struct */

void __rustcall
<serde_json::value::ser::MapKeySerializer_as_serde::ser::Serializer>::serialize_struct(void)

{
  undefined8 local_28 [3];
  
  local_28[0] = 0x11;
  <serde_json::error::[0]::serde_json::error::Error>::syntax(local_28,0,0);
  return;
}


// ===== 009057a0  <serde_json::value::ser::MapKeySerializer_as_serde::ser::Serializer>::serialize_unit_struct =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::ser::MapKeySerializer as serde::ser::Serializer>::serialize_unit_struct */

void __rustcall
<serde_json::value::ser::MapKeySerializer_as_serde::ser::Serializer>::serialize_unit_struct
          (undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 local_38 [3];
  
  local_38[0] = 0x11;
  uVar1 = <serde_json::error::[0]::serde_json::error::Error>::syntax(local_38,0,0);
  *param_1 = 0xffffffffffffffff;
  param_1[1] = uVar1;
  return;
}


// ===== 009057e4  <serde_json::value::ser::MapKeySerializer_as_serde::ser::Serializer>::serialize_tuple_variant =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::ser::MapKeySerializer as serde::ser::Serializer>::serialize_tuple_variant */

void __rustcall
<serde_json::value::ser::MapKeySerializer_as_serde::ser::Serializer>::serialize_tuple_variant(void)

{
  undefined8 local_28 [3];
  
  local_28[0] = 0x11;
  <serde_json::error::[0]::serde_json::error::Error>::syntax(local_28,0,0);
  return;
}


// ===== 00905814  <serde_json::value::ser::SerializeMap_as_serde::ser::SerializeStruct>::end =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::ser::SerializeMap as serde::ser::SerializeStruct>::end */

void __rustcall
<serde_json::value::ser::SerializeMap_as_serde::ser::SerializeStruct>::end
          (undefined1 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined7 uStack_20;
  undefined1 local_19;
  undefined7 uStack_18;
  undefined1 uStack_11;
  
  lVar4 = param_2[4];
  lVar3 = param_2[3];
  lVar2 = param_2[5];
  lVar1 = *param_2;
  *param_1 = 5;
  uStack_11 = (undefined1)lVar4;
  local_19 = (undefined1)lVar3;
  uStack_18 = (undefined7)((ulong)lVar3 >> 8);
  *(ulong *)(param_1 + 9) = CONCAT17(uStack_11,uStack_18);
  *(ulong *)(param_1 + 1) = CONCAT17(local_19,uStack_20);
  *(long *)(param_1 + 0x18) = lVar2;
  *(long *)(param_1 + 0x10) = lVar4;
  if ((lVar1 != -1) && (lVar1 != 0)) {
    free((void *)param_2[1]);
    return;
  }
  return;
}


// ===== 00905868  <serde_json::value::ser::SerializeStructVariant_as_serde::ser::SerializeStructVariant>::end =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::ser::SerializeStructVariant as serde::ser::SerializeStructVariant>::end */

void __rustcall
<serde_json::value::ser::SerializeStructVariant_as_serde::ser::SerializeStructVariant>::end
          (undefined1 *param_1,undefined8 *param_2)

{
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 auStack_80 [32];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 local_40;
  undefined6 uStack_3f;
  undefined1 uStack_39;
  undefined7 uStack_38;
  undefined1 uStack_31;
  undefined7 uStack_30;
  undefined1 uStack_29;
  undefined7 uStack_28;
  undefined1 uStack_21;
  
  local_50 = param_2[2];
  uStack_58 = param_2[1];
  local_60 = *param_2;
  local_98 = 0;
  local_88 = 0;
  uStack_30 = (undefined7)param_2[4];
  uStack_29 = (undefined1)((ulong)param_2[4] >> 0x38);
  uStack_38 = (undefined7)param_2[3];
  uStack_31 = (undefined1)((ulong)param_2[3] >> 0x38);
  uStack_28 = (undefined7)param_2[5];
  uStack_21 = (undefined1)((ulong)param_2[5] >> 0x38);
  local_40 = 5;
                    /* try { // try from 009058ac to 009058c7 has its CatchHandler @ 00905900 */
  FUN_0090eb24(auStack_80,&local_98,&local_60,&local_40);
  FUN_00903350(auStack_80);
  *param_1 = 5;
  uStack_31 = (undefined1)uStack_90;
  uStack_39 = (undefined1)local_98;
  uStack_38 = (undefined7)((ulong)local_98 >> 8);
  *(ulong *)(param_1 + 9) = CONCAT17(uStack_31,uStack_38);
  *(ulong *)(param_1 + 1) = CONCAT17(uStack_39,CONCAT61(uStack_3f,local_40));
  *(undefined8 *)(param_1 + 0x18) = local_88;
  *(undefined8 *)(param_1 + 0x10) = uStack_90;
  return;
}


// ===== 00905918  <serde_json::value::ser::Serializer_as_serde::ser::Serializer>::serialize_seq =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::ser::Serializer as serde::ser::Serializer>::serialize_seq */

void __rustcall
<serde_json::value::ser::Serializer_as_serde::ser::Serializer>::serialize_seq
          (ulong *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if ((param_2 & 1) == 0) {
    param_3 = 0;
  }
  uVar2 = param_3 * 0x20;
  if (param_3 >> 0x3b == 0 && uVar2 < 0x7ffffffffffffff9) {
    if (uVar2 == 0) {
      *param_1 = 0;
      param_1[1] = 8;
      param_1[2] = 0;
      return;
    }
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar3 = 8;
    uVar1 = FUN_004b25a4(uVar2,8);
    if (uVar1 != 0) {
      *param_1 = param_3;
      param_1[1] = uVar1;
      param_1[2] = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar3,uVar2);
}


// ===== 009059ac  <serde_json::value::ser::Serializer_as_serde::ser::Serializer>::serialize_i128 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::ser::Serializer as serde::ser::Serializer>::serialize_i128 */

void __rustcall
<serde_json::value::ser::Serializer_as_serde::ser::Serializer>::serialize_i128
          (undefined1 *param_1,ulong param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 local_38 [3];
  
  if (param_3 == 0) {
    *(undefined8 *)(param_1 + 8) = 0;
    *(ulong *)(param_1 + 0x10) = param_2;
    *param_1 = 2;
    return;
  }
  if (CARRY8(param_3,(ulong)(0x7fffffffffffffff < param_2))) {
    *param_1 = 2;
    *(undefined8 *)(param_1 + 8) = 1;
    *(ulong *)(param_1 + 0x10) = param_2;
    return;
  }
  local_38[0] = 0xe;
  uVar1 = <serde_json::error::[0]::serde_json::error::Error>::syntax(local_38,0,0);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *param_1 = 0xff;
  return;
}


// ===== 00905a30  <serde_json::value::ser::Serializer_as_serde::ser::Serializer>::serialize_u128 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::ser::Serializer as serde::ser::Serializer>::serialize_u128 */

void __rustcall
<serde_json::value::ser::Serializer_as_serde::ser::Serializer>::serialize_u128
          (undefined1 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 local_38 [3];
  
  if (param_3 == 0) {
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = param_2;
    *param_1 = 2;
    return;
  }
  local_38[0] = 0xe;
  uVar1 = <serde_json::error::[0]::serde_json::error::Error>::syntax(local_38,0,0);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *param_1 = 0xff;
  return;
}


// ===== 00905a90  <serde_json::value::ser::Serializer_as_serde::ser::Serializer>::serialize_bytes =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::ser::Serializer as serde::ser::Serializer>::serialize_bytes */

void __rustcall
<serde_json::value::ser::Serializer_as_serde::ser::Serializer>::serialize_bytes
          (undefined1 *param_1,byte *param_2,ulong param_3)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  ulong *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  uVar5 = param_3 * 0x20;
  uVar6 = 0;
  if ((param_3 >> 0x3b == 0) && (uVar5 < 0x7ffffffffffffff9)) {
    if (uVar5 == 0) {
      lVar3 = 8;
      uVar2 = 0;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar6 = 8;
      lVar3 = FUN_004b25a4(uVar5,8);
      uVar2 = param_3;
      if (lVar3 == 0) goto LAB_00905b04;
    }
    if (param_3 != 0) {
      puVar4 = (ulong *)(lVar3 + 0x10);
      uVar5 = param_3;
      do {
        bVar1 = *param_2;
        *(undefined1 *)(puVar4 + -2) = 2;
        uVar5 = uVar5 - 1;
        puVar4[-1] = 0;
        *puVar4 = (ulong)bVar1;
        puVar4 = puVar4 + 4;
        param_2 = param_2 + 1;
      } while (uVar5 != 0);
    }
    *(ulong *)(param_1 + 8) = uVar2;
    *(long *)(param_1 + 0x10) = lVar3;
    *param_1 = 4;
    *(ulong *)(param_1 + 0x18) = param_3;
    return;
  }
LAB_00905b04:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar6,uVar5);
}


// ===== 00905b64  <serde_json::value::ser::Serializer_as_serde::ser::Serializer>::serialize_tuple =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::ser::Serializer as serde::ser::Serializer>::serialize_tuple */

void __rustcall
<serde_json::value::ser::Serializer_as_serde::ser::Serializer>::serialize_tuple
          (ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2 * 0x20;
  uVar3 = 0;
  if ((param_2 >> 0x3b == 0) && (uVar2 < 0x7ffffffffffffff9)) {
    if (uVar2 == 0) {
      *param_1 = 0;
      param_1[1] = 8;
      param_1[2] = 0;
      return;
    }
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar3 = 8;
    uVar1 = FUN_004b25a4(uVar2,8);
    if (uVar1 != 0) {
      *param_1 = param_2;
      param_1[1] = uVar1;
      param_1[2] = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar3,uVar2);
}


// ===== 00905bf4  <serde_json::value::ser::Serializer_as_serde::ser::Serializer>::serialize_tuple_struct =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::ser::Serializer as serde::ser::Serializer>::serialize_tuple_struct */

void __rustcall
<serde_json::value::ser::Serializer_as_serde::ser::Serializer>::serialize_tuple_struct
          (ulong *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = param_4 * 0x20;
  uVar3 = 0;
  if ((param_4 >> 0x3b == 0) && (uVar2 < 0x7ffffffffffffff9)) {
    if (uVar2 == 0) {
      *param_1 = 0;
      param_1[1] = 8;
      param_1[2] = 0;
      return;
    }
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar3 = 8;
    uVar1 = FUN_004b25a4(uVar2,8);
    if (uVar1 != 0) {
      *param_1 = param_4;
      param_1[1] = uVar1;
      param_1[2] = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar3,uVar2);
}


// ===== 00905c84  <serde_json::value::ser::Serializer_as_serde::ser::Serializer>::serialize_tuple_variant =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::ser::Serializer as serde::ser::Serializer>::serialize_tuple_variant */

void __rustcall
<serde_json::value::ser::Serializer_as_serde::ser::Serializer>::serialize_tuple_variant
          (size_t *param_1)

{
  undefined1 *__dest;
  size_t sVar1;
  void *in_x3;
  size_t in_x4;
  ulong in_x5;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((long)in_x4 < 0) {
    uVar3 = 0;
LAB_00905ca4:
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar3,in_x4);
  }
  if (in_x4 == 0) {
    __dest = &DAT_00000001;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar3 = 1;
    __dest = (undefined1 *)FUN_004b25a4(in_x4,1);
    if (__dest == (undefined1 *)0x0) goto LAB_00905ca4;
    memcpy(__dest,in_x3,in_x4);
  }
  uVar3 = 0;
  uVar2 = in_x5 << 5;
  if (in_x5 >> 0x3b == 0) {
    uVar3 = 0;
    uVar2 = in_x5 * 0x20;
    if (uVar2 < 0x7ffffffffffffff9) {
      if (uVar2 == 0) {
        in_x5 = 0;
        sVar1 = 8;
      }
      else {
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        uVar3 = 8;
        sVar1 = FUN_004b25a4(uVar2,8);
        if (sVar1 == 0) goto LAB_00905d38;
      }
      *param_1 = in_x4;
      param_1[1] = (size_t)__dest;
      param_1[2] = in_x4;
      param_1[3] = in_x5;
      param_1[4] = sVar1;
      param_1[5] = 0;
      return;
    }
  }
LAB_00905d38:
                    /* try { // try from 00905d38 to 00905d43 has its CatchHandler @ 00905d70 */
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar3,uVar2);
}


// ===== 00905d90  <serde_json::value::ser::Serializer_as_serde::ser::Serializer>::serialize_struct_variant =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::ser::Serializer as serde::ser::Serializer>::serialize_struct_variant */

void __rustcall
<serde_json::value::ser::Serializer_as_serde::ser::Serializer>::serialize_struct_variant
          (size_t *param_1)

{
  undefined1 *__dest;
  void *in_x3;
  size_t in_x4;
  undefined8 uVar1;
  
  if ((long)in_x4 < 0) {
    uVar1 = 0;
LAB_00905db0:
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar1,in_x4);
  }
  if (in_x4 == 0) {
    __dest = &DAT_00000001;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar1 = 1;
    __dest = (undefined1 *)FUN_004b25a4(in_x4,1);
    if (__dest == (undefined1 *)0x0) goto LAB_00905db0;
    memcpy(__dest,in_x3,in_x4);
  }
  *param_1 = in_x4;
  param_1[1] = (size_t)__dest;
  param_1[2] = in_x4;
  param_1[3] = 0;
  param_1[5] = 0;
  return;
}


// ===== 00905e1c  FUN_00905e1c =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00905e1c(ulong *param_1,void *param_2,ulong param_3,undefined8 param_4,undefined1 param_5)

{
  char *pcVar1;
  byte *pbVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  char *pcVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  size_t sVar17;
  ulong uVar18;
  ulong local_e8;
  ulong uStack_e0;
  ulong local_d8;
  long local_d0;
  ulong uStack_c8;
  ulong local_b8;
  ulong local_b0;
  ulong uStack_a8;
  ulong local_98;
  long local_88;
  ulong uStack_80;
  long local_78;
  ulong uStack_70;
  
  local_e8 = 0;
  uStack_e0 = 1;
  local_d8 = 0;
                    /* try { // try from 00905e54 to 00905e6f has its CatchHandler @ 009065f4 */
  <core::str::pattern::[u]::core::str::pattern::StrSearcher>::new
            (&local_d0,param_2,param_3,param_4,2);
  if (local_d0 == 1) {
    uVar18 = 0;
    uVar14 = 0;
    lVar8 = 0;
    if (uStack_c8 <= uStack_70) {
      lVar8 = uStack_70 - uStack_c8;
    }
    uVar6 = uStack_a8 + (uStack_70 - 1);
    uVar15 = uStack_a8;
    uVar16 = local_98;
    while (uVar16 == 0xffffffffffffffff) {
      if (uStack_80 <= uVar6) goto LAB_00906184;
      if (uStack_c8 - 1 < uStack_70) {
LAB_00906020:
        if ((local_b0 >> ((ulong)*(byte *)(local_88 + uVar6) & 0x3f) & 1) == 0) {
          uVar15 = uVar15 + uStack_70;
        }
        else {
          lVar7 = -uVar15;
          lVar10 = uStack_c8 + uVar15;
          lVar12 = lVar8;
          pcVar13 = (char *)(local_78 + uStack_c8);
          do {
            if (lVar12 == 0) {
              uVar6 = uStack_c8;
              goto LAB_00906070;
            }
            cVar3 = *pcVar13;
            pcVar1 = (char *)(local_88 + lVar10);
            lVar7 = lVar7 + -1;
            lVar10 = lVar10 + 1;
            lVar12 = lVar12 + -1;
            pcVar13 = pcVar13 + 1;
          } while (cVar3 == *pcVar1);
          uVar15 = -lVar7;
        }
        goto LAB_00906010;
      }
LAB_009060a8:
      if ((local_b0 >> ((ulong)*(byte *)(local_88 + uVar6) & 0x3f) & 1) == 0) {
        uVar15 = uVar15 + uStack_70;
        uVar6 = uVar15 + (uStack_70 - 1);
        goto joined_r0x009060f4;
      }
      lVar7 = -uVar15;
      lVar10 = uStack_c8 + uVar15;
      lVar12 = lVar8;
      pcVar13 = (char *)(local_78 + uStack_c8);
      while (lVar12 != 0) {
        cVar3 = *pcVar13;
        pcVar1 = (char *)(local_88 + lVar10);
        lVar7 = lVar7 + -1;
        lVar10 = lVar10 + 1;
        lVar12 = lVar12 + -1;
        pcVar13 = pcVar13 + 1;
        if (cVar3 != *pcVar1) goto code_r0x009060e4;
      }
      uVar6 = uStack_c8 - 1;
      if (uStack_c8 != 0) goto LAB_009065d4;
LAB_00906100:
      uVar16 = 0xffffffffffffffff;
      sVar17 = uVar15 - uVar14;
      if (local_e8 - uVar18 < sVar17) {
LAB_00906118:
                    /* try { // try from 00906118 to 0090615b has its CatchHandler @ 009065ec */
        FUN_00907e5c(&local_e8,uVar18,uVar15 - uVar14,1,1);
        uVar18 = local_d8;
      }
joined_r0x00906140:
      if (uVar15 != uVar14) {
        memcpy((void *)(uStack_e0 + uVar18),(void *)((long)param_2 + uVar14),sVar17);
      }
      local_d8 = uVar18 + sVar17;
      if (local_e8 == local_d8) {
        FUN_00907e5c(&local_e8,local_d8,1,1,1);
      }
      uVar14 = uVar15 + uStack_70;
      uVar18 = local_d8 + 1;
      *(undefined1 *)(uStack_e0 + local_d8) = param_5;
      uVar6 = uVar14 + (uStack_70 - 1);
      local_d8 = uVar18;
      uVar15 = uVar14;
    }
    if (uVar6 < uStack_80) {
LAB_00905ee8:
      if ((local_b0 >> ((ulong)*(byte *)(local_88 + uVar6) & 0x3f) & 1) == 0) {
        uVar16 = 0;
        uVar9 = uVar15 + uStack_70;
      }
      else {
        uVar6 = uVar16;
        if (uVar16 <= uStack_c8) {
          uVar6 = uStack_c8;
        }
        uVar9 = (uVar15 - uStack_c8) + uVar6;
        do {
          if (uStack_70 <= uVar6) {
            uVar9 = uStack_c8;
            goto LAB_00905f3c;
          }
          pcVar13 = (char *)(local_78 + uVar6);
          pcVar1 = (char *)(local_88 + uVar15 + uVar6);
          uVar6 = uVar6 + 1;
          uVar9 = uVar9 + 1;
        } while (*pcVar13 == *pcVar1);
        uVar16 = 0;
      }
      goto LAB_00905ed4;
    }
LAB_00906184:
    sVar17 = param_3 - uVar14;
    uStack_80 = uVar14;
    if (sVar17 <= local_e8 - uVar18) goto joined_r0x009061a4;
  }
  else {
    if (((uint)local_b8 >> 0x10 & 1) == 0) {
      uVar18 = uStack_c8;
      if (uStack_c8 != 0) {
        if (uStack_c8 < uStack_80) {
          if (*(char *)(local_88 + uStack_c8) + 0x40 < 0 !=
              SCARRY4((int)*(char *)(local_88 + uStack_c8),0x40)) goto LAB_009065b0;
        }
        else if (uStack_c8 != uStack_80) goto LAB_009065b0;
      }
      if (uStack_c8 == uStack_80) {
        if ((local_b8 & 1) == 0) goto LAB_00906200;
      }
      else {
        pbVar2 = (byte *)(local_88 + uStack_c8);
        uVar5 = (uint)*pbVar2;
        if ((char)*pbVar2 < '\0') {
          if (uVar5 < 0xe0) {
            uVar5 = pbVar2[1] & 0x3f | (uVar5 & 0x1f) << 6;
          }
          else {
            uVar11 = pbVar2[2] & 0x3f | (pbVar2[1] & 0x3f) << 6;
            if (uVar5 < 0xf0) {
              uVar5 = uVar11 | (uVar5 & 0x1f) << 0xc;
            }
            else {
              uVar5 = pbVar2[3] & 0x3f | uVar11 << 6 | (uVar5 & 7) << 0x12;
            }
          }
        }
        if ((local_b8 & 1) == 0) {
          if (uVar5 < 0x80) {
            lVar8 = 1;
          }
          else if (uVar5 < 0x800) {
            lVar8 = 2;
          }
          else {
            lVar8 = 3;
            if (0xffff < uVar5) {
              lVar8 = 4;
            }
          }
          uStack_c8 = lVar8 + uStack_c8;
          uVar18 = uStack_c8;
          if (uStack_c8 != 0) {
            if (uStack_c8 < uStack_80) {
              if (*(char *)(local_88 + uStack_c8) + 0x40 < 0 !=
                  SCARRY4((int)*(char *)(local_88 + uStack_c8),0x40)) goto LAB_009065b0;
            }
            else if (uStack_c8 != uStack_80) goto LAB_009065b0;
          }
          uVar18 = uStack_80;
          if (uStack_c8 != uStack_80) {
            uVar18 = uStack_c8;
          }
        }
      }
      if (uVar18 == 0) {
        local_d8 = 0;
        if (local_e8 == 0) {
LAB_00906590:
                    /* try { // try from 00906590 to 009065a3 has its CatchHandler @ 009065e8 */
          FUN_00907e5c(&local_e8,local_d8,1,1,1);
        }
      }
      else {
                    /* try { // try from 00906550 to 00906567 has its CatchHandler @ 009065e8 */
        FUN_00907e5c(&local_e8,0,uVar18,1,1);
        uVar14 = local_d8;
        memcpy((void *)(uStack_e0 + local_d8),param_2,uVar18);
        local_d8 = uVar14 + uVar18;
        if (local_e8 == local_d8) goto LAB_00906590;
      }
      lVar8 = local_d8 + 1;
      *(undefined1 *)(uStack_e0 + local_d8) = param_5;
      uVar14 = uVar18;
      local_d8 = lVar8;
      if (uVar18 != 0) goto LAB_00906398;
LAB_009063b4:
      do {
        do {
          if (uVar14 == uStack_80) {
            sVar17 = param_3 - uStack_80;
            uVar14 = uStack_80;
            uVar18 = local_d8;
            if (local_e8 - local_d8 < sVar17) goto LAB_0090621c;
            goto joined_r0x009061a4;
          }
          pbVar2 = (byte *)(local_88 + uVar14);
          bVar4 = *pbVar2;
          if ((char)bVar4 < '\0') {
            if (bVar4 < 0xe0) {
              uVar5 = pbVar2[1] & 0x3f | (bVar4 & 0x1f) << 6;
            }
            else {
              uVar11 = (uint)bVar4;
              uVar5 = pbVar2[2] & 0x3f | (pbVar2[1] & 0x3f) << 6;
              if (uVar11 < 0xf0) {
                uVar5 = uVar5 | (uVar11 & 0x1f) << 0xc;
              }
              else {
                uVar5 = pbVar2[3] & 0x3f | uVar5 << 6 | (uVar11 & 7) << 0x12;
              }
            }
            if (uVar5 < 0x80) goto LAB_009063c8;
            if (uVar5 < 0x800) {
              uVar6 = uVar14 + 2;
            }
            else {
              lVar8 = 3;
              if (0xffff < uVar5) {
                lVar8 = 4;
              }
              uVar6 = lVar8 + uVar14;
            }
          }
          else {
LAB_009063c8:
            uVar6 = uVar14 + 1;
          }
          uVar18 = uVar6;
          if (uVar6 != 0) {
            if (uVar6 < uStack_80) {
              if (*(char *)(local_88 + uVar6) + 0x40 < 0 !=
                  SCARRY4((int)*(char *)(local_88 + uVar6),0x40)) goto LAB_009065b0;
            }
            else if (uVar6 != uStack_80) goto LAB_009065b0;
          }
          uVar18 = uStack_80;
          if (uVar6 != uStack_80) {
            uVar18 = uVar6;
          }
          uVar15 = uVar18 - uVar14;
          uVar6 = local_d8;
          if (local_e8 - local_d8 < uVar15) {
                    /* try { // try from 009064d8 to 00906513 has its CatchHandler @ 009065f0 */
            FUN_00907e5c(&local_e8,local_d8,uVar18 - uVar14,1,1);
            uVar6 = local_d8;
          }
          if (uVar18 != uVar14) {
            local_d8 = uVar6;
            memcpy((void *)(uStack_e0 + uVar6),(void *)((long)param_2 + uVar14),uVar15);
          }
          local_d8 = uVar6 + uVar15;
          if (local_e8 == local_d8) {
            FUN_00907e5c(&local_e8,local_d8,1,1,1);
            *(undefined1 *)(uStack_e0 + local_d8) = param_5;
          }
          else {
            *(undefined1 *)(uStack_e0 + local_d8) = param_5;
          }
          local_d8 = local_d8 + 1;
          uVar14 = uVar18;
        } while (uVar18 == 0);
LAB_00906398:
        uVar14 = uVar18;
        if (uVar18 < uStack_80) {
          if (*(char *)(local_88 + uVar18) + 0x40 < 0 !=
              SCARRY4((int)*(char *)(local_88 + uVar18),0x40)) break;
          goto LAB_009063b4;
        }
      } while (uVar18 == uStack_80);
LAB_009065b0:
                    /* try { // try from 009065b0 to 009065e3 has its CatchHandler @ 009065f8 */
                    /* WARNING: Subroutine does not return */
      core::str::slice_error_fail
                (local_88,uStack_80,uVar18,uStack_80,
                 &PTR_s__nix_store_8006w282fgsx3273c878b_00af0250);
    }
LAB_00906200:
    uStack_80 = 0;
    uVar14 = uStack_80;
    sVar17 = param_3;
    uVar18 = 0;
    if (param_3 <= local_e8) goto joined_r0x009061a4;
  }
LAB_0090621c:
                    /* try { // try from 0090621c to 00906233 has its CatchHandler @ 009065f4 */
  FUN_00907e5c(&local_e8,uVar18,param_3 - uVar14,1,1);
  uStack_80 = uVar14;
  uVar18 = local_d8;
joined_r0x009061a4:
  if (param_3 != uStack_80) {
    memcpy((void *)(uStack_e0 + uVar18),(void *)((long)param_2 + uStack_80),sVar17);
  }
  param_1[1] = uStack_e0;
  *param_1 = local_e8;
  param_1[2] = uVar18 + sVar17;
  return;
  while (pcVar13 = (char *)(local_78 + -1 + uVar6),
        pcVar1 = (char *)(local_88 + -1 + uVar15 + uVar6), uVar6 = uVar6 - 1, *pcVar13 == *pcVar1) {
LAB_00906070:
    if (uVar6 == 0) goto LAB_00906100;
  }
  uVar15 = uVar15 + local_b8;
LAB_00906010:
  uVar6 = uVar15 + (uStack_70 - 1);
  if (uStack_80 <= uVar6) goto LAB_00906184;
  goto LAB_00906020;
code_r0x009060e4:
  uVar15 = -lVar7;
  uVar6 = uVar15 + (uStack_70 - 1);
joined_r0x009060f4:
  if (uStack_80 <= uVar6) goto LAB_00906184;
  goto LAB_009060a8;
LAB_00905f3c:
  do {
    uVar6 = uVar9 - 1;
    if (uVar9 <= uVar16) {
      uVar16 = 0;
      sVar17 = uVar15 - uVar14;
      if (local_e8 - uVar18 < sVar17) goto LAB_00906118;
      goto joined_r0x00906140;
    }
    if (uStack_70 <= uVar6) {
LAB_009065d4:
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (uVar6,uStack_70,&PTR_s__nix_store_8006w282fgsx3273c878b_00af0200);
    }
    uVar9 = uVar6;
  } while (*(char *)(local_78 + uVar6) == *(char *)(local_88 + uVar15 + uVar6));
  uVar9 = uVar15 + local_b8;
  uVar16 = uStack_70 - local_b8;
LAB_00905ed4:
  uVar6 = uVar9 + (uStack_70 - 1);
  uVar15 = uVar9;
  if (uStack_80 <= uVar6) goto LAB_00906184;
  goto LAB_00905ee8;
}


// ===== 00906618  FUN_00906618 =====

void FUN_00906618(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  <serde_json::value::de::[l]::serde_json::value::Value>::unexpected(auStack_38);
  <serde_json::error::Error_as_serde::de::Error>::invalid_type(auStack_38,param_2,&DAT_00af0218);
  return;
}


// ===== 00906658  FUN_00906658 =====

void FUN_00906658(long *param_1)

{
  ulong uVar1;
  long local_28;
  
  if (*param_1 == 1) {
    uVar1 = param_1[1] & 3;
    if ((1 < uVar1 - 2) && (uVar1 != 0)) {
      local_28 = param_1[1] - 1;
                    /* try { // try from 009066c8 to 009066cf has its CatchHandler @ 009066f0 */
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
    }
  }
  else if ((*param_1 == 0) && (param_1[2] != 0)) {
    free((void *)param_1[1]);
  }
  free(param_1);
  return;
}


// ===== 0090670c  FUN_0090670c =====

void FUN_0090670c(byte *param_1)

{
  void *__ptr;
  byte bVar1;
  void *pvVar2;
  long lVar3;
  ulong local_88 [3];
  undefined8 local_70;
  ulong local_68;
  undefined8 local_60;
  long lStack_58;
  undefined8 local_50;
  undefined8 local_48;
  
  bVar1 = *param_1;
  if (2 < bVar1) {
    if (bVar1 == 3) {
      if (*(long *)(param_1 + 8) != 0) {
        free(*(void **)(param_1 + 0x10));
        return;
      }
    }
    else if (bVar1 == 4) {
      __ptr = *(void **)(param_1 + 0x10);
      lVar3 = *(long *)(param_1 + 0x18) + 1;
      pvVar2 = __ptr;
      while (lVar3 = lVar3 + -1, lVar3 != 0) {
                    /* try { // try from 00906758 to 0090675b has its CatchHandler @ 0090680c */
        FUN_00907ca8(pvVar2);
        pvVar2 = (void *)((long)pvVar2 + 0x20);
      }
      if (*(long *)(param_1 + 8) != 0) {
        free(__ptr);
        return;
      }
    }
    else {
      lVar3 = *(long *)(param_1 + 8);
      if (lVar3 == 0) {
        local_48 = 0;
      }
      else {
        local_70 = *(undefined8 *)(param_1 + 0x10);
        local_48 = *(undefined8 *)(param_1 + 0x18);
        local_88[1] = 0;
        local_60 = 0;
        local_88[2] = lVar3;
        lStack_58 = lVar3;
        local_50 = local_70;
      }
      local_88[0] = (ulong)(lVar3 != 0);
      local_68 = local_88[0];
      FUN_0090e1c4(local_88);
    }
  }
  return;
}


// ===== 00906850  FUN_00906850 =====

void FUN_00906850(ulong param_1)

{
  long local_18;
  
  if ((1 < (param_1 & 3) - 2) && ((param_1 & 3) != 0)) {
    local_18 = param_1 - 1;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
  }
  return;
}


// ===== 00906898  <serde_json::value::[0]::serde_json::value::Value>::pointer_mut =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::[0]::serde_json::value::Value>::pointer_mut */

char * __rustcall
<serde_json::value::[0]::serde_json::value::Value>::pointer_mut
          (char *param_1,char *param_2,long param_3)

{
  char cVar1;
  undefined8 *puVar2;
  size_t __n;
  long lVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  byte *__s1;
  void *__ptr;
  int iVar7;
  long lVar8;
  char *pcVar9;
  ulong uVar10;
  ulong uVar11;
  byte *pbVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined1 auVar18 [16];
  undefined8 local_e0;
  undefined8 uStack_d8;
  long local_d0;
  char *pcStack_c8;
  long local_c0;
  undefined8 uStack_b8;
  long local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined2 local_98;
  long local_90;
  byte *pbStack_88;
  ulong local_80;
  long local_78;
  void *local_70;
  undefined8 uStack_68;
  
  if (param_3 != 0) {
    if (*param_2 == '/') {
      uStack_b8 = 0;
      local_a8 = 0x2f0000002f;
      local_a0 = 1;
      local_98 = 1;
      local_e0 = 0;
      uStack_d8 = 0;
      local_d0 = param_3;
      pcStack_c8 = param_2;
      local_c0 = param_3;
      local_b0 = param_3;
      lVar8 = FUN_00908b44((ulong)&local_e0 | 8,0);
      if (lVar8 == 0) {
        pcVar9 = (char *)FUN_009072d8((ulong)&local_e0 | 8);
        while (pcVar9 != (char *)0x0) {
          auVar18 = FUN_009072d8((ulong)&local_e0 | 8);
          if (auVar18._0_8_ == 0) {
            return param_1;
          }
          FUN_00905e1c(&local_78,auVar18._0_8_,auVar18._8_8_,"~1",0x2f);
          __ptr = local_70;
                    /* try { // try from 0090694c to 00906963 has its CatchHandler @ 00906b54 */
          FUN_00905e1c(&local_90,local_70,uStack_68,"~0",0x7e);
          if (local_78 != 0) {
            free(__ptr);
          }
          uVar10 = local_80;
          __s1 = pbStack_88;
          lVar8 = local_90;
          if (*param_1 == '\x05') {
            lVar17 = *(long *)(param_1 + 8);
            if (lVar17 != 0) {
              lVar15 = *(long *)(param_1 + 0x10);
              do {
                uVar5 = *(ushort *)(lVar17 + 0x272);
                lVar14 = lVar17 + 0x168;
                pcVar9 = (char *)(lVar17 + -0x20);
                uVar16 = 0xffffffffffffffff;
                lVar13 = (ulong)uVar5 * 0x18;
                do {
                  uVar11 = (ulong)uVar5;
                  if (lVar13 == 0) goto LAB_00906a58;
                  puVar2 = (undefined8 *)(lVar14 + 8);
                  uVar11 = *(ulong *)(lVar14 + 0x10);
                  lVar14 = lVar14 + 0x18;
                  __n = uVar10;
                  if (uVar11 <= uVar10) {
                    __n = uVar11;
                  }
                  iVar7 = memcmp(__s1,(void *)*puVar2,__n);
                  pcVar9 = pcVar9 + 0x20;
                  uVar16 = uVar16 + 1;
                  lVar13 = lVar13 + -0x18;
                  lVar3 = uVar10 - uVar11;
                  if (iVar7 != 0) {
                    lVar3 = (long)iVar7;
                  }
                  cVar1 = 0 < lVar3;
                  if (lVar3 < 0) {
                    cVar1 = -1;
                  }
                } while (cVar1 == '\x01');
                uVar11 = uVar16;
                if (cVar1 == '\0') goto joined_r0x00906b18;
LAB_00906a58:
                if (lVar15 == 0) break;
                lVar15 = lVar15 + -1;
                lVar17 = *(long *)(lVar17 + uVar11 * 8 + 0x278);
              } while( true );
            }
LAB_00906b08:
            pcVar9 = (char *)0x0;
          }
          else {
            if ((((*param_1 != '\x04') || (local_80 == 0)) || (bVar4 = *pbStack_88, bVar4 == 0x2b))
               || ((local_80 != 1 && (bVar4 == 0x30)))) goto LAB_00906b08;
            if (local_80 == 1) {
              if (bVar4 != 0x2d) goto LAB_00906a74;
              goto LAB_00906b08;
            }
            if (local_80 < 0x11) {
LAB_00906a74:
              uVar10 = 0;
              pbVar12 = pbStack_88;
              uVar16 = local_80;
              do {
                if (9 < *pbVar12 - 0x30) goto LAB_00906b08;
                uVar16 = uVar16 - 1;
                uVar10 = uVar10 * 10 + (ulong)(*pbVar12 - 0x30);
                pbVar12 = pbVar12 + 1;
              } while (uVar16 != 0);
LAB_00906aa0:
              if (uVar10 < *(ulong *)(param_1 + 0x18)) {
                pcVar9 = (char *)(*(long *)(param_1 + 0x10) + uVar10 * 0x20);
              }
              else {
                pcVar9 = (char *)0x0;
              }
            }
            else {
              uVar10 = 0;
              pbVar12 = pbStack_88;
              uVar16 = local_80;
              do {
                if (uVar16 == 0) goto LAB_00906aa0;
                auVar18._8_8_ = 0;
                auVar18._0_8_ = uVar10;
                if (SUB168(auVar18 * ZEXT816(10),8) != 0) goto LAB_00906b08;
                uVar11 = uVar10 * 10;
                uVar6 = *pbVar12 - 0x30;
                uVar10 = uVar11 + uVar6;
                pcVar9 = (char *)0x0;
              } while ((uVar6 < 10) &&
                      (uVar16 = uVar16 - 1, pbVar12 = pbVar12 + 1, !CARRY8(uVar11,(ulong)uVar6)));
            }
          }
joined_r0x00906b18:
          param_1 = pcVar9;
          pcVar9 = param_1;
          if (lVar8 != 0) {
            free(__s1);
          }
        }
      }
    }
    else {
      param_1 = (char *)0x0;
    }
  }
  return param_1;
}


// ===== 00906b74  <serde_json::value::[0]::serde_json::value::Value>::pointer =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::[0]::serde_json::value::Value>::pointer */

char * __rustcall
<serde_json::value::[0]::serde_json::value::Value>::pointer
          (char *param_1,char *param_2,long param_3)

{
  char cVar1;
  undefined8 *puVar2;
  size_t __n;
  long lVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  byte *__s1;
  void *__ptr;
  int iVar7;
  long lVar8;
  char *pcVar9;
  ulong uVar10;
  ulong uVar11;
  byte *pbVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined1 auVar18 [16];
  undefined8 local_e0;
  undefined8 uStack_d8;
  long local_d0;
  char *pcStack_c8;
  long local_c0;
  undefined8 uStack_b8;
  long local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined2 local_98;
  long local_90;
  byte *pbStack_88;
  ulong local_80;
  long local_78;
  void *local_70;
  undefined8 uStack_68;
  
  if (param_3 != 0) {
    if (*param_2 == '/') {
      uStack_b8 = 0;
      local_a8 = 0x2f0000002f;
      local_a0 = 1;
      local_98 = 1;
      local_e0 = 0;
      uStack_d8 = 0;
      local_d0 = param_3;
      pcStack_c8 = param_2;
      local_c0 = param_3;
      local_b0 = param_3;
      lVar8 = FUN_00908b44((ulong)&local_e0 | 8,0);
      if (lVar8 == 0) {
        pcVar9 = (char *)FUN_009072d8((ulong)&local_e0 | 8);
        while (pcVar9 != (char *)0x0) {
          auVar18 = FUN_009072d8((ulong)&local_e0 | 8);
          if (auVar18._0_8_ == 0) {
            return param_1;
          }
          FUN_00905e1c(&local_78,auVar18._0_8_,auVar18._8_8_,"~1",0x2f);
          __ptr = local_70;
                    /* try { // try from 00906c28 to 00906c3f has its CatchHandler @ 00906e30 */
          FUN_00905e1c(&local_90,local_70,uStack_68,"~0",0x7e);
          if (local_78 != 0) {
            free(__ptr);
          }
          uVar10 = local_80;
          __s1 = pbStack_88;
          lVar8 = local_90;
          if (*param_1 == '\x05') {
            lVar17 = *(long *)(param_1 + 8);
            if (lVar17 != 0) {
              lVar15 = *(long *)(param_1 + 0x10);
              do {
                uVar5 = *(ushort *)(lVar17 + 0x272);
                lVar14 = lVar17 + 0x168;
                pcVar9 = (char *)(lVar17 + -0x20);
                uVar16 = 0xffffffffffffffff;
                lVar13 = (ulong)uVar5 * 0x18;
                do {
                  uVar11 = (ulong)uVar5;
                  if (lVar13 == 0) goto LAB_00906d34;
                  puVar2 = (undefined8 *)(lVar14 + 8);
                  uVar11 = *(ulong *)(lVar14 + 0x10);
                  lVar14 = lVar14 + 0x18;
                  __n = uVar10;
                  if (uVar11 <= uVar10) {
                    __n = uVar11;
                  }
                  iVar7 = memcmp(__s1,(void *)*puVar2,__n);
                  pcVar9 = pcVar9 + 0x20;
                  uVar16 = uVar16 + 1;
                  lVar13 = lVar13 + -0x18;
                  lVar3 = uVar10 - uVar11;
                  if (iVar7 != 0) {
                    lVar3 = (long)iVar7;
                  }
                  cVar1 = 0 < lVar3;
                  if (lVar3 < 0) {
                    cVar1 = -1;
                  }
                } while (cVar1 == '\x01');
                uVar11 = uVar16;
                if (cVar1 == '\0') goto joined_r0x00906df4;
LAB_00906d34:
                if (lVar15 == 0) break;
                lVar15 = lVar15 + -1;
                lVar17 = *(long *)(lVar17 + uVar11 * 8 + 0x278);
              } while( true );
            }
LAB_00906de4:
            pcVar9 = (char *)0x0;
          }
          else {
            if ((((*param_1 != '\x04') || (local_80 == 0)) || (bVar4 = *pbStack_88, bVar4 == 0x2b))
               || ((local_80 != 1 && (bVar4 == 0x30)))) goto LAB_00906de4;
            if (local_80 == 1) {
              if (bVar4 != 0x2d) goto LAB_00906d50;
              goto LAB_00906de4;
            }
            if (local_80 < 0x11) {
LAB_00906d50:
              uVar10 = 0;
              pbVar12 = pbStack_88;
              uVar16 = local_80;
              do {
                if (9 < *pbVar12 - 0x30) goto LAB_00906de4;
                uVar16 = uVar16 - 1;
                uVar10 = uVar10 * 10 + (ulong)(*pbVar12 - 0x30);
                pbVar12 = pbVar12 + 1;
              } while (uVar16 != 0);
LAB_00906d7c:
              if (uVar10 < *(ulong *)(param_1 + 0x18)) {
                pcVar9 = (char *)(*(long *)(param_1 + 0x10) + uVar10 * 0x20);
              }
              else {
                pcVar9 = (char *)0x0;
              }
            }
            else {
              uVar10 = 0;
              pbVar12 = pbStack_88;
              uVar16 = local_80;
              do {
                if (uVar16 == 0) goto LAB_00906d7c;
                auVar18._8_8_ = 0;
                auVar18._0_8_ = uVar10;
                if (SUB168(auVar18 * ZEXT816(10),8) != 0) goto LAB_00906de4;
                uVar11 = uVar10 * 10;
                uVar6 = *pbVar12 - 0x30;
                uVar10 = uVar11 + uVar6;
                pcVar9 = (char *)0x0;
              } while ((uVar6 < 10) &&
                      (uVar16 = uVar16 - 1, pbVar12 = pbVar12 + 1, !CARRY8(uVar11,(ulong)uVar6)));
            }
          }
joined_r0x00906df4:
          param_1 = pcVar9;
          pcVar9 = param_1;
          if (lVar8 != 0) {
            free(__s1);
          }
        }
      }
    }
    else {
      param_1 = (char *)0x0;
    }
  }
  return param_1;
}


// ===== 00906e50  <serde_json::value::de::[l]::serde_json::value::Value>::unexpected =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::de::[l]::serde_json::value::Value>::unexpected */

void __rustcall
<serde_json::value::de::[l]::serde_json::value::Value>::unexpected
          (undefined1 *param_1,byte *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  
  bVar1 = *param_2;
  if (2 < bVar1) {
    if (bVar1 == 3) {
      uVar2 = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(param_1 + 0x10) = uVar2;
      *param_1 = 5;
      return;
    }
    if (bVar1 == 4) {
      *param_1 = 10;
      return;
    }
    *param_1 = 0xb;
    return;
  }
  if (bVar1 == 0) {
    *param_1 = 7;
    return;
  }
  if (bVar1 == 1) {
    bVar1 = param_2[1];
    *param_1 = 0;
    param_1[1] = bVar1;
    return;
  }
  if (*(long *)(param_2 + 8) == 2) {
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    *param_1 = 3;
    *(undefined8 *)(param_1 + 8) = uVar2;
    return;
  }
  if (*(long *)(param_2 + 8) == 1) {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 0x10);
    *param_1 = 2;
    return;
  }
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 0x10);
  *param_1 = 1;
  return;
}


// ===== 00906f10  <serde_json::value::Value_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::Value as core::fmt::Debug>::fmt */

undefined8 __rustcall
<serde_json::value::Value_as_core::fmt::Debug>::fmt(byte *param_1,undefined8 *param_2)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  byte *pbVar7;
  long lVar8;
  byte **local_40;
  code *pcStack_38;
  byte *local_18;
  
  bVar1 = *param_1;
  if (bVar1 < 3) {
    if (bVar1 == 0) {
      uVar4 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"NullX448",4);
      return uVar4;
    }
    if (bVar1 == 1) {
      local_18 = param_1 + 1;
      uVar4 = *param_2;
      uVar5 = param_2[1];
      pcStack_38 = FUN_0090f1c8;
      puVar6 = &DAT_002b272c;
    }
    else {
      local_18 = param_1 + 8;
      uVar4 = *param_2;
      uVar5 = param_2[1];
      pcStack_38 = FUN_0090871c;
      puVar6 = &DAT_002a3123;
    }
  }
  else {
    if (bVar1 != 3) {
      if (bVar1 == 4) {
        uVar3 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"Array ",6);
        if ((uVar3 & 1) == 0) {
          pbVar7 = *(byte **)(param_1 + 0x10);
          lVar8 = *(long *)(param_1 + 0x18);
          <core::fmt::[a]::core::fmt::Formatter>::debug_list(&local_40,param_2);
          if (lVar8 != 0) {
            lVar8 = lVar8 << 5;
            do {
              local_18 = pbVar7;
              <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry
                        (&local_40,&local_18,&DAT_00af0498);
              lVar8 = lVar8 + -0x20;
              pbVar7 = pbVar7 + 0x20;
            } while (lVar8 != 0);
          }
          uVar4 = <core::fmt::builders::[6]::core::fmt::builders::DebugList>::finish(&local_40);
          return uVar4;
        }
      }
      else {
        iVar2 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"Object ",7);
        if (iVar2 == 0) {
          uVar4 = FUN_0090f1ec(param_1 + 8,param_2);
          return uVar4;
        }
      }
      return 1;
    }
    local_18 = param_1 + 8;
    uVar4 = *param_2;
    uVar5 = param_2[1];
    pcStack_38 = FUN_0090f1a0;
    puVar6 = &DAT_002b38de;
  }
  local_40 = &local_18;
  uVar4 = core::fmt::write(uVar4,uVar5,puVar6,&local_40);
  return uVar4;
}


// ===== 009070d8  <serde_json::value::Value_as_core::convert::From<f32>>::from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::Value as core::convert::From<f32>>::from */

void __rustcall
<serde_json::value::Value_as_core::convert::From<f32>>::from(long *param_1,float param_2)

{
  undefined1 local_30;
  uint7 uStack_2f;
  long lStack_28;
  long lStack_20;
  long lStack_18;
  
  if (0x7f7fffff < (uint)ABS(param_2)) {
    param_1[1] = lStack_28;
    *param_1 = (ulong)uStack_2f << 8;
    param_1[3] = lStack_18;
    param_1[2] = lStack_20;
    return;
  }
  local_30 = 0;
  param_1[1] = 2;
  *(undefined1 *)param_1 = 2;
  param_1[2] = (long)(double)param_2;
  FUN_0090670c(&local_30);
  return;
}


// ===== 0090713c  <<serde_json[4f0b60454c344756]::value::Value_as_core[bcece726f298455b]::fmt::Display>::fmt::WriterFormatter_as_core[bcece726f298455b]::io::write::Write>::write =====

/* <<serde_json[4f0b60454c344756]::value::Value as
   core[bcece726f298455b]::fmt::Display>::fmt::WriterFormatter as
   core[bcece726f298455b]::io::write::Write>::write */

undefined1  [16]
<<serde_json[4f0b60454c344756]::value::Value_as_core[bcece726f298455b]::fmt::Display>::fmt::WriterFormatter_as_core[bcece726f298455b]::io::write::Write>
::write(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  iVar2 = <core::fmt::[a]::core::fmt::Formatter>::write_str(*param_1);
  if (iVar2 != 0) {
    uVar3 = <alloc::io::error::core::io::error::Error>::new<&str>(0x2a,"fmt error",9);
    auVar4._8_8_ = uVar3;
    auVar4._0_8_ = 1;
    return auVar4;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_3;
  return auVar1 << 0x40;
}


// ===== 00907198  FUN_00907198 =====

void FUN_00907198(undefined8 *param_1)

{
  <serde_json::value::Value_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 009071a0  <serde_json::value::Value_as_core::convert::From<&str>>::from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::Value as core::convert::From<&str>>::from */

void __rustcall
<serde_json::value::Value_as_core::convert::From<&str>>::from
          (undefined1 *param_1,void *param_2,size_t param_3)

{
  undefined1 *__dest;
  undefined8 uVar1;
  
  if ((long)param_3 < 0) {
    uVar1 = 0;
LAB_009071c0:
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar1,param_3);
  }
  if (param_3 == 0) {
    __dest = &DAT_00000001;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar1 = 1;
    __dest = (undefined1 *)FUN_004b25a4(param_3,1);
    if (__dest == (undefined1 *)0x0) goto LAB_009071c0;
    memcpy(__dest,param_2,param_3);
  }
  *(size_t *)(param_1 + 8) = param_3;
  *(undefined1 **)(param_1 + 0x10) = __dest;
  *(size_t *)(param_1 + 0x18) = param_3;
  *param_1 = 3;
  return;
}


// ===== 00907230  <serde_json::value::Value_as_core::convert::From<alloc::borrow::Cow<str>>>::from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::Value as core::convert::From<alloc::borrow::Cow<str>>>::from */

void __rustcall
<serde_json::value::Value_as_core::convert::From<alloc::borrow::Cow<str>>>::from
          (undefined1 *param_1,size_t *param_2)

{
  undefined1 *__src;
  undefined1 *__dest;
  size_t sVar1;
  size_t __n;
  undefined8 uVar2;
  
  __src = (undefined1 *)param_2[1];
  __n = param_2[2];
  sVar1 = *param_2;
  __dest = __src;
  if (*param_2 == 0xffffffffffffffff) {
    if ((long)__n < 0) {
      uVar2 = 0;
LAB_00907280:
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(uVar2,__n);
    }
    if (__n == 0) {
      sVar1 = 0;
      __dest = &DAT_00000001;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar2 = 1;
      __dest = (undefined1 *)FUN_004b25a4(__n,1);
      if (__dest == (undefined1 *)0x0) goto LAB_00907280;
      memcpy(__dest,__src,__n);
      sVar1 = __n;
    }
  }
  *(size_t *)(param_1 + 8) = sVar1;
  *(undefined1 **)(param_1 + 0x10) = __dest;
  *(size_t *)(param_1 + 0x18) = __n;
  *param_1 = 3;
  return;
}


// ===== 009072d8  FUN_009072d8 =====

undefined1  [16] FUN_009072d8(ulong *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  char cVar3;
  long lVar4;
  undefined1 auVar5 [16];
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  ulong __n;
  ulong uVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  if ((*(byte *)((long)param_1 + 0x41) & 1) != 0) {
    auVar11._8_8_ = 0;
    auVar11._0_8_ = param_2;
    return auVar11 << 0x40;
  }
  uVar2 = param_1[2];
  uVar8 = param_1[3];
  uVar9 = param_1[5];
  if ((uVar9 <= uVar8) && (uVar10 = param_1[4], uVar10 <= uVar9)) {
    __n = (ulong)(byte)param_1[7];
    cVar3 = *(char *)((long)param_1 + __n + 0x2f);
    if (__n < 5) {
      do {
        if (uVar9 - uVar10 < 0x10) {
          uVar7 = 0;
          if (uVar9 == uVar10) goto LAB_009074cc;
          while (*(char *)(uVar2 + uVar10 + uVar7) != cVar3) {
            uVar7 = uVar7 + 1;
            if (uVar9 - uVar10 == uVar7) goto LAB_009074cc;
          }
        }
        else {
          auVar11 = core::slice::memchr::memchr_aligned(cVar3,uVar2 + uVar10,uVar9 - uVar10);
          uVar7 = auVar11._8_8_;
          if (auVar11._0_8_ != 1) goto LAB_009074cc;
        }
        uVar10 = uVar10 + uVar7 + 1;
        param_1[4] = uVar10;
        if (((__n <= uVar10) && (uVar10 <= uVar8)) &&
           (iVar6 = memcmp((void *)(uVar2 + (uVar10 - __n)),param_1 + 6,__n), iVar6 == 0)) {
          uVar8 = *param_1;
          *param_1 = uVar10;
          auVar12._8_8_ = (uVar10 - __n) - uVar8;
          auVar12._0_8_ = uVar2 + uVar8;
          return auVar12;
        }
      } while (uVar10 <= uVar9);
    }
    else {
      do {
        if (uVar9 - uVar10 < 0x10) {
          uVar7 = 0;
          if (uVar9 == uVar10) {
            auVar13 = ZEXT816(0);
          }
          else {
            do {
              if (*(char *)(uVar2 + uVar10 + uVar7) == cVar3) {
                auVar13._8_8_ = uVar7;
                auVar13._0_8_ = 1;
                goto LAB_00907490;
              }
              uVar7 = uVar7 + 1;
            } while (uVar9 - uVar10 != uVar7);
            auVar5._8_8_ = 0;
            auVar5._0_8_ = uVar9 - uVar10;
            auVar13 = auVar5 << 0x40;
          }
        }
        else {
          auVar13 = core::slice::memchr::memchr_aligned(cVar3,uVar2 + uVar10,uVar9 - uVar10);
        }
LAB_00907490:
        if (auVar13._0_8_ != 1) goto LAB_009074cc;
        uVar10 = uVar10 + auVar13._8_8_ + 1;
        param_1[4] = uVar10;
        if ((__n <= uVar10) && (uVar10 <= uVar8)) {
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (0,__n,4,&PTR_s__nix_store_8006w282fgsx3273c878b_00af0238);
        }
      } while (uVar10 <= uVar9);
    }
  }
LAB_009074d0:
  lVar4 = param_1[1] - *param_1;
  lVar1 = uVar2 + *param_1;
  *(undefined1 *)((long)param_1 + 0x41) = 1;
  if ((param_1[8] & 1) == 0 && lVar4 == 0) {
    lVar1 = 0;
  }
  auVar14._8_8_ = lVar4;
  auVar14._0_8_ = lVar1;
  return auVar14;
LAB_009074cc:
  param_1[4] = uVar9;
  goto LAB_009074d0;
}


