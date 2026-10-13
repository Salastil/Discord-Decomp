// ===== 007440ec  FUN_007440ec =====

void FUN_007440ec(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  void *__ptr;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  int local_650 [388];
  
  iVar1 = tokio::runtime::task::harness::can_read_output(param_1,param_1 + 0x640);
  if (iVar1 != 0) {
    memcpy(local_650,(void *)(param_1 + 0x30),0x610);
    *(undefined4 *)(param_1 + 0x30) = 2;
    if (local_650[0] != 1) {
                    /* try { // try from 007441c4 to 007441db has its CatchHandler @ 00744218 */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                ("JoinHandle polled after completion",0x45,
                 &PTR_s__root__cargo_registry_src_index__00ad76c0);
    }
    lVar6 = *(long *)(param_1 + 0x40);
    lVar5 = *(long *)(param_1 + 0x38);
    lVar2 = *(long *)(param_1 + 0x48);
    if (((*param_2 == 0) && (param_2[1] != 0)) && (__ptr = (void *)param_2[2], __ptr != (void *)0x0)
       ) {
      puVar4 = (undefined8 *)param_2[3];
      pcVar3 = (code *)*puVar4;
      if (pcVar3 != (code *)0x0) {
                    /* try { // try from 007441a4 to 007441ab has its CatchHandler @ 007441e0 */
        (*pcVar3)(__ptr);
      }
      if (puVar4[1] != 0) {
        free(__ptr);
      }
    }
    *param_2 = 0;
    param_2[2] = lVar6;
    param_2[1] = lVar5;
    param_2[3] = lVar2;
  }
  return;
}


// ===== 0074423c  FUN_0074423c =====

void FUN_0074423c(long param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined8 local_650 [194];
  
  local_650[0] = 0;
  auVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::
           transition_to_join_handle_dropped();
  if ((auVar2 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
    local_650[0] = CONCAT44(local_650[0]._4_4_,2);
                    /* try { // try from 00744270 to 0074427b has its CatchHandler @ 007442dc */
    FUN_0072c5f8(param_1 + 0x20,local_650);
  }
  if ((auVar2 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
    iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(param_1);
  }
  else {
    <tokio::runtime::task::core::[6]::tokio::runtime::task::core::Trailer>::set_waker
              (param_1 + 0x640,0);
    iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(param_1);
  }
  if (iVar1 == 0) {
    return;
  }
  FUN_0073c880(param_1);
  return;
}


// ===== 00744338  FUN_00744338 =====

void FUN_00744338(long param_1)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined *local_c80;
  long lStack_c78;
  undefined1 *local_c70;
  undefined1 *local_c68;
  undefined8 uStack_c60;
  undefined4 local_c50 [2];
  undefined8 local_c48;
  undefined8 local_c40;
  undefined8 uStack_c38;
  undefined4 local_640 [2];
  undefined8 local_638;
  undefined8 local_630;
  ulong local_628;
  
  local_c80 = (undefined *)0x0;
  bVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_running()
  ;
  if (1 < bVar1) {
    if (bVar1 == 2) {
      return;
    }
    goto LAB_007443d0;
  }
  if (bVar1 == 0) {
    local_c80 = PTR_WAKER_VTABLE_00b00d40;
    uStack_c60 = 0;
                    /* try { // try from 00744380 to 0074438b has its CatchHandler @ 00744500 */
    lStack_c78 = param_1;
    local_c70 = (undefined1 *)&local_c80;
    local_c68 = (undefined1 *)&local_c80;
    uVar3 = FUN_0072c54c(param_1 + 0x20,&local_c70);
    if ((uVar3 & 1) == 0) {
      local_638 = 0;
      local_630 = 0;
      local_640[0] = 1;
                    /* try { // try from 00744444 to 0074444f has its CatchHandler @ 00744498 */
      local_628 = uVar3 & 0xffffffff;
      FUN_0072c5f8(param_1 + 0x20,local_640);
      goto LAB_00744450;
    }
    bVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_idle
                      (param_1);
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        return;
      }
      <alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>as_tokio::runtime::task::Schedule>
      ::schedule(param_1 + 0x20,param_1);
      iVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(param_1);
      if (iVar2 == 0) {
        return;
      }
LAB_007443d0:
      FUN_0073c880(param_1);
      return;
    }
    if (bVar1 == 2) goto LAB_007443d0;
    local_640[0] = 2;
                    /* try { // try from 0074447c to 00744487 has its CatchHandler @ 0074448c */
    FUN_0072c5f8(param_1 + 0x20,local_640);
    uStack_c38 = extraout_x1_00;
  }
  else {
    local_640[0] = 2;
                    /* try { // try from 007443f4 to 007443ff has its CatchHandler @ 007444f4 */
    FUN_0072c5f8(param_1 + 0x20,local_640);
    uStack_c38 = extraout_x1;
  }
  local_c48 = *(undefined8 *)(param_1 + 0x28);
  local_c40 = 0;
  local_c50[0] = 1;
  FUN_0072c5f8(param_1 + 0x20,local_c50);
LAB_00744450:
  FUN_00744534(param_1);
  return;
}


// ===== 00744534  FUN_00744534 =====

void FUN_00744534(long param_1)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long local_650;
  undefined4 local_648 [388];
  undefined8 local_38;
  
  local_650 = 0;
  uVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_complete
                    ();
  if ((uVar2 >> 3 & 1) == 0) {
    local_648[0] = 2;
                    /* try { // try from 00744560 to 00744593 has its CatchHandler @ 0074464c */
    FUN_0072c5f8(param_1 + 0x20,local_648);
  }
  else if ((uVar2 >> 4 & 1) != 0) {
    <tokio::runtime::task::core::[6]::tokio::runtime::task::core::Trailer>::wake_join
              (param_1 + 0x640);
    uVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::
            unset_waker_after_complete(param_1);
    if ((uVar2 >> 3 & 1) == 0) {
      <tokio::runtime::task::core::[6]::tokio::runtime::task::core::Trailer>::set_waker
                (param_1 + 0x640,0);
    }
  }
  if (*(long *)(param_1 + 0x660) != 0) {
    local_38 = *(undefined8 *)(param_1 + 0x28);
                    /* try { // try from 007445bc to 007445c7 has its CatchHandler @ 0074460c */
    (**(code **)(*(long *)(param_1 + 0x668) + 0x28))
              (*(long *)(param_1 + 0x660) +
               (*(long *)(*(long *)(param_1 + 0x668) + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
               &local_38);
  }
  local_650 = param_1;
  lVar3 = <alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>as_tokio::runtime::task::Schedule>
          ::release(param_1 + 0x20,&local_650);
  uVar1 = 1;
  if (lVar3 != 0) {
    uVar1 = 2;
  }
  uVar4 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_terminal
                    (param_1,uVar1);
  if ((uVar4 & 1) != 0) {
    FUN_0073c880(param_1);
  }
  return;
}


// ===== 007446a8  FUN_007446a8 =====

void FUN_007446a8(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 extraout_x1;
  undefined8 local_c40;
  undefined8 local_c38;
  undefined8 local_c30;
  undefined8 uStack_c28;
  undefined4 local_630 [388];
  
  local_c40 = 0;
  uVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_shutdown
                    ();
  if ((uVar2 & 1) == 0) {
    iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(param_1);
    if (iVar1 != 0) {
      FUN_0073c880(param_1);
      return;
    }
  }
  else {
    local_630[0] = 2;
                    /* try { // try from 007446d0 to 007446db has its CatchHandler @ 0074473c */
    FUN_0072c5f8(param_1 + 0x20,local_630);
    local_c38 = *(undefined8 *)(param_1 + 0x28);
    local_c30 = 0;
    local_c40 = CONCAT44(local_c40._4_4_,1);
    uStack_c28 = extraout_x1;
    FUN_0072c5f8(param_1 + 0x20,&local_c40);
    FUN_00744534(param_1);
  }
  return;
}


// ===== 00744748  FUN_00744748 =====

void FUN_00744748(long param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined8 local_650 [194];
  
  local_650[0] = 0;
  auVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::
           transition_to_join_handle_dropped();
  if ((auVar2 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
    local_650[0] = CONCAT44(local_650[0]._4_4_,2);
                    /* try { // try from 0074477c to 00744787 has its CatchHandler @ 007447e8 */
    FUN_0072c5f8(param_1 + 0x20,local_650);
  }
  if ((auVar2 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
    iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(param_1);
  }
  else {
    <tokio::runtime::task::core::[6]::tokio::runtime::task::core::Trailer>::set_waker
              (param_1 + 0x640,0);
    iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(param_1);
  }
  if (iVar1 == 0) {
    return;
  }
  FUN_0073ca0c(param_1);
  return;
}


// ===== 00744844  FUN_00744844 =====

void FUN_00744844(long param_1)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined *local_c80;
  long lStack_c78;
  undefined1 *local_c70;
  undefined1 *local_c68;
  undefined8 uStack_c60;
  undefined4 local_c50 [2];
  undefined8 local_c48;
  undefined8 local_c40;
  undefined8 uStack_c38;
  undefined4 local_640 [2];
  undefined8 local_638;
  undefined8 local_630;
  ulong local_628;
  
  local_c80 = (undefined *)0x0;
  bVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_running()
  ;
  if (1 < bVar1) {
    if (bVar1 == 2) {
      return;
    }
    goto LAB_007448dc;
  }
  if (bVar1 == 0) {
    local_c80 = PTR_WAKER_VTABLE_00b00d40;
    uStack_c60 = 0;
                    /* try { // try from 0074488c to 00744897 has its CatchHandler @ 00744a0c */
    lStack_c78 = param_1;
    local_c70 = (undefined1 *)&local_c80;
    local_c68 = (undefined1 *)&local_c80;
    uVar3 = FUN_0072c54c(param_1 + 0x20,&local_c70);
    if ((uVar3 & 1) == 0) {
      local_638 = 0;
      local_630 = 0;
      local_640[0] = 1;
                    /* try { // try from 00744950 to 0074495b has its CatchHandler @ 007449a4 */
      local_628 = uVar3 & 0xffffffff;
      FUN_0072c5f8(param_1 + 0x20,local_640);
      goto LAB_0074495c;
    }
    bVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_idle
                      (param_1);
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        return;
      }
      <alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>as_tokio::runtime::task::Schedule>
      ::yield_now(param_1 + 0x20,param_1);
      iVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(param_1);
      if (iVar2 == 0) {
        return;
      }
LAB_007448dc:
      FUN_0073ca0c(param_1);
      return;
    }
    if (bVar1 == 2) goto LAB_007448dc;
    local_640[0] = 2;
                    /* try { // try from 00744988 to 00744993 has its CatchHandler @ 00744998 */
    FUN_0072c5f8(param_1 + 0x20,local_640);
    uStack_c38 = extraout_x1_00;
  }
  else {
    local_640[0] = 2;
                    /* try { // try from 00744900 to 0074490b has its CatchHandler @ 00744a00 */
    FUN_0072c5f8(param_1 + 0x20,local_640);
    uStack_c38 = extraout_x1;
  }
  local_c48 = *(undefined8 *)(param_1 + 0x28);
  local_c40 = 0;
  local_c50[0] = 1;
  FUN_0072c5f8(param_1 + 0x20,local_c50);
LAB_0074495c:
  FUN_00744a40(param_1);
  return;
}


// ===== 00744a40  FUN_00744a40 =====

void FUN_00744a40(long param_1)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long local_650;
  undefined4 local_648 [388];
  undefined8 local_38;
  
  local_650 = 0;
  uVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_complete
                    ();
  if ((uVar2 >> 3 & 1) == 0) {
    local_648[0] = 2;
                    /* try { // try from 00744a6c to 00744a9f has its CatchHandler @ 00744b58 */
    FUN_0072c5f8(param_1 + 0x20,local_648);
  }
  else if ((uVar2 >> 4 & 1) != 0) {
    <tokio::runtime::task::core::[6]::tokio::runtime::task::core::Trailer>::wake_join
              (param_1 + 0x640);
    uVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::
            unset_waker_after_complete(param_1);
    if ((uVar2 >> 3 & 1) == 0) {
      <tokio::runtime::task::core::[6]::tokio::runtime::task::core::Trailer>::set_waker
                (param_1 + 0x640,0);
    }
  }
  if (*(long *)(param_1 + 0x660) != 0) {
    local_38 = *(undefined8 *)(param_1 + 0x28);
                    /* try { // try from 00744ac8 to 00744ad3 has its CatchHandler @ 00744b18 */
    (**(code **)(*(long *)(param_1 + 0x668) + 0x28))
              (*(long *)(param_1 + 0x660) +
               (*(long *)(*(long *)(param_1 + 0x668) + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
               &local_38);
  }
  local_650 = param_1;
  lVar3 = <alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>as_tokio::runtime::task::Schedule>
          ::release(param_1 + 0x20,&local_650);
  uVar1 = 1;
  if (lVar3 != 0) {
    uVar1 = 2;
  }
  uVar4 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_terminal
                    (param_1,uVar1);
  if ((uVar4 & 1) != 0) {
    FUN_0073ca0c(param_1);
  }
  return;
}


// ===== 00744bb4  FUN_00744bb4 =====

void FUN_00744bb4(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 extraout_x1;
  undefined8 local_c40;
  undefined8 local_c38;
  undefined8 local_c30;
  undefined8 uStack_c28;
  undefined4 local_630 [388];
  
  local_c40 = 0;
  uVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_shutdown
                    ();
  if ((uVar2 & 1) == 0) {
    iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(param_1);
    if (iVar1 != 0) {
      FUN_0073ca0c(param_1);
      return;
    }
  }
  else {
    local_630[0] = 2;
                    /* try { // try from 00744bdc to 00744be7 has its CatchHandler @ 00744c48 */
    FUN_0072c5f8(param_1 + 0x20,local_630);
    local_c38 = *(undefined8 *)(param_1 + 0x28);
    local_c30 = 0;
    local_c40 = CONCAT44(local_c40._4_4_,1);
    uStack_c28 = extraout_x1;
    FUN_0072c5f8(param_1 + 0x20,&local_c40);
    FUN_00744a40(param_1);
  }
  return;
}


// ===== 00744c54  FUN_00744c54 =====

void FUN_00744c54(ulong *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  
                    /* try { // try from 00744c70 to 00744c73 has its CatchHandler @ 00744d7c */
  FUN_0070db98();
  lVar1 = 2;
  if (1 < *param_1) {
    lVar1 = *param_1 - 2;
  }
  if (lVar1 == 2) {
    FUN_00746170(param_1);
    return;
  }
  if ((lVar1 == 1) && (uVar3 = param_1[3], uVar3 != 0)) {
    uVar4 = param_1[5];
    if (uVar4 != 0) {
      puVar5 = (undefined8 *)param_1[2];
      puVar6 = puVar5 + 1;
      uVar7 = NEON_cmge(*puVar5,0,1);
      uVar7 = uVar7 & 0x8080808080808080;
      do {
        for (; uVar7 == 0; uVar7 = uVar7 & 0x8080808080808080) {
          puVar5 = puVar5 + -0xe8;
          uVar7 = NEON_cmge(*puVar6,0,1);
          puVar6 = puVar6 + 1;
        }
        uVar2 = (uVar7 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1;
        uVar7 = uVar7 - 1 & uVar7;
        FUN_00702244(puVar5 + (long)-(int)((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) *
                              0x1d + -0x1c);
      } while (uVar4 != 0);
    }
    if (uVar3 * 0xe9 != -0xf1) {
      free((void *)(param_1[2] + uVar3 * -0xe8 + -0xe8));
      return;
    }
  }
  return;
}


// ===== 00744d94  FUN_00744d94 =====

void FUN_00744d94(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 00744da4 to 00744da7 has its CatchHandler @ 00744e34 */
  FUN_0070df58();
  lVar4 = 2;
  if (1 < *param_1) {
    lVar4 = *param_1 - 2;
  }
  if (lVar4 == 2) {
    if (0x18 < (byte)param_1[5]) {
      plVar3 = (long *)param_1[6];
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
      }
    }
    if (param_1[2] != 0) {
      free((void *)param_1[3]);
      return;
    }
  }
  else if (lVar4 == 1) {
    FUN_007043b0(param_1 + 2);
    return;
  }
  return;
}


// ===== 00744e4c  FUN_00744e4c =====

void FUN_00744e4c(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 00744e5c to 00744e5f has its CatchHandler @ 00744f34 */
  FUN_0070e318();
  lVar4 = 2;
  if (1 < *param_1) {
    lVar4 = *param_1 - 2;
  }
  if (lVar4 == 2) {
    if (0x18 < (byte)param_1[2]) {
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
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
      }
    }
    if (((byte)param_1[5] != 0xff) && (0x18 < (byte)param_1[5])) {
      plVar3 = (long *)param_1[6];
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
      }
    }
    plVar3 = (long *)param_1[10];
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
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 10);
        return;
      }
    }
  }
  else if (lVar4 == 1) {
    FUN_00704618(param_1 + 2);
    return;
  }
  return;
}


// ===== 00744f4c  FUN_00744f4c =====

void FUN_00744f4c(ulong *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  
                    /* try { // try from 00744f68 to 00744f6b has its CatchHandler @ 00745078 */
  FUN_0070ea9c();
  lVar1 = 2;
  if (1 < *param_1) {
    lVar1 = *param_1 - 2;
  }
  if (lVar1 == 2) {
    FUN_00746374(param_1);
    return;
  }
  if ((lVar1 == 1) && (uVar3 = param_1[2], uVar3 != 0)) {
    uVar4 = param_1[4];
    if (uVar4 != 0) {
      puVar5 = (undefined8 *)param_1[1];
      puVar6 = puVar5 + 1;
      uVar7 = NEON_cmge(*puVar5,0,1);
      uVar7 = uVar7 & 0x8080808080808080;
      do {
        for (; uVar7 == 0; uVar7 = uVar7 & 0x8080808080808080) {
          puVar5 = puVar5 + -0x220;
          uVar7 = NEON_cmge(*puVar6,0,1);
          puVar6 = puVar6 + 1;
        }
        uVar2 = (uVar7 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1;
        uVar7 = uVar7 - 1 & uVar7;
        FUN_007024a8(puVar5 + (long)-(int)((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) *
                              0x44 + -0x43);
      } while (uVar4 != 0);
    }
    if (uVar3 * 0x221 != -0x229) {
      free((void *)(param_1[1] + uVar3 * -0x220 + -0x220));
      return;
    }
  }
  return;
}


// ===== 00745090  FUN_00745090 =====

void FUN_00745090(undefined1 *param_1,int *param_2)

{
  long lVar1;
  long local_90;
  void *pvStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  void *pvStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (*param_2 == 2) {
    *param_1 = 0;
  }
  else {
    local_90 = -1;
    local_78 = 0;
    uStack_68 = 0;
                    /* try { // try from 007450e4 to 00745133 has its CatchHandler @ 007451d4 */
    lVar1 = FUN_00759d80(&local_90,"primary_color",0xd,param_2 + 4);
    if (((lVar1 == 0) && (lVar1 = FUN_00757dd4(&local_90,"secondary_color",0xf,param_2), lVar1 == 0)
        ) && (lVar1 = FUN_00757dd4(&local_90,"tertiary_color\\\"",0xe,param_2 + 2), lVar1 == 0)) {
      pvStack_58 = pvStack_88;
      local_60 = local_90;
      uStack_48 = local_78;
      uStack_50 = uStack_80;
      uStack_38 = uStack_68;
      local_40 = local_70;
      <serde_json::value::ser::SerializeMap_as_serde::ser::SerializeStruct>::end(param_1,&local_60);
      return;
    }
    *(long *)(param_1 + 8) = lVar1;
    *param_1 = 0xff;
                    /* try { // try from 00745144 to 0074514b has its CatchHandler @ 007451ac */
    FUN_0074a9a8(&local_78);
    if ((local_90 != -1) && (local_90 != 0)) {
      free(pvStack_88);
      return;
    }
  }
  return;
}


// ===== 007451ec  FUN_007451ec =====

void FUN_007451ec(undefined1 *param_1,undefined8 *param_2)

{
  void *__dest;
  void *__dest_00;
  size_t __n;
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auStack_54 [20];
  
  auVar2 = <core::fmt::num::imp::[k]::usize>::_fmt(*param_2,auStack_54,0x14);
  __n = auVar2._8_8_;
  if ((long)__n < 0) {
    uVar1 = 0;
  }
  else {
    if (__n == 0) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      *param_1 = 3;
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 0x10) = 1;
      return;
    }
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar1 = 1;
    __dest = (void *)FUN_004b25a4(__n,1);
    if (__dest != (void *)0x0) {
      memcpy(__dest,auVar2._0_8_,__n);
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      __dest_00 = (void *)FUN_004b25a4(__n,1);
      if (__dest_00 != (void *)0x0) {
        memcpy(__dest_00,__dest,__n);
        *param_1 = 3;
        *(size_t *)(param_1 + 8) = __n;
        *(void **)(param_1 + 0x10) = __dest_00;
        *(size_t *)(param_1 + 0x18) = __n;
        free(__dest);
        return;
      }
                    /* try { // try from 007452e8 to 007452f3 has its CatchHandler @ 007452f8 */
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(1,__n);
    }
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar1,__n);
}


// ===== 00745314  FUN_00745314 =====

void FUN_00745314(undefined1 *param_1,long *param_2)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long local_c0;
  void *pvStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  void *pvStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar5 = param_2[2];
  local_c0 = -1;
  lVar3 = param_2[4];
  lVar6 = param_2[3];
  lVar8 = param_2[1];
  bVar1 = *(byte *)((long)param_2 + 0x22);
  bVar2 = *(byte *)((long)param_2 + 0x23);
  lVar7 = *param_2;
  local_a8 = 0;
  uStack_98 = 0;
                    /* try { // try from 0074539c to 007454a7 has its CatchHandler @ 00745548 */
  if (((((((*(char *)((long)param_2 + 0x21) == '\x01') &&
          (lVar4 = FUN_007594f4(&local_c0,"premium_subscriber",0x12), lVar4 != 0)) ||
         ((lVar7 != 0 && (lVar4 = FUN_00756eec(&local_c0,"bot_id",6,param_2), lVar4 != 0)))) ||
        ((lVar8 != 0 &&
         (lVar4 = FUN_00756eec(&local_c0,"integration_id",0xe,param_2 + 1), lVar4 != 0)))) ||
       ((lVar5 != 0 && (lVar4 = FUN_00756eec(&local_c0,"sku_id",6,param_2 + 2), lVar4 != 0)))) ||
      (((((char)lVar3 != '\x02' &&
         (lVar4 = FUN_00757ccc(&local_c0,"is_guild_product_role",0x15,param_2 + 4), lVar4 != 0)) ||
        ((lVar6 != 0 &&
         (lVar4 = FUN_00756eec(&local_c0,"subscription_listing_id",0x17,param_2 + 3), lVar4 != 0))))
       || (((bVar1 & 1) != 0 &&
           (lVar4 = FUN_007594f4(&local_c0,"available_for_purchase",0x16,
                                 (byte *)((long)param_2 + 0x22)), lVar4 != 0)))))) ||
     (((bVar2 & 1) != 0 &&
      (lVar4 = FUN_007594f4(&local_c0,"guild_connections",0x11,(byte *)((long)param_2 + 0x23)),
      lVar4 != 0)))) {
    *(long *)(param_1 + 8) = lVar4;
    *param_1 = 0xff;
                    /* try { // try from 007454bc to 007454c3 has its CatchHandler @ 00745520 */
    FUN_0074a9a8(&local_a8);
    if ((local_c0 != -1) && (local_c0 != 0)) {
      free(pvStack_b8);
    }
  }
  else {
    pvStack_88 = pvStack_b8;
    local_90 = local_c0;
    uStack_78 = local_a8;
    uStack_80 = uStack_b0;
    uStack_68 = uStack_98;
    local_70 = local_a0;
    <serde_json::value::ser::SerializeMap_as_serde::ser::SerializeStruct>::end(param_1,&local_90);
  }
  return;
}


// ===== 00745560  FUN_00745560 =====

void FUN_00745560(byte *param_1)

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


// ===== 00745598  FUN_00745598 =====

void FUN_00745598(long *param_1)

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
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 1);
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
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
        return;
      }
    }
  }
  return;
}


// ===== 00745618  FUN_00745618 =====

void FUN_00745618(long *param_1)

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


// ===== 007456e4  FUN_007456e4 =====

void FUN_007456e4(long *param_1)

{
                    /* try { // try from 007456f4 to 007456f7 has its CatchHandler @ 00745728 */
  FUN_007665f0();
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 00745750  FUN_00745750 =====

void FUN_00745750(long *param_1)

{
  void *__ptr;
  void *pvVar1;
  long lVar2;
  
  __ptr = (void *)param_1[1];
  lVar2 = param_1[2] + 1;
  pvVar1 = __ptr;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 00745780 to 00745783 has its CatchHandler @ 007457cc */
    FUN_0076276c(pvVar1);
    pvVar1 = (void *)((long)pvVar1 + 0xe0);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00745814  FUN_00745814 =====

void FUN_00745814(long *param_1)

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
      if (0x18 < *(byte *)((long)__ptr + lVar6 * 0x58 + 0x28)) {
        plVar4 = *(long **)((long)__ptr + lVar6 * 0x58 + 0x30);
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
          <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
        }
      }
      if (*(long *)((long)__ptr + lVar6 * 0x58 + 0x10) != 0) {
        free(*(void **)((long)__ptr + lVar6 * 0x58 + 0x18));
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


// ===== 007458dc  FUN_007458dc =====

void FUN_007458dc(long *param_1)

{
  void *__ptr;
  long lVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  
  __ptr = (void *)param_1[1];
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    lVar8 = 0;
    do {
      if (0x18 < *(byte *)((long)__ptr + lVar8 * 0x70 + 0x10)) {
        plVar5 = *(long **)((long)__ptr + lVar8 * 0x70 + 0x18);
        do {
          lVar6 = *plVar5;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar4) {
            *plVar5 = lVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar6 + -1 == 0) {
          DataMemoryBarrier(2,1);
          <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
        }
      }
      bVar2 = *(byte *)((long)__ptr + lVar8 * 0x70 + 0x28);
      if (bVar2 != 0xff && 0x18 < bVar2) {
        plVar5 = *(long **)((long)__ptr + lVar8 * 0x70 + 0x30);
        do {
          lVar6 = *plVar5;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar4) {
            *plVar5 = lVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar6 + -1 == 0) {
          DataMemoryBarrier(2,1);
          <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
        }
      }
      puVar7 = (undefined8 *)((long)__ptr + lVar8 * 0x70 + 0x50);
      plVar5 = (long *)*puVar7;
      if (plVar5 != (long *)0x0) {
        do {
          lVar6 = *plVar5;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar4) {
            *plVar5 = lVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar6 + -1 == 0) {
          DataMemoryBarrier(2,1);
          <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(puVar7);
        }
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 != lVar1);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 007459ec  FUN_007459ec =====

void FUN_007459ec(long *param_1)

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
      plVar4 = *(long **)((long)__ptr + lVar6 * 0x20 + 8);
      if (plVar4 != (long *)0x0) {
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
          <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
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


// ===== 00745a7c  FUN_00745a7c =====

void FUN_00745a7c(long *param_1)

{
  void *__ptr;
  void *pvVar1;
  long lVar2;
  
  __ptr = (void *)param_1[1];
  lVar2 = param_1[2] + 1;
  pvVar1 = __ptr;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 00745aac to 00745aaf has its CatchHandler @ 00745af8 */
    FUN_007628fc(pvVar1);
    pvVar1 = (void *)((long)pvVar1 + 0x218);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00745b40  FUN_00745b40 =====

void FUN_00745b40(long param_1,void *param_2)

{
  int iVar1;
  
  if (1 < param_1 + 1U) {
    if (param_1 != -2) {
      free(param_2);
      return;
    }
    iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::drop_join_handle_fast
                      (param_2);
    if (iVar1 != 0) {
      <tokio::runtime::task::raw::tokio::runtime::task::raw::RawTask>::drop_join_handle_slow
                (param_2);
      return;
    }
  }
  return;
}


// ===== 00745ba8  FUN_00745ba8 =====

void FUN_00745ba8(long param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  uint *puVar5;
  int *piVar6;
  ulong uVar7;
  
  puVar5 = *(uint **)(param_1 + 8);
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
                    /* try { // try from 00745c38 to 00745c3b has its CatchHandler @ 00745c60 */
    <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::wake_writer_or_readers()
    ;
  }
  piVar6 = *(int **)(param_1 + 0x10);
  if ((((*(byte *)(param_1 + 0x18) & 1) == 0) &&
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
    <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::wake_writer_or_readers()
    ;
    return;
  }
  return;
}


// ===== 00745c78  FUN_00745c78 =====

void FUN_00745c78(ulong *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  
  lVar1 = 2;
  if (1 < *param_1) {
    lVar1 = *param_1 - 2;
  }
  if (lVar1 == 1) {
    uVar3 = param_1[3];
    if (uVar3 != 0) {
      uVar4 = param_1[5];
      if (uVar4 != 0) {
        puVar5 = (undefined8 *)param_1[2];
        puVar6 = puVar5 + 1;
        uVar7 = NEON_cmge(*puVar5,0,1);
        uVar7 = uVar7 & 0x8080808080808080;
        do {
          for (; uVar7 == 0; uVar7 = uVar7 & 0x8080808080808080) {
            puVar5 = puVar5 + -0xe8;
            uVar7 = NEON_cmge(*puVar6,0,1);
            puVar6 = puVar6 + 1;
          }
          uVar2 = (uVar7 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
          uVar4 = uVar4 - 1;
          uVar7 = uVar7 - 1 & uVar7;
          FUN_00702244(puVar5 + (long)-(int)((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) *
                                0x1d + -0x1c);
        } while (uVar4 != 0);
      }
      if (uVar3 * 0xe9 != -0xf1) {
        free((void *)(param_1[2] + uVar3 * -0xe8 + -0xe8));
        return;
      }
    }
  }
  else if (lVar1 == 2) {
    FUN_00746170(param_1);
    return;
  }
  return;
}


// ===== 00745d9c  FUN_00745d9c =====

void FUN_00745d9c(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = 2;
  if (1 < *param_1) {
    lVar4 = *param_1 - 2;
  }
  if (lVar4 == 1) {
    FUN_007043b0(param_1 + 2);
    return;
  }
  if (lVar4 == 2) {
    if (0x18 < (byte)param_1[5]) {
      plVar3 = (long *)param_1[6];
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
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 6);
      }
    }
    if (param_1[2] != 0) {
      free((void *)param_1[3]);
      return;
    }
  }
  return;
}


// ===== 00745e30  FUN_00745e30 =====

void FUN_00745e30(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = 2;
  if (1 < *param_1) {
    lVar4 = *param_1 - 2;
  }
  if (lVar4 == 1) {
    FUN_00704618(param_1 + 2);
    return;
  }
  if (lVar4 == 2) {
    if (0x18 < (byte)param_1[2]) {
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
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 3);
      }
    }
    if (((byte)param_1[5] != 0xff) && (0x18 < (byte)param_1[5])) {
      plVar3 = (long *)param_1[6];
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
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 6);
      }
    }
    plVar3 = (long *)param_1[10];
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
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
        return;
      }
    }
  }
  return;
}


// ===== 00745f24  FUN_00745f24 =====

void FUN_00745f24(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  cVar1 = '\x02';
  if (1 < *(byte *)(param_1 + 0x28)) {
    cVar1 = *(byte *)(param_1 + 0x28) - 2;
  }
  if (cVar1 == '\x01') {
    FUN_007042ac();
    return;
  }
  if (cVar1 == '\x02') {
    plVar3 = *(long **)(param_1 + 0x18);
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
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
        return;
      }
    }
  }
  return;
}


// ===== 00745f74  FUN_00745f74 =====

void FUN_00745f74(ulong *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  
  lVar1 = 2;
  if (1 < *param_1) {
    lVar1 = *param_1 - 2;
  }
  if (lVar1 == 1) {
    uVar3 = param_1[2];
    if (uVar3 != 0) {
      uVar4 = param_1[4];
      if (uVar4 != 0) {
        puVar5 = (undefined8 *)param_1[1];
        puVar6 = puVar5 + 1;
        uVar7 = NEON_cmge(*puVar5,0,1);
        uVar7 = uVar7 & 0x8080808080808080;
        do {
          for (; uVar7 == 0; uVar7 = uVar7 & 0x8080808080808080) {
            puVar5 = puVar5 + -0x220;
            uVar7 = NEON_cmge(*puVar6,0,1);
            puVar6 = puVar6 + 1;
          }
          uVar2 = (uVar7 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
          uVar4 = uVar4 - 1;
          uVar7 = uVar7 - 1 & uVar7;
          FUN_007024a8(puVar5 + (long)-(int)((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) *
                                0x44 + -0x43);
        } while (uVar4 != 0);
      }
      if (uVar3 * 0x221 != -0x229) {
        free((void *)(param_1[1] + uVar3 * -0x220 + -0x220));
        return;
      }
    }
  }
  else if (lVar1 == 2) {
    FUN_00746374(param_1);
    return;
  }
  return;
}


// ===== 0074609c  FUN_0074609c =====

void FUN_0074609c(long *param_1)

{
  void *__ptr;
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
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
    __ptr = (void *)param_1[3];
    lVar5 = param_1[4];
    if (lVar5 != 0) {
      lVar6 = 0;
      do {
        plVar3 = *(long **)((long)__ptr + lVar6 * 0x20 + 8);
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
            <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
          }
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 != lVar5);
    }
    if (param_1[2] != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 00746170  FUN_00746170 =====

void FUN_00746170(long param_1)

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


// ===== 0074623c  FUN_0074623c =====

void FUN_0074623c(long param_1)

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
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow((undefined8 *)(param_1 + 0x30));
    }
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    free(*(void **)(param_1 + 0x18));
    return;
  }
  return;
}


// ===== 007462b0  FUN_007462b0 =====

void FUN_007462b0(long param_1)

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
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow((undefined8 *)(param_1 + 0x18));
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
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow((undefined8 *)(param_1 + 0x30));
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
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
      return;
    }
  }
  return;
}


// ===== 00746374  FUN_00746374 =====

void FUN_00746374(long *param_1)

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
                    /* try { // try from 007464c8 to 007464cf has its CatchHandler @ 007465f0 */
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
                    /* try { // try from 007465b0 to 007465b7 has its CatchHandler @ 007465e8 */
      <alloc::sync::[n]::alloc::sync::Arc<[smol_str::SmolStr]>>::drop_slow(param_1 + 0x12);
    }
  }
  if ((param_1[0xf] != -1) && (param_1[0xf] != 0)) {
    free((void *)param_1[0x10]);
  }
  FUN_00745618(param_1 + 5);
  return;
}


// ===== 0074668c  FUN_0074668c =====

void FUN_0074668c(long *param_1)

{
                    /* try { // try from 0074669c to 007466a3 has its CatchHandler @ 007466d4 */
  FUN_0074a9a8(param_1 + 3);
  if ((*param_1 != -1) && (*param_1 != 0)) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 007466fc  FUN_007466fc =====

void FUN_007466fc(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  
  plVar4 = (long *)*param_1;
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
                    /* try { // try from 00746728 to 0074672f has its CatchHandler @ 00746788 */
    <alloc::sync::[n]::alloc::sync::Arc<std::fs::File>>::drop_slow(param_1);
  }
  lVar5 = param_1[6];
  if (lVar5 == -2) {
    uVar6 = param_1[7];
    iVar3 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::drop_join_handle_fast
                      (uVar6);
    if (iVar3 != 0) {
      <tokio::runtime::task::raw::tokio::runtime::task::raw::RawTask>::drop_join_handle_slow(uVar6);
      return;
    }
  }
  else if ((lVar5 != -1) && (lVar5 != 0)) {
    free((void *)param_1[7]);
    return;
  }
  return;
}


// ===== 007467a4  FUN_007467a4 =====

void FUN_007467a4(long *param_1)

{
  void *__ptr;
  long *__ptr_00;
  
  if (*param_1 != -1) {
    __ptr = (void *)param_1[3];
                    /* try { // try from 007467c0 to 007467c7 has its CatchHandler @ 00746810 */
    FUN_007466fc(__ptr);
    free(__ptr);
    return;
  }
  __ptr_00 = (long *)param_1[1];
  if (*__ptr_00 != 0) {
    free((void *)__ptr_00[1]);
  }
  free(__ptr_00);
  return;
}


// ===== 0074682c  FUN_0074682c =====

void FUN_0074682c(undefined1 *param_1,long param_2)

{
  long lVar1;
  long local_90;
  void *pvStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  void *pvStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_90 = -1;
  local_78 = 0;
  uStack_68 = 0;
                    /* try { // try from 0074685c to 007468ab has its CatchHandler @ 0074694c */
  lVar1 = FUN_007589dc(&local_90,"id",2,param_2);
  if (((lVar1 == 0) && (lVar1 = FUN_007599f8(&local_90,"loading",7,param_2 + 0x18), lVar1 == 0)) &&
     (lVar1 = FUN_00756a34(&local_90,&DAT_002bd080,4,param_2 + 8), lVar1 == 0)) {
    pvStack_58 = pvStack_88;
    local_60 = local_90;
    uStack_48 = local_78;
    uStack_50 = uStack_80;
    uStack_38 = uStack_68;
    local_40 = local_70;
    <serde_json::value::ser::SerializeMap_as_serde::ser::SerializeStruct>::end(param_1,&local_60);
    return;
  }
  *(long *)(param_1 + 8) = lVar1;
  *param_1 = 0xff;
                    /* try { // try from 007468bc to 007468c3 has its CatchHandler @ 00746924 */
  FUN_0074a9a8(&local_78);
  if ((local_90 != -1) && (local_90 != 0)) {
    free(pvStack_88);
  }
  return;
}


// ===== 00746964  <libdiscore_common::core::experiment_cacher::libdiscore_common::core::experiment_cacher::ExperimentsConfigSnapshot>::to_cached_vec =====

/* WARNING: Unknown calling convention: __rustcall */
/* <libdiscore_common::core::experiment_cacher::libdiscore_common::core::experiment_cacher::ExperimentsConfigSnapshot>::to_cached_vec
    */

void __rustcall
<libdiscore_common::core::experiment_cacher::libdiscore_common::core::experiment_cacher::ExperimentsConfigSnapshot>
::to_cached_vec(long *param_1,long *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined2 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 uVar17;
  ulong uVar18;
  long local_a8;
  long local_a0;
  undefined4 *puStack_98;
  undefined8 local_90;
  undefined1 auStack_88 [7];
  undefined2 local_81 [16];
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puStack_98 = (undefined4 *)FUN_004b25a4(0x400,1);
  if (puStack_98 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(1,0x400);
  }
  puVar15 = (undefined8 *)*param_2;
  local_a8 = param_2[3];
  local_a0 = 0x400;
  *puStack_98 = 0x1000000;
  uVar17 = *puVar15;
  *(undefined1 *)(puStack_98 + 1) = 0x7b;
  local_90 = 5;
  if (local_a8 == 0) {
    *(undefined1 *)((long)puStack_98 + 5) = 0x7d;
    local_90 = 6;
  }
  else {
    uVar18 = NEON_cmge(uVar17,0,1);
    puVar5 = puVar15 + 1;
    bVar7 = true;
    uVar18 = uVar18 & 0x8080808080808080;
    puVar6 = puStack_98;
    do {
      for (; uVar18 == 0; uVar18 = uVar18 & 0x8080808080808080) {
        puVar15 = puVar15 + -0x20;
        uVar18 = NEON_cmge(*puVar5,0,1);
        puVar5 = puVar5 + 1;
      }
      uVar14 = (uVar18 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar18 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar14 = LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) & 0x78;
      uVar17 = *(undefined8 *)((long)puVar15 + uVar14 * -4 + -0x18);
      uVar1 = *(undefined8 *)((long)puVar15 + uVar14 * -4 + -0x10);
      uVar2 = *(uint *)((long)puVar15 + uVar14 * -4 + -8);
      if (!bVar7) {
        if (local_a0 == local_90) {
          FUN_0072eae4(&local_a0,local_90,1,1,1);
          puVar6 = puStack_98;
        }
        *(undefined1 *)((long)puVar6 + local_90) = 0x2c;
        local_90 = local_90 + 1;
      }
                    /* try { // try from 00746a54 to 00746ab3 has its CatchHandler @ 00746d9c */
      FUN_0074b8dc(&local_a0,uVar17,uVar1);
      if (local_a0 == local_90) {
                    /* try { // try from 00746c50 to 00746d07 has its CatchHandler @ 00746d9c */
        FUN_0072eae4(&local_a0,local_90,1,1,1);
      }
      lVar12 = local_90 + 1;
      *(undefined1 *)((long)puStack_98 + local_90) = 0x3a;
      local_90 = lVar12;
      if (local_a0 == lVar12) {
        FUN_0072eae4(&local_a0,local_a0,1,1,1);
      }
      *(undefined1 *)((long)puStack_98 + local_90) = 0x7b;
      local_90 = local_90 + 1;
      FUN_0074b8dc(&local_a0,"treatmentId",0xb);
      if (local_a0 == local_90) {
        FUN_0072eae4(&local_a0,local_90,1,1,1);
      }
      lVar12 = local_90 + 1;
      uVar8 = -uVar2;
      if (-1 < (int)uVar2) {
        uVar8 = uVar2;
      }
      *(undefined1 *)((long)puStack_98 + local_90) = 0x3a;
      if (uVar8 >> 4 < 0x271) {
        lVar11 = 0xb;
        if (99 < uVar8) goto LAB_00746b54;
      }
      else {
        lVar11 = 0xb;
        uVar14 = (ulong)uVar8;
        puVar13 = local_81 + 1;
        do {
          uVar10 = uVar14;
          lVar11 = lVar11 + -4;
          uVar8 = (uint)(uVar10 / 10000);
          uVar9 = (uint)(uVar10 / 10000);
          uVar4 = (uint)uVar10 + uVar9 * -10000;
          uVar3 = (uVar4 >> 2 & 0x3fff) / 0x19;
          puVar13[-1] = *(undefined2 *)
                         (
                         "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                         + (ulong)uVar3 * 2);
          *puVar13 = *(undefined2 *)
                      (
                      "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                      + ((ulong)(uVar4 + uVar3 * -100) & 0xffff) * 2);
          uVar14 = uVar10 / 10000;
          puVar13 = puVar13 + -2;
        } while (99999999 < (uint)uVar10);
        if (0x62 < uVar9 && (int)(uVar10 / 10000) != 99) {
LAB_00746b54:
          uVar3 = (uVar8 >> 2 & 0x3fff) / 0x19;
          *(undefined2 *)(auStack_88 + lVar11 + -2) =
               *(undefined2 *)
                (
                "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                + ((ulong)(uVar8 + uVar3 * -100) & 0xffff) * 2);
          lVar11 = lVar11 + -2;
          uVar8 = uVar3;
        }
      }
      if (uVar8 < 10) {
        lVar16 = lVar11 + -1;
        auStack_88[lVar11 + -1] = (byte)uVar8 | 0x30;
      }
      else {
        lVar16 = lVar11 + -2;
        *(undefined2 *)(auStack_88 + lVar11 + -2) =
             *(undefined2 *)
              (
              "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
              + (ulong)uVar8 * 2);
      }
      lVar11 = lVar16;
      if ((int)uVar2 < 0) {
        lVar11 = lVar16 + -1;
        auStack_88[lVar16 + -1] = 0x2d;
      }
      uVar14 = 0xb - lVar11;
      local_90 = lVar12;
      if ((ulong)(local_a0 - lVar12) < uVar14) {
        FUN_0072eae4(&local_a0,lVar12,0xb - lVar11,1,1);
LAB_00746bf0:
        lVar12 = local_90;
        puVar6 = puStack_98;
        lVar16 = local_a0;
        memcpy((void *)((long)puStack_98 + local_90),auStack_88 + lVar11,uVar14);
      }
      else {
        puVar6 = puStack_98;
        lVar16 = local_a0;
        if (lVar11 != 0xb) goto LAB_00746bf0;
      }
      local_90 = lVar12 + uVar14;
      lVar12 = local_90;
      if (lVar16 == local_90) {
        FUN_0072eae4(&local_a0,lVar16,1,1,1);
        puVar6 = puStack_98;
        lVar12 = local_90;
      }
      bVar7 = false;
      local_90 = lVar12 + 1;
      uVar18 = uVar18 - 1 & uVar18;
      local_a8 = local_a8 + -1;
      *(undefined1 *)((long)puVar6 + lVar12) = 0x7d;
    } while (local_a8 != 0);
    if (local_a0 == local_90) {
                    /* try { // try from 00746d6c to 00746d7f has its CatchHandler @ 00746d98 */
      FUN_0072eae4(&local_a0,local_90,1,1,1);
    }
    *(undefined1 *)((long)puStack_98 + local_90) = 0x7d;
    local_90 = local_90 + 1;
  }
  param_1[1] = (long)puStack_98;
  *param_1 = local_a0;
  param_1[2] = local_90;
  return;
}


// ===== 00746dbc  <libdiscore_common::core::experiment_cacher::libdiscore_common::core::experiment_cacher::ExperimentsConfigSnapshot>::from_cached_bytes =====

/* WARNING: Unknown calling convention: __rustcall */
/* <libdiscore_common::core::experiment_cacher::libdiscore_common::core::experiment_cacher::ExperimentsConfigSnapshot>::from_cached_bytes
    */

void __rustcall
<libdiscore_common::core::experiment_cacher::libdiscore_common::core::experiment_cacher::ExperimentsConfigSnapshot>
::from_cached_bytes(long *param_1,uint *param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  long local_68;
  long local_60;
  long lStack_58;
  long local_50;
  long local_48;
  long lStack_40;
  uint *local_38;
  long lStack_30;
  undefined8 local_28;
  
  lStack_30 = param_3 - 4;
  if (param_3 < 4) {
    lVar2 = <alloc::io::error::core::io::error::Error>::new<&str>
                      (0x25,"Data too short to contain version",0x21);
    *param_1 = 0;
    param_1[1] = -1;
    param_1[2] = lVar2;
    return;
  }
  uVar1 = *param_2;
  if (uVar1 == 0x1000000) {
    local_38 = param_2 + 1;
    local_28 = 0;
    FUN_007671b8(&local_68,&local_38);
    if (local_68 != 0) {
      *param_1 = local_68;
      param_1[5] = lStack_40;
      param_1[4] = local_48;
      param_1[2] = lStack_58;
      param_1[1] = local_60;
      param_1[3] = local_50;
      return;
    }
    param_1[2] = local_60;
    *param_1 = 0;
    param_1[1] = -0x7fffffffffffffff;
    return;
  }
  uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
  *(undefined4 *)(param_1 + 2) = 1;
  *(uint *)((long)param_1 + 0x14) = uVar1 >> 0x10 | uVar1 << 0x10;
  *param_1 = 0;
  param_1[1] = -0x8000000000000000;
  return;
}


// ===== 00746ea8  <libdiscore_common::core::experiment_cacher::[0]::libdiscore_common::core::experiment_cacher::ExperimentCacher>::get_config =====

/* WARNING: Unknown calling convention: __rustcall */
/* <libdiscore_common::core::experiment_cacher::[0]::libdiscore_common::core::experiment_cacher::ExperimentCacher>::get_config
    */

long __rustcall
<libdiscore_common::core::experiment_cacher::[0]::libdiscore_common::core::experiment_cacher::ExperimentCacher>
::get_config(long *param_1,void *param_2,size_t param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  byte bVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar6 = *param_1;
  if (*(long *)(lVar6 + 0x28) == 0) {
    lVar6 = 0;
  }
  else {
    uVar5 = FUN_0076b2d0(lVar6 + 0x30);
    lVar7 = 0;
    lVar1 = *(long *)(lVar6 + 0x10);
    uVar2 = *(ulong *)(lVar6 + 0x18);
    bVar9 = (byte)(uVar5 >> 0x39);
    uVar11 = CONCAT17(bVar9,CONCAT16(bVar9,CONCAT15(bVar9,CONCAT14(bVar9,CONCAT13(bVar9,CONCAT12(
                                                  bVar9,CONCAT11(bVar9,bVar9)))))));
    uVar5 = uVar5 & uVar2;
    uVar12 = *(undefined8 *)(lVar1 + uVar5);
    uVar10 = NEON_cmeq(uVar12,uVar11,1);
    uVar10 = uVar10 & 0x8080808080808080;
    while( true ) {
      for (; uVar10 != 0; uVar10 = uVar10 - 1 & uVar10) {
        uVar3 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
        lVar8 = lVar1 + (uVar5 + ((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3) & uVar2) *
                        -0x20;
        if ((param_3 == *(size_t *)(lVar8 + -0x10)) &&
           (iVar4 = memcmp(param_2,*(void **)(lVar8 + -0x18),param_3), iVar4 == 0))
        goto LAB_00746f90;
      }
      uVar12 = NEON_cmeq(uVar12,0xffffffffffffffff,1);
      bVar9 = NEON_umaxv(uVar12,1);
      if ((bVar9 & 1) != 0) break;
      lVar7 = lVar7 + 8;
      uVar5 = uVar5 + lVar7 & uVar2;
      uVar12 = *(undefined8 *)(lVar1 + uVar5);
      uVar10 = NEON_cmeq(uVar12,uVar11,1);
      uVar10 = uVar10 & 0x8080808080808080;
    }
    lVar8 = 0;
LAB_00746f90:
    lVar6 = 0;
    if (lVar8 != 0) {
      lVar6 = lVar8 + -8;
    }
  }
  return lVar6;
}


// ===== 00746fb8  <libdiscore_common::core::experiment_cacher::[0]::libdiscore_common::core::experiment_cacher::ExperimentCacher>::clear_cache =====

/* WARNING: Removing unreachable block (ram,0x007470a0) */
/* WARNING: Removing unreachable block (ram,0x007470a8) */
/* WARNING: Removing unreachable block (ram,0x007470b0) */
/* WARNING: Removing unreachable block (ram,0x0074711c) */
/* WARNING: Removing unreachable block (ram,0x00747120) */
/* WARNING: Removing unreachable block (ram,0x00747138) */
/* WARNING: Removing unreachable block (ram,0x00747154) */
/* WARNING: Removing unreachable block (ram,0x0074710c) */
/* WARNING: Removing unreachable block (ram,0x00747164) */
/* WARNING: Removing unreachable block (ram,0x00747174) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <libdiscore_common::core::experiment_cacher::[0]::libdiscore_common::core::experiment_cacher::ExperimentCacher>::clear_cache
    */

void __rustcall
<libdiscore_common::core::experiment_cacher::[0]::libdiscore_common::core::experiment_cacher::ExperimentCacher>
::clear_cache(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 local_b0;
  char *pcStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  char *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  char *local_60;
  undefined8 uStack_58;
  undefined1 uStack_31;
  
  puVar5 = PTR_MAX_LOG_LEVEL_FILTER_00b00c78;
  if (2 < *(ulong *)PTR_MAX_LOG_LEVEL_FILTER_00b00c78) {
    local_78 = "experiment_manager";
    uStack_70 = 0x12;
    local_60 = "clear_cache called, sending clear message to flusher";
    uStack_58 = 0x69;
    uStack_98 = _UNK_002a0698;
    local_a0 = _DAT_002a0690;
    local_b0 = 0;
    pcStack_a8 = "libdiscore_common::core::experiment_cacher";
    uStack_80 = _UNK_002a01b8;
    uStack_88 = _s___002a01b0;
    local_90 = "common/rust/src/core/experiment_cacher.rs";
    local_68 = DAT_002a1428;
    <log::__private_api::GlobalLogger_as_log::Log>::log(&uStack_31,&local_b0);
  }
  lVar6 = *(long *)(param_1 + 8);
  puVar1 = (ulong *)(lVar6 + 0x1c0);
  uVar4 = *puVar1;
  while( true ) {
    if ((uVar4 & 1) != 0) {
      if (*(long *)puVar5 != 0) {
        local_78 = "experiment_manager";
        uStack_70 = 0x12;
        local_60 = "Failed to send clear message to flusher, flusher may have stopped";
        uStack_58 = 0x83;
        local_b0 = 0;
        pcStack_a8 = "libdiscore_common::core::experiment_cacher";
        local_90 = "common/rust/src/core/experiment_cacher.rs";
        local_a0 = _DAT_002a0690;
        uStack_98 = _UNK_002a0698;
        uStack_88 = _s___002a04b0;
        uStack_80 = _UNK_002a04b8;
        local_68 = DAT_002a1720;
        <log::__private_api::GlobalLogger_as_log::Log>::log(&uStack_31,&local_b0);
      }
      return;
    }
    if (uVar4 == 0xfffffffffffffffe) break;
    while (*puVar1 == uVar4) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 + 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        local_b0 = 0;
        FUN_00739d00(lVar6 + 0x80,&local_b0);
        <tokio::sync::task::atomic_waker::[0]::tokio::sync::task::atomic_waker::AtomicWaker>::wake
                  (lVar6 + 0x100);
        return;
      }
    }
    ClearExclusiveLocal();
    uVar4 = *puVar1;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 007471f8 to 007471fb has its CatchHandler @ 00747200 */
  std::process::abort();
}


// ===== 00747220  <libdiscore_common::core::experiment_cacher::[0]::libdiscore_common::core::experiment_cacher::ExperimentCacher>::flush_to_cache =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <libdiscore_common::core::experiment_cacher::[0]::libdiscore_common::core::experiment_cacher::ExperimentCacher>::flush_to_cache
    */

void __rustcall
<libdiscore_common::core::experiment_cacher::[0]::libdiscore_common::core::experiment_cacher::ExperimentCacher>
::flush_to_cache(undefined8 *param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  ulong *puVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *local_e0;
  long lStack_d8;
  undefined8 local_d0;
  long lStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 *local_b0;
  char *pcStack_a8;
  undefined8 local_a0;
  long lStack_98;
  char *local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  char *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  char *local_60;
  undefined8 uStack_58;
  undefined1 uStack_31;
  
  local_d0 = 0;
  local_e0 = param_3;
  lStack_d8 = param_4;
  FUN_00766b1c(&local_b0,&local_e0);
  if (local_b0 == (undefined8 *)0x0) {
    *param_1 = 0x8000000000000001;
    param_1[1] = pcStack_a8;
  }
  else {
    lVar6 = *(long *)(param_2 + 8);
    local_e0 = local_b0;
    lStack_d8 = (long)pcStack_a8;
    puVar1 = (ulong *)(lVar6 + 0x1c0);
    lStack_c8 = lStack_98;
    local_d0 = local_a0;
    uStack_b8 = uStack_88;
    local_c0 = local_90;
    uVar8 = *puVar1;
    while ((uVar8 & 1) == 0) {
      if (uVar8 == 0xfffffffffffffffe) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00747428 to 0074742b has its CatchHandler @ 00747430 */
        std::process::abort();
      }
      while (*puVar1 == uVar8) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar8 + 2;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          FUN_00739d00(lVar6 + 0x80,&local_b0);
          <tokio::sync::task::atomic_waker::[0]::tokio::sync::task::atomic_waker::AtomicWaker>::wake
                    (lVar6 + 0x100);
          goto LAB_00747304;
        }
      }
      ClearExclusiveLocal();
      uVar8 = *puVar1;
    }
    if ((local_b0 != (undefined8 *)0x0) && (pcStack_a8 != (char *)0x0)) {
      if (lStack_98 != 0) {
        puVar7 = local_b0 + 1;
        uVar8 = NEON_cmge(*local_b0,0,1);
        uVar8 = uVar8 & 0x8080808080808080;
        puVar5 = local_b0;
        lVar6 = lStack_98;
        do {
          for (; uVar8 == 0; uVar8 = uVar8 & 0x8080808080808080) {
            uVar8 = NEON_cmge(*puVar7,0,1);
            puVar7 = puVar7 + 1;
            puVar5 = puVar5 + -0x20;
          }
          uVar2 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
          uVar2 = LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) & 0x78;
          if (*(long *)((long)puVar5 + uVar2 * -4 + -0x20) != 0) {
            free(*(void **)((long)puVar5 + uVar2 * -4 + -0x18));
          }
          lVar6 = lVar6 + -1;
          uVar8 = uVar8 - 1 & uVar8;
        } while (lVar6 != 0);
      }
      if ((long)pcStack_a8 * 0x21 != -0x29) {
        free(local_b0 + (long)pcStack_a8 * -4 + -4);
      }
    }
    if (*(long *)PTR_MAX_LOG_LEVEL_FILTER_00b00c78 != 0) {
      local_78 = "experiment_manager";
      uStack_70 = 0x12;
      local_60 = "Failed to send experiments snapshot to flusher, flusher may have stopped";
      uStack_58 = 0x91;
      lStack_98 = _UNK_002a0698;
      local_a0 = _DAT_002a0690;
      local_b0 = (undefined8 *)0x0;
      pcStack_a8 = "libdiscore_common::core::experiment_cacher";
      uStack_80 = _UNK_002a04b8;
      uStack_88 = _s___002a04b0;
      local_90 = "common/rust/src/core/experiment_cacher.rs";
      local_68 = DAT_002a1808;
      <log::__private_api::GlobalLogger_as_log::Log>::log(&uStack_31,&local_b0);
    }
LAB_00747304:
    *param_1 = 0xfffffffffffffffe;
  }
  return;
}


// ===== 00747450  <libdiscore_common::core::http::native::libdiscore_common::core::http::native::StreamingBody>::from_bytes =====

/* WARNING: Unknown calling convention: __rustcall */
/* <libdiscore_common::core::http::native::libdiscore_common::core::http::native::StreamingBody>::from_bytes
    */

void __rustcall
<libdiscore_common::core::http::native::libdiscore_common::core::http::native::StreamingBody>::
from_bytes(undefined8 *param_1,undefined8 *param_2,ulong param_3,long *param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  double dVar9;
  ulong *local_80;
  code *pcStack_78;
  ulong *local_70;
  code *pcStack_68;
  undefined8 local_60;
  ulong local_58;
  ulong local_38;
  
  uVar8 = param_2[2];
  if (*param_4 == 1) {
    local_58 = param_4[1];
    local_38 = param_4[2];
    if (local_38 < local_58) {
      local_80 = &local_58;
      pcStack_78 = FUN_0074be08;
      local_70 = &local_38;
      pcStack_68 = FUN_0074be08;
                    /* try { // try from 00747590 to 007475a7 has its CatchHandler @ 007475e4 */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                (&DAT_002ae344,&local_80,&PTR_s_common_rust_src_core_http_rs_00ad7770);
    }
    dVar9 = (double)param_4[3];
  }
  else {
    local_38 = 0x800000;
    local_58 = 0x1000;
    dVar9 = DAT_002a1170;
  }
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar6 = (ulong)(dVar9 * (double)uVar8);
  uVar1 = uVar6;
  if (local_38 <= uVar6) {
    uVar1 = local_38;
  }
  uVar2 = local_58;
  if (local_58 <= uVar6) {
    uVar2 = uVar1;
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  pcStack_78 = (code *)FUN_004b25a4(0x20,8);
  if (pcStack_78 == (code *)0x0) {
                    /* try { // try from 007475ac to 007475b7 has its CatchHandler @ 007475bc */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x20);
  }
  uVar7 = 0;
  *(undefined8 *)pcStack_78 = uVar3;
  *(undefined8 *)((long)pcStack_78 + 8) = uVar4;
  *(ulong *)((long)pcStack_78 + 0x10) = uVar8;
  *(undefined8 *)((long)pcStack_78 + 0x18) = 0;
  local_80 = (ulong *)0xffffffffffffffff;
  local_38 = param_3;
  if (-1 < (long)uVar2) {
    if (uVar2 == 0) {
      lVar5 = 1;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar7 = 1;
      lVar5 = FUN_004b263c(uVar2,1);
      if (lVar5 == 0) goto LAB_00747500;
    }
    param_1[8] = uVar8;
    param_1[9] = uVar2;
    param_1[10] = 0;
    param_1[0xb] = param_3;
    param_1[1] = pcStack_78;
    *param_1 = local_80;
    param_1[3] = pcStack_68;
    param_1[2] = local_70;
    param_1[0xc] = 0;
    param_1[4] = local_60;
    param_1[5] = uVar2;
    param_1[6] = lVar5;
    param_1[7] = uVar2;
    return;
  }
LAB_00747500:
                    /* try { // try from 00747500 to 0074750b has its CatchHandler @ 00747630 */
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar7,uVar2);
}


// ===== 0074766c  <libdiscore_common::core::http::native::libdiscore_common::core::http::native::StreamingBody>::from_file =====

/* WARNING: Unknown calling convention: __rustcall */
/* <libdiscore_common::core::http::native::libdiscore_common::core::http::native::StreamingBody>::from_file
    */

void __rustcall
<libdiscore_common::core::http::native::libdiscore_common::core::http::native::StreamingBody>::
from_file(ulong *param_1,long *param_2,ulong *param_3,long *param_4,long *param_5)

{
  ulong uVar1;
  long *plVar2;
  void *__ptr;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  code *pcVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  ulong uVar13;
  double dVar14;
  long *local_128;
  undefined8 local_120;
  ulong uStack_118;
  ulong local_110;
  ulong *puStack_108;
  undefined1 local_100;
  undefined7 uStack_ff;
  long **local_f0;
  code *pcStack_e8;
  undefined8 *local_e0;
  code *pcStack_d8;
  ulong local_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong local_b8;
  ulong local_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong local_90;
  long *local_48;
  
  __ptr = (void *)param_2[1];
  lVar6 = param_2[2];
                    /* try { // try from 007476a4 to 00747773 has its CatchHandler @ 00747948 */
  local_128 = param_4;
  std::sys::fs::metadata(&local_f0,__ptr,lVar6);
  pcVar9 = pcStack_e8;
  if (((ulong)local_f0 & 1) == 0) {
    uVar13 = *param_3;
    if (uVar13 == 2) {
      lVar7 = *param_5;
      uVar1 = local_b8;
joined_r0x00747724:
      if (lVar7 == 1) {
        plVar8 = (long *)param_5[1];
        plVar10 = (long *)param_5[2];
        if (plVar10 < plVar8) {
          local_f0 = &local_48;
          pcStack_e8 = FUN_0074be08;
          local_e0 = &local_120;
          pcStack_d8 = FUN_0074be08;
                    /* try { // try from 00747900 to 00747917 has its CatchHandler @ 00747948 */
          local_120 = plVar10;
          local_48 = plVar8;
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_fmt
                    (&DAT_002ae344,&local_f0,&PTR_s_common_rust_src_core_http_rs_00ad7770);
        }
        dVar14 = (double)param_5[3];
      }
      else {
        plVar10 = (long *)0x800000;
        plVar8 = (long *)0x1000;
        dVar14 = DAT_002a1170;
      }
      plVar11 = (long *)(long)(dVar14 * (double)uVar1);
      plVar2 = plVar11;
      if (plVar10 <= plVar11) {
        plVar2 = plVar10;
      }
      if (plVar8 <= plVar11) {
        plVar8 = plVar2;
      }
      local_f0 = (long **)0x1b600000000;
      pcStack_e8 = (code *)0x1;
      <std::fs::[j]::std::fs::OpenOptions>::_open(&local_120,&local_f0,__ptr,lVar6);
      pcVar9 = (code *)uStack_118;
      if ((int)local_120 != 1) {
                    /* try { // try from 00747818 to 0074781f has its CatchHandler @ 00747948 */
        <tokio::fs::file::tokio::fs::file::File>::from_std(&local_f0,local_120._4_4_);
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        puStack_108 = (ulong *)FUN_004b25a4(0x68,8);
        plVar10 = local_128;
        if (puStack_108 == (ulong *)0x0) {
                    /* try { // try from 0074791c to 00747927 has its CatchHandler @ 00747934 */
                    /* WARNING: Subroutine does not return */
          alloc::alloc::handle_alloc_error(8,0x68);
        }
        local_100 = uVar13 == 2;
        puStack_108[9] = uStack_a8;
        puStack_108[8] = local_b0;
        puStack_108[0xb] = uStack_98;
        puStack_108[10] = uStack_a0;
        puStack_108[0xc] = local_90;
        local_110 = param_3[2];
        local_48 = local_128;
        puStack_108[1] = (ulong)pcStack_e8;
        *puStack_108 = (ulong)local_f0;
        puStack_108[3] = (ulong)pcStack_d8;
        puStack_108[2] = (ulong)local_e0;
        puStack_108[5] = uStack_c8;
        puStack_108[4] = local_d0;
        puStack_108[7] = local_b8;
        puStack_108[6] = uStack_c0;
        uStack_118 = param_3[1];
        local_120 = (long *)*param_3;
        if ((long)plVar8 < 0) {
          uVar12 = 0;
LAB_00747880:
                    /* try { // try from 00747880 to 0074788b has its CatchHandler @ 00747978 */
                    /* WARNING: Subroutine does not return */
          alloc::raw_vec::handle_error(uVar12,plVar8);
        }
        if (plVar8 == (long *)0x0) {
          uVar13 = 1;
        }
        else {
          __rustc::__rust_no_alloc_shim_is_unstable_v2();
          uVar12 = 1;
          uVar13 = FUN_004b263c(plVar8,1);
          if (uVar13 == 0) goto LAB_00747880;
        }
        param_1[6] = uVar13;
        param_1[7] = (ulong)plVar8;
        param_1[4] = CONCAT71(uStack_ff,local_100);
        param_1[5] = (ulong)plVar8;
        param_1[1] = uStack_118;
        *param_1 = (ulong)local_120;
        param_1[3] = (ulong)puStack_108;
        param_1[2] = local_110;
        param_1[8] = uVar1;
        param_1[9] = (ulong)plVar8;
        param_1[10] = 0;
        param_1[0xb] = (ulong)plVar10;
        param_1[0xc] = 0;
        lVar6 = *param_2;
        goto joined_r0x007478d8;
      }
      goto LAB_00747784;
    }
    uVar3 = param_3[2];
    uVar1 = param_3[1];
    if ((uVar13 & 1) == 0) {
      uVar1 = local_b8;
    }
    if (((uVar3 < local_b8) && (uVar1 <= local_b8)) && (uVar3 <= uVar1 && uVar1 - uVar3 != 0)) {
      lVar7 = *param_5;
      uVar1 = uVar1 - uVar3;
      goto joined_r0x00747724;
    }
    param_1[3] = uVar1;
    param_1[4] = local_b8;
    param_1[1] = 0x8000000000000004;
    param_1[2] = uVar3;
    *param_1 = 0xfffffffffffffffe;
  }
  else {
LAB_00747784:
    param_1[1] = 0x8000000000000003;
    param_1[2] = (ulong)pcVar9;
    *param_1 = 0xfffffffffffffffe;
  }
  if (local_128 != (long *)0x0) {
    do {
      lVar6 = *local_128;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(local_128,0x10);
      if (bVar5) {
        *local_128 = lVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar6 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 007477d8 to 007477df has its CatchHandler @ 0074792c */
      <alloc::sync::[n]::alloc::sync::Arc<std::sync::poison::mutex::Mutex<core::option::Option<alloc::boxed::Box<dyn_Trait<Assoc=X>+{backref_26}::ops::function::Fn<(libdiscore_common::core::http::ProgressEvent)>+{backref_26}::marker::Sync+{backref_71}::Send>>>>>
      ::drop_slow(&local_128);
    }
  }
  lVar6 = *param_2;
joined_r0x007478d8:
  if (lVar6 != 0) {
    free(__ptr);
  }
  return;
}


// ===== 007479c8  FUN_007479c8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007479c8(long *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  byte bVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  byte bVar15;
  undefined8 uVar16;
  ulong uVar17;
  long local_210 [28];
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
  
  lVar1 = param_2[0xb];
  uVar3 = param_2[0xc];
  lVar9 = 0;
  uVar12 = lVar1 * 0x517cc1b727220a95;
  puVar2 = (undefined8 *)*param_1;
  uVar4 = param_1[1];
  bVar6 = (byte)(uVar12 >> 0x38);
  bVar15 = bVar6 >> 1;
  uVar13 = CONCAT17(bVar15,CONCAT16(bVar15,CONCAT15(bVar15,CONCAT14(bVar15,CONCAT13(bVar15,CONCAT12(
                                                  bVar15,CONCAT11(bVar15,bVar15)))))));
  uVar11 = uVar12 & uVar4;
  uVar16 = *(undefined8 *)((long)puVar2 + uVar11);
  uVar17 = NEON_cmeq(uVar16,uVar13,1);
  while( true ) {
    for (uVar17 = uVar17 & 0x8080808080808080; uVar17 != 0; uVar17 = uVar17 - 1 & uVar17) {
      uVar5 = (uVar17 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar17 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      puVar10 = puVar2 + (uVar11 + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3) & uVar4) *
                         -5;
      if (puVar10[-5] == lVar1) goto LAB_00747b1c;
    }
    uVar16 = NEON_cmeq(uVar16,0xffffffffffffffff,1);
    bVar15 = NEON_umaxv(uVar16,1);
    if ((bVar15 & 1) != 0) break;
    lVar9 = lVar9 + 8;
    uVar11 = uVar11 + lVar9 & uVar4;
    uVar16 = *(undefined8 *)((long)puVar2 + uVar11);
    uVar17 = NEON_cmeq(uVar16,uVar13,1);
  }
  if (param_1[2] == 0) {
                    /* try { // try from 00747ba8 to 00747bbb has its CatchHandler @ 00747c18 */
    <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::stores::store_database::partition::Partition<libdiscore_common[1cb84820f9455fa0]::core::snowflake::EmojiId,libdiscore_common[1cb84820f9455fa0]::stores::guild_emoji::RawGuildEmoji>)>>
    ::reserve_rehash::
    <hashbrown[32fc5d502e7f9af5]::map::make_hasher<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::stores::store_database::partition::Partition<libdiscore_common[1cb84820f9455fa0]::core::snowflake::EmojiId,libdiscore_common[1cb84820f9455fa0]::stores::guild_emoji::RawGuildEmoji>,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::_closure_0_>
              (param_1,1,param_1 + 4,1);
    puVar2 = (undefined8 *)*param_1;
    uVar4 = param_1[1];
    uVar12 = uVar4 & uVar12;
    uVar17 = NEON_cmlt(*(undefined8 *)((long)puVar2 + uVar12),0,1);
  }
  else {
    uVar12 = uVar4 & uVar12;
    uVar17 = NEON_cmlt(*(undefined8 *)((long)puVar2 + uVar12),0,1);
  }
  if (uVar17 == 0) {
    lVar9 = 8;
    do {
      uVar12 = uVar12 + lVar9;
      lVar9 = lVar9 + 8;
      uVar12 = uVar12 & uVar4;
      uVar17 = NEON_cmlt(*(undefined8 *)((long)puVar2 + uVar12),0,1);
    } while (uVar17 == 0);
  }
  uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
  uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
  uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
  uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
  uVar12 = uVar12 + ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3) & uVar4;
  uVar17 = (ulong)*(char *)((long)puVar2 + uVar12);
  if (-1 < *(char *)((long)puVar2 + uVar12)) {
    uVar12 = NEON_cmlt(*puVar2,0,1);
    uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
    uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
    uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
    uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
    uVar12 = (ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3;
    uVar17 = (ulong)*(byte *)((long)puVar2 + uVar12);
  }
  lVar14 = param_1[3];
  lVar9 = param_1[2];
  *(byte *)((long)puVar2 + uVar12) = bVar6 >> 1;
  *(byte *)((long)puVar2 + (uVar12 - 8 & uVar4) + 8) = bVar6 >> 1;
  uVar16 = _UNK_00ad7790;
  puVar7 = PTR_DAT_00ad7788;
  puVar10 = puVar2 + uVar12 * -5;
  puVar10[-5] = lVar1;
  uVar8 = _UNK_00ad77a0;
  uVar13 = _DAT_00ad7798;
  puVar10[-3] = uVar16;
  puVar10[-4] = puVar7;
  puVar10[-1] = uVar8;
  puVar10[-2] = uVar13;
  param_1[3] = lVar14 + 1;
  param_1[2] = lVar9 - (uVar17 & 1);
LAB_00747b1c:
  uStack_88 = param_2[0x15];
  local_90 = param_2[0x14];
  uStack_78 = param_2[0x17];
  uStack_80 = param_2[0x16];
  uStack_68 = param_2[0x19];
  local_70 = param_2[0x18];
  uStack_58 = param_2[0x1b];
  uStack_60 = param_2[0x1a];
  uStack_c8 = param_2[0xd];
  local_d0 = param_2[0xc];
  uStack_b8 = param_2[0xf];
  uStack_c0 = param_2[0xe];
  uStack_a8 = param_2[0x11];
  local_b0 = param_2[0x10];
  uStack_98 = param_2[0x13];
  uStack_a0 = param_2[0x12];
  uStack_108 = param_2[5];
  local_110 = param_2[4];
  uStack_f8 = param_2[7];
  uStack_100 = param_2[6];
  uStack_e8 = param_2[9];
  local_f0 = param_2[8];
  uStack_d8 = param_2[0xb];
  uStack_e0 = param_2[10];
  uStack_128 = param_2[1];
  local_130 = *param_2;
  uStack_118 = param_2[3];
  uStack_120 = param_2[2];
  FUN_0075e770(local_210,puVar10 + -4,uVar3,&local_130);
  if (local_210[0] == 2) {
    param_1[4] = param_1[4] + 1;
  }
  else {
    FUN_00746170(local_210);
  }
  return;
}


// ===== 00747c2c  FUN_00747c2c =====

void FUN_00747c2c(undefined8 *param_1,long *param_2,long *param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  byte bVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined8 uVar17;
  long local_148;
  undefined8 *local_140;
  long local_138;
  undefined8 uStack_130;
  long local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
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
  
  if (param_2[3] != 0) {
    lVar11 = *param_3;
    lVar12 = *param_2;
    uVar3 = param_2[1];
    lVar7 = 0;
    uVar10 = lVar11 * 0x517cc1b727220a95;
    bVar14 = (byte)(uVar10 >> 0x39);
    uVar17 = CONCAT17(bVar14,CONCAT16(bVar14,CONCAT15(bVar14,CONCAT14(bVar14,CONCAT13(bVar14,
                                                  CONCAT12(bVar14,CONCAT11(bVar14,bVar14)))))));
    uVar9 = uVar10 & uVar3;
    uVar15 = *(undefined8 *)(lVar12 + uVar9);
    uVar16 = NEON_cmeq(uVar15,uVar17,1);
    uVar16 = uVar16 & 0x8080808080808080;
    while( true ) {
      for (; uVar16 == 0; uVar16 = uVar16 & 0x8080808080808080) {
        uVar15 = NEON_cmeq(uVar15,0xffffffffffffffff,1);
        bVar14 = NEON_umaxv(uVar15,1);
        if ((bVar14 & 1) != 0) goto LAB_00747d34;
        lVar7 = lVar7 + 8;
        uVar9 = uVar9 + lVar7 & uVar3;
        uVar15 = *(undefined8 *)(lVar12 + uVar9);
        uVar16 = NEON_cmeq(uVar15,uVar17,1);
      }
      uVar4 = (uVar16 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar16 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      lVar1 = lVar12 + (uVar9 + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) & uVar3) *
                       -0x28;
      if (lVar11 == *(long *)(lVar1 + -0x28)) break;
      uVar16 = uVar16 - 1 & uVar16;
    }
    FUN_006fcadc(&local_148,lVar1 + -0x20,*param_4 * 0x517cc1b727220a95);
    lVar1 = local_128;
    lVar7 = local_138;
    puVar6 = local_140;
    if (local_140 != (undefined8 *)0x2) {
      lVar8 = 0;
      param_2[4] = param_2[4] + -1;
      uVar9 = uVar10 & uVar3;
      uVar15 = *(undefined8 *)(lVar12 + uVar9);
      uVar16 = NEON_cmeq(uVar15,uVar17,1);
      uVar16 = uVar16 & 0x8080808080808080;
      goto joined_r0x00747e24;
    }
  }
LAB_00747d34:
  *param_1 = 2;
  return;
joined_r0x00747e24:
  if (uVar16 != 0) {
    uVar4 = (uVar16 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar16 >> 7 & 0xff00ff00ff00ff) << 8;
    uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
    lVar2 = lVar12 + (uVar9 + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) & uVar3) * -0x28;
    if (lVar11 == *(long *)(lVar2 + -0x28)) {
                    /* try { // try from 00747eec to 00747efb has its CatchHandler @ 00747fa4 */
      if ((((*(long *)(lVar2 + -8) == 0) &&
           (FUN_006fde54(&local_148,param_2,uVar10,param_3), local_148 != 0)) &&
          (local_140 != (undefined8 *)0x0)) && (local_138 != 0)) {
        if (local_128 != 0) {
          puVar13 = local_140 + 1;
          uVar16 = NEON_cmge(*local_140,0,1);
          uVar16 = uVar16 & 0x8080808080808080;
          puVar5 = local_140;
          lVar12 = local_128;
          do {
            for (; uVar16 == 0; uVar16 = uVar16 & 0x8080808080808080) {
              uVar16 = NEON_cmge(*puVar13,0,1);
              puVar13 = puVar13 + 1;
              puVar5 = puVar5 + -0xe8;
            }
            uVar3 = (uVar16 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar16 >> 7 & 0xff00ff00ff00ff) << 8;
            uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
                    /* try { // try from 00747f68 to 00747f6b has its CatchHandler @ 00747fb8 */
            FUN_00702244(puVar5 + (long)-(int)((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3) *
                                  0x1d + -0x1c);
            lVar12 = lVar12 + -1;
            uVar16 = uVar16 - 1 & uVar16;
          } while (lVar12 != 0);
        }
        if (local_138 * 0xe9 != -0xf1) {
          free(local_140 + local_138 * -0x1d + -0x1d);
        }
      }
LAB_00747e94:
      param_1[0x15] = local_98;
      param_1[0x14] = uStack_a0;
      param_1[0x17] = local_88;
      param_1[0x16] = uStack_90;
      param_1[0x19] = local_78;
      param_1[0x18] = uStack_80;
      param_1[0x1b] = local_68;
      param_1[0x1a] = uStack_70;
      param_1[0xd] = local_d8;
      param_1[0xc] = uStack_e0;
      param_1[0xf] = local_c8;
      param_1[0xe] = uStack_d0;
      param_1[0x11] = local_b8;
      param_1[0x10] = uStack_c0;
      param_1[0x13] = local_a8;
      param_1[0x12] = uStack_b0;
      param_1[5] = local_118;
      param_1[4] = uStack_120;
      param_1[7] = local_108;
      param_1[6] = uStack_110;
      param_1[9] = local_f8;
      param_1[8] = uStack_100;
      param_1[0xb] = local_e8;
      param_1[10] = uStack_f0;
      param_1[1] = lVar7;
      *param_1 = puVar6;
      param_1[3] = lVar1;
      param_1[2] = uStack_130;
      return;
    }
    uVar16 = uVar16 - 1 & uVar16;
    goto joined_r0x00747e24;
  }
  uVar15 = NEON_cmeq(uVar15,0xffffffffffffffff,1);
  bVar14 = NEON_umaxv(uVar15,1);
  if ((bVar14 & 1) != 0) goto LAB_00747e94;
  lVar8 = lVar8 + 8;
  uVar9 = uVar9 + lVar8 & uVar3;
  uVar15 = *(undefined8 *)(lVar12 + uVar9);
  uVar16 = NEON_cmeq(uVar15,uVar17,1);
  uVar16 = uVar16 & 0x8080808080808080;
  goto joined_r0x00747e24;
}


// ===== 00747fcc  FUN_00747fcc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00747fcc(long param_1,long param_2,long *param_3)

{
  void *__ptr;
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long local_278;
  undefined *local_270;
  undefined8 *puStack_268;
  long lStack_260;
  long local_258;
  void *local_250;
  long local_240;
  void *pvStack_238;
  undefined8 *local_230;
  long local_228;
  long local_218;
  undefined *local_150;
  undefined8 *puStack_148;
  long lStack_140;
  long local_138;
  long lStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
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
  
                    /* try { // try from 00748010 to 0074801b has its CatchHandler @ 00748330 */
  local_278 = param_2;
  FUN_006fde54(&local_150,param_1,param_2 * 0x517cc1b727220a95,&local_278);
  lVar7 = lStack_140;
  puVar4 = puStack_148;
  if (((local_150 != (undefined *)0x0) && (puStack_148 != (undefined8 *)0x0)) &&
     (*(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) - lStack_130, lStack_140 != 0)) {
    if (lStack_130 != 0) {
      puVar6 = puStack_148 + 1;
      uVar8 = NEON_cmge(*puStack_148,0,1);
      uVar8 = uVar8 & 0x8080808080808080;
      puVar3 = puStack_148;
      lVar5 = lStack_130;
      do {
        for (; uVar8 == 0; uVar8 = uVar8 & 0x8080808080808080) {
          uVar8 = NEON_cmge(*puVar6,0,1);
          puVar6 = puVar6 + 1;
          puVar3 = puVar3 + -0xe8;
        }
        uVar1 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
                    /* try { // try from 00748094 to 00748097 has its CatchHandler @ 00748334 */
        FUN_00702244(puVar3 + (long)-(int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) *
                              0x1d + -0x1c);
        lVar5 = lVar5 + -1;
        uVar8 = uVar8 - 1 & uVar8;
      } while (lVar5 != 0);
    }
    if (lVar7 * 0xe9 != -0xf1) {
      free(puVar4 + lVar7 * -0x1d + -0x1d);
    }
  }
  if (param_3[2] == 0) {
    if (*param_3 == 0) {
      return;
    }
    local_230 = (undefined8 *)param_3[1];
  }
  else {
    lVar7 = 0;
    lVar5 = *param_3;
    __ptr = (void *)param_3[1];
    lVar2 = param_3[2] * 0xe0;
    puStack_268 = _UNK_00ad7790;
    local_270 = PTR_DAT_00ad7788;
    local_258 = _UNK_00ad77a0;
    lStack_260 = _DAT_00ad7798;
    pvStack_238 = (void *)((long)__ptr + lVar2);
    local_250 = __ptr;
    local_240 = lVar5;
    do {
      if (*(undefined **)((long)__ptr + lVar7) == (undefined *)0x2) {
        if (lVar2 + -0xe0 != lVar7) {
          uVar8 = ((lVar2 - lVar7) - 0xe0U) / 0xe0;
          lVar7 = (long)__ptr + lVar7;
          do {
            lVar7 = lVar7 + 0xe0;
            FUN_00707408(lVar7);
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        break;
      }
      uStack_120 = *(undefined8 *)((long)__ptr + lVar7 + 0x30);
      local_128 = *(undefined8 *)((long)__ptr + lVar7 + 0x28);
      uStack_110 = *(undefined8 *)((long)__ptr + lVar7 + 0x40);
      local_118 = *(undefined8 *)((long)__ptr + lVar7 + 0x38);
      local_f8 = *(undefined8 *)((long)__ptr + lVar7 + 0x58);
      local_f0 = *(undefined8 *)((long)__ptr + lVar7 + 0x60);
      uStack_100 = *(undefined8 *)((long)__ptr + lVar7 + 0x50);
      local_108 = *(undefined8 *)((long)__ptr + lVar7 + 0x48);
      lStack_140 = *(long *)((long)__ptr + lVar7 + 0x10);
      puStack_148 = *(undefined8 **)((long)__ptr + lVar7 + 8);
      lStack_130 = *(long *)((long)__ptr + lVar7 + 0x20);
      local_138 = *(long *)((long)__ptr + lVar7 + 0x18);
      uStack_80 = *(undefined8 *)((long)__ptr + lVar7 + 0xd0);
      local_88 = *(undefined8 *)((long)__ptr + lVar7 + 200);
      uStack_90 = *(undefined8 *)((long)__ptr + lVar7 + 0xc0);
      local_98 = *(undefined8 *)((long)__ptr + lVar7 + 0xb8);
      uStack_a0 = *(undefined8 *)((long)__ptr + lVar7 + 0xb0);
      local_a8 = *(undefined8 *)((long)__ptr + lVar7 + 0xa8);
      uStack_b0 = *(undefined8 *)((long)__ptr + lVar7 + 0xa0);
      local_b8 = *(undefined8 *)((long)__ptr + lVar7 + 0x98);
      uStack_c0 = *(undefined8 *)((long)__ptr + lVar7 + 0x90);
      local_c8 = *(undefined8 *)((long)__ptr + lVar7 + 0x88);
      uStack_d0 = *(undefined8 *)((long)__ptr + lVar7 + 0x80);
      local_d8 = *(undefined8 *)((long)__ptr + lVar7 + 0x78);
      local_78 = *(undefined8 *)((long)__ptr + lVar7 + 0xd8);
      uStack_e0 = *(undefined8 *)((long)__ptr + lVar7 + 0x70);
      local_e8 = *(undefined8 *)((long)__ptr + lVar7 + 0x68);
                    /* try { // try from 007481a0 to 007481af has its CatchHandler @ 00748344 */
      local_150 = *(undefined **)((long)__ptr + lVar7);
      FUN_0075e770(&local_230,&local_270,local_f0,&local_150);
      if (local_230 != (undefined8 *)0x2) {
        FUN_00746170(&local_230);
      }
      lVar7 = lVar7 + 0xe0;
    } while (lVar2 != lVar7);
    if (lVar5 != 0) {
      free(__ptr);
    }
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + local_258;
    puStack_148 = puStack_268;
    local_150 = local_270;
    local_138 = local_258;
    lStack_140 = lStack_260;
    FUN_0075ee08(&local_230,param_1,param_2,&local_150);
    if (local_230 == (undefined8 *)0x0) {
      return;
    }
    if (local_228 == 0) {
      return;
    }
    if (local_218 != 0) {
      puVar4 = local_230 + 1;
      uVar8 = NEON_cmge(*local_230,0,1);
      uVar8 = uVar8 & 0x8080808080808080;
      puVar6 = local_230;
      lVar7 = local_218;
      do {
        for (; uVar8 == 0; uVar8 = uVar8 & 0x8080808080808080) {
          uVar8 = NEON_cmge(*puVar4,0,1);
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + -0xe8;
        }
        uVar1 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        lVar7 = lVar7 + -1;
        uVar8 = uVar8 - 1 & uVar8;
        FUN_00702244(puVar6 + (long)-(int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) *
                              0x1d + -0x1c);
      } while (lVar7 != 0);
    }
    if (local_228 * 0xe9 == -0xf1) {
      return;
    }
    local_230 = local_230 + local_228 * -0x1d + -0x1d;
  }
  free(local_230);
  return;
}


// ===== 0074836c  FUN_0074836c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0074836c(long *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  char cVar6;
  bool bVar7;
  byte bVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  byte bVar17;
  undefined8 uVar18;
  ulong uVar19;
  long local_108 [2];
  long local_f8;
  void *local_f0;
  byte local_e0;
  long *local_d8 [5];
  undefined8 local_b0;
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
  
  lVar1 = param_2[8];
  uVar3 = param_2[9];
  lVar11 = 0;
  uVar14 = lVar1 * 0x517cc1b727220a95;
  puVar2 = (undefined8 *)*param_1;
  uVar4 = param_1[1];
  bVar8 = (byte)(uVar14 >> 0x38);
  bVar17 = bVar8 >> 1;
  uVar15 = CONCAT17(bVar17,CONCAT16(bVar17,CONCAT15(bVar17,CONCAT14(bVar17,CONCAT13(bVar17,CONCAT12(
                                                  bVar17,CONCAT11(bVar17,bVar17)))))));
  uVar12 = uVar14 & uVar4;
  uVar18 = *(undefined8 *)((long)puVar2 + uVar12);
  uVar19 = NEON_cmeq(uVar18,uVar15,1);
  while( true ) {
    for (uVar19 = uVar19 & 0x8080808080808080; uVar19 != 0; uVar19 = uVar19 - 1 & uVar19) {
      uVar5 = (uVar19 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar19 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      puVar13 = puVar2 + (uVar12 + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3) & uVar4) *
                         -5;
      if (puVar13[-5] == lVar1) goto LAB_007484c4;
    }
    uVar18 = NEON_cmeq(uVar18,0xffffffffffffffff,1);
    bVar17 = NEON_umaxv(uVar18,1);
    if ((bVar17 & 1) != 0) break;
    lVar11 = lVar11 + 8;
    uVar12 = uVar12 + lVar11 & uVar4;
    uVar18 = *(undefined8 *)((long)puVar2 + uVar12);
    uVar19 = NEON_cmeq(uVar18,uVar15,1);
  }
  if (param_1[2] == 0) {
                    /* try { // try from 0074857c to 0074858f has its CatchHandler @ 007485ec */
    <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::stores::store_database::partition::Partition<libdiscore_common[1cb84820f9455fa0]::core::snowflake::EmojiId,libdiscore_common[1cb84820f9455fa0]::stores::guild_emoji::RawGuildEmoji>)>>
    ::reserve_rehash::
    <hashbrown[32fc5d502e7f9af5]::map::make_hasher<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::stores::store_database::partition::Partition<libdiscore_common[1cb84820f9455fa0]::core::snowflake::EmojiId,libdiscore_common[1cb84820f9455fa0]::stores::guild_emoji::RawGuildEmoji>,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::_closure_0_>
              (param_1,1,param_1 + 4,1);
    puVar2 = (undefined8 *)*param_1;
    uVar4 = param_1[1];
    uVar14 = uVar4 & uVar14;
    uVar19 = NEON_cmlt(*(undefined8 *)((long)puVar2 + uVar14),0,1);
  }
  else {
    uVar14 = uVar4 & uVar14;
    uVar19 = NEON_cmlt(*(undefined8 *)((long)puVar2 + uVar14),0,1);
  }
  if (uVar19 == 0) {
    lVar11 = 8;
    do {
      uVar14 = uVar14 + lVar11;
      lVar11 = lVar11 + 8;
      uVar14 = uVar14 & uVar4;
      uVar19 = NEON_cmlt(*(undefined8 *)((long)puVar2 + uVar14),0,1);
    } while (uVar19 == 0);
  }
  uVar19 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
  uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
  uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
  uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
  uVar14 = uVar14 + ((ulong)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3) & uVar4;
  uVar19 = (ulong)*(char *)((long)puVar2 + uVar14);
  if (-1 < *(char *)((long)puVar2 + uVar14)) {
    uVar14 = NEON_cmlt(*puVar2,0,1);
    uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
    uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
    uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
    uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
    uVar14 = (ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3;
    uVar19 = (ulong)*(byte *)((long)puVar2 + uVar14);
  }
  lVar16 = param_1[3];
  lVar11 = param_1[2];
  *(byte *)((long)puVar2 + uVar14) = bVar8 >> 1;
  *(byte *)((long)puVar2 + (uVar14 - 8 & uVar4) + 8) = bVar8 >> 1;
  uVar18 = _UNK_00ad7790;
  puVar9 = PTR_DAT_00ad7788;
  puVar13 = puVar2 + uVar14 * -5;
  puVar13[-5] = lVar1;
  uVar10 = _UNK_00ad77a0;
  uVar15 = _DAT_00ad7798;
  puVar13[-3] = uVar18;
  puVar13[-4] = puVar9;
  puVar13[-1] = uVar10;
  puVar13[-2] = uVar15;
  param_1[3] = lVar16 + 1;
  param_1[2] = lVar11 - (uVar19 & 1);
LAB_007484c4:
  uStack_88 = param_2[5];
  uStack_90 = param_2[4];
  uStack_78 = param_2[7];
  local_80 = param_2[6];
  uStack_68 = param_2[9];
  uStack_70 = param_2[8];
  local_60 = param_2[10];
  uStack_a8 = param_2[1];
  local_b0 = *param_2;
  uStack_98 = param_2[3];
  local_a0 = param_2[2];
  FUN_0075ebd0(local_108,puVar13 + -4,uVar3,&local_b0);
  if (local_108[0] == 2) {
    param_1[4] = param_1[4] + 1;
  }
  else {
    if (0x18 < local_e0) {
      do {
        lVar11 = *local_d8[0];
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(local_d8[0],0x10);
        if (bVar7) {
          *local_d8[0] = lVar11 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar11 + -1 == 0) {
        DataMemoryBarrier(2,1);
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(local_d8);
      }
    }
    if (local_f8 != 0) {
      free(local_f0);
    }
  }
  return;
}


// ===== 00748600  FUN_00748600 =====

void FUN_00748600(long *param_1,long *param_2,long *param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  byte bVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 uVar16;
  long local_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long local_c0;
  long local_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  if (param_2[3] != 0) {
    lVar12 = *param_3;
    lVar3 = *param_2;
    uVar4 = param_2[1];
    lVar8 = 0;
    uVar11 = lVar12 * 0x517cc1b727220a95;
    bVar13 = (byte)(uVar11 >> 0x39);
    uVar16 = CONCAT17(bVar13,CONCAT16(bVar13,CONCAT15(bVar13,CONCAT14(bVar13,CONCAT13(bVar13,
                                                  CONCAT12(bVar13,CONCAT11(bVar13,bVar13)))))));
    uVar10 = uVar11 & uVar4;
    uVar14 = *(undefined8 *)(lVar3 + uVar10);
    uVar15 = NEON_cmeq(uVar14,uVar16,1);
    uVar15 = uVar15 & 0x8080808080808080;
    while( true ) {
      for (; uVar15 == 0; uVar15 = uVar15 & 0x8080808080808080) {
        uVar14 = NEON_cmeq(uVar14,0xffffffffffffffff,1);
        bVar13 = NEON_umaxv(uVar14,1);
        if ((bVar13 & 1) != 0) goto LAB_00748708;
        lVar8 = lVar8 + 8;
        uVar10 = uVar10 + lVar8 & uVar4;
        uVar14 = *(undefined8 *)(lVar3 + uVar10);
        uVar15 = NEON_cmeq(uVar14,uVar16,1);
      }
      uVar5 = (uVar15 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar15 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      lVar1 = lVar3 + (uVar10 + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3) & uVar4) *
                      -0x28;
      if (lVar12 == *(long *)(lVar1 + -0x28)) break;
      uVar15 = uVar15 - 1 & uVar15;
    }
    FUN_006fd838(&local_c0,lVar1 + -0x20,*param_4 * 0x517cc1b727220a95);
    lVar7 = lStack_a0;
    lVar6 = lStack_a8;
    lVar1 = lStack_b0;
    lVar8 = local_b8;
    if (local_b8 != 2) {
      lVar9 = 0;
      param_2[4] = param_2[4] + -1;
      uVar10 = uVar11 & uVar4;
      uVar14 = *(undefined8 *)(lVar3 + uVar10);
      uVar15 = NEON_cmeq(uVar14,uVar16,1);
      uVar15 = uVar15 & 0x8080808080808080;
      goto joined_r0x00748780;
    }
  }
LAB_00748708:
  *param_1 = 2;
  return;
joined_r0x00748780:
  if (uVar15 != 0) {
    uVar5 = (uVar15 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar15 >> 7 & 0xff00ff00ff00ff) << 8;
    uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
    lVar2 = lVar3 + (uVar10 + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3) & uVar4) * -0x28;
    if (lVar12 == *(long *)(lVar2 + -0x28)) {
                    /* try { // try from 0074881c to 0074884f has its CatchHandler @ 00748854 */
      if ((*(long *)(lVar2 + -8) == 0) &&
         (FUN_006fde54(&local_c0,param_2,uVar11,param_3), local_c0 != 0)) {
        lStack_d8 = lStack_b0;
        local_e0 = local_b8;
        lStack_c8 = lStack_a0;
        lStack_d0 = lStack_a8;
        if (local_b8 != 0) {
          FUN_007043b0(&local_e0);
        }
      }
LAB_007487f0:
      param_1[5] = lStack_90;
      param_1[4] = lStack_98;
      param_1[7] = local_80;
      param_1[6] = lStack_88;
      param_1[9] = lStack_70;
      param_1[8] = lStack_78;
      param_1[10] = lStack_68;
      param_1[1] = lVar1;
      *param_1 = lVar8;
      param_1[3] = lVar7;
      param_1[2] = lVar6;
      return;
    }
    uVar15 = uVar15 - 1 & uVar15;
    goto joined_r0x00748780;
  }
  uVar14 = NEON_cmeq(uVar14,0xffffffffffffffff,1);
  bVar13 = NEON_umaxv(uVar14,1);
  if ((bVar13 & 1) != 0) goto LAB_007487f0;
  lVar9 = lVar9 + 8;
  uVar10 = uVar10 + lVar9 & uVar4;
  uVar14 = *(undefined8 *)(lVar3 + uVar10);
  uVar15 = NEON_cmeq(uVar14,uVar16,1);
  uVar15 = uVar15 & 0x8080808080808080;
  goto joined_r0x00748780;
}


// ===== 00748868  FUN_00748868 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00748868(long param_1,long param_2,long *param_3)

{
  long lVar1;
  long *__ptr;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long local_178;
  undefined *local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long local_158;
  long *local_150;
  long *local_148;
  long local_140;
  long *plStack_138;
  undefined *local_130;
  undefined *puStack_128;
  undefined *local_120;
  void *local_118;
  byte local_108;
  long *local_100 [6];
  undefined *local_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  long lStack_90;
  long local_88;
  long lStack_80;
  
                    /* try { // try from 007488ac to 00748903 has its CatchHandler @ 00748b14 */
  local_178 = param_2;
  FUN_006fde54(&local_d0,param_1,param_2 * 0x517cc1b727220a95,&local_178);
  puVar4 = puStack_c0;
  if (local_d0 != (undefined *)0x0) {
    puStack_128 = puStack_b8;
    local_130 = puStack_c0;
    local_120 = puStack_b0;
    if (puStack_c8 != (undefined *)0x0) {
      local_d0 = puStack_c8;
      puStack_c0 = puStack_b8;
      puStack_c8 = puVar4;
      puStack_b8 = puStack_b0;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) - (long)puStack_b0;
      FUN_007043b0(&local_d0);
    }
  }
  if (param_3[2] == 0) {
    if (*param_3 != 0) {
      free((void *)param_3[1]);
    }
  }
  else {
    lVar1 = *param_3;
    __ptr = (long *)param_3[1];
    plVar9 = __ptr + param_3[2] * 0xb;
    uStack_168 = _UNK_00ad7790;
    local_170 = PTR_DAT_00ad7788;
    local_158 = _UNK_00ad77a0;
    uStack_160 = _DAT_00ad7798;
    plVar5 = __ptr;
    local_150 = __ptr;
    local_140 = lVar1;
    plStack_138 = plVar9;
    do {
      plVar8 = plVar5 + 0xb;
      local_148 = plVar8;
      if ((undefined *)*plVar5 == (undefined *)0x2) {
        if ((long)plVar9 - (long)plVar8 != 0) {
          lVar6 = 0;
          do {
            if (0x18 < *(byte *)(plVar8 + lVar6 * 0xb + 5)) {
              plVar5 = (long *)plVar8[lVar6 * 0xb + 6];
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
                <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
              }
            }
            if (plVar8[lVar6 * 0xb + 2] != 0) {
              free((void *)plVar8[lVar6 * 0xb + 3]);
            }
            lVar6 = lVar6 + 1;
          } while (lVar6 != ((ulong)((long)plVar9 - (long)plVar8) >> 3) * 0x2e8ba2e8ba2e8ba3);
        }
        break;
      }
      puStack_c0 = (undefined *)plVar5[2];
      puStack_c8 = (undefined *)plVar5[1];
      puStack_b0 = (undefined *)plVar5[4];
      puStack_b8 = (undefined *)plVar5[3];
      lStack_a0 = plVar5[6];
      local_a8 = plVar5[5];
      lStack_90 = plVar5[8];
      local_98 = plVar5[7];
      lStack_80 = plVar5[10];
      local_88 = plVar5[9];
                    /* try { // try from 00748990 to 0074899f has its CatchHandler @ 00748b28 */
      local_d0 = (undefined *)*plVar5;
      FUN_0075ebd0(&local_130,&local_170,plVar5[9],&local_d0);
      if (local_130 != (undefined *)0x2) {
        if (0x18 < local_108) {
          do {
            lVar6 = *local_100[0];
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(local_100[0],0x10);
            if (bVar3) {
              *local_100[0] = lVar6 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar6 + -1 == 0) {
            DataMemoryBarrier(2,1);
            <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(local_100);
          }
        }
        if (local_120 != (undefined *)0x0) {
          free(local_118);
        }
      }
      plVar5 = plVar8;
    } while (plVar8 != plVar9);
    if (lVar1 != 0) {
      free(__ptr);
    }
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + local_158;
    puStack_c8 = (undefined *)uStack_168;
    local_d0 = local_170;
    puStack_b8 = (undefined *)local_158;
    puStack_c0 = (undefined *)uStack_160;
    FUN_0075efdc(&local_130,param_1,param_2,&local_d0);
    if (local_130 != (undefined *)0x0) {
      FUN_007043b0(&local_130);
    }
  }
  return;
}


// ===== 00748b48  FUN_00748b48 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00748b48(long *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  char cVar6;
  bool bVar7;
  byte bVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  byte bVar17;
  undefined8 uVar18;
  ulong uVar19;
  long local_130 [2];
  byte local_120;
  long *local_118 [2];
  byte local_108;
  long *local_100 [4];
  long *local_e0 [4];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = param_2[8];
  uVar3 = param_2[9];
  lVar11 = 0;
  uVar14 = lVar1 * 0x517cc1b727220a95;
  puVar2 = (undefined8 *)*param_1;
  uVar4 = param_1[1];
  bVar8 = (byte)(uVar14 >> 0x38);
  bVar17 = bVar8 >> 1;
  uVar15 = CONCAT17(bVar17,CONCAT16(bVar17,CONCAT15(bVar17,CONCAT14(bVar17,CONCAT13(bVar17,CONCAT12(
                                                  bVar17,CONCAT11(bVar17,bVar17)))))));
  uVar13 = uVar14 & uVar4;
  uVar18 = *(undefined8 *)((long)puVar2 + uVar13);
  uVar19 = NEON_cmeq(uVar18,uVar15,1);
  while( true ) {
    for (uVar19 = uVar19 & 0x8080808080808080; uVar19 != 0; uVar19 = uVar19 - 1 & uVar19) {
      uVar5 = (uVar19 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar19 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      puVar12 = puVar2 + (uVar13 + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3) & uVar4) *
                         -5;
      if (puVar12[-5] == lVar1) goto LAB_00748c9c;
    }
    uVar18 = NEON_cmeq(uVar18,0xffffffffffffffff,1);
    bVar17 = NEON_umaxv(uVar18,1);
    if ((bVar17 & 1) != 0) break;
    lVar11 = lVar11 + 8;
    uVar13 = uVar13 + lVar11 & uVar4;
    uVar18 = *(undefined8 *)((long)puVar2 + uVar13);
    uVar19 = NEON_cmeq(uVar18,uVar15,1);
  }
  if (param_1[2] == 0) {
                    /* try { // try from 00748da4 to 00748db7 has its CatchHandler @ 00748e14 */
    <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::stores::store_database::partition::Partition<libdiscore_common[1cb84820f9455fa0]::core::snowflake::EmojiId,libdiscore_common[1cb84820f9455fa0]::stores::guild_emoji::RawGuildEmoji>)>>
    ::reserve_rehash::
    <hashbrown[32fc5d502e7f9af5]::map::make_hasher<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::stores::store_database::partition::Partition<libdiscore_common[1cb84820f9455fa0]::core::snowflake::EmojiId,libdiscore_common[1cb84820f9455fa0]::stores::guild_emoji::RawGuildEmoji>,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::_closure_0_>
              (param_1,1,param_1 + 4,1);
    puVar2 = (undefined8 *)*param_1;
    uVar4 = param_1[1];
    uVar14 = uVar4 & uVar14;
    uVar19 = NEON_cmlt(*(undefined8 *)((long)puVar2 + uVar14),0,1);
  }
  else {
    uVar14 = uVar4 & uVar14;
    uVar19 = NEON_cmlt(*(undefined8 *)((long)puVar2 + uVar14),0,1);
  }
  if (uVar19 == 0) {
    lVar11 = 8;
    do {
      uVar14 = uVar14 + lVar11;
      lVar11 = lVar11 + 8;
      uVar14 = uVar14 & uVar4;
      uVar19 = NEON_cmlt(*(undefined8 *)((long)puVar2 + uVar14),0,1);
    } while (uVar19 == 0);
  }
  uVar19 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
  uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
  uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
  uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
  uVar14 = uVar14 + ((ulong)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3) & uVar4;
  uVar19 = (ulong)*(char *)((long)puVar2 + uVar14);
  if (-1 < *(char *)((long)puVar2 + uVar14)) {
    uVar14 = NEON_cmlt(*puVar2,0,1);
    uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
    uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
    uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
    uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
    uVar14 = (ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3;
    uVar19 = (ulong)*(byte *)((long)puVar2 + uVar14);
  }
  lVar16 = param_1[3];
  lVar11 = param_1[2];
  *(byte *)((long)puVar2 + uVar14) = bVar8 >> 1;
  *(byte *)((long)puVar2 + (uVar14 - 8 & uVar4) + 8) = bVar8 >> 1;
  uVar18 = _UNK_00ad7790;
  puVar9 = PTR_DAT_00ad7788;
  puVar12 = puVar2 + uVar14 * -5;
  puVar12[-5] = lVar1;
  uVar10 = _UNK_00ad77a0;
  uVar15 = _DAT_00ad7798;
  puVar12[-3] = uVar18;
  puVar12[-4] = puVar9;
  puVar12[-1] = uVar10;
  puVar12[-2] = uVar15;
  param_1[3] = lVar16 + 1;
  param_1[2] = lVar11 - (uVar19 & 1);
LAB_00748c9c:
  uStack_88 = param_2[7];
  local_90 = param_2[6];
  uStack_78 = param_2[9];
  uStack_80 = param_2[8];
  uStack_68 = param_2[0xb];
  local_70 = param_2[10];
  uStack_58 = param_2[0xd];
  uStack_60 = param_2[0xc];
  uStack_b8 = param_2[1];
  local_c0 = *param_2;
  uStack_a8 = param_2[3];
  uStack_b0 = param_2[2];
  uStack_98 = param_2[5];
  local_a0 = param_2[4];
  FUN_0075f710(local_130,puVar12 + -4,uVar3,&local_c0);
  if (local_130[0] == 2) {
    param_1[4] = param_1[4] + 1;
  }
  else {
    if (0x18 < local_120) {
      do {
        lVar11 = *local_118[0];
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(local_118[0],0x10);
        if (bVar7) {
          *local_118[0] = lVar11 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar11 + -1 == 0) {
        DataMemoryBarrier(2,1);
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(local_118);
      }
    }
    if ((local_108 != 0xff) && (0x18 < local_108)) {
      do {
        lVar11 = *local_100[0];
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(local_100[0],0x10);
        if (bVar7) {
          *local_100[0] = lVar11 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar11 + -1 == 0) {
        DataMemoryBarrier(2,1);
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(local_100);
      }
    }
    if (local_e0[0] != (long *)0x0) {
      do {
        lVar11 = *local_e0[0];
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(local_e0[0],0x10);
        if (bVar7) {
          *local_e0[0] = lVar11 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar11 + -1 == 0) {
        DataMemoryBarrier(2,1);
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(local_e0);
      }
    }
  }
  return;
}


// ===== 00748e28  FUN_00748e28 =====

void FUN_00748e28(long *param_1,long *param_2,long *param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  byte bVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 uVar16;
  long local_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long local_d8;
  long local_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long local_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  long local_68;
  
  if (param_2[3] != 0) {
    lVar12 = *param_3;
    lVar3 = *param_2;
    uVar4 = param_2[1];
    lVar8 = 0;
    uVar11 = lVar12 * 0x517cc1b727220a95;
    bVar13 = (byte)(uVar11 >> 0x39);
    uVar16 = CONCAT17(bVar13,CONCAT16(bVar13,CONCAT15(bVar13,CONCAT14(bVar13,CONCAT13(bVar13,
                                                  CONCAT12(bVar13,CONCAT11(bVar13,bVar13)))))));
    uVar10 = uVar11 & uVar4;
    uVar14 = *(undefined8 *)(lVar3 + uVar10);
    uVar15 = NEON_cmeq(uVar14,uVar16,1);
    uVar15 = uVar15 & 0x8080808080808080;
    while( true ) {
      for (; uVar15 == 0; uVar15 = uVar15 & 0x8080808080808080) {
        uVar14 = NEON_cmeq(uVar14,0xffffffffffffffff,1);
        bVar13 = NEON_umaxv(uVar14,1);
        if ((bVar13 & 1) != 0) goto LAB_00748f30;
        lVar8 = lVar8 + 8;
        uVar10 = uVar10 + lVar8 & uVar4;
        uVar14 = *(undefined8 *)(lVar3 + uVar10);
        uVar15 = NEON_cmeq(uVar14,uVar16,1);
      }
      uVar5 = (uVar15 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar15 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      lVar1 = lVar3 + (uVar10 + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3) & uVar4) *
                      -0x28;
      if (lVar12 == *(long *)(lVar1 + -0x28)) break;
      uVar15 = uVar15 - 1 & uVar15;
    }
    FUN_006fefcc(&local_d8,lVar1 + -0x20,*param_4 * 0x517cc1b727220a95);
    lVar7 = lStack_b8;
    lVar6 = lStack_c0;
    lVar1 = lStack_c8;
    lVar8 = local_d0;
    if (local_d0 != 2) {
      lVar9 = 0;
      param_2[4] = param_2[4] + -1;
      uVar10 = uVar11 & uVar4;
      uVar14 = *(undefined8 *)(lVar3 + uVar10);
      uVar15 = NEON_cmeq(uVar14,uVar16,1);
      uVar15 = uVar15 & 0x8080808080808080;
      goto joined_r0x00748fc0;
    }
  }
LAB_00748f30:
  *param_1 = 2;
  return;
joined_r0x00748fc0:
  if (uVar15 != 0) {
    uVar5 = (uVar15 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar15 >> 7 & 0xff00ff00ff00ff) << 8;
    uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
    lVar2 = lVar3 + (uVar10 + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3) & uVar4) * -0x28;
    if (lVar12 == *(long *)(lVar2 + -0x28)) {
                    /* try { // try from 00749054 to 00749087 has its CatchHandler @ 0074908c */
      if ((*(long *)(lVar2 + -8) == 0) &&
         (FUN_006fde54(&local_d8,param_2,uVar11,param_3), local_d8 != 0)) {
        lStack_f8 = lStack_c8;
        local_100 = local_d0;
        lStack_e8 = lStack_b8;
        lStack_f0 = lStack_c0;
        if (local_d0 != 0) {
          FUN_00704618(&local_100);
        }
      }
LAB_00749030:
      param_1[0xd] = local_68;
      param_1[0xc] = lStack_70;
      param_1[9] = lStack_88;
      param_1[8] = lStack_90;
      param_1[0xb] = local_78;
      param_1[10] = lStack_80;
      param_1[1] = lVar1;
      *param_1 = lVar8;
      param_1[3] = lVar7;
      param_1[2] = lVar6;
      param_1[5] = lStack_a8;
      param_1[4] = lStack_b0;
      param_1[7] = local_98;
      param_1[6] = lStack_a0;
      return;
    }
    uVar15 = uVar15 - 1 & uVar15;
    goto joined_r0x00748fc0;
  }
  uVar14 = NEON_cmeq(uVar14,0xffffffffffffffff,1);
  bVar13 = NEON_umaxv(uVar14,1);
  if ((bVar13 & 1) != 0) goto LAB_00749030;
  lVar9 = lVar9 + 8;
  uVar10 = uVar10 + lVar9 & uVar4;
  uVar14 = *(undefined8 *)(lVar3 + uVar10);
  uVar15 = NEON_cmeq(uVar14,uVar16,1);
  uVar15 = uVar15 & 0x8080808080808080;
  goto joined_r0x00748fc0;
}


// ===== 007490a0  FUN_007490a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007490a0(long param_1,long param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long local_178;
  undefined *local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long local_158;
  long *local_150;
  long *local_148;
  long local_140;
  long *plStack_138;
  undefined *local_130;
  undefined *puStack_128;
  undefined *local_120;
  long *local_118 [2];
  byte local_108;
  long *local_100 [4];
  long *local_e0 [4];
  undefined *local_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  long local_98;
  long lStack_90;
  long local_88;
  long lStack_80;
  long local_78;
  long local_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long *plVar7;
  
                    /* try { // try from 007490e0 to 00749137 has its CatchHandler @ 007492fc */
  local_178 = param_2;
  FUN_006fde54(&local_c0,param_1,param_2 * 0x517cc1b727220a95,&local_178);
  puVar3 = puStack_b0;
  if (local_c0 != (undefined *)0x0) {
    puStack_128 = puStack_a8;
    local_130 = puStack_b0;
    local_120 = puStack_a0;
    if (puStack_b8 != (undefined *)0x0) {
      local_c0 = puStack_b8;
      puStack_b0 = puStack_a8;
      puStack_b8 = puVar3;
      puStack_a8 = puStack_a0;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) - (long)puStack_a0;
      FUN_00704618(&local_c0);
    }
  }
  if (param_3[2] == 0) {
    if (*param_3 != 0) {
      free((void *)param_3[1]);
    }
  }
  else {
    local_140 = *param_3;
    local_150 = (long *)param_3[1];
    plVar5 = local_150 + param_3[2] * 0xe;
    uStack_168 = _UNK_00ad7790;
    local_170 = PTR_DAT_00ad7788;
    local_158 = _UNK_00ad77a0;
    uStack_160 = _DAT_00ad7798;
    plVar6 = local_150;
    plStack_138 = plVar5;
    do {
      plVar7 = plVar6 + 0xe;
      local_148 = plVar7;
      if ((undefined *)*plVar6 == (undefined *)0x2) break;
      puStack_b0 = (undefined *)plVar6[2];
      puStack_b8 = (undefined *)plVar6[1];
      puStack_a0 = (undefined *)plVar6[4];
      puStack_a8 = (undefined *)plVar6[3];
      local_78 = plVar6[9];
      lStack_90 = plVar6[6];
      local_98 = plVar6[5];
      lStack_80 = plVar6[8];
      local_88 = plVar6[7];
      lStack_68 = plVar6[0xb];
      local_70 = plVar6[10];
      lStack_58 = plVar6[0xd];
      lStack_60 = plVar6[0xc];
                    /* try { // try from 007491c4 to 007491d3 has its CatchHandler @ 00749310 */
      local_c0 = (undefined *)*plVar6;
      FUN_0075f710(&local_130,&local_170,local_78,&local_c0);
      if (local_130 != (undefined *)0x2) {
        if (0x18 < (byte)local_120) {
          do {
            lVar4 = *local_118[0];
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(local_118[0],0x10);
            if (bVar2) {
              *local_118[0] = lVar4 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar4 + -1 == 0) {
            DataMemoryBarrier(2,1);
            <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(local_118);
          }
        }
        if ((local_108 != 0xff) && (0x18 < local_108)) {
          do {
            lVar4 = *local_100[0];
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(local_100[0],0x10);
            if (bVar2) {
              *local_100[0] = lVar4 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar4 + -1 == 0) {
            DataMemoryBarrier(2,1);
            <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(local_100);
          }
        }
        if (local_e0[0] != (long *)0x0) {
          do {
            lVar4 = *local_e0[0];
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(local_e0[0],0x10);
            if (bVar2) {
              *local_e0[0] = lVar4 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar4 + -1 == 0) {
            DataMemoryBarrier(2,1);
            <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(local_e0);
          }
        }
      }
      plVar6 = plVar7;
    } while (plVar7 != plVar5);
                    /* try { // try from 00749274 to 0074927b has its CatchHandler @ 007492f4 */
    FUN_0070af04(&local_150);
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + local_158;
    puStack_b8 = (undefined *)uStack_168;
    local_c0 = local_170;
    puStack_a8 = (undefined *)local_158;
    puStack_b0 = (undefined *)uStack_160;
    FUN_0075f1b0(&local_130,param_1,param_2,&local_c0);
    if (local_130 != (undefined *)0x0) {
      FUN_00704618(&local_130);
    }
  }
  return;
}


// ===== 00749330  FUN_00749330 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00749330(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  byte bVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  undefined1 auStack_70 [8];
  long *local_68 [2];
  char local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = param_1[1];
  uVar12 = *param_2;
  lVar8 = 0;
  uVar9 = 0;
  uVar14 = *puVar1;
  uVar16 = NEON_cmeq(uVar14,0,1);
  while( true ) {
    for (uVar16 = uVar16 & 0x8080808080808080; uVar16 != 0; uVar16 = uVar16 - 1 & uVar16) {
      uVar10 = (uVar16 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar16 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      puVar11 = puVar1 + (uVar9 + ((ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3) & uVar2) *
                         -5;
      if (puVar11[-5] == 0) goto LAB_00749460;
    }
    uVar14 = NEON_cmeq(uVar14,0xffffffffffffffff,1);
    bVar13 = NEON_umaxv(uVar14,1);
    if ((bVar13 & 1) != 0) break;
    lVar8 = lVar8 + 8;
    uVar9 = uVar9 + lVar8 & uVar2;
    uVar14 = *(undefined8 *)((long)puVar1 + uVar9);
    uVar16 = NEON_cmeq(uVar14,0,1);
  }
  if (param_1[2] == 0) {
                    /* try { // try from 007494ec to 007494ff has its CatchHandler @ 00749550 */
    <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(u64,libdiscore_common[1cb84820f9455fa0]::stores::store_database::partition::Partition<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::stores::guilds::Guild>)>>
    ::reserve_rehash::
    <hashbrown[32fc5d502e7f9af5]::map::make_hasher<u64,libdiscore_common[1cb84820f9455fa0]::stores::store_database::partition::Partition<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::stores::guilds::Guild>,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::_closure_0_>
              (param_1,1,param_1 + 4,1);
    puVar1 = (undefined8 *)*param_1;
    uVar2 = param_1[1];
    uVar16 = NEON_cmlt(*puVar1,0,1);
  }
  else {
    uVar16 = NEON_cmlt(*puVar1,0,1);
  }
  if (uVar16 == 0) {
    uVar9 = 0;
    lVar8 = 8;
    do {
      uVar9 = uVar9 + lVar8;
      lVar8 = lVar8 + 8;
      uVar9 = uVar9 & uVar2;
      uVar10 = NEON_cmlt(*(undefined8 *)((long)puVar1 + uVar9),0,1);
    } while (uVar10 == 0);
  }
  else {
    uVar9 = 0;
    uVar10 = uVar16;
  }
  uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
  uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
  uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
  uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
  uVar9 = uVar9 + ((ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3) & uVar2;
  uVar10 = (ulong)*(char *)((long)puVar1 + uVar9);
  if (-1 < *(char *)((long)puVar1 + uVar9)) {
    uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
    uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
    uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
    uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
    uVar9 = (ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3;
    uVar10 = (ulong)*(byte *)((long)puVar1 + uVar9);
  }
  lVar15 = param_1[3];
  lVar8 = param_1[2];
  *(undefined1 *)((long)puVar1 + uVar9) = 0;
  *(undefined1 *)((long)puVar1 + (uVar9 - 8 & uVar2) + 8) = 0;
  uVar14 = _UNK_00ad7790;
  puVar5 = PTR_DAT_00ad7788;
  puVar11 = puVar1 + uVar9 * -5;
  puVar11[-5] = 0;
  uVar7 = _UNK_00ad77a0;
  uVar6 = _DAT_00ad7798;
  puVar11[-3] = uVar14;
  puVar11[-4] = puVar5;
  puVar11[-1] = uVar7;
  puVar11[-2] = uVar6;
  param_1[3] = lVar15 + 1;
  param_1[2] = lVar8 - (uVar10 & 1);
LAB_00749460:
  uStack_48 = param_2[1];
  local_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  FUN_0075e9d8(auStack_70,puVar11 + -4,uVar12,&local_50);
  if (local_58 == '\x02') {
    param_1[4] = param_1[4] + 1;
  }
  else if (local_68[0] != (long *)0x0) {
    do {
      lVar8 = *local_68[0];
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(local_68[0],0x10);
      if (bVar4) {
        *local_68[0] = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(local_68);
      return;
    }
  }
  return;
}


// ===== 00749584  FUN_00749584 =====

void FUN_00749584(undefined8 *param_1,long *param_2,long *param_3,long *param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  byte bVar18;
  undefined8 uVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined1 auStack_88 [8];
  undefined8 *local_80;
  long lStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  
  if (param_2[3] != 0) {
    lVar15 = *param_3;
    lVar16 = *param_2;
    uVar2 = param_2[1];
    lVar12 = 0;
    uVar14 = lVar15 * 0x517cc1b727220a95;
    bVar18 = (byte)(uVar14 >> 0x39);
    uVar21 = CONCAT17(bVar18,CONCAT16(bVar18,CONCAT15(bVar18,CONCAT14(bVar18,CONCAT13(bVar18,
                                                  CONCAT12(bVar18,CONCAT11(bVar18,bVar18)))))));
    uVar13 = uVar14 & uVar2;
    uVar19 = *(undefined8 *)(lVar16 + uVar13);
    uVar20 = NEON_cmeq(uVar19,uVar21,1);
    uVar20 = uVar20 & 0x8080808080808080;
    while( true ) {
      for (; uVar20 == 0; uVar20 = uVar20 & 0x8080808080808080) {
        uVar19 = NEON_cmeq(uVar19,0xffffffffffffffff,1);
        bVar18 = NEON_umaxv(uVar19,1);
        if ((bVar18 & 1) != 0) goto LAB_00749684;
        lVar12 = lVar12 + 8;
        uVar13 = uVar13 + lVar12 & uVar2;
        uVar19 = *(undefined8 *)(lVar16 + uVar13);
        uVar20 = NEON_cmeq(uVar19,uVar21,1);
      }
      uVar3 = (uVar20 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar20 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      lVar10 = lVar16 + (uVar13 + ((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3) & uVar2) *
                        -0x28;
      if (lVar15 == *(long *)(lVar10 + -0x28)) break;
      uVar20 = uVar20 - 1 & uVar20;
    }
    FUN_006fd29c(auStack_88,lVar10 + -0x20,*param_4 * 0x517cc1b727220a95);
    uVar9 = uStack_64;
    uVar8 = local_68;
    lVar12 = lStack_78;
    puVar7 = local_80;
    if ((char)local_68 != '\x02') {
      lVar10 = 0;
      param_2[4] = param_2[4] + -1;
      uVar13 = uVar14 & uVar2;
      uVar19 = *(undefined8 *)(lVar16 + uVar13);
      uVar20 = NEON_cmeq(uVar19,uVar21,1);
      uVar20 = uVar20 & 0x8080808080808080;
      goto joined_r0x00749710;
    }
  }
LAB_00749684:
  *(undefined1 *)(param_1 + 3) = 2;
  return;
joined_r0x00749710:
  if (uVar20 != 0) {
    uVar3 = (uVar20 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar20 >> 7 & 0xff00ff00ff00ff) << 8;
    uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
    lVar1 = lVar16 + (uVar13 + ((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3) & uVar2) * -0x28
    ;
    if (lVar15 == *(long *)(lVar1 + -0x28)) {
                    /* try { // try from 0074978c to 0074979b has its CatchHandler @ 00749860 */
      if (((*(long *)(lVar1 + -8) == 0) &&
          (FUN_007002b8(auStack_88,param_2,uVar14,param_3), local_80 != (undefined8 *)0x0)) &&
         (lStack_78 != 0)) {
        lVar16 = CONCAT44(uStack_64,local_68);
        if (lVar16 != 0) {
          puVar17 = local_80 + 1;
          uVar20 = NEON_cmge(*local_80,0,1);
          uVar20 = uVar20 & 0x8080808080808080;
          puVar6 = local_80;
          do {
            for (; uVar20 == 0; uVar20 = uVar20 & 0x8080808080808080) {
              uVar20 = NEON_cmge(*puVar17,0,1);
              puVar17 = puVar17 + 1;
              puVar6 = puVar6 + -0x28;
            }
            uVar2 = (uVar20 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar20 >> 7 & 0xff00ff00ff00ff) << 8;
            uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
            plVar11 = (long *)puVar6[(long)-(int)((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3
                                                 ) * 5 + -3];
            if (plVar11 != (long *)0x0) {
              do {
                lVar15 = *plVar11;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                if (bVar5) {
                  *plVar11 = lVar15 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar15 + -1 == 0) {
                DataMemoryBarrier(2,1);
                <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
              }
            }
            lVar16 = lVar16 + -1;
            uVar20 = uVar20 - 1 & uVar20;
          } while (lVar16 != 0);
        }
        if (lStack_78 * 0x29 != -0x31) {
          free(local_80 + lStack_78 * -5 + -5);
        }
      }
LAB_00749780:
      param_1[1] = lVar12;
      *param_1 = puVar7;
      param_1[3] = CONCAT44(uVar9,uVar8);
      param_1[2] = local_70;
      return;
    }
    uVar20 = uVar20 - 1 & uVar20;
    goto joined_r0x00749710;
  }
  uVar19 = NEON_cmeq(uVar19,0xffffffffffffffff,1);
  bVar18 = NEON_umaxv(uVar19,1);
  if ((bVar18 & 1) != 0) goto LAB_00749780;
  lVar10 = lVar10 + 8;
  uVar13 = uVar13 + lVar10 & uVar2;
  uVar19 = *(undefined8 *)(lVar16 + uVar13);
  uVar20 = NEON_cmeq(uVar19,uVar21,1);
  uVar20 = uVar20 & 0x8080808080808080;
  goto joined_r0x00749710;
}


// ===== 00749898  FUN_00749898 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00749898(long param_1,long param_2,long *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long local_f8;
  undefined *local_f0;
  undefined8 *puStack_e8;
  long lStack_e0;
  long local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  long local_c0;
  undefined8 *puStack_b8;
  undefined8 *local_b0;
  long *local_a8 [2];
  char local_98;
  undefined7 uStack_97;
  undefined *local_90;
  undefined8 *puStack_88;
  long lStack_80;
  undefined8 local_78;
  long local_70;
  
                    /* try { // try from 007498dc to 007498e7 has its CatchHandler @ 00749bf8 */
  local_f8 = param_2;
  FUN_007002b8(&local_90,param_1,param_2 * 0x517cc1b727220a95,&local_f8);
  lVar9 = lStack_80;
  puVar5 = puStack_88;
  if ((puStack_88 != (undefined8 *)0x0) &&
     (*(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) - local_70, lStack_80 != 0)) {
    if (local_70 != 0) {
      puVar11 = puStack_88 + 1;
      uVar12 = NEON_cmge(*puStack_88,0,1);
      uVar12 = uVar12 & 0x8080808080808080;
      puVar7 = puStack_88;
      lVar10 = local_70;
      do {
        for (; uVar12 == 0; uVar12 = uVar12 & 0x8080808080808080) {
          uVar12 = NEON_cmge(*puVar11,0,1);
          puVar11 = puVar11 + 1;
          puVar7 = puVar7 + -0x28;
        }
        uVar2 = (uVar12 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar12 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
        plVar6 = (long *)puVar7[(long)-(int)((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) * 5
                                + -3];
        if (plVar6 != (long *)0x0) {
          do {
            lVar8 = *plVar6;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar4) {
              *plVar6 = lVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar8 + -1 == 0) {
            DataMemoryBarrier(2,1);
            <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
          }
        }
        lVar10 = lVar10 + -1;
        uVar12 = uVar12 - 1 & uVar12;
      } while (lVar10 != 0);
    }
    if (lVar9 * 0x29 != -0x31) {
      free(puVar5 + lVar9 * -5 + -5);
    }
  }
  if (param_3[2] == 0) {
    if (*param_3 == 0) {
      return;
    }
    local_b0 = (undefined8 *)param_3[1];
  }
  else {
    lVar9 = *param_3;
    puVar11 = (undefined8 *)param_3[1];
    puVar5 = puVar11 + param_3[2] * 4;
    puStack_e8 = _UNK_00ad7790;
    local_f0 = PTR_DAT_00ad7788;
    local_d8 = _UNK_00ad77a0;
    lStack_e0 = _DAT_00ad7798;
    puVar7 = puVar11;
    local_d0 = puVar11;
    local_c0 = lVar9;
    puStack_b8 = puVar5;
    do {
      puVar1 = puVar7 + 4;
      local_c8 = puVar1;
      if (*(char *)(puVar7 + 3) == '\x02') {
        if ((long)puVar5 - (long)puVar1 != 0) {
          uVar12 = 0;
          do {
            plVar6 = (long *)puVar1[uVar12 * 4 + 1];
            if (plVar6 != (long *)0x0) {
              do {
                lVar10 = *plVar6;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                if (bVar4) {
                  *plVar6 = lVar10 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (lVar10 + -1 == 0) {
                DataMemoryBarrier(2,1);
                <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
              }
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 != (ulong)((long)puVar5 - (long)puVar1) >> 5);
        }
        break;
      }
      lStack_80 = puVar7[2];
      puStack_88 = (undefined8 *)puVar7[1];
      local_90 = (undefined *)*puVar7;
      local_78._0_5_ = CONCAT41(*(undefined4 *)((long)puVar7 + 0x19),*(char *)(puVar7 + 3));
      local_78 = CONCAT44(*(undefined4 *)((long)puVar7 + 0x1c),(undefined4)local_78);
                    /* try { // try from 00749a30 to 00749a3f has its CatchHandler @ 00749c0c */
      FUN_0075e9d8(&local_b0,&local_f0,local_90,&local_90);
      if ((local_98 != '\x02') && (local_a8[0] != (long *)0x0)) {
        do {
          lVar10 = *local_a8[0];
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(local_a8[0],0x10);
          if (bVar4) {
            *local_a8[0] = lVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar10 + -1 == 0) {
          DataMemoryBarrier(2,1);
          <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(local_a8);
        }
      }
      puVar7 = puVar1;
    } while (puVar1 != puVar5);
    if (lVar9 != 0) {
      free(puVar11);
    }
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + local_d8;
    puStack_88 = puStack_e8;
    local_90 = local_f0;
    local_78 = local_d8;
    lStack_80 = lStack_e0;
    FUN_0075fd74(&local_b0,param_1,param_2,&local_90);
    if (local_b0 == (undefined8 *)0x0) {
      return;
    }
    if (local_a8[0] == (long *)0x0) {
      return;
    }
    lVar9 = CONCAT71(uStack_97,local_98);
    if (lVar9 != 0) {
      puVar11 = local_b0 + 1;
      uVar12 = NEON_cmge(*local_b0,0,1);
      uVar12 = uVar12 & 0x8080808080808080;
      puVar5 = local_b0;
      do {
        for (; uVar12 == 0; uVar12 = uVar12 & 0x8080808080808080) {
          uVar12 = NEON_cmge(*puVar11,0,1);
          puVar5 = puVar5 + -0x28;
          puVar11 = puVar11 + 1;
        }
        uVar2 = (uVar12 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar12 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
        plVar6 = (long *)puVar5[(long)-(int)((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) * 5
                                + -3];
        if (plVar6 != (long *)0x0) {
          do {
            lVar10 = *plVar6;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar4) {
              *plVar6 = lVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar10 + -1 == 0) {
            DataMemoryBarrier(2,1);
            <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
          }
        }
        lVar9 = lVar9 + -1;
        uVar12 = uVar12 - 1 & uVar12;
      } while (lVar9 != 0);
    }
    if ((long)local_a8[0] * 0x29 == -0x31) {
      return;
    }
    local_b0 = local_b0 + (long)local_a8[0] * -5 + -5;
  }
  free(local_b0);
  return;
}


// ===== 00749c2c  FUN_00749c2c =====

long FUN_00749c2c(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  byte bVar8;
  undefined8 uVar9;
  ulong uVar10;
  
  if (param_1[3] != 0) {
    lVar5 = 0;
    uVar6 = *param_2 * 0x517cc1b727220a95;
    bVar4 = (byte)(uVar6 >> 0x39);
    lVar1 = *param_1;
    uVar2 = param_1[1];
    uVar6 = uVar6 & uVar2;
    uVar9 = *(undefined8 *)(lVar1 + uVar6);
    uVar10 = NEON_cmeq(uVar9,CONCAT17(bVar4,CONCAT16(bVar4,CONCAT15(bVar4,CONCAT14(bVar4,CONCAT13(
                                                  bVar4,CONCAT12(bVar4,CONCAT11(bVar4,bVar4))))))),1
                      );
    uVar10 = uVar10 & 0x8080808080808080;
    while( true ) {
      for (; uVar10 == 0; uVar10 = uVar10 & 0x8080808080808080) {
        uVar9 = NEON_cmeq(uVar9,0xffffffffffffffff,1);
        bVar8 = NEON_umaxv(uVar9,1);
        if ((bVar8 & 1) != 0) {
          return 0;
        }
        lVar5 = lVar5 + 8;
        uVar6 = uVar6 + lVar5 & uVar2;
        uVar9 = *(undefined8 *)(lVar1 + uVar6);
        uVar10 = NEON_cmeq(uVar9,CONCAT17(bVar4,CONCAT16(bVar4,CONCAT15(bVar4,CONCAT14(bVar4,
                                                  CONCAT13(bVar4,CONCAT12(bVar4,CONCAT11(bVar4,bVar4
                                                                                        ))))))),1);
      }
      uVar3 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      lVar7 = lVar1 + (uVar6 + ((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3) & uVar2) * -0x28
      ;
      if (*param_2 == *(long *)(lVar7 + -0x28)) break;
      uVar10 = uVar10 - 1 & uVar10;
    }
    if (*(long *)(lVar7 + -8) != 0) {
      lVar5 = 0;
      uVar6 = *param_3 * 0x517cc1b727220a95;
      bVar4 = (byte)(uVar6 >> 0x39);
      lVar1 = *(long *)(lVar7 + -0x20);
      uVar2 = *(ulong *)(lVar7 + -0x18);
      uVar6 = uVar6 & uVar2;
      uVar9 = *(undefined8 *)(lVar1 + uVar6);
      uVar10 = NEON_cmeq(uVar9,CONCAT17(bVar4,CONCAT16(bVar4,CONCAT15(bVar4,CONCAT14(bVar4,CONCAT13(
                                                  bVar4,CONCAT12(bVar4,CONCAT11(bVar4,bVar4))))))),1
                        );
      while( true ) {
        for (uVar10 = uVar10 & 0x8080808080808080; uVar10 != 0; uVar10 = uVar10 - 1 & uVar10) {
          uVar3 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
          lVar7 = lVar1 + (uVar6 + ((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3) & uVar2) *
                          -0x220;
          if (*param_3 == *(long *)(lVar7 + -0x220)) goto LAB_00749d94;
        }
        uVar9 = NEON_cmeq(uVar9,0xffffffffffffffff,1);
        bVar8 = NEON_umaxv(uVar9,1);
        if ((bVar8 & 1) != 0) break;
        lVar5 = lVar5 + 8;
        uVar6 = uVar6 + lVar5 & uVar2;
        uVar9 = *(undefined8 *)(lVar1 + uVar6);
        uVar10 = NEON_cmeq(uVar9,CONCAT17(bVar4,CONCAT16(bVar4,CONCAT15(bVar4,CONCAT14(bVar4,
                                                  CONCAT13(bVar4,CONCAT12(bVar4,CONCAT11(bVar4,bVar4
                                                                                        ))))))),1);
      }
      lVar7 = 0;
LAB_00749d94:
      lVar5 = 0;
      if (lVar7 != 0) {
        lVar5 = lVar7 + -0x218;
      }
      return lVar5;
    }
  }
  return 0;
}


// ===== 00749da4  FUN_00749da4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00749da4(long *param_1,void *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  byte bVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  long local_470 [67];
  undefined1 auStack_258 [536];
  
  local_470[0] = 0;
  puVar1 = (undefined8 *)*param_1;
  uVar2 = param_1[1];
  uVar10 = *(undefined8 *)((long)param_2 + 0x108);
  lVar6 = 0;
  uVar7 = 0;
  uVar12 = *puVar1;
  uVar14 = NEON_cmeq(uVar12,0,1);
  while( true ) {
    for (uVar14 = uVar14 & 0x8080808080808080; uVar14 != 0; uVar14 = uVar14 - 1 & uVar14) {
      uVar8 = (uVar14 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar14 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      puVar9 = puVar1 + (uVar7 + ((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3) & uVar2) * -5;
      if (puVar9[-5] == 0) goto LAB_00749edc;
    }
    uVar12 = NEON_cmeq(uVar12,0xffffffffffffffff,1);
    bVar11 = NEON_umaxv(uVar12,1);
    if ((bVar11 & 1) != 0) break;
    lVar6 = lVar6 + 8;
    uVar7 = uVar7 + lVar6 & uVar2;
    uVar12 = *(undefined8 *)((long)puVar1 + uVar7);
    uVar14 = NEON_cmeq(uVar12,0,1);
  }
  if (param_1[2] == 0) {
                    /* try { // try from 00749f54 to 00749f67 has its CatchHandler @ 00749fb8 */
    <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(u64,libdiscore_common[1cb84820f9455fa0]::stores::store_database::partition::Partition<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::stores::guilds::Guild>)>>
    ::reserve_rehash::
    <hashbrown[32fc5d502e7f9af5]::map::make_hasher<u64,libdiscore_common[1cb84820f9455fa0]::stores::store_database::partition::Partition<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::stores::guilds::Guild>,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::_closure_0_>
              (param_1,1,param_1 + 4,1);
    puVar1 = (undefined8 *)*param_1;
    uVar2 = param_1[1];
    uVar14 = NEON_cmlt(*puVar1,0,1);
  }
  else {
    uVar14 = NEON_cmlt(*puVar1,0,1);
  }
  if (uVar14 == 0) {
    uVar7 = 0;
    lVar6 = 8;
    do {
      uVar7 = uVar7 + lVar6;
      lVar6 = lVar6 + 8;
      uVar7 = uVar7 & uVar2;
      uVar8 = NEON_cmlt(*(undefined8 *)((long)puVar1 + uVar7),0,1);
    } while (uVar8 == 0);
  }
  else {
    uVar7 = 0;
    uVar8 = uVar14;
  }
  uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
  uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
  uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
  uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
  uVar7 = uVar7 + ((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3) & uVar2;
  uVar8 = (ulong)*(char *)((long)puVar1 + uVar7);
  if (-1 < *(char *)((long)puVar1 + uVar7)) {
    uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
    uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
    uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
    uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
    uVar7 = (ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3;
    uVar8 = (ulong)*(byte *)((long)puVar1 + uVar7);
  }
  lVar13 = param_1[3];
  lVar6 = param_1[2];
  *(undefined1 *)((long)puVar1 + uVar7) = 0;
  *(undefined1 *)((long)puVar1 + (uVar7 - 8 & uVar2) + 8) = 0;
  uVar12 = _UNK_00ad7790;
  puVar3 = PTR_DAT_00ad7788;
  puVar9 = puVar1 + uVar7 * -5;
  puVar9[-5] = 0;
  uVar5 = _UNK_00ad77a0;
  uVar4 = _DAT_00ad7798;
  puVar9[-3] = uVar12;
  puVar9[-4] = puVar3;
  puVar9[-1] = uVar5;
  puVar9[-2] = uVar4;
  param_1[3] = lVar13 + 1;
  param_1[2] = lVar6 - (uVar8 & 1);
LAB_00749edc:
  memcpy(auStack_258,param_2,0x218);
  FUN_0075f384(local_470,puVar9 + -4,uVar10,auStack_258);
  if (local_470[0] == 2) {
    param_1[4] = param_1[4] + 1;
    return;
  }
  FUN_00746374(local_470);
  return;
}


// ===== 00749fd0  FUN_00749fd0 =====

void FUN_00749fd0(undefined8 *param_1,long *param_2,long *param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  byte bVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 *local_4a8;
  undefined1 auStack_4a0 [528];
  undefined1 auStack_290 [8];
  undefined8 *local_288;
  long local_280 [2];
  long local_270;
  
  if (param_2[3] != 0) {
    lVar9 = *param_3;
    lVar2 = *param_2;
    uVar3 = param_2[1];
    lVar6 = 0;
    uVar8 = lVar9 * 0x517cc1b727220a95;
    bVar11 = (byte)(uVar8 >> 0x39);
    uVar14 = CONCAT17(bVar11,CONCAT16(bVar11,CONCAT15(bVar11,CONCAT14(bVar11,CONCAT13(bVar11,
                                                  CONCAT12(bVar11,CONCAT11(bVar11,bVar11)))))));
    uVar7 = uVar8 & uVar3;
    uVar12 = *(undefined8 *)(lVar2 + uVar7);
    uVar13 = NEON_cmeq(uVar12,uVar14,1);
    uVar13 = uVar13 & 0x8080808080808080;
    while( true ) {
      for (; uVar13 == 0; uVar13 = uVar13 & 0x8080808080808080) {
        uVar12 = NEON_cmeq(uVar12,0xffffffffffffffff,1);
        bVar11 = NEON_umaxv(uVar12,1);
        if ((bVar11 & 1) != 0) goto LAB_0074a0dc;
        lVar6 = lVar6 + 8;
        uVar7 = uVar7 + lVar6 & uVar3;
        uVar12 = *(undefined8 *)(lVar2 + uVar7);
        uVar13 = NEON_cmeq(uVar12,uVar14,1);
      }
      uVar4 = (uVar13 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar13 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      lVar1 = lVar2 + (uVar7 + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) & uVar3) * -0x28
      ;
      if (lVar9 == *(long *)(lVar1 + -0x28)) break;
      uVar13 = uVar13 - 1 & uVar13;
    }
    FUN_006fe3ec(auStack_290,lVar1 + -0x20,*param_4 * 0x517cc1b727220a95);
    local_4a8 = local_288;
    if (local_288 != (undefined8 *)0x2) {
      memcpy(auStack_4a0,local_280,0x210);
      lVar6 = 0;
      param_2[4] = param_2[4] + -1;
      uVar7 = uVar8 & uVar3;
      uVar12 = *(undefined8 *)(lVar2 + uVar7);
      uVar13 = NEON_cmeq(uVar12,uVar14,1);
      uVar13 = uVar13 & 0x8080808080808080;
      goto joined_r0x0074a150;
    }
  }
LAB_0074a0dc:
  *param_1 = 2;
  return;
joined_r0x0074a150:
  if (uVar13 != 0) {
    uVar4 = (uVar13 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar13 >> 7 & 0xff00ff00ff00ff) << 8;
    uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
    lVar1 = lVar2 + (uVar7 + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) & uVar3) * -0x28;
    if (lVar9 == *(long *)(lVar1 + -0x28)) {
                    /* try { // try from 0074a1d4 to 0074a1e3 has its CatchHandler @ 0074a288 */
      if (((*(long *)(lVar1 + -8) == 0) &&
          (FUN_007002b8(auStack_290,param_2,uVar8,param_3), local_288 != (undefined8 *)0x0)) &&
         (local_280[0] != 0)) {
        if (local_270 != 0) {
          puVar10 = local_288 + 1;
          uVar13 = NEON_cmge(*local_288,0,1);
          uVar13 = uVar13 & 0x8080808080808080;
          puVar5 = local_288;
          lVar6 = local_270;
          do {
            for (; uVar13 == 0; uVar13 = uVar13 & 0x8080808080808080) {
              uVar13 = NEON_cmge(*puVar10,0,1);
              puVar10 = puVar10 + 1;
              puVar5 = puVar5 + -0x220;
            }
            uVar3 = (uVar13 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar13 >> 7 & 0xff00ff00ff00ff) << 8;
            uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
                    /* try { // try from 0074a24c to 0074a24f has its CatchHandler @ 0074a28c */
            FUN_007024a8(puVar5 + (long)-(int)((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3) *
                                  0x44 + -0x43);
            lVar6 = lVar6 + -1;
            uVar13 = uVar13 - 1 & uVar13;
          } while (lVar6 != 0);
        }
        if (local_280[0] * 0x221 != -0x229) {
          free(local_288 + local_280[0] * -0x44 + -0x44);
        }
      }
LAB_0074a1c0:
      memcpy(param_1,&local_4a8,0x218);
      return;
    }
    uVar13 = uVar13 - 1 & uVar13;
    goto joined_r0x0074a150;
  }
  uVar12 = NEON_cmeq(uVar12,0xffffffffffffffff,1);
  bVar11 = NEON_umaxv(uVar12,1);
  if ((bVar11 & 1) != 0) goto LAB_0074a1c0;
  lVar6 = lVar6 + 8;
  uVar7 = uVar7 + lVar6 & uVar3;
  uVar12 = *(undefined8 *)(lVar2 + uVar7);
  uVar13 = NEON_cmeq(uVar12,uVar14,1);
  uVar13 = uVar13 & 0x8080808080808080;
  goto joined_r0x0074a150;
}


// ===== 0074a2a4  FUN_0074a2a4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0074a2a4(long param_1,long param_2,long *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long local_4f8;
  undefined *local_4f0;
  undefined8 *puStack_4e8;
  long lStack_4e0;
  long local_4d8;
  undefined8 *local_4c8;
  undefined8 *local_4c0;
  long local_4b8;
  undefined8 *puStack_4b0;
  undefined8 *local_4a8;
  long local_4a0;
  long local_490;
  undefined *local_290;
  undefined8 *puStack_288;
  long lStack_280;
  long local_278;
  long lStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
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
  undefined1 auStack_180 [288];
  
                    /* try { // try from 0074a2ec to 0074a2f7 has its CatchHandler @ 0074a5e8 */
  local_4f8 = param_2;
  FUN_007002b8(&local_290,param_1,param_2 * 0x517cc1b727220a95,&local_4f8);
  lVar5 = lStack_280;
  puVar8 = puStack_288;
  if ((puStack_288 != (undefined8 *)0x0) &&
     (*(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) - lStack_270, lStack_280 != 0)) {
    if (lStack_270 != 0) {
      puVar6 = puStack_288 + 1;
      uVar9 = NEON_cmge(*puStack_288,0,1);
      uVar9 = uVar9 & 0x8080808080808080;
      puVar2 = puStack_288;
      lVar7 = lStack_270;
      do {
        for (; uVar9 == 0; uVar9 = uVar9 & 0x8080808080808080) {
          uVar9 = NEON_cmge(*puVar6,0,1);
          puVar6 = puVar6 + 1;
          puVar2 = puVar2 + -0x220;
        }
        uVar1 = (uVar9 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar9 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
                    /* try { // try from 0074a370 to 0074a373 has its CatchHandler @ 0074a5ec */
        FUN_007024a8(puVar2 + (long)-(int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) *
                              0x44 + -0x43);
        lVar7 = lVar7 + -1;
        uVar9 = uVar9 - 1 & uVar9;
      } while (lVar7 != 0);
    }
    if (lVar5 * 0x221 != -0x229) {
      free(puVar8 + lVar5 * -0x44 + -0x44);
    }
  }
  if (param_3[2] == 0) {
    if (*param_3 == 0) {
      return;
    }
    local_4a8 = (undefined8 *)param_3[1];
  }
  else {
    local_4b8 = *param_3;
    puVar8 = (undefined8 *)param_3[1];
    puVar6 = puVar8 + param_3[2] * 0x43;
    puStack_4e8 = _UNK_00ad7790;
    local_4f0 = PTR_DAT_00ad7788;
    local_4d8 = _UNK_00ad77a0;
    lStack_4e0 = _DAT_00ad7798;
    local_4c8 = puVar8;
    puStack_4b0 = puVar6;
    do {
      puVar3 = (undefined *)*puVar8;
      if (puVar3 == (undefined *)0x2) {
        puVar6 = puVar8 + 0x43;
        break;
      }
      uStack_1c0 = puVar8[0x1a];
      local_1c8 = puVar8[0x19];
      uStack_1b0 = puVar8[0x1c];
      local_1b8 = puVar8[0x1b];
      uVar4 = puVar8[0x21];
      uStack_1a0 = puVar8[0x1e];
      local_1a8 = puVar8[0x1d];
      uStack_190 = puVar8[0x20];
      local_198 = puVar8[0x1f];
      uStack_200 = puVar8[0x12];
      local_208 = puVar8[0x11];
      uStack_1f0 = puVar8[0x14];
      local_1f8 = puVar8[0x13];
      uStack_1e0 = puVar8[0x16];
      local_1e8 = puVar8[0x15];
      uStack_1d0 = puVar8[0x18];
      local_1d8 = puVar8[0x17];
      uStack_240 = puVar8[10];
      local_248 = puVar8[9];
      uStack_230 = puVar8[0xc];
      local_238 = puVar8[0xb];
      uStack_220 = puVar8[0xe];
      local_228 = puVar8[0xd];
      uStack_210 = puVar8[0x10];
      local_218 = puVar8[0xf];
      lStack_280 = puVar8[2];
      puStack_288 = (undefined8 *)puVar8[1];
      lStack_270 = puVar8[4];
      local_278 = puVar8[3];
      uStack_260 = puVar8[6];
      local_268 = puVar8[5];
      uStack_250 = puVar8[8];
      local_258 = puVar8[7];
      memcpy(auStack_180,puVar8 + 0x22,0x108);
                    /* try { // try from 0074a498 to 0074a4bf has its CatchHandler @ 0074a5fc */
      local_290 = puVar3;
      local_188 = uVar4;
      FUN_0075f384(&local_4a8,&local_4f0,uVar4,&local_290);
      if (local_4a8 != (undefined8 *)0x2) {
        FUN_00746374(&local_4a8);
      }
      puVar8 = puVar8 + 0x43;
    } while (puVar8 != puVar6);
                    /* try { // try from 0074a4e4 to 0074a4eb has its CatchHandler @ 0074a5e0 */
    local_4c0 = puVar6;
    FUN_0070b0d0(&local_4c8);
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + local_4d8;
    puStack_288 = puStack_4e8;
    local_290 = local_4f0;
    local_278 = local_4d8;
    lStack_280 = lStack_4e0;
    FUN_0075ff48(&local_4a8,param_1,param_2,&local_290);
    if (local_4a8 == (undefined8 *)0x0) {
      return;
    }
    if (local_4a0 == 0) {
      return;
    }
    if (local_490 != 0) {
      puVar8 = local_4a8 + 1;
      uVar9 = NEON_cmge(*local_4a8,0,1);
      uVar9 = uVar9 & 0x8080808080808080;
      puVar6 = local_4a8;
      lVar5 = local_490;
      do {
        for (; uVar9 == 0; uVar9 = uVar9 & 0x8080808080808080) {
          uVar9 = NEON_cmge(*puVar8,0,1);
          puVar8 = puVar8 + 1;
          puVar6 = puVar6 + -0x220;
        }
        uVar1 = (uVar9 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar9 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        lVar5 = lVar5 + -1;
        uVar9 = uVar9 - 1 & uVar9;
        FUN_007024a8(puVar6 + (long)-(int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) *
                              0x44 + -0x43);
      } while (lVar5 != 0);
    }
    if (local_4a0 * 0x221 == -0x229) {
      return;
    }
    local_4a8 = local_4a8 + local_4a0 * -0x44 + -0x44;
  }
  free(local_4a8);
  return;
}


// ===== 0074a624  FUN_0074a624 =====

void FUN_0074a624(undefined8 *param_1,undefined8 *param_2,long *param_3,undefined8 *param_4)

{
  char cVar1;
  undefined8 *puVar2;
  size_t __n;
  long lVar3;
  void *__s1;
  ulong uVar4;
  ulong uVar5;
  ushort uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  void *pvVar10;
  undefined8 *unaff_x25;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long local_d8;
  void *pvStack_d0;
  long local_c8;
  undefined8 *puStack_c0;
  void *local_b8;
  undefined8 uStack_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [32];
  
  pvVar10 = (void *)*param_2;
  if (pvVar10 != (void *)0x0) {
    __s1 = (void *)param_3[1];
    uVar4 = param_3[2];
    lVar12 = param_2[1];
    do {
      uVar6 = *(ushort *)((long)pvVar10 + 0x272);
      lVar9 = (long)pvVar10 + 0x168;
      puVar11 = (undefined8 *)0xffffffffffffffff;
      lVar8 = (long)(ulong)uVar6 * 0x18;
      do {
        local_a8 = (undefined8 *)(ulong)uVar6;
        if (lVar8 == 0) goto LAB_0074a6cc;
        puVar2 = (undefined8 *)(lVar9 + 8);
        uVar5 = *(ulong *)(lVar9 + 0x10);
        lVar9 = lVar9 + 0x18;
        __n = uVar4;
        if (uVar5 <= uVar4) {
          __n = uVar5;
        }
        iVar7 = memcmp(__s1,(void *)*puVar2,__n);
        puVar11 = (undefined8 *)((long)puVar11 + 1);
        lVar8 = lVar8 + -0x18;
        lVar3 = uVar4 - uVar5;
        if (iVar7 != 0) {
          lVar3 = (long)iVar7;
        }
        cVar1 = 0 < lVar3;
        if (lVar3 < 0) {
          cVar1 = -1;
        }
      } while (cVar1 == '\x01');
      local_a8 = puVar11;
      if (cVar1 == '\0') {
        param_2 = puVar11;
        if (*param_3 != 0) {
          free(__s1);
        }
        goto LAB_0074a760;
      }
LAB_0074a6cc:
      if (lVar12 == 0) goto LAB_0074a748;
      lVar12 = lVar12 + -1;
      pvVar10 = *(void **)((long)pvVar10 + (long)local_a8 * 8 + 0x278);
    } while( true );
  }
  local_d8 = *param_3;
  local_b8 = pvVar10;
  pvVar10 = (void *)param_3[1];
  local_a8 = unaff_x25;
joined_r0x0074a70c:
  if (local_d8 == -1) {
LAB_0074a760:
    puVar11 = (undefined8 *)((long)pvVar10 + (long)param_2 * 0x20);
    uVar15 = *puVar11;
    uVar14 = puVar11[3];
    uVar13 = puVar11[2];
    param_1[1] = puVar11[1];
    *param_1 = uVar15;
    param_1[3] = uVar14;
    param_1[2] = uVar13;
    uVar15 = *param_4;
    uVar14 = param_4[3];
    uVar13 = param_4[2];
    puVar11[1] = param_4[1];
    *puVar11 = uVar15;
    puVar11[3] = uVar14;
    puVar11[2] = uVar13;
  }
  else {
    uStack_98 = param_4[1];
    local_a0 = *param_4;
    uStack_88 = param_4[3];
    uStack_90 = param_4[2];
    local_c8 = param_3[2];
    uStack_b0 = 0;
    pvStack_d0 = pvVar10;
    puStack_c0 = param_2;
    FUN_00708a30(auStack_80,&local_d8,&local_a0);
    *(undefined1 *)param_1 = 0xff;
  }
  return;
LAB_0074a748:
  local_d8 = *param_3;
  local_b8 = pvVar10;
  pvVar10 = __s1;
  goto joined_r0x0074a70c;
}


// ===== 0074a794  FUN_0074a794 =====

void FUN_0074a794(long *param_1,long *param_2)

{
  ushort uVar1;
  void *pvVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  void *pvVar7;
  
  if (param_2[8] == 0) {
    lVar3 = *param_2;
    pvVar7 = (void *)param_2[1];
    *param_2 = 0;
    pvVar2 = (void *)param_2[2];
    lVar5 = param_2[3];
    if (lVar3 == 1) {
      if (pvVar7 == (void *)0x0) {
        for (; lVar5 != 0; lVar5 = lVar5 + -1) {
          pvVar2 = *(void **)((long)pvVar2 + 0x278);
        }
        pvVar7 = *(void **)((long)pvVar2 + 0x160);
      }
      else {
        pvVar2 = pvVar7;
        pvVar7 = *(void **)((long)pvVar7 + 0x160);
      }
      for (; pvVar7 != (void *)0x0; pvVar7 = *(void **)((long)pvVar7 + 0x160)) {
        free(pvVar2);
        pvVar2 = pvVar7;
      }
      free(pvVar2);
    }
    *param_1 = 0;
    return;
  }
  param_2[8] = param_2[8] + -1;
  if (*param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00ad76f8);
  }
  pvVar2 = (void *)param_2[1];
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)param_2[2];
    for (lVar3 = param_2[3]; lVar3 != 0; lVar3 = lVar3 + -1) {
      pvVar2 = *(void **)((long)pvVar2 + 0x278);
    }
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 1;
    param_2[1] = (long)pvVar2;
    lVar3 = param_2[2];
    uVar6 = param_2[3];
    pvVar7 = pvVar2;
    if (uVar6 < *(ushort *)((long)pvVar2 + 0x272)) goto joined_r0x0074a7ec;
  }
  else {
    lVar3 = param_2[2];
    uVar6 = param_2[3];
    pvVar7 = pvVar2;
    if (uVar6 < *(ushort *)((long)pvVar2 + 0x272)) goto joined_r0x0074a7ec;
  }
  do {
    pvVar7 = *(void **)((long)pvVar2 + 0x160);
    if (pvVar7 == (void *)0x0) {
      free(pvVar2);
                    /* try { // try from 0074a988 to 0074a993 has its CatchHandler @ 0074a9a4 */
                    /* WARNING: Subroutine does not return */
      core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00ad7758);
    }
    uVar1 = *(ushort *)((long)pvVar2 + 0x270);
    uVar6 = (ulong)uVar1;
    lVar3 = lVar3 + 1;
    free(pvVar2);
    pvVar2 = pvVar7;
  } while (*(ushort *)((long)pvVar7 + 0x272) <= uVar1);
joined_r0x0074a7ec:
  if (lVar3 == 0) {
    lVar5 = uVar6 + 1;
    pvVar2 = pvVar7;
  }
  else {
    puVar4 = (undefined8 *)((long)pvVar7 + uVar6 * 8 + 0x280);
    lVar5 = lVar3;
    do {
      pvVar2 = (void *)*puVar4;
      lVar5 = lVar5 + -1;
      puVar4 = (undefined8 *)((long)pvVar2 + 0x278);
    } while (lVar5 != 0);
    lVar5 = 0;
  }
  *param_1 = (long)pvVar7;
  param_1[1] = lVar3;
  param_1[2] = uVar6;
  param_2[1] = (long)pvVar2;
  param_2[2] = 0;
  param_2[3] = lVar5;
  return;
}


// ===== 0074a9a8  FUN_0074a9a8 =====

void FUN_0074a9a8(long *param_1)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  void *__ptr;
  long lVar4;
  long lVar5;
  ulong local_a0;
  undefined8 local_98;
  long lStack_90;
  long local_88;
  ulong local_80;
  undefined8 local_78;
  long lStack_70;
  long local_68;
  long local_60;
  long local_58 [2];
  long local_48;
  
  lVar5 = *param_1;
  if (lVar5 == 0) {
    local_60 = 0;
  }
  else {
    local_88 = param_1[1];
    local_60 = param_1[2];
    local_98 = 0;
    local_78 = 0;
    lStack_90 = lVar5;
    lStack_70 = lVar5;
    local_68 = local_88;
  }
  local_a0 = (ulong)(lVar5 != 0);
  local_80 = local_a0;
  FUN_0074a794(local_58,&local_a0);
  lVar5 = local_58[0];
  lVar3 = local_48;
  do {
    if (lVar5 == 0) {
      return;
    }
    lVar4 = lVar5 + lVar3 * 0x18;
    local_58[0] = lVar5;
    local_48 = lVar3;
    if (*(long *)(lVar4 + 0x168) != 0) {
      free(*(void **)(lVar4 + 0x170));
    }
    pbVar1 = (byte *)(lVar5 + lVar3 * 0x20);
    bVar2 = *pbVar1;
    if (2 < bVar2) {
      if (bVar2 == 3) {
        if (*(long *)(pbVar1 + 8) != 0) {
          __ptr = *(void **)(pbVar1 + 0x10);
LAB_0074aab4:
          free(__ptr);
        }
      }
      else if (bVar2 == 4) {
        lVar5 = *(long *)(pbVar1 + 0x18) + 1;
        lVar3 = *(long *)(pbVar1 + 0x10);
        while (lVar5 = lVar5 + -1, lVar5 != 0) {
                    /* try { // try from 0074aa80 to 0074aa83 has its CatchHandler @ 0074aadc */
          FUN_00762098(lVar3);
          lVar3 = lVar3 + 0x20;
        }
        if (*(long *)(pbVar1 + 8) != 0) {
          __ptr = *(void **)(pbVar1 + 0x10);
          goto LAB_0074aab4;
        }
      }
      else {
                    /* try { // try from 0074aa14 to 0074aa1b has its CatchHandler @ 0074aad4 */
        FUN_0074a9a8(pbVar1 + 8);
      }
    }
    FUN_0074a794(local_58,&local_a0);
    lVar5 = local_58[0];
    lVar3 = local_48;
  } while( true );
}


// ===== 0074ab2c  <<libdiscore_common::actions::guild_role::GuildRoleDeleteAction_as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_28}::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<libdiscore_common::actions::guild_role::GuildRoleDeleteAction as
   serde::de::Deserialize>::deserialize::__FieldVisitor as {backref 28}::Visitor>::expecting */

void __rustcall
<<libdiscore_common::actions::guild_role::GuildRoleDeleteAction_as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_28}::Visitor>
::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002a0800,0x10);
  return;
}


// ===== 0074ab40  <<libdiscore_common[1cb84820f9455fa0]::actions::guild_role::Permissions_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::PermissionsVisitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

/* <<libdiscore_common[1cb84820f9455fa0]::actions::guild_role::Permissions as
   serde[52fff5c06b43f145]::de::Deserialize>::deserialize::PermissionsVisitor as
   serde[52fff5c06b43f145]::de::Visitor>::expecting */

void <<libdiscore_common[1cb84820f9455fa0]::actions::guild_role::Permissions_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::PermissionsVisitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,"an integer or a string containing an integer",0x2c);
  return;
}


// ===== 0074ab54  <<libdiscore_common[1cb84820f9455fa0]::actions::guild_role::NullFlag_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::NullFlagVisitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

/* <<libdiscore_common[1cb84820f9455fa0]::actions::guild_role::NullFlag as
   serde[52fff5c06b43f145]::de::Deserialize>::deserialize::NullFlagVisitor as
   serde[52fff5c06b43f145]::de::Visitor>::expecting */

void <<libdiscore_common[1cb84820f9455fa0]::actions::guild_role::NullFlag_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::NullFlagVisitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd074,4);
  return;
}


// ===== 0074ab68  FUN_0074ab68 =====

void FUN_0074ab68(undefined8 *param_1)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  void *__ptr;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long local_58 [2];
  long local_48;
  
  uVar5 = *param_1;
  FUN_0074a794(local_58,uVar5);
  lVar6 = local_58[0];
  lVar3 = local_48;
  do {
    if (lVar6 == 0) {
      return;
    }
    lVar4 = lVar6 + lVar3 * 0x18;
    local_58[0] = lVar6;
    local_48 = lVar3;
    if (*(long *)(lVar4 + 0x168) != 0) {
      free(*(void **)(lVar4 + 0x170));
    }
    pbVar1 = (byte *)(lVar6 + lVar3 * 0x20);
    bVar2 = *pbVar1;
    if (2 < bVar2) {
      if (bVar2 == 3) {
        if (*(long *)(pbVar1 + 8) != 0) {
          __ptr = *(void **)(pbVar1 + 0x10);
LAB_0074ac3c:
          free(__ptr);
        }
      }
      else if (bVar2 == 4) {
        lVar6 = *(long *)(pbVar1 + 0x18) + 1;
        lVar3 = *(long *)(pbVar1 + 0x10);
        while (lVar6 = lVar6 + -1, lVar6 != 0) {
                    /* try { // try from 0074ac08 to 0074ac0b has its CatchHandler @ 0074ac5c */
          FUN_00762098(lVar3);
          lVar3 = lVar3 + 0x20;
        }
        if (*(long *)(pbVar1 + 8) != 0) {
          __ptr = *(void **)(pbVar1 + 0x10);
          goto LAB_0074ac3c;
        }
      }
      else {
        FUN_0074a9a8(pbVar1 + 8);
      }
    }
    FUN_0074a794(local_58,uVar5);
    lVar6 = local_58[0];
    lVar3 = local_48;
  } while( true );
}


// ===== 0074aca0  <libdiscore_common::stores::notes::NoteStore_as_libdiscore_common::stores::dispatcher::Store<libdiscore_common::actions::Action>>::handle_reset =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <libdiscore_common::stores::notes::NoteStore as
   libdiscore_common::stores::dispatcher::Store<libdiscore_common::actions::Action>>::handle_reset
    */

void __rustcall
<libdiscore_common::stores::notes::NoteStore_as_libdiscore_common::stores::dispatcher::Store<libdiscore_common::actions::Action>>
::handle_reset(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int *piVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined1 auStack_b8 [8];
  uint *local_b0;
  int *local_a8;
  byte local_a0;
  undefined8 local_98;
  char *pcStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  char *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  char *local_48;
  undefined8 uStack_40;
  undefined1 uStack_31;
  
  if (2 < *(ulong *)PTR_MAX_LOG_LEVEL_FILTER_00b00c78) {
    local_60 = "NoteStore";
    uStack_58 = 9;
    local_48 = "handle_reset called, clearing database";
    uStack_40 = 0x4d;
    uStack_80 = _UNK_002a06c8;
    local_88 = _DAT_002a06c0;
    local_98 = 0;
    pcStack_90 = "libdiscore_common::stores::notes";
    uStack_68 = _UNK_002a06d8;
    local_70 = _DAT_002a06d0;
    local_78 = "common/rust/src/stores/notes.rs";
    local_50 = DAT_002a1218;
    <log::__private_api::GlobalLogger_as_log::Log>::log(&uStack_31,&local_98);
  }
  FUN_007119a0(auStack_b8,param_2);
  piVar5 = local_a8;
  local_98 = 4;
  lVar8 = *(long *)(local_a8 + 8);
  if (lVar8 == *(long *)(local_a8 + 4)) {
                    /* try { // try from 0074ad68 to 0074ad6b has its CatchHandler @ 0074ae60 */
    <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<libdiscore_common[1cb84820f9455fa0]::stores::store_database::opcodes::PendingKKVChange<libdiscore_common[1cb84820f9455fa0]::stores::notes::UserNote>>>
    ::grow_one();
  }
  puVar7 = (undefined8 *)(*(long *)(piVar5 + 6) + lVar8 * 0x28);
  puVar7[1] = pcStack_90;
  *puVar7 = local_98;
  puVar7[3] = uStack_80;
  puVar7[2] = local_88;
  puVar7[4] = local_78;
  *(long *)(piVar5 + 8) = lVar8 + 1;
  do {
    uVar1 = *local_b0;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(local_b0,0x10);
    if (bVar4) {
      *local_b0 = uVar1 - 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((uVar1 - 1 & 0xbfffffff) == 0x80000000) {
                    /* try { // try from 0074ae24 to 0074ae27 has its CatchHandler @ 0074ae4c */
    <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::wake_writer_or_readers()
    ;
  }
  if ((((local_a0 & 1) == 0) &&
      ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) != 0)) &&
     (uVar6 = std::panicking::panic_count::is_zero_slow_path(), (uVar6 & 1) == 0)) {
    *(undefined1 *)(local_a8 + 2) = 1;
  }
  do {
    iVar2 = *local_a8;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(local_a8,0x10);
    if (bVar4) {
      *local_a8 = iVar2 + -0x3fffffff;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar2 + 0xc0000001U >> 0x1e != 0) {
    <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::wake_writer_or_readers()
    ;
  }
  *param_1 = 0xffffffffffffffff;
  return;
}


// ===== 0074ae80  <libdiscore_common::stores::notes::NoteStore_as_libdiscore_common::stores::dispatcher::Store<libdiscore_common::actions::Action>>::handle_action =====

/* WARNING: Unknown calling convention: __rustcall */
/* <libdiscore_common::stores::notes::NoteStore as
   libdiscore_common::stores::dispatcher::Store<libdiscore_common::actions::Action>>::handle_action
    */

void __rustcall
<libdiscore_common::stores::notes::NoteStore_as_libdiscore_common::stores::dispatcher::Store<libdiscore_common::actions::Action>>
::handle_action(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  int *piVar6;
  code *pcVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 extraout_x10;
  long lVar10;
  undefined1 auStack_78 [8];
  uint *local_70;
  int *local_68;
  byte local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long *local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined7 uStack_37;
  
  FUN_007119a0(auStack_78);
  piVar6 = local_68;
  if (param_3 < 2) {
    if (param_3 == 0) {
      local_58 = 4;
      lVar10 = *(long *)(local_68 + 8);
      if (lVar10 == *(long *)(local_68 + 4)) {
                    /* try { // try from 0074af48 to 0074af4b has its CatchHandler @ 0074b144 */
        <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<libdiscore_common[1cb84820f9455fa0]::stores::store_database::opcodes::PendingKKVChange<libdiscore_common[1cb84820f9455fa0]::stores::notes::UserNote>>>
        ::grow_one();
      }
    }
    else {
      uStack_50 = *param_4;
      local_48 = (long *)param_4[1];
      uStack_40 = extraout_x10;
      if (local_48 != (long *)0x0) {
        do {
          lVar10 = *local_48;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(local_48,0x10);
          if (bVar4) {
            *local_48 = lVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar10 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x74b10c);
          (*pcVar7)();
        }
        local_48 = (long *)param_4[1];
        uStack_40 = param_4[2];
      }
      local_38 = 0;
      lVar10 = *(long *)(local_68 + 8);
      local_58 = 0;
      if (lVar10 == *(long *)(local_68 + 4)) {
                    /* try { // try from 0074aff4 to 0074aff7 has its CatchHandler @ 0074b13c */
        <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<libdiscore_common[1cb84820f9455fa0]::stores::store_database::opcodes::PendingKKVChange<libdiscore_common[1cb84820f9455fa0]::stores::notes::UserNote>>>
        ::grow_one();
      }
    }
    puVar8 = (undefined8 *)(*(long *)(piVar6 + 6) + lVar10 * 0x28);
    puVar8[1] = uStack_50;
    *puVar8 = local_58;
    puVar8[3] = uStack_40;
    puVar8[2] = local_48;
    puVar8[4] = CONCAT71(uStack_37,local_38);
    *(long *)(piVar6 + 8) = lVar10 + 1;
  }
  else {
    if (param_3 != 2) {
      if (param_3 != 4) {
                    /* try { // try from 0074b0e0 to 0074b107 has its CatchHandler @ 0074b154 */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_fmt
                  ("simulated crash",0x1f,&PTR_s_common_rust_src_stores_notes_rs_00ad77a8);
      }
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      puVar8 = (undefined8 *)FUN_004b25a4(0xf,1);
      if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        alloc::raw_vec::handle_error(1,0xf);
      }
      uVar5 = CONCAT71(s_ed_error_002d111c._1_7_,s_ed_error_002d111c[0]);
      *puVar8 = CONCAT17(s_ed_error_002d111c[0],s_simulat_002d1115);
      *(undefined8 *)((long)puVar8 + 7) = uVar5;
      *param_1 = 0xf;
      param_1[1] = puVar8;
      param_1[2] = 0xf;
      do {
        uVar1 = *local_70;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(local_70,0x10);
        if (bVar4) {
          *local_70 = uVar1 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar1 - 1 & 0xbfffffff) == 0x80000000) {
                    /* try { // try from 0074af1c to 0074af1f has its CatchHandler @ 0074b10c */
        <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::
        wake_writer_or_readers();
      }
      goto LAB_0074b04c;
    }
    uStack_50 = *param_4;
    local_38 = 1;
    lVar10 = *(long *)(local_68 + 8);
    local_48 = (long *)0x0;
    local_58 = 0;
    if (lVar10 == *(long *)(local_68 + 4)) {
                    /* try { // try from 0074af7c to 0074af7f has its CatchHandler @ 0074b140 */
      <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<libdiscore_common[1cb84820f9455fa0]::stores::store_database::opcodes::PendingKKVChange<libdiscore_common[1cb84820f9455fa0]::stores::notes::UserNote>>>
      ::grow_one();
    }
    puVar8 = (undefined8 *)(*(long *)(piVar6 + 6) + lVar10 * 0x28);
    puVar8[1] = uStack_50;
    *puVar8 = local_58;
    puVar8[3] = uStack_40;
    puVar8[2] = local_48;
    puVar8[4] = CONCAT71(uStack_37,local_38);
    *(long *)(piVar6 + 8) = lVar10 + 1;
  }
  *param_1 = 0xffffffffffffffff;
  do {
    uVar1 = *local_70;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(local_70,0x10);
    if (bVar4) {
      *local_70 = uVar1 - 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((uVar1 - 1 & 0xbfffffff) == 0x80000000) {
                    /* try { // try from 0074b0d8 to 0074b0db has its CatchHandler @ 0074b124 */
    <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::wake_writer_or_readers()
    ;
  }
LAB_0074b04c:
  if ((((local_60 & 1) == 0) &&
      ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) != 0)) &&
     (uVar9 = std::panicking::panic_count::is_zero_slow_path(), (uVar9 & 1) == 0)) {
    *(undefined1 *)(local_68 + 2) = 1;
  }
  do {
    iVar2 = *local_68;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(local_68,0x10);
    if (bVar4) {
      *local_68 = iVar2 + -0x3fffffff;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar2 + 0xc0000001U >> 0x1e != 0) {
    <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::wake_writer_or_readers()
    ;
    return;
  }
  return;
}


// ===== 0074b16c  <libdiscore_common::stores::notes::NoteStore_as_libdiscore_common::stores::dispatcher::Store<libdiscore_common::actions::Action>>::commit_changes =====

/* WARNING: Unknown calling convention: __rustcall */
/* <libdiscore_common::stores::notes::NoteStore as
   libdiscore_common::stores::dispatcher::Store<libdiscore_common::actions::Action>>::commit_changes
    */

void __rustcall
<libdiscore_common::stores::notes::NoteStore_as_libdiscore_common::stores::dispatcher::Store<libdiscore_common::actions::Action>>
::commit_changes(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  long local_80;
  void *local_78;
  long local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  void *local_50;
  void *pvStack_48;
  long local_40;
  void *pvStack_38;
  
  FUN_00713f10(&local_80);
  if (local_70 == 0) {
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = 8;
    if (local_80 != 0) {
      free(local_78);
      return;
    }
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar1 = (undefined8 *)FUN_004b25a4(0x30,8);
    if (puVar1 == (undefined8 *)0x0) {
                    /* try { // try from 0074b26c to 0074b277 has its CatchHandler @ 0074b2d0 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x30);
    }
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar2 = (undefined4 *)FUN_004b25a4(5,1);
    if (puVar2 == (undefined4 *)0x0) {
                    /* try { // try from 0074b27c to 0074b287 has its CatchHandler @ 0074b2b8 */
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(1,5);
    }
    *(undefined1 *)(puVar2 + 1) = 0x73;
    pvStack_38 = (void *)((long)local_78 + local_70 * 0x30);
    *puVar2 = 0x65746f6e;
    local_50 = local_78;
    pvStack_48 = local_78;
    local_40 = local_80;
                    /* try { // try from 0074b1ec to 0074b1f7 has its CatchHandler @ 0074b28c */
    FUN_007080ec(&local_68,&local_50);
    *puVar1 = 5;
    puVar1[1] = puVar2;
    puVar1[5] = local_58;
    puVar1[4] = uStack_60;
    puVar1[3] = local_68;
    puVar1[2] = 5;
    *param_1 = 1;
    param_1[1] = puVar1;
    param_1[2] = 1;
  }
  return;
}


// ===== 0074b2e8  <libdiscore_common::stores::notes::NoteStore_as_libdiscore_common::stores::dispatcher::Store<libdiscore_common::actions::Action>>::database_configurations =====

/* WARNING: Unknown calling convention: __rustcall */
/* <libdiscore_common::stores::notes::NoteStore as
   libdiscore_common::stores::dispatcher::Store<libdiscore_common::actions::Action>>::database_configurations
    */

void __rustcall
<libdiscore_common::stores::notes::NoteStore_as_libdiscore_common::stores::dispatcher::Store<libdiscore_common::actions::Action>>
::database_configurations(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)FUN_004b25a4(0x10,8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = "notes";
    puVar1[1] = 5;
    *param_1 = 1;
    param_1[1] = puVar1;
    param_1[2] = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x10);
}


// ===== 0074b340  <<libdiscore_common[1cb84820f9455fa0]::core::experiment_cacher::CacheableExperimentConfig_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

/* <<libdiscore_common[1cb84820f9455fa0]::core::experiment_cacher::CacheableExperimentConfig as
   serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor as
   serde[52fff5c06b43f145]::de::Visitor>::expecting */

void <<libdiscore_common[1cb84820f9455fa0]::core::experiment_cacher::CacheableExperimentConfig_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bfd28,0x20);
  return;
}


// ===== 0074b354  <<libdiscore_common[1cb84820f9455fa0]::stores::notes::UserNote_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

/* <<libdiscore_common[1cb84820f9455fa0]::stores::notes::UserNote as
   serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor as
   serde[52fff5c06b43f145]::de::Visitor>::expecting */

void <<libdiscore_common[1cb84820f9455fa0]::stores::notes::UserNote_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"struct UserNote",0xf);
  return;
}


// ===== 0074b368  <<libdiscore_common[1cb84820f9455fa0]::actions::guild_role::ServerRoleColors_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

/* <<libdiscore_common[1cb84820f9455fa0]::actions::guild_role::ServerRoleColors as
   serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor as
   serde[52fff5c06b43f145]::de::Visitor>::expecting */

void <<libdiscore_common[1cb84820f9455fa0]::actions::guild_role::ServerRoleColors_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"struct ServerRoleColors",0x17);
  return;
}


// ===== 0074b37c  <<libdiscore_common[1cb84820f9455fa0]::actions::guild_role::GuildRoleTags_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

/* <<libdiscore_common[1cb84820f9455fa0]::actions::guild_role::GuildRoleTags as
   serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor as
   serde[52fff5c06b43f145]::de::Visitor>::expecting */

void <<libdiscore_common[1cb84820f9455fa0]::actions::guild_role::GuildRoleTags_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"struct GuildRoleTags",0x14);
  return;
}


// ===== 0074b390  <<libdiscore_common[1cb84820f9455fa0]::actions::guild_role::ServerGuildRole_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

/* <<libdiscore_common[1cb84820f9455fa0]::actions::guild_role::ServerGuildRole as
   serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor as
   serde[52fff5c06b43f145]::de::Visitor>::expecting */

void <<libdiscore_common[1cb84820f9455fa0]::actions::guild_role::ServerGuildRole_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"struct ServerGuildRole",0x16);
  return;
}


// ===== 0074b3a4  <<libdiscore_common[1cb84820f9455fa0]::actions::guild_role::GuildRoleUpdateOrCreateAction_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

/* <<libdiscore_common[1cb84820f9455fa0]::actions::guild_role::GuildRoleUpdateOrCreateAction as
   serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor as
   serde[52fff5c06b43f145]::de::Visitor>::expecting */

void <<libdiscore_common[1cb84820f9455fa0]::actions::guild_role::GuildRoleUpdateOrCreateAction_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,"struct GuildRoleUpdateOrCreateAction",0x24);
  return;
}


// ===== 0074b3b8  <<libdiscore_common::actions::guild_role::GuildRoleDeleteAction_as_serde::de::Deserialize>::deserialize::__Visitor_as{backref_31}::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<libdiscore_common::actions::guild_role::GuildRoleDeleteAction as
   serde::de::Deserialize>::deserialize::__Visitor as {backref 31}::Visitor>::expecting */

void __rustcall
<<libdiscore_common::actions::guild_role::GuildRoleDeleteAction_as_serde::de::Deserialize>::deserialize::__Visitor_as{backref_31}::Visitor>
::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"struct GuildRoleDeleteAction",0x1c);
  return;
}


// ===== 0074b3cc  <libdiscore_common::core::http::native::StreamingBody_as_futures_core::stream::Stream>::poll_next =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <libdiscore_common::core::http::native::StreamingBody as futures_core::stream::Stream>::poll_next
    */

void __rustcall
<libdiscore_common::core::http::native::StreamingBody_as_futures_core::stream::Stream>::poll_next
          (undefined8 *param_1,long *param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong __n;
  ulong uVar2;
  long lVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  void *local_80;
  ulong local_78;
  ulong local_70;
  ulong uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar6 = *param_2;
  if ((lVar6 != -1) && ((*(byte *)(param_2 + 4) & 1) == 0)) {
    if ((lVar6 != 2) &&
       (lVar3 = <tokio::fs::file::File_as_tokio::io::async_seek::AsyncSeek>::start_seek
                          (param_2[3],0,param_2[2]), lVar3 != 0)) {
      param_1[2] = lVar3;
      goto LAB_0074b528;
    }
    *(undefined1 *)(param_2 + 4) = 1;
  }
  local_78 = param_2[8] - param_2[10];
  if ((ulong)param_2[10] <= (ulong)param_2[8] && local_78 != 0) {
    uVar5 = param_2[7];
    if ((ulong)param_2[9] <= local_78) {
      local_78 = param_2[9];
    }
    uVar2 = local_78 - uVar5;
    if (uVar2 != 0) {
      if (uVar5 <= local_78 && uVar2 != 0) {
        if (param_2[5] - uVar5 < uVar2) {
          FUN_0072eae4(param_2 + 5,uVar5,uVar2,1,1);
          lVar6 = param_2[6];
          uVar5 = param_2[7];
          puVar4 = (undefined1 *)(lVar6 + uVar5);
        }
        else {
          lVar6 = param_2[6];
          puVar4 = (undefined1 *)(lVar6 + uVar5);
        }
        if (1 < uVar2) {
          memset((void *)(lVar6 + uVar5),0,uVar2 - 1);
          uVar5 = uVar5 + (uVar2 - 1);
          puVar4 = (undefined1 *)(lVar6 + uVar5);
        }
        lVar6 = *param_2;
        *puVar4 = 0;
        local_78 = uVar5 + 1;
      }
      param_2[7] = local_78;
    }
    local_80 = (void *)param_2[6];
    local_70 = 0;
    uStack_68 = local_78;
    if (lVar6 == -1) {
      lVar6 = param_2[1];
      uVar5 = *(ulong *)(lVar6 + 0x10);
      uVar2 = *(ulong *)(lVar6 + 0x18);
      if (uVar5 < uVar2) {
        lVar3 = 0;
      }
      else {
        __n = local_78;
        if (uVar5 - uVar2 <= local_78) {
          __n = uVar5 - uVar2;
        }
        uVar1 = __n + uVar2;
        if ((CARRY8(__n,uVar2)) || (uVar5 < uVar1)) {
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (uVar2,uVar1,uVar5,&PTR_s__root__cargo_registry_src_index__00ad8288);
        }
        memcpy(local_80,(void *)(*(long *)(lVar6 + 8) + uVar2),__n);
        lVar3 = 0;
        *(ulong *)(lVar6 + 0x18) = uVar1;
        local_70 = __n;
      }
    }
    else {
      auVar7 = <tokio::fs::file::File_as_tokio::io::async_read::AsyncRead>::poll_read
                         (param_2[3],param_3,&local_80);
      lVar3 = auVar7._8_8_;
      if (auVar7._0_8_ == 1) {
        *param_1 = 2;
        return;
      }
    }
    uVar5 = local_70;
    if (lVar3 != 0) {
      param_1[2] = lVar3;
LAB_0074b528:
      *param_1 = 1;
      param_1[1] = 0;
      return;
    }
    if (local_78 < local_70) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (0,local_70,local_78,&PTR_s__root__cargo_registry_src_index__00ad77c0);
    }
    if (local_70 != 0) {
      <bytes::bytes::bytes::bytes::Bytes>::copy_from_slice(&local_60,local_80,local_70);
      uVar5 = param_2[10] + uVar5;
      param_2[10] = uVar5;
      if ((param_2[0xb] != 0) &&
         (((ulong)param_2[8] <= uVar5 ||
          ((ulong)(param_2[0xc] + (long)((double)(ulong)param_2[8] * _DAT_002a12f8)) <= uVar5)))) {
                    /* try { // try from 0074b5f0 to 0074b5f7 has its CatchHandler @ 0074b6a8 */
        <libdiscore_common::core::http::libdiscore_common::core::http::ProgressCallback>::call
                  (param_2 + 0xb,uVar5);
        param_2[0xc] = uVar5;
      }
      *param_1 = 1;
      param_1[2] = uStack_58;
      param_1[1] = local_60;
      param_1[4] = uStack_48;
      param_1[3] = uStack_50;
      return;
    }
  }
  *param_1 = 0;
  return;
}


// ===== 0074b6d0  <libdiscore_common::core::http::native::StreamingBody_as_http_body::Body>::poll_frame =====

/* WARNING: Unknown calling convention: __rustcall */
/* <libdiscore_common::core::http::native::StreamingBody as http_body::Body>::poll_frame */

void __rustcall
<libdiscore_common::core::http::native::StreamingBody_as_http_body::Body>::poll_frame
          (undefined8 *param_1)

{
  long local_48;
  long local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  <libdiscore_common::core::http::native::StreamingBody_as_futures_core::stream::Stream>::poll_next
            (&local_48);
  if (local_48 == 0) {
    *param_1 = 0xfffffffffffffffd;
    return;
  }
  if (local_48 == 2) {
    *param_1 = 3;
    return;
  }
  if (local_40 != 0) {
    param_1[2] = uStack_38;
    param_1[1] = local_40;
    param_1[4] = uStack_28;
    param_1[3] = local_30;
    *param_1 = 0xffffffffffffffff;
    return;
  }
  *param_1 = 0xfffffffffffffffe;
  param_1[1] = uStack_38;
  return;
}


// ===== 0074b77c  <libdiscore_common::stores::guild_role::color_string::ColorString_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <libdiscore_common::stores::guild_role::color_string::ColorString as core::fmt::Display>::fmt */

void __rustcall
<libdiscore_common::stores::guild_role::color_string::ColorString_as_core::fmt::Display>::fmt
          (uint *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  
  uVar1 = *param_1;
  local_18 = 0x23;
  local_16 = (&DAT_002a0ca0)[(ulong)(uVar1 >> 0x10) & 0xf];
  local_13 = (&DAT_002a0ca0)[(ulong)(uVar1 >> 4) & 0xf];
  local_14 = (&DAT_002a0ca0)[(ulong)(uVar1 >> 8) & 0xf];
  local_17 = (&DAT_002a0ca0)[(ulong)(uVar1 >> 0x14) & 0xf];
  local_15 = (&DAT_002a0ca0)[(ulong)(uVar1 >> 0xc) & 0xf];
  local_12 = (&DAT_002a0ca0)[(ulong)uVar1 & 0xf];
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&local_18,7);
  return;
}


// ===== 0074b810  <libdiscore_common::core::experiment_cacher::ExperimentCacherError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <libdiscore_common::core::experiment_cacher::ExperimentCacherError as core::fmt::Display>::fmt */

void __rustcall
<libdiscore_common::core::experiment_cacher::ExperimentCacherError_as_core::fmt::Display>::fmt
          (long *param_1,undefined8 *param_2)

{
  long lVar1;
  long *local_40;
  long *local_38;
  long **local_30;
  code *pcStack_28;
  long **local_20;
  code *pcStack_18;
  
  local_30 = &local_40;
  lVar1 = *param_1 + -0x7fffffffffffffff;
  if (-0x7fffffffffffffff < *param_1) {
    lVar1 = 0;
  }
  if (lVar1 != 0) {
    if (lVar1 == 1) {
      local_40 = param_1 + 1;
      local_38 = (long *)((long)param_1 + 0xc);
      pcStack_28 = FUN_00753298;
      local_20 = &local_38;
      pcStack_18 = FUN_00753298;
      core::fmt::write(*param_2,param_2[1],&DAT_002a66f2,&local_30);
      return;
    }
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"Failed to serialize snapshot",0x1c);
    return;
  }
  local_30 = &local_38;
  pcStack_28 = FUN_0073b328;
  local_38 = param_1;
  core::fmt::write(*param_2,param_2[1],&DAT_002a204e,&local_30);
  return;
}


// ===== 0074b8dc  FUN_0074b8dc =====

void FUN_0074b8dc(long *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  undefined4 *puVar2;
  byte bVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  char *pcVar13;
  long lVar14;
  ulong uVar15;
  ulong __n;
  
  lVar11 = param_1[2];
  if (*param_1 == lVar11) {
    FUN_0072eae4(param_1,lVar11,1,1,1);
    lVar11 = param_1[2];
  }
  puVar8 = PTR_ESCAPE_00b00cc0;
  lVar14 = lVar11 + 1;
  param_1[2] = lVar14;
  *(undefined1 *)(param_1[1] + lVar11) = 0x22;
  uVar7 = DAT_002a17e0;
  uVar15 = 0;
  puVar9 = PTR_HEX_DIGITS_00b00cc8;
  lVar11 = param_2;
LAB_0074b988:
  uVar1 = 0;
  do {
    __n = uVar1;
    if ((byte *)(lVar11 + __n) == (byte *)(param_2 + param_3)) {
      uVar1 = param_3 - uVar15;
      if (uVar1 != 0) {
        if ((uVar15 != 0) &&
           ((param_3 <= uVar15 ||
            (*(char *)(param_2 + uVar15) + 0x40 < 0 !=
             SCARRY4((int)*(char *)(param_2 + uVar15),0x40))))) {
                    /* WARNING: Subroutine does not return */
          core::str::slice_error_fail
                    (param_2,param_3,uVar15,param_3,&PTR_s__root__cargo_registry_src_index__00ad7710
                    );
        }
        if ((ulong)(*param_1 - lVar14) < uVar1) {
          FUN_0072eae4(param_1,lVar14,uVar1,1,1);
          lVar14 = param_1[2];
        }
        memcpy((void *)(param_1[1] + lVar14),(void *)(param_2 + uVar15),uVar1);
        lVar14 = lVar14 + uVar1;
        param_1[2] = lVar14;
      }
      if (*param_1 == lVar14) {
        FUN_0072eae4(param_1,lVar14,1,1,1);
        lVar14 = param_1[2];
      }
      *(undefined1 *)(param_1[1] + lVar14) = 0x22;
      param_1[2] = lVar14 + 1;
      return;
    }
    bVar3 = *(byte *)(lVar11 + __n);
    uVar1 = __n + 1;
    bVar4 = puVar8[bVar3];
  } while (bVar4 == 0);
  uVar12 = (uVar15 + uVar1) - 1;
  if (uVar15 < uVar12) {
    if (((param_3 < uVar12) ||
        ((uVar15 != 0 &&
         (iVar10 = (int)*(char *)(param_2 + uVar15),
         iVar10 == -0x41 || iVar10 + 0x41 < 0 != SCARRY4(iVar10,0x41))))) ||
       ((uVar15 + uVar1 + ~param_3 != 0 &&
        (iVar10 = (int)*(char *)(param_2 + -1 + uVar15 + uVar1),
        iVar10 == -0x41 || iVar10 + 0x41 < 0 != SCARRY4(iVar10,0x41))))) {
                    /* WARNING: Subroutine does not return */
      core::str::slice_error_fail
                (param_2,param_3,uVar15,uVar15 + uVar1 + -1,
                 &PTR_s__root__cargo_registry_src_index__00ad7728);
    }
    if ((ulong)(*param_1 - lVar14) < __n) {
      FUN_0072eae4(param_1,lVar14,__n,1,1);
      lVar14 = param_1[2];
    }
    memcpy((void *)(param_1[1] + lVar14),(void *)(param_2 + uVar15),__n);
    lVar14 = lVar14 + uVar1 + -1;
    param_1[2] = lVar14;
    puVar9 = PTR_HEX_DIGITS_00b00cc8;
  }
  uVar15 = uVar15 + uVar1;
  pcVar13 = "\\\"";
  lVar11 = lVar11 + uVar1;
  if (bVar4 < 0x6e) {
    if (bVar4 < 0x62) {
      if ((bVar4 != 0x22) && (pcVar13 = "\\\\\\b\\f\\n\\r", bVar4 != 0x5c)) goto LAB_0074bdd4;
    }
    else if (bVar4 == 0x62) {
      pcVar13 = "\\b\\f\\n\\r";
    }
    else {
      pcVar13 = "\\f\\n\\r";
      if (bVar4 != 0x66) goto LAB_0074bdd4;
    }
  }
  else {
    if (0x73 < bVar4) {
      if (bVar4 == 0x74) {
        pcVar13 = "\\t";
        goto LAB_0074bb54;
      }
      if (bVar4 != 0x75) goto LAB_0074bdd4;
      uVar5 = puVar9[(ulong)bVar3 & 0xf];
      uVar6 = puVar9[bVar3 >> 4];
      if ((ulong)(*param_1 - lVar14) < 6) {
        FUN_0072eae4(param_1,lVar14,6,1,1);
        lVar14 = param_1[2];
        puVar9 = PTR_HEX_DIGITS_00b00cc8;
      }
      puVar2 = (undefined4 *)(param_1[1] + lVar14);
      lVar14 = lVar14 + 6;
      *puVar2 = (int)uVar7;
      *(undefined1 *)(puVar2 + 1) = uVar6;
      *(undefined1 *)((long)puVar2 + 5) = uVar5;
      goto LAB_0074bb74;
    }
    if (bVar4 == 0x6e) {
      pcVar13 = "\\n\\r";
      goto LAB_0074bb54;
    }
    if (bVar4 != 0x72) {
LAB_0074bdd4:
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("internal error: entered unreachable code",0x28,
                 &PTR_s__root__cargo_registry_src_index__00ad7740);
    }
    pcVar13 = "\\r";
  }
LAB_0074bb54:
  if ((ulong)(*param_1 - lVar14) < 2) {
    FUN_0072eae4(param_1,lVar14,2,1,1);
    lVar14 = param_1[2];
    puVar9 = PTR_HEX_DIGITS_00b00cc8;
  }
  *(undefined2 *)(param_1[1] + lVar14) = *(undefined2 *)pcVar13;
  lVar14 = lVar14 + 2;
LAB_0074bb74:
  param_1[2] = lVar14;
  goto LAB_0074b988;
}


// ===== 0074be08  FUN_0074be08 =====

void FUN_0074be08(undefined8 param_1,long param_2)

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


// ===== 0074be20  FUN_0074be20 =====

void FUN_0074be20(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,"PoisonError",0xb);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish_non_exhaustive(auStack_20);
  return;
}


// ===== 0074be58  <libdiscore_common::actions::traits::GlobalActionTypeParseError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <libdiscore_common::actions::traits::GlobalActionTypeParseError as core::fmt::Display>::fmt */

void __rustcall
<libdiscore_common::actions::traits::GlobalActionTypeParseError_as_core::fmt::Display>::fmt
          (undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_28;
  undefined8 *puStack_20;
  code *local_18;
  
  puStack_20 = &local_28;
  local_18 = FUN_0075325c;
  local_28 = param_1;
  core::fmt::write(*param_2,param_2[1],&DAT_002a28c9,&puStack_20);
  return;
}


// ===== 0074be98  FUN_0074be98 =====

undefined8 FUN_0074be98(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  undefined2 local_34 [2];
  
  lVar2 = <tokio::runtime::park::[2]::tokio::runtime::park::CachedParkThread>::waker();
  puVar1 = PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (lVar2 == 0) {
    return 1;
  }
  do {
    uVar4 = *(ulong *)puVar1;
    if (uVar4 == 0) {
      uVar4 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
              lazy_init(puVar1);
      pvVar3 = pthread_getspecific((pthread_key_t)uVar4);
    }
    else {
      pvVar3 = pthread_getspecific((pthread_key_t)uVar4);
    }
    if (pvVar3 < (void *)0x2) {
      pvVar3 = (void *)FUN_0072ca84(uVar4 & 0xffffffff,pvVar3,0);
    }
    if (pvVar3 != (void *)0x0) {
      local_34[0] = *(undefined2 *)((long)pvVar3 + 0x44);
      *(undefined2 *)((long)pvVar3 + 0x44) = 0x8001;
      <tokio::task::coop::with_budget::ResetGuard_as_core::ops::drop::Drop>::drop(local_34);
    }
                    /* try { // try from 0074bee4 to 0074bf4f has its CatchHandler @ 0074bf54 */
    <tokio::runtime::park::[2]::tokio::runtime::park::CachedParkThread>::park(param_1);
  } while( true );
}


// ===== 0074bf74  FUN_0074bf74 =====

undefined8 FUN_0074bf74(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined1 uVar2;
  int iVar3;
  void *pvVar4;
  undefined1 extraout_w9;
  undefined1 extraout_w9_00;
  undefined1 extraout_w9_01;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 local_70 [16];
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined8 local_50;
  char local_24;
  undefined1 local_23;
  
  local_70 = <tokio::runtime::park::[2]::tokio::runtime::park::CachedParkThread>::waker();
  puVar1 = PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (local_70._0_8_ != 0) {
    uVar5 = *param_2;
    local_50 = 0;
    local_60 = local_70;
    puStack_58 = local_70;
    while( true ) {
      uVar6 = *(ulong *)puVar1;
      if (uVar6 == 0) {
        uVar6 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
                lazy_init(puVar1);
        pvVar4 = pthread_getspecific((pthread_key_t)uVar6);
        uVar2 = extraout_w9_00;
      }
      else {
        pvVar4 = pthread_getspecific((pthread_key_t)uVar6);
        uVar2 = extraout_w9;
      }
      if (pvVar4 < (void *)0x2) {
        pvVar4 = (void *)FUN_0072ca84(uVar6 & 0xffffffff,pvVar4,0);
        uVar2 = extraout_w9_01;
      }
      local_23 = uVar2;
      if (pvVar4 == (void *)0x0) {
        local_24 = '\x02';
      }
      else {
        local_24 = *(char *)((long)pvVar4 + 0x44);
        local_23 = *(undefined1 *)((long)pvVar4 + 0x45);
        *(undefined2 *)((long)pvVar4 + 0x44) = 0x8001;
      }
                    /* try { // try from 0074bff8 to 0074c003 has its CatchHandler @ 0074c0a0 */
      iVar3 = <tokio::sync::notify::Notified_as_core::future::future::Future>::poll(uVar5,&local_60)
      ;
      if (local_24 != '\x02') {
                    /* try { // try from 0074c014 to 0074c057 has its CatchHandler @ 0074c0c0 */
        <tokio::task::coop::with_budget::ResetGuard_as_core::ops::drop::Drop>::drop(&local_24);
      }
      if (iVar3 == 0) break;
      <tokio::runtime::park::[2]::tokio::runtime::park::CachedParkThread>::park(param_1);
    }
    (**(code **)(local_70._0_8_ + 0x18))(local_70._8_8_);
    return 0;
  }
  return 2;
}


// ===== 0074c0dc  FUN_0074c0dc =====

void FUN_0074c0dc(void *param_1,long *param_2,long *param_3)

{
  void *pvVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if (*param_2 != 2) {
    if (*param_2 != 0) {
      if (param_2[1] == 0) {
        pvVar1 = (void *)param_2[2];
        puVar2 = (undefined8 *)param_2[3];
        pcVar3 = (code *)*puVar2;
        if (pcVar3 != (code *)0x0) {
                    /* try { // try from 0074c1a8 to 0074c1af has its CatchHandler @ 0074c20c */
          (*pcVar3)(pvVar1);
        }
        if (puVar2[1] != 0) {
          free(pvVar1);
        }
      }
      else {
                    /* try { // try from 0074c158 to 0074c15f has its CatchHandler @ 0074c248 */
        (**(code **)(param_2[1] + 0x20))(param_2 + 4,param_2[2],param_2[3]);
      }
    }
    lVar5 = param_3[1];
    lVar4 = *param_3;
    lVar7 = param_3[3];
    lVar6 = param_3[2];
    *param_2 = 1;
    param_2[2] = lVar5;
    param_2[1] = lVar4;
    param_2[4] = lVar7;
    param_2[3] = lVar6;
    memcpy(param_1,param_2,0x118);
    return;
  }
  memcpy(param_1,param_2,0x118);
  if (*param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0074c13c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 0x20))(param_3 + 3,param_3[1],param_3[2]);
    return;
  }
  pvVar1 = (void *)param_3[1];
  puVar2 = (undefined8 *)param_3[2];
  pcVar3 = (code *)*puVar2;
  if (pcVar3 != (code *)0x0) {
                    /* try { // try from 0074c170 to 0074c177 has its CatchHandler @ 0074c228 */
    (*pcVar3)(pvVar1);
  }
  if (puVar2[1] != 0) {
    free(pvVar1);
    return;
  }
  return;
}


// ===== 0074c270  FUN_0074c270 =====

void FUN_0074c270(void *param_1,long *param_2,undefined8 param_3)

{
  undefined8 extraout_x1;
  long lVar1;
  undefined1 auVar2 [16];
  long local_80;
  void *local_78;
  long local_48 [3];
  
  if (*param_2 != 2) {
                    /* try { // try from 0074c298 to 0074c2a7 has its CatchHandler @ 0074c3dc */
    <url::url::Url>::query_pairs_mut(&local_80,param_2 + 0x11);
                    /* try { // try from 0074c2a8 to 0074c2b7 has its CatchHandler @ 0074c3cc */
    FUN_0072f4d8(local_48,&local_80,param_3);
    if (local_48[0] == -3) {
      lVar1 = 0;
    }
    else {
                    /* try { // try from 0074c2d8 to 0074c2e3 has its CatchHandler @ 0074c398 */
      lVar1 = FUN_00704f58(0,extraout_x1,local_48);
    }
                    /* try { // try from 0074c2f4 to 0074c2fb has its CatchHandler @ 0074c374 */
    if (((local_80 != -2) &&
        (<url::UrlQuery_as_core::ops::drop::Drop>::drop(&local_80), local_80 != -1)) &&
       (local_80 != 0)) {
      free(local_78);
    }
    if (*param_2 != 2) {
                    /* try { // try from 0074c324 to 0074c33b has its CatchHandler @ 0074c3b8 */
      auVar2 = <url::url::Url>::query(param_2 + 0x11);
      if ((auVar2._0_8_ != 0) && (auVar2._8_8_ == 0)) {
        <url::url::Url>::set_query(param_2 + 0x11);
      }
    }
    if (lVar1 != 0) {
                    /* try { // try from 0074c340 to 0074c347 has its CatchHandler @ 0074c3a8 */
      FUN_0074c814(param_2);
      *param_2 = 2;
      param_2[1] = lVar1;
    }
  }
  memcpy(param_1,param_2,0x118);
  return;
}


// ===== 0074c418  FUN_0074c418 =====

void FUN_0074c418(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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


// ===== 0074c470  FUN_0074c470 =====

void FUN_0074c470(long *param_1)

{
  if (*param_1 != -2) {
                    /* try { // try from 0074c488 to 0074c48f has its CatchHandler @ 0074c4c0 */
    <url::UrlQuery_as_core::ops::drop::Drop>::drop();
    if ((*param_1 != -1) && (*param_1 != 0)) {
      free((void *)param_1[1]);
      return;
    }
  }
  return;
}


// ===== 0074c4e8  FUN_0074c4e8 =====

void FUN_0074c4e8(long *param_1)

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


// ===== 0074c580  FUN_0074c580 =====

void FUN_0074c580(long *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  code *pcVar2;
  
  if (*param_1 != 0) {
    if (param_1[1] != 0) {
                    /* WARNING: Could not recover jumptable at 0x0074c5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1[1] + 0x20))(param_1 + 4,param_1[2],param_1[3]);
      return;
    }
    __ptr = (void *)param_1[2];
    puVar1 = (undefined8 *)param_1[3];
    pcVar2 = (code *)*puVar1;
    if (pcVar2 != (code *)0x0) {
                    /* try { // try from 0074c5c0 to 0074c5c7 has its CatchHandler @ 0074c5f0 */
      (*pcVar2)(__ptr);
    }
    if (puVar1[1] != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 0074c614  FUN_0074c614 =====

void FUN_0074c614(long *param_1)

{
  if (*param_1 == -2) {
    return;
  }
  if (*param_1 == -1) {
    FUN_0074d924(param_1 + 1);
    return;
  }
                    /* try { // try from 0074c650 to 0074c65b has its CatchHandler @ 0074c66c */
  FUN_00703fac(param_1 + 0xc);
  FUN_0074db38(param_1);
  return;
}


// ===== 0074c684  FUN_0074c684 =====

void FUN_0074c684(long *param_1)

{
  if (*param_1 != -1) {
                    /* try { // try from 0074c6a0 to 0074c6a7 has its CatchHandler @ 0074c6c8 */
    FUN_00703fac(param_1 + 0xc);
    FUN_0074db38(param_1);
    return;
  }
  FUN_0074d924(param_1 + 1);
  return;
}


// ===== 0074c6e0  FUN_0074c6e0 =====

void FUN_0074c6e0(long *param_1)

{
  if (*param_1 != -1) {
    if (param_1[0xc] != 0) {
      free((void *)param_1[0xd]);
    }
    FUN_0074db38(param_1);
    return;
  }
  FUN_0074d924(param_1 + 1);
  return;
}


// ===== 0074c72c  FUN_0074c72c =====

void FUN_0074c72c(long *param_1)

{
  void *pvVar1;
  long lVar2;
  undefined8 *puVar3;
  
  if (*param_1 != -1) {
    pvVar1 = (void *)param_1[0xd];
    lVar2 = param_1[0xe];
    if (lVar2 != 0) {
      puVar3 = (undefined8 *)((long)pvVar1 + 8);
      do {
        if (puVar3[-1] != 0) {
          free((void *)*puVar3);
        }
        lVar2 = lVar2 + -1;
        puVar3 = puVar3 + 3;
      } while (lVar2 != 0);
    }
    if (param_1[0xc] != 0) {
      free(pvVar1);
    }
    pvVar1 = (void *)param_1[0x10];
    lVar2 = param_1[0x11];
    if (lVar2 != 0) {
      puVar3 = (undefined8 *)((long)pvVar1 + 8);
      do {
        if (puVar3[-1] != 0) {
          free((void *)*puVar3);
        }
        lVar2 = lVar2 + -1;
        puVar3 = puVar3 + 3;
      } while (lVar2 != 0);
    }
    if (param_1[0xf] != 0) {
      free(pvVar1);
    }
    FUN_0074db38(param_1);
    return;
  }
  FUN_0074d924(param_1 + 1);
  return;
}


// ===== 0074c814  FUN_0074c814 =====

void FUN_0074c814(long *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 == 2) {
    FUN_0074d658(param_1[1]);
    return;
  }
  if ((9 < *(byte *)(param_1 + 0x1e)) && (param_1[0x20] != 0)) {
    free((void *)param_1[0x1f]);
  }
  if (param_1[0x11] != 0) {
    free((void *)param_1[0x12]);
  }
                    /* try { // try from 0074c874 to 0074c87b has its CatchHandler @ 0074c900 */
  FUN_0074db38(param_1 + 5);
  if (lVar3 != 0) {
    if (param_1[1] != 0) {
                    /* WARNING: Could not recover jumptable at 0x0074c89c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1[1] + 0x20))(param_1 + 4,param_1[2],param_1[3]);
      return;
    }
    __ptr = (void *)param_1[2];
    puVar1 = (undefined8 *)param_1[3];
    pcVar2 = (code *)*puVar1;
    if (pcVar2 != (code *)0x0) {
                    /* try { // try from 0074c8ac to 0074c8b3 has its CatchHandler @ 0074c8dc */
      (*pcVar2)(__ptr);
    }
    if (puVar1[1] != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 0074c918  FUN_0074c918 =====

void FUN_0074c918(long *param_1)

{
                    /* try { // try from 0074c928 to 0074c92f has its CatchHandler @ 0074c970 */
  FUN_00765698(param_1 + 0xc);
  if (param_1[0xc] != 0) {
    free((void *)param_1[0xd]);
  }
  if (*param_1 != -1) {
    FUN_0074db38(param_1);
    return;
  }
  return;
}


// ===== 0074c9ac  FUN_0074c9ac =====

void FUN_0074c9ac(long *param_1)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  
  __ptr = (void *)param_1[1];
  lVar2 = param_1[2] + 1;
  lVar1 = (long)__ptr + 0x38;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 0074c9e8 to 0074c9eb has its CatchHandler @ 0074ca34 */
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


// ===== 0074ca88  FUN_0074ca88 =====

void FUN_0074ca88(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x30);
  if ((uVar2 & 1) != 0) {
                    /* try { // try from 0074caa0 to 0074cab3 has its CatchHandler @ 0074cb18 */
    <tokio::sync::oneshot::tokio::sync::oneshot::Task>::drop_task(param_1 + 0x20);
  }
  if (((uint)uVar2 >> 3 & 1) != 0) {
    <tokio::sync::oneshot::tokio::sync::oneshot::Task>::drop_task(param_1 + 0x10);
  }
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 != -2) {
    if (lVar1 == -1) {
      FUN_0074d924(param_1 + 0x40);
      return;
    }
                    /* try { // try from 0074cae8 to 0074caef has its CatchHandler @ 0074cb00 */
    FUN_00703fac(param_1 + 0x98);
    FUN_0074db38((long *)(param_1 + 0x38));
    return;
  }
  return;
}


// ===== 0074cb30  FUN_0074cb30 =====

void FUN_0074cb30(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0xb0);
  if ((uVar1 & 1) != 0) {
                    /* try { // try from 0074cb48 to 0074cb5b has its CatchHandler @ 0074cbb0 */
    <tokio::sync::oneshot::tokio::sync::oneshot::Task>::drop_task(param_1 + 0xa0);
  }
  if (((uint)uVar1 >> 3 & 1) != 0) {
    <tokio::sync::oneshot::tokio::sync::oneshot::Task>::drop_task(param_1 + 0x90);
  }
  if (*(long *)(param_1 + 0x10) == -2) {
    return;
  }
  if (*(long *)(param_1 + 0x10) != -1) {
    if (*(long *)(param_1 + 0x70) != 0) {
      free(*(void **)(param_1 + 0x78));
    }
    FUN_0074db38(param_1 + 0x10);
    return;
  }
  FUN_0074d924(param_1 + 0x18);
  return;
}


// ===== 0074cbd4  FUN_0074cbd4 =====

void FUN_0074cbd4(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x30);
  if ((uVar1 & 1) != 0) {
                    /* try { // try from 0074cbec to 0074cbff has its CatchHandler @ 0074cc28 */
    <tokio::sync::oneshot::tokio::sync::oneshot::Task>::drop_task(param_1 + 0x20);
  }
  if (((uint)uVar1 >> 3 & 1) != 0) {
    <tokio::sync::oneshot::tokio::sync::oneshot::Task>::drop_task(param_1 + 0x10);
  }
  if (*(long *)(param_1 + 0x38) == -2) {
    return;
  }
  FUN_0074c72c((long *)(param_1 + 0x38));
  return;
}


// ===== 0074cc4c  FUN_0074cc4c =====

void FUN_0074cc4c(long param_1)

{
  void *__ptr;
  void *pvVar1;
  long local_100 [28];
  
  while( true ) {
                    /* try { // try from 0074cc60 to 0074cc8b has its CatchHandler @ 0074ccd0 */
    FUN_0073a38c(local_100,param_1 + 0x1a0,param_1 + 0x80);
    if ((local_100[0] == -1) || (local_100[0] == 2)) break;
    FUN_0074d748(local_100);
  }
  __ptr = *(void **)(param_1 + 0x1a8);
  do {
    pvVar1 = *(void **)((long)__ptr + 0x1c08);
    free(__ptr);
    __ptr = pvVar1;
  } while (pvVar1 != (void *)0x0);
  if (*(long *)(param_1 + 0x100) != 0) {
    (**(code **)(*(long *)(param_1 + 0x100) + 0x18))(*(undefined8 *)(param_1 + 0x108));
  }
  return;
}


// ===== 0074ccf4  FUN_0074ccf4 =====

void FUN_0074ccf4(void *param_1,undefined8 *param_2)

{
  if ((code *)*param_2 != (code *)0x0) {
                    /* try { // try from 0074cd14 to 0074cd1b has its CatchHandler @ 0074cd4c */
    (*(code *)*param_2)(param_1);
  }
  if (param_2[1] != 0) {
    free(param_1);
    return;
  }
  return;
}


// ===== 0074cd6c  FUN_0074cd6c =====

void FUN_0074cd6c(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
                    /* try { // try from 0074cd80 to 0074cda7 has its CatchHandler @ 0074cde4 */
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
      <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<libdiscore_common::core::http::ParsedHttpResponse<std::collections::hash::set::HashSet<alloc::string::String>>,{backref_37}::HttpError>>>>
      ::drop_slow(param_1);
      return;
    }
  }
  return;
}


// ===== 0074ce1c  FUN_0074ce1c =====

void FUN_0074ce1c(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
                    /* try { // try from 0074ce30 to 0074ce57 has its CatchHandler @ 0074ce94 */
    uVar3 = <tokio::sync::oneshot::[9]::tokio::sync::oneshot::State>::set_complete(plVar5 + 0x16);
    if ((uVar3 & 5) == 1) {
      (**(code **)(plVar5[0x14] + 0x10))(plVar5[0x15]);
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
      <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<libdiscore_common::core::http::ParsedHttpResponse<alloc::string::String>,{backref_37}::HttpError>>>>
      ::drop_slow(param_1);
      return;
    }
  }
  return;
}


// ===== 0074cecc  FUN_0074cecc =====

void FUN_0074cecc(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
                    /* try { // try from 0074cee0 to 0074cf07 has its CatchHandler @ 0074cf44 */
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
      <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<libdiscore_common::core::http::ParsedHttpResponse<{backref_41}::stores::blocked_domains::DeltaResponse>,{backref_37}::HttpError>>>>
      ::drop_slow(param_1);
      return;
    }
  }
  return;
}


// ===== 0074cf7c  FUN_0074cf7c =====

void FUN_0074cf7c(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long local_b0;
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
  long local_50;
  void *pvStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar5 = *param_1;
  if (lVar5 != 0) {
    puVar1 = (ulong *)(lVar5 + 0xb0);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 | 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 10) == 8) {
                    /* try { // try from 0074cfc8 to 0074d037 has its CatchHandler @ 0074d084 */
      (**(code **)(*(long *)(lVar5 + 0x90) + 0x10))(*(undefined8 *)(lVar5 + 0x98));
    }
    if (((uint)uVar6 >> 1 & 1) != 0) {
      uStack_a8 = *(undefined8 *)(lVar5 + 0x18);
      local_b0 = *(long *)(lVar5 + 0x10);
      uStack_98 = *(undefined8 *)(lVar5 + 0x28);
      uStack_a0 = *(undefined8 *)(lVar5 + 0x20);
      uStack_68 = *(undefined8 *)(lVar5 + 0x58);
      local_70 = *(undefined8 *)(lVar5 + 0x50);
      uStack_58 = *(undefined8 *)(lVar5 + 0x68);
      uStack_60 = *(undefined8 *)(lVar5 + 0x60);
      *(undefined8 *)(lVar5 + 0x10) = 0xfffffffffffffffe;
      pvStack_48 = *(void **)(lVar5 + 0x78);
      local_50 = *(long *)(lVar5 + 0x70);
      uStack_38 = *(undefined8 *)(lVar5 + 0x88);
      uStack_40 = *(undefined8 *)(lVar5 + 0x80);
      uStack_88 = *(undefined8 *)(lVar5 + 0x38);
      local_90 = *(undefined8 *)(lVar5 + 0x30);
      uStack_78 = *(undefined8 *)(lVar5 + 0x48);
      uStack_80 = *(undefined8 *)(lVar5 + 0x40);
      if (local_b0 != -2) {
        if (local_b0 == -1) {
          FUN_0074d924((ulong)&local_b0 | 8);
        }
        else {
          if (local_50 != 0) {
            free(pvStack_48);
          }
          FUN_0074db38(&local_b0);
        }
      }
    }
    plVar4 = (long *)*param_1;
    if (plVar4 != (long *)0x0) {
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
        <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<libdiscore_common::core::http::ParsedHttpResponse<alloc::string::String>,{backref_37}::HttpError>>>>
        ::drop_slow(param_1);
        return;
      }
    }
  }
  return;
}


// ===== 0074d0bc  FUN_0074d0bc =====

void FUN_0074d0bc(long *param_1)

{
  if (*param_1 == -2) {
    return;
  }
  if (*param_1 == -1) {
    FUN_0074d924(param_1 + 1);
    return;
  }
                    /* try { // try from 0074d0f8 to 0074d103 has its CatchHandler @ 0074d114 */
  FUN_00703fac(param_1 + 0xc);
  FUN_0074db38(param_1);
  return;
}


// ===== 0074d12c  thunk_FUN_0074d748 =====

void thunk_FUN_0074d748(long *param_1)

{
  void *pvVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined8 *puVar5;
  
  if (param_1[0x11] != 0) {
    free((void *)param_1[0x12]);
  }
  if ((9 < *(byte *)(param_1 + 0x17)) && (param_1[0x19] != 0)) {
    free((void *)param_1[0x18]);
  }
  if (*param_1 != 0) {
    if (param_1[1] == 0) {
      pvVar1 = (void *)param_1[2];
      puVar5 = (undefined8 *)param_1[3];
      pcVar3 = (code *)*puVar5;
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(pvVar1);
      }
      if (puVar5[1] != 0) {
        free(pvVar1);
      }
    }
    else {
      (**(code **)(param_1[1] + 0x20))(param_1 + 4,param_1[2],param_1[3]);
    }
  }
  lVar2 = param_1[0x14];
  if (lVar2 != -1) {
    lVar4 = param_1[0x16];
    if (lVar4 != 0) {
      puVar5 = (undefined8 *)(param_1[0x15] + 0x20);
      do {
        if (puVar5[-4] != 0) {
          free((void *)puVar5[-3]);
        }
        if (puVar5[-1] != 0) {
          free((void *)*puVar5);
        }
        lVar4 = lVar4 + -1;
        puVar5 = puVar5 + 6;
      } while (lVar4 != 0);
      lVar2 = param_1[0x14];
    }
    if (lVar2 != 0) {
      free((void *)param_1[0x15]);
    }
  }
  if (param_1[5] != -1) {
    FUN_0074db38();
  }
  pvVar1 = (void *)param_1[0x1a];
  puVar5 = (undefined8 *)param_1[0x1b];
  pcVar3 = (code *)*puVar5;
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(pvVar1);
  }
  if (puVar5[1] != 0) {
    free(pvVar1);
    return;
  }
  return;
}


// ===== 0074d130  FUN_0074d130 =====

void FUN_0074d130(long *param_1)

{
  void *__ptr;
  char cVar1;
  bool bVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  
  cVar1 = (char)param_1[0x37];
  if (cVar1 != '\0') {
    if (cVar1 == '\x03') {
                    /* try { // try from 0074d168 to 0074d16f has its CatchHandler @ 0074d3a4 */
      FUN_0074d51c(param_1 + 0x3a);
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
                    /* try { // try from 0074d15c to 0074d163 has its CatchHandler @ 0074d3a0 */
      FUN_0074cf7c(param_1 + 0x39);
    }
    if ((*(byte *)((long)param_1 + 0x1b9) & 1) != 0) {
                    /* try { // try from 0074d178 to 0074d17f has its CatchHandler @ 0074d398 */
      FUN_0074cf7c(param_1 + 0x39);
    }
    plVar3 = (long *)param_1[0x36];
    *(undefined1 *)((long)param_1 + 0x1bb) = 0;
    *(undefined2 *)((long)param_1 + 0x1b9) = 0;
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
                    /* try { // try from 0074d1ac to 0074d1b3 has its CatchHandler @ 0074d354 */
        <alloc::sync::[n]::alloc::sync::Arc<std::sync::poison::mutex::Mutex<core::option::Option<alloc::boxed::Box<dyn_Trait<Assoc=X>+{backref_26}::ops::function::Fn<(libdiscore_common::core::http::ProgressEvent)>+{backref_26}::marker::Sync+{backref_71}::Send>>>>>
        ::drop_slow(param_1 + 0x36);
      }
    }
    *(undefined1 *)(param_1 + 0x38) = 0;
    *(undefined4 *)((long)param_1 + 0x1bc) = 0;
    return;
  }
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
      pcVar4 = (code *)*puVar7;
      if (pcVar4 != (code *)0x0) {
                    /* try { // try from 0074d230 to 0074d237 has its CatchHandler @ 0074d318 */
        (*pcVar4)(__ptr);
      }
      if (puVar7[1] != 0) {
        free(__ptr);
      }
    }
    else {
                    /* try { // try from 0074d218 to 0074d21f has its CatchHandler @ 0074d338 */
      (**(code **)(param_1[1] + 0x20))(param_1 + 4,param_1[2],param_1[3]);
    }
  }
  if (param_1[5] != -1) {
                    /* try { // try from 0074d25c to 0074d25f has its CatchHandler @ 0074d35c */
    FUN_0074db38();
  }
  lVar5 = param_1[0x14];
  if (lVar5 != -1) {
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
      lVar5 = param_1[0x14];
    }
    if (lVar5 != 0) {
      free((void *)param_1[0x15]);
    }
  }
  plVar3 = (long *)param_1[0x1a];
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
      <alloc::sync::[n]::alloc::sync::Arc<std::sync::poison::mutex::Mutex<core::option::Option<alloc::boxed::Box<dyn_Trait<Assoc=X>+{backref_26}::ops::function::Fn<(libdiscore_common::core::http::ProgressEvent)>+{backref_26}::marker::Sync+{backref_71}::Send>>>>>
      ::drop_slow(param_1 + 0x1a);
      return;
    }
  }
  return;
}


// ===== 0074d400  FUN_0074d400 =====

void FUN_0074d400(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
                    /* try { // try from 0074d418 to 0074d43f has its CatchHandler @ 0074d47c */
    uVar3 = <tokio::sync::oneshot::[9]::tokio::sync::oneshot::State>::set_complete(plVar5 + 0x16);
    if ((uVar3 & 5) == 1) {
      (**(code **)(plVar5[0x14] + 0x10))(plVar5[0x15]);
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
      <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<libdiscore_common::core::http::ParsedHttpResponse<alloc::string::String>,{backref_37}::HttpError>>>>
      ::drop_slow(param_1);
      return;
    }
  }
  return;
}


// ===== 0074d4ac  FUN_0074d4ac =====

void FUN_0074d4ac(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x04') {
                    /* try { // try from 0074d4c4 to 0074d4cf has its CatchHandler @ 0074d4f8 */
    <tokio::sync::batch_semaphore::Acquire_as_core::ops::drop::Drop>::drop(param_1 + 0x28);
    if (*(long *)(param_1 + 0x30) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0074d4e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(param_1 + 0x30) + 0x18))(*(undefined8 *)(param_1 + 0x38));
      return;
    }
  }
  return;
}


// ===== 0074d51c  FUN_0074d51c =====

void FUN_0074d51c(long param_1)

{
  if (*(char *)(param_1 + 0x248) != '\0') {
    if (*(char *)(param_1 + 0x248) == '\x03') {
      if ((*(char *)(param_1 + 0x240) == '\x03') && (*(char *)(param_1 + 0x1f8) == '\x04')) {
                    /* try { // try from 0074d554 to 0074d55b has its CatchHandler @ 0074d5a0 */
        <tokio::sync::batch_semaphore::Acquire_as_core::ops::drop::Drop>::drop(param_1 + 0x200);
        if (*(long *)(param_1 + 0x208) != 0) {
                    /* try { // try from 0074d56c to 0074d56f has its CatchHandler @ 0074d598 */
          (**(code **)(*(long *)(param_1 + 0x208) + 0x18))(*(undefined8 *)(param_1 + 0x210));
        }
      }
                    /* try { // try from 0074d570 to 0074d577 has its CatchHandler @ 0074d5cc */
      FUN_0074d748(param_1 + 0xe8);
      *(undefined1 *)(param_1 + 0x249) = 0;
    }
    return;
  }
  FUN_0074d748(param_1);
  return;
}


// ===== 0074d5dc  FUN_0074d5dc =====

void FUN_0074d5dc(long param_1)

{
  if ((*(char *)(param_1 + 0x78) == '\x03') && (*(char *)(param_1 + 0x30) == '\x04')) {
                    /* try { // try from 0074d600 to 0074d60b has its CatchHandler @ 0074d634 */
    <tokio::sync::batch_semaphore::Acquire_as_core::ops::drop::Drop>::drop(param_1 + 0x38);
    if (*(long *)(param_1 + 0x40) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0074d624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(param_1 + 0x40) + 0x18))(*(undefined8 *)(param_1 + 0x48));
      return;
    }
  }
  return;
}


// ===== 0074d658  FUN_0074d658 =====

void FUN_0074d658(long *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  void *__ptr;
  
  __ptr = (void *)param_1[0xb];
  if (__ptr != (void *)0x0) {
    puVar2 = (undefined8 *)param_1[0xc];
    pcVar1 = (code *)*puVar2;
    if (pcVar1 != (code *)0x0) {
                    /* try { // try from 0074d680 to 0074d687 has its CatchHandler @ 0074d6d4 */
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


// ===== 0074d724  FUN_0074d724 =====

void FUN_0074d724(byte *param_1)

{
  if ((9 < *param_1) && (*(long *)(param_1 + 0x10) != 0)) {
    free(*(void **)(param_1 + 8));
    return;
  }
  return;
}


// ===== 0074d748  FUN_0074d748 =====

void FUN_0074d748(long *param_1)

{
  void *pvVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined8 *puVar5;
  
  if (param_1[0x11] != 0) {
    free((void *)param_1[0x12]);
  }
  if ((9 < *(byte *)(param_1 + 0x17)) && (param_1[0x19] != 0)) {
    free((void *)param_1[0x18]);
  }
  if (*param_1 != 0) {
    if (param_1[1] == 0) {
      pvVar1 = (void *)param_1[2];
      puVar5 = (undefined8 *)param_1[3];
      pcVar3 = (code *)*puVar5;
      if (pcVar3 != (code *)0x0) {
                    /* try { // try from 0074d7c0 to 0074d7c7 has its CatchHandler @ 0074d8a8 */
        (*pcVar3)(pvVar1);
      }
      if (puVar5[1] != 0) {
        free(pvVar1);
      }
    }
    else {
                    /* try { // try from 0074d7a8 to 0074d7af has its CatchHandler @ 0074d8c8 */
      (**(code **)(param_1[1] + 0x20))(param_1 + 4,param_1[2],param_1[3]);
    }
  }
  lVar2 = param_1[0x14];
  if (lVar2 != -1) {
    lVar4 = param_1[0x16];
    if (lVar4 != 0) {
      puVar5 = (undefined8 *)(param_1[0x15] + 0x20);
      do {
        if (puVar5[-4] != 0) {
          free((void *)puVar5[-3]);
        }
        if (puVar5[-1] != 0) {
          free((void *)*puVar5);
        }
        lVar4 = lVar4 + -1;
        puVar5 = puVar5 + 6;
      } while (lVar4 != 0);
      lVar2 = param_1[0x14];
    }
    if (lVar2 != 0) {
      free((void *)param_1[0x15]);
    }
  }
  if (param_1[5] != -1) {
                    /* try { // try from 0074d860 to 0074d863 has its CatchHandler @ 0074d90c */
    FUN_0074db38();
  }
  pvVar1 = (void *)param_1[0x1a];
  puVar5 = (undefined8 *)param_1[0x1b];
  pcVar3 = (code *)*puVar5;
  if (pcVar3 != (code *)0x0) {
                    /* try { // try from 0074d870 to 0074d877 has its CatchHandler @ 0074d8ec */
    (*pcVar3)(pvVar1);
  }
  if (puVar5[1] != 0) {
    free(pvVar1);
    return;
  }
  return;
}


// ===== 0074d924  FUN_0074d924 =====

void FUN_0074d924(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long *__ptr;
  long local_28;
  
  uVar1 = *param_1;
  uVar2 = uVar1 ^ 0x8000000000000000;
  if (-1 < (long)uVar1) {
    uVar2 = 2;
  }
  if ((long)uVar2 < 2) {
    if (uVar2 == 0) {
      FUN_0074d658(param_1[1]);
      return;
    }
    if (uVar2 == 1) {
      __ptr = (long *)param_1[1];
      if (*__ptr == 1) {
        uVar2 = __ptr[1] & 3;
        if ((1 < uVar2 - 2) && (uVar2 != 0)) {
          local_28 = __ptr[1] - 1;
                    /* try { // try from 0074da38 to 0074da3f has its CatchHandler @ 0074da60 */
          <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
        }
      }
      else if ((*__ptr == 0) && (__ptr[2] != 0)) {
        free((void *)__ptr[1]);
      }
      free(__ptr);
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
      local_28 = param_1[1] - 1;
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
    }
  }
  return;
}


// ===== 0074da7c  FUN_0074da7c =====

void FUN_0074da7c(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)(param_1 + 0x110);
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
                    /* try { // try from 0074daa8 to 0074daaf has its CatchHandler @ 0074dac0 */
    <alloc::sync::[n]::alloc::sync::Arc<reqwest::async_impl::client::ClientRef>>::drop_slow
              (param_1 + 0x110);
  }
  FUN_0074c814(param_1);
  return;
}


// ===== 0074dad8  FUN_0074dad8 =====

void FUN_0074dad8(long param_1)

{
                    /* try { // try from 0074dae8 to 0074daeb has its CatchHandler @ 0074db14 */
  <tokio::sync::batch_semaphore::Acquire_as_core::ops::drop::Drop>::drop();
  if (*(long *)(param_1 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0074db04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 8) + 0x18))(*(undefined8 *)(param_1 + 0x10));
    return;
  }
  return;
}


// ===== 0074db38  FUN_0074db38 =====

void FUN_0074db38(long param_1)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    free(*(void **)(param_1 + 0x48));
  }
                    /* try { // try from 0074db68 to 0074db6f has its CatchHandler @ 0074dbfc */
  FUN_00766164(param_1 + 0x18);
  if (*(long *)(param_1 + 0x18) != 0) {
    free(*(void **)(param_1 + 0x20));
  }
  __ptr = *(void **)(param_1 + 0x38);
  lVar2 = *(long *)(param_1 + 0x40) + 1;
  lVar1 = (long)__ptr + 0x38;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 0074dbb0 to 0074dbb3 has its CatchHandler @ 0074dc2c */
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


// ===== 0074dc80  FUN_0074dc80 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_0074dc80(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined8 local_280;
  undefined8 uStack_278;
  long local_200;
  undefined8 uStack_1f8;
  undefined8 local_180;
  undefined8 local_170;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long local_e0;
  long lStack_d8;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  local_200 = FUN_004b25a4(0x1c20,8);
  if (local_200 == 0) {
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x1c20);
  }
  uStack_b8 = param_1[1];
  local_c0 = *param_1;
  uStack_a8 = param_1[3];
  uStack_b0 = param_1[2];
  uStack_1f8 = 0;
  *(undefined8 *)(local_200 + 0x1c18) = 0;
  *(undefined8 *)(local_200 + 0x1c10) = 0;
  *(undefined8 *)(local_200 + 0x1c08) = 0;
  *(undefined8 *)(local_200 + 0x1c00) = 0;
  uStack_278 = 1;
  local_280 = 1;
  uStack_98 = param_1[5];
  local_a0 = param_1[4];
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  local_d0 = 0;
  local_180 = 0;
  local_170 = 0;
  local_c8 = 0;
  uStack_88 = _UNK_002a02b8;
  uStack_90 = _DAT_002a02b0;
  local_e0 = local_200;
  lStack_d8 = local_200;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  auVar5._0_8_ = (long *)FUN_004b25a4(0x200,0x80);
  if (auVar5._0_8_ != (long *)0x0) {
    memcpy(auVar5._0_8_,&local_280,0x200);
    do {
      lVar4 = *auVar5._0_8_;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(auVar5._0_8_,0x10);
      if (bVar2) {
        *auVar5._0_8_ = lVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (-1 < lVar4) {
      auVar5._8_8_ = auVar5._0_8_;
      return auVar5;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x74dd64);
    (*pcVar3)();
  }
                    /* try { // try from 0074dd54 to 0074dd5f has its CatchHandler @ 0074dd64 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(0x80,0x200);
}


// ===== 0074dd7c  FUN_0074dd7c =====

void FUN_0074dd7c(undefined8 *param_1,long *param_2)

{
  undefined2 uVar1;
  undefined1 *__dest;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 **ppuVar6;
  void *__src;
  undefined1 *__n;
  undefined1 *local_220;
  long local_210;
  undefined1 *local_208;
  undefined1 *puStack_200;
  undefined1 *puStack_1f8;
  undefined1 *puStack_1f0;
  undefined1 *local_1e8;
  long local_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long local_1c0;
  long lStack_1b8;
  undefined1 *puStack_1b0;
  undefined1 *puStack_1a8;
  undefined1 *local_1a0;
  undefined2 local_198;
  long local_190;
  void *pvStack_188;
  undefined1 *puStack_180;
  long local_178;
  long lStack_170;
  long local_168;
  long local_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long local_140;
  long lStack_138;
  undefined2 *local_130;
  void *local_128;
  undefined2 local_104 [2];
  long local_100;
  long local_f8;
  long lStack_f0;
  long local_e8;
  long lStack_e0;
  long local_d8;
  long local_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long local_b0;
  long lStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  
  lVar5 = *param_2;
  uVar2 = *param_1;
  uVar1 = (undefined2)param_2[0x10];
  if (lVar5 == -1) {
    puStack_200 = (undefined1 *)param_2[2];
    local_208 = (undefined1 *)param_2[1];
    puStack_1f0 = (undefined1 *)param_2[4];
    puStack_1f8 = (undefined1 *)param_2[3];
    local_1e8 = (undefined1 *)param_2[5];
    local_210 = -1;
  }
  else {
    lStack_f0 = param_2[2];
    local_f8 = param_2[1];
    lStack_e0 = param_2[4];
    local_e8 = param_2[3];
    local_d8 = param_2[5];
    lStack_c8 = param_2[7];
    local_d0 = param_2[6];
    lStack_b8 = param_2[9];
    lStack_c0 = param_2[8];
    __src = (void *)param_2[0xd];
    local_190 = param_2[0xc];
    local_178 = param_2[0xf];
    __n = (undefined1 *)param_2[0xe];
    lStack_a8 = param_2[0xb];
    local_b0 = param_2[10];
    pvStack_188 = __src;
    puStack_180 = __n;
    local_104[0] = uVar1;
    local_100 = lVar5;
    if ((long)__n < 0) {
      uVar3 = 0;
LAB_0074de00:
                    /* try { // try from 0074de00 to 0074de0b has its CatchHandler @ 0074e01c */
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(uVar3,__n);
    }
    if (__n == (undefined1 *)0x0) {
      __dest = &DAT_00000001;
      puStack_78 = (undefined1 *)0x0;
      local_88 = (undefined1 *)0x0;
      local_80 = &DAT_00000001;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar3 = 1;
      __dest = (undefined1 *)FUN_004b25a4(__n,1);
      if (__dest == (undefined1 *)0x0) goto LAB_0074de00;
      local_88 = __n;
      local_80 = __dest;
      memcpy(__dest,__src,(size_t)__n);
      puStack_78 = __n;
    }
                    /* try { // try from 0074de88 to 0074de97 has its CatchHandler @ 0074e000 */
    ppuVar6 = &local_80;
    core::str::converts::from_utf8(&local_210,__dest,__n);
    if (((uint)local_210 & 1) == 0) {
      puVar4 = (undefined1 *)0xffffffffffffffff;
      ppuVar6 = &local_88;
      local_220 = __n;
    }
    else {
      local_220 = local_208;
      __dest = puStack_200;
      puVar4 = __n;
    }
    puStack_98 = ppuVar6[1];
    local_a0 = *ppuVar6;
                    /* try { // try from 0074ded0 to 0074dedf has its CatchHandler @ 0074dff8 */
    (**(code **)(local_190 + 0x20))(&local_178,__src,__n);
    puStack_180 = (undefined1 *)param_2[2];
    pvStack_188 = (void *)param_2[1];
    lStack_170 = param_2[4];
    local_178 = param_2[3];
    local_130 = local_104;
    local_168 = param_2[5];
    lStack_158 = param_2[7];
    local_160 = param_2[6];
    lStack_148 = param_2[9];
    lStack_150 = param_2[8];
    lStack_138 = param_2[0xb];
    local_140 = param_2[10];
    local_190 = lVar5;
    if (puVar4 == (undefined1 *)0xffffffffffffffff) {
      puStack_200 = (undefined1 *)param_2[2];
      local_208 = (undefined1 *)param_2[1];
      local_1e8 = (undefined1 *)param_2[5];
      puStack_1f0 = (undefined1 *)param_2[4];
      puStack_1f8 = (undefined1 *)param_2[3];
      lStack_1d8 = param_2[7];
      local_1e0 = param_2[6];
      lStack_1c8 = param_2[9];
      lStack_1d0 = param_2[8];
      lStack_1b8 = param_2[0xb];
      local_1c0 = param_2[10];
      local_1a0 = local_220;
      puStack_1a8 = puStack_98;
      puStack_1b0 = local_a0;
      local_210 = lVar5;
      local_198 = uVar1;
    }
    else {
      puStack_1f0 = local_220;
      puStack_1f8 = puStack_98;
      puStack_200 = local_a0;
      local_210 = -1;
                    /* try { // try from 0074df34 to 0074df3b has its CatchHandler @ 0074dff0 */
      local_208 = puVar4;
      local_1e8 = __dest;
      FUN_0074db38(&local_190);
    }
  }
  FUN_0074f270(&local_190,uVar2,&local_210);
  if (local_190 != -2) {
    if (local_190 == -1) {
      FUN_0074d924(&pvStack_188);
    }
    else {
      if (local_130 != (undefined2 *)0x0) {
        free(local_128);
      }
      FUN_0074db38(&local_190);
    }
  }
  return;
}


// ===== 0074e060  FUN_0074e060 =====

void FUN_0074e060(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long local_110 [28];
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  while( true ) {
    FUN_0073a38c(local_110,uVar1,uVar2);
    if ((local_110[0] == 2) || (local_110[0] == -1)) break;
                    /* try { // try from 0074e0a0 to 0074e0a7 has its CatchHandler @ 0074e0dc */
    <tokio::sync::mpsc::bounded::Semaphore_as_tokio::sync::mpsc::chan::Semaphore>::add_permit(uVar3)
    ;
    if ((local_110[0] != -1) && (local_110[0] != 2)) {
      FUN_0074d748(local_110);
    }
  }
  return;
}


// ===== 0074e108  FUN_0074e108 =====

void FUN_0074e108(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lStack_c8;
  long local_c0;
  long lStack_b8;
  long local_b0;
  long local_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  long lStack_70;
  long local_68;
  long lStack_60;
  long local_58;
  long lStack_50;
  long local_48;
  long lStack_40;
  long local_38;
  long lStack_30;
  long local_28;
  
  plVar4 = param_2 + 1;
  local_80 = *param_2;
  if (local_80 == -1) {
    lStack_c8 = param_2[4];
    if (param_2[3] != 0) {
      lStack_78 = param_2[2];
      local_80 = *plVar4;
      local_68 = param_2[4];
      lStack_70 = param_2[3];
      uVar3 = param_1[0xc];
      uVar2 = param_1[0xf];
      if (uVar2 == uVar3) {
                    /* try { // try from 0074e1c4 to 0074e1c7 has its CatchHandler @ 0074e26c */
        <alloc::collections::vec_deque::[4]::alloc::collections::vec_deque::VecDeque<bytes::bytes::Bytes>>
        ::grow();
        uVar2 = param_1[0xf];
        uVar3 = param_1[0xc];
      }
      lVar6 = param_2[2];
      lVar5 = *plVar4;
      lVar8 = param_2[4];
      lVar7 = param_2[3];
      param_1[0xf] = uVar2 + 1;
      uVar1 = 0;
      if (uVar3 <= param_1[0xe] + uVar2) {
        uVar1 = uVar3;
      }
      plVar4 = (long *)(param_1[0xd] + ((param_1[0xe] + uVar2) - uVar1) * 0x20);
      plVar4[1] = lVar6;
      *plVar4 = lVar5;
      plVar4[3] = lVar8;
      plVar4[2] = lVar7;
      return;
    }
    (**(code **)(*plVar4 + 0x20))(&lStack_c8,param_2[2],0);
    return;
  }
  lStack_98 = param_2[2];
  local_a0 = *plVar4;
  lStack_88 = param_2[4];
  lStack_90 = param_2[3];
  lStack_50 = param_2[6];
  local_58 = param_2[5];
  lStack_c8 = param_2[8];
  local_48 = param_2[7];
  lStack_b8 = param_2[10];
  local_c0 = param_2[9];
  local_b0 = param_2[0xb];
  if (*param_1 != -1) {
    lStack_78 = local_a0;
    lStack_70 = lStack_98;
    local_68 = lStack_90;
    lStack_60 = lStack_88;
    lStack_40 = lStack_c8;
    local_38 = local_c0;
    lStack_30 = lStack_b8;
    local_28 = local_b0;
    FUN_0076326c(param_1,&local_80);
    return;
  }
  *param_1 = local_80;
  param_1[2] = lStack_98;
  param_1[1] = local_a0;
  param_1[4] = lStack_88;
  param_1[3] = lStack_90;
  param_1[0xb] = local_b0;
  param_1[6] = lStack_50;
  param_1[5] = local_58;
  param_1[8] = lStack_c8;
  param_1[7] = local_48;
  param_1[10] = lStack_b8;
  param_1[9] = local_c0;
  return;
}


// ===== 0074e294  FUN_0074e294 =====

void FUN_0074e294(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  void *__src;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  ulong *puVar19;
  undefined1 *__src_00;
  undefined8 uVar20;
  ulong *puVar21;
  ulong *puVar22;
  long lVar23;
  long lVar24;
  long local_e0;
  long local_d8;
  ulong *local_d0;
  ulong local_c8;
  long local_c0;
  long lStack_b8;
  long local_b0;
  undefined8 local_a8;
  long lStack_a0;
  ulong local_98;
  undefined8 uStack_90;
  ulong local_88;
  ulong *local_80;
  code *pcStack_78;
  ulong *local_70;
  code *pcStack_68;
  ulong local_48;
  
  uVar6 = *(ulong *)(param_2 + 0x78);
  if (uVar6 == 0) {
    puVar21 = (ulong *)0x0;
    puVar19 = (ulong *)0x0;
LAB_0074e320:
    local_e0 = 1;
  }
  else {
    uVar9 = *(ulong *)(param_2 + 0x60);
    puVar19 = (ulong *)0x0;
    lVar12 = *(long *)(param_2 + 0x68);
    uVar14 = *(ulong *)(param_2 + 0x70);
    uVar7 = 0;
    if (uVar9 <= uVar14) {
      uVar7 = uVar9;
    }
    lVar16 = uVar14 - uVar7;
    lVar15 = uVar6 - (uVar9 - lVar16);
    uVar11 = lVar15 * 0x20;
    uVar4 = uVar9;
    if (uVar6 < uVar9 - lVar16 || lVar15 == 0) {
      uVar11 = 0;
      uVar4 = lVar16 + uVar6;
    }
    uVar4 = uVar4 - lVar16;
    if (uVar4 != 0) {
      if (uVar4 < 5) {
        lVar17 = 0;
        puVar19 = (ulong *)0x0;
      }
      else {
        lVar15 = 0;
        lVar16 = 0;
        lVar10 = 0;
        lVar23 = 0;
        uVar3 = 4;
        if ((uVar4 & 3) != 0) {
          uVar3 = uVar4 & 3;
        }
        lVar17 = uVar4 - uVar3;
        plVar8 = (long *)(lVar12 + uVar7 * -0x20 + uVar14 * 0x20 + 0x50);
        lVar13 = lVar17;
        do {
          plVar1 = plVar8 + -8;
          lVar24 = *plVar8;
          plVar18 = plVar8 + -4;
          plVar2 = plVar8 + 4;
          lVar13 = lVar13 + -4;
          plVar8 = plVar8 + 0x10;
          lVar15 = *plVar1 + lVar15;
          lVar16 = *plVar18 + lVar16;
          lVar10 = lVar24 + lVar10;
          lVar23 = *plVar2 + lVar23;
        } while (lVar13 != 0);
        puVar19 = (ulong *)(lVar10 + lVar15 + lVar23 + lVar16);
      }
      lVar15 = uVar4 - lVar17;
      plVar8 = (long *)(lVar12 + lVar17 * 0x20 + uVar14 * 0x20 + uVar7 * -0x20 + 0x10);
      do {
        lVar15 = lVar15 + -1;
        puVar19 = (ulong *)(*plVar8 + (long)puVar19);
        plVar8 = plVar8 + 4;
      } while (lVar15 != 0);
    }
    if (uVar11 != 0) {
      if (uVar11 < 0xa0) {
        lVar13 = 0;
      }
      else {
        lVar15 = 0;
        lVar16 = 0;
        lVar10 = 0;
        uVar7 = uVar11 >> 5 & 3;
        uVar14 = 4;
        if (uVar7 != 0) {
          uVar14 = uVar7;
        }
        plVar8 = (long *)(lVar12 + 0x50);
        lVar13 = (uVar11 >> 5) - uVar14;
        lVar23 = lVar13;
        do {
          plVar1 = plVar8 + -8;
          lVar17 = *plVar8;
          plVar18 = plVar8 + -4;
          plVar2 = plVar8 + 4;
          lVar23 = lVar23 + -4;
          plVar8 = plVar8 + 0x10;
          puVar19 = (ulong *)(*plVar1 + (long)puVar19);
          lVar15 = *plVar18 + lVar15;
          lVar16 = lVar17 + lVar16;
          lVar10 = *plVar2 + lVar10;
        } while (lVar23 != 0);
        puVar19 = (ulong *)((long)puVar19 + lVar10 + lVar15 + lVar16);
      }
      lVar15 = (uVar11 >> 5) - lVar13;
      plVar8 = (long *)(lVar12 + lVar13 * 0x20 + 0x10);
      do {
        lVar15 = lVar15 + -1;
        puVar19 = (ulong *)(*plVar8 + (long)puVar19);
        plVar8 = plVar8 + 4;
      } while (lVar15 != 0);
    }
    uVar7 = 0;
    if (uVar9 <= *(ulong *)(param_2 + 0x70)) {
      uVar7 = uVar9;
    }
    lVar15 = lVar12 + (*(ulong *)(param_2 + 0x70) - uVar7) * 0x20;
    if (*(ulong **)(lVar15 + 0x10) == puVar19) {
      <bytes::bytes::Bytes_as_bytes::buf::buf_impl::Buf>::copy_to_bytes(&local_a8,lVar15,puVar19);
      if (*(long *)(param_2 + 0x78) != 0) {
        uVar6 = *(long *)(param_2 + 0x70) + 1;
        plVar8 = (long *)(*(long *)(param_2 + 0x68) + *(long *)(param_2 + 0x70) * 0x20);
        uVar7 = 0;
        if (*(ulong *)(param_2 + 0x60) <= uVar6) {
          uVar7 = *(ulong *)(param_2 + 0x60);
        }
        *(ulong *)(param_2 + 0x70) = uVar6 - uVar7;
        *(long *)(param_2 + 0x78) = *(long *)(param_2 + 0x78) + -1;
        pcStack_78 = (code *)plVar8[1];
        local_80 = (ulong *)*plVar8;
        pcStack_68 = (code *)plVar8[3];
        local_70 = (ulong *)plVar8[2];
        if (local_80 != (ulong *)0x0) {
                    /* try { // try from 0074e9b8 to 0074e9bf has its CatchHandler @ 0074ec38 */
          (*(code *)local_80[4])(&pcStack_68,pcStack_78,local_70);
        }
      }
      param_1[1] = lStack_a0;
      *param_1 = local_a8;
      param_1[3] = uStack_90;
      param_1[2] = local_98;
      goto LAB_0074e9e0;
    }
    if (puVar19 < *(ulong **)(lVar15 + 0x10)) {
                    /* try { // try from 0074e9d4 to 0074e9df has its CatchHandler @ 0074eca0 */
      <bytes::bytes::Bytes_as_bytes::buf::buf_impl::Buf>::copy_to_bytes(param_1,lVar15,puVar19);
      goto LAB_0074e9e0;
    }
    uVar14 = *(ulong *)(param_2 + 0x70);
    puVar21 = (ulong *)0x0;
    uVar7 = 0;
    if (uVar9 <= uVar14) {
      uVar7 = uVar9;
    }
    lVar16 = uVar14 - uVar7;
    lVar15 = uVar6 - (uVar9 - lVar16);
    uVar11 = lVar15 * 0x20;
    if (uVar6 < uVar9 - lVar16 || lVar15 == 0) {
      uVar11 = 0;
      uVar9 = lVar16 + uVar6;
    }
    uVar9 = uVar9 - lVar16;
    if (uVar9 != 0) {
      if (uVar9 < 5) {
        lVar17 = 0;
        puVar21 = (ulong *)0x0;
      }
      else {
        lVar15 = 0;
        lVar16 = 0;
        lVar10 = 0;
        lVar23 = 0;
        uVar6 = 4;
        if ((uVar9 & 3) != 0) {
          uVar6 = uVar9 & 3;
        }
        lVar17 = uVar9 - uVar6;
        plVar8 = (long *)(lVar12 + uVar7 * -0x20 + uVar14 * 0x20 + 0x50);
        lVar13 = lVar17;
        do {
          plVar1 = plVar8 + -8;
          lVar24 = *plVar8;
          plVar18 = plVar8 + -4;
          plVar2 = plVar8 + 4;
          lVar13 = lVar13 + -4;
          plVar8 = plVar8 + 0x10;
          lVar15 = *plVar1 + lVar15;
          lVar16 = *plVar18 + lVar16;
          lVar10 = lVar24 + lVar10;
          lVar23 = *plVar2 + lVar23;
        } while (lVar13 != 0);
        puVar21 = (ulong *)(lVar10 + lVar15 + lVar23 + lVar16);
      }
      lVar15 = uVar9 - lVar17;
      plVar8 = (long *)(lVar12 + lVar17 * 0x20 + uVar14 * 0x20 + uVar7 * -0x20 + 0x10);
      do {
        lVar15 = lVar15 + -1;
        puVar21 = (ulong *)(*plVar8 + (long)puVar21);
        plVar8 = plVar8 + 4;
      } while (lVar15 != 0);
    }
    if (uVar11 != 0) {
      if (uVar11 < 0xa0) {
        lVar13 = 0;
      }
      else {
        lVar15 = 0;
        lVar16 = 0;
        lVar10 = 0;
        uVar6 = uVar11 >> 5 & 3;
        uVar7 = 4;
        if (uVar6 != 0) {
          uVar7 = uVar6;
        }
        plVar8 = (long *)(lVar12 + 0x50);
        lVar13 = (uVar11 >> 5) - uVar7;
        lVar23 = lVar13;
        do {
          plVar1 = plVar8 + -8;
          lVar17 = *plVar8;
          plVar18 = plVar8 + -4;
          plVar2 = plVar8 + 4;
          lVar23 = lVar23 + -4;
          plVar8 = plVar8 + 0x10;
          puVar21 = (ulong *)(*plVar1 + (long)puVar21);
          lVar15 = *plVar18 + lVar15;
          lVar16 = lVar17 + lVar16;
          lVar10 = *plVar2 + lVar10;
        } while (lVar23 != 0);
        puVar21 = (ulong *)((long)puVar21 + lVar10 + lVar15 + lVar16);
      }
      lVar15 = (uVar11 >> 5) - lVar13;
      plVar8 = (long *)(lVar12 + lVar13 * 0x20 + 0x10);
      do {
        lVar15 = lVar15 + -1;
        puVar21 = (ulong *)(*plVar8 + (long)puVar21);
        plVar8 = plVar8 + 4;
      } while (lVar15 != 0);
    }
    if (puVar21 < puVar19) {
                    /* try { // try from 0074ebb0 to 0074ebc7 has its CatchHandler @ 0074eca0 */
                    /* WARNING: Subroutine does not return */
      std::panicking::begin_panic<&str>
                ("`len` greater than remaining",0x1c,
                 &PTR_s__root__cargo_registry_src_index__00ad79c0);
    }
    if ((long)puVar19 < 0) {
      uVar20 = 0;
LAB_0074eb7c:
                    /* try { // try from 0074eb7c to 0074eb87 has its CatchHandler @ 0074eca0 */
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(uVar20,puVar19);
    }
    if (puVar19 == (ulong *)0x0) goto LAB_0074e320;
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar20 = 1;
    local_e0 = FUN_004b25a4(puVar19,1);
    if (local_e0 == 0) goto LAB_0074eb7c;
  }
  local_d8 = 0;
  uVar6 = 0x40 - LZCOUNT((ulong)puVar19 >> 10);
  if (6 < uVar6) {
    uVar6 = 7;
  }
  local_c8 = uVar6 << 2 | 1;
  local_d0 = puVar19;
  if (puVar21 == puVar19) {
LAB_0074e35c:
    uVar7 = *(ulong *)(param_2 + 0x78);
    uVar6 = *(ulong *)(param_2 + 0x60);
    if (uVar7 == 0) {
      lVar15 = 0;
      lVar12 = 0;
      uVar14 = 0;
    }
    else {
      uVar14 = 0;
      if (uVar6 <= *(ulong *)(param_2 + 0x70)) {
        uVar14 = uVar6;
      }
      lVar15 = *(ulong *)(param_2 + 0x70) - uVar14;
      lVar12 = uVar7 - (uVar6 - lVar15);
      uVar14 = uVar6;
      if (uVar7 < uVar6 - lVar15 || lVar12 == 0) {
        lVar12 = 0;
        uVar14 = lVar15 + uVar7;
      }
    }
    lVar10 = *(long *)(param_2 + 0x68);
    lVar16 = lVar10 + lVar15 * 0x20;
    lVar15 = uVar14 * 0x20 + lVar15 * -0x20;
    do {
      if (lVar15 == 0) {
        lVar12 = lVar12 << 5;
        lVar15 = lVar10;
        goto LAB_0074e3d8;
      }
      plVar8 = (long *)(lVar16 + 0x10);
      lVar16 = lVar16 + 0x20;
      lVar15 = lVar15 + -0x20;
    } while (*plVar8 == 0);
    goto LAB_0074e3ec;
  }
  uVar6 = *(ulong *)(param_2 + 0x78);
  while (uVar6 != 0) {
    lVar12 = *(long *)(param_2 + 0x68);
    uVar14 = *(ulong *)(param_2 + 0x70);
    uVar9 = *(ulong *)(param_2 + 0x60);
    uVar7 = 0;
    if (uVar9 <= uVar14) {
      uVar7 = uVar9;
    }
    lVar16 = uVar14 - uVar7;
    lVar15 = uVar6 - (uVar9 - lVar16);
    uVar11 = lVar15 * 0x20;
    uVar4 = uVar9;
    if (uVar6 < uVar9 - lVar16 || lVar15 == 0) {
      uVar11 = 0;
      uVar4 = lVar16 + uVar6;
    }
    uVar4 = uVar4 - lVar16;
    puVar21 = (ulong *)0x0;
    if (uVar4 != 0) {
      if (uVar4 < 5) {
        lVar17 = 0;
        puVar21 = (ulong *)0x0;
      }
      else {
        lVar15 = 0;
        lVar10 = 0;
        lVar23 = 0;
        lVar13 = 0;
        uVar6 = 4;
        if ((uVar4 & 3) != 0) {
          uVar6 = uVar4 & 3;
        }
        lVar17 = uVar4 - uVar6;
        plVar8 = (long *)(lVar12 + lVar16 * 0x20 + 0x50);
        lVar16 = lVar17;
        do {
          plVar1 = plVar8 + -8;
          lVar24 = *plVar8;
          plVar18 = plVar8 + -4;
          plVar2 = plVar8 + 4;
          lVar16 = lVar16 + -4;
          plVar8 = plVar8 + 0x10;
          lVar15 = *plVar1 + lVar15;
          lVar10 = *plVar18 + lVar10;
          lVar23 = lVar24 + lVar23;
          lVar13 = *plVar2 + lVar13;
        } while (lVar16 != 0);
        puVar21 = (ulong *)(lVar23 + lVar15 + lVar13 + lVar10);
      }
      lVar15 = uVar4 - lVar17;
      plVar8 = (long *)(lVar12 + lVar17 * 0x20 + uVar14 * 0x20 + uVar7 * -0x20 + 0x10);
      do {
        lVar15 = lVar15 + -1;
        puVar21 = (ulong *)(*plVar8 + (long)puVar21);
        plVar8 = plVar8 + 4;
      } while (lVar15 != 0);
    }
    if (uVar11 != 0) {
      if (uVar11 < 0xa0) {
        lVar13 = 0;
      }
      else {
        lVar15 = 0;
        uVar6 = uVar11 >> 5 & 3;
        lVar16 = 0;
        lVar10 = 0;
        uVar7 = 4;
        if (uVar6 != 0) {
          uVar7 = uVar6;
        }
        lVar13 = (uVar11 >> 5) - uVar7;
        plVar8 = (long *)(lVar12 + 0x50);
        lVar23 = lVar13;
        do {
          plVar1 = plVar8 + -8;
          lVar17 = *plVar8;
          plVar18 = plVar8 + -4;
          plVar2 = plVar8 + 4;
          lVar23 = lVar23 + -4;
          plVar8 = plVar8 + 0x10;
          puVar21 = (ulong *)(*plVar1 + (long)puVar21);
          lVar15 = *plVar18 + lVar15;
          lVar16 = lVar17 + lVar16;
          lVar10 = *plVar2 + lVar10;
        } while (lVar23 != 0);
        puVar21 = (ulong *)((long)puVar21 + lVar10 + lVar15 + lVar16);
      }
      lVar15 = (uVar11 >> 5) - lVar13;
      plVar8 = (long *)(lVar12 + lVar13 * 0x20 + 0x10);
      do {
        lVar15 = lVar15 + -1;
        puVar21 = (ulong *)(*plVar8 + (long)puVar21);
        plVar8 = plVar8 + 4;
      } while (lVar15 != 0);
    }
    puVar5 = puVar19;
    if (puVar21 <= puVar19) {
      puVar5 = puVar21;
    }
    if (puVar5 == (ulong *)0x0) break;
    uVar6 = 0;
    if (uVar9 <= *(ulong *)(param_2 + 0x70)) {
      uVar6 = uVar9;
    }
    lVar12 = lVar12 + (*(ulong *)(param_2 + 0x70) - uVar6) * 0x20;
    __src = *(void **)(lVar12 + 8);
    puVar5 = *(ulong **)(lVar12 + 0x10);
    puVar21 = puVar19;
    if (puVar5 <= puVar19) {
      puVar21 = puVar5;
    }
    if ((ulong *)((long)local_d0 - local_d8) < puVar21) {
                    /* try { // try from 0074e6d8 to 0074e6e7 has its CatchHandler @ 0074ec5c */
      <bytes::bytes_mut::bytes::bytes_mut::BytesMut>::reserve_inner(&local_e0,puVar21,1);
    }
    memcpy((void *)(local_e0 + local_d8),__src,(size_t)puVar21);
    puVar5 = (ulong *)((long)local_d0 - local_d8);
    if (puVar5 < puVar21) {
LAB_0074ebd0:
      local_80 = puVar21;
      pcStack_78 = (code *)puVar5;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0074ebd8 to 0074ebdb has its CatchHandler @ 0074ec8c */
      bytes::panic_advance();
    }
    local_d8 = local_d8 + (long)puVar21;
    for (puVar5 = puVar21; puVar5 != (ulong *)0x0; puVar5 = (ulong *)((long)puVar5 - (long)puVar22))
    {
      if (*(long *)(param_2 + 0x78) == 0) {
LAB_0074eb8c:
                    /* try { // try from 0074eb8c to 0074eba3 has its CatchHandler @ 0074ec8c */
                    /* WARNING: Subroutine does not return */
        core::option::expect_failed
                  ("out of bounds access",0x14,&PTR_s__root__cargo_registry_src_index__00ad79d8);
      }
      uVar6 = 0;
      if (*(ulong *)(param_2 + 0x60) <= *(ulong *)(param_2 + 0x70)) {
        uVar6 = *(ulong *)(param_2 + 0x60);
      }
      lVar12 = *(long *)(param_2 + 0x68) + (*(ulong *)(param_2 + 0x70) - uVar6) * 0x20;
      puVar22 = *(ulong **)(lVar12 + 0x10);
      if (puVar5 <= puVar22 && (long)puVar22 - (long)puVar5 != 0) {
        *(long *)(lVar12 + 8) = *(long *)(lVar12 + 8) + (long)puVar5;
        *(long *)(lVar12 + 0x10) = (long)puVar22 - (long)puVar5;
        break;
      }
      *(long *)(lVar12 + 8) = *(long *)(lVar12 + 8) + (long)puVar22;
      *(undefined8 *)(lVar12 + 0x10) = 0;
      if (*(long *)(param_2 + 0x78) != 0) {
        uVar6 = *(long *)(param_2 + 0x70) + 1;
        plVar8 = (long *)(*(long *)(param_2 + 0x68) + *(long *)(param_2 + 0x70) * 0x20);
        uVar7 = 0;
        if (*(ulong *)(param_2 + 0x60) <= uVar6) {
          uVar7 = *(ulong *)(param_2 + 0x60);
        }
        *(ulong *)(param_2 + 0x70) = uVar6 - uVar7;
        *(long *)(param_2 + 0x78) = *(long *)(param_2 + 0x78) + -1;
        pcStack_78 = (code *)plVar8[1];
        local_80 = (ulong *)*plVar8;
        pcStack_68 = (code *)plVar8[3];
        local_70 = (ulong *)plVar8[2];
        if (local_80 != (ulong *)0x0) {
                    /* try { // try from 0074e7a8 to 0074e7af has its CatchHandler @ 0074ec64 */
          (*(code *)local_80[4])(&pcStack_68,pcStack_78,local_70);
        }
      }
    }
    puVar19 = (ulong *)((long)puVar19 - (long)puVar21);
    uVar6 = *(ulong *)(param_2 + 0x78);
  }
LAB_0074e7b4:
  if ((local_c8 & 1) == 0) {
    param_1[2] = local_d8;
    param_1[3] = local_c8;
    *param_1 = PTR_SHARED_VTABLE_00b00e28;
    param_1[1] = local_e0;
  }
  else {
    uVar6 = local_c8 >> 5;
    local_c0 = uVar6 + (long)local_d0;
    lStack_b8 = local_e0 - uVar6;
    local_b0 = uVar6 + local_d8;
                    /* try { // try from 0074e7f0 to 0074e96f has its CatchHandler @ 0074eca0 */
    <bytes::bytes::Bytes_as_core::convert::From<alloc::vec::Vec<u8>>>::from(&local_a8,&local_c0);
    local_88 = uVar6;
    if (local_98 < uVar6) {
      local_80 = &local_88;
      pcStack_78 = FUN_00751324;
      local_70 = &local_48;
      local_48 = local_98;
      pcStack_68 = FUN_00751324;
                    /* try { // try from 0074ebfc to 0074ec13 has its CatchHandler @ 0074ec68 */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                (&DAT_002afeea,&local_80,&PTR_s__root__cargo_registry_src_index__00ad7990);
    }
    lStack_a0 = lStack_a0 + uVar6;
    param_1[1] = lStack_a0;
    *param_1 = local_a8;
    param_1[3] = uStack_90;
    param_1[2] = local_98 - uVar6;
    local_98 = local_98 - uVar6;
  }
LAB_0074e9e0:
  FUN_0074c918(param_2);
  return;
  while( true ) {
    plVar8 = (long *)(lVar15 + 0x10);
    lVar15 = lVar15 + 0x20;
    lVar12 = lVar12 + -0x20;
    if (*plVar8 != 0) break;
LAB_0074e3d8:
    if (lVar12 == 0) goto LAB_0074e7b4;
  }
LAB_0074e3ec:
  if (uVar7 == 0) {
    puVar21 = (ulong *)0x0;
    __src_00 = &DAT_00000001;
  }
  else {
    uVar7 = 0;
    if (uVar6 <= *(ulong *)(param_2 + 0x70)) {
      uVar7 = uVar6;
    }
    lVar10 = lVar10 + (*(ulong *)(param_2 + 0x70) - uVar7) * 0x20;
    __src_00 = *(undefined1 **)(lVar10 + 8);
    puVar21 = *(ulong **)(lVar10 + 0x10);
    if ((ulong *)((long)local_d0 - local_d8) < puVar21) {
                    /* try { // try from 0074e418 to 0074e427 has its CatchHandler @ 0074ec58 */
      <bytes::bytes_mut::bytes::bytes_mut::BytesMut>::reserve_inner(&local_e0,puVar21,1);
    }
  }
  memcpy((void *)(local_e0 + local_d8),__src_00,(size_t)puVar21);
  puVar5 = (ulong *)((long)local_d0 - local_d8);
  if (puVar21 <= puVar5) {
    local_d8 = local_d8 + (long)puVar21;
    for (; puVar21 != (ulong *)0x0; puVar21 = (ulong *)((long)puVar21 - (long)puVar19)) {
      if (*(long *)(param_2 + 0x78) == 0) goto LAB_0074eb8c;
      uVar6 = 0;
      if (*(ulong *)(param_2 + 0x60) <= *(ulong *)(param_2 + 0x70)) {
        uVar6 = *(ulong *)(param_2 + 0x60);
      }
      lVar12 = *(long *)(param_2 + 0x68) + (*(ulong *)(param_2 + 0x70) - uVar6) * 0x20;
      puVar19 = *(ulong **)(lVar12 + 0x10);
      if (puVar21 <= puVar19 && (long)puVar19 - (long)puVar21 != 0) {
        *(long *)(lVar12 + 8) = *(long *)(lVar12 + 8) + (long)puVar21;
        *(long *)(lVar12 + 0x10) = (long)puVar19 - (long)puVar21;
        break;
      }
      *(long *)(lVar12 + 8) = *(long *)(lVar12 + 8) + (long)puVar19;
      *(undefined8 *)(lVar12 + 0x10) = 0;
      if (*(long *)(param_2 + 0x78) != 0) {
        uVar6 = *(long *)(param_2 + 0x70) + 1;
        plVar8 = (long *)(*(long *)(param_2 + 0x68) + *(long *)(param_2 + 0x70) * 0x20);
        uVar7 = 0;
        if (*(ulong *)(param_2 + 0x60) <= uVar6) {
          uVar7 = *(ulong *)(param_2 + 0x60);
        }
        *(ulong *)(param_2 + 0x70) = uVar6 - uVar7;
        *(long *)(param_2 + 0x78) = *(long *)(param_2 + 0x78) + -1;
        pcStack_78 = (code *)plVar8[1];
        local_80 = (ulong *)*plVar8;
        pcStack_68 = (code *)plVar8[3];
        local_70 = (ulong *)plVar8[2];
        if (local_80 != (ulong *)0x0) {
                    /* try { // try from 0074e4f4 to 0074e4fb has its CatchHandler @ 0074ec60 */
          (*(code *)local_80[4])(&pcStack_68,pcStack_78,local_70);
        }
      }
    }
    goto LAB_0074e35c;
  }
  goto LAB_0074ebd0;
}


// ===== 0074ecb8  FUN_0074ecb8 =====

undefined8
FUN_0074ecb8(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

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
    if (cVar2 == '\0') goto LAB_0074ed18;
  }
  else {
    ClearExclusiveLocal();
  }
                    /* try { // try from 0074ee68 to 0074ee73 has its CatchHandler @ 0074eea8 */
  <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
            (pcVar7,param_2,0xffffffff);
LAB_0074ed18:
  if ((char)param_1[6] == '\0') {
    plVar1 = param_1 + 2;
    param_1 = param_1 + 3;
    local_48 = *(ulong *)(param_2 + *(long *)(*(long *)(param_2 + 0x10) + 0x48));
    uStack_50 = uVar8;
    if (local_48 != uVar8) {
                    /* try { // try from 0074ee24 to 0074ee43 has its CatchHandler @ 0074eec4 */
                    /* WARNING: Subroutine does not return */
      core::panicking::assert_failed<usize,usize>
                (0,&local_48,&uStack_50,0,param_5,&PTR_s__root__cargo_registry_src_index__00ad7928);
    }
    lVar6 = *(long *)(pcVar7 + 8);
    local_28 = param_2;
    if (lVar6 == param_2) {
                    /* try { // try from 0074ee48 to 0074ee5f has its CatchHandler @ 0074eebc */
      core[bcece726f298455b]::panicking::assert_failed::
      <core[bcece726f298455b]::option::Option<core[bcece726f298455b]::ptr::non_null::NonNull<tokio[8c8895dbfa691109]::runtime::task::core::Header>>,core[bcece726f298455b]::option::Option<core[bcece726f298455b]::ptr::non_null::NonNull<tokio[8c8895dbfa691109]::runtime::task::core::Header>>>
                (1,pcVar7 + 8,&local_28,0,param_5,&PTR_s__root__cargo_registry_src_index__00ad8420);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x74ee64);
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
                    /* try { // try from 0074ee7c to 0074eea3 has its CatchHandler @ 0074eeb4 */
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
                    /* try { // try from 0074ed38 to 0074ed43 has its CatchHandler @ 0074eeb4 */
    <tokio::runtime::task::raw::tokio::runtime::task::raw::RawTask>::shutdown(param_2);
    iVar5 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(param_3);
    if (iVar5 != 0) {
      <tokio::runtime::task::raw::tokio::runtime::task::raw::RawTask>::dealloc(param_3);
    }
    param_3 = 0;
  }
  return param_3;
}


// ===== 0074ef48  FUN_0074ef48 =====

void FUN_0074ef48(long *param_1,long *param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *local_40;
  long *local_38;
  
  local_40 = (long *)0x0;
  if (param_2 == (long *)0x0) {
                    /* try { // try from 0074f158 to 0074f163 has its CatchHandler @ 0074f250 */
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00ad7940);
  }
  plVar7 = param_2 + 7;
  local_38 = param_2;
  if (*plVar7 != -2) {
    if (*plVar7 == -1) {
                    /* try { // try from 0074ef88 to 0074ef8f has its CatchHandler @ 0074f1ec */
      FUN_0074d924(param_2 + 8);
    }
    else {
                    /* try { // try from 0074ef94 to 0074ef9b has its CatchHandler @ 0074f178 */
      FUN_00703fac(param_2 + 0x13);
                    /* try { // try from 0074ef9c to 0074efa3 has its CatchHandler @ 0074f1ec */
      FUN_0074db38(plVar7);
    }
  }
  plVar3 = local_38;
  lVar9 = param_3[0xd];
  lVar8 = param_3[0xc];
  lVar11 = param_3[0xf];
  lVar10 = param_3[0xe];
  lVar12 = param_3[0x10];
  lVar6 = param_3[0x12];
  param_2[0x18] = param_3[0x11];
  param_2[0x17] = lVar12;
  param_2[0x14] = lVar9;
  param_2[0x13] = lVar8;
  param_2[0x16] = lVar11;
  param_2[0x15] = lVar10;
  lVar9 = param_3[5];
  lVar8 = param_3[4];
  lVar11 = param_3[7];
  lVar10 = param_3[6];
  param_2[0x19] = lVar6;
  param_2[0xc] = lVar9;
  param_2[0xb] = lVar8;
  param_2[0xe] = lVar11;
  param_2[0xd] = lVar10;
  lVar9 = param_3[8];
  lVar8 = param_3[0xb];
  lVar6 = param_3[10];
  param_2[0x10] = param_3[9];
  param_2[0xf] = lVar9;
  param_2[0x12] = lVar8;
  param_2[0x11] = lVar6;
  lVar9 = *param_3;
  lVar8 = param_3[3];
  lVar6 = param_3[2];
  param_2[8] = param_3[1];
  *plVar7 = lVar9;
  param_2[10] = lVar8;
  param_2[9] = lVar6;
                    /* try { // try from 0074efd8 to 0074efff has its CatchHandler @ 0074f224 */
  uVar4 = <tokio::sync::oneshot::[9]::tokio::sync::oneshot::State>::set_complete(local_38 + 6);
  if ((uVar4 & 5) == 1) {
    (**(code **)(plVar3[4] + 0x10))(plVar3[5]);
  }
  if ((uVar4 >> 2 & 1) == 0) {
    *param_1 = -2;
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
                    /* try { // try from 0074f028 to 0074f02f has its CatchHandler @ 0074f1e4 */
      <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<libdiscore_common::core::http::ParsedHttpResponse<std::collections::hash::set::HashSet<alloc::string::String>>,{backref_37}::HttpError>>>>
      ::drop_slow(&local_38);
    }
    plVar7 = local_40;
    if (local_40 == (long *)0x0) {
      return;
    }
                    /* try { // try from 0074f038 to 0074f05b has its CatchHandler @ 0074f1b8 */
    uVar5 = <tokio::sync::oneshot::[9]::tokio::sync::oneshot::State>::set_complete(local_40 + 6);
    if ((uVar5 & 5) == 1) {
      (**(code **)(plVar7[4] + 0x10))(plVar7[5]);
    }
    do {
      lVar6 = *plVar7 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar6;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  else {
    lVar6 = local_38[7];
    local_38[7] = -2;
    if (lVar6 == -2) {
                    /* try { // try from 0074f168 to 0074f173 has its CatchHandler @ 0074f224 */
                    /* WARNING: Subroutine does not return */
      core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00ad7958);
    }
    lVar9 = local_38[0x13];
    lVar8 = local_38[0x12];
    lVar11 = local_38[0x15];
    lVar10 = local_38[0x14];
    *param_1 = lVar6;
    param_1[0xc] = lVar9;
    param_1[0xb] = lVar8;
    lVar13 = local_38[0x17];
    lVar12 = local_38[0x16];
    lVar8 = local_38[0x19];
    lVar6 = local_38[0x18];
    param_1[0xe] = lVar11;
    param_1[0xd] = lVar10;
    param_1[0x12] = lVar8;
    param_1[0x11] = lVar6;
    lVar10 = local_38[0xb];
    lVar9 = local_38[10];
    lVar8 = local_38[0xd];
    lVar6 = local_38[0xc];
    param_1[0x10] = lVar13;
    param_1[0xf] = lVar12;
    lVar12 = local_38[9];
    lVar11 = local_38[8];
    param_1[4] = lVar10;
    param_1[3] = lVar9;
    lVar10 = local_38[0xf];
    lVar9 = local_38[0xe];
    lVar14 = local_38[0x11];
    lVar13 = local_38[0x10];
    param_1[6] = lVar8;
    param_1[5] = lVar6;
    param_1[2] = lVar12;
    param_1[1] = lVar11;
    param_1[8] = lVar10;
    param_1[7] = lVar9;
    param_1[10] = lVar14;
    param_1[9] = lVar13;
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
                    /* try { // try from 0074f0f0 to 0074f0f7 has its CatchHandler @ 0074f1e4 */
      <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<libdiscore_common::core::http::ParsedHttpResponse<std::collections::hash::set::HashSet<alloc::string::String>>,{backref_37}::HttpError>>>>
      ::drop_slow(&local_38);
    }
    plVar7 = local_40;
    if (local_40 == (long *)0x0) {
      return;
    }
                    /* try { // try from 0074f100 to 0074f123 has its CatchHandler @ 0074f18c */
    uVar5 = <tokio::sync::oneshot::[9]::tokio::sync::oneshot::State>::set_complete(local_40 + 6);
    if ((uVar5 & 5) == 1) {
      (**(code **)(plVar7[4] + 0x10))(plVar7[5]);
    }
    do {
      lVar6 = *plVar7 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar6;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if (lVar6 != 0) {
    return;
  }
  DataMemoryBarrier(2,1);
  <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<libdiscore_common::core::http::ParsedHttpResponse<std::collections::hash::set::HashSet<alloc::string::String>>,{backref_37}::HttpError>>>>
  ::drop_slow(&local_40);
  return;
}


// ===== 0074f270  FUN_0074f270 =====

void FUN_0074f270(long *param_1,long *param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *local_40;
  long *local_38;
  
  local_40 = (long *)0x0;
  if (param_2 == (long *)0x0) {
                    /* try { // try from 0074f488 to 0074f493 has its CatchHandler @ 0074f55c */
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00ad7940);
  }
  plVar8 = param_2 + 2;
  local_38 = param_2;
  if (*plVar8 != -2) {
    if (*plVar8 == -1) {
      FUN_0074d924(param_2 + 3);
    }
    else {
      if (param_2[0xe] != 0) {
        free((void *)param_2[0xf]);
      }
                    /* try { // try from 0074f2c8 to 0074f2db has its CatchHandler @ 0074f508 */
      FUN_0074db38(plVar8);
    }
  }
  plVar3 = local_38;
  lVar6 = param_3[8];
  lVar9 = param_3[0xb];
  lVar7 = param_3[10];
  param_2[0xb] = param_3[9];
  param_2[10] = lVar6;
  param_2[0xd] = lVar9;
  param_2[0xc] = lVar7;
  lVar6 = param_3[0xc];
  lVar9 = param_3[0xf];
  lVar7 = param_3[0xe];
  param_2[0xf] = param_3[0xd];
  param_2[0xe] = lVar6;
  param_2[0x11] = lVar9;
  param_2[0x10] = lVar7;
  lVar9 = *param_3;
  lVar7 = param_3[3];
  lVar6 = param_3[2];
  param_2[3] = param_3[1];
  *plVar8 = lVar9;
  param_2[5] = lVar7;
  param_2[4] = lVar6;
  lVar9 = param_3[4];
  lVar7 = param_3[7];
  lVar6 = param_3[6];
  param_2[7] = param_3[5];
  param_2[6] = lVar9;
  param_2[9] = lVar7;
  param_2[8] = lVar6;
                    /* try { // try from 0074f300 to 0074f327 has its CatchHandler @ 0074f530 */
  uVar4 = <tokio::sync::oneshot::[9]::tokio::sync::oneshot::State>::set_complete(local_38 + 0x16);
  if ((uVar4 & 5) == 1) {
    (**(code **)(plVar3[0x14] + 0x10))(plVar3[0x15]);
  }
  if ((uVar4 >> 2 & 1) == 0) {
    *param_1 = -2;
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
                    /* try { // try from 0074f350 to 0074f357 has its CatchHandler @ 0074f500 */
      <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<libdiscore_common::core::http::ParsedHttpResponse<alloc::string::String>,{backref_37}::HttpError>>>>
      ::drop_slow(&local_38);
    }
    plVar8 = local_40;
    if (local_40 == (long *)0x0) {
      return;
    }
                    /* try { // try from 0074f360 to 0074f383 has its CatchHandler @ 0074f4d4 */
    uVar5 = <tokio::sync::oneshot::[9]::tokio::sync::oneshot::State>::set_complete(local_40 + 0x16);
    if ((uVar5 & 5) == 1) {
      (**(code **)(plVar8[0x14] + 0x10))(plVar8[0x15]);
    }
    do {
      lVar6 = *plVar8 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = lVar6;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  else {
    lVar6 = local_38[2];
    local_38[2] = -2;
    if (lVar6 == -2) {
                    /* try { // try from 0074f498 to 0074f4a3 has its CatchHandler @ 0074f530 */
                    /* WARNING: Subroutine does not return */
      core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00ad7958);
    }
    lVar10 = local_38[0xc];
    lVar9 = local_38[0xb];
    lVar12 = local_38[0xe];
    lVar11 = local_38[0xd];
    lVar7 = local_38[0x11];
    *param_1 = lVar6;
    param_1[10] = lVar10;
    param_1[9] = lVar9;
    lVar9 = local_38[0x10];
    lVar6 = local_38[0xf];
    param_1[0xc] = lVar12;
    param_1[0xb] = lVar11;
    lVar11 = local_38[4];
    lVar10 = local_38[3];
    param_1[0xe] = lVar9;
    param_1[0xd] = lVar6;
    lVar9 = local_38[6];
    lVar6 = local_38[5];
    param_1[2] = lVar11;
    param_1[1] = lVar10;
    lVar11 = local_38[8];
    lVar10 = local_38[7];
    param_1[4] = lVar9;
    param_1[3] = lVar6;
    lVar9 = local_38[10];
    lVar6 = local_38[9];
    param_1[6] = lVar11;
    param_1[5] = lVar10;
    param_1[0xf] = lVar7;
    param_1[8] = lVar9;
    param_1[7] = lVar6;
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
                    /* try { // try from 0074f420 to 0074f427 has its CatchHandler @ 0074f500 */
      <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<libdiscore_common::core::http::ParsedHttpResponse<alloc::string::String>,{backref_37}::HttpError>>>>
      ::drop_slow(&local_38);
    }
    plVar8 = local_40;
    if (local_40 == (long *)0x0) {
      return;
    }
                    /* try { // try from 0074f430 to 0074f453 has its CatchHandler @ 0074f4a8 */
    uVar5 = <tokio::sync::oneshot::[9]::tokio::sync::oneshot::State>::set_complete(local_40 + 0x16);
    if ((uVar5 & 5) == 1) {
      (**(code **)(plVar8[0x14] + 0x10))(plVar8[0x15]);
    }
    do {
      lVar6 = *plVar8 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = lVar6;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if (lVar6 != 0) {
    return;
  }
  DataMemoryBarrier(2,1);
  <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<libdiscore_common::core::http::ParsedHttpResponse<alloc::string::String>,{backref_37}::HttpError>>>>
  ::drop_slow(&local_40);
  return;
}


// ===== 0074f57c  FUN_0074f57c =====

void FUN_0074f57c(long *param_1,long *param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *local_40;
  long *local_38;
  
  local_40 = (long *)0x0;
  if (param_2 == (long *)0x0) {
                    /* try { // try from 0074f774 to 0074f77f has its CatchHandler @ 0074f858 */
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00ad7940);
  }
  plVar7 = param_2 + 7;
  local_38 = param_2;
  if (*plVar7 != -2) {
                    /* try { // try from 0074f5b8 to 0074f5bf has its CatchHandler @ 0074f7f4 */
    FUN_0074c72c(plVar7);
  }
  plVar3 = local_38;
  lVar9 = param_3[0xd];
  lVar8 = param_3[0xc];
  lVar11 = param_3[0xf];
  lVar10 = param_3[0xe];
  lVar12 = param_3[0x10];
  lVar6 = param_3[0x12];
  param_2[0x18] = param_3[0x11];
  param_2[0x17] = lVar12;
  param_2[0x14] = lVar9;
  param_2[0x13] = lVar8;
  param_2[0x16] = lVar11;
  param_2[0x15] = lVar10;
  lVar9 = param_3[5];
  lVar8 = param_3[4];
  lVar11 = param_3[7];
  lVar10 = param_3[6];
  param_2[0x19] = lVar6;
  param_2[0xc] = lVar9;
  param_2[0xb] = lVar8;
  param_2[0xe] = lVar11;
  param_2[0xd] = lVar10;
  lVar9 = param_3[8];
  lVar8 = param_3[0xb];
  lVar6 = param_3[10];
  param_2[0x10] = param_3[9];
  param_2[0xf] = lVar9;
  param_2[0x12] = lVar8;
  param_2[0x11] = lVar6;
  lVar9 = *param_3;
  lVar8 = param_3[3];
  lVar6 = param_3[2];
  param_2[8] = param_3[1];
  *plVar7 = lVar9;
  param_2[10] = lVar8;
  param_2[9] = lVar6;
                    /* try { // try from 0074f5f4 to 0074f61b has its CatchHandler @ 0074f82c */
  uVar4 = <tokio::sync::oneshot::[9]::tokio::sync::oneshot::State>::set_complete(local_38 + 6);
  if ((uVar4 & 5) == 1) {
    (**(code **)(plVar3[4] + 0x10))(plVar3[5]);
  }
  if ((uVar4 >> 2 & 1) == 0) {
    *param_1 = -2;
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
                    /* try { // try from 0074f644 to 0074f64b has its CatchHandler @ 0074f7ec */
      <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<libdiscore_common::core::http::ParsedHttpResponse<{backref_41}::stores::blocked_domains::DeltaResponse>,{backref_37}::HttpError>>>>
      ::drop_slow(&local_38);
    }
    plVar7 = local_40;
    if (local_40 == (long *)0x0) {
      return;
    }
                    /* try { // try from 0074f654 to 0074f677 has its CatchHandler @ 0074f7c0 */
    uVar5 = <tokio::sync::oneshot::[9]::tokio::sync::oneshot::State>::set_complete(local_40 + 6);
    if ((uVar5 & 5) == 1) {
      (**(code **)(plVar7[4] + 0x10))(plVar7[5]);
    }
    do {
      lVar6 = *plVar7 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar6;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  else {
    lVar6 = local_38[7];
    local_38[7] = -2;
    if (lVar6 == -2) {
                    /* try { // try from 0074f784 to 0074f78f has its CatchHandler @ 0074f82c */
                    /* WARNING: Subroutine does not return */
      core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00ad7958);
    }
    lVar9 = local_38[0x13];
    lVar8 = local_38[0x12];
    lVar11 = local_38[0x15];
    lVar10 = local_38[0x14];
    *param_1 = lVar6;
    param_1[0xc] = lVar9;
    param_1[0xb] = lVar8;
    lVar13 = local_38[0x17];
    lVar12 = local_38[0x16];
    lVar8 = local_38[0x19];
    lVar6 = local_38[0x18];
    param_1[0xe] = lVar11;
    param_1[0xd] = lVar10;
    param_1[0x12] = lVar8;
    param_1[0x11] = lVar6;
    lVar10 = local_38[0xb];
    lVar9 = local_38[10];
    lVar8 = local_38[0xd];
    lVar6 = local_38[0xc];
    param_1[0x10] = lVar13;
    param_1[0xf] = lVar12;
    lVar12 = local_38[9];
    lVar11 = local_38[8];
    param_1[4] = lVar10;
    param_1[3] = lVar9;
    lVar10 = local_38[0xf];
    lVar9 = local_38[0xe];
    lVar14 = local_38[0x11];
    lVar13 = local_38[0x10];
    param_1[6] = lVar8;
    param_1[5] = lVar6;
    param_1[2] = lVar12;
    param_1[1] = lVar11;
    param_1[8] = lVar10;
    param_1[7] = lVar9;
    param_1[10] = lVar14;
    param_1[9] = lVar13;
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
                    /* try { // try from 0074f70c to 0074f713 has its CatchHandler @ 0074f7ec */
      <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<libdiscore_common::core::http::ParsedHttpResponse<{backref_41}::stores::blocked_domains::DeltaResponse>,{backref_37}::HttpError>>>>
      ::drop_slow(&local_38);
    }
    plVar7 = local_40;
    if (local_40 == (long *)0x0) {
      return;
    }
                    /* try { // try from 0074f71c to 0074f73f has its CatchHandler @ 0074f794 */
    uVar5 = <tokio::sync::oneshot::[9]::tokio::sync::oneshot::State>::set_complete(local_40 + 6);
    if ((uVar5 & 5) == 1) {
      (**(code **)(plVar7[4] + 0x10))(plVar7[5]);
    }
    do {
      lVar6 = *plVar7 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar6;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if (lVar6 != 0) {
    return;
  }
  DataMemoryBarrier(2,1);
  <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<libdiscore_common::core::http::ParsedHttpResponse<{backref_41}::stores::blocked_domains::DeltaResponse>,{backref_37}::HttpError>>>>
  ::drop_slow(&local_40);
  return;
}


// ===== 0074f878  FUN_0074f878 =====

void FUN_0074f878(ulong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined **ppuVar5;
  char cVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  char local_204;
  char local_203;
  ulong local_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong local_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong local_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong local_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong local_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong local_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong local_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong local_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong local_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong local_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong local_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong local_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong local_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong local_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  plVar8 = (long *)*param_2;
  uVar7 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar7 == 0) {
    uVar7 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar4 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar7);
    if (puVar4 < (undefined1 *)0x2) goto LAB_0074f958;
LAB_0074f8c0:
    if (puVar4 != (undefined1 *)0x0) goto LAB_0074f8c4;
LAB_0074f96c:
    local_204 = '\0';
    local_203 = '\0';
  }
  else {
    puVar4 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar7);
    if (&DAT_00000001 < puVar4) goto LAB_0074f8c0;
LAB_0074f958:
    puVar4 = (undefined1 *)FUN_0072ca84(uVar7 & 0xffffffff,puVar4,0);
    if (puVar4 == (undefined1 *)0x0) goto LAB_0074f96c;
LAB_0074f8c4:
    cVar1 = puVar4[0x44];
    cVar2 = puVar4[0x45];
    cVar6 = cVar2;
    if (cVar1 == '\x01') {
      if (cVar2 == '\0') {
        tokio::task::coop::register_waker(param_3);
        local_120 = local_120 & 0xffffffffff000000;
        <tokio::task::coop::RestoreOnPending_as_core::ops::drop::Drop>::drop((ulong)&local_120 | 1);
        *param_1 = 0xffffffffffffffff;
        return;
      }
      cVar6 = cVar2 + -1;
    }
    puVar4[0x45] = cVar6;
    local_120 = local_120 & 0xffffffffff000000;
    <tokio::task::coop::RestoreOnPending_as_core::ops::drop::Drop>::drop((ulong)&local_120 | 1);
    local_204 = cVar1;
    local_203 = cVar2;
  }
  lVar9 = *plVar8;
                    /* try { // try from 0074f980 to 0074f9fb has its CatchHandler @ 0074fb48 */
  FUN_0073a38c(&local_200,lVar9 + 0x1a0,lVar9 + 0x80);
  if (local_200 == 2) {
    uVar7 = <tokio::sync::mpsc::bounded::Semaphore_as_tokio::sync::mpsc::chan::Semaphore>::is_idle
                      (lVar9 + 0x1c0);
    if ((uVar7 & 1) == 0) {
      ppuVar5 = &PTR_s__root__cargo_registry_src_index__00ad78d0;
LAB_0074fb10:
                    /* try { // try from 0074fb10 to 0074fb1f has its CatchHandler @ 0074fb48 */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic("assertion failed: self.inner.semaphore.is_idle()",0x30,ppuVar5);
    }
LAB_0074fa5c:
    local_204 = '\0';
    uVar7 = 2;
  }
  else {
    if (local_200 != 0xffffffffffffffff) {
      uStack_78 = uStack_158;
      local_80 = local_160;
      uStack_68 = uStack_148;
      uStack_70 = uStack_150;
      uStack_58 = uStack_138;
      local_60 = local_140;
      uStack_48 = uStack_128;
      uStack_50 = uStack_130;
      uStack_b8 = uStack_198;
      local_c0 = local_1a0;
      uStack_a8 = uStack_188;
      uStack_b0 = uStack_190;
      uStack_98 = uStack_178;
      local_a0 = local_180;
      uStack_88 = uStack_168;
      uStack_90 = uStack_170;
      uStack_f8 = uStack_1d8;
      local_100 = local_1e0;
      uStack_e8 = uStack_1c8;
      uStack_f0 = uStack_1d0;
      uStack_d8 = uStack_1b8;
      local_e0 = local_1c0;
      uStack_c8 = uStack_1a8;
      uStack_d0 = uStack_1b0;
      uStack_118 = uStack_1f8;
      local_120 = local_200;
      uStack_108 = uStack_1e8;
      uStack_110 = uStack_1f0;
                    /* try { // try from 0074fa44 to 0074fa4b has its CatchHandler @ 0074fb34 */
      <tokio::sync::mpsc::bounded::Semaphore_as_tokio::sync::mpsc::chan::Semaphore>::add_permit
                (lVar9 + 0x1c0);
LAB_0074faac:
      local_204 = '\0';
      param_1[0x15] = uStack_158;
      param_1[0x14] = local_160;
      param_1[0x17] = uStack_148;
      param_1[0x16] = uStack_150;
      param_1[0x19] = uStack_138;
      param_1[0x18] = local_140;
      param_1[0x1b] = uStack_128;
      param_1[0x1a] = uStack_130;
      param_1[0xd] = uStack_198;
      param_1[0xc] = local_1a0;
      param_1[0xf] = uStack_188;
      param_1[0xe] = uStack_190;
      param_1[0x11] = uStack_178;
      param_1[0x10] = local_180;
      param_1[0x13] = uStack_168;
      param_1[0x12] = uStack_170;
      param_1[5] = uStack_1d8;
      param_1[4] = local_1e0;
      param_1[7] = uStack_1c8;
      param_1[6] = uStack_1d0;
      param_1[9] = uStack_1b8;
      param_1[8] = local_1c0;
      param_1[0xb] = uStack_1a8;
      param_1[10] = uStack_1b0;
      param_1[1] = uStack_1f8;
      *param_1 = local_200;
      param_1[3] = uStack_1e8;
      param_1[2] = uStack_1f0;
      goto LAB_0074fae8;
    }
    <tokio::sync::task::atomic_waker::[0]::tokio::sync::task::atomic_waker::AtomicWaker>::
    register_by_ref(lVar9 + 0x100,*param_3);
    FUN_0073a38c(&local_200,lVar9 + 0x1a0,lVar9 + 0x80);
    if (local_200 == 2) {
                    /* try { // try from 0074fa50 to 0074fa57 has its CatchHandler @ 0074fb48 */
      uVar7 = <tokio::sync::mpsc::bounded::Semaphore_as_tokio::sync::mpsc::chan::Semaphore>::is_idle
                        (lVar9 + 0x1c0);
      if ((uVar7 & 1) == 0) {
        ppuVar5 = &PTR_s__root__cargo_registry_src_index__00ad78b8;
        goto LAB_0074fb10;
      }
      goto LAB_0074fa5c;
    }
    if (local_200 != 0xffffffffffffffff) {
      uStack_78 = uStack_158;
      local_80 = local_160;
      uStack_68 = uStack_148;
      uStack_70 = uStack_150;
      uStack_58 = uStack_138;
      local_60 = local_140;
      uStack_48 = uStack_128;
      uStack_50 = uStack_130;
      uStack_b8 = uStack_198;
      local_c0 = local_1a0;
      uStack_a8 = uStack_188;
      uStack_b0 = uStack_190;
      uStack_98 = uStack_178;
      local_a0 = local_180;
      uStack_88 = uStack_168;
      uStack_90 = uStack_170;
      uStack_f8 = uStack_1d8;
      local_100 = local_1e0;
      uStack_e8 = uStack_1c8;
      uStack_f0 = uStack_1d0;
      uStack_d8 = uStack_1b8;
      local_e0 = local_1c0;
      uStack_c8 = uStack_1a8;
      uStack_d0 = uStack_1b0;
      uStack_118 = uStack_1f8;
      local_120 = local_200;
      uStack_108 = uStack_1e8;
      uStack_110 = uStack_1f0;
                    /* try { // try from 0074faa4 to 0074faab has its CatchHandler @ 0074fb24 */
      <tokio::sync::mpsc::bounded::Semaphore_as_tokio::sync::mpsc::chan::Semaphore>::add_permit
                (lVar9 + 0x1c0);
      goto LAB_0074faac;
    }
    if (((*(byte *)(lVar9 + 0x1b8) & 1) != 0) &&
       (iVar3 = <tokio::sync::mpsc::bounded::Semaphore_as_tokio::sync::mpsc::chan::Semaphore>::
                is_idle(lVar9 + 0x1c0), iVar3 != 0)) goto LAB_0074fa5c;
    uVar7 = 0xffffffffffffffff;
  }
  *param_1 = uVar7;
LAB_0074fae8:
  <tokio::task::coop::RestoreOnPending_as_core::ops::drop::Drop>::drop(&local_204);
  return;
}


// ===== 0074fb60  FUN_0074fb60 =====

void FUN_0074fb60(undefined8 *param_1)

{
  <core::io::error::Error_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 0074fb68  FUN_0074fb68 =====

void FUN_0074fb68(undefined8 *param_1,undefined8 param_2)

{
  <dyn_Trait<Assoc=X>+serde::de::Expected_as_core::fmt::Display>::fmt(*param_1,param_1[1],param_2);
  return;
}


// ===== 0074fb7c  FUN_0074fb7c =====

void FUN_0074fb7c(undefined8 *param_1)

{
  <core::io::error::Error_as_core::fmt::Display>::fmt(*param_1);
  return;
}


// ===== 0074fb84  FUN_0074fb84 =====

void FUN_0074fb84(long *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  long local_e0;
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
  undefined8 *local_80;
  long lStack_78;
  undefined8 uStack_70;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  lVar7 = *param_1;
  if (lVar7 != 0) {
    puVar1 = (ulong *)(lVar7 + 0x30);
    do {
      uVar8 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar8 | 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar8 & 10) == 8) {
      (**(code **)(*(long *)(lVar7 + 0x10) + 0x10))(*(undefined8 *)(lVar7 + 0x18));
    }
    if (((uint)uVar8 >> 1 & 1) != 0) {
      lVar10 = *(long *)(lVar7 + 0xa0);
      local_80 = *(undefined8 **)(lVar7 + 0x98);
      local_68 = *(long *)(lVar7 + 0xb0);
      uStack_70 = *(undefined8 *)(lVar7 + 0xa8);
      uStack_58 = *(undefined8 *)(lVar7 + 0xc0);
      local_60 = *(undefined8 *)(lVar7 + 0xb8);
      local_50 = *(undefined8 *)(lVar7 + 200);
      uStack_b8 = *(undefined8 *)(lVar7 + 0x60);
      local_c0 = *(undefined8 *)(lVar7 + 0x58);
      uStack_a8 = *(undefined8 *)(lVar7 + 0x70);
      uStack_b0 = *(undefined8 *)(lVar7 + 0x68);
      uStack_98 = *(undefined8 *)(lVar7 + 0x80);
      local_a0 = *(undefined8 *)(lVar7 + 0x78);
      uStack_88 = *(undefined8 *)(lVar7 + 0x90);
      uStack_90 = *(undefined8 *)(lVar7 + 0x88);
      uStack_d8 = *(undefined8 *)(lVar7 + 0x40);
      local_e0 = *(long *)(lVar7 + 0x38);
      *(undefined8 *)(lVar7 + 0x38) = 0xfffffffffffffffe;
      uStack_c8 = *(undefined8 *)(lVar7 + 0x50);
      uStack_d0 = *(undefined8 *)(lVar7 + 0x48);
      if (local_e0 != -2) {
        lStack_78 = lVar10;
        if (local_e0 != -1) {
          if (lVar10 != 0) {
            if (local_68 != 0) {
              puVar9 = local_80 + 1;
              uVar8 = NEON_cmge(*local_80,0,1);
              uVar8 = uVar8 & 0x8080808080808080;
              puVar6 = local_80;
              lVar7 = local_68;
              do {
                for (; uVar8 == 0; uVar8 = uVar8 & 0x8080808080808080) {
                  uVar8 = NEON_cmge(*puVar9,0,1);
                  puVar6 = puVar6 + -0x18;
                  puVar9 = puVar9 + 1;
                }
                uVar2 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                        (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
                uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
                iVar5 = (int)((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3);
                if (puVar6[(long)-iVar5 * 3 + -3] != 0) {
                  free((void *)puVar6[(long)-iVar5 * 3 + -2]);
                }
                lVar7 = lVar7 + -1;
                uVar8 = uVar8 - 1 & uVar8;
              } while (lVar7 != 0);
            }
            if (lVar10 * 0x19 != -0x21) {
              free(local_80 + lVar10 * -3 + -3);
            }
          }
          FUN_0074db38(&local_e0);
          return;
        }
        FUN_0074d924((ulong)&local_e0 | 8);
      }
    }
  }
  return;
}


// ===== 0074fd24  FUN_0074fd24 =====

void FUN_0074fd24(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long local_c0;
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
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  lVar4 = *param_1;
  if (lVar4 != 0) {
    puVar1 = (ulong *)(lVar4 + 0x30);
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
      (**(code **)(*(long *)(lVar4 + 0x10) + 0x10))(*(undefined8 *)(lVar4 + 0x18));
    }
    if (((uint)uVar5 >> 1 & 1) != 0) {
      uStack_58 = *(undefined8 *)(lVar4 + 0xa0);
      local_60 = *(undefined8 *)(lVar4 + 0x98);
      uStack_48 = *(undefined8 *)(lVar4 + 0xb0);
      uStack_50 = *(undefined8 *)(lVar4 + 0xa8);
      uStack_38 = *(undefined8 *)(lVar4 + 0xc0);
      local_40 = *(undefined8 *)(lVar4 + 0xb8);
      local_30 = *(undefined8 *)(lVar4 + 200);
      uStack_98 = *(undefined8 *)(lVar4 + 0x60);
      local_a0 = *(undefined8 *)(lVar4 + 0x58);
      uStack_88 = *(undefined8 *)(lVar4 + 0x70);
      uStack_90 = *(undefined8 *)(lVar4 + 0x68);
      uStack_b8 = *(undefined8 *)(lVar4 + 0x40);
      local_c0 = *(long *)(lVar4 + 0x38);
      uStack_a8 = *(undefined8 *)(lVar4 + 0x50);
      uStack_b0 = *(undefined8 *)(lVar4 + 0x48);
      uStack_78 = *(undefined8 *)(lVar4 + 0x80);
      local_80 = *(undefined8 *)(lVar4 + 0x78);
      uStack_68 = *(undefined8 *)(lVar4 + 0x90);
      uStack_70 = *(undefined8 *)(lVar4 + 0x88);
      *(undefined8 *)(lVar4 + 0x38) = 0xfffffffffffffffe;
      if (local_c0 != -2) {
        FUN_0074c72c(&local_c0);
      }
    }
  }
  return;
}


// ===== 0074fddc  FUN_0074fddc =====

void FUN_0074fddc(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,"RecvError",9,&local_18,&DAT_00ad7970);
  return;
}


// ===== 0074fe1c  FUN_0074fe1c =====

void FUN_0074fe1c(ulong *param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  undefined1 *puVar6;
  char *pcVar7;
  char cVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  ulong local_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong local_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong local_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong local_110;
  ulong uStack_108;
  ulong local_100;
  ulong uStack_f8;
  ulong local_f0;
  ulong uStack_e8;
  ulong local_e0;
  ulong uStack_d8;
  ulong local_d0;
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
  ulong uStack_70;
  ulong uStack_68;
  char local_54;
  char local_53;
  
  lVar11 = *param_2;
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              ("called after complete",0x2b,&PTR_s__root__cargo_registry_src_index__00ad79a8);
  }
  uVar10 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar10 != 0) {
    puVar6 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar10);
    if (&DAT_00000001 < puVar6) goto LAB_0074fe70;
LAB_0074ff00:
    puVar6 = (undefined1 *)FUN_0072ca84(uVar10 & 0xffffffff,puVar6,0);
    if (puVar6 == (undefined1 *)0x0) goto LAB_0074ff14;
LAB_0074fe74:
    cVar2 = puVar6[0x44];
    cVar3 = puVar6[0x45];
    cVar8 = cVar3;
    if (cVar2 != '\x01') {
LAB_0074fe90:
      puVar6[0x45] = cVar8;
      local_188 = local_188 & 0xffffffffff000000;
      <tokio::task::coop::RestoreOnPending_as_core::ops::drop::Drop>::drop((ulong)&local_188 | 1);
      local_54 = cVar2;
      local_53 = cVar3;
      goto LAB_0074ff1c;
    }
    if (cVar3 != '\0') {
      cVar8 = cVar3 + -1;
      goto LAB_0074fe90;
    }
    tokio::task::coop::register_waker(param_3);
    local_188 = local_188 & 0xffffffffff000000;
    pcVar7 = (char *)((ulong)&local_188 | 1);
LAB_0074ffac:
    <tokio::task::coop::RestoreOnPending_as_core::ops::drop::Drop>::drop(pcVar7);
LAB_00750018:
    *param_1 = 0xfffffffffffffffd;
    return;
  }
  uVar10 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
           lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
  puVar6 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar10);
  if (puVar6 <= &DAT_00000001) goto LAB_0074ff00;
LAB_0074fe70:
  if (puVar6 != (undefined1 *)0x0) goto LAB_0074fe74;
LAB_0074ff14:
  local_54 = '\0';
  local_53 = '\0';
LAB_0074ff1c:
  puVar1 = (ulong *)(lVar11 + 0x30);
                    /* try { // try from 0074ff28 to 0074ff93 has its CatchHandler @ 00750104 */
  uVar5 = <tokio::sync::oneshot::[9]::tokio::sync::oneshot::State>::load(lVar11 + 0x30,2);
  if ((uVar5 >> 1 & 1) == 0) {
    if ((uVar5 >> 2 & 1) == 0) {
      if ((uVar5 & 1) == 0) {
LAB_0074ff88:
        <tokio::sync::oneshot::tokio::sync::oneshot::Task>::set_task(lVar11 + 0x20,param_3);
        do {
          uVar10 = *puVar1;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar10 | 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (((uint)uVar10 >> 1 & 1) != 0) goto LAB_0074ffc4;
      }
      else if ((*(long *)(lVar11 + 0x28) != ((long *)*param_3)[1]) ||
              (*(long *)(lVar11 + 0x20) != *(long *)*param_3)) {
        do {
          uVar10 = *puVar1;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar10 & 0xfffffffffffffffe;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (((uint)uVar10 >> 1 & 1) != 0) {
          do {
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = *puVar1 | 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          goto LAB_0074ffc4;
        }
        <tokio::sync::oneshot::tokio::sync::oneshot::Task>::drop_task(lVar11 + 0x20);
        goto LAB_0074ff88;
      }
      pcVar7 = &local_54;
      goto LAB_0074ffac;
    }
  }
  else {
LAB_0074ffc4:
    uVar10 = *(ulong *)(lVar11 + 0x38);
    local_54 = '\0';
    *(undefined8 *)(lVar11 + 0x38) = 0xfffffffffffffffe;
    if (uVar10 != 0xfffffffffffffffe) {
      uStack_98 = *(ulong *)(lVar11 + 0x98);
      local_a0 = *(ulong *)(lVar11 + 0x90);
      uStack_88 = *(ulong *)(lVar11 + 0xa8);
      local_90 = *(ulong *)(lVar11 + 0xa0);
      uStack_78 = *(ulong *)(lVar11 + 0xb8);
      local_80 = *(ulong *)(lVar11 + 0xb0);
      uStack_68 = *(ulong *)(lVar11 + 200);
      uStack_70 = *(ulong *)(lVar11 + 0xc0);
      uStack_c8 = *(ulong *)(lVar11 + 0x68);
      local_d0 = *(ulong *)(lVar11 + 0x60);
      uStack_b8 = *(ulong *)(lVar11 + 0x78);
      local_c0 = *(ulong *)(lVar11 + 0x70);
      uStack_a8 = *(ulong *)(lVar11 + 0x88);
      local_b0 = *(ulong *)(lVar11 + 0x80);
      uStack_e8 = *(ulong *)(lVar11 + 0x48);
      local_f0 = *(ulong *)(lVar11 + 0x40);
      uStack_d8 = *(ulong *)(lVar11 + 0x58);
      local_e0 = *(ulong *)(lVar11 + 0x50);
      <tokio::task::coop::RestoreOnPending_as_core::ops::drop::Drop>::drop(&local_54);
      if (uVar10 != 0xfffffffffffffffd) goto LAB_00750034;
      goto LAB_00750018;
    }
  }
  local_54 = '\0';
  <tokio::task::coop::RestoreOnPending_as_core::ops::drop::Drop>::drop(&local_54);
  uVar10 = 0xfffffffffffffffe;
LAB_00750034:
  plVar9 = (long *)*param_2;
  uStack_128 = uStack_98;
  local_130 = local_a0;
  uStack_118 = uStack_88;
  uStack_120 = local_90;
  uStack_f8 = uStack_68;
  local_100 = uStack_70;
  uStack_108 = uStack_78;
  local_110 = local_80;
  uStack_168 = uStack_d8;
  uStack_170 = local_e0;
  uStack_158 = uStack_c8;
  uStack_160 = local_d0;
  uStack_178 = uStack_e8;
  uStack_180 = local_f0;
  uStack_148 = uStack_b8;
  local_150 = local_c0;
  uStack_138 = uStack_a8;
  uStack_140 = local_b0;
  local_188 = uVar10;
  if (plVar9 != (long *)0x0) {
    do {
      lVar11 = *plVar9;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 00750084 to 0075008b has its CatchHandler @ 007500ec */
      <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<libdiscore_common::core::http::ParsedHttpResponse<std::collections::hash::set::HashSet<alloc::string::String>>,{backref_37}::HttpError>>>>
      ::drop_slow(param_2);
    }
  }
  *param_2 = 0;
  param_1[0xd] = uStack_120;
  param_1[0xc] = uStack_128;
  param_1[0xf] = local_110;
  param_1[0xe] = uStack_118;
  param_1[0x11] = local_100;
  param_1[0x10] = uStack_108;
  param_1[5] = uStack_160;
  param_1[4] = uStack_168;
  param_1[7] = local_150;
  param_1[6] = uStack_158;
  param_1[0x12] = uStack_f8;
  param_1[9] = uStack_140;
  param_1[8] = uStack_148;
  param_1[0xb] = local_130;
  param_1[10] = uStack_138;
  param_1[1] = uStack_180;
  *param_1 = local_188;
  param_1[3] = uStack_170;
  param_1[2] = uStack_178;
  return;
}


// ===== 0075011c  FUN_0075011c =====

void FUN_0075011c(ulong *param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  undefined1 *puVar6;
  char *pcVar7;
  char cVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  ulong local_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong local_138;
  ulong uStack_130;
  ulong local_128;
  ulong uStack_120;
  ulong local_118;
  ulong uStack_110;
  ulong local_108;
  ulong uStack_100;
  ulong local_f8;
  ulong uStack_f0;
  ulong local_e8;
  ulong uStack_e0;
  ulong local_d8;
  ulong local_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong local_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong local_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong local_70;
  ulong uStack_68;
  ulong local_60;
  char local_34;
  char local_33;
  
  lVar11 = *param_2;
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              ("called after complete",0x2b,&PTR_s__root__cargo_registry_src_index__00ad79a8);
  }
  uVar10 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar10 != 0) {
    puVar6 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar10);
    if (&DAT_00000001 < puVar6) goto LAB_00750170;
LAB_00750200:
    puVar6 = (undefined1 *)FUN_0072ca84(uVar10 & 0xffffffff,puVar6,0);
    if (puVar6 == (undefined1 *)0x0) goto LAB_00750214;
LAB_00750174:
    cVar2 = puVar6[0x44];
    cVar3 = puVar6[0x45];
    cVar8 = cVar3;
    if (cVar2 != '\x01') {
LAB_00750190:
      puVar6[0x45] = cVar8;
      local_150 = local_150 & 0xffffffffff000000;
      <tokio::task::coop::RestoreOnPending_as_core::ops::drop::Drop>::drop((ulong)&local_150 | 1);
      local_34 = cVar2;
      local_33 = cVar3;
      goto LAB_0075021c;
    }
    if (cVar3 != '\0') {
      cVar8 = cVar3 + -1;
      goto LAB_00750190;
    }
    tokio::task::coop::register_waker(param_3);
    local_150 = local_150 & 0xffffffffff000000;
    pcVar7 = (char *)((ulong)&local_150 | 1);
LAB_007502a4:
    <tokio::task::coop::RestoreOnPending_as_core::ops::drop::Drop>::drop(pcVar7);
LAB_00750318:
    *param_1 = 0xfffffffffffffffd;
    return;
  }
  uVar10 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
           lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
  puVar6 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar10);
  if (puVar6 <= &DAT_00000001) goto LAB_00750200;
LAB_00750170:
  if (puVar6 != (undefined1 *)0x0) goto LAB_00750174;
LAB_00750214:
  local_34 = '\0';
  local_33 = '\0';
LAB_0075021c:
  puVar1 = (ulong *)(lVar11 + 0xb0);
                    /* try { // try from 00750228 to 0075028b has its CatchHandler @ 007503f8 */
  uVar5 = <tokio::sync::oneshot::[9]::tokio::sync::oneshot::State>::load(lVar11 + 0xb0,2);
  if ((uVar5 >> 1 & 1) == 0) {
    if ((uVar5 >> 2 & 1) == 0) {
      if ((uVar5 & 1) == 0) {
LAB_00750280:
        <tokio::sync::oneshot::tokio::sync::oneshot::Task>::set_task(lVar11 + 0xa0,param_3);
        do {
          uVar10 = *puVar1;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar10 | 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (((uint)uVar10 >> 1 & 1) != 0) goto LAB_007502bc;
      }
      else if ((*(long *)(lVar11 + 0xa8) != ((long *)*param_3)[1]) ||
              (*(long *)(lVar11 + 0xa0) != *(long *)*param_3)) {
        do {
          uVar10 = *puVar1;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar10 & 0xfffffffffffffffe;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (((uint)uVar10 >> 1 & 1) != 0) {
          do {
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = *puVar1 | 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          goto LAB_007502bc;
        }
        <tokio::sync::oneshot::tokio::sync::oneshot::Task>::drop_task(lVar11 + 0xa0);
        goto LAB_00750280;
      }
      pcVar7 = &local_34;
      goto LAB_007502a4;
    }
  }
  else {
LAB_007502bc:
    uVar10 = *(ulong *)(lVar11 + 0x10);
    local_34 = '\0';
    *(undefined8 *)(lVar11 + 0x10) = 0xfffffffffffffffe;
    if (uVar10 != 0xfffffffffffffffe) {
      uStack_88 = *(ulong *)(lVar11 + 0x60);
      local_90 = *(ulong *)(lVar11 + 0x58);
      uStack_78 = *(ulong *)(lVar11 + 0x70);
      uStack_80 = *(ulong *)(lVar11 + 0x68);
      uStack_68 = *(ulong *)(lVar11 + 0x80);
      local_70 = *(ulong *)(lVar11 + 0x78);
      local_60 = *(ulong *)(lVar11 + 0x88);
      uStack_c8 = *(ulong *)(lVar11 + 0x20);
      local_d0 = *(ulong *)(lVar11 + 0x18);
      uStack_b8 = *(ulong *)(lVar11 + 0x30);
      uStack_c0 = *(ulong *)(lVar11 + 0x28);
      uStack_a8 = *(ulong *)(lVar11 + 0x40);
      local_b0 = *(ulong *)(lVar11 + 0x38);
      uStack_98 = *(ulong *)(lVar11 + 0x50);
      uStack_a0 = *(ulong *)(lVar11 + 0x48);
      <tokio::task::coop::RestoreOnPending_as_core::ops::drop::Drop>::drop(&local_34);
      if (uVar10 != 0xfffffffffffffffd) goto LAB_00750334;
      goto LAB_00750318;
    }
  }
  local_34 = '\0';
  <tokio::task::coop::RestoreOnPending_as_core::ops::drop::Drop>::drop(&local_34);
  uVar10 = 0xfffffffffffffffe;
LAB_00750334:
  local_d8 = local_60;
  plVar9 = (long *)*param_2;
  uStack_100 = uStack_88;
  local_108 = local_90;
  uStack_f0 = uStack_78;
  local_f8 = uStack_80;
  uStack_e0 = uStack_68;
  local_e8 = local_70;
  uStack_140 = uStack_c8;
  uStack_148 = local_d0;
  uStack_130 = uStack_b8;
  local_138 = uStack_c0;
  uStack_120 = uStack_a8;
  local_128 = local_b0;
  uStack_110 = uStack_98;
  local_118 = uStack_a0;
  local_150 = uVar10;
  if (plVar9 != (long *)0x0) {
    do {
      lVar11 = *plVar9;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 0075038c to 00750393 has its CatchHandler @ 007503d4 */
      <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<libdiscore_common::core::http::ParsedHttpResponse<alloc::string::String>,{backref_37}::HttpError>>>>
      ::drop_slow(param_2);
    }
  }
  *param_2 = 0;
  param_1[9] = local_108;
  param_1[8] = uStack_110;
  param_1[0xb] = local_f8;
  param_1[10] = uStack_100;
  param_1[0xd] = local_e8;
  param_1[0xc] = uStack_f0;
  param_1[0xf] = local_d8;
  param_1[0xe] = uStack_e0;
  param_1[1] = uStack_148;
  *param_1 = local_150;
  param_1[3] = local_138;
  param_1[2] = uStack_140;
  param_1[5] = local_128;
  param_1[4] = uStack_130;
  param_1[7] = local_118;
  param_1[6] = uStack_120;
  return;
}


// ===== 00750410  FUN_00750410 =====

void FUN_00750410(ulong *param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  undefined1 *puVar6;
  char *pcVar7;
  char cVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  ulong local_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong local_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong local_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong local_110;
  ulong uStack_108;
  ulong local_100;
  ulong uStack_f8;
  ulong local_f0;
  ulong uStack_e8;
  ulong local_e0;
  ulong uStack_d8;
  ulong local_d0;
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
  ulong uStack_70;
  ulong uStack_68;
  char local_54;
  char local_53;
  
  lVar11 = *param_2;
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              ("called after complete",0x2b,&PTR_s__root__cargo_registry_src_index__00ad79a8);
  }
  uVar10 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar10 != 0) {
    puVar6 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar10);
    if (&DAT_00000001 < puVar6) goto LAB_00750464;
LAB_007504f4:
    puVar6 = (undefined1 *)FUN_0072ca84(uVar10 & 0xffffffff,puVar6,0);
    if (puVar6 == (undefined1 *)0x0) goto LAB_00750508;
LAB_00750468:
    cVar2 = puVar6[0x44];
    cVar3 = puVar6[0x45];
    cVar8 = cVar3;
    if (cVar2 != '\x01') {
LAB_00750484:
      puVar6[0x45] = cVar8;
      local_188 = local_188 & 0xffffffffff000000;
      <tokio::task::coop::RestoreOnPending_as_core::ops::drop::Drop>::drop((ulong)&local_188 | 1);
      local_54 = cVar2;
      local_53 = cVar3;
      goto LAB_00750510;
    }
    if (cVar3 != '\0') {
      cVar8 = cVar3 + -1;
      goto LAB_00750484;
    }
    tokio::task::coop::register_waker(param_3);
    local_188 = local_188 & 0xffffffffff000000;
    pcVar7 = (char *)((ulong)&local_188 | 1);
LAB_007505a0:
    <tokio::task::coop::RestoreOnPending_as_core::ops::drop::Drop>::drop(pcVar7);
LAB_0075060c:
    *param_1 = 0xfffffffffffffffd;
    return;
  }
  uVar10 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
           lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
  puVar6 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar10);
  if (puVar6 <= &DAT_00000001) goto LAB_007504f4;
LAB_00750464:
  if (puVar6 != (undefined1 *)0x0) goto LAB_00750468;
LAB_00750508:
  local_54 = '\0';
  local_53 = '\0';
LAB_00750510:
  puVar1 = (ulong *)(lVar11 + 0x30);
                    /* try { // try from 0075051c to 00750587 has its CatchHandler @ 00750704 */
  uVar5 = <tokio::sync::oneshot::[9]::tokio::sync::oneshot::State>::load(lVar11 + 0x30,2);
  if ((uVar5 >> 1 & 1) == 0) {
    if ((uVar5 >> 2 & 1) == 0) {
      if ((uVar5 & 1) == 0) {
LAB_0075057c:
        <tokio::sync::oneshot::tokio::sync::oneshot::Task>::set_task(lVar11 + 0x20,param_3);
        do {
          uVar10 = *puVar1;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar10 | 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (((uint)uVar10 >> 1 & 1) != 0) goto LAB_007505b8;
      }
      else if ((*(long *)(lVar11 + 0x28) != ((long *)*param_3)[1]) ||
              (*(long *)(lVar11 + 0x20) != *(long *)*param_3)) {
        do {
          uVar10 = *puVar1;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar10 & 0xfffffffffffffffe;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (((uint)uVar10 >> 1 & 1) != 0) {
          do {
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = *puVar1 | 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          goto LAB_007505b8;
        }
        <tokio::sync::oneshot::tokio::sync::oneshot::Task>::drop_task(lVar11 + 0x20);
        goto LAB_0075057c;
      }
      pcVar7 = &local_54;
      goto LAB_007505a0;
    }
  }
  else {
LAB_007505b8:
    uVar10 = *(ulong *)(lVar11 + 0x38);
    local_54 = '\0';
    *(undefined8 *)(lVar11 + 0x38) = 0xfffffffffffffffe;
    if (uVar10 != 0xfffffffffffffffe) {
      uStack_98 = *(ulong *)(lVar11 + 0x98);
      local_a0 = *(ulong *)(lVar11 + 0x90);
      uStack_88 = *(ulong *)(lVar11 + 0xa8);
      local_90 = *(ulong *)(lVar11 + 0xa0);
      uStack_78 = *(ulong *)(lVar11 + 0xb8);
      local_80 = *(ulong *)(lVar11 + 0xb0);
      uStack_68 = *(ulong *)(lVar11 + 200);
      uStack_70 = *(ulong *)(lVar11 + 0xc0);
      uStack_c8 = *(ulong *)(lVar11 + 0x68);
      local_d0 = *(ulong *)(lVar11 + 0x60);
      uStack_b8 = *(ulong *)(lVar11 + 0x78);
      local_c0 = *(ulong *)(lVar11 + 0x70);
      uStack_a8 = *(ulong *)(lVar11 + 0x88);
      local_b0 = *(ulong *)(lVar11 + 0x80);
      uStack_e8 = *(ulong *)(lVar11 + 0x48);
      local_f0 = *(ulong *)(lVar11 + 0x40);
      uStack_d8 = *(ulong *)(lVar11 + 0x58);
      local_e0 = *(ulong *)(lVar11 + 0x50);
      <tokio::task::coop::RestoreOnPending_as_core::ops::drop::Drop>::drop(&local_54);
      if (uVar10 != 0xfffffffffffffffd) goto LAB_00750628;
      goto LAB_0075060c;
    }
  }
  local_54 = '\0';
  <tokio::task::coop::RestoreOnPending_as_core::ops::drop::Drop>::drop(&local_54);
  uVar10 = 0xfffffffffffffffe;
LAB_00750628:
  plVar9 = (long *)*param_2;
  uStack_128 = uStack_98;
  local_130 = local_a0;
  uStack_118 = uStack_88;
  uStack_120 = local_90;
  uStack_f8 = uStack_68;
  local_100 = uStack_70;
  uStack_108 = uStack_78;
  local_110 = local_80;
  uStack_168 = uStack_d8;
  uStack_170 = local_e0;
  uStack_158 = uStack_c8;
  uStack_160 = local_d0;
  uStack_178 = uStack_e8;
  uStack_180 = local_f0;
  uStack_148 = uStack_b8;
  local_150 = local_c0;
  uStack_138 = uStack_a8;
  uStack_140 = local_b0;
  local_188 = uVar10;
  if (plVar9 != (long *)0x0) {
    do {
      lVar11 = *plVar9;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 00750678 to 0075067f has its CatchHandler @ 007506e0 */
      <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<libdiscore_common::core::http::ParsedHttpResponse<{backref_41}::stores::blocked_domains::DeltaResponse>,{backref_37}::HttpError>>>>
      ::drop_slow(param_2);
    }
  }
  *param_2 = 0;
  param_1[0xd] = uStack_120;
  param_1[0xc] = uStack_128;
  param_1[0xf] = local_110;
  param_1[0xe] = uStack_118;
  param_1[0x11] = local_100;
  param_1[0x10] = uStack_108;
  param_1[5] = uStack_160;
  param_1[4] = uStack_168;
  param_1[7] = local_150;
  param_1[6] = uStack_158;
  param_1[0x12] = uStack_f8;
  param_1[9] = uStack_140;
  param_1[8] = uStack_148;
  param_1[0xb] = local_130;
  param_1[10] = uStack_138;
  param_1[1] = uStack_180;
  *param_1 = local_188;
  param_1[3] = uStack_170;
  param_1[2] = uStack_178;
  return;
}


// ===== 0075071c  FUN_0075071c =====

void FUN_0075071c(long *param_1,long *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  byte bVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  uint uVar12;
  uint extraout_w8;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long *plVar18;
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
  undefined4 local_528;
  undefined3 local_478;
  undefined1 uStack_475;
  long local_420;
  long lStack_418;
  long lStack_410;
  long lStack_408;
  long local_400;
  long lStack_3f8;
  long lStack_3f0;
  long lStack_3e8;
  long local_3e0;
  long lStack_3d8;
  long lStack_3d0;
  long lStack_3c8;
  long local_3c0;
  long lStack_3b8;
  long lStack_3b0;
  long lStack_3a8;
  long local_3a0;
  long lStack_398;
  long lStack_390;
  long lStack_388;
  long local_380;
  long lStack_378;
  long lStack_370;
  long lStack_368;
  long local_360;
  long lStack_358;
  long local_350;
  long local_160;
  long lStack_158;
  long local_150;
  long lStack_148;
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
  long local_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long local_c0;
  long lStack_b8;
  long local_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  long lStack_90;
  long local_88;
  undefined1 auStack_71 [17];
  
  if (*(char *)(*param_2 + 0x28) != '\0') {
LAB_00750db8:
    lVar13 = -2;
LAB_00750dbc:
    *param_1 = lVar13;
    return;
  }
  bVar7 = *(byte *)(param_2 + 0xa1);
  if (bVar7 < 2) {
    if (bVar7 == 0) {
      plVar18 = (long *)param_2[0x1c];
      param_2[0x32] = param_2[0x16];
      param_2[0x31] = param_2[0x15];
      param_2[0x34] = param_2[0x18];
      param_2[0x33] = param_2[0x17];
      param_2[0x36] = param_2[0x1a];
      param_2[0x35] = param_2[0x19];
      param_2[0x2a] = param_2[0xe];
      param_2[0x29] = param_2[0xd];
      param_2[0x2c] = param_2[0x10];
      param_2[0x2b] = param_2[0xf];
      param_2[0x37] = param_2[0x1b];
      param_2[0x38] = (long)plVar18;
      param_2[0x2e] = param_2[0x12];
      param_2[0x2d] = param_2[0x11];
      param_2[0x30] = param_2[0x14];
      param_2[0x2f] = param_2[0x13];
      *(undefined1 *)(param_2 + 0x54) = 0;
      param_2[0x22] = param_2[6];
      param_2[0x21] = param_2[5];
      param_2[0x24] = param_2[8];
      param_2[0x23] = param_2[7];
      param_2[0x26] = param_2[10];
      param_2[0x25] = param_2[9];
      param_2[0x28] = param_2[0xc];
      param_2[0x27] = param_2[0xb];
      param_2[0x1e] = param_2[2];
      param_2[0x1d] = param_2[1];
      param_2[0x20] = param_2[4];
      param_2[0x1f] = param_2[3];
LAB_00750824:
      *(undefined4 *)((long)param_2 + 0x2a4) = 0x1010101;
      param_2[0x4e] = param_2[0x32];
      param_2[0x4d] = param_2[0x31];
      param_2[0x50] = param_2[0x34];
      param_2[0x4f] = param_2[0x33];
      param_2[0x52] = param_2[0x36];
      param_2[0x51] = param_2[0x35];
      *(undefined1 *)(param_2 + 0x55) = 1;
      param_2[0x46] = param_2[0x2a];
      param_2[0x45] = param_2[0x29];
      param_2[0x48] = param_2[0x2c];
      param_2[0x47] = param_2[0x2b];
      *(undefined1 *)((long)param_2 + 0x2a3) = 1;
      param_2[0x53] = param_2[0x37];
      param_2[0x4a] = param_2[0x2e];
      param_2[0x49] = param_2[0x2d];
      param_2[0x4c] = param_2[0x30];
      param_2[0x4b] = param_2[0x2f];
      *(undefined2 *)((long)param_2 + 0x2a1) = 0;
      local_b0 = 0;
      param_2[0x3e] = param_2[0x22];
      param_2[0x3d] = param_2[0x21];
      param_2[0x40] = param_2[0x24];
      param_2[0x3f] = param_2[0x23];
      param_2[0x42] = param_2[0x26];
      param_2[0x41] = param_2[0x25];
      param_2[0x44] = param_2[0x28];
      param_2[0x43] = param_2[0x27];
      param_2[0x3a] = param_2[0x1e];
      param_2[0x39] = param_2[0x1d];
      param_2[0x3c] = param_2[0x20];
      param_2[0x3b] = param_2[0x1f];
      local_150 = -2;
      lStack_158 = 1;
      local_160 = 1;
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      plVar8 = (long *)FUN_004b25a4(0xb8,8);
      if (plVar8 == (long *)0x0) {
                    /* try { // try from 00750f2c to 00750f37 has its CatchHandler @ 00751250 */
                    /* WARNING: Subroutine does not return */
        alloc::alloc::handle_alloc_error(8,0xb8);
      }
      plVar8[0x11] = lStack_d8;
      plVar8[0x10] = lStack_e0;
      plVar8[0x13] = lStack_c8;
      plVar8[0x12] = lStack_d0;
      plVar8[0x15] = lStack_b8;
      plVar8[0x14] = local_c0;
      plVar8[0x16] = local_b0;
      plVar8[9] = lStack_118;
      plVar8[8] = local_120;
      plVar8[0xb] = lStack_108;
      plVar8[10] = lStack_110;
      plVar8[0xd] = lStack_f8;
      plVar8[0xc] = local_100;
      plVar8[0xf] = local_e8;
      plVar8[0xe] = lStack_f0;
      plVar8[1] = lStack_158;
      *plVar8 = local_160;
      plVar8[3] = lStack_148;
      plVar8[2] = local_150;
      plVar8[5] = lStack_138;
      plVar8[4] = local_140;
      plVar8[7] = lStack_128;
      plVar8[6] = lStack_130;
      do {
        lVar13 = *plVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = lVar13 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar13 < 0) goto LAB_007510c0;
      lVar26 = param_2[0x3a];
      lVar24 = param_2[0x39];
      lVar29 = param_2[0x3c];
      lVar28 = param_2[0x3b];
      uVar1 = *(undefined4 *)((long)param_2 + 0x284);
      lVar20 = param_2[0x4a];
      lVar23 = param_2[0x4b];
      lVar13 = param_2[0x50];
      lVar22 = param_2[0x52];
      lStack_3f8 = param_2[0x43];
      local_400 = param_2[0x42];
      lStack_3e8 = param_2[0x45];
      lStack_3f0 = param_2[0x44];
      lVar14 = param_2[0x3d];
      lVar21 = param_2[0x4c];
      local_478 = (undefined3)*(undefined4 *)((long)param_2 + 0x281);
      uStack_475 = (undefined1)uVar1;
      lStack_3d8 = param_2[0x47];
      local_3e0 = param_2[0x46];
      lStack_3c8 = param_2[0x49];
      lStack_3d0 = param_2[0x48];
      lVar15 = param_2[0x4f];
      lStack_418 = param_2[0x3f];
      local_420 = param_2[0x3e];
      lStack_408 = param_2[0x41];
      lStack_410 = param_2[0x40];
      lVar16 = param_2[0x51];
      param_2[0x56] = (long)plVar8;
      lVar27 = param_2[0x4e];
      lVar25 = param_2[0x4d];
      *(undefined8 *)((long)param_2 + 0x2a1) = DAT_002a14c8;
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      puVar9 = (undefined8 *)FUN_004b25a4(8,8);
      if (puVar9 == (undefined8 *)0x0) {
                    /* try { // try from 00750f3c to 00750f4f has its CatchHandler @ 007511c0 */
                    /* WARNING: Subroutine does not return */
        alloc::alloc::handle_alloc_error(8,8);
      }
      *puVar9 = plVar8;
      local_528 = CONCAT13(uStack_475,local_478);
      *(char *)(param_2 + 0x6e) = (char)lVar13;
      param_2[0x68] = lVar20;
      param_2[0x69] = lVar23;
      param_2[0x6a] = lVar21;
      param_2[0x67] = lStack_3c8;
      param_2[0x6d] = lVar15;
      param_2[0x70] = lVar22;
      param_2[100] = local_3e0;
      param_2[99] = lStack_3e8;
      param_2[0x66] = lStack_3d0;
      param_2[0x65] = lStack_3d8;
      param_2[0x71] = (long)puVar9;
      param_2[0x73] = (long)plVar18;
      param_2[0x5c] = local_420;
      param_2[0x5b] = lVar14;
      param_2[0x5e] = lStack_410;
      param_2[0x5d] = lStack_418;
      *(undefined1 *)(param_2 + 0xa0) = 0;
      param_2[0x60] = local_400;
      param_2[0x5f] = lStack_408;
      param_2[0x62] = lStack_3f0;
      param_2[0x61] = lStack_3f8;
      param_2[0x58] = lVar26;
      param_2[0x57] = lVar24;
      param_2[0x5a] = lVar29;
      param_2[0x59] = lVar28;
      param_2[0x6c] = lVar27;
      param_2[0x6b] = lVar25;
      *(undefined4 *)((long)param_2 + 0x371) = local_528;
      *(undefined4 *)((long)param_2 + 0x374) = uVar1;
      param_2[0x6f] = lVar16;
      param_2[0x72] = (long)&PTR_FUN_00ad77f0;
      local_160 = lVar24;
      lStack_158 = lVar26;
      local_150 = lVar28;
      lStack_148 = lVar29;
      local_140 = lVar14;
      lStack_138 = local_420;
      lStack_130 = lStack_418;
      lStack_128 = lStack_410;
      local_120 = lStack_408;
      lStack_118 = local_400;
      lStack_110 = lStack_3f8;
      lStack_108 = lStack_3f0;
      local_100 = lStack_3e8;
      lStack_f8 = local_3e0;
      lStack_f0 = lStack_3d8;
      local_e8 = lStack_3d0;
      lStack_e0 = lStack_3c8;
LAB_00750aac:
      *(undefined1 *)((long)param_2 + 0x501) = 1;
      param_2[0x90] = (long)plVar18;
      param_2[0x89] = param_2[0x6c];
      param_2[0x88] = param_2[0x6b];
      param_2[0x8b] = param_2[0x6e];
      param_2[0x8a] = param_2[0x6d];
      *(undefined1 *)(param_2 + 0x9f) = 0;
      param_2[0x8f] = param_2[0x72];
      param_2[0x8e] = param_2[0x71];
      param_2[0x8d] = param_2[0x70];
      param_2[0x8c] = param_2[0x6f];
      param_2[0x83] = param_2[0x66];
      param_2[0x82] = param_2[0x65];
      param_2[0x85] = param_2[0x68];
      param_2[0x84] = param_2[0x67];
      param_2[0x87] = param_2[0x6a];
      param_2[0x86] = param_2[0x69];
      param_2[0x79] = param_2[0x5c];
      param_2[0x78] = param_2[0x5b];
      param_2[0x7b] = param_2[0x5e];
      param_2[0x7a] = param_2[0x5d];
      param_2[0x7f] = param_2[0x62];
      param_2[0x7e] = param_2[0x61];
      param_2[0x81] = param_2[100];
      param_2[0x80] = param_2[99];
      param_2[0x7d] = param_2[0x60];
      param_2[0x7c] = param_2[0x5f];
      param_2[0x75] = param_2[0x58];
      param_2[0x74] = param_2[0x57];
      param_2[0x77] = param_2[0x5a];
      param_2[0x76] = param_2[0x59];
LAB_00750b0c:
      uVar17 = 1;
      param_2[0x91] = (long)plVar18;
      param_2[0x92] = (long)plVar18;
      param_2[0x93] = 1;
      *(undefined1 *)(param_2 + 0x96) = 0;
LAB_00750b28:
      param_2[0x94] = (long)plVar18;
      param_2[0x95] = uVar17;
      lVar13 = *plVar18;
      if (*(ulong *)(lVar13 + 0x1e8) < uVar17) {
LAB_00750b40:
        *(undefined1 *)(param_2 + 0x96) = 1;
LAB_00750c40:
        lVar13 = param_2[0x74];
        local_350 = param_2[0x8f];
        lStack_378 = param_2[0x8a];
        local_380 = param_2[0x89];
        lStack_368 = param_2[0x8c];
        lStack_370 = param_2[0x8b];
        lStack_358 = param_2[0x8e];
        local_360 = param_2[0x8d];
        *(undefined1 *)((long)param_2 + 0x501) = 0;
        lStack_3b8 = param_2[0x82];
        local_3c0 = param_2[0x81];
        lStack_3a8 = param_2[0x84];
        lStack_3b0 = param_2[0x83];
        *(undefined1 *)(param_2 + 0x9f) = 1;
        lStack_398 = param_2[0x86];
        local_3a0 = param_2[0x85];
        lStack_388 = param_2[0x88];
        lStack_390 = param_2[0x87];
        *(undefined1 *)(param_2 + 0xa0) = 1;
        lStack_3f8 = param_2[0x7a];
        local_400 = param_2[0x79];
        lStack_3e8 = param_2[0x7c];
        lStack_3f0 = param_2[0x7b];
        lStack_3d8 = param_2[0x7e];
        local_3e0 = param_2[0x7d];
        lStack_3c8 = param_2[0x80];
        lStack_3d0 = param_2[0x7f];
        lStack_418 = param_2[0x76];
        local_420 = param_2[0x75];
        lStack_408 = param_2[0x78];
        lStack_410 = param_2[0x77];
        if (lVar13 != -1) {
LAB_00750d1c:
                    /* try { // try from 00750d5c to 00750d63 has its CatchHandler @ 00751190 */
          FUN_0074d51c(param_2 + 0x57);
          if (lVar13 != 2) {
            local_b0 = lStack_378;
            lStack_b8 = local_380;
            lStack_a0 = lStack_368;
            local_a8 = lStack_370;
            lStack_90 = lStack_358;
            local_98 = local_360;
            local_88 = local_350;
            lStack_f0 = lStack_3b8;
            lStack_f8 = local_3c0;
            lStack_e0 = lStack_3a8;
            local_e8 = lStack_3b0;
            lStack_d0 = lStack_398;
            lStack_d8 = local_3a0;
            local_c0 = lStack_388;
            lStack_c8 = lStack_390;
            lStack_130 = lStack_3f8;
            lStack_138 = local_400;
            local_120 = lStack_3e8;
            lStack_128 = lStack_3f0;
            lStack_110 = lStack_3d8;
            lStack_118 = local_3e0;
            local_100 = lStack_3c8;
            lStack_108 = lStack_3d0;
            local_150 = lStack_418;
            lStack_158 = local_420;
            local_140 = lStack_408;
            lStack_148 = lStack_410;
                    /* try { // try from 00750fb4 to 00750fd7 has its CatchHandler @ 007511ac */
            local_160 = lVar13;
                    /* WARNING: Subroutine does not return */
            core::result::unwrap_failed
                      ("Broken HTTP sender",0x12,&local_160,&PTR_thunk_FUN_0074d748_00ad7908,
                       &PTR_s_common_rust_src_core_http_rs_00ad7828);
          }
          *(undefined1 *)((long)param_2 + 0x2a1) = 0;
          goto LAB_00750d70;
        }
      }
      else {
LAB_00750bb4:
        lStack_158 = 0;
        local_150 = 0;
        param_2[0x97] = lVar13 + 0x1c0;
        param_2[0x98] = 0;
        param_2[0x9b] = 0;
        param_2[0x9a] = 0;
        param_2[0x99] = local_160;
        param_2[0x9c] = uVar17;
        param_2[0x9d] = uVar17;
        *(undefined1 *)(param_2 + 0x9e) = 0;
LAB_00750be4:
                    /* try { // try from 00750be4 to 00750bf3 has its CatchHandler @ 00751134 */
        bVar7 = <tokio::sync::batch_semaphore::Acquire_as_core::future::future::Future>::poll
                          (param_2 + 0x97,param_3);
        if (bVar7 != 2) {
                    /* try { // try from 00750c18 to 00750c1f has its CatchHandler @ 00751100 */
          <tokio::sync::batch_semaphore::Acquire_as_core::ops::drop::Drop>::drop(param_2 + 0x97);
          if (param_2[0x98] != 0) {
                    /* try { // try from 00750c30 to 00750c33 has its CatchHandler @ 007510dc */
            (**(code **)(param_2[0x98] + 0x18))(param_2[0x99]);
          }
          *(undefined1 *)(param_2 + 0x96) = 1;
          if ((bVar7 & 1) != 0) goto LAB_00750c40;
          lStack_b8 = param_2[0x89];
          local_c0 = param_2[0x88];
          local_a8 = param_2[0x8b];
          local_b0 = param_2[0x8a];
          local_98 = param_2[0x8d];
          lStack_a0 = param_2[0x8c];
          *(undefined1 *)(param_2 + 0x9f) = 1;
          local_88 = param_2[0x8f];
          lStack_90 = param_2[0x8e];
          lStack_f8 = param_2[0x81];
          local_100 = param_2[0x80];
          *(undefined1 *)((long)param_2 + 0x501) = 0;
          local_e8 = param_2[0x83];
          lStack_f0 = param_2[0x82];
          lStack_d8 = param_2[0x85];
          lStack_e0 = param_2[0x84];
          lStack_c8 = param_2[0x87];
          lStack_d0 = param_2[0x86];
          lStack_138 = param_2[0x79];
          local_140 = param_2[0x78];
          lStack_128 = param_2[0x7b];
          lStack_130 = param_2[0x7a];
          lStack_118 = param_2[0x7d];
          local_120 = param_2[0x7c];
          lStack_108 = param_2[0x7f];
          lStack_110 = param_2[0x7e];
          lStack_158 = param_2[0x75];
          local_160 = param_2[0x74];
          lStack_148 = param_2[0x77];
          local_150 = param_2[0x76];
          lVar13 = *(long *)param_2[0x91];
                    /* try { // try from 00750cfc to 00750d0f has its CatchHandler @ 007510ec */
          FUN_00739f2c(lVar13 + 0x80,&local_160);
          <tokio::sync::task::atomic_waker::[0]::tokio::sync::task::atomic_waker::AtomicWaker>::wake
                    (lVar13 + 0x100);
          lVar13 = 2;
          *(undefined2 *)(param_2 + 0xa0) = 1;
          goto LAB_00750d1c;
        }
        *(undefined1 *)(param_2 + 0x96) = 4;
        *(undefined1 *)(param_2 + 0x9f) = 3;
        *(undefined1 *)(param_2 + 0xa0) = 3;
      }
      uVar11 = 3;
LAB_00750d90:
      uVar10 = *param_3;
      *(undefined1 *)(param_2 + 0x54) = uVar11;
      *(undefined1 *)(param_2 + 0xa1) = 3;
      <futures_core::task::__internal::atomic_waker::futures_core::task::__internal::atomic_waker::AtomicWaker>
      ::register(*param_2 + 0x10,uVar10);
      if (*(char *)(*param_2 + 0x28) == '\0') {
        lVar13 = -3;
        goto LAB_00750dbc;
      }
      goto LAB_00750db8;
    }
    core::panicking::panic_const::panic_const_async_fn_resumed
              (&PTR_s_common_rust_src_core_http_rs_00ad78a0);
LAB_00751010:
    core::panicking::panic_const::panic_const_async_fn_resumed_panic
              (&PTR_s_common_rust_src_core_http_rs_00ad78a0);
    uVar12 = extraout_w8;
  }
  else {
    if (bVar7 != 3) goto LAB_00751010;
    bVar7 = *(byte *)(param_2 + 0x54);
    uVar12 = (uint)bVar7;
    if (2 < bVar7) {
      if (bVar7 == 3) {
        bVar7 = *(byte *)(param_2 + 0xa0);
        if (bVar7 < 2) {
          if (bVar7 != 0) {
                    /* try { // try from 00751044 to 0075105f has its CatchHandler @ 007510e4 */
            core::panicking::panic_const::panic_const_async_fn_resumed
                      (&PTR_s__root__cargo_registry_src_index__00ad7870);
            goto LAB_007510c0;
          }
          plVar18 = (long *)param_2[0x73];
          goto LAB_00750aac;
        }
        if (bVar7 != 3) {
          core::panicking::panic_const::panic_const_async_fn_resumed_panic
                    (&PTR_s__root__cargo_registry_src_index__00ad7870);
          goto LAB_007510c0;
        }
        bVar7 = *(byte *)(param_2 + 0x9f);
        if (bVar7 < 2) {
          if (bVar7 != 0) {
                    /* try { // try from 00751064 to 0075108f has its CatchHandler @ 007510cc */
            core::panicking::panic_const::panic_const_async_fn_resumed
                      (&PTR_s__root__cargo_registry_src_index__00ad7888);
            goto LAB_007510c0;
          }
          plVar18 = (long *)param_2[0x90];
          goto LAB_00750b0c;
        }
        if (bVar7 != 3) {
          core::panicking::panic_const::panic_const_async_fn_resumed_panic
                    (&PTR_s__root__cargo_registry_src_index__00ad7888);
          goto LAB_007510c0;
        }
        bVar7 = *(byte *)(param_2 + 0x96);
        if (bVar7 < 3) {
          if (bVar7 != 0) {
            if (bVar7 == 1) {
                    /* try { // try from 007510a4 to 007510bf has its CatchHandler @ 007510c4 */
              core::panicking::panic_const::panic_const_async_fn_resumed
                        (&PTR_s__root__cargo_registry_src_index__00ad7858);
            }
            else {
              core::panicking::panic_const::panic_const_async_fn_resumed_panic
                        (&PTR_s__root__cargo_registry_src_index__00ad7858);
            }
            goto LAB_007510c0;
          }
          plVar18 = (long *)param_2[0x92];
          uVar17 = param_2[0x93];
          goto LAB_00750b28;
        }
        if (bVar7 != 3) goto LAB_00750be4;
        uVar17 = param_2[0x95];
        lVar13 = *(long *)param_2[0x94];
        if (uVar17 <= *(ulong *)(lVar13 + 0x1e8)) goto LAB_00750bb4;
        goto LAB_00750b40;
      }
LAB_00750d70:
                    /* try { // try from 00750d70 to 00750d7f has its CatchHandler @ 00751194 */
      FUN_0075011c(&local_160,param_2 + 0x56,param_3);
      lVar5 = local_e8;
      lVar4 = lStack_f0;
      lVar29 = lStack_f8;
      lVar28 = local_100;
      lVar27 = lStack_108;
      lVar26 = lStack_110;
      lVar25 = lStack_118;
      lVar24 = local_120;
      lVar23 = lStack_128;
      lVar22 = lStack_130;
      lVar21 = lStack_138;
      lVar20 = local_140;
      lVar16 = lStack_148;
      lVar15 = local_150;
      lVar14 = lStack_158;
      lVar13 = local_160;
      if (local_160 != -3) {
                    /* try { // try from 00750e18 to 00750e1f has its CatchHandler @ 007511a4 */
        FUN_0074cf7c(param_2 + 0x56);
        if (lVar13 != -2) {
          *(undefined1 *)((long)param_2 + 0x2a3) = 0;
          *(undefined2 *)((long)param_2 + 0x2a1) = 0;
          plVar18 = (long *)param_2[0x53];
          if (plVar18 != (long *)0x0) {
            do {
              lVar19 = *plVar18;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar3) {
                *plVar18 = lVar19 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar19 + -1 == 0) {
              DataMemoryBarrier(2,1);
                    /* try { // try from 00750e84 to 00750e8b has its CatchHandler @ 007510d4 */
              <alloc::sync::[n]::alloc::sync::Arc<std::sync::poison::mutex::Mutex<core::option::Option<alloc::boxed::Box<dyn_Trait<Assoc=X>+{backref_26}::ops::function::Fn<(libdiscore_common::core::http::ProgressEvent)>+{backref_26}::marker::Sync+{backref_71}::Send>>>>>
              ::drop_slow(param_2 + 0x53);
            }
          }
          *(undefined1 *)(param_2 + 0x55) = 0;
          *(undefined4 *)((long)param_2 + 0x2a4) = 0;
          *(undefined1 *)(param_2 + 0x54) = 1;
                    /* try { // try from 00750ecc to 00750ed3 has its CatchHandler @ 00751120 */
          FUN_0074d130(param_2 + 0x1d);
          *(undefined1 *)(param_2 + 0xa1) = 1;
          param_1[0xf] = lVar5;
          param_1[10] = lVar26;
          param_1[9] = lVar25;
          param_1[0xc] = lVar28;
          param_1[0xb] = lVar27;
          param_1[0xe] = lVar4;
          param_1[0xd] = lVar29;
          *param_1 = lVar13;
          param_1[2] = lVar15;
          param_1[1] = lVar14;
          param_1[4] = lVar20;
          param_1[3] = lVar16;
          param_1[6] = lVar22;
          param_1[5] = lVar21;
          param_1[8] = lVar24;
          param_1[7] = lVar23;
          return;
        }
                    /* try { // try from 00750fdc to 00750fff has its CatchHandler @ 007511a4 */
                    /* WARNING: Subroutine does not return */
        core::result::unwrap_failed
                  ("Broken HTTP receiver",0x14,auStack_71,&DAT_00ad78e8,
                   &PTR_s_common_rust_src_core_http_rs_00ad7840);
      }
      uVar11 = 4;
      goto LAB_00750d90;
    }
    if (bVar7 == 0) {
      plVar18 = (long *)param_2[0x38];
      goto LAB_00750824;
    }
  }
  if (uVar12 == 1) {
                    /* try { // try from 00751024 to 0075103f has its CatchHandler @ 0075112c */
    core::panicking::panic_const::panic_const_async_fn_resumed
              (&PTR_s_common_rust_src_core_http_rs_00ad7810);
  }
  else {
    core::panicking::panic_const::panic_const_async_fn_resumed_panic
              (&PTR_s_common_rust_src_core_http_rs_00ad7810);
  }
LAB_007510c0:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x7510c4);
  (*pcVar6)();
}


// ===== 00751324  FUN_00751324 =====

void FUN_00751324(undefined8 param_1,long param_2)

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


// ===== 0075133c  FUN_0075133c =====

undefined8 FUN_0075133c(byte *param_1,long *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  undefined1 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  
  if ((param_3 == 0) && ((*param_1 & 1) != 0)) {
    lVar13 = param_2[2];
    if (*param_2 == lVar13) {
      FUN_0072eae4(param_2,lVar13,1,1,1);
    }
    param_2[2] = lVar13 + 1;
    *(undefined1 *)(param_2[1] + lVar13) = 0x5a;
    return 0;
  }
  bVar1 = param_1[3];
  uVar14 = (uint)bVar1;
  bVar5 = true;
  uVar10 = 0x2d;
  if (-1 < param_3) {
    uVar10 = 0x2b;
  }
  iVar8 = -param_3;
  if (-1 < param_3) {
    iVar8 = param_3;
  }
  if ((1 << (ulong)(bVar1 & 0x1f) & 0x34U) == 0) {
    bVar6 = false;
    uVar15 = uVar14;
    if ((1 << (ulong)(bVar1 & 0x1f) & 10U) != 0) {
      iVar8 = iVar8 + 0x1e;
      bVar7 = uVar14 == 3;
      bVar6 = false;
      uVar14 = 0;
      uVar3 = (iVar8 / 0x3c) % 0x3c;
      bVar5 = bVar7 && uVar3 == 0;
      uVar15 = 0;
      if (!bVar7 || uVar3 != 0) {
        uVar15 = uVar3;
      }
    }
  }
  else {
    uVar3 = (iVar8 / 0x3c) % 0x3c;
    if (iVar8 % 0x3c == 0 && uVar14 != 2) {
      bVar7 = uVar14 == 5;
      bVar6 = false;
      uVar14 = 0;
      bVar5 = uVar3 == 0 && bVar7;
      uVar15 = 0;
      if (uVar3 != 0 || !bVar7) {
        uVar15 = uVar3;
      }
    }
    else {
      bVar5 = false;
      bVar6 = true;
      uVar14 = iVar8 % 0x3c;
      uVar15 = uVar3;
    }
  }
  bVar1 = param_1[1];
  uVar3 = iVar8 / 0xe10;
  bVar4 = (byte)uVar3;
  if (9 < (uVar3 & 0xff)) {
    lVar13 = param_2[2];
    if (*param_2 == lVar13) {
      FUN_0072eae4(param_2,lVar13,1,1,1);
    }
    lVar12 = param_2[1];
    lVar9 = lVar13 + 1;
    param_2[2] = lVar9;
    *(undefined1 *)(lVar12 + lVar13) = uVar10;
    if (99 < (uVar3 & 0xff)) {
      return 1;
    }
    lVar11 = *param_2;
    bVar2 = (byte)((uVar3 & 0xff) / 10);
    if (lVar11 == lVar9) {
      FUN_0072eae4(param_2,lVar13 + 1,1,1,1);
      lVar11 = *param_2;
      lVar12 = param_2[1];
    }
    *(byte *)(lVar12 + lVar9) = bVar2 | 0x30;
    lVar9 = lVar13 + 2;
    param_2[2] = lVar9;
    bVar4 = bVar4 + bVar2 * -10 | 0x30;
    if (lVar11 == lVar9) {
      FUN_0072eae4(param_2,lVar11,1,1,1);
      *(byte *)(param_2[1] + lVar9) = bVar4;
      lVar13 = lVar13 + 3;
      param_2[2] = lVar13;
    }
    else {
      *(byte *)(lVar12 + lVar9) = bVar4;
      lVar13 = lVar13 + 3;
      param_2[2] = lVar13;
    }
    goto joined_r0x00751710;
  }
  bVar2 = param_1[2];
  lVar13 = param_2[2];
  lVar9 = *param_2;
  if (bVar2 == 2) {
    if (lVar9 == lVar13) {
      FUN_0072eae4(param_2,lVar13,1,1,1);
      lVar9 = *param_2;
    }
    *(undefined1 *)(param_2[1] + lVar13) = 0x20;
    lVar13 = lVar13 + 1;
    param_2[2] = lVar13;
    if (lVar9 != lVar13) goto LAB_007516a4;
LAB_00751504:
    FUN_0072eae4(param_2,lVar9,1,1,1);
    lVar9 = *param_2;
    lVar11 = param_2[1];
    lVar12 = lVar13 + 1;
    param_2[2] = lVar12;
    *(undefined1 *)(lVar11 + lVar13) = uVar10;
    if (bVar2 == 1) goto LAB_007516bc;
LAB_00751540:
    if (lVar9 != lVar12) {
LAB_00751548:
      lVar13 = lVar12 + 1;
      *(byte *)(lVar11 + lVar12) = bVar4 | 0x30;
      param_2[2] = lVar13;
      goto joined_r0x00751710;
    }
  }
  else {
    if (lVar9 == lVar13) goto LAB_00751504;
LAB_007516a4:
    lVar11 = param_2[1];
    lVar12 = lVar13 + 1;
    param_2[2] = lVar12;
    *(undefined1 *)(lVar11 + lVar13) = uVar10;
    if (bVar2 != 1) goto LAB_00751540;
LAB_007516bc:
    if (lVar9 == lVar12) {
      FUN_0072eae4(param_2,lVar9,1,1,1);
      lVar9 = *param_2;
      lVar11 = param_2[1];
      *(undefined1 *)(lVar11 + lVar12) = 0x30;
      lVar12 = lVar13 + 2;
      param_2[2] = lVar12;
      if (lVar9 == lVar12) goto LAB_007516dc;
      goto LAB_00751548;
    }
    *(undefined1 *)(lVar11 + lVar12) = 0x30;
    lVar12 = lVar13 + 2;
    param_2[2] = lVar12;
    if (lVar9 != lVar12) goto LAB_00751548;
  }
LAB_007516dc:
  FUN_0072eae4(param_2,lVar9,1,1,1);
  lVar13 = lVar12 + 1;
  *(byte *)(param_2[1] + lVar12) = bVar4 | 0x30;
  param_2[2] = lVar13;
joined_r0x00751710:
  if (!bVar5) {
    if (bVar1 == 1) {
      if (*param_2 == lVar13) {
        FUN_0072eae4(param_2,lVar13,1,1,1);
      }
      *(undefined1 *)(param_2[1] + lVar13) = 0x3a;
      lVar13 = lVar13 + 1;
      param_2[2] = lVar13;
    }
    if (99 < (uVar15 & 0xff)) {
      return 1;
    }
    lVar9 = *param_2;
    bVar4 = (byte)((uVar15 & 0xff) / 10);
    if (lVar9 == lVar13) {
      FUN_0072eae4(param_2,lVar13,1,1,1);
      lVar9 = *param_2;
    }
    lVar11 = param_2[1];
    lVar12 = lVar13 + 1;
    *(byte *)(lVar11 + lVar13) = bVar4 | 0x30;
    param_2[2] = lVar12;
    bVar4 = (char)uVar15 + bVar4 * -10 | 0x30;
    if (lVar9 == lVar12) {
      FUN_0072eae4(param_2,lVar9,1,1,1);
      lVar13 = lVar13 + 2;
      *(byte *)(param_2[1] + lVar12) = bVar4;
      param_2[2] = lVar13;
    }
    else {
      lVar13 = lVar13 + 2;
      *(byte *)(lVar11 + lVar12) = bVar4;
      param_2[2] = lVar13;
    }
  }
  if (!bVar6) {
    return 0;
  }
  if (bVar1 == 1) {
    if (*param_2 == lVar13) {
      FUN_0072eae4(param_2,lVar13,1,1,1);
    }
    *(undefined1 *)(param_2[1] + lVar13) = 0x3a;
    lVar13 = lVar13 + 1;
    param_2[2] = lVar13;
  }
  if (99 < (uVar14 & 0xff)) {
    return 1;
  }
  lVar9 = *param_2;
  bVar1 = (byte)((uVar14 & 0xff) / 10);
  if (lVar9 == lVar13) {
    FUN_0072eae4(param_2,lVar13,1,1,1);
    lVar9 = *param_2;
  }
  lVar11 = param_2[1];
  lVar12 = lVar13 + 1;
  *(byte *)(lVar11 + lVar13) = bVar1 | 0x30;
  param_2[2] = lVar12;
  if (lVar9 == lVar12) {
    FUN_0072eae4(param_2,lVar9,1,1,1);
    lVar11 = param_2[1];
  }
  *(byte *)(lVar11 + lVar12) = (char)uVar14 + bVar1 * -10 | 0x30;
  param_2[2] = lVar13 + 2;
  return 0;
}


// ===== 00751994  FUN_00751994 =====

void FUN_00751994(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 007519ac  FUN_007519ac =====

long * FUN_007519ac(long *param_1)

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
                    /* try { // try from 007519f0 to 007519f7 has its CatchHandler @ 00751a78 */
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


// ===== 00751a9c  FUN_00751a9c =====

void FUN_00751a9c(long *param_1)

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
                    /* try { // try from 00751adc to 00751ae3 has its CatchHandler @ 00751b48 */
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


// ===== 00751b6c  FUN_00751b6c =====

void FUN_00751b6c(long *param_1)

{
  code *pcVar1;
  void *__ptr;
  undefined8 *puVar2;
  
  if (((*param_1 == 0) && (param_1[1] != 0)) && (__ptr = (void *)param_1[2], __ptr != (void *)0x0))
  {
    puVar2 = (undefined8 *)param_1[3];
    pcVar1 = (code *)*puVar2;
    if (pcVar1 != (code *)0x0) {
                    /* try { // try from 00751ba8 to 00751baf has its CatchHandler @ 00751bcc */
      (*pcVar1)(__ptr);
    }
    if (puVar2[1] != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 00751bf0  FUN_00751bf0 =====

void FUN_00751bf0(undefined8 *param_1)

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


// ===== 00751c60  FUN_00751c60 =====

void FUN_00751c60(int *param_1,uint param_2)

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


// ===== 00751cd0  FUN_00751cd0 =====

void FUN_00751cd0(undefined8 *param_1)

{
  ulong uVar1;
  long *__ptr;
  long local_28;
  
  __ptr = (long *)*param_1;
  if (*__ptr == 1) {
    uVar1 = __ptr[1] & 3;
    if (1 < uVar1 - 2 && uVar1 != 0) {
      local_28 = __ptr[1] - 1;
                    /* try { // try from 00751d38 to 00751d3f has its CatchHandler @ 00751d60 */
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
    }
  }
  else if ((*__ptr == 0) && (__ptr[2] != 0)) {
    free((void *)__ptr[1]);
  }
  free(__ptr);
  return;
}


// ===== 00751d7c  FUN_00751d7c =====

void FUN_00751d7c(undefined8 *param_1)

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
                    /* try { // try from 00751da4 to 00751dab has its CatchHandler @ 00751df8 */
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


// ===== 00751e68  FUN_00751e68 =====

void FUN_00751e68(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 00751e80  FUN_00751e80 =====

void FUN_00751e80(ulong *param_1)

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


// ===== 00751ed0  FUN_00751ed0 =====

void FUN_00751ed0(ulong *param_1)

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
      FUN_00751d7c(param_1 + 1);
      return;
    }
    if (uVar2 == 1) {
      FUN_00751cd0(param_1 + 1);
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


// ===== 00751f78  FUN_00751f78 =====

void FUN_00751f78(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long local_90;
  long lStack_88;
  void *local_80;
  long local_78;
  ulong local_70;
  undefined8 *puStack_68;
  long lStack_60;
  long local_58;
  long local_50;
  undefined8 local_28;
  
  puStack_68 = (undefined8 *)param_1[5];
  local_70 = param_1[4];
  local_58 = param_1[7];
  lStack_60 = param_1[6];
  local_50 = param_1[8];
  lStack_88 = param_1[1];
  local_90 = *param_1;
  local_78 = param_1[3];
  local_80 = (void *)param_1[2];
                    /* try { // try from 00751fac to 00751fb7 has its CatchHandler @ 00752068 */
  local_28 = param_2;
  FUN_00752278(&local_90,&local_28);
  lVar5 = local_78;
  uVar6 = local_70;
  puVar2 = puStack_68;
  for (lVar4 = local_58; lVar4 != 0; lVar4 = lVar4 + -1) {
    for (; uVar6 == 0; uVar6 = uVar6 & 0x8080808080808080) {
      lVar5 = lVar5 + -0xc0;
      uVar6 = NEON_cmge(*puVar2,0,1);
      puVar2 = puVar2 + 1;
    }
    uVar1 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
    uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
    uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
    uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
    lVar3 = lVar5 + (long)-(int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) * 0x18;
    if (*(long *)(lVar3 + -0x18) != 0) {
      free(*(void **)(lVar3 + -0x10));
    }
    uVar6 = uVar6 - 1 & uVar6;
  }
  if ((local_90 != 0) && (lStack_88 != 0)) {
    free(local_80);
    return;
  }
  return;
}


// ===== 00752080  FUN_00752080 =====

undefined1  [16] FUN_00752080(long *param_1,ulong param_2,undefined4 *param_3)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  byte *pbVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  byte bVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  uVar5 = param_1[1];
  if (uVar5 == 0) {
    auVar10._8_8_ = param_2;
    auVar10._0_8_ = 2;
    return auVar10;
  }
  uVar7 = param_1[2];
  pbVar4 = (byte *)*param_1;
  uVar1 = uVar7;
  if (uVar5 <= uVar7) {
    uVar1 = uVar5;
  }
  *param_1 = (long)(pbVar4 + uVar1);
  param_1[1] = uVar5 - uVar1;
  if (uVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check(0,0,&PTR_s__root__cargo_registry_src_index__00ad79f0);
  }
  bVar8 = *pbVar4;
  lVar6 = param_1[3];
  uVar5 = lVar6 << 1;
  uVar9 = (uint)bVar8;
  if (bVar8 - 0x41 < 6) {
    uVar9 = uVar9 - 0x37;
  }
  else if (bVar8 - 0x61 < 6) {
    uVar9 = uVar9 - 0x57;
  }
  else {
    uVar9 = uVar9 - 0x30;
    if (9 < uVar9) goto LAB_00752164;
  }
  if (uVar1 == 1) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check(1,1,&PTR_s__root__cargo_registry_src_index__00ad7a08);
  }
  bVar8 = pbVar4[1];
  uVar3 = (uint)bVar8;
  if (bVar8 - 0x41 < 6) {
    uVar3 = uVar3 - 0x37;
  }
  else if (bVar8 - 0x61 < 6) {
    uVar3 = uVar3 - 0x57;
  }
  else {
    uVar3 = uVar3 - 0x30;
    if (9 < uVar3) {
      uVar5 = uVar5 | 1;
LAB_00752164:
      *param_3 = 0;
      *(byte *)(param_3 + 1) = bVar8;
      *(undefined1 *)((long)param_3 + 7) = 0;
      *(undefined2 *)((long)param_3 + 5) = 0;
      *(ulong *)(param_3 + 2) = uVar5;
      param_1[3] = lVar6 + 1;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = param_2;
      return auVar2 << 0x40;
    }
  }
  auVar11._12_4_ = 0;
  auVar11._8_4_ = uVar3 | uVar9 << 4;
  param_1[3] = lVar6 + 1;
  auVar11._0_8_ = 1;
  return auVar11;
}


// ===== 007521b8  FUN_007521b8 =====

undefined8 FUN_007521b8(long *param_1,undefined8 *param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_1[1];
  if (uVar5 != 0) {
    uVar6 = param_1[2];
    uVar4 = *param_2;
    puVar3 = (undefined8 *)*param_1;
    do {
      uVar1 = uVar6;
      if (uVar5 <= uVar6) {
        uVar1 = uVar5;
      }
      uVar5 = uVar5 - uVar1;
      *param_1 = (long)((long)puVar3 + uVar1);
      param_1[1] = uVar5;
      if (uVar1 != 8) {
        lVar2 = FUN_0071acc0("invalid hash length",0x13);
        if (*param_3 != 0) {
                    /* try { // try from 0075224c to 00752253 has its CatchHandler @ 00752270 */
          <anyhow::Error_as_core::ops::drop::Drop>::drop(param_3);
        }
        *param_3 = lVar2;
        return 1;
      }
      FUN_0075f930(uVar4,*puVar3);
      puVar3 = (undefined8 *)((long)puVar3 + uVar1);
    } while (uVar5 != 0);
  }
  return 0;
}


// ===== 00752278  FUN_00752278 =====

undefined8 FUN_00752278(long param_1,undefined8 *param_2,long *param_3)

{
  void *__ptr;
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  byte local_70;
  uint7 local_6f;
  long local_68;
  
  lVar5 = *(long *)(param_1 + 0x38);
  if (lVar5 != 0) {
    lVar6 = *(long *)(param_1 + 0x18);
    uVar9 = *(ulong *)(param_1 + 0x20);
    uVar3 = *param_2;
    puVar7 = *(undefined8 **)(param_1 + 0x28);
    do {
      puVar8 = puVar7;
      if (uVar9 == 0) {
        do {
          puVar7 = puVar8 + 1;
          lVar6 = lVar6 + -0xc0;
          uVar9 = NEON_cmge(*puVar8,0,1);
          uVar9 = uVar9 & 0x8080808080808080;
          puVar8 = puVar7;
        } while (uVar9 == 0);
        *(undefined8 **)(param_1 + 0x28) = puVar7;
        *(long *)(param_1 + 0x18) = lVar6;
      }
      uVar1 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      lVar5 = lVar5 + -1;
      uVar9 = uVar9 - 1 & uVar9;
      *(long *)(param_1 + 0x38) = lVar5;
      *(ulong *)(param_1 + 0x20) = uVar9;
      lVar2 = lVar6 + (long)-(int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) * 0x18;
      lVar4 = *(long *)(lVar2 + -0x18);
      if (lVar4 == -1) {
        return 0;
      }
      __ptr = *(void **)(lVar2 + -0x10);
                    /* try { // try from 00752310 to 0075231b has its CatchHandler @ 007523a8 */
      <libdiscore_common::stores::blocked_domains::libdiscore_common::stores::blocked_domains::DomainHash>
      ::from_hex_encoded(&local_70,__ptr,*(undefined8 *)(lVar2 + -8));
      if (lVar4 != 0) {
        free(__ptr);
      }
      if ((local_70 & 1) != 0) {
        if (*param_3 != 0) {
                    /* try { // try from 00752370 to 00752377 has its CatchHandler @ 007523a0 */
          <anyhow::Error_as_core::ops::drop::Drop>::drop(param_3);
        }
        *param_3 = local_68;
        return 1;
      }
      FUN_0075f930(uVar3,(ulong)local_6f | local_68 << 0x38);
    } while (lVar5 != 0);
  }
  return 0;
}


// ===== 007523c8  <libdiscore_common::stores::blocked_domains::libdiscore_common::stores::blocked_domains::DomainHash>::from_hex_encoded =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <libdiscore_common::stores::blocked_domains::libdiscore_common::stores::blocked_domains::DomainHash>::from_hex_encoded
    */

void __rustcall
<libdiscore_common::stores::blocked_domains::libdiscore_common::stores::blocked_domains::DomainHash>
::from_hex_encoded(undefined1 *param_1,undefined8 *param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int local_90;
  undefined4 uStack_8c;
  long local_80;
  undefined8 *local_78;
  long local_70;
  undefined8 *local_68;
  ulong uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 *local_48;
  
  if ((param_3 & 1) == 0) {
    local_90 = -1;
    uStack_50 = _UNK_0029fde8;
    local_58 = _DAT_0029fde0;
    local_68 = param_2;
    uStack_60 = param_3;
    local_48 = (undefined1 *)&local_90;
    FUN_0076538c(&local_80,&local_68);
    if (local_90 == -1) {
      puVar2 = local_78;
      if (local_80 != -1) {
        if (local_70 == 0x20) {
          *(undefined8 *)(param_1 + 1) = *local_78;
          *param_1 = 0;
        }
        else {
                    /* try { // try from 007524c0 to 007524cf has its CatchHandler @ 007524e4 */
          uVar1 = FUN_007049dc("invalid hash length",0x13);
          *(undefined8 *)(param_1 + 8) = uVar1;
          *param_1 = 1;
        }
        if (local_80 != 0) {
          free(local_78);
        }
        return;
      }
    }
    else {
      puVar2 = (undefined8 *)CONCAT44(uStack_8c,local_90);
      if (local_80 != 0) {
        free(local_78);
      }
    }
  }
  else {
    puVar2 = (undefined8 *)&DAT_00000001;
  }
  local_68 = puVar2;
  uVar1 = FUN_0070a3b4(&local_68);
  *param_1 = 1;
  *(undefined8 *)(param_1 + 8) = uVar1;
  return;
}


// ===== 00752504  <libdiscore_common::stores::blocked_domains::[0]::libdiscore_common::stores::blocked_domains::BlockedDomainsStore>::set_delta_url =====

/* WARNING: Unknown calling convention: __rustcall */
/* <libdiscore_common::stores::blocked_domains::[0]::libdiscore_common::stores::blocked_domains::BlockedDomainsStore>::set_delta_url
    */

void __rustcall
<libdiscore_common::stores::blocked_domains::[0]::libdiscore_common::stores::blocked_domains::BlockedDomainsStore>
::set_delta_url(long param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  int *local_50;
  byte local_48;
  
  piVar1 = (int *)(param_1 + 0x20);
  do {
    if (*piVar1 != 0) {
      ClearExclusiveLocal();
                    /* try { // try from 0075263c to 00752643 has its CatchHandler @ 00752648 */
      <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                (param_1 + 0x20);
      break;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  puVar5 = PTR_GLOBAL_PANIC_COUNT_00b00bf0;
  if ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) == 0) {
    local_48 = 0;
    cVar3 = *(char *)(param_1 + 0x24);
  }
  else {
                    /* try { // try from 007525c8 to 007525cb has its CatchHandler @ 00752648 */
    local_48 = std::panicking::panic_count::is_zero_slow_path();
    local_48 = local_48 ^ 1;
    cVar3 = *(char *)(param_1 + 0x24);
  }
  if (cVar3 != '\0') {
    local_50 = piVar1;
                    /* try { // try from 007525e0 to 00752603 has its CatchHandler @ 00752650 */
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              ("mutex poisoned",0xe,&local_50,&PTR_FUN_00ad7a20,
               &PTR_s_common_rust_src_core_maybe_mutex_00ad7a60);
  }
  lVar7 = *(long *)(param_1 + 0x28);
  if ((lVar7 != -1) && (lVar7 != 0)) {
    free(*(void **)(param_1 + 0x30));
  }
  lVar8 = *param_2;
  lVar7 = param_2[2];
  *(long *)(param_1 + 0x30) = param_2[1];
  *(long *)(param_1 + 0x28) = lVar8;
  *(long *)(param_1 + 0x38) = lVar7;
  if ((((local_48 & 1) == 0) && ((*(ulong *)puVar5 & 0x7fffffffffffffff) != 0)) &&
     (uVar6 = std::panicking::panic_count::is_zero_slow_path(), (uVar6 & 1) == 0)) {
    *(undefined1 *)(param_1 + 0x24) = 1;
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


// ===== 0075267c  <libdiscore_common::stores::blocked_domains::[0]::libdiscore_common::stores::blocked_domains::BlockedDomainsStore>::is_blocked_domain =====

/* WARNING: Removing unreachable block (ram,0x00752ac4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <libdiscore_common::stores::blocked_domains::[0]::libdiscore_common::stores::blocked_domains::BlockedDomainsStore>::is_blocked_domain
    */

void __rustcall
<libdiscore_common::stores::blocked_domains::[0]::libdiscore_common::stores::blocked_domains::BlockedDomainsStore>
::is_blocked_domain(undefined8 *param_1,long param_2,long *param_3,ulong param_4)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  void *pvVar8;
  ulong *puVar9;
  byte bVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  size_t __n;
  long *plVar15;
  ulong uVar16;
  undefined8 uVar17;
  size_t __n_00;
  undefined1 *unaff_x26;
  undefined1 *__src;
  undefined8 uVar18;
  byte bVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  long *local_1a0;
  ulong uStack_198;
  ulong local_190;
  code *pcStack_188;
  void *pvStack_180;
  undefined8 uStack_178;
  ulong local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  ulong uStack_130;
  char local_128;
  undefined7 uStack_127;
  undefined8 local_120;
  code *pcStack_118;
  void *local_110;
  undefined8 uStack_108;
  ulong local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  ulong local_c0;
  undefined8 local_b8;
  long local_b0;
  long *plStack_a8;
  ulong local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  ulong uStack_78;
  
  local_1a0 = param_3;
  uStack_198 = param_4;
  if ((param_4 < 7) ||
     (((int)*param_3 != 0x70747468 || *(int *)((long)param_3 + 3) != 0x2f2f3a70 &&
      ((param_4 == 7 || (*param_3 != 0x2f2f3a7370747468)))))) {
    local_120 = &local_1a0;
    pcStack_118 = FUN_00753284;
    alloc::fmt::format::format_inner(&local_b0,&DAT_002bad6d,&local_120);
  }
  else {
    local_b0 = -1;
    plStack_a8 = param_3;
    local_a0 = param_4;
  }
  plVar15 = plStack_a8;
  local_100 = 0;
  local_120 = (long **)0x0;
  local_110 = (void *)0x0;
                    /* try { // try from 00752740 to 0075274f has its CatchHandler @ 00752cd8 */
  <url::url::ParseOptions>::parse(&local_190,&local_120,plStack_a8,local_a0);
  if (local_190 == 0xffffffffffffffff) {
    __n = 0xffffffffffffffff;
  }
  else {
    uStack_d8 = uStack_148;
    local_e0 = local_150;
    uStack_f8 = uStack_168;
    local_100 = local_170;
    uStack_e8 = uStack_158;
    uStack_f0 = uStack_160;
    local_d0 = local_140;
    pcStack_118 = pcStack_188;
    local_120 = (long **)local_190;
    uStack_108 = uStack_178;
    local_110 = pvStack_180;
                    /* try { // try from 0075277c to 0075279f has its CatchHandler @ 00752d24 */
    auVar21 = <url::url::Url>::host_str(&local_120);
    __n = auVar21._8_8_;
    if (auVar21._0_8_ == (void *)0x0) {
      __n = 0xffffffffffffffff;
    }
    else {
      if ((long)__n < 0) {
        uVar17 = 0;
LAB_00752794:
                    /* WARNING: Subroutine does not return */
        alloc::raw_vec::handle_error(uVar17,__n);
      }
      if (__n == 0) {
        unaff_x26 = &DAT_00000001;
      }
      else {
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        uVar17 = 1;
        unaff_x26 = (undefined1 *)FUN_004b25a4(__n,1);
        if (unaff_x26 == (undefined1 *)0x0) goto LAB_00752794;
        memcpy(unaff_x26,auVar21._0_8_,__n);
      }
    }
    if (local_120 != (long **)0x0) {
      free(pcStack_118);
    }
  }
  if (local_b0 - 1U < 0xfffffffffffffffe) {
    free(plVar15);
  }
  if (__n == 0xffffffffffffffff) {
    *param_1 = 0xffffffffffffffff;
    return;
  }
  piVar1 = (int *)(param_2 + 0x40);
  do {
    if (*piVar1 != 0) {
      ClearExclusiveLocal();
      <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                (param_2 + 0x40);
      break;
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  puVar9 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
  if ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) == 0) {
    bVar10 = 0;
    cVar5 = *(char *)(param_2 + 0x44);
    uVar12 = _DAT_002bfb88;
    pcVar7 = _UNK_002bfb90;
    pvVar8 = _DAT_002bfb98;
    uVar17 = _UNK_002bfba0;
  }
  else {
                    /* try { // try from 00752c38 to 00752c3b has its CatchHandler @ 00752cd0 */
    bVar10 = std::panicking::panic_count::is_zero_slow_path();
    bVar10 = bVar10 ^ 1;
    cVar5 = *(char *)(param_2 + 0x44);
    uVar12 = _DAT_002bfb88;
    pcVar7 = _UNK_002bfb90;
    pvVar8 = _DAT_002bfb98;
    uVar17 = _UNK_002bfba0;
  }
  _DAT_002bfb88 = uVar12;
  _UNK_002bfb90 = pcVar7;
  _DAT_002bfb98 = pvVar8;
  _UNK_002bfba0 = uVar17;
  if (cVar5 != '\0') {
    uVar12 = (ulong)pcStack_118 >> 8;
    pcStack_118 = (code *)CONCAT71((int7)uVar12,bVar10);
                    /* try { // try from 00752c50 to 00752c73 has its CatchHandler @ 00752d04 */
    local_120 = (long **)piVar1;
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              ("mutex poisoned",0xe,&local_120,&PTR_FUN_00ad7a40,
               &PTR_s_common_rust_src_core_maybe_mutex_00ad7a60);
  }
  if (*(long *)(param_2 + 0x48) != 0) {
    __n_00 = __n;
    __src = unaff_x26;
    do {
      local_128 = 0;
      uStack_130 = 0;
      uStack_138 = 0;
      local_140 = 0;
      uStack_148 = 0;
      local_150 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_168 = 0;
      local_170 = 0;
      local_190 = uVar12;
      pcStack_188 = pcVar7;
      pvStack_180 = pvVar8;
      uStack_178 = uVar17;
      if (__n_00 < 0x40) {
        memcpy(&uStack_168,__src,__n_00);
        uVar16 = __n_00;
      }
      else {
        local_170 = __n_00 >> 6;
                    /* try { // try from 00752898 to 007528a3 has its CatchHandler @ 00752ce0 */
        sha2::sha256::compress256(&local_190,__src);
        uVar16 = __n_00 & 0x3f;
        memcpy(&uStack_168,__src + (__n_00 & 0x7fffffffffffffc0),__n_00 & 0x3f);
      }
      local_128 = (char)uVar16;
      local_b8 = CONCAT71(uStack_127,local_128);
      uStack_f8 = uStack_168;
      local_100 = local_170;
      uStack_e8 = uStack_158;
      uStack_f0 = uStack_160;
      uStack_c8 = uStack_138;
      local_d0 = local_140;
      local_c0 = uStack_130;
      uVar16 = uVar16 & 0xff;
      uStack_d8 = uStack_148;
      local_e0 = local_150;
      uVar13 = local_170 << 9 | uVar16 << 3;
      pcStack_118 = pcStack_188;
      local_120 = (long **)local_190;
      uStack_108 = uStack_178;
      local_110 = pvStack_180;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
      *(undefined1 *)((long)&uStack_f8 + uVar16) = 0x80;
      if ((local_128 == '?') ||
         (memset((void *)((long)&uStack_f8 + uVar16 + 1),0,uVar16 ^ 0x3f), (uVar16 ^ 0x38) < 8)) {
                    /* try { // try from 00752924 to 0075298f has its CatchHandler @ 00752ce0 */
        sha2::sha256::compress256(&local_120,&uStack_f8,1);
        local_80 = 0;
        uStack_98 = 0;
        local_a0 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        plStack_a8 = (long *)0x0;
        local_b0 = 0;
        uStack_78 = uVar13;
        sha2::sha256::compress256(&local_120,&local_b0,1);
      }
      else {
        local_c0 = uVar13;
        sha2::sha256::compress256(&local_120,&uStack_f8,1);
      }
      uVar16 = (CONCAT44((undefined4)local_120,local_120._4_4_) & 0xff00ff00ff00ff00) >> 8 |
               (CONCAT44((undefined4)local_120,local_120._4_4_) & 0xff00ff00ff00ff) << 8;
      uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
      plVar15 = (long *)(uVar16 >> 0x20 | uVar16 << 0x20);
      local_1a0 = plVar15;
      if (*(long *)(param_2 + 0x60) != 0) {
        uVar11 = FUN_0076b1a0(param_2 + 0x68,&local_1a0);
        lVar14 = 0;
        bVar19 = (byte)(uVar11 >> 0x39);
        uVar18 = CONCAT17(bVar19,CONCAT16(bVar19,CONCAT15(bVar19,CONCAT14(bVar19,CONCAT13(bVar19,
                                                  CONCAT12(bVar19,CONCAT11(bVar19,bVar19)))))));
        lVar2 = *(long *)(param_2 + 0x48);
        uVar13 = *(ulong *)(param_2 + 0x50);
        uVar11 = uVar11 & uVar13;
        uVar20 = *(undefined8 *)(lVar2 + uVar11);
        uVar16 = NEON_cmeq(uVar20,uVar18,1);
        uVar16 = uVar16 & 0x8080808080808080;
        while( true ) {
          for (; uVar16 != 0; uVar16 = uVar16 - 1 & uVar16) {
            uVar4 = (uVar16 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar16 >> 7 & 0xff00ff00ff00ff) << 8;
            uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
            if (plVar15 ==
                *(long **)(lVar2 + (uVar11 + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) &
                                   uVar13) * -8 + -8)) {
              FUN_00730ab8(&local_120,__n_00,0,1,1);
              pvVar8 = local_110;
              pcVar7 = pcStack_118;
              if (((ulong)local_120 & 1) != 0) {
                    /* try { // try from 00752c9c to 00752ca3 has its CatchHandler @ 00752ce8 */
                    /* WARNING: Subroutine does not return */
                alloc::raw_vec::handle_error(pcStack_118,local_110);
              }
              if (__n_00 != 0) {
                memcpy(local_110,__src,__n_00);
              }
              *param_1 = pcVar7;
              param_1[1] = pvVar8;
              param_1[2] = __n_00;
              puVar9 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
              goto joined_r0x00752bd0;
            }
          }
          uVar20 = NEON_cmeq(uVar20,0xffffffffffffffff,1);
          bVar19 = NEON_umaxv(uVar20,1);
          if ((bVar19 & 1) != 0) break;
          lVar14 = lVar14 + 8;
          uVar11 = uVar11 + lVar14 & uVar13;
          uVar20 = *(undefined8 *)(lVar2 + uVar11);
          uVar16 = NEON_cmeq(uVar20,uVar18,1);
          uVar16 = uVar16 & 0x8080808080808080;
        }
      }
      uVar16 = 0;
LAB_00752a2c:
      if (__n_00 - uVar16 < 0x10) {
        uVar13 = 0;
        if (__n_00 != uVar16) {
          while (__src[uVar13 + uVar16] != '.') {
            uVar13 = uVar13 + 1;
            if (__n_00 - uVar16 == uVar13) goto LAB_00752b34;
          }
          goto LAB_00752a88;
        }
        goto LAB_00752b34;
      }
                    /* try { // try from 00752a70 to 00752a7f has its CatchHandler @ 00752ce4 */
      auVar21 = core::slice::memchr::memchr_aligned(0x2e,__src + uVar16,__n_00 - uVar16);
      uVar13 = auVar21._8_8_;
      if (auVar21._0_8_ != 1) goto LAB_00752b34;
LAB_00752a88:
      uVar13 = uVar13 + uVar16;
      uVar16 = uVar13 + 1;
      if ((__n_00 <= uVar13) || (__src[uVar13] != '.')) goto LAB_00752a24;
      __n_00 = __n_00 - uVar16;
      __src = __src + uVar16;
    } while( true );
  }
  *param_1 = 0xffffffffffffffff;
joined_r0x00752bd0:
  if ((((bVar10 & 1) == 0) && ((*puVar9 & 0x7fffffffffffffff) != 0)) &&
     (uVar12 = std::panicking::panic_count::is_zero_slow_path(), (uVar12 & 1) == 0)) {
    *(undefined1 *)(param_2 + 0x44) = 1;
  }
  do {
    iVar3 = *piVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar3 == 2) {
                    /* try { // try from 00752c78 to 00752c87 has its CatchHandler @ 00752cd0 */
    <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(piVar1);
  }
  goto LAB_00752bf4;
LAB_00752a24:
  if (uVar16 <= __n_00) goto LAB_00752a2c;
LAB_00752b34:
  *param_1 = 0xffffffffffffffff;
                    /* try { // try from 00752ca8 to 00752ccb has its CatchHandler @ 00752cd0 */
  if ((((bVar10 & 1) == 0) &&
      ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) != 0)) &&
     (uVar12 = std::panicking::panic_count::is_zero_slow_path(), (uVar12 & 1) == 0)) {
    *(undefined1 *)(param_2 + 0x44) = 1;
  }
  do {
    iVar3 = *piVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar3 == 2) {
                    /* try { // try from 00752b70 to 00752b77 has its CatchHandler @ 00752cd0 */
    <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(piVar1);
  }
LAB_00752bf4:
  if (__n != 0) {
    free(unaff_x26);
  }
  return;
}


// ===== 00752d5c  libdiscore_common::stores::blocked_domains::serialize_blocked_domains =====

/* WARNING: Unknown calling convention: __rustcall */
/* libdiscore_common::stores::blocked_domains::serialize_blocked_domains */

void __rustcall
libdiscore_common::stores::blocked_domains::serialize_blocked_domains(ulong *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong local_58;
  undefined1 *puStack_50;
  ulong local_48;
  
  lVar7 = param_2[3];
  uVar8 = lVar7 << 3 | 5;
  if (lVar7 << 3 < 0) {
    uVar6 = 0;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar6 = 1;
    puStack_50 = (undefined1 *)FUN_004b25a4(uVar8,1);
    if (puStack_50 != (undefined1 *)0x0) {
      lVar2 = param_2[6];
      *puStack_50 = 1;
      *(int *)(puStack_50 + 1) = (int)lVar2;
      local_48 = 5;
      local_58 = uVar8;
      if (lVar7 != 0) {
        puVar4 = (undefined8 *)*param_2;
        puVar5 = puVar4 + 1;
        uVar8 = NEON_cmge(*puVar4,0,1);
        uVar8 = uVar8 & 0x8080808080808080;
        puVar3 = puStack_50;
        do {
          for (; uVar8 == 0; uVar8 = uVar8 & 0x8080808080808080) {
            puVar4 = puVar4 + -8;
            uVar8 = NEON_cmge(*puVar5,0,1);
            puVar5 = puVar5 + 1;
          }
          if (local_58 - local_48 < 8) {
                    /* try { // try from 00752e50 to 00752e63 has its CatchHandler @ 00752e94 */
            FUN_0072eae4(&local_58,local_48,8,1,1);
            puVar3 = puStack_50;
          }
          uVar1 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
          lVar7 = lVar7 + -1;
          uVar8 = uVar8 - 1 & uVar8;
          *(undefined8 *)(puVar3 + local_48) =
               *(undefined8 *)
                ((long)puVar4 + (-8 - (LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) & 0x78U)));
          local_48 = local_48 + 8;
        } while (lVar7 != 0);
      }
      param_1[1] = (ulong)puStack_50;
      *param_1 = local_58;
      param_1[2] = local_48;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar6,uVar8);
}


// ===== 00752eb4  libdiscore_common::stores::blocked_domains::deserialize_blocked_domains =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* libdiscore_common::stores::blocked_domains::deserialize_blocked_domains */

void __rustcall
libdiscore_common::stores::blocked_domains::deserialize_blocked_domains
          (long *param_1,char *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined4 uVar3;
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined8 *local_e8;
  long lStack_e0;
  undefined *local_d8;
  undefined *puStack_d0;
  long local_c8;
  long lStack_c0;
  undefined *local_b8;
  undefined **local_b0;
  undefined *local_a8;
  undefined4 *local_a0;
  undefined *puStack_98;
  ulong *local_90;
  char *pcStack_88;
  undefined *local_80;
  undefined *puStack_78;
  char *local_70;
  long local_68;
  undefined8 uStack_60;
  char *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined *local_40;
  char **ppcStack_38;
  undefined4 local_18;
  char local_14;
  undefined1 uStack_11;
  undefined1 *puVar2;
  
  puVar2 = auStack_130;
  local_a8 = (undefined *)((long)param_3 - 5);
  if (param_3 < (undefined8 *)0x5) {
    local_90 = (ulong *)&local_e8;
    pcStack_88 = PTR_fmt_00b00c10;
    local_e8 = param_3;
    alloc::fmt::format::format_inner(auStack_130,&DAT_002b6024,&local_90);
  }
  else {
    local_14 = *param_2;
    if (local_14 == '\x01') {
      uVar3 = *(undefined4 *)(param_2 + 1);
      local_18 = uVar3;
      if (((ulong)local_a8 & 7) == 0) {
        local_b0 = (undefined **)(param_2 + 5);
        local_a0 = (undefined4 *)0x8;
        FUN_0070d3b8(&local_90,&local_b0);
        if (local_90 != (ulong *)0x0) {
          puStack_d0 = puStack_78;
          local_d8 = local_80;
          lStack_c0 = local_68;
          local_c8 = (long)local_70;
          local_e8 = local_90;
          lStack_e0 = (long)pcStack_88;
          if (3 < *(ulong *)PTR_MAX_LOG_LEVEL_FILTER_00b00c78) {
            local_b0 = &local_b8;
            local_b8 = puStack_78;
            local_a0 = &local_18;
            local_a8 = PTR_fmt_00b00c10;
            puStack_98 = PTR_fmt_00b00c40;
            local_58 = "BlockedDomainsStore";
            uStack_50 = 0x13;
            ppcStack_38 = (char **)&local_b0;
            local_40 = &DAT_002bc822;
            puStack_78 = (undefined *)_UNK_002a0698;
            local_80 = (undefined *)_DAT_002a0690;
            local_90 = (ulong *)0x0;
            pcStack_88 = "libdiscore_common::stores::blocked_domains";
            uStack_60 = _UNK_0029f608;
            local_68 = _DAT_0029f600;
            local_70 = "common/rust/src/stores/blocked_domains.rs";
            local_48 = DAT_002a19e0;
                    /* try { // try from 00752fc0 to 00752fcb has its CatchHandler @ 007530c4 */
            <log::__private_api::GlobalLogger_as_log::Log>::log(&uStack_11,&local_90);
            uVar3 = local_18;
          }
          *(undefined4 *)(param_1 + 6) = uVar3;
          param_1[1] = lStack_e0;
          *param_1 = (long)local_e8;
          param_1[3] = (long)puStack_d0;
          param_1[2] = (long)local_d8;
          param_1[5] = lStack_c0;
          param_1[4] = local_c8;
          return;
        }
        *param_1 = 0;
        param_1[1] = (long)pcStack_88;
        return;
      }
      local_90 = (ulong *)&local_e8;
      pcStack_88 = PTR_fmt_00b00c10;
      local_80 = &DAT_002a10e8;
      puStack_78 = PTR_fmt_00b00c10;
      local_e8 = (undefined8 *)local_a8;
      alloc::fmt::format::format_inner(auStack_100,&DAT_002b2578,&local_90);
      puVar2 = auStack_100;
    }
    else {
      local_90 = (ulong *)&local_14;
      pcStack_88 = PTR_fmt_00b00c18;
      alloc::fmt::format::format_inner(auStack_118,&DAT_002af08b,&local_90);
      puVar2 = auStack_118;
    }
  }
  lVar1 = FUN_00704968(puVar2);
  *param_1 = 0;
  param_1[1] = lVar1;
  return;
}


// ===== 007530d8  FUN_007530d8 =====

void FUN_007530d8(long param_1,undefined8 param_2)

{
  <str_as_core::fmt::Debug>::fmt
            (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_2);
  return;
}


// ===== 007530ec  FUN_007530ec =====

void FUN_007530ec(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Debug>::fmt(*param_1,param_1[1],param_2);
  return;
}


// ===== 00753100  <<libdiscore_common[1cb84820f9455fa0]::stores::blocked_domains::DeltaResponse_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__FieldVisitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

/* <<libdiscore_common[1cb84820f9455fa0]::stores::blocked_domains::DeltaResponse as
   serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__FieldVisitor as
   serde[52fff5c06b43f145]::de::Visitor>::expecting */

void <<libdiscore_common[1cb84820f9455fa0]::stores::blocked_domains::DeltaResponse_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__FieldVisitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002a0800,0x10);
  return;
}


// ===== 00753114  <<libdiscore_common[1cb84820f9455fa0]::stores::blocked_domains::DeltaResponse_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

/* <<libdiscore_common[1cb84820f9455fa0]::stores::blocked_domains::DeltaResponse as
   serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor as
   serde[52fff5c06b43f145]::de::Visitor>::expecting */

void <<libdiscore_common[1cb84820f9455fa0]::stores::blocked_domains::DeltaResponse_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"struct DeltaResponse",0x14);
  return;
}


// ===== 00753128  FUN_00753128 =====

void FUN_00753128(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt(*param_1,param_1[1],param_2);
  return;
}


// ===== 0075313c  FUN_0075313c =====

void FUN_0075313c(long *param_1)

{
  if (*(long *)(*param_1 + 0x58) != 0) {
    return;
  }
  return;
}


// ===== 00753154  FUN_00753154 =====

void FUN_00753154(long *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Debug>::fmt
            (*(undefined8 *)(*param_1 + 8),*(undefined8 *)(*param_1 + 0x10),param_2);
  return;
}


// ===== 00753168  FUN_00753168 =====

void FUN_00753168(long *param_1,undefined8 param_2)

{
  long local_18;
  
  local_18 = *param_1 + 0x18;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field2_finish
            (param_2,"FromUtf8Error",0xd,"bytes",5,*param_1,&PTR_FUN_00ad7a90,"error",5,&local_18,
             &DAT_00ad7ab0);
  return;
}


// ===== 007531d8  FUN_007531d8 =====

void FUN_007531d8(long *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Debug>::fmt
            (*(undefined8 *)(*param_1 + 8),*(undefined8 *)(*param_1 + 0x10),param_2);
  return;
}


// ===== 007531ec  FUN_007531ec =====

void FUN_007531ec(undefined8 *param_1,long param_2)

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


// ===== 00753208  FUN_00753208 =====

void FUN_00753208(undefined8 *param_1,long param_2)

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


// ===== 00753224  FUN_00753224 =====

void FUN_00753224(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,"()",2);
  return;
}


// ===== 00753238  FUN_00753238 =====

void FUN_00753238(undefined8 *param_1,long param_2)

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


// ===== 00753254  FUN_00753254 =====

void FUN_00753254(undefined8 *param_1)

{
  <alloc::string::FromUtf8Error_as_core::fmt::Display>::fmt(*param_1);
  return;
}


// ===== 0075325c  FUN_0075325c =====

void FUN_0075325c(long *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt
            (*(undefined8 *)(*param_1 + 8),*(undefined8 *)(*param_1 + 0x10),param_2);
  return;
}


// ===== 00753270  FUN_00753270 =====

void FUN_00753270(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt(*(undefined8 *)*param_1,((undefined8 *)*param_1)[1],param_2);
  return;
}


// ===== 00753284  FUN_00753284 =====

void FUN_00753284(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt(*param_1,param_1[1],param_2);
  return;
}


// ===== 00753298  FUN_00753298 =====

void FUN_00753298(undefined8 *param_1)

{
  <u32_as_core::fmt::Display>::fmt(*param_1);
  return;
}


// ===== 007532a0  FUN_007532a0 =====

void FUN_007532a0(undefined8 *param_1)

{
  <i64_as_core::fmt::Display>::fmt(*param_1);
  return;
}


// ===== 007532a8  FUN_007532a8 =====

void FUN_007532a8(undefined8 *param_1)

{
  <usize_as_core::fmt::Display>::fmt(*param_1);
  return;
}


// ===== 007532b0  FUN_007532b0 =====

void FUN_007532b0(long param_1,undefined8 param_2)

{
  long local_18;
  
  local_18 = param_1 + 0x18;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field2_finish
            (param_2,"FromUtf8Error",0xd,"bytes",5,param_1,&PTR_FUN_00ad7a90,"error",5,&local_18,
             &DAT_00ad7ab0);
  return;
}


// ===== 00753320  FUN_00753320 =====

undefined8 FUN_00753320(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  code *local_28;
  
  uVar1 = <core::fmt::Formatter_as_core::fmt::Write>::write_char(param_2,0x22);
  if ((uVar1 & 1) != 0) {
    return 1;
  }
  local_28 = FUN_00753270;
  local_38 = param_2;
  uStack_30 = param_1;
  uVar1 = core::fmt::write(&local_38,&DAT_00ad7ad0,&DAT_002ab692,&uStack_30);
  if ((uVar1 & 1) != 0) {
    return 1;
  }
  uVar2 = <core::fmt::Formatter_as_core::fmt::Write>::write_char(param_2,0x22);
  return uVar2;
}


// ===== 007533bc  FUN_007533bc =====

void FUN_007533bc(long *param_1,undefined8 *param_2,undefined8 *param_3)

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
    pvVar4 = (void *)FUN_0072ca84(uVar6 & 0xffffffff,pvVar4,0);
  }
  if (pvVar4 == (void *)0x0) {
    local_48 = '\0';
    local_47 = '\0';
    goto LAB_0075347c;
  }
  cVar1 = *(char *)((long)pvVar4 + 0x44);
  cVar2 = *(char *)((long)pvVar4 + 0x45);
  cVar5 = cVar2;
  if (cVar1 == '\x01') {
    if (cVar2 != '\0') {
      cVar5 = cVar2 + -1;
      goto LAB_0075342c;
    }
                    /* try { // try from 007534cc to 0075350b has its CatchHandler @ 00753520 */
    tokio::task::coop::register_waker(param_3);
    bVar3 = true;
  }
  else {
LAB_0075342c:
    bVar3 = false;
    *(char *)((long)pvVar4 + 0x45) = cVar5;
  }
  local_42 = 0;
  local_44 = 0;
                    /* try { // try from 00753440 to 00753447 has its CatchHandler @ 00753520 */
  <tokio::task::coop::RestoreOnPending_as_core::ops::drop::Drop>::drop((ulong)&local_44 | 1);
  local_48 = cVar1;
  local_47 = cVar2;
  if (bVar3) {
    *param_1 = 1;
    FUN_007519ac(&local_68);
    return;
  }
LAB_0075347c:
                    /* try { // try from 0075348c to 00753493 has its CatchHandler @ 00753510 */
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


// ===== 00753538  FUN_00753538 =====

void FUN_00753538(long *param_1,undefined8 *param_2,undefined8 *param_3)

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
    pvVar4 = (void *)FUN_0072ca84(uVar6 & 0xffffffff,pvVar4,0);
  }
  if (pvVar4 == (void *)0x0) {
    local_48 = '\0';
    local_47 = '\0';
    goto LAB_007535f8;
  }
  cVar1 = *(char *)((long)pvVar4 + 0x44);
  cVar2 = *(char *)((long)pvVar4 + 0x45);
  cVar5 = cVar2;
  if (cVar1 == '\x01') {
    if (cVar2 != '\0') {
      cVar5 = cVar2 + -1;
      goto LAB_007535a8;
    }
                    /* try { // try from 00753648 to 00753687 has its CatchHandler @ 0075369c */
    tokio::task::coop::register_waker(param_3);
    bVar3 = true;
  }
  else {
LAB_007535a8:
    bVar3 = false;
    *(char *)((long)pvVar4 + 0x45) = cVar5;
  }
  local_42 = 0;
  local_44 = 0;
                    /* try { // try from 007535bc to 007535c3 has its CatchHandler @ 0075369c */
  <tokio::task::coop::RestoreOnPending_as_core::ops::drop::Drop>::drop((ulong)&local_44 | 1);
  local_48 = cVar1;
  local_47 = cVar2;
  if (bVar3) {
    *param_1 = 1;
    FUN_00751a9c(&local_68);
    return;
  }
LAB_007535f8:
                    /* try { // try from 00753608 to 0075360f has its CatchHandler @ 0075368c */
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


// ===== 007536b4  FUN_007536b4 =====

void FUN_007536b4(long *param_1,undefined8 *param_2,undefined8 *param_3)

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
                    /* try { // try from 00753824 to 00753853 has its CatchHandler @ 00753888 */
    uVar6 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    pvVar4 = pthread_getspecific((pthread_key_t)uVar6);
  }
  else {
    pvVar4 = pthread_getspecific((pthread_key_t)uVar6);
  }
  if (pvVar4 < (void *)0x2) {
    pvVar4 = (void *)FUN_0072ca84(uVar6 & 0xffffffff,pvVar4,0);
  }
  if (pvVar4 == (void *)0x0) {
    local_48 = '\0';
    local_47 = '\0';
    goto LAB_00753774;
  }
  cVar1 = *(char *)((long)pvVar4 + 0x44);
  cVar2 = *(char *)((long)pvVar4 + 0x45);
  cVar5 = cVar2;
  if (cVar1 == '\x01') {
    if (cVar2 != '\0') {
      cVar5 = cVar2 + -1;
      goto LAB_00753724;
    }
                    /* try { // try from 007537c4 to 007537cb has its CatchHandler @ 00753888 */
    tokio::task::coop::register_waker(param_3);
    bVar3 = true;
  }
  else {
LAB_00753724:
    bVar3 = false;
    *(char *)((long)pvVar4 + 0x45) = cVar5;
  }
  local_42 = 0;
  local_44 = 0;
                    /* try { // try from 00753738 to 0075373f has its CatchHandler @ 00753888 */
  <tokio::task::coop::RestoreOnPending_as_core::ops::drop::Drop>::drop((ulong)&local_44 | 1);
  local_48 = cVar1;
  local_47 = cVar2;
  if (bVar3) {
    *param_1 = 1;
    if (((local_68 == 0) && (lStack_60 != 0)) && (local_58 != (void *)0x0)) {
      if ((code *)*puStack_50 != (code *)0x0) {
                    /* try { // try from 007537f0 to 007537f7 has its CatchHandler @ 00753858 */
        (*(code *)*puStack_50)(local_58);
      }
      if (puStack_50[1] != 0) {
        free(local_58);
        return;
      }
    }
    return;
  }
LAB_00753774:
                    /* try { // try from 00753784 to 0075378b has its CatchHandler @ 00753878 */
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


// ===== 007538a0  FUN_007538a0 =====

void FUN_007538a0(undefined8 *param_1)

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


// ===== 007538d8  FUN_007538d8 =====

void FUN_007538d8(undefined8 param_1,long param_2)

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


// ===== 007538f0  FUN_007538f0 =====

undefined8 FUN_007538f0(long *param_1,uint param_2)

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
      FUN_0072eae4(param_1,lVar7,1,1,1);
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
      FUN_0072eae4(param_1,lVar7,uVar3,1,1);
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


// ===== 00753a34  FUN_00753a34 =====

undefined8 FUN_00753a34(long *param_1,void *param_2,ulong param_3)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if ((ulong)(*param_1 - lVar1) < param_3) {
    FUN_0072eae4(param_1,lVar1,param_3,1,1);
    lVar1 = param_1[2];
  }
  else if (param_3 == 0) goto LAB_00753a74;
  memcpy((void *)(param_1[1] + lVar1),param_2,param_3);
LAB_00753a74:
  param_1[2] = lVar1 + param_3;
  return 0;
}


// ===== 00753ab8  FUN_00753ab8 =====

void FUN_00753ab8(long param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt
            (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_2);
  return;
}


// ===== 00753acc  <libdiscore_common::stores::blocked_domains::BlockedDomainsUpdateError_as_core::error::Error>::source =====

/* WARNING: Unknown calling convention: __rustcall */
/* <libdiscore_common::stores::blocked_domains::BlockedDomainsUpdateError as
   core::error::Error>::source */

undefined1  [16] __rustcall
<libdiscore_common::stores::blocked_domains::BlockedDomainsUpdateError_as_core::error::Error>::
source(ulong *param_1,ulong param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  lVar1 = *param_1 + 0x7ffffffffffffffb;
  if (*param_1 < 0x8000000000000005) {
    lVar1 = 1;
  }
  if (lVar1 != 0) {
    if (lVar1 == 1) {
      auVar2._8_8_ = &PTR_FUN_00ad7b50;
      auVar2._0_8_ = param_1;
      return auVar2;
    }
    auVar3 = <anyhow::Error_as_core::ops::deref::DerefMut>::deref_mut(param_1 + 1);
    return auVar3;
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_2;
  return auVar3 << 0x40;
}


// ===== 00753b20  FUN_00753b20 =====

undefined1  [16] FUN_00753b20(ulong *param_1,ulong param_2)

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
      auVar4._8_8_ = &PTR_FUN_00ad7bc8;
      auVar4._0_8_ = param_1 + 1;
      return auVar4;
    }
    auVar6._8_8_ = &PTR_FUN_00ad7c40;
    auVar6._0_8_ = param_1 + 1;
    return auVar6;
  }
  if (uVar2 == 2) {
    auVar5._8_8_ = &PTR_FUN_00ad7cb8;
    auVar5._0_8_ = param_1;
    return auVar5;
  }
  if (uVar2 == 3) {
    auVar3._8_8_ = &PTR_FUN_00ad7d30;
    auVar3._0_8_ = param_1 + 1;
    return auVar3;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  return auVar1 << 0x40;
}


// ===== 00753b90  <libdiscore_common::stores::blocked_domains::BlockedDomainsUpdateError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <libdiscore_common::stores::blocked_domains::BlockedDomainsUpdateError as
   core::fmt::Display>::fmt */

void __rustcall
<libdiscore_common::stores::blocked_domains::BlockedDomainsUpdateError_as_core::fmt::Display>::fmt
          (ulong *param_1,undefined8 *param_2)

{
  long lVar1;
  ulong *local_28;
  ulong **local_20;
  code *local_18;
  
  lVar1 = *param_1 + 0x7ffffffffffffffb;
  if (*param_1 < 0x8000000000000005) {
    lVar1 = 1;
  }
  if (lVar1 != 0) {
    if (lVar1 == 1) {
      local_20 = &local_28;
      local_18 = FUN_0071d7d0;
      local_28 = param_1;
      core::fmt::write(*param_2,param_2[1],&DAT_002af0a3,&local_20);
      return;
    }
    local_28 = param_1 + 1;
    local_20 = &local_28;
    local_18 = FUN_0070a2c4;
    core::fmt::write(*param_2,param_2[1],&DAT_002b9704,&local_20);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"Inconsistent state",0x12);
  return;
}


// ===== 00753c48  FUN_00753c48 =====

void FUN_00753c48(ulong *param_1,undefined8 param_2)

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
                (param_2,"Request",7,&local_18,&DAT_00ad7d88);
      return;
    }
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,"JsonParseError",0xe,&local_18,&DAT_00ad7da8);
    return;
  }
  if (uVar1 == 2) {
    local_18 = param_1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,"TextParseError",0xe,&local_18,&DAT_00ad7dc8);
    return;
  }
  if (uVar1 == 3) {
    local_18 = param_1 + 1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,"FileError",9,&local_18,&DAT_00ad7de8);
    return;
  }
  local_18 = param_1 + 3;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field3_finish
            (param_2,&DAT_002a0d40,0x10,"start",5,param_1 + 1,&DAT_00ad7e08,"end",3,param_1 + 2,
             &DAT_00ad7e08,"file_size",9,&local_18,&DAT_00ad7e28);
  return;
}


// ===== 00753db8  FUN_00753db8 =====

void FUN_00753db8(undefined8 *param_1)

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


// ===== 00753e40  FUN_00753e40 =====

void FUN_00753e40(undefined8 param_1,uint param_2)

{
  byte bVar1;
  undefined1 uVar2;
  uint local_14;
  
  if (param_2 < 0x80) {
    local_14 = param_2 & 0xff;
    <anyhow[66ce4f23143367e5]::context::Quoted<&mut_core[bcece726f298455b]::fmt::Formatter>as_core[bcece726f298455b]::fmt::Write>
    ::write_str(param_1,&local_14,1);
    return;
  }
  uVar2 = (undefined1)param_2;
  if (param_2 < 0x800) {
    local_14 = (CONCAT11(uVar2,(char)(param_2 >> 6)) & 0x3fff | 0x8000) | 0xc0;
    <anyhow[66ce4f23143367e5]::context::Quoted<&mut_core[bcece726f298455b]::fmt::Formatter>as_core[bcece726f298455b]::fmt::Write>
    ::write_str(param_1,&local_14,2);
    return;
  }
  bVar1 = (byte)(param_2 >> 6);
  if (param_2 >> 0x10 == 0) {
    local_14._0_2_ = (bVar1 & 0xff3f | 0x80) << 8;
    local_14 = CONCAT31(CONCAT12(uVar2,(short)local_14) >> 8,(char)(param_2 >> 0xc)) & 0x3fffff |
               0x8000e0;
    <anyhow[66ce4f23143367e5]::context::Quoted<&mut_core[bcece726f298455b]::fmt::Formatter>as_core[bcece726f298455b]::fmt::Write>
    ::write_str(param_1,&local_14,3);
    return;
  }
  local_14 = CONCAT31(CONCAT21(CONCAT11(uVar2,bVar1),(char)(param_2 >> 0xc)),(char)(param_2 >> 0x12)
                     ) & 0x3f3f3fff | 0x808080f0;
  <anyhow[66ce4f23143367e5]::context::Quoted<&mut_core[bcece726f298455b]::fmt::Formatter>as_core[bcece726f298455b]::fmt::Write>
  ::write_str(param_1,&local_14,4);
  return;
}


// ===== 00753f20  FUN_00753f20 =====

void FUN_00753f20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  core::fmt::write(param_1,&DAT_00ad7ad0,param_2,param_3);
  return;
}


// ===== 00753f34  FUN_00753f34 =====

undefined8 FUN_00753f34(void)

{
  return 0;
}


// ===== 00753f3c  FUN_00753f3c =====

undefined8 FUN_00753f3c(void)

{
  return 0;
}


// ===== 00753f44  FUN_00753f44 =====

undefined1  [16] FUN_00753f44(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x28;
  auVar1._0_8_ = "description() is deprecated; use Display";
  return auVar1;
}


// ===== 00753f54  FUN_00753f54 =====

void FUN_00753f54(void)

{
  return;
}


// ===== 00753f58  FUN_00753f58 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00753f58(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029f810;
  param_1[1] = _UNK_0029f818;
  *param_1 = uVar1;
  return;
}


// ===== 00753f6c  FUN_00753f6c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00753f6c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a0d50;
  param_1[1] = _UNK_002a0d58;
  *param_1 = uVar1;
  return;
}


// ===== 00753f80  FUN_00753f80 =====

undefined8 FUN_00753f80(void)

{
  return 0;
}


// ===== 00753f88  FUN_00753f88 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00753f88(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029fa20;
  param_1[1] = _UNK_0029fa28;
  *param_1 = uVar1;
  return;
}


// ===== 00753f9c  FUN_00753f9c =====

void FUN_00753f9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  core::fmt::write(param_1,&PTR_FUN_00ad7b00,param_2,param_3);
  return;
}


// ===== 00753fb0  FUN_00753fb0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00753fb0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029ff60;
  param_1[1] = _UNK_0029ff68;
  *param_1 = uVar1;
  return;
}


// ===== 00753fc4  FUN_00753fc4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00753fc4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a0f30;
  param_1[1] = _UNK_002a0f38;
  *param_1 = uVar1;
  return;
}


// ===== 00753fd8  FUN_00753fd8 =====

void FUN_00753fd8(long *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long local_58;
  long *local_50 [2];
  long *local_40;
  long *plStack_38;
  undefined1 *local_30;
  undefined1 uStack_21;
  
  <tokio::runtime::runtime::tokio::runtime::runtime::Runtime>::enter(&local_58);
  if (*param_1 == 1) {
                    /* try { // try from 00754004 to 0075403f has its CatchHandler @ 007540d8 */
    FUN_0071a788(param_1 + 6,1,&PTR_s__root__cargo_registry_src_index__00ad7e48);
  }
  else {
    local_40 = param_1 + 6;
    plStack_38 = param_1 + 1;
    local_30 = &uStack_21;
    FUN_0071a95c(local_40,0,&local_40,param_2);
  }
                    /* try { // try from 00754040 to 00754047 has its CatchHandler @ 007540c4 */
  <tokio::runtime::context::current::SetCurrentGuard_as_core::ops::drop::Drop>::drop(&local_58);
  if (local_58 != 2) {
    if (local_58 == 0) {
      do {
        lVar3 = *local_50[0];
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(local_50[0],0x10);
        if (bVar2) {
          *local_50[0] = lVar3 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar3 + -1 == 0) {
        DataMemoryBarrier(2,1);
        <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>>::
        drop_slow(local_50);
        return;
      }
    }
    else {
      do {
        lVar3 = *local_50[0];
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(local_50[0],0x10);
        if (bVar2) {
          *local_50[0] = lVar3 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar3 + -1 == 0) {
        DataMemoryBarrier(2,1);
        <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>>
        ::drop_slow(local_50);
      }
    }
  }
  return;
}


// ===== 007540f0  FUN_007540f0 =====

undefined8 FUN_007540f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

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
    uVar4 = FUN_0072b294(param_2,plVar7,0xcc,param_3);
                    /* try { // try from 00754138 to 00754147 has its CatchHandler @ 007541c0 */
    uVar5 = FUN_0074ecb8(plVar7 + 0x11,uVar4,uVar4);
                    /* try { // try from 00754150 to 0075415b has its CatchHandler @ 0075418c */
    local_38 = param_3;
    <tokio::runtime::task_hooks::tokio::runtime::task_hooks::TaskHooks>::spawn
              (plVar7 + 0x3c,&local_38);
                    /* try { // try from 0075415c to 00754167 has its CatchHandler @ 00754184 */
    <tokio::runtime::scheduler::multi_thread::worker::[3]::tokio::runtime::scheduler::multi_thread::handle::Handle>
    ::schedule_option_task_without_yield(plVar7 + 2,uVar5);
    return uVar4;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x754184);
  (*pcVar3)();
}


// ===== 007541e8  FUN_007541e8 =====

undefined8 FUN_007541e8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

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
    uVar4 = FUN_0072b498(param_2,plVar7,0xcc,param_3);
                    /* try { // try from 00754230 to 0075423f has its CatchHandler @ 007542b8 */
    uVar5 = FUN_0074ecb8(plVar7 + 0x11,uVar4,uVar4);
                    /* try { // try from 00754248 to 00754253 has its CatchHandler @ 00754284 */
    local_38 = param_3;
    <tokio::runtime::task_hooks::tokio::runtime::task_hooks::TaskHooks>::spawn
              (plVar7 + 0x3c,&local_38);
                    /* try { // try from 00754254 to 0075425f has its CatchHandler @ 0075427c */
    <tokio::runtime::scheduler::multi_thread::worker::[3]::tokio::runtime::scheduler::multi_thread::handle::Handle>
    ::schedule_option_task_without_yield(plVar7 + 2,uVar5);
    return uVar4;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x75427c);
  (*pcVar3)();
}


// ===== 007542e0  FUN_007542e0 =====

undefined8 FUN_007542e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

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
    uVar4 = FUN_0072b6bc(param_2,plVar7,0xcc,param_3);
                    /* try { // try from 00754328 to 00754337 has its CatchHandler @ 007543b0 */
    uVar5 = FUN_0074ecb8(plVar7 + 0x11,uVar4,uVar4);
                    /* try { // try from 00754340 to 0075434b has its CatchHandler @ 0075437c */
    local_38 = param_3;
    <tokio::runtime::task_hooks::tokio::runtime::task_hooks::TaskHooks>::spawn
              (plVar7 + 0x3c,&local_38);
                    /* try { // try from 0075434c to 00754357 has its CatchHandler @ 00754374 */
    <tokio::runtime::scheduler::multi_thread::worker::[3]::tokio::runtime::scheduler::multi_thread::handle::Handle>
    ::schedule_option_task_without_yield(plVar7 + 2,uVar5);
    return uVar4;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x754374);
  (*pcVar3)();
}


// ===== 007543d8  FUN_007543d8 =====

undefined8 FUN_007543d8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

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
    uVar4 = FUN_0072b904(param_2,plVar7,0xcc,param_3);
                    /* try { // try from 00754420 to 0075442f has its CatchHandler @ 007544a8 */
    uVar5 = FUN_0074ecb8(plVar7 + 0x11,uVar4,uVar4);
                    /* try { // try from 00754438 to 00754443 has its CatchHandler @ 00754474 */
    local_38 = param_3;
    <tokio::runtime::task_hooks::tokio::runtime::task_hooks::TaskHooks>::spawn
              (plVar7 + 0x3c,&local_38);
                    /* try { // try from 00754444 to 0075444f has its CatchHandler @ 0075446c */
    <tokio::runtime::scheduler::multi_thread::worker::[3]::tokio::runtime::scheduler::multi_thread::handle::Handle>
    ::schedule_option_task_without_yield(plVar7 + 2,uVar5);
    return uVar4;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x75446c);
  (*pcVar3)();
}


// ===== 007544d0  FUN_007544d0 =====

undefined8 FUN_007544d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

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
    uVar4 = FUN_0072bb4c(param_2,plVar7,0xcc,param_3);
                    /* try { // try from 00754518 to 00754527 has its CatchHandler @ 007545a0 */
    uVar5 = FUN_0074ecb8(plVar7 + 0x11,uVar4,uVar4);
                    /* try { // try from 00754530 to 0075453b has its CatchHandler @ 0075456c */
    local_38 = param_3;
    <tokio::runtime::task_hooks::tokio::runtime::task_hooks::TaskHooks>::spawn
              (plVar7 + 0x3c,&local_38);
                    /* try { // try from 0075453c to 00754547 has its CatchHandler @ 00754564 */
    <tokio::runtime::scheduler::multi_thread::worker::[3]::tokio::runtime::scheduler::multi_thread::handle::Handle>
    ::schedule_option_task_without_yield(plVar7 + 2,uVar5);
    return uVar4;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x754564);
  (*pcVar3)();
}


// ===== 007545c8  FUN_007545c8 =====

void FUN_007545c8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  undefined1 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined2 local_24 [2];
  
  if (*(long *)(param_1 + 8) != 0) {
                    /* try { // try from 007546c4 to 007546cf has its CatchHandler @ 0075471c */
    core::cell::panic_already_borrowed(&PTR_s__root__cargo_registry_src_index__00ad7e90);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x7546fc);
    (*pcVar2)();
  }
  *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
  puVar1 = PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (*(long *)(param_1 + 0x10) == 0) {
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = param_2;
    uVar5 = *(ulong *)puVar1;
    if (uVar5 != 0) goto LAB_00754618;
LAB_0075468c:
    uVar5 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar3 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar5);
    if (&DAT_00000001 < puVar3) goto joined_r0x007546bc;
  }
  else {
                    /* try { // try from 007545f8 to 007545fb has its CatchHandler @ 007546fc */
    FUN_00755330();
    puVar1 = PTR___RUST_STD_INTERNAL_VAL_00b00c08;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
    *(undefined8 *)(param_1 + 0x10) = param_2;
    uVar5 = *(ulong *)puVar1;
    if (uVar5 == 0) goto LAB_0075468c;
LAB_00754618:
    puVar3 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar5);
    if (&DAT_00000001 < puVar3) goto joined_r0x007546bc;
  }
  puVar3 = (undefined1 *)FUN_0072ca84(uVar5 & 0xffffffff,puVar3,0);
joined_r0x007546bc:
  if (puVar3 != (undefined1 *)0x0) {
    local_24[0] = *(undefined2 *)(puVar3 + 0x44);
    *(undefined2 *)(puVar3 + 0x44) = 0x8001;
    <tokio::task::coop::with_budget::ResetGuard_as_core::ops::drop::Drop>::drop(local_24);
  }
  if (*(long *)(param_1 + 8) == 0) {
    lVar4 = *(long *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x10) = 0;
    if (lVar4 != 0) {
      *(undefined8 *)(param_1 + 8) = 0;
      return;
    }
  }
  else {
    core::cell::panic_already_borrowed(&PTR_s__root__cargo_registry_src_index__00ad7e78);
  }
                    /* try { // try from 007546e0 to 007546f7 has its CatchHandler @ 0075470c */
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed("core missing",0xc,&PTR_s__root__cargo_registry_src_index__00ad7e60);
}


// ===== 00754734  FUN_00754734 =====

void FUN_00754734(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  code *pcVar2;
  void *pvVar3;
  long lVar4;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  char cVar5;
  ulong uVar6;
  char local_34;
  undefined1 local_33;
  
  if (*(long *)(param_1 + 8) != 0) {
                    /* try { // try from 00754854 to 0075485f has its CatchHandler @ 007548f0 */
    core::cell::panic_already_borrowed(&PTR_s__root__cargo_registry_src_index__00ad7e90);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x75488c);
    (*pcVar2)();
  }
  *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
  puVar1 = PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (*(long *)(param_1 + 0x10) == 0) {
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = param_2;
    uVar6 = *(ulong *)puVar1;
  }
  else {
                    /* try { // try from 0075476c to 0075476f has its CatchHandler @ 007548a8 */
    FUN_00755330();
    puVar1 = PTR___RUST_STD_INTERNAL_VAL_00b00c08;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
    *(undefined8 *)(param_1 + 0x10) = param_2;
    uVar6 = *(ulong *)puVar1;
  }
  if (uVar6 == 0) {
                    /* try { // try from 007547cc to 007547fb has its CatchHandler @ 0075488c */
    uVar6 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    pvVar3 = pthread_getspecific((pthread_key_t)uVar6);
    local_33 = extraout_w8_00;
  }
  else {
    pvVar3 = pthread_getspecific((pthread_key_t)uVar6);
    local_33 = extraout_w8;
  }
  if (pvVar3 < (void *)0x2) {
    pvVar3 = (void *)FUN_0072ca84(uVar6 & 0xffffffff,pvVar3,0);
    local_33 = extraout_w8_01;
  }
  if (pvVar3 == (void *)0x0) {
    cVar5 = '\x02';
  }
  else {
    cVar5 = *(char *)((long)pvVar3 + 0x44);
    local_33 = *(undefined1 *)((long)pvVar3 + 0x45);
    *(undefined2 *)((long)pvVar3 + 0x44) = 0x8001;
  }
  local_34 = cVar5;
                    /* try { // try from 0075480c to 00754813 has its CatchHandler @ 007548bc */
  <tokio::runtime::task::raw::tokio::runtime::task::raw::RawTask>::poll(param_3);
  if (cVar5 != '\x02') {
    <tokio::task::coop::with_budget::ResetGuard_as_core::ops::drop::Drop>::drop(&local_34);
  }
  if (*(long *)(param_1 + 8) == 0) {
    lVar4 = *(long *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x10) = 0;
    if (lVar4 != 0) {
      *(undefined8 *)(param_1 + 8) = 0;
      return;
    }
  }
  else {
    core::cell::panic_already_borrowed(&PTR_s__root__cargo_registry_src_index__00ad7e78);
  }
                    /* try { // try from 00754870 to 00754887 has its CatchHandler @ 007548d8 */
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed("core missing",0xc,&PTR_s__root__cargo_registry_src_index__00ad7e60);
}


// ===== 00754918  FUN_00754918 =====

undefined8 FUN_00754918(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

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
    uVar4 = FUN_0072b1a4(param_2,plVar6,0xcc,param_3);
                    /* try { // try from 00754964 to 00754973 has its CatchHandler @ 007549f0 */
    lVar5 = FUN_0074ecb8(plVar6 + 0xf,uVar4,uVar4);
                    /* try { // try from 0075497c to 00754987 has its CatchHandler @ 007549bc */
    local_28 = param_3;
    <tokio::runtime::task_hooks::tokio::runtime::task_hooks::TaskHooks>::spawn
              (plVar6 + 0x30,&local_28);
    if (lVar5 != 0) {
                    /* try { // try from 0075498c to 00754997 has its CatchHandler @ 007549b4 */
      <alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>as_tokio::runtime::task::Schedule>
      ::schedule(param_1,lVar5);
    }
    return uVar4;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x7549b4);
  (*pcVar3)();
}


// ===== 00754a18  FUN_00754a18 =====

undefined8 FUN_00754a18(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

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
    uVar4 = FUN_0072b384(param_2,plVar6,0xcc,param_3);
                    /* try { // try from 00754a64 to 00754a73 has its CatchHandler @ 00754af0 */
    lVar5 = FUN_0074ecb8(plVar6 + 0xf,uVar4,uVar4);
                    /* try { // try from 00754a7c to 00754a87 has its CatchHandler @ 00754abc */
    local_28 = param_3;
    <tokio::runtime::task_hooks::tokio::runtime::task_hooks::TaskHooks>::spawn
              (plVar6 + 0x30,&local_28);
    if (lVar5 != 0) {
                    /* try { // try from 00754a8c to 00754a97 has its CatchHandler @ 00754ab4 */
      <alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>as_tokio::runtime::task::Schedule>
      ::schedule(param_1,lVar5);
    }
    return uVar4;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x754ab4);
  (*pcVar3)();
}


// ===== 00754b18  FUN_00754b18 =====

undefined8 FUN_00754b18(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

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
    uVar4 = FUN_0072b5ac(param_2,plVar6,0xcc,param_3);
                    /* try { // try from 00754b64 to 00754b73 has its CatchHandler @ 00754bf0 */
    lVar5 = FUN_0074ecb8(plVar6 + 0xf,uVar4,uVar4);
                    /* try { // try from 00754b7c to 00754b87 has its CatchHandler @ 00754bbc */
    local_28 = param_3;
    <tokio::runtime::task_hooks::tokio::runtime::task_hooks::TaskHooks>::spawn
              (plVar6 + 0x30,&local_28);
    if (lVar5 != 0) {
                    /* try { // try from 00754b8c to 00754b97 has its CatchHandler @ 00754bb4 */
      <alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>as_tokio::runtime::task::Schedule>
      ::schedule(param_1,lVar5);
    }
    return uVar4;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x754bb4);
  (*pcVar3)();
}


// ===== 00754c18  FUN_00754c18 =====

undefined8 FUN_00754c18(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

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
    uVar4 = FUN_0072b7cc(param_2,plVar6,0xcc,param_3);
                    /* try { // try from 00754c64 to 00754c73 has its CatchHandler @ 00754cf0 */
    lVar5 = FUN_0074ecb8(plVar6 + 0xf,uVar4,uVar4);
                    /* try { // try from 00754c7c to 00754c87 has its CatchHandler @ 00754cbc */
    local_28 = param_3;
    <tokio::runtime::task_hooks::tokio::runtime::task_hooks::TaskHooks>::spawn
              (plVar6 + 0x30,&local_28);
    if (lVar5 != 0) {
                    /* try { // try from 00754c8c to 00754c97 has its CatchHandler @ 00754cb4 */
      <alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>as_tokio::runtime::task::Schedule>
      ::schedule(param_1,lVar5);
    }
    return uVar4;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x754cb4);
  (*pcVar3)();
}


// ===== 00754d18  FUN_00754d18 =====

undefined8 FUN_00754d18(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

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
    uVar4 = FUN_0072ba3c(param_2,plVar6,0xcc,param_3);
                    /* try { // try from 00754d64 to 00754d73 has its CatchHandler @ 00754df0 */
    lVar5 = FUN_0074ecb8(plVar6 + 0xf,uVar4,uVar4);
                    /* try { // try from 00754d7c to 00754d87 has its CatchHandler @ 00754dbc */
    local_28 = param_3;
    <tokio::runtime::task_hooks::tokio::runtime::task_hooks::TaskHooks>::spawn
              (plVar6 + 0x30,&local_28);
    if (lVar5 != 0) {
                    /* try { // try from 00754d8c to 00754d97 has its CatchHandler @ 00754db4 */
      <alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>as_tokio::runtime::task::Schedule>
      ::schedule(param_1,lVar5);
    }
    return uVar4;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x754db4);
  (*pcVar3)();
}


// ===== 00754e18  FUN_00754e18 =====

void FUN_00754e18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined8 local_58;
  long lStack_50;
  long local_48;
  
                    /* try { // try from 00754e3c to 00754e47 has its CatchHandler @ 0075500c */
  lVar3 = <tokio::runtime::scheduler::[3]::tokio::runtime::scheduler::Context>::
          expect_current_thread(param_1,&PTR_s__root__cargo_registry_src_index__00ad7ea8);
  if (*(long *)(lVar3 + 8) == 0) {
    lVar5 = *(long *)(lVar3 + 0x10);
    *(undefined8 *)(lVar3 + 8) = 0xffffffffffffffff;
    *(undefined8 *)(lVar3 + 0x10) = 0;
    puVar1 = PTR___RUST_STD_INTERNAL_VAL_00b00c08;
    if (lVar5 == 0) {
                    /* try { // try from 00754f1c to 00754f33 has its CatchHandler @ 00754ff8 */
                    /* WARNING: Subroutine does not return */
      core::option::expect_failed
                ("core missing",0xc,&PTR_s__root__cargo_registry_src_index__00ad7ec0);
    }
    *(undefined8 *)(lVar3 + 8) = 0;
    uVar6 = *(ulong *)puVar1;
    if (uVar6 == 0) {
                    /* try { // try from 00754f38 to 00754f67 has its CatchHandler @ 00754fa8 */
      uVar6 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
              lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
      pvVar4 = pthread_getspecific((pthread_key_t)uVar6);
    }
    else {
      pvVar4 = pthread_getspecific((pthread_key_t)uVar6);
    }
    if (pvVar4 < (void *)0x2) {
      pvVar4 = (void *)FUN_0072ca84(uVar6 & 0xffffffff,pvVar4,0);
    }
    if (pvVar4 == (void *)0x0) {
                    /* try { // try from 00754f90 to 00754fa3 has its CatchHandler @ 00754fe4 */
      FUN_00716dd8(lVar5);
                    /* WARNING: Subroutine does not return */
      std::thread::local::panic_access_error(&PTR_s__nix_store_8006w282fgsx3273c878b_00ad6130);
    }
                    /* try { // try from 00754e98 to 00754ea7 has its CatchHandler @ 00754fe4 */
    local_58 = param_2;
    lStack_50 = lVar5;
    local_48 = lVar3;
    auVar7 = FUN_0075c880((long)pvVar4 + 0x28,param_1,&local_58);
    if (*(long *)(lVar3 + 8) == 0) {
      *(undefined8 *)(lVar3 + 8) = 0xffffffffffffffff;
      if (*(long *)(lVar3 + 0x10) == 0) {
        lVar5 = 0;
      }
      else {
                    /* try { // try from 00754ec8 to 00754ecb has its CatchHandler @ 00754fbc */
        FUN_00755330();
        lVar5 = *(long *)(lVar3 + 8) + 1;
      }
      *(long *)(lVar3 + 8) = lVar5;
      *(long *)(lVar3 + 0x10) = auVar7._0_8_;
                    /* try { // try from 00754ee0 to 00754ee7 has its CatchHandler @ 00754fd0 */
      <tokio::runtime::scheduler::current_thread::CoreGuard_as_core::ops::drop::Drop>::drop(param_1)
      ;
      FUN_00755c94(param_1);
      if ((auVar7 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_fmt
                  ("a spawned task panicked and the runtime is configured to shut down on unhandled panic"
                   ,0xab,param_3);
      }
      return;
    }
                    /* try { // try from 00754f6c to 00754f77 has its CatchHandler @ 00754fe8 */
    core::cell::panic_already_borrowed(&PTR_s__root__cargo_registry_src_index__00ad7ed8);
  }
  else {
                    /* try { // try from 00754f0c to 00754f17 has its CatchHandler @ 0075500c */
    core::cell::panic_already_borrowed(&PTR_s__root__cargo_registry_src_index__00ad7ef0);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x754fa8);
  (*pcVar2)();
}


// ===== 00755024  FUN_00755024 =====

void FUN_00755024(long *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  
  if (param_1 != (long *)0x0) {
    lVar5 = *param_1;
                    /* try { // try from 00755040 to 00755053 has its CatchHandler @ 007550f0 */
    if ((lVar5 != 0) &&
       (iVar3 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(lVar5),
       iVar3 != 0)) {
      <tokio::runtime::task::raw::tokio::runtime::task::raw::RawTask>::dealloc(lVar5);
    }
                    /* try { // try from 00755054 to 0075505b has its CatchHandler @ 00755100 */
    FUN_0076ddac(param_1 + 3);
    plVar4 = (long *)param_1[3];
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
                    /* try { // try from 00755078 to 0075507f has its CatchHandler @ 007550e8 */
      <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::runtime::scheduler::multi_thread::queue::Inner<alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::runtime::scheduler::multi_thread::handle::Handle>>>>
      ::drop_slow(param_1 + 3);
    }
    plVar4 = (long *)param_1[1];
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
                    /* try { // try from 007550a4 to 007550a7 has its CatchHandler @ 007550cc */
        <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::park::Inner>>::
        drop_slow();
      }
    }
    free(param_1);
    return;
  }
  return;
}


// ===== 00755170  FUN_00755170 =====

void FUN_00755170(long *param_1)

{
  char cVar1;
  bool bVar2;
  void *__ptr;
  long *plVar3;
  long lVar4;
  
  if (*param_1 != 2) {
    if (param_1[1] == -1) {
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
        <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::park::Inner>>::drop_slow(param_1 + 2);
        return;
      }
    }
    else {
      if (param_1[1] != 0) {
        free((void *)param_1[2]);
      }
      close((int)param_1[4]);
      close((int)param_1[6]);
      plVar3 = (long *)param_1[5];
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
                    /* try { // try from 007551e8 to 007551eb has its CatchHandler @ 00755254 */
        <alloc::sync::[n]::alloc::sync::Arc<()>>::drop_slow();
      }
      __ptr = (void *)param_1[7];
      if (__ptr != (void *)0xffffffffffffffff) {
        plVar3 = (long *)((long)__ptr + 8);
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
          free(__ptr);
          return;
        }
      }
    }
  }
  return;
}


// ===== 00755268  FUN_00755268 =====

void FUN_00755268(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (*param_1 != 2) {
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
        drop_slow(param_1 + 1);
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
        ::drop_slow(param_1 + 1);
        return;
      }
    }
  }
  return;
}


// ===== 007552c4  FUN_007552c4 =====

void FUN_007552c4(long *param_1)

{
                    /* try { // try from 007552d4 to 007552d7 has its CatchHandler @ 00755308 */
  FUN_00766220();
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 00755330  FUN_00755330 =====

void FUN_00755330(void *param_1)

{
                    /* try { // try from 00755340 to 00755347 has its CatchHandler @ 0075539c */
  FUN_0076555c((long)param_1 + 0x40);
  if (*(long *)((long)param_1 + 0x40) != 0) {
    free(*(void **)((long)param_1 + 0x48));
  }
                    /* try { // try from 00755360 to 00755367 has its CatchHandler @ 00755380 */
  FUN_00755170(param_1);
  free(param_1);
  return;
}


// ===== 007553dc  FUN_007553dc =====

void FUN_007553dc(long *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 *__ptr;
  undefined8 uVar6;
  
  if (*param_1 == -1) {
    plVar4 = (long *)param_1[1];
    if (*plVar4 != 0) {
      free((void *)plVar4[1]);
    }
    free(plVar4);
    plVar4 = (long *)param_1[0xb];
  }
  else {
    __ptr = (undefined8 *)param_1[3];
    plVar4 = (long *)*__ptr;
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
                    /* try { // try from 0075541c to 00755423 has its CatchHandler @ 00755514 */
      <alloc::sync::[n]::alloc::sync::Arc<std::fs::File>>::drop_slow(__ptr);
    }
    lVar5 = __ptr[6];
    if (lVar5 == -2) {
      uVar6 = __ptr[7];
                    /* try { // try from 00755488 to 0075549b has its CatchHandler @ 00755504 */
      iVar3 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::
              drop_join_handle_fast(uVar6);
      if (iVar3 != 0) {
        <tokio::runtime::task::raw::tokio::runtime::task::raw::RawTask>::drop_join_handle_slow
                  (uVar6);
      }
    }
    else if ((lVar5 != -1) && (lVar5 != 0)) {
      free((void *)__ptr[7]);
    }
    free(__ptr);
    plVar4 = (long *)param_1[0xb];
  }
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
                    /* try { // try from 007554d0 to 007554d3 has its CatchHandler @ 0075550c */
      <alloc::sync::[n]::alloc::sync::Arc<std::sync::poison::mutex::Mutex<core::option::Option<alloc::boxed::Box<dyn_Trait<Assoc=X>+{backref_26}::ops::function::Fn<(libdiscore_common::core::http::ProgressEvent)>+{backref_26}::marker::Sync+{backref_71}::Send>>>>>
      ::drop_slow();
    }
  }
  if (param_1[5] != 0) {
    free((void *)param_1[6]);
    return;
  }
  return;
}


// ===== 00755580  FUN_00755580 =====

void FUN_00755580(long param_1,void *param_2)

{
  int iVar1;
  
  if (1 < param_1 + 1U) {
    if (param_1 != -2) {
      free(param_2);
      return;
    }
    iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::drop_join_handle_fast
                      (param_2);
    if (iVar1 != 0) {
      <tokio::runtime::task::raw::tokio::runtime::task::raw::RawTask>::drop_join_handle_slow
                (param_2);
      return;
    }
  }
  return;
}


// ===== 007555e8  FUN_007555e8 =====

void FUN_007555e8(long param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  uint *puVar5;
  int *piVar6;
  ulong uVar7;
  
  puVar5 = *(uint **)(param_1 + 8);
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
                    /* try { // try from 00755678 to 0075567b has its CatchHandler @ 007556a0 */
    <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::wake_writer_or_readers()
    ;
  }
  piVar6 = *(int **)(param_1 + 0x10);
  if ((((*(byte *)(param_1 + 0x18) & 1) == 0) &&
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
    <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::wake_writer_or_readers()
    ;
    return;
  }
  return;
}


// ===== 007556b8  FUN_007556b8 =====

void FUN_007556b8(ulong *param_1)

{
  void *__ptr;
  char cVar1;
  bool bVar2;
  void *pvVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  
  uVar4 = *param_1;
  if (uVar4 == (uVar4 != 0)) {
    if (0x18 < (byte)param_1[8]) {
      plVar5 = (long *)param_1[9];
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
                    /* try { // try from 0075573c to 0075573f has its CatchHandler @ 00755808 */
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
      }
    }
    plVar5 = (long *)param_1[0xd];
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
                    /* try { // try from 00755764 to 00755767 has its CatchHandler @ 00755844 */
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
      }
    }
    plVar5 = (long *)param_1[0x11];
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
                    /* try { // try from 0075578c to 0075578f has its CatchHandler @ 0075583c */
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
      }
    }
    plVar5 = (long *)param_1[0x13];
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
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 0x13);
        return;
      }
    }
  }
  else if (uVar4 - (uVar4 != 0) == 2) {
    __ptr = (void *)param_1[2];
    lVar6 = param_1[3] + 1;
    pvVar3 = __ptr;
    while (lVar6 = lVar6 + -1, lVar6 != 0) {
                    /* try { // try from 00755704 to 00755707 has its CatchHandler @ 007558a0 */
      FUN_0076276c(pvVar3);
      pvVar3 = (void *)((long)pvVar3 + 0xe0);
    }
    if (param_1[1] != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 007558e8  FUN_007558e8 =====

void FUN_007558e8(long *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *param_1;
  <tokio::sync::mpsc::bounded::Semaphore_as_tokio::sync::mpsc::chan::Semaphore>::add_permit
            (lVar2 + 0x1c0);
  iVar1 = <tokio::sync::mpsc::bounded::Semaphore_as_tokio::sync::mpsc::chan::Semaphore>::is_closed
                    (lVar2 + 0x1c0);
  if ((iVar1 != 0) &&
     (iVar1 = <tokio::sync::mpsc::bounded::Semaphore_as_tokio::sync::mpsc::chan::Semaphore>::is_idle
                        (lVar2 + 0x1c0), iVar1 != 0)) {
    <tokio::sync::task::atomic_waker::[0]::tokio::sync::task::atomic_waker::AtomicWaker>::wake
              (*param_1 + 0x100);
    return;
  }
  return;
}


// ===== 0075593c  FUN_0075593c =====

void FUN_0075593c(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 0075594c to 0075594f has its CatchHandler @ 00755988 */
  FUN_0076ddac();
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
    <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::runtime::scheduler::multi_thread::queue::Inner<alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::runtime::scheduler::multi_thread::handle::Handle>>>>
    ::drop_slow(param_1);
    return;
  }
  return;
}


// ===== 007559bc  FUN_007559bc =====

void FUN_007559bc(byte *param_1)

{
  void *__ptr;
  byte bVar1;
  void *pvVar2;
  long lVar3;
  
  bVar1 = *param_1;
  if (2 < bVar1) {
    if (bVar1 == 3) {
      if (*(long *)(param_1 + 8) != 0) {
        free(*(void **)(param_1 + 0x10));
        return;
      }
    }
    else {
      if (bVar1 != 4) {
        FUN_0074a9a8(param_1 + 8);
        return;
      }
      __ptr = *(void **)(param_1 + 0x10);
      lVar3 = *(long *)(param_1 + 0x18) + 1;
      pvVar2 = __ptr;
      while (lVar3 = lVar3 + -1, lVar3 != 0) {
                    /* try { // try from 00755a18 to 00755a1b has its CatchHandler @ 00755a88 */
        FUN_00762098(pvVar2);
        pvVar2 = (void *)((long)pvVar2 + 0x20);
      }
      if (*(long *)(param_1 + 8) != 0) {
        free(__ptr);
        return;
      }
    }
  }
  return;
}


// ===== 00755acc  FUN_00755acc =====

void FUN_00755acc(long *param_1)

{
                    /* try { // try from 00755adc to 00755ae3 has its CatchHandler @ 00755b14 */
  FUN_0074a9a8(param_1 + 3);
  if ((*param_1 != -1) && (*param_1 != 0)) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 00755b38  FUN_00755b38 =====

void FUN_00755b38(long *param_1)

{
  void *__ptr;
  void *pvVar1;
  long lVar2;
  
  __ptr = (void *)param_1[1];
  lVar2 = param_1[2] + 1;
  pvVar1 = __ptr;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 00755b68 to 00755b6b has its CatchHandler @ 00755bb0 */
    FUN_00762098(pvVar1);
    pvVar1 = (void *)((long)pvVar1 + 0x20);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00755bf4  FUN_00755bf4 =====

void FUN_00755bf4(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 00755c04 to 00755c07 has its CatchHandler @ 00755c7c */
  <tokio::runtime::context::current::SetCurrentGuard_as_core::ops::drop::Drop>::drop();
  if (*param_1 != 2) {
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
        drop_slow(param_1 + 1);
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
        ::drop_slow(param_1 + 1);
        return;
      }
    }
  }
  return;
}


// ===== 00755c94  FUN_00755c94 =====

void FUN_00755c94(long *param_1)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  
  if (*param_1 == 0) {
    plVar4 = (long *)param_1[1];
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
                    /* try { // try from 00755d28 to 00755d2b has its CatchHandler @ 00755da4 */
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>>::
      drop_slow();
    }
    if (param_1[3] != 0) {
                    /* try { // try from 00755d34 to 00755d37 has its CatchHandler @ 00755dbc */
      FUN_00755330();
    }
    puVar6 = (undefined8 *)(param_1[6] + 8);
    lVar5 = param_1[7] + 1;
    while (lVar5 = lVar5 + -1, lVar5 != 0) {
      plVar4 = puVar6 + -1;
      uVar1 = *puVar6;
      puVar6 = puVar6 + 2;
                    /* try { // try from 00755d60 to 00755d63 has its CatchHandler @ 00755df8 */
      (**(code **)(*plVar4 + 0x18))(uVar1);
    }
  }
  else {
    plVar4 = (long *)param_1[1];
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
                    /* try { // try from 00755cd0 to 00755cd3 has its CatchHandler @ 00755dd0 */
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::worker::Worker>>
      ::drop_slow();
    }
                    /* try { // try from 00755cd8 to 00755cdb has its CatchHandler @ 00755de4 */
    FUN_00755024(param_1[3]);
    puVar6 = (undefined8 *)(param_1[6] + 8);
    lVar5 = param_1[7] + 1;
    while (lVar5 = lVar5 + -1, lVar5 != 0) {
      plVar4 = puVar6 + -1;
      uVar1 = *puVar6;
      puVar6 = puVar6 + 2;
                    /* try { // try from 00755d04 to 00755d07 has its CatchHandler @ 00755e1c */
      (**(code **)(*plVar4 + 0x18))(uVar1);
    }
  }
  if (param_1[5] != 0) {
    free((void *)param_1[6]);
    return;
  }
  return;
}


// ===== 00755e60  FUN_00755e60 =====

void FUN_00755e60(undefined8 param_1)

{
                    /* try { // try from 00755e70 to 00755e73 has its CatchHandler @ 00755e84 */
  <tokio::runtime::scheduler::current_thread::CoreGuard_as_core::ops::drop::Drop>::drop();
  FUN_00755c94(param_1);
  return;
}


// ===== 00755e9c  FUN_00755e9c =====

void FUN_00755e9c(long param_1)

{
  long *plVar1;
  void *__ptr;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  __ptr = *(void **)(param_1 + 0x10);
  puVar4 = (undefined8 *)((long)__ptr + 8);
  lVar3 = *(long *)(param_1 + 0x18) + 1;
  while (lVar3 = lVar3 + -1, lVar3 != 0) {
    plVar1 = puVar4 + -1;
    uVar2 = *puVar4;
    puVar4 = puVar4 + 2;
                    /* try { // try from 00755ed4 to 00755ed7 has its CatchHandler @ 00755f18 */
    (**(code **)(*plVar1 + 0x18))(uVar2);
  }
  if (*(long *)(param_1 + 8) != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00755f5c  FUN_00755f5c =====

void FUN_00755f5c(undefined1 *param_1,long param_2)

{
  long lVar1;
  long local_90;
  void *pvStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  void *pvStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_90 = -1;
  local_78 = 0;
  uStack_68 = 0;
                    /* try { // try from 00755f8c to 0075614f has its CatchHandler @ 007561ec */
  lVar1 = FUN_007589dc(&local_90,"guildId",7,param_2 + 0x58);
  if (((((((lVar1 == 0) && (lVar1 = FUN_007589dc(&local_90,"id",2,param_2 + 0x60), lVar1 == 0)) &&
         (lVar1 = FUN_00758840(&local_90,&DAT_002bd1cc,4,param_2 + 0x40), lVar1 == 0)) &&
        ((lVar1 = FUN_00756a34(&local_90,"description",0xb,param_2 + 0x68), lVar1 == 0 &&
         (lVar1 = FUN_0075927c(&local_90,param_2 + 0x78), lVar1 == 0)))) &&
       (((lVar1 = FUN_00759e88(&local_90,"flags",5,param_2 + 0x80), lVar1 == 0 &&
         ((lVar1 = FUN_007599f8(&local_90,"mentionable",0xb,param_2 + 0xd8), lVar1 == 0 &&
          (lVar1 = FUN_00759d80(&local_90,&DAT_002a1810,8,param_2 + 0xd0), lVar1 == 0)))) &&
        (lVar1 = FUN_00759d80(&local_90,"color",5,param_2 + 0xd4), lVar1 == 0)))) &&
      ((((lVar1 = FUN_007571b8(&local_90,param_2 + 0xa8), lVar1 == 0 &&
         (lVar1 = FUN_00757b28(&local_90,"colorString",0xb,*(undefined4 *)(param_2 + 0x10),
                               *(undefined4 *)(param_2 + 0x14)), lVar1 == 0)) &&
        (lVar1 = FUN_00757064(&local_90,param_2 + 0xbc), lVar1 == 0)) &&
       (((lVar1 = FUN_007599f8(&local_90,"hoist",5,param_2 + 0xd9), lVar1 == 0 &&
         (lVar1 = FUN_007599f8(&local_90,"managed",7,param_2 + 0xda), lVar1 == 0)) &&
        ((lVar1 = FUN_00756a34(&local_90,&DAT_002bd224,4,param_2 + 0x88), lVar1 == 0 &&
         ((lVar1 = FUN_00756a34(&local_90,"unicodeEmoji",0xc,param_2 + 0x98), lVar1 == 0 &&
          (lVar1 = FUN_007593c0(&local_90,param_2 + 0x18), lVar1 == 0)))))))))) &&
     (lVar1 = FUN_00757ffc(&local_90,"version",7,param_2), lVar1 == 0)) {
    pvStack_58 = pvStack_88;
    local_60 = local_90;
    uStack_48 = local_78;
    uStack_50 = uStack_80;
    uStack_38 = uStack_68;
    local_40 = local_70;
    <serde_json::value::ser::SerializeMap_as_serde::ser::SerializeStruct>::end(param_1,&local_60);
    return;
  }
  *(long *)(param_1 + 8) = lVar1;
  *param_1 = 0xff;
                    /* try { // try from 00756160 to 00756167 has its CatchHandler @ 007561c8 */
  FUN_0074a9a8(&local_78);
  if ((local_90 != -1) && (local_90 != 0)) {
    free(pvStack_88);
  }
  return;
}


// ===== 00756204  FUN_00756204 =====

void FUN_00756204(undefined1 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  long lVar9;
  long local_100;
  char *pcStack_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  long local_d0;
  char *pcStack_c8;
  undefined1 *puStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  char local_98 [32];
  undefined8 local_78;
  char *local_70;
  undefined8 uStack_68;
  
  local_100 = -1;
  local_e8 = 0;
  uStack_d8 = 0;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  pcStack_f8 = (char *)FUN_004b25a4(0xc,1);
  uVar8 = s_primaryColor_002d154b._0_8_;
  if (pcStack_f8 == (char *)0x0) {
                    /* try { // try from 007563e4 to 007563ef has its CatchHandler @ 00756444 */
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(1,0xc);
  }
  pcStack_f8[8] = 'o';
  pcStack_f8[9] = 'l';
  pcStack_f8[10] = 'o';
  pcStack_f8[0xb] = 'r';
  uVar1 = param_2[4];
  *(undefined8 *)pcStack_f8 = uVar8;
  uStack_f0 = 0xc;
  local_100 = -1;
  uVar2 = (&DAT_002a0ca0)[(ulong)(uVar1 >> 0x10) & 0xf];
  uVar3 = (&DAT_002a0ca0)[(ulong)(uVar1 >> 0x14) & 0xf];
  uVar4 = (&DAT_002a0ca0)[(ulong)(uVar1 >> 0xc) & 0xf];
  uVar5 = (&DAT_002a0ca0)[(ulong)(uVar1 >> 8) & 0xf];
  uVar6 = (&DAT_002a0ca0)[(ulong)(uVar1 >> 4) & 0xf];
  uVar7 = (&DAT_002a0ca0)[(ulong)uVar1 & 0xf];
  uStack_68 = 0xc;
  local_78 = 0xc;
  local_70 = pcStack_f8;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puStack_c0 = (undefined1 *)FUN_004b25a4(7,1);
  if (puStack_c0 != (undefined1 *)0x0) {
    puStack_c0[1] = uVar3;
    *puStack_c0 = 0x23;
    local_d0 = CONCAT71(local_d0._1_7_,3);
    puStack_c0[2] = uVar2;
    puStack_c0[3] = uVar4;
    puStack_c0[4] = uVar5;
    puStack_c0[5] = uVar6;
    puStack_c0[6] = uVar7;
    pcStack_c8 = (char *)0x7;
    local_b8 = 7;
                    /* try { // try from 00756314 to 0075636f has its CatchHandler @ 00756444 */
    FUN_0074a624(local_98,&local_e8,&local_78,&local_d0);
    if (local_98[0] != -1) {
      FUN_007559bc(local_98);
    }
    lVar9 = FUN_00757b28(&local_100,"secondaryColor",0xe,*param_2,param_2[1]);
    if ((lVar9 == 0) &&
       (lVar9 = FUN_00757b28(&local_100,"tertiaryColor",0xd,param_2[2],param_2[3]), lVar9 == 0)) {
      pcStack_c8 = pcStack_f8;
      local_d0 = local_100;
      local_b8 = local_e8;
      puStack_c0 = (undefined1 *)uStack_f0;
      uStack_a8 = uStack_d8;
      local_b0 = local_e0;
      <serde_json::value::ser::SerializeMap_as_serde::ser::SerializeStruct>::end(param_1,&local_d0);
    }
    else {
      *(long *)(param_1 + 8) = lVar9;
      *param_1 = 0xff;
                    /* try { // try from 00756380 to 00756387 has its CatchHandler @ 00756404 */
      FUN_0074a9a8(&local_e8);
      if ((local_100 != -1) && (local_100 != 0)) {
        free(pcStack_f8);
      }
    }
    return;
  }
                    /* try { // try from 007563f4 to 007563ff has its CatchHandler @ 00756428 */
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(1,7);
}


// ===== 0075645c  FUN_0075645c =====

undefined8 FUN_0075645c(long *param_1,void *param_2,size_t param_3,undefined8 param_4)

{
  undefined1 *__dest;
  long lVar1;
  undefined8 uVar2;
  char local_b8 [32];
  size_t local_98;
  void *local_90;
  long lStack_88;
  char local_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 local_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (-1 < (long)param_3) {
    if (param_3 == 0) {
      __dest = &DAT_00000001;
      lVar1 = *param_1;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar2 = 1;
      __dest = (undefined1 *)FUN_004b25a4(param_3,1);
      if (__dest == (undefined1 *)0x0) goto LAB_00756480;
      memcpy(__dest,param_2,param_3);
      lVar1 = *param_1;
    }
    if ((lVar1 != -1) && (lVar1 != 0)) {
      free((void *)param_1[1]);
    }
    param_1[1] = (long)__dest;
    param_1[2] = param_3;
    lStack_88 = param_1[2];
    local_90 = (void *)param_1[1];
    *param_1 = -1;
                    /* try { // try from 0075650c to 00756517 has its CatchHandler @ 007565ac */
    local_98 = param_3;
    FUN_0075ac54(local_80,param_4);
    if (local_80[0] == -1) {
      if (param_3 != 0) {
        free(local_90);
        return uStack_78;
      }
    }
    else {
      uStack_58 = uStack_78;
      uStack_48 = uStack_68;
      uStack_50 = uStack_70;
      FUN_0074a624(local_b8,param_1 + 3,&local_98,local_60);
      if (local_b8[0] != -1) {
        FUN_007559bc(local_b8);
      }
      uStack_78 = 0;
    }
    return uStack_78;
  }
  uVar2 = 0;
LAB_00756480:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar2,param_3);
}


// ===== 007565cc  FUN_007565cc =====

undefined8 FUN_007565cc(long *param_1,void *param_2,size_t param_3,long *param_4)

{
  undefined1 *__dest;
  long lVar1;
  undefined8 uVar2;
  char local_b8 [32];
  size_t local_98;
  void *local_90;
  long lStack_88;
  char local_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 local_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (-1 < (long)param_3) {
    if (param_3 == 0) {
      __dest = &DAT_00000001;
      lVar1 = *param_1;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar2 = 1;
      __dest = (undefined1 *)FUN_004b25a4(param_3,1);
      if (__dest == (undefined1 *)0x0) goto LAB_007565f0;
      memcpy(__dest,param_2,param_3);
      lVar1 = *param_1;
    }
    if ((lVar1 != -1) && (lVar1 != 0)) {
      free((void *)param_1[1]);
    }
    param_1[1] = (long)__dest;
    param_1[2] = param_3;
    lVar1 = *param_4;
    lStack_88 = param_1[2];
    local_90 = (void *)param_1[1];
    *param_1 = -1;
                    /* try { // try from 00756680 to 0075668b has its CatchHandler @ 00756720 */
    local_98 = param_3;
    FUN_0075ae28(local_80,lVar1 + 0x10);
    if (local_80[0] == -1) {
      if (param_3 != 0) {
        free(local_90);
        return uStack_78;
      }
    }
    else {
      uStack_58 = uStack_78;
      uStack_48 = uStack_68;
      uStack_50 = uStack_70;
      FUN_0074a624(local_b8,param_1 + 3,&local_98,local_60);
      if (local_b8[0] != -1) {
        FUN_007559bc(local_b8);
      }
      uStack_78 = 0;
    }
    return uStack_78;
  }
  uVar2 = 0;
LAB_007565f0:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar2,param_3);
}


// ===== 00756740  FUN_00756740 =====

undefined8 FUN_00756740(long *param_1,void *param_2,size_t param_3,long *param_4)

{
  long lVar1;
  undefined1 *__dest;
  long lVar2;
  undefined8 uVar3;
  char local_b8 [32];
  size_t local_98;
  void *local_90;
  long lStack_88;
  char local_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 local_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (-1 < (long)param_3) {
    if (param_3 == 0) {
      __dest = &DAT_00000001;
      lVar2 = *param_1;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar3 = 1;
      __dest = (undefined1 *)FUN_004b25a4(param_3,1);
      if (__dest == (undefined1 *)0x0) goto LAB_00756764;
      memcpy(__dest,param_2,param_3);
      lVar2 = *param_1;
    }
    if ((lVar2 != -1) && (lVar2 != 0)) {
      free((void *)param_1[1]);
    }
    param_1[1] = (long)__dest;
    param_1[2] = param_3;
    lVar2 = *param_4;
    lVar1 = param_4[1];
    lStack_88 = param_1[2];
    local_90 = (void *)param_1[1];
    *param_1 = -1;
                    /* try { // try from 007567f4 to 007567ff has its CatchHandler @ 00756894 */
    local_98 = param_3;
    FUN_0075b02c(local_80,lVar2 + 0x10,lVar1);
    if (local_80[0] == -1) {
      if (param_3 != 0) {
        free(local_90);
        return uStack_78;
      }
    }
    else {
      uStack_58 = uStack_78;
      uStack_48 = uStack_68;
      uStack_50 = uStack_70;
      FUN_0074a624(local_b8,param_1 + 3,&local_98,local_60);
      if (local_b8[0] != -1) {
        FUN_007559bc(local_b8);
      }
      uStack_78 = 0;
    }
    return uStack_78;
  }
  uVar3 = 0;
LAB_00756764:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar3,param_3);
}


// ===== 007568b4  FUN_007568b4 =====

undefined8 FUN_007568b4(long *param_1,void *param_2,size_t param_3,long *param_4)

{
  undefined1 *__dest;
  long lVar1;
  undefined8 uVar2;
  char local_b8 [32];
  size_t local_98;
  void *local_90;
  long lStack_88;
  char local_80;
  undefined7 uStack_7f;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (-1 < (long)param_3) {
    if (param_3 == 0) {
      __dest = &DAT_00000001;
      lVar1 = *param_1;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar2 = 1;
      __dest = (undefined1 *)FUN_004b25a4(param_3,1);
      if (__dest == (undefined1 *)0x0) goto LAB_007568d8;
      memcpy(__dest,param_2,param_3);
      lVar1 = *param_1;
    }
    if ((lVar1 != -1) && (lVar1 != 0)) {
      free((void *)param_1[1]);
    }
    param_1[1] = (long)__dest;
    param_1[2] = param_3;
    lVar1 = *param_4;
    lStack_88 = param_1[2];
    local_90 = (void *)param_1[1];
    *param_1 = -1;
    local_98 = param_3;
    if (lVar1 == -1) {
      local_80 = '\0';
    }
    else {
                    /* try { // try from 00756970 to 0075697b has its CatchHandler @ 00756a14 */
      FUN_0075ac54(&local_80,param_4);
      if (local_80 == -1) {
        if (param_3 != 0) {
          free(local_90);
        }
        return uStack_78;
      }
    }
    local_60 = CONCAT71(uStack_7f,local_80);
    uStack_58 = uStack_78;
    uStack_48 = uStack_68;
    uStack_50 = uStack_70;
    FUN_0074a624(local_b8,param_1 + 3,&local_98,&local_60);
    if (local_b8[0] != -1) {
      FUN_007559bc(local_b8);
    }
    return 0;
  }
  uVar2 = 0;
LAB_007568d8:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar2,param_3);
}


// ===== 00756a34  FUN_00756a34 =====

undefined8 FUN_00756a34(long *param_1,void *param_2,size_t param_3,long *param_4)

{
  undefined1 *__dest;
  long lVar1;
  undefined8 uVar2;
  char local_98 [32];
  size_t local_78;
  long local_70;
  long lStack_68;
  undefined1 local_60 [8];
  long *local_58;
  undefined1 *puStack_50;
  long *local_48;
  
  if ((long)param_3 < 0) {
    uVar2 = 0;
LAB_00756a58:
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar2,param_3);
  }
  if (param_3 == 0) {
    __dest = &DAT_00000001;
    lVar1 = *param_1;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar2 = 1;
    __dest = (undefined1 *)FUN_004b25a4(param_3,1);
    if (__dest == (undefined1 *)0x0) goto LAB_00756a58;
    memcpy(__dest,param_2,param_3);
    lVar1 = *param_1;
  }
  if ((lVar1 != -1) && (lVar1 != 0)) {
    free((void *)param_1[1]);
  }
  param_1[1] = (long)__dest;
  param_1[2] = param_3;
  lVar1 = *param_4;
  lStack_68 = param_1[2];
  local_70 = param_1[1];
  *param_1 = -1;
  local_78 = param_3;
  if (lVar1 == 0) {
    local_60[0] = 0;
  }
  else {
    param_4 = (long *)param_4[1];
    if ((long)param_4 < 0) {
      uVar2 = 0;
LAB_00756af8:
                    /* try { // try from 00756af8 to 00756b03 has its CatchHandler @ 00756b9c */
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(uVar2,param_4);
    }
    if (param_4 == (long *)0x0) {
      local_60[0] = 3;
      __dest = &DAT_00000001;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar2 = 1;
      __dest = (undefined1 *)FUN_004b25a4(param_4,1);
      if (__dest == (undefined1 *)0x0) goto LAB_00756af8;
      memcpy(__dest,(void *)(lVar1 + 0x10),(size_t)param_4);
      local_60[0] = 3;
    }
  }
  local_58 = param_4;
  puStack_50 = __dest;
  local_48 = param_4;
  FUN_0074a624(local_98,param_1 + 3,&local_78,local_60);
  if (local_98[0] != -1) {
    FUN_007559bc(local_98);
  }
  return 0;
}


// ===== 00756bc0  FUN_00756bc0 =====

undefined8 FUN_00756bc0(long *param_1,void *param_2,size_t param_3,byte *param_4)

{
  byte *__src;
  byte bVar1;
  undefined1 *__dest;
  long lVar2;
  size_t __n;
  undefined8 uVar3;
  char local_98 [32];
  size_t local_78;
  long local_70;
  long lStack_68;
  undefined1 local_60 [8];
  size_t local_58;
  byte *pbStack_50;
  size_t local_48;
  
  if (-1 < (long)param_3) {
    if (param_3 == 0) {
      __dest = &DAT_00000001;
      lVar2 = *param_1;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar3 = 1;
      __dest = (undefined1 *)FUN_004b25a4(param_3,1);
      if (__dest == (undefined1 *)0x0) goto LAB_00756be4;
      memcpy(__dest,param_2,param_3);
      lVar2 = *param_1;
    }
    if ((lVar2 != -1) && (lVar2 != 0)) {
      free((void *)param_1[1]);
    }
    param_1[1] = (long)__dest;
    param_1[2] = param_3;
    bVar1 = *param_4;
    __n = (size_t)bVar1;
    lStack_68 = param_1[2];
    local_70 = param_1[1];
    *param_1 = -1;
    local_78 = param_3;
    if (bVar1 == 0xff) {
      local_60[0] = 0;
    }
    else {
      lVar2 = __n - 0x17;
      if (bVar1 < 0x18) {
        lVar2 = 0;
      }
      if (lVar2 == 0) {
        __src = param_4 + 1;
      }
      else if (lVar2 == 1) {
        __src = *(byte **)(param_4 + 8);
        __n = *(size_t *)(param_4 + 0x10);
      }
      else {
        __n = *(size_t *)(param_4 + 0x10);
        __src = (byte *)(*(long *)(param_4 + 8) + 0x10);
      }
      if (__n == 0) {
        local_60[0] = 3;
        param_4 = &DAT_00000001;
      }
      else {
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        param_4 = (byte *)FUN_004b25a4(__n,1);
        if (param_4 == (byte *)0x0) {
                    /* try { // try from 00756d40 to 00756d4b has its CatchHandler @ 00756d50 */
                    /* WARNING: Subroutine does not return */
          alloc::raw_vec::handle_error(1,__n);
        }
        memcpy(param_4,__src,__n);
        local_60[0] = 3;
      }
    }
    local_58 = __n;
    pbStack_50 = param_4;
    local_48 = __n;
    FUN_0074a624(local_98,param_1 + 3,&local_78,local_60);
    if (local_98[0] != -1) {
      FUN_007559bc(local_98);
    }
    return 0;
  }
  uVar3 = 0;
LAB_00756be4:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar3,param_3);
}


// ===== 00756d70  FUN_00756d70 =====

undefined8 FUN_00756d70(long *param_1,void *param_2,size_t param_3,int *param_4)

{
  int iVar1;
  undefined1 *__dest;
  long lVar2;
  undefined8 uVar3;
  char local_b8 [32];
  size_t local_98;
  void *local_90;
  long lStack_88;
  char local_80;
  undefined7 uStack_7f;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (-1 < (long)param_3) {
    if (param_3 == 0) {
      __dest = &DAT_00000001;
      lVar2 = *param_1;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar3 = 1;
      __dest = (undefined1 *)FUN_004b25a4(param_3,1);
      if (__dest == (undefined1 *)0x0) goto LAB_00756d94;
      memcpy(__dest,param_2,param_3);
      lVar2 = *param_1;
    }
    if ((lVar2 != -1) && (lVar2 != 0)) {
      free((void *)param_1[1]);
    }
    param_1[1] = (long)__dest;
    param_1[2] = param_3;
    iVar1 = *param_4;
    lStack_88 = param_1[2];
    local_90 = (void *)param_1[1];
    *param_1 = -1;
    local_98 = param_3;
    if (iVar1 == 0) {
      local_80 = '\0';
    }
    else {
                    /* try { // try from 00756e28 to 00756e33 has its CatchHandler @ 00756ecc */
      FUN_007399e8(&local_80,param_4);
      if (local_80 == -1) {
        if (param_3 != 0) {
          free(local_90);
        }
        return uStack_78;
      }
    }
    local_60 = CONCAT71(uStack_7f,local_80);
    uStack_58 = uStack_78;
    uStack_48 = uStack_68;
    uStack_50 = uStack_70;
    FUN_0074a624(local_b8,param_1 + 3,&local_98,&local_60);
    if (local_b8[0] != -1) {
      FUN_007559bc(local_b8);
    }
    return 0;
  }
  uVar3 = 0;
LAB_00756d94:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar3,param_3);
}


// ===== 00756eec  FUN_00756eec =====

undefined8 FUN_00756eec(long *param_1,void *param_2,size_t param_3,long *param_4)

{
  undefined1 *__dest;
  long lVar1;
  undefined8 uVar2;
  char local_b8 [32];
  size_t local_98;
  void *local_90;
  long lStack_88;
  char local_80;
  undefined7 uStack_7f;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (-1 < (long)param_3) {
    if (param_3 == 0) {
      __dest = &DAT_00000001;
      lVar1 = *param_1;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar2 = 1;
      __dest = (undefined1 *)FUN_004b25a4(param_3,1);
      if (__dest == (undefined1 *)0x0) goto LAB_00756f10;
      memcpy(__dest,param_2,param_3);
      lVar1 = *param_1;
    }
    if ((lVar1 != -1) && (lVar1 != 0)) {
      free((void *)param_1[1]);
    }
    param_1[1] = (long)__dest;
    param_1[2] = param_3;
    lVar1 = *param_4;
    lStack_88 = param_1[2];
    local_90 = (void *)param_1[1];
    *param_1 = -1;
    local_98 = param_3;
    if (lVar1 == 0) {
      local_80 = '\0';
    }
    else {
                    /* try { // try from 00756fa4 to 00756fab has its CatchHandler @ 00757044 */
      FUN_007397a0(&local_80);
      if (local_80 == -1) {
        if (param_3 != 0) {
          free(local_90);
        }
        return uStack_78;
      }
    }
    local_60 = CONCAT71(uStack_7f,local_80);
    uStack_58 = uStack_78;
    uStack_48 = uStack_68;
    uStack_50 = uStack_70;
    FUN_0074a624(local_b8,param_1 + 3,&local_98,&local_60);
    if (local_b8[0] != -1) {
      FUN_007559bc(local_b8);
    }
    return 0;
  }
  uVar2 = 0;
LAB_00756f10:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar2,param_3);
}


// ===== 00757064  FUN_00757064 =====

undefined8 FUN_00757064(long *param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  long lVar4;
  char local_a8 [32];
  undefined8 local_88;
  void *local_80;
  long lStack_78;
  char local_70;
  undefined7 uStack_6f;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  pcVar3 = (char *)FUN_004b25a4(0xc,1);
  uVar2 = s_colorStrings_002d1520._0_8_;
  if (pcVar3 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(1,0xc);
  }
  lVar4 = *param_1;
  pcVar3[8] = 'i';
  pcVar3[9] = 'n';
  pcVar3[10] = 'g';
  pcVar3[0xb] = 's';
  *(undefined8 *)pcVar3 = uVar2;
  if ((lVar4 != -1) && (lVar4 != 0)) {
    free((void *)param_1[1]);
  }
  iVar1 = *param_2;
  param_1[1] = (long)pcVar3;
  param_1[2] = 0xc;
  lStack_78 = param_1[2];
  local_80 = (void *)param_1[1];
  *param_1 = -1;
  local_88 = 0xc;
  if (iVar1 == 2) {
    local_70 = '\0';
  }
  else {
                    /* try { // try from 00757100 to 0075710b has its CatchHandler @ 00757198 */
    FUN_00756204(&local_70,param_2);
    if (local_70 == -1) {
      free(local_80);
      return uStack_68;
    }
  }
  local_50 = CONCAT71(uStack_6f,local_70);
  uStack_48 = uStack_68;
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  FUN_0074a624(local_a8,param_1 + 3,&local_88,&local_50);
  if (local_a8[0] != -1) {
    FUN_007559bc(local_a8);
  }
  return 0;
}


// ===== 007571b8  FUN_007571b8 =====

undefined8 FUN_007571b8(long *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  long lVar2;
  char local_a8 [32];
  undefined8 local_88;
  void *local_80;
  long lStack_78;
  char local_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 local_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined4 *)FUN_004b25a4(6,1);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(1,6);
  }
  lVar2 = *param_1;
  *(undefined2 *)(puVar1 + 1) = 0x7372;
  *puVar1 = 0x6f6c6f63;
  if ((lVar2 != -1) && (lVar2 != 0)) {
    free((void *)param_1[1]);
  }
  param_1[1] = (long)puVar1;
  param_1[2] = 6;
  lStack_78 = param_1[2];
  local_80 = (void *)param_1[1];
  *param_1 = -1;
  local_88 = 6;
                    /* try { // try from 00757238 to 00757243 has its CatchHandler @ 007572d4 */
  FUN_00745090(local_70,param_2);
  if (local_70[0] != -1) {
    uStack_48 = uStack_68;
    uStack_38 = uStack_58;
    uStack_40 = uStack_60;
    FUN_0074a624(local_a8,param_1 + 3,&local_88,local_50);
    if (local_a8[0] != -1) {
      FUN_007559bc(local_a8);
    }
    return 0;
  }
  free(local_80);
  return uStack_68;
}


// ===== 007572f4  FUN_007572f4 =====

undefined8 FUN_007572f4(long *param_1,void *param_2,size_t param_3,long *param_4)

{
  undefined1 *__dest;
  long lVar1;
  undefined8 uVar2;
  char local_b8 [32];
  size_t local_98;
  void *local_90;
  long lStack_88;
  char local_80;
  undefined7 uStack_7f;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (-1 < (long)param_3) {
    if (param_3 == 0) {
      __dest = &DAT_00000001;
      lVar1 = *param_1;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar2 = 1;
      __dest = (undefined1 *)FUN_004b25a4(param_3,1);
      if (__dest == (undefined1 *)0x0) goto LAB_00757318;
      memcpy(__dest,param_2,param_3);
      lVar1 = *param_1;
    }
    if ((lVar1 != -1) && (lVar1 != 0)) {
      free((void *)param_1[1]);
    }
    param_1[1] = (long)__dest;
    param_1[2] = param_3;
    lVar1 = *param_4;
    lStack_88 = param_1[2];
    local_90 = (void *)param_1[1];
    *param_1 = -1;
    local_98 = param_3;
    if (lVar1 == 1) {
                    /* try { // try from 007573b0 to 007573bb has its CatchHandler @ 00757454 */
      FUN_0070d69c(&local_80,param_4 + 1);
      if (local_80 == -1) {
        if (param_3 != 0) {
          free(local_90);
        }
        return uStack_78;
      }
    }
    else {
      local_80 = '\0';
    }
    local_60 = CONCAT71(uStack_7f,local_80);
    uStack_58 = uStack_78;
    uStack_48 = uStack_68;
    uStack_50 = uStack_70;
    FUN_0074a624(local_b8,param_1 + 3,&local_98,&local_60);
    if (local_b8[0] != -1) {
      FUN_007559bc(local_b8);
    }
    return 0;
  }
  uVar2 = 0;
LAB_00757318:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar2,param_3);
}


// ===== 00757474  FUN_00757474 =====

undefined8 FUN_00757474(long *param_1,void *param_2,size_t param_3,long *param_4)

{
  undefined1 *__dest;
  long lVar1;
  undefined8 uVar2;
  char local_b8 [32];
  size_t local_98;
  void *local_90;
  long lStack_88;
  char local_80;
  undefined7 uStack_7f;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (-1 < (long)param_3) {
    if (param_3 == 0) {
      __dest = &DAT_00000001;
      lVar1 = *param_1;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar2 = 1;
      __dest = (undefined1 *)FUN_004b25a4(param_3,1);
      if (__dest == (undefined1 *)0x0) goto LAB_00757498;
      memcpy(__dest,param_2,param_3);
      lVar1 = *param_1;
    }
    if ((lVar1 != -1) && (lVar1 != 0)) {
      free((void *)param_1[1]);
    }
    param_1[1] = (long)__dest;
    param_1[2] = param_3;
    lVar1 = *param_4;
    lStack_88 = param_1[2];
    local_90 = (void *)param_1[1];
    *param_1 = -1;
    local_98 = param_3;
    if (lVar1 == 2) {
      local_80 = '\0';
    }
    else {
                    /* try { // try from 00757538 to 00757543 has its CatchHandler @ 007575d8 */
      FUN_0070da28(&local_80,param_4);
      if (local_80 == -1) {
        if (param_3 == 0) {
          return uStack_78;
        }
        free(local_90);
        return uStack_78;
      }
    }
    local_60 = CONCAT71(uStack_7f,local_80);
    uStack_58 = uStack_78;
    uStack_48 = uStack_68;
    uStack_50 = uStack_70;
    FUN_0074a624(local_b8,param_1 + 3,&local_98,&local_60);
    if (local_b8[0] != -1) {
      FUN_007559bc(local_b8);
    }
    return 0;
  }
  uVar2 = 0;
LAB_00757498:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar2,param_3);
}


// ===== 007575f8  FUN_007575f8 =====

undefined8 FUN_007575f8(long *param_1,void *param_2,size_t param_3,long param_4)

{
  char cVar1;
  undefined1 *__dest;
  long lVar2;
  undefined8 uVar3;
  char local_b8 [32];
  size_t local_98;
  void *local_90;
  long lStack_88;
  char local_80;
  undefined7 uStack_7f;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (-1 < (long)param_3) {
    if (param_3 == 0) {
      __dest = &DAT_00000001;
      lVar2 = *param_1;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar3 = 1;
      __dest = (undefined1 *)FUN_004b25a4(param_3,1);
      if (__dest == (undefined1 *)0x0) goto LAB_0075761c;
      memcpy(__dest,param_2,param_3);
      lVar2 = *param_1;
    }
    if ((lVar2 != -1) && (lVar2 != 0)) {
      free((void *)param_1[1]);
    }
    param_1[1] = (long)__dest;
    param_1[2] = param_3;
    cVar1 = *(char *)(param_4 + 8);
    lStack_88 = param_1[2];
    local_90 = (void *)param_1[1];
    *param_1 = -1;
    local_98 = param_3;
    if (cVar1 == '\x02') {
      local_80 = '\0';
    }
    else {
                    /* try { // try from 007576bc to 007576c7 has its CatchHandler @ 0075775c */
      FUN_0070d90c(&local_80,param_4);
      if (local_80 == -1) {
        if (param_3 == 0) {
          return uStack_78;
        }
        free(local_90);
        return uStack_78;
      }
    }
    local_60 = CONCAT71(uStack_7f,local_80);
    uStack_58 = uStack_78;
    uStack_48 = uStack_68;
    uStack_50 = uStack_70;
    FUN_0074a624(local_b8,param_1 + 3,&local_98,&local_60);
    if (local_b8[0] != -1) {
      FUN_007559bc(local_b8);
    }
    return 0;
  }
  uVar3 = 0;
LAB_0075761c:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar3,param_3);
}


// ===== 0075777c  FUN_0075777c =====

undefined8 FUN_0075777c(long *param_1,void *param_2,size_t param_3,long param_4)

{
  short sVar1;
  undefined1 *__dest;
  long lVar2;
  undefined8 uVar3;
  char local_b8 [32];
  size_t local_98;
  void *local_90;
  long lStack_88;
  char local_80;
  undefined7 uStack_7f;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (-1 < (long)param_3) {
    if (param_3 == 0) {
      __dest = &DAT_00000001;
      lVar2 = *param_1;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar3 = 1;
      __dest = (undefined1 *)FUN_004b25a4(param_3,1);
      if (__dest == (undefined1 *)0x0) goto LAB_007577a0;
      memcpy(__dest,param_2,param_3);
      lVar2 = *param_1;
    }
    if ((lVar2 != -1) && (lVar2 != 0)) {
      free((void *)param_1[1]);
    }
    param_1[1] = (long)__dest;
    param_1[2] = param_3;
    sVar1 = *(short *)(param_4 + 0x18);
    lStack_88 = param_1[2];
    local_90 = (void *)param_1[1];
    *param_1 = -1;
    local_98 = param_3;
    if (sVar1 == 2) {
      local_80 = '\0';
    }
    else {
                    /* try { // try from 00757840 to 0075784b has its CatchHandler @ 007578e0 */
      FUN_0070d7b8(&local_80,param_4);
      if (local_80 == -1) {
        if (param_3 == 0) {
          return uStack_78;
        }
        free(local_90);
        return uStack_78;
      }
    }
    local_60 = CONCAT71(uStack_7f,local_80);
    uStack_58 = uStack_78;
    uStack_48 = uStack_68;
    uStack_50 = uStack_70;
    FUN_0074a624(local_b8,param_1 + 3,&local_98,&local_60);
    if (local_b8[0] != -1) {
      FUN_007559bc(local_b8);
    }
    return 0;
  }
  uVar3 = 0;
LAB_007577a0:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar3,param_3);
}


// ===== 00757900  FUN_00757900 =====

undefined8 FUN_00757900(long *param_1,void *param_2,size_t param_3,byte *param_4)

{
  byte bVar1;
  undefined1 *__dest;
  long lVar2;
  undefined8 uVar3;
  char local_98 [32];
  size_t local_78;
  long local_70;
  long lStack_68;
  undefined1 local_60 [8];
  undefined8 local_58;
  ulong uStack_50;
  
  if (-1 < (long)param_3) {
    if (param_3 == 0) {
      __dest = &DAT_00000001;
      lVar2 = *param_1;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar3 = 1;
      __dest = (undefined1 *)FUN_004b25a4(param_3,1);
      if (__dest == (undefined1 *)0x0) goto LAB_00757924;
      memcpy(__dest,param_2,param_3);
      lVar2 = *param_1;
    }
    if ((lVar2 != -1) && (lVar2 != 0)) {
      free((void *)param_1[1]);
    }
    bVar1 = *param_4;
    uStack_50 = (ulong)bVar1;
    param_1[1] = (long)__dest;
    param_1[2] = param_3;
    *param_1 = -1;
    lStack_68 = param_1[2];
    local_70 = param_1[1];
    local_60[0] = 0;
    if (bVar1 != 0xff) {
      local_60[0] = 2;
    }
    local_58 = 0;
    local_78 = param_3;
    FUN_0074a624(local_98,param_1 + 3,&local_78,local_60);
    if (local_98[0] != -1) {
      FUN_007559bc(local_98);
    }
    return 0;
  }
  uVar3 = 0;
LAB_00757924:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar3,param_3);
}


// ===== 00757a14  FUN_00757a14 =====

undefined8 FUN_00757a14(long *param_1,void *param_2,size_t param_3,byte *param_4)

{
  byte bVar1;
  undefined1 *__dest;
  long lVar2;
  undefined8 uVar3;
  char local_98 [32];
  size_t local_78;
  long local_70;
  long lStack_68;
  undefined1 local_60 [8];
  undefined8 local_58;
  ulong uStack_50;
  
  if (-1 < (long)param_3) {
    if (param_3 == 0) {
      __dest = &DAT_00000001;
      lVar2 = *param_1;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar3 = 1;
      __dest = (undefined1 *)FUN_004b25a4(param_3,1);
      if (__dest == (undefined1 *)0x0) goto LAB_00757a38;
      memcpy(__dest,param_2,param_3);
      lVar2 = *param_1;
    }
    if ((lVar2 != -1) && (lVar2 != 0)) {
      free((void *)param_1[1]);
    }
    bVar1 = *param_4;
    uStack_50 = (ulong)bVar1;
    param_1[1] = (long)__dest;
    param_1[2] = param_3;
    *param_1 = -1;
    lStack_68 = param_1[2];
    local_70 = param_1[1];
    local_60[0] = 0;
    if (bVar1 != 0xff) {
      local_60[0] = 2;
    }
    local_58 = 0;
    local_78 = param_3;
    FUN_0074a624(local_98,param_1 + 3,&local_78,local_60);
    if (local_98[0] != -1) {
      FUN_007559bc(local_98);
    }
    return 0;
  }
  uVar3 = 0;
LAB_00757a38:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar3,param_3);
}


// ===== 00757b28  FUN_00757b28 =====

undefined8 FUN_00757b28(long *param_1,void *param_2,size_t param_3,int param_4,uint param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  void *__dest;
  char local_a8 [32];
  size_t local_88;
  long local_80;
  long lStack_78;
  undefined1 local_70 [8];
  undefined8 local_68;
  undefined1 *puStack_60;
  undefined8 local_58;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  __dest = (void *)FUN_004b25a4(param_3,1);
  if (__dest == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(1,param_3);
  }
  puStack_60 = (undefined1 *)memcpy(__dest,param_2,param_3);
  if ((*param_1 != -1) && (*param_1 != 0)) {
    puStack_60 = (undefined1 *)param_1[1];
    free(puStack_60);
  }
  param_1[1] = (long)__dest;
  param_1[2] = param_3;
  lStack_78 = param_1[2];
  local_80 = param_1[1];
  *param_1 = -1;
  local_88 = param_3;
  if (param_4 == 1) {
    uVar1 = (&DAT_002a0ca0)[(ulong)(param_5 >> 0x10) & 0xf];
    uVar2 = (&DAT_002a0ca0)[(ulong)(param_5 >> 8) & 0xf];
    uVar3 = (&DAT_002a0ca0)[(ulong)(param_5 >> 0x14) & 0xf];
    uVar4 = (&DAT_002a0ca0)[(ulong)(param_5 >> 0xc) & 0xf];
    uVar5 = (&DAT_002a0ca0)[(ulong)(param_5 >> 4) & 0xf];
    uVar6 = (&DAT_002a0ca0)[(ulong)param_5 & 0xf];
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puStack_60 = (undefined1 *)FUN_004b25a4(7,1);
    if (puStack_60 == (undefined1 *)0x0) {
                    /* try { // try from 00757c9c to 00757ca7 has its CatchHandler @ 00757cac */
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(1,7);
    }
    puStack_60[1] = uVar3;
    *puStack_60 = 0x23;
    local_70[0] = 3;
    puStack_60[2] = uVar1;
    puStack_60[3] = uVar4;
    puStack_60[4] = uVar2;
    puStack_60[5] = uVar5;
    puStack_60[6] = uVar6;
  }
  else {
    local_70[0] = 0;
  }
  local_68 = 7;
  local_58 = 7;
  FUN_0074a624(local_a8,param_1 + 3,&local_88,local_70);
  if (local_a8[0] != -1) {
    FUN_007559bc(local_a8);
  }
  return 0;
}


// ===== 00757ccc  FUN_00757ccc =====

undefined8 FUN_00757ccc(long *param_1,void *param_2,size_t param_3,char *param_4)

{
  undefined1 *__dest;
  long lVar1;
  undefined8 uVar2;
  char local_98 [32];
  size_t local_78;
  long local_70;
  long lStack_68;
  undefined1 local_60;
  char local_5f;
  
  if (-1 < (long)param_3) {
    if (param_3 == 0) {
      __dest = &DAT_00000001;
      lVar1 = *param_1;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar2 = 1;
      __dest = (undefined1 *)FUN_004b25a4(param_3,1);
      if (__dest == (undefined1 *)0x0) goto LAB_00757cf0;
      memcpy(__dest,param_2,param_3);
      lVar1 = *param_1;
    }
    if ((lVar1 != -1) && (lVar1 != 0)) {
      free((void *)param_1[1]);
    }
    local_5f = *param_4;
    param_1[1] = (long)__dest;
    param_1[2] = param_3;
    lStack_68 = param_1[2];
    local_70 = param_1[1];
    *param_1 = -1;
    local_60 = local_5f != '\x02';
    local_78 = param_3;
    FUN_0074a624(local_98,param_1 + 3,&local_78,&local_60);
    if (local_98[0] != -1) {
      FUN_007559bc(local_98);
    }
    return 0;
  }
  uVar2 = 0;
LAB_00757cf0:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar2,param_3);
}


// ===== 00757dd4  FUN_00757dd4 =====

undefined8 FUN_00757dd4(long *param_1,void *param_2,size_t param_3,int *param_4)

{
  undefined1 *__dest;
  long lVar1;
  undefined8 uVar2;
  char local_98 [32];
  size_t local_78;
  long local_70;
  long lStack_68;
  undefined1 local_60 [8];
  ulong local_58;
  ulong uStack_50;
  
  if (-1 < (long)param_3) {
    if (param_3 == 0) {
      __dest = &DAT_00000001;
      lVar1 = *param_1;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar2 = 1;
      __dest = (undefined1 *)FUN_004b25a4(param_3,1);
      if (__dest == (undefined1 *)0x0) goto LAB_00757df8;
      memcpy(__dest,param_2,param_3);
      lVar1 = *param_1;
    }
    if ((lVar1 != -1) && (lVar1 != 0)) {
      free((void *)param_1[1]);
    }
    param_1[1] = (long)__dest;
    param_1[2] = param_3;
    *param_1 = -1;
    lStack_68 = param_1[2];
    local_70 = param_1[1];
    uStack_50 = (ulong)param_4[1];
    local_58 = uStack_50 >> 0x3f;
    local_60[0] = 2;
    if (*param_4 == 0) {
      local_60[0] = 0;
    }
    local_78 = param_3;
    FUN_0074a624(local_98,param_1 + 3,&local_78,local_60);
    if (local_98[0] != -1) {
      FUN_007559bc(local_98);
    }
    return 0;
  }
  uVar2 = 0;
LAB_00757df8:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar2,param_3);
}


// ===== 00757ee8  FUN_00757ee8 =====

undefined8 FUN_00757ee8(long *param_1,void *param_2,size_t param_3,short *param_4)

{
  short sVar1;
  undefined1 *__dest;
  long lVar2;
  undefined8 uVar3;
  char local_98 [32];
  size_t local_78;
  long local_70;
  long lStack_68;
  undefined1 local_60 [8];
  undefined8 local_58;
  ulong uStack_50;
  
  if (-1 < (long)param_3) {
    if (param_3 == 0) {
      __dest = &DAT_00000001;
      lVar2 = *param_1;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar3 = 1;
      __dest = (undefined1 *)FUN_004b25a4(param_3,1);
      if (__dest == (undefined1 *)0x0) goto LAB_00757f0c;
      memcpy(__dest,param_2,param_3);
      lVar2 = *param_1;
    }
    if ((lVar2 != -1) && (lVar2 != 0)) {
      free((void *)param_1[1]);
    }
    sVar1 = *param_4;
    param_1[1] = (long)__dest;
    param_1[2] = param_3;
    *param_1 = -1;
    lStack_68 = param_1[2];
    local_70 = param_1[1];
    uStack_50 = (ulong)(ushort)param_4[1];
    local_60[0] = 2;
    if (sVar1 == 0) {
      local_60[0] = 0;
    }
    local_58 = 0;
    local_78 = param_3;
    FUN_0074a624(local_98,param_1 + 3,&local_78,local_60);
    if (local_98[0] != -1) {
      FUN_007559bc(local_98);
    }
    return 0;
  }
  uVar3 = 0;
LAB_00757f0c:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar3,param_3);
}


// ===== 00757ffc  FUN_00757ffc =====

undefined8 FUN_00757ffc(long *param_1,void *param_2,size_t param_3,int *param_4)

{
  int iVar1;
  undefined1 *__dest;
  long lVar2;
  undefined8 uVar3;
  char local_98 [32];
  size_t local_78;
  long local_70;
  long lStack_68;
  undefined1 local_60 [8];
  ulong local_58;
  ulong uStack_50;
  
  if (-1 < (long)param_3) {
    if (param_3 == 0) {
      __dest = &DAT_00000001;
      lVar2 = *param_1;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar3 = 1;
      __dest = (undefined1 *)FUN_004b25a4(param_3,1);
      if (__dest == (undefined1 *)0x0) goto LAB_00758020;
      memcpy(__dest,param_2,param_3);
      lVar2 = *param_1;
    }
    if ((lVar2 != -1) && (lVar2 != 0)) {
      free((void *)param_1[1]);
    }
    iVar1 = *param_4;
    param_1[1] = (long)__dest;
    param_1[2] = param_3;
    *param_1 = -1;
    uStack_50 = *(ulong *)(param_4 + 2);
    lStack_68 = param_1[2];
    local_70 = param_1[1];
    local_58 = uStack_50 >> 0x3f;
    local_60[0] = 2;
    if (iVar1 == 0) {
      local_60[0] = 0;
    }
    local_78 = param_3;
    FUN_0074a624(local_98,param_1 + 3,&local_78,local_60);
    if (local_98[0] != -1) {
      FUN_007559bc(local_98);
    }
    return 0;
  }
  uVar3 = 0;
LAB_00758020:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar3,param_3);
}


// ===== 00758110  FUN_00758110 =====

undefined8 FUN_00758110(long *param_1,void *param_2,size_t param_3,undefined8 param_4)

{
  undefined1 *__dest;
  long lVar1;
  undefined8 uVar2;
  char local_b8 [32];
  size_t local_98;
  void *local_90;
  long lStack_88;
  char local_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 local_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (-1 < (long)param_3) {
    if (param_3 == 0) {
      __dest = &DAT_00000001;
      lVar1 = *param_1;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar2 = 1;
      __dest = (undefined1 *)FUN_004b25a4(param_3,1);
      if (__dest == (undefined1 *)0x0) goto LAB_00758134;
      memcpy(__dest,param_2,param_3);
      lVar1 = *param_1;
    }
    if ((lVar1 != -1) && (lVar1 != 0)) {
      free((void *)param_1[1]);
    }
    param_1[1] = (long)__dest;
    param_1[2] = param_3;
    lStack_88 = param_1[2];
    local_90 = (void *)param_1[1];
    *param_1 = -1;
                    /* try { // try from 007581c0 to 007581cb has its CatchHandler @ 00758260 */
    local_98 = param_3;
    FUN_0075a094(local_80,param_4);
    if (local_80[0] == -1) {
      if (param_3 != 0) {
        free(local_90);
        return uStack_78;
      }
    }
    else {
      uStack_58 = uStack_78;
      uStack_48 = uStack_68;
      uStack_50 = uStack_70;
      FUN_0074a624(local_b8,param_1 + 3,&local_98,local_60);
      if (local_b8[0] != -1) {
        FUN_007559bc(local_b8);
      }
      uStack_78 = 0;
    }
    return uStack_78;
  }
  uVar2 = 0;
LAB_00758134:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar2,param_3);
}


// ===== 00758280  FUN_00758280 =====

undefined8 FUN_00758280(long *param_1,void *param_2,size_t param_3,undefined8 param_4)

{
  undefined1 *__dest;
  long lVar1;
  undefined8 uVar2;
  char local_b8 [32];
  size_t local_98;
  void *local_90;
  long lStack_88;
  char local_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 local_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (-1 < (long)param_3) {
    if (param_3 == 0) {
      __dest = &DAT_00000001;
      lVar1 = *param_1;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar2 = 1;
      __dest = (undefined1 *)FUN_004b25a4(param_3,1);
      if (__dest == (undefined1 *)0x0) goto LAB_007582a4;
      memcpy(__dest,param_2,param_3);
      lVar1 = *param_1;
    }
    if ((lVar1 != -1) && (lVar1 != 0)) {
      free((void *)param_1[1]);
    }
    param_1[1] = (long)__dest;
    param_1[2] = param_3;
    lStack_88 = param_1[2];
    local_90 = (void *)param_1[1];
    *param_1 = -1;
                    /* try { // try from 00758330 to 0075833b has its CatchHandler @ 007583d0 */
    local_98 = param_3;
    FUN_0075a2ec(local_80,param_4);
    if (local_80[0] == -1) {
      if (param_3 != 0) {
        free(local_90);
        return uStack_78;
      }
    }
    else {
      uStack_58 = uStack_78;
      uStack_48 = uStack_68;
      uStack_50 = uStack_70;
      FUN_0074a624(local_b8,param_1 + 3,&local_98,local_60);
      if (local_b8[0] != -1) {
        FUN_007559bc(local_b8);
      }
      uStack_78 = 0;
    }
    return uStack_78;
  }
  uVar2 = 0;
LAB_007582a4:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar2,param_3);
}


// ===== 007583f0  FUN_007583f0 =====

undefined8 FUN_007583f0(long *param_1,void *param_2,size_t param_3,undefined8 param_4)

{
  undefined1 *__dest;
  long lVar1;
  undefined8 uVar2;
  char local_b8 [32];
  size_t local_98;
  void *local_90;
  long lStack_88;
  char local_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 local_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (-1 < (long)param_3) {
    if (param_3 == 0) {
      __dest = &DAT_00000001;
      lVar1 = *param_1;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar2 = 1;
      __dest = (undefined1 *)FUN_004b25a4(param_3,1);
      if (__dest == (undefined1 *)0x0) goto LAB_00758414;
      memcpy(__dest,param_2,param_3);
      lVar1 = *param_1;
    }
    if ((lVar1 != -1) && (lVar1 != 0)) {
      free((void *)param_1[1]);
    }
    param_1[1] = (long)__dest;
    param_1[2] = param_3;
    lStack_88 = param_1[2];
    local_90 = (void *)param_1[1];
    *param_1 = -1;
                    /* try { // try from 007584a0 to 007584ab has its CatchHandler @ 00758540 */
    local_98 = param_3;
    FUN_0075a544(local_80,param_4);
    if (local_80[0] == -1) {
      if (param_3 != 0) {
        free(local_90);
        return uStack_78;
      }
    }
    else {
      uStack_58 = uStack_78;
      uStack_48 = uStack_68;
      uStack_50 = uStack_70;
      FUN_0074a624(local_b8,param_1 + 3,&local_98,local_60);
      if (local_b8[0] != -1) {
        FUN_007559bc(local_b8);
      }
      uStack_78 = 0;
    }
    return uStack_78;
  }
  uVar2 = 0;
LAB_00758414:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar2,param_3);
}


// ===== 00758560  FUN_00758560 =====

undefined8 FUN_00758560(long *param_1,void *param_2,size_t param_3,undefined8 param_4)

{
  undefined1 *__dest;
  long lVar1;
  undefined8 uVar2;
  char local_b8 [32];
  size_t local_98;
  void *local_90;
  long lStack_88;
  char local_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 local_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (-1 < (long)param_3) {
    if (param_3 == 0) {
      __dest = &DAT_00000001;
      lVar1 = *param_1;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar2 = 1;
      __dest = (undefined1 *)FUN_004b25a4(param_3,1);
      if (__dest == (undefined1 *)0x0) goto LAB_00758584;
      memcpy(__dest,param_2,param_3);
      lVar1 = *param_1;
    }
    if ((lVar1 != -1) && (lVar1 != 0)) {
      free((void *)param_1[1]);
    }
    param_1[1] = (long)__dest;
    param_1[2] = param_3;
    lStack_88 = param_1[2];
    local_90 = (void *)param_1[1];
    *param_1 = -1;
                    /* try { // try from 00758610 to 0075861b has its CatchHandler @ 007586b0 */
    local_98 = param_3;
    FUN_0075a79c(local_80,param_4);
    if (local_80[0] == -1) {
      if (param_3 != 0) {
        free(local_90);
        return uStack_78;
      }
    }
    else {
      uStack_58 = uStack_78;
      uStack_48 = uStack_68;
      uStack_50 = uStack_70;
      FUN_0074a624(local_b8,param_1 + 3,&local_98,local_60);
      if (local_b8[0] != -1) {
        FUN_007559bc(local_b8);
      }
      uStack_78 = 0;
    }
    return uStack_78;
  }
  uVar2 = 0;
LAB_00758584:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar2,param_3);
}


// ===== 007586d0  FUN_007586d0 =====

undefined8 FUN_007586d0(long *param_1,void *param_2,size_t param_3,undefined8 param_4)

{
  undefined1 *__dest;
  long lVar1;
  undefined8 uVar2;
  char local_b8 [32];
  size_t local_98;
  void *local_90;
  long lStack_88;
  char local_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 local_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (-1 < (long)param_3) {
    if (param_3 == 0) {
      __dest = &DAT_00000001;
      lVar1 = *param_1;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar2 = 1;
      __dest = (undefined1 *)FUN_004b25a4(param_3,1);
      if (__dest == (undefined1 *)0x0) goto LAB_007586f4;
      memcpy(__dest,param_2,param_3);
      lVar1 = *param_1;
    }
    if ((lVar1 != -1) && (lVar1 != 0)) {
      free((void *)param_1[1]);
    }
    param_1[1] = (long)__dest;
    param_1[2] = param_3;
    lStack_88 = param_1[2];
    local_90 = (void *)param_1[1];
    *param_1 = -1;
                    /* try { // try from 00758780 to 0075878b has its CatchHandler @ 00758820 */
    local_98 = param_3;
    FUN_0075a9fc(local_80,param_4);
    if (local_80[0] == -1) {
      if (param_3 != 0) {
        free(local_90);
        return uStack_78;
      }
    }
    else {
      uStack_58 = uStack_78;
      uStack_48 = uStack_68;
      uStack_50 = uStack_70;
      FUN_0074a624(local_b8,param_1 + 3,&local_98,local_60);
      if (local_b8[0] != -1) {
        FUN_007559bc(local_b8);
      }
      uStack_78 = 0;
    }
    return uStack_78;
  }
  uVar2 = 0;
LAB_007586f4:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar2,param_3);
}


// ===== 00758840  FUN_00758840 =====

undefined8 FUN_00758840(long *param_1,void *param_2,size_t param_3,byte *param_4)

{
  byte *__src;
  byte bVar1;
  undefined1 *puVar2;
  long lVar3;
  size_t __n;
  undefined8 uVar4;
  char local_98 [32];
  size_t local_78;
  long local_70;
  long lStack_68;
  undefined1 local_60 [8];
  size_t local_58;
  undefined1 *puStack_50;
  size_t local_48;
  
  if (-1 < (long)param_3) {
    if (param_3 == 0) {
      puVar2 = &DAT_00000001;
      lVar3 = *param_1;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar4 = 1;
      puVar2 = (undefined1 *)FUN_004b25a4(param_3,1);
      if (puVar2 == (undefined1 *)0x0) goto LAB_00758864;
      memcpy(puVar2,param_2,param_3);
      lVar3 = *param_1;
    }
    if ((lVar3 != -1) && (lVar3 != 0)) {
      free((void *)param_1[1]);
    }
    param_1[1] = (long)puVar2;
    param_1[2] = param_3;
    bVar1 = *param_4;
    __n = (size_t)bVar1;
    lStack_68 = param_1[2];
    local_70 = param_1[1];
    *param_1 = -1;
    lVar3 = __n - 0x17;
    if (bVar1 < 0x18) {
      lVar3 = 0;
    }
    if (lVar3 == 0) {
      __src = param_4 + 1;
    }
    else if (lVar3 == 1) {
      __src = *(byte **)(param_4 + 8);
      __n = *(size_t *)(param_4 + 0x10);
    }
    else {
      __n = *(size_t *)(param_4 + 0x10);
      __src = (byte *)(*(long *)(param_4 + 8) + 0x10);
    }
    local_78 = param_3;
    if (__n == 0) {
      puVar2 = &DAT_00000001;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      puVar2 = (undefined1 *)FUN_004b25a4(__n,1);
      if (puVar2 == (undefined1 *)0x0) {
                    /* try { // try from 007589ac to 007589b7 has its CatchHandler @ 007589bc */
                    /* WARNING: Subroutine does not return */
        alloc::raw_vec::handle_error(1,__n);
      }
      memcpy(puVar2,__src,__n);
    }
    local_60[0] = 3;
    local_58 = __n;
    puStack_50 = puVar2;
    local_48 = __n;
    FUN_0074a624(local_98,param_1 + 3,&local_78,local_60);
    if (local_98[0] != -1) {
      FUN_007559bc(local_98);
    }
    return 0;
  }
  uVar4 = 0;
LAB_00758864:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar4,param_3);
}


// ===== 007589dc  FUN_007589dc =====

undefined8 FUN_007589dc(long *param_1,void *param_2,size_t param_3,undefined8 *param_4)

{
  undefined1 *__dest;
  long lVar1;
  undefined8 uVar2;
  char local_b8 [32];
  size_t local_98;
  void *local_90;
  long lStack_88;
  char local_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 local_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (-1 < (long)param_3) {
    if (param_3 == 0) {
      __dest = &DAT_00000001;
      lVar1 = *param_1;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar2 = 1;
      __dest = (undefined1 *)FUN_004b25a4(param_3,1);
      if (__dest == (undefined1 *)0x0) goto LAB_00758a00;
      memcpy(__dest,param_2,param_3);
      lVar1 = *param_1;
    }
    if ((lVar1 != -1) && (lVar1 != 0)) {
      free((void *)param_1[1]);
    }
    param_1[1] = (long)__dest;
    param_1[2] = param_3;
    uVar2 = *param_4;
    lStack_88 = param_1[2];
    local_90 = (void *)param_1[1];
    *param_1 = -1;
                    /* try { // try from 00758a90 to 00758a97 has its CatchHandler @ 00758b2c */
    local_98 = param_3;
    FUN_007397a0(local_80,uVar2);
    if (local_80[0] == -1) {
      if (param_3 != 0) {
        free(local_90);
        return uStack_78;
      }
    }
    else {
      uStack_58 = uStack_78;
      uStack_48 = uStack_68;
      uStack_50 = uStack_70;
      FUN_0074a624(local_b8,param_1 + 3,&local_98,local_60);
      if (local_b8[0] != -1) {
        FUN_007559bc(local_b8);
      }
      uStack_78 = 0;
    }
    return uStack_78;
  }
  uVar2 = 0;
LAB_00758a00:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar2,param_3);
}


// ===== 00758b4c  FUN_00758b4c =====

undefined8 FUN_00758b4c(long *param_1,void *param_2,size_t param_3,undefined8 param_4)

{
  undefined1 *__dest;
  long lVar1;
  undefined8 uVar2;
  char local_b8 [32];
  size_t local_98;
  void *local_90;
  long lStack_88;
  char local_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 local_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (-1 < (long)param_3) {
    if (param_3 == 0) {
      __dest = &DAT_00000001;
      lVar1 = *param_1;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar2 = 1;
      __dest = (undefined1 *)FUN_004b25a4(param_3,1);
      if (__dest == (undefined1 *)0x0) goto LAB_00758b70;
      memcpy(__dest,param_2,param_3);
      lVar1 = *param_1;
    }
    if ((lVar1 != -1) && (lVar1 != 0)) {
      free((void *)param_1[1]);
    }
    param_1[1] = (long)__dest;
    param_1[2] = param_3;
    lStack_88 = param_1[2];
    local_90 = (void *)param_1[1];
    *param_1 = -1;
                    /* try { // try from 00758bfc to 00758c07 has its CatchHandler @ 00758c9c */
    local_98 = param_3;
    FUN_00755f5c(local_80,param_4);
    if (local_80[0] == -1) {
      if (param_3 != 0) {
        free(local_90);
        return uStack_78;
      }
    }
    else {
      uStack_58 = uStack_78;
      uStack_48 = uStack_68;
      uStack_50 = uStack_70;
      FUN_0074a624(local_b8,param_1 + 3,&local_98,local_60);
      if (local_b8[0] != -1) {
        FUN_007559bc(local_b8);
      }
      uStack_78 = 0;
    }
    return uStack_78;
  }
  uVar2 = 0;
LAB_00758b70:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar2,param_3);
}


// ===== 00758cbc  FUN_00758cbc =====

undefined8 FUN_00758cbc(long *param_1,void *param_2,size_t param_3,undefined8 param_4)

{
  undefined1 *__dest;
  long lVar1;
  undefined8 uVar2;
  char local_b8 [32];
  size_t local_98;
  void *local_90;
  long lStack_88;
  char local_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 local_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (-1 < (long)param_3) {
    if (param_3 == 0) {
      __dest = &DAT_00000001;
      lVar1 = *param_1;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar2 = 1;
      __dest = (undefined1 *)FUN_004b25a4(param_3,1);
      if (__dest == (undefined1 *)0x0) goto LAB_00758ce0;
      memcpy(__dest,param_2,param_3);
      lVar1 = *param_1;
    }
    if ((lVar1 != -1) && (lVar1 != 0)) {
      free((void *)param_1[1]);
    }
    param_1[1] = (long)__dest;
    param_1[2] = param_3;
    lStack_88 = param_1[2];
    local_90 = (void *)param_1[1];
    *param_1 = -1;
                    /* try { // try from 00758d6c to 00758d77 has its CatchHandler @ 00758e0c */
    local_98 = param_3;
    FUN_0072eb7c(local_80,param_4);
    if (local_80[0] == -1) {
      if (param_3 != 0) {
        free(local_90);
        return uStack_78;
      }
    }
    else {
      uStack_58 = uStack_78;
      uStack_48 = uStack_68;
      uStack_50 = uStack_70;
      FUN_0074a624(local_b8,param_1 + 3,&local_98,local_60);
      if (local_b8[0] != -1) {
        FUN_007559bc(local_b8);
      }
      uStack_78 = 0;
    }
    return uStack_78;
  }
  uVar2 = 0;
LAB_00758ce0:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar2,param_3);
}


// ===== 00758e2c  FUN_00758e2c =====

undefined8 FUN_00758e2c(long *param_1,void *param_2,size_t param_3,undefined8 param_4)

{
  undefined1 *__dest;
  long lVar1;
  undefined8 uVar2;
  char local_b8 [32];
  size_t local_98;
  void *local_90;
  long lStack_88;
  char local_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 local_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (-1 < (long)param_3) {
    if (param_3 == 0) {
      __dest = &DAT_00000001;
      lVar1 = *param_1;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar2 = 1;
      __dest = (undefined1 *)FUN_004b25a4(param_3,1);
      if (__dest == (undefined1 *)0x0) goto LAB_00758e50;
      memcpy(__dest,param_2,param_3);
      lVar1 = *param_1;
    }
    if ((lVar1 != -1) && (lVar1 != 0)) {
      free((void *)param_1[1]);
    }
    param_1[1] = (long)__dest;
    param_1[2] = param_3;
    lStack_88 = param_1[2];
    local_90 = (void *)param_1[1];
    *param_1 = -1;
                    /* try { // try from 00758edc to 00758ee7 has its CatchHandler @ 00758f7c */
    local_98 = param_3;
    FUN_0072ed70(local_80,param_4);
    if (local_80[0] == -1) {
      if (param_3 != 0) {
        free(local_90);
        return uStack_78;
      }
    }
    else {
      uStack_58 = uStack_78;
      uStack_48 = uStack_68;
      uStack_50 = uStack_70;
      FUN_0074a624(local_b8,param_1 + 3,&local_98,local_60);
      if (local_b8[0] != -1) {
        FUN_007559bc(local_b8);
      }
      uStack_78 = 0;
    }
    return uStack_78;
  }
  uVar2 = 0;
LAB_00758e50:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar2,param_3);
}


// ===== 00758f9c  FUN_00758f9c =====

undefined8 FUN_00758f9c(long *param_1,void *param_2,size_t param_3,undefined8 param_4)

{
  undefined1 *__dest;
  long lVar1;
  undefined8 uVar2;
  char local_b8 [32];
  size_t local_98;
  void *local_90;
  long lStack_88;
  char local_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 local_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (-1 < (long)param_3) {
    if (param_3 == 0) {
      __dest = &DAT_00000001;
      lVar1 = *param_1;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar2 = 1;
      __dest = (undefined1 *)FUN_004b25a4(param_3,1);
      if (__dest == (undefined1 *)0x0) goto LAB_00758fc0;
      memcpy(__dest,param_2,param_3);
      lVar1 = *param_1;
    }
    if ((lVar1 != -1) && (lVar1 != 0)) {
      free((void *)param_1[1]);
    }
    param_1[1] = (long)__dest;
    param_1[2] = param_3;
    lStack_88 = param_1[2];
    local_90 = (void *)param_1[1];
    *param_1 = -1;
                    /* try { // try from 0075904c to 00759057 has its CatchHandler @ 007590ec */
    local_98 = param_3;
    FUN_0074682c(local_80,param_4);
    if (local_80[0] == -1) {
      if (param_3 != 0) {
        free(local_90);
        return uStack_78;
      }
    }
    else {
      uStack_58 = uStack_78;
      uStack_48 = uStack_68;
      uStack_50 = uStack_70;
      FUN_0074a624(local_b8,param_1 + 3,&local_98,local_60);
      if (local_b8[0] != -1) {
        FUN_007559bc(local_b8);
      }
      uStack_78 = 0;
    }
    return uStack_78;
  }
  uVar2 = 0;
LAB_00758fc0:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar2,param_3);
}


// ===== 0075910c  FUN_0075910c =====

undefined8 FUN_0075910c(long *param_1,void *param_2,size_t param_3,undefined8 param_4)

{
  undefined1 *__dest;
  long lVar1;
  undefined8 uVar2;
  char local_b8 [32];
  size_t local_98;
  void *local_90;
  long lStack_88;
  char local_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 local_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (-1 < (long)param_3) {
    if (param_3 == 0) {
      __dest = &DAT_00000001;
      lVar1 = *param_1;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar2 = 1;
      __dest = (undefined1 *)FUN_004b25a4(param_3,1);
      if (__dest == (undefined1 *)0x0) goto LAB_00759130;
      memcpy(__dest,param_2,param_3);
      lVar1 = *param_1;
    }
    if ((lVar1 != -1) && (lVar1 != 0)) {
      free((void *)param_1[1]);
    }
    param_1[1] = (long)__dest;
    param_1[2] = param_3;
    lStack_88 = param_1[2];
    local_90 = (void *)param_1[1];
    *param_1 = -1;
                    /* try { // try from 007591bc to 007591c7 has its CatchHandler @ 0075925c */
    local_98 = param_3;
    FUN_0072ef64(local_80,param_4);
    if (local_80[0] == -1) {
      if (param_3 != 0) {
        free(local_90);
        return uStack_78;
      }
    }
    else {
      uStack_58 = uStack_78;
      uStack_48 = uStack_68;
      uStack_50 = uStack_70;
      FUN_0074a624(local_b8,param_1 + 3,&local_98,local_60);
      if (local_b8[0] != -1) {
        FUN_007559bc(local_b8);
      }
      uStack_78 = 0;
    }
    return uStack_78;
  }
  uVar2 = 0;
LAB_00759130:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar2,param_3);
}


// ===== 0075927c  FUN_0075927c =====

undefined8 FUN_0075927c(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  long lVar3;
  char local_a8 [32];
  undefined8 local_88;
  void *local_80;
  long lStack_78;
  char local_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 local_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  pcVar2 = (char *)FUN_004b25a4(0xb,1);
  uVar1 = s_permissions_002d14f5._0_8_;
  if (pcVar2 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(1,0xb);
  }
  lVar3 = *param_1;
  pcVar2[7] = 'i';
  pcVar2[8] = 'o';
  pcVar2[9] = 'n';
  pcVar2[10] = 's';
  *(undefined8 *)pcVar2 = uVar1;
  if ((lVar3 != -1) && (lVar3 != 0)) {
    free((void *)param_1[1]);
  }
  param_1[1] = (long)pcVar2;
  param_1[2] = 0xb;
  lStack_78 = param_1[2];
  local_80 = (void *)param_1[1];
  *param_1 = -1;
  local_88 = 0xb;
                    /* try { // try from 00759304 to 0075930f has its CatchHandler @ 007593a0 */
  FUN_007451ec(local_70,param_2);
  if (local_70[0] != -1) {
    uStack_48 = uStack_68;
    uStack_38 = uStack_58;
    uStack_40 = uStack_60;
    FUN_0074a624(local_a8,param_1 + 3,&local_88,local_50);
    if (local_a8[0] != -1) {
      FUN_007559bc(local_a8);
    }
    return 0;
  }
  free(local_80);
  return uStack_68;
}


// ===== 007593c0  FUN_007593c0 =====

undefined8 FUN_007593c0(long *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  long lVar2;
  char local_a8 [32];
  undefined8 local_88;
  void *local_80;
  long lStack_78;
  char local_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 local_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined4 *)FUN_004b25a4(4,1);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(1,4);
  }
  lVar2 = *param_1;
  *puVar1 = 0x73676174;
  if ((lVar2 != -1) && (lVar2 != 0)) {
    free((void *)param_1[1]);
  }
  param_1[1] = (long)puVar1;
  param_1[2] = 4;
  lStack_78 = param_1[2];
  local_80 = (void *)param_1[1];
  *param_1 = -1;
  local_88 = 4;
                    /* try { // try from 00759438 to 00759443 has its CatchHandler @ 007594d4 */
  FUN_00745314(local_70,param_2);
  if (local_70[0] != -1) {
    uStack_48 = uStack_68;
    uStack_38 = uStack_58;
    uStack_40 = uStack_60;
    FUN_0074a624(local_a8,param_1 + 3,&local_88,local_50);
    if (local_a8[0] != -1) {
      FUN_007559bc(local_a8);
    }
    return 0;
  }
  free(local_80);
  return uStack_68;
}


// ===== 007594f4  FUN_007594f4 =====

undefined8 FUN_007594f4(long *param_1,void *param_2,size_t param_3)

{
  undefined1 *__dest;
  long lVar1;
  undefined8 uVar2;
  char local_98 [32];
  size_t local_78;
  long local_70;
  long lStack_68;
  undefined1 local_60 [32];
  
  if (-1 < (long)param_3) {
    if (param_3 == 0) {
      __dest = &DAT_00000001;
      lVar1 = *param_1;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar2 = 1;
      __dest = (undefined1 *)FUN_004b25a4(param_3,1);
      if (__dest == (undefined1 *)0x0) goto LAB_00759518;
      memcpy(__dest,param_2,param_3);
      lVar1 = *param_1;
    }
    if ((lVar1 != -1) && (lVar1 != 0)) {
      free((void *)param_1[1]);
    }
    param_1[1] = (long)__dest;
    param_1[2] = param_3;
    lStack_68 = param_1[2];
    local_70 = param_1[1];
    *param_1 = -1;
    local_60[0] = 0;
    local_78 = param_3;
    FUN_0074a624(local_98,param_1 + 3,&local_78,local_60);
    if (local_98[0] != -1) {
      FUN_007559bc(local_98);
    }
    return 0;
  }
  uVar2 = 0;
LAB_00759518:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar2,param_3);
}


// ===== 007595e8  FUN_007595e8 =====

undefined8 FUN_007595e8(long *param_1,void *param_2,size_t param_3,byte *param_4)

{
  undefined1 *__dest;
  long lVar1;
  undefined8 uVar2;
  char local_98 [32];
  size_t local_78;
  long local_70;
  long lStack_68;
  undefined1 local_60 [8];
  undefined8 local_58;
  ulong uStack_50;
  
  if (-1 < (long)param_3) {
    if (param_3 == 0) {
      __dest = &DAT_00000001;
      lVar1 = *param_1;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar2 = 1;
      __dest = (undefined1 *)FUN_004b25a4(param_3,1);
      if (__dest == (undefined1 *)0x0) goto LAB_0075960c;
      memcpy(__dest,param_2,param_3);
      lVar1 = *param_1;
    }
    if ((lVar1 != -1) && (lVar1 != 0)) {
      free((void *)param_1[1]);
    }
    param_1[1] = (long)__dest;
    param_1[2] = param_3;
    uStack_50 = (ulong)*param_4;
    lStack_68 = param_1[2];
    local_70 = param_1[1];
    *param_1 = -1;
    local_60[0] = 2;
    local_58 = 0;
    local_78 = param_3;
    FUN_0074a624(local_98,param_1 + 3,&local_78,local_60);
    if (local_98[0] != -1) {
      FUN_007559bc(local_98);
    }
    return 0;
  }
  uVar2 = 0;
LAB_0075960c:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar2,param_3);
}


// ===== 007596ec  FUN_007596ec =====

undefined8 FUN_007596ec(long *param_1,void *param_2,size_t param_3,byte *param_4)

{
  undefined1 *__dest;
  long lVar1;
  undefined8 uVar2;
  char local_98 [32];
  size_t local_78;
  long local_70;
  long lStack_68;
  undefined1 local_60 [8];
  undefined8 local_58;
  ulong uStack_50;
  
  if (-1 < (long)param_3) {
    if (param_3 == 0) {
      __dest = &DAT_00000001;
      lVar1 = *param_1;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar2 = 1;
      __dest = (undefined1 *)FUN_004b25a4(param_3,1);
      if (__dest == (undefined1 *)0x0) goto LAB_00759710;
      memcpy(__dest,param_2,param_3);
      lVar1 = *param_1;
    }
    if ((lVar1 != -1) && (lVar1 != 0)) {
      free((void *)param_1[1]);
    }
    param_1[1] = (long)__dest;
    param_1[2] = param_3;
    uStack_50 = (ulong)*param_4;
    lStack_68 = param_1[2];
    local_70 = param_1[1];
    *param_1 = -1;
    local_60[0] = 2;
    local_58 = 0;
    local_78 = param_3;
    FUN_0074a624(local_98,param_1 + 3,&local_78,local_60);
    if (local_98[0] != -1) {
      FUN_007559bc(local_98);
    }
    return 0;
  }
  uVar2 = 0;
LAB_00759710:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar2,param_3);
}


// ===== 007597f0  FUN_007597f0 =====

undefined8 FUN_007597f0(long *param_1,void *param_2,size_t param_3,byte *param_4)

{
  undefined1 *__dest;
  long lVar1;
  undefined8 uVar2;
  char local_98 [32];
  size_t local_78;
  long local_70;
  long lStack_68;
  undefined1 local_60 [8];
  undefined8 local_58;
  ulong uStack_50;
  
  if (-1 < (long)param_3) {
    if (param_3 == 0) {
      __dest = &DAT_00000001;
      lVar1 = *param_1;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar2 = 1;
      __dest = (undefined1 *)FUN_004b25a4(param_3,1);
      if (__dest == (undefined1 *)0x0) goto LAB_00759814;
      memcpy(__dest,param_2,param_3);
      lVar1 = *param_1;
    }
    if ((lVar1 != -1) && (lVar1 != 0)) {
      free((void *)param_1[1]);
    }
    param_1[1] = (long)__dest;
    param_1[2] = param_3;
    uStack_50 = (ulong)*param_4;
    lStack_68 = param_1[2];
    local_70 = param_1[1];
    *param_1 = -1;
    local_60[0] = 2;
    local_58 = 0;
    local_78 = param_3;
    FUN_0074a624(local_98,param_1 + 3,&local_78,local_60);
    if (local_98[0] != -1) {
      FUN_007559bc(local_98);
    }
    return 0;
  }
  uVar2 = 0;
LAB_00759814:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar2,param_3);
}


// ===== 007598f4  FUN_007598f4 =====

undefined8 FUN_007598f4(long *param_1,void *param_2,size_t param_3,byte *param_4)

{
  undefined1 *__dest;
  long lVar1;
  undefined8 uVar2;
  char local_98 [32];
  size_t local_78;
  long local_70;
  long lStack_68;
  undefined1 local_60 [8];
  undefined8 local_58;
  ulong uStack_50;
  
  if (-1 < (long)param_3) {
    if (param_3 == 0) {
      __dest = &DAT_00000001;
      lVar1 = *param_1;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar2 = 1;
      __dest = (undefined1 *)FUN_004b25a4(param_3,1);
      if (__dest == (undefined1 *)0x0) goto LAB_00759918;
      memcpy(__dest,param_2,param_3);
      lVar1 = *param_1;
    }
    if ((lVar1 != -1) && (lVar1 != 0)) {
      free((void *)param_1[1]);
    }
    param_1[1] = (long)__dest;
    param_1[2] = param_3;
    uStack_50 = (ulong)*param_4;
    lStack_68 = param_1[2];
    local_70 = param_1[1];
    *param_1 = -1;
    local_60[0] = 2;
    local_58 = 0;
    local_78 = param_3;
    FUN_0074a624(local_98,param_1 + 3,&local_78,local_60);
    if (local_98[0] != -1) {
      FUN_007559bc(local_98);
    }
    return 0;
  }
  uVar2 = 0;
LAB_00759918:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar2,param_3);
}


// ===== 007599f8  FUN_007599f8 =====

undefined8 FUN_007599f8(long *param_1,void *param_2,size_t param_3,undefined1 *param_4)

{
  undefined1 *__dest;
  long lVar1;
  undefined8 uVar2;
  char local_98 [32];
  size_t local_78;
  long local_70;
  long lStack_68;
  undefined1 local_60;
  undefined1 local_5f;
  
  if (-1 < (long)param_3) {
    if (param_3 == 0) {
      __dest = &DAT_00000001;
      lVar1 = *param_1;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar2 = 1;
      __dest = (undefined1 *)FUN_004b25a4(param_3,1);
      if (__dest == (undefined1 *)0x0) goto LAB_00759a1c;
      memcpy(__dest,param_2,param_3);
      lVar1 = *param_1;
    }
    if ((lVar1 != -1) && (lVar1 != 0)) {
      free((void *)param_1[1]);
    }
    param_1[1] = (long)__dest;
    param_1[2] = param_3;
    *param_1 = -1;
    local_5f = *param_4;
    lStack_68 = param_1[2];
    local_70 = param_1[1];
    local_60 = 1;
    local_78 = param_3;
    FUN_0074a624(local_98,param_1 + 3,&local_78,&local_60);
    if (local_98[0] != -1) {
      FUN_007559bc(local_98);
    }
    return 0;
  }
  uVar2 = 0;
LAB_00759a1c:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar2,param_3);
}


// ===== 00759afc  FUN_00759afc =====

undefined8 FUN_00759afc(long *param_1,void *param_2,size_t param_3,void *param_4,size_t param_5)

{
  undefined1 *__dest;
  long lVar1;
  undefined8 uVar2;
  char local_a8 [32];
  size_t local_88;
  long local_80;
  long lStack_78;
  undefined1 local_70 [8];
  size_t local_68;
  undefined1 *puStack_60;
  size_t local_58;
  
  if ((long)param_3 < 0) {
    uVar2 = 0;
LAB_00759b24:
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar2,param_3);
  }
  if (param_3 == 0) {
    __dest = &DAT_00000001;
    lVar1 = *param_1;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar2 = 1;
    __dest = (undefined1 *)FUN_004b25a4(param_3,1);
    if (__dest == (undefined1 *)0x0) goto LAB_00759b24;
    memcpy(__dest,param_2,param_3);
    lVar1 = *param_1;
  }
  if ((lVar1 != -1) && (lVar1 != 0)) {
    free((void *)param_1[1]);
  }
  param_1[1] = (long)__dest;
  param_1[2] = param_3;
  lStack_78 = param_1[2];
  local_80 = param_1[1];
  *param_1 = -1;
  local_88 = param_3;
  if ((long)param_5 < 0) {
    uVar2 = 0;
LAB_00759bbc:
                    /* try { // try from 00759bbc to 00759bc7 has its CatchHandler @ 00759c58 */
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar2,param_5);
  }
  if (param_5 == 0) {
    puStack_60 = &DAT_00000001;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar2 = 1;
    puStack_60 = (undefined1 *)FUN_004b25a4(param_5,1);
    if (puStack_60 == (undefined1 *)0x0) goto LAB_00759bbc;
    memcpy(puStack_60,param_4,param_5);
  }
  local_70[0] = 3;
  local_68 = param_5;
  local_58 = param_5;
  FUN_0074a624(local_a8,param_1 + 3,&local_88,local_70);
  if (local_a8[0] != -1) {
    FUN_007559bc(local_a8);
  }
  return 0;
}


// ===== 00759c7c  FUN_00759c7c =====

undefined8 FUN_00759c7c(long *param_1,void *param_2,size_t param_3,byte *param_4)

{
  undefined1 *__dest;
  long lVar1;
  undefined8 uVar2;
  char local_98 [32];
  size_t local_78;
  long local_70;
  long lStack_68;
  undefined1 local_60 [8];
  undefined8 local_58;
  ulong uStack_50;
  
  if (-1 < (long)param_3) {
    if (param_3 == 0) {
      __dest = &DAT_00000001;
      lVar1 = *param_1;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar2 = 1;
      __dest = (undefined1 *)FUN_004b25a4(param_3,1);
      if (__dest == (undefined1 *)0x0) goto LAB_00759ca0;
      memcpy(__dest,param_2,param_3);
      lVar1 = *param_1;
    }
    if ((lVar1 != -1) && (lVar1 != 0)) {
      free((void *)param_1[1]);
    }
    param_1[1] = (long)__dest;
    param_1[2] = param_3;
    uStack_50 = (ulong)*param_4;
    lStack_68 = param_1[2];
    local_70 = param_1[1];
    *param_1 = -1;
    local_60[0] = 2;
    local_58 = 0;
    local_78 = param_3;
    FUN_0074a624(local_98,param_1 + 3,&local_78,local_60);
    if (local_98[0] != -1) {
      FUN_007559bc(local_98);
    }
    return 0;
  }
  uVar2 = 0;
LAB_00759ca0:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar2,param_3);
}


// ===== 00759d80  FUN_00759d80 =====

undefined8 FUN_00759d80(long *param_1,void *param_2,size_t param_3,int *param_4)

{
  undefined1 *__dest;
  long lVar1;
  undefined8 uVar2;
  char local_98 [32];
  size_t local_78;
  long local_70;
  long lStack_68;
  undefined1 local_60 [8];
  ulong local_58;
  ulong uStack_50;
  
  if (-1 < (long)param_3) {
    if (param_3 == 0) {
      __dest = &DAT_00000001;
      lVar1 = *param_1;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar2 = 1;
      __dest = (undefined1 *)FUN_004b25a4(param_3,1);
      if (__dest == (undefined1 *)0x0) goto LAB_00759da4;
      memcpy(__dest,param_2,param_3);
      lVar1 = *param_1;
    }
    if ((lVar1 != -1) && (lVar1 != 0)) {
      free((void *)param_1[1]);
    }
    uStack_50 = (ulong)*param_4;
    param_1[1] = (long)__dest;
    param_1[2] = param_3;
    *param_1 = -1;
    lStack_68 = param_1[2];
    local_70 = param_1[1];
    local_58 = uStack_50 >> 0x3f;
    local_60[0] = 2;
    local_78 = param_3;
    FUN_0074a624(local_98,param_1 + 3,&local_78,local_60);
    if (local_98[0] != -1) {
      FUN_007559bc(local_98);
    }
    return 0;
  }
  uVar2 = 0;
LAB_00759da4:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar2,param_3);
}


// ===== 00759e88  FUN_00759e88 =====

undefined8 FUN_00759e88(long *param_1,void *param_2,size_t param_3,ulong *param_4)

{
  undefined1 *__dest;
  long lVar1;
  undefined8 uVar2;
  char local_98 [32];
  size_t local_78;
  long local_70;
  long lStack_68;
  undefined1 local_60 [8];
  ulong local_58;
  ulong uStack_50;
  
  if (-1 < (long)param_3) {
    if (param_3 == 0) {
      __dest = &DAT_00000001;
      lVar1 = *param_1;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar2 = 1;
      __dest = (undefined1 *)FUN_004b25a4(param_3,1);
      if (__dest == (undefined1 *)0x0) goto LAB_00759eac;
      memcpy(__dest,param_2,param_3);
      lVar1 = *param_1;
    }
    if ((lVar1 != -1) && (lVar1 != 0)) {
      free((void *)param_1[1]);
    }
    uStack_50 = *param_4;
    param_1[1] = (long)__dest;
    param_1[2] = param_3;
    *param_1 = -1;
    lStack_68 = param_1[2];
    local_70 = param_1[1];
    local_58 = uStack_50 >> 0x3f;
    local_60[0] = 2;
    local_78 = param_3;
    FUN_0074a624(local_98,param_1 + 3,&local_78,local_60);
    if (local_98[0] != -1) {
      FUN_007559bc(local_98);
    }
    return 0;
  }
  uVar2 = 0;
LAB_00759eac:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar2,param_3);
}


// ===== 00759f90  FUN_00759f90 =====

undefined8 FUN_00759f90(long *param_1,void *param_2,size_t param_3,undefined8 *param_4)

{
  undefined1 *__dest;
  long lVar1;
  undefined8 uVar2;
  char local_98 [32];
  size_t local_78;
  long local_70;
  long lStack_68;
  undefined1 local_60 [8];
  undefined8 local_58;
  undefined8 uStack_50;
  
  if (-1 < (long)param_3) {
    if (param_3 == 0) {
      __dest = &DAT_00000001;
      lVar1 = *param_1;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar2 = 1;
      __dest = (undefined1 *)FUN_004b25a4(param_3,1);
      if (__dest == (undefined1 *)0x0) goto LAB_00759fb4;
      memcpy(__dest,param_2,param_3);
      lVar1 = *param_1;
    }
    if ((lVar1 != -1) && (lVar1 != 0)) {
      free((void *)param_1[1]);
    }
    param_1[1] = (long)__dest;
    param_1[2] = param_3;
    uStack_50 = *param_4;
    lStack_68 = param_1[2];
    local_70 = param_1[1];
    *param_1 = -1;
    local_60[0] = 2;
    local_58 = 0;
    local_78 = param_3;
    FUN_0074a624(local_98,param_1 + 3,&local_78,local_60);
    if (local_98[0] != -1) {
      FUN_007559bc(local_98);
    }
    return 0;
  }
  uVar2 = 0;
LAB_00759fb4:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar2,param_3);
}


// ===== 0075a094  FUN_0075a094 =====

/* WARNING: Removing unreachable block (ram,0x0075a154) */
/* WARNING: Removing unreachable block (ram,0x0075a158) */
/* WARNING: Removing unreachable block (ram,0x0075a244) */
/* WARNING: Removing unreachable block (ram,0x0075a248) */

void FUN_0075a094(undefined1 *param_1,long *param_2)

{
  ulong uVar1;
  int iVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  void *pvStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  long local_f0;
  void *pvStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  char local_c0 [32];
  long local_a0;
  void *local_98;
  undefined8 uStack_90;
  char local_88;
  undefined7 uStack_87;
  void *pvStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  puVar5 = (undefined8 *)*param_2;
  lVar6 = param_2[3];
  local_108 = 0;
  uStack_f8 = 0;
  if (lVar6 != 0) {
    uVar7 = NEON_cmge(*puVar5,0,1);
    puVar3 = puVar5 + 1;
    uVar7 = uVar7 & 0x8080808080808080;
    do {
      for (; uVar7 == 0; uVar7 = uVar7 & 0x8080808080808080) {
        puVar5 = puVar5 + -0xe8;
        uVar7 = NEON_cmge(*puVar3,0,1);
        puVar3 = puVar3 + 1;
      }
      uVar1 = (uVar7 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      iVar2 = (int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3);
                    /* try { // try from 0075a134 to 0075a13b has its CatchHandler @ 0075a2d0 */
      FUN_007398cc(&local_f0,puVar5[(long)-iVar2 * 0x1d + -0x1d]);
      pvVar4 = pvStack_e8;
      if (local_f0 == -1) {
LAB_0075a220:
        *(void **)(param_1 + 8) = pvVar4;
        *param_1 = 0xff;
                    /* try { // try from 0075a230 to 0075a237 has its CatchHandler @ 0075a290 */
        FUN_0074a9a8(&local_108);
        return;
      }
      pvStack_118 = pvStack_e8;
      local_110 = local_e0;
      if (local_f0 == -1) {
                    /* try { // try from 0075a274 to 0075a28b has its CatchHandler @ 0075a2d4 */
                    /* WARNING: Subroutine does not return */
        core::option::expect_failed
                  ("serialize_value called before serialize_key",0x2b,
                   &PTR_s__root__cargo_registry_src_index__00ad7f08);
      }
      local_a0 = local_f0;
      uStack_90 = local_e0;
      local_98 = pvStack_e8;
                    /* try { // try from 0075a194 to 0075a19b has its CatchHandler @ 0075a2b4 */
      FUN_00755f5c(&local_88,puVar5 + (long)-iVar2 * 0x1d + -0x1c);
      if (local_88 == -1) {
        pvVar4 = pvStack_80;
        if (local_f0 != 0) {
          free(local_98);
        }
        goto LAB_0075a220;
      }
      local_f0 = CONCAT71(uStack_87,local_88);
      pvStack_e8 = pvStack_80;
      uStack_d8 = uStack_70;
      local_e0 = local_78;
                    /* try { // try from 0075a1b4 to 0075a1db has its CatchHandler @ 0075a2d0 */
      FUN_0074a624(local_c0,&local_108,&local_a0,&local_f0);
      if (local_c0[0] != -1) {
        FUN_007559bc(local_c0);
      }
      lVar6 = lVar6 + -1;
      uVar7 = uVar7 - 1 & uVar7;
    } while (lVar6 != 0);
  }
  pvStack_e8 = pvStack_118;
  local_f0 = -1;
  uStack_d8 = local_108;
  local_e0 = local_110;
  uStack_c8 = uStack_f8;
  local_d0 = local_100;
  <serde_json::value::ser::SerializeMap_as_serde::ser::SerializeMap>::end(param_1,&local_f0);
  return;
}


// ===== 0075a2ec  FUN_0075a2ec =====

/* WARNING: Removing unreachable block (ram,0x0075a3b0) */
/* WARNING: Removing unreachable block (ram,0x0075a3b4) */
/* WARNING: Removing unreachable block (ram,0x0075a49c) */
/* WARNING: Removing unreachable block (ram,0x0075a4a0) */

void FUN_0075a2ec(undefined1 *param_1,long *param_2)

{
  ulong uVar1;
  int iVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  void *pvStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  long local_f0;
  void *pvStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  char local_c0 [32];
  long local_a0;
  void *local_98;
  undefined8 uStack_90;
  char local_88;
  undefined7 uStack_87;
  void *pvStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  puVar5 = (undefined8 *)*param_2;
  lVar6 = param_2[3];
  local_108 = 0;
  uStack_f8 = 0;
  if (lVar6 != 0) {
    uVar7 = NEON_cmge(*puVar5,0,1);
    puVar3 = puVar5 + 1;
    uVar7 = uVar7 & 0x8080808080808080;
    do {
      for (; uVar7 == 0; uVar7 = uVar7 & 0x8080808080808080) {
        puVar5 = puVar5 + -0x28;
        uVar7 = NEON_cmge(*puVar3,0,1);
        puVar3 = puVar3 + 1;
      }
      uVar1 = (uVar7 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      iVar2 = (int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3);
                    /* try { // try from 0075a390 to 0075a397 has its CatchHandler @ 0075a528 */
      FUN_007398cc(&local_f0,puVar5[(long)-iVar2 * 5 + -5]);
      pvVar4 = pvStack_e8;
      if (local_f0 == -1) {
LAB_0075a47c:
        *(void **)(param_1 + 8) = pvVar4;
        *param_1 = 0xff;
                    /* try { // try from 0075a488 to 0075a48f has its CatchHandler @ 0075a4e8 */
        FUN_0074a9a8(&local_108);
        return;
      }
      pvStack_118 = pvStack_e8;
      local_110 = local_e0;
      if (local_f0 == -1) {
                    /* try { // try from 0075a4cc to 0075a4e3 has its CatchHandler @ 0075a52c */
                    /* WARNING: Subroutine does not return */
        core::option::expect_failed
                  ("serialize_value called before serialize_key",0x2b,
                   &PTR_s__root__cargo_registry_src_index__00ad7f08);
      }
      local_a0 = local_f0;
      uStack_90 = local_e0;
      local_98 = pvStack_e8;
                    /* try { // try from 0075a3f0 to 0075a3f7 has its CatchHandler @ 0075a50c */
      FUN_0074682c(&local_88,puVar5 + (long)-iVar2 * 5 + -4);
      if (local_88 == -1) {
        pvVar4 = pvStack_80;
        if (local_a0 != 0) {
          free(local_98);
        }
        goto LAB_0075a47c;
      }
      local_f0 = CONCAT71(uStack_87,local_88);
      pvStack_e8 = pvStack_80;
      uStack_d8 = uStack_70;
      local_e0 = local_78;
                    /* try { // try from 0075a410 to 0075a437 has its CatchHandler @ 0075a528 */
      FUN_0074a624(local_c0,&local_108,&local_a0,&local_f0);
      if (local_c0[0] != -1) {
        FUN_007559bc(local_c0);
      }
      lVar6 = lVar6 + -1;
      uVar7 = uVar7 - 1 & uVar7;
    } while (lVar6 != 0);
  }
  pvStack_e8 = pvStack_118;
  local_f0 = -1;
  uStack_d8 = local_108;
  local_e0 = local_110;
  uStack_c8 = uStack_f8;
  local_d0 = local_100;
  <serde_json::value::ser::SerializeMap_as_serde::ser::SerializeMap>::end(param_1,&local_f0);
  return;
}


// ===== 0075a544  FUN_0075a544 =====

/* WARNING: Removing unreachable block (ram,0x0075a604) */
/* WARNING: Removing unreachable block (ram,0x0075a608) */
/* WARNING: Removing unreachable block (ram,0x0075a6f4) */
/* WARNING: Removing unreachable block (ram,0x0075a6f8) */

void FUN_0075a544(undefined1 *param_1,long *param_2)

{
  ulong uVar1;
  int iVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  void *pvStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  long local_f0;
  void *pvStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  char local_c0 [32];
  long local_a0;
  void *local_98;
  undefined8 uStack_90;
  char local_88;
  undefined7 uStack_87;
  void *pvStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  puVar5 = (undefined8 *)*param_2;
  lVar6 = param_2[3];
  local_108 = 0;
  uStack_f8 = 0;
  if (lVar6 != 0) {
    uVar7 = NEON_cmge(*puVar5,0,1);
    puVar3 = puVar5 + 1;
    uVar7 = uVar7 & 0x8080808080808080;
    do {
      for (; uVar7 == 0; uVar7 = uVar7 & 0x8080808080808080) {
        puVar5 = puVar5 + -0x60;
        uVar7 = NEON_cmge(*puVar3,0,1);
        puVar3 = puVar3 + 1;
      }
      uVar1 = (uVar7 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      iVar2 = (int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3);
                    /* try { // try from 0075a5e4 to 0075a5eb has its CatchHandler @ 0075a780 */
      FUN_007398cc(&local_f0,puVar5[(long)-iVar2 * 0xc + -0xc]);
      pvVar4 = pvStack_e8;
      if (local_f0 == -1) {
LAB_0075a6d0:
        *(void **)(param_1 + 8) = pvVar4;
        *param_1 = 0xff;
                    /* try { // try from 0075a6e0 to 0075a6e7 has its CatchHandler @ 0075a740 */
        FUN_0074a9a8(&local_108);
        return;
      }
      pvStack_118 = pvStack_e8;
      local_110 = local_e0;
      if (local_f0 == -1) {
                    /* try { // try from 0075a724 to 0075a73b has its CatchHandler @ 0075a784 */
                    /* WARNING: Subroutine does not return */
        core::option::expect_failed
                  ("serialize_value called before serialize_key",0x2b,
                   &PTR_s__root__cargo_registry_src_index__00ad7f08);
      }
      local_a0 = local_f0;
      uStack_90 = local_e0;
      local_98 = pvStack_e8;
                    /* try { // try from 0075a644 to 0075a64b has its CatchHandler @ 0075a764 */
      FUN_0072eb7c(&local_88,puVar5 + (long)-iVar2 * 0xc + -0xb);
      if (local_88 == -1) {
        pvVar4 = pvStack_80;
        if (local_f0 != 0) {
          free(local_98);
        }
        goto LAB_0075a6d0;
      }
      local_f0 = CONCAT71(uStack_87,local_88);
      pvStack_e8 = pvStack_80;
      uStack_d8 = uStack_70;
      local_e0 = local_78;
                    /* try { // try from 0075a664 to 0075a68b has its CatchHandler @ 0075a780 */
      FUN_0074a624(local_c0,&local_108,&local_a0,&local_f0);
      if (local_c0[0] != -1) {
        FUN_007559bc(local_c0);
      }
      lVar6 = lVar6 + -1;
      uVar7 = uVar7 - 1 & uVar7;
    } while (lVar6 != 0);
  }
  pvStack_e8 = pvStack_118;
  local_f0 = -1;
  uStack_d8 = local_108;
  local_e0 = local_110;
  uStack_c8 = uStack_f8;
  local_d0 = local_100;
  <serde_json::value::ser::SerializeMap_as_serde::ser::SerializeMap>::end(param_1,&local_f0);
  return;
}


// ===== 0075a79c  FUN_0075a79c =====

/* WARNING: Removing unreachable block (ram,0x0075a860) */
/* WARNING: Removing unreachable block (ram,0x0075a864) */
/* WARNING: Removing unreachable block (ram,0x0075a954) */
/* WARNING: Removing unreachable block (ram,0x0075a958) */

void FUN_0075a79c(undefined1 *param_1,long *param_2)

{
  ulong uVar1;
  int iVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  void *pvStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  long local_f0;
  void *pvStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  char local_c0 [32];
  long local_a0;
  void *local_98;
  undefined8 uStack_90;
  char local_88;
  undefined7 uStack_87;
  void *pvStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  puVar5 = (undefined8 *)*param_2;
  lVar6 = param_2[3];
  local_108 = 0;
  uStack_f8 = 0;
  if (lVar6 != 0) {
    uVar7 = NEON_cmge(*puVar5,0,1);
    puVar3 = puVar5 + 1;
    uVar7 = uVar7 & 0x8080808080808080;
    do {
      for (; uVar7 == 0; uVar7 = uVar7 & 0x8080808080808080) {
        puVar5 = puVar5 + -0x220;
        uVar7 = NEON_cmge(*puVar3,0,1);
        puVar3 = puVar3 + 1;
      }
      uVar1 = (uVar7 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      iVar2 = (int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3);
                    /* try { // try from 0075a840 to 0075a847 has its CatchHandler @ 0075a9e0 */
      FUN_007398cc(&local_f0,puVar5[(long)-iVar2 * 0x44 + -0x44]);
      pvVar4 = pvStack_e8;
      if (local_f0 == -1) {
LAB_0075a930:
        *(void **)(param_1 + 8) = pvVar4;
        *param_1 = 0xff;
                    /* try { // try from 0075a940 to 0075a947 has its CatchHandler @ 0075a9a0 */
        FUN_0074a9a8(&local_108);
        return;
      }
      pvStack_118 = pvStack_e8;
      local_110 = local_e0;
      if (local_f0 == -1) {
                    /* try { // try from 0075a984 to 0075a99b has its CatchHandler @ 0075a9e4 */
                    /* WARNING: Subroutine does not return */
        core::option::expect_failed
                  ("serialize_value called before serialize_key",0x2b,
                   &PTR_s__root__cargo_registry_src_index__00ad7f08);
      }
      local_a0 = local_f0;
      uStack_90 = local_e0;
      local_98 = pvStack_e8;
                    /* try { // try from 0075a8a4 to 0075a8ab has its CatchHandler @ 0075a9c4 */
      FUN_0072ef64(&local_88,puVar5 + (long)-iVar2 * 0x44 + -0x43);
      if (local_88 == -1) {
        pvVar4 = pvStack_80;
        if (local_f0 != 0) {
          free(local_98);
        }
        goto LAB_0075a930;
      }
      local_f0 = CONCAT71(uStack_87,local_88);
      pvStack_e8 = pvStack_80;
      uStack_d8 = uStack_70;
      local_e0 = local_78;
                    /* try { // try from 0075a8c4 to 0075a8eb has its CatchHandler @ 0075a9e0 */
      FUN_0074a624(local_c0,&local_108,&local_a0,&local_f0);
      if (local_c0[0] != -1) {
        FUN_007559bc(local_c0);
      }
      lVar6 = lVar6 + -1;
      uVar7 = uVar7 - 1 & uVar7;
    } while (lVar6 != 0);
  }
  pvStack_e8 = pvStack_118;
  local_f0 = -1;
  uStack_d8 = local_108;
  local_e0 = local_110;
  uStack_c8 = uStack_f8;
  local_d0 = local_100;
  <serde_json::value::ser::SerializeMap_as_serde::ser::SerializeMap>::end(param_1,&local_f0);
  return;
}


// ===== 0075a9fc  FUN_0075a9fc =====

/* WARNING: Removing unreachable block (ram,0x0075aabc) */
/* WARNING: Removing unreachable block (ram,0x0075aac0) */
/* WARNING: Removing unreachable block (ram,0x0075abac) */
/* WARNING: Removing unreachable block (ram,0x0075abb0) */

void FUN_0075a9fc(undefined1 *param_1,long *param_2)

{
  ulong uVar1;
  int iVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  void *pvStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  long local_f0;
  void *pvStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  char local_c0 [32];
  long local_a0;
  void *local_98;
  undefined8 uStack_90;
  char local_88;
  undefined7 uStack_87;
  void *pvStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  puVar5 = (undefined8 *)*param_2;
  lVar6 = param_2[3];
  local_108 = 0;
  uStack_f8 = 0;
  if (lVar6 != 0) {
    uVar7 = NEON_cmge(*puVar5,0,1);
    puVar3 = puVar5 + 1;
    uVar7 = uVar7 & 0x8080808080808080;
    do {
      for (; uVar7 == 0; uVar7 = uVar7 & 0x8080808080808080) {
        puVar5 = puVar5 + -0x78;
        uVar7 = NEON_cmge(*puVar3,0,1);
        puVar3 = puVar3 + 1;
      }
      uVar1 = (uVar7 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      iVar2 = (int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3);
                    /* try { // try from 0075aa9c to 0075aaa3 has its CatchHandler @ 0075ac38 */
      FUN_007398cc(&local_f0,puVar5[(long)-iVar2 * 0xf + -0xf]);
      pvVar4 = pvStack_e8;
      if (local_f0 == -1) {
LAB_0075ab88:
        *(void **)(param_1 + 8) = pvVar4;
        *param_1 = 0xff;
                    /* try { // try from 0075ab98 to 0075ab9f has its CatchHandler @ 0075abf8 */
        FUN_0074a9a8(&local_108);
        return;
      }
      pvStack_118 = pvStack_e8;
      local_110 = local_e0;
      if (local_f0 == -1) {
                    /* try { // try from 0075abdc to 0075abf3 has its CatchHandler @ 0075ac3c */
                    /* WARNING: Subroutine does not return */
        core::option::expect_failed
                  ("serialize_value called before serialize_key",0x2b,
                   &PTR_s__root__cargo_registry_src_index__00ad7f08);
      }
      local_a0 = local_f0;
      uStack_90 = local_e0;
      local_98 = pvStack_e8;
                    /* try { // try from 0075aafc to 0075ab03 has its CatchHandler @ 0075ac1c */
      FUN_0072ed70(&local_88,puVar5 + (long)-iVar2 * 0xf + -0xe);
      if (local_88 == -1) {
        pvVar4 = pvStack_80;
        if (local_f0 != 0) {
          free(local_98);
        }
        goto LAB_0075ab88;
      }
      local_f0 = CONCAT71(uStack_87,local_88);
      pvStack_e8 = pvStack_80;
      uStack_d8 = uStack_70;
      local_e0 = local_78;
                    /* try { // try from 0075ab1c to 0075ab43 has its CatchHandler @ 0075ac38 */
      FUN_0074a624(local_c0,&local_108,&local_a0,&local_f0);
      if (local_c0[0] != -1) {
        FUN_007559bc(local_c0);
      }
      lVar6 = lVar6 + -1;
      uVar7 = uVar7 - 1 & uVar7;
    } while (lVar6 != 0);
  }
  pvStack_e8 = pvStack_118;
  local_f0 = -1;
  uStack_d8 = local_108;
  local_e0 = local_110;
  uStack_c8 = uStack_f8;
  local_d0 = local_100;
  <serde_json::value::ser::SerializeMap_as_serde::ser::SerializeMap>::end(param_1,&local_f0);
  return;
}


// ===== 0075ac54  FUN_0075ac54 =====

void FUN_0075ac54(undefined1 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  undefined8 *puVar5;
  long local_90;
  void *pvStack_88;
  long local_80;
  char local_70;
  undefined7 uStack_6f;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined7 local_50;
  undefined1 uStack_49;
  undefined7 uStack_48;
  undefined1 uStack_41;
  undefined7 local_40;
  undefined1 uStack_39;
  
  puVar5 = *(undefined8 **)(param_2 + 8);
  lVar4 = *(long *)(param_2 + 0x10);
  <serde_json::value::ser::Serializer_as_serde::ser::Serializer>::serialize_seq(&local_50,1,lVar4);
  if (CONCAT17(uStack_49,local_50) == -1) {
    *param_1 = 0xff;
    *(ulong *)(param_1 + 8) = CONCAT17(uStack_41,uStack_48);
    return;
  }
  pvStack_88 = (void *)CONCAT17(uStack_41,uStack_48);
  local_90 = CONCAT17(uStack_49,local_50);
  local_80 = CONCAT17(uStack_39,local_40);
  if (lVar4 != 0) {
    lVar4 = lVar4 << 3;
    do {
                    /* try { // try from 0075accc to 0075acd3 has its CatchHandler @ 0075ae10 */
      FUN_007397a0(&local_70,*puVar5);
      lVar2 = local_80;
      if (local_70 == -1) {
        *param_1 = 0xff;
        lVar4 = local_80 + 1;
        *(undefined8 *)(param_1 + 8) = uStack_68;
        pvVar3 = pvStack_88;
        while (lVar4 = lVar4 + -1, lVar4 != 0) {
                    /* try { // try from 0075ad80 to 0075ad83 has its CatchHandler @ 0075adcc */
          FUN_00762098(pvVar3);
          pvVar3 = (void *)((long)pvVar3 + 0x20);
        }
        if (local_90 == 0) {
          return;
        }
        free(pvStack_88);
        return;
      }
      if (local_80 == local_90) {
                    /* try { // try from 0075acf0 to 0075acf7 has its CatchHandler @ 0075adb8 */
        <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<serde_json::value::Value>>::grow_one(&local_90)
        ;
      }
      local_80 = lVar2 + 1;
      lVar4 = lVar4 + -8;
      puVar1 = (undefined8 *)((long)pvStack_88 + lVar2 * 0x20);
      puVar1[1] = uStack_68;
      *puVar1 = CONCAT71(uStack_6f,local_70);
      puVar1[3] = uStack_58;
      puVar1[2] = uStack_60;
      puVar5 = puVar5 + 1;
    } while (lVar4 != 0);
  }
  *param_1 = 4;
  uStack_41 = SUB81(pvStack_88,0);
  uStack_49 = (undefined1)local_90;
  uStack_48 = (undefined7)((ulong)local_90 >> 8);
  *(ulong *)(param_1 + 9) = CONCAT17(uStack_41,uStack_48);
  *(ulong *)(param_1 + 1) = CONCAT17(uStack_49,local_50);
  *(long *)(param_1 + 0x18) = local_80;
  *(void **)(param_1 + 0x10) = pvStack_88;
  return;
}


// ===== 0075ae28  FUN_0075ae28 =====

void FUN_0075ae28(undefined1 *param_1,long *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *__dest;
  void *__src;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  long local_b0;
  long lStack_a8;
  long local_a0;
  undefined1 local_90;
  undefined6 uStack_8f;
  undefined1 uStack_89;
  undefined7 uStack_88;
  undefined1 uStack_81;
  undefined7 local_80;
  undefined1 uStack_79;
  undefined7 local_78;
  undefined1 uStack_71;
  
  puVar7 = (undefined8 *)*param_2;
  lVar5 = param_2[3];
  uVar9 = *puVar7;
  <serde_json::value::ser::Serializer_as_serde::ser::Serializer>::serialize_seq(&local_90,1,lVar5);
  if (CONCAT17(uStack_89,CONCAT61(uStack_8f,local_90)) == -1) {
    *param_1 = 0xff;
    *(ulong *)(param_1 + 8) = CONCAT17(uStack_81,uStack_88);
  }
  else {
    lStack_a8 = CONCAT17(uStack_81,uStack_88);
    local_b0 = CONCAT17(uStack_89,CONCAT61(uStack_8f,local_90));
    local_a0 = CONCAT17(uStack_79,local_80);
    if (lVar5 != 0) {
      uVar8 = NEON_cmge(uVar9,0,1);
      puVar3 = puVar7 + 1;
      uVar8 = uVar8 & 0x8080808080808080;
      do {
        for (; uVar8 == 0; uVar8 = uVar8 & 0x8080808080808080) {
          puVar7 = puVar7 + -0x18;
          uVar8 = NEON_cmge(*puVar3,0,1);
          puVar3 = puVar3 + 1;
        }
        uVar6 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        iVar2 = (int)((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3);
        uVar6 = (ulong)*(byte *)(puVar7 + (long)-iVar2 * 3 + -3);
        lVar4 = uVar6 - 0x17;
        if (*(byte *)(puVar7 + (long)-iVar2 * 3 + -3) < 0x18) {
          lVar4 = 0;
        }
        if (lVar4 == 0) {
          __src = (void *)((long)puVar7 + (long)-iVar2 * 0x18 + -0x17);
joined_r0x0075af2c:
          if (uVar6 != 0) goto LAB_0075af30;
LAB_0075af64:
          __dest = &DAT_00000001;
        }
        else {
          if (lVar4 != 1) {
            uVar6 = puVar7[(long)-iVar2 * 3 + -1];
            __src = (void *)(puVar7[(long)-iVar2 * 3 + -2] + 0x10);
            goto joined_r0x0075af2c;
          }
          __src = (void *)puVar7[(long)-iVar2 * 3 + -2];
          uVar6 = puVar7[(long)-iVar2 * 3 + -1];
          if (uVar6 == 0) goto LAB_0075af64;
LAB_0075af30:
          __rustc::__rust_no_alloc_shim_is_unstable_v2();
          __dest = (undefined1 *)FUN_004b25a4(uVar6,1);
          if (__dest == (undefined1 *)0x0) {
                    /* try { // try from 0075aff0 to 0075affb has its CatchHandler @ 0075b014 */
                    /* WARNING: Subroutine does not return */
            alloc::raw_vec::handle_error(1,uVar6);
          }
          memcpy(__dest,__src,uVar6);
        }
        lVar4 = local_a0;
        local_90 = 3;
        uStack_88 = (undefined7)uVar6;
        uStack_81 = (undefined1)(uVar6 >> 0x38);
        local_80 = SUB87(__dest,0);
        uStack_79 = (undefined1)((ulong)__dest >> 0x38);
        local_78 = uStack_88;
        uStack_71 = uStack_81;
        if (local_a0 == local_b0) {
                    /* try { // try from 0075af84 to 0075af8b has its CatchHandler @ 0075b000 */
          <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<serde_json::value::Value>>::grow_one
                    (&local_b0);
        }
        lVar5 = lVar5 + -1;
        local_a0 = lVar4 + 1;
        uVar8 = uVar8 - 1 & uVar8;
        puVar1 = (undefined1 *)(lStack_a8 + lVar4 * 0x20);
        *puVar1 = 3;
        *(ulong *)(puVar1 + 8) = uVar6;
        *(undefined1 **)(puVar1 + 0x10) = __dest;
        *(ulong *)(puVar1 + 0x18) = uVar6;
      } while (lVar5 != 0);
    }
    *param_1 = 4;
    uStack_81 = (undefined1)lStack_a8;
    uStack_89 = (undefined1)local_b0;
    uStack_88 = (undefined7)((ulong)local_b0 >> 8);
    *(ulong *)(param_1 + 9) = CONCAT17(uStack_81,uStack_88);
    *(ulong *)(param_1 + 1) = CONCAT17(uStack_89,CONCAT61(uStack_8f,local_90));
    *(long *)(param_1 + 0x18) = local_a0;
    *(long *)(param_1 + 0x10) = lStack_a8;
  }
  return;
}


// ===== 0075b02c  FUN_0075b02c =====

void FUN_0075b02c(undefined1 *param_1,long param_2,long param_3)

{
  undefined1 *puVar1;
  long lVar2;
  ulong __n;
  undefined1 *__dest;
  void *__src;
  ulong *puVar3;
  long local_90;
  long lStack_88;
  long local_80;
  undefined1 local_70;
  undefined6 uStack_6f;
  undefined1 uStack_69;
  undefined7 uStack_68;
  undefined1 uStack_61;
  undefined7 local_60;
  undefined1 uStack_59;
  undefined7 local_58;
  undefined1 uStack_51;
  
  <serde_json::value::ser::Serializer_as_serde::ser::Serializer>::serialize_seq(&local_70,1);
  if (CONCAT17(uStack_69,CONCAT61(uStack_6f,local_70)) == -1) {
    *param_1 = 0xff;
    *(ulong *)(param_1 + 8) = CONCAT17(uStack_61,uStack_68);
  }
  else {
    lStack_88 = CONCAT17(uStack_61,uStack_68);
    local_90 = CONCAT17(uStack_69,CONCAT61(uStack_6f,local_70));
    local_80 = CONCAT17(uStack_59,local_60);
    if (param_3 != 0) {
      puVar3 = (ulong *)(param_2 + 0x10);
      param_3 = param_3 * 0x18;
      do {
        __n = (ulong)(byte)puVar3[-2];
        lVar2 = __n - 0x17;
        if ((byte)puVar3[-2] < 0x18) {
          lVar2 = 0;
        }
        if (lVar2 == 0) {
          __src = (void *)((long)puVar3 + -0xf);
joined_r0x0075b0e8:
          if (__n != 0) goto LAB_0075b0ec;
LAB_0075b120:
          __dest = &DAT_00000001;
        }
        else {
          if (lVar2 != 1) {
            __n = *puVar3;
            __src = (void *)(puVar3[-1] + 0x10);
            goto joined_r0x0075b0e8;
          }
          __src = (void *)puVar3[-1];
          __n = *puVar3;
          if (__n == 0) goto LAB_0075b120;
LAB_0075b0ec:
          __rustc::__rust_no_alloc_shim_is_unstable_v2();
          __dest = (undefined1 *)FUN_004b25a4(__n,1);
          if (__dest == (undefined1 *)0x0) {
                    /* try { // try from 0075b1a4 to 0075b1af has its CatchHandler @ 0075b1c8 */
                    /* WARNING: Subroutine does not return */
            alloc::raw_vec::handle_error(1,__n);
          }
          memcpy(__dest,__src,__n);
        }
        lVar2 = local_80;
        local_70 = 3;
        uStack_68 = (undefined7)__n;
        uStack_61 = (undefined1)(__n >> 0x38);
        local_60 = SUB87(__dest,0);
        uStack_59 = (undefined1)((ulong)__dest >> 0x38);
        local_58 = uStack_68;
        uStack_51 = uStack_61;
        if (local_80 == local_90) {
                    /* try { // try from 0075b140 to 0075b147 has its CatchHandler @ 0075b1b4 */
          <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<serde_json::value::Value>>::grow_one
                    (&local_90);
        }
        local_80 = lVar2 + 1;
        param_3 = param_3 + -0x18;
        puVar3 = puVar3 + 3;
        puVar1 = (undefined1 *)(lStack_88 + lVar2 * 0x20);
        *puVar1 = 3;
        *(ulong *)(puVar1 + 8) = __n;
        *(undefined1 **)(puVar1 + 0x10) = __dest;
        *(ulong *)(puVar1 + 0x18) = __n;
      } while (param_3 != 0);
    }
    *param_1 = 4;
    uStack_61 = (undefined1)lStack_88;
    uStack_69 = (undefined1)local_90;
    uStack_68 = (undefined7)((ulong)local_90 >> 8);
    *(ulong *)(param_1 + 9) = CONCAT17(uStack_61,uStack_68);
    *(ulong *)(param_1 + 1) = CONCAT17(uStack_69,CONCAT61(uStack_6f,local_70));
    *(long *)(param_1 + 0x18) = local_80;
    *(long *)(param_1 + 0x10) = lStack_88;
  }
  return;
}


// ===== 0075b1e0  <libdiscore_common::stores::guild_role::libdiscore_common::stores::guild_role::GuildRole>::from_server =====

/* WARNING: Unknown calling convention: __rustcall */
/* <libdiscore_common::stores::guild_role::libdiscore_common::stores::guild_role::GuildRole>::from_server
    */

void __rustcall
<libdiscore_common::stores::guild_role::libdiscore_common::stores::guild_role::GuildRole>::
from_server(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
           uint param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  char cVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  char cVar10;
  byte bVar11;
  bool bVar12;
  code *pcVar13;
  long *plVar14;
  undefined8 uVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  undefined8 uVar19;
  undefined8 in_x16;
  uint in_w17;
  long *plVar20;
  undefined8 unaff_x21;
  ulong unaff_x23;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined4 local_38;
  undefined3 uStack_34;
  
  cVar6 = *(char *)(param_3 + 7);
  uVar15 = param_3[10];
  if (cVar6 == '\x19') {
    plVar16 = (long *)param_3[8];
    do {
      lVar17 = *plVar16;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar12) {
        *plVar16 = lVar17 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar17 < 0) goto LAB_0075b3d0;
    plVar18 = (long *)param_3[0xb];
    uVar19 = param_3[9];
    if (plVar18 != (long *)0x0) goto LAB_0075b244;
LAB_0075b2f8:
    iVar5 = *(int *)(param_3 + 0x13);
    uVar3 = local_38;
  }
  else {
    local_38._0_3_ = (undefined3)*(undefined4 *)((long)param_3 + 0x39);
    local_38._3_1_ = (undefined1)*(undefined4 *)((long)param_3 + 0x3c);
    uStack_34 = (undefined3)((uint)*(undefined4 *)((long)param_3 + 0x3c) >> 8);
    plVar18 = (long *)param_3[0xb];
    plVar16 = (long *)param_3[8];
    uVar19 = param_3[9];
    if (plVar18 == (long *)0x0) goto LAB_0075b2f8;
LAB_0075b244:
    do {
      lVar17 = *plVar18;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar12) {
        *plVar18 = lVar17 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar17 < 0) goto LAB_0075b3d0;
    in_x16 = param_3[0xc];
    iVar5 = *(int *)(param_3 + 0x13);
    uVar3 = local_38;
  }
  if (iVar5 != 2) {
    param_6 = *(uint *)((long)param_3 + 0xa4);
    uVar1 = *(uint *)(param_3 + 0x15);
    param_5 = *(uint *)((long)param_3 + 0x9c);
    uVar2 = uVar1;
    if (uVar1 >> 0x18 != 0) {
      uVar2 = uVar1 >> 8;
    }
    in_w17 = 0x99aab5;
    if (uVar1 != 0) {
      in_w17 = uVar2;
    }
    param_4 = *(undefined4 *)(param_3 + 0x14);
    if (param_5 >> 0x18 != 0) {
      param_5 = param_5 >> 8;
    }
    if (param_6 >> 0x18 != 0) {
      param_6 = param_6 >> 8;
    }
  }
  uVar23 = param_3[0xe];
  uVar22 = param_3[0xd];
  uVar7 = *(undefined1 *)((long)param_3 + 0xb4);
  uVar2 = *(uint *)(param_3 + 0x16);
  plVar14 = (long *)param_3[0xf];
  uVar21 = *(undefined8 *)((long)param_3 + 0xac);
  uVar8 = *(undefined1 *)((long)param_3 + 0xb5);
  uVar9 = *(undefined1 *)((long)param_3 + 0xb6);
  if (plVar14 == (long *)0x0) {
    plVar20 = (long *)param_3[0x11];
  }
  else {
    do {
      lVar17 = *plVar14;
      bVar11 = 1;
      bVar12 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar12) {
        *plVar14 = lVar17 + 1;
        bVar11 = ExclusiveMonitorsStatus();
      }
      unaff_x23 = (ulong)bVar11;
    } while (bVar11 != 0);
    if (lVar17 < 0) goto LAB_0075b3d0;
    unaff_x21 = param_3[0x10];
    plVar20 = (long *)param_3[0x11];
  }
  if (plVar20 != (long *)0x0) {
    do {
      lVar17 = *plVar20;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar12) {
        *plVar20 = lVar17 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar17 < 0) {
LAB_0075b3d0:
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x75b3d4);
      (*pcVar13)();
    }
    unaff_x23 = param_3[0x12];
  }
  param_1[0xb] = param_2;
  param_1[0xc] = uVar15;
  *(char *)(param_1 + 8) = cVar6;
  local_38._3_1_ = (undefined1)((uint)uVar3 >> 0x18);
  param_1[0x10] = uVar23;
  param_1[0xf] = uVar22;
  uVar22 = param_3[0x14];
  uVar15 = param_3[0x13];
  *(undefined4 *)((long)param_1 + 0x41) = uVar3;
  *(uint *)((long)param_1 + 0x44) = CONCAT31(uStack_34,local_38._3_1_);
  param_1[0x1a] = uVar21;
  param_1[0x16] = uVar22;
  param_1[0x15] = uVar15;
  uVar23 = param_3[1];
  uVar22 = *param_3;
  uVar21 = param_3[3];
  uVar15 = param_3[2];
  param_1[9] = plVar16;
  param_1[10] = uVar19;
  uVar1 = uVar2;
  if (uVar2 >> 0x18 != 0) {
    uVar1 = uVar2 >> 8;
  }
  *(undefined1 *)(param_1 + 0x1b) = uVar7;
  uVar3 = *(undefined4 *)(param_3 + 0x15);
  *(uint *)(param_1 + 2) = (uint)(uVar2 != 0);
  *(uint *)((long)param_1 + 0x14) = uVar1;
  uVar4 = *(undefined4 *)(param_3 + 6);
  param_1[0x11] = plVar14;
  param_1[0x12] = unaff_x21;
  param_1[4] = uVar21;
  param_1[3] = uVar15;
  uVar19 = param_3[5];
  uVar15 = param_3[4];
  param_1[0x13] = plVar20;
  param_1[0x14] = unaff_x23;
  param_1[0xd] = plVar18;
  param_1[0xe] = in_x16;
  *(undefined4 *)(param_1 + 0x17) = uVar3;
  *(int *)((long)param_1 + 0xbc) = iVar5;
  *(uint *)(param_1 + 0x18) = param_5;
  *(undefined4 *)((long)param_1 + 0xc4) = param_4;
  *(uint *)(param_1 + 0x19) = param_6;
  *(uint *)((long)param_1 + 0xcc) = in_w17;
  *(undefined1 *)((long)param_1 + 0xd9) = uVar8;
  *(undefined1 *)((long)param_1 + 0xda) = uVar9;
  param_1[6] = uVar19;
  param_1[5] = uVar15;
  *(undefined4 *)(param_1 + 7) = uVar4;
  param_1[1] = uVar23;
  *param_1 = uVar22;
  return;
}


// ===== 0075b3d4  FUN_0075b3d4 =====

void FUN_0075b3d4(undefined8 *param_1,long param_2,long *param_3,long param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long local_150;
  undefined8 *local_148;
  undefined8 *puStack_140;
  undefined1 *local_138;
  long lStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
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
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  local_150 = param_2;
  if (*param_3 == -1) {
    local_148 = (undefined8 *)param_3[2];
    puStack_140 = local_148 + param_3[3] * 0x17;
    local_138 = (undefined1 *)&local_150;
    FUN_0070b704(param_4,param_2,&local_148);
  }
  else {
    FUN_0070f2ec(&local_148,param_4,&local_150);
    lVar4 = lStack_130;
    puVar3 = puStack_140;
    if (puStack_140 != (undefined8 *)0x0) {
      if (lStack_130 != 0) {
        puVar5 = local_148 + 1;
        uVar9 = NEON_cmge(*local_148,0,1);
        uVar9 = uVar9 & 0x8080808080808080;
        puVar2 = local_148;
        lVar7 = lStack_130;
        do {
          for (; uVar9 == 0; uVar9 = uVar9 & 0x8080808080808080) {
            uVar9 = NEON_cmge(*puVar5,0,1);
            puVar2 = puVar2 + -0xe8;
            puVar5 = puVar5 + 1;
          }
          uVar1 = (uVar9 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar9 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
          lVar7 = lVar7 + -1;
          uVar9 = uVar9 - 1 & uVar9;
          FUN_00702244(puVar2 + (long)-(int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) *
                                0x1d + -0x1c);
        } while (lVar7 != 0);
      }
      if ((long)puVar3 * 0xe9 != -0xf1) {
        free(local_148 + (long)puVar3 * -0x1d + -0x1d);
      }
    }
    if (lVar4 == 0) {
      if (param_3[2] == 0) {
        puStack_140 = (undefined8 *)PTR_fmt_00b00e20;
        local_148 = &local_150;
        alloc::fmt::format::format_inner(param_1,&DAT_002b88f2,&local_148);
        return;
      }
      local_148 = (undefined8 *)param_3[1];
      puStack_140 = local_148 + param_3[2] * 0x17;
      local_138 = (undefined1 *)&local_150;
      FUN_0070b7cc(param_4,local_150,&local_148);
    }
    else {
      if (param_3[5] != 0) {
        lVar4 = param_3[5] << 3;
        puVar3 = (undefined8 *)param_3[4];
        do {
          local_138 = (undefined1 *)*puVar3;
          lVar7 = *(long *)(param_4 + 0x10);
          puStack_140 = (undefined8 *)local_150;
          lVar8 = *(long *)(lVar7 + 0x20);
          local_148 = (undefined8 *)0x2;
          if (lVar8 == *(long *)(lVar7 + 0x10)) {
                    /* try { // try from 0075b570 to 0075b573 has its CatchHandler @ 0075b6e4 */
            <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<libdiscore_common[1cb84820f9455fa0]::stores::store_database::opcodes::PendingKKVChange<libdiscore_common[1cb84820f9455fa0]::stores::guild_role::GuildRole>>>
            ::grow_one();
          }
          puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x18) + lVar8 * 0xe0);
          lVar4 = lVar4 + -8;
          puVar2[1] = puStack_140;
          *puVar2 = local_148;
          puVar2[3] = lStack_130;
          puVar2[2] = local_138;
          puVar2[9] = uStack_100;
          puVar2[8] = local_108;
          puVar2[0xb] = uStack_f0;
          puVar2[10] = local_f8;
          puVar2[5] = uStack_120;
          puVar2[4] = local_128;
          puVar2[7] = uStack_110;
          puVar2[6] = local_118;
          puVar2[0xd] = uStack_e0;
          puVar2[0xc] = local_e8;
          puVar2[0xf] = uStack_d0;
          puVar2[0xe] = local_d8;
          puVar2[0x11] = uStack_c0;
          puVar2[0x10] = local_c8;
          puVar2[0x13] = uStack_b0;
          puVar2[0x12] = uStack_b8;
          puVar2[0x19] = uStack_80;
          puVar2[0x18] = local_88;
          puVar2[0x1b] = uStack_70;
          puVar2[0x1a] = uStack_78;
          puVar2[0x15] = uStack_a0;
          puVar2[0x14] = local_a8;
          puVar2[0x17] = uStack_90;
          puVar2[0x16] = uStack_98;
          *(long *)(lVar7 + 0x20) = lVar8 + 1;
          puVar3 = puVar3 + 1;
        } while (lVar4 != 0);
      }
      if (param_3[2] != 0) {
        lVar4 = param_3[1];
        lVar7 = param_3[2] * 0xb8;
        do {
          <libdiscore_common::stores::guild_role::libdiscore_common::stores::guild_role::GuildRole>
          ::from_server(&local_148,local_150,lVar4);
          lVar8 = *(long *)(param_4 + 0x10);
          lVar6 = *(long *)(lVar8 + 0x20);
          if (lVar6 == *(long *)(lVar8 + 0x10)) {
                    /* try { // try from 0075b620 to 0075b623 has its CatchHandler @ 0075b6d0 */
            <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<libdiscore_common[1cb84820f9455fa0]::stores::store_database::opcodes::PendingKKVChange<libdiscore_common[1cb84820f9455fa0]::stores::guild_role::GuildRole>>>
            ::grow_one();
          }
          puVar3 = (undefined8 *)(*(long *)(lVar8 + 0x18) + lVar6 * 0xe0);
          lVar7 = lVar7 + -0xb8;
          lVar4 = lVar4 + 0xb8;
          puVar3[1] = puStack_140;
          *puVar3 = local_148;
          puVar3[3] = lStack_130;
          puVar3[2] = local_138;
          puVar3[9] = uStack_100;
          puVar3[8] = local_108;
          puVar3[0xb] = uStack_f0;
          puVar3[10] = local_f8;
          puVar3[5] = uStack_120;
          puVar3[4] = local_128;
          puVar3[7] = uStack_110;
          puVar3[6] = local_118;
          puVar3[0xd] = uStack_e0;
          puVar3[0xc] = local_e8;
          puVar3[0xf] = uStack_d0;
          puVar3[0xe] = local_d8;
          puVar3[0x11] = uStack_c0;
          puVar3[0x10] = local_c8;
          puVar3[0x13] = uStack_b0;
          puVar3[0x12] = uStack_b8;
          puVar3[0x19] = uStack_80;
          puVar3[0x18] = local_88;
          puVar3[0x1b] = uStack_70;
          puVar3[0x1a] = uStack_78;
          puVar3[0x15] = uStack_a0;
          puVar3[0x14] = local_a8;
          puVar3[0x17] = uStack_90;
          puVar3[0x16] = uStack_98;
          *(long *)(lVar8 + 0x20) = lVar6 + 1;
        } while (lVar7 != 0);
      }
    }
  }
  *param_1 = 0xffffffffffffffff;
  return;
}


// ===== 0075b6fc  <<libdiscore_common[1cb84820f9455fa0]::stores::guild_role::GuildRole_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__FieldVisitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

/* <<libdiscore_common[1cb84820f9455fa0]::stores::guild_role::GuildRole as
   serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__FieldVisitor as
   serde[52fff5c06b43f145]::de::Visitor>::expecting */

void <<libdiscore_common[1cb84820f9455fa0]::stores::guild_role::GuildRole_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__FieldVisitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002a0800,0x10);
  return;
}


// ===== 0075b710  <reqwest::async_impl::body::Body_as_core::convert::From<libdiscore_common::core::http::native::StreamingBody>>::from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::async_impl::body::Body as
   core::convert::From<libdiscore_common::core::http::native::StreamingBody>>::from */

void __rustcall
<reqwest::async_impl::body::Body_as_core::convert::From<libdiscore_common::core::http::native::StreamingBody>>
::from(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)FUN_004b25a4(0x68,8);
  if (puVar1 != (undefined8 *)0x0) {
    uVar4 = param_2[9];
    uVar3 = param_2[8];
    uVar6 = param_2[0xb];
    uVar5 = param_2[10];
    uVar2 = param_2[0xc];
    *param_1 = 0;
    param_1[1] = puVar1;
    puVar1[0xc] = uVar2;
    puVar1[9] = uVar4;
    puVar1[8] = uVar3;
    puVar1[0xb] = uVar6;
    puVar1[10] = uVar5;
    uVar2 = *param_2;
    uVar4 = param_2[3];
    uVar3 = param_2[2];
    puVar1[1] = param_2[1];
    *puVar1 = uVar2;
    puVar1[3] = uVar4;
    puVar1[2] = uVar3;
    uVar2 = param_2[4];
    uVar4 = param_2[7];
    uVar3 = param_2[6];
    puVar1[5] = param_2[5];
    puVar1[4] = uVar2;
    puVar1[7] = uVar4;
    puVar1[6] = uVar3;
    param_1[2] = &PTR_FUN_00ad7f40;
    return;
  }
                    /* try { // try from 0075b79c to 0075b7a7 has its CatchHandler @ 0075b7ac */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x68);
}


// ===== 0075b7c4  <<libdiscore_common::stores::guild_role::GuildRoleColorStrings_as_serde::de::Deserialize>::deserialize::__Visitor_as{backref_27}::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<libdiscore_common::stores::guild_role::GuildRoleColorStrings as
   serde::de::Deserialize>::deserialize::__Visitor as {backref 27}::Visitor>::expecting */

void __rustcall
<<libdiscore_common::stores::guild_role::GuildRoleColorStrings_as_serde::de::Deserialize>::deserialize::__Visitor_as{backref_27}::Visitor>
::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"struct GuildRoleColorStrings",0x1c);
  return;
}


// ===== 0075b7d8  <<libdiscore_common[1cb84820f9455fa0]::stores::guild_role::GuildRole_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

/* <<libdiscore_common[1cb84820f9455fa0]::stores::guild_role::GuildRole as
   serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor as
   serde[52fff5c06b43f145]::de::Visitor>::expecting */

void <<libdiscore_common[1cb84820f9455fa0]::stores::guild_role::GuildRole_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_0029fed0,0x10);
  return;
}


// ===== 0075b7ec  <<libdiscore_common[1cb84820f9455fa0]::actions::notes::UserNoteUpdate_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

/* <<libdiscore_common[1cb84820f9455fa0]::actions::notes::UserNoteUpdate as
   serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor as
   serde[52fff5c06b43f145]::de::Visitor>::expecting */

void <<libdiscore_common[1cb84820f9455fa0]::actions::notes::UserNoteUpdate_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"struct UserNoteUpdate",0x15);
  return;
}


// ===== 0075b800  <<libdiscore_common[1cb84820f9455fa0]::actions::notes::UserNoteLoadStart_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

/* <<libdiscore_common[1cb84820f9455fa0]::actions::notes::UserNoteLoadStart as
   serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor as
   serde[52fff5c06b43f145]::de::Visitor>::expecting */

void <<libdiscore_common[1cb84820f9455fa0]::actions::notes::UserNoteLoadStart_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"struct UserNoteLoadStart",0x18);
  return;
}


// ===== 0075b814  <libdiscore_common::stores::guild_role::GuildRoleStore_as_libdiscore_common::stores::dispatcher::Store<libdiscore_common::actions::Action>>::handle_reset =====

/* WARNING: Unknown calling convention: __rustcall */
/* <libdiscore_common::stores::guild_role::GuildRoleStore as
   libdiscore_common::stores::dispatcher::Store<libdiscore_common::actions::Action>>::handle_reset
    */

void __rustcall
<libdiscore_common::stores::guild_role::GuildRoleStore_as_libdiscore_common::stores::dispatcher::Store<libdiscore_common::actions::Action>>
::handle_reset(undefined8 *param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int *piVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined1 auStack_140 [8];
  uint *local_138;
  int *local_130;
  byte local_128;
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
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_007119a0(auStack_140);
  piVar5 = local_130;
  local_120 = 5;
  lVar8 = *(long *)(local_130 + 8);
  if (lVar8 == *(long *)(local_130 + 4)) {
                    /* try { // try from 0075b85c to 0075b85f has its CatchHandler @ 0075b978 */
    <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<libdiscore_common[1cb84820f9455fa0]::stores::store_database::opcodes::PendingKKVChange<libdiscore_common[1cb84820f9455fa0]::stores::guild_role::GuildRole>>>
    ::grow_one();
  }
  puVar7 = (undefined8 *)(*(long *)(piVar5 + 6) + lVar8 * 0xe0);
  puVar7[1] = uStack_118;
  *puVar7 = local_120;
  puVar7[3] = uStack_108;
  puVar7[2] = uStack_110;
  puVar7[9] = uStack_d8;
  puVar7[8] = local_e0;
  puVar7[0xb] = uStack_c8;
  puVar7[10] = uStack_d0;
  puVar7[5] = uStack_f8;
  puVar7[4] = local_100;
  puVar7[7] = uStack_e8;
  puVar7[6] = uStack_f0;
  puVar7[0x11] = uStack_98;
  puVar7[0x10] = local_a0;
  puVar7[0x13] = uStack_88;
  puVar7[0x12] = uStack_90;
  puVar7[0xd] = uStack_b8;
  puVar7[0xc] = local_c0;
  puVar7[0xf] = uStack_a8;
  puVar7[0xe] = uStack_b0;
  puVar7[0x19] = uStack_58;
  puVar7[0x18] = local_60;
  puVar7[0x1b] = uStack_48;
  puVar7[0x1a] = uStack_50;
  puVar7[0x15] = uStack_78;
  puVar7[0x14] = local_80;
  puVar7[0x17] = uStack_68;
  puVar7[0x16] = uStack_70;
  *(long *)(piVar5 + 8) = lVar8 + 1;
  do {
    uVar1 = *local_138;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(local_138,0x10);
    if (bVar4) {
      *local_138 = uVar1 - 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((uVar1 - 1 & 0xbfffffff) == 0x80000000) {
                    /* try { // try from 0075b93c to 0075b93f has its CatchHandler @ 0075b964 */
    <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::wake_writer_or_readers()
    ;
  }
  if ((((local_128 & 1) == 0) &&
      ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) != 0)) &&
     (uVar6 = std::panicking::panic_count::is_zero_slow_path(), (uVar6 & 1) == 0)) {
    *(undefined1 *)(local_130 + 2) = 1;
  }
  do {
    iVar2 = *local_130;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(local_130,0x10);
    if (bVar4) {
      *local_130 = iVar2 + -0x3fffffff;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar2 + 0xc0000001U >> 0x1e != 0) {
    <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::wake_writer_or_readers()
    ;
  }
  *param_1 = 0xffffffffffffffff;
  return;
}


// ===== 0075b99c  <libdiscore_common::stores::guild_role::GuildRoleStore_as_libdiscore_common::stores::dispatcher::Store<libdiscore_common::actions::Action>>::handle_action =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <libdiscore_common::stores::guild_role::GuildRoleStore as
   libdiscore_common::stores::dispatcher::Store<libdiscore_common::actions::Action>>::handle_action
    */

void __rustcall
<libdiscore_common::stores::guild_role::GuildRoleStore_as_libdiscore_common::stores::dispatcher::Store<libdiscore_common::actions::Action>>
::handle_action(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  int *piVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 **ppuVar14;
  long lVar15;
  int *piVar16;
  undefined1 *puVar17;
  long lVar18;
  long lVar19;
  ulong *puVar20;
  ulong *puVar21;
  ulong uVar22;
  undefined8 *local_1d8;
  undefined1 auStack_1c0 [8];
  uint *local_1b8;
  int *local_1b0;
  byte local_1a8;
  undefined8 **local_1a0;
  undefined8 **ppuStack_198;
  undefined8 *local_190;
  undefined8 **ppuStack_188;
  undefined8 *local_180;
  undefined8 **ppuStack_178;
  undefined8 **local_170;
  undefined1 *local_168;
  undefined8 **local_160;
  undefined8 ***pppuStack_158;
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
  undefined8 *local_a0;
  undefined8 **ppuStack_98;
  undefined8 **local_90;
  undefined1 *local_88;
  undefined8 **local_80;
  undefined8 ***pppuStack_78;
  
  FUN_007119a0(auStack_1c0);
  piVar16 = local_1b0;
  if (param_3 < 5) {
    if (param_3 < 2) {
      if (param_3 == 0) {
        if (param_4[2] != 0) {
          puVar20 = (ulong *)param_4[1];
          puVar21 = puVar20 + param_4[2] * 0x4c;
          do {
            lVar18 = *puVar20 - 3;
            if (*puVar20 < 3) {
              lVar18 = 1;
            }
            if (lVar18 != 2) {
              if (lVar18 == 1) {
                FUN_0070f2ec(&local_180,auStack_1c0,puVar20 + 0x4b);
                ppuVar14 = ppuStack_178;
                if (local_168 == (undefined1 *)0x0) {
                  if ((ppuStack_178 != (undefined8 **)0x0) && ((long)ppuStack_178 * 0xe9 != -0xf1))
                  {
                    free(local_180 + (long)ppuStack_178 * -0x1d + -0x1d);
                  }
                }
                else {
                  if (ppuStack_178 != (undefined8 **)0x0) {
                    puVar12 = local_180 + 1;
                    uVar22 = NEON_cmge(*local_180,0,1);
                    uVar22 = uVar22 & 0x8080808080808080;
                    puVar11 = local_180;
                    puVar17 = local_168;
                    do {
                      for (; uVar22 == 0; uVar22 = uVar22 & 0x8080808080808080) {
                        uVar22 = NEON_cmge(*puVar12,0,1);
                        puVar11 = puVar11 + -0xe8;
                        puVar12 = puVar12 + 1;
                      }
                      uVar3 = (uVar22 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                              (uVar22 >> 7 & 0xff00ff00ff00ff) << 8;
                      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 |
                              (uVar3 & 0xffff0000ffff) << 0x10;
                    /* try { // try from 0075bc94 to 0075bc97 has its CatchHandler @ 0075c5d8 */
                      FUN_00702244(puVar11 + (long)-(int)((ulong)LZCOUNT(uVar3 >> 0x20 |
                                                                         uVar3 << 0x20) >> 3) * 0x1d
                                             + -0x1c);
                      puVar17 = puVar17 + -1;
                      uVar22 = uVar22 - 1 & uVar22;
                    } while (puVar17 != (undefined1 *)0x0);
                    if ((long)ppuVar14 * 0xe9 != -0xf1) {
                      free(local_180 + (long)ppuVar14 * -0x1d + -0x1d);
                    }
                  }
                  if (puVar20[0x4a] != 0) {
                    puVar11 = (undefined8 *)puVar20[0x49];
                    lVar18 = puVar20[0x4a] << 3;
                    do {
                      piVar16 = local_1b0;
                      local_170 = (undefined8 **)*puVar11;
                      ppuStack_178 = (undefined8 **)puVar20[0x4b];
                      local_180 = (undefined8 *)0x2;
                      lVar19 = *(long *)(local_1b0 + 8);
                      if (lVar19 == *(long *)(local_1b0 + 4)) {
                    /* try { // try from 0075bd60 to 0075bd63 has its CatchHandler @ 0075c5c4 */
                        <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<libdiscore_common[1cb84820f9455fa0]::stores::store_database::opcodes::PendingKKVChange<libdiscore_common[1cb84820f9455fa0]::stores::guild_role::GuildRole>>>
                        ::grow_one();
                      }
                      puVar12 = (undefined8 *)(*(long *)(piVar16 + 6) + lVar19 * 0xe0);
                      lVar18 = lVar18 + -8;
                      puVar11 = puVar11 + 1;
                      puVar12[1] = ppuStack_178;
                      *puVar12 = local_180;
                      puVar12[3] = local_168;
                      puVar12[2] = local_170;
                      puVar12[9] = uStack_138;
                      puVar12[8] = local_140;
                      puVar12[0xb] = uStack_128;
                      puVar12[10] = uStack_130;
                      puVar12[5] = pppuStack_158;
                      puVar12[4] = local_160;
                      puVar12[7] = uStack_148;
                      puVar12[6] = uStack_150;
                      puVar12[0x11] = uStack_f8;
                      puVar12[0x10] = local_100;
                      puVar12[0x13] = uStack_e8;
                      puVar12[0x12] = uStack_f0;
                      puVar12[0xd] = uStack_118;
                      puVar12[0xc] = local_120;
                      puVar12[0xf] = uStack_108;
                      puVar12[0xe] = uStack_110;
                      puVar12[0x19] = uStack_b8;
                      puVar12[0x18] = local_c0;
                      puVar12[0x1b] = uStack_a8;
                      puVar12[0x1a] = uStack_b0;
                      puVar12[0x15] = uStack_d8;
                      puVar12[0x14] = local_e0;
                      puVar12[0x17] = uStack_c8;
                      puVar12[0x16] = uStack_d0;
                      *(long *)(piVar16 + 8) = lVar19 + 1;
                    } while (lVar18 != 0);
                  }
                  if (puVar20[0x47] != 0) {
                    uVar22 = puVar20[0x46];
                    lVar18 = puVar20[0x47] * 0xb8;
                    do {
                      <libdiscore_common::stores::guild_role::libdiscore_common::stores::guild_role::GuildRole>
                      ::from_server(&local_180,puVar20[0x4b],uVar22);
                      piVar16 = local_1b0;
                      lVar19 = *(long *)(local_1b0 + 8);
                      if (lVar19 == *(long *)(local_1b0 + 4)) {
                    /* try { // try from 0075bdfc to 0075bdff has its CatchHandler @ 0075c5b0 */
                        <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<libdiscore_common[1cb84820f9455fa0]::stores::store_database::opcodes::PendingKKVChange<libdiscore_common[1cb84820f9455fa0]::stores::guild_role::GuildRole>>>
                        ::grow_one();
                      }
                      puVar11 = (undefined8 *)(*(long *)(piVar16 + 6) + lVar19 * 0xe0);
                      lVar18 = lVar18 + -0xb8;
                      uVar22 = uVar22 + 0xb8;
                      puVar11[1] = ppuStack_178;
                      *puVar11 = local_180;
                      puVar11[3] = local_168;
                      puVar11[2] = local_170;
                      puVar11[9] = uStack_138;
                      puVar11[8] = local_140;
                      puVar11[0xb] = uStack_128;
                      puVar11[10] = uStack_130;
                      puVar11[5] = pppuStack_158;
                      puVar11[4] = local_160;
                      puVar11[7] = uStack_148;
                      puVar11[6] = uStack_150;
                      puVar11[0x11] = uStack_f8;
                      puVar11[0x10] = local_100;
                      puVar11[0x13] = uStack_e8;
                      puVar11[0x12] = uStack_f0;
                      puVar11[0xd] = uStack_118;
                      puVar11[0xc] = local_120;
                      puVar11[0xf] = uStack_108;
                      puVar11[0xe] = uStack_110;
                      puVar11[0x19] = uStack_b8;
                      puVar11[0x18] = local_c0;
                      puVar11[0x1b] = uStack_a8;
                      puVar11[0x1a] = uStack_b0;
                      puVar11[0x15] = uStack_d8;
                      puVar11[0x14] = local_e0;
                      puVar11[0x17] = uStack_c8;
                      puVar11[0x16] = uStack_d0;
                      *(long *)(piVar16 + 8) = lVar19 + 1;
                    } while (lVar18 != 0);
                  }
                }
              }
              else {
                local_180 = (undefined8 *)puVar20[0x47];
                ppuStack_178 = (undefined8 **)(local_180 + puVar20[0x48] * 0x17);
                local_170 = (undefined8 **)(puVar20 + 1);
                    /* try { // try from 0075bbf0 to 0075bc3b has its CatchHandler @ 0075c594 */
                FUN_0070b894(auStack_1c0,puVar20[0x49],&local_180);
              }
            }
            puVar20 = puVar20 + 0x4c;
          } while (puVar20 != puVar21);
        }
      }
      else {
        FUN_0070fb54(&local_180,auStack_1c0);
        ppuVar14 = ppuStack_178;
        puVar11 = local_180;
        uVar22 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00bf8;
        if (uVar22 == 0) {
                    /* try { // try from 0075c438 to 0075c477 has its CatchHandler @ 0075c520 */
          uVar22 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
                   lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00bf8);
          plVar9 = (long *)pthread_getspecific((pthread_key_t)uVar22);
        }
        else {
          plVar9 = (long *)pthread_getspecific((pthread_key_t)uVar22);
        }
        if (plVar9 < (long *)0x2) {
          plVar9 = (long *)FUN_0072c9d4(uVar22 & 0xffffffff,plVar9,0);
        }
        local_168 = _UNK_00ad7f38;
        ppuVar7 = _DAT_00ad7f30;
        ppuVar6 = _UNK_00ad7f28;
        local_180 = (undefined8 *)PTR_DAT_00ad7f20;
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::thread::local::panic_access_error(&PTR_s__nix_store_8006w282fgsx3273c878b_00ad6130);
        }
        pppuStack_158 = (undefined8 ***)plVar9[1];
        local_160 = (undefined8 **)*plVar9;
        *plVar9 = *plVar9 + 1;
        ppuStack_188 = ppuStack_178 + (long)local_170;
        ppuStack_178 = ppuVar6;
        local_170 = ppuVar7;
        local_1a0 = ppuVar14;
        ppuStack_198 = ppuVar14;
        local_190 = puVar11;
                    /* try { // try from 0075c0a0 to 0075c0ab has its CatchHandler @ 0075c4fc */
        FUN_0075d854(&local_180,&local_1a0);
        pppuStack_78 = pppuStack_158;
        local_80 = local_160;
        ppuStack_98 = ppuStack_178;
        local_a0 = local_180;
        local_88 = local_168;
        local_90 = local_170;
        if (param_4[2] != 0) {
          lVar18 = param_4[2] * 0x2d8;
          ppuVar14 = (undefined8 **)(param_4[1] + 0x2b8);
          do {
                    /* try { // try from 0075c0d8 to 0075c107 has its CatchHandler @ 0075c5a0 */
            uVar10 = FUN_0076b084(&local_80,ppuVar14);
            FUN_006feac0(&local_a0,uVar10,ppuVar14);
            FUN_0075b3d4(&local_180,*ppuVar14,ppuVar14 + -0x12,auStack_1c0);
            if (local_180 != (undefined8 *)0xffffffffffffffff) {
              param_1[1] = ppuStack_178;
              *param_1 = local_180;
              param_1[2] = local_170;
              if ((ppuStack_98 != (undefined8 **)0x0) && ((long)ppuStack_98 * 9 != -0x11)) {
                free(local_a0 + (-1 - (long)ppuStack_98));
              }
              goto LAB_0075c2f4;
            }
            lVar18 = lVar18 + -0x2d8;
            ppuVar14 = ppuVar14 + 0x5b;
          } while (lVar18 != 0);
        }
        if (param_4[5] != 0) {
          lVar18 = param_4[4];
          lVar19 = param_4[5] << 3;
          ppuVar14 = &local_a0;
          do {
                    /* try { // try from 0075c134 to 0075c14f has its CatchHandler @ 0075c59c */
            uVar10 = FUN_0076b084(&local_80,lVar18);
            FUN_006feac0(&local_a0,uVar10,lVar18);
            lVar19 = lVar19 + -8;
            lVar18 = lVar18 + 8;
          } while (lVar19 != 0);
        }
        ppuVar6 = ppuStack_98;
        if (ppuStack_98 != (undefined8 **)0x0) {
          ppuVar14 = (undefined8 **)((long)ppuStack_98 * 9 + 0x11);
          local_1d8 = local_a0 + (-1 - (long)ppuStack_98);
        }
        if (local_88 != (undefined1 *)0x0) {
          puVar11 = local_a0 + 1;
          uVar22 = NEON_cmge(*local_a0,0,1);
          uVar22 = uVar22 & 0x8080808080808080;
          puVar12 = local_a0;
          puVar17 = local_88;
          do {
            for (; piVar16 = local_1b0, uVar22 == 0; uVar22 = uVar22 & 0x8080808080808080) {
              uVar22 = NEON_cmge(*puVar11,0,1);
              puVar12 = puVar12 + -8;
              puVar11 = puVar11 + 1;
            }
            uVar3 = (uVar22 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar22 >> 7 & 0xff00ff00ff00ff) << 8;
            uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
            lVar18 = *(long *)(local_1b0 + 8);
            ppuStack_178 = *(undefined8 ***)
                            ((long)puVar12 + (-8 - (LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) & 0x78U))
                            );
            local_180 = (undefined8 *)&DAT_00000004;
            if (lVar18 == *(long *)(local_1b0 + 4)) {
                    /* try { // try from 0075c3e8 to 0075c3eb has its CatchHandler @ 0075c554 */
              <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<libdiscore_common[1cb84820f9455fa0]::stores::store_database::opcodes::PendingKKVChange<libdiscore_common[1cb84820f9455fa0]::stores::guild_role::GuildRole>>>
              ::grow_one();
            }
            puVar13 = (undefined8 *)(*(long *)(piVar16 + 6) + lVar18 * 0xe0);
            puVar17 = puVar17 + -1;
            puVar13[1] = ppuStack_178;
            *puVar13 = local_180;
            puVar13[3] = local_168;
            puVar13[2] = local_170;
            puVar13[9] = uStack_138;
            puVar13[8] = local_140;
            puVar13[0xb] = uStack_128;
            puVar13[10] = uStack_130;
            puVar13[5] = pppuStack_158;
            puVar13[4] = local_160;
            puVar13[7] = uStack_148;
            puVar13[6] = uStack_150;
            puVar13[0x11] = uStack_f8;
            puVar13[0x10] = local_100;
            puVar13[0x13] = uStack_e8;
            puVar13[0x12] = uStack_f0;
            puVar13[0xd] = uStack_118;
            puVar13[0xc] = local_120;
            puVar13[0xf] = uStack_108;
            puVar13[0xe] = uStack_110;
            puVar13[0x19] = uStack_b8;
            puVar13[0x18] = local_c0;
            puVar13[0x1b] = uStack_a8;
            puVar13[0x1a] = uStack_b0;
            puVar13[0x15] = uStack_d8;
            puVar13[0x14] = local_e0;
            puVar13[0x17] = uStack_c8;
            puVar13[0x16] = uStack_d0;
            uVar22 = uVar22 - 1 & uVar22;
            *(long *)(piVar16 + 8) = lVar18 + 1;
          } while (puVar17 != (undefined1 *)0x0);
        }
        if ((ppuVar6 != (undefined8 **)0x0) && (ppuVar14 != (undefined8 **)0x0)) {
          free(local_1d8);
        }
      }
    }
    else if (param_3 == 2) {
      local_180 = (undefined8 *)&DAT_00000005;
      lVar18 = *(long *)(local_1b0 + 8);
      if (lVar18 == *(long *)(local_1b0 + 4)) {
                    /* try { // try from 0075be94 to 0075be97 has its CatchHandler @ 0075c4e8 */
        <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<libdiscore_common[1cb84820f9455fa0]::stores::store_database::opcodes::PendingKKVChange<libdiscore_common[1cb84820f9455fa0]::stores::guild_role::GuildRole>>>
        ::grow_one();
      }
      piVar8 = local_1b0;
      puVar11 = (undefined8 *)(*(long *)(piVar16 + 6) + lVar18 * 0xe0);
      puVar11[1] = ppuStack_178;
      *puVar11 = local_180;
      puVar11[3] = local_168;
      puVar11[2] = local_170;
      puVar11[9] = uStack_138;
      puVar11[8] = local_140;
      puVar11[0xb] = uStack_128;
      puVar11[10] = uStack_130;
      puVar11[5] = pppuStack_158;
      puVar11[4] = local_160;
      puVar11[7] = uStack_148;
      puVar11[6] = uStack_150;
      puVar11[0x11] = uStack_f8;
      puVar11[0x10] = local_100;
      puVar11[0x13] = uStack_e8;
      puVar11[0x12] = uStack_f0;
      puVar11[0xd] = uStack_118;
      puVar11[0xc] = local_120;
      puVar11[0xf] = uStack_108;
      puVar11[0xe] = uStack_110;
      puVar11[0x19] = uStack_b8;
      puVar11[0x18] = local_c0;
      puVar11[0x1b] = uStack_a8;
      puVar11[0x1a] = uStack_b0;
      puVar11[0x15] = uStack_d8;
      puVar11[0x14] = local_e0;
      puVar11[0x17] = uStack_c8;
      puVar11[0x16] = uStack_d0;
      *(long *)(piVar16 + 8) = lVar18 + 1;
      if (param_4[2] != 0) {
        lVar18 = param_4[1];
        lVar19 = param_4[2] * 0x248;
        do {
          ppuVar14 = *(undefined8 ***)(lVar18 + 0x108);
          local_a0 = *(undefined8 **)(lVar18 + 0x218);
          local_80 = *(undefined8 ***)(lVar18 + 0x230);
          local_90 = (undefined8 **)(local_a0 + 1);
          local_88 = (undefined1 *)((long)local_a0 + *(long *)(lVar18 + 0x220) + 1);
          uVar22 = NEON_cmge(*local_a0,0,1);
          ppuStack_98 = (undefined8 **)(uVar22 & 0x8080808080808080);
                    /* try { // try from 0075bfa0 to 0075bfab has its CatchHandler @ 0075c598 */
          local_1a0 = ppuVar14;
          pppuStack_78 = &local_1a0;
          FUN_00764bf0(&ppuStack_178,&local_a0);
          lVar15 = *(long *)(piVar8 + 8);
          local_180 = (undefined8 *)0x3;
          local_160 = ppuVar14;
          if (lVar15 == *(long *)(piVar8 + 4)) {
                    /* try { // try from 0075bfc4 to 0075bfcb has its CatchHandler @ 0075c57c */
            <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<libdiscore_common[1cb84820f9455fa0]::stores::store_database::opcodes::PendingKKVChange<libdiscore_common[1cb84820f9455fa0]::stores::guild_role::GuildRole>>>
            ::grow_one(piVar8 + 4);
          }
          puVar11 = (undefined8 *)(*(long *)(piVar8 + 6) + lVar15 * 0xe0);
          lVar19 = lVar19 + -0x248;
          lVar18 = lVar18 + 0x248;
          puVar11[1] = ppuStack_178;
          *puVar11 = local_180;
          puVar11[3] = local_168;
          puVar11[2] = local_170;
          puVar11[9] = uStack_138;
          puVar11[8] = local_140;
          puVar11[0xb] = uStack_128;
          puVar11[10] = uStack_130;
          puVar11[5] = pppuStack_158;
          puVar11[4] = local_160;
          puVar11[7] = uStack_148;
          puVar11[6] = uStack_150;
          puVar11[0x11] = uStack_f8;
          puVar11[0x10] = local_100;
          puVar11[0x13] = uStack_e8;
          puVar11[0x12] = uStack_f0;
          puVar11[0xd] = uStack_118;
          puVar11[0xc] = local_120;
          puVar11[0xf] = uStack_108;
          puVar11[0xe] = uStack_110;
          puVar11[0x19] = uStack_b8;
          puVar11[0x18] = local_c0;
          puVar11[0x1b] = uStack_a8;
          puVar11[0x1a] = uStack_b0;
          puVar11[0x15] = uStack_d8;
          puVar11[0x14] = local_e0;
          puVar11[0x17] = uStack_c8;
          puVar11[0x16] = uStack_d0;
          *(long *)(piVar8 + 8) = lVar15 + 1;
        } while (lVar19 != 0);
      }
    }
    else if (param_3 == 3) {
      if (param_4[2] == 0) {
        *param_1 = 0xffffffffffffffff;
LAB_0075c2f4:
        do {
          uVar1 = *local_1b8;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(local_1b8,0x10);
          if (bVar5) {
            *local_1b8 = uVar1 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar1 - 1 & 0xbfffffff) == 0x80000000) {
                    /* try { // try from 0075c314 to 0075c317 has its CatchHandler @ 0075c47c */
          <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::
          wake_writer_or_readers();
        }
        goto LAB_0075c23c;
      }
      local_180 = (undefined8 *)&DAT_00000005;
      lVar18 = *(long *)(local_1b0 + 8);
      if (lVar18 == *(long *)(local_1b0 + 4)) {
                    /* try { // try from 0075ba1c to 0075ba1f has its CatchHandler @ 0075c4c0 */
        <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<libdiscore_common[1cb84820f9455fa0]::stores::store_database::opcodes::PendingKKVChange<libdiscore_common[1cb84820f9455fa0]::stores::guild_role::GuildRole>>>
        ::grow_one();
      }
      piVar8 = local_1b0;
      puVar11 = (undefined8 *)(*(long *)(piVar16 + 6) + lVar18 * 0xe0);
      puVar11[1] = ppuStack_178;
      *puVar11 = local_180;
      puVar11[3] = local_168;
      puVar11[2] = local_170;
      puVar11[9] = uStack_138;
      puVar11[8] = local_140;
      puVar11[0xb] = uStack_128;
      puVar11[10] = uStack_130;
      puVar11[5] = pppuStack_158;
      puVar11[4] = local_160;
      puVar11[7] = uStack_148;
      puVar11[6] = uStack_150;
      puVar11[0x11] = uStack_f8;
      puVar11[0x10] = local_100;
      puVar11[0x13] = uStack_e8;
      puVar11[0x12] = uStack_f0;
      puVar11[0xd] = uStack_118;
      puVar11[0xc] = local_120;
      puVar11[0xf] = uStack_108;
      puVar11[0xe] = uStack_110;
      puVar11[0x19] = uStack_b8;
      puVar11[0x18] = local_c0;
      puVar11[0x1b] = uStack_a8;
      puVar11[0x1a] = uStack_b0;
      puVar11[0x15] = uStack_d8;
      puVar11[0x14] = local_e0;
      puVar11[0x17] = uStack_c8;
      puVar11[0x16] = uStack_d0;
      *(long *)(piVar16 + 8) = lVar18 + 1;
      if (param_4[2] != 0) {
        lVar18 = param_4[1];
        lVar19 = param_4[2] * 0x248;
        do {
          ppuVar14 = *(undefined8 ***)(lVar18 + 0x108);
          local_a0 = *(undefined8 **)(lVar18 + 0x218);
          local_80 = *(undefined8 ***)(lVar18 + 0x230);
          local_90 = (undefined8 **)(local_a0 + 1);
          local_88 = (undefined1 *)((long)local_a0 + *(long *)(lVar18 + 0x220) + 1);
          uVar22 = NEON_cmge(*local_a0,0,1);
          ppuStack_98 = (undefined8 **)(uVar22 & 0x8080808080808080);
                    /* try { // try from 0075bb28 to 0075bb33 has its CatchHandler @ 0075c590 */
          local_1a0 = ppuVar14;
          pppuStack_78 = &local_1a0;
          FUN_00764bf0(&ppuStack_178,&local_a0);
          lVar15 = *(long *)(piVar8 + 8);
          local_180 = (undefined8 *)0x3;
          local_160 = ppuVar14;
          if (lVar15 == *(long *)(piVar8 + 4)) {
                    /* try { // try from 0075bb4c to 0075bb53 has its CatchHandler @ 0075c540 */
            <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<libdiscore_common[1cb84820f9455fa0]::stores::store_database::opcodes::PendingKKVChange<libdiscore_common[1cb84820f9455fa0]::stores::guild_role::GuildRole>>>
            ::grow_one(piVar8 + 4);
          }
          puVar11 = (undefined8 *)(*(long *)(piVar8 + 6) + lVar15 * 0xe0);
          lVar19 = lVar19 + -0x248;
          lVar18 = lVar18 + 0x248;
          puVar11[1] = ppuStack_178;
          *puVar11 = local_180;
          puVar11[3] = local_168;
          puVar11[2] = local_170;
          puVar11[9] = uStack_138;
          puVar11[8] = local_140;
          puVar11[0xb] = uStack_128;
          puVar11[10] = uStack_130;
          puVar11[5] = pppuStack_158;
          puVar11[4] = local_160;
          puVar11[7] = uStack_148;
          puVar11[6] = uStack_150;
          puVar11[0x11] = uStack_f8;
          puVar11[0x10] = local_100;
          puVar11[0x13] = uStack_e8;
          puVar11[0x12] = uStack_f0;
          puVar11[0xd] = uStack_118;
          puVar11[0xc] = local_120;
          puVar11[0xf] = uStack_108;
          puVar11[0xe] = uStack_110;
          puVar11[0x19] = uStack_b8;
          puVar11[0x18] = local_c0;
          puVar11[0x1b] = uStack_a8;
          puVar11[0x1a] = uStack_b0;
          puVar11[0x15] = uStack_d8;
          puVar11[0x14] = local_e0;
          puVar11[0x17] = uStack_c8;
          puVar11[0x16] = uStack_d0;
          *(long *)(piVar8 + 8) = lVar15 + 1;
        } while (lVar19 != 0);
      }
    }
    else {
                    /* try { // try from 0075c004 to 0075c03f has its CatchHandler @ 0075c53c */
      FUN_0075b3d4(&local_180,param_4[0x57],param_4 + 0x45,auStack_1c0);
      if (local_180 != (undefined8 *)0xffffffffffffffff) {
        param_1[1] = ppuStack_178;
        *param_1 = local_180;
        param_1[2] = local_170;
        goto LAB_0075c2f4;
      }
    }
  }
  else if (param_3 < 7) {
    if (param_3 == 5) {
      local_180 = (undefined8 *)param_4[0x46];
      local_a0 = (undefined8 *)param_4[0x29];
      ppuStack_178 = (undefined8 **)(local_180 + param_4[0x47] * 0x17);
      local_170 = &local_a0;
                    /* try { // try from 0075be60 to 0075be6b has its CatchHandler @ 0075c53c */
      FUN_0070b95c(auStack_1c0,local_a0,&local_180);
    }
    else if ((*(byte *)(param_4 + 1) & 1) == 0) {
      ppuStack_178 = (undefined8 **)*param_4;
      lVar18 = *(long *)(local_1b0 + 8);
      local_180 = (undefined8 *)&DAT_00000004;
      if (lVar18 == *(long *)(local_1b0 + 4)) {
                    /* try { // try from 0075c1bc to 0075c1bf has its CatchHandler @ 0075c4ac */
        <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<libdiscore_common[1cb84820f9455fa0]::stores::store_database::opcodes::PendingKKVChange<libdiscore_common[1cb84820f9455fa0]::stores::guild_role::GuildRole>>>
        ::grow_one();
      }
      goto LAB_0075c1c0;
    }
  }
  else {
    if (param_3 - 7U < 2) {
      <libdiscore_common::stores::guild_role::libdiscore_common::stores::guild_role::GuildRole>::
      from_server(&local_180,param_4[0x17],param_4);
      piVar16 = local_1b0;
      lVar18 = *(long *)(local_1b0 + 8);
      if (lVar18 == *(long *)(local_1b0 + 4)) {
                    /* try { // try from 0075bb98 to 0075bb9b has its CatchHandler @ 0075c50c */
        <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<libdiscore_common[1cb84820f9455fa0]::stores::store_database::opcodes::PendingKKVChange<libdiscore_common[1cb84820f9455fa0]::stores::guild_role::GuildRole>>>
        ::grow_one();
      }
    }
    else {
      local_170 = (undefined8 **)param_4[1];
      ppuStack_178 = (undefined8 **)*param_4;
      local_180 = (undefined8 *)0x2;
      lVar18 = *(long *)(local_1b0 + 8);
      if (lVar18 == *(long *)(local_1b0 + 4)) {
                    /* try { // try from 0075bff8 to 0075bffb has its CatchHandler @ 0075c4d4 */
        <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<libdiscore_common[1cb84820f9455fa0]::stores::store_database::opcodes::PendingKKVChange<libdiscore_common[1cb84820f9455fa0]::stores::guild_role::GuildRole>>>
        ::grow_one();
      }
    }
LAB_0075c1c0:
    puVar11 = (undefined8 *)(*(long *)(piVar16 + 6) + lVar18 * 0xe0);
    puVar11[1] = ppuStack_178;
    *puVar11 = local_180;
    puVar11[3] = local_168;
    puVar11[2] = local_170;
    puVar11[9] = uStack_138;
    puVar11[8] = local_140;
    puVar11[0xb] = uStack_128;
    puVar11[10] = uStack_130;
    puVar11[5] = pppuStack_158;
    puVar11[4] = local_160;
    puVar11[7] = uStack_148;
    puVar11[6] = uStack_150;
    puVar11[0x11] = uStack_f8;
    puVar11[0x10] = local_100;
    puVar11[0x13] = uStack_e8;
    puVar11[0x12] = uStack_f0;
    puVar11[0xd] = uStack_118;
    puVar11[0xc] = local_120;
    puVar11[0xf] = uStack_108;
    puVar11[0xe] = uStack_110;
    puVar11[0x19] = uStack_b8;
    puVar11[0x18] = local_c0;
    puVar11[0x1b] = uStack_a8;
    puVar11[0x1a] = uStack_b0;
    puVar11[0x15] = uStack_d8;
    puVar11[0x14] = local_e0;
    puVar11[0x17] = uStack_c8;
    puVar11[0x16] = uStack_d0;
    *(long *)(piVar16 + 8) = lVar18 + 1;
  }
  *param_1 = 0xffffffffffffffff;
  do {
    uVar1 = *local_1b8;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(local_1b8,0x10);
    if (bVar5) {
      *local_1b8 = uVar1 - 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if ((uVar1 - 1 & 0xbfffffff) == 0x80000000) {
                    /* try { // try from 0075c430 to 0075c433 has its CatchHandler @ 0075c494 */
    <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::wake_writer_or_readers()
    ;
  }
LAB_0075c23c:
  if ((((local_1a8 & 1) == 0) &&
      ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) != 0)) &&
     (uVar22 = std::panicking::panic_count::is_zero_slow_path(), (uVar22 & 1) == 0)) {
    *(undefined1 *)(local_1b0 + 2) = 1;
  }
  do {
    iVar2 = *local_1b0;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(local_1b0,0x10);
    if (bVar5) {
      *local_1b0 = iVar2 + -0x3fffffff;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar2 + 0xc0000001U >> 0x1e != 0) {
    <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::wake_writer_or_readers()
    ;
  }
  return;
}


// ===== 0075c5f0  <libdiscore_common::stores::guild_role::GuildRoleStore_as_libdiscore_common::stores::dispatcher::Store<libdiscore_common::actions::Action>>::commit_changes =====

/* WARNING: Unknown calling convention: __rustcall */
/* <libdiscore_common::stores::guild_role::GuildRoleStore as
   libdiscore_common::stores::dispatcher::Store<libdiscore_common::actions::Action>>::commit_changes
    */

void __rustcall
<libdiscore_common::stores::guild_role::GuildRoleStore_as_libdiscore_common::stores::dispatcher::Store<libdiscore_common::actions::Action>>
::commit_changes(undefined8 *param_1)

{
  undefined8 *puVar1;
  char *pcVar2;
  long local_80;
  void *local_78;
  long local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  void *local_50;
  void *pvStack_48;
  long local_40;
  void *pvStack_38;
  
  FUN_00711b88(&local_80);
  if (local_70 == 0) {
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = 8;
                    /* try { // try from 0075c6cc to 0075c6d3 has its CatchHandler @ 0075c720 */
    FUN_00766220(&local_80);
    if (local_80 != 0) {
      free(local_78);
      return;
    }
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar1 = (undefined8 *)FUN_004b25a4(0x30,8);
    if (puVar1 == (undefined8 *)0x0) {
                    /* try { // try from 0075c700 to 0075c70b has its CatchHandler @ 0075c780 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x30);
    }
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    pcVar2 = (char *)FUN_004b25a4(0xb,1);
    if (pcVar2 == (char *)0x0) {
                    /* try { // try from 0075c710 to 0075c71b has its CatchHandler @ 0075c768 */
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(1,0xb);
    }
    pcVar2[7] = 'o';
    pcVar2[8] = 'l';
    pcVar2[9] = 'e';
    pcVar2[10] = 's';
    pvStack_38 = (void *)((long)local_78 + local_70 * 0xf0);
    *(undefined8 *)pcVar2 = s_guild_roles_002d15e6._0_8_;
    local_50 = local_78;
    pvStack_48 = local_78;
    local_40 = local_80;
                    /* try { // try from 0075c678 to 0075c683 has its CatchHandler @ 0075c73c */
    FUN_0070795c(&local_68,&local_50);
    *puVar1 = 0xb;
    puVar1[1] = pcVar2;
    puVar1[5] = local_58;
    puVar1[4] = uStack_60;
    puVar1[3] = local_68;
    puVar1[2] = 0xb;
    *param_1 = 1;
    param_1[1] = puVar1;
    param_1[2] = 1;
  }
  return;
}


// ===== 0075c798  <libdiscore_common::stores::guild_role::GuildRoleStore_as_libdiscore_common::stores::dispatcher::Store<libdiscore_common::actions::Action>>::database_configurations =====

/* WARNING: Unknown calling convention: __rustcall */
/* <libdiscore_common::stores::guild_role::GuildRoleStore as
   libdiscore_common::stores::dispatcher::Store<libdiscore_common::actions::Action>>::database_configurations
    */

void __rustcall
<libdiscore_common::stores::guild_role::GuildRoleStore_as_libdiscore_common::stores::dispatcher::Store<libdiscore_common::actions::Action>>
::database_configurations(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)FUN_004b25a4(0x10,8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = "guild_roles";
    puVar1[1] = 0xb;
    *param_1 = 1;
    param_1[1] = puVar1;
    param_1[2] = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x10);
}


// ===== 0075c7f0  <http::error::Error_as_core::error::Error>::source =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <http::error::Error_as_core::error::Error>::source(void)

{
  (*(code *)PTR_source_00b03238)();
  return;
}


// ===== 0075c7f4  <<libdiscore_common::actions::guild_sticker::GuildStickersUpdate_as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_29}::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<libdiscore_common::actions::guild_sticker::GuildStickersUpdate as
   serde::de::Deserialize>::deserialize::__FieldVisitor as {backref 29}::Visitor>::expecting */

void __rustcall
<<libdiscore_common::actions::guild_sticker::GuildStickersUpdate_as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_29}::Visitor>
::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002a0800,0x10);
  return;
}


// ===== 0075c808  <<libdiscore_common::actions::guild_sticker::ServerGuildSticker_as_serde::de::Deserialize>::deserialize::__Visitor_as{backref_28}::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<libdiscore_common::actions::guild_sticker::ServerGuildSticker as
   serde::de::Deserialize>::deserialize::__Visitor as {backref 28}::Visitor>::expecting */

void __rustcall
<<libdiscore_common::actions::guild_sticker::ServerGuildSticker_as_serde::de::Deserialize>::deserialize::__Visitor_as{backref_28}::Visitor>
::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"struct ServerGuildSticker",0x19);
  return;
}


// ===== 0075c81c  <<libdiscore_common[1cb84820f9455fa0]::actions::guild_sticker::GuildStickersUpdate_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

/* <<libdiscore_common[1cb84820f9455fa0]::actions::guild_sticker::GuildStickersUpdate as
   serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor as
   serde[52fff5c06b43f145]::de::Visitor>::expecting */

void <<libdiscore_common[1cb84820f9455fa0]::actions::guild_sticker::GuildStickersUpdate_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"struct GuildStickersUpdate",0x1a);
  return;
}


// ===== 0075c830  <<libdiscore_common[1cb84820f9455fa0]::actions::guild_sticker::GuildStickersCreateSuccess_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

/* <<libdiscore_common[1cb84820f9455fa0]::actions::guild_sticker::GuildStickersCreateSuccess as
   serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor as
   serde[52fff5c06b43f145]::de::Visitor>::expecting */

void <<libdiscore_common[1cb84820f9455fa0]::actions::guild_sticker::GuildStickersCreateSuccess_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,"struct GuildStickersCreateSuccess",0x21);
  return;
}


// ===== 0075c844  <<libdiscore_common[1cb84820f9455fa0]::actions::guild_sticker::GuildStickerFetchSuccess_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

/* <<libdiscore_common[1cb84820f9455fa0]::actions::guild_sticker::GuildStickerFetchSuccess as
   serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor as
   serde[52fff5c06b43f145]::de::Visitor>::expecting */

void <<libdiscore_common[1cb84820f9455fa0]::actions::guild_sticker::GuildStickerFetchSuccess_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"struct GuildStickerFetchSuccess",0x1f);
  return;
}


// ===== 0075c858  <<libdiscore_common[1cb84820f9455fa0]::actions::guild_sticker::GuildStickersFetchSuccess_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

/* <<libdiscore_common[1cb84820f9455fa0]::actions::guild_sticker::GuildStickersFetchSuccess as
   serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor as
   serde[52fff5c06b43f145]::de::Visitor>::expecting */

void <<libdiscore_common[1cb84820f9455fa0]::actions::guild_sticker::GuildStickersFetchSuccess_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"struct GuildStickersFetchSuccess",0x20)
  ;
  return;
}


// ===== 0075c86c  <<libdiscore_common[1cb84820f9455fa0]::actions::guild_sticker::CachedStickersLoaded_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

/* <<libdiscore_common[1cb84820f9455fa0]::actions::guild_sticker::CachedStickersLoaded as
   serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor as
   serde[52fff5c06b43f145]::de::Visitor>::expecting */

void <<libdiscore_common[1cb84820f9455fa0]::actions::guild_sticker::CachedStickersLoaded_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"struct CachedStickersLoaded",0x1b);
  return;
}


// ===== 0075c880  FUN_0075c880 =====

undefined1  [16] FUN_0075c880(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 local_78 [16];
  undefined8 *local_68;
  undefined8 *puStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 *local_28;
  
  uVar7 = *param_3;
  lVar6 = param_3[1];
  uVar10 = *param_1;
  plVar9 = (long *)param_3[2];
  *param_1 = param_2;
                    /* try { // try from 0075c8ac to 0075c8b3 has its CatchHandler @ 0075c9c8 */
  local_78 = <tokio::runtime::scheduler::current_thread::[2]::tokio::runtime::scheduler::current_thread::Handle>
             ::waker_ref(plVar9);
  local_68 = (undefined8 *)local_78;
  local_28 = &local_48;
  local_58 = 0;
  puStack_60 = local_68;
  local_48 = uVar7;
LAB_0075c8d0:
  do {
    pcVar1 = (char *)(*plVar9 + 0xd8);
    do {
      cVar2 = *pcVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar4) {
        *pcVar1 = '\0';
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
                    /* try { // try from 0075c8e8 to 0075c8fb has its CatchHandler @ 0075c9cc */
    if ((cVar2 != '\0') &&
       (auVar11 = FUN_007545c8(plVar9,lVar6,&local_28,&local_68), lVar6 = auVar11._0_8_,
       (auVar11 & (undefined1  [16])0x1) == (undefined1  [16])0x0)) {
      uVar7 = 1;
LAB_0075c99c:
      *param_1 = uVar10;
      auVar11._8_8_ = uVar7;
      auVar11._0_8_ = lVar6;
      return auVar11;
    }
    lVar8 = *plVar9;
    iVar5 = *(int *)(lVar8 + 0x70);
    if (iVar5 != 0) {
      do {
        if ((*(byte *)(lVar6 + 0x68) & 1) != 0) {
          uVar7 = 0;
          goto LAB_0075c99c;
        }
        *(int *)(lVar6 + 0x60) = *(int *)(lVar6 + 0x60) + 1;
                    /* try { // try from 0075c928 to 0075c933 has its CatchHandler @ 0075c9d8 */
        auVar11 = <tokio::runtime::scheduler::current_thread::[0]::tokio::runtime::scheduler::current_thread::Core>
                  ::next_task(lVar6,*plVar9 + 0x10);
        if (auVar11._0_8_ == 0) {
                    /* try { // try from 0075c970 to 0075c977 has its CatchHandler @ 0075c9c4 */
          iVar5 = <tokio::runtime::scheduler::defer::tokio::runtime::scheduler::defer::Defer>::
                  is_empty(plVar9 + 3,auVar11._8_8_,0);
          lVar8 = *plVar9 + 0x10;
          if (iVar5 == 0) goto LAB_0075c95c;
                    /* try { // try from 0075c984 to 0075c993 has its CatchHandler @ 0075c9cc */
          lVar6 = <tokio::runtime::scheduler::current_thread::[1]::tokio::runtime::scheduler::current_thread::Context>
                  ::park(plVar9,lVar6,lVar8);
          goto LAB_0075c8d0;
        }
                    /* try { // try from 0075c93c to 0075c947 has its CatchHandler @ 0075c9d0 */
        lVar6 = FUN_00754734(plVar9,lVar6);
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      lVar8 = *plVar9;
    }
    lVar8 = lVar8 + 0x10;
LAB_0075c95c:
                    /* try { // try from 0075c95c to 0075c96b has its CatchHandler @ 0075c9cc */
    lVar6 = <tokio::runtime::scheduler::current_thread::[1]::tokio::runtime::scheduler::current_thread::Context>
            ::park_yield(plVar9,lVar6,lVar8);
  } while( true );
}


// ===== 0075c9f4  FUN_0075c9f4 =====

void FUN_0075c9f4(byte *param_1)

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


// ===== 0075ca2c  FUN_0075ca2c =====

void FUN_0075ca2c(long *param_1)

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
                    /* try { // try from 0075ca64 to 0075ca67 has its CatchHandler @ 0075caa4 */
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


// ===== 0075cadc  FUN_0075cadc =====

void FUN_0075cadc(long *param_1)

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
                    /* try { // try from 0075cb18 to 0075cb1b has its CatchHandler @ 0075cbb8 */
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
                    /* try { // try from 0075cb40 to 0075cb43 has its CatchHandler @ 0075cbb0 */
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
                    /* try { // try from 0075cb68 to 0075cb6b has its CatchHandler @ 0075cba8 */
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


// ===== 0075cc44  FUN_0075cc44 =====

void FUN_0075cc44(long *param_1)

{
  char cVar1;
  bool bVar2;
  void *__ptr;
  long *plVar3;
  long lVar4;
  
  if (*param_1 != 2) {
    if (param_1[1] == -1) {
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
        <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::park::Inner>>::drop_slow(param_1 + 2);
        return;
      }
    }
    else {
      if (param_1[1] != 0) {
        free((void *)param_1[2]);
      }
      close((int)param_1[4]);
      close((int)param_1[6]);
      plVar3 = (long *)param_1[5];
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
                    /* try { // try from 0075ccbc to 0075ccbf has its CatchHandler @ 0075cd28 */
        <alloc::sync::[n]::alloc::sync::Arc<()>>::drop_slow();
      }
      __ptr = (void *)param_1[7];
      if (__ptr != (void *)0xffffffffffffffff) {
        plVar3 = (long *)((long)__ptr + 8);
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
          free(__ptr);
          return;
        }
      }
    }
  }
  return;
}


// ===== 0075cd3c  FUN_0075cd3c =====

void FUN_0075cd3c(long *param_1)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  
  __ptr = (void *)param_1[1];
  lVar2 = param_1[2] + 1;
  lVar1 = (long)__ptr + 0x38;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 0075cd78 to 0075cd7b has its CatchHandler @ 0075cdc4 */
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


// ===== 0075ce18  FUN_0075ce18 =====

void FUN_0075ce18(void *param_1)

{
                    /* try { // try from 0075ce28 to 0075ce2f has its CatchHandler @ 0075ce84 */
  FUN_0076555c((long)param_1 + 0x40);
  if (*(long *)((long)param_1 + 0x40) != 0) {
    free(*(void **)((long)param_1 + 0x48));
  }
                    /* try { // try from 0075ce48 to 0075ce4f has its CatchHandler @ 0075ce68 */
  FUN_0075cc44(param_1);
  free(param_1);
  return;
}


// ===== 0075cec4  FUN_0075cec4 =====

void FUN_0075cec4(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  void *__ptr;
  long *plVar4;
  long lVar5;
  
  lVar5 = *param_1 - 3;
  if (*param_1 < 3) {
    lVar5 = 1;
  }
  if (lVar5 != 0) {
    if (lVar5 == 1) {
      if (param_1[0xc] != 0) {
        free((void *)param_1[0xd]);
      }
      if (param_1[10] != 0) {
        free((void *)param_1[9]);
      }
                    /* try { // try from 0075cf24 to 0075cf2b has its CatchHandler @ 0075cff4 */
      FUN_00766164(param_1 + 3);
      if (param_1[3] != 0) {
        free((void *)param_1[4]);
      }
      __ptr = (void *)param_1[7];
      lVar5 = param_1[8] + 1;
      lVar3 = (long)__ptr + 0x38;
      while (lVar5 = lVar5 + -1, lVar5 != 0) {
                    /* try { // try from 0075cf6c to 0075cf6f has its CatchHandler @ 0075d024 */
        (**(code **)(*(long *)(lVar3 + -0x18) + 0x20))
                  (lVar3,*(undefined8 *)(lVar3 + -0x10),*(undefined8 *)(lVar3 + -8));
        lVar3 = lVar3 + 0x48;
      }
      if (param_1[6] == 0) goto LAB_0075cfa8;
    }
    else {
      if (param_1[1] == 0) goto LAB_0075cfa8;
      __ptr = (void *)param_1[2];
    }
    free(__ptr);
  }
LAB_0075cfa8:
  plVar4 = (long *)param_1[0x10];
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
      <alloc::sync::[n]::alloc::sync::Arc<futures_util::abortable::AbortInner>>::drop_slow
                (param_1 + 0x10);
      return;
    }
  }
  return;
}


// ===== 0075d0a4  FUN_0075d0a4 =====

void FUN_0075d0a4(long param_1)

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
                    /* try { // try from 0075d0e0 to 0075d0e3 has its CatchHandler @ 0075d170 */
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
                    /* try { // try from 0075d108 to 0075d10b has its CatchHandler @ 0075d1ac */
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
                    /* try { // try from 0075d130 to 0075d133 has its CatchHandler @ 0075d1a4 */
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


// ===== 0075d20c  FUN_0075d20c =====

void FUN_0075d20c(long param_1)

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
                    /* try { // try from 0075d248 to 0075d24b has its CatchHandler @ 0075d278 */
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
    }
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    free(*(void **)(param_1 + 0x18));
    return;
  }
  return;
}


// ===== 0075d29c  FUN_0075d29c =====

void FUN_0075d29c(long param_1)

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
                    /* try { // try from 0075d2d8 to 0075d2db has its CatchHandler @ 0075d358 */
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
                    /* try { // try from 0075d310 to 0075d313 has its CatchHandler @ 0075d350 */
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


// ===== 0075d398  FUN_0075d398 =====

void FUN_0075d398(long *param_1)

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
                    /* try { // try from 0075d3d4 to 0075d3d7 has its CatchHandler @ 0075d664 */
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
                    /* try { // try from 0075d3f8 to 0075d3ff has its CatchHandler @ 0075d6bc */
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
                    /* try { // try from 0075d420 to 0075d427 has its CatchHandler @ 0075d6b4 */
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
                    /* try { // try from 0075d448 to 0075d44f has its CatchHandler @ 0075d6ac */
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
                    /* try { // try from 0075d470 to 0075d477 has its CatchHandler @ 0075d6a4 */
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
                    /* try { // try from 0075d498 to 0075d49f has its CatchHandler @ 0075d69c */
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
                    /* try { // try from 0075d4cc to 0075d4cf has its CatchHandler @ 0075d65c */
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
                    /* try { // try from 0075d4ec to 0075d4f3 has its CatchHandler @ 0075d7b8 */
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
                    /* try { // try from 0075d528 to 0075d52b has its CatchHandler @ 0075d60c */
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
                    /* try { // try from 0075d54c to 0075d553 has its CatchHandler @ 0075d694 */
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
                    /* try { // try from 0075d580 to 0075d583 has its CatchHandler @ 0075d61c */
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
                    /* try { // try from 0075d5a8 to 0075d5ab has its CatchHandler @ 0075d614 */
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
                    /* try { // try from 0075d5d4 to 0075d5db has its CatchHandler @ 0075d654 */
      <alloc::sync::[n]::alloc::sync::Arc<[smol_str::SmolStr]>>::drop_slow(param_1 + 0x12);
    }
  }
  if ((param_1[0xf] != -1) && (param_1[0xf] != 0)) {
    free((void *)param_1[0x10]);
  }
  FUN_0075cadc(param_1 + 5);
  return;
}


// ===== 0075d854  FUN_0075d854 =====

void FUN_0075d854(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)param_2[1];
  puVar4 = (undefined8 *)param_2[3];
  uVar2 = (long)puVar4 - (long)puVar3;
  uVar1 = uVar2 >> 3;
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar1 = (uVar2 >> 3 & 1) + (uVar2 >> 4);
  }
  if (*(ulong *)(param_1 + 0x10) < uVar1) {
                    /* try { // try from 0075d8e4 to 0075d8f3 has its CatchHandler @ 0075d8f8 */
    <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::core::
    snowflake::GuildId,())>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::
    make_hasher<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId_();
  }
  for (; puVar3 != puVar4; puVar3 = puVar3 + 1) {
                    /* try { // try from 0075d8a4 to 0075d8ab has its CatchHandler @ 0075d8fc */
    FUN_0075f57c(param_1,*puVar3);
  }
  if (param_2[2] != 0) {
    free((void *)*param_2);
    return;
  }
  return;
}


// ===== 0075d920  FUN_0075d920 =====

void FUN_0075d920(undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_18;
  
  if (((*(long *)param_2[3] == 0) && (param_2[1] != 0)) && (param_2[2] == 0)) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_const::panic_const_div_by_zero
              (&PTR_s__nix_store_8006w282fgsx3273c878b_00ad6080);
  }
  uStack_38 = param_2[1];
  local_40 = *param_2;
  local_28 = param_2[3];
  uStack_30 = param_2[2];
  local_18 = param_1;
  FUN_007521b8(&local_40,&local_18,local_28);
  return;
}


// ===== 0075d980  FUN_0075d980 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0075d980(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  undefined1 uVar10;
  long local_a0;
  long lStack_98;
  long local_90;
  uint local_84;
  uint local_80;
  uint uStack_7c;
  uint local_78;
  uint local_74;
  uint *local_70;
  undefined *local_68;
  uint local_48;
  undefined1 uStack_41;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  lStack_98 = FUN_004b25a4(0x20,1);
  if (lStack_98 == 0) {
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(1,0x20);
  }
  local_90 = 0;
  local_a0 = 0x20;
  local_70 = (uint *)*param_2;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,(int)param_2[1]);
                    /* try { // try from 0075d9d8 to 0075e12f has its CatchHandler @ 0075e154 */
  <chrono::naive::datetime::chrono::naive::datetime::NaiveDateTime>::overflowing_add_offset
            (&local_84,&local_70,0);
  lVar7 = local_90;
  local_78 = (int)local_84 >> 0xd;
  if (local_78 >> 4 < 0x271) {
    if (local_a0 == local_90) {
      FUN_0072eae4(&local_a0,local_90,1,1,1);
    }
    lVar1 = lVar7 + 1;
    uVar4 = (local_84 >> 0xf & 0x3fff) / 0x19;
    bVar5 = (byte)(uVar4 / 10) & 0x1f;
    *(byte *)(lStack_98 + lVar7) = bVar5 | 0x30;
    if (local_a0 == lVar1) {
      local_90 = lVar1;
      FUN_0072eae4(&local_a0,local_a0,1,1,1);
    }
    lVar2 = lVar7 + 2;
    *(byte *)(lStack_98 + lVar1) = (char)uVar4 + bVar5 * -10 | 0x30;
    if (local_a0 == lVar2) {
      local_90 = lVar2;
      FUN_0072eae4(&local_a0,lVar7 + 2,1,1,1);
    }
    lVar1 = lVar7 + 3;
    uVar4 = (local_84 >> 0xd) + uVar4 * -100;
    bVar5 = (byte)((uVar4 & 0xff) / 10);
    *(byte *)(lStack_98 + lVar2) = bVar5 | 0x30;
    if (local_a0 == lVar1) {
      local_90 = lVar1;
      FUN_0072eae4(&local_a0,local_a0,1,1,1);
    }
    local_90 = lVar7 + 4;
    *(byte *)(lStack_98 + lVar1) = (char)uVar4 + bVar5 * -10 | 0x30;
  }
  else {
    local_70 = &local_78;
    local_68 = PTR_fmt_00b00d18;
    uVar9 = core::fmt::write(&local_a0,&PTR_FUN_00ad7b00,&DAT_002a1828,&local_70);
    if ((uVar9 & 1) != 0) goto LAB_0075e10c;
  }
  lVar7 = local_90;
  if (local_a0 == local_90) {
    FUN_0072eae4(&local_a0,local_90,1,1,1);
  }
  uVar9 = (ulong)(local_84 >> 3) & 0x3ff;
  lVar1 = lVar7 + 1;
  *(undefined1 *)(lStack_98 + lVar7) = 0x2d;
  local_90 = lVar1;
  if (0x2dc < (uint)uVar9) {
                    /* try { // try from 0075e140 to 0075e14f has its CatchHandler @ 0075e154 */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check
              (uVar9,0x2dd,&PTR_s__root__cargo_registry_src_index__00ad7f70);
  }
  bVar5 = ""[uVar9];
  uVar4 = (uint)uVar9 + (uint)bVar5;
  uVar10 = 0x30;
  if (0x27f < uVar4) {
    uVar10 = 0x31;
  }
  if (local_a0 == lVar1) {
    FUN_0072eae4(&local_a0,lVar7 + 1,1,1,1);
  }
  bVar3 = (byte)(uVar4 >> 6);
  lVar2 = lVar7 + 2;
  *(undefined1 *)(lStack_98 + lVar1) = uVar10;
  if (0x27f < uVar4) {
    bVar3 = bVar3 - 10;
  }
  if (local_a0 == lVar2) {
    local_90 = lVar2;
    FUN_0072eae4(&local_a0,local_a0,1,1,1);
  }
  *(byte *)(lStack_98 + lVar2) = bVar3 | 0x30;
  lVar1 = lVar7 + 3;
  if (local_a0 == lVar1) {
    local_90 = lVar1;
    FUN_0072eae4(&local_a0,lVar7 + 3,1,1,1);
  }
  *(undefined1 *)(lStack_98 + lVar1) = 0x2d;
  lVar1 = lVar7 + 4;
  if (local_a0 == lVar1) {
    local_90 = lVar1;
    FUN_0072eae4(&local_a0,lVar7 + 4,1,1,1);
  }
  lVar2 = lVar7 + 5;
  uVar4 = (uint)bVar5 + (local_84 >> 3) >> 1 & 0x1f;
  bVar5 = (byte)(uVar4 / 10);
  *(byte *)(lStack_98 + lVar1) = bVar5 | 0x30;
  if (local_a0 == lVar2) {
    local_90 = lVar2;
    FUN_0072eae4(&local_a0,local_a0,1,1,1);
  }
  lVar1 = lVar7 + 6;
  *(byte *)(lStack_98 + lVar2) = (char)uVar4 + bVar5 * -10 | 0x30;
  if (local_a0 == lVar1) {
    local_90 = lVar1;
    FUN_0072eae4(&local_a0,lVar7 + 6,1,1,1);
  }
  lVar2 = lVar7 + 7;
  *(undefined1 *)(lStack_98 + lVar1) = 0x54;
  uVar4 = local_80 % 0x3c;
  uVar6 = uStack_7c;
  if (999999999 < uStack_7c) {
    uVar4 = uVar4 + 1;
    uVar6 = uStack_7c + 0xc4653600;
  }
  local_90 = lVar2;
  local_74 = uVar6;
  if (99 < (local_80 / 0xe10 & 0xff)) goto LAB_0075e10c;
  if (local_a0 == lVar2) {
    FUN_0072eae4(&local_a0,lVar7 + 7,1,1,1);
  }
  lVar1 = lVar7 + 8;
  bVar5 = (byte)((local_80 / 0xe10 & 0xff) / 10);
  *(byte *)(lStack_98 + lVar2) = bVar5 | 0x30;
  if (local_a0 == lVar1) {
    local_90 = lVar1;
    FUN_0072eae4(&local_a0,local_a0,1,1,1);
  }
  lVar2 = lVar7 + 9;
  *(byte *)(lStack_98 + lVar1) = (char)(local_80 / 0xe10) + bVar5 * -10 | 0x30;
  if (local_a0 == lVar2) {
    local_90 = lVar2;
    FUN_0072eae4(&local_a0,lVar7 + 9,1,1,1);
  }
  *(undefined1 *)(lStack_98 + lVar2) = 0x3a;
  lVar1 = lVar7 + 10;
  if (local_a0 == lVar1) {
    local_90 = lVar1;
    FUN_0072eae4(&local_a0,lVar7 + 10,1,1,1);
  }
  lVar2 = lVar7 + 0xb;
  iVar8 = local_80 / 0x3c + (local_80 / 0xe10) * -0x3c;
  bVar5 = (byte)((uint)(iVar8 * 0x1a) >> 8);
  *(byte *)(lStack_98 + lVar1) = bVar5 | 0x30;
  if (local_a0 == lVar2) {
    local_90 = lVar2;
    FUN_0072eae4(&local_a0,local_a0,1,1,1);
  }
  lVar1 = lVar7 + 0xc;
  *(byte *)(lStack_98 + lVar2) = (char)iVar8 + bVar5 * -10 | 0x30;
  if (local_a0 == lVar1) {
    local_90 = lVar1;
    FUN_0072eae4(&local_a0,lVar7 + 0xc,1,1,1);
  }
  *(undefined1 *)(lStack_98 + lVar1) = 0x3a;
  lVar1 = lVar7 + 0xd;
  if (local_a0 == lVar1) {
    local_90 = lVar1;
    FUN_0072eae4(&local_a0,lVar7 + 0xd,1,1,1);
  }
  lVar2 = lVar7 + 0xe;
  bVar5 = (byte)(uVar4 / 10);
  *(byte *)(lStack_98 + lVar1) = bVar5 | 0x30;
  if (local_a0 == lVar2) {
    local_90 = lVar2;
    FUN_0072eae4(&local_a0,local_a0,1,1,1);
  }
  local_90 = lVar7 + 0xf;
  *(byte *)(lStack_98 + lVar2) = (char)uVar4 + bVar5 * -10 | 0x30;
  if (uVar6 != 0) {
    if (uVar6 == (uVar6 / 1000000) * 1000000) {
      local_70 = &local_48;
      local_68 = PTR_fmt_00b00c40;
      local_48 = uVar6 / 1000000;
      uVar9 = core::fmt::write(&local_a0,&PTR_FUN_00ad7b00,&DAT_002d195c,&local_70);
    }
    else {
      if (uVar6 % 1000 != 0) {
        local_70 = &local_74;
        local_68 = PTR_fmt_00b00c40;
        iVar8 = core::fmt::write(&local_a0,&PTR_FUN_00ad7b00,&DAT_002d1970,&local_70);
        if (iVar8 != 0) goto LAB_0075e10c;
        goto LAB_0075de8c;
      }
      local_70 = &local_48;
      local_68 = PTR_fmt_00b00c40;
      local_48 = uVar6 / 1000;
      uVar9 = core::fmt::write(&local_a0,&PTR_FUN_00ad7b00,&DAT_002d1966,&local_70);
    }
    if ((uVar9 & 1) != 0) goto LAB_0075e10c;
  }
LAB_0075de8c:
  local_70 = (uint *)CONCAT44(local_70._4_4_,(int)_s__002a1850);
  iVar8 = FUN_0075133c(&local_70,&local_a0,0);
  if (iVar8 == 0) {
    param_1[1] = lStack_98;
    *param_1 = local_a0;
    param_1[2] = local_90;
    return;
  }
LAB_0075e10c:
                    /* WARNING: Subroutine does not return */
  core::result::unwrap_failed
            ("writing rfc3339 datetime to string should never fail",0x34,&uStack_41,&DAT_00ad7fc0,
             &PTR_s__root__cargo_registry_src_index__00ad7fa8);
}


// ===== 0075e174  FUN_0075e174 =====

undefined8 FUN_0075e174(long *param_1,char param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  bool bVar5;
  ulong uVar6;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  byte bVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  char local_14 [4];
  
  local_14[0] = param_2;
  uVar6 = FUN_0076ae3c(param_1 + 4,local_14);
  uVar13 = extraout_x11;
  if (param_1[2] == 0) {
    <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::actions::
    ActionTypes,())>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::
    make_hasher<libdiscore_common[1cb84820f9455fa0]::actions::ActionTypes_();
    uVar13 = extraout_x11_00;
  }
  bVar5 = false;
  puVar1 = (undefined8 *)*param_1;
  uVar2 = param_1[1];
  lVar7 = 0;
  bVar4 = (byte)(uVar6 >> 0x38);
  bVar10 = bVar4 >> 1;
  uVar8 = CONCAT17(bVar10,CONCAT16(bVar10,CONCAT15(bVar10,CONCAT14(bVar10,CONCAT13(bVar10,CONCAT12(
                                                  bVar10,CONCAT11(bVar10,bVar10)))))));
  uVar6 = uVar6 & uVar2;
  uVar11 = *(undefined8 *)((long)puVar1 + uVar6);
  uVar12 = NEON_cmeq(uVar11,uVar8,1);
  do {
    for (uVar12 = uVar12 & 0x8080808080808080; uVar12 != 0; uVar12 = uVar12 - 1 & uVar12) {
      uVar3 = (uVar12 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar12 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      if (param_2 ==
          *(char *)(~(uVar6 + ((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3) & uVar2) +
                   (long)puVar1)) {
        return 1;
      }
    }
    if (bVar5) {
LAB_0075e224:
      uVar11 = NEON_cmeq(uVar11,0xffffffffffffffff,1);
      bVar10 = NEON_umaxv(uVar11,1);
      if ((bVar10 & 1) != 0) {
        uVar6 = (ulong)*(char *)((long)puVar1 + uVar13);
        if (-1 < *(char *)((long)puVar1 + uVar13)) {
          uVar13 = NEON_cmlt(*puVar1,0,1);
          uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
          uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
          uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
          uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
          uVar13 = (ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3;
          uVar6 = (ulong)*(byte *)((long)puVar1 + uVar13);
        }
        lVar9 = param_1[3];
        lVar7 = param_1[2];
        *(byte *)((long)puVar1 + uVar13) = bVar4 >> 1;
        *(byte *)((long)puVar1 + (uVar13 - 8 & uVar2) + 8) = bVar4 >> 1;
        *(char *)(~uVar13 + (long)puVar1) = param_2;
        param_1[3] = lVar9 + 1;
        param_1[2] = lVar7 - (uVar6 & 1);
        return 0;
      }
      bVar5 = true;
    }
    else {
      uVar13 = NEON_cmlt(uVar11,0,1);
      if (uVar13 != 0) {
        uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
        uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        uVar13 = uVar6 + ((ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3) & uVar2;
        goto LAB_0075e224;
      }
      bVar5 = false;
      uVar13 = 0;
    }
    lVar7 = lVar7 + 8;
    uVar6 = lVar7 + uVar6 & uVar2;
    uVar11 = *(undefined8 *)((long)puVar1 + uVar6);
    uVar12 = NEON_cmeq(uVar11,uVar8,1);
  } while( true );
}


// ===== 0075e308  FUN_0075e308 =====

undefined4 FUN_0075e308(long *param_1,long *param_2,undefined4 param_3)

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
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong local_b0;
  
                    /* try { // try from 0075e338 to 0075e4fb has its CatchHandler @ 0075e520 */
  uVar6 = FUN_0076af58(param_1 + 4);
  if (param_1[2] == 0) {
    <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(alloc[c1f8e832b0d782c7]::string::String,libdiscore_common[1cb84820f9455fa0]::core::experiment_cacher::CacheableExperimentConfig)>>
    ::reserve_rehash::
    <hashbrown[32fc5d502e7f9af5]::map::make_hasher<alloc[c1f8e832b0d782c7]::string::String,libdiscore_common[1cb84820f9455fa0]::core::experiment_cacher::CacheableExperimentConfig,std[17aff9129faa4dc5]::hash::random::RandomState>::_closure_0_>
              (param_1,1,param_1 + 4,1);
  }
  bVar4 = false;
  puVar1 = (undefined8 *)*param_1;
  uVar2 = param_1[1];
  lVar8 = 0;
  bVar3 = (byte)(uVar6 >> 0x38);
  bVar9 = bVar3 >> 1;
  uVar15 = CONCAT17(bVar9,CONCAT16(bVar9,CONCAT15(bVar9,CONCAT14(bVar9,CONCAT13(bVar9,CONCAT12(bVar9
                                                  ,CONCAT11(bVar9,bVar9)))))));
  __s1 = (void *)param_2[1];
  __n = param_2[2];
  uVar6 = uVar6 & uVar2;
  uVar16 = *(undefined8 *)((long)puVar1 + uVar6);
  uVar10 = NEON_cmeq(uVar16,uVar15,1);
  uVar10 = uVar10 & 0x8080808080808080;
  do {
    for (; uVar10 != 0; uVar10 = uVar10 - 1 & uVar10) {
      uVar7 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar6 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) & uVar2;
      if ((__n == puVar1[uVar7 * -4 + -2]) &&
         (iVar5 = memcmp(__s1,(void *)puVar1[uVar7 * -4 + -3],__n), iVar5 == 0)) {
        *(undefined4 *)(puVar1 + uVar7 * -4 + -1) = param_3;
        if (*param_2 != 0) {
          free((void *)param_2[1]);
        }
        return 1;
      }
    }
    if (bVar4) {
LAB_0075e3fc:
      uVar16 = NEON_cmeq(uVar16,0xffffffffffffffff,1);
      bVar9 = NEON_umaxv(uVar16,1);
      if ((bVar9 & 1) != 0) {
        uVar6 = (ulong)*(char *)((long)puVar1 + local_b0);
        if (-1 < *(char *)((long)puVar1 + local_b0)) {
          uVar6 = NEON_cmlt(*puVar1,0,1);
          uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
          uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
          uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
          uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
          local_b0 = (ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3;
          uVar6 = (ulong)*(byte *)((long)puVar1 + local_b0);
        }
        lVar14 = param_1[3];
        lVar13 = param_1[2];
        lVar12 = param_2[1];
        lVar11 = *param_2;
        lVar8 = param_2[2];
        bVar3 = bVar3 >> 1;
        *(byte *)((long)puVar1 + local_b0) = bVar3;
        *(byte *)((long)puVar1 + (local_b0 - 8 & uVar2) + 8) = bVar3;
        puVar1[local_b0 * -4 + -3] = lVar12;
        puVar1[local_b0 * -4 + -4] = lVar11;
        puVar1[local_b0 * -4 + -2] = lVar8;
        *(undefined4 *)(puVar1 + local_b0 * -4 + -1) = param_3;
        param_1[3] = lVar14 + 1;
        param_1[2] = lVar13 - (uVar6 & 1);
        return 0;
      }
      bVar4 = true;
    }
    else {
      uVar10 = NEON_cmlt(uVar16,0,1);
      if (uVar10 != 0) {
        uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        local_b0 = uVar6 + ((ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3) & uVar2;
        goto LAB_0075e3fc;
      }
      bVar4 = false;
    }
    lVar8 = lVar8 + 8;
    uVar6 = lVar8 + uVar6 & uVar2;
    uVar16 = *(undefined8 *)((long)puVar1 + uVar6);
    uVar10 = NEON_cmeq(uVar16,uVar15,1);
    uVar10 = uVar10 & 0x8080808080808080;
  } while( true );
}


// ===== 0075e540  FUN_0075e540 =====

undefined4 FUN_0075e540(long *param_1,long *param_2)

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
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong local_a0;
  
                    /* try { // try from 0075e56c to 0075e72b has its CatchHandler @ 0075e750 */
  uVar6 = FUN_0076af58(param_1 + 4);
  if (param_1[2] == 0) {
    <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(alloc[c1f8e832b0d782c7]::string::String,())>>::
    reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<alloc[c1f8e832b0d782c7]::string::
    String_();
  }
  bVar4 = false;
  puVar1 = (undefined8 *)*param_1;
  uVar2 = param_1[1];
  lVar8 = 0;
  bVar3 = (byte)(uVar6 >> 0x38);
  bVar9 = bVar3 >> 1;
  uVar15 = CONCAT17(bVar9,CONCAT16(bVar9,CONCAT15(bVar9,CONCAT14(bVar9,CONCAT13(bVar9,CONCAT12(bVar9
                                                  ,CONCAT11(bVar9,bVar9)))))));
  __s1 = (void *)param_2[1];
  __n = param_2[2];
  uVar6 = uVar6 & uVar2;
  uVar16 = *(undefined8 *)((long)puVar1 + uVar6);
  uVar10 = NEON_cmeq(uVar16,uVar15,1);
  uVar10 = uVar10 & 0x8080808080808080;
  do {
    for (; uVar10 != 0; uVar10 = uVar10 - 1 & uVar10) {
      uVar7 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar6 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) & uVar2;
      if ((__n == puVar1[uVar7 * -3 + -1]) &&
         (iVar5 = memcmp(__s1,(void *)puVar1[uVar7 * -3 + -2],__n), iVar5 == 0)) {
        if (*param_2 != 0) {
          free(__s1);
        }
        return 1;
      }
    }
    if (bVar4) {
LAB_0075e634:
      uVar16 = NEON_cmeq(uVar16,0xffffffffffffffff,1);
      bVar9 = NEON_umaxv(uVar16,1);
      if ((bVar9 & 1) != 0) {
        uVar6 = (ulong)*(char *)((long)puVar1 + local_a0);
        if (-1 < *(char *)((long)puVar1 + local_a0)) {
          uVar6 = NEON_cmlt(*puVar1,0,1);
          uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
          uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
          uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
          uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
          local_a0 = (ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3;
          uVar6 = (ulong)*(byte *)((long)puVar1 + local_a0);
        }
        lVar12 = param_1[3];
        lVar11 = param_1[2];
        lVar14 = param_2[1];
        lVar13 = *param_2;
        lVar8 = param_2[2];
        *(byte *)((long)puVar1 + local_a0) = bVar3 >> 1;
        *(byte *)((long)puVar1 + (local_a0 - 8 & uVar2) + 8) = bVar3 >> 1;
        puVar1[local_a0 * -3 + -2] = lVar14;
        puVar1[local_a0 * -3 + -3] = lVar13;
        puVar1[local_a0 * -3 + -1] = lVar8;
        param_1[3] = lVar12 + 1;
        param_1[2] = lVar11 - (uVar6 & 1);
        return 0;
      }
      bVar4 = true;
    }
    else {
      uVar10 = NEON_cmlt(uVar16,0,1);
      if (uVar10 != 0) {
        uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        local_a0 = uVar6 + ((ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3) & uVar2;
        goto LAB_0075e634;
      }
      bVar4 = false;
    }
    lVar8 = lVar8 + 8;
    uVar6 = lVar8 + uVar6 & uVar2;
    uVar16 = *(undefined8 *)((long)puVar1 + uVar6);
    uVar10 = NEON_cmeq(uVar16,uVar15,1);
    uVar10 = uVar10 & 0x8080808080808080;
  } while( true );
}


// ===== 0075e770  FUN_0075e770 =====

void FUN_0075e770(undefined8 *param_1,long *param_2,long param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  byte bVar3;
  bool bVar4;
  ulong in_x11;
  ulong extraout_x11;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  byte bVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  if (param_2[2] == 0) {
                    /* try { // try from 0075e984 to 0075e99b has its CatchHandler @ 0075e9c0 */
    <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildRoleId,libdiscore_common[1cb84820f9455fa0]::stores::guild_role::GuildRole)>>
    ::reserve_rehash::
    <hashbrown[32fc5d502e7f9af5]::map::make_hasher<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildRoleId,libdiscore_common[1cb84820f9455fa0]::stores::guild_role::GuildRole,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::_closure_0_>
              (param_2,1,param_2 + 4,1);
    in_x11 = extraout_x11;
  }
  bVar4 = false;
  puVar1 = (undefined8 *)*param_2;
  uVar2 = param_2[1];
  lVar5 = 0;
  bVar3 = (byte)((ulong)(param_3 * 0x517cc1b727220a95) >> 0x38);
  bVar12 = bVar3 >> 1;
  uVar8 = CONCAT17(bVar12,CONCAT16(bVar12,CONCAT15(bVar12,CONCAT14(bVar12,CONCAT13(bVar12,CONCAT12(
                                                  bVar12,CONCAT11(bVar12,bVar12)))))));
  uVar7 = param_3 * 0x517cc1b727220a95 & uVar2;
  uVar13 = *(undefined8 *)((long)puVar1 + uVar7);
  uVar16 = NEON_cmeq(uVar13,uVar8,1);
  do {
    for (uVar16 = uVar16 & 0x8080808080808080; uVar16 != 0; uVar16 = uVar16 - 1 & uVar16) {
      uVar6 = (uVar16 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar16 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar7 + ((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3) & uVar2;
      if (param_3 == puVar1[uVar6 * -0x1d + -0x1d]) {
        uVar13 = puVar1[uVar6 * -0x1d + -8];
        uVar9 = puVar1[uVar6 * -0x1d + -5];
        uVar8 = puVar1[uVar6 * -0x1d + -6];
        param_1[0x15] = puVar1[uVar6 * -0x1d + -7];
        param_1[0x14] = uVar13;
        param_1[0x17] = uVar9;
        param_1[0x16] = uVar8;
        uVar13 = puVar1[uVar6 * -0x1d + -4];
        uVar9 = puVar1[uVar6 * -0x1d + -1];
        uVar8 = puVar1[uVar6 * -0x1d + -2];
        param_1[0x19] = puVar1[uVar6 * -0x1d + -3];
        param_1[0x18] = uVar13;
        param_1[0x1b] = uVar9;
        param_1[0x1a] = uVar8;
        uVar9 = puVar1[uVar6 * -0x1d + -0x10];
        uVar8 = puVar1[uVar6 * -0x1d + -0xd];
        uVar13 = puVar1[uVar6 * -0x1d + -0xe];
        param_1[0xd] = puVar1[uVar6 * -0x1d + -0xf];
        param_1[0xc] = uVar9;
        param_1[0xf] = uVar8;
        param_1[0xe] = uVar13;
        uVar9 = puVar1[uVar6 * -0x1d + -0xc];
        uVar8 = puVar1[uVar6 * -0x1d + -9];
        uVar13 = puVar1[uVar6 * -0x1d + -10];
        param_1[0x11] = puVar1[uVar6 * -0x1d + -0xb];
        param_1[0x10] = uVar9;
        param_1[0x13] = uVar8;
        param_1[0x12] = uVar13;
        uVar14 = *param_4;
        uVar10 = param_4[3];
        uVar9 = param_4[2];
        uVar8 = puVar1[uVar6 * -0x1d + -0x1b];
        uVar13 = puVar1[uVar6 * -0x1d + -0x1c];
        uVar18 = puVar1[uVar6 * -0x1d + -0x19];
        uVar17 = puVar1[uVar6 * -0x1d + -0x1a];
        puVar1[uVar6 * -0x1d + -0x1b] = param_4[1];
        puVar1[uVar6 * -0x1d + -0x1c] = uVar14;
        puVar1[uVar6 * -0x1d + -0x19] = uVar10;
        puVar1[uVar6 * -0x1d + -0x1a] = uVar9;
        uVar10 = puVar1[uVar6 * -0x1d + -0x17];
        uVar9 = puVar1[uVar6 * -0x1d + -0x18];
        uVar20 = puVar1[uVar6 * -0x1d + -0x15];
        uVar19 = puVar1[uVar6 * -0x1d + -0x16];
        uVar15 = param_4[9];
        uVar14 = param_4[8];
        uVar22 = param_4[0xb];
        uVar21 = param_4[10];
        param_1[1] = uVar8;
        *param_1 = uVar13;
        param_1[3] = uVar18;
        param_1[2] = uVar17;
        uVar18 = param_4[5];
        uVar17 = param_4[4];
        uVar24 = param_4[7];
        uVar23 = param_4[6];
        param_1[5] = uVar10;
        param_1[4] = uVar9;
        param_1[7] = uVar20;
        param_1[6] = uVar19;
        uVar8 = puVar1[uVar6 * -0x1d + -0x13];
        uVar13 = puVar1[uVar6 * -0x1d + -0x14];
        uVar10 = puVar1[uVar6 * -0x1d + -0x11];
        uVar9 = puVar1[uVar6 * -0x1d + -0x12];
        puVar1[uVar6 * -0x1d + -0x13] = uVar15;
        puVar1[uVar6 * -0x1d + -0x14] = uVar14;
        puVar1[uVar6 * -0x1d + -0x11] = uVar22;
        puVar1[uVar6 * -0x1d + -0x12] = uVar21;
        puVar1[uVar6 * -0x1d + -0x17] = uVar18;
        puVar1[uVar6 * -0x1d + -0x18] = uVar17;
        puVar1[uVar6 * -0x1d + -0x15] = uVar24;
        puVar1[uVar6 * -0x1d + -0x16] = uVar23;
        param_1[9] = uVar8;
        param_1[8] = uVar13;
        param_1[0xb] = uVar10;
        param_1[10] = uVar9;
        uVar9 = param_4[0x10];
        uVar8 = param_4[0x13];
        uVar13 = param_4[0x12];
        uVar14 = param_4[0xd];
        uVar10 = param_4[0xc];
        uVar17 = param_4[0xf];
        uVar15 = param_4[0xe];
        puVar1[uVar6 * -0x1d + -0xb] = param_4[0x11];
        puVar1[uVar6 * -0x1d + -0xc] = uVar9;
        puVar1[uVar6 * -0x1d + -9] = uVar8;
        puVar1[uVar6 * -0x1d + -10] = uVar13;
        puVar1[uVar6 * -0x1d + -0xf] = uVar14;
        puVar1[uVar6 * -0x1d + -0x10] = uVar10;
        puVar1[uVar6 * -0x1d + -0xd] = uVar17;
        puVar1[uVar6 * -0x1d + -0xe] = uVar15;
        uVar9 = param_4[0x18];
        uVar8 = param_4[0x1b];
        uVar13 = param_4[0x1a];
        uVar14 = param_4[0x15];
        uVar10 = param_4[0x14];
        uVar17 = param_4[0x17];
        uVar15 = param_4[0x16];
        puVar1[uVar6 * -0x1d + -3] = param_4[0x19];
        puVar1[uVar6 * -0x1d + -4] = uVar9;
        puVar1[uVar6 * -0x1d + -1] = uVar8;
        puVar1[uVar6 * -0x1d + -2] = uVar13;
        puVar1[uVar6 * -0x1d + -7] = uVar14;
        puVar1[uVar6 * -0x1d + -8] = uVar10;
        puVar1[uVar6 * -0x1d + -5] = uVar17;
        puVar1[uVar6 * -0x1d + -6] = uVar15;
        return;
      }
    }
    if (bVar4) {
LAB_0075e830:
      uVar13 = NEON_cmeq(uVar13,0xffffffffffffffff,1);
      bVar12 = NEON_umaxv(uVar13,1);
      if ((bVar12 & 1) != 0) {
        uVar16 = (ulong)*(char *)((long)puVar1 + in_x11);
        if (-1 < *(char *)((long)puVar1 + in_x11)) {
          uVar16 = NEON_cmlt(*puVar1,0,1);
          uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
          uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
          uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
          uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
          in_x11 = (ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3;
          uVar16 = (ulong)*(byte *)((long)puVar1 + in_x11);
        }
        lVar11 = param_2[3];
        lVar5 = param_2[2];
        *(byte *)((long)puVar1 + in_x11) = bVar3 >> 1;
        *(byte *)((long)puVar1 + (in_x11 - 8 & uVar2) + 8) = bVar3 >> 1;
        puVar1[in_x11 * -0x1d + -0x1d] = param_3;
        uVar15 = param_4[0x11];
        uVar14 = param_4[0x10];
        uVar10 = param_4[0x13];
        uVar9 = param_4[0x12];
        param_2[3] = lVar11 + 1;
        param_2[2] = lVar5 - (uVar16 & 1);
        uVar8 = param_4[0xd];
        uVar13 = param_4[0xc];
        uVar18 = param_4[0xf];
        uVar17 = param_4[0xe];
        puVar1[in_x11 * -0x1d + -0xb] = uVar15;
        puVar1[in_x11 * -0x1d + -0xc] = uVar14;
        puVar1[in_x11 * -0x1d + -9] = uVar10;
        puVar1[in_x11 * -0x1d + -10] = uVar9;
        puVar1[in_x11 * -0x1d + -0xf] = uVar8;
        puVar1[in_x11 * -0x1d + -0x10] = uVar13;
        puVar1[in_x11 * -0x1d + -0xd] = uVar18;
        puVar1[in_x11 * -0x1d + -0xe] = uVar17;
        uVar9 = param_4[8];
        uVar8 = param_4[0xb];
        uVar13 = param_4[10];
        uVar14 = param_4[5];
        uVar10 = param_4[4];
        uVar17 = param_4[7];
        uVar15 = param_4[6];
        puVar1[in_x11 * -0x1d + -0x13] = param_4[9];
        puVar1[in_x11 * -0x1d + -0x14] = uVar9;
        puVar1[in_x11 * -0x1d + -0x11] = uVar8;
        puVar1[in_x11 * -0x1d + -0x12] = uVar13;
        puVar1[in_x11 * -0x1d + -0x17] = uVar14;
        puVar1[in_x11 * -0x1d + -0x18] = uVar10;
        puVar1[in_x11 * -0x1d + -0x15] = uVar17;
        puVar1[in_x11 * -0x1d + -0x16] = uVar15;
        uVar9 = *param_4;
        uVar8 = param_4[3];
        uVar13 = param_4[2];
        puVar1[in_x11 * -0x1d + -0x1b] = param_4[1];
        puVar1[in_x11 * -0x1d + -0x1c] = uVar9;
        puVar1[in_x11 * -0x1d + -0x19] = uVar8;
        puVar1[in_x11 * -0x1d + -0x1a] = uVar13;
        uVar9 = param_4[0x18];
        uVar8 = param_4[0x1b];
        uVar13 = param_4[0x1a];
        uVar14 = param_4[0x15];
        uVar10 = param_4[0x14];
        uVar17 = param_4[0x17];
        uVar15 = param_4[0x16];
        puVar1[in_x11 * -0x1d + -3] = param_4[0x19];
        puVar1[in_x11 * -0x1d + -4] = uVar9;
        puVar1[in_x11 * -0x1d + -1] = uVar8;
        puVar1[in_x11 * -0x1d + -2] = uVar13;
        puVar1[in_x11 * -0x1d + -7] = uVar14;
        puVar1[in_x11 * -0x1d + -8] = uVar10;
        puVar1[in_x11 * -0x1d + -5] = uVar17;
        puVar1[in_x11 * -0x1d + -6] = uVar15;
        *param_1 = 2;
        return;
      }
      bVar4 = true;
    }
    else {
      uVar16 = NEON_cmlt(uVar13,0,1);
      if (uVar16 != 0) {
        uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
        in_x11 = uVar7 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3) & uVar2;
        goto LAB_0075e830;
      }
      bVar4 = false;
      in_x11 = 0;
    }
    lVar5 = lVar5 + 8;
    uVar7 = lVar5 + uVar7 & uVar2;
    uVar13 = *(undefined8 *)((long)puVar1 + uVar7);
    uVar16 = NEON_cmeq(uVar13,uVar8,1);
  } while( true );
}


// ===== 0075e9d8  FUN_0075e9d8 =====

void FUN_0075e9d8(undefined8 *param_1,long *param_2,long param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  byte bVar3;
  bool bVar4;
  ulong in_x11;
  ulong extraout_x11;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  byte bVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  
  if (param_2[2] == 0) {
                    /* try { // try from 0075eb5c to 0075eb73 has its CatchHandler @ 0075eb98 */
    <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::core::snowflake::UserId,libdiscore_common[1cb84820f9455fa0]::stores::notes::UserNote)>>
    ::reserve_rehash::
    <hashbrown[32fc5d502e7f9af5]::map::make_hasher<libdiscore_common[1cb84820f9455fa0]::core::snowflake::UserId,libdiscore_common[1cb84820f9455fa0]::stores::notes::UserNote,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::_closure_0_>
              (param_2,1,param_2 + 4,1);
    in_x11 = extraout_x11;
  }
  bVar4 = false;
  puVar1 = (undefined8 *)*param_2;
  uVar2 = param_2[1];
  lVar5 = 0;
  bVar3 = (byte)((ulong)(param_3 * 0x517cc1b727220a95) >> 0x38);
  bVar11 = bVar3 >> 1;
  uVar8 = CONCAT17(bVar11,CONCAT16(bVar11,CONCAT15(bVar11,CONCAT14(bVar11,CONCAT13(bVar11,CONCAT12(
                                                  bVar11,CONCAT11(bVar11,bVar11)))))));
  uVar6 = param_3 * 0x517cc1b727220a95 & uVar2;
  uVar12 = *(undefined8 *)((long)puVar1 + uVar6);
  uVar14 = NEON_cmeq(uVar12,uVar8,1);
  do {
    for (uVar14 = uVar14 & 0x8080808080808080; uVar14 != 0; uVar14 = uVar14 - 1 & uVar14) {
      uVar7 = (uVar14 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar14 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar6 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) & uVar2;
      if (param_3 == puVar1[uVar7 * -5 + -5]) {
        uVar12 = puVar1[uVar7 * -5 + -4];
        uVar9 = puVar1[uVar7 * -5 + -1];
        uVar8 = puVar1[uVar7 * -5 + -2];
        param_1[1] = puVar1[uVar7 * -5 + -3];
        *param_1 = uVar12;
        param_1[3] = uVar9;
        param_1[2] = uVar8;
        uVar12 = *param_4;
        uVar9 = param_4[3];
        uVar8 = param_4[2];
        puVar1[uVar7 * -5 + -3] = param_4[1];
        puVar1[uVar7 * -5 + -4] = uVar12;
        puVar1[uVar7 * -5 + -1] = uVar9;
        puVar1[uVar7 * -5 + -2] = uVar8;
        return;
      }
    }
    if (bVar4) {
LAB_0075ea98:
      uVar12 = NEON_cmeq(uVar12,0xffffffffffffffff,1);
      bVar11 = NEON_umaxv(uVar12,1);
      if ((bVar11 & 1) != 0) {
        uVar14 = (ulong)*(char *)((long)puVar1 + in_x11);
        if (-1 < *(char *)((long)puVar1 + in_x11)) {
          uVar14 = NEON_cmlt(*puVar1,0,1);
          uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
          uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
          uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
          uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
          in_x11 = (ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3;
          uVar14 = (ulong)*(byte *)((long)puVar1 + in_x11);
        }
        lVar10 = param_2[3];
        lVar5 = param_2[2];
        *(byte *)((long)puVar1 + in_x11) = bVar3 >> 1;
        *(byte *)((long)puVar1 + (in_x11 - 8 & uVar2) + 8) = bVar3 >> 1;
        puVar1[in_x11 * -5 + -5] = param_3;
        uVar13 = param_4[1];
        uVar9 = *param_4;
        uVar8 = param_4[3];
        uVar12 = param_4[2];
        param_2[3] = lVar10 + 1;
        param_2[2] = lVar5 - (uVar14 & 1);
        puVar1[in_x11 * -5 + -3] = uVar13;
        puVar1[in_x11 * -5 + -4] = uVar9;
        puVar1[in_x11 * -5 + -1] = uVar8;
        puVar1[in_x11 * -5 + -2] = uVar12;
        *(undefined1 *)(param_1 + 3) = 2;
        return;
      }
      bVar4 = true;
    }
    else {
      uVar14 = NEON_cmlt(uVar12,0,1);
      if (uVar14 != 0) {
        uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
        uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
        uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
        in_x11 = uVar6 + ((ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3) & uVar2;
        goto LAB_0075ea98;
      }
      bVar4 = false;
      in_x11 = 0;
    }
    lVar5 = lVar5 + 8;
    uVar6 = lVar5 + uVar6 & uVar2;
    uVar12 = *(undefined8 *)((long)puVar1 + uVar6);
    uVar14 = NEON_cmeq(uVar12,uVar8,1);
  } while( true );
}


// ===== 0075ebd0  FUN_0075ebd0 =====

void FUN_0075ebd0(undefined8 *param_1,long *param_2,long param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  byte bVar3;
  bool bVar4;
  ulong in_x11;
  ulong extraout_x11;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  byte bVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong uVar17;
  
  if (param_2[2] == 0) {
                    /* try { // try from 0075edb4 to 0075edcb has its CatchHandler @ 0075edf0 */
    <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::core::snowflake::EmojiId,libdiscore_common[1cb84820f9455fa0]::stores::guild_emoji::RawGuildEmoji)>>
    ::reserve_rehash::
    <hashbrown[32fc5d502e7f9af5]::map::make_hasher<libdiscore_common[1cb84820f9455fa0]::core::snowflake::EmojiId,libdiscore_common[1cb84820f9455fa0]::stores::guild_emoji::RawGuildEmoji,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::_closure_0_>
              (param_2,1,param_2 + 4,1);
    in_x11 = extraout_x11;
  }
  bVar4 = false;
  puVar1 = (undefined8 *)*param_2;
  uVar2 = param_2[1];
  lVar5 = 0;
  bVar3 = (byte)((ulong)(param_3 * 0x517cc1b727220a95) >> 0x38);
  bVar13 = bVar3 >> 1;
  uVar8 = CONCAT17(bVar13,CONCAT16(bVar13,CONCAT15(bVar13,CONCAT14(bVar13,CONCAT13(bVar13,CONCAT12(
                                                  bVar13,CONCAT11(bVar13,bVar13)))))));
  uVar6 = param_3 * 0x517cc1b727220a95 & uVar2;
  uVar14 = *(undefined8 *)((long)puVar1 + uVar6);
  uVar17 = NEON_cmeq(uVar14,uVar8,1);
  do {
    for (uVar17 = uVar17 & 0x8080808080808080; uVar17 != 0; uVar17 = uVar17 - 1 & uVar17) {
      uVar7 = (uVar17 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar17 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar6 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) & uVar2;
      if (param_3 == puVar1[uVar7 * -0xc + -0xc]) {
        uVar8 = puVar1[uVar7 * -0xc + -7];
        uVar10 = puVar1[uVar7 * -0xc + -4];
        uVar9 = puVar1[uVar7 * -0xc + -5];
        uVar16 = puVar1[uVar7 * -0xc + -2];
        uVar15 = puVar1[uVar7 * -0xc + -3];
        uVar14 = puVar1[uVar7 * -0xc + -1];
        param_1[5] = puVar1[uVar7 * -0xc + -6];
        param_1[4] = uVar8;
        param_1[7] = uVar10;
        param_1[6] = uVar9;
        uVar9 = param_4[1];
        uVar8 = *param_4;
        uVar11 = param_4[3];
        uVar10 = param_4[2];
        param_1[9] = uVar16;
        param_1[8] = uVar15;
        uVar16 = puVar1[uVar7 * -0xc + -10];
        uVar15 = puVar1[uVar7 * -0xc + -0xb];
        param_1[10] = uVar14;
        puVar1[uVar7 * -0xc + -10] = uVar9;
        puVar1[uVar7 * -0xc + -0xb] = uVar8;
        uVar8 = puVar1[uVar7 * -0xc + -8];
        uVar14 = puVar1[uVar7 * -0xc + -9];
        puVar1[uVar7 * -0xc + -8] = uVar11;
        puVar1[uVar7 * -0xc + -9] = uVar10;
        param_1[1] = uVar16;
        *param_1 = uVar15;
        param_1[3] = uVar8;
        param_1[2] = uVar14;
        uVar10 = param_4[4];
        uVar9 = param_4[7];
        uVar8 = param_4[6];
        uVar14 = param_4[10];
        uVar15 = param_4[9];
        uVar11 = param_4[8];
        puVar1[uVar7 * -0xc + -6] = param_4[5];
        puVar1[uVar7 * -0xc + -7] = uVar10;
        puVar1[uVar7 * -0xc + -1] = uVar14;
        puVar1[uVar7 * -0xc + -2] = uVar15;
        puVar1[uVar7 * -0xc + -3] = uVar11;
        puVar1[uVar7 * -0xc + -4] = uVar9;
        puVar1[uVar7 * -0xc + -5] = uVar8;
        return;
      }
    }
    if (bVar4) {
LAB_0075ec90:
      uVar14 = NEON_cmeq(uVar14,0xffffffffffffffff,1);
      bVar13 = NEON_umaxv(uVar14,1);
      if ((bVar13 & 1) != 0) {
        uVar17 = (ulong)*(char *)((long)puVar1 + in_x11);
        if (-1 < *(char *)((long)puVar1 + in_x11)) {
          uVar17 = NEON_cmlt(*puVar1,0,1);
          uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
          uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
          uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
          uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
          in_x11 = (ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3;
          uVar17 = (ulong)*(byte *)((long)puVar1 + in_x11);
        }
        lVar12 = param_2[3];
        lVar5 = param_2[2];
        *(byte *)((long)puVar1 + in_x11) = bVar3 >> 1;
        *(byte *)((long)puVar1 + (in_x11 - 8 & uVar2) + 8) = bVar3 >> 1;
        puVar1[in_x11 * -0xc + -0xc] = param_3;
        uVar10 = param_4[1];
        uVar9 = *param_4;
        uVar8 = param_4[3];
        uVar14 = param_4[2];
        param_2[3] = lVar12 + 1;
        param_2[2] = lVar5 - (uVar17 & 1);
        puVar1[in_x11 * -0xc + -8] = uVar8;
        puVar1[in_x11 * -0xc + -9] = uVar14;
        puVar1[in_x11 * -0xc + -10] = uVar10;
        puVar1[in_x11 * -0xc + -0xb] = uVar9;
        uVar15 = param_4[7];
        uVar11 = param_4[6];
        uVar8 = param_4[9];
        uVar14 = param_4[8];
        uVar10 = param_4[5];
        uVar9 = param_4[4];
        puVar1[in_x11 * -0xc + -1] = param_4[10];
        puVar1[in_x11 * -0xc + -2] = uVar8;
        puVar1[in_x11 * -0xc + -3] = uVar14;
        puVar1[in_x11 * -0xc + -4] = uVar15;
        puVar1[in_x11 * -0xc + -5] = uVar11;
        puVar1[in_x11 * -0xc + -6] = uVar10;
        puVar1[in_x11 * -0xc + -7] = uVar9;
        *param_1 = 2;
        return;
      }
      bVar4 = true;
    }
    else {
      uVar17 = NEON_cmlt(uVar14,0,1);
      if (uVar17 != 0) {
        uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
        uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
        uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
        uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
        in_x11 = uVar6 + ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3) & uVar2;
        goto LAB_0075ec90;
      }
      bVar4 = false;
      in_x11 = 0;
    }
    lVar5 = lVar5 + 8;
    uVar6 = lVar5 + uVar6 & uVar2;
    uVar14 = *(undefined8 *)((long)puVar1 + uVar6);
    uVar17 = NEON_cmeq(uVar14,uVar8,1);
  } while( true );
}


// ===== 0075ee08  FUN_0075ee08 =====

void FUN_0075ee08(undefined8 *param_1,long *param_2,long param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  byte bVar3;
  bool bVar4;
  ulong in_x11;
  ulong extraout_x11;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  byte bVar12;
  undefined8 uVar13;
  ulong uVar14;
  
  if (param_2[2] == 0) {
                    /* try { // try from 0075ef88 to 0075ef9f has its CatchHandler @ 0075efc4 */
    <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::stores::store_database::partition::Partition<libdiscore_common[1cb84820f9455fa0]::core::snowflake::EmojiId,libdiscore_common[1cb84820f9455fa0]::stores::guild_emoji::RawGuildEmoji>)>>
    ::reserve_rehash::
    <hashbrown[32fc5d502e7f9af5]::map::make_hasher<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::stores::store_database::partition::Partition<libdiscore_common[1cb84820f9455fa0]::core::snowflake::EmojiId,libdiscore_common[1cb84820f9455fa0]::stores::guild_emoji::RawGuildEmoji>,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::_closure_0_>
              (param_2,1,param_2 + 4,1);
    in_x11 = extraout_x11;
  }
  bVar4 = false;
  puVar1 = (undefined8 *)*param_2;
  uVar2 = param_2[1];
  lVar5 = 0;
  bVar3 = (byte)((ulong)(param_3 * 0x517cc1b727220a95) >> 0x38);
  bVar12 = bVar3 >> 1;
  uVar8 = CONCAT17(bVar12,CONCAT16(bVar12,CONCAT15(bVar12,CONCAT14(bVar12,CONCAT13(bVar12,CONCAT12(
                                                  bVar12,CONCAT11(bVar12,bVar12)))))));
  uVar6 = param_3 * 0x517cc1b727220a95 & uVar2;
  uVar13 = *(undefined8 *)((long)puVar1 + uVar6);
  uVar14 = NEON_cmeq(uVar13,uVar8,1);
  do {
    for (uVar14 = uVar14 & 0x8080808080808080; uVar14 != 0; uVar14 = uVar14 - 1 & uVar14) {
      uVar7 = (uVar14 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar14 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar6 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) & uVar2;
      if (param_3 == puVar1[uVar7 * -5 + -5]) {
        uVar13 = puVar1[uVar7 * -5 + -4];
        uVar9 = puVar1[uVar7 * -5 + -1];
        uVar8 = puVar1[uVar7 * -5 + -2];
        param_1[1] = puVar1[uVar7 * -5 + -3];
        *param_1 = uVar13;
        param_1[3] = uVar9;
        param_1[2] = uVar8;
        uVar13 = *param_4;
        uVar9 = param_4[3];
        uVar8 = param_4[2];
        puVar1[uVar7 * -5 + -3] = param_4[1];
        puVar1[uVar7 * -5 + -4] = uVar13;
        puVar1[uVar7 * -5 + -1] = uVar9;
        puVar1[uVar7 * -5 + -2] = uVar8;
        return;
      }
    }
    if (bVar4) {
LAB_0075eec8:
      uVar13 = NEON_cmeq(uVar13,0xffffffffffffffff,1);
      bVar12 = NEON_umaxv(uVar13,1);
      if ((bVar12 & 1) != 0) {
        uVar14 = (ulong)*(char *)((long)puVar1 + in_x11);
        if (-1 < *(char *)((long)puVar1 + in_x11)) {
          uVar14 = NEON_cmlt(*puVar1,0,1);
          uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
          uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
          uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
          uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
          in_x11 = (ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3;
          uVar14 = (ulong)*(byte *)((long)puVar1 + in_x11);
        }
        lVar10 = param_2[3];
        lVar5 = param_2[2];
        *(byte *)((long)puVar1 + in_x11) = bVar3 >> 1;
        *(byte *)((long)puVar1 + (in_x11 - 8 & uVar2) + 8) = bVar3 >> 1;
        param_2[3] = lVar10 + 1;
        param_2[2] = lVar5 - (uVar14 & 1);
        uVar8 = param_4[1];
        uVar13 = *param_4;
        uVar11 = param_4[3];
        uVar9 = param_4[2];
        puVar1[in_x11 * -5 + -5] = param_3;
        puVar1[in_x11 * -5 + -3] = uVar8;
        puVar1[in_x11 * -5 + -4] = uVar13;
        puVar1[in_x11 * -5 + -1] = uVar11;
        puVar1[in_x11 * -5 + -2] = uVar9;
        *param_1 = 0;
        return;
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
        in_x11 = uVar6 + ((ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3) & uVar2;
        goto LAB_0075eec8;
      }
      bVar4 = false;
      in_x11 = 0;
    }
    lVar5 = lVar5 + 8;
    uVar6 = lVar5 + uVar6 & uVar2;
    uVar13 = *(undefined8 *)((long)puVar1 + uVar6);
    uVar14 = NEON_cmeq(uVar13,uVar8,1);
  } while( true );
}


// ===== 0075efdc  FUN_0075efdc =====

void FUN_0075efdc(undefined8 *param_1,long *param_2,long param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  byte bVar3;
  bool bVar4;
  ulong in_x11;
  ulong extraout_x11;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  byte bVar12;
  undefined8 uVar13;
  ulong uVar14;
  
  if (param_2[2] == 0) {
                    /* try { // try from 0075f15c to 0075f173 has its CatchHandler @ 0075f198 */
    <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::stores::store_database::partition::Partition<libdiscore_common[1cb84820f9455fa0]::core::snowflake::EmojiId,libdiscore_common[1cb84820f9455fa0]::stores::guild_emoji::RawGuildEmoji>)>>
    ::reserve_rehash::
    <hashbrown[32fc5d502e7f9af5]::map::make_hasher<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::stores::store_database::partition::Partition<libdiscore_common[1cb84820f9455fa0]::core::snowflake::EmojiId,libdiscore_common[1cb84820f9455fa0]::stores::guild_emoji::RawGuildEmoji>,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::_closure_0_>
              (param_2,1,param_2 + 4,1);
    in_x11 = extraout_x11;
  }
  bVar4 = false;
  puVar1 = (undefined8 *)*param_2;
  uVar2 = param_2[1];
  lVar5 = 0;
  bVar3 = (byte)((ulong)(param_3 * 0x517cc1b727220a95) >> 0x38);
  bVar12 = bVar3 >> 1;
  uVar8 = CONCAT17(bVar12,CONCAT16(bVar12,CONCAT15(bVar12,CONCAT14(bVar12,CONCAT13(bVar12,CONCAT12(
                                                  bVar12,CONCAT11(bVar12,bVar12)))))));
  uVar6 = param_3 * 0x517cc1b727220a95 & uVar2;
  uVar13 = *(undefined8 *)((long)puVar1 + uVar6);
  uVar14 = NEON_cmeq(uVar13,uVar8,1);
  do {
    for (uVar14 = uVar14 & 0x8080808080808080; uVar14 != 0; uVar14 = uVar14 - 1 & uVar14) {
      uVar7 = (uVar14 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar14 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar6 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) & uVar2;
      if (param_3 == puVar1[uVar7 * -5 + -5]) {
        uVar13 = puVar1[uVar7 * -5 + -4];
        uVar9 = puVar1[uVar7 * -5 + -1];
        uVar8 = puVar1[uVar7 * -5 + -2];
        param_1[1] = puVar1[uVar7 * -5 + -3];
        *param_1 = uVar13;
        param_1[3] = uVar9;
        param_1[2] = uVar8;
        uVar13 = *param_4;
        uVar9 = param_4[3];
        uVar8 = param_4[2];
        puVar1[uVar7 * -5 + -3] = param_4[1];
        puVar1[uVar7 * -5 + -4] = uVar13;
        puVar1[uVar7 * -5 + -1] = uVar9;
        puVar1[uVar7 * -5 + -2] = uVar8;
        return;
      }
    }
    if (bVar4) {
LAB_0075f09c:
      uVar13 = NEON_cmeq(uVar13,0xffffffffffffffff,1);
      bVar12 = NEON_umaxv(uVar13,1);
      if ((bVar12 & 1) != 0) {
        uVar14 = (ulong)*(char *)((long)puVar1 + in_x11);
        if (-1 < *(char *)((long)puVar1 + in_x11)) {
          uVar14 = NEON_cmlt(*puVar1,0,1);
          uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
          uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
          uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
          uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
          in_x11 = (ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3;
          uVar14 = (ulong)*(byte *)((long)puVar1 + in_x11);
        }
        lVar10 = param_2[3];
        lVar5 = param_2[2];
        *(byte *)((long)puVar1 + in_x11) = bVar3 >> 1;
        *(byte *)((long)puVar1 + (in_x11 - 8 & uVar2) + 8) = bVar3 >> 1;
        param_2[3] = lVar10 + 1;
        param_2[2] = lVar5 - (uVar14 & 1);
        uVar8 = param_4[1];
        uVar13 = *param_4;
        uVar11 = param_4[3];
        uVar9 = param_4[2];
        puVar1[in_x11 * -5 + -5] = param_3;
        puVar1[in_x11 * -5 + -3] = uVar8;
        puVar1[in_x11 * -5 + -4] = uVar13;
        puVar1[in_x11 * -5 + -1] = uVar11;
        puVar1[in_x11 * -5 + -2] = uVar9;
        *param_1 = 0;
        return;
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
        in_x11 = uVar6 + ((ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3) & uVar2;
        goto LAB_0075f09c;
      }
      bVar4 = false;
      in_x11 = 0;
    }
    lVar5 = lVar5 + 8;
    uVar6 = lVar5 + uVar6 & uVar2;
    uVar13 = *(undefined8 *)((long)puVar1 + uVar6);
    uVar14 = NEON_cmeq(uVar13,uVar8,1);
  } while( true );
}


// ===== 0075f1b0  FUN_0075f1b0 =====

void FUN_0075f1b0(undefined8 *param_1,long *param_2,long param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  byte bVar3;
  bool bVar4;
  ulong in_x11;
  ulong extraout_x11;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  byte bVar12;
  undefined8 uVar13;
  ulong uVar14;
  
  if (param_2[2] == 0) {
                    /* try { // try from 0075f330 to 0075f347 has its CatchHandler @ 0075f36c */
    <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::stores::store_database::partition::Partition<libdiscore_common[1cb84820f9455fa0]::core::snowflake::EmojiId,libdiscore_common[1cb84820f9455fa0]::stores::guild_emoji::RawGuildEmoji>)>>
    ::reserve_rehash::
    <hashbrown[32fc5d502e7f9af5]::map::make_hasher<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::stores::store_database::partition::Partition<libdiscore_common[1cb84820f9455fa0]::core::snowflake::EmojiId,libdiscore_common[1cb84820f9455fa0]::stores::guild_emoji::RawGuildEmoji>,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::_closure_0_>
              (param_2,1,param_2 + 4,1);
    in_x11 = extraout_x11;
  }
  bVar4 = false;
  puVar1 = (undefined8 *)*param_2;
  uVar2 = param_2[1];
  lVar5 = 0;
  bVar3 = (byte)((ulong)(param_3 * 0x517cc1b727220a95) >> 0x38);
  bVar12 = bVar3 >> 1;
  uVar8 = CONCAT17(bVar12,CONCAT16(bVar12,CONCAT15(bVar12,CONCAT14(bVar12,CONCAT13(bVar12,CONCAT12(
                                                  bVar12,CONCAT11(bVar12,bVar12)))))));
  uVar6 = param_3 * 0x517cc1b727220a95 & uVar2;
  uVar13 = *(undefined8 *)((long)puVar1 + uVar6);
  uVar14 = NEON_cmeq(uVar13,uVar8,1);
  do {
    for (uVar14 = uVar14 & 0x8080808080808080; uVar14 != 0; uVar14 = uVar14 - 1 & uVar14) {
      uVar7 = (uVar14 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar14 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar6 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) & uVar2;
      if (param_3 == puVar1[uVar7 * -5 + -5]) {
        uVar13 = puVar1[uVar7 * -5 + -4];
        uVar9 = puVar1[uVar7 * -5 + -1];
        uVar8 = puVar1[uVar7 * -5 + -2];
        param_1[1] = puVar1[uVar7 * -5 + -3];
        *param_1 = uVar13;
        param_1[3] = uVar9;
        param_1[2] = uVar8;
        uVar13 = *param_4;
        uVar9 = param_4[3];
        uVar8 = param_4[2];
        puVar1[uVar7 * -5 + -3] = param_4[1];
        puVar1[uVar7 * -5 + -4] = uVar13;
        puVar1[uVar7 * -5 + -1] = uVar9;
        puVar1[uVar7 * -5 + -2] = uVar8;
        return;
      }
    }
    if (bVar4) {
LAB_0075f270:
      uVar13 = NEON_cmeq(uVar13,0xffffffffffffffff,1);
      bVar12 = NEON_umaxv(uVar13,1);
      if ((bVar12 & 1) != 0) {
        uVar14 = (ulong)*(char *)((long)puVar1 + in_x11);
        if (-1 < *(char *)((long)puVar1 + in_x11)) {
          uVar14 = NEON_cmlt(*puVar1,0,1);
          uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
          uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
          uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
          uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
          in_x11 = (ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3;
          uVar14 = (ulong)*(byte *)((long)puVar1 + in_x11);
        }
        lVar10 = param_2[3];
        lVar5 = param_2[2];
        *(byte *)((long)puVar1 + in_x11) = bVar3 >> 1;
        *(byte *)((long)puVar1 + (in_x11 - 8 & uVar2) + 8) = bVar3 >> 1;
        param_2[3] = lVar10 + 1;
        param_2[2] = lVar5 - (uVar14 & 1);
        uVar8 = param_4[1];
        uVar13 = *param_4;
        uVar11 = param_4[3];
        uVar9 = param_4[2];
        puVar1[in_x11 * -5 + -5] = param_3;
        puVar1[in_x11 * -5 + -3] = uVar8;
        puVar1[in_x11 * -5 + -4] = uVar13;
        puVar1[in_x11 * -5 + -1] = uVar11;
        puVar1[in_x11 * -5 + -2] = uVar9;
        *param_1 = 0;
        return;
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
        in_x11 = uVar6 + ((ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3) & uVar2;
        goto LAB_0075f270;
      }
      bVar4 = false;
      in_x11 = 0;
    }
    lVar5 = lVar5 + 8;
    uVar6 = lVar5 + uVar6 & uVar2;
    uVar13 = *(undefined8 *)((long)puVar1 + uVar6);
    uVar14 = NEON_cmeq(uVar13,uVar8,1);
  } while( true );
}


// ===== 0075f384  FUN_0075f384 =====

void FUN_0075f384(undefined8 *param_1,long *param_2,long param_3,void *param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  byte bVar3;
  bool bVar4;
  ulong in_x11;
  ulong extraout_x11;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  byte bVar10;
  undefined8 uVar11;
  ulong uVar12;
  
  if (param_2[2] == 0) {
                    /* try { // try from 0075f528 to 0075f53f has its CatchHandler @ 0075f564 */
    <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::stores::guilds::Guild)>>
    ::reserve_rehash::
    <hashbrown[32fc5d502e7f9af5]::map::make_hasher<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::stores::guilds::Guild,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::_closure_0_>
              (param_2,1,param_2 + 4,1);
    in_x11 = extraout_x11;
  }
  bVar4 = false;
  puVar1 = (undefined8 *)*param_2;
  uVar2 = param_2[1];
  lVar5 = 0;
  bVar3 = (byte)((ulong)(param_3 * 0x517cc1b727220a95) >> 0x38);
  bVar10 = bVar3 >> 1;
  uVar8 = CONCAT17(bVar10,CONCAT16(bVar10,CONCAT15(bVar10,CONCAT14(bVar10,CONCAT13(bVar10,CONCAT12(
                                                  bVar10,CONCAT11(bVar10,bVar10)))))));
  uVar6 = param_3 * 0x517cc1b727220a95 & uVar2;
  uVar11 = *(undefined8 *)((long)puVar1 + uVar6);
  uVar12 = NEON_cmeq(uVar11,uVar8,1);
  do {
    for (uVar12 = uVar12 & 0x8080808080808080; uVar12 != 0; uVar12 = uVar12 - 1 & uVar12) {
      uVar7 = (uVar12 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar12 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar6 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) & uVar2;
      if (param_3 == puVar1[uVar7 * -0x44 + -0x44]) {
        memcpy(param_1,puVar1 + uVar7 * -0x44 + -0x43,0x218);
        memcpy(puVar1 + uVar7 * -0x44 + -0x43,param_4,0x218);
        return;
      }
    }
    if (bVar4) {
LAB_0075f448:
      uVar11 = NEON_cmeq(uVar11,0xffffffffffffffff,1);
      bVar10 = NEON_umaxv(uVar11,1);
      if ((bVar10 & 1) != 0) {
        uVar12 = (ulong)*(char *)((long)puVar1 + in_x11);
        if (-1 < *(char *)((long)puVar1 + in_x11)) {
          uVar12 = NEON_cmlt(*puVar1,0,1);
          uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
          uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
          uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
          uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
          in_x11 = (ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3;
          uVar12 = (ulong)*(byte *)((long)puVar1 + in_x11);
        }
        lVar9 = param_2[3];
        lVar5 = param_2[2];
        *(byte *)((long)puVar1 + in_x11) = bVar3 >> 1;
        *(byte *)((long)puVar1 + (in_x11 - 8 & uVar2) + 8) = bVar3 >> 1;
        param_2[3] = lVar9 + 1;
        param_2[2] = lVar5 - (uVar12 & 1);
        puVar1[in_x11 * -0x44 + -0x44] = param_3;
        memcpy(puVar1 + in_x11 * -0x44 + -0x43,param_4,0x218);
        *param_1 = 2;
        return;
      }
      bVar4 = true;
    }
    else {
      uVar12 = NEON_cmlt(uVar11,0,1);
      if (uVar12 != 0) {
        uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
        uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
        uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
        uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
        in_x11 = uVar6 + ((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3) & uVar2;
        goto LAB_0075f448;
      }
      bVar4 = false;
      in_x11 = 0;
    }
    lVar5 = lVar5 + 8;
    uVar6 = lVar5 + uVar6 & uVar2;
    uVar11 = *(undefined8 *)((long)puVar1 + uVar6);
    uVar12 = NEON_cmeq(uVar11,uVar8,1);
  } while( true );
}


// ===== 0075f57c  FUN_0075f57c =====

undefined8 FUN_0075f57c(long *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  bool bVar5;
  ulong uVar6;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  byte bVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  long local_18;
  
  local_18 = param_2;
  uVar6 = FUN_0076b084(param_1 + 4,&local_18);
  uVar13 = extraout_x11;
  if (param_1[2] == 0) {
    <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::core::
    snowflake::GuildId,())>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::
    make_hasher<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId_();
    uVar13 = extraout_x11_00;
  }
  bVar5 = false;
  puVar1 = (undefined8 *)*param_1;
  uVar2 = param_1[1];
  lVar7 = 0;
  bVar4 = (byte)(uVar6 >> 0x38);
  bVar10 = bVar4 >> 1;
  uVar8 = CONCAT17(bVar10,CONCAT16(bVar10,CONCAT15(bVar10,CONCAT14(bVar10,CONCAT13(bVar10,CONCAT12(
                                                  bVar10,CONCAT11(bVar10,bVar10)))))));
  uVar6 = uVar6 & uVar2;
  uVar11 = *(undefined8 *)((long)puVar1 + uVar6);
  uVar12 = NEON_cmeq(uVar11,uVar8,1);
  do {
    for (uVar12 = uVar12 & 0x8080808080808080; uVar12 != 0; uVar12 = uVar12 - 1 & uVar12) {
      uVar3 = (uVar12 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar12 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      if (param_2 ==
          puVar1[-1 - (uVar6 + ((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3) & uVar2)]) {
        return 1;
      }
    }
    if (bVar5) {
LAB_0075f62c:
      uVar11 = NEON_cmeq(uVar11,0xffffffffffffffff,1);
      bVar10 = NEON_umaxv(uVar11,1);
      if ((bVar10 & 1) != 0) {
        uVar6 = (ulong)*(char *)((long)puVar1 + uVar13);
        if (-1 < *(char *)((long)puVar1 + uVar13)) {
          uVar13 = NEON_cmlt(*puVar1,0,1);
          uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
          uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
          uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
          uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
          uVar13 = (ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3;
          uVar6 = (ulong)*(byte *)((long)puVar1 + uVar13);
        }
        lVar9 = param_1[3];
        lVar7 = param_1[2];
        *(byte *)((long)puVar1 + uVar13) = bVar4 >> 1;
        *(byte *)((long)puVar1 + (uVar13 - 8 & uVar2) + 8) = bVar4 >> 1;
        puVar1[-1 - uVar13] = param_2;
        param_1[3] = lVar9 + 1;
        param_1[2] = lVar7 - (uVar6 & 1);
        return 0;
      }
      bVar5 = true;
    }
    else {
      uVar13 = NEON_cmlt(uVar11,0,1);
      if (uVar13 != 0) {
        uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
        uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        uVar13 = uVar6 + ((ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3) & uVar2;
        goto LAB_0075f62c;
      }
      bVar5 = false;
      uVar13 = 0;
    }
    lVar7 = lVar7 + 8;
    uVar6 = lVar7 + uVar6 & uVar2;
    uVar11 = *(undefined8 *)((long)puVar1 + uVar6);
    uVar12 = NEON_cmeq(uVar11,uVar8,1);
  } while( true );
}


// ===== 0075f710  FUN_0075f710 =====

void FUN_0075f710(undefined8 *param_1,long *param_2,long param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  byte bVar3;
  bool bVar4;
  ulong in_x11;
  ulong extraout_x11;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  byte bVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  if (param_2[2] == 0) {
                    /* try { // try from 0075f8dc to 0075f8f3 has its CatchHandler @ 0075f918 */
    <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::core::snowflake::StickerId,libdiscore_common[1cb84820f9455fa0]::stores::guild_sticker::GuildSticker)>>
    ::reserve_rehash::
    <hashbrown[32fc5d502e7f9af5]::map::make_hasher<libdiscore_common[1cb84820f9455fa0]::core::snowflake::StickerId,libdiscore_common[1cb84820f9455fa0]::stores::guild_sticker::GuildSticker,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::_closure_0_>
              (param_2,1,param_2 + 4,1);
    in_x11 = extraout_x11;
  }
  bVar4 = false;
  puVar1 = (undefined8 *)*param_2;
  uVar2 = param_2[1];
  lVar5 = 0;
  bVar3 = (byte)((ulong)(param_3 * 0x517cc1b727220a95) >> 0x38);
  bVar12 = bVar3 >> 1;
  uVar8 = CONCAT17(bVar12,CONCAT16(bVar12,CONCAT15(bVar12,CONCAT14(bVar12,CONCAT13(bVar12,CONCAT12(
                                                  bVar12,CONCAT11(bVar12,bVar12)))))));
  uVar6 = param_3 * 0x517cc1b727220a95 & uVar2;
  uVar13 = *(undefined8 *)((long)puVar1 + uVar6);
  uVar16 = NEON_cmeq(uVar13,uVar8,1);
  do {
    for (uVar16 = uVar16 & 0x8080808080808080; uVar16 != 0; uVar16 = uVar16 - 1 & uVar16) {
      uVar7 = (uVar16 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar16 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar6 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) & uVar2;
      if (param_3 == puVar1[uVar7 * -0xf + -0xf]) {
        uVar13 = puVar1[uVar7 * -0xf + -8];
        uVar9 = puVar1[uVar7 * -0xf + -5];
        uVar8 = puVar1[uVar7 * -0xf + -6];
        uVar20 = param_4[5];
        uVar19 = param_4[4];
        uVar18 = puVar1[uVar7 * -0xf + -0xb];
        uVar17 = puVar1[uVar7 * -0xf + -0xc];
        uVar15 = puVar1[uVar7 * -0xf + -9];
        uVar14 = puVar1[uVar7 * -0xf + -10];
        param_1[7] = puVar1[uVar7 * -0xf + -7];
        param_1[6] = uVar13;
        param_1[9] = uVar9;
        param_1[8] = uVar8;
        uVar10 = puVar1[uVar7 * -0xf + -3];
        uVar9 = puVar1[uVar7 * -0xf + -4];
        uVar8 = puVar1[uVar7 * -0xf + -1];
        uVar13 = puVar1[uVar7 * -0xf + -2];
        param_1[5] = uVar15;
        param_1[4] = uVar14;
        param_1[0xb] = uVar10;
        param_1[10] = uVar9;
        param_1[0xd] = uVar8;
        param_1[0xc] = uVar13;
        uVar10 = param_4[1];
        uVar9 = *param_4;
        uVar15 = param_4[3];
        uVar14 = param_4[2];
        uVar8 = puVar1[uVar7 * -0xf + -0xd];
        uVar13 = puVar1[uVar7 * -0xf + -0xe];
        puVar1[uVar7 * -0xf + -9] = uVar20;
        puVar1[uVar7 * -0xf + -10] = uVar19;
        puVar1[uVar7 * -0xf + -0xd] = uVar10;
        puVar1[uVar7 * -0xf + -0xe] = uVar9;
        puVar1[uVar7 * -0xf + -0xb] = uVar15;
        puVar1[uVar7 * -0xf + -0xc] = uVar14;
        param_1[1] = uVar8;
        *param_1 = uVar13;
        param_1[3] = uVar18;
        param_1[2] = uVar17;
        uVar9 = param_4[10];
        uVar8 = param_4[0xd];
        uVar13 = param_4[0xc];
        uVar17 = param_4[7];
        uVar15 = param_4[6];
        uVar14 = param_4[9];
        uVar10 = param_4[8];
        puVar1[uVar7 * -0xf + -3] = param_4[0xb];
        puVar1[uVar7 * -0xf + -4] = uVar9;
        puVar1[uVar7 * -0xf + -1] = uVar8;
        puVar1[uVar7 * -0xf + -2] = uVar13;
        puVar1[uVar7 * -0xf + -7] = uVar17;
        puVar1[uVar7 * -0xf + -8] = uVar15;
        puVar1[uVar7 * -0xf + -5] = uVar14;
        puVar1[uVar7 * -0xf + -6] = uVar10;
        return;
      }
    }
    if (bVar4) {
LAB_0075f7d0:
      uVar13 = NEON_cmeq(uVar13,0xffffffffffffffff,1);
      bVar12 = NEON_umaxv(uVar13,1);
      if ((bVar12 & 1) != 0) {
        uVar16 = (ulong)*(char *)((long)puVar1 + in_x11);
        if (-1 < *(char *)((long)puVar1 + in_x11)) {
          uVar16 = NEON_cmlt(*puVar1,0,1);
          uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
          uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
          uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
          uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
          in_x11 = (ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3;
          uVar16 = (ulong)*(byte *)((long)puVar1 + in_x11);
        }
        lVar11 = param_2[3];
        lVar5 = param_2[2];
        *(byte *)((long)puVar1 + in_x11) = bVar3 >> 1;
        *(byte *)((long)puVar1 + (in_x11 - 8 & uVar2) + 8) = bVar3 >> 1;
        puVar1[in_x11 * -0xf + -0xf] = param_3;
        uVar15 = param_4[3];
        uVar14 = param_4[2];
        uVar10 = param_4[5];
        uVar9 = param_4[4];
        param_2[3] = lVar11 + 1;
        param_2[2] = lVar5 - (uVar16 & 1);
        uVar8 = param_4[1];
        uVar13 = *param_4;
        puVar1[in_x11 * -0xf + -0xb] = uVar15;
        puVar1[in_x11 * -0xf + -0xc] = uVar14;
        puVar1[in_x11 * -0xf + -9] = uVar10;
        puVar1[in_x11 * -0xf + -10] = uVar9;
        puVar1[in_x11 * -0xf + -0xd] = uVar8;
        puVar1[in_x11 * -0xf + -0xe] = uVar13;
        uVar9 = param_4[10];
        uVar8 = param_4[0xd];
        uVar13 = param_4[0xc];
        uVar14 = param_4[7];
        uVar10 = param_4[6];
        uVar17 = param_4[9];
        uVar15 = param_4[8];
        puVar1[in_x11 * -0xf + -3] = param_4[0xb];
        puVar1[in_x11 * -0xf + -4] = uVar9;
        puVar1[in_x11 * -0xf + -1] = uVar8;
        puVar1[in_x11 * -0xf + -2] = uVar13;
        puVar1[in_x11 * -0xf + -7] = uVar14;
        puVar1[in_x11 * -0xf + -8] = uVar10;
        puVar1[in_x11 * -0xf + -5] = uVar17;
        puVar1[in_x11 * -0xf + -6] = uVar15;
        *param_1 = 2;
        return;
      }
      bVar4 = true;
    }
    else {
      uVar16 = NEON_cmlt(uVar13,0,1);
      if (uVar16 != 0) {
        uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
        in_x11 = uVar6 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3) & uVar2;
        goto LAB_0075f7d0;
      }
      bVar4 = false;
      in_x11 = 0;
    }
    lVar5 = lVar5 + 8;
    uVar6 = lVar5 + uVar6 & uVar2;
    uVar13 = *(undefined8 *)((long)puVar1 + uVar6);
    uVar16 = NEON_cmeq(uVar13,uVar8,1);
  } while( true );
}


// ===== 0075f930  FUN_0075f930 =====

undefined8 FUN_0075f930(long *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  bool bVar5;
  ulong uVar6;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  byte bVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  long local_18;
  
  local_18 = param_2;
  uVar6 = FUN_0076b1a0(param_1 + 4,&local_18);
  uVar13 = extraout_x11;
  if (param_1[2] == 0) {
    <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::stores::
    blocked_domains::DomainHash,())>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::
    make_hasher<libdiscore_common[1cb84820f9455fa0]::stores::blocked_domains::DomainHash_();
    uVar13 = extraout_x11_00;
  }
  bVar5 = false;
  puVar1 = (undefined8 *)*param_1;
  uVar2 = param_1[1];
  lVar7 = 0;
  bVar4 = (byte)(uVar6 >> 0x38);
  bVar10 = bVar4 >> 1;
  uVar8 = CONCAT17(bVar10,CONCAT16(bVar10,CONCAT15(bVar10,CONCAT14(bVar10,CONCAT13(bVar10,CONCAT12(
                                                  bVar10,CONCAT11(bVar10,bVar10)))))));
  uVar6 = uVar6 & uVar2;
  uVar11 = *(undefined8 *)((long)puVar1 + uVar6);
  uVar12 = NEON_cmeq(uVar11,uVar8,1);
  do {
    for (uVar12 = uVar12 & 0x8080808080808080; uVar12 != 0; uVar12 = uVar12 - 1 & uVar12) {
      uVar3 = (uVar12 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar12 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      if (param_2 ==
          puVar1[-1 - (uVar6 + ((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3) & uVar2)]) {
        return 1;
      }
    }
    if (bVar5) {
LAB_0075f9e0:
      uVar11 = NEON_cmeq(uVar11,0xffffffffffffffff,1);
      bVar10 = NEON_umaxv(uVar11,1);
      if ((bVar10 & 1) != 0) {
        uVar6 = (ulong)*(char *)((long)puVar1 + uVar13);
        if (-1 < *(char *)((long)puVar1 + uVar13)) {
          uVar13 = NEON_cmlt(*puVar1,0,1);
          uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
          uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
          uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
          uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
          uVar13 = (ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3;
          uVar6 = (ulong)*(byte *)((long)puVar1 + uVar13);
        }
        lVar9 = param_1[3];
        lVar7 = param_1[2];
        *(byte *)((long)puVar1 + uVar13) = bVar4 >> 1;
        *(byte *)((long)puVar1 + (uVar13 - 8 & uVar2) + 8) = bVar4 >> 1;
        puVar1[-1 - uVar13] = param_2;
        param_1[3] = lVar9 + 1;
        param_1[2] = lVar7 - (uVar6 & 1);
        return 0;
      }
      bVar5 = true;
    }
    else {
      uVar13 = NEON_cmlt(uVar11,0,1);
      if (uVar13 != 0) {
        uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
        uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        uVar13 = uVar6 + ((ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3) & uVar2;
        goto LAB_0075f9e0;
      }
      bVar5 = false;
      uVar13 = 0;
    }
    lVar7 = lVar7 + 8;
    uVar6 = lVar7 + uVar6 & uVar2;
    uVar11 = *(undefined8 *)((long)puVar1 + uVar6);
    uVar12 = NEON_cmeq(uVar11,uVar8,1);
  } while( true );
}


// ===== 0075fac4  FUN_0075fac4 =====

void FUN_0075fac4(undefined8 *param_1,long *param_2,int param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  byte bVar3;
  bool bVar4;
  ulong uVar5;
  ulong extraout_x12;
  ulong extraout_x12_00;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  byte bVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  int local_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  local_d8 = param_3;
  uVar5 = FUN_0076b3f4(param_2 + 4,&local_d8);
  uVar17 = extraout_x12;
  if (param_2[2] == 0) {
                    /* try { // try from 0075fd24 to 0075fd37 has its CatchHandler @ 0075fd5c */
    <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(u32,libdiscore_common[1cb84820f9455fa0]::core::http::ActiveRequest)>>
    ::reserve_rehash::
    <hashbrown[32fc5d502e7f9af5]::map::make_hasher<u32,libdiscore_common[1cb84820f9455fa0]::core::http::ActiveRequest,std[17aff9129faa4dc5]::hash::random::RandomState>::_closure_0_>
              (param_2,1,param_2 + 4,1);
    uVar17 = extraout_x12_00;
  }
  bVar4 = false;
  puVar1 = (undefined8 *)*param_2;
  uVar2 = param_2[1];
  lVar6 = 0;
  bVar3 = (byte)(uVar5 >> 0x38);
  bVar11 = bVar3 >> 1;
  uVar8 = CONCAT17(bVar11,CONCAT16(bVar11,CONCAT15(bVar11,CONCAT14(bVar11,CONCAT13(bVar11,CONCAT12(
                                                  bVar11,CONCAT11(bVar11,bVar11)))))));
  uVar5 = uVar5 & uVar2;
  uVar12 = *(undefined8 *)((long)puVar1 + uVar5);
  uVar16 = NEON_cmeq(uVar12,uVar8,1);
  do {
    for (uVar16 = uVar16 & 0x8080808080808080; uVar16 != 0; uVar16 = uVar16 - 1 & uVar16) {
      uVar7 = (uVar16 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar16 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar5 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) & uVar2;
      if (param_3 == *(int *)(puVar1 + uVar7 * -0x13 + -0x13)) {
        uVar8 = puVar1[uVar7 * -0x13 + -5];
        uVar12 = puVar1[uVar7 * -0x13 + -6];
        uVar10 = puVar1[uVar7 * -0x13 + -3];
        uVar9 = puVar1[uVar7 * -0x13 + -4];
        uVar13 = puVar1[uVar7 * -0x13 + -2];
        uVar19 = puVar1[uVar7 * -0x13 + -9];
        uVar18 = puVar1[uVar7 * -0x13 + -10];
        param_1[0x11] = puVar1[uVar7 * -0x13 + -1];
        param_1[0x10] = uVar13;
        uVar14 = puVar1[uVar7 * -0x13 + -0x11];
        uVar13 = puVar1[uVar7 * -0x13 + -0x12];
        uVar21 = puVar1[uVar7 * -0x13 + -0xf];
        uVar20 = puVar1[uVar7 * -0x13 + -0x10];
        param_1[0xd] = uVar8;
        param_1[0xc] = uVar12;
        param_1[0xf] = uVar10;
        param_1[0xe] = uVar9;
        uVar9 = *param_4;
        uVar8 = puVar1[uVar7 * -0x13 + -0xd];
        uVar12 = puVar1[uVar7 * -0x13 + -0xe];
        uVar23 = puVar1[uVar7 * -0x13 + -0xb];
        uVar22 = puVar1[uVar7 * -0x13 + -0xc];
        puVar1[uVar7 * -0x13 + -0x11] = param_4[1];
        puVar1[uVar7 * -0x13 + -0x12] = uVar9;
        param_1[1] = uVar14;
        *param_1 = uVar13;
        param_1[3] = uVar21;
        param_1[2] = uVar20;
        param_1[5] = uVar8;
        param_1[4] = uVar12;
        uVar10 = param_4[7];
        uVar9 = param_4[6];
        uVar8 = param_4[9];
        uVar12 = param_4[8];
        uVar14 = param_4[3];
        uVar13 = param_4[2];
        uVar21 = param_4[5];
        uVar20 = param_4[4];
        param_1[7] = uVar23;
        param_1[6] = uVar22;
        param_1[9] = uVar19;
        param_1[8] = uVar18;
        puVar1[uVar7 * -0x13 + -0xb] = uVar10;
        puVar1[uVar7 * -0x13 + -0xc] = uVar9;
        puVar1[uVar7 * -0x13 + -9] = uVar8;
        puVar1[uVar7 * -0x13 + -10] = uVar12;
        uVar12 = puVar1[uVar7 * -0x13 + -8];
        puVar1[uVar7 * -0x13 + -0xf] = uVar14;
        puVar1[uVar7 * -0x13 + -0x10] = uVar13;
        puVar1[uVar7 * -0x13 + -0xd] = uVar21;
        puVar1[uVar7 * -0x13 + -0xe] = uVar20;
        param_1[0xb] = puVar1[uVar7 * -0x13 + -7];
        param_1[10] = uVar12;
        uVar9 = param_4[0xe];
        uVar8 = param_4[0x11];
        uVar12 = param_4[0x10];
        uVar13 = param_4[0xb];
        uVar10 = param_4[10];
        uVar18 = param_4[0xd];
        uVar14 = param_4[0xc];
        puVar1[uVar7 * -0x13 + -3] = param_4[0xf];
        puVar1[uVar7 * -0x13 + -4] = uVar9;
        puVar1[uVar7 * -0x13 + -1] = uVar8;
        puVar1[uVar7 * -0x13 + -2] = uVar12;
        puVar1[uVar7 * -0x13 + -7] = uVar13;
        puVar1[uVar7 * -0x13 + -8] = uVar10;
        puVar1[uVar7 * -0x13 + -5] = uVar18;
        puVar1[uVar7 * -0x13 + -6] = uVar14;
        return;
      }
    }
    if (bVar4) {
LAB_0075fb94:
      uVar12 = NEON_cmeq(uVar12,0xffffffffffffffff,1);
      bVar11 = NEON_umaxv(uVar12,1);
      if ((bVar11 & 1) != 0) {
        uVar5 = (ulong)*(char *)((long)puVar1 + uVar17);
        if (-1 < *(char *)((long)puVar1 + uVar17)) {
          uVar17 = NEON_cmlt(*puVar1,0,1);
          uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
          uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
          uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
          uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
          uVar17 = (ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3;
          uVar5 = (ulong)*(byte *)((long)puVar1 + uVar17);
        }
        uStack_98 = (undefined4)param_4[7];
        uStack_94 = (undefined4)((ulong)param_4[7] >> 0x20);
        local_a0 = (undefined4)param_4[6];
        uStack_9c = (undefined4)((ulong)param_4[6] >> 0x20);
        uStack_88 = (undefined4)param_4[9];
        uStack_84 = (undefined4)((ulong)param_4[9] >> 0x20);
        uStack_90 = (undefined4)param_4[8];
        uStack_8c = (undefined4)((ulong)param_4[8] >> 0x20);
        uStack_c8 = (undefined4)param_4[1];
        uStack_c4 = (undefined4)((ulong)param_4[1] >> 0x20);
        local_d0 = (undefined4)*param_4;
        uStack_cc = (undefined4)((ulong)*param_4 >> 0x20);
        uStack_b8 = (undefined4)param_4[3];
        uStack_b4 = (undefined4)((ulong)param_4[3] >> 0x20);
        uStack_c0 = (undefined4)param_4[2];
        uStack_bc = (undefined4)((ulong)param_4[2] >> 0x20);
        uStack_a8 = (undefined4)param_4[5];
        uStack_a4 = (undefined4)((ulong)param_4[5] >> 0x20);
        local_b0 = (undefined4)param_4[4];
        uStack_ac = (undefined4)((ulong)param_4[4] >> 0x20);
        uVar14 = param_4[0xf];
        uVar13 = param_4[0xe];
        uStack_48 = (undefined4)param_4[0x11];
        uStack_44 = (undefined4)((ulong)param_4[0x11] >> 0x20);
        local_50 = (undefined4)param_4[0x10];
        uStack_4c = (undefined4)((ulong)param_4[0x10] >> 0x20);
        uVar8 = param_4[0xb];
        uVar12 = param_4[10];
        uVar10 = param_4[0xd];
        uVar9 = param_4[0xc];
        *(byte *)((long)puVar1 + uVar17) = bVar3 >> 1;
        *(byte *)((long)puVar1 + (uVar17 - 8 & uVar2) + 8) = bVar3 >> 1;
        uStack_68 = (undefined4)uVar10;
        uStack_64 = (undefined4)((ulong)uVar10 >> 0x20);
        local_70 = (undefined4)uVar9;
        uStack_6c = (undefined4)((ulong)uVar9 >> 0x20);
        uStack_58 = (undefined4)uVar14;
        uStack_54 = (undefined4)((ulong)uVar14 >> 0x20);
        uStack_60 = (undefined4)uVar13;
        uStack_5c = (undefined4)((ulong)uVar13 >> 0x20);
        lVar15 = param_2[3];
        lVar6 = param_2[2];
        uStack_78 = (undefined4)uVar8;
        uStack_74 = (undefined4)((ulong)uVar8 >> 0x20);
        local_80 = (undefined4)uVar12;
        uStack_7c = (undefined4)((ulong)uVar12 >> 0x20);
        *(int *)(puVar1 + uVar17 * -0x13 + -0x13) = param_3;
        *(ulong *)((long)puVar1 + uVar17 * -0x98 + -0x2c) = CONCAT44(uStack_68,uStack_6c);
        *(ulong *)((long)puVar1 + uVar17 * -0x98 + -0x34) = CONCAT44(local_70,uStack_74);
        param_2[3] = lVar15 + 1;
        param_2[2] = lVar6 - (uVar5 & 1);
        *(ulong *)((long)puVar1 + uVar17 * -0x98 + -0xc) = CONCAT44(uStack_48,uStack_4c);
        *(ulong *)((long)puVar1 + uVar17 * -0x98 + -0x14) = CONCAT44(local_50,uStack_54);
        *(ulong *)((long)puVar1 + uVar17 * -0x98 + -0x1c) = CONCAT44(uStack_58,uStack_5c);
        *(ulong *)((long)puVar1 + uVar17 * -0x98 + -0x24) = CONCAT44(uStack_60,uStack_64);
        *(ulong *)((long)puVar1 + uVar17 * -0x98 + -0x6c) = CONCAT44(uStack_a8,uStack_ac);
        *(ulong *)((long)puVar1 + uVar17 * -0x98 + -0x74) = CONCAT44(local_b0,uStack_b4);
        *(ulong *)((long)puVar1 + uVar17 * -0x98 + -0x5c) = CONCAT44(uStack_98,uStack_9c);
        *(ulong *)((long)puVar1 + uVar17 * -0x98 + -100) = CONCAT44(local_a0,uStack_a4);
        *(ulong *)((long)puVar1 + uVar17 * -0x98 + -0x4c) = CONCAT44(uStack_88,uStack_8c);
        *(ulong *)((long)puVar1 + uVar17 * -0x98 + -0x54) = CONCAT44(uStack_90,uStack_94);
        *(ulong *)((long)puVar1 + uVar17 * -0x98 + -0x3c) = CONCAT44(uStack_78,uStack_7c);
        *(ulong *)((long)puVar1 + uVar17 * -0x98 + -0x44) = CONCAT44(local_80,uStack_84);
        *(undefined4 *)((long)puVar1 + uVar17 * -0x98 + -4) = uStack_44;
        *(ulong *)((long)puVar1 + uVar17 * -0x98 + -0x8c) = CONCAT44(uStack_c8,uStack_cc);
        *(ulong *)((long)puVar1 + uVar17 * -0x98 + -0x94) = CONCAT44(local_d0,uStack_d4);
        *(ulong *)((long)puVar1 + uVar17 * -0x98 + -0x7c) = CONCAT44(uStack_b8,uStack_bc);
        *(ulong *)((long)puVar1 + uVar17 * -0x98 + -0x84) = CONCAT44(uStack_c0,uStack_c4);
        *param_1 = 0xffffffffffffffff;
        return;
      }
      bVar4 = true;
    }
    else {
      uVar17 = NEON_cmlt(uVar12,0,1);
      if (uVar17 != 0) {
        uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
        uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
        uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
        uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
        uVar17 = uVar5 + ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3) & uVar2;
        goto LAB_0075fb94;
      }
      bVar4 = false;
      uVar17 = 0;
    }
    lVar6 = lVar6 + 8;
    uVar5 = lVar6 + uVar5 & uVar2;
    uVar12 = *(undefined8 *)((long)puVar1 + uVar5);
    uVar16 = NEON_cmeq(uVar12,uVar8,1);
  } while( true );
}


// ===== 0075fd74  FUN_0075fd74 =====

void FUN_0075fd74(undefined8 *param_1,long *param_2,long param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  byte bVar3;
  bool bVar4;
  ulong in_x11;
  ulong extraout_x11;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  byte bVar12;
  undefined8 uVar13;
  ulong uVar14;
  
  if (param_2[2] == 0) {
                    /* try { // try from 0075fef4 to 0075ff0b has its CatchHandler @ 0075ff30 */
    <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(u64,libdiscore_common[1cb84820f9455fa0]::stores::store_database::partition::Partition<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::stores::guilds::Guild>)>>
    ::reserve_rehash::
    <hashbrown[32fc5d502e7f9af5]::map::make_hasher<u64,libdiscore_common[1cb84820f9455fa0]::stores::store_database::partition::Partition<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::stores::guilds::Guild>,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::_closure_0_>
              (param_2,1,param_2 + 4,1);
    in_x11 = extraout_x11;
  }
  bVar4 = false;
  puVar1 = (undefined8 *)*param_2;
  uVar2 = param_2[1];
  lVar5 = 0;
  bVar3 = (byte)((ulong)(param_3 * 0x517cc1b727220a95) >> 0x38);
  bVar12 = bVar3 >> 1;
  uVar8 = CONCAT17(bVar12,CONCAT16(bVar12,CONCAT15(bVar12,CONCAT14(bVar12,CONCAT13(bVar12,CONCAT12(
                                                  bVar12,CONCAT11(bVar12,bVar12)))))));
  uVar6 = param_3 * 0x517cc1b727220a95 & uVar2;
  uVar13 = *(undefined8 *)((long)puVar1 + uVar6);
  uVar14 = NEON_cmeq(uVar13,uVar8,1);
  do {
    for (uVar14 = uVar14 & 0x8080808080808080; uVar14 != 0; uVar14 = uVar14 - 1 & uVar14) {
      uVar7 = (uVar14 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar14 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar6 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) & uVar2;
      if (param_3 == puVar1[uVar7 * -5 + -5]) {
        uVar13 = puVar1[uVar7 * -5 + -4];
        uVar9 = puVar1[uVar7 * -5 + -1];
        uVar8 = puVar1[uVar7 * -5 + -2];
        param_1[1] = puVar1[uVar7 * -5 + -3];
        *param_1 = uVar13;
        param_1[3] = uVar9;
        param_1[2] = uVar8;
        uVar13 = *param_4;
        uVar9 = param_4[3];
        uVar8 = param_4[2];
        puVar1[uVar7 * -5 + -3] = param_4[1];
        puVar1[uVar7 * -5 + -4] = uVar13;
        puVar1[uVar7 * -5 + -1] = uVar9;
        puVar1[uVar7 * -5 + -2] = uVar8;
        return;
      }
    }
    if (bVar4) {
LAB_0075fe34:
      uVar13 = NEON_cmeq(uVar13,0xffffffffffffffff,1);
      bVar12 = NEON_umaxv(uVar13,1);
      if ((bVar12 & 1) != 0) {
        uVar14 = (ulong)*(char *)((long)puVar1 + in_x11);
        if (-1 < *(char *)((long)puVar1 + in_x11)) {
          uVar14 = NEON_cmlt(*puVar1,0,1);
          uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
          uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
          uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
          uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
          in_x11 = (ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3;
          uVar14 = (ulong)*(byte *)((long)puVar1 + in_x11);
        }
        lVar10 = param_2[3];
        lVar5 = param_2[2];
        *(byte *)((long)puVar1 + in_x11) = bVar3 >> 1;
        *(byte *)((long)puVar1 + (in_x11 - 8 & uVar2) + 8) = bVar3 >> 1;
        param_2[3] = lVar10 + 1;
        param_2[2] = lVar5 - (uVar14 & 1);
        uVar8 = param_4[1];
        uVar13 = *param_4;
        uVar11 = param_4[3];
        uVar9 = param_4[2];
        puVar1[in_x11 * -5 + -5] = param_3;
        puVar1[in_x11 * -5 + -3] = uVar8;
        puVar1[in_x11 * -5 + -4] = uVar13;
        puVar1[in_x11 * -5 + -1] = uVar11;
        puVar1[in_x11 * -5 + -2] = uVar9;
        *param_1 = 0;
        return;
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
        in_x11 = uVar6 + ((ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3) & uVar2;
        goto LAB_0075fe34;
      }
      bVar4 = false;
      in_x11 = 0;
    }
    lVar5 = lVar5 + 8;
    uVar6 = lVar5 + uVar6 & uVar2;
    uVar13 = *(undefined8 *)((long)puVar1 + uVar6);
    uVar14 = NEON_cmeq(uVar13,uVar8,1);
  } while( true );
}


// ===== 0075ff48  FUN_0075ff48 =====

void FUN_0075ff48(undefined8 *param_1,long *param_2,long param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  byte bVar3;
  bool bVar4;
  ulong in_x11;
  ulong extraout_x11;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  byte bVar12;
  undefined8 uVar13;
  ulong uVar14;
  
  if (param_2[2] == 0) {
                    /* try { // try from 007600c8 to 007600df has its CatchHandler @ 00760104 */
    <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(u64,libdiscore_common[1cb84820f9455fa0]::stores::store_database::partition::Partition<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::stores::guilds::Guild>)>>
    ::reserve_rehash::
    <hashbrown[32fc5d502e7f9af5]::map::make_hasher<u64,libdiscore_common[1cb84820f9455fa0]::stores::store_database::partition::Partition<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::stores::guilds::Guild>,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::_closure_0_>
              (param_2,1,param_2 + 4,1);
    in_x11 = extraout_x11;
  }
  bVar4 = false;
  puVar1 = (undefined8 *)*param_2;
  uVar2 = param_2[1];
  lVar5 = 0;
  bVar3 = (byte)((ulong)(param_3 * 0x517cc1b727220a95) >> 0x38);
  bVar12 = bVar3 >> 1;
  uVar8 = CONCAT17(bVar12,CONCAT16(bVar12,CONCAT15(bVar12,CONCAT14(bVar12,CONCAT13(bVar12,CONCAT12(
                                                  bVar12,CONCAT11(bVar12,bVar12)))))));
  uVar6 = param_3 * 0x517cc1b727220a95 & uVar2;
  uVar13 = *(undefined8 *)((long)puVar1 + uVar6);
  uVar14 = NEON_cmeq(uVar13,uVar8,1);
  do {
    for (uVar14 = uVar14 & 0x8080808080808080; uVar14 != 0; uVar14 = uVar14 - 1 & uVar14) {
      uVar7 = (uVar14 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar14 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar6 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) & uVar2;
      if (param_3 == puVar1[uVar7 * -5 + -5]) {
        uVar13 = puVar1[uVar7 * -5 + -4];
        uVar9 = puVar1[uVar7 * -5 + -1];
        uVar8 = puVar1[uVar7 * -5 + -2];
        param_1[1] = puVar1[uVar7 * -5 + -3];
        *param_1 = uVar13;
        param_1[3] = uVar9;
        param_1[2] = uVar8;
        uVar13 = *param_4;
        uVar9 = param_4[3];
        uVar8 = param_4[2];
        puVar1[uVar7 * -5 + -3] = param_4[1];
        puVar1[uVar7 * -5 + -4] = uVar13;
        puVar1[uVar7 * -5 + -1] = uVar9;
        puVar1[uVar7 * -5 + -2] = uVar8;
        return;
      }
    }
    if (bVar4) {
LAB_00760008:
      uVar13 = NEON_cmeq(uVar13,0xffffffffffffffff,1);
      bVar12 = NEON_umaxv(uVar13,1);
      if ((bVar12 & 1) != 0) {
        uVar14 = (ulong)*(char *)((long)puVar1 + in_x11);
        if (-1 < *(char *)((long)puVar1 + in_x11)) {
          uVar14 = NEON_cmlt(*puVar1,0,1);
          uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
          uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
          uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
          uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
          in_x11 = (ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3;
          uVar14 = (ulong)*(byte *)((long)puVar1 + in_x11);
        }
        lVar10 = param_2[3];
        lVar5 = param_2[2];
        *(byte *)((long)puVar1 + in_x11) = bVar3 >> 1;
        *(byte *)((long)puVar1 + (in_x11 - 8 & uVar2) + 8) = bVar3 >> 1;
        param_2[3] = lVar10 + 1;
        param_2[2] = lVar5 - (uVar14 & 1);
        uVar8 = param_4[1];
        uVar13 = *param_4;
        uVar11 = param_4[3];
        uVar9 = param_4[2];
        puVar1[in_x11 * -5 + -5] = param_3;
        puVar1[in_x11 * -5 + -3] = uVar8;
        puVar1[in_x11 * -5 + -4] = uVar13;
        puVar1[in_x11 * -5 + -1] = uVar11;
        puVar1[in_x11 * -5 + -2] = uVar9;
        *param_1 = 0;
        return;
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
        in_x11 = uVar6 + ((ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3) & uVar2;
        goto LAB_00760008;
      }
      bVar4 = false;
      in_x11 = 0;
    }
    lVar5 = lVar5 + 8;
    uVar6 = lVar5 + uVar6 & uVar2;
    uVar13 = *(undefined8 *)((long)puVar1 + uVar6);
    uVar14 = NEON_cmeq(uVar13,uVar8,1);
  } while( true );
}


// ===== 0076011c  FUN_0076011c =====

void FUN_0076011c(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"Error",5);
  return;
}


// ===== 00760130  FUN_00760130 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00760130(void *param_1,long *param_2,byte *param_3,long param_4)

{
  ushort *puVar1;
  undefined2 *puVar2;
  long lVar3;
  ulong uVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  long lVar8;
  char cVar9;
  void *__s2;
  size_t __n;
  ushort uVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  byte *pbVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  long local_168;
  void *pvStack_160;
  size_t local_158;
  undefined8 uStack_150;
  undefined1 local_148;
  uint7 uStack_147;
  long local_140;
  void *pvStack_138;
  size_t local_130;
  undefined8 uStack_128;
  long local_120;
  undefined4 local_118;
  undefined3 uStack_114;
  long local_110;
  void *pvStack_108;
  size_t sStack_100;
  undefined8 uStack_f8;
  long local_f0;
  void *pvStack_e8;
  size_t local_e0;
  undefined8 uStack_d8;
  long local_d0;
  void *pvStack_c8;
  size_t sStack_c0;
  undefined8 uStack_b8;
  char local_b0;
  undefined4 local_af;
  undefined3 uStack_ab;
  long local_a0;
  void *pvStack_98;
  size_t local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 auStack_71 [17];
  
  lVar12 = param_4;
  pbVar16 = param_3;
  if (param_4 != 0) {
    do {
      bVar5 = *pbVar16;
      if (bVar5 < 0x20) {
        if (bVar5 != 9) {
LAB_0076018c:
                    /* try { // try from 0076018c to 00760197 has its CatchHandler @ 007605b0 */
          lVar12 = FUN_00705070(0,param_3,5);
                    /* try { // try from 007601a0 to 007601a3 has its CatchHandler @ 00760598 */
          FUN_007608c0(param_2[0x61]);
          param_2[0x61] = lVar12;
          goto LAB_00760414;
        }
      }
      else if (bVar5 == 0x7f) goto LAB_0076018c;
      lVar12 = lVar12 + -1;
      pbVar16 = pbVar16 + 1;
    } while (lVar12 != 0);
  }
                    /* try { // try from 007601ac to 007601bb has its CatchHandler @ 007605b0 */
  <bytes::bytes::bytes::bytes::Bytes>::copy_from_slice(&local_168,param_3,param_4);
  local_148 = 0;
  pvStack_138 = pvStack_160;
  local_140 = local_168;
  uStack_128 = uStack_150;
  local_130 = local_158;
  local_120 = (ulong)uStack_147 << 8;
  pvStack_e8 = _UNK_002bfb50;
  local_f0 = _s__002bfb48;
  uStack_d8 = _UNK_002bfb60;
  local_e0 = _DAT_002bfb58;
                    /* try { // try from 007601f0 to 00760203 has its CatchHandler @ 007605bc */
  iVar11 = FUN_00763e2c(param_2);
  if (iVar11 == 0) {
    uVar10 = FUN_00763070(param_2,&local_f0);
    __n = local_e0;
    __s2 = pvStack_e8;
    lVar8 = local_f0;
    uVar6 = *(ushort *)(param_2 + 0xb);
    lVar12 = param_2[9];
    uVar13 = param_2[10];
    lVar3 = param_2[4];
    uVar4 = param_2[5];
    uVar18 = 0;
    cVar9 = (char)pvStack_e8;
    uVar14 = (ulong)(uVar6 & uVar10);
    do {
      if ((uVar13 <= uVar14) && (uVar14 = 0, uVar13 == 0)) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      puVar1 = (ushort *)(lVar12 + uVar14 * 4);
      uVar19 = (ulong)*puVar1;
      if (uVar19 == 0xffff) {
        local_80 = local_120;
        pvStack_c8 = pvStack_e8;
        local_d0 = local_f0;
        uStack_b8 = uStack_d8;
        sStack_c0 = local_e0;
        pvStack_98 = pvStack_138;
        local_a0 = local_140;
        uStack_88 = uStack_128;
        local_90 = local_130;
        uVar18 = FUN_0076417c(param_2,uVar10,&local_d0,&local_a0);
        if ((uVar18 & 1) != 0) goto LAB_00760554;
        if ((ulong)param_2[10] <= uVar14) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check
                    (uVar14,param_2[10],&PTR_s__root__cargo_registry_src_index__00ad8028);
        }
        puVar2 = (undefined2 *)(param_2[9] + uVar14 * 4);
        *puVar2 = (short)uVar4;
        puVar2[1] = uVar10;
        goto LAB_00760414;
      }
      uVar7 = puVar1[1];
      if (((ulong)((int)uVar14 - (uint)(uVar7 & uVar6)) & (ulong)uVar6) < uVar18) {
        lVar12 = *param_2;
        pvStack_c8 = pvStack_e8;
        local_d0 = local_f0;
        uStack_b8 = uStack_d8;
        sStack_c0 = local_e0;
        local_80 = local_120;
        pvStack_98 = pvStack_138;
        local_a0 = local_140;
        uStack_88 = uStack_128;
        local_90 = local_130;
                    /* try { // try from 0076047c to 0076048f has its CatchHandler @ 007605b0 */
        uVar13 = FUN_0076417c(param_2,uVar10,&local_d0,&local_a0);
        if ((uVar13 & 1) == 0) {
          lVar3 = param_2[9];
          uVar19 = param_2[10];
          uVar13 = 0;
          uVar17 = (uint)uVar4 & 0xffff;
          while( true ) {
            uVar6 = (ushort)uVar17;
            if ((uVar19 <= uVar14) && (uVar14 = 0, uVar19 == 0)) {
              do {
                    /* WARNING: Do nothing block with infinite loop */
              } while( true );
            }
            puVar1 = (ushort *)(lVar3 + uVar14 * 4);
            uVar17 = (uint)*puVar1;
            if (uVar17 == 0xffff) break;
            uVar7 = puVar1[1];
            *puVar1 = uVar6;
            uVar13 = uVar13 + 1;
            puVar1[1] = uVar10;
            uVar14 = uVar14 + 1;
            uVar10 = uVar7;
          }
          *puVar1 = uVar6;
          puVar1[1] = uVar10;
          if ((0x7f < uVar13 || 0x1ff < uVar18 && lVar12 != 2) && (*param_2 == 0)) {
            *param_2 = 1;
          }
          goto LAB_00760414;
        }
        goto LAB_00760554;
      }
      if (uVar7 == uVar10) {
        if (uVar4 <= uVar19) {
                    /* try { // try from 00760524 to 00760537 has its CatchHandler @ 007605bc */
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check
                    (uVar19,uVar4,&PTR_s__root__cargo_registry_src_index__00ad8010);
        }
        lVar15 = lVar3 + uVar19 * 0x68;
        if ((lVar8 == 0) != (*(long *)(lVar15 + 0x40) != 0)) {
          if (*(long *)(lVar15 + 0x40) == 0) {
            if (*(char *)(lVar15 + 0x48) == cVar9) goto LAB_00760304;
          }
          else if ((*(size_t *)(lVar15 + 0x50) == __n) &&
                  (iVar11 = memcmp(*(void **)(lVar15 + 0x48),__s2,__n), iVar11 == 0))
          goto LAB_00760304;
        }
      }
      uVar18 = uVar18 + 1;
      uVar14 = uVar14 + 1;
    } while( true );
  }
                    /* try { // try from 0076054c to 00760553 has its CatchHandler @ 007605a8 */
  (**(code **)(local_140 + 0x20))(&uStack_128,pvStack_138,local_130);
LAB_00760554:
                    /* try { // try from 00760554 to 0076058b has its CatchHandler @ 007605b0 */
                    /* WARNING: Subroutine does not return */
  core::result::unwrap_failed
            ("size overflows MAX_SIZE",0x17,auStack_71,&DAT_00ad8220,
             &PTR_s__root__cargo_registry_src_index__00ad7fe0);
LAB_00760304:
  pvStack_98 = pvStack_138;
  local_a0 = local_140;
  uStack_88 = uStack_128;
  local_90 = local_130;
  local_80 = local_120;
                    /* try { // try from 00760318 to 0076032f has its CatchHandler @ 00760590 */
  FUN_0076399c(&local_d0,param_2,uVar19,&local_a0);
  pvStack_108 = pvStack_c8;
  local_110 = local_d0;
  uStack_f8 = uStack_b8;
  sStack_100 = sStack_c0;
  local_118 = local_af;
  uStack_114 = uStack_ab;
  if (lVar8 != 0) {
                    /* try { // try from 0076035c to 007603ef has its CatchHandler @ 007605b0 */
    (**(code **)(lVar8 + 0x20))(&uStack_d8,__s2,__n);
  }
  if (local_b0 != -1) {
    pvStack_98 = pvStack_108;
    local_a0 = local_110;
    uStack_88 = uStack_f8;
    local_90 = sStack_100;
    local_80._0_5_ = CONCAT41(local_118,local_b0);
    local_80 = CONCAT44(CONCAT31(uStack_114,local_118._3_1_),(undefined4)local_80);
    if (local_b0 != '\x02') {
      (**(code **)(local_110 + 0x20))(&uStack_88,pvStack_108,sStack_100);
    }
LAB_00760414:
    memcpy(param_1,param_2,0x348);
    return;
  }
  goto LAB_00760554;
}


// ===== 0076060c  FUN_0076060c =====

void FUN_0076060c(undefined8 param_1,undefined8 *param_2,byte *param_3,undefined8 param_4)

{
  void *__ptr;
  byte bVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  undefined8 local_2a8;
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
  undefined8 uStack_230;
  undefined8 uStack_228;
  long local_220;
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
  undefined4 local_1c0;
  byte local_1b8;
  undefined4 uStack_1b7;
  undefined3 uStack_1b3;
  void *local_1b0;
  long lStack_1a8;
  undefined1 local_1a0;
  long local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
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
  
                    /* try { // try from 00760638 to 00760643 has its CatchHandler @ 007607c4 */
  <&alloc::string::String_as_reqwest::into_url::IntoUrlSealed>::into_url(&local_198,param_4);
  __ptr = *(void **)(param_3 + 8);
  lVar6 = *(long *)(param_3 + 0x10);
  bVar1 = *param_3;
  if (local_198 == -1) {
    local_2a8 = 2;
    local_2a0 = uStack_190;
    if ((9 < bVar1) && (lVar6 != 0)) {
      free(__ptr);
    }
  }
  else {
                    /* try { // try from 0076065c to 00760663 has its CatchHandler @ 00760788 */
    <http::header::map::http::header::map::HeaderMap>::new(&local_c0);
    uStack_1f8 = uStack_170;
    local_200 = local_178;
    uStack_1e8 = uStack_160;
    local_1f0 = local_168;
    uStack_218 = uStack_190;
    local_220 = local_198;
    uStack_208 = uStack_180;
    local_210 = local_188;
    uStack_1d8 = uStack_150;
    local_1e0 = local_158;
    local_1d0 = local_148;
    uStack_1b7 = *(undefined4 *)(param_3 + 1);
    uStack_f8 = uStack_98;
    local_100 = local_a0;
    uStack_e8 = uStack_88;
    uStack_f0 = uStack_90;
    local_2a8 = 0;
    uStack_d8 = uStack_78;
    local_e0 = local_80;
    uStack_c8 = uStack_68;
    uStack_d0 = uStack_70;
    uStack_118 = uStack_b8;
    local_120 = local_c0;
    uStack_108 = uStack_a8;
    uStack_110 = uStack_b0;
    uStack_258 = uStack_98;
    local_260 = local_a0;
    uStack_248 = uStack_88;
    uStack_250 = uStack_90;
    uStack_238 = uStack_78;
    local_240 = local_80;
    uStack_228 = uStack_68;
    uStack_230 = uStack_70;
    uStack_298 = uStack_138;
    local_2a0 = local_140;
    uStack_288 = uStack_128;
    uStack_290 = uStack_130;
    local_1c0 = 0xffffffff;
    uStack_278 = uStack_b8;
    local_280 = local_c0;
    uStack_268 = uStack_a8;
    uStack_270 = uStack_b0;
    uStack_1b3 = (undefined3)((uint)*(undefined4 *)(param_3 + 4) >> 8);
    local_1a0 = 2;
    local_1b8 = bVar1;
    local_1b0 = __ptr;
    lStack_1a8 = lVar6;
  }
  plVar5 = (long *)*param_2;
  do {
    lVar6 = *plVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = lVar6 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (-1 < lVar6) {
    <reqwest::async_impl::request::reqwest::async_impl::request::RequestBuilder>::new
              (param_1,plVar5,&local_2a8);
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x760788);
  (*pcVar4)();
}


// ===== 007607d8  FUN_007607d8 =====

void FUN_007607d8(byte *param_1)

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


// ===== 00760810  FUN_00760810 =====

void FUN_00760810(long *param_1)

{
  void *__ptr;
  long lVar1;
  undefined8 *puVar2;
  
  if (*param_1 != -1) {
    if ((param_1[1] != -1) && (param_1[1] != 0)) {
      free((void *)param_1[2]);
    }
    __ptr = (void *)param_1[5];
    lVar1 = param_1[6];
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
    if (param_1[4] != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 007608c0  FUN_007608c0 =====

void FUN_007608c0(long *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  void *__ptr;
  
  if (param_1 != (long *)0x0) {
    __ptr = (void *)param_1[0xb];
    if (__ptr != (void *)0x0) {
      puVar2 = (undefined8 *)param_1[0xc];
      pcVar1 = (code *)*puVar2;
      if (pcVar1 != (code *)0x0) {
                    /* try { // try from 007608ec to 007608f3 has its CatchHandler @ 00760950 */
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
  return;
}


// ===== 007609a0  FUN_007609a0 =====

void FUN_007609a0(long *param_1)

{
  void *__ptr;
  long lVar1;
  undefined8 *puVar2;
  
  if (*param_1 != -1) {
    if (*param_1 != 0) {
      free((void *)param_1[1]);
    }
    __ptr = (void *)param_1[4];
    lVar1 = param_1[5];
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
    if (param_1[3] != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 00760a44  FUN_00760a44 =====

void FUN_00760a44(long *param_1)

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
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 1);
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
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
        return;
      }
    }
  }
  return;
}


// ===== 00760ac4  FUN_00760ac4 =====

void FUN_00760ac4(long *param_1)

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


// ===== 00760b90  FUN_00760b90 =====

void FUN_00760b90(long *param_1)

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


// ===== 00760c94  FUN_00760c94 =====

void FUN_00760c94(long *param_1)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  
  __ptr = (void *)param_1[1];
  lVar2 = param_1[2] + 1;
  lVar1 = (long)__ptr + 0x38;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 00760cd0 to 00760cd3 has its CatchHandler @ 00760d1c */
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


// ===== 00760d70  FUN_00760d70 =====

void FUN_00760d70(long *param_1)

{
                    /* try { // try from 00760d80 to 00760d83 has its CatchHandler @ 00760db4 */
  FUN_00766164();
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 00760ddc  FUN_00760ddc =====

void FUN_00760ddc(long *param_1)

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
                    /* try { // try from 00760e30 to 00760e33 has its CatchHandler @ 00760e74 */
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


// ===== 00760ed8  FUN_00760ed8 =====

void FUN_00760ed8(long *param_1)

{
  void *__ptr;
  long lVar1;
  undefined8 *puVar2;
  
  __ptr = (void *)param_1[1];
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)((long)__ptr + 0x10);
    do {
      if (puVar2[-1] != 0) {
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


// ===== 00760f54  FUN_00760f54 =====

void FUN_00760f54(long *param_1)

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


// ===== 00760fdc  FUN_00760fdc =====

void FUN_00760fdc(long *param_1)

{
  void *__ptr;
  void *pvVar1;
  long lVar2;
  
  __ptr = (void *)param_1[1];
  lVar2 = param_1[2] + 1;
  pvVar1 = __ptr;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 0076100c to 0076100f has its CatchHandler @ 00761058 */
    FUN_007624cc(pvVar1);
    pvVar1 = (void *)((long)pvVar1 + 0x88);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 007610a0  FUN_007610a0 =====

void FUN_007610a0(long *param_1)

{
  void *pvVar1;
  void *__ptr;
  long lVar2;
  
  __ptr = (void *)param_1[1];
  pvVar1 = __ptr;
  for (lVar2 = param_1[2]; lVar2 != 0; lVar2 = lVar2 + -1) {
    FUN_0076276c(pvVar1);
    pvVar1 = (void *)((long)pvVar1 + 0xe0);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 0076110c  FUN_0076110c =====

void FUN_0076110c(long *param_1)

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
      if (0x18 < *(byte *)((long)__ptr + lVar6 * 0x58 + 0x28)) {
        plVar4 = *(long **)((long)__ptr + lVar6 * 0x58 + 0x30);
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
          <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
        }
      }
      if (*(long *)((long)__ptr + lVar6 * 0x58 + 0x10) != 0) {
        free(*(void **)((long)__ptr + lVar6 * 0x58 + 0x18));
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


// ===== 007611d4  FUN_007611d4 =====

void FUN_007611d4(long *param_1)

{
  void *__ptr;
  long lVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  
  __ptr = (void *)param_1[1];
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    lVar8 = 0;
    do {
      if (0x18 < *(byte *)((long)__ptr + lVar8 * 0x70 + 0x10)) {
        plVar5 = *(long **)((long)__ptr + lVar8 * 0x70 + 0x18);
        do {
          lVar6 = *plVar5;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar4) {
            *plVar5 = lVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar6 + -1 == 0) {
          DataMemoryBarrier(2,1);
          <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
        }
      }
      bVar2 = *(byte *)((long)__ptr + lVar8 * 0x70 + 0x28);
      if (bVar2 != 0xff && 0x18 < bVar2) {
        plVar5 = *(long **)((long)__ptr + lVar8 * 0x70 + 0x30);
        do {
          lVar6 = *plVar5;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar4) {
            *plVar5 = lVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar6 + -1 == 0) {
          DataMemoryBarrier(2,1);
          <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
        }
      }
      puVar7 = (undefined8 *)((long)__ptr + lVar8 * 0x70 + 0x50);
      plVar5 = (long *)*puVar7;
      if (plVar5 != (long *)0x0) {
        do {
          lVar6 = *plVar5;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar4) {
            *plVar5 = lVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar6 + -1 == 0) {
          DataMemoryBarrier(2,1);
          <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(puVar7);
        }
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 != lVar1);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 007612e4  FUN_007612e4 =====

void FUN_007612e4(void *param_1,undefined8 *param_2)

{
  if ((code *)*param_2 != (code *)0x0) {
                    /* try { // try from 00761304 to 0076130b has its CatchHandler @ 0076133c */
    (*(code *)*param_2)(param_1);
  }
  if (param_2[1] != 0) {
    free(param_1);
    return;
  }
  return;
}


// ===== 0076135c  FUN_0076135c =====

void FUN_0076135c(long param_1)

{
  if (*(long *)(param_1 + 0x40) != 0) {
                    /* try { // try from 0076137c to 00761383 has its CatchHandler @ 007613a0 */
    (**(code **)(*(long *)(param_1 + 0x40) + 0x20))
              (param_1 + 0x58,*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
  }
                    /* WARNING: Could not recover jumptable at 0x0076139c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x20))
            (param_1 + 0x30,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}


// ===== 007613c4  FUN_007613c4 =====

void FUN_007613c4(ulong *param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uStack_90;
  ulong local_88;
  ulong uStack_80;
  ulong local_78;
  ulong uStack_70;
  ulong local_68;
  
  uVar6 = *param_1;
  uVar7 = param_1[1];
  uVar2 = param_1[3];
  uVar3 = param_1[4];
  puVar8 = (ulong *)param_1[8];
  puVar10 = (ulong *)param_1[6];
  do {
    if (uVar6 == 1) {
      if (uVar3 <= uVar7) {
                    /* try { // try from 00761554 to 00761567 has its CatchHandler @ 00761594 */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (uVar7,uVar3,&PTR_s__root__cargo_registry_src_index__00ad82a0);
      }
      lVar5 = uVar2 + uVar7 * 0x48;
      bVar1 = (*(uint *)(lVar5 + 0x10) & 1) != 0;
      if (bVar1) {
        uVar7 = *(ulong *)(lVar5 + 0x18);
      }
      uVar6 = (ulong)bVar1;
      uStack_80 = *(ulong *)(lVar5 + 0x28);
      local_88 = *(ulong *)(lVar5 + 0x20);
      uStack_70 = *(ulong *)(lVar5 + 0x38);
      local_78 = *(ulong *)(lVar5 + 0x30);
      local_68 = *(ulong *)(lVar5 + 0x40);
      *param_1 = uVar6;
      param_1[1] = uVar7;
      puVar9 = puVar10;
    }
    else {
      if (puVar10 == puVar8) {
LAB_007614dc:
        param_1[4] = 0;
                    /* try { // try from 007614e0 to 007614e7 has its CatchHandler @ 0076156c */
        FUN_0070a5f4(param_1 + 5);
        lVar5 = param_1[4] + 1;
        lVar4 = param_1[3] + 0x38;
        while (lVar5 = lVar5 + -1, lVar5 != 0) {
                    /* try { // try from 0076150c to 0076150f has its CatchHandler @ 00761598 */
          (**(code **)(*(long *)(lVar4 + -0x18) + 0x20))
                    (lVar4,*(undefined8 *)(lVar4 + -0x10),*(undefined8 *)(lVar4 + -8));
          lVar4 = lVar4 + 0x48;
        }
        if (param_1[2] != 0) {
          free((void *)param_1[3]);
        }
        return;
      }
      puVar9 = puVar10 + 0xd;
      uVar6 = *puVar10;
      param_1[6] = (ulong)puVar9;
      if (uVar6 == 2) goto LAB_007614dc;
      uVar13 = puVar10[9];
      uVar12 = puVar10[8];
      uStack_90 = puVar10[0xb];
      uVar11 = puVar10[10];
      uVar6 = uVar6 & 1;
      uVar7 = puVar10[1];
      local_68 = puVar10[7];
      uStack_70 = puVar10[6];
      local_78 = puVar10[5];
      uStack_80 = puVar10[4];
      local_88 = puVar10[3];
      *param_1 = uVar6;
      param_1[1] = uVar7;
      if (uVar12 != 0) {
                    /* try { // try from 007614c4 to 007614cb has its CatchHandler @ 00761574 */
        (**(code **)(uVar12 + 0x20))(&uStack_90,uVar13,uVar11);
      }
    }
                    /* try { // try from 00761434 to 0076143b has its CatchHandler @ 007615ec */
    (**(code **)(local_88 + 0x20))(&uStack_70,uStack_80,local_78);
    puVar10 = puVar9;
  } while( true );
}


// ===== 0076160c  FUN_0076160c =====

void FUN_0076160c(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    param_1 = param_1 + 8;
    do {
      uVar2 = *(undefined8 *)(param_1 + -8);
                    /* try { // try from 0076163c to 0076164f has its CatchHandler @ 00761664 */
      iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(uVar2);
      if (iVar1 != 0) {
        <tokio::runtime::task::raw::tokio::runtime::task::raw::RawTask>::dealloc(uVar2);
      }
      param_2 = param_2 + -1;
      param_1 = param_1 + 8;
    } while (param_2 != 0);
  }
  return;
}


// ===== 00761690  FUN_00761690 =====

void FUN_00761690(long param_1,long param_2)

{
  long lVar1;
  
  param_2 = param_2 + 1;
  lVar1 = param_1 + 0x18;
  while (param_2 = param_2 + -1, param_2 != 0) {
                    /* try { // try from 007616c0 to 007616c3 has its CatchHandler @ 007616dc */
    (**(code **)(*(long *)(lVar1 + -0x18) + 0x20))
              (lVar1,*(undefined8 *)(lVar1 + -0x10),*(undefined8 *)(lVar1 + -8));
    lVar1 = lVar1 + 0x20;
  }
  return;
}


// ===== 00761714  FUN_00761714 =====

void FUN_00761714(ulong *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  
  lVar1 = 2;
  if (1 < *param_1) {
    lVar1 = *param_1 - 2;
  }
  if (lVar1 == 1) {
    uVar3 = param_1[3];
    if (uVar3 != 0) {
      uVar4 = param_1[5];
      if (uVar4 != 0) {
        puVar5 = (undefined8 *)param_1[2];
        puVar6 = puVar5 + 1;
        uVar7 = NEON_cmge(*puVar5,0,1);
        uVar7 = uVar7 & 0x8080808080808080;
        do {
          for (; uVar7 == 0; uVar7 = uVar7 & 0x8080808080808080) {
            puVar5 = puVar5 + -0xe8;
            uVar7 = NEON_cmge(*puVar6,0,1);
            puVar6 = puVar6 + 1;
          }
          uVar2 = (uVar7 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
          uVar4 = uVar4 - 1;
          uVar7 = uVar7 - 1 & uVar7;
          FUN_00702244(puVar5 + (long)-(int)((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) *
                                0x1d + -0x1c);
        } while (uVar4 != 0);
      }
      if (uVar3 * 0xe9 != -0xf1) {
        free((void *)(param_1[2] + uVar3 * -0xe8 + -0xe8));
        return;
      }
    }
  }
  else if (lVar1 == 2) {
    FUN_0076276c(param_1);
    return;
  }
  return;
}


// ===== 00761838  FUN_00761838 =====

void FUN_00761838(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = 2;
  if (1 < *param_1) {
    lVar4 = *param_1 - 2;
  }
  if (lVar4 == 1) {
    FUN_007043b0(param_1 + 2);
    return;
  }
  if (lVar4 == 2) {
    if (0x18 < (byte)param_1[5]) {
      plVar3 = (long *)param_1[6];
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
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 6);
      }
    }
    if (param_1[2] != 0) {
      free((void *)param_1[3]);
      return;
    }
  }
  return;
}


// ===== 007618cc  FUN_007618cc =====

void FUN_007618cc(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = 2;
  if (1 < *param_1) {
    lVar4 = *param_1 - 2;
  }
  if (lVar4 == 1) {
    FUN_00704618(param_1 + 2);
    return;
  }
  if (lVar4 == 2) {
    if (0x18 < (byte)param_1[2]) {
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
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 3);
      }
    }
    if (((byte)param_1[5] != 0xff) && (0x18 < (byte)param_1[5])) {
      plVar3 = (long *)param_1[6];
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
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 6);
      }
    }
    plVar3 = (long *)param_1[10];
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
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
        return;
      }
    }
  }
  return;
}


// ===== 007619c0  FUN_007619c0 =====

void FUN_007619c0(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  cVar1 = '\x02';
  if (1 < *(byte *)(param_1 + 0x28)) {
    cVar1 = *(byte *)(param_1 + 0x28) - 2;
  }
  if (cVar1 == '\x01') {
    FUN_007042ac();
    return;
  }
  if (cVar1 == '\x02') {
    plVar3 = *(long **)(param_1 + 0x18);
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
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
        return;
      }
    }
  }
  return;
}


// ===== 00761a10  FUN_00761a10 =====

void FUN_00761a10(ulong *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  
  lVar1 = 2;
  if (1 < *param_1) {
    lVar1 = *param_1 - 2;
  }
  if (lVar1 == 1) {
    uVar3 = param_1[2];
    if (uVar3 != 0) {
      uVar4 = param_1[4];
      if (uVar4 != 0) {
        puVar5 = (undefined8 *)param_1[1];
        puVar6 = puVar5 + 1;
        uVar7 = NEON_cmge(*puVar5,0,1);
        uVar7 = uVar7 & 0x8080808080808080;
        do {
          for (; uVar7 == 0; uVar7 = uVar7 & 0x8080808080808080) {
            puVar5 = puVar5 + -0x220;
            uVar7 = NEON_cmge(*puVar6,0,1);
            puVar6 = puVar6 + 1;
          }
          uVar2 = (uVar7 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
          uVar4 = uVar4 - 1;
          uVar7 = uVar7 - 1 & uVar7;
          FUN_007024a8(puVar5 + (long)-(int)((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) *
                                0x44 + -0x43);
        } while (uVar4 != 0);
      }
      if (uVar3 * 0x221 != -0x229) {
        free((void *)(param_1[1] + uVar3 * -0x220 + -0x220));
        return;
      }
    }
  }
  else if (lVar1 == 2) {
    FUN_007628fc(param_1);
    return;
  }
  return;
}


// ===== 00761b38  FUN_00761b38 =====

void FUN_00761b38(ulong *param_1)

{
  void *pvVar1;
  void *__ptr;
  ulong uVar2;
  
  uVar2 = *param_1;
  if (uVar2 == (uVar2 != 0)) {
    FUN_0076276c();
    return;
  }
  if (uVar2 - (uVar2 != 0) == 2) {
    __ptr = (void *)param_1[2];
    pvVar1 = __ptr;
    for (uVar2 = param_1[3]; uVar2 != 0; uVar2 = uVar2 - 1) {
      FUN_0076276c(pvVar1);
      pvVar1 = (void *)((long)pvVar1 + 0xe0);
    }
    if (param_1[1] != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 00761bd0  FUN_00761bd0 =====

void FUN_00761bd0(ulong *param_1)

{
  void *__ptr;
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  
  uVar3 = *param_1;
  if (uVar3 == (uVar3 != 0)) {
    if (0x18 < (byte)param_1[5]) {
      plVar4 = (long *)param_1[6];
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
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
      }
    }
    if (param_1[2] != 0) {
      free((void *)param_1[3]);
      return;
    }
  }
  else if (uVar3 - (uVar3 != 0) == 2) {
    __ptr = (void *)param_1[2];
    uVar3 = param_1[3];
    if (uVar3 != 0) {
      uVar6 = 0;
      do {
        if (0x18 < *(byte *)((long)__ptr + uVar6 * 0x58 + 0x28)) {
          plVar4 = *(long **)((long)__ptr + uVar6 * 0x58 + 0x30);
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
            <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
          }
        }
        if (*(long *)((long)__ptr + uVar6 * 0x58 + 0x10) != 0) {
          free(*(void **)((long)__ptr + uVar6 * 0x58 + 0x18));
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar3);
    }
    if (param_1[1] != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 00761d0c  FUN_00761d0c =====

void FUN_00761d0c(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar3 = *param_1;
  if (uVar3 == (uVar3 != 0)) {
    if (0x18 < (byte)param_1[2]) {
      plVar4 = (long *)param_1[3];
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
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
      }
    }
    if (((byte)param_1[5] != 0xff) && (0x18 < (byte)param_1[5])) {
      plVar4 = (long *)param_1[6];
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
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
      }
    }
    plVar4 = (long *)param_1[10];
    if (plVar4 != (long *)0x0) {
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
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 10);
        return;
      }
    }
  }
  else if (uVar3 - (uVar3 != 0) == 2) {
    uVar3 = param_1[3];
    if (uVar3 != 0) {
      uVar8 = param_1[2];
      uVar7 = 0;
      do {
        lVar6 = uVar8 + uVar7 * 0x70;
        if (0x18 < *(byte *)(lVar6 + 0x10)) {
          plVar4 = *(long **)(lVar6 + 0x18);
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
            <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
          }
        }
        if (*(byte *)(lVar6 + 0x28) != 0xff && 0x18 < *(byte *)(lVar6 + 0x28)) {
          plVar4 = *(long **)(lVar6 + 0x30);
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
            <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
          }
        }
        plVar4 = *(long **)(lVar6 + 0x50);
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
            <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow((undefined8 *)(lVar6 + 0x50));
          }
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar3);
    }
    if (param_1[1] != 0) {
      free((void *)param_1[2]);
      return;
    }
  }
  return;
}


// ===== 00761edc  FUN_00761edc =====

void FUN_00761edc(ulong *param_1)

{
  void *__ptr;
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = *param_1;
  if (uVar2 == (uVar2 != 0)) {
    FUN_007628fc(param_1);
    return;
  }
  if (uVar2 - (uVar2 != 0) == 2) {
    __ptr = (void *)param_1[2];
    lVar3 = param_1[3] + 1;
    pvVar1 = __ptr;
    while (lVar3 = lVar3 + -1, lVar3 != 0) {
                    /* try { // try from 00761f28 to 00761f2b has its CatchHandler @ 00761f8c */
      FUN_007628fc(pvVar1);
      pvVar1 = (void *)((long)pvVar1 + 0x218);
    }
    if (param_1[1] != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 00761fd4  FUN_00761fd4 =====

void FUN_00761fd4(long param_1)

{
  void *__ptr;
  void *__ptr_00;
  long lVar1;
  long *plVar2;
  
  __ptr = *(void **)(param_1 + 0x28);
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    plVar2 = (long *)((long)__ptr + 0x20);
    do {
      if ((*plVar2 != -1) && (*plVar2 != 0)) {
        free((void *)plVar2[1]);
      }
      if (plVar2[-4] != 2) {
        if (plVar2[-4] == 0) {
          if (plVar2[-3] != 0) {
            __ptr_00 = (void *)plVar2[-2];
            goto LAB_00761ff8;
          }
        }
        else if (plVar2[-3] != 0) {
          __ptr_00 = (void *)plVar2[-2];
LAB_00761ff8:
          free(__ptr_00);
        }
      }
      lVar1 = lVar1 + -1;
      plVar2 = plVar2 + 9;
    } while (lVar1 != 0);
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00762098  FUN_00762098 =====

void FUN_00762098(byte *param_1)

{
  void *__ptr;
  byte bVar1;
  void *pvVar2;
  long lVar3;
  
  bVar1 = *param_1;
  if (2 < bVar1) {
    if (bVar1 == 3) {
      if (*(long *)(param_1 + 8) != 0) {
        free(*(void **)(param_1 + 0x10));
        return;
      }
    }
    else {
      if (bVar1 != 4) {
        FUN_0074a9a8(param_1 + 8);
        return;
      }
      __ptr = *(void **)(param_1 + 0x10);
      lVar3 = *(long *)(param_1 + 0x18) + 1;
      pvVar2 = __ptr;
      while (lVar3 = lVar3 + -1, lVar3 != 0) {
                    /* try { // try from 007620f4 to 007620f7 has its CatchHandler @ 00762164 */
        FUN_00762098(pvVar2);
        pvVar2 = (void *)((long)pvVar2 + 0x20);
      }
      if (*(long *)(param_1 + 8) != 0) {
        free(__ptr);
        return;
      }
    }
  }
  return;
}


// ===== 007621a8  FUN_007621a8 =====

void FUN_007621a8(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  if (*param_1 < 2) {
    uVar5 = param_1[4];
    if (uVar5 != 0) {
      puVar6 = (undefined8 *)(param_1[3] + 8);
      do {
        if (puVar6[-1] != 0) {
          free((void *)*puVar6);
        }
        uVar5 = uVar5 - 1;
        puVar6 = puVar6 + 3;
      } while (uVar5 != 0);
    }
    if (param_1[2] != 0) {
      free((void *)param_1[3]);
    }
    plVar3 = (long *)param_1[0x1b];
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
                    /* try { // try from 0076224c to 0076224f has its CatchHandler @ 007623a8 */
      <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+rustls::server::server_conn::StoresServerSessions>>
      ::drop_slow();
    }
    plVar3 = (long *)param_1[0x1e];
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
                    /* try { // try from 00762270 to 00762273 has its CatchHandler @ 007623a0 */
      <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+rustls::server::server_conn::StoresServerSessions>>
      ::drop_slow();
    }
    plVar3 = (long *)param_1[0x20];
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
                    /* try { // try from 00762290 to 00762297 has its CatchHandler @ 00762398 */
      <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+rustls::server::server_conn::StoresServerSessions>>
      ::drop_slow(param_1 + 0x20);
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
                    /* try { // try from 007622b4 to 007622bb has its CatchHandler @ 00762390 */
      <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+rustls::server::server_conn::StoresServerSessions>>
      ::drop_slow(param_1 + 0x22);
    }
    plVar3 = (long *)param_1[0x24];
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
                    /* try { // try from 007622d8 to 007622df has its CatchHandler @ 00762388 */
      <alloc::sync::[n]::alloc::sync::Arc<rustls::crypto::CryptoProvider>>::drop_slow
                (param_1 + 0x24);
    }
    plVar3 = (long *)param_1[0x25];
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
                    /* try { // try from 007622fc to 00762303 has its CatchHandler @ 00762380 */
      <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+rustls::server::server_conn::StoresServerSessions>>
      ::drop_slow(param_1 + 0x25);
    }
    if (param_1[5] != 0) {
      free((void *)param_1[6]);
    }
    if (param_1[8] != 0) {
      free((void *)param_1[9]);
    }
    plVar3 = (long *)param_1[0x27];
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
                    /* try { // try from 00762350 to 00762357 has its CatchHandler @ 0076236c */
      <alloc::sync::[n]::alloc::sync::Arc<rustls::compress::CompressionCache>>::drop_slow
                (param_1 + 0x27);
    }
    FUN_00760b90(param_1 + 0xb);
    return;
  }
  return;
}


// ===== 007624cc  FUN_007624cc =====

void FUN_007624cc(ulong *param_1)

{
  void *__ptr;
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  
  puVar5 = param_1 + 1;
  if (*param_1 < 3) {
    if (param_1[1] == 0) {
      if ((char)param_1[10] != '\x02') {
                    /* try { // try from 00762560 to 00762567 has its CatchHandler @ 00762684 */
        (**(code **)(param_1[6] + 0x20))(param_1 + 9,param_1[7],param_1[8]);
      }
    }
    else if ((char)param_1[10] != '\x02') {
                    /* try { // try from 00762510 to 00762517 has its CatchHandler @ 007626a0 */
      (**(code **)(param_1[6] + 0x20))(param_1 + 9,param_1[7],param_1[8]);
    }
                    /* try { // try from 00762574 to 0076257b has its CatchHandler @ 007626c0 */
    (**(code **)(param_1[2] + 0x20))(param_1 + 5,param_1[3],param_1[4]);
  }
  else if (*param_1 == 3) {
    plVar3 = (long *)*puVar5;
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
                    /* try { // try from 0076253c to 00762543 has its CatchHandler @ 007626c0 */
      <alloc::sync::[n]::alloc::sync::Arc<std::collections::hash::map::HashMap<alloc::string::String,reqwest::proxy::ProxyScheme>>>
      ::drop_slow(puVar5);
    }
  }
  else {
    if ((char)param_1[7] != '\x02') {
                    /* try { // try from 00762624 to 0076262b has its CatchHandler @ 00762654 */
      (**(code **)(param_1[3] + 0x20))(param_1 + 6,param_1[4],param_1[5]);
    }
    plVar3 = (long *)*puVar5;
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
                    /* try { // try from 00762648 to 0076264f has its CatchHandler @ 007626c0 */
      <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
      drop_slow(puVar5);
    }
  }
  if (param_1[0xb] != 0xffffffffffffffff) {
    if (param_1[0xb] != 0) {
      free((void *)param_1[0xc]);
    }
    __ptr = (void *)param_1[0xf];
    uVar6 = param_1[0x10];
    if (uVar6 != 0) {
      puVar7 = (undefined8 *)((long)__ptr + 8);
      do {
        if (puVar7[-1] != 0) {
          free((void *)*puVar7);
        }
        uVar6 = uVar6 - 1;
        puVar7 = puVar7 + 3;
      } while (uVar6 != 0);
    }
    if (param_1[0xe] != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 007626d4  FUN_007626d4 =====

void FUN_007626d4(long *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  code *pcVar2;
  
  if (*param_1 == 0) {
    __ptr = (void *)param_1[1];
    puVar1 = (undefined8 *)param_1[2];
    pcVar2 = (code *)*puVar1;
    if (pcVar2 != (code *)0x0) {
                    /* try { // try from 00762700 to 00762707 has its CatchHandler @ 00762724 */
      (*pcVar2)(__ptr);
    }
    if (puVar1[1] != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 00762748  FUN_00762748 =====

void FUN_00762748(byte *param_1)

{
  if ((9 < *param_1) && (*(long *)(param_1 + 0x10) != 0)) {
    free(*(void **)(param_1 + 8));
    return;
  }
  return;
}


// ===== 0076276c  FUN_0076276c =====

void FUN_0076276c(long param_1)

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


// ===== 00762838  FUN_00762838 =====

void FUN_00762838(long param_1)

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
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow((undefined8 *)(param_1 + 0x18));
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
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow((undefined8 *)(param_1 + 0x30));
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
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
      return;
    }
  }
  return;
}


// ===== 007628fc  FUN_007628fc =====

void FUN_007628fc(long *param_1)

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
                    /* try { // try from 00762a50 to 00762a57 has its CatchHandler @ 00762b78 */
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
                    /* try { // try from 00762b38 to 00762b3f has its CatchHandler @ 00762b70 */
      <alloc::sync::[n]::alloc::sync::Arc<[smol_str::SmolStr]>>::drop_slow(param_1 + 0x12);
    }
  }
  if ((param_1[0xf] != -1) && (param_1[0xf] != 0)) {
    free((void *)param_1[0x10]);
  }
  FUN_00760ac4(param_1 + 5);
  return;
}


// ===== 00762c18  FUN_00762c18 =====

void FUN_00762c18(long param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  void *pvVar7;
  undefined8 *puVar8;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    free(*(void **)(param_1 + 0x48));
  }
                    /* try { // try from 00762c48 to 00762c4f has its CatchHandler @ 00762f18 */
  FUN_00766164(param_1 + 0x18);
  if (*(long *)(param_1 + 0x18) != 0) {
    free(*(void **)(param_1 + 0x20));
  }
  lVar6 = *(long *)(param_1 + 0x40) + 1;
  lVar3 = *(long *)(param_1 + 0x38) + 0x38;
  while (lVar6 = lVar6 + -1, lVar6 != 0) {
                    /* try { // try from 00762c90 to 00762c93 has its CatchHandler @ 00762f8c */
    (**(code **)(*(long *)(lVar3 + -0x18) + 0x20))
              (lVar3,*(undefined8 *)(lVar3 + -0x10),*(undefined8 *)(lVar3 + -8));
    lVar3 = lVar3 + 0x48;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    free(*(void **)(param_1 + 0x38));
  }
  if (*(long *)(param_1 + 0x78) != -1) {
    if ((*(long *)(param_1 + 0x80) != -1) && (*(long *)(param_1 + 0x80) != 0)) {
      free(*(void **)(param_1 + 0x88));
    }
    pvVar7 = *(void **)(param_1 + 0xa0);
    lVar6 = *(long *)(param_1 + 0xa8);
    if (lVar6 != 0) {
      puVar8 = (undefined8 *)((long)pvVar7 + 8);
      do {
        if ((puVar8[-1] != -1) && (puVar8[-1] != 0)) {
          free((void *)*puVar8);
        }
        lVar6 = lVar6 + -1;
        puVar8 = puVar8 + 3;
      } while (lVar6 != 0);
    }
    if (*(long *)(param_1 + 0x98) != 0) {
      free(pvVar7);
    }
  }
  lVar6 = *(long *)(param_1 + 0x218) + 1;
  lVar3 = *(long *)(param_1 + 0x210);
  while (lVar6 = lVar6 + -1, lVar6 != 0) {
                    /* try { // try from 00762d50 to 00762d53 has its CatchHandler @ 00762f48 */
    FUN_007624cc(lVar3);
    lVar3 = lVar3 + 0x88;
  }
  if (*(long *)(param_1 + 0x208) != 0) {
    free(*(void **)(param_1 + 0x210));
  }
  if (*(long *)(param_1 + 0x60) == 0) {
    pvVar7 = *(void **)(param_1 + 0x68);
    puVar8 = *(undefined8 **)(param_1 + 0x70);
    pcVar4 = (code *)*puVar8;
    if (pcVar4 != (code *)0x0) {
                    /* try { // try from 00762d8c to 00762d93 has its CatchHandler @ 00762edc */
      (*pcVar4)(pvVar7);
    }
    if (puVar8[1] != 0) {
      free(pvVar7);
    }
  }
  lVar6 = *(long *)(param_1 + 0x230);
  if (lVar6 != 0) {
    puVar8 = (undefined8 *)(*(long *)(param_1 + 0x228) + 0x10);
    do {
      if (puVar8[-1] != 0) {
        free((void *)*puVar8);
      }
      lVar6 = lVar6 + -1;
      puVar8 = puVar8 + 4;
    } while (lVar6 != 0);
  }
  if (*(long *)(param_1 + 0x220) != 0) {
    free(*(void **)(param_1 + 0x228));
  }
  lVar6 = *(long *)(param_1 + 0x248);
  pvVar7 = *(void **)(param_1 + 0x240);
  if (lVar6 != 0) {
    puVar8 = (undefined8 *)((long)pvVar7 + 8);
    do {
      if ((puVar8[-1] != -1) && (puVar8[-1] != 0)) {
        free((void *)*puVar8);
      }
      lVar6 = lVar6 + -1;
      puVar8 = puVar8 + 3;
    } while (lVar6 != 0);
  }
  if (*(long *)(param_1 + 0x238) != 0) {
    free(pvVar7);
  }
                    /* try { // try from 00762e54 to 00762e5b has its CatchHandler @ 00762f10 */
  FUN_007621a8(param_1 + 0xb0);
                    /* try { // try from 00762e5c to 00762e63 has its CatchHandler @ 00762f08 */
  FUN_00760ddc(param_1 + 0x250);
  if ((*(long *)(param_1 + 0x268) != -1) && (*(long *)(param_1 + 0x268) != 0)) {
    free(*(void **)(param_1 + 0x270));
  }
                    /* try { // try from 00762e84 to 00762e87 has its CatchHandler @ 00762f00 */
  FUN_007608c0(*(undefined8 *)(param_1 + 0x308));
                    /* try { // try from 00762e88 to 00762e8f has its CatchHandler @ 00762ef8 */
  FUN_00703dbc(param_1 + 0x2d0);
  plVar5 = *(long **)(param_1 + 0x310);
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
      <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
      drop_slow(param_1 + 0x310);
      return;
    }
  }
  return;
}


