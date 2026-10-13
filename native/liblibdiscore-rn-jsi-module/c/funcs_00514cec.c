// ===== 00514cec  FUN_00514cec =====

void FUN_00514cec(byte *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (0x18 < *param_1) {
    plVar3 = *(long **)(param_1 + 8);
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
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
      return;
    }
  }
  return;
}


// ===== 00514d1c  FUN_00514d1c =====

void FUN_00514d1c(long *param_1)

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


// ===== 00514d60  FUN_00514d60 =====

void FUN_00514d60(undefined8 param_1)

{
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
                    /* try { // try from 00514d7c to 00514d83 has its CatchHandler @ 00514db4 */
  <std::backtrace::[2]::std::backtrace::Backtrace>::capture(&local_60);
  uStack_88 = uStack_58;
  local_90 = local_60;
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  local_70 = local_40;
  FUN_00514e0c(param_1,&local_90);
  return;
}


// ===== 00514dcc  FUN_00514dcc =====

void FUN_00514dcc(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_50 [48];
  
  <std::backtrace::[2]::std::backtrace::Backtrace>::capture(auStack_50);
  FUN_00514eac(param_1,param_2,auStack_50);
  return;
}


// ===== 00514e0c  FUN_00514e0c =====

void FUN_00514e0c(undefined8 *param_1,undefined8 *param_2)

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
  undefined8 uVar10;
  
  uVar5 = param_2[1];
  uVar3 = *param_2;
  uVar8 = param_2[3];
  uVar7 = param_2[2];
  uVar10 = param_2[5];
  uVar9 = param_2[4];
  uVar2 = param_1[2];
  uVar6 = param_1[1];
  uVar4 = *param_1;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)malloc(0x50);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[3] = uVar7;
    puVar1[2] = uVar5;
    puVar1[5] = uVar9;
    puVar1[4] = uVar8;
    puVar1[7] = uVar4;
    puVar1[6] = uVar10;
    puVar1[9] = uVar2;
    puVar1[8] = uVar6;
    puVar1[1] = uVar3;
    *puVar1 = &PTR_FUN_00accd10;
    return;
  }
                    /* try { // try from 00514e84 to 00514e8f has its CatchHandler @ 00514e94 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x50);
}


// ===== 00514eac  FUN_00514eac =====

void FUN_00514eac(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = param_3[1];
  uVar2 = *param_3;
  uVar5 = param_3[3];
  uVar4 = param_3[2];
  uVar7 = param_3[5];
  uVar6 = param_3[4];
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)malloc(0x48);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[3] = uVar4;
    puVar1[2] = uVar3;
    puVar1[5] = uVar6;
    puVar1[4] = uVar5;
    puVar1[7] = param_1;
    puVar1[6] = uVar7;
    puVar1[8] = param_2;
    puVar1[1] = uVar2;
    *puVar1 = &PTR_FUN_00accd40;
    return;
  }
                    /* try { // try from 00514f18 to 00514f23 has its CatchHandler @ 00514f28 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x48);
}


// ===== 00514f50  FUN_00514f50 =====

void FUN_00514f50(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = param_3[1];
  uVar2 = *param_3;
  uVar5 = param_3[3];
  uVar4 = param_3[2];
  uVar7 = param_3[5];
  uVar6 = param_3[4];
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)malloc(0x48);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[3] = uVar4;
    puVar1[2] = uVar3;
    puVar1[5] = uVar6;
    puVar1[4] = uVar5;
    puVar1[7] = param_1;
    puVar1[6] = uVar7;
    puVar1[8] = param_2;
    puVar1[1] = uVar2;
    *puVar1 = &PTR_FUN_00accc50;
    return;
  }
                    /* try { // try from 00514fc4 to 00514fcf has its CatchHandler @ 00514fd4 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x48);
}


// ===== 00514fec  FUN_00514fec =====

void FUN_00514fec(undefined8 *param_1,undefined8 *param_2)

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
  undefined8 uVar10;
  
  uVar5 = param_2[1];
  uVar3 = *param_2;
  uVar8 = param_2[3];
  uVar7 = param_2[2];
  uVar10 = param_2[5];
  uVar9 = param_2[4];
  uVar2 = param_1[2];
  uVar6 = param_1[1];
  uVar4 = *param_1;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)malloc(0x50);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[3] = uVar7;
    puVar1[2] = uVar5;
    puVar1[5] = uVar9;
    puVar1[4] = uVar8;
    puVar1[7] = uVar4;
    puVar1[6] = uVar10;
    puVar1[9] = uVar2;
    puVar1[8] = uVar6;
    puVar1[1] = uVar3;
    *puVar1 = &PTR_FUN_00accc80;
    return;
  }
                    /* try { // try from 00515064 to 0051506f has its CatchHandler @ 00515074 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x50);
}


// ===== 0051508c  FUN_0051508c =====

void FUN_0051508c(undefined8 *param_1,undefined8 *param_2)

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
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar6 = param_2[1];
  uVar3 = *param_2;
  uVar11 = param_2[3];
  uVar9 = param_2[2];
  uVar2 = param_1[4];
  uVar7 = param_2[5];
  uVar4 = param_2[4];
  uVar12 = param_1[1];
  uVar10 = *param_1;
  uVar8 = param_1[3];
  uVar5 = param_1[2];
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)malloc(0x60);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[5] = uVar4;
    puVar1[4] = uVar11;
    puVar1[7] = uVar10;
    puVar1[6] = uVar7;
    puVar1[9] = uVar5;
    puVar1[8] = uVar12;
    puVar1[0xb] = uVar2;
    puVar1[10] = uVar8;
    puVar1[1] = uVar3;
    *puVar1 = &PTR_FUN_00acccb0;
    puVar1[3] = uVar9;
    puVar1[2] = uVar6;
    return;
  }
                    /* try { // try from 00515108 to 00515113 has its CatchHandler @ 00515118 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x60);
}


// ===== 00515130  FUN_00515130 =====

void FUN_00515130(undefined8 *param_1,undefined8 *param_2)

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
  undefined8 uVar10;
  
  uVar5 = param_2[1];
  uVar3 = *param_2;
  uVar8 = param_2[3];
  uVar7 = param_2[2];
  uVar10 = param_2[5];
  uVar9 = param_2[4];
  uVar2 = param_1[2];
  uVar6 = param_1[1];
  uVar4 = *param_1;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)malloc(0x50);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[3] = uVar7;
    puVar1[2] = uVar5;
    puVar1[5] = uVar9;
    puVar1[4] = uVar8;
    puVar1[7] = uVar4;
    puVar1[6] = uVar10;
    puVar1[9] = uVar2;
    puVar1[8] = uVar6;
    puVar1[1] = uVar3;
    *puVar1 = &PTR_FUN_00accce0;
    return;
  }
                    /* try { // try from 005151a8 to 005151b3 has its CatchHandler @ 005151b8 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x50);
}


// ===== 005151d0  FUN_005151d0 =====

undefined8 FUN_005151d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

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
    uVar4 = FUN_00509be4(param_2,plVar6,0xcc,param_3);
                    /* try { // try from 0051521c to 0051522b has its CatchHandler @ 005152a8 */
    lVar5 = FUN_0054390c(plVar6 + 0xf,uVar4,uVar4);
                    /* try { // try from 00515234 to 0051523f has its CatchHandler @ 00515274 */
    local_28 = param_3;
    <tokio::runtime::task_hooks::tokio::runtime::task_hooks::TaskHooks>::spawn
              (plVar6 + 0x30,&local_28);
    if (lVar5 != 0) {
                    /* try { // try from 00515244 to 0051524f has its CatchHandler @ 0051526c */
      <alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>as_tokio::runtime::task::Schedule>
      ::schedule(param_1,lVar5);
    }
    return uVar4;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x51526c);
  (*pcVar3)();
}


// ===== 005152d0  FUN_005152d0 =====

undefined8 FUN_005152d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

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
    uVar4 = FUN_00509e2c(param_2,plVar6,0xcc,param_3);
                    /* try { // try from 0051531c to 0051532b has its CatchHandler @ 005153a8 */
    lVar5 = FUN_0054390c(plVar6 + 0xf,uVar4,uVar4);
                    /* try { // try from 00515334 to 0051533f has its CatchHandler @ 00515374 */
    local_28 = param_3;
    <tokio::runtime::task_hooks::tokio::runtime::task_hooks::TaskHooks>::spawn
              (plVar6 + 0x30,&local_28);
    if (lVar5 != 0) {
                    /* try { // try from 00515344 to 0051534f has its CatchHandler @ 0051536c */
      <alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>as_tokio::runtime::task::Schedule>
      ::schedule(param_1,lVar5);
    }
    return uVar4;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x51536c);
  (*pcVar3)();
}


// ===== 005153d0  FUN_005153d0 =====

undefined8 FUN_005153d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

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
    uVar4 = FUN_0050a03c(param_2,plVar6,0xcc,param_3);
                    /* try { // try from 0051541c to 0051542b has its CatchHandler @ 005154a8 */
    lVar5 = FUN_0054390c(plVar6 + 0xf,uVar4,uVar4);
                    /* try { // try from 00515434 to 0051543f has its CatchHandler @ 00515474 */
    local_28 = param_3;
    <tokio::runtime::task_hooks::tokio::runtime::task_hooks::TaskHooks>::spawn
              (plVar6 + 0x30,&local_28);
    if (lVar5 != 0) {
                    /* try { // try from 00515444 to 0051544f has its CatchHandler @ 0051546c */
      <alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>as_tokio::runtime::task::Schedule>
      ::schedule(param_1,lVar5);
    }
    return uVar4;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x51546c);
  (*pcVar3)();
}


// ===== 005154d0  FUN_005154d0 =====

undefined8 FUN_005154d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

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
    uVar4 = FUN_0050a24c(param_2,plVar6,0xcc,param_3);
                    /* try { // try from 0051551c to 0051552b has its CatchHandler @ 005155a8 */
    lVar5 = FUN_0054390c(plVar6 + 0xf,uVar4,uVar4);
                    /* try { // try from 00515534 to 0051553f has its CatchHandler @ 00515574 */
    local_28 = param_3;
    <tokio::runtime::task_hooks::tokio::runtime::task_hooks::TaskHooks>::spawn
              (plVar6 + 0x30,&local_28);
    if (lVar5 != 0) {
                    /* try { // try from 00515544 to 0051554f has its CatchHandler @ 0051556c */
      <alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>as_tokio::runtime::task::Schedule>
      ::schedule(param_1,lVar5);
    }
    return uVar4;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x51556c);
  (*pcVar3)();
}


// ===== 005155d0  FUN_005155d0 =====

undefined8 FUN_005155d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

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
    uVar4 = FUN_0050a47c(param_2,plVar6,0xcc,param_3);
                    /* try { // try from 0051561c to 0051562b has its CatchHandler @ 005156a8 */
    lVar5 = FUN_0054390c(plVar6 + 0xf,uVar4,uVar4);
                    /* try { // try from 00515634 to 0051563f has its CatchHandler @ 00515674 */
    local_28 = param_3;
    <tokio::runtime::task_hooks::tokio::runtime::task_hooks::TaskHooks>::spawn
              (plVar6 + 0x30,&local_28);
    if (lVar5 != 0) {
                    /* try { // try from 00515644 to 0051564f has its CatchHandler @ 0051566c */
      <alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>as_tokio::runtime::task::Schedule>
      ::schedule(param_1,lVar5);
    }
    return uVar4;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x51566c);
  (*pcVar3)();
}


// ===== 005156d0  FUN_005156d0 =====

undefined8 FUN_005156d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

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
    uVar4 = FUN_0050a6c4(param_2,plVar6,0xcc,param_3);
                    /* try { // try from 0051571c to 0051572b has its CatchHandler @ 005157a8 */
    lVar5 = FUN_0054390c(plVar6 + 0xf,uVar4,uVar4);
                    /* try { // try from 00515734 to 0051573f has its CatchHandler @ 00515774 */
    local_28 = param_3;
    <tokio::runtime::task_hooks::tokio::runtime::task_hooks::TaskHooks>::spawn
              (plVar6 + 0x30,&local_28);
    if (lVar5 != 0) {
                    /* try { // try from 00515744 to 0051574f has its CatchHandler @ 0051576c */
      <alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>as_tokio::runtime::task::Schedule>
      ::schedule(param_1,lVar5);
    }
    return uVar4;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x51576c);
  (*pcVar3)();
}


// ===== 005157d0  FUN_005157d0 =====

undefined1  [16] FUN_005157d0(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &PTR_FUN_00accdb8;
  auVar1._0_8_ = param_1 + 0x38;
  return auVar1;
}


// ===== 005157e0  FUN_005157e0 =====

undefined1  [16] FUN_005157e0(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &UNK_00acce30;
  auVar1._0_8_ = param_1 + 0x38;
  return auVar1;
}


// ===== 005157f0  FUN_005157f0 =====

undefined1  [16] FUN_005157f0(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &PTR_FUN_00accea8;
  auVar1._0_8_ = param_1 + 0x38;
  return auVar1;
}


// ===== 00515800  FUN_00515800 =====

undefined1  [16] FUN_00515800(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &PTR_FUN_00accf20;
  auVar1._0_8_ = param_1 + 0x38;
  return auVar1;
}


// ===== 00515810  FUN_00515810 =====

undefined1  [16] FUN_00515810(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &PTR_FUN_00accf98;
  auVar1._0_8_ = param_1 + 0x38;
  return auVar1;
}


// ===== 00515820  FUN_00515820 =====

undefined1  [16] FUN_00515820(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &PTR_FUN_00acd010;
  auVar1._0_8_ = param_1 + 0x38;
  return auVar1;
}


// ===== 00515830  FUN_00515830 =====

void FUN_00515830(void)

{
  return;
}


// ===== 0051583c  FUN_0051583c =====

void FUN_0051583c(void)

{
  return;
}


// ===== 00515848  FUN_00515848 =====

void FUN_00515848(void)

{
  return;
}


// ===== 00515854  FUN_00515854 =====

void FUN_00515854(void)

{
  return;
}


// ===== 00515860  FUN_00515860 =====

void FUN_00515860(void)

{
  return;
}


// ===== 0051586c  FUN_0051586c =====

void FUN_0051586c(void)

{
  return;
}


// ===== 00515878  FUN_00515878 =====

long FUN_00515878(long param_1,long *param_2)

{
  param_1 = param_1 + 0x38;
  if (*param_2 != 0x2f8db981bd62ccc5 || param_2[1] != -0x5f46c0e871985439) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 005158b8  FUN_005158b8 =====

long FUN_005158b8(long param_1,long *param_2)

{
  param_1 = param_1 + 0x38;
  if (*param_2 != -0x119351643378db84 || param_2[1] != 0x16fa802d90bf615b) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 005158f8  FUN_005158f8 =====

long FUN_005158f8(long param_1,long *param_2)

{
  param_1 = param_1 + 0x38;
  if (*param_2 != 0x24bf229bd64255d8 || param_2[1] != -0x38c125f1d14a819b) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00515938  FUN_00515938 =====

long FUN_00515938(long param_1,long *param_2)

{
  param_1 = param_1 + 0x38;
  if (*param_2 != -0x4201d6fb24b6e108 || param_2[1] != 0x13540c38b4cc45cf) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00515978  FUN_00515978 =====

long FUN_00515978(long param_1,long *param_2)

{
  param_1 = param_1 + 0x38;
  if (*param_2 != 0x30915f23ce71e722 || param_2[1] != 0x6ff54c2bcf822e8) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 005159b8  FUN_005159b8 =====

long FUN_005159b8(long param_1,long *param_2)

{
  param_1 = param_1 + 0x38;
  if (*param_2 != -0x4609fd23a01609a4 || param_2[1] != 0x24c161f26c70c1f1) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 005159f8  FUN_005159f8 =====

void FUN_005159f8(undefined8 *param_1)

{
  undefined1 *puVar1;
  long lVar2;
  
  puVar1 = (undefined1 *)*param_1;
  if ((puVar1 != (undefined1 *)0x0) && (lVar2 = param_1[1], *puVar1 = 0, lVar2 != 0)) {
    free(puVar1);
  }
  puVar1 = (undefined1 *)param_1[2];
  if ((puVar1 != (undefined1 *)0x0) && (lVar2 = param_1[3], *puVar1 = 0, lVar2 != 0)) {
    free(puVar1);
  }
  puVar1 = (undefined1 *)param_1[4];
  if ((puVar1 != (undefined1 *)0x0) && (lVar2 = param_1[5], *puVar1 = 0, lVar2 != 0)) {
    free(puVar1);
  }
  puVar1 = (undefined1 *)param_1[6];
  if ((puVar1 != (undefined1 *)0x0) && (lVar2 = param_1[7], *puVar1 = 0, lVar2 != 0)) {
    free(puVar1);
    return;
  }
  return;
}


// ===== 00515a7c  FUN_00515a7c =====

void FUN_00515a7c(undefined8 *param_1,long param_2)

{
  undefined1 *puVar1;
  long lVar2;
  
  if (param_2 != 0) {
    puVar1 = (undefined1 *)*param_1;
    if ((puVar1 != (undefined1 *)0x0) && (lVar2 = param_1[1], *puVar1 = 0, lVar2 != 0)) {
      free(puVar1);
    }
    if (param_2 != 1) {
      puVar1 = (undefined1 *)param_1[2];
      if ((puVar1 != (undefined1 *)0x0) && (lVar2 = param_1[3], *puVar1 = 0, lVar2 != 0)) {
        free(puVar1);
      }
      if (((param_2 != 2) && (puVar1 = (undefined1 *)param_1[4], puVar1 != (undefined1 *)0x0)) &&
         (lVar2 = param_1[5], *puVar1 = 0, lVar2 != 0)) {
        free(puVar1);
        return;
      }
    }
  }
  return;
}


// ===== 00515b24  FUN_00515b24 =====

void FUN_00515b24(byte *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if ((*param_1 != 0xff) && (0x18 < *param_1)) {
    plVar3 = *(long **)(param_1 + 8);
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
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
      return;
    }
  }
  return;
}


// ===== 00515b5c  FUN_00515b5c =====

void FUN_00515b5c(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (*param_1 != 0) {
    plVar3 = (long *)param_1[1];
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
                    /* try { // try from 00515b94 to 00515b97 has its CatchHandler @ 00515bd4 */
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
      }
    }
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
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 3);
        return;
      }
    }
  }
  return;
}


// ===== 00515c0c  FUN_00515c0c =====

void FUN_00515c0c(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (*param_1 != 2) {
    plVar3 = (long *)param_1[2];
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
                    /* try { // try from 00515c48 to 00515c4b has its CatchHandler @ 00515ce8 */
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
      }
    }
    plVar3 = (long *)param_1[4];
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
                    /* try { // try from 00515c70 to 00515c73 has its CatchHandler @ 00515ce0 */
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
      }
    }
    plVar3 = (long *)param_1[6];
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
                    /* try { // try from 00515c98 to 00515c9b has its CatchHandler @ 00515cd8 */
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
      }
    }
    plVar3 = (long *)param_1[8];
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
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 8);
        return;
      }
    }
  }
  return;
}


// ===== 00515d74  FUN_00515d74 =====

void FUN_00515d74(void *param_1,undefined8 *param_2)

{
  if (param_1 != (void *)0x0) {
    if ((code *)*param_2 != (code *)0x0) {
                    /* try { // try from 00515d94 to 00515d9b has its CatchHandler @ 00515dc0 */
      (*(code *)*param_2)(param_1);
    }
    if (param_2[1] != 0) {
      free(param_1);
      return;
    }
  }
  return;
}


// ===== 00515ddc  FUN_00515ddc =====

void FUN_00515ddc(ulong param_1)

{
  long local_18;
  
  if (((param_1 != 0) && (1 < (param_1 & 3) - 2)) && ((param_1 & 3) != 0)) {
    local_18 = param_1 - 1;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
  }
  return;
}


// ===== 00515e28  FUN_00515e28 =====

void FUN_00515e28(long param_1)

{
  if (*(long *)(param_1 + 8) == 2) {
                    /* try { // try from 00515e44 to 00515e4b has its CatchHandler @ 00515e70 */
    FUN_0051c07c(param_1 + 0x10);
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    free(*(void **)(param_1 + 0x40));
    return;
  }
  return;
}


// ===== 00515e8c  FUN_00515e8c =====

void FUN_00515e8c(long param_1)

{
  if (*(long *)(param_1 + 8) == 2) {
    FUN_0051c07c(param_1 + 0x10);
    return;
  }
  return;
}


// ===== 00515ea4  FUN_00515ea4 =====

void FUN_00515ea4(long param_1)

{
  if (*(long *)(param_1 + 8) == 2) {
                    /* try { // try from 00515ec0 to 00515ec7 has its CatchHandler @ 00515eec */
    FUN_0051c07c(param_1 + 0x10);
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    free(*(void **)(param_1 + 0x38));
    return;
  }
  return;
}


// ===== 00515f08  FUN_00515f08 =====

void FUN_00515f08(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long local_28;
  
  if (*(long *)(param_1 + 8) == 2) {
                    /* try { // try from 00515f28 to 00515f2f has its CatchHandler @ 00515fe0 */
    FUN_0051c07c(param_1 + 0x10);
  }
  lVar2 = *(long *)(param_1 + 0x38);
  lVar1 = lVar2 + -0x7fffffffffffffff;
  if (-0x7fffffffffffffff < lVar2) {
    lVar1 = 0;
  }
  if (lVar1 == 0) {
    if (lVar2 == -1) {
      uVar3 = *(ulong *)(param_1 + 0x40) & 3;
      if ((1 < uVar3 - 2) && (uVar3 != 0)) {
        local_28 = *(ulong *)(param_1 + 0x40) - 1;
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
        return;
      }
    }
    else if (lVar2 != 0) {
      free(*(void **)(param_1 + 0x40));
      return;
    }
  }
  else if (lVar1 != 1) {
    FUN_0051750c(param_1 + 0x40);
    return;
  }
  return;
}


// ===== 00515ff8  FUN_00515ff8 =====

void FUN_00515ff8(long param_1)

{
  if (*(long *)(param_1 + 8) == 2) {
                    /* try { // try from 00516014 to 0051601b has its CatchHandler @ 0051602c */
    FUN_0051c07c(param_1 + 0x10);
  }
  FUN_0051797c(param_1 + 0x38);
  return;
}


// ===== 00516044  FUN_00516044 =====

void FUN_00516044(long param_1)

{
  ulong uVar1;
  long local_28;
  
  if (*(long *)(param_1 + 8) == 2) {
                    /* try { // try from 00516064 to 0051606b has its CatchHandler @ 005160d4 */
    FUN_0051c07c(param_1 + 0x10);
  }
  if (*(long *)(param_1 + 0x38) == -1) {
    uVar1 = *(ulong *)(param_1 + 0x40) & 3;
    if ((1 < uVar1 - 2) && (uVar1 != 0)) {
      local_28 = *(ulong *)(param_1 + 0x40) - 1;
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
    }
  }
  else if (*(long *)(param_1 + 0x38) != 0) {
    free(*(void **)(param_1 + 0x40));
    return;
  }
  return;
}


// ===== 005160ec  FUN_005160ec =====

void FUN_005160ec(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 00516100  FUN_00516100 =====

void FUN_00516100(long *param_1)

{
  void *__ptr;
  void *__ptr_00;
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  
  __ptr = (void *)param_1[1];
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    lVar4 = (long)__ptr + 0x18;
    do {
      __ptr_00 = *(void **)(lVar4 + -0x18);
      puVar1 = *(undefined8 **)(lVar4 + -0x10);
      pcVar2 = (code *)*puVar1;
      if (pcVar2 != (code *)0x0) {
                    /* try { // try from 00516140 to 00516147 has its CatchHandler @ 00516190 */
        (*pcVar2)(__ptr_00);
      }
      if (puVar1[1] != 0) {
        free(__ptr_00);
      }
      lVar3 = lVar3 + -1;
      lVar4 = lVar4 + 0x10;
    } while (lVar3 != 0);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 005161d8  FUN_005161d8 =====

void FUN_005161d8(long *param_1)

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


// ===== 00516248  FUN_00516248 =====

void FUN_00516248(long *param_1)

{
  void *__ptr;
  void *pvVar1;
  long lVar2;
  
  __ptr = (void *)param_1[1];
  lVar2 = param_1[2] + 1;
  pvVar1 = __ptr;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 00516278 to 0051627b has its CatchHandler @ 005162b8 */
    FUN_00524c74(pvVar1);
    pvVar1 = (void *)((long)pvVar1 + 0x38);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 005162f4  FUN_005162f4 =====

void FUN_005162f4(long *param_1)

{
  void *__ptr;
  void *pvVar1;
  long lVar2;
  
  __ptr = (void *)param_1[1];
  lVar2 = param_1[2] + 1;
  pvVar1 = __ptr;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 00516324 to 00516327 has its CatchHandler @ 00516364 */
    FUN_005254e4(pvVar1);
    pvVar1 = (void *)((long)pvVar1 + 0xb8);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 005163a0  FUN_005163a0 =====

void FUN_005163a0(long *param_1)

{
                    /* try { // try from 005163b0 to 005163b3 has its CatchHandler @ 005163d8 */
  FUN_0052b170();
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 005163f4  FUN_005163f4 =====

void FUN_005163f4(long *param_1)

{
  void *__ptr;
  void *pvVar1;
  long lVar2;
  
  __ptr = (void *)param_1[1];
  lVar2 = param_1[2] + 1;
  pvVar1 = __ptr;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 00516424 to 00516427 has its CatchHandler @ 00516464 */
    FUN_00524f38(pvVar1);
    pvVar1 = (void *)((long)pvVar1 + 0x70);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 005164a0  FUN_005164a0 =====

void FUN_005164a0(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  undefined8 *puVar6;
  void *__ptr;
  
                    /* try { // try from 005164b4 to 005164bb has its CatchHandler @ 00516550 */
  FUN_0051c228(param_1 + 0x10);
  plVar3 = *(long **)(param_1 + 0x20);
  if (plVar3 != (long *)0x0) {
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
                    /* try { // try from 005164e0 to 005164e3 has its CatchHandler @ 0051652c */
      <alloc::sync::[n]::alloc::sync::Arc<std::thread::scoped::ScopeData>>::drop_slow();
    }
  }
  __ptr = *(void **)(param_1 + 0x10);
  if (__ptr != (void *)0x0) {
    puVar6 = *(undefined8 **)(param_1 + 0x18);
    pcVar4 = (code *)*puVar6;
    if (pcVar4 != (code *)0x0) {
                    /* try { // try from 005164f8 to 005164ff has its CatchHandler @ 00516534 */
      (*pcVar4)(__ptr);
    }
    if (puVar6[1] != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 00516594  FUN_00516594 =====

void FUN_00516594(void *param_1,undefined8 *param_2)

{
  if ((code *)*param_2 != (code *)0x0) {
                    /* try { // try from 005165b0 to 005165b7 has its CatchHandler @ 005165dc */
    (*(code *)*param_2)(param_1);
  }
  if (param_2[1] != 0) {
    free(param_1);
    return;
  }
  return;
}


// ===== 005165f8  FUN_005165f8 =====

void FUN_005165f8(void *param_1,undefined8 *param_2)

{
  if ((code *)*param_2 != (code *)0x0) {
                    /* try { // try from 00516614 to 0051661b has its CatchHandler @ 00516640 */
    (*(code *)*param_2)(param_1);
  }
  if (param_2[1] != 0) {
    free(param_1);
    return;
  }
  return;
}


// ===== 0051665c  FUN_0051665c =====

void FUN_0051665c(void *param_1,undefined8 *param_2)

{
  if ((code *)*param_2 != (code *)0x0) {
                    /* try { // try from 00516678 to 0051667f has its CatchHandler @ 005166a4 */
    (*(code *)*param_2)(param_1);
  }
  if (param_2[1] != 0) {
    free(param_1);
    return;
  }
  return;
}


// ===== 005166c0  FUN_005166c0 =====

long * FUN_005166c0(long *param_1)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long local_28;
  
  if (*param_1 == 0) {
    if (param_1[1] == 0) {
      if ((int)param_1[2] == 0) {
        uVar1 = close(*(int *)((long)param_1 + 0x14));
        return (long *)(ulong)uVar1;
      }
      uVar3 = param_1[3] & 3;
      if ((1 < uVar3 - 2) && (uVar3 != 0)) {
        local_28 = param_1[3] - 1;
        plVar4 = (long *)<core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
        return plVar4;
      }
    }
    else {
      plVar4 = (long *)param_1[2];
      if (plVar4 != (long *)0x0) {
        puVar5 = (undefined8 *)param_1[3];
        pcVar2 = (code *)*puVar5;
        if (pcVar2 != (code *)0x0) {
                    /* try { // try from 00516704 to 0051670b has its CatchHandler @ 00516788 */
          param_1 = (long *)(*pcVar2)(plVar4);
        }
        if (puVar5[1] != 0) {
          free(plVar4);
          return plVar4;
        }
      }
    }
  }
  return param_1;
}


// ===== 005167a4  FUN_005167a4 =====

void FUN_005167a4(long *param_1)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  void *__ptr;
  undefined8 *puVar4;
  long local_28;
  
  lVar1 = *param_1;
  if (lVar1 != -1) {
    if (lVar1 == 2) {
      __ptr = (void *)param_1[2];
      if (__ptr != (void *)0x0) {
        puVar4 = (undefined8 *)param_1[3];
        pcVar2 = (code *)*puVar4;
        if (pcVar2 != (code *)0x0) {
                    /* try { // try from 005167dc to 005167e3 has its CatchHandler @ 00516848 */
          (*pcVar2)(__ptr);
        }
        if (puVar4[1] != 0) {
          free(__ptr);
          return;
        }
      }
    }
    else if (lVar1 != 0) {
      uVar3 = param_1[1] & 3;
      if ((1 < uVar3 - 2) && (uVar3 != 0)) {
        local_28 = param_1[1] - 1;
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
      }
    }
  }
  return;
}


// ===== 00516864  FUN_00516864 =====

void FUN_00516864(ulong *param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  code *pcVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  void *__ptr;
  long local_38;
  
  uVar5 = *param_1;
  if (uVar5 != 0xfffffffffffffffb) {
    if (uVar5 == 0xfffffffffffffffc) {
      __ptr = (void *)param_1[2];
      if (__ptr != (void *)0x0) {
        puVar10 = (undefined8 *)param_1[3];
        pcVar6 = (code *)*puVar10;
        if (pcVar6 != (code *)0x0) {
                    /* try { // try from 005168b8 to 005168bf has its CatchHandler @ 00516a5c */
          (*pcVar6)(__ptr);
        }
        if (puVar10[1] != 0) {
          free(__ptr);
          return;
        }
      }
    }
    else if (uVar5 == 0xfffffffffffffffd) {
      uVar5 = param_1[1] & 3;
      if ((1 < uVar5 - 2) && (uVar5 != 0)) {
        local_38 = param_1[1] - 1;
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_38);
        return;
      }
    }
    else if (uVar5 == 0xfffffffffffffffe) {
      uVar5 = param_1[1];
      iVar4 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::
              drop_join_handle_fast(uVar5);
      if (iVar4 != 0) {
        <tokio::runtime::task::raw::tokio::runtime::task::raw::RawTask>::drop_join_handle_slow
                  (uVar5);
        return;
      }
    }
    else if (uVar5 != 0xffffffffffffffff) {
      uVar9 = param_1[3];
      if (uVar9 == 0) {
        lVar11 = 0;
        uVar5 = 0;
        lVar8 = 0;
      }
      else {
        uVar1 = 0;
        if (uVar5 <= param_1[2]) {
          uVar1 = uVar5;
        }
        lVar8 = param_1[2] - uVar1;
        lVar11 = uVar9 - (uVar5 - lVar8);
        if (uVar9 < uVar5 - lVar8 || lVar11 == 0) {
          lVar11 = 0;
          uVar5 = lVar8 + uVar9;
        }
      }
      uVar9 = param_1[1];
                    /* try { // try from 005169b0 to 005169b3 has its CatchHandler @ 00516a0c */
      FUN_004b98d0(uVar9 + lVar8 * 0x10,uVar5 - lVar8);
                    /* try { // try from 005169b4 to 005169bf has its CatchHandler @ 00516a04 */
      FUN_004b98d0(uVar9,lVar11);
      if (*param_1 != 0) {
        free((void *)param_1[1]);
      }
      plVar7 = (long *)param_1[4];
      do {
        lVar11 = *plVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 + -1 == 0) {
        DataMemoryBarrier(2,1);
        <alloc::sync::[n]::alloc::sync::Arc<std::sys::fs::unix::InnerReadDir>>::drop_slow
                  (param_1 + 4);
        return;
      }
    }
  }
  return;
}


// ===== 00516a80  FUN_00516a80 =====

void FUN_00516a80(long *param_1)

{
  void *__ptr;
  code *pcVar1;
  undefined8 *puVar2;
  long local_28;
  
  if (*param_1 == 0) {
    __ptr = (void *)param_1[2];
    if (param_1[1] == 0) {
      if (((__ptr != (void *)0x0) && (1 < ((ulong)__ptr & 3) - 2)) && (((ulong)__ptr & 3) != 0)) {
        local_28 = (long)__ptr + -1;
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
        return;
      }
    }
    else if (__ptr != (void *)0x0) {
      puVar2 = (undefined8 *)param_1[3];
      pcVar1 = (code *)*puVar2;
      if (pcVar1 != (code *)0x0) {
                    /* try { // try from 00516ac0 to 00516ac7 has its CatchHandler @ 00516b28 */
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


// ===== 00516b44  FUN_00516b44 =====

void FUN_00516b44(long *param_1)

{
  code *pcVar1;
  void *__ptr;
  undefined8 *puVar2;
  
  if (((*param_1 == 0) && (param_1[1] != 0)) && (__ptr = (void *)param_1[2], __ptr != (void *)0x0))
  {
    puVar2 = (undefined8 *)param_1[3];
    pcVar1 = (code *)*puVar2;
    if (pcVar1 != (code *)0x0) {
                    /* try { // try from 00516b80 to 00516b87 has its CatchHandler @ 00516ba0 */
      (*pcVar1)(__ptr);
    }
    if (puVar2[1] != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 00516bbc  FUN_00516bbc =====

void FUN_00516bbc(long *param_1)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *param_1;
  if (lVar3 == -1) {
    pvVar2 = (void *)param_1[2];
    lVar3 = param_1[3] + 1;
    pvVar1 = pvVar2;
    while (lVar3 = lVar3 + -1, lVar3 != 0) {
                    /* try { // try from 00516c3c to 00516c3f has its CatchHandler @ 00516c84 */
      FUN_005254e4(pvVar1);
      pvVar1 = (void *)((long)pvVar1 + 0xb8);
    }
    if (param_1[1] == 0) {
      return;
    }
  }
  else {
    pvVar2 = (void *)param_1[1];
    lVar4 = param_1[2] + 1;
    pvVar1 = pvVar2;
    while (lVar4 = lVar4 + -1, lVar4 != 0) {
                    /* try { // try from 00516bfc to 00516bff has its CatchHandler @ 00516cb4 */
      FUN_005254e4(pvVar1);
      pvVar1 = (void *)((long)pvVar1 + 0xb8);
    }
    if (lVar3 != 0) {
      free(pvVar2);
    }
    if (param_1[3] == 0) {
      return;
    }
    pvVar2 = (void *)param_1[4];
  }
  free(pvVar2);
  return;
}


// ===== 00516d00  FUN_00516d00 =====

void FUN_00516d00(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == -1) {
                    /* try { // try from 00516d4c to 00516d53 has its CatchHandler @ 00516d7c */
    FUN_0052b170(param_1 + 1);
    if (param_1[1] != 0) {
      free((void *)param_1[2]);
      return;
    }
  }
  else {
                    /* try { // try from 00516d1c to 00516d23 has its CatchHandler @ 00516d90 */
    FUN_0052b170(param_1);
    if (lVar1 != 0) {
      free((void *)param_1[1]);
    }
    if (param_1[3] != 0) {
      free((void *)param_1[4]);
      return;
    }
  }
  return;
}


// ===== 00516dc0  FUN_00516dc0 =====

void FUN_00516dc0(long *param_1)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *param_1;
  if (lVar3 == -1) {
    pvVar2 = (void *)param_1[2];
    lVar3 = param_1[3] + 1;
    pvVar1 = pvVar2;
    while (lVar3 = lVar3 + -1, lVar3 != 0) {
                    /* try { // try from 00516e40 to 00516e43 has its CatchHandler @ 00516e88 */
      FUN_00524f38(pvVar1);
      pvVar1 = (void *)((long)pvVar1 + 0x70);
    }
    if (param_1[1] == 0) {
      return;
    }
  }
  else {
    pvVar2 = (void *)param_1[1];
    lVar4 = param_1[2] + 1;
    pvVar1 = pvVar2;
    while (lVar4 = lVar4 + -1, lVar4 != 0) {
                    /* try { // try from 00516e00 to 00516e03 has its CatchHandler @ 00516eb8 */
      FUN_00524f38(pvVar1);
      pvVar1 = (void *)((long)pvVar1 + 0x70);
    }
    if (lVar3 != 0) {
      free(pvVar2);
    }
    if (param_1[3] == 0) {
      return;
    }
    pvVar2 = (void *)param_1[4];
  }
  free(pvVar2);
  return;
}


// ===== 00516f04  FUN_00516f04 =====

void FUN_00516f04(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 00516f14 to 00516f1b has its CatchHandler @ 00516f64 */
  <react_common::ffi::base::ffi::CallInvoker_as_cxx::shared_ptr::SharedPtrTarget>::__drop
            (param_1 + 0x28);
                    /* try { // try from 00516f1c to 00516f23 has its CatchHandler @ 00516f5c */
  FUN_00517794(param_1);
  plVar3 = *(long **)(param_1 + 0x20);
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
    FUN_0050e928((undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}


// ===== 00516fa0  FUN_00516fa0 =====

void FUN_00516fa0(undefined8 *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  code *pcVar2;
  
  __ptr = (void *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  pcVar2 = (code *)*puVar1;
  if (pcVar2 != (code *)0x0) {
                    /* try { // try from 00516fb8 to 00516fbf has its CatchHandler @ 00516fe4 */
    (*pcVar2)(__ptr);
  }
  if (puVar1[1] != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00517000  FUN_00517000 =====

void FUN_00517000(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong *puVar7;
  
  uVar4 = *param_1;
  lVar6 = uVar4 - 3;
  if (uVar4 < 3) {
    lVar6 = 8;
  }
  switch(lVar6) {
  case 0:
  case 1:
  case 2:
  case 5:
  case 6:
  case 7:
  case 10:
  case 0xb:
  case 0x11:
    goto switchD_00517048_caseD_0;
  case 3:
    lVar6 = param_1[3] + 1;
    uVar4 = param_1[2];
    while (lVar6 = lVar6 + -1, lVar6 != 0) {
                    /* try { // try from 00517148 to 0051714b has its CatchHandler @ 00517468 */
      FUN_00525d9c(uVar4);
      uVar4 = uVar4 + 0x2d8;
    }
    if (param_1[1] != 0) {
      free((void *)param_1[2]);
    }
    if (param_1[4] == 0) {
      return;
    }
    free((void *)param_1[5]);
    return;
  case 4:
    plVar5 = (long *)param_1[2];
    if (plVar5 == (long *)0x0) {
      return;
    }
    do {
      lVar6 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 + -1 != 0) {
      return;
    }
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 2);
    return;
  case 8:
    if (uVar4 != 2) {
                    /* try { // try from 0051715c to 00517163 has its CatchHandler @ 005172f4 */
      FUN_00517dd8(param_1);
    }
                    /* try { // try from 00517164 to 0051716b has its CatchHandler @ 00517324 */
    FUN_00516bbc(param_1 + 0x45);
                    /* try { // try from 0051716c to 00517173 has its CatchHandler @ 0051731c */
    FUN_00516d00(param_1 + 0x4b);
    FUN_00516dc0(param_1 + 0x51);
    return;
  case 9:
                    /* try { // try from 005171f4 to 005171fb has its CatchHandler @ 0051733c */
    FUN_00517dd8(param_1 + 1);
    lVar6 = param_1[0x48] + 1;
    uVar4 = param_1[0x47];
    while (lVar6 = lVar6 + -1, lVar6 != 0) {
                    /* try { // try from 00517214 to 00517217 has its CatchHandler @ 005173f8 */
      FUN_005254e4(uVar4);
      uVar4 = uVar4 + 0xb8;
    }
    if (param_1[0x46] != 0) {
      free((void *)param_1[0x47]);
    }
                    /* try { // try from 005172a8 to 005172af has its CatchHandler @ 00517304 */
    FUN_0052b170(param_1 + 0x49);
    if (param_1[0x49] != 0) {
      free((void *)param_1[0x4a]);
    }
    puVar7 = param_1 + 0x4d;
    lVar6 = param_1[0x4e] + 1;
    uVar4 = param_1[0x4d];
    while (lVar6 = lVar6 + -1, lVar6 != 0) {
                    /* try { // try from 005172dc to 005172df has its CatchHandler @ 005173c8 */
      FUN_00524f38(uVar4);
      uVar4 = uVar4 + 0x70;
    }
    if (param_1[0x4c] == 0) {
      return;
    }
    goto LAB_0051724c;
  case 0xc:
    lVar6 = param_1[3] + 1;
    uVar4 = param_1[2];
    while (lVar6 = lVar6 + -1, lVar6 != 0) {
                    /* try { // try from 005170ec to 005170ef has its CatchHandler @ 005174d0 */
      FUN_00525c7c(uVar4);
      uVar4 = uVar4 + 0x260;
    }
    break;
  case 0xd:
                    /* try { // try from 0051718c to 00517193 has its CatchHandler @ 0051734c */
    FUN_0052b258(param_1 + 1);
    goto LAB_00517194;
  case 0xe:
                    /* try { // try from 005170c8 to 005170cf has its CatchHandler @ 0051737c */
    FUN_0052b258(param_1 + 1);
    goto LAB_00517194;
  case 0xf:
  case 0x10:
    FUN_00517b74(param_1 + 1);
    return;
  case 0x12:
                    /* try { // try from 00517128 to 0051712f has its CatchHandler @ 0051735c */
    FUN_0052b170(param_1 + 1);
    goto LAB_00517194;
  case 0x13:
    uVar3 = param_1[2];
    for (uVar4 = param_1[3]; uVar4 != 0; uVar4 = uVar4 - 1) {
                    /* try { // try from 005171d8 to 005171df has its CatchHandler @ 00517394 */
      FUN_0052b170(uVar3 + 8);
      if (*(long *)(uVar3 + 8) != 0) {
        free(*(void **)(uVar3 + 0x10));
      }
      uVar3 = uVar3 + 0x20;
    }
    break;
  case 0x14:
    lVar6 = param_1[3] + 1;
    uVar4 = param_1[2];
    while (lVar6 = lVar6 + -1, lVar6 != 0) {
                    /* try { // try from 00517110 to 00517113 has its CatchHandler @ 005174ac */
      FUN_00524f38(uVar4);
      uVar4 = uVar4 + 0x70;
    }
    break;
  case 0x15:
                    /* try { // try from 0051711c to 00517123 has its CatchHandler @ 0051736c */
    FUN_0052b3c4(param_1 + 1);
LAB_00517194:
    if (param_1[1] == 0) {
      return;
    }
    free((void *)param_1[2]);
    return;
  case 0x16:
  case 0x17:
    FUN_00517cdc(param_1 + 1);
    return;
  default:
    lVar6 = param_1[3] + 1;
    uVar4 = param_1[2];
    while (lVar6 = lVar6 + -1, lVar6 != 0) {
                    /* try { // try from 00517238 to 0051723b has its CatchHandler @ 00517444 */
      FUN_00524f38(uVar4);
      uVar4 = uVar4 + 0x70;
    }
  }
  puVar7 = param_1 + 2;
  if (param_1[1] != 0) {
LAB_0051724c:
    free((void *)*puVar7);
    return;
  }
switchD_00517048_caseD_0:
  return;
}


// ===== 0051750c  FUN_0051750c =====

void FUN_0051750c(undefined8 *param_1)

{
  ulong uVar1;
  long *__ptr;
  long local_28;
  
  __ptr = (long *)*param_1;
  if (*__ptr == 1) {
    uVar1 = __ptr[1] & 3;
    if (1 < uVar1 - 2 && uVar1 != 0) {
      local_28 = __ptr[1] - 1;
                    /* try { // try from 0051759c to 005175a3 has its CatchHandler @ 005175a8 */
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
    }
  }
  else if ((*__ptr == 0) && (__ptr[2] != 0)) {
    free((void *)__ptr[1]);
    free(__ptr);
    return;
  }
  free(__ptr);
  return;
}


// ===== 005175bc  FUN_005175bc =====

void FUN_005175bc(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    free((void *)*param_1);
    return;
  }
  return;
}


// ===== 005175d0  FUN_005175d0 =====

void FUN_005175d0(undefined8 *param_1)

{
  code *pcVar1;
  long *__ptr;
  void *__ptr_00;
  undefined8 *puVar2;
  
  __ptr = (long *)*param_1;
  __ptr_00 = (void *)__ptr[0xb];
  if (__ptr_00 != (void *)0x0) {
    puVar2 = (undefined8 *)__ptr[0xc];
    pcVar1 = (code *)*puVar2;
    if (pcVar1 != (code *)0x0) {
                    /* try { // try from 005175f8 to 005175ff has its CatchHandler @ 0051763c */
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


// ===== 00517690  FUN_00517690 =====

void FUN_00517690(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 005176a4  FUN_005176a4 =====

void FUN_005176a4(ulong *param_1)

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


// ===== 005176f4  FUN_005176f4 =====

void FUN_005176f4(undefined8 *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  
  plVar4 = (long *)*param_1;
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
                    /* try { // try from 00517720 to 00517727 has its CatchHandler @ 00517760 */
    <alloc[c1f8e832b0d782c7]::sync::Arc<std[17aff9129faa4dc5]::thread::thread::Inner,std[17aff9129faa4dc5]::alloc::System>>
    ::drop_slow(param_1);
  }
  __ptr = (void *)param_1[1];
  puVar1 = (undefined8 *)param_1[2];
  pcVar5 = (code *)*puVar1;
  if (pcVar5 != (code *)0x0) {
                    /* try { // try from 00517734 to 0051773b has its CatchHandler @ 00517778 */
    (*pcVar5)(__ptr);
  }
  if (puVar1[1] != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00517794  FUN_00517794 =====

void FUN_00517794(long *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  
                    /* try { // try from 005177ac to 005177b3 has its CatchHandler @ 00517860 */
  <std::thread::spawnhook::SpawnHooks_as_core::ops::drop::Drop>::drop(param_1 + 3);
  plVar4 = (long *)param_1[3];
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
                    /* try { // try from 005177d4 to 005177db has its CatchHandler @ 00517858 */
      <alloc::sync::[n]::alloc::sync::Arc<std::thread::spawnhook::SpawnHook>>::drop_slow
                (param_1 + 3);
    }
  }
  lVar6 = param_1[2];
  if (lVar6 != 0) {
    lVar7 = param_1[1] + 0x18;
    do {
      __ptr = *(void **)(lVar7 + -0x18);
      puVar1 = *(undefined8 **)(lVar7 + -0x10);
      pcVar5 = (code *)*puVar1;
      if (pcVar5 != (code *)0x0) {
                    /* try { // try from 00517808 to 0051780f has its CatchHandler @ 005178a0 */
        (*pcVar5)(__ptr);
      }
      if (puVar1[1] != 0) {
        free(__ptr);
      }
      lVar6 = lVar6 + -1;
      lVar7 = lVar7 + 0x10;
    } while (lVar6 != 0);
  }
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 005178e8  FUN_005178e8 =====

void FUN_005178e8(long *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long local_18;
  
  lVar2 = *param_1;
  lVar1 = lVar2 + -0x7fffffffffffffff;
  if (-0x7fffffffffffffff < lVar2) {
    lVar1 = 0;
  }
  if (lVar1 == 0) {
    if (lVar2 == -1) {
      uVar3 = param_1[1] & 3;
      if ((1 < uVar3 - 2) && (uVar3 != 0)) {
        local_18 = param_1[1] - 1;
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
        return;
      }
    }
    else if (lVar2 != 0) {
      free((void *)param_1[1]);
      return;
    }
  }
  else if (lVar1 != 1) {
    FUN_0051750c(param_1 + 1);
    return;
  }
  return;
}


// ===== 0051797c  FUN_0051797c =====

void FUN_0051797c(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long local_18;
  
  uVar1 = *param_1;
  uVar2 = uVar1 ^ 0x8000000000000000;
  if (-1 < (long)uVar1) {
    uVar2 = 2;
  }
  if ((long)uVar2 < 2) {
    if (uVar2 == 0) {
      FUN_005175d0(param_1 + 1);
      return;
    }
    if (uVar2 == 1) {
      FUN_0051750c(param_1 + 1);
      return;
    }
  }
  else if (uVar2 == 2) {
    if (uVar1 != 0) {
      free((void *)param_1[1]);
      return;
    }
  }
  else if (uVar2 == 3) {
    uVar2 = param_1[1] & 3;
    if ((1 < uVar2 - 2) && (uVar2 != 0)) {
      local_18 = param_1[1] - 1;
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
      return;
    }
  }
  return;
}


// ===== 00517a20  FUN_00517a20 =====

void FUN_00517a20(long *param_1)

{
  ulong uVar1;
  long local_18;
  
  if (*param_1 == -1) {
    uVar1 = param_1[1] & 3;
    if ((1 < uVar1 - 2) && (uVar1 != 0)) {
      local_18 = param_1[1] - 1;
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
      return;
    }
  }
  else if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 00517a88  FUN_00517a88 =====

void FUN_00517a88(long *param_1)

{
  void *__ptr;
  void *pvVar1;
  long lVar2;
  
  __ptr = (void *)param_1[1];
  lVar2 = param_1[2] + 1;
  pvVar1 = __ptr;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 00517ab8 to 00517abb has its CatchHandler @ 00517b10 */
    FUN_00524bb8(pvVar1);
    pvVar1 = (void *)((long)pvVar1 + 0x30);
  }
  if (*param_1 != 0) {
    free(__ptr);
  }
  if ((param_1[3] != -1) && (param_1[3] != 0)) {
    free((void *)param_1[4]);
    return;
  }
  return;
}


// ===== 00517b74  FUN_00517b74 =====

void FUN_00517b74(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (0x18 < *(byte *)(param_1 + 0x38)) {
    plVar3 = *(long **)(param_1 + 0x40);
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
                    /* try { // try from 00517bb0 to 00517bb3 has its CatchHandler @ 00517c40 */
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
    }
  }
  plVar3 = *(long **)(param_1 + 0x58);
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
                    /* try { // try from 00517bd8 to 00517bdb has its CatchHandler @ 00517c7c */
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
    }
  }
  plVar3 = *(long **)(param_1 + 0x78);
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
                    /* try { // try from 00517c00 to 00517c03 has its CatchHandler @ 00517c74 */
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
    }
  }
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
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow((undefined8 *)(param_1 + 0x88));
      return;
    }
  }
  return;
}


// ===== 00517cdc  FUN_00517cdc =====

void FUN_00517cdc(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (0x18 < *(byte *)(param_1 + 0x10)) {
    plVar3 = *(long **)(param_1 + 0x18);
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
                    /* try { // try from 00517d18 to 00517d1b has its CatchHandler @ 00517d98 */
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
    }
  }
  if ((*(byte *)(param_1 + 0x28) != 0xff) && (0x18 < *(byte *)(param_1 + 0x28))) {
    plVar3 = *(long **)(param_1 + 0x30);
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
                    /* try { // try from 00517d50 to 00517d53 has its CatchHandler @ 00517d90 */
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
    }
  }
  plVar3 = *(long **)(param_1 + 0x50);
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
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow((undefined8 *)(param_1 + 0x50));
      return;
    }
  }
  return;
}


// ===== 00517dd8  FUN_00517dd8 =====

void FUN_00517dd8(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (0x18 < *(byte *)(param_1 + 0x100)) {
    plVar3 = *(long **)(param_1 + 0x108);
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
                    /* try { // try from 00517e10 to 00517e17 has its CatchHandler @ 0051809c */
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 0x108);
    }
  }
  plVar3 = *(long **)(param_1 + 0x158);
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
                    /* try { // try from 00517e38 to 00517e3f has its CatchHandler @ 005180f4 */
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 0x158);
    }
  }
  plVar3 = *(long **)(param_1 + 0x150);
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
                    /* try { // try from 00517e5c to 00517e63 has its CatchHandler @ 00518120 */
    <alloc::sync::[n]::alloc::sync::Arc<std::collections::hash::set::HashSet<smol_str::SmolStr>>>::
    drop_slow(param_1 + 0x150);
  }
  plVar3 = *(long **)(param_1 + 0x168);
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
                    /* try { // try from 00517e84 to 00517e8b has its CatchHandler @ 005180ec */
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 0x168);
    }
  }
  plVar3 = *(long **)(param_1 + 0x178);
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
                    /* try { // try from 00517eac to 00517eb3 has its CatchHandler @ 005180e4 */
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 0x178);
    }
  }
  plVar3 = *(long **)(param_1 + 0x188);
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
                    /* try { // try from 00517ed4 to 00517edb has its CatchHandler @ 005180dc */
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 0x188);
    }
  }
  plVar3 = *(long **)(param_1 + 0x198);
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
                    /* try { // try from 00517efc to 00517f03 has its CatchHandler @ 005180d4 */
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 0x198);
    }
  }
  plVar3 = *(long **)(param_1 + 0x1a8);
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
                    /* try { // try from 00517f24 to 00517f2b has its CatchHandler @ 005180cc */
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 0x1a8);
    }
  }
  if (0x18 < *(byte *)(param_1 + 0x118)) {
    plVar3 = *(long **)(param_1 + 0x120);
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
                    /* try { // try from 00517f54 to 00517f5b has its CatchHandler @ 00518094 */
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 0x120);
    }
  }
  if ((*(byte *)(param_1 + 0x130) != 0xff) && (0x18 < *(byte *)(param_1 + 0x130))) {
    plVar3 = *(long **)(param_1 + 0x138);
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
                    /* try { // try from 00517f8c to 00517f93 has its CatchHandler @ 00518044 */
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 0x138);
    }
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    plVar3 = *(long **)(param_1 + 0x48);
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
                    /* try { // try from 00517fc0 to 00517fc3 has its CatchHandler @ 00518054 */
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
      }
    }
    plVar3 = *(long **)(param_1 + 0x58);
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
                    /* try { // try from 00517fe8 to 00517feb has its CatchHandler @ 0051804c */
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
      }
    }
  }
  if (*(short *)(param_1 + 0xe8) != 2) {
    plVar3 = *(long **)(param_1 + 0xd0);
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
                    /* try { // try from 00518014 to 0051801b has its CatchHandler @ 0051808c */
      <alloc::sync::[n]::alloc::sync::Arc<[smol_str::SmolStr]>>::drop_slow(param_1 + 0xd0);
    }
  }
  if ((*(long *)(param_1 + 0xb8) != -1) && (*(long *)(param_1 + 0xb8) != 0)) {
    free(*(void **)(param_1 + 0xc0));
  }
  FUN_00515c0c(param_1 + 0x68);
  return;
}


// ===== 00518284  FUN_00518284 =====

void FUN_00518284(undefined8 *param_1,undefined8 param_2,ulong param_3,ulong param_4,uint param_5,
                 long *param_6,long *param_7)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  undefined *puVar5;
  undefined1 *__ptr;
  code *pcVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  long *local_130;
  long *local_128;
  undefined1 *puStack_120;
  long local_118;
  long lStack_110;
  long *local_108;
  long *local_100;
  undefined1 *puStack_f8;
  long lStack_f0;
  long lStack_e8;
  long *local_e0;
  long lStack_d8;
  long lStack_d0;
  long local_c8;
  long lStack_c0;
  long *local_b0;
  byte *pbStack_a8;
  undefined **local_a0;
  long lStack_98;
  long *local_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long local_70;
  
  puVar5 = PTR_MIN_00b00ce0;
  if ((param_3 & 1) != 0) goto LAB_0051840c;
  if (*(long *)PTR_MIN_00b00ce0 != 0) {
    param_4 = *(long *)PTR_MIN_00b00ce0 - 1;
    goto LAB_0051840c;
  }
                    /* try { // try from 005182e0 to 005182f3 has its CatchHandler @ 0051866c */
  std::sys::env::unix::getenv(&local_100,"RUST_MIN_STACK",0xe);
  __ptr = puStack_f8;
  plVar8 = local_100;
  if (local_100 == (long *)0xffffffffffffffff) {
    param_4 = 0x200000;
  }
  else {
                    /* try { // try from 00518304 to 0051830f has its CatchHandler @ 0051861c */
    core::str::converts::from_utf8(&local_b0,puStack_f8,lStack_f0);
    if ((local_b0 == (long *)0x1) || (local_a0 == (undefined **)0x0)) {
      param_4 = 0x200000;
    }
    else {
      if (local_a0 == (undefined **)0x1) {
        bVar1 = *pbStack_a8;
        param_4 = 0x200000;
        if ((bVar1 == 0x2b) || (bVar1 == 0x2d)) goto joined_r0x005185e4;
      }
      else {
        bVar1 = *pbStack_a8;
      }
      if (bVar1 == 0x2b) {
        pbStack_a8 = pbStack_a8 + 1;
      }
      uVar10 = (long)local_a0 - (ulong)(bVar1 == 0x2b);
      if (uVar10 < 0x11) {
        param_4 = 0;
        for (; uVar10 != 0; uVar10 = uVar10 - 1) {
          if (9 < *pbStack_a8 - 0x30) {
            param_4 = 0x200000;
            break;
          }
          param_4 = param_4 * 10 + (ulong)(*pbStack_a8 - 0x30);
          pbStack_a8 = pbStack_a8 + 1;
        }
      }
      else {
        uVar12 = 0;
        uVar14 = 0x200000;
        while ((param_4 = uVar12, uVar10 != 0 &&
               (auVar15._8_8_ = 0, auVar15._0_8_ = uVar12, param_4 = uVar14,
               SUB168(auVar15 * ZEXT816(10),8) == 0))) {
          uVar13 = uVar12 * 10;
          uVar4 = *pbStack_a8 - 0x30;
          uVar12 = uVar13 + uVar4;
          if ((9 < uVar4) ||
             (uVar10 = uVar10 - 1, pbStack_a8 = pbStack_a8 + 1, CARRY8(uVar13,(ulong)uVar4))) break;
        }
      }
    }
joined_r0x005185e4:
    if (plVar8 != (long *)0x0) {
      free(__ptr);
    }
  }
  *(ulong *)puVar5 = param_4 + 1;
LAB_0051840c:
                    /* try { // try from 00518410 to 0051841f has its CatchHandler @ 0051866c */
  uVar7 = <std::thread::id::std::thread::id::ThreadId>::new();
  local_130 = (long *)<std::thread::thread::std::thread::thread::Thread>::new(uVar7,param_2);
  if ((param_5 & 1) == 0) {
                    /* try { // try from 00518438 to 00518443 has its CatchHandler @ 00518644 */
    std::thread::spawnhook::run_spawn_hooks(&local_128,&local_130);
  }
  else {
    local_118 = 0;
    lStack_110 = 0;
    local_128 = (long *)0x0;
    puStack_120 = &DAT_00000008;
  }
  local_a0 = (undefined **)0x0;
  pbStack_a8 = &DAT_00000001;
  local_b0 = (long *)0x1;
  local_90 = param_6;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  local_108 = (long *)malloc(0x28);
  if (local_108 == (long *)0x0) {
                    /* try { // try from 005185ec to 005185f7 has its CatchHandler @ 005186d0 */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x28);
  }
  local_108[4] = (long)local_90;
  local_108[1] = (long)pbStack_a8;
  *local_108 = (long)local_b0;
  local_108[3] = lStack_98;
  local_108[2] = (long)local_a0;
  do {
    lVar11 = *local_108;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(local_108,0x10);
    if (bVar3) {
      *local_108 = lVar11 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (-1 < lVar11) {
    lStack_d0 = param_7[1];
    lStack_d8 = *param_7;
    lStack_c0 = param_7[3];
    local_c8 = param_7[2];
    puStack_f8 = puStack_120;
    local_100 = local_128;
    lStack_e8 = lStack_110;
    lStack_f0 = local_118;
    local_e0 = local_108;
    if (local_108[4] != 0) {
                    /* try { // try from 005184b8 to 005184bf has its CatchHandler @ 00518654 */
      <std::thread::scoped::std::thread::scoped::ScopeData>::increment_num_running_threads
                (local_108[4] + 0x10);
    }
    local_70 = lStack_c0;
    lStack_88 = lStack_d8;
    local_90 = local_e0;
    lStack_78 = local_c8;
    lStack_80 = lStack_d0;
    pbStack_a8 = puStack_f8;
    local_b0 = local_100;
    lStack_98 = lStack_e8;
    local_a0 = (undefined **)lStack_f0;
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    plVar8 = (long *)malloc(0x48);
    if (plVar8 == (long *)0x0) {
                    /* try { // try from 005185fc to 00518607 has its CatchHandler @ 0051868c */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x48);
    }
    plVar8[8] = lStack_c0;
    plVar8[5] = lStack_d8;
    plVar8[4] = (long)local_e0;
    plVar8[7] = local_c8;
    plVar8[6] = lStack_d0;
    plVar8[1] = (long)puStack_f8;
    *plVar8 = (long)local_100;
    plVar8[3] = lStack_e8;
    plVar8[2] = lStack_f0;
    do {
      lVar11 = *local_130;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(local_130,0x10);
      if (bVar3) {
        *local_130 = lVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (-1 < lVar11) {
      local_b0 = local_130;
      local_a0 = &PTR_FUN_00acd338;
      pbStack_a8 = (byte *)plVar8;
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      puVar9 = (undefined8 *)malloc(0x18);
      if (puVar9 != (undefined8 *)0x0) {
        puVar9[1] = pbStack_a8;
        *puVar9 = local_b0;
        puVar9[2] = local_a0;
                    /* try { // try from 00518550 to 00518557 has its CatchHandler @ 00518664 */
        auVar15 = <std::sys::thread::unix::[0]::std::sys::thread::unix::Thread>::new(param_4,puVar9)
        ;
        if (auVar15._0_8_ == 1) {
          *param_1 = 0;
          param_1[1] = auVar15._8_8_;
          do {
            lVar11 = *local_108;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(local_108,0x10);
            if (bVar3) {
              *local_108 = lVar11 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar11 + -1 == 0) {
            DataMemoryBarrier(2,1);
                    /* try { // try from 00518580 to 00518587 has its CatchHandler @ 0051863c */
            FUN_0050e928(&local_108);
          }
          do {
            lVar11 = *local_130;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(local_130,0x10);
            if (bVar3) {
              *local_130 = lVar11 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar11 + -1 == 0) {
            DataMemoryBarrier(2,1);
            <alloc[c1f8e832b0d782c7]::sync::Arc<std[17aff9129faa4dc5]::thread::thread::Inner,std[17aff9129faa4dc5]::alloc::System>>
            ::drop_slow(&local_130);
          }
        }
        else {
          param_1[2] = auVar15._8_8_;
          *param_1 = local_130;
          param_1[1] = local_108;
        }
        return;
      }
                    /* try { // try from 0051860c to 00518617 has its CatchHandler @ 00518678 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x18);
    }
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x51861c);
  (*pcVar6)();
}


// ===== 00518780  FUN_00518780 =====

undefined8 FUN_00518780(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined2 *puVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  undefined2 uStack_5a;
  undefined1 auStack_58 [6];
  undefined2 local_52 [17];
  
  uVar3 = *param_1;
  if (uVar3 >> 4 < 0x271) {
    lVar6 = 10;
    plVar8 = (long *)*param_2;
    if (99 < uVar3) goto LAB_00518820;
  }
  else {
    lVar6 = 10;
    uVar9 = (ulong)uVar3;
    puVar7 = local_52 + 1;
    do {
      uVar5 = uVar9;
      lVar6 = lVar6 + -4;
      uVar3 = (uint)(uVar5 / 10000);
      uVar4 = (uint)(uVar5 / 10000);
      uVar2 = (uint)uVar5 + uVar4 * -10000;
      uVar1 = (uVar2 >> 2 & 0x3fff) / 0x19;
      puVar7[-1] = *(undefined2 *)
                    (
                    "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                    + (ulong)uVar1 * 2);
      *puVar7 = *(undefined2 *)
                 (
                 "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                 + ((ulong)(uVar2 + uVar1 * -100) & 0xffff) * 2);
      uVar9 = uVar5 / 10000;
      puVar7 = puVar7 + -2;
    } while (99999999 < (uint)uVar5);
    plVar8 = (long *)*param_2;
    if (0x62 < uVar4 && (int)(uVar5 / 10000) != 99) {
LAB_00518820:
      uVar1 = (uVar3 >> 2 & 0x3fff) / 0x19;
      *(undefined2 *)((long)&uStack_5a + lVar6) =
           *(undefined2 *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
            + ((ulong)(uVar3 + uVar1 * -100) & 0xffff) * 2);
      lVar6 = lVar6 + -2;
      uVar3 = uVar1;
    }
  }
  if (uVar3 < 10) {
    lVar10 = lVar6 + -1;
    *(byte *)((long)&uStack_5a + lVar6 + 1) = (byte)uVar3 | 0x30;
  }
  else {
    lVar10 = lVar6 + -2;
    *(undefined2 *)((long)&uStack_5a + lVar6) =
         *(undefined2 *)
          (
          "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
          + (ulong)uVar3 * 2);
  }
  lVar6 = plVar8[2];
  uVar9 = 10 - lVar10;
  if ((ulong)(*plVar8 - lVar6) < uVar9) {
    FUN_0052f310(plVar8,lVar6,uVar9,1,1);
    lVar6 = plVar8[2];
  }
  else if (lVar10 == 10) goto LAB_005188cc;
  memcpy((void *)(plVar8[1] + lVar6),auStack_58 + lVar10,uVar9);
LAB_005188cc:
  plVar8[2] = lVar6 + uVar9;
  return 0;
}


// ===== 0051890c  FUN_0051890c =====

long FUN_0051890c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 *local_40;
  char local_38;
  
  plVar2 = (long *)*param_2;
  lVar1 = plVar2[2];
  if (*plVar2 == lVar1) {
    FUN_0052f310(plVar2,lVar1,1,1,1);
    lVar1 = plVar2[2];
  }
  plVar2[2] = lVar1 + 1;
  *(undefined1 *)(plVar2[1] + lVar1) = 0x7b;
  local_38 = '\x01';
  local_40 = param_2;
  lVar1 = FUN_004bbb68(&local_40,"storeToken",10,param_1 + 0x18);
  if ((lVar1 == 0) && (lVar1 = FUN_004bb0e4(&local_40,"initialState",0xc,param_1), lVar1 == 0)) {
    if (local_38 != '\0') {
      plVar2 = (long *)*local_40;
      lVar1 = plVar2[2];
      if (*plVar2 == lVar1) {
        FUN_0052f310(plVar2,lVar1,1,1,1);
        lVar1 = plVar2[2];
      }
      plVar2[2] = lVar1 + 1;
      *(undefined1 *)(plVar2[1] + lVar1) = 0x7d;
      return 0;
    }
    return 0;
  }
  return lVar1;
}


// ===== 00518a4c  FUN_00518a4c =====

long FUN_00518a4c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 *local_40;
  char local_38;
  
  plVar2 = (long *)*param_2;
  lVar1 = plVar2[2];
  if (*plVar2 == lVar1) {
    FUN_0052f310(plVar2,lVar1,1,1,1);
    lVar1 = plVar2[2];
  }
  plVar2[2] = lVar1 + 1;
  *(undefined1 *)(plVar2[1] + lVar1) = 0x7b;
  local_38 = '\x01';
  local_40 = param_2;
  lVar1 = FUN_004bb54c(&local_40,"storeResults",0xc,param_1);
  if ((lVar1 == 0) && (lVar1 = FUN_004bb8ec(&local_40,"metrics",7,param_1 + 0x18), lVar1 == 0)) {
    if (local_38 != '\0') {
      plVar2 = (long *)*local_40;
      lVar1 = plVar2[2];
      if (*plVar2 == lVar1) {
        FUN_0052f310(plVar2,lVar1,1,1,1);
        lVar1 = plVar2[2];
      }
      plVar2[2] = lVar1 + 1;
      *(undefined1 *)(plVar2[1] + lVar1) = 0x7d;
      return 0;
    }
    return 0;
  }
  return lVar1;
}


// ===== 00518b8c  FUN_00518b8c =====

long FUN_00518b8c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 *local_40;
  char local_38;
  
  plVar2 = (long *)*param_2;
  lVar1 = plVar2[2];
  if (*plVar2 == lVar1) {
    FUN_0052f310(plVar2,lVar1,1,1,1);
    lVar1 = plVar2[2];
  }
  plVar2[2] = lVar1 + 1;
  *(undefined1 *)(plVar2[1] + lVar1) = 0x7b;
  local_38 = '\x01';
  local_40 = param_2;
  lVar1 = FUN_004baeb4(&local_40,"timings",7,param_1);
  if (((lVar1 == 0) && (lVar1 = FUN_004bb318(&local_40,"mutations",9,param_1 + 0x18), lVar1 == 0))
     && (lVar1 = FUN_004bac84(&local_40,"memory",6,param_1 + 0x30), lVar1 == 0)) {
    if (local_38 != '\0') {
      plVar2 = (long *)*local_40;
      lVar1 = plVar2[2];
      if (*plVar2 == lVar1) {
        FUN_0052f310(plVar2,lVar1,1,1,1);
        lVar1 = plVar2[2];
      }
      plVar2[2] = lVar1 + 1;
      *(undefined1 *)(plVar2[1] + lVar1) = 0x7d;
      return 0;
    }
    return 0;
  }
  return lVar1;
}


// ===== 00518ce8  FUN_00518ce8 =====

long FUN_00518ce8(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 *local_40;
  char local_38;
  
  plVar2 = (long *)*param_2;
  lVar1 = plVar2[2];
  if (*plVar2 == lVar1) {
    FUN_0052f310(plVar2,lVar1,1,1,1);
    lVar1 = plVar2[2];
  }
  plVar2[2] = lVar1 + 1;
  *(undefined1 *)(plVar2[1] + lVar1) = 0x7b;
  local_38 = '\x01';
  local_40 = param_2;
  lVar1 = FUN_004bba58(&local_40,"kind",4,param_1);
  if ((lVar1 == 0) &&
     (lVar1 = FUN_004bbfdc(&local_40,"durationMillis",0xe,param_1 + 0x18), lVar1 == 0)) {
    if (local_38 != '\0') {
      plVar2 = (long *)*local_40;
      lVar1 = plVar2[2];
      if (*plVar2 == lVar1) {
        FUN_0052f310(plVar2,lVar1,1,1,1);
        lVar1 = plVar2[2];
      }
      plVar2[2] = lVar1 + 1;
      *(undefined1 *)(plVar2[1] + lVar1) = 0x7d;
      return 0;
    }
    return 0;
  }
  return lVar1;
}


// ===== 00518e28  FUN_00518e28 =====

long FUN_00518e28(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 *local_40;
  char local_38;
  
  plVar2 = (long *)*param_2;
  lVar1 = plVar2[2];
  if (*plVar2 == lVar1) {
    FUN_0052f310(plVar2,lVar1,1,1,1);
    lVar1 = plVar2[2];
  }
  plVar2[2] = lVar1 + 1;
  *(undefined1 *)(plVar2[1] + lVar1) = 0x7b;
  local_38 = '\x01';
  local_40 = param_2;
  lVar1 = FUN_004bba58(&local_40,"recordType",10,param_1);
  if ((lVar1 == 0) && (lVar1 = FUN_004bbc5c(&local_40,"metrics",7,param_1 + 0x18), lVar1 == 0)) {
    if (local_38 != '\0') {
      plVar2 = (long *)*local_40;
      lVar1 = plVar2[2];
      if (*plVar2 == lVar1) {
        FUN_0052f310(plVar2,lVar1,1,1,1);
        lVar1 = plVar2[2];
      }
      plVar2[2] = lVar1 + 1;
      *(undefined1 *)(plVar2[1] + lVar1) = 0x7d;
      return 0;
    }
    return 0;
  }
  return lVar1;
}


// ===== 00518f68  FUN_00518f68 =====

long FUN_00518f68(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 *local_40;
  char local_38;
  
  plVar2 = (long *)*param_2;
  lVar1 = plVar2[2];
  if (*plVar2 == lVar1) {
    FUN_0052f310(plVar2,lVar1,1,1,1);
    lVar1 = plVar2[2];
  }
  plVar2[2] = lVar1 + 1;
  *(undefined1 *)(plVar2[1] + lVar1) = 0x7b;
  local_38 = '\x01';
  local_40 = param_2;
  lVar1 = FUN_004bc1a4(&local_40,"removed",7,param_1);
  if ((((lVar1 == 0) && (lVar1 = FUN_004bc1a4(&local_40,"resurrected",0xb,param_1 + 4), lVar1 == 0))
      && (lVar1 = FUN_004bc1a4(&local_40,&DAT_002a1790,8,param_1 + 8), lVar1 == 0)) &&
     (((lVar1 = FUN_004bc1a4(&local_40,"updated",7,param_1 + 0xc), lVar1 == 0 &&
       (lVar1 = FUN_004bc1a4(&local_40,"fieldsUpdated",0xd,param_1 + 0x10), lVar1 == 0)) &&
      (lVar1 = FUN_004bbe44(&local_40,&DAT_002a12c8,8,param_1 + 0x14), lVar1 == 0)))) {
    if (local_38 != '\0') {
      FUN_00529148(*local_40,"}",1);
    }
    return 0;
  }
  return lVar1;
}


// ===== 005190d0  FUN_005190d0 =====

long FUN_005190d0(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 *local_40;
  char local_38;
  
  plVar2 = (long *)*param_2;
  lVar1 = plVar2[2];
  if (*plVar2 == lVar1) {
    FUN_0052f310(plVar2,lVar1,1,1,1);
    lVar1 = plVar2[2];
  }
  plVar2[2] = lVar1 + 1;
  *(undefined1 *)(plVar2[1] + lVar1) = 0x7b;
  local_38 = '\x01';
  local_40 = param_2;
  lVar1 = FUN_004bba58(&local_40,"recordType",10,param_1);
  if ((lVar1 == 0) && (lVar1 = FUN_004bbd50(&local_40,"statistics",10,param_1 + 0x18), lVar1 == 0))
  {
    if (local_38 != '\0') {
      plVar2 = (long *)*local_40;
      lVar1 = plVar2[2];
      if (*plVar2 == lVar1) {
        FUN_0052f310(plVar2,lVar1,1,1,1);
        lVar1 = plVar2[2];
      }
      plVar2[2] = lVar1 + 1;
      *(undefined1 *)(plVar2[1] + lVar1) = 0x7d;
      return 0;
    }
    return 0;
  }
  return lVar1;
}


// ===== 00519210  FUN_00519210 =====

long FUN_00519210(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 *local_40;
  char local_38;
  
  plVar3 = (long *)*param_2;
  lVar2 = plVar3[2];
  if (*plVar3 == lVar2) {
    FUN_0052f310(plVar3,lVar2,1,1,1);
    lVar2 = plVar3[2];
  }
  plVar3[2] = lVar2 + 1;
  *(undefined1 *)(plVar3[1] + lVar2) = 0x7b;
  local_38 = '\x01';
  local_40 = param_2;
  lVar2 = FUN_004bc404(&local_40,"items",5,param_1);
  if ((lVar2 == 0) && (local_38 != '\0')) {
    plVar3 = (long *)*local_40;
    lVar1 = plVar3[2];
    if (*plVar3 == lVar1) {
      FUN_0052f310(plVar3,lVar1,1,1,1);
      lVar1 = plVar3[2];
    }
    plVar3[2] = lVar1 + 1;
    *(undefined1 *)(plVar3[1] + lVar1) = 0x7d;
  }
  return lVar2;
}


// ===== 0051930c  FUN_0051930c =====

long FUN_0051930c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 *local_40;
  char local_38;
  
  plVar2 = (long *)*param_2;
  lVar1 = plVar2[2];
  if (*plVar2 == lVar1) {
    FUN_0052f310(plVar2,lVar1,1,1,1);
    lVar1 = plVar2[2];
  }
  plVar2[2] = lVar1 + 1;
  *(undefined1 *)(plVar2[1] + lVar1) = 0x7b;
  local_38 = '\x01';
  local_40 = param_2;
  lVar1 = FUN_004bbb68(&local_40,"storeToken",10,param_1 + 0x30);
  if (((lVar1 == 0) && (lVar1 = FUN_004bb0e4(&local_40,"databaseChanges",0xf,param_1), lVar1 == 0))
     && (lVar1 = FUN_004bb780(&local_40,"error",5,param_1 + 0x18), lVar1 == 0)) {
    if (local_38 != '\0') {
      plVar2 = (long *)*local_40;
      lVar1 = plVar2[2];
      if (*plVar2 == lVar1) {
        FUN_0052f310(plVar2,lVar1,1,1,1);
        lVar1 = plVar2[2];
      }
      plVar2[2] = lVar1 + 1;
      *(undefined1 *)(plVar2[1] + lVar1) = 0x7d;
      return 0;
    }
    return 0;
  }
  return lVar1;
}


// ===== 00519468  FUN_00519468 =====

long FUN_00519468(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 *local_40;
  char local_38;
  
  plVar2 = (long *)*param_2;
  lVar1 = plVar2[2];
  if (*plVar2 == lVar1) {
    FUN_0052f310(plVar2,lVar1,1,1,1);
    lVar1 = plVar2[2];
  }
  plVar2[2] = lVar1 + 1;
  *(undefined1 *)(plVar2[1] + lVar1) = 0x7b;
  local_38 = '\x01';
  local_40 = param_2;
  lVar1 = FUN_004bba58(&local_40,"databaseName",0xc,param_1);
  if ((lVar1 == 0) && (lVar1 = FUN_004baa70(&local_40,"opcodes",7,param_1 + 0x18), lVar1 == 0)) {
    if (local_38 != '\0') {
      plVar2 = (long *)*local_40;
      lVar1 = plVar2[2];
      if (*plVar2 == lVar1) {
        FUN_0052f310(plVar2,lVar1,1,1,1);
        lVar1 = plVar2[2];
      }
      plVar2[2] = lVar1 + 1;
      *(undefined1 *)(plVar2[1] + lVar1) = 0x7d;
      return 0;
    }
    return 0;
  }
  return lVar1;
}


// ===== 005195a8  FUN_005195a8 =====

void FUN_005195a8(undefined8 *param_1)

{
  char cVar1;
  undefined1 (*pauVar2) [16];
  undefined1 auVar3 [16];
  
  cVar1 = *(char *)*param_1;
  *(char *)*param_1 = '\0';
  if (cVar1 != '\x01') {
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00acd358);
  }
  auVar3 = std::panicking::take_hook();
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  pauVar2 = (undefined1 (*) [16])malloc(0x10);
  if (pauVar2 != (undefined1 (*) [16])0x0) {
    *pauVar2 = auVar3;
    std::panicking::set_hook(pauVar2,&PTR_FUN_00acd388);
    return;
  }
                    /* try { // try from 00519614 to 0051961f has its CatchHandler @ 00519624 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x10);
}


// ===== 0051963c  FUN_0051963c =====

void FUN_0051963c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = param_1[1];
  local_40 = *param_1;
  uStack_28 = param_1[3];
  uStack_30 = param_1[2];
                    /* try { // try from 00519658 to 0051965f has its CatchHandler @ 00519670 */
  FUN_0052f2dc(&local_40);
  uStack_38 = param_1[5];
  local_40 = param_1[4];
  uStack_28 = param_1[7];
  uStack_30 = param_1[6];
  uVar1 = FUN_0052f304(&local_40);
                    /* catch() { ... } // from try @ 00519658 with catch @ 00519670 */
                    /* try { // try from 00519674 to 0051967b has its CatchHandler @ 00519684 */
  <react_common::ffi::base::ffi::CallInvoker_as_cxx::shared_ptr::SharedPtrTarget>::__drop
            (param_1 + 4);
                    /* WARNING: Subroutine does not return */
  FUN_00ab2530(uVar1);
}


// ===== 00519688  FUN_00519688 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00519688(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  char cVar7;
  char **ppcVar8;
  char ***pppcVar9;
  char ***pppcVar10;
  char ***pppcVar11;
  char ***__ptr;
  char ***pppcVar12;
  bool bVar13;
  char *pcVar14;
  size_t sVar15;
  char ****ppppcVar16;
  char ****ppppcVar17;
  ulong *puVar18;
  char ****extraout_x8;
  char ****extraout_x8_00;
  char ****extraout_x8_01;
  char ****extraout_x8_02;
  code *pcVar19;
  void *__src;
  char **local_1a8;
  char *local_1a0;
  char **local_198;
  char ***local_190;
  char ***pppcStack_188;
  char ***local_180;
  char **local_178;
  ulong auStack_170 [5];
  char ***local_148;
  char ***local_140;
  char ***pppcStack_138;
  char ***local_130;
  char ***local_120;
  char ***pppcStack_118;
  char ***local_110;
  char ***local_108;
  char ***local_100;
  char ***pppcStack_f8;
  char ***local_f0;
  char ***local_e8;
  char ***local_e0;
  char ***pppcStack_d8;
  char ***local_d0;
  char ***pppcStack_c8;
  char ***local_c0;
  char ***pppcStack_b8;
  char ***pppcStack_b0;
  char ***local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  char *local_90;
  char ***pppcStack_88;
  undefined1 auStack_71 [17];
  
  do {
    cVar7 = DAT_00b102e0;
    cVar2 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(0xb102e0,0x10);
    if (bVar13) {
      DAT_00b102e0 = '\x01';
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (cVar7 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x005196f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[1] + 0x28))(*param_1,param_2);
    return;
  }
  puVar1 = (undefined8 *)*param_2;
  pcVar19 = *(code **)(param_2[1] + 0x18);
  (*pcVar19)(&local_e0,puVar1);
  if (pppcStack_d8 == (char ***)0x24c161f26c70c1f1 && local_e0 == (char ***)0xb9f602dc5fe9f65c) {
    local_1a8 = (char **)puVar1[1];
    if ((long)local_1a8 < 0) {
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(0,local_1a8);
    }
    local_198 = local_1a8;
    if ((char ***)local_1a8 == (char ***)0x0) {
      local_1a0 = &DAT_00000001;
    }
    else {
      __src = (void *)*puVar1;
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      pcVar14 = (char *)malloc((size_t)local_1a8);
      if (pcVar14 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        alloc::raw_vec::handle_error(1,local_1a8);
      }
      memcpy(pcVar14,__src,(size_t)local_1a8);
      local_1a0 = pcVar14;
    }
  }
  else {
    (*pcVar19)(&local_e0,puVar1);
    if (pppcStack_d8 == (char ***)0x16fa802d90bf615b && local_e0 == (char ***)0xee6cae9bcc87247c) {
      <alloc::string::String_as_core::clone::Clone>::clone(&local_1a8,puVar1);
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      local_1a0 = (char *)malloc(0xc);
      uVar4 = s_Box<dyn_Any>_002bf1bb._0_8_;
      if (local_1a0 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        alloc::raw_vec::handle_error(1,0xc);
      }
      local_1a0[8] = 'A';
      local_1a0[9] = 'n';
      local_1a0[10] = 'y';
      local_1a0[0xb] = '>';
      *(undefined8 *)local_1a0 = uVar4;
      local_1a8 = (char **)0xc;
      local_198 = (char **)0xc;
    }
  }
  puVar18 = (ulong *)param_2[2];
  local_178 = (char **)*puVar18;
  auStack_170[0] = puVar18[1];
  local_190 = (char ***)CONCAT44(local_190._4_4_,(int)puVar18[2]);
  local_e0 = &local_178;
  local_140 = (char ***)CONCAT44(local_140._4_4_,*(undefined4 *)((long)puVar18 + 0x14));
  pppcStack_d8 = (char ***)FUN_004b32e0;
  local_d0 = (char ***)&local_190;
  pppcStack_c8 = (char ***)PTR_fmt_00b00c40;
  local_c0 = (char ***)&local_140;
  pppcStack_b8 = (char ***)PTR_fmt_00b00c40;
                    /* try { // try from 00519854 to 00519867 has its CatchHandler @ 00519f1c */
  alloc::fmt::format::format_inner(&local_120,&DAT_002ba925,&local_e0);
  pppcStack_188 = pppcStack_118;
  local_190 = local_120;
  local_180 = local_110;
                    /* try { // try from 00519878 to 0051987f has its CatchHandler @ 00519f40 */
  <std::backtrace::[2]::std::backtrace::Backtrace>::force_capture(&local_178);
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  pppcStack_138 = (char ***)malloc(0x400);
  if ((char ****)pppcStack_138 == (char ****)0x0) {
                    /* try { // try from 00519ea0 to 00519eab has its CatchHandler @ 00519f14 */
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(8,0x400);
  }
  local_130 = (char ***)0x0;
  local_140 = (char ***)0x80;
  FUN_00ab63a8(FUN_0051bf4c,&local_140);
                    /* try { // try from 005198b4 to 005198bb has its CatchHandler @ 00519f00 */
  FUN_0052adf8(&local_120,pppcStack_138,pppcStack_138 + (long)local_130);
  ppppcVar16 = (char ****)local_110;
  pppcVar9 = pppcStack_118;
                    /* try { // try from 005198c0 to 005198db has its CatchHandler @ 00519ef0 */
  FUN_00532d48(&local_e0,pppcStack_118,local_110,"\n",1);
  pppcVar12 = local_d0;
  __ptr = pppcStack_d8;
  pppcVar11 = local_e0;
  if (ppppcVar16 != (char ****)0x0) {
    ppppcVar17 = (char ****)(pppcVar9 + 1);
    do {
      if (ppppcVar17[-1] != (char ***)0x0) {
        free(*ppppcVar17);
      }
      ppppcVar16 = (char ****)((long)ppppcVar16 + -1);
      ppppcVar17 = ppppcVar17 + 3;
    } while (ppppcVar16 != (char ****)0x0);
  }
  if ((char ****)local_120 != (char ****)0x0) {
    free(pppcVar9);
  }
  if (local_140 != (char ***)0x0) {
    free(pppcStack_138);
  }
  puVar6 = PTR_MAX_LOG_LEVEL_FILTER_00b00c78;
  if (*(long *)PTR_MAX_LOG_LEVEL_FILTER_00b00c78 != 0) {
    local_120 = (char ***)&local_190;
    pppcStack_118 = (char ***)FUN_0051d640;
    local_110 = &local_1a8;
    local_108 = (char ***)FUN_0051d640;
    local_100 = &local_178;
    pppcStack_c8 = (char ***)_UNK_002a0a58;
    local_d0 = (char ***)_DAT_002a0a50;
    local_e0 = (char ***)0x0;
    pppcStack_d8 = (char ***)0x2bf1d1;
    pppcStack_f8 = (char ***)PTR_fmt_00b00cf0;
    pppcStack_88 = (char ***)&local_120;
    local_a8 = (char ***)0x2bf1c7;
    uStack_a0 = 10;
    local_90 = &DAT_002a452c;
    local_c0 = (char ***)0x2aea40;
    pppcStack_b0 = (char ***)_UNK_0029fa68;
    pppcStack_b8 = (char ***)_DAT_0029fa60;
    local_98 = DAT_002a1400;
                    /* try { // try from 005199c8 to 005199d3 has its CatchHandler @ 00519ee8 */
    <log::__private_api::GlobalLogger_as_log::Log>::log(auStack_71,&local_e0);
  }
  pppcVar10 = local_180;
  pppcVar9 = pppcStack_188;
  ppcVar8 = local_198;
  pcVar14 = local_1a0;
  if ((int)DAT_00b0bce0 == 0) {
                    /* try { // try from 00519a6c to 00519b2b has its CatchHandler @ 00519f2c */
    <&str_as<alloc::ffi::c_str::alloc::ffi::c_str::CString>::new::SpecNewImpl>::spec_new_impl
              (&local_120,"rust_panic",10);
    ppppcVar16 = (char ****)pppcStack_118;
    ppppcVar17 = (char ****)local_110;
    if ((char ****)local_120 != (char ****)0xffffffffffffffff) {
      ppppcVar17 = (char ****)local_120;
      if ((char ****)local_120 != (char ****)0x0) {
        free(pppcStack_118);
        ppppcVar17 = extraout_x8;
      }
      ppppcVar16 = (char ****)0x0;
    }
    local_e0 = (char ***)ppppcVar16;
    pppcStack_d8 = (char ***)ppppcVar17;
    <&str_as<alloc::ffi::c_str::alloc::ffi::c_str::CString>::new::SpecNewImpl>::spec_new_impl
              (&local_120,pppcVar9,pppcVar10);
    ppppcVar16 = (char ****)pppcStack_118;
    ppppcVar17 = (char ****)local_110;
    if ((char ****)local_120 != (char ****)0xffffffffffffffff) {
      ppppcVar17 = (char ****)local_120;
      if ((char ****)local_120 != (char ****)0x0) {
        free(pppcStack_118);
        ppppcVar17 = extraout_x8_00;
      }
      ppppcVar16 = (char ****)0x0;
    }
    local_d0 = (char ***)ppppcVar16;
    pppcStack_c8 = (char ***)ppppcVar17;
    <&str_as<alloc::ffi::c_str::alloc::ffi::c_str::CString>::new::SpecNewImpl>::spec_new_impl
              (&local_120,pcVar14,ppcVar8);
    ppppcVar16 = (char ****)pppcStack_118;
    ppppcVar17 = (char ****)local_110;
    if ((char ****)local_120 != (char ****)0xffffffffffffffff) {
      ppppcVar17 = (char ****)local_120;
      if ((char ****)local_120 != (char ****)0x0) {
        free(pppcStack_118);
        ppppcVar17 = extraout_x8_01;
      }
      ppppcVar16 = (char ****)0x0;
    }
    local_c0 = (char ***)ppppcVar16;
    pppcStack_b8 = (char ***)ppppcVar17;
    <&str_as<alloc::ffi::c_str::alloc::ffi::c_str::CString>::new::SpecNewImpl>::spec_new_impl
              (&local_120,__ptr,pppcVar12);
    ppppcVar16 = (char ****)pppcStack_118;
    local_e8 = local_110;
    if ((char ****)local_120 != (char ****)0xffffffffffffffff) {
      if ((char ****)local_120 != (char ****)0x0) {
        free(pppcStack_118);
        local_120 = (char ***)extraout_x8_02;
      }
      ppppcVar16 = (char ****)0x0;
      local_e8 = local_120;
    }
    pppcVar10 = local_c0;
    pppcVar12 = local_d0;
    pppcVar9 = local_e0;
    pppcStack_118 = pppcStack_d8;
    local_120 = local_e0;
    local_108 = pppcStack_c8;
    local_110 = local_d0;
    pppcStack_f8 = pppcStack_b8;
    local_100 = local_c0;
    local_f0 = (char ***)ppppcVar16;
    pppcStack_b0 = (char ***)ppppcVar16;
    local_a8 = local_e8;
    if ((char ****)local_e0 == (char ****)0x0) {
      local_140 = (char ***)0xffffffffffffffff;
LAB_00519bfc:
      if (((char ****)pppcVar12 != (char ****)0x0) &&
         (*(char *)pppcVar12 = '\0', (char ****)local_108 != (char ****)0x0)) {
        free(pppcVar12);
      }
      if (((char ****)local_100 != (char ****)0x0) &&
         (*(char *)local_100 = '\0', (char ****)pppcStack_f8 != (char ****)0x0)) {
        free(local_100);
      }
      ppppcVar16 = (char ****)local_f0;
      if ((char ****)local_f0 != (char ****)0x0) goto LAB_00519c34;
    }
    else {
      if (((((char ****)local_d0 == (char ****)0x0) || ((char ****)local_c0 == (char ****)0x0)) ||
          (ppppcVar16 == (char ****)0x0)) ||
         (pcVar14 = (char *)(*DAT_00b0bcd8)(local_e0,local_d0,local_c0,ppppcVar16),
         pcVar14 == (char *)0x0)) {
        local_140 = (char ***)0xffffffffffffffff;
        *(char *)pppcVar9 = '\0';
        if ((char ****)pppcStack_118 != (char ****)0x0) {
          free(pppcVar9);
        }
        goto LAB_00519bfc;
      }
      sVar15 = strlen(pcVar14);
                    /* try { // try from 00519ba8 to 00519bb7 has its CatchHandler @ 00519ed8 */
      <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::to_str(&local_e0,pcVar14,sVar15 + 1);
      if (local_e0 == (char ***)&DAT_00000001) {
        local_140 = (char ***)0xffffffffffffffff;
      }
      else {
                    /* try { // try from 00519e40 to 00519e47 has its CatchHandler @ 00519ed8 */
        FUN_00519fc0(&local_e0,pppcStack_d8,local_d0);
        pppcStack_138 = pppcStack_d8;
        local_140 = local_e0;
        local_130 = local_d0;
      }
      free(pcVar14);
      *(char *)pppcVar9 = '\0';
      if ((char ****)pppcStack_118 != (char ****)0x0) {
        free(pppcVar9);
      }
      *(char *)pppcVar12 = '\0';
      if ((char ****)local_108 != (char ****)0x0) {
        free(pppcVar12);
      }
      *(char *)pppcVar10 = '\0';
      if ((char ****)pppcStack_f8 != (char ****)0x0) {
        free(pppcVar10);
      }
LAB_00519c34:
      *(char *)ppppcVar16 = '\0';
      if ((char ****)local_e8 != (char ****)0x0) {
        free(ppppcVar16);
      }
    }
    if ((char ****)local_140 != (char ****)0xffffffffffffffff) {
      local_148 = (char ***)&local_140;
      if (2 < *(ulong *)puVar6) {
        local_120 = (char ***)&local_148;
        pppcStack_118 = (char ***)FUN_0052aaf4;
        local_a8 = (char ***)0x2bf1c7;
        uStack_a0 = 10;
        pppcStack_88 = (char ***)&local_120;
        pppcStack_c8 = (char ***)_UNK_002a0a58;
        local_d0 = (char ***)_DAT_002a0a50;
        local_90 = &DAT_002ad018;
        local_e0 = (char ***)0x0;
        pppcStack_d8 = (char ***)0x2bf1d1;
        local_c0 = (char ***)0x2aea40;
        pppcStack_b0 = (char ***)_UNK_002a0b88;
        pppcStack_b8 = (char ***)_DAT_002a0b80;
        local_98 = DAT_002a1408;
                    /* try { // try from 00519cd4 to 00519d17 has its CatchHandler @ 00519f24 */
        <log::__private_api::GlobalLogger_as_log::Log>::log(auStack_71,&local_e0);
      }
      goto LAB_00519ce0;
    }
  }
  else {
    local_140 = (char ***)0xffffffffffffffff;
  }
  if (1 < *(ulong *)puVar6) {
    local_a8 = (char ***)0x2bf1c7;
    uStack_a0 = 10;
    local_90 = "rust_panic sentry event failed to emit";
    pppcStack_88 = (char ***)0x4d;
    pppcStack_c8 = (char ***)_UNK_002a0a58;
    local_d0 = (char ***)_DAT_002a0a50;
    local_e0 = (char ***)0x0;
    pppcStack_d8 = (char ***)0x2bf1d1;
    pppcStack_b0 = (char ***)_UNK_0029fd68;
    pppcStack_b8 = (char ***)_DAT_0029fd60;
    local_c0 = (char ***)0x2aea40;
    local_98 = DAT_002a16f0;
                    /* try { // try from 00519a5c to 00519a67 has its CatchHandler @ 00519f24 */
    <log::__private_api::GlobalLogger_as_log::Log>::log(auStack_71,&local_e0);
  }
LAB_00519ce0:
  if ((char ****)local_140 == (char ****)0xffffffffffffffff) {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    ppppcVar16 = (char ****)malloc(0x1e);
    uVar5 = s_t_failed_to_emit_002bf222._8_8_;
    uVar4 = s_RustPanic_even_002bf214._0_8_;
    if (ppppcVar16 == (char ****)0x0) {
                    /* try { // try from 00519eb0 to 00519ebb has its CatchHandler @ 00519f24 */
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(1,0x1e);
    }
    uVar3 = CONCAT62(s_t_failed_to_emit_002bf222._2_6_,s_t_failed_to_emit_002bf222._0_2_);
    bVar13 = false;
    ppppcVar17 = (char ****)0x1e;
    ppppcVar16[1] =
         (char ***)CONCAT26(s_t_failed_to_emit_002bf222._0_2_,s_RustPanic_even_002bf214._8_6_);
    *ppppcVar16 = (char ***)uVar4;
    *(undefined8 *)((long)ppppcVar16 + 0x16) = uVar5;
    *(undefined8 *)((long)ppppcVar16 + 0xe) = uVar3;
  }
  else {
    local_148 = (char ***)&local_140;
    local_120 = (char ***)&local_148;
    pppcStack_118 = (char ***)FUN_0052aaf4;
    alloc::fmt::format::format_inner(&local_e0,&DAT_002a8f3a,&local_120);
    bVar13 = (char ****)local_e0 == (char ****)0x0;
    ppppcVar17 = (char ****)local_d0;
    ppppcVar16 = (char ****)pppcStack_d8;
  }
                    /* try { // try from 00519d60 to 00519daf has its CatchHandler @ 00519f48 */
  FUN_0051bdb0("libdiscore",10,"rust_panic",10,ppppcVar16,ppppcVar17);
  if ((int)DAT_00b0bd10 == 0) {
    <libdiscore_common::core::cache::native::libdiscore_common::core::cache::native::CacheManager>::
    delete_all_caches(DAT_00b0bd00,DAT_00b0bd08);
  }
  (**(code **)(param_1[1] + 0x28))(*param_1,param_2);
  if (!bVar13) {
    free(ppppcVar16);
  }
  if (((char ****)local_140 != (char ****)0xffffffffffffffff) &&
     ((char ****)local_140 != (char ****)0x0)) {
    free(pppcStack_138);
  }
  if ((char ****)pppcVar11 != (char ****)0x0) {
    free(__ptr);
  }
  if ((char ***)0x1 < local_178) {
                    /* try { // try from 00519df4 to 00519dfb has its CatchHandler @ 00519f40 */
    FUN_0051c07c(auStack_170);
  }
  if ((char ****)local_190 != (char ****)0x0) {
    free(pppcStack_188);
  }
  if ((char ***)local_1a8 != (char ***)0x0) {
    free(local_1a0);
  }
  return;
}


// ===== 00519fc0  FUN_00519fc0 =====

void FUN_00519fc0(size_t *param_1,void *param_2,size_t param_3)

{
  void *__dest;
  
  if ((long)param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(0,param_3);
  }
  if (param_3 != 0) {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    __dest = malloc(param_3);
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
  *param_1 = 0;
  param_1[1] = 1;
  param_1[2] = 0;
  return;
}


// ===== 0051a050  FUN_0051a050 =====

void FUN_0051a050(undefined8 *param_1)

{
  char cVar1;
  undefined1 (*pauVar2) [16];
  undefined1 auVar3 [16];
  
  cVar1 = *(char *)*param_1;
  *(char *)*param_1 = '\0';
  if (cVar1 != '\x01') {
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00acd358);
  }
  auVar3 = std::panicking::take_hook();
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  pauVar2 = (undefined1 (*) [16])malloc(0x10);
  if (pauVar2 != (undefined1 (*) [16])0x0) {
    *pauVar2 = auVar3;
    std::panicking::set_hook(pauVar2,&PTR_FUN_00acd388);
    return;
  }
                    /* try { // try from 0051a0bc to 0051a0c7 has its CatchHandler @ 0051a0cc */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x10);
}


// ===== 0051a0e4  FUN_0051a0e4 =====

void FUN_0051a0e4(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_78 = param_1[1];
  local_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  uStack_48 = param_1[8];
  uStack_50 = param_1[7];
  uStack_58 = param_1[6];
  local_60 = param_1[5];
                    /* try { // try from 0051a11c to 0051a123 has its CatchHandler @ 0051a128 */
  FUN_0051d61c(&local_80);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x51a128);
  (*pcVar1)();
}


// ===== 0051a1ec  FUN_0051a1ec =====

void FUN_0051a1ec(undefined8 *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  void *local_30;
  undefined8 *puStack_28;
  
  __ptr = (void *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  local_30 = __ptr;
  puStack_28 = puVar1;
                    /* try { // try from 0051a204 to 0051a20b has its CatchHandler @ 0051a264 */
  FUN_00519688(&local_30);
  if ((code *)*puVar1 != (code *)0x0) {
                    /* try { // try from 0051a214 to 0051a21b has its CatchHandler @ 0051a248 */
    (*(code *)*puVar1)(__ptr);
  }
  if (puVar1[1] != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 0051a27c  FUN_0051a27c =====

void FUN_0051a27c(uint *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    lVar2 = *param_2;
    lVar3 = param_2[2];
    FUN_0052fe20(lVar2,lVar3);
    if ((*param_1 & 1) != 0) {
      return;
    }
    if (lVar1 != 1) {
      FUN_0052fe20(param_1,lVar2 + 0x410,lVar3);
      if ((*param_1 & 1) != 0) {
        return;
      }
      if (lVar1 != 2) {
        FUN_0052fe20(param_1,lVar2 + 0x820,lVar3);
        if ((*param_1 & 1) != 0) {
          return;
        }
        if (lVar1 != 3) {
          FUN_0052fe20(param_1,lVar2 + 0xc30,lVar3);
          if ((*param_1 & 1) != 0) {
            return;
          }
          if (lVar1 != 4) {
            FUN_0052fe20(param_1,lVar2 + 0x1040,lVar3);
            if ((*param_1 & 1) != 0) {
              return;
            }
            if (lVar1 != 5) {
              FUN_0052fe20(param_1,lVar2 + 0x1450,lVar3);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_bounds_check(lVar1,lVar1,&PTR_s__root__cargo_registry_src_index__00acd3f0);
}


// ===== 0051a384  FUN_0051a384 =====

/* WARNING: Removing unreachable block (ram,0x0051a4ec) */

undefined1  [16] FUN_0051a384(long *param_1,ulong param_2,undefined8 param_3)

{
  ulong *puVar1;
  long *plVar2;
  ulong uVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined1 auVar16 [16];
  ulong local_88;
  ulong *local_80;
  code *local_78;
  ulong *local_70;
  code *local_68;
  
  puVar1 = (ulong *)(param_1 + 2);
  FUN_0051a27c(&local_80);
  if (local_80 == (ulong *)0x1) {
    do {
      pcVar4 = local_68;
      if (param_2 < local_68) break;
      if ((ulong)param_1[1] <= local_78) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (local_78,param_1[1],&PTR_s__root__cargo_registry_src_index__00acd420);
      }
      lVar14 = *param_1 + (long)local_78 * 0x410;
      if (local_78 == (code *)0x0) {
        if (0x3f < local_70) {
LAB_0051a6a4:
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check
                    (local_70,0x40,&PTR_s__root__cargo_registry_src_index__00ace840);
        }
        plVar2 = (long *)(lVar14 + (long)local_70 * 0x10);
        if (*plVar2 == 1) {
          param_2 = plVar2[1];
          plVar6 = (long *)FUN_0050f708(param_3,param_2,
                                        &PTR_s__root__cargo_registry_src_index__00accb68);
          lVar9 = *plVar6;
          lVar7 = plVar6[1];
          *plVar2 = lVar9;
          plVar2[1] = lVar7;
          if (lVar9 == 1) {
            lVar7 = FUN_0050f708(param_3,lVar7,&PTR_s__root__cargo_registry_src_index__00accb80);
            *(undefined8 *)(lVar7 + 0x10) = 0;
          }
          puVar8 = (undefined8 *)
                   FUN_0050f708(param_3,param_2,&PTR_s__root__cargo_registry_src_index__00accb98);
          *puVar8 = 0;
          if (lVar9 == 0) {
            *(ulong *)(lVar14 + 0x408) = *(ulong *)(lVar14 + 0x408) ^ 1L << ((ulong)local_70 & 0x3f)
            ;
          }
          uVar11 = 1;
          goto LAB_0051a63c;
        }
      }
      else {
        if (0x3f < local_70) goto LAB_0051a6a4;
        plVar2 = (long *)(lVar14 + (long)local_70 * 0x10);
        uVar3 = (ulong)local_70 & 0x3f;
        while (*plVar2 == 1) {
          lVar15 = plVar2[1];
          plVar6 = (long *)FUN_0050f708(param_3,lVar15,
                                        &PTR_s__root__cargo_registry_src_index__00accb68);
          lVar9 = *plVar6;
          lVar7 = plVar6[1];
          *plVar2 = lVar9;
          plVar2[1] = lVar7;
          if (lVar9 == 1) {
            lVar7 = FUN_0050f708(param_3,lVar7,&PTR_s__root__cargo_registry_src_index__00accb80);
            *(undefined8 *)(lVar7 + 0x10) = 0;
          }
          puVar8 = (undefined8 *)
                   FUN_0050f708(param_3,lVar15,&PTR_s__root__cargo_registry_src_index__00accb98);
          *puVar8 = 0;
          if (lVar9 == 0) {
            *(ulong *)(lVar14 + 0x408) = *(ulong *)(lVar14 + 0x408) ^ 1L << uVar3;
          }
          lVar9 = FUN_0050f708(param_3,lVar15,&PTR_s__root__cargo_registry_src_index__00accbe0);
          uVar13 = *(ulong *)(lVar9 + 0x38) >>
                   (((ulong)(uint)(*(int *)(lVar14 + -0x10) * 3) & 0x1f) << 1) & 0x3f;
          plVar6 = (long *)(lVar14 + -0x410 + uVar13 * 0x10);
          lVar9 = *plVar6;
          lVar7 = plVar6[1];
          *plVar6 = 0;
          if (lVar9 == 1) {
            lVar10 = FUN_0050f708(param_3,lVar7,&PTR_s__root__cargo_registry_src_index__00accbb0);
            *(undefined8 *)(lVar10 + 0x10) = 1;
            *(long *)(lVar10 + 0x18) = lVar15;
          }
          plVar5 = (long *)FUN_0050f708(param_3,lVar15,
                                        &PTR_s__root__cargo_registry_src_index__00accbc8);
          *plVar5 = lVar9;
          plVar5[1] = lVar7;
          uVar12 = *(ulong *)(lVar14 + -8);
          *plVar6 = 1;
          plVar6[1] = lVar15;
          *(ulong *)(lVar14 + -8) = uVar12 | 1L << uVar13;
        }
      }
      local_88 = (ulong)pcVar4;
      if (pcVar4 < (ulong)param_1[2]) goto LAB_0051a668;
      if ((ulong)param_1[2] < pcVar4) {
        param_1[2] = (long)pcVar4;
      }
      FUN_0051a27c(&local_80,param_1);
    } while (((ulong)local_80 & 1) != 0);
  }
  local_88 = param_2;
  if (param_2 < *puVar1) {
LAB_0051a668:
    local_78 = FUN_0051cfd4;
    local_70 = &local_88;
    local_68 = FUN_0051cfd4;
    local_80 = puVar1;
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              (&DAT_002a520d,&local_80,&PTR_s__root__cargo_registry_src_index__00acd3d8);
  }
  if (*puVar1 < param_2) {
    *puVar1 = param_2;
  }
  uVar11 = 0;
LAB_0051a63c:
  auVar16._8_8_ = param_2;
  auVar16._0_8_ = uVar11;
  return auVar16;
}


// ===== 0051a6b8  FUN_0051a6b8 =====

undefined1  [16] FUN_0051a6b8(long *param_1,ulong param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  
  uVar7 = param_1[2];
  if (param_2 < uVar7 || param_2 - uVar7 == 0) {
    uVar6 = 0;
  }
  else if (param_2 - uVar7 >> 0x24 == 0) {
    uVar7 = uVar7 ^ param_2 | 0x3f;
    if (0xffffffffd < uVar7) {
      uVar7 = 0xffffffffe;
    }
    uVar7 = (ulong)(((uint)LZCOUNT(uVar7) ^ 0x3e) / 6);
    if ((ulong)param_1[1] <= uVar7) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (uVar7,param_1[1],&PTR_s__root__cargo_registry_src_index__00acd408);
    }
    lVar9 = *param_1 + uVar7 * 0x410;
    uVar7 = param_2 >> (((ulong)(uint)(*(int *)(lVar9 + 0x400) * 3) & 0x1f) << 1) & 0x3f;
    plVar1 = (long *)(lVar9 + uVar7 * 0x10);
    lVar2 = *plVar1;
    lVar3 = plVar1[1];
    *plVar1 = 0;
    if (lVar2 == 1) {
      lVar4 = FUN_0050f708(param_4,lVar3,&PTR_s__root__cargo_registry_src_index__00accbb0);
      *(undefined8 *)(lVar4 + 0x10) = 1;
      *(long *)(lVar4 + 0x18) = param_3;
    }
    plVar5 = (long *)FUN_0050f708(param_4,param_3,&PTR_s__root__cargo_registry_src_index__00accbc8);
    uVar8 = *(ulong *)(lVar9 + 0x408);
    *plVar1 = 1;
    plVar1[1] = param_3;
    uVar6 = 2;
    *plVar5 = lVar2;
    plVar5[1] = lVar3;
    *(ulong *)(lVar9 + 0x408) = uVar8 | 1L << uVar7;
  }
  else {
    uVar6 = 1;
  }
  auVar10._8_8_ = uVar6;
  auVar10._0_8_ = param_3;
  return auVar10;
}


// ===== 0051a7f4  FUN_0051a7f4 =====

void FUN_0051a7f4(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong *local_60;
  undefined *puStack_58;
  ulong *local_50;
  undefined *puStack_48;
  ulong local_28;
  
  lVar2 = FUN_0050f708(param_3,*param_2,&PTR_s__root__cargo_registry_src_index__00accbe0);
  local_28 = *(ulong *)(lVar2 + 0x38);
  local_60 = (ulong *)(param_1 + 2);
  if (local_28 < *local_60) {
    puStack_58 = PTR_fmt_00b00c60;
    local_50 = &local_28;
    puStack_48 = PTR_fmt_00b00c60;
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_002a520d,&local_60,param_4);
  }
  uVar3 = *local_60 ^ local_28 | 0x3f;
  if (0xffffffffd < uVar3) {
    uVar3 = 0xffffffffe;
  }
  uVar3 = (ulong)(((uint)LZCOUNT(uVar3) ^ 0x3e) / 6);
  if (uVar3 < (ulong)param_1[1]) {
    lVar2 = *param_1 + uVar3 * 0x410;
    uVar3 = local_28 >> (((ulong)(uint)(*(int *)(lVar2 + 0x400) * 3) & 0x1f) << 1) & 0x3f;
    plVar1 = (long *)(lVar2 + uVar3 * 0x10);
    FUN_0050f898(plVar1,param_2,param_3,&PTR_s__root__cargo_registry_src_index__00ace828);
    if (*plVar1 != 0) {
      return;
    }
    *(ulong *)(lVar2 + 0x408) = *(ulong *)(lVar2 + 0x408) ^ 1L << uVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_bounds_check(uVar3,param_1[1],param_4);
}


// ===== 0051a934  FUN_0051a934 =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051a934(long *param_1,long *param_2,long ****param_3,char *****param_4,int param_5)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  char *****pppppcVar7;
  char *****pppppcVar8;
  code *pcVar9;
  int iVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long ****pppplVar14;
  undefined1 *puVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long *****ppppplVar20;
  code *pcVar21;
  long *****ppppplVar22;
  int *piVar23;
  int *piVar24;
  undefined8 uVar26;
  byte bVar27;
  byte bVar28;
  undefined8 uVar29;
  ulong uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [12];
  char *****pppppcVar34;
  long ****local_700;
  char *****local_6e8;
  long *****local_6e0;
  char *****pppppcStack_6d8;
  code *local_6d0;
  undefined1 auStack_6c8 [696];
  long ****local_410;
  long *****ppppplStack_408;
  char *****pppppcStack_400;
  code *pcStack_3f8;
  char *local_3f0;
  code *pcStack_3e8;
  undefined8 local_3e0;
  char *local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined *local_3c0;
  char ******local_3b8;
  undefined1 local_134 [4];
  long local_130;
  undefined1 *puStack_128;
  long local_120;
  undefined1 local_114 [4];
  long local_110;
  long lStack_108;
  long local_100;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  char *****local_d8;
  long *****ppppplStack_d0;
  char *****local_c8;
  undefined8 uStack_c0;
  undefined **local_b8;
  undefined1 local_b0 [16];
  long *****local_a0;
  char *****pppppcStack_98;
  code *local_90;
  undefined1 auStack_81 [17];
  int *piVar25;
  
  if (param_5 == 0) {
    iVar10 = -1;
  }
  else {
    auVar33 = <libdiscore_common::core::instant::instant_inner::libdiscore_common::core::instant::instant_inner::Instant>
              ::now();
    iVar10 = auVar33._8_4_;
    local_700 = auVar33._0_8_;
  }
  pppppcStack_6d8 = (char *****)0x0;
  ppppplVar20 = (long *****)&local_6e8;
  local_6e8 = (char *****)param_3;
  local_6e0 = (long *****)param_4;
  FUN_004b7f6c(&local_410,&local_6e8);
  pppplVar14 = local_410;
  if (local_410 == (long ****)0xffffffffffffffff) {
    local_d8 = (char *****)0x0;
    ppppplStack_d0 = (long *****)0x1;
    local_b0._0_8_ = ppppplStack_408;
    pppppcStack_6d8 = (char *****)0x60000020;
    local_6e8 = (char *****)&local_d8;
    local_c8 = (char *****)0x0;
    local_6e0 = (long *****)&PTR_FUN_00acd638;
                    /* try { // try from 0051ab80 to 0051ab8b has its CatchHandler @ 0051b560 */
    iVar10 = <serde_json::error::Error_as_core::fmt::Display>::fmt(local_b0,&local_6e8);
    if (iVar10 != 0) {
                    /* try { // try from 0051b330 to 0051b353 has its CatchHandler @ 0051b560 */
                    /* WARNING: Subroutine does not return */
      core::result::unwrap_failed
                ("a Display implementation returned an error unexpectedly",0x37,auStack_81,
                 &DAT_00acd3b8,&PTR_s__nix_store_8006w282fgsx3273c878b_00acd668);
    }
    pppppcStack_98 = (char *****)ppppplStack_d0;
    local_a0 = (long *****)local_d8;
    local_90 = (code *)local_c8;
    if (*ppppplStack_408 == (long ****)0x1) {
      uVar30 = (ulong)ppppplStack_408[1] & 3;
      if ((1 < uVar30 - 2) && (uVar30 != 0)) {
        local_6e0 = (long *****)((long)ppppplStack_408[1] + -1);
        local_6e8 = (char *****)CONCAT71(local_6e8._1_7_,3);
                    /* try { // try from 0051b230 to 0051b237 has its CatchHandler @ 0051b378 */
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_6e0);
      }
    }
    else if ((*ppppplStack_408 == (long ****)0x0) && (ppppplStack_408[2] != (long ****)0x0)) {
      free(ppppplStack_408[1]);
    }
    free(ppppplStack_408);
    param_1[3] = (long)local_90;
    param_1[2] = (long)pppppcStack_98;
    param_1[1] = (long)local_a0;
    *param_1 = -1;
  }
  else {
    local_90 = pcStack_3f8;
    pppppcStack_98 = pppppcStack_400;
    local_a0 = ppppplStack_408;
    memcpy(auStack_6c8,&local_3f0,0x2b8);
    local_6e8 = (char *****)pppplVar14;
    local_6d0 = local_90;
    uVar5 = (int)pppplVar14 - 3;
    if (pppplVar14 < (long ****)0x3) {
      uVar5 = 8;
    }
    pppppcStack_6d8 = pppppcStack_98;
    local_6e0 = local_a0;
    local_130 = 0;
    puStack_128 = &DAT_00000008;
    local_134[0] = (undefined1)uVar5;
    local_120 = 0;
    if (param_2[0x15] != 0) {
      uVar11 = FUN_0053db98(param_2 + 0x16,local_134);
      uVar26 = DAT_002a1820;
      lVar17 = 0;
      bVar28 = (byte)(uVar11 >> 0x39);
      uVar12 = CONCAT17(bVar28,CONCAT16(bVar28,CONCAT15(bVar28,CONCAT14(bVar28,CONCAT13(bVar28,
                                                  CONCAT12(bVar28,CONCAT11(bVar28,bVar28)))))));
      lVar18 = param_2[0x12];
      uVar13 = param_2[0x13];
      uVar11 = uVar11 & uVar13;
      uVar29 = *(undefined8 *)(lVar18 + uVar11);
      uVar30 = NEON_cmeq(uVar29,uVar12,1);
      uVar30 = uVar30 & 0x8080808080808080;
      while( true ) {
        for (; uVar30 != 0; uVar30 = uVar30 - 1 & uVar30) {
          uVar4 = (uVar30 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar30 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
          if ((uint)*(byte *)(~(uVar11 + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) &
                               uVar13) + lVar18) == (uVar5 & 0xff)) {
            lVar17 = param_2[3];
            if (lVar17 != 0) {
              puVar16 = (undefined8 *)*param_2;
              ppppplVar20 = (long *****)(puVar16 + 1);
              uVar30 = NEON_cmge(*puVar16,0,1);
              uVar30 = uVar30 & 0x8080808080808080;
              pcVar9 = _UNK_002a03b8;
              pppppcVar34 = _DAT_002a03b0;
              uVar29 = _UNK_0029f418;
              pcVar21 = _DAT_0029f410;
              do {
                for (; uVar30 == 0; uVar30 = uVar30 & 0x8080808080808080) {
                  puVar16 = puVar16 + -0x18;
                  uVar30 = NEON_cmge(*ppppplVar20,0,1);
                  ppppplVar20 = ppppplVar20 + 1;
                }
                uVar13 = (uVar30 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                         (uVar30 >> 7 & 0xff00ff00ff00ff) << 8;
                uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
                iVar3 = (int)((ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3);
                uVar2 = *(undefined4 *)(puVar16 + (long)-iVar3 * 3 + -3);
                local_e8._0_4_ = uVar2;
                    /* try { // try from 0051ac60 to 0051ac67 has its CatchHandler @ 0051b52c */
                (**(code **)(puVar16[(long)-iVar3 * 3 + -1] + 0x30))
                          (&local_d8,puVar16[(long)-iVar3 * 3 + -2]);
                pppppcVar8 = local_c8;
                ppppplVar22 = ppppplStack_d0;
                pppppcVar7 = local_d8;
                if (local_d8 == (char *****)0xffffffffffffffff) {
                  uVar12 = FUN_0053e018(param_2 + 0x10,local_e8);
                    /* try { // try from 0051ace0 to 0051ad8b has its CatchHandler @ 0051b52c */
                  uVar13 = FUN_005117a4(param_2 + 0xc,uVar12,local_e8);
                  if (((uVar13 & 1) != 0) && (2 < *(ulong *)PTR_MAX_LOG_LEVEL_FILTER_00b00c78)) {
                    auVar31 = (**(code **)(puVar16[(long)-iVar3 * 3 + -1] + 0x18))
                                        (puVar16[(long)-iVar3 * 3 + -2]);
                    local_a0 = (long *****)local_b0;
                    pppppcStack_98 = (char *****)FUN_004b32e0;
                    local_3d0 = 0x16;
                    local_3d8 = "libdiscore::dispatcher";
                    local_3c0 = &DAT_002af8d1;
                    local_3b8 = (char ******)&local_a0;
                    ppppplStack_408 = (long *****)0x2bf284;
                    local_410 = (long ****)0x0;
                    local_3f0 = "common/rust/src/stores/dispatcher.rs";
                    local_3c8 = uVar26;
                    pppppcStack_400 = pppppcVar34;
                    pcStack_3f8 = pcVar9;
                    pcStack_3e8 = pcVar21;
                    local_3e0 = uVar29;
                    local_b0 = auVar31;
                    <log::__private_api::GlobalLogger_as_log::Log>::log(auStack_81,&local_410);
                  }
                }
                else {
                    /* try { // try from 0051ac78 to 0051acbf has its CatchHandler @ 0051b530 */
                  FUN_0050d064(param_2 + 0xc,uVar2);
                  auVar31 = (**(code **)(puVar16[(long)-iVar3 * 3 + -1] + 0x18))
                                      (puVar16[(long)-iVar3 * 3 + -2]);
                  FUN_0051ba2c(&local_130,uVar2,auVar31._0_8_,auVar31._8_8_,"during",6,"reset",5,
                               ppppplVar22,pppppcVar8,pcVar21,uVar29,pppppcVar34,pcVar9);
                  if (pppppcVar7 != (char *****)0x0) {
                    free(ppppplVar22);
                  }
                }
                lVar17 = lVar17 + -1;
                uVar30 = uVar30 - 1 & uVar30;
              } while (lVar17 != 0);
            }
            goto LAB_0051af78;
          }
        }
        uVar29 = NEON_cmeq(uVar29,0xffffffffffffffff,1);
        bVar28 = NEON_umaxv(uVar29,1);
        if ((bVar28 & 1) != 0) break;
        lVar17 = lVar17 + 8;
        uVar11 = uVar11 + lVar17 & uVar13;
        uVar29 = *(undefined8 *)(lVar18 + uVar11);
        uVar30 = NEON_cmeq(uVar29,uVar12,1);
        uVar30 = uVar30 & 0x8080808080808080;
      }
    }
    if (param_2[9] != 0) {
      uVar11 = FUN_0053db98(param_2 + 10,local_134);
      auVar31._8_8_ = local_b0._8_8_;
      auVar31._0_8_ = local_b0._0_8_;
      lVar17 = 0;
      bVar28 = (byte)(uVar11 >> 0x39);
      uVar26 = CONCAT17(bVar28,CONCAT16(bVar28,CONCAT15(bVar28,CONCAT14(bVar28,CONCAT13(bVar28,
                                                  CONCAT12(bVar28,CONCAT11(bVar28,bVar28)))))));
      lVar18 = param_2[6];
      uVar13 = param_2[7];
      uVar11 = uVar11 & uVar13;
      uVar29 = *(undefined8 *)(lVar18 + uVar11);
      uVar30 = NEON_cmeq(uVar29,uVar26,1);
      uVar30 = uVar30 & 0x8080808080808080;
      while( true ) {
        for (; uVar30 == 0; uVar30 = uVar30 & 0x8080808080808080) {
          uVar29 = NEON_cmeq(uVar29,0xffffffffffffffff,1);
          bVar28 = NEON_umaxv(uVar29,1);
          if ((bVar28 & 1) != 0) goto LAB_0051af78;
          lVar17 = lVar17 + 8;
          uVar11 = uVar11 + lVar17 & uVar13;
          uVar29 = *(undefined8 *)(lVar18 + uVar11);
          uVar30 = NEON_cmeq(uVar29,uVar26,1);
        }
        uVar4 = (uVar30 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar30 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        lVar19 = lVar18 + (uVar11 + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) & uVar13) *
                          -0x20;
        if ((uint)*(byte *)(lVar19 + -0x20) == (uVar5 & 0xff)) break;
        uVar30 = uVar30 - 1 & uVar30;
      }
      lVar17 = *(long *)(lVar19 + -8);
      local_b0 = auVar31;
      if (lVar17 != 0) {
        piVar23 = *(int **)(lVar19 + -0x10);
        piVar24 = piVar23;
        goto LAB_0051ae10;
      }
    }
LAB_0051af78:
    lVar17 = param_2[3];
    if (lVar17 != 0) {
      ppppplVar20 = (long *****)*param_2;
      ppppplVar22 = ppppplVar20 + 1;
      uVar30 = NEON_cmge(*ppppplVar20,0,1);
      uVar30 = uVar30 & 0x8080808080808080;
      do {
        for (; uVar30 == 0; uVar30 = uVar30 & 0x8080808080808080) {
          ppppplVar20 = ppppplVar20 + -0x18;
          uVar30 = NEON_cmge(*ppppplVar22,0,1);
          ppppplVar22 = ppppplVar22 + 1;
        }
        uVar13 = (uVar30 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar30 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        iVar6 = (int)((ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3);
        iVar3 = *(int *)(ppppplVar20 + (long)-iVar6 * 3 + -3);
        local_a0 = (long *****)CONCAT44(local_a0._4_4_,iVar3);
        if (param_2[0xf] != 0) {
          uVar13 = FUN_0053e018(param_2 + 0x10,&local_a0);
          lVar18 = 0;
          bVar28 = (byte)(uVar13 >> 0x39);
          while( true ) {
            uVar13 = uVar13 & param_2[0xd];
            uVar29 = *(undefined8 *)(param_2[0xc] + uVar13);
            uVar11 = NEON_cmeq(uVar29,CONCAT17(bVar28,CONCAT16(bVar28,CONCAT15(bVar28,CONCAT14(
                                                  bVar28,CONCAT13(bVar28,CONCAT12(bVar28,CONCAT11(
                                                  bVar28,bVar28))))))),1);
            for (uVar11 = uVar11 & 0x8080808080808080; uVar11 != 0; uVar11 = uVar11 - 1 & uVar11) {
              uVar4 = (uVar11 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                      (uVar11 >> 7 & 0xff00ff00ff00ff) << 8;
              uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
              if (iVar3 == *(int *)(param_2[0xc] +
                                    (uVar13 + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) &
                                    param_2[0xd]) * -4 + -4)) goto LAB_0051b100;
            }
            uVar29 = NEON_cmeq(uVar29,0xffffffffffffffff,1);
            bVar27 = NEON_umaxv(uVar29,1);
            if ((bVar27 & 1) != 0) break;
            lVar18 = lVar18 + 8;
            uVar13 = uVar13 + lVar18;
          }
        }
                    /* try { // try from 0051b070 to 0051b077 has its CatchHandler @ 0051b528 */
        (*(code *)ppppplVar20[(long)-iVar6 * 3 + -1][9])
                  (&local_d8,ppppplVar20[(long)-iVar6 * 3 + -2]);
        lVar18 = local_120;
        if (local_c8 == (char *****)0x0) {
          if (local_d8 != (char *****)0x0) {
            free(ppppplStack_d0);
          }
        }
        else {
          local_3e0 = CONCAT44(local_3e0._4_4_,iVar3);
          pppppcStack_400 = local_c8;
          ppppplStack_408 = ppppplStack_d0;
          local_410 = (long ****)local_d8;
          pcStack_3f8 = (code *)0xffffffffffffffff;
          if (local_120 == local_130) {
                    /* try { // try from 0051b0b0 to 0051b0b7 has its CatchHandler @ 0051b4dc */
            FUN_00530a3c(&local_130);
          }
          local_120 = lVar18 + 1;
          puVar16 = (undefined8 *)(puStack_128 + lVar18 * 0x38);
          puVar16[1] = ppppplStack_408;
          *puVar16 = local_410;
          puVar16[3] = pcStack_3f8;
          puVar16[2] = pppppcStack_400;
          puVar16[5] = pcStack_3e8;
          puVar16[4] = local_3f0;
          puVar16[6] = local_3e0;
        }
LAB_0051b100:
        lVar17 = lVar17 + -1;
        uVar30 = uVar30 - 1 & uVar30;
      } while (lVar17 != 0);
    }
    lVar17 = -1;
    if ((param_5 != 0) && (iVar10 != -1)) {
      ppppplStack_408 = (long *****)CONCAT44(ppppplStack_408._4_4_,iVar10);
      local_410 = local_700;
                    /* try { // try from 0051b134 to 0051b13b has its CatchHandler @ 0051b544 */
      auVar31 = <libdiscore_common::core::instant::instant_inner::libdiscore_common::core::instant::instant_inner::Instant>
                ::elapsed(&local_410);
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      ppppplVar20 = (long *****)malloc(0x20);
      if (ppppplVar20 == (long *****)0x0) {
                    /* try { // try from 0051b358 to 0051b363 has its CatchHandler @ 0051b544 */
                    /* WARNING: Subroutine does not return */
        alloc::alloc::handle_alloc_error(8,0x20);
      }
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      pppplVar14 = (long ****)malloc(8);
      if (pppplVar14 == (long ****)0x0) {
                    /* try { // try from 0051b368 to 0051b373 has its CatchHandler @ 0051b4d0 */
                    /* WARNING: Subroutine does not return */
        alloc::raw_vec::handle_error(1,8);
      }
      *pppplVar14 = (long ***)0x6863746170736964;
      *ppppplVar20 = (long ****)0x8;
      ppppplVar20[1] = pppplVar14;
      ppppplVar20[2] = (long ****)0x8;
      lVar17 = 1;
      ppppplVar20[3] =
           (long ****)
           (((double)(auVar31._8_8_ & 0xffffffff) / 1000000000.0 + (double)auVar31._0_8_) * 1000.0);
    }
    param_1[2] = local_120;
    param_1[3] = lVar17;
    param_1[1] = (long)puStack_128;
    *param_1 = local_130;
    lVar18 = _UNK_002a02b8;
    lVar17 = _DAT_002a02b0;
    param_1[4] = (long)ppppplVar20;
    param_1[6] = lVar18;
    param_1[5] = lVar17;
    param_1[7] = 8;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 8;
    param_1[0xb] = 0;
LAB_0051b1f8:
    FUN_00517000(&local_6e8);
  }
  return;
LAB_0051ae10:
  piVar25 = piVar24 + 1;
  iVar3 = *piVar24;
  local_114 = (undefined1  [4])iVar3;
  if (param_2[0xf] != 0) {
    uVar30 = FUN_0053e018(param_2 + 0x10,local_114);
    lVar18 = 0;
    bVar28 = (byte)(uVar30 >> 0x39);
    while( true ) {
      uVar30 = uVar30 & param_2[0xd];
      uVar29 = *(undefined8 *)(param_2[0xc] + uVar30);
      uVar13 = NEON_cmeq(uVar29,CONCAT17(bVar28,CONCAT16(bVar28,CONCAT15(bVar28,CONCAT14(bVar28,
                                                  CONCAT13(bVar28,CONCAT12(bVar28,CONCAT11(bVar28,
                                                  bVar28))))))),1);
      for (uVar13 = uVar13 & 0x8080808080808080; uVar13 != 0; uVar13 = uVar13 - 1 & uVar13) {
        uVar11 = (uVar13 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar13 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        if (iVar3 == *(int *)(param_2[0xc] +
                              (uVar30 + ((ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3) &
                              param_2[0xd]) * -4 + -4)) goto LAB_0051af70;
      }
      uVar29 = NEON_cmeq(uVar29,0xffffffffffffffff,1);
      bVar27 = NEON_umaxv(uVar29,1);
      if ((bVar27 & 1) != 0) break;
      lVar18 = lVar18 + 8;
      uVar30 = uVar30 + lVar18;
    }
  }
  if (param_2[3] != 0) goto code_r0x0051ae48;
LAB_0051b288:
  uVar30 = (ulong)uVar5 & 0xff;
  local_410 = (long ****)local_114;
  local_d8 = (char *****)(&PTR_s_LOGOUT_00acd868)[uVar30];
  ppppplStack_d0 = *(long ******)(&DAT_002bf648 + uVar30 * 8);
  pppppcStack_400 = (char *****)&local_d8;
  ppppplStack_408 = (long *****)FUN_0051ce94;
  pcStack_3f8 = FUN_004b32e0;
                    /* try { // try from 0051b2c8 to 0051b2db has its CatchHandler @ 0051b544 */
  alloc::fmt::format::format_inner(&local_110,&DAT_002a4544,&local_410);
  lVar17 = local_120 + 1;
  param_1[2] = lStack_108;
  param_1[1] = local_110;
  param_1[3] = local_100;
  *param_1 = -1;
  puVar15 = puStack_128;
  while( true ) {
    lVar17 = lVar17 + -1;
    if (lVar17 == 0) break;
                    /* try { // try from 0051b310 to 0051b313 has its CatchHandler @ 0051b4f0 */
    FUN_00524c74(puVar15);
    puVar15 = puVar15 + 0x38;
  }
  if (local_130 != 0) {
    free(puStack_128);
  }
  goto LAB_0051b1f8;
code_r0x0051ae48:
  uVar11 = FUN_0053e018(param_2 + 4,local_114);
  lVar18 = 0;
  bVar28 = (byte)(uVar11 >> 0x39);
  uVar26 = CONCAT17(bVar28,CONCAT16(bVar28,CONCAT15(bVar28,CONCAT14(bVar28,CONCAT13(bVar28,CONCAT12(
                                                  bVar28,CONCAT11(bVar28,bVar28)))))));
  lVar19 = *param_2;
  uVar13 = param_2[1];
  uVar11 = uVar11 & uVar13;
  uVar29 = *(undefined8 *)(lVar19 + uVar11);
  uVar30 = NEON_cmeq(uVar29,uVar26,1);
  uVar30 = uVar30 & 0x8080808080808080;
  while( true ) {
    for (; uVar30 == 0; uVar30 = uVar30 & 0x8080808080808080) {
      uVar29 = NEON_cmeq(uVar29,0xffffffffffffffff,1);
      bVar28 = NEON_umaxv(uVar29,1);
      if ((bVar28 & 1) != 0) goto LAB_0051b288;
      lVar18 = lVar18 + 8;
      uVar11 = uVar11 + lVar18 & uVar13;
      uVar29 = *(undefined8 *)(lVar19 + uVar11);
      uVar30 = NEON_cmeq(uVar29,uVar26,1);
    }
    uVar4 = (uVar30 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar30 >> 7 & 0xff00ff00ff00ff) << 8;
    uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
    lVar1 = lVar19 + (uVar11 + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) & uVar13) *
                     -0x18;
    if (iVar3 == *(int *)(lVar1 + -0x18)) break;
    uVar30 = uVar30 - 1 & uVar30;
  }
                    /* try { // try from 0051aef0 to 0051aefb has its CatchHandler @ 0051b38c */
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))(&local_a0,*(undefined8 *)(lVar1 + -0x10),&local_6e8);
  pcVar9 = local_90;
  pppppcVar34 = pppppcStack_98;
  ppppplVar20 = local_a0;
  if (local_a0 != (long *****)0xffffffffffffffff) {
    if (local_a0 == (long *****)&DAT_fffffffffffffffe) {
                    /* try { // try from 0051b398 to 0051b403 has its CatchHandler @ 0051b4ac */
      local_f8 = libdiscore_common::stores::dispatcher::panic_payload_as_str
                           (pppppcStack_98,local_90);
      if (*(long *)PTR_MAX_LOG_LEVEL_FILTER_00b00c78 != 0) {
                    /* try { // try from 0051b41c to 0051b49f has its CatchHandler @ 0051b4ac */
        local_e8 = (**(code **)(*(long *)(lVar1 + -8) + 0x18))(*(undefined8 *)(lVar1 + -0x10));
        local_b0 = FUN_0051d1b4(uVar5);
        local_410 = (long ****)local_e8;
        pppppcStack_400 = (char *****)local_b0;
        local_3f0 = local_f8;
        ppppplStack_408 = (long *****)FUN_004b32e0;
        pcStack_3f8 = FUN_004b32e0;
        pcStack_3e8 = FUN_004b32e0;
        local_d8 = (char *****)0x2bf26e;
        ppppplStack_d0 = (long *****)0x16;
        local_c8 = (char *****)0x2bf284;
        uStack_c0 = 0x25;
        local_b8 = &PTR_s_common_rust_src_stores_dispatche_00acd450;
        FUN_0051d8f0(&DAT_002b1128,&local_410,1,&local_d8);
      }
      if ((int)*(undefined8 *)(PTR_SENTRY_BREADCRUMB_CALLBACK_00b00cf8 + 8) == 0) {
        pcVar21 = *(code **)PTR_SENTRY_BREADCRUMB_CALLBACK_00b00cf8;
        auVar31 = (**(code **)(*(long *)(lVar1 + -8) + 0x18))(*(undefined8 *)(lVar1 + -0x10));
        auVar32 = FUN_0051d1b4(uVar5);
        (*pcVar21)(auVar31._0_8_,auVar31._8_8_,auVar32._0_8_,auVar32._8_8_,local_f8._0_8_,
                   local_f8._8_8_);
      }
                    /* try { // try from 0051b404 to 0051b40f has its CatchHandler @ 0051b4a4 */
      std::panic::resume_unwind(pppppcVar34,pcVar9);
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x51b414);
      (*pcVar9)();
    }
                    /* try { // try from 0051af14 to 0051af63 has its CatchHandler @ 0051b4c0 */
    FUN_0050d064(param_2 + 0xc,iVar3);
    auVar31 = (**(code **)(*(long *)(lVar1 + -8) + 0x18))(*(undefined8 *)(lVar1 + -0x10));
    uVar30 = (ulong)uVar5 & 0xff;
    FUN_0051ba2c(&local_130,iVar3,auVar31._0_8_,auVar31._8_8_,"handling",8,
                 (&PTR_s_LOGOUT_00acd868)[uVar30],*(undefined8 *)(&DAT_002bf648 + uVar30 * 8),
                 pppppcVar34,pcVar9);
    if (ppppplVar20 != (long *****)0x0) {
      free(pppppcVar34);
    }
  }
LAB_0051af70:
  piVar24 = piVar25;
  if (piVar25 == piVar23 + lVar17) goto LAB_0051af78;
  goto LAB_0051ae10;
}


// ===== 0051b588  FUN_0051b588 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051b588(undefined8 *param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  char cVar5;
  ulong uVar6;
  byte bVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  long *plVar11;
  void *__ptr;
  code *pcVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  undefined8 uVar19;
  byte bVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined1 auVar23 [16];
  void *local_100;
  byte local_f4;
  undefined8 *local_d0;
  long lStack_c8;
  ulong local_c0;
  long local_b8;
  long local_b0;
  long lStack_a8;
  undefined8 **local_98;
  undefined8 *local_90;
  ulong local_88;
  undefined8 *puStack_80;
  long local_78;
  undefined8 ***local_68;
  
  puVar10 = PTR___RUST_STD_INTERNAL_VAL_00b00bf8;
  iVar4 = *(int *)(param_2 + 0xc0);
  *(int *)(param_2 + 0xc0) = iVar4 + 1;
  uVar16 = *(ulong *)puVar10;
  if (uVar16 == 0) {
                    /* try { // try from 0051b968 to 0051b997 has its CatchHandler @ 0051b9dc */
    uVar16 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
             lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00bf8);
    plVar11 = (long *)pthread_getspecific((pthread_key_t)uVar16);
  }
  else {
    plVar11 = (long *)pthread_getspecific((pthread_key_t)uVar16);
  }
  if (plVar11 < (long *)0x2) {
    plVar11 = (long *)FUN_004fd8dc(uVar16 & 0xffffffff,plVar11,0);
  }
  local_b8 = _UNK_00acd480;
  local_c0 = _DAT_00acd478;
  lStack_c8 = _UNK_00acd470;
  local_d0 = (undefined8 *)PTR_DAT_00acd468;
  if (plVar11 == (long *)0x0) {
                    /* try { // try from 0051b9b0 to 0051b9bb has its CatchHandler @ 0051b9dc */
                    /* WARNING: Subroutine does not return */
    std::thread::local::panic_access_error(&PTR_s__nix_store_8006w282fgsx3273c878b_00ace798);
  }
  lStack_a8 = plVar11[1];
  local_b0 = *plVar11;
  *plVar11 = *plVar11 + 1;
                    /* try { // try from 0051b624 to 0051b697 has its CatchHandler @ 0051b9e4 */
  (**(code **)(param_4 + 0x38))(param_3,&local_d0);
  uVar17 = *(ulong *)(param_2 + 0xa8);
  local_90 = *(undefined8 **)(param_2 + 0x90);
  lVar2 = *(long *)(param_2 + 0x98);
  uVar16 = 0;
  if (local_b8 != 0) {
    uVar16 = uVar17 >> 1;
  }
  uVar22 = *local_90;
  if (local_c0 < uVar17 - uVar16) {
                    /* try { // try from 0051b99c to 0051b9ab has its CatchHandler @ 0051b9e4 */
    <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::actions::
    ActionTypes,())>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::
    make_hasher<libdiscore_common[1cb84820f9455fa0]::actions::ActionTypes_();
  }
  local_88 = NEON_cmge(uVar22,0,1);
  local_98 = &local_d0;
  local_68 = &local_98;
  local_88 = local_88 & 0x8080808080808080;
  local_78 = (long)local_90 + lVar2 + 1;
  puStack_80 = local_90 + 1;
  FUN_005126f8(&local_90,uVar17,&local_68);
  lVar2 = lStack_c8;
  if (lStack_c8 != 0) {
    uVar16 = lStack_c8 + 8U & 0xfffffffffffffff8;
    local_100 = (void *)((long)local_d0 - uVar16);
    local_f4 = lStack_c8 + uVar16 == -9;
  }
  if (local_b8 == 0) {
LAB_0051b8d4:
    if (lVar2 != 0 && (local_f4 & 1) == 0) {
      free(local_100);
    }
    auVar23 = FUN_0050ce90(param_2,iVar4,param_3,param_4);
    __ptr = auVar23._0_8_;
    if (__ptr != (void *)0x0) {
      pcVar12 = (code *)*auVar23._8_8_;
      if (pcVar12 != (code *)0x0) {
                    /* try { // try from 0051b91c to 0051b923 has its CatchHandler @ 0051b9c0 */
        (*pcVar12)(__ptr);
      }
      if (auVar23._8_8_[1] != 0) {
        free(__ptr);
      }
    }
    *(int *)(param_1 + 3) = iVar4;
    *param_1 = 0;
    param_1[1] = 8;
    param_1[2] = 0;
    return;
  }
  puVar8 = local_d0 + 1;
  uVar16 = NEON_cmge(*local_d0,0,1);
  uVar16 = uVar16 & 0x8080808080808080;
  puVar9 = local_d0;
  lVar18 = local_b8;
joined_r0x0051b700:
  for (; uVar16 == 0; uVar16 = uVar16 & 0x8080808080808080) {
    uVar16 = NEON_cmge(*puVar8,0,1);
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + -1;
  }
  uVar17 = (uVar16 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar16 >> 7 & 0xff00ff00ff00ff) << 8;
  uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
  lVar18 = lVar18 + -1;
  cVar5 = *(char *)(~((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3) + (long)puVar9);
  uVar16 = uVar16 - 1 & uVar16;
  local_90 = (undefined8 *)CONCAT71(local_90._1_7_,cVar5);
  uVar17 = FUN_0053db98(param_2 + 0x50,&local_90);
  puVar1 = *(undefined8 **)(param_2 + 0x30);
  uVar3 = *(ulong *)(param_2 + 0x38);
  lVar13 = 0;
  bVar7 = (byte)(uVar17 >> 0x38);
  bVar20 = bVar7 >> 1;
  uVar19 = CONCAT17(bVar20,CONCAT16(bVar20,CONCAT15(bVar20,CONCAT14(bVar20,CONCAT13(bVar20,CONCAT12(
                                                  bVar20,CONCAT11(bVar20,bVar20)))))));
  uVar14 = uVar17 & uVar3;
  uVar22 = *(undefined8 *)((long)puVar1 + uVar14);
  uVar21 = NEON_cmeq(uVar22,uVar19,1);
  uVar21 = uVar21 & 0x8080808080808080;
  do {
    if (uVar21 == 0) {
LAB_0051b7a0:
      uVar22 = NEON_cmeq(uVar22,0xffffffffffffffff,1);
      bVar20 = NEON_umaxv(uVar22,1);
      if ((bVar20 & 1) == 0) break;
      if (*(long *)(param_2 + 0x40) == 0) {
        FUN_0050ff6c(param_2 + 0x30,1,param_2 + 0x50);
        puVar1 = *(undefined8 **)(param_2 + 0x30);
        uVar3 = *(ulong *)(param_2 + 0x38);
        uVar17 = uVar3 & uVar17;
        uVar21 = NEON_cmlt(*(undefined8 *)((long)puVar1 + uVar17),0,1);
      }
      else {
        uVar17 = uVar3 & uVar17;
        uVar21 = NEON_cmlt(*(undefined8 *)((long)puVar1 + uVar17),0,1);
      }
      if (uVar21 == 0) {
        lVar13 = 8;
        do {
          uVar17 = uVar17 + lVar13;
          lVar13 = lVar13 + 8;
          uVar17 = uVar17 & uVar3;
          uVar21 = NEON_cmlt(*(undefined8 *)((long)puVar1 + uVar17),0,1);
        } while (uVar21 == 0);
      }
      uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
      uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
      uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
      uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
      uVar21 = uVar17 + ((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3) & uVar3;
      uVar17 = (ulong)*(char *)((long)puVar1 + uVar21);
      if (-1 < *(char *)((long)puVar1 + uVar21)) {
        uVar17 = NEON_cmlt(*puVar1,0,1);
        uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
        uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
        uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
        uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
        uVar21 = (ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3;
        uVar17 = (ulong)*(byte *)((long)puVar1 + uVar21);
      }
      *(byte *)((long)puVar1 + uVar21) = bVar7 >> 1;
      puVar15 = puVar1 + uVar21 * -4;
      *(byte *)((long)puVar1 + (uVar21 - 8 & uVar3) + 8) = bVar7 >> 1;
      *(char *)(puVar15 + -4) = cVar5;
      puVar15[-3] = 0;
      puVar15[-2] = 4;
      puVar15[-1] = 0;
      *(long *)(param_2 + 0x48) = *(long *)(param_2 + 0x48) + 1;
      *(ulong *)(param_2 + 0x40) = *(long *)(param_2 + 0x40) - (uVar17 & 1);
      goto LAB_0051b84c;
    }
LAB_0051b774:
    uVar6 = (uVar21 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar21 >> 7 & 0xff00ff00ff00ff) << 8;
    uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
    puVar15 = puVar1 + (uVar14 + ((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3) & uVar3) * -4;
    if (*(char *)(puVar15 + -4) == cVar5) goto LAB_0051b84c;
    uVar21 = uVar21 - 1 & uVar21;
  } while( true );
  lVar13 = lVar13 + 8;
  uVar14 = uVar14 + lVar13 & uVar3;
  uVar22 = *(undefined8 *)((long)puVar1 + uVar14);
  uVar21 = NEON_cmeq(uVar22,uVar19,1);
  uVar21 = uVar21 & 0x8080808080808080;
  if (uVar21 != 0) goto LAB_0051b774;
  goto LAB_0051b7a0;
LAB_0051b84c:
  lVar13 = puVar15[-1];
  if (lVar13 == puVar15[-3]) {
                    /* try { // try from 0051b860 to 0051b877 has its CatchHandler @ 0051b9f4 */
    FUN_005309d4();
  }
  *(int *)(puVar15[-2] + lVar13 * 4) = iVar4;
  puVar15[-1] = lVar13 + 1;
  if (lVar18 == 0) goto LAB_0051b8d4;
  goto joined_r0x0051b700;
}


// ===== 0051ba2c  FUN_0051ba2c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051ba2c(long *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 *local_b8;
  code *pcStack_b0;
  undefined1 *local_a8;
  code *pcStack_a0;
  undefined8 *local_98;
  code *pcStack_90;
  char *local_88;
  code *pcStack_80;
  undefined8 *puStack_78;
  code *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 **ppuStack_50;
  undefined1 uStack_41;
  
  local_a8 = (undefined1 *)&local_110;
  uStack_e0 = param_9;
  local_d8 = param_10;
  pcStack_a0 = FUN_004b32e0;
  local_98 = &local_100;
  pcStack_90 = FUN_004b32e0;
  local_88 = (char *)&local_f0;
  pcStack_80 = FUN_004b32e0;
  puStack_78 = &uStack_e0;
  local_70 = FUN_004b32e0;
  local_110 = param_3;
  uStack_108 = param_4;
  local_100 = param_5;
  uStack_f8 = param_6;
  local_f0 = param_7;
  local_e8 = param_8;
  alloc::fmt::format::format_inner(&local_d0,&DAT_002b3c39,&local_a8);
  if (*(long *)PTR_MAX_LOG_LEVEL_FILTER_00b00c78 != 0) {
    pcStack_b0 = FUN_0051d640;
    local_70 = (code *)0x2bf26e;
    uStack_68 = 0x16;
    ppuStack_50 = &local_b8;
    local_58 = &DAT_002ab692;
    pcStack_90 = (code *)_UNK_002a03b8;
    local_98 = (undefined8 *)_DAT_002a03b0;
    local_a8 = (undefined1 *)0x0;
    pcStack_a0 = (code *)0x2bf284;
    puStack_78 = _UNK_0029ff78;
    pcStack_80 = (code *)_DAT_0029ff70;
    local_88 = "common/rust/src/stores/dispatcher.rs";
    local_60 = DAT_002a1598;
                    /* try { // try from 0051bb20 to 0051bb2b has its CatchHandler @ 0051bbc4 */
    local_b8 = &local_d0;
    <log::__private_api::GlobalLogger_as_log::Log>::log(&uStack_41,&local_a8);
  }
  puStack_78 = (undefined8 *)CONCAT44(puStack_78._4_4_,param_2);
  lVar2 = param_1[2];
  local_a8 = (undefined1 *)0x0;
  pcStack_a0 = (code *)0x8;
  local_88 = (char *)uStack_c8;
  pcStack_90 = (code *)local_d0;
  pcStack_80 = (code *)local_c0;
  local_98 = (undefined8 *)0x0;
  if (lVar2 == *param_1) {
                    /* try { // try from 0051bb5c to 0051bb63 has its CatchHandler @ 0051bbb0 */
    FUN_00530a3c(param_1);
  }
  puVar1 = (undefined8 *)(param_1[1] + lVar2 * 0x38);
  puVar1[1] = pcStack_a0;
  *puVar1 = local_a8;
  puVar1[3] = pcStack_90;
  puVar1[2] = local_98;
  puVar1[5] = pcStack_80;
  puVar1[4] = local_88;
  puVar1[6] = puStack_78;
  param_1[2] = lVar2 + 1;
  return;
}


// ===== 0051bbe0  FUN_0051bbe0 =====

void FUN_0051bbe0(ulong *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  byte bVar5;
  long lVar6;
  undefined1 *__dest;
  size_t __size;
  void *__src;
  ulong uVar7;
  byte bVar8;
  undefined8 uVar9;
  ulong uVar10;
  long local_60;
  char local_58;
  undefined7 uStack_57;
  char local_44 [4];
  
  <libdiscore_common::actions::ActionTypes_as_core::str::traits::FromStr>::from_str
            (&local_60,param_3,param_4);
  if (local_60 != -1) {
    if (local_60 != 0) {
      free((void *)CONCAT71(uStack_57,local_58));
    }
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = 4;
    return;
  }
  local_44[0] = local_58;
  if (*(long *)(param_2 + 0x48) == 0) {
    uVar10 = 0;
    uVar7 = 0;
    __dest = &DAT_00000004;
  }
  else {
    uVar3 = FUN_0053db98(param_2 + 0x50,local_44);
    lVar4 = 0;
    bVar5 = (byte)(uVar3 >> 0x39);
    lVar1 = *(long *)(param_2 + 0x30);
    uVar7 = *(ulong *)(param_2 + 0x38);
    __dest = &DAT_00000004;
    uVar3 = uVar3 & uVar7;
    uVar9 = *(undefined8 *)(lVar1 + uVar3);
    uVar10 = NEON_cmeq(uVar9,CONCAT17(bVar5,CONCAT16(bVar5,CONCAT15(bVar5,CONCAT14(bVar5,CONCAT13(
                                                  bVar5,CONCAT12(bVar5,CONCAT11(bVar5,bVar5))))))),1
                      );
    uVar10 = uVar10 & 0x8080808080808080;
    while( true ) {
      for (; uVar10 != 0; uVar10 = uVar10 - 1 & uVar10) {
        uVar2 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
        lVar6 = lVar1 + (uVar3 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & uVar7) *
                        -0x20;
        if (local_58 == *(char *)(lVar6 + -0x20)) {
          uVar7 = *(ulong *)(lVar6 + -8);
          __size = uVar7 * 4;
          if (uVar7 >> 0x3e != 0 || 0x7ffffffffffffffc < __size) {
                    /* WARNING: Subroutine does not return */
            alloc::raw_vec::handle_error(0,__size);
          }
          __src = *(void **)(lVar6 + -0x10);
          if (__size == 0) {
            __dest = &DAT_00000004;
            uVar10 = 0;
          }
          else {
            __rustc::__rust_no_alloc_shim_is_unstable_v2();
            __dest = (undefined1 *)malloc(__size);
            uVar10 = uVar7;
            if (__dest == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
              alloc::raw_vec::handle_error(4,__size);
            }
          }
          if (uVar7 != 0) {
            memcpy(__dest,__src,__size);
          }
          goto LAB_0051bd70;
        }
      }
      uVar9 = NEON_cmeq(uVar9,0xffffffffffffffff,1);
      bVar8 = NEON_umaxv(uVar9,1);
      if ((bVar8 & 1) != 0) break;
      lVar4 = lVar4 + 8;
      uVar3 = uVar3 + lVar4 & uVar7;
      uVar9 = *(undefined8 *)(lVar1 + uVar3);
      uVar10 = NEON_cmeq(uVar9,CONCAT17(bVar5,CONCAT16(bVar5,CONCAT15(bVar5,CONCAT14(bVar5,CONCAT13(
                                                  bVar5,CONCAT12(bVar5,CONCAT11(bVar5,bVar5))))))),1
                        );
      uVar10 = uVar10 & 0x8080808080808080;
    }
    uVar10 = 0;
    uVar7 = 0;
  }
LAB_0051bd70:
  *param_1 = uVar10;
  param_1[1] = (ulong)__dest;
  param_1[2] = uVar7;
  return;
}


// ===== 0051bdac  thunk_FUN_0051bdb0 =====

void thunk_FUN_0051bdb0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                       long param_5,undefined8 param_6)

{
  undefined1 *__ptr;
  long lVar1;
  undefined1 *__ptr_00;
  undefined1 *__ptr_01;
  long lVar2;
  long unaff_x25;
  long lVar3;
  long lStack_70;
  undefined1 *puStack_68;
  long lStack_60;
  
  if ((int)DAT_00b0bcf0 != 0) {
    return;
  }
  <&str_as<alloc::ffi::c_str::alloc::ffi::c_str::CString>::new::SpecNewImpl>::spec_new_impl
            (&lStack_70);
  __ptr_00 = puStack_68;
  lVar3 = lStack_60;
  if (lStack_70 != -1) {
    if (lStack_70 != 0) {
      free(puStack_68);
    }
    __ptr_00 = (undefined1 *)0x0;
    lVar3 = unaff_x25;
  }
  <&str_as<alloc::ffi::c_str::alloc::ffi::c_str::CString>::new::SpecNewImpl>::spec_new_impl
            (&lStack_70,param_3,param_4);
  __ptr_01 = puStack_68;
  lVar2 = lStack_60;
  if (lStack_70 != -1) {
    if (lStack_70 != 0) {
      free(puStack_68);
    }
    __ptr_01 = (undefined1 *)0x0;
    lVar2 = param_3;
  }
  <&str_as<alloc::ffi::c_str::alloc::ffi::c_str::CString>::new::SpecNewImpl>::spec_new_impl
            (&lStack_70,param_5,param_6);
  __ptr = puStack_68;
  lVar1 = lStack_60;
  if (lStack_70 != -1) {
    if (lStack_70 != 0) {
      free(puStack_68);
    }
    __ptr = (undefined1 *)0x0;
    lVar1 = param_5;
  }
  if (__ptr_00 != (undefined1 *)0x0) {
    if ((__ptr_01 != (undefined1 *)0x0) && (__ptr != (undefined1 *)0x0)) {
      (*DAT_00b0bce8)(__ptr_00,__ptr_01,__ptr);
      *__ptr_00 = 0;
      if (lVar3 != 0) {
        free(__ptr_00);
      }
      *__ptr_01 = 0;
      if (lVar2 != 0) {
        free(__ptr_01);
      }
      goto LAB_0051bf08;
    }
    *__ptr_00 = 0;
    if (lVar3 != 0) {
      free(__ptr_00);
    }
  }
  if ((__ptr_01 != (undefined1 *)0x0) && (*__ptr_01 = 0, lVar2 != 0)) {
    free(__ptr_01);
  }
  if (__ptr == (undefined1 *)0x0) {
    return;
  }
LAB_0051bf08:
  *__ptr = 0;
  if (lVar1 != 0) {
    free(__ptr);
  }
  return;
}


// ===== 0051bdb0  FUN_0051bdb0 =====

void FUN_0051bdb0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5
                 ,undefined8 param_6)

{
  undefined1 *__ptr;
  long lVar1;
  undefined1 *__ptr_00;
  undefined1 *__ptr_01;
  long lVar2;
  long unaff_x25;
  long lVar3;
  long local_70;
  undefined1 *puStack_68;
  long local_60;
  
  if ((int)DAT_00b0bcf0 != 0) {
    return;
  }
                    /* try { // try from 0051bddc to 0051be6f has its CatchHandler @ 0051bf34 */
  <&str_as<alloc::ffi::c_str::alloc::ffi::c_str::CString>::new::SpecNewImpl>::spec_new_impl
            (&local_70);
  __ptr_00 = puStack_68;
  lVar3 = local_60;
  if (local_70 != -1) {
    if (local_70 != 0) {
      free(puStack_68);
    }
    __ptr_00 = (undefined1 *)0x0;
    lVar3 = unaff_x25;
  }
  <&str_as<alloc::ffi::c_str::alloc::ffi::c_str::CString>::new::SpecNewImpl>::spec_new_impl
            (&local_70,param_3,param_4);
  __ptr_01 = puStack_68;
  lVar2 = local_60;
  if (local_70 != -1) {
    if (local_70 != 0) {
      free(puStack_68);
    }
    __ptr_01 = (undefined1 *)0x0;
    lVar2 = param_3;
  }
  <&str_as<alloc::ffi::c_str::alloc::ffi::c_str::CString>::new::SpecNewImpl>::spec_new_impl
            (&local_70,param_5,param_6);
  __ptr = puStack_68;
  lVar1 = local_60;
  if (local_70 != -1) {
    if (local_70 != 0) {
      free(puStack_68);
    }
    __ptr = (undefined1 *)0x0;
    lVar1 = param_5;
  }
  if (__ptr_00 != (undefined1 *)0x0) {
    if ((__ptr_01 != (undefined1 *)0x0) && (__ptr != (undefined1 *)0x0)) {
      (*DAT_00b0bce8)(__ptr_00,__ptr_01,__ptr);
      *__ptr_00 = 0;
      if (lVar3 != 0) {
        free(__ptr_00);
      }
      *__ptr_01 = 0;
      if (lVar2 != 0) {
        free(__ptr_01);
      }
      goto LAB_0051bf08;
    }
    *__ptr_00 = 0;
    if (lVar3 != 0) {
      free(__ptr_00);
    }
  }
  if ((__ptr_01 != (undefined1 *)0x0) && (*__ptr_01 = 0, lVar2 != 0)) {
    free(__ptr_01);
  }
  if (__ptr == (undefined1 *)0x0) {
    return;
  }
LAB_0051bf08:
  *__ptr = 0;
  if (lVar1 != 0) {
    free(__ptr);
  }
  return;
}


// ===== 0051bf4c  FUN_0051bf4c =====

undefined4 FUN_0051bf4c(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  long lVar3;
  
  uVar1 = FUN_00ab2734();
  lVar3 = param_2[2];
  if (lVar3 == *param_2) {
                    /* try { // try from 0051bf78 to 0051bf7f has its CatchHandler @ 0051bfac */
    <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<alloc::boxed::Box<tokio::runtime::scheduler::multi_thread::worker::Core>>>
    ::grow_one(param_2);
  }
  uVar2 = 5;
  if (lVar3 < 0x7f) {
    uVar2 = 0;
  }
  *(undefined8 *)(param_2[1] + lVar3 * 8) = uVar1;
  param_2[2] = lVar3 + 1;
  return uVar2;
}


// ===== 0051bfb0  FUN_0051bfb0 =====

void FUN_0051bfb0(long param_1,undefined8 param_2)

{
  <str_as_core::fmt::Debug>::fmt
            (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_2);
  return;
}


// ===== 0051bfc4  FUN_0051bfc4 =====

void FUN_0051bfc4(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Debug>::fmt(*param_1,param_1[1],param_2);
  return;
}


// ===== 0051bfd8  FUN_0051bfd8 =====

void FUN_0051bfd8(undefined8 param_1,undefined8 param_2)

{
  <jsi_sys::ffi::base::ffi::JsiFunction_as_cxx::unique_ptr::UniquePtrTarget>::__typename(param_2);
  return;
}


// ===== 0051bfe0  FUN_0051bfe0 =====

void FUN_0051bfe0(undefined8 param_1,undefined8 param_2)

{
  <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__typename(param_2);
  return;
}


// ===== 0051bfe8  FUN_0051bfe8 =====

void FUN_0051bfe8(undefined8 param_1,undefined8 param_2)

{
  <jsi_sys::ffi::base::ffi::JsiArray_as_cxx::unique_ptr::UniquePtrTarget>::__typename(param_2);
  return;
}


// ===== 0051bff0  FUN_0051bff0 =====

void FUN_0051bff0(undefined8 param_1,undefined8 param_2)

{
  <jsi_sys::ffi::base::ffi::JsiValue_as_cxx::unique_ptr::UniquePtrTarget>::__typename(param_2);
  return;
}


// ===== 0051bff8  FUN_0051bff8 =====

void FUN_0051bff8(undefined8 param_1,undefined8 param_2)

{
  <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__typename(param_2);
  return;
}


// ===== 0051c000  FUN_0051c000 =====

void FUN_0051c000(long *param_1,undefined8 param_2)

{
  long *local_18;
  
  if (*param_1 != -1) {
    local_18 = param_1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,"JSError",7,&local_18,&DAT_00acd4c0);
    return;
  }
  local_18 = param_1 + 1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,"Io",2,&local_18,&DAT_00acd4a0);
  return;
}


// ===== 0051c07c  FUN_0051c07c =====

void FUN_0051c07c(long *param_1)

{
  void *pvVar1;
  long lVar2;
  int iVar3;
  void *__ptr;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  iVar3 = (int)param_1[4];
  if (iVar3 == 0) {
    __ptr = (void *)param_1[1];
    lVar2 = param_1[2];
    if (lVar2 != 0) {
      lVar4 = 0;
      do {
        pvVar1 = *(void **)((long)__ptr + lVar4 * 0x38 + 0x28);
        lVar5 = *(long *)((long)__ptr + lVar4 * 0x38 + 0x30);
        if (lVar5 != 0) {
          plVar6 = (long *)((long)pvVar1 + 0x20);
          do {
            if ((*plVar6 != -1) && (*plVar6 != 0)) {
              free((void *)plVar6[1]);
            }
            if ((plVar6[-4] != 2) && (plVar6[-3] != 0)) {
              free((void *)plVar6[-2]);
            }
            lVar5 = lVar5 + -1;
            plVar6 = plVar6 + 9;
          } while (lVar5 != 0);
        }
        if (*(long *)((long)__ptr + lVar4 * 0x38 + 0x20) != 0) {
          free(pvVar1);
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 != lVar2);
    }
  }
  else {
    if (iVar3 == 2) {
      return;
    }
    if (iVar3 != 3) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                ("internal error: entered unreachable code: invalid Once state",0x79,
                 &PTR_s__nix_store_8006w282fgsx3273c878b_00acd438);
    }
    __ptr = (void *)param_1[1];
    lVar2 = param_1[2];
    if (lVar2 != 0) {
      lVar4 = 0;
      do {
        pvVar1 = *(void **)((long)__ptr + lVar4 * 0x38 + 0x28);
        lVar5 = *(long *)((long)__ptr + lVar4 * 0x38 + 0x30);
        if (lVar5 != 0) {
          plVar6 = (long *)((long)pvVar1 + 0x20);
          do {
            if ((*plVar6 != -1) && (*plVar6 != 0)) {
              free((void *)plVar6[1]);
            }
            if ((plVar6[-4] != 2) && (plVar6[-3] != 0)) {
              free((void *)plVar6[-2]);
            }
            lVar5 = lVar5 + -1;
            plVar6 = plVar6 + 9;
          } while (lVar5 != 0);
        }
        if (*(long *)((long)__ptr + lVar4 * 0x38 + 0x20) != 0) {
          free(pvVar1);
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 != lVar2);
    }
  }
  if (*param_1 == 0) {
    return;
  }
  free(__ptr);
  return;
}


// ===== 0051c228  FUN_0051c228 =====

void FUN_0051c228(undefined8 *param_1)

{
  code *pcVar1;
  void *__ptr;
  undefined8 *puVar2;
  
  __ptr = (void *)*param_1;
  if (__ptr != (void *)0x0) {
    puVar2 = (undefined8 *)param_1[1];
    pcVar1 = (code *)*puVar2;
    if (pcVar1 != (code *)0x0) {
                    /* try { // try from 0051c254 to 0051c25b has its CatchHandler @ 0051c2ac */
      (*pcVar1)(__ptr);
    }
    if (puVar2[1] != 0) {
      free(__ptr);
    }
  }
  *param_1 = 0;
  if (param_1[2] != 0) {
    <std::thread::scoped::std::thread::scoped::ScopeData>::decrement_num_running_threads
              (param_1[2] + 0x10,__ptr != (void *)0x0);
    return;
  }
  return;
}


// ===== 0051c318  FUN_0051c318 =====

void FUN_0051c318(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  byte *pbVar1;
  undefined8 *puVar2;
  byte bVar3;
  bool bVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  uint uVar8;
  undefined4 uVar9;
  ulong uVar10;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  int local_80;
  undefined4 uStack_7c;
  int local_78;
  undefined4 local_74;
  
  uVar10 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar10 == 0) {
    uVar10 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
             lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar5 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar10);
    if (&DAT_00000001 < puVar5) goto LAB_0051c360;
LAB_0051c4ec:
    puVar5 = (undefined1 *)FUN_004fd98c(uVar10 & 0xffffffff,puVar5,0);
    if (puVar5 == (undefined1 *)0x0) goto LAB_0051c374;
LAB_0051c364:
    uVar10 = <tokio::task::coop::tokio::task::coop::Budget>::has_remaining
                       (puVar5[0x44],puVar5[0x45]);
    if ((uVar10 & 1) != 0) goto LAB_0051c374;
    tokio::task::coop::register_waker(param_3);
  }
  else {
    puVar5 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar10);
    if (puVar5 <= &DAT_00000001) goto LAB_0051c4ec;
LAB_0051c360:
    if (puVar5 != (undefined1 *)0x0) goto LAB_0051c364;
LAB_0051c374:
    pbVar1 = (byte *)*param_2;
    puVar2 = (undefined8 *)param_2[1];
    uVar8 = (uint)*pbVar1;
    if ((*pbVar1 & 1) == 0) {
      bVar3 = *(byte *)(puVar2 + 2);
      if (bVar3 < 2) {
        if (bVar3 != 0) {
          core::panicking::panic_const::panic_const_async_fn_resumed
                    (&PTR_s__root__cargo_registry_src_index__00acd370);
LAB_0051c510:
          core::panicking::panic_const::panic_const_async_fn_resumed_panic
                    (&PTR_s__root__cargo_registry_src_index__00acd370);
                    /* catch() { ... } // from try @ 0051c3b4 with catch @ 0051c51c */
          *(undefined1 *)(puVar2 + 2) = 2;
                    /* WARNING: Subroutine does not return */
          FUN_00ab2530();
        }
        uVar6 = *puVar2;
        puVar2[1] = uVar6;
      }
      else {
        if (bVar3 != 3) goto LAB_0051c510;
        uVar6 = puVar2[1];
      }
                    /* try { // try from 0051c3b4 to 0051c3bf has its CatchHandler @ 0051c51c */
      FUN_004b2a68(&local_a0,uVar6,param_3);
      uVar7 = 3;
      if (local_80 != -3) {
        uVar7 = 1;
      }
      *(undefined1 *)(puVar2 + 2) = uVar7;
      if (local_80 != -3) {
        uVar8 = *pbVar1 | 1;
        *pbVar1 = (byte)uVar8;
        if (local_80 != -2) {
          *(int *)(param_1 + 4) = local_80;
          *(undefined4 *)((long)param_1 + 0x24) = uStack_7c;
          *(undefined4 *)(param_1 + 5) = 1000000000;
          goto LAB_0051c4b0;
        }
        goto LAB_0051c408;
      }
      bVar4 = true;
      if ((*pbVar1 >> 1 & 1) == 0) goto LAB_0051c410;
    }
    else {
LAB_0051c408:
      bVar4 = false;
      if ((uVar8 >> 1 & 1) == 0) {
LAB_0051c410:
        FUN_0050d5b8(&local_a0,puVar2[3],param_3);
        if (local_78 == -2) goto LAB_0051c46c;
        *pbVar1 = *pbVar1 | 2;
        if (local_78 != -1) {
          *(int *)(param_1 + 5) = local_78;
          *(undefined4 *)((long)param_1 + 0x2c) = local_74;
          param_1[4] = CONCAT44(uStack_7c,local_80);
LAB_0051c4b0:
          param_1[1] = uStack_98;
          *param_1 = local_a0;
          param_1[3] = uStack_88;
          param_1[2] = uStack_90;
          return;
        }
      }
    }
    if (!bVar4) {
      uVar9 = 0x3b9aca02;
      goto LAB_0051c480;
    }
  }
LAB_0051c46c:
  uVar9 = 0xfffffffe;
LAB_0051c480:
  *(undefined4 *)(param_1 + 5) = uVar9;
  return;
}


// ===== 0051c528  FUN_0051c528 =====

void FUN_0051c528(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field1_finish
            (param_2,"Exception",9,&DAT_002bd254,4,&local_18,&DAT_00acd4e0);
  return;
}


// ===== 0051c574  FUN_0051c574 =====

void FUN_0051c574(long *param_1)

{
  if (*(long *)(*param_1 + 0x58) != 0) {
    return;
  }
  return;
}


// ===== 0051c58c  FUN_0051c58c =====

void FUN_0051c58c(undefined8 *param_1)

{
  <reqwest::error::Error_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 0051c594  FUN_0051c594 =====

void FUN_0051c594(undefined8 *param_1)

{
  <anyhow::Error_as_core::fmt::Display>::fmt(*param_1);
  return;
}


// ===== 0051c59c  FUN_0051c59c =====

void FUN_0051c59c(long param_1,undefined8 param_2)

{
  long local_18;
  
  local_18 = param_1 + 0x18;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field2_finish
            (param_2,"FromUtf8Error",0xd,"bytes",5,param_1,&PTR_FUN_00acd500,"error",5,&local_18,
             &DAT_00acd520);
  return;
}


// ===== 0051c60c  FUN_0051c60c =====

undefined1  [16] FUN_0051c60c(long *param_1,ulong param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  lVar1 = *param_1 + -0x7fffffffffffffff;
  if (-0x7fffffffffffffff < *param_1) {
    lVar1 = 0;
  }
  if (lVar1 != 0) {
    if (lVar1 == 1) {
      auVar2._8_8_ = 0;
      auVar2._0_8_ = param_2;
      return auVar2 << 0x40;
    }
    auVar4._8_8_ = &PTR_FUN_00acd560;
    auVar4._0_8_ = param_1 + 1;
    return auVar4;
  }
  auVar3._8_8_ = &PTR_FUN_00acd010;
  auVar3._0_8_ = param_1;
  return auVar3;
}


// ===== 0051c658  FUN_0051c658 =====

void FUN_0051c658(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  void *pvVar4;
  char cVar5;
  ulong uVar6;
  long local_68;
  long lStack_60;
  long local_58;
  long lStack_50;
  char local_48;
  char local_47;
  undefined2 local_44;
  undefined1 local_42;
  
  local_68 = 1;
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
    pvVar4 = (void *)FUN_004fd98c(uVar6 & 0xffffffff,pvVar4,0);
  }
  if (pvVar4 == (void *)0x0) {
    local_48 = '\0';
    local_47 = '\0';
    goto LAB_0051c718;
  }
  cVar1 = *(char *)((long)pvVar4 + 0x44);
  cVar2 = *(char *)((long)pvVar4 + 0x45);
  cVar5 = cVar2;
  if (cVar1 == '\x01') {
    if (cVar2 != '\0') {
      cVar5 = cVar2 + -1;
      goto LAB_0051c6c8;
    }
                    /* try { // try from 0051c768 to 0051c7a7 has its CatchHandler @ 0051c7bc */
    tokio::task::coop::register_waker(param_3);
    bVar3 = true;
  }
  else {
LAB_0051c6c8:
    bVar3 = false;
    *(char *)((long)pvVar4 + 0x45) = cVar5;
  }
  local_42 = 0;
  local_44 = 0;
                    /* try { // try from 0051c6dc to 0051c6e3 has its CatchHandler @ 0051c7bc */
  <tokio::task::coop::RestoreOnPending_as_core::ops::drop::Drop>::drop((ulong)&local_44 | 1);
  local_48 = cVar1;
  local_47 = cVar2;
  if (bVar3) {
    *param_1 = 1;
    FUN_005166c0(&local_68);
    return;
  }
LAB_0051c718:
                    /* try { // try from 0051c728 to 0051c72f has its CatchHandler @ 0051c7ac */
  <tokio::runtime::task::raw::tokio::runtime::task::raw::RawTask>::try_read_output
            (*param_2,&local_68,*param_3);
  if (local_68 == 0) {
    local_48 = '\0';
  }
  param_1[1] = lStack_60;
  *param_1 = local_68;
  param_1[3] = lStack_50;
  param_1[2] = local_58;
  <tokio::task::coop::RestoreOnPending_as_core::ops::drop::Drop>::drop(&local_48);
  return;
}


// ===== 0051c7d4  FUN_0051c7d4 =====

void FUN_0051c7d4(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  void *pvVar4;
  char cVar5;
  ulong uVar6;
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
  char local_48;
  char local_47;
  undefined2 local_44;
  undefined1 local_42;
  
  local_d0 = -1;
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
    pvVar4 = (void *)FUN_004fd98c(uVar6 & 0xffffffff,pvVar4,0);
  }
  if (pvVar4 == (void *)0x0) {
    local_48 = '\0';
    local_47 = '\0';
    goto LAB_0051c894;
  }
  cVar1 = *(char *)((long)pvVar4 + 0x44);
  cVar2 = *(char *)((long)pvVar4 + 0x45);
  cVar5 = cVar2;
  if (cVar1 == '\x01') {
    if (cVar2 != '\0') {
      cVar5 = cVar2 + -1;
      goto LAB_0051c844;
    }
                    /* try { // try from 0051c904 to 0051c943 has its CatchHandler @ 0051c958 */
    tokio::task::coop::register_waker(param_3);
    bVar3 = true;
  }
  else {
LAB_0051c844:
    bVar3 = false;
    *(char *)((long)pvVar4 + 0x45) = cVar5;
  }
  local_42 = 0;
  local_44 = 0;
                    /* try { // try from 0051c858 to 0051c85f has its CatchHandler @ 0051c958 */
  <tokio::task::coop::RestoreOnPending_as_core::ops::drop::Drop>::drop((ulong)&local_44 | 1);
  local_48 = cVar1;
  local_47 = cVar2;
  if (bVar3) {
    *param_1 = -1;
    FUN_005167a4(&local_d0);
    return;
  }
LAB_0051c894:
                    /* try { // try from 0051c8a4 to 0051c8ab has its CatchHandler @ 0051c948 */
  <tokio::runtime::task::raw::tokio::runtime::task::raw::RawTask>::try_read_output
            (*param_2,&local_d0,*param_3);
  if (local_d0 != -1) {
    local_48 = '\0';
  }
  param_1[0xd] = lStack_68;
  param_1[0xc] = local_70;
  param_1[0xf] = lStack_58;
  param_1[0xe] = lStack_60;
  param_1[0x10] = local_50;
  param_1[5] = lStack_a8;
  param_1[4] = local_b0;
  param_1[7] = lStack_98;
  param_1[6] = lStack_a0;
  param_1[9] = lStack_88;
  param_1[8] = local_90;
  param_1[0xb] = lStack_78;
  param_1[10] = lStack_80;
  param_1[1] = lStack_c8;
  *param_1 = local_d0;
  param_1[3] = lStack_b8;
  param_1[2] = lStack_c0;
  <tokio::task::coop::RestoreOnPending_as_core::ops::drop::Drop>::drop(&local_48);
  return;
}


// ===== 0051c970  FUN_0051c970 =====

void FUN_0051c970(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  void *pvVar4;
  char cVar5;
  ulong uVar6;
  long local_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long local_60;
  long lStack_58;
  long local_50;
  char local_48;
  char local_47;
  undefined2 local_44;
  undefined1 local_42;
  
  local_80 = -5;
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
    pvVar4 = (void *)FUN_004fd98c(uVar6 & 0xffffffff,pvVar4,0);
  }
  if (pvVar4 == (void *)0x0) {
    local_48 = '\0';
    local_47 = '\0';
    goto LAB_0051ca30;
  }
  cVar1 = *(char *)((long)pvVar4 + 0x44);
  cVar2 = *(char *)((long)pvVar4 + 0x45);
  cVar5 = cVar2;
  if (cVar1 == '\x01') {
    if (cVar2 != '\0') {
      cVar5 = cVar2 + -1;
      goto LAB_0051c9e0;
    }
                    /* try { // try from 0051ca90 to 0051cacf has its CatchHandler @ 0051cae4 */
    tokio::task::coop::register_waker(param_3);
    bVar3 = true;
  }
  else {
LAB_0051c9e0:
    bVar3 = false;
    *(char *)((long)pvVar4 + 0x45) = cVar5;
  }
  local_42 = 0;
  local_44 = 0;
                    /* try { // try from 0051c9f4 to 0051c9fb has its CatchHandler @ 0051cae4 */
  <tokio::task::coop::RestoreOnPending_as_core::ops::drop::Drop>::drop((ulong)&local_44 | 1);
  local_48 = cVar1;
  local_47 = cVar2;
  if (bVar3) {
    *param_1 = -5;
    FUN_00516864(&local_80);
    return;
  }
LAB_0051ca30:
                    /* try { // try from 0051ca40 to 0051ca47 has its CatchHandler @ 0051cad4 */
  <tokio::runtime::task::raw::tokio::runtime::task::raw::RawTask>::try_read_output
            (*param_2,&local_80,*param_3);
  if (local_80 != -5) {
    local_48 = '\0';
  }
  param_1[1] = lStack_78;
  *param_1 = local_80;
  param_1[3] = lStack_68;
  param_1[2] = lStack_70;
  param_1[5] = lStack_58;
  param_1[4] = local_60;
  param_1[6] = local_50;
  <tokio::task::coop::RestoreOnPending_as_core::ops::drop::Drop>::drop(&local_48);
  return;
}


// ===== 0051cafc  FUN_0051cafc =====

void FUN_0051cafc(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  void *pvVar4;
  char cVar5;
  ulong uVar6;
  long local_68;
  long lStack_60;
  long local_58;
  long lStack_50;
  char local_48;
  char local_47;
  undefined2 local_44;
  undefined1 local_42;
  
  local_68 = 1;
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
    pvVar4 = (void *)FUN_004fd98c(uVar6 & 0xffffffff,pvVar4,0);
  }
  if (pvVar4 == (void *)0x0) {
    local_48 = '\0';
    local_47 = '\0';
    goto LAB_0051cbbc;
  }
  cVar1 = *(char *)((long)pvVar4 + 0x44);
  cVar2 = *(char *)((long)pvVar4 + 0x45);
  cVar5 = cVar2;
  if (cVar1 == '\x01') {
    if (cVar2 != '\0') {
      cVar5 = cVar2 + -1;
      goto LAB_0051cb6c;
    }
                    /* try { // try from 0051cc0c to 0051cc4b has its CatchHandler @ 0051cc60 */
    tokio::task::coop::register_waker(param_3);
    bVar3 = true;
  }
  else {
LAB_0051cb6c:
    bVar3 = false;
    *(char *)((long)pvVar4 + 0x45) = cVar5;
  }
  local_42 = 0;
  local_44 = 0;
                    /* try { // try from 0051cb80 to 0051cb87 has its CatchHandler @ 0051cc60 */
  <tokio::task::coop::RestoreOnPending_as_core::ops::drop::Drop>::drop((ulong)&local_44 | 1);
  local_48 = cVar1;
  local_47 = cVar2;
  if (bVar3) {
    *param_1 = 1;
    FUN_00516a80(&local_68);
    return;
  }
LAB_0051cbbc:
                    /* try { // try from 0051cbcc to 0051cbd3 has its CatchHandler @ 0051cc50 */
  <tokio::runtime::task::raw::tokio::runtime::task::raw::RawTask>::try_read_output
            (*param_2,&local_68,*param_3);
  if (local_68 == 0) {
    local_48 = '\0';
  }
  param_1[1] = lStack_60;
  *param_1 = local_68;
  param_1[3] = lStack_50;
  param_1[2] = local_58;
  <tokio::task::coop::RestoreOnPending_as_core::ops::drop::Drop>::drop(&local_48);
  return;
}


// ===== 0051cc78  FUN_0051cc78 =====

void FUN_0051cc78(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  void *pvVar4;
  char cVar5;
  ulong uVar6;
  long local_68;
  long lStack_60;
  void *local_58;
  undefined8 *puStack_50;
  char local_48;
  char local_47;
  undefined2 local_44;
  undefined1 local_42;
  
  local_68 = 1;
  uVar6 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar6 == 0) {
                    /* try { // try from 0051cde4 to 0051ce13 has its CatchHandler @ 0051ce44 */
    uVar6 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    pvVar4 = pthread_getspecific((pthread_key_t)uVar6);
  }
  else {
    pvVar4 = pthread_getspecific((pthread_key_t)uVar6);
  }
  if (pvVar4 < (void *)0x2) {
    pvVar4 = (void *)FUN_004fd98c(uVar6 & 0xffffffff,pvVar4,0);
  }
  if (pvVar4 == (void *)0x0) {
    local_48 = '\0';
    local_47 = '\0';
    goto LAB_0051cd38;
  }
  cVar1 = *(char *)((long)pvVar4 + 0x44);
  cVar2 = *(char *)((long)pvVar4 + 0x45);
  cVar5 = cVar2;
  if (cVar1 == '\x01') {
    if (cVar2 != '\0') {
      cVar5 = cVar2 + -1;
      goto LAB_0051cce8;
    }
                    /* try { // try from 0051cd88 to 0051cd8f has its CatchHandler @ 0051ce44 */
    tokio::task::coop::register_waker(param_3);
    bVar3 = true;
  }
  else {
LAB_0051cce8:
    bVar3 = false;
    *(char *)((long)pvVar4 + 0x45) = cVar5;
  }
  local_42 = 0;
  local_44 = 0;
                    /* try { // try from 0051ccfc to 0051cd03 has its CatchHandler @ 0051ce44 */
  <tokio::task::coop::RestoreOnPending_as_core::ops::drop::Drop>::drop((ulong)&local_44 | 1);
  local_48 = cVar1;
  local_47 = cVar2;
  if (bVar3) {
    *param_1 = 1;
    if (((local_68 == 0) && (lStack_60 != 0)) && (local_58 != (void *)0x0)) {
      if ((code *)*puStack_50 != (code *)0x0) {
                    /* try { // try from 0051cdb4 to 0051cdbb has its CatchHandler @ 0051ce18 */
        (*(code *)*puStack_50)(local_58);
      }
      if (puStack_50[1] != 0) {
        free(local_58);
        return;
      }
    }
    return;
  }
LAB_0051cd38:
                    /* try { // try from 0051cd48 to 0051cd4f has its CatchHandler @ 0051ce34 */
  <tokio::runtime::task::raw::tokio::runtime::task::raw::RawTask>::try_read_output
            (*param_2,&local_68,*param_3);
  if (local_68 == 0) {
    local_48 = '\0';
  }
  param_1[1] = lStack_60;
  *param_1 = local_68;
  param_1[3] = (long)puStack_50;
  param_1[2] = (long)local_58;
  <tokio::task::coop::RestoreOnPending_as_core::ops::drop::Drop>::drop(&local_48);
  return;
}


// ===== 0051ce5c  FUN_0051ce5c =====

void FUN_0051ce5c(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *param_1;
  iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::drop_join_handle_fast
                    (uVar2);
  if (iVar1 != 0) {
    <tokio::runtime::task::raw::tokio::runtime::task::raw::RawTask>::drop_join_handle_slow(uVar2);
    return;
  }
  return;
}


// ===== 0051ce94  FUN_0051ce94 =====

void FUN_0051ce94(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,"StoreToken",10,&local_18,&DAT_00acd5b8);
  return;
}


// ===== 0051ced4  FUN_0051ced4 =====

void FUN_0051ced4(long *param_1,undefined8 param_2)

{
  long lVar1;
  long *local_18;
  
  lVar1 = *param_1 + -0x7fffffffffffffff;
  if (-0x7fffffffffffffff < *param_1) {
    lVar1 = 0;
  }
  if (lVar1 != 0) {
    if (lVar1 == 1) {
      local_18 = (long *)((long)param_1 + 0xc);
      <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field2_finish
                (param_2,"VersionMismatch",0xf,param_1 + 1,&DAT_00acd5f8,&local_18,&DAT_00acd5b8);
      return;
    }
    local_18 = param_1 + 1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,"SerializeError",0xe,&local_18,&DAT_00acd618);
    return;
  }
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,"Cache",5,&local_18,&DAT_00acd5d8);
  return;
}


// ===== 0051cfa8  FUN_0051cfa8 =====

void FUN_0051cfa8(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"Error",5);
  return;
}


// ===== 0051cfbc  FUN_0051cfbc =====

void FUN_0051cfbc(undefined8 param_1,long param_2)

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


// ===== 0051cfd4  FUN_0051cfd4 =====

void FUN_0051cfd4(undefined8 param_1,long param_2)

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


// ===== 0051cfec  FUN_0051cfec =====

undefined8 FUN_0051cfec(long *param_1,uint param_2)

{
  byte *pbVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = param_1[2];
  if (param_2 < 0x80) {
    if (*param_1 == lVar7) {
      FUN_0052f310(param_1,lVar7,1,1,1);
    }
    *(byte *)(param_1[1] + lVar7) = (byte)param_2;
    lVar6 = 1;
  }
  else {
    uVar2 = 3;
    if (0xffff < param_2) {
      uVar2 = 4;
    }
    uVar3 = 2;
    if (0x7ff < param_2) {
      uVar3 = uVar2;
    }
    if ((ulong)(*param_1 - lVar7) < uVar3) {
      FUN_0052f310(param_1,lVar7,uVar3,1,1);
    }
    bVar4 = (byte)param_2 & 0x3f | 0x80;
    pbVar1 = (byte *)(param_1[1] + lVar7);
    if (param_2 < 0x800) {
      pbVar1[1] = bVar4;
      lVar6 = 2;
      *pbVar1 = (byte)(param_2 >> 6) | 0xc0;
    }
    else {
      bVar5 = (byte)(param_2 >> 6) & 0x3f | 0x80;
      if (param_2 >> 0x10 == 0) {
        pbVar1[1] = bVar5;
        pbVar1[2] = bVar4;
        lVar6 = 3;
        *pbVar1 = (byte)(param_2 >> 0xc) | 0xe0;
      }
      else {
        pbVar1[2] = bVar5;
        pbVar1[3] = bVar4;
        lVar6 = 4;
        pbVar1[1] = (byte)(param_2 >> 0xc) & 0x3f | 0x80;
        *pbVar1 = (byte)(param_2 >> 0x12) | 0xf0;
      }
    }
  }
  param_1[2] = lVar6 + lVar7;
  return 0;
}


// ===== 0051d130  FUN_0051d130 =====

undefined8 FUN_0051d130(long *param_1,void *param_2,ulong param_3)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if ((ulong)(*param_1 - lVar1) < param_3) {
    FUN_0052f310(param_1,lVar1,param_3,1,1);
    lVar1 = param_1[2];
  }
  else if (param_3 == 0) goto LAB_0051d170;
  memcpy((void *)(param_1[1] + lVar1),param_2,param_3);
LAB_0051d170:
  param_1[2] = lVar1 + param_3;
  return 0;
}


// ===== 0051d1b4  FUN_0051d1b4 =====

undefined1  [16] FUN_0051d1b4(ulong param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = *(undefined8 *)(&DAT_002bf648 + (param_1 & 0xff) * 8);
  auVar1._0_8_ = (&PTR_s_LOGOUT_00acd868)[param_1 & 0xff];
  return auVar1;
}


// ===== 0051d1d4  FUN_0051d1d4 =====

void FUN_0051d1d4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_90 = param_1;
  uStack_88 = param_2;
                    /* try { // try from 0051d1e8 to 0051d203 has its CatchHandler @ 0051d23c */
  lVar1 = anyhow::nightly::request_ref_backtrace(&local_90,&PTR_FUN_00accea8);
  if (lVar1 == 0) {
    <std::backtrace::[2]::std::backtrace::Backtrace>::capture(&local_50);
    uStack_58 = uStack_28;
    local_60 = local_30;
    uStack_78 = uStack_48;
    local_80 = local_50;
    uStack_68 = uStack_38;
    uStack_70 = uStack_40;
  }
  else {
    local_80 = 0xffffffffffffffff;
  }
  FUN_00514f50(local_90,uStack_88,&local_80);
  return;
}


// ===== 0051d258  FUN_0051d258 =====

void FUN_0051d258(undefined8 *param_1)

{
  long lVar1;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
                    /* try { // try from 0051d26c to 0051d283 has its CatchHandler @ 0051d2cc */
  lVar1 = anyhow::nightly::request_ref_backtrace(param_1,&PTR_FUN_00accf20);
  if (lVar1 == 0) {
    <std::backtrace::[2]::std::backtrace::Backtrace>::capture(&local_50);
    uStack_58 = uStack_28;
    local_60 = local_30;
    uStack_78 = uStack_48;
    local_80 = local_50;
    uStack_68 = uStack_38;
    uStack_70 = local_40;
  }
  else {
    local_80 = 0xffffffffffffffff;
  }
  uStack_48 = param_1[1];
  local_50 = *param_1;
  local_40 = param_1[2];
  FUN_00514fec(&local_50,&local_80);
  return;
}


// ===== 0051d2e4  FUN_0051d2e4 =====

void FUN_0051d2e4(undefined8 *param_1)

{
  long lVar1;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
                    /* try { // try from 0051d2f8 to 0051d30f has its CatchHandler @ 0051d358 */
  lVar1 = anyhow::nightly::request_ref_backtrace(param_1,&PTR_FUN_00accf98);
  if (lVar1 == 0) {
    <std::backtrace::[2]::std::backtrace::Backtrace>::capture(&local_50);
    uStack_58 = uStack_28;
    local_60 = local_30;
    uStack_78 = uStack_48;
    local_80 = local_50;
    uStack_68 = uStack_38;
    uStack_70 = uStack_40;
  }
  else {
    local_80 = 0xffffffffffffffff;
  }
  uStack_48 = param_1[1];
  local_50 = *param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  local_30 = param_1[4];
  FUN_0051508c(&local_50,&local_80);
  return;
}


// ===== 0051d370  FUN_0051d370 =====

void FUN_0051d370(undefined8 *param_1)

{
  long lVar1;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
                    /* try { // try from 0051d384 to 0051d39b has its CatchHandler @ 0051d3e4 */
  lVar1 = anyhow::nightly::request_ref_backtrace(param_1,&PTR_FUN_00acd010);
  if (lVar1 == 0) {
    <std::backtrace::[2]::std::backtrace::Backtrace>::capture(&local_50);
    uStack_58 = uStack_28;
    local_60 = local_30;
    uStack_78 = uStack_48;
    local_80 = local_50;
    uStack_68 = uStack_38;
    uStack_70 = local_40;
  }
  else {
    local_80 = 0xffffffffffffffff;
  }
  uStack_48 = param_1[1];
  local_50 = *param_1;
  local_40 = param_1[2];
  FUN_00515130(&local_50,&local_80);
  return;
}


// ===== 0051d3fc  FUN_0051d3fc =====

void FUN_0051d3fc(long param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt
            (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_2);
  return;
}


// ===== 0051d410  FUN_0051d410 =====

void FUN_0051d410(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt(*param_1,param_1[1],param_2);
  return;
}


// ===== 0051d424  FUN_0051d424 =====

undefined1  [16] FUN_0051d424(long *param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  
  plVar1 = param_1 + 1;
  if (*param_1 != -1) {
    plVar1 = (long *)0x0;
  }
  auVar2._8_8_ = &PTR_FUN_00acd6a0;
  auVar2._0_8_ = plVar1;
  return auVar2;
}


// ===== 0051d43c  FUN_0051d43c =====

undefined1  [16] FUN_0051d43c(ulong *param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  uVar2 = *param_1 ^ 0x8000000000000000;
  if (-1 < (long)*param_1) {
    uVar2 = 2;
  }
  if ((long)uVar2 < 2) {
    if (uVar2 == 0) {
      auVar4._8_8_ = &PTR_FUN_00acd718;
      auVar4._0_8_ = param_1 + 1;
      return auVar4;
    }
    auVar6._8_8_ = &PTR_FUN_00acd560;
    auVar6._0_8_ = param_1 + 1;
    return auVar6;
  }
  if (uVar2 == 2) {
    auVar5._8_8_ = &PTR_FUN_00acd790;
    auVar5._0_8_ = param_1;
    return auVar5;
  }
  if (uVar2 == 3) {
    auVar3._8_8_ = &PTR_FUN_00acd6a0;
    auVar3._0_8_ = param_1 + 1;
    return auVar3;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  return auVar1 << 0x40;
}


// ===== 0051d4ac  FUN_0051d4ac =====

void FUN_0051d4ac(ulong *param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong *local_18;
  
  uVar1 = *param_1 ^ 0x8000000000000000;
  if (-1 < (long)*param_1) {
    uVar1 = 2;
  }
  if ((long)uVar1 < 2) {
    local_18 = param_1 + 1;
    if (uVar1 == 0) {
      <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
                (param_2,"Request",7,&local_18,&DAT_00acd7e8);
      return;
    }
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,"JsonParseError",0xe,&local_18,&DAT_00acd618);
    return;
  }
  if (uVar1 == 2) {
    local_18 = param_1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,"TextParseError",0xe,&local_18,&DAT_00acd808);
    return;
  }
  if (uVar1 == 3) {
    local_18 = param_1 + 1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,"FileError",9,&local_18,&DAT_00acd4a0);
    return;
  }
  local_18 = param_1 + 3;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field3_finish
            (param_2,&DAT_002a0d40,0x10,"start",5,param_1 + 1,&DAT_00acd828,"end",3,param_1 + 2,
             &DAT_00acd828,"file_size",9,&local_18,&DAT_00acd848);
  return;
}


// ===== 0051d61c  FUN_0051d61c =====

void FUN_0051d61c(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_48 = param_1[1];
  local_50 = *param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  uStack_28 = param_1[5];
  local_30 = param_1[4];
  uStack_18 = param_1[7];
  uStack_20 = param_1[6];
  auVar1 = FUN_0051963c(&local_50);
  <str_as_core::fmt::Display>::fmt
            (*(undefined8 *)(auVar1._0_8_ + 8),*(undefined8 *)(auVar1._0_8_ + 0x10),auVar1._8_8_);
  return;
}


// ===== 0051d640  FUN_0051d640 =====

void FUN_0051d640(long param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt
            (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_2);
  return;
}


// ===== 0051d654  FUN_0051d654 =====

undefined1  [16] FUN_0051d654(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x28;
  auVar1._0_8_ = "description() is deprecated; use Display";
  return auVar1;
}


// ===== 0051d664  FUN_0051d664 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051d664(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029f5a0;
  param_1[1] = _UNK_0029f5a8;
  *param_1 = uVar1;
  return;
}


// ===== 0051d678  FUN_0051d678 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051d678(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029f090;
  param_1[1] = _UNK_0029f098;
  *param_1 = uVar1;
  return;
}


// ===== 0051d68c  FUN_0051d68c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051d68c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029fd70;
  param_1[1] = _UNK_0029fd78;
  *param_1 = uVar1;
  return;
}


// ===== 0051d6a0  FUN_0051d6a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051d6a0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a02c0;
  param_1[1] = _UNK_002a02c8;
  *param_1 = uVar1;
  return;
}


// ===== 0051d6b4  FUN_0051d6b4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051d6b4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029f5b0;
  param_1[1] = _UNK_0029f5b8;
  *param_1 = uVar1;
  return;
}


// ===== 0051d6c8  FUN_0051d6c8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051d6c8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029fd80;
  param_1[1] = _UNK_0029fd88;
  *param_1 = uVar1;
  return;
}


// ===== 0051d6dc  FUN_0051d6dc =====

undefined8 FUN_0051d6dc(void)

{
  return 0;
}


// ===== 0051d6e4  FUN_0051d6e4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051d6e4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029f2e0;
  param_1[1] = _UNK_0029f2e8;
  *param_1 = uVar1;
  return;
}


// ===== 0051d6f8  FUN_0051d6f8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051d6f8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029fe90;
  param_1[1] = _UNK_0029fe98;
  *param_1 = uVar1;
  return;
}


// ===== 0051d70c  FUN_0051d70c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051d70c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029f810;
  param_1[1] = _UNK_0029f818;
  *param_1 = uVar1;
  return;
}


// ===== 0051d720  FUN_0051d720 =====

undefined1  [16] FUN_0051d720(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x28;
  auVar1._0_8_ = "description() is deprecated; use Display";
  return auVar1;
}


// ===== 0051d730  FUN_0051d730 =====

void FUN_0051d730(void)

{
  return;
}


// ===== 0051d734  FUN_0051d734 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051d734(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029f6e0;
  param_1[1] = _UNK_0029f6e8;
  *param_1 = uVar1;
  return;
}


// ===== 0051d748  FUN_0051d748 =====

void FUN_0051d748(long *param_1)

{
  if (*(long *)(*param_1 + 0x58) != 0) {
    return;
  }
  return;
}


// ===== 0051d760  FUN_0051d760 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051d760(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a0d50;
  param_1[1] = _UNK_002a0d58;
  *param_1 = uVar1;
  return;
}


// ===== 0051d774  FUN_0051d774 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051d774(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029fa20;
  param_1[1] = _UNK_0029fa28;
  *param_1 = uVar1;
  return;
}


// ===== 0051d788  FUN_0051d788 =====

undefined1  [16] FUN_0051d788(long *param_1,ulong param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  lVar1 = *param_1 + -0x7fffffffffffffff;
  if (-0x7fffffffffffffff < *param_1) {
    lVar1 = 0;
  }
  if (lVar1 != 0) {
    if (lVar1 == 1) {
      auVar2._8_8_ = 0;
      auVar2._0_8_ = param_2;
      return auVar2 << 0x40;
    }
    auVar4._8_8_ = &PTR_FUN_00acd560;
    auVar4._0_8_ = param_1 + 1;
    return auVar4;
  }
  auVar3._8_8_ = &PTR_FUN_00acd010;
  auVar3._0_8_ = param_1;
  return auVar3;
}


// ===== 0051d7d4  FUN_0051d7d4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051d7d4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029f400;
  param_1[1] = _UNK_0029f408;
  *param_1 = uVar1;
  return;
}


// ===== 0051d7e8  FUN_0051d7e8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051d7e8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029ff60;
  param_1[1] = _UNK_0029ff68;
  *param_1 = uVar1;
  return;
}


// ===== 0051d7fc  FUN_0051d7fc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051d7fc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a0590;
  param_1[1] = _UNK_002a0598;
  *param_1 = uVar1;
  return;
}


// ===== 0051d810  FUN_0051d810 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051d810(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a0f30;
  param_1[1] = _UNK_002a0f38;
  *param_1 = uVar1;
  return;
}


// ===== 0051d824  libdiscore_install_sentry_reporter =====

void libdiscore_install_sentry_reporter(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 local_24 [4];
  undefined1 *local_8;
  
  if ((int)DAT_00b0bce0 != 0) {
    local_8 = param_1;
    FUN_0053ea04(&DAT_00b0bcd8,&local_8);
  }
  local_8 = param_2;
  if ((int)DAT_00b0bcf0 != 0) {
    FUN_0053ea3c(&DAT_00b0bce8,&local_8);
  }
  if ((int)DAT_00b0bcd0 != 0) {
    local_8 = local_24;
    local_24[0] = 1;
    <std::sys::sync::once::futex::[0]::std::sys::sync::once::futex::Once>::call
              (&DAT_00b0bcd0,0,&local_8,&DAT_00accd70,&PTR_s_mobile_rust_src_panic_hook_rs_00acd488)
    ;
  }
  libdiscore_common::stores::dispatcher::set_sentry_breadcrumb_callback(thunk_FUN_0051bdb0);
  return;
}


// ===== 0051d8f0  FUN_0051d8f0 =====

void FUN_0051d8f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 uStack_11;
  
  uStack_40 = *param_4;
  local_38 = param_4[1];
  puVar1 = (undefined8 *)param_4[4];
  local_58 = *puVar1;
  uStack_50 = puVar1[1];
  uStack_2c = *(undefined4 *)(puVar1 + 2);
  uStack_70 = param_4[2];
  local_68 = param_4[3];
  local_78 = 0;
  uStack_60 = 0;
  local_30 = 1;
  local_48 = param_3;
  local_28 = param_1;
  uStack_20 = param_2;
  <log::__private_api::GlobalLogger_as_log::Log>::log(&uStack_11,&local_78);
  return;
}


// ===== 0051d948  FUN_0051d948 =====

void FUN_0051d948(long *param_1)

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
      puVar3 = (undefined8 *)((long)__ptr + 0x20);
      do {
        if (puVar3[-4] != 0) {
          free((void *)puVar3[-3]);
        }
        if (puVar3[-1] != 0) {
          free((void *)*puVar3);
        }
        lVar2 = lVar2 + -1;
        puVar3 = puVar3 + 6;
      } while (lVar2 != 0);
    }
    if (lVar1 != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 0051d9cc  FUN_0051d9cc =====

void FUN_0051d9cc(long *param_1)

{
  long lVar1;
  
  if (*param_1 == 2) {
    param_1 = param_1 + 1;
    lVar1 = *param_1;
  }
  else {
    if (*param_1 == -1) {
      return;
    }
    param_1 = param_1 + 8;
    lVar1 = *param_1;
  }
  if (lVar1 == 0) {
    return;
  }
  free((void *)param_1[1]);
  return;
}


// ===== 0051da0c  FUN_0051da0c =====

void FUN_0051da0c(ulong *param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *param_1;
  if (uVar1 == 0xfffffffffffffffe) {
    FUN_0051e134(param_1 + 1);
    return;
  }
  if (uVar1 != 0xffffffffffffffff) {
    lVar2 = uVar1 - 3;
    if (uVar1 < 3) {
      lVar2 = 1;
    }
    if (lVar2 != 0) {
      if (lVar2 == 1) {
        if (param_1[0xc] != 0) {
          free((void *)param_1[0xd]);
        }
        FUN_0051e224(param_1);
        return;
      }
      if (param_1[1] != 0) {
        free((void *)param_1[2]);
        return;
      }
    }
  }
  return;
}


// ===== 0051da88  FUN_0051da88 =====

void FUN_0051da88(long *param_1)

{
  if (*param_1 != 0) {
    <anyhow::Error_as_core::ops::drop::Drop>::drop();
    return;
  }
  <jsi_sys::ffi::base::ffi::JsiValue_as_cxx::unique_ptr::UniquePtrTarget>::__drop(param_1[1]);
  return;
}


// ===== 0051da9c  FUN_0051da9c =====

void FUN_0051da9c(long *param_1)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  
  __ptr = (void *)param_1[1];
  lVar2 = param_1[2] + 1;
  lVar1 = (long)__ptr + 0x38;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 0051dad8 to 0051dadb has its CatchHandler @ 0051db18 */
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


// ===== 0051db60  FUN_0051db60 =====

void FUN_0051db60(long *param_1)

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


// ===== 0051dbd0  FUN_0051dbd0 =====

void FUN_0051dbd0(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 0051dbe4  FUN_0051dbe4 =====

void FUN_0051dbe4(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = (long *)(param_1 + 0x10);
  lVar6 = *plVar5;
  plVar3 = (long *)(lVar6 + 0x1f0);
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
                    /* try { // try from 0051dc18 to 0051dc27 has its CatchHandler @ 0051dcc0 */
    FUN_005287c4(lVar6 + 0x80);
    <tokio::sync::task::atomic_waker::[0]::tokio::sync::task::atomic_waker::AtomicWaker>::wake
              (lVar6 + 0x100);
  }
  plVar3 = (long *)*plVar5;
  do {
    lVar6 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar6 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar6 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 0051dc44 to 0051dc4b has its CatchHandler @ 0051dcb8 */
    <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::mpsc::chan::Chan<libdiscore_common[1cb84820f9455fa0]::core::http::BackendHttpRequest,tokio[8c8895dbfa691109]::sync::mpsc::bounded::Semaphore>>>
    ::drop_slow(plVar5);
  }
  plVar3 = *(long **)(param_1 + 0x18);
  do {
    lVar6 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar6 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar6 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 0051dc6c to 0051dc6f has its CatchHandler @ 0051dcb0 */
    <alloc[c1f8e832b0d782c7]::sync::Arc<libdiscore_common[1cb84820f9455fa0]::core::maybe_mutex::MaybeRwLock<std[17aff9129faa4dc5]::collections::hash::map::HashMap<u32,libdiscore_common[1cb84820f9455fa0]::core::http::ActiveRequest>>>>
    ::drop_slow();
  }
  plVar3 = *(long **)(param_1 + 0x20);
  do {
    lVar6 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar6 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar6 + -1 == 0) {
    DataMemoryBarrier(2,1);
    FUN_0050ea70((undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}


// ===== 0051dd44  FUN_0051dd44 =====

void FUN_0051dd44(long param_1)

{
  if (*(long *)(param_1 + 0x40) != 0) {
                    /* try { // try from 0051dd64 to 0051dd6b has its CatchHandler @ 0051dd88 */
    (**(code **)(*(long *)(param_1 + 0x40) + 0x20))
              (param_1 + 0x58,*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
  }
                    /* WARNING: Could not recover jumptable at 0x0051dd84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x20))
            (param_1 + 0x30,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}


// ===== 0051ddac  FUN_0051ddac =====

void FUN_0051ddac(undefined8 *param_1)

{
  ulong uVar1;
  long *__ptr;
  long local_28;
  
  __ptr = (long *)*param_1;
  if (*__ptr == 1) {
    uVar1 = __ptr[1] & 3;
    if (1 < uVar1 - 2 && uVar1 != 0) {
      local_28 = __ptr[1] - 1;
                    /* try { // try from 0051de3c to 0051de43 has its CatchHandler @ 0051de48 */
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
    }
  }
  else if ((*__ptr == 0) && (__ptr[2] != 0)) {
    free((void *)__ptr[1]);
    free(__ptr);
    return;
  }
  free(__ptr);
  return;
}


// ===== 0051de5c  FUN_0051de5c =====

void FUN_0051de5c(undefined8 *param_1)

{
  code *pcVar1;
  long *__ptr;
  void *__ptr_00;
  undefined8 *puVar2;
  
  __ptr = (long *)*param_1;
  __ptr_00 = (void *)__ptr[0xb];
  if (__ptr_00 != (void *)0x0) {
    puVar2 = (undefined8 *)__ptr[0xc];
    pcVar1 = (code *)*puVar2;
    if (pcVar1 != (code *)0x0) {
                    /* try { // try from 0051de84 to 0051de8b has its CatchHandler @ 0051dec8 */
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


// ===== 0051df1c  FUN_0051df1c =====

void FUN_0051df1c(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 0051df30  FUN_0051df30 =====

void FUN_0051df30(ulong *param_1)

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


// ===== 0051df80  FUN_0051df80 =====

void FUN_0051df80(long *param_1)

{
  void *__ptr;
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  
  if (param_1[0x11] != 0) {
    free((void *)param_1[0x12]);
  }
  if ((9 < *(byte *)(param_1 + 0x17)) && (param_1[0x19] != 0)) {
    free((void *)param_1[0x18]);
  }
  if (*param_1 != 0) {
    if (param_1[1] == 0) {
      __ptr = (void *)param_1[2];
      puVar7 = (undefined8 *)param_1[3];
      pcVar3 = (code *)*puVar7;
      if (pcVar3 != (code *)0x0) {
                    /* try { // try from 0051dff0 to 0051dff7 has its CatchHandler @ 0051e0c0 */
        (*pcVar3)(__ptr);
      }
      if (puVar7[1] != 0) {
        free(__ptr);
      }
    }
    else {
                    /* try { // try from 0051dfd8 to 0051dfdf has its CatchHandler @ 0051e0d8 */
      (**(code **)(param_1[1] + 0x20))(param_1 + 4,param_1[2],param_1[3]);
    }
  }
  if (param_1[5] != -1) {
                    /* try { // try from 0051e018 to 0051e01b has its CatchHandler @ 0051e0f4 */
    FUN_0051e224();
  }
  lVar4 = param_1[0x14];
  if (lVar4 != -1) {
    lVar6 = param_1[0x16];
    if (lVar6 != 0) {
      puVar7 = (undefined8 *)(param_1[0x15] + 0x20);
      do {
        if (puVar7[-4] != 0) {
          free((void *)puVar7[-3]);
        }
        if (puVar7[-1] != 0) {
          free((void *)*puVar7);
        }
        lVar6 = lVar6 + -1;
        puVar7 = puVar7 + 6;
      } while (lVar6 != 0);
      lVar4 = param_1[0x14];
    }
    if (lVar4 != 0) {
      free((void *)param_1[0x15]);
    }
  }
  plVar5 = (long *)param_1[0x1a];
  if (plVar5 != (long *)0x0) {
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
      <alloc::sync::[n]::alloc::sync::Arc<std::sync::poison::mutex::Mutex<core::option::Option<alloc::boxed::Box<dyn_Trait<Assoc=X>+{backref_26}::ops::function::Fn<(libdiscore_common::core::http::ProgressEvent)>+{backref_26}::marker::Sync+{backref_71}::Send>>>>>
      ::drop_slow(param_1 + 0x1a);
      return;
    }
  }
  return;
}


// ===== 0051e134  FUN_0051e134 =====

void FUN_0051e134(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long local_18;
  
  uVar1 = *param_1;
  uVar2 = uVar1 ^ 0x8000000000000000;
  if (-1 < (long)uVar1) {
    uVar2 = 2;
  }
  if ((long)uVar2 < 2) {
    if (uVar2 == 0) {
      FUN_0051de5c(param_1 + 1);
      return;
    }
    if (uVar2 == 1) {
      FUN_0051ddac(param_1 + 1);
      return;
    }
  }
  else if (uVar2 == 2) {
    if (uVar1 != 0) {
      free((void *)param_1[1]);
      return;
    }
  }
  else if (uVar2 == 3) {
    uVar2 = param_1[1] & 3;
    if ((1 < uVar2 - 2) && (uVar2 != 0)) {
      local_18 = param_1[1] - 1;
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
      return;
    }
  }
  return;
}


// ===== 0051e1d8  FUN_0051e1d8 =====

void FUN_0051e1d8(long *param_1)

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


// ===== 0051e224  FUN_0051e224 =====

void FUN_0051e224(long param_1)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    free(*(void **)(param_1 + 0x48));
  }
                    /* try { // try from 0051e24c to 0051e253 has its CatchHandler @ 0051e2c8 */
  FUN_0052b0b4(param_1 + 0x18);
  if (*(long *)(param_1 + 0x18) != 0) {
    free(*(void **)(param_1 + 0x20));
  }
  __ptr = *(void **)(param_1 + 0x38);
  lVar2 = *(long *)(param_1 + 0x40) + 1;
  lVar1 = (long)__ptr + 0x38;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 0051e288 to 0051e28b has its CatchHandler @ 0051e2ec */
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


// ===== 0051e334  FUN_0051e334 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0051e334(long *param_1,long *param_2)

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
    FUN_00522404(&local_70,&local_28,8);
    if (lVar9 == 0) {
      local_28 = (ulong)*(byte *)(param_2 + 1);
      puVar3 = &local_28;
      lVar9 = 8;
    }
    else {
      puVar3 = (ulong *)param_2[1];
      lVar9 = param_2[2];
    }
    FUN_00522404(&local_70,puVar3,lVar9);
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


// ===== 0051e530  FUN_0051e530 =====

undefined8 FUN_0051e530(undefined8 param_1,undefined8 param_2)

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
  
                    /* try { // try from 0051e550 to 0051e557 has its CatchHandler @ 0051e6c4 */
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
      pcVar4 = (code *)SoftwareBreakpoint(1,0x51e69c);
      (*pcVar4)();
    }
    uVar6 = *(undefined8 *)(lVar9 + lVar7 + 0x10);
  }
                    /* try { // try from 0051e5d0 to 0051e5db has its CatchHandler @ 0051e6bc */
  uVar6 = FUN_005093e8(param_1,uVar6);
                    /* try { // try from 0051e5dc to 0051e5f3 has its CatchHandler @ 0051e69c */
  auVar11 = <tokio::runtime::blocking::pool::[4]::tokio::runtime::blocking::pool::Spawner>::
            spawn_task(lVar9 + lVar1,uVar6,1,local_60);
  local_28 = auVar11._8_8_;
  if ((auVar11._0_8_ == 1) && (local_28 != 0)) {
    local_50 = &local_28;
    puStack_48 = PTR_fmt_00b00cb0;
                    /* try { // try from 0051e684 to 0051e697 has its CatchHandler @ 0051e6e0 */
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


// ===== 0051e718  FUN_0051e718 =====

undefined8 FUN_0051e718(undefined8 param_1,undefined8 param_2)

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
  
                    /* try { // try from 0051e738 to 0051e73f has its CatchHandler @ 0051e8ac */
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
      pcVar4 = (code *)SoftwareBreakpoint(1,0x51e884);
      (*pcVar4)();
    }
    uVar6 = *(undefined8 *)(lVar9 + lVar7 + 0x10);
  }
                    /* try { // try from 0051e7b8 to 0051e7c3 has its CatchHandler @ 0051e8a4 */
  uVar6 = FUN_0050950c(param_1,uVar6);
                    /* try { // try from 0051e7c4 to 0051e7db has its CatchHandler @ 0051e884 */
  auVar11 = <tokio::runtime::blocking::pool::[4]::tokio::runtime::blocking::pool::Spawner>::
            spawn_task(lVar9 + lVar1,uVar6,1,local_60);
  local_28 = auVar11._8_8_;
  if ((auVar11._0_8_ == 1) && (local_28 != 0)) {
    local_50 = &local_28;
    puStack_48 = PTR_fmt_00b00cb0;
                    /* try { // try from 0051e86c to 0051e87f has its CatchHandler @ 0051e8c8 */
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


// ===== 0051e900  FUN_0051e900 =====

undefined8 FUN_0051e900(undefined8 param_1,undefined8 param_2)

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
  
                    /* try { // try from 0051e920 to 0051e927 has its CatchHandler @ 0051ea94 */
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
      pcVar4 = (code *)SoftwareBreakpoint(1,0x51ea6c);
      (*pcVar4)();
    }
    uVar6 = *(undefined8 *)(lVar9 + lVar7 + 0x10);
  }
                    /* try { // try from 0051e9a0 to 0051e9ab has its CatchHandler @ 0051ea8c */
  uVar6 = FUN_00509630(param_1,uVar6);
                    /* try { // try from 0051e9ac to 0051e9c3 has its CatchHandler @ 0051ea6c */
  auVar11 = <tokio::runtime::blocking::pool::[4]::tokio::runtime::blocking::pool::Spawner>::
            spawn_task(lVar9 + lVar1,uVar6,1,local_60);
  local_28 = auVar11._8_8_;
  if ((auVar11._0_8_ == 1) && (local_28 != 0)) {
    local_50 = &local_28;
    puStack_48 = PTR_fmt_00b00cb0;
                    /* try { // try from 0051ea54 to 0051ea67 has its CatchHandler @ 0051eab0 */
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


// ===== 0051eae8  FUN_0051eae8 =====

undefined8 FUN_0051eae8(undefined8 param_1,undefined8 param_2)

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
  
                    /* try { // try from 0051eb08 to 0051eb0f has its CatchHandler @ 0051ec7c */
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
      pcVar4 = (code *)SoftwareBreakpoint(1,0x51ec54);
      (*pcVar4)();
    }
    uVar6 = *(undefined8 *)(lVar9 + lVar7 + 0x10);
  }
                    /* try { // try from 0051eb88 to 0051eb93 has its CatchHandler @ 0051ec74 */
  uVar6 = FUN_00509754(param_1,uVar6);
                    /* try { // try from 0051eb94 to 0051ebab has its CatchHandler @ 0051ec54 */
  auVar11 = <tokio::runtime::blocking::pool::[4]::tokio::runtime::blocking::pool::Spawner>::
            spawn_task(lVar9 + lVar1,uVar6,1,local_60);
  local_28 = auVar11._8_8_;
  if ((auVar11._0_8_ == 1) && (local_28 != 0)) {
    local_50 = &local_28;
    puStack_48 = PTR_fmt_00b00cb0;
                    /* try { // try from 0051ec3c to 0051ec4f has its CatchHandler @ 0051ec98 */
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


// ===== 0051ecd0  FUN_0051ecd0 =====

undefined8 FUN_0051ecd0(undefined8 param_1,undefined8 param_2)

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
  
                    /* try { // try from 0051ecf0 to 0051ecf7 has its CatchHandler @ 0051ee64 */
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
      pcVar4 = (code *)SoftwareBreakpoint(1,0x51ee3c);
      (*pcVar4)();
    }
    uVar6 = *(undefined8 *)(lVar9 + lVar7 + 0x10);
  }
                    /* try { // try from 0051ed70 to 0051ed7b has its CatchHandler @ 0051ee5c */
  uVar6 = FUN_00509878(param_1,uVar6);
                    /* try { // try from 0051ed7c to 0051ed93 has its CatchHandler @ 0051ee3c */
  auVar11 = <tokio::runtime::blocking::pool::[4]::tokio::runtime::blocking::pool::Spawner>::
            spawn_task(lVar9 + lVar1,uVar6,1,local_60);
  local_28 = auVar11._8_8_;
  if ((auVar11._0_8_ == 1) && (local_28 != 0)) {
    local_50 = &local_28;
    puStack_48 = PTR_fmt_00b00cb0;
                    /* try { // try from 0051ee24 to 0051ee37 has its CatchHandler @ 0051ee80 */
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


// ===== 0051eeb8  FUN_0051eeb8 =====

undefined8 FUN_0051eeb8(undefined8 param_1,undefined8 param_2)

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
  
                    /* try { // try from 0051eed8 to 0051eedf has its CatchHandler @ 0051f04c */
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
      pcVar4 = (code *)SoftwareBreakpoint(1,0x51f024);
      (*pcVar4)();
    }
    uVar6 = *(undefined8 *)(lVar9 + lVar7 + 0x10);
  }
                    /* try { // try from 0051ef58 to 0051ef63 has its CatchHandler @ 0051f044 */
  uVar6 = FUN_0050999c(param_1,uVar6);
                    /* try { // try from 0051ef64 to 0051ef7b has its CatchHandler @ 0051f024 */
  auVar11 = <tokio::runtime::blocking::pool::[4]::tokio::runtime::blocking::pool::Spawner>::
            spawn_task(lVar9 + lVar1,uVar6,1,local_60);
  local_28 = auVar11._8_8_;
  if ((auVar11._0_8_ == 1) && (local_28 != 0)) {
    local_50 = &local_28;
    puStack_48 = PTR_fmt_00b00cb0;
                    /* try { // try from 0051f00c to 0051f01f has its CatchHandler @ 0051f068 */
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


// ===== 0051f0a0  FUN_0051f0a0 =====

undefined8 FUN_0051f0a0(undefined8 param_1,undefined8 param_2)

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
  
                    /* try { // try from 0051f0c0 to 0051f0c7 has its CatchHandler @ 0051f234 */
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
      pcVar4 = (code *)SoftwareBreakpoint(1,0x51f20c);
      (*pcVar4)();
    }
    uVar6 = *(undefined8 *)(lVar9 + lVar7 + 0x10);
  }
                    /* try { // try from 0051f140 to 0051f14b has its CatchHandler @ 0051f22c */
  uVar6 = FUN_00509ac0(param_1,uVar6);
                    /* try { // try from 0051f14c to 0051f163 has its CatchHandler @ 0051f20c */
  auVar11 = <tokio::runtime::blocking::pool::[4]::tokio::runtime::blocking::pool::Spawner>::
            spawn_task(lVar9 + lVar1,uVar6,1,local_60);
  local_28 = auVar11._8_8_;
  if ((auVar11._0_8_ == 1) && (local_28 != 0)) {
    local_50 = &local_28;
    puStack_48 = PTR_fmt_00b00cb0;
                    /* try { // try from 0051f1f4 to 0051f207 has its CatchHandler @ 0051f250 */
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


// ===== 0051f288  FUN_0051f288 =====

void FUN_0051f288(undefined8 param_1)

{
  undefined1 auStack_50 [24];
  undefined8 local_38;
  code *pcStack_30;
  undefined1 *local_28;
  undefined *puStack_20;
  undefined1 uStack_11;
  
  local_28 = &uStack_11;
  pcStack_30 = FUN_00523258;
  puStack_20 = PTR_fmt_00b00d00;
  local_38 = param_1;
  alloc::fmt::format::format_inner(auStack_50,&DAT_002aa7e2,&local_38);
  FUN_00514d60(auStack_50);
  return;
}


// ===== 0051f2d8  FUN_0051f2d8 =====

void FUN_0051f2d8(undefined8 param_1)

{
  undefined1 auStack_50 [24];
  undefined8 local_38;
  code *pcStack_30;
  undefined1 *local_28;
  undefined *puStack_20;
  undefined1 uStack_11;
  
  local_28 = &uStack_11;
  pcStack_30 = FUN_00523258;
  puStack_20 = PTR_fmt_00b00d08;
  local_38 = param_1;
  alloc::fmt::format::format_inner(auStack_50,&DAT_002b4c8c,&local_38);
  FUN_00514d60(auStack_50);
  return;
}


// ===== 0051f328  FUN_0051f328 =====

undefined8 FUN_0051f328(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  undefined8 local_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_fmt_00b00c98;
                    /* try { // try from 0051f348 to 0051f363 has its CatchHandler @ 0051f384 */
  local_30 = param_1;
  alloc::fmt::format::format_inner(auStack_48,&DAT_002a802a,&local_30);
  uVar1 = FUN_00514d60(auStack_48);
  FUN_0051e134(param_1);
  return uVar1;
}


// ===== 0051f39c  FUN_0051f39c =====

void FUN_0051f39c(void)

{
  undefined1 auStack_40 [24];
  undefined1 *local_28;
  undefined *puStack_20;
  undefined1 uStack_11;
  
  local_28 = &uStack_11;
  puStack_20 = PTR_fmt_00b00d10;
  alloc::fmt::format::format_inner(auStack_40,&DAT_002a460b,&local_28);
  FUN_00514d60(auStack_40);
  return;
}


// ===== 0051f3e0  FUN_0051f3e0 =====

undefined8 FUN_0051f3e0(undefined8 param_1)

{
  undefined8 uVar1;
  
                    /* try { // try from 0051f3f0 to 0051f3ff has its CatchHandler @ 0051f41c */
  uVar1 = FUN_00514dcc(&DAT_002bf734,0x1e);
  <jsi_sys::ffi::base::ffi::JsiValue_as_cxx::unique_ptr::UniquePtrTarget>::__drop(param_1);
  return uVar1;
}


// ===== 0051f434  FUN_0051f434 =====

undefined8 FUN_0051f434(undefined8 param_1)

{
  undefined8 uVar1;
  
                    /* try { // try from 0051f444 to 0051f453 has its CatchHandler @ 0051f470 */
  uVar1 = FUN_00514dcc(&DAT_002bf752,0x24);
  <jsi_sys::ffi::base::ffi::JsiValue_as_cxx::unique_ptr::UniquePtrTarget>::__drop(param_1);
  return uVar1;
}


// ===== 0051f488  FUN_0051f488 =====

undefined8 FUN_0051f488(undefined8 param_1)

{
  undefined8 uVar1;
  
                    /* try { // try from 0051f498 to 0051f4a7 has its CatchHandler @ 0051f4c4 */
  uVar1 = FUN_00514dcc(&DAT_002bf776,0x1f);
  <jsi_sys::ffi::base::ffi::JsiValue_as_cxx::unique_ptr::UniquePtrTarget>::__drop(param_1);
  return uVar1;
}


// ===== 0051f4dc  FUN_0051f4dc =====

undefined8 FUN_0051f4dc(long *param_1,long param_2,uint param_3,uint param_4)

{
  int *piVar1;
  int *piVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  
  if ((param_4 & 1) == 0) {
    piVar2 = (int *)param_1[2];
    uVar3 = param_1[3];
    if (uVar3 < 4) {
      do {
        if (uVar3 == 0) {
          return 1;
        }
        uVar6 = (param_3 & 0xaaaaaaaa) >> 1 | (param_3 & 0x55555555) << 1;
        uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
        lVar8 = LZCOUNT(uVar6 >> 0x10 | uVar6 << 0x10);
        lVar9 = *param_1 + param_2 + lVar8;
        if (*(char *)(lVar9 + 1) == (char)*piVar2) {
          if (uVar3 == 1) {
            return 1;
          }
          if (*(char *)(lVar9 + 2) == *(char *)((long)piVar2 + 1)) {
            if (uVar3 == 2) {
              return 1;
            }
            if ((*(char *)(lVar9 + 3) == *(char *)((long)piVar2 + 2)) && (uVar3 == 3)) {
              return 1;
            }
          }
        }
        param_3 = param_3 & (1 << (ulong)((uint)lVar8 & 0x1f) ^ 0xffffffffU);
      } while ((param_3 & 0xffff) != 0);
    }
    else {
      do {
        uVar6 = (param_3 & 0xaaaaaaaa) >> 1 | (param_3 & 0x55555555) << 1;
        uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
        lVar9 = LZCOUNT(uVar6 >> 0x10 | uVar6 << 0x10);
        piVar1 = (int *)(*param_1 + param_2 + lVar9 + 1);
        piVar10 = (int *)((long)piVar1 + (uVar3 - 4));
        piVar7 = piVar2;
        do {
          if (piVar10 <= piVar1) {
            if (*piVar10 == *(int *)((long)piVar2 + (uVar3 - 4))) {
              return 1;
            }
            break;
          }
          iVar4 = *piVar1;
          iVar5 = *piVar7;
          piVar7 = piVar7 + 1;
          piVar1 = piVar1 + 1;
        } while (iVar4 == iVar5);
        param_3 = param_3 & (1 << (ulong)((uint)lVar9 & 0x1f) ^ 0xffffffffU);
      } while ((param_3 & 0xffff) != 0);
    }
  }
  return 0;
}


// ===== 0051f5e0  FUN_0051f5e0 =====

void FUN_0051f5e0(undefined8 param_1,undefined1 param_2)

{
  undefined1 local_5c [4];
  undefined1 auStack_58 [24];
  undefined8 local_40;
  undefined *puStack_38;
  undefined1 *local_30;
  code *pcStack_28;
  undefined *local_20;
  code *pcStack_18;
  
  local_30 = local_5c;
  puStack_38 = PTR_fmt_00b00c40;
  pcStack_28 = FUN_0052282c;
  local_20 = &DAT_002bf80e;
  pcStack_18 = FUN_0052282c;
  local_5c[0] = param_2;
  local_40 = param_1;
  alloc::fmt::format::format_inner(auStack_58,&DAT_002a27fe,&local_40);
  FUN_00514d60(auStack_58);
  return;
}


// ===== 0051f640  FUN_0051f640 =====

void FUN_0051f640(undefined8 param_1,undefined1 param_2)

{
  undefined1 local_5c [4];
  undefined1 auStack_58 [24];
  undefined8 local_40;
  undefined *puStack_38;
  undefined1 *local_30;
  code *pcStack_28;
  undefined *local_20;
  code *pcStack_18;
  
  local_30 = local_5c;
  puStack_38 = PTR_fmt_00b00c40;
  pcStack_28 = FUN_0052282c;
  local_20 = &DAT_002bf80f;
  pcStack_18 = FUN_0052282c;
  local_5c[0] = param_2;
  local_40 = param_1;
  alloc::fmt::format::format_inner(auStack_58,&DAT_002aea5e,&local_40);
  FUN_00514d60(auStack_58);
  return;
}


// ===== 0051f6a0  FUN_0051f6a0 =====

/* WARNING: Removing unreachable block (ram,0x005203b0) */
/* WARNING: Type propagation algorithm not settling */

void FUN_0051f6a0(undefined4 *param_1,undefined8 *param_2,long *param_3,ulong *param_4)

{
  ushort *puVar1;
  undefined4 *puVar2;
  short *psVar3;
  void *pvVar4;
  byte bVar5;
  ushort uVar6;
  short sVar7;
  bool bVar8;
  char cVar9;
  void *__ptr;
  ulong *puVar10;
  byte *pbVar11;
  long *plVar12;
  size_t __n;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  byte bVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  long *plVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  bool bVar25;
  undefined1 uVar26;
  bool bVar27;
  ushort uVar28;
  ushort uVar29;
  int iVar30;
  undefined2 *__ptr_00;
  undefined8 uVar31;
  ulong *puVar32;
  undefined8 *puVar33;
  ulong uVar34;
  uint *puVar35;
  ulong *puVar36;
  ulong uVar37;
  long *plVar38;
  code *pcVar39;
  size_t extraout_x9;
  size_t sVar40;
  ulong *puVar41;
  long lVar42;
  ulong uVar43;
  ulong *puVar44;
  undefined8 *puVar45;
  ulong uVar46;
  short sVar47;
  long lVar48;
  undefined8 *puVar49;
  ulong uVar50;
  long lVar51;
  ulong *puVar52;
  ulong *puVar53;
  ulong uVar54;
  ulong uVar55;
  ulong *__ptr_01;
  ulong *puVar56;
  short sVar57;
  ulong uVar58;
  ulong *puVar59;
  ulong uVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  undefined8 uVar65;
  undefined8 uVar66;
  undefined8 uVar67;
  double dVar68;
  double dVar69;
  undefined8 local_660;
  undefined8 local_658;
  undefined **local_650;
  undefined **local_648;
  undefined **local_640;
  undefined **local_638;
  long *local_590 [3];
  undefined8 uStack_578;
  ulong *local_570;
  ulong *puStack_568;
  undefined8 uStack_560;
  long lStack_558;
  ulong *local_550;
  undefined8 *puStack_548;
  ulong uStack_540;
  ulong uStack_538;
  long *local_530;
  size_t sStack_528;
  ulong *local_520;
  ulong *local_518;
  ulong local_510;
  ulong *local_508;
  long local_500;
  ulong local_4f8;
  void *local_4f0;
  ulong uStack_4e8;
  ulong local_4e0;
  byte *pbStack_4d8;
  ulong local_4d0;
  ulong local_4c8;
  void *local_4c0;
  ulong uStack_4b8;
  ulong local_4b0;
  byte *pbStack_4a8;
  ulong local_4a0;
  long *local_498;
  long *plStack_490;
  size_t sStack_488;
  ulong *puStack_480;
  long *local_478;
  ulong uStack_470;
  ulong uStack_468;
  ulong uStack_460;
  int local_458;
  undefined4 uStack_454;
  long *local_450;
  ulong uStack_448;
  ulong local_440;
  ulong uStack_438;
  char local_430;
  undefined4 local_42f;
  undefined3 uStack_42b;
  long *local_420;
  long *plStack_418;
  size_t local_410;
  ulong *puStack_408;
  long *local_400;
  long *plStack_3f8;
  size_t local_3f0;
  ulong *puStack_3e8;
  ulong *local_3e0;
  ulong *puStack_3d8;
  undefined8 local_3d0;
  long lStack_3c8;
  ulong *local_3c0;
  undefined8 *puStack_3b8;
  ulong uStack_3b0;
  ulong uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  long *local_328;
  undefined8 local_320;
  undefined8 local_318;
  ulong local_310;
  long local_308;
  long local_300;
  long *local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  ulong *local_2d8;
  ulong *puStack_2d0;
  undefined8 local_2c8;
  long lStack_2c0;
  ulong *local_2b8;
  undefined8 *puStack_2b0;
  ulong local_2a8;
  ulong uStack_2a0;
  undefined8 local_298;
  long *local_290;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined8 uStack_270;
  ulong *puStack_268;
  undefined8 local_260;
  long lStack_258;
  ulong *local_250;
  undefined8 *puStack_248;
  ulong uStack_240;
  ulong uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
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
  undefined8 local_1c0;
  long *local_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  ulong *puStack_190;
  ulong *puStack_188;
  undefined8 local_180;
  long lStack_178;
  ulong *local_170;
  undefined8 *puStack_168;
  ulong local_160;
  ulong uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long local_128;
  long lStack_120;
  long local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined3 uStack_d4;
  long *local_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  long *local_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong local_90;
  undefined1 auStack_81 [17];
  
  if (param_4[0xb] == 0xffffffffffffffff) {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    __ptr_00 = (undefined2 *)malloc(3);
    if (__ptr_00 == (undefined2 *)0x0) {
                    /* try { // try from 00520c4c to 00520c5f has its CatchHandler @ 00521000 */
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(1,3);
    }
    bVar25 = false;
    uVar34 = 3;
    *(undefined1 *)(__ptr_00 + 1) = 0x54;
    *__ptr_00 = 0x4547;
  }
  else {
    __ptr_00 = (undefined2 *)param_4[0xc];
    uVar34 = param_4[0xd];
    bVar25 = param_4[0xb] == 0;
  }
                    /* try { // try from 0051f720 to 0051f73b has its CatchHandler @ 005210e0 */
  <http::method::http::method::Method>::from_bytes(&local_1b0,__ptr_00,uVar34);
  uVar21 = uStack_19c;
  uVar20 = local_1a0;
  uVar19 = uStack_1a4;
  uVar18 = uStack_1a8;
  plVar22 = local_1b0;
  bVar17 = (byte)local_1b0;
  if ((byte)local_1b0 == 0xff) {
    uVar31 = FUN_0051f39c();
    *(undefined8 *)(param_1 + 2) = uVar31;
    *param_1 = 1;
    if (!bVar25) {
      free(__ptr_00);
    }
    uVar34 = *param_4;
    bVar25 = true;
    bVar27 = true;
  }
  else {
    pvVar4 = (void *)CONCAT44(uStack_1a4,uStack_1a8);
    lVar42 = CONCAT44(uStack_19c,local_1a0);
    if (!bVar25) {
      free(__ptr_00);
    }
    __ptr_01 = param_4 + 0xe;
    bVar25 = *__ptr_01 == 0;
    if (*__ptr_01 == 0) {
      local_590[0] = (long *)0xffffffffffffffff;
    }
    else {
      puVar59 = (ulong *)param_4[0xe];
      uVar34 = param_4[0xf];
      uVar58 = param_4[0x11];
                    /* try { // try from 0051f7c4 to 0051f7cf has its CatchHandler @ 00520fb4 */
      <http::header::map::http::header::map::HeaderMap>::new(&local_1b0);
      if (uVar34 == 0) {
        local_530 = (long *)0x0;
        sVar40 = extraout_x9;
      }
      else {
        sVar40 = uVar34 * 0x31 + 0x39;
        __ptr_01 = puVar59 + uVar34 * -6 + -6;
        local_530 = (long *)&DAT_00000008;
      }
      local_510 = NEON_cmge(*puVar59,0,1);
      puVar10 = puVar59 + 1;
      local_510 = local_510 & 0x8080808080808080;
      local_500 = (long)puVar59 + uVar34 + 1;
      sStack_528 = sVar40;
      local_520 = __ptr_01;
      puVar53 = puVar59;
      puVar36 = puVar10;
      local_4f8 = uVar58;
      if (uVar58 != 0) {
        local_650 = &PTR_s__root__cargo_registry_src_index__00acda50;
        local_648 = &PTR_s__root__cargo_registry_src_index__00acd960;
        local_640 = &PTR_s__root__cargo_registry_src_index__00acda80;
        local_638 = &PTR_s__root__cargo_registry_src_index__00acd9a8;
        local_658 = 8;
        local_660 = 0x270;
        uVar60 = local_510;
        local_518 = puVar59;
        local_508 = puVar10;
joined_r0x0051f88c:
        for (; uVar60 == 0; uVar60 = uVar60 & 0x8080808080808080) {
          local_508 = puVar10 + 1;
          puVar59 = puVar59 + -0x30;
          uVar60 = NEON_cmge(*puVar10,0,1);
          puVar10 = local_508;
          local_518 = puVar59;
        }
        uVar54 = (uVar60 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar60 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar54 = (uVar54 & 0xffff0000ffff0000) >> 0x10 | (uVar54 & 0xffff0000ffff) << 0x10;
        uVar58 = uVar58 - 1;
        uVar60 = uVar60 - 1 & uVar60;
        iVar30 = (int)((ulong)LZCOUNT(uVar54 >> 0x20 | uVar54 << 0x20) >> 3);
        uVar54 = puVar59[(long)-iVar30 * 6 + -6];
        local_4d0 = puVar59[(long)-iVar30 * 6 + -1];
        pbStack_4d8 = (byte *)puVar59[(long)-iVar30 * 6 + -2];
        local_4e0 = puVar59[(long)-iVar30 * 6 + -3];
        uStack_4e8 = puVar59[(long)-iVar30 * 6 + -4];
        local_4f0 = (void *)puVar59[(long)-iVar30 * 6 + -5];
        local_4f8 = uVar58;
        local_510 = uVar60;
        puVar53 = local_518;
        puVar36 = local_508;
        if (uVar54 != 0xffffffffffffffff) {
                    /* try { // try from 0051f914 to 0051f91b has its CatchHandler @ 00520fa8 */
          local_4c8 = uVar54;
          local_4c0 = local_4f0;
          uStack_4b8 = uStack_4e8;
          local_4b0 = local_4e0;
          pbStack_4a8 = pbStack_4d8;
          local_4a0 = local_4d0;
          <http::header::name::HeaderName_as_core::str::traits::FromStr>::from_str
                    (&local_290,local_4f0,uStack_4e8);
          if (local_290 != (long *)&DAT_00000001) {
            sStack_488 = CONCAT44(uStack_274,uStack_278);
            plStack_490 = (long *)CONCAT44(uStack_27c,uStack_280);
            local_498 = (long *)CONCAT44(uStack_284,uStack_288);
            puStack_480 = uStack_270;
            pbVar11 = pbStack_4a8;
            for (uVar55 = local_4a0; uVar55 != 0; uVar55 = uVar55 - 1) {
              bVar5 = *pbVar11;
              if (bVar5 < 0x20) {
                if (bVar5 != 9) {
LAB_005202a4:
                    /* try { // try from 005202a4 to 005202ab has its CatchHandler @ 00520eec */
                  uVar31 = FUN_0051f2d8(&local_4b0);
                  *(undefined8 *)(param_1 + 2) = uVar31;
                  *param_1 = 1;
                  if (local_498 != (long *)0x0) {
                    /* try { // try from 005202cc to 005202d3 has its CatchHandler @ 00520ed8 */
                    (*(code *)local_498[4])(&puStack_480,plStack_490,sStack_488);
                  }
                  goto joined_r0x005202d8;
                }
              }
              else if (bVar5 == 0x7f) goto LAB_005202a4;
              pbVar11 = pbVar11 + 1;
            }
                    /* try { // try from 0051f984 to 0051f98f has its CatchHandler @ 00520f54 */
            <bytes::bytes::bytes::bytes::Bytes>::copy_from_slice(&local_290);
            plVar12 = local_290;
            uStack_460 = CONCAT44(uStack_274,uStack_278);
            uStack_468 = CONCAT44(uStack_27c,uStack_280);
            uStack_470 = CONCAT44(uStack_284,uStack_288);
            local_400._0_7_ = (undefined7)((ulong)uStack_270 >> 8);
            plVar38 = local_400;
            local_478 = local_290;
            local_400._0_4_ = (int)((ulong)uStack_270 >> 8);
            local_458 = (int)local_400 << 8;
            uStack_454 = uStack_270._4_4_;
            plStack_418 = plStack_490;
            local_420 = local_498;
            puStack_408 = puStack_480;
            local_410 = sStack_488;
            local_400 = plVar38;
            if (local_1b0 == (long *)&DAT_00000001) {
              if ((float)puStack_188 / (float)local_160 < 0.2 !=
                  NAN((float)puStack_188 / (float)local_160)) {
                    /* try { // try from 0051fa1c to 0051fa8f has its CatchHandler @ 00520f38 */
                <http::header::map::[12]::http::header::map::Danger>::set_red(&local_1b0);
                uVar55 = local_160;
                puVar33 = puStack_168;
                if (local_160 != 0) {
                  uVar43 = local_160 * 4 - 4;
                  puVar45 = puStack_168;
                  if (0xb < uVar43) {
                    uVar46 = (uVar43 >> 2) + 1;
                    if (uVar43 < 0x3c) {
                      uVar50 = 0;
                    }
                    else {
                      uVar50 = uVar46 & 0x7ffffffffffffff0;
                      uVar43 = uVar46 & 0x7ffffffffffffff0;
                      puVar45 = puStack_168 + 4;
                      do {
                        uVar43 = uVar43 - 0x10;
                        puVar45[-3] = 0xffff0000ffff;
                        puVar45[-4] = 0xffff0000ffff;
                        puVar45[-1] = 0xffff0000ffff;
                        puVar45[-2] = 0xffff0000ffff;
                        puVar45[1] = 0xffff0000ffff;
                        *puVar45 = 0xffff0000ffff;
                        puVar45[3] = 0xffff0000ffff;
                        puVar45[2] = 0xffff0000ffff;
                        puVar45 = puVar45 + 8;
                      } while (uVar43 != 0);
                      if (uVar46 == uVar50) goto LAB_005200b0;
                      if ((uVar46 & 0xc) == 0) {
                        puVar45 = (undefined8 *)((long)puStack_168 + uVar50 * 4);
                        goto LAB_005200a0;
                      }
                    }
                    uVar43 = uVar46 & 0x7ffffffffffffffc;
                    puVar45 = (undefined8 *)((long)puStack_168 + uVar43 * 4);
                    lVar51 = uVar50 - uVar43;
                    puVar49 = (undefined8 *)((long)puStack_168 + uVar50 * 4);
                    do {
                      lVar51 = lVar51 + 4;
                      puVar49[1] = 0xffff0000ffff;
                      *puVar49 = 0xffff0000ffff;
                      puVar49 = puVar49 + 2;
                    } while (lVar51 != 0);
                    if (uVar46 == uVar43) goto LAB_005200b0;
                  }
LAB_005200a0:
                  do {
                    puVar49 = (undefined8 *)((long)puVar45 + 4);
                    *(undefined4 *)puVar45 = 0xffff;
                    puVar45 = puVar49;
                  } while (puVar49 != (undefined8 *)((long)puStack_168 + local_160 * 4));
                }
LAB_005200b0:
                if (puStack_188 != (ulong *)0x0) {
                  puVar36 = puStack_190 + (long)puStack_188 * 0xd;
                  uVar28 = (ushort)uStack_158;
                  uVar43 = uStack_158 & 0xffff;
                  puVar53 = puStack_190;
                  sVar47 = 0;
                  do {
                    puVar32 = puVar53 + 0xd;
                    uVar29 = FUN_0051e334(&local_1b0,puVar53 + 8);
                    uVar37 = (ulong)uVar29;
                    uVar46 = 0;
                    uVar50 = uVar37 & uVar43;
                    *(ushort *)(puVar53 + 0xc) = uVar29;
                    while( true ) {
                      if ((uVar55 <= uVar50) && (uVar50 = 0, uVar55 == 0)) {
                        do {
                    /* WARNING: Do nothing block with infinite loop */
                        } while( true );
                      }
                      psVar3 = (short *)((long)puVar33 + uVar50 * 4);
                      if (*psVar3 == -1) {
                        *psVar3 = sVar47;
                        goto LAB_005201a0;
                      }
                      sVar57 = sVar47;
                      if (((int)uVar50 - (uint)(psVar3[1] & uVar28) & uVar43) < uVar46) break;
                      uVar46 = uVar46 + 1;
                      uVar50 = uVar50 + 1;
                    }
                    while( true ) {
                      uVar29 = (ushort)uVar37;
                      if ((uVar55 <= uVar50) && (uVar50 = 0, uVar55 == 0)) {
                        do {
                    /* WARNING: Do nothing block with infinite loop */
                        } while( true );
                      }
                      psVar3 = (short *)((long)puVar33 + uVar50 * 4);
                      sVar7 = *psVar3;
                      if (sVar7 == -1) break;
                      uVar37 = (ulong)(ushort)psVar3[1];
                      *psVar3 = sVar57;
                      uVar50 = uVar50 + 1;
                      psVar3[1] = uVar29;
                      sVar57 = sVar7;
                    }
                    *psVar3 = sVar57;
LAB_005201a0:
                    *(ushort *)((long)puVar33 + uVar50 * 4 + 2) = uVar29;
                    puVar53 = puVar32;
                    sVar47 = sVar47 + 1;
                  } while (puVar32 != puVar36);
                }
                goto LAB_0051fa94;
              }
              local_1b0 = (long *)0x0;
              uVar55 = FUN_00521adc(&local_1b0,local_160 << 1);
            }
            else {
              if (puStack_188 != (ulong *)(local_160 - (local_160 >> 2))) goto LAB_0051fa94;
              if (puStack_188 == (ulong *)0x0) {
                uStack_158 = CONCAT62(uStack_158._2_6_,7);
                __rustc::__rust_no_alloc_shim_is_unstable_v2();
                puVar33 = (undefined8 *)malloc(0x20);
                if (puVar33 == (undefined8 *)0x0) {
                  local_658 = 2;
                  local_660 = 0x20;
                }
                else {
                  puVar33[1] = 0xffff0000ffff;
                  *puVar33 = 0xffff0000ffff;
                  puVar33[3] = 0xffff0000ffff;
                  puVar33[2] = 0xffff0000ffff;
                  if (local_160 != 0) {
                    free(puStack_168);
                  }
                  local_160 = 8;
                  puStack_168 = puVar33;
                  __rustc::__rust_no_alloc_shim_is_unstable_v2();
                  puVar53 = (ulong *)malloc(0x270);
                  if (puVar53 != (ulong *)0x0) {
                    /* try { // try from 00520010 to 0052001f has its CatchHandler @ 00520e60 */
                    FUN_0052b0b4(&uStack_198);
                    if (CONCAT44(uStack_194,uStack_198) != 0) {
                      free(puStack_190);
                    }
                    uStack_198 = 6;
                    uStack_194 = 0;
                    puStack_188 = (ulong *)0x0;
                    puStack_190 = puVar53;
                    goto LAB_0051fa94;
                  }
                }
                    /* try { // try from 00520de4 to 00520deb has its CatchHandler @ 005210bc */
                    /* WARNING: Subroutine does not return */
                alloc::raw_vec::handle_error(local_658,local_660);
              }
              uVar55 = FUN_00521adc(&local_1b0,local_160 << 1);
            }
            if ((uVar55 & 1) == 0) {
LAB_0051fa94:
              uVar28 = FUN_0051e334(&local_1b0,&local_420);
              uVar46 = local_160;
              puVar33 = puStack_168;
              puVar53 = puStack_188;
              puVar36 = puStack_190;
              __n = local_410;
              plVar12 = plStack_418;
              plVar38 = local_420;
              uVar29 = (ushort)uStack_158;
              uVar50 = uStack_158 & 0xffff;
              uVar55 = 0;
              uVar43 = (ulong)((ushort)uStack_158 & uVar28);
              cVar9 = (char)plStack_418;
              do {
                uVar16 = uStack_274;
                uVar15 = uStack_278;
                uVar14 = uStack_27c;
                uVar24 = uStack_280;
                uVar13 = uStack_284;
                uVar23 = uStack_288;
                if ((uVar46 <= uVar43) && (uVar43 = 0, uVar46 == 0)) {
                  do {
                    /* WARNING: Do nothing block with infinite loop */
                  } while( true );
                }
                puVar1 = (ushort *)((long)puVar33 + uVar43 * 4);
                puVar32 = (ulong *)(ulong)*puVar1;
                uStack_288 = (undefined4)uStack_470;
                uStack_284 = (undefined4)(uStack_470 >> 0x20);
                uStack_280 = (undefined4)uStack_468;
                uStack_27c = (undefined4)(uStack_468 >> 0x20);
                uStack_278 = (undefined4)uStack_460;
                uStack_274 = (undefined4)(uStack_460 >> 0x20);
                if (puVar32 == (ulong *)0xffff) {
                  plStack_3f8 = plStack_418;
                  local_400 = local_420;
                  puStack_3e8 = puStack_408;
                  local_3f0 = local_410;
                  uStack_270 = (ulong *)CONCAT44(uStack_454,local_458);
                  local_290 = local_478;
                    /* try { // try from 0051fe68 to 0051ff2f has its CatchHandler @ 00520f24 */
                  uVar55 = FUN_005219b4(&local_1b0,uVar28,&local_400,&local_290);
                  if ((uVar55 & 1) != 0) goto LAB_00520ca0;
                  if (local_160 <= uVar43) {
                    /* WARNING: Subroutine does not return */
                    core::panicking::panic_bounds_check
                              (uVar43,local_160,&PTR_s__root__cargo_registry_src_index__00acd948);
                  }
                  puVar2 = (undefined4 *)((long)puStack_168 + uVar43 * 4);
                  *(short *)puVar2 = (short)puVar53;
                  *(ushort *)((long)puVar2 + 2) = uVar28;
                  goto LAB_0051fea4;
                }
                uVar6 = puVar1[1];
                if (((int)uVar43 - (uint)(uVar6 & uVar29) & uVar50) < uVar55) {
                  plStack_3f8 = plStack_418;
                  local_400 = local_420;
                  puStack_3e8 = puStack_408;
                  local_3f0 = local_410;
                  uStack_270 = (ulong *)CONCAT44(uStack_454,local_458);
                  bVar27 = local_1b0 != (long *)0x2;
                  local_290 = local_478;
                  uVar46 = FUN_005219b4(&local_1b0,uVar28,&local_400,&local_290);
                  if ((uVar46 & 1) == 0) {
                    uVar46 = 0;
                    while( true ) {
                      if ((local_160 <= uVar43) && (uVar43 = 0, local_160 == 0)) {
                        do {
                    /* WARNING: Do nothing block with infinite loop */
                        } while( true );
                      }
                      puVar1 = (ushort *)((long)puStack_168 + uVar43 * 4);
                      uVar29 = *puVar1;
                      if (uVar29 == 0xffff) break;
                      uVar6 = puVar1[1];
                      *puVar1 = (ushort)puVar53;
                      uVar46 = uVar46 + 1;
                      puVar1[1] = uVar28;
                      uVar43 = uVar43 + 1;
                      puVar53 = (ulong *)(ulong)(uint)uVar29;
                      uVar28 = uVar6;
                    }
                    *puVar1 = (ushort)puVar53;
                    puVar1[1] = uVar28;
                    if ((0x7f < uVar46 || 0x1ff < uVar55 && bVar27) && (local_1b0 == (long *)0x0)) {
                      local_1b0 = (long *)&DAT_00000001;
                    }
                    goto LAB_0051fea4;
                  }
                  goto LAB_00520ca0;
                }
                uStack_288 = uVar23;
                uStack_284 = uVar13;
                uStack_280 = uVar24;
                uStack_27c = uVar14;
                uStack_278 = uVar15;
                uStack_274 = uVar16;
                if (uVar6 == uVar28) {
                  if (puVar53 <= puVar32) {
                    /* try { // try from 00520c3c to 00520c47 has its CatchHandler @ 005210bc */
                    /* WARNING: Subroutine does not return */
                    core::panicking::panic_bounds_check
                              (puVar32,puVar53,&PTR_s__root__cargo_registry_src_index__00acd930);
                  }
                  puVar32 = puVar36 + (long)puVar32 * 0xd;
                  if ((plVar38 == (long *)0x0) != (puVar32[8] != 0)) {
                    if (puVar32[8] == 0) {
                      if ((char)puVar32[9] == cVar9) goto LAB_0051fba4;
                    }
                    else if ((puVar32[10] == __n) &&
                            (iVar30 = memcmp((void *)puVar32[9],plVar12,__n), iVar30 == 0))
                    goto LAB_0051fba4;
                  }
                }
                uVar55 = uVar55 + 1;
                uVar43 = uVar43 + 1;
              } while( true );
            }
                    /* try { // try from 00520c78 to 00520c7f has its CatchHandler @ 00520eac */
            (*(code *)plVar12[4])(&uStack_460,uStack_470,uStack_468);
            if (local_420 != (long *)0x0) {
                    /* try { // try from 00520c94 to 00520cdf has its CatchHandler @ 00520f50 */
              (*(code *)local_420[4])(&puStack_408,plStack_418,local_410);
            }
            goto LAB_00520ca0;
          }
                    /* try { // try from 00520428 to 0052042f has its CatchHandler @ 00520ed8 */
          uVar31 = FUN_0051f288(&local_4c8);
          *(undefined8 *)(param_1 + 2) = uVar31;
          *param_1 = 1;
joined_r0x005202d8:
          if (local_4b0 != 0) {
            free(pbStack_4a8);
          }
          if (uVar54 != 0) {
            free(local_4c0);
          }
          for (; uVar58 != 0; uVar58 = uVar58 - 1) {
            for (; uVar60 == 0; uVar60 = uVar60 & 0x8080808080808080) {
              puVar59 = puVar59 + -0x30;
              uVar60 = NEON_cmge(*puVar10,0,1);
              puVar10 = puVar10 + 1;
            }
            uVar54 = (uVar60 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar60 >> 7 & 0xff00ff00ff00ff) << 8
            ;
            uVar54 = (uVar54 & 0xffff0000ffff0000) >> 0x10 | (uVar54 & 0xffff0000ffff) << 0x10;
            iVar30 = (int)((ulong)LZCOUNT(uVar54 >> 0x20 | uVar54 << 0x20) >> 3);
            if (puVar59[(long)-iVar30 * 6 + -6] != 0) {
              free((void *)puVar59[(long)-iVar30 * 6 + -5]);
            }
            if (puVar59[(long)-iVar30 * 6 + -3] != 0) {
              free((void *)puVar59[(long)-iVar30 * 6 + -2]);
            }
            uVar60 = uVar60 - 1 & uVar60;
          }
          if ((uVar34 != 0) && (sVar40 != 0)) {
            free(__ptr_01);
          }
                    /* try { // try from 00520374 to 0052037f has its CatchHandler @ 00520ef4 */
          FUN_0051e224(&local_1b0);
          bVar25 = false;
          uVar26 = true;
          bVar27 = true;
          if ((bVar17 < 10) || (lVar42 == 0)) goto joined_r0x00520a9c;
          free(pvVar4);
          bVar25 = false;
          goto LAB_00520aa0;
        }
        for (; uVar58 != 0; uVar58 = uVar58 - 1) {
          for (; uVar60 == 0; uVar60 = uVar60 & 0x8080808080808080) {
            puVar59 = puVar59 + -0x30;
            uVar60 = NEON_cmge(*puVar10,0,1);
            puVar10 = puVar10 + 1;
          }
          uVar54 = (uVar60 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar60 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar54 = (uVar54 & 0xffff0000ffff0000) >> 0x10 | (uVar54 & 0xffff0000ffff) << 0x10;
          iVar30 = (int)((ulong)LZCOUNT(uVar54 >> 0x20 | uVar54 << 0x20) >> 3);
          if (puVar59[(long)-iVar30 * 6 + -6] != 0) {
            free((void *)puVar59[(long)-iVar30 * 6 + -5]);
          }
          if (puVar59[(long)-iVar30 * 6 + -3] != 0) {
            free((void *)puVar59[(long)-iVar30 * 6 + -2]);
          }
          uVar60 = uVar60 - 1 & uVar60;
          puVar53 = puVar59;
          puVar36 = puVar10;
        }
      }
LAB_00520454:
      local_508 = puVar36;
      local_518 = puVar53;
      if ((uVar34 != 0) && (sVar40 != 0)) {
        free(__ptr_01);
      }
      puStack_568 = puStack_188;
      local_570 = puStack_190;
      lStack_558 = lStack_178;
      uStack_560 = local_180;
      puStack_548 = puStack_168;
      local_550 = local_170;
      uStack_538 = uStack_158;
      uStack_540 = local_160;
      uStack_578 = CONCAT44(uStack_194,uStack_198);
      local_590[0] = local_1b0;
    }
    plVar38 = (long *)*param_2;
    do {
      lVar42 = *plVar38;
      cVar9 = '\x01';
      bVar27 = (bool)ExclusiveMonitorPass(plVar38,0x10);
      if (bVar27) {
        *plVar38 = lVar42 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar42 < 0) {
LAB_00520dec:
                    /* WARNING: Does not return */
      pcVar39 = (code *)SoftwareBreakpoint(1,0x520df0);
      (*pcVar39)();
    }
    local_118 = param_3[2];
    puStack_188 = (ulong *)0xffffffffffffffff;
    lStack_120 = param_3[1];
    local_128 = *param_3;
    local_110 = 0xffffffffffffffff;
    local_f8 = 0x101010101010101;
    local_f0 = 0x101010101010101;
    uStack_e8 = 0x101010101010101;
    local_1b0 = (long *)0x0;
    local_e0 = 0;
    local_290 = plVar22;
    uStack_288 = uVar18;
    uStack_284 = uVar19;
    uStack_280 = uVar20;
    uStack_27c = uVar21;
                    /* try { // try from 00520508 to 00520517 has its CatchHandler @ 00521008 */
    local_450 = plVar38;
    <libdiscore_common::core::http::[0]::libdiscore_common::core::http::HttpRequest>::method
              (&local_400,&local_1b0,&local_290);
                    /* try { // try from 00520518 to 0052051b has its CatchHandler @ 00520fe8 */
    local_b0 = (long *)<libdiscore_common::core::http::libdiscore_common::core::http::ProgressCallback>
                       ::new();
    uStack_e8 = uStack_338;
    local_f0 = local_340;
    uStack_108 = uStack_358;
    local_110 = local_360;
    local_f8 = uStack_348;
    uStack_100 = uStack_350;
    local_e0 = local_330;
    uStack_148 = uStack_398;
    local_150 = local_3a0;
    uStack_138 = uStack_388;
    uStack_140 = uStack_390;
    local_128 = uStack_378;
    uStack_130 = local_380;
    local_118 = uStack_368;
    lStack_120 = uStack_370;
    puStack_188 = puStack_3d8;
    puStack_190 = local_3e0;
    lStack_178 = lStack_3c8;
    local_180 = local_3d0;
    puStack_168 = puStack_3b8;
    local_170 = local_3c0;
    uStack_158 = uStack_3a8;
    local_160 = uStack_3b0;
    uStack_1a8 = SUB84(plStack_3f8,0);
    uStack_1a4 = (undefined4)((ulong)plStack_3f8 >> 0x20);
    local_1b0 = local_400;
    uStack_198 = SUB84(puStack_3e8,0);
    uStack_194 = (undefined4)((ulong)puStack_3e8 >> 0x20);
    local_1a0 = (undefined4)local_3f0;
    uStack_19c = (undefined4)(local_3f0 >> 0x20);
    do {
      lVar42 = *local_b0;
      cVar9 = '\x01';
      bVar27 = (bool)ExclusiveMonitorPass(local_b0,0x10);
      if (bVar27) {
        *local_b0 = lVar42 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar42 < 0) goto LAB_00520dec;
                    /* try { // try from 00520578 to 00520583 has its CatchHandler @ 00520fcc */
    <libdiscore_common::core::http::[0]::libdiscore_common::core::http::HttpRequest>::
    progress_callback(&local_290,&local_1b0,local_b0);
    uVar34 = *param_4;
    uStack_338 = uStack_1c8;
    local_340 = local_1d0;
    uStack_358 = uStack_1e8;
    local_360 = local_1f0;
    uStack_348 = uStack_1d8;
    uStack_350 = uStack_1e0;
    uVar26 = uVar34 == 0xffffffffffffffff;
    local_330 = local_1c0;
    uStack_398 = uStack_228;
    local_3a0 = local_230;
    uStack_388 = uStack_218;
    uStack_390 = uStack_220;
    uStack_378 = uStack_208;
    local_380 = local_210;
    uStack_368 = uStack_1f8;
    uStack_370 = uStack_200;
    puStack_3d8 = puStack_268;
    local_3e0 = uStack_270;
    lStack_3c8 = lStack_258;
    local_3d0 = local_260;
    puStack_3b8 = puStack_248;
    local_3c0 = local_250;
    uStack_3a8 = uStack_238;
    uStack_3b0 = uStack_240;
    plStack_3f8 = (long *)CONCAT44(uStack_284,uStack_288);
    puStack_3e8 = (ulong *)CONCAT44(uStack_274,uStack_278);
    local_3f0 = CONCAT44(uStack_27c,uStack_280);
    local_400 = local_290;
    if ((bool)uVar26) {
      uVar58 = 1;
      plVar22 = local_400;
LAB_005208f0:
      local_400 = plVar22;
      bVar27 = local_590[0] == (long *)0xffffffffffffffff;
      if (!bVar27) {
        uStack_e8 = uStack_338;
        local_f0 = local_340;
        uStack_108 = uStack_358;
        local_110 = local_360;
        local_f8 = uStack_348;
        uStack_100 = uStack_350;
        local_e0 = local_330;
        uStack_148 = uStack_398;
        local_150 = local_3a0;
        uStack_138 = uStack_388;
        uStack_140 = uStack_390;
        local_128 = uStack_378;
        uStack_130 = local_380;
        local_118 = uStack_368;
        lStack_120 = uStack_370;
        puStack_188 = puStack_3d8;
        puStack_190 = local_3e0;
        lStack_178 = lStack_3c8;
        local_180 = local_3d0;
        puStack_168 = puStack_3b8;
        local_170 = local_3c0;
        uStack_158 = uStack_3a8;
        local_160 = uStack_3b0;
        uStack_1a8 = SUB84(plStack_3f8,0);
        uStack_1a4 = (undefined4)((ulong)plStack_3f8 >> 0x20);
        local_1b0 = local_400;
        uStack_198 = SUB84(puStack_3e8,0);
        uStack_194 = (undefined4)((ulong)puStack_3e8 >> 0x20);
        local_1a0 = (undefined4)local_3f0;
        uStack_19c = (undefined4)(local_3f0 >> 0x20);
                    /* try { // try from 00520944 to 00520a17 has its CatchHandler @ 00521030 */
        <libdiscore_common::core::http::[0]::libdiscore_common::core::http::HttpRequest>::headers
                  (&local_290,&local_1b0,local_590);
        uStack_338 = uStack_1c8;
        local_340 = local_1d0;
        uStack_358 = uStack_1e8;
        local_360 = local_1f0;
        uStack_348 = uStack_1d8;
        uStack_350 = uStack_1e0;
        local_330 = local_1c0;
        uStack_398 = uStack_228;
        local_3a0 = local_230;
        uStack_388 = uStack_218;
        uStack_390 = uStack_220;
        uStack_378 = uStack_208;
        local_380 = local_210;
        uStack_368 = uStack_1f8;
        uStack_370 = uStack_200;
        puStack_3d8 = puStack_268;
        local_3e0 = uStack_270;
        lStack_3c8 = lStack_258;
        local_3d0 = local_260;
        puStack_3b8 = puStack_248;
        local_3c0 = local_250;
        uStack_3a8 = uStack_238;
        uStack_3b0 = uStack_240;
        plStack_3f8 = (long *)CONCAT44(uStack_284,uStack_288);
        puStack_3e8 = (ulong *)CONCAT44(uStack_274,uStack_278);
        local_3f0 = CONCAT44(uStack_27c,uStack_280);
        local_400 = local_290;
      }
      uStack_e8 = uStack_338;
      local_f0 = local_340;
      uStack_108 = uStack_358;
      local_110 = local_360;
      local_f8 = uStack_348;
      uStack_100 = uStack_350;
      local_e0 = local_330;
      uStack_148 = uStack_398;
      local_150 = local_3a0;
      uStack_138 = uStack_388;
      uStack_140 = uStack_390;
      local_128 = uStack_378;
      uStack_130 = local_380;
      local_118 = uStack_368;
      lStack_120 = uStack_370;
      puStack_188 = puStack_3d8;
      puStack_190 = local_3e0;
      lStack_178 = lStack_3c8;
      local_180 = local_3d0;
      puStack_168 = puStack_3b8;
      local_170 = local_3c0;
      uStack_158 = uStack_3a8;
      local_160 = uStack_3b0;
      uStack_1a8 = SUB84(plStack_3f8,0);
      uStack_1a4 = (undefined4)((ulong)plStack_3f8 >> 0x20);
      local_1b0 = local_400;
      uStack_198 = SUB84(puStack_3e8,0);
      uStack_194 = (undefined4)((ulong)puStack_3e8 >> 0x20);
      local_1a0 = (undefined4)local_3f0;
      uStack_19c = (undefined4)(local_3f0 >> 0x20);
      <libdiscore_common::core::http::[5]::libdiscore_common::core::http::PollingHttpClient>::
      make_request(&local_290,local_450 + 2,&local_1b0);
      if (local_290 == (long *)0xffffffffffffffff) {
        *param_1 = 0;
        param_1[1] = uStack_288;
        if ((uVar58 & 1) != 0) {
          do {
            lVar42 = *local_b0;
            cVar9 = '\x01';
            bVar25 = (bool)ExclusiveMonitorPass(local_b0,0x10);
            if (bVar25) {
              *local_b0 = lVar42 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (lVar42 + -1 == 0) {
            DataMemoryBarrier(2,1);
                    /* try { // try from 00520b40 to 00520b47 has its CatchHandler @ 00520edc */
            <alloc::sync::[n]::alloc::sync::Arc<std::sync::poison::mutex::Mutex<core::option::Option<alloc::boxed::Box<dyn_Trait<Assoc=X>+{backref_26}::ops::function::Fn<(libdiscore_common::core::http::ProgressEvent)>+{backref_26}::marker::Sync+{backref_71}::Send>>>>>
            ::drop_slow(&local_b0);
          }
        }
        do {
          lVar42 = *local_450;
          cVar9 = '\x01';
          bVar25 = (bool)ExclusiveMonitorPass(local_450,0x10);
          if (bVar25) {
            *local_450 = lVar42 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (lVar42 + -1 != 0) {
          return;
        }
        DataMemoryBarrier(2,1);
                    /* try { // try from 00520b64 to 00520b6b has its CatchHandler @ 00520f40 */
        FUN_0050f25c(&local_450);
        return;
      }
      local_1b0 = local_290;
      uStack_1a8 = uStack_288;
      uStack_19c = uStack_27c;
      uStack_1a4 = uStack_284;
      local_1a0 = uStack_280;
      puStack_190 = uStack_270;
      uStack_198 = uStack_278;
      uStack_194 = uStack_274;
      uVar31 = FUN_0051d2e4(&local_1b0);
      *(undefined8 *)(param_1 + 2) = uVar31;
      *param_1 = 1;
      if ((uVar58 & 1) != 0) {
        do {
          lVar42 = *local_b0;
          cVar9 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(local_b0,0x10);
          if (bVar8) {
            *local_b0 = lVar42 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (lVar42 + -1 == 0) {
          DataMemoryBarrier(2,1);
                    /* try { // try from 00520a44 to 00520a4b has its CatchHandler @ 00520edc */
          <alloc::sync::[n]::alloc::sync::Arc<std::sync::poison::mutex::Mutex<core::option::Option<alloc::boxed::Box<dyn_Trait<Assoc=X>+{backref_26}::ops::function::Fn<(libdiscore_common::core::http::ProgressEvent)>+{backref_26}::marker::Sync+{backref_71}::Send>>>>>
          ::drop_slow(&local_b0);
        }
      }
    }
    else {
      if (uVar34 == 2) {
        uStack_e8 = uStack_1c8;
        local_f0 = local_1d0;
        uStack_108 = uStack_1e8;
        local_110 = local_1f0;
        local_f8 = uStack_1d8;
        uStack_100 = uStack_1e0;
        local_e0 = local_1c0;
        uStack_148 = uStack_228;
        local_150 = local_230;
        uStack_138 = uStack_218;
        uStack_140 = uStack_220;
        local_128 = uStack_208;
        uStack_130 = local_210;
        local_118 = uStack_1f8;
        lStack_120 = uStack_200;
        puStack_188 = puStack_268;
        puStack_190 = uStack_270;
        lStack_178 = lStack_258;
        local_180 = local_260;
        puStack_168 = puStack_248;
        local_170 = local_250;
        uStack_158 = uStack_238;
        local_160 = uStack_240;
        uStack_1a8 = uStack_288;
        uStack_1a4 = uStack_284;
        local_1b0 = local_290;
        uStack_198 = uStack_278;
        uStack_194 = uStack_274;
        local_1a0 = uStack_280;
        uStack_19c = uStack_27c;
                    /* try { // try from 0052061c to 00520627 has its CatchHandler @ 00520f00 */
        <bytes::bytes::Bytes_as_core::convert::From<alloc::vec::Vec<u8>>>::from
                  (&local_290,param_4 + 1);
        sStack_528 = CONCAT44(uStack_284,uStack_288);
        local_518 = (ulong *)CONCAT44(uStack_274,uStack_278);
        local_520 = (ulong *)CONCAT44(uStack_27c,uStack_280);
        local_530 = local_290;
        if (local_1b0 != (long *)0x0) {
          if (CONCAT44(uStack_1a4,uStack_1a8) == 0) {
            puVar33 = (undefined8 *)CONCAT44(uStack_194,uStack_198);
            pcVar39 = (code *)*puVar33;
            if (pcVar39 != (code *)0x0) {
                    /* try { // try from 00520880 to 00520887 has its CatchHandler @ 00520e40 */
              (*pcVar39)((void *)CONCAT44(uStack_19c,local_1a0));
            }
            if (puVar33[1] != 0) {
              free((void *)CONCAT44(uStack_19c,local_1a0));
            }
          }
          else {
                    /* try { // try from 00520650 to 00520657 has its CatchHandler @ 00520eb4 */
            (**(code **)(CONCAT44(uStack_1a4,uStack_1a8) + 0x20))
                      (&puStack_190,CONCAT44(uStack_19c,local_1a0),CONCAT44(uStack_194,uStack_198));
          }
        }
        uVar58 = 1;
        uStack_358 = uStack_108;
        local_360 = local_110;
        uStack_348 = local_f8;
        uStack_350 = uStack_100;
        uStack_338 = uStack_e8;
        local_340 = local_f0;
        local_330 = local_e0;
        uStack_398 = uStack_148;
        local_3a0 = local_150;
        uStack_388 = uStack_138;
        uStack_390 = uStack_140;
        uStack_378 = local_128;
        local_380 = uStack_130;
        uStack_368 = local_118;
        uStack_370 = lStack_120;
        puStack_3b8 = puStack_168;
        local_3c0 = local_170;
        uStack_3a8 = uStack_158;
        uStack_3b0 = local_160;
        puStack_3d8 = puStack_188;
        local_3e0 = local_518;
        lStack_3c8 = lStack_178;
        local_3d0 = local_180;
        plStack_3f8 = local_530;
        puStack_3e8 = local_520;
        local_3f0 = sStack_528;
        local_400 = (long *)&DAT_00000001;
        plVar22 = local_400;
        goto LAB_005208f0;
      }
      uVar58 = param_4[8];
      pvVar4 = (void *)param_4[9];
      dVar69 = (double)param_4[1];
      uVar60 = param_4[2];
      dVar68 = (double)param_4[3];
                    /* try { // try from 00520680 to 0052068b has its CatchHandler @ 00520f78 */
      FUN_00521db8(&local_1b0,pvVar4,param_4[10]);
      if (local_1b0 == (long *)0xffffffffffffffff) {
        *(ulong *)(param_1 + 2) = CONCAT44(uStack_1a4,uStack_1a8);
        *param_1 = 1;
        if (uVar58 != 0) {
          free(pvVar4);
        }
        do {
          lVar42 = *local_b0;
          cVar9 = '\x01';
          bVar27 = (bool)ExclusiveMonitorPass(local_b0,0x10);
          if (bVar27) {
            *local_b0 = lVar42 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (lVar42 + -1 == 0) {
          DataMemoryBarrier(2,1);
                    /* try { // try from 005206f0 to 005206fb has its CatchHandler @ 00520fe8 */
          <alloc::sync::[n]::alloc::sync::Arc<std::sync::poison::mutex::Mutex<core::option::Option<alloc::boxed::Box<dyn_Trait<Assoc=X>+{backref_26}::ops::function::Fn<(libdiscore_common::core::http::ProgressEvent)>+{backref_26}::marker::Sync+{backref_71}::Send>>>>>
          ::drop_slow(&local_b0);
        }
      }
      else {
        local_318 = CONCAT44(uStack_19c,local_1a0);
        local_328 = local_1b0;
        if (uVar34 == 0 && uVar60 == 0) {
          uVar60 = 2;
        }
        else {
          local_300 = (long)dVar69;
          local_308 = (long)dVar68;
          if ((uVar34 & 1) == 0) {
            local_300 = 0;
          }
        }
                    /* try { // try from 00520720 to 0052076b has its CatchHandler @ 00520f78 */
        local_320 = CONCAT44(uStack_1a4,uStack_1a8);
        local_310 = uVar60;
        <libdiscore_common::core::http::native::libdiscore_common::core::http::native::StreamingBody>
        ::from_file(&local_1b0,&local_328,&local_310,local_b0,param_4 + 4);
        if (local_1b0 != (long *)&DAT_fffffffffffffffe) {
          local_2f8 = local_1b0;
          lStack_2c0 = lStack_178;
          local_2c8 = local_180;
          puStack_2b0 = puStack_168;
          local_2b8 = local_170;
          uStack_2e0 = CONCAT44(uStack_194,uStack_198);
          local_2e8 = CONCAT44(uStack_19c,local_1a0);
          local_298 = local_150;
          uStack_2a0 = uStack_158;
          local_2a8 = local_160;
          puStack_2d0 = puStack_188;
          local_2d8 = puStack_190;
          local_2f0 = CONCAT44(uStack_1a4,uStack_1a8);
          local_e0 = local_330;
          uStack_108 = uStack_358;
          local_110 = local_360;
          local_f8 = uStack_348;
          uStack_100 = uStack_350;
          uStack_e8 = uStack_338;
          local_f0 = local_340;
          uStack_148 = uStack_398;
          local_150 = local_3a0;
          uStack_138 = uStack_388;
          uStack_140 = uStack_390;
          local_128 = uStack_378;
          uStack_130 = local_380;
          local_118 = uStack_368;
          lStack_120 = uStack_370;
          puStack_188 = puStack_3d8;
          puStack_190 = local_3e0;
          lStack_178 = lStack_3c8;
          local_180 = local_3d0;
          puStack_168 = puStack_3b8;
          local_170 = local_3c0;
          uStack_158 = uStack_3a8;
          local_160 = uStack_3b0;
          uStack_1a8 = SUB84(plStack_3f8,0);
          uStack_1a4 = (undefined4)((ulong)plStack_3f8 >> 0x20);
          local_1b0 = local_400;
          uStack_198 = SUB84(puStack_3e8,0);
          uStack_194 = (undefined4)((ulong)puStack_3e8 >> 0x20);
          local_1a0 = (undefined4)local_3f0;
          uStack_19c = (undefined4)(local_3f0 >> 0x20);
                    /* try { // try from 00520828 to 00520833 has its CatchHandler @ 00520e88 */
          <reqwest::async_impl::body::Body_as_core::convert::From<libdiscore_common::core::http::native::StreamingBody>>
          ::from(&local_290,&local_2f8);
          sStack_528 = CONCAT44(uStack_284,uStack_288);
          local_518 = (ulong *)CONCAT44(uStack_274,uStack_278);
          local_520 = (ulong *)CONCAT44(uStack_27c,uStack_280);
          local_530 = local_290;
          if (local_1b0 != (long *)0x0) {
            if (CONCAT44(uStack_1a4,uStack_1a8) == 0) {
              puVar33 = (undefined8 *)CONCAT44(uStack_194,uStack_198);
              __ptr = (void *)CONCAT44(uStack_19c,local_1a0);
              pcVar39 = (code *)*puVar33;
              if (pcVar39 != (code *)0x0) {
                    /* try { // try from 00520b80 to 00520b87 has its CatchHandler @ 00520dfc */
                (*pcVar39)(__ptr);
              }
              if (puVar33[1] != 0) {
                free(__ptr);
              }
            }
            else {
                    /* try { // try from 00520864 to 0052086b has its CatchHandler @ 00520e1c */
              (**(code **)(CONCAT44(uStack_1a4,uStack_1a8) + 0x20))
                        (&puStack_190,CONCAT44(uStack_19c,local_1a0),CONCAT44(uStack_194,uStack_198)
                        );
            }
          }
          local_1b0 = (long *)0x1;
          puStack_190 = local_518;
          uStack_198 = SUB84(local_520,0);
          uStack_194 = (undefined4)((ulong)local_520 >> 0x20);
          uStack_358 = uStack_108;
          local_360 = local_110;
          uStack_348 = local_f8;
          uStack_350 = uStack_100;
          local_1a0 = (undefined4)sStack_528;
          uStack_19c = (undefined4)(sStack_528 >> 0x20);
          uStack_1a8 = SUB84(local_530,0);
          uStack_1a4 = (undefined4)((ulong)local_530 >> 0x20);
          uStack_338 = uStack_e8;
          local_340 = local_f0;
          local_330 = local_e0;
          uStack_398 = uStack_148;
          local_3a0 = local_150;
          uStack_388 = uStack_138;
          uStack_390 = uStack_140;
          uStack_378 = local_128;
          local_380 = uStack_130;
          uStack_368 = local_118;
          uStack_370 = lStack_120;
          puStack_3b8 = puStack_168;
          local_3c0 = local_170;
          uStack_3a8 = uStack_158;
          uStack_3b0 = local_160;
          puStack_3d8 = puStack_188;
          local_3e0 = local_518;
          lStack_3c8 = lStack_178;
          local_3d0 = local_180;
          plStack_3f8 = local_530;
          puStack_3e8 = local_520;
          local_3f0 = sStack_528;
          local_400 = (long *)&DAT_00000001;
          plVar22 = (long *)&DAT_00000001;
          if (uVar58 != 0) {
            free(pvVar4);
            uVar58 = 0;
            plVar22 = local_400;
          }
          goto LAB_005208f0;
        }
        local_290 = (long *)CONCAT44(uStack_1a4,uStack_1a8);
        uStack_288 = local_1a0;
        uStack_284 = uStack_19c;
        uStack_278 = SUB84(puStack_190,0);
        uStack_274 = (undefined4)((ulong)puStack_190 >> 0x20);
        uStack_280 = uStack_198;
        uStack_27c = uStack_194;
        uStack_270 = puStack_188;
        uVar31 = FUN_0051f328(&local_290);
        *(undefined8 *)(param_1 + 2) = uVar31;
        *param_1 = 1;
        if (uVar58 != 0) {
          free(pvVar4);
        }
      }
                    /* try { // try from 00520784 to 0052078f has its CatchHandler @ 00521008 */
      FUN_0051df80(&local_400);
      bVar27 = true;
    }
    do {
      lVar42 = *local_450;
      cVar9 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(local_450,0x10);
      if (bVar8) {
        *local_450 = lVar42 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar42 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 00520a68 to 00520a6f has its CatchHandler @ 00520f40 */
      FUN_0050f25c(&local_450);
    }
    bVar27 = (bool)(bVar27 ^ 1);
    if (local_590[0] == (long *)0xffffffffffffffff) {
      bVar27 = true;
    }
    if (bVar27) {
      bVar27 = false;
    }
    else {
                    /* try { // try from 00520a84 to 00520a8b has its CatchHandler @ 00520f28 */
      FUN_0051e224(local_590);
      bVar27 = false;
    }
joined_r0x00520a9c:
    if (!(bool)uVar26) goto LAB_00520ad0;
LAB_00520aa0:
    uVar34 = *param_4;
  }
  if (uVar34 != 0xffffffffffffffff) {
    lVar42 = 8;
    if (uVar34 != 2) {
      lVar42 = 0x40;
    }
    if (*(long *)((long)param_4 + lVar42) != 0) {
      free((void *)((long *)((long)param_4 + lVar42))[1]);
    }
  }
LAB_00520ad0:
  if ((bVar25) && (param_4[0xe] != 0)) {
                    /* try { // try from 00520adc to 00520ae3 has its CatchHandler @ 00521020 */
    FUN_005136b4(param_4 + 0xe);
  }
  if ((bVar27) && (*param_3 != 0)) {
    free((void *)param_3[1]);
  }
  return;
LAB_0051fba4:
  lVar51 = lStack_178;
  local_90 = CONCAT44(uStack_454,local_458);
  uStack_a8 = uStack_470;
  local_b0 = local_478;
  uStack_98 = uStack_460;
  uStack_a0 = uStack_468;
  if ((*puVar32 & 1) != 0) {
    puVar56 = (ulong *)puVar32[1];
    puVar52 = local_170;
    if (local_170 <= puVar56) {
LAB_00520d90:
                    /* try { // try from 00520d90 to 00520d9f has its CatchHandler @ 0052112c */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check(puVar56,puVar52,local_648);
    }
    puVar33 = (undefined8 *)(lStack_178 + (long)local_170 * 0x48);
    do {
      puVar35 = (uint *)(lVar51 + (long)puVar56 * 0x48);
      puVar41 = *(ulong **)(puVar35 + 2);
      puVar44 = *(ulong **)(puVar35 + 6);
      if ((*puVar35 & 1) == 0) {
        if (puVar35[4] == 0) {
          if (puVar53 <= puVar41) {
            local_648 = &PTR_s__root__cargo_registry_src_index__00acd978;
            puVar52 = puVar53;
            puVar56 = puVar41;
            goto LAB_00520d90;
          }
          puVar36[(long)puVar41 * 0xd] = 0;
        }
        else {
          if (puVar53 <= puVar41) {
            local_648 = &PTR_s__root__cargo_registry_src_index__00acd990;
            puVar52 = puVar53;
            puVar56 = puVar41;
            goto LAB_00520d90;
          }
          if (puVar36[(long)puVar41 * 0xd] != 1) {
LAB_00520c18:
                    /* try { // try from 00520c18 to 00520c1f has its CatchHandler @ 0052112c */
                    /* WARNING: Subroutine does not return */
            core::option::unwrap_failed(local_638);
          }
          (puVar36 + (long)puVar41 * 0xd)[1] = (ulong)puVar44;
          if (puVar52 <= puVar44) {
            local_648 = &PTR_s__root__cargo_registry_src_index__00acd9c0;
            puVar56 = puVar44;
            goto LAB_00520d90;
          }
          puVar45 = (undefined8 *)(lVar51 + (long)puVar44 * 0x48);
          *puVar45 = 0;
          puVar45[1] = puVar41;
        }
      }
      else if ((puVar35[4] & 1) == 0) {
        if (puVar53 <= puVar44) {
          local_648 = &PTR_s__root__cargo_registry_src_index__00acd9d8;
          puVar52 = puVar53;
          puVar56 = puVar44;
          goto LAB_00520d90;
        }
        if (puVar36[(long)puVar44 * 0xd] != 1) {
          local_638 = &PTR_s__root__cargo_registry_src_index__00acd9f0;
          goto LAB_00520c18;
        }
        (puVar36 + (long)puVar44 * 0xd)[2] = (ulong)puVar41;
        if (puVar52 <= puVar41) {
          local_648 = &PTR_s__root__cargo_registry_src_index__00acda08;
          puVar56 = puVar41;
          goto LAB_00520d90;
        }
        lVar48 = lVar51 + (long)puVar41 * 0x48;
        *(undefined8 *)(lVar48 + 0x10) = 0;
        *(ulong **)(lVar48 + 0x18) = puVar44;
      }
      else {
        if (puVar52 <= puVar41) {
          local_648 = &PTR_s__root__cargo_registry_src_index__00acda20;
          puVar56 = puVar41;
          goto LAB_00520d90;
        }
        lVar48 = lVar51 + (long)puVar41 * 0x48;
        *(undefined8 *)(lVar48 + 0x10) = 1;
        *(ulong **)(lVar48 + 0x18) = puVar44;
        if (puVar52 <= puVar44) {
          local_648 = &PTR_s__root__cargo_registry_src_index__00acda38;
          puVar56 = puVar44;
          goto LAB_00520d90;
        }
        puVar45 = (undefined8 *)(lVar51 + (long)puVar44 * 0x48);
        *puVar45 = 1;
        puVar45[1] = puVar41;
      }
      puVar41 = *(ulong **)(puVar35 + 2);
      local_290 = *(long **)puVar35;
      puVar52 = (ulong *)((long)puVar52 + -1);
      uStack_288 = SUB84(puVar41,0);
      uVar23 = uStack_288;
      uStack_284 = (undefined4)((ulong)puVar41 >> 0x20);
      uVar24 = uStack_284;
      puStack_268 = *(ulong **)(puVar35 + 10);
      uStack_270 = *(ulong **)(puVar35 + 8);
      lStack_258 = *(long *)(puVar35 + 0xe);
      local_260 = *(undefined8 *)(puVar35 + 0xc);
      local_250 = *(ulong **)(puVar35 + 0x10);
      puVar44 = *(ulong **)(puVar35 + 6);
      lVar48 = *(long *)(puVar35 + 4);
      uStack_278 = SUB84(puVar44,0);
      uStack_274 = (undefined4)((ulong)puVar44 >> 0x20);
      uStack_280 = (undefined4)lVar48;
      uStack_27c = (undefined4)((ulong)lVar48 >> 0x20);
      uVar61 = puVar33[-4];
      uVar31 = puVar33[-5];
      uVar63 = puVar33[-2];
      uVar62 = puVar33[-3];
      uVar65 = puVar33[-8];
      uVar64 = puVar33[-9];
      uVar67 = puVar33[-6];
      uVar66 = puVar33[-7];
      *(undefined8 *)(puVar35 + 0x10) = puVar33[-1];
      *(undefined8 *)(puVar35 + 10) = uVar61;
      *(undefined8 *)(puVar35 + 8) = uVar31;
      *(undefined8 *)(puVar35 + 0xe) = uVar63;
      *(undefined8 *)(puVar35 + 0xc) = uVar62;
      *(undefined8 *)(puVar35 + 2) = uVar65;
      *(undefined8 *)puVar35 = uVar64;
      *(undefined8 *)(puVar35 + 6) = uVar67;
      *(undefined8 *)(puVar35 + 4) = uVar66;
      uStack_288 = SUB84(puVar56,0);
      uVar13 = uStack_288;
      uStack_284 = (undefined4)((ulong)puVar56 >> 0x20);
      uVar14 = uStack_284;
      if ((local_290 != (long *)0x0) && (puVar52 == puVar41)) {
        local_290 = (long *)&DAT_00000001;
        uVar23 = uStack_288;
        uVar24 = uStack_284;
      }
      uStack_284 = uVar24;
      uStack_288 = uVar23;
      if ((lVar48 != 0) && (puVar52 == puVar44)) {
        uStack_280 = 1;
        uStack_27c = 0;
        uStack_278 = uVar13;
        uStack_274 = uVar14;
      }
      local_170 = puVar52;
      if (puVar52 != puVar56) {
        puVar41 = puVar56;
        if (puVar52 <= puVar56) {
LAB_00520dc4:
                    /* try { // try from 00520dc4 to 00520dcf has its CatchHandler @ 00521104 */
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check(puVar41,puVar52,local_650);
        }
        uVar55 = *(ulong *)(puVar35 + 4);
        puVar41 = *(ulong **)(puVar35 + 6);
        puVar44 = *(ulong **)(puVar35 + 2);
        if ((*puVar35 & 1) == 0) {
          if (puVar53 <= puVar44) {
            local_650 = &PTR_s__root__cargo_registry_src_index__00acda68;
            puVar52 = puVar53;
            puVar41 = puVar44;
            goto LAB_00520dc4;
          }
          if (puVar36[(long)puVar44 * 0xd] != 1) goto LAB_00520c30;
          (puVar36 + (long)puVar44 * 0xd)[1] = (ulong)puVar56;
        }
        else {
          if (puVar52 <= puVar44) {
            local_650 = &PTR_s__root__cargo_registry_src_index__00acda98;
            puVar41 = puVar44;
            goto LAB_00520dc4;
          }
          lVar48 = lVar51 + (long)puVar44 * 0x48;
          *(undefined8 *)(lVar48 + 0x10) = 1;
          *(ulong **)(lVar48 + 0x18) = puVar56;
        }
        if ((uVar55 & 1) == 0) {
          if (puVar53 <= puVar41) {
            local_650 = &PTR_s__root__cargo_registry_src_index__00acdab0;
            puVar52 = puVar53;
            goto LAB_00520dc4;
          }
          if (puVar36[(long)puVar41 * 0xd] != 1) {
            local_640 = &PTR_s__root__cargo_registry_src_index__00acdac8;
LAB_00520c30:
                    /* try { // try from 00520c30 to 00520c37 has its CatchHandler @ 00521104 */
                    /* WARNING: Subroutine does not return */
            core::option::unwrap_failed(local_640);
          }
          (puVar36 + (long)puVar41 * 0xd)[2] = (ulong)puVar56;
        }
        else {
          if (puVar52 <= puVar41) {
            local_650 = &PTR_s__root__cargo_registry_src_index__00acdae0;
            goto LAB_00520dc4;
          }
          puVar45 = (undefined8 *)(lVar51 + (long)puVar41 * 0x48);
          *puVar45 = 1;
          puVar45[1] = puVar56;
        }
      }
      puVar56 = (ulong *)CONCAT44(uStack_274,uStack_278);
      local_3f0 = CONCAT44(uStack_27c,uStack_280);
      plStack_3f8 = (long *)CONCAT44(uStack_284,uStack_288);
      local_400 = local_290;
      puStack_3e8 = puVar56;
      local_3e0 = uStack_270;
      puStack_3d8 = puStack_268;
      local_3d0 = local_260;
      lStack_3c8 = lStack_258;
      local_3c0 = local_250;
      if (local_3f0 != 1) goto LAB_005201bc;
                    /* try { // try from 0051fe0c to 0051fe17 has its CatchHandler @ 00520f3c */
      (*(code *)uStack_270[4])(&lStack_3c8,puStack_268,local_260);
      puVar33 = puVar33 + -9;
      if (puVar52 <= puVar56) goto LAB_00520d90;
    } while( true );
  }
LAB_005201e4:
  uStack_c8 = puVar32[4];
  local_d0 = (long *)puVar32[3];
  uStack_b8 = puVar32[6];
  uStack_c0 = puVar32[5];
  cVar9 = (char)puVar32[7];
  local_d8._0_3_ = (undefined3)*(undefined4 *)((long)puVar32 + 0x39);
  local_d8._3_1_ = (undefined1)*(uint *)((long)puVar32 + 0x3c);
  uStack_d4 = (undefined3)(*(uint *)((long)puVar32 + 0x3c) >> 8);
  puVar32[7] = local_90;
  puVar32[4] = uStack_a8;
  puVar32[3] = (ulong)local_b0;
  puVar32[6] = uStack_98;
  puVar32[5] = uStack_a0;
  if (plVar38 != (long *)0x0) {
                    /* try { // try from 00520224 to 00520283 has its CatchHandler @ 00520f24 */
    (*(code *)plVar38[4])(&puStack_408,plVar12,__n);
  }
  if (cVar9 == -1) {
LAB_00520ca0:
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              ("size overflows MAX_SIZEacceptaccept-charsetaccept-encodingaccept-languageaccept-ranges"
               ,0x17,auStack_81,&DAT_00acdaf8,&PTR_s__root__cargo_registry_src_index__00acdb18);
  }
  uStack_448 = uStack_c8;
  local_450 = local_d0;
  uStack_438 = uStack_b8;
  local_440 = uStack_c0;
  local_42f = local_d8;
  uStack_42b = uStack_d4;
  local_430 = cVar9;
  if (cVar9 != '\x02') {
    (*(code *)local_d0[4])(&uStack_438,uStack_c8,uStack_c0);
  }
LAB_0051fea4:
  if (local_4b0 != 0) {
    free(pbStack_4a8);
  }
  if (uVar54 != 0) {
    free(local_4c0);
  }
  puVar53 = local_518;
  puVar36 = local_508;
  if (uVar58 == 0) goto LAB_00520454;
  goto joined_r0x0051f88c;
LAB_005201bc:
                    /* try { // try from 005201cc to 005201d7 has its CatchHandler @ 00520df8 */
  (*(code *)uStack_270[4])(&lStack_3c8,puStack_268,local_260);
  goto LAB_005201e4;
}


// ===== 00521260  FUN_00521260 =====

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00521260(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *******pppppppuVar1;
  code *pcVar2;
  byte bVar3;
  undefined8 *******pppppppuVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 ******ppppppuVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  byte *pbVar13;
  long lVar14;
  undefined8 *******pppppppuVar15;
  code *pcVar16;
  undefined8 *******pppppppuVar17;
  undefined **local_1f8;
  undefined8 *******local_1c0;
  undefined8 *******local_1b8;
  undefined8 *******pppppppuStack_1b0;
  undefined8 *******local_1a8;
  long local_1a0;
  undefined8 *******pppppppuStack_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined8 *******local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long local_160;
  void *pvStack_158;
  undefined8 local_150;
  ushort local_148;
  undefined8 *******local_140;
  undefined8 *******pppppppuStack_138;
  undefined8 *******local_130;
  undefined8 *******pppppppuStack_128;
  long local_120;
  undefined8 *******pppppppuStack_118;
  undefined8 uStack_110;
  long local_108;
  undefined8 *******local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long local_e0;
  undefined1 *local_d8;
  long local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 *******local_b0;
  code *pcStack_a8;
  undefined8 *******local_a0;
  code *pcStack_98;
  undefined8 *******local_90;
  code *pcStack_88;
  undefined8 *******local_80;
  undefined8 *******local_78;
  code *local_70;
  
  <libdiscore_common::core::http::[5]::libdiscore_common::core::http::PollingHttpClient>::
  get_request_status(&local_1c0,*param_1 + 0x10);
  if (&DAT_fffffffffffffffe <= local_1c0) {
                    /* try { // try from 005212a0 to 005212a3 has its CatchHandler @ 005218c4 */
    uVar5 = <jsi::value::[0]::jsi::value::Value>::null();
    goto LAB_0052178c;
  }
  puVar9 = (undefined1 *)((long)local_1c0 + -3);
  if (local_1c0 < (undefined8 *******)0x3) {
    puVar9 = (undefined1 *)0x1;
  }
  if (puVar9 == (undefined1 *)0x0) {
                    /* try { // try from 005214c4 to 005214cb has its CatchHandler @ 005218c4 */
    pppppppuVar15 = (undefined8 *******)<jsi::object::[1]::jsi::object::Object>::new(param_3);
                    /* try { // try from 005214d4 to 0052152f has its CatchHandler @ 005218b4 */
    local_140 = pppppppuVar15;
    FUN_0052baa8(&local_140,param_3,"status",6,"progressing",0xb);
    FUN_0052e870((double)local_1b8,&local_140,param_3,"uploaded_bytes",0xe);
    FUN_0052e870((double)pppppppuStack_1b0,&local_140,param_3,"total_bytes",0xb);
  }
  else {
    if (puVar9 == (undefined1 *)0x1) {
      local_140 = local_1c0;
      pppppppuStack_138 = local_1b8;
      local_130 = pppppppuStack_1b0;
      pppppppuStack_128 = local_1a8;
      lVar8 = 0;
      pppppppuVar15 = (undefined8 *******)0x0;
      pppppppuStack_118 = pppppppuStack_198;
      local_120 = local_1a0;
      local_108 = lStack_188;
      uStack_110 = uStack_190;
      uStack_f8 = uStack_178;
      local_100 = local_180;
      uStack_e8 = uStack_168;
      uStack_f0 = uStack_170;
      lVar14 = 2;
      if (pppppppuStack_198 != (undefined8 *******)0x0) {
        lVar14 = 0;
      }
      local_e0 = 0;
      local_d8 = &DAT_00000008;
      local_d0 = 0;
      local_1f8 = &PTR_s__root__cargo_registry_src_index__00acdd88;
      pppppppuVar17 = local_1c0;
LAB_00521364:
      if (lVar14 == 2) {
        pppppppuVar15 = (undefined8 *******)((long)pppppppuVar15 + 1);
        if (pppppppuStack_198 <= pppppppuVar15) goto LAB_00521598;
        plVar11 = (long *)(local_1a0 + (long)pppppppuVar15 * 0x68);
LAB_005213b8:
        if (*plVar11 == 1) {
          pppppppuVar17 = (undefined8 *******)plVar11[1];
          lVar14 = 1;
          pppppppuVar1 = (undefined8 *******)plVar11[4];
          pcVar2 = (code *)plVar11[5];
          pppppppuVar4 = pppppppuVar1;
          pcVar16 = pcVar2;
        }
        else {
          lVar14 = 2;
          pppppppuVar1 = (undefined8 *******)plVar11[4];
          pcVar2 = (code *)plVar11[5];
          pppppppuVar4 = pppppppuVar1;
          pcVar16 = pcVar2;
        }
      }
      else {
        if (pppppppuStack_198 <= pppppppuVar15) {
LAB_005217dc:
                    /* try { // try from 005217dc to 005217eb has its CatchHandler @ 005218ec */
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check(pppppppuVar15,pppppppuStack_198,local_1f8);
        }
        plVar11 = (long *)(local_1a0 + (long)pppppppuVar15 * 0x68);
        if (lVar14 == 0) goto LAB_005213b8;
        if (local_180 <= pppppppuVar17) {
          local_1f8 = &PTR_s__root__cargo_registry_src_index__00acdda0;
          pppppppuVar15 = pppppppuVar17;
          pppppppuStack_198 = local_180;
          goto LAB_005217dc;
        }
        lVar12 = lStack_188 + (long)pppppppuVar17 * 0x48;
        if (*(long *)(lVar12 + 0x10) == 1) {
          pppppppuVar17 = *(undefined8 ********)(lVar12 + 0x18);
          lVar14 = 1;
        }
        else {
          lVar14 = 2;
        }
        pppppppuVar1 = *(undefined8 ********)(lVar12 + 0x28);
        pcVar2 = *(code **)(lVar12 + 0x30);
        pppppppuVar4 = pppppppuVar1;
        pcVar16 = pcVar2;
      }
      for (; pcVar2 != (code *)0x0; pcVar2 = pcVar2 + -1) {
        if ((*(byte *)pppppppuVar1 != 9) && (0x5e < *(byte *)pppppppuVar1 - 0x20))
        goto LAB_00521364;
        pppppppuVar1 = (undefined8 *******)((long)pppppppuVar1 + 1);
      }
      pbVar13 = (byte *)(plVar11 + 9);
      if (plVar11[8] == 0) {
        bVar3 = *pbVar13;
        pbVar13 = &DAT_00acddb8 + (ulong)bVar3 * 8;
        plVar11 = (long *)(&DAT_002c0a20 + (ulong)bVar3 * 8);
      }
      else {
        plVar11 = plVar11 + 10;
      }
      local_90 = *(undefined8 ********)pbVar13;
      pcStack_88 = (code *)*plVar11;
      local_b0 = &local_90;
      pcStack_a8 = FUN_004b32e0;
      local_a0 = &local_78;
      pcStack_98 = FUN_004b32e0;
                    /* try { // try from 00521494 to 005214a7 has its CatchHandler @ 005218e8 */
      local_78 = pppppppuVar4;
      local_70 = pcVar16;
      alloc::fmt::format::format_inner(&local_c8,&DAT_002addea,&local_b0);
      lVar8 = local_d0;
      if (local_d0 == local_e0) {
                    /* try { // try from 005214b8 to 005214bf has its CatchHandler @ 005218d0 */
        <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<addr2line::function::FunctionAddress>>::
        grow_one(&local_e0);
      }
      puVar10 = (undefined8 *)(local_d8 + lVar8 * 0x18);
      lVar8 = lVar8 + 1;
      puVar10[1] = uStack_c0;
      *puVar10 = local_c8;
      puVar10[2] = local_b8;
      local_d0 = lVar8;
      goto LAB_00521364;
    }
                    /* try { // try from 00521534 to 0052153b has its CatchHandler @ 00521840 */
    pppppppuVar15 = (undefined8 *******)<jsi::object::[1]::jsi::object::Object>::new(param_3);
                    /* try { // try from 00521548 to 00521593 has its CatchHandler @ 00521864 */
    local_b0 = pppppppuVar15;
    FUN_0052baa8(&local_b0,param_3,"status",6,"error",5);
    local_140 = local_1b8;
    pppppppuStack_138 = pppppppuStack_1b0;
    local_130 = local_1a8;
    FUN_0052e5c4(&local_b0,param_3,"error",5,&local_140);
  }
  goto LAB_00521780;
LAB_00521598:
                    /* try { // try from 0052159c to 005215af has its CatchHandler @ 005218ec */
  FUN_00532d48(&local_b0,local_d8,lVar8,",",1);
  local_78 = &local_90;
  local_80 = local_a0;
  pcStack_88 = pcStack_a8;
  local_90 = local_b0;
  local_70 = FUN_00523258;
                    /* try { // try from 005215d0 to 005215eb has its CatchHandler @ 00521828 */
  alloc::fmt::format::format_inner(&local_b0,&DAT_002b75da,&local_78);
  if (local_90 != (undefined8 *******)0x0) {
    free(pcStack_88);
  }
  if (local_d0 != 0) {
    puVar10 = (undefined8 *)(local_d8 + 8);
    lVar8 = local_d0;
    do {
      if (puVar10[-1] != 0) {
        free((void *)*puVar10);
      }
      lVar8 = lVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (lVar8 != 0);
  }
  if (local_e0 != 0) {
    free(local_d8);
  }
  pcVar2 = pcStack_a8;
                    /* try { // try from 00521648 to 00521657 has its CatchHandler @ 00521820 */
  <jsi::value::[0]::jsi::value::Value>::parse_from_json_str(&local_90,param_3,pcStack_a8,local_a0);
                    /* try { // try from 00521658 to 0052165b has its CatchHandler @ 00521810 */
  pcVar6 = (code *)<jsi::value::[0]::jsi::value::Value>::null();
  pcVar16 = pcStack_88;
  if (((ulong)local_90 & 1) == 0) {
                    /* try { // try from 0052167c to 00521683 has its CatchHandler @ 005217f0 */
    <jsi_sys::ffi::base::ffi::JsiValue_as_cxx::unique_ptr::UniquePtrTarget>::__drop(pcVar6);
  }
  else {
                    /* try { // try from 00521668 to 00521673 has its CatchHandler @ 005217f4 */
    <anyhow::Error_as_core::ops::drop::Drop>::drop(&pcStack_88);
    pcVar16 = pcVar6;
  }
                    /* try { // try from 00521688 to 0052168f has its CatchHandler @ 00521808 */
  ppppppuVar7 = (undefined8 ******)<jsi::object::[1]::jsi::object::Object>::new(param_3);
                    /* try { // try from 005216a4 to 005216ff has its CatchHandler @ 00521888 */
  local_90 = (undefined8 *******)ppppppuVar7;
  FUN_0052e870((double)local_148,&local_90,param_3,"status",6);
  FUN_0052e494(&local_90,param_3,"headers",7,pcVar16);
  FUN_0052baa8(&local_90,param_3,&DAT_002bcfe0,4,pvStack_158,local_150);
                    /* try { // try from 00521700 to 00521707 has its CatchHandler @ 00521800 */
  pppppppuVar15 = (undefined8 *******)<jsi::object::[1]::jsi::object::Object>::new(param_3);
                    /* try { // try from 00521714 to 00521757 has its CatchHandler @ 00521848 */
  local_90 = pppppppuVar15;
  FUN_0052baa8(&local_90,param_3,"status",6,"success",7);
  FUN_0052bbec(&local_90,param_3,"response",8,ppppppuVar7);
  if (local_b0 != (undefined8 *******)0x0) {
    free(pcVar2);
  }
                    /* try { // try from 00521768 to 0052176f has its CatchHandler @ 005217f8 */
  FUN_0051e224(&local_140);
  if (local_160 != 0) {
    free(pvStack_158);
  }
LAB_00521780:
                    /* try { // try from 00521780 to 0052178b has its CatchHandler @ 005218c4 */
  uVar5 = <jsi::object::Object_as_jsi::value::IntoValue>::into_value(pppppppuVar15,param_3);
LAB_0052178c:
  if (local_1c0 == (undefined8 *******)&DAT_fffffffffffffffe) {
    FUN_0051e134(&local_1b8);
  }
  return uVar5;
}


// ===== 00521934  FUN_00521934 =====

undefined8 FUN_00521934(long *param_1)

{
  undefined8 uVar1;
  long local_48;
  undefined8 local_40;
  
  <libdiscore_common::core::http::[5]::libdiscore_common::core::http::PollingHttpClient>::
  tracked_request_count(&local_48,*param_1 + 0x10);
  if (local_48 != -1) {
                    /* try { // try from 00521960 to 00521963 has its CatchHandler @ 0052199c */
    uVar1 = <jsi::value::[0]::jsi::value::Value>::null();
    FUN_0051e134(&local_48);
    return uVar1;
  }
  uVar1 = NEON_ucvtf(local_40);
  uVar1 = <jsi::value::[0]::jsi::value::Value>::double(uVar1);
  return uVar1;
}


// ===== 005219b4  FUN_005219b4 =====

bool FUN_005219b4(long param_1,undefined2 param_2,long *param_3,long *param_4)

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
                    /* try { // try from 00521a3c to 00521a3f has its CatchHandler @ 00521aa0 */
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
                    /* try { // try from 005219e4 to 005219eb has its CatchHandler @ 00521ab4 */
    (**(code **)(*param_4 + 0x20))(param_4 + 3,param_4[1],param_4[2]);
    if (*param_3 != 0) {
      (**(code **)(*param_3 + 0x20))(param_3 + 3,param_3[1],param_3[2]);
    }
  }
  return (uVar3 & 0xffffffffffff8000) != 0;
}


// ===== 00521adc  FUN_00521adc =====

bool FUN_00521adc(long param_1,ulong param_2)

{
  short *__ptr;
  ulong uVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ulong uVar8;
  ushort *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  short *psVar13;
  ulong uVar14;
  ulong uVar15;
  long local_58;
  undefined8 local_50;
  long lStack_48;
  
  if (0x8000 < param_2) goto LAB_00521ca0;
  __ptr = *(short **)(param_1 + 0x48);
  uVar1 = *(ulong *)(param_1 + 0x50);
  uVar15 = 0;
  if (uVar1 == 0) {
LAB_00521b4c:
    if (param_2 != 0) goto LAB_00521b50;
LAB_00521b98:
    uVar8 = 0;
    puVar4 = (undefined4 *)0x2;
  }
  else {
    lVar5 = uVar1 << 2;
    puVar9 = (ushort *)(__ptr + 1);
    do {
      if ((puVar9[-1] != 0xffff) &&
         (((int)uVar15 - (uint)(*puVar9 & *(ushort *)(param_1 + 0x58)) &
          (uint)*(ushort *)(param_1 + 0x58)) == 0)) goto LAB_00521b4c;
      lVar5 = lVar5 + -4;
      puVar9 = puVar9 + 2;
      uVar15 = uVar15 + 1;
    } while (lVar5 != 0);
    uVar15 = 0;
    if (param_2 == 0) goto LAB_00521b98;
LAB_00521b50:
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar4 = (undefined4 *)malloc(param_2 << 2);
    if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(2,param_2 << 2);
    }
    uVar8 = param_2 - 1;
    puVar7 = puVar4;
    if (uVar8 != 0) {
      if (param_2 < 0x11) {
        uVar10 = 1;
      }
      else {
        uVar11 = uVar8 & 0xfffffffffffffff0;
        puVar7 = puVar4 + uVar11;
        uVar10 = uVar11 | 1;
        uVar14 = uVar8 & 0xfffffffffffffff0;
        puVar12 = (undefined8 *)(puVar4 + 8);
        do {
          uVar14 = uVar14 - 0x10;
          puVar12[-3] = 0xffff0000ffff;
          puVar12[-4] = 0xffff0000ffff;
          puVar12[-1] = 0xffff0000ffff;
          puVar12[-2] = 0xffff0000ffff;
          puVar12[1] = 0xffff0000ffff;
          *puVar12 = 0xffff0000ffff;
          puVar12[3] = 0xffff0000ffff;
          puVar12[2] = 0xffff0000ffff;
          puVar12 = puVar12 + 8;
        } while (uVar14 != 0);
        if (uVar8 == uVar11) goto LAB_00521be8;
      }
      lVar5 = param_2 - uVar10;
      puVar6 = puVar7;
      do {
        lVar5 = lVar5 + -1;
        puVar7 = puVar6 + 1;
        *puVar6 = 0xffff;
        puVar6 = puVar7;
      } while (lVar5 != 0);
    }
LAB_00521be8:
    *puVar7 = 0xffff;
    uVar8 = param_2;
  }
  uVar3 = (int)param_2 - 1;
  *(undefined4 **)(param_1 + 0x48) = puVar4;
  *(ulong *)(param_1 + 0x50) = uVar8;
  *(short *)(param_1 + 0x58) = (short)uVar3;
  if (uVar1 < uVar15) {
                    /* try { // try from 00521d64 to 00521d87 has its CatchHandler @ 00521da0 */
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (uVar15,uVar1,uVar1,&PTR_s__root__cargo_registry_src_index__00acdb30);
  }
  if (uVar15 != uVar1) {
    psVar13 = __ptr + uVar15 * 2;
    do {
      if (*psVar13 != -1) {
        uVar2 = psVar13[1];
        uVar14 = (ulong)(uVar2 & uVar3);
        while( true ) {
          do {
            uVar10 = uVar14;
            uVar14 = 0;
          } while (uVar8 <= uVar10);
          if (*(short *)(puVar4 + uVar10) == -1) break;
          uVar14 = uVar10 + 1;
        }
        *(short *)(puVar4 + uVar10) = *psVar13;
        *(ushort *)((long)(puVar4 + uVar10) + 2) = uVar2;
      }
      psVar13 = psVar13 + 2;
    } while (psVar13 != __ptr + uVar1 * 2);
  }
  psVar13 = __ptr;
  if (uVar15 != 0) {
    do {
      if (*psVar13 != -1) {
        uVar2 = psVar13[1];
        uVar14 = (ulong)(uVar2 & uVar3);
        while( true ) {
          do {
            uVar10 = uVar14;
            uVar14 = 0;
          } while (uVar8 <= uVar10);
          if (*(short *)(puVar4 + uVar10) == -1) break;
          uVar14 = uVar10 + 1;
        }
        *(short *)(puVar4 + uVar10) = *psVar13;
        *(ushort *)((long)(puVar4 + uVar10) + 2) = uVar2;
      }
      psVar13 = psVar13 + 2;
    } while (psVar13 != __ptr + uVar15 * 2);
  }
  uVar15 = *(ulong *)(param_1 + 0x28);
  lVar5 = *(long *)(param_1 + 0x18);
  uVar8 = uVar8 - (uVar15 + (uVar8 >> 2));
  if (lVar5 - uVar15 < uVar8) {
    if (CARRY8(uVar8,uVar15)) {
      local_50 = 0;
      lStack_48 = lVar5;
LAB_00521d84:
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(local_50,lStack_48);
    }
    FUN_00530d7c(&local_58,lVar5,*(undefined8 *)(param_1 + 0x20),uVar8 + uVar15,8,0x68);
    if (local_58 == 1) goto LAB_00521d84;
    *(ulong *)(param_1 + 0x18) = uVar8 + uVar15;
    *(undefined8 *)(param_1 + 0x20) = local_50;
  }
  if (uVar1 != 0) {
    free(__ptr);
  }
LAB_00521ca0:
  return 0x8000 < param_2;
}


// ===== 00521db8  FUN_00521db8  [FAILED] =====
/* decompilation failed: 
Recoverable Error: Unable to find unique hash for varnode */

// ===== 005222e0  FUN_005222e0 =====

void FUN_005222e0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,"SendError",9);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish_non_exhaustive(auStack_20);
  return;
}


// ===== 00522318  FUN_00522318 =====

void FUN_00522318(long *param_1)

{
  if (*(long *)(*param_1 + 0x58) != 0) {
    return;
  }
  return;
}


// ===== 00522330  FUN_00522330 =====

void FUN_00522330(undefined8 *param_1,undefined8 param_2)

{
  char *local_18;
  
  local_18 = (char *)*param_1 + 1;
  if (*(char *)*param_1 == '\x01') {
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002bd0bc,4,&local_18,&DAT_00acdb88);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd198,4);
  return;
}


// ===== 0052238c  FUN_0052238c =====

void FUN_0052238c(undefined8 *param_1)

{
  <core::io::error::Error_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 00522394  FUN_00522394 =====

void FUN_00522394(long param_1,undefined8 param_2)

{
  long local_18;
  
  local_18 = param_1 + 0x18;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field2_finish
            (param_2,"FromUtf8Error",0xd,"bytesUndefinedNullBoolNumberBigIntStringSymbolObjectValue"
             ,5,param_1,&PTR_FUN_00acdb48,"error",5,&local_18,&DAT_00acdb68);
  return;
}


// ===== 00522404  FUN_00522404 =====

void FUN_00522404(ulong *param_1,uint *param_2,ulong param_3)

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
    if (uVar4 != 0) goto LAB_0052253c;
LAB_00522460:
    if (param_3 < 4) goto LAB_00522594;
LAB_00522468:
    uVar4 = (ulong)*(uint *)((long)param_2 + uVar3);
    uVar7 = 4;
    if (param_3 < 6) goto LAB_005225c0;
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
      if (1 < uVar7) goto LAB_00522494;
    }
    else {
      uVar6 = (ulong)*param_2;
      uVar9 = 4;
      if (5 < uVar7) {
LAB_00522494:
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
    if (uVar4 <= uVar3) goto LAB_00522460;
LAB_0052253c:
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
    if (3 < param_3) goto LAB_00522468;
LAB_00522594:
    uVar7 = 0;
    uVar4 = 0;
    if (param_3 < 2) goto LAB_005225c0;
  }
  lVar10 = uVar7 << 3;
  lVar11 = uVar7 + uVar3;
  uVar7 = uVar7 | 2;
  uVar4 = (ulong)*(ushort *)((long)param_2 + lVar11) << lVar10 | uVar4;
LAB_005225c0:
  if (uVar7 < param_3) {
    param_1[7] = (ulong)*(byte *)((long)param_2 + uVar7 + uVar3) << (uVar7 << 3) | uVar4;
    param_1[8] = param_3;
    return;
  }
  param_1[7] = uVar4;
  param_1[8] = param_3;
  return;
}


// ===== 005225ec  <libdiscore_common::stores::guild_emoji::RawGuildEmojiStore_as_libdiscore_common::stores::dispatcher::Store<libdiscore_common::actions::Action>>::handle_reset =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<libdiscore_common::stores::guild_emoji::RawGuildEmojiStore_as_libdiscore_common::stores::dispatcher::Store<libdiscore_common::actions::Action>>
::handle_reset(void)

{
  (*(code *)PTR_handle_reset_00b02138)();
  return;
}


// ===== 005225f0  <libdiscore_common::stores::guild_emoji::RawGuildEmojiStore_as_libdiscore_common::stores::dispatcher::Store<libdiscore_common::actions::Action>>::commit_changes =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<libdiscore_common::stores::guild_emoji::RawGuildEmojiStore_as_libdiscore_common::stores::dispatcher::Store<libdiscore_common::actions::Action>>
::commit_changes(void)

{
  (*(code *)PTR_commit_changes_00b02140)();
  return;
}


// ===== 005225f4  FUN_005225f4 =====

uint FUN_005225f4(undefined8 param_1,uint param_2)

{
  return 0xc1708U >> (ulong)(param_2 & 0x1f) & 1;
}


// ===== 00522608  <libdiscore_common::stores::guild_emoji::RawGuildEmojiStore_as_libdiscore_common::stores::dispatcher::Store<libdiscore_common::actions::Action>>::database_configurations =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<libdiscore_common::stores::guild_emoji::RawGuildEmojiStore_as_libdiscore_common::stores::dispatcher::Store<libdiscore_common::actions::Action>>
::database_configurations(void)

{
  (*(code *)PTR_database_configurations_00b02148)();
  return;
}


// ===== 0052260c  FUN_0052260c =====

void FUN_0052260c(long *param_1,undefined8 param_2,ulong *param_3)

{
  long lVar1;
  long local_38;
  long lStack_30;
  long local_28;
  
  lVar1 = *param_3 - 3;
  if (*param_3 < 3) {
    lVar1 = 8;
  }
  if (lVar1 < 10) {
    if (lVar1 == 3) {
      <libdiscore_common::stores::guild_emoji::RawGuildEmojiStore_as_libdiscore_common::stores::dispatcher::Store<libdiscore_common::actions::Action>>
      ::handle_action(&local_38,param_2,1,param_3 + 1);
    }
    else if (lVar1 == 8) {
      <libdiscore_common::stores::guild_emoji::RawGuildEmojiStore_as_libdiscore_common::stores::dispatcher::Store<libdiscore_common::actions::Action>>
      ::handle_action(&local_38,param_2,2,param_3);
    }
    else {
      if (lVar1 != 9) goto LAB_00522700;
      <libdiscore_common::stores::guild_emoji::RawGuildEmojiStore_as_libdiscore_common::stores::dispatcher::Store<libdiscore_common::actions::Action>>
      ::handle_action(&local_38,param_2,3,param_3 + 1);
    }
  }
  else if (lVar1 < 0x12) {
    if (lVar1 == 10) {
      <libdiscore_common::stores::guild_emoji::RawGuildEmojiStore_as_libdiscore_common::stores::dispatcher::Store<libdiscore_common::actions::Action>>
      ::handle_action(&local_38,param_2,4,param_3 + 1);
    }
    else {
      if (lVar1 != 0xc) {
LAB_00522700:
        *(undefined1 *)(param_1 + 1) = 0;
        *param_1 = -1;
        return;
      }
      <libdiscore_common::stores::guild_emoji::RawGuildEmojiStore_as_libdiscore_common::stores::dispatcher::Store<libdiscore_common::actions::Action>>
      ::handle_action(&local_38,param_2,0,param_3 + 1);
    }
  }
  else if (lVar1 == 0x12) {
    <libdiscore_common::stores::guild_emoji::RawGuildEmojiStore_as_libdiscore_common::stores::dispatcher::Store<libdiscore_common::actions::Action>>
    ::handle_action(&local_38,param_2,5,param_3 + 1);
  }
  else {
    if (lVar1 != 0x13) goto LAB_00522700;
    <libdiscore_common::stores::guild_emoji::RawGuildEmojiStore_as_libdiscore_common::stores::dispatcher::Store<libdiscore_common::actions::Action>>
    ::handle_action(&local_38,param_2,6,param_3 + 1);
  }
  if (local_38 != -1) {
    param_1[1] = lStack_30;
    *param_1 = local_38;
    param_1[2] = local_28;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = -1;
  return;
}


// ===== 005227b0  FUN_005227b0 =====

void FUN_005227b0(undefined8 param_1,undefined8 param_2)

{
  FUN_0050c7b0(param_2,0xc);
  FUN_0050c7b0(param_2,3);
  FUN_0050c7b0(param_2,8);
  FUN_0050c7b0(param_2,9);
  FUN_0050c7b0(param_2,10);
  FUN_0050c7b0(param_2,0x12);
  FUN_0050c7b0(param_2,0x13);
  return;
}


// ===== 0052281c  FUN_0052281c =====

undefined1  [16] FUN_0052281c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x12;
  auVar1._0_8_ = "RawGuildEmojiStore";
  return auVar1;
}


// ===== 0052282c  FUN_0052282c =====

void FUN_0052282c(byte *param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,&DAT_002c0cf0 + *(int *)(&DAT_002c0cf0 + (ulong)*param_1 * 4),
             *(undefined8 *)(&DAT_002c0ca8 + (ulong)*param_1 * 8));
  return;
}


// ===== 00522854  FUN_00522854 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00522854(ulong *param_1,undefined8 *param_2)

{
  undefined8 ******ppppppuVar1;
  undefined8 uVar2;
  undefined8 ******ppppppuVar3;
  undefined8 ******ppppppuVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *******pppppppuVar11;
  ulong uVar12;
  undefined8 *******pppppppuVar13;
  undefined8 ******ppppppuVar14;
  undefined8 ******extraout_x8;
  undefined8 *******extraout_x9;
  undefined8 *******extraout_x9_00;
  undefined8 *******extraout_x9_01;
  undefined8 ******extraout_x10;
  undefined8 ******ppppppuVar15;
  undefined8 ******extraout_x10_00;
  undefined8 *******unaff_x19;
  undefined8 *******unaff_x22;
  ulong unaff_x23;
  undefined8 ******unaff_x24;
  undefined8 *******unaff_x26;
  double dVar16;
  undefined8 ******unaff_d8;
  double unaff_d9;
  undefined8 ******local_1a0;
  undefined8 *****local_198;
  undefined8 *****local_190;
  ulong local_188;
  undefined8 ******appppppuStack_180 [3];
  ulong local_168;
  undefined8 ******ppppppuStack_160;
  undefined8 ******local_158;
  double dStack_150;
  undefined8 *****local_148;
  undefined8 ******ppppppuStack_140;
  undefined8 *****local_138;
  undefined8 *****local_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  undefined8 *****local_108;
  undefined8 ******local_100;
  undefined8 *****local_f8;
  undefined8 ******local_f0;
  undefined8 *****local_e8;
  ulong uStack_e0;
  ulong local_d8;
  ulong uStack_d0;
  undefined8 ******local_c8;
  undefined8 ******local_c0;
  undefined8 ******local_b8;
  undefined8 ******local_b0;
  undefined8 ******local_a8;
  undefined8 ******local_a0;
  undefined8 *****local_98;
  undefined8 ******ppppppuStack_90;
  undefined8 *local_88;
  undefined8 ***pppuStack_79;
  
  <jsi::object::Object_as_jsi::value::FromValueOwned>::from_value(&local_188);
  if (local_188 == 1) {
    *param_1 = 0xfffffffffffffffe;
    param_1[1] = (ulong)appppppuStack_180[0];
    return;
  }
  local_190 = appppppuStack_180[0];
                    /* try { // try from 005228a4 to 005228db has its CatchHandler @ 00523218 */
  FUN_0052e9ac(&local_a8,&local_190,param_2,"method",6);
  if (local_a8 == (undefined8 ******)&DAT_00000001) {
    <jsi::string::String_as_jsi::value::FromValueOwned>::from_value(&local_f8,param_2,local_a0);
    unaff_x19 = (undefined8 *******)local_f0;
    if (local_f8 == (undefined8 *****)&DAT_00000001) {
                    /* try { // try from 005228ec to 00522903 has its CatchHandler @ 005231d8 */
      uVar7 = jsi_sys::ffi::base::ffi::String_fromUtf8(*param_2,&DAT_002bf7e8,0x26);
      uVar8 = <jsi::string::String_as_jsi::value::IntoValue>::into_value(uVar7,param_2);
                    /* try { // try from 00522904 to 0052290f has its CatchHandler @ 00523218 */
      <jsi_sys::ffi::base::ffi::JsiValue_as_cxx::unique_ptr::UniquePtrTarget>::__drop(local_f0);
      *param_1 = 0xfffffffffffffffe;
      param_1[1] = uVar8;
      goto LAB_00522e74;
    }
    local_c0 = local_f0;
                    /* try { // try from 0052292c to 0052293b has its CatchHandler @ 005231c4 */
    <jsi::string::[0]::jsi::string::String>::to_string(&local_188,&local_c0,param_2);
                    /* try { // try from 0052293c to 00522943 has its CatchHandler @ 00523218 */
    <jsi_sys::ffi::base::ffi::JsiString_as_cxx::unique_ptr::UniquePtrTarget>::__drop(unaff_x19);
    local_1a0 = appppppuStack_180[1];
    local_198 = appppppuStack_180[0];
    uVar8 = local_188;
  }
  else {
    uVar8 = 0xffffffffffffffff;
  }
                    /* try { // try from 00522950 to 0052296b has its CatchHandler @ 00523210 */
  FUN_0052e9ac(&local_108,&local_190,param_2,&DAT_002bcfe0,4);
  ppppppuVar3 = local_100;
  if (local_108 == (undefined8 *****)&DAT_00000001) {
                    /* try { // try from 0052297c to 0052298b has its CatchHandler @ 00523220 */
    lVar9 = <jsi_sys::ffi::base::ffi::JsiValue_as_cxx::unique_ptr::UniquePtrTarget>::__get
                      (local_100);
    if (lVar9 == 0) {
LAB_0052304c:
      local_f8 = (undefined8 *****)&pppuStack_79;
      local_f0 = (undefined8 ******)FUN_0051bff0;
                    /* try { // try from 00523060 to 00523073 has its CatchHandler @ 00523220 */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                (&DAT_002b2091,&local_f8,&PTR_s__root__cargo_registry_src_index__00accb50);
    }
    uVar10 = <jsi_sys::ffi::base::ffi::[4]::jsi_sys::ffi::base::ffi::JsiValue>::is_string();
    if ((uVar10 & 1) == 0) {
                    /* try { // try from 00522aac to 00522abb has its CatchHandler @ 00523220 */
      lVar9 = <jsi_sys::ffi::base::ffi::JsiValue_as_cxx::unique_ptr::UniquePtrTarget>::__get
                        (ppppppuVar3);
      if (lVar9 == 0) goto LAB_0052304c;
      uVar10 = <jsi_sys::ffi::base::ffi::[4]::jsi_sys::ffi::base::ffi::JsiValue>::is_object();
      if ((uVar10 & 1) == 0) {
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        pppppppuVar11 = (undefined8 *******)malloc(0x2c);
        uVar7 = _UNK_002bf7b9;
        ppppppuVar15 = _DAT_002bf7a5;
        ppppppuVar14 = _DAT_002bf795;
        if (pppppppuVar11 == (undefined8 *******)0x0) {
                    /* try { // try from 0052309c to 005230a7 has its CatchHandler @ 00523220 */
                    /* WARNING: Subroutine does not return */
          alloc::raw_vec::handle_error(1,0x2c);
        }
        ppppppuVar1 = (undefined8 ******)CONCAT44(_DAT_002bf7b1,_UNK_002bf7ad);
        uVar2 = CONCAT44(_UNK_002bf7b5,_DAT_002bf7b1);
        pppppppuVar11[1] = _UNK_002bf79d;
        *pppppppuVar11 = ppppppuVar14;
        pppppppuVar11[3] = ppppppuVar1;
        pppppppuVar11[2] = ppppppuVar15;
        *(undefined8 *)((long)pppppppuVar11 + 0x24) = uVar7;
        *(undefined8 *)((long)pppppppuVar11 + 0x1c) = uVar2;
        <jsi_sys::ffi::base::ffi::JsiValue_as_cxx::unique_ptr::UniquePtrTarget>::__drop(ppppppuVar3)
        ;
        bVar5 = false;
        local_e8 = (undefined8 ******)0x2c;
        goto LAB_00522e30;
      }
                    /* try { // try from 00522ac0 to 00522ae3 has its CatchHandler @ 00523210 */
      <jsi::object::Object_as_jsi::value::FromValueOwned>::from_value(&local_f8,param_2,ppppppuVar3)
      ;
      ppppppuVar1 = local_f0;
      if (local_f8 == (undefined8 *****)&DAT_00000001) {
        pppppppuVar13 = (undefined8 *******)FUN_0051f3e0(local_f0);
      }
      else {
        local_c8 = local_f0;
                    /* try { // try from 00522bf4 to 00522c3f has its CatchHandler @ 00523188 */
        FUN_0052e9ac(&local_c0,&local_c8,param_2,&DAT_002bd17c,4);
        if (local_c0 == (undefined8 ******)&DAT_00000001) {
          <jsi::string::String_as_jsi::value::FromValueOwned>::from_value
                    (&local_a8,param_2,local_b8);
          ppppppuVar14 = local_a0;
          if (local_a8 == (undefined8 ******)&DAT_00000001) {
            pppppppuVar13 = (undefined8 *******)FUN_0051f434(local_a0);
          }
          else {
            local_b0 = local_a0;
                    /* try { // try from 00522c6c to 00522c7b has its CatchHandler @ 00523124 */
            <jsi::string::[0]::jsi::string::String>::to_string(&local_f8,&local_b0,param_2);
                    /* try { // try from 00522c7c to 00522c83 has its CatchHandler @ 00523188 */
            <jsi_sys::ffi::base::ffi::JsiString_as_cxx::unique_ptr::UniquePtrTarget>::__drop
                      (ppppppuVar14);
            ppppppuVar15 = (undefined8 ******)local_e8;
            pppppppuVar11 = (undefined8 *******)local_f0;
            ppppppuVar14 = (undefined8 ******)local_f8;
                    /* try { // try from 00522c8c to 00522ccb has its CatchHandler @ 00523174 */
            FUN_00521db8(&local_f8);
            pppppppuVar13 = (undefined8 *******)local_f0;
            if ((undefined8 ******)local_f8 != (undefined8 ******)0xffffffffffffffff) {
              if ((undefined8 ******)local_f8 != (undefined8 ******)0x0) {
                free(local_f0);
              }
              FUN_0052e9ac(&local_f8,&local_c8,param_2,"byteRangeStart",0xe);
              unaff_x22 = (undefined8 *******)local_f0;
              if (local_f8 == (undefined8 *****)&DAT_00000001) {
                local_a8 = local_f0;
                    /* try { // try from 00522ce0 to 00522cfb has its CatchHandler @ 00523110 */
                FUN_0050f84c(&local_a8);
                iVar6 = <jsi_sys::ffi::base::ffi::[4]::jsi_sys::ffi::base::ffi::JsiValue>::is_number
                                  ();
                unaff_x24 = unaff_d8;
                if (iVar6 != 0) {
                  FUN_0050f84c(&local_a8);
                  unaff_x24 = (undefined8 ******)
                              <jsi_sys::ffi::base::ffi::[4]::jsi_sys::ffi::base::ffi::JsiValue>::
                              get_number();
                }
                    /* try { // try from 00522d14 to 00522d3b has its CatchHandler @ 00523174 */
                uVar10 = (ulong)(iVar6 != 0);
                <jsi_sys::ffi::base::ffi::JsiValue_as_cxx::unique_ptr::UniquePtrTarget>::__drop
                          (unaff_x22);
                unaff_d8 = unaff_x24;
              }
              else {
                uVar10 = 0;
                unaff_x22 = (undefined8 *******)ppppppuVar3;
              }
              FUN_0052e9ac(&local_f8,&local_c8,param_2,"byteRangeEnd",0xc);
              ppppppuVar3 = local_f0;
              if (local_f8 == (undefined8 *****)&DAT_00000001) {
                local_a8 = local_f0;
                    /* try { // try from 00522d50 to 00522d6b has its CatchHandler @ 005230fc */
                FUN_0050f84c(&local_a8);
                iVar6 = <jsi_sys::ffi::base::ffi::[4]::jsi_sys::ffi::base::ffi::JsiValue>::is_number
                                  ();
                if (iVar6 != 0) {
                  FUN_0050f84c(&local_a8);
                  unaff_d8 = (undefined8 ******)
                             <jsi_sys::ffi::base::ffi::[4]::jsi_sys::ffi::base::ffi::JsiValue>::
                             get_number();
                }
                    /* try { // try from 00522d84 to 00522dd7 has its CatchHandler @ 00523174 */
                unaff_x26 = (undefined8 *******)(ulong)(iVar6 != 0);
                <jsi_sys::ffi::base::ffi::JsiValue_as_cxx::unique_ptr::UniquePtrTarget>::__drop
                          (ppppppuVar3);
                unaff_x22 = (undefined8 *******)ppppppuVar3;
              }
              else {
                unaff_x26 = (undefined8 *******)0x0;
              }
              FUN_0052e9ac(&local_a8,&local_c8,param_2,"chunkConfig",0xb);
              if (local_a8 == (undefined8 ******)&DAT_00000001) {
                <jsi::object::Object_as_jsi::value::FromValueOwned>::from_value
                          (&local_f8,param_2,local_a0);
                ppppppuVar3 = local_f0;
                if (local_f8 == (undefined8 *****)&DAT_00000001) {
                  pppppppuVar13 = (undefined8 *******)FUN_0051f488(local_f0);
                  goto LAB_00522ddc;
                }
                local_b0 = local_f0;
                    /* try { // try from 00522eb8 to 00522ed3 has its CatchHandler @ 005230e8 */
                FUN_0052e9ac(&local_f8,&local_b0,param_2,"minChunkSize",0xc);
                ppppppuVar4 = local_f0;
                if (local_f8 == (undefined8 *****)&DAT_00000001) {
                  local_c0 = local_f0;
                    /* try { // try from 00522ee8 to 00522f07 has its CatchHandler @ 005230d4 */
                  FUN_0050f84c(&local_c0);
                  iVar6 = <jsi_sys::ffi::base::ffi::[4]::jsi_sys::ffi::base::ffi::JsiValue>::
                          is_number();
                  if (iVar6 != 0) {
                    FUN_0050f84c(&local_c0);
                    unaff_d9 = (double)<jsi_sys::ffi::base::ffi::[4]::jsi_sys::ffi::base::ffi::JsiValue>
                                       ::get_number();
                  }
                    /* try { // try from 00522f0c to 00522f47 has its CatchHandler @ 005230e8 */
                  <jsi_sys::ffi::base::ffi::JsiValue_as_cxx::unique_ptr::UniquePtrTarget>::__drop
                            (ppppppuVar4);
                  unaff_x22 = (undefined8 *******)(long)unaff_d9;
                  dVar16 = unaff_d9;
                  if (iVar6 == 0) {
                    unaff_x22 = (undefined8 *******)0x1000;
                  }
                }
                else {
                  unaff_x22 = (undefined8 *******)0x1000;
                  dVar16 = unaff_d9;
                }
                FUN_0052e9ac(&local_f8,&local_b0,param_2,"maxChunkSize",0xc);
                ppppppuVar4 = local_f0;
                if (local_f8 == (undefined8 *****)&DAT_00000001) {
                  local_c0 = local_f0;
                    /* try { // try from 00522f5c to 00522f7f has its CatchHandler @ 005230c0 */
                  FUN_0050f84c(&local_c0);
                  iVar6 = <jsi_sys::ffi::base::ffi::[4]::jsi_sys::ffi::base::ffi::JsiValue>::
                          is_number();
                  if (iVar6 != 0) {
                    FUN_0050f84c(&local_c0);
                    dVar16 = (double)<jsi_sys::ffi::base::ffi::[4]::jsi_sys::ffi::base::ffi::JsiValue>
                                     ::get_number();
                  }
                    /* try { // try from 00522f84 to 00522fc3 has its CatchHandler @ 005230e8 */
                  <jsi_sys::ffi::base::ffi::JsiValue_as_cxx::unique_ptr::UniquePtrTarget>::__drop
                            (ppppppuVar4);
                  unaff_x19 = (undefined8 *******)(long)dVar16;
                  if (iVar6 == 0) {
                    unaff_x19 = (undefined8 *******)0x800000;
                  }
                }
                else {
                  unaff_x19 = (undefined8 *******)0x800000;
                }
                FUN_0052e9ac(&local_f8,&local_b0,param_2,"multiplier.",10);
                ppppppuVar4 = local_f0;
                unaff_d9 = DAT_002a1170;
                if (((ulong)local_f8 & 1) != 0) {
                  local_c0 = local_f0;
                    /* try { // try from 00522fd8 to 00522ffb has its CatchHandler @ 005230ac */
                  FUN_0050f84c(&local_c0);
                  iVar6 = <jsi_sys::ffi::base::ffi::[4]::jsi_sys::ffi::base::ffi::JsiValue>::
                          is_number();
                  if (iVar6 != 0) {
                    FUN_0050f84c(&local_c0);
                    dVar16 = (double)<jsi_sys::ffi::base::ffi::[4]::jsi_sys::ffi::base::ffi::JsiValue>
                                     ::get_number();
                  }
                    /* try { // try from 00523000 to 00523007 has its CatchHandler @ 005230e8 */
                  <jsi_sys::ffi::base::ffi::JsiValue_as_cxx::unique_ptr::UniquePtrTarget>::__drop
                            (ppppppuVar4);
                  unaff_d9 = dVar16;
                  if (iVar6 == 0) {
                    unaff_d9 = DAT_002a1170;
                  }
                }
                    /* try { // try from 00523028 to 0052302f has its CatchHandler @ 00523174 */
                <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__drop
                          (ppppppuVar3);
                unaff_x23 = 1;
              }
              else {
                unaff_x23 = 0;
              }
                    /* try { // try from 0052303c to 0052303f has its CatchHandler @ 00523210 */
              <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__drop
                        (ppppppuVar1);
              goto LAB_005229f4;
            }
LAB_00522ddc:
            if (ppppppuVar14 != (undefined8 ******)0x0) {
              free(pppppppuVar11);
            }
          }
        }
        else {
                    /* try { // try from 00523078 to 00523087 has its CatchHandler @ 00523188 */
          pppppppuVar13 =
               (undefined8 *******)FUN_00514dcc("NativeFile missing required \'path\' field",0x28);
        }
                    /* try { // try from 00522de8 to 00522def has its CatchHandler @ 00523210 */
        <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__drop
                  (ppppppuVar1);
      }
      local_a8 = &local_c0;
      local_a0 = (undefined8 ******)PTR_fmt_00b00c88;
                    /* try { // try from 00522e04 to 00522e17 has its CatchHandler @ 00523138 */
      local_c0 = pppppppuVar13;
      alloc::fmt::format::format_inner(&local_f8,&DAT_002a3607,&local_a8);
                    /* try { // try from 00522e18 to 00522e1f has its CatchHandler @ 00523210 */
      <anyhow::Error_as_core::ops::drop::Drop>::drop(&local_c0);
      bVar5 = (undefined8 ******)local_f8 == (undefined8 ******)0x0;
      pppppppuVar11 = (undefined8 *******)local_f0;
    }
    else {
                    /* try { // try from 00522990 to 005229e3 has its CatchHandler @ 00523210 */
      <jsi::string::String_as_jsi::value::FromValueOwned>::from_value(&local_a8,param_2,ppppppuVar3)
      ;
      unaff_x22 = (undefined8 *******)local_a0;
      if (((ulong)local_a8 & 1) == 0) {
        local_c0 = local_a0;
                    /* try { // try from 00522b84 to 00522b93 has its CatchHandler @ 00523160 */
        <jsi::string::[0]::jsi::string::String>::to_string(&local_f8,&local_c0,param_2);
        unaff_d8 = (undefined8 ******)local_e8;
        unaff_x26 = (undefined8 *******)local_f0;
        unaff_x24 = (undefined8 ******)local_f8;
                    /* try { // try from 00522b9c to 00522bdf has its CatchHandler @ 00523210 */
        <jsi_sys::ffi::base::ffi::JsiString_as_cxx::unique_ptr::UniquePtrTarget>::__drop(unaff_x22);
        uVar10 = 2;
        ppppppuVar14 = extraout_x8;
        pppppppuVar11 = extraout_x9_01;
        ppppppuVar15 = extraout_x10_00;
        goto LAB_005229f4;
      }
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      pppppppuVar11 = (undefined8 *******)malloc(0x24);
      ppppppuVar1 = _UNK_002bf728;
      ppppppuVar15 = _DAT_002bf720;
      ppppppuVar14 = _UNK_002bf718;
      ppppppuVar3 = _DAT_002bf710;
      if (pppppppuVar11 == (undefined8 *******)0x0) {
                    /* try { // try from 0052308c to 00523097 has its CatchHandler @ 0052314c */
                    /* WARNING: Subroutine does not return */
        alloc::raw_vec::handle_error(1,0x24);
      }
      *(undefined4 *)(pppppppuVar11 + 4) = 0x676e6972;
      pppppppuVar11[1] = ppppppuVar14;
      *pppppppuVar11 = ppppppuVar3;
      pppppppuVar11[3] = ppppppuVar1;
      pppppppuVar11[2] = ppppppuVar15;
      <jsi_sys::ffi::base::ffi::JsiValue_as_cxx::unique_ptr::UniquePtrTarget>::__drop(unaff_x22);
      bVar5 = false;
      local_e8 = (undefined8 *****)&DAT_00000024;
    }
LAB_00522e30:
                    /* try { // try from 00522e34 to 00522e43 has its CatchHandler @ 005231ec */
    uVar7 = jsi_sys::ffi::base::ffi::String_fromUtf8(*param_2,pppppppuVar11,local_e8);
    uVar10 = <jsi::string::String_as_jsi::value::IntoValue>::into_value(uVar7,param_2);
    if (!bVar5) {
      free(pppppppuVar11);
    }
    *param_1 = 0xfffffffffffffffe;
    param_1[1] = uVar10;
LAB_00522e5c:
    if (uVar8 - 1 < 0xfffffffffffffffe) {
      free(local_198);
    }
  }
  else {
    uVar10 = 0xffffffffffffffff;
    ppppppuVar14 = (undefined8 ******)local_108;
    pppppppuVar11 = extraout_x9;
    ppppppuVar15 = extraout_x10;
LAB_005229f4:
                    /* try { // try from 00522a18 to 00522a4f has its CatchHandler @ 00523200 */
    local_188 = uVar10;
    appppppuStack_180[0] = unaff_x24;
    appppppuStack_180[1] = unaff_x26;
    appppppuStack_180[2] = unaff_d8;
    local_168 = unaff_x23;
    ppppppuStack_160 = unaff_x22;
    local_158 = unaff_x19;
    dStack_150 = unaff_d9;
    local_148 = ppppppuVar14;
    ppppppuStack_140 = pppppppuVar11;
    local_138 = ppppppuVar15;
    FUN_0052e9ac(&local_108,&local_190,param_2,"headers",7);
    if (local_108 == (undefined8 *****)&DAT_00000001) {
      <jsi::object::Object_as_jsi::value::FromValueOwned>::from_value(&local_c0,param_2,local_100);
      if (local_c0 == (undefined8 ******)&DAT_00000001) {
                    /* try { // try from 00522a60 to 00522a77 has its CatchHandler @ 005231b0 */
        uVar7 = jsi_sys::ffi::base::ffi::String_fromUtf8(*param_2,&DAT_002bf7c1,0x27);
        uVar12 = <jsi::string::String_as_jsi::value::IntoValue>::into_value(uVar7,param_2);
                    /* try { // try from 00522a78 to 00522a83 has its CatchHandler @ 00523200 */
        <jsi_sys::ffi::base::ffi::JsiValue_as_cxx::unique_ptr::UniquePtrTarget>::__drop(local_b8);
        *param_1 = 0xfffffffffffffffe;
        param_1[1] = uVar12;
        if (uVar10 != 0xffffffffffffffff) {
          if (uVar10 == 2) {
            lVar9 = 8;
            ppppppuVar14 = unaff_x24;
          }
          else {
            lVar9 = 0x40;
          }
          if (ppppppuVar14 != (undefined8 ******)0x0) {
            free(*(void **)((long)appppppuStack_180 + lVar9));
          }
        }
        goto LAB_00522e5c;
      }
      local_b0 = local_b8;
                    /* try { // try from 00522af0 to 00522b23 has its CatchHandler @ 0052319c */
      <jsi::object::[1]::jsi::object::Object>::entries(&local_f8,&local_b0,param_2);
      ppppppuStack_90 = local_f0 + (long)local_e8 * 2;
      local_a8 = local_f0;
      local_a0 = local_f0;
      local_98 = local_f8;
      local_88 = param_2;
      FUN_004b23ac(&local_f8,&local_a8);
                    /* try { // try from 00522b24 to 00522b2b has its CatchHandler @ 00523200 */
      <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__drop(local_b8);
      uStack_128 = uStack_e0;
      local_130 = local_e8;
      uStack_118 = uStack_d0;
      uStack_120 = local_d8;
    }
    else {
      local_f8 = (undefined8 ******)0x0;
      local_f0 = extraout_x9_00;
    }
    param_1[0xe] = (ulong)local_f8;
    param_1[0xf] = (ulong)local_f0;
    param_1[5] = (ulong)ppppppuStack_160;
    param_1[4] = local_168;
    param_1[7] = (ulong)dStack_150;
    param_1[6] = (ulong)local_158;
    param_1[10] = (ulong)local_138;
    param_1[0xb] = uVar8;
    param_1[1] = (ulong)appppppuStack_180[0];
    *param_1 = local_188;
    param_1[3] = (ulong)appppppuStack_180[2];
    param_1[2] = (ulong)appppppuStack_180[1];
    param_1[9] = (ulong)ppppppuStack_140;
    param_1[8] = (ulong)local_148;
    param_1[0xc] = (ulong)local_198;
    param_1[0xd] = (ulong)local_1a0;
    param_1[0x11] = uStack_128;
    param_1[0x10] = (ulong)local_130;
    param_1[0x13] = uStack_118;
    param_1[0x12] = uStack_120;
  }
LAB_00522e74:
  <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__drop(local_190);
  return;
}


// ===== 00523258  FUN_00523258 =====

void FUN_00523258(long param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt
            (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_2);
  return;
}


// ===== 0052326c  FUN_0052326c =====

undefined1  [16] FUN_0052326c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x28;
  auVar1._0_8_ = "description() is deprecated; use Display";
  return auVar1;
}


// ===== 0052327c  FUN_0052327c =====

void FUN_0052327c(void)

{
  return;
}


// ===== 00523280  FUN_00523280 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00523280(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029f810;
  param_1[1] = _UNK_0029f818;
  *param_1 = uVar1;
  return;
}


// ===== 00523294  FUN_00523294 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00523294(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a0d50;
  param_1[1] = _UNK_002a0d58;
  *param_1 = uVar1;
  return;
}


// ===== 005232a8  FUN_005232a8 =====

undefined8 FUN_005232a8(void)

{
  return 0;
}


// ===== 005232b0  FUN_005232b0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005232b0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029fa20;
  param_1[1] = _UNK_0029fa28;
  *param_1 = uVar1;
  return;
}


// ===== 005232c4  FUN_005232c4 =====

undefined1  [16] FUN_005232c4(ulong *param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  uVar2 = *param_1 ^ 0x8000000000000000;
  if (-1 < (long)*param_1) {
    uVar2 = 2;
  }
  if ((long)uVar2 < 2) {
    if (uVar2 == 0) {
      auVar4._8_8_ = &PTR_FUN_00acdbc8;
      auVar4._0_8_ = param_1 + 1;
      return auVar4;
    }
    auVar6._8_8_ = &PTR_FUN_00acdc40;
    auVar6._0_8_ = param_1 + 1;
    return auVar6;
  }
  if (uVar2 == 2) {
    auVar5._8_8_ = &PTR_FUN_00acdcb8;
    auVar5._0_8_ = param_1;
    return auVar5;
  }
  if (uVar2 == 3) {
    auVar3._8_8_ = &PTR_FUN_00acdd30;
    auVar3._0_8_ = param_1 + 1;
    return auVar3;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  return auVar1 << 0x40;
}


// ===== 00523334  FUN_00523334 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00523334(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a0f30;
  param_1[1] = _UNK_002a0f38;
  *param_1 = uVar1;
  return;
}


// ===== 00523348  FUN_00523348 =====

void * FUN_00523348(void *param_1,undefined8 param_2)

{
  void *pvVar1;
  
  if (*(long *)((long)param_1 + 0x18) != 0) {
    return param_1;
  }
                    /* try { // try from 00523368 to 0052337b has its CatchHandler @ 00523398 */
  pvVar1 = (void *)FUN_004bd924(param_2,param_1);
  free(param_1);
  return pvVar1;
}


// ===== 005233ac  FUN_005233ac =====

void FUN_005233ac(byte *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if ((*param_1 != 0xff) && (0x18 < *param_1)) {
    plVar3 = *(long **)(param_1 + 8);
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
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
      return;
    }
  }
  return;
}


// ===== 005233e4  FUN_005233e4 =====

void FUN_005233e4(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (*param_1 != 0) {
    plVar3 = (long *)param_1[1];
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
                    /* try { // try from 0052341c to 0052341f has its CatchHandler @ 0052345c */
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
      }
    }
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
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 3);
        return;
      }
    }
  }
  return;
}


// ===== 00523494  FUN_00523494 =====

void FUN_00523494(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (*param_1 != 2) {
    plVar3 = (long *)param_1[2];
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
                    /* try { // try from 005234d0 to 005234d3 has its CatchHandler @ 00523570 */
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
      }
    }
    plVar3 = (long *)param_1[4];
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
                    /* try { // try from 005234f8 to 005234fb has its CatchHandler @ 00523568 */
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
      }
    }
    plVar3 = (long *)param_1[6];
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
                    /* try { // try from 00523520 to 00523523 has its CatchHandler @ 00523560 */
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
      }
    }
    plVar3 = (long *)param_1[8];
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
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 8);
        return;
      }
    }
  }
  return;
}


// ===== 005235fc  FUN_005235fc =====

void FUN_005235fc(char *param_1)

{
  if (*param_1 != -1) {
                    /* try { // try from 00523614 to 0052361b has its CatchHandler @ 00523638 */
    FUN_00525f08();
    FUN_00525f08(param_1 + 0x20);
    return;
  }
  return;
}


// ===== 00523650  FUN_00523650 =====

void FUN_00523650(long *param_1)

{
  void *__ptr;
  long lVar1;
  char cVar2;
  bool bVar3;
  byte *pbVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  __ptr = (void *)param_1[1];
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    lVar7 = 0;
    do {
      pbVar4 = (byte *)((long)__ptr + lVar7 * 0x18);
      lVar7 = lVar7 + 1;
      if (0x18 < *pbVar4) {
        plVar5 = *(long **)(pbVar4 + 8);
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
                    /* try { // try from 005236b4 to 005236b7 has its CatchHandler @ 005236f0 */
          <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
        }
      }
    } while (lVar7 != lVar1);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00523760  FUN_00523760 =====

void FUN_00523760(long *param_1)

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


// ===== 005237d0  FUN_005237d0 =====

void FUN_005237d0(long *param_1)

{
  void *__ptr;
  void *pvVar1;
  long lVar2;
  
  __ptr = (void *)param_1[1];
  lVar2 = param_1[2] + 1;
  pvVar1 = __ptr;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 00523800 to 00523803 has its CatchHandler @ 00523840 */
    FUN_005254e4(pvVar1);
    pvVar1 = (void *)((long)pvVar1 + 0xb8);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 0052387c  FUN_0052387c =====

void FUN_0052387c(long *param_1)

{
                    /* try { // try from 0052388c to 0052388f has its CatchHandler @ 005238b4 */
  FUN_0052b170();
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 005238d0  FUN_005238d0 =====

void FUN_005238d0(long *param_1)

{
  void *__ptr;
  void *pvVar1;
  long lVar2;
  
  __ptr = (void *)param_1[1];
  lVar2 = param_1[2] + 1;
  pvVar1 = __ptr;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 00523900 to 00523903 has its CatchHandler @ 00523940 */
    FUN_00524f38(pvVar1);
    pvVar1 = (void *)((long)pvVar1 + 0x70);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 0052397c  FUN_0052397c =====

void FUN_0052397c(long *param_1)

{
  void *__ptr;
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  
  __ptr = (void *)param_1[1];
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    lVar6 = 0;
    do {
      pvVar5 = (void *)((long)__ptr + lVar6 * 0x248);
                    /* try { // try from 005239ec to 005239f3 has its CatchHandler @ 00523ad8 */
      FUN_00525034(pvVar5);
      lVar8 = *(long *)((long)pvVar5 + 0x220);
      if (lVar8 != 0) {
        lVar4 = *(long *)((long)pvVar5 + 0x230);
        if (lVar4 != 0) {
          puVar3 = *(undefined8 **)((long)pvVar5 + 0x218);
          puVar7 = puVar3 + 1;
          uVar9 = NEON_cmge(*puVar3,0,1);
          uVar9 = uVar9 & 0x8080808080808080;
          do {
            for (; uVar9 == 0; uVar9 = uVar9 & 0x8080808080808080) {
              puVar3 = puVar3 + -0xc0;
              uVar9 = NEON_cmge(*puVar7,0,1);
              puVar7 = puVar7 + 1;
            }
            uVar2 = (uVar9 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar9 >> 7 & 0xff00ff00ff00ff) << 8;
            uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
                    /* try { // try from 00523a4c to 00523a4f has its CatchHandler @ 00523af0 */
            FUN_00512b50(puVar3 + (long)-(int)((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) *
                                  0x18 + -0x18);
            lVar4 = lVar4 + -1;
            uVar9 = uVar9 - 1 & uVar9;
          } while (lVar4 != 0);
        }
        if (lVar8 * 0xc1 != -0xc9) {
          free((void *)(*(long *)((long)pvVar5 + 0x218) + lVar8 * -0xc0 + -0xc0));
        }
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != lVar1);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00523b30  FUN_00523b30 =====

void FUN_00523b30(long *param_1)

{
  void *__ptr;
  void *pvVar1;
  long lVar2;
  
  __ptr = (void *)param_1[1];
  lVar2 = param_1[2] + 1;
  pvVar1 = __ptr;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 00523b60 to 00523b63 has its CatchHandler @ 00523ba0 */
    FUN_00525c7c(pvVar1);
    pvVar1 = (void *)((long)pvVar1 + 0x260);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00523bdc  FUN_00523bdc =====

void FUN_00523bdc(long *param_1)

{
  void *__ptr;
  void *pvVar1;
  long lVar2;
  
  __ptr = (void *)param_1[1];
  lVar2 = param_1[2] + 1;
  pvVar1 = __ptr;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 00523c0c to 00523c0f has its CatchHandler @ 00523c4c */
    FUN_00525d9c(pvVar1);
    pvVar1 = (void *)((long)pvVar1 + 0x2d8);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00523c88  FUN_00523c88 =====

void FUN_00523c88(long *param_1)

{
  void *__ptr;
  void *pvVar1;
  long lVar2;
  
  __ptr = (void *)param_1[1];
  lVar2 = param_1[2] + 1;
  pvVar1 = __ptr;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 00523cb8 to 00523cbb has its CatchHandler @ 00523cf8 */
    FUN_00525f08(pvVar1);
    pvVar1 = (void *)((long)pvVar1 + 0x20);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00523d34  FUN_00523d34 =====

void FUN_00523d34(long *param_1)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  
  __ptr = (void *)param_1[1];
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    lVar2 = 0;
    do {
                    /* try { // try from 00523d6c to 00523d73 has its CatchHandler @ 00523dc0 */
      FUN_0052b170((long)__ptr + lVar2 + 8);
      if (*(long *)((long)__ptr + lVar2 + 8) != 0) {
        free(*(void **)((long)__ptr + lVar2 + 0x10));
      }
      lVar1 = lVar1 + -1;
      lVar2 = lVar2 + 0x20;
    } while (lVar1 != 0);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00523e18  FUN_00523e18 =====

void FUN_00523e18(long *param_1)

{
                    /* try { // try from 00523e28 to 00523e2b has its CatchHandler @ 00523e50 */
  FUN_0052b3c4();
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 00523e6c  FUN_00523e6c =====

void FUN_00523e6c(long *param_1)

{
  void *__ptr;
  long lVar1;
  void *pvVar2;
  
  __ptr = (void *)param_1[1];
  pvVar2 = __ptr;
  for (lVar1 = param_1[2]; lVar1 != 0; lVar1 = lVar1 + -1) {
                    /* try { // try from 00523e90 to 00523e9f has its CatchHandler @ 00523ee8 */
    FUN_00525f08(pvVar2);
                    /* try { // try from 00523ea8 to 00523eaf has its CatchHandler @ 00523efc */
    FUN_00525f08((long)pvVar2 + 0x20);
    pvVar2 = (void *)((long)pvVar2 + 0x40);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00523f38  FUN_00523f38 =====

void FUN_00523f38(void *param_1,undefined8 *param_2)

{
  if ((code *)*param_2 != (code *)0x0) {
                    /* try { // try from 00523f54 to 00523f5b has its CatchHandler @ 00523f80 */
    (*(code *)*param_2)(param_1);
  }
  if (param_2[1] != 0) {
    free(param_1);
    return;
  }
  return;
}


// ===== 00523f9c  FUN_00523f9c =====

void FUN_00523f9c(undefined8 *param_1)

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


// ===== 0052400c  FUN_0052400c =====

void FUN_0052400c(long *param_1)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *param_1;
  if (lVar3 == -1) {
    pvVar2 = (void *)param_1[2];
    lVar3 = param_1[3] + 1;
    pvVar1 = pvVar2;
    while (lVar3 = lVar3 + -1, lVar3 != 0) {
                    /* try { // try from 0052408c to 0052408f has its CatchHandler @ 005240d4 */
      FUN_005254e4(pvVar1);
      pvVar1 = (void *)((long)pvVar1 + 0xb8);
    }
    if (param_1[1] == 0) {
      return;
    }
  }
  else {
    pvVar2 = (void *)param_1[1];
    lVar4 = param_1[2] + 1;
    pvVar1 = pvVar2;
    while (lVar4 = lVar4 + -1, lVar4 != 0) {
                    /* try { // try from 0052404c to 0052404f has its CatchHandler @ 00524104 */
      FUN_005254e4(pvVar1);
      pvVar1 = (void *)((long)pvVar1 + 0xb8);
    }
    if (lVar3 != 0) {
      free(pvVar2);
    }
    if (param_1[3] == 0) {
      return;
    }
    pvVar2 = (void *)param_1[4];
  }
  free(pvVar2);
  return;
}


// ===== 00524150  FUN_00524150 =====

void FUN_00524150(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == -1) {
                    /* try { // try from 0052419c to 005241a3 has its CatchHandler @ 005241cc */
    FUN_0052b170(param_1 + 1);
    if (param_1[1] != 0) {
      free((void *)param_1[2]);
      return;
    }
  }
  else {
                    /* try { // try from 0052416c to 00524173 has its CatchHandler @ 005241e0 */
    FUN_0052b170(param_1);
    if (lVar1 != 0) {
      free((void *)param_1[1]);
    }
    if (param_1[3] != 0) {
      free((void *)param_1[4]);
      return;
    }
  }
  return;
}


// ===== 00524210  FUN_00524210 =====

void FUN_00524210(long *param_1)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *param_1;
  if (lVar3 == -1) {
    pvVar2 = (void *)param_1[2];
    lVar3 = param_1[3] + 1;
    pvVar1 = pvVar2;
    while (lVar3 = lVar3 + -1, lVar3 != 0) {
                    /* try { // try from 00524290 to 00524293 has its CatchHandler @ 005242d8 */
      FUN_00524f38(pvVar1);
      pvVar1 = (void *)((long)pvVar1 + 0x70);
    }
    if (param_1[1] == 0) {
      return;
    }
  }
  else {
    pvVar2 = (void *)param_1[1];
    lVar4 = param_1[2] + 1;
    pvVar1 = pvVar2;
    while (lVar4 = lVar4 + -1, lVar4 != 0) {
                    /* try { // try from 00524250 to 00524253 has its CatchHandler @ 00524308 */
      FUN_00524f38(pvVar1);
      pvVar1 = (void *)((long)pvVar1 + 0x70);
    }
    if (lVar3 != 0) {
      free(pvVar2);
    }
    if (param_1[3] == 0) {
      return;
    }
    pvVar2 = (void *)param_1[4];
  }
  free(pvVar2);
  return;
}


// ===== 00524354  FUN_00524354 =====

void FUN_00524354(long param_1)

{
  if (*(long *)(param_1 + 0x40) != 0) {
                    /* try { // try from 00524374 to 0052437b has its CatchHandler @ 00524398 */
    (**(code **)(*(long *)(param_1 + 0x40) + 0x20))
              (param_1 + 0x58,*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
  }
                    /* WARNING: Could not recover jumptable at 0x00524394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x20))
            (param_1 + 0x30,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}


// ===== 005243bc  FUN_005243bc =====

void FUN_005243bc(int *param_1,uint param_2)

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


// ===== 0052442c  FUN_0052442c =====

void FUN_0052442c(int *param_1,uint param_2)

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


// ===== 0052449c  FUN_0052449c =====

void FUN_0052449c(ulong *param_1)

{
  void *__ptr;
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = *param_1;
  if (uVar2 == (uVar2 != 0)) {
    FUN_00524d50(param_1);
    return;
  }
  if (uVar2 - (uVar2 != 0) == 2) {
    __ptr = (void *)param_1[2];
    lVar3 = param_1[3] + 1;
    pvVar1 = __ptr;
    while (lVar3 = lVar3 + -1, lVar3 != 0) {
                    /* try { // try from 005244e8 to 005244eb has its CatchHandler @ 00524540 */
      FUN_00524d50(pvVar1);
      pvVar1 = (void *)((long)pvVar1 + 0xe0);
    }
    if (param_1[1] != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 0052457c  FUN_0052457c =====

void FUN_0052457c(ulong *param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  long lVar9;
  
  uVar4 = *param_1;
  if (uVar4 == (uVar4 != 0)) {
    if (0x18 < (byte)param_1[5]) {
      plVar5 = (long *)param_1[6];
      do {
        lVar9 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 + -1 == 0) {
        DataMemoryBarrier(2,1);
                    /* try { // try from 00524660 to 00524663 has its CatchHandler @ 005246b8 */
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
      }
    }
    if (param_1[2] != 0) {
      puVar7 = param_1 + 3;
LAB_0052467c:
      free((void *)*puVar7);
      return;
    }
  }
  else if (uVar4 - (uVar4 != 0) == 2) {
    puVar7 = param_1 + 2;
    uVar4 = *puVar7;
    uVar1 = param_1[3];
    if (uVar1 != 0) {
      uVar8 = 0;
      do {
        lVar9 = uVar4 + uVar8 * 0x58;
        if (0x18 < *(byte *)(lVar9 + 0x28)) {
          plVar5 = *(long **)(lVar9 + 0x30);
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
                    /* try { // try from 0052461c to 0052461f has its CatchHandler @ 005246cc */
            <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
          }
        }
        if (*(long *)(lVar9 + 0x10) != 0) {
          free(*(void **)(lVar9 + 0x18));
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar1);
    }
    if (param_1[1] != 0) goto LAB_0052467c;
  }
  return;
}


// ===== 00524718  FUN_00524718 =====

void FUN_00524718(ulong *param_1)

{
  void *__ptr;
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = *param_1;
  if (uVar2 == (uVar2 != 0)) {
    FUN_00524f38(param_1);
    return;
  }
  if (uVar2 - (uVar2 != 0) == 2) {
    __ptr = (void *)param_1[2];
    lVar3 = param_1[3] + 1;
    pvVar1 = __ptr;
    while (lVar3 = lVar3 + -1, lVar3 != 0) {
                    /* try { // try from 00524764 to 00524767 has its CatchHandler @ 005247bc */
      FUN_00524f38(pvVar1);
      pvVar1 = (void *)((long)pvVar1 + 0x70);
    }
    if (param_1[1] != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 005247f8  FUN_005247f8 =====

void FUN_005247f8(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if (*param_1 == 0) {
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
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
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 2);
        return;
      }
    }
  }
  else if (*param_1 == 2) {
    lVar5 = param_1[4];
    if (lVar5 != 0) {
      lVar6 = param_1[3];
      lVar7 = 0;
      do {
        lVar4 = lVar7 * 0x20;
        lVar7 = lVar7 + 1;
        plVar3 = *(long **)(lVar6 + lVar4 + 8);
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
                    /* try { // try from 00524864 to 00524867 has its CatchHandler @ 005248d8 */
            <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
          }
        }
      } while (lVar7 != lVar5);
    }
    if (param_1[2] != 0) {
      free((void *)param_1[3]);
      return;
    }
  }
  return;
}


// ===== 00524938  FUN_00524938 =====

void FUN_00524938(ulong *param_1)

{
  void *__ptr;
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = *param_1;
  if (uVar2 == (uVar2 != 0)) {
    FUN_00525034(param_1);
    return;
  }
  if (uVar2 - (uVar2 != 0) == 2) {
    __ptr = (void *)param_1[2];
    lVar3 = param_1[3] + 1;
    pvVar1 = __ptr;
    while (lVar3 = lVar3 + -1, lVar3 != 0) {
                    /* try { // try from 00524984 to 00524987 has its CatchHandler @ 005249dc */
      FUN_00525034(pvVar1);
      pvVar1 = (void *)((long)pvVar1 + 0x218);
    }
    if (param_1[1] != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 00524a18  FUN_00524a18 =====

void FUN_00524a18(byte *param_1)

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
                    /* try { // try from 00524a64 to 00524a67 has its CatchHandler @ 00524b0c */
        FUN_00524a18(pvVar2);
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
      FUN_005578bc(local_88);
    }
  }
  return;
}


// ===== 00524b48  FUN_00524b48 =====

void FUN_00524b48(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 00524b5c  FUN_00524b5c =====

void FUN_00524b5c(undefined8 *param_1)

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
                    /* try { // try from 00524b88 to 00524b8f has its CatchHandler @ 00524ba0 */
    FUN_0050ee30(param_1);
  }
  <react_common::ffi::base::ffi::CallInvoker_as_cxx::shared_ptr::SharedPtrTarget>::__drop
            (param_1 + 1);
  return;
}


// ===== 00524bb8  FUN_00524bb8 =====

void FUN_00524bb8(long *param_1)

{
  void *__ptr;
  void *pvVar1;
  long lVar2;
  
  if (*param_1 != 0) {
    free((void *)param_1[1]);
  }
  __ptr = (void *)param_1[4];
  lVar2 = param_1[5] + 1;
  pvVar1 = __ptr;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 00524bf8 to 00524bfb has its CatchHandler @ 00524c38 */
    FUN_00524a18(pvVar1);
    pvVar1 = (void *)((long)pvVar1 + 0x20);
  }
  if (param_1[3] != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00524c74  FUN_00524c74 =====

void FUN_00524c74(long *param_1)

{
  void *__ptr;
  void *pvVar1;
  long lVar2;
  
  __ptr = (void *)param_1[1];
  lVar2 = param_1[2] + 1;
  pvVar1 = __ptr;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 00524ca4 to 00524ca7 has its CatchHandler @ 00524cfc */
    FUN_00524bb8(pvVar1);
    pvVar1 = (void *)((long)pvVar1 + 0x30);
  }
  if (*param_1 != 0) {
    free(__ptr);
  }
  if ((param_1[3] != -1) && (param_1[3] != 0)) {
    free((void *)param_1[4]);
    return;
  }
  return;
}


// ===== 00524d50  FUN_00524d50 =====

void FUN_00524d50(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (0x18 < *(byte *)(param_1 + 0x40)) {
    plVar3 = *(long **)(param_1 + 0x48);
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
                    /* try { // try from 00524d8c to 00524d8f has its CatchHandler @ 00524e1c */
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
    }
  }
  plVar3 = *(long **)(param_1 + 0x68);
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
                    /* try { // try from 00524db4 to 00524db7 has its CatchHandler @ 00524e58 */
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
    }
  }
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
                    /* try { // try from 00524ddc to 00524ddf has its CatchHandler @ 00524e50 */
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
    }
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
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow((undefined8 *)(param_1 + 0x98));
      return;
    }
  }
  return;
}


// ===== 00524eb8  FUN_00524eb8 =====

void FUN_00524eb8(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (0x18 < *(byte *)(param_1 + 0x28)) {
    plVar3 = *(long **)(param_1 + 0x30);
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
                    /* try { // try from 00524ef4 to 00524ef7 has its CatchHandler @ 00524f1c */
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
    }
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    free(*(void **)(param_1 + 0x18));
    return;
  }
  return;
}


// ===== 00524f38  FUN_00524f38 =====

void FUN_00524f38(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (0x18 < *(byte *)(param_1 + 0x10)) {
    plVar3 = *(long **)(param_1 + 0x18);
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
                    /* try { // try from 00524f74 to 00524f77 has its CatchHandler @ 00524ff4 */
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
    }
  }
  if ((*(byte *)(param_1 + 0x28) != 0xff) && (0x18 < *(byte *)(param_1 + 0x28))) {
    plVar3 = *(long **)(param_1 + 0x30);
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
                    /* try { // try from 00524fac to 00524faf has its CatchHandler @ 00524fec */
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
    }
  }
  plVar3 = *(long **)(param_1 + 0x50);
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
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow((undefined8 *)(param_1 + 0x50));
      return;
    }
  }
  return;
}


// ===== 00525034  FUN_00525034 =====

void FUN_00525034(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (0x18 < *(byte *)(param_1 + 0x18)) {
    plVar3 = (long *)param_1[0x19];
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
                    /* try { // try from 00525070 to 00525073 has its CatchHandler @ 005252f8 */
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
    }
  }
  plVar3 = (long *)param_1[0x23];
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
                    /* try { // try from 00525094 to 0052509b has its CatchHandler @ 00525350 */
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 0x23);
    }
  }
  plVar3 = (long *)param_1[0x26];
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
                    /* try { // try from 005250bc to 005250c3 has its CatchHandler @ 00525348 */
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 0x26);
    }
  }
  plVar3 = (long *)param_1[0x28];
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
                    /* try { // try from 005250e4 to 005250eb has its CatchHandler @ 00525340 */
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 0x28);
    }
  }
  plVar3 = (long *)param_1[0x2a];
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
                    /* try { // try from 0052510c to 00525113 has its CatchHandler @ 00525338 */
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 0x2a);
    }
  }
  plVar3 = (long *)param_1[0x2c];
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
                    /* try { // try from 00525134 to 0052513b has its CatchHandler @ 00525330 */
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 0x2c);
    }
  }
  if (0x18 < *(byte *)(param_1 + 0x1b)) {
    plVar3 = (long *)param_1[0x1c];
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
                    /* try { // try from 00525168 to 0052516b has its CatchHandler @ 005252f0 */
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
    }
  }
  plVar3 = (long *)param_1[0x22];
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
                    /* try { // try from 00525188 to 0052518f has its CatchHandler @ 0052544c */
    <alloc::sync::[n]::alloc::sync::Arc<std::collections::hash::set::HashSet<smol_str::SmolStr>>>::
    drop_slow(param_1 + 0x22);
  }
  if ((*(byte *)(param_1 + 0x1e) != 0xff) && (0x18 < *(byte *)(param_1 + 0x1e))) {
    plVar3 = (long *)param_1[0x1f];
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
                    /* try { // try from 005251c4 to 005251c7 has its CatchHandler @ 005252a0 */
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
    }
  }
  plVar3 = (long *)param_1[0x37];
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
                    /* try { // try from 005251e8 to 005251ef has its CatchHandler @ 00525328 */
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 0x37);
    }
  }
  if (*param_1 != 0) {
    plVar3 = (long *)param_1[1];
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
                    /* try { // try from 0052521c to 0052521f has its CatchHandler @ 005252b0 */
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
      }
    }
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
                    /* try { // try from 00525244 to 00525247 has its CatchHandler @ 005252a8 */
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
      }
    }
  }
  if ((short)param_1[0x15] != 2) {
    plVar3 = (long *)param_1[0x12];
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
                    /* try { // try from 00525270 to 00525277 has its CatchHandler @ 005252e8 */
      <alloc::sync::[n]::alloc::sync::Arc<[smol_str::SmolStr]>>::drop_slow(param_1 + 0x12);
    }
  }
  if ((param_1[0xf] != -1) && (param_1[0xf] != 0)) {
    free((void *)param_1[0x10]);
  }
  FUN_00523494(param_1 + 5);
  return;
}


// ===== 005254e4  FUN_005254e4 =====

void FUN_005254e4(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (0x18 < *(byte *)(param_1 + 0x38)) {
    plVar3 = *(long **)(param_1 + 0x40);
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
                    /* try { // try from 00525520 to 00525523 has its CatchHandler @ 005255b0 */
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
    }
  }
  plVar3 = *(long **)(param_1 + 0x58);
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
                    /* try { // try from 00525548 to 0052554b has its CatchHandler @ 005255ec */
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
    }
  }
  plVar3 = *(long **)(param_1 + 0x78);
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
                    /* try { // try from 00525570 to 00525573 has its CatchHandler @ 005255e4 */
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
    }
  }
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
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow((undefined8 *)(param_1 + 0x88));
      return;
    }
  }
  return;
}


// ===== 0052564c  FUN_0052564c =====

void FUN_0052564c(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (0x18 < *(byte *)(param_1 + 0x28)) {
    plVar3 = *(long **)(param_1 + 0x30);
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
                    /* try { // try from 00525688 to 0052568b has its CatchHandler @ 005256b0 */
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
    }
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    free(*(void **)(param_1 + 0x18));
    return;
  }
  return;
}


// ===== 005256cc  FUN_005256cc =====

void FUN_005256cc(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (0x18 < *(byte *)(param_1 + 0x100)) {
    plVar3 = *(long **)(param_1 + 0x108);
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
                    /* try { // try from 00525704 to 0052570b has its CatchHandler @ 00525990 */
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 0x108);
    }
  }
  plVar3 = *(long **)(param_1 + 0x158);
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
                    /* try { // try from 0052572c to 00525733 has its CatchHandler @ 005259e8 */
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 0x158);
    }
  }
  plVar3 = *(long **)(param_1 + 0x150);
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
                    /* try { // try from 00525750 to 00525757 has its CatchHandler @ 00525a14 */
    <alloc::sync::[n]::alloc::sync::Arc<std::collections::hash::set::HashSet<smol_str::SmolStr>>>::
    drop_slow(param_1 + 0x150);
  }
  plVar3 = *(long **)(param_1 + 0x168);
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
                    /* try { // try from 00525778 to 0052577f has its CatchHandler @ 005259e0 */
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 0x168);
    }
  }
  plVar3 = *(long **)(param_1 + 0x178);
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
                    /* try { // try from 005257a0 to 005257a7 has its CatchHandler @ 005259d8 */
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 0x178);
    }
  }
  plVar3 = *(long **)(param_1 + 0x188);
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
                    /* try { // try from 005257c8 to 005257cf has its CatchHandler @ 005259d0 */
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 0x188);
    }
  }
  plVar3 = *(long **)(param_1 + 0x198);
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
                    /* try { // try from 005257f0 to 005257f7 has its CatchHandler @ 005259c8 */
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 0x198);
    }
  }
  plVar3 = *(long **)(param_1 + 0x1a8);
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
                    /* try { // try from 00525818 to 0052581f has its CatchHandler @ 005259c0 */
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 0x1a8);
    }
  }
  if (0x18 < *(byte *)(param_1 + 0x118)) {
    plVar3 = *(long **)(param_1 + 0x120);
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
                    /* try { // try from 00525848 to 0052584f has its CatchHandler @ 00525988 */
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 0x120);
    }
  }
  if ((*(byte *)(param_1 + 0x130) != 0xff) && (0x18 < *(byte *)(param_1 + 0x130))) {
    plVar3 = *(long **)(param_1 + 0x138);
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
                    /* try { // try from 00525880 to 00525887 has its CatchHandler @ 00525938 */
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 0x138);
    }
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    plVar3 = *(long **)(param_1 + 0x48);
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
                    /* try { // try from 005258b4 to 005258b7 has its CatchHandler @ 00525948 */
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
      }
    }
    plVar3 = *(long **)(param_1 + 0x58);
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
                    /* try { // try from 005258dc to 005258df has its CatchHandler @ 00525940 */
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
      }
    }
  }
  if (*(short *)(param_1 + 0xe8) != 2) {
    plVar3 = *(long **)(param_1 + 0xd0);
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
                    /* try { // try from 00525908 to 0052590f has its CatchHandler @ 00525980 */
      <alloc::sync::[n]::alloc::sync::Arc<[smol_str::SmolStr]>>::drop_slow(param_1 + 0xd0);
    }
  }
  if ((*(long *)(param_1 + 0xb8) != -1) && (*(long *)(param_1 + 0xb8) != 0)) {
    free(*(void **)(param_1 + 0xc0));
  }
  FUN_00523494(param_1 + 0x68);
  return;
}


// ===== 00525b7c  FUN_00525b7c =====

void FUN_00525b7c(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  
                    /* try { // try from 00525b98 to 00525b9b has its CatchHandler @ 00525c64 */
  FUN_00525034();
  lVar2 = *(long *)(param_1 + 0x220);
  if (lVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0x230);
    if (lVar3 != 0) {
      puVar4 = *(undefined8 **)(param_1 + 0x218);
      puVar5 = puVar4 + 1;
      uVar6 = NEON_cmge(*puVar4,0,1);
      uVar6 = uVar6 & 0x8080808080808080;
      do {
        for (; uVar6 == 0; uVar6 = uVar6 & 0x8080808080808080) {
          puVar4 = puVar4 + -0xc0;
          uVar6 = NEON_cmge(*puVar5,0,1);
          puVar5 = puVar5 + 1;
        }
        uVar1 = (uVar6 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar6 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        lVar3 = lVar3 + -1;
        uVar6 = uVar6 - 1 & uVar6;
        FUN_00512b50(puVar4 + (long)-(int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) *
                              0x18 + -0x18);
      } while (lVar3 != 0);
    }
    if (lVar2 * 0xc1 != -0xc9) {
      free((void *)(*(long *)(param_1 + 0x218) + lVar2 * -0xc0 + -0xc0));
      return;
    }
  }
  return;
}


// ===== 00525c7c  FUN_00525c7c =====

void FUN_00525c7c(ulong *param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *param_1;
  lVar2 = uVar1 - 3;
  if (uVar1 < 3) {
    lVar2 = 1;
  }
  if (lVar2 == 0) {
                    /* try { // try from 00525cd8 to 00525cdf has its CatchHandler @ 00525d4c */
    FUN_005256cc(param_1 + 1);
    lVar2 = param_1[0x48] + 1;
    uVar1 = param_1[0x47];
    while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 00525cf8 to 00525cfb has its CatchHandler @ 00525d60 */
      FUN_005254e4(uVar1);
      uVar1 = uVar1 + 0xb8;
    }
    if (param_1[0x46] != 0) {
      free((void *)param_1[0x47]);
      return;
    }
  }
  else if (lVar2 == 1) {
    if (uVar1 != 2) {
                    /* try { // try from 00525cb8 to 00525cbf has its CatchHandler @ 00525d38 */
      FUN_005256cc(param_1);
    }
    FUN_00525e18(param_1 + 0x45);
    return;
  }
  return;
}


// ===== 00525d9c  FUN_00525d9c =====

void FUN_00525d9c(long *param_1)

{
  if (*param_1 != 2) {
                    /* try { // try from 00525db8 to 00525dbf has its CatchHandler @ 00525de0 */
    FUN_005256cc(param_1);
  }
                    /* try { // try from 00525dc0 to 00525dc7 has its CatchHandler @ 00525df8 */
  FUN_0052400c(param_1 + 0x45);
                    /* try { // try from 00525dc8 to 00525dcf has its CatchHandler @ 00525df0 */
  FUN_00524150(param_1 + 0x4b);
  FUN_00524210(param_1 + 0x51);
  return;
}


// ===== 00525e18  FUN_00525e18 =====

void FUN_00525e18(long *param_1)

{
  void *__ptr;
  void *pvVar1;
  long lVar2;
  
  __ptr = (void *)param_1[1];
  lVar2 = param_1[2] + 1;
  pvVar1 = __ptr;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 00525e48 to 00525e4b has its CatchHandler @ 00525e98 */
    FUN_005254e4(pvVar1);
    pvVar1 = (void *)((long)pvVar1 + 0xb8);
  }
  if (*param_1 != 0) {
    free(__ptr);
  }
  if (param_1[3] != 0) {
    free((void *)param_1[4]);
    return;
  }
  return;
}


// ===== 00525ef4  FUN_00525ef4 =====

void FUN_00525ef4(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 00525f08  FUN_00525f08 =====

void FUN_00525f08(byte *param_1)

{
  byte bVar1;
  void *pvVar2;
  uint uVar3;
  void *__ptr;
  long lVar4;
  
  bVar1 = *param_1;
  if (bVar1 < 0xd) {
    if (bVar1 < 0xc) {
      return;
    }
    if (bVar1 == 0xc) {
LAB_00525fc4:
      if (*(long *)(param_1 + 8) == 0) {
        return;
      }
      free(*(void **)(param_1 + 0x10));
      return;
    }
LAB_0052601c:
    __ptr = *(void **)(param_1 + 0x10);
    pvVar2 = __ptr;
    for (lVar4 = *(long *)(param_1 + 0x18); lVar4 != 0; lVar4 = lVar4 + -1) {
                    /* try { // try from 00526028 to 00526037 has its CatchHandler @ 00526068 */
      FUN_00525f08(pvVar2);
                    /* try { // try from 00526040 to 00526047 has its CatchHandler @ 0052607c */
      FUN_00525f08((long)pvVar2 + 0x20);
      pvVar2 = (void *)((long)pvVar2 + 0x40);
    }
  }
  else {
    uVar3 = (uint)bVar1;
    if (bVar1 < 0x11) {
      if (uVar3 - 0xf < 2) {
        return;
      }
      if (uVar3 == 0xd) {
        return;
      }
      if (uVar3 == 0xe) goto LAB_00525fc4;
      goto LAB_0052601c;
    }
    if (uVar3 < 0x13) {
      if (bVar1 == 0x11) {
        __ptr = *(void **)(param_1 + 8);
                    /* try { // try from 00525fec to 00525ff3 has its CatchHandler @ 00526060 */
        FUN_00525f08(__ptr);
        goto LAB_00525ff4;
      }
      if (uVar3 == 0x12) {
        return;
      }
      goto LAB_0052601c;
    }
    if (uVar3 == 0x13) {
      __ptr = *(void **)(param_1 + 8);
                    /* try { // try from 00526010 to 00526017 has its CatchHandler @ 00526058 */
      FUN_00525f08(__ptr);
      goto LAB_00525ff4;
    }
    if (bVar1 != 0x14) goto LAB_0052601c;
    __ptr = *(void **)(param_1 + 0x10);
    lVar4 = *(long *)(param_1 + 0x18) + 1;
    pvVar2 = __ptr;
    while (lVar4 = lVar4 + -1, lVar4 != 0) {
                    /* try { // try from 00525fb0 to 00525fb3 has its CatchHandler @ 005260a0 */
      FUN_00525f08(pvVar2);
      pvVar2 = (void *)((long)pvVar2 + 0x20);
    }
  }
  if (*(long *)(param_1 + 8) == 0) {
    return;
  }
LAB_00525ff4:
  free(__ptr);
  return;
}


// ===== 005260dc  FUN_005260dc =====

void FUN_005260dc(long param_1)

{
                    /* try { // try from 005260ec to 005260f3 has its CatchHandler @ 00526118 */
  FUN_0052b170(param_1 + 8);
  if (*(long *)(param_1 + 8) != 0) {
    free(*(void **)(param_1 + 0x10));
    return;
  }
  return;
}


// ===== 00526134  FUN_00526134 =====

void FUN_00526134(long param_1)

{
  void *__ptr;
  void *pvVar1;
  long lVar2;
  
  __ptr = *(void **)(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 0x18) + 1;
  pvVar1 = __ptr;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 00526164 to 00526167 has its CatchHandler @ 005261a4 */
    FUN_00524f38(pvVar1);
    pvVar1 = (void *)((long)pvVar1 + 0x70);
  }
  if (*(long *)(param_1 + 8) != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 005261e0  FUN_005261e0 =====

void FUN_005261e0(long param_1)

{
                    /* try { // try from 005261f0 to 005261f3 has its CatchHandler @ 00526204 */
  FUN_00525f08();
  FUN_00525f08(param_1 + 0x20);
  return;
}


// ===== 0052621c  FUN_0052621c =====

void FUN_0052621c(long *param_1,long param_2,long param_3)

{
  size_t __size;
  undefined8 *puVar1;
  long local_a8;
  undefined8 *puStack_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (param_3 == 0) {
    local_a8 = 0;
    puStack_a0 = (undefined8 *)&DAT_00000008;
  }
  else {
    __size = param_3 << 6;
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puStack_a0 = (undefined8 *)malloc(__size);
    puVar1 = puStack_a0;
    if (puStack_a0 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(8,__size);
    }
    do {
      local_a8 = param_3;
      if (__size == 0) break;
                    /* try { // try from 00526270 to 0052627b has its CatchHandler @ 00526300 */
      FUN_0052b660(&local_90,param_2);
                    /* try { // try from 0052627c to 00526287 has its CatchHandler @ 005262ec */
      FUN_0052b660(&local_70,param_2 + 0x20);
      param_2 = param_2 + 0x40;
      __size = __size - 0x40;
      puVar1[1] = uStack_88;
      *puVar1 = local_90;
      puVar1[3] = uStack_78;
      puVar1[2] = uStack_80;
      puVar1[5] = uStack_68;
      puVar1[4] = local_70;
      puVar1[7] = uStack_58;
      puVar1[6] = uStack_60;
      puVar1 = puVar1 + 8;
    } while (__size != 0);
  }
  param_1[1] = (long)puStack_a0;
  *param_1 = local_a8;
  param_1[2] = param_3;
  return;
}


// ===== 0052631c  FUN_0052631c =====

void FUN_0052631c(ulong *param_1,long *param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  char *pcVar6;
  undefined8 *puVar7;
  char *pcVar8;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong local_b8;
  undefined1 *puStack_b0;
  ulong local_a8;
  undefined4 uStack_a0;
  undefined3 uStack_9c;
  char local_98 [8];
  ulong local_90;
  undefined8 uStack_88;
  char local_80;
  undefined7 uStack_7f;
  ulong uStack_78;
  undefined8 local_70;
  char *pcVar9;
  
  lVar4 = *param_2;
  pcVar9 = (char *)param_2[1];
  pcVar6 = (char *)param_2[3];
  uVar5 = (ulong)((long)pcVar6 - (long)pcVar9) >> 5;
  if (0xaaa9 < uVar5) {
    uVar5 = 0xaaaa;
  }
  uVar1 = 0;
  if (lVar4 != 0) {
    uVar1 = uVar5;
  }
  if (uVar1 == 0) {
    local_b8 = 0;
    puStack_b0 = &DAT_00000008;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puStack_b0 = (undefined1 *)malloc(uVar1 * 0x18);
    local_b8 = uVar5;
    if (puStack_b0 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(8,uVar1 * 0x18);
    }
  }
  local_a8 = 0;
  if ((lVar4 != 0) && (local_a8 = 0, pcVar9 != pcVar6)) {
    lVar4 = param_2[4];
    puVar7 = (undefined8 *)((ulong)&local_80 | 1);
    do {
      lVar4 = lVar4 + 1;
      pcVar8 = pcVar9 + 0x20;
      local_80 = *pcVar9;
      param_2[1] = (long)pcVar8;
      if (local_80 == -1) break;
      uVar11 = *(undefined8 *)(pcVar9 + 9);
      uVar10 = *(undefined8 *)(pcVar9 + 1);
      param_2[4] = lVar4;
      puVar7[1] = uVar11;
      *puVar7 = uVar10;
      uVar10 = *(undefined8 *)(pcVar9 + 0x10);
      *(undefined8 *)((long)puVar7 + 0x17) = *(undefined8 *)(pcVar9 + 0x18);
      *(undefined8 *)((long)puVar7 + 0xf) = uVar10;
                    /* try { // try from 00526428 to 00526433 has its CatchHandler @ 0052651c */
      FUN_004cba60(local_98,&local_80);
      uVar5 = local_a8;
      if (local_98[0] == -1) {
        *param_1 = 0xffffffffffffffff;
        param_1[1] = local_90;
        FUN_00523650(&local_b8);
        return;
      }
      uVar2 = *(undefined4 *)((ulong)local_98 | 1);
      local_80 = local_98[0];
      uStack_9c = (undefined3)((uint)*(undefined4 *)((long)((ulong)local_98 | 1) + 3) >> 8);
      uStack_a0._3_1_ = (undefined1)((uint)uVar2 >> 0x18);
      *(undefined4 *)puVar7 = uVar2;
      *(uint *)((long)puVar7 + 3) = CONCAT31(uStack_9c,uStack_a0._3_1_);
      uStack_78 = local_90;
      local_70 = uStack_88;
      uStack_a0 = uVar2;
      if (local_a8 == local_b8) {
                    /* try { // try from 0052647c to 00526483 has its CatchHandler @ 005264e4 */
        FUN_00530904(&local_b8);
      }
      puVar3 = (undefined8 *)(puStack_b0 + uVar5 * 0x18);
      puVar3[2] = local_70;
      local_a8 = uVar5 + 1;
      puVar3[1] = uStack_78;
      *puVar3 = CONCAT71(uStack_7f,local_80);
      pcVar9 = pcVar8;
    } while (pcVar8 != pcVar6);
  }
  param_1[1] = (ulong)puStack_b0;
  *param_1 = local_b8;
  param_1[2] = local_a8;
  return;
}


// ===== 00526534  FUN_00526534 =====

void FUN_00526534(ulong *param_1,long *param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  ulong local_98;
  undefined1 *puStack_90;
  ulong local_88;
  undefined4 uStack_80;
  undefined3 uStack_7c;
  char local_78;
  undefined7 uStack_77;
  ulong uStack_70;
  undefined8 local_68;
  
  lVar3 = *param_2;
  lVar7 = param_2[1];
  uVar5 = (ulong)(lVar7 - lVar3) >> 5;
  if (0xaaa9 < uVar5) {
    uVar5 = 0xaaaa;
  }
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = uVar5;
  }
  if (uVar1 == 0) {
    local_98 = 0;
    puStack_90 = &DAT_00000008;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puStack_90 = (undefined1 *)malloc(uVar1 * 0x18);
    local_98 = uVar5;
    if (puStack_90 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(8,uVar1 * 0x18);
    }
  }
  local_88 = 0;
  if ((lVar3 != 0) && (local_88 = 0, lVar3 != lVar7)) {
    lVar6 = param_2[2];
    puVar8 = (undefined4 *)((ulong)&local_78 | 1);
    puVar9 = (undefined4 *)((ulong)&local_78 | 1);
    do {
      lVar6 = lVar6 + 1;
      lVar3 = lVar3 + 0x20;
      param_2[2] = lVar6;
      *param_2 = lVar3;
                    /* try { // try from 00526628 to 0052662f has its CatchHandler @ 00526718 */
      FUN_004ee940(&local_78);
      uVar5 = local_88;
      if (local_78 == -1) {
        *param_1 = 0xffffffffffffffff;
        param_1[1] = uStack_70;
        FUN_00523650(&local_98);
        return;
      }
      uVar2 = *puVar9;
      uStack_7c = (undefined3)((uint)*(undefined4 *)((long)puVar9 + 3) >> 8);
      uStack_80._3_1_ = (undefined1)((uint)uVar2 >> 0x18);
      *puVar8 = uVar2;
      *(uint *)((long)puVar8 + 3) = CONCAT31(uStack_7c,uStack_80._3_1_);
      uStack_80 = uVar2;
      if (local_88 == local_98) {
                    /* try { // try from 00526678 to 0052667f has its CatchHandler @ 005266e0 */
        FUN_00530904(&local_98);
      }
      puVar4 = (undefined8 *)(puStack_90 + uVar5 * 0x18);
      puVar4[2] = local_68;
      local_88 = uVar5 + 1;
      puVar4[1] = uStack_70;
      *puVar4 = CONCAT71(uStack_77,local_78);
    } while (lVar3 != lVar7);
  }
  param_1[1] = (ulong)puStack_90;
  *param_1 = local_98;
  param_1[2] = local_88;
  return;
}


// ===== 00526730  FUN_00526730 =====

void FUN_00526730(ulong *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  char *pcVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  ulong local_88;
  undefined1 *puStack_80;
  ulong local_78;
  char local_70 [32];
  char *pcVar7;
  
  lVar2 = *param_2;
  pcVar7 = (char *)param_2[1];
  pcVar4 = (char *)param_2[3];
  uVar3 = (ulong)((long)pcVar4 - (long)pcVar7) >> 5;
  if (0x1ffff < uVar3) {
    uVar3 = 0x20000;
  }
  uVar1 = 0;
  if (lVar2 != 0) {
    uVar1 = uVar3;
  }
  if (uVar1 == 0) {
    local_88 = 0;
    puStack_80 = &DAT_00000008;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puStack_80 = (undefined1 *)malloc(uVar1 << 3);
    local_88 = uVar3;
    if (puStack_80 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(8,uVar1 << 3);
    }
  }
  local_78 = 0;
  if ((lVar2 != 0) && (local_78 = 0, pcVar7 != pcVar4)) {
    lVar2 = param_2[4];
    puVar5 = (undefined8 *)((ulong)local_70 | 1);
    do {
      lVar2 = lVar2 + 1;
      pcVar6 = pcVar7 + 0x20;
      local_70[0] = *pcVar7;
      param_2[1] = (long)pcVar6;
      if (local_70[0] == -1) break;
      uVar9 = *(undefined8 *)(pcVar7 + 9);
      uVar8 = *(undefined8 *)(pcVar7 + 1);
      uVar11 = *(undefined8 *)(pcVar7 + 0x18);
      uVar10 = *(undefined8 *)(pcVar7 + 0x10);
      param_2[4] = lVar2;
      puVar5[1] = uVar9;
      *puVar5 = uVar8;
      *(undefined8 *)((long)puVar5 + 0x17) = uVar11;
      *(undefined8 *)((long)puVar5 + 0xf) = uVar10;
                    /* try { // try from 00526818 to 00526843 has its CatchHandler @ 0052689c */
      auVar12 = FUN_004c6614(local_70);
      uVar3 = local_78;
      uVar1 = auVar12._8_8_;
      if ((auVar12 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
        *param_1 = 0xffffffffffffffff;
        param_1[1] = uVar1;
        if (local_88 == 0) {
          return;
        }
        free(puStack_80);
        return;
      }
      if (uVar1 == 0) break;
      if (local_78 == local_88) {
        FUN_0053096c(&local_88);
      }
      local_78 = uVar3 + 1;
      *(ulong *)(puStack_80 + uVar3 * 8) = uVar1;
      pcVar7 = pcVar6;
    } while (pcVar6 != pcVar4);
  }
  param_1[1] = (ulong)puStack_80;
  *param_1 = local_88;
  param_1[2] = local_78;
  return;
}


// ===== 005268b8  FUN_005268b8 =====

void FUN_005268b8(ulong *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  char *pcVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  ulong local_88;
  undefined1 *puStack_80;
  ulong local_78;
  char local_70 [32];
  char *pcVar7;
  
  lVar2 = *param_2;
  pcVar7 = (char *)param_2[1];
  pcVar4 = (char *)param_2[3];
  uVar3 = (ulong)((long)pcVar4 - (long)pcVar7) >> 5;
  if (0x1ffff < uVar3) {
    uVar3 = 0x20000;
  }
  uVar1 = 0;
  if (lVar2 != 0) {
    uVar1 = uVar3;
  }
  if (uVar1 == 0) {
    local_88 = 0;
    puStack_80 = &DAT_00000008;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puStack_80 = (undefined1 *)malloc(uVar1 << 3);
    local_88 = uVar3;
    if (puStack_80 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(8,uVar1 << 3);
    }
  }
  local_78 = 0;
  if ((lVar2 != 0) && (local_78 = 0, pcVar7 != pcVar4)) {
    lVar2 = param_2[4];
    puVar5 = (undefined8 *)((ulong)local_70 | 1);
    do {
      lVar2 = lVar2 + 1;
      pcVar6 = pcVar7 + 0x20;
      local_70[0] = *pcVar7;
      param_2[1] = (long)pcVar6;
      if (local_70[0] == -1) break;
      uVar9 = *(undefined8 *)(pcVar7 + 9);
      uVar8 = *(undefined8 *)(pcVar7 + 1);
      uVar11 = *(undefined8 *)(pcVar7 + 0x18);
      uVar10 = *(undefined8 *)(pcVar7 + 0x10);
      param_2[4] = lVar2;
      puVar5[1] = uVar9;
      *puVar5 = uVar8;
      *(undefined8 *)((long)puVar5 + 0x17) = uVar11;
      *(undefined8 *)((long)puVar5 + 0xf) = uVar10;
                    /* try { // try from 005269a0 to 005269cb has its CatchHandler @ 00526a24 */
      auVar12 = FUN_004c6614(local_70);
      uVar3 = local_78;
      uVar1 = auVar12._8_8_;
      if ((auVar12 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
        *param_1 = 0xffffffffffffffff;
        param_1[1] = uVar1;
        if (local_88 == 0) {
          return;
        }
        free(puStack_80);
        return;
      }
      if (uVar1 == 0) break;
      if (local_78 == local_88) {
        FUN_0053096c(&local_88);
      }
      local_78 = uVar3 + 1;
      *(ulong *)(puStack_80 + uVar3 * 8) = uVar1;
      pcVar7 = pcVar6;
    } while (pcVar6 != pcVar4);
  }
  param_1[1] = (ulong)puStack_80;
  *param_1 = local_88;
  param_1[2] = local_78;
  return;
}


// ===== 00526a40  FUN_00526a40 =====

void FUN_00526a40(ulong *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  ulong local_68;
  undefined1 *puStack_60;
  ulong local_58;
  
  lVar1 = *param_2;
  lVar5 = param_2[1];
  uVar4 = (ulong)(lVar5 - lVar1) >> 5;
  if (0x1ffff < uVar4) {
    uVar4 = 0x20000;
  }
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = uVar4;
  }
  if (uVar2 == 0) {
    local_68 = 0;
    puStack_60 = &DAT_00000008;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puStack_60 = (undefined1 *)malloc(uVar2 << 3);
    local_68 = uVar4;
    if (puStack_60 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(8,uVar2 << 3);
    }
  }
  local_58 = 0;
  if ((lVar1 != 0) && (local_58 = 0, lVar1 != lVar5)) {
    lVar3 = param_2[2];
    do {
      lVar3 = lVar3 + 1;
      lVar1 = lVar1 + 0x20;
      param_2[2] = lVar3;
      *param_2 = lVar1;
                    /* try { // try from 00526b0c to 00526b33 has its CatchHandler @ 00526b8c */
      auVar6 = FUN_004ede58();
      uVar4 = local_58;
      uVar2 = auVar6._8_8_;
      if ((auVar6 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
        *param_1 = 0xffffffffffffffff;
        param_1[1] = uVar2;
        if (local_68 == 0) {
          return;
        }
        free(puStack_60);
        return;
      }
      if (uVar2 == 0) break;
      if (local_58 == local_68) {
        FUN_0053096c(&local_68);
      }
      local_58 = uVar4 + 1;
      *(ulong *)(puStack_60 + uVar4 * 8) = uVar2;
    } while (lVar1 != lVar5);
  }
  param_1[1] = (ulong)puStack_60;
  *param_1 = local_68;
  param_1[2] = local_58;
  return;
}


// ===== 00526ba8  FUN_00526ba8 =====

void FUN_00526ba8(ulong *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  char *pcVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  ulong local_88;
  undefined1 *puStack_80;
  ulong local_78;
  char local_70 [32];
  char *pcVar7;
  
  lVar2 = *param_2;
  pcVar7 = (char *)param_2[1];
  pcVar4 = (char *)param_2[3];
  uVar3 = (ulong)((long)pcVar4 - (long)pcVar7) >> 5;
  if (0x1ffff < uVar3) {
    uVar3 = 0x20000;
  }
  uVar1 = 0;
  if (lVar2 != 0) {
    uVar1 = uVar3;
  }
  if (uVar1 == 0) {
    local_88 = 0;
    puStack_80 = &DAT_00000008;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puStack_80 = (undefined1 *)malloc(uVar1 << 3);
    local_88 = uVar3;
    if (puStack_80 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(8,uVar1 << 3);
    }
  }
  local_78 = 0;
  if ((lVar2 != 0) && (local_78 = 0, pcVar7 != pcVar4)) {
    lVar2 = param_2[4];
    puVar5 = (undefined8 *)((ulong)local_70 | 1);
    do {
      lVar2 = lVar2 + 1;
      pcVar6 = pcVar7 + 0x20;
      local_70[0] = *pcVar7;
      param_2[1] = (long)pcVar6;
      if (local_70[0] == -1) break;
      uVar9 = *(undefined8 *)(pcVar7 + 9);
      uVar8 = *(undefined8 *)(pcVar7 + 1);
      uVar11 = *(undefined8 *)(pcVar7 + 0x18);
      uVar10 = *(undefined8 *)(pcVar7 + 0x10);
      param_2[4] = lVar2;
      puVar5[1] = uVar9;
      *puVar5 = uVar8;
      *(undefined8 *)((long)puVar5 + 0x17) = uVar11;
      *(undefined8 *)((long)puVar5 + 0xf) = uVar10;
                    /* try { // try from 00526c90 to 00526cbb has its CatchHandler @ 00526d14 */
      auVar12 = FUN_004c6614(local_70);
      uVar3 = local_78;
      uVar1 = auVar12._8_8_;
      if ((auVar12 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
        *param_1 = 0xffffffffffffffff;
        param_1[1] = uVar1;
        if (local_88 == 0) {
          return;
        }
        free(puStack_80);
        return;
      }
      if (uVar1 == 0) break;
      if (local_78 == local_88) {
        FUN_0053096c(&local_88);
      }
      local_78 = uVar3 + 1;
      *(ulong *)(puStack_80 + uVar3 * 8) = uVar1;
      pcVar7 = pcVar6;
    } while (pcVar6 != pcVar4);
  }
  param_1[1] = (ulong)puStack_80;
  *param_1 = local_88;
  param_1[2] = local_78;
  return;
}


// ===== 00526d30  FUN_00526d30 =====

void FUN_00526d30(ulong *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  char *pcVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  ulong local_88;
  undefined1 *puStack_80;
  ulong local_78;
  char local_70 [32];
  char *pcVar7;
  
  lVar2 = *param_2;
  pcVar7 = (char *)param_2[1];
  pcVar4 = (char *)param_2[3];
  uVar3 = (ulong)((long)pcVar4 - (long)pcVar7) >> 5;
  if (0x1ffff < uVar3) {
    uVar3 = 0x20000;
  }
  uVar1 = 0;
  if (lVar2 != 0) {
    uVar1 = uVar3;
  }
  if (uVar1 == 0) {
    local_88 = 0;
    puStack_80 = &DAT_00000008;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puStack_80 = (undefined1 *)malloc(uVar1 << 3);
    local_88 = uVar3;
    if (puStack_80 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(8,uVar1 << 3);
    }
  }
  local_78 = 0;
  if ((lVar2 != 0) && (local_78 = 0, pcVar7 != pcVar4)) {
    lVar2 = param_2[4];
    puVar5 = (undefined8 *)((ulong)local_70 | 1);
    do {
      lVar2 = lVar2 + 1;
      pcVar6 = pcVar7 + 0x20;
      local_70[0] = *pcVar7;
      param_2[1] = (long)pcVar6;
      if (local_70[0] == -1) break;
      uVar9 = *(undefined8 *)(pcVar7 + 9);
      uVar8 = *(undefined8 *)(pcVar7 + 1);
      uVar11 = *(undefined8 *)(pcVar7 + 0x18);
      uVar10 = *(undefined8 *)(pcVar7 + 0x10);
      param_2[4] = lVar2;
      puVar5[1] = uVar9;
      *puVar5 = uVar8;
      *(undefined8 *)((long)puVar5 + 0x17) = uVar11;
      *(undefined8 *)((long)puVar5 + 0xf) = uVar10;
                    /* try { // try from 00526e18 to 00526e43 has its CatchHandler @ 00526e9c */
      auVar12 = FUN_004c6614(local_70);
      uVar3 = local_78;
      uVar1 = auVar12._8_8_;
      if ((auVar12 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
        *param_1 = 0xffffffffffffffff;
        param_1[1] = uVar1;
        if (local_88 == 0) {
          return;
        }
        free(puStack_80);
        return;
      }
      if (uVar1 == 0) break;
      if (local_78 == local_88) {
        FUN_0053096c(&local_88);
      }
      local_78 = uVar3 + 1;
      *(ulong *)(puStack_80 + uVar3 * 8) = uVar1;
      pcVar7 = pcVar6;
    } while (pcVar6 != pcVar4);
  }
  param_1[1] = (ulong)puStack_80;
  *param_1 = local_88;
  param_1[2] = local_78;
  return;
}


// ===== 00526eb8  FUN_00526eb8 =====

void FUN_00526eb8(ulong *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  char *pcVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  ulong local_88;
  undefined1 *puStack_80;
  ulong local_78;
  char local_70 [32];
  char *pcVar7;
  
  lVar2 = *param_2;
  pcVar7 = (char *)param_2[1];
  pcVar4 = (char *)param_2[3];
  uVar3 = (ulong)((long)pcVar4 - (long)pcVar7) >> 5;
  if (0x1ffff < uVar3) {
    uVar3 = 0x20000;
  }
  uVar1 = 0;
  if (lVar2 != 0) {
    uVar1 = uVar3;
  }
  if (uVar1 == 0) {
    local_88 = 0;
    puStack_80 = &DAT_00000008;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puStack_80 = (undefined1 *)malloc(uVar1 << 3);
    local_88 = uVar3;
    if (puStack_80 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(8,uVar1 << 3);
    }
  }
  local_78 = 0;
  if ((lVar2 != 0) && (local_78 = 0, pcVar7 != pcVar4)) {
    lVar2 = param_2[4];
    puVar5 = (undefined8 *)((ulong)local_70 | 1);
    do {
      lVar2 = lVar2 + 1;
      pcVar6 = pcVar7 + 0x20;
      local_70[0] = *pcVar7;
      param_2[1] = (long)pcVar6;
      if (local_70[0] == -1) break;
      uVar9 = *(undefined8 *)(pcVar7 + 9);
      uVar8 = *(undefined8 *)(pcVar7 + 1);
      uVar11 = *(undefined8 *)(pcVar7 + 0x18);
      uVar10 = *(undefined8 *)(pcVar7 + 0x10);
      param_2[4] = lVar2;
      puVar5[1] = uVar9;
      *puVar5 = uVar8;
      *(undefined8 *)((long)puVar5 + 0x17) = uVar11;
      *(undefined8 *)((long)puVar5 + 0xf) = uVar10;
                    /* try { // try from 00526fa0 to 00526fcb has its CatchHandler @ 00527024 */
      auVar12 = FUN_004c6614(local_70);
      uVar3 = local_78;
      uVar1 = auVar12._8_8_;
      if ((auVar12 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
        *param_1 = 0xffffffffffffffff;
        param_1[1] = uVar1;
        if (local_88 == 0) {
          return;
        }
        free(puStack_80);
        return;
      }
      if (uVar1 == 0) break;
      if (local_78 == local_88) {
        FUN_0053096c(&local_88);
      }
      local_78 = uVar3 + 1;
      *(ulong *)(puStack_80 + uVar3 * 8) = uVar1;
      pcVar7 = pcVar6;
    } while (pcVar6 != pcVar4);
  }
  param_1[1] = (ulong)puStack_80;
  *param_1 = local_88;
  param_1[2] = local_78;
  return;
}


// ===== 00527040  FUN_00527040 =====

void FUN_00527040(ulong *param_1,long *param_2)

{
  ulong uVar1;
  char cVar2;
  undefined1 *puVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  char *pcVar7;
  char *pcVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong local_1f0;
  undefined1 *puStack_1e8;
  ulong local_1e0;
  long local_1d8;
  ulong uStack_1d0;
  long local_1c8;
  long lStack_1c0;
  long local_1b8;
  long lStack_1b0;
  long local_1a8;
  long lStack_1a0;
  long local_198;
  long lStack_190;
  long local_188;
  long lStack_180;
  long local_178;
  long lStack_170;
  long local_168;
  long lStack_160;
  long local_158;
  long lStack_150;
  long local_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long local_128;
  long local_120;
  ulong uStack_118;
  long local_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long local_f0;
  long lStack_e8;
  long lStack_e0;
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
  char *pcVar8;
  
  lVar4 = *param_2;
  pcVar8 = (char *)param_2[1];
  pcVar9 = (char *)param_2[3];
  uVar6 = (ulong)((long)pcVar9 - (long)pcVar8) >> 5;
  if (0x1641 < uVar6) {
    uVar6 = 0x1642;
  }
  uVar1 = 0;
  if (lVar4 != 0) {
    uVar1 = uVar6;
  }
  if (uVar1 == 0) {
    local_1f0 = 0;
    puStack_1e8 = &DAT_00000008;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puStack_1e8 = (undefined1 *)malloc(uVar1 * 0xb8);
    local_1f0 = uVar6;
    if (puStack_1e8 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(8,uVar1 * 0xb8);
    }
  }
  local_1e0 = 0;
  if ((lVar4 != 0) && (local_1e0 = 0, pcVar8 != pcVar9)) {
    lVar4 = param_2[4];
    puVar10 = (undefined8 *)((ulong)&local_1d8 | 1);
    do {
      lVar4 = lVar4 + 1;
      pcVar7 = pcVar8 + 0x20;
      cVar2 = *pcVar8;
      param_2[1] = (long)pcVar7;
      if (cVar2 == -1) break;
      local_1d8 = CONCAT71(local_1d8._1_7_,cVar2);
      uVar12 = *(undefined8 *)(pcVar8 + 9);
      uVar11 = *(undefined8 *)(pcVar8 + 1);
      param_2[4] = lVar4;
      puVar10[1] = uVar12;
      *puVar10 = uVar11;
      uVar11 = *(undefined8 *)(pcVar8 + 0x10);
      *(undefined8 *)((long)puVar10 + 0x17) = *(undefined8 *)(pcVar8 + 0x18);
      *(undefined8 *)((long)puVar10 + 0xf) = uVar11;
                    /* try { // try from 00527188 to 005271ab has its CatchHandler @ 005272d8 */
      FUN_004ce1e4(&local_120,&local_1d8,"ServerGuildRole",0xf,
                   &PTR_s_iddescriptionpermissionsflagsmen_00acede8,0xf);
      uVar6 = local_1e0;
      if (local_120 == 2) {
        lVar4 = local_1e0 + 1;
        *param_1 = 0xffffffffffffffff;
        param_1[1] = uStack_118;
        puVar3 = puStack_1e8;
        while (lVar4 = lVar4 + -1, lVar4 != 0) {
                    /* try { // try from 0052725c to 0052725f has its CatchHandler @ 0052729c */
          FUN_005254e4(puVar3);
          puVar3 = puVar3 + 0xb8;
        }
        if (local_1f0 == 0) {
          return;
        }
        free(puStack_1e8);
        return;
      }
      lStack_140 = lStack_88;
      local_148 = local_90;
      lStack_130 = lStack_78;
      lStack_138 = lStack_80;
      local_128 = local_70;
      local_1d8 = local_120;
      uStack_1d0 = uStack_118;
      lStack_180 = lStack_c8;
      local_188 = local_d0;
      lStack_170 = lStack_b8;
      local_178 = lStack_c0;
      lStack_160 = lStack_a8;
      local_168 = local_b0;
      lStack_150 = lStack_98;
      local_158 = lStack_a0;
      lStack_1c0 = lStack_108;
      local_1c8 = local_110;
      lStack_1b0 = lStack_f8;
      local_1b8 = lStack_100;
      lStack_1a0 = lStack_e8;
      local_1a8 = local_f0;
      lStack_190 = lStack_d8;
      local_198 = lStack_e0;
      if (local_1e0 == local_1f0) {
                    /* try { // try from 005271fc to 00527203 has its CatchHandler @ 00527288 */
        FUN_00530aa4(&local_1f0);
      }
      plVar5 = (long *)(puStack_1e8 + uVar6 * 0xb8);
      plVar5[5] = lStack_1b0;
      plVar5[4] = local_1b8;
      plVar5[7] = lStack_1a0;
      plVar5[6] = local_1a8;
      plVar5[3] = lStack_1c0;
      plVar5[2] = local_1c8;
      plVar5[0xd] = lStack_170;
      plVar5[0xc] = local_178;
      plVar5[0xf] = lStack_160;
      plVar5[0xe] = local_168;
      plVar5[9] = lStack_190;
      plVar5[8] = local_198;
      plVar5[0xb] = lStack_180;
      plVar5[10] = local_188;
      plVar5[1] = uStack_1d0;
      *plVar5 = local_1d8;
      plVar5[0x16] = local_128;
      local_1e0 = uVar6 + 1;
      plVar5[0x13] = lStack_140;
      plVar5[0x12] = local_148;
      plVar5[0x15] = lStack_130;
      plVar5[0x14] = lStack_138;
      plVar5[0x11] = lStack_150;
      plVar5[0x10] = local_158;
      pcVar8 = pcVar7;
    } while (pcVar7 != pcVar9);
  }
  param_1[1] = (ulong)puStack_1e8;
  *param_1 = local_1f0;
  param_1[2] = local_1e0;
  return;
}


// ===== 005272f0  FUN_005272f0 =====

void FUN_005272f0(ulong *param_1,long *param_2)

{
  ulong uVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  char *pcVar6;
  char *pcVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong local_120;
  undefined1 *puStack_118;
  ulong local_110;
  long local_108;
  ulong uStack_100;
  long local_f8;
  long lStack_f0;
  long local_e8;
  long lStack_e0;
  long local_d8;
  long lStack_d0;
  long local_c8;
  long lStack_c0;
  long local_b8;
  ulong uStack_b0;
  long local_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long local_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  char *pcVar7;
  
  lVar3 = *param_2;
  pcVar7 = (char *)param_2[1];
  pcVar8 = (char *)param_2[3];
  uVar5 = (ulong)((long)pcVar8 - (long)pcVar7) >> 5;
  if (0x3332 < uVar5) {
    uVar5 = 0x3333;
  }
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = uVar5;
  }
  if (uVar1 == 0) {
    local_120 = 0;
    puStack_118 = &DAT_00000008;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puStack_118 = (undefined1 *)malloc(uVar1 * 0x50);
    local_120 = uVar5;
    if (puStack_118 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(8,uVar1 * 0x50);
    }
  }
  local_110 = 0;
  if ((lVar3 != 0) && (local_110 = 0, pcVar7 != pcVar8)) {
    lVar3 = param_2[4];
    puVar9 = (undefined8 *)((ulong)&local_108 | 1);
    do {
      lVar3 = lVar3 + 1;
      pcVar6 = pcVar7 + 0x20;
      cVar2 = *pcVar7;
      param_2[1] = (long)pcVar6;
      if (cVar2 == -1) break;
      local_108 = CONCAT71(local_108._1_7_,cVar2);
      uVar11 = *(undefined8 *)(pcVar7 + 9);
      uVar10 = *(undefined8 *)(pcVar7 + 1);
      param_2[4] = lVar3;
      puVar9[1] = uVar11;
      *puVar9 = uVar10;
      uVar10 = *(undefined8 *)(pcVar7 + 0x10);
      *(undefined8 *)((long)puVar9 + 0x17) = *(undefined8 *)(pcVar7 + 0x18);
      *(undefined8 *)((long)puVar9 + 0xf) = uVar10;
                    /* try { // try from 00527410 to 0052742f has its CatchHandler @ 00527504 */
      FUN_004d0ba8(&local_b8,&local_108,&DAT_002a0960,0x10,&PTR_DAT_00acebb8,8);
      uVar5 = local_110;
      if (local_b8 == 2) {
        *param_1 = 0xffffffffffffffff;
        param_1[1] = uStack_b0;
                    /* try { // try from 005274ac to 005274b3 has its CatchHandler @ 005274d4 */
        FUN_0052b170(&local_120);
        if (local_120 == 0) {
          return;
        }
        free(puStack_118);
        return;
      }
      lStack_f0 = lStack_a0;
      local_f8 = local_a8;
      lStack_e0 = lStack_90;
      local_e8 = lStack_98;
      local_108 = local_b8;
      uStack_100 = uStack_b0;
      lStack_d0 = lStack_80;
      local_d8 = local_88;
      lStack_c0 = lStack_70;
      local_c8 = lStack_78;
      if (local_110 == local_120) {
                    /* try { // try from 00527460 to 00527467 has its CatchHandler @ 005274f0 */
        FUN_00530b0c(&local_120);
      }
      local_110 = uVar5 + 1;
      plVar4 = (long *)(puStack_118 + uVar5 * 0x50);
      plVar4[1] = uStack_100;
      *plVar4 = local_108;
      plVar4[3] = lStack_f0;
      plVar4[2] = local_f8;
      plVar4[5] = lStack_e0;
      plVar4[4] = local_e8;
      plVar4[7] = lStack_d0;
      plVar4[6] = local_d8;
      plVar4[9] = lStack_c0;
      plVar4[8] = local_c8;
      pcVar7 = pcVar6;
    } while (pcVar6 != pcVar8);
  }
  param_1[1] = (ulong)puStack_118;
  *param_1 = local_120;
  param_1[2] = local_110;
  return;
}


// ===== 0052751c  FUN_0052751c =====

void FUN_0052751c(ulong *param_1,long *param_2)

{
  ulong uVar1;
  char cVar2;
  undefined1 *puVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  char *pcVar7;
  char *pcVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong local_160;
  undefined1 *puStack_158;
  ulong local_150;
  long local_148;
  ulong uStack_140;
  long local_138;
  long lStack_130;
  long local_128;
  long lStack_120;
  long local_118;
  long lStack_110;
  long local_108;
  long lStack_100;
  long local_f8;
  long lStack_f0;
  long local_e8;
  long lStack_e0;
  long local_d8;
  ulong uStack_d0;
  long local_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long local_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long local_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  char *pcVar8;
  
  lVar4 = *param_2;
  pcVar8 = (char *)param_2[1];
  pcVar9 = (char *)param_2[3];
  uVar6 = (ulong)((long)pcVar9 - (long)pcVar8) >> 5;
  if (0x2491 < uVar6) {
    uVar6 = 0x2492;
  }
  uVar1 = 0;
  if (lVar4 != 0) {
    uVar1 = uVar6;
  }
  if (uVar1 == 0) {
    local_160 = 0;
    puStack_158 = &DAT_00000008;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puStack_158 = (undefined1 *)malloc(uVar1 * 0x70);
    local_160 = uVar6;
    if (puStack_158 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(8,uVar1 * 0x70);
    }
  }
  local_150 = 0;
  if ((lVar4 != 0) && (local_150 = 0, pcVar8 != pcVar9)) {
    lVar4 = param_2[4];
    puVar10 = (undefined8 *)((ulong)&local_148 | 1);
    do {
      lVar4 = lVar4 + 1;
      pcVar7 = pcVar8 + 0x20;
      cVar2 = *pcVar8;
      param_2[1] = (long)pcVar7;
      if (cVar2 == -1) break;
      local_148 = CONCAT71(local_148._1_7_,cVar2);
      uVar12 = *(undefined8 *)(pcVar8 + 9);
      uVar11 = *(undefined8 *)(pcVar8 + 1);
      param_2[4] = lVar4;
      puVar10[1] = uVar12;
      *puVar10 = uVar11;
      uVar11 = *(undefined8 *)(pcVar8 + 0x10);
      *(undefined8 *)((long)puVar10 + 0x17) = *(undefined8 *)(pcVar8 + 0x18);
      *(undefined8 *)((long)puVar10 + 0xf) = uVar11;
                    /* try { // try from 00527648 to 00527667 has its CatchHandler @ 0052777c */
      FUN_004d2ac4(&local_d8,&local_148,
                   "ServerGuildStickerformat_typeavailableuser_idGuildStickersUpdateGuildStickersCreateSuccessstickerGuildStickerFetchSuccessGuildStickersFetchSuccessCachedStickersLoaded"
                   ,0x12,&PTR_s_iddescriptionpermissionsflagsmen_00acef18,9);
      uVar6 = local_150;
      if (local_d8 == 2) {
        lVar4 = local_150 + 1;
        *param_1 = 0xffffffffffffffff;
        param_1[1] = uStack_d0;
        puVar3 = puStack_158;
        while (lVar4 = lVar4 + -1, lVar4 != 0) {
                    /* try { // try from 00527700 to 00527703 has its CatchHandler @ 00527740 */
          FUN_00524f38(puVar3);
          puVar3 = puVar3 + 0x70;
        }
        if (local_160 == 0) {
          return;
        }
        free(puStack_158);
        return;
      }
      lStack_110 = lStack_a0;
      local_118 = local_a8;
      lStack_100 = lStack_90;
      local_108 = lStack_98;
      local_148 = local_d8;
      uStack_140 = uStack_d0;
      lStack_f0 = lStack_80;
      local_f8 = local_88;
      lStack_e0 = lStack_70;
      local_e8 = lStack_78;
      lStack_130 = lStack_c0;
      local_138 = local_c8;
      lStack_120 = lStack_b0;
      local_128 = lStack_b8;
      if (local_150 == local_160) {
                    /* try { // try from 005276a0 to 005276a7 has its CatchHandler @ 0052772c */
        FUN_00530b74(&local_160);
      }
      local_150 = uVar6 + 1;
      plVar5 = (long *)(puStack_158 + uVar6 * 0x70);
      plVar5[1] = uStack_140;
      *plVar5 = local_148;
      plVar5[3] = lStack_130;
      plVar5[2] = local_138;
      plVar5[5] = lStack_120;
      plVar5[4] = local_128;
      plVar5[7] = lStack_110;
      plVar5[6] = local_118;
      plVar5[9] = lStack_100;
      plVar5[8] = local_108;
      plVar5[0xb] = lStack_f0;
      plVar5[10] = local_f8;
      plVar5[0xd] = lStack_e0;
      plVar5[0xc] = local_e8;
      pcVar8 = pcVar7;
    } while (pcVar7 != pcVar9);
  }
  param_1[1] = (ulong)puStack_158;
  *param_1 = local_160;
  param_1[2] = local_150;
  return;
}


// ===== 00527794  FUN_00527794 =====

void FUN_00527794(ulong *param_1,long *param_2)

{
  ulong uVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  char *pcVar5;
  undefined8 *puVar6;
  long lVar7;
  char *pcVar8;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong local_510;
  undefined1 *puStack_508;
  ulong local_500;
  long local_4f8;
  ulong uStack_4f0;
  undefined1 auStack_4e8 [568];
  long local_2b0;
  ulong local_2a8;
  undefined1 auStack_2a0 [576];
  char *pcVar9;
  
  lVar3 = *param_2;
  pcVar9 = (char *)param_2[1];
  pcVar5 = (char *)param_2[3];
  uVar4 = (ulong)((long)pcVar5 - (long)pcVar9) >> 5;
  if (0x702 < uVar4) {
    uVar4 = 0x703;
  }
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = uVar4;
  }
  if (uVar1 == 0) {
    local_510 = 0;
    puStack_508 = &DAT_00000008;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puStack_508 = (undefined1 *)malloc(uVar1 * 0x248);
    local_510 = uVar4;
    if (puStack_508 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(8,uVar1 * 0x248);
    }
  }
  local_500 = 0;
  if ((lVar3 != 0) && (local_500 = 0, pcVar9 != pcVar5)) {
    lVar3 = param_2[4];
    puVar6 = (undefined8 *)((ulong)&local_4f8 | 1);
    do {
      lVar3 = lVar3 + 1;
      pcVar8 = pcVar9 + 0x20;
      cVar2 = *pcVar9;
      param_2[1] = (long)pcVar8;
      if (cVar2 == -1) break;
      local_4f8 = CONCAT71(local_4f8._1_7_,cVar2);
      uVar11 = *(undefined8 *)(pcVar9 + 9);
      uVar10 = *(undefined8 *)(pcVar9 + 1);
      param_2[4] = lVar3;
      puVar6[1] = uVar11;
      *puVar6 = uVar10;
      uVar10 = *(undefined8 *)(pcVar9 + 0x10);
      *(undefined8 *)((long)puVar6 + 0x17) = *(undefined8 *)(pcVar9 + 0x18);
      *(undefined8 *)((long)puVar6 + 0xf) = uVar10;
                    /* try { // try from 00527898 to 005278a3 has its CatchHandler @ 00527954 */
      FUN_004c7f00(&local_2b0,&local_4f8);
      uVar4 = local_2a8;
      lVar7 = local_2b0;
      if (local_2b0 == 2) {
        *param_1 = 0xffffffffffffffff;
        param_1[1] = local_2a8;
        FUN_0052397c(&local_510);
        return;
      }
      memcpy(auStack_4e8,auStack_2a0,0x238);
      uVar1 = local_500;
      local_4f8 = lVar7;
      uStack_4f0 = uVar4;
      if (local_500 == local_510) {
                    /* try { // try from 005278dc to 005278e3 has its CatchHandler @ 00527940 */
        FUN_00530bdc(&local_510);
      }
      memcpy(puStack_508 + uVar1 * 0x248,&local_4f8,0x248);
      local_500 = uVar1 + 1;
      pcVar9 = pcVar8;
    } while (pcVar8 != pcVar5);
  }
  param_1[1] = (ulong)puStack_508;
  *param_1 = local_510;
  param_1[2] = local_500;
  return;
}


// ===== 0052796c  FUN_0052796c =====

void FUN_0052796c(ulong *param_1,long *param_2)

{
  ulong uVar1;
  char cVar2;
  undefined1 *puVar3;
  long lVar4;
  ulong uVar5;
  char *pcVar6;
  undefined8 *puVar7;
  long lVar8;
  char *pcVar9;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong local_540;
  undefined1 *puStack_538;
  ulong local_530;
  long local_528;
  ulong uStack_520;
  undefined1 auStack_518 [592];
  long local_2c8;
  ulong local_2c0;
  undefined1 auStack_2b8 [600];
  char *pcVar10;
  
  lVar4 = *param_2;
  pcVar10 = (char *)param_2[1];
  pcVar6 = (char *)param_2[3];
  uVar5 = (ulong)((long)pcVar6 - (long)pcVar10) >> 5;
  if (0x6bb < uVar5) {
    uVar5 = 0x6bc;
  }
  uVar1 = 0;
  if (lVar4 != 0) {
    uVar1 = uVar5;
  }
  if (uVar1 == 0) {
    local_540 = 0;
    puStack_538 = &DAT_00000008;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puStack_538 = (undefined1 *)malloc(uVar1 * 0x260);
    local_540 = uVar5;
    if (puStack_538 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(8,uVar1 * 0x260);
    }
  }
  local_530 = 0;
  if ((lVar4 != 0) && (local_530 = 0, pcVar10 != pcVar6)) {
    lVar4 = param_2[4];
    puVar7 = (undefined8 *)((ulong)&local_528 | 1);
    do {
      lVar4 = lVar4 + 1;
      pcVar9 = pcVar10 + 0x20;
      cVar2 = *pcVar10;
      param_2[1] = (long)pcVar9;
      if (cVar2 == -1) break;
      local_528 = CONCAT71(local_528._1_7_,cVar2);
      uVar12 = *(undefined8 *)(pcVar10 + 9);
      uVar11 = *(undefined8 *)(pcVar10 + 1);
      param_2[4] = lVar4;
      puVar7[1] = uVar12;
      *puVar7 = uVar11;
      uVar11 = *(undefined8 *)(pcVar10 + 0x10);
      *(undefined8 *)((long)puVar7 + 0x17) = *(undefined8 *)(pcVar10 + 0x18);
      *(undefined8 *)((long)puVar7 + 0xf) = uVar11;
                    /* try { // try from 00527a70 to 00527a7b has its CatchHandler @ 00527b90 */
      FUN_0054e9cc(&local_2c8,&local_528);
      uVar5 = local_2c0;
      lVar8 = local_2c8;
      if (local_2c8 == -1) {
        lVar4 = local_530 + 1;
        *param_1 = 0xffffffffffffffff;
        param_1[1] = local_2c0;
        puVar3 = puStack_538;
        while (lVar4 = lVar4 + -1, lVar4 != 0) {
                    /* try { // try from 00527b14 to 00527b17 has its CatchHandler @ 00527b54 */
          FUN_00525c7c(puVar3);
          puVar3 = puVar3 + 0x260;
        }
        if (local_540 == 0) {
          return;
        }
        free(puStack_538);
        return;
      }
      memcpy(auStack_518,auStack_2b8,0x250);
      uVar1 = local_530;
      local_528 = lVar8;
      uStack_520 = uVar5;
      if (local_530 == local_540) {
                    /* try { // try from 00527ab4 to 00527abb has its CatchHandler @ 00527b40 */
        FUN_00530c44(&local_540);
      }
      memcpy(puStack_538 + uVar1 * 0x260,&local_528,0x260);
      local_530 = uVar1 + 1;
      pcVar10 = pcVar9;
    } while (pcVar9 != pcVar6);
  }
  param_1[1] = (ulong)puStack_538;
  *param_1 = local_540;
  param_1[2] = local_530;
  return;
}


// ===== 00527ba8  FUN_00527ba8 =====

void FUN_00527ba8(ulong *param_1,long *param_2)

{
  ulong uVar1;
  char cVar2;
  undefined1 *puVar3;
  long lVar4;
  ulong uVar5;
  char *pcVar6;
  undefined8 *puVar7;
  long lVar8;
  char *pcVar9;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong local_630;
  undefined1 *puStack_628;
  ulong local_620;
  long local_618;
  ulong uStack_610;
  undefined1 auStack_608 [712];
  long local_340;
  ulong local_338;
  undefined1 auStack_330 [720];
  char *pcVar10;
  
  lVar4 = *param_2;
  pcVar10 = (char *)param_2[1];
  pcVar6 = (char *)param_2[3];
  uVar5 = (ulong)((long)pcVar6 - (long)pcVar10) >> 5;
  if (0x59f < uVar5) {
    uVar5 = 0x5a0;
  }
  uVar1 = 0;
  if (lVar4 != 0) {
    uVar1 = uVar5;
  }
  if (uVar1 == 0) {
    local_630 = 0;
    puStack_628 = &DAT_00000008;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puStack_628 = (undefined1 *)malloc(uVar1 * 0x2d8);
    local_630 = uVar5;
    if (puStack_628 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(8,uVar1 * 0x2d8);
    }
  }
  local_620 = 0;
  if ((lVar4 != 0) && (local_620 = 0, pcVar10 != pcVar6)) {
    lVar4 = param_2[4];
    puVar7 = (undefined8 *)((ulong)&local_618 | 1);
    do {
      lVar4 = lVar4 + 1;
      pcVar9 = pcVar10 + 0x20;
      cVar2 = *pcVar10;
      param_2[1] = (long)pcVar9;
      if (cVar2 == -1) break;
      local_618 = CONCAT71(local_618._1_7_,cVar2);
      uVar12 = *(undefined8 *)(pcVar10 + 9);
      uVar11 = *(undefined8 *)(pcVar10 + 1);
      param_2[4] = lVar4;
      puVar7[1] = uVar12;
      *puVar7 = uVar11;
      uVar11 = *(undefined8 *)(pcVar10 + 0x10);
      *(undefined8 *)((long)puVar7 + 0x17) = *(undefined8 *)(pcVar10 + 0x18);
      *(undefined8 *)((long)puVar7 + 0xf) = uVar11;
                    /* try { // try from 00527cac to 00527cb7 has its CatchHandler @ 00527dcc */
      FUN_004c86d0(&local_340,&local_618);
      uVar5 = local_338;
      lVar8 = local_340;
      if (local_340 == -1) {
        lVar4 = local_620 + 1;
        *param_1 = 0xffffffffffffffff;
        param_1[1] = local_338;
        puVar3 = puStack_628;
        while (lVar4 = lVar4 + -1, lVar4 != 0) {
                    /* try { // try from 00527d50 to 00527d53 has its CatchHandler @ 00527d90 */
          FUN_00525d9c(puVar3);
          puVar3 = puVar3 + 0x2d8;
        }
        if (local_630 == 0) {
          return;
        }
        free(puStack_628);
        return;
      }
      memcpy(auStack_608,auStack_330,0x2c8);
      uVar1 = local_620;
      local_618 = lVar8;
      uStack_610 = uVar5;
      if (local_620 == local_630) {
                    /* try { // try from 00527cf0 to 00527cf7 has its CatchHandler @ 00527d7c */
        FUN_00530cac(&local_630);
      }
      memcpy(puStack_628 + uVar1 * 0x2d8,&local_618,0x2d8);
      local_620 = uVar1 + 1;
      pcVar10 = pcVar9;
    } while (pcVar9 != pcVar6);
  }
  param_1[1] = (ulong)puStack_628;
  *param_1 = local_630;
  param_1[2] = local_620;
  return;
}


// ===== 00527de4  FUN_00527de4 =====

void FUN_00527de4(ulong *param_1,long *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  char cVar3;
  long lVar4;
  ulong uVar5;
  char *pcVar6;
  undefined8 *puVar7;
  char *pcVar8;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong local_b8;
  undefined1 *puStack_b0;
  ulong local_a8;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  ulong uStack_88;
  ulong local_80;
  ulong uStack_78;
  ulong local_70;
  ulong uStack_68;
  char *pcVar9;
  
  lVar4 = *param_2;
  pcVar9 = (char *)param_2[1];
  pcVar6 = (char *)param_2[3];
  uVar5 = (ulong)((long)pcVar6 - (long)pcVar9) >> 5;
  if (0x7fff < uVar5) {
    uVar5 = 0x8000;
  }
  uVar2 = 0;
  if (lVar4 != 0) {
    uVar2 = uVar5;
  }
  if (uVar2 == 0) {
    local_b8 = 0;
    puStack_b0 = &DAT_00000008;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puStack_b0 = (undefined1 *)malloc(uVar2 << 5);
    local_b8 = uVar5;
    if (puStack_b0 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(8,uVar2 << 5);
    }
  }
  local_a8 = 0;
  if ((lVar4 != 0) && (local_a8 = 0, pcVar9 != pcVar6)) {
    lVar4 = param_2[4];
    puVar7 = (undefined8 *)((ulong)&local_80 | 1);
    do {
      lVar4 = lVar4 + 1;
      pcVar8 = pcVar9 + 0x20;
      cVar3 = *pcVar9;
      param_2[1] = (long)pcVar8;
      if (cVar3 == -1) break;
      uVar11 = *(undefined8 *)(pcVar9 + 9);
      uVar10 = *(undefined8 *)(pcVar9 + 1);
      uVar13 = *(undefined8 *)(pcVar9 + 0x18);
      uVar12 = *(undefined8 *)(pcVar9 + 0x10);
      param_2[4] = lVar4;
      local_80 = CONCAT71(local_80._1_7_,cVar3);
      puVar7[1] = uVar11;
      *puVar7 = uVar10;
      *(undefined8 *)((long)puVar7 + 0x17) = uVar13;
      *(undefined8 *)((long)puVar7 + 0xf) = uVar12;
                    /* try { // try from 00527edc to 00527eeb has its CatchHandler @ 00527f88 */
      FUN_004cbc2c(&local_a0,&local_80,2);
      uVar5 = local_a8;
      if (local_98 == 0xffffffffffffffff) {
        *param_1 = 0xffffffffffffffff;
        param_1[1] = local_a0;
        FUN_00523d34(&local_b8);
        return;
      }
      local_80 = local_a0;
      uStack_68 = uStack_88;
      local_70 = local_90;
      uStack_78 = local_98;
      if (local_a8 == local_b8) {
                    /* try { // try from 00527f14 to 00527f1b has its CatchHandler @ 00527f74 */
        FUN_00530d14(&local_b8);
      }
      local_a8 = uVar5 + 1;
      puVar1 = (ulong *)(puStack_b0 + uVar5 * 0x20);
      puVar1[1] = uStack_78;
      *puVar1 = local_80;
      puVar1[3] = uStack_68;
      puVar1[2] = local_70;
      pcVar9 = pcVar8;
    } while (pcVar8 != pcVar6);
  }
  param_1[1] = (ulong)puStack_b0;
  *param_1 = local_b8;
  param_1[2] = local_a8;
  return;
}


// ===== 00527fa0  FUN_00527fa0 =====

void FUN_00527fa0(ulong *param_1,long *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  char cVar3;
  long lVar4;
  ulong uVar5;
  char *pcVar6;
  undefined8 *puVar7;
  char *pcVar8;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong local_b8;
  undefined1 *puStack_b0;
  ulong local_a8;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  ulong uStack_88;
  ulong local_80;
  ulong uStack_78;
  ulong local_70;
  ulong uStack_68;
  char *pcVar9;
  
  lVar4 = *param_2;
  pcVar9 = (char *)param_2[1];
  pcVar6 = (char *)param_2[3];
  uVar5 = (ulong)((long)pcVar6 - (long)pcVar9) >> 5;
  if (0x7fff < uVar5) {
    uVar5 = 0x8000;
  }
  uVar2 = 0;
  if (lVar4 != 0) {
    uVar2 = uVar5;
  }
  if (uVar2 == 0) {
    local_b8 = 0;
    puStack_b0 = &DAT_00000008;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puStack_b0 = (undefined1 *)malloc(uVar2 << 5);
    local_b8 = uVar5;
    if (puStack_b0 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(8,uVar2 << 5);
    }
  }
  local_a8 = 0;
  if ((lVar4 != 0) && (local_a8 = 0, pcVar9 != pcVar6)) {
    lVar4 = param_2[4];
    puVar7 = (undefined8 *)((ulong)&local_80 | 1);
    do {
      lVar4 = lVar4 + 1;
      pcVar8 = pcVar9 + 0x20;
      cVar3 = *pcVar9;
      param_2[1] = (long)pcVar8;
      if (cVar3 == -1) break;
      uVar11 = *(undefined8 *)(pcVar9 + 9);
      uVar10 = *(undefined8 *)(pcVar9 + 1);
      uVar13 = *(undefined8 *)(pcVar9 + 0x18);
      uVar12 = *(undefined8 *)(pcVar9 + 0x10);
      param_2[4] = lVar4;
      local_80 = CONCAT71(local_80._1_7_,cVar3);
      puVar7[1] = uVar11;
      *puVar7 = uVar10;
      *(undefined8 *)((long)puVar7 + 0x17) = uVar13;
      *(undefined8 *)((long)puVar7 + 0xf) = uVar12;
                    /* try { // try from 00528098 to 005280a7 has its CatchHandler @ 00528170 */
      FUN_004cbe90(&local_a0,&local_80,2);
      uVar5 = local_a8;
      if (local_98 == 0xffffffffffffffff) {
        *param_1 = 0xffffffffffffffff;
        param_1[1] = local_a0;
                    /* try { // try from 00528118 to 0052811f has its CatchHandler @ 00528140 */
        FUN_0052b3c4(&local_b8);
        if (local_b8 == 0) {
          return;
        }
        free(puStack_b0);
        return;
      }
      local_80 = local_a0;
      uStack_68 = uStack_88;
      local_70 = local_90;
      uStack_78 = local_98;
      if (local_a8 == local_b8) {
                    /* try { // try from 005280d0 to 005280d7 has its CatchHandler @ 0052815c */
        FUN_00530d14(&local_b8);
      }
      local_a8 = uVar5 + 1;
      puVar1 = (ulong *)(puStack_b0 + uVar5 * 0x20);
      puVar1[1] = uStack_78;
      *puVar1 = local_80;
      puVar1[3] = uStack_68;
      puVar1[2] = local_70;
      pcVar9 = pcVar8;
    } while (pcVar8 != pcVar6);
  }
  param_1[1] = (ulong)puStack_b0;
  *param_1 = local_b8;
  param_1[2] = local_a8;
  return;
}


// ===== 00528188  FUN_00528188 =====

void FUN_00528188(undefined1 *param_1,char *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 uStack_1;
  
  if (*param_2 == '\0') {
    cVar1 = param_2[1];
    *param_1 = 0;
    param_1[1] = cVar1;
    FUN_004c04ac();
    return;
  }
  uStack_38 = *(undefined8 *)(param_2 + 8);
  local_40 = *(undefined8 *)param_2;
  uStack_28 = *(undefined8 *)(param_2 + 0x18);
  uStack_30 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = FUN_004f6fb8(&local_40,&uStack_1,&DAT_00acb0a8);
  *(undefined8 *)(param_1 + 8) = uVar2;
  *param_1 = 1;
  return;
}


// ===== 005281ec  FUN_005281ec =====

void FUN_005281ec(size_t *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *__dest;
  size_t sVar1;
  long local_68;
  void *local_60;
  size_t local_58;
  undefined1 local_50 [8];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 uStack_31;
  
  core::str::converts::from_utf8(&local_68);
  if (local_68 == 1) {
    local_50[0] = 6;
    local_48 = param_2;
    uStack_40 = param_3;
    sVar1 = <serde_json::error::Error_as_serde::de::Error>::invalid_value
                      (local_50,&uStack_31,&DAT_00ace058);
    *param_1 = 0xffffffffffffffff;
    param_1[1] = sVar1;
    return;
  }
  if ((long)local_58 < 0) {
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(0,local_58);
  }
  if (local_58 == 0) {
    __dest = &DAT_00000001;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    __dest = (undefined1 *)malloc(local_58);
    if (__dest == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(1,local_58);
    }
    memcpy(__dest,local_60,local_58);
  }
  *param_1 = local_58;
  param_1[1] = (size_t)__dest;
  param_1[2] = local_58;
  return;
}


// ===== 005282c8  FUN_005282c8 =====

void FUN_005282c8(long *param_1,long *param_2)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  long local_70;
  long lStack_68;
  uint local_58 [2];
  void *local_50;
  long lStack_48;
  undefined1 uStack_21;
  
  __ptr = (void *)param_2[1];
  lVar1 = param_2[2];
                    /* try { // try from 005282f0 to 005282ff has its CatchHandler @ 005283ac */
  core::str::converts::from_utf8(local_58,__ptr,lVar1);
  if ((local_58[0] & 1) == 0) {
    lStack_68 = param_2[1];
    local_70 = *param_2;
    local_50 = (void *)lVar1;
  }
  else {
    lVar2 = *param_2;
    lStack_68 = param_2[2];
    local_70 = param_2[1];
    if (lVar2 != -1) {
      local_58[0] = CONCAT31(local_58[0]._1_3_,6);
                    /* try { // try from 00528360 to 00528373 has its CatchHandler @ 005283a0 */
      local_50 = __ptr;
      lStack_48 = lVar1;
      lVar1 = <serde_json::error::Error_as_serde::de::Error>::invalid_value
                        (local_58,&uStack_21,&DAT_00ace058);
      *param_1 = -1;
      param_1[1] = lVar1;
      if (lVar2 == 0) {
        return;
      }
      free(__ptr);
      return;
    }
  }
  param_1[2] = (long)local_50;
  param_1[1] = lStack_68;
  *param_1 = local_70;
  return;
}


// ===== 005283c8  FUN_005283c8 =====

void FUN_005283c8(undefined1 param_1)

{
  int iVar1;
  undefined1 local_64 [4];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 *local_30;
  undefined **ppuStack_28;
  undefined8 local_20;
  undefined1 uStack_11;
  
  local_48 = 0;
  uStack_40 = 1;
  local_20 = 0x60000020;
  local_30 = &local_48;
  local_38 = 0;
  ppuStack_28 = &PTR_FUN_00ace240;
                    /* try { // try from 00528400 to 0052840b has its CatchHandler @ 0052845c */
  local_64[0] = param_1;
  iVar1 = <chrono::format::ParseError_as_core::fmt::Display>::fmt(local_64,&local_30);
  if (iVar1 == 0) {
    uStack_58 = uStack_40;
    local_60 = local_48;
    local_50 = local_38;
    serde_json::error::make_error(&local_60);
    return;
  }
                    /* try { // try from 00528434 to 00528457 has its CatchHandler @ 0052845c */
                    /* WARNING: Subroutine does not return */
  core::result::unwrap_failed
            ("a Display implementation returned an error unexpectedly",0x37,&uStack_11,&DAT_00ace0f0
             ,&PTR_s__nix_store_8006w282fgsx3273c878b_00ace270);
}


// ===== 0052847c  FUN_0052847c =====

void FUN_0052847c(void *param_1,ulong param_2)

{
  undefined1 *__dest;
  ulong local_48;
  undefined1 *puStack_40;
  ulong local_38;
  
  if ((param_2 & 1) == 0) {
    alloc::fmt::format::format_inner(&local_48);
  }
  else {
    param_2 = param_2 >> 1;
    local_48 = param_2;
    local_38 = param_2;
    if (param_2 == 0) {
      puStack_40 = &DAT_00000001;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      __dest = (undefined1 *)malloc(param_2);
      if (__dest == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        alloc::raw_vec::handle_error(1,param_2);
      }
      memcpy(__dest,param_1,param_2);
      puStack_40 = __dest;
    }
  }
  serde_json::error::make_error(&local_48);
  return;
}


// ===== 00528504  FUN_00528504 =====

void FUN_00528504(void *param_1,size_t param_2)

{
  undefined1 *__dest;
  size_t local_48;
  undefined1 *puStack_40;
  size_t local_38;
  
  if ((long)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(0,param_2);
  }
  if (param_2 == 0) {
    __dest = &DAT_00000001;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    __dest = (undefined1 *)malloc(param_2);
    if (__dest == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(1,param_2);
    }
    memcpy(__dest,param_1,param_2);
  }
  local_48 = param_2;
  puStack_40 = __dest;
  local_38 = param_2;
  serde_json::error::make_error(&local_48);
  return;
}


// ===== 0052858c  FUN_0052858c =====

void FUN_0052858c(undefined8 param_1,undefined1 param_2)

{
  undefined1 local_5c [4];
  undefined1 auStack_58 [24];
  undefined8 local_40;
  undefined *puStack_38;
  undefined1 *local_30;
  code *pcStack_28;
  undefined *local_20;
  code *pcStack_18;
  
  local_30 = local_5c;
  puStack_38 = PTR_fmt_00b00c40;
  pcStack_28 = FUN_0052ab1c;
  local_20 = &DAT_002c1025;
  pcStack_18 = FUN_0052ab1c;
  local_5c[0] = param_2;
  local_40 = param_1;
  alloc::fmt::format::format_inner(auStack_58,&DAT_002a27fe,&local_40);
  FUN_00514d60(auStack_58);
  return;
}


// ===== 005285ec  FUN_005285ec =====

void FUN_005285ec(long *param_1)

{
  ulong *puVar1;
  long *plVar2;
  ulong *puVar3;
  bool bVar4;
  char cVar5;
  ulong uVar6;
  bool bVar7;
  void *pvVar8;
  void *pvVar9;
  void *pvVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  
  puVar1 = (ulong *)(param_1 + 1);
  do {
    uVar11 = *puVar1;
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *puVar1 = uVar11 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  pvVar8 = (void *)*param_1;
  uVar12 = uVar11 & 0xffffffffffffffe0;
  uVar6 = uVar12 - *(long *)((long)pvVar8 + 0x600);
  if (uVar6 != 0) {
    bVar7 = (uVar11 & 0x1f) < uVar6 >> 5;
    pvVar9 = pvVar8;
LAB_00528680:
    do {
      plVar2 = (long *)((long)pvVar9 + 0x608);
      pvVar8 = (void *)*plVar2;
      if ((void *)*plVar2 == (void *)0x0) {
        lVar13 = *(long *)((long)pvVar9 + 0x600);
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        pvVar10 = malloc(0x620);
        if (pvVar10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          alloc::alloc::handle_alloc_error(8,0x620);
        }
        *(undefined8 *)((long)pvVar10 + 0x608) = 0;
        *(long *)((long)pvVar10 + 0x600) = lVar13 + 0x20;
        *(undefined8 *)((long)pvVar10 + 0x618) = 0;
        *(undefined8 *)((long)pvVar10 + 0x610) = 0;
LAB_005286b8:
        pvVar8 = (void *)*plVar2;
        if (pvVar8 == (void *)0x0) goto code_r0x005286c0;
        ClearExclusiveLocal();
        plVar2 = (long *)((long)pvVar8 + 0x608);
        *(long *)((long)pvVar10 + 0x600) = *(long *)((long)pvVar8 + 0x600) + 0x20;
        do {
          lVar13 = *plVar2;
          if (lVar13 != 0) {
            ClearExclusiveLocal();
            do {
              InstructionSynchronizationBarrier();
              *(long *)((long)pvVar10 + 0x600) = *(long *)(lVar13 + 0x600) + 0x20;
              plVar2 = (long *)(lVar13 + 0x608);
              while (lVar13 = *plVar2, lVar13 == 0) {
                cVar5 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar4) {
                  *plVar2 = (long)pvVar10;
                  cVar5 = ExclusiveMonitorsStatus();
                }
                if (cVar5 == '\0') goto LAB_00528744;
              }
              ClearExclusiveLocal();
            } while( true );
          }
          cVar5 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = (long)pvVar10;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
LAB_00528744:
      puVar3 = (ulong *)((long)pvVar9 + 0x610);
      if ((bool)(bVar7 & (int)*puVar3 == -1)) {
        do {
          if ((void *)*param_1 != pvVar9) {
            ClearExclusiveLocal();
            goto LAB_0052866c;
          }
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(param_1,0x10);
          if (bVar7) {
            *param_1 = (long)pvVar8;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        do {
          uVar11 = *puVar1;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar7) {
            *puVar1 = uVar11;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        *(ulong *)((long)pvVar9 + 0x618) = uVar11;
        do {
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar7) {
            *puVar3 = *puVar3 | 0x100000000;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        bVar7 = true;
        InstructionSynchronizationBarrier();
        pvVar9 = pvVar8;
        if (*(ulong *)((long)pvVar8 + 0x600) == uVar12) break;
        goto LAB_00528680;
      }
LAB_0052866c:
      bVar7 = false;
      InstructionSynchronizationBarrier();
      pvVar9 = pvVar8;
    } while (*(ulong *)((long)pvVar8 + 0x600) != uVar12);
  }
  puVar1 = (ulong *)((long)pvVar8 + 0x610);
  do {
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *puVar1 = *puVar1 | 0x200000000;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  return;
code_r0x005286c0:
  cVar5 = '\x01';
  bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
  if (bVar4) {
    *plVar2 = (long)pvVar10;
    cVar5 = ExclusiveMonitorsStatus();
  }
  pvVar8 = pvVar10;
  if (cVar5 == '\0') goto LAB_00528744;
  goto LAB_005286b8;
}


// ===== 005287c4  FUN_005287c4 =====

void FUN_005287c4(long *param_1)

{
  ulong *puVar1;
  long *plVar2;
  ulong *puVar3;
  bool bVar4;
  char cVar5;
  ulong uVar6;
  bool bVar7;
  void *pvVar8;
  void *pvVar9;
  void *pvVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  
  puVar1 = (ulong *)(param_1 + 1);
  do {
    uVar11 = *puVar1;
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *puVar1 = uVar11 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  pvVar8 = (void *)*param_1;
  uVar12 = uVar11 & 0xffffffffffffffe0;
  uVar6 = uVar12 - *(long *)((long)pvVar8 + 0x1c00);
  if (uVar6 != 0) {
    bVar7 = (uVar11 & 0x1f) < uVar6 >> 5;
    pvVar9 = pvVar8;
LAB_0052886c:
    do {
      plVar2 = (long *)((long)pvVar9 + 0x1c08);
      pvVar8 = (void *)*plVar2;
      if ((void *)*plVar2 == (void *)0x0) {
        lVar13 = *(long *)((long)pvVar9 + 0x1c00);
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        pvVar10 = malloc(0x1c20);
        if (pvVar10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          alloc::alloc::handle_alloc_error(8,0x1c20);
        }
        *(undefined8 *)((long)pvVar10 + 0x1c08) = 0;
        *(long *)((long)pvVar10 + 0x1c00) = lVar13 + 0x20;
        *(undefined8 *)((long)pvVar10 + 0x1c18) = 0;
        *(undefined8 *)((long)pvVar10 + 0x1c10) = 0;
LAB_005288a4:
        pvVar8 = (void *)*plVar2;
        if (pvVar8 == (void *)0x0) goto code_r0x005288ac;
        ClearExclusiveLocal();
        plVar2 = (long *)((long)pvVar8 + 0x1c08);
        *(long *)((long)pvVar10 + 0x1c00) = *(long *)((long)pvVar8 + 0x1c00) + 0x20;
        do {
          lVar13 = *plVar2;
          if (lVar13 != 0) {
            ClearExclusiveLocal();
            do {
              InstructionSynchronizationBarrier();
              *(long *)((long)pvVar10 + 0x1c00) = *(long *)(lVar13 + 0x1c00) + 0x20;
              plVar2 = (long *)(lVar13 + 0x1c08);
              while (lVar13 = *plVar2, lVar13 == 0) {
                cVar5 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar4) {
                  *plVar2 = (long)pvVar10;
                  cVar5 = ExclusiveMonitorsStatus();
                }
                if (cVar5 == '\0') goto LAB_00528930;
              }
              ClearExclusiveLocal();
            } while( true );
          }
          cVar5 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = (long)pvVar10;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
LAB_00528930:
      puVar3 = (ulong *)((long)pvVar9 + 0x1c10);
      if ((bool)(bVar7 & (int)*puVar3 == -1)) {
        do {
          if ((void *)*param_1 != pvVar9) {
            ClearExclusiveLocal();
            goto LAB_00528858;
          }
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(param_1,0x10);
          if (bVar7) {
            *param_1 = (long)pvVar8;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        do {
          uVar11 = *puVar1;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar7) {
            *puVar1 = uVar11;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        *(ulong *)((long)pvVar9 + 0x1c18) = uVar11;
        do {
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar7) {
            *puVar3 = *puVar3 | 0x100000000;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        bVar7 = true;
        InstructionSynchronizationBarrier();
        pvVar9 = pvVar8;
        if (*(ulong *)((long)pvVar8 + 0x1c00) == uVar12) break;
        goto LAB_0052886c;
      }
LAB_00528858:
      bVar7 = false;
      InstructionSynchronizationBarrier();
      pvVar9 = pvVar8;
    } while (*(ulong *)((long)pvVar8 + 0x1c00) != uVar12);
  }
  puVar1 = (ulong *)((long)pvVar8 + 0x1c10);
  do {
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *puVar1 = *puVar1 | 0x200000000;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  return;
code_r0x005288ac:
  cVar5 = '\x01';
  bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
  if (bVar4) {
    *plVar2 = (long)pvVar10;
    cVar5 = ExclusiveMonitorsStatus();
  }
  pvVar8 = pvVar10;
  if (cVar5 == '\0') goto LAB_00528930;
  goto LAB_005288a4;
}


// ===== 005289b0  FUN_005289b0 =====

void FUN_005289b0(long *param_1,undefined8 *param_2)

{
  ulong *puVar1;
  long *plVar2;
  ulong *puVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  void *pvVar7;
  void *pvVar8;
  void *pvVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  puVar1 = (ulong *)(param_1 + 1);
  do {
    uVar10 = *puVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = uVar10 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  pvVar7 = (void *)*param_1;
  uVar13 = uVar10 & 0xffffffffffffffe0;
  uVar10 = uVar10 & 0x1f;
  uVar12 = uVar13 - *(long *)((long)pvVar7 + 0x500);
  if (uVar12 != 0) {
    bVar6 = uVar10 < uVar12 >> 5;
    pvVar8 = pvVar7;
LAB_00528a70:
    do {
      plVar2 = (long *)((long)pvVar8 + 0x508);
      pvVar7 = (void *)*plVar2;
      if ((void *)*plVar2 == (void *)0x0) {
        lVar14 = *(long *)((long)pvVar8 + 0x500);
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        pvVar9 = malloc(0x520);
        if (pvVar9 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          alloc::alloc::handle_alloc_error(8,0x520);
        }
        *(undefined8 *)((long)pvVar9 + 0x508) = 0;
        *(long *)((long)pvVar9 + 0x500) = lVar14 + 0x20;
        *(undefined8 *)((long)pvVar9 + 0x518) = 0;
        *(undefined8 *)((long)pvVar9 + 0x510) = 0;
LAB_00528aa8:
        pvVar7 = (void *)*plVar2;
        if (pvVar7 == (void *)0x0) goto code_r0x00528ab0;
        ClearExclusiveLocal();
        plVar2 = (long *)((long)pvVar7 + 0x508);
        *(long *)((long)pvVar9 + 0x500) = *(long *)((long)pvVar7 + 0x500) + 0x20;
        do {
          lVar14 = *plVar2;
          if (lVar14 != 0) {
            ClearExclusiveLocal();
            do {
              InstructionSynchronizationBarrier();
              *(long *)((long)pvVar9 + 0x500) = *(long *)(lVar14 + 0x500) + 0x20;
              plVar2 = (long *)(lVar14 + 0x508);
              while (lVar14 = *plVar2, lVar14 == 0) {
                cVar5 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar4) {
                  *plVar2 = (long)pvVar9;
                  cVar5 = ExclusiveMonitorsStatus();
                }
                if (cVar5 == '\0') goto LAB_00528b34;
              }
              ClearExclusiveLocal();
            } while( true );
          }
          cVar5 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = (long)pvVar9;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
LAB_00528b34:
      puVar3 = (ulong *)((long)pvVar8 + 0x510);
      if ((bool)(bVar6 & (int)*puVar3 == -1)) {
        do {
          if ((void *)*param_1 != pvVar8) {
            ClearExclusiveLocal();
            goto LAB_00528a5c;
          }
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(param_1,0x10);
          if (bVar6) {
            *param_1 = (long)pvVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        do {
          uVar12 = *puVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar12;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        *(ulong *)((long)pvVar8 + 0x518) = uVar12;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar6) {
            *puVar3 = *puVar3 | 0x100000000;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        bVar6 = true;
        InstructionSynchronizationBarrier();
        pvVar8 = pvVar7;
        if (*(ulong *)((long)pvVar7 + 0x500) == uVar13) break;
        goto LAB_00528a70;
      }
LAB_00528a5c:
      bVar6 = false;
      InstructionSynchronizationBarrier();
      pvVar8 = pvVar7;
    } while (*(ulong *)((long)pvVar7 + 0x500) != uVar13);
  }
  uVar18 = param_2[1];
  uVar17 = *param_2;
  uVar16 = param_2[3];
  uVar15 = param_2[2];
  puVar11 = (undefined8 *)((long)pvVar7 + uVar10 * 0x28);
  puVar11[4] = param_2[4];
  puVar11[1] = uVar18;
  *puVar11 = uVar17;
  puVar11[3] = uVar16;
  puVar11[2] = uVar15;
  puVar1 = (ulong *)((long)pvVar7 + 0x510);
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = *puVar1 | 1L << uVar10;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  return;
code_r0x00528ab0:
  cVar5 = '\x01';
  bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
  if (bVar4) {
    *plVar2 = (long)pvVar9;
    cVar5 = ExclusiveMonitorsStatus();
  }
  pvVar7 = pvVar9;
  if (cVar5 == '\0') goto LAB_00528b34;
  goto LAB_00528aa8;
}


// ===== 00528bb4  FUN_00528bb4 =====

void FUN_00528bb4(long *param_1)

{
  ulong *puVar1;
  long *plVar2;
  ulong *puVar3;
  bool bVar4;
  char cVar5;
  ulong uVar6;
  bool bVar7;
  void *pvVar8;
  void *pvVar9;
  void *pvVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  
  puVar1 = (ulong *)(param_1 + 1);
  do {
    uVar11 = *puVar1;
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *puVar1 = uVar11 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  pvVar8 = (void *)*param_1;
  uVar12 = uVar11 & 0xffffffffffffffe0;
  uVar6 = uVar12 - *(long *)((long)pvVar8 + 0x500);
  if (uVar6 != 0) {
    bVar7 = (uVar11 & 0x1f) < uVar6 >> 5;
    pvVar9 = pvVar8;
LAB_00528c48:
    do {
      plVar2 = (long *)((long)pvVar9 + 0x508);
      pvVar8 = (void *)*plVar2;
      if ((void *)*plVar2 == (void *)0x0) {
        lVar13 = *(long *)((long)pvVar9 + 0x500);
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        pvVar10 = malloc(0x520);
        if (pvVar10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          alloc::alloc::handle_alloc_error(8,0x520);
        }
        *(undefined8 *)((long)pvVar10 + 0x508) = 0;
        *(long *)((long)pvVar10 + 0x500) = lVar13 + 0x20;
        *(undefined8 *)((long)pvVar10 + 0x518) = 0;
        *(undefined8 *)((long)pvVar10 + 0x510) = 0;
LAB_00528c80:
        pvVar8 = (void *)*plVar2;
        if (pvVar8 == (void *)0x0) goto code_r0x00528c88;
        ClearExclusiveLocal();
        plVar2 = (long *)((long)pvVar8 + 0x508);
        *(long *)((long)pvVar10 + 0x500) = *(long *)((long)pvVar8 + 0x500) + 0x20;
        do {
          lVar13 = *plVar2;
          if (lVar13 != 0) {
            ClearExclusiveLocal();
            do {
              InstructionSynchronizationBarrier();
              *(long *)((long)pvVar10 + 0x500) = *(long *)(lVar13 + 0x500) + 0x20;
              plVar2 = (long *)(lVar13 + 0x508);
              while (lVar13 = *plVar2, lVar13 == 0) {
                cVar5 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar4) {
                  *plVar2 = (long)pvVar10;
                  cVar5 = ExclusiveMonitorsStatus();
                }
                if (cVar5 == '\0') goto LAB_00528d0c;
              }
              ClearExclusiveLocal();
            } while( true );
          }
          cVar5 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = (long)pvVar10;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
LAB_00528d0c:
      puVar3 = (ulong *)((long)pvVar9 + 0x510);
      if ((bool)(bVar7 & (int)*puVar3 == -1)) {
        do {
          if ((void *)*param_1 != pvVar9) {
            ClearExclusiveLocal();
            goto LAB_00528c34;
          }
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(param_1,0x10);
          if (bVar7) {
            *param_1 = (long)pvVar8;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        do {
          uVar11 = *puVar1;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar7) {
            *puVar1 = uVar11;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        *(ulong *)((long)pvVar9 + 0x518) = uVar11;
        do {
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar7) {
            *puVar3 = *puVar3 | 0x100000000;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        bVar7 = true;
        InstructionSynchronizationBarrier();
        pvVar9 = pvVar8;
        if (*(ulong *)((long)pvVar8 + 0x500) == uVar12) break;
        goto LAB_00528c48;
      }
LAB_00528c34:
      bVar7 = false;
      InstructionSynchronizationBarrier();
      pvVar9 = pvVar8;
    } while (*(ulong *)((long)pvVar8 + 0x500) != uVar12);
  }
  puVar1 = (ulong *)((long)pvVar8 + 0x510);
  do {
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *puVar1 = *puVar1 | 0x200000000;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  return;
code_r0x00528c88:
  cVar5 = '\x01';
  bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
  if (bVar4) {
    *plVar2 = (long)pvVar10;
    cVar5 = ExclusiveMonitorsStatus();
  }
  pvVar8 = pvVar10;
  if (cVar5 == '\0') goto LAB_00528d0c;
  goto LAB_00528c80;
}


// ===== 00528d8c  FUN_00528d8c =====

void FUN_00528d8c(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  void *__ptr;
  void *pvVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  pvVar4 = (void *)*param_2;
  uVar7 = *(ulong *)((long)pvVar4 + 0x600);
  while (uVar7 != (param_2[2] & 0xffffffffffffffe0)) {
    pvVar4 = *(void **)((long)pvVar4 + 0x608);
    if (pvVar4 == (void *)0x0) {
      *param_1 = 2;
      return;
    }
    *param_2 = pvVar4;
    InstructionSynchronizationBarrier();
    uVar7 = *(ulong *)((long)pvVar4 + 0x600);
  }
  __ptr = (void *)param_2[1];
LAB_00528de4:
  if (((__ptr == pvVar4) || ((*(ulong *)((long)__ptr + 0x610) >> 0x20 & 1) == 0)) ||
     ((ulong)param_2[2] < *(ulong *)((long)__ptr + 0x618))) {
    uVar7 = param_2[2];
    uVar8 = uVar7 & 0x1f;
    if ((*(ulong *)((long)pvVar4 + 0x610) >> uVar8 & 1) == 0) {
      uVar9 = 1;
      if ((*(ulong *)((long)pvVar4 + 0x610) & 0x200000000) == 0) {
        uVar9 = 2;
      }
      *param_1 = uVar9;
      return;
    }
    puVar6 = (undefined8 *)((long)pvVar4 + uVar8 * 0x30);
    uVar14 = puVar6[3];
    uVar13 = puVar6[2];
    uVar10 = puVar6[5];
    uVar9 = puVar6[4];
    uVar12 = puVar6[1];
    uVar11 = *puVar6;
    *param_1 = 0;
    param_1[2] = uVar12;
    param_1[1] = uVar11;
    param_1[6] = uVar10;
    param_1[5] = uVar9;
    param_1[4] = uVar14;
    param_1[3] = uVar13;
    param_2[2] = uVar7 + 1;
    return;
  }
  if (*(long *)((long)__ptr + 0x608) == 0) {
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00ace140);
  }
  param_2[1] = *(long *)((long)__ptr + 0x608);
  *(undefined8 *)((long)__ptr + 0x600) = 0;
  *(undefined8 *)((long)__ptr + 0x610) = 0;
  *(undefined8 *)((long)__ptr + 0x608) = 0;
  lVar5 = *param_3;
  *(long *)((long)__ptr + 0x600) = *(long *)(lVar5 + 0x600) + 0x20;
  plVar1 = (long *)(lVar5 + 0x608);
  do {
    lVar5 = *plVar1;
    if (lVar5 != 0) {
      ClearExclusiveLocal();
      *(long *)((long)__ptr + 0x600) = *(long *)(lVar5 + 0x600) + 0x20;
      plVar1 = (long *)(lVar5 + 0x608);
      goto LAB_00528e5c;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = (long)__ptr;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  goto LAB_00528ddc;
  while( true ) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = (long)__ptr;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') break;
LAB_00528e5c:
    lVar5 = *plVar1;
    if (lVar5 != 0) {
      ClearExclusiveLocal();
      plVar1 = (long *)(lVar5 + 0x608);
      *(long *)((long)__ptr + 0x600) = *(long *)(lVar5 + 0x600) + 0x20;
      goto LAB_00528e84;
    }
  }
  goto LAB_00528ddc;
  while( true ) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = (long)__ptr;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') break;
LAB_00528e84:
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      free(__ptr);
      break;
    }
  }
LAB_00528ddc:
  InstructionSynchronizationBarrier();
  pvVar4 = (void *)*param_2;
  __ptr = (void *)param_2[1];
  goto LAB_00528de4;
}


// ===== 00528f6c  FUN_00528f6c =====

void FUN_00528f6c(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  void *__ptr;
  void *pvVar4;
  long lVar5;
  undefined8 *puVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  pvVar4 = (void *)*param_2;
  uVar8 = *(ulong *)((long)pvVar4 + 0x500);
  while (uVar8 != (param_2[2] & 0xffffffffffffffe0)) {
    pvVar4 = *(void **)((long)pvVar4 + 0x508);
    if (pvVar4 == (void *)0x0) goto LAB_0052910c;
    *param_2 = pvVar4;
    InstructionSynchronizationBarrier();
    uVar8 = *(ulong *)((long)pvVar4 + 0x500);
  }
  __ptr = (void *)param_2[1];
LAB_00528fc4:
  if (((__ptr == pvVar4) || ((*(ulong *)((long)__ptr + 0x510) >> 0x20 & 1) == 0)) ||
     ((ulong)param_2[2] < *(ulong *)((long)__ptr + 0x518))) {
    uVar8 = param_2[2];
    uVar9 = uVar8 & 0x1f;
    if ((*(ulong *)((long)pvVar4 + 0x510) >> uVar9 & 1) != 0) {
      puVar6 = (undefined8 *)((long)pvVar4 + uVar9 * 0x28);
      uVar13 = puVar6[1];
      uVar12 = *puVar6;
      uVar11 = puVar6[3];
      uVar10 = puVar6[2];
      iVar7 = (int)puVar6[4];
      param_1[4] = puVar6[4];
      param_1[1] = uVar13;
      *param_1 = uVar12;
      param_1[3] = uVar11;
      param_1[2] = uVar10;
      if (iVar7 != -2 && iVar7 + 2 < 0 == SCARRY4(iVar7,2)) {
        param_2[2] = uVar8 + 1;
      }
      return;
    }
    if ((*(ulong *)((long)pvVar4 + 0x510) >> 0x21 & 1) != 0) {
      *(undefined4 *)(param_1 + 4) = 0xfffffffe;
      return;
    }
LAB_0052910c:
    *(undefined4 *)(param_1 + 4) = 0xfffffffd;
    return;
  }
  if (*(long *)((long)__ptr + 0x508) == 0) {
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00ace140);
  }
  param_2[1] = *(long *)((long)__ptr + 0x508);
  *(undefined8 *)((long)__ptr + 0x500) = 0;
  *(undefined8 *)((long)__ptr + 0x510) = 0;
  *(undefined8 *)((long)__ptr + 0x508) = 0;
  lVar5 = *param_3;
  *(long *)((long)__ptr + 0x500) = *(long *)(lVar5 + 0x500) + 0x20;
  plVar1 = (long *)(lVar5 + 0x508);
  do {
    lVar5 = *plVar1;
    if (lVar5 != 0) {
      ClearExclusiveLocal();
      *(long *)((long)__ptr + 0x500) = *(long *)(lVar5 + 0x500) + 0x20;
      plVar1 = (long *)(lVar5 + 0x508);
      goto LAB_0052903c;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = (long)__ptr;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  goto LAB_00528fbc;
  while( true ) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = (long)__ptr;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') break;
LAB_0052903c:
    lVar5 = *plVar1;
    if (lVar5 != 0) {
      ClearExclusiveLocal();
      plVar1 = (long *)(lVar5 + 0x508);
      *(long *)((long)__ptr + 0x500) = *(long *)(lVar5 + 0x500) + 0x20;
      goto LAB_00529064;
    }
  }
  goto LAB_00528fbc;
  while( true ) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = (long)__ptr;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') break;
LAB_00529064:
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      free(__ptr);
      break;
    }
  }
LAB_00528fbc:
  InstructionSynchronizationBarrier();
  pvVar4 = (void *)*param_2;
  __ptr = (void *)param_2[1];
  goto LAB_00528fc4;
}


// ===== 00529148  FUN_00529148 =====

void FUN_00529148(long *param_1,void *param_2,ulong param_3)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if ((ulong)(*param_1 - lVar1) < param_3) {
    FUN_0052f310(param_1,lVar1,param_3,1,1);
    lVar1 = param_1[2];
  }
  else if (param_3 == 0) goto LAB_00529188;
  memcpy((void *)(param_1[1] + lVar1),param_2,param_3);
LAB_00529188:
  param_1[2] = lVar1 + param_3;
  return;
}


// ===== 005291c8  FUN_005291c8 =====

void FUN_005291c8(ulong *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  undefined8 uVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  size_t __size;
  ulong *puVar17;
  ulong *local_d0;
  ulong uStack_c8;
  long local_c0;
  undefined8 uStack_b8;
  ulong local_b0;
  ulong local_a8;
  long *plStack_a0;
  ulong local_98;
  ulong *local_90;
  ulong uStack_88;
  long local_80;
  undefined8 uStack_78;
  ulong local_70;
  
  do {
    if (DAT_00b0bd18 != 0) {
      ClearExclusiveLocal();
      <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                (&DAT_00b0bd18);
      uVar12 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      puVar17 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      goto joined_r0x005294b0;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(0xb0bd18,0x10);
    if (bVar4) {
      DAT_00b0bd18 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar12 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
  puVar17 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
joined_r0x005294b0:
  PTR_GLOBAL_PANIC_COUNT_00b00bf0 = (undefined *)puVar17;
  if ((uVar12 & 0x7fffffffffffffff) == 0) {
    bVar10 = 0;
    uStack_c8 = DAT_00b0bd38;
  }
  else {
    bVar10 = std::panicking::panic_count::is_zero_slow_path();
    bVar10 = bVar10 ^ 1;
    uStack_c8 = DAT_00b0bd38;
  }
  if (DAT_00b0bd1c != '\0') {
    local_90 = (ulong *)&DAT_00b0bd18;
    uVar12 = uStack_88 >> 8;
    uStack_88 = CONCAT71((int7)uVar12,bVar10);
                    /* try { // try from 005294d0 to 005294f3 has its CatchHandler @ 00529548 */
    DAT_00b0bd38 = uStack_c8;
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              ("Failed to lock buffer",0x15,&local_90,&PTR_FUN_00ace0b0,
               &PTR_s_mobile_rust_src_logger_rs_00ace158);
  }
  local_c0 = 0;
  uStack_b8 = 0;
  DAT_00b0bd38 = 0;
  local_d0 = &DAT_00b0bd20;
  local_b0 = uStack_c8;
  if (uStack_c8 != 0) {
    uVar12 = 0;
    if (DAT_00b0bd20 <= DAT_00b0bd30) {
      uVar12 = DAT_00b0bd20;
    }
    plVar13 = (long *)(DAT_00b0bd28 + (DAT_00b0bd30 - uVar12) * 0x18);
    local_b0 = uStack_c8 - 1;
    local_c0 = 1;
    lVar14 = *plVar13;
    if (lVar14 != -1) {
      uVar12 = uStack_c8;
      if (uStack_c8 < 5) {
        uVar12 = 4;
      }
      lVar16 = plVar13[1];
      __size = uVar12 * 0x18;
      if (0x555555555555555 < uStack_c8) {
        uVar11 = 0;
LAB_005292b8:
                    /* try { // try from 005292b8 to 005292bf has its CatchHandler @ 0052955c */
                    /* WARNING: Subroutine does not return */
        alloc::raw_vec::handle_error(uVar11,__size);
      }
      lVar15 = plVar13[2];
      if (__size == 0) {
        uVar12 = 0;
        plVar13 = (long *)&DAT_00000008;
      }
      else {
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        plVar13 = (long *)malloc(__size);
        if (plVar13 == (long *)0x0) {
          uVar11 = 8;
          goto LAB_005292b8;
        }
      }
      uVar8 = local_b0;
      lVar7 = local_c0;
      puVar6 = local_d0;
      *plVar13 = lVar14;
      plVar13[1] = lVar16;
      plVar13[2] = lVar15;
      local_98 = 1;
      uStack_88 = uStack_c8;
      local_90 = local_d0;
      uStack_78 = uStack_b8;
      local_80 = local_c0;
      local_70 = local_b0;
      local_a8 = uVar12;
      plStack_a0 = plVar13;
      if (local_b0 != 0) {
        uVar12 = local_b0;
        lVar14 = 0;
        do {
          uVar9 = local_98;
          lVar16 = lVar7 + local_98;
          uVar1 = 0;
          if (*puVar6 <= (lVar16 + puVar6[2]) - 1) {
            uVar1 = *puVar6;
          }
          lVar16 = puVar6[1] + (lVar16 + (puVar6[2] - uVar1)) * 0x18;
          lVar15 = *(long *)(lVar16 + -0x18);
          if (lVar15 == -1) {
            local_70 = uVar12 - 1;
            goto LAB_0052942c;
          }
          uVar11 = *(undefined8 *)(lVar16 + -0x10);
          uVar2 = *(undefined8 *)(lVar16 + -8);
          if (local_98 == local_a8) {
                    /* try { // try from 00529404 to 0052941b has its CatchHandler @ 0052950c */
            FUN_0052f310(&local_a8,local_98,uVar12,8,0x18);
            plVar13 = plStack_a0;
          }
          local_98 = uVar9 + 1;
          uVar12 = uVar12 - 1;
          *(long *)((long)plVar13 + lVar14 + 0x18) = lVar15;
          *(undefined8 *)((long)plVar13 + lVar14 + 0x20) = uVar11;
          *(undefined8 *)((long)plVar13 + lVar14 + 0x28) = uVar2;
          lVar14 = lVar14 + 0x18;
        } while (local_98 - uVar8 != 1);
        local_70 = 0;
LAB_0052942c:
        local_80 = lVar7 + uVar9;
        puVar17 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      }
                    /* try { // try from 0052944c to 00529453 has its CatchHandler @ 005294f8 */
      FUN_004be0d8(&local_90);
      param_1[1] = (ulong)plStack_a0;
      *param_1 = local_a8;
      param_1[2] = local_98;
      goto joined_r0x005292d8;
    }
  }
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 8;
                    /* try { // try from 005292d0 to 005292d7 has its CatchHandler @ 00529504 */
  FUN_004be0d8(&local_d0);
joined_r0x005292d8:
  if ((((bVar10 & 1) == 0) && ((*puVar17 & 0x7fffffffffffffff) != 0)) &&
     (uVar12 = std::panicking::panic_count::is_zero_slow_path(), (uVar12 & 1) == 0)) {
    DAT_00b0bd1c = '\x01';
  }
  do {
    iVar5 = DAT_00b0bd18;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(0xb0bd18,0x10);
    if (bVar4) {
      DAT_00b0bd18 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar5 == 2) {
    <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(&DAT_00b0bd18);
  }
  return;
}


// ===== 00529594  FUN_00529594 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00529594(undefined8 param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  code **ppcVar5;
  code **ppcVar6;
  byte bVar7;
  ulong uVar8;
  code *pcVar9;
  code *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 *local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  code *local_a8;
  code *local_a0;
  code **ppcStack_98;
  code *local_90;
  code **local_80;
  code *pcStack_78;
  code **ppcStack_70;
  code *local_68;
  code **local_60;
  code *pcStack_58;
  code **local_50;
  code *pcStack_48;
  
  pcVar9 = (code *)*param_2;
                    /* try { // try from 005295bc to 005295c7 has its CatchHandler @ 005297fc */
  local_d8 = pcVar9;
  <jsi::handle::RuntimeHandle_as_react_common::runtime_executor::RuntimeHandleExt>::executor
            (&local_d0,param_2);
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  local_c0 = (undefined8 *)malloc(0x18);
  if (local_c0 == (undefined8 *)0x0) {
                    /* try { // try from 0052972c to 00529737 has its CatchHandler @ 00529828 */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x18);
  }
  local_c0[2] = param_1;
  uStack_b0 = uStack_c8;
  uStack_b8 = local_d0;
  local_c0[1] = 1;
  *local_c0 = 1;
  do {
    local_a8 = pcVar9;
    if (DAT_00b102e8 != 0) {
      ClearExclusiveLocal();
                    /* try { // try from 005297a8 to 005297b3 has its CatchHandler @ 005297b8 */
      <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                (&DAT_00b102e8);
      break;
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0xb102e8,0x10);
    if (bVar2) {
      DAT_00b102e8 = 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  puVar3 = PTR_GLOBAL_PANIC_COUNT_00b00bf0;
  if ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) == 0) {
    bVar7 = 0;
    ppcVar6 = DAT_00b102f0;
    local_a0 = _DAT_00b102f8;
    ppcStack_98 = _DAT_00b10300;
    local_90 = DAT_00b10308;
    ppcVar5 = local_80;
  }
  else {
                    /* try { // try from 0052973c to 0052973f has its CatchHandler @ 005297b8 */
    bVar7 = std::panicking::panic_count::is_zero_slow_path();
    bVar7 = bVar7 ^ 1;
    ppcVar6 = DAT_00b102f0;
    local_a0 = _DAT_00b102f8;
    ppcStack_98 = _DAT_00b10300;
    local_90 = DAT_00b10308;
    ppcVar5 = local_80;
  }
  local_80 = ppcVar6;
  if (DAT_00b102ec != '\0') {
    local_60 = (code **)&DAT_00b102e8;
    uVar8 = (ulong)pcStack_58 >> 8;
    pcStack_58 = (code *)CONCAT71((int7)uVar8,bVar7);
                    /* try { // try from 00529758 to 0052977b has its CatchHandler @ 0052980c */
    DAT_00b102f0 = local_80;
    _DAT_00b102f8 = local_a0;
    _DAT_00b10300 = ppcStack_98;
    DAT_00b10308 = local_90;
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              ("Failed to lock dev log listener",0x1f,&local_60,&PTR_FUN_00ace090,
               &PTR_s_mobile_rust_src_logger_rs_00ace1b8);
  }
  DAT_00b102f0 = (code **)local_c0;
  _DAT_00b102f8 = (code *)uStack_b8;
  _DAT_00b10300 = (code **)uStack_b0;
  DAT_00b10308 = local_a8;
  if (local_80 != (code **)0x0) {
    pcStack_78 = local_a0;
    ppcStack_70 = ppcStack_98;
    local_68 = local_90;
    if (local_90 == pcVar9) {
      do {
        pcVar9 = *local_80;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(local_80,0x10);
        if (bVar2) {
          *local_80 = pcVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      local_60 = local_80;
      pcStack_58 = local_a0;
      local_50 = ppcStack_98;
      pcStack_48 = local_90;
      if (pcVar9 + -1 == (code *)0x0) {
        DataMemoryBarrier(2,1);
                    /* try { // try from 0052969c to 005296a7 has its CatchHandler @ 005297c0 */
        FUN_0050ee30(&local_60);
      }
                    /* try { // try from 005296ac to 005296b3 has its CatchHandler @ 005297d4 */
      <react_common::ffi::base::ffi::CallInvoker_as_cxx::shared_ptr::SharedPtrTarget>::__drop
                ((ulong)&local_60 | 8);
      ppcVar5 = local_80;
    }
    else {
      local_60 = &local_68;
      pcStack_58 = FUN_0052adb8;
      local_50 = &local_d8;
      pcStack_48 = FUN_0052adb8;
                    /* try { // try from 005296d4 to 005296e3 has its CatchHandler @ 005297dc */
      std::io::stdio::_eprint(&DAT_002af8dc,&local_60);
      ppcVar5 = local_80;
    }
  }
  local_80 = ppcVar5;
  if ((((bVar7 & 1) == 0) && ((*(ulong *)puVar3 & 0x7fffffffffffffff) != 0)) &&
     (uVar8 = std::panicking::panic_count::is_zero_slow_path(), (uVar8 & 1) == 0)) {
    DAT_00b102ec = '\x01';
  }
  do {
    iVar4 = DAT_00b102e8;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0xb102e8,0x10);
    if (bVar2) {
      DAT_00b102e8 = 0;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (iVar4 == 2) {
    <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(&DAT_00b102e8);
  }
  FUN_004fd7c4(param_2,local_d8);
  return;
}


// ===== 0052984c  FUN_0052984c =====

void FUN_0052984c(long param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  long *plVar5;
  byte bVar6;
  ulong uVar7;
  long lVar8;
  undefined4 *local_50;
  byte local_48;
  
  do {
    if (DAT_00b102e8 != 0) {
      ClearExclusiveLocal();
      <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                (&DAT_00b102e8);
      uVar7 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      goto joined_r0x005299c4;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(0xb102e8,0x10);
    if (bVar3) {
      DAT_00b102e8 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar7 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
  puVar4 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
joined_r0x005299c4:
  PTR_GLOBAL_PANIC_COUNT_00b00bf0 = (undefined *)puVar4;
  if ((uVar7 & 0x7fffffffffffffff) == 0) {
    bVar6 = 0;
    plVar5 = DAT_00b102f0;
  }
  else {
    bVar6 = std::panicking::panic_count::is_zero_slow_path();
    bVar6 = bVar6 ^ 1;
    plVar5 = DAT_00b102f0;
  }
  DAT_00b102f0 = plVar5;
  if (DAT_00b102ec != '\0') {
    local_50 = &DAT_00b102e8;
    local_48 = bVar6;
                    /* try { // try from 005299f0 to 00529a13 has its CatchHandler @ 00529a50 */
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              ("Failed to lock dev log listener",0x1f,&local_50,&PTR_FUN_00ace090,
               &PTR_s_mobile_rust_src_logger_rs_00ace1d0);
  }
  if (plVar5 != (long *)0x0) {
    if (DAT_00b10308 != param_1) {
      if ((((bVar6 & 1) == 0) && ((*puVar4 & 0x7fffffffffffffff) != 0)) &&
         (uVar7 = std::panicking::panic_count::is_zero_slow_path(), (uVar7 & 1) == 0)) {
        DAT_00b102ec = '\x01';
      }
      do {
        iVar1 = DAT_00b102e8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(0xb102e8,0x10);
        if (bVar3) {
          DAT_00b102e8 = 0;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto LAB_00529930;
    }
    do {
      lVar8 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 005298d8 to 005298e3 has its CatchHandler @ 00529a18 */
      FUN_0050ee30(&DAT_00b102f0);
    }
                    /* try { // try from 005298e4 to 005298ef has its CatchHandler @ 00529a30 */
    <react_common::ffi::base::ffi::CallInvoker_as_cxx::shared_ptr::SharedPtrTarget>::__drop
              (&DAT_00b102f8);
  }
  DAT_00b102f0 = (long *)0x0;
  if ((((bVar6 & 1) == 0) && ((*puVar4 & 0x7fffffffffffffff) != 0)) &&
     (uVar7 = std::panicking::panic_count::is_zero_slow_path(), (uVar7 & 1) == 0)) {
    DAT_00b102ec = '\x01';
  }
  do {
    iVar1 = DAT_00b102e8;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(0xb102e8,0x10);
    if (bVar3) {
      DAT_00b102e8 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_00529930:
  if (iVar1 != 2) {
    return;
  }
  <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(&DAT_00b102e8);
  return;
}


// ===== 00529a68  FUN_00529a68 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00529a68(undefined8 param_1,long param_2)

{
  undefined8 ****ppppuVar1;
  undefined8 ****ppppuVar2;
  ulong uVar3;
  ulong **ppuVar4;
  undefined8 uVar5;
  byte bVar6;
  uint uVar7;
  char cVar8;
  bool bVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  undefined8 ****ppppuVar13;
  code *__ptr;
  code *pcVar14;
  undefined8 ***pppuVar15;
  undefined8 ***pppuVar16;
  byte bVar17;
  int iVar18;
  ulong uVar19;
  undefined8 ***pppuVar20;
  code cVar21;
  ulong **ppuVar22;
  undefined8 *puVar23;
  long *plVar24;
  undefined1 *__ptr_00;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 local_128;
  uint uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  ulong ***local_10c;
  undefined4 local_104;
  ulong **local_100;
  ulong **local_f8;
  undefined8 local_f0;
  undefined8 ***local_e8;
  ulong ****local_e0;
  code *pcStack_d8;
  undefined8 ****local_d0;
  undefined *puStack_c8;
  undefined8 ***local_c0;
  code *pcStack_b8;
  ulong ***local_b0;
  code *pcStack_a8;
  undefined8 ****local_a0;
  code *pcStack_98;
  undefined8 ***local_90;
  undefined8 uStack_88;
  undefined1 auStack_71 [17];
  
  ppuVar22 = *(ulong ***)(param_2 + 0x30);
  if ((ulong **)0x3 < ppuVar22) {
    return;
  }
  <std::time::[5]::std::time::SystemTime>::now();
  <chrono::datetime::DateTime<chrono::offset::utc::Utc>as_core::convert::From<std::time::SystemTime>>
  ::from(&local_10c);
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  pcStack_d8 = (code *)malloc(0x20);
  if (pcStack_d8 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(1,0x20);
  }
  local_d0 = (undefined8 ****)0x0;
  local_e0 = (ulong ****)&DAT_00000020;
  pcStack_98 = (code *)CONCAT44(pcStack_98._4_4_,local_104);
  local_a0 = (undefined8 ****)local_10c;
                    /* try { // try from 00529ad4 to 00529fa3 has its CatchHandler @ 0052a784 */
  <chrono::naive::datetime::chrono::naive::datetime::NaiveDateTime>::overflowing_add_offset
            (&local_128,&local_a0,0);
  ppppuVar13 = local_d0;
  uVar10 = (uint)local_128;
  local_100 = (ulong **)CONCAT44(local_100._4_4_,(int)(uint)local_128 >> 0xd);
  if ((uint)((int)(uint)local_128 >> 0xd) >> 4 < 0x271) {
    if (local_e0 == local_d0) {
                    /* try { // try from 0052a664 to 0052a6d3 has its CatchHandler @ 0052a784 */
      FUN_0052f310(&local_e0,local_d0,1,1,1);
    }
    ppppuVar1 = (undefined8 ****)((long)ppppuVar13 + 1);
    uVar7 = (uVar10 >> 0xf & 0x3fff) / 0x19;
    bVar17 = (byte)(uVar7 / 10) & 0x1f;
    pcStack_d8[(long)ppppuVar13] = (code)(bVar17 | 0x30);
    if (local_e0 == ppppuVar1) {
      local_d0 = ppppuVar1;
      FUN_0052f310(&local_e0,local_e0,1,1,1);
    }
    ppppuVar2 = (undefined8 ****)((long)ppppuVar13 + 2);
    pcStack_d8[(long)ppppuVar1] = (code)((char)uVar7 + bVar17 * -10 | 0x30);
    if (local_e0 == ppppuVar2) {
      local_d0 = ppppuVar2;
      FUN_0052f310(&local_e0,(undefined1 *)((long)ppppuVar13 + 2),1,1,1);
    }
    ppppuVar1 = (undefined8 ****)((long)ppppuVar13 + 3);
    uVar7 = (uVar10 >> 0xd) + uVar7 * -100;
    bVar17 = (byte)((uVar7 & 0xff) / 10);
    pcStack_d8[(long)ppppuVar2] = (code)(bVar17 | 0x30);
    if (local_e0 == ppppuVar1) {
      local_d0 = ppppuVar1;
      FUN_0052f310(&local_e0,local_e0,1,1,1);
    }
    local_d0 = (undefined8 ****)((long)ppppuVar13 + 4);
    pcStack_d8[(long)ppppuVar1] = (code)((char)uVar7 + bVar17 * -10 | 0x30);
  }
  else {
    local_a0 = (undefined8 ****)&local_100;
    pcStack_98 = (code *)PTR_fmt_00b00d18;
    uVar19 = core::fmt::write(&local_e0,&PTR_FUN_00ace240,&DAT_002a1828,&local_a0);
    if ((uVar19 & 1) != 0) goto LAB_00529f18;
  }
  ppppuVar13 = local_d0;
  if (local_e0 == local_d0) {
                    /* try { // try from 0052a378 to 0052a5d3 has its CatchHandler @ 0052a784 */
    FUN_0052f310(&local_e0,local_d0,1,1,1);
  }
  uVar19 = (ulong)(uVar10 >> 3) & 0x3ff;
  ppppuVar1 = (undefined8 ****)((long)ppppuVar13 + 1);
  pcStack_d8[(long)ppppuVar13] = (code)0x2d;
  local_d0 = ppppuVar1;
  if (0x2dc < (uint)uVar19) {
                    /* try { // try from 0052a700 to 0052a70f has its CatchHandler @ 0052a784 */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check
              (uVar19,0x2dd,&PTR_s__root__cargo_registry_src_index__00ace040);
  }
  bVar17 = (&DAT_002c0d2a)[uVar19];
  uVar7 = (uint)uVar19 + (uint)bVar17;
  cVar21 = (code)0x30;
  if (0x27f < uVar7) {
    cVar21 = (code)0x31;
  }
  if (local_e0 == ppppuVar1) {
    FUN_0052f310(&local_e0,(undefined1 *)((long)ppppuVar13 + 1),1,1,1);
  }
  bVar6 = (byte)(uVar7 >> 6);
  ppppuVar2 = (undefined8 ****)((long)ppppuVar13 + 2);
  pcStack_d8[(long)ppppuVar1] = cVar21;
  if (0x27f < uVar7) {
    bVar6 = bVar6 - 10;
  }
  if (local_e0 == ppppuVar2) {
    local_d0 = ppppuVar2;
    FUN_0052f310(&local_e0,local_e0,1,1,1);
  }
  pcStack_d8[(long)ppppuVar2] = (code)(bVar6 | 0x30);
  ppppuVar1 = (undefined8 ****)((long)ppppuVar13 + 3);
  if (local_e0 == ppppuVar1) {
    local_d0 = ppppuVar1;
    FUN_0052f310(&local_e0,(undefined1 *)((long)ppppuVar13 + 3),1,1,1);
  }
  pcStack_d8[(long)ppppuVar1] = (code)0x2d;
  ppppuVar1 = (undefined8 ****)((long)ppppuVar13 + 4);
  if (local_e0 == ppppuVar1) {
    local_d0 = ppppuVar1;
    FUN_0052f310(&local_e0,(undefined1 *)((long)ppppuVar13 + 4),1,1,1);
  }
  ppppuVar2 = (undefined8 ****)((long)ppppuVar13 + 5);
  uVar10 = (uint)bVar17 + (uVar10 >> 3) >> 1 & 0x1f;
  bVar17 = (byte)(uVar10 / 10);
  pcStack_d8[(long)ppppuVar1] = (code)(bVar17 | 0x30);
  if (local_e0 == ppppuVar2) {
    local_d0 = ppppuVar2;
    FUN_0052f310(&local_e0,local_e0,1,1,1);
  }
  ppppuVar1 = (undefined8 ****)((long)ppppuVar13 + 6);
  pcStack_d8[(long)ppppuVar2] = (code)((char)uVar10 + bVar17 * -10 | 0x30);
  if (local_e0 == ppppuVar1) {
    local_d0 = ppppuVar1;
    FUN_0052f310(&local_e0,(undefined1 *)((long)ppppuVar13 + 6),1,1,1);
  }
  ppppuVar2 = (undefined8 ****)((long)ppppuVar13 + 7);
  pcStack_d8[(long)ppppuVar1] = (code)0x54;
  uVar12 = local_128._4_4_;
  uVar10 = local_128._4_4_ % 0x3c;
  uVar7 = uStack_120 + 0xc4653600;
  if (uStack_120 < 1000000000) {
    uVar7 = uStack_120;
  }
  local_e8 = (undefined8 ***)CONCAT44(local_e8._4_4_,uVar7);
  if (999999999 < uStack_120) {
    uVar10 = uVar10 + 1;
  }
  local_d0 = ppppuVar2;
  if (99 < (local_128._4_4_ / 0xe10 & 0xff)) goto LAB_00529f18;
  if (local_e0 == ppppuVar2) {
    FUN_0052f310(&local_e0,(undefined1 *)((long)ppppuVar13 + 7),1,1,1);
  }
  ppppuVar1 = ppppuVar13 + 1;
  bVar17 = (byte)((uVar12 / 0xe10 & 0xff) / 10);
  pcStack_d8[(long)ppppuVar2] = (code)(bVar17 | 0x30);
  if (local_e0 == ppppuVar1) {
    local_d0 = ppppuVar1;
    FUN_0052f310(&local_e0,local_e0,1,1,1);
  }
  ppppuVar2 = (undefined8 ****)((long)ppppuVar13 + 9);
  pcStack_d8[(long)ppppuVar1] = (code)((char)(uVar12 / 0xe10) + bVar17 * -10 | 0x30);
  if (local_e0 == ppppuVar2) {
    local_d0 = ppppuVar2;
    FUN_0052f310(&local_e0,(undefined1 *)((long)ppppuVar13 + 9),1,1,1);
  }
  pcStack_d8[(long)ppppuVar2] = (code)0x3a;
  ppppuVar1 = (undefined8 ****)((long)ppppuVar13 + 10);
  if (local_e0 == ppppuVar1) {
    local_d0 = ppppuVar1;
    FUN_0052f310(&local_e0,(undefined1 *)((long)ppppuVar13 + 10),1,1,1);
  }
  iVar18 = uVar12 / 0x3c + (uVar12 / 0xe10) * -0x3c;
  ppppuVar2 = (undefined8 ****)((long)ppppuVar13 + 0xb);
  bVar17 = (byte)((uint)(iVar18 * 0xcd) >> 0xb) & 0x1f;
  pcStack_d8[(long)ppppuVar1] = (code)(bVar17 | 0x30);
  if (local_e0 == ppppuVar2) {
    local_d0 = ppppuVar2;
    FUN_0052f310(&local_e0,local_e0,1,1,1);
  }
  ppppuVar1 = (undefined8 ****)((long)ppppuVar13 + 0xc);
  pcStack_d8[(long)ppppuVar2] = (code)((char)iVar18 + bVar17 * -10 | 0x30);
  if (local_e0 == ppppuVar1) {
    local_d0 = ppppuVar1;
    FUN_0052f310(&local_e0,(undefined1 *)((long)ppppuVar13 + 0xc),1,1,1);
  }
  pcStack_d8[(long)ppppuVar1] = (code)0x3a;
  ppppuVar1 = (undefined8 ****)((long)ppppuVar13 + 0xd);
  if (local_e0 == ppppuVar1) {
    local_d0 = ppppuVar1;
    FUN_0052f310(&local_e0,(undefined1 *)((long)ppppuVar13 + 0xd),1,1,1);
  }
  ppppuVar2 = (undefined8 ****)((long)ppppuVar13 + 0xe);
  bVar17 = (byte)(uVar10 / 10);
  pcStack_d8[(long)ppppuVar1] = (code)(bVar17 | 0x30);
  if (local_e0 == ppppuVar2) {
    local_d0 = ppppuVar2;
    FUN_0052f310(&local_e0,local_e0,1,1,1);
  }
  local_d0 = (undefined8 ****)((long)ppppuVar13 + 0xf);
  pcStack_d8[(long)ppppuVar2] = (code)((char)uVar10 + bVar17 * -10 | 0x30);
  if (uVar7 != 0) {
    if (uVar7 == (uVar7 / 1000000) * 1000000) {
      local_f8 = (ulong **)CONCAT44(local_f8._4_4_,uVar7 / 1000000);
      local_a0 = (undefined8 ****)&local_f8;
      pcStack_98 = (code *)PTR_fmt_00b00c40;
      uVar19 = core::fmt::write(&local_e0,&PTR_FUN_00ace240,&DAT_002c1007,&local_a0);
    }
    else {
      if (uVar7 % 1000 != 0) {
        local_a0 = &local_e8;
        pcStack_98 = (code *)PTR_fmt_00b00c40;
        iVar18 = core::fmt::write(&local_e0,&PTR_FUN_00ace240,&DAT_002c101b,&local_a0);
        if (iVar18 != 0) goto LAB_00529f18;
        goto LAB_00529fa8;
      }
      local_f8 = (ulong **)CONCAT44(local_f8._4_4_,uVar7 / 1000);
      local_a0 = (undefined8 ****)&local_f8;
      pcStack_98 = (code *)PTR_fmt_00b00c40;
      uVar19 = core::fmt::write(&local_e0,&PTR_FUN_00ace240,&DAT_002c1011,&local_a0);
    }
    if ((uVar19 & 1) != 0) {
LAB_00529f18:
                    /* WARNING: Subroutine does not return */
      core::result::unwrap_failed
                ("writing rfc3339 datetime to string should never fail",0x34,auStack_71,
                 &DAT_00ace0f0,&PTR_s__root__cargo_registry_src_index__00ace078);
    }
  }
LAB_00529fa8:
  ppppuVar13 = local_d0;
  if (local_e0 == local_d0) {
    FUN_0052f310(&local_e0,local_d0,1,1,1);
  }
  ppppuVar1 = (undefined8 ****)((long)ppppuVar13 + 1);
  pcStack_d8[(long)ppppuVar13] = (code)0x2b;
  if (local_e0 == ppppuVar1) {
    local_d0 = ppppuVar1;
    FUN_0052f310(&local_e0,(undefined1 *)((long)ppppuVar13 + 1),1,1,1);
  }
  pcStack_d8[(long)ppppuVar1] = (code)0x30;
  ppppuVar1 = (undefined8 ****)((long)ppppuVar13 + 2);
  if (local_e0 == ppppuVar1) {
    local_d0 = ppppuVar1;
    FUN_0052f310(&local_e0,(undefined1 *)((long)ppppuVar13 + 2),1,1,1);
  }
  pcStack_d8[(long)ppppuVar1] = (code)0x30;
  ppppuVar1 = (undefined8 ****)((long)ppppuVar13 + 3);
  if (local_e0 == ppppuVar1) {
    local_d0 = ppppuVar1;
    FUN_0052f310(&local_e0,(undefined1 *)((long)ppppuVar13 + 3),1,1,1);
  }
  pcStack_d8[(long)ppppuVar1] = (code)0x3a;
  ppppuVar1 = (undefined8 ****)((long)ppppuVar13 + 4);
  if (local_e0 == ppppuVar1) {
    local_d0 = ppppuVar1;
    FUN_0052f310(&local_e0,(undefined1 *)((long)ppppuVar13 + 4),1,1,1);
  }
  ppppuVar2 = (undefined8 ****)((long)ppppuVar13 + 5);
  pcStack_d8[(long)ppppuVar1] = (code)0x30;
  if (local_e0 == ppppuVar2) {
    local_d0 = ppppuVar2;
    FUN_0052f310(&local_e0,local_e0,1,1,1);
  }
  pcStack_d8[(long)ppppuVar2] = (code)0x30;
  local_90 = (undefined8 ***)((long)ppppuVar13 + 6);
  ppuVar4 = *(ulong ***)(param_2 + 0x38);
  uVar5 = *(undefined8 *)(param_2 + 0x40);
  pcStack_98 = pcStack_d8;
  local_a0 = local_e0;
  local_e0 = (ulong ****)&local_a0;
  pcStack_d8 = FUN_0052b5e0;
  local_d0 = (undefined8 ****)&local_100;
  puStack_c8 = PTR_fmt_00b00d20;
  local_c0 = &local_f8;
  pcStack_b8 = FUN_004b32e0;
  local_b0 = (ulong ***)&local_e8;
  pcStack_a8 = FUN_004b32c4;
                    /* try { // try from 0052a0bc to 0052a0cf has its CatchHandler @ 0052a768 */
  local_100 = ppuVar22;
  local_f8 = ppuVar4;
  local_f0 = uVar5;
  local_e8 = (undefined8 ***)(param_2 + 0x50);
  alloc::fmt::format::format_inner(&local_128,&DAT_002b4caa,&local_e0);
  if (local_a0 != (undefined8 ****)0x0) {
    free(pcStack_98);
  }
  do {
    if (DAT_00b0bd18 != 0) {
      ClearExclusiveLocal();
                    /* try { // try from 0052a718 to 0052a723 has its CatchHandler @ 0052a728 */
      <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                (&DAT_00b0bd18);
      break;
    }
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(0xb0bd18,0x10);
    if (bVar9) {
      DAT_00b0bd18 = 1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) == 0) {
    bVar17 = 0;
  }
  else {
                    /* try { // try from 0052a5dc to 0052a5df has its CatchHandler @ 0052a728 */
    bVar17 = std::panicking::panic_count::is_zero_slow_path();
    bVar17 = bVar17 ^ 1;
  }
  if (DAT_00b0bd1c != '\0') {
    local_e0 = (ulong ****)&DAT_00b0bd18;
    uVar19 = (ulong)pcStack_d8 >> 8;
    pcStack_d8 = (code *)CONCAT71((int7)uVar19,bVar17);
                    /* try { // try from 0052a5f8 to 0052a61b has its CatchHandler @ 0052a7bc */
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              ("Failed to lock buffer",0x15,&local_e0,&PTR_FUN_00ace0b0,
               &PTR_s_mobile_rust_src_logger_rs_00ace170);
  }
  if (DAT_00b0bd38 == DAT_00b0bd20) {
                    /* try { // try from 0052a140 to 0052a14f has its CatchHandler @ 0052a740 */
    FUN_004bdb14(&DAT_00b0bd20);
  }
  uVar19 = DAT_00b0bd30 + DAT_00b0bd38;
  DAT_00b0bd38 = DAT_00b0bd38 + 1;
  uVar3 = 0;
  if (DAT_00b0bd20 <= uVar19) {
    uVar3 = DAT_00b0bd20;
  }
  puVar23 = (undefined8 *)(DAT_00b0bd28 + (uVar19 - uVar3) * 0x18);
  *puVar23 = local_128;
  puVar23[1] = CONCAT44(uStack_11c,uStack_120);
  puVar23[2] = local_118;
  uVar19 = DAT_00b0bd20;
  lVar11 = DAT_00b0bd28;
  while (1000 < DAT_00b0bd38) {
    plVar24 = (long *)(lVar11 + DAT_00b0bd30 * 0x18);
    DAT_00b0bd38 = DAT_00b0bd38 - 1;
    uVar3 = 0;
    if (uVar19 <= DAT_00b0bd30 + 1U) {
      uVar3 = uVar19;
    }
    DAT_00b0bd30 = (DAT_00b0bd30 + 1U) - uVar3;
    if (*plVar24 - 1U < 0xfffffffffffffffe) {
      free((void *)plVar24[1]);
      uVar19 = DAT_00b0bd20;
      lVar11 = DAT_00b0bd28;
    }
  }
  if ((((bVar17 & 1) == 0) &&
      ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) != 0)) &&
     (uVar19 = std::panicking::panic_count::is_zero_slow_path(), (uVar19 & 1) == 0)) {
    DAT_00b0bd1c = '\x01';
  }
  do {
    iVar18 = DAT_00b0bd18;
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(0xb0bd18,0x10);
    if (bVar9) {
      DAT_00b0bd18 = 0;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if (iVar18 == 2) {
    <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(&DAT_00b0bd18);
  }
  <&str_as<alloc::ffi::c_str::alloc::ffi::c_str::CString>::new::SpecNewImpl>::spec_new_impl
            (&local_a0,ppuVar4,uVar5);
  pppuVar15 = local_90;
  __ptr = pcStack_98;
  if (local_a0 != (undefined8 ****)0xffffffffffffffff) {
    pcStack_d8 = pcStack_98;
    local_e0 = local_a0;
    puStack_c8 = (undefined *)uStack_88;
    local_d0 = (undefined8 ****)local_90;
                    /* try { // try from 0052a63c to 0052a65f has its CatchHandler @ 0052a7a8 */
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              ("called `Result::unwrap()` on an `Err` value",0x2b,&local_e0,&PTR_FUN_00ace0d0,
               &PTR_s_mobile_rust_src_logger_rs_00ace110);
  }
  local_e0 = (ulong ****)&local_128;
  pcStack_d8 = FUN_004b32c4;
                    /* try { // try from 0052a258 to 0052a26b has its CatchHandler @ 0052a77c */
  local_128 = (undefined8 ***)(param_2 + 0x50);
  alloc::fmt::format::format_inner(&local_a0,&DAT_002ab692,&local_e0);
  pppuVar16 = local_90;
  pcVar14 = pcStack_98;
  ppppuVar13 = local_a0;
  auVar26._8_8_ = local_90;
  auVar26._0_8_ = pcStack_98;
  if (local_90 < (undefined8 ***)0x10) {
    pppuVar20 = (undefined8 ***)0x0;
    if (local_90 != (undefined8 ***)0x0) {
      do {
        auVar25._8_8_ = pppuVar20;
        auVar25._0_8_ = 1;
        if (pcStack_98[(long)pppuVar20] == (code)0x0) goto LAB_0052a2bc;
        pppuVar20 = (undefined8 ***)((long)pppuVar20 + 1);
      } while (local_90 != pppuVar20);
    }
  }
  else {
                    /* try { // try from 0052a2ac to 0052a2bb has its CatchHandler @ 0052a730 */
    auVar25 = core::slice::memchr::memchr_aligned(0,pcStack_98,local_90);
LAB_0052a2bc:
    if ((auVar25 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
      if (ppppuVar13 != (undefined8 ****)0xffffffffffffffff) {
        local_e0 = ppppuVar13;
        pcStack_d8 = pcVar14;
        local_d0 = (undefined8 ****)pppuVar16;
                    /* try { // try from 0052a2d0 to 0052a2f3 has its CatchHandler @ 0052a788 */
        puStack_c8 = (undefined *)auVar25._8_8_;
                    /* WARNING: Subroutine does not return */
        core::result::unwrap_failed
                  ("called `Result::unwrap()` on an `Err` value",0x2b,&local_e0,&PTR_FUN_00ace0d0,
                   &PTR_s_mobile_rust_src_logger_rs_00ace128);
      }
      goto LAB_0052a324;
    }
  }
  pcStack_d8 = pcStack_98;
  local_e0 = local_a0;
  local_d0 = (undefined8 ****)local_90;
                    /* try { // try from 0052a314 to 0052a31b has its CatchHandler @ 0052a77c */
  auVar26 = <alloc::ffi::c_str::alloc::ffi::c_str::CString>::_from_vec_unchecked(&local_e0);
LAB_0052a324:
  __ptr_00 = auVar26._0_8_;
  __android_log_write((uint)ppuVar22 ^ 7,__ptr,__ptr_00);
  *__ptr_00 = 0;
  if (auVar26._8_8_ != 0) {
    free(__ptr_00);
  }
  *__ptr = (code)0x0;
  if (pppuVar15 != (undefined8 ***)0x0) {
    free(__ptr);
  }
  return;
}


// ===== 0052a7e8  FUN_0052a7e8 =====

void FUN_0052a7e8(void)

{
  return;
}


// ===== 0052a7ec  FUN_0052a7ec =====

undefined8 FUN_0052a7ec(void)

{
  return 1;
}


// ===== 0052a7f4  FUN_0052a7f4 =====

void FUN_0052a7f4(ulong *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  size_t __size;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong local_78;
  undefined8 *puStack_70;
  ulong local_68;
  
  uVar4 = param_2[4];
  if (uVar4 == 0) {
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = 8;
    return;
  }
  lVar6 = *param_2;
  uVar10 = param_2[1];
  if (uVar10 == 0) {
    puVar8 = (undefined8 *)param_2[2];
    do {
      puVar2 = puVar8 + 1;
      lVar6 = lVar6 + -0x100;
      uVar10 = NEON_cmge(*puVar8,0,1);
      uVar10 = uVar10 & 0x8080808080808080;
      puVar8 = puVar2;
    } while (uVar10 == 0);
    param_2[2] = (long)puVar2;
    *param_2 = lVar6;
  }
  uVar1 = uVar4;
  if (uVar4 < 5) {
    uVar1 = 4;
  }
  uVar7 = uVar10 - 1 & uVar10;
  __size = uVar1 * 0x10;
  uVar3 = 0;
  lVar5 = uVar4 - 1;
  param_2[1] = uVar7;
  param_2[4] = lVar5;
  if ((uVar4 >> 0x3c == 0) && (__size < 0x7ffffffffffffff9)) {
    uVar4 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
    uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
    uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
    uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
    uVar4 = (ulong)*(byte *)(lVar6 + (LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) & 0x78U) * -4 + -0x20);
    uVar3 = *(undefined8 *)(&DAT_002c1300 + uVar4 * 8);
    puVar9 = (&PTR_s_LOGOUT_00ace2e8)[uVar4];
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puStack_70 = (undefined8 *)malloc(__size);
    if (puStack_70 != (undefined8 *)0x0) {
      *puStack_70 = puVar9;
      puStack_70[1] = uVar3;
      local_68 = 1;
      local_78 = uVar1;
      if (lVar5 != 0) {
        puVar8 = (undefined8 *)param_2[2];
        puVar2 = puStack_70;
        do {
          for (; uVar4 = local_68, uVar7 == 0; uVar7 = uVar7 & 0x8080808080808080) {
            lVar6 = lVar6 + -0x100;
            uVar7 = NEON_cmge(*puVar8,0,1);
            puVar8 = puVar8 + 1;
          }
          uVar10 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
          uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
          uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
          uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
          uVar10 = (ulong)*(byte *)(lVar6 + (LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) & 0x78U) * -4
                                   + -0x20);
          uVar3 = *(undefined8 *)(&DAT_002c1300 + uVar10 * 8);
          puVar9 = (&PTR_s_LOGOUT_00ace2e8)[uVar10];
          if (local_68 == local_78) {
                    /* try { // try from 0052a95c to 0052a973 has its CatchHandler @ 0052a9c8 */
            FUN_0052f310(&local_78,local_68,lVar5,8,0x10);
            puVar2 = puStack_70;
          }
          lVar5 = lVar5 + -1;
          local_68 = uVar4 + 1;
          uVar7 = uVar7 - 1 & uVar7;
          puVar2[uVar4 * 2] = puVar9;
          (puVar2 + uVar4 * 2)[1] = uVar3;
        } while (lVar5 != 0);
      }
      param_1[1] = (ulong)puStack_70;
      *param_1 = local_78;
      param_1[2] = local_68;
      return;
    }
    uVar3 = 8;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar3,__size);
}


// ===== 0052a9e4  FUN_0052a9e4 =====

void FUN_0052a9e4(long *param_1,undefined8 param_2)

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
              (auStack_40,&local_18,&DAT_00acaa60);
    lVar3 = local_18;
  }
  local_18 = lVar3;
  <core::fmt::builders::[6]::core::fmt::builders::DebugList>::finish(auStack_40);
  return;
}


// ===== 0052aa54  FUN_0052aa54 =====

void FUN_0052aa54(undefined8 *param_1)

{
  <serde_json::error::Error_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 0052aa5c  FUN_0052aa5c =====

void FUN_0052aa5c(long *param_1,undefined8 param_2)

{
  long local_18;
  
  local_18 = *param_1 + 0x18;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field2_finish
            (param_2,"FromUtf8Error",0xd,"bytes",5,*param_1,&PTR_FUN_00ace200,"error",5,&local_18,
             &DAT_00ace220);
  return;
}


// ===== 0052aacc  FUN_0052aacc =====

void FUN_0052aacc(long *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Debug>::fmt
            (*(undefined8 *)(*param_1 + 8),*(undefined8 *)(*param_1 + 0x10),param_2);
  return;
}


// ===== 0052aae0  FUN_0052aae0 =====

void FUN_0052aae0(undefined8 *param_1,undefined8 param_2)

{
  <dyn_Trait<Assoc=X>+serde::de::Expected_as_core::fmt::Display>::fmt(*param_1,param_1[1],param_2);
  return;
}


// ===== 0052aaf4  FUN_0052aaf4 =====

void FUN_0052aaf4(long *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt
            (*(undefined8 *)(*param_1 + 8),*(undefined8 *)(*param_1 + 0x10),param_2);
  return;
}


// ===== 0052ab08  FUN_0052ab08 =====

void FUN_0052ab08(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,"ErrorUndefinedNullBoolNumberBigIntStringSymbolObjectValue",5);
  return;
}


// ===== 0052ab1c  FUN_0052ab1c =====

void FUN_0052ab1c(byte *param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,&DAT_002c1410 + *(int *)(&DAT_002c1410 + (ulong)*param_1 * 4),
             *(undefined8 *)(&DAT_002c13c8 + (ulong)*param_1 * 8));
  return;
}


// ===== 0052ab44  FUN_0052ab44 =====

void FUN_0052ab44(long param_1,undefined8 param_2)

{
  long local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field2_finish
            (param_2,&DAT_002a1a30,8,param_1 + 0x18,&DAT_00ace288,&local_18,&DAT_00ace2a8);
  return;
}


// ===== 0052ab90  FUN_0052ab90 =====

undefined8 FUN_0052ab90(long *param_1,uint param_2)

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
    FUN_0052f310(param_1,lVar5,uVar6,1,1);
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


// ===== 0052acb4  FUN_0052acb4 =====

undefined8 FUN_0052acb4(long *param_1,void *param_2,ulong param_3)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if ((ulong)(*param_1 - lVar1) < param_3) {
    FUN_0052f310(param_1,lVar1,param_3,1,1);
    lVar1 = param_1[2];
  }
  else if (param_3 == 0) goto LAB_0052acf4;
  memcpy((void *)(param_1[1] + lVar1),param_2,param_3);
LAB_0052acf4:
  param_1[2] = lVar1 + param_3;
  return 0;
}


// ===== 0052ad38  FUN_0052ad38 =====

void FUN_0052ad38(undefined8 param_1,long param_2)

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


// ===== 0052ad50  FUN_0052ad50 =====

void FUN_0052ad50(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"a sequence",10);
  return;
}


// ===== 0052ad64  FUN_0052ad64 =====

void FUN_0052ad64(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"a tuple of size 2",0x11);
  return;
}


// ===== 0052ad78  FUN_0052ad78 =====

void FUN_0052ad78(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"a map",5);
  return;
}


// ===== 0052ad8c  FUN_0052ad8c =====

void FUN_0052ad8c(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"a sequence",10);
  return;
}


// ===== 0052ada0  <serde::de::impls::BoolVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <serde::de::impls::BoolVisitor_as_serde::de::Visitor>::expecting(void)

{
  (*(code *)PTR_expecting_00b021d0)();
  return;
}


// ===== 0052ada4  <serde::de::impls::StringVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <serde::de::impls::StringVisitor_as_serde::de::Visitor>::expecting(void)

{
  (*(code *)PTR_expecting_00b021d8)();
  return;
}


// ===== 0052ada8  <<u8_as_serde::de::Deserialize>::deserialize::PrimitiveVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<<u8_as_serde::de::Deserialize>::deserialize::PrimitiveVisitor_as_serde::de::Visitor>::expecting
          (void)

{
  (*(code *)PTR_expecting_00b021e0)();
  return;
}


// ===== 0052adac  <<u16_as_serde::de::Deserialize>::deserialize::PrimitiveVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<<u16_as_serde::de::Deserialize>::deserialize::PrimitiveVisitor_as_serde::de::Visitor>::expecting
          (void)

{
  (*(code *)PTR_expecting_00b021e8)();
  return;
}


// ===== 0052adb0  <<i32_as_serde::de::Deserialize>::deserialize::PrimitiveVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<<i32_as_serde::de::Deserialize>::deserialize::PrimitiveVisitor_as_serde::de::Visitor>::expecting
          (void)

{
  (*(code *)PTR_expecting_00b021f0)();
  return;
}


// ===== 0052adb4  <<i64_as_serde::de::Deserialize>::deserialize::PrimitiveVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<<i64_as_serde::de::Deserialize>::deserialize::PrimitiveVisitor_as_serde::de::Visitor>::expecting
          (void)

{
  (*(code *)PTR_expecting_00b021f8)();
  return;
}


// ===== 0052adb8  FUN_0052adb8 =====

void FUN_0052adb8(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,"RuntimeId",9,&local_18,&DAT_00ace2c8);
  return;
}


// ===== 0052adf8  FUN_0052adf8 =====

void FUN_0052adf8(ulong *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  size_t __size;
  ulong uVar2;
  ulong uVar3;
  ulong local_98;
  undefined8 *puStack_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  long *plStack_60;
  code *local_58;
  
  uVar2 = (ulong)(param_3 - param_2) >> 3;
  __size = uVar2 * 0x18;
  if (0x2aaaaaaaaaaaaaa8 < (ulong)(param_3 - param_2)) {
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(0,__size);
  }
  if (__size == 0) {
    local_98 = 0;
    puStack_90 = (undefined8 *)&DAT_00000008;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puStack_90 = (undefined8 *)malloc(__size);
    local_98 = uVar2;
    if (puStack_90 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(8,__size);
    }
  }
  if (param_2 == param_3) {
    uVar2 = 0;
  }
  else {
    uVar3 = 0;
    puVar1 = puStack_90;
    do {
      local_58 = FUN_004b3364;
                    /* try { // try from 0052ae90 to 0052ae9f has its CatchHandler @ 0052af10 */
      local_68 = param_2;
      plStack_60 = &local_68;
      alloc::fmt::format::format_inner(&local_80,&DAT_002c1bd4,&plStack_60);
      uVar3 = uVar3 + 1;
      param_2 = param_2 + 8;
      puVar1[1] = uStack_78;
      *puVar1 = local_80;
      puVar1[2] = local_70;
      puVar1 = puVar1 + 3;
    } while (uVar2 != uVar3);
  }
  param_1[1] = (ulong)puStack_90;
  *param_1 = local_98;
  param_1[2] = uVar2;
  return;
}


// ===== 0052af28  FUN_0052af28 =====

void FUN_0052af28(ulong *param_1,long param_2)

{
  size_t __size;
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_78;
  undefined8 *puStack_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar3 = *(ulong *)(param_2 + 0x10);
  __size = uVar3 * 0x20;
  if (uVar3 >> 0x3b != 0 || 0x7ffffffffffffff8 < __size) {
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(0,__size);
  }
  if (__size == 0) {
    local_78 = 0;
    puStack_70 = (undefined8 *)&DAT_00000008;
  }
  else {
    lVar1 = *(long *)(param_2 + 8);
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puStack_70 = (undefined8 *)malloc(__size);
    if (puStack_70 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(8,__size);
    }
    local_78 = uVar3;
    if (uVar3 != 0) {
      uVar4 = 0;
      puVar2 = puStack_70;
      do {
        if (__size == 0) break;
                    /* try { // try from 0052af98 to 0052afa3 has its CatchHandler @ 0052affc */
        FUN_0052b660(&local_60,lVar1);
        uVar4 = uVar4 + 1;
        lVar1 = lVar1 + 0x20;
        __size = __size - 0x20;
        puVar2[1] = uStack_58;
        *puVar2 = local_60;
        puVar2[3] = uStack_48;
        puVar2[2] = uStack_50;
        puVar2 = puVar2 + 4;
      } while (uVar3 != uVar4);
    }
  }
  param_1[1] = (ulong)puStack_70;
  *param_1 = local_78;
  param_1[2] = uVar3;
  return;
}


// ===== 0052b018  FUN_0052b018 =====

void FUN_0052b018(long param_1)

{
  char *pcVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    pcVar1 = *(char **)(param_1 + 8);
    do {
      if (*pcVar1 != -1) {
                    /* try { // try from 0052b050 to 0052b057 has its CatchHandler @ 0052b074 */
        FUN_00525f08(pcVar1);
                    /* try { // try from 0052b058 to 0052b05f has its CatchHandler @ 0052b088 */
        FUN_00525f08(pcVar1 + 0x20);
      }
      lVar2 = lVar2 + -1;
      pcVar1 = pcVar1 + 0x40;
    } while (lVar2 != 0);
  }
  return;
}


// ===== 0052b0b4  FUN_0052b0b4 =====

void FUN_0052b0b4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  for (lVar2 = *(long *)(param_1 + 0x10); lVar2 != 0; lVar2 = lVar2 + -1) {
    if (*(long *)(lVar1 + 0x40) != 0) {
                    /* try { // try from 0052b108 to 0052b10f has its CatchHandler @ 0052b124 */
      (**(code **)(*(long *)(lVar1 + 0x40) + 0x20))
                (lVar1 + 0x58,*(undefined8 *)(lVar1 + 0x48),*(undefined8 *)(lVar1 + 0x50));
    }
                    /* try { // try from 0052b0e4 to 0052b0eb has its CatchHandler @ 0052b144 */
    (**(code **)(*(long *)(lVar1 + 0x18) + 0x20))
              (lVar1 + 0x30,*(undefined8 *)(lVar1 + 0x20),*(undefined8 *)(lVar1 + 0x28));
    lVar1 = lVar1 + 0x68;
  }
  return;
}


// ===== 0052b170  FUN_0052b170 =====

void FUN_0052b170(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 != 0) {
    lVar7 = *(long *)(param_1 + 8);
    lVar6 = 0;
    do {
      lVar8 = lVar7 + lVar6 * 0x50;
      if (0x18 < *(byte *)(lVar8 + 0x28)) {
        plVar3 = *(long **)(lVar8 + 0x30);
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
                    /* try { // try from 0052b1ec to 0052b1ef has its CatchHandler @ 0052b21c */
          <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
        }
      }
      if (*(long *)(lVar8 + 0x10) != 0) {
        free(*(void **)(lVar8 + 0x18));
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != lVar5);
  }
  return;
}


// ===== 0052b258  FUN_0052b258 =====

void FUN_0052b258(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    lVar3 = *(long *)(param_1 + 8);
    lVar5 = 0;
    do {
      lVar4 = lVar3 + lVar5 * 0x248;
                    /* try { // try from 0052b2c4 to 0052b2cb has its CatchHandler @ 0052b380 */
      FUN_00525034(lVar4);
      lVar8 = *(long *)(lVar4 + 0x220);
      if (lVar8 != 0) {
        lVar9 = *(long *)(lVar4 + 0x230);
        if (lVar9 != 0) {
          puVar6 = *(undefined8 **)(lVar4 + 0x218);
          puVar7 = puVar6 + 1;
          uVar10 = NEON_cmge(*puVar6,0,1);
          uVar10 = uVar10 & 0x8080808080808080;
          do {
            for (; uVar10 == 0; uVar10 = uVar10 & 0x8080808080808080) {
              puVar6 = puVar6 + -0xc0;
              uVar10 = NEON_cmge(*puVar7,0,1);
              puVar7 = puVar7 + 1;
            }
            uVar1 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
            uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
                    /* try { // try from 0052b324 to 0052b327 has its CatchHandler @ 0052b398 */
            FUN_00512b50(puVar6 + (long)-(int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) *
                                  0x18 + -0x18);
            lVar9 = lVar9 + -1;
            uVar10 = uVar10 - 1 & uVar10;
          } while (lVar9 != 0);
        }
        if (lVar8 * 0xc1 != -0xc9) {
          free((void *)(*(long *)(lVar4 + 0x218) + lVar8 * -0xc0 + -0xc0));
        }
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != lVar2);
  }
  return;
}


// ===== 0052b3c4  FUN_0052b3c4 =====

void FUN_0052b3c4(long param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 != 0) {
    lVar4 = *(long *)(param_1 + 8);
    lVar10 = 0;
    do {
      lVar11 = *(long *)(lVar4 + lVar10 * 0x20 + 0x18);
      if (lVar11 != 0) {
        lVar8 = 0;
        lVar9 = *(long *)(lVar4 + lVar10 * 0x20 + 0x10);
        do {
          lVar7 = lVar9 + lVar8 * 0x70;
          if (0x18 < *(byte *)(lVar7 + 0x10)) {
            plVar5 = *(long **)(lVar7 + 0x18);
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
                    /* try { // try from 0052b498 to 0052b49b has its CatchHandler @ 0052b544 */
              <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
            }
          }
          if (*(byte *)(lVar7 + 0x28) != 0xff && 0x18 < *(byte *)(lVar7 + 0x28)) {
            plVar5 = *(long **)(lVar7 + 0x30);
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
                    /* try { // try from 0052b4f8 to 0052b4fb has its CatchHandler @ 0052b53c */
              <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
            }
          }
          plVar5 = *(long **)(lVar7 + 0x50);
          if (plVar5 != (long *)0x0) {
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
                    /* try { // try from 0052b4cc to 0052b4d3 has its CatchHandler @ 0052b580 */
              <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow((undefined8 *)(lVar7 + 0x50));
            }
          }
          lVar8 = lVar8 + 1;
        } while (lVar8 != lVar11);
      }
      lVar11 = lVar4 + lVar10 * 0x20;
      if (*(long *)(lVar11 + 8) != 0) {
        free(*(void **)(lVar11 + 0x10));
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 != lVar3);
  }
  return;
}


// ===== 0052b5e0  FUN_0052b5e0 =====

void FUN_0052b5e0(long param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt
            (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_2);
  return;
}


// ===== 0052b5f4  FUN_0052b5f4 =====

void FUN_0052b5f4(long param_1,undefined8 param_2)

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
              (auStack_40,&local_18,&DAT_00acaa60);
    lVar3 = local_18;
  }
  local_18 = lVar3;
  <core::fmt::builders::[6]::core::fmt::builders::DebugList>::finish(auStack_40);
  return;
}


// ===== 0052b660  FUN_0052b660 =====

void FUN_0052b660(undefined8 param_1,byte *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0052b690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_0052b694 + (ulong)(byte)(&DAT_002c0d14)[*param_2] * 4))();
  return;
}


// ===== 0052b844  FUN_0052b844 =====

void FUN_0052b844(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 *local_30;
  undefined *puStack_28;
  undefined8 *local_20;
  code *pcStack_18;
  
  local_30 = &local_48;
  puStack_28 = PTR_fmt_00b00c10;
  local_20 = &uStack_40;
  pcStack_18 = FUN_0052aae0;
  local_48 = param_1;
  uStack_40 = param_2;
  local_38 = param_3;
  FUN_0052847c(&DAT_002b8270,&local_30);
  return;
}


// ===== 0052b894  FUN_0052b894 =====

void FUN_0052b894(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long lStack_38;
  undefined1 *local_30;
  code *pcStack_28;
  undefined8 *local_20;
  undefined *puStack_18;
  
  local_30 = (undefined1 *)&local_50;
  local_50 = param_1;
  uStack_48 = param_2;
  if (param_4 == 0) {
    pcStack_28 = FUN_004b32e0;
    local_30 = (undefined1 *)&local_50;
    FUN_0052847c(&DAT_002aeac3,&local_30);
    return;
  }
  pcStack_28 = FUN_004b32e0;
  local_20 = &local_40;
  puStack_18 = PTR_fmt_00b00d28;
  local_40 = param_3;
  lStack_38 = param_4;
  FUN_0052847c(&DAT_002a71bf,&local_30);
  return;
}


// ===== 0052b914  <serde_json::error::Error_as_core::error::Error>::source =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <serde_json::error::Error_as_core::error::Error>::source(void)

{
  (*(code *)PTR_source_00b01b30)();
  return;
}


// ===== 0052b918  FUN_0052b918 =====

undefined8 FUN_0052b918(void)

{
  return 0;
}


// ===== 0052b920  FUN_0052b920 =====

void FUN_0052b920(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  core::fmt::write(param_1,&PTR_FUN_00ace240,param_2,param_3);
  return;
}


// ===== 0052b934  FUN_0052b934 =====

void FUN_0052b934(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 *local_48;
  code *pcStack_40;
  undefined1 uStack_31;
  
  uVar1 = <jsi::object::Object_as_jsi::value::IntoValue>::into_value(param_4);
  uVar4 = *param_2;
                    /* try { // try from 0052b968 to 0052b97f has its CatchHandler @ 0052b9e0 */
  lVar2 = <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__get(*param_1);
  if (lVar2 == 0) {
    pcStack_40 = FUN_0051bff8;
  }
  else {
    lVar3 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get
                      (*param_3);
    if (lVar3 != 0) {
      jsi_sys::ffi::base::ffi::Object_setProperty(uVar4,lVar2,lVar3,uVar1);
      return;
    }
    pcStack_40 = FUN_0051bfe0;
  }
  local_48 = &uStack_31;
                    /* try { // try from 0052b9c8 to 0052b9db has its CatchHandler @ 0052b9e0 */
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002b2091,&local_48,&PTR_s__root__cargo_registry_src_index__00accb50);
}


// ===== 0052b9f8  FUN_0052b9f8 =====

void FUN_0052b9f8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *local_48;
  code *pcStack_40;
  undefined1 uStack_31;
  
  uVar3 = *param_2;
                    /* try { // try from 0052ba1c to 0052ba2f has its CatchHandler @ 0052ba90 */
  lVar1 = <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__get(*param_1);
  if (lVar1 == 0) {
    pcStack_40 = FUN_0051bff8;
  }
  else {
    lVar2 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get
                      (*param_3);
    if (lVar2 != 0) {
      jsi_sys::ffi::base::ffi::Object_setProperty(uVar3,lVar1,lVar2,param_4);
      return;
    }
    pcStack_40 = FUN_0051bfe0;
  }
  local_48 = &uStack_31;
                    /* try { // try from 0052ba78 to 0052ba8b has its CatchHandler @ 0052ba90 */
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002b2091,&local_48,&PTR_s__root__cargo_registry_src_index__00accb50);
}


// ===== 0052baa8  FUN_0052baa8 =====

void FUN_0052baa8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined8 ***pppuVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long local_68;
  undefined8 **ppuStack_60;
  undefined1 *local_58;
  code *pcStack_50;
  undefined1 uStack_41;
  
  <&str_as_jsi::prop_name_id::IntoPropNameInput>::into_input(&local_68,param_3,param_4,param_2);
                    /* try { // try from 0052baec to 0052baff has its CatchHandler @ 0052bbbc */
  uVar2 = jsi_sys::ffi::base::ffi::String_fromUtf8(*param_2,param_5,param_6);
  uVar2 = <jsi::string::String_as_jsi::value::IntoValue>::into_value(uVar2,param_2);
  uVar5 = *param_2;
                    /* try { // try from 0052bb0c to 0052bb2f has its CatchHandler @ 0052bbc4 */
  lVar3 = <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__get(*param_1);
  if (lVar3 == 0) {
    pcStack_50 = FUN_0051bff8;
  }
  else {
    pppuVar1 = (undefined8 ***)ppuStack_60;
    if ((int)local_68 == 0) {
      pppuVar1 = &ppuStack_60;
    }
    lVar4 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get
                      (*pppuVar1);
    if (lVar4 != 0) {
                    /* try { // try from 0052bb38 to 0052bb47 has its CatchHandler @ 0052bbb8 */
      jsi_sys::ffi::base::ffi::Object_setProperty(uVar5,lVar3,lVar4,uVar2);
      if (local_68 != 0) {
        return;
      }
      <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__drop
                (ppuStack_60);
      return;
    }
    pcStack_50 = FUN_0051bfe0;
  }
  local_58 = &uStack_41;
                    /* try { // try from 0052bba0 to 0052bbb3 has its CatchHandler @ 0052bbc4 */
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002b2091,&local_58,&PTR_s__root__cargo_registry_src_index__00accb50);
}


// ===== 0052bbec  FUN_0052bbec =====

void FUN_0052bbec(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 ***pppuVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long local_68;
  undefined8 **ppuStack_60;
  undefined1 *local_58;
  code *pcStack_50;
  undefined1 uStack_41;
  
                    /* try { // try from 0052bc10 to 0052bc27 has its CatchHandler @ 0052bcf8 */
  <&str_as_jsi::prop_name_id::IntoPropNameInput>::into_input(&local_68,param_3,param_4,param_2);
                    /* try { // try from 0052bc28 to 0052bc33 has its CatchHandler @ 0052bcf0 */
  uVar2 = <jsi::object::Object_as_jsi::value::IntoValue>::into_value(param_5,param_2);
  uVar5 = *param_2;
                    /* try { // try from 0052bc40 to 0052bc63 has its CatchHandler @ 0052bd08 */
  lVar3 = <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__get(*param_1);
  if (lVar3 == 0) {
    pcStack_50 = FUN_0051bff8;
  }
  else {
    pppuVar1 = (undefined8 ***)ppuStack_60;
    if ((int)local_68 == 0) {
      pppuVar1 = &ppuStack_60;
    }
    lVar4 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get
                      (*pppuVar1);
    if (lVar4 != 0) {
                    /* try { // try from 0052bc6c to 0052bc7b has its CatchHandler @ 0052bcec */
      jsi_sys::ffi::base::ffi::Object_setProperty(uVar5,lVar3,lVar4,uVar2);
      if (local_68 != 0) {
        return;
      }
      <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__drop
                (ppuStack_60);
      return;
    }
    pcStack_50 = FUN_0051bfe0;
  }
  local_58 = &uStack_41;
                    /* try { // try from 0052bcd4 to 0052bce7 has its CatchHandler @ 0052bd08 */
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002b2091,&local_58,&PTR_s__root__cargo_registry_src_index__00accb50);
}


// ===== 0052bd30  FUN_0052bd30 =====

void FUN_0052bd30(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 *param_5)

{
  undefined8 ***pppuVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long local_78;
  undefined8 **ppuStack_70;
  undefined1 *local_68;
  code *pcStack_60;
  undefined1 uStack_51;
  
                    /* try { // try from 0052bd5c to 0052bd73 has its CatchHandler @ 0052bed0 */
  <&str_as_jsi::prop_name_id::IntoPropNameInput>::into_input(&local_78,param_3,param_4,param_2);
  uVar6 = *param_2;
  local_68 = param_5;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar2 = (undefined8 *)malloc(8);
  if (puVar2 == (undefined8 *)0x0) {
                    /* try { // try from 0052be4c to 0052be57 has its CatchHandler @ 0052bf0c */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,8);
  }
  *puVar2 = param_5;
  pppuVar1 = (undefined8 ***)ppuStack_70;
  if ((int)local_78 == 0) {
    pppuVar1 = &ppuStack_70;
  }
                    /* try { // try from 0052bda8 to 0052bdaf has its CatchHandler @ 0052bef8 */
  lVar3 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get
                    (*pppuVar1);
  if (lVar3 != 0) {
                    /* try { // try from 0052bdb4 to 0052bdcb has its CatchHandler @ 0052bec8 */
    uVar6 = jsi_sys::ffi::base::ffi::Function_createFromHostFunction
                      (uVar6,lVar3,2,puVar2,&PTR_FUN_00ace3b0);
                    /* try { // try from 0052bdcc to 0052bdd3 has its CatchHandler @ 0052bec4 */
    uVar6 = <jsi::function::Function_as_jsi::value::IntoValue>::into_value(uVar6,param_2);
    uVar5 = *param_2;
                    /* try { // try from 0052bde0 to 0052bdf3 has its CatchHandler @ 0052bf38 */
    lVar3 = <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__get
                      (*param_1);
    if (lVar3 == 0) {
      pcStack_60 = FUN_0051bff8;
    }
    else {
      lVar4 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get
                        (*pppuVar1);
      if (lVar4 != 0) {
                    /* try { // try from 0052bdfc to 0052be0b has its CatchHandler @ 0052bec0 */
        jsi_sys::ffi::base::ffi::Object_setProperty(uVar5,lVar3,lVar4,uVar6);
        if (local_78 != 0) {
          return;
        }
        <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__drop
                  (ppuStack_70);
        return;
      }
      pcStack_60 = FUN_0051bfe0;
    }
    local_68 = &uStack_51;
                    /* try { // try from 0052bea8 to 0052bebb has its CatchHandler @ 0052bf38 */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              (&DAT_002b2091,&local_68,&PTR_s__root__cargo_registry_src_index__00accb50);
  }
  local_68 = &uStack_51;
  pcStack_60 = FUN_0051bfe0;
                    /* try { // try from 0052be6c to 0052be83 has its CatchHandler @ 0052bef8 */
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002b2091,&local_68,&PTR_s__root__cargo_registry_src_index__00accb50);
}


// ===== 0052bf60  FUN_0052bf60 =====

void FUN_0052bf60(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 *param_5)

{
  undefined8 ***pppuVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long local_78;
  undefined8 **ppuStack_70;
  undefined1 *local_68;
  code *pcStack_60;
  undefined1 uStack_51;
  
                    /* try { // try from 0052bf8c to 0052bfa3 has its CatchHandler @ 0052c100 */
  <&str_as_jsi::prop_name_id::IntoPropNameInput>::into_input(&local_78,param_3,param_4,param_2);
  uVar6 = *param_2;
  local_68 = param_5;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar2 = (undefined8 *)malloc(8);
  if (puVar2 == (undefined8 *)0x0) {
                    /* try { // try from 0052c07c to 0052c087 has its CatchHandler @ 0052c13c */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,8);
  }
  *puVar2 = param_5;
  pppuVar1 = (undefined8 ***)ppuStack_70;
  if ((int)local_78 == 0) {
    pppuVar1 = &ppuStack_70;
  }
                    /* try { // try from 0052bfd8 to 0052bfdf has its CatchHandler @ 0052c128 */
  lVar3 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get
                    (*pppuVar1);
  if (lVar3 != 0) {
                    /* try { // try from 0052bfe4 to 0052bffb has its CatchHandler @ 0052c0f8 */
    uVar6 = jsi_sys::ffi::base::ffi::Function_createFromHostFunction
                      (uVar6,lVar3,1,puVar2,&PTR_FUN_00ace3d8);
                    /* try { // try from 0052bffc to 0052c003 has its CatchHandler @ 0052c0f4 */
    uVar6 = <jsi::function::Function_as_jsi::value::IntoValue>::into_value(uVar6,param_2);
    uVar5 = *param_2;
                    /* try { // try from 0052c010 to 0052c023 has its CatchHandler @ 0052c168 */
    lVar3 = <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__get
                      (*param_1);
    if (lVar3 == 0) {
      pcStack_60 = FUN_0051bff8;
    }
    else {
      lVar4 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get
                        (*pppuVar1);
      if (lVar4 != 0) {
                    /* try { // try from 0052c02c to 0052c03b has its CatchHandler @ 0052c0f0 */
        jsi_sys::ffi::base::ffi::Object_setProperty(uVar5,lVar3,lVar4,uVar6);
        if (local_78 != 0) {
          return;
        }
        <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__drop
                  (ppuStack_70);
        return;
      }
      pcStack_60 = FUN_0051bfe0;
    }
    local_68 = &uStack_51;
                    /* try { // try from 0052c0d8 to 0052c0eb has its CatchHandler @ 0052c168 */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              (&DAT_002b2091,&local_68,&PTR_s__root__cargo_registry_src_index__00accb50);
  }
  local_68 = &uStack_51;
  pcStack_60 = FUN_0051bfe0;
                    /* try { // try from 0052c09c to 0052c0b3 has its CatchHandler @ 0052c128 */
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002b2091,&local_68,&PTR_s__root__cargo_registry_src_index__00accb50);
}


// ===== 0052c190  FUN_0052c190 =====

void FUN_0052c190(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 *param_5)

{
  undefined8 ***pppuVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long local_78;
  undefined8 **ppuStack_70;
  undefined1 *local_68;
  code *pcStack_60;
  undefined1 uStack_51;
  
                    /* try { // try from 0052c1bc to 0052c1d3 has its CatchHandler @ 0052c330 */
  <&str_as_jsi::prop_name_id::IntoPropNameInput>::into_input(&local_78,param_3,param_4,param_2);
  uVar6 = *param_2;
  local_68 = param_5;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar2 = (undefined8 *)malloc(8);
  if (puVar2 == (undefined8 *)0x0) {
                    /* try { // try from 0052c2ac to 0052c2b7 has its CatchHandler @ 0052c36c */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,8);
  }
  *puVar2 = param_5;
  pppuVar1 = (undefined8 ***)ppuStack_70;
  if ((int)local_78 == 0) {
    pppuVar1 = &ppuStack_70;
  }
                    /* try { // try from 0052c208 to 0052c20f has its CatchHandler @ 0052c358 */
  lVar3 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get
                    (*pppuVar1);
  if (lVar3 != 0) {
                    /* try { // try from 0052c214 to 0052c22b has its CatchHandler @ 0052c328 */
    uVar6 = jsi_sys::ffi::base::ffi::Function_createFromHostFunction
                      (uVar6,lVar3,0,puVar2,&PTR_FUN_00ace400);
                    /* try { // try from 0052c22c to 0052c233 has its CatchHandler @ 0052c324 */
    uVar6 = <jsi::function::Function_as_jsi::value::IntoValue>::into_value(uVar6,param_2);
    uVar5 = *param_2;
                    /* try { // try from 0052c240 to 0052c253 has its CatchHandler @ 0052c398 */
    lVar3 = <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__get
                      (*param_1);
    if (lVar3 == 0) {
      pcStack_60 = FUN_0051bff8;
    }
    else {
      lVar4 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get
                        (*pppuVar1);
      if (lVar4 != 0) {
                    /* try { // try from 0052c25c to 0052c26b has its CatchHandler @ 0052c320 */
        jsi_sys::ffi::base::ffi::Object_setProperty(uVar5,lVar3,lVar4,uVar6);
        if (local_78 != 0) {
          return;
        }
        <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__drop
                  (ppuStack_70);
        return;
      }
      pcStack_60 = FUN_0051bfe0;
    }
    local_68 = &uStack_51;
                    /* try { // try from 0052c308 to 0052c31b has its CatchHandler @ 0052c398 */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              (&DAT_002b2091,&local_68,&PTR_s__root__cargo_registry_src_index__00accb50);
  }
  local_68 = &uStack_51;
  pcStack_60 = FUN_0051bfe0;
                    /* try { // try from 0052c2cc to 0052c2e3 has its CatchHandler @ 0052c358 */
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002b2091,&local_68,&PTR_s__root__cargo_registry_src_index__00accb50);
}


// ===== 0052c3c0  FUN_0052c3c0 =====

void FUN_0052c3c0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 ***pppuVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long local_68;
  undefined8 **ppuStack_60;
  undefined1 *local_58;
  code *pcStack_50;
  undefined1 uStack_41;
  
  <&str_as_jsi::prop_name_id::IntoPropNameInput>::into_input(&local_68,param_3,param_4,param_2);
  uVar4 = *param_2;
  pppuVar1 = (undefined8 ***)ppuStack_60;
  if ((int)local_68 == 0) {
    pppuVar1 = &ppuStack_60;
  }
                    /* try { // try from 0052c410 to 0052c433 has its CatchHandler @ 0052c518 */
  lVar2 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get
                    (*pppuVar1);
  if (lVar2 != 0) {
    uVar4 = jsi_sys::ffi::base::ffi::Function_createFromHostFunction(uVar4,lVar2,1,1,&DAT_00ace428);
                    /* try { // try from 0052c434 to 0052c43b has its CatchHandler @ 0052c514 */
    uVar4 = <jsi::function::Function_as_jsi::value::IntoValue>::into_value(uVar4,param_2);
    uVar5 = *param_2;
                    /* try { // try from 0052c448 to 0052c45b has its CatchHandler @ 0052c520 */
    lVar2 = <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__get
                      (*param_1);
    if (lVar2 == 0) {
      pcStack_50 = FUN_0051bff8;
    }
    else {
      lVar3 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get
                        (*pppuVar1);
      if (lVar3 != 0) {
                    /* try { // try from 0052c464 to 0052c473 has its CatchHandler @ 0052c510 */
        jsi_sys::ffi::base::ffi::Object_setProperty(uVar5,lVar2,lVar3,uVar4);
        if (local_68 != 0) {
          return;
        }
        <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__drop
                  (ppuStack_60);
        return;
      }
      pcStack_50 = FUN_0051bfe0;
    }
    local_58 = &uStack_41;
                    /* try { // try from 0052c4f8 to 0052c50b has its CatchHandler @ 0052c520 */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              (&DAT_002b2091,&local_58,&PTR_s__root__cargo_registry_src_index__00accb50);
  }
  local_58 = &uStack_41;
  pcStack_50 = FUN_0051bfe0;
                    /* try { // try from 0052c4bc to 0052c4d3 has its CatchHandler @ 0052c518 */
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002b2091,&local_58,&PTR_s__root__cargo_registry_src_index__00accb50);
}


// ===== 0052c544  FUN_0052c544 =====

void FUN_0052c544(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 *param_5)

{
  undefined8 ***pppuVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long local_78;
  undefined8 **ppuStack_70;
  undefined1 *local_68;
  code *pcStack_60;
  undefined1 uStack_51;
  
                    /* try { // try from 0052c570 to 0052c587 has its CatchHandler @ 0052c6e4 */
  <&str_as_jsi::prop_name_id::IntoPropNameInput>::into_input(&local_78,param_3,param_4,param_2);
  uVar6 = *param_2;
  local_68 = param_5;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar2 = (undefined8 *)malloc(8);
  if (puVar2 == (undefined8 *)0x0) {
                    /* try { // try from 0052c660 to 0052c66b has its CatchHandler @ 0052c720 */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,8);
  }
  *puVar2 = param_5;
  pppuVar1 = (undefined8 ***)ppuStack_70;
  if ((int)local_78 == 0) {
    pppuVar1 = &ppuStack_70;
  }
                    /* try { // try from 0052c5bc to 0052c5c3 has its CatchHandler @ 0052c70c */
  lVar3 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get
                    (*pppuVar1);
  if (lVar3 != 0) {
                    /* try { // try from 0052c5c8 to 0052c5df has its CatchHandler @ 0052c6dc */
    uVar6 = jsi_sys::ffi::base::ffi::Function_createFromHostFunction
                      (uVar6,lVar3,1,puVar2,&PTR_FUN_00ace450);
                    /* try { // try from 0052c5e0 to 0052c5e7 has its CatchHandler @ 0052c6d8 */
    uVar6 = <jsi::function::Function_as_jsi::value::IntoValue>::into_value(uVar6,param_2);
    uVar5 = *param_2;
                    /* try { // try from 0052c5f4 to 0052c607 has its CatchHandler @ 0052c74c */
    lVar3 = <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__get
                      (*param_1);
    if (lVar3 == 0) {
      pcStack_60 = FUN_0051bff8;
    }
    else {
      lVar4 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get
                        (*pppuVar1);
      if (lVar4 != 0) {
                    /* try { // try from 0052c610 to 0052c61f has its CatchHandler @ 0052c6d4 */
        jsi_sys::ffi::base::ffi::Object_setProperty(uVar5,lVar3,lVar4,uVar6);
        if (local_78 != 0) {
          return;
        }
        <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__drop
                  (ppuStack_70);
        return;
      }
      pcStack_60 = FUN_0051bfe0;
    }
    local_68 = &uStack_51;
                    /* try { // try from 0052c6bc to 0052c6cf has its CatchHandler @ 0052c74c */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              (&DAT_002b2091,&local_68,&PTR_s__root__cargo_registry_src_index__00accb50);
  }
  local_68 = &uStack_51;
  pcStack_60 = FUN_0051bfe0;
                    /* try { // try from 0052c680 to 0052c697 has its CatchHandler @ 0052c70c */
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002b2091,&local_68,&PTR_s__root__cargo_registry_src_index__00accb50);
}


// ===== 0052c774  FUN_0052c774 =====

void FUN_0052c774(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 *param_5)

{
  undefined8 ***pppuVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long local_78;
  undefined8 **ppuStack_70;
  undefined1 *local_68;
  code *pcStack_60;
  undefined1 uStack_51;
  
                    /* try { // try from 0052c7a0 to 0052c7b7 has its CatchHandler @ 0052c914 */
  <&str_as_jsi::prop_name_id::IntoPropNameInput>::into_input(&local_78,param_3,param_4,param_2);
  uVar6 = *param_2;
  local_68 = param_5;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar2 = (undefined8 *)malloc(8);
  if (puVar2 == (undefined8 *)0x0) {
                    /* try { // try from 0052c890 to 0052c89b has its CatchHandler @ 0052c950 */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,8);
  }
  *puVar2 = param_5;
  pppuVar1 = (undefined8 ***)ppuStack_70;
  if ((int)local_78 == 0) {
    pppuVar1 = &ppuStack_70;
  }
                    /* try { // try from 0052c7ec to 0052c7f3 has its CatchHandler @ 0052c93c */
  lVar3 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get
                    (*pppuVar1);
  if (lVar3 != 0) {
                    /* try { // try from 0052c7f8 to 0052c80f has its CatchHandler @ 0052c90c */
    uVar6 = jsi_sys::ffi::base::ffi::Function_createFromHostFunction
                      (uVar6,lVar3,1,puVar2,&PTR_FUN_00ace4f0);
                    /* try { // try from 0052c810 to 0052c817 has its CatchHandler @ 0052c908 */
    uVar6 = <jsi::function::Function_as_jsi::value::IntoValue>::into_value(uVar6,param_2);
    uVar5 = *param_2;
                    /* try { // try from 0052c824 to 0052c837 has its CatchHandler @ 0052c97c */
    lVar3 = <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__get
                      (*param_1);
    if (lVar3 == 0) {
      pcStack_60 = FUN_0051bff8;
    }
    else {
      lVar4 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get
                        (*pppuVar1);
      if (lVar4 != 0) {
                    /* try { // try from 0052c840 to 0052c84f has its CatchHandler @ 0052c904 */
        jsi_sys::ffi::base::ffi::Object_setProperty(uVar5,lVar3,lVar4,uVar6);
        if (local_78 != 0) {
          return;
        }
        <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__drop
                  (ppuStack_70);
        return;
      }
      pcStack_60 = FUN_0051bfe0;
    }
    local_68 = &uStack_51;
                    /* try { // try from 0052c8ec to 0052c8ff has its CatchHandler @ 0052c97c */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              (&DAT_002b2091,&local_68,&PTR_s__root__cargo_registry_src_index__00accb50);
  }
  local_68 = &uStack_51;
  pcStack_60 = FUN_0051bfe0;
                    /* try { // try from 0052c8b0 to 0052c8c7 has its CatchHandler @ 0052c93c */
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002b2091,&local_68,&PTR_s__root__cargo_registry_src_index__00accb50);
}


// ===== 0052c9a4  FUN_0052c9a4 =====

void FUN_0052c9a4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 *param_5)

{
  undefined8 ***pppuVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long local_78;
  undefined8 **ppuStack_70;
  undefined1 *local_68;
  code *pcStack_60;
  undefined1 uStack_51;
  
                    /* try { // try from 0052c9d0 to 0052c9e7 has its CatchHandler @ 0052cb44 */
  <&str_as_jsi::prop_name_id::IntoPropNameInput>::into_input(&local_78,param_3,param_4,param_2);
  uVar6 = *param_2;
  local_68 = param_5;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar2 = (undefined8 *)malloc(8);
  if (puVar2 == (undefined8 *)0x0) {
                    /* try { // try from 0052cac0 to 0052cacb has its CatchHandler @ 0052cb80 */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,8);
  }
  *puVar2 = param_5;
  pppuVar1 = (undefined8 ***)ppuStack_70;
  if ((int)local_78 == 0) {
    pppuVar1 = &ppuStack_70;
  }
                    /* try { // try from 0052ca1c to 0052ca23 has its CatchHandler @ 0052cb6c */
  lVar3 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get
                    (*pppuVar1);
  if (lVar3 != 0) {
                    /* try { // try from 0052ca28 to 0052ca3f has its CatchHandler @ 0052cb3c */
    uVar6 = jsi_sys::ffi::base::ffi::Function_createFromHostFunction
                      (uVar6,lVar3,2,puVar2,&PTR_FUN_00ace518);
                    /* try { // try from 0052ca40 to 0052ca47 has its CatchHandler @ 0052cb38 */
    uVar6 = <jsi::function::Function_as_jsi::value::IntoValue>::into_value(uVar6,param_2);
    uVar5 = *param_2;
                    /* try { // try from 0052ca54 to 0052ca67 has its CatchHandler @ 0052cbac */
    lVar3 = <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__get
                      (*param_1);
    if (lVar3 == 0) {
      pcStack_60 = FUN_0051bff8;
    }
    else {
      lVar4 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get
                        (*pppuVar1);
      if (lVar4 != 0) {
                    /* try { // try from 0052ca70 to 0052ca7f has its CatchHandler @ 0052cb34 */
        jsi_sys::ffi::base::ffi::Object_setProperty(uVar5,lVar3,lVar4,uVar6);
        if (local_78 != 0) {
          return;
        }
        <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__drop
                  (ppuStack_70);
        return;
      }
      pcStack_60 = FUN_0051bfe0;
    }
    local_68 = &uStack_51;
                    /* try { // try from 0052cb1c to 0052cb2f has its CatchHandler @ 0052cbac */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              (&DAT_002b2091,&local_68,&PTR_s__root__cargo_registry_src_index__00accb50);
  }
  local_68 = &uStack_51;
  pcStack_60 = FUN_0051bfe0;
                    /* try { // try from 0052cae0 to 0052caf7 has its CatchHandler @ 0052cb6c */
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002b2091,&local_68,&PTR_s__root__cargo_registry_src_index__00accb50);
}


// ===== 0052cbd4  FUN_0052cbd4 =====

void FUN_0052cbd4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 *param_5)

{
  undefined8 ***pppuVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long local_78;
  undefined8 **ppuStack_70;
  undefined1 *local_68;
  code *pcStack_60;
  undefined1 uStack_51;
  
                    /* try { // try from 0052cc00 to 0052cc17 has its CatchHandler @ 0052cd74 */
  <&str_as_jsi::prop_name_id::IntoPropNameInput>::into_input(&local_78,param_3,param_4,param_2);
  uVar6 = *param_2;
  local_68 = param_5;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar2 = (undefined8 *)malloc(8);
  if (puVar2 == (undefined8 *)0x0) {
                    /* try { // try from 0052ccf0 to 0052ccfb has its CatchHandler @ 0052cdb0 */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,8);
  }
  *puVar2 = param_5;
  pppuVar1 = (undefined8 ***)ppuStack_70;
  if ((int)local_78 == 0) {
    pppuVar1 = &ppuStack_70;
  }
                    /* try { // try from 0052cc4c to 0052cc53 has its CatchHandler @ 0052cd9c */
  lVar3 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get
                    (*pppuVar1);
  if (lVar3 != 0) {
                    /* try { // try from 0052cc58 to 0052cc6f has its CatchHandler @ 0052cd6c */
    uVar6 = jsi_sys::ffi::base::ffi::Function_createFromHostFunction
                      (uVar6,lVar3,1,puVar2,&PTR_FUN_00ace540);
                    /* try { // try from 0052cc70 to 0052cc77 has its CatchHandler @ 0052cd68 */
    uVar6 = <jsi::function::Function_as_jsi::value::IntoValue>::into_value(uVar6,param_2);
    uVar5 = *param_2;
                    /* try { // try from 0052cc84 to 0052cc97 has its CatchHandler @ 0052cddc */
    lVar3 = <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__get
                      (*param_1);
    if (lVar3 == 0) {
      pcStack_60 = FUN_0051bff8;
    }
    else {
      lVar4 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get
                        (*pppuVar1);
      if (lVar4 != 0) {
                    /* try { // try from 0052cca0 to 0052ccaf has its CatchHandler @ 0052cd64 */
        jsi_sys::ffi::base::ffi::Object_setProperty(uVar5,lVar3,lVar4,uVar6);
        if (local_78 != 0) {
          return;
        }
        <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__drop
                  (ppuStack_70);
        return;
      }
      pcStack_60 = FUN_0051bfe0;
    }
    local_68 = &uStack_51;
                    /* try { // try from 0052cd4c to 0052cd5f has its CatchHandler @ 0052cddc */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              (&DAT_002b2091,&local_68,&PTR_s__root__cargo_registry_src_index__00accb50);
  }
  local_68 = &uStack_51;
  pcStack_60 = FUN_0051bfe0;
                    /* try { // try from 0052cd10 to 0052cd27 has its CatchHandler @ 0052cd9c */
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002b2091,&local_68,&PTR_s__root__cargo_registry_src_index__00accb50);
}


// ===== 0052ce04  FUN_0052ce04 =====

void FUN_0052ce04(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 *param_5)

{
  undefined8 ***pppuVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long local_78;
  undefined8 **ppuStack_70;
  undefined1 *local_68;
  code *pcStack_60;
  undefined1 uStack_51;
  
                    /* try { // try from 0052ce30 to 0052ce47 has its CatchHandler @ 0052cfa4 */
  <&str_as_jsi::prop_name_id::IntoPropNameInput>::into_input(&local_78,param_3,param_4,param_2);
  uVar6 = *param_2;
  local_68 = param_5;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar2 = (undefined8 *)malloc(8);
  if (puVar2 == (undefined8 *)0x0) {
                    /* try { // try from 0052cf20 to 0052cf2b has its CatchHandler @ 0052cfe0 */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,8);
  }
  *puVar2 = param_5;
  pppuVar1 = (undefined8 ***)ppuStack_70;
  if ((int)local_78 == 0) {
    pppuVar1 = &ppuStack_70;
  }
                    /* try { // try from 0052ce7c to 0052ce83 has its CatchHandler @ 0052cfcc */
  lVar3 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get
                    (*pppuVar1);
  if (lVar3 != 0) {
                    /* try { // try from 0052ce88 to 0052ce9f has its CatchHandler @ 0052cf9c */
    uVar6 = jsi_sys::ffi::base::ffi::Function_createFromHostFunction
                      (uVar6,lVar3,0,puVar2,&PTR_FUN_00ace568);
                    /* try { // try from 0052cea0 to 0052cea7 has its CatchHandler @ 0052cf98 */
    uVar6 = <jsi::function::Function_as_jsi::value::IntoValue>::into_value(uVar6,param_2);
    uVar5 = *param_2;
                    /* try { // try from 0052ceb4 to 0052cec7 has its CatchHandler @ 0052d00c */
    lVar3 = <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__get
                      (*param_1);
    if (lVar3 == 0) {
      pcStack_60 = FUN_0051bff8;
    }
    else {
      lVar4 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get
                        (*pppuVar1);
      if (lVar4 != 0) {
                    /* try { // try from 0052ced0 to 0052cedf has its CatchHandler @ 0052cf94 */
        jsi_sys::ffi::base::ffi::Object_setProperty(uVar5,lVar3,lVar4,uVar6);
        if (local_78 != 0) {
          return;
        }
        <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__drop
                  (ppuStack_70);
        return;
      }
      pcStack_60 = FUN_0051bfe0;
    }
    local_68 = &uStack_51;
                    /* try { // try from 0052cf7c to 0052cf8f has its CatchHandler @ 0052d00c */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              (&DAT_002b2091,&local_68,&PTR_s__root__cargo_registry_src_index__00accb50);
  }
  local_68 = &uStack_51;
  pcStack_60 = FUN_0051bfe0;
                    /* try { // try from 0052cf40 to 0052cf57 has its CatchHandler @ 0052cfcc */
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002b2091,&local_68,&PTR_s__root__cargo_registry_src_index__00accb50);
}


// ===== 0052d034  FUN_0052d034 =====

void FUN_0052d034(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 *param_5)

{
  undefined8 ***pppuVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long local_78;
  undefined8 **ppuStack_70;
  undefined1 *local_68;
  code *pcStack_60;
  undefined1 uStack_51;
  
                    /* try { // try from 0052d060 to 0052d077 has its CatchHandler @ 0052d1d4 */
  <&str_as_jsi::prop_name_id::IntoPropNameInput>::into_input(&local_78,param_3,param_4,param_2);
  uVar6 = *param_2;
  local_68 = param_5;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar2 = (undefined8 *)malloc(8);
  if (puVar2 == (undefined8 *)0x0) {
                    /* try { // try from 0052d150 to 0052d15b has its CatchHandler @ 0052d210 */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,8);
  }
  *puVar2 = param_5;
  pppuVar1 = (undefined8 ***)ppuStack_70;
  if ((int)local_78 == 0) {
    pppuVar1 = &ppuStack_70;
  }
                    /* try { // try from 0052d0ac to 0052d0b3 has its CatchHandler @ 0052d1fc */
  lVar3 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get
                    (*pppuVar1);
  if (lVar3 != 0) {
                    /* try { // try from 0052d0b8 to 0052d0cf has its CatchHandler @ 0052d1cc */
    uVar6 = jsi_sys::ffi::base::ffi::Function_createFromHostFunction
                      (uVar6,lVar3,0,puVar2,&PTR_FUN_00ace590);
                    /* try { // try from 0052d0d0 to 0052d0d7 has its CatchHandler @ 0052d1c8 */
    uVar6 = <jsi::function::Function_as_jsi::value::IntoValue>::into_value(uVar6,param_2);
    uVar5 = *param_2;
                    /* try { // try from 0052d0e4 to 0052d0f7 has its CatchHandler @ 0052d23c */
    lVar3 = <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__get
                      (*param_1);
    if (lVar3 == 0) {
      pcStack_60 = FUN_0051bff8;
    }
    else {
      lVar4 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get
                        (*pppuVar1);
      if (lVar4 != 0) {
                    /* try { // try from 0052d100 to 0052d10f has its CatchHandler @ 0052d1c4 */
        jsi_sys::ffi::base::ffi::Object_setProperty(uVar5,lVar3,lVar4,uVar6);
        if (local_78 != 0) {
          return;
        }
        <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__drop
                  (ppuStack_70);
        return;
      }
      pcStack_60 = FUN_0051bfe0;
    }
    local_68 = &uStack_51;
                    /* try { // try from 0052d1ac to 0052d1bf has its CatchHandler @ 0052d23c */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              (&DAT_002b2091,&local_68,&PTR_s__root__cargo_registry_src_index__00accb50);
  }
  local_68 = &uStack_51;
  pcStack_60 = FUN_0051bfe0;
                    /* try { // try from 0052d170 to 0052d187 has its CatchHandler @ 0052d1fc */
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002b2091,&local_68,&PTR_s__root__cargo_registry_src_index__00accb50);
}


// ===== 0052d264  FUN_0052d264 =====

void FUN_0052d264(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 ***pppuVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long local_68;
  undefined8 **ppuStack_60;
  undefined1 *local_58;
  code *pcStack_50;
  undefined1 uStack_41;
  
  <&str_as_jsi::prop_name_id::IntoPropNameInput>::into_input(&local_68,param_3,param_4,param_2);
  uVar4 = *param_2;
  pppuVar1 = (undefined8 ***)ppuStack_60;
  if ((int)local_68 == 0) {
    pppuVar1 = &ppuStack_60;
  }
                    /* try { // try from 0052d2b4 to 0052d2d7 has its CatchHandler @ 0052d3bc */
  lVar2 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get
                    (*pppuVar1);
  if (lVar2 != 0) {
    uVar4 = jsi_sys::ffi::base::ffi::Function_createFromHostFunction(uVar4,lVar2,0,1,&DAT_00ace5b8);
                    /* try { // try from 0052d2d8 to 0052d2df has its CatchHandler @ 0052d3b8 */
    uVar4 = <jsi::function::Function_as_jsi::value::IntoValue>::into_value(uVar4,param_2);
    uVar5 = *param_2;
                    /* try { // try from 0052d2ec to 0052d2ff has its CatchHandler @ 0052d3c4 */
    lVar2 = <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__get
                      (*param_1);
    if (lVar2 == 0) {
      pcStack_50 = FUN_0051bff8;
    }
    else {
      lVar3 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get
                        (*pppuVar1);
      if (lVar3 != 0) {
                    /* try { // try from 0052d308 to 0052d317 has its CatchHandler @ 0052d3b4 */
        jsi_sys::ffi::base::ffi::Object_setProperty(uVar5,lVar2,lVar3,uVar4);
        if (local_68 != 0) {
          return;
        }
        <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__drop
                  (ppuStack_60);
        return;
      }
      pcStack_50 = FUN_0051bfe0;
    }
    local_58 = &uStack_41;
                    /* try { // try from 0052d39c to 0052d3af has its CatchHandler @ 0052d3c4 */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              (&DAT_002b2091,&local_58,&PTR_s__root__cargo_registry_src_index__00accb50);
  }
  local_58 = &uStack_41;
  pcStack_50 = FUN_0051bfe0;
                    /* try { // try from 0052d360 to 0052d377 has its CatchHandler @ 0052d3bc */
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002b2091,&local_58,&PTR_s__root__cargo_registry_src_index__00accb50);
}


// ===== 0052d3e8  FUN_0052d3e8 =====

void FUN_0052d3e8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 ***pppuVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long local_68;
  undefined8 **ppuStack_60;
  undefined1 *local_58;
  code *pcStack_50;
  undefined1 uStack_41;
  
  <&str_as_jsi::prop_name_id::IntoPropNameInput>::into_input(&local_68,param_3,param_4,param_2);
  uVar4 = *param_2;
  pppuVar1 = (undefined8 ***)ppuStack_60;
  if ((int)local_68 == 0) {
    pppuVar1 = &ppuStack_60;
  }
                    /* try { // try from 0052d438 to 0052d45b has its CatchHandler @ 0052d540 */
  lVar2 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get
                    (*pppuVar1);
  if (lVar2 != 0) {
    uVar4 = jsi_sys::ffi::base::ffi::Function_createFromHostFunction(uVar4,lVar2,2,1,&DAT_00ace5e0);
                    /* try { // try from 0052d45c to 0052d463 has its CatchHandler @ 0052d53c */
    uVar4 = <jsi::function::Function_as_jsi::value::IntoValue>::into_value(uVar4,param_2);
    uVar5 = *param_2;
                    /* try { // try from 0052d470 to 0052d483 has its CatchHandler @ 0052d548 */
    lVar2 = <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__get
                      (*param_1);
    if (lVar2 == 0) {
      pcStack_50 = FUN_0051bff8;
    }
    else {
      lVar3 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get
                        (*pppuVar1);
      if (lVar3 != 0) {
                    /* try { // try from 0052d48c to 0052d49b has its CatchHandler @ 0052d538 */
        jsi_sys::ffi::base::ffi::Object_setProperty(uVar5,lVar2,lVar3,uVar4);
        if (local_68 != 0) {
          return;
        }
        <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__drop
                  (ppuStack_60);
        return;
      }
      pcStack_50 = FUN_0051bfe0;
    }
    local_58 = &uStack_41;
                    /* try { // try from 0052d520 to 0052d533 has its CatchHandler @ 0052d548 */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              (&DAT_002b2091,&local_58,&PTR_s__root__cargo_registry_src_index__00accb50);
  }
  local_58 = &uStack_41;
  pcStack_50 = FUN_0051bfe0;
                    /* try { // try from 0052d4e4 to 0052d4fb has its CatchHandler @ 0052d540 */
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002b2091,&local_58,&PTR_s__root__cargo_registry_src_index__00accb50);
}


// ===== 0052d56c  FUN_0052d56c =====

void FUN_0052d56c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 ***pppuVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long local_68;
  undefined8 **ppuStack_60;
  undefined1 *local_58;
  code *pcStack_50;
  undefined1 uStack_41;
  
  <&str_as_jsi::prop_name_id::IntoPropNameInput>::into_input(&local_68,param_3,param_4,param_2);
  uVar4 = *param_2;
  pppuVar1 = (undefined8 ***)ppuStack_60;
  if ((int)local_68 == 0) {
    pppuVar1 = &ppuStack_60;
  }
                    /* try { // try from 0052d5bc to 0052d5df has its CatchHandler @ 0052d6c4 */
  lVar2 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get
                    (*pppuVar1);
  if (lVar2 != 0) {
    uVar4 = jsi_sys::ffi::base::ffi::Function_createFromHostFunction(uVar4,lVar2,0,1,&DAT_00ace608);
                    /* try { // try from 0052d5e0 to 0052d5e7 has its CatchHandler @ 0052d6c0 */
    uVar4 = <jsi::function::Function_as_jsi::value::IntoValue>::into_value(uVar4,param_2);
    uVar5 = *param_2;
                    /* try { // try from 0052d5f4 to 0052d607 has its CatchHandler @ 0052d6cc */
    lVar2 = <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__get
                      (*param_1);
    if (lVar2 == 0) {
      pcStack_50 = FUN_0051bff8;
    }
    else {
      lVar3 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get
                        (*pppuVar1);
      if (lVar3 != 0) {
                    /* try { // try from 0052d610 to 0052d61f has its CatchHandler @ 0052d6bc */
        jsi_sys::ffi::base::ffi::Object_setProperty(uVar5,lVar2,lVar3,uVar4);
        if (local_68 != 0) {
          return;
        }
        <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__drop
                  (ppuStack_60);
        return;
      }
      pcStack_50 = FUN_0051bfe0;
    }
    local_58 = &uStack_41;
                    /* try { // try from 0052d6a4 to 0052d6b7 has its CatchHandler @ 0052d6cc */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              (&DAT_002b2091,&local_58,&PTR_s__root__cargo_registry_src_index__00accb50);
  }
  local_58 = &uStack_41;
  pcStack_50 = FUN_0051bfe0;
                    /* try { // try from 0052d668 to 0052d67f has its CatchHandler @ 0052d6c4 */
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002b2091,&local_58,&PTR_s__root__cargo_registry_src_index__00accb50);
}


// ===== 0052d6f0  FUN_0052d6f0 =====

void FUN_0052d6f0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 ***pppuVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long local_68;
  undefined8 **ppuStack_60;
  undefined1 *local_58;
  code *pcStack_50;
  undefined1 uStack_41;
  
  <&str_as_jsi::prop_name_id::IntoPropNameInput>::into_input(&local_68,param_3,param_4,param_2);
  uVar4 = *param_2;
  pppuVar1 = (undefined8 ***)ppuStack_60;
  if ((int)local_68 == 0) {
    pppuVar1 = &ppuStack_60;
  }
                    /* try { // try from 0052d740 to 0052d763 has its CatchHandler @ 0052d848 */
  lVar2 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get
                    (*pppuVar1);
  if (lVar2 != 0) {
    uVar4 = jsi_sys::ffi::base::ffi::Function_createFromHostFunction(uVar4,lVar2,1,1,&DAT_00ace630);
                    /* try { // try from 0052d764 to 0052d76b has its CatchHandler @ 0052d844 */
    uVar4 = <jsi::function::Function_as_jsi::value::IntoValue>::into_value(uVar4,param_2);
    uVar5 = *param_2;
                    /* try { // try from 0052d778 to 0052d78b has its CatchHandler @ 0052d850 */
    lVar2 = <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__get
                      (*param_1);
    if (lVar2 == 0) {
      pcStack_50 = FUN_0051bff8;
    }
    else {
      lVar3 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get
                        (*pppuVar1);
      if (lVar3 != 0) {
                    /* try { // try from 0052d794 to 0052d7a3 has its CatchHandler @ 0052d840 */
        jsi_sys::ffi::base::ffi::Object_setProperty(uVar5,lVar2,lVar3,uVar4);
        if (local_68 != 0) {
          return;
        }
        <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__drop
                  (ppuStack_60);
        return;
      }
      pcStack_50 = FUN_0051bfe0;
    }
    local_58 = &uStack_41;
                    /* try { // try from 0052d828 to 0052d83b has its CatchHandler @ 0052d850 */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              (&DAT_002b2091,&local_58,&PTR_s__root__cargo_registry_src_index__00accb50);
  }
  local_58 = &uStack_41;
  pcStack_50 = FUN_0051bfe0;
                    /* try { // try from 0052d7ec to 0052d803 has its CatchHandler @ 0052d848 */
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002b2091,&local_58,&PTR_s__root__cargo_registry_src_index__00accb50);
}


// ===== 0052d874  FUN_0052d874 =====

void FUN_0052d874(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 ***pppuVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long local_68;
  undefined8 **ppuStack_60;
  undefined1 *local_58;
  code *pcStack_50;
  undefined1 uStack_41;
  
  <&str_as_jsi::prop_name_id::IntoPropNameInput>::into_input(&local_68,param_3,param_4,param_2);
  uVar4 = *param_2;
  pppuVar1 = (undefined8 ***)ppuStack_60;
  if ((int)local_68 == 0) {
    pppuVar1 = &ppuStack_60;
  }
                    /* try { // try from 0052d8c4 to 0052d8e7 has its CatchHandler @ 0052d9cc */
  lVar2 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get
                    (*pppuVar1);
  if (lVar2 != 0) {
    uVar4 = jsi_sys::ffi::base::ffi::Function_createFromHostFunction(uVar4,lVar2,1,1,&DAT_00ace658);
                    /* try { // try from 0052d8e8 to 0052d8ef has its CatchHandler @ 0052d9c8 */
    uVar4 = <jsi::function::Function_as_jsi::value::IntoValue>::into_value(uVar4,param_2);
    uVar5 = *param_2;
                    /* try { // try from 0052d8fc to 0052d90f has its CatchHandler @ 0052d9d4 */
    lVar2 = <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__get
                      (*param_1);
    if (lVar2 == 0) {
      pcStack_50 = FUN_0051bff8;
    }
    else {
      lVar3 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get
                        (*pppuVar1);
      if (lVar3 != 0) {
                    /* try { // try from 0052d918 to 0052d927 has its CatchHandler @ 0052d9c4 */
        jsi_sys::ffi::base::ffi::Object_setProperty(uVar5,lVar2,lVar3,uVar4);
        if (local_68 != 0) {
          return;
        }
        <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__drop
                  (ppuStack_60);
        return;
      }
      pcStack_50 = FUN_0051bfe0;
    }
    local_58 = &uStack_41;
                    /* try { // try from 0052d9ac to 0052d9bf has its CatchHandler @ 0052d9d4 */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              (&DAT_002b2091,&local_58,&PTR_s__root__cargo_registry_src_index__00accb50);
  }
  local_58 = &uStack_41;
  pcStack_50 = FUN_0051bfe0;
                    /* try { // try from 0052d970 to 0052d987 has its CatchHandler @ 0052d9cc */
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002b2091,&local_58,&PTR_s__root__cargo_registry_src_index__00accb50);
}


// ===== 0052d9f8  FUN_0052d9f8 =====

void FUN_0052d9f8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 ***pppuVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long local_68;
  undefined8 **ppuStack_60;
  undefined1 *local_58;
  code *pcStack_50;
  undefined1 uStack_41;
  
  <&str_as_jsi::prop_name_id::IntoPropNameInput>::into_input(&local_68,param_3,param_4,param_2);
  uVar4 = *param_2;
  pppuVar1 = (undefined8 ***)ppuStack_60;
  if ((int)local_68 == 0) {
    pppuVar1 = &ppuStack_60;
  }
                    /* try { // try from 0052da48 to 0052da6b has its CatchHandler @ 0052db50 */
  lVar2 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get
                    (*pppuVar1);
  if (lVar2 != 0) {
    uVar4 = jsi_sys::ffi::base::ffi::Function_createFromHostFunction(uVar4,lVar2,1,1,&DAT_00ace680);
                    /* try { // try from 0052da6c to 0052da73 has its CatchHandler @ 0052db4c */
    uVar4 = <jsi::function::Function_as_jsi::value::IntoValue>::into_value(uVar4,param_2);
    uVar5 = *param_2;
                    /* try { // try from 0052da80 to 0052da93 has its CatchHandler @ 0052db58 */
    lVar2 = <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__get
                      (*param_1);
    if (lVar2 == 0) {
      pcStack_50 = FUN_0051bff8;
    }
    else {
      lVar3 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get
                        (*pppuVar1);
      if (lVar3 != 0) {
                    /* try { // try from 0052da9c to 0052daab has its CatchHandler @ 0052db48 */
        jsi_sys::ffi::base::ffi::Object_setProperty(uVar5,lVar2,lVar3,uVar4);
        if (local_68 != 0) {
          return;
        }
        <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__drop
                  (ppuStack_60);
        return;
      }
      pcStack_50 = FUN_0051bfe0;
    }
    local_58 = &uStack_41;
                    /* try { // try from 0052db30 to 0052db43 has its CatchHandler @ 0052db58 */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              (&DAT_002b2091,&local_58,&PTR_s__root__cargo_registry_src_index__00accb50);
  }
  local_58 = &uStack_41;
  pcStack_50 = FUN_0051bfe0;
                    /* try { // try from 0052daf4 to 0052db0b has its CatchHandler @ 0052db50 */
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002b2091,&local_58,&PTR_s__root__cargo_registry_src_index__00accb50);
}


// ===== 0052db7c  FUN_0052db7c =====

void FUN_0052db7c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 ***pppuVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long local_68;
  undefined8 **ppuStack_60;
  undefined1 *local_58;
  code *pcStack_50;
  undefined1 uStack_41;
  
  <&str_as_jsi::prop_name_id::IntoPropNameInput>::into_input(&local_68,param_3,param_4,param_2);
  uVar4 = *param_2;
  pppuVar1 = (undefined8 ***)ppuStack_60;
  if ((int)local_68 == 0) {
    pppuVar1 = &ppuStack_60;
  }
                    /* try { // try from 0052dbcc to 0052dbef has its CatchHandler @ 0052dcd4 */
  lVar2 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get
                    (*pppuVar1);
  if (lVar2 != 0) {
    uVar4 = jsi_sys::ffi::base::ffi::Function_createFromHostFunction(uVar4,lVar2,1,1,&DAT_00ace6a8);
                    /* try { // try from 0052dbf0 to 0052dbf7 has its CatchHandler @ 0052dcd0 */
    uVar4 = <jsi::function::Function_as_jsi::value::IntoValue>::into_value(uVar4,param_2);
    uVar5 = *param_2;
                    /* try { // try from 0052dc04 to 0052dc17 has its CatchHandler @ 0052dcdc */
    lVar2 = <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__get
                      (*param_1);
    if (lVar2 == 0) {
      pcStack_50 = FUN_0051bff8;
    }
    else {
      lVar3 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get
                        (*pppuVar1);
      if (lVar3 != 0) {
                    /* try { // try from 0052dc20 to 0052dc2f has its CatchHandler @ 0052dccc */
        jsi_sys::ffi::base::ffi::Object_setProperty(uVar5,lVar2,lVar3,uVar4);
        if (local_68 != 0) {
          return;
        }
        <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__drop
                  (ppuStack_60);
        return;
      }
      pcStack_50 = FUN_0051bfe0;
    }
    local_58 = &uStack_41;
                    /* try { // try from 0052dcb4 to 0052dcc7 has its CatchHandler @ 0052dcdc */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              (&DAT_002b2091,&local_58,&PTR_s__root__cargo_registry_src_index__00accb50);
  }
  local_58 = &uStack_41;
  pcStack_50 = FUN_0051bfe0;
                    /* try { // try from 0052dc78 to 0052dc8f has its CatchHandler @ 0052dcd4 */
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002b2091,&local_58,&PTR_s__root__cargo_registry_src_index__00accb50);
}


// ===== 0052dd00  FUN_0052dd00 =====

void FUN_0052dd00(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 ***pppuVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long local_68;
  undefined8 **ppuStack_60;
  undefined1 *local_58;
  code *pcStack_50;
  undefined1 uStack_41;
  
  <&str_as_jsi::prop_name_id::IntoPropNameInput>::into_input(&local_68,param_3,param_4,param_2);
  uVar4 = *param_2;
  pppuVar1 = (undefined8 ***)ppuStack_60;
  if ((int)local_68 == 0) {
    pppuVar1 = &ppuStack_60;
  }
                    /* try { // try from 0052dd50 to 0052dd73 has its CatchHandler @ 0052de58 */
  lVar2 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get
                    (*pppuVar1);
  if (lVar2 != 0) {
    uVar4 = jsi_sys::ffi::base::ffi::Function_createFromHostFunction(uVar4,lVar2,0,1,&DAT_00ace6d0);
                    /* try { // try from 0052dd74 to 0052dd7b has its CatchHandler @ 0052de54 */
    uVar4 = <jsi::function::Function_as_jsi::value::IntoValue>::into_value(uVar4,param_2);
    uVar5 = *param_2;
                    /* try { // try from 0052dd88 to 0052dd9b has its CatchHandler @ 0052de60 */
    lVar2 = <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__get
                      (*param_1);
    if (lVar2 == 0) {
      pcStack_50 = FUN_0051bff8;
    }
    else {
      lVar3 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get
                        (*pppuVar1);
      if (lVar3 != 0) {
                    /* try { // try from 0052dda4 to 0052ddb3 has its CatchHandler @ 0052de50 */
        jsi_sys::ffi::base::ffi::Object_setProperty(uVar5,lVar2,lVar3,uVar4);
        if (local_68 != 0) {
          return;
        }
        <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__drop
                  (ppuStack_60);
        return;
      }
      pcStack_50 = FUN_0051bfe0;
    }
    local_58 = &uStack_41;
                    /* try { // try from 0052de38 to 0052de4b has its CatchHandler @ 0052de60 */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              (&DAT_002b2091,&local_58,&PTR_s__root__cargo_registry_src_index__00accb50);
  }
  local_58 = &uStack_41;
  pcStack_50 = FUN_0051bfe0;
                    /* try { // try from 0052ddfc to 0052de13 has its CatchHandler @ 0052de58 */
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002b2091,&local_58,&PTR_s__root__cargo_registry_src_index__00accb50);
}


// ===== 0052de84  FUN_0052de84 =====

void FUN_0052de84(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 ***pppuVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long local_68;
  undefined8 **ppuStack_60;
  undefined1 *local_58;
  code *pcStack_50;
  undefined1 uStack_41;
  
  <&str_as_jsi::prop_name_id::IntoPropNameInput>::into_input(&local_68,param_3,param_4,param_2);
  uVar4 = *param_2;
  pppuVar1 = (undefined8 ***)ppuStack_60;
  if ((int)local_68 == 0) {
    pppuVar1 = &ppuStack_60;
  }
                    /* try { // try from 0052ded4 to 0052def7 has its CatchHandler @ 0052dfdc */
  lVar2 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get
                    (*pppuVar1);
  if (lVar2 != 0) {
    uVar4 = jsi_sys::ffi::base::ffi::Function_createFromHostFunction(uVar4,lVar2,2,1,&DAT_00ace6f8);
                    /* try { // try from 0052def8 to 0052deff has its CatchHandler @ 0052dfd8 */
    uVar4 = <jsi::function::Function_as_jsi::value::IntoValue>::into_value(uVar4,param_2);
    uVar5 = *param_2;
                    /* try { // try from 0052df0c to 0052df1f has its CatchHandler @ 0052dfe4 */
    lVar2 = <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__get
                      (*param_1);
    if (lVar2 == 0) {
      pcStack_50 = FUN_0051bff8;
    }
    else {
      lVar3 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get
                        (*pppuVar1);
      if (lVar3 != 0) {
                    /* try { // try from 0052df28 to 0052df37 has its CatchHandler @ 0052dfd4 */
        jsi_sys::ffi::base::ffi::Object_setProperty(uVar5,lVar2,lVar3,uVar4);
        if (local_68 != 0) {
          return;
        }
        <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__drop
                  (ppuStack_60);
        return;
      }
      pcStack_50 = FUN_0051bfe0;
    }
    local_58 = &uStack_41;
                    /* try { // try from 0052dfbc to 0052dfcf has its CatchHandler @ 0052dfe4 */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              (&DAT_002b2091,&local_58,&PTR_s__root__cargo_registry_src_index__00accb50);
  }
  local_58 = &uStack_41;
  pcStack_50 = FUN_0051bfe0;
                    /* try { // try from 0052df80 to 0052df97 has its CatchHandler @ 0052dfdc */
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002b2091,&local_58,&PTR_s__root__cargo_registry_src_index__00accb50);
}


// ===== 0052e008  FUN_0052e008 =====

void FUN_0052e008(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 ***pppuVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long local_68;
  undefined8 **ppuStack_60;
  undefined1 *local_58;
  code *pcStack_50;
  undefined1 uStack_41;
  
  <&str_as_jsi::prop_name_id::IntoPropNameInput>::into_input(&local_68,param_3,param_4,param_2);
  uVar4 = *param_2;
  pppuVar1 = (undefined8 ***)ppuStack_60;
  if ((int)local_68 == 0) {
    pppuVar1 = &ppuStack_60;
  }
                    /* try { // try from 0052e058 to 0052e07b has its CatchHandler @ 0052e160 */
  lVar2 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get
                    (*pppuVar1);
  if (lVar2 != 0) {
    uVar4 = jsi_sys::ffi::base::ffi::Function_createFromHostFunction(uVar4,lVar2,1,1,&DAT_00ace720);
                    /* try { // try from 0052e07c to 0052e083 has its CatchHandler @ 0052e15c */
    uVar4 = <jsi::function::Function_as_jsi::value::IntoValue>::into_value(uVar4,param_2);
    uVar5 = *param_2;
                    /* try { // try from 0052e090 to 0052e0a3 has its CatchHandler @ 0052e168 */
    lVar2 = <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__get
                      (*param_1);
    if (lVar2 == 0) {
      pcStack_50 = FUN_0051bff8;
    }
    else {
      lVar3 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get
                        (*pppuVar1);
      if (lVar3 != 0) {
                    /* try { // try from 0052e0ac to 0052e0bb has its CatchHandler @ 0052e158 */
        jsi_sys::ffi::base::ffi::Object_setProperty(uVar5,lVar2,lVar3,uVar4);
        if (local_68 != 0) {
          return;
        }
        <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__drop
                  (ppuStack_60);
        return;
      }
      pcStack_50 = FUN_0051bfe0;
    }
    local_58 = &uStack_41;
                    /* try { // try from 0052e140 to 0052e153 has its CatchHandler @ 0052e168 */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              (&DAT_002b2091,&local_58,&PTR_s__root__cargo_registry_src_index__00accb50);
  }
  local_58 = &uStack_41;
  pcStack_50 = FUN_0051bfe0;
                    /* try { // try from 0052e104 to 0052e11b has its CatchHandler @ 0052e160 */
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002b2091,&local_58,&PTR_s__root__cargo_registry_src_index__00accb50);
}


// ===== 0052e18c  FUN_0052e18c =====

void FUN_0052e18c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 ***pppuVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long local_68;
  undefined8 **ppuStack_60;
  undefined1 *local_58;
  code *pcStack_50;
  undefined1 uStack_41;
  
  <&str_as_jsi::prop_name_id::IntoPropNameInput>::into_input(&local_68,param_3,param_4,param_2);
  uVar4 = *param_2;
  pppuVar1 = (undefined8 ***)ppuStack_60;
  if ((int)local_68 == 0) {
    pppuVar1 = &ppuStack_60;
  }
                    /* try { // try from 0052e1dc to 0052e1ff has its CatchHandler @ 0052e2e4 */
  lVar2 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get
                    (*pppuVar1);
  if (lVar2 != 0) {
    uVar4 = jsi_sys::ffi::base::ffi::Function_createFromHostFunction(uVar4,lVar2,0,1,&DAT_00ace748);
                    /* try { // try from 0052e200 to 0052e207 has its CatchHandler @ 0052e2e0 */
    uVar4 = <jsi::function::Function_as_jsi::value::IntoValue>::into_value(uVar4,param_2);
    uVar5 = *param_2;
                    /* try { // try from 0052e214 to 0052e227 has its CatchHandler @ 0052e2ec */
    lVar2 = <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__get
                      (*param_1);
    if (lVar2 == 0) {
      pcStack_50 = FUN_0051bff8;
    }
    else {
      lVar3 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get
                        (*pppuVar1);
      if (lVar3 != 0) {
                    /* try { // try from 0052e230 to 0052e23f has its CatchHandler @ 0052e2dc */
        jsi_sys::ffi::base::ffi::Object_setProperty(uVar5,lVar2,lVar3,uVar4);
        if (local_68 != 0) {
          return;
        }
        <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__drop
                  (ppuStack_60);
        return;
      }
      pcStack_50 = FUN_0051bfe0;
    }
    local_58 = &uStack_41;
                    /* try { // try from 0052e2c4 to 0052e2d7 has its CatchHandler @ 0052e2ec */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              (&DAT_002b2091,&local_58,&PTR_s__root__cargo_registry_src_index__00accb50);
  }
  local_58 = &uStack_41;
  pcStack_50 = FUN_0051bfe0;
                    /* try { // try from 0052e288 to 0052e29f has its CatchHandler @ 0052e2e4 */
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002b2091,&local_58,&PTR_s__root__cargo_registry_src_index__00accb50);
}


// ===== 0052e310  FUN_0052e310 =====

void FUN_0052e310(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 ***pppuVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long local_68;
  undefined8 **ppuStack_60;
  undefined1 *local_58;
  code *pcStack_50;
  undefined1 uStack_41;
  
  <&str_as_jsi::prop_name_id::IntoPropNameInput>::into_input(&local_68,param_3,param_4,param_2);
  uVar4 = *param_2;
  pppuVar1 = (undefined8 ***)ppuStack_60;
  if ((int)local_68 == 0) {
    pppuVar1 = &ppuStack_60;
  }
                    /* try { // try from 0052e360 to 0052e383 has its CatchHandler @ 0052e468 */
  lVar2 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get
                    (*pppuVar1);
  if (lVar2 != 0) {
    uVar4 = jsi_sys::ffi::base::ffi::Function_createFromHostFunction(uVar4,lVar2,1,1,&DAT_00ace770);
                    /* try { // try from 0052e384 to 0052e38b has its CatchHandler @ 0052e464 */
    uVar4 = <jsi::function::Function_as_jsi::value::IntoValue>::into_value(uVar4,param_2);
    uVar5 = *param_2;
                    /* try { // try from 0052e398 to 0052e3ab has its CatchHandler @ 0052e470 */
    lVar2 = <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__get
                      (*param_1);
    if (lVar2 == 0) {
      pcStack_50 = FUN_0051bff8;
    }
    else {
      lVar3 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get
                        (*pppuVar1);
      if (lVar3 != 0) {
                    /* try { // try from 0052e3b4 to 0052e3c3 has its CatchHandler @ 0052e460 */
        jsi_sys::ffi::base::ffi::Object_setProperty(uVar5,lVar2,lVar3,uVar4);
        if (local_68 != 0) {
          return;
        }
        <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__drop
                  (ppuStack_60);
        return;
      }
      pcStack_50 = FUN_0051bfe0;
    }
    local_58 = &uStack_41;
                    /* try { // try from 0052e448 to 0052e45b has its CatchHandler @ 0052e470 */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              (&DAT_002b2091,&local_58,&PTR_s__root__cargo_registry_src_index__00accb50);
  }
  local_58 = &uStack_41;
  pcStack_50 = FUN_0051bfe0;
                    /* try { // try from 0052e40c to 0052e423 has its CatchHandler @ 0052e468 */
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002b2091,&local_58,&PTR_s__root__cargo_registry_src_index__00accb50);
}


// ===== 0052e494  FUN_0052e494 =====

void FUN_0052e494(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 ***pppuVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long local_68;
  undefined8 **ppuStack_60;
  undefined1 *local_58;
  code *pcStack_50;
  undefined1 uStack_41;
  
                    /* try { // try from 0052e4b8 to 0052e4cf has its CatchHandler @ 0052e58c */
  <&str_as_jsi::prop_name_id::IntoPropNameInput>::into_input(&local_68,param_3,param_4,param_2);
  uVar4 = *param_2;
                    /* try { // try from 0052e4d8 to 0052e4fb has its CatchHandler @ 0052e59c */
  lVar2 = <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__get(*param_1);
  if (lVar2 == 0) {
    pcStack_50 = FUN_0051bff8;
  }
  else {
    pppuVar1 = (undefined8 ***)ppuStack_60;
    if ((int)local_68 == 0) {
      pppuVar1 = &ppuStack_60;
    }
    lVar3 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get
                      (*pppuVar1);
    if (lVar3 != 0) {
                    /* try { // try from 0052e504 to 0052e513 has its CatchHandler @ 0052e584 */
      jsi_sys::ffi::base::ffi::Object_setProperty(uVar4,lVar2,lVar3,param_5);
      if (local_68 != 0) {
        return;
      }
      <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__drop
                (ppuStack_60);
      return;
    }
    pcStack_50 = FUN_0051bfe0;
  }
  local_58 = &uStack_41;
                    /* try { // try from 0052e56c to 0052e57f has its CatchHandler @ 0052e59c */
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002b2091,&local_58,&PTR_s__root__cargo_registry_src_index__00accb50);
}


// ===== 0052e5c4  FUN_0052e5c4 =====

void FUN_0052e5c4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 long *param_5)

{
  undefined8 ***pppuVar1;
  void *__ptr;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long local_68;
  undefined8 **ppuStack_60;
  undefined1 *local_58;
  code *pcStack_50;
  undefined1 uStack_41;
  
                    /* try { // try from 0052e5e8 to 0052e5ff has its CatchHandler @ 0052e6e8 */
  <&str_as_jsi::prop_name_id::IntoPropNameInput>::into_input(&local_68,param_3,param_4,param_2);
  lVar3 = *param_5;
  __ptr = (void *)param_5[1];
                    /* try { // try from 0052e60c to 0052e61b has its CatchHandler @ 0052e704 */
  uVar2 = jsi_sys::ffi::base::ffi::String_fromUtf8(*param_2,__ptr,param_5[2]);
  uVar2 = <jsi::string::String_as_jsi::value::IntoValue>::into_value(uVar2,param_2);
  if (lVar3 != 0) {
    free(__ptr);
  }
  uVar5 = *param_2;
                    /* try { // try from 0052e634 to 0052e657 has its CatchHandler @ 0052e718 */
  lVar3 = <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__get(*param_1);
  if (lVar3 == 0) {
    pcStack_50 = FUN_0051bff8;
  }
  else {
    pppuVar1 = (undefined8 ***)ppuStack_60;
    if ((int)local_68 == 0) {
      pppuVar1 = &ppuStack_60;
    }
    lVar4 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get
                      (*pppuVar1);
    if (lVar4 != 0) {
                    /* try { // try from 0052e660 to 0052e66f has its CatchHandler @ 0052e6e0 */
      jsi_sys::ffi::base::ffi::Object_setProperty(uVar5,lVar3,lVar4,uVar2);
      if (local_68 != 0) {
        return;
      }
      <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__drop
                (ppuStack_60);
      return;
    }
    pcStack_50 = FUN_0051bfe0;
  }
  local_58 = &uStack_41;
                    /* try { // try from 0052e6c8 to 0052e6db has its CatchHandler @ 0052e718 */
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002b2091,&local_58,&PTR_s__root__cargo_registry_src_index__00accb50);
}


// ===== 0052e740  FUN_0052e740 =====

void FUN_0052e740(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  undefined8 ***pppuVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long local_68;
  undefined8 **ppuStack_60;
  undefined1 *local_58;
  code *pcStack_50;
  undefined1 uStack_41;
  
  <&str_as_jsi::prop_name_id::IntoPropNameInput>::into_input(&local_68,param_3,param_4,param_2);
                    /* try { // try from 0052e77c to 0052e783 has its CatchHandler @ 0052e840 */
  uVar2 = <jsi::value::[0]::jsi::value::Value>::bool(param_5);
  uVar5 = *param_2;
                    /* try { // try from 0052e790 to 0052e7b3 has its CatchHandler @ 0052e848 */
  lVar3 = <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__get(*param_1);
  if (lVar3 == 0) {
    pcStack_50 = FUN_0051bff8;
  }
  else {
    pppuVar1 = (undefined8 ***)ppuStack_60;
    if ((int)local_68 == 0) {
      pppuVar1 = &ppuStack_60;
    }
    lVar4 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get
                      (*pppuVar1);
    if (lVar4 != 0) {
                    /* try { // try from 0052e7bc to 0052e7cb has its CatchHandler @ 0052e83c */
      jsi_sys::ffi::base::ffi::Object_setProperty(uVar5,lVar3,lVar4,uVar2);
      if (local_68 != 0) {
        return;
      }
      <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__drop
                (ppuStack_60);
      return;
    }
    pcStack_50 = FUN_0051bfe0;
  }
  local_58 = &uStack_41;
                    /* try { // try from 0052e824 to 0052e837 has its CatchHandler @ 0052e848 */
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002b2091,&local_58,&PTR_s__root__cargo_registry_src_index__00accb50);
}


