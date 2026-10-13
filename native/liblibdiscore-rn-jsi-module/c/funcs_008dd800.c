// ===== 008dd800  FUN_008dd800 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008dd800(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a0f30;
  param_1[1] = _UNK_002a0f38;
  *param_1 = uVar1;
  return;
}


// ===== 008dd814  FUN_008dd814 =====

undefined8 FUN_008dd814(void)

{
  return 0;
}


// ===== 008dd81c  FUN_008dd81c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008dd81c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a0000;
  param_1[1] = _UNK_002a0008;
  *param_1 = uVar1;
  return;
}


// ===== 008dd830  FUN_008dd830 =====

void FUN_008dd830(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if ((*param_1 != 2) && (*param_1 != 0)) {
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
      <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+tracing_core::subscriber::Subscriber+core::marker::Sync+{backref_29}::Send>>
      ::drop_slow();
      return;
    }
  }
  return;
}


// ===== 008dd864  FUN_008dd864 =====

void FUN_008dd864(long *param_1)

{
  code *pcVar1;
  undefined8 *__ptr;
  void *__ptr_00;
  undefined8 *puVar2;
  
  if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x008dd894. Too many branches */
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
                    /* try { // try from 008dd8b0 to 008dd8b7 has its CatchHandler @ 008dd8e8 */
      (*pcVar1)(__ptr_00);
    }
    if (puVar2[1] != 0) {
      free(__ptr_00);
    }
  }
  free(__ptr);
  return;
}


// ===== 008dd91c  FUN_008dd91c =====

void FUN_008dd91c(short param_1,ulong param_2)

{
  long local_18;
  
  if (((param_1 == 2) && (1 < (param_2 & 3) - 2)) && ((param_2 & 3) != 0)) {
    local_18 = param_2 - 1;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
  }
  return;
}


// ===== 008dd970  FUN_008dd970 =====

void FUN_008dd970(long param_1)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  
  plVar6 = *(long **)(param_1 + 0x10);
  plVar1 = plVar6 + 0x2d;
  do {
    lVar5 = *plVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar5 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar5 + -1 == 0) {
    puVar2 = (ulong *)(plVar6 + 0x2b);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = *puVar2 | 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
                    /* try { // try from 008dd9b4 to 008dd9bb has its CatchHandler @ 008dd9f8 */
    <tokio::sync::watch::big_notify::tokio::sync::watch::big_notify::BigNotify>::notify_waiters
              (plVar6 + 2);
  }
  do {
    lVar5 = *plVar6;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar4) {
      *plVar6 = lVar5 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar5 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::watch::Shared<core::option::Option<hyper_util::client::legacy::connect::Connected>>>>
    ::drop_slow((undefined8 *)(param_1 + 0x10));
    return;
  }
  return;
}


// ===== 008dda28  FUN_008dda28 =====

void FUN_008dda28(long *param_1)

{
  code *pcVar1;
  ulong uVar2;
  void *__ptr;
  undefined8 *puVar3;
  long local_28;
  
  if (*param_1 != 2) {
    if (*param_1 == 0) {
      if ((void *)param_1[1] == (void *)0x0) {
        uVar2 = param_1[2] & 3;
        if ((1 < uVar2 - 2) && (uVar2 != 0)) {
          local_28 = param_1[2] - 1;
          <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
          return;
        }
      }
      else if (param_1[3] != 0) {
        free((void *)param_1[1]);
        return;
      }
    }
    else {
      __ptr = (void *)param_1[2];
      if (__ptr != (void *)0x0) {
        puVar3 = (undefined8 *)param_1[3];
        pcVar1 = (code *)*puVar3;
        if (pcVar1 != (code *)0x0) {
                    /* try { // try from 008dda6c to 008dda73 has its CatchHandler @ 008ddb04 */
          (*pcVar1)(__ptr);
        }
        if (puVar3[1] != 0) {
          free(__ptr);
          return;
        }
      }
    }
  }
  return;
}


// ===== 008ddb28  FUN_008ddb28 =====

void FUN_008ddb28(undefined8 *param_1)

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


// ===== 008ddb98  FUN_008ddb98 =====

void FUN_008ddb98(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  plVar1 = plVar5 + 0x2c;
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
                    /* try { // try from 008ddbc8 to 008ddbcf has its CatchHandler @ 008ddc0c */
    <tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notify_waiters(plVar5 + 0x22);
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
    <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::watch::Shared<core::option::Option<hyper_util::client::legacy::connect::Connected>>>>
    ::drop_slow(param_1);
    return;
  }
  return;
}


// ===== 008ddc3c  FUN_008ddc3c =====

void FUN_008ddc3c(long param_1)

{
  if (*(long *)(param_1 + 0x40) != 0) {
                    /* try { // try from 008ddc5c to 008ddc63 has its CatchHandler @ 008ddc80 */
    (**(code **)(*(long *)(param_1 + 0x40) + 0x20))
              (param_1 + 0x58,*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
  }
                    /* WARNING: Could not recover jumptable at 0x008ddc7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x20))
            (param_1 + 0x30,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}


// ===== 008ddca4  FUN_008ddca4 =====

void FUN_008ddca4(int *param_1,uint param_2)

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


// ===== 008ddd14  FUN_008ddd14 =====

void FUN_008ddd14(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *param_1;
                    /* try { // try from 008ddd34 to 008ddd3b has its CatchHandler @ 008ddd94 */
  if ((lVar4 != 2) &&
     (<tracing_core::dispatcher::[2]::tracing_core::dispatcher::Dispatch>::try_close
                (param_1,param_1[3]), lVar4 != 0)) {
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
                    /* try { // try from 008ddd60 to 008ddd63 has its CatchHandler @ 008ddd8c */
      <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+tracing_core::subscriber::Subscriber+core::marker::Sync+{backref_29}::Send>>
      ::drop_slow();
    }
  }
  if (param_1[6] != 0) {
    free((void *)param_1[5]);
    return;
  }
  return;
}


// ===== 008dddc0  FUN_008dddc0 =====

void FUN_008dddc0(ulong param_1)

{
  long local_18;
  
  if ((1 < (param_1 & 3) - 2) && ((param_1 & 3) != 0)) {
    local_18 = param_1 - 1;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
  }
  return;
}


// ===== 008dde08  FUN_008dde08 =====

void FUN_008dde08(long *param_1)

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


// ===== 008dde54  FUN_008dde54 =====

void FUN_008dde54(undefined8 *param_1)

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
                    /* try { // try from 008dde7c to 008dde83 has its CatchHandler @ 008dded8 */
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


// ===== 008ddf20  FUN_008ddf20 =====

void FUN_008ddf20(short *param_1)

{
  ulong uVar1;
  long local_28;
  
  if (*param_1 == 2) {
    uVar1 = *(ulong *)(param_1 + 4) & 3;
    if ((1 < uVar1 - 2) && (uVar1 != 0)) {
      local_28 = *(ulong *)(param_1 + 4) - 1;
                    /* try { // try from 008ddf6c to 008ddf73 has its CatchHandler @ 008ddfc4 */
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
    }
  }
  if (param_1[0x10] == 2) {
    uVar1 = *(ulong *)(param_1 + 0x14) & 3;
    if ((1 < uVar1 - 2) && (uVar1 != 0)) {
      local_28 = *(ulong *)(param_1 + 0x14) - 1;
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
    }
  }
  return;
}


// ===== 008ddfe4  FUN_008ddfe4 =====

undefined8 FUN_008ddfe4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  char cVar2;
  undefined *puVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 local_60 [8];
  long *local_58;
  long *local_50;
  undefined *puStack_48;
  long local_28;
  
                    /* try { // try from 008de004 to 008de00b has its CatchHandler @ 008de178 */
  _local_60 = <tokio::runtime::handle::tokio::runtime::handle::Handle>::current(param_2);
  puVar3 = PTR_NEXT_ID_00b00cd0;
  lVar9 = SUB168(_local_60,8);
  do {
    lVar7 = *(long *)puVar3;
    cVar2 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar5) {
      *(long *)puVar3 = lVar7 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0' || lVar7 == 0);
  bVar5 = (_local_60 & (undefined1  [16])0x1) == (undefined1  [16])0x0;
  lVar7 = 0x1e0;
  if (bVar5) {
    lVar7 = 0x180;
  }
  lVar1 = 0x1c8;
  if (bVar5) {
    lVar1 = 0x168;
  }
  plVar8 = *(long **)(lVar9 + lVar7 + 0x10);
  if (plVar8 == (long *)0x0) {
    uVar6 = 0;
  }
  else {
    do {
      lVar10 = *plVar8;
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = lVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x8de150);
      (*pcVar4)();
    }
    uVar6 = *(undefined8 *)(lVar9 + lVar7 + 0x10);
  }
                    /* try { // try from 008de084 to 008de08f has its CatchHandler @ 008de170 */
  uVar6 = FUN_008e00d4(param_1,uVar6);
                    /* try { // try from 008de090 to 008de0a7 has its CatchHandler @ 008de150 */
  auVar11 = <tokio::runtime::blocking::pool::[4]::tokio::runtime::blocking::pool::Spawner>::
            spawn_task(lVar9 + lVar1,uVar6,1,local_60);
  local_28 = auVar11._8_8_;
  if ((auVar11._0_8_ == 1) && (local_28 != 0)) {
    local_50 = &local_28;
    puStack_48 = PTR_fmt_00b00cb0;
                    /* try { // try from 008de138 to 008de14b has its CatchHandler @ 008de188 */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_002a27dd,&local_50,param_2);
  }
  if (local_60 == (undefined1  [8])0x0) {
    do {
      lVar9 = *local_58;
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(local_58,0x10);
      if (bVar5) {
        *local_58 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>>::
      drop_slow(&local_58);
    }
  }
  else {
    do {
      lVar9 = *local_58;
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(local_58,0x10);
      if (bVar5) {
        *local_58 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>>
      ::drop_slow(&local_58);
    }
  }
  return uVar6;
}


// ===== 008de1c4  <hyper_util::client::legacy::connect::capture::hyper_util::client::legacy::connect::capture::CaptureConnectionExtension>::set =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper_util::client::legacy::connect::capture::hyper_util::client::legacy::connect::capture::CaptureConnectionExtension>::set
    */

void __rustcall
<hyper_util::client::legacy::connect::capture::hyper_util::client::legacy::connect::capture::CaptureConnectionExtension>
::set(long *param_1,long *param_2)

{
  undefined1 uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_70 [25];
  char local_57;
  long local_50;
  long *plStack_48;
  long *local_40;
  undefined1 local_38;
  undefined1 local_37;
  
  local_50 = *param_2;
  lVar4 = param_2[3];
  lVar7 = *param_1;
  uVar1 = *(undefined1 *)((long)param_2 + 0x19);
  plStack_48 = param_2;
  if (local_50 != 0) {
    auVar8 = (**(code **)(param_2[1] + 0x18))();
    plStack_48 = auVar8._8_8_;
    local_50 = auVar8._0_8_;
  }
  local_40 = (long *)param_2[2];
  do {
    lVar6 = *local_40;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(local_40,0x10);
    if (bVar3) {
      *local_40 = lVar6 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (-1 < lVar6) {
    local_38 = (char)lVar4;
    local_37 = uVar1;
    FUN_008e03fc(auStack_70,lVar7 + 0x10,&local_50);
    if (local_57 != '\x02') {
      FUN_008dde54(auStack_70);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x8de268);
  (*pcVar5)();
}


// ===== 008de268  FUN_008de268 =====

long FUN_008de268(undefined8 *param_1)

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
               &PTR_s__root__cargo_registry_src_index__00aed840);
  }
  lVar5 = *(long *)(lVar3 + 8);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("assertion failed: (*next).value.is_some()",0x29,
               &PTR_s__root__cargo_registry_src_index__00aed858);
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
                    /* try { // try from 008de2e4 to 008de2e7 has its CatchHandler @ 008de350 */
      <alloc::sync::[n]::alloc::sync::Arc<std::sync::poison::mutex::Mutex<futures_channel::mpsc::SenderTask>>>
      ::drop_slow();
    }
  }
  free(__ptr);
  return lVar5;
}


// ===== 008de394  <hyper_util::client::legacy::connect::capture::hyper_util::client::legacy::connect::capture::CaptureConnection>::connection_metadata =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper_util::client::legacy::connect::capture::hyper_util::client::legacy::connect::capture::CaptureConnection>::connection_metadata
    */

undefined1  [16] __rustcall
<hyper_util::client::legacy::connect::capture::hyper_util::client::legacy::connect::capture::CaptureConnection>
::connection_metadata(long *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  lVar5 = *param_1;
  uVar4 = *(ulong *)(lVar5 + 0x130);
  puVar1 = (ulong *)(lVar5 + 0x130);
  if (uVar4 < 0xfffffffffffffff0 && (uVar4 & 8) == 0) {
    if (*puVar1 == uVar4) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 + 0x10;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') goto LAB_008de3f0;
    }
    else {
      ClearExclusiveLocal();
    }
  }
  <parking_lot::raw_rwlock::[8]::parking_lot::raw_rwlock::RawRwLock>::lock_shared_slow
            (lVar5 + 0x130,0,param_3,0xffffffff);
LAB_008de3f0:
                    /* try { // try from 008de3f0 to 008de3f7 has its CatchHandler @ 008de424 */
  uVar4 = <tokio::sync::watch::state::[0]::tokio::sync::watch::state::AtomicState>::load
                    (lVar5 + 0x158);
  auVar6[8] = param_1[1] != (uVar4 & 0xfffffffffffffffe);
  auVar6._0_8_ = puVar1;
  auVar6._9_7_ = 0;
  return auVar6;
}


// ===== 008de460  <hyper_util::client::legacy::connect::capture::hyper_util::client::legacy::connect::capture::CaptureConnection>::new =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper_util::client::legacy::connect::capture::hyper_util::client::legacy::connect::capture::CaptureConnection>::new
    */

void __rustcall
<hyper_util::client::legacy::connect::capture::hyper_util::client::legacy::connect::capture::CaptureConnection>
::new(long *param_1)

{
  undefined8 *puVar1;
  undefined8 local_68;
  long local_60;
  long lStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined1 local_37;
  
  local_37 = 2;
  FUN_008dfd48(&local_68,&local_50);
  uStack_48 = 1;
  local_50 = 1;
  local_40 = local_68;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)FUN_004b25a4(0x18,8);
  if (puVar1 != (undefined8 *)0x0) {
    *param_1 = (long)puVar1;
    param_1[1] = local_60;
    puVar1[1] = uStack_48;
    *puVar1 = local_50;
    puVar1[2] = local_40;
    param_1[2] = lStack_58;
    return;
  }
                    /* try { // try from 008de4e8 to 008de4f3 has its CatchHandler @ 008de4f8 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x18);
}


// ===== 008de51c  <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::watch::Shared<core::option::Option<hyper_util::client::legacy::connect::Connected>>>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::watch::Shared<core::option::Option<hyper_util::client::legacy::connect::Connected>>>>::drop_slow
    */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<tokio::sync::watch::Shared<core::option::Option<hyper_util::client::legacy::connect::Connected>>>>
::drop_slow(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  void *__ptr;
  
  __ptr = (void *)*param_1;
  if (*(char *)((long)__ptr + 0x151) != '\x02') {
                    /* try { // try from 008de538 to 008de53f has its CatchHandler @ 008de588 */
    FUN_008dde54((long)__ptr + 0x138);
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


// ===== 008de5c8  <alloc::sync::[n]::alloc::sync::Arc<core::sync::atomic::Atomic<bool>>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<core::sync::atomic::Atomic<bool>>>::drop_slow */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<core::sync::atomic::Atomic<bool>>>::drop_slow
          (undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  void *__ptr;
  long lVar4;
  
  __ptr = (void *)*param_1;
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


// ===== 008de600  <alloc::sync::[n]::alloc::sync::Arc<hyper::common::watch::Shared>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<hyper::common::watch::Shared>>::drop_slow */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<hyper::common::watch::Shared>>::drop_slow(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  void *__ptr;
  
  __ptr = (void *)*param_1;
  if (*(long *)((long)__ptr + 0x18) != 0) {
                    /* try { // try from 008de620 to 008de623 has its CatchHandler @ 008de66c */
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


// ===== 008de6ac  FUN_008de6ac =====

void FUN_008de6ac(undefined8 *param_1)

{
  <http::uri::path::PathAndQuery_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 008de6b4  FUN_008de6b4 =====

void FUN_008de6b4(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Debug>::fmt(*(undefined8 *)*param_1,((undefined8 *)*param_1)[1],param_2);
  return;
}


// ===== 008de6c8  FUN_008de6c8 =====

void FUN_008de6c8(undefined8 *param_1,long param_2)

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


// ===== 008de6e4  FUN_008de6e4 =====

void FUN_008de6e4(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  void *pvVar4;
  char cVar5;
  ulong uVar6;
  long local_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long local_50;
  char local_48;
  char local_47;
  undefined2 local_44;
  undefined1 local_42;
  
  local_70 = 2;
  uVar6 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar6 == 0) {
    uVar6 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    pvVar4 = pthread_getspecific((pthread_key_t)uVar6);
  }
  else {
    pvVar4 = pthread_getspecific((pthread_key_t)uVar6);
  }
  if (pvVar4 < (void *)0x2) {
    pvVar4 = (void *)FUN_008dc8a8(uVar6 & 0xffffffff,pvVar4,0);
  }
  if (pvVar4 == (void *)0x0) {
    local_48 = '\0';
    local_47 = '\0';
    goto LAB_008de7a4;
  }
  cVar1 = *(char *)((long)pvVar4 + 0x44);
  cVar2 = *(char *)((long)pvVar4 + 0x45);
  cVar5 = cVar2;
  if (cVar1 == '\x01') {
    if (cVar2 != '\0') {
      cVar5 = cVar2 + -1;
      goto LAB_008de754;
    }
                    /* try { // try from 008de7fc to 008de83b has its CatchHandler @ 008de850 */
    tokio::task::coop::register_waker(param_3);
    bVar3 = true;
  }
  else {
LAB_008de754:
    bVar3 = false;
    *(char *)((long)pvVar4 + 0x45) = cVar5;
  }
  local_42 = 0;
  local_44 = 0;
                    /* try { // try from 008de768 to 008de76f has its CatchHandler @ 008de850 */
  <tokio::task::coop::RestoreOnPending_as_core::ops::drop::Drop>::drop((ulong)&local_44 | 1);
  local_48 = cVar1;
  local_47 = cVar2;
  if (bVar3) {
    *param_1 = 2;
    FUN_008dda28(&local_70);
    return;
  }
LAB_008de7a4:
                    /* try { // try from 008de7b4 to 008de7bb has its CatchHandler @ 008de840 */
  <tokio::runtime::task::raw::tokio::runtime::task::raw::RawTask>::try_read_output
            (*param_2,&local_70,*param_3);
  if (local_70 != 2) {
    local_48 = '\0';
  }
  param_1[1] = lStack_68;
  *param_1 = local_70;
  param_1[3] = lStack_58;
  param_1[2] = lStack_60;
  param_1[4] = local_50;
  <tokio::task::coop::RestoreOnPending_as_core::ops::drop::Drop>::drop(&local_48);
  return;
}


// ===== 008de868  <tokio::net::tcp::stream::TcpStream_as_hyper_util::client::legacy::connect::Connection>::connected =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::stream::TcpStream as
   hyper_util::client::legacy::connect::Connection>::connected */

void __rustcall
<tokio::net::tcp::stream::TcpStream_as_hyper_util::client::legacy::connect::Connection>::connected
          (undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_d8;
  undefined6 uStack_c6;
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
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar2 = (undefined8 *)FUN_004b25a4(0x18,8);
  if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x18);
  }
  *(undefined1 *)(puVar2 + 2) = 0;
  puVar2[1] = 1;
  *puVar2 = 1;
                    /* try { // try from 008de8b0 to 008de8bb has its CatchHandler @ 008de988 */
  <tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::peer_addr(&local_80,param_2);
                    /* try { // try from 008de8bc to 008de8c7 has its CatchHandler @ 008de970 */
  <tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::local_addr(&local_60,param_2);
  uStack_28 = uStack_48;
  uStack_30 = uStack_50;
  uStack_38 = uStack_58;
  local_40 = local_60;
  uStack_b8 = uStack_78;
  local_c0 = local_80;
  uVar1 = local_c0;
  uStack_a8 = uStack_68;
  uStack_b0 = puStack_70;
  local_c0._0_2_ = (short)local_80;
  uStack_98 = uStack_58;
  local_a0 = local_60;
  uStack_88 = uStack_48;
  uStack_90 = uStack_50;
  local_c0 = uVar1;
  if (((short)local_c0 != 2) && (local_a0._0_2_ = (short)local_60, (short)local_a0 != 2)) {
    uStack_58 = uStack_78;
    local_60 = local_80;
    uStack_48 = uStack_68;
    uStack_50 = puStack_70;
    uStack_68 = CONCAT62(uStack_c6,1);
    local_80 = 0;
                    /* try { // try from 008de90c to 008de91b has its CatchHandler @ 008de960 */
    puStack_70 = puVar2;
    FUN_008df490(param_1,&local_80,&local_60);
    FUN_008ddf20(&local_c0);
    return;
  }
  param_1[1] = uStack_d8;
  *param_1 = 0;
  param_1[3] = CONCAT62(uStack_c6,1);
  param_1[2] = puVar2;
  FUN_008ddf20(&local_c0);
  return;
}


// ===== 008de9a0  FUN_008de9a0 =====

void FUN_008de9a0(long *param_1)

{
  core::fmt::pointer_fmt_inner(*param_1 + 0x10);
  return;
}


// ===== 008de9ac  <hyper_util::common::exec::Exec_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper_util::common::exec::Exec as core::fmt::Debug>::fmt */

void __rustcall
<hyper_util::common::exec::Exec_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,"Exec",4);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish(auStack_20);
  return;
}


// ===== 008de9e4  FUN_008de9e4 =====

void FUN_008de9e4(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  plVar2 = (long *)*param_2;
  lVar1 = *plVar2;
  *plVar2 = -2;
  if (lVar1 != -2) {
    lVar5 = plVar2[0xc];
    lVar4 = plVar2[0xb];
    lVar7 = plVar2[0xe];
    lVar6 = plVar2[0xd];
    lVar3 = plVar2[0x11];
    *param_1 = lVar1;
    param_1[0xc] = lVar5;
    param_1[0xb] = lVar4;
    lVar4 = plVar2[0x10];
    lVar1 = plVar2[0xf];
    param_1[0xe] = lVar7;
    param_1[0xd] = lVar6;
    lVar6 = plVar2[4];
    lVar5 = plVar2[3];
    param_1[0x10] = lVar4;
    param_1[0xf] = lVar1;
    lVar4 = plVar2[6];
    lVar1 = plVar2[5];
    param_1[4] = lVar6;
    param_1[3] = lVar5;
    lVar6 = plVar2[8];
    lVar5 = plVar2[7];
    param_1[6] = lVar4;
    param_1[5] = lVar1;
    lVar4 = plVar2[10];
    lVar1 = plVar2[9];
    param_1[8] = lVar6;
    param_1[7] = lVar5;
    param_1[10] = lVar4;
    param_1[9] = lVar1;
    lVar4 = plVar2[2];
    lVar1 = plVar2[1];
    param_1[0x11] = lVar3;
    param_1[2] = lVar4;
    param_1[1] = lVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed
            ("Ready polled after completion",0x1d,&PTR_s__root__cargo_registry_src_index__00aed8a0);
}


// ===== 008dea6c  FUN_008dea6c =====

void FUN_008dea6c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  for (lVar2 = *(long *)(param_1 + 0x10); lVar2 != 0; lVar2 = lVar2 + -1) {
    if (*(long *)(lVar1 + 0x40) != 0) {
                    /* try { // try from 008deac0 to 008deac7 has its CatchHandler @ 008deadc */
      (**(code **)(*(long *)(lVar1 + 0x40) + 0x20))
                (lVar1 + 0x58,*(undefined8 *)(lVar1 + 0x48),*(undefined8 *)(lVar1 + 0x50));
    }
                    /* try { // try from 008dea9c to 008deaa3 has its CatchHandler @ 008deafc */
    (**(code **)(*(long *)(lVar1 + 0x18) + 0x20))
              (lVar1 + 0x30,*(undefined8 *)(lVar1 + 0x20),*(undefined8 *)(lVar1 + 0x28));
    lVar1 = lVar1 + 0x68;
  }
  return;
}


// ===== 008deb28  FUN_008deb28 =====

/* WARNING: Removing unreachable block (ram,0x008dee78) */

void FUN_008deb28(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  byte bVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *local_c8;
  long *local_c0;
  long lStack_b8;
  long local_b0;
  long lStack_a8;
  long *local_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long *local_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long *local_58;
  
  lVar10 = *param_1;
  if (lVar10 != 0) {
    puVar1 = (ulong *)(lVar10 + 0x38);
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
    plVar6 = (long *)FUN_008de268(lVar10 + 0x20);
    puVar4 = PTR_GLOBAL_PANIC_COUNT_00b00bf0;
    while (plVar6 != (long *)0x0) {
      plVar9 = plVar6 + 2;
      do {
        local_80 = plVar6;
        if ((int)*plVar9 != 0) {
          ClearExclusiveLocal();
          <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                    (plVar6 + 2);
          break;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *(int *)plVar9 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((*(ulong *)puVar4 & 0x7fffffffffffffff) == 0) {
        bVar5 = 0;
        cVar2 = *(char *)((long)plVar6 + 0x14);
      }
      else {
                    /* try { // try from 008dec20 to 008dec5b has its CatchHandler @ 008def44 */
        bVar5 = std::panicking::panic_count::is_zero_slow_path();
        bVar5 = bVar5 ^ 1;
        cVar2 = *(char *)((long)plVar6 + 0x14);
      }
      if (cVar2 != '\0') {
        uVar7 = (ulong)local_c0 >> 8;
        local_c0 = (long *)CONCAT71((int7)uVar7,bVar5);
                    /* try { // try from 008deea4 to 008deec7 has its CatchHandler @ 008df014 */
        local_c8 = plVar9;
                    /* WARNING: Subroutine does not return */
        core::result::unwrap_failed
                  ("called `Result::unwrap()` on an `Err` value",0x2b,&local_c8,&PTR_FUN_00aed820,
                   &PTR_s__root__cargo_registry_src_index__00aed888);
      }
                    /* try { // try from 008debcc to 008debd3 has its CatchHandler @ 008def98 */
      <futures_channel::mpsc::[c]::futures_channel::mpsc::SenderTask>::notify(plVar6 + 3);
      if ((((bVar5 & 1) == 0) && ((*(ulong *)puVar4 & 0x7fffffffffffffff) != 0)) &&
         (uVar7 = std::panicking::panic_count::is_zero_slow_path(), (uVar7 & 1) == 0)) {
        *(undefined1 *)((long)plVar6 + 0x14) = 1;
      }
      do {
        lVar8 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *(int *)plVar9 = 0;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar8 == 2) {
        <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(plVar9);
      }
      do {
        lVar8 = *local_80;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(local_80,0x10);
        if (bVar3) {
          *local_80 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        DataMemoryBarrier(2,1);
        <alloc::sync::[n]::alloc::sync::Arc<std::sync::poison::mutex::Mutex<futures_channel::mpsc::SenderTask>>>
        ::drop_slow(&local_80);
      }
      plVar6 = (long *)FUN_008de268(lVar10 + 0x20);
    }
    lVar10 = *param_1;
    while (lVar10 != 0) {
      while( true ) {
        plVar9 = *(long **)(lVar10 + 0x18);
        plVar6 = (long *)plVar9[5];
        if (plVar6 != (long *)0x0) break;
        if (*(long **)(lVar10 + 0x10) == plVar9) {
          if (*(long *)(*param_1 + 0x38) == 0) {
            plVar6 = (long *)*param_1;
            if (plVar6 != (long *)0x0) {
              do {
                lVar10 = *plVar6;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                if (bVar3) {
                  *plVar6 = lVar10 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar10 + -1 == 0) {
                DataMemoryBarrier(2,1);
                    /* try { // try from 008dee5c to 008dee63 has its CatchHandler @ 008def4c */
                <alloc::sync::[n]::alloc::sync::Arc<futures_channel::mpsc::BoundedInner<core::result::Result<bytes::bytes::Bytes,hyper::error::Error>>>>
                ::drop_slow(param_1);
              }
            }
            *param_1 = 0;
            return;
          }
          local_c8 = (long *)0x2;
          if (*param_1 == 0) {
                    /* try { // try from 008def2c to 008def37 has its CatchHandler @ 008defac */
                    /* WARNING: Subroutine does not return */
            core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00aed8b8);
          }
          if (*(long *)(*param_1 + 0x38) == 0) {
            return;
          }
                    /* try { // try from 008dede8 to 008dedeb has its CatchHandler @ 008def54 */
          std::thread::functions::yield_now();
          if (local_c8 == (long *)0x1) goto LAB_008dedac;
          goto LAB_008dedb4;
        }
        std::thread::functions::yield_now();
      }
      *(long **)(lVar10 + 0x18) = plVar6;
      if (*plVar9 != 0) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic
                  ("assertion failed: (*tail).value.is_none()",0x29,
                   &PTR_s__root__cargo_registry_src_index__00aed840);
      }
      if (*plVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic
                  ("assertion failed: (*next).value.is_some()",0x29,
                   &PTR_s__root__cargo_registry_src_index__00aed858);
      }
      lStack_68 = plVar6[4];
      lStack_70 = plVar6[3];
      lStack_78 = plVar6[2];
      local_80 = (long *)plVar6[1];
      *plVar6 = 0;
      if (*plVar9 != 0) {
                    /* try { // try from 008decc8 to 008deccf has its CatchHandler @ 008def6c */
        FUN_008dd864(plVar9 + 1);
      }
      free(plVar9);
      lVar10 = *param_1;
      lStack_98 = lStack_78;
      local_a0 = local_80;
      lStack_88 = lStack_68;
      lStack_90 = lStack_70;
      if (lVar10 != 0) {
                    /* try { // try from 008decf0 to 008decf7 has its CatchHandler @ 008def90 */
        plVar6 = (long *)FUN_008de268(lVar10 + 0x20);
        if (plVar6 != (long *)0x0) {
          plVar9 = plVar6 + 2;
          do {
            local_58 = plVar6;
            if ((int)*plVar9 != 0) {
              ClearExclusiveLocal();
              <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                        (plVar6 + 2);
              break;
            }
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *(int *)plVar9 = 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((*(ulong *)puVar4 & 0x7fffffffffffffff) == 0) {
            bVar5 = 0;
            cVar2 = *(char *)((long)plVar6 + 0x14);
          }
          else {
                    /* try { // try from 008dedfc to 008dee37 has its CatchHandler @ 008def3c */
            bVar5 = std::panicking::panic_count::is_zero_slow_path();
            bVar5 = bVar5 ^ 1;
            cVar2 = *(char *)((long)plVar6 + 0x14);
          }
          if (cVar2 != '\0') {
            uVar7 = (ulong)lStack_78 >> 8;
            lStack_78 = CONCAT71((int7)uVar7,bVar5);
                    /* try { // try from 008def04 to 008def27 has its CatchHandler @ 008defcc */
            local_80 = plVar9;
                    /* WARNING: Subroutine does not return */
            core::result::unwrap_failed
                      ("called `Result::unwrap()` on an `Err` value",0x2b,&local_80,
                       &PTR_FUN_00aed820,&PTR_s__root__cargo_registry_src_index__00aed870);
          }
                    /* try { // try from 008ded30 to 008ded37 has its CatchHandler @ 008def58 */
          <futures_channel::mpsc::[c]::futures_channel::mpsc::SenderTask>::notify(plVar6 + 3);
          if ((((bVar5 & 1) == 0) && ((*(ulong *)puVar4 & 0x7fffffffffffffff) != 0)) &&
             (uVar7 = std::panicking::panic_count::is_zero_slow_path(), (uVar7 & 1) == 0)) {
            *(undefined1 *)((long)plVar6 + 0x14) = 1;
          }
          do {
            lVar10 = *plVar9;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *(int *)plVar9 = 0;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((int)lVar10 == 2) {
            <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(plVar9);
          }
          do {
            lVar10 = *local_58;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(local_58,0x10);
            if (bVar3) {
              *local_58 = lVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar10 + -1 == 0) {
            DataMemoryBarrier(2,1);
                    /* try { // try from 008ded78 to 008ded7f has its CatchHandler @ 008def90 */
            <alloc::sync::[n]::alloc::sync::Arc<std::sync::poison::mutex::Mutex<futures_channel::mpsc::SenderTask>>>
            ::drop_slow(&local_58);
          }
          lVar10 = *param_1;
          if (lVar10 == 0) goto LAB_008ded9c;
        }
        plVar6 = (long *)(lVar10 + 0x38);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = *plVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
LAB_008ded9c:
      local_c8 = (long *)0x1;
      lStack_b8 = lStack_98;
      local_c0 = local_a0;
      lStack_a8 = lStack_88;
      local_b0 = lStack_90;
LAB_008dedac:
      FUN_008dd864(&local_c0);
LAB_008dedb4:
      lVar10 = *param_1;
    }
  }
  return;
}


// ===== 008df054  FUN_008df054 =====

void FUN_008df054(char *param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined5 uStack_118;
  undefined3 uStack_113;
  undefined5 uStack_110;
  char local_100;
  char local_ff;
  char local_fe;
  undefined8 local_fd;
  undefined8 uStack_f5;
  undefined8 local_ed;
  undefined8 uStack_e5;
  undefined8 local_dd;
  undefined5 uStack_d5;
  undefined3 uStack_d0;
  undefined5 uStack_cd;
  undefined1 uStack_c8;
  undefined1 uStack_c7;
  undefined1 uStack_c6;
  undefined5 uStack_c5;
  undefined2 uStack_c0;
  undefined1 uStack_be;
  undefined5 local_bd;
  undefined2 uStack_b8;
  undefined1 uStack_b6;
  undefined5 uStack_b5;
  undefined3 uStack_b0;
  undefined5 uStack_ad;
  long local_a8;
  char local_a0;
  undefined8 local_9e;
  undefined8 uStack_88;
  undefined8 local_80 [2];
  undefined8 uStack_6a;
  
  uStack_138 = *(undefined8 *)(param_2 + 0x2b);
  local_140 = *(undefined8 *)(param_2 + 0x23);
  uStack_128 = *(undefined8 *)(param_2 + 0x3b);
  uStack_130 = *(undefined8 *)(param_2 + 0x33);
  cVar2 = *param_2;
  cVar3 = param_2[1];
  local_120 = *(undefined8 *)(param_2 + 0x43);
  uStack_148 = *(undefined8 *)(param_2 + 0x1b);
  uStack_150 = *(undefined8 *)(param_2 + 0x13);
  cVar4 = param_2[2];
  uStack_118 = (undefined5)*(undefined8 *)(param_2 + 0x4b);
  uStack_158 = *(undefined8 *)(param_2 + 0xb);
  local_160 = *(undefined8 *)(param_2 + 3);
  uStack_113 = (undefined3)*(undefined8 *)(param_2 + 0x50);
  uStack_110 = (undefined5)((ulong)*(undefined8 *)(param_2 + 0x50) >> 0x18);
  if (cVar2 != -2) {
    local_dd = *(undefined8 *)(param_2 + 0x23);
    uStack_d5 = (undefined5)*(undefined8 *)(param_2 + 0x2b);
    uStack_d0 = (undefined3)((ulong)*(undefined8 *)(param_2 + 0x2b) >> 0x28);
    uVar6 = *(undefined8 *)(param_2 + 0x3b);
    uVar5 = *(undefined8 *)(param_2 + 0x33);
    uStack_c5 = (undefined5)uVar6;
    uStack_c0 = (undefined2)((ulong)uVar6 >> 0x28);
    uStack_be = (undefined1)((ulong)uVar6 >> 0x38);
    uStack_cd = (undefined5)uVar5;
    uStack_c8 = (undefined1)((ulong)uVar5 >> 0x28);
    uStack_c7 = (undefined1)((ulong)uVar5 >> 0x30);
    uStack_c6 = (undefined1)((ulong)uVar5 >> 0x38);
    uVar5 = *(undefined8 *)(param_2 + 0x43);
    uStack_b5 = (undefined5)*(undefined8 *)(param_2 + 0x4b);
    local_bd = (undefined5)uVar5;
    uStack_b8 = (undefined2)((ulong)uVar5 >> 0x28);
    uStack_b6 = (undefined1)((ulong)uVar5 >> 0x38);
    uStack_f5 = *(undefined8 *)(param_2 + 0xb);
    local_fd = *(undefined8 *)(param_2 + 3);
    uStack_b0 = (undefined3)*(undefined8 *)(param_2 + 0x50);
    uStack_ad = (undefined5)((ulong)*(undefined8 *)(param_2 + 0x50) >> 0x18);
    uStack_e5 = *(undefined8 *)(param_2 + 0x1b);
    local_ed = *(undefined8 *)(param_2 + 0x13);
                    /* try { // try from 008df0f4 to 008df10f has its CatchHandler @ 008df228 */
    local_100 = cVar2;
    local_ff = cVar3;
    local_fe = cVar4;
    <bytes::bytes::bytes::bytes::Bytes>::copy_from_slice(local_80,param_3,param_4);
    <http::uri::path::http::uri::path::PathAndQuery>::from_shared(&local_a8,local_80);
    if (local_a8 == 0) {
      FUN_008dfab0(&local_100);
      cVar2 = -2;
      cVar3 = '\x02';
      cVar4 = local_a0;
    }
    else {
      local_80[0] = local_9e;
      uStack_6a = uStack_88;
      if (CONCAT53(uStack_cd,uStack_d0) != 0) {
                    /* try { // try from 008df144 to 008df14b has its CatchHandler @ 008df204 */
        (**(code **)(CONCAT53(uStack_cd,uStack_d0) + 0x20))
                  (&uStack_b8,CONCAT53(uStack_c5,CONCAT12(uStack_c6,CONCAT11(uStack_c7,uStack_c8))),
                   CONCAT53(local_bd,CONCAT12(uStack_be,uStack_c0)));
        cVar3 = local_ff;
        cVar4 = local_fe;
        cVar2 = local_100;
      }
      puVar1 = (undefined8 *)((ulong)&local_100 | 3);
      uStack_138 = puVar1[5];
      local_140 = puVar1[4];
      uStack_128 = puVar1[7];
      uStack_130 = puVar1[6];
      local_120 = puVar1[8];
      uStack_158 = puVar1[1];
      local_160 = *puVar1;
      uStack_148 = puVar1[3];
      uStack_150 = puVar1[2];
      uStack_118 = (undefined5)puVar1[9];
      uStack_113 = (undefined3)*(undefined8 *)((long)puVar1 + 0x4d);
      uStack_110 = (undefined5)((ulong)*(undefined8 *)((long)puVar1 + 0x4d) >> 0x18);
    }
  }
  *param_1 = cVar2;
  param_1[1] = cVar3;
  *(undefined8 *)(param_1 + 0x2b) = uStack_138;
  *(undefined8 *)(param_1 + 0x23) = local_140;
  *(undefined8 *)(param_1 + 0x3b) = uStack_128;
  *(undefined8 *)(param_1 + 0x33) = uStack_130;
  *(ulong *)(param_1 + 0x4b) = CONCAT35(uStack_113,uStack_118);
  *(undefined8 *)(param_1 + 0x43) = local_120;
  param_1[2] = cVar4;
  *(ulong *)(param_1 + 0x50) = CONCAT53(uStack_110,uStack_113);
  *(undefined8 *)(param_1 + 0xb) = uStack_158;
  *(undefined8 *)(param_1 + 3) = local_160;
  *(undefined8 *)(param_1 + 0x1b) = uStack_148;
  *(undefined8 *)(param_1 + 0x13) = uStack_150;
  return;
}


// ===== 008df240  FUN_008df240 =====

void FUN_008df240(byte *param_1,char *param_2,byte *param_3)

{
  undefined4 uVar1;
  long *plVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined7 uStack_a8;
  undefined1 uStack_a1;
  undefined7 uStack_a0;
  undefined1 uStack_98;
  undefined7 local_97;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined8 local_87;
  undefined8 uStack_7f;
  undefined8 local_77;
  undefined8 uStack_6f;
  undefined8 local_67;
  undefined8 uStack_5f;
  undefined8 local_57;
  undefined7 uStack_4f;
  undefined1 uStack_48;
  undefined7 uStack_47;
  
  uStack_c8 = *(undefined8 *)(param_2 + 0x29);
  local_d0 = *(undefined8 *)(param_2 + 0x21);
  uStack_b8 = *(undefined8 *)(param_2 + 0x39);
  uStack_c0 = *(undefined8 *)(param_2 + 0x31);
  bVar3 = *param_3;
  local_b0 = *(undefined8 *)(param_2 + 0x41);
  uStack_d8 = *(undefined8 *)(param_2 + 0x19);
  uStack_e0 = *(undefined8 *)(param_2 + 0x11);
  plVar2 = *(long **)(param_3 + 8);
  uStack_a8 = (undefined7)*(undefined8 *)(param_2 + 0x49);
  uStack_e8 = *(undefined8 *)(param_2 + 9);
  local_f0 = *(undefined8 *)(param_2 + 1);
  uStack_a1 = (undefined1)*(undefined8 *)(param_2 + 0x50);
  uStack_a0 = (undefined7)((ulong)*(undefined8 *)(param_2 + 0x50) >> 8);
  if (*param_2 == -2) {
    if (1 < bVar3) {
                    /* try { // try from 008df2ac to 008df2b3 has its CatchHandler @ 008df3f4 */
      (**(code **)(*plVar2 + 0x20))(plVar2 + 3,plVar2[1],plVar2[2]);
      free(plVar2);
    }
    bVar3 = 0xfe;
  }
  else {
    uStack_6f = *(undefined8 *)(param_2 + 0x29);
    local_77 = *(undefined8 *)(param_2 + 0x21);
    puVar4 = (undefined8 *)((ulong)&uStack_98 | 1);
    uStack_8f = (undefined7)*(undefined8 *)(param_2 + 9);
    uStack_88 = (undefined1)((ulong)*(undefined8 *)(param_2 + 9) >> 0x38);
    local_97 = (undefined7)*(undefined8 *)(param_2 + 1);
    uStack_90 = (undefined1)((ulong)*(undefined8 *)(param_2 + 1) >> 0x38);
    uStack_5f = *(undefined8 *)(param_2 + 0x39);
    local_67 = *(undefined8 *)(param_2 + 0x31);
    local_57 = *(undefined8 *)(param_2 + 0x41);
    uStack_7f = *(undefined8 *)(param_2 + 0x19);
    local_87 = *(undefined8 *)(param_2 + 0x11);
    uStack_4f = (undefined7)*(undefined8 *)(param_2 + 0x49);
    uStack_48 = (undefined1)*(undefined8 *)(param_2 + 0x50);
    uStack_47 = (undefined7)((ulong)*(undefined8 *)(param_2 + 0x50) >> 8);
    if (*param_2 == '\x02') {
      plVar2 = (long *)CONCAT71(uStack_8f,uStack_90);
                    /* try { // try from 008df320 to 008df327 has its CatchHandler @ 008df3b4 */
      (**(code **)(*plVar2 + 0x20))(plVar2 + 3,plVar2[1],plVar2[2]);
      free(plVar2);
    }
    uVar1 = *(undefined4 *)(param_3 + 4);
    uStack_c8 = puVar4[5];
    local_d0 = puVar4[4];
    uStack_b8 = puVar4[7];
    uStack_c0 = puVar4[6];
    local_b0 = puVar4[8];
    *(undefined4 *)puVar4 = *(undefined4 *)(param_3 + 1);
    *(undefined4 *)((long)puVar4 + 3) = uVar1;
    uStack_e8 = puVar4[1];
    local_f0 = *puVar4;
    uStack_d8 = puVar4[3];
    uStack_e0 = puVar4[2];
    uStack_a8 = (undefined7)puVar4[9];
    uStack_a1 = (undefined1)*(undefined8 *)((long)puVar4 + 0x4f);
    uStack_a0 = (undefined7)((ulong)*(undefined8 *)((long)puVar4 + 0x4f) >> 8);
  }
  *param_1 = bVar3;
  *(ulong *)(param_1 + 0x49) = CONCAT17(uStack_a1,uStack_a8);
  *(undefined8 *)(param_1 + 0x41) = local_b0;
  *(undefined8 *)(param_1 + 0x29) = uStack_c8;
  *(undefined8 *)(param_1 + 0x21) = local_d0;
  *(undefined8 *)(param_1 + 0x39) = uStack_b8;
  *(undefined8 *)(param_1 + 0x31) = uStack_c0;
  *(ulong *)(param_1 + 0x50) = CONCAT71(uStack_a0,uStack_a1);
  *(undefined8 *)(param_1 + 9) = uStack_e8;
  *(undefined8 *)(param_1 + 1) = local_f0;
  *(undefined8 *)(param_1 + 0x19) = uStack_d8;
  *(undefined8 *)(param_1 + 0x11) = uStack_e0;
  return;
}


// ===== 008df410  <alloc::io::error::core::io::error::Error>::new<tokio::runtime::task::error::JoinError> =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::io::error::core::io::error::Error>::new<tokio::runtime::task::error::JoinError> */

void __rustcall
<alloc::io::error::core::io::error::Error>::new<tokio::runtime::task::error::JoinError>
          (undefined4 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)FUN_004b25a4(0x18,8);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = *param_2;
    uVar2 = param_2[2];
    puVar1[1] = param_2[1];
    *puVar1 = uVar3;
    puVar1[2] = uVar2;
    alloc::io::error::custom_owner_from_box(param_1,puVar1,&PTR_FUN_00aed7c8);
    <core::io::error::repr::[0]::core::io::error::repr::Repr>::new_custom();
    return;
  }
                    /* try { // try from 008df468 to 008df473 has its CatchHandler @ 008df478 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x18);
}


// ===== 008df490  FUN_008df490 =====

void FUN_008df490(long *param_1,long *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar4 = *param_2;
  if (lVar4 == 0) {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar1 = (undefined8 *)FUN_004b25a4(0x40,4);
    if (puVar1 == (undefined8 *)0x0) {
                    /* try { // try from 008df564 to 008df56f has its CatchHandler @ 008df574 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(4,0x40);
    }
    uVar5 = *param_3;
    uVar7 = param_3[3];
    uVar6 = param_3[2];
    ppuVar3 = (undefined **)&DAT_00aed8f8;
    puVar1[1] = param_3[1];
    *puVar1 = uVar5;
    puVar1[3] = uVar7;
    puVar1[2] = uVar6;
    uVar5 = param_3[4];
    uVar7 = param_3[7];
    uVar6 = param_3[6];
    puVar1[5] = param_3[5];
    puVar1[4] = uVar5;
    puVar1[7] = uVar7;
    puVar1[6] = uVar6;
  }
  else {
    uVar7 = param_3[1];
    uVar5 = *param_3;
    uVar11 = param_3[3];
    uVar9 = param_3[2];
    lVar2 = param_2[1];
    uVar13 = param_3[5];
    uVar12 = param_3[4];
    uVar8 = param_3[7];
    uVar6 = param_3[6];
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar1 = (undefined8 *)FUN_004b25a4(0x50,8);
    if (puVar1 == (undefined8 *)0x0) {
                    /* try { // try from 008df554 to 008df55f has its CatchHandler @ 008df57c */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x50);
    }
    ppuVar3 = &PTR_FUN_00aed8d0;
    puVar1[3] = uVar11;
    puVar1[2] = uVar9;
    puVar1[5] = uVar13;
    puVar1[4] = uVar12;
    puVar1[1] = uVar7;
    *puVar1 = uVar5;
    puVar1[7] = uVar8;
    puVar1[6] = uVar6;
    puVar1[9] = lVar2;
    puVar1[8] = lVar4;
  }
  *param_2 = (long)puVar1;
  param_2[1] = (long)ppuVar3;
  lVar10 = *param_2;
  lVar2 = param_2[3];
  lVar4 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = lVar10;
  param_1[3] = lVar2;
  param_1[2] = lVar4;
  return;
}


// ===== 008df5bc  FUN_008df5bc =====

void FUN_008df5bc(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if ((*param_1 != 2) && (*param_1 != 0)) {
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
      <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+tracing_core::subscriber::Subscriber+core::marker::Sync+{backref_29}::Send>>
      ::drop_slow();
      return;
    }
  }
  return;
}


// ===== 008df5f0  FUN_008df5f0 =====

void FUN_008df5f0(undefined8 *param_1)

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
                    /* try { // try from 008df624 to 008df62b has its CatchHandler @ 008df680 */
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


// ===== 008df6cc  FUN_008df6cc =====

void FUN_008df6cc(long *param_1)

{
  code *pcVar1;
  ulong uVar2;
  void *__ptr;
  undefined8 *puVar3;
  long local_28;
  
  if (*param_1 == 0) {
    if ((void *)param_1[1] == (void *)0x0) {
      uVar2 = param_1[2] & 3;
      if ((1 < uVar2 - 2) && (uVar2 != 0)) {
        local_28 = param_1[2] - 1;
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
      }
    }
    else if (param_1[3] != 0) {
      free((void *)param_1[1]);
      return;
    }
  }
  else {
    __ptr = (void *)param_1[2];
    if (__ptr != (void *)0x0) {
      puVar3 = (undefined8 *)param_1[3];
      pcVar1 = (code *)*puVar3;
      if (pcVar1 != (code *)0x0) {
                    /* try { // try from 008df6f8 to 008df6ff has its CatchHandler @ 008df790 */
        (*pcVar1)(__ptr);
      }
      if (puVar3[1] != 0) {
        free(__ptr);
        return;
      }
    }
  }
  return;
}


// ===== 008df7b4  FUN_008df7b4 =====

void FUN_008df7b4(long *param_1)

{
  ulong uVar1;
  long local_18;
  
  if (*param_1 == 0) {
    if ((void *)param_1[1] == (void *)0x0) {
      uVar1 = param_1[2] & 3;
      if ((1 < uVar1 - 2) && (uVar1 != 0)) {
        local_18 = param_1[2] - 1;
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
        return;
      }
    }
    else if (param_1[3] != 0) {
      free((void *)param_1[1]);
      return;
    }
  }
  return;
}


// ===== 008df82c  FUN_008df82c =====

void FUN_008df82c(long param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  code *pcVar2;
  
  __ptr = *(void **)(param_1 + 0x40);
  puVar1 = *(undefined8 **)(param_1 + 0x48);
  pcVar2 = (code *)*puVar1;
  if (pcVar2 != (code *)0x0) {
                    /* try { // try from 008df844 to 008df84b has its CatchHandler @ 008df874 */
    (*pcVar2)(__ptr);
  }
  if (puVar1[1] != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 008df898  FUN_008df898 =====

void FUN_008df898(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)(param_1 + 0x20);
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
                    /* try { // try from 008df8c8 to 008df8cb has its CatchHandler @ 008df94c */
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow();
    }
  }
  if (*(int *)(param_1 + 0x38) == 1) {
    FUN_008df6cc(param_1 + 0x40);
  }
  else if (*(int *)(param_1 + 0x38) == 0) {
    if (*(long *)(param_1 + 0x40) != -1) {
                    /* try { // try from 008df8ec to 008df8fb has its CatchHandler @ 008df960 */
      FUN_008dfa04();
    }
  }
  if (*(long *)(param_1 + 0x88) != 0) {
                    /* try { // try from 008df90c to 008df90f has its CatchHandler @ 008df974 */
    (**(code **)(*(long *)(param_1 + 0x88) + 0x18))(*(undefined8 *)(param_1 + 0x90));
  }
  plVar3 = *(long **)(param_1 + 0x98);
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
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow((undefined8 *)(param_1 + 0x98));
      return;
    }
  }
  return;
}


// ===== 008df9ac  FUN_008df9ac =====

void FUN_008df9ac(int *param_1)

{
  if (*param_1 == 0) {
    if (*(long *)(param_1 + 2) != -1) {
      FUN_008dfa04();
      return;
    }
  }
  else if (*param_1 == 1) {
    FUN_008df6cc(param_1 + 2);
    return;
  }
  return;
}


// ===== 008df9d8  FUN_008df9d8 =====

void FUN_008df9d8(int *param_1)

{
  if (*param_1 == 1) {
    FUN_008df6cc(param_1 + 2);
    return;
  }
  if (*param_1 == 0) {
    if (*(long *)(param_1 + 2) != -1) {
      FUN_008dfa04();
      return;
    }
  }
  return;
}


// ===== 008dfa04  FUN_008dfa04 =====

void FUN_008dfa04(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *param_1;
                    /* try { // try from 008dfa24 to 008dfa2b has its CatchHandler @ 008dfa84 */
  if ((lVar4 != 2) &&
     (<tracing_core::dispatcher::[2]::tracing_core::dispatcher::Dispatch>::try_close
                (param_1,param_1[3]), lVar4 != 0)) {
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
                    /* try { // try from 008dfa50 to 008dfa53 has its CatchHandler @ 008dfa7c */
      <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+tracing_core::subscriber::Subscriber+core::marker::Sync+{backref_29}::Send>>
      ::drop_slow();
    }
  }
  if (param_1[6] != 0) {
    free((void *)param_1[5]);
    return;
  }
  return;
}


// ===== 008dfab0  FUN_008dfab0 =====

void FUN_008dfab0(char *param_1)

{
  long *__ptr;
  
  if (*param_1 == '\x02') {
    __ptr = *(long **)(param_1 + 8);
                    /* try { // try from 008dfadc to 008dfae3 has its CatchHandler @ 008dfb38 */
    (**(code **)(*__ptr + 0x20))(__ptr + 3,__ptr[1],__ptr[2]);
    free(__ptr);
  }
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* try { // try from 008dfb04 to 008dfb0b has its CatchHandler @ 008dfb6c */
    (**(code **)(*(long *)(param_1 + 0x10) + 0x20))
              (param_1 + 0x28,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  }
  if (*(long *)(param_1 + 0x30) != 0) {
                    /* WARNING: Could not recover jumptable at 0x008dfb28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x30) + 0x20))
              (param_1 + 0x48,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
    return;
  }
  return;
}


// ===== 008dfb94  FUN_008dfb94 =====

void FUN_008dfb94(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 008dfba4 to 008dfba7 has its CatchHandler @ 008dfc30 */
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
                    /* try { // try from 008dfbd0 to 008dfbf7 has its CatchHandler @ 008dfc28 */
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>>
      ::drop_slow();
    }
  }
  if ((param_1[4] != 0) && (param_1[9] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x008dfc18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[9] + 0x18))(param_1[10]);
    return;
  }
  return;
}


// ===== 008dfc64  FUN_008dfc64 =====

void FUN_008dfc64(long *param_1)

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


// ===== 008dfcb0  FUN_008dfcb0 =====

void FUN_008dfcb0(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* try { // try from 008dfcd0 to 008dfcd3 has its CatchHandler @ 008dfd10 */
    (**(code **)(*(long *)(param_1 + 0x10) + 0x18))(*(undefined8 *)(param_1 + 0x18));
  }
  plVar3 = *(long **)(param_1 + 0x20);
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
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow((undefined8 *)(param_1 + 0x20));
      return;
    }
  }
  return;
}


// ===== 008dfd48  FUN_008dfd48 =====

void FUN_008dfd48(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *__dest;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
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
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar6 = param_2[1];
  uVar5 = *param_2;
  uVar8 = param_2[3];
  uVar7 = param_2[2];
                    /* try { // try from 008dfd70 to 008dfd77 has its CatchHandler @ 008dfe58 */
  <tokio::sync::watch::big_notify::tokio::sync::watch::big_notify::BigNotify>::new(&local_2a0);
  local_48 = 0;
  uStack_b8 = uStack_1c8;
  local_c0 = local_1d0;
  uStack_a8 = uStack_1b8;
  uStack_b0 = uStack_1c0;
  uStack_d8 = uStack_1e8;
  local_e0 = local_1f0;
  uStack_c8 = uStack_1d8;
  uStack_d0 = uStack_1e0;
  uStack_f8 = uStack_208;
  local_100 = local_210;
  uStack_e8 = uStack_1f8;
  uStack_f0 = uStack_200;
  uStack_138 = uStack_248;
  local_140 = local_250;
  uStack_128 = uStack_238;
  uStack_130 = local_240;
  uStack_118 = uStack_228;
  local_120 = uStack_230;
  uStack_108 = uStack_218;
  uStack_110 = local_220;
  uStack_178 = uStack_288;
  local_180 = local_290;
  uStack_168 = uStack_278;
  uStack_170 = uStack_280;
  uStack_158 = uStack_268;
  local_160 = local_270;
  uStack_148 = uStack_258;
  uStack_150 = uStack_260;
  uStack_198 = 1;
  local_1a0 = 1;
  uStack_188 = uStack_298;
  uStack_190 = local_2a0;
  uStack_98 = uStack_1a8;
  local_a0 = local_1b0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_70 = 0;
  uStack_38 = 1;
  local_40 = 1;
  uStack_68 = uVar5;
  local_60 = uVar6;
  uStack_58 = uVar7;
  local_50 = uVar8;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  __dest = (long *)FUN_004b25a4(0x170,8);
  if (__dest == (long *)0x0) {
                    /* try { // try from 008dfe48 to 008dfe53 has its CatchHandler @ 008dfe6c */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x170);
  }
  memcpy(__dest,&local_1a0,0x170);
  do {
    lVar4 = *__dest;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(__dest,0x10);
    if (bVar2) {
      *__dest = lVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (-1 < lVar4) {
    *param_1 = __dest;
    param_1[1] = __dest;
    param_1[2] = 0;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x8dfe58);
  (*pcVar3)();
}


// ===== 008dfe88  <hyper_util::client::legacy::connect::[0]::hyper_util::client::legacy::connect::Connected>::get_extras =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper_util::client::legacy::connect::[0]::hyper_util::client::legacy::connect::Connected>::get_extras
    */

void __rustcall
<hyper_util::client::legacy::connect::[0]::hyper_util::client::legacy::connect::Connected>::
get_extras(long *param_1)

{
  if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x008dfe9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[1] + 0x20))();
    return;
  }
  return;
}


// ===== 008dfea4  <hyper_util::client::legacy::connect::[0]::hyper_util::client::legacy::connect::Connected>::new =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper_util::client::legacy::connect::[0]::hyper_util::client::legacy::connect::Connected>::new
    */

void __rustcall
<hyper_util::client::legacy::connect::[0]::hyper_util::client::legacy::connect::Connected>::new
          (undefined8 *param_1)

{
  undefined8 *puVar1;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)FUN_004b25a4(0x18,8);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)(puVar1 + 2) = 0;
    *param_1 = 0;
    *(undefined2 *)(param_1 + 3) = 1;
    puVar1[1] = 1;
    *puVar1 = 1;
    param_1[2] = puVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x18);
}


// ===== 008dfefc  <hyper_util::client::legacy::connect::[0]::hyper_util::client::legacy::connect::Connected>::clone =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper_util::client::legacy::connect::[0]::hyper_util::client::legacy::connect::Connected>::clone
    */

void __rustcall
<hyper_util::client::legacy::connect::[0]::hyper_util::client::legacy::connect::Connected>::clone
          (long *param_1,long *param_2,long param_3)

{
  undefined1 uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined1 auVar9 [16];
  
  lVar6 = *param_2;
  lVar4 = param_2[3];
  uVar1 = *(undefined1 *)((long)param_2 + 0x19);
  if (lVar6 != 0) {
    auVar9 = (**(code **)(param_2[1] + 0x18))();
    param_3 = auVar9._8_8_;
    lVar6 = auVar9._0_8_;
  }
  plVar7 = (long *)param_2[2];
  do {
    lVar8 = *plVar7;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = lVar8 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (-1 < lVar8) {
    *(char *)(param_1 + 3) = (char)lVar4;
    *(undefined1 *)((long)param_1 + 0x19) = uVar1;
    *param_1 = lVar6;
    param_1[1] = param_3;
    param_1[2] = (long)plVar7;
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x8dff70);
  (*pcVar5)();
}


// ===== 008dff70  <hyper_util::client::legacy::connect::[0]::hyper_util::client::legacy::connect::Connected>::poison =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper_util::client::legacy::connect::[0]::hyper_util::client::legacy::connect::Connected>::poison
    */

void __rustcall
<hyper_util::client::legacy::connect::[0]::hyper_util::client::legacy::connect::Connected>::poison
          (long param_1)

{
  undefined *puVar1;
  long lVar2;
  char cVar3;
  ulong uVar4;
  undefined8 *local_d0;
  char **ppcStack_c8;
  undefined *local_c0;
  undefined8 *puStack_b8;
  long **local_b0;
  undefined *puStack_a8;
  undefined8 local_a0;
  long lStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  char *pcStack_78;
  undefined8 local_70;
  undefined8 local_68;
  long lStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long *plStack_40;
  undefined1 *local_38;
  undefined8 uStack_30;
  undefined8 *local_28;
  
  puVar1 = PTR_MAX_LEVEL_00b00e60;
  *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x10) = 1;
  if (*(ulong *)puVar1 < 2) {
    if (DAT_00b0f5e8 - 1 < 2) {
      uVar4 = tracing::__macro_support::__is_enabled(PTR_DAT_00b0f5d8);
      lVar2 = lStack_98;
    }
    else {
      if (DAT_00b0f5e8 == 0) {
        return;
      }
      cVar3 = <tracing_core::callsite::tracing_core::callsite::DefaultCallsite>::register
                        (&PTR_DAT_00b0f5d8);
      if (cVar3 == '\0') {
        return;
      }
      uVar4 = tracing::__macro_support::__is_enabled(PTR_DAT_00b0f5d8,cVar3);
      lVar2 = lStack_98;
    }
    if ((uVar4 & 1) != 0) {
      lStack_98 = *(long *)(PTR_DAT_00b0f5d8 + 0x38);
      if (lStack_98 != 0) {
        local_90 = *(undefined8 *)(PTR_DAT_00b0f5d8 + 0x40);
        uStack_88 = *(undefined8 *)(PTR_DAT_00b0f5d8 + 0x48);
        local_28 = (undefined8 *)(PTR_DAT_00b0f5d8 + 0x30);
        local_a0 = *local_28;
        local_80 = 0;
        pcStack_78 = 
        "connection was poisoned. this connection will not be reused for subsequent requestsevent /root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hyper-util-0.1.10/src/client/legacy/connect/mod.rs:218"
        ;
        local_70 = 0xa7;
        lVar2 = lStack_98;
        if (lStack_98 != 1) {
          local_d0 = &local_a0;
          local_48 = 1;
          ppcStack_c8 = &pcStack_78;
          puStack_b8 = &local_68;
          local_c0 = &DAT_00aed950;
          local_b0 = &plStack_40;
          puStack_a8 = &DAT_00aed970;
          uStack_30 = 2;
          local_68 = local_a0;
          lStack_60 = lStack_98;
          local_58 = local_90;
          uStack_50 = uStack_88;
          plStack_40 = (long *)(param_1 + 0x10);
          local_38 = (undefined1 *)&local_d0;
          <tracing_core::event::tracing_core::event::Event>::dispatch(PTR_DAT_00b0f5d8,&local_38);
          return;
        }
      }
      lStack_98 = lVar2;
                    /* WARNING: Subroutine does not return */
      core::option::expect_failed
                ("FieldSet corrupted (this is a bug)",0x22,
                 &PTR_s__root__cargo_registry_src_index__00aed938);
    }
  }
  return;
}


// ===== 008e00d4  FUN_008e00d4 =====

void FUN_008e00d4(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_170;
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
  uint uStack_bc;
  
  if (param_2 != (long *)0x0) {
    do {
      lVar5 = *param_2;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar2) {
        *param_2 = lVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x8e01d8);
      (*pcVar3)();
    }
  }
  uVar8 = param_1[1];
  uVar7 = *param_1;
  uVar10 = param_1[3];
  uVar9 = param_1[2];
  uVar12 = param_1[5];
  uVar11 = param_1[4];
  uVar6 = param_1[6];
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar4 = (undefined8 *)FUN_004b25a4(0x100,0x80);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[0x19] = uStack_138;
    puVar4[0x18] = local_140;
    puVar4[0x1b] = uStack_128;
    puVar4[0x1a] = uStack_130;
    puVar4[0x1d] = uStack_118;
    puVar4[0x1c] = local_120;
    puVar4[0x1f] = uStack_108;
    puVar4[0x1e] = uStack_110;
    puVar4[0x11] = 0;
    puVar4[0x10] = 0;
    puVar4[0x13] = param_2;
    puVar4[0x12] = uStack_170;
    puVar4[0x15] = uStack_158;
    puVar4[0x14] = param_3;
    puVar4[0x17] = uStack_148;
    puVar4[0x16] = uStack_150;
    puVar4[9] = uVar8;
    puVar4[8] = uVar7;
    puVar4[0xb] = uVar10;
    puVar4[10] = uVar9;
    puVar4[0xd] = uVar12;
    puVar4[0xc] = uVar11;
    puVar4[0xf] = 0;
    puVar4[0xe] = uVar6;
    puVar4[1] = 0;
    *puVar4 = param_4;
    puVar4[3] = 0;
    puVar4[2] = &PTR_thunk_FUN_008dd3b8_00aed990;
    puVar4[5] = param_3;
    puVar4[4] = param_2;
    puVar4[7] = (ulong)uStack_bc << 0x20;
    puVar4[6] = param_5;
    return;
  }
                    /* try { // try from 008e01c8 to 008e01d3 has its CatchHandler @ 008e01d8 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(0x80,0x100);
}


// ===== 008e01f0  <hyper_util::client::legacy::connect::[1]::hyper_util::client::legacy::connect::Extra>::set =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper_util::client::legacy::connect::[1]::hyper_util::client::legacy::connect::Extra>::set */

void __rustcall
<hyper_util::client::legacy::connect::[1]::hyper_util::client::legacy::connect::Extra>::set
          (undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008e01f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x20))(*param_1);
  return;
}


// ===== 008e01fc  FUN_008e01fc =====

void FUN_008e01fc(undefined8 *param_1,long param_2)

{
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  long local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  long local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if (*(int *)(param_2 + 0x18) != 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              ("internal error: entered unreachable code: unexpected stage",0x75,
               &PTR_s__root__cargo_registry_src_index__00aed920);
  }
  local_60 = <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                       (*(undefined8 *)(param_2 + 0x10));
  local_58 = *(long *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x20) = 0xffffffffffffffff;
  if (local_58 != -1) {
    uStack_48 = *(undefined8 *)(param_2 + 0x30);
    uStack_50 = *(undefined8 *)(param_2 + 0x28);
    uStack_38 = *(undefined8 *)(param_2 + 0x40);
    uStack_40 = *(undefined8 *)(param_2 + 0x38);
    uStack_28 = *(undefined8 *)(param_2 + 0x50);
    local_30 = *(undefined8 *)(param_2 + 0x48);
                    /* try { // try from 008e025c to 008e025f has its CatchHandler @ 008e0318 */
    tokio::task::coop::stop();
    uStack_98 = uStack_50;
    local_a0 = local_58;
    uStack_88 = uStack_40;
    uStack_90 = uStack_48;
    uStack_78 = local_30;
    local_80 = uStack_38;
    local_70 = uStack_28;
                    /* try { // try from 008e0280 to 008e028b has its CatchHandler @ 008e032c */
    FUN_008dd108(&uStack_c0,&local_a0);
    <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&local_60);
    local_a0 = CONCAT44(local_a0._4_4_,2);
                    /* try { // try from 008e02a0 to 008e02ab has its CatchHandler @ 008e0304 */
    FUN_008e0344(param_2,&local_a0);
    param_1[1] = uStack_c0;
    *param_1 = 0;
    param_1[3] = uStack_b0;
    param_1[2] = local_b8;
    param_1[4] = local_a8;
    return;
  }
                    /* try { // try from 008e02e8 to 008e02ff has its CatchHandler @ 008e032c */
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed
            ("[internal exception] blocking task ran twice.",0x2d,
             &PTR_s__root__cargo_registry_src_index__00aed718);
}


// ===== 008e0344  FUN_008e0344 =====

void FUN_008e0344(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_18;
  
                    /* try { // try from 008e0360 to 008e0363 has its CatchHandler @ 008e03e4 */
  local_18 = <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                       (*(undefined8 *)(param_1 + 0x10));
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 1) {
    FUN_008df6cc(param_1 + 0x20);
  }
  else if (iVar1 == 0) {
    if (*(long *)(param_1 + 0x20) != -1) {
                    /* try { // try from 008e0388 to 008e039b has its CatchHandler @ 008e03c4 */
      FUN_008dfa04((long *)(param_1 + 0x20));
    }
  }
  uVar2 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  *(undefined8 *)(param_1 + 0x20) = param_2[1];
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  uVar2 = param_2[4];
  uVar4 = param_2[7];
  uVar3 = param_2[6];
  *(undefined8 *)(param_1 + 0x40) = param_2[5];
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  *(undefined8 *)(param_1 + 0x50) = uVar4;
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&local_18);
  return;
}


// ===== 008e03fc  FUN_008e03fc =====

void FUN_008e03fc(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar5 = *param_2;
  plVar1 = (long *)(lVar5 + 0x130);
  if (*plVar1 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = 8;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_008e0430;
  }
  else {
    ClearExclusiveLocal();
  }
  <parking_lot::raw_rwlock::[8]::parking_lot::raw_rwlock::RawRwLock>::lock_exclusive_slow
            (lVar5 + 0x130,param_3,0xffffffff);
LAB_008e0430:
  uVar6 = *param_3;
  uVar8 = param_3[3];
  uVar7 = param_3[2];
  uVar10 = *(undefined8 *)(lVar5 + 0x140);
  uVar9 = *(undefined8 *)(lVar5 + 0x138);
  uVar12 = *(undefined8 *)(lVar5 + 0x150);
  uVar11 = *(undefined8 *)(lVar5 + 0x148);
  *(undefined8 *)(lVar5 + 0x140) = param_3[1];
  *(undefined8 *)(lVar5 + 0x138) = uVar6;
  *(undefined8 *)(lVar5 + 0x150) = uVar8;
  *(undefined8 *)(lVar5 + 0x148) = uVar7;
  plVar2 = (long *)(lVar5 + 0x158);
  param_3[1] = uVar10;
  *param_3 = uVar9;
  param_3[3] = uVar12;
  param_3[2] = uVar11;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *plVar2 = *plVar2 + 2;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    if (*plVar1 != 8) {
      ClearExclusiveLocal();
      <parking_lot::raw_rwlock::[8]::parking_lot::raw_rwlock::RawRwLock>::unlock_exclusive_slow
                (lVar5 + 0x130,0);
      break;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
                    /* try { // try from 008e046c to 008e04bf has its CatchHandler @ 008e04c4 */
  <tokio::sync::watch::big_notify::tokio::sync::watch::big_notify::BigNotify>::notify_waiters
            (lVar5 + 0x10);
  uVar6 = *param_3;
  uVar8 = param_3[3];
  uVar7 = param_3[2];
  param_1[1] = param_3[1];
  *param_1 = uVar6;
  param_1[3] = uVar8;
  param_1[2] = uVar7;
  return;
}


// ===== 008e04dc  <hyper_util::client::legacy::connect::hyper_util::client::legacy::connect::PoisonPill>::poisoned =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper_util::client::legacy::connect::hyper_util::client::legacy::connect::PoisonPill>::poisoned
    */

bool __rustcall
<hyper_util::client::legacy::connect::hyper_util::client::legacy::connect::PoisonPill>::poisoned
          (long *param_1)

{
  return *(char *)(*param_1 + 0x10) != '\0';
}


// ===== 008e04f0  <hyper_util::client::legacy::connect::PoisonPill_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper_util::client::legacy::connect::PoisonPill as core::fmt::Debug>::fmt */

void __rustcall
<hyper_util::client::legacy::connect::PoisonPill_as_core::fmt::Debug>::fmt
          (long *param_1,undefined8 *param_2)

{
  undefined1 local_34 [4];
  long *local_30;
  code *pcStack_28;
  undefined1 *local_20;
  undefined *puStack_18;
  
  local_20 = local_34;
  local_34[0] = *(char *)(*param_1 + 0x10) != '\0';
  pcStack_28 = FUN_008de9a0;
  puStack_18 = PTR_fmt_00b00d68;
  local_30 = param_1;
  core::fmt::write(*param_2,param_2[1],&DAT_002aa210,&local_30);
  return;
}


// ===== 008e054c  <hyper_util::common::timer::Timer_as_hyper::rt::timer::Timer>::sleep_until =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper_util::common::timer::Timer as hyper::rt::timer::Timer>::sleep_until */

void __rustcall
<hyper_util::common::timer::Timer_as_hyper::rt::timer::Timer>::sleep_until(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008e0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x20))
            (*param_1 + (*(long *)(param_1[1] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
  return;
}


// ===== 008e056c  <hyper_util::common::timer::Timer_as_hyper::rt::timer::Timer>::sleep =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper_util::common::timer::Timer as hyper::rt::timer::Timer>::sleep */

void __rustcall <hyper_util::common::timer::Timer_as_hyper::rt::timer::Timer>::sleep(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008e0584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x18))
            (*param_1 + (*(long *)(param_1[1] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
  return;
}


// ===== 008e0588  FUN_008e0588 =====

void FUN_008e0588(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple(auStack_38,param_2,&DAT_002bd148,4);
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::field
            (auStack_38,lVar1 + 0x10,&DAT_00aedaa8);
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::finish();
  return;
}


// ===== 008e05dc  FUN_008e05dc =====

void FUN_008e05dc(undefined8 *param_1)

{
  <core::time::Duration_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 008e05e4  FUN_008e05e4 =====

void FUN_008e05e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 local_34 [4];
  long *local_30;
  code *pcStack_28;
  undefined1 *local_20;
  undefined *puStack_18;
  
  local_30 = (long *)*param_1;
  local_20 = local_34;
  local_34[0] = *(char *)(*local_30 + 0x10) != '\0';
  pcStack_28 = FUN_008de9a0;
  puStack_18 = PTR_fmt_00b00d68;
  core::fmt::write(*param_2,param_2[1],&DAT_002aa210,&local_30);
  return;
}


// ===== 008e0644  <hyper_util::client::legacy::connect::Extra_as_core::clone::Clone>::clone =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper_util::client::legacy::connect::Extra as core::clone::Clone>::clone */

void __rustcall
<hyper_util::client::legacy::connect::Extra_as_core::clone::Clone>::clone(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008e064c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x18))(*param_1);
  return;
}


// ===== 008e0650  <hyper_util::client::legacy::connect::Extra_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper_util::client::legacy::connect::Extra as core::fmt::Debug>::fmt */

void __rustcall
<hyper_util::client::legacy::connect::Extra_as_core::fmt::Debug>::fmt
          (undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,"Extra",5);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish(auStack_20);
  return;
}


// ===== 008e0688  FUN_008e0688 =====

void FUN_008e0688(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_50 [64];
  
  FUN_008db500(auStack_50,param_2,param_1);
  return;
}


// ===== 008e06b4  FUN_008e06b4 =====

void FUN_008e06b4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)FUN_004b25a4(0x40,4);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = *param_1;
    uVar4 = param_1[3];
    uVar3 = param_1[2];
    uVar6 = param_1[5];
    uVar5 = param_1[4];
    uVar8 = param_1[7];
    uVar7 = param_1[6];
    puVar1[1] = param_1[1];
    *puVar1 = uVar2;
    puVar1[3] = uVar4;
    puVar1[2] = uVar3;
    puVar1[5] = uVar6;
    puVar1[4] = uVar5;
    puVar1[7] = uVar8;
    puVar1[6] = uVar7;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(4,0x40);
}


// ===== 008e0708  <hyper_util::rt::tokio::TokioTimer_as_hyper::rt::timer::Timer>::sleep_until =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper_util::rt::tokio::TokioTimer as hyper::rt::timer::Timer>::sleep_until */

void __rustcall
<hyper_util::rt::tokio::TokioTimer_as_hyper::rt::timer::Timer>::sleep_until
          (undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  tokio::time::sleep::sleep_until
            (&local_98,param_2,param_3,&PTR_s__root__cargo_registry_src_index__00aedac8);
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)FUN_004b25a4(0x78,8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[9] = uStack_50;
    puVar1[8] = local_58;
    puVar1[0xb] = uStack_40;
    puVar1[10] = local_48;
    puVar1[0xd] = uStack_30;
    puVar1[0xc] = local_38;
    puVar1[1] = uStack_90;
    *puVar1 = local_98;
    puVar1[3] = uStack_80;
    puVar1[2] = local_88;
    puVar1[5] = uStack_70;
    puVar1[4] = local_78;
    puVar1[7] = uStack_60;
    puVar1[6] = local_68;
    puVar1[0xe] = local_28;
    return;
  }
                    /* try { // try from 008e0794 to 008e079f has its CatchHandler @ 008e07a4 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x78);
}


// ===== 008e07bc  <hyper_util::rt::tokio::TokioTimer_as_hyper::rt::timer::Timer>::reset =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper_util::rt::tokio::TokioTimer as hyper::rt::timer::Timer>::reset */

void __rustcall
<hyper_util::rt::tokio::TokioTimer_as_hyper::rt::timer::Timer>::reset
          (undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  long local_40;
  long lStack_38;
  
  uVar1 = *param_2;
  (**(code **)(param_2[1] + 0x20))(&local_40,uVar1);
  if (lStack_38 == 0x6168a3c088dba4d5 && local_40 == 0x674d557ee5819696) {
    <tokio::time::sleep::tokio::time::sleep::Sleep>::reset(uVar1,param_3,param_4);
    return;
  }
  return;
}


// ===== 008e0850  <hyper_util::rt::tokio::TokioTimer_as_hyper::rt::timer::Timer>::sleep =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper_util::rt::tokio::TokioTimer as hyper::rt::timer::Timer>::sleep */

void __rustcall
<hyper_util::rt::tokio::TokioTimer_as_hyper::rt::timer::Timer>::sleep
          (undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  tokio::time::sleep::sleep
            (&local_98,param_2,param_3,&PTR_s__root__cargo_registry_src_index__00aedb08);
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)FUN_004b25a4(0x78,8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[9] = uStack_50;
    puVar1[8] = local_58;
    puVar1[0xb] = uStack_40;
    puVar1[10] = local_48;
    puVar1[0xd] = uStack_30;
    puVar1[0xc] = local_38;
    puVar1[1] = uStack_90;
    *puVar1 = local_98;
    puVar1[3] = uStack_80;
    puVar1[2] = local_88;
    puVar1[5] = uStack_70;
    puVar1[4] = local_78;
    puVar1[7] = uStack_60;
    puVar1[6] = local_68;
    puVar1[0xe] = local_28;
    return;
  }
                    /* try { // try from 008e08dc to 008e08e7 has its CatchHandler @ 008e08ec */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x78);
}


// ===== 008e0904  FUN_008e0904 =====

void FUN_008e0904(long param_1,undefined8 param_2)

{
  undefined1 auStack_60 [64];
  
  (**(code **)(*(long *)(param_1 + 0x48) + 0x20))(*(undefined8 *)(param_1 + 0x40));
  FUN_008db500(auStack_60,param_2,param_1);
  return;
}


// ===== 008e0948  FUN_008e0948 =====

void FUN_008e0948(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  
  auVar10 = (**(code **)(param_1[9] + 0x18))(param_1[8]);
  uVar4 = param_1[1];
  uVar2 = *param_1;
  uVar7 = param_1[3];
  uVar6 = param_1[2];
  uVar9 = param_1[5];
  uVar8 = param_1[4];
  uVar5 = param_1[7];
  uVar3 = param_1[6];
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)FUN_004b25a4(0x50,8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[3] = uVar7;
    puVar1[2] = uVar6;
    puVar1[5] = uVar9;
    puVar1[4] = uVar8;
    puVar1[7] = uVar5;
    puVar1[6] = uVar3;
    *(undefined1 (*) [16])(puVar1 + 8) = auVar10;
    puVar1[1] = uVar4;
    *puVar1 = uVar2;
    return;
  }
                    /* try { // try from 008e09c0 to 008e09cb has its CatchHandler @ 008e09d0 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x50);
}


// ===== 008e09e8  <hyper_util::rt::tokio::TokioSleep_as_core::future::future::Future>::poll =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper_util::rt::tokio::TokioSleep as core::future::future::Future>::poll */

void __rustcall <hyper_util::rt::tokio::TokioSleep_as_core::future::future::Future>::poll(void)

{
  (*(code *)PTR_poll_00b01d10)();
  return;
}


// ===== 008e09ec  FUN_008e09ec =====

void FUN_008e09ec(undefined8 param_1,long param_2)

{
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <u16_as_core::fmt::LowerHex>::fmt();
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <u16_as_core::fmt::Display>::fmt();
    return;
  }
  <u16_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 008e0a04  FUN_008e0a04 =====

undefined8 FUN_008e0a04(undefined8 *param_1)

{
  return *param_1;
}


// ===== 008e0a0c  <hyper_util::common::timer::Timer_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper_util::common::timer::Timer as core::fmt::Debug>::fmt */

void __rustcall
<hyper_util::common::timer::Timer_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,"Timer",5);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish(auStack_20);
  return;
}


// ===== 008e0a44  FUN_008e0a44 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e0a44(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029f110;
  param_1[1] = _UNK_0029f118;
  *param_1 = uVar1;
  return;
}


// ===== 008e0a58  FUN_008e0a58 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e0a58(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a0510;
  param_1[1] = _UNK_002a0518;
  *param_1 = uVar1;
  return;
}


// ===== 008e0a6c  FUN_008e0a6c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_008e0a6c(pthread_key_t param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *__pointer;
  void *__ptr;
  long *plVar7;
  long lVar8;
  undefined4 uStack_34;
  
  uVar6 = _UNK_0032fb68;
  uVar5 = _DAT_0032fb60;
  uVar4 = _UNK_0032fb58;
  uVar3 = _DAT_0032fb50;
  if (param_2 == 1) {
    return (undefined8 *)0x0;
  }
  __pointer = (undefined8 *)malloc(0x30);
  if (__pointer != (undefined8 *)0x0) {
    __pointer[1] = uVar4;
    *__pointer = uVar3;
    __pointer[3] = uVar6;
    __pointer[2] = uVar5;
    __pointer[5] = CONCAT44(uStack_34,param_1);
    __pointer[4] = 1;
    __ptr = pthread_getspecific(param_1);
    pthread_setspecific(param_1,__pointer);
    if (__ptr != (void *)0x0) {
      if ((*(long *)((long)__ptr + 8) != 2) && (*(long *)((long)__ptr + 8) != 0)) {
        plVar7 = *(long **)((long)__ptr + 0x10);
        do {
          lVar8 = *plVar7;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = lVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar8 + -1 == 0) {
          DataMemoryBarrier(2,1);
                    /* try { // try from 008e0b14 to 008e0b17 has its CatchHandler @ 008e0b64 */
          <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+tracing_core::subscriber::Subscriber+core::marker::Sync+{backref_29}::Send>>
          ::drop_slow();
        }
      }
      free(__ptr);
    }
    return __pointer;
  }
                    /* try { // try from 008e0b54 to 008e0b5f has its CatchHandler @ 008e0b8c */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x30);
}


// ===== 008e0ba4  FUN_008e0ba4 =====

void FUN_008e0ba4(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if ((*param_1 != 2) && (*param_1 != 0)) {
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
      <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+tracing_core::subscriber::Subscriber+core::marker::Sync+{backref_29}::Send>>
      ::drop_slow();
      return;
    }
  }
  return;
}


// ===== 008e0bd8  FUN_008e0bd8 =====

void FUN_008e0bd8(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if ((*(long *)(param_1 + 8) != 2) && (*(long *)(param_1 + 8) != 0)) {
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
      <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+tracing_core::subscriber::Subscriber+core::marker::Sync+{backref_29}::Send>>
      ::drop_slow();
      return;
    }
  }
  return;
}


// ===== 008e0c0c  FUN_008e0c0c =====

void FUN_008e0c0c(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *param_1;
                    /* try { // try from 008e0c2c to 008e0c2f has its CatchHandler @ 008e0c6c */
  if ((lVar4 != 2) &&
     (<tracing_core::dispatcher::[2]::tracing_core::dispatcher::Dispatch>::try_close
                (param_1,param_1[3]), lVar4 != 0)) {
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
      <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+tracing_core::subscriber::Subscriber+core::marker::Sync+{backref_29}::Send>>
      ::drop_slow(param_1 + 1);
      return;
    }
  }
  return;
}


// ===== 008e0c84  <tracing::span::tracing::span::Span>::or_current =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing::span::tracing::span::Span>::or_current */

void __rustcall <tracing::span::tracing::span::Span>::or_current(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (*param_2 == 2) {
                    /* try { // try from 008e0ca0 to 008e0ca3 has its CatchHandler @ 008e0ccc */
    current();
    return;
  }
  lVar2 = *param_2;
  lVar4 = param_2[3];
  lVar3 = param_2[2];
  lVar1 = param_2[4];
  param_1[1] = param_2[1];
  *param_1 = lVar2;
  param_1[3] = lVar4;
  param_1[2] = lVar3;
  param_1[4] = lVar1;
  return;
}


// ===== 008e0ce4  <tracing::span::tracing::span::Span>::record_all =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing::span::tracing::span::Span>::record_all */

long * __rustcall <tracing::span::tracing::span::Span>::record_all(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_8;
  
  if (*param_1 != 2) {
    lVar1 = param_1[1];
    if (*param_1 == 1) {
      lVar1 = lVar1 + (*(long *)(param_1[2] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
    }
    local_8 = param_2;
    (**(code **)(param_1[2] + 0x40))(lVar1,param_1 + 3,&local_8);
  }
  return param_1;
}


// ===== 008e0d48  <tracing::span::tracing::span::Span>::new =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing::span::tracing::span::Span>::new */

void __rustcall
<tracing::span::tracing::span::Span>::new(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  ulong *puVar4;
  undefined8 uVar5;
  ulong *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 local_60 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = param_2;
  uStack_48 = param_3;
  if (*(long *)PTR_SCOPED_COUNT_00b01060 == 0) {
    if (*(long *)PTR_GLOBAL_INIT_00b01070 != 2) {
      local_60[0] = 1;
      plVar11 = *(long **)(PTR_NONE_00b01078 + 8);
      lVar7 = *(long *)(PTR_NONE_00b01078 + 0x10);
      if (*(long *)PTR_NONE_00b01078 != 1) goto LAB_008e1058;
      uVar5 = (**(code **)(lVar7 + 0x38))
                        ((long)plVar11 + (*(long *)(lVar7 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
                         local_60);
      do {
        lVar9 = *plVar11;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar2) {
          *plVar11 = lVar9 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      goto LAB_008e104c;
    }
    local_60[0] = 1;
    plVar11 = *(long **)(PTR_GLOBAL_DISPATCH_00b01080 + 8);
    lVar7 = *(long *)(PTR_GLOBAL_DISPATCH_00b01080 + 0x10);
    if (*(long *)PTR_GLOBAL_DISPATCH_00b01080 == 1) {
      uVar5 = (**(code **)(lVar7 + 0x38))
                        ((long)plVar11 + (*(long *)(lVar7 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
                         local_60);
      do {
        lVar9 = *plVar11;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar2) {
          *plVar11 = lVar9 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      goto LAB_008e104c;
    }
LAB_008e1058:
    local_60[0] = 1;
    uVar5 = (**(code **)(lVar7 + 0x38))(plVar11,local_60);
    uVar8 = 0;
  }
  else {
    uVar12 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b01068;
    if (uVar12 == 0) {
      uVar12 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
               lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b01068);
      puVar4 = (ulong *)pthread_getspecific((pthread_key_t)uVar12);
      if (puVar4 <= &DAT_00000001) goto LAB_008e0fe4;
    }
    else {
      puVar4 = (ulong *)pthread_getspecific((pthread_key_t)uVar12);
      if (puVar4 < (ulong *)0x2) {
LAB_008e0fe4:
        puVar4 = (ulong *)FUN_008e0a6c(uVar12 & 0xffffffff,puVar4);
      }
    }
    if (puVar4 != (ulong *)0x0) {
      uVar12 = puVar4[4];
      *(undefined1 *)(puVar4 + 4) = 0;
      if ((uVar12 & 1) == 0) {
        local_60[0] = 1;
        plVar11 = *(long **)(PTR_NONE_00b01078 + 8);
        uVar12 = *(ulong *)(PTR_NONE_00b01078 + 0x10);
        if (*(long *)PTR_NONE_00b01078 == 1) {
          uVar5 = (**(code **)(uVar12 + 0x38))
                            ((long)plVar11 +
                             (*(long *)(uVar12 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,local_60);
          do {
            lVar7 = *plVar11;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar2) {
              *plVar11 = lVar7 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar7 < 0) goto LAB_008e109c;
          uVar8 = 1;
        }
        else {
          uVar5 = (**(code **)(uVar12 + 0x38))(plVar11,local_60);
          uVar8 = 0;
        }
      }
      else {
        if (0x7ffffffffffffffe < *puVar4) {
                    /* try { // try from 008e1090 to 008e109b has its CatchHandler @ 008e10b8 */
                    /* WARNING: Subroutine does not return */
          core::cell::panic_already_mutably_borrowed
                    (&PTR_s__root__cargo_registry_src_index__00aedb20);
        }
        puVar6 = puVar4 + 1;
        uVar10 = *puVar6;
        *puVar4 = *puVar4 + 1;
        if (uVar10 == 2) {
          puVar6 = (ulong *)PTR_GLOBAL_DISPATCH_00b01080;
          if (*(long *)PTR_GLOBAL_INIT_00b01070 != 2) {
            puVar6 = (ulong *)PTR_NONE_00b01078;
          }
          uVar10 = *puVar6;
        }
        plVar11 = (long *)puVar6[1];
        uVar12 = puVar6[2];
        local_60[0] = 1;
        if (uVar10 == 1) {
                    /* try { // try from 008e0e2c to 008e0e37 has its CatchHandler @ 008e10a0 */
          uVar5 = (**(code **)(uVar12 + 0x38))
                            ((long)plVar11 +
                             (*(long *)(uVar12 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,local_60);
          do {
            lVar7 = *plVar11;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar2) {
              *plVar11 = lVar7 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar7 < 0) goto LAB_008e109c;
          uVar8 = 1;
        }
        else {
                    /* try { // try from 008e0f94 to 008e0f9f has its CatchHandler @ 008e10a0 */
          uVar5 = (**(code **)(uVar12 + 0x38))(plVar11,local_60);
          uVar8 = 0;
        }
        *(undefined1 *)(puVar4 + 4) = 1;
        *puVar4 = *puVar4 - 1;
      }
      *param_1 = uVar8;
      param_1[1] = plVar11;
      param_1[2] = uVar12;
      goto LAB_008e1074;
    }
    local_60[0] = 1;
    plVar11 = *(long **)((long)PTR_NONE_00b01078 + 8);
    lVar7 = *(long *)((long)PTR_NONE_00b01078 + 0x10);
    if (*(long *)PTR_NONE_00b01078 != 1) goto LAB_008e1058;
    uVar5 = (**(code **)(lVar7 + 0x38))
                      ((long)plVar11 + (*(long *)(lVar7 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
                       local_60);
    do {
      lVar9 = *plVar11;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = lVar9 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_008e104c:
    if (lVar9 < 0) {
LAB_008e109c:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x8e10a0);
      (*pcVar3)();
    }
    uVar8 = 1;
  }
  *param_1 = uVar8;
  param_1[1] = plVar11;
  param_1[2] = lVar7;
LAB_008e1074:
  param_1[3] = uVar5;
  param_1[4] = param_2;
  return;
}


// ===== 008e10c4  <tracing::span::tracing::span::Span>::current =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing::span::tracing::span::Span>::current */

void __rustcall <tracing::span::tracing::span::Span>::current(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  ulong *puVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  long local_58;
  long local_50;
  undefined8 uStack_48;
  
  if (*(long *)PTR_SCOPED_COUNT_00b01060 == 0) {
    if (*(long *)PTR_GLOBAL_INIT_00b01070 == 2) {
      uVar11 = *(ulong *)PTR_GLOBAL_DISPATCH_00b01080;
      plVar12 = *(long **)(PTR_GLOBAL_DISPATCH_00b01080 + 8);
      uVar13 = *(ulong *)(PTR_GLOBAL_DISPATCH_00b01080 + 0x10);
      plVar5 = plVar12;
      if (uVar11 == 1) {
        plVar5 = (long *)((long)plVar12 +
                         (*(long *)(uVar13 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
      }
      (**(code **)(uVar13 + 0x88))(&local_58,plVar5);
      if (local_58 != 0) goto LAB_008e1490;
      local_58 = local_50;
      uVar6 = uStack_48;
      if ((uVar11 & 1) != 0) {
        uVar8 = (**(code **)(uVar13 + 0x70))
                          ((long)plVar12 +
                           (*(long *)(uVar13 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,&local_58);
        do {
          lVar9 = *plVar12;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar2) {
            *plVar12 = lVar9 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        goto LAB_008e14f0;
      }
LAB_008e14fc:
      uVar8 = (**(code **)(uVar13 + 0x70))(plVar12,&local_58);
      uVar10 = 0;
      goto LAB_008e1510;
    }
    uVar11 = *(ulong *)PTR_NONE_00b01078;
    plVar12 = *(long **)(PTR_NONE_00b01078 + 8);
    uVar13 = *(ulong *)(PTR_NONE_00b01078 + 0x10);
    plVar5 = plVar12;
    if (uVar11 == 1) {
      plVar5 = (long *)((long)plVar12 + (*(long *)(uVar13 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10)
      ;
    }
    (**(code **)(uVar13 + 0x88))(&local_58,plVar5);
    if (local_58 != 0) goto LAB_008e1490;
    local_58 = local_50;
    uVar6 = uStack_48;
    if ((uVar11 & 1) == 0) goto LAB_008e14fc;
    uVar8 = (**(code **)(uVar13 + 0x70))
                      ((long)plVar12 + (*(long *)(uVar13 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
                       &local_58);
    do {
      lVar9 = *plVar12;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar2) {
        *plVar12 = lVar9 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  else {
    uVar11 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b01068;
    if (uVar11 == 0) {
      uVar11 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
               lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b01068);
      puVar4 = (ulong *)pthread_getspecific((pthread_key_t)uVar11);
      if (puVar4 <= &DAT_00000001) goto LAB_008e1438;
    }
    else {
      puVar4 = (ulong *)pthread_getspecific((pthread_key_t)uVar11);
      if (puVar4 < (ulong *)0x2) {
LAB_008e1438:
        puVar4 = (ulong *)FUN_008e0a6c(uVar11 & 0xffffffff,puVar4);
      }
    }
    if (puVar4 != (ulong *)0x0) {
      uVar11 = puVar4[4];
      *(undefined1 *)(puVar4 + 4) = 0;
      if ((uVar11 & 1) == 0) {
        uVar11 = *(ulong *)PTR_NONE_00b01078;
        plVar12 = *(long **)(PTR_NONE_00b01078 + 8);
        uVar13 = *(ulong *)(PTR_NONE_00b01078 + 0x10);
        plVar5 = plVar12;
        if (uVar11 == 1) {
          plVar5 = (long *)((long)plVar12 +
                           (*(long *)(uVar13 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
        }
        uVar6 = (**(code **)(uVar13 + 0x88))(&local_58,plVar5);
        if (local_58 == 0) {
          local_58 = local_50;
          if ((uVar11 & 1) == 0) {
            uVar6 = (**(code **)(uVar13 + 0x70))(plVar12,&local_58);
            uVar8 = 0;
          }
          else {
            uVar6 = (**(code **)(uVar13 + 0x70))
                              ((long)plVar12 +
                               (*(long *)(uVar13 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,&local_58
                              );
            do {
              lVar9 = *plVar12;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar2) {
                *plVar12 = lVar9 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (lVar9 < 0) goto LAB_008e1540;
            uVar8 = 1;
          }
        }
        else {
          uStack_48 = 0;
          uVar8 = 2;
        }
      }
      else {
        if (0x7ffffffffffffffe < *puVar4) {
                    /* try { // try from 008e1534 to 008e153f has its CatchHandler @ 008e155c */
                    /* WARNING: Subroutine does not return */
          core::cell::panic_already_mutably_borrowed
                    (&PTR_s__root__cargo_registry_src_index__00aedb20);
        }
        puVar7 = puVar4 + 1;
        uVar11 = *puVar7;
        *puVar4 = *puVar4 + 1;
        if (uVar11 == 2) {
          puVar7 = (ulong *)PTR_GLOBAL_DISPATCH_00b01080;
          if (*(long *)PTR_GLOBAL_INIT_00b01070 != 2) {
            puVar7 = (ulong *)PTR_NONE_00b01078;
          }
          uVar11 = *puVar7;
        }
        plVar12 = (long *)puVar7[1];
        uVar13 = puVar7[2];
        plVar5 = plVar12;
        if (uVar11 == 1) {
          plVar5 = (long *)((long)plVar12 +
                           (*(long *)(uVar13 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
        }
                    /* try { // try from 008e119c to 008e11a3 has its CatchHandler @ 008e1544 */
        uVar6 = (**(code **)(uVar13 + 0x88))(&local_58,plVar5);
        if (local_58 == 0) {
          local_58 = local_50;
          if ((uVar11 & 1) == 0) {
                    /* try { // try from 008e13d0 to 008e13db has its CatchHandler @ 008e1544 */
            uVar6 = (**(code **)(uVar13 + 0x70))(plVar12,&local_58);
            uVar8 = 0;
          }
          else {
                    /* try { // try from 008e138c to 008e1397 has its CatchHandler @ 008e1544 */
            uVar6 = (**(code **)(uVar13 + 0x70))
                              ((long)plVar12 +
                               (*(long *)(uVar13 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,&local_58
                              );
            do {
              lVar9 = *plVar12;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar2) {
                *plVar12 = lVar9 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (lVar9 < 0) goto LAB_008e1540;
            uVar8 = 1;
          }
        }
        else {
          uStack_48 = 0;
          uVar8 = 2;
        }
        *(undefined1 *)(puVar4 + 4) = 1;
        *puVar4 = *puVar4 - 1;
      }
      *param_1 = uVar8;
      param_1[1] = plVar12;
      param_1[2] = uVar13;
      param_1[3] = uVar6;
      param_1[4] = uStack_48;
      return;
    }
    uVar11 = *(ulong *)PTR_NONE_00b01078;
    plVar12 = *(long **)((long)PTR_NONE_00b01078 + 8);
    uVar13 = *(ulong *)((long)PTR_NONE_00b01078 + 0x10);
    plVar5 = plVar12;
    if (uVar11 == 1) {
      plVar5 = (long *)((long)plVar12 + (*(long *)(uVar13 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10)
      ;
    }
    (**(code **)(uVar13 + 0x88))(&local_58,plVar5);
    if (local_58 != 0) {
LAB_008e1490:
      param_1[4] = 0;
      *param_1 = 2;
      return;
    }
    local_58 = local_50;
    uVar6 = uStack_48;
    if ((uVar11 & 1) == 0) goto LAB_008e14fc;
    uVar8 = (**(code **)(uVar13 + 0x70))
                      ((long)plVar12 + (*(long *)(uVar13 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
                       &local_58);
    do {
      lVar9 = *plVar12;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar2) {
        *plVar12 = lVar9 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
LAB_008e14f0:
  if (lVar9 < 0) {
LAB_008e1540:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x8e1544);
    (*pcVar3)();
  }
  uVar10 = 1;
  uVar6 = uStack_48;
LAB_008e1510:
  *param_1 = uVar10;
  param_1[1] = plVar12;
  param_1[2] = uVar13;
  param_1[3] = uVar8;
  param_1[4] = uVar6;
  return;
}


// ===== 008e1568  <tracing::span::tracing::span::Span>::new_root =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing::span::tracing::span::Span>::new_root */

void __rustcall
<tracing::span::tracing::span::Span>::new_root
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  ulong *puVar4;
  undefined8 uVar5;
  ulong *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 local_60 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = param_2;
  uStack_48 = param_3;
  if (*(long *)PTR_SCOPED_COUNT_00b01060 == 0) {
    if (*(long *)PTR_GLOBAL_INIT_00b01070 != 2) {
      local_60[0] = 0;
      plVar11 = *(long **)(PTR_NONE_00b01078 + 8);
      lVar7 = *(long *)(PTR_NONE_00b01078 + 0x10);
      if (*(long *)PTR_NONE_00b01078 != 1) goto LAB_008e1864;
      uVar5 = (**(code **)(lVar7 + 0x38))
                        ((long)plVar11 + (*(long *)(lVar7 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
                         local_60);
      do {
        lVar9 = *plVar11;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar2) {
          *plVar11 = lVar9 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      goto LAB_008e1858;
    }
    local_60[0] = 0;
    plVar11 = *(long **)(PTR_GLOBAL_DISPATCH_00b01080 + 8);
    lVar7 = *(long *)(PTR_GLOBAL_DISPATCH_00b01080 + 0x10);
    if (*(long *)PTR_GLOBAL_DISPATCH_00b01080 == 1) {
      uVar5 = (**(code **)(lVar7 + 0x38))
                        ((long)plVar11 + (*(long *)(lVar7 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
                         local_60);
      do {
        lVar9 = *plVar11;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar2) {
          *plVar11 = lVar9 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      goto LAB_008e1858;
    }
LAB_008e1864:
    local_60[0] = 0;
    uVar5 = (**(code **)(lVar7 + 0x38))(plVar11,local_60);
    uVar8 = 0;
  }
  else {
    uVar12 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b01068;
    if (uVar12 == 0) {
      uVar12 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
               lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b01068);
      puVar4 = (ulong *)pthread_getspecific((pthread_key_t)uVar12);
      if (puVar4 <= &DAT_00000001) goto LAB_008e17f4;
    }
    else {
      puVar4 = (ulong *)pthread_getspecific((pthread_key_t)uVar12);
      if (puVar4 < (ulong *)0x2) {
LAB_008e17f4:
        puVar4 = (ulong *)FUN_008e0a6c(uVar12 & 0xffffffff,puVar4);
      }
    }
    if (puVar4 != (ulong *)0x0) {
      uVar12 = puVar4[4];
      *(undefined1 *)(puVar4 + 4) = 0;
      if ((uVar12 & 1) == 0) {
        local_60[0] = 0;
        plVar11 = *(long **)(PTR_NONE_00b01078 + 8);
        uVar12 = *(ulong *)(PTR_NONE_00b01078 + 0x10);
        if (*(long *)PTR_NONE_00b01078 == 1) {
          uVar5 = (**(code **)(uVar12 + 0x38))
                            ((long)plVar11 +
                             (*(long *)(uVar12 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,local_60);
          do {
            lVar7 = *plVar11;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar2) {
              *plVar11 = lVar7 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar7 < 0) goto LAB_008e18a8;
          uVar8 = 1;
        }
        else {
          uVar5 = (**(code **)(uVar12 + 0x38))(plVar11,local_60);
          uVar8 = 0;
        }
      }
      else {
        if (0x7ffffffffffffffe < *puVar4) {
                    /* try { // try from 008e189c to 008e18a7 has its CatchHandler @ 008e18c4 */
                    /* WARNING: Subroutine does not return */
          core::cell::panic_already_mutably_borrowed
                    (&PTR_s__root__cargo_registry_src_index__00aedb20);
        }
        puVar6 = puVar4 + 1;
        uVar10 = *puVar6;
        *puVar4 = *puVar4 + 1;
        if (uVar10 == 2) {
          puVar6 = (ulong *)PTR_GLOBAL_DISPATCH_00b01080;
          if (*(long *)PTR_GLOBAL_INIT_00b01070 != 2) {
            puVar6 = (ulong *)PTR_NONE_00b01078;
          }
          uVar10 = *puVar6;
        }
        plVar11 = (long *)puVar6[1];
        uVar12 = puVar6[2];
        local_60[0] = 0;
        if (uVar10 == 1) {
                    /* try { // try from 008e1648 to 008e1653 has its CatchHandler @ 008e18ac */
          uVar5 = (**(code **)(uVar12 + 0x38))
                            ((long)plVar11 +
                             (*(long *)(uVar12 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,local_60);
          do {
            lVar7 = *plVar11;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar2) {
              *plVar11 = lVar7 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar7 < 0) goto LAB_008e18a8;
          uVar8 = 1;
        }
        else {
                    /* try { // try from 008e17a4 to 008e17af has its CatchHandler @ 008e18ac */
          uVar5 = (**(code **)(uVar12 + 0x38))(plVar11,local_60);
          uVar8 = 0;
        }
        *(undefined1 *)(puVar4 + 4) = 1;
        *puVar4 = *puVar4 - 1;
      }
      *param_1 = uVar8;
      param_1[1] = plVar11;
      param_1[2] = uVar12;
      goto LAB_008e1880;
    }
    local_60[0] = 0;
    plVar11 = *(long **)((long)PTR_NONE_00b01078 + 8);
    lVar7 = *(long *)((long)PTR_NONE_00b01078 + 0x10);
    if (*(long *)PTR_NONE_00b01078 != 1) goto LAB_008e1864;
    uVar5 = (**(code **)(lVar7 + 0x38))
                      ((long)plVar11 + (*(long *)(lVar7 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
                       local_60);
    do {
      lVar9 = *plVar11;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = lVar9 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_008e1858:
    if (lVar9 < 0) {
LAB_008e18a8:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x8e18ac);
      (*pcVar3)();
    }
    uVar8 = 1;
  }
  *param_1 = uVar8;
  param_1[1] = plVar11;
  param_1[2] = lVar7;
LAB_008e1880:
  param_1[3] = uVar5;
  param_1[4] = param_2;
  return;
}


// ===== 008e18d0  <tracing::span::tracing::span::Span>::make_with =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing::span::tracing::span::Span>::make_with */

void __rustcall
<tracing::span::tracing::span::Span>::make_with
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  plVar1 = (long *)param_4[1];
  lVar8 = param_4[2];
  if (*param_4 == 1) {
    uVar5 = (**(code **)(lVar8 + 0x38))
                      ((long)plVar1 + (*(long *)(lVar8 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x8e1960);
      (*pcVar4)();
    }
    uVar7 = 1;
  }
  else {
    uVar5 = (**(code **)(lVar8 + 0x38))(plVar1);
    uVar7 = 0;
  }
  *param_1 = uVar7;
  param_1[1] = plVar1;
  param_1[2] = lVar8;
  param_1[3] = uVar5;
  param_1[4] = param_2;
  return;
}


// ===== 008e1960  <tracing::span::[8]::tracing::span::Inner>::follows_from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing::span::[8]::tracing::span::Inner>::follows_from */

void __rustcall
<tracing::span::[8]::tracing::span::Inner>::follows_from(long *param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1[1];
  if (*param_1 == 1) {
    lVar1 = lVar1 + (*(long *)(param_1[2] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x008e1994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[2] + 0x48))(lVar1,param_1 + 3,param_2);
  return;
}


// ===== 008e1998  tracing::__macro_support::__is_enabled =====

/* WARNING: Unknown calling convention: __rustcall */
/* tracing::__macro_support::__is_enabled */

undefined8 __rustcall tracing::__macro_support::__is_enabled(undefined8 param_1,char param_2)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  
  if (param_2 == '\x02') {
    return 1;
  }
  if (*(long *)PTR_SCOPED_COUNT_00b01060 == 0) {
    if (*(long *)PTR_GLOBAL_INIT_00b01070 == 2) {
      lVar1 = *(long *)PTR_GLOBAL_DISPATCH_00b01080;
      lVar5 = *(long *)(PTR_GLOBAL_DISPATCH_00b01080 + 8);
      lVar7 = *(long *)(PTR_GLOBAL_DISPATCH_00b01080 + 0x10);
      goto joined_r0x008e1ad8;
    }
  }
  else {
    uVar8 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b01068;
    if (uVar8 == 0) {
      uVar8 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
              lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b01068);
      puVar2 = (ulong *)pthread_getspecific((pthread_key_t)uVar8);
      if (puVar2 <= &DAT_00000001) goto LAB_008e1b00;
    }
    else {
      puVar2 = (ulong *)pthread_getspecific((pthread_key_t)uVar8);
      if (puVar2 < (ulong *)0x2) {
LAB_008e1b00:
        puVar2 = (ulong *)FUN_008e0a6c(uVar8 & 0xffffffff,puVar2);
      }
    }
    if ((puVar2 != (ulong *)0x0) &&
       (uVar8 = puVar2[4], *(undefined1 *)(puVar2 + 4) = 0, (uVar8 & 1) != 0)) {
      if (0x7ffffffffffffffe < *puVar2) {
                    /* try { // try from 008e1b58 to 008e1b63 has its CatchHandler @ 008e1b80 */
                    /* WARNING: Subroutine does not return */
        core::cell::panic_already_mutably_borrowed(&PTR_s__root__cargo_registry_src_index__00aedb20)
        ;
      }
      puVar6 = puVar2 + 1;
      uVar8 = *puVar6;
      *puVar2 = *puVar2 + 1;
      if (uVar8 == 2) {
        puVar6 = (ulong *)PTR_GLOBAL_DISPATCH_00b01080;
        if (*(long *)PTR_GLOBAL_INIT_00b01070 != 2) {
          puVar6 = (ulong *)PTR_NONE_00b01078;
        }
        uVar8 = *puVar6;
      }
      uVar3 = puVar6[1];
      if (uVar8 == 1) {
        uVar3 = uVar3 + (*(long *)(puVar6[2] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
      }
                    /* try { // try from 008e1a84 to 008e1a8b has its CatchHandler @ 008e1b68 */
      uVar4 = (**(code **)(puVar6[2] + 0x28))(uVar3,param_1);
      *(undefined1 *)(puVar2 + 4) = 1;
      *puVar2 = *puVar2 - 1;
      return uVar4;
    }
  }
  lVar1 = *(long *)PTR_NONE_00b01078;
  lVar5 = *(long *)(PTR_NONE_00b01078 + 8);
  lVar7 = *(long *)(PTR_NONE_00b01078 + 0x10);
joined_r0x008e1ad8:
  if (lVar1 == 1) {
    lVar5 = lVar5 + (*(long *)(lVar7 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x008e1b54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(lVar7 + 0x28))(lVar5,param_1);
  return uVar4;
}


// ===== 008e1b8c  <tracing::span::Span_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing::span::Span as core::fmt::Debug>::fmt */

void __rustcall <tracing::span::Span_as_core::fmt::Debug>::fmt(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong **ppuVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 auStack_60 [16];
  ulong *local_50;
  undefined8 uStack_48;
  ulong local_40;
  undefined8 uStack_38;
  long local_18;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_60,param_2,&DAT_002bd1a4,4);
  lVar5 = param_1[4];
  if (lVar5 == 0) {
    puVar2 = &DAT_002bd190;
    ppuVar3 = (ulong **)&DAT_0032fb85;
    puVar4 = &DAT_00aedb98;
  }
  else {
    local_50 = *(ulong **)(lVar5 + 0x10);
    uStack_48 = *(undefined8 *)(lVar5 + 0x18);
    uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                      (auStack_60,&DAT_002bd1cc,4,&local_50,&DAT_00aedb38);
    local_18 = lVar5;
    uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                      (uVar1,&DAT_0032fb78,5,&local_18,&DAT_00aedb58);
    local_40 = *(ulong *)(lVar5 + 0x20);
    uStack_38 = *(undefined8 *)(lVar5 + 0x28);
    <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
              (uVar1,&DAT_0032fb7d,6,&local_40,&DAT_00aedb38);
    if (*param_1 == 2) {
      <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                (auStack_60,&DAT_002a1a98,8,&DAT_0032fb85,&DAT_00aedb98);
      local_40 = *(ulong *)(lVar5 + 0x50);
      uStack_38 = *(undefined8 *)(lVar5 + 0x58);
    }
    else {
      local_40 = param_1[3];
      <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                (auStack_60,&DAT_0032fb83,2,&local_40,&DAT_00aedb78);
      local_40 = *(ulong *)(lVar5 + 0x50);
      uStack_38 = *(undefined8 *)(lVar5 + 0x58);
    }
    if (local_40 != 0) {
      local_50 = &local_40;
      <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                (auStack_60,"module_path",0xb,&local_50,&DAT_00aedbb8);
    }
    local_50 = *(ulong **)(lVar5 + 8);
    if (*(int *)(lVar5 + 8) == 1) {
      local_40 = (ulong)&local_50 | 4;
      <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                (auStack_60,&DAT_002bd1a0,4,&local_40,&DAT_00aedbd8);
    }
    local_40 = *(ulong *)(lVar5 + 0x60);
    uStack_38 = *(undefined8 *)(lVar5 + 0x68);
    if (local_40 == 0) goto LAB_008e1d64;
    local_50 = &local_40;
    puVar2 = &DAT_002bd240;
    puVar4 = &DAT_00aedbb8;
    ppuVar3 = &local_50;
  }
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (auStack_60,puVar2,4,ppuVar3,puVar4);
LAB_008e1d64:
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish(auStack_60);
  return;
}


// ===== 008e1d80  FUN_008e1d80 =====

void FUN_008e1d80(undefined8 *param_1,long param_2)

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


// ===== 008e1dd8  FUN_008e1dd8 =====

void FUN_008e1dd8(undefined8 *param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,&DAT_0032fbd8 + *(int *)(&DAT_0032fbd8 + *(long *)*param_1 * 4),
             *(undefined8 *)(&DAT_0032fbb0 + *(long *)*param_1 * 8));
  return;
}


// ===== 008e1e04  FUN_008e1e04 =====

void FUN_008e1e04(undefined8 *param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = *param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,"Level",5,&local_18,&DAT_00aedc18);
  return;
}


// ===== 008e1e48  FUN_008e1e48 =====

void FUN_008e1e48(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Debug>::fmt(*(undefined8 *)*param_1,((undefined8 *)*param_1)[1],param_2);
  return;
}


// ===== 008e1e5c  FUN_008e1e5c =====

void FUN_008e1e5c(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Debug>::fmt(*param_1,param_1[1],param_2);
  return;
}


// ===== 008e1e70  FUN_008e1e70 =====

void FUN_008e1e70(undefined8 *param_1,long param_2)

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


// ===== 008e1e8c  <core::option::Option<tracing_core::span::Id>as{backref_13}::convert::From<tracing::span::Span>>::from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::option::Option<tracing_core::span::Id> as {backref
   13}::convert::From<tracing::span::Span>>::from */

long __rustcall
<core::option::Option<tracing_core::span::Id>as{backref_13}::convert::From<tracing::span::Span>>::
from(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *param_1;
  if (lVar5 == 2) {
    lVar4 = 0;
  }
  else {
                    /* try { // try from 008e1ec0 to 008e1ecf has its CatchHandler @ 008e1f0c */
    lVar4 = param_1[3];
    <tracing_core::dispatcher::[2]::tracing_core::dispatcher::Dispatch>::try_close(param_1,lVar4);
    if (lVar5 != 0) {
      plVar3 = (long *)param_1[1];
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
        <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+tracing_core::subscriber::Subscriber+core::marker::Sync+{backref_29}::Send>>
        ::drop_slow(param_1 + 1);
        return lVar4;
      }
    }
  }
  return lVar4;
}


// ===== 008e1f24  FUN_008e1f24 =====

void FUN_008e1f24(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,"IdTraceDebugInfoWarnError",2,&local_18,&DAT_00aedbf8);
  return;
}


// ===== 008e1f64  <tracing::span::Inner_as_core::clone::Clone>::clone =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing::span::Inner as core::clone::Clone>::clone */

void __rustcall
<tracing::span::Inner_as_core::clone::Clone>::clone(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  plVar1 = (long *)param_2[1];
  lVar7 = param_2[2];
  if (*param_2 != 1) {
    uVar5 = (**(code **)(lVar7 + 0x70))(plVar1,param_2 + 3);
    *param_1 = 0;
    param_1[1] = plVar1;
    param_1[2] = lVar7;
    param_1[3] = uVar5;
    return;
  }
  uVar5 = (**(code **)(lVar7 + 0x70))
                    ((long)plVar1 + (*(long *)(lVar7 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
                     param_2 + 3);
  do {
    lVar6 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar6 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (-1 < lVar6) {
    *param_1 = 1;
    param_1[1] = plVar1;
    param_1[2] = lVar7;
    param_1[3] = uVar5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x8e2008);
  (*pcVar4)();
}


// ===== 008e2008  <bool_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <bool_as_core::fmt::Display>::fmt(void)

{
  (*(code *)PTR_fmt_00b02798)();
  return;
}


// ===== 008e200c  FUN_008e200c =====

void FUN_008e200c(long *param_1,undefined8 *param_2,char *param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  code *pcVar14;
  undefined **local_78;
  code *local_70;
  long lStack_68;
  
  lVar4 = *param_1;
  if (lVar4 == 0) {
    FUN_008e4b08(param_2,param_3);
    return;
  }
  lVar10 = 8;
  if (lVar4 != 1) {
    lVar10 = 0x18;
  }
  lVar11 = 0x10;
  if (lVar4 != 1) {
    lVar11 = 0x20;
  }
  lVar4 = *(long *)(param_1[1] + lVar11);
  if (lVar4 != 0) {
    lVar11 = *(long *)(param_1[1] + lVar10);
    uVar9 = *param_2;
    lVar10 = 0;
    do {
      plVar5 = (long *)(lVar11 + lVar10 * 0x18);
      lVar13 = *plVar5;
      if (lVar13 == 1) {
        pcVar12 = (code *)plVar5[1];
        if (pcVar12 != (code *)0xffffffffffffffff) {
          lVar6 = *(long *)pcVar12;
          do {
            if (lVar6 == 0) goto LAB_008e207c;
            if (lVar6 < 0) {
              local_78 = &PTR_DAT_00aeddc0;
              local_70 = FUN_008e7434;
                    /* WARNING: Subroutine does not return */
              core::panicking::panic_fmt
                        (&DAT_002ab692,&local_78,&PTR_s__nix_store_8006w282fgsx3273c878b_00aedde8);
            }
            lVar7 = *(long *)pcVar12;
            if (lVar7 == lVar6) {
              cVar3 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(pcVar12,0x10);
              if (bVar8) {
                *(long *)pcVar12 = lVar6 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                bVar8 = true;
              }
              else {
                bVar8 = false;
              }
            }
            else {
              bVar8 = false;
              ClearExclusiveLocal();
            }
            lVar6 = lVar7;
          } while (!bVar8);
          lVar6 = plVar5[2];
          local_78 = (undefined **)0x1;
          pcVar14 = pcVar12 + (*(long *)(lVar6 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
          lStack_68 = lVar6;
          goto LAB_008e2128;
        }
      }
      else {
        local_78 = (undefined **)0x0;
        lStack_68 = plVar5[2];
        pcVar14 = (code *)plVar5[1];
        lVar6 = plVar5[2];
        pcVar12 = pcVar14;
LAB_008e2128:
        local_70 = pcVar12;
                    /* try { // try from 008e212c to 008e2133 has its CatchHandler @ 008e21e8 */
        cVar3 = (**(code **)(lVar6 + 0x20))(pcVar14,uVar9);
        cVar2 = *param_3;
        cVar1 = cVar2;
        if (cVar2 != cVar3) {
          cVar1 = '\x01';
        }
        if (cVar2 != -1) {
          cVar3 = cVar1;
        }
        *param_3 = cVar3;
        if ((int)lVar13 != 0) {
          do {
            lVar13 = *(long *)pcVar12;
            cVar3 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(pcVar12,0x10);
            if (bVar8) {
              *(long *)pcVar12 = lVar13 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar13 + -1 == 0) {
            DataMemoryBarrier(2,1);
            <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+tracing_core::subscriber::Subscriber+core::marker::Sync+{backref_29}::Send>>
            ::drop_slow(&local_70);
          }
        }
      }
LAB_008e207c:
      lVar10 = lVar10 + 1;
    } while (lVar10 != lVar4);
  }
  return;
}


// ===== 008e221c  FUN_008e221c =====

void FUN_008e221c(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  bool bVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  code *pcVar15;
  undefined **local_78;
  code *local_70;
  long lStack_68;
  
  lVar6 = *param_1;
  if (lVar6 == 0) {
    FUN_008e48cc(param_2);
    return;
  }
  lVar11 = 8;
  if (lVar6 != 1) {
    lVar11 = 0x18;
  }
  lVar12 = 0x10;
  if (lVar6 != 1) {
    lVar12 = 0x20;
  }
  lVar6 = *(long *)(param_1[1] + lVar12);
  if (lVar6 != 0) {
    lVar12 = *(long *)(param_1[1] + lVar11);
    lVar11 = 0;
    do {
      plVar7 = (long *)(lVar12 + lVar11 * 0x18);
      lVar14 = *plVar7;
      if (lVar14 == 1) {
        pcVar13 = (code *)plVar7[1];
        if (pcVar13 != (code *)0xffffffffffffffff) {
          lVar8 = *(long *)pcVar13;
          do {
            if (lVar8 == 0) goto LAB_008e228c;
            if (lVar8 < 0) {
              local_78 = &PTR_DAT_00aeddc0;
              local_70 = FUN_008e7434;
                    /* WARNING: Subroutine does not return */
              core::panicking::panic_fmt
                        (&DAT_002ab692,&local_78,&PTR_s__nix_store_8006w282fgsx3273c878b_00aedde8);
            }
            lVar9 = *(long *)pcVar13;
            if (lVar9 == lVar8) {
              cVar4 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(pcVar13,0x10);
              if (bVar10) {
                *(long *)pcVar13 = lVar8 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') {
                bVar10 = true;
              }
              else {
                bVar10 = false;
              }
            }
            else {
              bVar10 = false;
              ClearExclusiveLocal();
            }
            lVar8 = lVar9;
          } while (!bVar10);
          lVar8 = plVar7[2];
          local_78 = (undefined **)0x1;
          pcVar15 = pcVar13 + (*(long *)(lVar8 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
          lStack_68 = lVar8;
          goto LAB_008e2338;
        }
      }
      else {
        local_78 = (undefined **)0x0;
        lStack_68 = plVar7[2];
        pcVar15 = (code *)plVar7[1];
        lVar8 = plVar7[2];
        pcVar13 = pcVar15;
LAB_008e2338:
        local_70 = pcVar13;
                    /* try { // try from 008e233c to 008e233f has its CatchHandler @ 008e2408 */
        uVar5 = (**(code **)(lVar8 + 0x30))(pcVar15);
        uVar3 = 5;
        if (*param_2 != 0xffffffffffffffff) {
          uVar3 = *param_2;
        }
        uVar1 = 5;
        if (uVar5 != 0xffffffffffffffff) {
          uVar1 = uVar5;
        }
        uVar2 = 0;
        if (uVar5 != 0xfffffffffffffffe) {
          uVar2 = uVar1;
        }
        if (uVar2 < uVar3) {
          uVar3 = 0;
          if (uVar5 != 0xfffffffffffffffe) {
            uVar3 = uVar5;
          }
          *param_2 = uVar3;
        }
        if ((int)lVar14 != 0) {
          do {
            lVar14 = *(long *)pcVar13;
            cVar4 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(pcVar13,0x10);
            if (bVar10) {
              *(long *)pcVar13 = lVar14 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar14 + -1 == 0) {
            DataMemoryBarrier(2,1);
            <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+tracing_core::subscriber::Subscriber+core::marker::Sync+{backref_29}::Send>>
            ::drop_slow(&local_70);
          }
        }
      }
LAB_008e228c:
      lVar11 = lVar11 + 1;
    } while (lVar11 != lVar6);
  }
  return;
}


// ===== 008e243c  FUN_008e243c =====

void FUN_008e243c(void *param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  
  if (param_1 != (void *)0xffffffffffffffff) {
    plVar1 = (long *)((long)param_1 + 8);
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 + -1 == 0) {
      DataMemoryBarrier(2,1);
      uVar2 = *(ulong *)(param_2 + 0x10);
      if (uVar2 < 9) {
        uVar2 = 8;
      }
      if ((*(long *)(param_2 + 8) + uVar2 + 0xf & -uVar2) != 0) {
        free(param_1);
        return;
      }
    }
  }
  return;
}


// ===== 008e248c  FUN_008e248c =====

void FUN_008e248c(long param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint *puVar4;
  
  puVar4 = *(uint **)(param_1 + 8);
  do {
    uVar1 = *puVar4;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
    if (bVar3) {
      *puVar4 = uVar1 - 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((uVar1 - 1 & 0xbfffffff) != 0x80000000) {
    return;
  }
  <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::wake_writer_or_readers();
  return;
}


// ===== 008e24b8  FUN_008e24b8 =====

void FUN_008e24b8(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  ulong uVar5;
  
  piVar4 = (int *)*param_1;
  if ((((*(byte *)(param_1 + 1) & 1) == 0) &&
      ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) != 0)) &&
     (uVar5 = std::panicking::panic_count::is_zero_slow_path(), (uVar5 & 1) == 0)) {
    *(undefined1 *)(piVar4 + 2) = 1;
  }
  do {
    iVar1 = *piVar4;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
    if (bVar3) {
      *piVar4 = iVar1 + -0x3fffffff;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + 0xc0000001U >> 0x1e != 0) {
    <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::wake_writer_or_readers()
    ;
    return;
  }
  return;
}


// ===== 008e2540  FUN_008e2540 =====

void FUN_008e2540(long param_1)

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


// ===== 008e2590  FUN_008e2590 =====

void FUN_008e2590(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  void *__ptr;
  long lVar5;
  long lVar6;
  
  if ((*param_1 != 0) && (__ptr = (void *)param_1[1], __ptr != (void *)0xffffffffffffffff)) {
    lVar5 = param_1[2];
    plVar1 = (long *)((long)__ptr + 8);
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 + -1 == 0) {
      DataMemoryBarrier(2,1);
      uVar2 = *(ulong *)(lVar5 + 0x10);
      if (uVar2 < 9) {
        uVar2 = 8;
      }
      if ((*(long *)(lVar5 + 8) + uVar2 + 0xf & -uVar2) != 0) {
        free(__ptr);
        return;
      }
    }
  }
  return;
}


// ===== 008e25f4  FUN_008e25f4 =====

ulong FUN_008e25f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_40;
  ulong local_38;
  undefined1 local_30;
  long local_28;
  
  local_38 = 0;
  local_40 = param_1;
                    /* try { // try from 008e2610 to 008e261f has its CatchHandler @ 008e26a4 */
  iVar1 = core::fmt::write(&local_40,&PTR_FUN_00aedc38,param_2,param_3);
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
                    /* try { // try from 008e2688 to 008e269f has its CatchHandler @ 008e26a4 */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_0032fbec,0xad,&PTR_s__nix_store_8006w282fgsx3273c878b_00aedc68);
  }
  return local_38;
}


// ===== 008e26bc  FUN_008e26bc =====

void FUN_008e26bc(undefined8 *param_1,uint *param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined **local_58;
  code *pcStack_50;
  long local_48;
  
  if (DAT_00b0f620 == 2) {
    if (DAT_00b0f5f8 == 0) goto LAB_008e2704;
LAB_008e284c:
    ClearExclusiveLocal();
  }
  else {
    FUN_008e6584(&DAT_00b0f5f0,&DAT_00b0f5f0);
    if (DAT_00b0f5f8 != 0) goto LAB_008e284c;
LAB_008e2704:
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(0xb0f5f8,0x10);
    if (bVar3) {
      DAT_00b0f5f8 = 0x3fffffff;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') {
      uVar5 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      goto joined_r0x008e286c;
    }
  }
  <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::write_contended
            (&DAT_00b0f5f8);
  uVar5 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
joined_r0x008e286c:
  if ((uVar5 & 0x7fffffffffffffff) == 0) {
    bVar4 = 0;
  }
  else {
    bVar4 = std::panicking::panic_count::is_zero_slow_path();
    bVar4 = bVar4 ^ 1;
  }
  if (DAT_00b0f600 != '\0') {
    local_58 = (undefined **)&DAT_00b0f5f8;
    uVar5 = (ulong)pcStack_50 >> 8;
    pcStack_50 = (code *)CONCAT71((int7)uVar5,bVar4);
                    /* try { // try from 008e288c to 008e28af has its CatchHandler @ 008e2908 */
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              (&DAT_0032fc57,0x2b,&local_58,&PTR_FUN_00aedd70,
               &PTR_s__root__cargo_registry_src_index__00aedd90);
  }
                    /* try { // try from 008e273c to 008e2743 has its CatchHandler @ 008e28f4 */
  FUN_008e6714(&DAT_00b0f608);
  if (*param_3 == 1) {
    pcStack_50 = (code *)param_3[1];
    local_58 = (undefined **)0x1;
    plVar1 = (long *)((long)pcStack_50 + 8);
    do {
      lVar7 = *plVar1;
      while (lVar7 != -1) {
        if (lVar7 < 0) {
          local_58 = &PTR_DAT_00aeddc0;
          pcStack_50 = FUN_008e7434;
                    /* try { // try from 008e28c8 to 008e28df has its CatchHandler @ 008e28f4 */
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_fmt
                    (&DAT_002ab692,&local_58,&PTR_s__nix_store_8006w282fgsx3273c878b_00aeddd0);
        }
        lVar8 = *plVar1;
        if (lVar8 == lVar7) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar7 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          lVar7 = lVar8;
          if (cVar2 == '\0') goto LAB_008e27a8;
        }
        else {
          ClearExclusiveLocal();
          lVar7 = lVar8;
        }
      }
      InstructionSynchronizationBarrier();
    } while( true );
  }
  pcStack_50 = (code *)param_3[1];
  local_58 = (undefined **)0x0;
LAB_008e27a8:
  lVar7 = DAT_00b0f618;
  local_48 = param_3[2];
  if (DAT_00b0f618 == DAT_00b0f608) {
                    /* try { // try from 008e27cc to 008e27d7 has its CatchHandler @ 008e28e4 */
    <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<tracing_core::dispatcher::Registrar>>::grow_one
              (&DAT_00b0f608);
  }
  puVar6 = (undefined8 *)(DAT_00b0f610 + lVar7 * 0x18);
  DAT_00b0f618 = lVar7 + 1;
  puVar6[1] = pcStack_50;
  *puVar6 = local_58;
  puVar6[2] = local_48;
  *param_2 = (uint)(lVar7 < 1);
  *(byte *)(param_1 + 2) = bVar4;
  *param_1 = 2;
  param_1[1] = &DAT_00b0f5f8;
  return;
}


// ===== 008e2920  FUN_008e2920 =====

/* WARNING: Removing unreachable block (ram,0x008e29dc) */

void FUN_008e2920(undefined8 *param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *local_30;
  undefined4 *puStack_28;
  
  if (*param_2 != '\0') {
    *param_1 = 0;
    return;
  }
  if (DAT_00b0f620 != 2) {
    FUN_008e6584(&DAT_00b0f5f0,&DAT_00b0f5f0);
  }
  if (DAT_00b0f5f8 < 0x3ffffffe) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0xb0f5f8,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      DAT_00b0f5f8 = DAT_00b0f5f8 + 1;
    }
    if (cVar1 == '\0') goto joined_r0x008e299c;
  }
  <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::read_contended
            (&DAT_00b0f5f8);
joined_r0x008e299c:
  if (DAT_00b0f600 != '\0') {
    local_30 = &DAT_00b0f608;
    puStack_28 = &DAT_00b0f5f8;
                    /* try { // try from 008e2a08 to 008e2a2b has its CatchHandler @ 008e2a30 */
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              (&DAT_0032fc57,0x2b,&local_30,&PTR_FUN_00aedd50,
               &PTR_s__root__cargo_registry_src_index__00aedda8);
  }
  param_1[1] = &DAT_00b0f608;
  param_1[2] = &DAT_00b0f5f8;
  *param_1 = 1;
  return;
}


// ===== 008e2a70  <tracing_core::field::[R]::tracing_core::field::ValueSet>::len =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::field::[R]::tracing_core::field::ValueSet>::len */

long __rustcall <tracing_core::field::[R]::tracing_core::field::ValueSet>::len(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar4 = param_1[1];
  if (uVar4 == 0) {
    return 0;
  }
  lVar3 = *(long *)(param_1[2] + 0x10);
  if (uVar4 == 1) {
    uVar7 = 0;
    lVar2 = 0;
  }
  else {
    lVar5 = 0;
    lVar2 = 0;
    uVar7 = uVar4 & 0xfffffffffffffffe;
    uVar8 = uVar4 & 0xfffffffffffffffe;
    plVar6 = (long *)*param_1;
    do {
      lVar9 = *plVar6;
      plVar1 = plVar6 + 3;
      plVar6 = plVar6 + 6;
      if (*(long *)(lVar9 + 0x10) == lVar3) {
        lVar5 = lVar5 + 1;
      }
      if (*(long *)(*plVar1 + 0x10) == lVar3) {
        lVar2 = lVar2 + 1;
      }
      uVar8 = uVar8 - 2;
    } while (uVar8 != 0);
    lVar2 = lVar2 + lVar5;
    if (uVar4 == uVar7) {
      return lVar2;
    }
  }
  lVar5 = uVar4 - uVar7;
  plVar6 = (long *)*param_1 + uVar7 * 3;
  do {
    if (*(long *)(*plVar6 + 0x10) == lVar3) {
      lVar2 = lVar2 + 1;
    }
    lVar5 = lVar5 + -1;
    plVar6 = plVar6 + 3;
  } while (lVar5 != 0);
  return lVar2;
}


// ===== 008e2b14  <tracing_core::field::[R]::tracing_core::field::ValueSet>::record =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::field::[R]::tracing_core::field::ValueSet>::record */

void __rustcall
<tracing_core::field::[R]::tracing_core::field::ValueSet>::record
          (long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  if (param_1[1] != 0) {
    lVar1 = *(long *)(param_1[2] + 0x10);
    lVar2 = param_1[1] * 0x18;
    plVar3 = (long *)(*param_1 + 0x10);
    do {
      if ((*(long *)(plVar3[-2] + 0x10) == lVar1) && (plVar3[-1] != 0)) {
        (**(code **)(*plVar3 + 0x18))(plVar3[-1],plVar3[-2],param_2,param_3);
      }
      lVar2 = lVar2 + -0x18;
      plVar3 = plVar3 + 3;
    } while (lVar2 != 0);
  }
  return;
}


// ===== 008e2ba4  <tracing_core::field::[R]::tracing_core::field::ValueSet>::is_empty =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::field::[R]::tracing_core::field::ValueSet>::is_empty */

undefined8 __rustcall
<tracing_core::field::[R]::tracing_core::field::ValueSet>::is_empty(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  if (param_1[1] != 0) {
    lVar1 = param_1[1] * 0x18;
    plVar2 = (long *)(*param_1 + 8);
    do {
      if ((*plVar2 != 0) && (*(long *)(plVar2[-1] + 0x10) == *(long *)(param_1[2] + 0x10))) {
        return 0;
      }
      lVar1 = lVar1 + -0x18;
      plVar2 = plVar2 + 3;
    } while (lVar1 != 0);
  }
  return 1;
}


// ===== 008e2bfc  <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+tracing_core::subscriber::Subscriber+core::marker::Sync+{backref_29}::Send>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<dyn Trait<Assoc = X> + tracing_core::subscriber::Subscriber +
   core::marker::Sync + {backref 29}::Send>>::drop_slow */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+tracing_core::subscriber::Subscriber+core::marker::Sync+{backref_29}::Send>>
::drop_slow(undefined8 *param_1)

{
  long *plVar1;
  void *__ptr;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  
  __ptr = (void *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  uVar6 = puVar2[2];
  if ((code *)*puVar2 != (code *)0x0) {
                    /* try { // try from 008e2c28 to 008e2c2f has its CatchHandler @ 008e2c9c */
    (*(code *)*puVar2)((long)__ptr + (uVar6 - 1 & 0xfffffffffffffff0) + 0x10);
  }
  if (__ptr != (void *)0xffffffffffffffff) {
    plVar1 = (long *)((long)__ptr + 8);
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 + -1 == 0) {
      DataMemoryBarrier(2,1);
      if (uVar6 < 9) {
        uVar6 = 8;
      }
      if ((uVar6 + puVar2[1] + 0xf & -uVar6) != 0) {
        free(__ptr);
        return;
      }
    }
  }
  return;
}


// ===== 008e2cb4  <tracing_core::field::HexBytes_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::field::HexBytes as core::fmt::Debug>::fmt */

undefined8 __rustcall
<tracing_core::field::HexBytes_as_core::fmt::Debug>::fmt(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long local_58;
  long *plStack_50;
  code *local_48;
  
  uVar4 = <core::fmt::Formatter_as_core::fmt::Write>::write_char(param_2,0x5b);
  if ((uVar4 & 1) != 0) {
    return 1;
  }
  lVar1 = *param_1;
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    plStack_50 = &local_58;
    local_48 = FUN_008e745c;
    local_58 = lVar1;
    iVar3 = core::fmt::write(*param_2,param_2[1],&DAT_002a1430,&plStack_50);
    if (iVar3 != 0) {
      return 1;
    }
    lVar6 = lVar1 + 1;
    if (lVar6 != lVar1 + lVar2) {
      do {
        local_48 = FUN_008e745c;
        local_58 = lVar6;
        plStack_50 = &local_58;
        uVar4 = core::fmt::write(*param_2,param_2[1],&DAT_0032fc96,&plStack_50);
        if ((uVar4 & 1) != 0) {
          return 1;
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 != lVar1 + lVar2);
    }
  }
  uVar5 = <core::fmt::Formatter_as_core::fmt::Write>::write_char(param_2,0x5d);
  return uVar5;
}


// ===== 008e2db0  FUN_008e2db0 =====

bool FUN_008e2db0(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  long local_28;
  
  lVar1 = FUN_008e63e4(*param_1);
  if (lVar1 != 0) {
    uVar2 = param_1[1];
    if (((uVar2 != 0) && (1 < (uVar2 & 3) - 2)) && ((uVar2 & 3) != 0)) {
      local_28 = uVar2 - 1;
                    /* try { // try from 008e2e04 to 008e2e0b has its CatchHandler @ 008e2e28 */
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
    }
    param_1[1] = lVar1;
  }
  return lVar1 != 0;
}


// ===== 008e2e30  <<dyn_Trait<Assoc=X>+tracing_core::field::Value_as_core::fmt::Debug>::fmt::NullCallsite_as_tracing_core::callsite::Callsite>::set_interest =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<dyn Trait<Assoc = X> + tracing_core::field::Value as core::fmt::Debug>::fmt::NullCallsite as
   tracing_core::callsite::Callsite>::set_interest */

void __rustcall
<<dyn_Trait<Assoc=X>+tracing_core::field::Value_as_core::fmt::Debug>::fmt::NullCallsite_as_tracing_core::callsite::Callsite>
::set_interest(void)

{
  undefined **local_20;
  code *pcStack_18;
  
  local_20 = &PTR_DAT_00aede58;
  pcStack_18 = FUN_008e7434;
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002ae57a,&local_20,&PTR_s__root__cargo_registry_src_index__00aede68);
}


// ===== 008e2e68  <<dyn_Trait<Assoc=X>+tracing_core::field::Value_as_core::fmt::Debug>::fmt::NullCallsite_as_tracing_core::callsite::Callsite>::metadata =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<dyn Trait<Assoc = X> + tracing_core::field::Value as core::fmt::Debug>::fmt::NullCallsite as
   tracing_core::callsite::Callsite>::metadata */

void __rustcall
<<dyn_Trait<Assoc=X>+tracing_core::field::Value_as_core::fmt::Debug>::fmt::NullCallsite_as_tracing_core::callsite::Callsite>
::metadata(void)

{
  undefined **local_20;
  code *pcStack_18;
  
  local_20 = &PTR_DAT_00aede80;
  pcStack_18 = FUN_008e7434;
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002ae57a,&local_20,&PTR_s__root__cargo_registry_src_index__00aede90);
}


// ===== 008e2ea0  <u64_as_tracing_core::field::Value>::record =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u64 as tracing_core::field::Value>::record */

void __rustcall
<u64_as_tracing_core::field::Value>::record
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x008e2eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x28))(param_3,param_2,*param_1);
  return;
}


// ===== 008e2eb4  <i8_as_tracing_core::field::Value>::record =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i8 as tracing_core::field::Value>::record */

void __rustcall
<i8_as_tracing_core::field::Value>::record
          (char *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x008e2ec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x20))(param_3,param_2,(long)*param_1);
  return;
}


// ===== 008e2ec8  <u128_as_tracing_core::field::Value>::record =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u128 as tracing_core::field::Value>::record */

void __rustcall
<u128_as_tracing_core::field::Value>::record
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x008e2edc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x38))(param_3,param_2,*param_1,param_1[1]);
  return;
}


// ===== 008e2ee0  <i128_as_tracing_core::field::Value>::record =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i128 as tracing_core::field::Value>::record */

void __rustcall
<i128_as_tracing_core::field::Value>::record
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x008e2ef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x30))(param_3,param_2,*param_1,param_1[1]);
  return;
}


// ===== 008e2ef8  <bool_as_tracing_core::field::Value>::record =====

/* WARNING: Unknown calling convention: __rustcall */
/* <bool as tracing_core::field::Value>::record */

void __rustcall
<bool_as_tracing_core::field::Value>::record
          (undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x008e2f08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x40))(param_3,param_2,*param_1);
  return;
}


// ===== 008e2f0c  <f64_as_tracing_core::field::Value>::record =====

/* WARNING: Unknown calling convention: __rustcall */
/* <f64 as tracing_core::field::Value>::record */

void __rustcall
<f64_as_tracing_core::field::Value>::record
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x008e2f18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x18))(*param_1,param_3);
  return;
}


// ===== 008e2f1c  <f32_as_tracing_core::field::Value>::record =====

/* WARNING: Unknown calling convention: __rustcall */
/* <f32 as tracing_core::field::Value>::record */

void __rustcall
<f32_as_tracing_core::field::Value>::record
          (float *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x008e2f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x18))((double)*param_1,param_3);
  return;
}


// ===== 008e2f30  FUN_008e2f30 =====

void FUN_008e2f30(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 *local_30;
  code *pcStack_28;
  
  local_30 = (undefined1 *)&local_40;
  puVar1 = (undefined1 *)*param_1;
  pcStack_28 = FUN_008e737c;
  local_40 = param_3;
  uStack_38 = param_4;
  uVar2 = core::fmt::write(**(undefined8 **)param_1[1],(*(undefined8 **)param_1[1])[1],&DAT_002ab692
                           ,&local_30);
  *puVar1 = uVar2;
  return;
}


// ===== 008e2f84  <tracing_core::metadata::Kind_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::metadata::Kind as core::fmt::Debug>::fmt */

undefined8 __rustcall
<tracing_core::metadata::Kind_as_core::fmt::Debug>::fmt(byte *param_1,undefined8 *param_2)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  byte *local_40;
  undefined *puStack_38;
  
  uVar2 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_0032fd02,5);
  if ((uVar2 & 1) != 0) {
    return 1;
  }
  bVar1 = *param_1;
  if ((bVar1 & 1) == 0) {
    if ((bVar1 >> 1 & 1) != 0) {
LAB_008e3080:
      uVar2 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd0fc,4);
      if ((uVar2 & 1) != 0) {
        return 1;
      }
      goto LAB_008e30b0;
    }
    if ((bVar1 >> 2 & 1) == 0) {
      puStack_38 = PTR_fmt_00b01088;
      local_40 = param_1;
      uVar2 = core::fmt::write(*param_2,param_2[1],&DAT_0032fd0c,&local_40);
      if ((uVar2 & 1) != 0) {
        return 1;
      }
      goto LAB_008e3114;
    }
  }
  else {
    uVar2 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_0032fd07,5);
    if ((uVar2 & 1) != 0) {
      return 1;
    }
    if ((bVar1 >> 1 & 1) != 0) {
      uVar2 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_0032fc42,3);
      if ((uVar2 & 1) != 0) {
        return 1;
      }
      goto LAB_008e3080;
    }
LAB_008e30b0:
    if ((bVar1 >> 2 & 1) == 0) goto LAB_008e3114;
    uVar2 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_0032fc42,3);
    if ((uVar2 & 1) != 0) {
      return 1;
    }
  }
  uVar2 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd22c,4);
  if ((uVar2 & 1) != 0) {
    return 1;
  }
LAB_008e3114:
  uVar3 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,")",1);
  return uVar3;
}


// ===== 008e313c  <u32_as_tracing_core::field::Value>::record =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u32 as tracing_core::field::Value>::record */

void __rustcall
<u32_as_tracing_core::field::Value>::record
          (undefined4 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x008e314c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x28))(param_3,param_2,*param_1);
  return;
}


// ===== 008e3150  <u16_as_tracing_core::field::Value>::record =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u16 as tracing_core::field::Value>::record */

void __rustcall
<u16_as_tracing_core::field::Value>::record
          (undefined2 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x008e3160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x28))(param_3,param_2,*param_1);
  return;
}


// ===== 008e3164  FUN_008e3164 =====

void FUN_008e3164(undefined8 *param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,&DAT_0032feb0 + *(int *)(&DAT_0032feb0 + *(long *)*param_1 * 4),
             *(undefined8 *)(&DAT_0032fe88 + *(long *)*param_1 * 8));
  return;
}


// ===== 008e3190  FUN_008e3190 =====

void FUN_008e3190(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  uVar2 = plVar3[4];
  if (uVar2 < (ulong)plVar3[1]) {
    puVar1 = (undefined8 *)(*plVar3 + uVar2 * 0x10);
    <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,*puVar1,puVar1[1]);
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_bounds_check
            (uVar2,plVar3[1],&PTR_s__root__cargo_registry_src_index__00aedea8);
}


// ===== 008e31d4  <u8_as_tracing_core::field::Value>::record =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u8 as tracing_core::field::Value>::record */

void __rustcall
<u8_as_tracing_core::field::Value>::record
          (undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x008e31e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x28))(param_3,param_2,*param_1);
  return;
}


// ===== 008e31e8  <i64_as_tracing_core::field::Value>::record =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i64 as tracing_core::field::Value>::record */

void __rustcall
<i64_as_tracing_core::field::Value>::record
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x008e31f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x20))(param_3,param_2,*param_1);
  return;
}


// ===== 008e31fc  <i32_as_tracing_core::field::Value>::record =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i32 as tracing_core::field::Value>::record */

void __rustcall
<i32_as_tracing_core::field::Value>::record
          (int *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x008e320c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x20))(param_3,param_2,(long)*param_1);
  return;
}


// ===== 008e3210  <i16_as_tracing_core::field::Value>::record =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i16 as tracing_core::field::Value>::record */

void __rustcall
<i16_as_tracing_core::field::Value>::record
          (short *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x008e3220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x20))(param_3,param_2,(long)*param_1);
  return;
}


// ===== 008e3224  <str_as_tracing_core::field::Value>::record =====

/* WARNING: Unknown calling convention: __rustcall */
/* <str as tracing_core::field::Value>::record */

void __rustcall
<str_as_tracing_core::field::Value>::record
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
                    /* WARNING: Could not recover jumptable at 0x008e3240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_5 + 0x48))(param_4,param_3,param_1,param_2);
  return;
}


// ===== 008e3244  <tracing_core::metadata::Level_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::metadata::Level as core::fmt::Display>::fmt */

void __rustcall
<tracing_core::metadata::Level_as_core::fmt::Display>::fmt(long *param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 < 2) {
    if (lVar1 == 0) {
      <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,"TRACE",5);
      return;
    }
    <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,"DEBUG",5);
    return;
  }
  if (lVar1 != 2) {
    if (lVar1 == 3) {
      <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,&DAT_002bd274,4);
      return;
    }
    <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,"ERROR",5);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,&DAT_002bd184,4);
  return;
}


// ===== 008e32b8  <[u8]as_tracing_core::field::Value>::record =====

/* WARNING: Unknown calling convention: __rustcall */
/* <[u8] as tracing_core::field::Value>::record */

void __rustcall
<[u8]as_tracing_core::field::Value>::record
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
                    /* WARNING: Could not recover jumptable at 0x008e32d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_5 + 0x50))(param_4,param_3,param_1,param_2);
  return;
}


// ===== 008e32d8  <tracing_core::metadata::Level_as_core::str::traits::FromStr>::from_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::metadata::Level as core::str::traits::FromStr>::from_str */

long __rustcall
<tracing_core::metadata::Level_as_core::str::traits::FromStr>::from_str(byte *param_1,long param_2)

{
  byte bVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  byte *pbVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (param_2 == 0) {
    return -1;
  }
  pbVar7 = param_1;
  if (param_2 == 1) {
    bVar1 = *param_1;
    if (bVar1 == 0x2b) {
      return -1;
    }
    if (bVar1 == 0x2d) {
      return -1;
    }
    uVar6 = (ulong)(bVar1 != 0x2b);
    if (bVar1 == 0x2b) {
      pbVar7 = param_1 + 1;
    }
  }
  else {
    bVar1 = *param_1;
    if (bVar1 == 0x2b) {
      pbVar7 = param_1 + 1;
    }
    uVar6 = param_2 - (ulong)(bVar1 == 0x2b);
  }
  uVar5 = (uint)bVar1;
  if (uVar6 < 0x11) {
    if (uVar6 != 0) {
      uVar8 = 0;
      do {
        if (9 < *pbVar7 - 0x30) goto LAB_008e33b0;
        uVar6 = uVar6 - 1;
        uVar8 = uVar8 * 10 + (ulong)(*pbVar7 - 0x30);
        pbVar7 = pbVar7 + 1;
      } while (uVar6 != 0);
LAB_008e333c:
      if (uVar8 - 1 < 5) {
        return 5 - uVar8;
      }
    }
  }
  else {
    uVar8 = 0;
    while( true ) {
      if (uVar6 == 0) goto LAB_008e333c;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar8;
      if (SUB168(auVar2 * ZEXT816(10),8) != 0) break;
      uVar9 = uVar8 * 10;
      uVar3 = *pbVar7 - 0x30;
      uVar8 = uVar9 + uVar3;
      if ((9 < uVar3) || (uVar6 = uVar6 - 1, pbVar7 = pbVar7 + 1, CARRY8(uVar9,(ulong)uVar3)))
      break;
    }
  }
LAB_008e33b0:
  if (param_2 == 4) {
    uVar4 = 0x20;
    uVar3 = uVar4;
    if (0x19 < uVar5 - 0x41) {
      uVar3 = 0;
    }
    if ((uVar3 | uVar5) == 0x69) {
      if (0x19 < param_1[1] - 0x41) {
        uVar4 = 0;
      }
      if ((uVar4 | param_1[1]) == 0x6e) {
        uVar3 = 0x20;
        uVar5 = uVar3;
        if (0x19 < param_1[2] - 0x41) {
          uVar5 = 0;
        }
        if ((uVar5 | param_1[2]) == 0x66) {
          if (0x19 < param_1[3] - 0x41) {
            uVar3 = 0;
          }
          if ((uVar3 | param_1[3]) == 0x6f) {
            return 2;
          }
        }
      }
    }
    else if ((uVar3 | uVar5) == 0x77) {
      uVar3 = 0x20;
      uVar5 = uVar3;
      if (0x19 < param_1[1] - 0x41) {
        uVar5 = 0;
      }
      if ((uVar5 | param_1[1]) == 0x61) {
        if (0x19 < param_1[2] - 0x41) {
          uVar3 = 0;
        }
        if ((uVar3 | param_1[2]) == 0x72) {
          uVar5 = 0x20;
          if (0x19 < param_1[3] - 0x41) {
            uVar5 = 0;
          }
          if ((uVar5 | param_1[3]) == 0x6e) {
            return 3;
          }
        }
      }
    }
  }
  else if (param_2 == 5) {
    uVar4 = 0x20;
    uVar3 = uVar4;
    if (0x19 < uVar5 - 0x41) {
      uVar3 = 0;
    }
    uVar3 = uVar3 | uVar5;
    if (uVar3 == 100) {
      if (0x19 < param_1[1] - 0x41) {
        uVar4 = 0;
      }
      if ((uVar4 | param_1[1]) == 0x65) {
        uVar3 = 0x20;
        uVar5 = uVar3;
        if (0x19 < param_1[2] - 0x41) {
          uVar5 = 0;
        }
        if ((uVar5 | param_1[2]) == 0x62) {
          if (0x19 < param_1[3] - 0x41) {
            uVar3 = 0;
          }
          if ((uVar3 | param_1[3]) == 0x75) {
            uVar5 = 0x20;
            if (0x19 < param_1[4] - 0x41) {
              uVar5 = 0;
            }
            if ((uVar5 | param_1[4]) == 0x67) {
              return 1;
            }
          }
        }
      }
    }
    else if (uVar3 == 0x74) {
      uVar3 = 0x20;
      uVar5 = uVar3;
      if (0x19 < param_1[1] - 0x41) {
        uVar5 = 0;
      }
      if ((uVar5 | param_1[1]) == 0x72) {
        if (0x19 < param_1[2] - 0x41) {
          uVar3 = 0;
        }
        if ((uVar3 | param_1[2]) == 0x61) {
          uVar3 = 0x20;
          uVar5 = uVar3;
          if (0x19 < param_1[3] - 0x41) {
            uVar5 = 0;
          }
          if ((uVar5 | param_1[3]) == 99) {
            if (0x19 < param_1[4] - 0x41) {
              uVar3 = 0;
            }
            return -(ulong)((uVar3 | param_1[4]) != 0x65);
          }
        }
      }
    }
    else if (uVar3 == 0x65) {
      uVar3 = 0x20;
      uVar5 = uVar3;
      if (0x19 < param_1[1] - 0x41) {
        uVar5 = 0;
      }
      if ((uVar5 | param_1[1]) == 0x72) {
        if (0x19 < param_1[2] - 0x41) {
          uVar3 = 0;
        }
        if ((uVar3 | param_1[2]) == 0x72) {
          uVar3 = 0x20;
          uVar5 = uVar3;
          if (0x19 < param_1[3] - 0x41) {
            uVar5 = 0;
          }
          if ((uVar5 | param_1[3]) == 0x6f) {
            if (0x19 < param_1[4] - 0x41) {
              uVar3 = 0;
            }
            if ((uVar3 | param_1[4]) == 0x72) {
              return 4;
            }
          }
        }
      }
    }
  }
  return -1;
}


// ===== 008e3658  <tracing_core::field::Field_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::field::Field as core::fmt::Display>::fmt */

void __rustcall
<tracing_core::field::Field_as_core::fmt::Display>::fmt(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  uVar2 = param_1[4];
  if (uVar2 < (ulong)param_1[1]) {
    puVar1 = (undefined8 *)(*param_1 + uVar2 * 0x10);
    <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,*puVar1,puVar1[1]);
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_bounds_check
            (uVar2,param_1[1],&PTR_s__root__cargo_registry_src_index__00aedea8);
}


// ===== 008e369c  <tracing_core::field::FieldSet_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::field::FieldSet as core::fmt::Debug>::fmt */

void __rustcall
<tracing_core::field::FieldSet_as_core::fmt::Debug>::fmt(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_30 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,&DAT_002a18b0,8);
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (auStack_30,"namesTraceDebugInfoWarnError",5,param_1,&DAT_00aedec0);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (uVar1,"callsite",8,param_1 + 0x10,&DAT_00aedee0);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 008e371c  <tracing_core::field::FieldSet_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::field::FieldSet as core::fmt::Display>::fmt */

void __rustcall
<tracing_core::field::FieldSet_as_core::fmt::Display>::fmt(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_40 [16];
  long local_18;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_set(auStack_40,param_2);
  if (param_1[1] != 0) {
    lVar1 = param_1[1] << 4;
    lVar2 = *param_1;
    do {
      local_18 = lVar2;
      <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry
                (auStack_40,&local_18,&DAT_00aee360);
      lVar1 = lVar1 + -0x10;
      lVar2 = lVar2 + 0x10;
    } while (lVar1 != 0);
  }
  <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::finish(auStack_40);
  return;
}


// ===== 008e3794  FUN_008e3794 =====

void FUN_008e3794(undefined8 param_1,long param_2)

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


// ===== 008e37ac  <tracing_core::field::ValueSet_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::field::ValueSet as core::fmt::Debug>::fmt */

void __rustcall
<tracing_core::field::ValueSet_as_core::fmt::Debug>::fmt(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined1 auStack_50 [16];
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_50,param_2,&DAT_002a1358,8);
  if (lVar2 != 0) {
    plVar3 = (long *)(lVar1 + 0x10);
    do {
      if (plVar3[-1] != 0) {
        (**(code **)(*plVar3 + 0x18))(plVar3[-1],plVar3[-2],auStack_50,&DAT_00aedc80);
      }
      lVar2 = lVar2 + -1;
      plVar3 = plVar3 + 3;
    } while (lVar2 != 0);
  }
  uStack_38 = *(undefined8 *)(param_1[2] + 0x18);
  local_40 = *(undefined8 *)(param_1[2] + 0x10);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (auStack_50,"callsite",8,&local_40,&DAT_00aedee0);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 008e3868  FUN_008e3868 =====

void FUN_008e3868(undefined8 param_1,long param_2)

{
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <i128_as_core::fmt::LowerHex>::fmt();
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <i128_as_core::fmt::Display>::fmt();
    return;
  }
  <i128_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 008e3880  <tracing_core::field::ValueSet_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::field::ValueSet as core::fmt::Display>::fmt */

void __rustcall
<tracing_core::field::ValueSet_as_core::fmt::Display>::fmt(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined1 auStack_40 [16];
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  <core::fmt::[a]::core::fmt::Formatter>::debug_map(auStack_40,param_2);
  if (lVar2 != 0) {
    plVar3 = (long *)(lVar1 + 0x10);
    do {
      if (plVar3[-1] != 0) {
        (**(code **)(*plVar3 + 0x18))(plVar3[-1],plVar3[-2],auStack_40,&DAT_00aedce8);
      }
      lVar2 = lVar2 + -1;
      plVar3 = plVar3 + 3;
    } while (lVar2 != 0);
  }
  <core::fmt::builders::[7]::core::fmt::builders::DebugMap>::finish(auStack_40);
  return;
}


// ===== 008e3904  FUN_008e3904 =====

void FUN_008e3904(undefined8 param_1,long param_2)

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


// ===== 008e391c  FUN_008e391c =====

void FUN_008e391c(undefined8 param_1,long param_2)

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


// ===== 008e3934  FUN_008e3934 =====

void FUN_008e3934(undefined8 param_1,long param_2)

{
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <u128_as_core::fmt::LowerHex>::fmt();
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <u128_as_core::fmt::Display>::fmt();
    return;
  }
  <u128_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 008e394c  <tracing_core::metadata::Metadata_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::metadata::Metadata as core::fmt::Debug>::fmt */

void __rustcall
<tracing_core::metadata::Metadata_as_core::fmt::Debug>::fmt(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined ***pppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_78 [20];
  undefined4 local_64;
  undefined **local_60;
  code *pcStack_58;
  undefined4 *local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined **ppuStack_38;
  undefined8 *local_30;
  undefined8 **ppuStack_28;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_78,param_2,&DAT_002a19a8,8);
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (auStack_78,&DAT_002bd1cc,4,param_1 + 0x10,&DAT_00aedf00);
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (uVar1,"target",6,param_1 + 0x20,&DAT_00aedf00);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (uVar1,"level",5,param_1,&DAT_00aedf20);
  if (*(undefined ***)(param_1 + 0x50) != (undefined **)0x0) {
    pcStack_58 = *(code **)(param_1 + 0x58);
    local_60 = *(undefined ***)(param_1 + 0x50);
    <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
              (auStack_78,"module_path",0xb,&local_60,&DAT_00aedf00);
  }
  puVar4 = *(undefined **)(param_1 + 0x60);
  if (puVar4 == (undefined *)0x0) {
    if (*(uint *)(param_1 + 8) == 0) goto LAB_008e3ad8;
    puVar4 = &DAT_002bd1a0;
    puVar3 = &DAT_00aedf40;
    pppuVar2 = &local_60;
    local_60 = (undefined **)CONCAT44(local_60._4_4_,*(undefined4 *)(param_1 + 0xc));
LAB_008e3ad0:
    uVar1 = 4;
  }
  else {
    ppuStack_38 = *(undefined ***)(param_1 + 0x68);
    local_40 = puVar4;
    if ((*(uint *)(param_1 + 8) & 1) == 0) {
      local_60 = &local_40;
      puVar4 = &DAT_002bd240;
      pcStack_58 = FUN_008e7434;
      ppuStack_28 = &local_60;
      puVar3 = &DAT_00aedf60;
      local_30 = (undefined8 *)&DAT_002ab692;
      pppuVar2 = (undefined ***)&local_30;
      goto LAB_008e3ad0;
    }
    local_60 = &local_40;
    puVar4 = &DAT_002a1458;
    pcStack_58 = FUN_008e7434;
    local_50 = &local_64;
    puVar3 = &DAT_00aedf60;
    pppuVar2 = (undefined ***)&local_30;
    puStack_48 = PTR_fmt_00b00c40;
    ppuStack_28 = &local_60;
    uVar1 = 8;
    local_30 = (undefined8 *)&DAT_002a59d3;
    local_64 = *(undefined4 *)(param_1 + 0xc);
  }
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (auStack_78,puVar4,uVar1,pppuVar2,puVar3);
LAB_008e3ad8:
  local_30 = (undefined8 *)(param_1 + 0x30);
  ppuStack_28 = (undefined8 **)PTR_fmt_00b01090;
  ppuStack_38 = (undefined **)&local_30;
  local_40 = &DAT_002ab692;
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (auStack_78,"fields",6,&local_40,&DAT_00aedf60);
  pcStack_58 = *(code **)(param_1 + 0x48);
  local_60 = *(undefined ***)(param_1 + 0x40);
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (uVar1,"callsite",8,&local_60,&DAT_00aedee0);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (uVar1,"kind",4,param_1 + 0x70,&DAT_00aedf80);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 008e3b64  <tracing_core::metadata::LevelFilter_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::metadata::LevelFilter as core::fmt::Display>::fmt */

void __rustcall
<tracing_core::metadata::LevelFilter_as_core::fmt::Display>::fmt(long *param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (1 < lVar1) {
    if (lVar1 == 2) {
      <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,&DAT_002bcf94,4);
      return;
    }
    if (lVar1 == 3) {
      <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,"warn",4);
      return;
    }
    <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,&DAT_0032fc45,5);
    return;
  }
  if (lVar1 == -1) {
    <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,&DAT_0032fc54,3);
    return;
  }
  if (lVar1 == 0) {
    <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,&DAT_0032fc4f,5);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,&DAT_0032fc4a,5);
  return;
}


// ===== 008e3bf0  <tracing_core::metadata::LevelFilter_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::metadata::LevelFilter as core::fmt::Debug>::fmt */

void __rustcall
<tracing_core::metadata::LevelFilter_as_core::fmt::Debug>::fmt(long *param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (1 < lVar1) {
    if (lVar1 == 2) {
      <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,"LevelFilter::INFO",0x11);
      return;
    }
    if (lVar1 == 3) {
      <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,"LevelFilter::WARN",0x11);
      return;
    }
    <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,"LevelFilter::ERROR",0x12);
    return;
  }
  if (lVar1 == -1) {
    <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,&DAT_002a0de0,0x10);
    return;
  }
  if (lVar1 == 0) {
    <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,"LevelFilter::TRACE",0x12);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,"LevelFilter::DEBUG",0x12);
  return;
}


// ===== 008e3c7c  <tracing_core::metadata::LevelFilter_as_core::str::traits::FromStr>::from_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::metadata::LevelFilter as core::str::traits::FromStr>::from_str */

undefined8 __rustcall
<tracing_core::metadata::LevelFilter_as_core::str::traits::FromStr>::from_str
          (byte *param_1,long param_2)

{
  undefined8 uVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong uVar10;
  
  if (param_2 == 0) {
    return 4;
  }
  pbVar8 = param_1;
  if (param_2 == 1) {
    bVar2 = *param_1;
    if (bVar2 == 0x2b) {
      return 0xfffffffffffffffe;
    }
    if (bVar2 == 0x2d) {
      return 0xfffffffffffffffe;
    }
    uVar7 = (ulong)(bVar2 != 0x2b);
    if (bVar2 == 0x2b) {
      pbVar8 = param_1 + 1;
    }
  }
  else {
    bVar2 = *param_1;
    if (bVar2 == 0x2b) {
      pbVar8 = param_1 + 1;
    }
    uVar7 = param_2 - (ulong)(bVar2 == 0x2b);
  }
  uVar6 = (uint)bVar2;
  if (uVar7 < 0x11) {
    if (uVar7 == 0) {
      return 0xffffffffffffffff;
    }
    uVar9 = 0;
    do {
      if (9 < *pbVar8 - 0x30) goto LAB_008e3d58;
      uVar7 = uVar7 - 1;
      uVar9 = uVar9 * 10 + (ulong)(*pbVar8 - 0x30);
      pbVar8 = pbVar8 + 1;
    } while (uVar7 != 0);
LAB_008e3ce0:
    if (uVar9 < 6) {
      return *(undefined8 *)(&DAT_0032fec8 + uVar9 * 8);
    }
  }
  else {
    uVar9 = 0;
    while( true ) {
      if (uVar7 == 0) goto LAB_008e3ce0;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar9;
      if (SUB168(auVar3 * ZEXT816(10),8) != 0) break;
      uVar10 = uVar9 * 10;
      uVar4 = *pbVar8 - 0x30;
      uVar9 = uVar10 + uVar4;
      if ((9 < uVar4) || (uVar7 = uVar7 - 1, pbVar8 = pbVar8 + 1, CARRY8(uVar10,(ulong)uVar4)))
      break;
    }
  }
LAB_008e3d58:
  if (param_2 < 4) {
    if (param_2 == 0) {
      return 4;
    }
    if (param_2 == 3) {
      uVar5 = 0x20;
      uVar4 = uVar5;
      if (0x19 < uVar6 - 0x41) {
        uVar4 = 0;
      }
      if ((uVar4 | uVar6) == 0x6f) {
        if (0x19 < param_1[1] - 0x41) {
          uVar5 = 0;
        }
        if ((uVar5 | param_1[1]) != 0x66) {
          return 0xfffffffffffffffe;
        }
        uVar6 = 0x20;
        if (0x19 < param_1[2] - 0x41) {
          uVar6 = 0;
        }
        uVar1 = 0xfffffffffffffffe;
        if ((uVar6 | param_1[2]) == 0x66) {
          uVar1 = 0xffffffffffffffff;
        }
        return uVar1;
      }
    }
  }
  else if (param_2 == 4) {
    uVar5 = 0x20;
    uVar4 = uVar5;
    if (0x19 < uVar6 - 0x41) {
      uVar4 = 0;
    }
    if ((uVar4 | uVar6) == 0x69) {
      if (0x19 < param_1[1] - 0x41) {
        uVar5 = 0;
      }
      if ((uVar5 | param_1[1]) == 0x6e) {
        uVar4 = 0x20;
        uVar6 = uVar4;
        if (0x19 < param_1[2] - 0x41) {
          uVar6 = 0;
        }
        if ((uVar6 | param_1[2]) == 0x66) {
          if (0x19 < param_1[3] - 0x41) {
            uVar4 = 0;
          }
          if ((uVar4 | param_1[3]) == 0x6f) {
            return 2;
          }
        }
      }
    }
    else if ((uVar4 | uVar6) == 0x77) {
      uVar4 = 0x20;
      uVar6 = uVar4;
      if (0x19 < param_1[1] - 0x41) {
        uVar6 = 0;
      }
      if ((uVar6 | param_1[1]) == 0x61) {
        if (0x19 < param_1[2] - 0x41) {
          uVar4 = 0;
        }
        if ((uVar4 | param_1[2]) == 0x72) {
          uVar6 = 0x20;
          if (0x19 < param_1[3] - 0x41) {
            uVar6 = 0;
          }
          if ((uVar6 | param_1[3]) == 0x6e) {
            return 3;
          }
        }
      }
    }
  }
  else if (param_2 == 5) {
    uVar5 = 0x20;
    uVar4 = uVar5;
    if (0x19 < uVar6 - 0x41) {
      uVar4 = 0;
    }
    uVar4 = uVar4 | uVar6;
    if (uVar4 == 100) {
      if (0x19 < param_1[1] - 0x41) {
        uVar5 = 0;
      }
      if ((uVar5 | param_1[1]) == 0x65) {
        uVar4 = 0x20;
        uVar6 = uVar4;
        if (0x19 < param_1[2] - 0x41) {
          uVar6 = 0;
        }
        if ((uVar6 | param_1[2]) == 0x62) {
          if (0x19 < param_1[3] - 0x41) {
            uVar4 = 0;
          }
          if ((uVar4 | param_1[3]) == 0x75) {
            uVar6 = 0x20;
            if (0x19 < param_1[4] - 0x41) {
              uVar6 = 0;
            }
            if ((uVar6 | param_1[4]) == 0x67) {
              return 1;
            }
          }
        }
      }
    }
    else if (uVar4 == 0x74) {
      uVar4 = 0x20;
      uVar6 = uVar4;
      if (0x19 < param_1[1] - 0x41) {
        uVar6 = 0;
      }
      if ((uVar6 | param_1[1]) == 0x72) {
        if (0x19 < param_1[2] - 0x41) {
          uVar4 = 0;
        }
        if ((uVar4 | param_1[2]) == 0x61) {
          uVar4 = 0x20;
          uVar6 = uVar4;
          if (0x19 < param_1[3] - 0x41) {
            uVar6 = 0;
          }
          if ((uVar6 | param_1[3]) == 99) {
            if (0x19 < param_1[4] - 0x41) {
              uVar4 = 0;
            }
            if ((uVar4 | param_1[4]) == 0x65) {
              return 0;
            }
          }
        }
      }
    }
    else if (uVar4 == 0x65) {
      uVar4 = 0x20;
      uVar6 = uVar4;
      if (0x19 < param_1[1] - 0x41) {
        uVar6 = 0;
      }
      if ((uVar6 | param_1[1]) == 0x72) {
        if (0x19 < param_1[2] - 0x41) {
          uVar4 = 0;
        }
        if ((uVar4 | param_1[2]) == 0x72) {
          uVar4 = 0x20;
          uVar6 = uVar4;
          if (0x19 < param_1[3] - 0x41) {
            uVar6 = 0;
          }
          if ((uVar6 | param_1[3]) == 0x6f) {
            if (0x19 < param_1[4] - 0x41) {
              uVar4 = 0;
            }
            if ((uVar4 | param_1[4]) == 0x72) {
              return 4;
            }
          }
        }
      }
    }
  }
  return 0xfffffffffffffffe;
}


// ===== 008e4090  <tracing_core::metadata::ParseLevelError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::metadata::ParseLevelError as core::fmt::Display>::fmt */

void __rustcall
<tracing_core::metadata::ParseLevelError_as_core::fmt::Display>::fmt
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::pad
            (param_2,
             "error parsing level: expected one of \"error\", \"warn\", \"info\", \"debug\", \"trace\", or a number 1-5"
             ,0x5f);
  return;
}


// ===== 008e40a4  <bool_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <bool_as_core::fmt::Display>::fmt(void)

{
  (*(code *)PTR_fmt_00b02798)();
  return;
}


// ===== 008e40a8  <tracing_core::metadata::ParseLevelFilterError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::metadata::ParseLevelFilterError as core::fmt::Display>::fmt */

void __rustcall
<tracing_core::metadata::ParseLevelFilterError_as_core::fmt::Display>::fmt
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::pad
            (param_2,
             "error parsing level filter: expected one of \"off\", \"error\", \"warn\", \"info\", \"debug\", \"trace\", or a number 0-5"
             ,0x6d);
  return;
}


// ===== 008e40bc  FUN_008e40bc =====

void FUN_008e40bc(undefined8 *param_1)

{
  core::fmt::pointer_fmt_inner(*param_1);
  return;
}


// ===== 008e40c4  <dyn_Trait<Assoc=X>+tracing_core::field::Value_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <dyn Trait<Assoc = X> + tracing_core::field::Value as core::fmt::Debug>::fmt */

undefined1 __rustcall
<dyn_Trait<Assoc=X>+tracing_core::field::Value_as_core::fmt::Debug>::fmt
          (undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 local_30;
  undefined1 local_24 [4];
  undefined1 *local_20;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)&local_30;
  local_20 = local_24;
  local_24[0] = 0;
  local_30 = param_3;
  (**(code **)(param_2 + 0x18))(param_1,&DAT_00aede30,&local_20,&DAT_00aedfa0);
  return local_24[0];
}


// ===== 008e4110  <dyn_Trait<Assoc=X>+tracing_core::field::Value_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <dyn Trait<Assoc = X> + tracing_core::field::Value as core::fmt::Display>::fmt */

undefined1 __rustcall
<dyn_Trait<Assoc=X>+tracing_core::field::Value_as_core::fmt::Display>::fmt
          (undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 local_30;
  undefined1 local_24 [4];
  undefined1 *local_20;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)&local_30;
  local_20 = local_24;
  local_24[0] = 0;
  local_30 = param_3;
  (**(code **)(param_2 + 0x18))(param_1,&DAT_00aede30,&local_20,&DAT_00aedfa0);
  return local_24[0];
}


// ===== 008e415c  FUN_008e415c =====

void FUN_008e415c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008e4164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x20))(*param_1);
  return;
}


// ===== 008e4168  FUN_008e4168 =====

void FUN_008e4168(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt(*(undefined8 *)*param_1,((undefined8 *)*param_1)[1],param_2);
  return;
}


// ===== 008e417c  FUN_008e417c =====

void FUN_008e417c(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,"Level",5,&local_18,&DAT_00aee008);
  return;
}


// ===== 008e41bc  FUN_008e41bc =====

bool FUN_008e41bc(undefined8 *param_1,uint param_2)

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
    lVar3 = FUN_008e63e4(*param_1,&local_34,1);
    if (lVar3 != 0) goto LAB_008e42c4;
    lVar3 = 0;
  }
  else {
    uVar2 = (undefined1)param_2;
    if (param_2 < 0x800) {
      local_34 = (CONCAT11(uVar2,(char)(param_2 >> 6)) & 0x3fff | 0x8000) | 0xc0;
      lVar3 = FUN_008e63e4(*param_1,&local_34,2);
      if (lVar3 != 0) {
LAB_008e42c4:
        uVar4 = param_1[1];
        if (((uVar4 != 0) && (1 < (uVar4 & 3) - 2)) && ((uVar4 & 3) != 0)) {
          local_28 = uVar4 - 1;
          local_30 = 3;
                    /* try { // try from 008e42f4 to 008e42fb has its CatchHandler @ 008e4318 */
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
        lVar3 = FUN_008e63e4(*param_1,&local_34,3);
      }
      else {
        local_34 = CONCAT31(CONCAT21(CONCAT11(uVar2,bVar1),(char)(param_2 >> 0xc)),
                            (char)(param_2 >> 0x12)) & 0x3f3f3fff | 0x808080f0;
        lVar3 = FUN_008e63e4(*param_1,&local_34,4);
      }
      if (lVar3 != 0) goto LAB_008e42c4;
    }
  }
  return lVar3 != 0;
}


// ===== 008e4320  FUN_008e4320 =====

void FUN_008e4320(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  core::fmt::write(param_1,&PTR_FUN_00aedc38,param_2,param_3);
  return;
}


// ===== 008e4334  FUN_008e4334 =====

void FUN_008e4334(undefined8 param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined8 *local_40;
  undefined *puStack_38;
  undefined1 *local_30;
  code *pcStack_28;
  undefined8 local_8;
  
  local_30 = (undefined1 *)&local_40;
  puVar1 = (undefined1 *)*param_2;
  local_40 = &local_8;
  puStack_38 = &DAT_00aee028;
  pcStack_28 = FUN_008e737c;
  local_8 = param_1;
  uVar2 = core::fmt::write(**(undefined8 **)param_2[1],(*(undefined8 **)param_2[1])[1],&DAT_002ab692
                           ,&local_30);
  *puVar1 = uVar2;
  return;
}


// ===== 008e4398  FUN_008e4398 =====

void FUN_008e4398(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined8 *local_40;
  undefined *puStack_38;
  undefined1 *local_30;
  code *pcStack_28;
  undefined8 local_8;
  
  local_30 = (undefined1 *)&local_40;
  puVar1 = (undefined1 *)*param_1;
  local_40 = &local_8;
  puStack_38 = &DAT_00aee048;
  pcStack_28 = FUN_008e737c;
  local_8 = param_3;
  uVar2 = core::fmt::write(**(undefined8 **)param_1[1],(*(undefined8 **)param_1[1])[1],&DAT_002ab692
                           ,&local_30);
  *puVar1 = uVar2;
  return;
}


// ===== 008e43fc  FUN_008e43fc =====

void FUN_008e43fc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 *local_40;
  undefined *puStack_38;
  undefined1 **local_30;
  code *pcStack_28;
  
  local_40 = (undefined1 *)&local_50;
  puVar1 = (undefined1 *)*param_1;
  puStack_38 = &DAT_00aedf00;
  local_30 = &local_40;
  pcStack_28 = FUN_008e737c;
  local_50 = param_3;
  uStack_48 = param_4;
  uVar2 = core::fmt::write(**(undefined8 **)param_1[1],(*(undefined8 **)param_1[1])[1],&DAT_002ab692
                           ,&local_30);
  *puVar1 = uVar2;
  return;
}


// ===== 008e4460  FUN_008e4460 =====

void FUN_008e4460(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined8 *local_40;
  undefined *puStack_38;
  undefined1 *local_30;
  code *pcStack_28;
  undefined8 local_8;
  
  local_30 = (undefined1 *)&local_40;
  puVar1 = (undefined1 *)*param_1;
  local_40 = &local_8;
  puStack_38 = &DAT_00aee068;
  pcStack_28 = FUN_008e737c;
  local_8 = param_3;
  uVar2 = core::fmt::write(**(undefined8 **)param_1[1],(*(undefined8 **)param_1[1])[1],&DAT_002ab692
                           ,&local_30);
  *puVar1 = uVar2;
  return;
}


// ===== 008e44c4  FUN_008e44c4 =====

void FUN_008e44c4(undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *local_40;
  undefined *puStack_38;
  undefined1 *local_30;
  code *pcStack_28;
  undefined1 local_4 [4];
  
  local_30 = (undefined1 *)&local_40;
  puVar1 = (undefined1 *)*param_1;
  local_40 = local_4;
  puStack_38 = &DAT_00aee088;
  pcStack_28 = FUN_008e737c;
  local_4[0] = param_3;
  uVar2 = core::fmt::write(**(undefined8 **)param_1[1],(*(undefined8 **)param_1[1])[1],&DAT_002ab692
                           ,&local_30);
  *puVar1 = uVar2;
  return;
}


// ===== 008e4528  FUN_008e4528 =====

void FUN_008e4528(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 *local_40;
  undefined *puStack_38;
  undefined1 **local_30;
  code *pcStack_28;
  
  local_40 = (undefined1 *)&local_50;
  puVar1 = (undefined1 *)*param_1;
  puStack_38 = &DAT_00aee0a8;
  local_30 = &local_40;
  pcStack_28 = FUN_008e737c;
  local_50 = param_3;
  uStack_48 = param_4;
  uVar2 = core::fmt::write(**(undefined8 **)param_1[1],(*(undefined8 **)param_1[1])[1],&DAT_002ab692
                           ,&local_30);
  *puVar1 = uVar2;
  return;
}


// ===== 008e458c  FUN_008e458c =====

void FUN_008e458c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 *local_40;
  undefined *puStack_38;
  undefined1 **local_30;
  code *pcStack_28;
  
  local_40 = (undefined1 *)&local_50;
  puVar1 = (undefined1 *)*param_1;
  puStack_38 = &DAT_00aee0c8;
  local_30 = &local_40;
  pcStack_28 = FUN_008e737c;
  local_50 = param_3;
  uStack_48 = param_4;
  uVar2 = core::fmt::write(**(undefined8 **)param_1[1],(*(undefined8 **)param_1[1])[1],&DAT_002ab692
                           ,&local_30);
  *puVar1 = uVar2;
  return;
}


// ===== 008e45f0  FUN_008e45f0 =====

void FUN_008e45f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 *local_40;
  undefined *puStack_38;
  undefined1 **local_30;
  code *pcStack_28;
  
  local_40 = (undefined1 *)&local_50;
  puVar1 = (undefined1 *)*param_1;
  puStack_38 = &DAT_00aee0e8;
  local_30 = &local_40;
  pcStack_28 = FUN_008e737c;
  local_50 = param_3;
  uStack_48 = param_4;
  uVar2 = core::fmt::write(**(undefined8 **)param_1[1],(*(undefined8 **)param_1[1])[1],&DAT_002ab692
                           ,&local_30);
  *puVar1 = uVar2;
  return;
}


// ===== 008e4654  FUN_008e4654 =====

void FUN_008e4654(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 *local_40;
  undefined *puStack_38;
  undefined1 **local_30;
  code *pcStack_28;
  
  local_40 = (undefined1 *)&local_50;
  puVar1 = (undefined1 *)*param_1;
  puStack_38 = &DAT_00aee108;
  local_30 = &local_40;
  pcStack_28 = FUN_008e737c;
  local_50 = param_3;
  uStack_48 = param_4;
  uVar2 = core::fmt::write(**(undefined8 **)param_1[1],(*(undefined8 **)param_1[1])[1],&DAT_002ab692
                           ,&local_30);
  *puVar1 = uVar2;
  return;
}


// ===== 008e46b8  FUN_008e46b8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e46b8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a0fb0;
  param_1[1] = _UNK_002a0fb8;
  *param_1 = uVar1;
  return;
}


// ===== 008e46cc  FUN_008e46cc =====

void FUN_008e46cc(undefined8 param_1)

{
  ulong uVar1;
  int iVar2;
  ulong *puVar3;
  ulong *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  if (*(long *)PTR_SCOPED_COUNT_00b01060 == 0) {
    if (*(long *)PTR_GLOBAL_INIT_00b01070 != 2) {
      return;
    }
    lVar5 = *(long *)(PTR_GLOBAL_DISPATCH_00b01080 + 8);
    lVar8 = *(long *)(PTR_GLOBAL_DISPATCH_00b01080 + 0x10);
    if (*(long *)PTR_GLOBAL_DISPATCH_00b01080 == 1) {
      lVar5 = lVar5 + (*(long *)(lVar8 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
    }
    iVar2 = (**(code **)(lVar8 + 0x50))(lVar5,param_1);
    if (iVar2 == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x008e484c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar8 + 0x58))(lVar5,param_1);
    return;
  }
  uVar6 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b01068;
  if (uVar6 == 0) {
    uVar6 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b01068);
    puVar3 = (ulong *)pthread_getspecific((pthread_key_t)uVar6);
    if (&DAT_00000001 < puVar3) goto joined_r0x008e4884;
  }
  else {
    puVar3 = (ulong *)pthread_getspecific((pthread_key_t)uVar6);
    if ((ulong *)0x1 < puVar3) goto joined_r0x008e4884;
  }
  puVar3 = (ulong *)FUN_008e65c8(uVar6 & 0xffffffff,puVar3,0);
joined_r0x008e4884:
  if ((puVar3 != (ulong *)0x0) &&
     (uVar6 = puVar3[4], *(undefined1 *)(puVar3 + 4) = 0, (char)uVar6 == '\x01')) {
    if (0x7ffffffffffffffe < *puVar3) {
                    /* try { // try from 008e4898 to 008e48a3 has its CatchHandler @ 008e48c0 */
                    /* WARNING: Subroutine does not return */
      core::cell::panic_already_mutably_borrowed(&PTR_s__root__cargo_registry_src_index__00aee140);
    }
    puVar4 = puVar3 + 1;
    uVar6 = *puVar4;
    *puVar3 = *puVar3 + 1;
    if (uVar6 == 2) {
      puVar4 = (ulong *)PTR_GLOBAL_DISPATCH_00b01080;
      if (*(long *)PTR_GLOBAL_INIT_00b01070 != 2) {
        puVar4 = (ulong *)PTR_NONE_00b01078;
      }
      uVar6 = *puVar4;
    }
    uVar7 = puVar4[1];
    uVar1 = puVar4[2];
    if (uVar6 == 1) {
      uVar7 = uVar7 + (*(long *)(uVar1 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
    }
                    /* try { // try from 008e479c to 008e47bb has its CatchHandler @ 008e48a8 */
    iVar2 = (**(code **)(uVar1 + 0x50))(uVar7,param_1);
    if (iVar2 != 0) {
      (**(code **)(uVar1 + 0x58))(uVar7,param_1);
    }
    *(undefined1 *)(puVar3 + 4) = 1;
    *puVar3 = *puVar3 - 1;
    return;
  }
  return;
}


// ===== 008e48cc  FUN_008e48cc =====

void FUN_008e48cc(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  
  if (*(long *)PTR_SCOPED_COUNT_00b01060 == 0) {
    if (*(long *)PTR_GLOBAL_INIT_00b01070 == 2) {
      lVar5 = *(long *)(PTR_GLOBAL_DISPATCH_00b01080 + 8);
      if (*(long *)PTR_GLOBAL_DISPATCH_00b01080 == 1) {
        lVar5 = lVar5 + (*(long *)(*(long *)(PTR_GLOBAL_DISPATCH_00b01080 + 0x10) + 0x10) - 1U &
                        0xfffffffffffffff0) + 0x10;
      }
      uVar4 = (**(code **)(*(long *)(PTR_GLOBAL_DISPATCH_00b01080 + 0x10) + 0x30))(lVar5);
      uVar7 = 5;
      if (*param_1 != 0xffffffffffffffff) {
        uVar7 = *param_1;
      }
      uVar1 = 5;
      if (uVar4 != 0xffffffffffffffff) {
        uVar1 = uVar4;
      }
      uVar2 = 0;
      if (uVar4 != 0xfffffffffffffffe) {
        uVar2 = uVar1;
      }
      if (uVar7 <= uVar2) {
        return;
      }
      uVar7 = 0;
      if (uVar4 != 0xfffffffffffffffe) {
        uVar7 = uVar4;
      }
      *param_1 = uVar7;
      return;
    }
    goto LAB_008e4ab8;
  }
  uVar7 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b01068;
  if (uVar7 == 0) {
    uVar7 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b01068);
    puVar3 = (ulong *)pthread_getspecific((pthread_key_t)uVar7);
    if (puVar3 <= &DAT_00000001) goto LAB_008e4aa0;
  }
  else {
    puVar3 = (ulong *)pthread_getspecific((pthread_key_t)uVar7);
    if (puVar3 < (ulong *)0x2) {
LAB_008e4aa0:
      puVar3 = (ulong *)FUN_008e65c8(uVar7 & 0xffffffff,puVar3,0);
    }
  }
  if ((puVar3 != (ulong *)0x0) &&
     (uVar7 = puVar3[4], *(undefined1 *)(puVar3 + 4) = 0, (uVar7 & 1) != 0)) {
    if (*puVar3 < 0x7fffffffffffffff) {
      puVar6 = puVar3 + 1;
      uVar7 = *puVar6;
      *puVar3 = *puVar3 + 1;
      if (uVar7 == 2) {
        puVar6 = (ulong *)PTR_GLOBAL_DISPATCH_00b01080;
        if (*(long *)PTR_GLOBAL_INIT_00b01070 != 2) {
          puVar6 = (ulong *)PTR_NONE_00b01078;
        }
        uVar7 = *puVar6;
      }
      uVar4 = puVar6[1];
      if (uVar7 == 1) {
        uVar4 = uVar4 + (*(long *)(puVar6[2] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
      }
                    /* try { // try from 008e4998 to 008e499b has its CatchHandler @ 008e4ae4 */
      uVar4 = (**(code **)(puVar6[2] + 0x30))(uVar4);
      uVar7 = 5;
      if (*param_1 != 0xffffffffffffffff) {
        uVar7 = *param_1;
      }
      uVar1 = 5;
      if (uVar4 != 0xffffffffffffffff) {
        uVar1 = uVar4;
      }
      uVar2 = 0;
      if (uVar4 != 0xfffffffffffffffe) {
        uVar2 = uVar1;
      }
      if (uVar2 < uVar7) {
        uVar7 = 0;
        if (uVar4 != 0xfffffffffffffffe) {
          uVar7 = uVar4;
        }
        *param_1 = uVar7;
      }
      *(undefined1 *)(puVar3 + 4) = 1;
      *puVar3 = *puVar3 - 1;
      return;
    }
                    /* try { // try from 008e4ad4 to 008e4adf has its CatchHandler @ 008e4afc */
                    /* WARNING: Subroutine does not return */
    core::cell::panic_already_mutably_borrowed(&PTR_s__root__cargo_registry_src_index__00aee140);
  }
LAB_008e4ab8:
  if (*param_1 == 0) {
    return;
  }
  *param_1 = 0;
  return;
}


// ===== 008e4b08  FUN_008e4b08 =====

void FUN_008e4b08(undefined8 *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ulong *puVar4;
  ulong uVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  
  if (*(long *)PTR_SCOPED_COUNT_00b01060 == 0) {
    if (*(long *)PTR_GLOBAL_INIT_00b01070 == 2) {
      lVar6 = *(long *)(PTR_GLOBAL_DISPATCH_00b01080 + 8);
      if (*(long *)PTR_GLOBAL_DISPATCH_00b01080 == 1) {
        lVar6 = lVar6 + (*(long *)(*(long *)(PTR_GLOBAL_DISPATCH_00b01080 + 0x10) + 0x10) - 1U &
                        0xfffffffffffffff0) + 0x10;
      }
      bVar3 = (**(code **)(*(long *)(PTR_GLOBAL_DISPATCH_00b01080 + 0x10) + 0x20))(lVar6,*param_1);
      bVar2 = *param_2;
      bVar1 = bVar2;
      if (bVar2 != bVar3) {
        bVar1 = 1;
      }
      if (bVar2 != 0xff) {
        bVar3 = bVar1;
      }
      *param_2 = bVar3;
      return;
    }
    goto LAB_008e4cc8;
  }
  uVar8 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b01068;
  if (uVar8 == 0) {
    uVar8 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b01068);
    puVar4 = (ulong *)pthread_getspecific((pthread_key_t)uVar8);
    if (puVar4 <= &DAT_00000001) goto LAB_008e4cb0;
  }
  else {
    puVar4 = (ulong *)pthread_getspecific((pthread_key_t)uVar8);
    if (puVar4 < (ulong *)0x2) {
LAB_008e4cb0:
      puVar4 = (ulong *)FUN_008e65c8(uVar8 & 0xffffffff,puVar4,0);
    }
  }
  if ((puVar4 != (ulong *)0x0) &&
     (uVar8 = puVar4[4], *(undefined1 *)(puVar4 + 4) = 0, (uVar8 & 1) != 0)) {
    if (*puVar4 < 0x7fffffffffffffff) {
      puVar7 = puVar4 + 1;
      uVar8 = *puVar7;
      *puVar4 = *puVar4 + 1;
      if (uVar8 == 2) {
        puVar7 = (ulong *)PTR_GLOBAL_DISPATCH_00b01080;
        if (*(long *)PTR_GLOBAL_INIT_00b01070 != 2) {
          puVar7 = (ulong *)PTR_NONE_00b01078;
        }
        uVar8 = *puVar7;
      }
      uVar5 = puVar7[1];
      if (uVar8 == 1) {
        uVar5 = uVar5 + (*(long *)(puVar7[2] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
      }
                    /* try { // try from 008e4bdc to 008e4bdf has its CatchHandler @ 008e4cfc */
      bVar3 = (**(code **)(puVar7[2] + 0x20))(uVar5,*param_1);
      bVar2 = *param_2;
      bVar1 = bVar2;
      if (bVar2 != bVar3) {
        bVar1 = 1;
      }
      *puVar4 = *puVar4 - 1;
      if (bVar2 != 0xff) {
        bVar3 = bVar1;
      }
      *param_2 = bVar3;
      *(undefined1 *)(puVar4 + 4) = 1;
      return;
    }
                    /* try { // try from 008e4cec to 008e4cf7 has its CatchHandler @ 008e4d14 */
                    /* WARNING: Subroutine does not return */
    core::cell::panic_already_mutably_borrowed(&PTR_s__root__cargo_registry_src_index__00aee140);
  }
LAB_008e4cc8:
  *param_2 = *param_2 - 1 < 0xfe;
  return;
}


// ===== 008e4d20  FUN_008e4d20 =====

void FUN_008e4d20(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if ((*param_1 != 2) && (*param_1 != 0)) {
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
      <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+tracing_core::subscriber::Subscriber+core::marker::Sync+{backref_29}::Send>>
      ::drop_slow();
      return;
    }
  }
  return;
}


// ===== 008e4d54  FUN_008e4d54 =====

void FUN_008e4d54(undefined8 *param_1)

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


// ===== 008e4dc4  FUN_008e4dc4 =====

void FUN_008e4dc4(int *param_1,uint param_2)

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


// ===== 008e4e34  FUN_008e4e34 =====

void FUN_008e4e34(ulong param_1)

{
  long local_18;
  
  if ((1 < (param_1 & 3) - 2) && ((param_1 & 3) != 0)) {
    local_18 = param_1 - 1;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
  }
  return;
}


// ===== 008e4e7c  FUN_008e4e7c =====

void FUN_008e4e7c(long *param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  uint *puVar5;
  int *piVar6;
  ulong uVar7;
  
  if (*param_1 != 0) {
    if (*param_1 == 1) {
      puVar5 = (uint *)param_1[2];
      do {
        uVar1 = *puVar5;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar4) {
          *puVar5 = uVar1 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar1 - 1 & 0xbfffffff) == 0x80000000) {
        <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::
        wake_writer_or_readers();
        return;
      }
    }
    else {
      piVar6 = (int *)param_1[1];
      if ((((*(byte *)(param_1 + 2) & 1) == 0) &&
          ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) != 0)) &&
         (uVar7 = std::panicking::panic_count::is_zero_slow_path(), (uVar7 & 1) == 0)) {
        *(undefined1 *)(piVar6 + 2) = 1;
      }
      do {
        iVar2 = *piVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar4) {
          *piVar6 = iVar2 + -0x3fffffff;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + 0xc0000001U >> 0x1e != 0) {
        <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::
        wake_writer_or_readers();
        return;
      }
    }
  }
  return;
}


// ===== 008e4f44  <tracing_core::callsite::tracing_core::callsite::DefaultCallsite>::register =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::callsite::tracing_core::callsite::DefaultCallsite>::register */

undefined4 __rustcall
<tracing_core::callsite::tracing_core::callsite::DefaultCallsite>::register(long *param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  uint *puVar6;
  long *plVar7;
  bool bVar8;
  int *piVar9;
  ulong uVar10;
  undefined4 uVar11;
  long *local_48;
  int *local_40;
  byte local_38;
  undefined7 uStack_37;
  long *local_30;
  char local_24 [4];
  
  pcVar1 = (char *)((long)param_1 + 0x11);
  do {
    if (*pcVar1 != '\0') {
      ClearExclusiveLocal();
      if (*pcVar1 != '\x02') {
        return 1;
      }
      goto LAB_008e5058;
    }
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar8) {
      *pcVar1 = '\x01';
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  while( true ) {
    plVar7 = DAT_00b10760;
    bVar8 = param_1 == DAT_00b10760;
    local_30 = DAT_00b10760;
    param_1[1] = (long)DAT_00b10760;
    local_48 = param_1;
    if (bVar8) break;
    while (DAT_00b10760 == plVar7) {
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(0xb10760,0x10);
      if (bVar8) {
        cVar5 = ExclusiveMonitorsStatus();
        DAT_00b10760 = param_1;
      }
      if (cVar5 == '\0') {
        FUN_008e2920(&local_48,&DAT_00b0f660);
        local_30 = (long *)*param_1;
        local_24[0] = -1;
                    /* try { // try from 008e4fe4 to 008e4ff3 has its CatchHandler @ 008e5130 */
        FUN_008e200c(&local_48,&local_30,local_24);
        cVar5 = '\0';
        if (local_24[0] != -1) {
          cVar5 = local_24[0];
        }
        uVar11 = 1;
        if (cVar5 == '\x02') {
          uVar11 = 2;
        }
        uVar2 = 0;
        if (cVar5 != '\0') {
          uVar2 = uVar11;
        }
        *(undefined4 *)(param_1 + 2) = uVar2;
        if (local_48 == (long *)0x0) goto LAB_008e5050;
        if (local_48 == (long *)&DAT_00000001) {
          puVar6 = (uint *)CONCAT71(uStack_37,local_38);
          do {
            uVar3 = *puVar6;
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(puVar6,0x10);
            if (bVar8) {
              *puVar6 = uVar3 - 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((uVar3 - 1 & 0xbfffffff) == 0x80000000) goto LAB_008e50c4;
          goto LAB_008e5050;
        }
        piVar9 = local_40;
        if (((local_38 & 1) != 0) ||
           ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) == 0))
        goto LAB_008e50a4;
        goto LAB_008e50f0;
      }
    }
    ClearExclusiveLocal();
  }
  piVar9 = (int *)core[bcece726f298455b]::panicking::assert_failed::
                  <*const_tracing_core[920773a073e900b8]::callsite::DefaultCallsite,*mut_tracing_core[920773a073e900b8]::callsite::DefaultCallsite>
                            (1,&local_48,&local_30,
                             "Attempted to register a `DefaultCallsite` that already exists! This will cause an infinite loop when attempting to read from the callsite cache. This is likely a bug! You should only need to call `DefaultCallsite::register` once per `DefaultCallsite`."
                             ,0x1f7,&PTR_s__root__cargo_registry_src_index__00aee190);
LAB_008e50f0:
  uVar10 = std::panicking::panic_count::is_zero_slow_path();
  if ((uVar10 & 1) == 0) {
    *(undefined1 *)(piVar9 + 2) = 1;
  }
LAB_008e50a4:
  do {
    iVar4 = *piVar9;
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(piVar9,0x10);
    if (bVar8) {
      *piVar9 = iVar4 + -0x3fffffff;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar4 + 0xc0000001U >> 0x1e != 0) {
LAB_008e50c4:
    <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::wake_writer_or_readers()
    ;
  }
LAB_008e5050:
  pcVar1[0] = '\x02';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
LAB_008e5058:
  uVar11 = 1;
  if ((char)param_1[2] == '\x02') {
    uVar11 = 2;
  }
  uVar2 = 0;
  if ((char)param_1[2] != '\0') {
    uVar2 = uVar11;
  }
  return uVar2;
}


// ===== 008e5148  <tracing_core::dispatcher::[2]::tracing_core::dispatcher::Dispatch>::exit =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::dispatcher::[2]::tracing_core::dispatcher::Dispatch>::exit */

void __rustcall
<tracing_core::dispatcher::[2]::tracing_core::dispatcher::Dispatch>::exit(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  if (*param_1 == 1) {
    lVar1 = lVar1 + (*(long *)(param_1[2] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x008e5174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[2] + 0x68))(lVar1);
  return;
}


// ===== 008e5178  <tracing_core::dispatcher::[2]::tracing_core::dispatcher::Dispatch>::enter =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::dispatcher::[2]::tracing_core::dispatcher::Dispatch>::enter */

void __rustcall
<tracing_core::dispatcher::[2]::tracing_core::dispatcher::Dispatch>::enter(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  if (*param_1 == 1) {
    lVar1 = lVar1 + (*(long *)(param_1[2] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x008e51a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[2] + 0x60))(lVar1);
  return;
}


// ===== 008e51a8  <tracing_core::dispatcher::[2]::tracing_core::dispatcher::Dispatch>::downgrade =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::dispatcher::[2]::tracing_core::dispatcher::Dispatch>::downgrade */

void __rustcall
<tracing_core::dispatcher::[2]::tracing_core::dispatcher::Dispatch>::downgrade
          (undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined **local_20;
  code *pcStack_18;
  
  if (*param_2 != 1) {
    lVar4 = param_2[1];
    uVar5 = 0;
LAB_008e5218:
    lVar6 = param_2[2];
    *param_1 = uVar5;
    param_1[1] = lVar4;
    param_1[2] = lVar6;
    return;
  }
  lVar4 = param_2[1];
  uVar5 = 1;
  plVar1 = (long *)(lVar4 + 8);
  do {
    lVar6 = *plVar1;
    while (lVar6 != -1) {
      if (lVar6 < 0) {
        local_20 = &PTR_DAT_00aeddc0;
        pcStack_18 = FUN_008e7434;
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_fmt
                  (&DAT_002ab692,&local_20,&PTR_s__nix_store_8006w282fgsx3273c878b_00aeddd0);
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
        if (cVar2 == '\0') goto LAB_008e5218;
      }
      else {
        ClearExclusiveLocal();
        lVar6 = lVar7;
      }
    }
    InstructionSynchronizationBarrier();
  } while( true );
}


// ===== 008e525c  <tracing_core::dispatcher::[2]::tracing_core::dispatcher::Dispatch>::try_close =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::dispatcher::[2]::tracing_core::dispatcher::Dispatch>::try_close */

void __rustcall
<tracing_core::dispatcher::[2]::tracing_core::dispatcher::Dispatch>::try_close(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  if (*param_1 == 1) {
    lVar1 = lVar1 + (*(long *)(param_1[2] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x008e5288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[2] + 0x80))(lVar1);
  return;
}


// ===== 008e528c  FUN_008e528c =====

void FUN_008e528c(long *param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  undefined *puVar9;
  byte bVar10;
  uint *puVar11;
  int *piVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined4 uVar15;
  undefined8 *puVar16;
  long local_80;
  undefined4 *local_78;
  byte local_70;
  char local_64 [4];
  undefined8 *puVar17;
  
  local_80 = -1;
                    /* try { // try from 008e52b8 to 008e52bf has its CatchHandler @ 008e5580 */
  FUN_008e221c(param_1,&local_80);
  for (puVar14 = DAT_00b10760; puVar14 != (undefined8 *)0x0; puVar14 = (undefined8 *)puVar14[1]) {
    local_78 = (undefined4 *)*puVar14;
    local_64[0] = -1;
                    /* try { // try from 008e52e4 to 008e52f3 has its CatchHandler @ 008e5584 */
    FUN_008e200c(param_1,&local_78,local_64);
    cVar7 = '\0';
    if (local_64[0] != -1) {
      cVar7 = local_64[0];
    }
    uVar15 = 1;
    if (cVar7 == '\x02') {
      uVar15 = 2;
    }
    uVar1 = 0;
    if (cVar7 != '\0') {
      uVar1 = uVar15;
    }
    *(undefined4 *)(puVar14 + 2) = uVar1;
  }
  if (DAT_00b10768 != '\0') {
    if (DAT_00b0f668 != 2) {
                    /* try { // try from 008e54d0 to 008e54e7 has its CatchHandler @ 008e5580 */
      FUN_008e6540(&DAT_00b0f668,&DAT_00b0f668);
    }
    do {
      if (DAT_00b0f678 != 0) {
        ClearExclusiveLocal();
                    /* try { // try from 008e5570 to 008e557b has its CatchHandler @ 008e5580 */
        <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                  (&DAT_00b0f678);
        break;
      }
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(0xb0f678,0x10);
      if (bVar8) {
        DAT_00b0f678 = 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    puVar9 = PTR_GLOBAL_PANIC_COUNT_00b00bf0;
    if ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) == 0) {
      bVar10 = 0;
    }
    else {
      bVar10 = std::panicking::panic_count::is_zero_slow_path();
      bVar10 = bVar10 ^ 1;
    }
    if (DAT_00b0f67c != '\0') {
      local_78 = &DAT_00b0f678;
                    /* try { // try from 008e5500 to 008e5523 has its CatchHandler @ 008e55a8 */
      local_70 = bVar10;
                    /* WARNING: Subroutine does not return */
      core::result::unwrap_failed
                ("called `Result::unwrap()` on an `Err` value",0x2b,&local_78,&PTR_FUN_00aee170,
                 &PTR_s__root__cargo_registry_src_index__00aee128);
    }
    DAT_00b0f67c = '\0';
    if (DAT_00b0f690 != 0) {
      puVar14 = DAT_00b0f688 + DAT_00b0f690 * 2;
      puVar16 = DAT_00b0f688;
      do {
        puVar17 = puVar16 + 2;
        uVar3 = *puVar16;
        pcVar4 = *(code **)(puVar16[1] + 0x18);
                    /* try { // try from 008e53ac to 008e53df has its CatchHandler @ 008e558c */
        local_78 = (undefined4 *)(**(code **)(puVar16[1] + 0x20))(uVar3);
        local_64[0] = -1;
        FUN_008e200c(param_1,&local_78,local_64);
        cVar7 = '\0';
        if (local_64[0] != -1) {
          cVar7 = local_64[0];
        }
        (*pcVar4)(uVar3,cVar7);
        puVar16 = puVar17;
      } while (puVar17 != puVar14);
    }
    if ((((bVar10 & 1) == 0) && ((*(ulong *)puVar9 & 0x7fffffffffffffff) != 0)) &&
       (uVar13 = std::panicking::panic_count::is_zero_slow_path(), (uVar13 & 1) == 0)) {
      DAT_00b0f67c = '\x01';
    }
    do {
      iVar6 = DAT_00b0f678;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(0xb0f678,0x10);
      if (bVar8) {
        DAT_00b0f678 = 0;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar6 == 2) {
                    /* try { // try from 008e5528 to 008e553b has its CatchHandler @ 008e5580 */
      <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(&DAT_00b0f678);
    }
  }
  puVar9 = PTR_MAX_LEVEL_00b00e60;
  lVar2 = 5;
  if (local_80 != -1) {
    lVar2 = local_80;
  }
  do {
    uVar3 = *(undefined8 *)puVar9;
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar9,0x10);
    if (bVar8) {
      *(long *)puVar9 = lVar2;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (*param_1 != 0) {
    if (*param_1 == 1) {
      puVar11 = (uint *)param_1[2];
      do {
        uVar5 = *puVar11;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(puVar11,0x10);
        if (bVar8) {
          *puVar11 = uVar5 - 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if ((uVar5 - 1 & 0xbfffffff) != 0x80000000) {
        return;
      }
    }
    else {
      piVar12 = (int *)param_1[1];
      if ((((*(byte *)(param_1 + 2) & 1) == 0) &&
          ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) != 0)) &&
         (uVar13 = std::panicking::panic_count::is_zero_slow_path(), (uVar13 & 1) == 0)) {
        *(undefined1 *)(piVar12 + 2) = 1;
      }
      do {
        iVar6 = *piVar12;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar8) {
          *piVar12 = iVar6 + -0x3fffffff;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar6 + 0xc0000001U >> 0x1e == 0) {
        return;
      }
    }
    <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::wake_writer_or_readers()
    ;
  }
  return;
}


// ===== 008e55cc  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<tracing_core::dispatcher::Registrar>>::grow_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<tracing_core::dispatcher::Registrar>>::grow_one */

void __rustcall
<alloc::raw_vec::[4]::alloc::raw_vec::RawVec<tracing_core::dispatcher::Registrar>>::grow_one
          (undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = FUN_008e56c4(param_1,*param_1,0x18);
  if (lVar1 == -1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error();
}


// ===== 008e55f4  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<&dyn_Trait<Assoc=X>+tracing_core::callsite::Callsite>>::grow_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<&dyn Trait<Assoc = X> +
   tracing_core::callsite::Callsite>>::grow_one */

void __rustcall
<alloc::raw_vec::[4]::alloc::raw_vec::RawVec<&dyn_Trait<Assoc=X>+tracing_core::callsite::Callsite>>
::grow_one(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = FUN_008e56c4(param_1,*param_1,0x10);
  if (lVar1 == -1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error();
}


// ===== 008e561c  FUN_008e561c =====

void FUN_008e561c(undefined8 *param_1,long param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_5;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_4;
  lVar5 = 8;
  uVar3 = 1;
  uVar4 = 0;
  if ((SUB168(auVar1 * auVar2,8) != 0) ||
     (param_4 = param_5 * param_4, 0x7ffffffffffffff8 < param_4)) goto LAB_008e56b0;
  if (param_2 == 0) {
    if (param_4 == 0) {
      lVar5 = 8;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      lVar5 = FUN_004b25a4(param_4,8);
      if (lVar5 == 0) goto LAB_008e568c;
    }
LAB_008e56a0:
    uVar3 = 0;
    param_1[1] = lVar5;
  }
  else {
    lVar5 = FUN_004b2600(param_3,param_5 * param_2,8,param_4);
    if (lVar5 != 0) goto LAB_008e56a0;
LAB_008e568c:
    param_1[1] = 8;
    uVar3 = 1;
  }
  lVar5 = 0x10;
  uVar4 = param_4;
LAB_008e56b0:
  *(ulong *)((long)param_1 + lVar5) = uVar4;
  *param_1 = uVar3;
  return;
}


// ===== 008e56c4  FUN_008e56c4 =====

undefined1  [16] FUN_008e56c4(ulong *param_1,long param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined8 extraout_x1;
  ulong uVar2;
  undefined1 auVar3 [16];
  uint local_38 [2];
  ulong local_30;
  undefined8 uStack_28;
  
  uVar2 = *param_1 * 2;
  if (uVar2 < param_2 + 1U) {
    uVar2 = param_2 + 1;
  }
  if (uVar2 < 5) {
    uVar2 = 4;
  }
  FUN_008e561c(local_38,*param_1,param_1[1],uVar2,param_3);
  if ((local_38[0] & 1) != 0) {
    auVar1._8_8_ = uStack_28;
    auVar1._0_8_ = local_30;
    return auVar1;
  }
  *param_1 = uVar2;
  param_1[1] = local_30;
  auVar3._8_8_ = extraout_x1;
  auVar3._0_8_ = 0xffffffffffffffff;
  return auVar3;
}


// ===== 008e5744  <tracing_core::dispatcher::[6]::tracing_core::dispatcher::WeakDispatch>::upgrade =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::dispatcher::[6]::tracing_core::dispatcher::WeakDispatch>::upgrade */

void __rustcall
<tracing_core::dispatcher::[6]::tracing_core::dispatcher::WeakDispatch>::upgrade
          (undefined8 *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined **local_20;
  code *pcStack_18;
  
  if (*param_2 == 1) {
    plVar3 = (long *)param_2[1];
    if (plVar3 == (long *)0xffffffffffffffff) {
LAB_008e57c4:
      *param_1 = 2;
      return;
    }
    uVar4 = 1;
    lVar5 = *plVar3;
    do {
      while( true ) {
        if (lVar5 == 0) goto LAB_008e57c4;
        if (lVar5 < 0) {
          local_20 = &PTR_DAT_00aeddc0;
          pcStack_18 = FUN_008e7434;
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_fmt
                    (&DAT_002ab692,&local_20,&PTR_s__nix_store_8006w282fgsx3273c878b_00aedde8);
        }
        lVar6 = *plVar3;
        if (lVar6 == lVar5) break;
        ClearExclusiveLocal();
        lVar5 = lVar6;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      lVar5 = lVar6;
    } while (cVar1 != '\0');
  }
  else {
    plVar3 = (long *)param_2[1];
    uVar4 = 0;
  }
  lVar5 = param_2[2];
  *param_1 = uVar4;
  param_1[1] = plVar3;
  param_1[2] = lVar5;
  return;
}


// ===== 008e5804  tracing_core::dispatcher::set_default =====

/* WARNING: Unknown calling convention: __rustcall */
/* tracing_core::dispatcher::set_default */

void __rustcall tracing_core::dispatcher::set_default(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long local_70;
  long lStack_68;
  long *plStack_40;
  long local_38;
  
  plVar5 = (long *)param_2[1];
  if (*param_2 == 1) {
    do {
      lVar6 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 < 0) goto LAB_008e597c;
    lVar6 = 1;
  }
  else {
    lVar6 = 0;
  }
  local_38 = param_2[2];
  uVar8 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b01068;
  plStack_40 = plVar5;
  if (uVar8 == 0) {
                    /* try { // try from 008e593c to 008e596b has its CatchHandler @ 008e5980 */
    uVar8 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b01068);
    plVar5 = (long *)pthread_getspecific((pthread_key_t)uVar8);
  }
  else {
    plVar5 = (long *)pthread_getspecific((pthread_key_t)uVar8);
  }
  if (plVar5 < (long *)0x2) {
    plVar5 = (long *)FUN_008e65c8(uVar8 & 0xffffffff,plVar5,0);
  }
  if (plVar5 == (long *)0x0) {
    if (lVar6 != 0) {
      do {
        lVar6 = *plStack_40;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_40,0x10);
        if (bVar2) {
          *plStack_40 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 1) {
        DataMemoryBarrier(2,1);
        <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+tracing_core::subscriber::Subscriber+core::marker::Sync+{backref_29}::Send>>
        ::drop_slow(&plStack_40);
      }
    }
  }
  else {
    *(undefined1 *)(plVar5 + 4) = 1;
    if (*plVar5 != 0) {
                    /* try { // try from 008e5970 to 008e597b has its CatchHandler @ 008e59b8 */
      core::cell::panic_already_borrowed(&PTR_s__root__cargo_registry_src_index__00aee158);
LAB_008e597c:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x8e5980);
      (*pcVar4)();
    }
    lVar7 = plVar5[1];
    lVar10 = plVar5[3];
    lVar9 = plVar5[2];
    plVar5[3] = local_38;
    plVar5[2] = (long)plStack_40;
    plVar5[1] = lVar6;
    if (lVar7 != -1) goto LAB_008e58f4;
  }
  lVar7 = 2;
  lVar9 = local_70;
  lVar10 = lStack_68;
LAB_008e58f4:
  lStack_68 = lVar10;
  local_70 = lVar9;
  puVar3 = PTR_SCOPED_COUNT_00b01060;
  *(undefined4 *)PTR_EXISTS_00b010a0 = 1;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar2) {
      *(long *)puVar3 = *(long *)puVar3 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  *param_1 = lVar7;
  param_1[2] = lStack_68;
  param_1[1] = local_70;
  return;
}


// ===== 008e59d0  tracing_core::dispatcher::set_global_default =====

/* WARNING: Unknown calling convention: __rustcall */
/* tracing_core::dispatcher::set_global_default */

uint __rustcall tracing_core::dispatcher::set_global_default(uint *param_1)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  
  puVar4 = PTR_GLOBAL_INIT_00b01070;
  do {
    if (*(long *)puVar4 != 0) {
      ClearExclusiveLocal();
      uVar9 = 0;
      if ((*param_1 & 1) != 0) {
        plVar6 = *(long **)(param_1 + 2);
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
          <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+tracing_core::subscriber::Subscriber+core::marker::Sync+{backref_29}::Send>>
          ::drop_slow();
          return 1;
        }
      }
      goto LAB_008e5a78;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
    if (bVar3) {
      *(undefined8 *)puVar4 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    puVar5 = PTR_GLOBAL_DISPATCH_00b01080;
  } while (cVar2 != '\0');
  uVar9 = 1;
  lVar8 = *(long *)(param_1 + 2);
  lVar1 = *(long *)(param_1 + 4);
  if ((*param_1 & 1) != 0) {
    lVar8 = lVar8 + (*(long *)(lVar1 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
  }
  if (*(long *)PTR_GLOBAL_DISPATCH_00b01080 != 0) {
    plVar6 = *(long **)(PTR_GLOBAL_DISPATCH_00b01080 + 8);
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 008e5a50 to 008e5a57 has its CatchHandler @ 008e5adc */
      <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+tracing_core::subscriber::Subscriber+core::marker::Sync+{backref_29}::Send>>
      ::drop_slow(puVar5 + 8);
    }
  }
  *(undefined8 *)puVar5 = 0;
  *(long *)(puVar5 + 8) = lVar8;
  *(long *)(puVar5 + 0x10) = lVar1;
  puVar5 = PTR_EXISTS_00b010a0;
  *(undefined8 *)puVar4 = 2;
  *(undefined4 *)puVar5 = 1;
LAB_008e5a78:
  return uVar9 ^ 1;
}


// ===== 008e5ae8  tracing_core::callsite::register_dispatch =====

/* WARNING: Unknown calling convention: __rustcall */
/* tracing_core::callsite::register_dispatch */

void __rustcall tracing_core::callsite::register_dispatch(long *param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  FUN_008e26bc(auStack_38,&DAT_00b0f660,param_1);
  lVar1 = param_1[1];
  if (*param_1 == 1) {
    lVar1 = lVar1 + (*(long *)(param_1[2] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
  }
                    /* try { // try from 008e5b38 to 008e5b3f has its CatchHandler @ 008e5b58 */
  (**(code **)(param_1[2] + 0x18))(lVar1,param_1);
  FUN_008e528c(auStack_38);
  return;
}


// ===== 008e5b70  tracing_core::callsite::rebuild_interest_cache =====

/* WARNING: Unknown calling convention: __rustcall */
/* tracing_core::callsite::rebuild_interest_cache */

void __rustcall tracing_core::callsite::rebuild_interest_cache(void)

{
  undefined1 auStack_28 [24];
  
  FUN_008e2920(auStack_28,&DAT_00b0f660);
  FUN_008e528c(auStack_28);
  return;
}


// ===== 008e5ba0  tracing_core::callsite::register =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* tracing_core::callsite::register */

void __rustcall tracing_core::callsite::register(undefined4 *param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  int *piVar6;
  uint *puVar7;
  long lVar8;
  ulong *puVar9;
  undefined4 *puVar10;
  bool bVar11;
  byte bVar12;
  ulong uVar13;
  undefined4 *local_70;
  byte local_68;
  undefined7 uStack_67;
  byte local_60;
  undefined7 uStack_5f;
  undefined4 *local_58;
  char local_34 [4];
  
  (**(code **)(param_2 + 0x28))(&local_70);
  if (CONCAT71(uStack_67,local_68) == -0x5230a6e1670eef30 &&
      local_70 == (undefined4 *)0xc18c1a8405c9b482) {
    while( true ) {
      puVar10 = DAT_00b10760;
      bVar11 = param_1 == DAT_00b10760;
      local_58 = DAT_00b10760;
      *(undefined4 **)(param_1 + 2) = DAT_00b10760;
      local_70 = param_1;
      if (bVar11) break;
      while (DAT_00b10760 == puVar10) {
        cVar5 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(0xb10760,0x10);
        if (bVar11) {
          cVar5 = ExclusiveMonitorsStatus();
          DAT_00b10760 = param_1;
        }
        if (cVar5 == '\0') goto LAB_008e5d1c;
      }
      ClearExclusiveLocal();
    }
    core[bcece726f298455b]::panicking::assert_failed::
    <*const_tracing_core[920773a073e900b8]::callsite::DefaultCallsite,*mut_tracing_core[920773a073e900b8]::callsite::DefaultCallsite>
              (1,&local_70,&local_58,
               "Attempted to register a `DefaultCallsite` that already exists! This will cause an infinite loop when attempting to read from the callsite cache. This is likely a bug! You should only need to call `DefaultCallsite::register` once per `DefaultCallsite`."
               ,0x1f7,&PTR_s__root__cargo_registry_src_index__00aee190);
  }
  else if (DAT_00b0f668 == 2) goto LAB_008e5c74;
  FUN_008e6540(&DAT_00b0f668,&DAT_00b0f668);
LAB_008e5c74:
  do {
    if (DAT_00b0f678 != 0) {
      ClearExclusiveLocal();
      <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                (&DAT_00b0f678);
      uVar13 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      puVar9 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      goto joined_r0x008e5ea0;
    }
    cVar5 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(0xb0f678,0x10);
    if (bVar11) {
      DAT_00b0f678 = 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  uVar13 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
  puVar9 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
joined_r0x008e5ea0:
  PTR_GLOBAL_PANIC_COUNT_00b00bf0 = (undefined *)puVar9;
  if ((uVar13 & 0x7fffffffffffffff) == 0) {
    bVar12 = 0;
    lVar8 = DAT_00b0f690;
  }
  else {
    bVar12 = std::panicking::panic_count::is_zero_slow_path();
    bVar12 = bVar12 ^ 1;
    lVar8 = DAT_00b0f690;
  }
  DAT_00b0f690 = lVar8;
  if (DAT_00b0f67c != '\0') {
    local_70 = &DAT_00b0f678;
    local_68 = bVar12;
                    /* try { // try from 008e5ec0 to 008e5ee3 has its CatchHandler @ 008e5f18 */
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              ("called `Result::unwrap()` on an `Err` value",0x2b,&local_70,&PTR_FUN_00aee170,
               &PTR_s__root__cargo_registry_src_index__00aee1a8);
  }
  _DAT_00b10768 = 1;
  if (lVar8 == DAT_00b0f680) {
                    /* try { // try from 008e5cd0 to 008e5cdb has its CatchHandler @ 008e5ee8 */
    <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<&dyn_Trait<Assoc=X>+tracing_core::callsite::Callsite>>
    ::grow_one(&DAT_00b0f680);
  }
  DAT_00b0f690 = lVar8 + 1;
  plVar1 = (long *)(DAT_00b0f688 + lVar8 * 0x10);
  *plVar1 = (long)param_1;
  plVar1[1] = param_2;
  if ((((bVar12 & 1) == 0) && ((*puVar9 & 0x7fffffffffffffff) != 0)) &&
     (uVar13 = std::panicking::panic_count::is_zero_slow_path(), (uVar13 & 1) == 0)) {
    DAT_00b0f67c = '\x01';
  }
  do {
    iVar4 = DAT_00b0f678;
    cVar5 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(0xb0f678,0x10);
    if (bVar11) {
      DAT_00b0f678 = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar4 == 2) {
    <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(&DAT_00b0f678);
  }
LAB_008e5d1c:
  FUN_008e2920(&local_70,&DAT_00b0f660);
  pcVar2 = *(code **)(param_2 + 0x18);
                    /* try { // try from 008e5d30 to 008e5d67 has its CatchHandler @ 008e5f04 */
  local_58 = (undefined4 *)(**(code **)(param_2 + 0x20))(param_1);
  local_34[0] = -1;
  FUN_008e200c(&local_70,&local_58,local_34);
  cVar5 = '\0';
  if (local_34[0] != -1) {
    cVar5 = local_34[0];
  }
  (*pcVar2)(param_1,cVar5);
  if (local_70 != (undefined4 *)0x0) {
    if (local_70 == (undefined4 *)0x1) {
      puVar7 = (uint *)CONCAT71(uStack_5f,local_60);
      do {
        uVar3 = *puVar7;
        cVar5 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(puVar7,0x10);
        if (bVar11) {
          *puVar7 = uVar3 - 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((uVar3 - 1 & 0xbfffffff) != 0x80000000) {
        return;
      }
    }
    else {
      piVar6 = (int *)CONCAT71(uStack_67,local_68);
      if ((((local_60 & 1) == 0) &&
          ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) != 0)) &&
         (uVar13 = std::panicking::panic_count::is_zero_slow_path(), (uVar13 & 1) == 0)) {
        *(undefined1 *)(piVar6 + 2) = 1;
      }
      do {
        iVar4 = *piVar6;
        cVar5 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar11) {
          *piVar6 = iVar4 + -0x3fffffff;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar4 + 0xc0000001U >> 0x1e == 0) {
        return;
      }
    }
    <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::wake_writer_or_readers()
    ;
  }
  return;
}


// ===== 008e5f30  <tracing_core::dispatcher::SetGlobalDefaultError_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::dispatcher::SetGlobalDefaultError as core::fmt::Debug>::fmt */

void __rustcall
<tracing_core::dispatcher::SetGlobalDefaultError_as_core::fmt::Debug>::fmt
          (undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_28 [24];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple
            (auStack_28,param_2,tracing_core::dispatcher::NO_SUBSCRIBER,0x15);
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::field
            (auStack_28,&PTR_s_a_global_default_trace_dispatche_00aee270,&DAT_00aee280);
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::finish();
  return;
}


// ===== 008e5f7c  FUN_008e5f7c =====

void FUN_008e5f7c(undefined8 *param_1)

{
  core::fmt::pointer_fmt_inner(*(undefined8 *)*param_1);
  return;
}


// ===== 008e5f88  <tracing_core::callsite::Identifier_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::callsite::Identifier as core::fmt::Debug>::fmt */

void __rustcall
<tracing_core::callsite::Identifier_as_core::fmt::Debug>::fmt
          (undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_20;
  code *pcStack_18;
  
  pcStack_18 = FUN_008e634c;
  local_20 = param_1;
  core::fmt::write(*param_2,param_2[1],&DAT_002b6efd,&local_20);
  return;
}


// ===== 008e5fc4  <tracing_core::dispatcher::Dispatch_as_core::default::Default>::default =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::dispatcher::Dispatch as core::default::Default>::default */

void __rustcall
<tracing_core::dispatcher::Dispatch_as_core::default::Default>::default(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  code *pcVar4;
  ulong *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  ulong *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  
  puVar3 = PTR_GLOBAL_DISPATCH_00b01080;
  if (*(long *)PTR_SCOPED_COUNT_00b01060 == 0) {
    if (*(long *)PTR_GLOBAL_INIT_00b01070 == 2) {
      plVar6 = *(long **)(PTR_GLOBAL_DISPATCH_00b01080 + 8);
      if (*(long *)PTR_GLOBAL_DISPATCH_00b01080 != 1) {
        uVar8 = 0;
LAB_008e6114:
        uVar10 = *(undefined8 *)(puVar3 + 0x10);
        *param_1 = uVar8;
        param_1[1] = plVar6;
        param_1[2] = uVar10;
        return;
      }
      do {
        lVar7 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar7 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (-1 < lVar7) {
        uVar8 = 1;
        goto LAB_008e6114;
      }
      goto LAB_008e619c;
    }
    goto LAB_008e6168;
  }
  uVar11 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b01068;
  if (uVar11 == 0) {
    uVar11 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
             lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b01068);
    puVar5 = (ulong *)pthread_getspecific((pthread_key_t)uVar11);
    if (puVar5 <= &DAT_00000001) goto LAB_008e6150;
  }
  else {
    puVar5 = (ulong *)pthread_getspecific((pthread_key_t)uVar11);
    if (puVar5 < (ulong *)0x2) {
LAB_008e6150:
      puVar5 = (ulong *)FUN_008e65c8(uVar11 & 0xffffffff,puVar5,0);
    }
  }
  if ((puVar5 != (ulong *)0x0) &&
     (uVar11 = puVar5[4], *(undefined1 *)(puVar5 + 4) = 0, (char)uVar11 == '\x01')) {
    if (0x7ffffffffffffffe < *puVar5) {
                    /* try { // try from 008e6190 to 008e619b has its CatchHandler @ 008e61a0 */
                    /* WARNING: Subroutine does not return */
      core::cell::panic_already_mutably_borrowed(&PTR_s__root__cargo_registry_src_index__00aee140);
    }
    puVar9 = puVar5 + 1;
    uVar11 = *puVar9;
    *puVar5 = *puVar5 + 1;
    if (uVar11 == 2) {
      puVar9 = (ulong *)PTR_GLOBAL_DISPATCH_00b01080;
      if (*(long *)PTR_GLOBAL_INIT_00b01070 != 2) {
        puVar9 = (ulong *)PTR_NONE_00b01078;
      }
      uVar11 = *puVar9;
    }
    plVar6 = (long *)puVar9[1];
    if (uVar11 == 1) {
      do {
        lVar7 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar7 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 < 0) {
LAB_008e619c:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x8e61a0);
        (*pcVar4)();
      }
      uVar8 = 1;
    }
    else {
      uVar8 = 0;
    }
    uVar11 = puVar9[2];
    *(undefined1 *)(puVar5 + 4) = 1;
    *puVar5 = *puVar5 - 1;
    *param_1 = uVar8;
    param_1[1] = plVar6;
    param_1[2] = uVar11;
    return;
  }
LAB_008e6168:
  puVar3 = PTR_NO_SUBSCRIBER_00b010a8;
  *param_1 = 0;
  param_1[1] = puVar3;
  param_1[2] = &DAT_00aee1c0;
  return;
}


// ===== 008e61ac  FUN_008e61ac =====

undefined8 FUN_008e61ac(void)

{
  return 0;
}


// ===== 008e61b4  FUN_008e61b4 =====

void FUN_008e61b4(void)

{
  return;
}


// ===== 008e61b8  FUN_008e61b8 =====

void FUN_008e61b8(void)

{
  return;
}


// ===== 008e61bc  FUN_008e61bc =====

undefined8 FUN_008e61bc(void)

{
  return 0;
}


// ===== 008e61c4  <tracing_core::dispatcher::Dispatch_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::dispatcher::Dispatch as core::fmt::Debug>::fmt */

void __rustcall
<tracing_core::dispatcher::Dispatch_as_core::fmt::Debug>::fmt(long *param_1,undefined8 param_2)

{
  long local_60;
  long lStack_58;
  undefined1 auStack_48 [24];
  undefined *local_30;
  undefined1 **ppuStack_28;
  undefined1 *local_20;
  code *pcStack_18;
  
  local_60 = (long)(param_1 + 1);
  if (*param_1 == 1) {
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple(auStack_48,param_2,&DAT_002a0df0,0x10);
    pcStack_18 = FUN_008e40bc;
  }
  else {
    lStack_58 = param_1[2];
    local_60 = *(long *)local_60;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple(auStack_48,param_2,&DAT_0029ff10,0x10);
    pcStack_18 = FUN_008e7688;
  }
  ppuStack_28 = &local_20;
  local_30 = &DAT_002ab692;
  local_20 = (undefined1 *)&local_60;
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::field
            (auStack_48,&local_30,&DAT_00aee2a0);
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::finish();
  return;
}


// ===== 008e626c  <tracing_core::dispatcher::WeakDispatch_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::dispatcher::WeakDispatch as core::fmt::Debug>::fmt */

void __rustcall
<tracing_core::dispatcher::WeakDispatch_as_core::fmt::Debug>::fmt(long *param_1,undefined8 param_2)

{
  long local_60;
  long lStack_58;
  undefined1 auStack_48 [24];
  undefined *local_30;
  undefined1 **ppuStack_28;
  undefined1 *local_20;
  code *pcStack_18;
  
  local_60 = (long)(param_1 + 1);
  if (*param_1 == 1) {
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple
              (auStack_48,param_2,"WeakDispatch::Scoped",0x14);
    pcStack_18 = FUN_008e40bc;
  }
  else {
    lStack_58 = param_1[2];
    local_60 = *(long *)local_60;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple
              (auStack_48,param_2,"WeakDispatch::Global",0x14);
    pcStack_18 = FUN_008e7688;
  }
  ppuStack_28 = &local_20;
  local_30 = &DAT_002ab692;
  local_20 = (undefined1 *)&local_60;
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::field
            (auStack_48,&local_30,&DAT_00aee2a0);
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::finish();
  return;
}


// ===== 008e6314  <tracing_core::dispatcher::SetGlobalDefaultError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::dispatcher::SetGlobalDefaultError as core::fmt::Display>::fmt */

void __rustcall
<tracing_core::dispatcher::SetGlobalDefaultError_as_core::fmt::Display>::fmt
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::pad
            (param_2,"a global default trace dispatcher has already been set",0x36);
  return;
}


// ===== 008e6328  <tracing_core::callsite::DefaultCallsite_as_tracing_core::callsite::Callsite>::set_interest =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::callsite::DefaultCallsite as tracing_core::callsite::Callsite>::set_interest */

void __rustcall
<tracing_core::callsite::DefaultCallsite_as_tracing_core::callsite::Callsite>::set_interest
          (long param_1,char param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (param_2 == '\x02') {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (param_2 != '\0') {
    uVar1 = uVar2;
  }
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  return;
}


// ===== 008e634c  FUN_008e634c =====

void FUN_008e634c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_1[1];
  core::fmt::wide_pointer_fmt_inner(*param_1,&local_18,&DAT_00aee2c0,param_2);
  return;
}


// ===== 008e6380  FUN_008e6380 =====

undefined8 FUN_008e6380(undefined8 param_1,undefined8 *param_2)

{
  return *param_2;
}


// ===== 008e6388  FUN_008e6388 =====

void FUN_008e6388(undefined8 *param_1)

{
  *param_1 = 2;
  return;
}


// ===== 008e6394  FUN_008e6394 =====

undefined1  [16] FUN_008e6394(undefined8 param_1,long *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._1_7_ = 0;
  auVar1[0] = *param_2 == 0x65e74e117fb35ca4 && param_2[1] == -0x67b0701fa7bc0c0f;
  auVar1._8_8_ = param_1;
  return auVar1;
}


// ===== 008e63d0  FUN_008e63d0 =====

undefined8 FUN_008e63d0(void)

{
  return 1;
}


// ===== 008e63d8  FUN_008e63d8 =====

undefined8 FUN_008e63d8(void)

{
  return 0xfffffffffffffffe;
}


// ===== 008e63e0  FUN_008e63e0 =====

void FUN_008e63e0(void)

{
  return;
}


// ===== 008e63e4  FUN_008e63e4 =====

undefined ** FUN_008e63e4(undefined8 param_1,long param_2,undefined **param_3)

{
  long lVar1;
  ulong uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  long local_58;
  
  if (param_3 != (undefined **)0x0) {
    do {
      auVar6 = <std::sys::stdio::unix::Stderr_as_core::io::write::Write>::write
                         (param_1,param_2,param_3);
      ppuVar3 = auVar6._8_8_;
      if (auVar6._0_8_ == 1) {
        ppuVar4 = param_3;
        if (((ulong)ppuVar3 & 3) < 2) {
          if ((auVar6 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
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
                    /* try { // try from 008e64a0 to 008e64b3 has its CatchHandler @ 008e6524 */
          lVar1 = core::io::error::os_functions::get_os_functions();
          uVar2 = (**(code **)(lVar1 + 0x10))((ulong)ppuVar3 >> 0x20);
          if ((uVar2 & 1) == 0) {
            return ppuVar3;
          }
        }
        else {
          uVar5 = auVar6._12_4_ & 0xff;
          if (10 < (ulong)ppuVar3 >> 0x22) {
            uVar5 = 0xff;
          }
          if (uVar5 != 0x23) {
            return ppuVar3;
          }
        }
      }
      else {
        if (ppuVar3 == (undefined **)0x0) {
          return &PTR_s_failed_to_write_whole_buffer_00aee2e0;
        }
        ppuVar4 = (undefined **)((long)param_3 - (long)ppuVar3);
        if (param_3 < ppuVar3) {
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (ppuVar3,param_3,param_3,&PTR_s__nix_store_8006w282fgsx3273c878b_00aee2f8);
        }
        param_2 = param_2 + (long)ppuVar3;
      }
      param_3 = ppuVar4;
    } while (ppuVar4 != (undefined **)0x0);
  }
  return (undefined **)0x0;
}


// ===== 008e653c  thunk_FUN_008e25f4 =====

ulong thunk_FUN_008e25f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined1 uStack_30;
  long lStack_28;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  iVar1 = core::fmt::write(&uStack_40,&PTR_FUN_00aedc38,param_2,param_3);
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
    core::panicking::panic_fmt(&DAT_0032fbec,0xad,&PTR_s__nix_store_8006w282fgsx3273c878b_00aedc68);
  }
  return uStack_38;
}


// ===== 008e6540  FUN_008e6540 =====

void FUN_008e6540(long param_1,undefined8 param_2)

{
  undefined8 local_40;
  long lStack_38;
  undefined1 *local_30;
  long *plStack_28;
  undefined1 *local_20;
  undefined1 uStack_11;
  
  local_30 = (undefined1 *)&local_40;
  lStack_38 = param_1 + 8;
  plStack_28 = &lStack_38;
  local_20 = &uStack_11;
  local_40 = param_2;
  once_cell::imp::initialize_or_wait(param_1,&local_30,&DAT_00aee310);
  return;
}


// ===== 008e6584  FUN_008e6584 =====

void FUN_008e6584(long param_1,undefined8 param_2)

{
  undefined8 local_40;
  long lStack_38;
  undefined1 *local_30;
  long *plStack_28;
  undefined1 *local_20;
  undefined1 uStack_11;
  
  local_30 = (undefined1 *)&local_40;
  plStack_28 = &lStack_38;
  local_20 = &uStack_11;
  local_40 = param_2;
  lStack_38 = param_1;
  once_cell::imp::initialize_or_wait(param_1 + 0x30,&local_30,&DAT_00aee338);
  return;
}


// ===== 008e65c8  FUN_008e65c8 =====

undefined8 * FUN_008e65c8(pthread_key_t param_1,long param_2,uint *param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 *__pointer;
  void *__ptr;
  uint *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uStack_34;
  
  if (param_2 == 1) {
    return (undefined8 *)0x0;
  }
  puVar3 = (uint *)&DAT_003300f0;
  if (param_3 != (uint *)0x0) {
    param_3[0] = 0;
    param_3[1] = 0;
    puVar3 = param_3 + 2;
    if ((*param_3 & 1) == 0) {
      puVar3 = (uint *)&DAT_003300f0;
    }
  }
  uVar8 = *(undefined8 *)(puVar3 + 2);
  uVar7 = *(undefined8 *)puVar3;
  uVar10 = *(undefined8 *)(puVar3 + 6);
  uVar9 = *(undefined8 *)(puVar3 + 4);
  uVar4 = *(undefined8 *)(puVar3 + 8);
  __pointer = (undefined8 *)malloc(0x30);
  if (__pointer == (undefined8 *)0x0) {
                    /* try { // try from 008e66c4 to 008e66cf has its CatchHandler @ 008e66fc */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x30);
  }
  __pointer[1] = uVar8;
  *__pointer = uVar7;
  __pointer[3] = uVar10;
  __pointer[2] = uVar9;
  __pointer[5] = CONCAT44(uStack_34,param_1);
  __pointer[4] = uVar4;
  __ptr = pthread_getspecific(param_1);
  pthread_setspecific(param_1,__pointer);
  if (__ptr != (void *)0x0) {
    if ((*(long *)((long)__ptr + 8) != 2) && (*(long *)((long)__ptr + 8) != 0)) {
      plVar5 = *(long **)((long)__ptr + 0x10);
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
                    /* try { // try from 008e6684 to 008e6687 has its CatchHandler @ 008e66d4 */
        <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+tracing_core::subscriber::Subscriber+core::marker::Sync+{backref_29}::Send>>
        ::drop_slow();
      }
    }
    free(__ptr);
  }
  return __pointer;
}


// ===== 008e6714  FUN_008e6714 =====

void FUN_008e6714(long param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  void *pvVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plStack_80;
  long local_78;
  undefined **local_70;
  code *pcStack_68;
  
  uVar11 = *(ulong *)(param_1 + 0x10);
  if (uVar11 != 0) {
    uVar10 = 0;
    do {
      lVar9 = *(long *)(param_1 + 8);
      plVar5 = (long *)(lVar9 + uVar10 * 0x18);
      if (*plVar5 == 1) {
        plVar6 = (long *)plVar5[1];
        if (plVar6 == (long *)0xffffffffffffffff) {
LAB_008e67f8:
          uVar12 = uVar10 + 1;
          if ((*plVar5 != 0) && (pvVar4 = (void *)plVar5[1], pvVar4 != (void *)0xffffffffffffffff))
          {
            plVar6 = (long *)((long)pvVar4 + 8);
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
              uVar1 = *(ulong *)(plVar5[2] + 0x10);
              if (uVar1 < 9) {
                uVar1 = 8;
              }
              if ((*(long *)(plVar5[2] + 8) + uVar1 + 0xf & -uVar1) != 0) {
                free(pvVar4);
              }
            }
          }
          if (uVar11 <= uVar12) goto LAB_008e698c;
          do {
            plVar5 = (long *)(lVar9 + uVar12 * 0x18);
            if (*plVar5 == 1) {
              plVar6 = (long *)plVar5[1];
              if (plVar6 != (long *)0xffffffffffffffff) {
                lVar8 = *plVar6;
                do {
                  if (lVar8 == 0) goto LAB_008e6900;
                  if (lVar8 < 0) {
                    local_70 = &PTR_DAT_00aeddc0;
                    pcStack_68 = FUN_008e7434;
                    /* try { // try from 008e69c4 to 008e69db has its CatchHandler @ 008e6a10 */
                    /* WARNING: Subroutine does not return */
                    core::panicking::panic_fmt
                              (&DAT_002ab692,&local_70,
                               &PTR_s__nix_store_8006w282fgsx3273c878b_00aedde8);
                  }
                  lVar7 = *plVar6;
                  if (lVar7 == lVar8) {
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                    if (bVar3) {
                      *plVar6 = lVar8 + 1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                    if (cVar2 == '\0') {
                      bVar3 = true;
                    }
                    else {
                      bVar3 = false;
                    }
                  }
                  else {
                    bVar3 = false;
                    ClearExclusiveLocal();
                  }
                  lVar8 = lVar7;
                } while (!bVar3);
                local_78 = plVar5[2];
                do {
                  lVar9 = *plVar6;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                  if (bVar3) {
                    *plVar6 = lVar9 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                plStack_80 = plVar6;
                if (lVar9 + -1 == 0) {
                  DataMemoryBarrier(2,1);
                    /* try { // try from 008e6980 to 008e6987 has its CatchHandler @ 008e6a0c */
                  <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+tracing_core::subscriber::Subscriber+core::marker::Sync+{backref_29}::Send>>
                  ::drop_slow(&plStack_80);
                }
                goto LAB_008e6874;
              }
LAB_008e6900:
              if ((*plVar5 != 0) &&
                 (pvVar4 = (void *)plVar5[1], pvVar4 != (void *)0xffffffffffffffff)) {
                plVar6 = (long *)((long)pvVar4 + 8);
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
                  uVar1 = *(ulong *)(plVar5[2] + 0x10);
                  if (uVar1 < 9) {
                    uVar1 = 8;
                  }
                  if ((*(long *)(plVar5[2] + 8) + uVar1 + 0xf & -uVar1) != 0) {
                    free(pvVar4);
                  }
                }
              }
            }
            else {
LAB_008e6874:
              lVar9 = *(long *)(param_1 + 8);
              plVar6 = (long *)(lVar9 + uVar10 * 0x18);
              lVar7 = *plVar5;
              lVar8 = plVar5[2];
              uVar10 = uVar10 + 1;
              plVar6[1] = plVar5[1];
              *plVar6 = lVar7;
              plVar6[2] = lVar8;
            }
            uVar12 = uVar12 + 1;
            if (uVar12 == uVar11) {
LAB_008e698c:
              *(ulong *)(param_1 + 0x10) = uVar10;
              return;
            }
          } while( true );
        }
        lVar8 = *plVar6;
        do {
          if (lVar8 == 0) goto LAB_008e67f8;
          if (lVar8 < 0) {
            local_70 = &PTR_DAT_00aeddc0;
            pcStack_68 = FUN_008e7434;
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_fmt
                      (&DAT_002ab692,&local_70,&PTR_s__nix_store_8006w282fgsx3273c878b_00aedde8);
          }
          lVar7 = *plVar6;
          if (lVar7 == lVar8) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = lVar8 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              bVar3 = true;
            }
            else {
              bVar3 = false;
            }
          }
          else {
            bVar3 = false;
            ClearExclusiveLocal();
          }
          lVar8 = lVar7;
        } while (!bVar3);
        local_78 = plVar5[2];
        do {
          lVar9 = *plVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        plStack_80 = plVar6;
        if (lVar9 + -1 == 0) {
          DataMemoryBarrier(2,1);
          <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+tracing_core::subscriber::Subscriber+core::marker::Sync+{backref_29}::Send>>
          ::drop_slow(&plStack_80);
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar11);
  }
  return;
}


// ===== 008e6a44  FUN_008e6a44 =====

void FUN_008e6a44(ulong param_1)

{
  long local_18;
  
  if (((param_1 != 0) && (1 < (param_1 & 3) - 2)) && ((param_1 & 3) != 0)) {
    local_18 = param_1 - 1;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
  }
  return;
}


// ===== 008e6a90  FUN_008e6a90 =====

void FUN_008e6a90(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if ((*(long *)(param_1 + 8) != 2) && (*(long *)(param_1 + 8) != 0)) {
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
      <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+tracing_core::subscriber::Subscriber+core::marker::Sync+{backref_29}::Send>>
      ::drop_slow();
      return;
    }
  }
  return;
}


// ===== 008e6ac4  core[bcece726f298455b]::panicking::assert_failed::<*const_tracing_core[920773a073e900b8]::callsite::DefaultCallsite,*mut_tracing_core[920773a073e900b8]::callsite::DefaultCallsite> =====

/* core[bcece726f298455b]::panicking::assert_failed::<*const
   tracing_core[920773a073e900b8]::callsite::DefaultCallsite, *mut
   tracing_core[920773a073e900b8]::callsite::DefaultCallsite> */

void core[bcece726f298455b]::panicking::assert_failed::
     <*const_tracing_core[920773a073e900b8]::callsite::DefaultCallsite,*mut_tracing_core[920773a073e900b8]::callsite::DefaultCallsite>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = param_2;
  uStack_18 = param_3;
                    /* WARNING: Subroutine does not return */
  core::panicking::assert_failed_inner
            (param_1,&local_20,&DAT_00aee3a0,&uStack_18,&DAT_00aee3c0,param_4,param_5,param_6);
}


// ===== 008e6afc  FUN_008e6afc =====

void FUN_008e6afc(void *param_1)

{
  pthread_key_t __key;
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  
  __key = *(pthread_key_t *)((long)param_1 + 0x28);
  pthread_setspecific(__key,&DAT_00000001);
  if ((*(long *)((long)param_1 + 8) != 2) && (*(long *)((long)param_1 + 8) != 0)) {
    plVar4 = *(long **)((long)param_1 + 0x10);
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
                    /* try { // try from 008e6b50 to 008e6b53 has its CatchHandler @ 008e6b7c */
      <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+tracing_core::subscriber::Subscriber+core::marker::Sync+{backref_29}::Send>>
      ::drop_slow();
    }
  }
  free(param_1);
  iVar3 = pthread_setspecific(__key,(void *)0x0);
                    /* try { // try from 008e6b68 to 008e6b6b has its CatchHandler @ 008e6ba8 */
  std::sys::thread_local::guard::key::enable(iVar3);
  return;
}


// ===== 008e6bb4  FUN_008e6bb4 =====

undefined8 FUN_008e6bb4(undefined8 *param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  long local_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  lVar3 = *(long *)*param_1;
  *(long *)*param_1 = 0;
  pcVar2 = *(code **)(lVar3 + 0x30);
  *(undefined8 *)(lVar3 + 0x30) = 0;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(&local_40);
    puVar4 = (undefined8 *)param_1[1];
    plVar1 = (long *)*puVar4;
    if ((*plVar1 != 0) && (plVar1[2] != 0)) {
      free((void *)plVar1[3]);
      plVar1 = (long *)*puVar4;
    }
    *plVar1 = 1;
    plVar1[2] = lStack_38;
    plVar1[1] = local_40;
    plVar1[4] = lStack_28;
    plVar1[3] = lStack_30;
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            ("Lazy instance has previously been poisoned",0x55,
             &PTR_s__root__cargo_registry_src_index__00aee3e0);
}


// ===== 008e6c54  FUN_008e6c54 =====

undefined8 FUN_008e6c54(undefined8 *param_1)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  void *__ptr;
  long *plVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long local_78;
  long lStack_70;
  long local_68;
  long lStack_60;
  long local_58;
  
  lVar7 = *(long *)*param_1;
  *(long *)*param_1 = 0;
  pcVar6 = *(code **)(lVar7 + 0x38);
  *(undefined8 *)(lVar7 + 0x38) = 0;
  if (pcVar6 != (code *)0x0) {
    (*pcVar6)(&local_78);
    puVar10 = (undefined8 *)param_1[1];
    plVar9 = (long *)*puVar10;
    if (*plVar9 != 0) {
      lVar7 = plVar9[5];
      if (lVar7 != 0) {
        lVar12 = plVar9[4];
        lVar11 = 0;
        do {
          plVar5 = (long *)(lVar12 + lVar11 * 0x18);
          if ((*plVar5 != 0) && (__ptr = (void *)plVar5[1], __ptr != (void *)0xffffffffffffffff)) {
            plVar1 = (long *)((long)__ptr + 8);
            do {
              lVar8 = *plVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *plVar1 = lVar8 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar8 + -1 == 0) {
              DataMemoryBarrier(2,1);
              uVar2 = *(ulong *)(plVar5[2] + 0x10);
              if (uVar2 < 9) {
                uVar2 = 8;
              }
              if ((*(long *)(plVar5[2] + 8) + uVar2 + 0xf & -uVar2) != 0) {
                free(__ptr);
              }
            }
          }
          lVar11 = lVar11 + 1;
        } while (lVar11 != lVar7);
      }
      if (plVar9[3] != 0) {
        free((void *)plVar9[4]);
      }
      plVar9 = (long *)*puVar10;
    }
    *plVar9 = 1;
    plVar9[2] = lStack_70;
    plVar9[1] = local_78;
    plVar9[4] = lStack_60;
    plVar9[3] = local_68;
    plVar9[5] = local_58;
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            ("Lazy instance has previously been poisoned",0x55,
             &PTR_s__root__cargo_registry_src_index__00aee3e0);
}


// ===== 008e6da4  FUN_008e6da4 =====

undefined8 FUN_008e6da4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  long local_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar1 = (undefined8 *)param_1[1];
  lVar4 = *(long *)*param_1;
  *(long *)*param_1 = 0;
  pcVar3 = *(code **)(lVar4 + 0x30);
  *(undefined8 *)(lVar4 + 0x30) = 0;
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(&local_40);
    plVar2 = (long *)*puVar1;
    if ((*plVar2 != 0) && (plVar2[2] != 0)) {
      free((void *)plVar2[3]);
      plVar2 = (long *)*puVar1;
    }
    *plVar2 = 1;
    plVar2[2] = lStack_38;
    plVar2[1] = local_40;
    plVar2[4] = lStack_28;
    plVar2[3] = lStack_30;
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            ("Lazy instance has previously been poisoned",0x55,
             &PTR_s__root__cargo_registry_src_index__00aee3e0);
}


// ===== 008e6e3c  FUN_008e6e3c =====

undefined8 FUN_008e6e3c(void)

{
  FUN_008e6c54();
  return 1;
}


// ===== 008e6e54  <tracing_core::span::tracing_core::span::Id>::from_u64 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::span::tracing_core::span::Id>::from_u64 */

void __rustcall <tracing_core::span::tracing_core::span::Id>::from_u64(long param_1)

{
  if (param_1 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed
            ("span IDs must be > 0",0x14,&PTR_s__root__cargo_registry_src_index__00aee3f8);
}


// ===== 008e6e7c  <tracing_core::event::tracing_core::event::Event>::dispatch =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::event::tracing_core::event::Event>::dispatch */

void __rustcall
<tracing_core::event::tracing_core::event::Event>::dispatch(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_30 [2];
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_30[0] = 1;
  local_20 = param_2;
  uStack_18 = param_1;
  FUN_008e46cc(local_30);
  return;
}


// ===== 008e6ea8  <tracing_core::span::[0]::tracing_core::span::Attributes>::record =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::span::[0]::tracing_core::span::Attributes>::record */

void __rustcall
<tracing_core::span::[0]::tracing_core::span::Attributes>::record
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1[1] != 0) {
    lVar2 = *(long *)(plVar1[2] + 0x10);
    lVar3 = plVar1[1] * 0x18;
    plVar1 = (long *)(*plVar1 + 0x10);
    do {
      if ((*(long *)(plVar1[-2] + 0x10) == lVar2) && (plVar1[-1] != 0)) {
        (**(code **)(*plVar1 + 0x18))(plVar1[-1],plVar1[-2],param_2,param_3);
      }
      lVar3 = lVar3 + -0x18;
      plVar1 = plVar1 + 3;
    } while (lVar3 != 0);
  }
  return;
}


// ===== 008e6f3c  <tracing_core::span::[0]::tracing_core::span::Attributes>::contains =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::span::[0]::tracing_core::span::Attributes>::contains */

undefined8 __rustcall
<tracing_core::span::[0]::tracing_core::span::Attributes>::contains(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if ((*(long *)(param_2 + 0x10) == *(long *)(plVar1[2] + 0x10)) && (plVar1[1] != 0)) {
    lVar2 = plVar1[1] * 0x18;
    plVar1 = (long *)(*plVar1 + 8);
    do {
      if (((*(long *)(plVar1[-1] + 0x10) == *(long *)(param_2 + 0x10)) &&
          (*(long *)(plVar1[-1] + 0x20) == *(long *)(param_2 + 0x20))) && (*plVar1 != 0)) {
        return 1;
      }
      lVar2 = lVar2 + -0x18;
      plVar1 = plVar1 + 3;
    } while (lVar2 != 0);
  }
  return 0;
}


// ===== 008e6fb4  <tracing_core::span::[0]::tracing_core::span::Attributes>::is_empty =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::span::[0]::tracing_core::span::Attributes>::is_empty */

undefined8 __rustcall
<tracing_core::span::[0]::tracing_core::span::Attributes>::is_empty(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1[1] != 0) {
    lVar2 = plVar1[1] * 0x18;
    plVar3 = (long *)(*plVar1 + 8);
    do {
      if ((*plVar3 != 0) && (*(long *)(plVar3[-1] + 0x10) == *(long *)(plVar1[2] + 0x10))) {
        return 0;
      }
      lVar2 = lVar2 + -0x18;
      plVar3 = plVar3 + 3;
    } while (lVar2 != 0);
  }
  return 1;
}


// ===== 008e7010  <tracing_core::span::[1]::tracing_core::span::Record>::len =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::span::[1]::tracing_core::span::Record>::len */

long __rustcall <tracing_core::span::[1]::tracing_core::span::Record>::len(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  param_1 = (long *)*param_1;
  uVar4 = param_1[1];
  if (uVar4 == 0) {
    return 0;
  }
  lVar3 = *(long *)(param_1[2] + 0x10);
  if (uVar4 == 1) {
    uVar7 = 0;
    lVar2 = 0;
  }
  else {
    lVar5 = 0;
    lVar2 = 0;
    uVar7 = uVar4 & 0xfffffffffffffffe;
    uVar8 = uVar4 & 0xfffffffffffffffe;
    plVar6 = (long *)*param_1;
    do {
      lVar9 = *plVar6;
      plVar1 = plVar6 + 3;
      plVar6 = plVar6 + 6;
      if (*(long *)(lVar9 + 0x10) == lVar3) {
        lVar5 = lVar5 + 1;
      }
      if (*(long *)(*plVar1 + 0x10) == lVar3) {
        lVar2 = lVar2 + 1;
      }
      uVar8 = uVar8 - 2;
    } while (uVar8 != 0);
    lVar2 = lVar2 + lVar5;
    if (uVar4 == uVar7) {
      return lVar2;
    }
  }
  lVar5 = uVar4 - uVar7;
  plVar6 = (long *)*param_1 + uVar7 * 3;
  do {
    if (*(long *)(*plVar6 + 0x10) == lVar3) {
      lVar2 = lVar2 + 1;
    }
    lVar5 = lVar5 + -1;
    plVar6 = plVar6 + 3;
  } while (lVar5 != 0);
  return lVar2;
}


// ===== 008e70b8  <tracing_core::span::[1]::tracing_core::span::Record>::record =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::span::[1]::tracing_core::span::Record>::record */

void __rustcall
<tracing_core::span::[1]::tracing_core::span::Record>::record
          (long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  param_1 = (long *)*param_1;
  if (param_1[1] != 0) {
    lVar1 = *(long *)(param_1[2] + 0x10);
    lVar2 = param_1[1] * 0x18;
    plVar3 = (long *)(*param_1 + 0x10);
    do {
      if ((*(long *)(plVar3[-2] + 0x10) == lVar1) && (plVar3[-1] != 0)) {
        (**(code **)(*plVar3 + 0x18))(plVar3[-1],plVar3[-2],param_2,param_3);
      }
      lVar2 = lVar2 + -0x18;
      plVar3 = plVar3 + 3;
    } while (lVar2 != 0);
  }
  return;
}


// ===== 008e714c  <tracing_core::span::[1]::tracing_core::span::Record>::contains =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::span::[1]::tracing_core::span::Record>::contains */

undefined8 __rustcall
<tracing_core::span::[1]::tracing_core::span::Record>::contains(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  
  param_1 = (long *)*param_1;
  if ((*(long *)(param_2 + 0x10) == *(long *)(param_1[2] + 0x10)) && (param_1[1] != 0)) {
    lVar1 = param_1[1] * 0x18;
    plVar2 = (long *)(*param_1 + 8);
    do {
      if (((*(long *)(plVar2[-1] + 0x10) == *(long *)(param_2 + 0x10)) &&
          (*(long *)(plVar2[-1] + 0x20) == *(long *)(param_2 + 0x20))) && (*plVar2 != 0)) {
        return 1;
      }
      lVar1 = lVar1 + -0x18;
      plVar2 = plVar2 + 3;
    } while (lVar1 != 0);
  }
  return 0;
}


// ===== 008e71c4  <tracing_core::span::[1]::tracing_core::span::Record>::is_empty =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::span::[1]::tracing_core::span::Record>::is_empty */

undefined8 __rustcall <tracing_core::span::[1]::tracing_core::span::Record>::is_empty(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  param_1 = (long *)*param_1;
  if (param_1[1] != 0) {
    lVar1 = param_1[1] * 0x18;
    plVar2 = (long *)(*param_1 + 8);
    do {
      if ((*plVar2 != 0) && (*(long *)(plVar2[-1] + 0x10) == *(long *)(param_1[2] + 0x10))) {
        return 0;
      }
      lVar1 = lVar1 + -0x18;
      plVar2 = plVar2 + 3;
    } while (lVar1 != 0);
  }
  return 1;
}


// ===== 008e7220  FUN_008e7220 =====

void FUN_008e7220(void)

{
  undefined1 uStack_11;
  
  thunk_FUN_008e25f4(&uStack_11,"fatal runtime error: thread local panicked on drop, aborting\n",
                     0x7b);
  FUN_008e6a44();
                    /* WARNING: Subroutine does not return */
  std::process::abort();
}


// ===== 008e7248  <core::fmt::builders::DebugMap_as_tracing_core::field::Visit>::record_debug =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::builders::DebugMap as tracing_core::field::Visit>::record_debug */

void __rustcall
<core::fmt::builders::DebugMap_as_tracing_core::field::Visit>::record_debug
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_38;
  undefined *puStack_30;
  undefined8 **local_28;
  undefined8 *local_20;
  code *pcStack_18;
  
  local_20 = &local_38;
  pcStack_18 = FUN_008e3190;
  local_28 = &local_20;
  puStack_30 = &DAT_002ab692;
  local_38 = param_2;
  <core::fmt::builders::[7]::core::fmt::builders::DebugMap>::entry
            (param_1,&puStack_30,&DAT_00aee410,param_3,param_4);
  return;
}


// ===== 008e729c  <core::num::nonzero::NonZero<usize>as_tracing_core::field::Value>::record =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::nonzero::NonZero<usize> as tracing_core::field::Value>::record */

void __rustcall
<core::num::nonzero::NonZero<usize>as_tracing_core::field::Value>::record
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x008e72ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x28))(param_3,param_2,*param_1);
  return;
}


// ===== 008e72b0  <core::num::nonzero::NonZero<i16>as_tracing_core::field::Value>::record =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::nonzero::NonZero<i16> as tracing_core::field::Value>::record */

void __rustcall
<core::num::nonzero::NonZero<i16>as_tracing_core::field::Value>::record
          (short *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x008e72c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x20))(param_3,param_2,(long)*param_1);
  return;
}


// ===== 008e72c4  <core::num::nonzero::NonZero<i8>as_tracing_core::field::Value>::record =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::nonzero::NonZero<i8> as tracing_core::field::Value>::record */

void __rustcall
<core::num::nonzero::NonZero<i8>as_tracing_core::field::Value>::record
          (char *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x008e72d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x20))(param_3,param_2,(long)*param_1);
  return;
}


// ===== 008e72d8  <core::num::nonzero::NonZero<u128>as_tracing_core::field::Value>::record =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::nonzero::NonZero<u128> as tracing_core::field::Value>::record */

void __rustcall
<core::num::nonzero::NonZero<u128>as_tracing_core::field::Value>::record
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x008e72ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x38))(param_3,param_2,*param_1,param_1[1]);
  return;
}


// ===== 008e72f0  <core::num::nonzero::NonZero<i128>as_tracing_core::field::Value>::record =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::nonzero::NonZero<i128> as tracing_core::field::Value>::record */

void __rustcall
<core::num::nonzero::NonZero<i128>as_tracing_core::field::Value>::record
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x008e7304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x30))(param_3,param_2,*param_1,param_1[1]);
  return;
}


// ===== 008e7308  FUN_008e7308 =====

void FUN_008e7308(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  undefined8 local_8;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple(auStack_38,param_2,"DynMetadata",0xb);
  local_8 = *param_1;
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::field
            (auStack_38,&local_8,&DAT_00aee430);
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::finish();
  return;
}


// ===== 008e7368  <core::num::nonzero::NonZero<u32>as_tracing_core::field::Value>::record =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::nonzero::NonZero<u32> as tracing_core::field::Value>::record */

void __rustcall
<core::num::nonzero::NonZero<u32>as_tracing_core::field::Value>::record
          (undefined4 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x008e7378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x28))(param_3,param_2,*param_1);
  return;
}


// ===== 008e737c  FUN_008e737c =====

void FUN_008e737c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008e7384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x18))(*param_1);
  return;
}


// ===== 008e7388  FUN_008e7388 =====

void FUN_008e7388(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Debug>::fmt(*(undefined8 *)*param_1,((undefined8 *)*param_1)[1],param_2);
  return;
}


// ===== 008e739c  FUN_008e739c =====

void FUN_008e739c(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_40 [16];
  long local_18;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  <core::fmt::[a]::core::fmt::Formatter>::debug_list(auStack_40,param_2);
  if (lVar2 != 0) {
    lVar2 = lVar2 << 4;
    do {
      local_18 = lVar1;
      <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry
                (auStack_40,&local_18,&DAT_00aee380);
      lVar2 = lVar2 + -0x10;
      lVar1 = lVar1 + 0x10;
    } while (lVar2 != 0);
  }
  <core::fmt::builders::[6]::core::fmt::builders::DebugList>::finish(auStack_40);
  return;
}


// ===== 008e740c  FUN_008e740c =====

void FUN_008e740c(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Debug>::fmt(*param_1,param_1[1],param_2);
  return;
}


// ===== 008e7420  <core::num::nonzero::NonZero<u16>as_tracing_core::field::Value>::record =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::nonzero::NonZero<u16> as tracing_core::field::Value>::record */

void __rustcall
<core::num::nonzero::NonZero<u16>as_tracing_core::field::Value>::record
          (undefined2 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x008e7430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x28))(param_3,param_2,*param_1);
  return;
}


// ===== 008e7434  FUN_008e7434 =====

void FUN_008e7434(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt(*param_1,param_1[1],param_2);
  return;
}


// ===== 008e7448  <core::num::nonzero::NonZero<u8>as_tracing_core::field::Value>::record =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::nonzero::NonZero<u8> as tracing_core::field::Value>::record */

void __rustcall
<core::num::nonzero::NonZero<u8>as_tracing_core::field::Value>::record
          (undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x008e7458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x28))(param_3,param_2,*param_1);
  return;
}


// ===== 008e745c  FUN_008e745c =====

void FUN_008e745c(undefined8 *param_1)

{
  <u8_as_core::fmt::LowerHex>::fmt(*param_1);
  return;
}


// ===== 008e7464  <core::num::nonzero::NonZero<i64>as_tracing_core::field::Value>::record =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::nonzero::NonZero<i64> as tracing_core::field::Value>::record */

void __rustcall
<core::num::nonzero::NonZero<i64>as_tracing_core::field::Value>::record
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x008e7474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x20))(param_3,param_2,*param_1);
  return;
}


// ===== 008e7478  <core::num::nonzero::NonZero<i32>as_tracing_core::field::Value>::record =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::nonzero::NonZero<i32> as tracing_core::field::Value>::record */

void __rustcall
<core::num::nonzero::NonZero<i32>as_tracing_core::field::Value>::record
          (int *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x008e7488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x20))(param_3,param_2,(long)*param_1);
  return;
}


// ===== 008e748c  <tracing_core::subscriber::NoSubscriber_as_tracing_core::subscriber::Subscriber>::new_span =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::subscriber::NoSubscriber as tracing_core::subscriber::Subscriber>::new_span */

undefined8 __rustcall
<tracing_core::subscriber::NoSubscriber_as_tracing_core::subscriber::Subscriber>::new_span(void)

{
  return 0xdead;
}


// ===== 008e7494  FUN_008e7494 =====

void FUN_008e7494(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 8;
  *(undefined8 *)(param_1 + 6) = 0;
  return;
}


// ===== 008e74ac  <dyn_Trait<Assoc=X>+core::error::Error_as_tracing_core::field::Value>::record =====

/* WARNING: Unknown calling convention: __rustcall */
/* <dyn Trait<Assoc = X> + core::error::Error as tracing_core::field::Value>::record */

void __rustcall
<dyn_Trait<Assoc=X>+core::error::Error_as_tracing_core::field::Value>::record
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
                    /* WARNING: Could not recover jumptable at 0x008e74c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_5 + 0x58))(param_4,param_3,param_1,param_2);
  return;
}


// ===== 008e74cc  FUN_008e74cc =====

void FUN_008e74cc(undefined8 param_1,long param_2)

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


// ===== 008e74e4  FUN_008e74e4 =====

void FUN_008e74e4(undefined8 param_1,long param_2)

{
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <i128_as_core::fmt::LowerHex>::fmt();
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <i128_as_core::fmt::Display>::fmt();
    return;
  }
  <i128_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 008e74fc  FUN_008e74fc =====

void FUN_008e74fc(undefined8 param_1,long param_2)

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


// ===== 008e7514  FUN_008e7514 =====

void FUN_008e7514(undefined8 param_1,long param_2)

{
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <u128_as_core::fmt::LowerHex>::fmt();
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <u128_as_core::fmt::Display>::fmt();
    return;
  }
  <u128_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 008e752c  <core::fmt::builders::DebugStruct_as_tracing_core::field::Visit>::record_debug =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::builders::DebugStruct as tracing_core::field::Visit>::record_debug */

void __rustcall
<core::fmt::builders::DebugStruct_as_tracing_core::field::Visit>::record_debug
          (undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  uVar2 = param_2[4];
  if (uVar2 < (ulong)param_2[1]) {
    puVar1 = (undefined8 *)(*param_2 + uVar2 * 0x10);
    <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
              (param_1,*puVar1,puVar1[1],param_3,param_4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_bounds_check
            (uVar2,param_2[1],&PTR_s__root__cargo_registry_src_index__00aee450);
}


// ===== 008e7570  FUN_008e7570 =====

void FUN_008e7570(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,"PoisonError",0xb);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish_non_exhaustive(auStack_20);
  return;
}


// ===== 008e75a8  <dyn_core[bcece726f298455b]::error::Error+core[bcece726f298455b]::marker::Sync_as_tracing_core[920773a073e900b8]::field::Value>::record =====

/* <dyn core[bcece726f298455b]::error::Error + core[bcece726f298455b]::marker::Sync as
   tracing_core[920773a073e900b8]::field::Value>::record */

void <dyn_core[bcece726f298455b]::error::Error+core[bcece726f298455b]::marker::Sync_as_tracing_core[920773a073e900b8]::field::Value>
     ::record(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
                    /* WARNING: Could not recover jumptable at 0x008e75c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_5 + 0x58))(param_4,param_3,param_1,param_2);
  return;
}


// ===== 008e75c8  FUN_008e75c8 =====

void FUN_008e75c8(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 8;
  param_1[4] = 0;
  return;
}


// ===== 008e75e0  <bool_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <bool_as_core::fmt::Display>::fmt(void)

{
  (*(code *)PTR_fmt_00b02798)();
  return;
}


// ===== 008e75e4  FUN_008e75e4 =====

void FUN_008e75e4(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  ulong uVar5;
  
  piVar4 = (int *)*param_1;
  if ((((*(byte *)(param_1 + 1) & 1) == 0) &&
      ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) != 0)) &&
     (uVar5 = std::panicking::panic_count::is_zero_slow_path(), (uVar5 & 1) == 0)) {
    *(undefined1 *)(piVar4 + 2) = 1;
  }
  do {
    iVar1 = *piVar4;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
    if (bVar3) {
      *piVar4 = iVar1 + -0x3fffffff;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + 0xc0000001U >> 0x1e != 0) {
    <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::wake_writer_or_readers()
    ;
    return;
  }
  return;
}


// ===== 008e766c  <core::fmt::Arguments_as_tracing_core::field::Value>::record =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::Arguments as tracing_core::field::Value>::record */

void __rustcall
<core::fmt::Arguments_as_tracing_core::field::Value>::record
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x008e7684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x60))(param_3,param_2,param_1,&DAT_00aee410);
  return;
}


// ===== 008e7688  FUN_008e7688 =====

void FUN_008e7688(undefined8 *param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_1[1];
  core::fmt::wide_pointer_fmt_inner(*param_1,&local_18,&DAT_00aee468,param_2);
  return;
}


// ===== 008e76bc  <alloc::string::String_as_tracing_core::field::Value>::record =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::string::String as tracing_core::field::Value>::record */

void __rustcall
<alloc::string::String_as_tracing_core::field::Value>::record
          (long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x008e76d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x48))
            (param_3,param_2,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  return;
}


// ===== 008e76d4  FUN_008e76d4 =====

void FUN_008e76d4(undefined8 *param_1)

{
  core::fmt::pointer_fmt_inner(*param_1);
  return;
}


// ===== 008e76dc  FUN_008e76dc =====

undefined8 FUN_008e76dc(void)

{
  return 0;
}


// ===== 008e76e4  FUN_008e76e4 =====

void FUN_008e76e4(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 local_18;
  
  uVar2 = param_3[4];
  local_18 = param_1;
  if (uVar2 < (ulong)param_3[1]) {
    puVar1 = (undefined8 *)(*param_3 + uVar2 * 0x10);
    <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
              (param_2,*puVar1,puVar1[1],&local_18,&DAT_00aee488);
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_bounds_check
            (uVar2,param_3[1],&PTR_s__root__cargo_registry_src_index__00aee450);
}


// ===== 008e7740  FUN_008e7740 =====

void FUN_008e7740(undefined8 param_1,long *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 local_18;
  
  uVar2 = param_2[4];
  local_18 = param_3;
  if (uVar2 < (ulong)param_2[1]) {
    puVar1 = (undefined8 *)(*param_2 + uVar2 * 0x10);
    <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
              (param_1,*puVar1,puVar1[1],&local_18,&DAT_00aee4a8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_bounds_check
            (uVar2,param_2[1],&PTR_s__root__cargo_registry_src_index__00aee450);
}


// ===== 008e779c  FUN_008e779c =====

void FUN_008e779c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 local_20;
  undefined8 uStack_18;
  
  uVar2 = param_2[4];
  local_20 = param_3;
  uStack_18 = param_4;
  if (uVar2 < (ulong)param_2[1]) {
    puVar1 = (undefined8 *)(*param_2 + uVar2 * 0x10);
    <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
              (param_1,*puVar1,puVar1[1],&local_20,&DAT_00aee4c8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_bounds_check
            (uVar2,param_2[1],&PTR_s__root__cargo_registry_src_index__00aee450);
}


// ===== 008e77f8  FUN_008e77f8 =====

void FUN_008e77f8(undefined8 param_1,long *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 local_18;
  
  uVar2 = param_2[4];
  local_18 = param_3;
  if (uVar2 < (ulong)param_2[1]) {
    puVar1 = (undefined8 *)(*param_2 + uVar2 * 0x10);
    <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
              (param_1,*puVar1,puVar1[1],&local_18,&DAT_00aee4e8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_bounds_check
            (uVar2,param_2[1],&PTR_s__root__cargo_registry_src_index__00aee450);
}


// ===== 008e7854  FUN_008e7854 =====

void FUN_008e7854(undefined8 param_1,long *param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined1 local_14 [4];
  
  uVar2 = param_2[4];
  local_14[0] = param_3;
  if (uVar2 < (ulong)param_2[1]) {
    puVar1 = (undefined8 *)(*param_2 + uVar2 * 0x10);
    <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
              (param_1,*puVar1,puVar1[1],local_14,&DAT_00aee508);
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_bounds_check
            (uVar2,param_2[1],&PTR_s__root__cargo_registry_src_index__00aee450);
}


// ===== 008e78b0  FUN_008e78b0 =====

void FUN_008e78b0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 local_20;
  undefined8 uStack_18;
  
  uVar2 = param_2[4];
  local_20 = param_3;
  uStack_18 = param_4;
  if (uVar2 < (ulong)param_2[1]) {
    puVar1 = (undefined8 *)(*param_2 + uVar2 * 0x10);
    <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
              (param_1,*puVar1,puVar1[1],&local_20,&DAT_00aee528);
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_bounds_check
            (uVar2,param_2[1],&PTR_s__root__cargo_registry_src_index__00aee450);
}


// ===== 008e790c  FUN_008e790c =====

void FUN_008e790c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 local_20;
  undefined8 uStack_18;
  
  uVar2 = param_2[4];
  local_20 = param_3;
  uStack_18 = param_4;
  if (uVar2 < (ulong)param_2[1]) {
    puVar1 = (undefined8 *)(*param_2 + uVar2 * 0x10);
    <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
              (param_1,*puVar1,puVar1[1],&local_20,&DAT_00aee548);
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_bounds_check
            (uVar2,param_2[1],&PTR_s__root__cargo_registry_src_index__00aee450);
}


// ===== 008e7968  FUN_008e7968 =====

void FUN_008e7968(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 local_20;
  undefined8 uStack_18;
  
  uVar2 = param_2[4];
  local_20 = param_3;
  uStack_18 = param_4;
  if (uVar2 < (ulong)param_2[1]) {
    puVar1 = (undefined8 *)(*param_2 + uVar2 * 0x10);
    <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
              (param_1,*puVar1,puVar1[1],&local_20,&DAT_00aee568);
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_bounds_check
            (uVar2,param_2[1],&PTR_s__root__cargo_registry_src_index__00aee450);
}


// ===== 008e79c4  FUN_008e79c4 =====

void FUN_008e79c4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 local_20;
  undefined8 uStack_18;
  
  uVar2 = param_2[4];
  local_20 = param_3;
  uStack_18 = param_4;
  if (uVar2 < (ulong)param_2[1]) {
    puVar1 = (undefined8 *)(*param_2 + uVar2 * 0x10);
    <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
              (param_1,*puVar1,puVar1[1],&local_20,&DAT_00aee588);
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_bounds_check
            (uVar2,param_2[1],&PTR_s__root__cargo_registry_src_index__00aee450);
}


// ===== 008e7a20  FUN_008e7a20 =====

void FUN_008e7a20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_40;
  undefined8 local_38;
  undefined *puStack_30;
  undefined8 **local_28;
  undefined8 *local_20;
  code *pcStack_18;
  
  local_20 = &local_38;
  pcStack_18 = FUN_008e3190;
  local_28 = &local_20;
  puStack_30 = &DAT_002ab692;
  local_40 = param_1;
  local_38 = param_3;
  <core::fmt::builders::[7]::core::fmt::builders::DebugMap>::entry
            (param_2,&puStack_30,&DAT_00aee410,&local_40,&DAT_00aee488);
  return;
}


// ===== 008e7a7c  FUN_008e7a7c =====

void FUN_008e7a7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined *local_30;
  undefined8 **ppuStack_28;
  undefined8 *local_20;
  code *pcStack_18;
  
  local_20 = &uStack_38;
  pcStack_18 = FUN_008e3190;
  ppuStack_28 = &local_20;
  local_30 = &DAT_002ab692;
  local_40 = param_3;
  uStack_38 = param_2;
  <core::fmt::builders::[7]::core::fmt::builders::DebugMap>::entry
            (param_1,&local_30,&DAT_00aee410,&local_40,&DAT_00aee4a8);
  return;
}


// ===== 008e7ad4  FUN_008e7ad4 =====

void FUN_008e7ad4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined *puStack_30;
  undefined8 **local_28;
  undefined8 *local_20;
  code *pcStack_18;
  
  local_20 = &local_38;
  pcStack_18 = FUN_008e3190;
  local_28 = &local_20;
  puStack_30 = &DAT_002ab692;
  local_48 = param_3;
  uStack_40 = param_4;
  local_38 = param_2;
  <core::fmt::builders::[7]::core::fmt::builders::DebugMap>::entry
            (param_1,&puStack_30,&DAT_00aee410,&local_48,&DAT_00aee4c8);
  return;
}


// ===== 008e7b30  FUN_008e7b30 =====

void FUN_008e7b30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined *local_30;
  undefined8 **ppuStack_28;
  undefined8 *local_20;
  code *pcStack_18;
  
  local_20 = &uStack_38;
  pcStack_18 = FUN_008e3190;
  ppuStack_28 = &local_20;
  local_30 = &DAT_002ab692;
  local_40 = param_3;
  uStack_38 = param_2;
  <core::fmt::builders::[7]::core::fmt::builders::DebugMap>::entry
            (param_1,&local_30,&DAT_00aee410,&local_40,&DAT_00aee4e8);
  return;
}


// ===== 008e7b88  FUN_008e7b88 =====

void FUN_008e7b88(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 local_3c [4];
  undefined8 local_38;
  undefined *puStack_30;
  undefined8 **local_28;
  undefined8 *local_20;
  code *pcStack_18;
  
  local_20 = &local_38;
  pcStack_18 = FUN_008e3190;
  local_28 = &local_20;
  puStack_30 = &DAT_002ab692;
  local_3c[0] = param_3;
  local_38 = param_2;
  <core::fmt::builders::[7]::core::fmt::builders::DebugMap>::entry
            (param_1,&puStack_30,&DAT_00aee410,local_3c,&DAT_00aee508);
  return;
}


// ===== 008e7be4  FUN_008e7be4 =====

void FUN_008e7be4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_38;
  undefined *puStack_30;
  undefined8 **local_28;
  undefined8 *local_20;
  code *pcStack_18;
  
  local_20 = &local_38;
  pcStack_18 = FUN_008e3190;
  local_28 = &local_20;
  puStack_30 = &DAT_002ab692;
  local_50 = param_3;
  uStack_48 = param_4;
  local_38 = param_2;
  <core::fmt::builders::[7]::core::fmt::builders::DebugMap>::entry
            (param_1,&puStack_30,&DAT_00aee410,&local_50,&DAT_00aee528);
  return;
}


// ===== 008e7c40  FUN_008e7c40 =====

void FUN_008e7c40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_38;
  undefined *puStack_30;
  undefined8 **local_28;
  undefined8 *local_20;
  code *pcStack_18;
  
  local_20 = &local_38;
  pcStack_18 = FUN_008e3190;
  local_28 = &local_20;
  puStack_30 = &DAT_002ab692;
  local_50 = param_3;
  uStack_48 = param_4;
  local_38 = param_2;
  <core::fmt::builders::[7]::core::fmt::builders::DebugMap>::entry
            (param_1,&puStack_30,&DAT_00aee410,&local_50,&DAT_00aee548);
  return;
}


// ===== 008e7c9c  FUN_008e7c9c =====

void FUN_008e7c9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined *puStack_30;
  undefined8 **local_28;
  undefined8 *local_20;
  code *pcStack_18;
  
  local_20 = &local_38;
  pcStack_18 = FUN_008e3190;
  local_28 = &local_20;
  puStack_30 = &DAT_002ab692;
  local_48 = param_3;
  uStack_40 = param_4;
  local_38 = param_2;
  <core::fmt::builders::[7]::core::fmt::builders::DebugMap>::entry
            (param_1,&puStack_30,&DAT_00aee410,&local_48,&DAT_00aee568);
  return;
}


// ===== 008e7cf8  FUN_008e7cf8 =====

void FUN_008e7cf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined *puStack_30;
  undefined8 **local_28;
  undefined8 *local_20;
  code *pcStack_18;
  
  local_20 = &local_38;
  pcStack_18 = FUN_008e3190;
  local_28 = &local_20;
  puStack_30 = &DAT_002ab692;
  local_48 = param_3;
  uStack_40 = param_4;
  local_38 = param_2;
  <core::fmt::builders::[7]::core::fmt::builders::DebugMap>::entry
            (param_1,&puStack_30,&DAT_00aee410,&local_48,&DAT_00aee588);
  return;
}


// ===== 008e7d54  once_cell::imp::initialize_or_wait =====

/* WARNING: Unknown calling convention: __rustcall */
/* once_cell::imp::initialize_or_wait */

void __rustcall once_cell::imp::initialize_or_wait(ulong *param_1,long param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *local_78;
  long local_70;
  char local_68;
  
  uVar3 = *param_1;
LAB_008e7d88:
  uVar4 = uVar3 & 3;
  do {
  } while (uVar4 == 3);
  if (uVar4 == 0) {
    if (param_2 != 0) {
      while (*param_1 == uVar3) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar2) {
          *param_1 = uVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          local_70 = 0;
          local_78 = param_1;
                    /* try { // try from 008e7efc to 008e7f03 has its CatchHandler @ 008e7f38 */
          uVar3 = (**(code **)(param_3 + 0x20))(param_2);
          if ((uVar3 & 1) != 0) {
            local_70 = 2;
          }
          <once_cell::imp::Guard_as_core::ops::drop::Drop>::drop(&local_78);
          return;
        }
      }
      ClearExclusiveLocal();
      uVar3 = *param_1;
      goto LAB_008e7d88;
    }
  }
  else if (uVar4 != 1) {
    return;
  }
  local_78 = (ulong *)std::thread::current::current();
  local_70 = uVar3 - uVar4;
  local_68 = '\0';
LAB_008e7de8:
  uVar5 = *param_1;
  if (uVar5 == uVar3) goto code_r0x008e7df4;
  ClearExclusiveLocal();
  while (local_68 = '\0', (uVar5 & 3) == uVar4) {
    if (local_78 != (ulong *)0x0) {
      do {
        uVar3 = *local_78;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(local_78,0x10);
        if (bVar2) {
          *local_78 = uVar3 - 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (uVar3 - 1 == 0) {
        DataMemoryBarrier(2,1);
        <alloc[c1f8e832b0d782c7]::sync::Arc<std[17aff9129faa4dc5]::thread::thread::Inner,std[17aff9129faa4dc5]::alloc::System>>
        ::drop_slow(&local_78);
      }
    }
    local_78 = (ulong *)std::thread::current::current();
    local_70 = uVar5 - uVar4;
    local_68 = '\0';
    while (*param_1 == uVar5) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = (ulong)&local_78 | uVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') goto LAB_008e7e9c;
    }
    ClearExclusiveLocal();
    uVar5 = *param_1;
  }
  if (local_78 != (ulong *)0x0) {
    do {
      uVar3 = *local_78 - 1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(local_78,0x10);
      if (bVar2) {
        *local_78 = uVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    goto LAB_008e7ec8;
  }
  goto LAB_008e7ee0;
code_r0x008e7df4:
  cVar1 = '\x01';
  bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar2) {
    *param_1 = (ulong)&local_78 | uVar4;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_008e7e9c;
  goto LAB_008e7de8;
LAB_008e7e9c:
  while (local_68 == '\0') {
                    /* try { // try from 008e7ea8 to 008e7eab has its CatchHandler @ 008e7f4c */
    std::thread::functions::park();
  }
  if (local_78 != (ulong *)0x0) {
    do {
      uVar3 = *local_78 - 1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(local_78,0x10);
      if (bVar2) {
        *local_78 = uVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_008e7ec8:
    if (uVar3 == 0) {
      DataMemoryBarrier(2,1);
      <alloc[c1f8e832b0d782c7]::sync::Arc<std[17aff9129faa4dc5]::thread::thread::Inner,std[17aff9129faa4dc5]::alloc::System>>
      ::drop_slow(&local_78);
      uVar3 = *param_1;
      goto LAB_008e7d88;
    }
  }
LAB_008e7ee0:
  uVar3 = *param_1;
  goto LAB_008e7d88;
}


// ===== 008e7f84  <once_cell::imp::Guard_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <once_cell::imp::Guard as core::ops::drop::Drop>::drop */

void __rustcall <once_cell::imp::Guard_as_core::ops::drop::Drop>::drop(undefined8 *param_1)

{
  long *plVar1;
  ulong *puVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  char cVar6;
  bool bVar7;
  undefined8 in_x4;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  ulong local_30;
  long *local_28;
  
  puVar2 = (ulong *)*param_1;
  uVar4 = param_1[1];
  do {
    uVar8 = *puVar2;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar7) {
      *puVar2 = uVar4;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  local_30 = uVar8 & 3;
  if (local_30 != 1) {
                    /* WARNING: Subroutine does not return */
    core::panicking::assert_failed<usize,usize>
              (0,&local_30,&DAT_002a14c8,0,in_x4,&PTR_s__root__cargo_registry_src_index__00aee5c0);
  }
  plVar9 = (long *)(uVar8 - 1);
  if (plVar9 != (long *)0x0) {
    local_30 = 1;
    do {
      plVar3 = (long *)*plVar9;
      plVar5 = (long *)plVar9[1];
      *plVar9 = 0;
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00aee5a8);
      }
      plVar1 = plVar3 + 5;
      *(undefined4 *)(plVar9 + 2) = 1;
      do {
        lVar10 = *plVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *(int *)plVar1 = 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      local_28 = plVar3;
      if ((int)lVar10 == -1) {
                    /* try { // try from 008e7ff8 to 008e7ffb has its CatchHandler @ 008e8060 */
        std::sys::pal::unix::futex::futex_wake();
      }
      do {
        lVar10 = *local_28;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(local_28,0x10);
        if (bVar7) {
          *local_28 = lVar10 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar10 + -1 == 0) {
        DataMemoryBarrier(2,1);
        <alloc[c1f8e832b0d782c7]::sync::Arc<std[17aff9129faa4dc5]::thread::thread::Inner,std[17aff9129faa4dc5]::alloc::System>>
        ::drop_slow(&local_28);
      }
      plVar9 = plVar5;
    } while (plVar5 != (long *)0x0);
  }
  return;
}


// ===== 008e8094  FUN_008e8094 =====

void FUN_008e8094(long param_1)

{
  void *__ptr;
  
                    /* try { // try from 008e80a4 to 008e80a7 has its CatchHandler @ 008e80fc */
  FUN_008e8530();
  __ptr = *(void **)(param_1 + 0x60);
  if (__ptr != (void *)0x0) {
                    /* try { // try from 008e80b0 to 008e80b7 has its CatchHandler @ 008e80dc */
    FUN_008f096c(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 008e8118  FUN_008e8118 =====

void FUN_008e8118(long *param_1)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  
  __ptr = (void *)param_1[1];
  lVar2 = param_1[2] + 1;
  lVar1 = (long)__ptr + 0x38;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 008e8154 to 008e8157 has its CatchHandler @ 008e81a0 */
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


// ===== 008e81f4  FUN_008e81f4 =====

void FUN_008e81f4(long *param_1)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  
  __ptr = (void *)param_1[1];
  lVar2 = param_1[2] + 1;
  lVar1 = (long)__ptr + 0x38;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 008e8230 to 008e8233 has its CatchHandler @ 008e8278 */
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


// ===== 008e82c8  FUN_008e82c8 =====

void FUN_008e82c8(long param_1)

{
  if (*(long *)(param_1 + 0x40) != 0) {
                    /* try { // try from 008e82e8 to 008e82ef has its CatchHandler @ 008e830c */
    (**(code **)(*(long *)(param_1 + 0x40) + 0x20))
              (param_1 + 0x58,*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
  }
                    /* WARNING: Could not recover jumptable at 0x008e8308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x20))
            (param_1 + 0x30,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}


// ===== 008e8330  FUN_008e8330 =====

void FUN_008e8330(long param_1)

{
  if (*(long *)(param_1 + 0x38) != 0) {
                    /* try { // try from 008e8350 to 008e8357 has its CatchHandler @ 008e8374 */
    (**(code **)(*(long *)(param_1 + 0x38) + 0x20))
              (param_1 + 0x50,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
  }
                    /* WARNING: Could not recover jumptable at 0x008e8370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x20))
            (param_1 + 0x30,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}


// ===== 008e8398  FUN_008e8398 =====

void FUN_008e8398(long param_1)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    free(*(void **)(param_1 + 0x48));
  }
                    /* try { // try from 008e83c8 to 008e83cf has its CatchHandler @ 008e8458 */
  FUN_008f0b4c(param_1 + 0x18);
  if (*(long *)(param_1 + 0x18) != 0) {
    free(*(void **)(param_1 + 0x20));
  }
  __ptr = *(void **)(param_1 + 0x38);
  lVar2 = *(long *)(param_1 + 0x40) + 1;
  lVar1 = (long)__ptr + 0x38;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 008e8410 to 008e8413 has its CatchHandler @ 008e8488 */
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


// ===== 008e84d8  FUN_008e84d8 =====

void FUN_008e84d8(void *param_1)

{
  if (param_1 != (void *)0x0) {
                    /* try { // try from 008e84e8 to 008e84ef has its CatchHandler @ 008e8514 */
    FUN_008f096c();
    free(param_1);
    return;
  }
  return;
}


// ===== 008e8530  FUN_008e8530 =====

void FUN_008e8530(long param_1)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    free(*(void **)(param_1 + 0x48));
  }
                    /* try { // try from 008e8560 to 008e8567 has its CatchHandler @ 008e85f4 */
  FUN_008f0a90(param_1 + 0x18);
  if (*(long *)(param_1 + 0x18) != 0) {
    free(*(void **)(param_1 + 0x20));
  }
  __ptr = *(void **)(param_1 + 0x38);
  lVar2 = *(long *)(param_1 + 0x40) + 1;
  lVar1 = (long)__ptr + 0x38;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 008e85a8 to 008e85ab has its CatchHandler @ 008e8624 */
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


// ===== 008e8678  FUN_008e8678 =====

void FUN_008e8678(ulong *param_1)

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
                    /* try { // try from 008e86bc to 008e86bf has its CatchHandler @ 008e8704 */
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


// ===== 008e8754  FUN_008e8754 =====

undefined1  [16] FUN_008e8754(ulong param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = *(undefined8 *)(&DAT_003305f8 + (param_1 & 0xff) * 8);
  auVar1._0_8_ = (&PTR_s_accept_00aee8d8)[param_1 & 0xff];
  return auVar1;
}


// ===== 008e8774  FUN_008e8774 =====

bool FUN_008e8774(long param_1,undefined2 param_2,long *param_3,long *param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined6 uStack_36;
  
  uVar2 = *(ulong *)(param_1 + 0x28);
  if (uVar2 >> 0xf == 0) {
    lVar5 = param_3[1];
    lVar3 = *param_3;
    lVar8 = param_3[3];
    lVar7 = param_3[2];
    lVar10 = param_4[1];
    lVar9 = *param_4;
    lVar6 = param_4[3];
    lVar4 = param_4[2];
    if (uVar2 == *(ulong *)(param_1 + 0x18)) {
                    /* try { // try from 008e87f8 to 008e87fb has its CatchHandler @ 008e8844 */
      <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<http::header::map::Bucket<bytes::bytes::Bytes>>>
      ::grow_one();
    }
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x20) + uVar2 * 0x60);
    puVar1[1] = uStack_88;
    *puVar1 = 0;
    puVar1[3] = lVar9;
    puVar1[2] = uStack_80;
    puVar1[9] = lVar7;
    puVar1[8] = lVar5;
    puVar1[0xb] = CONCAT62(uStack_36,param_2);
    puVar1[10] = lVar8;
    puVar1[5] = lVar4;
    puVar1[4] = lVar10;
    puVar1[7] = lVar3;
    puVar1[6] = lVar6;
    *(ulong *)(param_1 + 0x28) = uVar2 + 1;
  }
  else {
                    /* try { // try from 008e87a4 to 008e87ab has its CatchHandler @ 008e8858 */
    (**(code **)(*param_4 + 0x20))(param_4 + 3,param_4[1],param_4[2]);
    if (*param_3 != 0) {
      (**(code **)(*param_3 + 0x20))(param_3 + 3,param_3[1],param_3[2]);
    }
  }
  return (uVar2 & 0xffffffffffff8000) != 0;
}


// ===== 008e8880  FUN_008e8880 =====

bool FUN_008e8880(long param_1,undefined2 param_2,long *param_3,long *param_4)

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
                    /* try { // try from 008e8908 to 008e890b has its CatchHandler @ 008e896c */
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
                    /* try { // try from 008e88b0 to 008e88b7 has its CatchHandler @ 008e8980 */
    (**(code **)(*param_4 + 0x20))(param_4 + 3,param_4[1],param_4[2]);
    if (*param_3 != 0) {
      (**(code **)(*param_3 + 0x20))(param_3 + 3,param_3[1],param_3[2]);
    }
  }
  return (uVar3 & 0xffffffffffff8000) != 0;
}


// ===== 008e89a8  FUN_008e89a8 =====

void FUN_008e89a8(void)

{
  return;
}


// ===== 008e89ac  FUN_008e89ac =====

void FUN_008e89ac(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  param_1[2] = param_4;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_00aee688;
  param_1[1] = param_3;
  return;
}


// ===== 008e89c0  FUN_008e89c0 =====

undefined8 FUN_008e89c0(void)

{
  return 0;
}


// ===== 008e89c8  hyper::proto::h1::role::write_headers =====

/* WARNING: Unknown calling convention: __rustcall */
/* hyper::proto::h1::role::write_headers */

void __rustcall hyper::proto::h1::role::write_headers(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  void *__src;
  ulong uVar3;
  ulong uVar4;
  ulong __n;
  undefined1 auVar5 [16];
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong unaff_x23;
  size_t __n_00;
  long lVar12;
  long *plVar13;
  undefined1 auVar14 [16];
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar3 = *(ulong *)(param_1 + 0x28);
  uVar10 = 0;
  lVar2 = *(long *)(param_1 + 0x38);
  uVar4 = *(ulong *)(param_1 + 0x40);
  lVar11 = 2;
  if (uVar3 != 0) {
    lVar11 = 0;
  }
  if (lVar11 != 2) goto LAB_008e8a34;
LAB_008e8a18:
  uVar10 = uVar10 + 1;
  if (uVar3 <= uVar10) {
    return;
  }
  plVar7 = (long *)(lVar1 + uVar10 * 0x68);
LAB_008e8a78:
  if (*plVar7 == 1) {
    unaff_x23 = plVar7[1];
    lVar11 = 1;
    lVar8 = plVar7[8];
  }
  else {
    lVar11 = 2;
    lVar8 = plVar7[8];
  }
  plVar13 = plVar7 + 3;
  if (lVar8 != 0) goto LAB_008e8b04;
LAB_008e8aac:
  auVar14 = FUN_008e8754((char)plVar7[9]);
  lVar8 = param_2[2];
  lVar9 = *param_2;
  auVar5 = auVar14;
  if (auVar14._8_8_ <= (ulong)(lVar9 - lVar8)) goto LAB_008e8b1c;
LAB_008e8ad0:
  FUN_008f5dd0(param_2,lVar8,auVar14._8_8_,1,1);
  lVar8 = param_2[2];
  lVar9 = *param_2;
  do {
    __n_00 = auVar14._8_8_;
    memcpy((void *)(param_2[1] + lVar8),auVar14._0_8_,__n_00);
    do {
      lVar8 = lVar8 + __n_00;
      param_2[2] = lVar8;
      if ((ulong)(lVar9 - lVar8) < 2) {
        FUN_008f5dd0(param_2,lVar8,2,1,1);
        lVar8 = param_2[2];
        lVar9 = *param_2;
      }
      lVar12 = param_2[1];
      lVar6 = lVar8 + 2;
      param_2[2] = lVar6;
      *(undefined2 *)(lVar12 + lVar8) = 0x203a;
      __src = (void *)plVar13[1];
      __n = plVar13[2];
      if ((ulong)(lVar9 - lVar6) < __n) {
        FUN_008f5dd0(param_2,lVar6,__n,1,1);
        lVar12 = param_2[1];
        lVar6 = param_2[2];
        lVar9 = *param_2;
LAB_008e8b70:
        memcpy((void *)(lVar12 + lVar6),__src,__n);
      }
      else if (__n != 0) goto LAB_008e8b70;
      lVar6 = lVar6 + __n;
      param_2[2] = lVar6;
      if ((ulong)(lVar9 - lVar6) < 2) {
        FUN_008f5dd0(param_2,lVar6,2,1,1);
        lVar12 = param_2[1];
        lVar6 = param_2[2];
      }
      *(undefined2 *)(lVar12 + lVar6) = 0xa0d;
      param_2[2] = lVar6 + 2;
      if (lVar11 == 2) goto LAB_008e8a18;
LAB_008e8a34:
      if (uVar3 <= uVar10) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (uVar10,uVar3,&PTR_s__root__cargo_registry_src_index__00aeee18);
      }
      plVar7 = (long *)(lVar1 + uVar10 * 0x68);
      if (lVar11 == 0) goto LAB_008e8a78;
      if (uVar4 <= unaff_x23) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (unaff_x23,uVar4,&PTR_s__root__cargo_registry_src_index__00aeee30);
      }
      lVar8 = lVar2 + unaff_x23 * 0x48;
      if ((*(uint *)(lVar8 + 0x10) & 1) == 0) {
        lVar11 = 2;
      }
      else {
        unaff_x23 = *(ulong *)(lVar8 + 0x18);
        lVar11 = 1;
      }
      plVar13 = (long *)(lVar8 + 0x20);
      if (plVar7[8] == 0) goto LAB_008e8aac;
LAB_008e8b04:
      auVar14 = *(undefined1 (*) [16])(plVar7 + 9);
      lVar8 = param_2[2];
      lVar9 = *param_2;
      auVar5 = *(undefined1 (*) [16])(plVar7 + 9);
      if ((ulong)(lVar9 - lVar8) < (ulong)plVar7[10]) goto LAB_008e8ad0;
LAB_008e8b1c:
      auVar14 = auVar5;
      __n_00 = auVar14._8_8_;
    } while (__n_00 == 0);
  } while( true );
}


// ===== 008e8c5c  hyper::proto::h1::role::is_complete_fast =====

/* WARNING: Unknown calling convention: __rustcall */
/* hyper::proto::h1::role::is_complete_fast */

undefined8 __rustcall
hyper::proto::h1::role::is_complete_fast(long param_1,ulong param_2,ulong param_3)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar3 = 0;
  if (2 < param_3) {
    uVar3 = param_3 - 3;
  }
  uVar2 = param_2 - uVar3;
  if (param_2 < uVar3) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (uVar3,param_2,param_2,&PTR_s__root__cargo_registry_src_index__00aee770);
  }
  if (uVar2 != 0) {
    uVar4 = ~param_3;
    lVar5 = param_3 - param_2;
    if (2 < param_3) {
      param_3 = 3;
    }
    param_1 = param_1 + uVar3;
    uVar4 = uVar4 + param_2 + param_3;
    uVar3 = 1;
    do {
      cVar1 = *(char *)(param_1 + uVar3 + -1);
      if (cVar1 == '\n') {
        if ((uVar3 < uVar2) && (*(char *)(param_1 + uVar3) == '\n')) {
          return 1;
        }
      }
      else if (cVar1 == '\r') {
        if (uVar2 < uVar3) {
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (uVar3,uVar2,uVar2,&PTR_s__root__cargo_registry_src_index__00aee758);
        }
        if ((2 < uVar4) &&
           (*(short *)(param_1 + uVar3) == 0xd0a && (char)((short *)(param_1 + uVar3))[1] == '\n'))
        {
          return 1;
        }
      }
      uVar3 = uVar3 + 1;
      uVar4 = uVar4 - 1;
    } while ((lVar5 - param_3) + uVar3 != 1);
  }
  return 0;
}


// ===== 008e8d54  FUN_008e8d54 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e8d54(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  ushort *puVar1;
  undefined2 *puVar2;
  long lVar3;
  char cVar4;
  ushort uVar5;
  ushort uVar6;
  long lVar7;
  void *__s2;
  size_t __n;
  ushort uVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  uint *puVar16;
  ulong uVar17;
  long local_130;
  void *pvStack_128;
  size_t local_120;
  undefined8 uStack_118;
  long local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined3 uStack_e4;
  long local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long local_c0;
  void *pvStack_b8;
  size_t sStack_b0;
  undefined8 uStack_a8;
  long local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 auStack_69 [9];
  
  pvStack_128 = _UNK_002c0370;
  local_130 = _DAT_002c0368;
  uStack_118 = _UNK_002c0380;
  local_120 = _DAT_002c0378;
                    /* try { // try from 008e8d90 to 008e8d9b has its CatchHandler @ 008e91a0 */
  <http::header::value::HeaderValue_as_core::convert::From<usize>>::from(&local_110,param_3);
                    /* try { // try from 008e8d9c to 008e8da3 has its CatchHandler @ 008e91c8 */
  iVar9 = FUN_008ee324(param_2);
  if (iVar9 == 0) {
    uVar8 = FUN_008ed464(param_2,&local_130);
    __n = local_120;
    __s2 = pvStack_128;
    lVar7 = local_130;
    uVar5 = *(ushort *)(param_2 + 0xb);
    lVar13 = param_2[9];
    uVar10 = param_2[10];
    lVar3 = param_2[4];
    uVar11 = param_2[5];
    uVar17 = 0;
    uVar12 = (ulong)(uVar5 & uVar8);
    cVar4 = (char)pvStack_128;
    do {
      if ((uVar10 <= uVar12) && (uVar12 = 0, uVar10 == 0)) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      puVar1 = (ushort *)(lVar13 + uVar12 * 4);
      uVar15 = (ulong)*puVar1;
      if (uVar15 == 0xffff) {
        pvStack_b8 = pvStack_128;
        local_c0 = local_130;
        uStack_a8 = uStack_118;
        sStack_b0 = local_120;
        local_80 = local_f0;
        uStack_98 = uStack_108;
        local_a0 = local_110;
        uStack_88 = uStack_f8;
        local_90 = local_100;
        uVar17 = FUN_008e8880(param_2,uVar8,&local_c0,&local_a0);
        if ((uVar17 & 1) != 0) goto LAB_008e912c;
        if ((ulong)param_2[10] <= uVar12) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check
                    (uVar12,param_2[10],&PTR_s__root__cargo_registry_src_index__00aee620);
        }
        puVar2 = (undefined2 *)(param_2[9] + uVar12 * 4);
        *puVar2 = (short)uVar11;
        puVar2[1] = uVar8;
        goto LAB_008e8fe4;
      }
      uVar6 = puVar1[1];
      if (((ulong)((int)uVar12 - (uint)(uVar6 & uVar5)) & (ulong)uVar5) < uVar17) {
        pvStack_b8 = pvStack_128;
        local_c0 = local_130;
        uStack_a8 = uStack_118;
        sStack_b0 = local_120;
        lVar13 = *param_2;
        local_80 = local_f0;
        uStack_98 = uStack_108;
        local_a0 = local_110;
        uStack_88 = uStack_f8;
        local_90 = local_100;
        uVar10 = FUN_008e8880(param_2,uVar8,&local_c0,&local_a0);
        if ((uVar10 & 1) == 0) {
          lVar3 = param_2[9];
          uVar15 = param_2[10];
          uVar10 = 0;
          uVar14 = (uint)uVar11 & 0xffff;
          while( true ) {
            uVar5 = (ushort)uVar14;
            if ((uVar15 <= uVar12) && (uVar12 = 0, uVar15 == 0)) {
              do {
                    /* WARNING: Do nothing block with infinite loop */
              } while( true );
            }
            puVar1 = (ushort *)(lVar3 + uVar12 * 4);
            uVar14 = (uint)*puVar1;
            if (uVar14 == 0xffff) break;
            uVar6 = puVar1[1];
            *puVar1 = uVar5;
            uVar10 = uVar10 + 1;
            puVar1[1] = uVar8;
            uVar12 = uVar12 + 1;
            uVar8 = uVar6;
          }
          *puVar1 = uVar5;
          puVar1[1] = uVar8;
          if ((0x7f < uVar10 || 0x1ff < uVar17 && lVar13 != 2) && (*param_2 == 0)) {
            *param_2 = 1;
          }
          goto LAB_008e8fe4;
        }
        goto LAB_008e912c;
      }
      if (uVar6 == uVar8) {
        if (uVar11 <= uVar15) {
                    /* try { // try from 008e90e4 to 008e90f3 has its CatchHandler @ 008e91c8 */
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check
                    (uVar15,uVar11,&PTR_s__root__cargo_registry_src_index__00aee608);
        }
        puVar16 = (uint *)(lVar3 + uVar15 * 0x68);
        if ((lVar7 == 0) != (*(long *)(puVar16 + 0x10) != 0)) {
          if (*(long *)(puVar16 + 0x10) == 0) {
            if ((char)puVar16[0x12] == cVar4) goto LAB_008e8eac;
          }
          else if ((*(size_t *)(puVar16 + 0x14) == __n) &&
                  (iVar9 = memcmp(*(void **)(puVar16 + 0x12),__s2,__n), iVar9 == 0))
          goto LAB_008e8eac;
        }
      }
      uVar17 = uVar17 + 1;
      uVar12 = uVar12 + 1;
    } while( true );
  }
                    /* try { // try from 008e9108 to 008e910f has its CatchHandler @ 008e9198 */
  (**(code **)(local_110 + 0x20))(&uStack_f8,uStack_108,local_100);
  if (local_130 != 0) {
    (**(code **)(local_130 + 0x20))(&uStack_118,pvStack_128,local_120);
  }
LAB_008e912c:
                    /* WARNING: Subroutine does not return */
  core::result::unwrap_failed
            ("size overflows MAX_SIZE",0x17,auStack_69,&DAT_00aee668,
             &PTR_s__root__cargo_registry_src_index__00aee788);
LAB_008e8eac:
  local_80 = local_f0;
  uStack_98 = uStack_108;
  local_a0 = local_110;
  uStack_88 = uStack_f8;
  local_90 = local_100;
  if ((*puVar16 & 1) != 0) {
                    /* try { // try from 008e8ecc to 008e8ed3 has its CatchHandler @ 008e9174 */
    FUN_008ee874(param_2,*(undefined8 *)(puVar16 + 2));
    uVar11 = param_2[5];
  }
  if (uVar11 <= uVar15) {
                    /* try { // try from 008e9160 to 008e916f has its CatchHandler @ 008e9174 */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check
              (uVar15,uVar11,&PTR_s__root__cargo_registry_src_index__00aee6b0);
  }
  lVar13 = param_2[4] + uVar15 * 0x68;
  uStack_d8 = *(undefined8 *)(lVar13 + 0x20);
  local_e0 = *(long *)(lVar13 + 0x18);
  *(undefined8 *)(lVar13 + 0x20) = uStack_98;
  *(long *)(lVar13 + 0x18) = local_a0;
  uStack_c8 = *(undefined8 *)(lVar13 + 0x30);
  uStack_d0 = *(undefined8 *)(lVar13 + 0x28);
  *(undefined8 *)(lVar13 + 0x30) = uStack_88;
  *(undefined8 *)(lVar13 + 0x28) = local_90;
  cVar4 = *(char *)(lVar13 + 0x38);
  *(undefined8 *)(lVar13 + 0x38) = local_80;
  local_e8._0_3_ = (undefined3)*(undefined4 *)(lVar13 + 0x39);
  local_e8._3_1_ = (undefined1)*(undefined4 *)(lVar13 + 0x3c);
  uStack_e4 = (undefined3)((uint)*(undefined4 *)(lVar13 + 0x3c) >> 8);
  if (local_130 != 0) {
    (**(code **)(local_130 + 0x20))(&uStack_118,pvStack_128,local_120);
  }
  if (cVar4 != -1) {
    uStack_98 = uStack_d8;
    local_a0 = local_e0;
    uStack_88 = uStack_c8;
    local_90 = uStack_d0;
    local_80._0_5_ = CONCAT41(local_e8,cVar4);
    local_80 = CONCAT44(CONCAT31(uStack_e4,local_e8._3_1_),(undefined4)local_80);
    if (cVar4 != '\x02') {
      (**(code **)(local_e0 + 0x20))(&uStack_88,uStack_d8,uStack_d0);
    }
LAB_008e8fe4:
    *param_1 = 0xfffffffffffffffe;
    param_1[1] = param_3;
    *(undefined1 *)(param_1 + 3) = 0;
    return;
  }
  goto LAB_008e912c;
}


// ===== 008e920c  hyper::proto::h1::role::write_headers_title_case =====

/* WARNING: Unknown calling convention: __rustcall */
/* hyper::proto::h1::role::write_headers_title_case */

void __rustcall hyper::proto::h1::role::write_headers_title_case(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  void *__src;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  undefined1 auVar6 [16];
  byte bVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong unaff_x19;
  ulong uVar12;
  byte bVar13;
  byte *pbVar14;
  long *plVar15;
  undefined1 auVar16 [16];
  long local_70;
  ulong uStack_68;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar3 = *(ulong *)(param_1 + 0x28);
  uVar12 = 0;
  lVar2 = *(long *)(param_1 + 0x38);
  uVar4 = *(ulong *)(param_1 + 0x40);
  local_70 = 2;
  if (uVar3 != 0) {
    local_70 = 0;
  }
  uStack_68 = unaff_x19;
  if (local_70 != 2) goto LAB_008e9280;
LAB_008e9260:
  uVar12 = uVar12 + 1;
  if (uVar3 <= uVar12) {
    return;
  }
  plVar8 = (long *)(lVar1 + uVar12 * 0x68);
LAB_008e92c8:
  if (*plVar8 == 1) {
    uStack_68 = plVar8[1];
    local_70 = 1;
    lVar11 = plVar8[8];
  }
  else {
    local_70 = 2;
    lVar11 = plVar8[8];
    uStack_68 = unaff_x19;
  }
  plVar15 = plVar8 + 3;
  if (lVar11 != 0) goto LAB_008e9354;
LAB_008e92fc:
  auVar16 = FUN_008e8754((char)plVar8[9]);
  lVar11 = param_2[2];
  uVar9 = *param_2 - lVar11;
  auVar6 = auVar16;
  if (auVar16._8_8_ <= uVar9) goto LAB_008e936c;
LAB_008e9320:
  FUN_008f5dd0(param_2,lVar11,auVar16._8_8_,1,1);
  lVar11 = param_2[2];
  do {
    bVar7 = 0x2d;
    do {
      pbVar14 = auVar16._0_8_;
      bVar5 = *pbVar14;
      bVar13 = 0x20;
      if (0x19 < (byte)(bVar5 + 0x9f) || bVar7 != 0x2d) {
        bVar13 = 0;
      }
      if (lVar11 == *param_2) {
        <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<u8>>::grow_one(param_2);
      }
      bVar7 = bVar13 ^ bVar5;
      lVar10 = auVar16._8_8_ + -1;
      auVar16._8_8_ = lVar10;
      auVar16._0_8_ = pbVar14 + 1;
      *(byte *)(param_2[1] + lVar11) = bVar7;
      lVar11 = lVar11 + 1;
      param_2[2] = lVar11;
    } while (lVar10 != 0);
    uVar9 = *param_2 - lVar11;
    do {
      if (uVar9 < 2) {
        FUN_008f5dd0(param_2,lVar11,2,1,1);
        lVar11 = param_2[2];
      }
      *(undefined2 *)(param_2[1] + lVar11) = 0x203a;
      lVar11 = param_2[2] + 2;
      lVar10 = *param_2;
      param_2[2] = lVar11;
      __src = (void *)plVar15[1];
      uVar9 = plVar15[2];
      if ((ulong)(lVar10 - lVar11) < uVar9) {
        FUN_008f5dd0(param_2,lVar11,uVar9,1,1);
        lVar11 = param_2[2];
LAB_008e9410:
        memcpy((void *)(param_2[1] + lVar11),__src,uVar9);
        lVar11 = param_2[2];
        lVar10 = *param_2;
      }
      else if (uVar9 != 0) goto LAB_008e9410;
      lVar11 = lVar11 + uVar9;
      param_2[2] = lVar11;
      if ((ulong)(lVar10 - lVar11) < 2) {
        FUN_008f5dd0(param_2,lVar11,2,1,1);
        lVar11 = param_2[2];
      }
      *(undefined2 *)(param_2[1] + lVar11) = 0xa0d;
      param_2[2] = param_2[2] + 2;
      unaff_x19 = uStack_68;
      if (local_70 == 2) goto LAB_008e9260;
LAB_008e9280:
      if (uVar3 <= uVar12) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (uVar12,uVar3,&PTR_s__root__cargo_registry_src_index__00aeee18);
      }
      plVar8 = (long *)(lVar1 + uVar12 * 0x68);
      unaff_x19 = uStack_68;
      if (local_70 == 0) goto LAB_008e92c8;
      if (uVar4 <= uStack_68) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (uStack_68,uVar4,&PTR_s__root__cargo_registry_src_index__00aeee30);
      }
      lVar11 = lVar2 + uStack_68 * 0x48;
      if ((*(uint *)(lVar11 + 0x10) & 1) == 0) {
        local_70 = 2;
      }
      else {
        uStack_68 = *(ulong *)(lVar11 + 0x18);
        local_70 = 1;
      }
      plVar15 = (long *)(lVar11 + 0x20);
      if (plVar8[8] == 0) goto LAB_008e92fc;
LAB_008e9354:
      auVar16 = *(undefined1 (*) [16])(plVar8 + 9);
      lVar11 = param_2[2];
      uVar9 = *param_2 - lVar11;
      auVar6 = *(undefined1 (*) [16])(plVar8 + 9);
      if (uVar9 < (ulong)plVar8[10]) goto LAB_008e9320;
LAB_008e936c:
      auVar16 = auVar6;
    } while (auVar16._8_8_ == 0);
  } while( true );
}


// ===== 008e9504  FUN_008e9504 =====

void FUN_008e9504(long param_1,undefined8 param_2,long *param_3,uint param_4)

{
  long lVar1;
  byte *pbVar2;
  bool bVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  byte bVar9;
  byte bVar10;
  long lVar11;
  uint *puVar12;
  long lVar13;
  uint *puVar14;
  undefined **ppuVar15;
  ulong uVar16;
  ulong *puVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  byte *pbVar21;
  byte *pbVar22;
  long lVar23;
  ulong unaff_x27;
  undefined *__src;
  void *pvVar24;
  byte *pbVar25;
  ulong local_d0;
  ulong local_c0;
  ulong local_b8;
  ulong local_a8;
  ulong local_a0;
  long local_98;
  ulong local_90;
  ulong local_88;
  uint local_80;
  undefined4 uStack_7c;
  ulong local_78;
  long local_70;
  
  lVar11 = *(long *)(param_1 + 0x28);
  if (lVar11 == 0) {
    return;
  }
  lVar18 = *(long *)(param_1 + 0x20);
  lVar19 = lVar18;
LAB_008e9564:
  FUN_008ec66c(&local_80,param_2,lVar19 + 0x40);
  lVar6 = local_70;
  if (CONCAT44(uStack_7c,local_80) == 1) {
    if (*(ulong *)(local_70 + 0x28) <= local_78) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (local_78,*(ulong *)(local_70 + 0x28),
                 &PTR_s__root__cargo_registry_src_index__00aef730);
    }
    local_d0 = local_78;
    puVar12 = (uint *)(*(long *)(local_70 + 0x20) + local_78 * 0x60);
    bVar3 = (*puVar12 & 1) != 0;
    if (bVar3) {
      puVar12 = *(uint **)(puVar12 + 4);
    }
    local_88 = (ulong)bVar3;
    uVar20 = 0;
    lVar5 = -0x30;
  }
  else {
    lVar5 = -0x28;
    uVar20 = 2;
    local_d0 = 0xffffffffffffffff;
    puVar12 = (uint *)0x2;
  }
  *(uint **)(&stack0xffffffffffffffa0 + lVar5) = puVar12;
  FUN_008ed280(&local_80,param_1,lVar19 + 0x40);
  lVar5 = local_70;
  if ((local_80 & 1) == 0) {
    lVar23 = 2;
    local_c0 = 0xffffffffffffffff;
    local_98 = 2;
  }
  else {
    if (*(ulong *)(local_70 + 0x28) <= local_78) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (local_78,*(ulong *)(local_70 + 0x28),
                 &PTR_s__root__cargo_registry_src_index__00aee650);
    }
    local_c0 = local_78;
    puVar12 = (uint *)(*(long *)(local_70 + 0x20) + local_78 * 0x68);
    if ((*puVar12 & 1) == 0) {
      local_98 = 0;
      lVar23 = 0;
    }
    else {
      local_b8 = *(ulong *)(puVar12 + 4);
      lVar23 = 0;
      local_98 = 1;
    }
  }
  lVar1 = lVar19 + 0x68;
  pbVar2 = (byte *)(lVar19 + 0x48);
  local_a0 = local_88;
  do {
    if (lVar23 == 0) {
      uVar7 = *(ulong *)(lVar5 + 0x28);
      uVar16 = local_c0;
      if (uVar7 <= local_c0) goto LAB_008e9c14;
      puVar12 = (uint *)(*(long *)(lVar5 + 0x20) + local_c0 * 0x68);
      if (local_98 == 0) {
        lVar23 = 2;
        puVar12 = puVar12 + 6;
        local_98 = 2;
      }
      else {
        if ((*puVar12 & 1) == 0) goto LAB_008e9bf4;
        unaff_x27 = *(ulong *)(puVar12 + 2);
        lVar23 = 1;
        puVar12 = puVar12 + 6;
      }
joined_r0x008e9800:
      if (uVar20 != 0) goto LAB_008e9814;
LAB_008e9798:
      uVar7 = *(ulong *)(lVar6 + 0x28);
      uVar16 = local_d0;
      if (uVar7 <= local_d0) {
LAB_008e9c14:
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (uVar16,uVar7,&PTR_s__root__cargo_registry_src_index__00aeedd0);
      }
      puVar14 = (uint *)(*(long *)(lVar6 + 0x20) + local_d0 * 0x60);
      if (local_a0 == 0) {
        uVar20 = 2;
        local_a0 = 2;
      }
      else {
        if ((*puVar14 & 1) == 0) {
LAB_008e9bf4:
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    ("internal error: entered unreachable code",0x28,
                     &PTR_s__root__cargo_registry_src_index__00aeede8);
        }
        local_a8 = *(ulong *)(puVar14 + 2);
        uVar20 = 1;
      }
      lVar8 = param_3[2];
      pvVar24 = *(void **)(puVar14 + 8);
      uVar16 = *(ulong *)(puVar14 + 10);
      if ((ulong)(*param_3 - lVar8) < uVar16) {
LAB_008e9990:
        FUN_008f5dd0(param_3,lVar8,uVar16,1,1);
        lVar8 = param_3[2];
LAB_008e99d8:
        memcpy((void *)(param_3[1] + lVar8),pvVar24,uVar16);
        lVar8 = param_3[2];
      }
      else {
LAB_008e99d4:
        if (uVar16 != 0) goto LAB_008e99d8;
      }
      lVar8 = lVar8 + uVar16;
      param_3[2] = lVar8;
      lVar13 = *(long *)(puVar12 + 4);
      uVar16 = *param_3 - lVar8;
joined_r0x008e9a04:
      if (lVar13 != 0) goto LAB_008e9a08;
LAB_008e9afc:
      if (uVar16 < 3) {
        FUN_008f5dd0(param_3,lVar8,3,1,1);
        lVar8 = param_3[2];
      }
      lVar13 = param_3[1];
      *(undefined1 *)((undefined2 *)(lVar13 + lVar8) + 1) = 10;
      *(undefined2 *)(lVar13 + lVar8) = 0xd3a;
      lVar13 = 3;
    }
    else {
      if (lVar23 == 2) break;
      if (*(ulong *)(lVar5 + 0x40) <= unaff_x27) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (unaff_x27,*(ulong *)(lVar5 + 0x40),
                   &PTR_s__root__cargo_registry_src_index__00aeee00);
      }
      lVar13 = *(long *)(lVar5 + 0x38) + unaff_x27 * 0x48;
      if (((local_98 == 2) || (lVar23 != local_98)) || (unaff_x27 != local_b8)) {
        if (*(long *)(lVar13 + 0x10) != 1) {
          lVar23 = 2;
          puVar12 = (uint *)(lVar13 + 0x20);
          goto joined_r0x008e9800;
        }
        unaff_x27 = *(ulong *)(lVar13 + 0x18);
        lVar23 = 1;
      }
      else {
        lVar23 = 2;
        local_98 = 2;
        unaff_x27 = local_b8;
      }
      puVar12 = (uint *)(lVar13 + 0x20);
      if (uVar20 == 0) goto LAB_008e9798;
LAB_008e9814:
      if (uVar20 != 2) {
        if (*(ulong *)(lVar6 + 0x40) <= local_a8) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check
                    (local_a8,*(ulong *)(lVar6 + 0x40),
                     &PTR_s__root__cargo_registry_src_index__00aeee00);
        }
        lVar13 = *(long *)(lVar6 + 0x38) + local_a8 * 0x40;
        if (((local_a0 == 2) || (uVar20 != local_a0)) || (local_a8 != local_90)) {
          if (*(long *)(lVar13 + 0x10) == 1) {
            local_a8 = *(ulong *)(lVar13 + 0x18);
            uVar20 = 1;
          }
          else {
            uVar20 = 2;
          }
        }
        else {
          uVar20 = 2;
          local_a0 = 2;
          local_a8 = local_90;
        }
        lVar8 = param_3[2];
        pvVar24 = *(void **)(lVar13 + 0x28);
        uVar16 = *(ulong *)(lVar13 + 0x30);
        if (uVar16 <= (ulong)(*param_3 - lVar8)) goto LAB_008e99d4;
        goto LAB_008e9990;
      }
      if ((param_4 & 1) != 0) {
        if (*(long *)(lVar19 + 0x40) == 0) {
          uVar20 = *(ulong *)(&DAT_003305f8 + (ulong)*pbVar2 * 8);
          pbVar21 = (&PTR_s_accept_00aee8d8)[*pbVar2];
          if ((ulong)(*param_3 - param_3[2]) < uVar20) {
            FUN_008f5dd0(param_3,param_3[2],uVar20,1,1);
          }
          pbVar25 = pbVar21 + uVar20;
LAB_008e9a7c:
          lVar8 = param_3[2];
          bVar9 = 0x2d;
          do {
            pbVar22 = pbVar21 + 1;
            bVar4 = *pbVar21;
            bVar10 = 0x20;
            if (0x19 < (byte)(bVar4 + 0x9f) || bVar9 != 0x2d) {
              bVar10 = 0;
            }
            if (lVar8 == *param_3) {
              <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<u8>>::grow_one(param_3);
            }
            bVar9 = bVar10 ^ bVar4;
            *(byte *)(param_3[1] + lVar8) = bVar9;
            lVar8 = lVar8 + 1;
            param_3[2] = lVar8;
            pbVar21 = pbVar22;
          } while (pbVar22 != pbVar25);
        }
        else {
          lVar8 = param_3[2];
          uVar20 = *(ulong *)(lVar19 + 0x50);
          pbVar21 = *(byte **)pbVar2;
          if ((ulong)(*param_3 - lVar8) < uVar20) {
            FUN_008f5dd0(param_3,lVar8,uVar20,1,1);
LAB_008e9854:
            pbVar25 = pbVar21 + uVar20;
            goto LAB_008e9a7c;
          }
          if (uVar20 != 0) goto LAB_008e9854;
        }
        uVar20 = 2;
        lVar13 = *(long *)(puVar12 + 4);
        uVar16 = *param_3 - lVar8;
        goto joined_r0x008e9a04;
      }
      ppuVar15 = (undefined **)(lVar19 + 0x48);
      puVar17 = (ulong *)(lVar19 + 0x50);
      if (*(long *)(lVar19 + 0x40) == 0) {
        ppuVar15 = &PTR_s_accept_00aee8d8 + *pbVar2;
        puVar17 = (ulong *)(&DAT_003305f8 + (ulong)*pbVar2 * 8);
      }
      lVar8 = param_3[2];
      uVar20 = *puVar17;
      __src = *ppuVar15;
      if ((ulong)(*param_3 - lVar8) < uVar20) {
        FUN_008f5dd0(param_3,lVar8,uVar20,1,1);
        lVar8 = param_3[2];
LAB_008e9904:
        memcpy((void *)(param_3[1] + lVar8),__src,uVar20);
        lVar8 = param_3[2];
      }
      else if (uVar20 != 0) goto LAB_008e9904;
      lVar8 = lVar8 + uVar20;
      uVar20 = 2;
      param_3[2] = lVar8;
      uVar16 = *param_3 - lVar8;
      if (*(long *)(puVar12 + 4) == 0) goto LAB_008e9afc;
LAB_008e9a08:
      if (uVar16 < 2) {
        FUN_008f5dd0(param_3,lVar8,2,1,1);
        lVar8 = param_3[2];
      }
      *(undefined2 *)(param_3[1] + lVar8) = 0x203a;
      lVar13 = param_3[2] + 2;
      lVar8 = *param_3;
      param_3[2] = lVar13;
      pvVar24 = *(void **)(puVar12 + 2);
      uVar16 = *(ulong *)(puVar12 + 4);
      if ((ulong)(lVar8 - lVar13) < uVar16) {
        FUN_008f5dd0(param_3,lVar13,uVar16,1,1);
        lVar13 = param_3[2];
LAB_008e96a4:
        memcpy((void *)(param_3[1] + lVar13),pvVar24,uVar16);
        lVar13 = param_3[2];
        lVar8 = *param_3;
      }
      else if (uVar16 != 0) goto LAB_008e96a4;
      lVar13 = lVar13 + uVar16;
      param_3[2] = lVar13;
      if ((ulong)(lVar8 - lVar13) < 2) {
        FUN_008f5dd0(param_3,lVar13,2,1,1);
        lVar13 = param_3[2];
      }
      *(undefined2 *)(param_3[1] + lVar13) = 0xa0d;
      lVar13 = 2;
    }
    param_3[2] = param_3[2] + lVar13;
  } while( true );
  lVar19 = lVar1;
  if (lVar1 == lVar18 + lVar11 * 0x68) {
    return;
  }
  goto LAB_008e9564;
}


// ===== 008e9c6c  <hyper::proto::h1::role::Client_as_hyper::proto::h1::Http1Transaction>::parse =====

/* WARNING: Removing unreachable block (ram,0x008eb0e4) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Unknown calling convention: __rustcall */
/* <hyper::proto::h1::role::Client as hyper::proto::h1::Http1Transaction>::parse */

void __rustcall
<hyper::proto::h1::role::Client_as_hyper::proto::h1::Http1Transaction>::parse
          (undefined8 *param_1,long *param_2,int *param_3)

{
  code *******pppppppcVar1;
  ushort *puVar2;
  undefined2 *puVar3;
  bool bVar4;
  char *pcVar5;
  long lVar6;
  code ******ppppppcVar7;
  undefined8 *puVar8;
  long *plVar9;
  code ******ppppppcVar10;
  byte bVar11;
  byte bVar12;
  ushort uVar13;
  ushort uVar14;
  undefined1 *puVar15;
  char cVar16;
  code *******pppppppcVar17;
  bool bVar18;
  bool bVar19;
  ushort uVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  undefined **ppuVar24;
  undefined *puVar25;
  undefined8 in_x6;
  undefined8 in_x7;
  byte bVar26;
  undefined1 uVar27;
  undefined1 *puVar28;
  code *******pppppppcVar29;
  code *******pppppppcVar30;
  code *******pppppppcVar31;
  undefined8 uVar32;
  code ******ppppppcVar33;
  code ******ppppppcVar34;
  code *******pppppppcVar35;
  code *******pppppppcVar36;
  undefined1 *puVar37;
  undefined1 *__n;
  undefined1 *puVar38;
  ulong uVar39;
  code *******pppppppcVar40;
  uint uVar41;
  code *******pppppppcVar42;
  code *******pppppppcVar43;
  code *******pppppppcVar44;
  char cVar45;
  undefined8 uVar46;
  undefined1 *puVar47;
  code *******pppppppcVar48;
  ulong uVar49;
  undefined1 auVar50 [16];
  undefined8 uVar51;
  undefined **local_1cc8;
  code *******local_1cb0;
  byte local_1c78;
  undefined8 local_1c20;
  code *******local_1c18;
  code *******local_1c10;
  undefined8 local_1060;
  code *******local_f98;
  code *******local_f90;
  code *******pppppppcStack_f88;
  code *******pppppppcStack_f80;
  code *******pppppppcStack_f78;
  code *******local_f70;
  code *******pppppppcStack_f68;
  code *******local_f60;
  code *******pppppppcStack_f58;
  code *******local_f50;
  code *******pppppppcStack_f48;
  code *******local_f40;
  code *******pppppppcStack_f38;
  code *******local_f30;
  long lStack_f28;
  code *******local_f20;
  ulong uStack_f18;
  code *******local_f10;
  undefined8 uStack_f08;
  code *******local_2e8;
  code *******local_2e0;
  code *******pppppppcStack_2d8;
  code *******local_2d0;
  code *******local_2c0;
  code *******local_2b8;
  long local_2b0;
  code *******local_2a8;
  code *******local_2a0;
  code *******pppppppcStack_298;
  code *******local_290;
  code *******pppppppcStack_288;
  code *******local_280;
  code *******pppppppcStack_278;
  code *******pppppppcStack_270;
  code *******pppppppcStack_268;
  code *******pppppppcStack_260;
  code *******local_258;
  code *******pppppppcStack_250;
  code *******local_248;
  code *******pppppppcStack_240;
  long local_238;
  code *******pppppppcStack_230;
  ulong local_228;
  code *******local_220;
  code *******pppppppcStack_218;
  code *******local_210;
  code *******pppppppcStack_208;
  code *******local_200;
  code *******pppppppcStack_1f8;
  code *******local_1f0;
  code *******pppppppcStack_1e8;
  code *******local_1e0;
  long lStack_1d8;
  code *******local_1d0;
  ulong uStack_1c8;
  code *******local_1c0;
  code *******pppppppcStack_1b8;
  code *******local_1b0;
  code *******pppppppcStack_1a8;
  code *******local_1a0;
  code *******pppppppcStack_198;
  code *******local_190;
  code *******pppppppcStack_188;
  code *******local_180;
  code *******pppppppcStack_178;
  code *******pppppppcStack_170;
  code *******pppppppcStack_168;
  code *******local_160;
  code *******pppppppcStack_158;
  code *******local_150;
  code *******pppppppcStack_148;
  code *******local_140;
  long lStack_138;
  code *******local_130;
  ulong uStack_128;
  code *******local_120;
  undefined2 uStack_118;
  char cStack_116;
  undefined5 uStack_115;
  code *******local_110;
  code *******pppppppcStack_108;
  code *******pppppppcStack_100;
  code *******local_f8;
  undefined8 local_f0;
  code *******pppppppcStack_e8;
  code *******pppppppcStack_e0;
  code *******pppppppcStack_d8;
  code *******local_d0;
  long lStack_c8;
  code *******pppppppcStack_c0;
  ulong uStack_b8;
  code *******local_a0;
  code *******pppppppcStack_98;
  code *******local_90;
  code *******local_88;
  code *******local_80;
  undefined1 auStack_71 [17];
  
  local_1060 = 0;
  uVar51 = 0;
  iVar23 = *param_3;
  bVar26 = *(byte *)(param_3 + 0xc);
  uVar46 = 1;
  bVar11 = *(byte *)((long)param_3 + 0x29);
  uVar32 = *(undefined8 *)(param_3 + 2);
  puVar8 = *(undefined8 **)(param_3 + 4);
  bVar12 = *(byte *)((long)param_3 + 0x2f);
  pcVar5 = *(char **)(param_3 + 6);
  plVar9 = *(long **)(param_3 + 8);
  local_1cc8 = &PTR_s__root__cargo_registry_src_index__00aee5f0;
  if (iVar23 != 0) goto LAB_008e9d2c;
LAB_008e9d14:
  local_f98 = (code *******)0x64;
  local_1c20 = 0;
  local_2e8 = (code *******)0x64;
  local_f70 = (code *******)0x0;
  do {
    pppppppcVar42 = local_f0;
    pppppppcStack_100 = (code *******)&DAT_00000008;
    local_f8 = (code *******)0x0;
    pppppppcVar44 = pppppppcStack_f68;
    if (local_2e8 < (code *******)0x65) {
      pppppppcVar44 = local_2e8;
    }
    uVar20 = (ushort)local_f0;
    lVar6 = *param_2;
    local_f0._4_4_ = SUB84(pppppppcVar42,4);
    local_f0._0_4_ = (uint)(uVar20 & 0xff00);
    local_110 = (code *******)0x0;
    pppppppcVar42 = local_f60;
    if (local_2e8 < (code *******)0x65) {
      pppppppcVar42 = (code *******)&pppppppcStack_f68;
    }
                    /* try { // try from 008e9d84 to 008e9d9f has its CatchHandler @ 008eb8a4 */
    <httparse::[3]::httparse::ParserConfig>::parse_response_with_uninit_headers
              (&local_280,param_3 + 10,&local_110,lVar6,param_2[1],pppppppcVar42,pppppppcVar44,in_x6
               ,in_x7,uVar51);
    pppppppcVar1 = pppppppcStack_108;
    pppppppcVar42 = local_110;
    pppppppcVar44 = pppppppcStack_278;
    if (local_280 != (code *******)0x0) {
      if (local_280 == (code *******)0x2) {
        if ((byte)pppppppcStack_278 == 6) {
          if ((bVar26 & 1) != 0) {
            cVar45 = '\0';
            pppppppcVar44 = (code *******)0x0;
            uVar22 = 200;
            uVar41 = 200;
            pppppppcVar42 = (code *******)0x0;
            pppppppcVar1 = (code *******)0x0;
            pppppppcVar30 = local_2e0;
            pppppppcVar40 = pppppppcStack_2d8;
            pppppppcVar31 = local_2d0;
            goto joined_r0x008e9de0;
          }
          uVar27 = 4;
        }
        else if ((byte)pppppppcStack_278 < 3) {
LAB_008eb050:
          uVar27 = 0;
        }
        else if ((byte)pppppppcStack_278 == 3) {
          uVar27 = 9;
        }
        else {
          if ((byte)pppppppcStack_278 == 4) goto LAB_008eb050;
          uVar27 = 8;
        }
        *(undefined1 *)(param_1 + 1) = uVar27;
        uVar32 = 0xfffffffffffffffe;
      }
      else {
        uVar32 = 0xffffffffffffffff;
      }
      *param_1 = uVar32;
joined_r0x008eb110:
      pppppppcVar44 = local_f98;
      if ((code *******)0x64 < local_2e8) {
        free(local_f60);
        pppppppcVar44 = local_f98;
      }
      goto LAB_008eb084;
    }
    if (((ulong)local_f0 & 0x10000) == 0) {
      ppuVar24 = &PTR_s__root__cargo_registry_src_index__00aee7a0;
LAB_008eb450:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 008eb450 to 008eb453 has its CatchHandler @ 008eb940 */
      core::option::unwrap_failed(ppuVar24);
    }
    uVar22 = (uint)local_f0._4_2_;
    uVar41 = (uint)local_f0._4_2_;
    if (uVar41 - 1000 < 0xfffffc7c) {
      *(undefined1 *)(param_1 + 1) = 9;
      *param_1 = 0xfffffffffffffffe;
      goto joined_r0x008eb110;
    }
    local_a0 = (code *******)CONCAT62(local_a0._2_6_,local_f0._4_2_);
    if (local_110 == (code *******)0x0) {
      ppuVar24 = &PTR_s__root__cargo_registry_src_index__00aee7b8;
      goto LAB_008eb450;
    }
                    /* try { // try from 008ea148 to 008ea18b has its CatchHandler @ 008eb8a4 */
    auVar50 = <http::status::http::status::StatusCode>::canonical_reason(&local_a0);
    if (((auVar50._0_8_ == (void *)0x0) || (pppppppcVar1 != auVar50._8_8_)) ||
       (iVar21 = memcmp(pppppppcVar42,auVar50._0_8_,(size_t)pppppppcVar1), iVar21 != 0)) {
      <bytes::bytes::bytes::bytes::Bytes>::copy_from_slice(&local_180,pppppppcVar42,pppppppcVar1);
      pppppppcStack_218 = pppppppcStack_178;
      local_220 = local_180;
      pppppppcStack_208 = pppppppcStack_168;
      local_210 = pppppppcStack_170;
      pppppppcVar42 = pppppppcStack_f68;
      pppppppcVar1 = local_f60;
      pppppppcVar30 = pppppppcStack_f58;
      pppppppcVar40 = local_f0;
    }
    else {
      local_220 = (code *******)0x0;
      pppppppcVar42 = pppppppcStack_f68;
      pppppppcVar1 = local_f60;
      pppppppcVar30 = pppppppcStack_f58;
      pppppppcVar40 = local_f0;
    }
    pppppppcStack_f68 = pppppppcVar42;
    local_f60 = pppppppcVar1;
    pppppppcStack_f58 = pppppppcVar30;
    local_f0 = pppppppcVar40;
    if (((ulong)pppppppcVar40 & 1) == 0) {
                    /* try { // try from 008eb458 to 008eb463 has its CatchHandler @ 008eb8e8 */
                    /* WARNING: Subroutine does not return */
      core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00aee7d0);
    }
    local_f0._1_1_ = (char)((ulong)pppppppcVar40 >> 8);
    cVar45 = '\x01';
    if (local_f0._1_1_ == '\x01') {
      cVar45 = '\x02';
    }
    pppppppcVar36 = local_1c10;
    pppppppcVar29 = local_1c18;
    if (local_f98 < (code *******)0x65) {
      pppppppcVar36 = (code *******)&local_1c18;
      pppppppcVar29 = local_f98;
    }
    if (local_f8 <= pppppppcVar29) {
      pppppppcVar29 = local_f8;
    }
    pppppppcVar42 = local_220;
    pppppppcVar1 = local_f8;
    pppppppcVar30 = pppppppcStack_218;
    pppppppcVar40 = local_210;
    pppppppcVar31 = pppppppcStack_208;
    if (pppppppcVar29 != (code *******)0x0) {
      pppppppcVar48 = pppppppcStack_100 + 2;
      pppppppcVar36 = pppppppcVar36 + 2;
      do {
        ppppppcVar33 = pppppppcVar48[-1];
        if ((ulong)ppppppcVar33 >> 0x10 != 0) {
          *(undefined1 *)(param_1 + 1) = 8;
          *param_1 = 0xfffffffffffffffe;
          if (local_220 != (code *******)0x0) {
                    /* try { // try from 008eb018 to 008eb01f has its CatchHandler @ 008eb940 */
            (*(code *)local_220[4])(&pppppppcStack_208,pppppppcStack_218,local_210);
          }
          goto joined_r0x008eb110;
        }
        ppppppcVar34 = pppppppcVar48[-2];
        pppppppcVar29 = (code *******)((long)pppppppcVar29 + -1);
        ppppppcVar7 = *pppppppcVar48;
        ppppppcVar10 = pppppppcVar48[1];
        pppppppcVar36[-2] = (code ******)((long)ppppppcVar34 - lVar6);
        pppppppcVar36[-1] = (code ******)(((long)ppppppcVar34 - lVar6) + (long)ppppppcVar33);
        *pppppppcVar36 = (code ******)((long)ppppppcVar7 - lVar6);
        pppppppcVar36[1] = (code ******)(((long)ppppppcVar7 - lVar6) + (long)ppppppcVar10);
        pppppppcVar48 = pppppppcVar48 + 4;
        pppppppcVar36 = pppppppcVar36 + 4;
        pppppppcVar30 = pppppppcStack_218;
        pppppppcVar40 = local_210;
        pppppppcVar31 = pppppppcStack_208;
      } while (pppppppcVar29 != (code *******)0x0);
    }
joined_r0x008e9de0:
    local_2d0 = pppppppcVar31;
    pppppppcStack_2d8 = pppppppcVar40;
    local_2e0 = pppppppcVar30;
    if ((code *******)0x64 < local_2e8) {
      free(local_f60);
      uVar41 = uVar22;
    }
    pppppppcStack_f80 = pppppppcStack_2d8;
    pppppppcStack_f88 = local_2e0;
    pppppppcStack_f78 = local_2d0;
                    /* try { // try from 008e9e0c to 008e9e1f has its CatchHandler @ 008eb82c */
    local_f90 = pppppppcVar42;
    <bytes::bytes_mut::bytes::bytes_mut::BytesMut>::split_to(&local_2c0,param_2,pppppppcVar44);
    pppppppcVar42 = local_2b8;
    pppppppcVar44 = local_2c0;
    if ((bVar11 & 1) != 0) {
      pppppppcVar30 = local_1c18;
      if (local_f98 < (code *******)0x65) {
        pppppppcVar30 = local_f98;
      }
      if (pppppppcVar30 < pppppppcVar1) {
                    /* try { // try from 008eb474 to 008eb487 has its CatchHandler @ 008eb8e4 */
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (0,pppppppcVar1,pppppppcVar30,&PTR_s__root__cargo_registry_src_index__00aee7e8);
      }
      pppppppcVar30 = local_1c10;
      if (local_f98 < (code *******)0x65) {
        pppppppcVar30 = (code *******)&local_1c18;
      }
      if (pppppppcVar1 != (code *******)0x0) {
        pppppppcVar40 = pppppppcVar30 + (long)pppppppcVar1 * 4;
        puVar28 = (undefined1 *)((long)local_2c0 + -1);
LAB_008e9e9c:
        pppppppcVar31 = (code *******)pppppppcVar30[2];
        pppppppcVar36 = (code *******)pppppppcVar30[3];
        pppppppcVar29 = (code *******)((long)pppppppcVar36 - (long)pppppppcVar31);
        if ((pppppppcVar36 < pppppppcVar31) || (pppppppcVar42 < pppppppcVar36)) {
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail();
        }
        if (pppppppcVar36 != pppppppcVar31) {
          pppppppcVar36 = (code *******)0x0;
          do {
            if (((undefined1 *)((long)pppppppcVar44 + (long)pppppppcVar31))[(long)pppppppcVar36] ==
                '\n') {
              if (pppppppcVar36 == (code *******)0x0) goto LAB_008e9f0c;
              pppppppcVar48 = pppppppcVar36;
              goto LAB_008e9eec;
            }
            pppppppcVar36 = (code *******)((long)pppppppcVar36 + 1);
          } while (pppppppcVar29 != pppppppcVar36);
        }
        goto LAB_008e9e90;
      }
    }
LAB_008ea254:
    if (((ulong)local_2a8 & 1) == 0) {
      pppppppcStack_288 = local_2a8;
      local_2a0 = (code *******)PTR_SHARED_VTABLE_00b00e28;
      pppppppcVar30 = (code *******)*puVar8;
      *puVar8 = 0xffffffffffffffff;
      pppppppcStack_298 = pppppppcVar44;
      local_290 = pppppppcVar42;
      if (pppppppcVar30 != (code *******)0xffffffffffffffff) goto LAB_008ea28c;
LAB_008ea398:
                    /* try { // try from 008ea398 to 008ea3a3 has its CatchHandler @ 008eb7c0 */
      FUN_008ee674(&local_f70,0);
      if (local_f70 == (code *******)0xffffffffffffffff) {
                    /* try { // try from 008eb55c to 008eb57f has its CatchHandler @ 008eb8ac */
                    /* WARNING: Subroutine does not return */
        core::result::unwrap_failed
                  ("zero capacity should never failOPTIONSGETPUTDELETETRACECONNECTPATCH",0x1f,
                   auStack_71,&DAT_00aee668,&PTR_s__root__cargo_registry_src_index__00aee800);
      }
      local_258 = pppppppcStack_f48;
      pppppppcStack_260 = local_f50;
      local_248 = pppppppcStack_f38;
      pppppppcStack_250 = local_f40;
      local_238 = lStack_f28;
      pppppppcStack_240 = local_f30;
      local_228 = uStack_f18;
      pppppppcStack_230 = local_f20;
      pppppppcStack_278 = pppppppcStack_f68;
      local_280 = local_f70;
      pppppppcStack_268 = pppppppcStack_f58;
      pppppppcStack_270 = local_f60;
      if ((bVar12 & 1) == 0) goto LAB_008ea3f8;
LAB_008ea2d8:
                    /* try { // try from 008ea2d8 to 008ea2e3 has its CatchHandler @ 008eb7e0 */
      FUN_008edbb0(&local_f70,0);
      if (local_f70 == (code *******)0xffffffffffffffff) {
                    /* try { // try from 008eb530 to 008eb553 has its CatchHandler @ 008eb8b4 */
                    /* WARNING: Subroutine does not return */
        core::result::unwrap_failed
                  ("zero capacity should never failinvalid HTTP method parsedinvalid HTTP version parsedinvalid HTTP version parsed (found HTTP2 preface)invalid URIinvalid HTTP header parsedinvalid content-length parsedunexpected transfer-encoding parsedmessage head is too largeinvalid HTTP status-code parsedinternal error inside Hyper and/or its dependencies, please reporterror from user\'s Body streamuser body write abortederror from user\'s Serviceno upgrade availableupgrade expected but low level API in usedispatch task is goneconnection closed before message completedreceived unexpected message from connectionoperation was canceledchannel closederror reading a body from connectionerror writing a body to connectionerror shutting down connection"
                   ,0x1f,auStack_71,&DAT_00aef760,&PTR_s__root__cargo_registry_src_index__00aef748);
      }
      pppppppcStack_1f8 = pppppppcStack_f48;
      local_200 = local_f50;
      pppppppcStack_1e8 = pppppppcStack_f38;
      local_1f0 = local_f40;
      lStack_1d8 = lStack_f28;
      local_1e0 = local_f30;
      uStack_1c8 = uStack_f18;
      local_1d0 = local_f20;
      pppppppcStack_218 = pppppppcStack_f68;
      local_220 = local_f70;
      pppppppcStack_208 = pppppppcStack_f58;
      local_210 = local_f60;
    }
    else {
      pppppppcVar30 = (code *******)((ulong)local_2a8 >> 5);
      local_180 = (code *******)((long)pppppppcVar30 + local_2b0);
      pppppppcStack_178 = (code *******)((long)pppppppcVar44 - (long)pppppppcVar30);
      pppppppcStack_170 = (code *******)((long)pppppppcVar30 + (long)pppppppcVar42);
                    /* try { // try from 008ea348 to 008ea357 has its CatchHandler @ 008eb810 */
      <bytes::bytes::Bytes_as_core::convert::From<alloc::vec::Vec<u8>>>::from(&local_110,&local_180)
      ;
      pppppppcVar44 = (code *******)((long)pppppppcStack_100 - (long)pppppppcVar30);
      local_280 = pppppppcVar30;
      if (pppppppcStack_100 < pppppppcVar30) {
        local_f70 = (code *******)&local_280;
        local_220 = pppppppcStack_100;
        local_f60 = (code *******)&local_220;
        pppppppcStack_f68 = (code *******)FUN_008ec54c;
        pppppppcStack_f58 = (code *******)FUN_008ec54c;
                    /* try { // try from 008eb514 to 008eb52b has its CatchHandler @ 008eb8c0 */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_fmt
                  (&DAT_002afeea,&local_f70,&PTR_s__root__cargo_registry_src_index__00aee8c0);
      }
      pppppppcStack_298 = (code *******)((long)pppppppcStack_108 + (long)pppppppcVar30);
      local_2a0 = local_110;
      pppppppcStack_288 = local_f8;
      pppppppcVar30 = (code *******)*puVar8;
      *puVar8 = 0xffffffffffffffff;
      local_290 = pppppppcVar44;
      pppppppcStack_108 = pppppppcStack_298;
      pppppppcStack_100 = pppppppcVar44;
      if (pppppppcVar30 == (code *******)0xffffffffffffffff) goto LAB_008ea398;
LAB_008ea28c:
      pppppppcStack_270 = (code *******)puVar8[2];
      pppppppcStack_278 = (code *******)puVar8[1];
      pppppppcStack_260 = (code *******)puVar8[4];
      pppppppcStack_268 = (code *******)puVar8[3];
      pppppppcStack_250 = (code *******)puVar8[6];
      local_258 = (code *******)puVar8[5];
      local_228 = puVar8[0xb];
      pppppppcStack_240 = (code *******)puVar8[8];
      local_248 = (code *******)puVar8[7];
      pppppppcStack_230 = (code *******)puVar8[10];
      local_238 = puVar8[9];
      local_280 = pppppppcVar30;
      if ((bVar12 & 1) != 0) goto LAB_008ea2d8;
LAB_008ea3f8:
      local_220 = (code *******)0xffffffffffffffff;
    }
                    /* try { // try from 008ea400 to 008ea40f has its CatchHandler @ 008eb820 */
    local_1c78 = cVar45 == '\x02';
    iVar21 = FUN_008ee0a8(&local_280,pppppppcVar1);
    pppppppcVar44 = local_f98;
    if (iVar21 != 0) {
                    /* try { // try from 008eb390 to 008eb3b3 has its CatchHandler @ 008eb990 */
                    /* WARNING: Subroutine does not return */
      core::result::unwrap_failed
                ("size overflows MAX_SIZE",0x17,auStack_71,&DAT_00aee668,
                 &PTR_s__root__cargo_registry_src_index__00aee818);
    }
    pppppppcVar42 = local_1c18;
    if (local_f98 < (code *******)0x65) {
      pppppppcVar42 = local_f98;
    }
    if (pppppppcVar42 < pppppppcVar1) {
                    /* try { // try from 008eb3b8 to 008eb3cb has its CatchHandler @ 008eb914 */
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (0,pppppppcVar1,pppppppcVar42,&PTR_s__root__cargo_registry_src_index__00aee830);
    }
    pppppppcVar42 = local_1c10;
    if (local_f98 < (code *******)0x65) {
      pppppppcVar42 = (code *******)&local_1c18;
    }
    if (pppppppcVar1 != (code *******)0x0) {
      pppppppcVar1 = pppppppcVar42 + (long)pppppppcVar1 * 4;
LAB_008ea44c:
      pppppppcVar30 = (code *******)*pppppppcVar42;
      pppppppcVar40 = (code *******)pppppppcVar42[1];
      if ((pppppppcVar40 < pppppppcVar30) || (local_290 < pppppppcVar40)) {
                    /* try { // try from 008eb2d0 to 008eb2db has its CatchHandler @ 008eb990 */
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail();
      }
                    /* try { // try from 008ea468 to 008ea477 has its CatchHandler @ 008eb81c */
      <http::header::name::http::header::name::HeaderName>::from_bytes
                (&local_f70,(undefined1 *)((long)pppppppcStack_298 + (long)pppppppcVar30),
                 (long)pppppppcVar40 - (long)pppppppcVar30);
      if (local_f70 != (code *******)&DAT_00000001) {
        pppppppcStack_1b8 = local_f60;
        local_1c0 = pppppppcStack_f68;
        pppppppcStack_1a8 = local_f50;
        local_1b0 = pppppppcStack_f58;
        local_80 = local_290;
        pppppppcVar30 = (code *******)pppppppcVar42[2];
        local_a0 = (code *******)pppppppcVar42[3];
        local_1a0 = pppppppcVar30;
        if (local_a0 < pppppppcVar30) {
          ppuVar24 = &PTR_s__root__cargo_registry_src_index__00aef9d8;
          local_f70 = (code *******)&local_1a0;
          puVar25 = &DAT_002bafe5;
          lVar6 = -0x40;
LAB_008eb410:
          local_f60 = (code *******)(&stack0xffffffffffffffa0 + lVar6);
          pppppppcStack_f68 = (code *******)FUN_008fb758;
          pppppppcStack_f58 = (code *******)FUN_008fb758;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 008eb424 to 008eb437 has its CatchHandler @ 008eb964 */
          core::panicking::panic_fmt(puVar25,&local_f70,ppuVar24);
        }
        if (local_290 < local_a0) {
          local_f70 = (code *******)&local_a0;
          ppuVar24 = &PTR_s__root__cargo_registry_src_index__00aef9f0;
          puVar25 = &DAT_002b1a40;
          lVar6 = -0x20;
          goto LAB_008eb410;
        }
        pppppppcVar40 = (code *******)((long)local_a0 - (long)pppppppcVar30);
        if (pppppppcVar40 == (code *******)0x0) {
          pppppppcStack_100 = (code *******)0x0;
          local_f8 = (code *******)0x0;
          local_110 = (code *******)&PTR_FUN_00aefa08;
          pppppppcStack_108 = (code *******)&DAT_00000001;
        }
        else {
                    /* try { // try from 008ea4e0 to 008ea4f3 has its CatchHandler @ 008eb7dc */
          (*(code *)*local_2a0)(&local_110,&pppppppcStack_288,pppppppcStack_298);
          pppppppcStack_108 = (code *******)((long)pppppppcStack_108 + (long)pppppppcVar30);
          pppppppcStack_100 = pppppppcVar40;
          if (local_110 == (code *******)0x0) {
                    /* WARNING: Subroutine does not return */
            core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00aef700);
          }
        }
        local_160 = (code *******)((ulong)local_160 & 0xffffffffffffff00);
        pppppppcStack_170 = pppppppcStack_100;
        pppppppcStack_178 = pppppppcStack_108;
        pppppppcStack_168 = local_f8;
        local_180 = local_110;
        if ((local_1c0 == (code *******)0x0) && ((char)pppppppcStack_1b8 == '\x14')) {
          if ((local_1c78 & 1) == 0) {
            local_1c78 = hyper::headers::connection_keep_alive(&local_180);
          }
          else {
                    /* try { // try from 008ea544 to 008ea5e3 has its CatchHandler @ 008eb824 */
            local_1c78 = FUN_008f42c0(&local_180);
            local_1c78 = local_1c78 ^ 1;
          }
        }
        if (local_220 != (code *******)0xffffffffffffffff) {
          pppppppcVar30 = (code *******)*pppppppcVar42;
          local_110 = (code *******)pppppppcVar42[1];
          local_80 = local_290;
          local_1a0 = pppppppcVar30;
          if (local_110 < pppppppcVar30) {
            ppuVar24 = &PTR_s__root__cargo_registry_src_index__00aef9d8;
            local_f70 = (code *******)&local_1a0;
            puVar25 = &DAT_002bafe5;
            lVar6 = -0xb0;
          }
          else {
            if (local_110 <= local_290) {
              pppppppcVar40 = (code *******)((long)local_110 - (long)pppppppcVar30);
              if (pppppppcVar40 == (code *******)0x0) {
                local_88 = (code *******)0x0;
                local_a0 = (code *******)&PTR_FUN_00aefa08;
                pppppppcStack_98 = (code *******)&DAT_00000001;
              }
              else {
                (*(code *)*local_2a0)(&local_a0,&pppppppcStack_288,pppppppcStack_298);
                pppppppcStack_98 = (code *******)((long)pppppppcStack_98 + (long)pppppppcVar30);
              }
              pppppppcVar30 = pppppppcStack_98;
              local_1a0 = (code *******)&local_1c0;
                    /* try { // try from 008ea604 to 008ea62b has its CatchHandler @ 008eb834 */
              local_90 = pppppppcVar40;
              iVar21 = FUN_008ed860(&local_220);
              if (iVar21 != 0) {
                    /* try { // try from 008eb61c to 008eb653 has its CatchHandler @ 008eb828 */
                (*(code *)local_a0[4])(&local_88,pppppppcVar30,pppppppcVar40);
LAB_008eb630:
                    /* WARNING: Subroutine does not return */
                core::result::unwrap_failed
                          ("size overflows MAX_SIZE",0x17,auStack_71,&DAT_00aee668,
                           &PTR_s__root__cargo_registry_src_index__00aee848);
              }
              uVar22 = FUN_008ed660(&local_220,&local_1a0);
              pppppppcVar17 = local_1b0;
              pppppppcVar48 = pppppppcStack_1b8;
              pppppppcVar29 = local_1c0;
              pppppppcVar36 = local_1d0;
              lVar6 = lStack_1d8;
              pppppppcVar31 = pppppppcStack_1f8;
              pppppppcVar40 = local_200;
              uVar20 = (ushort)uStack_1c8;
              uVar39 = uStack_1c8 & 0xffff;
              cVar16 = (char)pppppppcStack_1b8;
              uVar49 = 0;
              pppppppcVar30 = (code *******)(ulong)((ushort)uStack_1c8 & uVar22);
              do {
                if ((pppppppcVar36 <= pppppppcVar30) &&
                   (pppppppcVar30 = (code *******)0x0, pppppppcVar36 == (code *******)0x0)) {
                  do {
                    /* WARNING: Do nothing block with infinite loop */
                  } while( true );
                }
                puVar2 = (ushort *)(lVar6 + (long)pppppppcVar30 * 4);
                pppppppcVar43 = (code *******)(ulong)*puVar2;
                if (pppppppcVar43 == (code *******)0xffff) {
                    /* try { // try from 008ea7d4 to 008ea7e3 has its CatchHandler @ 008eb834 */
                  <http[b87e90c26fe47eb4]::header::name::HeaderName_as_core[bcece726f298455b]::convert::From<&http[b87e90c26fe47eb4]::header::name::HeaderName>>
                  ::from(&local_110,&local_1c0);
                  pppppppcStack_f68 = pppppppcStack_98;
                  local_f70 = local_a0;
                  pppppppcStack_f58 = local_88;
                  local_f60 = local_90;
                    /* try { // try from 008ea7f0 to 008ea807 has its CatchHandler @ 008eb824 */
                  uVar49 = FUN_008e8774(&local_220,uVar22,&local_110,&local_f70);
                  if ((uVar49 & 1) != 0) goto LAB_008eb630;
                  pppppppcVar40 = local_1d0;
                  if (local_1d0 <= pppppppcVar30) goto LAB_008eb68c;
                  puVar3 = (undefined2 *)(lStack_1d8 + (long)pppppppcVar30 * 4);
                  *puVar3 = (short)pppppppcVar31;
                  puVar3[1] = (ushort)uVar22;
                  goto LAB_008ea978;
                }
                uVar13 = puVar2[1];
                if (((int)pppppppcVar30 - (uint)(uVar13 & uVar20) & uVar39) < uVar49) {
                  bVar19 = local_220 != (code *******)0x2;
                    /* try { // try from 008ea844 to 008ea853 has its CatchHandler @ 008eb834 */
                  <http[b87e90c26fe47eb4]::header::name::HeaderName_as_core[bcece726f298455b]::convert::From<&http[b87e90c26fe47eb4]::header::name::HeaderName>>
                  ::from(&local_110,&local_1c0);
                  pppppppcVar40 = pppppppcStack_1f8;
                  pppppppcStack_f68 = pppppppcStack_98;
                  local_f70 = local_a0;
                  pppppppcStack_f58 = local_88;
                  local_f60 = local_90;
                    /* try { // try from 008ea864 to 008ea87b has its CatchHandler @ 008eb824 */
                  uVar39 = FUN_008e8774(&local_220,uVar22,&local_110,&local_f70);
                  if ((uVar39 & 1) == 0) {
                    uVar39 = 0;
                    while( true ) {
                      uVar20 = (ushort)uVar22;
                      if ((local_1d0 <= pppppppcVar30) &&
                         (pppppppcVar30 = (code *******)0x0, local_1d0 == (code *******)0x0)) {
                        do {
                    /* WARNING: Do nothing block with infinite loop */
                        } while( true );
                      }
                      puVar2 = (ushort *)(lStack_1d8 + (long)pppppppcVar30 * 4);
                      uVar13 = *puVar2;
                      if (uVar13 == 0xffff) break;
                      uVar22 = (uint)puVar2[1];
                      *puVar2 = (ushort)pppppppcVar40;
                      uVar39 = uVar39 + 1;
                      puVar2[1] = uVar20;
                      pppppppcVar30 = (code *******)((long)pppppppcVar30 + 1);
                      pppppppcVar40 = (code *******)(ulong)(uint)uVar13;
                    }
                    *puVar2 = (ushort)pppppppcVar40;
                    puVar2[1] = uVar20;
                    if ((0x7f < uVar39 || 0x1ff < uVar49 && bVar19) &&
                       (local_220 == (code *******)0x0)) {
                      local_220 = (code *******)&DAT_00000001;
                    }
                    goto LAB_008ea978;
                  }
                  goto LAB_008eb630;
                }
                if (uVar13 == (ushort)uVar22) {
                  if (pppppppcVar31 <= pppppppcVar43) {
                    /* try { // try from 008eb598 to 008eb5ab has its CatchHandler @ 008eb838 */
                    /* WARNING: Subroutine does not return */
                    core::panicking::panic_bounds_check
                              (pppppppcVar43,pppppppcVar31,
                               &PTR_s__root__cargo_registry_src_index__00aee5d8);
                  }
                  pppppppcVar35 = pppppppcVar40 + (long)pppppppcVar43 * 0xc;
                  if ((pppppppcVar29 == (code *******)0x0) == (pppppppcVar35[7] != (code ******)0x0)
                     ) goto LAB_008ea67c;
                  if (pppppppcVar35[7] == (code ******)0x0) {
                    if (*(char *)(pppppppcVar35 + 8) == cVar16) goto LAB_008ea740;
                  }
                  else if (((code *******)pppppppcVar35[9] == pppppppcVar17) &&
                          (iVar21 = memcmp(pppppppcVar35[8],pppppppcVar48,(size_t)pppppppcVar17),
                          iVar21 == 0)) goto LAB_008ea740;
                }
LAB_008ea67c:
                uVar49 = uVar49 + 1;
                pppppppcVar30 = (code *******)((long)pppppppcVar30 + 1);
              } while( true );
            }
            local_f70 = (code *******)&local_110;
            ppuVar24 = &PTR_s__root__cargo_registry_src_index__00aef9f0;
            puVar25 = &DAT_002b1a40;
            lVar6 = -0x20;
          }
          local_f60 = (code *******)(&stack0xffffffffffffffa0 + lVar6);
          pppppppcStack_f68 = (code *******)FUN_008fb758;
          pppppppcStack_f58 = (code *******)FUN_008fb758;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 008eb4e0 to 008eb4e3 has its CatchHandler @ 008eb918 */
          core::panicking::panic_fmt(puVar25,&local_f70,ppuVar24);
        }
        goto LAB_008ea978;
      }
      bVar4 = false;
      bVar19 = true;
      *(undefined1 *)(param_1 + 1) = 10;
      *param_1 = 0xfffffffffffffffe;
      goto LAB_008eb1e8;
    }
LAB_008ead80:
    local_a0 = (code *******)0x0;
    bVar18 = local_220 == (code *******)0xffffffffffffffff;
    if (!bVar18) {
      pppppppcStack_e8 = pppppppcStack_1f8;
      local_f0 = local_200;
      pppppppcStack_d8 = pppppppcStack_1e8;
      pppppppcStack_e0 = local_1f0;
      lStack_c8 = lStack_1d8;
      local_d0 = local_1e0;
      uStack_b8 = uStack_1c8;
      pppppppcStack_c0 = local_1d0;
      pppppppcStack_108 = pppppppcStack_218;
      local_110 = local_220;
      local_f8 = pppppppcStack_208;
      pppppppcStack_100 = local_210;
                    /* try { // try from 008eadbc to 008eae43 has its CatchHandler @ 008eb7e8 */
      FUN_008f1084(&local_f70,&local_a0,&local_110);
      if (local_f70 != (code *******)0xffffffffffffffff) {
        FUN_008e8398(&local_f70);
      }
    }
    bVar19 = local_f90 == (code *******)0x0;
    if (local_f90 != (code *******)0x0) {
      pppppppcStack_108 = pppppppcStack_f88;
      local_110 = local_f90;
      local_f8 = pppppppcStack_f78;
      pppppppcStack_100 = pppppppcStack_f80;
      FUN_008f128c(&local_f70,&local_a0,&local_110);
      if (local_f70 != (code *******)0x0) {
        (*(code *)local_f70[4])(&pppppppcStack_f58,pppppppcStack_f68,local_f60);
      }
    }
    pppppppcVar42 = local_a0;
    pppppppcStack_158 = local_258;
    local_160 = pppppppcStack_260;
    pppppppcStack_148 = local_248;
    local_150 = pppppppcStack_250;
    lStack_138 = local_238;
    local_140 = pppppppcStack_240;
    uStack_128 = local_228;
    local_130 = pppppppcStack_230;
    pppppppcStack_178 = pppppppcStack_278;
    local_180 = local_280;
    pppppppcStack_168 = pppppppcStack_268;
    pppppppcStack_170 = pppppppcStack_270;
    uStack_118 = (undefined2)uVar41;
    local_120 = local_a0;
    cStack_116 = cVar45;
    if (100 < uVar41) {
      if (uVar41 == 0x65) {
LAB_008eb180:
        uVar49 = 0;
        bVar26 = 1;
        goto LAB_008eb194;
      }
      if ((uVar41 != 0xcc) && (uVar41 != 0x130)) goto LAB_008eaecc;
LAB_008eb18c:
      uVar49 = 0;
LAB_008eb190:
      bVar26 = 0;
LAB_008eb194:
      param_1[9] = lStack_138;
      param_1[8] = local_140;
      param_1[0xb] = uStack_128;
      param_1[10] = local_130;
      param_1[0xd] = CONCAT53(uStack_115,CONCAT12(cStack_116,uStack_118));
      param_1[0xc] = local_120;
      param_1[1] = pppppppcStack_178;
      *param_1 = local_180;
      param_1[3] = pppppppcStack_168;
      param_1[2] = pppppppcStack_170;
      param_1[0xe] = uVar49;
      param_1[5] = pppppppcStack_158;
      param_1[4] = local_160;
      param_1[7] = pppppppcStack_148;
      param_1[6] = local_150;
      *(undefined1 *)(param_1 + 0xf) = 0;
      *(byte *)((long)param_1 + 0x79) = local_1c78 & (bVar26 ^ 0xff) & 1;
      *(byte *)((long)param_1 + 0x7a) = bVar26;
joined_r0x008eb140:
      bVar4 = true;
      if (bVar18) {
LAB_008eb1e8:
        if (local_220 != (code *******)0xffffffffffffffff) {
                    /* try { // try from 008eb1f4 to 008eb1ff has its CatchHandler @ 008eb778 */
          FUN_008e8398(&local_220);
        }
      }
      if (!bVar4) {
                    /* try { // try from 008eb204 to 008eb20f has its CatchHandler @ 008eb8ac */
        FUN_008e8530(&local_280);
      }
                    /* try { // try from 008eb220 to 008eb22f has its CatchHandler @ 008eb784 */
      (*(code *)local_2a0[4])(&pppppppcStack_288,pppppppcStack_298,local_290);
      bVar4 = false;
      if (local_f90 != (code *******)0x0) {
        bVar4 = bVar19;
      }
      if (bVar4) {
                    /* try { // try from 008eb250 to 008eb257 has its CatchHandler @ 008eb774 */
        (*(code *)local_f90[4])(&pppppppcStack_f78,pppppppcStack_f88,pppppppcStack_f80);
      }
LAB_008eb084:
      if ((code *******)0x64 < pppppppcVar44) {
        free(local_1c10);
      }
      return;
    }
    if (uVar41 != 100) {
LAB_008eaecc:
      if (uVar41 - 0x66 < 0x62) goto LAB_008eaed8;
      if (*pcVar5 == '\x05') goto LAB_008eb18c;
      if ((*pcVar5 == '\a') && (uVar41 - 200 < 100)) goto LAB_008eb180;
      pppppppcStack_f68 = _UNK_002bf9d0;
      local_f70 = _s__002bf9c8;
      pppppppcStack_f58 = _UNK_002bf9e0;
      local_f60 = _DAT_002bf9d8;
                    /* try { // try from 008eb278 to 008eb2ab has its CatchHandler @ 008eb6bc */
      uVar49 = FUN_008eca44(&local_180,&local_f70);
      if ((uVar49 & 1) == 0) {
        auVar50 = FUN_008f45dc(&local_180);
        uVar49 = auVar50._8_8_;
        if ((auVar50 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
          pppppppcStack_f68 = _UNK_002c0370;
          local_f70 = _DAT_002c0368;
          pppppppcStack_f58 = _UNK_002c0380;
          local_f60 = _DAT_002c0378;
          uVar49 = FUN_008eca44(&local_180,&local_f70);
          if ((uVar49 & 1) == 0) {
            bVar26 = 0;
            uVar49 = 0xffffffffffffffff;
            goto LAB_008eb194;
          }
          uVar27 = 1;
        }
        else {
          if (uVar49 < 0xfffffffffffffffe) goto LAB_008eb190;
          uVar27 = 8;
        }
      }
      else {
        if (cVar45 != '\x01') {
                    /* try { // try from 008eb2e0 to 008eb323 has its CatchHandler @ 008eb6bc */
          iVar23 = FUN_008f48c4(&local_180);
          bVar26 = 0;
          uVar49 = 0xfffffffffffffffe;
          if (iVar23 == 0) {
            uVar49 = 0xffffffffffffffff;
          }
          goto LAB_008eb194;
        }
        uVar27 = 2;
      }
      *(undefined1 *)(param_1 + 1) = uVar27;
      uVar32 = 0xfffffffffffffffe;
LAB_008eb338:
      *param_1 = uVar32;
                    /* try { // try from 008eb340 to 008eb34b has its CatchHandler @ 008eb6a8 */
      FUN_008e8530(&local_180);
      if (pppppppcVar42 != (code *******)0x0) {
                    /* try { // try from 008eb350 to 008eb357 has its CatchHandler @ 008eb6a4 */
        FUN_008f096c(pppppppcVar42);
        free(pppppppcVar42);
      }
      goto joined_r0x008eb140;
    }
LAB_008eaed8:
    if (*plVar9 == 0) {
      if (param_2[1] == 0) {
        uVar32 = 0xffffffffffffffff;
        goto LAB_008eb338;
      }
                    /* try { // try from 008eaf68 to 008eaf73 has its CatchHandler @ 008eb7a4 */
      FUN_008e8530(&local_180);
      if (pppppppcVar42 != (code *******)0x0) {
                    /* try { // try from 008eaf78 to 008eaf7f has its CatchHandler @ 008eb78c */
        FUN_008f096c(pppppppcVar42);
        free(pppppppcVar42);
      }
    }
    else {
      uStack_f08 = CONCAT53(uStack_115,CONCAT12(cVar45,uStack_118));
      lStack_f28 = local_238;
      local_f30 = pppppppcStack_240;
      uStack_f18 = local_228;
      local_f20 = pppppppcStack_230;
      local_f10 = local_a0;
      pppppppcStack_f68 = pppppppcStack_278;
      local_f70 = local_280;
      pppppppcStack_f58 = pppppppcStack_268;
      local_f60 = pppppppcStack_270;
      pppppppcStack_f38 = local_248;
      local_f40 = pppppppcStack_250;
      pppppppcStack_f48 = local_258;
      local_f50 = pppppppcStack_260;
                    /* try { // try from 008eaf1c to 008eaf4b has its CatchHandler @ 008eb7d0 */
      FUN_008f85c8(&local_110,&local_f70);
      (**(code **)(plVar9[1] + 0x18))
                (*plVar9 + (*(long *)(plVar9[1] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,&local_110
                );
      if (param_2[1] == 0) {
        *param_1 = 0xffffffffffffffff;
        goto joined_r0x008eb140;
      }
    }
                    /* try { // try from 008eafa0 to 008eafaf has its CatchHandler @ 008eb810 */
    (*(code *)local_2a0[4])(&pppppppcStack_288,pppppppcStack_298,local_290);
    if ((code *******)0x64 < pppppppcVar44) {
      free(local_1c10);
    }
    if (iVar23 == 0) goto LAB_008e9d14;
LAB_008e9d2c:
    FUN_008facf0(&local_1c20,&local_f70,uVar32);
                    /* try { // try from 008e9d40 to 008e9d4f has its CatchHandler @ 008eb808 */
    FUN_008facf0(&local_f70,&local_110,uVar32);
  } while( true );
  while (pppppppcVar48 = (code *******)((long)pppppppcVar48 + -1),
        pppppppcVar48 != (code *******)0x0) {
LAB_008e9eec:
    if (0x20 < (byte)(puVar28 + (long)pppppppcVar31)[(long)pppppppcVar48] ||
        (1L << ((ulong)(byte)(puVar28 + (long)pppppppcVar31)[(long)pppppppcVar48] & 0x3f) &
        0x100003600U) == 0) {
      if ((long)pppppppcVar48 < 0) {
        uVar46 = 0;
        pppppppcVar48 = local_1cb0;
      }
      else {
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        local_1cb0 = (code *******)FUN_004b25a4(pppppppcVar48,1);
        if (local_1cb0 != (code *******)0x0) {
          local_f60 = (code *******)0x0;
          local_f70 = pppppppcVar48;
          pppppppcStack_f68 = local_1cb0;
          memcpy(local_1cb0,(undefined1 *)((long)pppppppcVar44 + (long)pppppppcVar31),
                 (size_t)pppppppcVar48);
          local_f60 = pppppppcVar48;
          goto joined_r0x008ea118;
        }
      }
                    /* try { // try from 008eb02c to 008eb153 has its CatchHandler @ 008eba0c */
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(uVar46,pppppppcVar48);
    }
  }
LAB_008e9f0c:
  local_1cb0 = (code *******)&DAT_00000001;
  local_f70 = (code *******)0x0;
  pppppppcStack_f68 = (code *******)&DAT_00000001;
  local_f60 = (code *******)0x0;
joined_r0x008ea118:
  if ((code *******)((long)pppppppcVar36 + 1) <= pppppppcVar29) {
    puVar38 = (undefined1 *)(~(ulong)pppppppcVar36 + (long)pppppppcVar29);
    puVar47 = (undefined1 *)((long)pppppppcVar44 + (long)pppppppcVar31) + (long)pppppppcVar36 + 1;
LAB_008e9f80:
    pppppppcVar36 = local_f60;
    puVar37 = (undefined1 *)0x0;
    __n = puVar37;
    if (puVar38 != (undefined1 *)0x0) {
      do {
        if (puVar47[(long)puVar37] == '\n') {
          bVar19 = false;
          puVar38 = puVar38 + ~(ulong)puVar37;
          puVar15 = puVar47 + (long)puVar37 + 1;
          __n = puVar37;
          goto joined_r0x008e9ff4;
        }
        puVar37 = puVar37 + 1;
        __n = puVar38;
      } while (puVar38 != puVar37);
    }
    bVar19 = true;
    puVar15 = puVar47;
joined_r0x008e9ff4:
    if (local_f60 == local_f70) {
                    /* try { // try from 008e9ff8 to 008ea083 has its CatchHandler @ 008eb8a8 */
      <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<u8>>::grow_one(&local_f70);
    }
    local_f60 = (code *******)((long)pppppppcVar36 + 1);
    *(undefined1 *)((long)pppppppcStack_f68 + (long)pppppppcVar36) = 0x20;
    if (__n != (undefined1 *)0x0) {
      do {
        if (0x20 < (byte)(puVar47 + -1)[(long)__n] ||
            (1L << ((ulong)(byte)(puVar47 + -1)[(long)__n] & 0x3f) & 0x100003600U) == 0) {
          puVar37 = (undefined1 *)0x0;
          goto LAB_008ea044;
        }
        __n = __n + -1;
      } while (__n != (undefined1 *)0x0);
      __n = (undefined1 *)0x0;
    }
    goto LAB_008e9f74;
  }
  puVar28 = (undefined1 *)((long)pppppppcVar36 + 1);
  ppuVar24 = &PTR_s__root__cargo_registry_src_index__00aee728;
  pppppppcVar44 = pppppppcVar29;
  goto LAB_008eb380;
  while (puVar37 = puVar37 + 1, __n != puVar37) {
LAB_008ea044:
    if (0x20 < (byte)puVar47[(long)puVar37] ||
        (1L << ((ulong)(byte)puVar47[(long)puVar37] & 0x3f) & 0x100003600U) == 0) {
      __n = __n + -(long)puVar37;
      if ((undefined1 *)((long)local_f70 - (long)local_f60) < __n) {
        FUN_008f5dd0(&local_f70,local_f60,__n,1,1);
      }
      memcpy((undefined1 *)((long)pppppppcStack_f68 + (long)local_f60),puVar47 + (long)puVar37,
             (size_t)__n);
      goto LAB_008e9f74;
    }
  }
  __n = (undefined1 *)0x0;
LAB_008e9f74:
  local_f60 = (code *******)((long)local_f60 + (long)__n);
  puVar47 = puVar15;
  if (bVar19) goto LAB_008ea08c;
  goto LAB_008e9f80;
LAB_008ea740:
  pppppppcVar40 = local_1e0;
  pppppppcStack_f58 = pppppppcVar43;
  if (*pppppppcVar35 == (code ******)0x1) {
    pppppppcVar30 = (code *******)pppppppcVar35[2];
    local_f70 = (code *******)&DAT_00000001;
    local_f60 = (code *******)0x0;
    pppppppcStack_f48 = pppppppcStack_98;
    local_f50 = local_a0;
    pppppppcStack_f38 = local_88;
    local_f40 = local_90;
    pppppppcStack_f68 = pppppppcVar30;
    if (local_1e0 == local_1f0) {
                    /* try { // try from 008ea780 to 008ea78f has its CatchHandler @ 008eb6f8 */
      <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<http::header::map::ExtraValue<bytes::bytes::Bytes>>>
      ::grow_one(&local_1f0);
    }
    local_1e0 = (code *******)((long)pppppppcVar40 + 1);
    pppppppcVar31 = pppppppcStack_1e8 + (long)pppppppcVar40 * 8;
    pppppppcVar31[1] = (code ******)pppppppcStack_f68;
    *pppppppcVar31 = (code ******)local_f70;
    pppppppcVar31[3] = (code ******)pppppppcStack_f58;
    pppppppcVar31[2] = (code ******)local_f60;
    pppppppcVar31[5] = (code ******)pppppppcStack_f48;
    pppppppcVar31[4] = (code ******)local_f50;
    pppppppcVar31[7] = (code ******)pppppppcStack_f38;
    pppppppcVar31[6] = (code ******)local_f40;
    if (pppppppcVar40 < pppppppcVar30) {
      local_1cc8 = &PTR_s__root__cargo_registry_src_index__00aee638;
      pppppppcVar40 = local_1e0;
LAB_008eb68c:
                    /* try { // try from 008eb68c to 008eb697 has its CatchHandler @ 008eb828 */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check(pppppppcVar30,pppppppcVar40,local_1cc8);
    }
    pppppppcStack_1e8[(long)pppppppcVar30 * 8 + 2] = (code ******)0x1;
    pppppppcStack_1e8[(long)pppppppcVar30 * 8 + 3] = (code ******)pppppppcVar40;
    *pppppppcVar35 = (code ******)0x1;
  }
  else {
    local_f70 = (code *******)0x0;
    pppppppcStack_f48 = pppppppcStack_98;
    local_f50 = local_a0;
    pppppppcStack_f38 = local_88;
    local_f40 = local_90;
    local_f60 = (code *******)0x0;
    pppppppcStack_f68 = pppppppcVar43;
    if (local_1e0 == local_1f0) {
                    /* try { // try from 008ea934 to 008ea943 has its CatchHandler @ 008eb6d0 */
      <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<http::header::map::ExtraValue<bytes::bytes::Bytes>>>
      ::grow_one(&local_1f0);
    }
    pppppppcVar30 = pppppppcStack_1e8 + (long)pppppppcVar40 * 8;
    pppppppcVar30[1] = (code ******)pppppppcStack_f68;
    *pppppppcVar30 = (code ******)local_f70;
    pppppppcVar30[3] = (code ******)pppppppcStack_f58;
    pppppppcVar30[2] = (code ******)local_f60;
    pppppppcVar30[5] = (code ******)pppppppcStack_f48;
    pppppppcVar30[4] = (code ******)local_f50;
    pppppppcVar30[7] = (code ******)pppppppcStack_f38;
    pppppppcVar30[6] = (code ******)local_f40;
    *pppppppcVar35 = (code ******)0x1;
    pppppppcVar35[1] = (code ******)pppppppcVar40;
  }
  local_1e0 = (code *******)((long)pppppppcVar40 + 1);
  pppppppcVar35[2] = (code ******)pppppppcVar40;
LAB_008ea978:
  pppppppcStack_198 = pppppppcStack_1b8;
  local_1a0 = local_1c0;
  pppppppcStack_188 = pppppppcStack_1a8;
  local_190 = local_1b0;
  pppppppcStack_108 = pppppppcStack_178;
  local_110 = local_180;
  local_f8 = pppppppcStack_168;
  pppppppcStack_100 = pppppppcStack_170;
  local_f0 = local_160;
                    /* try { // try from 008ea99c to 008ea9a7 has its CatchHandler @ 008eb7e4 */
  iVar21 = FUN_008ee324(&local_280);
  if (iVar21 != 0) {
                    /* try { // try from 008eb5c0 to 008eb5c7 has its CatchHandler @ 008eb7b8 */
    (*(code *)local_110[4])(&local_f8,pppppppcStack_108,pppppppcStack_100);
    if (local_1a0 != (code *******)0x0) {
                    /* try { // try from 008eb5dc to 008eb60f has its CatchHandler @ 008eb818 */
      (*(code *)local_1a0[4])(&pppppppcStack_188,pppppppcStack_198,local_190);
    }
LAB_008eb5ec:
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              ("size overflows MAX_SIZE",0x17,auStack_71,&DAT_00aee668,
               &PTR_s__root__cargo_registry_src_index__00aee848);
  }
  pppppppcVar42 = pppppppcVar42 + 4;
  uVar20 = FUN_008ed464(&local_280,&local_1a0);
  pppppppcVar17 = local_190;
  pppppppcVar48 = pppppppcStack_198;
  pppppppcVar29 = local_1a0;
  pppppppcVar36 = pppppppcStack_230;
  lVar6 = local_238;
  pppppppcVar40 = local_258;
  pppppppcVar31 = pppppppcStack_260;
  uVar13 = (ushort)local_228;
  uVar39 = local_228 & 0xffff;
  uVar49 = 0;
  cVar16 = (char)pppppppcStack_198;
  pppppppcVar30 = (code *******)(ulong)((ushort)local_228 & uVar20);
  do {
    if ((pppppppcVar36 <= pppppppcVar30) &&
       (pppppppcVar30 = (code *******)0x0, pppppppcVar36 == (code *******)0x0)) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    puVar2 = (ushort *)(lVar6 + (long)pppppppcVar30 * 4);
    pppppppcVar43 = (code *******)(ulong)*puVar2;
    if (pppppppcVar43 == (code *******)0xffff) {
      pppppppcStack_98 = pppppppcStack_198;
      local_a0 = local_1a0;
      local_88 = pppppppcStack_188;
      local_90 = local_190;
      local_f50 = local_f0;
      pppppppcStack_f68 = pppppppcStack_108;
      local_f70 = local_110;
      pppppppcStack_f58 = local_f8;
      local_f60 = pppppppcStack_100;
                    /* try { // try from 008eab9c to 008eac3f has its CatchHandler @ 008eb7cc */
      uVar49 = FUN_008e8880(&local_280,uVar20,&local_a0,&local_f70);
      if ((uVar49 & 1) != 0) goto LAB_008eb5ec;
      if (pppppppcStack_230 <= pppppppcVar30) {
                    /* try { // try from 008eb658 to 008eb667 has its CatchHandler @ 008eb818 */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (pppppppcVar30,pppppppcStack_230,&PTR_s__root__cargo_registry_src_index__00aee5f0)
        ;
      }
      puVar3 = (undefined2 *)(local_238 + (long)pppppppcVar30 * 4);
      *puVar3 = (short)pppppppcVar40;
      puVar3[1] = uVar20;
      goto LAB_008eabdc;
    }
    uVar14 = puVar2[1];
    if (((int)pppppppcVar30 - (uint)(uVar14 & uVar13) & uVar39) < uVar49) {
      pppppppcStack_98 = pppppppcStack_198;
      local_a0 = local_1a0;
      local_88 = pppppppcStack_188;
      local_90 = local_190;
      bVar19 = local_280 != (code *******)0x2;
      local_f50 = local_f0;
      pppppppcStack_f68 = pppppppcStack_108;
      local_f70 = local_110;
      pppppppcStack_f58 = local_f8;
      local_f60 = pppppppcStack_100;
      uVar39 = FUN_008e8880(&local_280,uVar20,&local_a0,&local_f70);
      if ((uVar39 & 1) == 0) {
        uVar39 = 0;
        while( true ) {
          if ((pppppppcStack_230 <= pppppppcVar30) &&
             (pppppppcVar30 = (code *******)0x0, pppppppcStack_230 == (code *******)0x0)) {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          puVar2 = (ushort *)(local_238 + (long)pppppppcVar30 * 4);
          uVar13 = *puVar2;
          if (uVar13 == 0xffff) break;
          uVar14 = puVar2[1];
          *puVar2 = (ushort)pppppppcVar40;
          uVar39 = uVar39 + 1;
          puVar2[1] = uVar20;
          pppppppcVar30 = (code *******)((long)pppppppcVar30 + 1);
          pppppppcVar40 = (code *******)(ulong)(uint)uVar13;
          uVar20 = uVar14;
        }
        *puVar2 = (ushort)pppppppcVar40;
        puVar2[1] = uVar20;
        if ((0x7f < uVar39 || 0x1ff < uVar49 && bVar19) && (local_280 == (code *******)0x0)) {
          local_280 = (code *******)&DAT_00000001;
        }
        goto LAB_008eabdc;
      }
      goto LAB_008eb5ec;
    }
    if (uVar14 == uVar20) {
      if (pppppppcVar40 <= pppppppcVar43) {
                    /* try { // try from 008eb584 to 008eb593 has its CatchHandler @ 008eb85c */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (pppppppcVar43,pppppppcVar40,&PTR_s__root__cargo_registry_src_index__00aee5d8);
      }
      pppppppcVar35 = pppppppcVar31 + (long)pppppppcVar43 * 0xd;
      if ((pppppppcVar29 == (code *******)0x0) != (pppppppcVar35[8] != (code ******)0x0)) {
        if (pppppppcVar35[8] == (code ******)0x0) {
          if (*(char *)(pppppppcVar35 + 9) == cVar16) break;
        }
        else if (((code *******)pppppppcVar35[10] == pppppppcVar17) &&
                (iVar21 = memcmp(pppppppcVar35[9],pppppppcVar48,(size_t)pppppppcVar17), iVar21 == 0)
                ) break;
      }
    }
    uVar49 = uVar49 + 1;
    pppppppcVar30 = (code *******)((long)pppppppcVar30 + 1);
  } while( true );
  pppppppcVar30 = pppppppcStack_240;
  pppppppcStack_f58 = pppppppcVar43;
  if (*pppppppcVar35 == (code ******)0x1) {
    pppppppcVar40 = (code *******)pppppppcVar35[2];
    local_f30 = local_f0;
    pppppppcStack_f48 = pppppppcStack_108;
    local_f50 = local_110;
    pppppppcStack_f38 = local_f8;
    local_f40 = pppppppcStack_100;
    local_f70 = (code *******)&DAT_00000001;
    local_f60 = (code *******)0x0;
    pppppppcStack_f68 = pppppppcVar40;
    if (pppppppcStack_240 == pppppppcStack_250) {
                    /* try { // try from 008eab1c to 008eab23 has its CatchHandler @ 008eb748 */
      <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<http[b87e90c26fe47eb4]::header::map::ExtraValue<http[b87e90c26fe47eb4]::header::value::HeaderValue>>>
      ::grow_one(&pppppppcStack_250);
    }
    pppppppcStack_240 = (code *******)((long)pppppppcVar30 + 1);
    pppppppcVar31 = local_248 + (long)pppppppcVar30 * 9;
    pppppppcVar31[1] = (code ******)pppppppcStack_f68;
    *pppppppcVar31 = (code ******)local_f70;
    pppppppcVar31[8] = (code ******)local_f30;
    pppppppcVar31[5] = (code ******)pppppppcStack_f48;
    pppppppcVar31[4] = (code ******)local_f50;
    pppppppcVar31[7] = (code ******)pppppppcStack_f38;
    pppppppcVar31[6] = (code ******)local_f40;
    pppppppcVar31[3] = (code ******)pppppppcStack_f58;
    pppppppcVar31[2] = (code ******)local_f60;
    if (pppppppcVar30 < pppppppcVar40) {
                    /* try { // try from 008eb66c to 008eb67b has its CatchHandler @ 008eb770 */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (pppppppcVar40,pppppppcStack_240,&PTR_s__root__cargo_registry_src_index__00aee638);
    }
    local_248[(long)pppppppcVar40 * 9 + 2] = (code ******)0x1;
    local_248[(long)pppppppcVar40 * 9 + 3] = (code ******)pppppppcVar30;
    *pppppppcVar35 = (code ******)0x1;
    pppppppcVar35[2] = (code ******)pppppppcVar30;
  }
  else {
    local_f30 = local_f0;
    pppppppcStack_f48 = pppppppcStack_108;
    local_f50 = local_110;
    pppppppcStack_f38 = local_f8;
    local_f40 = pppppppcStack_100;
    local_f70 = (code *******)0x0;
    local_f60 = (code *******)0x0;
    pppppppcStack_f68 = pppppppcVar43;
    if (pppppppcStack_240 == pppppppcStack_250) {
                    /* try { // try from 008ead14 to 008ead1b has its CatchHandler @ 008eb720 */
      <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<http[b87e90c26fe47eb4]::header::map::ExtraValue<http[b87e90c26fe47eb4]::header::value::HeaderValue>>>
      ::grow_one(&pppppppcStack_250);
    }
    pppppppcVar40 = local_248 + (long)pppppppcVar30 * 9;
    pppppppcVar40[1] = (code ******)pppppppcStack_f68;
    *pppppppcVar40 = (code ******)local_f70;
    pppppppcVar40[8] = (code ******)local_f30;
    pppppppcVar40[5] = (code ******)pppppppcStack_f48;
    pppppppcVar40[4] = (code ******)local_f50;
    pppppppcVar40[7] = (code ******)pppppppcStack_f38;
    pppppppcVar40[6] = (code ******)local_f40;
    pppppppcVar40[3] = (code ******)pppppppcStack_f58;
    pppppppcVar40[2] = (code ******)local_f60;
    *pppppppcVar35 = (code ******)0x1;
    pppppppcVar35[1] = (code ******)pppppppcVar30;
    pppppppcVar35[2] = (code ******)pppppppcVar30;
  }
  pppppppcStack_240 = (code *******)((long)pppppppcVar30 + 1);
  if (local_1a0 != (code *******)0x0) {
                    /* try { // try from 008ead6c to 008ead7b has its CatchHandler @ 008eb7cc */
    (*(code *)local_1a0[4])(&pppppppcStack_188,pppppppcStack_198,local_190);
  }
LAB_008eabdc:
  if (pppppppcVar42 == pppppppcVar1) goto LAB_008ead80;
  goto LAB_008ea44c;
LAB_008ea08c:
  if (local_f60 <= pppppppcVar29) {
    memcpy((undefined1 *)((long)pppppppcVar44 + (long)pppppppcVar31),pppppppcStack_f68,
           (size_t)local_f60);
    pppppppcVar30[3] = (code ******)((long)local_f60 + (long)pppppppcVar31);
    if (local_f70 != (code *******)0x0) {
      free(pppppppcStack_f68);
    }
LAB_008e9e90:
    pppppppcVar30 = pppppppcVar30 + 4;
    if (pppppppcVar30 == pppppppcVar40) goto LAB_008ea254;
    goto LAB_008e9e9c;
  }
  puVar28 = (undefined1 *)0x0;
  ppuVar24 = &PTR_s__root__cargo_registry_src_index__00aee710;
  pppppppcVar44 = local_f60;
LAB_008eb380:
                    /* try { // try from 008eb380 to 008eb38b has its CatchHandler @ 008eb9f0 */
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail(puVar28,pppppppcVar44,pppppppcVar29,ppuVar24);
}


// ===== 008eba6c  <hyper::proto::h1::role::Client_as_hyper::proto::h1::Http1Transaction>::encode =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <hyper::proto::h1::role::Client as hyper::proto::h1::Http1Transaction>::encode */

void __rustcall
<hyper::proto::h1::role::Client_as_hyper::proto::h1::Http1Transaction>::encode
          (ulong *param_1,long *param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  uint *extraout_x11;
  ulong uVar5;
  ulong unaff_x23;
  undefined1 *unaff_x24;
  ulong uVar6;
  byte *pbVar7;
  undefined **ppuVar8;
  void *__src;
  undefined8 uVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  undefined8 local_160;
  undefined **ppuStack_158;
  undefined **local_150;
  uint *local_148;
  undefined **local_140;
  undefined **ppuStack_138;
  undefined2 local_130;
  undefined **local_120;
  undefined **ppuStack_118;
  undefined **local_110;
  uint *puStack_108;
  undefined1 local_100;
  undefined8 local_f0;
  undefined **ppuStack_e8;
  undefined **local_e0;
  uint *local_d8;
  undefined8 local_d0;
  undefined **ppuStack_c8;
  undefined **local_c0;
  uint *local_b8;
  undefined **local_b0;
  undefined **ppuStack_a8;
  undefined2 local_a0;
  char local_9e;
  undefined4 local_9d;
  undefined1 local_99;
  long local_90;
  void *pvStack_88;
  long local_80;
  undefined1 auStack_71 [17];
  
  uVar5 = param_1[2];
  bVar1 = *(byte *)(uVar5 + 0xb8);
  if (8 < bVar1) {
    if (bVar1 == 9) {
      unaff_x24 = *(undefined1 **)(uVar5 + 0xc0);
      unaff_x23 = (ulong)*(byte *)(uVar5 + 200);
      local_d0._0_7_ = CONCAT43(*(undefined4 *)(uVar5 + 0xbc),(int3)*(undefined4 *)(uVar5 + 0xb9));
    }
    else {
      unaff_x23 = *(size_t *)(uVar5 + 200);
      if ((long)unaff_x23 < 0) {
        uVar9 = 0;
LAB_008ebce8:
                    /* WARNING: Subroutine does not return */
        alloc::raw_vec::handle_error(uVar9,unaff_x23);
      }
      if (unaff_x23 == 0) {
        unaff_x24 = &DAT_00000001;
      }
      else {
        __src = *(void **)(uVar5 + 0xc0);
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        uVar9 = 1;
        unaff_x24 = (undefined1 *)FUN_004b25a4(unaff_x23,1);
        if (unaff_x24 == (undefined1 *)0x0) goto LAB_008ebce8;
        memcpy(unaff_x24,__src,unaff_x23);
      }
    }
  }
  pbVar7 = (byte *)param_1[3];
  local_160._0_7_ = SUB87(local_d0,0);
  if (((*pbVar7 != 0xff) && (9 < *pbVar7)) && (*(long *)(pbVar7 + 0x10) != 0)) {
    free(*(void **)(pbVar7 + 8));
  }
  *pbVar7 = bVar1;
  uVar10 = *param_1;
  *(undefined1 **)(pbVar7 + 8) = unaff_x24;
  *(ulong *)(pbVar7 + 0x10) = unaff_x23;
  *(undefined4 *)(pbVar7 + 1) = (undefined4)local_160;
  *(undefined4 *)(pbVar7 + 4) = local_160._3_4_;
  if (uVar10 == 2) {
    ppuStack_158 = _UNK_002bf9d0;
    local_160 = _s__002bf9c8;
    local_148 = _UNK_002bf9e0;
    local_150 = _DAT_002bf9d8;
    FUN_008ecc18(&local_d0,uVar5,&local_160);
    if ((char)local_b0 != '\x02') {
      (*(code *)local_d0[4])(&local_b8,ppuStack_c8,local_c0);
    }
  }
  else {
    uVar6 = param_1[1];
    cVar2 = *(char *)(uVar5 + 0xd8);
    auVar11 = FUN_008f45dc(uVar5);
    ppuVar8 = auVar11._8_8_;
    if (cVar2 == '\x02') {
      ppuStack_118 = _UNK_002bf9d0;
      local_120 = _s__002bf9c8;
      puStack_108 = _UNK_002bf9e0;
      local_110 = _DAT_002bf9d8;
      FUN_008ec7e8(&local_d0,uVar5,&local_120);
      if (local_9e == -1) {
                    /* WARNING: Subroutine does not return */
        core::result::unwrap_failed
                  ("size overflows MAX_SIZE",0x17,auStack_71,&DAT_00aee668,
                   &PTR_s__root__cargo_registry_src_index__00aee6c8);
      }
      local_130 = local_a0;
      ppuStack_158 = ppuStack_c8;
      local_160 = local_d0;
      local_148 = local_b8;
      local_150 = local_c0;
      ppuStack_138 = ppuStack_a8;
      local_140 = local_b0;
      local_f0._0_5_ = CONCAT14(local_99,local_9d);
      if (local_9e == '\x02') {
        if (local_d0[5] <= local_c0) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check
                    (local_c0,local_d0[5],&PTR_s__root__cargo_registry_src_index__00aee650);
        }
        local_b8 = (uint *)(local_d0[4] + (long)local_c0 * 0x68);
        if ((*local_b8 & 1) == 0) {
          local_b0 = local_d0;
          ppuStack_a8 = local_c0;
          local_d0 = (undefined **)0x0;
          local_c0 = (undefined **)0x0;
          uVar10 = FUN_008f3cd4(&local_d0);
        }
        else {
          local_b8 = *(uint **)(local_b8 + 4);
          local_b0 = local_d0;
          ppuStack_a8 = local_c0;
          local_d0 = (undefined **)0x0;
          local_c0 = (undefined **)0x1;
          uVar10 = FUN_008f3cd4(&local_d0);
        }
        if ((uVar10 & 1) == 0) {
          FUN_008f3ecc(&local_160);
        }
LAB_008ebd44:
        local_148 = (uint *)((ulong)local_148 & 0xffffffffffffff00);
        local_160 = (undefined **)0xffffffffffffffff;
        ppuStack_c8 = _UNK_002bfe50;
        local_d0 = (undefined **)_s__002bfe48;
        local_b8 = _UNK_002bfe60;
        local_c0 = (undefined **)_DAT_002bfe58;
                    /* try { // try from 008ebd60 to 008ebd6f has its CatchHandler @ 008ec484 */
        FUN_008ed058(&local_f0,uVar5,&local_d0);
        if (local_f0 == (undefined **)0x1) {
          if (local_e0[5] <= ppuStack_e8) {
                    /* try { // try from 008ec460 to 008ec46b has its CatchHandler @ 008ec484 */
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_bounds_check
                      (ppuStack_e8,local_e0[5],&PTR_s__root__cargo_registry_src_index__00aee650);
          }
          if ((*(uint *)(local_e0[4] + (long)ppuStack_e8 * 0x68) & 1) == 0) {
            local_c0 = (undefined **)0x0;
            local_d0 = (undefined **)0x0;
            local_b8 = extraout_x11;
          }
          else {
            local_b8 = *(uint **)((long)(local_e0[4] + (long)ppuStack_e8 * 0x68) + 0x10);
            local_d0 = (undefined **)0x0;
            local_c0 = (undefined **)0x1;
          }
        }
        else {
          ppuStack_e8 = (undefined **)0xffffffffffffffff;
          local_c0 = (undefined **)0x2;
          local_d0 = (undefined **)0x2;
          local_b8 = extraout_x11;
        }
        local_b0 = local_e0;
                    /* try { // try from 008ebe0c to 008ebe17 has its CatchHandler @ 008ec484 */
        ppuStack_a8 = ppuStack_e8;
        FUN_008f0038(&local_90,&local_d0);
        if (local_80 == 0) {
          if (local_90 != 0) {
            free(pvStack_88);
          }
          goto LAB_008ebeb8;
        }
        local_e0 = (undefined **)local_80;
        ppuStack_c8 = ppuStack_158;
        local_d0 = local_160;
        local_b8 = local_148;
        local_c0 = local_150;
        ppuStack_e8 = (undefined **)pvStack_88;
        local_f0 = (undefined **)local_90;
        FUN_008faae4(&local_120,&local_d0,&local_f0);
      }
      else {
        if ((auVar11 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
          if ((uVar10 & 1) == 0) {
            bVar3 = true;
          }
          else {
            if ((7 < *(byte *)(uVar5 + 0xb8)) ||
               ((1 << (ulong)(*(byte *)(uVar5 + 0xb8) & 0x1f) & 0xa2U) == 0)) {
              local_120 = &PTR_FUN_00aee688;
              ppuStack_118 = (undefined **)0x33055c;
              puStack_108 = _UNK_0029fc58;
              local_110 = _DAT_0029fc50;
              local_100 = 0;
              lVar4 = FUN_008ef118(&local_d0,&local_120);
              if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                core::result::unwrap_failed
                          ("size overflows MAX_SIZE",0x17,auStack_71,&DAT_00aee668,
                           &PTR_s__root__cargo_registry_src_index__00aee6e0);
              }
              goto LAB_008ebd44;
            }
            bVar3 = false;
            ppuVar8 = (undefined **)0x0;
          }
        }
        else {
          bVar3 = false;
        }
        if (ppuStack_c8 != (undefined **)0x0) {
          (*(code *)ppuStack_c8[4])(&local_b0,local_c0,local_b8);
        }
        if (bVar3) {
          if (uVar10 == 1) {
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_fmt
                      ("internal error: entered unreachable code: BodyLength::Unknown would set chunked"
                       ,0x9f,&PTR_s__root__cargo_registry_src_index__00aee6f8);
          }
          goto LAB_008ebe98;
        }
        local_148 = (uint *)((ulong)local_148 & 0xffffffffffffff00);
        local_160 = (undefined **)0xfffffffffffffffe;
        ppuStack_158 = ppuVar8;
LAB_008ebeb8:
        ppuStack_118 = ppuStack_158;
        local_120 = local_160;
        puStack_108 = local_148;
        local_110 = local_150;
      }
      local_e0 = local_110;
      ppuStack_e8 = ppuStack_118;
      local_d8 = puStack_108;
      local_f0 = local_120;
      if ((local_9e == '\x02') && (auVar11._0_8_ == 1)) {
        ppuStack_158 = _UNK_002c0370;
        local_160 = _DAT_002c0368;
        local_148 = _UNK_002c0380;
        local_150 = _DAT_002c0378;
                    /* try { // try from 008ebef8 to 008ebf2b has its CatchHandler @ 008ec470 */
        FUN_008ecc18(&local_d0,uVar5,&local_160);
        if ((char)local_b0 != '\x02') {
          (*(code *)local_d0[4])(&local_b8,ppuStack_c8,local_c0);
        }
      }
      ppuStack_c8 = ppuStack_e8;
      local_d0 = local_f0;
      local_b8 = local_d8;
      local_c0 = local_e0;
      goto LAB_008ebf34;
    }
    ppuStack_158 = _UNK_002bf9d0;
    local_160 = _s__002bf9c8;
    local_148 = _UNK_002bf9e0;
    local_150 = _DAT_002bf9d8;
    FUN_008ecc18(&local_d0,uVar5,&local_160);
    if ((char)local_b0 != '\x02') {
      (*(code *)local_d0[4])(&local_b8,ppuStack_c8,local_c0);
    }
    if ((auVar11 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
      local_b8 = (uint *)((ulong)local_b8 & 0xffffffffffffff00);
      local_d0 = (undefined **)0xfffffffffffffffe;
      ppuStack_c8 = ppuVar8;
      goto LAB_008ebf34;
    }
    if (uVar10 != 1) {
LAB_008ebe98:
      FUN_008e8d54(&local_d0,uVar5,uVar6);
      goto LAB_008ebf34;
    }
  }
  local_b8 = (uint *)((ulong)local_b8 & 0xffffffffffffff00);
  ppuStack_c8 = _UNK_0029f0f8;
  local_d0 = _DAT_0029f0f0;
LAB_008ebf34:
  uVar10 = (*(long *)(uVar5 + 0x40) + *(long *)(uVar5 + 0x28)) * 0x1e + 0x1e;
  if ((ulong)(*param_2 - param_2[2]) < uVar10) {
                    /* try { // try from 008ec31c to 008ec413 has its CatchHandler @ 008ec498 */
    FUN_008f5dd0(param_2,param_2[2],uVar10,1,1);
  }
                    /* WARNING: Could not recover jumptable at 0x008ebf88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_008ebf8c + (ulong)(byte)"%"[*(byte *)(uVar5 + 0xb8)] * 4))();
  return;
}


// ===== 008ec4b0  FUN_008ec4b0 =====

void FUN_008ec4b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  core::fmt::write(param_1,&DAT_00aee878,param_2,param_3);
  return;
}


// ===== 008ec4c4  FUN_008ec4c4 =====

undefined8 FUN_008ec4c4(undefined8 *param_1,void *param_2,ulong param_3)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  lVar1 = plVar2[2];
  if ((ulong)(*plVar2 - lVar1) < param_3) {
    FUN_008f5dd0(plVar2,lVar1,param_3,1,1);
    lVar1 = plVar2[2];
  }
  else if (param_3 == 0) goto LAB_008ec508;
  memcpy((void *)(plVar2[1] + lVar1),param_2,param_3);
  lVar1 = plVar2[2];
LAB_008ec508:
  plVar2[2] = lVar1 + param_3;
  return 0;
}


// ===== 008ec54c  FUN_008ec54c =====

void FUN_008ec54c(undefined8 param_1,long param_2)

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


// ===== 008ec564  FUN_008ec564 =====

undefined8 FUN_008ec564(undefined8 *param_1,uint param_2)

{
  undefined1 uVar1;
  byte bVar2;
  long lVar3;
  ulong __n;
  long *plVar4;
  uint local_24;
  
  uVar1 = (undefined1)param_2;
  if (param_2 < 0x80) {
    local_24 = param_2 & 0xff;
    __n = 1;
  }
  else if (param_2 < 0x800) {
    __n = 2;
    local_24 = CONCAT11(uVar1,(char)(param_2 >> 6)) & 0xffff3fff | 0x80c0;
  }
  else {
    bVar2 = (byte)(param_2 >> 6);
    if (param_2 >> 0x10 == 0) {
      local_24._0_2_ = (bVar2 & 0xff3f | 0x80) << 8;
      __n = 3;
      local_24 = CONCAT31(CONCAT12(uVar1,(short)local_24) >> 8,(char)(param_2 >> 0xc)) & 0x3fffff |
                 0x8000e0;
    }
    else {
      __n = 4;
      local_24 = CONCAT31(CONCAT21(CONCAT11(uVar1,bVar2),(char)(param_2 >> 0xc)),
                          (char)(param_2 >> 0x12)) & 0x3f3f3fff | 0x808080f0;
    }
  }
  plVar4 = (long *)*param_1;
  lVar3 = plVar4[2];
  if ((ulong)(*plVar4 - lVar3) < __n) {
    FUN_008f5dd0(plVar4,lVar3,__n,1,1);
    lVar3 = plVar4[2];
  }
  memcpy((void *)(plVar4[1] + lVar3),&local_24,__n);
  plVar4[2] = plVar4[2] + __n;
  return 0;
}


// ===== 008ec66c  FUN_008ec66c =====

void FUN_008ec66c(undefined8 *param_1,long param_2,long *param_3)

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
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  ulong unaff_x23;
  ulong uVar13;
  
  uVar12 = *(ulong *)(param_2 + 0x28);
  if (uVar12 != 0) {
    uVar6 = FUN_008ed464(param_2);
    uVar4 = *(ushort *)(param_2 + 0x58);
    lVar2 = *(long *)(param_2 + 0x48);
    uVar3 = *(ulong *)(param_2 + 0x50);
    lVar11 = *(long *)(param_2 + 0x20);
    uVar13 = 0;
    uVar8 = (ulong)((uint)uVar4 & uVar6 & 0xffff);
    do {
      if ((uVar3 <= uVar8) && (uVar8 = 0, uVar3 == 0)) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      puVar1 = (ushort *)(lVar2 + uVar8 * 4);
      unaff_x23 = (ulong)*puVar1;
      if ((unaff_x23 == 0xffff) ||
         (uVar5 = puVar1[1], ((ulong)((int)uVar8 - (uint)(uVar5 & uVar4)) & (ulong)uVar4) < uVar13))
      break;
      if ((uint)uVar5 == (uVar6 & 0xffff)) {
        if (uVar12 <= unaff_x23) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check
                    (unaff_x23,uVar12,&PTR_s__root__cargo_registry_src_index__00aeeb60);
        }
        lVar9 = lVar11 + unaff_x23 * 0x60;
        if ((*(long *)(lVar9 + 0x38) != 0) != (*param_3 == 0)) {
          if (*(long *)(lVar9 + 0x38) == 0) {
            if (*(char *)(lVar9 + 0x40) == (char)param_3[1]) goto LAB_008ec794;
          }
          else if ((*(size_t *)(lVar9 + 0x48) == param_3[2]) &&
                  (iVar7 = memcmp(*(void **)(lVar9 + 0x40),(void *)param_3[1],
                                  *(size_t *)(lVar9 + 0x48)), iVar7 == 0)) goto LAB_008ec794;
        }
      }
      uVar13 = uVar13 + 1;
      uVar8 = uVar8 + 1;
    } while( true );
  }
  uVar10 = 0;
LAB_008ec7ac:
  param_1[1] = unaff_x23;
  param_1[2] = param_2;
  *param_1 = uVar10;
  return;
LAB_008ec794:
  uVar10 = 1;
  goto LAB_008ec7ac;
}


// ===== 008ec7e8  FUN_008ec7e8 =====

void FUN_008ec7e8(long *param_1,long *param_2,long *param_3)

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
  
                    /* try { // try from 008ec814 to 008ec817 has its CatchHandler @ 008eca1c */
  iVar9 = FUN_008ee324();
  if (iVar9 == 0) {
    uVar8 = FUN_008ed464(param_2,param_3);
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
LAB_008ec9c8:
        *(undefined1 *)((long)param_1 + 0x32) = uVar11;
        return;
      }
      if (uVar6 == uVar8) {
        if (uVar4 <= uVar15) {
                    /* try { // try from 008eca00 to 008eca17 has its CatchHandler @ 008eca1c */
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check
                    (uVar15,uVar4,&PTR_s__root__cargo_registry_src_index__00aeeb78);
        }
        lVar14 = lVar17 + uVar15 * 0x68;
        if ((lVar2 == 0) != (*(long *)(lVar14 + 0x40) != 0)) {
          if (*(long *)(lVar14 + 0x40) == 0) {
            if (*(char *)(lVar14 + 0x48) == (char)lVar7) {
              uVar11 = 2;
              *param_1 = (long)param_2;
              param_1[1] = uVar13;
              param_1[2] = uVar15;
              goto LAB_008ec9c8;
            }
          }
          else if ((*(size_t *)(lVar14 + 0x50) == sVar10) &&
                  (iVar9 = memcmp(*(void **)(lVar14 + 0x48),__s2,sVar10), iVar9 == 0))
          goto code_r0x008ec96c;
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
LAB_008ec838:
                    /* WARNING: Could not recover jumptable at 0x008ec854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_3 + 3,__s2,sVar10);
  return;
code_r0x008ec96c:
  UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 0x20);
  *param_1 = (long)param_2;
  param_1[1] = uVar13;
  param_1[2] = uVar15;
  *(undefined1 *)((long)param_1 + 0x32) = 2;
  goto LAB_008ec838;
}


// ===== 008eca44  FUN_008eca44 =====

undefined4 FUN_008eca44(long param_1,long *param_2)

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
    uVar7 = FUN_008ed464(param_1,param_2);
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
        goto joined_r0x008ecb84;
      }
      if ((uint)uVar5 == (uVar7 & 0xffff)) {
        if (uVar15 <= uVar9) {
                    /* try { // try from 008ecbd4 to 008ecbe3 has its CatchHandler @ 008ecbe8 */
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check
                    (uVar9,uVar15,&PTR_s__root__cargo_registry_src_index__00aeeb60);
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
          goto code_r0x008ecb68;
        }
      }
      uVar16 = uVar16 + 1;
      uVar10 = uVar10 + 1;
    } while( true );
  }
  lVar12 = *param_2;
  uVar13 = 0;
joined_r0x008ecb84:
  if (lVar12 != 0) {
    (**(code **)(lVar12 + 0x20))(param_2 + 3,param_2[1],param_2[2]);
  }
  return uVar13;
code_r0x008ecb68:
  uVar13 = 1;
  goto joined_r0x008ecb84;
}


// ===== 008ecc18  FUN_008ecc18 =====

void FUN_008ecc18(long *param_1,long param_2,long *param_3)

{
  ushort *puVar1;
  short *psVar2;
  short *psVar3;
  void *__s2;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  code *pcVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  undefined **ppuVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  undefined8 *puVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  size_t __n;
  long *plVar23;
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
  undefined **local_180;
  long lStack_e8;
  long local_e0;
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
  long local_80;
  long lStack_78;
  long local_70;
  
  uVar21 = *(ulong *)(param_2 + 0x28);
  if (uVar21 != 0) {
    uVar8 = FUN_008ed464(param_2,param_3);
    lVar13 = *param_3;
    __s2 = (void *)param_3[1];
    lVar24 = param_3[1];
    uVar20 = 0;
    uVar4 = *(ushort *)(param_2 + 0x58);
    lVar18 = *(long *)(param_2 + 0x48);
    uVar19 = *(ulong *)(param_2 + 0x50);
    lVar15 = *(long *)(param_2 + 0x20);
    __n = param_3[2];
    uVar12 = (ulong)((uint)uVar4 & uVar8 & 0xffff);
    local_180 = &PTR_s__root__cargo_registry_src_index__00aeeb60;
    do {
      if ((uVar19 <= uVar12) && (uVar12 = 0, uVar19 == 0)) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      puVar1 = (ushort *)(lVar18 + uVar12 * 4);
      uVar5 = *puVar1;
      uVar22 = (ulong)uVar5;
      if ((uVar22 == 0xffff) ||
         (uVar6 = puVar1[1], ((ulong)((int)uVar12 - (uint)(uVar6 & uVar4)) & (ulong)uVar4) < uVar20)
         ) break;
      if ((uint)uVar6 == (uVar8 & 0xffff)) {
        if (uVar21 <= uVar22) goto LAB_008ecfbc;
        plVar23 = (long *)(lVar15 + uVar22 * 0x68);
        if ((lVar13 == 0) != (plVar23[8] != 0)) {
          if (plVar23[8] == 0) {
            if ((char)plVar23[9] == (char)lVar24) goto LAB_008ecd60;
          }
          else if ((plVar23[10] == __n) && (iVar9 = memcmp((void *)plVar23[9],__s2,__n), iVar9 == 0)
                  ) goto LAB_008ecd60;
        }
      }
      uVar20 = uVar20 + 1;
      uVar12 = uVar12 + 1;
    } while( true );
  }
  *(undefined1 *)(param_1 + 4) = 2;
LAB_008ece30:
  if (*param_3 != 0) {
    (**(code **)(*param_3 + 0x20))(param_3 + 3,param_3[1],param_3[2]);
  }
  return;
LAB_008ecd60:
  uVar21 = uVar19;
  if (*plVar23 == 1) {
                    /* try { // try from 008ecd70 to 008ecd7b has its CatchHandler @ 008ed028 */
    FUN_008ee874(param_2,plVar23[1]);
    uVar21 = *(ulong *)(param_2 + 0x50);
  }
  if (uVar21 <= uVar12) {
    local_180 = &PTR_s__root__cargo_registry_src_index__00aeed40;
    uVar22 = uVar12;
LAB_008ecfbc:
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check(uVar22,uVar21,local_180);
  }
  uVar20 = *(ulong *)(param_2 + 0x28);
  lVar13 = *(long *)(param_2 + 0x48);
  *(undefined4 *)(lVar13 + uVar12 * 4) = 0xffff;
  if (uVar20 <= uVar22) {
    <alloc::vec::alloc::vec::Vec<_,_>>::swap_remove::assert_failed(uVar22);
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x8ecfdc);
    (*pcVar7)();
  }
  uVar20 = uVar20 - 1;
  plVar23 = (long *)(*(long *)(param_2 + 0x20) + uVar22 * 0x68);
  *(ulong *)(param_2 + 0x28) = uVar20;
  plVar16 = (long *)(*(long *)(param_2 + 0x20) + uVar20 * 0x68);
  lStack_c8 = plVar23[1];
  local_d0 = *plVar23;
  lStack_b8 = plVar23[3];
  local_c0 = plVar23[2];
  lStack_a8 = plVar23[5];
  local_b0 = plVar23[4];
  lStack_88 = plVar23[9];
  local_90 = plVar23[8];
  lStack_e8 = plVar23[0xb];
  local_80 = plVar23[10];
  local_e0 = plVar23[0xc];
  lStack_98 = plVar23[7];
  local_a0 = plVar23[6];
  lVar24 = plVar16[1];
  lVar18 = *plVar16;
  lVar25 = plVar16[3];
  lVar15 = plVar16[2];
  lVar27 = plVar16[9];
  lVar26 = plVar16[8];
  lVar29 = plVar16[0xb];
  lVar28 = plVar16[10];
  lVar31 = plVar16[5];
  lVar30 = plVar16[4];
  lVar33 = plVar16[7];
  lVar32 = plVar16[6];
  plVar23[0xc] = plVar16[0xc];
  plVar23[1] = lVar24;
  *plVar23 = lVar18;
  plVar23[3] = lVar25;
  plVar23[2] = lVar15;
  plVar23[9] = lVar27;
  plVar23[8] = lVar26;
  plVar23[0xb] = lVar29;
  plVar23[10] = lVar28;
  plVar23[5] = lVar31;
  plVar23[4] = lVar30;
  plVar23[7] = lVar33;
  plVar23[6] = lVar32;
  lStack_78 = lStack_e8;
  local_70 = local_e0;
  if (uVar22 < uVar20) {
    uVar4 = *(ushort *)(plVar23 + 0xc);
    uVar19 = (ulong)(uVar4 & *(ushort *)(param_2 + 0x58));
    while( true ) {
      do {
        uVar10 = uVar19;
        uVar19 = 0;
      } while (uVar21 <= uVar10);
      uVar19 = (ulong)*(ushort *)(lVar13 + uVar10 * 4);
      if ((uVar19 != 0xffff) && (uVar20 <= uVar19)) break;
      uVar19 = uVar10 + 1;
    }
    puVar1 = (ushort *)(lVar13 + uVar10 * 4);
    *puVar1 = uVar5;
    puVar1[1] = uVar4;
    if (*plVar23 == 1) {
      uVar19 = plVar23[1];
      uVar10 = *(ulong *)(param_2 + 0x40);
      if (uVar10 <= uVar19) {
        ppuVar11 = &PTR_s__root__cargo_registry_src_index__00aeed58;
        uVar21 = uVar10;
        goto LAB_008ecfd0;
      }
      lVar18 = *(long *)(param_2 + 0x38);
      uVar14 = plVar23[2];
      puVar17 = (undefined8 *)(lVar18 + uVar19 * 0x48);
      *puVar17 = 0;
      puVar17[1] = uVar22;
      if (uVar10 <= uVar14) {
        ppuVar11 = &PTR_s__root__cargo_registry_src_index__00aeed70;
        uVar21 = uVar10;
        uVar19 = uVar14;
        goto LAB_008ecfd0;
      }
      lVar18 = lVar18 + uVar14 * 0x48;
      *(undefined8 *)(lVar18 + 0x10) = 0;
      *(ulong *)(lVar18 + 0x18) = uVar22;
    }
  }
  if (uVar20 != 0) {
    uVar4 = *(ushort *)(param_2 + 0x58);
    ppuVar11 = &PTR_s__root__cargo_registry_src_index__00aeed88;
    uVar19 = uVar12;
    while( true ) {
      uVar20 = 0;
      if (uVar19 + 1 < uVar21) {
        uVar20 = uVar19 + 1;
      }
      psVar2 = (short *)(lVar13 + uVar20 * 4);
      if ((*psVar2 == -1) ||
         (uVar5 = psVar2[1], ((int)uVar20 - (uint)(uVar5 & uVar4) & (uint)uVar4) == 0))
      goto LAB_008ecf50;
      if (uVar21 <= uVar19) break;
      psVar3 = (short *)(lVar13 + uVar19 * 4);
      *psVar3 = *psVar2;
      psVar3[1] = uVar5;
      *psVar2 = -1;
      psVar2[1] = 0;
      uVar19 = uVar20;
    }
LAB_008ecfd0:
                    /* try { // try from 008ecfd0 to 008ecfd7 has its CatchHandler @ 008ed014 */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check(uVar19,uVar21,ppuVar11);
  }
LAB_008ecf50:
  param_1[4] = lStack_98;
  param_1[1] = local_b0;
  *param_1 = lStack_b8;
  param_1[3] = local_a0;
  param_1[2] = lStack_a8;
  if (local_90 != 0) {
                    /* try { // try from 008ecfa0 to 008ecfc7 has its CatchHandler @ 008ed028 */
    (**(code **)(local_90 + 0x20))(&lStack_e8,lStack_88,local_80);
  }
  goto LAB_008ece30;
}


// ===== 008ed058  FUN_008ed058 =====

void FUN_008ed058(undefined8 *param_1,long param_2,long *param_3)

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
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 unaff_x25;
  ulong uVar14;
  size_t __n;
  ulong uVar15;
  
  uVar13 = *(ulong *)(param_2 + 0x28);
  if (uVar13 != 0) {
    uVar7 = FUN_008ed464(param_2,param_3);
    uVar4 = *(ushort *)(param_2 + 0x58);
    lVar2 = *(long *)(param_2 + 0x48);
    uVar3 = *(ulong *)(param_2 + 0x50);
    lVar11 = *(long *)(param_2 + 0x20);
    uVar15 = 0;
    lVar12 = *param_3;
    __s2 = (void *)param_3[1];
    uVar9 = (ulong)((uint)uVar4 & uVar7 & 0xffff);
    lVar6 = param_3[1];
    __n = param_3[2];
    do {
      if ((uVar3 <= uVar9) && (uVar9 = 0, uVar3 == 0)) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      puVar1 = (ushort *)(lVar2 + uVar9 * 4);
      uVar14 = (ulong)*puVar1;
      if ((uVar14 == 0xffff) ||
         (uVar5 = puVar1[1], ((ulong)((int)uVar9 - (uint)(uVar5 & uVar4)) & (ulong)uVar4) < uVar15))
      {
        *param_1 = 0;
        param_1[1] = uVar14;
        param_1[2] = param_2;
        goto joined_r0x008ed1c0;
      }
      if ((uint)uVar5 == (uVar7 & 0xffff)) {
        if (uVar13 <= uVar14) {
                    /* try { // try from 008ed238 to 008ed24b has its CatchHandler @ 008ed250 */
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check
                    (uVar14,uVar13,&PTR_s__root__cargo_registry_src_index__00aeeb60);
        }
        lVar10 = lVar11 + uVar14 * 0x68;
        if ((lVar12 == 0) != (*(long *)(lVar10 + 0x40) != 0)) {
          if (*(long *)(lVar10 + 0x40) == 0) {
            if (*(char *)(lVar10 + 0x48) == (char)lVar6) {
              param_1[1] = uVar14;
              param_1[2] = param_2;
              *param_1 = 1;
              return;
            }
          }
          else if ((*(size_t *)(lVar10 + 0x50) == __n) &&
                  (iVar8 = memcmp(*(void **)(lVar10 + 0x48),__s2,__n), iVar8 == 0))
          goto code_r0x008ed190;
        }
      }
      uVar15 = uVar15 + 1;
      uVar9 = uVar9 + 1;
    } while( true );
  }
  lVar12 = *param_3;
  *param_1 = 0;
  param_1[1] = unaff_x25;
  param_1[2] = param_2;
joined_r0x008ed1c0:
  if (lVar12 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x008ed204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar12 + 0x20))(param_3 + 3,param_3[1],param_3[2]);
  return;
code_r0x008ed190:
  *param_1 = 1;
  param_1[1] = uVar14;
  param_1[2] = param_2;
  goto joined_r0x008ed1c0;
}


// ===== 008ed280  FUN_008ed280 =====

void FUN_008ed280(undefined8 *param_1,long param_2,long *param_3)

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
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  ulong unaff_x23;
  ulong uVar13;
  
  uVar12 = *(ulong *)(param_2 + 0x28);
  if (uVar12 != 0) {
    uVar6 = FUN_008ed464(param_2);
    uVar4 = *(ushort *)(param_2 + 0x58);
    lVar2 = *(long *)(param_2 + 0x48);
    uVar3 = *(ulong *)(param_2 + 0x50);
    lVar11 = *(long *)(param_2 + 0x20);
    uVar13 = 0;
    uVar8 = (ulong)((uint)uVar4 & uVar6 & 0xffff);
    do {
      if ((uVar3 <= uVar8) && (uVar8 = 0, uVar3 == 0)) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      puVar1 = (ushort *)(lVar2 + uVar8 * 4);
      unaff_x23 = (ulong)*puVar1;
      if ((unaff_x23 == 0xffff) ||
         (uVar5 = puVar1[1], ((ulong)((int)uVar8 - (uint)(uVar5 & uVar4)) & (ulong)uVar4) < uVar13))
      break;
      if ((uint)uVar5 == (uVar6 & 0xffff)) {
        if (uVar12 <= unaff_x23) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check
                    (unaff_x23,uVar12,&PTR_s__root__cargo_registry_src_index__00aeeb60);
        }
        lVar9 = lVar11 + unaff_x23 * 0x68;
        if ((*(long *)(lVar9 + 0x40) != 0) != (*param_3 == 0)) {
          if (*(long *)(lVar9 + 0x40) == 0) {
            if (*(char *)(lVar9 + 0x48) == (char)param_3[1]) goto LAB_008ed3a8;
          }
          else if ((*(size_t *)(lVar9 + 0x50) == param_3[2]) &&
                  (iVar7 = memcmp(*(void **)(lVar9 + 0x48),(void *)param_3[1],
                                  *(size_t *)(lVar9 + 0x50)), iVar7 == 0)) goto LAB_008ed3a8;
        }
      }
      uVar13 = uVar13 + 1;
      uVar8 = uVar8 + 1;
    } while( true );
  }
  uVar10 = 0;
LAB_008ed3c0:
  param_1[1] = unaff_x23;
  param_1[2] = param_2;
  *param_1 = uVar10;
  return;
LAB_008ed3a8:
  uVar10 = 1;
  goto LAB_008ed3c0;
}


// ===== 008ed3fc  FUN_008ed3fc =====

void FUN_008ed3fc(long param_1)

{
  if (*(long *)(param_1 + 0x40) != 0) {
                    /* try { // try from 008ed41c to 008ed423 has its CatchHandler @ 008ed440 */
    (**(code **)(*(long *)(param_1 + 0x40) + 0x20))
              (param_1 + 0x58,*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
  }
                    /* WARNING: Could not recover jumptable at 0x008ed43c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x20))
            (param_1 + 0x30,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}


// ===== 008ed464  FUN_008ed464 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_008ed464(long *param_1,long *param_2)

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
    FUN_008ef338(&local_70,&local_28,8);
    if (lVar9 == 0) {
      local_28 = (ulong)*(byte *)(param_2 + 1);
      puVar3 = &local_28;
      lVar9 = 8;
    }
    else {
      puVar3 = (ulong *)param_2[1];
      lVar9 = param_2[2];
    }
    FUN_008ef338(&local_70,puVar3,lVar9);
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


// ===== 008ed660  FUN_008ed660 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_008ed660(long *param_1,long *param_2)

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
    FUN_008ef338(&local_70,&local_28,8);
    if (lVar9 == 0) {
      local_28 = (ulong)*(byte *)(param_2 + 1);
      puVar3 = &local_28;
      lVar9 = 8;
    }
    else {
      puVar3 = (ulong *)param_2[1];
      lVar9 = param_2[2];
    }
    FUN_008ef338(&local_70,puVar3,lVar9);
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


// ===== 008ed860  FUN_008ed860 =====

undefined8 FUN_008ed860(long *param_1)

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
      lVar9 = FUN_004b25a4(0x240,8);
      if (lVar9 != 0) {
                    /* try { // try from 008ed98c to 008ed997 has its CatchHandler @ 008edb7c */
        FUN_008f0b4c(param_1 + 3);
        if (param_1[3] != 0) {
          free((void *)param_1[4]);
        }
        param_1[5] = 0;
        param_1[3] = 6;
        param_1[4] = lVar9;
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(8,0x240);
    }
    uVar8 = FUN_008eddac(param_1,uVar16 << 1);
joined_r0x008ed910:
    if ((uVar8 & 1) == 0) {
      return 0;
    }
    return 1;
  }
  if ((float)uVar8 / (float)uVar16 < 0.2 == NAN((float)uVar8 / (float)uVar16)) {
    *param_1 = 0;
    uVar8 = FUN_008eddac(param_1,uVar16 << 1);
    goto joined_r0x008ed910;
  }
  <http::header::map::[12]::http::header::map::Danger>::set_red(param_1);
  lVar9 = param_1[10];
  if (lVar9 == 0) goto LAB_008eda30;
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
      if (uVar16 == uVar11) goto LAB_008eda30;
      if ((uVar16 & 0xc) == 0) {
        puVar13 = puVar10 + uVar11;
        goto LAB_008eda1c;
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
    if (uVar16 == uVar8) goto LAB_008eda30;
  }
LAB_008eda1c:
  do {
    puVar14 = puVar13 + 1;
    *puVar13 = 0xffff;
    puVar13 = puVar14;
  } while (puVar14 != puVar10 + lVar9);
LAB_008eda30:
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
    lVar1 = lVar18 + 0x60;
    uVar6 = FUN_008ed464(param_1,lVar18 + 0x38);
    uVar16 = 0;
    uVar11 = (ulong)(uVar6 & uVar3);
    *(ushort *)(lVar18 + 0x58) = uVar6;
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
        goto joined_r0x008edb30;
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
joined_r0x008edb30:
    lVar18 = lVar1;
    sVar15 = sVar15 + 1;
    if (lVar1 == lVar17 + lVar9 * 0x60) {
      return 0;
    }
  } while( true );
}


// ===== 008edbb0  FUN_008edbb0 =====

void FUN_008edbb0(undefined8 *param_1,ulong param_2)

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
                (&DAT_002ba43f,&local_60,&PTR_s__root__cargo_registry_src_index__00aeedb8);
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
        if (0x155555555555555 < uVar12) {
          uVar11 = 0;
LAB_008edce0:
                    /* try { // try from 008edce0 to 008edceb has its CatchHandler @ 008edd90 */
                    /* WARNING: Subroutine does not return */
          alloc::raw_vec::handle_error(uVar11,unaff_x22);
        }
        if (uVar1 == 0) {
          lVar6 = 8;
        }
        else {
          unaff_x22 = uVar12 * 0x60;
          __rustc::__rust_no_alloc_shim_is_unstable_v2();
          uVar11 = 8;
          lVar6 = FUN_004b25a4(unaff_x22,8);
          if (lVar6 == 0) goto LAB_008edce0;
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


// ===== 008eddac  FUN_008eddac =====

bool FUN_008eddac(long param_1,ulong param_2)

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
  
  if (0x8000 < param_2) goto LAB_008edf84;
  __ptr = *(short **)(param_1 + 0x48);
  uVar1 = *(ulong *)(param_1 + 0x50);
  uVar15 = 0;
  lVar14 = uVar1 << 2;
  if (uVar1 == 0) {
LAB_008ede24:
    if (param_2 != 0) goto LAB_008ede28;
LAB_008ede74:
    uVar8 = 0;
    puVar4 = (undefined4 *)0x2;
  }
  else {
    puVar5 = (ushort *)(__ptr + 1);
    do {
      if ((puVar5[-1] != 0xffff) &&
         (((int)uVar15 - (uint)(*puVar5 & *(ushort *)(param_1 + 0x58)) &
          (uint)*(ushort *)(param_1 + 0x58)) == 0)) goto LAB_008ede24;
      lVar14 = lVar14 + -4;
      puVar5 = puVar5 + 2;
      uVar15 = uVar15 + 1;
    } while (lVar14 != 0);
    uVar15 = 0;
    if (param_2 == 0) goto LAB_008ede74;
LAB_008ede28:
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
        if (uVar8 == uVar10) goto LAB_008edec4;
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
LAB_008edec4:
    *puVar7 = 0xffff;
    uVar8 = param_2;
  }
  uVar3 = (int)param_2 - 1;
  *(undefined4 **)(param_1 + 0x48) = puVar4;
  *(ulong *)(param_1 + 0x50) = uVar8;
  *(short *)(param_1 + 0x58) = (short)uVar3;
  if (uVar1 < uVar15) {
                    /* try { // try from 008ee04c to 008ee06f has its CatchHandler @ 008ee088 */
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (uVar15,uVar1,uVar1,&PTR_s__root__cargo_registry_src_index__00aeed28);
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
LAB_008ee06c:
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(local_60,lStack_58);
    }
    FUN_008f63dc(&local_68,lVar14,*(undefined8 *)(param_1 + 0x20),uVar8 + uVar15,8,0x60);
    if (local_68 == 1) goto LAB_008ee06c;
    *(ulong *)(param_1 + 0x18) = uVar8 + uVar15;
    *(undefined8 *)(param_1 + 0x20) = local_60;
  }
  if (uVar1 != 0) {
    free(__ptr);
  }
LAB_008edf84:
  return 0x8000 < param_2;
}


// ===== 008ee0a8  FUN_008ee0a8 =====

undefined8 FUN_008ee0a8(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined4 *puVar6;
  ulong uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong *local_50;
  undefined *puStack_48;
  ulong local_28;
  
  uVar7 = *(ulong *)(param_1 + 0x28);
  local_28 = uVar7 + param_2;
  if (!CARRY8(uVar7,param_2)) {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_28;
    auVar4._8_8_ = 2;
    auVar4._0_8_ = 0xaaaaaaaaaaaaaaab;
    uVar1 = SUB168(auVar3 * auVar4,8) >> 1;
    if (CARRY8(local_28,local_28 / 3)) {
      local_50 = &local_28;
      puStack_48 = PTR_fmt_00b00c10;
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                (&DAT_002ba43f,&local_50,&PTR_s__root__cargo_registry_src_index__00aeedb8);
    }
    if (uVar1 <= *(ulong *)(param_1 + 0x50)) {
      return 0;
    }
    uVar2 = 0;
    if (1 < uVar1) {
      uVar2 = 0xffffffffffffffff >> (LZCOUNT(uVar1 - 1) & 0x3fU);
    }
    if (uVar2 >> 0xf == 0) {
      uVar1 = uVar2 + 1;
      if (uVar7 != 0) {
        uVar5 = FUN_008eee1c(param_1,uVar1);
        return uVar5;
      }
      *(short *)(param_1 + 0x58) = (short)uVar1 + -1;
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      puVar6 = (undefined4 *)FUN_004b25a4(uVar1 * 4,2);
      if (puVar6 != (undefined4 *)0x0) {
        puVar9 = puVar6;
        if (1 < uVar1) {
          if (uVar2 < 0x10) {
            uVar10 = 1;
            puVar8 = puVar6;
          }
          else {
            uVar7 = uVar2 & 0x7ff0;
            puVar8 = puVar6 + uVar7;
            uVar10 = uVar7 | 1;
            puVar12 = (undefined8 *)(puVar6 + 8);
            do {
              uVar7 = uVar7 - 0x10;
              puVar12[-3] = 0xffff0000ffff;
              puVar12[-4] = 0xffff0000ffff;
              puVar12[-1] = 0xffff0000ffff;
              puVar12[-2] = 0xffff0000ffff;
              puVar12[1] = 0xffff0000ffff;
              *puVar12 = 0xffff0000ffff;
              puVar12[3] = 0xffff0000ffff;
              puVar12[2] = 0xffff0000ffff;
              puVar12 = puVar12 + 8;
            } while (uVar7 != 0);
          }
          lVar11 = (uVar2 - uVar10) + 1;
          do {
            lVar11 = lVar11 + -1;
            puVar9 = puVar8 + 1;
            *puVar8 = 0xffff;
            puVar8 = puVar9;
          } while (lVar11 != 0);
        }
        lVar11 = *(long *)(param_1 + 0x50);
        *puVar9 = 0xffff;
        if (lVar11 != 0) {
          free(*(void **)(param_1 + 0x48));
        }
        uVar7 = uVar1 - (uVar1 >> 2);
        *(undefined4 **)(param_1 + 0x48) = puVar6;
        *(ulong *)(param_1 + 0x50) = uVar1;
        if (uVar7 < 0x13b13b13b13b13c) {
          puVar6 = (undefined4 *)(uVar7 * 0x68);
          __rustc::__rust_no_alloc_shim_is_unstable_v2();
          uVar5 = 8;
          lVar11 = FUN_004b25a4(puVar6,8);
          if (lVar11 != 0) {
                    /* try { // try from 008ee26c to 008ee277 has its CatchHandler @ 008ee2f4 */
            FUN_008f0a90(param_1 + 0x18);
            if (*(long *)(param_1 + 0x18) != 0) {
              free(*(void **)(param_1 + 0x20));
            }
            *(ulong *)(param_1 + 0x18) = uVar7;
            *(long *)(param_1 + 0x20) = lVar11;
            *(undefined8 *)(param_1 + 0x28) = 0;
            return 0;
          }
        }
        else {
          uVar5 = 0;
        }
                    /* WARNING: Subroutine does not return */
        alloc::raw_vec::handle_error(uVar5,puVar6);
      }
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(2,uVar1 * 4);
    }
  }
  return 1;
}


// ===== 008ee324  FUN_008ee324 =====

undefined8 FUN_008ee324(long *param_1)

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
                    /* try { // try from 008ee450 to 008ee45b has its CatchHandler @ 008ee640 */
        FUN_008f0a90(param_1 + 3);
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
    uVar8 = FUN_008eee1c(param_1,uVar16 << 1);
joined_r0x008ee3d4:
    if ((uVar8 & 1) == 0) {
      return 0;
    }
    return 1;
  }
  if ((float)uVar8 / (float)uVar16 < 0.2 == NAN((float)uVar8 / (float)uVar16)) {
    *param_1 = 0;
    uVar8 = FUN_008eee1c(param_1,uVar16 << 1);
    goto joined_r0x008ee3d4;
  }
  <http::header::map::[12]::http::header::map::Danger>::set_red(param_1);
  lVar9 = param_1[10];
  if (lVar9 == 0) goto LAB_008ee4f4;
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
      if (uVar16 == uVar11) goto LAB_008ee4f4;
      if ((uVar16 & 0xc) == 0) {
        puVar13 = puVar10 + uVar11;
        goto LAB_008ee4e0;
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
    if (uVar16 == uVar8) goto LAB_008ee4f4;
  }
LAB_008ee4e0:
  do {
    puVar14 = puVar13 + 1;
    *puVar13 = 0xffff;
    puVar13 = puVar14;
  } while (puVar14 != puVar10 + lVar9);
LAB_008ee4f4:
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
    uVar6 = FUN_008ed464(param_1,lVar18 + 0x40);
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
        goto joined_r0x008ee5f4;
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
joined_r0x008ee5f4:
    lVar18 = lVar1;
    sVar15 = sVar15 + 1;
    if (lVar1 == lVar17 + lVar9 * 0x68) {
      return 0;
    }
  } while( true );
}


// ===== 008ee674  FUN_008ee674 =====

void FUN_008ee674(undefined8 *param_1,ulong param_2)

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
                (&DAT_002ba43f,&local_60,&PTR_s__root__cargo_registry_src_index__00aeedb8);
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
LAB_008ee7a8:
                    /* try { // try from 008ee7a8 to 008ee7b3 has its CatchHandler @ 008ee858 */
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
          if (lVar6 == 0) goto LAB_008ee7a8;
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


// ===== 008ee874  FUN_008ee874 =====

void FUN_008ee874(long param_1,ulong param_2)

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
    local_108 = &PTR_s__root__cargo_registry_src_index__00aeec80;
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
                      (uVar5,uVar2,&PTR_s__root__cargo_registry_src_index__00aeeba8);
          }
          *(undefined8 *)(lVar1 + uVar5 * 0x68) = 0;
        }
        else {
          if (uVar2 <= uVar5) {
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_bounds_check
                      (uVar5,uVar2,&PTR_s__root__cargo_registry_src_index__00aeebc0);
          }
          puVar12 = (uint *)(lVar1 + uVar5 * 0x68);
          if ((*puVar12 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
            core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00aeebd8);
          }
          *(ulong *)(puVar12 + 2) = uVar7;
          if (uVar13 <= uVar7) {
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_bounds_check
                      (uVar7,uVar13,&PTR_s__root__cargo_registry_src_index__00aeebf0);
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
                    (uVar7,uVar2,&PTR_s__root__cargo_registry_src_index__00aeec08);
        }
        puVar12 = (uint *)(lVar1 + uVar7 * 0x68);
        if ((*puVar12 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00aeec20);
        }
        *(ulong *)(puVar12 + 4) = uVar5;
        if (uVar13 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check
                    (uVar5,uVar13,&PTR_s__root__cargo_registry_src_index__00aeec38);
        }
        lVar11 = lVar15 + uVar5 * 0x48;
        *(undefined8 *)(lVar11 + 0x10) = 0;
        *(ulong *)(lVar11 + 0x18) = uVar7;
      }
      else {
        if (uVar13 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check
                    (uVar5,uVar13,&PTR_s__root__cargo_registry_src_index__00aeec50);
        }
        lVar11 = lVar15 + uVar5 * 0x48;
        *(undefined8 *)(lVar11 + 0x10) = 1;
        *(ulong *)(lVar11 + 0x18) = uVar7;
        if (uVar13 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check
                    (uVar7,uVar13,&PTR_s__root__cargo_registry_src_index__00aeec68);
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
LAB_008eec00:
                    /* try { // try from 008eec00 to 008eec0f has its CatchHandler @ 008eec14 */
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check(uVar5,uVar13,local_108);
        }
        uVar7 = *(ulong *)(puVar10 + 4);
        uVar3 = *(ulong *)(puVar10 + 6);
        uVar5 = *(ulong *)(puVar10 + 2);
        if ((*puVar10 & 1) == 0) {
          if (uVar2 <= uVar5) {
            local_108 = &PTR_s__root__cargo_registry_src_index__00aeec98;
            uVar13 = uVar2;
            goto LAB_008eec00;
          }
          plVar9 = (long *)(lVar1 + uVar5 * 0x68);
          if (*plVar9 != 1) {
            ppuVar6 = &PTR_s__root__cargo_registry_src_index__00aeecb0;
            goto LAB_008eeb34;
          }
          plVar9[1] = uVar14;
        }
        else {
          if (uVar13 <= uVar5) {
            local_108 = &PTR_s__root__cargo_registry_src_index__00aeecc8;
            goto LAB_008eec00;
          }
          lVar11 = lVar15 + uVar5 * 0x48;
          *(undefined8 *)(lVar11 + 0x10) = 1;
          *(ulong *)(lVar11 + 0x18) = uVar14;
        }
        uVar5 = uVar3;
        if ((uVar7 & 1) == 0) {
          if (uVar2 <= uVar3) {
            local_108 = &PTR_s__root__cargo_registry_src_index__00aeece0;
            uVar13 = uVar2;
            goto LAB_008eec00;
          }
          plVar9 = (long *)(lVar1 + uVar3 * 0x68);
          if (*plVar9 != 1) {
            ppuVar6 = &PTR_s__root__cargo_registry_src_index__00aeecf8;
LAB_008eeb34:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 008eeb34 to 008eeb37 has its CatchHandler @ 008eec14 */
            core::option::unwrap_failed(ppuVar6);
          }
          plVar9[2] = uVar14;
        }
        else {
          if (uVar13 <= uVar3) {
            local_108 = &PTR_s__root__cargo_registry_src_index__00aeed10;
            goto LAB_008eec00;
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
            (param_2,uVar13,&PTR_s__root__cargo_registry_src_index__00aeeb90);
}


// ===== 008eec3c  FUN_008eec3c =====

void FUN_008eec3c(undefined8 *param_1)

{
  ulong uVar1;
  undefined4 *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  
  lVar9 = param_1[5];
  param_1[5] = 0;
  lVar5 = param_1[4];
  for (; lVar9 != 0; lVar9 = lVar9 + -1) {
    if (*(long *)(lVar5 + 0x40) != 0) {
                    /* try { // try from 008eec9c to 008eeca3 has its CatchHandler @ 008eeda0 */
      (**(code **)(*(long *)(lVar5 + 0x40) + 0x20))
                (lVar5 + 0x58,*(undefined8 *)(lVar5 + 0x48),*(undefined8 *)(lVar5 + 0x50));
    }
                    /* try { // try from 008eec78 to 008eec7f has its CatchHandler @ 008eedf0 */
    (**(code **)(*(long *)(lVar5 + 0x18) + 0x20))
              (lVar5 + 0x30,*(undefined8 *)(lVar5 + 0x20),*(undefined8 *)(lVar5 + 0x28));
    lVar5 = lVar5 + 0x68;
  }
  lVar9 = param_1[8];
  param_1[8] = 0;
  lVar9 = lVar9 + 1;
  lVar5 = param_1[7] + 0x38;
  while (lVar9 = lVar9 + -1, lVar9 != 0) {
                    /* try { // try from 008eecd0 to 008eecd3 has its CatchHandler @ 008eedc0 */
    (**(code **)(*(long *)(lVar5 + -0x18) + 0x20))
              (lVar5,*(undefined8 *)(lVar5 + -0x10),*(undefined8 *)(lVar5 + -8));
    lVar5 = lVar5 + 0x48;
  }
  lVar9 = param_1[10];
  *param_1 = 0;
  if (lVar9 == 0) {
    return;
  }
  puVar2 = (undefined4 *)param_1[9];
  uVar3 = lVar9 * 4 - 4;
  puVar6 = puVar2;
  if (0xb < uVar3) {
    uVar1 = (uVar3 >> 2) + 1;
    if (uVar3 < 0x3c) {
      uVar4 = 0;
    }
    else {
      uVar4 = uVar1 & 0x7ffffffffffffff0;
      uVar3 = uVar1 & 0x7ffffffffffffff0;
      puVar8 = (undefined8 *)(puVar2 + 8);
      do {
        uVar3 = uVar3 - 0x10;
        puVar8[-3] = 0xffff0000ffff;
        puVar8[-4] = 0xffff0000ffff;
        puVar8[-1] = 0xffff0000ffff;
        puVar8[-2] = 0xffff0000ffff;
        puVar8[1] = 0xffff0000ffff;
        *puVar8 = 0xffff0000ffff;
        puVar8[3] = 0xffff0000ffff;
        puVar8[2] = 0xffff0000ffff;
        puVar8 = puVar8 + 8;
      } while (uVar3 != 0);
      if (uVar1 == uVar4) {
        return;
      }
      if ((uVar1 & 0xc) == 0) {
        puVar6 = puVar2 + uVar4;
        goto LAB_008eed70;
      }
    }
    uVar3 = uVar1 & 0x7ffffffffffffffc;
    puVar6 = puVar2 + uVar3;
    lVar5 = uVar4 - uVar3;
    puVar8 = (undefined8 *)(puVar2 + uVar4);
    do {
      lVar5 = lVar5 + 4;
      puVar8[1] = 0xffff0000ffff;
      *puVar8 = 0xffff0000ffff;
      puVar8 = puVar8 + 2;
    } while (lVar5 != 0);
    if (uVar1 == uVar3) {
      return;
    }
  }
LAB_008eed70:
  do {
    puVar7 = puVar6 + 1;
    *puVar6 = 0xffff;
    puVar6 = puVar7;
  } while (puVar7 != puVar2 + lVar9);
  return;
}


// ===== 008eee1c  FUN_008eee1c =====

bool FUN_008eee1c(long param_1,ulong param_2)

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
  
  if (0x8000 < param_2) goto LAB_008eeff4;
  __ptr = *(short **)(param_1 + 0x48);
  uVar1 = *(ulong *)(param_1 + 0x50);
  uVar15 = 0;
  lVar14 = uVar1 << 2;
  if (uVar1 == 0) {
LAB_008eee94:
    if (param_2 != 0) goto LAB_008eee98;
LAB_008eeee4:
    uVar8 = 0;
    puVar4 = (undefined4 *)0x2;
  }
  else {
    puVar5 = (ushort *)(__ptr + 1);
    do {
      if ((puVar5[-1] != 0xffff) &&
         (((int)uVar15 - (uint)(*puVar5 & *(ushort *)(param_1 + 0x58)) &
          (uint)*(ushort *)(param_1 + 0x58)) == 0)) goto LAB_008eee94;
      lVar14 = lVar14 + -4;
      puVar5 = puVar5 + 2;
      uVar15 = uVar15 + 1;
    } while (lVar14 != 0);
    uVar15 = 0;
    if (param_2 == 0) goto LAB_008eeee4;
LAB_008eee98:
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
        if (uVar8 == uVar10) goto LAB_008eef34;
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
LAB_008eef34:
    *puVar7 = 0xffff;
    uVar8 = param_2;
  }
  uVar3 = (int)param_2 - 1;
  *(undefined4 **)(param_1 + 0x48) = puVar4;
  *(ulong *)(param_1 + 0x50) = uVar8;
  *(short *)(param_1 + 0x58) = (short)uVar3;
  if (uVar1 < uVar15) {
                    /* try { // try from 008ef0bc to 008ef0df has its CatchHandler @ 008ef0f8 */
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (uVar15,uVar1,uVar1,&PTR_s__root__cargo_registry_src_index__00aeed28);
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
LAB_008ef0dc:
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(local_60,lStack_58);
    }
    FUN_008f63dc(&local_68,lVar14,*(undefined8 *)(param_1 + 0x20),uVar8 + uVar15,8,0x68);
    if (local_68 == 1) goto LAB_008ef0dc;
    *(ulong *)(param_1 + 0x18) = uVar8 + uVar15;
    *(undefined8 *)(param_1 + 0x20) = local_60;
  }
  if (uVar1 != 0) {
    free(__ptr);
  }
LAB_008eeff4:
  return 0x8000 < param_2;
}


// ===== 008ef118  FUN_008ef118 =====

long FUN_008ef118(undefined8 *param_1,long *param_2)

{
  ushort *puVar1;
  ulong uVar2;
  char cVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 auStack_b8 [2];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long local_90;
  long lStack_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ushort local_48;
  undefined6 uStack_46;
  
  plVar11 = (long *)*param_1;
  uVar14 = param_1[2];
  lVar13 = param_1[1];
  auStack_b8[0] = param_1[4];
  uVar15 = param_1[3];
  uVar10 = plVar11[5];
  if (uVar10 >> 0xf != 0) {
                    /* try { // try from 008ef158 to 008ef163 has its CatchHandler @ 008ef30c */
    (**(code **)(*param_2 + 0x20))(param_2 + 3,param_2[1],param_2[2]);
    if (lVar13 != 0) {
      (**(code **)(lVar13 + 0x20))(auStack_b8,uVar14,uVar15);
    }
    return 0;
  }
  uStack_50 = param_1[4];
  local_58 = param_1[3];
  uStack_60 = param_1[2];
  local_68 = param_1[1];
  lStack_70 = param_2[4];
  uVar4 = *(ushort *)(param_1 + 6);
  uVar12 = param_1[5];
  cVar3 = *(char *)((long)param_1 + 0x32);
  lStack_88 = param_2[1];
  local_90 = *param_2;
  local_78 = param_2[3];
  lStack_80 = param_2[2];
  local_a8 = 0;
  local_48 = uVar4;
  if (uVar10 == plVar11[3]) {
                    /* try { // try from 008ef1e0 to 008ef1e7 has its CatchHandler @ 008ef2f8 */
    <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<http[b87e90c26fe47eb4]::header::map::Bucket<http[b87e90c26fe47eb4]::header::value::HeaderValue>>>
    ::grow_one(plVar11 + 3);
  }
  puVar8 = (undefined8 *)(plVar11[4] + uVar10 * 0x68);
  uVar7 = 0;
  uVar9 = uVar10 & 0xffffffff;
  puVar8[3] = local_90;
  puVar8[2] = uStack_98;
  puVar8[5] = lStack_80;
  puVar8[4] = lStack_88;
  puVar8[1] = uStack_a0;
  *puVar8 = local_a8;
  puVar8[0xc] = CONCAT62(uStack_46,local_48);
  puVar8[9] = uStack_60;
  puVar8[8] = local_68;
  puVar8[0xb] = uStack_50;
  puVar8[10] = local_58;
  puVar8[7] = lStack_70;
  puVar8[6] = local_78;
  lVar13 = plVar11[9];
  uVar2 = plVar11[10];
  plVar11[5] = uVar10 + 1;
  while( true ) {
    if ((uVar2 <= uVar12) && (uVar12 = 0, uVar2 == 0)) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    puVar1 = (ushort *)(lVar13 + uVar12 * 4);
    uVar5 = *puVar1;
    if (uVar5 == 0xffff) break;
    uVar6 = puVar1[1];
    *puVar1 = (ushort)uVar9;
    uVar7 = uVar7 + 1;
    puVar1[1] = uVar4;
    uVar12 = uVar12 + 1;
    uVar9 = (ulong)(uint)uVar5;
    uVar4 = uVar6;
  }
  *puVar1 = (ushort)uVar9;
  if (0x7f < uVar7) {
    cVar3 = '\x01';
  }
  puVar1[1] = uVar4;
  if ((cVar3 == '\x01') && (*plVar11 == 0)) {
    *plVar11 = 1;
  }
  if ((ulong)plVar11[5] <= uVar10) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check
              (uVar10,plVar11[5],&PTR_s__root__cargo_registry_src_index__00aeeda0);
  }
  return plVar11[4] + uVar10 * 0x68 + 0x18;
}


// ===== 008ef338  FUN_008ef338 =====

void FUN_008ef338(ulong *param_1,uint *param_2,ulong param_3)

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
    if (uVar4 != 0) goto LAB_008ef470;
LAB_008ef394:
    if (param_3 < 4) goto LAB_008ef4c8;
LAB_008ef39c:
    uVar4 = (ulong)*(uint *)((long)param_2 + uVar3);
    uVar7 = 4;
    if (param_3 < 6) goto LAB_008ef4f4;
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
      if (1 < uVar7) goto LAB_008ef3c8;
    }
    else {
      uVar6 = (ulong)*param_2;
      uVar9 = 4;
      if (5 < uVar7) {
LAB_008ef3c8:
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
    if (uVar4 <= uVar3) goto LAB_008ef394;
LAB_008ef470:
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
    if (3 < param_3) goto LAB_008ef39c;
LAB_008ef4c8:
    uVar7 = 0;
    uVar4 = 0;
    if (param_3 < 2) goto LAB_008ef4f4;
  }
  lVar10 = uVar7 << 3;
  lVar11 = uVar7 + uVar3;
  uVar7 = uVar7 | 2;
  uVar4 = (ulong)*(ushort *)((long)param_2 + lVar11) << lVar10 | uVar4;
LAB_008ef4f4:
  if (uVar7 < param_3) {
    param_1[7] = (ulong)*(byte *)((long)param_2 + uVar7 + uVar3) << (uVar7 << 3) | uVar4;
    param_1[8] = param_3;
    return;
  }
  param_1[7] = uVar4;
  param_1[8] = param_3;
  return;
}


// ===== 008ef520  FUN_008ef520 =====

uint * FUN_008ef520(long *param_1)

{
  ulong uVar1;
  uint *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *param_1;
  if (lVar5 == 0) {
    uVar1 = param_1[5];
    uVar3 = *(ulong *)(param_1[4] + 0x28);
    if (uVar3 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (uVar1,uVar3,&PTR_s__root__cargo_registry_src_index__00aeedd0);
    }
    puVar2 = (uint *)(*(long *)(param_1[4] + 0x20) + uVar1 * 0x68);
    if (param_1[2] != 0) {
      if ((*puVar2 & 1) != 0) {
        lVar5 = *(long *)(puVar2 + 2);
        *param_1 = 1;
        param_1[1] = lVar5;
        return puVar2 + 6;
      }
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("internal error: entered unreachable code",0x28,
                 &PTR_s__root__cargo_registry_src_index__00aeede8);
    }
    *param_1 = 2;
    param_1[2] = 2;
    return puVar2 + 6;
  }
  if (lVar5 == 2) {
    return (uint *)0x0;
  }
  uVar3 = param_1[1];
  uVar1 = *(ulong *)(param_1[4] + 0x40);
  if (uVar3 < uVar1) {
    lVar4 = *(long *)(param_1[4] + 0x38) + uVar3 * 0x48;
    if (((param_1[2] != 2) && (lVar5 == param_1[2])) && (uVar3 == param_1[3])) {
      *param_1 = 2;
      param_1[2] = 2;
      return (uint *)(lVar4 + 0x20);
    }
    if ((*(uint *)(lVar4 + 0x10) & 1) != 0) {
      lVar5 = *(long *)(lVar4 + 0x18);
      *param_1 = 1;
      param_1[1] = lVar5;
      return (uint *)(lVar4 + 0x20);
    }
    *param_1 = 2;
    return (uint *)(lVar4 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_bounds_check(uVar3,uVar1,&PTR_s__root__cargo_registry_src_index__00aeee00);
}


// ===== 008ef664  <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(alloc[c1f8e832b0d782c7]::string::String,())>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<alloc[c1f8e832b0d782c7]::string::String, =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(alloc[c1f8e832b0d782c7]::string::String,
   ())>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<alloc[c1f8e832b0d782c7]::string::String,
   (), std[17aff9129faa4dc5]::hash::random::RandomState>::{closure#0}> */

undefined8
<hashbrown[32fc5d502e7f9af5]::raw::RawTable<(alloc[c1f8e832b0d782c7]::string::String,())>>::
reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<alloc[c1f8e832b0d782c7]::string::
String_(void)

{
  char cVar1;
  undefined1 auVar2 [16];
  byte bVar3;
  bool bVar4;
  long *in_x0;
  long lVar5;
  ulong in_x1;
  ulong *__src;
  undefined4 in_w3;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  ulong uVar20;
  
  uVar8 = in_x0[3];
  uVar20 = uVar8 + in_x1;
  if (!CARRY8(uVar8,in_x1)) {
    uVar13 = in_x0[1];
    uVar14 = uVar13 + 1;
    uVar10 = uVar14 >> 3;
    uVar17 = uVar13;
    if (7 < uVar13) {
      uVar17 = uVar10 * 7;
    }
    if (uVar20 <= uVar17 >> 1) {
      if (uVar14 != 0) {
        __src = (ulong *)*in_x0;
        puVar11 = __src;
        if ((uVar14 & 7) != 0) {
          uVar10 = uVar10 + 1;
        }
        do {
          uVar10 = uVar10 - 1;
          uVar20 = NEON_cmlt(*puVar11,0,1);
          *puVar11 = uVar20 | 0x8080808080808080;
          puVar11 = puVar11 + 1;
        } while (uVar10 != 0);
        if (uVar14 < 8) {
          memmove(__src + 1,__src,uVar13 + 1);
        }
        else {
          *(ulong *)((long)__src + uVar14) = *__src;
        }
        uVar20 = 0;
        do {
          if (*(char *)(*in_x0 + uVar20) == -0x80) {
            puVar16 = (undefined8 *)(*in_x0 + (uVar20 + 1) * -0x18);
            while( true ) {
                    /* try { // try from 008ef754 to 008ef75b has its CatchHandler @ 008efbc0 */
              uVar14 = FUN_008f5e68();
              puVar6 = (undefined8 *)*in_x0;
              uVar8 = in_x0[1];
              uVar10 = uVar8 & uVar14;
              uVar17 = NEON_cmlt(*(undefined8 *)((long)puVar6 + uVar10),0,1);
              if (uVar17 == 0) {
                lVar5 = 8;
                uVar18 = uVar8 & uVar14;
                do {
                  uVar18 = uVar18 + lVar5;
                  lVar5 = lVar5 + 8;
                  uVar18 = uVar18 & uVar8;
                  uVar17 = NEON_cmlt(*(undefined8 *)((long)puVar6 + uVar18),0,1);
                } while (uVar17 == 0);
              }
              else {
                uVar18 = uVar8 & uVar14;
              }
              uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
              uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
              uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
              uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
              uVar17 = uVar18 + ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3) & uVar8;
              bVar3 = (byte)(uVar14 >> 0x38);
              if (*(char *)((long)puVar6 + uVar17) < '\0') {
                uVar14 = uVar17 - uVar10 ^ uVar20 - uVar10;
              }
              else {
                uVar14 = NEON_cmlt(*puVar6,0,1);
                uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
                uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
                uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
                uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
                uVar17 = (ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3;
                uVar14 = uVar17 - uVar10 ^ uVar20 - uVar10;
              }
              if ((uVar14 & uVar8) < 8) {
                *(byte *)((long)puVar6 + uVar20) = bVar3 >> 1;
                *(byte *)(*in_x0 + (uVar8 & uVar20 - 8) + 8) = bVar3 >> 1;
                goto LAB_008ef880;
              }
              cVar1 = *(char *)((long)puVar6 + uVar17);
              *(byte *)((long)puVar6 + uVar17) = bVar3 >> 1;
              *(byte *)(*in_x0 + (uVar17 - 8 & uVar8) + 8) = bVar3 >> 1;
              if (cVar1 == -1) break;
              uVar9 = *puVar16;
              *puVar16 = puVar6[uVar17 * -3 + -3];
              puVar6[uVar17 * -3 + -3] = uVar9;
              uVar9 = puVar16[1];
              puVar16[1] = puVar6[uVar17 * -3 + -2];
              puVar6[uVar17 * -3 + -2] = uVar9;
              uVar9 = puVar16[2];
              puVar16[2] = puVar6[uVar17 * -3 + -1];
              puVar6[uVar17 * -3 + -1] = uVar9;
            }
            uVar8 = in_x0[1];
            *(undefined1 *)(*in_x0 + uVar20) = 0xff;
            *(undefined1 *)(*in_x0 + (uVar8 & uVar20 - 8) + 8) = 0xff;
            uVar19 = puVar16[1];
            uVar9 = *puVar16;
            puVar6[uVar17 * -3 + -1] = puVar16[2];
            puVar6[uVar17 * -3 + -2] = uVar19;
            puVar6[uVar17 * -3 + -3] = uVar9;
          }
LAB_008ef880:
          bVar4 = uVar20 != uVar13;
          uVar20 = uVar20 + 1;
        } while (bVar4);
        uVar14 = in_x0[1];
        uVar8 = in_x0[3];
        if (7 < uVar14) {
          uVar14 = (uVar14 + 1 >> 3) * 7;
        }
      }
      in_x0[2] = uVar14 - uVar8;
      return 0xffffffffffffffff;
    }
    if (uVar20 < uVar17 + 1) {
      uVar20 = uVar17 + 1;
    }
    if (uVar20 < 0xf) {
      uVar8 = 4;
      if (3 < uVar20) {
        uVar8 = (uVar20 & 8) + 8;
      }
    }
    else {
      if (uVar20 >> 0x3d != 0) goto LAB_008efb00;
      uVar8 = (0xffffffffffffffffU >> (LZCOUNT((uVar20 * 8) / 7 - 1) & 0x3fU)) + 1;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar8;
    if (SUB168(auVar2 * ZEXT816(0x18),8) == 0) {
      uVar14 = uVar8 * 0x18;
      uVar20 = uVar14 + uVar8 + 8;
      if ((!CARRY8(uVar14,uVar8 + 8)) && (uVar20 < 0x7ffffffffffffff9)) {
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        lVar5 = FUN_004b25a4(uVar20,8);
        if (lVar5 == 0) {
          uVar9 = <hashbrown::raw::hashbrown::raw::Fallibility>::alloc_err(in_w3,8,uVar20);
          return uVar9;
        }
        puVar16 = (undefined8 *)(lVar5 + uVar14);
        memset(puVar16,0xff,uVar8 + 8);
        uVar14 = uVar8 - 1;
        lVar5 = in_x0[3];
        uVar20 = uVar14;
        if (8 < uVar8) {
          uVar20 = (uVar8 >> 3) * 7;
        }
        if (lVar5 == 0) {
          lVar7 = *in_x0;
          lVar5 = in_x0[1];
          *in_x0 = (long)puVar16;
          in_x0[1] = uVar14;
          in_x0[2] = uVar20;
          in_x0[3] = 0;
        }
        else {
          puVar6 = (undefined8 *)*in_x0;
          lVar15 = 0;
          uVar8 = NEON_cmge(*puVar6,0,1);
          uVar8 = uVar8 & 0x8080808080808080;
          do {
            for (; uVar8 == 0; uVar8 = uVar8 & 0x8080808080808080) {
              puVar6 = puVar6 + 1;
              lVar15 = lVar15 + 8;
              uVar8 = NEON_cmge(*puVar6,0,1);
            }
            uVar10 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
            uVar17 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
                    /* try { // try from 008efa44 to 008efa4b has its CatchHandler @ 008efbac */
            uVar13 = FUN_008f5e68();
            uVar10 = uVar13 & uVar14;
            uVar18 = NEON_cmlt(*(undefined8 *)((long)puVar16 + uVar10),0,1);
            if (uVar18 == 0) {
              lVar7 = 8;
              do {
                uVar10 = uVar10 + lVar7;
                lVar7 = lVar7 + 8;
                uVar10 = uVar10 & uVar14;
                uVar18 = NEON_cmlt(*(undefined8 *)((long)puVar16 + uVar10),0,1);
              } while (uVar18 == 0);
            }
            uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
            uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
            uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
            uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
            uVar10 = uVar10 + ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3) & uVar14;
            if (-1 < *(char *)((long)puVar16 + uVar10)) {
              uVar10 = NEON_cmlt(*puVar16,0,1);
              uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
              uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
              uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
              uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
              uVar10 = (ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3;
            }
            lVar7 = *in_x0;
            lVar12 = lVar7 + (lVar15 + ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3)) *
                             -0x18;
            lVar5 = lVar5 + -1;
            bVar3 = (byte)(uVar13 >> 0x38);
            *(byte *)((long)puVar16 + uVar10) = bVar3 >> 1;
            *(byte *)((long)puVar16 + (uVar10 - 8 & uVar14) + 8) = bVar3 >> 1;
            uVar19 = *(undefined8 *)(lVar12 + -0x18);
            uVar9 = *(undefined8 *)(lVar12 + -8);
            uVar8 = uVar8 - 1 & uVar8;
            puVar16[uVar10 * -3 + -2] = *(undefined8 *)(lVar12 + -0x10);
            puVar16[uVar10 * -3 + -3] = uVar19;
            puVar16[uVar10 * -3 + -1] = uVar9;
          } while (lVar5 != 0);
          lVar5 = in_x0[1];
          *in_x0 = (long)puVar16;
          in_x0[1] = uVar14;
          in_x0[2] = uVar20 - in_x0[3];
          in_x0[3] = in_x0[3];
        }
        if (lVar5 == 0) {
          return 0xffffffffffffffff;
        }
        lVar15 = lVar5 * 0x18 + 0x18;
        if (lVar5 + lVar15 == -9) {
          return 0xffffffffffffffff;
        }
        free((void *)(lVar7 - lVar15));
        return 0xffffffffffffffff;
      }
    }
  }
LAB_008efb00:
  uVar9 = <hashbrown::raw::hashbrown::raw::Fallibility>::capacity_overflow(in_w3);
  return uVar9;
}


// ===== 008efbd8  FUN_008efbd8 =====

void FUN_008efbd8(long param_1)

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


// ===== 008efc14  FUN_008efc14 =====

void FUN_008efc14(undefined8 *param_1)

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


// ===== 008efd4c  FUN_008efd4c =====

void FUN_008efd4c(long *param_1)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  
  __ptr = (void *)param_1[1];
  lVar2 = param_1[2] + 1;
  lVar1 = (long)__ptr + 0x38;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 008efd88 to 008efd8b has its CatchHandler @ 008efdd0 */
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


// ===== 008efe20  FUN_008efe20 =====

void FUN_008efe20(long *param_1)

{
                    /* try { // try from 008efe30 to 008efe33 has its CatchHandler @ 008efe64 */
  FUN_008f0b4c();
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 008efe8c  FUN_008efe8c =====

void FUN_008efe8c(long *param_1)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  
  __ptr = (void *)param_1[1];
  lVar2 = param_1[2] + 1;
  lVar1 = (long)__ptr + 0x18;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 008efec8 to 008efecb has its CatchHandler @ 008eff14 */
    (**(code **)(*(long *)(lVar1 + -0x18) + 0x20))
              (lVar1,*(undefined8 *)(lVar1 + -0x10),*(undefined8 *)(lVar1 + -8));
    lVar1 = lVar1 + 0x28;
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 008eff68  FUN_008eff68 =====

void FUN_008eff68(long param_1)

{
  if (*(long *)(param_1 + 0x40) != 0) {
                    /* try { // try from 008eff88 to 008eff8f has its CatchHandler @ 008effac */
    (**(code **)(*(long *)(param_1 + 0x40) + 0x20))
              (param_1 + 0x58,*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
  }
                    /* WARNING: Could not recover jumptable at 0x008effa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x20))
            (param_1 + 0x30,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}


// ===== 008effd0  FUN_008effd0 =====

void FUN_008effd0(long param_1)

{
  if (*(long *)(param_1 + 0x38) != 0) {
                    /* try { // try from 008efff0 to 008efff7 has its CatchHandler @ 008f0014 */
    (**(code **)(*(long *)(param_1 + 0x38) + 0x20))
              (param_1 + 0x50,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
  }
                    /* WARNING: Could not recover jumptable at 0x008f0010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x20))
            (param_1 + 0x30,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}


// ===== 008f0038  FUN_008f0038 =====

void FUN_008f0038(long *param_1,long *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined5 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long local_120;
  long *plStack_118;
  long local_110;
  undefined4 uStack_108;
  undefined3 uStack_104;
  long local_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long local_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 local_c0;
  long lStack_b8;
  undefined4 local_a8;
  undefined3 uStack_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined4 local_5f;
  undefined3 uStack_5b;
  
  puVar6 = (undefined8 *)FUN_008ef520();
  if (puVar6 == (undefined8 *)0x0) {
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = 8;
  }
  else {
    (**(code **)*puVar6)(&local_e0,puVar6 + 3,puVar6[1],puVar6[2]);
    uVar2 = *(undefined1 *)(puVar6 + 4);
    uStack_104 = (undefined3)((ulong)local_c0 >> 0x28);
    lStack_f8 = lStack_d8;
    local_100 = local_e0;
    lStack_e8 = lStack_c8;
    lStack_f0 = lStack_d0;
    uStack_108 = local_c0._1_4_;
    uVar4 = (ulong)local_c0 >> 0x20;
    uVar3 = CONCAT41(local_c0._1_4_,uVar2);
    local_c0 = CONCAT44((int)uVar4,(int)uVar3);
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    plVar7 = (long *)FUN_004b25a4(0xa0,8);
    if (plVar7 == (long *)0x0) {
                    /* try { // try from 008f0214 to 008f021f has its CatchHandler @ 008f0224 */
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(8,0xa0);
    }
    *(undefined1 *)(plVar7 + 4) = uVar2;
    plVar7[1] = lStack_f8;
    *plVar7 = local_100;
    plVar7[3] = lStack_e8;
    plVar7[2] = lStack_f0;
    lStack_d8 = param_2[1];
    local_e0 = *param_2;
    lStack_c8 = param_2[3];
    lStack_d0 = param_2[2];
    *(undefined4 *)((long)plVar7 + 0x21) = uStack_108;
    *(uint *)((long)plVar7 + 0x24) = CONCAT31(uStack_104,uStack_108._3_1_);
    lStack_b8 = param_2[5];
    local_c0 = param_2[4];
    local_120 = 4;
    local_110 = 1;
    lVar8 = 0;
    plStack_118 = plVar7;
                    /* try { // try from 008f0148 to 008f016f has its CatchHandler @ 008f0268 */
    while (lVar5 = local_110, puVar6 = (undefined8 *)FUN_008ef520(&local_e0),
          puVar6 != (undefined8 *)0x0) {
      (**(code **)*puVar6)(&local_80,puVar6 + 3,puVar6[1],puVar6[2]);
      uVar2 = *(undefined1 *)(puVar6 + 4);
      uStack_98 = uStack_78;
      local_a0 = local_80;
      uStack_88 = uStack_68;
      uStack_90 = uStack_70;
      local_a8 = local_5f;
      uStack_a4 = uStack_5b;
      local_60 = uVar2;
      if (lVar5 == local_120) {
        uVar1 = 1;
        if (local_e0 != 2) {
          uVar1 = 2;
        }
                    /* try { // try from 008f01bc to 008f01cf has its CatchHandler @ 008f0244 */
        FUN_008f5dd0(&local_120,lVar5,uVar1,8,0x28);
        plVar7 = plStack_118;
      }
      *(undefined1 *)((long)plVar7 + lVar8 + 0x48) = uVar2;
      local_110 = lVar5 + 1;
      *(undefined8 *)((long)plVar7 + lVar8 + 0x30) = uStack_98;
      *(undefined8 *)((long)plVar7 + lVar8 + 0x28) = local_a0;
      *(undefined8 *)((long)plVar7 + lVar8 + 0x40) = uStack_88;
      *(undefined8 *)((long)plVar7 + lVar8 + 0x38) = uStack_90;
      *(uint *)((long)plVar7 + lVar8 + 0x4c) = CONCAT31(uStack_a4,local_a8._3_1_);
      *(undefined4 *)((long)plVar7 + lVar8 + 0x49) = local_a8;
      lVar8 = lVar8 + 0x28;
    }
    param_1[1] = (long)plStack_118;
    *param_1 = local_120;
    param_1[2] = local_110;
  }
  return;
}


// ===== 008f0280  FUN_008f0280 =====

void FUN_008f0280(long *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined1 (*pauVar2) [16];
  long lVar3;
  undefined1 auVar4 [16];
  long local_a8;
  undefined1 (*pauStack_a0) [16];
  long local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  auVar4 = FUN_008f03cc();
  if (auVar4._0_8_ == 0) {
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = 8;
    return;
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  pauVar2 = (undefined1 (*) [16])FUN_004b25a4(0x40,8);
  if (pauVar2 != (undefined1 (*) [16])0x0) {
    uStack_68 = param_2[5];
    local_70 = param_2[4];
    uStack_58 = param_2[7];
    uStack_60 = param_2[6];
    local_50 = param_2[8];
    *pauVar2 = auVar4;
    uStack_88 = param_2[1];
    local_90 = *param_2;
    uStack_78 = param_2[3];
    uStack_80 = param_2[2];
    local_a8 = 4;
    local_98 = 1;
    lVar3 = 0;
    pauStack_a0 = pauVar2;
                    /* try { // try from 008f0310 to 008f0347 has its CatchHandler @ 008f03a8 */
    while (lVar1 = local_98, auVar4 = FUN_008f03cc(&local_90), auVar4._0_8_ != 0) {
      if (lVar1 == local_a8) {
        FUN_008f5dd0(&local_a8,lVar1,1,8,0x10);
        pauVar2 = pauStack_a0;
      }
      local_98 = lVar1 + 1;
      *(undefined1 (*) [16])(pauVar2[1] + lVar3) = auVar4;
      lVar3 = lVar3 + 0x10;
    }
    param_1[1] = (long)pauStack_a0;
    *param_1 = local_a8;
    param_1[2] = local_98;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(8,0x40);
}


// ===== 008f03cc  FUN_008f03cc =====

undefined8 FUN_008f03cc(ulong *param_1)

{
  ulong uVar1;
  char cVar2;
  undefined1 auVar3 [16];
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong __n;
  ulong uVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  
  if ((*(byte *)((long)param_1 + 0x41) & 1) != 0) {
    return 0;
  }
  uVar1 = param_1[2];
  uVar8 = param_1[3];
  uVar9 = param_1[5];
  if ((uVar9 <= uVar8) && (uVar10 = param_1[4], uVar10 <= uVar9)) {
    __n = (ulong)(byte)param_1[7];
    cVar2 = *(char *)((long)param_1 + __n + 0x2f);
    if (__n < 5) {
      do {
        if (uVar9 - uVar10 < 0x10) {
          uVar6 = 0;
          if (uVar9 == uVar10) goto LAB_008f058c;
          while (*(char *)(uVar1 + uVar10 + uVar6) != cVar2) {
            uVar6 = uVar6 + 1;
            if (uVar9 - uVar10 == uVar6) goto LAB_008f058c;
          }
        }
        else {
          auVar11 = core::slice::memchr::memchr_aligned(cVar2,uVar1 + uVar10,uVar9 - uVar10);
          uVar6 = auVar11._8_8_;
          if (auVar11._0_8_ != 1) goto LAB_008f058c;
        }
        uVar10 = uVar10 + uVar6 + 1;
        param_1[4] = uVar10;
        if (((__n <= uVar10) && (uVar10 <= uVar8)) &&
           (iVar4 = memcmp((void *)(uVar1 + (uVar10 - __n)),param_1 + 6,__n), iVar4 == 0)) {
          uVar8 = *param_1;
          *param_1 = uVar10;
          lVar7 = (uVar10 - __n) - uVar8;
          goto LAB_008f05cc;
        }
      } while (uVar10 <= uVar9);
    }
    else {
      do {
        if (uVar9 - uVar10 < 0x10) {
          uVar6 = 0;
          if (uVar9 == uVar10) {
            auVar11 = ZEXT816(0);
          }
          else {
            do {
              if (*(char *)(uVar1 + uVar10 + uVar6) == cVar2) {
                auVar11._8_8_ = uVar6;
                auVar11._0_8_ = 1;
                goto LAB_008f0550;
              }
              uVar6 = uVar6 + 1;
            } while (uVar9 - uVar10 != uVar6);
            auVar3._8_8_ = 0;
            auVar3._0_8_ = uVar9 - uVar10;
            auVar11 = auVar3 << 0x40;
          }
        }
        else {
          auVar11 = core::slice::memchr::memchr_aligned(cVar2,uVar1 + uVar10,uVar9 - uVar10);
        }
LAB_008f0550:
        if (auVar11._0_8_ != 1) goto LAB_008f058c;
        uVar10 = uVar10 + auVar11._8_8_ + 1;
        param_1[4] = uVar10;
        if ((__n <= uVar10) && (uVar10 <= uVar8)) {
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (0,__n,4,&PTR_s__nix_store_8006w282fgsx3273c878b_00aeee48);
        }
      } while (uVar10 <= uVar9);
    }
  }
LAB_008f0590:
  uVar8 = *param_1;
  *(undefined1 *)((long)param_1 + 0x41) = 1;
  lVar7 = param_1[1] - uVar8;
  if (((param_1[8] & 1) == 0) && (param_1[1] == uVar8)) {
    return 0;
  }
LAB_008f05cc:
  uVar5 = FUN_008f0c20(uVar1 + uVar8,lVar7);
  return uVar5;
LAB_008f058c:
  param_1[4] = uVar9;
  goto LAB_008f0590;
}


// ===== 008f05ec  FUN_008f05ec =====

void FUN_008f05ec(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_40 [16];
  long local_18;
  
  lVar1 = *(long *)(*param_1 + 8);
  lVar2 = *(long *)(*param_1 + 0x10);
  <core::fmt::[a]::core::fmt::Formatter>::debug_list(auStack_40,param_2);
  if (lVar2 != 0) {
    lVar2 = lVar2 * 0x28;
    do {
      local_18 = lVar1;
      <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry
                (auStack_40,&local_18,&DAT_00aef550);
      lVar2 = lVar2 + -0x28;
      lVar1 = lVar1 + 0x28;
    } while (lVar2 != 0);
  }
  <core::fmt::builders::[6]::core::fmt::builders::DebugList>::finish(auStack_40);
  return;
}


// ===== 008f0664  FUN_008f0664 =====

void FUN_008f0664(ulong *param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong local_a8;
  undefined8 *puStack_a0;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar5 = *(ulong *)(param_2 + 0x10);
  uVar1 = uVar5 * 0x40;
  if (uVar5 >> 0x3a != 0 || 0x7ffffffffffffff8 < uVar1) {
    uVar3 = 0;
LAB_008f06a0:
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar3,uVar1);
  }
  if (uVar1 == 0) {
    local_a8 = 0;
    puStack_a0 = (undefined8 *)&DAT_00000008;
  }
  else {
    puVar6 = *(undefined8 **)(param_2 + 8);
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar3 = 8;
    puStack_a0 = (undefined8 *)FUN_004b25a4(uVar1,8);
    if (puStack_a0 == (undefined8 *)0x0) goto LAB_008f06a0;
    local_a8 = uVar5;
    if (uVar5 != 0) {
      uVar4 = 0;
      puVar2 = puStack_a0;
      do {
        if (uVar1 == 0) break;
                    /* try { // try from 008f06f4 to 008f06ff has its CatchHandler @ 008f075c */
        (**(code **)puVar6[4])(&local_70,puVar6 + 7,puVar6[5],puVar6[6]);
        uVar7 = puVar6[1];
        uVar3 = *puVar6;
        uVar9 = puVar6[3];
        uVar8 = puVar6[2];
        uVar4 = uVar4 + 1;
        uVar1 = uVar1 - 0x40;
        puVar2[5] = uStack_68;
        puVar2[4] = local_70;
        puVar2[7] = uStack_58;
        puVar2[6] = uStack_60;
        puVar2[1] = uVar7;
        *puVar2 = uVar3;
        puVar2[3] = uVar9;
        puVar2[2] = uVar8;
        puVar2 = puVar2 + 8;
        puVar6 = puVar6 + 8;
      } while (uVar5 != uVar4);
    }
  }
  param_1[1] = (ulong)puStack_a0;
  *param_1 = local_a8;
  param_1[2] = uVar5;
  return;
}


// ===== 008f0778  FUN_008f0778 =====

void FUN_008f0778(ulong *param_1,long param_2)

{
  ulong *puVar1;
  undefined1 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  undefined1 auVar15 [16];
  ulong local_f8;
  ulong uStack_f0;
  ulong local_c0;
  undefined7 uStack_b8;
  undefined1 uStack_b1;
  undefined7 uStack_b0;
  undefined7 uStack_97;
  undefined1 uStack_90;
  ulong local_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  undefined1 uStack_68;
  undefined7 uStack_67;
  
  uVar10 = *(ulong *)(param_2 + 0x10);
  lVar7 = uVar10 * 0x60;
  if (uVar10 < 0x155555555555556) {
    if (lVar7 == 0) {
      local_f8 = 0;
      uStack_f0 = 8;
    }
    else {
      plVar11 = *(long **)(param_2 + 8);
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar8 = 8;
      uStack_f0 = FUN_004b25a4(lVar7,8);
      if (uStack_f0 == 0) goto LAB_008f07b8;
      local_f8 = uVar10;
      if (uVar10 != 0) {
        lVar12 = 0;
        uVar9 = 0;
        plVar14 = plVar11;
        do {
          if (lVar7 - lVar12 == 0) break;
          lVar5 = plVar14[0xb];
          if ((undefined8 *)plVar14[7] == (undefined8 *)0x0) {
            uVar13 = 0;
            uVar2 = *(undefined1 *)((long)plVar11 + lVar12 + 0x40);
          }
          else {
                    /* try { // try from 008f0878 to 008f0883 has its CatchHandler @ 008f092c */
            (**(code **)plVar14[7])
                      (&local_80,(long)plVar11 + lVar12 + 0x50,
                       *(undefined8 *)((long)plVar11 + lVar12 + 0x40),
                       *(undefined8 *)((long)plVar11 + lVar12 + 0x48));
            local_c0 = CONCAT17(uStack_70,uStack_77);
            uStack_b8 = uStack_6f;
            uStack_b1 = uStack_68;
            uStack_b0 = uStack_67;
            uVar13 = local_80;
            uVar2 = uStack_78;
          }
          uStack_97 = (undefined7)local_c0;
          uStack_90 = (undefined1)(local_c0 >> 0x38);
                    /* try { // try from 008f08d4 to 008f08df has its CatchHandler @ 008f0934 */
          auVar15 = (**(code **)plVar14[3])(&local_80,plVar14 + 6,plVar14[4],plVar14[5]);
          lVar6 = *plVar14;
          if (lVar6 == 1) {
            auVar15 = *(undefined1 (*) [16])((long)plVar11 + lVar12 + 8);
          }
          uVar4 = CONCAT71(uStack_b0,uStack_b1);
          uVar3 = CONCAT71(uStack_b8,uStack_90);
          uVar9 = uVar9 + 1;
          puVar1 = (ulong *)(uStack_f0 + lVar12);
          plVar14 = plVar14 + 0xc;
          lVar12 = lVar12 + 0x60;
          uStack_b8 = (undefined7)CONCAT71(uStack_77,uStack_78);
          uStack_b1 = (undefined1)((uint7)uStack_77 >> 0x30);
          local_c0 = local_80;
          uStack_b0 = (undefined7)CONCAT71(uStack_6f,uStack_70);
          *puVar1 = (ulong)(lVar6 == 1);
          *(undefined1 (*) [16])(puVar1 + 1) = auVar15;
          puVar1[4] = CONCAT71(uStack_77,uStack_78);
          puVar1[3] = local_80;
          puVar1[6] = CONCAT71(uStack_67,uStack_68);
          puVar1[5] = CONCAT71(uStack_6f,uStack_70);
          puVar1[8] = CONCAT71(uStack_97,uVar2);
          puVar1[7] = uVar13;
          puVar1[10] = uVar4;
          puVar1[9] = uVar3;
          *(short *)(puVar1 + 0xb) = (short)lVar5;
        } while (uVar10 != uVar9);
      }
    }
    param_1[1] = uStack_f0;
    *param_1 = local_f8;
    param_1[2] = uVar10;
    return;
  }
  uVar8 = 0;
LAB_008f07b8:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar8,lVar7);
}


// ===== 008f096c  FUN_008f096c =====

void FUN_008f096c(long *param_1)

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
                    /* try { // try from 008f0a00 to 008f0a07 has its CatchHandler @ 008f0a70 */
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


// ===== 008f0a90  FUN_008f0a90 =====

void FUN_008f0a90(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  for (lVar2 = *(long *)(param_1 + 0x10); lVar2 != 0; lVar2 = lVar2 + -1) {
    if (*(long *)(lVar1 + 0x40) != 0) {
                    /* try { // try from 008f0ae4 to 008f0aeb has its CatchHandler @ 008f0b00 */
      (**(code **)(*(long *)(lVar1 + 0x40) + 0x20))
                (lVar1 + 0x58,*(undefined8 *)(lVar1 + 0x48),*(undefined8 *)(lVar1 + 0x50));
    }
                    /* try { // try from 008f0ac0 to 008f0ac7 has its CatchHandler @ 008f0b20 */
    (**(code **)(*(long *)(lVar1 + 0x18) + 0x20))
              (lVar1 + 0x30,*(undefined8 *)(lVar1 + 0x20),*(undefined8 *)(lVar1 + 0x28));
    lVar1 = lVar1 + 0x68;
  }
  return;
}


// ===== 008f0b4c  FUN_008f0b4c =====

void FUN_008f0b4c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  for (lVar2 = *(long *)(param_1 + 0x10); lVar2 != 0; lVar2 = lVar2 + -1) {
    if (*(long *)(lVar1 + 0x38) != 0) {
                    /* try { // try from 008f0ba0 to 008f0ba7 has its CatchHandler @ 008f0bbc */
      (**(code **)(*(long *)(lVar1 + 0x38) + 0x20))
                (lVar1 + 0x50,*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x48));
    }
                    /* try { // try from 008f0b7c to 008f0b83 has its CatchHandler @ 008f0bdc */
    (**(code **)(*(long *)(lVar1 + 0x18) + 0x20))
              (lVar1 + 0x30,*(undefined8 *)(lVar1 + 0x20),*(undefined8 *)(lVar1 + 0x28));
    lVar1 = lVar1 + 0x60;
  }
  return;
}


// ===== 008f0c08  FUN_008f0c08 =====

void FUN_008f0c08(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 008f0c20  FUN_008f0c20 =====

undefined1  [16] FUN_008f0c20(byte *param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  pbVar5 = param_1 + param_2;
  pbVar8 = (byte *)0x0;
  pbVar6 = param_1;
  if (param_2 != 0) {
    do {
      pbVar7 = pbVar6 + 1;
      uVar10 = (uint)*pbVar6;
      uVar11 = (ulong)uVar10;
      if ((char)*pbVar6 < '\0') {
        if (uVar10 < 0xe0) {
          pbVar7 = pbVar6 + 2;
          uVar11 = (ulong)(pbVar6[1] & 0x3f | (uVar10 & 0x1f) << 6);
        }
        else {
          uVar4 = pbVar6[2] & 0x3f | (pbVar6[1] & 0x3f) << 6;
          if (uVar10 < 0xf0) {
            uVar11 = (ulong)(uVar4 | (uVar10 & 0x1f) << 0xc);
            pbVar7 = pbVar6 + 3;
          }
          else {
            uVar11 = (ulong)(pbVar6[3] & 0x3f | uVar4 << 6 | (uVar10 & 7) << 0x12);
            pbVar7 = pbVar6 + 4;
          }
        }
      }
      uVar10 = (uint)uVar11;
      pbVar9 = pbVar7 + ((long)pbVar8 - (long)pbVar6);
      if ((4 < uVar10 - 9) && (uVar10 != 0x20)) {
        if (uVar10 < 0x85) goto joined_r0x008f0d58;
        uVar4 = uVar10 >> 8;
        if (uVar4 < 0x20) {
          if (uVar4 == 0) {
            bVar1 = PTR_WHITESPACE_MAP_00b00d70[uVar11 & 0xff];
joined_r0x008f0d30:
            if ((bVar1 & 1) == 0) goto joined_r0x008f0d58;
          }
          else if ((uVar4 != 0x16) || (uVar10 != 0x1680)) goto joined_r0x008f0d58;
        }
        else {
          if (uVar4 == 0x20) {
            bVar1 = (byte)PTR_WHITESPACE_MAP_00b00d70[uVar11 & 0xff] >> 1;
            goto joined_r0x008f0d30;
          }
          if ((uVar4 != 0x30) || (uVar10 != 0x3000)) goto joined_r0x008f0d58;
        }
      }
      pbVar6 = pbVar7;
      pbVar8 = pbVar9;
    } while (pbVar7 != pbVar5);
    pbVar8 = (byte *)0x0;
    pbVar9 = (byte *)0x0;
LAB_008f0d40:
    auVar12._8_8_ = (long)pbVar9 - (long)pbVar8;
    auVar12._0_8_ = param_1 + (long)pbVar8;
    return auVar12;
  }
  pbVar9 = pbVar8;
  pbVar7 = param_1;
  pbVar8 = (byte *)0x0;
joined_r0x008f0d58:
  do {
    do {
      pbVar6 = pbVar5;
      if (pbVar7 == pbVar6) goto LAB_008f0d40;
      pbVar5 = pbVar6 + -1;
      bVar1 = *pbVar5;
      uVar11 = (ulong)(char)bVar1;
      if ((char)bVar1 < 0) {
        pbVar5 = pbVar6 + -2;
        bVar2 = *pbVar5;
        uVar10 = (uint)(char)bVar2;
        if ((int)(uVar10 + 0x40) < 0 == SCARRY4(uVar10,0x40)) {
          uVar10 = uVar10 & 0x1f;
        }
        else {
          pbVar5 = pbVar6 + -3;
          bVar3 = *pbVar5;
          if ((char)bVar3 + 0x40 < 0 == SCARRY4((int)(char)bVar3,0x40)) {
            uVar10 = (int)(char)bVar3 & 0xf;
          }
          else {
            pbVar5 = pbVar6 + -4;
            uVar10 = bVar3 & 0x3f | (*pbVar5 & 7) << 6;
          }
          uVar10 = bVar2 & 0x3f | uVar10 << 6;
        }
        uVar11 = (ulong)((int)(char)bVar1 & 0x3fU | uVar10 << 6);
      }
      uVar10 = (uint)uVar11;
    } while ((uVar10 - 9 < 5) || (uVar10 == 0x20));
    if (uVar10 < 0x85) goto LAB_008f0e50;
    uVar4 = uVar10 >> 8;
    if (uVar4 < 0x20) {
      if (uVar4 == 0) {
        bVar1 = PTR_WHITESPACE_MAP_00b00d70[uVar11 & 0xff];
joined_r0x008f0e4c:
        if ((bVar1 & 1) == 0) {
LAB_008f0e50:
          auVar13._8_8_ = pbVar6 + (long)(pbVar9 + (-(long)pbVar8 - (long)pbVar7));
          auVar13._0_8_ = param_1 + (long)pbVar8;
          return auVar13;
        }
      }
      else if ((uVar4 != 0x16) || (uVar10 != 0x1680)) goto LAB_008f0e50;
      goto joined_r0x008f0d58;
    }
    if (uVar4 == 0x20) {
      bVar1 = (byte)PTR_WHITESPACE_MAP_00b00d70[uVar11 & 0xff] >> 1;
      goto joined_r0x008f0e4c;
    }
    if ((uVar4 != 0x30) || (uVar10 != 0x3000)) goto LAB_008f0e50;
  } while( true );
}


// ===== 008f0e64  FUN_008f0e64 =====

undefined1 (*) [16] FUN_008f0e64(pthread_key_t param_1,long param_2,uint *param_3)

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
    if ((*param_3 & 1) != 0) goto LAB_008f0ea0;
  }
  auVar1 = std::sys::random::linux::hashmap_random_keys();
LAB_008f0ea0:
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


// ===== 008f0f14  FUN_008f0f14 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_008f0f14(pthread_key_t param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *__pointer;
  void *__ptr;
  long *plVar11;
  long lVar12;
  undefined4 uStack_34;
  
  uVar10 = _UNK_00330918;
  uVar9 = _DAT_00330910;
  uVar8 = _UNK_00330908;
  uVar7 = _DAT_00330900;
  uVar6 = _UNK_003308f8;
  uVar5 = _DAT_003308f0;
  uVar4 = _UNK_003308e8;
  uVar3 = _DAT_003308e0;
  if (param_2 == 1) {
    __pointer = (undefined8 *)0x0;
  }
  else {
    __pointer = (undefined8 *)malloc(0x50);
    if (__pointer == (undefined8 *)0x0) {
                    /* try { // try from 008f1034 to 008f103f has its CatchHandler @ 008f106c */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x50);
    }
    __pointer[5] = uVar8;
    __pointer[4] = uVar7;
    __pointer[7] = uVar10;
    __pointer[6] = uVar9;
    __pointer[9] = CONCAT44(uStack_34,param_1);
    __pointer[8] = 0x2000000000000;
    __pointer[1] = uVar4;
    *__pointer = uVar3;
    __pointer[3] = uVar6;
    __pointer[2] = uVar5;
    __ptr = pthread_getspecific(param_1);
    pthread_setspecific(param_1,__pointer);
    if (__ptr != (void *)0x0) {
      if (*(long *)((long)__ptr + 8) != 2) {
        if (*(long *)((long)__ptr + 8) == 0) {
          plVar11 = *(long **)((long)__ptr + 0x10);
          do {
            lVar12 = *plVar11;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar2) {
              *plVar11 = lVar12 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar12 + -1 == 0) {
            DataMemoryBarrier(2,1);
            <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>>
            ::drop_slow((long)__ptr + 0x10);
          }
        }
        else {
          plVar11 = *(long **)((long)__ptr + 0x10);
          do {
            lVar12 = *plVar11;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar2) {
              *plVar11 = lVar12 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar12 + -1 == 0) {
            DataMemoryBarrier(2,1);
                    /* try { // try from 008f0fc8 to 008f1013 has its CatchHandler @ 008f1044 */
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


// ===== 008f1084  FUN_008f1084 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f1084(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  long local_40;
  long lStack_38;
  
  puVar4 = (undefined8 *)*param_2;
  if (puVar4 == (undefined8 *)0x0) {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar4 = (undefined8 *)FUN_004b25a4(0x20,8);
    uVar7 = _UNK_00aef060;
    uVar6 = _DAT_00aef058;
    uVar5 = _UNK_00aef050;
    puVar1 = PTR_DAT_00aef048;
    if (puVar4 == (undefined8 *)0x0) {
                    /* try { // try from 008f1218 to 008f1223 has its CatchHandler @ 008f1260 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x20);
    }
    *param_2 = puVar4;
    puVar4[1] = uVar5;
    *puVar4 = puVar1;
    puVar4[3] = uVar7;
    puVar4[2] = uVar6;
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar2 = (undefined8 *)FUN_004b25a4(0x60,8);
  if (puVar2 == (undefined8 *)0x0) {
                    /* try { // try from 008f1208 to 008f1213 has its CatchHandler @ 008f1274 */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x60);
  }
  uVar5 = param_3[4];
  uVar7 = param_3[7];
  uVar6 = param_3[6];
  puVar2[5] = param_3[5];
  puVar2[4] = uVar5;
  puVar2[7] = uVar7;
  puVar2[6] = uVar6;
  uVar5 = param_3[8];
  uVar7 = param_3[0xb];
  uVar6 = param_3[10];
  puVar2[9] = param_3[9];
  puVar2[8] = uVar5;
  puVar2[0xb] = uVar7;
  puVar2[10] = uVar6;
  lStack_38 = _UNK_0029ff28;
  local_40 = _DAT_0029ff20;
  uVar5 = *param_3;
  uVar7 = param_3[3];
  uVar6 = param_3[2];
  puVar2[1] = param_3[1];
  *puVar2 = uVar5;
  puVar2[3] = uVar7;
  puVar2[2] = uVar6;
  auVar8 = FUN_008f740c(puVar4,&local_40,puVar2,&PTR_FUN_00aeee60);
  if (auVar8._0_8_ != 0) {
    auVar8 = (**(code **)(auVar8._8_8_ + 0x38))();
    puVar3 = auVar8._8_8_;
    puVar2 = auVar8._0_8_;
                    /* try { // try from 008f1144 to 008f114b has its CatchHandler @ 008f1248 */
    (*(code *)puVar3[3])(&local_40);
    puVar4 = puVar2;
    if (local_40 != -0x44eb72a4db502fd9 || lStack_38 != -0xe5326ed6808e21) {
      puVar4 = (undefined8 *)0x0;
      if ((code *)*puVar3 != (code *)0x0) {
                    /* try { // try from 008f1190 to 008f1197 has its CatchHandler @ 008f1228 */
        (*(code *)*puVar3)(puVar2);
      }
      if (puVar3[1] != 0) {
        free(puVar2);
      }
    }
    if (puVar4 != (undefined8 *)0x0) {
      uVar5 = puVar2[4];
      uVar7 = puVar2[7];
      uVar6 = puVar2[6];
      param_1[5] = puVar2[5];
      param_1[4] = uVar5;
      param_1[7] = uVar7;
      param_1[6] = uVar6;
      uVar5 = puVar2[8];
      uVar7 = puVar2[0xb];
      uVar6 = puVar2[10];
      param_1[9] = puVar2[9];
      param_1[8] = uVar5;
      param_1[0xb] = uVar7;
      param_1[10] = uVar6;
      uVar7 = *puVar2;
      uVar6 = puVar2[3];
      uVar5 = puVar2[2];
      param_1[1] = puVar2[1];
      *param_1 = uVar7;
      param_1[3] = uVar6;
      param_1[2] = uVar5;
      free(puVar4);
      return;
    }
  }
  *param_1 = 0xffffffffffffffff;
  return;
}


// ===== 008f128c  FUN_008f128c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f128c(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *__ptr;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  long local_50;
  long lStack_48;
  long local_40;
  long local_38;
  
  puVar6 = (undefined8 *)*param_2;
  if (puVar6 == (undefined8 *)0x0) {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar6 = (undefined8 *)FUN_004b25a4(0x20,8);
    uVar12 = _UNK_00aef060;
    uVar10 = _DAT_00aef058;
    uVar8 = _UNK_00aef050;
    puVar3 = PTR_DAT_00aef048;
    if (puVar6 == (undefined8 *)0x0) {
                    /* try { // try from 008f1404 to 008f140f has its CatchHandler @ 008f144c */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x20);
    }
    *param_2 = puVar6;
    puVar6[1] = uVar8;
    *puVar6 = puVar3;
    puVar6[3] = uVar12;
    puVar6[2] = uVar10;
  }
  lStack_48 = param_3[1];
  local_50 = *param_3;
  local_38 = param_3[3];
  local_40 = param_3[2];
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  plVar4 = (long *)FUN_004b25a4(0x20,8);
  lVar2 = _UNK_002a0738;
  lVar1 = _DAT_002a0730;
  if (plVar4 == (long *)0x0) {
                    /* try { // try from 008f13f4 to 008f13ff has its CatchHandler @ 008f146c */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x20);
  }
  lVar7 = *param_3;
  lVar11 = param_3[3];
  lVar9 = param_3[2];
  plVar4[1] = param_3[1];
  *plVar4 = lVar7;
  plVar4[3] = lVar11;
  plVar4[2] = lVar9;
  lStack_48 = lVar2;
  local_50 = lVar1;
  auVar13 = FUN_008f740c(puVar6,&local_50,plVar4,&PTR_FUN_00aeeea0);
  if (auVar13._0_8_ != 0) {
    auVar13 = (**(code **)(auVar13._8_8_ + 0x38))();
    puVar5 = auVar13._8_8_;
    __ptr = auVar13._0_8_;
                    /* try { // try from 008f1344 to 008f134b has its CatchHandler @ 008f1434 */
    (*(code *)puVar5[3])(&local_50);
    puVar6 = __ptr;
    if (local_50 != -0x26306223ec2622f || lStack_48 != -0x3929a1fc38302868) {
      puVar6 = (undefined8 *)0x0;
      if ((code *)*puVar5 != (code *)0x0) {
                    /* try { // try from 008f1390 to 008f1397 has its CatchHandler @ 008f1414 */
        (*(code *)*puVar5)(__ptr);
      }
      if (puVar5[1] != 0) {
        free(__ptr);
      }
    }
    if (puVar6 != (undefined8 *)0x0) {
      uVar8 = *__ptr;
      uVar12 = __ptr[3];
      uVar10 = __ptr[2];
      param_1[1] = __ptr[1];
      *param_1 = uVar8;
      param_1[3] = uVar12;
      param_1[2] = uVar10;
      free(puVar6);
      return;
    }
  }
  *param_1 = 0;
  return;
}


// ===== 008f1494  FUN_008f1494 =====

void FUN_008f1494(long *param_1)

{
  code *pcVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  pvVar2 = (void *)*param_1;
  if (pvVar2 == (void *)0x0) {
    puVar4 = (undefined8 *)param_1[1];
    pvVar2 = (void *)*puVar4;
    if (pvVar2 != (void *)0x0) {
      puVar3 = (undefined8 *)puVar4[1];
      pcVar1 = (code *)*puVar3;
      if (pcVar1 != (code *)0x0) {
                    /* try { // try from 008f1518 to 008f151f has its CatchHandler @ 008f1560 */
        (*pcVar1)(pvVar2);
      }
      if (puVar3[1] != 0) {
        free(pvVar2);
      }
    }
    free(puVar4);
    return;
  }
  if (param_1[2] != 0) {
                    /* try { // try from 008f14c0 to 008f14c7 has its CatchHandler @ 008f15ac */
    (**(code **)(param_1[2] + 0x20))(param_1 + 5,param_1[3],param_1[4]);
    pvVar2 = (void *)*param_1;
  }
  puVar4 = (undefined8 *)param_1[1];
  pcVar1 = (code *)*puVar4;
  if (pcVar1 != (code *)0x0) {
                    /* try { // try from 008f14d8 to 008f14df has its CatchHandler @ 008f158c */
    (*pcVar1)(pvVar2);
  }
  if (puVar4[1] != 0) {
    free(pvVar2);
    return;
  }
  return;
}


// ===== 008f15c8  FUN_008f15c8 =====

void FUN_008f15c8(long *param_1)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  
  __ptr = (void *)param_1[1];
  lVar2 = param_1[2] + 1;
  lVar1 = (long)__ptr + 0x38;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 008f1604 to 008f1607 has its CatchHandler @ 008f164c */
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


// ===== 008f169c  FUN_008f169c =====

void FUN_008f169c(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x30);
  if ((uVar1 & 1) != 0) {
                    /* try { // try from 008f16b4 to 008f16c7 has its CatchHandler @ 008f16ec */
    <tokio::sync::oneshot::tokio::sync::oneshot::Task>::drop_task(param_1 + 0x20);
  }
  if (((uint)uVar1 >> 3 & 1) != 0) {
    <tokio::sync::oneshot::tokio::sync::oneshot::Task>::drop_task(param_1 + 0x10);
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_008f1494(param_1 + 0x40);
    return;
  }
  return;
}


// ===== 008f170c  FUN_008f170c =====

void FUN_008f170c(void *param_1,undefined8 *param_2)

{
  if ((code *)*param_2 != (code *)0x0) {
                    /* try { // try from 008f172c to 008f1733 has its CatchHandler @ 008f1764 */
    (*(code *)*param_2)(param_1);
  }
  if (param_2[1] != 0) {
    free(param_1);
    return;
  }
  return;
}


// ===== 008f1784  FUN_008f1784 =====

void FUN_008f1784(void *param_1,undefined8 *param_2)

{
  if ((code *)*param_2 != (code *)0x0) {
                    /* try { // try from 008f17a4 to 008f17ab has its CatchHandler @ 008f17dc */
    (*(code *)*param_2)(param_1);
  }
  if (param_2[1] != 0) {
    free(param_1);
    return;
  }
  return;
}


// ===== 008f17fc  FUN_008f17fc =====

void FUN_008f17fc(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
                    /* try { // try from 008f1810 to 008f1837 has its CatchHandler @ 008f1874 */
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


// ===== 008f18ac  FUN_008f18ac =====

void FUN_008f18ac(long param_1)

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


// ===== 008f1908  FUN_008f1908 =====

void FUN_008f1908(long param_1)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    free(*(void **)(param_1 + 0x48));
  }
                    /* try { // try from 008f1938 to 008f193f has its CatchHandler @ 008f19c8 */
  FUN_008f0b4c(param_1 + 0x18);
  if (*(long *)(param_1 + 0x18) != 0) {
    free(*(void **)(param_1 + 0x20));
  }
  __ptr = *(void **)(param_1 + 0x38);
  lVar2 = *(long *)(param_1 + 0x40) + 1;
  lVar1 = (long)__ptr + 0x38;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 008f1980 to 008f1983 has its CatchHandler @ 008f19f8 */
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


// ===== 008f1a48  FUN_008f1a48 =====

void FUN_008f1a48(undefined8 *param_1)

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
                    /* try { // try from 008f1a70 to 008f1a77 has its CatchHandler @ 008f1aa8 */
      (*pcVar1)(__ptr);
    }
    if (puVar2[1] != 0) {
      free(__ptr);
    }
  }
  free(param_1);
  return;
}


// ===== 008f1adc  FUN_008f1adc =====

void FUN_008f1adc(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008f1aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1 + 3,param_1[1],param_1[2]);
  return;
}


// ===== 008f1af0  FUN_008f1af0 =====

void FUN_008f1af0(long *param_1)

{
  if ((*param_1 == 1) || (*param_1 == 2)) {
    if (((ulong)param_1[1] < 2) && (param_1[7] != 0)) {
      <bytes::bytes_mut::BytesMut_as_core::ops::drop::Drop>::drop();
      return;
    }
  }
  return;
}


// ===== 008f1b20  FUN_008f1b20 =====

void FUN_008f1b20(long *param_1)

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
                    /* try { // try from 008f1b8c to 008f1b8f has its CatchHandler @ 008f1bc0 */
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


// ===== 008f1c10  FUN_008f1c10 =====

void FUN_008f1c10(ulong *param_1)

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
                    /* try { // try from 008f1c54 to 008f1c57 has its CatchHandler @ 008f1c9c */
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


// ===== 008f1cec  FUN_008f1cec =====

void FUN_008f1cec(ulong *param_1)

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
                    /* try { // try from 008f1d30 to 008f1d33 has its CatchHandler @ 008f1d78 */
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


// ===== 008f1dc8  <hyper::proto::h1::conn::[5]::hyper::proto::h1::conn::State>::close_read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper::proto::h1::conn::[5]::hyper::proto::h1::conn::State>::close_read */

void __rustcall
<hyper::proto::h1::conn::[5]::hyper::proto::h1::conn::State>::close_read(long param_1)

{
  if ((*(long *)(param_1 + 0x80) == 1) || (*(long *)(param_1 + 0x80) == 2)) {
    if ((*(ulong *)(param_1 + 0x88) < 2) && (*(long *)(param_1 + 0xb8) != 0)) {
                    /* try { // try from 008f1e04 to 008f1e07 has its CatchHandler @ 008f1e24 */
      <bytes::bytes_mut::BytesMut_as_core::ops::drop::Drop>::drop();
    }
  }
  *(undefined8 *)(param_1 + 0x80) = 4;
  *(undefined1 *)(param_1 + 0x145) = 2;
  return;
}


// ===== 008f1e30  <hyper::proto::h1::conn::[5]::hyper::proto::h1::conn::State>::close_write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper::proto::h1::conn::[5]::hyper::proto::h1::conn::State>::close_write */

void __rustcall
<hyper::proto::h1::conn::[5]::hyper::proto::h1::conn::State>::close_write(long param_1)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0xe8);
  if ((-0x7ffffffffffffffd < lVar2) && (1 < lVar2 + 2U)) {
    __ptr = *(void **)(param_1 + 0xf0);
    lVar3 = *(long *)(param_1 + 0xf8) + 1;
    lVar1 = (long)__ptr + 0x18;
    while (lVar3 = lVar3 + -1, lVar3 != 0) {
                    /* try { // try from 008f1e90 to 008f1e93 has its CatchHandler @ 008f1edc */
      (**(code **)(*(long *)(lVar1 + -0x18) + 0x20))
                (lVar1,*(undefined8 *)(lVar1 + -0x10),*(undefined8 *)(lVar1 + -8));
      lVar1 = lVar1 + 0x28;
    }
    if (lVar2 != 0) {
      free(__ptr);
    }
  }
  *(undefined8 *)(param_1 + 0xe8) = 0x8000000000000003;
  *(undefined1 *)(param_1 + 0x145) = 2;
  return;
}


// ===== 008f1f34  <hyper::proto::h1::conn::[5]::hyper::proto::h1::conn::State>::prepare_upgrade =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper::proto::h1::conn::[5]::hyper::proto::h1::conn::State>::prepare_upgrade */

undefined8 __rustcall
<hyper::proto::h1::conn::[5]::hyper::proto::h1::conn::State>::prepare_upgrade(long param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  
  auVar6 = FUN_008f7924();
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar5 = *(long **)(param_1 + 0x18);
    if (plVar5 != (long *)0x0) {
                    /* try { // try from 008f1f6c to 008f1f8f has its CatchHandler @ 008f1fd8 */
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
                    /* try { // try from 008f1fa8 to 008f1faf has its CatchHandler @ 008f1fd0 */
        <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<hyper::upgrade::Upgraded,{backref_38}::error::Error>>>>
        ::drop_slow((undefined8 *)(param_1 + 0x18));
      }
    }
  }
  *(undefined8 *)(param_1 + 0x10) = 1;
  *(long *)(param_1 + 0x18) = auVar6._0_8_;
  return auVar6._8_8_;
}


// ===== 008f203c  <hyper::proto::h1::conn::[5]::hyper::proto::h1::conn::State>::close =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hyper::proto::h1::conn::[5]::hyper::proto::h1::conn::State>::close */

void __rustcall <hyper::proto::h1::conn::[5]::hyper::proto::h1::conn::State>::close(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(long *)(param_1 + 0x80) == 1) || (*(long *)(param_1 + 0x80) == 2)) {
    if ((*(ulong *)(param_1 + 0x88) < 2) && (*(long *)(param_1 + 0xb8) != 0)) {
                    /* try { // try from 008f2080 to 008f2083 has its CatchHandler @ 008f211c */
      <bytes::bytes_mut::BytesMut_as_core::ops::drop::Drop>::drop();
    }
  }
  *(undefined8 *)(param_1 + 0x80) = 4;
  if ((-0x7ffffffffffffffd < *(long *)(param_1 + 0xe8)) && (1 < *(long *)(param_1 + 0xe8) + 2U)) {
    lVar2 = *(long *)(param_1 + 0xf8) + 1;
    lVar1 = *(long *)(param_1 + 0xf0) + 0x18;
    while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 008f20d0 to 008f20d3 has its CatchHandler @ 008f2128 */
      (**(code **)(*(long *)(lVar1 + -0x18) + 0x20))
                (lVar1,*(undefined8 *)(lVar1 + -0x10),*(undefined8 *)(lVar1 + -8));
      lVar1 = lVar1 + 0x28;
    }
    if (*(long *)(param_1 + 0xe8) != 0) {
      free(*(void **)(param_1 + 0xf0));
    }
  }
  *(undefined8 *)(param_1 + 0xe8) = 0x8000000000000003;
  *(undefined1 *)(param_1 + 0x145) = 2;
  return;
}


// ===== 008f2184  FUN_008f2184 =====

void FUN_008f2184(undefined8 *param_1,long *param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *local_40;
  long *local_38;
  
  local_40 = (long *)0x0;
  if (param_2 == (long *)0x0) {
                    /* try { // try from 008f2334 to 008f233f has its CatchHandler @ 008f2400 */
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00aeeee0);
  }
  local_38 = param_2;
  if (param_2[7] != 0) {
                    /* try { // try from 008f21bc to 008f21c3 has its CatchHandler @ 008f23b4 */
    FUN_008f1494(param_2 + 8);
  }
  plVar3 = local_38;
  lVar7 = param_3[1];
  lVar6 = *param_3;
  lVar9 = param_3[3];
  lVar8 = param_3[2];
  lVar11 = param_3[5];
  lVar10 = param_3[4];
  param_2[7] = 1;
  param_2[9] = lVar7;
  param_2[8] = lVar6;
  param_2[0xb] = lVar9;
  param_2[10] = lVar8;
  param_2[0xd] = lVar11;
  param_2[0xc] = lVar10;
                    /* try { // try from 008f21e0 to 008f2207 has its CatchHandler @ 008f23d4 */
  uVar4 = <tokio::sync::oneshot::[9]::tokio::sync::oneshot::State>::set_complete(local_38 + 6);
  if ((uVar4 & 5) == 1) {
    (**(code **)(plVar3[4] + 0x10))(plVar3[5]);
  }
  if ((uVar4 >> 2 & 1) == 0) {
    *param_1 = 0;
    do {
      lVar6 = *local_38;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(local_38,0x10);
      if (bVar2) {
        *local_38 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 008f222c to 008f2233 has its CatchHandler @ 008f23ac */
      <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<hyper::upgrade::Upgraded,{backref_38}::error::Error>>>>
      ::drop_slow(&local_38);
    }
    plVar3 = local_40;
    if (local_40 == (long *)0x0) {
      return;
    }
                    /* try { // try from 008f223c to 008f225f has its CatchHandler @ 008f2380 */
    uVar5 = <tokio::sync::oneshot::[9]::tokio::sync::oneshot::State>::set_complete(local_40 + 6);
    if ((uVar5 & 5) == 1) {
      (**(code **)(plVar3[4] + 0x10))(plVar3[5]);
    }
    do {
      lVar6 = *plVar3 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar6;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  else {
    uVar4 = *(uint *)(local_38 + 7);
    local_38[7] = 0;
    if ((uVar4 & 1) == 0) {
                    /* try { // try from 008f2344 to 008f234f has its CatchHandler @ 008f23d4 */
                    /* WARNING: Subroutine does not return */
      core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00aeeef8);
    }
    lVar7 = local_38[9];
    lVar6 = local_38[8];
    lVar9 = local_38[0xb];
    lVar8 = local_38[10];
    lVar11 = local_38[0xd];
    lVar10 = local_38[0xc];
    *param_1 = 1;
    param_1[2] = lVar7;
    param_1[1] = lVar6;
    param_1[4] = lVar9;
    param_1[3] = lVar8;
    param_1[6] = lVar11;
    param_1[5] = lVar10;
    do {
      lVar6 = *local_38;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(local_38,0x10);
      if (bVar2) {
        *local_38 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 008f22cc to 008f22d3 has its CatchHandler @ 008f23ac */
      <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<hyper::upgrade::Upgraded,{backref_38}::error::Error>>>>
      ::drop_slow(&local_38);
    }
    plVar3 = local_40;
    if (local_40 == (long *)0x0) {
      return;
    }
                    /* try { // try from 008f22dc to 008f22ff has its CatchHandler @ 008f2354 */
    uVar5 = <tokio::sync::oneshot::[9]::tokio::sync::oneshot::State>::set_complete(local_40 + 6);
    if ((uVar5 & 5) == 1) {
      (**(code **)(plVar3[4] + 0x10))(plVar3[5]);
    }
    do {
      lVar6 = *plVar3 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar6;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if (lVar6 != 0) {
    return;
  }
  DataMemoryBarrier(2,1);
  <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<hyper::upgrade::Upgraded,{backref_38}::error::Error>>>>
  ::drop_slow(&local_40);
  return;
}


// ===== 008f2420  hyper::client::dispatch::dispatch_gone =====

/* WARNING: Unknown calling convention: __rustcall */
/* hyper::client::dispatch::dispatch_gone */

void __rustcall hyper::client::dispatch::dispatch_gone(void)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar5 = (undefined8 *)FUN_004b25a4(0x18,8);
  if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x18);
  }
  *puVar5 = 0;
  puVar3 = PTR_GLOBAL_PANIC_COUNT_00b00bf0;
  *(undefined2 *)(puVar5 + 2) = 0x501;
  if ((*(ulong *)puVar3 & 0x7fffffffffffffff) == 0) {
    FUN_008f8468(puVar5,"runtime dropped the dispatch taskuser code panicked",0x21);
    return;
  }
                    /* try { // try from 008f249c to 008f249f has its CatchHandler @ 008f24d4 */
  iVar4 = std::panicking::panic_count::is_zero_slow_path();
  uVar1 = 0x21;
  if (iVar4 == 0) {
    uVar1 = 0x12;
  }
  pcVar2 = "runtime dropped the dispatch taskuser code panicked";
  if (iVar4 == 0) {
    pcVar2 = "user code panicked";
  }
  FUN_008f8468(puVar5,pcVar2,uVar1);
  return;
}


// ===== 008f24ec  FUN_008f24ec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f24ec(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029ff20;
  param_1[1] = _UNK_0029ff28;
  *param_1 = uVar1;
  return;
}


// ===== 008f2500  FUN_008f2500 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f2500(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a0730;
  param_1[1] = _UNK_002a0738;
  *param_1 = uVar1;
  return;
}


// ===== 008f2514  FUN_008f2514 =====

void FUN_008f2514(void)

{
  return;
}


// ===== 008f2520  FUN_008f2520 =====

void FUN_008f2520(void)

{
  return;
}


// ===== 008f252c  FUN_008f252c =====

void FUN_008f252c(void)

{
  return;
}


// ===== 008f2538  FUN_008f2538 =====

void FUN_008f2538(void)

{
  return;
}


