// ===== 00549e34  FUN_00549e34 =====

void FUN_00549e34(long param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined4 local_598 [342];
  
  auVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::
           transition_to_join_handle_dropped();
  if ((auVar2 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
    local_598[0] = 2;
                    /* try { // try from 00549e68 to 00549e73 has its CatchHandler @ 00549ed4 */
    FUN_0050b374(param_1 + 0x20,local_598);
  }
  if ((auVar2 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
    iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(param_1);
  }
  else {
    <tokio::runtime::task::core::[6]::tokio::runtime::task::core::Trailer>::set_waker
              (param_1 + 0x588,0);
    iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(param_1);
  }
  if (iVar1 == 0) {
    return;
  }
  FUN_00544928(param_1);
  return;
}


// ===== 00549f28  FUN_00549f28 =====

void FUN_00549f28(long param_1)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined *local_b10;
  long lStack_b08;
  undefined1 *local_b00;
  undefined1 *local_af8;
  undefined8 uStack_af0;
  undefined4 local_ae0 [2];
  undefined8 local_ad8;
  undefined8 local_ad0;
  undefined8 uStack_ac8;
  undefined4 local_588 [2];
  undefined8 local_580;
  undefined8 local_578;
  ulong local_570;
  
  local_b10 = (undefined *)0x0;
  bVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_running()
  ;
  if (1 < bVar1) {
    if (bVar1 == 2) {
      return;
    }
    goto LAB_00549fc0;
  }
  if (bVar1 == 0) {
    local_b10 = PTR_WAKER_VTABLE_00b00d40;
    uStack_af0 = 0;
                    /* try { // try from 00549f70 to 00549f7b has its CatchHandler @ 0054a0e8 */
    lStack_b08 = param_1;
    local_b00 = (undefined1 *)&local_b10;
    local_af8 = (undefined1 *)&local_b10;
    uVar3 = FUN_0050b2c8(param_1 + 0x20,&local_b00);
    if ((uVar3 & 1) == 0) {
      local_580 = 0;
      local_578 = 0;
      local_588[0] = 1;
                    /* try { // try from 0054a034 to 0054a03f has its CatchHandler @ 0054a088 */
      local_570 = uVar3 & 0xffffffff;
      FUN_0050b374(param_1 + 0x20,local_588);
      goto LAB_0054a040;
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
LAB_00549fc0:
      FUN_00544928(param_1);
      return;
    }
    if (bVar1 == 2) goto LAB_00549fc0;
    local_588[0] = 2;
                    /* try { // try from 0054a06c to 0054a077 has its CatchHandler @ 0054a07c */
    FUN_0050b374(param_1 + 0x20,local_588);
    uStack_ac8 = extraout_x1_00;
  }
  else {
    local_588[0] = 2;
                    /* try { // try from 00549fe4 to 00549fef has its CatchHandler @ 0054a0dc */
    FUN_0050b374(param_1 + 0x20,local_588);
    uStack_ac8 = extraout_x1;
  }
  local_ad8 = *(undefined8 *)(param_1 + 0x28);
  local_ad0 = 0;
  local_ae0[0] = 1;
  FUN_0050b374(param_1 + 0x20,local_ae0);
LAB_0054a040:
  FUN_0054a11c(param_1);
  return;
}


// ===== 0054a11c  FUN_0054a11c =====

void FUN_0054a11c(long param_1)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long local_598;
  undefined4 local_590 [342];
  undefined8 local_38;
  
  uVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_complete
                    ();
  if ((uVar2 >> 3 & 1) == 0) {
    local_590[0] = 2;
                    /* try { // try from 0054a148 to 0054a17b has its CatchHandler @ 0054a230 */
    FUN_0050b374(param_1 + 0x20,local_590);
  }
  else if ((uVar2 >> 4 & 1) != 0) {
    <tokio::runtime::task::core::[6]::tokio::runtime::task::core::Trailer>::wake_join
              (param_1 + 0x588);
    uVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::
            unset_waker_after_complete(param_1);
    if ((uVar2 >> 3 & 1) == 0) {
      <tokio::runtime::task::core::[6]::tokio::runtime::task::core::Trailer>::set_waker
                (param_1 + 0x588,0);
    }
  }
  if (*(long *)(param_1 + 0x5a8) != 0) {
    local_38 = *(undefined8 *)(param_1 + 0x28);
                    /* try { // try from 0054a1a4 to 0054a1af has its CatchHandler @ 0054a1f4 */
    (**(code **)(*(long *)(param_1 + 0x5b0) + 0x28))
              (*(long *)(param_1 + 0x5a8) +
               (*(long *)(*(long *)(param_1 + 0x5b0) + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
               &local_38);
  }
  local_598 = param_1;
  lVar3 = <alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>as_tokio::runtime::task::Schedule>
          ::release(param_1 + 0x20,&local_598);
  uVar1 = 1;
  if (lVar3 != 0) {
    uVar1 = 2;
  }
  uVar4 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_terminal
                    (param_1,uVar1);
  if ((uVar4 & 1) != 0) {
    FUN_00544928(param_1);
  }
  return;
}


// ===== 0054a284  FUN_0054a284 =====

void FUN_0054a284(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 extraout_x1;
  undefined8 local_ad0;
  undefined8 local_ac8;
  undefined8 local_ac0;
  undefined8 uStack_ab8;
  undefined4 local_578 [342];
  
  local_ad0 = 0;
  uVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_shutdown
                    ();
  if ((uVar2 & 1) == 0) {
    iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(param_1);
    if (iVar1 != 0) {
      FUN_00544928(param_1);
      return;
    }
  }
  else {
    local_578[0] = 2;
                    /* try { // try from 0054a2ac to 0054a2b7 has its CatchHandler @ 0054a318 */
    FUN_0050b374(param_1 + 0x20,local_578);
    local_ac8 = *(undefined8 *)(param_1 + 0x28);
    local_ac0 = 0;
    local_ad0 = CONCAT44(local_ad0._4_4_,1);
    uStack_ab8 = extraout_x1;
    FUN_0050b374(param_1 + 0x20,&local_ad0);
    FUN_0054a11c(param_1);
  }
  return;
}


// ===== 0054a324  FUN_0054a324 =====

void FUN_0054a324(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  void *__ptr;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  int local_50;
  
  iVar1 = tokio::runtime::task::harness::can_read_output(param_1,param_1 + 0x50);
  if (iVar1 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x30) = 2;
    local_50 = (int)uVar5;
    if (local_50 != 1) {
                    /* try { // try from 0054a3e4 to 0054a3fb has its CatchHandler @ 0054a434 */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                (&DAT_002c1c6c,0x45,&PTR_s__root__cargo_registry_src_index__00acecf8);
    }
    lVar7 = *(long *)(param_1 + 0x40);
    lVar6 = *(long *)(param_1 + 0x38);
    lVar2 = *(long *)(param_1 + 0x48);
    if (((*param_2 == 0) && (param_2[1] != 0)) && (__ptr = (void *)param_2[2], __ptr != (void *)0x0)
       ) {
      puVar4 = (undefined8 *)param_2[3];
      pcVar3 = (code *)*puVar4;
      if (pcVar3 != (code *)0x0) {
                    /* try { // try from 0054a3c8 to 0054a3cf has its CatchHandler @ 0054a400 */
        (*pcVar3)(__ptr);
      }
      if (puVar4[1] != 0) {
        free(__ptr);
      }
    }
    *param_2 = 0;
    param_2[2] = lVar7;
    param_2[1] = lVar6;
    param_2[3] = lVar2;
  }
  return;
}


// ===== 0054a44c  FUN_0054a44c =====

void FUN_0054a44c(long param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  auVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::
           transition_to_join_handle_dropped();
  if ((auVar2 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
                    /* try { // try from 0054a47c to 0054a47f has its CatchHandler @ 0054a51c */
    local_38 = <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                         (*(undefined8 *)(param_1 + 0x28));
                    /* try { // try from 0054a484 to 0054a48b has its CatchHandler @ 0054a500 */
    FUN_00503218(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x38) = uStack_50;
    *(ulong *)(param_1 + 0x30) = CONCAT44(uStack_54,2);
    *(undefined8 *)(param_1 + 0x48) = uStack_40;
    *(undefined8 *)(param_1 + 0x40) = local_48;
                    /* try { // try from 0054a498 to 0054a49f has its CatchHandler @ 0054a4f8 */
    <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&local_38);
  }
  if ((auVar2 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
    iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(param_1);
  }
  else {
    <tokio::runtime::task::core::[6]::tokio::runtime::task::core::Trailer>::set_waker
              (param_1 + 0x50,0);
    iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(param_1);
  }
  if (iVar1 == 0) {
    return;
  }
  FUN_00544ab0(param_1);
  return;
}


// ===== 0054a584  FUN_0054a584 =====

void FUN_0054a584(long param_1)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  undefined ***pppuVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined *local_a8;
  long lStack_a0;
  undefined **local_98;
  undefined **local_90;
  undefined8 uStack_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  ulong uStack_40;
  undefined8 local_38;
  undefined **local_18;
  
  bVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_running()
  ;
  if (1 < bVar1) {
    if (bVar1 == 2) {
      return;
    }
    goto LAB_0054a618;
  }
  if (bVar1 == 0) {
    local_a8 = PTR_WAKER_VTABLE_00b00d40;
    local_98 = &local_a8;
    uStack_88 = 0;
                    /* try { // try from 0054a5c8 to 0054a5d3 has its CatchHandler @ 0054a8f4 */
    lStack_a0 = param_1;
    local_90 = local_98;
    uVar3 = FUN_0050b4cc(param_1 + 0x20,&local_98);
    if ((uVar3 & 1) == 0) {
      uStack_50 = 0;
      local_48 = 0;
      local_58 = 1;
      uStack_40 = uVar3 & 0xffffffff;
                    /* try { // try from 0054a6c4 to 0054a6cb has its CatchHandler @ 0054a814 */
      local_78 = <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                           (*(undefined8 *)(param_1 + 0x28));
                    /* try { // try from 0054a6d0 to 0054a6d7 has its CatchHandler @ 0054a7f8 */
      FUN_00503218(param_1 + 0x30);
      *(undefined8 *)(param_1 + 0x38) = uStack_50;
      *(ulong *)(param_1 + 0x30) = CONCAT44(uStack_54,local_58);
      *(ulong *)(param_1 + 0x48) = uStack_40;
      *(undefined8 *)(param_1 + 0x40) = local_48;
                    /* try { // try from 0054a6e4 to 0054a6eb has its CatchHandler @ 0054a7f0 */
      <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&local_78);
      goto LAB_0054a6ec;
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
LAB_0054a618:
      FUN_00544ab0(param_1);
      return;
    }
    if (bVar1 == 2) goto LAB_0054a618;
    local_58 = 2;
                    /* try { // try from 0054a71c to 0054a71f has its CatchHandler @ 0054a7d0 */
    local_38 = <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                         (*(undefined8 *)(param_1 + 0x28));
                    /* try { // try from 0054a724 to 0054a72b has its CatchHandler @ 0054a7a0 */
    FUN_00503218(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x38) = uStack_50;
    *(ulong *)(param_1 + 0x30) = CONCAT44(uStack_54,local_58);
    *(ulong *)(param_1 + 0x48) = uStack_40;
    *(undefined8 *)(param_1 + 0x40) = local_48;
                    /* try { // try from 0054a738 to 0054a73f has its CatchHandler @ 0054a77c */
    <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&local_38);
    uStack_70 = *(undefined8 *)(param_1 + 0x28);
    local_68 = 0;
    local_78 = CONCAT44(local_78._4_4_,1);
    uStack_60 = extraout_x1_00;
                    /* try { // try from 0054a758 to 0054a75f has its CatchHandler @ 0054a7bc */
    local_18 = (undefined **)
               <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                         (uStack_70);
                    /* try { // try from 0054a764 to 0054a76b has its CatchHandler @ 0054a784 */
    FUN_00503218(param_1 + 0x30);
    pppuVar4 = &local_18;
  }
  else {
    local_58 = 2;
                    /* try { // try from 0054a640 to 0054a643 has its CatchHandler @ 0054a8d4 */
    local_a8 = (undefined *)
               <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                         (*(undefined8 *)(param_1 + 0x28));
                    /* try { // try from 0054a648 to 0054a64f has its CatchHandler @ 0054a8a0 */
    FUN_00503218(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x38) = uStack_50;
    *(ulong *)(param_1 + 0x30) = CONCAT44(uStack_54,local_58);
    *(ulong *)(param_1 + 0x48) = uStack_40;
    *(undefined8 *)(param_1 + 0x40) = local_48;
                    /* try { // try from 0054a65c to 0054a663 has its CatchHandler @ 0054a87c */
    <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&local_a8);
    uStack_70 = *(undefined8 *)(param_1 + 0x28);
    local_68 = 0;
    local_78 = CONCAT44(local_78._4_4_,1);
    uStack_60 = extraout_x1;
                    /* try { // try from 0054a67c to 0054a683 has its CatchHandler @ 0054a8bc */
    local_98 = (undefined **)
               <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                         (uStack_70);
                    /* try { // try from 0054a688 to 0054a68f has its CatchHandler @ 0054a884 */
    FUN_00503218(param_1 + 0x30);
    pppuVar4 = &local_98;
  }
  *(undefined8 *)(param_1 + 0x38) = uStack_70;
  *(undefined8 *)(param_1 + 0x30) = local_78;
  *(undefined8 *)(param_1 + 0x48) = uStack_60;
  *(undefined8 *)(param_1 + 0x40) = local_68;
  <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(pppuVar4);
LAB_0054a6ec:
  FUN_0054a92c(param_1);
  return;
}


// ===== 0054a92c  FUN_0054a92c =====

void FUN_0054a92c(long param_1)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_18;
  
  uVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_complete
                    ();
  if ((uVar2 >> 3 & 1) == 0) {
    local_58 = 2;
                    /* try { // try from 0054a958 to 0054a95b has its CatchHandler @ 0054aa38 */
    local_18 = <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                         (*(undefined8 *)(param_1 + 0x28));
                    /* try { // try from 0054a960 to 0054a967 has its CatchHandler @ 0054aa1c */
    FUN_00503218(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x38) = uStack_50;
    *(ulong *)(param_1 + 0x30) = CONCAT44(uStack_54,local_58);
    *(undefined8 *)(param_1 + 0x48) = uStack_40;
    *(undefined8 *)(param_1 + 0x40) = local_48;
                    /* try { // try from 0054a974 to 0054a9a3 has its CatchHandler @ 0054aa88 */
    <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&local_18);
  }
  else if ((uVar2 >> 4 & 1) != 0) {
    <tokio::runtime::task::core::[6]::tokio::runtime::task::core::Trailer>::wake_join
              (param_1 + 0x50);
    uVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::
            unset_waker_after_complete(param_1);
    if ((uVar2 >> 3 & 1) == 0) {
      <tokio::runtime::task::core::[6]::tokio::runtime::task::core::Trailer>::set_waker
                (param_1 + 0x50,0);
    }
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    local_38 = *(undefined8 *)(param_1 + 0x28);
                    /* try { // try from 0054a9cc to 0054a9d7 has its CatchHandler @ 0054aa4c */
    (**(code **)(*(long *)(param_1 + 0x78) + 0x28))
              (*(long *)(param_1 + 0x70) +
               (*(long *)(*(long *)(param_1 + 0x78) + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
               &local_38);
  }
  local_60 = param_1;
  lVar3 = <alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>as_tokio::runtime::task::Schedule>
          ::release(param_1 + 0x20,&local_60);
  uVar1 = 1;
  if (lVar3 != 0) {
    uVar1 = 2;
  }
  uVar4 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_terminal
                    (param_1,uVar1);
  if ((uVar4 & 1) != 0) {
    FUN_00544ab0(param_1);
  }
  return;
}


// ===== 0054aae4  FUN_0054aae4 =====

void FUN_0054aae4(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 extraout_x1;
  undefined8 uVar3;
  undefined4 uStack_6c;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  
  uVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_shutdown
                    ();
  if ((uVar2 & 1) == 0) {
    iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(param_1);
    if (iVar1 != 0) {
      FUN_00544ab0(param_1);
      return;
    }
  }
  else {
                    /* try { // try from 0054ab0c to 0054ab0f has its CatchHandler @ 0054abf4 */
    local_30 = <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                         (*(undefined8 *)(param_1 + 0x28));
                    /* try { // try from 0054ab14 to 0054ab1b has its CatchHandler @ 0054abc4 */
    FUN_00503218(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x38) = uStack_48;
    *(ulong *)(param_1 + 0x30) = CONCAT44(uStack_4c,2);
    *(undefined8 *)(param_1 + 0x48) = uStack_38;
    *(undefined8 *)(param_1 + 0x40) = uStack_40;
                    /* try { // try from 0054ab24 to 0054ab2b has its CatchHandler @ 0054aba4 */
    <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&local_30);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
                    /* try { // try from 0054ab44 to 0054ab4b has its CatchHandler @ 0054abdc */
    local_28 = <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                         (uVar3);
                    /* try { // try from 0054ab50 to 0054ab57 has its CatchHandler @ 0054abac */
    FUN_00503218(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x38) = uVar3;
    *(ulong *)(param_1 + 0x30) = CONCAT44(uStack_6c,1);
    *(undefined8 *)(param_1 + 0x48) = extraout_x1;
    *(undefined8 *)(param_1 + 0x40) = 0;
    <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&local_28);
    FUN_0054a92c(param_1);
  }
  return;
}


// ===== 0054ac14  FUN_0054ac14 =====

void FUN_0054ac14(long param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  auVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::
           transition_to_join_handle_dropped();
  if ((auVar2 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
                    /* try { // try from 0054ac44 to 0054ac47 has its CatchHandler @ 0054ace4 */
    local_38 = <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                         (*(undefined8 *)(param_1 + 0x28));
                    /* try { // try from 0054ac4c to 0054ac53 has its CatchHandler @ 0054acc8 */
    FUN_00503218(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x38) = uStack_50;
    *(ulong *)(param_1 + 0x30) = CONCAT44(uStack_54,2);
    *(undefined8 *)(param_1 + 0x48) = uStack_40;
    *(undefined8 *)(param_1 + 0x40) = local_48;
                    /* try { // try from 0054ac60 to 0054ac67 has its CatchHandler @ 0054acc0 */
    <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&local_38);
  }
  if ((auVar2 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
    iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(param_1);
  }
  else {
    <tokio::runtime::task::core::[6]::tokio::runtime::task::core::Trailer>::set_waker
              (param_1 + 0x50,0);
    iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(param_1);
  }
  if (iVar1 == 0) {
    return;
  }
  FUN_00544bb4(param_1);
  return;
}


// ===== 0054ad4c  FUN_0054ad4c =====

void FUN_0054ad4c(long param_1)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  undefined ***pppuVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined *local_a8;
  long lStack_a0;
  undefined **local_98;
  undefined **local_90;
  undefined8 uStack_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  ulong uStack_40;
  undefined8 local_38;
  undefined **local_18;
  
  bVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_running()
  ;
  if (1 < bVar1) {
    if (bVar1 == 2) {
      return;
    }
    goto LAB_0054ade0;
  }
  if (bVar1 == 0) {
    local_a8 = PTR_WAKER_VTABLE_00b00d40;
    local_98 = &local_a8;
    uStack_88 = 0;
                    /* try { // try from 0054ad90 to 0054ad9b has its CatchHandler @ 0054b0bc */
    lStack_a0 = param_1;
    local_90 = local_98;
    uVar3 = FUN_0050b4cc(param_1 + 0x20,&local_98);
    if ((uVar3 & 1) == 0) {
      uStack_50 = 0;
      local_48 = 0;
      local_58 = 1;
      uStack_40 = uVar3 & 0xffffffff;
                    /* try { // try from 0054ae8c to 0054ae93 has its CatchHandler @ 0054afdc */
      local_78 = <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                           (*(undefined8 *)(param_1 + 0x28));
                    /* try { // try from 0054ae98 to 0054ae9f has its CatchHandler @ 0054afc0 */
      FUN_00503218(param_1 + 0x30);
      *(undefined8 *)(param_1 + 0x38) = uStack_50;
      *(ulong *)(param_1 + 0x30) = CONCAT44(uStack_54,local_58);
      *(ulong *)(param_1 + 0x48) = uStack_40;
      *(undefined8 *)(param_1 + 0x40) = local_48;
                    /* try { // try from 0054aeac to 0054aeb3 has its CatchHandler @ 0054afb8 */
      <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&local_78);
      goto LAB_0054aeb4;
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
LAB_0054ade0:
      FUN_00544bb4(param_1);
      return;
    }
    if (bVar1 == 2) goto LAB_0054ade0;
    local_58 = 2;
                    /* try { // try from 0054aee4 to 0054aee7 has its CatchHandler @ 0054af98 */
    local_38 = <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                         (*(undefined8 *)(param_1 + 0x28));
                    /* try { // try from 0054aeec to 0054aef3 has its CatchHandler @ 0054af68 */
    FUN_00503218(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x38) = uStack_50;
    *(ulong *)(param_1 + 0x30) = CONCAT44(uStack_54,local_58);
    *(ulong *)(param_1 + 0x48) = uStack_40;
    *(undefined8 *)(param_1 + 0x40) = local_48;
                    /* try { // try from 0054af00 to 0054af07 has its CatchHandler @ 0054af44 */
    <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&local_38);
    uStack_70 = *(undefined8 *)(param_1 + 0x28);
    local_68 = 0;
    local_78 = CONCAT44(local_78._4_4_,1);
    uStack_60 = extraout_x1_00;
                    /* try { // try from 0054af20 to 0054af27 has its CatchHandler @ 0054af84 */
    local_18 = (undefined **)
               <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                         (uStack_70);
                    /* try { // try from 0054af2c to 0054af33 has its CatchHandler @ 0054af4c */
    FUN_00503218(param_1 + 0x30);
    pppuVar4 = &local_18;
  }
  else {
    local_58 = 2;
                    /* try { // try from 0054ae08 to 0054ae0b has its CatchHandler @ 0054b09c */
    local_a8 = (undefined *)
               <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                         (*(undefined8 *)(param_1 + 0x28));
                    /* try { // try from 0054ae10 to 0054ae17 has its CatchHandler @ 0054b068 */
    FUN_00503218(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x38) = uStack_50;
    *(ulong *)(param_1 + 0x30) = CONCAT44(uStack_54,local_58);
    *(ulong *)(param_1 + 0x48) = uStack_40;
    *(undefined8 *)(param_1 + 0x40) = local_48;
                    /* try { // try from 0054ae24 to 0054ae2b has its CatchHandler @ 0054b044 */
    <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&local_a8);
    uStack_70 = *(undefined8 *)(param_1 + 0x28);
    local_68 = 0;
    local_78 = CONCAT44(local_78._4_4_,1);
    uStack_60 = extraout_x1;
                    /* try { // try from 0054ae44 to 0054ae4b has its CatchHandler @ 0054b084 */
    local_98 = (undefined **)
               <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                         (uStack_70);
                    /* try { // try from 0054ae50 to 0054ae57 has its CatchHandler @ 0054b04c */
    FUN_00503218(param_1 + 0x30);
    pppuVar4 = &local_98;
  }
  *(undefined8 *)(param_1 + 0x38) = uStack_70;
  *(undefined8 *)(param_1 + 0x30) = local_78;
  *(undefined8 *)(param_1 + 0x48) = uStack_60;
  *(undefined8 *)(param_1 + 0x40) = local_68;
  <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(pppuVar4);
LAB_0054aeb4:
  FUN_0054b0f4(param_1);
  return;
}


// ===== 0054b0f4  FUN_0054b0f4 =====

void FUN_0054b0f4(long param_1)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_18;
  
  uVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_complete
                    ();
  if ((uVar2 >> 3 & 1) == 0) {
    local_58 = 2;
                    /* try { // try from 0054b120 to 0054b123 has its CatchHandler @ 0054b200 */
    local_18 = <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                         (*(undefined8 *)(param_1 + 0x28));
                    /* try { // try from 0054b128 to 0054b12f has its CatchHandler @ 0054b1e4 */
    FUN_00503218(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x38) = uStack_50;
    *(ulong *)(param_1 + 0x30) = CONCAT44(uStack_54,local_58);
    *(undefined8 *)(param_1 + 0x48) = uStack_40;
    *(undefined8 *)(param_1 + 0x40) = local_48;
                    /* try { // try from 0054b13c to 0054b16b has its CatchHandler @ 0054b250 */
    <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&local_18);
  }
  else if ((uVar2 >> 4 & 1) != 0) {
    <tokio::runtime::task::core::[6]::tokio::runtime::task::core::Trailer>::wake_join
              (param_1 + 0x50);
    uVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::
            unset_waker_after_complete(param_1);
    if ((uVar2 >> 3 & 1) == 0) {
      <tokio::runtime::task::core::[6]::tokio::runtime::task::core::Trailer>::set_waker
                (param_1 + 0x50,0);
    }
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    local_38 = *(undefined8 *)(param_1 + 0x28);
                    /* try { // try from 0054b194 to 0054b19f has its CatchHandler @ 0054b214 */
    (**(code **)(*(long *)(param_1 + 0x78) + 0x28))
              (*(long *)(param_1 + 0x70) +
               (*(long *)(*(long *)(param_1 + 0x78) + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
               &local_38);
  }
  local_60 = param_1;
  lVar3 = <alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>as_tokio::runtime::task::Schedule>
          ::release(param_1 + 0x20,&local_60);
  uVar1 = 1;
  if (lVar3 != 0) {
    uVar1 = 2;
  }
  uVar4 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_terminal
                    (param_1,uVar1);
  if ((uVar4 & 1) != 0) {
    FUN_00544bb4(param_1);
  }
  return;
}


// ===== 0054b2ac  FUN_0054b2ac =====

void FUN_0054b2ac(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 extraout_x1;
  undefined8 uVar3;
  undefined4 uStack_6c;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  
  uVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_shutdown
                    ();
  if ((uVar2 & 1) == 0) {
    iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(param_1);
    if (iVar1 != 0) {
      FUN_00544bb4(param_1);
      return;
    }
  }
  else {
                    /* try { // try from 0054b2d4 to 0054b2d7 has its CatchHandler @ 0054b3bc */
    local_30 = <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                         (*(undefined8 *)(param_1 + 0x28));
                    /* try { // try from 0054b2dc to 0054b2e3 has its CatchHandler @ 0054b38c */
    FUN_00503218(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x38) = uStack_48;
    *(ulong *)(param_1 + 0x30) = CONCAT44(uStack_4c,2);
    *(undefined8 *)(param_1 + 0x48) = uStack_38;
    *(undefined8 *)(param_1 + 0x40) = uStack_40;
                    /* try { // try from 0054b2ec to 0054b2f3 has its CatchHandler @ 0054b36c */
    <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&local_30);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
                    /* try { // try from 0054b30c to 0054b313 has its CatchHandler @ 0054b3a4 */
    local_28 = <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                         (uVar3);
                    /* try { // try from 0054b318 to 0054b31f has its CatchHandler @ 0054b374 */
    FUN_00503218(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x38) = uVar3;
    *(ulong *)(param_1 + 0x30) = CONCAT44(uStack_6c,1);
    *(undefined8 *)(param_1 + 0x48) = extraout_x1;
    *(undefined8 *)(param_1 + 0x40) = 0;
    <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&local_28);
    FUN_0054b0f4(param_1);
  }
  return;
}


// ===== 0054b3dc  FUN_0054b3dc =====

void FUN_0054b3dc(long param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  auVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::
           transition_to_join_handle_dropped();
  if ((auVar2 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
                    /* try { // try from 0054b40c to 0054b40f has its CatchHandler @ 0054b4ac */
    local_38 = <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                         (*(undefined8 *)(param_1 + 0x28));
                    /* try { // try from 0054b414 to 0054b41b has its CatchHandler @ 0054b490 */
    FUN_00503218(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x38) = uStack_50;
    *(ulong *)(param_1 + 0x30) = CONCAT44(uStack_54,2);
    *(undefined8 *)(param_1 + 0x48) = uStack_40;
    *(undefined8 *)(param_1 + 0x40) = local_48;
                    /* try { // try from 0054b428 to 0054b42f has its CatchHandler @ 0054b488 */
    <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&local_38);
  }
  if ((auVar2 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
    iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(param_1);
  }
  else {
    <tokio::runtime::task::core::[6]::tokio::runtime::task::core::Trailer>::set_waker
              (param_1 + 0x50,0);
    iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(param_1);
  }
  if (iVar1 == 0) {
    return;
  }
  FUN_00544ab0(param_1);
  return;
}


// ===== 0054b514  FUN_0054b514 =====

void FUN_0054b514(long param_1)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  undefined ***pppuVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined *local_a8;
  long lStack_a0;
  undefined **local_98;
  undefined **local_90;
  undefined8 uStack_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  ulong uStack_40;
  undefined8 local_38;
  undefined **local_18;
  
  bVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_running()
  ;
  if (1 < bVar1) {
    if (bVar1 == 2) {
      return;
    }
    goto LAB_0054b5a8;
  }
  if (bVar1 == 0) {
    local_a8 = PTR_WAKER_VTABLE_00b00d40;
    local_98 = &local_a8;
    uStack_88 = 0;
                    /* try { // try from 0054b558 to 0054b563 has its CatchHandler @ 0054b884 */
    lStack_a0 = param_1;
    local_90 = local_98;
    uVar3 = FUN_0050b4cc(param_1 + 0x20,&local_98);
    if ((uVar3 & 1) == 0) {
      uStack_50 = 0;
      local_48 = 0;
      local_58 = 1;
      uStack_40 = uVar3 & 0xffffffff;
                    /* try { // try from 0054b654 to 0054b65b has its CatchHandler @ 0054b7a4 */
      local_78 = <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                           (*(undefined8 *)(param_1 + 0x28));
                    /* try { // try from 0054b660 to 0054b667 has its CatchHandler @ 0054b788 */
      FUN_00503218(param_1 + 0x30);
      *(undefined8 *)(param_1 + 0x38) = uStack_50;
      *(ulong *)(param_1 + 0x30) = CONCAT44(uStack_54,local_58);
      *(ulong *)(param_1 + 0x48) = uStack_40;
      *(undefined8 *)(param_1 + 0x40) = local_48;
                    /* try { // try from 0054b674 to 0054b67b has its CatchHandler @ 0054b780 */
      <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&local_78);
      goto LAB_0054b67c;
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
LAB_0054b5a8:
      FUN_00544ab0(param_1);
      return;
    }
    if (bVar1 == 2) goto LAB_0054b5a8;
    local_58 = 2;
                    /* try { // try from 0054b6ac to 0054b6af has its CatchHandler @ 0054b760 */
    local_38 = <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                         (*(undefined8 *)(param_1 + 0x28));
                    /* try { // try from 0054b6b4 to 0054b6bb has its CatchHandler @ 0054b730 */
    FUN_00503218(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x38) = uStack_50;
    *(ulong *)(param_1 + 0x30) = CONCAT44(uStack_54,local_58);
    *(ulong *)(param_1 + 0x48) = uStack_40;
    *(undefined8 *)(param_1 + 0x40) = local_48;
                    /* try { // try from 0054b6c8 to 0054b6cf has its CatchHandler @ 0054b70c */
    <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&local_38);
    uStack_70 = *(undefined8 *)(param_1 + 0x28);
    local_68 = 0;
    local_78 = CONCAT44(local_78._4_4_,1);
    uStack_60 = extraout_x1_00;
                    /* try { // try from 0054b6e8 to 0054b6ef has its CatchHandler @ 0054b74c */
    local_18 = (undefined **)
               <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                         (uStack_70);
                    /* try { // try from 0054b6f4 to 0054b6fb has its CatchHandler @ 0054b714 */
    FUN_00503218(param_1 + 0x30);
    pppuVar4 = &local_18;
  }
  else {
    local_58 = 2;
                    /* try { // try from 0054b5d0 to 0054b5d3 has its CatchHandler @ 0054b864 */
    local_a8 = (undefined *)
               <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                         (*(undefined8 *)(param_1 + 0x28));
                    /* try { // try from 0054b5d8 to 0054b5df has its CatchHandler @ 0054b830 */
    FUN_00503218(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x38) = uStack_50;
    *(ulong *)(param_1 + 0x30) = CONCAT44(uStack_54,local_58);
    *(ulong *)(param_1 + 0x48) = uStack_40;
    *(undefined8 *)(param_1 + 0x40) = local_48;
                    /* try { // try from 0054b5ec to 0054b5f3 has its CatchHandler @ 0054b80c */
    <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&local_a8);
    uStack_70 = *(undefined8 *)(param_1 + 0x28);
    local_68 = 0;
    local_78 = CONCAT44(local_78._4_4_,1);
    uStack_60 = extraout_x1;
                    /* try { // try from 0054b60c to 0054b613 has its CatchHandler @ 0054b84c */
    local_98 = (undefined **)
               <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                         (uStack_70);
                    /* try { // try from 0054b618 to 0054b61f has its CatchHandler @ 0054b814 */
    FUN_00503218(param_1 + 0x30);
    pppuVar4 = &local_98;
  }
  *(undefined8 *)(param_1 + 0x38) = uStack_70;
  *(undefined8 *)(param_1 + 0x30) = local_78;
  *(undefined8 *)(param_1 + 0x48) = uStack_60;
  *(undefined8 *)(param_1 + 0x40) = local_68;
  <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(pppuVar4);
LAB_0054b67c:
  FUN_0054b8bc(param_1);
  return;
}


// ===== 0054b8bc  FUN_0054b8bc =====

void FUN_0054b8bc(long param_1)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_18;
  
  uVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_complete
                    ();
  if ((uVar2 >> 3 & 1) == 0) {
    local_58 = 2;
                    /* try { // try from 0054b8e8 to 0054b8eb has its CatchHandler @ 0054b9c8 */
    local_18 = <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                         (*(undefined8 *)(param_1 + 0x28));
                    /* try { // try from 0054b8f0 to 0054b8f7 has its CatchHandler @ 0054b9ac */
    FUN_00503218(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x38) = uStack_50;
    *(ulong *)(param_1 + 0x30) = CONCAT44(uStack_54,local_58);
    *(undefined8 *)(param_1 + 0x48) = uStack_40;
    *(undefined8 *)(param_1 + 0x40) = local_48;
                    /* try { // try from 0054b904 to 0054b933 has its CatchHandler @ 0054ba18 */
    <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&local_18);
  }
  else if ((uVar2 >> 4 & 1) != 0) {
    <tokio::runtime::task::core::[6]::tokio::runtime::task::core::Trailer>::wake_join
              (param_1 + 0x50);
    uVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::
            unset_waker_after_complete(param_1);
    if ((uVar2 >> 3 & 1) == 0) {
      <tokio::runtime::task::core::[6]::tokio::runtime::task::core::Trailer>::set_waker
                (param_1 + 0x50,0);
    }
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    local_38 = *(undefined8 *)(param_1 + 0x28);
                    /* try { // try from 0054b95c to 0054b967 has its CatchHandler @ 0054b9dc */
    (**(code **)(*(long *)(param_1 + 0x78) + 0x28))
              (*(long *)(param_1 + 0x70) +
               (*(long *)(*(long *)(param_1 + 0x78) + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
               &local_38);
  }
  local_60 = param_1;
  lVar3 = <alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>as_tokio::runtime::task::Schedule>
          ::release(param_1 + 0x20,&local_60);
  uVar1 = 1;
  if (lVar3 != 0) {
    uVar1 = 2;
  }
  uVar4 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_terminal
                    (param_1,uVar1);
  if ((uVar4 & 1) != 0) {
    FUN_00544ab0(param_1);
  }
  return;
}


// ===== 0054ba74  FUN_0054ba74 =====

void FUN_0054ba74(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 extraout_x1;
  undefined8 uVar3;
  undefined4 uStack_6c;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  
  uVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_shutdown
                    ();
  if ((uVar2 & 1) == 0) {
    iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(param_1);
    if (iVar1 != 0) {
      FUN_00544ab0(param_1);
      return;
    }
  }
  else {
                    /* try { // try from 0054ba9c to 0054ba9f has its CatchHandler @ 0054bb84 */
    local_30 = <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                         (*(undefined8 *)(param_1 + 0x28));
                    /* try { // try from 0054baa4 to 0054baab has its CatchHandler @ 0054bb54 */
    FUN_00503218(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x38) = uStack_48;
    *(ulong *)(param_1 + 0x30) = CONCAT44(uStack_4c,2);
    *(undefined8 *)(param_1 + 0x48) = uStack_38;
    *(undefined8 *)(param_1 + 0x40) = uStack_40;
                    /* try { // try from 0054bab4 to 0054babb has its CatchHandler @ 0054bb34 */
    <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&local_30);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
                    /* try { // try from 0054bad4 to 0054badb has its CatchHandler @ 0054bb6c */
    local_28 = <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                         (uVar3);
                    /* try { // try from 0054bae0 to 0054bae7 has its CatchHandler @ 0054bb3c */
    FUN_00503218(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x38) = uVar3;
    *(ulong *)(param_1 + 0x30) = CONCAT44(uStack_6c,1);
    *(undefined8 *)(param_1 + 0x48) = extraout_x1;
    *(undefined8 *)(param_1 + 0x40) = 0;
    <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&local_28);
    FUN_0054b8bc(param_1);
  }
  return;
}


// ===== 0054bba4  FUN_0054bba4 =====

void FUN_0054bba4(long param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  auVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::
           transition_to_join_handle_dropped();
  if ((auVar2 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
                    /* try { // try from 0054bbd4 to 0054bbd7 has its CatchHandler @ 0054bc74 */
    local_38 = <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                         (*(undefined8 *)(param_1 + 0x28));
                    /* try { // try from 0054bbdc to 0054bbe3 has its CatchHandler @ 0054bc58 */
    FUN_00503218(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x38) = uStack_50;
    *(ulong *)(param_1 + 0x30) = CONCAT44(uStack_54,2);
    *(undefined8 *)(param_1 + 0x48) = uStack_40;
    *(undefined8 *)(param_1 + 0x40) = local_48;
                    /* try { // try from 0054bbf0 to 0054bbf7 has its CatchHandler @ 0054bc50 */
    <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&local_38);
  }
  if ((auVar2 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
    iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(param_1);
  }
  else {
    <tokio::runtime::task::core::[6]::tokio::runtime::task::core::Trailer>::set_waker
              (param_1 + 0x50,0);
    iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(param_1);
  }
  if (iVar1 == 0) {
    return;
  }
  FUN_00544bb4(param_1);
  return;
}


// ===== 0054bcdc  FUN_0054bcdc =====

void FUN_0054bcdc(long param_1)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  undefined ***pppuVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined *local_a8;
  long lStack_a0;
  undefined **local_98;
  undefined **local_90;
  undefined8 uStack_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  ulong uStack_40;
  undefined8 local_38;
  undefined **local_18;
  
  bVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_running()
  ;
  if (1 < bVar1) {
    if (bVar1 == 2) {
      return;
    }
    goto LAB_0054bd70;
  }
  if (bVar1 == 0) {
    local_a8 = PTR_WAKER_VTABLE_00b00d40;
    local_98 = &local_a8;
    uStack_88 = 0;
                    /* try { // try from 0054bd20 to 0054bd2b has its CatchHandler @ 0054c04c */
    lStack_a0 = param_1;
    local_90 = local_98;
    uVar3 = FUN_0050b4cc(param_1 + 0x20,&local_98);
    if ((uVar3 & 1) == 0) {
      uStack_50 = 0;
      local_48 = 0;
      local_58 = 1;
      uStack_40 = uVar3 & 0xffffffff;
                    /* try { // try from 0054be1c to 0054be23 has its CatchHandler @ 0054bf6c */
      local_78 = <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                           (*(undefined8 *)(param_1 + 0x28));
                    /* try { // try from 0054be28 to 0054be2f has its CatchHandler @ 0054bf50 */
      FUN_00503218(param_1 + 0x30);
      *(undefined8 *)(param_1 + 0x38) = uStack_50;
      *(ulong *)(param_1 + 0x30) = CONCAT44(uStack_54,local_58);
      *(ulong *)(param_1 + 0x48) = uStack_40;
      *(undefined8 *)(param_1 + 0x40) = local_48;
                    /* try { // try from 0054be3c to 0054be43 has its CatchHandler @ 0054bf48 */
      <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&local_78);
      goto LAB_0054be44;
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
LAB_0054bd70:
      FUN_00544bb4(param_1);
      return;
    }
    if (bVar1 == 2) goto LAB_0054bd70;
    local_58 = 2;
                    /* try { // try from 0054be74 to 0054be77 has its CatchHandler @ 0054bf28 */
    local_38 = <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                         (*(undefined8 *)(param_1 + 0x28));
                    /* try { // try from 0054be7c to 0054be83 has its CatchHandler @ 0054bef8 */
    FUN_00503218(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x38) = uStack_50;
    *(ulong *)(param_1 + 0x30) = CONCAT44(uStack_54,local_58);
    *(ulong *)(param_1 + 0x48) = uStack_40;
    *(undefined8 *)(param_1 + 0x40) = local_48;
                    /* try { // try from 0054be90 to 0054be97 has its CatchHandler @ 0054bed4 */
    <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&local_38);
    uStack_70 = *(undefined8 *)(param_1 + 0x28);
    local_68 = 0;
    local_78 = CONCAT44(local_78._4_4_,1);
    uStack_60 = extraout_x1_00;
                    /* try { // try from 0054beb0 to 0054beb7 has its CatchHandler @ 0054bf14 */
    local_18 = (undefined **)
               <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                         (uStack_70);
                    /* try { // try from 0054bebc to 0054bec3 has its CatchHandler @ 0054bedc */
    FUN_00503218(param_1 + 0x30);
    pppuVar4 = &local_18;
  }
  else {
    local_58 = 2;
                    /* try { // try from 0054bd98 to 0054bd9b has its CatchHandler @ 0054c02c */
    local_a8 = (undefined *)
               <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                         (*(undefined8 *)(param_1 + 0x28));
                    /* try { // try from 0054bda0 to 0054bda7 has its CatchHandler @ 0054bff8 */
    FUN_00503218(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x38) = uStack_50;
    *(ulong *)(param_1 + 0x30) = CONCAT44(uStack_54,local_58);
    *(ulong *)(param_1 + 0x48) = uStack_40;
    *(undefined8 *)(param_1 + 0x40) = local_48;
                    /* try { // try from 0054bdb4 to 0054bdbb has its CatchHandler @ 0054bfd4 */
    <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&local_a8);
    uStack_70 = *(undefined8 *)(param_1 + 0x28);
    local_68 = 0;
    local_78 = CONCAT44(local_78._4_4_,1);
    uStack_60 = extraout_x1;
                    /* try { // try from 0054bdd4 to 0054bddb has its CatchHandler @ 0054c014 */
    local_98 = (undefined **)
               <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                         (uStack_70);
                    /* try { // try from 0054bde0 to 0054bde7 has its CatchHandler @ 0054bfdc */
    FUN_00503218(param_1 + 0x30);
    pppuVar4 = &local_98;
  }
  *(undefined8 *)(param_1 + 0x38) = uStack_70;
  *(undefined8 *)(param_1 + 0x30) = local_78;
  *(undefined8 *)(param_1 + 0x48) = uStack_60;
  *(undefined8 *)(param_1 + 0x40) = local_68;
  <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(pppuVar4);
LAB_0054be44:
  FUN_0054c084(param_1);
  return;
}


// ===== 0054c084  FUN_0054c084 =====

void FUN_0054c084(long param_1)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_18;
  
  uVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_complete
                    ();
  if ((uVar2 >> 3 & 1) == 0) {
    local_58 = 2;
                    /* try { // try from 0054c0b0 to 0054c0b3 has its CatchHandler @ 0054c190 */
    local_18 = <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                         (*(undefined8 *)(param_1 + 0x28));
                    /* try { // try from 0054c0b8 to 0054c0bf has its CatchHandler @ 0054c174 */
    FUN_00503218(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x38) = uStack_50;
    *(ulong *)(param_1 + 0x30) = CONCAT44(uStack_54,local_58);
    *(undefined8 *)(param_1 + 0x48) = uStack_40;
    *(undefined8 *)(param_1 + 0x40) = local_48;
                    /* try { // try from 0054c0cc to 0054c0fb has its CatchHandler @ 0054c1e0 */
    <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&local_18);
  }
  else if ((uVar2 >> 4 & 1) != 0) {
    <tokio::runtime::task::core::[6]::tokio::runtime::task::core::Trailer>::wake_join
              (param_1 + 0x50);
    uVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::
            unset_waker_after_complete(param_1);
    if ((uVar2 >> 3 & 1) == 0) {
      <tokio::runtime::task::core::[6]::tokio::runtime::task::core::Trailer>::set_waker
                (param_1 + 0x50,0);
    }
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    local_38 = *(undefined8 *)(param_1 + 0x28);
                    /* try { // try from 0054c124 to 0054c12f has its CatchHandler @ 0054c1a4 */
    (**(code **)(*(long *)(param_1 + 0x78) + 0x28))
              (*(long *)(param_1 + 0x70) +
               (*(long *)(*(long *)(param_1 + 0x78) + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
               &local_38);
  }
  local_60 = param_1;
  lVar3 = <alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>as_tokio::runtime::task::Schedule>
          ::release(param_1 + 0x20,&local_60);
  uVar1 = 1;
  if (lVar3 != 0) {
    uVar1 = 2;
  }
  uVar4 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_terminal
                    (param_1,uVar1);
  if ((uVar4 & 1) != 0) {
    FUN_00544bb4(param_1);
  }
  return;
}


// ===== 0054c23c  FUN_0054c23c =====

void FUN_0054c23c(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 extraout_x1;
  undefined8 uVar3;
  undefined4 uStack_6c;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  
  uVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_shutdown
                    ();
  if ((uVar2 & 1) == 0) {
    iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(param_1);
    if (iVar1 != 0) {
      FUN_00544bb4(param_1);
      return;
    }
  }
  else {
                    /* try { // try from 0054c264 to 0054c267 has its CatchHandler @ 0054c34c */
    local_30 = <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                         (*(undefined8 *)(param_1 + 0x28));
                    /* try { // try from 0054c26c to 0054c273 has its CatchHandler @ 0054c31c */
    FUN_00503218(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x38) = uStack_48;
    *(ulong *)(param_1 + 0x30) = CONCAT44(uStack_4c,2);
    *(undefined8 *)(param_1 + 0x48) = uStack_38;
    *(undefined8 *)(param_1 + 0x40) = uStack_40;
                    /* try { // try from 0054c27c to 0054c283 has its CatchHandler @ 0054c2fc */
    <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&local_30);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
                    /* try { // try from 0054c29c to 0054c2a3 has its CatchHandler @ 0054c334 */
    local_28 = <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                         (uVar3);
                    /* try { // try from 0054c2a8 to 0054c2af has its CatchHandler @ 0054c304 */
    FUN_00503218(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x38) = uVar3;
    *(ulong *)(param_1 + 0x30) = CONCAT44(uStack_6c,1);
    *(undefined8 *)(param_1 + 0x48) = extraout_x1;
    *(undefined8 *)(param_1 + 0x40) = 0;
    <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&local_28);
    FUN_0054c084(param_1);
  }
  return;
}


// ===== 0054c36c  FUN_0054c36c =====

void FUN_0054c36c(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  void *__ptr;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  int local_160 [72];
  
  iVar1 = tokio::runtime::task::harness::can_read_output(param_1,param_1 + 0x150);
  if (iVar1 != 0) {
    memcpy(local_160,(void *)(param_1 + 0x30),0x120);
    *(undefined4 *)(param_1 + 0x30) = 2;
    if (local_160[0] != 1) {
                    /* try { // try from 0054c43c to 0054c453 has its CatchHandler @ 0054c48c */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                (&DAT_002c1c6c,0x45,&PTR_s__root__cargo_registry_src_index__00acecf8);
    }
    lVar6 = *(long *)(param_1 + 0x40);
    lVar5 = *(long *)(param_1 + 0x38);
    lVar2 = *(long *)(param_1 + 0x48);
    if (((*param_2 == 0) && (param_2[1] != 0)) && (__ptr = (void *)param_2[2], __ptr != (void *)0x0)
       ) {
      puVar4 = (undefined8 *)param_2[3];
      pcVar3 = (code *)*puVar4;
      if (pcVar3 != (code *)0x0) {
                    /* try { // try from 0054c420 to 0054c427 has its CatchHandler @ 0054c458 */
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


// ===== 0054c4b0  FUN_0054c4b0 =====

void FUN_0054c4b0(long param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined4 local_160 [72];
  
  auVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::
           transition_to_join_handle_dropped();
  if ((auVar2 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
    local_160[0] = 2;
                    /* try { // try from 0054c4e0 to 0054c4eb has its CatchHandler @ 0054c54c */
    FUN_0050b6e0(param_1 + 0x20,local_160);
  }
  if ((auVar2 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
    iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(param_1);
  }
  else {
    <tokio::runtime::task::core::[6]::tokio::runtime::task::core::Trailer>::set_waker
              (param_1 + 0x150,0);
    iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(param_1);
  }
  if (iVar1 == 0) {
    return;
  }
  FUN_00544cb8(param_1);
  return;
}


// ===== 0054c5a0  switchD_00534010::caseD_54c5a0 =====

void switchD_00534010::caseD_54c5a0(long param_1)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined *local_2a0;
  long lStack_298;
  undefined1 *local_290;
  undefined1 *local_288;
  undefined8 uStack_280;
  undefined4 local_270 [2];
  undefined8 local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined4 local_150 [2];
  undefined8 local_148;
  undefined8 uStack_140;
  ulong local_138;
  
  bVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_running()
  ;
  if (1 < bVar1) {
    if (bVar1 == 2) {
      return;
    }
    goto LAB_0054c634;
  }
  if (bVar1 == 0) {
    local_2a0 = PTR_WAKER_VTABLE_00b00d40;
    uStack_280 = 0;
                    /* try { // try from 0054c5e4 to 0054c5ef has its CatchHandler @ 0054c758 */
    lStack_298 = param_1;
    local_290 = (undefined1 *)&local_2a0;
    local_288 = (undefined1 *)&local_2a0;
    uVar3 = FUN_0050b638(param_1 + 0x20,&local_290);
    if ((uVar3 & 1) == 0) {
      local_148 = 0;
      uStack_140 = 0;
      local_150[0] = 1;
                    /* try { // try from 0054c6a4 to 0054c6af has its CatchHandler @ 0054c6f8 */
      local_138 = uVar3 & 0xffffffff;
      FUN_0050b6e0(param_1 + 0x20,local_150);
      goto LAB_0054c6b0;
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
LAB_0054c634:
      FUN_00544cb8(param_1);
      return;
    }
    if (bVar1 == 2) goto LAB_0054c634;
    local_150[0] = 2;
                    /* try { // try from 0054c6dc to 0054c6e7 has its CatchHandler @ 0054c6ec */
    FUN_0050b6e0(param_1 + 0x20,local_150);
    uStack_258 = extraout_x1_00;
  }
  else {
    local_150[0] = 2;
                    /* try { // try from 0054c658 to 0054c663 has its CatchHandler @ 0054c74c */
    FUN_0050b6e0(param_1 + 0x20,local_150);
    uStack_258 = extraout_x1;
  }
  local_268 = *(undefined8 *)(param_1 + 0x28);
  local_260 = 0;
  local_270[0] = 1;
  FUN_0050b6e0(param_1 + 0x20,local_270);
LAB_0054c6b0:
  FUN_0054c78c(param_1);
  return;
}


// ===== 0054c78c  FUN_0054c78c =====

void FUN_0054c78c(long param_1)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long local_160;
  undefined4 local_158 [72];
  undefined8 local_38;
  
  uVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_complete
                    ();
  if ((uVar2 >> 3 & 1) == 0) {
    local_158[0] = 2;
                    /* try { // try from 0054c7b4 to 0054c7e7 has its CatchHandler @ 0054c89c */
    FUN_0050b6e0(param_1 + 0x20,local_158);
  }
  else if ((uVar2 >> 4 & 1) != 0) {
    <tokio::runtime::task::core::[6]::tokio::runtime::task::core::Trailer>::wake_join
              (param_1 + 0x150);
    uVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::
            unset_waker_after_complete(param_1);
    if ((uVar2 >> 3 & 1) == 0) {
      <tokio::runtime::task::core::[6]::tokio::runtime::task::core::Trailer>::set_waker
                (param_1 + 0x150,0);
    }
  }
  if (*(long *)(param_1 + 0x170) != 0) {
    local_38 = *(undefined8 *)(param_1 + 0x28);
                    /* try { // try from 0054c810 to 0054c81b has its CatchHandler @ 0054c860 */
    (**(code **)(*(long *)(param_1 + 0x178) + 0x28))
              (*(long *)(param_1 + 0x170) +
               (*(long *)(*(long *)(param_1 + 0x178) + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
               &local_38);
  }
  local_160 = param_1;
  lVar3 = <alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>as_tokio::runtime::task::Schedule>
          ::release(param_1 + 0x20,&local_160);
  uVar1 = 1;
  if (lVar3 != 0) {
    uVar1 = 2;
  }
  uVar4 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_terminal
                    (param_1,uVar1);
  if ((uVar4 & 1) != 0) {
    FUN_00544cb8(param_1);
  }
  return;
}


// ===== 0054c8f0  FUN_0054c8f0 =====

void FUN_0054c8f0(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 extraout_x1;
  undefined4 local_260 [2];
  undefined8 local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined4 local_140 [72];
  
  uVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_shutdown
                    ();
  if ((uVar2 & 1) == 0) {
    iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(param_1);
    if (iVar1 != 0) {
      FUN_00544cb8(param_1);
      return;
    }
  }
  else {
    local_140[0] = 2;
                    /* try { // try from 0054c914 to 0054c91f has its CatchHandler @ 0054c980 */
    FUN_0050b6e0(param_1 + 0x20,local_140);
    local_258 = *(undefined8 *)(param_1 + 0x28);
    local_250 = 0;
    local_260[0] = 1;
    uStack_248 = extraout_x1;
    FUN_0050b6e0(param_1 + 0x20,local_260);
    FUN_0054c78c(param_1);
  }
  return;
}


// ===== 0054c98c  FUN_0054c98c =====

void FUN_0054c98c(long param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined4 local_160 [72];
  
  auVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::
           transition_to_join_handle_dropped();
  if ((auVar2 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
    local_160[0] = 2;
                    /* try { // try from 0054c9bc to 0054c9c7 has its CatchHandler @ 0054ca28 */
    FUN_0050b6e0(param_1 + 0x20,local_160);
  }
  if ((auVar2 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
    iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(param_1);
  }
  else {
    <tokio::runtime::task::core::[6]::tokio::runtime::task::core::Trailer>::set_waker
              (param_1 + 0x150,0);
    iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(param_1);
  }
  if (iVar1 == 0) {
    return;
  }
  FUN_00544e20(param_1);
  return;
}


// ===== 0054ca7c  FUN_0054ca7c =====

void FUN_0054ca7c(long param_1)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined *local_2a0;
  long lStack_298;
  undefined1 *local_290;
  undefined1 *local_288;
  undefined8 uStack_280;
  undefined4 local_270 [2];
  undefined8 local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined4 local_150 [2];
  undefined8 local_148;
  undefined8 uStack_140;
  ulong local_138;
  
  bVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_running()
  ;
  if (1 < bVar1) {
    if (bVar1 == 2) {
      return;
    }
    goto LAB_0054cb10;
  }
  if (bVar1 == 0) {
    local_2a0 = PTR_WAKER_VTABLE_00b00d40;
    uStack_280 = 0;
                    /* try { // try from 0054cac0 to 0054cacb has its CatchHandler @ 0054cc34 */
    lStack_298 = param_1;
    local_290 = (undefined1 *)&local_2a0;
    local_288 = (undefined1 *)&local_2a0;
    uVar3 = FUN_0050b638(param_1 + 0x20,&local_290);
    if ((uVar3 & 1) == 0) {
      local_148 = 0;
      uStack_140 = 0;
      local_150[0] = 1;
                    /* try { // try from 0054cb80 to 0054cb8b has its CatchHandler @ 0054cbd4 */
      local_138 = uVar3 & 0xffffffff;
      FUN_0050b6e0(param_1 + 0x20,local_150);
      goto LAB_0054cb8c;
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
LAB_0054cb10:
      FUN_00544e20(param_1);
      return;
    }
    if (bVar1 == 2) goto LAB_0054cb10;
    local_150[0] = 2;
                    /* try { // try from 0054cbb8 to 0054cbc3 has its CatchHandler @ 0054cbc8 */
    FUN_0050b6e0(param_1 + 0x20,local_150);
    uStack_258 = extraout_x1_00;
  }
  else {
    local_150[0] = 2;
                    /* try { // try from 0054cb34 to 0054cb3f has its CatchHandler @ 0054cc28 */
    FUN_0050b6e0(param_1 + 0x20,local_150);
    uStack_258 = extraout_x1;
  }
  local_268 = *(undefined8 *)(param_1 + 0x28);
  local_260 = 0;
  local_270[0] = 1;
  FUN_0050b6e0(param_1 + 0x20,local_270);
LAB_0054cb8c:
  FUN_0054cc68(param_1);
  return;
}


// ===== 0054cc68  FUN_0054cc68 =====

void FUN_0054cc68(long param_1)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long local_160;
  undefined4 local_158 [72];
  undefined8 local_38;
  
  uVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_complete
                    ();
  if ((uVar2 >> 3 & 1) == 0) {
    local_158[0] = 2;
                    /* try { // try from 0054cc90 to 0054ccc3 has its CatchHandler @ 0054cd78 */
    FUN_0050b6e0(param_1 + 0x20,local_158);
  }
  else if ((uVar2 >> 4 & 1) != 0) {
    <tokio::runtime::task::core::[6]::tokio::runtime::task::core::Trailer>::wake_join
              (param_1 + 0x150);
    uVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::
            unset_waker_after_complete(param_1);
    if ((uVar2 >> 3 & 1) == 0) {
      <tokio::runtime::task::core::[6]::tokio::runtime::task::core::Trailer>::set_waker
                (param_1 + 0x150,0);
    }
  }
  if (*(long *)(param_1 + 0x170) != 0) {
    local_38 = *(undefined8 *)(param_1 + 0x28);
                    /* try { // try from 0054ccec to 0054ccf7 has its CatchHandler @ 0054cd3c */
    (**(code **)(*(long *)(param_1 + 0x178) + 0x28))
              (*(long *)(param_1 + 0x170) +
               (*(long *)(*(long *)(param_1 + 0x178) + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
               &local_38);
  }
  local_160 = param_1;
  lVar3 = <alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>as_tokio::runtime::task::Schedule>
          ::release(param_1 + 0x20,&local_160);
  uVar1 = 1;
  if (lVar3 != 0) {
    uVar1 = 2;
  }
  uVar4 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_terminal
                    (param_1,uVar1);
  if ((uVar4 & 1) != 0) {
    FUN_00544e20(param_1);
  }
  return;
}


// ===== 0054cdcc  FUN_0054cdcc =====

void FUN_0054cdcc(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 extraout_x1;
  undefined4 local_260 [2];
  undefined8 local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined4 local_140 [72];
  
  uVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_shutdown
                    ();
  if ((uVar2 & 1) == 0) {
    iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(param_1);
    if (iVar1 != 0) {
      FUN_00544e20(param_1);
      return;
    }
  }
  else {
    local_140[0] = 2;
                    /* try { // try from 0054cdf0 to 0054cdfb has its CatchHandler @ 0054ce5c */
    FUN_0050b6e0(param_1 + 0x20,local_140);
    local_258 = *(undefined8 *)(param_1 + 0x28);
    local_250 = 0;
    local_260[0] = 1;
    uStack_248 = extraout_x1;
    FUN_0050b6e0(param_1 + 0x20,local_260);
    FUN_0054cc68(param_1);
  }
  return;
}


// ===== 0054ce68  FUN_0054ce68 =====

void FUN_0054ce68(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  void *__ptr;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  int local_218 [118];
  
  iVar1 = tokio::runtime::task::harness::can_read_output(param_1,param_1 + 0x208);
  if (iVar1 != 0) {
    memcpy(local_218,(void *)(param_1 + 0x30),0x1d8);
    *(undefined4 *)(param_1 + 0x30) = 2;
    if (local_218[0] != 1) {
                    /* try { // try from 0054cf38 to 0054cf4f has its CatchHandler @ 0054cf88 */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                (&DAT_002c1c6c,0x45,&PTR_s__root__cargo_registry_src_index__00acecf8);
    }
    lVar6 = *(long *)(param_1 + 0x40);
    lVar5 = *(long *)(param_1 + 0x38);
    lVar2 = *(long *)(param_1 + 0x48);
    if (((*param_2 == 0) && (param_2[1] != 0)) && (__ptr = (void *)param_2[2], __ptr != (void *)0x0)
       ) {
      puVar4 = (undefined8 *)param_2[3];
      pcVar3 = (code *)*puVar4;
      if (pcVar3 != (code *)0x0) {
                    /* try { // try from 0054cf1c to 0054cf23 has its CatchHandler @ 0054cf54 */
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


// ===== 0054cfac  FUN_0054cfac =====

void FUN_0054cfac(long param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined4 local_218 [118];
  
  auVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::
           transition_to_join_handle_dropped();
  if ((auVar2 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
    local_218[0] = 2;
                    /* try { // try from 0054cfdc to 0054cfe7 has its CatchHandler @ 0054d048 */
    FUN_0050b8c4(param_1 + 0x20,local_218);
  }
  if ((auVar2 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
    iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(param_1);
  }
  else {
    <tokio::runtime::task::core::[6]::tokio::runtime::task::core::Trailer>::set_waker
              (param_1 + 0x208,0);
    iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(param_1);
  }
  if (iVar1 == 0) {
    return;
  }
  FUN_00544f88(param_1);
  return;
}


// ===== 0054d09c  FUN_0054d09c =====

void FUN_0054d09c(long param_1)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined *local_410;
  long lStack_408;
  undefined1 *local_400;
  undefined1 *local_3f8;
  undefined8 uStack_3f0;
  undefined4 local_3e0 [2];
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined4 local_208 [2];
  undefined8 local_200;
  undefined8 local_1f8;
  ulong local_1f0;
  
  bVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_running()
  ;
  if (1 < bVar1) {
    if (bVar1 == 2) {
      return;
    }
    goto LAB_0054d130;
  }
  if (bVar1 == 0) {
    local_410 = PTR_WAKER_VTABLE_00b00d40;
    uStack_3f0 = 0;
                    /* try { // try from 0054d0e0 to 0054d0eb has its CatchHandler @ 0054d258 */
    lStack_408 = param_1;
    local_400 = (undefined1 *)&local_410;
    local_3f8 = (undefined1 *)&local_410;
    uVar3 = FUN_0050b81c(param_1 + 0x20,&local_400);
    if ((uVar3 & 1) == 0) {
      local_200 = 0;
      local_1f8 = 0;
      local_208[0] = 1;
                    /* try { // try from 0054d1a4 to 0054d1af has its CatchHandler @ 0054d1f8 */
      local_1f0 = uVar3 & 0xffffffff;
      FUN_0050b8c4(param_1 + 0x20,local_208);
      goto LAB_0054d1b0;
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
LAB_0054d130:
      FUN_00544f88(param_1);
      return;
    }
    if (bVar1 == 2) goto LAB_0054d130;
    local_208[0] = 2;
                    /* try { // try from 0054d1dc to 0054d1e7 has its CatchHandler @ 0054d1ec */
    FUN_0050b8c4(param_1 + 0x20,local_208);
    uStack_3c8 = extraout_x1_00;
  }
  else {
    local_208[0] = 2;
                    /* try { // try from 0054d154 to 0054d15f has its CatchHandler @ 0054d24c */
    FUN_0050b8c4(param_1 + 0x20,local_208);
    uStack_3c8 = extraout_x1;
  }
  local_3d8 = *(undefined8 *)(param_1 + 0x28);
  local_3d0 = 0;
  local_3e0[0] = 1;
  FUN_0050b8c4(param_1 + 0x20,local_3e0);
LAB_0054d1b0:
  FUN_0054d28c(param_1);
  return;
}


// ===== 0054d28c  FUN_0054d28c =====

void FUN_0054d28c(long param_1)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long local_218;
  undefined4 local_210 [118];
  undefined8 local_38;
  
  uVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_complete
                    ();
  if ((uVar2 >> 3 & 1) == 0) {
    local_210[0] = 2;
                    /* try { // try from 0054d2b4 to 0054d2e7 has its CatchHandler @ 0054d39c */
    FUN_0050b8c4(param_1 + 0x20,local_210);
  }
  else if ((uVar2 >> 4 & 1) != 0) {
    <tokio::runtime::task::core::[6]::tokio::runtime::task::core::Trailer>::wake_join
              (param_1 + 0x208);
    uVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::
            unset_waker_after_complete(param_1);
    if ((uVar2 >> 3 & 1) == 0) {
      <tokio::runtime::task::core::[6]::tokio::runtime::task::core::Trailer>::set_waker
                (param_1 + 0x208,0);
    }
  }
  if (*(long *)(param_1 + 0x228) != 0) {
    local_38 = *(undefined8 *)(param_1 + 0x28);
                    /* try { // try from 0054d310 to 0054d31b has its CatchHandler @ 0054d360 */
    (**(code **)(*(long *)(param_1 + 0x230) + 0x28))
              (*(long *)(param_1 + 0x228) +
               (*(long *)(*(long *)(param_1 + 0x230) + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
               &local_38);
  }
  local_218 = param_1;
  lVar3 = <alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>as_tokio::runtime::task::Schedule>
          ::release(param_1 + 0x20,&local_218);
  uVar1 = 1;
  if (lVar3 != 0) {
    uVar1 = 2;
  }
  uVar4 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_terminal
                    (param_1,uVar1);
  if ((uVar4 & 1) != 0) {
    FUN_00544f88(param_1);
  }
  return;
}


// ===== 0054d3f0  FUN_0054d3f0 =====

void FUN_0054d3f0(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 extraout_x1;
  undefined4 local_3d0 [2];
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined4 local_1f8 [118];
  
  uVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_shutdown
                    ();
  if ((uVar2 & 1) == 0) {
    iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(param_1);
    if (iVar1 != 0) {
      FUN_00544f88(param_1);
      return;
    }
  }
  else {
    local_1f8[0] = 2;
                    /* try { // try from 0054d414 to 0054d41f has its CatchHandler @ 0054d480 */
    FUN_0050b8c4(param_1 + 0x20,local_1f8);
    local_3c8 = *(undefined8 *)(param_1 + 0x28);
    local_3c0 = 0;
    local_3d0[0] = 1;
    uStack_3b8 = extraout_x1;
    FUN_0050b8c4(param_1 + 0x20,local_3d0);
    FUN_0054d28c(param_1);
  }
  return;
}


// ===== 0054d48c  FUN_0054d48c =====

void FUN_0054d48c(long param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined4 local_218 [118];
  
  auVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::
           transition_to_join_handle_dropped();
  if ((auVar2 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
    local_218[0] = 2;
                    /* try { // try from 0054d4bc to 0054d4c7 has its CatchHandler @ 0054d528 */
    FUN_0050b8c4(param_1 + 0x20,local_218);
  }
  if ((auVar2 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
    iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(param_1);
  }
  else {
    <tokio::runtime::task::core::[6]::tokio::runtime::task::core::Trailer>::set_waker
              (param_1 + 0x208,0);
    iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(param_1);
  }
  if (iVar1 == 0) {
    return;
  }
  FUN_005450f0(param_1);
  return;
}


// ===== 0054d57c  FUN_0054d57c =====

void FUN_0054d57c(long param_1)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined *local_410;
  long lStack_408;
  undefined1 *local_400;
  undefined1 *local_3f8;
  undefined8 uStack_3f0;
  undefined4 local_3e0 [2];
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined4 local_208 [2];
  undefined8 local_200;
  undefined8 local_1f8;
  ulong local_1f0;
  
  bVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_running()
  ;
  if (1 < bVar1) {
    if (bVar1 == 2) {
      return;
    }
    goto LAB_0054d610;
  }
  if (bVar1 == 0) {
    local_410 = PTR_WAKER_VTABLE_00b00d40;
    uStack_3f0 = 0;
                    /* try { // try from 0054d5c0 to 0054d5cb has its CatchHandler @ 0054d738 */
    lStack_408 = param_1;
    local_400 = (undefined1 *)&local_410;
    local_3f8 = (undefined1 *)&local_410;
    uVar3 = FUN_0050b81c(param_1 + 0x20,&local_400);
    if ((uVar3 & 1) == 0) {
      local_200 = 0;
      local_1f8 = 0;
      local_208[0] = 1;
                    /* try { // try from 0054d684 to 0054d68f has its CatchHandler @ 0054d6d8 */
      local_1f0 = uVar3 & 0xffffffff;
      FUN_0050b8c4(param_1 + 0x20,local_208);
      goto LAB_0054d690;
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
LAB_0054d610:
      FUN_005450f0(param_1);
      return;
    }
    if (bVar1 == 2) goto LAB_0054d610;
    local_208[0] = 2;
                    /* try { // try from 0054d6bc to 0054d6c7 has its CatchHandler @ 0054d6cc */
    FUN_0050b8c4(param_1 + 0x20,local_208);
    uStack_3c8 = extraout_x1_00;
  }
  else {
    local_208[0] = 2;
                    /* try { // try from 0054d634 to 0054d63f has its CatchHandler @ 0054d72c */
    FUN_0050b8c4(param_1 + 0x20,local_208);
    uStack_3c8 = extraout_x1;
  }
  local_3d8 = *(undefined8 *)(param_1 + 0x28);
  local_3d0 = 0;
  local_3e0[0] = 1;
  FUN_0050b8c4(param_1 + 0x20,local_3e0);
LAB_0054d690:
  FUN_0054d76c(param_1);
  return;
}


// ===== 0054d76c  FUN_0054d76c =====

void FUN_0054d76c(long param_1)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long local_218;
  undefined4 local_210 [118];
  undefined8 local_38;
  
  uVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_complete
                    ();
  if ((uVar2 >> 3 & 1) == 0) {
    local_210[0] = 2;
                    /* try { // try from 0054d794 to 0054d7c7 has its CatchHandler @ 0054d87c */
    FUN_0050b8c4(param_1 + 0x20,local_210);
  }
  else if ((uVar2 >> 4 & 1) != 0) {
    <tokio::runtime::task::core::[6]::tokio::runtime::task::core::Trailer>::wake_join
              (param_1 + 0x208);
    uVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::
            unset_waker_after_complete(param_1);
    if ((uVar2 >> 3 & 1) == 0) {
      <tokio::runtime::task::core::[6]::tokio::runtime::task::core::Trailer>::set_waker
                (param_1 + 0x208,0);
    }
  }
  if (*(long *)(param_1 + 0x228) != 0) {
    local_38 = *(undefined8 *)(param_1 + 0x28);
                    /* try { // try from 0054d7f0 to 0054d7fb has its CatchHandler @ 0054d840 */
    (**(code **)(*(long *)(param_1 + 0x230) + 0x28))
              (*(long *)(param_1 + 0x228) +
               (*(long *)(*(long *)(param_1 + 0x230) + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
               &local_38);
  }
  local_218 = param_1;
  lVar3 = <alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>as_tokio::runtime::task::Schedule>
          ::release(param_1 + 0x20,&local_218);
  uVar1 = 1;
  if (lVar3 != 0) {
    uVar1 = 2;
  }
  uVar4 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_terminal
                    (param_1,uVar1);
  if ((uVar4 & 1) != 0) {
    FUN_005450f0(param_1);
  }
  return;
}


// ===== 0054d8d0  FUN_0054d8d0 =====

void FUN_0054d8d0(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 extraout_x1;
  undefined4 local_3d0 [2];
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined4 local_1f8 [118];
  
  uVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_shutdown
                    ();
  if ((uVar2 & 1) == 0) {
    iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(param_1);
    if (iVar1 != 0) {
      FUN_005450f0(param_1);
      return;
    }
  }
  else {
    local_1f8[0] = 2;
                    /* try { // try from 0054d8f4 to 0054d8ff has its CatchHandler @ 0054d960 */
    FUN_0050b8c4(param_1 + 0x20,local_1f8);
    local_3c8 = *(undefined8 *)(param_1 + 0x28);
    local_3c0 = 0;
    local_3d0[0] = 1;
    uStack_3b8 = extraout_x1;
    FUN_0050b8c4(param_1 + 0x20,local_3d0);
    FUN_0054d76c(param_1);
  }
  return;
}


// ===== 0054d96c  FUN_0054d96c =====

void FUN_0054d96c(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  void *__ptr;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  int local_278 [142];
  
  iVar1 = tokio::runtime::task::harness::can_read_output(param_1,param_1 + 0x268);
  if (iVar1 != 0) {
    memcpy(local_278,(void *)(param_1 + 0x30),0x238);
    *(undefined4 *)(param_1 + 0x30) = 2;
    if (local_278[0] != 1) {
                    /* try { // try from 0054da3c to 0054da53 has its CatchHandler @ 0054da8c */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                (&DAT_002c1c6c,0x45,&PTR_s__root__cargo_registry_src_index__00acecf8);
    }
    lVar6 = *(long *)(param_1 + 0x40);
    lVar5 = *(long *)(param_1 + 0x38);
    lVar2 = *(long *)(param_1 + 0x48);
    if (((*param_2 == 0) && (param_2[1] != 0)) && (__ptr = (void *)param_2[2], __ptr != (void *)0x0)
       ) {
      puVar4 = (undefined8 *)param_2[3];
      pcVar3 = (code *)*puVar4;
      if (pcVar3 != (code *)0x0) {
                    /* try { // try from 0054da20 to 0054da27 has its CatchHandler @ 0054da58 */
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


// ===== 0054dab0  FUN_0054dab0 =====

void FUN_0054dab0(long param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined4 local_278 [142];
  
  auVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::
           transition_to_join_handle_dropped();
  if ((auVar2 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
    local_278[0] = 2;
                    /* try { // try from 0054dae0 to 0054daeb has its CatchHandler @ 0054db4c */
    FUN_0050ba64(param_1 + 0x20,local_278);
  }
  if ((auVar2 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
    iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(param_1);
  }
  else {
    <tokio::runtime::task::core::[6]::tokio::runtime::task::core::Trailer>::set_waker
              (param_1 + 0x268,0);
    iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(param_1);
  }
  if (iVar1 == 0) {
    return;
  }
  FUN_00545258(param_1);
  return;
}


// ===== 0054dba0  FUN_0054dba0 =====

void FUN_0054dba0(long param_1)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined *local_4d0;
  long lStack_4c8;
  undefined1 *local_4c0;
  undefined1 *local_4b8;
  undefined8 uStack_4b0;
  undefined4 local_4a0 [2];
  undefined8 local_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined4 local_268 [2];
  undefined8 local_260;
  undefined8 local_258;
  ulong local_250;
  
  local_4d0 = (undefined *)0x0;
  bVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_running()
  ;
  if (1 < bVar1) {
    if (bVar1 == 2) {
      return;
    }
    goto LAB_0054dc38;
  }
  if (bVar1 == 0) {
    local_4d0 = PTR_WAKER_VTABLE_00b00d40;
    uStack_4b0 = 0;
                    /* try { // try from 0054dbe8 to 0054dbf3 has its CatchHandler @ 0054dd60 */
    lStack_4c8 = param_1;
    local_4c0 = (undefined1 *)&local_4d0;
    local_4b8 = (undefined1 *)&local_4d0;
    uVar3 = FUN_0050b9bc(param_1 + 0x20,&local_4c0);
    if ((uVar3 & 1) == 0) {
      local_260 = 0;
      local_258 = 0;
      local_268[0] = 1;
                    /* try { // try from 0054dcac to 0054dcb7 has its CatchHandler @ 0054dd00 */
      local_250 = uVar3 & 0xffffffff;
      FUN_0050ba64(param_1 + 0x20,local_268);
      goto LAB_0054dcb8;
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
LAB_0054dc38:
      FUN_00545258(param_1);
      return;
    }
    if (bVar1 == 2) goto LAB_0054dc38;
    local_268[0] = 2;
                    /* try { // try from 0054dce4 to 0054dcef has its CatchHandler @ 0054dcf4 */
    FUN_0050ba64(param_1 + 0x20,local_268);
    uStack_488 = extraout_x1_00;
  }
  else {
    local_268[0] = 2;
                    /* try { // try from 0054dc5c to 0054dc67 has its CatchHandler @ 0054dd54 */
    FUN_0050ba64(param_1 + 0x20,local_268);
    uStack_488 = extraout_x1;
  }
  local_498 = *(undefined8 *)(param_1 + 0x28);
  local_490 = 0;
  local_4a0[0] = 1;
  FUN_0050ba64(param_1 + 0x20,local_4a0);
LAB_0054dcb8:
  FUN_0054dd94(param_1);
  return;
}


// ===== 0054dd94  FUN_0054dd94 =====

void FUN_0054dd94(long param_1)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long local_278;
  undefined4 local_270 [142];
  undefined8 local_38;
  
  uVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_complete
                    ();
  if ((uVar2 >> 3 & 1) == 0) {
    local_270[0] = 2;
                    /* try { // try from 0054ddbc to 0054ddef has its CatchHandler @ 0054dea4 */
    FUN_0050ba64(param_1 + 0x20,local_270);
  }
  else if ((uVar2 >> 4 & 1) != 0) {
    <tokio::runtime::task::core::[6]::tokio::runtime::task::core::Trailer>::wake_join
              (param_1 + 0x268);
    uVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::
            unset_waker_after_complete(param_1);
    if ((uVar2 >> 3 & 1) == 0) {
      <tokio::runtime::task::core::[6]::tokio::runtime::task::core::Trailer>::set_waker
                (param_1 + 0x268,0);
    }
  }
  if (*(long *)(param_1 + 0x288) != 0) {
    local_38 = *(undefined8 *)(param_1 + 0x28);
                    /* try { // try from 0054de18 to 0054de23 has its CatchHandler @ 0054de68 */
    (**(code **)(*(long *)(param_1 + 0x290) + 0x28))
              (*(long *)(param_1 + 0x288) +
               (*(long *)(*(long *)(param_1 + 0x290) + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
               &local_38);
  }
  local_278 = param_1;
  lVar3 = <alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>as_tokio::runtime::task::Schedule>
          ::release(param_1 + 0x20,&local_278);
  uVar1 = 1;
  if (lVar3 != 0) {
    uVar1 = 2;
  }
  uVar4 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_terminal
                    (param_1,uVar1);
  if ((uVar4 & 1) != 0) {
    FUN_00545258(param_1);
  }
  return;
}


// ===== 0054def8  FUN_0054def8 =====

void FUN_0054def8(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 extraout_x1;
  undefined8 local_490;
  undefined8 local_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined4 local_258 [142];
  
  local_490 = 0;
  uVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_shutdown
                    ();
  if ((uVar2 & 1) == 0) {
    iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(param_1);
    if (iVar1 != 0) {
      FUN_00545258(param_1);
      return;
    }
  }
  else {
    local_258[0] = 2;
                    /* try { // try from 0054df20 to 0054df2b has its CatchHandler @ 0054df8c */
    FUN_0050ba64(param_1 + 0x20,local_258);
    local_488 = *(undefined8 *)(param_1 + 0x28);
    local_480 = 0;
    local_490 = CONCAT44(local_490._4_4_,1);
    uStack_478 = extraout_x1;
    FUN_0050ba64(param_1 + 0x20,&local_490);
    FUN_0054dd94(param_1);
  }
  return;
}


// ===== 0054df98  FUN_0054df98 =====

void FUN_0054df98(long param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined4 local_278 [142];
  
  auVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::
           transition_to_join_handle_dropped();
  if ((auVar2 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
    local_278[0] = 2;
                    /* try { // try from 0054dfc8 to 0054dfd3 has its CatchHandler @ 0054e034 */
    FUN_0050ba64(param_1 + 0x20,local_278);
  }
  if ((auVar2 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
    iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(param_1);
  }
  else {
    <tokio::runtime::task::core::[6]::tokio::runtime::task::core::Trailer>::set_waker
              (param_1 + 0x268,0);
    iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(param_1);
  }
  if (iVar1 == 0) {
    return;
  }
  FUN_005453c0(param_1);
  return;
}


// ===== 0054e088  FUN_0054e088 =====

void FUN_0054e088(long param_1)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined *local_4d0;
  long lStack_4c8;
  undefined1 *local_4c0;
  undefined1 *local_4b8;
  undefined8 uStack_4b0;
  undefined4 local_4a0 [2];
  undefined8 local_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined4 local_268 [2];
  undefined8 local_260;
  undefined8 local_258;
  ulong local_250;
  
  local_4d0 = (undefined *)0x0;
  bVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_running()
  ;
  if (1 < bVar1) {
    if (bVar1 == 2) {
      return;
    }
    goto switchD_00534010_caseD_54e120;
  }
  if (bVar1 == 0) {
    local_4d0 = PTR_WAKER_VTABLE_00b00d40;
    uStack_4b0 = 0;
                    /* try { // try from 0054e0d0 to 0054e0db has its CatchHandler @ 0054e248 */
    lStack_4c8 = param_1;
    local_4c0 = (undefined1 *)&local_4d0;
    local_4b8 = (undefined1 *)&local_4d0;
    uVar3 = FUN_0050b9bc(param_1 + 0x20,&local_4c0);
    if ((uVar3 & 1) == 0) {
      local_260 = 0;
      local_258 = 0;
      local_268[0] = 1;
                    /* try { // try from 0054e194 to 0054e19f has its CatchHandler @ 0054e1e8 */
      local_250 = uVar3 & 0xffffffff;
      FUN_0050ba64(param_1 + 0x20,local_268);
      goto LAB_0054e1a0;
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
switchD_00534010_caseD_54e120:
      FUN_005453c0(param_1);
      return;
    }
    if (bVar1 == 2) goto switchD_00534010_caseD_54e120;
    local_268[0] = 2;
                    /* try { // try from 0054e1cc to 0054e1d7 has its CatchHandler @ 0054e1dc */
    FUN_0050ba64(param_1 + 0x20,local_268);
    uStack_488 = extraout_x1_00;
  }
  else {
    local_268[0] = 2;
                    /* try { // try from 0054e144 to 0054e14f has its CatchHandler @ 0054e23c */
    FUN_0050ba64(param_1 + 0x20,local_268);
    uStack_488 = extraout_x1;
  }
  local_498 = *(undefined8 *)(param_1 + 0x28);
  local_490 = 0;
  local_4a0[0] = 1;
  FUN_0050ba64(param_1 + 0x20,local_4a0);
LAB_0054e1a0:
  FUN_0054e27c(param_1);
  return;
}


// ===== 0054e27c  FUN_0054e27c =====

void FUN_0054e27c(long param_1)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long local_278;
  undefined4 local_270 [142];
  undefined8 local_38;
  
  uVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_complete
                    ();
  if ((uVar2 >> 3 & 1) == 0) {
    local_270[0] = 2;
                    /* try { // try from 0054e2a4 to 0054e2d7 has its CatchHandler @ 0054e38c */
    FUN_0050ba64(param_1 + 0x20,local_270);
  }
  else if ((uVar2 >> 4 & 1) != 0) {
    <tokio::runtime::task::core::[6]::tokio::runtime::task::core::Trailer>::wake_join
              (param_1 + 0x268);
    uVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::
            unset_waker_after_complete(param_1);
    if ((uVar2 >> 3 & 1) == 0) {
      <tokio::runtime::task::core::[6]::tokio::runtime::task::core::Trailer>::set_waker
                (param_1 + 0x268,0);
    }
  }
  if (*(long *)(param_1 + 0x288) != 0) {
    local_38 = *(undefined8 *)(param_1 + 0x28);
                    /* try { // try from 0054e300 to 0054e30b has its CatchHandler @ 0054e350 */
    (**(code **)(*(long *)(param_1 + 0x290) + 0x28))
              (*(long *)(param_1 + 0x288) +
               (*(long *)(*(long *)(param_1 + 0x290) + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
               &local_38);
  }
  local_278 = param_1;
  lVar3 = <alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>as_tokio::runtime::task::Schedule>
          ::release(param_1 + 0x20,&local_278);
  uVar1 = 1;
  if (lVar3 != 0) {
    uVar1 = 2;
  }
  uVar4 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_terminal
                    (param_1,uVar1);
  if ((uVar4 & 1) != 0) {
    FUN_005453c0(param_1);
  }
  return;
}


// ===== 0054e3e0  FUN_0054e3e0 =====

void FUN_0054e3e0(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 extraout_x1;
  undefined8 local_490;
  undefined8 local_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined4 local_258 [142];
  
  local_490 = 0;
  uVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_shutdown
                    ();
  if ((uVar2 & 1) == 0) {
    iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(param_1);
    if (iVar1 != 0) {
      FUN_005453c0(param_1);
      return;
    }
  }
  else {
    local_258[0] = 2;
                    /* try { // try from 0054e408 to 0054e413 has its CatchHandler @ 0054e474 */
    FUN_0050ba64(param_1 + 0x20,local_258);
    local_488 = *(undefined8 *)(param_1 + 0x28);
    local_480 = 0;
    local_490 = CONCAT44(local_490._4_4_,1);
    uStack_478 = extraout_x1;
    FUN_0050ba64(param_1 + 0x20,&local_490);
    FUN_0054e27c(param_1);
  }
  return;
}


// ===== 0054e480  FUN_0054e480 =====

void FUN_0054e480(byte *param_1)

{
  void *__ptr;
  byte bVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  ulong local_a8;
  undefined8 local_a0;
  long lStack_98;
  undefined8 local_90;
  ulong local_88;
  undefined8 local_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 local_68;
  long local_60 [2];
  long local_50;
  ulong *local_48;
  
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
      lVar5 = *(long *)(param_1 + 0x18) + 1;
      pvVar3 = __ptr;
      while (lVar5 = lVar5 + -1, lVar5 != 0) {
                    /* try { // try from 0054e4e4 to 0054e4e7 has its CatchHandler @ 0054e5d8 */
        FUN_00524a18(pvVar3);
        pvVar3 = (void *)((long)pvVar3 + 0x20);
      }
      if (*(long *)(param_1 + 8) != 0) {
        free(__ptr);
        return;
      }
    }
    else {
      lVar5 = *(long *)(param_1 + 8);
      if (lVar5 == 0) {
        local_68 = 0;
      }
      else {
        local_90 = *(undefined8 *)(param_1 + 0x10);
        local_68 = *(undefined8 *)(param_1 + 0x18);
        local_a0 = 0;
        local_80 = 0;
        lStack_98 = lVar5;
        lStack_78 = lVar5;
        local_70 = local_90;
      }
      local_a8 = (ulong)(lVar5 != 0);
      local_88 = local_a8;
      FUN_0055750c(local_60,&local_a8);
      lVar5 = local_60[0];
      lVar2 = local_50;
      while (lVar5 != 0) {
        lVar4 = lVar5 + lVar2 * 0x18;
        local_60[0] = lVar5;
        local_50 = lVar2;
        local_48 = &local_a8;
        if (*(long *)(lVar4 + 0x168) != 0) {
          free(*(void **)(lVar4 + 0x170));
        }
                    /* try { // try from 0054e5a4 to 0054e5ab has its CatchHandler @ 0054e5c4 */
        FUN_0054e480(lVar5 + lVar2 * 0x20);
        FUN_0055750c(local_60,&local_a8);
        lVar5 = local_60[0];
        lVar2 = local_50;
      }
    }
  }
  return;
}


// ===== 0054e61c  FUN_0054e61c =====

void FUN_0054e61c(byte *param_1)

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
LAB_0054e6d8:
      if (*(long *)(param_1 + 8) == 0) {
        return;
      }
      free(*(void **)(param_1 + 0x10));
      return;
    }
LAB_0054e730:
    __ptr = *(void **)(param_1 + 0x10);
    pvVar2 = __ptr;
    for (lVar4 = *(long *)(param_1 + 0x18); lVar4 != 0; lVar4 = lVar4 + -1) {
                    /* try { // try from 0054e73c to 0054e74b has its CatchHandler @ 0054e77c */
      FUN_00525f08(pvVar2);
                    /* try { // try from 0054e754 to 0054e75b has its CatchHandler @ 0054e790 */
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
      if (uVar3 == 0xe) goto LAB_0054e6d8;
      goto LAB_0054e730;
    }
    if (uVar3 < 0x13) {
      if (bVar1 == 0x11) {
        __ptr = *(void **)(param_1 + 8);
                    /* try { // try from 0054e700 to 0054e707 has its CatchHandler @ 0054e774 */
        FUN_0054e61c(__ptr);
        goto LAB_0054e708;
      }
      if (uVar3 == 0x12) {
        return;
      }
      goto LAB_0054e730;
    }
    if (uVar3 == 0x13) {
      __ptr = *(void **)(param_1 + 8);
                    /* try { // try from 0054e724 to 0054e72b has its CatchHandler @ 0054e76c */
      FUN_0054e61c(__ptr);
      goto LAB_0054e708;
    }
    if (bVar1 != 0x14) goto LAB_0054e730;
    __ptr = *(void **)(param_1 + 0x10);
    lVar4 = *(long *)(param_1 + 0x18) + 1;
    pvVar2 = __ptr;
    while (lVar4 = lVar4 + -1, lVar4 != 0) {
                    /* try { // try from 0054e6c4 to 0054e6c7 has its CatchHandler @ 0054e7b4 */
      FUN_00525f08(pvVar2);
      pvVar2 = (void *)((long)pvVar2 + 0x20);
    }
  }
  if (*(long *)(param_1 + 8) == 0) {
    return;
  }
LAB_0054e708:
  free(__ptr);
  return;
}


// ===== 0054e7f0  FUN_0054e7f0 =====

void FUN_0054e7f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = param_2;
  uStack_18 = param_3;
                    /* WARNING: Subroutine does not return */
  core::panicking::assert_failed_inner
            (param_1,&local_20,&DAT_00aced28,&uStack_18,&DAT_00aced28,param_4,param_5,param_6);
}


// ===== 0054e824  FUN_0054e824 =====

void FUN_0054e824(undefined8 *param_1,long *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  void *__ptr;
  void *pvVar3;
  long lVar4;
  uint local_50;
  undefined4 uStack_4c;
  void *pvStack_48;
  void *local_40;
  undefined1 uStack_31;
  
  __ptr = (void *)param_2[1];
  pvVar3 = (void *)param_2[2];
                    /* try { // try from 0054e844 to 0054e853 has its CatchHandler @ 0054e93c */
  core::str::converts::from_utf8(&local_50,__ptr,pvVar3);
  if ((local_50 & 1) == 0) {
    bVar1 = *param_2 == 0;
  }
  else {
    lVar4 = *param_2;
    if (lVar4 != -1) {
      local_50 = CONCAT31(local_50._1_3_,6);
                    /* try { // try from 0054e8e4 to 0054e8f7 has its CatchHandler @ 0054e924 */
      pvStack_48 = __ptr;
      local_40 = pvVar3;
      uVar2 = <serde_json::error::Error_as_serde::de::Error>::invalid_value
                        (&local_50,&uStack_31,&DAT_00aced48);
      param_1[1] = uVar2;
      *(undefined1 *)param_1 = 0xff;
      if (lVar4 == 0) {
        return;
      }
      free(__ptr);
      return;
    }
    bVar1 = false;
    __ptr = pvVar3;
    pvVar3 = pvStack_48;
  }
                    /* try { // try from 0054e888 to 0054e897 has its CatchHandler @ 0054e930 */
  <smol_str::[B]::smol_str::Repr>::new(&local_50,__ptr,pvVar3);
  if (!bVar1) {
    free(__ptr);
  }
  param_1[1] = pvStack_48;
  *param_1 = CONCAT44(uStack_4c,local_50);
  param_1[2] = local_40;
  return;
}


// ===== 0054e958  FUN_0054e958 =====

void FUN_0054e958(undefined1 *param_1)

{
  int local_30;
  uint local_2c;
  undefined8 local_28;
  
  FUN_004c781c(&local_30);
  if (local_30 == 1) {
    *(undefined8 *)(param_1 + 8) = local_28;
    *param_1 = 1;
    return;
  }
  if (local_2c != 2) {
    local_2c = (uint)(local_2c == 1);
  }
  param_1[1] = (char)local_2c;
  *param_1 = 0;
  return;
}


// ===== 0054e9cc  FUN_0054e9cc =====

void FUN_0054e9cc(undefined8 *param_1,undefined8 param_2)

{
  char *local_2a0;
  undefined8 local_298;
  char *pcStack_290;
  undefined8 local_288;
  char local_280;
  undefined7 uStack_27f;
  char *local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  
  local_2a0 = "data_mode";
  local_298 = 9;
  pcStack_290 = "internally tagged enum BackgroundSyncGuild";
  local_288 = 0x2a;
  FUN_004c2c08(&local_280,param_2,&local_2a0);
  if (local_280 == -1) {
    *param_1 = 0xffffffffffffffff;
    param_1[1] = local_278;
    return;
  }
  local_2a0 = local_278;
  pcStack_290 = (char *)uStack_268;
  local_298 = local_270;
  local_288 = local_260;
  if (local_280 == '\0') {
    FUN_004e4340(&local_280,&local_2a0,"BackgroundSyncFullGuildproperties",0x17,
                 &PTR_s_iddescriptionpermissionsflagsmen_00acf578,3);
    if (CONCAT71(uStack_27f,local_280) != 2) {
      memcpy(param_1 + 1,&local_280,0x248);
      *param_1 = 3;
      return;
    }
  }
  else {
    if (local_280 != '\x01') {
      FUN_004c6b44(param_1,&local_2a0);
      return;
    }
    FUN_004e4e78(&local_280,&local_2a0,"BackgroundSyncPartialGuildpartial_updates",0x1a,
                 &PTR_s_iddescriptionpermissionsflagsmen_00acf5a8,3);
    if (CONCAT71(uStack_27f,local_280) != -1) {
      memcpy(param_1,&local_280,0x260);
      return;
    }
  }
  *param_1 = 0xffffffffffffffff;
  param_1[1] = local_278;
  return;
}


// ===== 0054eb34  FUN_0054eb34 =====

void FUN_0054eb34(undefined1 *param_1,char *param_2,long param_3)

{
  if (param_3 < 0x12) {
    if (param_3 == 6) {
      if (*param_2 == 's') {
        if ((((param_2[1] == 'k') && (param_2[2] == 'u')) && (param_2[3] == '_')) &&
           ((param_2[4] == 'i' && (param_2[5] == 'd')))) {
          param_1[1] = 3;
          *param_1 = 0;
          return;
        }
      }
      else if (((*param_2 == 'b') && (param_2[1] == 'o')) &&
              ((param_2[2] == 't' &&
               (((param_2[3] == '_' && (param_2[4] == 'i')) && (param_2[5] == 'd')))))) {
        param_1[1] = 1;
        *param_1 = 0;
        return;
      }
    }
    else if (param_3 == 0xe) {
      if ((((*param_2 == 'i') && (param_2[1] == 'n')) &&
          ((param_2[2] == 't' && ((param_2[3] == 'e' && (param_2[4] == 'g')))))) &&
         ((param_2[5] == 'r' &&
          (((((param_2[6] == 'a' && (param_2[7] == 't')) && (param_2[8] == 'i')) &&
            ((param_2[9] == 'o' && (param_2[10] == 'n')))) &&
           ((param_2[0xb] == '_' && ((param_2[0xc] == 'i' && (param_2[0xd] == 'd')))))))))) {
        param_1[1] = 2;
        *param_1 = 0;
        return;
      }
    }
    else if (((((param_3 == 0x11) && (*param_2 == 'g')) && (param_2[1] == 'u')) &&
             (((((param_2[2] == 'i' && (param_2[3] == 'l')) &&
                ((param_2[4] == 'd' && ((param_2[5] == '_' && (param_2[6] == 'c')))))) &&
               (param_2[7] == 'o')) &&
              ((((param_2[8] == 'n' && (param_2[9] == 'n')) && (param_2[10] == 'e')) &&
               ((param_2[0xb] == 'c' && (param_2[0xc] == 't')))))))) &&
            (((param_2[0xd] == 'i' && ((param_2[0xe] == 'o' && (param_2[0xf] == 'n')))) &&
             (param_2[0x10] == 's')))) {
      param_1[1] = 7;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 < 0x16) {
    if (param_3 == 0x12) {
      if (((((*param_2 == 'p') && (param_2[1] == 'r')) && (param_2[2] == 'e')) &&
          ((param_2[3] == 'm' && (param_2[4] == 'i')))) &&
         ((((param_2[5] == 'u' && ((param_2[6] == 'm' && (param_2[7] == '_')))) &&
           (param_2[8] == 's')) &&
          ((((((param_2[9] == 'u' && (param_2[10] == 'b')) && (param_2[0xb] == 's')) &&
             ((param_2[0xc] == 'c' && (param_2[0xd] == 'r')))) &&
            ((param_2[0xe] == 'i' && ((param_2[0xf] == 'b' && (param_2[0x10] == 'e')))))) &&
           (param_2[0x11] == 'r')))))) {
        param_1[1] = 0;
        *param_1 = 0;
        return;
      }
    }
    else if (((((param_3 == 0x15) && (*param_2 == 'i')) && (param_2[1] == 's')) &&
             ((((param_2[2] == '_' && (param_2[3] == 'g')) &&
               ((param_2[4] == 'u' && ((param_2[5] == 'i' && (param_2[6] == 'l')))))) &&
              ((param_2[7] == 'd' &&
               (((param_2[8] == '_' && (param_2[9] == 'p')) && (param_2[10] == 'r')))))))) &&
            ((((param_2[0xb] == 'o' && (param_2[0xc] == 'd')) &&
              ((param_2[0xd] == 'u' && ((param_2[0xe] == 'c' && (param_2[0xf] == 't')))))) &&
             ((param_2[0x10] == '_' &&
              ((((param_2[0x11] == 'r' && (param_2[0x12] == 'o')) && (param_2[0x13] == 'l')) &&
               (param_2[0x14] == 'e')))))))) {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 0x16) {
    if (((((*param_2 == 'a') && (param_2[1] == 'v')) && (param_2[2] == 'a')) &&
        ((param_2[3] == 'i' && (param_2[4] == 'l')))) &&
       ((((param_2[5] == 'a' && ((param_2[6] == 'b' && (param_2[7] == 'l')))) &&
         ((param_2[8] == 'e' &&
          ((((((param_2[9] == '_' && (param_2[10] == 'f')) && (param_2[0xb] == 'o')) &&
             (((param_2[0xc] == 'r' && (param_2[0xd] == '_')) &&
              ((param_2[0xe] == 'p' && ((param_2[0xf] == 'u' && (param_2[0x10] == 'r')))))))) &&
            (param_2[0x11] == 'c')) &&
           (((param_2[0x12] == 'h' && (param_2[0x13] == 'a')) && (param_2[0x14] == 's')))))))) &&
        (param_2[0x15] == 'e')))) {
      param_1[1] = 6;
      *param_1 = 0;
      return;
    }
  }
  else if ((((param_3 == 0x17) && (*param_2 == 's')) &&
           ((param_2[1] == 'u' && ((param_2[2] == 'b' && (param_2[3] == 's')))))) &&
          ((((param_2[4] == 'c' &&
             (((((((param_2[5] == 'r' && (param_2[6] == 'i')) && (param_2[7] == 'p')) &&
                 ((param_2[8] == 't' && (param_2[9] == 'i')))) && (param_2[10] == 'o')) &&
               ((param_2[0xb] == 'n' && (param_2[0xc] == '_')))) &&
              ((param_2[0xd] == 'l' &&
               (((param_2[0xe] == 'i' && (param_2[0xf] == 's')) && (param_2[0x10] == 't')))))))) &&
            ((((param_2[0x11] == 'i' && (param_2[0x12] == 'n')) && (param_2[0x13] == 'g')) &&
             ((param_2[0x14] == '_' && (param_2[0x15] == 'i')))))) && (param_2[0x16] == 'd')))) {
    param_1[1] = 5;
    *param_1 = 0;
    return;
  }
  param_1[1] = 8;
  *param_1 = 0;
  return;
}


// ===== 0054f1f8  FUN_0054f1f8 =====

void FUN_0054f1f8(undefined1 *param_1,long *param_2,long param_3)

{
  if (param_3 < 0x12) {
    if (param_3 == 6) {
      if ((int)*param_2 == 0x5f746f62 && *(short *)((long)param_2 + 4) == 0x6469) {
        param_1[1] = 1;
        *param_1 = 0;
        return;
      }
      if ((int)*param_2 == 0x5f756b73 && *(short *)((long)param_2 + 4) == 0x6469) {
        param_1[1] = 3;
        *param_1 = 0;
        return;
      }
    }
    else if (param_3 == 0xe) {
      if (*param_2 == 0x7461726765746e69 && *(long *)((long)param_2 + 6) == 0x64695f6e6f697461) {
        param_1[1] = 2;
        *param_1 = 0;
        return;
      }
    }
    else if ((param_3 == 0x11) &&
            ((*param_2 == 0x6f635f646c697567 && param_2[1] == 0x6e6f697463656e6e) &&
             (char)param_2[2] == 's')) {
      param_1[1] = 7;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 < 0x16) {
    if (param_3 == 0x12) {
      if ((*param_2 == 0x5f6d75696d657270 && param_2[1] == 0x6269726373627573) &&
          (short)param_2[2] == 0x7265) {
        param_1[1] = 0;
        *param_1 = 0;
        return;
      }
    }
    else if ((param_3 == 0x15) &&
            ((*param_2 == 0x646c6975675f7369 && param_2[1] == 0x746375646f72705f) &&
             *(long *)((long)param_2 + 0xd) == 0x656c6f725f746375)) {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 0x16) {
    if ((*param_2 == 0x6c62616c69617661 && param_2[1] == 0x75705f726f665f65) &&
        *(long *)((long)param_2 + 0xe) == 0x6573616863727570) {
      param_1[1] = 6;
      *param_1 = 0;
      return;
    }
  }
  else if ((param_3 == 0x17) &&
          ((*param_2 == 0x7069726373627573 && param_2[1] == 0x73696c5f6e6f6974) &&
           *(long *)((long)param_2 + 0xf) == 0x64695f676e697473)) {
    param_1[1] = 5;
    *param_1 = 0;
    return;
  }
  param_1[1] = 8;
  *param_1 = 0;
  return;
}


// ===== 0054f48c  FUN_0054f48c =====

void FUN_0054f48c(undefined1 *param_1,char *param_2,long param_3)

{
  char cVar1;
  
  if (param_3 < 7) {
    if (param_3 < 5) {
      if (param_3 == 2) {
        if ((*param_2 == 'i') && (param_2[1] == 'd')) {
          param_1[1] = 0;
          *param_1 = 0;
          return;
        }
      }
      else if (param_3 == 4) {
        cVar1 = *param_2;
        if (cVar1 == 'i') {
          if (((param_2[1] == 'c') && (param_2[2] == 'o')) && (param_2[3] == 'n')) {
            param_1[1] = 0xb;
            *param_1 = 0;
            return;
          }
        }
        else if (cVar1 == 't') {
          if (((param_2[1] == 'a') && (param_2[2] == 'g')) && (param_2[3] == 's')) {
            param_1[1] = 0xd;
            *param_1 = 0;
            return;
          }
        }
        else if (((cVar1 == 'n') && (param_2[1] == 'a')) &&
                ((param_2[2] == 'm' && (param_2[3] == 'e')))) {
          param_1[1] = 1;
          *param_1 = 0;
          return;
        }
      }
    }
    else if (param_3 == 5) {
      cVar1 = *param_2;
      if (cVar1 == 'c') {
        if ((((param_2[1] == 'o') && (param_2[2] == 'l')) && (param_2[3] == 'o')) &&
           (param_2[4] == 'r')) {
          param_1[1] = 7;
          *param_1 = 0;
          return;
        }
      }
      else if (cVar1 == 'h') {
        if (((param_2[1] == 'o') && (param_2[2] == 'i')) &&
           ((param_2[3] == 's' && (param_2[4] == 't')))) {
          param_1[1] = 9;
          *param_1 = 0;
          return;
        }
      }
      else if (((cVar1 == 'f') && (param_2[1] == 'l')) &&
              ((param_2[2] == 'a' && ((param_2[3] == 'g' && (param_2[4] == 's')))))) {
        param_1[1] = 4;
        *param_1 = 0;
        return;
      }
    }
    else if ((((param_3 == 6) && (*param_2 == 'c')) && (param_2[1] == 'o')) &&
            (((param_2[2] == 'l' && (param_2[3] == 'o')) &&
             ((param_2[4] == 'r' && (param_2[5] == 's')))))) {
      param_1[1] = 8;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 < 0xb) {
    if (param_3 == 7) {
      if (*param_2 == 'v') {
        if (((param_2[1] == 'e') && (param_2[2] == 'r')) &&
           ((param_2[3] == 's' &&
            (((param_2[4] == 'i' && (param_2[5] == 'o')) && (param_2[6] == 'n')))))) {
          param_1[1] = 0xe;
          *param_1 = 0;
          return;
        }
      }
      else if (((*param_2 == 'm') && (param_2[1] == 'a')) &&
              ((((param_2[2] == 'n' && ((param_2[3] == 'a' && (param_2[4] == 'g')))) &&
                (param_2[5] == 'e')) && (param_2[6] == 'd')))) {
        param_1[1] = 10;
        *param_1 = 0;
        return;
      }
    }
    else if (((((param_3 == 8) && (*param_2 == 'p')) && (param_2[1] == 'o')) &&
             ((param_2[2] == 's' && (param_2[3] == 'i')))) &&
            (((param_2[4] == 't' && ((param_2[5] == 'i' && (param_2[6] == 'o')))) &&
             (param_2[7] == 'n')))) {
      param_1[1] = 6;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 0xb) {
    cVar1 = *param_2;
    if (cVar1 == 'p') {
      if (((((((param_2[1] == 'e') && (param_2[2] == 'r')) && (param_2[3] == 'm')) &&
            ((param_2[4] == 'i' && (param_2[5] == 's')))) && (param_2[6] == 's')) &&
          ((param_2[7] == 'i' && (param_2[8] == 'o')))) &&
         ((param_2[9] == 'n' && (param_2[10] == 's')))) {
        param_1[1] = 3;
        *param_1 = 0;
        return;
      }
    }
    else if (cVar1 == 'm') {
      if ((((param_2[1] == 'e') && (param_2[2] == 'n')) && (param_2[3] == 't')) &&
         (((((param_2[4] == 'i' && (param_2[5] == 'o')) &&
            ((param_2[6] == 'n' && ((param_2[7] == 'a' && (param_2[8] == 'b')))))) &&
           (param_2[9] == 'l')) && (param_2[10] == 'e')))) {
        param_1[1] = 5;
        *param_1 = 0;
        return;
      }
    }
    else if ((((((cVar1 == 'd') && (param_2[1] == 'e')) && (param_2[2] == 's')) &&
              ((param_2[3] == 'c' && (param_2[4] == 'r')))) &&
             ((param_2[5] == 'i' && ((param_2[6] == 'p' && (param_2[7] == 't')))))) &&
            ((param_2[8] == 'i' && ((param_2[9] == 'o' && (param_2[10] == 'n')))))) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
  }
  else if (((((((param_3 == 0xd) && (*param_2 == 'u')) && (param_2[1] == 'n')) &&
             ((param_2[2] == 'i' && (param_2[3] == 'c')))) &&
            ((param_2[4] == 'o' && ((param_2[5] == 'd' && (param_2[6] == 'e')))))) &&
           ((param_2[7] == '_' &&
            (((param_2[8] == 'e' && (param_2[9] == 'm')) && (param_2[10] == 'o')))))) &&
          ((param_2[0xb] == 'j' && (param_2[0xc] == 'i')))) {
    param_1[1] = 0xc;
    *param_1 = 0;
    return;
  }
  param_1[1] = 0xf;
  *param_1 = 0;
  return;
}


// ===== 0054fa98  FUN_0054fa98 =====

void FUN_0054fa98(undefined1 *param_1,long *param_2,long param_3)

{
  if (param_3 < 7) {
    if (param_3 < 5) {
      if (param_3 == 2) {
        if ((short)*param_2 == 0x6469) {
          param_1[1] = 0;
          *param_1 = 0;
          return;
        }
      }
      else if (param_3 == 4) {
        if ((int)*param_2 == 0x656d616e) {
          param_1[1] = 1;
          *param_1 = 0;
          return;
        }
        if ((int)*param_2 == 0x6e6f6369) {
          param_1[1] = 0xb;
          *param_1 = 0;
          return;
        }
        if ((int)*param_2 == 0x73676174) {
          param_1[1] = 0xd;
          *param_1 = 0;
          return;
        }
      }
    }
    else if (param_3 == 5) {
      if ((int)*param_2 == 0x67616c66 && *(char *)((long)param_2 + 4) == 's') {
        param_1[1] = 4;
        *param_1 = 0;
        return;
      }
      if ((int)*param_2 == 0x6f6c6f63 && *(char *)((long)param_2 + 4) == 'r') {
        param_1[1] = 7;
        *param_1 = 0;
        return;
      }
      if ((int)*param_2 == 0x73696f68 && *(char *)((long)param_2 + 4) == 't') {
        param_1[1] = 9;
        *param_1 = 0;
        return;
      }
    }
    else if ((param_3 == 6) &&
            ((int)*param_2 == 0x6f6c6f63 && *(short *)((long)param_2 + 4) == 0x7372)) {
      param_1[1] = 8;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 < 0xb) {
    if (param_3 == 7) {
      if ((int)*param_2 == 0x616e616d && *(int *)((long)param_2 + 3) == 0x64656761) {
        param_1[1] = 10;
        *param_1 = 0;
        return;
      }
      if ((int)*param_2 == 0x73726576 && *(int *)((long)param_2 + 3) == 0x6e6f6973) {
        param_1[1] = 0xe;
        *param_1 = 0;
        return;
      }
    }
    else if ((param_3 == 8) && (*param_2 == 0x6e6f697469736f70)) {
      param_1[1] = 6;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 0xb) {
    if (*param_2 == 0x7470697263736564 && *(long *)((long)param_2 + 3) == 0x6e6f697470697263) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
    if (*param_2 == 0x697373696d726570 && *(long *)((long)param_2 + 3) == 0x736e6f697373696d) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
    if (*param_2 == 0x616e6f69746e656d && *(long *)((long)param_2 + 3) == 0x656c62616e6f6974) {
      param_1[1] = 5;
      *param_1 = 0;
      return;
    }
  }
  else if ((param_3 == 0xd) &&
          (*param_2 == 0x5f65646f63696e75 && *(long *)((long)param_2 + 5) == 0x696a6f6d655f6564)) {
    param_1[1] = 0xc;
    *param_1 = 0;
    return;
  }
  param_1[1] = 0xf;
  *param_1 = 0;
  return;
}


// ===== 0054fdf0  FUN_0054fdf0 =====

void FUN_0054fdf0(undefined1 *param_1,long *param_2,long param_3)

{
  if (param_3 < 8) {
    if (param_3 == 2) {
      if ((short)*param_2 == 0x6469) {
        param_1[1] = 0;
        *param_1 = 0;
        return;
      }
    }
    else if (param_3 == 4) {
      if ((int)*param_2 == 0x656d616e) {
        param_1[1] = 1;
        *param_1 = 0;
        return;
      }
      if ((int)*param_2 == 0x73676174) {
        param_1[1] = 2;
        *param_1 = 0;
        return;
      }
    }
    else if (param_3 == 7) {
      if ((int)*param_2 == 0x73726576 && *(int *)((long)param_2 + 3) == 0x6e6f6973) {
        param_1[1] = 7;
        *param_1 = 0;
        return;
      }
      if ((int)*param_2 == 0x72657375 && *(int *)((long)param_2 + 3) == 0x64695f72) {
        param_1[1] = 8;
        *param_1 = 0;
        return;
      }
    }
  }
  else if (param_3 == 8) {
    if (*param_2 == 0x64695f646c697567) {
      param_1[1] = 6;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 9) {
    if (*param_2 == 0x6c62616c69617661 && (char)param_2[1] == 'e') {
      param_1[1] = 5;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 0xb) {
    if (*param_2 == 0x7470697263736564 && *(long *)((long)param_2 + 3) == 0x6e6f697470697263) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
    if (*param_2 == 0x745f74616d726f66 && *(long *)((long)param_2 + 3) == 0x657079745f74616d) {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
  }
  param_1[1] = 9;
  *param_1 = 0;
  return;
}


// ===== 0054fff0  FUN_0054fff0 =====

void FUN_0054fff0(undefined2 *param_1,char *param_2,long param_3)

{
  undefined8 uVar1;
  long local_38;
  void *local_30;
  undefined8 uStack_28;
  
  if (param_3 == 9) {
    if ((((*param_2 == 'f') && (param_2[1] == 'u')) &&
        ((param_2[2] == 'l' &&
         ((((param_2[3] == 'l' && (param_2[4] == '_')) && (param_2[5] == 's')) &&
          ((param_2[6] == 'y' && (param_2[7] == 'n')))))))) && (param_2[8] == 'c')) {
      *param_1 = 0;
      return;
    }
  }
  else if ((((param_3 == 6) && (*param_2 == 'u')) && (param_2[1] == 'p')) &&
          (((param_2[2] == 'd' && (param_2[3] == 'a')) &&
           ((param_2[4] == 't' && (param_2[5] == 'e')))))) {
    *param_1 = 0x100;
    return;
  }
  serde::__private::string::from_utf8_lossy(&local_38);
                    /* try { // try from 00550100 to 00550113 has its CatchHandler @ 00550144 */
  uVar1 = FUN_0052b894(local_30,uStack_28,&PTR_s_full_syn_00acf5d8,2);
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined1 *)param_1 = 1;
  if (local_38 < 1) {
    return;
  }
  free(local_30);
  return;
}


// ===== 00550164  FUN_00550164 =====

void FUN_00550164(undefined1 *param_1,char *param_2,long param_3)

{
  char cVar1;
  
  if (param_3 < 7) {
    if (param_3 < 5) {
      if (param_3 == 2) {
        if ((*param_2 == 'i') && (param_2[1] == 'd')) {
          param_1[1] = 0;
          *param_1 = 0;
          return;
        }
      }
      else if (param_3 == 4) {
        cVar1 = *param_2;
        if (cVar1 == 'i') {
          if (((param_2[1] == 'c') && (param_2[2] == 'o')) && (param_2[3] == 'n')) {
            param_1[1] = 0xb;
            *param_1 = 0;
            return;
          }
        }
        else if (cVar1 == 't') {
          if (((param_2[1] == 'a') && (param_2[2] == 'g')) && (param_2[3] == 's')) {
            param_1[1] = 0xd;
            *param_1 = 0;
            return;
          }
        }
        else if (((cVar1 == 'n') && (param_2[1] == 'a')) &&
                ((param_2[2] == 'm' && (param_2[3] == 'e')))) {
          param_1[1] = 1;
          *param_1 = 0;
          return;
        }
      }
    }
    else if (param_3 == 5) {
      cVar1 = *param_2;
      if (cVar1 == 'c') {
        if (((param_2[1] == 'o') && (param_2[2] == 'l')) &&
           ((param_2[3] == 'o' && (param_2[4] == 'r')))) {
          param_1[1] = 7;
          *param_1 = 0;
          return;
        }
      }
      else if (cVar1 == 'h') {
        if ((((param_2[1] == 'o') && (param_2[2] == 'i')) && (param_2[3] == 's')) &&
           (param_2[4] == 't')) {
          param_1[1] = 9;
          *param_1 = 0;
          return;
        }
      }
      else if (((cVar1 == 'f') && (param_2[1] == 'l')) &&
              ((param_2[2] == 'a' && ((param_2[3] == 'g' && (param_2[4] == 's')))))) {
        param_1[1] = 4;
        *param_1 = 0;
        return;
      }
    }
    else if ((((param_3 == 6) && (*param_2 == 'c')) && (param_2[1] == 'o')) &&
            (((param_2[2] == 'l' && (param_2[3] == 'o')) &&
             ((param_2[4] == 'r' && (param_2[5] == 's')))))) {
      param_1[1] = 8;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 < 0xb) {
    if (param_3 == 7) {
      if (*param_2 == 'v') {
        if ((((param_2[1] == 'e') && (param_2[2] == 'r')) &&
            ((param_2[3] == 's' && ((param_2[4] == 'i' && (param_2[5] == 'o')))))) &&
           (param_2[6] == 'n')) {
          param_1[1] = 0xe;
          *param_1 = 0;
          return;
        }
      }
      else if ((((*param_2 == 'm') && (param_2[1] == 'a')) && (param_2[2] == 'n')) &&
              (((param_2[3] == 'a' && (param_2[4] == 'g')) &&
               ((param_2[5] == 'e' && (param_2[6] == 'd')))))) {
        param_1[1] = 10;
        *param_1 = 0;
        return;
      }
    }
    else if ((((param_3 == 8) && (*param_2 == 'p')) &&
             ((param_2[1] == 'o' &&
              ((((param_2[2] == 's' && (param_2[3] == 'i')) && (param_2[4] == 't')) &&
               ((param_2[5] == 'i' && (param_2[6] == 'o')))))))) && (param_2[7] == 'n')) {
      param_1[1] = 6;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 0xb) {
    cVar1 = *param_2;
    if (cVar1 == 'p') {
      if (((((((param_2[1] == 'e') && (param_2[2] == 'r')) && (param_2[3] == 'm')) &&
            ((param_2[4] == 'i' && (param_2[5] == 's')))) && (param_2[6] == 's')) &&
          ((param_2[7] == 'i' && (param_2[8] == 'o')))) &&
         ((param_2[9] == 'n' && (param_2[10] == 's')))) {
        param_1[1] = 3;
        *param_1 = 0;
        return;
      }
    }
    else if (cVar1 == 'm') {
      if ((((param_2[1] == 'e') && (param_2[2] == 'n')) && (param_2[3] == 't')) &&
         (((((param_2[4] == 'i' && (param_2[5] == 'o')) &&
            ((param_2[6] == 'n' && ((param_2[7] == 'a' && (param_2[8] == 'b')))))) &&
           (param_2[9] == 'l')) && (param_2[10] == 'e')))) {
        param_1[1] = 5;
        *param_1 = 0;
        return;
      }
    }
    else if ((((((cVar1 == 'd') && (param_2[1] == 'e')) && (param_2[2] == 's')) &&
              ((param_2[3] == 'c' && (param_2[4] == 'r')))) &&
             (((param_2[5] == 'i' && ((param_2[6] == 'p' && (param_2[7] == 't')))) &&
              (param_2[8] == 'i')))) && ((param_2[9] == 'o' && (param_2[10] == 'n')))) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
  }
  else if ((((((((param_3 == 0xc) && (*param_2 == 'u')) && (param_2[1] == 'n')) &&
              ((param_2[2] == 'i' && (param_2[3] == 'c')))) &&
             ((param_2[4] == 'o' && ((param_2[5] == 'd' && (param_2[6] == 'e')))))) &&
            (param_2[7] == 'E')) &&
           (((param_2[8] == 'm' && (param_2[9] == 'o')) && (param_2[10] == 'j')))) &&
          (param_2[0xb] == 'i')) {
    param_1[1] = 0xc;
    *param_1 = 0;
    return;
  }
  param_1[1] = 0xf;
  *param_1 = 0;
  return;
}


// ===== 00550764  FUN_00550764 =====

void FUN_00550764(undefined1 *param_1,long *param_2,long param_3)

{
  if (param_3 < 7) {
    if (param_3 < 5) {
      if (param_3 == 2) {
        if ((short)*param_2 == 0x6469) {
          param_1[1] = 0;
          *param_1 = 0;
          return;
        }
      }
      else if (param_3 == 4) {
        if ((int)*param_2 == 0x656d616e) {
          param_1[1] = 1;
          *param_1 = 0;
          return;
        }
        if ((int)*param_2 == 0x6e6f6369) {
          param_1[1] = 0xb;
          *param_1 = 0;
          return;
        }
        if ((int)*param_2 == 0x73676174) {
          param_1[1] = 0xd;
          *param_1 = 0;
          return;
        }
      }
    }
    else if (param_3 == 5) {
      if ((int)*param_2 == 0x67616c66 && *(char *)((long)param_2 + 4) == 's') {
        param_1[1] = 4;
        *param_1 = 0;
        return;
      }
      if ((int)*param_2 == 0x6f6c6f63 && *(char *)((long)param_2 + 4) == 'r') {
        param_1[1] = 7;
        *param_1 = 0;
        return;
      }
      if ((int)*param_2 == 0x73696f68 && *(char *)((long)param_2 + 4) == 't') {
        param_1[1] = 9;
        *param_1 = 0;
        return;
      }
    }
    else if ((param_3 == 6) &&
            ((int)*param_2 == 0x6f6c6f63 && *(short *)((long)param_2 + 4) == 0x7372)) {
      param_1[1] = 8;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 < 0xb) {
    if (param_3 == 7) {
      if ((int)*param_2 == 0x616e616d && *(int *)((long)param_2 + 3) == 0x64656761) {
        param_1[1] = 10;
        *param_1 = 0;
        return;
      }
      if ((int)*param_2 == 0x73726576 && *(int *)((long)param_2 + 3) == 0x6e6f6973) {
        param_1[1] = 0xe;
        *param_1 = 0;
        return;
      }
    }
    else if ((param_3 == 8) && (*param_2 == 0x6e6f697469736f70)) {
      param_1[1] = 6;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 0xb) {
    if (*param_2 == 0x7470697263736564 && *(long *)((long)param_2 + 3) == 0x6e6f697470697263) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
    if (*param_2 == 0x697373696d726570 && *(long *)((long)param_2 + 3) == 0x736e6f697373696d) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
    if (*param_2 == 0x616e6f69746e656d && *(long *)((long)param_2 + 3) == 0x656c62616e6f6974) {
      param_1[1] = 5;
      *param_1 = 0;
      return;
    }
  }
  else if ((param_3 == 0xc) && (*param_2 == 0x4565646f63696e75 && (int)param_2[1] == 0x696a6f6d)) {
    param_1[1] = 0xc;
    *param_1 = 0;
    return;
  }
  param_1[1] = 0xf;
  *param_1 = 0;
  return;
}


// ===== 00550ab4  FUN_00550ab4 =====

void FUN_00550ab4(undefined1 *param_1,char *param_2,long param_3)

{
  ulong uVar1;
  
  uVar1 = param_3 - 8U >> 1 | param_3 << 0x3f;
  if ((long)uVar1 < 7) {
    if (uVar1 == 0) {
      if (((*param_2 == 'f') && (param_2[1] == 'e')) &&
         (((param_2[2] == 'a' &&
           (((param_2[3] == 't' && (param_2[4] == 'u')) && (param_2[5] == 'r')))) &&
          ((param_2[6] == 'e' && (param_2[7] == 's')))))) {
        param_1[1] = 0;
        *param_1 = 0;
        return;
      }
    }
    else if ((((uVar1 == 6) && (*param_2 == 'a')) &&
             ((param_2[1] == 'd' &&
              (((param_2[2] == 'd' && (param_2[3] == 'i')) && (param_2[4] == 't')))))) &&
            (((param_2[5] == 'i' && (param_2[6] == 'o')) &&
             ((param_2[7] == 'n' && ((param_2[8] == 'a' && (param_2[9] == 'l')))))))) {
      if (param_2[10] == 'S') {
        if ((((((param_2[0xb] == 'o') && (param_2[0xc] == 'u')) && (param_2[0xd] == 'n')) &&
             ((param_2[0xe] == 'd' && (param_2[0xf] == 'S')))) &&
            ((param_2[0x10] == 'l' && ((param_2[0x11] == 'o' && (param_2[0x12] == 't')))))) &&
           (param_2[0x13] == 's')) {
          param_1[1] = 3;
          *param_1 = 0;
          return;
        }
      }
      else if (((((param_2[10] == 'E') && (param_2[0xb] == 'm')) && (param_2[0xc] == 'o')) &&
               (((param_2[0xd] == 'j' && (param_2[0xe] == 'i')) &&
                ((param_2[0xf] == 'S' && ((param_2[0x10] == 'l' && (param_2[0x11] == 'o')))))))) &&
              ((param_2[0x12] == 't' && (param_2[0x13] == 's')))) {
        param_1[1] = 1;
        *param_1 = 0;
        return;
      }
    }
  }
  else if (uVar1 == 7) {
    if ((((((*param_2 == 'a') && (param_2[1] == 'd')) && (param_2[2] == 'd')) &&
         ((param_2[3] == 'i' && (param_2[4] == 't')))) &&
        ((param_2[5] == 'i' && ((param_2[6] == 'o' && (param_2[7] == 'n')))))) &&
       ((param_2[8] == 'a' && (param_2[9] == 'l')))) {
      if (param_2[10] == 'S') {
        if ((((param_2[0xb] == 't') && (param_2[0xc] == 'i')) && (param_2[0xd] == 'c')) &&
           (((((param_2[0xe] == 'k' && (param_2[0xf] == 'e')) &&
              ((param_2[0x10] == 'r' && ((param_2[0x11] == 'S' && (param_2[0x12] == 'l')))))) &&
             (param_2[0x13] == 'o')) && ((param_2[0x14] == 't' && (param_2[0x15] == 's')))))) {
          param_1[1] = 2;
          *param_1 = 0;
          return;
        }
      }
      else if (param_2[10] == '_') {
        if (param_2[0xb] == 'e') {
          if ((((((param_2[0xc] == 'm') && (param_2[0xd] == 'o')) && (param_2[0xe] == 'j')) &&
               (((param_2[0xf] == 'i' && (param_2[0x10] == '_')) &&
                ((param_2[0x11] == 's' && ((param_2[0x12] == 'l' && (param_2[0x13] == 'o')))))))) &&
              (param_2[0x14] == 't')) && (param_2[0x15] == 's')) {
            param_1[1] = 1;
            *param_1 = 0;
            return;
          }
        }
        else if (((((((param_2[0xb] == 's') && (param_2[0xc] == 'o')) && (param_2[0xd] == 'u')) &&
                   ((param_2[0xe] == 'n' && (param_2[0xf] == 'd')))) && (param_2[0x10] == '_')) &&
                 ((param_2[0x11] == 's' && (param_2[0x12] == 'l')))) &&
                ((param_2[0x13] == 'o' && ((param_2[0x14] == 't' && (param_2[0x15] == 's')))))) {
          param_1[1] = 3;
          *param_1 = 0;
          return;
        }
      }
    }
  }
  else if ((((((uVar1 == 8) && (*param_2 == 'a')) && (param_2[1] == 'd')) &&
            (((param_2[2] == 'd' && (param_2[3] == 'i')) &&
             (((param_2[4] == 't' && ((param_2[5] == 'i' && (param_2[6] == 'o')))) &&
              (param_2[7] == 'n')))))) &&
           (((((param_2[8] == 'a' && (param_2[9] == 'l')) && (param_2[10] == '_')) &&
             (((param_2[0xb] == 's' && (param_2[0xc] == 't')) &&
              ((param_2[0xd] == 'i' && ((param_2[0xe] == 'c' && (param_2[0xf] == 'k')))))))) &&
            ((param_2[0x10] == 'e' &&
             ((((param_2[0x11] == 'r' && (param_2[0x12] == '_')) && (param_2[0x13] == 's')) &&
              ((param_2[0x14] == 'l' && (param_2[0x15] == 'o')))))))))) &&
          ((param_2[0x16] == 't' && (param_2[0x17] == 's')))) {
    param_1[1] = 2;
    *param_1 = 0;
    return;
  }
  param_1[1] = 4;
  *param_1 = 0;
  return;
}


// ===== 00551054  FUN_00551054 =====

void FUN_00551054(undefined1 *param_1,long *param_2,size_t param_3)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = param_3 - 8 >> 1 | param_3 << 0x3f;
  if ((long)uVar2 < 7) {
    if (uVar2 == 0) {
      iVar1 = memcmp(param_2,&DAT_002a18e8,param_3);
      if (iVar1 == 0) {
        param_1[1] = 0;
        *param_1 = 0;
        return;
      }
      if (param_3 == 0x18) goto LAB_005510d0;
      if (param_3 == 0x16) goto LAB_00551130;
      if (param_3 != 0x14) goto LAB_00551210;
    }
    else if (uVar2 != 6) goto LAB_00551210;
    iVar1 = memcmp(param_2,"additionalEmojiSlots",param_3);
    if (iVar1 == 0) goto LAB_005511dc;
    if (param_3 != 0x14) {
      if (param_3 != 0x18) {
        if (param_3 != 0x16) goto LAB_00551210;
        goto LAB_00551130;
      }
      goto LAB_005510d0;
    }
LAB_005511f8:
    iVar1 = memcmp(param_2,"additionalSoundSlots",param_3);
  }
  else {
    if (uVar2 == 7) {
LAB_00551130:
      iVar1 = memcmp(param_2,"additional_emoji_slotsadditionalStickerSlots",param_3);
      if (iVar1 == 0) {
LAB_005511dc:
        param_1[1] = 1;
        *param_1 = 0;
        return;
      }
      if (param_3 == 0x14) goto LAB_005511f8;
      if (param_3 == 0x18) goto LAB_005510d0;
      if (param_3 != 0x16) goto LAB_00551210;
      if ((*param_2 == 0x6e6f697469646461 && param_2[1] == 0x656b636974536c61) &&
          *(long *)((long)param_2 + 0xe) == 0x73746f6c5372656b) goto LAB_0055122c;
    }
    else {
      if (uVar2 != 8) goto LAB_00551210;
LAB_005510d0:
      iVar1 = memcmp(param_2,"additional_sticker_slots",param_3);
      if (iVar1 == 0) {
LAB_0055122c:
        param_1[1] = 2;
        *param_1 = 0;
        return;
      }
      if (param_3 != 0x16) {
        if (param_3 != 0x14) goto LAB_00551210;
        goto LAB_005511f8;
      }
    }
    iVar1 = memcmp(param_2,"additional_sound_slots",param_3);
  }
  if (iVar1 == 0) {
    param_1[1] = 3;
    *param_1 = 0;
    return;
  }
LAB_00551210:
  param_1[1] = 4;
  *param_1 = 0;
  return;
}


// ===== 00551260  FUN_00551260 =====

void FUN_00551260(undefined1 *param_1,char *param_2,long param_3)

{
  char cVar1;
  
  if (param_3 == 0x18) {
    if (((((((((*param_2 == 'm') && (param_2[1] == 'o')) && (param_2[2] == 'd')) &&
            ((param_2[3] == 'e' && (param_2[4] == 'r')))) && (param_2[5] == 'a')) &&
          ((param_2[6] == 't' && (param_2[7] == 'o')))) &&
         ((param_2[8] == 'r' &&
          (((param_2[9] == 'R' && (param_2[10] == 'e')) && (param_2[0xb] == 'p')))))) &&
        ((((param_2[0xc] == 'o' && (param_2[0xd] == 'r')) && (param_2[0xe] == 't')) &&
         ((param_2[0xf] == 'C' && (param_2[0x10] == 'h')))))) &&
       (((param_2[0x11] == 'a' &&
         (((param_2[0x12] == 'n' && (param_2[0x13] == 'n')) && (param_2[0x14] == 'e')))) &&
        (((param_2[0x15] == 'l' && (param_2[0x16] == 'I')) && (param_2[0x17] == 'd')))))) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    goto LAB_005516b8;
  }
  if (param_3 == 0x1b) {
    if (((((*param_2 != 'm') || (param_2[1] != 'o')) ||
         ((param_2[2] != 'd' ||
          ((((param_2[3] != 'e' || (param_2[4] != 'r')) || (param_2[5] != 'a')) ||
           ((param_2[6] != 't' || (param_2[7] != 'o')))))))) ||
        ((param_2[8] != 'r' || ((param_2[9] != '_' || (param_2[10] != 'r')))))) ||
       (((param_2[0xb] != 'e' ||
         (((param_2[0xc] != 'p' || (param_2[0xd] != 'o')) || (param_2[0xe] != 'r')))) ||
        (param_2[0xf] != 't')))) goto LAB_005516b8;
    if (param_2[0x10] == '_') {
      if (((((param_2[0x11] == 'c') && (param_2[0x12] == 'h')) &&
           ((param_2[0x13] == 'a' && ((param_2[0x14] == 'n' && (param_2[0x15] == 'n')))))) &&
          ((param_2[0x16] == 'e' &&
           (((param_2[0x17] == 'l' && (param_2[0x18] == '_')) && (param_2[0x19] == 'i')))))) &&
         (param_2[0x1a] == 'd')) {
        param_1[1] = 1;
        *param_1 = 0;
        return;
      }
      goto LAB_005516b8;
    }
    if (((param_2[0x10] != 'i') || (param_2[0x11] != 'n')) ||
       (((param_2[0x12] != 'g' || ((param_2[0x13] != '_' || (param_2[0x14] != 'e')))) ||
        ((param_2[0x15] != 'n' ||
         ((((param_2[0x16] != 'a' || (param_2[0x17] != 'b')) || (param_2[0x18] != 'l')) ||
          (param_2[0x19] != 'e')))))))) goto LAB_005516b8;
    cVar1 = param_2[0x1a];
  }
  else {
    if ((((((((param_3 != 0x19) || (*param_2 != 'm')) ||
            ((param_2[1] != 'o' || ((param_2[2] != 'd' || (param_2[3] != 'e')))))) ||
           (param_2[4] != 'r')) ||
          ((((param_2[5] != 'a' || (param_2[6] != 't')) || (param_2[7] != 'o')) ||
           ((param_2[8] != 'r' || (param_2[9] != 'R')))))) ||
         ((param_2[10] != 'e' || ((param_2[0xb] != 'p' || (param_2[0xc] != 'o')))))) ||
        (((param_2[0xd] != 'r' ||
          (((param_2[0xe] != 't' || (param_2[0xf] != 'i')) || (param_2[0x10] != 'n')))) ||
         ((((param_2[0x11] != 'g' || (param_2[0x12] != 'E')) ||
           ((param_2[0x13] != 'n' || ((param_2[0x14] != 'a' || (param_2[0x15] != 'b')))))) ||
          (param_2[0x16] != 'l')))))) || (param_2[0x17] != 'e')) goto LAB_005516b8;
    cVar1 = param_2[0x18];
  }
  if (cVar1 == 'd') {
    param_1[1] = 0;
    *param_1 = 0;
    return;
  }
LAB_005516b8:
  param_1[1] = 2;
  *param_1 = 0;
  return;
}


// ===== 005516c8  FUN_005516c8 =====

void FUN_005516c8(undefined1 *param_1,char *param_2,long param_3)

{
  char cVar1;
  
  if (param_3 < 0x14) {
    if (param_3 < 0x12) {
      if (param_3 == 0xe) {
        if ((((((*param_2 != 'r') || (param_2[1] != 'a')) ||
              ((param_2[2] != 'i' ||
               (((param_2[3] != 'd' || (param_2[4] != 'D')) || (param_2[5] != 'e')))))) ||
             ((param_2[6] != 't' || (param_2[7] != 'e')))) || (param_2[8] != 'c')) ||
           (((param_2[9] != 't' || (param_2[10] != 'e')) ||
            ((param_2[0xb] != 'd' || (param_2[0xc] != 'A')))))) goto LAB_00552034;
        cVar1 = param_2[0xd];
      }
      else {
        if (param_3 != 0x10) goto LAB_00552034;
        if (*param_2 == 'd') {
          if (param_2[1] == 'm') {
            if (param_2[2] == 's') {
              if (((((param_2[3] == 'D') && (param_2[4] == 'i')) && (param_2[5] == 's')) &&
                  (((param_2[6] == 'a' && (param_2[7] == 'b')) &&
                   (((param_2[8] == 'l' && ((param_2[9] == 'e' && (param_2[10] == 'd')))) &&
                    (param_2[0xb] == 'U')))))) &&
                 ((((param_2[0xc] == 'n' && (param_2[0xd] == 't')) && (param_2[0xe] == 'i')) &&
                  (param_2[0xf] == 'l')))) {
                param_1[1] = 2;
                *param_1 = 0;
                return;
              }
            }
            else if (((((param_2[2] == 'S') && (param_2[3] == 'p')) &&
                      ((param_2[4] == 'a' && ((param_2[5] == 'm' && (param_2[6] == 'D')))))) &&
                     ((param_2[7] == 'e' &&
                      (((param_2[8] == 't' && (param_2[9] == 'e')) && (param_2[10] == 'c')))))) &&
                    (((param_2[0xb] == 't' && (param_2[0xc] == 'e')) &&
                     ((param_2[0xd] == 'd' && ((param_2[0xe] == 'A' && (param_2[0xf] == 't'))))))))
            {
              param_1[1] = 1;
              *param_1 = 0;
              return;
            }
          }
          goto LAB_00552034;
        }
        if (((((*param_2 != 'r') || (param_2[1] != 'a')) || (param_2[2] != 'i')) ||
            (((param_2[3] != 'd' || (param_2[4] != '_')) ||
             ((param_2[5] != 'd' || ((param_2[6] != 'e' || (param_2[7] != 't')))))))) ||
           ((param_2[8] != 'e' ||
            (((((param_2[9] != 'c' || (param_2[10] != 't')) || (param_2[0xb] != 'e')) ||
              ((param_2[0xc] != 'd' || (param_2[0xd] != '_')))) || (param_2[0xe] != 'a'))))))
        goto LAB_00552034;
        cVar1 = param_2[0xf];
      }
      if (cVar1 == 't') {
        param_1[1] = 0;
        *param_1 = 0;
        return;
      }
    }
    else if (param_3 == 0x12) {
      if (((*param_2 == 'd') && (param_2[1] == 'm')) &&
         ((((((param_2[2] == 's' && ((param_2[3] == '_' && (param_2[4] == 'd')))) &&
             (param_2[5] == 'i')) &&
            ((((param_2[6] == 's' && (param_2[7] == 'a')) && (param_2[8] == 'b')) &&
             ((param_2[9] == 'l' && (param_2[10] == 'e')))))) &&
           ((param_2[0xb] == 'd' && ((param_2[0xc] == '_' && (param_2[0xd] == 'u')))))) &&
          ((param_2[0xe] == 'n' &&
           (((param_2[0xf] == 't' && (param_2[0x10] == 'i')) && (param_2[0x11] == 'l')))))))) {
        param_1[1] = 2;
        *param_1 = 0;
        return;
      }
    }
    else if (((((param_3 == 0x13) && (*param_2 == 'd')) &&
              ((param_2[1] == 'm' && ((param_2[2] == '_' && (param_2[3] == 's')))))) &&
             ((param_2[4] == 'p' &&
              ((((param_2[5] == 'a' && (param_2[6] == 'm')) && (param_2[7] == '_')) &&
               ((param_2[8] == 'd' && (param_2[9] == 'e')))))))) &&
            (((param_2[10] == 't' && ((param_2[0xb] == 'e' && (param_2[0xc] == 'c')))) &&
             ((param_2[0xd] == 't' &&
              ((((param_2[0xe] == 'e' && (param_2[0xf] == 'd')) && (param_2[0x10] == '_')) &&
               ((param_2[0x11] == 'a' && (param_2[0x12] == 't')))))))))) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 < 0x16) {
    if (param_3 == 0x14) {
      if ((((*param_2 == 'i') && (param_2[1] == 'n')) && (param_2[2] == 'v')) &&
         (((param_2[3] == 'i' && (param_2[4] == 't')) &&
          ((((param_2[5] == 'e' && ((param_2[6] == 's' && (param_2[7] == 'D')))) &&
            ((param_2[8] == 'i' &&
             (((((param_2[9] == 's' && (param_2[10] == 'a')) && (param_2[0xb] == 'b')) &&
               (((param_2[0xc] == 'l' && (param_2[0xd] == 'e')) &&
                ((param_2[0xe] == 'd' && ((param_2[0xf] == 'U' && (param_2[0x10] == 'n')))))))) &&
              (param_2[0x11] == 't')))))) && ((param_2[0x12] == 'i' && (param_2[0x13] == 'l'))))))))
      {
        param_1[1] = 3;
        *param_1 = 0;
        return;
      }
    }
    else if (((((((param_3 == 0x15) && (*param_2 == 'l')) && (param_2[1] == 'o')) &&
               ((param_2[2] == 'c' && (param_2[3] == 'k')))) && (param_2[4] == 'd')) &&
             (((param_2[5] == 'o' && (param_2[6] == 'w')) &&
              ((param_2[7] == 'n' &&
               (((param_2[8] == 'D' && (param_2[9] == 'u')) && (param_2[10] == 'r')))))))) &&
            ((((param_2[0xb] == 'a' && (param_2[0xc] == 't')) &&
              ((param_2[0xd] == 'i' &&
               (((param_2[0xe] == 'o' && (param_2[0xf] == 'n')) &&
                ((param_2[0x10] == 'H' &&
                 (((param_2[0x11] == 'o' && (param_2[0x12] == 'u')) && (param_2[0x13] == 'r'))))))))
              )) && (param_2[0x14] == 's')))) {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 0x16) {
    if ((((((*param_2 == 'i') && (param_2[1] == 'n')) && (param_2[2] == 'v')) &&
         (((param_2[3] == 'i' && (param_2[4] == 't')) &&
          ((param_2[5] == 'e' && ((param_2[6] == 's' && (param_2[7] == '_')))))))) &&
        ((param_2[8] == 'd' &&
         ((((param_2[9] == 'i' && (param_2[10] == 's')) && (param_2[0xb] == 'a')) &&
          ((param_2[0xc] == 'b' && (param_2[0xd] == 'l')))))))) &&
       ((((param_2[0xe] == 'e' && ((param_2[0xf] == 'd' && (param_2[0x10] == '_')))) &&
         (param_2[0x11] == 'u')) &&
        ((((param_2[0x12] == 'n' && (param_2[0x13] == 't')) && (param_2[0x14] == 'i')) &&
         (param_2[0x15] == 'l')))))) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
  }
  else if ((((param_3 == 0x17) && (*param_2 == 'l')) &&
           ((param_2[1] == 'o' && ((param_2[2] == 'c' && (param_2[3] == 'k')))))) &&
          ((((param_2[4] == 'd' &&
             (((param_2[5] == 'o' && (param_2[6] == 'w')) && (param_2[7] == 'n')))) &&
            ((((param_2[8] == '_' && (param_2[9] == 'd')) &&
              ((param_2[10] == 'u' && ((param_2[0xb] == 'r' && (param_2[0xc] == 'a')))))) &&
             (param_2[0xd] == 't')))) &&
           ((((((param_2[0xe] == 'i' && (param_2[0xf] == 'o')) && (param_2[0x10] == 'n')) &&
              ((param_2[0x11] == '_' && (param_2[0x12] == 'h')))) &&
             ((param_2[0x13] == 'o' && ((param_2[0x14] == 'u' && (param_2[0x15] == 'r')))))) &&
            (param_2[0x16] == 's')))))) {
    param_1[1] = 4;
    *param_1 = 0;
    return;
  }
LAB_00552034:
  param_1[1] = 5;
  *param_1 = 0;
  return;
}


// ===== 00552044  FUN_00552044 =====

void FUN_00552044(undefined1 *param_1,long *param_2,long param_3)

{
  if (param_3 < 0x14) {
    if (param_3 < 0x12) {
      if (param_3 == 0xe) {
        if (*param_2 == 0x6574654464696172 && *(long *)((long)param_2 + 6) == 0x7441646574636574) {
LAB_00552278:
          param_1[1] = 0;
          *param_1 = 0;
          return;
        }
      }
      else if (param_3 == 0x10) {
        if (*param_2 == 0x7465645f64696172 && param_2[1] == 0x74615f6465746365) goto LAB_00552278;
        if (*param_2 == 0x65446d6170536d64 && param_2[1] == 0x7441646574636574) goto LAB_005521cc;
        if (*param_2 == 0x6261736944736d64 && param_2[1] == 0x6c69746e5564656c) {
          param_1[1] = 2;
          *param_1 = 0;
          return;
        }
      }
    }
    else if (param_3 == 0x12) {
      if ((*param_2 == 0x617369645f736d64 && param_2[1] == 0x746e755f64656c62) &&
          (short)param_2[2] == 0x6c69) {
        param_1[1] = 2;
        *param_1 = 0;
        return;
      }
    }
    else if ((param_3 == 0x13) &&
            ((*param_2 == 0x5f6d6170735f6d64 && param_2[1] == 0x6465746365746564) &&
             *(long *)((long)param_2 + 0xb) == 0x74615f6465746365)) {
LAB_005521cc:
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 < 0x16) {
    if (param_3 == 0x14) {
      if ((*param_2 == 0x4473657469766e69 && param_2[1] == 0x5564656c62617369) &&
          (int)param_2[2] == 0x6c69746e) {
LAB_0055236c:
        param_1[1] = 3;
        *param_1 = 0;
        return;
      }
    }
    else if ((param_3 == 0x15) &&
            ((*param_2 == 0x6e776f646b636f6c && param_2[1] == 0x6e6f697461727544) &&
             *(long *)((long)param_2 + 0xd) == 0x7372756f486e6f69)) {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 0x16) {
    if ((*param_2 == 0x5f73657469766e69 && param_2[1] == 0x64656c6261736964) &&
        *(long *)((long)param_2 + 0xe) == 0x6c69746e755f6465) goto LAB_0055236c;
  }
  else if ((param_3 == 0x17) &&
          ((*param_2 == 0x6e776f646b636f6c && param_2[1] == 0x6f6974617275645f) &&
           *(long *)((long)param_2 + 0xf) == 0x7372756f685f6e6f)) {
    param_1[1] = 4;
    *param_1 = 0;
    return;
  }
  param_1[1] = 5;
  *param_1 = 0;
  return;
}


// ===== 0055237c  FUN_0055237c =====

void FUN_0055237c(undefined1 *param_1,byte *param_2,undefined8 param_3)

{
  byte bVar1;
  
  switch(param_3) {
  case 2:
    if ((*param_2 == 0x69) && (param_2[1] == 100)) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    break;
  case 4:
    if (*param_2 == 0x69) {
      if (((param_2[1] == 99) && (param_2[2] == 0x6f)) && (param_2[3] == 0x6e)) {
        param_1[1] = 2;
        *param_1 = 0;
        return;
      }
    }
    else if ((((*param_2 == 0x6e) && (param_2[1] == 0x61)) && (param_2[2] == 0x6d)) &&
            (param_2[3] == 0x65)) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    break;
  case 6:
    if (*param_2 == 0x62) {
      if (((param_2[1] == 0x61) && (param_2[2] == 0x6e)) &&
         ((param_2[3] == 0x6e && ((param_2[4] == 0x65 && (param_2[5] == 0x72)))))) {
        param_1[1] = 7;
        *param_1 = 0;
        return;
      }
    }
    else if ((((*param_2 == 0x73) && (param_2[1] == 0x70)) && (param_2[2] == 0x6c)) &&
            (((param_2[3] == 0x61 && (param_2[4] == 0x73)) && (param_2[5] == 0x68)))) {
      param_1[1] = 5;
      *param_1 = 0;
      return;
    }
    break;
  case 7:
    if ((((*param_2 == 0x70) && (param_2[1] == 0x72)) && (param_2[2] == 0x6f)) &&
       (((param_2[3] == 0x66 && (param_2[4] == 0x69)) &&
        ((param_2[5] == 0x6c && (param_2[6] == 0x65)))))) {
      param_1[1] = 0x21;
      *param_1 = 0;
      return;
    }
    break;
  case 8:
    bVar1 = *param_2;
    if (bVar1 == 0x6f) {
      if (((((param_2[1] == 0x77) && (param_2[2] == 0x6e)) && (param_2[3] == 0x65)) &&
          ((param_2[4] == 0x72 && (param_2[5] == 0x5f)))) &&
         ((param_2[6] == 0x69 && (param_2[7] == 100)))) {
        param_1[1] = 0xf;
        *param_1 = 0;
        return;
      }
    }
    else if (bVar1 == 0x68) {
      if (((param_2[1] == 0x75) && (param_2[2] == 0x62)) &&
         ((param_2[3] == 0x5f &&
          ((((param_2[4] == 0x74 && (param_2[5] == 0x79)) && (param_2[6] == 0x70)) &&
           (param_2[7] == 0x65)))))) {
        param_1[1] = 0x1f;
        *param_1 = 0;
        return;
      }
    }
    else if ((((bVar1 == 0x66) && (param_2[1] == 0x65)) &&
             (((param_2[2] == 0x61 && ((param_2[3] == 0x74 && (param_2[4] == 0x75)))) &&
              (param_2[5] == 0x72)))) && ((param_2[6] == 0x65 && (param_2[7] == 0x73)))) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
    break;
  case 9:
    if ((((*param_2 == 0x6d) && (param_2[1] == 0x66)) && (param_2[2] == 0x61)) &&
       ((((param_2[3] == 0x5f && (param_2[4] == 0x6c)) &&
         ((param_2[5] == 0x65 && ((param_2[6] == 0x76 && (param_2[7] == 0x65)))))) &&
        (param_2[8] == 0x6c)))) {
      param_1[1] = 0x11;
      *param_1 = 0;
      return;
    }
    break;
  case 10:
    if ((((((((*param_2 == 0x6e) && (param_2[1] == 0x73)) && (param_2[2] == 0x66)) &&
           ((param_2[3] == 0x77 && (param_2[4] == 0x5f)))) && (param_2[5] == 0x6c)) &&
         ((param_2[6] == 0x65 && (param_2[7] == 0x76)))) && (param_2[8] == 0x65)) &&
       (param_2[9] == 0x6c)) {
      param_1[1] = 0x1e;
      *param_1 = 0;
      return;
    }
    break;
  case 0xb:
    bVar1 = *param_2;
    if (bVar1 < 0x68) {
      if (bVar1 == 0x61) {
        if (((((param_2[1] == 0x66) && (param_2[2] == 0x6b)) && (param_2[3] == 0x5f)) &&
            (((param_2[4] == 0x74 && (param_2[5] == 0x69)) &&
             ((param_2[6] == 0x6d && ((param_2[7] == 0x65 && (param_2[8] == 0x6f)))))))) &&
           ((param_2[9] == 0x75 && (param_2[10] == 0x74)))) {
          param_1[1] = 0xb;
          *param_1 = 0;
          return;
        }
      }
      else if ((((((bVar1 == 100) && (param_2[1] == 0x65)) && (param_2[2] == 0x73)) &&
                ((param_2[3] == 99 && (param_2[4] == 0x72)))) &&
               ((param_2[5] == 0x69 && ((param_2[6] == 0x70 && (param_2[7] == 0x74)))))) &&
              ((param_2[8] == 0x69 && ((param_2[9] == 0x6f && (param_2[10] == 0x6e)))))) {
        param_1[1] = 4;
        *param_1 = 0;
        return;
      }
    }
    else if (bVar1 == 0x68) {
      if (((((param_2[1] == 0x6f) && (param_2[2] == 0x6d)) &&
           ((param_2[3] == 0x65 &&
            (((param_2[4] == 0x5f && (param_2[5] == 0x68)) && (param_2[6] == 0x65)))))) &&
          ((param_2[7] == 0x61 && (param_2[8] == 100)))) &&
         ((param_2[9] == 0x65 && (param_2[10] == 0x72)))) {
        param_1[1] = 8;
        *param_1 = 0;
        return;
      }
    }
    else if ((((bVar1 == 0x6d) && (param_2[1] == 0x61)) &&
             ((param_2[2] == 0x78 &&
              ((((param_2[3] == 0x5f && (param_2[4] == 0x6d)) && (param_2[5] == 0x65)) &&
               ((param_2[6] == 0x6d && (param_2[7] == 0x62)))))))) &&
            ((param_2[8] == 0x65 && ((param_2[9] == 0x72 && (param_2[10] == 0x73)))))) {
      param_1[1] = 0x1d;
      *param_1 = 0;
      return;
    }
    break;
  case 0xc:
    if (((((*param_2 == 0x70) && (param_2[1] == 0x72)) &&
         ((param_2[2] == 0x65 && ((param_2[3] == 0x6d && (param_2[4] == 0x69)))))) &&
        ((param_2[5] == 0x75 &&
         (((param_2[6] == 0x6d && (param_2[7] == 0x5f)) && (param_2[8] == 0x74)))))) &&
       (((param_2[9] == 0x69 && (param_2[10] == 0x65)) && (param_2[0xb] == 0x72)))) {
      param_1[1] = 0x14;
      *param_1 = 0;
      return;
    }
    break;
  case 0xd:
    if (((((*param_2 == 0x76) && (param_2[1] == 0x61)) && (param_2[2] == 0x6e)) &&
        ((param_2[3] == 0x69 && (param_2[4] == 0x74)))) &&
       (((param_2[5] == 0x79 && ((param_2[6] == 0x55 && (param_2[7] == 0x52)))) &&
        ((param_2[8] == 0x4c &&
         ((((param_2[9] == 0x43 && (param_2[10] == 0x6f)) && (param_2[0xb] == 100)) &&
          (param_2[0xc] == 0x65)))))))) {
      param_1[1] = 0x13;
      *param_1 = 0;
      return;
    }
    break;
  case 0xe:
    if (*param_2 == 0x69) {
      if (((((param_2[1] == 0x6e) && (param_2[2] == 99)) && (param_2[3] == 0x69)) &&
          (((param_2[4] == 100 && (param_2[5] == 0x65)) &&
           ((param_2[6] == 0x6e && ((param_2[7] == 0x74 && (param_2[8] == 0x73)))))))) &&
         (((param_2[9] == 0x5f &&
           (((param_2[10] == 100 && (param_2[0xb] == 0x61)) && (param_2[0xc] == 0x74)))) &&
          (param_2[0xd] == 0x61)))) {
        param_1[1] = 0x27;
        *param_1 = 0;
        return;
      }
    }
    else if (*param_2 == 0x61) {
      if (param_2[1] == 0x66) {
        if (((param_2[2] == 0x6b) && (param_2[3] == 0x5f)) &&
           ((((param_2[4] == 99 && ((param_2[5] == 0x68 && (param_2[6] == 0x61)))) &&
             (param_2[7] == 0x6e)) &&
            (((((param_2[8] == 0x6e && (param_2[9] == 0x65)) && (param_2[10] == 0x6c)) &&
              ((param_2[0xb] == 0x5f && (param_2[0xc] == 0x69)))) && (param_2[0xd] == 100)))))) {
          param_1[1] = 10;
          *param_1 = 0;
          return;
        }
      }
      else if ((((((param_2[1] == 0x70) && (param_2[2] == 0x70)) &&
                 ((param_2[3] == 0x6c &&
                  (((param_2[4] == 0x69 && (param_2[5] == 99)) && (param_2[6] == 0x61)))))) &&
                ((param_2[7] == 0x74 && (param_2[8] == 0x69)))) && (param_2[9] == 0x6f)) &&
              (((param_2[10] == 0x6e && (param_2[0xb] == 0x5f)) &&
               ((param_2[0xc] == 0x69 && (param_2[0xd] == 100)))))) {
        param_1[1] = 0x10;
        *param_1 = 0;
        return;
      }
    }
    break;
  case 0xf:
    if ((((*param_2 == 0x76) && (param_2[1] == 0x61)) &&
        ((param_2[2] == 0x6e && ((param_2[3] == 0x69 && (param_2[4] == 0x74)))))) &&
       ((param_2[5] == 0x79 &&
        ((((((param_2[6] == 0x5f && (param_2[7] == 0x75)) && (param_2[8] == 0x72)) &&
           ((param_2[9] == 0x6c && (param_2[10] == 0x5f)))) &&
          ((param_2[0xb] == 99 && ((param_2[0xc] == 0x6f && (param_2[0xd] == 100)))))) &&
         (param_2[0xe] == 0x65)))))) {
      param_1[1] = 0x13;
      *param_1 = 0;
      return;
    }
    break;
  case 0x10:
    bVar1 = *param_2;
    if (bVar1 == 0x72) {
      if (((((((param_2[1] == 0x75) && (param_2[2] == 0x6c)) && (param_2[3] == 0x65)) &&
            ((param_2[4] == 0x73 && (param_2[5] == 0x5f)))) && (param_2[6] == 99)) &&
          ((((param_2[7] == 0x68 && (param_2[8] == 0x61)) &&
            ((param_2[9] == 0x6e &&
             (((param_2[10] == 0x6e && (param_2[0xb] == 0x65)) && (param_2[0xc] == 0x6c)))))) &&
           ((param_2[0xd] == 0x5f && (param_2[0xe] == 0x69)))))) && (param_2[0xf] == 100)) {
        param_1[1] = 0x16;
        *param_1 = 0;
        return;
      }
    }
    else if (bVar1 == 0x70) {
      if ((param_2[1] == 0x72) && (param_2[2] == 0x65)) {
        if (param_2[3] == 0x6d) {
          if ((((((param_2[4] == 0x69) && (param_2[5] == 0x75)) && (param_2[6] == 0x6d)) &&
               (((param_2[7] == 0x5f && (param_2[8] == 0x66)) &&
                ((param_2[9] == 0x65 && ((param_2[10] == 0x61 && (param_2[0xb] == 0x74)))))))) &&
              (param_2[0xc] == 0x75)) &&
             (((param_2[0xd] == 0x72 && (param_2[0xe] == 0x65)) && (param_2[0xf] == 0x73)))) {
            param_1[1] = 0x22;
            *param_1 = 0;
            return;
          }
        }
        else if (((((param_2[3] == 0x66) && (param_2[4] == 0x65)) &&
                  (((param_2[5] == 0x72 && ((param_2[6] == 0x72 && (param_2[7] == 0x65)))) &&
                   (param_2[8] == 100)))) &&
                 ((((param_2[9] == 0x5f && (param_2[10] == 0x6c)) && (param_2[0xb] == 0x6f)) &&
                  ((param_2[0xc] == 99 && (param_2[0xd] == 0x61)))))) &&
                ((param_2[0xe] == 0x6c && (param_2[0xf] == 0x65)))) {
          param_1[1] = 9;
          *param_1 = 0;
          return;
        }
      }
    }
    else if ((((bVar1 == 100) && (param_2[1] == 0x69)) &&
             ((param_2[2] == 0x73 &&
              (((param_2[3] == 99 && (param_2[4] == 0x6f)) && (param_2[5] == 0x76)))))) &&
            (((param_2[6] == 0x65 && (param_2[7] == 0x72)) &&
             (((param_2[8] == 0x79 &&
               (((param_2[9] == 0x5f && (param_2[10] == 0x73)) &&
                ((param_2[0xb] == 0x70 &&
                 (((param_2[0xc] == 0x6c && (param_2[0xd] == 0x61)) && (param_2[0xe] == 0x73))))))))
              && (param_2[0xf] == 0x68)))))) {
      param_1[1] = 6;
      *param_1 = 0;
      return;
    }
    break;
  case 0x11:
    if (((((*param_2 == 0x73) && (param_2[1] == 0x79)) && (param_2[2] == 0x73)) &&
        (((param_2[3] == 0x74 && (param_2[4] == 0x65)) &&
         ((param_2[5] == 0x6d && ((param_2[6] == 0x5f && (param_2[7] == 99)))))))) &&
       (((param_2[8] == 0x68 &&
         (((param_2[9] == 0x61 && (param_2[10] == 0x6e)) && (param_2[0xb] == 0x6e)))) &&
        (((param_2[0xc] == 0x65 && (param_2[0xd] == 0x6c)) &&
         ((param_2[0xe] == 0x5f && ((param_2[0xf] == 0x69 && (param_2[0x10] == 100)))))))))) {
      param_1[1] = 0xc;
      *param_1 = 0;
      return;
    }
    break;
  case 0x12:
    if ((((((*param_2 == 0x76) && (param_2[1] == 0x65)) && (param_2[2] == 0x72)) &&
         ((param_2[3] == 0x69 && (param_2[4] == 0x66)))) &&
        (((param_2[5] == 0x69 && ((param_2[6] == 99 && (param_2[7] == 0x61)))) &&
         ((param_2[8] == 0x74 &&
          (((((param_2[9] == 0x69 && (param_2[10] == 0x6f)) && (param_2[0xb] == 0x6e)) &&
            ((param_2[0xc] == 0x5f && (param_2[0xd] == 0x6c)))) &&
           ((param_2[0xe] == 0x65 && ((param_2[0xf] == 0x76 && (param_2[0x10] == 0x65)))))))))))) &&
       (param_2[0x11] == 0x6c)) {
      param_1[1] = 0xd;
      *param_1 = 0;
      return;
    }
    break;
  case 0x13:
    if ((((((*param_2 == 0x6d) && (param_2[1] == 0x6f)) && (param_2[2] == 100)) &&
         ((param_2[3] == 0x65 && (param_2[4] == 0x72)))) &&
        ((param_2[5] == 0x61 && ((param_2[6] == 0x74 && (param_2[7] == 0x6f)))))) &&
       ((((param_2[8] == 0x72 &&
          (((param_2[9] == 0x5f && (param_2[10] == 0x72)) && (param_2[0xb] == 0x65)))) &&
         ((((param_2[0xc] == 0x70 && (param_2[0xd] == 0x6f)) &&
           ((param_2[0xe] == 0x72 && ((param_2[0xf] == 0x74 && (param_2[0x10] == 0x69)))))) &&
          (param_2[0x11] == 0x6e)))) && (param_2[0x12] == 0x67)))) {
      param_1[1] = 0x23;
      *param_1 = 0;
      return;
    }
    break;
  case 0x14:
    bVar1 = *param_2;
    if (bVar1 == 0x67) {
      if ((((((((param_2[1] == 0x61) && (param_2[2] == 0x6d)) && (param_2[3] == 0x65)) &&
             ((param_2[4] == 0x5f && (param_2[5] == 0x61)))) &&
            ((param_2[6] == 0x70 && ((param_2[7] == 0x70 && (param_2[8] == 0x6c)))))) &&
           ((param_2[9] == 0x69 &&
            (((param_2[10] == 99 && (param_2[0xb] == 0x61)) && (param_2[0xc] == 0x74)))))) &&
          ((param_2[0xd] == 0x69 && (param_2[0xe] == 0x6f)))) &&
         (((param_2[0xf] == 0x6e && ((param_2[0x10] == 0x5f && (param_2[0x11] == 0x69)))) &&
          ((param_2[0x12] == 100 && (param_2[0x13] == 0x73)))))) {
        param_1[1] = 0x26;
        *param_1 = 0;
        return;
      }
    }
    else if (bVar1 == 0x76) {
      if ((((((param_2[1] == 0x65) && (param_2[2] == 0x72)) && (param_2[3] == 0x69)) &&
           (((param_2[4] == 0x66 && (param_2[5] == 0x69)) &&
            ((param_2[6] == 99 && ((param_2[7] == 0x61 && (param_2[8] == 0x74)))))))) &&
          (param_2[9] == 0x69)) &&
         (((((((param_2[10] == 0x6f && (param_2[0xb] == 0x6e)) && (param_2[0xc] == 0x5f)) &&
             ((param_2[0xd] == 0x72 && (param_2[0xe] == 0x6f)))) && (param_2[0xf] == 0x6c)) &&
           ((param_2[0x10] == 0x65 && (param_2[0x11] == 0x5f)))) &&
          ((param_2[0x12] == 0x69 && (param_2[0x13] == 100)))))) {
        param_1[1] = 0x25;
        *param_1 = 0;
        return;
      }
    }
    else if (((((bVar1 == 0x73) && (param_2[1] == 0x79)) && (param_2[2] == 0x73)) &&
             (((param_2[3] == 0x74 && (param_2[4] == 0x65)) &&
              (((param_2[5] == 0x6d && ((param_2[6] == 0x5f && (param_2[7] == 99)))) &&
               (param_2[8] == 0x68)))))) &&
            (((((param_2[9] == 0x61 && (param_2[10] == 0x6e)) && (param_2[0xb] == 0x6e)) &&
              (((param_2[0xc] == 0x65 && (param_2[0xd] == 0x6c)) &&
               ((param_2[0xe] == 0x5f && ((param_2[0xf] == 0x66 && (param_2[0x10] == 0x6c)))))))) &&
             ((param_2[0x11] == 0x61 && ((param_2[0x12] == 0x67 && (param_2[0x13] == 0x73)))))))) {
      param_1[1] = 0x15;
      *param_1 = 0;
      return;
    }
    break;
  case 0x17:
    if (*param_2 == 0x6d) {
      if ((((((param_2[1] == 0x61) && (param_2[2] == 0x78)) && (param_2[3] == 0x5f)) &&
           ((param_2[4] == 0x76 && (param_2[5] == 0x69)))) &&
          (((param_2[6] == 100 && ((param_2[7] == 0x65 && (param_2[8] == 0x6f)))) &&
           ((param_2[9] == 0x5f &&
            (((param_2[10] == 99 && (param_2[0xb] == 0x68)) && (param_2[0xc] == 0x61)))))))) &&
         (((param_2[0xd] == 0x6e && (param_2[0xe] == 0x6e)) &&
          ((((param_2[0xf] == 0x65 && ((param_2[0x10] == 0x6c && (param_2[0x11] == 0x5f)))) &&
            (param_2[0x12] == 0x75)) &&
           ((((param_2[0x13] == 0x73 && (param_2[0x14] == 0x65)) && (param_2[0x15] == 0x72)) &&
            (param_2[0x16] == 0x73)))))))) {
        param_1[1] = 0x1c;
        *param_1 = 0;
        return;
      }
    }
    else if ((((((*param_2 == 0x65) && (param_2[1] == 0x78)) &&
               ((param_2[2] == 0x70 && ((param_2[3] == 0x6c && (param_2[4] == 0x69)))))) &&
              (param_2[5] == 99)) &&
             ((((param_2[6] == 0x69 && (param_2[7] == 0x74)) && (param_2[8] == 0x5f)) &&
              (((param_2[9] == 99 && (param_2[10] == 0x6f)) &&
               ((param_2[0xb] == 0x6e && ((param_2[0xc] == 0x74 && (param_2[0xd] == 0x65))))))))))
            && ((param_2[0xe] == 0x6e &&
                ((((param_2[0xf] == 0x74 && (param_2[0x10] == 0x5f)) && (param_2[0x11] == 0x66)) &&
                 (((param_2[0x12] == 0x69 && (param_2[0x13] == 0x6c)) &&
                  ((param_2[0x14] == 0x74 && ((param_2[0x15] == 0x65 && (param_2[0x16] == 0x72))))))
                 )))))) {
      param_1[1] = 0x12;
      *param_1 = 0;
      return;
    }
    break;
  case 0x18:
    if ((((*param_2 == 0x73) && (param_2[1] == 0x61)) &&
        ((param_2[2] == 0x66 && ((param_2[3] == 0x65 && (param_2[4] == 0x74)))))) &&
       ((((param_2[5] == 0x79 &&
          (((param_2[6] == 0x5f && (param_2[7] == 0x61)) && (param_2[8] == 0x6c)))) &&
         (((param_2[9] == 0x65 && (param_2[10] == 0x72)) &&
          ((param_2[0xb] == 0x74 && ((param_2[0xc] == 0x73 && (param_2[0xd] == 0x5f)))))))) &&
        ((param_2[0xe] == 99 &&
         ((((((param_2[0xf] == 0x68 && (param_2[0x10] == 0x61)) && (param_2[0x11] == 0x6e)) &&
            ((param_2[0x12] == 0x6e && (param_2[0x13] == 0x65)))) && (param_2[0x14] == 0x6c)) &&
          (((param_2[0x15] == 0x5f && (param_2[0x16] == 0x69)) && (param_2[0x17] == 100)))))))))) {
      param_1[1] = 0x17;
      *param_1 = 0;
      return;
    }
    break;
  case 0x19:
    if (((((*param_2 == 0x70) && (param_2[1] == 0x75)) &&
         ((param_2[2] == 0x62 &&
          (((param_2[3] == 0x6c && (param_2[4] == 0x69)) && (param_2[5] == 99)))))) &&
        ((param_2[6] == 0x5f && (param_2[7] == 0x75)))) &&
       ((param_2[8] == 0x70 &&
        ((((((param_2[9] == 100 && (param_2[10] == 0x61)) &&
            ((param_2[0xb] == 0x74 &&
             ((((param_2[0xc] == 0x65 && (param_2[0xd] == 0x73)) && (param_2[0xe] == 0x5f)) &&
              ((param_2[0xf] == 99 && (param_2[0x10] == 0x68)))))))) && (param_2[0x11] == 0x61)) &&
          ((param_2[0x12] == 0x6e && (param_2[0x13] == 0x6e)))) &&
         (((param_2[0x14] == 0x65 &&
           (((param_2[0x15] == 0x6c && (param_2[0x16] == 0x5f)) && (param_2[0x17] == 0x69)))) &&
          (param_2[0x18] == 100)))))))) {
      param_1[1] = 0x1a;
      *param_1 = 0;
      return;
    }
    break;
  case 0x1c:
    if (((((*param_2 == 0x70) && (param_2[1] == 0x72)) &&
         ((param_2[2] == 0x65 &&
          (((param_2[3] == 0x6d && (param_2[4] == 0x69)) && (param_2[5] == 0x75)))))) &&
        (((param_2[6] == 0x6d && (param_2[7] == 0x5f)) &&
         ((param_2[8] == 0x70 &&
          (((param_2[9] == 0x72 && (param_2[10] == 0x6f)) &&
           ((param_2[0xb] == 0x67 &&
            ((((param_2[0xc] == 0x72 && (param_2[0xd] == 0x65)) && (param_2[0xe] == 0x73)) &&
             ((param_2[0xf] == 0x73 && (param_2[0x10] == 0x5f)))))))))))))) &&
       (((param_2[0x11] == 0x62 && ((param_2[0x12] == 0x61 && (param_2[0x13] == 0x72)))) &&
        ((((param_2[0x14] == 0x5f &&
           (((param_2[0x15] == 0x65 && (param_2[0x16] == 0x6e)) && (param_2[0x17] == 0x61)))) &&
          (((param_2[0x18] == 0x62 && (param_2[0x19] == 0x6c)) && (param_2[0x1a] == 0x65)))) &&
         (param_2[0x1b] == 100)))))) {
      param_1[1] = 0x18;
      *param_1 = 0;
      return;
    }
    break;
  case 0x1d:
    bVar1 = *param_2;
    if (bVar1 == 0x6d) {
      if ((((((param_2[1] == 0x61) && (param_2[2] == 0x78)) &&
            ((param_2[3] == 0x5f && ((param_2[4] == 0x73 && (param_2[5] == 0x74)))))) &&
           ((param_2[6] == 0x61 &&
            (((param_2[7] == 0x67 && (param_2[8] == 0x65)) && (param_2[9] == 0x5f)))))) &&
          ((((param_2[10] == 0x76 && (param_2[0xb] == 0x69)) &&
            ((param_2[0xc] == 100 && ((param_2[0xd] == 0x65 && (param_2[0xe] == 0x6f)))))) &&
           (param_2[0xf] == 0x5f)))) &&
         (((((((param_2[0x10] == 99 && (param_2[0x11] == 0x68)) && (param_2[0x12] == 0x61)) &&
             ((param_2[0x13] == 0x6e && (param_2[0x14] == 0x6e)))) &&
            ((param_2[0x15] == 0x65 && ((param_2[0x16] == 0x6c && (param_2[0x17] == 0x5f)))))) &&
           (param_2[0x18] == 0x75)) &&
          ((((param_2[0x19] == 0x73 && (param_2[0x1a] == 0x65)) && (param_2[0x1b] == 0x72)) &&
           (param_2[0x1c] == 0x73)))))) {
        param_1[1] = 0x1b;
        *param_1 = 0;
        return;
      }
    }
    else if (bVar1 == 0x6c) {
      if (((param_2[1] == 0x61) && (param_2[2] == 0x74)) &&
         (((((param_2[3] == 0x65 && ((param_2[4] == 0x73 && (param_2[5] == 0x74)))) &&
            ((param_2[6] == 0x5f &&
             (((param_2[7] == 0x6f && (param_2[8] == 0x6e)) && (param_2[9] == 0x62)))))) &&
           (((((param_2[10] == 0x6f && (param_2[0xb] == 0x61)) &&
              ((param_2[0xc] == 0x72 && ((param_2[0xd] == 100 && (param_2[0xe] == 0x69)))))) &&
             (param_2[0xf] == 0x6e)) &&
            ((((param_2[0x10] == 0x67 && (param_2[0x11] == 0x5f)) && (param_2[0x12] == 0x71)) &&
             ((param_2[0x13] == 0x75 && (param_2[0x14] == 0x65)))))))) &&
          (((((param_2[0x15] == 0x73 && ((param_2[0x16] == 0x74 && (param_2[0x17] == 0x69)))) &&
             (param_2[0x18] == 0x6f)) &&
            (((param_2[0x19] == 0x6e && (param_2[0x1a] == 0x5f)) && (param_2[0x1b] == 0x69)))) &&
           (param_2[0x1c] == 100)))))) {
        param_1[1] = 0x20;
        *param_1 = 0;
        return;
      }
    }
    else if ((((((bVar1 == 100) && (param_2[1] == 0x65)) &&
               ((param_2[2] == 0x66 && ((param_2[3] == 0x61 && (param_2[4] == 0x75)))))) &&
              (((param_2[5] == 0x6c &&
                (((((param_2[6] == 0x74 && (param_2[7] == 0x5f)) && (param_2[8] == 0x6d)) &&
                  (((param_2[9] == 0x65 && (param_2[10] == 0x73)) &&
                   ((param_2[0xb] == 0x73 && ((param_2[0xc] == 0x61 && (param_2[0xd] == 0x67))))))))
                 && (param_2[0xe] == 0x65)))) &&
               ((((((param_2[0xf] == 0x5f && (param_2[0x10] == 0x6e)) && (param_2[0x11] == 0x6f)) &&
                  ((param_2[0x12] == 0x74 && (param_2[0x13] == 0x69)))) && (param_2[0x14] == 0x66))
                && ((param_2[0x15] == 0x69 && (param_2[0x16] == 99)))))))) &&
             ((param_2[0x17] == 0x61 &&
              (((param_2[0x18] == 0x74 && (param_2[0x19] == 0x69)) && (param_2[0x1a] == 0x6f))))))
            && ((param_2[0x1b] == 0x6e && (param_2[0x1c] == 0x73)))) {
      param_1[1] = 0xe;
      *param_1 = 0;
      return;
    }
    break;
  case 0x1e:
    if (((((*param_2 == 0x6f) && (param_2[1] == 0x77)) && (param_2[2] == 0x6e)) &&
        ((param_2[3] == 0x65 && (param_2[4] == 0x72)))) &&
       ((((((param_2[5] == 0x5f && ((param_2[6] == 99 && (param_2[7] == 0x6f)))) &&
           (param_2[8] == 0x6e)) &&
          ((((param_2[9] == 0x66 && (param_2[10] == 0x69)) && (param_2[0xb] == 0x67)) &&
           (((param_2[0xc] == 0x75 && (param_2[0xd] == 0x72)) &&
            ((param_2[0xe] == 0x65 && ((param_2[0xf] == 100 && (param_2[0x10] == 0x5f)))))))))) &&
         (param_2[0x11] == 99)) &&
        (((((((param_2[0x12] == 0x6f && (param_2[0x13] == 0x6e)) && (param_2[0x14] == 0x74)) &&
            ((param_2[0x15] == 0x65 && (param_2[0x16] == 0x6e)))) && (param_2[0x17] == 0x74)) &&
          ((param_2[0x18] == 0x5f && (param_2[0x19] == 0x6c)))) &&
         ((param_2[0x1a] == 0x65 &&
          (((param_2[0x1b] == 0x76 && (param_2[0x1c] == 0x65)) && (param_2[0x1d] == 0x6c)))))))))) {
      param_1[1] = 0x24;
      *param_1 = 0;
      return;
    }
    break;
  case 0x2c:
    if (((((((*param_2 == 0x70) && (param_2[1] == 0x72)) && (param_2[2] == 0x65)) &&
          (((param_2[3] == 0x6d && (param_2[4] == 0x69)) &&
           ((param_2[5] == 0x75 && ((param_2[6] == 0x6d && (param_2[7] == 0x5f)))))))) &&
         (param_2[8] == 0x70)) &&
        (((((param_2[9] == 0x72 && (param_2[10] == 0x6f)) && (param_2[0xb] == 0x67)) &&
          ((param_2[0xc] == 0x72 && (param_2[0xd] == 0x65)))) &&
         ((param_2[0xe] == 0x73 && ((param_2[0xf] == 0x73 && (param_2[0x10] == 0x5f)))))))) &&
       ((((((param_2[0x11] == 0x62 &&
            (((param_2[0x12] == 0x61 && (param_2[0x13] == 0x72)) && (param_2[0x14] == 0x5f)))) &&
           (((param_2[0x15] == 0x65 && (param_2[0x16] == 0x6e)) &&
            ((param_2[0x17] == 0x61 && ((param_2[0x18] == 0x62 && (param_2[0x19] == 0x6c)))))))) &&
          (param_2[0x1a] == 0x65)) &&
         (((((param_2[0x1b] == 100 && (param_2[0x1c] == 0x5f)) && (param_2[0x1d] == 0x75)) &&
           (((param_2[0x1e] == 0x73 && (param_2[0x1f] == 0x65)) &&
            ((param_2[0x20] == 0x72 && ((param_2[0x21] == 0x5f && (param_2[0x22] == 0x75)))))))) &&
          ((param_2[0x23] == 0x70 &&
           ((((param_2[0x24] == 100 && (param_2[0x25] == 0x61)) && (param_2[0x26] == 0x74)) &&
            ((param_2[0x27] == 0x65 && (param_2[0x28] == 100)))))))))) &&
        ((param_2[0x29] == 0x5f && ((param_2[0x2a] == 0x61 && (param_2[0x2b] == 0x74)))))))) {
      param_1[1] = 0x19;
      *param_1 = 0;
      return;
    }
  }
  param_1[1] = 0x28;
  *param_1 = 0;
  return;
}


// ===== 005544c0  FUN_005544c0 =====

void FUN_005544c0(undefined1 *param_1,long *param_2,undefined8 param_3)

{
  switch(param_3) {
  case 2:
    if ((short)*param_2 == 0x6469) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    break;
  case 4:
    if ((int)*param_2 == 0x656d616e) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    if ((int)*param_2 == 0x6e6f6369) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
    break;
  case 6:
    if ((int)*param_2 == 0x616c7073 && *(short *)((long)param_2 + 4) == 0x6873) {
      param_1[1] = 5;
      *param_1 = 0;
      return;
    }
    if ((int)*param_2 == 0x6e6e6162 && *(short *)((long)param_2 + 4) == 0x7265) {
      param_1[1] = 7;
      *param_1 = 0;
      return;
    }
    break;
  case 7:
    if ((int)*param_2 == 0x666f7270 && *(int *)((long)param_2 + 3) == 0x656c6966) {
      param_1[1] = 0x21;
      *param_1 = 0;
      return;
    }
    break;
  case 8:
    if (*param_2 == 0x7365727574616566) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
    if (*param_2 == 0x64695f72656e776f) {
      param_1[1] = 0xf;
      *param_1 = 0;
      return;
    }
    if (*param_2 == 0x657079745f627568) {
      param_1[1] = 0x1f;
      *param_1 = 0;
      return;
    }
    break;
  case 9:
    if (*param_2 == 0x6576656c5f61666d && (char)param_2[1] == 'l') {
      param_1[1] = 0x11;
      *param_1 = 0;
      return;
    }
    break;
  case 10:
    if (*param_2 == 0x76656c5f7766736e && (short)param_2[1] == 0x6c65) {
      param_1[1] = 0x1e;
      *param_1 = 0;
      return;
    }
    break;
  case 0xb:
    if (*param_2 == 0x7470697263736564 && *(long *)((long)param_2 + 3) == 0x6e6f697470697263) {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
    if (*param_2 == 0x6165685f656d6f68 && *(long *)((long)param_2 + 3) == 0x7265646165685f65) {
      param_1[1] = 8;
      *param_1 = 0;
      return;
    }
    if (*param_2 == 0x656d69745f6b6661 && *(long *)((long)param_2 + 3) == 0x74756f656d69745f) {
      param_1[1] = 0xb;
      *param_1 = 0;
      return;
    }
    if (*param_2 == 0x626d656d5f78616d && *(long *)((long)param_2 + 3) == 0x737265626d656d5f) {
      param_1[1] = 0x1d;
      *param_1 = 0;
      return;
    }
    break;
  case 0xc:
    if (*param_2 == 0x5f6d75696d657270 && (int)param_2[1] == 0x72656974) {
      param_1[1] = 0x14;
      *param_1 = 0;
      return;
    }
    break;
  case 0xd:
    if (*param_2 == 0x52557974696e6176 && *(long *)((long)param_2 + 5) == 0x65646f434c525579) {
      param_1[1] = 0x13;
      *param_1 = 0;
      return;
    }
    break;
  case 0xe:
    if (*param_2 == 0x6e6168635f6b6661 && *(long *)((long)param_2 + 6) == 0x64695f6c656e6e61) {
      param_1[1] = 10;
      *param_1 = 0;
      return;
    }
    if (*param_2 == 0x746163696c707061 && *(long *)((long)param_2 + 6) == 0x64695f6e6f697461) {
      param_1[1] = 0x10;
      *param_1 = 0;
      return;
    }
    if (*param_2 == 0x746e656469636e69 && *(long *)((long)param_2 + 6) == 0x617461645f73746e) {
      param_1[1] = 0x27;
      *param_1 = 0;
      return;
    }
    break;
  case 0xf:
    if (*param_2 == 0x755f7974696e6176 && *(long *)((long)param_2 + 7) == 0x65646f635f6c7275) {
      param_1[1] = 0x13;
      *param_1 = 0;
      return;
    }
    break;
  case 0x10:
    if (*param_2 == 0x7265766f63736964 && param_2[1] == 0x6873616c70735f79) {
      param_1[1] = 6;
      *param_1 = 0;
      return;
    }
    if (*param_2 == 0x6572726566657270 && param_2[1] == 0x656c61636f6c5f64) {
      param_1[1] = 9;
      *param_1 = 0;
      return;
    }
    if (*param_2 == 0x68635f73656c7572 && param_2[1] == 0x64695f6c656e6e61) {
      param_1[1] = 0x16;
      *param_1 = 0;
      return;
    }
    if (*param_2 == 0x5f6d75696d657270 && param_2[1] == 0x7365727574616566) {
      param_1[1] = 0x22;
      *param_1 = 0;
      return;
    }
    break;
  case 0x11:
    if ((*param_2 == 0x635f6d6574737973 && param_2[1] == 0x695f6c656e6e6168) &&
        (char)param_2[2] == 'd') {
      param_1[1] = 0xc;
      *param_1 = 0;
      return;
    }
    break;
  case 0x12:
    if ((*param_2 == 0x6163696669726576 && param_2[1] == 0x76656c5f6e6f6974) &&
        (short)param_2[2] == 0x6c65) {
      param_1[1] = 0xd;
      *param_1 = 0;
      return;
    }
    break;
  case 0x13:
    if ((*param_2 == 0x6f74617265646f6d && param_2[1] == 0x74726f7065725f72) &&
        *(long *)((long)param_2 + 0xb) == 0x676e6974726f7065) {
      param_1[1] = 0x23;
      *param_1 = 0;
      return;
    }
    break;
  case 0x14:
    if ((*param_2 == 0x635f6d6574737973 && param_2[1] == 0x665f6c656e6e6168) &&
        (int)param_2[2] == 0x7367616c) {
      param_1[1] = 0x15;
      *param_1 = 0;
      return;
    }
    if ((*param_2 == 0x6163696669726576 && param_2[1] == 0x6c6f725f6e6f6974) &&
        (int)param_2[2] == 0x64695f65) {
      param_1[1] = 0x25;
      *param_1 = 0;
      return;
    }
    if ((*param_2 == 0x7070615f656d6167 && param_2[1] == 0x6e6f69746163696c) &&
        (int)param_2[2] == 0x7364695f) {
      param_1[1] = 0x26;
      *param_1 = 0;
      return;
    }
    break;
  case 0x17:
    if ((*param_2 == 0x746963696c707865 && param_2[1] == 0x746e65746e6f635f) &&
        *(long *)((long)param_2 + 0xf) == 0x7265746c69665f74) {
      param_1[1] = 0x12;
      *param_1 = 0;
      return;
    }
    if ((*param_2 == 0x656469765f78616d && param_2[1] == 0x656e6e6168635f6f) &&
        *(long *)((long)param_2 + 0xf) == 0x73726573755f6c65) {
      param_1[1] = 0x1c;
      *param_1 = 0;
      return;
    }
    break;
  case 0x18:
    if ((*param_2 == 0x615f797465666173 && param_2[1] == 0x68635f737472656c) &&
        param_2[2] == 0x64695f6c656e6e61) {
      param_1[1] = 0x17;
      *param_1 = 0;
      return;
    }
    break;
  case 0x19:
    if (((*param_2 == 0x755f63696c627570 && param_2[1] == 0x635f736574616470) &&
        param_2[2] == 0x695f6c656e6e6168) && (char)param_2[3] == 'd') {
      param_1[1] = 0x1a;
      *param_1 = 0;
      return;
    }
    break;
  case 0x1c:
    if (((*param_2 == 0x5f6d75696d657270 && param_2[1] == 0x73736572676f7270) &&
        param_2[2] == 0x616e655f7261625f) && (int)param_2[3] == 0x64656c62) {
      param_1[1] = 0x18;
      *param_1 = 0;
      return;
    }
    break;
  case 0x1d:
    if (((*param_2 == 0x5f746c7561666564 && param_2[1] == 0x5f6567617373656d) &&
        param_2[2] == 0x6163696669746f6e) && *(long *)((long)param_2 + 0x15) == 0x736e6f6974616369)
    {
      param_1[1] = 0xe;
      *param_1 = 0;
      return;
    }
    if (((*param_2 == 0x676174735f78616d && param_2[1] == 0x5f6f656469765f65) &&
        param_2[2] == 0x5f6c656e6e616863) && *(long *)((long)param_2 + 0x15) == 0x73726573755f6c65)
    {
      param_1[1] = 0x1b;
      *param_1 = 0;
      return;
    }
    if (((*param_2 == 0x6f5f74736574616c && param_2[1] == 0x6e696472616f626e) &&
        param_2[2] == 0x6974736575715f67) && *(long *)((long)param_2 + 0x15) == 0x64695f6e6f697473)
    {
      param_1[1] = 0x20;
      *param_1 = 0;
      return;
    }
    break;
  case 0x1e:
    if (((*param_2 == 0x6f635f72656e776f && param_2[1] == 0x646572756769666e) &&
        param_2[2] == 0x746e65746e6f635f) && *(long *)((long)param_2 + 0x16) == 0x6c6576656c5f746e)
    {
      param_1[1] = 0x24;
      *param_1 = 0;
      return;
    }
    break;
  case 0x2c:
    if (((((*param_2 == 0x5f6d75696d657270 && param_2[1] == 0x73736572676f7270) &&
          param_2[2] == 0x616e655f7261625f) && param_2[3] == 0x6573755f64656c62) &&
        param_2[4] == 0x6574616470755f72) && (int)param_2[5] == 0x74615f64) {
      param_1[1] = 0x19;
      *param_1 = 0;
      return;
    }
  }
  param_1[1] = 0x28;
  *param_1 = 0;
  return;
}


// ===== 00555090  FUN_00555090 =====

void FUN_00555090(undefined1 *param_1,char *param_2,size_t param_3)

{
  undefined1 *__dest;
  
  if ((long)param_3 < 6) {
    if (param_3 == 0) {
      __dest = &DAT_00000001;
      goto LAB_005552f4;
    }
    if (param_3 == 2) {
      if ((*param_2 == 'i') && (param_2[1] == 'd')) {
        *param_1 = 0x16;
        return;
      }
    }
    else if ((((param_3 == 5) && (*param_2 == 'r')) && (param_2[1] == 'o')) &&
            (((param_2[2] == 'l' && (param_2[3] == 'e')) && (param_2[4] == 's')))) {
      *param_1 = 0x18;
      return;
    }
  }
  else if (param_3 == 6) {
    if ((((*param_2 == 'e') && (param_2[1] == 'm')) && (param_2[2] == 'o')) &&
       (((param_2[3] == 'j' && (param_2[4] == 'i')) && (param_2[5] == 's')))) {
      *param_1 = 0x19;
      return;
    }
  }
  else if (param_3 == 8) {
    if (((*param_2 == 's') && (param_2[1] == 't')) &&
       ((param_2[2] == 'i' &&
        ((((param_2[3] == 'c' && (param_2[4] == 'k')) && (param_2[5] == 'e')) &&
         ((param_2[6] == 'r' && (param_2[7] == 's')))))))) {
      *param_1 = 0x1a;
      return;
    }
  }
  else if (((param_3 == 10) && (*param_2 == 'p')) &&
          ((((param_2[1] == 'r' &&
             (((param_2[2] == 'o' && (param_2[3] == 'p')) && (param_2[4] == 'e')))) &&
            (((param_2[5] == 'r' && (param_2[6] == 't')) && (param_2[7] == 'i')))) &&
           ((param_2[8] == 'e' && (param_2[9] == 's')))))) {
    *param_1 = 0x17;
    return;
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  __dest = (undefined1 *)malloc(param_3);
  if (__dest == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(1,param_3);
  }
  memcpy(__dest,param_2,param_3);
LAB_005552f4:
  *(size_t *)(param_1 + 8) = param_3;
  *(undefined1 **)(param_1 + 0x10) = __dest;
  *param_1 = 0xe;
  *(size_t *)(param_1 + 0x18) = param_3;
  return;
}


// ===== 00555320  FUN_00555320 =====

void FUN_00555320(undefined1 *param_1,long *param_2,size_t param_3)

{
  undefined1 *__dest;
  
  if ((long)param_3 < 6) {
    if (param_3 == 2) {
      if ((short)*param_2 == 0x6469) {
        *param_1 = 0x16;
        return;
      }
    }
    else if (param_3 == 5) {
      if ((int)*param_2 == 0x656c6f72 && *(char *)((long)param_2 + 4) == 's') {
        *param_1 = 0x18;
        return;
      }
    }
    else {
LAB_005554a0:
      if ((long)param_3 < 0) {
                    /* WARNING: Subroutine does not return */
        alloc::raw_vec::handle_error(0,param_3);
      }
      if (param_3 == 0) {
        __dest = &DAT_00000001;
        goto LAB_00555480;
      }
    }
  }
  else if (param_3 == 6) {
    if ((int)*param_2 == 0x6a6f6d65 && *(short *)((long)param_2 + 4) == 0x7369) {
      *param_1 = 0x19;
      return;
    }
  }
  else if (param_3 == 8) {
    if (*param_2 == 0x7372656b63697473) {
      *param_1 = 0x1a;
      return;
    }
  }
  else {
    if (param_3 != 10) goto LAB_005554a0;
    if (*param_2 == 0x69747265706f7270 && (short)param_2[1] == 0x7365) {
      *param_1 = 0x17;
      return;
    }
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  __dest = (undefined1 *)malloc(param_3);
  if (__dest == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(1,param_3);
  }
  memcpy(__dest,param_2,param_3);
LAB_00555480:
  *(size_t *)(param_1 + 8) = param_3;
  *(undefined1 **)(param_1 + 0x10) = __dest;
  *param_1 = 0xc;
  *(size_t *)(param_1 + 0x18) = param_3;
  return;
}


// ===== 005554e0  FUN_005554e0 =====

void FUN_005554e0(undefined1 *param_1,long *param_2,size_t param_3)

{
  undefined1 *__dest;
  
  if (param_3 == 8) {
    if (*param_2 == 0x7372656b63697473) {
      *param_1 = 0x18;
      return;
    }
  }
  else if (param_3 == 6) {
    if ((int)*param_2 == 0x6a6f6d65 && *(short *)((long)param_2 + 4) == 0x7369) {
      *param_1 = 0x17;
      return;
    }
  }
  else if (param_3 == 5) {
    if ((int)*param_2 == 0x656c6f72 && *(char *)((long)param_2 + 4) == 's') {
      *param_1 = 0x16;
      return;
    }
  }
  else {
    if ((long)param_3 < 0) {
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(0,param_3);
    }
    if (param_3 == 0) {
      __dest = &DAT_00000001;
      goto LAB_005555c0;
    }
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  __dest = (undefined1 *)malloc(param_3);
  if (__dest == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(1,param_3);
  }
  memcpy(__dest,param_2,param_3);
LAB_005555c0:
  *(size_t *)(param_1 + 8) = param_3;
  *(undefined1 **)(param_1 + 0x10) = __dest;
  *param_1 = 0xc;
  *(size_t *)(param_1 + 0x18) = param_3;
  return;
}


// ===== 00555620  FUN_00555620 =====

void FUN_00555620(undefined2 *param_1,char *param_2,long param_3)

{
  undefined8 uVar1;
  long local_38;
  void *local_30;
  undefined8 uStack_28;
  
  if (param_3 == 4) {
    if ((((*param_2 == 'f') && (param_2[1] == 'u')) && (param_2[2] == 'l')) && (param_2[3] == 'l'))
    {
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 7) {
    if (((*param_2 == 'p') && (param_2[1] == 'a')) &&
       ((param_2[2] == 'r' &&
        ((((param_2[3] == 't' && (param_2[4] == 'i')) && (param_2[5] == 'a')) && (param_2[6] == 'l')
         ))))) {
      *param_1 = 0x100;
      return;
    }
  }
  else if ((((param_3 == 0xb) && (*param_2 == 'u')) &&
           ((param_2[1] == 'n' && ((param_2[2] == 'a' && (param_2[3] == 'v')))))) &&
          ((param_2[4] == 'a' &&
           (((((param_2[5] == 'i' && (param_2[6] == 'l')) && (param_2[7] == 'a')) &&
             ((param_2[8] == 'b' && (param_2[9] == 'l')))) && (param_2[10] == 'e')))))) {
    *param_1 = 0x200;
    return;
  }
  serde::__private::string::from_utf8_lossy(&local_38);
                    /* try { // try from 005557a4 to 005557b7 has its CatchHandler @ 005557e8 */
  uVar1 = FUN_0052b894(local_30,uStack_28,&PTR_DAT_00acf628,3);
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined1 *)param_1 = 1;
  if (local_38 < 1) {
    return;
  }
  free(local_30);
  return;
}


// ===== 00555808  FUN_00555808 =====

void FUN_00555808(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_40 [31];
  undefined1 uStack_21;
  
  local_40[0] = 8;
                    /* try { // try from 00555828 to 0055583b has its CatchHandler @ 0055585c */
  uVar1 = <serde_json::error::Error_as_serde::de::Error>::invalid_type
                    (local_40,&uStack_21,&DAT_00acf688);
  *param_1 = 0xfffffffffffffffe;
  param_1[1] = uVar1;
  FUN_0054e61c(param_2);
  return;
}


// ===== 00555874  FUN_00555874 =====

void FUN_00555874(undefined8 *param_1,long *param_2)

{
  void *__ptr;
  undefined8 uVar1;
  long lVar2;
  undefined1 local_48 [8];
  void *local_40;
  long lStack_38;
  undefined1 uStack_11;
  
  __ptr = (void *)param_2[1];
  lStack_38 = param_2[2];
  local_48[0] = 6;
                    /* try { // try from 005558a0 to 005558b3 has its CatchHandler @ 005558e0 */
  local_40 = __ptr;
  uVar1 = <serde_json::error::Error_as_serde::de::Error>::invalid_type
                    (local_48,&uStack_11,&DAT_00acf688);
  lVar2 = *param_2;
  *param_1 = 0xfffffffffffffffe;
  param_1[1] = uVar1;
  if (lVar2 != 0) {
    free(__ptr);
  }
  return;
}


// ===== 005558fc  FUN_005558fc =====

void FUN_005558fc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_40 [31];
  undefined1 uStack_21;
  
  local_40[0] = 9;
                    /* try { // try from 0055591c to 0055592f has its CatchHandler @ 00555950 */
  uVar1 = <serde_json::error::Error_as_serde::de::Error>::invalid_type
                    (local_40,&uStack_21,&DAT_00acf688);
  *param_1 = 0xfffffffffffffffe;
  param_1[1] = uVar1;
  FUN_0054e61c(param_2);
  return;
}


// ===== 00555968  FUN_00555968 =====

void FUN_00555968(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_40 [31];
  undefined1 uStack_21;
  
  local_40[0] = 8;
                    /* try { // try from 00555988 to 0055599b has its CatchHandler @ 005559bc */
  uVar1 = <serde_json::error::Error_as_serde::de::Error>::invalid_type
                    (local_40,&uStack_21,&DAT_00acf6a8);
  *param_1 = 0xfffffffffffffffe;
  param_1[1] = uVar1;
  FUN_0054e61c(param_2);
  return;
}


// ===== 005559d4  FUN_005559d4 =====

void FUN_005559d4(undefined8 *param_1,long *param_2)

{
  void *__ptr;
  undefined8 uVar1;
  long lVar2;
  undefined1 local_48 [8];
  void *local_40;
  long lStack_38;
  undefined1 uStack_11;
  
  __ptr = (void *)param_2[1];
  lStack_38 = param_2[2];
  local_48[0] = 6;
                    /* try { // try from 00555a00 to 00555a13 has its CatchHandler @ 00555a40 */
  local_40 = __ptr;
  uVar1 = <serde_json::error::Error_as_serde::de::Error>::invalid_type
                    (local_48,&uStack_11,&DAT_00acf6a8);
  lVar2 = *param_2;
  *param_1 = 0xfffffffffffffffe;
  param_1[1] = uVar1;
  if (lVar2 != 0) {
    free(__ptr);
  }
  return;
}


// ===== 00555a5c  FUN_00555a5c =====

void FUN_00555a5c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_40 [31];
  undefined1 uStack_21;
  
  local_40[0] = 9;
                    /* try { // try from 00555a7c to 00555a8f has its CatchHandler @ 00555ab0 */
  uVar1 = <serde_json::error::Error_as_serde::de::Error>::invalid_type
                    (local_40,&uStack_21,&DAT_00acf6a8);
  *param_1 = 0xfffffffffffffffe;
  param_1[1] = uVar1;
  FUN_0054e61c(param_2);
  return;
}


// ===== 00555ac8  switchD_00538644::caseD_555ac8 =====

void switchD_00538644::caseD_555ac8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_40 [31];
  undefined1 uStack_21;
  
  local_40[0] = 8;
                    /* try { // try from 00555ae8 to 00555afb has its CatchHandler @ 00555b1c */
  uVar1 = <serde_json::error::Error_as_serde::de::Error>::invalid_type
                    (local_40,&uStack_21,&DAT_00acf6c8);
  *param_1 = 0xfffffffffffffffe;
  param_1[1] = uVar1;
  FUN_0054e61c(param_2);
  return;
}


// ===== 00555b34  FUN_00555b34 =====

void FUN_00555b34(undefined8 *param_1,long *param_2)

{
  void *__ptr;
  undefined8 uVar1;
  long lVar2;
  undefined1 local_48 [8];
  void *local_40;
  long lStack_38;
  undefined1 uStack_11;
  
  __ptr = (void *)param_2[1];
  lStack_38 = param_2[2];
  local_48[0] = 6;
                    /* try { // try from 00555b60 to 00555b73 has its CatchHandler @ 00555ba0 */
  local_40 = __ptr;
  uVar1 = <serde_json::error::Error_as_serde::de::Error>::invalid_type
                    (local_48,&uStack_11,&DAT_00acf6c8);
  lVar2 = *param_2;
  *param_1 = 0xfffffffffffffffe;
  param_1[1] = uVar1;
  if (lVar2 != 0) {
    free(__ptr);
  }
  return;
}


// ===== 00555bbc  FUN_00555bbc =====

void FUN_00555bbc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_40 [31];
  undefined1 uStack_21;
  
  local_40[0] = 9;
                    /* try { // try from 00555bdc to 00555bef has its CatchHandler @ 00555c10 */
  uVar1 = <serde_json::error::Error_as_serde::de::Error>::invalid_type
                    (local_40,&uStack_21,&DAT_00acf6c8);
  *param_1 = 0xfffffffffffffffe;
  param_1[1] = uVar1;
  FUN_0054e61c(param_2);
  return;
}


// ===== 00555c28  FUN_00555c28 =====

void FUN_00555c28(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_40 [31];
  undefined1 uStack_21;
  
  local_40[0] = 8;
                    /* try { // try from 00555c48 to 00555c5b has its CatchHandler @ 00555c7c */
  uVar1 = <serde_json::error::Error_as_serde::de::Error>::invalid_type
                    (local_40,&uStack_21,&DAT_00acf6e8);
  *param_1 = 0xfffffffffffffffe;
  param_1[1] = uVar1;
  FUN_0054e61c(param_2);
  return;
}


// ===== 00555c94  FUN_00555c94 =====

void FUN_00555c94(undefined8 *param_1,long *param_2)

{
  void *__ptr;
  undefined8 uVar1;
  long lVar2;
  undefined1 local_48 [8];
  void *local_40;
  long lStack_38;
  undefined1 uStack_11;
  
  __ptr = (void *)param_2[1];
  lStack_38 = param_2[2];
  local_48[0] = 6;
                    /* try { // try from 00555cc0 to 00555cd3 has its CatchHandler @ 00555d00 */
  local_40 = __ptr;
  uVar1 = <serde_json::error::Error_as_serde::de::Error>::invalid_type
                    (local_48,&uStack_11,&DAT_00acf6e8);
  lVar2 = *param_2;
  *param_1 = 0xfffffffffffffffe;
  param_1[1] = uVar1;
  if (lVar2 != 0) {
    free(__ptr);
  }
  return;
}


// ===== 00555d1c  FUN_00555d1c =====

void FUN_00555d1c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_40 [31];
  undefined1 uStack_21;
  
  local_40[0] = 9;
                    /* try { // try from 00555d3c to 00555d4f has its CatchHandler @ 00555d70 */
  uVar1 = <serde_json::error::Error_as_serde::de::Error>::invalid_type
                    (local_40,&uStack_21,&DAT_00acf6e8);
  *param_1 = 0xfffffffffffffffe;
  param_1[1] = uVar1;
  FUN_0054e61c(param_2);
  return;
}


// ===== 00555d88  FUN_00555d88 =====

void FUN_00555d88(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_40 [31];
  undefined1 uStack_21;
  
  local_40[0] = 8;
                    /* try { // try from 00555da8 to 00555dbb has its CatchHandler @ 00555ddc */
  uVar1 = <serde_json::error::Error_as_serde::de::Error>::invalid_type
                    (local_40,&uStack_21,&DAT_00acf708);
  *param_1 = 0xfffffffffffffffe;
  param_1[1] = uVar1;
  FUN_0054e61c(param_2);
  return;
}


// ===== 00555df4  FUN_00555df4 =====

void FUN_00555df4(undefined8 *param_1,long *param_2)

{
  void *__ptr;
  undefined8 uVar1;
  long lVar2;
  undefined1 local_48 [8];
  void *local_40;
  long lStack_38;
  undefined1 uStack_11;
  
  __ptr = (void *)param_2[1];
  lStack_38 = param_2[2];
  local_48[0] = 6;
                    /* try { // try from 00555e20 to 00555e33 has its CatchHandler @ 00555e60 */
  local_40 = __ptr;
  uVar1 = <serde_json::error::Error_as_serde::de::Error>::invalid_type
                    (local_48,&uStack_11,&DAT_00acf708);
  lVar2 = *param_2;
  *param_1 = 0xfffffffffffffffe;
  param_1[1] = uVar1;
  if (lVar2 != 0) {
    free(__ptr);
  }
  return;
}


// ===== 00555e7c  FUN_00555e7c =====

void FUN_00555e7c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_40 [31];
  undefined1 uStack_21;
  
  local_40[0] = 9;
                    /* try { // try from 00555e9c to 00555eaf has its CatchHandler @ 00555ed0 */
  uVar1 = <serde_json::error::Error_as_serde::de::Error>::invalid_type
                    (local_40,&uStack_21,&DAT_00acf708);
  *param_1 = 0xfffffffffffffffe;
  param_1[1] = uVar1;
  FUN_0054e61c(param_2);
  return;
}


// ===== 00555ee8  FUN_00555ee8 =====

void FUN_00555ee8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_40 [31];
  undefined1 uStack_21;
  
  local_40[0] = 8;
                    /* try { // try from 00555f08 to 00555f1b has its CatchHandler @ 00555f3c */
  uVar1 = <serde_json::error::Error_as_serde::de::Error>::invalid_type
                    (local_40,&uStack_21,&DAT_00acf728);
  *param_1 = 0xfffffffffffffffe;
  param_1[1] = uVar1;
  FUN_0054e61c(param_2);
  return;
}


// ===== 00555f54  FUN_00555f54 =====

void FUN_00555f54(undefined8 *param_1,long *param_2)

{
  void *__ptr;
  undefined8 uVar1;
  long lVar2;
  undefined1 local_48 [8];
  void *local_40;
  long lStack_38;
  undefined1 uStack_11;
  
  __ptr = (void *)param_2[1];
  lStack_38 = param_2[2];
  local_48[0] = 6;
                    /* try { // try from 00555f80 to 00555f93 has its CatchHandler @ 00555fc0 */
  local_40 = __ptr;
  uVar1 = <serde_json::error::Error_as_serde::de::Error>::invalid_type
                    (local_48,&uStack_11,&DAT_00acf728);
  lVar2 = *param_2;
  *param_1 = 0xfffffffffffffffe;
  param_1[1] = uVar1;
  if (lVar2 != 0) {
    free(__ptr);
  }
  return;
}


// ===== 00555fdc  switchD_00538644::caseD_555fdc =====

void switchD_00538644::caseD_555fdc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_40 [31];
  undefined1 uStack_21;
  
  local_40[0] = 9;
                    /* try { // try from 00555ffc to 0055600f has its CatchHandler @ 00556030 */
  uVar1 = <serde_json::error::Error_as_serde::de::Error>::invalid_type
                    (local_40,&uStack_21,&DAT_00acf728);
  *param_1 = 0xfffffffffffffffe;
  param_1[1] = uVar1;
  FUN_0054e61c(param_2);
  return;
}


// ===== 00556048  FUN_00556048 =====

void FUN_00556048(undefined1 *param_1,long *param_2)

{
  char *__ptr;
  long lVar1;
  undefined1 uVar2;
  
  __ptr = (char *)param_2[1];
  lVar1 = param_2[2];
  if (lVar1 == 0xf) {
    if (((((*__ptr == 's') && (__ptr[1] == 'e')) && (__ptr[2] == 'c')) &&
        (((__ptr[3] == 'o' && (__ptr[4] == 'n')) &&
         ((__ptr[5] == 'd' && ((__ptr[6] == 'a' && (__ptr[7] == 'r')))))))) &&
       ((__ptr[8] == 'y' &&
        (((((__ptr[9] == '_' && (__ptr[10] == 'c')) && (__ptr[0xb] == 'o')) &&
          ((__ptr[0xc] == 'l' && (__ptr[0xd] == 'o')))) && (__ptr[0xe] == 'r')))))) {
      uVar2 = 1;
      goto LAB_0055627c;
    }
  }
  else if (lVar1 == 0xe) {
    if (((((*__ptr == 't') && (__ptr[1] == 'e')) &&
         ((__ptr[2] == 'r' && (((__ptr[3] == 't' && (__ptr[4] == 'i')) && (__ptr[5] == 'a')))))) &&
        ((((__ptr[6] == 'r' && (__ptr[7] == 'y')) && (__ptr[8] == '_')) &&
         ((__ptr[9] == 'c' && (__ptr[10] == 'o')))))) &&
       ((__ptr[0xb] == 'l' && ((__ptr[0xc] == 'o' && (__ptr[0xd] == 'r')))))) {
      uVar2 = 2;
      goto LAB_0055627c;
    }
  }
  else if ((((lVar1 == 0xd) && (*__ptr == 'p')) && (__ptr[1] == 'r')) &&
          (((__ptr[2] == 'i' && (__ptr[3] == 'm')) &&
           ((((__ptr[4] == 'a' && ((__ptr[5] == 'r' && (__ptr[6] == 'y')))) && (__ptr[7] == '_')) &&
            ((((__ptr[8] == 'c' && (__ptr[9] == 'o')) && (__ptr[10] == 'l')) &&
             ((__ptr[0xb] == 'o' && (__ptr[0xc] == 'r')))))))))) {
    uVar2 = 0;
    goto LAB_0055627c;
  }
  uVar2 = 3;
LAB_0055627c:
  lVar1 = *param_2;
  param_1[1] = uVar2;
  *param_1 = 0;
  if (lVar1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00556294  FUN_00556294 =====

void FUN_00556294(undefined1 *param_1,long *param_2)

{
  char *__ptr;
  long lVar1;
  undefined1 uVar2;
  
  __ptr = (char *)param_2[1];
  lVar1 = param_2[2];
  if (lVar1 < 8) {
    if (lVar1 == 2) {
      if ((*__ptr == 'i') && (__ptr[1] == 'd')) {
        uVar2 = 0;
        goto LAB_00556608;
      }
    }
    else if (lVar1 == 4) {
      if (*__ptr == 't') {
        if (((__ptr[1] == 'a') && (__ptr[2] == 'g')) && (__ptr[3] == 's')) {
          uVar2 = 2;
          goto LAB_00556608;
        }
      }
      else if (((*__ptr == 'n') && (__ptr[1] == 'a')) && ((__ptr[2] == 'm' && (__ptr[3] == 'e')))) {
        uVar2 = 1;
        goto LAB_00556608;
      }
    }
    else if (lVar1 == 7) {
      if (*__ptr == 'u') {
        if (((__ptr[1] == 's') && (__ptr[2] == 'e')) &&
           ((__ptr[3] == 'r' && (((__ptr[4] == '_' && (__ptr[5] == 'i')) && (__ptr[6] == 'd')))))) {
          uVar2 = 8;
          goto LAB_00556608;
        }
      }
      else if ((((*__ptr == 'v') && (__ptr[1] == 'e')) &&
               ((__ptr[2] == 'r' && ((__ptr[3] == 's' && (__ptr[4] == 'i')))))) &&
              ((__ptr[5] == 'o' && (__ptr[6] == 'n')))) {
        uVar2 = 7;
        goto LAB_00556608;
      }
    }
  }
  else if (lVar1 == 8) {
    if ((((((*__ptr == 'g') && (__ptr[1] == 'u')) && (__ptr[2] == 'i')) &&
         ((__ptr[3] == 'l' && (__ptr[4] == 'd')))) && (__ptr[5] == '_')) &&
       ((__ptr[6] == 'i' && (__ptr[7] == 'd')))) {
      uVar2 = 6;
      goto LAB_00556608;
    }
  }
  else if (lVar1 == 9) {
    if ((((*__ptr == 'a') && (__ptr[1] == 'v')) && (__ptr[2] == 'a')) &&
       ((((__ptr[3] == 'i' && (__ptr[4] == 'l')) &&
         ((__ptr[5] == 'a' && ((__ptr[6] == 'b' && (__ptr[7] == 'l')))))) && (__ptr[8] == 'e')))) {
      uVar2 = 5;
      goto LAB_00556608;
    }
  }
  else if (lVar1 == 0xb) {
    if (*__ptr == 'f') {
      if (((((((__ptr[1] == 'o') && (__ptr[2] == 'r')) && (__ptr[3] == 'm')) &&
            ((__ptr[4] == 'a' && (__ptr[5] == 't')))) &&
           ((__ptr[6] == '_' && ((__ptr[7] == 't' && (__ptr[8] == 'y')))))) && (__ptr[9] == 'p')) &&
         (__ptr[10] == 'e')) {
        uVar2 = 4;
        goto LAB_00556608;
      }
    }
    else if ((((((*__ptr == 'd') && (__ptr[1] == 'e')) && (__ptr[2] == 's')) &&
              ((__ptr[3] == 'c' && (__ptr[4] == 'r')))) &&
             ((__ptr[5] == 'i' && ((__ptr[6] == 'p' && (__ptr[7] == 't')))))) &&
            ((__ptr[8] == 'i' && ((__ptr[9] == 'o' && (__ptr[10] == 'n')))))) {
      uVar2 = 3;
      goto LAB_00556608;
    }
  }
  uVar2 = 9;
LAB_00556608:
  lVar1 = *param_2;
  param_1[1] = uVar2;
  *param_1 = 0;
  if (lVar1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00556620  FUN_00556620 =====

void FUN_00556620(undefined1 *param_1,long *param_2)

{
  char *__ptr;
  long lVar1;
  undefined1 uVar2;
  
  __ptr = (char *)param_2[1];
  if (param_2[2] == 8) {
    if (((((*__ptr == 's') && (__ptr[1] == 't')) && (__ptr[2] == 'i')) &&
        ((__ptr[3] == 'c' && (__ptr[4] == 'k')))) &&
       ((__ptr[5] == 'e' && ((__ptr[6] == 'r' && (__ptr[7] == 's')))))) {
      uVar2 = 1;
      goto LAB_00556700;
    }
  }
  else if ((((param_2[2] == 7) && (*__ptr == 'g')) && (__ptr[1] == 'u')) &&
          (((__ptr[2] == 'i' && (__ptr[3] == 'l')) &&
           ((__ptr[4] == 'd' && ((__ptr[5] == 'I' && (__ptr[6] == 'd')))))))) {
    uVar2 = 0;
    goto LAB_00556700;
  }
  uVar2 = 2;
LAB_00556700:
  lVar1 = *param_2;
  param_1[1] = uVar2;
  *param_1 = 0;
  if (lVar1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00556718  FUN_00556718 =====

void FUN_00556718(undefined1 *param_1,long *param_2)

{
  char *__ptr;
  long lVar1;
  undefined1 uVar2;
  
  __ptr = (char *)param_2[1];
  if (param_2[2] == 0x10) {
    if (((((*__ptr == 'd') && (__ptr[1] == 'e')) && (__ptr[2] == 'l')) &&
        (((__ptr[3] == 'e' && (__ptr[4] == 't')) &&
         ((__ptr[5] == 'e' && ((__ptr[6] == 'd' && (__ptr[7] == '_')))))))) &&
       ((__ptr[8] == 'r' &&
        (((((__ptr[9] == 'o' && (__ptr[10] == 'l')) && (__ptr[0xb] == 'e')) &&
          ((__ptr[0xc] == '_' && (__ptr[0xd] == 'i')))) &&
         ((__ptr[0xe] == 'd' && (__ptr[0xf] == 's')))))))) {
      uVar2 = 1;
      goto LAB_00556840;
    }
  }
  else if (((param_2[2] == 5) && (*__ptr == 'r')) &&
          ((__ptr[1] == 'o' && (((__ptr[2] == 'l' && (__ptr[3] == 'e')) && (__ptr[4] == 's')))))) {
    uVar2 = 0;
    goto LAB_00556840;
  }
  uVar2 = 2;
LAB_00556840:
  lVar1 = *param_2;
  param_1[1] = uVar2;
  *param_1 = 0;
  if (lVar1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00556858  FUN_00556858 =====

void FUN_00556858(undefined1 *param_1,long *param_2)

{
  char *__src;
  size_t __size;
  undefined1 *__dest;
  undefined8 uVar1;
  
  __src = (char *)param_2[1];
  __size = param_2[2];
  if (__size == 5) {
    if ((((*__src == 'r') && (__src[1] == 'o')) && (__src[2] == 'l')) &&
       ((__src[3] == 'e' && (__src[4] == 's')))) {
      *param_1 = 0xff;
      goto LAB_00556910;
    }
LAB_005568e0:
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    __dest = (undefined1 *)malloc(__size);
    if (__dest == (undefined1 *)0x0) {
      uVar1 = 1;
LAB_005568d0:
                    /* try { // try from 005568d0 to 005568d7 has its CatchHandler @ 00556954 */
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(uVar1,__size);
    }
    memcpy(__dest,__src,__size);
  }
  else {
    if ((long)__size < 0) {
      uVar1 = 0;
      goto LAB_005568d0;
    }
    if (__size != 0) goto LAB_005568e0;
    __dest = &DAT_00000001;
  }
  *(size_t *)(param_1 + 8) = __size;
  *(undefined1 **)(param_1 + 0x10) = __dest;
  *param_1 = 0xe;
  *(size_t *)(param_1 + 0x18) = __size;
LAB_00556910:
  if (*param_2 != 0) {
    free(__src);
    return;
  }
  return;
}


// ===== 00556970  FUN_00556970 =====

void FUN_00556970(undefined1 *param_1,long *param_2)

{
  char *__ptr;
  long lVar1;
  undefined1 uVar2;
  
  __ptr = (char *)param_2[1];
  if (param_2[2] == 9) {
    if ((((((*__ptr == 'j') && (__ptr[1] == 'o')) && (__ptr[2] == 'i')) &&
         ((__ptr[3] == 'n' && (__ptr[4] == 'e')))) &&
        ((__ptr[5] == 'd' && ((__ptr[6] == '_' && (__ptr[7] == 'a')))))) && (__ptr[8] == 't')) {
      uVar2 = 1;
      goto LAB_00556b40;
    }
  }
  else if ((((((param_2[2] == 0x1a) && (*__ptr == 'p')) && (__ptr[1] == 'r')) &&
            (((__ptr[2] == 'e' && (__ptr[3] == 'm')) &&
             ((__ptr[4] == 'i' && ((__ptr[5] == 'u' && (__ptr[6] == 'm')))))))) &&
           ((((__ptr[7] == '_' && (((__ptr[8] == 's' && (__ptr[9] == 'u')) && (__ptr[10] == 'b'))))
             && (((__ptr[0xb] == 's' && (__ptr[0xc] == 'c')) &&
                 (((__ptr[0xd] == 'r' && ((__ptr[0xe] == 'i' && (__ptr[0xf] == 'p')))) &&
                  (__ptr[0x10] == 't')))))) &&
            ((((__ptr[0x11] == 'i' && (__ptr[0x12] == 'o')) && (__ptr[0x13] == 'n')) &&
             ((__ptr[0x14] == '_' && (__ptr[0x15] == 'c')))))))) &&
          (((__ptr[0x16] == 'o' && ((__ptr[0x17] == 'u' && (__ptr[0x18] == 'n')))) &&
           (__ptr[0x19] == 't')))) {
    uVar2 = 0;
    goto LAB_00556b40;
  }
  uVar2 = 2;
LAB_00556b40:
  lVar1 = *param_2;
  param_1[1] = uVar2;
  *param_1 = 0;
  if (lVar1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00556b58  FUN_00556b58 =====

void FUN_00556b58(undefined1 *param_1,long *param_2)

{
  char *__src;
  size_t __size;
  undefined1 *__dest;
  undefined8 uVar1;
  undefined1 uVar2;
  
  __src = (char *)param_2[1];
  __size = param_2[2];
  if (__size == 8) {
    if (((((*__src != 's') || (__src[1] != 't')) || (__src[2] != 'i')) ||
        ((__src[3] != 'c' || (__src[4] != 'k')))) ||
       ((__src[5] != 'e' || ((__src[6] != 'r' || (__src[7] != 's')))))) {
LAB_00556ca8:
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      __dest = (undefined1 *)malloc(__size);
      if (__dest == (undefined1 *)0x0) {
        uVar1 = 1;
LAB_00556c98:
                    /* try { // try from 00556c98 to 00556c9f has its CatchHandler @ 00556d1c */
                    /* WARNING: Subroutine does not return */
        alloc::raw_vec::handle_error(uVar1,__size);
      }
      memcpy(__dest,__src,__size);
LAB_00556cc8:
      *(size_t *)(param_1 + 8) = __size;
      *(undefined1 **)(param_1 + 0x10) = __dest;
      *param_1 = 0xe;
      *(size_t *)(param_1 + 0x18) = __size;
      goto LAB_00556cd8;
    }
    uVar2 = 0x18;
  }
  else if (__size == 6) {
    if ((((*__src != 'e') || (__src[1] != 'm')) || (__src[2] != 'o')) ||
       (((__src[3] != 'j' || (__src[4] != 'i')) || (__src[5] != 's')))) goto LAB_00556ca8;
    uVar2 = 0x17;
  }
  else {
    if (__size != 5) {
      if ((long)__size < 0) {
        uVar1 = 0;
        goto LAB_00556c98;
      }
      if (__size != 0) goto LAB_00556ca8;
      __dest = &DAT_00000001;
      goto LAB_00556cc8;
    }
    if (((*__src != 'r') || (__src[1] != 'o')) ||
       ((__src[2] != 'l' || ((__src[3] != 'e' || (__src[4] != 's')))))) goto LAB_00556ca8;
    uVar2 = 0x16;
  }
  *param_1 = uVar2;
LAB_00556cd8:
  if (*param_2 != 0) {
    free(__src);
    return;
  }
  return;
}


// ===== 00556d38  FUN_00556d38 =====

void FUN_00556d38(undefined1 *param_1,long *param_2)

{
  char *__ptr;
  long lVar1;
  undefined1 uVar2;
  
  __ptr = (char *)param_2[1];
  lVar1 = param_2[2];
  if (lVar1 < 8) {
    if (lVar1 == 4) {
      if (((*__ptr == 'u') && (__ptr[1] == 's')) && ((__ptr[2] == 'e' && (__ptr[3] == 'r')))) {
        uVar2 = 0;
        goto LAB_00556f0c;
      }
    }
    else if (((((lVar1 == 7) && (*__ptr == 'g')) && (__ptr[1] == 'u')) &&
             ((__ptr[2] == 'i' && (__ptr[3] == 'l')))) &&
            ((__ptr[4] == 'd' && ((__ptr[5] == 'I' && (__ptr[6] == 'd')))))) {
      uVar2 = 1;
      goto LAB_00556f0c;
    }
  }
  else if (lVar1 == 8) {
    if (((((*__ptr == 'j') && (__ptr[1] == 'o')) && (__ptr[2] == 'i')) &&
        ((__ptr[3] == 'n' && (__ptr[4] == 'e')))) &&
       ((__ptr[5] == 'd' && ((__ptr[6] == 'A' && (__ptr[7] == 't')))))) {
      uVar2 = 2;
      goto LAB_00556f0c;
    }
  }
  else if ((((lVar1 == 0xd) && (*__ptr == 'c')) && (__ptr[1] == 'u')) &&
          (((((__ptr[2] == 'r' && (__ptr[3] == 'r')) &&
             ((__ptr[4] == 'e' && ((__ptr[5] == 'n' && (__ptr[6] == 't')))))) && (__ptr[7] == 'U'))
           && ((((__ptr[8] == 's' && (__ptr[9] == 'e')) && (__ptr[10] == 'r')) &&
               ((__ptr[0xb] == 'I' && (__ptr[0xc] == 'd')))))))) {
    uVar2 = 3;
    goto LAB_00556f0c;
  }
  uVar2 = 4;
LAB_00556f0c:
  lVar1 = *param_2;
  param_1[1] = uVar2;
  *param_1 = 0;
  if (lVar1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00556f24  FUN_00556f24 =====

void FUN_00556f24(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_40 [31];
  undefined1 uStack_21;
  
  local_40[0] = 8;
                    /* try { // try from 00556f44 to 00556f57 has its CatchHandler @ 00556f78 */
  uVar1 = <serde_json::error::Error_as_serde::de::Error>::invalid_type
                    (local_40,&uStack_21,&DAT_00acf748);
  *param_1 = 0xffffffffffffffff;
  param_1[1] = uVar1;
  FUN_0054e61c(param_2);
  return;
}


// ===== 00556f90  FUN_00556f90 =====

void FUN_00556f90(undefined8 *param_1,long *param_2)

{
  void *__ptr;
  undefined8 uVar1;
  long lVar2;
  undefined1 local_48 [8];
  void *local_40;
  long lStack_38;
  undefined1 uStack_11;
  
  __ptr = (void *)param_2[1];
  lStack_38 = param_2[2];
  local_48[0] = 6;
                    /* try { // try from 00556fbc to 00556fcf has its CatchHandler @ 00556ffc */
  local_40 = __ptr;
  uVar1 = <serde_json::error::Error_as_serde::de::Error>::invalid_type
                    (local_48,&uStack_11,&DAT_00acf748);
  lVar2 = *param_2;
  *param_1 = 0xffffffffffffffff;
  param_1[1] = uVar1;
  if (lVar2 != 0) {
    free(__ptr);
  }
  return;
}


// ===== 00557018  FUN_00557018 =====

void FUN_00557018(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_40 [31];
  undefined1 uStack_21;
  
  local_40[0] = 9;
                    /* try { // try from 00557038 to 0055704b has its CatchHandler @ 0055706c */
  uVar1 = <serde_json::error::Error_as_serde::de::Error>::invalid_type
                    (local_40,&uStack_21,&DAT_00acf748);
  *param_1 = 0xffffffffffffffff;
  param_1[1] = uVar1;
  FUN_0054e61c(param_2);
  return;
}


// ===== 00557084  FUN_00557084 =====

void FUN_00557084(undefined1 *param_1,long *param_2)

{
  char *__ptr;
  long lVar1;
  undefined1 uVar2;
  
  __ptr = (char *)param_2[1];
  lVar1 = param_2[2];
  if (lVar1 == 10) {
    if (((((*__ptr == 'p') && (__ptr[1] == 'r')) && (__ptr[2] == 'o')) &&
        ((__ptr[3] == 'p' && (__ptr[4] == 'e')))) &&
       ((((__ptr[5] == 'r' && ((__ptr[6] == 't' && (__ptr[7] == 'i')))) && (__ptr[8] == 'e')) &&
        (__ptr[9] == 's')))) {
      uVar2 = 1;
      goto LAB_0055718c;
    }
  }
  else if (lVar1 == 5) {
    if ((((*__ptr == 'r') && (__ptr[1] == 'o')) && (__ptr[2] == 'l')) &&
       ((__ptr[3] == 'e' && (__ptr[4] == 's')))) {
      uVar2 = 2;
      goto LAB_0055718c;
    }
  }
  else if (((lVar1 == 2) && (*__ptr == 'i')) && (__ptr[1] == 'd')) {
    uVar2 = 0;
    goto LAB_0055718c;
  }
  uVar2 = 3;
LAB_0055718c:
  lVar1 = *param_2;
  param_1[1] = uVar2;
  *param_1 = 0;
  if (lVar1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 005571a4  FUN_005571a4 =====

void FUN_005571a4(undefined1 *param_1,long *param_2)

{
  char *__ptr;
  long lVar1;
  undefined1 uVar2;
  
  __ptr = (char *)param_2[1];
  lVar1 = param_2[2];
  if (lVar1 == 0xf) {
    if (((((((*__ptr == 'p') && (__ptr[1] == 'a')) && (__ptr[2] == 'r')) &&
          ((__ptr[3] == 't' && (__ptr[4] == 'i')))) && (__ptr[5] == 'a')) &&
        (((__ptr[6] == 'l' && (__ptr[7] == '_')) &&
         ((__ptr[8] == 'u' && (((__ptr[9] == 'p' && (__ptr[10] == 'd')) && (__ptr[0xb] == 'a')))))))
        ) && (((__ptr[0xc] == 't' && (__ptr[0xd] == 'e')) && (__ptr[0xe] == 's')))) {
      uVar2 = 2;
      goto LAB_00557324;
    }
  }
  else if (lVar1 == 10) {
    if (((((*__ptr == 'p') && (__ptr[1] == 'r')) &&
         ((__ptr[2] == 'o' && (((__ptr[3] == 'p' && (__ptr[4] == 'e')) && (__ptr[5] == 'r')))))) &&
        ((__ptr[6] == 't' && (__ptr[7] == 'i')))) && ((__ptr[8] == 'e' && (__ptr[9] == 's')))) {
      uVar2 = 1;
      goto LAB_00557324;
    }
  }
  else if (((lVar1 == 2) && (*__ptr == 'i')) && (__ptr[1] == 'd')) {
    uVar2 = 0;
    goto LAB_00557324;
  }
  uVar2 = 3;
LAB_00557324:
  lVar1 = *param_2;
  param_1[1] = uVar2;
  *param_1 = 0;
  if (lVar1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 0055733c  FUN_0055733c =====

undefined1  [16] FUN_0055733c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 local_40 [31];
  undefined1 uStack_21;
  
  local_40[0] = 8;
                    /* try { // try from 00557358 to 0055736b has its CatchHandler @ 00557390 */
  uVar1 = <serde_json::error::Error_as_serde::de::Error>::invalid_type
                    (local_40,&uStack_21,&DAT_00acf668);
  FUN_0054e61c(param_1);
  auVar2._8_8_ = uVar1;
  auVar2._0_8_ = 1;
  return auVar2;
}


// ===== 005573a8  FUN_005573a8 =====

undefined1  [16] FUN_005573a8(long *param_1)

{
  void *__ptr;
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 local_48 [8];
  void *local_40;
  long lStack_38;
  undefined1 uStack_11;
  
  __ptr = (void *)param_1[1];
  lStack_38 = param_1[2];
  local_48[0] = 6;
                    /* try { // try from 005573d0 to 005573e3 has its CatchHandler @ 00557414 */
  local_40 = __ptr;
  uVar1 = <serde_json::error::Error_as_serde::de::Error>::invalid_type
                    (local_48,&uStack_11,&DAT_00acf668);
  if (*param_1 != 0) {
    free(__ptr);
  }
  auVar2._8_8_ = uVar1;
  auVar2._0_8_ = 1;
  return auVar2;
}


// ===== 00557430  FUN_00557430 =====

undefined1  [16] FUN_00557430(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 local_40 [31];
  undefined1 uStack_21;
  
  local_40[0] = 9;
                    /* try { // try from 0055744c to 0055745f has its CatchHandler @ 00557484 */
  uVar1 = <serde_json::error::Error_as_serde::de::Error>::invalid_type
                    (local_40,&uStack_21,&DAT_00acf668);
  FUN_0054e61c(param_1);
  auVar2._8_8_ = uVar1;
  auVar2._0_8_ = 1;
  return auVar2;
}


// ===== 0055749c  FUN_0055749c =====

void FUN_0055749c(undefined1 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_40 [31];
  undefined1 uStack_21;
  
  local_40[0] = 8;
                    /* try { // try from 005574bc to 005574cf has its CatchHandler @ 005574f4 */
  uVar1 = <serde_json::error::Error_as_serde::de::Error>::invalid_type
                    (local_40,&uStack_21,&DAT_00acf768);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *param_1 = 1;
  FUN_0054e61c(param_2);
  return;
}


// ===== 0055750c  FUN_0055750c =====

void FUN_0055750c(long *param_1,long *param_2)

{
  ushort uVar1;
  void *pvVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  void *pvVar8;
  
  if (param_2[8] == 0) {
    lVar6 = *param_2;
    pvVar3 = (void *)param_2[1];
    *param_2 = 0;
    lVar5 = param_2[3];
    if (lVar6 == 1) {
      pvVar8 = (void *)param_2[2];
      if (pvVar3 == (void *)0x0) {
        for (; pvVar3 = pvVar8, lVar5 != 0; lVar5 = lVar5 + -1) {
          pvVar8 = *(void **)((long)pvVar3 + 0x278);
        }
      }
      pvVar8 = *(void **)((long)pvVar3 + 0x160);
      while (pvVar2 = pvVar8, pvVar2 != (void *)0x0) {
        free(pvVar3);
        pvVar3 = pvVar2;
        pvVar8 = *(void **)((long)pvVar2 + 0x160);
      }
      free(pvVar3);
    }
    *param_1 = 0;
    return;
  }
  param_2[8] = param_2[8] + -1;
  if (*param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00aced10);
  }
  pvVar3 = (void *)param_2[1];
  if (pvVar3 == (void *)0x0) {
    pvVar3 = (void *)param_2[2];
    for (lVar6 = param_2[3]; lVar6 != 0; lVar6 = lVar6 + -1) {
      pvVar3 = *(void **)((long)pvVar3 + 0x278);
    }
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 1;
    param_2[1] = (long)pvVar3;
    lVar6 = param_2[2];
    uVar7 = param_2[3];
    pvVar8 = pvVar3;
    if (uVar7 < *(ushort *)((long)pvVar3 + 0x272)) goto joined_r0x0055755c;
  }
  else {
    lVar6 = param_2[2];
    uVar7 = param_2[3];
    pvVar8 = pvVar3;
    if (uVar7 < *(ushort *)((long)pvVar3 + 0x272)) goto joined_r0x0055755c;
  }
  do {
    pvVar8 = *(void **)((long)pvVar3 + 0x160);
    if (pvVar8 == (void *)0x0) {
      free(pvVar3);
                    /* try { // try from 00557688 to 00557693 has its CatchHandler @ 005576a4 */
                    /* WARNING: Subroutine does not return */
      core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00acf788);
    }
    uVar1 = *(ushort *)((long)pvVar3 + 0x270);
    uVar7 = (ulong)uVar1;
    lVar6 = lVar6 + 1;
    free(pvVar3);
    pvVar3 = pvVar8;
  } while (*(ushort *)((long)pvVar8 + 0x272) <= uVar1);
joined_r0x0055755c:
  if (lVar6 == 0) {
    lVar5 = uVar7 + 1;
    pvVar3 = pvVar8;
  }
  else {
    puVar4 = (undefined8 *)((long)pvVar8 + uVar7 * 8 + 0x280);
    lVar5 = lVar6;
    do {
      pvVar3 = (void *)*puVar4;
      lVar5 = lVar5 + -1;
      puVar4 = (undefined8 *)((long)pvVar3 + 0x278);
    } while (lVar5 != 0);
    lVar5 = 0;
  }
  *param_1 = (long)pvVar8;
  param_1[1] = lVar6;
  param_1[2] = uVar7;
  param_2[1] = (long)pvVar3;
  param_2[2] = 0;
  param_2[3] = lVar5;
  return;
}


// ===== 005576a8  FUN_005576a8 =====

void FUN_005576a8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long local_48 [2];
  long local_38;
  
  uVar4 = *param_1;
  FUN_0055750c(local_48,uVar4);
  lVar1 = local_48[0];
  lVar2 = local_38;
  while (lVar1 != 0) {
    lVar3 = lVar1 + lVar2 * 0x18;
    local_48[0] = lVar1;
    local_38 = lVar2;
    if (*(long *)(lVar3 + 0x168) != 0) {
      free(*(void **)(lVar3 + 0x170));
    }
    FUN_0054e480(lVar1 + lVar2 * 0x20);
    FUN_0055750c(local_48,uVar4);
    lVar1 = local_48[0];
    lVar2 = local_38;
  }
  return;
}


// ===== 00557728  FUN_00557728 =====

void FUN_00557728(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,"struct variant GuildEntitySyncOperation::FullSync",0x31);
  return;
}


// ===== 0055773c  FUN_0055773c =====

void FUN_0055773c(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,"struct variant GuildEntitySyncOperation::Update",0x2f);
  return;
}


// ===== 00557750  <smol_str::serde::smol_str::SmolStrVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <smol_str::serde::smol_str::SmolStrVisitor_as_serde::de::Visitor>::expecting(void)

{
  (*(code *)PTR_expecting_00b023d0)();
  return;
}


// ===== 00557754  <<libdiscore_common::actions::guild_role::GuildRoleDeleteAction_as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_28}::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<<libdiscore_common::actions::guild_role::GuildRoleDeleteAction_as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_28}::Visitor>
::expecting(void)

{
  (*(code *)PTR_expecting_00b023d8)();
  return;
}


// ===== 00557758  <<libdiscore_common[1cb84820f9455fa0]::actions::guild_role::ServerRoleColors_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

void <<libdiscore_common[1cb84820f9455fa0]::actions::guild_role::ServerRoleColors_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(void)

{
  (*(code *)PTR_expecting_00b023e0)();
  return;
}


// ===== 0055775c  <<libdiscore_common::actions::guild_role::GuildRoleDeleteAction_as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_28}::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<<libdiscore_common::actions::guild_role::GuildRoleDeleteAction_as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_28}::Visitor>
::expecting(void)

{
  (*(code *)PTR_expecting_00b023e8)();
  return;
}


// ===== 00557760  <<libdiscore_common[1cb84820f9455fa0]::actions::guild_role::GuildRoleTags_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

void <<libdiscore_common[1cb84820f9455fa0]::actions::guild_role::GuildRoleTags_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(void)

{
  (*(code *)PTR_expecting_00b023f0)();
  return;
}


// ===== 00557764  <<libdiscore_common::actions::guild_role::GuildRoleDeleteAction_as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_28}::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<<libdiscore_common::actions::guild_role::GuildRoleDeleteAction_as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_28}::Visitor>
::expecting(void)

{
  (*(code *)PTR_expecting_00b023f8)();
  return;
}


// ===== 00557768  <<libdiscore_common[1cb84820f9455fa0]::actions::guild_role::ServerGuildRole_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

void <<libdiscore_common[1cb84820f9455fa0]::actions::guild_role::ServerGuildRole_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(void)

{
  (*(code *)PTR_expecting_00b02400)();
  return;
}


// ===== 0055776c  <<libdiscore_common::actions::guild_role::GuildRoleDeleteAction_as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_28}::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<<libdiscore_common::actions::guild_role::GuildRoleDeleteAction_as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_28}::Visitor>
::expecting(void)

{
  (*(code *)PTR_expecting_00b02408)();
  return;
}


// ===== 00557770  <<libdiscore_common[1cb84820f9455fa0]::actions::guild_role::GuildRoleUpdateOrCreateAction_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

void <<libdiscore_common[1cb84820f9455fa0]::actions::guild_role::GuildRoleUpdateOrCreateAction_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(void)

{
  (*(code *)PTR_expecting_00b02410)();
  return;
}


// ===== 00557774  <<libdiscore_common::actions::guild_role::GuildRoleDeleteAction_as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_28}::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<<libdiscore_common::actions::guild_role::GuildRoleDeleteAction_as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_28}::Visitor>
::expecting(void)

{
  (*(code *)PTR_expecting_00b02418)();
  return;
}


// ===== 00557778  <<libdiscore_common::actions::guild_role::GuildRoleDeleteAction_as_serde::de::Deserialize>::deserialize::__Visitor_as{backref_31}::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<<libdiscore_common::actions::guild_role::GuildRoleDeleteAction_as_serde::de::Deserialize>::deserialize::__Visitor_as{backref_31}::Visitor>
::expecting(void)

{
  (*(code *)PTR_expecting_00b02420)();
  return;
}


// ===== 0055777c  <<libdiscore_common::actions::guild_sticker::GuildStickersUpdate_as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_29}::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<<libdiscore_common::actions::guild_sticker::GuildStickersUpdate_as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_29}::Visitor>
::expecting(void)

{
  (*(code *)PTR_expecting_00b02428)();
  return;
}


// ===== 00557780  <<libdiscore_common::actions::guild_sticker::ServerGuildSticker_as_serde::de::Deserialize>::deserialize::__Visitor_as{backref_28}::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<<libdiscore_common::actions::guild_sticker::ServerGuildSticker_as_serde::de::Deserialize>::deserialize::__Visitor_as{backref_28}::Visitor>
::expecting(void)

{
  (*(code *)PTR_expecting_00b02430)();
  return;
}


// ===== 00557784  <<libdiscore_common::actions::guild_sticker::GuildStickersUpdate_as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_29}::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<<libdiscore_common::actions::guild_sticker::GuildStickersUpdate_as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_29}::Visitor>
::expecting(void)

{
  (*(code *)PTR_expecting_00b02438)();
  return;
}


// ===== 00557788  <<libdiscore_common[1cb84820f9455fa0]::actions::guild_sticker::GuildStickersUpdate_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

void <<libdiscore_common[1cb84820f9455fa0]::actions::guild_sticker::GuildStickersUpdate_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(void)

{
  (*(code *)PTR_expecting_00b02440)();
  return;
}


// ===== 0055778c  <<libdiscore_common::actions::guild_sticker::GuildStickersUpdate_as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_29}::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<<libdiscore_common::actions::guild_sticker::GuildStickersUpdate_as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_29}::Visitor>
::expecting(void)

{
  (*(code *)PTR_expecting_00b02448)();
  return;
}


// ===== 00557790  <<libdiscore_common[1cb84820f9455fa0]::actions::guild_sticker::GuildStickersCreateSuccess_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

void <<libdiscore_common[1cb84820f9455fa0]::actions::guild_sticker::GuildStickersCreateSuccess_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(void)

{
  (*(code *)PTR_expecting_00b02450)();
  return;
}


// ===== 00557794  <<libdiscore_common::actions::guild_sticker::GuildStickersUpdate_as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_29}::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<<libdiscore_common::actions::guild_sticker::GuildStickersUpdate_as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_29}::Visitor>
::expecting(void)

{
  (*(code *)PTR_expecting_00b02458)();
  return;
}


// ===== 00557798  <<libdiscore_common[1cb84820f9455fa0]::actions::guild_sticker::GuildStickerFetchSuccess_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

void <<libdiscore_common[1cb84820f9455fa0]::actions::guild_sticker::GuildStickerFetchSuccess_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(void)

{
  (*(code *)PTR_expecting_00b02460)();
  return;
}


// ===== 0055779c  <<libdiscore_common::actions::guild_sticker::GuildStickersUpdate_as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_29}::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<<libdiscore_common::actions::guild_sticker::GuildStickersUpdate_as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_29}::Visitor>
::expecting(void)

{
  (*(code *)PTR_expecting_00b02468)();
  return;
}


// ===== 005577a0  <<libdiscore_common[1cb84820f9455fa0]::actions::guild_sticker::GuildStickersFetchSuccess_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

void <<libdiscore_common[1cb84820f9455fa0]::actions::guild_sticker::GuildStickersFetchSuccess_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(void)

{
  (*(code *)PTR_expecting_00b02470)();
  return;
}


// ===== 005577a4  <<libdiscore_common::actions::guild_sticker::GuildStickersUpdate_as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_29}::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<<libdiscore_common::actions::guild_sticker::GuildStickersUpdate_as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_29}::Visitor>
::expecting(void)

{
  (*(code *)PTR_expecting_00b02478)();
  return;
}


// ===== 005577a8  <<libdiscore_common[1cb84820f9455fa0]::actions::guild_sticker::CachedStickersLoaded_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

void <<libdiscore_common[1cb84820f9455fa0]::actions::guild_sticker::CachedStickersLoaded_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(void)

{
  (*(code *)PTR_expecting_00b02480)();
  return;
}


// ===== 005577ac  <<libdiscore_common::actions::guilds::GuildEntitySyncOperation<_,_>as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_27}::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<<libdiscore_common::actions::guilds::GuildEntitySyncOperation<_,_>as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_27}::Visitor>
::expecting(void)

{
  (*(code *)PTR_expecting_00b02488)();
  return;
}


// ===== 005577b0  <<libdiscore_common::actions::guilds::GuildEntitySyncOperation<_,_>as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_30}::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<<libdiscore_common::actions::guilds::GuildEntitySyncOperation<_,_>as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_30}::Visitor>
::expecting(void)

{
  (*(code *)PTR_expecting_00b02490)();
  return;
}


// ===== 005577b4  <<libdiscore_common::actions::guilds::GuildEntitySyncOperation<_,_>as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_30}::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<<libdiscore_common::actions::guilds::GuildEntitySyncOperation<_,_>as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_30}::Visitor>
::expecting(void)

{
  (*(code *)PTR_expecting_00b02498)();
  return;
}


// ===== 005577b8  <<libdiscore_common::actions::guilds::GuildEntitySyncOperation<_,_>as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_30}::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<<libdiscore_common::actions::guilds::GuildEntitySyncOperation<_,_>as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_30}::Visitor>
::expecting(void)

{
  (*(code *)PTR_expecting_00b024a0)();
  return;
}


// ===== 005577bc  <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::GuildPartialUpdates_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

void <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::GuildPartialUpdates_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(void)

{
  (*(code *)PTR_expecting_00b024a8)();
  return;
}


// ===== 005577c0  <<libdiscore_common::actions::guilds::GuildEntitySyncOperation<_,_>as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_30}::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<<libdiscore_common::actions::guilds::GuildEntitySyncOperation<_,_>as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_30}::Visitor>
::expecting(void)

{
  (*(code *)PTR_expecting_00b024b0)();
  return;
}


// ===== 005577c4  <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::SerializedRole_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

void <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::SerializedRole_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(void)

{
  (*(code *)PTR_expecting_00b024b8)();
  return;
}


// ===== 005577c8  <<libdiscore_common::actions::guilds::GuildEntitySyncOperation<_,_>as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_30}::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<<libdiscore_common::actions::guilds::GuildEntitySyncOperation<_,_>as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_30}::Visitor>
::expecting(void)

{
  (*(code *)PTR_expecting_00b024c0)();
  return;
}


// ===== 005577cc  <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::CacheLoaded_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

void <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::CacheLoaded_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(void)

{
  (*(code *)PTR_expecting_00b024c8)();
  return;
}


// ===== 005577d0  <<libdiscore_common::actions::guilds::GuildEntitySyncOperation<_,_>as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_30}::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<<libdiscore_common::actions::guilds::GuildEntitySyncOperation<_,_>as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_30}::Visitor>
::expecting(void)

{
  (*(code *)PTR_expecting_00b024d0)();
  return;
}


// ===== 005577d4  <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::CacheLoadedLazy_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

void <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::CacheLoadedLazy_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(void)

{
  (*(code *)PTR_expecting_00b024d8)();
  return;
}


// ===== 005577d8  <<libdiscore_common::actions::guilds::GuildEntitySyncOperation<_,_>as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_30}::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<<libdiscore_common::actions::guilds::GuildEntitySyncOperation<_,_>as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_30}::Visitor>
::expecting(void)

{
  (*(code *)PTR_expecting_00b024e0)();
  return;
}


// ===== 005577dc  <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::SerializedGuild_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

void <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::SerializedGuild_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(void)

{
  (*(code *)PTR_expecting_00b024e8)();
  return;
}


// ===== 005577e0  <<libdiscore_common::actions::guilds::GuildEntitySyncOperation<_,_>as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_30}::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<<libdiscore_common::actions::guilds::GuildEntitySyncOperation<_,_>as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_30}::Visitor>
::expecting(void)

{
  (*(code *)PTR_expecting_00b024f0)();
  return;
}


// ===== 005577e4  <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::GuildProfile_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

void <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::GuildProfile_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(void)

{
  (*(code *)PTR_expecting_00b024f8)();
  return;
}


// ===== 005577e8  <<libdiscore_common::actions::guilds::GuildEntitySyncOperation<_,_>as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_30}::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<<libdiscore_common::actions::guilds::GuildEntitySyncOperation<_,_>as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_30}::Visitor>
::expecting(void)

{
  (*(code *)PTR_expecting_00b02500)();
  return;
}


// ===== 005577ec  <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::GuildPremiumFeatures_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

void <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::GuildPremiumFeatures_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(void)

{
  (*(code *)PTR_expecting_00b02508)();
  return;
}


// ===== 005577f0  <<libdiscore_common::actions::guilds::GuildEntitySyncOperation<_,_>as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_30}::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<<libdiscore_common::actions::guilds::GuildEntitySyncOperation<_,_>as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_30}::Visitor>
::expecting(void)

{
  (*(code *)PTR_expecting_00b02510)();
  return;
}


// ===== 005577f4  <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::ModeratorReporting_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

void <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::ModeratorReporting_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(void)

{
  (*(code *)PTR_expecting_00b02518)();
  return;
}


// ===== 005577f8  <<libdiscore_common::actions::guilds::GuildEntitySyncOperation<_,_>as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_30}::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<<libdiscore_common::actions::guilds::GuildEntitySyncOperation<_,_>as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_30}::Visitor>
::expecting(void)

{
  (*(code *)PTR_expecting_00b02520)();
  return;
}


// ===== 005577fc  <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::GuildIncidentsData_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

void <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::GuildIncidentsData_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(void)

{
  (*(code *)PTR_expecting_00b02528)();
  return;
}


// ===== 00557800  <<libdiscore_common::actions::guilds::GuildEntitySyncOperation<_,_>as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_30}::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<<libdiscore_common::actions::guilds::GuildEntitySyncOperation<_,_>as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_30}::Visitor>
::expecting(void)

{
  (*(code *)PTR_expecting_00b02530)();
  return;
}


// ===== 00557804  <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::User_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

void <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::User_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(void)

{
  (*(code *)PTR_expecting_00b02538)();
  return;
}


// ===== 00557808  <<libdiscore_common::actions::guilds::GuildEntitySyncOperation<_,_>as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_30}::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<<libdiscore_common::actions::guilds::GuildEntitySyncOperation<_,_>as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_30}::Visitor>
::expecting(void)

{
  (*(code *)PTR_expecting_00b02540)();
  return;
}


// ===== 0055780c  <<libdiscore_common::actions::guilds::GuildEntitySyncOperation<_,_>as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_30}::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<<libdiscore_common::actions::guilds::GuildEntitySyncOperation<_,_>as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_30}::Visitor>
::expecting(void)

{
  (*(code *)PTR_expecting_00b02548)();
  return;
}


// ===== 00557810  <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::GuildProperties_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

void <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::GuildProperties_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(void)

{
  (*(code *)PTR_expecting_00b02550)();
  return;
}


// ===== 00557814  <<libdiscore_common::actions::guilds::GuildEntitySyncOperation<_,_>as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_30}::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<<libdiscore_common::actions::guilds::GuildEntitySyncOperation<_,_>as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_30}::Visitor>
::expecting(void)

{
  (*(code *)PTR_expecting_00b02558)();
  return;
}


// ===== 00557818  <<libdiscore_common::actions::guilds::GuildEntitySyncOperation<_,_>as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_30}::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<<libdiscore_common::actions::guilds::GuildEntitySyncOperation<_,_>as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_30}::Visitor>
::expecting(void)

{
  (*(code *)PTR_expecting_00b02560)();
  return;
}


// ===== 0055781c  <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::ConnectionOpenGuild_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

void <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::ConnectionOpenGuild_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(void)

{
  (*(code *)PTR_expecting_00b02568)();
  return;
}


// ===== 00557820  <<libdiscore_common::actions::guilds::GuildEntitySyncOperation<_,_>as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_30}::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<<libdiscore_common::actions::guilds::GuildEntitySyncOperation<_,_>as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_30}::Visitor>
::expecting(void)

{
  (*(code *)PTR_expecting_00b02570)();
  return;
}


// ===== 00557824  <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::GuildCreate_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

void <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::GuildCreate_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(void)

{
  (*(code *)PTR_expecting_00b02578)();
  return;
}


// ===== 00557828  <<libdiscore_common::actions::guilds::GuildEntitySyncOperation<_,_>as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_30}::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<<libdiscore_common::actions::guilds::GuildEntitySyncOperation<_,_>as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_30}::Visitor>
::expecting(void)

{
  (*(code *)PTR_expecting_00b02580)();
  return;
}


// ===== 0055782c  <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::GuildCreateGuild_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

void <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::GuildCreateGuild_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(void)

{
  (*(code *)PTR_expecting_00b02588)();
  return;
}


// ===== 00557830  <<libdiscore_common::actions::guilds::GuildEntitySyncOperation<_,_>as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_30}::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<<libdiscore_common::actions::guilds::GuildEntitySyncOperation<_,_>as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_30}::Visitor>
::expecting(void)

{
  (*(code *)PTR_expecting_00b02590)();
  return;
}


// ===== 00557834  <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::GuildUpdate_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

void <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::GuildUpdate_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(void)

{
  (*(code *)PTR_expecting_00b02598)();
  return;
}


// ===== 00557838  <<libdiscore_common::actions::guilds::GuildEntitySyncOperation<_,_>as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_30}::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<<libdiscore_common::actions::guilds::GuildEntitySyncOperation<_,_>as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_30}::Visitor>
::expecting(void)

{
  (*(code *)PTR_expecting_00b025a0)();
  return;
}


// ===== 0055783c  <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::GuildUpdateGuild_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

void <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::GuildUpdateGuild_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(void)

{
  (*(code *)PTR_expecting_00b025a8)();
  return;
}


// ===== 00557840  <<libdiscore_common::actions::guilds::GuildEntitySyncOperation<_,_>as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_30}::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<<libdiscore_common::actions::guilds::GuildEntitySyncOperation<_,_>as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_30}::Visitor>
::expecting(void)

{
  (*(code *)PTR_expecting_00b025b0)();
  return;
}


// ===== 00557844  <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::GuildDelete_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

void <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::GuildDelete_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(void)

{
  (*(code *)PTR_expecting_00b025b8)();
  return;
}


// ===== 00557848  <<libdiscore_common::actions::guilds::GuildEntitySyncOperation<_,_>as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_30}::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<<libdiscore_common::actions::guilds::GuildEntitySyncOperation<_,_>as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_30}::Visitor>
::expecting(void)

{
  (*(code *)PTR_expecting_00b025c0)();
  return;
}


// ===== 0055784c  <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::GuildDeleteGuild_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

void <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::GuildDeleteGuild_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(void)

{
  (*(code *)PTR_expecting_00b025c8)();
  return;
}


// ===== 00557850  <<libdiscore_common::actions::guilds::GuildEntitySyncOperation<_,_>as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_30}::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<<libdiscore_common::actions::guilds::GuildEntitySyncOperation<_,_>as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_30}::Visitor>
::expecting(void)

{
  (*(code *)PTR_expecting_00b025d0)();
  return;
}


// ===== 00557854  <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::GuildMemberAdd_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

void <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::GuildMemberAdd_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(void)

{
  (*(code *)PTR_expecting_00b025d8)();
  return;
}


// ===== 00557858  <<libdiscore_common::actions::guilds::GuildEntitySyncOperation<_,_>as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_30}::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<<libdiscore_common::actions::guilds::GuildEntitySyncOperation<_,_>as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_30}::Visitor>
::expecting(void)

{
  (*(code *)PTR_expecting_00b025e0)();
  return;
}


// ===== 0055785c  <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::BackgroundSync_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

void <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::BackgroundSync_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(void)

{
  (*(code *)PTR_expecting_00b025e8)();
  return;
}


// ===== 00557860  <<libdiscore_common::actions::guilds::GuildEntitySyncOperation<_,_>as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_27}::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<<libdiscore_common::actions::guilds::GuildEntitySyncOperation<_,_>as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_27}::Visitor>
::expecting(void)

{
  (*(code *)PTR_expecting_00b025f0)();
  return;
}


// ===== 00557864  <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::BackgroundSyncGuild_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

void <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::BackgroundSyncGuild_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(void)

{
  (*(code *)PTR_expecting_00b025f8)();
  return;
}


// ===== 00557868  <<libdiscore_common::actions::guilds::GuildEntitySyncOperation<_,_>as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_30}::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<<libdiscore_common::actions::guilds::GuildEntitySyncOperation<_,_>as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_30}::Visitor>
::expecting(void)

{
  (*(code *)PTR_expecting_00b02600)();
  return;
}


// ===== 0055786c  <<libdiscore_common::actions::guilds::GuildEntitySyncOperation<_,_>as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_30}::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<<libdiscore_common::actions::guilds::GuildEntitySyncOperation<_,_>as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_30}::Visitor>
::expecting(void)

{
  (*(code *)PTR_expecting_00b02608)();
  return;
}


// ===== 00557870  <<libdiscore_common::actions::guilds::BackgroundSyncFullGuild_as_serde::de::Deserialize>::deserialize::__Visitor_as{backref_28}::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<<libdiscore_common::actions::guilds::BackgroundSyncFullGuild_as_serde::de::Deserialize>::deserialize::__Visitor_as{backref_28}::Visitor>
::expecting(void)

{
  (*(code *)PTR_expecting_00b02610)();
  return;
}


// ===== 00557874  <<libdiscore_common::actions::guilds::GuildEntitySyncOperation<_,_>as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_30}::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<<libdiscore_common::actions::guilds::GuildEntitySyncOperation<_,_>as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_30}::Visitor>
::expecting(void)

{
  (*(code *)PTR_expecting_00b02618)();
  return;
}


// ===== 00557878  <<libdiscore_common::actions::guilds::BackgroundSyncPartialGuild_as_serde::de::Deserialize>::deserialize::__Visitor_as{backref_31}::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<<libdiscore_common::actions::guilds::BackgroundSyncPartialGuild_as_serde::de::Deserialize>::deserialize::__Visitor_as{backref_31}::Visitor>
::expecting(void)

{
  (*(code *)PTR_expecting_00b02620)();
  return;
}


// ===== 0055787c  <<libdiscore_common[1cb84820f9455fa0]::actions::guild_role::Permissions_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::PermissionsVisitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

void <<libdiscore_common[1cb84820f9455fa0]::actions::guild_role::Permissions_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::PermissionsVisitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(void)

{
  (*(code *)PTR_expecting_00b02628)();
  return;
}


// ===== 00557880  <<libdiscore_common[1cb84820f9455fa0]::actions::guild_role::NullFlag_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::NullFlagVisitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

void <<libdiscore_common[1cb84820f9455fa0]::actions::guild_role::NullFlag_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::NullFlagVisitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(void)

{
  (*(code *)PTR_expecting_00b02630)();
  return;
}


// ===== 00557884  FUN_00557884 =====

void FUN_00557884(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,"PoisonError",0xb);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish_non_exhaustive(auStack_20);
  return;
}


// ===== 005578bc  FUN_005578bc =====

void FUN_005578bc(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long local_50 [2];
  long local_40;
  undefined8 local_38;
  
  FUN_0055750c(local_50,param_1);
  lVar1 = local_50[0];
  lVar2 = local_40;
  while (lVar1 != 0) {
    lVar3 = lVar1 + lVar2 * 0x18;
    local_50[0] = lVar1;
    local_40 = lVar2;
    local_38 = param_1;
    if (*(long *)(lVar3 + 0x168) != 0) {
      free(*(void **)(lVar3 + 0x170));
    }
                    /* try { // try from 00557908 to 0055790f has its CatchHandler @ 00557938 */
    FUN_0054e480(lVar1 + lVar2 * 0x20);
    FUN_0055750c(local_50,param_1);
    lVar1 = local_50[0];
    lVar2 = local_40;
  }
  return;
}


// ===== 00557950  __rustc::__rust_no_alloc_shim_is_unstable_v2 =====

/* WARNING: Unknown calling convention: __rustcall */
/* __rustc::__rust_no_alloc_shim_is_unstable_v2 */

void __rustcall __rustc::__rust_no_alloc_shim_is_unstable_v2(void)

{
  return;
}


// ===== 00557954  FUN_00557954 =====

void FUN_00557954(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong local_58 [5];
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  while( true ) {
    FUN_00557d48(local_58,uVar1,uVar2);
    if (0xfffffffffffffffd < local_58[0]) break;
                    /* try { // try from 0055798c to 00557993 has its CatchHandler @ 005579c0 */
    <tokio::sync::mpsc::unbounded::Semaphore_as_tokio::sync::mpsc::chan::Semaphore>::add_permit
              (uVar3);
    if (local_58[0] < 0xfffffffffffffffe) {
      FUN_00557a84(local_58);
    }
  }
  return;
}


// ===== 005579e4  FUN_005579e4 =====

void FUN_005579e4(long param_1)

{
  void *__ptr;
  void *pvVar1;
  ulong local_48 [5];
  
  while( true ) {
                    /* try { // try from 005579f8 to 00557a1b has its CatchHandler @ 00557a60 */
    FUN_00557d48(local_48,param_1 + 0x1a0,param_1 + 0x80);
    if (0xfffffffffffffffd < local_48[0]) break;
    FUN_00557a84(local_48);
  }
  __ptr = *(void **)(param_1 + 0x1a8);
  do {
    pvVar1 = *(void **)((long)__ptr + 0x508);
    free(__ptr);
    __ptr = pvVar1;
  } while (pvVar1 != (void *)0x0);
  if (*(long *)(param_1 + 0x100) != 0) {
    (**(code **)(*(long *)(param_1 + 0x100) + 0x18))(*(undefined8 *)(param_1 + 0x108));
  }
  return;
}


// ===== 00557a84  FUN_00557a84 =====

void FUN_00557a84(long *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  code *pcVar6;
  long *plVar7;
  
  lVar5 = *param_1;
  if (lVar5 < 2) {
    if (lVar5 != 0) {
      FUN_0055e2cc(param_1 + 1);
      return;
    }
    __ptr = (void *)param_1[3];
    puVar1 = (undefined8 *)param_1[4];
    pcVar6 = (code *)*puVar1;
    if (pcVar6 != (code *)0x0) {
                    /* try { // try from 00557ab0 to 00557ab7 has its CatchHandler @ 00557b54 */
      (*pcVar6)(__ptr);
    }
    if (puVar1[1] != 0) {
      free(__ptr);
      return;
    }
  }
  else if (lVar5 == 2) {
    param_1 = param_1 + 1;
    plVar7 = (long *)*param_1;
    if (plVar7 != (long *)0x0) {
                    /* try { // try from 00557ae4 to 00557b07 has its CatchHandler @ 00557b78 */
      uVar4 = <tokio::sync::oneshot::[9]::tokio::sync::oneshot::State>::set_complete(plVar7 + 6);
      if ((uVar4 & 5) == 1) {
        (**(code **)(plVar7[4] + 0x10))(plVar7[5]);
        plVar7 = (long *)*param_1;
        if (plVar7 == (long *)0x0) {
          return;
        }
      }
      do {
        lVar5 = *plVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        DataMemoryBarrier(2,1);
        <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<bool>>>::drop_slow(param_1);
        return;
      }
    }
  }
  return;
}


// ===== 00557bb0  core[bcece726f298455b]::panicking::assert_failed::<core[bcece726f298455b]::option::Option<core[bcece726f298455b]::ptr::non_null::NonNull<tokio[8c8895dbfa691109]::runtime::task::core::Header>>,core[bcece726f298455b]::option::Option<core[bcece726f298455b]::ptr::non_null::NonNull<tokio[8c8895dbfa691109]::runtime::task::core::Header>>> =====

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
            (param_1,&local_20,&DAT_00acf7e8,&uStack_18,&DAT_00acf7e8,param_4,param_5,param_6);
}


// ===== 00557be4  FUN_00557be4 =====

undefined1  [16] FUN_00557be4(undefined8 param_1)

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
  undefined8 local_b0;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  local_200 = FUN_004b25a4(0x520,8);
  if (local_200 == 0) {
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x520);
  }
  uStack_1f8 = 0;
  local_180 = 0;
  local_170 = 0;
  *(undefined8 *)(local_200 + 0x518) = 0;
  *(undefined8 *)(local_200 + 0x510) = 0;
  *(undefined8 *)(local_200 + 0x508) = 0;
  *(undefined8 *)(local_200 + 0x500) = 0;
  uStack_278 = 1;
  local_280 = 1;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  local_d0 = 0;
  local_c8 = 0;
  uStack_b8 = 1;
  local_b0 = 0;
  local_e0 = local_200;
  lStack_d8 = local_200;
  local_c0 = param_1;
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
    pcVar3 = (code *)SoftwareBreakpoint(1,0x557cb8);
    (*pcVar3)();
  }
                    /* try { // try from 00557ca8 to 00557cb3 has its CatchHandler @ 00557cb8 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(0x80,0x200);
}


// ===== 00557cd0  FUN_00557cd0 =====

long FUN_00557cd0(undefined8 param_1,long param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  
  uVar4 = 0;
  puVar1 = *(ulong **)(param_2 + 8);
  for (uVar2 = *(ulong *)(param_2 + 0x10); 7 < uVar2; uVar2 = uVar2 - 8) {
    uVar4 = (*puVar1 ^ (uVar4 >> 0x3b | uVar4 << 5)) * 0x517cc1b727220a95;
    puVar1 = puVar1 + 1;
  }
  puVar3 = puVar1;
  if (3 < uVar2) {
    puVar3 = (ulong *)((long)puVar1 + 4);
    uVar2 = uVar2 - 4;
    uVar4 = ((ulong)(uint)*puVar1 ^ (uVar4 >> 0x3b | uVar4 << 5)) * 0x517cc1b727220a95;
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    uVar4 = ((ulong)(byte)*puVar3 ^ (uVar4 >> 0x3b | uVar4 << 5)) * 0x517cc1b727220a95;
    puVar3 = (ulong *)((long)puVar3 + 1);
  }
  return ((uVar4 >> 0x3b | uVar4 << 5) ^ 0xff) * 0x517cc1b727220a95;
}


// ===== 00557d48  FUN_00557d48 =====

void FUN_00557d48(ulong *param_1,undefined8 *param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  void *__ptr;
  void *pvVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  pvVar4 = (void *)*param_2;
  uVar7 = *(ulong *)((long)pvVar4 + 0x500);
  while (uVar7 != (param_2[2] & 0xffffffffffffffe0)) {
    pvVar4 = *(void **)((long)pvVar4 + 0x508);
    if (pvVar4 == (void *)0x0) goto LAB_00557ef4;
    *param_2 = pvVar4;
    InstructionSynchronizationBarrier();
    uVar7 = *(ulong *)((long)pvVar4 + 0x500);
  }
  __ptr = (void *)param_2[1];
LAB_00557da0:
  if (((__ptr == pvVar4) || ((*(ulong *)((long)__ptr + 0x510) >> 0x20 & 1) == 0)) ||
     ((ulong)param_2[2] < *(ulong *)((long)__ptr + 0x518))) {
    uVar7 = param_2[2];
    uVar8 = uVar7 & 0x1f;
    if ((*(ulong *)((long)pvVar4 + 0x510) >> uVar8 & 1) != 0) {
      puVar6 = (ulong *)((long)pvVar4 + uVar8 * 0x28);
      uVar9 = puVar6[1];
      uVar8 = *puVar6;
      uVar11 = puVar6[3];
      uVar10 = puVar6[2];
      param_1[4] = puVar6[4];
      param_1[1] = uVar9;
      *param_1 = uVar8;
      param_1[3] = uVar11;
      param_1[2] = uVar10;
      if (*param_1 < 0xfffffffffffffffe) {
        param_2[2] = uVar7 + 1;
      }
      return;
    }
    if ((*(ulong *)((long)pvVar4 + 0x510) >> 0x21 & 1) != 0) {
      *param_1 = 0xffffffffffffffff;
      return;
    }
LAB_00557ef4:
    *param_1 = 0xfffffffffffffffe;
    return;
  }
  if (*(long *)((long)__ptr + 0x508) == 0) {
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00acf868);
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
      goto LAB_00557e18;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = (long)__ptr;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  goto LAB_00557d98;
  while( true ) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = (long)__ptr;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') break;
LAB_00557e18:
    lVar5 = *plVar1;
    if (lVar5 != 0) {
      ClearExclusiveLocal();
      plVar1 = (long *)(lVar5 + 0x508);
      *(long *)((long)__ptr + 0x500) = *(long *)(lVar5 + 0x500) + 0x20;
      goto LAB_00557e40;
    }
  }
  goto LAB_00557d98;
  while( true ) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = (long)__ptr;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') break;
LAB_00557e40:
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      free(__ptr);
      break;
    }
  }
LAB_00557d98:
  InstructionSynchronizationBarrier();
  pvVar4 = (void *)*param_2;
  __ptr = (void *)param_2[1];
  goto LAB_00557da0;
}


// ===== 00557f30  FUN_00557f30 =====

void FUN_00557f30(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong *puVar2;
  long *plVar3;
  ulong *puVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  lVar15 = *param_1;
  plVar1 = (long *)(lVar15 + 0x80);
  puVar2 = (ulong *)(lVar15 + 0x88);
  do {
    uVar11 = *puVar2;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar7) {
      *puVar2 = uVar11 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  lVar8 = *plVar1;
  uVar16 = uVar11 & 0xffffffffffffffe0;
  uVar11 = uVar11 & 0x1f;
  uVar14 = uVar16 - *(long *)(lVar8 + 0x500);
  if (uVar14 != 0) {
    bVar7 = uVar11 < uVar14 >> 5;
    lVar9 = lVar8;
LAB_00557ff8:
    do {
      plVar3 = (long *)(lVar9 + 0x508);
      lVar8 = *plVar3;
      if (*plVar3 == 0) {
        lVar8 = *(long *)(lVar9 + 0x500);
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        lVar10 = FUN_004b25a4(0x520,8);
        if (lVar10 == 0) {
                    /* try { // try from 00558134 to 0055813f has its CatchHandler @ 00558144 */
                    /* WARNING: Subroutine does not return */
          alloc::alloc::handle_alloc_error(8,0x520);
        }
        *(undefined8 *)(lVar10 + 0x508) = 0;
        *(long *)(lVar10 + 0x500) = lVar8 + 0x20;
        *(undefined8 *)(lVar10 + 0x518) = 0;
        *(undefined8 *)(lVar10 + 0x510) = 0;
LAB_00558034:
        lVar8 = *plVar3;
        if (lVar8 == 0) goto code_r0x0055803c;
        ClearExclusiveLocal();
        plVar3 = (long *)(lVar8 + 0x508);
        *(long *)(lVar10 + 0x500) = *(long *)(lVar8 + 0x500) + 0x20;
        do {
          lVar13 = *plVar3;
          if (lVar13 != 0) {
            ClearExclusiveLocal();
            do {
              InstructionSynchronizationBarrier();
              *(long *)(lVar10 + 0x500) = *(long *)(lVar13 + 0x500) + 0x20;
              plVar3 = (long *)(lVar13 + 0x508);
              while (lVar13 = *plVar3, lVar13 == 0) {
                cVar6 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar5) {
                  *plVar3 = lVar10;
                  cVar6 = ExclusiveMonitorsStatus();
                }
                if (cVar6 == '\0') goto LAB_005580c0;
              }
              ClearExclusiveLocal();
            } while( true );
          }
          cVar6 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar5) {
            *plVar3 = lVar10;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
LAB_005580c0:
      puVar4 = (ulong *)(lVar9 + 0x510);
      if ((bool)(bVar7 & (int)*puVar4 == -1)) {
        do {
          if (*plVar1 != lVar9) {
            ClearExclusiveLocal();
            goto LAB_00557fe4;
          }
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar8;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        do {
          uVar14 = *puVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *puVar2 = uVar14;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        *(ulong *)(lVar9 + 0x518) = uVar14;
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar4,0x10);
          if (bVar7) {
            *puVar4 = *puVar4 | 0x100000000;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        bVar7 = true;
        InstructionSynchronizationBarrier();
        lVar9 = lVar8;
        if (*(ulong *)(lVar8 + 0x500) == uVar16) break;
        goto LAB_00557ff8;
      }
LAB_00557fe4:
      bVar7 = false;
      InstructionSynchronizationBarrier();
      lVar9 = lVar8;
    } while (*(ulong *)(lVar8 + 0x500) != uVar16);
  }
  uVar20 = param_2[1];
  uVar19 = *param_2;
  uVar18 = param_2[3];
  uVar17 = param_2[2];
  puVar12 = (undefined8 *)(lVar8 + uVar11 * 0x28);
  puVar12[4] = param_2[4];
  puVar12[1] = uVar20;
  *puVar12 = uVar19;
  puVar12[3] = uVar18;
  puVar12[2] = uVar17;
  puVar2 = (ulong *)(lVar8 + 0x510);
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar7) {
      *puVar2 = *puVar2 | 1L << uVar11;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  <tokio::sync::task::atomic_waker::[0]::tokio::sync::task::atomic_waker::AtomicWaker>::wake
            (lVar15 + 0x100);
  return;
code_r0x0055803c:
  cVar6 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
  if (bVar5) {
    *plVar3 = lVar10;
    cVar6 = ExclusiveMonitorsStatus();
  }
  lVar8 = lVar10;
  if (cVar6 == '\0') goto LAB_005580c0;
  goto LAB_00558034;
}


// ===== 0055815c  FUN_0055815c =====

void FUN_0055815c(long *param_1,long *param_2)

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
          pvVar2 = *(void **)((long)pvVar2 + 0x1c8);
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
    core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00acf7d0);
  }
  pvVar2 = (void *)param_2[1];
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)param_2[2];
    for (lVar3 = param_2[3]; lVar3 != 0; lVar3 = lVar3 + -1) {
      pvVar2 = *(void **)((long)pvVar2 + 0x1c8);
    }
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 1;
    param_2[1] = (long)pvVar2;
    lVar3 = param_2[2];
    uVar6 = param_2[3];
    pvVar7 = pvVar2;
    if (uVar6 < *(ushort *)((long)pvVar2 + 0x1c2)) goto joined_r0x005581b4;
  }
  else {
    lVar3 = param_2[2];
    uVar6 = param_2[3];
    pvVar7 = pvVar2;
    if (uVar6 < *(ushort *)((long)pvVar2 + 0x1c2)) goto joined_r0x005581b4;
  }
  do {
    pvVar7 = *(void **)((long)pvVar2 + 0x160);
    if (pvVar7 == (void *)0x0) {
      free(pvVar2);
                    /* try { // try from 00558350 to 0055835b has its CatchHandler @ 0055836c */
                    /* WARNING: Subroutine does not return */
      core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00acf808);
    }
    uVar1 = *(ushort *)((long)pvVar2 + 0x1c0);
    uVar6 = (ulong)uVar1;
    lVar3 = lVar3 + 1;
    free(pvVar2);
    pvVar2 = pvVar7;
  } while (*(ushort *)((long)pvVar7 + 0x1c2) <= uVar1);
joined_r0x005581b4:
  if (lVar3 == 0) {
    lVar5 = uVar6 + 1;
    pvVar2 = pvVar7;
  }
  else {
    puVar4 = (undefined8 *)((long)pvVar7 + uVar6 * 8 + 0x1d0);
    lVar5 = lVar3;
    do {
      pvVar2 = (void *)*puVar4;
      lVar5 = lVar5 + -1;
      puVar4 = (undefined8 *)((long)pvVar2 + 0x1c8);
    } while (lVar5 != 0);
    lVar5 = 0;
  }
  param_2[1] = (long)pvVar2;
  param_2[2] = 0;
  param_2[3] = lVar5;
  *param_1 = (long)pvVar7;
  param_1[1] = lVar3;
  param_1[2] = uVar6;
  return;
}


// ===== 00558370  <flux::store_token::StoreToken_as_jsi::value::IntoValue>::into_value =====

/* WARNING: Unknown calling convention: __rustcall */
/* <flux::store_token::StoreToken as jsi::value::IntoValue>::into_value */

void __rustcall <flux::store_token::StoreToken_as_jsi::value::IntoValue>::into_value(uint param_1)

{
  <jsi::value::[0]::jsi::value::Value>::double((double)param_1);
  return;
}


// ===== 00558378  FUN_00558378 =====

void FUN_00558378(long *param_1)

{
  long lVar1;
  ulong local_70 [3];
  long local_58;
  ulong local_50;
  undefined8 local_48;
  long lStack_40;
  long local_38;
  long local_30;
  long local_28 [2];
  long local_18;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    local_30 = 0;
  }
  else {
    local_58 = param_1[1];
    local_30 = param_1[2];
    local_70[1] = 0;
    local_48 = 0;
    local_70[2] = lVar1;
    lStack_40 = lVar1;
    local_38 = local_58;
  }
  local_70[0] = (ulong)(lVar1 != 0);
  local_50 = local_70[0];
  while( true ) {
    FUN_0055815c(local_28,local_70);
    if (local_28[0] == 0) break;
    lVar1 = local_28[0] + local_18 * 0x20;
    if (0x10 < *(ulong *)(lVar1 + 0x18)) {
      free(*(void **)(lVar1 + 0x10));
    }
  }
  return;
}


// ===== 005583fc  FUN_005583fc =====

void FUN_005583fc(ulong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  undefined8 *puVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  undefined *puVar6;
  int iVar7;
  undefined1 *puVar8;
  void *pvVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  char cVar13;
  undefined1 uVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  ulong local_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  char local_ac;
  char local_ab;
  ulong local_a8;
  ulong uStack_a0;
  ulong local_98;
  ulong uStack_90;
  ulong local_88;
  ulong local_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong local_60;
  
  puVar6 = PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  uVar15 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar15 == 0) {
    uVar15 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
             lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar8 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar15);
    if (puVar8 <= &DAT_00000001) goto LAB_00558700;
  }
  else {
    puVar8 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar15);
    if (puVar8 <= &DAT_00000001) {
LAB_00558700:
      puVar8 = (undefined1 *)FUN_00559ad8(uVar15 & 0xffffffff,puVar8,0);
    }
  }
  if ((puVar8 != (undefined1 *)0x0) &&
     (uVar15 = <tokio::task::coop::tokio::task::coop::Budget>::has_remaining
                         (puVar8[0x44],puVar8[0x45]), (uVar15 & 1) == 0)) {
    tokio::task::coop::register_waker(param_3);
    goto LAB_00558690;
  }
  pbVar1 = (byte *)*param_2;
  puVar2 = (undefined8 *)param_2[1];
  bVar3 = *pbVar1;
  if ((bVar3 & 1) == 0) {
    bVar3 = *(byte *)(puVar2 + 2);
    if (bVar3 < 2) {
      if (bVar3 != 0) {
        core::panicking::panic_const::panic_const_async_fn_resumed
                  (&PTR_s__root__cargo_registry_src_index__00acf820);
LAB_00558774:
        uVar11 = core::panicking::panic_const::panic_const_async_fn_resumed_panic
                           (&PTR_s__root__cargo_registry_src_index__00acf820);
                    /* catch() { ... } // from try @ 00558608 with catch @ 00558780 */
                    /* try { // try from 00558784 to 0055879b has its CatchHandler @ 005587a0 */
        FUN_00557a84(&local_80);
                    /* try { // try from 005587b8 to 005587bf has its CatchHandler @ 005587d0 */
        <tokio::task::coop::RestoreOnPending_as_core::ops::drop::Drop>::drop(&local_ac);
        *(undefined1 *)(puVar2 + 2) = 2;
                    /* WARNING: Subroutine does not return */
        FUN_00ab2530(uVar11);
      }
      plVar16 = (long *)*puVar2;
      puVar2[1] = plVar16;
    }
    else {
      if (bVar3 != 3) goto LAB_00558774;
      plVar16 = (long *)puVar2[1];
    }
    uVar15 = *(ulong *)puVar6;
    if (uVar15 == 0) {
                    /* try { // try from 00558718 to 00558747 has its CatchHandler @ 005587a4 */
      uVar15 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
               lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
      pvVar9 = pthread_getspecific((pthread_key_t)uVar15);
    }
    else {
      pvVar9 = pthread_getspecific((pthread_key_t)uVar15);
    }
    if (pvVar9 < (void *)0x2) {
      pvVar9 = (void *)FUN_00559ad8(uVar15 & 0xffffffff,pvVar9,0);
    }
    if (pvVar9 == (void *)0x0) {
      local_ac = '\0';
      local_ab = '\0';
LAB_005584fc:
      lVar17 = *plVar16;
                    /* try { // try from 00558508 to 0055858b has its CatchHandler @ 005587b0 */
      FUN_00557d48(&local_a8,lVar17 + 0x1a0,lVar17 + 0x80);
      uVar15 = local_a8;
      if (local_a8 == 0xffffffffffffffff) {
        uVar10 = <tokio::sync::mpsc::unbounded::Semaphore_as_tokio::sync::mpsc::chan::Semaphore>::
                 is_idle(lVar17 + 0x1c0);
        if ((uVar10 & 1) == 0) {
          ppuVar12 = &PTR_s__root__cargo_registry_src_index__00acf850;
LAB_00558754:
                    /* try { // try from 00558754 to 00558763 has its CatchHandler @ 005587b4 */
                    /* WARNING: Subroutine does not return */
          core::panicking::panic("assertion failed: self.inner.semaphore.is_idle()",0x30,ppuVar12);
        }
LAB_005585ec:
        local_ac = '\0';
      }
      else if (local_a8 == 0xfffffffffffffffe) {
        <tokio::sync::task::atomic_waker::[0]::tokio::sync::task::atomic_waker::AtomicWaker>::
        register_by_ref(lVar17 + 0x100,*param_3);
        FUN_00557d48(&local_a8,lVar17 + 0x1a0,lVar17 + 0x80);
        uVar15 = local_a8;
        if (local_a8 == 0xffffffffffffffff) {
                    /* try { // try from 005585e0 to 005585e7 has its CatchHandler @ 005587b0 */
          uVar10 = <tokio::sync::mpsc::unbounded::Semaphore_as_tokio::sync::mpsc::chan::Semaphore>::
                   is_idle(lVar17 + 0x1c0);
          if ((uVar10 & 1) == 0) {
            ppuVar12 = &PTR_s__root__cargo_registry_src_index__00acf838;
            goto LAB_00558754;
          }
          goto LAB_005585ec;
        }
        if (local_a8 != 0xfffffffffffffffe) {
          uStack_78 = uStack_a0;
          local_80 = local_a8;
          uStack_68 = uStack_90;
          uStack_70 = local_98;
          local_60 = local_88;
                    /* try { // try from 00558608 to 0055860f has its CatchHandler @ 00558780 */
          <tokio::sync::mpsc::unbounded::Semaphore_as_tokio::sync::mpsc::chan::Semaphore>::
          add_permit(lVar17 + 0x1c0);
          goto LAB_00558610;
        }
        if ((*(char *)(lVar17 + 0x1b8) == '\x01') &&
           (iVar7 = <tokio::sync::mpsc::unbounded::Semaphore_as_tokio::sync::mpsc::chan::Semaphore>
                    ::is_idle(lVar17 + 0x1c0), iVar7 != 0)) {
          uVar15 = 0xffffffffffffffff;
          local_ac = '\0';
        }
        else {
          uVar15 = 0xfffffffffffffffe;
        }
      }
      else {
        uStack_78 = uStack_a0;
        local_80 = local_a8;
        uStack_68 = uStack_90;
        uStack_70 = local_98;
        local_60 = local_88;
                    /* try { // try from 005585b0 to 005585b7 has its CatchHandler @ 00558790 */
        <tokio::sync::mpsc::unbounded::Semaphore_as_tokio::sync::mpsc::chan::Semaphore>::add_permit
                  (lVar17 + 0x1c0);
LAB_00558610:
        local_ac = '\0';
        uStack_c8 = local_98;
        local_d0 = uStack_a0;
        uStack_b8 = local_88;
        uStack_c0 = uStack_90;
      }
                    /* try { // try from 00558620 to 00558627 has its CatchHandler @ 005587a4 */
      <tokio::task::coop::RestoreOnPending_as_core::ops::drop::Drop>::drop(&local_ac);
      uVar14 = 3;
      if (uVar15 != 0xfffffffffffffffe) {
        uVar14 = 1;
      }
      *(undefined1 *)(puVar2 + 2) = uVar14;
      if (uVar15 != 0xfffffffffffffffe) {
        bVar3 = *pbVar1;
        *pbVar1 = bVar3 | 1;
        if (uVar15 != 0xffffffffffffffff) {
          *param_1 = uVar15;
          param_1[2] = uStack_c8;
          param_1[1] = local_d0;
          param_1[4] = uStack_b8;
          param_1[3] = uStack_c0;
          return;
        }
        goto LAB_00558678;
      }
    }
    else {
      cVar4 = *(char *)((long)pvVar9 + 0x44);
      cVar5 = *(char *)((long)pvVar9 + 0x45);
      cVar13 = cVar5;
      if (cVar4 != '\x01') {
LAB_005584dc:
        *(char *)((long)pvVar9 + 0x45) = cVar13;
        local_80 = local_80 & 0xffffffffff000000;
                    /* try { // try from 005584e8 to 005584ef has its CatchHandler @ 005587a4 */
        <tokio::task::coop::RestoreOnPending_as_core::ops::drop::Drop>::drop((ulong)&local_80 | 1);
        local_ac = cVar4;
        local_ab = cVar5;
        goto LAB_005584fc;
      }
      if (cVar5 != '\0') {
        cVar13 = cVar5 + -1;
        goto LAB_005584dc;
      }
                    /* try { // try from 005585bc to 005585d3 has its CatchHandler @ 005587a4 */
      tokio::task::coop::register_waker(param_3);
      local_80 = local_80 & 0xffffffffff000000;
      <tokio::task::coop::RestoreOnPending_as_core::ops::drop::Drop>::drop((ulong)&local_80 | 1);
      *(undefined1 *)(puVar2 + 2) = 3;
    }
    if ((*pbVar1 >> 1 & 1) != 0) goto LAB_00558690;
  }
  else {
LAB_00558678:
    if ((bVar3 >> 1 & 1) != 0) {
      *param_1 = 5;
      return;
    }
  }
  uVar15 = <tokio::time::sleep::Sleep_as_core::future::future::Future>::poll
                     (*(undefined8 *)puVar2[3],param_3);
  if ((uVar15 & 1) == 0) {
    bVar3 = *pbVar1;
    *param_1 = 4;
    *pbVar1 = bVar3 | 2;
    return;
  }
LAB_00558690:
  *param_1 = 0xfffffffffffffffe;
  return;
}


// ===== 005587d4  FUN_005587d4 =====

void FUN_005587d4(long *param_1)

{
  long *plVar1;
  ulong *puVar2;
  long *plVar3;
  ulong *puVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  bool bVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  
  lVar14 = *param_1;
  plVar1 = (long *)(lVar14 + 0x1c8);
  do {
    lVar12 = *plVar1;
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar12 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (lVar12 + -1 != 0) {
    return;
  }
  plVar1 = (long *)(lVar14 + 0x80);
  puVar2 = (ulong *)(lVar14 + 0x88);
  do {
    uVar11 = *puVar2;
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar8) {
      *puVar2 = uVar11 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  lVar12 = *plVar1;
  uVar15 = uVar11 & 0xffffffffffffffe0;
  uVar7 = uVar15 - *(long *)(lVar12 + 0x500);
  if (uVar7 != 0) {
    bVar8 = (uVar11 & 0x1f) < uVar7 >> 5;
    lVar9 = lVar12;
LAB_005588a0:
    do {
      plVar3 = (long *)(lVar9 + 0x508);
      lVar12 = *plVar3;
      if (*plVar3 == 0) {
        lVar12 = *(long *)(lVar9 + 0x500);
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        lVar10 = FUN_004b25a4(0x520,8);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          alloc::alloc::handle_alloc_error(8,0x520);
        }
        *(undefined8 *)(lVar10 + 0x508) = 0;
        *(long *)(lVar10 + 0x500) = lVar12 + 0x20;
        *(undefined8 *)(lVar10 + 0x518) = 0;
        *(undefined8 *)(lVar10 + 0x510) = 0;
LAB_005588dc:
        lVar12 = *plVar3;
        if (lVar12 == 0) goto code_r0x005588e4;
        ClearExclusiveLocal();
        plVar3 = (long *)(lVar12 + 0x508);
        *(long *)(lVar10 + 0x500) = *(long *)(lVar12 + 0x500) + 0x20;
        do {
          lVar13 = *plVar3;
          if (lVar13 != 0) {
            ClearExclusiveLocal();
            do {
              InstructionSynchronizationBarrier();
              *(long *)(lVar10 + 0x500) = *(long *)(lVar13 + 0x500) + 0x20;
              plVar3 = (long *)(lVar13 + 0x508);
              while (lVar13 = *plVar3, lVar13 == 0) {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar6) {
                  *plVar3 = lVar10;
                  cVar5 = ExclusiveMonitorsStatus();
                }
                if (cVar5 == '\0') goto LAB_00558968;
              }
              ClearExclusiveLocal();
            } while( true );
          }
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar6) {
            *plVar3 = lVar10;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
LAB_00558968:
      puVar4 = (ulong *)(lVar9 + 0x510);
      if ((bool)(bVar8 & (int)*puVar4 == -1)) {
        do {
          if (*plVar1 != lVar9) {
            ClearExclusiveLocal();
            goto LAB_0055888c;
          }
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *plVar1 = lVar12;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        do {
          uVar11 = *puVar2;
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar8) {
            *puVar2 = uVar11;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        *(ulong *)(lVar9 + 0x518) = uVar11;
        do {
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar4,0x10);
          if (bVar8) {
            *puVar4 = *puVar4 | 0x100000000;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        bVar8 = true;
        InstructionSynchronizationBarrier();
        lVar9 = lVar12;
        if (*(ulong *)(lVar12 + 0x500) == uVar15) break;
        goto LAB_005588a0;
      }
LAB_0055888c:
      bVar8 = false;
      InstructionSynchronizationBarrier();
      lVar9 = lVar12;
    } while (*(ulong *)(lVar12 + 0x500) != uVar15);
  }
  puVar2 = (ulong *)(lVar12 + 0x510);
  do {
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar8) {
      *puVar2 = *puVar2 | 0x200000000;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  <tokio::sync::task::atomic_waker::[0]::tokio::sync::task::atomic_waker::AtomicWaker>::wake
            (lVar14 + 0x100);
  return;
code_r0x005588e4:
  cVar5 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
  if (bVar6) {
    *plVar3 = lVar10;
    cVar5 = ExclusiveMonitorsStatus();
  }
  lVar12 = lVar10;
  if (cVar5 == '\0') goto LAB_00558968;
  goto LAB_005588dc;
}


// ===== 005589e8  <flux::store_token::StoreToken_as_jsi::value::FromValueBasic>::from_value_ref =====

/* WARNING: Unknown calling convention: __rustcall */
/* <flux::store_token::StoreToken as jsi::value::FromValueBasic>::from_value_ref */

undefined1  [16] __rustcall
<flux::store_token::StoreToken_as_jsi::value::FromValueBasic>::from_value_ref(undefined8 param_1)

{
  undefined8 extraout_x0;
  undefined4 extraout_w1;
  undefined4 extraout_var;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  
  <jsi_sys::ffi::base::ffi::[4]::jsi_sys::ffi::base::ffi::JsiValue>::is_number();
  if ((int)extraout_x0 != 0) {
    dVar3 = (double)<jsi_sys::ffi::base::ffi::[4]::jsi_sys::ffi::base::ffi::JsiValue>::get_number
                              (param_1);
    auVar1._8_4_ = (int)dVar3;
    auVar1._0_8_ = 1;
    auVar1._12_4_ = 0;
    return auVar1;
  }
  auVar2._8_4_ = extraout_w1;
  auVar2._0_8_ = extraout_x0;
  auVar2._12_4_ = extraout_var;
  return auVar2;
}


// ===== 00558a28  FUN_00558a28 =====

void FUN_00558a28(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong local_58 [5];
  
  lVar4 = *param_1;
  if ((*(byte *)(lVar4 + 0x1b8) & 1) == 0) {
    *(undefined1 *)(lVar4 + 0x1b8) = 1;
  }
  puVar1 = (ulong *)(lVar4 + 0x1c0);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = *puVar1 | 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  <tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notify_waiters(lVar4 + 0x180);
  while( true ) {
                    /* try { // try from 00558a7c to 00558a8b has its CatchHandler @ 00558b44 */
    FUN_00557d48(local_58,lVar4 + 0x1a0,lVar4 + 0x80);
    if (0xfffffffffffffffd < local_58[0]) break;
                    /* try { // try from 00558a98 to 00558a9f has its CatchHandler @ 00558b24 */
    <tokio::sync::mpsc::unbounded::Semaphore_as_tokio::sync::mpsc::chan::Semaphore>::add_permit
              (puVar1);
    if (local_58[0] < 0xfffffffffffffffe) {
                    /* try { // try from 00558aac to 00558ab3 has its CatchHandler @ 00558b44 */
      FUN_00557a84(local_58);
    }
  }
  while( true ) {
    FUN_00557d48(local_58,lVar4 + 0x1a0,lVar4 + 0x80);
    if (0xfffffffffffffffd < local_58[0]) break;
                    /* try { // try from 00558ab8 to 00558abf has its CatchHandler @ 00558b04 */
    <tokio::sync::mpsc::unbounded::Semaphore_as_tokio::sync::mpsc::chan::Semaphore>::add_permit
              (puVar1);
    if (local_58[0] < 0xfffffffffffffffe) {
      FUN_00557a84(local_58);
    }
  }
  return;
}


// ===== 00558b5c  FUN_00558b5c =====

void FUN_00558b5c(ulong *param_1,ulong param_2,ulong param_3,undefined8 param_4,ulong param_5)

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
  FUN_00558dac(&local_38,*param_1,param_1[1],uVar2,param_4);
  if (local_38 != 1) {
    *param_1 = uVar2;
    param_1[1] = local_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(local_30,uStack_28);
}


// ===== 00558bf4  <flux::stores::[0]::flux::stores::StoreUtils>::get_js_state =====

/* WARNING: Unknown calling convention: __rustcall */
/* <flux::stores::[0]::flux::stores::StoreUtils>::get_js_state */

void __rustcall <flux::stores::[0]::flux::stores::StoreUtils>::get_js_state(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00558bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x18))(*(undefined8 *)(param_1 + 8));
  return;
}


// ===== 00558c00  <flux::stores::[0]::flux::stores::StoreUtils>::compute_verbose_memory_statistics =====

/* WARNING: Unknown calling convention: __rustcall */
/* <flux::stores::[0]::flux::stores::StoreUtils>::compute_verbose_memory_statistics */

void __rustcall
<flux::stores::[0]::flux::stores::StoreUtils>::compute_verbose_memory_statistics(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00558c08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x20))(*(undefined8 *)(param_1 + 8));
  return;
}


// ===== 00558c0c  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<flux::persistence::schema::ColumnDefinition>>::grow_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<flux::persistence::schema::ColumnDefinition>>::grow_one
    */

void __rustcall
<alloc::raw_vec::[4]::alloc::raw_vec::RawVec<flux::persistence::schema::ColumnDefinition>>::grow_one
          (ulong *param_1)

{
  ulong uVar1;
  long local_38;
  ulong local_30;
  undefined8 uStack_28;
  
  uVar1 = *param_1 * 2;
  if (uVar1 < 5) {
    uVar1 = 4;
  }
  FUN_00558dac(&local_38,*param_1,param_1[1],uVar1,8,0x18);
  if (local_38 != 1) {
    *param_1 = uVar1;
    param_1[1] = local_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(local_30,uStack_28);
}


// ===== 00558c74  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<flux::persistence::schema::ExistingColumnInfo>>::grow_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<flux::persistence::schema::ExistingColumnInfo>>::grow_one
    */

void __rustcall
<alloc::raw_vec::[4]::alloc::raw_vec::RawVec<flux::persistence::schema::ExistingColumnInfo>>::
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
  FUN_00558dac(&local_38,*param_1,param_1[1],uVar1,8,0x20);
  if (local_38 != 1) {
    *param_1 = uVar1;
    param_1[1] = local_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(local_30,uStack_28);
}


// ===== 00558cdc  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<flux::persistence::schema::IncompatibleMigrationReason>>::grow_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<flux::persistence::schema::IncompatibleMigrationReason>>::grow_one
    */

void __rustcall
<alloc::raw_vec::[4]::alloc::raw_vec::RawVec<flux::persistence::schema::IncompatibleMigrationReason>>
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
  FUN_00558dac(&local_38,*param_1,param_1[1],uVar1,8,0x40);
  if (local_38 != 1) {
    *param_1 = uVar1;
    param_1[1] = local_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(local_30,uStack_28);
}


// ===== 00558d44  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<flux::persistence::schema::Migration>>::grow_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<flux::persistence::schema::Migration>>::grow_one */

void __rustcall
<alloc::raw_vec::[4]::alloc::raw_vec::RawVec<flux::persistence::schema::Migration>>::grow_one
          (ulong *param_1)

{
  ulong uVar1;
  long local_38;
  ulong local_30;
  undefined8 uStack_28;
  
  uVar1 = *param_1 * 2;
  if (uVar1 < 5) {
    uVar1 = 4;
  }
  FUN_00558dac(&local_38,*param_1,param_1[1],uVar1,8,0x48);
  if (local_38 != 1) {
    *param_1 = uVar1;
    param_1[1] = local_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(local_30,uStack_28);
}


// ===== 00558dac  FUN_00558dac =====

void FUN_00558dac(undefined8 *param_1,long param_2,undefined8 param_3,ulong param_4,long param_5,
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
  goto LAB_00558e48;
  if (param_2 == 0) {
    lVar5 = param_5;
    if (param_4 != 0) {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      lVar5 = FUN_004b25a4(param_4,param_5);
      if (lVar5 == 0) goto LAB_00558e28;
    }
LAB_00558e38:
    uVar3 = 0;
    param_1[1] = lVar5;
  }
  else {
    lVar5 = FUN_004b2600(param_3,param_6 * param_2,param_5,param_4);
    if (lVar5 != 0) goto LAB_00558e38;
LAB_00558e28:
    uVar3 = 1;
    param_1[1] = param_5;
  }
  lVar5 = 0x10;
  uVar4 = param_4;
LAB_00558e48:
  *(ulong *)((long)param_1 + lVar5) = uVar4;
  *param_1 = uVar3;
  return;
}


// ===== 00558e60  <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<bool>>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<bool>>>::drop_slow */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<bool>>>::drop_slow
          (undefined8 *param_1)

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
                    /* try { // try from 00558e78 to 00558e8b has its CatchHandler @ 00558ed4 */
    <tokio::sync::oneshot::tokio::sync::oneshot::Task>::drop_task((long)__ptr + 0x20);
  }
  if (((uint)uVar5 >> 3 & 1) != 0) {
    <tokio::sync::oneshot::tokio::sync::oneshot::Task>::drop_task((long)__ptr + 0x10);
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


// ===== 00558f14  <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::mpsc::chan::Chan<flux[2406cd06d16b4816]::persistence::worker::PersistenceWorkerCommand,tokio[8c8895dbfa691109]::sync::mpsc::unbounded::Semaphore>>>::drop_slow =====

/* <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::mpsc::chan::Chan<flux[2406cd06d16b4816]::persistence::worker::PersistenceWorkerCommand,
   tokio[8c8895dbfa691109]::sync::mpsc::unbounded::Semaphore>>>::drop_slow */

void <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::mpsc::chan::Chan<flux[2406cd06d16b4816]::persistence::worker::PersistenceWorkerCommand,tokio[8c8895dbfa691109]::sync::mpsc::unbounded::Semaphore>>>
     ::drop_slow(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  void *__ptr;
  long lVar4;
  void *__ptr_00;
  void *pvVar5;
  ulong local_48 [5];
  
  __ptr_00 = (void *)*param_1;
                    /* try { // try from 00558f28 to 00558f37 has its CatchHandler @ 00558fe8 */
  FUN_00557d48(local_48,(long)__ptr_00 + 0x1a0,(long)__ptr_00 + 0x80);
  while (local_48[0] < 0xfffffffffffffffe) {
                    /* try { // try from 00558f44 to 00558f5b has its CatchHandler @ 00558fec */
    FUN_00557a84(local_48);
    FUN_00557d48(local_48,(long)__ptr_00 + 0x1a0,(long)__ptr_00 + 0x80);
  }
  __ptr = *(void **)((long)__ptr_00 + 0x1a8);
  do {
    pvVar5 = *(void **)((long)__ptr + 0x508);
    free(__ptr);
    __ptr = pvVar5;
  } while (pvVar5 != (void *)0x0);
  if (*(long *)((long)__ptr_00 + 0x100) != 0) {
                    /* try { // try from 00558f8c to 00558f8f has its CatchHandler @ 00558fe0 */
    (**(code **)(*(long *)((long)__ptr_00 + 0x100) + 0x18))(*(undefined8 *)((long)__ptr_00 + 0x108))
    ;
  }
  if (__ptr_00 != (void *)0xffffffffffffffff) {
    plVar1 = (long *)((long)__ptr_00 + 8);
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
      free(__ptr_00);
      return;
    }
  }
  return;
}


// ===== 00559044  <flux::stores::StoreName_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <flux::stores::StoreName as core::fmt::Display>::fmt */

void __rustcall
<flux::stores::StoreName_as_core::fmt::Display>::fmt(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt(*param_1,param_1[1],param_2);
  return;
}


// ===== 00559058  <alloc::sync::Arc<str>as_flux::persistence::codec::ValueCodec>::from_sql =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::Arc<str> as flux::persistence::codec::ValueCodec>::from_sql */

void __rustcall
<alloc::sync::Arc<str>as_flux::persistence::codec::ValueCodec>::from_sql
          (undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long local_58;
  long *local_50;
  undefined *puStack_48;
  
  if (*param_2 == 3) {
    core::str::converts::from_utf8(&local_58,param_2[1],param_2[2]);
    if (local_58 != 1) {
      auVar4 = alloc::sync::arcinner_layout_for_value_layout(1,puStack_48);
      lVar3 = auVar4._8_8_;
      puVar1 = auVar4._0_8_;
      puVar2 = puVar1;
      if (lVar3 != 0) {
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        puVar2 = (undefined8 *)FUN_004b25a4(lVar3,puVar1);
      }
      if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        alloc::alloc::handle_alloc_error(puVar1,lVar3);
      }
      puVar2[1] = 1;
      *puVar2 = 1;
      memcpy(puVar2 + 2,local_50,(size_t)puStack_48);
      param_1[1] = puVar2;
      param_1[2] = puStack_48;
      *param_1 = 0xffffffffffffffff;
      return;
    }
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    param_2 = (long *)FUN_004b25a4(0x10,8);
    if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x10);
    }
    local_58 = 3;
    param_2[1] = (long)puStack_48;
    *param_2 = (long)local_50;
  }
  else {
    local_58 = 0;
  }
  puStack_48 = &DAT_00acf8a0;
  local_50 = param_2;
  <rusqlite::error::Error_as_core::convert::From<rusqlite::types::from_sql::FromSqlError>>::from
            (param_1,&local_58);
  return;
}


// ===== 0055918c  FUN_0055918c =====

void FUN_0055918c(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 005591ac  FUN_005591ac =====

void FUN_005591ac(undefined8 *param_1)

{
  core::fmt::pointer_fmt_inner(*(undefined8 *)*param_1);
  return;
}


// ===== 005591b8  FUN_005591b8 =====

void FUN_005591b8(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt(*(undefined8 *)*param_1,((undefined8 *)*param_1)[1],param_2);
  return;
}


// ===== 005591cc  FUN_005591cc =====

void FUN_005591cc(long param_1,undefined8 param_2)

{
  long local_18;
  
  local_18 = param_1 + 8;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field2_finish
            (param_2,"Utf8Error",9,"valid_up_to",0xb,param_1,&DAT_00acf8f8,"error_len",9,&local_18,
             &DAT_00acf918);
  return;
}


// ===== 0055923c  FUN_0055923c =====

void FUN_0055923c(undefined8 param_1,long param_2)

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


// ===== 00559254  <jsi::date::Date_as_flux::persistence::codec::ValueCodec>::wrap_to_sql =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi::date::Date as flux::persistence::codec::ValueCodec>::wrap_to_sql */

void __rustcall <jsi::date::Date_as_flux::persistence::codec::ValueCodec>::wrap_to_sql(void)

{
  (*(code *)PTR_timestamp_millis_00b026f8)();
  return;
}


// ===== 00559258  <jsi::date::Date_as_flux::persistence::codec::ValueCodec>::from_sql =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi::date::Date as flux::persistence::codec::ValueCodec>::from_sql */

void __rustcall
<jsi::date::Date_as_flux::persistence::codec::ValueCodec>::from_sql
          (undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  uint local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  if (*param_2 != 1) {
    local_38 = 0;
    uStack_34 = 0;
    <rusqlite::error::Error_as_core::convert::From<rusqlite::types::from_sql::FromSqlError>>::from
              (param_1,&local_38);
    return;
  }
  <jsi::date::[0]::jsi::date::Date>::with_timestamp_millis(&local_38,param_2[1]);
  if ((local_38 & 1) != 0) {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar1 = (undefined8 *)FUN_004b25a4(8,8);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = CONCAT44(uStack_2c,local_30);
      *param_1 = 0x8000000000000002;
      param_1[1] = puVar1;
      param_1[2] = &DAT_00acf958;
      param_1[3] = 0;
      *(undefined1 *)(param_1 + 4) = 1;
      return;
    }
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,8);
  }
  *(undefined4 *)(param_1 + 2) = uStack_2c;
  *param_1 = 0xffffffffffffffff;
  param_1[1] = CONCAT44(local_30,uStack_34);
  return;
}


// ===== 00559328  FUN_00559328 =====

void FUN_00559328(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,"InvalidTimestampMillis",0x16,&local_18,&DAT_00acf9b0);
  return;
}


// ===== 00559368  FUN_00559368 =====

undefined1  [16] FUN_00559368(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x28;
  auVar1._0_8_ = "description() is deprecated; use Display";
  return auVar1;
}


// ===== 00559378  FUN_00559378 =====

undefined8 FUN_00559378(void)

{
  return 0;
}


// ===== 00559380  FUN_00559380 =====

void FUN_00559380(void)

{
  return;
}


// ===== 00559384  FUN_00559384 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00559384(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029f6f0;
  param_1[1] = _UNK_0029f6f8;
  *param_1 = uVar1;
  return;
}


// ===== 00559398  FUN_00559398 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00559398(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a08c0;
  param_1[1] = _UNK_002a08c8;
  *param_1 = uVar1;
  return;
}


// ===== 005593ac  FUN_005593ac =====

long FUN_005593ac(long param_1,long param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  size_t sVar2;
  void *__s2;
  void *__s1;
  void *__s2_00;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  
  if (7 < param_4) {
    param_4 = param_4 >> 3;
    lVar7 = param_4 * 0xa8;
    lVar8 = param_4 * 0x60;
    param_1 = FUN_005593ac(param_1,param_1 + lVar8,param_1 + lVar7,param_4);
    param_2 = FUN_005593ac(param_2,param_2 + lVar8,param_2 + lVar7,param_4);
    param_3 = FUN_005593ac(param_3,param_3 + lVar8,param_3 + lVar7,param_4);
  }
  __s2 = *(void **)(param_2 + 8);
  uVar3 = *(ulong *)(param_2 + 0x10);
  __s1 = *(void **)(param_1 + 8);
  uVar4 = *(ulong *)(param_1 + 0x10);
  sVar2 = uVar4;
  if (uVar3 <= uVar4) {
    sVar2 = uVar3;
  }
  iVar6 = memcmp(__s1,__s2,sVar2);
  __s2_00 = *(void **)(param_3 + 8);
  uVar5 = *(ulong *)(param_3 + 0x10);
  uVar1 = uVar4 - uVar3;
  if (iVar6 != 0) {
    uVar1 = (long)iVar6;
  }
  sVar2 = uVar4;
  if (uVar5 <= uVar4) {
    sVar2 = uVar5;
  }
  iVar6 = memcmp(__s1,__s2_00,sVar2);
  uVar4 = uVar4 - uVar5;
  if (iVar6 != 0) {
    uVar4 = (long)iVar6;
  }
  if (-1 < (long)(uVar4 ^ uVar1)) {
    sVar2 = uVar3;
    if (uVar5 <= uVar3) {
      sVar2 = uVar5;
    }
    iVar6 = memcmp(__s2,__s2_00,sVar2);
    uVar3 = uVar3 - uVar5;
    if (iVar6 != 0) {
      uVar3 = (long)iVar6;
    }
    param_1 = param_3;
    if (-1 < (long)(uVar3 ^ uVar1)) {
      param_1 = param_2;
    }
  }
  return param_1;
}


// ===== 005594e0  core::slice::sort::stable::quicksort::quicksort<alloc::string::String,<{backref_15}as_core::cmp::PartialOrd>::lt> =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::slice::sort::stable::quicksort::quicksort<alloc::string::String, <{backref 15} as
   core::cmp::PartialOrd>::lt> */

void __rustcall
core::slice::sort::stable::quicksort::
quicksort<alloc::string::String,<_backref_15_as_core::cmp::PartialOrd>::lt>
          (undefined8 *param_1,ulong param_2,void *param_3,ulong param_4,int param_5,long param_6,
          undefined8 param_7)

{
  size_t sVar1;
  void *__s2;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  void *pvVar16;
  ulong uVar17;
  undefined8 uVar18;
  long local_a8;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  void *pvVar12;
  
  local_a8 = param_6;
  if (0x20 < param_2) {
    do {
      if (param_5 == 0) {
        FUN_00564c54(param_1,param_2,param_3,param_4,1,param_7);
        return;
      }
      puVar10 = param_1 + (param_2 >> 3) * 0xc;
      puVar11 = param_1 + (param_2 >> 3) * 0x15;
      if (param_2 < 0x40) {
        pvVar16 = (void *)puVar10[1];
        uVar8 = puVar10[2];
        pvVar12 = (void *)param_1[1];
        uVar17 = param_1[2];
        sVar1 = uVar17;
        if (uVar8 <= uVar17) {
          sVar1 = uVar8;
        }
        iVar6 = memcmp(pvVar12,pvVar16,sVar1);
        __s2 = (void *)puVar11[1];
        uVar2 = puVar11[2];
        uVar14 = uVar17 - uVar8;
        if (iVar6 != 0) {
          uVar14 = (long)iVar6;
        }
        sVar1 = uVar17;
        if (uVar2 <= uVar17) {
          sVar1 = uVar2;
        }
        iVar6 = memcmp(pvVar12,__s2,sVar1);
        uVar17 = uVar17 - uVar2;
        if (iVar6 != 0) {
          uVar17 = (long)iVar6;
        }
        puVar7 = param_1;
        if (-1 < (long)(uVar17 ^ uVar14)) {
          sVar1 = uVar8;
          if (uVar2 <= uVar8) {
            sVar1 = uVar2;
          }
          iVar6 = memcmp(pvVar16,__s2,sVar1);
          uVar8 = uVar8 - uVar2;
          if (iVar6 != 0) {
            uVar8 = (long)iVar6;
          }
          puVar7 = puVar11;
          if (-1 < (long)(uVar8 ^ uVar14)) {
            puVar7 = puVar10;
          }
        }
      }
      else {
        puVar7 = (undefined8 *)FUN_005593ac(param_1,puVar10,puVar11);
      }
      uStack_78 = puVar7[1];
      local_80 = *puVar7;
      param_5 = param_5 + -1;
      uVar8 = ((ulong)((long)puVar7 - (long)param_1) >> 3) * -0x5555555555555555;
      local_70 = puVar7[2];
      if (local_a8 == 0) {
LAB_00559680:
        if (param_4 < param_2) goto LAB_00559934;
        pvVar16 = (void *)((long)param_3 + param_2 * 0x18);
        uVar17 = 0;
        uVar14 = uVar8;
        puVar10 = param_1;
        while( true ) {
          for (; puVar10 < param_1 + uVar14 * 3; puVar10 = puVar10 + 3) {
            uVar2 = puVar7[2];
            uVar3 = puVar10[2];
            sVar1 = uVar3;
            if (uVar2 <= uVar3) {
              sVar1 = uVar2;
            }
            iVar6 = memcmp((void *)puVar10[1],(void *)puVar7[1],sVar1);
            pvVar16 = (void *)((long)pvVar16 + -0x18);
            lVar4 = uVar3 - uVar2;
            if (iVar6 != 0) {
              lVar4 = (long)iVar6;
            }
            pvVar12 = param_3;
            if (-1 < lVar4) {
              pvVar12 = pvVar16;
            }
            puVar11 = (undefined8 *)((long)pvVar12 + uVar17 * 0x18);
            uVar18 = puVar10[1];
            uVar13 = *puVar10;
            puVar11[2] = puVar10[2];
            puVar11[1] = uVar18;
            *puVar11 = uVar13;
            if (lVar4 < 0) {
              uVar17 = uVar17 + 1;
            }
          }
          if (uVar14 == param_2) break;
          pvVar16 = (void *)((long)pvVar16 + -0x18);
          puVar9 = (undefined8 *)((long)pvVar16 + uVar17 * 0x18);
          puVar11 = puVar10 + 1;
          uVar18 = *puVar10;
          uVar13 = puVar10[2];
          puVar10 = puVar10 + 3;
          puVar9[1] = *puVar11;
          *puVar9 = uVar18;
          puVar9[2] = uVar13;
          uVar14 = param_2;
        }
        memcpy(param_1,param_3,uVar17 * 0x18);
        lVar4 = param_2 - uVar17;
        if (lVar4 != 0) {
          puVar10 = param_1 + uVar17 * 3;
          puVar11 = (undefined8 *)((long)param_3 + param_2 * 0x18 + -0x18);
          lVar15 = lVar4;
          do {
            puVar9 = puVar11 + 1;
            uVar18 = *puVar11;
            uVar13 = puVar11[2];
            lVar15 = lVar15 + -1;
            puVar11 = puVar11 + -3;
            puVar10[1] = *puVar9;
            *puVar10 = uVar18;
            puVar10[2] = uVar13;
            puVar10 = puVar10 + 3;
          } while (lVar15 != 0);
        }
        if (uVar17 == 0) goto LAB_005597bc;
        if (param_2 < uVar17) {
                    /* WARNING: Subroutine does not return */
          panicking::panic_fmt("mid > len",0x13,&PTR_s__nix_store_8006w282fgsx3273c878b_00acf9d0);
        }
        quicksort<alloc::string::String,<_backref_15_as_core::cmp::PartialOrd>::lt>
                  (param_1 + uVar17 * 3,lVar4,param_3,param_4,param_5,&local_80,param_7);
        param_2 = uVar17;
      }
      else {
        uVar17 = puVar7[2];
        uVar14 = *(ulong *)(local_a8 + 0x10);
        sVar1 = uVar14;
        if (uVar17 <= uVar14) {
          sVar1 = uVar17;
        }
        iVar6 = memcmp(*(void **)(local_a8 + 8),(void *)puVar7[1],sVar1);
        lVar4 = uVar14 - uVar17;
        if (iVar6 != 0) {
          lVar4 = (long)iVar6;
        }
        if (lVar4 < 0) goto LAB_00559680;
LAB_005597bc:
        if (param_4 < param_2) {
LAB_00559934:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x559938);
          (*pcVar5)();
        }
        pvVar16 = (void *)((long)param_3 + param_2 * 0x18);
        uVar17 = 0;
        puVar10 = param_1;
        while( true ) {
          for (; puVar10 < param_1 + uVar8 * 3; puVar10 = puVar10 + 3) {
            uVar14 = puVar7[2];
            uVar2 = puVar10[2];
            sVar1 = uVar14;
            if (uVar2 <= uVar14) {
              sVar1 = uVar2;
            }
            iVar6 = memcmp((void *)puVar7[1],(void *)puVar10[1],sVar1);
            pvVar16 = (void *)((long)pvVar16 + -0x18);
            lVar4 = uVar14 - uVar2;
            if (iVar6 != 0) {
              lVar4 = (long)iVar6;
            }
            if (lVar4 < 0) {
              puVar11 = (undefined8 *)((long)pvVar16 + uVar17 * 0x18);
              uVar18 = puVar10[1];
              uVar13 = *puVar10;
              puVar11[2] = puVar10[2];
              puVar11[1] = uVar18;
              *puVar11 = uVar13;
            }
            else {
              puVar11 = (undefined8 *)((long)param_3 + uVar17 * 0x18);
              uVar18 = puVar10[1];
              uVar13 = *puVar10;
              puVar11[2] = puVar10[2];
              puVar11[1] = uVar18;
              *puVar11 = uVar13;
              uVar17 = uVar17 + 1;
            }
          }
          if (uVar8 == param_2) break;
          puVar11 = (undefined8 *)((long)param_3 + uVar17 * 0x18);
          pvVar16 = (void *)((long)pvVar16 + -0x18);
          uVar18 = puVar10[1];
          uVar13 = *puVar10;
          uVar17 = uVar17 + 1;
          puVar11[2] = puVar10[2];
          puVar11[1] = uVar18;
          *puVar11 = uVar13;
          uVar8 = param_2;
          puVar10 = puVar10 + 3;
        }
        memcpy(param_1,param_3,uVar17 * 0x18);
        uVar8 = param_2 - uVar17;
        if (uVar8 == 0) {
          param_1 = param_1 + param_2 * 3;
          param_2 = uVar8;
          break;
        }
        param_1 = param_1 + uVar17 * 3;
        puVar11 = (undefined8 *)((long)param_3 + param_2 * 0x18 + -0x18);
        uVar14 = uVar8;
        puVar10 = param_1;
        do {
          puVar7 = puVar11 + 1;
          uVar18 = *puVar11;
          uVar13 = puVar11[2];
          uVar14 = uVar14 - 1;
          puVar11 = puVar11 + -3;
          puVar10[1] = *puVar7;
          *puVar10 = uVar18;
          puVar10[2] = uVar13;
          puVar10 = puVar10 + 3;
        } while (uVar14 != 0);
        if (param_2 < uVar17) {
                    /* WARNING: Subroutine does not return */
          index::slice_index_fail
                    (uVar17,param_2,param_2,&PTR_s__nix_store_8006w282fgsx3273c878b_00acf9e8);
        }
        local_a8 = 0;
        param_2 = uVar8;
      }
    } while (0x20 < param_2);
  }
  FUN_0055adac(param_1,param_2,param_3,param_4,param_7);
  return;
}


// ===== 00559968  FUN_00559968 =====

void FUN_00559968(undefined8 *param_1,undefined8 param_2)

{
  long *local_18;
  
  local_18 = (long *)*param_1;
  if (*local_18 != 0) {
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002bd0bc,4,&local_18,&DAT_00acfa00);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd198,4);
  return;
}


// ===== 005599c0  FUN_005599c0 =====

void FUN_005599c0(undefined8 *param_1,undefined8 param_2)

{
  long *local_18;
  
  local_18 = (long *)*param_1;
  if (*local_18 != -1) {
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002bd0bc,4,&local_18,&DAT_00acfa20);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd198,4);
  return;
}


// ===== 00559a1c  FUN_00559a1c =====

void FUN_00559a1c(undefined8 *param_1,undefined8 param_2)

{
  char *local_18;
  
  local_18 = (char *)*param_1 + 1;
  if (*(char *)*param_1 == '\x01') {
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002bd0bc,4,&local_18,&DAT_00acfa40);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd198,4);
  return;
}


// ===== 00559a78  <jsi::integer::Integer_as_flux::persistence::codec::ValueCodec>::from_sql =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi::integer::Integer as flux::persistence::codec::ValueCodec>::from_sql */

void __rustcall
<jsi::integer::Integer_as_flux::persistence::codec::ValueCodec>::from_sql
          (undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 local_38 [3];
  
  if (*param_2 == 1) {
    uVar1 = <jsi::integer::jsi::integer::Integer>::new(param_2[1]);
    *param_1 = 0xffffffffffffffff;
    param_1[1] = uVar1;
    return;
  }
  local_38[0] = 0;
  <rusqlite::error::Error_as_core::convert::From<rusqlite::types::from_sql::FromSqlError>>::from
            (param_1,local_38);
  return;
}


// ===== 00559ad8  FUN_00559ad8 =====

undefined8 * FUN_00559ad8(pthread_key_t param_1,long param_2,uint *param_3)

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
    puVar3 = (uint *)&DAT_002c25e0;
    if (param_3 != (uint *)0x0) {
      param_3[0] = 0;
      param_3[1] = 0;
      puVar3 = param_3 + 2;
      if ((*param_3 & 1) == 0) {
        puVar3 = (uint *)&DAT_002c25e0;
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
                    /* try { // try from 00559c0c to 00559c17 has its CatchHandler @ 00559c44 */
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
                    /* try { // try from 00559ba0 to 00559beb has its CatchHandler @ 00559c1c */
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


// ===== 00559c5c  FUN_00559c5c =====

void FUN_00559c5c(long param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  ulong local_70;
  void *local_68 [7];
  
                    /* try { // try from 00559c74 to 00559c7f has its CatchHandler @ 00559dd0 */
  <rusqlite::inner_connection::rusqlite::inner_connection::InnerConnection>::close
            (&local_70,param_1 + 8);
  if (local_70 == 0xffffffffffffffff) goto LAB_00559d74;
  uVar3 = local_70 ^ 0x8000000000000000;
  if (-1 < (long)local_70) {
    uVar3 = 0x14;
  }
  if (uVar3 < 0x15) {
    if ((1L << (uVar3 & 0x3f) & 0x30e0U) != 0) goto joined_r0x00559d2c;
    if (uVar3 == 0xf) {
                    /* WARNING: Load size is inaccurate */
      if (*local_68[1] != (code *)0x0) {
                    /* try { // try from 00559d58 to 00559d5f has its CatchHandler @ 00559dac */
        (**local_68[1])(local_68[0]);
      }
      goto LAB_00559d60;
    }
    if (uVar3 != 0x14) goto LAB_00559d10;
    if (local_70 != 0) {
      free(local_68[0]);
    }
    lVar5 = 0x18;
joined_r0x00559d08:
    if (local_68[2] == (void *)0x0) goto LAB_00559d74;
    local_68[0] = *(void **)((long)local_68 + lVar5);
  }
  else {
LAB_00559d10:
    if (uVar3 != 2) {
      if ((uVar3 != 0) || (local_68[0] == (void *)0xffffffffffffffff)) goto LAB_00559d74;
joined_r0x00559d2c:
      lVar5 = 8;
      local_68[2] = local_68[0];
      goto joined_r0x00559d08;
    }
                    /* WARNING: Load size is inaccurate */
    if (*local_68[1] != (code *)0x0) {
                    /* try { // try from 00559d40 to 00559d47 has its CatchHandler @ 00559db0 */
      (**local_68[1])(local_68[0]);
    }
LAB_00559d60:
    if (*(long *)((long)local_68[1] + 8) == 0) goto LAB_00559d74;
  }
  free(local_68[0]);
LAB_00559d74:
  plVar4 = *(long **)(param_1 + 8);
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
    <alloc::sync::[n]::alloc::sync::Arc<std::sync::poison::mutex::Mutex<*mut_libsqlite3_sys::bindings::sqlite3>>>
    ::drop_slow(param_1 + 8);
  }
  return;
}


// ===== 00559e04  FUN_00559e04 =====

void FUN_00559e04(long param_1)

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


// ===== 00559e60  FUN_00559e60 =====

void FUN_00559e60(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 00559e70 to 00559e73 has its CatchHandler @ 00559eac */
  FUN_00558a28();
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
    <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::mpsc::chan::Chan<flux[2406cd06d16b4816]::persistence::worker::PersistenceWorkerCommand,tokio[8c8895dbfa691109]::sync::mpsc::unbounded::Semaphore>>>
    ::drop_slow(param_1);
    return;
  }
  return;
}


// ===== 00559ee0  FUN_00559ee0 =====

void FUN_00559ee0(int *param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  void *__ptr;
  
  if (*param_1 == 1) {
    if ((*(long *)(param_1 + 2) != 0) && (__ptr = *(void **)(param_1 + 4), __ptr != (void *)0x0)) {
      puVar6 = *(undefined8 **)(param_1 + 6);
      pcVar3 = (code *)*puVar6;
      if (pcVar3 != (code *)0x0) {
                    /* try { // try from 00559f40 to 00559f47 has its CatchHandler @ 0055a034 */
        (*pcVar3)(__ptr);
      }
      if (puVar6[1] != 0) {
        free(__ptr);
        return;
      }
    }
  }
  else if (*param_1 == 0) {
    if (*(char *)((long)param_1 + 0x2c9) == '\x03') {
                    /* try { // try from 00559f70 to 00559f7b has its CatchHandler @ 0055a058 */
      <tokio::runtime::time::entry::TimerEntry_as_core::ops::drop::Drop>::drop(param_1 + 0x50);
      if (*(long *)(param_1 + 0x50) == 0) {
        plVar4 = *(long **)(param_1 + 0x52);
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
          <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>>::
          drop_slow(param_1 + 0x52);
        }
      }
      else {
        plVar4 = *(long **)(param_1 + 0x52);
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
                    /* try { // try from 00559fa4 to 00559fd3 has its CatchHandler @ 0055a02c */
          <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>>
          ::drop_slow(param_1 + 0x52);
        }
      }
      if ((*(long *)(param_1 + 0x58) != 0) && (*(long *)(param_1 + 0x62) != 0)) {
                    /* try { // try from 00559ff0 to 00559ff3 has its CatchHandler @ 0055a024 */
        (**(code **)(*(long *)(param_1 + 0x62) + 0x18))(*(undefined8 *)(param_1 + 100));
        FUN_0055a480(param_1 + 0xe);
        return;
      }
      FUN_0055a480(param_1 + 0xe);
      return;
    }
    if (*(char *)((long)param_1 + 0x2c9) == '\0') {
      FUN_0055a480(param_1 + 0x70);
      return;
    }
  }
  return;
}


// ===== 0055a098  FUN_0055a098 =====

void FUN_0055a098(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  ulong local_80 [3];
  undefined8 local_68;
  ulong local_60;
  undefined8 local_58;
  long lStack_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38 [2];
  long local_28;
  
                    /* try { // try from 0055a0ac to 0055a0af has its CatchHandler @ 0055a174 */
  <rusqlite::raw_statement::RawStatement_as_core::ops::drop::Drop>::drop();
  lVar4 = *(long *)(param_1 + 8);
  if (lVar4 == 0) {
    local_40 = 0;
  }
  else {
    local_68 = *(undefined8 *)(param_1 + 0x10);
    local_40 = *(undefined8 *)(param_1 + 0x18);
    local_80[1] = 0;
    local_58 = 0;
    local_80[2] = lVar4;
    lStack_50 = lVar4;
    local_48 = local_68;
  }
  local_80[0] = (ulong)(lVar4 != 0);
                    /* try { // try from 0055a0e4 to 0055a0ef has its CatchHandler @ 0055a170 */
  local_60 = local_80[0];
  FUN_0055815c(local_38,local_80);
  while (local_38[0] != 0) {
    lVar4 = local_38[0] + local_28 * 0x20;
    if (0x10 < *(ulong *)(lVar4 + 0x18)) {
      free(*(void **)(lVar4 + 0x10));
    }
                    /* try { // try from 0055a0f4 to 0055a0ff has its CatchHandler @ 0055a184 */
    FUN_0055815c(local_38,local_80);
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
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow((undefined8 *)(param_1 + 0x20));
      return;
    }
  }
  return;
}


// ===== 0055a1bc  FUN_0055a1bc =====

void FUN_0055a1bc(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *__ptr;
  void *__ptr_00;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  long *local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  pvVar4 = *(void **)(param_1 + 0x30);
  if (pvVar4 != (void *)0x0) {
    __ptr_00 = *(void **)((long)pvVar4 + 8);
    while (__ptr_00 != pvVar4) {
      uStack_88 = *(undefined8 *)((long)__ptr_00 + 0x18);
      local_90 = *(long **)((long)__ptr_00 + 0x10);
      uStack_78 = *(undefined8 *)((long)__ptr_00 + 0x28);
      uStack_80 = *(undefined8 *)((long)__ptr_00 + 0x20);
      pvVar5 = *(void **)((long)__ptr_00 + 8);
      local_50 = *(undefined8 *)((long)__ptr_00 + 0x50);
      uStack_68 = *(undefined8 *)((long)__ptr_00 + 0x38);
      local_70 = *(undefined8 *)((long)__ptr_00 + 0x30);
      uStack_58 = *(undefined8 *)((long)__ptr_00 + 0x48);
      uStack_60 = *(undefined8 *)((long)__ptr_00 + 0x40);
      do {
        lVar3 = *local_90;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(local_90,0x10);
        if (bVar2) {
          *local_90 = lVar3 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar3 + -1 == 0) {
        DataMemoryBarrier(2,1);
                    /* try { // try from 0055a228 to 0055a22f has its CatchHandler @ 0055a2c8 */
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(&local_90);
      }
                    /* try { // try from 0055a230 to 0055a237 has its CatchHandler @ 0055a2dc */
      FUN_0055a098(&uStack_80);
      free(__ptr_00);
      __ptr_00 = pvVar5;
    }
    free(pvVar4);
  }
  __ptr = (undefined8 *)*(void **)(param_1 + 0x38);
  while (__ptr != (undefined8 *)0x0) {
    pvVar4 = (void *)*__ptr;
    free(__ptr);
    __ptr = (undefined8 *)pvVar4;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    free((void *)(*(long *)(param_1 + 8) - (*(long *)(param_1 + 0x10) * 8 + 8)));
  }
  return;
}


// ===== 0055a2fc  FUN_0055a2fc =====

void FUN_0055a2fc(long param_1)

{
  char cVar1;
  bool bVar2;
  void *__ptr;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  void *pvVar6;
  void *pvVar7;
  long *local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    *(undefined8 *)(param_1 + 0x20) = 0xffffffffffffffff;
    if (*(long *)(param_1 + 0x40) != 0) {
      uVar4 = *(ulong *)(param_1 + 0x30);
      if (uVar4 != 0) {
        memset(*(void **)(param_1 + 0x28),0xff,uVar4 + 9);
        uVar4 = *(ulong *)(param_1 + 0x30);
        if (7 < uVar4) {
          uVar4 = (uVar4 + 1 >> 3) * 7;
        }
      }
      *(ulong *)(param_1 + 0x38) = uVar4;
      *(undefined8 *)(param_1 + 0x40) = 0;
    }
    pvVar6 = *(void **)(param_1 + 0x50);
    if (pvVar6 != (void *)0x0) {
      __ptr = *(void **)((long)pvVar6 + 8);
      while (__ptr != pvVar6) {
        uStack_88 = *(undefined8 *)((long)__ptr + 0x18);
        local_90 = *(long **)((long)__ptr + 0x10);
        uStack_78 = *(undefined8 *)((long)__ptr + 0x28);
        uStack_80 = *(undefined8 *)((long)__ptr + 0x20);
        pvVar7 = *(void **)((long)__ptr + 8);
        local_50 = *(undefined8 *)((long)__ptr + 0x50);
        uStack_68 = *(undefined8 *)((long)__ptr + 0x38);
        local_70 = *(undefined8 *)((long)__ptr + 0x30);
        uStack_58 = *(undefined8 *)((long)__ptr + 0x48);
        uStack_60 = *(undefined8 *)((long)__ptr + 0x40);
        do {
          lVar5 = *local_90;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(local_90,0x10);
          if (bVar2) {
            *local_90 = lVar5 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar5 + -1 == 0) {
          DataMemoryBarrier(2,1);
                    /* try { // try from 0055a3bc to 0055a3c3 has its CatchHandler @ 0055a438 */
          <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(&local_90);
        }
                    /* try { // try from 0055a3c4 to 0055a3cb has its CatchHandler @ 0055a44c */
        FUN_0055a098(&uStack_80);
        free(__ptr);
        __ptr = pvVar7;
      }
      *(void **)pvVar6 = pvVar6;
      *(void **)((long)pvVar6 + 8) = pvVar6;
    }
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
                    /* try { // try from 0055a3f8 to 0055a3ff has its CatchHandler @ 0055a430 */
    FUN_00559c5c(param_1);
    FUN_0055a1bc((long *)(param_1 + 0x20));
    return;
  }
                    /* try { // try from 0055a420 to 0055a42b has its CatchHandler @ 0055a460 */
  core::cell::panic_already_borrowed(&PTR_s__root__cargo_registry_src_index__00acfa60);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x55a430);
  (*pcVar3)();
}


// ===== 0055a480  FUN_0055a480 =====

void FUN_0055a480(long param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  
                    /* try { // try from 0055a49c to 0055a49f has its CatchHandler @ 0055a5f4 */
  FUN_0055e2cc();
  lVar5 = *(long *)(param_1 + 0x28);
  if (lVar5 != 0) {
    lVar6 = *(long *)(param_1 + 0x38);
    if (lVar6 != 0) {
      puVar7 = *(undefined8 **)(param_1 + 0x20);
      puVar8 = puVar7 + 1;
      uVar9 = NEON_cmge(*puVar7,0,1);
      uVar9 = uVar9 & 0x8080808080808080;
      do {
        for (; uVar9 == 0; uVar9 = uVar9 & 0x8080808080808080) {
          puVar7 = puVar7 + -0x30;
          uVar9 = NEON_cmge(*puVar8,0,1);
          puVar8 = puVar8 + 1;
        }
        uVar1 = (uVar9 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar9 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
                    /* try { // try from 0055a4fc to 0055a4ff has its CatchHandler @ 0055a604 */
        FUN_0055e604(puVar7 + (long)-(int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) * 6 +
                              -4);
        lVar6 = lVar6 + -1;
        uVar9 = uVar9 - 1 & uVar9;
      } while (lVar6 != 0);
    }
    if (lVar5 * 0x31 != -0x39) {
      free((void *)(*(long *)(param_1 + 0x20) + lVar5 * -0x30 + -0x30));
    }
  }
  lVar5 = *(long *)(param_1 + 0x48);
  if ((lVar5 != 0) && (lVar5 * 0x11 != -0x19)) {
    free((void *)(*(long *)(param_1 + 0x40) + lVar5 * -0x10 + -0x10));
  }
                    /* try { // try from 0055a564 to 0055a56b has its CatchHandler @ 0055a5ec */
  FUN_0055e2cc(param_1 + 0x60);
                    /* try { // try from 0055a56c to 0055a573 has its CatchHandler @ 0055a5bc */
  FUN_00558a28(param_1 + 0x80);
  plVar4 = *(long **)(param_1 + 0x80);
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
                    /* try { // try from 0055a590 to 0055a597 has its CatchHandler @ 0055a5b4 */
    <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::mpsc::chan::Chan<flux[2406cd06d16b4816]::persistence::worker::PersistenceWorkerCommand,tokio[8c8895dbfa691109]::sync::mpsc::unbounded::Semaphore>>>
    ::drop_slow(param_1 + 0x80);
  }
  FUN_0055a2fc(param_1 + 0x88);
  return;
}


// ===== 0055a634  FUN_0055a634 =====

void FUN_0055a634(long *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  code *pcVar6;
  long *plVar7;
  
  lVar5 = *param_1;
  if (lVar5 < 2) {
    if (lVar5 != 0) {
      FUN_0055e2cc(param_1 + 1);
      return;
    }
    __ptr = (void *)param_1[3];
    puVar1 = (undefined8 *)param_1[4];
    pcVar6 = (code *)*puVar1;
    if (pcVar6 != (code *)0x0) {
                    /* try { // try from 0055a660 to 0055a667 has its CatchHandler @ 0055a704 */
      (*pcVar6)(__ptr);
    }
    if (puVar1[1] != 0) {
      free(__ptr);
      return;
    }
  }
  else if (lVar5 == 2) {
    param_1 = param_1 + 1;
    plVar7 = (long *)*param_1;
    if (plVar7 != (long *)0x0) {
                    /* try { // try from 0055a694 to 0055a6b7 has its CatchHandler @ 0055a728 */
      uVar4 = <tokio::sync::oneshot::[9]::tokio::sync::oneshot::State>::set_complete(plVar7 + 6);
      if ((uVar4 & 5) == 1) {
        (**(code **)(plVar7[4] + 0x10))(plVar7[5]);
        plVar7 = (long *)*param_1;
        if (plVar7 == (long *)0x0) {
          return;
        }
      }
      do {
        lVar5 = *plVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        DataMemoryBarrier(2,1);
        <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<bool>>>::drop_slow(param_1);
        return;
      }
    }
  }
  return;
}


// ===== 0055a760  FUN_0055a760 =====

void FUN_0055a760(long *param_1)

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


// ===== 0055a7ac  FUN_0055a7ac =====

void FUN_0055a7ac(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* try { // try from 0055a7cc to 0055a7cf has its CatchHandler @ 0055a80c */
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


// ===== 0055a844  thunk_FUN_0056c818 =====

void thunk_FUN_0056c818(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  void *__ptr;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  int aiStack_310 [180];
  
  iVar1 = tokio::runtime::task::harness::can_read_output(param_1,param_1 + 0x300);
  if (iVar1 != 0) {
    memcpy(aiStack_310,(void *)(param_1 + 0x30),0x2d0);
    *(undefined4 *)(param_1 + 0x30) = 2;
    if (aiStack_310[0] != 1) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                ("JoinHandle polled after completion",0x45,
                 &PTR_s__root__cargo_registry_src_index__00ad08f8);
    }
    lVar6 = *(long *)(param_1 + 0x40);
    lVar5 = *(long *)(param_1 + 0x38);
    lVar2 = *(long *)(param_1 + 0x48);
    if (((*param_2 == 0) && (param_2[1] != 0)) && (__ptr = (void *)param_2[2], __ptr != (void *)0x0)
       ) {
      puVar4 = (undefined8 *)param_2[3];
      pcVar3 = (code *)*puVar4;
      if (pcVar3 != (code *)0x0) {
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


// ===== 0055a848  thunk_FUN_0056c818 =====

void thunk_FUN_0056c818(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  void *__ptr;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  int aiStack_310 [180];
  
  iVar1 = tokio::runtime::task::harness::can_read_output(param_1,param_1 + 0x300);
  if (iVar1 != 0) {
    memcpy(aiStack_310,(void *)(param_1 + 0x30),0x2d0);
    *(undefined4 *)(param_1 + 0x30) = 2;
    if (aiStack_310[0] != 1) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                ("JoinHandle polled after completion",0x45,
                 &PTR_s__root__cargo_registry_src_index__00ad08f8);
    }
    lVar6 = *(long *)(param_1 + 0x40);
    lVar5 = *(long *)(param_1 + 0x38);
    lVar2 = *(long *)(param_1 + 0x48);
    if (((*param_2 == 0) && (param_2[1] != 0)) && (__ptr = (void *)param_2[2], __ptr != (void *)0x0)
       ) {
      puVar4 = (undefined8 *)param_2[3];
      pcVar3 = (code *)*puVar4;
      if (pcVar3 != (code *)0x0) {
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


// ===== 0055a84c  FUN_0055a84c =====

void FUN_0055a84c(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec();
  if (iVar1 != 0) {
    FUN_0056bd28(param_1);
    return;
  }
  return;
}


// ===== 0055a880  FUN_0055a880 =====

void FUN_0055a880(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec();
  if (iVar1 != 0) {
    FUN_0056be40(param_1);
    return;
  }
  return;
}


// ===== 0055a8b4  thunk_FUN_0056c964 =====

void thunk_FUN_0056c964(long param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined4 auStack_310 [180];
  undefined8 uStack_28;
  
  auVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::
           transition_to_join_handle_dropped();
  if ((auVar2 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
    auStack_310[0] = 2;
    uStack_28 = <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                          (*(undefined8 *)(param_1 + 0x28));
    FUN_0057153c(param_1 + 0x30);
    memcpy((void *)(param_1 + 0x30),auStack_310,0x2d0);
    <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&uStack_28);
  }
  if ((auVar2 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
    iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(param_1);
  }
  else {
    <tokio::runtime::task::core::[6]::tokio::runtime::task::core::Trailer>::set_waker
              (param_1 + 0x300,0);
    iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(param_1);
  }
  if (iVar1 == 0) {
    return;
  }
  FUN_0056bd28(param_1);
  return;
}


// ===== 0055a8b8  thunk_FUN_0056d1d4 =====

void thunk_FUN_0056d1d4(long param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined4 auStack_310 [180];
  undefined8 uStack_28;
  
  auVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::
           transition_to_join_handle_dropped();
  if ((auVar2 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
    auStack_310[0] = 2;
    uStack_28 = <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                          (*(undefined8 *)(param_1 + 0x28));
    FUN_0057153c(param_1 + 0x30);
    memcpy((void *)(param_1 + 0x30),auStack_310,0x2d0);
    <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&uStack_28);
  }
  if ((auVar2 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
    iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(param_1);
  }
  else {
    <tokio::runtime::task::core::[6]::tokio::runtime::task::core::Trailer>::set_waker
              (param_1 + 0x300,0);
    iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(param_1);
  }
  if (iVar1 == 0) {
    return;
  }
  FUN_0056be40(param_1);
  return;
}


// ===== 0055a8bc  thunk_FUN_0056cab8 =====

void thunk_FUN_0056cab8(long param_1)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  undefined ***pppuVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined *puStack_618;
  long lStack_610;
  undefined **ppuStack_608;
  undefined **ppuStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined4 auStack_318 [2];
  undefined8 uStack_310;
  undefined8 uStack_308;
  ulong uStack_300;
  undefined8 uStack_48;
  undefined **ppuStack_28;
  
  bVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_running()
  ;
  if (1 < bVar1) {
    if (bVar1 == 2) {
      return;
    }
    goto LAB_0056cb54;
  }
  if (bVar1 == 0) {
    puStack_618 = PTR_WAKER_VTABLE_00b00d40;
    ppuStack_608 = &puStack_618;
    uStack_5f8 = 0;
    lStack_610 = param_1;
    ppuStack_600 = ppuStack_608;
    uVar3 = FUN_00572764(param_1 + 0x20,&ppuStack_608);
    if ((uVar3 & 1) == 0) {
      uStack_310 = 0;
      uStack_308 = 0;
      auStack_318[0] = 1;
      uStack_300 = uVar3 & 0xffffffff;
      uStack_5e8 = <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                             (*(undefined8 *)(param_1 + 0x28));
      FUN_0057153c(param_1 + 0x30);
      memcpy((void *)(param_1 + 0x30),auStack_318,0x2d0);
      <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&uStack_5e8);
      goto LAB_0056cc3c;
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
LAB_0056cb54:
      FUN_0056bd28(param_1);
      return;
    }
    if (bVar1 == 2) goto LAB_0056cb54;
    auStack_318[0] = 2;
    uStack_48 = <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                          (*(undefined8 *)(param_1 + 0x28));
    FUN_0057153c(param_1 + 0x30);
    memcpy((void *)(param_1 + 0x30),auStack_318,0x2d0);
    <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&uStack_48);
    uStack_5e0 = *(undefined8 *)(param_1 + 0x28);
    uStack_5d8 = 0;
    uStack_5e8 = CONCAT44(uStack_5e8._4_4_,1);
    uStack_5d0 = extraout_x1_00;
    ppuStack_28 = (undefined **)
                  <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                            (uStack_5e0);
    FUN_0057153c(param_1 + 0x30);
    memcpy((void *)(param_1 + 0x30),&uStack_5e8,0x2d0);
    pppuVar4 = &ppuStack_28;
  }
  else {
    auStack_318[0] = 2;
    puStack_618 = (undefined *)
                  <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                            (*(undefined8 *)(param_1 + 0x28));
    FUN_0057153c(param_1 + 0x30);
    memcpy((void *)(param_1 + 0x30),auStack_318,0x2d0);
    <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&puStack_618);
    uStack_5e0 = *(undefined8 *)(param_1 + 0x28);
    uStack_5d8 = 0;
    uStack_5e8 = CONCAT44(uStack_5e8._4_4_,1);
    uStack_5d0 = extraout_x1;
    ppuStack_608 = (undefined **)
                   <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                             (uStack_5e0);
    FUN_0057153c(param_1 + 0x30);
    memcpy((void *)(param_1 + 0x30),&uStack_5e8,0x2d0);
    pppuVar4 = &ppuStack_608;
  }
  <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(pppuVar4);
LAB_0056cc3c:
  FUN_0056cea8(param_1);
  return;
}


// ===== 0055a8c0  thunk_FUN_0056d328 =====

void thunk_FUN_0056d328(long param_1)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  undefined ***pppuVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined *puStack_618;
  long lStack_610;
  undefined **ppuStack_608;
  undefined **ppuStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined4 auStack_318 [2];
  undefined8 uStack_310;
  undefined8 uStack_308;
  ulong uStack_300;
  undefined8 uStack_48;
  undefined **ppuStack_28;
  
  bVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_running()
  ;
  if (1 < bVar1) {
    if (bVar1 == 2) {
      return;
    }
    goto LAB_0056d3c4;
  }
  if (bVar1 == 0) {
    puStack_618 = PTR_WAKER_VTABLE_00b00d40;
    ppuStack_608 = &puStack_618;
    uStack_5f8 = 0;
    lStack_610 = param_1;
    ppuStack_600 = ppuStack_608;
    uVar3 = FUN_00572764(param_1 + 0x20,&ppuStack_608);
    if ((uVar3 & 1) == 0) {
      uStack_310 = 0;
      uStack_308 = 0;
      auStack_318[0] = 1;
      uStack_300 = uVar3 & 0xffffffff;
      uStack_5e8 = <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                             (*(undefined8 *)(param_1 + 0x28));
      FUN_0057153c(param_1 + 0x30);
      memcpy((void *)(param_1 + 0x30),auStack_318,0x2d0);
      <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&uStack_5e8);
      goto LAB_0056d4ac;
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
LAB_0056d3c4:
      FUN_0056be40(param_1);
      return;
    }
    if (bVar1 == 2) goto LAB_0056d3c4;
    auStack_318[0] = 2;
    uStack_48 = <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                          (*(undefined8 *)(param_1 + 0x28));
    FUN_0057153c(param_1 + 0x30);
    memcpy((void *)(param_1 + 0x30),auStack_318,0x2d0);
    <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&uStack_48);
    uStack_5e0 = *(undefined8 *)(param_1 + 0x28);
    uStack_5d8 = 0;
    uStack_5e8 = CONCAT44(uStack_5e8._4_4_,1);
    uStack_5d0 = extraout_x1_00;
    ppuStack_28 = (undefined **)
                  <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                            (uStack_5e0);
    FUN_0057153c(param_1 + 0x30);
    memcpy((void *)(param_1 + 0x30),&uStack_5e8,0x2d0);
    pppuVar4 = &ppuStack_28;
  }
  else {
    auStack_318[0] = 2;
    puStack_618 = (undefined *)
                  <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                            (*(undefined8 *)(param_1 + 0x28));
    FUN_0057153c(param_1 + 0x30);
    memcpy((void *)(param_1 + 0x30),auStack_318,0x2d0);
    <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&puStack_618);
    uStack_5e0 = *(undefined8 *)(param_1 + 0x28);
    uStack_5d8 = 0;
    uStack_5e8 = CONCAT44(uStack_5e8._4_4_,1);
    uStack_5d0 = extraout_x1;
    ppuStack_608 = (undefined **)
                   <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                             (uStack_5e0);
    FUN_0057153c(param_1 + 0x30);
    memcpy((void *)(param_1 + 0x30),&uStack_5e8,0x2d0);
    pppuVar4 = &ppuStack_608;
  }
  <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(pppuVar4);
LAB_0056d4ac:
  FUN_0056d718(param_1);
  return;
}


// ===== 0055a8c4  FUN_0055a8c4 =====

void FUN_0055a8c4(void *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)((long)param_1 + 0x20);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 0055a8f0 to 0055a8f3 has its CatchHandler @ 0055a96c */
    <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>>::
    drop_slow();
  }
                    /* try { // try from 0055a8f4 to 0055a8fb has its CatchHandler @ 0055a9b4 */
  FUN_00559ee0((long)param_1 + 0x30);
  if (*(long *)((long)param_1 + 0x310) != 0) {
                    /* try { // try from 0055a90c to 0055a90f has its CatchHandler @ 0055a980 */
    (**(code **)(*(long *)((long)param_1 + 0x310) + 0x18))(*(undefined8 *)((long)param_1 + 0x318));
  }
  plVar3 = *(long **)((long)param_1 + 800);
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
                    /* try { // try from 0055a930 to 0055a937 has its CatchHandler @ 0055a950 */
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow((long)param_1 + 800);
    }
  }
  free(param_1);
  return;
}


// ===== 0055a9dc  FUN_0055a9dc =====

void FUN_0055a9dc(void *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)((long)param_1 + 0x20);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 0055aa08 to 0055aa0b has its CatchHandler @ 0055aa84 */
    <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>>::
    drop_slow();
  }
                    /* try { // try from 0055aa0c to 0055aa13 has its CatchHandler @ 0055aacc */
  FUN_00559ee0((long)param_1 + 0x30);
  if (*(long *)((long)param_1 + 0x310) != 0) {
                    /* try { // try from 0055aa24 to 0055aa27 has its CatchHandler @ 0055aa98 */
    (**(code **)(*(long *)((long)param_1 + 0x310) + 0x18))(*(undefined8 *)((long)param_1 + 0x318));
  }
  plVar3 = *(long **)((long)param_1 + 800);
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
                    /* try { // try from 0055aa48 to 0055aa4f has its CatchHandler @ 0055aa68 */
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow((long)param_1 + 800);
    }
  }
  free(param_1);
  return;
}


// ===== 0055aaf4  FUN_0055aaf4 =====

void FUN_0055aaf4(long param_1)

{
  <alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>as_tokio::runtime::task::Schedule>
  ::schedule(param_1 + *(long *)(*(long *)(param_1 + 0x10) + 0x40),param_1);
  return;
}


// ===== 0055ab08  FUN_0055ab08 =====

void FUN_0055ab08(long param_1)

{
  <alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>as_tokio::runtime::task::Schedule>
  ::schedule(param_1 + *(long *)(*(long *)(param_1 + 0x10) + 0x40),param_1);
  return;
}


// ===== 0055ab1c  thunk_FUN_0056d074 =====

void thunk_FUN_0056d074(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 extraout_x1;
  undefined4 auStack_5d8 [2];
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined4 auStack_308 [180];
  undefined8 uStack_38;
  undefined8 uStack_18;
  
  uVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_shutdown
                    ();
  if ((uVar2 & 1) == 0) {
    iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(param_1);
    if (iVar1 != 0) {
      FUN_0056bd28(param_1);
      return;
    }
  }
  else {
    auStack_308[0] = 2;
    uStack_38 = <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                          (*(undefined8 *)(param_1 + 0x28));
    FUN_0057153c(param_1 + 0x30);
    memcpy((void *)(param_1 + 0x30),auStack_308,0x2d0);
    <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&uStack_38);
    uStack_5d0 = *(undefined8 *)(param_1 + 0x28);
    uStack_5c8 = 0;
    auStack_5d8[0] = 1;
    uStack_5c0 = extraout_x1;
    uStack_18 = <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                          (uStack_5d0);
    FUN_0057153c(param_1 + 0x30);
    memcpy((void *)(param_1 + 0x30),auStack_5d8,0x2d0);
    <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&uStack_18);
    FUN_0056cea8(param_1);
  }
  return;
}


// ===== 0055ab20  thunk_FUN_0056d8e4 =====

void thunk_FUN_0056d8e4(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 extraout_x1;
  undefined4 auStack_5d8 [2];
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined4 auStack_308 [180];
  undefined8 uStack_38;
  undefined8 uStack_18;
  
  uVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_shutdown
                    ();
  if ((uVar2 & 1) == 0) {
    iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(param_1);
    if (iVar1 != 0) {
      FUN_0056be40(param_1);
      return;
    }
  }
  else {
    auStack_308[0] = 2;
    uStack_38 = <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                          (*(undefined8 *)(param_1 + 0x28));
    FUN_0057153c(param_1 + 0x30);
    memcpy((void *)(param_1 + 0x30),auStack_308,0x2d0);
    <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&uStack_38);
    uStack_5d0 = *(undefined8 *)(param_1 + 0x28);
    uStack_5c8 = 0;
    auStack_5d8[0] = 1;
    uStack_5c0 = extraout_x1;
    uStack_18 = <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                          (uStack_5d0);
    FUN_0057153c(param_1 + 0x30);
    memcpy((void *)(param_1 + 0x30),auStack_5d8,0x2d0);
    <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&uStack_18);
    FUN_0056d718(param_1);
  }
  return;
}


// ===== 0055ab24  FUN_0055ab24 =====

void FUN_0055ab24(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  size_t sVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  
  uVar13 = *(ulong *)(param_1 + 0x10);
  uVar9 = *(ulong *)(param_1 + 0x28);
  sVar7 = uVar9;
  if (uVar13 <= uVar9) {
    sVar7 = uVar13;
  }
  iVar12 = memcmp(*(void **)(param_1 + 0x20),*(void **)(param_1 + 8),sVar7);
  uVar10 = *(ulong *)(param_1 + 0x40);
  uVar11 = *(ulong *)(param_1 + 0x58);
  uVar9 = uVar9 - uVar13;
  if (iVar12 != 0) {
    uVar9 = (long)iVar12;
  }
  sVar7 = uVar11;
  if (uVar10 <= uVar11) {
    sVar7 = uVar10;
  }
  iVar12 = memcmp(*(void **)(param_1 + 0x50),*(void **)(param_1 + 0x38),sVar7);
  lVar8 = uVar11 - uVar10;
  if (iVar12 != 0) {
    lVar8 = (long)iVar12;
  }
  puVar15 = (undefined8 *)(param_1 + ((long)uVar9 >> 0x3f) * -0x18);
  lVar3 = 0x48;
  if (-1 < lVar8) {
    lVar3 = 0x30;
  }
  lVar4 = 0x30;
  if (-1 < lVar8) {
    lVar4 = 0x48;
  }
  puVar1 = (undefined8 *)(param_1 + lVar3);
  uVar13 = puVar15[2];
  uVar10 = puVar1[2];
  puVar16 = (undefined8 *)(param_1 + ((long)~uVar9 >> 0x3f) * -0x18);
  puVar2 = (undefined8 *)(param_1 + lVar4);
  sVar7 = uVar10;
  if (uVar13 <= uVar10) {
    sVar7 = uVar13;
  }
  iVar12 = memcmp((void *)puVar1[1],(void *)puVar15[1],sVar7);
  uVar9 = puVar16[2];
  uVar11 = puVar2[2];
  lVar8 = uVar10 - uVar13;
  if (iVar12 != 0) {
    lVar8 = (long)iVar12;
  }
  sVar7 = uVar11;
  if (uVar9 <= uVar11) {
    sVar7 = uVar9;
  }
  iVar12 = memcmp((void *)puVar2[1],(void *)puVar16[1],sVar7);
  lVar3 = uVar11 - uVar9;
  if (iVar12 != 0) {
    lVar3 = (long)iVar12;
  }
  puVar5 = puVar1;
  if (-1 < lVar3) {
    puVar5 = puVar16;
  }
  puVar6 = puVar16;
  if (-1 < lVar8) {
    puVar6 = puVar1;
    puVar1 = puVar15;
    puVar15 = puVar5;
  }
  uVar9 = puVar15[2];
  if (-1 < lVar3) {
    puVar16 = puVar2;
    puVar2 = puVar6;
  }
  uVar13 = puVar2[2];
  sVar7 = uVar13;
  if (uVar9 <= uVar13) {
    sVar7 = uVar9;
  }
  iVar12 = memcmp((void *)puVar2[1],(void *)puVar15[1],sVar7);
  uVar17 = puVar1[1];
  uVar14 = *puVar1;
  lVar8 = uVar13 - uVar9;
  if (iVar12 != 0) {
    lVar8 = (long)iVar12;
  }
  param_2[2] = puVar1[2];
  param_2[1] = uVar17;
  *param_2 = uVar14;
  puVar1 = puVar15;
  if (-1 < lVar8) {
    puVar1 = puVar2;
    puVar2 = puVar15;
  }
  uVar17 = *puVar2;
  uVar14 = puVar2[2];
  param_2[4] = puVar2[1];
  param_2[3] = uVar17;
  param_2[5] = uVar14;
  uVar17 = *puVar1;
  uVar14 = puVar1[2];
  param_2[7] = puVar1[1];
  param_2[6] = uVar17;
  param_2[8] = uVar14;
  uVar17 = *puVar16;
  uVar14 = puVar16[2];
  param_2[10] = puVar16[1];
  param_2[9] = uVar17;
  param_2[0xb] = uVar14;
  return;
}


// ===== 0055acac  FUN_0055acac =====

void FUN_0055acac(undefined8 *param_1,ulong param_2,ulong param_3)

{
  undefined8 *puVar1;
  size_t sVar2;
  long lVar3;
  void *__s1;
  ulong uVar4;
  ulong uVar5;
  code *pcVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  
  if (param_2 <= param_3 - 1) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x55adac);
    (*pcVar6)();
  }
  if (param_3 != param_2) {
    lVar9 = param_3 * 0x18;
    puVar10 = param_1 + param_3 * 3;
    do {
      uVar4 = puVar10[-1];
      __s1 = (void *)puVar10[1];
      uVar5 = puVar10[2];
      sVar2 = uVar5;
      if (uVar4 <= uVar5) {
        sVar2 = uVar4;
      }
      iVar7 = memcmp(__s1,(void *)puVar10[-2],sVar2);
      lVar12 = uVar5 - uVar4;
      if (iVar7 != 0) {
        lVar12 = (long)iVar7;
      }
      if (lVar12 < 0) {
        uVar11 = *puVar10;
        lVar12 = lVar9;
        do {
          puVar1 = (undefined8 *)((long)param_1 + lVar12);
          lVar12 = lVar12 + -0x18;
          puVar1[1] = puVar1[-2];
          *puVar1 = puVar1[-3];
          puVar1[2] = puVar1[-1];
          puVar8 = param_1;
          if (lVar12 == 0) goto LAB_0055acfc;
          uVar4 = puVar1[-4];
          sVar2 = uVar5;
          if (uVar4 <= uVar5) {
            sVar2 = uVar4;
          }
          iVar7 = memcmp(__s1,(void *)puVar1[-5],sVar2);
          lVar3 = uVar5 - uVar4;
          if (iVar7 != 0) {
            lVar3 = (long)iVar7;
          }
        } while (lVar3 < 0);
        puVar8 = (undefined8 *)((long)param_1 + lVar12);
LAB_0055acfc:
        *puVar8 = uVar11;
        puVar1[-2] = __s1;
        puVar1[-1] = uVar5;
      }
      puVar10 = puVar10 + 3;
      lVar9 = lVar9 + 0x18;
    } while (puVar10 != param_1 + param_2 * 3);
  }
  return;
}


// ===== 0055adac  FUN_0055adac =====

void FUN_0055adac(undefined8 *param_1,ulong param_2,undefined8 *param_3,ulong param_4)

{
  size_t sVar1;
  long lVar2;
  void *__s1;
  ulong uVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  void *pvVar18;
  ulong uVar19;
  undefined8 *puVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  
  if (1 < param_2) {
    if (param_4 < param_2 + 0x10) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x55b188);
      (*pcVar5)();
    }
    uVar15 = param_2 >> 1;
    puVar17 = param_1 + uVar15 * 3;
    puVar11 = param_3 + uVar15 * 3;
    if (param_2 < 8) {
      uVar23 = param_1[1];
      uVar22 = *param_1;
      uVar25 = puVar17[1];
      uVar24 = *puVar17;
      uVar16 = puVar17[2];
      param_3[2] = param_1[2];
      uVar8 = 1;
      param_3[1] = uVar23;
      *param_3 = uVar22;
      puVar11[1] = uVar25;
      *puVar11 = uVar24;
      puVar11[2] = uVar16;
    }
    else {
      FUN_0055ab24(param_1,param_3);
      FUN_0055ab24(puVar17,puVar11);
      uVar8 = 4;
    }
    if (uVar8 < uVar15) {
      lVar14 = uVar8 * 0x18;
      uVar19 = uVar8;
      do {
        puVar13 = param_1 + uVar19 * 3;
        puVar9 = param_3 + uVar19 * 3;
        uVar16 = *puVar13;
        uVar3 = puVar9[-1];
        uVar21 = puVar13[2];
        puVar9[1] = puVar13[1];
        *puVar9 = uVar16;
        pvVar18 = (void *)puVar9[1];
        puVar9[2] = uVar21;
        sVar1 = uVar21;
        if (uVar3 <= uVar21) {
          sVar1 = uVar3;
        }
        iVar7 = memcmp(pvVar18,(void *)puVar9[-2],sVar1);
        lVar12 = uVar21 - uVar3;
        if (iVar7 != 0) {
          lVar12 = (long)iVar7;
        }
        if (lVar12 < 0) {
          uVar16 = *puVar9;
          lVar12 = lVar14;
          do {
            puVar13 = (undefined8 *)((long)param_3 + lVar12);
            lVar12 = lVar12 + -0x18;
            puVar13[1] = puVar13[-2];
            *puVar13 = puVar13[-3];
            puVar13[2] = puVar13[-1];
            puVar9 = param_3;
            if (lVar12 == 0) goto LAB_0055ae8c;
            uVar3 = puVar13[-4];
            sVar1 = uVar21;
            if (uVar3 <= uVar21) {
              sVar1 = uVar3;
            }
            iVar7 = memcmp(pvVar18,(void *)puVar13[-5],sVar1);
            lVar2 = uVar21 - uVar3;
            if (iVar7 != 0) {
              lVar2 = (long)iVar7;
            }
          } while (lVar2 < 0);
          puVar9 = (undefined8 *)((long)param_3 + lVar12);
LAB_0055ae8c:
          *puVar9 = uVar16;
          puVar13[-2] = pvVar18;
          puVar13[-1] = uVar21;
        }
        uVar19 = uVar19 + 1;
        lVar14 = lVar14 + 0x18;
      } while (uVar19 != uVar15);
    }
    if (uVar8 < param_2 - uVar15) {
      lVar14 = 0x18;
      puVar13 = puVar11;
      uVar19 = uVar8;
      do {
        puVar9 = puVar17 + uVar19 * 3;
        puVar20 = puVar11 + uVar19 * 3;
        uVar16 = *puVar9;
        uVar3 = puVar20[-1];
        uVar21 = puVar9[2];
        puVar20[1] = puVar9[1];
        *puVar20 = uVar16;
        pvVar18 = (void *)puVar20[1];
        puVar20[2] = uVar21;
        sVar1 = uVar21;
        if (uVar3 <= uVar21) {
          sVar1 = uVar3;
        }
        iVar7 = memcmp(pvVar18,(void *)puVar20[-2],sVar1);
        lVar12 = uVar21 - uVar3;
        if (iVar7 != 0) {
          lVar12 = (long)iVar7;
        }
        if (lVar12 < 0) {
          uVar16 = *puVar20;
          puVar9 = puVar13;
          lVar12 = lVar14;
          do {
            puVar20 = puVar9 + uVar8 * 3;
            puVar20[1] = puVar20[-2];
            *puVar20 = puVar20[-3];
            puVar20[2] = puVar20[-1];
            puVar10 = puVar11;
            if (uVar8 * 0x18 - lVar12 == 0) goto LAB_0055af70;
            uVar3 = puVar20[-4];
            sVar1 = uVar21;
            if (uVar3 <= uVar21) {
              sVar1 = uVar3;
            }
            iVar7 = memcmp(pvVar18,(void *)puVar20[-5],sVar1);
            puVar9 = puVar9 + -3;
            lVar12 = lVar12 + 0x18;
            lVar2 = uVar21 - uVar3;
            if (iVar7 != 0) {
              lVar2 = (long)iVar7;
            }
          } while (lVar2 < 0);
          puVar10 = puVar9 + uVar8 * 3;
LAB_0055af70:
          *puVar10 = uVar16;
          puVar20[-2] = pvVar18;
          puVar20[-1] = uVar21;
        }
        uVar19 = uVar19 + 1;
        puVar13 = puVar13 + 3;
        lVar14 = lVar14 + -0x18;
      } while (uVar19 != param_2 - uVar15);
    }
    puVar9 = puVar11 + -3;
    lVar14 = param_2 * 0x18;
    puVar17 = param_3 + param_2 * 3 + -3;
    puVar13 = param_1;
    do {
      puVar20 = puVar13;
      lVar14 = lVar14 + -0x18;
      uVar8 = param_3[2];
      uVar19 = puVar11[2];
      puVar13 = (undefined8 *)((long)param_1 + lVar14);
      sVar1 = uVar19;
      if (uVar8 <= uVar19) {
        sVar1 = uVar8;
      }
      iVar7 = memcmp((void *)puVar11[1],(void *)param_3[1],sVar1);
      pvVar18 = (void *)puVar9[1];
      uVar3 = puVar9[2];
      lVar12 = uVar19 - uVar8;
      if (iVar7 != 0) {
        lVar12 = (long)iVar7;
      }
      __s1 = (void *)puVar17[1];
      uVar8 = puVar17[2];
      puVar10 = param_3;
      if (lVar12 == -1 || lVar12 + 1 < 0 != SCARRY8(lVar12,1)) {
        puVar10 = puVar11;
      }
      uVar22 = puVar10[1];
      uVar16 = *puVar10;
      puVar11 = puVar11 + (lVar12 >> 0x3f) * -3;
      sVar1 = uVar8;
      if (uVar3 <= uVar8) {
        sVar1 = uVar3;
      }
      param_3 = param_3 + (ulong)((uint)((ulong)lVar12 >> 0x3f) ^ 1) * 3;
      puVar20[2] = puVar10[2];
      puVar20[1] = uVar22;
      *puVar20 = uVar16;
      iVar7 = memcmp(__s1,pvVar18,sVar1);
      uVar15 = uVar15 - 1;
      lVar12 = uVar8 - uVar3;
      if (iVar7 != 0) {
        lVar12 = (long)iVar7;
      }
      puVar10 = puVar17;
      if (lVar12 == -1 || lVar12 + 1 < 0 != SCARRY8(lVar12,1)) {
        puVar10 = puVar9;
      }
      uVar4 = (uint)(lVar12 >> 0x3f);
      puVar9 = puVar9 + (long)(int)uVar4 * 3;
      uVar22 = *puVar10;
      puVar17 = puVar17 + (long)(int)~uVar4 * 3;
      uVar16 = puVar10[2];
      puVar13[1] = puVar10[1];
      *puVar13 = uVar22;
      puVar13[2] = uVar16;
      puVar13 = puVar20 + 3;
    } while (uVar15 != 0);
    if ((param_2 & 1) != 0) {
      bVar6 = puVar9 + 3 <= param_3;
      puVar13 = param_3;
      if (bVar6) {
        puVar13 = puVar11;
      }
      param_3 = param_3 + (ulong)!bVar6 * 3;
      uVar22 = *puVar13;
      uVar16 = puVar13[2];
      puVar11 = puVar11 + (ulong)bVar6 * 3;
      puVar20[4] = puVar13[1];
      puVar20[3] = uVar22;
      puVar20[5] = uVar16;
    }
    if ((param_3 != puVar9 + 3) || (puVar11 != puVar17 + 3)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0055b180 to 0055b183 has its CatchHandler @ 0055b188 */
      core::slice::sort::shared::smallsort::panic_on_ord_violation();
    }
  }
  return;
}


// ===== 0055b1a8  FUN_0055b1a8 =====

void FUN_0055b1a8(undefined8 *param_1)

{
  <std::path::PathBuf_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 0055b1b0  FUN_0055b1b0 =====

void FUN_0055b1b0(undefined8 *param_1,long *param_2,ulong param_3,void *param_4,size_t param_5)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  undefined1 uVar7;
  ulong uVar8;
  byte bVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  lVar3 = *param_2;
  uVar4 = param_2[1];
  bVar9 = (byte)(param_3 >> 0x39);
  uVar11 = CONCAT17(bVar9,CONCAT16(bVar9,CONCAT15(bVar9,CONCAT14(bVar9,CONCAT13(bVar9,CONCAT12(bVar9
                                                  ,CONCAT11(bVar9,bVar9)))))));
  lVar6 = 0;
  param_3 = param_3 & uVar4;
  uVar17 = *(undefined8 *)(lVar3 + param_3);
  uVar10 = NEON_cmeq(uVar17,uVar11,1);
  uVar10 = uVar10 & 0x8080808080808080;
  while( true ) {
    for (; uVar10 == 0; uVar10 = uVar10 & 0x8080808080808080) {
      uVar17 = NEON_cmeq(uVar17,0xffffffffffffffff,1);
      bVar9 = NEON_umaxv(uVar17,1);
      if ((bVar9 & 1) != 0) {
        *param_1 = 0xffffffffffffffff;
        return;
      }
      lVar6 = lVar6 + 8;
      param_3 = param_3 + lVar6 & uVar4;
      uVar17 = *(undefined8 *)(lVar3 + param_3);
      uVar10 = NEON_cmeq(uVar17,uVar11,1);
    }
    uVar8 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
    uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
    uVar8 = param_3 + ((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3) & uVar4;
    lVar1 = lVar3 + uVar8 * -0x38;
    if ((param_5 == *(size_t *)(lVar1 + -0x28)) &&
       (iVar5 = memcmp(param_4,*(void **)(lVar1 + -0x30),param_5), iVar5 == 0)) break;
    uVar10 = uVar10 - 1 & uVar10;
  }
  lVar6 = ((long)(uVar8 * 0x38) >> 3) * 0x6db6db6db6db6db7;
  uVar10 = NEON_cmeq(*(undefined8 *)(lVar3 + lVar6),0xffffffffffffffff,1);
  puVar2 = (undefined8 *)(lVar3 + (lVar6 - 8U & uVar4));
  uVar17 = NEON_cmeq(*puVar2,0xffffffffffffffff,1);
  uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
  uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
  uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
  uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
  if (((ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3) + ((ulong)LZCOUNT(uVar17) >> 3) < 8) {
    param_2[2] = param_2[2] + 1;
    uVar7 = 0xff;
  }
  else {
    uVar7 = 0x80;
  }
  *(undefined1 *)(lVar3 + lVar6) = uVar7;
  lVar6 = param_2[3];
  *(undefined1 *)(puVar2 + 1) = uVar7;
  uVar12 = *(undefined8 *)(lVar1 + -0x30);
  uVar11 = *(undefined8 *)(lVar1 + -0x38);
  uVar14 = *(undefined8 *)(lVar1 + -0x20);
  uVar13 = *(undefined8 *)(lVar1 + -0x28);
  param_2[3] = lVar6 + -1;
  uVar16 = *(undefined8 *)(lVar1 + -0x10);
  uVar15 = *(undefined8 *)(lVar1 + -0x18);
  uVar17 = *(undefined8 *)(lVar1 + -8);
  param_1[1] = uVar12;
  *param_1 = uVar11;
  param_1[3] = uVar14;
  param_1[2] = uVar13;
  param_1[5] = uVar16;
  param_1[4] = uVar15;
  param_1[6] = uVar17;
  return;
}


// ===== 0055b378  <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(alloc[c1f8e832b0d782c7]::string::String,flux[2406cd06d16b4816]::persistence::schema::ExistingColumnInfo)>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<alloc[c1f8e832b0d782c7]::string::String,flux[2406cd06d16b4816]::persistence::schema::ExistingColumnInfo,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::{closure#0}> =====

/* <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(alloc[c1f8e832b0d782c7]::string::String,
   flux[2406cd06d16b4816]::persistence::schema::ExistingColumnInfo)>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<alloc[c1f8e832b0d782c7]::string::String,
   flux[2406cd06d16b4816]::persistence::schema::ExistingColumnInfo,
   core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::{closure#0}>
    */

undefined8
<hashbrown[32fc5d502e7f9af5]::raw::RawTable<(alloc[c1f8e832b0d782c7]::string::String,flux[2406cd06d16b4816]::persistence::schema::ExistingColumnInfo)>>
::reserve_rehash::
<hashbrown[32fc5d502e7f9af5]::map::make_hasher<alloc[c1f8e832b0d782c7]::string::String,flux[2406cd06d16b4816]::persistence::schema::ExistingColumnInfo,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::_closure_0_>
          (long *param_1,ulong param_2,undefined8 param_3,undefined4 param_4)

{
  ulong uVar1;
  undefined8 *__s;
  ulong uVar2;
  undefined1 auVar3 [16];
  byte bVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong *puVar7;
  ulong *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 local_60;
  undefined1 *puStack_58;
  
  puStack_58 = (undefined1 *)&local_60;
  uVar19 = param_1[3];
  uVar21 = uVar19 + param_2;
  local_60 = param_3;
  if (!CARRY8(uVar19,param_2)) {
    uVar20 = param_1[1];
    uVar14 = uVar20;
    if (7 < uVar20) {
      uVar14 = (uVar20 + 1 >> 3) * 7;
    }
    if (uVar21 <= uVar14 >> 1) {
      FUN_0055db9c(param_1,&puStack_58,FUN_0055d8f4,0x38,FUN_0055e7ec);
      return 0xffffffffffffffff;
    }
    if (uVar21 < uVar14 + 1) {
      uVar21 = uVar14 + 1;
    }
    if (uVar21 < 0xf) {
      uVar14 = 4;
      if (3 < uVar21) {
        uVar14 = (uVar21 & 8) + 8;
      }
    }
    else {
      if (uVar21 >> 0x3d != 0) goto LAB_0055b674;
      uVar14 = (0xffffffffffffffffU >> (LZCOUNT((uVar21 * 8) / 7 - 1) & 0x3fU)) + 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar14;
    if (SUB168(auVar3 * ZEXT816(0x38),8) == 0) {
      uVar21 = uVar14 + 8;
      uVar18 = uVar14 * 0x38;
      uVar1 = uVar18 + uVar21;
      if ((!CARRY8(uVar18,uVar21)) && (uVar1 < 0x7ffffffffffffff9)) {
        puStack_58 = (undefined1 *)&local_60;
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        lVar6 = FUN_004b25a4(uVar1,8);
        if (lVar6 == 0) {
          uVar9 = <hashbrown::raw::hashbrown::raw::Fallibility>::alloc_err(param_4,8,uVar1);
          return uVar9;
        }
        __s = (undefined8 *)(lVar6 + uVar18);
        uVar18 = uVar14 - 1;
        uVar1 = uVar18;
        if (8 < uVar14) {
          uVar1 = (uVar14 >> 3) * 7;
        }
        memset(__s,0xff,uVar21);
        if (uVar19 == 0) {
          puVar13 = (undefined8 *)*param_1;
        }
        else {
          puVar13 = (undefined8 *)*param_1;
          lVar6 = 0;
          uVar21 = NEON_cmge(*puVar13,0,1);
          uVar21 = uVar21 & 0x8080808080808080;
          puVar5 = puVar13;
          uVar14 = uVar19;
          do {
            for (; uVar21 == 0; uVar21 = uVar21 & 0x8080808080808080) {
              lVar6 = lVar6 + 8;
              uVar21 = NEON_cmge(puVar5[1],0,1);
              puVar5 = puVar5 + 1;
            }
            uVar2 = (uVar21 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar21 >> 7 & 0xff00ff00ff00ff) << 8;
            uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
            uVar2 = lVar6 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3);
            puVar7 = (ulong *)puVar13[uVar2 * -7 + -6];
            uVar16 = puVar13[uVar2 * -7 + -5];
            if (uVar16 < 8) {
              uVar10 = 0;
            }
            else {
              uVar10 = 0;
              puVar8 = puVar7;
              do {
                puVar7 = puVar8 + 1;
                uVar16 = uVar16 - 8;
                uVar10 = (*puVar8 ^ (uVar10 >> 0x3b | uVar10 << 5)) * 0x517cc1b727220a95;
                puVar8 = puVar7;
              } while (7 < uVar16);
            }
            puVar8 = puVar7;
            if (3 < uVar16) {
              puVar8 = (ulong *)((long)puVar7 + 4);
              uVar16 = uVar16 - 4;
              uVar10 = ((ulong)(uint)*puVar7 ^ (uVar10 >> 0x3b | uVar10 << 5)) * 0x517cc1b727220a95;
            }
            for (; uVar16 != 0; uVar16 = uVar16 - 1) {
              uVar10 = ((ulong)(byte)*puVar8 ^ (uVar10 >> 0x3b | uVar10 << 5)) * 0x517cc1b727220a95;
              puVar8 = (ulong *)((long)puVar8 + 1);
            }
            uVar17 = ((uVar10 >> 0x3b | uVar10 << 5) ^ 0xff) * 0x517cc1b727220a95;
            uVar16 = uVar17 & uVar18;
            uVar10 = NEON_cmlt(*(undefined8 *)((long)__s + uVar16),0,1);
            if (uVar10 == 0) {
              lVar11 = 8;
              do {
                uVar16 = uVar16 + lVar11;
                lVar11 = lVar11 + 8;
                uVar16 = uVar16 & uVar18;
                uVar10 = NEON_cmlt(*(undefined8 *)((long)__s + uVar16),0,1);
              } while (uVar10 == 0);
            }
            uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
            uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
            uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
            uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
            uVar16 = uVar16 + ((ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3) & uVar18;
            if (-1 < *(char *)((long)__s + uVar16)) {
              uVar16 = NEON_cmlt(*__s,0,1);
              uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
              uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
              uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
              uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
              uVar16 = (ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3;
            }
            puVar15 = puVar13 + ~uVar2 * 7;
            bVar4 = (byte)(uVar17 >> 0x38);
            *(byte *)((long)__s + uVar16) = bVar4 >> 1;
            uVar14 = uVar14 - 1;
            puVar12 = __s + ~uVar16 * 7;
            *(byte *)((long)__s + (uVar16 - 8 & uVar18) + 8) = bVar4 >> 1;
            uVar26 = puVar15[3];
            uVar25 = puVar15[2];
            uVar22 = puVar15[5];
            uVar9 = puVar15[4];
            uVar24 = puVar15[1];
            uVar23 = *puVar15;
            uVar21 = uVar21 - 1 & uVar21;
            puVar12[6] = puVar15[6];
            puVar12[3] = uVar26;
            puVar12[2] = uVar25;
            puVar12[5] = uVar22;
            puVar12[4] = uVar9;
            puVar12[1] = uVar24;
            *puVar12 = uVar23;
          } while (uVar14 != 0);
        }
        *param_1 = (long)__s;
        param_1[1] = uVar18;
        param_1[2] = uVar1 - uVar19;
        param_1[3] = uVar19;
        if (uVar20 == 0) {
          return 0xffffffffffffffff;
        }
        lVar6 = uVar20 * 0x38 + 0x38;
        if (uVar20 + lVar6 == -9) {
          return 0xffffffffffffffff;
        }
        free((void *)((long)puVar13 - lVar6));
        return 0xffffffffffffffff;
      }
    }
  }
LAB_0055b674:
  puStack_58 = (undefined1 *)&local_60;
  uVar9 = <hashbrown::raw::hashbrown::raw::Fallibility>::capacity_overflow(param_4);
  return uVar9;
}


// ===== 0055b6f0  <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(alloc[c1f8e832b0d782c7]::string::String,())>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<alloc[c1f8e832b0d782c7]::string::String, =====

/* <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(alloc[c1f8e832b0d782c7]::string::String,
   ())>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<alloc[c1f8e832b0d782c7]::string::String,
   (), 
   core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::{closure#0}>
    */

undefined8
<hashbrown[32fc5d502e7f9af5]::raw::RawTable<(alloc[c1f8e832b0d782c7]::string::String,())>>::
reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<alloc[c1f8e832b0d782c7]::string::
String_(void)

{
  ulong uVar1;
  undefined8 *__s;
  ulong uVar2;
  undefined1 auVar3 [16];
  byte bVar4;
  undefined8 *puVar5;
  long *in_x0;
  long lVar6;
  ulong *puVar7;
  ulong *puVar8;
  undefined8 uVar9;
  ulong in_x1;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined4 in_w3;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined1 local_60 [8];
  undefined1 *puStack_58;
  
  puStack_58 = local_60;
  uVar18 = in_x0[3];
  uVar21 = uVar18 + in_x1;
  if (!CARRY8(uVar18,in_x1)) {
    uVar19 = in_x0[1];
    uVar14 = uVar19;
    if (7 < uVar19) {
      uVar14 = (uVar19 + 1 >> 3) * 7;
    }
    if (uVar21 <= uVar14 >> 1) {
      FUN_0055db9c(in_x0,&puStack_58,FUN_0055d97c,0x18,FUN_0055e838);
      return 0xffffffffffffffff;
    }
    if (uVar21 < uVar14 + 1) {
      uVar21 = uVar14 + 1;
    }
    if (uVar21 < 0xf) {
      uVar14 = 4;
      if (3 < uVar21) {
        uVar14 = (uVar21 & 8) + 8;
      }
    }
    else {
      if (uVar21 >> 0x3d != 0) goto LAB_0055b9e4;
      uVar14 = (0xffffffffffffffffU >> (LZCOUNT((uVar21 * 8) / 7 - 1) & 0x3fU)) + 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar14;
    if (SUB168(auVar3 * ZEXT816(0x18),8) == 0) {
      uVar21 = uVar14 + 8;
      uVar20 = uVar14 * 0x18;
      uVar1 = uVar20 + uVar21;
      if ((!CARRY8(uVar20,uVar21)) && (uVar1 < 0x7ffffffffffffff9)) {
        puStack_58 = local_60;
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        lVar6 = FUN_004b25a4(uVar1,8);
        if (lVar6 == 0) {
          uVar9 = <hashbrown::raw::hashbrown::raw::Fallibility>::alloc_err(in_w3,8,uVar1);
          return uVar9;
        }
        __s = (undefined8 *)(lVar6 + uVar20);
        uVar20 = uVar14 - 1;
        uVar1 = uVar20;
        if (8 < uVar14) {
          uVar1 = (uVar14 >> 3) * 7;
        }
        memset(__s,0xff,uVar21);
        if (uVar18 == 0) {
          puVar13 = (undefined8 *)*in_x0;
        }
        else {
          puVar13 = (undefined8 *)*in_x0;
          lVar6 = 0;
          uVar21 = NEON_cmge(*puVar13,0,1);
          uVar21 = uVar21 & 0x8080808080808080;
          puVar5 = puVar13;
          uVar14 = uVar18;
          do {
            for (; uVar21 == 0; uVar21 = uVar21 & 0x8080808080808080) {
              lVar6 = lVar6 + 8;
              uVar21 = NEON_cmge(puVar5[1],0,1);
              puVar5 = puVar5 + 1;
            }
            uVar2 = (uVar21 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar21 >> 7 & 0xff00ff00ff00ff) << 8;
            uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
            uVar2 = lVar6 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3);
            puVar7 = (ulong *)puVar13[uVar2 * -3 + -2];
            uVar16 = puVar13[uVar2 * -3 + -1];
            if (uVar16 < 8) {
              uVar10 = 0;
            }
            else {
              uVar10 = 0;
              puVar8 = puVar7;
              do {
                puVar7 = puVar8 + 1;
                uVar16 = uVar16 - 8;
                uVar10 = (*puVar8 ^ (uVar10 >> 0x3b | uVar10 << 5)) * 0x517cc1b727220a95;
                puVar8 = puVar7;
              } while (7 < uVar16);
            }
            puVar8 = puVar7;
            if (3 < uVar16) {
              puVar8 = (ulong *)((long)puVar7 + 4);
              uVar16 = uVar16 - 4;
              uVar10 = ((ulong)(uint)*puVar7 ^ (uVar10 >> 0x3b | uVar10 << 5)) * 0x517cc1b727220a95;
            }
            for (; uVar16 != 0; uVar16 = uVar16 - 1) {
              uVar10 = ((ulong)(byte)*puVar8 ^ (uVar10 >> 0x3b | uVar10 << 5)) * 0x517cc1b727220a95;
              puVar8 = (ulong *)((long)puVar8 + 1);
            }
            uVar17 = ((uVar10 >> 0x3b | uVar10 << 5) ^ 0xff) * 0x517cc1b727220a95;
            uVar16 = uVar17 & uVar20;
            uVar10 = NEON_cmlt(*(undefined8 *)((long)__s + uVar16),0,1);
            if (uVar10 == 0) {
              lVar11 = 8;
              do {
                uVar16 = uVar16 + lVar11;
                lVar11 = lVar11 + 8;
                uVar16 = uVar16 & uVar20;
                uVar10 = NEON_cmlt(*(undefined8 *)((long)__s + uVar16),0,1);
              } while (uVar10 == 0);
            }
            uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
            uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
            uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
            uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
            uVar16 = uVar16 + ((ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3) & uVar20;
            if (-1 < *(char *)((long)__s + uVar16)) {
              uVar16 = NEON_cmlt(*__s,0,1);
              uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
              uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
              uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
              uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
              uVar16 = (ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3;
            }
            puVar15 = puVar13 + ~uVar2 * 3;
            bVar4 = (byte)(uVar17 >> 0x38);
            *(byte *)((long)__s + uVar16) = bVar4 >> 1;
            uVar14 = uVar14 - 1;
            puVar12 = __s + ~uVar16 * 3;
            *(byte *)((long)__s + (uVar16 - 8 & uVar20) + 8) = bVar4 >> 1;
            uVar22 = puVar15[1];
            uVar9 = *puVar15;
            uVar21 = uVar21 - 1 & uVar21;
            puVar12[2] = puVar15[2];
            puVar12[1] = uVar22;
            *puVar12 = uVar9;
          } while (uVar14 != 0);
        }
        *in_x0 = (long)__s;
        in_x0[1] = uVar20;
        in_x0[2] = uVar1 - uVar18;
        in_x0[3] = uVar18;
        if (uVar19 == 0) {
          return 0xffffffffffffffff;
        }
        lVar6 = uVar19 * 0x18 + 0x18;
        if (uVar19 + lVar6 == -9) {
          return 0xffffffffffffffff;
        }
        free((void *)((long)puVar13 - lVar6));
        return 0xffffffffffffffff;
      }
    }
  }
LAB_0055b9e4:
  puStack_58 = local_60;
  uVar9 = <hashbrown::raw::hashbrown::raw::Fallibility>::capacity_overflow(in_w3);
  return uVar9;
}


// ===== 0055ba60  <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(record_mapper[dbd33a546c644578]::record_value::RecordTypeId,alloc[c1f8e832b0d782c7]::boxed::Box<dyn_flux[2406cd06d16b4816]::persistence::DynStoreReplicationHandler>)>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<record_mapper[dbd33a546c644578]::record_value::RecordTypeId,alloc[c1f8e832b0d782c7]::boxed::Box<dyn_flux[2406cd06d16b4816]::persistence::DynStoreReplicationHandler>,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::{closure#0}> =====

/* <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(record_mapper[dbd33a546c644578]::record_value::RecordTypeId,
   alloc[c1f8e832b0d782c7]::boxed::Box<dyn
   flux[2406cd06d16b4816]::persistence::DynStoreReplicationHandler>)>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<record_mapper[dbd33a546c644578]::record_value::RecordTypeId,
   alloc[c1f8e832b0d782c7]::boxed::Box<dyn
   flux[2406cd06d16b4816]::persistence::DynStoreReplicationHandler>,
   core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::{closure#0}>
    */

undefined8
<hashbrown[32fc5d502e7f9af5]::raw::RawTable<(record_mapper[dbd33a546c644578]::record_value::RecordTypeId,alloc[c1f8e832b0d782c7]::boxed::Box<dyn_flux[2406cd06d16b4816]::persistence::DynStoreReplicationHandler>)>>
::reserve_rehash::
<hashbrown[32fc5d502e7f9af5]::map::make_hasher<record_mapper[dbd33a546c644578]::record_value::RecordTypeId,alloc[c1f8e832b0d782c7]::boxed::Box<dyn_flux[2406cd06d16b4816]::persistence::DynStoreReplicationHandler>,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::_closure_0_>
          (long *param_1,ulong param_2,undefined8 param_3,undefined4 param_4)

{
  ulong *puVar1;
  undefined8 *__s;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  byte bVar5;
  undefined8 *puVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong *__src;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  uVar18 = param_1[3];
  uVar20 = uVar18 + param_2;
  if (CARRY8(uVar18,param_2)) goto LAB_0055bee0;
  uVar17 = param_1[1];
  uVar14 = uVar17 + 1;
  uVar12 = uVar14 >> 3;
  uVar19 = uVar17;
  if (7 < uVar17) {
    uVar19 = uVar12 * 7;
  }
  if (uVar19 >> 1 < uVar20) {
    if (uVar20 < uVar19 + 1) {
      uVar20 = uVar19 + 1;
    }
    if (uVar20 < 0xf) {
      uVar14 = 4;
      if (3 < uVar20) {
        uVar14 = (uVar20 & 8) + 8;
      }
      uVar19 = uVar14 * 0x20;
      uVar20 = uVar14 + 8;
      uVar12 = uVar20 + uVar19;
      if (CARRY8(uVar20,uVar19)) goto LAB_0055bee0;
    }
    else {
      if ((uVar20 >> 0x3d != 0) ||
         (uVar20 = 0xffffffffffffffff >> (LZCOUNT((uVar20 * 8) / 7 - 1) & 0x3fU),
         0x7fffffffffffffe < uVar20)) goto LAB_0055bee0;
      uVar14 = uVar20 + 1;
      uVar19 = uVar14 * 0x20;
      uVar20 = uVar20 + 9;
      uVar12 = uVar20 + uVar19;
      if (CARRY8(uVar20,uVar19)) goto LAB_0055bee0;
    }
    if (0x7ffffffffffffff8 < uVar12) {
LAB_0055bee0:
      uVar10 = <hashbrown::raw::hashbrown::raw::Fallibility>::capacity_overflow(param_4);
      return uVar10;
    }
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    lVar8 = FUN_004b25a4(uVar12,8);
    if (lVar8 == 0) {
      uVar10 = <hashbrown::raw::hashbrown::raw::Fallibility>::alloc_err(param_4,8,uVar12);
      return uVar10;
    }
    __s = (undefined8 *)(lVar8 + uVar19);
    uVar19 = uVar14 - 1;
    uVar12 = uVar19;
    if (8 < uVar14) {
      uVar12 = (uVar14 >> 3) * 7;
    }
    memset(__s,0xff,uVar20);
    if (uVar18 == 0) {
      puVar11 = (undefined8 *)*param_1;
    }
    else {
      puVar11 = (undefined8 *)*param_1;
      lVar8 = 0;
      uVar20 = NEON_cmge(*puVar11,0,1);
      uVar20 = uVar20 & 0x8080808080808080;
      puVar6 = puVar11;
      uVar14 = uVar18;
      do {
        for (; uVar20 == 0; uVar20 = uVar20 & 0x8080808080808080) {
          lVar8 = lVar8 + 8;
          uVar20 = NEON_cmge(puVar6[1],0,1);
          puVar6 = puVar6 + 1;
        }
        uVar15 = (uVar20 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar20 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
        uVar15 = lVar8 + ((ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >> 3);
        uVar16 = puVar11[uVar15 * -4 + -3] * 0x517cc1b727220a95 & uVar19;
        uVar21 = NEON_cmlt(*(undefined8 *)((long)__s + uVar16),0,1);
        if (uVar21 == 0) {
          lVar9 = 8;
          do {
            uVar16 = uVar16 + lVar9;
            lVar9 = lVar9 + 8;
            uVar16 = uVar16 & uVar19;
            uVar21 = NEON_cmlt(*(undefined8 *)((long)__s + uVar16),0,1);
          } while (uVar21 == 0);
        }
        uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
        uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
        uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
        uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
        uVar16 = uVar16 + ((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3) & uVar19;
        if (-1 < *(char *)((long)__s + uVar16)) {
          uVar16 = NEON_cmlt(*__s,0,1);
          uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
          uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
          uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
          uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
          uVar16 = (ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3;
        }
        puVar2 = puVar11 + ~uVar15 * 4;
        bVar5 = (byte)((ulong)(puVar11[uVar15 * -4 + -3] * 0x517cc1b727220a95) >> 0x38);
        *(byte *)((long)__s + uVar16) = bVar5 >> 1;
        uVar14 = uVar14 - 1;
        *(byte *)((long)__s + (uVar16 - 8 & uVar19) + 8) = bVar5 >> 1;
        puVar3 = __s + ~uVar16 * 4;
        uVar23 = *puVar2;
        uVar22 = puVar2[3];
        uVar10 = puVar2[2];
        uVar20 = uVar20 - 1 & uVar20;
        puVar3[1] = puVar2[1];
        *puVar3 = uVar23;
        puVar3[3] = uVar22;
        puVar3[2] = uVar10;
      } while (uVar14 != 0);
    }
    *param_1 = (long)__s;
    param_1[1] = uVar19;
    param_1[2] = uVar12 - uVar18;
    if ((uVar17 != 0) && (lVar8 = uVar17 * 0x20 + 0x20, uVar17 + lVar8 != -9)) {
      free((void *)((long)puVar11 - lVar8));
    }
  }
  else {
    if (uVar14 != 0) {
      __src = (ulong *)*param_1;
      puVar13 = __src;
      if ((uVar14 & 7) != 0) {
        uVar12 = uVar12 + 1;
      }
      do {
        uVar12 = uVar12 - 1;
        uVar20 = NEON_cmlt(*puVar13,0,1);
        *puVar13 = uVar20 | 0x8080808080808080;
        puVar13 = puVar13 + 1;
      } while (uVar12 != 0);
      if (uVar14 < 8) {
        memmove(__src + 1,__src,uVar17 + 1);
      }
      else {
        *(ulong *)((long)__src + uVar14) = *__src;
      }
      uVar20 = 0;
      do {
        if (*(char *)((long)__src + uVar20) == -0x80) {
          puVar13 = __src + ~uVar20 * 4;
          while( true ) {
            uVar12 = __src[uVar20 * -4 + -3] * 0x517cc1b727220a95;
            uVar14 = param_1[1];
            uVar19 = uVar14 & uVar12;
            uVar18 = NEON_cmlt(*(undefined8 *)((long)__src + uVar19),0,1);
            if (uVar18 == 0) {
              lVar8 = 8;
              uVar15 = uVar14 & uVar12;
              do {
                uVar15 = uVar15 + lVar8;
                lVar8 = lVar8 + 8;
                uVar15 = uVar15 & uVar14;
                uVar18 = NEON_cmlt(*(undefined8 *)((long)__src + uVar15),0,1);
              } while (uVar18 == 0);
            }
            else {
              uVar15 = uVar14 & uVar12;
            }
            uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
            uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
            uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
            uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
            uVar18 = uVar15 + ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3) & uVar14;
            bVar5 = (byte)(uVar12 >> 0x38);
            if (*(char *)((long)__src + uVar18) < '\0') {
              uVar12 = uVar18 - uVar19 ^ uVar20 - uVar19;
            }
            else {
              uVar18 = NEON_cmlt(*__src,0,1);
              uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
              uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
              uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
              uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
              uVar18 = (ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3;
              uVar12 = uVar18 - uVar19 ^ uVar20 - uVar19;
            }
            if ((uVar12 & uVar14) < 8) {
              *(byte *)((long)__src + uVar20) = bVar5 >> 1;
              __src = (ulong *)*param_1;
              *(byte *)((long)__src + (uVar14 & uVar20 - 8) + 8) = bVar5 >> 1;
              goto LAB_0055bc84;
            }
            cVar4 = *(char *)((long)__src + uVar18);
            *(byte *)((long)__src + uVar18) = bVar5 >> 1;
            puVar1 = __src + ~uVar18 * 4;
            __src = (ulong *)*param_1;
            *(byte *)((long)__src + (uVar18 - 8 & uVar14) + 8) = bVar5 >> 1;
            if (cVar4 == -1) break;
            uVar18 = *puVar13;
            *puVar13 = *puVar1;
            *puVar1 = uVar18;
            uVar18 = puVar13[1];
            puVar13[1] = puVar1[1];
            puVar1[1] = uVar18;
            uVar18 = puVar13[2];
            puVar13[2] = puVar1[2];
            puVar1[2] = uVar18;
            uVar18 = puVar13[3];
            puVar13[3] = puVar1[3];
            puVar1[3] = uVar18;
            __src = (ulong *)*param_1;
          }
          uVar18 = param_1[1];
          *(undefined1 *)((long)__src + uVar20) = 0xff;
          *(undefined1 *)((long)__src + (uVar18 & uVar20 - 8) + 8) = 0xff;
          uVar12 = *puVar13;
          uVar14 = puVar13[3];
          uVar18 = puVar13[2];
          puVar1[1] = puVar13[1];
          *puVar1 = uVar12;
          puVar1[3] = uVar14;
          puVar1[2] = uVar18;
        }
LAB_0055bc84:
        bVar7 = uVar20 != uVar17;
        uVar20 = uVar20 + 1;
      } while (bVar7);
      uVar14 = param_1[1];
      uVar18 = param_1[3];
      if (7 < uVar14) {
        uVar14 = (uVar14 + 1 >> 3) * 7;
      }
    }
    param_1[2] = uVar14 - uVar18;
  }
  return 0xffffffffffffffff;
}


// ===== 0055bf84  <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(record_mapper[dbd33a546c644578]::record_value::RecordTypeId,flux[2406cd06d16b4816]::persistence::schema::SchemaContext)>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<record_mapper[dbd33a546c644578]::record_value::RecordTypeId,flux[2406cd06d16b4816]::persistence::schema::SchemaContext,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::{closure#0}> =====

/* <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(record_mapper[dbd33a546c644578]::record_value::RecordTypeId,
   flux[2406cd06d16b4816]::persistence::schema::SchemaContext)>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<record_mapper[dbd33a546c644578]::record_value::RecordTypeId,
   flux[2406cd06d16b4816]::persistence::schema::SchemaContext,
   core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::{closure#0}>
    */

undefined8
<hashbrown[32fc5d502e7f9af5]::raw::RawTable<(record_mapper[dbd33a546c644578]::record_value::RecordTypeId,flux[2406cd06d16b4816]::persistence::schema::SchemaContext)>>
::reserve_rehash::
<hashbrown[32fc5d502e7f9af5]::map::make_hasher<record_mapper[dbd33a546c644578]::record_value::RecordTypeId,flux[2406cd06d16b4816]::persistence::schema::SchemaContext,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::_closure_0_>
          (long *param_1,ulong param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *__s;
  char cVar1;
  undefined1 auVar2 [16];
  byte bVar3;
  undefined8 *puVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong *puVar15;
  ulong uVar16;
  undefined8 *puVar17;
  ulong *__src;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  
  uVar19 = param_1[3];
  uVar21 = uVar19 + param_2;
  if (!CARRY8(uVar19,param_2)) {
    uVar18 = param_1[1];
    uVar14 = uVar18 + 1;
    uVar12 = uVar14 >> 3;
    uVar20 = uVar18;
    if (7 < uVar18) {
      uVar20 = uVar12 * 7;
    }
    if (uVar21 <= uVar20 >> 1) {
      if (uVar14 != 0) {
        __src = (ulong *)*param_1;
        puVar13 = __src;
        if ((uVar14 & 7) != 0) {
          uVar12 = uVar12 + 1;
        }
        do {
          uVar12 = uVar12 - 1;
          uVar21 = NEON_cmlt(*puVar13,0,1);
          *puVar13 = uVar21 | 0x8080808080808080;
          puVar13 = puVar13 + 1;
        } while (uVar12 != 0);
        if (uVar14 < 8) {
          memmove(__src + 1,__src,uVar18 + 1);
        }
        else {
          *(ulong *)((long)__src + uVar14) = *__src;
        }
        uVar21 = 0;
        do {
          if (*(char *)((long)__src + uVar21) == -0x80) {
            puVar13 = __src + ~uVar21 * 6;
            while( true ) {
              uVar12 = __src[uVar21 * -6 + -5] * 0x517cc1b727220a95;
              uVar14 = param_1[1];
              uVar20 = uVar14 & uVar12;
              uVar19 = NEON_cmlt(*(undefined8 *)((long)__src + uVar20),0,1);
              if (uVar19 == 0) {
                lVar6 = 8;
                uVar16 = uVar14 & uVar12;
                do {
                  uVar16 = uVar16 + lVar6;
                  lVar6 = lVar6 + 8;
                  uVar16 = uVar16 & uVar14;
                  uVar19 = NEON_cmlt(*(undefined8 *)((long)__src + uVar16),0,1);
                } while (uVar19 == 0);
              }
              else {
                uVar16 = uVar14 & uVar12;
              }
              uVar19 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
              uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
              uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
              uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
              uVar19 = uVar16 + ((ulong)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3) & uVar14;
              bVar3 = (byte)(uVar12 >> 0x38);
              if (*(char *)((long)__src + uVar19) < '\0') {
                uVar12 = uVar19 - uVar20 ^ uVar21 - uVar20;
              }
              else {
                uVar19 = NEON_cmlt(*__src,0,1);
                uVar19 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
                uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
                uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
                uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
                uVar19 = (ulong)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3;
                uVar12 = uVar19 - uVar20 ^ uVar21 - uVar20;
              }
              if ((uVar12 & uVar14) < 8) {
                *(byte *)((long)__src + uVar21) = bVar3 >> 1;
                __src = (ulong *)*param_1;
                *(byte *)((long)__src + (uVar14 & uVar21 - 8) + 8) = bVar3 >> 1;
                goto LAB_0055c1bc;
              }
              puVar15 = __src + ~uVar19 * 6;
              cVar1 = *(char *)((long)__src + uVar19);
              *(byte *)((long)__src + uVar19) = bVar3 >> 1;
              __src = (ulong *)*param_1;
              *(byte *)((long)__src + (uVar19 - 8 & uVar14) + 8) = bVar3 >> 1;
              if (cVar1 == -1) break;
              uVar19 = *puVar13;
              *puVar13 = *puVar15;
              *puVar15 = uVar19;
              uVar19 = puVar13[1];
              puVar13[1] = puVar15[1];
              puVar15[1] = uVar19;
              uVar19 = puVar13[2];
              puVar13[2] = puVar15[2];
              puVar15[2] = uVar19;
              uVar19 = puVar13[3];
              puVar13[3] = puVar15[3];
              puVar15[3] = uVar19;
              uVar19 = puVar13[4];
              puVar13[4] = puVar15[4];
              puVar15[4] = uVar19;
              uVar19 = puVar13[5];
              puVar13[5] = puVar15[5];
              puVar15[5] = uVar19;
              __src = (ulong *)*param_1;
            }
            uVar19 = param_1[1];
            *(undefined1 *)((long)__src + uVar21) = 0xff;
            *(undefined1 *)((long)__src + (uVar19 & uVar21 - 8) + 8) = 0xff;
            uVar20 = puVar13[3];
            uVar12 = puVar13[2];
            uVar14 = puVar13[5];
            uVar19 = puVar13[4];
            uVar16 = *puVar13;
            puVar15[1] = puVar13[1];
            *puVar15 = uVar16;
            puVar15[3] = uVar20;
            puVar15[2] = uVar12;
            puVar15[5] = uVar14;
            puVar15[4] = uVar19;
          }
LAB_0055c1bc:
          bVar5 = uVar21 != uVar18;
          uVar21 = uVar21 + 1;
        } while (bVar5);
        uVar14 = param_1[1];
        uVar19 = param_1[3];
        if (7 < uVar14) {
          uVar14 = (uVar14 + 1 >> 3) * 7;
        }
      }
      param_1[2] = uVar14 - uVar19;
      return 0xffffffffffffffff;
    }
    if (uVar21 < uVar20 + 1) {
      uVar21 = uVar20 + 1;
    }
    if (uVar21 < 0xf) {
      uVar14 = 4;
      if (3 < uVar21) {
        uVar14 = (uVar21 & 8) + 8;
      }
    }
    else {
      if (uVar21 >> 0x3d != 0) goto LAB_0055c438;
      uVar14 = (0xffffffffffffffffU >> (LZCOUNT((uVar21 * 8) / 7 - 1) & 0x3fU)) + 1;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar14;
    if (SUB168(auVar2 * ZEXT816(0x30),8) == 0) {
      uVar21 = uVar14 + 8;
      uVar20 = uVar14 * 0x30;
      uVar12 = uVar20 + uVar21;
      if ((!CARRY8(uVar20,uVar21)) && (uVar12 < 0x7ffffffffffffff9)) {
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        lVar6 = FUN_004b25a4(uVar12,8);
        if (lVar6 == 0) {
          uVar8 = <hashbrown::raw::hashbrown::raw::Fallibility>::alloc_err(param_4,8,uVar12);
          return uVar8;
        }
        __s = (undefined8 *)(lVar6 + uVar20);
        uVar20 = uVar14 - 1;
        uVar12 = uVar20;
        if (8 < uVar14) {
          uVar12 = (uVar14 >> 3) * 7;
        }
        memset(__s,0xff,uVar21);
        if (uVar19 == 0) {
          puVar11 = (undefined8 *)*param_1;
        }
        else {
          puVar11 = (undefined8 *)*param_1;
          lVar6 = 0;
          uVar21 = NEON_cmge(*puVar11,0,1);
          uVar21 = uVar21 & 0x8080808080808080;
          puVar4 = puVar11;
          uVar14 = uVar19;
          do {
            for (; uVar21 == 0; uVar21 = uVar21 & 0x8080808080808080) {
              lVar6 = lVar6 + 8;
              uVar21 = NEON_cmge(puVar4[1],0,1);
              puVar4 = puVar4 + 1;
            }
            uVar16 = (uVar21 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar21 >> 7 & 0xff00ff00ff00ff) << 8
            ;
            uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
            uVar16 = lVar6 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3);
            uVar7 = puVar11[uVar16 * -6 + -5] * 0x517cc1b727220a95 & uVar20;
            uVar22 = NEON_cmlt(*(undefined8 *)((long)__s + uVar7),0,1);
            if (uVar22 == 0) {
              lVar9 = 8;
              do {
                uVar7 = uVar7 + lVar9;
                lVar9 = lVar9 + 8;
                uVar7 = uVar7 & uVar20;
                uVar22 = NEON_cmlt(*(undefined8 *)((long)__s + uVar7),0,1);
              } while (uVar22 == 0);
            }
            uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
            uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
            uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
            uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
            uVar7 = uVar7 + ((ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3) & uVar20;
            if (-1 < *(char *)((long)__s + uVar7)) {
              uVar7 = NEON_cmlt(*__s,0,1);
              uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
              uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
              uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
              uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
              uVar7 = (ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3;
            }
            puVar17 = puVar11 + ~uVar16 * 6;
            bVar3 = (byte)((ulong)(puVar11[uVar16 * -6 + -5] * 0x517cc1b727220a95) >> 0x38);
            *(byte *)((long)__s + uVar7) = bVar3 >> 1;
            uVar14 = uVar14 - 1;
            puVar10 = __s + ~uVar7 * 6;
            *(byte *)((long)__s + (uVar7 - 8 & uVar20) + 8) = bVar3 >> 1;
            uVar21 = uVar21 - 1 & uVar21;
            uVar25 = puVar17[3];
            uVar24 = puVar17[2];
            uVar23 = puVar17[5];
            uVar8 = puVar17[4];
            uVar26 = *puVar17;
            puVar10[1] = puVar17[1];
            *puVar10 = uVar26;
            puVar10[3] = uVar25;
            puVar10[2] = uVar24;
            puVar10[5] = uVar23;
            puVar10[4] = uVar8;
          } while (uVar14 != 0);
        }
        *param_1 = (long)__s;
        param_1[1] = uVar20;
        param_1[2] = uVar12 - uVar19;
        if (uVar18 == 0) {
          return 0xffffffffffffffff;
        }
        lVar6 = uVar18 * 0x30 + 0x30;
        if (uVar18 + lVar6 == -9) {
          return 0xffffffffffffffff;
        }
        free((void *)((long)puVar11 - lVar6));
        return 0xffffffffffffffff;
      }
    }
  }
LAB_0055c438:
  uVar8 = <hashbrown::raw::hashbrown::raw::Fallibility>::capacity_overflow(param_4);
  return uVar8;
}


// ===== 0055c4e0  <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(record_mapper[dbd33a546c644578]::record_value::RecordTypeId,())>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<record_mapper[dbd33a546c644578]::record_value::RecordTypeId, =====

/* <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(record_mapper[dbd33a546c644578]::record_value::RecordTypeId,
   ())>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<record_mapper[dbd33a546c644578]::record_value::RecordTypeId,
   (), 
   core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::{closure#0}>
    */

undefined8
<hashbrown[32fc5d502e7f9af5]::raw::RawTable<(record_mapper[dbd33a546c644578]::record_value::
RecordTypeId,())>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::
make_hasher<record_mapper[dbd33a546c644578]::record_value::RecordTypeId_(void)

{
  ulong *puVar1;
  undefined8 *__s;
  char cVar2;
  byte bVar3;
  undefined8 *puVar4;
  bool bVar5;
  long *in_x0;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong in_x1;
  undefined4 in_w3;
  undefined8 *puVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong *__src;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  
  uVar16 = in_x0[3];
  uVar18 = uVar16 + in_x1;
  if (CARRY8(uVar16,in_x1)) goto LAB_0055c938;
  uVar15 = in_x0[1];
  uVar12 = uVar15 + 1;
  uVar10 = uVar12 >> 3;
  uVar17 = uVar15;
  if (7 < uVar15) {
    uVar17 = uVar10 * 7;
  }
  if (uVar17 >> 1 < uVar18) {
    if (uVar18 < uVar17 + 1) {
      uVar18 = uVar17 + 1;
    }
    if (uVar18 < 0xf) {
      uVar12 = 4;
      if (3 < uVar18) {
        uVar12 = (uVar18 & 8) + 8;
      }
      uVar17 = uVar12 * 0x10;
      uVar18 = uVar12 + 8;
      uVar10 = uVar18 + uVar17;
      if (CARRY8(uVar18,uVar17)) goto LAB_0055c938;
    }
    else {
      if ((uVar18 >> 0x3d != 0) ||
         (uVar18 = 0xffffffffffffffff >> (LZCOUNT((uVar18 * 8) / 7 - 1) & 0x3fU),
         0xffffffffffffffe < uVar18)) goto LAB_0055c938;
      uVar12 = uVar18 + 1;
      uVar17 = uVar12 * 0x10;
      uVar18 = uVar18 + 9;
      uVar10 = uVar18 + uVar17;
      if (CARRY8(uVar18,uVar17)) goto LAB_0055c938;
    }
    if (0x7ffffffffffffff8 < uVar10) {
LAB_0055c938:
      uVar8 = <hashbrown::raw::hashbrown::raw::Fallibility>::capacity_overflow(in_w3);
      return uVar8;
    }
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    lVar6 = FUN_004b25a4(uVar10,8);
    if (lVar6 == 0) {
      uVar8 = <hashbrown::raw::hashbrown::raw::Fallibility>::alloc_err(in_w3,8,uVar10);
      return uVar8;
    }
    __s = (undefined8 *)(lVar6 + uVar17);
    uVar17 = uVar12 - 1;
    uVar10 = uVar17;
    if (8 < uVar12) {
      uVar10 = (uVar12 >> 3) * 7;
    }
    memset(__s,0xff,uVar18);
    if (uVar16 == 0) {
      puVar9 = (undefined8 *)*in_x0;
    }
    else {
      puVar9 = (undefined8 *)*in_x0;
      lVar6 = 0;
      uVar18 = NEON_cmge(*puVar9,0,1);
      uVar18 = uVar18 & 0x8080808080808080;
      puVar4 = puVar9;
      uVar12 = uVar16;
      do {
        for (; uVar18 == 0; uVar18 = uVar18 & 0x8080808080808080) {
          lVar6 = lVar6 + 8;
          uVar18 = NEON_cmge(puVar4[1],0,1);
          puVar4 = puVar4 + 1;
        }
        uVar13 = (uVar18 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar18 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        uVar13 = lVar6 + ((ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3);
        uVar14 = puVar9[uVar13 * -2 + -1] * 0x517cc1b727220a95 & uVar17;
        uVar19 = NEON_cmlt(*(undefined8 *)((long)__s + uVar14),0,1);
        if (uVar19 == 0) {
          lVar7 = 8;
          do {
            uVar14 = uVar14 + lVar7;
            lVar7 = lVar7 + 8;
            uVar14 = uVar14 & uVar17;
            uVar19 = NEON_cmlt(*(undefined8 *)((long)__s + uVar14),0,1);
          } while (uVar19 == 0);
        }
        uVar19 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
        uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
        uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
        uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
        uVar14 = uVar14 + ((ulong)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3) & uVar17;
        if (-1 < *(char *)((long)__s + uVar14)) {
          uVar14 = NEON_cmlt(*__s,0,1);
          uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
          uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
          uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
          uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
          uVar14 = (ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3;
        }
        bVar3 = (byte)((ulong)(puVar9[uVar13 * -2 + -1] * 0x517cc1b727220a95) >> 0x38);
        *(byte *)((long)__s + uVar14) = bVar3 >> 1;
        uVar12 = uVar12 - 1;
        uVar18 = uVar18 - 1 & uVar18;
        *(byte *)((long)__s + (uVar14 - 8 & uVar17) + 8) = bVar3 >> 1;
        uVar8 = puVar9[~uVar13 * 2];
        (__s + ~uVar14 * 2)[1] = (puVar9 + ~uVar13 * 2)[1];
        __s[~uVar14 * 2] = uVar8;
      } while (uVar12 != 0);
    }
    *in_x0 = (long)__s;
    in_x0[1] = uVar17;
    in_x0[2] = uVar10 - uVar16;
    if ((uVar15 != 0) && (lVar6 = uVar15 * 0x10 + 0x10, uVar15 + lVar6 != -9)) {
      free((void *)((long)puVar9 - lVar6));
    }
  }
  else {
    if (uVar12 != 0) {
      __src = (ulong *)*in_x0;
      puVar11 = __src;
      if ((uVar12 & 7) != 0) {
        uVar10 = uVar10 + 1;
      }
      do {
        uVar10 = uVar10 - 1;
        uVar18 = NEON_cmlt(*puVar11,0,1);
        *puVar11 = uVar18 | 0x8080808080808080;
        puVar11 = puVar11 + 1;
      } while (uVar10 != 0);
      if (uVar12 < 8) {
        memmove(__src + 1,__src,uVar15 + 1);
      }
      else {
        *(ulong *)((long)__src + uVar12) = *__src;
      }
      uVar18 = 0;
      do {
        if (*(char *)((long)__src + uVar18) == -0x80) {
          puVar11 = __src + ~uVar18 * 2;
          while( true ) {
            uVar10 = __src[uVar18 * -2 + -1] * 0x517cc1b727220a95;
            uVar12 = in_x0[1];
            uVar17 = uVar12 & uVar10;
            uVar16 = NEON_cmlt(*(undefined8 *)((long)__src + uVar17),0,1);
            if (uVar16 == 0) {
              lVar6 = 8;
              uVar13 = uVar12 & uVar10;
              do {
                uVar13 = uVar13 + lVar6;
                lVar6 = lVar6 + 8;
                uVar13 = uVar13 & uVar12;
                uVar16 = NEON_cmlt(*(undefined8 *)((long)__src + uVar13),0,1);
              } while (uVar16 == 0);
            }
            else {
              uVar13 = uVar12 & uVar10;
            }
            uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
            uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
            uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
            uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
            uVar16 = uVar13 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3) & uVar12;
            bVar3 = (byte)(uVar10 >> 0x38);
            if (*(char *)((long)__src + uVar16) < '\0') {
              uVar10 = uVar16 - uVar17 ^ uVar18 - uVar17;
            }
            else {
              uVar16 = NEON_cmlt(*__src,0,1);
              uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
              uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
              uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
              uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
              uVar16 = (ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3;
              uVar10 = uVar16 - uVar17 ^ uVar18 - uVar17;
            }
            if ((uVar10 & uVar12) < 8) {
              *(byte *)((long)__src + uVar18) = bVar3 >> 1;
              __src = (ulong *)*in_x0;
              *(byte *)((long)__src + (uVar12 & uVar18 - 8) + 8) = bVar3 >> 1;
              goto LAB_0055c6e4;
            }
            cVar2 = *(char *)((long)__src + uVar16);
            *(byte *)((long)__src + uVar16) = bVar3 >> 1;
            puVar1 = __src + ~uVar16 * 2;
            __src = (ulong *)*in_x0;
            *(byte *)((long)__src + (uVar16 - 8 & uVar12) + 8) = bVar3 >> 1;
            if (cVar2 == -1) break;
            uVar16 = *puVar11;
            *puVar11 = *puVar1;
            *puVar1 = uVar16;
            uVar16 = puVar11[1];
            puVar11[1] = puVar1[1];
            puVar1[1] = uVar16;
            __src = (ulong *)*in_x0;
          }
          uVar16 = in_x0[1];
          *(undefined1 *)((long)__src + uVar18) = 0xff;
          *(undefined1 *)((long)__src + (uVar16 & uVar18 - 8) + 8) = 0xff;
          uVar16 = *puVar11;
          puVar1[1] = puVar11[1];
          *puVar1 = uVar16;
        }
LAB_0055c6e4:
        bVar5 = uVar18 != uVar15;
        uVar18 = uVar18 + 1;
      } while (bVar5);
      uVar12 = in_x0[1];
      uVar16 = in_x0[3];
      if (7 < uVar12) {
        uVar12 = (uVar12 + 1 >> 3) * 7;
      }
    }
    in_x0[2] = uVar12 - uVar16;
  }
  return 0xffffffffffffffff;
}


// ===== 0055c9dc  <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(flux[2406cd06d16b4816]::persistence::schema::TableAlias,flux[2406cd06d16b4816]::persistence::schema::TableDefinition)>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<flux[2406cd06d16b4816]::persistence::schema::TableAlias,flux[2406cd06d16b4816]::persistence::schema::TableDefinition,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::{closure#0}> =====

/* <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(flux[2406cd06d16b4816]::persistence::schema::TableAlias,
   flux[2406cd06d16b4816]::persistence::schema::TableDefinition)>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<flux[2406cd06d16b4816]::persistence::schema::TableAlias,
   flux[2406cd06d16b4816]::persistence::schema::TableDefinition,
   core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::{closure#0}>
    */

undefined8
<hashbrown[32fc5d502e7f9af5]::raw::RawTable<(flux[2406cd06d16b4816]::persistence::schema::TableAlias,flux[2406cd06d16b4816]::persistence::schema::TableDefinition)>>
::reserve_rehash::
<hashbrown[32fc5d502e7f9af5]::map::make_hasher<flux[2406cd06d16b4816]::persistence::schema::TableAlias,flux[2406cd06d16b4816]::persistence::schema::TableDefinition,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::_closure_0_>
          (long *param_1,ulong param_2,undefined8 param_3,undefined4 param_4)

{
  ulong uVar1;
  undefined8 *__s;
  ulong uVar2;
  undefined1 auVar3 [16];
  byte bVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong *puVar7;
  ulong *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 local_60;
  undefined1 *puStack_58;
  
  puStack_58 = (undefined1 *)&local_60;
  uVar19 = param_1[3];
  uVar21 = uVar19 + param_2;
  local_60 = param_3;
  if (!CARRY8(uVar19,param_2)) {
    uVar20 = param_1[1];
    uVar14 = uVar20;
    if (7 < uVar20) {
      uVar14 = (uVar20 + 1 >> 3) * 7;
    }
    if (uVar21 <= uVar14 >> 1) {
      FUN_0055db9c(param_1,&puStack_58,FUN_0055da04,0x38,FUN_0055e850);
      return 0xffffffffffffffff;
    }
    if (uVar21 < uVar14 + 1) {
      uVar21 = uVar14 + 1;
    }
    if (uVar21 < 0xf) {
      uVar14 = 4;
      if (3 < uVar21) {
        uVar14 = (uVar21 & 8) + 8;
      }
    }
    else {
      if (uVar21 >> 0x3d != 0) goto LAB_0055ccd8;
      uVar14 = (0xffffffffffffffffU >> (LZCOUNT((uVar21 * 8) / 7 - 1) & 0x3fU)) + 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar14;
    if (SUB168(auVar3 * ZEXT816(0x38),8) == 0) {
      uVar21 = uVar14 + 8;
      uVar18 = uVar14 * 0x38;
      uVar1 = uVar18 + uVar21;
      if ((!CARRY8(uVar18,uVar21)) && (uVar1 < 0x7ffffffffffffff9)) {
        puStack_58 = (undefined1 *)&local_60;
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        lVar6 = FUN_004b25a4(uVar1,8);
        if (lVar6 == 0) {
          uVar9 = <hashbrown::raw::hashbrown::raw::Fallibility>::alloc_err(param_4,8,uVar1);
          return uVar9;
        }
        __s = (undefined8 *)(lVar6 + uVar18);
        uVar18 = uVar14 - 1;
        uVar1 = uVar18;
        if (8 < uVar14) {
          uVar1 = (uVar14 >> 3) * 7;
        }
        memset(__s,0xff,uVar21);
        if (uVar19 == 0) {
          puVar13 = (undefined8 *)*param_1;
        }
        else {
          puVar13 = (undefined8 *)*param_1;
          lVar6 = 0;
          uVar21 = NEON_cmge(*puVar13,0,1);
          uVar21 = uVar21 & 0x8080808080808080;
          puVar5 = puVar13;
          uVar14 = uVar19;
          do {
            for (; uVar21 == 0; uVar21 = uVar21 & 0x8080808080808080) {
              lVar6 = lVar6 + 8;
              uVar21 = NEON_cmge(puVar5[1],0,1);
              puVar5 = puVar5 + 1;
            }
            uVar2 = (uVar21 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar21 >> 7 & 0xff00ff00ff00ff) << 8;
            uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
            uVar2 = lVar6 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3);
            puVar7 = (ulong *)puVar13[uVar2 * -7 + -7];
            uVar16 = puVar13[uVar2 * -7 + -6];
            if (uVar16 < 8) {
              uVar10 = 0;
            }
            else {
              uVar10 = 0;
              puVar8 = puVar7;
              do {
                puVar7 = puVar8 + 1;
                uVar16 = uVar16 - 8;
                uVar10 = (*puVar8 ^ (uVar10 >> 0x3b | uVar10 << 5)) * 0x517cc1b727220a95;
                puVar8 = puVar7;
              } while (7 < uVar16);
            }
            puVar8 = puVar7;
            if (3 < uVar16) {
              puVar8 = (ulong *)((long)puVar7 + 4);
              uVar16 = uVar16 - 4;
              uVar10 = ((ulong)(uint)*puVar7 ^ (uVar10 >> 0x3b | uVar10 << 5)) * 0x517cc1b727220a95;
            }
            for (; uVar16 != 0; uVar16 = uVar16 - 1) {
              uVar10 = ((ulong)(byte)*puVar8 ^ (uVar10 >> 0x3b | uVar10 << 5)) * 0x517cc1b727220a95;
              puVar8 = (ulong *)((long)puVar8 + 1);
            }
            uVar17 = ((uVar10 >> 0x3b | uVar10 << 5) ^ 0xff) * 0x517cc1b727220a95;
            uVar16 = uVar17 & uVar18;
            uVar10 = NEON_cmlt(*(undefined8 *)((long)__s + uVar16),0,1);
            if (uVar10 == 0) {
              lVar11 = 8;
              do {
                uVar16 = uVar16 + lVar11;
                lVar11 = lVar11 + 8;
                uVar16 = uVar16 & uVar18;
                uVar10 = NEON_cmlt(*(undefined8 *)((long)__s + uVar16),0,1);
              } while (uVar10 == 0);
            }
            uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
            uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
            uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
            uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
            uVar16 = uVar16 + ((ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3) & uVar18;
            if (-1 < *(char *)((long)__s + uVar16)) {
              uVar16 = NEON_cmlt(*__s,0,1);
              uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
              uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
              uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
              uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
              uVar16 = (ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3;
            }
            puVar15 = puVar13 + ~uVar2 * 7;
            bVar4 = (byte)(uVar17 >> 0x38);
            *(byte *)((long)__s + uVar16) = bVar4 >> 1;
            uVar14 = uVar14 - 1;
            puVar12 = __s + ~uVar16 * 7;
            *(byte *)((long)__s + (uVar16 - 8 & uVar18) + 8) = bVar4 >> 1;
            uVar26 = puVar15[3];
            uVar25 = puVar15[2];
            uVar22 = puVar15[5];
            uVar9 = puVar15[4];
            uVar24 = puVar15[1];
            uVar23 = *puVar15;
            uVar21 = uVar21 - 1 & uVar21;
            puVar12[6] = puVar15[6];
            puVar12[3] = uVar26;
            puVar12[2] = uVar25;
            puVar12[5] = uVar22;
            puVar12[4] = uVar9;
            puVar12[1] = uVar24;
            *puVar12 = uVar23;
          } while (uVar14 != 0);
        }
        *param_1 = (long)__s;
        param_1[1] = uVar18;
        param_1[2] = uVar1 - uVar19;
        param_1[3] = uVar19;
        if (uVar20 == 0) {
          return 0xffffffffffffffff;
        }
        lVar6 = uVar20 * 0x38 + 0x38;
        if (uVar20 + lVar6 == -9) {
          return 0xffffffffffffffff;
        }
        free((void *)((long)puVar13 - lVar6));
        return 0xffffffffffffffff;
      }
    }
  }
LAB_0055ccd8:
  puStack_58 = (undefined1 *)&local_60;
  uVar9 = <hashbrown::raw::hashbrown::raw::Fallibility>::capacity_overflow(param_4);
  return uVar9;
}


// ===== 0055cd54  <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(flux[2406cd06d16b4816]::persistence::schema::TableAlias,flux[2406cd06d16b4816]::persistence::schema::TableName)>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<flux[2406cd06d16b4816]::persistence::schema::TableAlias,flux[2406cd06d16b4816]::persistence::schema::TableName,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::{closure#0}> =====

/* <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(flux[2406cd06d16b4816]::persistence::schema::TableAlias,
   flux[2406cd06d16b4816]::persistence::schema::TableName)>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<flux[2406cd06d16b4816]::persistence::schema::TableAlias,
   flux[2406cd06d16b4816]::persistence::schema::TableName,
   core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::{closure#0}>
    */

undefined8
<hashbrown[32fc5d502e7f9af5]::raw::RawTable<(flux[2406cd06d16b4816]::persistence::schema::TableAlias,flux[2406cd06d16b4816]::persistence::schema::TableName)>>
::reserve_rehash::
<hashbrown[32fc5d502e7f9af5]::map::make_hasher<flux[2406cd06d16b4816]::persistence::schema::TableAlias,flux[2406cd06d16b4816]::persistence::schema::TableName,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::_closure_0_>
          (long *param_1,ulong param_2,undefined8 param_3,undefined4 param_4)

{
  ulong uVar1;
  undefined8 *__s;
  ulong uVar2;
  undefined1 auVar3 [16];
  byte bVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong *puVar7;
  ulong *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 local_60;
  undefined1 *puStack_58;
  
  puStack_58 = (undefined1 *)&local_60;
  uVar18 = param_1[3];
  uVar21 = uVar18 + param_2;
  local_60 = param_3;
  if (!CARRY8(uVar18,param_2)) {
    uVar19 = param_1[1];
    uVar14 = uVar19;
    if (7 < uVar19) {
      uVar14 = (uVar19 + 1 >> 3) * 7;
    }
    if (uVar21 <= uVar14 >> 1) {
      FUN_0055db9c(param_1,&puStack_58,FUN_0055da8c,0x28,FUN_0055e870);
      return 0xffffffffffffffff;
    }
    if (uVar21 < uVar14 + 1) {
      uVar21 = uVar14 + 1;
    }
    if (uVar21 < 0xf) {
      uVar14 = 4;
      if (3 < uVar21) {
        uVar14 = (uVar21 & 8) + 8;
      }
    }
    else {
      if (uVar21 >> 0x3d != 0) goto LAB_0055d048;
      uVar14 = (0xffffffffffffffffU >> (LZCOUNT((uVar21 * 8) / 7 - 1) & 0x3fU)) + 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar14;
    if (SUB168(auVar3 * ZEXT816(0x28),8) == 0) {
      uVar21 = uVar14 + 8;
      uVar20 = uVar14 * 0x28;
      uVar1 = uVar20 + uVar21;
      if ((!CARRY8(uVar20,uVar21)) && (uVar1 < 0x7ffffffffffffff9)) {
        puStack_58 = (undefined1 *)&local_60;
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        lVar6 = FUN_004b25a4(uVar1,8);
        if (lVar6 == 0) {
          uVar9 = <hashbrown::raw::hashbrown::raw::Fallibility>::alloc_err(param_4,8,uVar1);
          return uVar9;
        }
        __s = (undefined8 *)(lVar6 + uVar20);
        uVar20 = uVar14 - 1;
        uVar1 = uVar20;
        if (8 < uVar14) {
          uVar1 = (uVar14 >> 3) * 7;
        }
        memset(__s,0xff,uVar21);
        if (uVar18 == 0) {
          puVar13 = (undefined8 *)*param_1;
        }
        else {
          puVar13 = (undefined8 *)*param_1;
          lVar6 = 0;
          uVar21 = NEON_cmge(*puVar13,0,1);
          uVar21 = uVar21 & 0x8080808080808080;
          puVar5 = puVar13;
          uVar14 = uVar18;
          do {
            for (; uVar21 == 0; uVar21 = uVar21 & 0x8080808080808080) {
              lVar6 = lVar6 + 8;
              uVar21 = NEON_cmge(puVar5[1],0,1);
              puVar5 = puVar5 + 1;
            }
            uVar2 = (uVar21 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar21 >> 7 & 0xff00ff00ff00ff) << 8;
            uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
            uVar2 = lVar6 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3);
            puVar7 = (ulong *)puVar13[uVar2 * -5 + -5];
            uVar16 = puVar13[uVar2 * -5 + -4];
            if (uVar16 < 8) {
              uVar10 = 0;
            }
            else {
              uVar10 = 0;
              puVar8 = puVar7;
              do {
                puVar7 = puVar8 + 1;
                uVar16 = uVar16 - 8;
                uVar10 = (*puVar8 ^ (uVar10 >> 0x3b | uVar10 << 5)) * 0x517cc1b727220a95;
                puVar8 = puVar7;
              } while (7 < uVar16);
            }
            puVar8 = puVar7;
            if (3 < uVar16) {
              puVar8 = (ulong *)((long)puVar7 + 4);
              uVar16 = uVar16 - 4;
              uVar10 = ((ulong)(uint)*puVar7 ^ (uVar10 >> 0x3b | uVar10 << 5)) * 0x517cc1b727220a95;
            }
            for (; uVar16 != 0; uVar16 = uVar16 - 1) {
              uVar10 = ((ulong)(byte)*puVar8 ^ (uVar10 >> 0x3b | uVar10 << 5)) * 0x517cc1b727220a95;
              puVar8 = (ulong *)((long)puVar8 + 1);
            }
            uVar17 = ((uVar10 >> 0x3b | uVar10 << 5) ^ 0xff) * 0x517cc1b727220a95;
            uVar16 = uVar17 & uVar20;
            uVar10 = NEON_cmlt(*(undefined8 *)((long)__s + uVar16),0,1);
            if (uVar10 == 0) {
              lVar11 = 8;
              do {
                uVar16 = uVar16 + lVar11;
                lVar11 = lVar11 + 8;
                uVar16 = uVar16 & uVar20;
                uVar10 = NEON_cmlt(*(undefined8 *)((long)__s + uVar16),0,1);
              } while (uVar10 == 0);
            }
            uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
            uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
            uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
            uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
            uVar16 = uVar16 + ((ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3) & uVar20;
            if (-1 < *(char *)((long)__s + uVar16)) {
              uVar16 = NEON_cmlt(*__s,0,1);
              uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
              uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
              uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
              uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
              uVar16 = (ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3;
            }
            puVar15 = puVar13 + ~uVar2 * 5;
            bVar4 = (byte)(uVar17 >> 0x38);
            *(byte *)((long)__s + uVar16) = bVar4 >> 1;
            uVar14 = uVar14 - 1;
            puVar12 = __s + ~uVar16 * 5;
            *(byte *)((long)__s + (uVar16 - 8 & uVar20) + 8) = bVar4 >> 1;
            uVar24 = puVar15[1];
            uVar23 = *puVar15;
            uVar22 = puVar15[3];
            uVar9 = puVar15[2];
            uVar21 = uVar21 - 1 & uVar21;
            puVar12[4] = puVar15[4];
            puVar12[1] = uVar24;
            *puVar12 = uVar23;
            puVar12[3] = uVar22;
            puVar12[2] = uVar9;
          } while (uVar14 != 0);
        }
        *param_1 = (long)__s;
        param_1[1] = uVar20;
        param_1[2] = uVar1 - uVar18;
        param_1[3] = uVar18;
        if (uVar19 == 0) {
          return 0xffffffffffffffff;
        }
        lVar6 = uVar19 * 0x28 + 0x28;
        if (uVar19 + lVar6 == -9) {
          return 0xffffffffffffffff;
        }
        free((void *)((long)puVar13 - lVar6));
        return 0xffffffffffffffff;
      }
    }
  }
LAB_0055d048:
  puStack_58 = (undefined1 *)&local_60;
  uVar9 = <hashbrown::raw::hashbrown::raw::Fallibility>::capacity_overflow(param_4);
  return uVar9;
}


// ===== 0055d0c4  FUN_0055d0c4 =====

void FUN_0055d0c4(undefined8 *param_1,long *param_2,ulong param_3,long param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  void *__s1;
  ulong uVar4;
  size_t __n;
  int iVar5;
  long lVar6;
  undefined1 uVar7;
  ulong uVar8;
  byte bVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar3 = *param_2;
  uVar4 = param_2[1];
  bVar9 = (byte)(param_3 >> 0x39);
  uVar11 = CONCAT17(bVar9,CONCAT16(bVar9,CONCAT15(bVar9,CONCAT14(bVar9,CONCAT13(bVar9,CONCAT12(bVar9
                                                  ,CONCAT11(bVar9,bVar9)))))));
  __s1 = *(void **)(param_4 + 8);
  __n = *(size_t *)(param_4 + 0x10);
  lVar6 = 0;
  param_3 = param_3 & uVar4;
  uVar13 = *(undefined8 *)(lVar3 + param_3);
  uVar10 = NEON_cmeq(uVar13,uVar11,1);
  uVar10 = uVar10 & 0x8080808080808080;
  while( true ) {
    for (; uVar10 == 0; uVar10 = uVar10 & 0x8080808080808080) {
      uVar13 = NEON_cmeq(uVar13,0xffffffffffffffff,1);
      bVar9 = NEON_umaxv(uVar13,1);
      if ((bVar9 & 1) != 0) {
        *param_1 = 0xffffffffffffffff;
        return;
      }
      lVar6 = lVar6 + 8;
      param_3 = param_3 + lVar6 & uVar4;
      uVar13 = *(undefined8 *)(lVar3 + param_3);
      uVar10 = NEON_cmeq(uVar13,uVar11,1);
    }
    uVar8 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
    uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
    uVar8 = param_3 + ((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3) & uVar4;
    lVar1 = lVar3 + uVar8 * -0x18;
    if ((__n == *(size_t *)(lVar1 + -8)) &&
       (iVar5 = memcmp(__s1,*(void **)(lVar1 + -0x10),__n), iVar5 == 0)) break;
    uVar10 = uVar10 - 1 & uVar10;
  }
  lVar6 = ((long)(uVar8 * 0x18) >> 3) * -0x5555555555555555;
  uVar10 = NEON_cmeq(*(undefined8 *)(lVar3 + lVar6),0xffffffffffffffff,1);
  puVar2 = (undefined8 *)(lVar3 + (lVar6 - 8U & uVar4));
  uVar13 = NEON_cmeq(*puVar2,0xffffffffffffffff,1);
  uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
  uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
  uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
  uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
  if (((ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3) + ((ulong)LZCOUNT(uVar13) >> 3) < 8) {
    param_2[2] = param_2[2] + 1;
    uVar7 = 0xff;
  }
  else {
    uVar7 = 0x80;
  }
  *(undefined1 *)(lVar3 + lVar6) = uVar7;
  lVar6 = param_2[3];
  *(undefined1 *)(puVar2 + 1) = uVar7;
  uVar12 = *(undefined8 *)(lVar1 + -0x10);
  uVar11 = *(undefined8 *)(lVar1 + -0x18);
  uVar13 = *(undefined8 *)(lVar1 + -8);
  param_2[3] = lVar6 + -1;
  param_1[1] = uVar12;
  *param_1 = uVar11;
  param_1[2] = uVar13;
  return;
}


// ===== 0055d274  <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(flux[2406cd06d16b4816]::persistence::schema::TableName,())>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<flux[2406cd06d16b4816]::persistence::schema::TableName, =====

/* <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(flux[2406cd06d16b4816]::persistence::schema::TableName,
   ())>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<flux[2406cd06d16b4816]::persistence::schema::TableName,
   (), 
   core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::{closure#0}>
    */

undefined8
<hashbrown[32fc5d502e7f9af5]::raw::RawTable<(flux[2406cd06d16b4816]::persistence::schema::
TableName,())>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::
make_hasher<flux[2406cd06d16b4816]::persistence::schema::TableName_(void)

{
  ulong uVar1;
  undefined8 *__s;
  ulong uVar2;
  undefined1 auVar3 [16];
  byte bVar4;
  undefined8 *puVar5;
  long *in_x0;
  long lVar6;
  ulong *puVar7;
  ulong *puVar8;
  undefined8 uVar9;
  ulong in_x1;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined4 in_w3;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined1 local_60 [8];
  undefined1 *puStack_58;
  
  puStack_58 = local_60;
  uVar18 = in_x0[3];
  uVar21 = uVar18 + in_x1;
  if (!CARRY8(uVar18,in_x1)) {
    uVar19 = in_x0[1];
    uVar14 = uVar19;
    if (7 < uVar19) {
      uVar14 = (uVar19 + 1 >> 3) * 7;
    }
    if (uVar21 <= uVar14 >> 1) {
      FUN_0055db9c(in_x0,&puStack_58,FUN_0055db14,0x18,FUN_0055e838);
      return 0xffffffffffffffff;
    }
    if (uVar21 < uVar14 + 1) {
      uVar21 = uVar14 + 1;
    }
    if (uVar21 < 0xf) {
      uVar14 = 4;
      if (3 < uVar21) {
        uVar14 = (uVar21 & 8) + 8;
      }
    }
    else {
      if (uVar21 >> 0x3d != 0) goto LAB_0055d568;
      uVar14 = (0xffffffffffffffffU >> (LZCOUNT((uVar21 * 8) / 7 - 1) & 0x3fU)) + 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar14;
    if (SUB168(auVar3 * ZEXT816(0x18),8) == 0) {
      uVar21 = uVar14 + 8;
      uVar20 = uVar14 * 0x18;
      uVar1 = uVar20 + uVar21;
      if ((!CARRY8(uVar20,uVar21)) && (uVar1 < 0x7ffffffffffffff9)) {
        puStack_58 = local_60;
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        lVar6 = FUN_004b25a4(uVar1,8);
        if (lVar6 == 0) {
          uVar9 = <hashbrown::raw::hashbrown::raw::Fallibility>::alloc_err(in_w3,8,uVar1);
          return uVar9;
        }
        __s = (undefined8 *)(lVar6 + uVar20);
        uVar20 = uVar14 - 1;
        uVar1 = uVar20;
        if (8 < uVar14) {
          uVar1 = (uVar14 >> 3) * 7;
        }
        memset(__s,0xff,uVar21);
        if (uVar18 == 0) {
          puVar13 = (undefined8 *)*in_x0;
        }
        else {
          puVar13 = (undefined8 *)*in_x0;
          lVar6 = 0;
          uVar21 = NEON_cmge(*puVar13,0,1);
          uVar21 = uVar21 & 0x8080808080808080;
          puVar5 = puVar13;
          uVar14 = uVar18;
          do {
            for (; uVar21 == 0; uVar21 = uVar21 & 0x8080808080808080) {
              lVar6 = lVar6 + 8;
              uVar21 = NEON_cmge(puVar5[1],0,1);
              puVar5 = puVar5 + 1;
            }
            uVar2 = (uVar21 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar21 >> 7 & 0xff00ff00ff00ff) << 8;
            uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
            uVar2 = lVar6 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3);
            puVar7 = (ulong *)puVar13[uVar2 * -3 + -2];
            uVar16 = puVar13[uVar2 * -3 + -1];
            if (uVar16 < 8) {
              uVar10 = 0;
            }
            else {
              uVar10 = 0;
              puVar8 = puVar7;
              do {
                puVar7 = puVar8 + 1;
                uVar16 = uVar16 - 8;
                uVar10 = (*puVar8 ^ (uVar10 >> 0x3b | uVar10 << 5)) * 0x517cc1b727220a95;
                puVar8 = puVar7;
              } while (7 < uVar16);
            }
            puVar8 = puVar7;
            if (3 < uVar16) {
              puVar8 = (ulong *)((long)puVar7 + 4);
              uVar16 = uVar16 - 4;
              uVar10 = ((ulong)(uint)*puVar7 ^ (uVar10 >> 0x3b | uVar10 << 5)) * 0x517cc1b727220a95;
            }
            for (; uVar16 != 0; uVar16 = uVar16 - 1) {
              uVar10 = ((ulong)(byte)*puVar8 ^ (uVar10 >> 0x3b | uVar10 << 5)) * 0x517cc1b727220a95;
              puVar8 = (ulong *)((long)puVar8 + 1);
            }
            uVar17 = ((uVar10 >> 0x3b | uVar10 << 5) ^ 0xff) * 0x517cc1b727220a95;
            uVar16 = uVar17 & uVar20;
            uVar10 = NEON_cmlt(*(undefined8 *)((long)__s + uVar16),0,1);
            if (uVar10 == 0) {
              lVar11 = 8;
              do {
                uVar16 = uVar16 + lVar11;
                lVar11 = lVar11 + 8;
                uVar16 = uVar16 & uVar20;
                uVar10 = NEON_cmlt(*(undefined8 *)((long)__s + uVar16),0,1);
              } while (uVar10 == 0);
            }
            uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
            uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
            uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
            uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
            uVar16 = uVar16 + ((ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3) & uVar20;
            if (-1 < *(char *)((long)__s + uVar16)) {
              uVar16 = NEON_cmlt(*__s,0,1);
              uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
              uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
              uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
              uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
              uVar16 = (ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3;
            }
            puVar15 = puVar13 + ~uVar2 * 3;
            bVar4 = (byte)(uVar17 >> 0x38);
            *(byte *)((long)__s + uVar16) = bVar4 >> 1;
            uVar14 = uVar14 - 1;
            puVar12 = __s + ~uVar16 * 3;
            *(byte *)((long)__s + (uVar16 - 8 & uVar20) + 8) = bVar4 >> 1;
            uVar22 = puVar15[1];
            uVar9 = *puVar15;
            uVar21 = uVar21 - 1 & uVar21;
            puVar12[2] = puVar15[2];
            puVar12[1] = uVar22;
            *puVar12 = uVar9;
          } while (uVar14 != 0);
        }
        *in_x0 = (long)__s;
        in_x0[1] = uVar20;
        in_x0[2] = uVar1 - uVar18;
        in_x0[3] = uVar18;
        if (uVar19 == 0) {
          return 0xffffffffffffffff;
        }
        lVar6 = uVar19 * 0x18 + 0x18;
        if (uVar19 + lVar6 == -9) {
          return 0xffffffffffffffff;
        }
        free((void *)((long)puVar13 - lVar6));
        return 0xffffffffffffffff;
      }
    }
  }
LAB_0055d568:
  puStack_58 = local_60;
  uVar9 = <hashbrown::raw::hashbrown::raw::Fallibility>::capacity_overflow(in_w3);
  return uVar9;
}


// ===== 0055d5e4  FUN_0055d5e4 =====

void FUN_0055d5e4(long *param_1,undefined8 param_2,long param_3,long param_4)

{
  if (param_1[1] != 0) {
    free((void *)(*param_1 - ((param_4 + param_3 + param_3 * param_1[1]) - 1U & -param_4)));
    return;
  }
  return;
}


// ===== 0055d61c  FUN_0055d61c =====

void FUN_0055d61c(long *param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  long local_b8;
  void *pvStack_b0;
  undefined8 local_a8;
  long local_a0;
  void *pvStack_98;
  undefined8 local_90;
  long *local_80;
  code *local_78;
  long lStack_70;
  undefined *local_68;
  
  lVar9 = *param_1;
  uVar10 = param_1[1];
  uVar1 = *param_3;
  plVar3 = (long *)param_3[1];
  puVar7 = (undefined8 *)param_1[2];
  do {
    if (uVar10 == 0) {
      puVar8 = puVar7;
      if (param_2 == 0) {
        return;
      }
      do {
        puVar7 = puVar8 + 1;
        lVar9 = lVar9 + -0x1c0;
        uVar10 = NEON_cmge(*puVar8,0,1);
        uVar10 = uVar10 & 0x8080808080808080;
        puVar8 = puVar7;
      } while (uVar10 == 0);
      *param_1 = lVar9;
      param_1[1] = uVar10;
      param_1[2] = (long)puVar7;
    }
    uVar5 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
    uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
    uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
    uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
    uVar10 = uVar10 - 1 & uVar10;
    param_1[1] = uVar10;
    lVar6 = lVar9 + (long)-(int)((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3) * 0x38;
    local_b8 = *plVar3;
    pvStack_b0 = (void *)plVar3[1];
    uVar2 = *(undefined8 *)(lVar6 + -0x38);
    uVar4 = *(undefined8 *)(lVar6 + -0x30);
    local_80 = &local_b8;
    local_78 = (code *)PTR_fmt_00b00d60;
    alloc::fmt::format::format_inner(&local_a0,&DAT_002b2ea9,&local_80);
    local_80 = &local_a0;
    lStack_70 = lVar6 + -0x10;
    local_78 = FUN_00562370;
    local_68 = PTR_fmt_00b00d48;
                    /* try { // try from 0055d700 to 0055d713 has its CatchHandler @ 0055d79c */
    alloc::fmt::format::format_inner(&local_b8,&DAT_002a4675,&local_80);
    if (local_a0 != 0) {
      free(pvStack_98);
    }
    local_90 = local_a8;
    pvStack_98 = pvStack_b0;
    local_a0 = local_b8;
    FUN_00566e4c(&local_80,uVar1,uVar2,uVar4,&local_a0);
    if ((local_80 != (long *)0xffffffffffffffff) && (local_80 != (long *)0x0)) {
      free(local_78);
    }
    param_2 = param_2 + -1;
  } while( true );
}


// ===== 0055d7bc  FUN_0055d7bc =====

void FUN_0055d7bc(undefined8 *param_1)

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


// ===== 0055d8f4  FUN_0055d8f4 =====

long FUN_0055d8f4(undefined8 param_1,long *param_2,long param_3)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  
  uVar5 = 0;
  lVar1 = *param_2 + param_3 * -0x38;
  puVar2 = *(ulong **)(lVar1 + -0x30);
  for (uVar3 = *(ulong *)(lVar1 + -0x28); 7 < uVar3; uVar3 = uVar3 - 8) {
    uVar5 = (*puVar2 ^ (uVar5 >> 0x3b | uVar5 << 5)) * 0x517cc1b727220a95;
    puVar2 = puVar2 + 1;
  }
  puVar4 = puVar2;
  if (3 < uVar3) {
    puVar4 = (ulong *)((long)puVar2 + 4);
    uVar3 = uVar3 - 4;
    uVar5 = ((ulong)(uint)*puVar2 ^ (uVar5 >> 0x3b | uVar5 << 5)) * 0x517cc1b727220a95;
  }
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    uVar5 = ((ulong)(byte)*puVar4 ^ (uVar5 >> 0x3b | uVar5 << 5)) * 0x517cc1b727220a95;
    puVar4 = (ulong *)((long)puVar4 + 1);
  }
  return ((uVar5 >> 0x3b | uVar5 << 5) ^ 0xff) * 0x517cc1b727220a95;
}


// ===== 0055d97c  FUN_0055d97c =====

long FUN_0055d97c(undefined8 param_1,long *param_2,long param_3)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  
  uVar5 = 0;
  lVar1 = *param_2 + param_3 * -0x18;
  puVar2 = *(ulong **)(lVar1 + -0x10);
  for (uVar3 = *(ulong *)(lVar1 + -8); 7 < uVar3; uVar3 = uVar3 - 8) {
    uVar5 = (*puVar2 ^ (uVar5 >> 0x3b | uVar5 << 5)) * 0x517cc1b727220a95;
    puVar2 = puVar2 + 1;
  }
  puVar4 = puVar2;
  if (3 < uVar3) {
    puVar4 = (ulong *)((long)puVar2 + 4);
    uVar3 = uVar3 - 4;
    uVar5 = ((ulong)(uint)*puVar2 ^ (uVar5 >> 0x3b | uVar5 << 5)) * 0x517cc1b727220a95;
  }
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    uVar5 = ((ulong)(byte)*puVar4 ^ (uVar5 >> 0x3b | uVar5 << 5)) * 0x517cc1b727220a95;
    puVar4 = (ulong *)((long)puVar4 + 1);
  }
  return ((uVar5 >> 0x3b | uVar5 << 5) ^ 0xff) * 0x517cc1b727220a95;
}


// ===== 0055da04  FUN_0055da04 =====

long FUN_0055da04(undefined8 param_1,long *param_2,long param_3)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  
  uVar5 = 0;
  lVar1 = *param_2 + param_3 * -0x38;
  puVar2 = *(ulong **)(lVar1 + -0x38);
  for (uVar3 = *(ulong *)(lVar1 + -0x30); 7 < uVar3; uVar3 = uVar3 - 8) {
    uVar5 = (*puVar2 ^ (uVar5 >> 0x3b | uVar5 << 5)) * 0x517cc1b727220a95;
    puVar2 = puVar2 + 1;
  }
  puVar4 = puVar2;
  if (3 < uVar3) {
    puVar4 = (ulong *)((long)puVar2 + 4);
    uVar3 = uVar3 - 4;
    uVar5 = ((ulong)(uint)*puVar2 ^ (uVar5 >> 0x3b | uVar5 << 5)) * 0x517cc1b727220a95;
  }
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    uVar5 = ((ulong)(byte)*puVar4 ^ (uVar5 >> 0x3b | uVar5 << 5)) * 0x517cc1b727220a95;
    puVar4 = (ulong *)((long)puVar4 + 1);
  }
  return ((uVar5 >> 0x3b | uVar5 << 5) ^ 0xff) * 0x517cc1b727220a95;
}


// ===== 0055da8c  FUN_0055da8c =====

long FUN_0055da8c(undefined8 param_1,long *param_2,long param_3)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  
  uVar5 = 0;
  lVar1 = *param_2 + param_3 * -0x28;
  puVar2 = *(ulong **)(lVar1 + -0x28);
  for (uVar3 = *(ulong *)(lVar1 + -0x20); 7 < uVar3; uVar3 = uVar3 - 8) {
    uVar5 = (*puVar2 ^ (uVar5 >> 0x3b | uVar5 << 5)) * 0x517cc1b727220a95;
    puVar2 = puVar2 + 1;
  }
  puVar4 = puVar2;
  if (3 < uVar3) {
    puVar4 = (ulong *)((long)puVar2 + 4);
    uVar3 = uVar3 - 4;
    uVar5 = ((ulong)(uint)*puVar2 ^ (uVar5 >> 0x3b | uVar5 << 5)) * 0x517cc1b727220a95;
  }
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    uVar5 = ((ulong)(byte)*puVar4 ^ (uVar5 >> 0x3b | uVar5 << 5)) * 0x517cc1b727220a95;
    puVar4 = (ulong *)((long)puVar4 + 1);
  }
  return ((uVar5 >> 0x3b | uVar5 << 5) ^ 0xff) * 0x517cc1b727220a95;
}


// ===== 0055db14  FUN_0055db14 =====

long FUN_0055db14(undefined8 param_1,long *param_2,long param_3)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  
  uVar5 = 0;
  lVar1 = *param_2 + param_3 * -0x18;
  puVar2 = *(ulong **)(lVar1 + -0x10);
  for (uVar3 = *(ulong *)(lVar1 + -8); 7 < uVar3; uVar3 = uVar3 - 8) {
    uVar5 = (*puVar2 ^ (uVar5 >> 0x3b | uVar5 << 5)) * 0x517cc1b727220a95;
    puVar2 = puVar2 + 1;
  }
  puVar4 = puVar2;
  if (3 < uVar3) {
    puVar4 = (ulong *)((long)puVar2 + 4);
    uVar3 = uVar3 - 4;
    uVar5 = ((ulong)(uint)*puVar2 ^ (uVar5 >> 0x3b | uVar5 << 5)) * 0x517cc1b727220a95;
  }
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    uVar5 = ((ulong)(byte)*puVar4 ^ (uVar5 >> 0x3b | uVar5 << 5)) * 0x517cc1b727220a95;
    puVar4 = (ulong *)((long)puVar4 + 1);
  }
  return ((uVar5 >> 0x3b | uVar5 << 5) ^ 0xff) * 0x517cc1b727220a95;
}


// ===== 0055db9c  FUN_0055db9c =====

void FUN_0055db9c(long *param_1,undefined8 param_2,code *param_3,size_t param_4)

{
  undefined8 *puVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  ulong *__src;
  undefined8 *__dest;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  void *__src_00;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  uVar11 = param_1[1];
  uVar10 = uVar11 + 1;
  if (uVar11 == 0xffffffffffffffff) {
    uVar10 = 0;
  }
  else {
    __src = (ulong *)*param_1;
    uVar5 = uVar10 >> 3;
    puVar6 = __src;
    if ((uVar10 & 7) != 0) {
      uVar5 = uVar5 + 1;
    }
    do {
      uVar5 = uVar5 - 1;
      uVar13 = NEON_cmlt(*puVar6,0,1);
      *puVar6 = uVar13 | 0x8080808080808080;
      puVar6 = puVar6 + 1;
    } while (uVar5 != 0);
    if (uVar10 < 8) {
      memmove(__src + 1,__src,uVar10);
    }
    else {
      *(ulong *)((long)__src + uVar10) = *__src;
    }
    uVar10 = 0;
    do {
      if (*(char *)(*param_1 + uVar10) == -0x80) {
        __src_00 = (void *)(*param_1 + param_4 * ~uVar10);
        while( true ) {
                    /* try { // try from 0055dc30 to 0055dc3f has its CatchHandler @ 0055ddf0 */
          uVar13 = (*param_3)(param_2,param_1,uVar10);
          puVar1 = (undefined8 *)*param_1;
          uVar5 = param_1[1];
          uVar7 = uVar5 & uVar13;
          uVar12 = NEON_cmlt(*(undefined8 *)((long)puVar1 + uVar7),0,1);
          if (uVar12 == 0) {
            lVar9 = 8;
            uVar8 = uVar5 & uVar13;
            do {
              uVar8 = uVar8 + lVar9;
              lVar9 = lVar9 + 8;
              uVar8 = uVar8 & uVar5;
              uVar12 = NEON_cmlt(*(undefined8 *)((long)puVar1 + uVar8),0,1);
            } while (uVar12 == 0);
          }
          else {
            uVar8 = uVar5 & uVar13;
          }
          uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
          uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
          uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
          uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
          uVar12 = uVar8 + ((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3) & uVar5;
          bVar3 = (byte)(uVar13 >> 0x38);
          if (*(char *)((long)puVar1 + uVar12) < '\0') {
            uVar13 = uVar12 - uVar7 ^ uVar10 - uVar7;
          }
          else {
            uVar13 = NEON_cmlt(*puVar1,0,1);
            uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
            uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
            uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
            uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
            uVar12 = (ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3;
            uVar13 = uVar12 - uVar7 ^ uVar10 - uVar7;
          }
          if ((uVar13 & uVar5) < 8) {
            *(byte *)((long)puVar1 + uVar10) = bVar3 >> 1;
            *(byte *)(*param_1 + (uVar5 & uVar10 - 8) + 8) = bVar3 >> 1;
            goto LAB_0055dd40;
          }
          __dest = (undefined8 *)((long)puVar1 + param_4 * ~uVar12);
          cVar2 = *(char *)((long)puVar1 + uVar12);
          *(byte *)((long)puVar1 + uVar12) = bVar3 >> 1;
          *(byte *)(*param_1 + (uVar12 - 8 & uVar5) + 8) = bVar3 >> 1;
          if (cVar2 == -1) break;
          FUN_0055deec(__src_00,__dest,param_4);
        }
        uVar5 = param_1[1];
        *(undefined1 *)(*param_1 + uVar10) = 0xff;
        *(undefined1 *)(*param_1 + (uVar5 & uVar10 - 8) + 8) = 0xff;
        memcpy(__dest,__src_00,param_4);
      }
LAB_0055dd40:
      bVar4 = uVar10 != uVar11;
      uVar10 = uVar10 + 1;
    } while (bVar4);
    uVar10 = param_1[1];
    if (7 < uVar10) {
      uVar10 = (uVar10 + 1 >> 3) * 7;
    }
  }
  param_1[2] = uVar10 - param_1[3];
  return;
}


// ===== 0055de08  FUN_0055de08 =====

void FUN_0055de08(long *param_1)

{
  void *__ptr;
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  
  lVar4 = param_1[4];
  if (lVar4 != 0) {
    lVar5 = *param_1;
    uVar8 = param_1[1];
    puVar6 = (undefined8 *)param_1[2];
    do {
      puVar7 = puVar6;
      if (uVar8 == 0) {
        do {
          puVar6 = puVar7 + 1;
          lVar5 = lVar5 + -0x100;
          uVar8 = NEON_cmge(*puVar7,0,1);
          uVar8 = uVar8 & 0x8080808080808080;
          puVar7 = puVar6;
        } while (uVar8 == 0);
        param_1[2] = (long)puVar6;
        *param_1 = lVar5;
      }
      uVar1 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      lVar4 = lVar4 + -1;
      uVar8 = uVar8 - 1 & uVar8;
      param_1[4] = lVar4;
      param_1[1] = uVar8;
      lVar3 = lVar5 + (LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) & 0x78U) * -4;
      __ptr = *(void **)(lVar3 + -0x10);
      puVar7 = *(undefined8 **)(lVar3 + -8);
      pcVar2 = (code *)*puVar7;
      if (pcVar2 != (code *)0x0) {
                    /* try { // try from 0055de94 to 0055de9b has its CatchHandler @ 0055decc */
        (*pcVar2)(__ptr);
      }
      if (puVar7[1] != 0) {
        free(__ptr);
      }
    } while (lVar4 != 0);
  }
  return;
}


// ===== 0055deec  FUN_0055deec =====

void FUN_0055deec(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  uVar6 = param_3 >> 3;
  uVar7 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar7;
  if (uVar6 != 1) {
    uVar7 = param_1[1];
    param_1[1] = param_2[1];
    param_2[1] = uVar7;
    if (uVar6 != 2) {
      uVar7 = param_1[2];
      param_1[2] = param_2[2];
      param_2[2] = uVar7;
      if (uVar6 != 3) {
        uVar7 = param_1[3];
        param_1[3] = param_2[3];
        param_2[3] = uVar7;
        if (uVar6 != 4) {
          uVar7 = param_1[4];
          param_1[4] = param_2[4];
          param_2[4] = uVar7;
          if (uVar6 != 5) {
            uVar7 = param_1[5];
            param_1[5] = param_2[5];
            param_2[5] = uVar7;
            if (uVar6 != 6) {
              uVar7 = param_1[6];
              param_1[6] = param_2[6];
              param_2[6] = uVar7;
            }
          }
        }
      }
    }
  }
  if ((param_3 & 7) != 0) {
    puVar1 = (undefined4 *)((long)param_1 + (param_3 & 0x38));
    puVar2 = (undefined4 *)((long)param_2 + (param_3 & 0x38));
    if (((uint)param_3 & 7) < 4) {
      uVar6 = 0;
    }
    else {
      uVar3 = *puVar1;
      *puVar1 = *puVar2;
      uVar6 = 4;
      *puVar2 = uVar3;
    }
    if (((uint)param_3 >> 1 & 1) != 0) {
      uVar5 = *(undefined2 *)((long)puVar1 + uVar6);
      *(undefined2 *)((long)puVar1 + uVar6) = *(undefined2 *)((long)puVar2 + uVar6);
      *(undefined2 *)((long)puVar2 + uVar6) = uVar5;
      uVar6 = uVar6 | 2;
    }
    if ((param_3 & 1) != 0) {
      uVar4 = *(undefined1 *)((long)puVar1 + uVar6);
      *(undefined1 *)((long)puVar1 + uVar6) = *(undefined1 *)((long)puVar2 + uVar6);
      *(undefined1 *)((long)puVar2 + uVar6) = uVar4;
    }
  }
  return;
}


// ===== 0055dffc  FUN_0055dffc =====

void FUN_0055dffc(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  
  lVar3 = param_1[7];
  if (lVar3 != 0) {
    lVar4 = param_1[3];
    uVar7 = param_1[4];
    puVar5 = (undefined8 *)param_1[5];
    do {
      puVar6 = puVar5;
      if (uVar7 == 0) {
        do {
          puVar5 = puVar6 + 1;
          lVar4 = lVar4 + -0xc0;
          uVar7 = NEON_cmge(*puVar6,0,1);
          uVar7 = uVar7 & 0x8080808080808080;
          puVar6 = puVar5;
        } while (uVar7 == 0);
        param_1[5] = (long)puVar5;
        param_1[3] = lVar4;
      }
      uVar1 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      lVar3 = lVar3 + -1;
      uVar7 = uVar7 - 1 & uVar7;
      param_1[7] = lVar3;
      param_1[4] = uVar7;
      lVar2 = lVar4 + (long)-(int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) * 0x18;
      if (*(long *)(lVar2 + -0x18) != 0) {
        free(*(void **)(lVar2 + -0x10));
      }
    } while (lVar3 != 0);
  }
  if ((*param_1 != 0) && (param_1[1] != 0)) {
    free((void *)param_1[2]);
    return;
  }
  return;
}


// ===== 0055e0d0  FUN_0055e0d0 =====

void FUN_0055e0d0(long *param_1)

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
          puVar5 = puVar5 + -0x38;
          uVar7 = NEON_cmge(*puVar6,0,1);
          puVar6 = puVar6 + 1;
        }
        uVar1 = (uVar7 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        iVar2 = (int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3);
        if (puVar5[(long)-iVar2 * 7 + -7] != 0) {
          free((void *)puVar5[(long)-iVar2 * 7 + -6]);
        }
        if (puVar5[(long)-iVar2 * 7 + -4] != 0) {
          free((void *)puVar5[(long)-iVar2 * 7 + -3]);
        }
        lVar4 = lVar4 + -1;
        uVar7 = uVar7 - 1 & uVar7;
      } while (lVar4 != 0);
    }
    if (lVar3 * 0x39 != -0x41) {
      free((void *)(*param_1 + lVar3 * -0x38 + -0x38));
      return;
    }
  }
  return;
}


// ===== 0055e1d8  FUN_0055e1d8 =====

void FUN_0055e1d8(long *param_1)

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


// ===== 0055e2cc  FUN_0055e2cc =====

void FUN_0055e2cc(long *param_1)

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
                    /* try { // try from 0055e360 to 0055e367 has its CatchHandler @ 0055e3d0 */
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


// ===== 0055e3f0  FUN_0055e3f0 =====

void FUN_0055e3f0(long *param_1)

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
          puVar4 = puVar4 + -0x30;
          uVar6 = NEON_cmge(*puVar5,0,1);
          puVar5 = puVar5 + 1;
        }
        uVar1 = (uVar6 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar6 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        lVar3 = lVar3 + -1;
        uVar6 = uVar6 - 1 & uVar6;
        FUN_0055e604(puVar4 + (long)-(int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) * 6 +
                              -4);
      } while (lVar3 != 0);
    }
    if (lVar2 * 0x31 != -0x39) {
      free((void *)(*param_1 + lVar2 * -0x30 + -0x30));
      return;
    }
  }
  return;
}


// ===== 0055e4d8  FUN_0055e4d8 =====

void FUN_0055e4d8(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  if ((lVar1 != 0) && (lVar1 * 0x11 != -0x19)) {
    free((void *)(*param_1 + lVar1 * -0x10 + -0x10));
    return;
  }
  return;
}


// ===== 0055e508  FUN_0055e508 =====

void FUN_0055e508(long *param_1)

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
          puVar5 = puVar5 + -0x38;
          uVar7 = NEON_cmge(*puVar6,0,1);
          puVar6 = puVar6 + 1;
        }
        uVar1 = (uVar7 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        iVar2 = (int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3);
        if (puVar5[(long)-iVar2 * 7 + -5] != 0) {
          free((void *)puVar5[(long)-iVar2 * 7 + -4]);
        }
        lVar4 = lVar4 + -1;
        uVar7 = uVar7 - 1 & uVar7;
      } while (lVar4 != 0);
    }
    if (lVar3 * 0x39 != -0x41) {
      free((void *)(*param_1 + lVar3 * -0x38 + -0x38));
      return;
    }
  }
  return;
}


// ===== 0055e604  FUN_0055e604 =====

void FUN_0055e604(long *param_1)

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
          puVar5 = puVar5 + -0x28;
          uVar7 = NEON_cmge(*puVar6,0,1);
          puVar6 = puVar6 + 1;
        }
        uVar1 = (uVar7 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        iVar2 = (int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3);
        if (puVar5[(long)-iVar2 * 5 + -3] != 0) {
          free((void *)puVar5[(long)-iVar2 * 5 + -2]);
        }
        lVar4 = lVar4 + -1;
        uVar7 = uVar7 - 1 & uVar7;
      } while (lVar4 != 0);
    }
    if (lVar3 * 0x29 != -0x31) {
      free((void *)(*param_1 + lVar3 * -0x28 + -0x28));
      return;
    }
  }
  return;
}


// ===== 0055e6f8  FUN_0055e6f8 =====

void FUN_0055e6f8(long *param_1)

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


// ===== 0055e7ec  FUN_0055e7ec =====

void FUN_0055e7ec(long *param_1)

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


// ===== 0055e838  FUN_0055e838 =====

void FUN_0055e838(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 0055e850  FUN_0055e850 =====

void FUN_0055e850(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    free(*(void **)(param_1 + 0x18));
    return;
  }
  return;
}


// ===== 0055e870  FUN_0055e870 =====

void FUN_0055e870(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    free(*(void **)(param_1 + 0x18));
    return;
  }
  return;
}


// ===== 0055e888  FUN_0055e888 =====

/* WARNING: Removing unreachable block (ram,0x0055e99c) */

void FUN_0055e888(ulong *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong __n;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  ulong local_68;
  ulong uStack_60;
  long local_58;
  
  if (-1 < (long)param_3) {
    if (param_3 == 0) {
      uStack_60 = 1;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar2 = 1;
      uStack_60 = FUN_004b25a4(param_3,1);
      if (uStack_60 == 0) goto LAB_0055e8b0;
    }
    uVar4 = 0;
    local_58 = 0;
    local_68 = param_3;
    lVar3 = local_58;
    uVar5 = uVar4;
    do {
      if (param_3 - uVar4 < 0x10) {
        uVar1 = 0;
        if (param_3 == uVar4) {
          auVar6 = ZEXT816(0);
          goto LAB_0055e968;
        }
        while (*(char *)(param_2 + uVar4 + uVar1) != '\"') {
          uVar1 = uVar1 + 1;
          if (param_3 - uVar4 == uVar1) goto LAB_0055ea54;
        }
      }
      else {
                    /* try { // try from 0055e950 to 0055e95f has its CatchHandler @ 0055eae0 */
        auVar6 = core::slice::memchr::memchr_aligned(0x22,param_2 + uVar4,param_3 - uVar4);
LAB_0055e968:
        uVar1 = auVar6._8_8_;
        if (auVar6._0_8_ != 1) break;
      }
      uVar1 = uVar1 + uVar4;
      uVar4 = uVar1 + 1;
      if ((uVar1 < param_3) && (*(char *)(param_2 + uVar1) == '\"')) {
        __n = uVar1 - uVar5;
        if (local_68 - lVar3 < __n) {
                    /* try { // try from 0055ea04 to 0055ea47 has its CatchHandler @ 0055eadc */
          FUN_00558b5c(&local_68,lVar3,uVar1 - uVar5,1,1);
          lVar3 = local_58;
        }
        if (uVar1 != uVar5) {
          memcpy((void *)(uStack_60 + lVar3),(void *)(param_2 + uVar5),__n);
        }
        local_58 = lVar3 + __n;
        if (local_68 - local_58 < 2) {
          FUN_00558b5c(&local_68,local_58,2,1,1);
        }
        lVar3 = local_58 + 2;
        *(undefined2 *)(uStack_60 + local_58) = 0x2222;
        uVar5 = uVar4;
        local_58 = lVar3;
      }
    } while (uVar4 <= param_3);
LAB_0055ea54:
    uVar4 = param_3 - uVar5;
    if (local_68 - lVar3 < uVar4) {
                    /* try { // try from 0055eab0 to 0055eac7 has its CatchHandler @ 0055ead8 */
      FUN_00558b5c(&local_68,lVar3,param_3 - uVar5,1,1);
      lVar3 = local_58;
    }
    if (param_3 != uVar5) {
      memcpy((void *)(uStack_60 + lVar3),(void *)(param_2 + uVar5),uVar4);
    }
    param_1[1] = uStack_60;
    *param_1 = local_68;
    param_1[2] = lVar3 + uVar4;
    return;
  }
  uVar2 = 0;
LAB_0055e8b0:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar2,param_3);
}


// ===== 0055eb00  FUN_0055eb00 =====

void FUN_0055eb00(long *param_1)

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


// ===== 0055eb80  FUN_0055eb80 =====

void FUN_0055eb80(long *param_1)

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


// ===== 0055ec00  FUN_0055ec00 =====

void FUN_0055ec00(long *param_1)

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
      puVar2 = puVar2 + 4;
    } while (lVar1 != 0);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 0055ec7c  FUN_0055ec7c =====

void FUN_0055ec7c(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  long local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 uStack_1;
  
  puVar2 = (undefined8 *)*param_1;
  *param_1 = 0;
  if ((puVar2 != (undefined8 *)0x0) && (iVar1 = sqlite3_reset(puVar2[7]), iVar1 != 0)) {
    puVar3 = (ulong *)*puVar2;
    if (0x7ffffffffffffffe < *puVar3) {
                    /* WARNING: Subroutine does not return */
      core::cell::panic_already_mutably_borrowed(&PTR_s__root__cargo_registry_src_index__00acfb88);
    }
    *puVar3 = *puVar3 + 1;
                    /* try { // try from 0055ecc8 to 0055eccf has its CatchHandler @ 0055ed4c */
    rusqlite::error::decode_result_raw(&local_60,puVar3[2],iVar1);
    *puVar3 = *puVar3 - 1;
    if (local_60 == -1) {
                    /* WARNING: Subroutine does not return */
      core::result::unwrap_failed
                ("called `Result::unwrap_err()` on an `Ok` value",0x2e,&uStack_1,&DAT_00acfb50,
                 &PTR_s__root__cargo_registry_src_index__00acfb70);
    }
    uStack_98 = uStack_58;
    local_a0 = local_60;
    uStack_88 = uStack_48;
    uStack_90 = uStack_50;
    uStack_78 = uStack_38;
    local_80 = local_40;
    uStack_68 = uStack_28;
    uStack_70 = uStack_30;
    if (local_60 != -1) {
      FUN_0055ee98(&local_a0);
    }
  }
  return;
}


// ===== 0055ed5c  FUN_0055ed5c =====

void FUN_0055ed5c(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 0055ed74  FUN_0055ed74 =====

void FUN_0055ed74(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  ulong local_80 [3];
  undefined8 local_68;
  ulong local_60;
  undefined8 local_58;
  long lStack_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38 [2];
  long local_28;
  
                    /* try { // try from 0055ed88 to 0055ed8b has its CatchHandler @ 0055ee50 */
  <rusqlite::raw_statement::RawStatement_as_core::ops::drop::Drop>::drop();
  lVar4 = *(long *)(param_1 + 8);
  if (lVar4 == 0) {
    local_40 = 0;
  }
  else {
    local_68 = *(undefined8 *)(param_1 + 0x10);
    local_40 = *(undefined8 *)(param_1 + 0x18);
    local_80[1] = 0;
    local_58 = 0;
    local_80[2] = lVar4;
    lStack_50 = lVar4;
    local_48 = local_68;
  }
  local_80[0] = (ulong)(lVar4 != 0);
                    /* try { // try from 0055edc0 to 0055edcb has its CatchHandler @ 0055ee4c */
  local_60 = local_80[0];
  FUN_0055815c(local_38,local_80);
  while (local_38[0] != 0) {
    lVar4 = local_38[0] + local_28 * 0x20;
    if (0x10 < *(ulong *)(lVar4 + 0x18)) {
      free(*(void **)(lVar4 + 0x10));
    }
                    /* try { // try from 0055edd0 to 0055eddb has its CatchHandler @ 0055ee60 */
    FUN_0055815c(local_38,local_80);
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
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow((undefined8 *)(param_1 + 0x20));
      return;
    }
  }
  return;
}


// ===== 0055ee98  FUN_0055ee98 =====

void FUN_0055ee98(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  void *__ptr;
  
  uVar1 = *param_1;
  uVar2 = uVar1 ^ 0x8000000000000000;
  if (-1 < (long)uVar1) {
    uVar2 = 0x14;
  }
  if ((long)uVar2 < 7) {
    if ((long)uVar2 < 5) {
      if (uVar2 != 0) {
        if (uVar2 != 2) {
          return;
        }
        __ptr = (void *)param_1[1];
        puVar3 = (undefined8 *)param_1[2];
        if ((code *)*puVar3 != (code *)0x0) {
                    /* try { // try from 0055ef38 to 0055ef3f has its CatchHandler @ 0055efd8 */
          (*(code *)*puVar3)(__ptr);
        }
        goto LAB_0055efac;
      }
      if (param_1[1] == 0xffffffffffffffff) {
        return;
      }
      if (param_1[1] == 0) {
        return;
      }
      goto LAB_0055ef70;
    }
    if ((uVar2 != 5) && (uVar2 != 6)) {
      return;
    }
  }
  else if ((long)uVar2 < 0xd) {
    if ((uVar2 != 7) && (uVar2 != 0xc)) {
      return;
    }
  }
  else if (uVar2 != 0xd) {
    if (uVar2 != 0xf) {
      if (uVar2 != 0x14) {
        return;
      }
      if (uVar1 != 0) {
        free((void *)param_1[1]);
      }
      if (param_1[3] == 0) {
        return;
      }
      free((void *)param_1[4]);
      return;
    }
    __ptr = (void *)param_1[1];
    puVar3 = (undefined8 *)param_1[2];
    if ((code *)*puVar3 != (code *)0x0) {
                    /* try { // try from 0055efa4 to 0055efab has its CatchHandler @ 0055efd4 */
      (*(code *)*puVar3)(__ptr);
    }
LAB_0055efac:
    if (puVar3[1] == 0) {
      return;
    }
    free(__ptr);
    return;
  }
  if (param_1[1] == 0) {
    return;
  }
LAB_0055ef70:
  free((void *)param_1[2]);
  return;
}


// ===== 0055effc  FUN_0055effc =====

void FUN_0055effc(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong *puVar4;
  long local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  uVar2 = param_1[7];
  param_1[7] = 0;
  puVar4 = (ulong *)*param_1;
  plVar3 = param_1 + 1;
  uStack_68 = param_1[2];
  local_70 = *plVar3;
  uStack_58 = param_1[4];
  uStack_60 = param_1[3];
  uStack_48 = param_1[6];
  local_50 = param_1[5];
  param_1[2] = 0;
  *plVar3 = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  uVar1 = sqlite3_finalize(uVar2);
  local_40 = 0;
                    /* try { // try from 0055f048 to 0055f04f has its CatchHandler @ 0055f0d8 */
  FUN_0055ed74(&local_70);
  if (*puVar4 < 0x7fffffffffffffff) {
    *puVar4 = *puVar4 + 1;
                    /* try { // try from 0055f06c to 0055f077 has its CatchHandler @ 0055f0c4 */
    rusqlite::error::decode_result_raw(&local_70,puVar4[2],uVar1);
    *puVar4 = *puVar4 - 1;
    if (local_70 != -1) {
                    /* try { // try from 0055f090 to 0055f097 has its CatchHandler @ 0055f0d8 */
      FUN_0055ee98(&local_70);
    }
    FUN_0055ed74(plVar3);
    return;
  }
                    /* try { // try from 0055f0b4 to 0055f0bf has its CatchHandler @ 0055f0d8 */
                    /* WARNING: Subroutine does not return */
  core::cell::panic_already_mutably_borrowed(&PTR_s__root__cargo_registry_src_index__00acfb88);
}


// ===== 0055f0f0  FUN_0055f0f0 =====

void FUN_0055f0f0(long *param_1)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  
  lVar2 = *param_1;
  if (-0x7ffffffffffffffe < lVar2) {
    pvVar1 = (void *)param_1[1];
    lVar3 = param_1[2];
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)((long)pvVar1 + 8);
      do {
        if (puVar4[-1] != 0) {
          free((void *)*puVar4);
        }
        lVar3 = lVar3 + -1;
        puVar4 = puVar4 + 3;
      } while (lVar3 != 0);
    }
    if (lVar2 != 0) {
      free(pvVar1);
    }
    pvVar1 = (void *)param_1[4];
    lVar2 = param_1[5];
    if (lVar2 != 0) {
      puVar4 = (undefined8 *)((long)pvVar1 + 8);
      do {
        if (puVar4[-1] != 0) {
          free((void *)*puVar4);
        }
        lVar2 = lVar2 + -1;
        puVar4 = puVar4 + 3;
      } while (lVar2 != 0);
    }
    if (param_1[3] != 0) {
      free(pvVar1);
      return;
    }
  }
  return;
}


// ===== 0055f1d8  FUN_0055f1d8 =====

void FUN_0055f1d8(long *param_1)

{
  void *__ptr;
  long lVar1;
  undefined8 *puVar2;
  
  if (param_1[4] != 0) {
    free((void *)param_1[5]);
  }
  if (*param_1 == 0) {
    if (param_1[1] != 0) {
      free((void *)param_1[2]);
      return;
    }
  }
  else {
    __ptr = (void *)param_1[2];
    lVar1 = param_1[3];
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
    if (param_1[1] != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 0055f294  FUN_0055f294 =====

void FUN_0055f294(undefined8 param_1,long *param_2)

{
  void *__ptr;
  undefined1 **ppuVar1;
  code *__ptr_00;
  int iVar2;
  undefined1 **local_70;
  code *pcStack_68;
  undefined8 local_60;
  undefined1 *local_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined1 uStack_21;
  
  local_58 = (undefined1 *)&local_70;
  local_70 = (undefined1 **)0x0;
  pcStack_68 = (code *)&DAT_00000001;
  __ptr = (void *)param_2[1];
  local_50 = &DAT_00acfc18;
  uStack_48 = 0x60000020;
  local_60 = 0;
                    /* try { // try from 0055f2dc to 0055f2e7 has its CatchHandler @ 0055f3c8 */
  iVar2 = <str_as_core::fmt::Display>::fmt(__ptr,param_2[2],&local_58);
  __ptr_00 = pcStack_68;
  ppuVar1 = local_70;
  if (iVar2 == 0) {
                    /* try { // try from 0055f2f4 to 0055f2ff has its CatchHandler @ 0055f3b4 */
    FUN_0055e888(&local_58,pcStack_68,local_60);
    if (ppuVar1 != (undefined1 **)0x0) {
      free(__ptr_00);
    }
    local_70 = &local_58;
    pcStack_68 = FUN_00562370;
                    /* try { // try from 0055f324 to 0055f337 has its CatchHandler @ 0055f3a0 */
    alloc::fmt::format::format_inner(param_1,&DAT_002a80cf,&local_70);
    if (local_58 != (undefined1 *)0x0) {
      free(local_50);
    }
    if (*param_2 != 0) {
      free(__ptr);
    }
    return;
  }
                    /* try { // try from 0055f378 to 0055f39b has its CatchHandler @ 0055f3c8 */
                    /* WARNING: Subroutine does not return */
  core::result::unwrap_failed
            ("a Display implementation returned an error unexpectedly",0x37,&uStack_21,&DAT_00acfb30
             ,&PTR_s__nix_store_8006w282fgsx3273c878b_00acfc48);
}


// ===== 0055f3fc  FUN_0055f3fc =====

void FUN_0055f3fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 **ppuVar1;
  code *__ptr;
  int iVar2;
  undefined1 **local_60;
  code *pcStack_58;
  undefined8 local_50;
  undefined1 *local_48;
  undefined8 *local_40;
  undefined8 uStack_38;
  undefined1 uStack_11;
  
  local_48 = (undefined1 *)&local_60;
  local_60 = (undefined1 **)0x0;
  pcStack_58 = (code *)&DAT_00000001;
  local_40 = &DAT_00acfc18;
  uStack_38 = 0x60000020;
  local_50 = 0;
                    /* try { // try from 0055f43c to 0055f44b has its CatchHandler @ 0055f514 */
  iVar2 = <str_as_core::fmt::Display>::fmt(param_2,param_3,&local_48);
  __ptr = pcStack_58;
  ppuVar1 = local_60;
  if (iVar2 == 0) {
                    /* try { // try from 0055f458 to 0055f463 has its CatchHandler @ 0055f500 */
    FUN_0055e888(&local_48,pcStack_58,local_50);
    if (ppuVar1 != (undefined1 **)0x0) {
      free(__ptr);
    }
    local_60 = &local_48;
    pcStack_58 = FUN_00562370;
                    /* try { // try from 0055f488 to 0055f49b has its CatchHandler @ 0055f4ec */
    alloc::fmt::format::format_inner(param_1,&DAT_002a80cf,&local_60);
    if (local_48 != (undefined1 *)0x0) {
      free(local_40);
    }
    return;
  }
                    /* try { // try from 0055f4c4 to 0055f4e7 has its CatchHandler @ 0055f514 */
                    /* WARNING: Subroutine does not return */
  core::result::unwrap_failed
            ("a Display implementation returned an error unexpectedly",0x37,&uStack_11,&DAT_00acfb30
             ,&PTR_s__nix_store_8006w282fgsx3273c878b_00acfc48);
}


// ===== 0055f538  FUN_0055f538 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0055f538(undefined8 *param_1,long *param_2,long param_3,ulong param_4)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x20;
  long local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulong local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  ulong uStack_98;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulong uStack_48;
  
  if (*param_2 != 0) {
    core::cell::panic_already_borrowed(&PTR_s__root__cargo_registry_src_index__00acfbb8);
                    /* catch() { ... } // from try @ 0055f574 with catch @ 0055f73c */
    *unaff_x20 = *unaff_x20 + 1;
                    /* WARNING: Subroutine does not return */
    FUN_00ab2530();
  }
  *param_2 = -1;
                    /* try { // try from 0055f574 to 0055f57f has its CatchHandler @ 0055f73c */
  <rusqlite::inner_connection::rusqlite::inner_connection::InnerConnection>::prepare
            (&local_88,param_2 + 1);
  uStack_c8 = uStack_78;
  local_d0 = local_80;
  uStack_b8 = uStack_68;
  uStack_c0 = local_70;
  uStack_a8 = uStack_58;
  local_b0 = local_60;
  local_a0 = local_50;
  if (local_88 == 0) {
    param_1[7] = local_50;
    param_1[8] = uStack_48;
    lVar2 = *param_2;
    param_1[2] = uStack_78;
    param_1[1] = local_80;
    param_1[4] = uStack_68;
    param_1[3] = local_70;
    param_1[6] = uStack_58;
    param_1[5] = local_60;
    *param_1 = 1;
    *param_2 = lVar2 + 1;
    return;
  }
  local_150 = local_88;
  local_118 = local_50;
  uStack_140 = uStack_78;
  uStack_148 = local_80;
  uStack_130 = uStack_68;
  local_138 = local_70;
  uStack_120 = uStack_58;
  local_128 = local_60;
  *param_2 = *param_2 + 1;
  if (uStack_48 != 0) {
    lVar2 = param_4 - uStack_48;
    if (param_4 < uStack_48 || lVar2 == 0) {
      if (lVar2 != 0) goto LAB_0055f5ec;
    }
    else if (*(char *)(param_3 + uStack_48) + 0x40 < 0 !=
             SCARRY4((int)*(char *)(param_3 + uStack_48),0x40)) {
LAB_0055f5ec:
                    /* try { // try from 0055f5ec to 0055f6c7 has its CatchHandler @ 0055f74c */
                    /* WARNING: Subroutine does not return */
      core::str::slice_error_fail
                (param_3,param_4,uStack_48,param_4,&PTR_s__root__cargo_registry_src_index__00acfba0)
      ;
    }
    FUN_0055f538(&local_88,param_2,param_3 + uStack_48,lVar2);
    uStack_c8 = uStack_78;
    local_d0 = local_80;
    uStack_b8 = uStack_68;
    uStack_c0 = local_70;
    uStack_a8 = uStack_58;
    local_b0 = local_60;
    uStack_98 = uStack_48;
    local_a0 = local_50;
    if (local_88 == 1) {
      *param_1 = 1;
      param_1[2] = uStack_78;
      param_1[1] = local_80;
      param_1[4] = uStack_68;
      param_1[3] = local_70;
      param_1[6] = uStack_58;
      param_1[5] = local_60;
      param_1[8] = uStack_48;
      param_1[7] = local_50;
    }
    else {
      uStack_e8 = uStack_58;
      local_f0 = local_60;
      local_d8 = uStack_48;
      uStack_e0 = local_50;
      uStack_108 = uStack_78;
      local_110 = local_80;
      uStack_f8 = uStack_68;
      uStack_100 = local_70;
      if (uStack_48 == 0) {
                    /* try { // try from 0055f6f4 to 0055f6fb has its CatchHandler @ 0055f74c */
        FUN_0055effc(&local_110);
        goto LAB_0055f6fc;
      }
      FUN_0055effc(&local_110);
      uVar1 = _DAT_0029f5d0;
      param_1[1] = _UNK_0029f5d8;
      *param_1 = uVar1;
    }
    FUN_0055effc(&local_150);
    return;
  }
LAB_0055f6fc:
  *param_1 = 0;
  param_1[2] = uStack_148;
  param_1[1] = local_150;
  param_1[4] = local_138;
  param_1[3] = uStack_140;
  param_1[6] = local_128;
  param_1[5] = uStack_130;
  param_1[8] = local_118;
  param_1[7] = uStack_120;
  return;
}


// ===== 0055f764  <flux::persistence::schema::[4]::flux::persistence::schema::SchemaDefinition>::render_create =====

/* WARNING: Unknown calling convention: __rustcall */
/* <flux::persistence::schema::[4]::flux::persistence::schema::SchemaDefinition>::render_create */

void __rustcall
<flux::persistence::schema::[4]::flux::persistence::schema::SchemaDefinition>::render_create
          (long *param_1,long *param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  puVar1 = (undefined8 *)*param_2;
  lVar2 = param_2[1];
  param_1[5] = param_3;
  param_1[6] = param_4;
  *param_1 = (long)puVar1;
  lVar3 = param_2[3];
  uVar4 = NEON_cmge(*puVar1,0,1);
  param_1[3] = (long)puVar1 + lVar2 + 1;
  param_1[4] = lVar3;
  param_1[1] = uVar4 & 0x8080808080808080;
  param_1[2] = (long)(puVar1 + 1);
  return;
}


// ===== 0055f79c  <flux::persistence::schema::[4]::flux::persistence::schema::SchemaDefinition>::make_schema_context =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <flux::persistence::schema::[4]::flux::persistence::schema::SchemaDefinition>::make_schema_context
    */

void __rustcall
<flux::persistence::schema::[4]::flux::persistence::schema::SchemaDefinition>::make_schema_context
          (undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined **local_70;
  undefined1 *puStack_68;
  undefined8 *local_60;
  ulong uStack_58;
  undefined8 *local_50;
  long lStack_48;
  
  puVar1 = (undefined8 *)*param_2;
  lVar2 = param_2[1];
  lVar3 = param_2[3];
  uVar4 = *puVar1;
  uStack_88 = _UNK_00acfe08;
  local_90 = PTR_DAT_00acfe00;
  uStack_78 = _UNK_00acfe18;
  uStack_80 = _DAT_00acfe10;
  local_a0 = param_3;
  uStack_98 = param_4;
  if (lVar3 != 0) {
    <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(flux[2406cd06d16b4816]::persistence::schema::TableAlias,flux[2406cd06d16b4816]::persistence::schema::TableName)>>
    ::reserve_rehash::
    <hashbrown[32fc5d502e7f9af5]::map::make_hasher<flux[2406cd06d16b4816]::persistence::schema::TableAlias,flux[2406cd06d16b4816]::persistence::schema::TableName,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::_closure_0_>
              (&local_90,lVar3,&local_70,1);
  }
  uStack_58 = NEON_cmge(uVar4,0,1);
  local_70 = &local_90;
  uStack_58 = uStack_58 & 0x8080808080808080;
  lStack_48 = (long)puVar1 + lVar2 + 1;
                    /* try { // try from 0055f80c to 0055f857 has its CatchHandler @ 0055f85c */
  puStack_68 = (undefined1 *)&local_a0;
  local_60 = puVar1;
  local_50 = puVar1 + 1;
  FUN_0055d61c(&local_60,lVar3,&local_70);
  param_1[1] = uStack_88;
  *param_1 = local_90;
  param_1[3] = uStack_78;
  param_1[2] = uStack_80;
  return;
}


// ===== 0055f874  <flux::persistence::schema::[4]::flux::persistence::schema::SchemaDefinition>::and_table_definition =====

/* WARNING: Unknown calling convention: __rustcall */
/* <flux::persistence::schema::[4]::flux::persistence::schema::SchemaDefinition>::and_table_definition
    */

void __rustcall
<flux::persistence::schema::[4]::flux::persistence::schema::SchemaDefinition>::and_table_definition
          (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long local_88;
  void *local_80;
  undefined8 *local_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
                    /* try { // try from 0055f898 to 0055f89f has its CatchHandler @ 0055f938 */
  uVar1 = FUN_00565cb0(param_2,param_3 + 3);
  if ((uVar1 & 1) == 0) {
    puStack_58 = (undefined *)param_3[1];
    local_60 = (undefined8 *)*param_3;
    uStack_48 = param_3[3];
    uStack_50 = param_3[2];
    local_40 = param_3[4];
                    /* try { // try from 0055f8b8 to 0055f8c7 has its CatchHandler @ 0055f930 */
    FUN_00566b6c(&local_88,param_2,param_3[3],param_3[4],&local_60);
    if ((local_88 != -1) && (local_88 != 0)) {
      free(local_80);
    }
    uVar2 = *param_2;
    uVar4 = param_2[3];
    uVar3 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    param_1[3] = uVar4;
    param_1[2] = uVar3;
    return;
  }
  puStack_58 = PTR_fmt_00b00d48;
                    /* try { // try from 0055f914 to 0055f92b has its CatchHandler @ 0055f938 */
  local_60 = param_3 + 3;
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002a60f7,&local_60,&PTR_s_mobile_flux_src_persistence_sche_00acfbe8);
}


// ===== 0055f96c  <flux::persistence::schema::[4]::flux::persistence::schema::SchemaDefinition>::with_table_definition =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <flux::persistence::schema::[4]::flux::persistence::schema::SchemaDefinition>::with_table_definition
    */

void __rustcall
<flux::persistence::schema::[4]::flux::persistence::schema::SchemaDefinition>::with_table_definition
          (undefined8 *param_1,undefined8 *param_2)

{
  undefined *local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_58 = param_2[3];
  uStack_50 = param_2[4];
  uStack_78 = _UNK_00acfe08;
  local_80 = PTR_DAT_00acfe00;
  uStack_68 = _UNK_00acfe18;
  uStack_70 = _DAT_00acfe10;
  uStack_40 = param_2[1];
  local_48 = *param_2;
  uStack_30 = param_2[3];
  local_38 = param_2[2];
  local_28 = param_2[4];
                    /* try { // try from 0055f9ac to 0055f9b7 has its CatchHandler @ 0055f9d0 */
  FUN_00565eb8(&local_80,&local_58);
  param_1[1] = uStack_78;
  *param_1 = local_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}


// ===== 0055f9e8  <flux::persistence::schema::[5]::flux::persistence::schema::TableDefinition>::table_name =====

/* WARNING: Unknown calling convention: __rustcall */
/* <flux::persistence::schema::[5]::flux::persistence::schema::TableDefinition>::table_name */

void __rustcall
<flux::persistence::schema::[5]::flux::persistence::schema::TableDefinition>::table_name
          (undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long local_78;
  void *local_70;
  long *local_60;
  code *pcStack_58;
  long local_50;
  undefined *puStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_60 = &local_40;
  pcStack_58 = (code *)PTR_fmt_00b00d60;
  local_40 = param_3;
  uStack_38 = param_4;
  alloc::fmt::format::format_inner(&local_78,&DAT_002b2ea9,&local_60);
  local_50 = param_2 + 0x18;
  pcStack_58 = FUN_00562370;
  puStack_48 = PTR_fmt_00b00d48;
                    /* try { // try from 0055fa4c to 0055fa5f has its CatchHandler @ 0055fa98 */
  local_60 = &local_78;
  alloc::fmt::format::format_inner(&local_90,&DAT_002a4675,&local_60);
  if (local_78 != 0) {
    free(local_70);
  }
  param_1[1] = uStack_88;
  *param_1 = local_90;
  param_1[2] = local_80;
  return;
}


// ===== 0055fab8  <flux::persistence::schema::[5]::flux::persistence::schema::TableDefinition>::with_column =====

/* WARNING: Unknown calling convention: __rustcall */
/* <flux::persistence::schema::[5]::flux::persistence::schema::TableDefinition>::with_column */

void __rustcall
<flux::persistence::schema::[5]::flux::persistence::schema::TableDefinition>::with_column
          (long *param_1,long *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar3 = param_2[2];
  if (lVar3 == *param_2) {
                    /* try { // try from 0055fae4 to 0055faeb has its CatchHandler @ 0055fb30 */
    <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<flux::persistence::schema::ColumnDefinition>>::
    grow_one(param_2);
  }
  uVar4 = *param_3;
  puVar1 = (undefined8 *)(param_2[1] + lVar3 * 0x18);
  uVar2 = param_3[2];
  puVar1[1] = param_3[1];
  *puVar1 = uVar4;
  puVar1[2] = uVar2;
  param_2[2] = lVar3 + 1;
  lVar5 = param_2[1];
  lVar3 = *param_2;
  lVar7 = param_2[3];
  lVar6 = param_2[2];
  param_1[4] = param_2[4];
  param_1[1] = lVar5;
  *param_1 = lVar3;
  param_1[3] = lVar7;
  param_1[2] = lVar6;
  return;
}


// ===== 0055fb58  <flux::persistence::schema::[5]::flux::persistence::schema::TableDefinition>::render_create =====

/* WARNING: Unknown calling convention: __rustcall */
/* <flux::persistence::schema::[5]::flux::persistence::schema::TableDefinition>::render_create */

void __rustcall
<flux::persistence::schema::[5]::flux::persistence::schema::TableDefinition>::render_create
          (undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  void *pvVar1;
  void *__ptr;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long local_130;
  void *local_128;
  long lStack_120;
  long local_118;
  void *local_110;
  ulong local_108;
  undefined8 *local_100;
  undefined1 *puStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  long *local_c8;
  code *local_c0;
  undefined8 *local_b0;
  undefined1 *puStack_a8;
  undefined8 local_a0;
  undefined8 **local_90;
  code *pcStack_88;
  long *local_80;
  code *pcStack_78;
  long *local_70;
  code *pcStack_68;
  
  lVar5 = *(long *)(param_2 + 8);
  lVar6 = lVar5 + *(long *)(param_2 + 0x10) * 0x18;
  FUN_005657c8(&local_130,lVar5,lVar6);
                    /* try { // try from 0055fba4 to 0055fbb3 has its CatchHandler @ 0055fe74 */
  FUN_005654a4(&local_118,lVar5,lVar6);
  pvVar1 = local_110;
  if (local_108 == 0) {
    local_f0 = 0;
    local_100 = (undefined8 **)0x0;
    puStack_f8 = &DAT_00000001;
LAB_0055fcb4:
                    /* try { // try from 0055fcb4 to 0055fcd3 has its CatchHandler @ 0055fe88 */
    table_name(&local_90,param_2,param_3,param_4);
    FUN_0055f294(&local_c8,&local_90);
                    /* try { // try from 0055fcd8 to 0055fcf3 has its CatchHandler @ 0055fe58 */
    FUN_0056dc88(&local_90,local_128,lStack_120,", ",2);
    puStack_a8 = pcStack_88;
    local_a0 = local_80;
    pcStack_88 = FUN_00562370;
    local_80 = (long *)&local_b0;
    pcStack_78 = FUN_00562370;
    local_70 = (long *)&local_100;
    local_b0 = local_90;
    pcStack_68 = FUN_00562370;
                    /* try { // try from 0055fd24 to 0055fd37 has its CatchHandler @ 0055fe3c */
    local_90 = &local_c8;
    alloc::fmt::format::format_inner(&local_e0,&DAT_002b91ef,&local_90);
    if ((undefined8 **)local_b0 != (undefined8 **)0x0) {
      free(puStack_a8);
    }
    if ((undefined8 **)local_c8 != (undefined8 **)0x0) {
      free(local_c0);
    }
    param_1[1] = uStack_d8;
    *param_1 = local_e0;
    param_1[2] = local_d0;
    if ((undefined8 **)local_100 != (undefined8 **)0x0) {
      free(puStack_f8);
    }
    if (local_118 != 0) {
      free(local_110);
    }
    if (lStack_120 != 0) {
      puVar3 = (undefined8 *)((long)local_128 + 8);
      lVar5 = lStack_120;
      do {
        if (puVar3[-1] != 0) {
          free((void *)*puVar3);
        }
        lVar5 = lVar5 + -1;
        puVar3 = puVar3 + 3;
      } while (lVar5 != 0);
    }
    if (local_130 != 0) {
      free(local_128);
    }
    return;
  }
  if (local_108 >> 0x3b == 0) {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar7 = 8;
    __ptr = (void *)FUN_004b25a4(local_108 << 4,8);
    if (__ptr != (void *)0x0) {
      uVar2 = 0;
      puVar3 = (undefined8 *)((long)__ptr + 8);
      do {
        puVar4 = *(undefined8 **)((long)pvVar1 + uVar2 * 8);
        uVar2 = uVar2 + 1;
        uVar7 = puVar4[1];
        puVar3[-1] = *puVar4;
        *puVar3 = uVar7;
        puVar3 = puVar3 + 2;
      } while (local_108 != uVar2);
                    /* try { // try from 0055fc30 to 0055fc4b has its CatchHandler @ 0055fe24 */
      FUN_0056e038(&local_90,__ptr,local_108,", ",2);
      local_c8 = (long *)&local_b0;
      local_a0 = local_80;
      puStack_a8 = pcStack_88;
      local_b0 = local_90;
      local_c0 = FUN_00562370;
                    /* try { // try from 0055fc6c to 0055fc7f has its CatchHandler @ 0055fe08 */
      alloc::fmt::format::format_inner(&local_90,&DAT_002b2e95,&local_c8);
      if ((undefined8 **)local_b0 != (undefined8 **)0x0) {
        free(puStack_a8);
      }
      puStack_f8 = pcStack_88;
      local_100 = local_90;
      local_f0 = local_80;
      free(__ptr);
      goto LAB_0055fcb4;
    }
  }
  else {
    uVar7 = 0;
  }
                    /* try { // try from 0055fbcc to 0055fbd7 has its CatchHandler @ 0055fea4 */
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar7,local_108 << 4);
}


// ===== 0055fed0  <flux::persistence::schema::[9]::flux::persistence::schema::SchemaDefinition>::compute_migrations =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <flux::persistence::schema::[9]::flux::persistence::schema::SchemaDefinition>::compute_migrations
    */

void __rustcall
<flux::persistence::schema::[9]::flux::persistence::schema::SchemaDefinition>::compute_migrations
          (undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined *puVar2;
  ulong *******pppppppuVar3;
  char cVar4;
  char cVar5;
  undefined4 uVar6;
  undefined2 uVar7;
  undefined1 uVar8;
  bool bVar9;
  int iVar10;
  ulong uVar11;
  undefined1 *puVar12;
  undefined **ppuVar13;
  byte bVar14;
  ulong uVar15;
  ulong *******pppppppuVar16;
  ulong uVar17;
  ulong *******pppppppuVar18;
  undefined8 *puVar19;
  long lVar20;
  ulong *****pppppuVar21;
  ulong *****pppppuVar22;
  ulong *****pppppuVar23;
  long lVar24;
  ulong *******pppppppuVar25;
  ulong *******pppppppuVar26;
  ulong *******pppppppuVar27;
  ulong *******pppppppuVar28;
  ulong *******pppppppuVar29;
  ulong *******pppppppuVar30;
  ulong *******pppppppuVar31;
  ulong *******pppppppuVar32;
  ulong ******ppppppuVar33;
  ulong ******ppppppuVar34;
  undefined1 uVar35;
  undefined8 *puVar36;
  undefined8 *puVar37;
  ulong *******pppppppuVar38;
  byte bVar39;
  ulong uVar40;
  ulong uVar41;
  ulong *******pppppppuVar42;
  undefined8 uVar43;
  undefined1 local_338;
  undefined1 local_334;
  undefined4 local_330;
  undefined2 local_32c;
  long local_2b0;
  undefined1 *puStack_2a8;
  long local_2a0;
  long local_298;
  undefined1 *puStack_290;
  long local_288;
  ulong *******local_280;
  ulong *******pppppppuStack_278;
  ulong *******local_270;
  ulong *******local_268;
  ulong *******pppppppuStack_260;
  ulong *******local_258;
  ulong *******local_250;
  ulong *******pppppppuStack_248;
  ulong *******local_240;
  ulong *******local_230;
  ulong *******pppppppuStack_228;
  ulong *******local_220;
  ulong *******local_218;
  ulong ******local_210;
  ulong ******ppppppuStack_208;
  ulong ******local_200;
  ulong ******local_1f8;
  ulong ******ppppppuStack_1f0;
  ulong ******local_1e8;
  ulong *******local_1e0;
  ulong *******pppppppuStack_1d8;
  ulong *******pppppppuStack_1d0;
  ulong *******local_1c8;
  undefined4 local_1c0;
  undefined1 local_1bc;
  undefined1 local_1bb;
  undefined2 local_1ba;
  ulong *******local_1b8;
  ulong *******pppppppuStack_1b0;
  ulong *******local_1a8;
  ulong *******local_1a0;
  undefined8 uStack_198;
  ulong *******local_190;
  ulong *******pppppppuStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  ulong *******pppppppuStack_168;
  ulong *******local_160;
  ulong *******local_150;
  ulong *******pppppppuStack_148;
  ulong *******local_140;
  undefined4 local_138;
  undefined3 uStack_134;
  ulong *******local_130;
  ulong *******pppppppuStack_128;
  ulong *******local_120;
  ulong *******local_118;
  undefined4 local_110;
  undefined2 local_10c;
  undefined2 local_10a;
  ulong *******local_108;
  ulong *******pppppppuStack_100;
  ulong *******local_f8;
  ulong *******local_f0;
  ulong *******pppppppuStack_e8;
  ulong *******local_e0;
  ulong *******pppppppuStack_d8;
  ulong *******local_d0;
  ulong *******pppppppuStack_c8;
  ulong *******pppppppuStack_c0;
  ulong *******pppppppuStack_b8;
  ulong *******local_b0;
  ulong *******local_a8;
  ulong *******local_a0;
  ulong *******pppppppuStack_98;
  ulong *******local_90;
  undefined1 auStack_81 [17];
  
  lVar24 = param_2[3];
  local_2b0 = 0;
  puStack_2a8 = &DAT_00000008;
  local_2a0 = 0;
  local_298 = 0;
  puStack_290 = &DAT_00000008;
  local_288 = 0;
  if (lVar24 != 0) {
    puVar37 = (undefined8 *)*param_2;
    puVar36 = puVar37 + 1;
    uVar40 = NEON_cmge(*puVar37,0,1);
    uVar40 = uVar40 & 0x8080808080808080;
    do {
      for (; uVar40 == 0; uVar40 = uVar40 & 0x8080808080808080) {
        puVar37 = puVar37 + -0x38;
        uVar40 = NEON_cmge(*puVar36,0,1);
        puVar36 = puVar36 + 1;
      }
      uVar15 = (uVar40 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar40 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
      iVar1 = (int)((ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >> 3);
                    /* try { // try from 0055ff78 to 0055ff8b has its CatchHandler @ 00561924 */
      <flux::persistence::schema::[5]::flux::persistence::schema::TableDefinition>::table_name
                (&local_280,puVar37 + (long)-iVar1 * 7 + -5,param_4,param_5);
      pppppppuVar26 = local_270;
      pppppppuVar16 = pppppppuStack_278;
      local_f0 = (ulong *******)0x0;
      pppppppuStack_e8 = (ulong *******)&DAT_00000001;
      local_e0 = (ulong *******)0x0;
      local_190 = (ulong *******)0x60000020;
      local_1a0 = (ulong *******)&local_f0;
      uStack_198 = (code *)&DAT_00acfc18;
                    /* try { // try from 0055ffbc to 0055ffcb has its CatchHandler @ 00561920 */
      iVar10 = <str_as_core::fmt::Display>::fmt(pppppppuStack_278,local_270,&local_1a0);
      pppppppuVar29 = pppppppuStack_e8;
      pppppppuVar25 = local_f0;
      if (iVar10 != 0) {
                    /* try { // try from 005616a8 to 005616cb has its CatchHandler @ 00561aa0 */
                    /* WARNING: Subroutine does not return */
        core::result::unwrap_failed
                  ("a Display implementation returned an error unexpectedly",0x37,auStack_81,
                   &DAT_00acfb30,&PTR_s__nix_store_8006w282fgsx3273c878b_00acfc48);
      }
                    /* try { // try from 0055ffe0 to 0055ffeb has its CatchHandler @ 005618e8 */
      FUN_0055e888(&local_1a0,pppppppuStack_e8,local_e0);
      if (pppppppuVar25 != (ulong *******)0x0) {
        free(pppppppuVar29);
      }
      local_130 = (ulong *******)&local_1a0;
      pppppppuStack_128 = (ulong *******)FUN_00562370;
                    /* try { // try from 00560014 to 00560027 has its CatchHandler @ 0056190c */
      alloc::fmt::format::format_inner(&local_f0,&DAT_002a80cf,&local_130);
      if (local_1a0 != (ulong *******)0x0) {
        free(uStack_198);
      }
      local_130 = (ulong *******)&local_f0;
      pppppppuStack_128 = (ulong *******)FUN_00562370;
                    /* try { // try from 00560050 to 00560063 has its CatchHandler @ 005618fc */
      alloc::fmt::format::format_inner(&local_1a0,&DAT_002adf28,&local_130);
      if (local_f0 != (ulong *******)0x0) {
        free(pppppppuStack_e8);
      }
      pppppppuVar3 = (ulong *******)uStack_198;
      pppppppuVar18 = local_1a0;
                    /* try { // try from 00560084 to 00560093 has its CatchHandler @ 00561948 */
      FUN_0055f538(&local_1a0,param_3,uStack_198,local_190);
      pppppppuStack_e8 = pppppppuStack_168;
      local_f0 = local_170;
      local_e0 = local_160;
      pppppppuVar25 = local_180;
      pppppppuVar32 = local_190;
      pppppppuVar29 = (ulong *******)uStack_198;
      pppppppuVar38 = pppppppuStack_188;
      uVar6 = (undefined4)uStack_178;
      pppppppuVar31 = local_170;
      pppppppuVar28 = pppppppuStack_168;
      pppppppuVar27 = local_160;
      uVar7 = uStack_178._6_2_;
      uVar35 = uStack_178._4_1_;
      uVar8 = uStack_178._5_1_;
      if (local_1a0 != (ulong *******)&DAT_00000001) {
        local_1c0 = (undefined4)uStack_178;
        local_1c8 = local_180;
        pppppppuVar25 = (ulong *******)&local_1e0;
        local_1a8 = local_160;
        pppppppuStack_1d0 = pppppppuStack_188;
        pppppppuStack_1d8 = local_190;
        local_1e0 = (ulong *******)uStack_198;
        local_1bc = uStack_178._4_1_;
        local_1bb = uStack_178._5_1_;
        local_1ba = uStack_178._6_2_;
        pppppppuStack_1b0 = pppppppuStack_168;
        local_1b8 = local_170;
        iVar10 = sqlite3_bind_parameter_count(local_160);
        pppppppuVar38 = (ulong *******)(long)iVar10;
        if (iVar10 == 0) {
          local_140 = (ulong *******)0x0;
          local_150 = (ulong *******)0x0;
          pppppppuStack_148 = (ulong *******)&DAT_00000008;
          local_b0 = pppppppuVar25;
          local_a8 = pppppppuVar38;
          while (iVar10 = sqlite3_step(local_1a8), pppppppuVar32 = local_1e0, iVar10 == 100) {
                    /* try { // try from 005601ac to 005601c7 has its CatchHandler @ 00561930 */
            local_a8 = pppppppuVar25;
            FUN_005673cc(&local_1a0,&local_a8,1,&PTR_s_mobile_flux_src_persistence_sche_00acfad0);
            pppppppuVar29 = pppppppuStack_188;
            pppppppuVar28 = local_190;
            pppppppuVar31 = (ulong *******)uStack_198;
            if (local_1a0 != (ulong *******)0xffffffffffffffff) {
              local_330 = (undefined4)local_180;
              pppppppuStack_98 = local_170;
              local_a0 = (ulong *******)uStack_178;
              local_90 = pppppppuStack_168;
              pppppppuVar25 = pppppppuStack_188;
              pppppppuVar32 = (ulong *******)uStack_198;
              pppppppuVar29 = local_1a0;
              pppppppuVar38 = local_190;
              local_32c = local_180._6_2_;
              local_334 = local_180._4_1_;
              local_338 = local_180._5_1_;
              goto LAB_005606a4;
            }
                    /* try { // try from 005601d8 to 0056020b has its CatchHandler @ 00561950 */
            FUN_005673cc(&local_1a0,&local_a8,2,&PTR_s_mobile_flux_src_persistence_sche_00acfae8);
            pppppppuVar32 = pppppppuStack_188;
            pppppppuVar27 = (ulong *******)uStack_198;
            pppppppuVar30 = local_190;
            if (local_1a0 != (ulong *******)0xffffffffffffffff) {
              FUN_0055ee98(&local_1a0);
              pppppppuVar32 = (ulong *******)0x0;
              pppppppuVar27 = (ulong *******)0x0;
              pppppppuVar30 = (ulong *******)&DAT_00000001;
            }
                    /* try { // try from 00560224 to 00560293 has its CatchHandler @ 005619bc */
            FUN_0056da44(pppppppuVar30,pppppppuVar32);
            <alloc::str::[3]::str>::to_uppercase(&local_1a0);
            if (local_190 < (ulong *******)0x3) {
LAB_00560264:
              uVar35 = 3;
            }
            else if (*(short *)uStack_198 == 0x4e49 && *(char *)((long)uStack_198 + 2) == 'T') {
              uVar35 = 0;
            }
            else {
              if (local_190 == (ulong *******)0x3) goto LAB_00560264;
              if (*(int *)uStack_198 != 0x4c414552) {
                if (local_190 < &DAT_00000006) {
                  if (local_190 == (ulong *******)&DAT_00000005) {
LAB_00560360:
                    if (*(int *)uStack_198 == 0x414f4c46 && *(char *)((long)uStack_198 + 4) == 'T')
                    goto LAB_005603f8;
                  }
                  if ((((*(int *)uStack_198 == 0x54584554) || (*(int *)uStack_198 == 0x52414843)) ||
                      (*(int *)uStack_198 == 0x424f4c43)) ||
                     ((&DAT_00000006 < local_190 &&
                      (*(int *)uStack_198 == 0x43524156 &&
                       *(int *)((long)uStack_198 + 3) == 0x52414843)))) {
                    uVar35 = 2;
                    goto joined_r0x00560310;
                  }
                  goto LAB_00560264;
                }
                if (*(int *)uStack_198 != 0x42554f44 || *(short *)((long)uStack_198 + 4) != 0x454c)
                goto LAB_00560360;
              }
LAB_005603f8:
              uVar35 = 1;
            }
joined_r0x00560310:
            if (local_1a0 != (ulong *******)0x0) {
              free(uStack_198);
            }
            FUN_005675ec(&local_1a0,&local_a8,3,&PTR_s_mobile_flux_src_persistence_sche_00acfb00);
            if (local_1a0 != (ulong *******)0xffffffffffffffff) {
LAB_005604a8:
              pppppppuVar25 = pppppppuStack_188;
              pppppppuVar38 = local_190;
              pppppppuVar32 = (ulong *******)uStack_198;
              pppppppuVar29 = local_1a0;
              local_334 = local_180._4_1_;
              local_330 = (undefined4)local_180;
              local_338 = local_180._5_1_;
              local_32c = local_180._6_2_;
              pppppppuStack_98 = local_170;
              local_a0 = (ulong *******)uStack_178;
              local_90 = pppppppuStack_168;
              if (pppppppuVar31 != (ulong *******)0x0) {
                free(pppppppuVar28);
              }
              if (pppppppuVar27 != (ulong *******)0x0) {
                free(pppppppuVar30);
              }
              goto LAB_005606a4;
            }
            iVar10 = (int)uStack_198;
                    /* try { // try from 005602a4 to 005602bf has its CatchHandler @ 0056192c */
            FUN_005675ec(&local_1a0,&local_a8,5,&PTR_s_mobile_flux_src_persistence_sche_00acfb18);
            if (local_1a0 != (ulong *******)0xffffffffffffffff) goto LAB_005604a8;
            uVar6 = (int)uStack_198;
            if (pppppppuVar27 != (ulong *******)0x0) {
              free(pppppppuVar30);
            }
            pppppppuVar32 = local_140;
            if (local_140 == local_150) {
                    /* try { // try from 005602fc to 00560303 has its CatchHandler @ 00561888 */
              <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<flux::persistence::schema::ExistingColumnInfo>>
              ::grow_one(&local_150);
            }
            pppppppuVar38 = pppppppuStack_148 + (long)pppppppuVar32 * 4;
            *pppppppuVar38 = (ulong ******)pppppppuVar31;
            pppppppuVar38[1] = (ulong ******)pppppppuVar28;
            pppppppuVar38[2] = (ulong ******)pppppppuVar29;
            *(undefined4 *)(pppppppuVar38 + 3) = uVar6;
            *(bool *)((long)pppppppuVar38 + 0x1c) = iVar10 == 0;
            *(undefined1 *)((long)pppppppuVar38 + 0x1d) = uVar35;
            local_140 = (ulong *******)((long)pppppppuVar32 + 1);
          }
          if (iVar10 == 0x65) {
            local_b0 = (ulong *******)0x0;
            iVar10 = sqlite3_reset(local_1a8);
            pppppppuVar25 = local_1e0;
            if (iVar10 == 0) {
              local_a8 = (ulong *******)0x0;
                    /* try { // try from 005614b8 to 005614bf has its CatchHandler @ 005617e0 */
              FUN_0055ec7c(&local_b0);
              pppppppuVar25 = local_140;
              pppppppuVar38 = pppppppuStack_148;
              pppppppuVar32 = local_150;
                    /* try { // try from 005614c8 to 005614cf has its CatchHandler @ 00561948 */
              FUN_0055effc(&local_1e0);
              pppppppuVar29 = (ulong *******)0xffffffffffffffff;
              uVar6 = local_330;
              pppppppuVar31 = local_250;
              pppppppuVar28 = pppppppuStack_248;
              pppppppuVar27 = local_240;
              uVar7 = local_32c;
              uVar35 = local_334;
              uVar8 = local_338;
              goto joined_r0x00560718;
            }
            if ((ulong ******)0x7ffffffffffffffe < *local_1e0) goto LAB_005616d0;
            *local_1e0 = (ulong ******)((long)*local_1e0 + 1);
                    /* try { // try from 00560448 to 0056044f has its CatchHandler @ 00561770 */
            rusqlite::error::decode_result_raw(&local_1a0,local_1e0[2],iVar10);
            *pppppppuVar25 = (ulong ******)((long)*pppppppuVar25 + -1);
            if (local_1a0 == (ulong *******)0xffffffffffffffff) {
              ppuVar13 = &PTR_s__root__cargo_registry_src_index__00acfb70;
              goto LAB_005616f4;
            }
            local_330 = (undefined4)local_180;
            pppppppuStack_98 = local_170;
            local_a0 = (ulong *******)uStack_178;
            local_90 = pppppppuStack_168;
            local_a8 = (ulong *******)0x0;
            pppppppuVar25 = pppppppuStack_188;
            pppppppuVar32 = (ulong *******)uStack_198;
            pppppppuVar29 = local_1a0;
            pppppppuVar38 = local_190;
            local_32c = local_180._6_2_;
            local_334 = local_180._4_1_;
            local_338 = local_180._5_1_;
          }
          else {
            if ((ulong ******)0x7ffffffffffffffe < *local_1e0) {
LAB_005616d0:
                    /* try { // try from 005616d0 to 0056170f has its CatchHandler @ 00561a3c */
                    /* WARNING: Subroutine does not return */
              core::cell::panic_already_mutably_borrowed
                        (&PTR_s__root__cargo_registry_src_index__00acfb88);
            }
            *local_1e0 = (ulong ******)((long)*local_1e0 + 1);
                    /* try { // try from 0056052c to 00560533 has its CatchHandler @ 005617a0 */
            rusqlite::error::decode_result_raw(&local_1a0,local_1e0[2],iVar10);
            pppppppuVar25 = pppppppuStack_188;
            pppppppuVar38 = local_190;
            pppppppuVar29 = local_1a0;
            *pppppppuVar32 = (ulong ******)((long)*pppppppuVar32 + -1);
            if (local_1a0 == (ulong *******)0xffffffffffffffff) {
              ppuVar13 = &PTR_s__root__cargo_registry_src_index__00acfbd0;
LAB_005616f4:
                    /* WARNING: Subroutine does not return */
              core::result::unwrap_failed
                        ("called `Result::unwrap_err()` on an `Ok` value",0x2e,auStack_81,
                         &DAT_00acfb50,ppuVar13);
            }
            uStack_134 = (undefined3)((ulong)uStack_198 >> 0x28);
            local_10c = local_180._4_2_;
            pppppppuStack_228 = local_170;
            local_230 = (ulong *******)uStack_178;
            local_220 = pppppppuStack_168;
            local_32c = local_180._6_2_;
            local_110 = (undefined4)local_180;
            local_10a = local_180._6_2_;
            local_130 = local_1a0;
            pppppppuStack_128 = (ulong *******)uStack_198;
            local_120 = local_190;
            local_118 = pppppppuStack_188;
            pppppppuStack_100 = local_170;
            local_108 = (ulong *******)uStack_178;
            local_f8 = pppppppuStack_168;
            local_b0 = (ulong *******)0x0;
            local_138 = uStack_198._1_4_;
            iVar10 = sqlite3_reset(local_1a8);
            pppppppuVar32 = local_1e0;
            if (iVar10 != 0) {
              if ((ulong ******)0x7ffffffffffffffe < *local_1e0) {
                    /* try { // try from 00561714 to 00561747 has its CatchHandler @ 00561a28 */
                    /* WARNING: Subroutine does not return */
                core::cell::panic_already_mutably_borrowed
                          (&PTR_s__root__cargo_registry_src_index__00acfb88);
              }
              *local_1e0 = (ulong ******)((long)*local_1e0 + 1);
                    /* try { // try from 005605fc to 00560603 has its CatchHandler @ 00561774 */
              rusqlite::error::decode_result_raw(&local_1a0,local_1e0[2],iVar10);
              *pppppppuVar32 = (ulong ******)((long)*pppppppuVar32 + -1);
              if (local_1a0 == (ulong *******)0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                core::result::unwrap_failed
                          ("called `Result::unwrap_err()` on an `Ok` value",0x2e,auStack_81,
                           &DAT_00acfb50,&PTR_s__root__cargo_registry_src_index__00acfb70);
              }
              pppppppuStack_e8 = (ulong *******)uStack_198;
              local_f0 = local_1a0;
              pppppppuStack_d8 = pppppppuStack_188;
              local_e0 = local_190;
              pppppppuStack_c8 = (ulong *******)uStack_178;
              local_d0 = local_180;
              pppppppuStack_b8 = pppppppuStack_168;
              pppppppuStack_c0 = local_170;
              if (local_1a0 != (ulong *******)0xffffffffffffffff) {
                    /* try { // try from 00560638 to 0056063f has its CatchHandler @ 0056176c */
                FUN_0055ee98(&local_f0);
              }
            }
            local_a8 = (ulong *******)0x0;
            local_330 = local_110;
            pppppppuStack_98 = pppppppuStack_228;
            local_a0 = local_230;
            local_90 = local_220;
            pppppppuVar32 = pppppppuStack_128;
            local_334 = (undefined1)local_10c;
            local_338 = local_10c._1_1_;
          }
LAB_005606a4:
          pppppppuStack_248 = pppppppuStack_98;
          local_250 = local_a0;
          local_240 = local_90;
                    /* try { // try from 005606b4 to 005606bb has its CatchHandler @ 005617e0 */
          FUN_0055ec7c(&local_b0);
          if (local_140 != (ulong *******)0x0) {
            pppppppuVar31 = pppppppuStack_148 + 1;
            pppppppuVar28 = local_140;
            do {
              if (pppppppuVar31[-1] != (ulong ******)0x0) {
                free(*pppppppuVar31);
              }
              pppppppuVar28 = (ulong *******)((long)pppppppuVar28 + -1);
              pppppppuVar31 = pppppppuVar31 + 4;
            } while (pppppppuVar28 != (ulong *******)0x0);
          }
          if (local_150 != (ulong *******)0x0) {
            free(pppppppuStack_148);
          }
        }
        else {
          pppppppuVar32 = (ulong *******)0x0;
          pppppppuVar29 = (ulong *******)0x8000000000000013;
        }
                    /* try { // try from 0056070c to 00560713 has its CatchHandler @ 00561948 */
        FUN_0055effc(&local_1e0);
        uVar6 = local_330;
        pppppppuVar31 = local_250;
        pppppppuVar28 = pppppppuStack_248;
        pppppppuVar27 = local_240;
        uVar7 = local_32c;
        uVar35 = local_334;
        uVar8 = local_338;
      }
joined_r0x00560718:
      local_338 = uVar8;
      local_334 = uVar35;
      local_32c = uVar7;
      local_240 = pppppppuVar27;
      pppppppuStack_248 = pppppppuVar28;
      local_250 = pppppppuVar31;
      local_330 = uVar6;
      if (pppppppuVar18 != (ulong *******)0x0) {
        free(pppppppuVar3);
      }
      pppppppuVar28 = local_280;
      pppppppuVar31 = _UNK_00acfac8;
      pppppppuVar3 = _DAT_00acfac0;
      pppppppuVar18 = _UNK_00acfab8;
      puVar2 = PTR_DAT_00acfab0;
      if (pppppppuVar29 != (ulong *******)0xffffffffffffffff) {
        param_1[7] = local_240;
        param_1[6] = pppppppuStack_248;
        param_1[5] = local_250;
        *param_1 = pppppppuVar29;
        param_1[1] = pppppppuVar32;
        *(undefined1 *)((long)param_1 + 0x24) = local_334;
        param_1[2] = pppppppuVar38;
        param_1[3] = pppppppuVar25;
        *(undefined1 *)((long)param_1 + 0x25) = local_338;
        *(undefined4 *)(param_1 + 4) = local_330;
        *(undefined2 *)((long)param_1 + 0x26) = local_32c;
        if (local_280 != (ulong *******)0x0) {
          free(pppppppuVar16);
        }
        lVar24 = local_288 + 1;
        puVar12 = puStack_290;
        while (lVar24 = lVar24 + -1, lVar24 != 0) {
                    /* try { // try from 005615c0 to 005615c3 has its CatchHandler @ 005618b4 */
          FUN_00564a20(puVar12);
          puVar12 = puVar12 + 0x40;
        }
        if (local_298 != 0) {
          free(puStack_290);
        }
                    /* try { // try from 005615e4 to 005615eb has its CatchHandler @ 00561788 */
        FUN_00565b64(&local_2b0);
        puVar12 = puStack_2a8;
        lVar24 = local_2b0;
        goto joined_r0x00561620;
      }
      local_268 = pppppppuVar32;
      pppppppuStack_260 = pppppppuVar38;
      local_258 = pppppppuVar25;
      if (pppppppuVar25 == (ulong *******)0x0) {
        pppppppuVar25 = (ulong *******)puVar37[(long)-iVar1 * 7 + -2];
        pppppppuVar29 = (ulong *******)puVar37[(long)-iVar1 * 7 + -1];
                    /* try { // try from 00560a90 to 00560a9f has its CatchHandler @ 00561818 */
        <flux::persistence::schema::[5]::flux::persistence::schema::TableDefinition>::render_create
                  (&local_f0,puVar37 + (long)-iVar1 * 7 + -5,param_4,param_5);
        lVar20 = local_2a0;
        pppppppuStack_188 = local_e0;
        local_190 = pppppppuStack_e8;
        uStack_198 = (code *)local_f0;
        local_180 = pppppppuVar28;
        uStack_178 = (code *)pppppppuVar16;
        local_170 = pppppppuVar26;
        local_1a0 = (ulong *******)0x0;
        pppppppuStack_168 = pppppppuVar25;
        local_160 = pppppppuVar29;
        if (local_2a0 == local_2b0) {
                    /* try { // try from 00560adc to 00560ae3 has its CatchHandler @ 005617d0 */
          <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<flux::persistence::schema::Migration>>::
          grow_one(&local_2b0);
        }
        puVar19 = (undefined8 *)(puStack_2a8 + lVar20 * 0x48);
        local_2a0 = lVar20 + 1;
        puVar19[1] = uStack_198;
        *puVar19 = local_1a0;
        puVar19[3] = pppppppuStack_188;
        puVar19[2] = local_190;
        puVar19[5] = uStack_178;
        puVar19[4] = local_180;
        puVar19[7] = pppppppuStack_168;
        puVar19[6] = local_170;
        puVar19[8] = local_160;
        if (pppppppuVar32 != (ulong *******)0x0) {
          free(pppppppuVar38);
        }
      }
      else {
        uVar15 = (long)pppppppuVar25 * 0x20;
        pppppppuStack_228 = _UNK_00acfab8;
        local_230 = (ulong *******)PTR_DAT_00acfab0;
        local_218 = _UNK_00acfac8;
        local_220 = _DAT_00acfac0;
        pppppppuStack_1d8 = _UNK_00acfab8;
        local_1e0 = (ulong *******)PTR_DAT_00acfab0;
        local_1c8 = _UNK_00acfac8;
        pppppppuStack_1d0 = _DAT_00acfac0;
        pppppppuVar16 = pppppppuVar38;
        pppppppuVar26 = pppppppuVar38 + 5;
        do {
          pppppppuVar28 = pppppppuVar26;
          uVar15 = uVar15 - 0x20;
          pppppppuVar26 = (ulong *******)*pppppppuVar16;
          pppppppuVar29 = pppppppuVar16 + 4;
          if (pppppppuVar26 == (ulong *******)0xffffffffffffffff) break;
          pppppppuVar27 = (ulong *******)pppppppuVar16[1];
          pppppppuVar30 = (ulong *******)pppppppuVar16[2];
          pppppppuVar42 = (ulong *******)pppppppuVar16[3];
          if (0 < *(int *)(pppppppuVar16 + 3)) {
            local_e0 = (ulong *******)0x0;
            local_f0 = (ulong *******)0x0;
            pppppppuStack_e8 = (ulong *******)&DAT_00000001;
            local_190 = (ulong *******)0x60000020;
            local_1a0 = (ulong *******)&local_f0;
            uStack_198 = (code *)&DAT_00acfc18;
                    /* try { // try from 005607e4 to 005607f3 has its CatchHandler @ 005619f8 */
            iVar10 = <str_as_core::fmt::Display>::fmt(pppppppuVar27,pppppppuVar30,&local_1a0);
            if (iVar10 != 0) {
                    /* try { // try from 00561680 to 005616a3 has its CatchHandler @ 00561abc */
                    /* WARNING: Subroutine does not return */
              core::result::unwrap_failed
                        ("a Display implementation returned an error unexpectedly",0x37,auStack_81,
                         &DAT_00acfb30,&PTR_s__nix_store_8006w282fgsx3273c878b_00acfc48);
            }
            pppppppuStack_128 = pppppppuStack_e8;
            local_130 = local_f0;
            local_120 = local_e0;
                    /* try { // try from 00560808 to 00560813 has its CatchHandler @ 005619ec */
            FUN_00566338(&local_1e0,&local_130);
          }
          local_e0 = (ulong *******)0x0;
          local_f0 = (ulong *******)0x0;
          pppppppuStack_e8 = (ulong *******)&DAT_00000001;
          local_190 = (ulong *******)0x60000020;
          local_1a0 = (ulong *******)&local_f0;
          uStack_198 = (code *)&DAT_00acfc18;
                    /* try { // try from 00560840 to 0056084f has its CatchHandler @ 00561a18 */
          iVar10 = <str_as_core::fmt::Display>::fmt(pppppppuVar27,pppppppuVar30,&local_1a0);
          if (iVar10 != 0) {
                    /* try { // try from 00561658 to 0056167b has its CatchHandler @ 00561af4 */
                    /* WARNING: Subroutine does not return */
            core::result::unwrap_failed
                      ("a Display implementation returned an error unexpectedly",0x37,auStack_81,
                       &DAT_00acfb30,&PTR_s__nix_store_8006w282fgsx3273c878b_00acfc48);
          }
          pppppppuStack_128 = pppppppuStack_e8;
          local_130 = local_f0;
          local_120 = local_e0;
                    /* try { // try from 00560870 to 00560883 has its CatchHandler @ 00561a08 */
          local_1a0 = pppppppuVar26;
          uStack_198 = (code *)pppppppuVar27;
          local_190 = pppppppuVar30;
          pppppppuStack_188 = pppppppuVar42;
          FUN_00565ff4(&local_f0,&local_230,&local_130,&local_1a0);
          if ((local_f0 != (ulong *******)0xffffffffffffffff) && (local_f0 != (ulong *******)0x0)) {
            free(pppppppuStack_e8);
          }
          pppppppuVar16 = pppppppuVar29;
          pppppppuVar26 = pppppppuVar28 + 4;
        } while (pppppppuVar29 != pppppppuVar38 + (long)pppppppuVar25 * 4);
        if (pppppppuVar29 != pppppppuVar38 + (long)pppppppuVar25 * 4) {
          uVar15 = uVar15 >> 5;
          do {
            if (pppppppuVar28[-1] != (ulong ******)0x0) {
              free(*pppppppuVar28);
            }
            uVar15 = uVar15 - 1;
            pppppppuVar28 = pppppppuVar28 + 4;
          } while (uVar15 != 0);
        }
        if (pppppppuVar32 != (ulong *******)0x0) {
          free(pppppppuVar38);
        }
        uStack_198 = (code *)pppppppuVar18;
        local_1a0 = (ulong *******)puVar2;
        pppppppuStack_188 = pppppppuVar31;
        local_190 = pppppppuVar3;
                    /* try { // try from 0056091c to 00560923 has its CatchHandler @ 00561898 */
        FUN_0057046c(puVar37[(long)-iVar1 * 7 + -4],
                     puVar37[(long)-iVar1 * 7 + -4] + puVar37[(long)-iVar1 * 7 + -3] * 0x18,
                     &local_1a0);
        pppppppuVar26 = (ulong *******)uStack_198;
        pppppppuVar16 = local_1a0;
        pppppppuStack_128 = (ulong *******)uStack_198;
        local_130 = local_1a0;
        local_118 = pppppppuStack_188;
        local_120 = local_190;
        if (local_1c8 == pppppppuStack_188) {
          if (local_1c8 != (ulong *******)0x0) {
            pppppppuVar29 = local_1e0 + 1;
            uVar15 = NEON_cmge(*local_1e0,0,1);
            uVar15 = uVar15 & 0x8080808080808080;
            pppppppuVar25 = local_1e0;
            pppppppuVar32 = local_1c8;
joined_r0x00560a28:
            for (; uVar15 == 0; uVar15 = uVar15 & 0x8080808080808080) {
              uVar15 = NEON_cmge(*pppppppuVar29,0,1);
              pppppppuVar25 = pppppppuVar25 + -0x18;
              pppppppuVar29 = pppppppuVar29 + 1;
            }
            uVar11 = (uVar15 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar15 >> 7 & 0xff00ff00ff00ff) << 8
            ;
            uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
            iVar10 = (int)((ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3);
                    /* try { // try from 00560a54 to 00560a63 has its CatchHandler @ 00561860 */
            uVar11 = FUN_00557cd0(&local_110,pppppppuVar25 + (long)-iVar10 * 3 + -3);
            ppppppuVar33 = pppppppuVar25[(long)-iVar10 * 3 + -2];
            ppppppuVar34 = pppppppuVar25[(long)-iVar10 * 3 + -1];
            lVar20 = 0;
            pppppppuVar32 = (ulong *******)((long)pppppppuVar32 + -1);
            bVar14 = (byte)(uVar11 >> 0x39);
            uVar15 = uVar15 - 1 & uVar15;
            while( true ) {
              uVar11 = uVar11 & (ulong)pppppppuVar26;
              uVar43 = *(undefined8 *)((long)pppppppuVar16 + uVar11);
              uVar41 = NEON_cmeq(uVar43,CONCAT17(bVar14,CONCAT16(bVar14,CONCAT15(bVar14,CONCAT14(
                                                  bVar14,CONCAT13(bVar14,CONCAT12(bVar14,CONCAT11(
                                                  bVar14,bVar14))))))),1);
              for (uVar41 = uVar41 & 0x8080808080808080; uVar41 != 0; uVar41 = uVar41 - 1 & uVar41)
              {
                uVar17 = (uVar41 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                         (uVar41 >> 7 & 0xff00ff00ff00ff) << 8;
                uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
                uVar17 = uVar11 + ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3) &
                         (ulong)pppppppuVar26;
                if ((ppppppuVar34 == pppppppuVar16[uVar17 * -3 + -1]) &&
                   (iVar10 = memcmp(ppppppuVar33,pppppppuVar16[uVar17 * -3 + -2],
                                    (size_t)ppppppuVar34), iVar10 == 0)) {
                  if (pppppppuVar32 != (ulong *******)0x0) goto joined_r0x00560a28;
                  goto LAB_00560dcc;
                }
              }
              uVar43 = NEON_cmeq(uVar43,0xffffffffffffffff,1);
              bVar39 = NEON_umaxv(uVar43,1);
              if ((bVar39 & 1) != 0) break;
              lVar20 = lVar20 + 8;
              uVar11 = uVar11 + lVar20;
            }
            goto LAB_00560b40;
          }
LAB_00560dcc:
          local_140 = (ulong *******)0x0;
          local_150 = (ulong *******)0x0;
          pppppppuStack_148 = (ulong *******)&DAT_00000008;
          if (puVar37[(long)-iVar1 * 7 + -3] != 0) {
            ppppppuVar33 = (ulong ******)puVar37[(long)-iVar1 * 7 + -4];
            ppppppuVar34 = ppppppuVar33 + puVar37[(long)-iVar1 * 7 + -3] * 3;
            do {
              pppppuVar22 = *ppppppuVar33;
              pppppuVar21 = ppppppuVar33[1];
              if (pppppuVar21 < (ulong *****)0x8) {
                uVar15 = 0;
              }
              else {
                uVar15 = 0;
                pppppuVar23 = pppppuVar22;
                do {
                  pppppuVar22 = pppppuVar23 + 1;
                  pppppuVar21 = pppppuVar21 + -1;
                  uVar15 = ((ulong)*pppppuVar23 ^ (uVar15 >> 0x3b | uVar15 << 5)) *
                           0x517cc1b727220a95;
                  pppppuVar23 = pppppuVar22;
                } while ((ulong *****)0x7 < pppppuVar21);
              }
              pppppuVar23 = pppppuVar22;
              if ((ulong *****)0x3 < pppppuVar21) {
                pppppuVar23 = (ulong *****)((long)pppppuVar22 + 4);
                pppppuVar21 = (ulong *****)((long)pppppuVar21 - 4);
                uVar15 = ((ulong)*(uint *)pppppuVar22 ^ (uVar15 >> 0x3b | uVar15 << 5)) *
                         0x517cc1b727220a95;
              }
              for (; pppppuVar21 != (ulong *****)0x0;
                  pppppuVar21 = (ulong *****)((long)pppppuVar21 - 1)) {
                uVar15 = ((ulong)*(byte *)pppppuVar23 ^ (uVar15 >> 0x3b | uVar15 << 5)) *
                         0x517cc1b727220a95;
                pppppuVar23 = (ulong *****)((long)pppppuVar23 + 1);
              }
                    /* try { // try from 00560e94 to 00560e9f has its CatchHandler @ 005619a0 */
              FUN_0055b1b0(&local_1a0,&local_230,
                           ((uVar15 >> 0x3b | uVar15 << 5) ^ 0xff) * 0x517cc1b727220a95);
              pppppppuVar26 = local_180;
              pppppppuVar16 = pppppppuStack_188;
              if (local_1a0 == (ulong *******)0xffffffffffffffff) {
LAB_00560fe0:
                lVar20 = local_288;
                if ((*(byte *)((long)ppppppuVar33 + 0x11) & 1) == 0) {
                  pppppppuStack_188 = (ulong *******)*ppppppuVar33;
                  local_180 = (ulong *******)ppppppuVar33[1];
                  uStack_198 = (code *)puVar37[(long)-iVar1 * 7 + -2];
                  local_190 = (ulong *******)puVar37[(long)-iVar1 * 7 + -1];
                  local_1a0 = (ulong *******)0x8000000000000001;
                  if (local_288 == local_298) {
                    /* try { // try from 00561014 to 0056101b has its CatchHandler @ 0056183c */
                    <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<flux::persistence::schema::IncompatibleMigrationReason>>
                    ::grow_one(&local_298);
                  }
                  local_288 = lVar20 + 1;
                  puVar19 = (undefined8 *)(puStack_290 + lVar20 * 0x40);
                  puVar19[1] = uStack_198;
                  *puVar19 = local_1a0;
                  puVar19[3] = pppppppuStack_188;
                  puVar19[2] = local_190;
                  puVar19[5] = uStack_178;
                  puVar19[4] = local_180;
                  puVar19[7] = pppppppuStack_168;
                  puVar19[6] = local_170;
                }
                if ((*(byte *)((long)ppppppuVar33 + 0x12) & 1) == 0) {
                    /* try { // try from 00561058 to 0056105f has its CatchHandler @ 005619a0 */
                  FUN_0055f3fc(&local_a0,pppppppuStack_278,local_270);
                  local_b0 = (ulong *******)
                             (&PTR_s_INTEGER_NOT_NULL_00acfdc0)[*(byte *)(ppppppuVar33 + 2)];
                  local_a8 = *(ulong ********)
                              (&DAT_002bfe08 + (ulong)*(byte *)(ppppppuVar33 + 2) * 8);
                  bVar9 = *(char *)((long)ppppppuVar33 + 0x11) != '\0';
                  local_250 = (ulong *******)0x2c2689;
                  if (bVar9) {
                    local_250 = (ulong *******)&DAT_00000001;
                  }
                  pppppppuStack_248 = (ulong *******)0x0;
                  if (!bVar9) {
                    pppppppuStack_248 = (ulong *******)&DAT_00000009;
                  }
                  local_190 = (ulong *******)&local_b0;
                  uStack_198 = (code *)PTR_fmt_00b00d48;
                  local_180 = (ulong *******)&local_250;
                  uStack_178 = FUN_00570bb4;
                  pppppppuStack_188 = (ulong *******)FUN_00570bb4;
                    /* try { // try from 005610c8 to 005610db has its CatchHandler @ 005618b0 */
                  local_1a0 = (ulong *******)ppppppuVar33;
                  alloc::fmt::format::format_inner(&local_f0,&DAT_002a72ec,&local_1a0);
                  local_1a0 = (ulong *******)&local_a0;
                  local_190 = (ulong *******)&local_f0;
                  uStack_198 = FUN_00562370;
                  pppppppuStack_188 = (ulong *******)FUN_00562370;
                    /* try { // try from 005610f8 to 0056110b has its CatchHandler @ 005618ac */
                  alloc::fmt::format::format_inner(&local_210,&DAT_002adf0b,&local_1a0);
                  if (local_f0 != (ulong *******)0x0) {
                    free(pppppppuStack_e8);
                  }
                  if (local_a0 != (ulong *******)0x0) {
                    free(pppppppuStack_98);
                  }
                  pppppppuVar16 = local_140;
                  if (local_140 == local_150) {
                    /* try { // try from 00561148 to 0056114f has its CatchHandler @ 0056184c */
                    <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<flux::persistence::schema::ColumnDefinition>>
                    ::grow_one(&local_150);
                  }
                  pppppppuVar26 = pppppppuStack_148 + (long)pppppppuVar16 * 3;
                  local_140 = (ulong *******)((long)pppppppuVar16 + 1);
                  pppppppuVar26[1] = ppppppuStack_208;
                  *pppppppuVar26 = local_210;
                  pppppppuVar26[2] = local_200;
                }
              }
              else {
                cVar4 = local_170._4_1_;
                cVar5 = local_170._5_1_;
                if (local_1a0 != (ulong *******)0x0) {
                  free(uStack_198);
                }
                lVar20 = local_288;
                if (pppppppuVar16 == (ulong *******)0xffffffffffffffff) goto LAB_00560fe0;
                if (cVar5 != *(char *)(ppppppuVar33 + 2)) {
                  pppppppuStack_188 = (ulong *******)*ppppppuVar33;
                  local_180 = (ulong *******)ppppppuVar33[1];
                  uStack_198 = (code *)puVar37[(long)-iVar1 * 7 + -2];
                  local_190 = (ulong *******)puVar37[(long)-iVar1 * 7 + -1];
                  uStack_178._0_2_ = CONCAT11(*(char *)(ppppppuVar33 + 2),cVar5);
                  local_1a0 = (ulong *******)0x8000000000000000;
                  if (local_288 == local_298) {
                    /* try { // try from 00560f10 to 00560f17 has its CatchHandler @ 005617e8 */
                    <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<flux::persistence::schema::IncompatibleMigrationReason>>
                    ::grow_one(&local_298);
                  }
                  local_288 = lVar20 + 1;
                  puVar19 = (undefined8 *)(puStack_290 + lVar20 * 0x40);
                  puVar19[1] = uStack_198;
                  *puVar19 = local_1a0;
                  puVar19[3] = pppppppuStack_188;
                  puVar19[2] = local_190;
                  puVar19[5] = uStack_178;
                  puVar19[4] = local_180;
                  puVar19[7] = pppppppuStack_168;
                  puVar19[6] = local_170;
                }
                lVar20 = local_288;
                if (*(char *)((long)ppppppuVar33 + 0x11) != cVar4) {
                  pppppppuStack_188 = (ulong *******)*ppppppuVar33;
                  local_180 = (ulong *******)ppppppuVar33[1];
                  uStack_198 = (code *)puVar37[(long)-iVar1 * 7 + -2];
                  local_190 = (ulong *******)puVar37[(long)-iVar1 * 7 + -1];
                  uStack_178._0_2_ = CONCAT11(*(char *)((long)ppppppuVar33 + 0x11),cVar4);
                  local_1a0 = (ulong *******)0x8000000000000002;
                  if (local_288 == local_298) {
                    /* try { // try from 00560f90 to 00560f97 has its CatchHandler @ 005617ec */
                    <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<flux::persistence::schema::IncompatibleMigrationReason>>
                    ::grow_one(&local_298);
                  }
                  local_288 = lVar20 + 1;
                  puVar19 = (undefined8 *)(puStack_290 + lVar20 * 0x40);
                  puVar19[1] = uStack_198;
                  *puVar19 = local_1a0;
                  puVar19[3] = pppppppuStack_188;
                  puVar19[2] = local_190;
                  puVar19[5] = uStack_178;
                  puVar19[4] = local_180;
                  puVar19[7] = pppppppuStack_168;
                  puVar19[6] = local_170;
                }
                if (pppppppuVar16 != (ulong *******)0x0) {
                  free(pppppppuVar26);
                }
              }
              ppppppuVar33 = ppppppuVar33 + 3;
            } while (ppppppuVar33 != ppppppuVar34);
          }
          pppppppuVar26 = local_270;
          pppppppuVar16 = pppppppuStack_278;
          if (local_218 != (ulong *******)0x0) {
            pppppppuVar29 = local_230 + 1;
            uVar15 = NEON_cmge(*local_230,0,1);
            uVar15 = uVar15 & 0x8080808080808080;
            pppppppuVar25 = local_230;
            pppppppuVar32 = local_218;
            do {
              for (; uVar15 == 0; uVar15 = uVar15 & 0x8080808080808080) {
                uVar15 = NEON_cmge(*pppppppuVar29,0,1);
                pppppppuVar25 = pppppppuVar25 + -0x38;
                pppppppuVar29 = pppppppuVar29 + 1;
              }
                    /* try { // try from 005611f0 to 005611ff has its CatchHandler @ 00561964 */
              FUN_0055f3fc(&local_a0,pppppppuVar16,pppppppuVar26);
              uVar11 = (uVar15 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                       (uVar15 >> 7 & 0xff00ff00ff00ff) << 8;
              uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
              iVar10 = (int)((ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3);
                    /* try { // try from 00561218 to 0056121f has its CatchHandler @ 00561984 */
              FUN_0055f3fc(&local_f0,pppppppuVar25[(long)-iVar10 * 7 + -3],
                           pppppppuVar25[(long)-iVar10 * 7 + -2]);
              local_1a0 = (ulong *******)&local_a0;
              local_190 = (ulong *******)&local_f0;
              uStack_198 = FUN_00562370;
              pppppppuStack_188 = (ulong *******)FUN_00562370;
                    /* try { // try from 0056123c to 0056124f has its CatchHandler @ 00561968 */
              alloc::fmt::format::format_inner(&local_1f8,&DAT_002b117a,&local_1a0);
              if (local_f0 != (ulong *******)0x0) {
                free(pppppppuStack_e8);
              }
              if (local_a0 != (ulong *******)0x0) {
                free(pppppppuStack_98);
              }
              pppppppuVar38 = local_140;
              if (local_140 == local_150) {
                    /* try { // try from 0056128c to 00561293 has its CatchHandler @ 00561934 */
                <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<flux::persistence::schema::ColumnDefinition>>
                ::grow_one(&local_150);
              }
              pppppppuVar18 = pppppppuStack_148 + (long)pppppppuVar38 * 3;
              pppppppuVar32 = (ulong *******)((long)pppppppuVar32 + -1);
              local_140 = (ulong *******)((long)pppppppuVar38 + 1);
              uVar15 = uVar15 - 1 & uVar15;
              pppppppuVar18[1] = ppppppuStack_1f0;
              *pppppppuVar18 = local_1f8;
              pppppppuVar18[2] = local_1e8;
            } while (pppppppuVar32 != (ulong *******)0x0);
          }
          pppppppuVar16 = local_140;
          lVar20 = local_2a0;
          if (local_140 == (ulong *******)0x0) {
            if (local_150 != (ulong *******)0x0) {
              free(pppppppuStack_148);
            }
          }
          else {
            pppppppuStack_168 = (ulong *******)puVar37[(long)-iVar1 * 7 + -2];
            local_160 = (ulong *******)puVar37[(long)-iVar1 * 7 + -1];
            local_170 = local_270;
            uStack_178 = (code *)pppppppuStack_278;
            local_180 = local_280;
            pppppppuStack_188 = local_140;
            local_190 = pppppppuStack_148;
            uStack_198 = (code *)local_150;
            local_1a0 = (ulong *******)&DAT_00000001;
            if (local_2a0 == local_2b0) {
                    /* try { // try from 005612ec to 005612f3 has its CatchHandler @ 0056178c */
              <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<flux::persistence::schema::Migration>>::
              grow_one(&local_2b0);
            }
            puVar19 = (undefined8 *)(puStack_2a8 + lVar20 * 0x48);
            local_2a0 = lVar20 + 1;
            puVar19[1] = uStack_198;
            *puVar19 = local_1a0;
            puVar19[3] = pppppppuStack_188;
            puVar19[2] = local_190;
            puVar19[5] = uStack_178;
            puVar19[4] = local_180;
            puVar19[7] = pppppppuStack_168;
            puVar19[6] = local_170;
            puVar19[8] = local_160;
          }
          pppppppuVar26 = pppppppuStack_128;
          if (pppppppuStack_128 != (ulong *******)0x0) {
            if (local_118 != (ulong *******)0x0) {
              pppppppuVar29 = local_130 + 1;
              uVar15 = NEON_cmge(*local_130,0,1);
              uVar15 = uVar15 & 0x8080808080808080;
              pppppppuVar25 = local_130;
              pppppppuVar32 = local_118;
              do {
                for (; uVar15 == 0; uVar15 = uVar15 & 0x8080808080808080) {
                  uVar15 = NEON_cmge(*pppppppuVar29,0,1);
                  pppppppuVar25 = pppppppuVar25 + -0x18;
                  pppppppuVar29 = pppppppuVar29 + 1;
                }
                uVar11 = (uVar15 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                         (uVar15 >> 7 & 0xff00ff00ff00ff) << 8;
                uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
                iVar1 = (int)((ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3);
                if (pppppppuVar25[(long)-iVar1 * 3 + -3] != (ulong ******)0x0) {
                  free(pppppppuVar25[(long)-iVar1 * 3 + -2]);
                }
                pppppppuVar32 = (ulong *******)((long)pppppppuVar32 + -1);
                uVar15 = uVar15 - 1 & uVar15;
              } while (pppppppuVar32 != (ulong *******)0x0);
            }
            if ((long)pppppppuVar26 * 0x19 != -0x21) {
              free(local_130 + (long)pppppppuVar26 * -3 + -3);
            }
          }
          pppppppuVar26 = pppppppuStack_1d8;
          if (pppppppuStack_1d8 != (ulong *******)0x0) {
            if (local_1c8 != (ulong *******)0x0) {
              pppppppuVar29 = local_1e0 + 1;
              uVar15 = NEON_cmge(*local_1e0,0,1);
              uVar15 = uVar15 & 0x8080808080808080;
              pppppppuVar25 = local_1e0;
              pppppppuVar32 = local_1c8;
              do {
                for (; uVar15 == 0; uVar15 = uVar15 & 0x8080808080808080) {
                  uVar15 = NEON_cmge(*pppppppuVar29,0,1);
                  pppppppuVar25 = pppppppuVar25 + -0x18;
                  pppppppuVar29 = pppppppuVar29 + 1;
                }
                uVar11 = (uVar15 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                         (uVar15 >> 7 & 0xff00ff00ff00ff) << 8;
                uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
                iVar1 = (int)((ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3);
                if (pppppppuVar25[(long)-iVar1 * 3 + -3] != (ulong ******)0x0) {
                  free(pppppppuVar25[(long)-iVar1 * 3 + -2]);
                }
                pppppppuVar32 = (ulong *******)((long)pppppppuVar32 + -1);
                uVar15 = uVar15 - 1 & uVar15;
              } while (pppppppuVar32 != (ulong *******)0x0);
            }
            if ((long)pppppppuVar26 * 0x19 != -0x21) {
              free(local_1e0 + (long)pppppppuVar26 * -3 + -3);
            }
          }
                    /* try { // try from 005614a0 to 005614a7 has its CatchHandler @ 005617c4 */
          FUN_0055e0d0(&local_230);
          if (pppppppuVar16 != (ulong *******)0x0) goto LAB_0055ff34;
        }
        else {
LAB_00560b40:
          pppppppuVar16 = (ulong *******)puVar37[(long)-iVar1 * 7 + -2];
          pppppppuVar26 = (ulong *******)puVar37[(long)-iVar1 * 7 + -1];
          local_e0 = local_1e0 + 1;
          pppppppuStack_d8 =
               (ulong *******)((undefined1 *)((long)local_1e0 + (long)pppppppuStack_1d8) + 1);
          uVar15 = NEON_cmge(*local_1e0,0,1);
          local_d0 = local_1c8;
          pppppppuStack_e8 = (ulong *******)(uVar15 & 0x8080808080808080);
          local_f0 = local_1e0;
                    /* try { // try from 00560b74 to 00560b7f has its CatchHandler @ 00561870 */
          FUN_00565238(&local_a0,&local_f0);
          if (&DAT_00000001 < local_90) {
            if (&DAT_00000014 < local_90) {
                    /* try { // try from 00561518 to 0056151f has its CatchHandler @ 0056175c */
              core[bcece726f298455b]::slice::sort::stable::driftsort_main::
              <alloc[c1f8e832b0d782c7]::string::String,<alloc[c1f8e832b0d782c7]::string::String_as_core[bcece726f298455b]::cmp::PartialOrd>::lt,alloc[c1f8e832b0d782c7]::vec::Vec<alloc[c1f8e832b0d782c7]::string::String>>
                        (pppppppuStack_98,local_90,auStack_81);
            }
            else {
              FUN_0055acac(pppppppuStack_98,local_90,1,auStack_81);
            }
          }
          pppppppuStack_148 = pppppppuStack_98;
          local_150 = local_a0;
          local_140 = local_90;
          local_e0 = local_130 + 1;
          pppppppuStack_d8 =
               (ulong *******)((undefined1 *)((long)local_130 + (long)pppppppuStack_128) + 1);
          uVar15 = NEON_cmge(*local_130,0,1);
          local_d0 = local_118;
          pppppppuStack_e8 = (ulong *******)(uVar15 & 0x8080808080808080);
          local_f0 = local_130;
                    /* try { // try from 00560bd0 to 00560bdb has its CatchHandler @ 00561878 */
          FUN_00565238(&local_a0,&local_f0);
          if (&DAT_00000001 < local_90) {
            if (&DAT_00000014 < local_90) {
                    /* try { // try from 00561524 to 0056152b has its CatchHandler @ 0056174c */
              core[bcece726f298455b]::slice::sort::stable::driftsort_main::
              <alloc[c1f8e832b0d782c7]::string::String,<alloc[c1f8e832b0d782c7]::string::String_as_core[bcece726f298455b]::cmp::PartialOrd>::lt,alloc[c1f8e832b0d782c7]::vec::Vec<alloc[c1f8e832b0d782c7]::string::String>>
                        (pppppppuStack_98,local_90,auStack_81);
            }
            else {
              FUN_0055acac(pppppppuStack_98,local_90,1,auStack_81);
            }
          }
          lVar20 = local_288;
          uStack_178 = (code *)local_90;
          local_180 = pppppppuStack_98;
          pppppppuStack_188 = local_a0;
          uStack_198 = (code *)pppppppuStack_148;
          local_1a0 = local_150;
          local_190 = local_140;
          local_170 = pppppppuVar16;
          pppppppuStack_168 = pppppppuVar26;
          if (local_288 == local_298) {
                    /* try { // try from 00560c20 to 00560c27 has its CatchHandler @ 00561808 */
            <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<flux::persistence::schema::IncompatibleMigrationReason>>
            ::grow_one(&local_298);
          }
          pppppppuVar16 = pppppppuStack_128;
          puVar19 = (undefined8 *)(puStack_290 + lVar20 * 0x40);
          puVar19[1] = uStack_198;
          *puVar19 = local_1a0;
          puVar19[3] = pppppppuStack_188;
          puVar19[2] = local_190;
          puVar19[5] = uStack_178;
          puVar19[4] = local_180;
          puVar19[7] = pppppppuStack_168;
          puVar19[6] = local_170;
          local_288 = lVar20 + 1;
          if (pppppppuStack_128 != (ulong *******)0x0) {
            if (local_118 != (ulong *******)0x0) {
              pppppppuVar25 = local_130 + 1;
              uVar15 = NEON_cmge(*local_130,0,1);
              uVar15 = uVar15 & 0x8080808080808080;
              pppppppuVar26 = local_130;
              pppppppuVar29 = local_118;
              do {
                for (; uVar15 == 0; uVar15 = uVar15 & 0x8080808080808080) {
                  uVar15 = NEON_cmge(*pppppppuVar25,0,1);
                  pppppppuVar26 = pppppppuVar26 + -0x18;
                  pppppppuVar25 = pppppppuVar25 + 1;
                }
                uVar11 = (uVar15 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                         (uVar15 >> 7 & 0xff00ff00ff00ff) << 8;
                uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
                iVar1 = (int)((ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3);
                if (pppppppuVar26[(long)-iVar1 * 3 + -3] != (ulong ******)0x0) {
                  free(pppppppuVar26[(long)-iVar1 * 3 + -2]);
                }
                pppppppuVar29 = (ulong *******)((long)pppppppuVar29 + -1);
                uVar15 = uVar15 - 1 & uVar15;
              } while (pppppppuVar29 != (ulong *******)0x0);
            }
            if ((long)pppppppuVar16 * 0x19 != -0x21) {
              free(local_130 + (long)pppppppuVar16 * -3 + -3);
            }
          }
          pppppppuVar16 = pppppppuStack_1d8;
          if (pppppppuStack_1d8 != (ulong *******)0x0) {
            if (local_1c8 != (ulong *******)0x0) {
              pppppppuVar25 = local_1e0 + 1;
              uVar15 = NEON_cmge(*local_1e0,0,1);
              uVar15 = uVar15 & 0x8080808080808080;
              pppppppuVar26 = local_1e0;
              pppppppuVar29 = local_1c8;
              do {
                for (; uVar15 == 0; uVar15 = uVar15 & 0x8080808080808080) {
                  uVar15 = NEON_cmge(*pppppppuVar25,0,1);
                  pppppppuVar26 = pppppppuVar26 + -0x18;
                  pppppppuVar25 = pppppppuVar25 + 1;
                }
                uVar11 = (uVar15 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                         (uVar15 >> 7 & 0xff00ff00ff00ff) << 8;
                uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
                iVar1 = (int)((ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3);
                if (pppppppuVar26[(long)-iVar1 * 3 + -3] != (ulong ******)0x0) {
                  free(pppppppuVar26[(long)-iVar1 * 3 + -2]);
                }
                pppppppuVar29 = (ulong *******)((long)pppppppuVar29 + -1);
                uVar15 = uVar15 - 1 & uVar15;
              } while (pppppppuVar29 != (ulong *******)0x0);
            }
            if ((long)pppppppuVar16 * 0x19 != -0x21) {
              free(local_1e0 + (long)pppppppuVar16 * -3 + -3);
            }
          }
                    /* try { // try from 00560da8 to 00560daf has its CatchHandler @ 00561868 */
          FUN_0055e0d0(&local_230);
        }
        if (local_280 != (ulong *******)0x0) {
          free(pppppppuStack_278);
        }
      }
LAB_0055ff34:
      lVar24 = lVar24 + -1;
      uVar40 = uVar40 - 1 & uVar40;
    } while (lVar24 != 0);
  }
  if (local_288 == 0) {
    param_1[2] = puStack_2a8;
    param_1[1] = local_2b0;
    param_1[3] = local_2a0;
    *param_1 = 0xfffffffffffffffe;
    puVar12 = puStack_290;
    lVar24 = local_298;
  }
  else {
    param_1[2] = puStack_290;
    param_1[1] = local_298;
    param_1[3] = local_288;
    *param_1 = 0xffffffffffffffff;
                    /* try { // try from 00561554 to 0056155b has its CatchHandler @ 005617b4 */
    FUN_00565b64(&local_2b0);
    puVar12 = puStack_2a8;
    lVar24 = local_2b0;
  }
joined_r0x00561620:
  if (lVar24 != 0) {
    free(puVar12);
  }
  return;
}


// ===== 00561ce8  flux::persistence::schema::column =====

/* WARNING: Unknown calling convention: __rustcall */
/* flux::persistence::schema::column */

void __rustcall
flux::persistence::schema::column
          (undefined8 *param_1,char *param_2,ulong param_3,undefined1 param_4)

{
  long lVar1;
  char *pcVar2;
  ulong uVar3;
  
  if (param_3 < 0x10) {
    pcVar2 = param_2;
    uVar3 = param_3;
    if (param_3 != 0) {
      do {
        if (*pcVar2 == '\"') goto LAB_00561d68;
        uVar3 = uVar3 - 1;
        pcVar2 = pcVar2 + 1;
      } while (uVar3 != 0);
    }
  }
  else {
    lVar1 = core::slice::memchr::memchr_aligned(0x22,param_2,param_3);
    if (lVar1 == 1) {
LAB_00561d68:
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                ("Column name must not contain double quotes",0x55,
                 &PTR_s_mobile_flux_src_persistence_sche_00acfc00);
    }
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined1 *)(param_1 + 2) = param_4;
  *(undefined2 *)((long)param_1 + 0x11) = 0;
  return;
}


// ===== 00561d80  <flux::persistence::schema::TableAlias_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <flux::persistence::schema::TableAlias as core::fmt::Display>::fmt */

void __rustcall
<flux::persistence::schema::TableAlias_as_core::fmt::Display>::fmt
          (undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt(*param_1,param_1[1],param_2);
  return;
}


// ===== 00561d94  FUN_00561d94 =====

void FUN_00561d94(undefined8 *param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = *param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,"ColumnName",10,&local_18,&DAT_00acfd80);
  return;
}


// ===== 00561dd8  FUN_00561dd8 =====

void FUN_00561dd8(long *param_1,undefined8 param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *local_18;
  
  puVar1 = (ulong *)*param_1;
  uVar2 = *puVar1 ^ 0x8000000000000000;
  if (-1 < (long)*puVar1) {
    uVar2 = 3;
  }
  if ((long)uVar2 < 2) {
    if (uVar2 == 0) {
      local_18 = (ulong *)((long)puVar1 + 0x29);
      <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field4_finish
                (param_2,"ColumnTypeChanged",0x11,"table",5,puVar1 + 1,&DAT_00acfc60,"column",6,
                 puVar1 + 3,&DAT_00acfc80,"from",4,puVar1 + 5,&DAT_00acfca0,"to",2,&local_18,
                 &DAT_00acfcc0);
      return;
    }
    local_18 = puVar1 + 3;
    <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field2_finish
              (param_2,&DAT_0029fa80,0x10,"table",5,puVar1 + 1,&DAT_00acfc60,"column",6,&local_18,
               &DAT_00acfce0);
    return;
  }
  if (uVar2 == 2) {
    local_18 = (ulong *)((long)puVar1 + 0x29);
    <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field4_finish
              (param_2,"ColumnNullabilityChanged",0x18,"table",5,puVar1 + 1,&DAT_00acfc60,"column",6
               ,puVar1 + 3,&DAT_00acfc80,"from",4,puVar1 + 5,&DAT_00acfd00,"to",2,&local_18,
               &DAT_00acfd20);
    return;
  }
  local_18 = puVar1 + 3;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field3_finish
            (param_2,"PrimaryKeysChanged",0x12,"table",5,puVar1 + 6,&DAT_00acfc60,"from",4,puVar1,
             &PTR_FUN_00acfd40,"to",2,&local_18,&DAT_00acfd60);
  return;
}


// ===== 00562020  FUN_00562020 =====

void FUN_00562020(undefined8 *param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,(&PTR_s_Integer_00acfde0)[*(byte *)*param_1],
             *(undefined8 *)(&DAT_002bfe08 + (ulong)*(byte *)*param_1 * 8));
  return;
}


// ===== 0056204c  FUN_0056204c =====

void FUN_0056204c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = *param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,"TableName",9,&local_18,&DAT_00acfda0);
  return;
}


// ===== 00562090  <flux::persistence::schema::TableName_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <flux::persistence::schema::TableName as core::fmt::Display>::fmt */

void __rustcall
<flux::persistence::schema::TableName_as_core::fmt::Display>::fmt(long param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt
            (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_2);
  return;
}


// ===== 005620a4  FUN_005620a4 =====

void FUN_005620a4(byte *param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,(&PTR_s_Integer_00acfde0)[*param_1],
             *(undefined8 *)(&DAT_002bfe08 + (ulong)*param_1 * 8));
  return;
}


// ===== 005620cc  FUN_005620cc =====

void FUN_005620cc(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"Error",5);
  return;
}


// ===== 005620e0  <flux::persistence::schema::RenderMigrationsError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <flux::persistence::schema::RenderMigrationsError as core::fmt::Display>::fmt */

void __rustcall
<flux::persistence::schema::RenderMigrationsError_as_core::fmt::Display>::fmt
          (long *param_1,undefined8 *param_2)

{
  long *local_28;
  long **local_20;
  code *local_18;
  
  if (*param_1 != -1) {
    local_20 = &local_28;
    local_18 = FUN_0057059c;
    local_28 = param_1;
    core::fmt::write(*param_2,param_2[1],&DAT_002ac37e,&local_20);
    return;
  }
  local_28 = param_1 + 1;
  local_20 = &local_28;
  local_18 = FUN_005656d4;
  core::fmt::write(*param_2,param_2[1],&DAT_002aa855,&local_20);
  return;
}


// ===== 00562164  FUN_00562164 =====

undefined8 FUN_00562164(long *param_1,uint param_2)

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
      FUN_00558b5c(param_1,lVar7,1,1,1);
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
      FUN_00558b5c(param_1,lVar7,uVar3,1,1);
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


// ===== 005622a8  FUN_005622a8 =====

undefined8 FUN_005622a8(long *param_1,void *param_2,ulong param_3)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if ((ulong)(*param_1 - lVar1) < param_3) {
    FUN_00558b5c(param_1,lVar1,param_3,1,1);
    lVar1 = param_1[2];
  }
  else if (param_3 == 0) goto LAB_005622e8;
  memcpy((void *)(param_1[1] + lVar1),param_2,param_3);
LAB_005622e8:
  param_1[2] = lVar1 + param_3;
  return 0;
}


// ===== 0056232c  FUN_0056232c =====

void FUN_0056232c(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,"TableAlias",10,&local_18,&DAT_00acfd80);
  return;
}


// ===== 0056236c  <bool_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <bool_as_core::fmt::Display>::fmt(void)

{
  (*(code *)PTR_fmt_00b02798)();
  return;
}


// ===== 00562370  FUN_00562370 =====

void FUN_00562370(long param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt
            (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_2);
  return;
}


// ===== 00562384  FUN_00562384 =====

void FUN_00562384(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,"ColumnName",10,&local_18,&DAT_00acfd80);
  return;
}


// ===== 005623c4  FUN_005623c4 =====

void FUN_005623c4(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,"()",2);
  return;
}


// ===== 005623d8  FUN_005623d8 =====

void FUN_005623d8(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long local_60 [8];
  
                    /* try { // try from 005623ec to 0056240b has its CatchHandler @ 00562440 */
  <rusqlite::inner_connection::rusqlite::inner_connection::InnerConnection>::close
            (local_60,param_1 + 8);
  if (local_60[0] != -1) {
    FUN_00562ab4(local_60);
  }
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
    <alloc::sync::[n]::alloc::sync::Arc<std::sync::poison::mutex::Mutex<*mut_libsqlite3_sys::bindings::sqlite3>>>
    ::drop_slow(param_1 + 8);
  }
  return;
}


// ===== 00562474  FUN_00562474 =====

void FUN_00562474(long *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  code *pcVar6;
  long *plVar7;
  
  lVar5 = *param_1;
  if (lVar5 != -1) {
    if (lVar5 < 2) {
      if (lVar5 != 0) {
        FUN_0055e2cc(param_1 + 1);
        return;
      }
      __ptr = (void *)param_1[3];
      puVar1 = (undefined8 *)param_1[4];
      pcVar6 = (code *)*puVar1;
      if (pcVar6 != (code *)0x0) {
                    /* try { // try from 005624a8 to 005624af has its CatchHandler @ 0056254c */
        (*pcVar6)(__ptr);
      }
      if (puVar1[1] != 0) {
        free(__ptr);
        return;
      }
    }
    else if (lVar5 == 2) {
      param_1 = param_1 + 1;
      plVar7 = (long *)*param_1;
      if (plVar7 != (long *)0x0) {
                    /* try { // try from 005624dc to 005624ff has its CatchHandler @ 00562570 */
        uVar4 = <tokio::sync::oneshot::[9]::tokio::sync::oneshot::State>::set_complete(plVar7 + 6);
        if ((uVar4 & 5) == 1) {
          (**(code **)(plVar7[4] + 0x10))(plVar7[5]);
          plVar7 = (long *)*param_1;
          if (plVar7 == (long *)0x0) {
            return;
          }
        }
        do {
          lVar5 = *plVar7;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 + -1 == 0) {
          DataMemoryBarrier(2,1);
          <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<bool>>>::drop_slow
                    (param_1);
          return;
        }
      }
    }
  }
  return;
}


// ===== 005625a8  FUN_005625a8 =====

void FUN_005625a8(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  
  lVar5 = *param_1;
  if (lVar5 != 0) {
    puVar1 = (ulong *)(lVar5 + 0x30);
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
                    /* try { // try from 005625f0 to 005625f3 has its CatchHandler @ 00562644 */
      (**(code **)(*(long *)(lVar5 + 0x10) + 0x10))(*(undefined8 *)(lVar5 + 0x18));
    }
    if (((uint)uVar6 >> 1 & 1) != 0) {
      *(undefined1 *)(lVar5 + 0x38) = 2;
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
        <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<bool>>>::drop_slow(param_1);
        return;
      }
    }
  }
  return;
}


// ===== 0056267c  FUN_0056267c =====

void FUN_0056267c(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 0056268c to 0056268f has its CatchHandler @ 005626c8 */
  FUN_005587d4();
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
    <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::mpsc::chan::Chan<flux[2406cd06d16b4816]::persistence::worker::PersistenceWorkerCommand,tokio[8c8895dbfa691109]::sync::mpsc::unbounded::Semaphore>>>
    ::drop_slow(param_1);
    return;
  }
  return;
}


// ===== 005626fc  FUN_005626fc =====

void FUN_005626fc(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 00562714  FUN_00562714 =====

void FUN_00562714(ulong *param_1,byte param_2)

{
  int iVar1;
  long local_a0 [8];
  long local_60 [8];
  
  if (0x7ffffffffffffffe < *param_1) {
                    /* WARNING: Subroutine does not return */
    core::cell::panic_already_mutably_borrowed(&PTR_s__root__cargo_registry_src_index__00acfe40);
  }
  *param_1 = *param_1 + 1;
  iVar1 = sqlite3_get_autocommit(param_1[2]);
  *param_1 = *param_1 - 1;
  if (iVar1 == 0) {
    if (param_2 < 2) {
      if (param_2 == 0) {
        <rusqlite::[1]::rusqlite::Connection>::execute_batch(local_a0,param_1,&DAT_002a1278,8);
      }
      else {
        <rusqlite::[1]::rusqlite::Connection>::execute_batch(local_60,param_1,"COMMIT",6);
        if (local_60[0] == -1) {
          return;
        }
                    /* try { // try from 005627e8 to 005627ff has its CatchHandler @ 00562838 */
        <rusqlite::[1]::rusqlite::Connection>::execute_batch(local_a0,param_1,&DAT_002a1278,8);
        FUN_00562ab4(local_60);
      }
      if (local_a0[0] != -1) {
        FUN_00562ab4(local_a0);
        return;
      }
    }
    else if (param_2 != 2) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                ("Transaction dropped unexpectedly.BEGIN DEFERREDBEGIN IMMEDIATEBEGIN EXCLUSIVE",
                 0x43,&PTR_s__root__cargo_registry_src_index__00acfe58);
    }
  }
  return;
}


// ===== 00562850  FUN_00562850 =====

void FUN_00562850(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  ulong local_80 [3];
  undefined8 local_68;
  ulong local_60;
  undefined8 local_58;
  long lStack_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38 [2];
  long local_28;
  
                    /* try { // try from 00562864 to 00562867 has its CatchHandler @ 0056292c */
  <rusqlite::raw_statement::RawStatement_as_core::ops::drop::Drop>::drop();
  lVar4 = *(long *)(param_1 + 8);
  if (lVar4 == 0) {
    local_40 = 0;
  }
  else {
    local_68 = *(undefined8 *)(param_1 + 0x10);
    local_40 = *(undefined8 *)(param_1 + 0x18);
    local_80[1] = 0;
    local_58 = 0;
    local_80[2] = lVar4;
    lStack_50 = lVar4;
    local_48 = local_68;
  }
  local_80[0] = (ulong)(lVar4 != 0);
                    /* try { // try from 0056289c to 005628a7 has its CatchHandler @ 00562928 */
  local_60 = local_80[0];
  FUN_0055815c(local_38,local_80);
  while (local_38[0] != 0) {
    lVar4 = local_38[0] + local_28 * 0x20;
    if (0x10 < *(ulong *)(lVar4 + 0x18)) {
      free(*(void **)(lVar4 + 0x10));
    }
                    /* try { // try from 005628ac to 005628b7 has its CatchHandler @ 0056293c */
    FUN_0055815c(local_38,local_80);
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
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow((undefined8 *)(param_1 + 0x20));
      return;
    }
  }
  return;
}


// ===== 00562974  FUN_00562974 =====

void FUN_00562974(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *__ptr;
  void *__ptr_00;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  long *local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  pvVar4 = *(void **)(param_1 + 0x30);
  if (pvVar4 != (void *)0x0) {
    __ptr_00 = *(void **)((long)pvVar4 + 8);
    while (__ptr_00 != pvVar4) {
      uStack_88 = *(undefined8 *)((long)__ptr_00 + 0x18);
      local_90 = *(long **)((long)__ptr_00 + 0x10);
      uStack_78 = *(undefined8 *)((long)__ptr_00 + 0x28);
      uStack_80 = *(undefined8 *)((long)__ptr_00 + 0x20);
      pvVar5 = *(void **)((long)__ptr_00 + 8);
      local_50 = *(undefined8 *)((long)__ptr_00 + 0x50);
      uStack_68 = *(undefined8 *)((long)__ptr_00 + 0x38);
      local_70 = *(undefined8 *)((long)__ptr_00 + 0x30);
      uStack_58 = *(undefined8 *)((long)__ptr_00 + 0x48);
      uStack_60 = *(undefined8 *)((long)__ptr_00 + 0x40);
      do {
        lVar3 = *local_90;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(local_90,0x10);
        if (bVar2) {
          *local_90 = lVar3 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar3 + -1 == 0) {
        DataMemoryBarrier(2,1);
                    /* try { // try from 005629e0 to 005629e7 has its CatchHandler @ 00562a80 */
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(&local_90);
      }
                    /* try { // try from 005629e8 to 005629ef has its CatchHandler @ 00562a94 */
      FUN_00562850(&uStack_80);
      free(__ptr_00);
      __ptr_00 = pvVar5;
    }
    free(pvVar4);
  }
  __ptr = (undefined8 *)*(void **)(param_1 + 0x38);
  while (__ptr != (undefined8 *)0x0) {
    pvVar4 = (void *)*__ptr;
    free(__ptr);
    __ptr = (undefined8 *)pvVar4;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    free((void *)(*(long *)(param_1 + 8) - (*(long *)(param_1 + 0x10) * 8 + 8)));
  }
  return;
}


// ===== 00562ab4  FUN_00562ab4 =====

void FUN_00562ab4(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  void *__ptr;
  
  uVar1 = *param_1;
  uVar2 = uVar1 ^ 0x8000000000000000;
  if (-1 < (long)uVar1) {
    uVar2 = 0x14;
  }
  if ((long)uVar2 < 7) {
    if ((long)uVar2 < 5) {
      if (uVar2 != 0) {
        if (uVar2 != 2) {
          return;
        }
        __ptr = (void *)param_1[1];
        puVar3 = (undefined8 *)param_1[2];
        if ((code *)*puVar3 != (code *)0x0) {
                    /* try { // try from 00562b54 to 00562b5b has its CatchHandler @ 00562bf4 */
          (*(code *)*puVar3)(__ptr);
        }
        goto LAB_00562bc8;
      }
      if (param_1[1] == 0xffffffffffffffff) {
        return;
      }
      if (param_1[1] == 0) {
        return;
      }
      goto LAB_00562b8c;
    }
    if ((uVar2 != 5) && (uVar2 != 6)) {
      return;
    }
  }
  else if ((long)uVar2 < 0xd) {
    if ((uVar2 != 7) && (uVar2 != 0xc)) {
      return;
    }
  }
  else if (uVar2 != 0xd) {
    if (uVar2 != 0xf) {
      if (uVar2 != 0x14) {
        return;
      }
      if (uVar1 != 0) {
        free((void *)param_1[1]);
      }
      if (param_1[3] == 0) {
        return;
      }
      free((void *)param_1[4]);
      return;
    }
    __ptr = (void *)param_1[1];
    puVar3 = (undefined8 *)param_1[2];
    if ((code *)*puVar3 != (code *)0x0) {
                    /* try { // try from 00562bc0 to 00562bc7 has its CatchHandler @ 00562bf0 */
      (*(code *)*puVar3)(__ptr);
    }
LAB_00562bc8:
    if (puVar3[1] == 0) {
      return;
    }
    free(__ptr);
    return;
  }
  if (param_1[1] == 0) {
    return;
  }
LAB_00562b8c:
  free((void *)param_1[2]);
  return;
}


// ===== 00562c18  FUN_00562c18 =====

void FUN_00562c18(long *param_1)

{
  void *__ptr;
  void *pvVar1;
  long lVar2;
  
  if (*param_1 == -1) {
    __ptr = (void *)param_1[2];
    lVar2 = param_1[3] + 1;
    pvVar1 = __ptr;
    while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 00562c74 to 00562c77 has its CatchHandler @ 00562cbc */
      FUN_00564a20(pvVar1);
      pvVar1 = (void *)((long)pvVar1 + 0x40);
    }
    if (param_1[1] != 0) {
      free(__ptr);
      return;
    }
  }
  else if (*param_1 != -2) {
    FUN_00562ab4(param_1);
    return;
  }
  return;
}


// ===== 00562d00  FUN_00562d00 =====

void FUN_00562d00(long param_1)

{
  char cVar1;
  bool bVar2;
  void *__ptr;
  code *pcVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  void *pvVar7;
  void *pvVar8;
  long *local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    *(undefined8 *)(param_1 + 0x20) = 0xffffffffffffffff;
    if (*(long *)(param_1 + 0x40) != 0) {
      uVar4 = *(ulong *)(param_1 + 0x30);
      if (uVar4 != 0) {
        memset(*(void **)(param_1 + 0x28),0xff,uVar4 + 9);
        uVar4 = *(ulong *)(param_1 + 0x30);
        if (7 < uVar4) {
          uVar4 = (uVar4 + 1 >> 3) * 7;
        }
      }
      *(ulong *)(param_1 + 0x38) = uVar4;
      *(undefined8 *)(param_1 + 0x40) = 0;
    }
    pvVar7 = *(void **)(param_1 + 0x50);
    if (pvVar7 != (void *)0x0) {
      __ptr = *(void **)((long)pvVar7 + 8);
      while (__ptr != pvVar7) {
        uStack_88 = *(undefined8 *)((long)__ptr + 0x18);
        local_90 = *(long **)((long)__ptr + 0x10);
        uStack_78 = *(undefined8 *)((long)__ptr + 0x28);
        uStack_80 = *(undefined8 *)((long)__ptr + 0x20);
        pvVar8 = *(void **)((long)__ptr + 8);
        local_50 = *(undefined8 *)((long)__ptr + 0x50);
        uStack_68 = *(undefined8 *)((long)__ptr + 0x38);
        local_70 = *(undefined8 *)((long)__ptr + 0x30);
        uStack_58 = *(undefined8 *)((long)__ptr + 0x48);
        uStack_60 = *(undefined8 *)((long)__ptr + 0x40);
        do {
          lVar6 = *local_90;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(local_90,0x10);
          if (bVar2) {
            *local_90 = lVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar6 + -1 == 0) {
          DataMemoryBarrier(2,1);
                    /* try { // try from 00562dc0 to 00562dc7 has its CatchHandler @ 00562ea8 */
          <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(&local_90);
        }
                    /* try { // try from 00562dc8 to 00562dcf has its CatchHandler @ 00562ebc */
        FUN_00562850(&uStack_80);
        free(__ptr);
        __ptr = pvVar8;
      }
      *(void **)pvVar7 = pvVar7;
      *(void **)((long)pvVar7 + 8) = pvVar7;
    }
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
                    /* try { // try from 00562dfc to 00562e1b has its CatchHandler @ 00562e78 */
    <rusqlite::inner_connection::rusqlite::inner_connection::InnerConnection>::close
              (&local_90,param_1 + 8);
    if (local_90 != (long *)0xffffffffffffffff) {
      FUN_00562ab4(&local_90);
    }
    plVar5 = *(long **)(param_1 + 8);
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
                    /* try { // try from 00562e38 to 00562e3f has its CatchHandler @ 00562e70 */
      <alloc::sync::[n]::alloc::sync::Arc<std::sync::poison::mutex::Mutex<*mut_libsqlite3_sys::bindings::sqlite3>>>
      ::drop_slow(param_1 + 8);
    }
    FUN_00562974((long *)(param_1 + 0x20));
    return;
  }
                    /* try { // try from 00562e60 to 00562e6b has its CatchHandler @ 00562ed0 */
  core::cell::panic_already_borrowed(&PTR_s__root__cargo_registry_src_index__00acff30);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x562e70);
  (*pcVar3)();
}


// ===== 00562ef0  <flux::persistence::worker::flux::persistence::worker::PersistenceWorkerHandle>::flush =====

/* WARNING: Unknown calling convention: __rustcall */
/* <flux::persistence::worker::flux::persistence::worker::PersistenceWorkerHandle>::flush */

void __rustcall
<flux::persistence::worker::flux::persistence::worker::PersistenceWorkerHandle>::flush
          (undefined8 *param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  long local_70;
  long *plStack_68;
  long lStack_60;
  long lStack_58;
  long local_50;
  long lStack_48;
  long local_40;
  undefined1 local_38;
  undefined7 uStack_37;
  
  local_40 = 0;
  local_38 = 2;
  plStack_68 = (long *)0x1;
  local_70 = 1;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  plVar6 = (long *)FUN_004b25a4(0x40,8);
  if (plVar6 == (long *)0x0) {
                    /* try { // try from 00563010 to 0056301b has its CatchHandler @ 00563050 */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x40);
  }
  plVar6[1] = (long)plStack_68;
  *plVar6 = local_70;
  plVar6[3] = lStack_58;
  plVar6[2] = lStack_60;
  plVar6[5] = lStack_48;
  plVar6[4] = local_50;
  plVar6[7] = CONCAT71(uStack_37,local_38);
  plVar6[6] = local_40;
  do {
    lVar7 = *plVar6;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = lVar7 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar7 < 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x563028);
    (*pcVar5)();
  }
  puVar1 = (ulong *)(*(long *)(param_2 + 8) + 0x1c0);
  uVar4 = *puVar1;
  do {
    if ((uVar4 & 1) != 0) {
      local_70 = 2;
      plStack_68 = plVar6;
LAB_00562fec:
      FUN_00562474(&local_70);
      *param_1 = plVar6;
      *(undefined1 *)(param_1 + 2) = 0;
      return;
    }
    if (uVar4 == 0xfffffffffffffffe) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00563020 to 00563023 has its CatchHandler @ 00563030 */
      std::process::abort();
    }
    while (*puVar1 == uVar4) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 + 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        local_70 = 2;
                    /* try { // try from 00562fd8 to 00562ff3 has its CatchHandler @ 00563028 */
        plStack_68 = plVar6;
        FUN_00557f30((long *)(param_2 + 8),&local_70);
        local_70 = -1;
        goto LAB_00562fec;
      }
    }
    ClearExclusiveLocal();
    uVar4 = *puVar1;
  } while( true );
}


// ===== 00563068  <flux::persistence::worker::flux::persistence::worker::PersistenceWorkerHandle>::persist =====

/* WARNING: Unknown calling convention: __rustcall */
/* <flux::persistence::worker::flux::persistence::worker::PersistenceWorkerHandle>::persist */

void __rustcall
<flux::persistence::worker::flux::persistence::worker::PersistenceWorkerHandle>::persist
          (long param_1,undefined8 *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  if (param_2[3] == 0) {
    FUN_0055e2cc(param_2);
    return;
  }
  uStack_40 = param_2[1];
  uStack_48 = *param_2;
  local_30 = param_2[3];
  uStack_38 = param_2[2];
  puVar1 = (ulong *)(*(long *)(param_1 + 8) + 0x1c0);
  uVar4 = *puVar1;
  while( true ) {
    if ((uVar4 & 1) != 0) {
      local_50 = 1;
      FUN_00562474(&local_50);
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
        local_50 = 1;
        FUN_00557f30((long *)(param_1 + 8),&local_50);
        local_50 = 0xffffffffffffffff;
        FUN_00562474(&local_50);
        return;
      }
    }
    ClearExclusiveLocal();
    uVar4 = *puVar1;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0056314c to 0056314f has its CatchHandler @ 00563154 */
  std::process::abort();
}


// ===== 0056316c  <flux::persistence::worker::flux::persistence::worker::PersistenceWorkerHandle>::register =====

/* WARNING: Unknown calling convention: __rustcall */
/* <flux::persistence::worker::flux::persistence::worker::PersistenceWorkerHandle>::register */

void __rustcall
<flux::persistence::worker::flux::persistence::worker::PersistenceWorkerHandle>::register
          (long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  uStack_40 = param_2[1];
  uStack_48 = *param_2;
  puVar1 = (ulong *)(*(long *)(param_1 + 8) + 0x1c0);
  uVar4 = *puVar1;
  while( true ) {
    uStack_38 = param_3;
    local_30 = param_4;
    if ((uVar4 & 1) != 0) {
      local_50 = 0;
      FUN_00562474(&local_50);
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
        local_50 = 0;
        FUN_00557f30((long *)(param_1 + 8),&local_50);
        local_50 = 0xffffffffffffffff;
        FUN_00562474(&local_50);
        return;
      }
    }
    ClearExclusiveLocal();
    uVar4 = *puVar1;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00563234 to 00563237 has its CatchHandler @ 0056323c */
  std::process::abort();
}


// ===== 00563254  <flux::persistence::worker::[0]::flux::persistence::worker::PersistenceWorker>::flush_pending =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <flux::persistence::worker::[0]::flux::persistence::worker::PersistenceWorker>::flush_pending */

void __rustcall
<flux::persistence::worker::[0]::flux::persistence::worker::PersistenceWorker>::flush_pending
          (long *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  undefined8 **ppuVar5;
  undefined1 auVar6 [8];
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 **ppuVar12;
  undefined1 uVar13;
  undefined8 **ppuVar14;
  undefined1 uVar15;
  undefined7 uVar16;
  undefined7 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined7 uVar20;
  undefined7 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined7 uVar24;
  undefined7 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined7 uVar28;
  undefined7 uVar29;
  void *pvVar30;
  undefined **ppuVar31;
  long lVar32;
  long lVar33;
  ulong uVar34;
  long lVar35;
  long lVar36;
  ulong uVar37;
  void *pvVar38;
  undefined8 *puVar39;
  long lVar40;
  ulong *puVar41;
  undefined8 *puVar42;
  undefined8 *puVar43;
  undefined8 *puVar44;
  undefined8 **ppuVar45;
  long lVar46;
  undefined8 uVar47;
  ulong uVar48;
  undefined8 uVar49;
  byte bVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  ulong uVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [12];
  undefined8 *local_258;
  long local_240;
  undefined8 *local_220;
  long lStack_218;
  long lStack_210;
  undefined8 *local_208;
  undefined1 local_1f8 [12];
  undefined8 *local_1e8;
  undefined8 *local_1e0;
  undefined *puStack_1d8;
  undefined8 ***local_1d0;
  undefined8 ***local_1c8;
  long local_1c0;
  void *local_1b8;
  ulong uStack_1b0;
  ulong local_1a8;
  long lStack_1a0;
  long *local_198;
  undefined8 **local_190;
  undefined8 *puStack_188;
  undefined8 **ppuStack_180;
  undefined7 uStack_178;
  undefined1 uStack_171;
  undefined7 uStack_170;
  undefined1 uStack_169;
  undefined7 uStack_168;
  undefined1 uStack_161;
  char *pcStack_160;
  undefined8 *local_158;
  undefined8 **ppuStack_150;
  undefined *local_148;
  undefined1 local_140 [12];
  undefined1 local_130 [16];
  undefined1 local_120 [8];
  undefined8 **ppuStack_118;
  undefined8 *local_110;
  long local_108;
  undefined1 local_100 [16];
  undefined8 **local_f0;
  undefined8 **ppuStack_e8;
  undefined1 local_e0;
  undefined7 uStack_df;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined1 local_d0;
  undefined7 uStack_cf;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  char *pcStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined *local_a0;
  undefined8 ***pppuStack_98;
  undefined1 auStack_81 [17];
  
  lVar32 = _UNK_00acfe18;
  lVar35 = _DAT_00acfe10;
  puVar11 = PTR_DAT_00acfe00;
  if (param_1[0xb] != 0) {
    lStack_218 = param_1[9];
    local_220 = (undefined8 *)param_1[8];
    local_208 = (undefined8 *)param_1[0xb];
    lStack_210 = param_1[10];
    param_1[9] = _UNK_00acfe08;
    param_1[8] = (long)puVar11;
    param_1[0xb] = lVar32;
    param_1[10] = lVar35;
                    /* try { // try from 0056329c to 0056329f has its CatchHandler @ 00563f5c */
    local_140 = <tokio::time::instant::tokio::time::instant::Instant>::now();
    lVar35 = lStack_218;
    auVar54._8_8_ = local_130._8_8_;
    auVar54._0_8_ = local_130._0_8_;
    local_1f8._0_8_ = local_208;
    if (lStack_218 != 0) {
      local_240 = lStack_218 * 0x11 + 0x19;
      local_258 = local_220 + lStack_218 * -2 + -2;
    }
    if (local_208 != (undefined8 *)0x0) {
      puVar43 = local_220 + 1;
      uVar48 = NEON_cmge(*local_220,0,1);
      uVar48 = uVar48 & 0x8080808080808080;
      puVar44 = local_220;
      puVar42 = local_208;
      local_130 = auVar54;
      do {
        for (; uVar48 == 0; uVar48 = uVar48 & 0x8080808080808080) {
          uVar48 = NEON_cmge(*puVar43,0,1);
          puVar43 = puVar43 + 1;
          puVar44 = puVar44 + -0x10;
        }
        if (param_1[3] == 0) {
LAB_00563d84:
                    /* try { // try from 00563d84 to 00563d9b has its CatchHandler @ 005640f0 */
                    /* WARNING: Subroutine does not return */
          core::option::expect_failed
                    ("no entry found for keyInternalMalfunctionPermissionDeniedOperationAbortedDatabaseBusyDatabaseLockedOutOfMemoryReadOnlyOperationInterruptedSystemIoFailureDatabaseCorruptNotFoundDiskFullCannotOpenFileLockingProtocolFailedSchemaChangedTooBigConstraintViolationTypeMismatchApiMisuseNoLargeFileSupportAuthorizationForStatementDeniedParameterOutOfRangeNotADatabaseUnknownSqliteFailureSqliteSingleThreadedModeFromSqlConversionFailureIntegralValueOutOfRangeUtf8ErrorInvalidParameterNameInvalidPathExecuteReturnedResultsQueryReturnedNoRowsQueryReturnedMoreThanOneRowInvalidColumnIndexInvalidColumnNameInvalidColumnTypeStatementChangedRowsToSqlConversionFailureInvalidQueryUnwindingPanicMultipleStatementInvalidParameterCount"
                     ,0x16,&PTR_s_mobile_flux_src_persistence_work_00acff00);
        }
        uVar53 = (uVar48 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar48 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar53 = (uVar53 & 0xffff0000ffff0000) >> 0x10 | (uVar53 & 0xffff0000ffff) << 0x10;
        lVar32 = 0;
        uVar48 = uVar48 - 1 & uVar48;
        puVar42 = (undefined8 *)((long)puVar42 + -1);
        uVar53 = LZCOUNT(uVar53 >> 0x20 | uVar53 << 0x20) & 0x78;
        lVar33 = *(long *)((long)puVar44 + uVar53 * -2 + -0x10);
        lVar1 = *(long *)((long)puVar44 + uVar53 * -2 + -8);
        bVar50 = (byte)((ulong)(lVar1 * 0x517cc1b727220a95) >> 0x39);
        uVar47 = CONCAT17(bVar50,CONCAT16(bVar50,CONCAT15(bVar50,CONCAT14(bVar50,CONCAT13(bVar50,
                                                  CONCAT12(bVar50,CONCAT11(bVar50,bVar50)))))));
        lVar46 = *param_1;
        uVar2 = param_1[1];
        uVar37 = lVar1 * 0x517cc1b727220a95 & uVar2;
        uVar51 = *(undefined8 *)(lVar46 + uVar37);
        uVar53 = NEON_cmeq(uVar51,uVar47,1);
        uVar53 = uVar53 & 0x8080808080808080;
        while( true ) {
          for (; uVar53 == 0; uVar53 = uVar53 & 0x8080808080808080) {
            uVar51 = NEON_cmeq(uVar51,0xffffffffffffffff,1);
            bVar50 = NEON_umaxv(uVar51,1);
            if ((bVar50 & 1) != 0) goto LAB_00563d84;
            lVar32 = lVar32 + 8;
            uVar37 = uVar37 + lVar32 & uVar2;
            uVar51 = *(undefined8 *)(lVar46 + uVar37);
            uVar53 = NEON_cmeq(uVar51,uVar47,1);
          }
          uVar34 = (uVar53 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar53 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar34 = (uVar34 & 0xffff0000ffff0000) >> 0x10 | (uVar34 & 0xffff0000ffff) << 0x10;
          lVar36 = lVar46 + (uVar37 + ((ulong)LZCOUNT(uVar34 >> 0x20 | uVar34 << 0x20) >> 3) & uVar2
                            ) * -0x20;
          if (lVar1 == *(long *)(lVar36 + -0x18) && lVar33 == *(long *)(lVar36 + -0x20)) break;
          uVar53 = uVar53 - 1 & uVar53;
        }
        uVar51 = *(undefined8 *)(lVar36 + -0x10);
        lVar32 = *(long *)(lVar36 + -8);
                    /* try { // try from 005633f8 to 0056341b has its CatchHandler @ 00563fac */
        auVar54 = (**(code **)(lVar32 + 0x18))(uVar51);
        local_130 = auVar54;
        (**(code **)(lVar32 + 0x20))(local_120,uVar51);
                    /* try { // try from 0056341c to 00563433 has its CatchHandler @ 00563f84 */
        FUN_005692fc(&local_f0,param_1 + 0x11,auVar54._0_8_,auVar54._8_8_,local_120);
        ppuVar14 = local_f0;
        if (local_f0 == (undefined8 **)0xfffffffffffffffd) {
          local_190 = ppuStack_e8;
          uStack_178 = (undefined7)CONCAT71(uStack_cf,local_d0);
          uStack_171 = (undefined1)((uint7)uStack_cf >> 0x30);
          local_1e0 = (undefined8 *)local_130;
          uStack_168 = (undefined7)CONCAT71(uStack_bf,uStack_c0);
          uStack_161 = (undefined1)((uint7)uStack_bf >> 0x30);
          uStack_170 = (undefined7)CONCAT71(uStack_c7,uStack_c8);
          uStack_169 = (undefined1)((uint7)uStack_c7 >> 0x30);
          local_158 = puStack_b0;
          pcStack_160 = pcStack_b8;
          puStack_1d8 = PTR_fmt_00b00d60;
          local_1d0 = &local_190;
          local_1c8 = (undefined8 ***)FUN_005642d4;
                    /* try { // try from 00563e0c to 00563e27 has its CatchHandler @ 00564028 */
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_fmt
                    (&DAT_002b1198,&local_1e0,&PTR_s_mobile_flux_src_persistence_work_00acff18);
        }
        puStack_1d8 = (undefined *)uStack_a8;
        local_1e0 = puStack_b0;
        local_1c8 = pppuStack_98;
        local_1d0 = (undefined8 ***)local_a0;
                    /* try { // try from 00563450 to 00563463 has its CatchHandler @ 00563f44 */
        local_100._0_8_ = lVar33;
        local_100._8_8_ = lVar1;
        FUN_005667cc(&local_190,param_1 + 4,local_100,&local_1e0);
        puVar39 = puStack_188;
        ppuVar12 = local_190;
        if ((local_190 != (undefined8 **)0x0) && (puStack_188 != (undefined8 *)0x0)) {
          lVar32 = CONCAT17(uStack_171,uStack_178);
          if (lVar32 != 0) {
            ppuVar45 = local_190 + 1;
            uVar53 = NEON_cmge(*local_190,0,1);
            uVar53 = uVar53 & 0x8080808080808080;
            ppuVar5 = local_190;
            do {
              for (; uVar53 == 0; uVar53 = uVar53 & 0x8080808080808080) {
                uVar53 = NEON_cmge(*ppuVar45,0,1);
                ppuVar5 = ppuVar5 + -0x28;
                ppuVar45 = ppuVar45 + 1;
              }
              uVar2 = (uVar53 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                      (uVar53 >> 7 & 0xff00ff00ff00ff) << 8;
              uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
              iVar4 = (int)((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3);
              if (ppuVar5[(long)-iVar4 * 5 + -3] != (undefined8 *)0x0) {
                free(ppuVar5[(long)-iVar4 * 5 + -2]);
              }
              lVar32 = lVar32 + -1;
              uVar53 = uVar53 - 1 & uVar53;
            } while (lVar32 != 0);
          }
          if ((long)puVar39 * 0x29 != -0x31) {
            free(ppuVar12 + (long)puVar39 * -5 + -5);
          }
        }
        if (1 < (long)ppuVar14 + 3U) {
          if (ppuVar14 == (undefined8 **)0xffffffffffffffff) {
            pvVar38 = (void *)CONCAT71(uStack_df,local_e0);
            lVar32 = CONCAT71(uStack_d7,uStack_d8) + 1;
            pvVar30 = pvVar38;
            while (lVar32 = lVar32 + -1, lVar32 != 0) {
                    /* try { // try from 00563548 to 0056354b has its CatchHandler @ 00563fb4 */
              FUN_00564a20(pvVar30);
              pvVar30 = (void *)((long)pvVar30 + 0x40);
            }
            if (ppuStack_e8 != (undefined8 **)0x0) {
              free(pvVar38);
            }
          }
          else {
                    /* try { // try from 00563554 to 0056355b has its CatchHandler @ 00563f84 */
            FUN_00562ab4(&local_f0);
          }
        }
        ppuVar14 = ppuStack_118;
        if (ppuStack_118 != (undefined8 **)0x0) {
          if (local_108 != 0) {
            puVar39 = (undefined8 *)((long)local_120 + 8);
            uVar53 = NEON_cmge(*(undefined8 *)local_120,0,1);
            uVar53 = uVar53 & 0x8080808080808080;
            auVar6 = local_120;
            lVar32 = local_108;
            do {
              for (; uVar53 == 0; uVar53 = uVar53 & 0x8080808080808080) {
                uVar53 = NEON_cmge(*puVar39,0,1);
                auVar6 = (undefined1  [8])((long)auVar6 + -0x1c0);
                puVar39 = puVar39 + 1;
              }
              uVar2 = (uVar53 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                      (uVar53 >> 7 & 0xff00ff00ff00ff) << 8;
              uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
              iVar4 = (int)((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3);
              if (*(long *)((long)auVar6 + ((long)-iVar4 * 7 + -5) * 8) != 0) {
                free(*(void **)((long)auVar6 + ((long)-iVar4 * 7 + -4) * 8));
              }
              lVar32 = lVar32 + -1;
              uVar53 = uVar53 - 1 & uVar53;
            } while (lVar32 != 0);
          }
          if ((long)ppuVar14 * 0x39 != -0x41) {
            free((undefined8 *)((long)local_120 + ((long)ppuVar14 * -7 + -7) * 8));
          }
        }
      } while (puVar42 != (undefined8 *)0x0);
    }
    if ((lVar35 != 0) && (local_240 != 0)) {
      free(local_258);
    }
    if (2 < *(ulong *)PTR_MAX_LOG_LEVEL_FILTER_00b00c78) {
      auVar55 = <tokio::time::instant::tokio::time::instant::Instant>::elapsed(local_140);
      local_1e0 = auVar55._0_8_;
      local_190 = (undefined8 **)local_1f8;
      puStack_1d8 = (undefined *)CONCAT44(puStack_1d8._4_4_,auVar55._8_4_);
      pppuStack_98 = &local_190;
      puStack_188 = (undefined8 *)PTR_fmt_00b00c10;
      ppuStack_180 = &local_1e0;
      uStack_d8 = (undefined1)_UNK_002a00f8;
      uStack_d7 = (undefined7)((ulong)_UNK_002a00f8 >> 8);
      local_e0 = (undefined1)_DAT_002a00f0;
      uStack_df = (undefined7)((ulong)_DAT_002a00f0 >> 8);
      uStack_178 = SUB87(PTR_fmt_00b00d30,0);
      uStack_171 = (undefined1)((ulong)PTR_fmt_00b00d30 >> 0x38);
      pcStack_b8 = "flux::persistence";
      puStack_b0 = (undefined8 *)0x11;
      local_a0 = &DAT_002b8366;
      local_f0 = (undefined8 **)0x0;
      ppuStack_e8 = (undefined8 **)0x2c27f7;
      uStack_c0 = (undefined1)_UNK_002a06a8;
      uStack_bf = (undefined7)((ulong)_UNK_002a06a8 >> 8);
      uStack_c8 = (undefined1)_DAT_002a06a0;
      uStack_c7 = (undefined7)((ulong)_DAT_002a06a0 >> 8);
      local_d0 = 0x7c;
      uStack_cf = 0x2a1b;
      uStack_a8 = DAT_002a18f0;
      <log::__private_api::GlobalLogger_as_log::Log>::log(auStack_81,&local_f0);
    }
  }
  local_1f8 = <tokio::time::instant::tokio::time::instant::Instant>::now();
  <rusqlite::[1]::rusqlite::Connection>::execute_batch
            (&local_f0,param_1 + 0x11,
             &DAT_002c2b50 + *(int *)(&DAT_002c2b50 + (ulong)*(byte *)(param_1 + 0x1e) * 4),
             *(undefined8 *)(&DAT_002c2b38 + (ulong)*(byte *)(param_1 + 0x1e) * 8));
  puVar41 = (ulong *)PTR_MAX_LOG_LEVEL_FILTER_00b00c78;
  if (local_f0 != (undefined8 **)0xffffffffffffffff) {
    ppuStack_180 = (undefined8 **)CONCAT17(uStack_c8,uStack_cf);
    uStack_169 = SUB81(pcStack_b8,0);
    uStack_168 = (undefined7)((ulong)pcStack_b8 >> 8);
    uStack_170 = uStack_bf;
    puStack_188 = (undefined8 *)CONCAT17(local_d0,uStack_d7);
    local_190 = (undefined8 **)CONCAT17(uStack_d8,uStack_df);
    uStack_178 = uStack_c7;
    uStack_171 = uStack_c0;
                    /* try { // try from 00563ee4 to 00563f07 has its CatchHandler @ 00563f70 */
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              ("called `Result::unwrap()` on an `Err` value",0x2b,&local_f0,&PTR_FUN_00acfe20,
               &PTR_s_mobile_flux_src_persistence_work_00acfe70);
  }
  local_140._8_4_ = local_140._8_4_ & 0xffffff00;
  local_140._0_8_ = param_1 + 0x11;
  if (2 < *(ulong *)PTR_MAX_LOG_LEVEL_FILTER_00b00c78) {
    local_1e0 = (undefined8 *)param_1[0xf];
    local_190 = &local_1e0;
    puStack_188 = (undefined8 *)PTR_fmt_00b00c10;
    pcStack_b8 = "flux::persistence";
    puStack_b0 = (undefined8 *)0x11;
    pppuStack_98 = &local_190;
    local_a0 = &DAT_002b9206;
    uStack_d8 = (undefined1)_UNK_002a00f8;
    uStack_d7 = (undefined7)((ulong)_UNK_002a00f8 >> 8);
    local_e0 = (undefined1)_DAT_002a00f0;
    uStack_df = (undefined7)((ulong)_DAT_002a00f0 >> 8);
    local_f0 = (undefined8 **)0x0;
    ppuStack_e8 = (undefined8 **)0x2c27f7;
    uStack_c0 = (undefined1)_UNK_002a06a8;
    uStack_bf = (undefined7)((ulong)_UNK_002a06a8 >> 8);
    uStack_c8 = (undefined1)_DAT_002a06a0;
    uStack_c7 = (undefined7)((ulong)_DAT_002a06a0 >> 8);
    local_d0 = 0x7c;
    uStack_cf = 0x2a1b;
    uStack_a8 = DAT_002a17f0;
                    /* try { // try from 005637e8 to 005637f3 has its CatchHandler @ 00563fa4 */
    <log::__private_api::GlobalLogger_as_log::Log>::log(auStack_81,&local_f0);
  }
  lVar32 = _UNK_00acfaa8;
  lVar35 = _DAT_00acfaa0;
  puVar11 = PTR_DAT_00acfa90;
  local_1e8 = (undefined8 *)0x0;
  local_198 = param_1 + 0xc;
  puVar44 = (undefined8 *)*local_198;
  uStack_1b0 = param_1[0xd];
  local_1b8 = (void *)*local_198;
  lStack_1a0 = param_1[0xf];
  local_1a8 = param_1[0xe];
  lVar46 = param_1[0xf];
  uVar52 = *puVar44;
  puVar43 = puVar44 + 1;
  lVar33 = param_1[0xd];
  param_1[0xd] = _UNK_00acfa98;
  *local_198 = (long)puVar11;
  param_1[0xf] = lVar32;
  param_1[0xe] = lVar35;
  uVar10 = DAT_002a1888;
  uVar9 = DAT_002a16f8;
  uVar8 = _UNK_002a06a8;
  uVar7 = _DAT_002a06a0;
  uVar47 = _UNK_002a00f8;
  uVar51 = _DAT_002a00f0;
  uVar48 = NEON_cmge(uVar52,0,1);
  local_1c8 = (undefined8 ***)((long)puVar44 + lVar33 + 1);
  uVar48 = uVar48 & 0x8080808080808080;
  if (lVar46 != 0) {
    puVar42 = (undefined8 *)0x0;
    local_1c0 = lVar46;
    local_1d0 = (undefined8 ***)puVar43;
    puStack_1d8 = (undefined *)uVar48;
    local_1e0 = puVar44;
    do {
      for (; uVar28 = uStack_bf, uVar26 = uStack_c0, uVar24 = uStack_c7, uVar22 = uStack_c8,
          uVar20 = uStack_d7, uVar18 = uStack_d8, uVar16 = uStack_df, uVar13 = local_e0, uVar48 == 0
          ; uVar48 = uVar48 & 0x8080808080808080) {
        puVar44 = puVar44 + -0x20;
        uVar48 = NEON_cmge(*puVar43,0,1);
        puVar43 = puVar43 + 1;
      }
      uVar53 = (uVar48 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar48 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar53 = (uVar53 & 0xffff0000ffff0000) >> 0x10 | (uVar53 & 0xffff0000ffff) << 0x10;
      lVar46 = lVar46 + -1;
      uVar53 = LZCOUNT(uVar53 >> 0x20 | uVar53 << 0x20) & 0x78;
      pvVar38 = *(void **)((long)puVar44 + uVar53 * -4 + -0x10);
      uVar48 = uVar48 - 1 & uVar48;
      puVar41 = (ulong *)PTR_MAX_LOG_LEVEL_FILTER_00b00c78;
      if (pvVar38 == (void *)0x0) break;
      puVar39 = *(undefined8 **)((long)puVar44 + uVar53 * -4 + -8);
      if (param_1[7] == 0) {
LAB_00563da0:
        ppuVar31 = &PTR_s_mobile_flux_src_persistence_work_00acfeb8;
LAB_00563db4:
        local_1e0 = puVar44;
        puStack_1d8 = (undefined *)uVar48;
        local_1d0 = (undefined8 ***)puVar43;
        local_1c0 = lVar46;
                    /* try { // try from 00563dc0 to 00563dcf has its CatchHandler @ 0056404c */
                    /* WARNING: Subroutine does not return */
        core::option::expect_failed
                  ("no entry found for keyInternalMalfunctionPermissionDeniedOperationAbortedDatabaseBusyDatabaseLockedOutOfMemoryReadOnlyOperationInterruptedSystemIoFailureDatabaseCorruptNotFoundDiskFullCannotOpenFileLockingProtocolFailedSchemaChangedTooBigConstraintViolationTypeMismatchApiMisuseNoLargeFileSupportAuthorizationForStatementDeniedParameterOutOfRangeNotADatabaseUnknownSqliteFailureSqliteSingleThreadedModeFromSqlConversionFailureIntegralValueOutOfRangeUtf8ErrorInvalidParameterNameInvalidPathExecuteReturnedResultsQueryReturnedNoRowsQueryReturnedMoreThanOneRowInvalidColumnIndexInvalidColumnNameInvalidColumnTypeStatementChangedRowsToSqlConversionFailureInvalidQueryUnwindingPanicMultipleStatementInvalidParameterCount"
                   ,0x16,ppuVar31);
      }
      lVar32 = *(long *)((long)puVar44 + uVar53 * -4 + -0x20);
      lVar1 = *(long *)((long)puVar44 + uVar53 * -4 + -0x18);
      lVar35 = 0;
      uVar34 = lVar1 * 0x517cc1b727220a95;
      bVar50 = (byte)(uVar34 >> 0x39);
      uVar49 = CONCAT17(bVar50,CONCAT16(bVar50,CONCAT15(bVar50,CONCAT14(bVar50,CONCAT13(bVar50,
                                                  CONCAT12(bVar50,CONCAT11(bVar50,bVar50)))))));
      lVar33 = param_1[4];
      uVar2 = param_1[5];
      uVar37 = uVar34 & uVar2;
      uVar52 = *(undefined8 *)(lVar33 + uVar37);
      uVar53 = NEON_cmeq(uVar52,uVar49,1);
      uVar53 = uVar53 & 0x8080808080808080;
      while( true ) {
        for (; uVar53 == 0; uVar53 = uVar53 & 0x8080808080808080) {
          uVar52 = NEON_cmeq(uVar52,0xffffffffffffffff,1);
          bVar50 = NEON_umaxv(uVar52,1);
          if ((bVar50 & 1) != 0) goto LAB_00563da0;
          lVar35 = lVar35 + 8;
          uVar37 = uVar37 + lVar35 & uVar2;
          uVar52 = *(undefined8 *)(lVar33 + uVar37);
          uVar53 = NEON_cmeq(uVar52,uVar49,1);
        }
        uVar3 = (uVar53 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar53 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
        lVar36 = lVar33 + (uVar37 + ((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3) & uVar2) *
                          -0x30;
        if (lVar1 == *(long *)(lVar36 + -0x28) && lVar32 == *(long *)(lVar36 + -0x30)) break;
        uVar53 = uVar53 - 1 & uVar53;
      }
      if (param_1[3] == 0) {
LAB_00563dac:
        ppuVar31 = &PTR_s_mobile_flux_src_persistence_work_00acfed0;
        goto LAB_00563db4;
      }
      lVar33 = *param_1;
      uVar2 = param_1[1];
      lVar35 = 0;
      uVar34 = uVar34 & uVar2;
      uVar52 = *(undefined8 *)(lVar33 + uVar34);
      uVar53 = NEON_cmeq(uVar52,uVar49,1);
      uVar53 = uVar53 & 0x8080808080808080;
      while( true ) {
        for (; uVar53 == 0; uVar53 = uVar53 & 0x8080808080808080) {
          uVar52 = NEON_cmeq(uVar52,0xffffffffffffffff,1);
          bVar50 = NEON_umaxv(uVar52,1);
          if ((bVar50 & 1) != 0) goto LAB_00563dac;
          lVar35 = lVar35 + 8;
          uVar34 = uVar34 + lVar35 & uVar2;
          uVar52 = *(undefined8 *)(lVar33 + uVar34);
          uVar53 = NEON_cmeq(uVar52,uVar49,1);
        }
        uVar37 = (uVar53 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar53 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar37 = (uVar37 & 0xffff0000ffff0000) >> 0x10 | (uVar37 & 0xffff0000ffff) << 0x10;
        lVar40 = lVar33 + (uVar34 + ((ulong)LZCOUNT(uVar37 >> 0x20 | uVar37 << 0x20) >> 3) & uVar2)
                          * -0x20;
        if (lVar1 == *(long *)(lVar40 + -0x18) && lVar32 == *(long *)(lVar40 + -0x20)) break;
        uVar53 = uVar53 - 1 & uVar53;
      }
      local_e0 = (undefined1)uVar51;
      uVar15 = local_e0;
      uStack_df = (undefined7)((ulong)uVar51 >> 8);
      uVar17 = uStack_df;
      uStack_d8 = (undefined1)uVar47;
      uVar19 = uStack_d8;
      uStack_d7 = (undefined7)((ulong)uVar47 >> 8);
      uVar21 = uStack_d7;
      uStack_c8 = (undefined1)uVar7;
      uVar23 = uStack_c8;
      uStack_c7 = (undefined7)((ulong)uVar7 >> 8);
      uVar25 = uStack_c7;
      uStack_c0 = (undefined1)uVar8;
      uVar27 = uStack_c0;
      uStack_bf = (undefined7)((ulong)uVar8 >> 8);
      uVar29 = uStack_bf;
      local_e0 = uVar13;
      uStack_df = uVar16;
      uStack_d8 = uVar18;
      uStack_d7 = uVar20;
      uStack_c8 = uVar22;
      uStack_c7 = uVar24;
      uStack_c0 = uVar26;
      uStack_bf = uVar28;
      if (2 < *(ulong *)PTR_MAX_LOG_LEVEL_FILTER_00b00c78) {
                    /* try { // try from 00563a48 to 00563bdb has its CatchHandler @ 00563f8c */
        _local_120 = (**(code **)(*(long *)(lVar40 + -8) + 0x18))(*(undefined8 *)(lVar40 + -0x10));
        local_190 = (undefined8 **)local_120;
        uStack_a8 = uVar10;
        puStack_188 = (undefined8 *)PTR_fmt_00b00d60;
        puStack_b0 = (undefined8 *)0x11;
        pppuStack_98 = &local_190;
        local_a0 = &DAT_002adf3f;
        local_f0 = (undefined8 **)0x0;
        ppuStack_e8 = (undefined8 **)0x2c27f7;
        pcStack_b8 = "flux::persistence";
        local_d0 = 0x7c;
        uStack_cf = 0x2a1b;
        local_e0 = uVar15;
        uStack_df = uVar17;
        uStack_d8 = uVar19;
        uStack_d7 = uVar21;
        uStack_c8 = uVar23;
        uStack_c7 = uVar25;
        uStack_c0 = uVar27;
        uStack_bf = uVar29;
        <log::__private_api::GlobalLogger_as_log::Log>::log(auStack_81,&local_f0);
      }
      auVar55 = <tokio::time::instant::tokio::time::instant::Instant>::now();
      local_130._8_4_ = auVar55._8_4_;
      local_130._0_8_ = auVar55._0_8_;
      (**(code **)(*(long *)(lVar40 + -8) + 0x28))
                (&local_190,*(undefined8 *)(lVar40 + -0x10),lVar36 + -0x20,local_140,pvVar38,puVar39
                );
      if (local_190 != (undefined8 **)0xffffffffffffffff) {
        ppuStack_e8 = (undefined8 **)puStack_188;
        local_f0 = local_190;
        uStack_d8 = (undefined1)uStack_178;
        uStack_d7 = (undefined7)(CONCAT17(uStack_171,uStack_178) >> 8);
        local_e0 = SUB81(ppuStack_180,0);
        uStack_df = (undefined7)((ulong)ppuStack_180 >> 8);
        uStack_c8 = (undefined1)uStack_168;
        uStack_c7 = (undefined7)(CONCAT17(uStack_161,uStack_168) >> 8);
        local_d0 = (undefined1)uStack_170;
        uStack_cf = (undefined7)(CONCAT17(uStack_169,uStack_170) >> 8);
        pcStack_b8 = (char *)local_158;
        uStack_c0 = SUB81(pcStack_160,0);
        uStack_bf = (undefined7)((ulong)pcStack_160 >> 8);
                    /* try { // try from 00563e80 to 00563ea3 has its CatchHandler @ 00563ffc */
        local_1e0 = puVar44;
        puStack_1d8 = (undefined *)uVar48;
        local_1d0 = (undefined8 ***)puVar43;
        local_1c0 = lVar46;
                    /* WARNING: Subroutine does not return */
        core::result::unwrap_failed
                  ("called `Result::unwrap()` on an `Err` value",0x2b,&local_f0,&PTR_FUN_00acfe20,
                   &PTR_s_mobile_flux_src_persistence_work_00acfee8);
      }
      local_110 = (undefined8 *)CONCAT17(uStack_171,uStack_178);
      ppuStack_118 = ppuStack_180;
      local_120 = (undefined1  [8])puStack_188;
      if (2 < *(ulong *)PTR_MAX_LOG_LEVEL_FILTER_00b00c78) {
        auVar54 = (**(code **)(*(long *)(lVar40 + -8) + 0x18))(*(undefined8 *)(lVar40 + -0x10));
        local_100 = auVar54;
        auVar55 = <tokio::time::instant::tokio::time::instant::Instant>::elapsed(local_130);
        local_220 = auVar55._0_8_;
        local_190 = (undefined8 **)local_120;
        lStack_218 = CONCAT44(lStack_218._4_4_,auVar55._8_4_);
        uStack_178 = SUB87(PTR_fmt_00b00c10,0);
        uStack_171 = (undefined1)((ulong)PTR_fmt_00b00c10 >> 0x38);
        uStack_170 = SUB87(&ppuStack_118,0);
        uStack_169 = (undefined1)((ulong)&ppuStack_118 >> 0x38);
        pcStack_160 = local_100;
        puStack_188 = (undefined8 *)PTR_fmt_00b00c10;
        ppuStack_150 = &local_220;
        local_158 = (undefined8 *)PTR_fmt_00b00d60;
        uStack_a8 = uVar9;
        local_148 = PTR_fmt_00b00d30;
        puStack_b0 = (undefined8 *)0x11;
        pppuStack_98 = &local_190;
        local_a0 = &DAT_002a2860;
        local_f0 = (undefined8 **)0x0;
        ppuStack_e8 = (undefined8 **)0x2c27f7;
        pcStack_b8 = "flux::persistence";
        local_d0 = 0x7c;
        uStack_cf = 0x2a1b;
        ppuStack_180 = &local_110;
        uStack_168 = uStack_178;
        uStack_161 = uStack_171;
        local_e0 = uVar15;
        uStack_df = uVar17;
        uStack_d8 = uVar19;
        uStack_d7 = uVar21;
        uStack_c8 = uVar23;
        uStack_c7 = uVar25;
        uStack_c0 = uVar27;
        uStack_bf = uVar29;
        <log::__private_api::GlobalLogger_as_log::Log>::log(auStack_81,&local_f0);
      }
      puVar42 = (undefined8 *)
                ((undefined *)((long)local_120 + (long)puVar42) +
                (long)ppuStack_118 + (long)local_110);
      local_1e8 = puVar42;
      if ((code *)*puVar39 != (code *)0x0) {
                    /* try { // try from 00563bfc to 00563c03 has its CatchHandler @ 00563f0c */
        (*(code *)*puVar39)(pvVar38);
      }
      if (puVar39[1] != 0) {
        free(pvVar38);
      }
      puVar41 = (ulong *)PTR_MAX_LOG_LEVEL_FILTER_00b00c78;
    } while (lVar46 != 0);
  }
                    /* try { // try from 00563c34 to 00563c3b has its CatchHandler @ 00563fa4 */
  local_1e0 = puVar44;
  puStack_1d8 = (undefined *)uVar48;
  local_1d0 = (undefined8 ***)puVar43;
  local_1c0 = lVar46;
  FUN_0055de08(&local_1e0);
  uVar48 = uStack_1b0;
  if (uStack_1b0 != 0) {
    memset(local_1b8,0xff,uStack_1b0 + 9);
  }
  local_1a8 = uVar48;
  if (7 < uVar48) {
    local_1a8 = (uVar48 + 1 >> 3) * 7;
  }
  lStack_1a0 = 0;
  local_198[1] = uStack_1b0;
  *local_198 = (long)local_1b8;
  local_198[3] = 0;
  local_198[2] = local_1a8;
                    /* try { // try from 00563c84 to 00563c97 has its CatchHandler @ 00563fa4 */
  auVar55 = <tokio::time::instant::tokio::time::instant::Instant>::elapsed(local_1f8);
  local_220 = auVar55._0_8_;
  lStack_218 = CONCAT44(lStack_218._4_4_,auVar55._8_4_);
  auVar55 = <tokio::time::instant::tokio::time::instant::Instant>::now();
  uVar51 = local_140._0_8_;
  local_120 = auVar55._0_8_;
  uVar13 = local_140[8];
  ppuStack_118 = (undefined8 **)CONCAT44(ppuStack_118._4_4_,auVar55._8_4_);
                    /* try { // try from 00563ca8 to 00563cbf has its CatchHandler @ 00563f2c */
  <rusqlite::[1]::rusqlite::Connection>::execute_batch(&local_190,local_140._0_8_,"COMMIT",6);
  FUN_00562714(uVar51,uVar13);
  if (local_190 != (undefined8 **)0xffffffffffffffff) {
    ppuStack_e8 = (undefined8 **)puStack_188;
    local_f0 = local_190;
    uStack_d8 = (undefined1)uStack_178;
    uStack_d7 = (undefined7)(CONCAT17(uStack_171,uStack_178) >> 8);
    local_e0 = SUB81(ppuStack_180,0);
    uStack_df = (undefined7)((ulong)ppuStack_180 >> 8);
    uStack_c8 = (undefined1)uStack_168;
    uStack_c7 = (undefined7)(CONCAT17(uStack_161,uStack_168) >> 8);
    local_d0 = (undefined1)uStack_170;
    uStack_cf = (undefined7)(CONCAT17(uStack_169,uStack_170) >> 8);
    pcStack_b8 = (char *)local_158;
    uStack_c0 = SUB81(pcStack_160,0);
    uStack_bf = (undefined7)((ulong)pcStack_160 >> 8);
                    /* try { // try from 00563e3c to 00563e5f has its CatchHandler @ 00564014 */
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              ("called `Result::unwrap()` on an `Err` value",0x2b,&local_f0,&PTR_FUN_00acfe20,
               &PTR_s_mobile_flux_src_persistence_work_00acfe88);
  }
  if (2 < *puVar41) {
    auVar55 = <tokio::time::instant::tokio::time::instant::Instant>::elapsed(local_120);
    local_1e0 = auVar55._0_8_;
    local_f0 = &local_1e8;
    puStack_1d8 = (undefined *)CONCAT44(puStack_1d8._4_4_,auVar55._8_4_);
    ppuStack_e8 = (undefined8 **)PTR_fmt_00b00c10;
    local_e0 = SUB81(&local_220,0);
    uStack_df = (undefined7)((ulong)&local_220 >> 8);
    uStack_d8 = SUB81(PTR_fmt_00b00d30,0);
    uStack_d7 = (undefined7)((ulong)PTR_fmt_00b00d30 >> 8);
    local_d0 = SUB81(&local_1e0,0);
    uStack_cf = (undefined7)((ulong)&local_1e0 >> 8);
    local_190 = (undefined8 **)0x2c27e6;
    puStack_188 = (undefined8 *)0x11;
    ppuStack_180 = (undefined8 **)0x2c27f7;
    uStack_178 = 0x19;
    uStack_171 = 0;
    uStack_170 = 0xacfea0;
    uStack_169 = 0;
    uStack_c8 = uStack_d8;
    uStack_c7 = uStack_d7;
    FUN_00564948(&DAT_002b2eae,&local_f0,3,&local_190);
  }
  return;
}


// ===== 00564124  <flux::persistence::worker::[0]::flux::persistence::worker::PersistenceWorker>::spawn =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <flux::persistence::worker::[0]::flux::persistence::worker::PersistenceWorker>::spawn */

void __rustcall
<flux::persistence::worker::[0]::flux::persistence::worker::PersistenceWorker>::spawn
          (long *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined8 extraout_x1;
  long lVar4;
  undefined1 auStack_540 [440];
  undefined *local_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined *local_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined *local_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined *local_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined1 auStack_308 [568];
  undefined8 local_d0;
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
  undefined8 uStack_50;
  undefined1 local_47;
  
                    /* try { // try from 00564148 to 0056414f has its CatchHandler @ 0056427c */
  FUN_00557be4(0);
  uStack_80 = param_2[9];
  local_88 = param_2[8];
  uStack_70 = param_2[0xb];
  local_78 = param_2[10];
  uStack_60 = param_2[0xd];
  local_68 = param_2[0xc];
  uStack_50 = param_2[0xf];
  local_58 = param_2[0xe];
  uStack_c0 = param_2[1];
  local_c8 = *param_2;
  uStack_b0 = param_2[3];
  local_b8 = param_2[2];
  uStack_a0 = param_2[5];
  local_a8 = param_2[4];
  uStack_90 = param_2[7];
  local_98 = param_2[6];
  uStack_360 = _UNK_00acfe08;
  local_368 = PTR_DAT_00acfe00;
  uStack_350 = _UNK_00acfe18;
  uStack_358 = _DAT_00acfe10;
  uStack_380 = _UNK_00acfe08;
  local_388 = PTR_DAT_00acfe00;
  uStack_370 = _UNK_00acfe18;
  uStack_378 = _DAT_00acfe10;
  uStack_320 = _UNK_00acfe08;
  local_328 = PTR_DAT_00acfe00;
  uStack_310 = _UNK_00acfe18;
  uStack_318 = _DAT_00acfe10;
  uStack_340 = _UNK_00acfe08;
  local_348 = PTR_DAT_00acfe00;
  uStack_330 = _UNK_00acfe18;
  uStack_338 = _DAT_00acfe10;
  memcpy(auStack_308,auStack_540,0x238);
  puVar3 = PTR_NEXT_ID_00b00cd0;
  local_47 = 0;
  do {
    lVar4 = *(long *)puVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar2) {
      *(long *)puVar3 = lVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0' || lVar4 == 0);
  local_d0 = extraout_x1;
  if (*param_1 == 1) {
                    /* try { // try from 00564234 to 0056424f has its CatchHandler @ 0056426c */
    FUN_0056e3c4(param_1 + 1,auStack_308);
  }
  else {
    FUN_0056e4ac(param_1 + 1,auStack_308);
  }
  return;
}


// ===== 00564294  FUN_00564294 =====

void FUN_00564294(undefined8 param_1,undefined8 param_2)

{
  <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__typename(param_2);
  return;
}


// ===== 0056429c  FUN_0056429c =====

void FUN_0056429c(undefined8 param_1,undefined8 param_2)

{
  <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__typename(param_2);
  return;
}


// ===== 005642a4  FUN_005642a4 =====

void FUN_005642a4(undefined8 *param_1)

{
  <core::any::TypeId_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 005642ac  FUN_005642ac =====

void FUN_005642ac(byte *param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,&DAT_002c2c20 + *(int *)(&DAT_002c2c20 + (ulong)*param_1 * 4),
             *(undefined8 *)(&DAT_002c2b60 + (ulong)*param_1 * 8));
  return;
}


// ===== 005642d4  FUN_005642d4 =====

void FUN_005642d4(long *param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (-1 < lVar1) {
    lVar1 = 0x14;
  }
                    /* WARNING: Could not recover jumptable at 0x0056430c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_00564310 + (ulong)*(ushort *)("()" + lVar1 * 2 + 2) * 4))(param_2);
  return;
}


// ===== 0056475c  FUN_0056475c =====

void FUN_0056475c(byte *param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,&DAT_002c2ca8 + *(int *)(&DAT_002c2ca8 + (ulong)*param_1 * 4),
             *(undefined8 *)(&DAT_002c2c80 + (ulong)*param_1 * 8));
  return;
}


// ===== 00564784  FUN_00564784 =====

void FUN_00564784(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined1 auStack_58 [16];
  undefined8 *local_48;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_set(auStack_58,param_2);
  lVar2 = param_1[3];
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)*param_1;
    puVar4 = puVar3 + 1;
    uVar5 = NEON_cmge(*puVar3,0,1);
    uVar5 = uVar5 & 0x8080808080808080;
    do {
      for (; uVar5 == 0; uVar5 = uVar5 & 0x8080808080808080) {
        puVar3 = puVar3 + -0x18;
        uVar5 = NEON_cmge(*puVar4,0,1);
        puVar4 = puVar4 + 1;
      }
      uVar1 = (uVar5 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar5 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 - 1 & uVar5;
      lVar2 = lVar2 + -1;
      local_48 = puVar3 + (long)-(int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) * 3 + -3;
      <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry
                (auStack_58,&local_48,&DAT_00ad0928);
    } while (lVar2 != 0);
  }
  <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::finish(auStack_58);
  return;
}


// ===== 00564854  FUN_00564854 =====

void FUN_00564854(undefined8 param_1,long param_2)

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


// ===== 0056486c  FUN_0056486c =====

void FUN_0056486c(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  
  param_3 = param_3 - param_2;
  if (param_3 != 0) {
    puVar1 = (undefined8 *)(param_1 + param_2 * 0x38 + 0x18);
    do {
      if (puVar1[-1] != 0) {
        free((void *)*puVar1);
      }
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 7;
    } while (param_3 != 0);
  }
  return;
}


// ===== 005648c8  FUN_005648c8 =====

void FUN_005648c8(long param_1,undefined8 param_2)

{
  long local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field2_finish
            (param_2,"Error",5,&DAT_002bcfe4,4,param_1 + 4,&DAT_00ad0108,"extended_code",0xd,
             &local_18,&DAT_00ad00e8);
  return;
}


// ===== 00564934  FUN_00564934 =====

void FUN_00564934(long param_1,undefined8 param_2)

{
  <str_as_core::fmt::Debug>::fmt
            (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_2);
  return;
}


// ===== 00564948  FUN_00564948 =====

void FUN_00564948(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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


// ===== 005649a0  FUN_005649a0 =====

void FUN_005649a0(long *param_1)

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


// ===== 00564a20  FUN_00564a20 =====

void FUN_00564a20(long *param_1)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  
  lVar2 = *param_1;
  if (-0x7ffffffffffffffe < lVar2) {
    pvVar1 = (void *)param_1[1];
    lVar3 = param_1[2];
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)((long)pvVar1 + 8);
      do {
        if (puVar4[-1] != 0) {
          free((void *)*puVar4);
        }
        lVar3 = lVar3 + -1;
        puVar4 = puVar4 + 3;
      } while (lVar3 != 0);
    }
    if (lVar2 != 0) {
      free(pvVar1);
    }
    pvVar1 = (void *)param_1[4];
    lVar2 = param_1[5];
    if (lVar2 != 0) {
      puVar4 = (undefined8 *)((long)pvVar1 + 8);
      do {
        if (puVar4[-1] != 0) {
          free((void *)*puVar4);
        }
        lVar2 = lVar2 + -1;
        puVar4 = puVar4 + 3;
      } while (lVar2 != 0);
    }
    if (param_1[3] != 0) {
      free(pvVar1);
      return;
    }
  }
  return;
}


// ===== 00564b08  core[bcece726f298455b]::slice::sort::stable::driftsort_main::<alloc[c1f8e832b0d782c7]::string::String,<alloc[c1f8e832b0d782c7]::string::String_as_core[bcece726f298455b]::cmp::PartialOrd>::lt,alloc[c1f8e832b0d782c7]::vec::Vec<alloc[c1f8e832b0d782c7]::string::String>> =====

/* core[bcece726f298455b]::slice::sort::stable::driftsort_main::<alloc[c1f8e832b0d782c7]::string::String,
   <alloc[c1f8e832b0d782c7]::string::String as core[bcece726f298455b]::cmp::PartialOrd>::lt,
   alloc[c1f8e832b0d782c7]::vec::Vec<alloc[c1f8e832b0d782c7]::string::String>> */

void core[bcece726f298455b]::slice::sort::stable::driftsort_main::
     <alloc[c1f8e832b0d782c7]::string::String,<alloc[c1f8e832b0d782c7]::string::String_as_core[bcece726f298455b]::cmp::PartialOrd>::lt,alloc[c1f8e832b0d782c7]::vec::Vec<alloc[c1f8e832b0d782c7]::string::String>>
               (undefined8 param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined1 *__ptr;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_1078 [24];
  undefined8 uStack_1060;
  ulong local_78;
  undefined1 *puStack_70;
  undefined8 local_68;
  
  uStack_1060 = 0;
  uVar3 = param_2 - (param_2 >> 1);
  uVar1 = param_2;
  if (0x51614 < param_2) {
    uVar1 = 0x51615;
  }
  if (uVar1 <= uVar3) {
    uVar1 = uVar3;
  }
  uVar2 = uVar1;
  if (uVar1 < 0x31) {
    uVar2 = 0x30;
  }
  if (uVar1 < 0xab) {
    __ptr = auStack_1078;
    uVar2 = 0xaa;
  }
  else {
    lVar4 = uVar2 * 0x18;
    if (0x555555555555555 < uVar3) {
      uVar5 = 0;
LAB_00564b8c:
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(uVar5,lVar4);
    }
    if (lVar4 == 0) {
      uVar2 = 0;
      __ptr = &DAT_00000008;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar5 = 8;
      __ptr = (undefined1 *)FUN_004b25a4(lVar4,8);
      if (__ptr == (undefined1 *)0x0) goto LAB_00564b8c;
    }
    uVar3 = uVar2 * 3;
    local_68 = 0;
    local_78 = uVar2;
    puStack_70 = __ptr;
  }
                    /* try { // try from 00564bf0 to 00564bfb has its CatchHandler @ 00564c38 */
  FUN_00564c54(uVar3,param_1,param_2,__ptr,uVar2,param_2 < 0x41,param_3);
  if (0xaa < uVar1) {
    free(__ptr);
  }
  return;
}


// ===== 00564c54  FUN_00564c54 =====

void FUN_00564c54(long param_1,ulong param_2,undefined8 *param_3,ulong param_4,uint param_5,
                 undefined8 param_6)

{
  long lVar1;
  undefined8 *puVar2;
  size_t sVar3;
  long lVar4;
  void *pvVar5;
  ulong uVar6;
  int iVar7;
  void *__s1;
  ulong uVar8;
  undefined8 uVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *__dest;
  undefined8 *puVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  undefined8 *__src;
  ulong uVar20;
  undefined8 *puVar21;
  long lVar22;
  ulong *puVar23;
  ulong uVar24;
  undefined8 uVar25;
  ulong local_310;
  ulong auStack_2c0 [66];
  byte abStack_ab [75];
  
  if (param_2 < 2) {
    return;
  }
  uVar6 = 0;
  if (param_2 != 0) {
    uVar6 = 0x4000000000000000 / param_2;
  }
  if (uVar6 * param_2 != 0x4000000000000000) {
    uVar6 = uVar6 + 1;
  }
  if (param_2 < 0x1001) {
    local_310 = param_2 - (param_2 >> 1);
    if (0x3f < local_310) {
      local_310 = 0x40;
    }
  }
  else {
    local_310 = core::slice::sort::stable::drift::sqrt_approx(param_2);
  }
  uVar14 = 0;
  uVar11 = 0;
  uVar17 = 1;
  uVar13 = param_2;
  if (param_2 == 0) goto LAB_00564d70;
LAB_00564d18:
  lVar22 = param_1 + uVar14 * 0x18;
  if (uVar13 < local_310) {
LAB_00564d30:
    if ((param_5 & 1) == 0) {
      if (local_310 <= uVar13) {
        uVar13 = local_310;
      }
      uVar13 = uVar13 << 1;
    }
    else {
      if (0x1f < uVar13) {
        uVar13 = 0x20;
      }
      core::slice::sort::stable::quicksort::
      quicksort<alloc::string::String,<_backref_15_as_core::cmp::PartialOrd>::lt>
                (lVar22,uVar13,param_3,param_4,0,0,param_6);
      uVar13 = uVar13 << 1 | 1;
    }
    goto LAB_00564f38;
  }
  if (1 < uVar13) {
    uVar18 = *(ulong *)(lVar22 + 0x10);
    __s1 = *(void **)(lVar22 + 0x20);
    uVar15 = *(ulong *)(lVar22 + 0x28);
    sVar3 = uVar15;
    if (uVar18 <= uVar15) {
      sVar3 = uVar18;
    }
    iVar7 = memcmp(__s1,*(void **)(lVar22 + 8),sVar3);
    lVar4 = uVar15 - uVar18;
    if (iVar7 != 0) {
      lVar4 = (long)iVar7;
    }
    if (lVar4 < 0) {
      if (uVar13 != 2) {
        uVar18 = 2;
        puVar23 = (ulong *)(param_1 + 0x40 + uVar14 * 0x18);
        do {
          pvVar5 = (void *)puVar23[-1];
          uVar8 = *puVar23;
          sVar3 = uVar8;
          if (uVar15 <= uVar8) {
            sVar3 = uVar15;
          }
          iVar7 = memcmp(pvVar5,__s1,sVar3);
          lVar1 = uVar8 - uVar15;
          if (iVar7 != 0) {
            lVar1 = (long)iVar7;
          }
          uVar20 = uVar18;
          if (-1 < lVar1) break;
          uVar18 = uVar18 + 1;
          puVar23 = puVar23 + 3;
          __s1 = pvVar5;
          uVar20 = uVar13;
          uVar15 = uVar8;
        } while (uVar13 != uVar18);
        goto LAB_00564eb8;
      }
      uVar18 = 1;
      uVar20 = 2;
LAB_00564edc:
      puVar16 = (undefined8 *)(param_1 + 0x10 + uVar14 * 0x18);
      puVar12 = (undefined8 *)(param_1 + -8 + uVar14 * 0x18 + uVar20 * 0x18);
      do {
        uVar9 = puVar16[-2];
        uVar18 = uVar18 - 1;
        puVar16[-2] = puVar12[-2];
        puVar12[-2] = uVar9;
        uVar9 = puVar16[-1];
        puVar16[-1] = puVar12[-1];
        puVar12[-1] = uVar9;
        uVar9 = *puVar16;
        *puVar16 = *puVar12;
        *puVar12 = uVar9;
        puVar16 = puVar16 + 3;
        puVar12 = puVar12 + -3;
        uVar13 = uVar20;
      } while (uVar18 != 0);
    }
    else if (uVar13 == 2) {
      uVar13 = 2;
    }
    else {
      uVar18 = 2;
      puVar23 = (ulong *)(param_1 + 0x40 + uVar14 * 0x18);
      do {
        pvVar5 = (void *)puVar23[-1];
        uVar8 = *puVar23;
        sVar3 = uVar8;
        if (uVar15 <= uVar8) {
          sVar3 = uVar15;
        }
        iVar7 = memcmp(pvVar5,__s1,sVar3);
        lVar1 = uVar8 - uVar15;
        if (iVar7 != 0) {
          lVar1 = (long)iVar7;
        }
        uVar20 = uVar18;
        if (lVar1 < 0) break;
        uVar18 = uVar18 + 1;
        puVar23 = puVar23 + 3;
        __s1 = pvVar5;
        uVar20 = uVar13;
        uVar15 = uVar8;
      } while (uVar13 != uVar18);
LAB_00564eb8:
      if (uVar20 < local_310) goto LAB_00564d30;
      uVar13 = uVar20;
      if ((lVar4 < 0) && (uVar18 = uVar20 >> 1, uVar18 != 0)) goto LAB_00564edc;
    }
  }
  uVar13 = uVar13 << 1 | 1;
LAB_00564f38:
  lVar22 = LZCOUNT((uVar14 * 2 + (uVar13 >> 1)) * uVar6 ^ (uVar14 * 2 - (uVar17 >> 1)) * uVar6);
  uVar18 = uVar17;
  do {
    uVar17 = uVar13;
    if (1 < uVar11) {
      do {
        while( true ) {
          uVar13 = uVar11 - 1;
          if ((uint)abStack_ab[uVar11] < (uint)lVar22) goto LAB_005651b8;
          uVar24 = uVar18 >> 1;
          uVar8 = auStack_2c0[uVar13];
          uVar20 = uVar8 >> 1;
          uVar15 = uVar20 + uVar24;
          uVar11 = uVar13;
          if (uVar15 <= param_4 && (((uint)uVar8 | (uint)uVar18) & 1) == 0) break;
          puVar16 = (undefined8 *)(param_1 + (uVar14 - uVar15) * 0x18);
          if ((uVar8 & 1) == 0) {
            core::slice::sort::stable::quicksort::
            quicksort<alloc::string::String,<_backref_15_as_core::cmp::PartialOrd>::lt>
                      (puVar16,uVar20,param_3,param_4,(int)LZCOUNT(uVar20 | 1) << 1 ^ 0x7e,0,param_6
                      );
          }
          if ((uVar18 & 1) == 0) {
            core::slice::sort::stable::quicksort::
            quicksort<alloc::string::String,<_backref_15_as_core::cmp::PartialOrd>::lt>
                      (puVar16 + uVar20 * 3,uVar24,param_3,param_4,
                       (int)LZCOUNT(uVar24 | 1) << 1 ^ 0x7e,0,param_6);
          }
          if ((uVar24 != 0) && (uVar20 != 0)) {
            uVar18 = uVar24;
            if (uVar20 <= uVar24) {
              uVar18 = uVar20;
            }
            if (uVar18 <= param_4) {
              puVar19 = puVar16 + uVar20 * 3;
              puVar12 = puVar19;
              if (uVar20 <= uVar24) {
                puVar12 = puVar16;
              }
              memcpy(param_3,puVar12,uVar18 * 0x18);
              puVar12 = param_3 + uVar18 * 3;
              __src = param_3;
              puVar21 = (undefined8 *)(param_1 + -0x18 + uVar14 * 0x18);
              if (uVar24 < uVar20) {
                do {
                  uVar18 = puVar19[-1];
                  uVar8 = puVar12[-1];
                  sVar3 = uVar8;
                  if (uVar18 <= uVar8) {
                    sVar3 = uVar18;
                  }
                  iVar7 = memcmp((void *)puVar12[-2],(void *)puVar19[-2],sVar3);
                  lVar4 = uVar8 - uVar18;
                  if (iVar7 != 0) {
                    lVar4 = (long)iVar7;
                  }
                  puVar2 = puVar12 + -3;
                  if (lVar4 == -1 || lVar4 + 1 < 0 != SCARRY8(lVar4,1)) {
                    puVar2 = puVar19 + -3;
                  }
                  uVar10 = (uint)((ulong)lVar4 >> 0x3f);
                  puVar12 = puVar12 + -3 + (ulong)uVar10 * 3;
                  uVar25 = *puVar2;
                  __dest = puVar19 + -3 + (ulong)(uVar10 ^ 1) * 3;
                  uVar9 = puVar2[2];
                  puVar21[1] = puVar2[1];
                  *puVar21 = uVar25;
                  puVar21[2] = uVar9;
                  puVar19 = __dest;
                  puVar21 = puVar21 + -3;
                } while (__dest != puVar16 && puVar12 != param_3);
              }
              else {
                do {
                  uVar18 = __src[2];
                  uVar8 = puVar19[2];
                  sVar3 = uVar8;
                  if (uVar18 <= uVar8) {
                    sVar3 = uVar18;
                  }
                  iVar7 = memcmp((void *)puVar19[1],(void *)__src[1],sVar3);
                  lVar4 = uVar8 - uVar18;
                  if (iVar7 != 0) {
                    lVar4 = (long)iVar7;
                  }
                  puVar21 = __src;
                  if (lVar4 == -1 || lVar4 + 1 < 0 != SCARRY8(lVar4,1)) {
                    puVar21 = puVar19;
                  }
                  uVar10 = (uint)((ulong)lVar4 >> 0x3f);
                  puVar19 = puVar19 + (ulong)uVar10 * 3;
                  uVar25 = *puVar21;
                  __src = __src + (ulong)(uVar10 ^ 1) * 3;
                  uVar9 = puVar21[2];
                  puVar16[1] = puVar21[1];
                  *puVar16 = uVar25;
                  puVar16[2] = uVar9;
                  __dest = puVar16 + 3;
                  puVar16 = __dest;
                } while (__src != puVar12 && puVar19 != (undefined8 *)(param_1 + uVar14 * 0x18));
              }
              memcpy(__dest,__src,(long)puVar12 - (long)__src);
            }
          }
          uVar18 = uVar15 * 2 | 1;
          if (uVar13 < 2) goto LAB_005651ac;
        }
        uVar18 = uVar15 * 2;
      } while (1 < uVar13);
LAB_005651ac:
      uVar11 = 1;
    }
LAB_005651b8:
    auStack_2c0[uVar11] = uVar18;
    abStack_ab[uVar11 + 1] = (byte)lVar22;
    if (param_2 <= uVar14) {
      if ((uVar18 & 1) != 0) {
        return;
      }
      core::slice::sort::stable::quicksort::
      quicksort<alloc::string::String,<_backref_15_as_core::cmp::PartialOrd>::lt>
                (param_1,param_2,param_3,param_4,(int)LZCOUNT(param_2 | 1) << 1 ^ 0x7e,0,param_6);
      return;
    }
    uVar14 = uVar14 + (uVar17 >> 1);
    uVar11 = uVar11 + 1;
    uVar13 = param_2 - uVar14;
    if (uVar14 <= param_2 && uVar13 != 0) goto LAB_00564d18;
LAB_00564d70:
    lVar22 = 0;
    uVar13 = 1;
    uVar18 = uVar17;
  } while( true );
}


// ===== 00565238  FUN_00565238 =====

void FUN_00565238(ulong *param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  ulong local_a8;
  long *plStack_a0;
  ulong local_98;
  long local_90;
  long lStack_88;
  long local_80;
  long local_78;
  long lStack_70;
  long local_68;
  
  uVar4 = param_2[4];
  if (uVar4 != 0) {
    lVar10 = *param_2;
    uVar11 = param_2[1];
    if (uVar11 == 0) {
      puVar7 = (undefined8 *)param_2[2];
      do {
        puVar2 = puVar7 + 1;
        lVar10 = lVar10 + -0xc0;
        uVar11 = NEON_cmge(*puVar7,0,1);
        uVar11 = uVar11 & 0x8080808080808080;
        puVar7 = puVar2;
      } while (uVar11 == 0);
      param_2[2] = (long)puVar2;
      *param_2 = lVar10;
    }
    uVar6 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
    uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
    uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
    uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
    uVar11 = uVar11 - 1 & uVar11;
    lVar3 = uVar4 - 1;
    param_2[1] = uVar11;
    param_2[4] = lVar3;
    <alloc::string::String_as_core::clone::Clone>::clone
              (&local_90,
               lVar10 + (long)-(int)((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3) * 0x18 +
               -0x18);
    if (local_90 != -1) {
      uVar6 = uVar4;
      if (uVar4 < 5) {
        uVar6 = 4;
      }
      lVar8 = uVar6 * 0x18;
      if (uVar4 < 0x555555555555556) {
        if (lVar8 == 0) {
          uVar6 = 0;
          plStack_a0 = (long *)&DAT_00000008;
        }
        else {
          __rustc::__rust_no_alloc_shim_is_unstable_v2();
          uVar9 = 8;
          plStack_a0 = (long *)FUN_004b25a4(lVar8,8);
          if (plStack_a0 == (long *)0x0) goto LAB_0056530c;
        }
        plStack_a0[2] = local_80;
        plStack_a0[1] = lStack_88;
        *plStack_a0 = local_90;
        local_98 = 1;
        local_a8 = uVar6;
        if (lVar3 != 0) {
          puVar7 = (undefined8 *)param_2[2];
          plVar5 = plStack_a0;
          do {
            for (; uVar4 = local_98, uVar11 == 0; uVar11 = uVar11 & 0x8080808080808080) {
              lVar10 = lVar10 + -0xc0;
              uVar11 = NEON_cmge(*puVar7,0,1);
              puVar7 = puVar7 + 1;
            }
            uVar6 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
            uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
            uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
            uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
                    /* try { // try from 005653e4 to 005653eb has its CatchHandler @ 00565474 */
            <alloc::string::String_as_core::clone::Clone>::clone
                      (&local_78,
                       lVar10 + (long)-(int)((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3) *
                                0x18 + -0x18);
            if (local_78 == -1) break;
            if (uVar4 == local_a8) {
                    /* try { // try from 00565404 to 0056541f has its CatchHandler @ 00565458 */
              FUN_00558b5c(&local_a8,uVar4,lVar3,8,0x18);
              plVar5 = plStack_a0;
            }
            plVar1 = plVar5 + uVar4 * 3;
            lVar3 = lVar3 + -1;
            local_98 = uVar4 + 1;
            uVar11 = uVar11 - 1 & uVar11;
            plVar1[2] = local_68;
            plVar1[1] = lStack_70;
            *plVar1 = local_78;
          } while (lVar3 != 0);
        }
        param_1[1] = (ulong)plStack_a0;
        *param_1 = local_a8;
        param_1[2] = local_98;
        return;
      }
      uVar9 = 0;
LAB_0056530c:
                    /* try { // try from 0056530c to 00565317 has its CatchHandler @ 00565484 */
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(uVar9,lVar8);
    }
  }
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 8;
  return;
}


// ===== 005654a4  FUN_005654a4 =====

void FUN_005654a4(long *param_1,long param_2,long param_3)

{
  long lVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long local_48;
  long *plStack_40;
  long local_38;
  
  if (param_2 != param_3) {
    param_2 = param_2 + 0x18;
    do {
      if ((*(byte *)(param_2 + -6) & 1) != 0) {
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        plVar3 = (long *)FUN_004b25a4(0x20,8);
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          alloc::raw_vec::handle_error(8,0x20);
        }
        *plVar3 = param_2 + -0x18;
        local_48 = 4;
        local_38 = 1;
        plStack_40 = plVar3;
        lVar1 = local_38;
        while (param_2 != param_3) {
          while (lVar4 = param_2 + 0x18, (*(byte *)(param_2 + 0x12) & 1) == 0) {
            param_2 = lVar4;
            if (lVar4 == param_3) goto LAB_00565594;
          }
          if (lVar1 == local_48) {
                    /* try { // try from 00565560 to 00565577 has its CatchHandler @ 005655c4 */
            local_38 = lVar1;
            FUN_00558b5c(&local_48,lVar1,1,8,8);
            plVar3 = plStack_40;
          }
          plVar3[lVar1] = param_2;
          lVar1 = lVar1 + 1;
          param_2 = lVar4;
        }
LAB_00565594:
        param_1[1] = (long)plStack_40;
        *param_1 = local_48;
        param_1[2] = lVar1;
        return;
      }
      bVar2 = param_2 != param_3;
      param_2 = param_2 + 0x18;
    } while (bVar2);
  }
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 8;
  return;
}


// ===== 005655e8  FUN_005655e8 =====

void FUN_005655e8(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_40 [16];
  long local_18;
  
  lVar1 = *(long *)(*param_1 + 8);
  lVar2 = *(long *)(*param_1 + 0x10);
  <core::fmt::[a]::core::fmt::Formatter>::debug_list(auStack_40,param_2);
  if (lVar2 != 0) {
    lVar2 = lVar2 * 0x18;
    do {
      local_18 = lVar1;
      <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry
                (auStack_40,&local_18,&DAT_00ad0968);
      lVar2 = lVar2 + -0x18;
      lVar1 = lVar1 + 0x18;
    } while (lVar2 != 0);
  }
  <core::fmt::builders::[6]::core::fmt::builders::DebugList>::finish(auStack_40);
  return;
}


// ===== 00565660  FUN_00565660 =====

void FUN_00565660(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_40 [16];
  long local_18;
  
  lVar1 = *(long *)(*param_1 + 8);
  lVar2 = *(long *)(*param_1 + 0x10);
  <core::fmt::[a]::core::fmt::Formatter>::debug_list(auStack_40,param_2);
  if (lVar2 != 0) {
    lVar2 = lVar2 << 5;
    do {
      local_18 = lVar1;
      <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry
                (auStack_40,&local_18,&DAT_00ad0948);
      lVar2 = lVar2 + -0x20;
      lVar1 = lVar1 + 0x20;
    } while (lVar2 != 0);
  }
  <core::fmt::builders::[6]::core::fmt::builders::DebugList>::finish(auStack_40);
  return;
}


// ===== 005656d4  FUN_005656d4 =====

void FUN_005656d4(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_40 [16];
  long local_18;
  
  lVar1 = *(long *)(*param_1 + 8);
  lVar2 = *(long *)(*param_1 + 0x10);
  <core::fmt::[a]::core::fmt::Formatter>::debug_list(auStack_40,param_2);
  if (lVar2 != 0) {
    lVar2 = lVar2 << 6;
    do {
      local_18 = lVar1;
      <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry
                (auStack_40,&local_18,&DAT_00ad0988);
      lVar2 = lVar2 + -0x40;
      lVar1 = lVar1 + 0x40;
    } while (lVar2 != 0);
  }
  <core::fmt::builders::[6]::core::fmt::builders::DebugList>::finish(auStack_40);
  return;
}


// ===== 00565748  FUN_00565748 =====

void FUN_00565748(long *param_1,undefined8 param_2)

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
              (auStack_40,&local_18,&DAT_00ad09a8);
    lVar3 = local_18;
  }
  local_18 = lVar3;
  <core::fmt::builders::[6]::core::fmt::builders::DebugList>::finish(auStack_40);
  return;
}


// ===== 005657b8  FUN_005657b8 =====

void FUN_005657b8(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x005657c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(((undefined8 *)*param_1)[1] + 0x18))(*(undefined8 *)*param_1);
  return;
}


// ===== 005657c8  FUN_005657c8 =====

void FUN_005657c8(ulong *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong local_e0;
  undefined8 *puStack_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined *local_b0;
  undefined8 uStack_a8;
  char *local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined *puStack_88;
  undefined **local_80;
  code *pcStack_78;
  char **local_70;
  code *pcStack_68;
  
  local_e0 = param_3 - param_2;
  if (local_e0 < 0x7ffffffffffffff9) {
    if (param_3 == param_2) {
      local_e0 = 0;
      puStack_d8 = (undefined8 *)&DAT_00000008;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar4 = 8;
      puStack_d8 = (undefined8 *)FUN_004b25a4(local_e0,8);
      puVar1 = PTR_fmt_00b00d58;
      if (puStack_d8 == (undefined8 *)0x0) goto LAB_005657fc;
      uVar5 = 0;
      local_e0 = local_e0 / 0x18;
      puVar3 = puStack_d8;
      do {
        local_b0 = (&PTR_s_INTEGER_NOT_NULL_00ad0128)[*(byte *)(param_2 + 0x10)];
        uStack_a8 = *(undefined8 *)(&DAT_002bfe08 + (ulong)*(byte *)(param_2 + 0x10) * 8);
        bVar2 = *(char *)(param_2 + 0x11) != '\0';
        local_a0 = " NOT NULL";
        puStack_88 = puVar1;
        if (bVar2) {
          local_a0 = (char *)0x1;
        }
        uStack_98 = 0;
        if (!bVar2) {
          uStack_98 = 9;
        }
        pcStack_78 = FUN_00570bb4;
        pcStack_68 = FUN_00570bb4;
                    /* try { // try from 005658b8 to 005658c7 has its CatchHandler @ 00565930 */
        local_90 = param_2;
        local_80 = &local_b0;
        local_70 = &local_a0;
        alloc::fmt::format::format_inner(&local_c8,&DAT_002a72ec,&local_90);
        uVar5 = uVar5 + 1;
        param_2 = param_2 + 0x18;
        puVar3[1] = uStack_c0;
        *puVar3 = local_c8;
        puVar3[2] = local_b8;
        puVar3 = puVar3 + 3;
      } while (local_e0 != uVar5);
    }
    param_1[1] = (ulong)puStack_d8;
    *param_1 = local_e0;
    param_1[2] = local_e0;
    return;
  }
  uVar4 = 0;
LAB_005657fc:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar4,local_e0);
}


// ===== 00565948  FUN_00565948 =====

void FUN_00565948(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  uVar1 = param_1[3] - param_1[1];
  if (uVar1 != 0) {
    puVar2 = (undefined8 *)(param_1[1] + 8);
    uVar1 = uVar1 / 0x18;
    do {
      if (puVar2[-1] != 0) {
        free((void *)*puVar2);
      }
      uVar1 = uVar1 - 1;
      puVar2 = puVar2 + 3;
    } while (uVar1 != 0);
  }
  if (param_1[2] != 0) {
    free((void *)*param_1);
    return;
  }
  return;
}


// ===== 005659e0  FUN_005659e0 =====

void FUN_005659e0(undefined8 *param_1)

{
  ulong uVar1;
  void *__ptr;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  
  lVar2 = param_1[1];
  uVar1 = param_1[3] - lVar2;
  if (uVar1 != 0) {
    lVar3 = 0;
    do {
      plVar4 = (long *)(lVar2 + lVar3 * 0x48);
      if (plVar4[4] != 0) {
        free((void *)plVar4[5]);
      }
      if (*plVar4 == 0) {
        if (plVar4[1] != 0) {
          __ptr = (void *)plVar4[2];
          goto LAB_00565a4c;
        }
      }
      else {
        __ptr = (void *)plVar4[2];
        lVar5 = plVar4[3];
        if (lVar5 != 0) {
          puVar6 = (undefined8 *)((long)__ptr + 8);
          do {
            if (puVar6[-1] != 0) {
              free((void *)*puVar6);
            }
            lVar5 = lVar5 + -1;
            puVar6 = puVar6 + 3;
          } while (lVar5 != 0);
        }
        if (plVar4[1] != 0) {
LAB_00565a4c:
          free(__ptr);
        }
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 != (uVar1 >> 3) * -0x71c71c71c71c71c7);
  }
  if (param_1[2] == 0) {
    return;
  }
  free((void *)*param_1);
  return;
}


// ===== 00565b14  FUN_00565b14 =====

void FUN_00565b14(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
    do {
      if (puVar2[-1] != 0) {
        free((void *)*puVar2);
      }
      lVar1 = lVar1 + -1;
      puVar2 = puVar2 + 4;
    } while (lVar1 != 0);
  }
  return;
}


// ===== 00565b64  FUN_00565b64 =====

void FUN_00565b64(long param_1)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    lVar3 = *(long *)(param_1 + 8);
    lVar2 = 0;
    do {
      plVar4 = (long *)(lVar3 + lVar2 * 0x48);
      if (plVar4[4] != 0) {
        free((void *)plVar4[5]);
      }
      if (*plVar4 == 0) {
        if (plVar4[1] != 0) {
          __ptr = (void *)plVar4[2];
          goto LAB_00565bac;
        }
      }
      else {
        __ptr = (void *)plVar4[2];
        lVar5 = plVar4[3];
        if (lVar5 != 0) {
          puVar6 = (undefined8 *)((long)__ptr + 8);
          do {
            if (puVar6[-1] != 0) {
              free((void *)*puVar6);
            }
            lVar5 = lVar5 + -1;
            puVar6 = puVar6 + 3;
          } while (lVar5 != 0);
        }
        if (plVar4[1] != 0) {
LAB_00565bac:
          free(__ptr);
        }
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 != lVar1);
  }
  return;
}


// ===== 00565c3c  FUN_00565c3c =====

void FUN_00565c3c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_40 [16];
  long local_18;
  
  lVar1 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  <core::fmt::[a]::core::fmt::Formatter>::debug_list(auStack_40,param_2);
  if (lVar2 != 0) {
    lVar2 = lVar2 * 0x18;
    do {
      local_18 = lVar1;
      <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry
                (auStack_40,&local_18,&DAT_00ad0968);
      lVar2 = lVar2 + -0x18;
      lVar1 = lVar1 + 0x18;
    } while (lVar2 != 0);
  }
  <core::fmt::builders::[6]::core::fmt::builders::DebugList>::finish(auStack_40);
  return;
}


// ===== 00565cb0  FUN_00565cb0 =====

undefined8 FUN_00565cb0(long *param_1,undefined8 *param_2)

{
  long lVar1;
  ulong *__s1;
  long lVar2;
  size_t __n;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  long lVar10;
  byte bVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  if (param_1[3] == 0) {
    return 0;
  }
  __s1 = (ulong *)*param_2;
  uVar7 = 0;
  __n = param_2[1];
  puVar5 = __s1;
  for (uVar8 = __n; 7 < uVar8; uVar8 = uVar8 - 8) {
    uVar7 = (*puVar5 ^ (uVar7 >> 0x3b | uVar7 << 5)) * 0x517cc1b727220a95;
    puVar5 = puVar5 + 1;
  }
  puVar9 = puVar5;
  if (3 < uVar8) {
    puVar9 = (ulong *)((long)puVar5 + 4);
    uVar8 = uVar8 - 4;
    uVar7 = ((ulong)(uint)*puVar5 ^ (uVar7 >> 0x3b | uVar7 << 5)) * 0x517cc1b727220a95;
  }
  for (; uVar8 != 0; uVar8 = uVar8 - 1) {
    uVar7 = ((ulong)(byte)*puVar9 ^ (uVar7 >> 0x3b | uVar7 << 5)) * 0x517cc1b727220a95;
    puVar9 = (ulong *)((long)puVar9 + 1);
  }
  lVar10 = 0;
  lVar2 = *param_1;
  uVar3 = param_1[1];
  uVar7 = ((uVar7 >> 0x3b | uVar7 << 5) ^ 0xff) * 0x517cc1b727220a95;
  bVar11 = (byte)(uVar7 >> 0x39);
  uVar12 = CONCAT17(bVar11,CONCAT16(bVar11,CONCAT15(bVar11,CONCAT14(bVar11,CONCAT13(bVar11,CONCAT12(
                                                  bVar11,CONCAT11(bVar11,bVar11)))))));
  uVar7 = uVar7 & uVar3;
  uVar13 = *(undefined8 *)(lVar2 + uVar7);
  uVar8 = NEON_cmeq(uVar13,uVar12,1);
  uVar8 = uVar8 & 0x8080808080808080;
  while( true ) {
    for (; uVar8 == 0; uVar8 = uVar8 & 0x8080808080808080) {
      uVar13 = NEON_cmeq(uVar13,0xffffffffffffffff,1);
      bVar11 = NEON_umaxv(uVar13,1);
      if ((bVar11 & 1) != 0) {
        return 0;
      }
      lVar10 = lVar10 + 8;
      uVar7 = uVar7 + lVar10 & uVar3;
      uVar13 = *(undefined8 *)(lVar2 + uVar7);
      uVar8 = NEON_cmeq(uVar13,uVar12,1);
    }
    uVar4 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
    uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
    lVar1 = lVar2 + (uVar7 + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) & uVar3) * -0x38;
    if ((__n == *(size_t *)(lVar1 + -0x30)) &&
       (iVar6 = memcmp(__s1,*(void **)(lVar1 + -0x38),__n), iVar6 == 0)) break;
    uVar8 = uVar8 - 1 & uVar8;
  }
  return 1;
}


// ===== 00565e40  FUN_00565e40 =====

void FUN_00565e40(void *param_1,undefined8 *param_2)

{
  if ((code *)*param_2 != (code *)0x0) {
                    /* try { // try from 00565e60 to 00565e67 has its CatchHandler @ 00565e98 */
    (*(code *)*param_2)(param_1);
  }
  if (param_2[1] != 0) {
    free(param_1);
    return;
  }
  return;
}


// ===== 00565eb8  FUN_00565eb8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00565eb8(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long local_48;
  void *local_40;
  
  lVar2 = _UNK_0029fa78;
  lVar1 = _DAT_0029fa70;
  uVar5 = param_2[1];
  uVar4 = *param_2;
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* try { // try from 00565f6c to 00565f8b has its CatchHandler @ 00565fac */
    <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(flux[2406cd06d16b4816]::persistence::schema::TableAlias,flux[2406cd06d16b4816]::persistence::schema::TableDefinition)>>
    ::reserve_rehash::
    <hashbrown[32fc5d502e7f9af5]::map::make_hasher<flux[2406cd06d16b4816]::persistence::schema::TableAlias,flux[2406cd06d16b4816]::persistence::schema::TableDefinition,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::_closure_0_>
              (param_1,1,param_1 + 0x20,1);
  }
  if (lVar1 != lVar2) {
    if (lVar2 != 1) {
                    /* try { // try from 00565f90 to 00565f9f has its CatchHandler @ 00565fd0 */
      FUN_00566b6c(&local_48,param_1,uVar4,uVar5,param_2 + 2);
      FUN_0055918c(&local_48);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x565fac);
      (*pcVar3)();
    }
                    /* try { // try from 00565f28 to 00565f37 has its CatchHandler @ 00565fcc */
    FUN_00566b6c(&local_48,param_1,uVar4,uVar5,param_2 + 2);
    if ((local_48 != -1) && (local_48 != 0)) {
      free(local_40);
    }
  }
  return;
}


// ===== 00565ff4  FUN_00565ff4 =====

void FUN_00565ff4(undefined8 *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  ulong *__s1;
  undefined8 *puVar1;
  size_t __n;
  byte bVar2;
  bool bVar3;
  ulong *puVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  byte bVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  ulong local_d8;
  
  __s1 = (ulong *)param_3[1];
  uVar11 = 0;
  __n = param_3[2];
  puVar4 = __s1;
  for (uVar6 = __n; 7 < uVar6; uVar6 = uVar6 - 8) {
    uVar11 = (*puVar4 ^ (uVar11 >> 0x3b | uVar11 << 5)) * 0x517cc1b727220a95;
    puVar4 = puVar4 + 1;
  }
  puVar9 = puVar4;
  if (3 < uVar6) {
    puVar9 = (ulong *)((long)puVar4 + 4);
    uVar6 = uVar6 - 4;
    uVar11 = ((ulong)(uint)*puVar4 ^ (uVar11 >> 0x3b | uVar11 << 5)) * 0x517cc1b727220a95;
  }
  for (; uVar6 != 0; uVar6 = uVar6 - 1) {
    uVar11 = ((ulong)(byte)*puVar9 ^ (uVar11 >> 0x3b | uVar11 << 5)) * 0x517cc1b727220a95;
    puVar9 = (ulong *)((long)puVar9 + 1);
  }
  if (param_2[2] == 0) {
                    /* try { // try from 005662b0 to 005662c7 has its CatchHandler @ 005662ec */
    <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(alloc[c1f8e832b0d782c7]::string::String,flux[2406cd06d16b4816]::persistence::schema::ExistingColumnInfo)>>
    ::reserve_rehash::
    <hashbrown[32fc5d502e7f9af5]::map::make_hasher<alloc[c1f8e832b0d782c7]::string::String,flux[2406cd06d16b4816]::persistence::schema::ExistingColumnInfo,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::_closure_0_>
              (param_2,1,param_2 + 4,1);
  }
  bVar3 = false;
  lVar10 = 0;
  uVar7 = ((uVar11 >> 0x3b | uVar11 << 5) ^ 0xff) * 0x517cc1b727220a95;
  puVar1 = (undefined8 *)*param_2;
  uVar11 = param_2[1];
  bVar2 = (byte)(uVar7 >> 0x38);
  bVar12 = bVar2 >> 1;
  uVar13 = CONCAT17(bVar12,CONCAT16(bVar12,CONCAT15(bVar12,CONCAT14(bVar12,CONCAT13(bVar12,CONCAT12(
                                                  bVar12,CONCAT11(bVar12,bVar12)))))));
  uVar7 = uVar7 & uVar11;
  uVar20 = *(undefined8 *)((long)puVar1 + uVar7);
  uVar6 = NEON_cmeq(uVar20,uVar13,1);
  uVar6 = uVar6 & 0x8080808080808080;
  do {
    for (; uVar6 != 0; uVar6 = uVar6 - 1 & uVar6) {
      uVar8 = (uVar6 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar6 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar7 + ((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3) & uVar11;
      if ((__n == puVar1[uVar8 * -7 + -5]) &&
         (iVar5 = memcmp(__s1,(void *)puVar1[uVar8 * -7 + -6],__n), iVar5 == 0)) {
        uVar20 = puVar1[uVar8 * -7 + -4];
        uVar15 = puVar1[uVar8 * -7 + -1];
        uVar13 = puVar1[uVar8 * -7 + -2];
        lVar10 = *param_3;
        param_1[1] = puVar1[uVar8 * -7 + -3];
        *param_1 = uVar20;
        param_1[3] = uVar15;
        param_1[2] = uVar13;
        uVar20 = *param_4;
        uVar15 = param_4[3];
        uVar13 = param_4[2];
        puVar1[uVar8 * -7 + -3] = param_4[1];
        puVar1[uVar8 * -7 + -4] = uVar20;
        puVar1[uVar8 * -7 + -1] = uVar15;
        puVar1[uVar8 * -7 + -2] = uVar13;
        if (lVar10 == 0) {
          return;
        }
        free(__s1);
        return;
      }
    }
    if (bVar3) {
LAB_00566170:
      uVar20 = NEON_cmeq(uVar20,0xffffffffffffffff,1);
      bVar12 = NEON_umaxv(uVar20,1);
      if ((bVar12 & 1) != 0) {
        uVar6 = (ulong)*(char *)((long)puVar1 + local_d8);
        if (-1 < *(char *)((long)puVar1 + local_d8)) {
          uVar6 = NEON_cmlt(*puVar1,0,1);
          uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
          uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
          uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
          uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
          local_d8 = (ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3;
          uVar6 = (ulong)*(byte *)((long)puVar1 + local_d8);
        }
        lVar10 = param_3[2];
        uVar13 = param_4[1];
        uVar20 = *param_4;
        uVar19 = param_4[3];
        uVar15 = param_4[2];
        lVar16 = param_3[1];
        lVar14 = *param_3;
        bVar2 = bVar2 >> 1;
        *(byte *)((long)puVar1 + local_d8) = bVar2;
        lVar18 = param_2[3];
        lVar17 = param_2[2];
        *(byte *)((long)puVar1 + (local_d8 - 8 & uVar11) + 8) = bVar2;
        puVar1[local_d8 * -7 + -6] = lVar16;
        puVar1[local_d8 * -7 + -7] = lVar14;
        puVar1[local_d8 * -7 + -1] = uVar19;
        puVar1[local_d8 * -7 + -4] = uVar20;
        puVar1[local_d8 * -7 + -5] = lVar10;
        puVar1[local_d8 * -7 + -2] = uVar15;
        puVar1[local_d8 * -7 + -3] = uVar13;
        param_2[3] = lVar18 + 1;
        param_2[2] = lVar17 - (uVar6 & 1);
        *param_1 = 0xffffffffffffffff;
        return;
      }
      bVar3 = true;
    }
    else {
      uVar6 = NEON_cmlt(uVar20,0,1);
      if (uVar6 != 0) {
        uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        local_d8 = uVar7 + ((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3) & uVar11;
        goto LAB_00566170;
      }
      bVar3 = false;
    }
    lVar10 = lVar10 + 8;
    uVar7 = lVar10 + uVar7 & uVar11;
    uVar20 = *(undefined8 *)((long)puVar1 + uVar7);
    uVar6 = NEON_cmeq(uVar20,uVar13,1);
    uVar6 = uVar6 & 0x8080808080808080;
  } while( true );
}


// ===== 00566338  FUN_00566338 =====

undefined4 FUN_00566338(long *param_1,long *param_2)

{
  ulong *__s1;
  undefined8 *puVar1;
  size_t __n;
  byte bVar2;
  bool bVar3;
  ulong *puVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  byte bVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong local_80;
  
  __s1 = (ulong *)param_2[1];
  uVar11 = 0;
  __n = param_2[2];
  puVar4 = __s1;
  for (uVar6 = __n; 7 < uVar6; uVar6 = uVar6 - 8) {
    uVar11 = (*puVar4 ^ (uVar11 >> 0x3b | uVar11 << 5)) * 0x517cc1b727220a95;
    puVar4 = puVar4 + 1;
  }
  puVar9 = puVar4;
  if (3 < uVar6) {
    puVar9 = (ulong *)((long)puVar4 + 4);
    uVar6 = uVar6 - 4;
    uVar11 = ((ulong)(uint)*puVar4 ^ (uVar11 >> 0x3b | uVar11 << 5)) * 0x517cc1b727220a95;
  }
  for (; uVar6 != 0; uVar6 = uVar6 - 1) {
    uVar11 = ((ulong)(byte)*puVar9 ^ (uVar11 >> 0x3b | uVar11 << 5)) * 0x517cc1b727220a95;
    puVar9 = (ulong *)((long)puVar9 + 1);
  }
  if (param_1[2] == 0) {
                    /* try { // try from 00566594 to 005665ab has its CatchHandler @ 005665d0 */
    <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(alloc[c1f8e832b0d782c7]::string::String,())>>::
    reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<alloc[c1f8e832b0d782c7]::string::
    String_();
  }
  bVar3 = false;
  lVar10 = 0;
  uVar7 = ((uVar11 >> 0x3b | uVar11 << 5) ^ 0xff) * 0x517cc1b727220a95;
  puVar1 = (undefined8 *)*param_1;
  uVar11 = param_1[1];
  bVar2 = (byte)(uVar7 >> 0x38);
  bVar12 = bVar2 >> 1;
  uVar16 = CONCAT17(bVar12,CONCAT16(bVar12,CONCAT15(bVar12,CONCAT14(bVar12,CONCAT13(bVar12,CONCAT12(
                                                  bVar12,CONCAT11(bVar12,bVar12)))))));
  uVar7 = uVar7 & uVar11;
  uVar17 = *(undefined8 *)((long)puVar1 + uVar7);
  uVar6 = NEON_cmeq(uVar17,uVar16,1);
  uVar6 = uVar6 & 0x8080808080808080;
  do {
    for (; uVar6 != 0; uVar6 = uVar6 - 1 & uVar6) {
      uVar8 = (uVar6 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar6 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar7 + ((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3) & uVar11;
      if ((__n == puVar1[uVar8 * -3 + -1]) &&
         (iVar5 = memcmp(__s1,(void *)puVar1[uVar8 * -3 + -2],__n), iVar5 == 0)) {
        if (*param_2 != 0) {
          free(__s1);
        }
        return 1;
      }
    }
    if (bVar3) {
LAB_00566494:
      uVar17 = NEON_cmeq(uVar17,0xffffffffffffffff,1);
      bVar12 = NEON_umaxv(uVar17,1);
      if ((bVar12 & 1) != 0) {
        uVar6 = (ulong)*(char *)((long)puVar1 + local_80);
        if (-1 < *(char *)((long)puVar1 + local_80)) {
          uVar6 = NEON_cmlt(*puVar1,0,1);
          uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
          uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
          uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
          uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
          local_80 = (ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3;
          uVar6 = (ulong)*(byte *)((long)puVar1 + local_80);
        }
        lVar14 = param_1[3];
        lVar10 = param_1[2];
        *(byte *)((long)puVar1 + local_80) = bVar2 >> 1;
        *(byte *)((long)puVar1 + (local_80 - 8 & uVar11) + 8) = bVar2 >> 1;
        lVar15 = param_2[1];
        lVar13 = *param_2;
        puVar1[local_80 * -3 + -1] = param_2[2];
        puVar1[local_80 * -3 + -2] = lVar15;
        puVar1[local_80 * -3 + -3] = lVar13;
        param_1[3] = lVar14 + 1;
        param_1[2] = lVar10 - (uVar6 & 1);
        return 0;
      }
      bVar3 = true;
    }
    else {
      uVar6 = NEON_cmlt(uVar17,0,1);
      if (uVar6 != 0) {
        uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        local_80 = uVar7 + ((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3) & uVar11;
        goto LAB_00566494;
      }
      bVar3 = false;
    }
    lVar10 = lVar10 + 8;
    uVar7 = lVar10 + uVar7 & uVar11;
    uVar17 = *(undefined8 *)((long)puVar1 + uVar7);
    uVar6 = NEON_cmeq(uVar17,uVar16,1);
    uVar6 = uVar6 & 0x8080808080808080;
  } while( true );
}


// ===== 005665f4  FUN_005665f4 =====

undefined8 FUN_005665f4(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

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
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  byte bVar12;
  undefined8 uVar13;
  ulong uVar14;
  
  lVar8 = param_2[1];
  if (param_1[2] == 0) {
                    /* try { // try from 00566774 to 0056678b has its CatchHandler @ 005667b0 */
    <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(record_mapper[dbd33a546c644578]::record_value::RecordTypeId,alloc[c1f8e832b0d782c7]::boxed::Box<dyn_flux[2406cd06d16b4816]::persistence::DynStoreReplicationHandler>)>>
    ::reserve_rehash::
    <hashbrown[32fc5d502e7f9af5]::map::make_hasher<record_mapper[dbd33a546c644578]::record_value::RecordTypeId,alloc[c1f8e832b0d782c7]::boxed::Box<dyn_flux[2406cd06d16b4816]::persistence::DynStoreReplicationHandler>,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::_closure_0_>
              (param_1,1,param_1 + 4,1);
    in_x11 = extraout_x11;
  }
  bVar4 = false;
  puVar1 = (undefined8 *)*param_1;
  uVar2 = param_1[1];
  lVar6 = 0;
  bVar3 = (byte)((ulong)(lVar8 * 0x517cc1b727220a95) >> 0x38);
  bVar12 = bVar3 >> 1;
  uVar9 = CONCAT17(bVar12,CONCAT16(bVar12,CONCAT15(bVar12,CONCAT14(bVar12,CONCAT13(bVar12,CONCAT12(
                                                  bVar12,CONCAT11(bVar12,bVar12)))))));
  uVar7 = lVar8 * 0x517cc1b727220a95 & uVar2;
  uVar13 = *(undefined8 *)((long)puVar1 + uVar7);
  uVar14 = NEON_cmeq(uVar13,uVar9,1);
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
LAB_005666bc:
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
        lVar10 = param_1[3];
        lVar8 = param_1[2];
        *(byte *)((long)puVar1 + in_x11) = bVar3 >> 1;
        *(byte *)((long)puVar1 + (in_x11 - 8 & uVar2) + 8) = bVar3 >> 1;
        lVar11 = param_2[1];
        lVar6 = *param_2;
        puVar1[in_x11 * -4 + -2] = param_3;
        puVar1[in_x11 * -4 + -1] = param_4;
        puVar1[in_x11 * -4 + -3] = lVar11;
        puVar1[in_x11 * -4 + -4] = lVar6;
        param_1[3] = lVar10 + 1;
        param_1[2] = lVar8 - (uVar14 & 1);
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
        goto LAB_005666bc;
      }
      bVar4 = false;
      in_x11 = 0;
    }
    lVar6 = lVar6 + 8;
    uVar7 = lVar6 + uVar7 & uVar2;
    uVar13 = *(undefined8 *)((long)puVar1 + uVar7);
    uVar14 = NEON_cmeq(uVar13,uVar9,1);
  } while( true );
}


// ===== 005667cc  FUN_005667cc =====

void FUN_005667cc(undefined8 *param_1,long *param_2,long *param_3,undefined8 *param_4)

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
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  byte bVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  
  lVar8 = param_3[1];
  if (param_2[2] == 0) {
                    /* try { // try from 00566974 to 0056698b has its CatchHandler @ 005669b0 */
    <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(record_mapper[dbd33a546c644578]::record_value::RecordTypeId,flux[2406cd06d16b4816]::persistence::schema::SchemaContext)>>
    ::reserve_rehash::
    <hashbrown[32fc5d502e7f9af5]::map::make_hasher<record_mapper[dbd33a546c644578]::record_value::RecordTypeId,flux[2406cd06d16b4816]::persistence::schema::SchemaContext,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::_closure_0_>
              (param_2,1,param_2 + 4,1);
    in_x11 = extraout_x11;
  }
  bVar4 = false;
  puVar1 = (undefined8 *)*param_2;
  uVar2 = param_2[1];
  lVar6 = 0;
  bVar3 = (byte)((ulong)(lVar8 * 0x517cc1b727220a95) >> 0x38);
  bVar11 = bVar3 >> 1;
  uVar9 = CONCAT17(bVar11,CONCAT16(bVar11,CONCAT15(bVar11,CONCAT14(bVar11,CONCAT13(bVar11,CONCAT12(
                                                  bVar11,CONCAT11(bVar11,bVar11)))))));
  uVar7 = lVar8 * 0x517cc1b727220a95 & uVar2;
  uVar12 = *(undefined8 *)((long)puVar1 + uVar7);
  uVar15 = NEON_cmeq(uVar12,uVar9,1);
  do {
    for (uVar15 = uVar15 & 0x8080808080808080; uVar15 != 0; uVar15 = uVar15 - 1 & uVar15) {
      uVar5 = (uVar15 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar15 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar7 + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3) & uVar2;
      if (param_3[1] == puVar1[uVar5 * -6 + -5] && *param_3 == puVar1[uVar5 * -6 + -6]) {
        uVar12 = puVar1[uVar5 * -6 + -4];
        uVar10 = puVar1[uVar5 * -6 + -1];
        uVar9 = puVar1[uVar5 * -6 + -2];
        param_1[1] = puVar1[uVar5 * -6 + -3];
        *param_1 = uVar12;
        param_1[3] = uVar10;
        param_1[2] = uVar9;
        uVar12 = *param_4;
        uVar10 = param_4[3];
        uVar9 = param_4[2];
        puVar1[uVar5 * -6 + -3] = param_4[1];
        puVar1[uVar5 * -6 + -4] = uVar12;
        puVar1[uVar5 * -6 + -1] = uVar10;
        puVar1[uVar5 * -6 + -2] = uVar9;
        return;
      }
    }
    if (bVar4) {
LAB_005668a0:
      uVar12 = NEON_cmeq(uVar12,0xffffffffffffffff,1);
      bVar11 = NEON_umaxv(uVar12,1);
      if ((bVar11 & 1) != 0) {
        uVar15 = (ulong)*(char *)((long)puVar1 + in_x11);
        if (-1 < *(char *)((long)puVar1 + in_x11)) {
          uVar15 = NEON_cmlt(*puVar1,0,1);
          uVar15 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
          uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
          uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
          uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
          in_x11 = (ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >> 3;
          uVar15 = (ulong)*(byte *)((long)puVar1 + in_x11);
        }
        lVar14 = param_2[3];
        lVar13 = param_2[2];
        lVar6 = param_3[1];
        lVar8 = *param_3;
        uVar9 = param_4[1];
        uVar12 = *param_4;
        uVar16 = param_4[3];
        uVar10 = param_4[2];
        *(byte *)((long)puVar1 + in_x11) = bVar3 >> 1;
        *(byte *)((long)puVar1 + (in_x11 - 8 & uVar2) + 8) = bVar3 >> 1;
        puVar1[in_x11 * -6 + -5] = lVar6;
        puVar1[in_x11 * -6 + -6] = lVar8;
        puVar1[in_x11 * -6 + -3] = uVar9;
        puVar1[in_x11 * -6 + -4] = uVar12;
        puVar1[in_x11 * -6 + -1] = uVar16;
        puVar1[in_x11 * -6 + -2] = uVar10;
        param_2[3] = lVar14 + 1;
        param_2[2] = lVar13 - (uVar15 & 1);
        *param_1 = 0;
        return;
      }
      bVar4 = true;
    }
    else {
      uVar15 = NEON_cmlt(uVar12,0,1);
      if (uVar15 != 0) {
        uVar15 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
        uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
        uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
        uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
        in_x11 = uVar7 + ((ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >> 3) & uVar2;
        goto LAB_005668a0;
      }
      bVar4 = false;
      in_x11 = 0;
    }
    lVar6 = lVar6 + 8;
    uVar7 = lVar6 + uVar7 & uVar2;
    uVar12 = *(undefined8 *)((long)puVar1 + uVar7);
    uVar15 = NEON_cmeq(uVar12,uVar9,1);
  } while( true );
}


// ===== 005669c8  FUN_005669c8 =====

undefined8 FUN_005669c8(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  byte bVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  ulong in_x11;
  ulong extraout_x11;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  byte bVar11;
  undefined8 uVar12;
  ulong uVar13;
  
  lVar6 = param_2[1];
  if (param_1[2] == 0) {
    <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(record_mapper[dbd33a546c644578]::record_value::
    RecordTypeId,())>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::
    make_hasher<record_mapper[dbd33a546c644578]::record_value::RecordTypeId_();
    in_x11 = extraout_x11;
  }
  bVar4 = false;
  puVar1 = (undefined8 *)*param_1;
  uVar2 = param_1[1];
  lVar7 = 0;
  bVar3 = (byte)((ulong)(lVar6 * 0x517cc1b727220a95) >> 0x38);
  bVar11 = bVar3 >> 1;
  uVar9 = CONCAT17(bVar11,CONCAT16(bVar11,CONCAT15(bVar11,CONCAT14(bVar11,CONCAT13(bVar11,CONCAT12(
                                                  bVar11,CONCAT11(bVar11,bVar11)))))));
  uVar8 = lVar6 * 0x517cc1b727220a95 & uVar2;
  uVar12 = *(undefined8 *)((long)puVar1 + uVar8);
  uVar13 = NEON_cmeq(uVar12,uVar9,1);
  do {
    for (uVar13 = uVar13 & 0x8080808080808080; uVar13 != 0; uVar13 = uVar13 - 1 & uVar13) {
      uVar5 = (uVar13 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar13 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar8 + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3) & uVar2;
      if (param_2[1] == puVar1[uVar5 * -2 + -1] && *param_2 == puVar1[uVar5 * -2 + -2]) {
        return 1;
      }
    }
    if (bVar4) {
LAB_00566a80:
      uVar12 = NEON_cmeq(uVar12,0xffffffffffffffff,1);
      bVar11 = NEON_umaxv(uVar12,1);
      if ((bVar11 & 1) != 0) {
        uVar13 = (ulong)*(char *)((long)puVar1 + in_x11);
        if (-1 < *(char *)((long)puVar1 + in_x11)) {
          uVar13 = NEON_cmlt(*puVar1,0,1);
          uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
          uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
          uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
          uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
          in_x11 = (ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3;
          uVar13 = (ulong)*(byte *)((long)puVar1 + in_x11);
        }
        lVar10 = param_1[3];
        lVar6 = param_1[2];
        *(byte *)((long)puVar1 + in_x11) = bVar3 >> 1;
        *(byte *)((long)puVar1 + (in_x11 - 8 & uVar2) + 8) = bVar3 >> 1;
        lVar7 = *param_2;
        puVar1[in_x11 * -2 + -1] = param_2[1];
        puVar1[in_x11 * -2 + -2] = lVar7;
        param_1[3] = lVar10 + 1;
        param_1[2] = lVar6 - (uVar13 & 1);
        return 0;
      }
      bVar4 = true;
    }
    else {
      uVar13 = NEON_cmlt(uVar12,0,1);
      if (uVar13 != 0) {
        uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
        uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        in_x11 = uVar8 + ((ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3) & uVar2;
        goto LAB_00566a80;
      }
      bVar4 = false;
      in_x11 = 0;
    }
    lVar7 = lVar7 + 8;
    uVar8 = lVar7 + uVar8 & uVar2;
    uVar12 = *(undefined8 *)((long)puVar1 + uVar8);
    uVar13 = NEON_cmeq(uVar12,uVar9,1);
  } while( true );
}


// ===== 00566b6c  FUN_00566b6c =====

void FUN_00566b6c(undefined8 *param_1,long *param_2,ulong *param_3,ulong param_4,undefined8 *param_5
                 )

{
  undefined8 *puVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  byte bVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  ulong local_90;
  
  uVar11 = 0;
  uVar5 = param_4;
  puVar8 = param_3;
  if (param_4 < 8) {
    puVar9 = param_3;
    if (param_4 < 4) goto joined_r0x00566bf4;
  }
  else {
    do {
      puVar9 = puVar8 + 1;
      uVar5 = uVar5 - 8;
      uVar11 = (*puVar8 ^ (uVar11 >> 0x3b | uVar11 << 5)) * 0x517cc1b727220a95;
      puVar8 = puVar9;
    } while (7 < uVar5);
    if (uVar5 < 4) goto joined_r0x00566bf4;
  }
  uVar11 = ((ulong)(uint)*puVar9 ^ (uVar11 >> 0x3b | uVar11 << 5)) * 0x517cc1b727220a95;
  uVar5 = uVar5 - 4;
  puVar9 = (ulong *)((long)puVar9 + 4);
joined_r0x00566bf4:
  for (; uVar5 != 0; uVar5 = uVar5 - 1) {
    uVar11 = ((ulong)(byte)*puVar9 ^ (uVar11 >> 0x3b | uVar11 << 5)) * 0x517cc1b727220a95;
    puVar9 = (ulong *)((long)puVar9 + 1);
  }
  if (param_2[2] == 0) {
                    /* try { // try from 00566de8 to 00566dff has its CatchHandler @ 00566e24 */
    <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(flux[2406cd06d16b4816]::persistence::schema::TableAlias,flux[2406cd06d16b4816]::persistence::schema::TableDefinition)>>
    ::reserve_rehash::
    <hashbrown[32fc5d502e7f9af5]::map::make_hasher<flux[2406cd06d16b4816]::persistence::schema::TableAlias,flux[2406cd06d16b4816]::persistence::schema::TableDefinition,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::_closure_0_>
              (param_2,1,param_2 + 4,1);
  }
  bVar3 = false;
  lVar10 = 0;
  uVar6 = ((uVar11 >> 0x3b | uVar11 << 5) ^ 0xff) * 0x517cc1b727220a95;
  puVar1 = (undefined8 *)*param_2;
  uVar11 = param_2[1];
  bVar2 = (byte)(uVar6 >> 0x38);
  bVar12 = bVar2 >> 1;
  uVar13 = CONCAT17(bVar12,CONCAT16(bVar12,CONCAT15(bVar12,CONCAT14(bVar12,CONCAT13(bVar12,CONCAT12(
                                                  bVar12,CONCAT11(bVar12,bVar12)))))));
  uVar6 = uVar6 & uVar11;
  uVar18 = *(undefined8 *)((long)puVar1 + uVar6);
  uVar5 = NEON_cmeq(uVar18,uVar13,1);
  uVar5 = uVar5 & 0x8080808080808080;
  do {
    for (; uVar5 != 0; uVar5 = uVar5 - 1 & uVar5) {
      uVar7 = (uVar5 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar5 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar6 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) & uVar11;
      if ((param_4 == puVar1[uVar7 * -7 + -6]) &&
         (iVar4 = memcmp(param_3,(void *)puVar1[uVar7 * -7 + -7],param_4), iVar4 == 0)) {
        uVar13 = puVar1[uVar7 * -7 + -5];
        uVar15 = puVar1[uVar7 * -7 + -2];
        uVar14 = puVar1[uVar7 * -7 + -3];
        uVar18 = puVar1[uVar7 * -7 + -1];
        param_1[1] = puVar1[uVar7 * -7 + -4];
        *param_1 = uVar13;
        param_1[3] = uVar15;
        param_1[2] = uVar14;
        uVar14 = param_5[1];
        uVar13 = *param_5;
        uVar16 = param_5[3];
        uVar15 = param_5[2];
        param_1[4] = uVar18;
        uVar18 = param_5[4];
        puVar1[uVar7 * -7 + -4] = uVar14;
        puVar1[uVar7 * -7 + -5] = uVar13;
        puVar1[uVar7 * -7 + -2] = uVar16;
        puVar1[uVar7 * -7 + -3] = uVar15;
        puVar1[uVar7 * -7 + -1] = uVar18;
        return;
      }
    }
    if (bVar3) {
LAB_00566ce0:
      uVar18 = NEON_cmeq(uVar18,0xffffffffffffffff,1);
      bVar12 = NEON_umaxv(uVar18,1);
      if ((bVar12 & 1) != 0) {
        uVar5 = (ulong)*(char *)((long)puVar1 + local_90);
        if (-1 < *(char *)((long)puVar1 + local_90)) {
          uVar5 = NEON_cmlt(*puVar1,0,1);
          uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
          uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
          uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
          uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
          local_90 = (ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3;
          uVar5 = (ulong)*(byte *)((long)puVar1 + local_90);
        }
        lVar17 = param_2[3];
        lVar10 = param_2[2];
        *(byte *)((long)puVar1 + local_90) = bVar2 >> 1;
        *(byte *)((long)puVar1 + (local_90 - 8 & uVar11) + 8) = bVar2 >> 1;
        uVar18 = param_5[4];
        puVar1[local_90 * -7 + -7] = param_3;
        puVar1[local_90 * -7 + -6] = param_4;
        param_2[3] = lVar17 + 1;
        param_2[2] = lVar10 - (uVar5 & 1);
        uVar14 = param_5[1];
        uVar13 = *param_5;
        uVar16 = param_5[3];
        uVar15 = param_5[2];
        puVar1[local_90 * -7 + -1] = uVar18;
        puVar1[local_90 * -7 + -4] = uVar14;
        puVar1[local_90 * -7 + -5] = uVar13;
        puVar1[local_90 * -7 + -2] = uVar16;
        puVar1[local_90 * -7 + -3] = uVar15;
        *param_1 = 0xffffffffffffffff;
        return;
      }
      bVar3 = true;
    }
    else {
      uVar5 = NEON_cmlt(uVar18,0,1);
      if (uVar5 != 0) {
        uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
        uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
        uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
        local_90 = uVar6 + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3) & uVar11;
        goto LAB_00566ce0;
      }
      bVar3 = false;
    }
    lVar10 = lVar10 + 8;
    uVar6 = lVar10 + uVar6 & uVar11;
    uVar18 = *(undefined8 *)((long)puVar1 + uVar6);
    uVar5 = NEON_cmeq(uVar18,uVar13,1);
    uVar5 = uVar5 & 0x8080808080808080;
  } while( true );
}


// ===== 00566e4c  FUN_00566e4c =====

void FUN_00566e4c(undefined8 *param_1,long *param_2,ulong *param_3,ulong param_4,undefined8 *param_5
                 )

{
  undefined8 *puVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  byte bVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  ulong local_90;
  
  uVar12 = 0;
  uVar5 = param_4;
  puVar8 = param_3;
  if (param_4 < 8) {
    puVar9 = param_3;
    if (param_4 < 4) goto joined_r0x00566ed4;
  }
  else {
    do {
      puVar9 = puVar8 + 1;
      uVar5 = uVar5 - 8;
      uVar12 = (*puVar8 ^ (uVar12 >> 0x3b | uVar12 << 5)) * 0x517cc1b727220a95;
      puVar8 = puVar9;
    } while (7 < uVar5);
    if (uVar5 < 4) goto joined_r0x00566ed4;
  }
  uVar12 = ((ulong)(uint)*puVar9 ^ (uVar12 >> 0x3b | uVar12 << 5)) * 0x517cc1b727220a95;
  uVar5 = uVar5 - 4;
  puVar9 = (ulong *)((long)puVar9 + 4);
joined_r0x00566ed4:
  for (; uVar5 != 0; uVar5 = uVar5 - 1) {
    uVar12 = ((ulong)(byte)*puVar9 ^ (uVar12 >> 0x3b | uVar12 << 5)) * 0x517cc1b727220a95;
    puVar9 = (ulong *)((long)puVar9 + 1);
  }
  if (param_2[2] == 0) {
                    /* try { // try from 005670b4 to 005670cb has its CatchHandler @ 005670f0 */
    <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(flux[2406cd06d16b4816]::persistence::schema::TableAlias,flux[2406cd06d16b4816]::persistence::schema::TableName)>>
    ::reserve_rehash::
    <hashbrown[32fc5d502e7f9af5]::map::make_hasher<flux[2406cd06d16b4816]::persistence::schema::TableAlias,flux[2406cd06d16b4816]::persistence::schema::TableName,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::_closure_0_>
              (param_2,1,param_2 + 4,1);
  }
  bVar3 = false;
  lVar11 = 0;
  uVar6 = ((uVar12 >> 0x3b | uVar12 << 5) ^ 0xff) * 0x517cc1b727220a95;
  puVar1 = (undefined8 *)*param_2;
  uVar12 = param_2[1];
  bVar2 = (byte)(uVar6 >> 0x38);
  bVar13 = bVar2 >> 1;
  uVar10 = CONCAT17(bVar13,CONCAT16(bVar13,CONCAT15(bVar13,CONCAT14(bVar13,CONCAT13(bVar13,CONCAT12(
                                                  bVar13,CONCAT11(bVar13,bVar13)))))));
  uVar6 = uVar6 & uVar12;
  uVar18 = *(undefined8 *)((long)puVar1 + uVar6);
  uVar5 = NEON_cmeq(uVar18,uVar10,1);
  uVar5 = uVar5 & 0x8080808080808080;
  do {
    for (; uVar5 != 0; uVar5 = uVar5 - 1 & uVar5) {
      uVar7 = (uVar5 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar5 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar6 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) & uVar12;
      if ((param_4 == puVar1[uVar7 * -5 + -4]) &&
         (iVar4 = memcmp(param_3,(void *)puVar1[uVar7 * -5 + -5],param_4), iVar4 == 0)) {
        uVar14 = puVar1[uVar7 * -5 + -3];
        uVar18 = puVar1[uVar7 * -5 + -1];
        uVar16 = param_5[1];
        uVar15 = *param_5;
        uVar10 = param_5[2];
        param_1[1] = puVar1[uVar7 * -5 + -2];
        *param_1 = uVar14;
        param_1[2] = uVar18;
        puVar1[uVar7 * -5 + -2] = uVar16;
        puVar1[uVar7 * -5 + -3] = uVar15;
        puVar1[uVar7 * -5 + -1] = uVar10;
        return;
      }
    }
    if (bVar3) {
LAB_00566fb8:
      uVar18 = NEON_cmeq(uVar18,0xffffffffffffffff,1);
      bVar13 = NEON_umaxv(uVar18,1);
      if ((bVar13 & 1) != 0) {
        uVar5 = (ulong)*(char *)((long)puVar1 + local_90);
        if (-1 < *(char *)((long)puVar1 + local_90)) {
          uVar5 = NEON_cmlt(*puVar1,0,1);
          uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
          uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
          uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
          uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
          local_90 = (ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3;
          uVar5 = (ulong)*(byte *)((long)puVar1 + local_90);
        }
        lVar17 = param_2[3];
        lVar11 = param_2[2];
        *(byte *)((long)puVar1 + local_90) = bVar2 >> 1;
        *(byte *)((long)puVar1 + (local_90 - 8 & uVar12) + 8) = bVar2 >> 1;
        uVar18 = param_5[2];
        uVar14 = param_5[1];
        uVar10 = *param_5;
        puVar1[local_90 * -5 + -5] = param_3;
        puVar1[local_90 * -5 + -4] = param_4;
        param_2[3] = lVar17 + 1;
        param_2[2] = lVar11 - (uVar5 & 1);
        puVar1[local_90 * -5 + -2] = uVar14;
        puVar1[local_90 * -5 + -3] = uVar10;
        puVar1[local_90 * -5 + -1] = uVar18;
        *param_1 = 0xffffffffffffffff;
        return;
      }
      bVar3 = true;
    }
    else {
      uVar5 = NEON_cmlt(uVar18,0,1);
      if (uVar5 != 0) {
        uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
        uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
        uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
        local_90 = uVar6 + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3) & uVar12;
        goto LAB_00566fb8;
      }
      bVar3 = false;
    }
    lVar11 = lVar11 + 8;
    uVar6 = lVar11 + uVar6 & uVar12;
    uVar18 = *(undefined8 *)((long)puVar1 + uVar6);
    uVar5 = NEON_cmeq(uVar18,uVar10,1);
    uVar5 = uVar5 & 0x8080808080808080;
  } while( true );
}


// ===== 00567110  FUN_00567110 =====

undefined4 FUN_00567110(long *param_1,long *param_2)

{
  ulong *__s1;
  undefined8 *puVar1;
  size_t __n;
  byte bVar2;
  bool bVar3;
  ulong *puVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  byte bVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong local_80;
  
  __s1 = (ulong *)param_2[1];
  uVar11 = 0;
  __n = param_2[2];
  puVar4 = __s1;
  for (uVar6 = __n; 7 < uVar6; uVar6 = uVar6 - 8) {
    uVar11 = (*puVar4 ^ (uVar11 >> 0x3b | uVar11 << 5)) * 0x517cc1b727220a95;
    puVar4 = puVar4 + 1;
  }
  puVar9 = puVar4;
  if (3 < uVar6) {
    puVar9 = (ulong *)((long)puVar4 + 4);
    uVar6 = uVar6 - 4;
    uVar11 = ((ulong)(uint)*puVar4 ^ (uVar11 >> 0x3b | uVar11 << 5)) * 0x517cc1b727220a95;
  }
  for (; uVar6 != 0; uVar6 = uVar6 - 1) {
    uVar11 = ((ulong)(byte)*puVar9 ^ (uVar11 >> 0x3b | uVar11 << 5)) * 0x517cc1b727220a95;
    puVar9 = (ulong *)((long)puVar9 + 1);
  }
  if (param_1[2] == 0) {
                    /* try { // try from 0056736c to 00567383 has its CatchHandler @ 005673a8 */
    <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(flux[2406cd06d16b4816]::persistence::schema::
    TableName,())>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::
    make_hasher<flux[2406cd06d16b4816]::persistence::schema::TableName_();
  }
  bVar3 = false;
  lVar10 = 0;
  uVar7 = ((uVar11 >> 0x3b | uVar11 << 5) ^ 0xff) * 0x517cc1b727220a95;
  puVar1 = (undefined8 *)*param_1;
  uVar11 = param_1[1];
  bVar2 = (byte)(uVar7 >> 0x38);
  bVar12 = bVar2 >> 1;
  uVar16 = CONCAT17(bVar12,CONCAT16(bVar12,CONCAT15(bVar12,CONCAT14(bVar12,CONCAT13(bVar12,CONCAT12(
                                                  bVar12,CONCAT11(bVar12,bVar12)))))));
  uVar7 = uVar7 & uVar11;
  uVar17 = *(undefined8 *)((long)puVar1 + uVar7);
  uVar6 = NEON_cmeq(uVar17,uVar16,1);
  uVar6 = uVar6 & 0x8080808080808080;
  do {
    for (; uVar6 != 0; uVar6 = uVar6 - 1 & uVar6) {
      uVar8 = (uVar6 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar6 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar7 + ((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3) & uVar11;
      if ((__n == puVar1[uVar8 * -3 + -1]) &&
         (iVar5 = memcmp(__s1,(void *)puVar1[uVar8 * -3 + -2],__n), iVar5 == 0)) {
        if (*param_2 != 0) {
          free(__s1);
        }
        return 1;
      }
    }
    if (bVar3) {
LAB_0056726c:
      uVar17 = NEON_cmeq(uVar17,0xffffffffffffffff,1);
      bVar12 = NEON_umaxv(uVar17,1);
      if ((bVar12 & 1) != 0) {
        uVar6 = (ulong)*(char *)((long)puVar1 + local_80);
        if (-1 < *(char *)((long)puVar1 + local_80)) {
          uVar6 = NEON_cmlt(*puVar1,0,1);
          uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
          uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
          uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
          uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
          local_80 = (ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3;
          uVar6 = (ulong)*(byte *)((long)puVar1 + local_80);
        }
        lVar14 = param_1[3];
        lVar10 = param_1[2];
        *(byte *)((long)puVar1 + local_80) = bVar2 >> 1;
        *(byte *)((long)puVar1 + (local_80 - 8 & uVar11) + 8) = bVar2 >> 1;
        lVar15 = param_2[1];
        lVar13 = *param_2;
        puVar1[local_80 * -3 + -1] = param_2[2];
        puVar1[local_80 * -3 + -2] = lVar15;
        puVar1[local_80 * -3 + -3] = lVar13;
        param_1[3] = lVar14 + 1;
        param_1[2] = lVar10 - (uVar6 & 1);
        return 0;
      }
      bVar3 = true;
    }
    else {
      uVar6 = NEON_cmlt(uVar17,0,1);
      if (uVar6 != 0) {
        uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        local_80 = uVar7 + ((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3) & uVar11;
        goto LAB_0056726c;
      }
      bVar3 = false;
    }
    lVar10 = lVar10 + 8;
    uVar7 = lVar10 + uVar7 & uVar11;
    uVar17 = *(undefined8 *)((long)puVar1 + uVar7);
    uVar6 = NEON_cmeq(uVar17,uVar16,1);
    uVar6 = uVar6 & 0x8080808080808080;
  } while( true );
}


// ===== 005673cc  FUN_005673cc =====

void FUN_005673cc(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  long local_d0;
  void *pvStack_c8;
  undefined8 *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long local_90;
  void *pvStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar5 = *param_2;
  iVar1 = sqlite3_column_count(*(undefined8 *)(lVar5 + 0x38));
  if (param_3 < (undefined8 *)(long)iVar1) {
    <rusqlite::statement::[1]::rusqlite::statement::Statement>::value_ref(&local_e8,lVar5,param_3);
    if (local_e8 == 3) {
      core::str::converts::from_utf8(&local_90,local_e0,uStack_d8);
      if (local_90 != 1) {
        if ((long)puStack_80 < 0) {
          uVar3 = 0;
LAB_005674cc:
                    /* WARNING: Subroutine does not return */
          alloc::raw_vec::handle_error(uVar3,puStack_80);
        }
        if (puStack_80 == (undefined8 *)0x0) {
          puVar2 = &DAT_00000001;
        }
        else {
          __rustc::__rust_no_alloc_shim_is_unstable_v2();
          uVar3 = 1;
          puVar2 = (undefined1 *)FUN_004b25a4(puStack_80,1);
          if (puVar2 == (undefined1 *)0x0) goto LAB_005674cc;
          memcpy(puVar2,pvStack_88,(size_t)puStack_80);
        }
        uVar3 = 0xffffffffffffffff;
        param_1[2] = puVar2;
        param_1[3] = puStack_80;
        goto LAB_00567484;
      }
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      local_c0 = (undefined8 *)FUN_004b25a4(0x10,8);
      if (local_c0 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        alloc::alloc::handle_alloc_error(8,0x10);
      }
      uVar3 = 0x8000000000000002;
      puVar2 = &DAT_00ad0220;
      local_c0[1] = puStack_80;
      *local_c0 = pvStack_88;
      puVar4 = param_3;
      param_3 = (undefined8 *)0x3;
    }
    else {
      FUN_00567a68(&local_d0,lVar5,param_3);
      if (local_d0 != -1) {
        pvStack_88 = pvStack_c8;
        local_90 = local_d0;
        uStack_78 = uStack_b8;
        puStack_80 = local_c0;
        uStack_68 = uStack_a8;
        local_70 = local_b0;
        uStack_58 = uStack_98;
        uStack_60 = uStack_a0;
                    /* try { // try from 005675a0 to 005675c3 has its CatchHandler @ 005675d4 */
                    /* WARNING: Subroutine does not return */
        core::result::unwrap_failed
                  ("Column out of bounds",0x14,&local_90,&PTR_FUN_00ad0160,
                   &PTR_s__root__cargo_registry_src_index__00ad0148);
      }
      if ((long)local_c0 < 0) {
        uVar3 = 0;
LAB_005674b4:
                    /* WARNING: Subroutine does not return */
        alloc::raw_vec::handle_error(uVar3,local_c0);
      }
      if (local_c0 == (undefined8 *)0x0) {
        puVar2 = &DAT_00000001;
      }
      else {
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        uVar3 = 1;
        puVar2 = (undefined1 *)FUN_004b25a4(local_c0,1);
        if (puVar2 == (undefined1 *)0x0) goto LAB_005674b4;
        memcpy(puVar2,pvStack_c8,(size_t)local_c0);
      }
      uVar3 = 0x800000000000000d;
      puVar4 = local_c0;
    }
    *param_1 = uVar3;
    param_1[1] = local_c0;
    param_1[2] = puVar2;
    param_1[3] = puVar4;
    param_1[4] = param_3;
    *(char *)(param_1 + 5) = (char)local_e8;
  }
  else {
    uVar3 = 0x800000000000000b;
    puStack_80 = param_3;
LAB_00567484:
    *param_1 = uVar3;
    param_1[1] = puStack_80;
  }
  return;
}


// ===== 005675ec  FUN_005675ec =====

void FUN_005675ec(undefined8 *param_1,long *param_2,size_t param_3)

{
  int iVar1;
  undefined1 *__dest;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long local_e8;
  undefined1 *local_e0;
  long local_d0;
  void *pvStack_c8;
  size_t local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long local_90;
  void *pvStack_88;
  size_t sStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar4 = *param_2;
  iVar1 = sqlite3_column_count(*(undefined8 *)(lVar4 + 0x38));
  if (param_3 < (ulong)(long)iVar1) {
    <rusqlite::statement::[1]::rusqlite::statement::Statement>::value_ref(&local_e8,lVar4,param_3);
    if (local_e8 == 1) {
      if (local_e0 == (undefined1 *)(long)(int)local_e0) {
        *(int *)(param_1 + 1) = (int)local_e0;
        *param_1 = 0xffffffffffffffff;
        return;
      }
      uVar2 = 0x8000000000000003;
      uVar3 = 0;
      __dest = local_e0;
    }
    else {
      FUN_00567a68(&local_d0,lVar4,param_3);
      if (local_d0 != -1) {
        pvStack_88 = pvStack_c8;
        local_90 = local_d0;
        uStack_78 = uStack_b8;
        sStack_80 = local_c0;
        uStack_68 = uStack_a8;
        local_70 = local_b0;
        uStack_58 = uStack_98;
        uStack_60 = uStack_a0;
                    /* try { // try from 00567730 to 00567753 has its CatchHandler @ 00567758 */
                    /* WARNING: Subroutine does not return */
        core::result::unwrap_failed
                  ("Column out of bounds",0x14,&local_90,&PTR_FUN_00ad0160,
                   &PTR_s__root__cargo_registry_src_index__00ad0148);
      }
      if ((long)local_c0 < 0) {
        uVar2 = 0;
LAB_00567694:
                    /* WARNING: Subroutine does not return */
        alloc::raw_vec::handle_error(uVar2,local_c0);
      }
      if (local_c0 == 0) {
        __dest = &DAT_00000001;
      }
      else {
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        uVar2 = 1;
        __dest = (undefined1 *)FUN_004b25a4(local_c0,1);
        if (__dest == (undefined1 *)0x0) goto LAB_00567694;
        memcpy(__dest,pvStack_c8,local_c0);
      }
      uVar2 = 0x800000000000000d;
      uVar3 = param_3;
      param_3 = local_c0;
    }
    *param_1 = uVar2;
    param_1[1] = param_3;
    param_1[2] = __dest;
    param_1[3] = param_3;
    param_1[4] = uVar3;
    *(char *)(param_1 + 5) = (char)local_e8;
  }
  else {
    *param_1 = 0x800000000000000b;
    param_1[1] = param_3;
  }
  return;
}


// ===== 00567770  FUN_00567770 =====

void FUN_00567770(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x30);
  if ((uVar1 & 1) != 0) {
    <tokio::sync::oneshot::tokio::sync::oneshot::Task>::drop_task(param_1 + 0x20);
  }
  if (((uint)uVar1 >> 3 & 1) == 0) {
    return;
  }
  <tokio::sync::oneshot::tokio::sync::oneshot::Task>::drop_task(param_1 + 0x10);
  return;
}


