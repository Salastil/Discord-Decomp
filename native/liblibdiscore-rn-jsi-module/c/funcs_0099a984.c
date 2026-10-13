// ===== 0099a984  FUN_0099a984 =====

void FUN_0099a984(undefined8 *param_1,undefined8 param_2,ulong param_3,ulong param_4,uint param_5,
                 long param_6,long *param_7)

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
  long local_128;
  long lStack_120;
  long local_118;
  long lStack_110;
  long *local_108;
  long *local_100;
  undefined1 *puStack_f8;
  long lStack_f0;
  long lStack_e8;
  long local_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long *local_c0;
  long *local_b0;
  byte *pbStack_a8;
  undefined **local_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long *local_70;
  
  puVar5 = PTR_MIN_00b00ce0;
  if ((param_3 & 1) != 0) goto LAB_0099ab14;
  if (*(long *)PTR_MIN_00b00ce0 != 0) {
    param_4 = *(long *)PTR_MIN_00b00ce0 - 1;
    goto LAB_0099ab14;
  }
                    /* try { // try from 0099a9e0 to 0099a9f3 has its CatchHandler @ 0099ad80 */
  std::sys::env::unix::getenv(&local_100,"RUST_MIN_STACK",0xe);
  __ptr = puStack_f8;
  plVar8 = local_100;
  if (local_100 == (long *)0xffffffffffffffff) {
    param_4 = 0x200000;
  }
  else {
                    /* try { // try from 0099aa04 to 0099aa0f has its CatchHandler @ 0099ad28 */
    core::str::converts::from_utf8(&local_b0,puStack_f8,lStack_f0);
    if ((local_b0 == (long *)0x1) || (local_a0 == (undefined **)0x0)) {
      param_4 = 0x200000;
    }
    else {
      if (local_a0 == (undefined **)0x1) {
        bVar1 = *pbStack_a8;
        param_4 = 0x200000;
        if ((bVar1 == 0x2b) || (bVar1 == 0x2d)) goto joined_r0x0099acf0;
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
joined_r0x0099acf0:
    if (plVar8 != (long *)0x0) {
      free(__ptr);
    }
  }
  *(ulong *)puVar5 = param_4 + 1;
LAB_0099ab14:
                    /* try { // try from 0099ab18 to 0099ab27 has its CatchHandler @ 0099ad80 */
  uVar7 = <std::thread::id::std::thread::id::ThreadId>::new();
  local_130 = (long *)<std::thread::thread::std::thread::thread::Thread>::new(uVar7,param_2);
  if ((param_5 & 1) == 0) {
                    /* try { // try from 0099ab40 to 0099ab4b has its CatchHandler @ 0099ad58 */
    std::thread::spawnhook::run_spawn_hooks(&local_128,&local_130);
  }
  else {
    local_118 = 0;
    lStack_110 = 0;
    local_128 = 0;
    lStack_120 = 8;
  }
  lStack_98 = 0;
  pbStack_a8 = &DAT_00000001;
  local_b0 = (long *)0x1;
  local_a0 = (undefined **)param_6;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  local_108 = (long *)FUN_004b25a4(0x30,8);
  if (local_108 == (long *)0x0) {
                    /* try { // try from 0099acf8 to 0099ad03 has its CatchHandler @ 0099ade4 */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x30);
  }
  local_108[5] = lStack_88;
  local_108[4] = local_90;
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
    puStack_f8 = (undefined1 *)param_7[1];
    local_100 = (long *)*param_7;
    lStack_e8 = param_7[3];
    lStack_f0 = param_7[2];
    lStack_d8 = lStack_120;
    local_e0 = local_128;
    lStack_c8 = lStack_110;
    lStack_d0 = local_118;
    local_c0 = local_108;
    if (local_108[2] != 0) {
                    /* try { // try from 0099abbc to 0099abc3 has its CatchHandler @ 0099ad68 */
      <std::thread::scoped::std::thread::scoped::ScopeData>::increment_num_running_threads
                (local_108[2] + 0x10);
    }
    local_70 = local_c0;
    lStack_88 = lStack_d8;
    local_90 = local_e0;
    lStack_78 = lStack_c8;
    lStack_80 = lStack_d0;
    pbStack_a8 = puStack_f8;
    local_b0 = local_100;
    lStack_98 = lStack_e8;
    local_a0 = (undefined **)lStack_f0;
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    plVar8 = (long *)FUN_004b25a4(0x48,8);
    if (plVar8 == (long *)0x0) {
                    /* try { // try from 0099ad08 to 0099ad13 has its CatchHandler @ 0099ada0 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x48);
    }
    plVar8[8] = (long)local_c0;
    plVar8[5] = lStack_d8;
    plVar8[4] = local_e0;
    plVar8[7] = lStack_c8;
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
      local_a0 = &PTR_FUN_00af4898;
      pbStack_a8 = (byte *)plVar8;
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      puVar9 = (undefined8 *)FUN_004b25a4(0x18,8);
      if (puVar9 != (undefined8 *)0x0) {
        puVar9[1] = pbStack_a8;
        *puVar9 = local_b0;
        puVar9[2] = local_a0;
                    /* try { // try from 0099ac5c to 0099ac63 has its CatchHandler @ 0099ad78 */
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
                    /* try { // try from 0099ac8c to 0099ac93 has its CatchHandler @ 0099ad50 */
            <alloc::sync::[n]::alloc::sync::Arc<std::thread::lifecycle::Packet<()>>>::drop_slow
                      (&local_108);
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
                    /* try { // try from 0099ad18 to 0099ad23 has its CatchHandler @ 0099ad8c */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x18);
    }
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x99ad28);
  (*pcVar6)();
}


// ===== 0099ae98  FUN_0099ae98 =====

void FUN_0099ae98(undefined8 *param_1)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  undefined8 *puVar6;
  void *__ptr;
  long *plVar7;
  long *local_a8;
  undefined8 local_a0;
  long lStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long lStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uStack_88 = param_1[3];
  local_90 = param_1[2];
  uStack_78 = param_1[5];
  uStack_80 = param_1[4];
  lStack_58 = param_1[5];
  local_60 = param_1[4];
  uStack_68 = param_1[7];
  local_70 = param_1[6];
  uVar1 = *param_1;
  lVar5 = param_1[1];
  uStack_48 = param_1[7];
  local_50 = param_1[6];
                    /* try { // try from 0099aedc to 0099aee3 has its CatchHandler @ 0099afdc */
  local_a0 = uVar1;
  lStack_98 = lVar5;
  std::sys::backtrace::
  __rust_begin_short_backtrace<std::thread::lifecycle::spawn_unchecked<<tokio::runtime::blocking::pool::[4]::_backref_35_::Spawner>::spawn_thread::_closure_0_,()>::_closure_0_::_closure_0_::_closure_0_,()>
            (&local_60);
  uStack_48 = param_1[3];
  local_50 = param_1[2];
                    /* try { // try from 0099aef0 to 0099aef7 has its CatchHandler @ 0099afd4 */
  local_60 = uVar1;
  lStack_58 = lVar5;
  std::sys::backtrace::
  __rust_begin_short_backtrace<<tokio::runtime::blocking::pool::[4]::_backref_31_::Spawner>::spawn_thread::_closure_0_,()>
            (&local_60);
  plVar7 = (long *)param_1[8];
  if ((plVar7[3] != 0) && (__ptr = (void *)plVar7[4], __ptr != (void *)0x0)) {
    puVar6 = (undefined8 *)plVar7[5];
    pcVar4 = (code *)*puVar6;
    if (pcVar4 != (code *)0x0) {
                    /* try { // try from 0099af1c to 0099af23 has its CatchHandler @ 0099af80 */
      (*pcVar4)(__ptr);
    }
    if (puVar6[1] != 0) {
      free(__ptr);
    }
  }
  plVar7[5] = lVar5;
  plVar7[3] = 1;
  plVar7[4] = 0;
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
    local_a8 = plVar7;
    <alloc::sync::[n]::alloc::sync::Arc<std::thread::lifecycle::Packet<()>>>::drop_slow(&local_a8);
  }
  return;
}


// ===== 0099b010  FUN_0099b010 =====

void FUN_0099b010(undefined4 *param_1,int *param_2)

{
  long lVar1;
  int local_24;
  
  local_24 = param_2[6];
  param_2[6] = -1;
  if (local_24 == -1) {
                    /* try { // try from 0099b0d0 to 0099b0db has its CatchHandler @ 0099b14c */
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af48d8);
  }
  lVar1 = 0x140;
  if (*param_2 == 0) {
    lVar1 = 0xe0;
  }
  if (*(int *)(*(long *)(param_2 + 2) + lVar1 + 0x44) != -1) {
                    /* try { // try from 0099b068 to 0099b073 has its CatchHandler @ 0099b154 */
    lVar1 = FUN_00982718(*(long *)(param_2 + 2) + lVar1,param_2 + 4,&local_24);
    if (lVar1 == 0) {
      *param_1 = 0;
      param_1[1] = local_24;
                    /* try { // try from 0099b0a0 to 0099b0a7 has its CatchHandler @ 0099b0fc */
      FUN_0099f8c0(param_2);
    }
    else {
      *(long *)(param_1 + 2) = lVar1;
      *param_1 = 1;
      close(local_24);
                    /* try { // try from 0099b08c to 0099b093 has its CatchHandler @ 0099b124 */
      FUN_0099f8c0(param_2);
    }
    if (param_2[6] != -1) {
      close(param_2[6]);
    }
    FUN_0099a8a4(param_2);
    return;
  }
                    /* try { // try from 0099b0e0 to 0099b0f7 has its CatchHandler @ 0099b154 */
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed
            ("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
             ,0x68,&PTR_s__root__cargo_registry_src_index__00af4e28);
}


// ===== 0099b178  FUN_0099b178 =====

void FUN_0099b178(uint *param_1,int *param_2)

{
  long lVar1;
  uint local_24;
  
  local_24 = param_2[6];
  param_2[6] = -1;
  if (local_24 == 0xffffffff) {
                    /* try { // try from 0099b220 to 0099b22b has its CatchHandler @ 0099b24c */
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af48d8);
  }
  lVar1 = 0x140;
  if (*param_2 == 0) {
    lVar1 = 0xe0;
  }
  if (*(int *)(*(long *)(param_2 + 2) + lVar1 + 0x44) != -1) {
                    /* try { // try from 0099b1d0 to 0099b1db has its CatchHandler @ 0099b254 */
    lVar1 = FUN_009828f8(*(long *)(param_2 + 2) + lVar1,param_2 + 4,&local_24);
    if (lVar1 == 0) {
      param_1[1] = local_24;
    }
    else {
      *(long *)(param_1 + 2) = lVar1;
      close(local_24);
    }
    *param_1 = (uint)(lVar1 != 0);
    FUN_00999e80(param_2);
    return;
  }
                    /* try { // try from 0099b230 to 0099b247 has its CatchHandler @ 0099b254 */
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed
            ("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
             ,0x68,&PTR_s__root__cargo_registry_src_index__00af4e28);
}


// ===== 0099b278  FUN_0099b278 =====

void FUN_0099b278(uint *param_1,int *param_2)

{
  long lVar1;
  uint local_24;
  
  local_24 = param_2[6];
  param_2[6] = -1;
  if (local_24 == 0xffffffff) {
                    /* try { // try from 0099b320 to 0099b32b has its CatchHandler @ 0099b34c */
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af48d8);
  }
  lVar1 = 0x140;
  if (*param_2 == 0) {
    lVar1 = 0xe0;
  }
  if (*(int *)(*(long *)(param_2 + 2) + lVar1 + 0x44) != -1) {
                    /* try { // try from 0099b2d0 to 0099b2db has its CatchHandler @ 0099b354 */
    lVar1 = FUN_00982cb0(*(long *)(param_2 + 2) + lVar1,param_2 + 4,&local_24);
    if (lVar1 == 0) {
      param_1[1] = local_24;
    }
    else {
      *(long *)(param_1 + 2) = lVar1;
      close(local_24);
    }
    *param_1 = (uint)(lVar1 != 0);
    FUN_00999ff4(param_2);
    return;
  }
                    /* try { // try from 0099b330 to 0099b347 has its CatchHandler @ 0099b354 */
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed
            ("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
             ,0x68,&PTR_s__root__cargo_registry_src_index__00af4e28);
}


// ===== 0099b378  FUN_0099b378 =====

void FUN_0099b378(undefined4 *param_1,int *param_2)

{
  long lVar1;
  int local_24;
  
  local_24 = param_2[6];
  param_2[6] = -1;
  if (local_24 == -1) {
                    /* try { // try from 0099b438 to 0099b443 has its CatchHandler @ 0099b4b4 */
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af48d8);
  }
  lVar1 = 0x140;
  if (*param_2 == 0) {
    lVar1 = 0xe0;
  }
  if (*(int *)(*(long *)(param_2 + 2) + lVar1 + 0x44) != -1) {
                    /* try { // try from 0099b3d0 to 0099b3db has its CatchHandler @ 0099b4bc */
    lVar1 = FUN_00983068(*(long *)(param_2 + 2) + lVar1,param_2 + 4,&local_24);
    if (lVar1 == 0) {
      *param_1 = 0;
      param_1[1] = local_24;
                    /* try { // try from 0099b408 to 0099b40f has its CatchHandler @ 0099b464 */
      FUN_0099fb60(param_2);
    }
    else {
      *(long *)(param_1 + 2) = lVar1;
      *param_1 = 1;
      close(local_24);
                    /* try { // try from 0099b3f4 to 0099b3fb has its CatchHandler @ 0099b48c */
      FUN_0099fb60(param_2);
    }
    if (param_2[6] != -1) {
      close(param_2[6]);
    }
    FUN_0099a8a4(param_2);
    return;
  }
                    /* try { // try from 0099b448 to 0099b45f has its CatchHandler @ 0099b4bc */
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed
            ("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
             ,0x68,&PTR_s__root__cargo_registry_src_index__00af4e28);
}


// ===== 0099b4e0  FUN_0099b4e0 =====

void FUN_0099b4e0(uint *param_1,int *param_2)

{
  long lVar1;
  uint local_24;
  
  local_24 = param_2[6];
  param_2[6] = -1;
  if (local_24 == 0xffffffff) {
                    /* try { // try from 0099b588 to 0099b593 has its CatchHandler @ 0099b5b4 */
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af48d8);
  }
  lVar1 = 0x140;
  if (*param_2 == 0) {
    lVar1 = 0xe0;
  }
  if (*(int *)(*(long *)(param_2 + 2) + lVar1 + 0x44) != -1) {
                    /* try { // try from 0099b538 to 0099b543 has its CatchHandler @ 0099b5bc */
    lVar1 = FUN_00983244(*(long *)(param_2 + 2) + lVar1,param_2 + 4,&local_24);
    if (lVar1 == 0) {
      param_1[1] = local_24;
    }
    else {
      *(long *)(param_1 + 2) = lVar1;
      close(local_24);
    }
    *param_1 = (uint)(lVar1 != 0);
    FUN_0099a1c8(param_2);
    return;
  }
                    /* try { // try from 0099b598 to 0099b5af has its CatchHandler @ 0099b5bc */
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed
            ("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
             ,0x68,&PTR_s__root__cargo_registry_src_index__00af4e28);
}


// ===== 0099b5e0  FUN_0099b5e0 =====

void FUN_0099b5e0(undefined4 *param_1,int *param_2)

{
  long lVar1;
  int local_24;
  
  local_24 = param_2[6];
  param_2[6] = -1;
  if (local_24 == -1) {
                    /* try { // try from 0099b6a0 to 0099b6ab has its CatchHandler @ 0099b71c */
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af48d8);
  }
  lVar1 = 0x140;
  if (*param_2 == 0) {
    lVar1 = 0xe0;
  }
  if (*(int *)(*(long *)(param_2 + 2) + lVar1 + 0x44) != -1) {
                    /* try { // try from 0099b638 to 0099b643 has its CatchHandler @ 0099b724 */
    lVar1 = FUN_00983420(*(long *)(param_2 + 2) + lVar1,param_2 + 4,&local_24);
    if (lVar1 == 0) {
      *param_1 = 0;
      param_1[1] = local_24;
                    /* try { // try from 0099b670 to 0099b677 has its CatchHandler @ 0099b6cc */
      FUN_0099fc40(param_2);
    }
    else {
      *(long *)(param_1 + 2) = lVar1;
      *param_1 = 1;
      close(local_24);
                    /* try { // try from 0099b65c to 0099b663 has its CatchHandler @ 0099b6f4 */
      FUN_0099fc40(param_2);
    }
    if (param_2[6] != -1) {
      close(param_2[6]);
    }
    FUN_0099a8a4(param_2);
    return;
  }
                    /* try { // try from 0099b6b0 to 0099b6c7 has its CatchHandler @ 0099b724 */
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed
            ("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
             ,0x68,&PTR_s__root__cargo_registry_src_index__00af4e28);
}


// ===== 0099b748  FUN_0099b748 =====

void FUN_0099b748(uint *param_1,int *param_2)

{
  long lVar1;
  uint local_24;
  
  local_24 = param_2[6];
  param_2[6] = -1;
  if (local_24 == 0xffffffff) {
                    /* try { // try from 0099b7f0 to 0099b7fb has its CatchHandler @ 0099b81c */
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af48d8);
  }
  lVar1 = 0x140;
  if (*param_2 == 0) {
    lVar1 = 0xe0;
  }
  if (*(int *)(*(long *)(param_2 + 2) + lVar1 + 0x44) != -1) {
                    /* try { // try from 0099b7a0 to 0099b7ab has its CatchHandler @ 0099b824 */
    lVar1 = FUN_009835fc(*(long *)(param_2 + 2) + lVar1,param_2 + 4,&local_24);
    if (lVar1 == 0) {
      param_1[1] = local_24;
    }
    else {
      *(long *)(param_1 + 2) = lVar1;
      close(local_24);
    }
    *param_1 = (uint)(lVar1 != 0);
    FUN_0099a33c(param_2);
    return;
  }
                    /* try { // try from 0099b800 to 0099b817 has its CatchHandler @ 0099b824 */
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed
            ("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
             ,0x68,&PTR_s__root__cargo_registry_src_index__00af4e28);
}


// ===== 0099b848  <tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::into_split =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::into_split */

void __rustcall
<tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::into_split
          (undefined8 *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar6 = param_2[1];
  lVar5 = *param_2;
  lVar8 = param_2[3];
  lVar7 = param_2[2];
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  plVar4 = (long *)FUN_004b25a4(0x30,8);
  if (plVar4 == (long *)0x0) {
                    /* try { // try from 0099b8c4 to 0099b8cf has its CatchHandler @ 0099b8d4 */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x30);
  }
  plVar4[5] = lVar8;
  plVar4[4] = lVar7;
  plVar4[1] = 1;
  *plVar4 = 1;
  plVar4[3] = lVar6;
  plVar4[2] = lVar5;
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
    *param_1 = plVar4;
    param_1[1] = plVar4;
    *(undefined1 *)(param_1 + 2) = 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x99b8d4);
  (*pcVar3)();
}


// ===== 0099b8ec  <tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::local_addr =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::local_addr */

void __rustcall
<tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::local_addr(long param_1)

{
  if (*(int *)(param_1 + 0x18) != -1) {
    <mio::net::tcp::stream::mio::net::tcp::stream::TcpStream>::local_addr();
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af48f0);
}


// ===== 0099b910  <tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::set_linger =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::set_linger */

void __rustcall
<tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::set_linger
          (long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 local_24;
  
  if (*(int *)(param_1 + 0x18) == -1) {
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af48f0);
  }
  if (-1 < *(int *)(param_1 + 0x18)) {
    local_24 = <socket2::socket::Socket_as_std::os::fd::raw::FromRawFd>::from_raw_fd();
    <socket2::socket::socket2::socket::Socket>::set_linger(&local_24,param_2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic(&DAT_0037cef2,0x19,&PTR_s__root__cargo_registry_src_index__00af6378);
}


// ===== 0099b984  <tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::take_error =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::take_error */

void __rustcall
<tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::take_error(long param_1)

{
  if (*(int *)(param_1 + 0x18) != -1) {
    <mio::net::tcp::stream::mio::net::tcp::stream::TcpStream>::take_error();
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af48f0);
}


// ===== 0099b9a8  <tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::set_nodelay =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::set_nodelay */

void __rustcall
<tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::set_nodelay(long param_1)

{
  if (*(int *)(param_1 + 0x18) != -1) {
    <mio::net::tcp::stream::mio::net::tcp::stream::TcpStream>::set_nodelay();
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af48f0);
}


// ===== 0099b9cc  FUN_0099b9cc =====

undefined1  [16] FUN_0099b9cc(long param_1,undefined8 param_2,long *param_3)

{
  ulong *puVar1;
  ulong uVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  bool bVar12;
  ulong unaff_x20;
  long lVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  long local_78;
  byte local_70;
  undefined7 uStack_6f;
  undefined8 local_68;
  
  uVar11 = param_3[1];
  uVar2 = param_3[2];
  if (uVar11 < uVar2) {
    <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
    poll_ready(&local_70,param_1,param_2,0);
    if (local_68._1_1_ != -1) {
      if (local_68._1_1_ != '\x02') {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (uVar2,uVar11,uVar11,&PTR_s__root__cargo_registry_src_index__00af4938);
      }
LAB_0099bcc0:
      unaff_x20 = CONCAT71(uStack_6f,local_70);
      goto LAB_0099bc40;
    }
  }
  else {
    lVar13 = *param_3;
    uVar3 = *(uint *)(param_1 + 0x18);
    unaff_x20 = (ulong)uVar3;
    <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
    poll_ready(&local_70,param_1,param_2,0);
    if (uVar3 == 0xffffffff) {
      if (local_68._1_1_ != -1) {
        if (local_68._1_1_ != '\x02') {
                    /* WARNING: Subroutine does not return */
          core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af49b0);
        }
        goto LAB_0099bcc0;
      }
    }
    else if (local_68._1_1_ != -1) {
      puVar1 = (ulong *)(*(long *)(param_1 + 0x10) + 0x90);
      do {
        bVar4 = local_70;
        unaff_x20 = CONCAT71(uStack_6f,local_70);
        if (local_68._1_1_ == '\x02') {
          uVar7 = 0;
          goto LAB_0099bc4c;
        }
        cVar5 = (char)local_68;
        local_78 = param_1 + 0x18;
        auVar15 = <&mio::net::tcp::stream::TcpStream_as_alloc::io::read::Read>::read
                            (&local_78,lVar13 + uVar2,uVar11 - uVar2);
        unaff_x20 = auVar15._8_8_;
        if (auVar15._0_8_ != 1) {
          if ((unaff_x20 == 0) || (uVar11 - uVar2 <= unaff_x20)) goto LAB_0099bc1c;
          puVar1 = (ulong *)(*(long *)(param_1 + 0x10) + 0x90);
          uVar11 = *puVar1;
          goto LAB_0099bbd4;
        }
        uVar14 = unaff_x20 & 3;
        if (uVar14 < 2) {
          if ((auVar15 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
            cVar6 = *(char *)(unaff_x20 + 0x10);
          }
          else {
            cVar6 = *(char *)(unaff_x20 + 0x1f);
          }
joined_r0x0099baf0:
          if (cVar6 != '\r') goto LAB_0099bc40;
        }
        else {
          if (uVar14 == 2) {
                    /* try { // try from 0099bacc to 0099badf has its CatchHandler @ 0099bcec */
            lVar8 = core::io::error::os_functions::get_os_functions();
            cVar6 = (**(code **)(lVar8 + 8))(unaff_x20 >> 0x20);
            goto joined_r0x0099baf0;
          }
          if ((auVar15._12_4_ & 0xff) != 0xd) goto LAB_0099bc40;
        }
        uVar10 = *puVar1;
        do {
          if (cVar5 != (char)(uVar10 >> 0x10)) break;
          uVar9 = *puVar1;
          if (uVar9 == uVar10) {
            cVar6 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar12) {
              *puVar1 = uVar10 & ((ulong)bVar4 & 0x33 ^ 0xff003f);
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') {
              bVar12 = true;
            }
            else {
              bVar12 = false;
            }
          }
          else {
            bVar12 = false;
            ClearExclusiveLocal();
          }
          uVar10 = uVar9;
        } while (!bVar12);
        if ((1 < uVar14 - 2) && ((auVar15 & (undefined1  [16])0x3) != (undefined1  [16])0x0)) {
          local_68 = unaff_x20 - 1;
          local_70 = 3;
          <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_68);
        }
        <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
        poll_ready(&local_70,param_1,param_2,0);
      } while (local_68._1_1_ != -1);
      uVar7 = 1;
      goto LAB_0099bc4c;
    }
  }
  uVar7 = 1;
  goto LAB_0099bc4c;
  while( true ) {
    uVar14 = *puVar1;
    if (uVar14 == uVar11) {
      cVar6 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar12) {
        *puVar1 = uVar11 & ((ulong)bVar4 & 0x33 ^ 0xff003f);
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 == '\0') {
        bVar12 = true;
      }
      else {
        bVar12 = false;
      }
    }
    else {
      bVar12 = false;
      ClearExclusiveLocal();
    }
    uVar11 = uVar14;
    if (bVar12) break;
LAB_0099bbd4:
    if (cVar5 != (char)(uVar11 >> 0x10)) break;
  }
LAB_0099bc1c:
  uVar11 = uVar2 + unaff_x20;
  if ((ulong)param_3[3] < uVar11) {
    param_3[3] = uVar11;
  }
  if (uVar11 < uVar2) {
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed
              ("filled overflow",0xf,&PTR_s__root__cargo_registry_src_index__00af49c8);
  }
  unaff_x20 = 0;
  param_3[2] = uVar11;
LAB_0099bc40:
  uVar7 = 0;
LAB_0099bc4c:
  auVar15._8_8_ = unaff_x20;
  auVar15._0_8_ = uVar7;
  return auVar15;
}


// ===== 0099bd04  <tokio::net::unix::stream::tokio::net::unix::stream::UnixStream>::poll_read_ready =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::stream::tokio::net::unix::stream::UnixStream>::poll_read_ready */

undefined1  [16] __rustcall
<tokio::net::unix::stream::tokio::net::unix::stream::UnixStream>::poll_read_ready
          (undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined8 extraout_x1;
  undefined1 auVar2 [16];
  ulong local_20;
  char local_17;
  
  <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
  poll_ready(&local_20,param_1,param_2,0);
  if (local_17 == -1) {
    auVar2._8_8_ = extraout_x1;
    auVar2._0_8_ = 1;
    return auVar2;
  }
  if (local_17 == '\x02') {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_20;
    return auVar1 << 0x40;
  }
  return ZEXT816(0);
}


// ===== 0099bd68  FUN_0099bd68 =====

undefined1  [16] FUN_0099bd68(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong *puVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  bool bVar10;
  ulong unaff_x20;
  ulong uVar11;
  undefined1 auVar12 [16];
  int *local_78;
  byte local_70;
  undefined7 uStack_6f;
  undefined8 local_68;
  
  iVar2 = *(int *)(param_1 + 0x18);
  <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
  poll_ready(&local_70,param_1,param_2,1);
  if (iVar2 == -1) {
    if (local_68._1_1_ != -1) {
      if (local_68._1_1_ != '\x02') {
                    /* WARNING: Subroutine does not return */
        core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af4998);
      }
      unaff_x20 = CONCAT71(uStack_6f,local_70);
      uVar6 = 1;
      goto LAB_0099bfb4;
    }
  }
  else if (local_68._1_1_ != -1) {
    puVar1 = (ulong *)(*(long *)(param_1 + 0x10) + 0x90);
    do {
      bVar3 = local_70;
      unaff_x20 = CONCAT71(uStack_6f,local_70);
      if (local_68._1_1_ == '\x02') {
        uVar6 = 1;
        goto LAB_0099bfb4;
      }
      cVar4 = (char)local_68;
      local_78 = (int *)(param_1 + 0x18);
      auVar12 = <&mio::net::tcp::stream::TcpStream_as_core::io::write::Write>::write
                          (&local_78,param_3,param_4);
      unaff_x20 = auVar12._8_8_;
      if (auVar12._0_8_ != 1) {
        uVar6 = 0;
        if ((unaff_x20 == 0) || (param_4 <= unaff_x20)) goto LAB_0099bfb4;
        puVar1 = (ulong *)(*(long *)(param_1 + 0x10) + 0x90);
        uVar11 = *puVar1;
        goto LAB_0099bf58;
      }
      uVar11 = unaff_x20 & 3;
      if (uVar11 < 2) {
        if ((auVar12 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
          cVar5 = *(char *)(unaff_x20 + 0x10);
        }
        else {
          cVar5 = *(char *)(unaff_x20 + 0x1f);
        }
joined_r0x0099be74:
        if (cVar5 != '\r') {
LAB_0099bfa0:
          uVar6 = 1;
          goto LAB_0099bfb4;
        }
      }
      else {
        if (uVar11 == 2) {
                    /* try { // try from 0099be50 to 0099be63 has its CatchHandler @ 0099c000 */
          lVar7 = core::io::error::os_functions::get_os_functions();
          cVar5 = (**(code **)(lVar7 + 8))(unaff_x20 >> 0x20);
          goto joined_r0x0099be74;
        }
        if ((auVar12._12_4_ & 0xff) != 0xd) goto LAB_0099bfa0;
      }
      uVar9 = *puVar1;
      do {
        if (cVar4 != (char)(uVar9 >> 0x10)) break;
        uVar8 = *puVar1;
        if (uVar8 == uVar9) {
          cVar5 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar10) {
            *puVar1 = uVar9 & ((ulong)bVar3 & 0x33 ^ 0xff003f);
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
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
        uVar9 = uVar8;
      } while (!bVar10);
      if ((1 < uVar11 - 2) && ((auVar12 & (undefined1  [16])0x3) != (undefined1  [16])0x0)) {
        local_68 = unaff_x20 - 1;
        local_70 = 3;
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_68);
      }
      <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
      poll_ready(&local_70,param_1,param_2,1);
    } while (local_68._1_1_ != -1);
    uVar6 = 2;
    goto LAB_0099bfb4;
  }
  uVar6 = 2;
  goto LAB_0099bfb4;
  while( true ) {
    uVar9 = *puVar1;
    if (uVar9 == uVar11) {
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar10) {
        *puVar1 = uVar11 & ((ulong)bVar3 & 0x33 ^ 0xff003f);
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 == '\0') {
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
    uVar11 = uVar9;
    if (bVar10) break;
LAB_0099bf58:
    if (cVar4 != (char)(uVar11 >> 0x10)) break;
  }
  uVar6 = 0;
LAB_0099bfb4:
  auVar12._8_8_ = unaff_x20;
  auVar12._0_8_ = uVar6;
  return auVar12;
}


// ===== 0099c018  <tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::poll_write_ready =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::poll_write_ready */

undefined1  [16] __rustcall
<tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::poll_write_ready
          (undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined8 extraout_x1;
  undefined1 auVar2 [16];
  ulong local_30;
  char local_27;
  
  <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
  poll_ready(&local_30,param_1,param_2,1);
  if (local_27 == -1) {
    auVar2._8_8_ = extraout_x1;
    auVar2._0_8_ = 1;
    return auVar2;
  }
  if (local_27 == '\x02') {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_30;
    return auVar1 << 0x40;
  }
  return ZEXT816(0);
}


// ===== 0099c098  <tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::try_read_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::try_read_vectored */

void __rustcall
<tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::try_read_vectored
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_28 = param_1;
  uStack_20 = param_2;
  local_18 = param_3;
  FUN_009a66fc(param_1,1,&local_28);
  return;
}


// ===== 0099c0c4  <tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::try_write_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::try_write_vectored */

void __rustcall
<tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::try_write_vectored
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_28 = param_1;
  uStack_20 = param_2;
  local_18 = param_3;
  FUN_009a68e4(param_1,2,&local_28);
  return;
}


// ===== 0099c0f0  <tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::new =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::new */

ulong __rustcall
<tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::new(long *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  long local_48;
  long lStack_40;
  long local_38;
  int local_14;
  
                    /* try { // try from 0099c10c to 0099c117 has its CatchHandler @ 0099c1a8 */
  auVar3 = <tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::current
                     (&PTR_s__root__cargo_registry_src_index__00af4908);
                    /* try { // try from 0099c124 to 0099c13b has its CatchHandler @ 0099c190 */
  local_14 = param_2;
  uVar2 = FUN_009a4e60(&local_48,&local_14,3,auVar3._0_8_,auVar3._8_8_,
                       &PTR_s__root__cargo_registry_src_index__00af4908);
  if (local_48 == 2) {
    uVar1 = close(local_14);
    *param_1 = 2;
    param_1[1] = lStack_40;
    return (ulong)uVar1;
  }
  param_1[2] = local_38;
  *(int *)(param_1 + 3) = local_14;
  *param_1 = local_48;
  param_1[1] = lStack_40;
  return uVar2;
}


// ===== 0099c1bc  <tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::ttl =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::ttl */

void __rustcall <tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::ttl(long param_1)

{
  if (*(int *)(param_1 + 0x18) != -1) {
    <mio::net::tcp::stream::mio::net::tcp::stream::TcpStream>::ttl();
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af48f0);
}


// ===== 0099c1e0  <tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::linger =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::linger */

void __rustcall
<tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::linger
          (undefined8 param_1,long param_2)

{
  undefined4 local_4;
  
  if (*(int *)(param_2 + 0x18) == -1) {
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af48f0);
  }
  if (-1 < *(int *)(param_2 + 0x18)) {
    local_4 = <socket2::socket::Socket_as_std::os::fd::raw::FromRawFd>::from_raw_fd();
    <socket2::socket::socket2::socket::Socket>::linger(param_1,&local_4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic(&DAT_0037cef2,0x19,&PTR_s__root__cargo_registry_src_index__00af6378);
}


// ===== 0099c244  <tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::nodelay =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::nodelay */

void __rustcall <tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::nodelay(long param_1)

{
  if (*(int *)(param_1 + 0x18) != -1) {
    <mio::net::tcp::stream::mio::net::tcp::stream::TcpStream>::nodelay();
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af48f0);
}


// ===== 0099c268  <tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::set_ttl =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::set_ttl */

void __rustcall <tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::set_ttl(long param_1)

{
  if (*(int *)(param_1 + 0x18) != -1) {
    <mio::net::tcp::stream::mio::net::tcp::stream::TcpStream>::set_ttl();
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af48f0);
}


// ===== 0099c28c  <tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::from_std =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::from_std */

ulong __rustcall
<tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::from_std
          (long *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  long local_48;
  long lStack_40;
  long local_38;
  int local_18;
  int local_14;
  
                    /* try { // try from 0099c2b0 to 0099c2bf has its CatchHandler @ 0099c384 */
  local_18 = param_2;
  iVar1 = <std::io::pipe::PipeReader_as_std::os::fd::owned::AsFd>::as_fd(&local_18);
  if (iVar1 < 0) {
                    /* try { // try from 0099c33c to 0099c353 has its CatchHandler @ 0099c384 */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(&DAT_0037cef2,0x19,&PTR_s__root__cargo_registry_src_index__00af6378);
  }
  <socket2::socket::Socket_as_std::os::fd::raw::FromRawFd>::from_raw_fd();
                    /* try { // try from 0099c2c0 to 0099c2c7 has its CatchHandler @ 0099c370 */
  auVar4 = <tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::current(param_3);
                    /* try { // try from 0099c2d4 to 0099c2e7 has its CatchHandler @ 0099c358 */
  local_14 = param_2;
  uVar3 = FUN_009a4e60(&local_48,&local_14,3,auVar4._0_8_,auVar4._8_8_,param_3);
  if (local_48 == 2) {
    uVar2 = close(local_14);
    *param_1 = 2;
    param_1[1] = lStack_40;
    return (ulong)uVar2;
  }
  param_1[2] = local_38;
  *(int *)(param_1 + 3) = local_14;
  *param_1 = local_48;
  param_1[1] = lStack_40;
  return uVar3;
}


// ===== 0099c398  <tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::into_std =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::into_std */

void __rustcall
<tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::into_std
          (undefined4 *param_1,ulong *param_2)

{
  int iVar1;
  long lVar2;
  ulong local_50;
  ulong uStack_48;
  ulong uStack_40;
  int local_38;
  undefined4 uStack_34;
  int local_14;
  
  uStack_48 = param_2[1];
  local_50 = *param_2;
  uStack_40 = param_2[2];
  local_38 = (int)param_2[3];
  local_14 = local_38;
  _local_38 = CONCAT44((int)(param_2[3] >> 0x20),0xffffffff);
  if (local_14 == -1) {
                    /* try { // try from 0099c4a0 to 0099c4ab has its CatchHandler @ 0099c51c */
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af48d8);
  }
  lVar2 = 0x140;
  if ((local_50 & 1) == 0) {
    lVar2 = 0xe0;
  }
  if (*(int *)(uStack_48 + lVar2 + 0x44) == -1) {
                    /* try { // try from 0099c4b0 to 0099c4c7 has its CatchHandler @ 0099c524 */
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed
              ("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
               ,0x68,&PTR_s__root__cargo_registry_src_index__00af4e28);
  }
                    /* try { // try from 0099c3fc to 0099c407 has its CatchHandler @ 0099c524 */
  lVar2 = FUN_00982ad4(uStack_48 + lVar2,&uStack_40,&local_14);
  iVar1 = local_14;
  if (lVar2 == 0) {
                    /* try { // try from 0099c43c to 0099c443 has its CatchHandler @ 0099c4cc */
    FUN_0099f9a0(&local_50);
    if (local_38 == -1) {
      FUN_0099a8a4(&local_50);
      goto LAB_0099c488;
    }
  }
  else {
    close(local_14);
                    /* try { // try from 0099c41c to 0099c423 has its CatchHandler @ 0099c4f4 */
    FUN_0099f9a0(&local_50);
    if (local_38 == -1) {
      FUN_0099a8a4(&local_50);
      goto LAB_0099c460;
    }
  }
  close(local_38);
  FUN_0099a8a4(&local_50);
  if (lVar2 == 0) {
LAB_0099c488:
    *param_1 = 0;
    param_1[1] = iVar1;
    return;
  }
LAB_0099c460:
  *(long *)(param_1 + 2) = lVar2;
  *param_1 = 1;
  return;
}


// ===== 0099c548  <tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::try_read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::try_read */

void __rustcall
<tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::try_read
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_28 = param_1;
  uStack_20 = param_2;
  local_18 = param_3;
  FUN_009a6acc(param_1,1,&local_28);
  return;
}


// ===== 0099c574  <tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::peer_addr =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::peer_addr */

void __rustcall
<tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::peer_addr(long param_1)

{
  if (*(int *)(param_1 + 0x18) != -1) {
    <mio::net::tcp::stream::mio::net::tcp::stream::TcpStream>::peer_addr();
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af48f0);
}


// ===== 0099c598  <tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::poll_peek =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::poll_peek */

undefined1  [16] __rustcall
<tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::poll_peek
          (long param_1,undefined8 param_2,long *param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  byte bVar5;
  char cVar6;
  char cVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  bool bVar12;
  ulong uVar13;
  long *unaff_x21;
  long lVar14;
  undefined1 auVar15 [16];
  byte local_70;
  undefined7 uStack_6f;
  undefined8 local_68;
  
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  if (uVar2 < uVar3) {
    <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
    poll_ready(&local_70,param_1,param_2,0);
    if (local_68._1_1_ != -1) {
      if (local_68._1_1_ != '\x02') {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (uVar3,uVar2,uVar2,&PTR_s__root__cargo_registry_src_index__00af4938);
      }
LAB_0099c814:
      unaff_x21 = (long *)CONCAT71(uStack_6f,local_70);
      uVar8 = 1;
      goto LAB_0099c7a0;
    }
  }
  else {
    lVar14 = *param_3;
    iVar4 = *(int *)(param_1 + 0x18);
    <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
    poll_ready(&local_70,param_1,param_2,0);
    unaff_x21 = param_3;
    if (iVar4 == -1) {
      if (local_68._1_1_ != -1) {
        if (local_68._1_1_ != '\x02') {
                    /* WARNING: Subroutine does not return */
          core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af48f0);
        }
        goto LAB_0099c814;
      }
    }
    else if (local_68._1_1_ != -1) {
      puVar1 = (ulong *)(*(long *)(param_1 + 0x10) + 0x90);
      do {
        bVar5 = local_70;
        unaff_x21 = (long *)CONCAT71(uStack_6f,local_70);
        if (local_68._1_1_ == '\x02') {
          uVar8 = 1;
          goto LAB_0099c7a0;
        }
        cVar6 = (char)local_68;
        auVar15 = <mio::net::tcp::stream::mio::net::tcp::stream::TcpStream>::peek
                            (param_1 + 0x18,lVar14 + uVar3,uVar2 - uVar3);
        unaff_x21 = auVar15._8_8_;
        if (auVar15._0_8_ != 1) {
          uVar2 = uVar3 + (long)unaff_x21;
          if ((ulong)param_3[3] < uVar2) {
            param_3[3] = uVar2;
          }
          if (uVar2 < uVar3) {
                    /* WARNING: Subroutine does not return */
            core::option::expect_failed
                      ("filled overflow",0xf,&PTR_s__root__cargo_registry_src_index__00af4920);
          }
          uVar8 = 0;
          param_3[2] = uVar2;
          goto LAB_0099c7a0;
        }
        uVar13 = (ulong)unaff_x21 & 3;
        if (uVar13 < 2) {
          if ((auVar15 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
            cVar7 = (char)unaff_x21[2];
          }
          else {
            cVar7 = *(char *)((long)unaff_x21 + 0x1f);
          }
joined_r0x0099c6b4:
          if (cVar7 != '\r') {
LAB_0099c794:
            uVar8 = 1;
            goto LAB_0099c7a0;
          }
        }
        else {
          if (uVar13 == 2) {
                    /* try { // try from 0099c690 to 0099c6a3 has its CatchHandler @ 0099c844 */
            lVar9 = core::io::error::os_functions::get_os_functions();
            cVar7 = (**(code **)(lVar9 + 8))((ulong)unaff_x21 >> 0x20);
            goto joined_r0x0099c6b4;
          }
          if ((auVar15._12_4_ & 0xff) != 0xd) goto LAB_0099c794;
        }
        uVar11 = *puVar1;
        do {
          if (cVar6 != (char)(uVar11 >> 0x10)) break;
          uVar10 = *puVar1;
          if (uVar10 == uVar11) {
            cVar7 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar12) {
              *puVar1 = uVar11 & ((ulong)bVar5 & 0x33 ^ 0xff003f);
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 == '\0') {
              bVar12 = true;
            }
            else {
              bVar12 = false;
            }
          }
          else {
            bVar12 = false;
            ClearExclusiveLocal();
          }
          uVar11 = uVar10;
        } while (!bVar12);
        if ((1 < uVar13 - 2) && ((auVar15 & (undefined1  [16])0x3) != (undefined1  [16])0x0)) {
          local_68 = (long)unaff_x21 - 1;
          local_70 = 3;
          <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_68);
        }
        <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
        poll_ready(&local_70,param_1,param_2,0);
      } while (local_68._1_1_ != -1);
      uVar8 = 2;
      goto LAB_0099c7a0;
    }
  }
  uVar8 = 2;
LAB_0099c7a0:
  auVar15._8_8_ = unaff_x21;
  auVar15._0_8_ = uVar8;
  return auVar15;
}


// ===== 0099c85c  <tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::try_write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::try_write */

void __rustcall
<tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::try_write
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_28 = param_1;
  uStack_20 = param_2;
  local_18 = param_3;
  FUN_009a6cb4(param_1,2,&local_28);
  return;
}


// ===== 0099c888  <tokio::net::unix::stream::tokio::net::unix::stream::UnixStream>::into_split =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::stream::tokio::net::unix::stream::UnixStream>::into_split */

void __rustcall
<tokio::net::unix::stream::tokio::net::unix::stream::UnixStream>::into_split
          (undefined8 *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar6 = param_2[1];
  lVar5 = *param_2;
  lVar8 = param_2[3];
  lVar7 = param_2[2];
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  plVar4 = (long *)FUN_004b25a4(0x30,8);
  if (plVar4 == (long *)0x0) {
                    /* try { // try from 0099c904 to 0099c90f has its CatchHandler @ 0099c914 */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x30);
  }
  plVar4[5] = lVar8;
  plVar4[4] = lVar7;
  plVar4[1] = 1;
  *plVar4 = 1;
  plVar4[3] = lVar6;
  plVar4[2] = lVar5;
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
    *param_1 = plVar4;
    param_1[1] = plVar4;
    *(undefined1 *)(param_1 + 2) = 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x99c914);
  (*pcVar3)();
}


// ===== 0099c92c  <tokio::net::unix::stream::tokio::net::unix::stream::UnixStream>::local_addr =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::stream::tokio::net::unix::stream::UnixStream>::local_addr */

void __rustcall
<tokio::net::unix::stream::tokio::net::unix::stream::UnixStream>::local_addr
          (undefined4 *param_1,long param_2)

{
  uint local_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined8 local_64;
  undefined8 uStack_5c;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined8 local_44;
  undefined8 uStack_3c;
  undefined8 local_34;
  undefined8 uStack_2c;
  undefined4 local_24;
  
  if (*(int *)(param_2 + 0x18) == -1) {
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af48f0);
  }
  <mio::net::uds::stream::mio::net::uds::stream::UnixStream>::local_addr(&local_98);
  if ((local_98 & 1) != 0) {
    *(ulong *)(param_1 + 2) = CONCAT44(uStack_8c,uStack_90);
    *param_1 = 1;
    return;
  }
  *(undefined8 *)(param_1 + 0x13) = uStack_4c;
  *(undefined8 *)(param_1 + 0x11) = local_54;
  *(undefined8 *)(param_1 + 0x17) = uStack_3c;
  *(undefined8 *)(param_1 + 0x15) = local_44;
  *(undefined8 *)(param_1 + 0x1b) = uStack_2c;
  *(undefined8 *)(param_1 + 0x19) = local_34;
  *(ulong *)(param_1 + 3) = CONCAT44(uStack_88,uStack_8c);
  *(ulong *)(param_1 + 1) = CONCAT44(uStack_90,local_94);
  *(undefined8 *)(param_1 + 7) = uStack_7c;
  *(undefined8 *)(param_1 + 5) = local_84;
  *(undefined8 *)(param_1 + 0xb) = uStack_6c;
  *(undefined8 *)(param_1 + 9) = local_74;
  param_1[0x1d] = local_24;
  *(undefined8 *)(param_1 + 0xf) = uStack_5c;
  *(undefined8 *)(param_1 + 0xd) = local_64;
  *param_1 = 0;
  return;
}


// ===== 0099c9dc  <tokio::net::unix::stream::tokio::net::unix::stream::UnixStream>::take_error =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::stream::tokio::net::unix::stream::UnixStream>::take_error */

void __rustcall
<tokio::net::unix::stream::tokio::net::unix::stream::UnixStream>::take_error(long param_1)

{
  if (*(int *)(param_1 + 0x18) != -1) {
    <mio::net::uds::stream::mio::net::uds::stream::UnixStream>::take_error();
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af48f0);
}


// ===== 0099ca00  <tokio::net::unix::stream::tokio::net::unix::stream::UnixStream>::try_read_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::stream::tokio::net::unix::stream::UnixStream>::try_read_vectored */

void __rustcall
<tokio::net::unix::stream::tokio::net::unix::stream::UnixStream>::try_read_vectored
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_28 = param_1;
  uStack_20 = param_2;
  local_18 = param_3;
  FUN_009a6e9c(param_1,1,&local_28);
  return;
}


// ===== 0099ca2c  <tokio::net::unix::stream::tokio::net::unix::stream::UnixStream>::try_write_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::stream::tokio::net::unix::stream::UnixStream>::try_write_vectored */

void __rustcall
<tokio::net::unix::stream::tokio::net::unix::stream::UnixStream>::try_write_vectored
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_28 = param_1;
  uStack_20 = param_2;
  local_18 = param_3;
  FUN_009a7084(param_1,2,&local_28);
  return;
}


// ===== 0099ca58  <tokio::net::unix::stream::tokio::net::unix::stream::UnixStream>::new =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::stream::tokio::net::unix::stream::UnixStream>::new */

ulong __rustcall
<tokio::net::unix::stream::tokio::net::unix::stream::UnixStream>::new(long *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  long local_48;
  long lStack_40;
  long local_38;
  int local_14;
  
                    /* try { // try from 0099ca74 to 0099ca7f has its CatchHandler @ 0099cb10 */
  auVar3 = <tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::current
                     (&PTR_s__root__cargo_registry_src_index__00af4950);
                    /* try { // try from 0099ca8c to 0099caa3 has its CatchHandler @ 0099caf8 */
  local_14 = param_2;
  uVar2 = FUN_009a5090(&local_48,&local_14,3,auVar3._0_8_,auVar3._8_8_,
                       &PTR_s__root__cargo_registry_src_index__00af4950);
  if (local_48 == 2) {
    uVar1 = close(local_14);
    *param_1 = 2;
    param_1[1] = lStack_40;
    return (ulong)uVar1;
  }
  param_1[2] = local_38;
  *(int *)(param_1 + 3) = local_14;
  *param_1 = local_48;
  param_1[1] = lStack_40;
  return uVar2;
}


// ===== 0099cb24  <tokio::net::unix::stream::tokio::net::unix::stream::UnixStream>::pair =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::stream::tokio::net::unix::stream::UnixStream>::pair */

ulong __rustcall
<tokio::net::unix::stream::tokio::net::unix::stream::UnixStream>::pair(long *param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined8 local_68;
  long lStack_60;
  long local_58;
  int iStack_50;
  undefined4 uStack_4c;
  long local_48;
  long lStack_40;
  long local_38;
  int local_14;
  
  uVar3 = <mio::net::uds::stream::mio::net::uds::stream::UnixStream>::pair(&local_68);
  if ((int)local_68 == 1) {
    *param_1 = 2;
    param_1[1] = lStack_60;
    return uVar3;
  }
  iVar1 = (int)lStack_60;
                    /* try { // try from 0099cb74 to 0099cb7f has its CatchHandler @ 0099cd00 */
  auVar4 = <tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::current
                     (&PTR_s__root__cargo_registry_src_index__00af4950);
  local_14 = local_68._4_4_;
                    /* try { // try from 0099cb8c to 0099cba3 has its CatchHandler @ 0099ccf0 */
  FUN_009a5090(&local_48,&local_14,3,auVar4._0_8_,auVar4._8_8_,
               &PTR_s__root__cargo_registry_src_index__00af4950);
  if (local_48 == 2) {
    close(local_14);
    *param_1 = 2;
    param_1[1] = lStack_40;
    uVar2 = close((int)lStack_60);
    return (ulong)uVar2;
  }
  local_68 = local_48;
  lStack_60 = lStack_40;
  local_58 = local_38;
  iStack_50 = local_14;
                    /* try { // try from 0099cbf0 to 0099cbfb has its CatchHandler @ 0099ccd4 */
  auVar4 = <tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::current
                     (&PTR_s__root__cargo_registry_src_index__00af4950);
  local_14 = iVar1;
                    /* try { // try from 0099cc08 to 0099cc1f has its CatchHandler @ 0099cccc */
  uVar3 = FUN_009a5090(&local_48,&local_14,3,auVar4._0_8_,auVar4._8_8_,
                       &PTR_s__root__cargo_registry_src_index__00af4950);
  if (local_48 == 2) {
    close(local_14);
    *param_1 = 2;
    param_1[1] = lStack_40;
                    /* try { // try from 0099cc3c to 0099cc43 has its CatchHandler @ 0099cca4 */
    FUN_0099fa80(&local_68);
    if (iStack_50 != -1) {
      close(iStack_50);
    }
    uVar3 = FUN_0099a8a4(&local_68);
    return uVar3;
  }
  param_1[4] = local_48;
  param_1[5] = lStack_40;
  param_1[1] = lStack_60;
  *param_1 = local_68;
  param_1[3] = CONCAT44(uStack_4c,iStack_50);
  param_1[2] = local_58;
  param_1[6] = local_38;
  *(int *)(param_1 + 7) = local_14;
  return uVar3;
}


// ===== 0099cd1c  <tokio::net::unix::stream::tokio::net::unix::stream::UnixStream>::from_std =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::stream::tokio::net::unix::stream::UnixStream>::from_std */

ulong __rustcall
<tokio::net::unix::stream::tokio::net::unix::stream::UnixStream>::from_std
          (long *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  long local_48;
  long lStack_40;
  long local_38;
  int local_18;
  int local_14;
  
                    /* try { // try from 0099cd40 to 0099cd4f has its CatchHandler @ 0099ce14 */
  local_18 = param_2;
  iVar1 = <std::io::pipe::PipeReader_as_std::os::fd::owned::AsFd>::as_fd(&local_18);
  if (iVar1 < 0) {
                    /* try { // try from 0099cdcc to 0099cde3 has its CatchHandler @ 0099ce14 */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(&DAT_0037cef2,0x19,&PTR_s__root__cargo_registry_src_index__00af6378);
  }
  <socket2::socket::Socket_as_std::os::fd::raw::FromRawFd>::from_raw_fd();
                    /* try { // try from 0099cd50 to 0099cd57 has its CatchHandler @ 0099ce00 */
  auVar4 = <tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::current(param_3);
                    /* try { // try from 0099cd64 to 0099cd77 has its CatchHandler @ 0099cde8 */
  local_14 = param_2;
  uVar3 = FUN_009a5090(&local_48,&local_14,3,auVar4._0_8_,auVar4._8_8_,param_3);
  if (local_48 == 2) {
    uVar2 = close(local_14);
    *param_1 = 2;
    param_1[1] = lStack_40;
    return (ulong)uVar2;
  }
  param_1[2] = local_38;
  *(int *)(param_1 + 3) = local_14;
  *param_1 = local_48;
  param_1[1] = lStack_40;
  return uVar3;
}


// ===== 0099ce28  <tokio::net::unix::stream::tokio::net::unix::stream::UnixStream>::into_std =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::stream::tokio::net::unix::stream::UnixStream>::into_std */

void __rustcall
<tokio::net::unix::stream::tokio::net::unix::stream::UnixStream>::into_std
          (undefined4 *param_1,ulong *param_2)

{
  int iVar1;
  long lVar2;
  ulong local_50;
  ulong uStack_48;
  ulong uStack_40;
  int local_38;
  undefined4 uStack_34;
  int local_14;
  
  uStack_48 = param_2[1];
  local_50 = *param_2;
  uStack_40 = param_2[2];
  local_38 = (int)param_2[3];
  local_14 = local_38;
  _local_38 = CONCAT44((int)(param_2[3] >> 0x20),0xffffffff);
  if (local_14 == -1) {
                    /* try { // try from 0099cf30 to 0099cf3b has its CatchHandler @ 0099cfac */
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af48d8);
  }
  lVar2 = 0x140;
  if ((local_50 & 1) == 0) {
    lVar2 = 0xe0;
  }
  if (*(int *)(uStack_48 + lVar2 + 0x44) == -1) {
                    /* try { // try from 0099cf40 to 0099cf57 has its CatchHandler @ 0099cfb4 */
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed
              ("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
               ,0x68,&PTR_s__root__cargo_registry_src_index__00af4e28);
  }
                    /* try { // try from 0099ce8c to 0099ce97 has its CatchHandler @ 0099cfb4 */
  lVar2 = FUN_00982e8c(uStack_48 + lVar2,&uStack_40,&local_14);
  iVar1 = local_14;
  if (lVar2 == 0) {
                    /* try { // try from 0099cecc to 0099ced3 has its CatchHandler @ 0099cf5c */
    FUN_0099fa80(&local_50);
    if (local_38 == -1) {
      FUN_0099a8a4(&local_50);
      goto LAB_0099cf18;
    }
  }
  else {
    close(local_14);
                    /* try { // try from 0099ceac to 0099ceb3 has its CatchHandler @ 0099cf84 */
    FUN_0099fa80(&local_50);
    if (local_38 == -1) {
      FUN_0099a8a4(&local_50);
      goto LAB_0099cef0;
    }
  }
  close(local_38);
  FUN_0099a8a4(&local_50);
  if (lVar2 == 0) {
LAB_0099cf18:
    *param_1 = 0;
    param_1[1] = iVar1;
    return;
  }
LAB_0099cef0:
  *(long *)(param_1 + 2) = lVar2;
  *param_1 = 1;
  return;
}


// ===== 0099cfd8  <tokio::net::unix::stream::tokio::net::unix::stream::UnixStream>::try_read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::stream::tokio::net::unix::stream::UnixStream>::try_read */

void __rustcall
<tokio::net::unix::stream::tokio::net::unix::stream::UnixStream>::try_read
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_28 = param_1;
  uStack_20 = param_2;
  local_18 = param_3;
  FUN_009a726c(param_1,1,&local_28);
  return;
}


// ===== 0099d004  <tokio::net::unix::stream::tokio::net::unix::stream::UnixStream>::peer_addr =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::stream::tokio::net::unix::stream::UnixStream>::peer_addr */

void __rustcall
<tokio::net::unix::stream::tokio::net::unix::stream::UnixStream>::peer_addr
          (undefined4 *param_1,long param_2)

{
  uint local_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined8 local_64;
  undefined8 uStack_5c;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined8 local_44;
  undefined8 uStack_3c;
  undefined8 local_34;
  undefined8 uStack_2c;
  undefined4 local_24;
  
  if (*(int *)(param_2 + 0x18) == -1) {
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af48f0);
  }
  <mio::net::uds::stream::mio::net::uds::stream::UnixStream>::peer_addr(&local_98);
  if ((local_98 & 1) != 0) {
    *(ulong *)(param_1 + 2) = CONCAT44(uStack_8c,uStack_90);
    *param_1 = 1;
    return;
  }
  *(undefined8 *)(param_1 + 0x13) = uStack_4c;
  *(undefined8 *)(param_1 + 0x11) = local_54;
  *(undefined8 *)(param_1 + 0x17) = uStack_3c;
  *(undefined8 *)(param_1 + 0x15) = local_44;
  *(undefined8 *)(param_1 + 0x1b) = uStack_2c;
  *(undefined8 *)(param_1 + 0x19) = local_34;
  *(ulong *)(param_1 + 3) = CONCAT44(uStack_88,uStack_8c);
  *(ulong *)(param_1 + 1) = CONCAT44(uStack_90,local_94);
  *(undefined8 *)(param_1 + 7) = uStack_7c;
  *(undefined8 *)(param_1 + 5) = local_84;
  *(undefined8 *)(param_1 + 0xb) = uStack_6c;
  *(undefined8 *)(param_1 + 9) = local_74;
  param_1[0x1d] = local_24;
  *(undefined8 *)(param_1 + 0xf) = uStack_5c;
  *(undefined8 *)(param_1 + 0xd) = local_64;
  *param_1 = 0;
  return;
}


// ===== 0099d0b4  <tokio::net::unix::stream::tokio::net::unix::stream::UnixStream>::peer_cred =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::stream::tokio::net::unix::stream::UnixStream>::peer_cred */

void __rustcall
<tokio::net::unix::stream::tokio::net::unix::stream::UnixStream>::peer_cred
          (undefined4 *param_1,long param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 uStack_30;
  undefined4 uStack_28;
  socklen_t sStack_24;
  
  if (*(int *)(param_2 + 0x18) == -1) {
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af48f0);
  }
  uStack_30 = 0;
  uStack_28 = 0;
  sStack_24 = 0xc;
  iVar1 = getsockopt(*(int *)(param_2 + 0x18),1,0x11,&uStack_30,&sStack_24);
  if ((iVar1 == 0) && (sStack_24 == 0xc)) {
    *param_1 = 1;
    *(undefined8 *)(param_1 + 1) = uStack_30;
    param_1[3] = uStack_28;
    return;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00af60f8) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00af60f8);
  }
  *param_1 = 2;
  *(ulong *)(param_1 + 2) = (long)iVar1 << 0x20 | 2;
  return;
}


// ===== 0099d0b8  <tokio::net::unix::stream::tokio::net::unix::stream::UnixStream>::try_write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::stream::tokio::net::unix::stream::UnixStream>::try_write */

void __rustcall
<tokio::net::unix::stream::tokio::net::unix::stream::UnixStream>::try_write
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_28 = param_1;
  uStack_20 = param_2;
  local_18 = param_3;
  FUN_009a7454(param_1,2,&local_28);
  return;
}


// ===== 0099d0e4  <tokio::runtime::io::registration_set::tokio::runtime::io::registration_set::RegistrationSet>::deregister =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::io::registration_set::tokio::runtime::io::registration_set::RegistrationSet>::deregister
    */

bool __rustcall
<tokio::runtime::io::registration_set::tokio::runtime::io::registration_set::RegistrationSet>::
deregister(long *param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  
  plVar6 = (long *)*param_3;
  do {
    lVar5 = *plVar6;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = lVar5 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (-1 < lVar5) {
    lVar5 = param_2[2];
    if (lVar5 == *param_2) {
                    /* try { // try from 0099d12c to 0099d133 has its CatchHandler @ 0099d168 */
      <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<alloc::boxed::Box<tokio::runtime::scheduler::multi_thread::worker::Core>>>
      ::grow_one(param_2);
    }
    lVar1 = lVar5 + 1;
    *(long **)(param_2[1] + lVar5 * 8) = plVar6;
    param_2[2] = lVar1;
    *param_1 = lVar1;
    return lVar1 == 0x10;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x99d168);
  (*pcVar4)();
}


// ===== 0099d198  <tokio::runtime::io::registration_set::tokio::runtime::io::registration_set::RegistrationSet>::remove =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::io::registration_set::tokio::runtime::io::registration_set::RegistrationSet>::remove
    */

void __rustcall
<tokio::runtime::io::registration_set::tokio::runtime::io::registration_set::RegistrationSet>::
remove(undefined8 param_1,long param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *local_18;
  
  local_18 = (long *)*param_3;
  plVar3 = local_18 + 0x10;
  if (*plVar3 == 0) {
    if (*(long **)(param_2 + 0x18) != plVar3) {
      return;
    }
    plVar5 = (long *)local_18[0x11];
    *(long **)(param_2 + 0x18) = plVar5;
  }
  else {
    plVar5 = (long *)local_18[0x11];
    *(long **)(*plVar3 + 8) = plVar5;
  }
  if (plVar5 == (long *)0x0) {
    if (*(long **)(param_2 + 0x20) != plVar3) {
      return;
    }
    *(long *)(param_2 + 0x20) = *plVar3;
  }
  else {
    *plVar5 = *plVar3;
  }
  *plVar3 = 0;
  local_18[0x11] = 0;
  do {
    lVar4 = *local_18;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(local_18,0x10);
    if (bVar2) {
      *local_18 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::io::scheduled_io::ScheduledIo>>::drop_slow
              (&local_18);
    return;
  }
  return;
}


// ===== 0099d238  FUN_0099d238 =====

void FUN_0099d238(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 *puStack_48;
  long *local_40;
  long *local_38;
  undefined8 *puVar8;
  
  local_50 = *param_2;
  puVar7 = (undefined8 *)param_2[1];
  *param_2 = 0;
  param_2[1] = 8;
  lVar4 = param_2[2];
  param_2[2] = 0;
  puVar1 = puVar7 + lVar4;
  local_60 = puVar7;
  local_58 = puVar7;
  puStack_48 = puVar1;
  if (lVar4 != 0) {
    do {
      puVar8 = puVar7 + 1;
      local_40 = (long *)*puVar7;
      plVar5 = local_40 + 0x10;
      local_58 = puVar8;
      if (*plVar5 == 0) {
        if ((long *)param_2[3] == plVar5) {
          plVar6 = (long *)local_40[0x11];
          param_2[3] = plVar6;
          goto joined_r0x0099d2f0;
        }
      }
      else {
        plVar6 = (long *)local_40[0x11];
        *(long **)(*plVar5 + 8) = plVar6;
joined_r0x0099d2f0:
        if (plVar6 == (long *)0x0) {
          if ((long *)param_2[4] != plVar5) goto LAB_0099d304;
          param_2[4] = *plVar5;
        }
        else {
          *plVar6 = *plVar5;
        }
        *plVar5 = 0;
        local_40[0x11] = 0;
        do {
          lVar4 = *local_40;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(local_40,0x10);
          if (bVar3) {
            *local_40 = lVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        local_38 = local_40;
        if (lVar4 + -1 == 0) {
          DataMemoryBarrier(2,1);
                    /* try { // try from 0099d2d0 to 0099d2d7 has its CatchHandler @ 0099d354 */
          <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::io::scheduled_io::ScheduledIo>>::
          drop_slow(&local_38);
        }
      }
LAB_0099d304:
      do {
        lVar4 = *local_40;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(local_40,0x10);
        if (bVar3) {
          *local_40 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 + -1 == 0) {
        DataMemoryBarrier(2,1);
                    /* try { // try from 0099d31c to 0099d323 has its CatchHandler @ 0099d380 */
        <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::io::scheduled_io::ScheduledIo>>::
        drop_slow(&local_40);
      }
      puVar7 = puVar8;
    } while (puVar8 != puVar1);
  }
  FUN_009a0290(&local_60);
  *param_1 = 0;
  return;
}


// ===== 0099d398  <tokio::runtime::io::registration_set::tokio::runtime::io::registration_set::RegistrationSet>::allocate =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::io::registration_set::tokio::runtime::io::registration_set::RegistrationSet>::allocate
    */

undefined1  [16] __rustcall
<tokio::runtime::io::registration_set::tokio::runtime::io::registration_set::RegistrationSet>::
allocate(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  code *pcVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  long *local_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long local_160;
  long lStack_158;
  long lStack_150;
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
  long lStack_e8;
  long local_e0;
  long lStack_d8;
  long local_d0;
  long lStack_c8;
  long local_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long local_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    uVar5 = <alloc::io::error::core::io::error::Error>::new<&str>
                      (0x2a,"A Tokio 1.x context was found, but it is being shutdown.",0x38);
    auVar9._8_8_ = uVar5;
    auVar9._0_8_ = 1;
    return auVar9;
  }
  local_c0 = 0;
  local_d0 = 0;
  lStack_178 = 1;
  local_180 = (long *)&DAT_00000001;
  lStack_f8 = 0;
  local_100 = 0;
  lStack_e8 = 0;
  lStack_f0 = 0;
  lStack_d8 = 0;
  local_e0 = 0;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  plVar6 = (long *)FUN_004b25a4(0x100,0x80);
  if (plVar6 != (long *)0x0) {
    plVar6[0x19] = lStack_b8;
    plVar6[0x18] = local_c0;
    plVar6[0x1b] = lStack_a8;
    plVar6[0x1a] = lStack_b0;
    plVar6[0x1d] = lStack_98;
    plVar6[0x1c] = local_a0;
    plVar6[0x1f] = lStack_88;
    plVar6[0x1e] = lStack_90;
    plVar6[0x11] = lStack_f8;
    plVar6[0x10] = local_100;
    plVar6[0x13] = lStack_e8;
    plVar6[0x12] = lStack_f0;
    plVar6[0x15] = lStack_d8;
    plVar6[0x14] = local_e0;
    plVar6[0x17] = lStack_c8;
    plVar6[0x16] = local_d0;
    plVar6[9] = lStack_138;
    plVar6[8] = local_140;
    plVar6[0xb] = lStack_128;
    plVar6[10] = lStack_130;
    plVar6[0xd] = lStack_118;
    plVar6[0xc] = local_120;
    plVar6[0xf] = lStack_108;
    plVar6[0xe] = lStack_110;
    plVar6[1] = lStack_178;
    *plVar6 = (long)local_180;
    plVar6[3] = lStack_168;
    plVar6[2] = lStack_170;
    plVar6[5] = lStack_158;
    plVar6[4] = local_160;
    plVar6[7] = lStack_148;
    plVar6[6] = lStack_150;
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
      local_180 = plVar6 + 0x10;
      plVar8 = *(long **)(param_2 + 0x18);
      if (plVar8 != local_180) {
        plVar6[0x10] = 0;
        plVar6[0x11] = (long)plVar8;
        if (plVar8 != (long *)0x0) {
          *plVar8 = (long)local_180;
        }
        *(long **)(param_2 + 0x18) = local_180;
        if (*(long *)(param_2 + 0x20) == 0) {
          *(long **)(param_2 + 0x20) = local_180;
        }
        auVar3._8_8_ = 0;
        auVar3._0_8_ = plVar6;
        return auVar3 << 0x40;
      }
                    /* try { // try from 0099d4e4 to 0099d4fb has its CatchHandler @ 0099d500 */
      core[bcece726f298455b]::panicking::assert_failed::
      <core[bcece726f298455b]::option::Option<core[bcece726f298455b]::ptr::non_null::NonNull<tokio[8c8895dbfa691109]::runtime::io::scheduled_io::ScheduledIo>>,core[bcece726f298455b]::option::Option<core[bcece726f298455b]::ptr::non_null::NonNull<tokio[8c8895dbfa691109]::runtime::io::scheduled_io::ScheduledIo>>>
                (1,(undefined8 *)(param_2 + 0x18),&local_180,0,param_5,
                 &PTR_s__root__cargo_registry_src_index__00af47e0);
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x99d500);
    (*pcVar4)();
  }
                    /* try { // try from 0099d4d4 to 0099d4df has its CatchHandler @ 0099d52c */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(0x80,0x100);
}


// ===== 0099d544  FUN_0099d544 =====

void FUN_0099d544(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long local_58;
  long lStack_50;
  long local_48;
  
  if ((*(byte *)(param_3 + 0x28) & 1) == 0) {
    lVar1 = *(long *)(param_3 + 8);
    lVar2 = *(long *)(param_3 + 0x10);
    *(undefined8 *)(param_3 + 0x10) = 0;
    *(undefined1 *)(param_3 + 0x28) = 1;
    if (lVar2 != 0) {
      lVar9 = 0;
      do {
        lVar7 = lVar9 * 8;
        lVar9 = lVar9 + 1;
        plVar6 = *(long **)(lVar1 + lVar7);
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
                    /* try { // try from 0099d5d8 to 0099d5db has its CatchHandler @ 0099d6ac */
          <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::io::scheduled_io::ScheduledIo>>::
          drop_slow();
        }
      } while (lVar9 != lVar2);
    }
    local_48 = 0;
    local_58 = 0;
    lStack_50 = 8;
    puVar5 = *(undefined8 **)(param_3 + 0x20);
    lVar1 = local_48;
    while (puVar5 != (undefined8 *)0x0) {
      puVar8 = (undefined8 *)*puVar5;
      *(undefined8 **)(param_3 + 0x20) = puVar8;
      if (puVar8 == (undefined8 *)0x0) {
        *(undefined8 *)(param_3 + 0x18) = 0;
      }
      else {
        puVar8[1] = 0;
      }
      *puVar5 = 0;
      puVar5[1] = 0;
      if (lVar1 == local_58) {
                    /* try { // try from 0099d668 to 0099d66f has its CatchHandler @ 0099d674 */
        local_48 = lVar1;
        <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<alloc::boxed::Box<tokio::runtime::scheduler::multi_thread::worker::Core>>>
        ::grow_one(&local_58);
      }
      *(undefined8 **)(lStack_50 + lVar1 * 8) = puVar5 + -0x10;
      puVar5 = puVar8;
      lVar1 = lVar1 + 1;
    }
    param_1[1] = lStack_50;
    *param_1 = local_58;
    param_1[2] = lVar1;
    return;
  }
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 8;
  return;
}


// ===== 0099d6f8  <tokio::net::tcp::split_owned::[0]::tokio::net::tcp::split_owned::OwnedReadHalf>::local_addr =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::split_owned::[0]::tokio::net::tcp::split_owned::OwnedReadHalf>::local_addr */

void __rustcall
<tokio::net::tcp::split_owned::[0]::tokio::net::tcp::split_owned::OwnedReadHalf>::local_addr
          (long *param_1)

{
  if (*(int *)(*param_1 + 0x28) != -1) {
    <mio::net::tcp::stream::mio::net::tcp::stream::TcpStream>::local_addr();
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af48f0);
}


// ===== 0099d720  <tokio::net::tcp::split_owned::[0]::tokio::net::tcp::split_owned::OwnedReadHalf>::try_read_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::split_owned::[0]::tokio::net::tcp::split_owned::OwnedReadHalf>::try_read_vectored
    */

void __rustcall
<tokio::net::tcp::split_owned::[0]::tokio::net::tcp::split_owned::OwnedReadHalf>::try_read_vectored
          (long *param_1,undefined8 param_2,undefined8 param_3)

{
  long local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_28 = *param_1 + 0x10;
  uStack_20 = param_2;
  local_18 = param_3;
  FUN_009a66fc(local_28,1,&local_28);
  return;
}


// ===== 0099d754  <tokio::net::tcp::split_owned::[0]::tokio::net::tcp::split_owned::OwnedReadHalf>::reunite =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::split_owned::[0]::tokio::net::tcp::split_owned::OwnedReadHalf>::reunite */

void __rustcall
<tokio::net::tcp::split_owned::[0]::tokio::net::tcp::split_owned::OwnedReadHalf>::reunite
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_0099ef48(param_1,param_2,param_3,param_4);
  return;
}


// ===== 0099d768  <tokio::net::tcp::split_owned::[0]::tokio::net::tcp::split_owned::OwnedReadHalf>::try_read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::split_owned::[0]::tokio::net::tcp::split_owned::OwnedReadHalf>::try_read */

void __rustcall
<tokio::net::tcp::split_owned::[0]::tokio::net::tcp::split_owned::OwnedReadHalf>::try_read
          (long *param_1,undefined8 param_2,undefined8 param_3)

{
  long local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_28 = *param_1 + 0x10;
  uStack_20 = param_2;
  local_18 = param_3;
  FUN_009a6acc(local_28,1,&local_28);
  return;
}


// ===== 0099d79c  <tokio::net::tcp::split_owned::[0]::tokio::net::tcp::split_owned::OwnedReadHalf>::peer_addr =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::split_owned::[0]::tokio::net::tcp::split_owned::OwnedReadHalf>::peer_addr */

void __rustcall
<tokio::net::tcp::split_owned::[0]::tokio::net::tcp::split_owned::OwnedReadHalf>::peer_addr
          (long *param_1)

{
  if (*(int *)(*param_1 + 0x28) != -1) {
    <mio::net::tcp::stream::mio::net::tcp::stream::TcpStream>::peer_addr();
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af48f0);
}


// ===== 0099d7c4  <tokio::net::tcp::split_owned::[0]::tokio::net::tcp::split_owned::OwnedReadHalf>::poll_peek =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::split_owned::[0]::tokio::net::tcp::split_owned::OwnedReadHalf>::poll_peek */

void __rustcall
<tokio::net::tcp::split_owned::[0]::tokio::net::tcp::split_owned::OwnedReadHalf>::poll_peek
          (long *param_1)

{
  <tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::poll_peek(*param_1 + 0x10);
  return;
}


// ===== 0099d7d0  <tokio::sync::task::atomic_waker::[0]::tokio::sync::task::atomic_waker::AtomicWaker>::register_by_ref =====

/* WARNING: Removing unreachable block (ram,0x0099d8d4) */
/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::sync::task::atomic_waker::[0]::tokio::sync::task::atomic_waker::AtomicWaker>::register_by_ref
    */

void __rustcall
<tokio::sync::task::atomic_waker::[0]::tokio::sync::task::atomic_waker::AtomicWaker>::
register_by_ref(undefined1 (*param_1) [16],long *param_2)

{
  undefined1 (*pauVar1) [16];
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined1 auVar8 [16];
  
  pauVar1 = param_1 + 1;
  do {
    lVar7 = *(long *)*pauVar1;
    if (lVar7 != 0) {
      ClearExclusiveLocal();
      if (lVar7 == 2) {
        (**(code **)(*param_2 + 0x10))(param_2[1]);
        InstructionSynchronizationBarrier();
        return;
      }
      break;
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(pauVar1,0x10);
    if (bVar6) {
      *(undefined8 *)*pauVar1 = 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (lVar7 == 0) {
                    /* try { // try from 0099d81c to 0099d81f has its CatchHandler @ 0099d9c0 */
    auVar8 = (**(code **)*param_2)(param_2[1]);
    lVar7 = *(long *)*param_1;
    uVar3 = *(undefined8 *)(*param_1 + 8);
    *param_1 = auVar8;
    do {
      if (*(long *)*pauVar1 != 1) {
        ClearExclusiveLocal();
        lVar2 = *(long *)*param_1;
        uVar4 = *(undefined8 *)(*param_1 + 8);
        *(undefined8 *)*param_1 = 0;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pauVar1,0x10);
          if (bVar6) {
            *(undefined8 *)*pauVar1 = 0;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar7 != 0) {
                    /* try { // try from 0099d8b8 to 0099d8bf has its CatchHandler @ 0099d8e8 */
          (**(code **)(lVar7 + 8))(uVar3);
        }
        if (lVar2 == 0) {
          return;
        }
                    /* try { // try from 0099d8c8 to 0099d8cf has its CatchHandler @ 0099d8dc */
        (**(code **)(lVar2 + 8))(uVar4);
        return;
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pauVar1,0x10);
      if (bVar6) {
        *(undefined8 *)*pauVar1 = 0;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar7 != 0) {
                    /* try { // try from 0099d848 to 0099d84b has its CatchHandler @ 0099d954 */
      (**(code **)(lVar7 + 0x18))();
    }
  }
  return;
}


// ===== 0099da54  <tokio::sync::task::atomic_waker::[0]::tokio::sync::task::atomic_waker::AtomicWaker>::wake =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::sync::task::atomic_waker::[0]::tokio::sync::task::atomic_waker::AtomicWaker>::wake */

void __rustcall
<tokio::sync::task::atomic_waker::[0]::tokio::sync::task::atomic_waker::AtomicWaker>::wake
          (long *param_1)

{
  ulong *puVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  
  puVar1 = (ulong *)(param_1 + 2);
  do {
    uVar5 = *puVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = uVar5 | 2;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (uVar5 == 0) {
    lVar2 = *param_1;
    *param_1 = 0;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 & 0xfffffffffffffffd;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0099da94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar2 + 8))(param_1[1]);
      return;
    }
  }
  return;
}


// ===== 0099da98  FUN_0099da98 =====

undefined1  [16] FUN_0099da98(undefined8 *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
                    /* try { // try from 0099dab0 to 0099dab3 has its CatchHandler @ 0099dbcc */
  <std::sys::thread::unix::[0]::std::sys::thread::unix::Thread>::join(param_1[2]);
  plVar8 = param_1 + 1;
  plVar5 = (long *)*plVar8;
  plVar7 = plVar5 + 1;
  do {
    if (*plVar7 != 1) {
      ClearExclusiveLocal();
      goto LAB_0099db78;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar5[1] = 1;
  if (*plVar5 == 1) {
    lVar6 = *plVar8;
    auVar4 = *(undefined1 (*) [16])(lVar6 + 0x20);
    uVar1 = *(uint *)(lVar6 + 0x18);
    *(undefined8 *)(lVar6 + 0x18) = 0;
    if ((uVar1 & 1) != 0) {
      plVar7 = (long *)*param_1;
      do {
        lVar6 = *plVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 + -1 == 0) {
        DataMemoryBarrier(2,1);
                    /* try { // try from 0099db20 to 0099db27 has its CatchHandler @ 0099db94 */
        <alloc[c1f8e832b0d782c7]::sync::Arc<std[17aff9129faa4dc5]::thread::thread::Inner,std[17aff9129faa4dc5]::alloc::System>>
        ::drop_slow(param_1);
      }
      plVar7 = (long *)*plVar8;
      do {
        lVar6 = *plVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 + -1 == 0) {
        DataMemoryBarrier(2,1);
        <alloc::sync::[n]::alloc::sync::Arc<std::thread::lifecycle::Packet<()>>>::drop_slow(plVar8);
      }
      return auVar4;
    }
                    /* try { // try from 0099db64 to 0099db8f has its CatchHandler @ 0099dbcc */
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00af4980);
  }
LAB_0099db78:
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed
            ("threads should not terminate unexpectedly",0x29,
             &PTR_s__nix_store_8006w282fgsx3273c878b_00af4968);
}


// ===== 0099dc24  <tokio::net::tcp::split_owned::[2]::tokio::net::tcp::split_owned::OwnedWriteHalf>::local_addr =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::split_owned::[2]::tokio::net::tcp::split_owned::OwnedWriteHalf>::local_addr */

void __rustcall
<tokio::net::tcp::split_owned::[2]::tokio::net::tcp::split_owned::OwnedWriteHalf>::local_addr
          (long *param_1)

{
  if (*(int *)(*param_1 + 0x28) != -1) {
    <mio::net::tcp::stream::mio::net::tcp::stream::TcpStream>::local_addr();
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af48f0);
}


// ===== 0099dc4c  <tokio::net::tcp::split_owned::[2]::tokio::net::tcp::split_owned::OwnedWriteHalf>::try_write_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::split_owned::[2]::tokio::net::tcp::split_owned::OwnedWriteHalf>::try_write_vectored
    */

void __rustcall
<tokio::net::tcp::split_owned::[2]::tokio::net::tcp::split_owned::OwnedWriteHalf>::
try_write_vectored(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_28 = *param_1 + 0x10;
  uStack_20 = param_2;
  local_18 = param_3;
  FUN_009a68e4(local_28,2,&local_28);
  return;
}


// ===== 0099dc80  <tokio::net::tcp::split_owned::[2]::tokio::net::tcp::split_owned::OwnedWriteHalf>::forget =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::split_owned::[2]::tokio::net::tcp::split_owned::OwnedWriteHalf>::forget */

void __rustcall
<tokio::net::tcp::split_owned::[2]::tokio::net::tcp::split_owned::OwnedWriteHalf>::forget
          (long *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *local_20;
  undefined1 local_18;
  
  local_18 = 0;
  do {
    lVar3 = *param_1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = lVar3 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar3 + -1 == 0) {
    DataMemoryBarrier(2,1);
    local_20 = param_1;
    <alloc::sync::[n]::alloc::sync::Arc<tokio::net::tcp::stream::TcpStream>>::drop_slow(&local_20);
  }
  return;
}


// ===== 0099dcc0  <tokio::net::tcp::split_owned::[2]::tokio::net::tcp::split_owned::OwnedWriteHalf>::reunite =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::split_owned::[2]::tokio::net::tcp::split_owned::OwnedWriteHalf>::reunite */

void __rustcall
<tokio::net::tcp::split_owned::[2]::tokio::net::tcp::split_owned::OwnedWriteHalf>::reunite
          (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  FUN_0099ef48(param_1,param_4,param_2,param_3);
  return;
}


// ===== 0099dcd8  <tokio::net::tcp::split_owned::[2]::tokio::net::tcp::split_owned::OwnedWriteHalf>::peer_addr =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::split_owned::[2]::tokio::net::tcp::split_owned::OwnedWriteHalf>::peer_addr */

void __rustcall
<tokio::net::tcp::split_owned::[2]::tokio::net::tcp::split_owned::OwnedWriteHalf>::peer_addr
          (long *param_1)

{
  if (*(int *)(*param_1 + 0x28) != -1) {
    <mio::net::tcp::stream::mio::net::tcp::stream::TcpStream>::peer_addr();
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af48f0);
}


// ===== 0099dd00  <tokio::net::tcp::split_owned::[2]::tokio::net::tcp::split_owned::OwnedWriteHalf>::try_write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::split_owned::[2]::tokio::net::tcp::split_owned::OwnedWriteHalf>::try_write */

void __rustcall
<tokio::net::tcp::split_owned::[2]::tokio::net::tcp::split_owned::OwnedWriteHalf>::try_write
          (long *param_1,undefined8 param_2,undefined8 param_3)

{
  long local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_28 = *param_1 + 0x10;
  uStack_20 = param_2;
  local_18 = param_3;
  FUN_009a6cb4(local_28,2,&local_28);
  return;
}


// ===== 0099dd34  FUN_0099dd34 =====

undefined1  [16] FUN_0099dd34(long param_1,undefined8 param_2,long *param_3)

{
  ulong *puVar1;
  ulong uVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  bool bVar12;
  ulong unaff_x20;
  long lVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  long local_78;
  byte local_70;
  undefined7 uStack_6f;
  undefined8 local_68;
  
  uVar11 = param_3[1];
  uVar2 = param_3[2];
  if (uVar11 < uVar2) {
    <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
    poll_ready(&local_70,param_1,param_2,0);
    if (local_68._1_1_ != -1) {
      if (local_68._1_1_ != '\x02') {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (uVar2,uVar11,uVar11,&PTR_s__root__cargo_registry_src_index__00af4938);
      }
LAB_0099e028:
      unaff_x20 = CONCAT71(uStack_6f,local_70);
      goto LAB_0099dfa8;
    }
  }
  else {
    lVar13 = *param_3;
    uVar3 = *(uint *)(param_1 + 0x18);
    unaff_x20 = (ulong)uVar3;
    <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
    poll_ready(&local_70,param_1,param_2,0);
    if (uVar3 == 0xffffffff) {
      if (local_68._1_1_ != -1) {
        if (local_68._1_1_ != '\x02') {
                    /* WARNING: Subroutine does not return */
          core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af49b0);
        }
        goto LAB_0099e028;
      }
    }
    else if (local_68._1_1_ != -1) {
      puVar1 = (ulong *)(*(long *)(param_1 + 0x10) + 0x90);
      do {
        bVar4 = local_70;
        unaff_x20 = CONCAT71(uStack_6f,local_70);
        if (local_68._1_1_ == '\x02') {
          uVar7 = 0;
          goto LAB_0099dfb4;
        }
        cVar5 = (char)local_68;
        local_78 = param_1 + 0x18;
        auVar15 = <&mio::net::uds::stream::UnixStream_as_alloc::io::read::Read>::read
                            (&local_78,lVar13 + uVar2,uVar11 - uVar2);
        unaff_x20 = auVar15._8_8_;
        if (auVar15._0_8_ != 1) {
          if ((unaff_x20 == 0) || (uVar11 - uVar2 <= unaff_x20)) goto LAB_0099df84;
          puVar1 = (ulong *)(*(long *)(param_1 + 0x10) + 0x90);
          uVar11 = *puVar1;
          goto LAB_0099df3c;
        }
        uVar14 = unaff_x20 & 3;
        if (uVar14 < 2) {
          if ((auVar15 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
            cVar6 = *(char *)(unaff_x20 + 0x10);
          }
          else {
            cVar6 = *(char *)(unaff_x20 + 0x1f);
          }
joined_r0x0099de58:
          if (cVar6 != '\r') goto LAB_0099dfa8;
        }
        else {
          if (uVar14 == 2) {
                    /* try { // try from 0099de34 to 0099de47 has its CatchHandler @ 0099e054 */
            lVar8 = core::io::error::os_functions::get_os_functions();
            cVar6 = (**(code **)(lVar8 + 8))(unaff_x20 >> 0x20);
            goto joined_r0x0099de58;
          }
          if ((auVar15._12_4_ & 0xff) != 0xd) goto LAB_0099dfa8;
        }
        uVar10 = *puVar1;
        do {
          if (cVar5 != (char)(uVar10 >> 0x10)) break;
          uVar9 = *puVar1;
          if (uVar9 == uVar10) {
            cVar6 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar12) {
              *puVar1 = uVar10 & ((ulong)bVar4 & 0x33 ^ 0xff003f);
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') {
              bVar12 = true;
            }
            else {
              bVar12 = false;
            }
          }
          else {
            bVar12 = false;
            ClearExclusiveLocal();
          }
          uVar10 = uVar9;
        } while (!bVar12);
        if ((1 < uVar14 - 2) && ((auVar15 & (undefined1  [16])0x3) != (undefined1  [16])0x0)) {
          local_68 = unaff_x20 - 1;
          local_70 = 3;
          <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_68);
        }
        <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
        poll_ready(&local_70,param_1,param_2,0);
      } while (local_68._1_1_ != -1);
      uVar7 = 1;
      goto LAB_0099dfb4;
    }
  }
  uVar7 = 1;
  goto LAB_0099dfb4;
  while( true ) {
    uVar14 = *puVar1;
    if (uVar14 == uVar11) {
      cVar6 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar12) {
        *puVar1 = uVar11 & ((ulong)bVar4 & 0x33 ^ 0xff003f);
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 == '\0') {
        bVar12 = true;
      }
      else {
        bVar12 = false;
      }
    }
    else {
      bVar12 = false;
      ClearExclusiveLocal();
    }
    uVar11 = uVar14;
    if (bVar12) break;
LAB_0099df3c:
    if (cVar5 != (char)(uVar11 >> 0x10)) break;
  }
LAB_0099df84:
  uVar11 = uVar2 + unaff_x20;
  if ((ulong)param_3[3] < uVar11) {
    param_3[3] = uVar11;
  }
  if (uVar11 < uVar2) {
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed
              ("filled overflow",0xf,&PTR_s__root__cargo_registry_src_index__00af49c8);
  }
  unaff_x20 = 0;
  param_3[2] = uVar11;
LAB_0099dfa8:
  uVar7 = 0;
LAB_0099dfb4:
  auVar15._8_8_ = unaff_x20;
  auVar15._0_8_ = uVar7;
  return auVar15;
}


// ===== 0099e06c  FUN_0099e06c =====

undefined1  [16] FUN_0099e06c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong *puVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  bool bVar10;
  ulong unaff_x20;
  ulong uVar11;
  undefined1 auVar12 [16];
  int *local_78;
  byte local_70;
  undefined7 uStack_6f;
  undefined8 local_68;
  
  iVar2 = *(int *)(param_1 + 0x18);
  <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
  poll_ready(&local_70,param_1,param_2,1);
  if (iVar2 == -1) {
    if (local_68._1_1_ != -1) {
      if (local_68._1_1_ != '\x02') {
                    /* WARNING: Subroutine does not return */
        core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af4998);
      }
      unaff_x20 = CONCAT71(uStack_6f,local_70);
      uVar6 = 1;
      goto LAB_0099e2b8;
    }
  }
  else if (local_68._1_1_ != -1) {
    puVar1 = (ulong *)(*(long *)(param_1 + 0x10) + 0x90);
    do {
      bVar3 = local_70;
      unaff_x20 = CONCAT71(uStack_6f,local_70);
      if (local_68._1_1_ == '\x02') {
        uVar6 = 1;
        goto LAB_0099e2b8;
      }
      cVar4 = (char)local_68;
      local_78 = (int *)(param_1 + 0x18);
      auVar12 = <&mio::net::uds::stream::UnixStream_as_core::io::write::Write>::write
                          (&local_78,param_3,param_4);
      unaff_x20 = auVar12._8_8_;
      if (auVar12._0_8_ != 1) {
        uVar6 = 0;
        if ((unaff_x20 == 0) || (param_4 <= unaff_x20)) goto LAB_0099e2b8;
        puVar1 = (ulong *)(*(long *)(param_1 + 0x10) + 0x90);
        uVar11 = *puVar1;
        goto LAB_0099e25c;
      }
      uVar11 = unaff_x20 & 3;
      if (uVar11 < 2) {
        if ((auVar12 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
          cVar5 = *(char *)(unaff_x20 + 0x10);
        }
        else {
          cVar5 = *(char *)(unaff_x20 + 0x1f);
        }
joined_r0x0099e178:
        if (cVar5 != '\r') {
LAB_0099e2a4:
          uVar6 = 1;
          goto LAB_0099e2b8;
        }
      }
      else {
        if (uVar11 == 2) {
                    /* try { // try from 0099e154 to 0099e167 has its CatchHandler @ 0099e304 */
          lVar7 = core::io::error::os_functions::get_os_functions();
          cVar5 = (**(code **)(lVar7 + 8))(unaff_x20 >> 0x20);
          goto joined_r0x0099e178;
        }
        if ((auVar12._12_4_ & 0xff) != 0xd) goto LAB_0099e2a4;
      }
      uVar9 = *puVar1;
      do {
        if (cVar4 != (char)(uVar9 >> 0x10)) break;
        uVar8 = *puVar1;
        if (uVar8 == uVar9) {
          cVar5 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar10) {
            *puVar1 = uVar9 & ((ulong)bVar3 & 0x33 ^ 0xff003f);
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
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
        uVar9 = uVar8;
      } while (!bVar10);
      if ((1 < uVar11 - 2) && ((auVar12 & (undefined1  [16])0x3) != (undefined1  [16])0x0)) {
        local_68 = unaff_x20 - 1;
        local_70 = 3;
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_68);
      }
      <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
      poll_ready(&local_70,param_1,param_2,1);
    } while (local_68._1_1_ != -1);
    uVar6 = 2;
    goto LAB_0099e2b8;
  }
  uVar6 = 2;
  goto LAB_0099e2b8;
  while( true ) {
    uVar9 = *puVar1;
    if (uVar9 == uVar11) {
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar10) {
        *puVar1 = uVar11 & ((ulong)bVar3 & 0x33 ^ 0xff003f);
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 == '\0') {
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
    uVar11 = uVar9;
    if (bVar10) break;
LAB_0099e25c:
    if (cVar4 != (char)(uVar11 >> 0x10)) break;
  }
  uVar6 = 0;
LAB_0099e2b8:
  auVar12._8_8_ = unaff_x20;
  auVar12._0_8_ = uVar6;
  return auVar12;
}


// ===== 0099e31c  FUN_0099e31c =====

undefined1  [16] FUN_0099e31c(long param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  ulong *puVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  char cVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  bool bVar10;
  int *unaff_x20;
  ulong uVar11;
  undefined1 auVar12 [16];
  int *local_70;
  undefined8 local_68;
  
  iVar2 = *(int *)(param_1 + 0x18);
  <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
  poll_ready(&local_70,param_1,param_2,1);
  if (iVar2 == -1) {
    if (local_68._1_1_ != -1) {
      if (local_68._1_1_ != '\x02') {
                    /* WARNING: Subroutine does not return */
        core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af4998);
      }
      uVar6 = 1;
      unaff_x20 = local_70;
      goto LAB_0099e568;
    }
  }
  else if (local_68._1_1_ != -1) {
    puVar1 = (ulong *)(*(long *)(param_1 + 0x10) + 0x90);
    do {
      piVar3 = local_70;
      if (local_68._1_1_ == '\x02') {
        uVar6 = 1;
        unaff_x20 = local_70;
        goto LAB_0099e568;
      }
      cVar4 = (char)local_68;
      local_70 = (int *)(param_1 + 0x18);
      auVar12 = <&std::fs::File_as_core::io::write::Write>::write(&local_70,param_3,param_4);
      unaff_x20 = auVar12._8_8_;
      if (auVar12._0_8_ != 1) {
        uVar6 = 0;
        if ((unaff_x20 == (int *)0x0) || (param_4 <= unaff_x20)) goto LAB_0099e568;
        puVar1 = (ulong *)(*(long *)(param_1 + 0x10) + 0x90);
        uVar11 = *puVar1;
        goto LAB_0099e50c;
      }
      uVar11 = (ulong)unaff_x20 & 3;
      if (uVar11 < 2) {
        if ((auVar12 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
          cVar5 = (char)unaff_x20[4];
        }
        else {
          cVar5 = *(char *)((long)unaff_x20 + 0x1f);
        }
joined_r0x0099e428:
        if (cVar5 != '\r') {
LAB_0099e554:
          uVar6 = 1;
          goto LAB_0099e568;
        }
      }
      else {
        if (uVar11 == 2) {
                    /* try { // try from 0099e404 to 0099e417 has its CatchHandler @ 0099e5b4 */
          lVar7 = core::io::error::os_functions::get_os_functions();
          cVar5 = (**(code **)(lVar7 + 8))((ulong)unaff_x20 >> 0x20);
          goto joined_r0x0099e428;
        }
        if ((auVar12._12_4_ & 0xff) != 0xd) goto LAB_0099e554;
      }
      uVar9 = *puVar1;
      do {
        if (cVar4 != (char)(uVar9 >> 0x10)) break;
        uVar8 = *puVar1;
        if (uVar8 == uVar9) {
          cVar5 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar10) {
            *puVar1 = uVar9 & ((ulong)piVar3 & 0x33 ^ 0xff003f);
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
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
        uVar9 = uVar8;
      } while (!bVar10);
      if ((1 < uVar11 - 2) && ((auVar12 & (undefined1  [16])0x3) != (undefined1  [16])0x0)) {
        local_68 = (long)unaff_x20 + -1;
        local_70 = (int *)CONCAT71(local_70._1_7_,3);
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_68);
      }
      <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
      poll_ready(&local_70,param_1,param_2,1);
    } while (local_68._1_1_ != -1);
    uVar6 = 2;
    goto LAB_0099e568;
  }
  uVar6 = 2;
  goto LAB_0099e568;
  while( true ) {
    uVar9 = *puVar1;
    if (uVar9 == uVar11) {
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar10) {
        *puVar1 = uVar11 & ((ulong)piVar3 & 0x33 ^ 0xff003f);
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 == '\0') {
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
    uVar11 = uVar9;
    if (bVar10) break;
LAB_0099e50c:
    if (cVar4 != (char)(uVar11 >> 0x10)) break;
  }
  uVar6 = 0;
LAB_0099e568:
  auVar12._8_8_ = unaff_x20;
  auVar12._0_8_ = uVar6;
  return auVar12;
}


// ===== 0099e5cc  FUN_0099e5cc =====

undefined1  [16] FUN_0099e5cc(long param_1,undefined8 param_2,long *param_3)

{
  ulong *puVar1;
  ulong uVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  bool bVar11;
  ulong uVar12;
  ulong unaff_x20;
  long lVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  byte local_70;
  undefined7 uStack_6f;
  undefined8 local_68;
  
  uVar12 = param_3[1];
  uVar2 = param_3[2];
  if (uVar12 < uVar2) {
    <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
    poll_ready(&local_70,param_1,param_2,0);
    if (local_68._1_1_ != -1) {
      if (local_68._1_1_ != '\x02') {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (uVar2,uVar12,uVar12,&PTR_s__root__cargo_registry_src_index__00af4938);
      }
LAB_0099e8c0:
      unaff_x20 = CONCAT71(uStack_6f,local_70);
      uVar7 = 0;
      goto LAB_0099e84c;
    }
  }
  else {
    lVar13 = *param_3;
    uVar3 = *(uint *)(param_1 + 0x18);
    unaff_x20 = (ulong)uVar3;
    <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
    poll_ready(&local_70,param_1,param_2,0);
    if (uVar3 == 0xffffffff) {
      if (local_68._1_1_ != -1) {
        if (local_68._1_1_ != '\x02') {
                    /* WARNING: Subroutine does not return */
          core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af49b0);
        }
        goto LAB_0099e8c0;
      }
    }
    else if (local_68._1_1_ != -1) {
      puVar1 = (ulong *)(*(long *)(param_1 + 0x10) + 0x90);
      do {
        bVar4 = local_70;
        unaff_x20 = CONCAT71(uStack_6f,local_70);
        if (local_68._1_1_ == '\x02') {
          uVar7 = 0;
          goto LAB_0099e84c;
        }
        cVar5 = (char)local_68;
        auVar15 = <std::io::pipe::PipeReader_as_alloc::io::read::Read>::read
                            (param_1 + 0x18,lVar13 + uVar2,uVar12 - uVar2);
        unaff_x20 = auVar15._8_8_;
        if (auVar15._0_8_ != 1) {
          if ((unaff_x20 == 0) || (uVar12 - uVar2 <= unaff_x20)) goto LAB_0099e814;
          puVar1 = (ulong *)(*(long *)(param_1 + 0x10) + 0x90);
          uVar12 = *puVar1;
          goto LAB_0099e7cc;
        }
        uVar14 = unaff_x20 & 3;
        if (uVar14 < 2) {
          if ((auVar15 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
            cVar6 = *(char *)(unaff_x20 + 0x10);
          }
          else {
            cVar6 = *(char *)(unaff_x20 + 0x1f);
          }
joined_r0x0099e6e8:
          if (cVar6 != '\r') {
LAB_0099e840:
            uVar7 = 0;
            goto LAB_0099e84c;
          }
        }
        else {
          if (uVar14 == 2) {
                    /* try { // try from 0099e6c4 to 0099e6d7 has its CatchHandler @ 0099e8f0 */
            lVar8 = core::io::error::os_functions::get_os_functions();
            cVar6 = (**(code **)(lVar8 + 8))(unaff_x20 >> 0x20);
            goto joined_r0x0099e6e8;
          }
          if ((auVar15._12_4_ & 0xff) != 0xd) goto LAB_0099e840;
        }
        uVar10 = *puVar1;
        do {
          if (cVar5 != (char)(uVar10 >> 0x10)) break;
          uVar9 = *puVar1;
          if (uVar9 == uVar10) {
            cVar6 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar11) {
              *puVar1 = uVar10 & ((ulong)bVar4 & 0x33 ^ 0xff003f);
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') {
              bVar11 = true;
            }
            else {
              bVar11 = false;
            }
          }
          else {
            bVar11 = false;
            ClearExclusiveLocal();
          }
          uVar10 = uVar9;
        } while (!bVar11);
        if ((1 < uVar14 - 2) && ((auVar15 & (undefined1  [16])0x3) != (undefined1  [16])0x0)) {
          local_68 = unaff_x20 - 1;
          local_70 = 3;
          <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_68);
        }
        <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
        poll_ready(&local_70,param_1,param_2,0);
      } while (local_68._1_1_ != -1);
      uVar7 = 1;
      goto LAB_0099e84c;
    }
  }
  uVar7 = 1;
LAB_0099e84c:
  auVar15._8_8_ = unaff_x20;
  auVar15._0_8_ = uVar7;
  return auVar15;
  while( true ) {
    uVar14 = *puVar1;
    if (uVar14 == uVar12) {
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar11) {
        *puVar1 = uVar12 & ((ulong)bVar4 & 0x33 ^ 0xff003f);
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 == '\0') {
        bVar11 = true;
      }
      else {
        bVar11 = false;
      }
    }
    else {
      bVar11 = false;
      ClearExclusiveLocal();
    }
    uVar12 = uVar14;
    if (bVar11) break;
LAB_0099e7cc:
    if (cVar5 != (char)(uVar12 >> 0x10)) break;
  }
LAB_0099e814:
  uVar12 = uVar2 + unaff_x20;
  if ((ulong)param_3[3] < uVar12) {
    param_3[3] = uVar12;
  }
  if (uVar12 < uVar2) {
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed
              ("filled overflow",0xf,&PTR_s__root__cargo_registry_src_index__00af49c8);
  }
  unaff_x20 = 0;
  uVar7 = 0;
  param_3[2] = uVar12;
  goto LAB_0099e84c;
}


// ===== 0099e908  FUN_0099e908 =====

undefined1  [16] FUN_0099e908(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong *puVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  bool bVar10;
  ulong unaff_x20;
  ulong uVar11;
  undefined1 auVar12 [16];
  int *local_78;
  byte local_70;
  undefined7 uStack_6f;
  undefined8 local_68;
  
  iVar2 = *(int *)(param_1 + 0x18);
  <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
  poll_ready(&local_70,param_1,param_2,1);
  if (iVar2 == -1) {
    if (local_68._1_1_ != -1) {
      if (local_68._1_1_ != '\x02') {
                    /* WARNING: Subroutine does not return */
        core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af4998);
      }
      unaff_x20 = CONCAT71(uStack_6f,local_70);
      uVar6 = 1;
      goto LAB_0099eb54;
    }
  }
  else if (local_68._1_1_ != -1) {
    puVar1 = (ulong *)(*(long *)(param_1 + 0x10) + 0x90);
    do {
      bVar3 = local_70;
      unaff_x20 = CONCAT71(uStack_6f,local_70);
      if (local_68._1_1_ == '\x02') {
        uVar6 = 1;
        goto LAB_0099eb54;
      }
      cVar4 = (char)local_68;
      local_78 = (int *)(param_1 + 0x18);
      auVar12 = <&mio::sys::unix::pipe::Sender_as_core::io::write::Write>::write
                          (&local_78,param_3,param_4);
      unaff_x20 = auVar12._8_8_;
      if (auVar12._0_8_ != 1) {
        uVar6 = 0;
        if ((unaff_x20 == 0) || (param_4 <= unaff_x20)) goto LAB_0099eb54;
        puVar1 = (ulong *)(*(long *)(param_1 + 0x10) + 0x90);
        uVar11 = *puVar1;
        goto LAB_0099eaf8;
      }
      uVar11 = unaff_x20 & 3;
      if (uVar11 < 2) {
        if ((auVar12 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
          cVar5 = *(char *)(unaff_x20 + 0x10);
        }
        else {
          cVar5 = *(char *)(unaff_x20 + 0x1f);
        }
joined_r0x0099ea14:
        if (cVar5 != '\r') {
LAB_0099eb40:
          uVar6 = 1;
          goto LAB_0099eb54;
        }
      }
      else {
        if (uVar11 == 2) {
                    /* try { // try from 0099e9f0 to 0099ea03 has its CatchHandler @ 0099eba0 */
          lVar7 = core::io::error::os_functions::get_os_functions();
          cVar5 = (**(code **)(lVar7 + 8))(unaff_x20 >> 0x20);
          goto joined_r0x0099ea14;
        }
        if ((auVar12._12_4_ & 0xff) != 0xd) goto LAB_0099eb40;
      }
      uVar9 = *puVar1;
      do {
        if (cVar4 != (char)(uVar9 >> 0x10)) break;
        uVar8 = *puVar1;
        if (uVar8 == uVar9) {
          cVar5 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar10) {
            *puVar1 = uVar9 & ((ulong)bVar3 & 0x33 ^ 0xff003f);
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
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
        uVar9 = uVar8;
      } while (!bVar10);
      if ((1 < uVar11 - 2) && ((auVar12 & (undefined1  [16])0x3) != (undefined1  [16])0x0)) {
        local_68 = unaff_x20 - 1;
        local_70 = 3;
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_68);
      }
      <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
      poll_ready(&local_70,param_1,param_2,1);
    } while (local_68._1_1_ != -1);
    uVar6 = 2;
    goto LAB_0099eb54;
  }
  uVar6 = 2;
  goto LAB_0099eb54;
  while( true ) {
    uVar9 = *puVar1;
    if (uVar9 == uVar11) {
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar10) {
        *puVar1 = uVar11 & ((ulong)bVar3 & 0x33 ^ 0xff003f);
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 == '\0') {
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
    uVar11 = uVar9;
    if (bVar10) break;
LAB_0099eaf8:
    if (cVar4 != (char)(uVar11 >> 0x10)) break;
  }
  uVar6 = 0;
LAB_0099eb54:
  auVar12._8_8_ = unaff_x20;
  auVar12._0_8_ = uVar6;
  return auVar12;
}


// ===== 0099ebb8  FUN_0099ebb8 =====

undefined1  [16] FUN_0099ebb8(long param_1,undefined8 param_2,long *param_3)

{
  ulong *puVar1;
  ulong uVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  bool bVar11;
  ulong uVar12;
  ulong unaff_x20;
  long lVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  long local_78;
  byte local_70;
  undefined7 uStack_6f;
  undefined8 local_68;
  
  uVar12 = param_3[1];
  uVar2 = param_3[2];
  if (uVar12 < uVar2) {
    <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
    poll_ready(&local_70,param_1,param_2,0);
    if (local_68._1_1_ != -1) {
      if (local_68._1_1_ != '\x02') {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (uVar2,uVar12,uVar12,&PTR_s__root__cargo_registry_src_index__00af4938);
      }
LAB_0099eeac:
      unaff_x20 = CONCAT71(uStack_6f,local_70);
      goto LAB_0099ee2c;
    }
  }
  else {
    lVar13 = *param_3;
    uVar3 = *(uint *)(param_1 + 0x18);
    unaff_x20 = (ulong)uVar3;
    <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
    poll_ready(&local_70,param_1,param_2,0);
    if (uVar3 == 0xffffffff) {
      if (local_68._1_1_ != -1) {
        if (local_68._1_1_ != '\x02') {
                    /* WARNING: Subroutine does not return */
          core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af49b0);
        }
        goto LAB_0099eeac;
      }
    }
    else if (local_68._1_1_ != -1) {
      puVar1 = (ulong *)(*(long *)(param_1 + 0x10) + 0x90);
      do {
        bVar4 = local_70;
        unaff_x20 = CONCAT71(uStack_6f,local_70);
        if (local_68._1_1_ == '\x02') {
          uVar7 = 0;
          goto LAB_0099ee38;
        }
        cVar5 = (char)local_68;
        local_78 = param_1 + 0x18;
        auVar15 = <&mio::sys::unix::pipe::Receiver_as_alloc::io::read::Read>::read
                            (&local_78,lVar13 + uVar2,uVar12 - uVar2);
        unaff_x20 = auVar15._8_8_;
        if (auVar15._0_8_ != 1) {
          if ((unaff_x20 == 0) || (uVar12 - uVar2 <= unaff_x20)) goto LAB_0099ee08;
          puVar1 = (ulong *)(*(long *)(param_1 + 0x10) + 0x90);
          uVar12 = *puVar1;
          goto LAB_0099edc0;
        }
        uVar14 = unaff_x20 & 3;
        if (uVar14 < 2) {
          if ((auVar15 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
            cVar6 = *(char *)(unaff_x20 + 0x10);
          }
          else {
            cVar6 = *(char *)(unaff_x20 + 0x1f);
          }
joined_r0x0099ecdc:
          if (cVar6 != '\r') goto LAB_0099ee2c;
        }
        else {
          if (uVar14 == 2) {
                    /* try { // try from 0099ecb8 to 0099eccb has its CatchHandler @ 0099eed8 */
            lVar8 = core::io::error::os_functions::get_os_functions();
            cVar6 = (**(code **)(lVar8 + 8))(unaff_x20 >> 0x20);
            goto joined_r0x0099ecdc;
          }
          if ((auVar15._12_4_ & 0xff) != 0xd) goto LAB_0099ee2c;
        }
        uVar10 = *puVar1;
        do {
          if (cVar5 != (char)(uVar10 >> 0x10)) break;
          uVar9 = *puVar1;
          if (uVar9 == uVar10) {
            cVar6 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar11) {
              *puVar1 = uVar10 & ((ulong)bVar4 & 0x33 ^ 0xff003f);
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') {
              bVar11 = true;
            }
            else {
              bVar11 = false;
            }
          }
          else {
            bVar11 = false;
            ClearExclusiveLocal();
          }
          uVar10 = uVar9;
        } while (!bVar11);
        if ((1 < uVar14 - 2) && ((auVar15 & (undefined1  [16])0x3) != (undefined1  [16])0x0)) {
          local_68 = unaff_x20 - 1;
          local_70 = 3;
          <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_68);
        }
        <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
        poll_ready(&local_70,param_1,param_2,0);
      } while (local_68._1_1_ != -1);
      uVar7 = 1;
      goto LAB_0099ee38;
    }
  }
  uVar7 = 1;
  goto LAB_0099ee38;
  while( true ) {
    uVar14 = *puVar1;
    if (uVar14 == uVar12) {
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar11) {
        *puVar1 = uVar12 & ((ulong)bVar4 & 0x33 ^ 0xff003f);
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 == '\0') {
        bVar11 = true;
      }
      else {
        bVar11 = false;
      }
    }
    else {
      bVar11 = false;
      ClearExclusiveLocal();
    }
    uVar12 = uVar14;
    if (bVar11) break;
LAB_0099edc0:
    if (cVar5 != (char)(uVar12 >> 0x10)) break;
  }
LAB_0099ee08:
  uVar12 = uVar2 + unaff_x20;
  if ((ulong)param_3[3] < uVar12) {
    param_3[3] = uVar12;
  }
  if (uVar12 < uVar2) {
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed
              ("filled overflow",0xf,&PTR_s__root__cargo_registry_src_index__00af49c8);
  }
  unaff_x20 = 0;
  param_3[2] = uVar12;
LAB_0099ee2c:
  uVar7 = 0;
LAB_0099ee38:
  auVar15._8_8_ = unaff_x20;
  auVar15._0_8_ = uVar7;
  return auVar15;
}


// ===== 0099eef0  tokio::io::util::vec_with_initialized::into_read_buf_parts =====

/* WARNING: Unknown calling convention: __rustcall */
/* tokio::io::util::vec_with_initialized::into_read_buf_parts */

void __rustcall
tokio::io::util::vec_with_initialized::into_read_buf_parts(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  if (uVar1 < uVar2) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (0,uVar2,uVar1,&PTR_s__root__cargo_registry_src_index__00af49f8);
  }
  uVar3 = param_2[3];
  if (uVar3 <= uVar1) {
    *param_1 = *param_2;
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (0,uVar3,uVar1,&PTR_s__root__cargo_registry_src_index__00af49e0);
}


// ===== 0099ef48  FUN_0099ef48 =====

void FUN_0099ef48(long *param_1,long *param_2,long *param_3,undefined1 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *local_40;
  ulong uStack_38;
  long *local_18;
  
  if (param_2 != param_3) {
    param_1[1] = (long)param_2;
    param_1[2] = (long)param_3;
    *(undefined1 *)(param_1 + 3) = param_4;
    *param_1 = 2;
    return;
  }
  uStack_38 = uStack_38 & 0xffffffffffffff00;
  do {
    lVar4 = *param_3;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_3,0x10);
    if (bVar3) {
      *param_3 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  local_40 = param_3;
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 0099efac to 0099efbb has its CatchHandler @ 0099f080 */
    <alloc::sync::[n]::alloc::sync::Arc<tokio::net::tcp::stream::TcpStream>>::drop_slow(&local_40);
  }
  do {
    if (*param_2 != 1) {
      ClearExclusiveLocal();
      plVar5 = param_2;
      goto LAB_0099f04c;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_2,0x10);
    if (bVar3) {
      *param_2 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  DataMemoryBarrier(2,1);
  lVar4 = param_2[2];
  plVar5 = (long *)param_2[3];
  uStack_38 = param_2[5];
  local_40 = (long *)param_2[4];
  if (param_2 != (long *)0xffffffffffffffff) {
    plVar1 = param_2 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      DataMemoryBarrier(2,1);
      free(param_2);
    }
  }
  if (lVar4 != 2) {
    *param_1 = lVar4;
    param_1[1] = (long)plVar5;
    param_1[3] = uStack_38;
    param_1[2] = (long)local_40;
    return;
  }
LAB_0099f04c:
                    /* try { // try from 0099f050 to 0099f073 has its CatchHandler @ 0099f0b0 */
  local_18 = plVar5;
                    /* WARNING: Subroutine does not return */
  core::result::unwrap_failed
            ("TcpStream: try_unwrap failed in reunitetried to reunite halves that are not from the same socket"
             ,0x27,&local_18,&PTR_FUN_00af48b8,&PTR_s__root__cargo_registry_src_index__00af4a10);
}


// ===== 0099f0e4  tokio::runtime::task::waker::drop_waker =====

/* WARNING: Unknown calling convention: __rustcall */
/* tokio::runtime::task::waker::drop_waker */

void __rustcall tokio::runtime::task::waker::drop_waker(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  
  do {
    uVar3 = *param_1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = uVar3 - 0x40;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  uVar3 = uVar3 >> 6;
  if (uVar3 != 1) {
    if (uVar3 != 0) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("assertion failed: prev.ref_count() >= 1",0x27,
               &PTR_s__root__cargo_registry_src_index__00af3f10);
  }
                    /* WARNING: Could not recover jumptable at 0x0099f120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[2] + 0x10))();
  return;
}


// ===== 0099f13c  tokio::runtime::task::waker::clone_waker =====

/* WARNING: Unknown calling convention: __rustcall */
/* tokio::runtime::task::waker::clone_waker */

undefined * __rustcall tokio::runtime::task::waker::clone_waker(long *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  do {
    lVar3 = *param_1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = lVar3 + 0x40;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (-1 < lVar3) {
    return PTR_WAKER_VTABLE_00b00d40;
  }
                    /* WARNING: Subroutine does not return */
  std::process::abort();
}


// ===== 0099f170  tokio::runtime::task::waker::wake_by_ref =====

/* WARNING: Unknown calling convention: __rustcall */
/* tokio::runtime::task::waker::wake_by_ref */

void __rustcall tokio::runtime::task::waker::wake_by_ref(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  bool bVar4;
  ulong uVar5;
  
  uVar3 = *param_1;
  while ((uVar3 & 6) == 0) {
    bVar4 = (uVar3 & 1) == 0;
    if ((uVar3 & 1) == 0) {
      if ((long)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic
                  ("assertion failed: self.0 <= isize::MAX as usize",0x2f,
                   &PTR_s__root__cargo_registry_src_index__00af4018);
      }
      uVar5 = uVar3 + 0x44;
    }
    else {
      uVar5 = uVar3 | 4;
    }
    while (*param_1 == uVar3) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = uVar5;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') goto LAB_0099f20c;
    }
    ClearExclusiveLocal();
    uVar3 = *param_1;
  }
  bVar4 = false;
LAB_0099f20c:
  if (!bVar4) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0099f220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[2] + 8))();
  return;
}


// ===== 0099f248  tokio::runtime::task::waker::wake_by_val =====

/* WARNING: Unknown calling convention: __rustcall */
/* tokio::runtime::task::waker::wake_by_val */

void __rustcall tokio::runtime::task::waker::wake_by_val(ulong *param_1)

{
  bool bVar1;
  char cVar2;
  ulong uVar3;
  
  cVar2 = FUN_009892b8();
  if (cVar2 == '\0') {
    return;
  }
  if (cVar2 == '\x01') {
    (**(code **)(param_1[2] + 8))(param_1);
    do {
      uVar3 = *param_1;
      cVar2 = '\x01';
      bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar1) {
        *param_1 = uVar3 - 0x40;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar3 = uVar3 >> 6;
    if (uVar3 != 1) {
      if (uVar3 != 0) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: prev.ref_count() >= 1",0x27,
                 &PTR_s__root__cargo_registry_src_index__00af3f10);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0099f2bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[2] + 0x10))(param_1);
  return;
}


// ===== 0099f2d8  <std::process::Child_as_tokio::process::imp::orphan::Wait>::try_wait =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::process::Child as tokio::process::imp::orphan::Wait>::try_wait */

void __rustcall <std::process::Child_as_tokio::process::imp::orphan::Wait>::try_wait(void)

{
  (*(code *)PTR_try_wait_00b04db0)();
  return;
}


// ===== 0099f2dc  <tokio::net::tcp::split_owned::ReuniteError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::split_owned::ReuniteError as core::fmt::Display>::fmt */

void __rustcall
<tokio::net::tcp::split_owned::ReuniteError_as_core::fmt::Display>::fmt
          (undefined8 param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0099f2f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))
            (*param_2,"tried to reunite halves that are not from the same socket",0x39);
  return;
}


// ===== 0099f2f8  <tokio::net::addr::sealed::MaybeReady_as_core::future::future::Future>::poll =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::addr::sealed::MaybeReady as core::future::future::Future>::poll */

void __rustcall
<tokio::net::addr::sealed::MaybeReady_as_core::future::future::Future>::poll
          (undefined4 *param_1,short *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 extraout_x12;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long local_60;
  long local_58;
  long lStack_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  long lStack_30;
  undefined8 local_28;
  
  if (*param_2 != -1) {
    uVar3 = *(undefined8 *)(param_2 + 4);
    uVar1 = *(undefined8 *)param_2;
    uVar5 = *(undefined8 *)(param_2 + 0xc);
    uVar4 = *(undefined8 *)(param_2 + 8);
    *param_2 = 2;
    *param_1 = 0;
    *(undefined8 *)(param_1 + 3) = uVar3;
    *(undefined8 *)(param_1 + 1) = uVar1;
    *(undefined8 *)(param_1 + 7) = uVar5;
    *(undefined8 *)(param_1 + 5) = uVar4;
    return;
  }
  FUN_009ac480(&local_60,param_2 + 4);
  if (local_60 == 2) {
    *param_1 = 0xffffffff;
    return;
  }
  if (local_60 == 1) {
    local_38 = local_58;
    lStack_30 = lStack_50;
    local_28 = local_48;
    uVar1 = <core[bcece726f298455b]::io::error::Error_as_core[bcece726f298455b]::convert::From<tokio[8c8895dbfa691109]::runtime::task::error::JoinError>>
            ::from(&local_38);
    *(undefined8 *)(param_1 + 2) = uVar1;
    *param_1 = 2;
    return;
  }
  if (local_58 == 0) {
    uVar2 = 2;
    local_58 = lStack_50;
    local_40 = extraout_x12;
  }
  else {
    uVar2 = 1;
  }
  *param_1 = uVar2;
  *(long *)(param_1 + 2) = local_58;
  *(long *)(param_1 + 4) = lStack_50;
  *(undefined8 *)(param_1 + 6) = local_48;
  *(undefined8 *)(param_1 + 8) = local_40;
  return;
}


// ===== 0099f3e0  <tokio::net::tcp::stream::TcpStream_as_std::os::fd::raw::AsRawFd>::as_raw_fd =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::stream::TcpStream as std::os::fd::raw::AsRawFd>::as_raw_fd */

void __rustcall
<tokio::net::tcp::stream::TcpStream_as_std::os::fd::raw::AsRawFd>::as_raw_fd(long param_1)

{
  if (*(int *)(param_1 + 0x18) != -1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af48f0);
}


// ===== 0099f404  FUN_0099f404 =====

void FUN_0099f404(long *param_1)

{
  void *__ptr;
  undefined4 uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  
  __ptr = (void *)param_1[2];
  uVar1 = 0;
  if (__ptr != (void *)0x0) {
    uVar1 = (undefined4)param_1[1];
  }
  if ((param_1[1] != 0) && (__ptr != (void *)0x0)) {
    puVar3 = (undefined8 *)param_1[3];
    pcVar2 = (code *)*puVar3;
    if (pcVar2 != (code *)0x0) {
                    /* try { // try from 0099f43c to 0099f443 has its CatchHandler @ 0099f494 */
      (*pcVar2)(__ptr);
    }
    if (puVar3[1] != 0) {
      free(__ptr);
    }
  }
  param_1[1] = 0;
  if (*param_1 != 0) {
    <std::thread::scoped::std::thread::scoped::ScopeData>::decrement_num_running_threads
              (*param_1 + 0x10,uVar1);
    return;
  }
  return;
}


// ===== 0099f508  <tokio::io::read_buf::ReadBuf_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::io::read_buf::ReadBuf as core::fmt::Debug>::fmt */

void __rustcall
<tokio::io::read_buf::ReadBuf_as_core::fmt::Debug>::fmt(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [16];
  undefined8 local_28;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_38,param_2,"ReadBuf",7);
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (auStack_38,"filled",6,param_1 + 0x10,&DAT_00af4a48);
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (uVar1,"initializedchannel closed",0xb,param_1 + 0x18,&DAT_00af4a48);
  local_28 = *(undefined8 *)(param_1 + 8);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (uVar1,&DAT_002a12b0,8,&local_28,&DAT_00af4a48);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 0099f5a8  <tokio::net::tcp::stream::TcpStream_as_tokio::io::async_read::AsyncRead>::poll_read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::stream::TcpStream as tokio::io::async_read::AsyncRead>::poll_read */

undefined1  [16] __rustcall
<tokio::net::tcp::stream::TcpStream_as_tokio::io::async_read::AsyncRead>::poll_read
          (long param_1,undefined8 param_2,long *param_3)

{
  ulong *puVar1;
  ulong uVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  bool bVar12;
  ulong unaff_x20;
  long lVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  long lStack_78;
  byte bStack_70;
  undefined7 uStack_6f;
  undefined8 uStack_68;
  
  uVar11 = param_3[1];
  uVar2 = param_3[2];
  if (uVar11 < uVar2) {
    <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
    poll_ready(&bStack_70,param_1,param_2,0);
    if (uStack_68._1_1_ != -1) {
      if (uStack_68._1_1_ != '\x02') {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (uVar2,uVar11,uVar11,&PTR_s__root__cargo_registry_src_index__00af4938);
      }
LAB_0099bcc0:
      unaff_x20 = CONCAT71(uStack_6f,bStack_70);
      goto LAB_0099bc40;
    }
  }
  else {
    lVar13 = *param_3;
    uVar3 = *(uint *)(param_1 + 0x18);
    unaff_x20 = (ulong)uVar3;
    <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
    poll_ready(&bStack_70,param_1,param_2,0);
    if (uVar3 == 0xffffffff) {
      if (uStack_68._1_1_ != -1) {
        if (uStack_68._1_1_ != '\x02') {
                    /* WARNING: Subroutine does not return */
          core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af49b0);
        }
        goto LAB_0099bcc0;
      }
    }
    else if (uStack_68._1_1_ != -1) {
      puVar1 = (ulong *)(*(long *)(param_1 + 0x10) + 0x90);
      do {
        bVar4 = bStack_70;
        unaff_x20 = CONCAT71(uStack_6f,bStack_70);
        if (uStack_68._1_1_ == '\x02') {
          uVar7 = 0;
          goto LAB_0099bc4c;
        }
        cVar5 = (char)uStack_68;
        lStack_78 = param_1 + 0x18;
        auVar15 = <&mio::net::tcp::stream::TcpStream_as_alloc::io::read::Read>::read
                            (&lStack_78,lVar13 + uVar2,uVar11 - uVar2);
        unaff_x20 = auVar15._8_8_;
        if (auVar15._0_8_ != 1) {
          if ((unaff_x20 == 0) || (uVar11 - uVar2 <= unaff_x20)) goto LAB_0099bc1c;
          puVar1 = (ulong *)(*(long *)(param_1 + 0x10) + 0x90);
          uVar11 = *puVar1;
          goto LAB_0099bbd4;
        }
        uVar14 = unaff_x20 & 3;
        if (uVar14 < 2) {
          if ((auVar15 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
            cVar6 = *(char *)(unaff_x20 + 0x10);
          }
          else {
            cVar6 = *(char *)(unaff_x20 + 0x1f);
          }
joined_r0x0099baf0:
          if (cVar6 != '\r') goto LAB_0099bc40;
        }
        else {
          if (uVar14 == 2) {
            lVar8 = core::io::error::os_functions::get_os_functions();
            cVar6 = (**(code **)(lVar8 + 8))(unaff_x20 >> 0x20);
            goto joined_r0x0099baf0;
          }
          if ((auVar15._12_4_ & 0xff) != 0xd) goto LAB_0099bc40;
        }
        uVar10 = *puVar1;
        do {
          if (cVar5 != (char)(uVar10 >> 0x10)) break;
          uVar9 = *puVar1;
          if (uVar9 == uVar10) {
            cVar6 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar12) {
              *puVar1 = uVar10 & ((ulong)bVar4 & 0x33 ^ 0xff003f);
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') {
              bVar12 = true;
            }
            else {
              bVar12 = false;
            }
          }
          else {
            bVar12 = false;
            ClearExclusiveLocal();
          }
          uVar10 = uVar9;
        } while (!bVar12);
        if ((1 < uVar14 - 2) && ((auVar15 & (undefined1  [16])0x3) != (undefined1  [16])0x0)) {
          uStack_68 = unaff_x20 - 1;
          bStack_70 = 3;
          <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&uStack_68);
        }
        <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
        poll_ready(&bStack_70,param_1,param_2,0);
      } while (uStack_68._1_1_ != -1);
      uVar7 = 1;
      goto LAB_0099bc4c;
    }
  }
  uVar7 = 1;
  goto LAB_0099bc4c;
  while( true ) {
    uVar14 = *puVar1;
    if (uVar14 == uVar11) {
      cVar6 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar12) {
        *puVar1 = uVar11 & ((ulong)bVar4 & 0x33 ^ 0xff003f);
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 == '\0') {
        bVar12 = true;
      }
      else {
        bVar12 = false;
      }
    }
    else {
      bVar12 = false;
      ClearExclusiveLocal();
    }
    uVar11 = uVar14;
    if (bVar12) break;
LAB_0099bbd4:
    if (cVar5 != (char)(uVar11 >> 0x10)) break;
  }
LAB_0099bc1c:
  uVar11 = uVar2 + unaff_x20;
  if ((ulong)param_3[3] < uVar11) {
    param_3[3] = uVar11;
  }
  if (uVar11 < uVar2) {
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed
              ("filled overflow",0xf,&PTR_s__root__cargo_registry_src_index__00af49c8);
  }
  unaff_x20 = 0;
  param_3[2] = uVar11;
LAB_0099bc40:
  uVar7 = 0;
LAB_0099bc4c:
  auVar15._8_8_ = unaff_x20;
  auVar15._0_8_ = uVar7;
  return auVar15;
}


// ===== 0099f5ac  <tokio::net::unix::stream::UnixStream_as_tokio::io::async_read::AsyncRead>::poll_read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::stream::UnixStream as tokio::io::async_read::AsyncRead>::poll_read */

undefined1  [16] __rustcall
<tokio::net::unix::stream::UnixStream_as_tokio::io::async_read::AsyncRead>::poll_read
          (long param_1,undefined8 param_2,long *param_3)

{
  ulong *puVar1;
  ulong uVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  bool bVar12;
  ulong unaff_x20;
  long lVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  long lStack_78;
  byte bStack_70;
  undefined7 uStack_6f;
  undefined8 uStack_68;
  
  uVar11 = param_3[1];
  uVar2 = param_3[2];
  if (uVar11 < uVar2) {
    <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
    poll_ready(&bStack_70,param_1,param_2,0);
    if (uStack_68._1_1_ != -1) {
      if (uStack_68._1_1_ != '\x02') {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (uVar2,uVar11,uVar11,&PTR_s__root__cargo_registry_src_index__00af4938);
      }
LAB_0099e028:
      unaff_x20 = CONCAT71(uStack_6f,bStack_70);
      goto LAB_0099dfa8;
    }
  }
  else {
    lVar13 = *param_3;
    uVar3 = *(uint *)(param_1 + 0x18);
    unaff_x20 = (ulong)uVar3;
    <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
    poll_ready(&bStack_70,param_1,param_2,0);
    if (uVar3 == 0xffffffff) {
      if (uStack_68._1_1_ != -1) {
        if (uStack_68._1_1_ != '\x02') {
                    /* WARNING: Subroutine does not return */
          core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af49b0);
        }
        goto LAB_0099e028;
      }
    }
    else if (uStack_68._1_1_ != -1) {
      puVar1 = (ulong *)(*(long *)(param_1 + 0x10) + 0x90);
      do {
        bVar4 = bStack_70;
        unaff_x20 = CONCAT71(uStack_6f,bStack_70);
        if (uStack_68._1_1_ == '\x02') {
          uVar7 = 0;
          goto LAB_0099dfb4;
        }
        cVar5 = (char)uStack_68;
        lStack_78 = param_1 + 0x18;
        auVar15 = <&mio::net::uds::stream::UnixStream_as_alloc::io::read::Read>::read
                            (&lStack_78,lVar13 + uVar2,uVar11 - uVar2);
        unaff_x20 = auVar15._8_8_;
        if (auVar15._0_8_ != 1) {
          if ((unaff_x20 == 0) || (uVar11 - uVar2 <= unaff_x20)) goto LAB_0099df84;
          puVar1 = (ulong *)(*(long *)(param_1 + 0x10) + 0x90);
          uVar11 = *puVar1;
          goto LAB_0099df3c;
        }
        uVar14 = unaff_x20 & 3;
        if (uVar14 < 2) {
          if ((auVar15 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
            cVar6 = *(char *)(unaff_x20 + 0x10);
          }
          else {
            cVar6 = *(char *)(unaff_x20 + 0x1f);
          }
joined_r0x0099de58:
          if (cVar6 != '\r') goto LAB_0099dfa8;
        }
        else {
          if (uVar14 == 2) {
            lVar8 = core::io::error::os_functions::get_os_functions();
            cVar6 = (**(code **)(lVar8 + 8))(unaff_x20 >> 0x20);
            goto joined_r0x0099de58;
          }
          if ((auVar15._12_4_ & 0xff) != 0xd) goto LAB_0099dfa8;
        }
        uVar10 = *puVar1;
        do {
          if (cVar5 != (char)(uVar10 >> 0x10)) break;
          uVar9 = *puVar1;
          if (uVar9 == uVar10) {
            cVar6 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar12) {
              *puVar1 = uVar10 & ((ulong)bVar4 & 0x33 ^ 0xff003f);
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') {
              bVar12 = true;
            }
            else {
              bVar12 = false;
            }
          }
          else {
            bVar12 = false;
            ClearExclusiveLocal();
          }
          uVar10 = uVar9;
        } while (!bVar12);
        if ((1 < uVar14 - 2) && ((auVar15 & (undefined1  [16])0x3) != (undefined1  [16])0x0)) {
          uStack_68 = unaff_x20 - 1;
          bStack_70 = 3;
          <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&uStack_68);
        }
        <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
        poll_ready(&bStack_70,param_1,param_2,0);
      } while (uStack_68._1_1_ != -1);
      uVar7 = 1;
      goto LAB_0099dfb4;
    }
  }
  uVar7 = 1;
  goto LAB_0099dfb4;
  while( true ) {
    uVar14 = *puVar1;
    if (uVar14 == uVar11) {
      cVar6 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar12) {
        *puVar1 = uVar11 & ((ulong)bVar4 & 0x33 ^ 0xff003f);
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 == '\0') {
        bVar12 = true;
      }
      else {
        bVar12 = false;
      }
    }
    else {
      bVar12 = false;
      ClearExclusiveLocal();
    }
    uVar11 = uVar14;
    if (bVar12) break;
LAB_0099df3c:
    if (cVar5 != (char)(uVar11 >> 0x10)) break;
  }
LAB_0099df84:
  uVar11 = uVar2 + unaff_x20;
  if ((ulong)param_3[3] < uVar11) {
    param_3[3] = uVar11;
  }
  if (uVar11 < uVar2) {
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed
              ("filled overflow",0xf,&PTR_s__root__cargo_registry_src_index__00af49c8);
  }
  unaff_x20 = 0;
  param_3[2] = uVar11;
LAB_0099dfa8:
  uVar7 = 0;
LAB_0099dfb4:
  auVar15._8_8_ = unaff_x20;
  auVar15._0_8_ = uVar7;
  return auVar15;
}


// ===== 0099f5b0  <tokio::sync::broadcast::error::RecvError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::sync::broadcast::error::RecvError as core::fmt::Display>::fmt */

void __rustcall
<tokio::sync::broadcast::error::RecvError_as_core::fmt::Display>::fmt
          (long *param_1,undefined8 *param_2)

{
  long *local_28;
  long **pplStack_20;
  code *local_18;
  
  if (*param_1 == 1) {
    local_28 = param_1 + 1;
    pplStack_20 = &local_28;
    local_18 = FUN_0099f7a0;
    core::fmt::write(*param_2,param_2[1],&DAT_002b7069,&pplStack_20);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0099f614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,"channel closed",0xe);
  return;
}


// ===== 0099f618  <tokio::net::tcp::split_owned::OwnedReadHalf_as_tokio::io::async_read::AsyncRead>::poll_read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::split_owned::OwnedReadHalf as tokio::io::async_read::AsyncRead>::poll_read */

void __rustcall
<tokio::net::tcp::split_owned::OwnedReadHalf_as_tokio::io::async_read::AsyncRead>::poll_read
          (long *param_1)

{
  FUN_0099b9cc(*param_1 + 0x10);
  return;
}


// ===== 0099f624  <tokio::net::tcp::stream::TcpStream_as_tokio::io::async_write::AsyncWrite>::poll_write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::stream::TcpStream as tokio::io::async_write::AsyncWrite>::poll_write */

undefined1  [16] __rustcall
<tokio::net::tcp::stream::TcpStream_as_tokio::io::async_write::AsyncWrite>::poll_write
          (long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong *puVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  bool bVar10;
  ulong unaff_x20;
  ulong uVar11;
  undefined1 auVar12 [16];
  int *piStack_78;
  byte bStack_70;
  undefined7 uStack_6f;
  undefined8 uStack_68;
  
  iVar2 = *(int *)(param_1 + 0x18);
  <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
  poll_ready(&bStack_70,param_1,param_2,1);
  if (iVar2 == -1) {
    if (uStack_68._1_1_ != -1) {
      if (uStack_68._1_1_ != '\x02') {
                    /* WARNING: Subroutine does not return */
        core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af4998);
      }
      unaff_x20 = CONCAT71(uStack_6f,bStack_70);
      uVar6 = 1;
      goto LAB_0099bfb4;
    }
  }
  else if (uStack_68._1_1_ != -1) {
    puVar1 = (ulong *)(*(long *)(param_1 + 0x10) + 0x90);
    do {
      bVar3 = bStack_70;
      unaff_x20 = CONCAT71(uStack_6f,bStack_70);
      if (uStack_68._1_1_ == '\x02') {
        uVar6 = 1;
        goto LAB_0099bfb4;
      }
      cVar4 = (char)uStack_68;
      piStack_78 = (int *)(param_1 + 0x18);
      auVar12 = <&mio::net::tcp::stream::TcpStream_as_core::io::write::Write>::write
                          (&piStack_78,param_3,param_4);
      unaff_x20 = auVar12._8_8_;
      if (auVar12._0_8_ != 1) {
        uVar6 = 0;
        if ((unaff_x20 == 0) || (param_4 <= unaff_x20)) goto LAB_0099bfb4;
        puVar1 = (ulong *)(*(long *)(param_1 + 0x10) + 0x90);
        uVar11 = *puVar1;
        goto LAB_0099bf58;
      }
      uVar11 = unaff_x20 & 3;
      if (uVar11 < 2) {
        if ((auVar12 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
          cVar5 = *(char *)(unaff_x20 + 0x10);
        }
        else {
          cVar5 = *(char *)(unaff_x20 + 0x1f);
        }
joined_r0x0099be74:
        if (cVar5 != '\r') {
LAB_0099bfa0:
          uVar6 = 1;
          goto LAB_0099bfb4;
        }
      }
      else {
        if (uVar11 == 2) {
          lVar7 = core::io::error::os_functions::get_os_functions();
          cVar5 = (**(code **)(lVar7 + 8))(unaff_x20 >> 0x20);
          goto joined_r0x0099be74;
        }
        if ((auVar12._12_4_ & 0xff) != 0xd) goto LAB_0099bfa0;
      }
      uVar9 = *puVar1;
      do {
        if (cVar4 != (char)(uVar9 >> 0x10)) break;
        uVar8 = *puVar1;
        if (uVar8 == uVar9) {
          cVar5 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar10) {
            *puVar1 = uVar9 & ((ulong)bVar3 & 0x33 ^ 0xff003f);
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
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
        uVar9 = uVar8;
      } while (!bVar10);
      if ((1 < uVar11 - 2) && ((auVar12 & (undefined1  [16])0x3) != (undefined1  [16])0x0)) {
        uStack_68 = unaff_x20 - 1;
        bStack_70 = 3;
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&uStack_68);
      }
      <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
      poll_ready(&bStack_70,param_1,param_2,1);
    } while (uStack_68._1_1_ != -1);
    uVar6 = 2;
    goto LAB_0099bfb4;
  }
  uVar6 = 2;
  goto LAB_0099bfb4;
  while( true ) {
    uVar9 = *puVar1;
    if (uVar9 == uVar11) {
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar10) {
        *puVar1 = uVar11 & ((ulong)bVar3 & 0x33 ^ 0xff003f);
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 == '\0') {
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
    uVar11 = uVar9;
    if (bVar10) break;
LAB_0099bf58:
    if (cVar4 != (char)(uVar11 >> 0x10)) break;
  }
  uVar6 = 0;
LAB_0099bfb4:
  auVar12._8_8_ = unaff_x20;
  auVar12._0_8_ = uVar6;
  return auVar12;
}


// ===== 0099f628  <tokio::net::tcp::stream::TcpStream_as_tokio::io::async_write::AsyncWrite>::poll_shutdown =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::stream::TcpStream as tokio::io::async_write::AsyncWrite>::poll_shutdown */

undefined1  [16] __rustcall
<tokio::net::tcp::stream::TcpStream_as_tokio::io::async_write::AsyncWrite>::poll_shutdown
          (long param_1)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  
  if (*(int *)(param_1 + 0x18) != -1) {
    uVar2 = <mio::net::tcp::stream::mio::net::tcp::stream::TcpStream>::shutdown
                      ((int *)(param_1 + 0x18),1);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2;
    return auVar1 << 0x40;
  }
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af48f0);
}


// ===== 0099f660  <tokio::net::tcp::stream::TcpStream_as_tokio::io::async_write::AsyncWrite>::poll_write_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::stream::TcpStream as tokio::io::async_write::AsyncWrite>::poll_write_vectored
    */

void __rustcall
<tokio::net::tcp::stream::TcpStream_as_tokio::io::async_write::AsyncWrite>::poll_write_vectored
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_28 = param_1;
  uStack_20 = param_3;
  local_18 = param_4;
  FUN_009a9f94(param_1,param_2,1,&local_28);
  return;
}


// ===== 0099f68c  <tokio::net::unix::stream::UnixStream_as_tokio::io::async_write::AsyncWrite>::poll_write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::stream::UnixStream as tokio::io::async_write::AsyncWrite>::poll_write */

undefined1  [16] __rustcall
<tokio::net::unix::stream::UnixStream_as_tokio::io::async_write::AsyncWrite>::poll_write
          (long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong *puVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  bool bVar10;
  ulong unaff_x20;
  ulong uVar11;
  undefined1 auVar12 [16];
  int *piStack_78;
  byte bStack_70;
  undefined7 uStack_6f;
  undefined8 uStack_68;
  
  iVar2 = *(int *)(param_1 + 0x18);
  <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
  poll_ready(&bStack_70,param_1,param_2,1);
  if (iVar2 == -1) {
    if (uStack_68._1_1_ != -1) {
      if (uStack_68._1_1_ != '\x02') {
                    /* WARNING: Subroutine does not return */
        core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af4998);
      }
      unaff_x20 = CONCAT71(uStack_6f,bStack_70);
      uVar6 = 1;
      goto LAB_0099e2b8;
    }
  }
  else if (uStack_68._1_1_ != -1) {
    puVar1 = (ulong *)(*(long *)(param_1 + 0x10) + 0x90);
    do {
      bVar3 = bStack_70;
      unaff_x20 = CONCAT71(uStack_6f,bStack_70);
      if (uStack_68._1_1_ == '\x02') {
        uVar6 = 1;
        goto LAB_0099e2b8;
      }
      cVar4 = (char)uStack_68;
      piStack_78 = (int *)(param_1 + 0x18);
      auVar12 = <&mio::net::uds::stream::UnixStream_as_core::io::write::Write>::write
                          (&piStack_78,param_3,param_4);
      unaff_x20 = auVar12._8_8_;
      if (auVar12._0_8_ != 1) {
        uVar6 = 0;
        if ((unaff_x20 == 0) || (param_4 <= unaff_x20)) goto LAB_0099e2b8;
        puVar1 = (ulong *)(*(long *)(param_1 + 0x10) + 0x90);
        uVar11 = *puVar1;
        goto LAB_0099e25c;
      }
      uVar11 = unaff_x20 & 3;
      if (uVar11 < 2) {
        if ((auVar12 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
          cVar5 = *(char *)(unaff_x20 + 0x10);
        }
        else {
          cVar5 = *(char *)(unaff_x20 + 0x1f);
        }
joined_r0x0099e178:
        if (cVar5 != '\r') {
LAB_0099e2a4:
          uVar6 = 1;
          goto LAB_0099e2b8;
        }
      }
      else {
        if (uVar11 == 2) {
          lVar7 = core::io::error::os_functions::get_os_functions();
          cVar5 = (**(code **)(lVar7 + 8))(unaff_x20 >> 0x20);
          goto joined_r0x0099e178;
        }
        if ((auVar12._12_4_ & 0xff) != 0xd) goto LAB_0099e2a4;
      }
      uVar9 = *puVar1;
      do {
        if (cVar4 != (char)(uVar9 >> 0x10)) break;
        uVar8 = *puVar1;
        if (uVar8 == uVar9) {
          cVar5 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar10) {
            *puVar1 = uVar9 & ((ulong)bVar3 & 0x33 ^ 0xff003f);
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
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
        uVar9 = uVar8;
      } while (!bVar10);
      if ((1 < uVar11 - 2) && ((auVar12 & (undefined1  [16])0x3) != (undefined1  [16])0x0)) {
        uStack_68 = unaff_x20 - 1;
        bStack_70 = 3;
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&uStack_68);
      }
      <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
      poll_ready(&bStack_70,param_1,param_2,1);
    } while (uStack_68._1_1_ != -1);
    uVar6 = 2;
    goto LAB_0099e2b8;
  }
  uVar6 = 2;
  goto LAB_0099e2b8;
  while( true ) {
    uVar9 = *puVar1;
    if (uVar9 == uVar11) {
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar10) {
        *puVar1 = uVar11 & ((ulong)bVar3 & 0x33 ^ 0xff003f);
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 == '\0') {
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
    uVar11 = uVar9;
    if (bVar10) break;
LAB_0099e25c:
    if (cVar4 != (char)(uVar11 >> 0x10)) break;
  }
  uVar6 = 0;
LAB_0099e2b8:
  auVar12._8_8_ = unaff_x20;
  auVar12._0_8_ = uVar6;
  return auVar12;
}


// ===== 0099f690  <tokio::net::unix::stream::UnixStream_as_tokio::io::async_write::AsyncWrite>::poll_shutdown =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::stream::UnixStream as tokio::io::async_write::AsyncWrite>::poll_shutdown */

undefined1  [16] __rustcall
<tokio::net::unix::stream::UnixStream_as_tokio::io::async_write::AsyncWrite>::poll_shutdown
          (long param_1)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  
  if (*(int *)(param_1 + 0x18) != -1) {
    uVar2 = <mio::net::uds::stream::mio::net::uds::stream::UnixStream>::shutdown
                      ((int *)(param_1 + 0x18),1);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2;
    return auVar1 << 0x40;
  }
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af48f0);
}


// ===== 0099f6c8  <tokio::net::unix::stream::UnixStream_as_tokio::io::async_write::AsyncWrite>::poll_write_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::stream::UnixStream as tokio::io::async_write::AsyncWrite>::poll_write_vectored
    */

void __rustcall
<tokio::net::unix::stream::UnixStream_as_tokio::io::async_write::AsyncWrite>::poll_write_vectored
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_28 = param_1;
  uStack_20 = param_3;
  local_18 = param_4;
  FUN_009aa1b4(param_1,param_2,1,&local_28);
  return;
}


// ===== 0099f6f4  FUN_0099f6f4 =====

void FUN_0099f6f4(undefined8 *param_1)

{
  <std::process::Child_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 0099f6fc  FUN_0099f6fc =====

void FUN_0099f6fc(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Debug>::fmt(*(undefined8 *)*param_1,((undefined8 *)*param_1)[1],param_2);
  return;
}


// ===== 0099f710  FUN_0099f710 =====

void FUN_0099f710(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Debug>::fmt(*param_1,param_1[1],param_2);
  return;
}


// ===== 0099f724  FUN_0099f724 =====

void FUN_0099f724(undefined8 *param_1,long param_2)

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


// ===== 0099f740  FUN_0099f740 =====

void FUN_0099f740(undefined8 *param_1,long param_2)

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


// ===== 0099f75c  FUN_0099f75c =====

void FUN_0099f75c(undefined8 *param_1,long param_2)

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


// ===== 0099f778  FUN_0099f778 =====

void FUN_0099f778(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,"()",2);
  return;
}


// ===== 0099f78c  FUN_0099f78c =====

void FUN_0099f78c(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt(*param_1,param_1[1],param_2);
  return;
}


// ===== 0099f7a0  FUN_0099f7a0 =====

void FUN_0099f7a0(undefined8 *param_1)

{
  <usize_as_core::fmt::Display>::fmt(*param_1);
  return;
}


// ===== 0099f7a8  <tokio::io::util::empty::Empty_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::io::util::empty::Empty as core::fmt::Debug>::fmt */

void __rustcall
<tokio::io::util::empty::Empty_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,"Empty { .. }AtomicWakerchannel empty",0xc);
  return;
}


// ===== 0099f7bc  <tokio::net::tcp::stream::TcpStream_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::stream::TcpStream as core::fmt::Debug>::fmt */

void __rustcall
<tokio::net::tcp::stream::TcpStream_as_core::fmt::Debug>::fmt(long param_1,undefined8 param_2)

{
  undefined1 auStack_30 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,"PollEvented",0xb);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (auStack_30,"io",2,param_1 + 0x18,&PTR_FUN_00af4aa8);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 0099f820  <tokio::sync::task::atomic_waker::AtomicWaker_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::sync::task::atomic_waker::AtomicWaker as core::fmt::Debug>::fmt */

void __rustcall
<tokio::sync::task::atomic_waker::AtomicWaker_as_core::fmt::Debug>::fmt
          (undefined8 param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0099f838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,"AtomicWakerchannel empty",0xb);
  return;
}


// ===== 0099f83c  <tokio::sync::broadcast::error::TryRecvError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::sync::broadcast::error::TryRecvError as core::fmt::Display>::fmt */

void __rustcall
<tokio::sync::broadcast::error::TryRecvError_as_core::fmt::Display>::fmt
          (long *param_1,undefined8 *param_2)

{
  long *local_28;
  long **pplStack_20;
  code *local_18;
  
  if (*param_1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0099f878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2[1] + 0x18))(*param_2,"channel empty",0xd);
    return;
  }
  if (*param_1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0099f860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2[1] + 0x18))(*param_2,"channel closed",0xe);
    return;
  }
  local_28 = param_1 + 1;
  pplStack_20 = &local_28;
  local_18 = FUN_0099f7a0;
  core::fmt::write(*param_2,param_2[1],&DAT_002b7069,&pplStack_20);
  return;
}


// ===== 0099f8c0  FUN_0099f8c0 =====

int * FUN_0099f8c0(int *param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long local_28;
  int local_4;
  
  local_4 = param_1[6];
  param_1[6] = -1;
  if (local_4 != -1) {
    lVar1 = 0x140;
    if (*param_1 == 0) {
      lVar1 = 0xe0;
    }
    if (*(int *)(*(long *)(param_1 + 2) + lVar1 + 0x44) == -1) {
                    /* WARNING: Subroutine does not return */
      core::option::expect_failed
                ("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
                 ,0x68,&PTR_s__root__cargo_registry_src_index__00af4e28);
    }
                    /* try { // try from 0099f910 to 0099f983 has its CatchHandler @ 0099f988 */
    uVar3 = FUN_00982718(*(long *)(param_1 + 2) + lVar1,param_1 + 4,&local_4);
    if (((uVar3 != 0) && (1 < (uVar3 & 3) - 2)) && ((uVar3 & 3) != 0)) {
      local_28 = uVar3 - 1;
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
    }
    uVar2 = close(local_4);
    param_1 = (int *)(ulong)uVar2;
  }
  return param_1;
}


// ===== 0099f9a0  FUN_0099f9a0 =====

int * FUN_0099f9a0(int *param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long local_28;
  int local_4;
  
  local_4 = param_1[6];
  param_1[6] = -1;
  if (local_4 != -1) {
    lVar1 = 0x140;
    if (*param_1 == 0) {
      lVar1 = 0xe0;
    }
    if (*(int *)(*(long *)(param_1 + 2) + lVar1 + 0x44) == -1) {
                    /* WARNING: Subroutine does not return */
      core::option::expect_failed
                ("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
                 ,0x68,&PTR_s__root__cargo_registry_src_index__00af4e28);
    }
                    /* try { // try from 0099f9f0 to 0099fa63 has its CatchHandler @ 0099fa68 */
    uVar3 = FUN_00982ad4(*(long *)(param_1 + 2) + lVar1,param_1 + 4,&local_4);
    if (((uVar3 != 0) && (1 < (uVar3 & 3) - 2)) && ((uVar3 & 3) != 0)) {
      local_28 = uVar3 - 1;
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
    }
    uVar2 = close(local_4);
    param_1 = (int *)(ulong)uVar2;
  }
  return param_1;
}


// ===== 0099fa80  FUN_0099fa80 =====

int * FUN_0099fa80(int *param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long local_28;
  int local_4;
  
  local_4 = param_1[6];
  param_1[6] = -1;
  if (local_4 != -1) {
    lVar1 = 0x140;
    if (*param_1 == 0) {
      lVar1 = 0xe0;
    }
    if (*(int *)(*(long *)(param_1 + 2) + lVar1 + 0x44) == -1) {
                    /* WARNING: Subroutine does not return */
      core::option::expect_failed
                ("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
                 ,0x68,&PTR_s__root__cargo_registry_src_index__00af4e28);
    }
                    /* try { // try from 0099fad0 to 0099fb43 has its CatchHandler @ 0099fb48 */
    uVar3 = FUN_00982e8c(*(long *)(param_1 + 2) + lVar1,param_1 + 4,&local_4);
    if (((uVar3 != 0) && (1 < (uVar3 & 3) - 2)) && ((uVar3 & 3) != 0)) {
      local_28 = uVar3 - 1;
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
    }
    uVar2 = close(local_4);
    param_1 = (int *)(ulong)uVar2;
  }
  return param_1;
}


// ===== 0099fb60  FUN_0099fb60 =====

int * FUN_0099fb60(int *param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long local_28;
  int local_4;
  
  local_4 = param_1[6];
  param_1[6] = -1;
  if (local_4 != -1) {
    lVar1 = 0x140;
    if (*param_1 == 0) {
      lVar1 = 0xe0;
    }
    if (*(int *)(*(long *)(param_1 + 2) + lVar1 + 0x44) == -1) {
                    /* WARNING: Subroutine does not return */
      core::option::expect_failed
                ("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
                 ,0x68,&PTR_s__root__cargo_registry_src_index__00af4e28);
    }
                    /* try { // try from 0099fbb0 to 0099fc23 has its CatchHandler @ 0099fc28 */
    uVar3 = FUN_00983068(*(long *)(param_1 + 2) + lVar1,param_1 + 4,&local_4);
    if (((uVar3 != 0) && (1 < (uVar3 & 3) - 2)) && ((uVar3 & 3) != 0)) {
      local_28 = uVar3 - 1;
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
    }
    uVar2 = close(local_4);
    param_1 = (int *)(ulong)uVar2;
  }
  return param_1;
}


// ===== 0099fc40  FUN_0099fc40 =====

int * FUN_0099fc40(int *param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long local_28;
  int local_4;
  
  local_4 = param_1[6];
  param_1[6] = -1;
  if (local_4 != -1) {
    lVar1 = 0x140;
    if (*param_1 == 0) {
      lVar1 = 0xe0;
    }
    if (*(int *)(*(long *)(param_1 + 2) + lVar1 + 0x44) == -1) {
                    /* WARNING: Subroutine does not return */
      core::option::expect_failed
                ("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
                 ,0x68,&PTR_s__root__cargo_registry_src_index__00af4e28);
    }
                    /* try { // try from 0099fc90 to 0099fd03 has its CatchHandler @ 0099fd08 */
    uVar3 = FUN_00983420(*(long *)(param_1 + 2) + lVar1,param_1 + 4,&local_4);
    if (((uVar3 != 0) && (1 < (uVar3 & 3) - 2)) && ((uVar3 & 3) != 0)) {
      local_28 = uVar3 - 1;
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
    }
    uVar2 = close(local_4);
    param_1 = (int *)(ulong)uVar2;
  }
  return param_1;
}


// ===== 0099fd20  <tokio::net::tcp::split_owned::OwnedWriteHalf_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::split_owned::OwnedWriteHalf as core::ops::drop::Drop>::drop */

void __rustcall
<tokio::net::tcp::split_owned::OwnedWriteHalf_as_core::ops::drop::Drop>::drop(long *param_1)

{
  ulong uVar1;
  long local_18;
  
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    if (*(int *)(*param_1 + 0x28) == -1) {
                    /* WARNING: Subroutine does not return */
      core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af48f0);
    }
    uVar1 = <mio::net::tcp::stream::mio::net::tcp::stream::TcpStream>::shutdown
                      ((int *)(*param_1 + 0x28),1);
    if (((uVar1 != 0) && (1 < (uVar1 & 3) - 2)) && ((uVar1 & 3) != 0)) {
      local_18 = uVar1 - 1;
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
    }
  }
  return;
}


// ===== 0099fd98  <tokio::net::unix::stream::UnixStream_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::stream::UnixStream as core::fmt::Debug>::fmt */

void __rustcall
<tokio::net::unix::stream::UnixStream_as_core::fmt::Debug>::fmt(long param_1,undefined8 param_2)

{
  undefined1 auStack_30 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,"PollEvented",0xb);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (auStack_30,"io",2,param_1 + 0x18,&PTR_FUN_00af4ae8);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 0099fdfc  <tokio::net::tcp::split_owned::OwnedWriteHalf_as_tokio::io::async_write::AsyncWrite>::poll_write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::split_owned::OwnedWriteHalf as tokio::io::async_write::AsyncWrite>::poll_write
    */

void __rustcall
<tokio::net::tcp::split_owned::OwnedWriteHalf_as_tokio::io::async_write::AsyncWrite>::poll_write
          (long *param_1)

{
  FUN_0099bd68(*param_1 + 0x10);
  return;
}


// ===== 0099fe08  <tokio::net::tcp::split_owned::OwnedWriteHalf_as_tokio::io::async_write::AsyncWrite>::poll_shutdown =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::split_owned::OwnedWriteHalf as
   tokio::io::async_write::AsyncWrite>::poll_shutdown */

undefined1  [16] __rustcall
<tokio::net::tcp::split_owned::OwnedWriteHalf_as_tokio::io::async_write::AsyncWrite>::poll_shutdown
          (long *param_1)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  
  if (*(int *)(*param_1 + 0x28) == -1) {
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af48f0);
  }
  uVar2 = <mio::net::tcp::stream::mio::net::tcp::stream::TcpStream>::shutdown
                    ((int *)(*param_1 + 0x28),1);
  if (uVar2 != 0) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2;
    return auVar1 << 0x40;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  return ZEXT816(0) << 0x40;
}


// ===== 0099fe68  <tokio::net::tcp::split_owned::OwnedWriteHalf_as_tokio::io::async_write::AsyncWrite>::poll_write_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::split_owned::OwnedWriteHalf as
   tokio::io::async_write::AsyncWrite>::poll_write_vectored */

void __rustcall
<tokio::net::tcp::split_owned::OwnedWriteHalf_as_tokio::io::async_write::AsyncWrite>::
poll_write_vectored(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_28 = *param_1 + 0x10;
  uStack_20 = param_3;
  local_18 = param_4;
  FUN_009a9f94(local_28,param_2,1,&local_28);
  return;
}


// ===== 0099fe9c  <tokio::net::tcp::stream::TcpStream_as_std::os::fd::owned::AsFd>::as_fd =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::stream::TcpStream as std::os::fd::owned::AsFd>::as_fd */

void __rustcall
<tokio::net::tcp::stream::TcpStream_as_std::os::fd::owned::AsFd>::as_fd(long param_1)

{
  if (*(int *)(param_1 + 0x18) != -1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af48f0);
}


// ===== 0099fec0  FUN_0099fec0 =====

void FUN_0099fec0(int *param_1,undefined8 param_2)

{
  int *local_18;
  
  if (*param_1 != -1) {
    local_18 = param_1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002bd0bc,4,&local_18,&DAT_00af4b48);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd198,4);
  return;
}


// ===== 0099ff1c  FUN_0099ff1c =====

void FUN_0099ff1c(int *param_1,undefined8 param_2)

{
  int *local_18;
  
  if (*param_1 != -1) {
    local_18 = param_1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002bd0bc,4,&local_18,&DAT_00af4b68);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd198,4);
  return;
}


// ===== 0099ff78  FUN_0099ff78 =====

void FUN_0099ff78(int *param_1,undefined8 param_2)

{
  int *local_18;
  
  if (*param_1 != -1) {
    local_18 = param_1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002bd0bc,4,&local_18,&DAT_00af4b88);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd198,4);
  return;
}


// ===== 0099ffd4  FUN_0099ffd4 =====

void FUN_0099ffd4(int *param_1,undefined8 param_2)

{
  int *local_18;
  
  if (*param_1 != -1) {
    local_18 = param_1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002bd0bc,4,&local_18,&DAT_00af4ba8);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd198,4);
  return;
}


// ===== 009a0030  FUN_009a0030 =====

void FUN_009a0030(int *param_1,undefined8 param_2)

{
  int *local_18;
  
  if (*param_1 != -1) {
    local_18 = param_1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002bd0bc,4,&local_18,&DAT_00af4bc8);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd198,4);
  return;
}


// ===== 009a008c  FUN_009a008c =====

void FUN_009a008c(int *param_1,undefined8 param_2)

{
  int *local_18;
  
  if (*param_1 != -1) {
    local_18 = param_1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002bd0bc,4,&local_18,&DAT_00af4be8);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd198,4);
  return;
}


// ===== 009a00e8  FUN_009a00e8 =====

void FUN_009a00e8(int *param_1,undefined8 param_2)

{
  int *local_18;
  
  if (*param_1 != -1) {
    local_18 = param_1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002bd0bc,4,&local_18,&DAT_00af4c08);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd198,4);
  return;
}


// ===== 009a0144  FUN_009a0144 =====

void FUN_009a0144(undefined8 param_1,long param_2)

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


// ===== 009a015c  <tokio::io::read_buf::ReadBuf_as_bytes::buf::buf_mut::BufMut>::advance_mut =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::io::read_buf::ReadBuf as bytes::buf::buf_mut::BufMut>::advance_mut */

void __rustcall
<tokio::io::read_buf::ReadBuf_as_bytes::buf::buf_mut::BufMut>::advance_mut
          (long param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x10) + param_2;
  if (*(ulong *)(param_1 + 0x18) < uVar1) {
    *(ulong *)(param_1 + 0x18) = uVar1;
  }
  if (*(ulong *)(param_1 + 0x10) <= uVar1) {
    *(ulong *)(param_1 + 0x10) = uVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed
            ("filled overflow",0xf,&PTR_s__root__cargo_registry_src_index__00af4c28);
}


// ===== 009a01a0  <tokio::io::read_buf::ReadBuf_as_bytes::buf::buf_mut::BufMut>::chunk_mut =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::io::read_buf::ReadBuf as bytes::buf::buf_mut::BufMut>::chunk_mut */

undefined1  [16] __rustcall
<tokio::io::read_buf::ReadBuf_as_bytes::buf::buf_mut::BufMut>::chunk_mut(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  if (uVar2 <= uVar1) {
    auVar3._8_8_ = uVar1 - uVar2;
    auVar3._0_8_ = *param_1 + uVar2;
    return auVar3;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (uVar2,uVar1,uVar1,&PTR_s__root__cargo_registry_src_index__00af4938);
}


// ===== 009a01d8  <std::process::Child_as_tokio::process::kill::Kill>::kill =====

/* WARNING: Unknown calling convention: __rustcall */
/* <std::process::Child as tokio::process::kill::Kill>::kill */

void __rustcall <std::process::Child_as_tokio::process::kill::Kill>::kill(void)

{
  (*(code *)PTR_kill_00b04e70)();
  return;
}


// ===== 009a01dc  <tokio::net::tcp::stream::TcpStream_as_core::convert::TryFrom<std::net::tcp::TcpStream>>::try_from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::tcp::stream::TcpStream as
   core::convert::TryFrom<std::net::tcp::TcpStream>>::try_from */

void __rustcall
<tokio::net::tcp::stream::TcpStream_as_core::convert::TryFrom<std::net::tcp::TcpStream>>::try_from
          (undefined8 param_1)

{
  <tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::from_std
            (param_1,&PTR_s__root__cargo_registry_src_index__00af4c40);
  return;
}


// ===== 009a01e8  <tokio::net::addr::sealed::OneOrMore_as_core::iter::traits::iterator::Iterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::addr::sealed::OneOrMore as core::iter::traits::iterator::Iterator>::next */

void __rustcall
<tokio::net::addr::sealed::OneOrMore_as_core::iter::traits::iterator::Iterator>::next
          (undefined8 *param_1,int *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (*param_2 != 1) {
    uVar2 = *(undefined8 *)(param_2 + 1);
    uVar4 = *(undefined8 *)(param_2 + 7);
    uVar3 = *(undefined8 *)(param_2 + 5);
    *(undefined2 *)(param_2 + 1) = 2;
    param_1[1] = *(undefined8 *)(param_2 + 3);
    *param_1 = uVar2;
    param_1[3] = uVar4;
    param_1[2] = uVar3;
    return;
  }
  puVar1 = *(undefined8 **)(param_2 + 4);
  if (puVar1 != *(undefined8 **)(param_2 + 8)) {
    uVar3 = puVar1[1];
    uVar2 = *puVar1;
    uVar5 = puVar1[3];
    uVar4 = puVar1[2];
    *(undefined8 **)(param_2 + 4) = puVar1 + 4;
    param_1[1] = uVar3;
    *param_1 = uVar2;
    param_1[3] = uVar5;
    param_1[2] = uVar4;
    return;
  }
  *(undefined2 *)param_1 = 2;
  return;
}


// ===== 009a023c  <tokio::net::addr::sealed::OneOrMore_as_core::iter::traits::iterator::Iterator>::size_hint =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::addr::sealed::OneOrMore as core::iter::traits::iterator::Iterator>::size_hint */

void __rustcall
<tokio::net::addr::sealed::OneOrMore_as_core::iter::traits::iterator::Iterator>::size_hint
          (ulong *param_1,int *param_2)

{
  ulong uVar1;
  
  if (*param_2 == 1) {
    uVar1 = (ulong)(*(long *)(param_2 + 8) - *(long *)(param_2 + 4)) >> 5;
    param_1[2] = uVar1;
    *param_1 = uVar1;
    param_1[1] = 1;
    return;
  }
  uVar1 = (ulong)((short)param_2[1] != 2);
  param_1[2] = uVar1;
  *param_1 = uVar1;
  param_1[1] = 1;
  return;
}


// ===== 009a0284  <tokio::net::unix::stream::UnixStream_as_core::convert::TryFrom<std::os::unix::net::stream::UnixStream>>::try_from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::net::unix::stream::UnixStream as
   core::convert::TryFrom<std::os::unix::net::stream::UnixStream>>::try_from */

void __rustcall
<tokio::net::unix::stream::UnixStream_as_core::convert::TryFrom<std::os::unix::net::stream::UnixStream>>
::try_from(undefined8 param_1)

{
  <tokio::net::unix::stream::tokio::net::unix::stream::UnixStream>::from_std
            (param_1,&PTR_s__root__cargo_registry_src_index__00af4c58);
  return;
}


// ===== 009a0290  FUN_009a0290 =====

void FUN_009a0290(undefined8 *param_1)

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
                    /* try { // try from 009a02f0 to 009a02f3 has its CatchHandler @ 009a0334 */
        <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::io::scheduled_io::ScheduledIo>>::
        drop_slow();
      }
    } while (uVar7 != uVar3 >> 3);
  }
  if (param_1[2] != 0) {
    free((void *)*param_1);
    return;
  }
  return;
}


// ===== 009a0398  FUN_009a0398 =====

void FUN_009a0398(long param_1)

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
  
                    /* try { // try from 009a03b0 to 009a03b7 has its CatchHandler @ 009a0554 */
  FUN_00998e94(param_1 + 0x48);
  if (*(long *)(param_1 + 0x48) != 0) {
    free(*(void **)(param_1 + 0x50));
  }
  plVar4 = *(long **)(param_1 + 0x98);
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
                    /* try { // try from 009a03f4 to 009a03f7 has its CatchHandler @ 009a053c */
      <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Sender<()>>>::drop_slow();
    }
  }
  if (*(long *)(param_1 + 0xa0) != 0) {
                    /* try { // try from 009a0404 to 009a0407 has its CatchHandler @ 009a054c */
    FUN_009a063c();
  }
  lVar5 = *(long *)(param_1 + 0x70);
  if (lVar5 != 0) {
    lVar6 = *(long *)(param_1 + 0x80);
    if (lVar6 != 0) {
      puVar7 = *(undefined8 **)(param_1 + 0x68);
      puVar8 = puVar7 + 1;
      uVar9 = NEON_cmge(*puVar7,0,1);
      uVar9 = uVar9 & 0x8080808080808080;
      do {
        for (; uVar9 == 0; uVar9 = uVar9 & 0x8080808080808080) {
          puVar7 = puVar7 + -0x20;
          uVar9 = NEON_cmge(*puVar8,0,1);
          puVar8 = puVar8 + 1;
        }
        uVar1 = (uVar9 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar9 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
                    /* try { // try from 009a0464 to 009a0467 has its CatchHandler @ 009a05b8 */
        FUN_009c5c70((long)puVar7 + (LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) & 0x78U) * -4 + -0x18);
        lVar6 = lVar6 + -1;
        uVar9 = uVar9 - 1 & uVar9;
      } while (lVar6 != 0);
    }
    if (lVar5 * 0x21 != -0x29) {
      free((void *)(*(long *)(param_1 + 0x68) + lVar5 * -0x20 + -0x20));
    }
  }
  plVar4 = *(long **)(param_1 + 0x30);
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
                    /* try { // try from 009a04bc to 009a04bf has its CatchHandler @ 009a0544 */
    <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
    ::drop_slow();
  }
  plVar4 = *(long **)(param_1 + 0xd0);
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
                    /* try { // try from 009a04e4 to 009a04e7 has its CatchHandler @ 009a0534 */
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow();
    }
  }
  plVar4 = *(long **)(param_1 + 0xe0);
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
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow((undefined8 *)(param_1 + 0xe0));
      return;
    }
  }
  return;
}


// ===== 009a063c  FUN_009a063c =====

void FUN_009a063c(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 009a064c to 009a0653 has its CatchHandler @ 009a06b8 */
  <std::sys::thread::unix::Thread_as_core::ops::drop::Drop>::drop(param_1 + 2);
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
                    /* try { // try from 009a0670 to 009a0677 has its CatchHandler @ 009a06b0 */
    <alloc[c1f8e832b0d782c7]::sync::Arc<std[17aff9129faa4dc5]::thread::thread::Inner,std[17aff9129faa4dc5]::alloc::System>>
    ::drop_slow(param_1);
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
    <alloc::sync::[n]::alloc::sync::Arc<std::thread::lifecycle::Packet<()>>>::drop_slow(param_1 + 1)
    ;
    return;
  }
  return;
}


// ===== 009a0710  FUN_009a0710 =====

void FUN_009a0710(long *param_1)

{
                    /* try { // try from 009a0720 to 009a0723 has its CatchHandler @ 009a0750 */
  FUN_00998e94();
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 009a0774  FUN_009a0774 =====

void FUN_009a0774(ulong *param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  uVar7 = param_1[3];
  if (uVar7 == 0) {
    lVar8 = 0;
    uVar4 = 0;
    lVar6 = 0;
  }
  else {
    uVar4 = *param_1;
    uVar1 = 0;
    if (uVar4 <= param_1[2]) {
      uVar1 = uVar4;
    }
    lVar6 = param_1[2] - uVar1;
    lVar8 = uVar7 - (uVar4 - lVar6);
    if (uVar7 < uVar4 - lVar6 || lVar8 == 0) {
      lVar8 = 0;
      uVar4 = lVar6 + uVar7;
    }
  }
  uVar7 = param_1[1];
                    /* try { // try from 009a07d4 to 009a07d7 has its CatchHandler @ 009a0844 */
  FUN_009976d8(uVar7 + lVar6 * 0x10,uVar4 - lVar6);
                    /* try { // try from 009a07d8 to 009a07e3 has its CatchHandler @ 009a083c */
  FUN_009976d8(uVar7,lVar8);
  if (*param_1 != 0) {
    free((void *)param_1[1]);
  }
  plVar5 = (long *)param_1[4];
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
    <alloc::sync::[n]::alloc::sync::Arc<std::sys::fs::unix::InnerReadDir>>::drop_slow(param_1 + 4);
    return;
  }
  return;
}


// ===== 009a08a0  FUN_009a08a0 =====

void FUN_009a08a0(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
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
                    /* try { // try from 009a08cc to 009a08cf has its CatchHandler @ 009a08f8 */
    <alloc::sync::[n]::alloc::sync::Arc<std::fs::File>>::drop_slow();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    free(*(void **)(param_1 + 0x18));
    return;
  }
  return;
}


// ===== 009a0918  FUN_009a0918 =====

void FUN_009a0918(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (*param_1 != 0) {
    free((void *)param_1[1]);
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
    <alloc::sync::[n]::alloc::sync::Arc<std::fs::File>>::drop_slow(param_1 + 4);
    return;
  }
  return;
}


// ===== 009a0974  FUN_009a0974 =====

void FUN_009a0974(ulong param_1)

{
  long local_18;
  
  if ((1 < (param_1 & 3) - 2) && ((param_1 & 3) != 0)) {
    local_18 = param_1 - 1;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
  }
  return;
}


// ===== 009a09bc  FUN_009a09bc =====

void FUN_009a09bc(long *param_1)

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


// ===== 009a0a08  FUN_009a0a08 =====

void FUN_009a0a08(long *param_1)

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
                    /* try { // try from 009a0a50 to 009a0a53 has its CatchHandler @ 009a0aa0 */
      (**(code **)(*(long *)(lVar5 + 0x10) + 0x10))(*(undefined8 *)(lVar5 + 0x18));
    }
    if (((uint)uVar6 >> 1 & 1) != 0) {
      *(undefined1 *)(lVar5 + 0x38) = 0;
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
        <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<()>>>::drop_slow(param_1);
        return;
      }
    }
  }
  return;
}


// ===== 009a0ad8  FUN_009a0ad8 =====

undefined8 FUN_009a0ad8(undefined8 param_1,undefined8 param_2)

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
  
                    /* try { // try from 009a0af8 to 009a0aff has its CatchHandler @ 009a0c88 */
  _local_60 = <tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::current(param_2);
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
      pcVar4 = (code *)SoftwareBreakpoint(1,0x9a0c44);
      (*pcVar4)();
    }
    uVar6 = *(undefined8 *)(lVar9 + lVar7 + 0x10);
  }
                    /* try { // try from 009a0b78 to 009a0b83 has its CatchHandler @ 009a0c80 */
  uVar6 = FUN_009b8638(param_1,uVar6);
                    /* try { // try from 009a0b84 to 009a0b9b has its CatchHandler @ 009a0c44 */
  auVar11 = <tokio::runtime::blocking::pool::[4]::tokio::runtime::blocking::pool::Spawner>::
            spawn_task(lVar9 + lVar1,uVar6,1,local_60);
  local_28 = auVar11._8_8_;
  if ((auVar11._0_8_ == 1) && (local_28 != 0)) {
    local_50 = &local_28;
    puStack_48 = PTR_fmt_00b00cb0;
                    /* try { // try from 009a0c2c to 009a0c3f has its CatchHandler @ 009a0c98 */
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


// ===== 009a0cf0  FUN_009a0cf0 =====

undefined8 * FUN_009a0cf0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  char cVar2;
  undefined *puVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 local_198 [8];
  long *local_190;
  long local_188;
  long *local_180;
  undefined *puStack_178;
  undefined **local_170;
  undefined8 uStack_168;
  long *local_160;
  long lStack_158;
  long local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long *local_108;
  long local_100;
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
  
                    /* try { // try from 009a0d18 to 009a0d1f has its CatchHandler @ 009a0f38 */
  _local_198 = <tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::current(param_2)
  ;
  puVar3 = PTR_NEXT_ID_00b00cd0;
  lVar7 = SUB168(_local_198,8);
  do {
    local_150 = *(long *)puVar3;
    cVar2 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar5) {
      *(long *)puVar3 = local_150 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0' || local_150 == 0);
  bVar5 = (_local_198 & (undefined1  [16])0x1) == (undefined1  [16])0x0;
  lStack_158 = 0x1e0;
  if (bVar5) {
    lStack_158 = 0x180;
  }
  lStack_158 = lVar7 + lStack_158;
  lVar1 = 0x1c8;
  if (bVar5) {
    lVar1 = 0x168;
  }
  local_160 = *(long **)(lStack_158 + 0x10);
  if (local_160 != (long *)0x0) {
    do {
      lVar8 = *local_160;
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(local_160,0x10);
      if (bVar5) {
        *local_160 = lVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (-1 < lVar8) {
      local_160 = *(long **)(lStack_158 + 0x10);
      lStack_158 = *(long *)(lStack_158 + 0x18);
      do {
        lVar8 = *local_160;
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(local_160,0x10);
        if (bVar5) {
          *local_160 = lVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (-1 < lVar8) goto LAB_009a0da8;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x9a0da8);
    (*pcVar4)();
  }
LAB_009a0da8:
  local_180 = (long *)0xcc;
  puStack_178 = (undefined *)0x0;
  local_170 = &PTR_thunk_FUN_00975e94_00af58f8;
  uStack_168 = 0;
  local_148 = 0;
  local_128 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_140 = param_1;
  local_108 = local_160;
  local_100 = lStack_158;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar6 = (undefined8 *)FUN_004b25a4(0x100,0x80);
  if (puVar6 == (undefined8 *)0x0) {
                    /* try { // try from 009a0ec0 to 009a0ecb has its CatchHandler @ 009a0fa8 */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(0x80,0x100);
  }
  puVar6[0x19] = uStack_b8;
  puVar6[0x18] = local_c0;
  puVar6[0x1b] = uStack_a8;
  puVar6[0x1a] = uStack_b0;
  puVar6[0x1d] = uStack_98;
  puVar6[0x1c] = local_a0;
  puVar6[0x1f] = uStack_88;
  puVar6[0x1e] = uStack_90;
  puVar6[0x11] = uStack_f8;
  puVar6[0x10] = local_100;
  puVar6[0x13] = uStack_e8;
  puVar6[0x12] = uStack_f0;
  puVar6[0x15] = uStack_d8;
  puVar6[0x14] = local_e0;
  puVar6[0x17] = uStack_c8;
  puVar6[0x16] = uStack_d0;
  puVar6[9] = uStack_138;
  puVar6[8] = local_140;
  puVar6[0xb] = local_128;
  puVar6[10] = uStack_130;
  puVar6[0xd] = uStack_118;
  puVar6[0xc] = local_120;
  puVar6[0xf] = local_108;
  puVar6[0xe] = uStack_110;
  puVar6[1] = puStack_178;
  *puVar6 = local_180;
  puVar6[3] = uStack_168;
  puVar6[2] = local_170;
  puVar6[5] = lStack_158;
  puVar6[4] = local_160;
  puVar6[7] = CONCAT44(uStack_144,local_148);
  puVar6[6] = local_150;
                    /* try { // try from 009a0e30 to 009a0e43 has its CatchHandler @ 009a0efc */
  auVar9 = <tokio::runtime::blocking::pool::[4]::tokio::runtime::blocking::pool::Spawner>::
           spawn_task(lVar7 + lVar1,puVar6,1,local_198);
  local_188 = auVar9._8_8_;
  if ((auVar9._0_8_ == 1) && (local_188 != 0)) {
    local_180 = &local_188;
    puStack_178 = PTR_fmt_00b00cb0;
                    /* try { // try from 009a0ee4 to 009a0ef7 has its CatchHandler @ 009a0f60 */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_002a27dd,&local_180,param_2);
  }
  if (local_198 == (undefined1  [8])0x0) {
    do {
      lVar7 = *local_190;
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(local_190,0x10);
      if (bVar5) {
        *local_190 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>>::
      drop_slow(&local_190);
    }
  }
  else {
    do {
      lVar7 = *local_190;
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(local_190,0x10);
      if (bVar5) {
        *local_190 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>>
      ::drop_slow(&local_190);
    }
  }
  return puVar6;
}


// ===== 009a0fcc  FUN_009a0fcc =====

undefined8 FUN_009a0fcc(undefined8 param_1,undefined8 param_2)

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
  
                    /* try { // try from 009a0fec to 009a0ff3 has its CatchHandler @ 009a117c */
  _local_60 = <tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::current(param_2);
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
      pcVar4 = (code *)SoftwareBreakpoint(1,0x9a1138);
      (*pcVar4)();
    }
    uVar6 = *(undefined8 *)(lVar9 + lVar7 + 0x10);
  }
                    /* try { // try from 009a106c to 009a1077 has its CatchHandler @ 009a1174 */
  uVar6 = FUN_009b874c(param_1,uVar6);
                    /* try { // try from 009a1078 to 009a108f has its CatchHandler @ 009a1138 */
  auVar11 = <tokio::runtime::blocking::pool::[4]::tokio::runtime::blocking::pool::Spawner>::
            spawn_task(lVar9 + lVar1,uVar6,1,local_60);
  local_28 = auVar11._8_8_;
  if ((auVar11._0_8_ == 1) && (local_28 != 0)) {
    local_50 = &local_28;
    puStack_48 = PTR_fmt_00b00cb0;
                    /* try { // try from 009a1120 to 009a1133 has its CatchHandler @ 009a119c */
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


// ===== 009a11f4  FUN_009a11f4 =====

undefined8 FUN_009a11f4(undefined8 param_1,undefined8 param_2)

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
  
                    /* try { // try from 009a1214 to 009a121b has its CatchHandler @ 009a13a4 */
  _local_60 = <tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::current(param_2);
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
      pcVar4 = (code *)SoftwareBreakpoint(1,0x9a1360);
      (*pcVar4)();
    }
    uVar6 = *(undefined8 *)(lVar9 + lVar7 + 0x10);
  }
                    /* try { // try from 009a1294 to 009a129f has its CatchHandler @ 009a139c */
  uVar6 = FUN_009b8860(param_1,uVar6);
                    /* try { // try from 009a12a0 to 009a12b7 has its CatchHandler @ 009a1360 */
  auVar11 = <tokio::runtime::blocking::pool::[4]::tokio::runtime::blocking::pool::Spawner>::
            spawn_task(lVar9 + lVar1,uVar6,1,local_60);
  local_28 = auVar11._8_8_;
  if ((auVar11._0_8_ == 1) && (local_28 != 0)) {
    local_50 = &local_28;
    puStack_48 = PTR_fmt_00b00cb0;
                    /* try { // try from 009a1348 to 009a135b has its CatchHandler @ 009a13b4 */
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


// ===== 009a140c  FUN_009a140c =====

undefined8 FUN_009a140c(undefined8 param_1,undefined8 param_2)

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
  
                    /* try { // try from 009a142c to 009a1433 has its CatchHandler @ 009a15bc */
  _local_60 = <tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::current(param_2);
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
      pcVar4 = (code *)SoftwareBreakpoint(1,0x9a1578);
      (*pcVar4)();
    }
    uVar6 = *(undefined8 *)(lVar9 + lVar7 + 0x10);
  }
                    /* try { // try from 009a14ac to 009a14b7 has its CatchHandler @ 009a15b4 */
  uVar6 = FUN_009b8bb4(param_1,uVar6);
                    /* try { // try from 009a14b8 to 009a14cf has its CatchHandler @ 009a1578 */
  auVar11 = <tokio::runtime::blocking::pool::[4]::tokio::runtime::blocking::pool::Spawner>::
            spawn_task(lVar9 + lVar1,uVar6,1,local_60);
  local_28 = auVar11._8_8_;
  if ((auVar11._0_8_ == 1) && (local_28 != 0)) {
    local_50 = &local_28;
    puStack_48 = PTR_fmt_00b00cb0;
                    /* try { // try from 009a1560 to 009a1573 has its CatchHandler @ 009a15cc */
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


// ===== 009a1624  FUN_009a1624 =====

undefined8 FUN_009a1624(undefined8 param_1,undefined8 param_2)

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
  
                    /* try { // try from 009a1644 to 009a164b has its CatchHandler @ 009a17d4 */
  _local_60 = <tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::current(param_2);
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
      pcVar4 = (code *)SoftwareBreakpoint(1,0x9a1790);
      (*pcVar4)();
    }
    uVar6 = *(undefined8 *)(lVar9 + lVar7 + 0x10);
  }
                    /* try { // try from 009a16c4 to 009a16cf has its CatchHandler @ 009a17cc */
  uVar6 = FUN_009b8cc8(param_1,uVar6);
                    /* try { // try from 009a16d0 to 009a16e7 has its CatchHandler @ 009a1790 */
  auVar11 = <tokio::runtime::blocking::pool::[4]::tokio::runtime::blocking::pool::Spawner>::
            spawn_task(lVar9 + lVar1,uVar6,1,local_60);
  local_28 = auVar11._8_8_;
  if ((auVar11._0_8_ == 1) && (local_28 != 0)) {
    local_50 = &local_28;
    puStack_48 = PTR_fmt_00b00cb0;
                    /* try { // try from 009a1778 to 009a178b has its CatchHandler @ 009a17f4 */
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


// ===== 009a184c  FUN_009a184c =====

undefined8 FUN_009a184c(undefined8 param_1,undefined8 param_2)

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
  
                    /* try { // try from 009a186c to 009a1873 has its CatchHandler @ 009a19fc */
  _local_60 = <tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::current(param_2);
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
      pcVar4 = (code *)SoftwareBreakpoint(1,0x9a19b8);
      (*pcVar4)();
    }
    uVar6 = *(undefined8 *)(lVar9 + lVar7 + 0x10);
  }
                    /* try { // try from 009a18ec to 009a18f7 has its CatchHandler @ 009a19f4 */
  uVar6 = FUN_009b8dd4(param_1,uVar6);
                    /* try { // try from 009a18f8 to 009a190f has its CatchHandler @ 009a19b8 */
  auVar11 = <tokio::runtime::blocking::pool::[4]::tokio::runtime::blocking::pool::Spawner>::
            spawn_task(lVar9 + lVar1,uVar6,1,local_60);
  local_28 = auVar11._8_8_;
  if ((auVar11._0_8_ == 1) && (local_28 != 0)) {
    local_50 = &local_28;
    puStack_48 = PTR_fmt_00b00cb0;
                    /* try { // try from 009a19a0 to 009a19b3 has its CatchHandler @ 009a1a1c */
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


// ===== 009a1a74  FUN_009a1a74 =====

undefined8 FUN_009a1a74(undefined8 param_1,undefined8 param_2)

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
  
                    /* try { // try from 009a1a94 to 009a1a9b has its CatchHandler @ 009a1c24 */
  _local_60 = <tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::current(param_2);
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
      pcVar4 = (code *)SoftwareBreakpoint(1,0x9a1be0);
      (*pcVar4)();
    }
    uVar6 = *(undefined8 *)(lVar9 + lVar7 + 0x10);
  }
                    /* try { // try from 009a1b14 to 009a1b1f has its CatchHandler @ 009a1c1c */
  uVar6 = FUN_009b8ee0(param_1,uVar6);
                    /* try { // try from 009a1b20 to 009a1b37 has its CatchHandler @ 009a1be0 */
  auVar11 = <tokio::runtime::blocking::pool::[4]::tokio::runtime::blocking::pool::Spawner>::
            spawn_task(lVar9 + lVar1,uVar6,1,local_60);
  local_28 = auVar11._8_8_;
  if ((auVar11._0_8_ == 1) && (local_28 != 0)) {
    local_50 = &local_28;
    puStack_48 = PTR_fmt_00b00cb0;
                    /* try { // try from 009a1bc8 to 009a1bdb has its CatchHandler @ 009a1c44 */
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


// ===== 009a1c9c  FUN_009a1c9c =====

undefined8 FUN_009a1c9c(undefined8 param_1,undefined8 param_2)

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
  
                    /* try { // try from 009a1cbc to 009a1cc3 has its CatchHandler @ 009a1e4c */
  _local_60 = <tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::current(param_2);
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
      pcVar4 = (code *)SoftwareBreakpoint(1,0x9a1e08);
      (*pcVar4)();
    }
    uVar6 = *(undefined8 *)(lVar9 + lVar7 + 0x10);
  }
                    /* try { // try from 009a1d3c to 009a1d47 has its CatchHandler @ 009a1e44 */
  uVar6 = FUN_009b8fec(param_1,uVar6);
                    /* try { // try from 009a1d48 to 009a1d5f has its CatchHandler @ 009a1e08 */
  auVar11 = <tokio::runtime::blocking::pool::[4]::tokio::runtime::blocking::pool::Spawner>::
            spawn_task(lVar9 + lVar1,uVar6,1,local_60);
  local_28 = auVar11._8_8_;
  if ((auVar11._0_8_ == 1) && (local_28 != 0)) {
    local_50 = &local_28;
    puStack_48 = PTR_fmt_00b00cb0;
                    /* try { // try from 009a1df0 to 009a1e03 has its CatchHandler @ 009a1e6c */
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


// ===== 009a1ec4  FUN_009a1ec4 =====

undefined8 FUN_009a1ec4(undefined8 param_1,undefined8 param_2)

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
  
                    /* try { // try from 009a1ee4 to 009a1eeb has its CatchHandler @ 009a2074 */
  _local_60 = <tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::current(param_2);
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
      pcVar4 = (code *)SoftwareBreakpoint(1,0x9a2030);
      (*pcVar4)();
    }
    uVar6 = *(undefined8 *)(lVar9 + lVar7 + 0x10);
  }
                    /* try { // try from 009a1f64 to 009a1f6f has its CatchHandler @ 009a206c */
  uVar6 = FUN_009b90f8(param_1,uVar6);
                    /* try { // try from 009a1f70 to 009a1f87 has its CatchHandler @ 009a2030 */
  auVar11 = <tokio::runtime::blocking::pool::[4]::tokio::runtime::blocking::pool::Spawner>::
            spawn_task(lVar9 + lVar1,uVar6,1,local_60);
  local_28 = auVar11._8_8_;
  if ((auVar11._0_8_ == 1) && (local_28 != 0)) {
    local_50 = &local_28;
    puStack_48 = PTR_fmt_00b00cb0;
                    /* try { // try from 009a2018 to 009a202b has its CatchHandler @ 009a2094 */
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


// ===== 009a20ec  FUN_009a20ec =====

undefined8 FUN_009a20ec(undefined8 param_1,undefined8 param_2)

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
  
                    /* try { // try from 009a210c to 009a2113 has its CatchHandler @ 009a229c */
  _local_60 = <tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::current(param_2);
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
      pcVar4 = (code *)SoftwareBreakpoint(1,0x9a2258);
      (*pcVar4)();
    }
    uVar6 = *(undefined8 *)(lVar9 + lVar7 + 0x10);
  }
                    /* try { // try from 009a218c to 009a2197 has its CatchHandler @ 009a2294 */
  uVar6 = FUN_009b91fc(param_1,uVar6);
                    /* try { // try from 009a2198 to 009a21af has its CatchHandler @ 009a2258 */
  auVar11 = <tokio::runtime::blocking::pool::[4]::tokio::runtime::blocking::pool::Spawner>::
            spawn_task(lVar9 + lVar1,uVar6,1,local_60);
  local_28 = auVar11._8_8_;
  if ((auVar11._0_8_ == 1) && (local_28 != 0)) {
    local_50 = &local_28;
    puStack_48 = PTR_fmt_00b00cb0;
                    /* try { // try from 009a2240 to 009a2253 has its CatchHandler @ 009a22bc */
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


// ===== 009a2314  FUN_009a2314 =====

long * FUN_009a2314(undefined8 param_1)

{
  long lVar1;
  char cVar2;
  undefined *puVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined1 local_50 [8];
  long *local_48;
  undefined1 local_40;
  long local_38;
  
                    /* try { // try from 009a232c to 009a2337 has its CatchHandler @ 009a254c */
  _local_50 = <tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::current
                        (&PTR_s__root__cargo_registry_src_index__00af4c70);
  puVar3 = PTR_NEXT_ID_00b00cd0;
  lVar10 = SUB168(_local_50,8);
  do {
    lVar8 = *(long *)puVar3;
    cVar2 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar5) {
      *(long *)puVar3 = lVar8 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0' || lVar8 == 0);
  bVar5 = (_local_50 & (undefined1  [16])0x1) == (undefined1  [16])0x0;
  lVar8 = 0x1e0;
  if (bVar5) {
    lVar8 = 0x180;
  }
  lVar1 = 0x1c8;
  if (bVar5) {
    lVar1 = 0x168;
  }
  plVar9 = *(long **)(lVar10 + lVar8 + 0x10);
  if (plVar9 == (long *)0x0) {
    uVar6 = 0;
  }
  else {
    do {
      lVar11 = *plVar9;
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = lVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x9a24ac);
      (*pcVar4)();
    }
    uVar6 = *(undefined8 *)(lVar10 + lVar8 + 0x10);
  }
                    /* try { // try from 009a23b0 to 009a23bb has its CatchHandler @ 009a253c */
  plVar9 = (long *)FUN_009b897c(param_1,uVar6);
                    /* try { // try from 009a23bc to 009a23d3 has its CatchHandler @ 009a2500 */
  auVar12 = <tokio::runtime::blocking::pool::[4]::tokio::runtime::blocking::pool::Spawner>::
            spawn_task(lVar10 + lVar1,plVar9,0,local_50);
  uVar7 = auVar12._8_8_;
  if (auVar12._0_8_ == 0) goto LAB_009a2428;
  if (((uVar7 != 0) && (1 < (uVar7 & 3) - 2)) &&
     ((auVar12 & (undefined1  [16])0x3) != (undefined1  [16])0x0)) {
    local_38 = uVar7 - 1;
    local_40 = 3;
                    /* try { // try from 009a2404 to 009a240b has its CatchHandler @ 009a24c4 */
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_38);
  }
  if (*plVar9 == 0xcc) {
    cVar2 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar5) {
      *plVar9 = 0x84;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 != '\0') goto LAB_009a24b0;
  }
  else {
    ClearExclusiveLocal();
LAB_009a24b0:
                    /* try { // try from 009a24b8 to 009a24bf has its CatchHandler @ 009a253c */
    (**(code **)(plVar9[2] + 0x20))(plVar9);
  }
  plVar9 = (long *)0x0;
LAB_009a2428:
  if (local_50 == (undefined1  [8])0x0) {
    do {
      lVar10 = *local_48;
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(local_48,0x10);
      if (bVar5) {
        *local_48 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>>::
      drop_slow(&local_48);
      return plVar9;
    }
  }
  else {
    do {
      lVar10 = *local_48;
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(local_48,0x10);
      if (bVar5) {
        *local_48 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>>
      ::drop_slow(&local_48);
    }
  }
  return plVar9;
}


// ===== 009a2564  FUN_009a2564 =====

long * FUN_009a2564(undefined8 param_1)

{
  long lVar1;
  char cVar2;
  undefined *puVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined1 local_50 [8];
  long *local_48;
  undefined1 local_40;
  long local_38;
  
                    /* try { // try from 009a257c to 009a2587 has its CatchHandler @ 009a279c */
  _local_50 = <tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::current
                        (&PTR_s__root__cargo_registry_src_index__00af4c70);
  puVar3 = PTR_NEXT_ID_00b00cd0;
  lVar10 = SUB168(_local_50,8);
  do {
    lVar8 = *(long *)puVar3;
    cVar2 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar5) {
      *(long *)puVar3 = lVar8 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0' || lVar8 == 0);
  bVar5 = (_local_50 & (undefined1  [16])0x1) == (undefined1  [16])0x0;
  lVar8 = 0x1e0;
  if (bVar5) {
    lVar8 = 0x180;
  }
  lVar1 = 0x1c8;
  if (bVar5) {
    lVar1 = 0x168;
  }
  plVar9 = *(long **)(lVar10 + lVar8 + 0x10);
  if (plVar9 == (long *)0x0) {
    uVar6 = 0;
  }
  else {
    do {
      lVar11 = *plVar9;
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = lVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x9a26fc);
      (*pcVar4)();
    }
    uVar6 = *(undefined8 *)(lVar10 + lVar8 + 0x10);
  }
                    /* try { // try from 009a2600 to 009a260b has its CatchHandler @ 009a278c */
  plVar9 = (long *)FUN_009b8a98(param_1,uVar6);
                    /* try { // try from 009a260c to 009a2623 has its CatchHandler @ 009a2750 */
  auVar12 = <tokio::runtime::blocking::pool::[4]::tokio::runtime::blocking::pool::Spawner>::
            spawn_task(lVar10 + lVar1,plVar9,0,local_50);
  uVar7 = auVar12._8_8_;
  if (auVar12._0_8_ == 0) goto LAB_009a2678;
  if (((uVar7 != 0) && (1 < (uVar7 & 3) - 2)) &&
     ((auVar12 & (undefined1  [16])0x3) != (undefined1  [16])0x0)) {
    local_38 = uVar7 - 1;
    local_40 = 3;
                    /* try { // try from 009a2654 to 009a265b has its CatchHandler @ 009a2714 */
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_38);
  }
  if (*plVar9 == 0xcc) {
    cVar2 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar5) {
      *plVar9 = 0x84;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 != '\0') goto LAB_009a2700;
  }
  else {
    ClearExclusiveLocal();
LAB_009a2700:
                    /* try { // try from 009a2708 to 009a270f has its CatchHandler @ 009a278c */
    (**(code **)(plVar9[2] + 0x20))(plVar9);
  }
  plVar9 = (long *)0x0;
LAB_009a2678:
  if (local_50 == (undefined1  [8])0x0) {
    do {
      lVar10 = *local_48;
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(local_48,0x10);
      if (bVar5) {
        *local_48 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>>::
      drop_slow(&local_48);
      return plVar9;
    }
  }
  else {
    do {
      lVar10 = *local_48;
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(local_48,0x10);
      if (bVar5) {
        *local_48 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>>
      ::drop_slow(&local_48);
    }
  }
  return plVar9;
}


// ===== 009a27b4  <tokio::runtime::metrics::runtime::tokio::runtime::metrics::runtime::RuntimeMetrics>::num_alive_tasks =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::metrics::runtime::tokio::runtime::metrics::runtime::RuntimeMetrics>::num_alive_tasks
    */

undefined8 __rustcall
<tokio::runtime::metrics::runtime::tokio::runtime::metrics::runtime::RuntimeMetrics>::
num_alive_tasks(int *param_1)

{
  long lVar1;
  
  lVar1 = 0xa0;
  if (*param_1 == 0) {
    lVar1 = 0x90;
  }
  return *(undefined8 *)(*(long *)(param_1 + 2) + lVar1);
}


// ===== 009a27d4  <tokio::runtime::metrics::runtime::tokio::runtime::metrics::runtime::RuntimeMetrics>::global_queue_depth =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::metrics::runtime::tokio::runtime::metrics::runtime::RuntimeMetrics>::global_queue_depth
    */

undefined8 __rustcall
<tokio::runtime::metrics::runtime::tokio::runtime::metrics::runtime::RuntimeMetrics>::
global_queue_depth(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 8) + 0xd0);
}


// ===== 009a27e4  FUN_009a27e4 =====

bool FUN_009a27e4(ulong *param_1,long param_2,undefined8 param_3,uint param_4)

{
  char *pcVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  
  pcVar1 = (char *)(param_2 + 0xd8);
  if (*pcVar1 == '\0') {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar4) {
      *pcVar1 = '\x01';
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_009a2858;
    if ((param_4 & 1) == 0) goto LAB_009a2874;
LAB_009a2820:
    do {
      uVar5 = *param_1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar4) {
        *param_1 = uVar5 - 0x10001;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar4 = (uVar5 & 0xffff) == 1;
    lVar6 = *(long *)(param_2 + 0xf0);
    if (lVar6 != *(long *)(param_2 + 0xe0)) goto LAB_009a28a0;
  }
  else {
    ClearExclusiveLocal();
LAB_009a2858:
    <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
              (param_2 + 0xd8,param_2,0xffffffff);
    if ((param_4 & 1) != 0) goto LAB_009a2820;
LAB_009a2874:
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar4) {
        *param_1 = *param_1 - 0x10000;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar4 = false;
    lVar6 = *(long *)(param_2 + 0xf0);
    if (lVar6 != *(long *)(param_2 + 0xe0)) goto LAB_009a28a0;
  }
                    /* try { // try from 009a289c to 009a289f has its CatchHandler @ 009a2904 */
  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<alloc::boxed::Box<tokio::runtime::scheduler::multi_thread::worker::Core>>>
  ::grow_one();
LAB_009a28a0:
  *(undefined8 *)(*(long *)(param_2 + 0xe8) + lVar6 * 8) = param_3;
  *(long *)(param_2 + 0xf0) = lVar6 + 1;
  do {
    if (*pcVar1 != '\x01') {
      ClearExclusiveLocal();
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(pcVar1,0);
      return bVar4;
    }
    cVar3 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar2) {
      *pcVar1 = '\0';
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  return bVar4;
}


// ===== 009a293c  FUN_009a293c =====

void FUN_009a293c(long *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  code *pcVar6;
  undefined8 extraout_x1;
  undefined8 uVar7;
  ulong uVar8;
  ulong *puVar9;
  char *pcVar10;
  long lVar11;
  undefined1 auVar12 [16];
  
  uVar8 = param_1[1];
  puVar1 = (ulong *)(param_1 + 1);
  if ((uVar8 < 0xfffffffffffffff0) && (((uint)uVar8 >> 3 & 1) == 0)) {
    if (*puVar1 != uVar8) {
      ClearExclusiveLocal();
      goto LAB_009a2994;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = uVar8 + 0x10;
      cVar3 = ExclusiveMonitorsStatus();
    }
    uVar7 = param_2;
    if (cVar3 != '\0') goto LAB_009a2994;
  }
  else {
LAB_009a2994:
    <parking_lot::raw_rwlock::[8]::parking_lot::raw_rwlock::RawRwLock>::lock_shared_slow
              (param_1 + 1,0,param_3,0xffffffff);
    uVar7 = extraout_x1;
  }
  uVar2 = *(uint *)(param_1 + 3);
  if (uVar2 == 0) {
                    /* try { // try from 009a2b34 to 009a2b67 has its CatchHandler @ 009a2b6c */
    core::panicking::panic_const::panic_const_rem_by_zero
              (&PTR_s__root__cargo_registry_src_index__00af3f28);
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x9a2b44);
    (*pcVar6)();
  }
  uVar5 = 0;
  if (uVar2 != 0) {
    uVar5 = *(uint *)(param_4 + 0x40) / uVar2;
  }
  pcVar10 = (char *)(param_1[2] + (ulong)(*(uint *)(param_4 + 0x40) - uVar5 * uVar2) * 0x28);
  if (*pcVar10 == '\0') {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pcVar10,0x10);
    if (bVar4) {
      *pcVar10 = '\x01';
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_009a2b48;
  }
  else {
    ClearExclusiveLocal();
LAB_009a2b48:
    <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
              (pcVar10,uVar7,0xffffffff);
  }
  if (*(long *)(param_4 + 0x18) != -1) {
                    /* try { // try from 009a29e4 to 009a2abb has its CatchHandler @ 009a2b74 */
    FUN_009b83dc(pcVar10 + 8,param_4);
  }
  if (*(char *)((long)param_1 + 0x24) == '\0') {
    *(undefined8 *)(param_4 + 0x18) = param_3;
    *(undefined8 *)(param_4 + 0x10) = param_3;
    auVar12 = FUN_009b82b0(pcVar10 + 8,param_4);
    param_4 = auVar12._8_8_;
    if (auVar12._0_8_ == 1) {
      if (*(long *)(param_4 + 0x18) != -1) {
        *(undefined1 *)(param_4 + 0x38) = 0;
        *(undefined8 *)(param_4 + 0x18) = 0xffffffffffffffff;
        puVar9 = (ulong *)(param_4 + 0x30);
        do {
          uVar8 = *puVar9;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar9,0x10);
          if (bVar4) {
            *puVar9 = uVar8 | 2;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        goto LAB_009a2a84;
      }
    }
    else if (param_4 <= *param_1 - 1U) {
      FUN_00989458(param_2);
    }
  }
  else if (*(long *)(param_4 + 0x18) != -1) {
    *(undefined1 *)(param_4 + 0x38) = 1;
    puVar9 = (ulong *)(param_4 + 0x30);
    *(undefined8 *)(param_4 + 0x18) = 0xffffffffffffffff;
    do {
      uVar8 = *puVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar9,0x10);
      if (bVar4) {
        *puVar9 = uVar8 | 2;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_009a2a84:
    if (uVar8 == 0) {
      lVar11 = *(long *)(param_4 + 0x20);
      param_2 = *(undefined8 *)(param_4 + 0x28);
      *(undefined8 *)(param_4 + 0x20) = 0;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar9,0x10);
        if (bVar4) {
          *puVar9 = *puVar9 & 0xfffffffffffffffd;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      goto LAB_009a2ac0;
    }
  }
  lVar11 = 0;
LAB_009a2ac0:
  do {
    if (*pcVar10 != '\x01') {
      ClearExclusiveLocal();
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(pcVar10,0);
      break;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pcVar10,0x10);
    if (bVar4) {
      *pcVar10 = '\0';
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    uVar8 = *puVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = uVar8 - 0x10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((uVar8 & 0xfffffffffffffff2) == 0x12) {
    <parking_lot::raw_rwlock::[8]::parking_lot::raw_rwlock::RawRwLock>::unlock_shared_slow(puVar1);
  }
  if (lVar11 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x009a2b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar11 + 8))(param_2);
  return;
}


// ===== 009a2bd8  FUN_009a2bd8 =====

void FUN_009a2bd8(long param_1,long param_2,undefined8 param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  code *pcVar7;
  long extraout_x1;
  long lVar8;
  ulong uVar9;
  char *pcVar10;
  
  uVar9 = *(ulong *)(param_1 + 8);
  puVar1 = (ulong *)(param_1 + 8);
  if ((uVar9 < 0xfffffffffffffff0) && (((uint)uVar9 >> 3 & 1) == 0)) {
    if (*puVar1 != uVar9) {
      ClearExclusiveLocal();
      goto LAB_009a2c24;
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = uVar9 + 0x10;
      cVar4 = ExclusiveMonitorsStatus();
    }
    lVar8 = param_2;
    if (cVar4 != '\0') goto LAB_009a2c24;
  }
  else {
LAB_009a2c24:
    <parking_lot::raw_rwlock::[8]::parking_lot::raw_rwlock::RawRwLock>::lock_shared_slow
              (param_1 + 8,0,param_3,0xffffffff);
    lVar8 = extraout_x1;
  }
  uVar3 = *(uint *)(param_1 + 0x18);
  if (uVar3 == 0) {
                    /* try { // try from 009a2d30 to 009a2d63 has its CatchHandler @ 009a2d98 */
    core::panicking::panic_const::panic_const_rem_by_zero
              (&PTR_s__root__cargo_registry_src_index__00af3f28);
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x9a2d40);
    (*pcVar7)();
  }
  uVar6 = 0;
  if (uVar3 != 0) {
    uVar6 = *(uint *)(param_2 + 0x40) / uVar3;
  }
  pcVar10 = (char *)(*(long *)(param_1 + 0x10) +
                    (ulong)(*(uint *)(param_2 + 0x40) - uVar6 * uVar3) * 0x28);
  if (*pcVar10 == '\0') {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pcVar10,0x10);
    if (bVar5) {
      *pcVar10 = '\x01';
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_009a2c68;
  }
  else {
    ClearExclusiveLocal();
  }
  <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
            (pcVar10,lVar8,0xffffffff);
LAB_009a2c68:
  if (*(long *)(param_2 + 0x18) != -1) {
                    /* try { // try from 009a2c74 to 009a2cd7 has its CatchHandler @ 009a2d68 */
    FUN_009b83dc(pcVar10 + 8,param_2);
  }
  if (*(long *)(param_2 + 0x18) != -1) {
    *(undefined1 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0xffffffffffffffff;
    puVar2 = (ulong *)(param_2 + 0x30);
    do {
      uVar9 = *puVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar5) {
        *puVar2 = uVar9 | 2;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (uVar9 == 0) {
      lVar8 = *(long *)(param_2 + 0x20);
      *(undefined8 *)(param_2 + 0x20) = 0;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar5) {
          *puVar2 = *puVar2 & 0xfffffffffffffffd;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar8 != 0) {
        (**(code **)(lVar8 + 0x18))(*(undefined8 *)(param_2 + 0x28));
      }
    }
  }
  do {
    if (*pcVar10 != '\x01') {
      ClearExclusiveLocal();
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(pcVar10,0);
      break;
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pcVar10,0x10);
    if (bVar5) {
      *pcVar10 = '\0';
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    uVar9 = *puVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = uVar9 - 0x10;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if ((uVar9 & 0xfffffffffffffff2) == 0x12) {
    <parking_lot::raw_rwlock::[8]::parking_lot::raw_rwlock::RawRwLock>::unlock_shared_slow(puVar1);
    return;
  }
  return;
}


// ===== 009a2dd4  FUN_009a2dd4 =====

undefined1  [16] FUN_009a2dd4(long param_1,undefined8 param_2,ulong param_3)

{
  long *plVar1;
  ulong *puVar2;
  ulong *puVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  code *pcVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 uVar11;
  ulong uVar12;
  long *plVar13;
  char *pcVar14;
  long lVar15;
  long lVar16;
  undefined1 auVar17 [16];
  long local_290 [68];
  undefined8 local_70;
  
  local_290[0x40] = 0;
  uVar8 = (uint)param_2;
  uVar12 = *(ulong *)(param_1 + 8);
  puVar2 = (ulong *)(param_1 + 8);
  if ((uVar12 < 0xfffffffffffffff0) && (((uint)uVar12 >> 3 & 1) == 0)) {
    if (*puVar2 != uVar12) {
      ClearExclusiveLocal();
      goto LAB_009a2e38;
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar6) {
      *puVar2 = uVar12 + 0x10;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 != '\0') goto LAB_009a2e38;
  }
  else {
LAB_009a2e38:
                    /* try { // try from 009a2e38 to 009a2e47 has its CatchHandler @ 009a3164 */
    <parking_lot::raw_rwlock::[8]::parking_lot::raw_rwlock::RawRwLock>::lock_shared_slow
              (param_1 + 8,0,param_3,0xffffffff);
    param_2 = extraout_x1;
  }
  uVar4 = *(uint *)(param_1 + 0x18);
  if (uVar4 == 0) {
                    /* try { // try from 009a3108 to 009a3127 has its CatchHandler @ 009a316c */
    core::panicking::panic_const::panic_const_rem_by_zero
              (&PTR_s__root__cargo_registry_src_index__00af3f28);
LAB_009a314c:
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x9a3150);
    (*pcVar10)();
  }
  uVar7 = 0;
  if (uVar4 != 0) {
    uVar7 = uVar8 / uVar4;
  }
  pcVar14 = (char *)(*(long *)(param_1 + 0x10) + (ulong)(uVar8 - uVar7 * uVar4) * 0x28);
  if (*pcVar14 == '\0') {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(pcVar14,0x10);
    if (bVar6) {
      *pcVar14 = '\x01';
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_009a2e78;
  }
  else {
    ClearExclusiveLocal();
  }
  <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
            (pcVar14,param_2,0xffffffff);
LAB_009a2e78:
  if (param_3 <= *(ulong *)(pcVar14 + 0x10)) {
    param_3 = *(ulong *)(pcVar14 + 0x10);
  }
LAB_009a2e94:
                    /* try { // try from 009a2e94 to 009a2e9f has its CatchHandler @ 009a31d0 */
  auVar17 = FUN_009b7f94(pcVar14 + 8,param_3);
  uVar11 = auVar17._8_8_;
  lVar15 = auVar17._0_8_;
  if (lVar15 != 0) {
    if (*(long *)(lVar15 + 0x18) != -1) {
      *(undefined1 *)(lVar15 + 0x38) = 0;
      *(undefined8 *)(lVar15 + 0x18) = 0xffffffffffffffff;
      puVar3 = (ulong *)(lVar15 + 0x30);
      do {
        uVar12 = *puVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar6) {
          *puVar3 = uVar12 | 2;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (uVar12 == 0) {
        lVar16 = *(long *)(lVar15 + 0x20);
        *(undefined8 *)(lVar15 + 0x20) = 0;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar6) {
            *puVar3 = *puVar3 & 0xfffffffffffffffd;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar16 != 0) {
          if (0x1f < (ulong)local_290[0x40]) {
                    /* try { // try from 009a30f4 to 009a3103 has its CatchHandler @ 009a3190 */
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_bounds_check
                      (local_290[0x40],0x20,&PTR_s__root__cargo_registry_src_index__00af4c88);
          }
          lVar9 = local_290[0x40] * 2;
          local_290[local_290[0x40] * 2 + 1] = *(long *)(lVar15 + 0x28);
          local_290[lVar9] = lVar16;
          local_290[0x40] = local_290[0x40] + 1;
          if (0x1f < (ulong)local_290[0x40]) {
            do {
              if (*pcVar14 != '\x01') {
                ClearExclusiveLocal();
                    /* try { // try from 009a2fb8 to 009a2fc3 has its CatchHandler @ 009a3158 */
                <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow
                          (pcVar14,0);
                uVar11 = extraout_x1_02;
                break;
              }
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(pcVar14,0x10);
              if (bVar6) {
                *pcVar14 = '\0';
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            do {
              uVar12 = *puVar2;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar6) {
                *puVar2 = uVar12 - 0x10;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if ((uVar12 & 0xfffffffffffffff2) == 0x12) {
                    /* try { // try from 009a2fa8 to 009a2faf has its CatchHandler @ 009a315c */
              <parking_lot::raw_rwlock::[8]::parking_lot::raw_rwlock::RawRwLock>::unlock_shared_slow
                        (param_1 + 8);
              uVar11 = extraout_x1_01;
            }
            lVar15 = local_290[0x40];
            local_290[0x40] = 0;
            plVar13 = local_290;
            for (lVar15 = lVar15 << 4; lVar15 != 0; lVar15 = lVar15 + -0x10) {
                    /* try { // try from 009a2f6c to 009a2f6f has its CatchHandler @ 009a3174 */
              (**(code **)(*plVar13 + 8))(plVar13[1]);
              uVar11 = extraout_x1_00;
              plVar13 = plVar13 + 2;
            }
            uVar12 = *puVar2;
            if ((uVar12 < 0xfffffffffffffff0) && (((uint)uVar12 >> 3 & 1) == 0)) {
              if (*puVar2 != uVar12) {
                ClearExclusiveLocal();
                goto LAB_009a2fcc;
              }
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar6) {
                *puVar2 = uVar12 + 0x10;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 != '\0') goto LAB_009a2fcc;
            }
            else {
LAB_009a2fcc:
                    /* try { // try from 009a2fcc to 009a2fdb has its CatchHandler @ 009a315c */
              <parking_lot::raw_rwlock::[8]::parking_lot::raw_rwlock::RawRwLock>::lock_shared_slow
                        (param_1 + 8,0);
              uVar11 = extraout_x1_03;
            }
            uVar4 = *(uint *)(param_1 + 0x18);
            if (uVar4 == 0) {
                    /* try { // try from 009a3140 to 009a314b has its CatchHandler @ 009a3160 */
              core::panicking::panic_const::panic_const_rem_by_zero
                        (&PTR_s__root__cargo_registry_src_index__00af3f28);
              goto LAB_009a314c;
            }
            uVar7 = 0;
            if (uVar4 != 0) {
              uVar7 = uVar8 / uVar4;
            }
            pcVar14 = (char *)(*(long *)(param_1 + 0x10) + (ulong)(uVar8 - uVar7 * uVar4) * 0x28);
            if (*pcVar14 == '\0') {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(pcVar14,0x10);
              if (bVar6) {
                *pcVar14 = '\x01';
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') goto LAB_009a2e94;
            }
            else {
              ClearExclusiveLocal();
            }
                    /* try { // try from 009a300c to 009a3017 has its CatchHandler @ 009a3158 */
            <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
                      (pcVar14,uVar11,0xffffffff);
          }
        }
      }
    }
    goto LAB_009a2e94;
  }
                    /* try { // try from 009a301c to 009a3027 has its CatchHandler @ 009a3190 */
  FUN_009b7d88(local_290 + 0x41,pcVar14 + 8);
  do {
    if (*pcVar14 != '\x01') {
      ClearExclusiveLocal();
                    /* try { // try from 009a3130 to 009a313b has its CatchHandler @ 009a3150 */
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(pcVar14,0);
      break;
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(pcVar14,0x10);
    if (bVar6) {
      *pcVar14 = '\0';
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    uVar12 = *puVar2;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar6) {
      *puVar2 = uVar12 - 0x10;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if ((uVar12 & 0xfffffffffffffff2) == 0x12) {
                    /* try { // try from 009a30e8 to 009a30ef has its CatchHandler @ 009a3154 */
    <parking_lot::raw_rwlock::[8]::parking_lot::raw_rwlock::RawRwLock>::unlock_shared_slow(puVar2);
  }
  lVar15 = local_290[0x40];
  local_290[0x40] = 0;
  plVar13 = local_290;
  for (lVar15 = lVar15 << 4; lVar15 != 0; lVar15 = lVar15 + -0x10) {
                    /* try { // try from 009a308c to 009a308f has its CatchHandler @ 009a31b8 */
    (**(code **)(*plVar13 + 8))(plVar13[1]);
    plVar13 = plVar13 + 2;
  }
  plVar13 = local_290 + 1;
  lVar15 = local_290[0x40] + 1;
  while (lVar15 = lVar15 + -1, lVar15 != 0) {
    plVar1 = plVar13 + -1;
    lVar16 = *plVar13;
    plVar13 = plVar13 + 2;
                    /* try { // try from 009a30b8 to 009a30bb has its CatchHandler @ 009a3194 */
    (**(code **)(*plVar1 + 0x18))(lVar16);
  }
  auVar17._8_8_ = local_70;
  auVar17._0_8_ = local_290[0x41];
  return auVar17;
}


// ===== 009a323c  FUN_009a323c =====

void FUN_009a323c(ulong *param_1)

{
  ulong uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 local_60 [12];
  
  local_60 = <std::time::std::time::Instant>::now();
  auVar11 = <std::time::std::time::Instant>::duration_since(local_60,param_1[5],(int)param_1[6]);
  uVar9 = param_1[4];
  uVar8 = auVar11._0_8_ * 1000;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = auVar11._0_8_;
  lVar6 = SUB168(auVar12 * ZEXT816(1000),8);
  uVar1 = (auVar11._8_8_ & 0xffffffff) / 1000000;
  uVar5 = uVar8 + uVar1;
  if (CARRY8(uVar8,uVar1)) {
    lVar6 = lVar6 + 1;
  }
  if (0xfffffffffffffffc < uVar5) {
    uVar5 = 0xfffffffffffffffd;
  }
  uVar1 = 0xfffffffffffffffd;
  if (lVar6 == 0) {
    uVar1 = uVar5;
  }
  lVar6 = FUN_009b2398(0);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    std::thread::local::panic_access_error(&PTR_s__nix_store_8006w282fgsx3273c878b_00af36e0);
  }
  if ((*(uint *)(lVar6 + 0x38) & 1) == 0) {
    uVar3 = FUN_009c64a0();
    uVar7 = (uint)((ulong)uVar3 >> 0x20);
    uVar2 = (uint)uVar3;
    if (uVar2 < 2) {
      uVar2 = 1;
    }
  }
  else {
    uVar7 = *(uint *)(lVar6 + 0x3c);
    uVar2 = *(uint *)(lVar6 + 0x40);
  }
  uVar7 = uVar7 ^ uVar7 << 0x11;
  *(undefined4 *)(lVar6 + 0x38) = 1;
  *(uint *)(lVar6 + 0x3c) = uVar2;
  uVar7 = uVar2 >> 0x10 ^ uVar7 >> 7 ^ uVar2 ^ uVar7;
  *(uint *)(lVar6 + 0x40) = uVar7;
  uVar9 = (ulong)(uint)uVar9 * (ulong)(uVar7 + uVar2);
  iVar10 = (int)param_1[4];
  uVar5 = uVar9 >> 0x20;
  uVar4 = (uint)(uVar9 >> 0x20);
  uVar2 = iVar10 + uVar4;
  uVar7 = uVar2;
  if (uVar2 <= uVar4) {
    uVar7 = uVar4;
  }
  do {
    if (uVar7 == (uint)uVar5) {
      uVar9 = 0;
      goto LAB_009a3390;
    }
    uVar4 = (uint)uVar5 + 1;
    auVar12 = FUN_009a2dd4(param_1,uVar5,uVar1);
    uVar9 = auVar12._8_8_;
    iVar10 = iVar10 + -1;
    uVar5 = (ulong)uVar4;
  } while ((auVar12 & (undefined1  [16])0x1) == (undefined1  [16])0x0);
  uVar5 = uVar9;
  if (uVar4 < uVar2) {
    do {
      auVar12 = FUN_009a2dd4(param_1,uVar4,uVar1);
      uVar9 = uVar5;
      if (auVar12._8_8_ <= uVar5) {
        uVar9 = auVar12._8_8_;
      }
      if ((auVar12 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
        uVar9 = uVar5;
      }
      iVar10 = iVar10 + -1;
      uVar5 = uVar9;
      uVar4 = uVar4 + 1;
    } while (iVar10 != 0);
  }
  if (uVar9 < 2) {
    uVar9 = 1;
  }
LAB_009a3390:
  *param_1 = uVar9;
  return;
}


// ===== 009a33bc  FUN_009a33bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009a33bc(long *param_1,undefined8 param_2,ulong param_3)

{
  char *pcVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  void *pvVar13;
  long *plVar14;
  code *pcVar15;
  long lVar16;
  undefined8 *extraout_x9;
  undefined8 *extraout_x9_00;
  undefined8 *extraout_x9_01;
  undefined8 *extraout_x9_02;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long lVar20;
  long lVar21;
  undefined1 auVar22 [16];
  long local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 *local_100;
  long lStack_f8;
  undefined8 uStack_f0;
  long local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  long local_d0;
  ulong local_c8;
  undefined8 *puStack_c0;
  undefined8 *local_b8;
  ulong local_b0;
  undefined8 *local_a8;
  long local_a0;
  long local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  lVar20 = *param_1;
  param_3 = param_3 & 0xffffffff;
  pcVar1 = (char *)(lVar20 + 0x40);
  if (*pcVar1 == '\0') {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar4) {
      *pcVar1 = '\x01';
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_009a342c;
    cVar3 = *(char *)(lVar20 + 0xc4);
  }
  else {
    ClearExclusiveLocal();
LAB_009a342c:
    <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
              (lVar20 + 0x40,param_2,0xffffffff);
    cVar3 = *(char *)(lVar20 + 0xc4);
  }
  if (cVar3 == '\x01') {
    do {
      if (*pcVar1 != '\x01') {
        ClearExclusiveLocal();
        <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(pcVar1,0);
        return;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar4) {
        *pcVar1 = '\0';
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    return;
  }
  puVar17 = (undefined8 *)(lVar20 + 0x98);
  plVar14 = (long *)*puVar17;
  *(undefined1 *)(lVar20 + 0xc4) = 1;
  if (plVar14 != (long *)0x0) {
    do {
      lVar16 = *plVar14;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *plVar14 = lVar16 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar16 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 009a3470 to 009a3477 has its CatchHandler @ 009a387c */
      <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Sender<()>>>::drop_slow(puVar17);
    }
  }
  *puVar17 = 0;
  if (*(long *)(*param_1 + 200) != 0) {
                    /* try { // try from 009a37b8 to 009a37bf has its CatchHandler @ 009a384c */
    <parking_lot::condvar::parking_lot::condvar::Condvar>::notify_all_slow(*param_1 + 200);
  }
  puVar6 = PTR___RUST_STD_INTERNAL_VAL_00b00bf8;
  uStack_118 = *(undefined8 *)(lVar20 + 0xa8);
  local_120 = *(long *)(lVar20 + 0xa0);
  local_110 = *(undefined8 *)(lVar20 + 0xb0);
  *(undefined8 *)(lVar20 + 0xa0) = 0;
  uVar18 = *(ulong *)puVar6;
  if (uVar18 == 0) {
                    /* try { // try from 009a37c4 to 009a37f3 has its CatchHandler @ 009a3888 */
    uVar18 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
             lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00bf8);
    plVar14 = (long *)pthread_getspecific((pthread_key_t)uVar18);
  }
  else {
    plVar14 = (long *)pthread_getspecific((pthread_key_t)uVar18);
  }
  if (plVar14 < (long *)0x2) {
    plVar14 = (long *)FUN_00996620(uVar18 & 0xffffffff,plVar14,0);
  }
  uVar9 = _UNK_00af4cb8;
  uVar8 = _DAT_00af4cb0;
  uVar7 = _UNK_00af4ca8;
  puVar6 = PTR_DAT_00af4ca0;
  if (plVar14 == (long *)0x0) {
                    /* try { // try from 009a3824 to 009a382f has its CatchHandler @ 009a3888 */
                    /* WARNING: Subroutine does not return */
    std::thread::local::panic_access_error(&PTR_s__nix_store_8006w282fgsx3273c878b_00af36e0);
  }
  lVar21 = plVar14[1];
  lVar16 = *plVar14;
  *plVar14 = *plVar14 + 1;
  lStack_f8 = *(long *)(lVar20 + 0x70);
  local_100 = *(undefined8 **)(lVar20 + 0x68);
  *(undefined8 *)(lVar20 + 0x70) = uVar7;
  *(undefined **)(lVar20 + 0x68) = puVar6;
  local_e8 = *(long *)(lVar20 + 0x80);
  uStack_f0 = *(undefined8 *)(lVar20 + 0x78);
  *(undefined8 *)(lVar20 + 0x80) = uVar9;
  *(undefined8 *)(lVar20 + 0x78) = uVar8;
  uStack_d8 = *(undefined8 *)(lVar20 + 0x90);
  local_e0 = *(undefined8 *)(lVar20 + 0x88);
  *(long *)(lVar20 + 0x90) = lVar21;
  *(long *)(lVar20 + 0x88) = lVar16;
  do {
    if (*pcVar1 != '\x01') {
      ClearExclusiveLocal();
                    /* try { // try from 009a383c to 009a3847 has its CatchHandler @ 009a3894 */
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(pcVar1,0);
      break;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar4) {
      *pcVar1 = '\0';
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
                    /* try { // try from 009a3518 to 009a354b has its CatchHandler @ 009a3894 */
  uVar18 = FUN_009afea8(param_1 + 1,param_2,param_3);
  lVar20 = lStack_f8;
  if ((uVar18 & 1) == 0) {
    if (lStack_f8 != 0) {
      if (local_e8 != 0) {
        puVar19 = local_100 + 1;
        uVar18 = NEON_cmge(*local_100,0,1);
        uVar18 = uVar18 & 0x8080808080808080;
        puVar17 = local_100;
        lVar16 = local_e8;
        do {
          for (; uVar18 == 0; uVar18 = uVar18 & 0x8080808080808080) {
            uVar18 = NEON_cmge(*puVar19,0,1);
            puVar17 = puVar17 + -0x20;
            puVar19 = puVar19 + 1;
          }
          uVar2 = (uVar18 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar18 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
                    /* try { // try from 009a3604 to 009a3607 has its CatchHandler @ 009a38ec */
          FUN_009c5c70((long)puVar17 + (LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) & 0x78U) * -4 + -0x18
                      );
          lVar16 = lVar16 + -1;
          uVar18 = uVar18 - 1 & uVar18;
        } while (lVar16 != 0);
      }
      if (lVar20 * 0x21 != -0x29) {
        free(local_100 + lVar20 * -4 + -4);
      }
    }
    if (local_120 == 0) {
      return;
    }
    FUN_009a063c(&local_120);
    return;
  }
  puVar17 = extraout_x9;
  if (local_120 != 0) {
    local_d0 = local_120;
    puStack_c0 = (undefined8 *)local_110;
    local_c8 = uStack_118;
    auVar22 = FUN_0099da98(&local_d0);
    pvVar13 = auVar22._0_8_;
    puVar17 = extraout_x9_00;
    if (pvVar13 != (void *)0x0) {
      pcVar15 = (code *)*auVar22._8_8_;
      if (pcVar15 != (code *)0x0) {
                    /* try { // try from 009a3560 to 009a3567 has its CatchHandler @ 009a3854 */
        (*pcVar15)(pvVar13);
        puVar17 = extraout_x9_01;
      }
      if (auVar22._8_8_[1] != 0) {
        free(pvVar13);
        puVar17 = extraout_x9_02;
      }
    }
  }
  lVar20 = lStack_f8;
  if (lStack_f8 == 0) {
    local_d0 = 0;
  }
  else {
    local_d0 = 8;
    param_3 = lStack_f8 * 0x21 + 0x29;
    puVar17 = local_100 + lStack_f8 * -4 + -4;
  }
  uVar18 = NEON_cmge(*local_100,0,1);
  local_a8 = local_100 + 1;
  uVar18 = uVar18 & 0x8080808080808080;
  local_a0 = (long)local_100 + lStack_f8 + 1;
  puVar5 = local_a8;
  local_b0 = uVar18;
  puStack_c0 = puVar17;
  local_c8 = param_3;
  local_b8 = local_100;
  local_98 = local_e8;
  puVar19 = local_100;
  lVar16 = local_e8;
  lVar21 = local_80;
  while (local_80 = lVar21, lVar16 != 0) {
    for (; uVar18 == 0; uVar18 = uVar18 & 0x8080808080808080) {
      puVar19 = puVar19 + -0x20;
      uVar18 = NEON_cmge(*puVar5,0,1);
      puVar5 = puVar5 + 1;
    }
    uVar2 = (uVar18 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar18 >> 7 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    lVar16 = lVar16 + -1;
    uVar2 = LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) & 0x78;
    local_80 = *(long *)((long)puVar19 + uVar2 * -4 + -0x18);
    uStack_88 = *(undefined8 *)((long)puVar19 + uVar2 * -4 + -8);
    local_90 = *(undefined8 *)((long)puVar19 + uVar2 * -4 + -0x10);
    uVar18 = uVar18 - 1 & uVar18;
    lVar10 = lVar16;
    uVar2 = uVar18;
    puVar11 = puVar19;
    puVar12 = puVar5;
    if (local_80 == 0) goto joined_r0x009a3730;
                    /* try { // try from 009a36e8 to 009a36ef has its CatchHandler @ 009a38d0 */
    local_78 = local_90;
    uStack_70 = uStack_88;
    auVar22 = FUN_0099da98(&local_80);
    pvVar13 = auVar22._0_8_;
    lVar21 = local_80;
    if (pvVar13 != (void *)0x0) {
      pcVar15 = (code *)*auVar22._8_8_;
      if (pcVar15 != (code *)0x0) {
                    /* try { // try from 009a3704 to 009a370b has its CatchHandler @ 009a38a8 */
        (*pcVar15)(pvVar13);
      }
      lVar21 = local_80;
      if (auVar22._8_8_[1] != 0) {
        free(pvVar13);
        lVar21 = local_80;
      }
    }
  }
LAB_009a3734:
  if ((lVar20 != 0) && (param_3 != 0)) {
    free(puVar17);
  }
  return;
joined_r0x009a3730:
  for (; local_80 = lVar21, local_a8 = puVar12, local_b8 = puVar11, local_b0 = uVar2,
      local_98 = lVar10, lVar16 != 0; lVar16 = lVar16 + -1) {
    for (; uVar18 == 0; uVar18 = uVar18 & 0x8080808080808080) {
      puVar19 = puVar19 + -0x20;
      uVar18 = NEON_cmge(*puVar5,0,1);
      puVar5 = puVar5 + 1;
    }
    uVar2 = (uVar18 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar18 >> 7 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    uVar18 = uVar18 - 1 & uVar18;
    FUN_009c5c70((long)puVar19 + (LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) & 0x78U) * -4 + -0x18);
    lVar10 = local_98;
    uVar2 = local_b0;
    puVar11 = local_b8;
    puVar12 = local_a8;
    lVar21 = local_80;
  }
  goto LAB_009a3734;
}


// ===== 009a393c  <tokio::runtime::blocking::pool::[4]::tokio::runtime::blocking::pool::Spawner>::spawn_task =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::blocking::pool::[4]::tokio::runtime::blocking::pool::Spawner>::spawn_task */

undefined1  [16] __rustcall
<tokio::runtime::blocking::pool::[4]::tokio::runtime::blocking::pool::Spawner>::spawn_task
          (long *param_1,ulong *param_2,undefined1 param_3,ulong *param_4)

{
  char *pcVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  uint uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  long local_e0;
  ulong *puStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  ulong *local_b0;
  long *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  ulong *puStack_60;
  undefined8 local_58;
  
  lVar14 = *param_1;
  pcVar1 = (char *)(lVar14 + 0x40);
  if (*pcVar1 == '\0') {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar6) {
      *pcVar1 = '\x01';
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 != '\0') goto LAB_009a3cc4;
  }
  else {
    ClearExclusiveLocal();
LAB_009a3cc4:
                    /* try { // try from 009a3cc4 to 009a3ccf has its CatchHandler @ 009a3cf8 */
    <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
              (lVar14 + 0x40,param_2,0xffffffff);
  }
  if (*(char *)(lVar14 + 0xc4) == '\x01') {
    do {
      uVar10 = *param_2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar6) {
        *param_2 = uVar10 - 0x40;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (uVar10 < 0x40) {
                    /* try { // try from 009a3c88 to 009a3c9f has its CatchHandler @ 009a3d7c */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: prev.ref_count() >= 1",0x27,
                 &PTR_s__root__cargo_registry_src_index__00af3f10);
    }
                    /* try { // try from 009a39b4 to 009a39bb has its CatchHandler @ 009a3d78 */
    (**(code **)(param_2[2] + 0x30))(param_2);
    puStack_60 = (ulong *)0x0;
LAB_009a39c0:
    uVar9 = 1;
    do {
      param_4 = puStack_60;
      if (*pcVar1 != '\x01') {
        uVar9 = 1;
LAB_009a3ce0:
        ClearExclusiveLocal();
        <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(pcVar1,0);
        break;
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar6) {
        *pcVar1 = '\0';
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  else {
    uVar12 = *(ulong *)(lVar14 + 0x48);
    uVar10 = *(ulong *)(lVar14 + 0x60);
    local_a8 = (long *)CONCAT71(local_a8._1_7_,param_3);
    local_b0 = param_2;
    if (uVar10 == uVar12) {
                    /* try { // try from 009a39f8 to 009a39fb has its CatchHandler @ 009a3d60 */
      <alloc::collections::vec_deque::[4]::alloc::collections::vec_deque::VecDeque<tokio::runtime::blocking::pool::Task>>
      ::grow();
      uVar10 = *(ulong *)(lVar14 + 0x60);
      uVar12 = *(ulong *)(lVar14 + 0x48);
    }
    uVar3 = *(long *)(lVar14 + 0x58) + uVar10;
    *(ulong *)(lVar14 + 0x60) = uVar10 + 1;
    plVar11 = (long *)(lVar14 + 0x108);
    uVar10 = 0;
    if (uVar12 <= uVar3) {
      uVar10 = uVar12;
    }
    puVar4 = (undefined8 *)(*(long *)(lVar14 + 0x50) + (uVar3 - uVar10) * 0x10);
    *puVar4 = param_2;
    *(undefined1 *)(puVar4 + 1) = param_3;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = *plVar11 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (*(long *)(lVar14 + 0x100) == 0) {
      if (*(long *)(lVar14 + 0xf8) != *(long *)(lVar14 + 0xf0)) {
        plVar11 = *(long **)(lVar14 + 0x98);
        if (plVar11 == (long *)0x0) {
                    /* try { // try from 009a3ca4 to 009a3cbb has its CatchHandler @ 009a3d78 */
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    ("assertion failed: shared.shutdown_tx.is_some()",0x2e,
                     &PTR_s__root__cargo_registry_src_index__00af4cc0);
        }
        plVar2 = (long *)(lVar14 + 0xf8);
        do {
          lVar13 = *plVar11;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar6) {
            *plVar11 = lVar13 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar13 < 0) {
LAB_009a3db4:
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x9a3db8);
          (*pcVar7)();
        }
        local_a0 = 0xffffffffffffffff;
        uVar10 = *param_4;
        plVar11 = (long *)param_4[1];
        local_88 = 0;
        uVar15 = *(undefined8 *)(lVar14 + 0x98);
        uVar9 = *(undefined8 *)(lVar14 + 0xb8);
        local_b0 = (ulong *)0x0;
                    /* try { // try from 009a3ae4 to 009a3aef has its CatchHandler @ 009a3d24 */
        (**(code **)(*(long *)(lVar14 + 0x38) + 0x28))
                  (&local_68,
                   *(long *)(lVar14 + 0x30) +
                   (*(long *)(*(long *)(lVar14 + 0x38) + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
                    /* try { // try from 009a3af0 to 009a3aff has its CatchHandler @ 009a3d20 */
        <std::thread::builder::std::thread::builder::Builder>::name(&local_e0,&local_b0,&local_68);
        if (*(long *)(lVar14 + 0x10) == 1) {
          puStack_d8 = *(ulong **)(lVar14 + 0x18);
          local_e0 = 1;
        }
        do {
          lVar13 = *plVar11;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar6) {
            *plVar11 = lVar13 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((uVar10 & 1) == 0) {
          if (lVar13 < 0) goto LAB_009a3db4;
          local_b0 = (ulong *)0x0;
        }
        else {
          if (lVar13 < 0) goto LAB_009a3db4;
          local_b0 = (ulong *)&DAT_00000001;
        }
        uStack_78 = uStack_c8;
        local_80 = local_d0;
        local_70 = local_c0;
                    /* try { // try from 009a3b60 to 009a3b73 has its CatchHandler @ 009a3d78 */
        local_a8 = plVar11;
        local_a0 = uVar15;
        uStack_98 = uVar9;
        FUN_0099a984(&local_68,&local_80,local_e0,puStack_d8,local_b8,0,&local_b0);
        param_4 = puStack_60;
        if (local_68 == 0) {
          uVar10 = (ulong)puStack_60 & 3;
          if (uVar10 < 2) {
            if (uVar10 == 0) {
              uVar8 = (uint)(byte)puStack_60[2];
            }
            else {
              uVar8 = (uint)*(byte *)((long)puStack_60 + 0x1f);
            }
          }
          else if (uVar10 == 2) {
                    /* try { // try from 009a3c20 to 009a3c33 has its CatchHandler @ 009a3d0c */
            lVar14 = core::io::error::os_functions::get_os_functions();
            uVar8 = (**(code **)(lVar14 + 8))((ulong)puStack_60 >> 0x20);
          }
          else {
            uVar8 = (uint)((ulong)puStack_60 >> 0x20);
          }
          if (((uVar8 & 0xff) != 0xd) || (*plVar2 == 0)) goto LAB_009a39c0;
          if ((1 < uVar10 - 2) && (uVar10 != 0)) {
            local_a8 = (long *)((long)puStack_60 + -1);
            local_b0 = (ulong *)CONCAT71(local_b0._1_7_,3);
                    /* try { // try from 009a3c7c to 009a3c83 has its CatchHandler @ 009a3d78 */
            <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_a8);
          }
        }
        else {
          local_e0 = local_68;
          puStack_d8 = puStack_60;
          local_d0 = local_58;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar6) {
              *plVar2 = *plVar2 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          *(long *)(lVar14 + 0xb8) = *(long *)(lVar14 + 0xb8) + 1;
                    /* try { // try from 009a3ba4 to 009a3bc7 has its CatchHandler @ 009a3d5c */
          FUN_009c5f40(&local_b0,lVar14 + 0x68,uVar9,&local_e0);
          if (local_b0 != (ulong *)0x0) {
            FUN_009a063c(&local_b0);
          }
        }
      }
    }
    else {
      plVar11 = (long *)(lVar14 + 0x100);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = *plVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(int *)(lVar14 + 0xc0) = *(int *)(lVar14 + 0xc0) + 1;
      if (*(long *)(lVar14 + 200) != 0) {
                    /* try { // try from 009a3a70 to 009a3a77 has its CatchHandler @ 009a3d78 */
        <parking_lot::condvar::parking_lot::condvar::Condvar>::notify_one_slow(lVar14 + 200);
      }
    }
    do {
      if (*pcVar1 != '\x01') {
        uVar9 = 0;
        goto LAB_009a3ce0;
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar6) {
        *pcVar1 = '\0';
        cVar5 = ExclusiveMonitorsStatus();
      }
      uVar9 = 0;
    } while (cVar5 != '\0');
  }
  auVar16._8_8_ = param_4;
  auVar16._0_8_ = uVar9;
  return auVar16;
}


// ===== 009a3e0c  FUN_009a3e0c =====

void FUN_009a3e0c(long param_1,long param_2)

{
  char *pcVar1;
  long *plVar2;
  ulong *puVar3;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  char cVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  ulong uVar11;
  void *__ptr;
  long extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  ulong uVar12;
  undefined8 *puVar13;
  code *pcVar14;
  long lVar15;
  ulong uVar16;
  undefined1 uVar17;
  long lVar18;
  ulong *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  byte bVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [12];
  long local_a8;
  ulong *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  ulong *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  lVar18 = param_2;
  local_a8 = param_2;
  if (*(long *)(param_1 + 0xc0) != 0) {
    (**(code **)(*(long *)(param_1 + 200) + 0x28))
              (*(long *)(param_1 + 0xc0) +
               (*(long *)(*(long *)(param_1 + 200) + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
    lVar18 = extraout_x1;
  }
  pcVar1 = (char *)(param_1 + 0x30);
  if (*pcVar1 == '\0') {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar9) {
      *pcVar1 = '\x01';
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 == '\0') goto LAB_009a3e74;
  }
  else {
    ClearExclusiveLocal();
  }
  <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
            (param_1 + 0x30,lVar18,0xffffffff);
LAB_009a3e74:
  plVar2 = (long *)(param_1 + 0xf8);
  puVar3 = (ulong *)(param_1 + 0xf0);
  local_a0 = (ulong *)0x0;
LAB_009a3e84:
  while (*(long *)(param_1 + 0x50) == 0) {
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar9) {
        *puVar3 = *puVar3 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    bVar22 = *(byte *)(param_1 + 0xb4);
    while( true ) {
      if ((bVar22 & 1) != 0) goto LAB_009a3fe4;
      uVar20 = *(undefined8 *)(param_1 + 0x10);
      uVar6 = *(undefined4 *)(param_1 + 0x18);
                    /* try { // try from 009a3f38 to 009a3f67 has its CatchHandler @ 009a4550 */
      auVar24 = <std::time::std::time::Instant>::now();
      local_70 = auVar24._0_8_;
      uStack_68 = CONCAT44(uStack_68._4_4_,auVar24._8_4_);
      auVar23 = <std::time::[5]::std::time::SystemTime>::checked_add(&local_70,uVar20,uVar6);
      iVar10 = <parking_lot::condvar::parking_lot::condvar::Condvar>::wait_until_internal
                         (param_1 + 0xb8,param_1 + 0x30,auVar23._0_8_,auVar23._8_8_ & 0xffffffff);
      if (*(int *)(param_1 + 0xb0) != 0) break;
      bVar22 = *(byte *)(param_1 + 0xb4);
      if ((iVar10 != 0) && ((bVar22 & 1) == 0)) {
                    /* try { // try from 009a4114 to 009a4123 has its CatchHandler @ 009a458c */
        uVar11 = FUN_009aac9c(param_1 + 0x78,&local_a8);
        lVar18 = 0;
        bVar22 = (byte)(uVar11 >> 0x39);
        uVar21 = CONCAT17(bVar22,CONCAT16(bVar22,CONCAT15(bVar22,CONCAT14(bVar22,CONCAT13(bVar22,
                                                  CONCAT12(bVar22,CONCAT11(bVar22,bVar22)))))));
        lVar4 = *(long *)(param_1 + 0x58);
        uVar5 = *(ulong *)(param_1 + 0x60);
        uVar11 = uVar11 & uVar5;
        uVar20 = *(undefined8 *)(lVar4 + uVar11);
        uVar12 = NEON_cmeq(uVar20,uVar21,1);
        uVar12 = uVar12 & 0x8080808080808080;
        goto joined_r0x009a414c;
      }
    }
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + -1;
    if (*(char *)(param_1 + 0xb4) == '\x01') goto LAB_009a3fe4;
  }
  uVar12 = *(long *)(param_1 + 0x48) + 1;
  puVar13 = (undefined8 *)(*(long *)(param_1 + 0x40) + *(long *)(param_1 + 0x48) * 0x10);
  uVar5 = 0;
  if (*(ulong *)(param_1 + 0x38) <= uVar12) {
    uVar5 = *(ulong *)(param_1 + 0x38);
  }
  *(ulong *)(param_1 + 0x48) = uVar12 - uVar5;
  *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + -1;
  puVar19 = (ulong *)*puVar13;
  uStack_68 = CONCAT71(uStack_68._1_7_,*(undefined1 *)(puVar13 + 1));
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar9) {
      *plVar2 = *plVar2 + -1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  do {
    local_70 = puVar19;
    if (*pcVar1 != '\x01') {
      ClearExclusiveLocal();
                    /* try { // try from 009a3fc0 to 009a3fcb has its CatchHandler @ 009a4440 */
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(param_1 + 0x30,0)
      ;
      break;
    }
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar9) {
      *pcVar1 = '\0';
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
                    /* try { // try from 009a3eec to 009a3ef3 has its CatchHandler @ 009a4498 */
  (**(code **)puVar19[2])(puVar19);
  do {
    uVar12 = *puVar19;
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar19,0x10);
    if (bVar9) {
      *puVar19 = uVar12 - 0x40;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  uVar12 = uVar12 >> 6;
  if (uVar12 == 1) {
                    /* try { // try from 009a3f88 to 009a3f8f has its CatchHandler @ 009a4490 */
    (**(code **)(puVar19[2] + 0x10))(puVar19);
    uVar20 = extraout_x1_01;
  }
  else {
    uVar20 = extraout_x1_00;
    if (uVar12 == 0) {
                    /* try { // try from 009a43ac to 009a43c3 has its CatchHandler @ 009a4594 */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: prev.ref_count() >= 1",0x27,
                 &PTR_s__root__cargo_registry_src_index__00af3f10);
    }
  }
  if (*pcVar1 == '\0') {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar9) {
      *pcVar1 = '\x01';
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 == '\0') goto LAB_009a3e84;
  }
  else {
    ClearExclusiveLocal();
  }
                    /* try { // try from 009a3fd4 to 009a3fdf has its CatchHandler @ 009a4490 */
  <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
            (param_1 + 0x30,uVar20,0xffffffff);
  goto LAB_009a3e84;
LAB_009a3fe4:
  lVar18 = *(long *)(param_1 + 0x50);
  while (lVar18 != 0) {
    uVar12 = *(long *)(param_1 + 0x48) + 1;
    puVar13 = (undefined8 *)(*(long *)(param_1 + 0x40) + *(long *)(param_1 + 0x48) * 0x10);
    uVar5 = 0;
    if (*(ulong *)(param_1 + 0x38) <= uVar12) {
      uVar5 = *(ulong *)(param_1 + 0x38);
    }
    *(ulong *)(param_1 + 0x48) = uVar12 - uVar5;
    *(long *)(param_1 + 0x50) = lVar18 + -1;
    puVar19 = (ulong *)*puVar13;
    cVar8 = *(char *)(puVar13 + 1);
    uStack_68._1_7_ = (undefined7)((ulong)uStack_68 >> 8);
    uStack_68 = CONCAT71(uStack_68._1_7_,cVar8);
    do {
      cVar7 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar9) {
        *plVar2 = *plVar2 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    do {
      local_70 = puVar19;
      if (*pcVar1 != '\x01') {
        ClearExclusiveLocal();
                    /* try { // try from 009a40d8 to 009a40e3 has its CatchHandler @ 009a4430 */
        <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow
                  (param_1 + 0x30,0);
        break;
      }
      cVar7 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar9) {
        *pcVar1 = '\0';
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (cVar8 == '\0') {
                    /* try { // try from 009a4078 to 009a407f has its CatchHandler @ 009a44f0 */
      (**(code **)puVar19[2])(puVar19);
      do {
        uVar12 = *puVar19;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(puVar19,0x10);
        if (bVar9) {
          *puVar19 = uVar12 - 0x40;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      uVar12 = uVar12 >> 6;
      if (uVar12 == 1) {
        puVar13 = (undefined8 *)(puVar19[2] + 0x10);
        goto LAB_009a40ac;
      }
      uVar20 = extraout_x1_02;
      if (uVar12 == 0) {
                    /* try { // try from 009a4390 to 009a43a7 has its CatchHandler @ 009a459c */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic
                  ("assertion failed: prev.ref_count() >= 1",0x27,
                   &PTR_s__root__cargo_registry_src_index__00af3f10);
      }
    }
    else {
      do {
        uVar12 = *puVar19;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(puVar19,0x10);
        if (bVar9) {
          *puVar19 = uVar12 - 0x40;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (uVar12 < 0x40) {
                    /* try { // try from 009a4374 to 009a438b has its CatchHandler @ 009a45a4 */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic
                  ("assertion failed: prev.ref_count() >= 1",0x27,
                   &PTR_s__root__cargo_registry_src_index__00af3f10);
      }
      puVar13 = (undefined8 *)(puVar19[2] + 0x30);
LAB_009a40ac:
                    /* try { // try from 009a40b0 to 009a40b7 has its CatchHandler @ 009a4548 */
      (*(code *)*puVar13)(puVar19);
      uVar20 = extraout_x1_03;
    }
    if (*pcVar1 == '\0') {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar9) {
        *pcVar1 = '\x01';
        cVar8 = ExclusiveMonitorsStatus();
      }
      if (cVar8 != '\0') goto LAB_009a40ec;
    }
    else {
      ClearExclusiveLocal();
LAB_009a40ec:
                    /* try { // try from 009a40ec to 009a40f7 has its CatchHandler @ 009a4548 */
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
                (param_1 + 0x30,uVar20,0xffffffff);
    }
    lVar18 = *(long *)(param_1 + 0x50);
  }
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar9) {
      *puVar3 = *puVar3 + 1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  goto LAB_009a4274;
joined_r0x009a414c:
  if (uVar12 != 0) {
    uVar16 = (uVar12 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar12 >> 7 & 0xff00ff00ff00ff) << 8;
    uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
    uVar16 = uVar11 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3) & uVar5;
    lVar15 = lVar4 + uVar16 * -0x20;
    if (param_2 == *(long *)(lVar15 + -0x20)) {
      puVar13 = (undefined8 *)(lVar4 + (uVar16 - 8 & uVar5));
      uVar12 = NEON_cmeq(*(undefined8 *)(lVar4 + uVar16),0xffffffffffffffff,1);
      uVar20 = NEON_cmeq(*puVar13,0xffffffffffffffff,1);
      uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      if (((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3) + ((ulong)LZCOUNT(uVar20) >> 3) < 8
         ) {
        *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 1;
        uVar17 = 0xff;
      }
      else {
        uVar17 = 0x80;
      }
      *(undefined1 *)(lVar4 + uVar16) = uVar17;
      *(undefined1 *)(puVar13 + 1) = uVar17;
      *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + -1;
      lVar18 = *(long *)(lVar15 + -0x18);
      if (lVar18 != 0) {
        uStack_78 = *(undefined8 *)(lVar15 + -8);
        local_80 = *(undefined8 *)(lVar15 + -0x10);
      }
      goto LAB_009a4238;
    }
    uVar12 = uVar12 - 1 & uVar12;
    goto joined_r0x009a414c;
  }
  uVar20 = NEON_cmeq(uVar20,0xffffffffffffffff,1);
  bVar22 = NEON_umaxv(uVar20,1);
  if ((bVar22 & 1) != 0) goto LAB_009a41fc;
  lVar18 = lVar18 + 8;
  uVar11 = uVar11 + lVar18 & uVar5;
  uVar20 = *(undefined8 *)(lVar4 + uVar11);
  uVar12 = NEON_cmeq(uVar20,uVar21,1);
  uVar12 = uVar12 & 0x8080808080808080;
  goto joined_r0x009a414c;
LAB_009a41fc:
  lVar18 = 0;
LAB_009a4238:
  uStack_68 = *(undefined8 *)(param_1 + 0x98);
  local_70 = *(ulong **)(param_1 + 0x90);
  local_60 = *(undefined8 *)(param_1 + 0xa0);
  *(long *)(param_1 + 0x90) = lVar18;
  *(undefined8 *)(param_1 + 0xa0) = uStack_78;
  *(undefined8 *)(param_1 + 0x98) = local_80;
  if (local_a0 != (ulong *)0x0) {
                    /* try { // try from 009a425c to 009a4263 has its CatchHandler @ 009a4470 */
    FUN_009a063c(&local_a0);
  }
  uStack_98 = uStack_68;
  local_a0 = local_70;
  local_90 = local_60;
LAB_009a4274:
  plVar2 = (long *)(param_1 + 0xe8);
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar9) {
      *plVar2 = *plVar2 + -1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  do {
    uVar12 = *puVar3;
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar9) {
      *puVar3 = uVar12 - 1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if (uVar12 < *puVar3) {
                    /* try { // try from 009a43cc to 009a43fb has its CatchHandler @ 009a458c */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              ("num_idle_threads underflowed on thread exit",0x57,
               &PTR_s__root__cargo_registry_src_index__00af4cd8);
  }
  if ((((*(byte *)(param_1 + 0xb4) & 1) != 0) && (*plVar2 == 0)) && (*(long *)(param_1 + 0xb8) != 0)
     ) {
    <parking_lot::condvar::parking_lot::condvar::Condvar>::notify_one_slow(param_1 + 0xb8);
  }
  do {
    if (*pcVar1 != '\x01') {
      ClearExclusiveLocal();
                    /* try { // try from 009a441c to 009a442b has its CatchHandler @ 009a458c */
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(param_1 + 0x30,0)
      ;
      break;
    }
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar9) {
      *pcVar1 = '\0';
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if (*(long *)(param_1 + 0xd0) != 0) {
                    /* try { // try from 009a42f4 to 009a4327 has its CatchHandler @ 009a458c */
    (**(code **)(*(long *)(param_1 + 0xd8) + 0x28))
              (*(long *)(param_1 + 0xd0) +
               (*(long *)(*(long *)(param_1 + 0xd8) + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
  }
  if (local_a0 != (ulong *)0x0) {
    uStack_68 = uStack_98;
    local_70 = local_a0;
    local_60 = local_90;
    auVar23 = FUN_0099da98(&local_70);
    __ptr = auVar23._0_8_;
    if (__ptr != (void *)0x0) {
      pcVar14 = (code *)*auVar23._8_8_;
      if (pcVar14 != (code *)0x0) {
                    /* try { // try from 009a433c to 009a4343 has its CatchHandler @ 009a4450 */
        (*pcVar14)(__ptr);
      }
      if (auVar23._8_8_[1] != 0) {
        free(__ptr);
      }
    }
  }
  return;
}


// ===== 009a464c  <tokio::task::task_local::[7]::tokio::task::task_local::ScopeInnerErr>::panic =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::task::task_local::[7]::tokio::task::task_local::ScopeInnerErr>::panic */

void __rustcall
<tokio::task::task_local::[7]::tokio::task::task_local::ScopeInnerErr>::panic
          (char *param_1,undefined8 param_2)

{
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              ("cannot enter a task-local scope during or after destruction of the underlying thread-local"
               ,0xb5,param_2);
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            ("cannot enter a task-local scope while the task-local storage is borrowed",0x91,param_2
            );
}


// ===== 009a4684  tokio::io::stdout::stdout =====

/* WARNING: Unknown calling convention: __rustcall */
/* tokio::io::stdout::stdout */

void __rustcall tokio::io::stdout::stdout(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::io::stdio::stdout();
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = uVar1;
  *param_1 = 0;
  param_1[1] = 1;
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}


// ===== 009a46b8  FUN_009a46b8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_009a46b8(long param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined7 local_1a8;
  undefined1 uStack_1a1;
  undefined7 uStack_1a0;
  undefined1 uStack_199;
  undefined7 uStack_198;
  undefined1 uStack_191;
  undefined7 uStack_190;
  undefined1 uStack_189;
  undefined7 uStack_188;
  undefined1 local_181;
  undefined7 uStack_180;
  undefined1 uStack_179;
  undefined7 uStack_178;
  undefined1 local_171;
  undefined7 uStack_170;
  undefined1 uStack_169;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  int local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 local_120;
  undefined8 local_11f;
  undefined8 uStack_117;
  undefined8 local_10f;
  undefined8 uStack_107;
  undefined8 local_ff;
  undefined8 uStack_f7;
  undefined8 local_ef;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  long local_d8;
  long lStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  auVar13 = FUN_009b15b4();
  iVar9 = *(int *)(param_1 + 0x30);
  if (iVar9 == -1) {
    iVar9 = 0;
    uVar10 = 10;
  }
  else {
    uVar10 = *(undefined8 *)(param_1 + 0x28);
  }
  local_160 = 0;
  local_150 = 0;
  uStack_148 = 0;
  uStack_158 = 8;
  local_1a8 = auVar13._0_7_;
  uVar8 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00bf8;
  if (uVar8 == 0) {
                    /* try { // try from 009a48a4 to 009a48d3 has its CatchHandler @ 009a48f8 */
    uVar8 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00bf8);
    plVar6 = (long *)pthread_getspecific((pthread_key_t)uVar8);
  }
  else {
    plVar6 = (long *)pthread_getspecific((pthread_key_t)uVar8);
  }
  if (plVar6 < (long *)0x2) {
    plVar6 = (long *)FUN_00996620(uVar8 & 0xffffffff,plVar6,0);
  }
  uVar4 = _UNK_00af4cb8;
  uVar12 = _DAT_00af4cb0;
  uVar11 = _UNK_00af4ca8;
  puVar3 = PTR_DAT_00af4ca0;
  if (plVar6 == (long *)0x0) {
                    /* try { // try from 009a48e8 to 009a48f3 has its CatchHandler @ 009a48f8 */
                    /* WARNING: Subroutine does not return */
    std::thread::local::panic_access_error(&PTR_s__nix_store_8006w282fgsx3273c878b_00af36e0);
  }
  lStack_d0 = plVar6[1];
  local_d8 = *plVar6;
  *plVar6 = *plVar6 + 1;
  plVar6 = *(long **)(param_1 + 0x38);
  uStack_199 = (undefined1)uStack_158;
  uStack_198 = (undefined7)((ulong)uStack_158 >> 8);
  uStack_1a1 = (undefined1)local_160;
  uStack_1a0 = (undefined7)((ulong)local_160 >> 8);
  uStack_189 = (undefined1)uStack_148;
  uStack_188 = (undefined7)((ulong)uStack_148 >> 8);
  uStack_191 = (undefined1)local_150;
  uStack_190 = (undefined7)((ulong)local_150 >> 8);
  uStack_169 = (undefined1)uVar4;
  local_171 = (undefined1)uVar12;
  uStack_170 = (undefined7)((ulong)uVar12 >> 8);
  uStack_179 = (undefined1)uVar11;
  uStack_178 = (undefined7)((ulong)uVar11 >> 8);
  local_181 = SUB81(puVar3,0);
  uStack_180 = (undefined7)((ulong)puVar3 >> 8);
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
LAB_009a48f4:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x9a48f8);
    (*pcVar5)();
  }
  uStack_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  plVar6 = *(long **)(param_1 + 0x58);
  uStack_128 = *(undefined8 *)(param_1 + 0x40);
  local_130 = *(undefined8 *)(param_1 + 0x38);
  uVar12 = *(undefined8 *)(param_1 + 0x18);
  uVar11 = *(undefined8 *)(param_1 + 0x10);
  if (plVar6 != (long *)0x0) {
    do {
      lVar7 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 < 0) goto LAB_009a48f4;
    uStack_88 = *(undefined8 *)(param_1 + 0x60);
    local_90 = *(undefined8 *)(param_1 + 0x58);
  }
  plVar6 = *(long **)(param_1 + 0x68);
  if (plVar6 != (long *)0x0) {
    do {
      lVar7 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 < 0) goto LAB_009a48f4;
    uStack_78 = *(undefined8 *)(param_1 + 0x70);
    uStack_80 = *(undefined8 *)(param_1 + 0x68);
  }
  uStack_117 = CONCAT17(uStack_199,uStack_1a0);
  local_11f = CONCAT17(uStack_1a1,local_1a8);
  uStack_107 = CONCAT17(uStack_189,uStack_190);
  local_10f = CONCAT17(uStack_191,uStack_198);
  local_ef = CONCAT17(local_171,uStack_178);
  uStack_158 = 1;
  local_160 = 1;
  uStack_f7 = CONCAT17(uStack_179,uStack_180);
  local_ff = CONCAT17(local_181,uStack_188);
  local_120 = 0;
  uStack_e7 = uStack_170;
  uStack_df = (undefined7)((ulong)uVar4 >> 8);
  uStack_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 0;
  local_98 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_150 = uVar11;
  uStack_148 = uVar12;
  local_140 = uVar10;
  local_138 = iVar9;
  uStack_e0 = uStack_169;
  local_c8 = auVar13._0_8_;
  local_70 = param_2;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  auVar13._0_8_ = (void *)FUN_004b25a4(0x110,8);
  if (auVar13._0_8_ == (void *)0x0) {
                    /* try { // try from 009a48d8 to 009a48e3 has its CatchHandler @ 009a492c */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x110);
  }
  memcpy(auVar13._0_8_,&local_160,0x110);
  return auVar13;
}


// ===== 009a4950  <tokio::io::stdout::Stdout_as_tokio::io::async_write::AsyncWrite>::poll_flush =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::io::stdout::Stdout as tokio::io::async_write::AsyncWrite>::poll_flush */

undefined1  [16] __rustcall
<tokio::io::stdout::Stdout_as_tokio::io::async_write::AsyncWrite>::poll_flush
          (ulong *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  while( true ) {
    while (uVar7 = *param_1, uVar7 != 0xfffffffffffffffe) {
      if ((char)param_1[5] != '\x01') {
        uVar7 = 0;
        goto LAB_0099037c;
      }
      *param_1 = 0xffffffffffffffff;
      if (uVar7 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
        core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af4418);
      }
      uVar6 = param_1[4];
      param_1[4] = 0;
      if (uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af4430);
      }
      uStack_c0 = param_1[3];
      uStack_c8 = param_1[2];
      uStack_d8 = uVar7;
      uStack_d0 = param_1[1];
      uStack_b8 = uVar6;
      uVar7 = FUN_009a1a74(&uStack_d8,&PTR_s__root__cargo_registry_src_index__00af4448);
      *param_1 = 0xfffffffffffffffe;
      param_1[1] = uVar7;
      *(undefined1 *)(param_1 + 5) = 0;
    }
    FUN_009ac650(&uStack_d8,param_1 + 1,param_2);
    uVar3 = uStack_a8;
    uVar7 = uStack_d0;
    uVar6 = uStack_d8;
    if (uStack_d8 == 0xffffffffffffffff) {
      uVar5 = 1;
      uVar7 = 0xfffffffffffffffe;
      goto LAB_00990380;
    }
    if (uStack_d8 == 2) break;
    plVar4 = (long *)param_1[1];
    uStack_68 = uStack_b0;
    uStack_70 = uStack_b8;
    uStack_78 = uStack_c0;
    uStack_80 = uStack_c8;
    uStack_98 = uStack_c0;
    uStack_a0 = uStack_c8;
    uStack_88 = uStack_b0;
    uStack_90 = uStack_b8;
    if (*plVar4 == 0xcc) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = 0x84;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 != '\0') goto LAB_00990344;
    }
    else {
      ClearExclusiveLocal();
LAB_00990344:
      (**(code **)(plVar4[2] + 0x20))();
    }
    param_1[4] = uVar3;
    param_1[1] = uStack_98;
    *param_1 = uStack_a0;
    param_1[3] = uStack_88;
    param_1[2] = uStack_90;
    if ((uVar6 & 1) != 0) {
LAB_0099037c:
      uVar5 = 0;
LAB_00990380:
      auVar8._8_8_ = uVar7;
      auVar8._0_8_ = uVar5;
      return auVar8;
    }
  }
  uStack_80 = uStack_d0;
  uStack_70 = uStack_c0;
  uStack_78 = uStack_c8;
  uVar7 = <core[bcece726f298455b]::io::error::Error_as_core[bcece726f298455b]::convert::From<tokio[8c8895dbfa691109]::runtime::task::error::JoinError>>
          ::from(&uStack_80);
  goto LAB_0099037c;
}


// ===== 009a4954  <tokio::io::stdout::Stdout_as_tokio::io::async_write::AsyncWrite>::poll_write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::io::stdout::Stdout as tokio::io::async_write::AsyncWrite>::poll_write */

undefined1  [16] __rustcall
<tokio::io::stdout::Stdout_as_tokio::io::async_write::AsyncWrite>::poll_write
          (ulong *param_1,undefined8 param_2,void *param_3,ulong param_4)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong unaff_x20;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  uVar7 = 2;
  while( true ) {
    uVar6 = *param_1;
    if (uVar6 != 0xfffffffffffffffe) {
      *param_1 = 0xffffffffffffffff;
      if (uVar6 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
        core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af4460);
      }
      uStack_70 = param_1[2];
      uStack_78 = param_1[1];
      uStack_68 = param_1[3];
      uStack_80 = uVar6;
      if (uStack_70 != uStack_68) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic
                  ("assertion failed: buf.is_empty()",0x20,
                   &PTR_s__root__cargo_registry_src_index__00af4478);
      }
      unaff_x20 = param_4;
      if (0x1fffff < param_4) {
        unaff_x20 = 0x200000;
      }
      uStack_d0 = uStack_70;
      if (uVar6 - uStack_70 < unaff_x20) {
        FUN_009bd2b4(&uStack_80,uStack_70,unaff_x20,1,1);
        uStack_d0 = uStack_70;
      }
      if (param_4 != 0) {
        uStack_70 = uStack_d0;
        memcpy((void *)(uStack_78 + uStack_d0),param_3,unaff_x20);
      }
      uStack_c0 = param_1[4];
      uStack_d0 = uStack_d0 + unaff_x20;
      param_1[4] = 0;
      uStack_70 = uStack_d0;
      if (uStack_c0 == 0) {
                    /* WARNING: Subroutine does not return */
        core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af4490);
      }
      uStack_d8 = uStack_78;
      uStack_e0 = uStack_80;
      uStack_c8 = uStack_68;
      uVar6 = FUN_009a1c9c(&uStack_e0,&PTR_s__root__cargo_registry_src_index__00af44a8);
      uVar7 = 0;
      *param_1 = 0xfffffffffffffffe;
      param_1[1] = uVar6;
      *(undefined1 *)(param_1 + 5) = 1;
      goto LAB_00990594;
    }
    FUN_009ac650(&uStack_e0,param_1 + 1,param_2);
    uVar4 = uStack_b0;
    uVar3 = uStack_d8;
    uVar6 = uStack_e0;
    if (uStack_e0 == 0xffffffffffffffff) goto LAB_00990594;
    if (uStack_e0 == 2) break;
    plVar5 = (long *)param_1[1];
    uStack_68 = uStack_b8;
    uStack_70 = uStack_c0;
    uStack_98 = uStack_c8;
    uStack_a0 = uStack_d0;
    uStack_88 = uStack_b8;
    uStack_90 = uStack_c0;
    uStack_78 = uStack_c8;
    uStack_80 = uStack_d0;
    if (*plVar5 == 0xcc) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = 0x84;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 != '\0') goto LAB_009904bc;
    }
    else {
      ClearExclusiveLocal();
LAB_009904bc:
      (**(code **)(plVar5[2] + 0x20))();
    }
    param_1[4] = uVar4;
    param_1[1] = uStack_98;
    *param_1 = uStack_a0;
    param_1[3] = uStack_88;
    param_1[2] = uStack_90;
    unaff_x20 = uVar3;
    if ((uVar6 & 1) != 0) {
LAB_00990590:
      uVar7 = 1;
LAB_00990594:
      auVar8._8_8_ = unaff_x20;
      auVar8._0_8_ = uVar7;
      return auVar8;
    }
  }
  uStack_80 = uStack_d8;
  uStack_70 = uStack_c8;
  uStack_78 = uStack_d0;
  unaff_x20 = <core[bcece726f298455b]::io::error::Error_as_core[bcece726f298455b]::convert::From<tokio[8c8895dbfa691109]::runtime::task::error::JoinError>>
              ::from(&uStack_80);
  goto LAB_00990590;
}


// ===== 009a4958  <tokio::io::stdout::Stdout_as_std::os::fd::raw::AsRawFd>::as_raw_fd =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::io::stdout::Stdout as std::os::fd::raw::AsRawFd>::as_raw_fd */

undefined8 __rustcall <tokio::io::stdout::Stdout_as_std::os::fd::raw::AsRawFd>::as_raw_fd(void)

{
  std::io::stdio::stdout();
  return 1;
}


// ===== 009a4970  <tokio::runtime::blocking::pool::BlockingPool_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::blocking::pool::BlockingPool as core::ops::drop::Drop>::drop */

void __rustcall
<tokio::runtime::blocking::pool::BlockingPool_as_core::ops::drop::Drop>::drop
          (undefined8 param_1,undefined8 param_2)

{
  FUN_009a33bc(param_1,param_2,0xffffffff);
  return;
}


// ===== 009a4978  <tokio::runtime::scheduler::multi_thread::idle::State_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::scheduler::multi_thread::idle::State as core::fmt::Debug>::fmt */

void __rustcall
<tokio::runtime::scheduler::multi_thread::idle::State_as_core::fmt::Debug>::fmt
          (ulong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 auStack_40 [16];
  ulong local_30;
  ulong local_28;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_40,param_2,"worker::State",0xd);
  uVar2 = *param_1;
  local_30 = uVar2 >> 0x10;
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (auStack_40,"num_unparked",0xc,&local_30,&DAT_00af4cf0);
  local_28 = uVar2 & 0xffff;
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (uVar1,"num_searching",0xd,&local_28,&DAT_00af4cf0);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 009a4a0c  <tokio::runtime::blocking::pool::BlockingPool_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::blocking::pool::BlockingPool as core::fmt::Debug>::fmt */

void __rustcall
<tokio::runtime::blocking::pool::BlockingPool_as_core::fmt::Debug>::fmt
          (undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,"BlockingPool",0xc);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish(auStack_20);
  return;
}


// ===== 009a4a44  <tokio::task::task_local::AccessError_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::task::task_local::AccessError as core::fmt::Debug>::fmt */

void __rustcall
<tokio::task::task_local::AccessError_as_core::fmt::Debug>::fmt
          (undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,"AccessError",0xb);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish(auStack_20);
  return;
}


// ===== 009a4a7c  <tokio::task::task_local::AccessError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::task::task_local::AccessError as core::fmt::Display>::fmt */

void __rustcall
<tokio::task::task_local::AccessError_as_core::fmt::Display>::fmt
          (undefined8 param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt
            ("task-local value not setreceiving on an empty channelreceiving on a closed channel",
             0x18,param_2);
  return;
}


// ===== 009a4a90  <tokio::loom::std::atomic_usize::AtomicUsize_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::loom::std::atomic_usize::AtomicUsize as core::fmt::Debug>::fmt */

void __rustcall <tokio::loom::std::atomic_usize::AtomicUsize_as_core::fmt::Debug>::fmt(void)

{
  (*(code *)PTR_fmt_00b05198)();
  return;
}


// ===== 009a4a94  <tokio::sync::mpsc::error::TryRecvError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::sync::mpsc::error::TryRecvError as core::fmt::Display>::fmt */

void __rustcall
<tokio::sync::mpsc::error::TryRecvError_as_core::fmt::Display>::fmt
          (char *param_1,undefined8 param_2)

{
  char *pcVar1;
  
  pcVar1 = "receiving on a closed channel";
  if (*param_1 == '\0') {
    pcVar1 = "receiving on an empty channelreceiving on a closed channel";
  }
  <str_as_core::fmt::Display>::fmt(pcVar1,0x1d,param_2);
  return;
}


// ===== 009a4abc  <tokio::runtime::blocking::pool::Spawner_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::blocking::pool::Spawner as core::fmt::Debug>::fmt */

void __rustcall
<tokio::runtime::blocking::pool::Spawner_as_core::fmt::Debug>::fmt
          (undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct
            (auStack_20,param_2,"blocking::Spawnerchannel closedHandle",0x11);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish(auStack_20);
  return;
}


// ===== 009a4af4  <tokio::sync::mpsc::error::RecvError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::sync::mpsc::error::RecvError as core::fmt::Display>::fmt */

void __rustcall
<tokio::sync::mpsc::error::RecvError_as_core::fmt::Display>::fmt
          (undefined8 param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x009a4b0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,"channel closedHandle",0xe);
  return;
}


// ===== 009a4b10  FUN_009a4b10 =====

void FUN_009a4b10(undefined8 param_1,long param_2)

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


// ===== 009a4b28  <tokio::io::stdout::Stdout_as_std::os::fd::owned::AsFd>::as_fd =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::io::stdout::Stdout as std::os::fd::owned::AsFd>::as_fd */

undefined8 __rustcall <tokio::io::stdout::Stdout_as_std::os::fd::owned::AsFd>::as_fd(void)

{
  std::io::stdio::stdout();
  return 1;
}


// ===== 009a4b40  <tokio::runtime::time::handle::Handle_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::time::handle::Handle as core::fmt::Debug>::fmt */

void __rustcall
<tokio::runtime::time::handle::Handle_as_core::fmt::Debug>::fmt
          (undefined8 param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x009a4b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,"Handle",6);
  return;
}


// ===== 009a4b5c  <tokio::sync::mpsc::bounded::Semaphore_as_tokio::sync::mpsc::chan::Semaphore>::add_permit =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::sync::mpsc::bounded::Semaphore as tokio::sync::mpsc::chan::Semaphore>::add_permit */

void __rustcall
<tokio::sync::mpsc::bounded::Semaphore_as_tokio::sync::mpsc::chan::Semaphore>::add_permit
          (char *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  
  if (*param_1 == '\0') {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = '\x01';
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') {
      FUN_009aafdc(param_1,1,param_1);
      return;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
            (param_1,param_2,0xffffffff);
  FUN_009aafdc(param_1,1,param_1);
  return;
}


// ===== 009a4bb0  <tokio::sync::mpsc::bounded::Semaphore_as_tokio::sync::mpsc::chan::Semaphore>::add_permits =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::sync::mpsc::bounded::Semaphore as tokio::sync::mpsc::chan::Semaphore>::add_permits */

void __rustcall
<tokio::sync::mpsc::bounded::Semaphore_as_tokio::sync::mpsc::chan::Semaphore>::add_permits
          (char *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  
  if (param_2 == 0) {
    return;
  }
  if (*param_1 == '\0') {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = '\x01';
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') {
      FUN_009aafdc(param_1,param_2,param_1);
      return;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
            (param_1,param_2,0xffffffff);
  FUN_009aafdc(param_1,param_2,param_1);
  return;
}


// ===== 009a4c04  <tokio::sync::mpsc::bounded::Semaphore_as_tokio::sync::mpsc::chan::Semaphore>::close =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::sync::mpsc::bounded::Semaphore as tokio::sync::mpsc::chan::Semaphore>::close */

void __rustcall
<tokio::sync::mpsc::bounded::Semaphore_as_tokio::sync::mpsc::chan::Semaphore>::close
          (char *param_1,undefined8 param_2)

{
  ulong *puVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  
  if (*param_1 == '\0') {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar4) {
      *param_1 = '\x01';
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_009ab444;
  }
  else {
    ClearExclusiveLocal();
  }
  <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
            (param_1,param_2,0xffffffff);
LAB_009ab444:
  puVar1 = (ulong *)(param_1 + 0x20);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = *puVar1 | 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  plVar5 = *(long **)(param_1 + 0x10);
  param_1[0x18] = '\x01';
  while (plVar5 != (long *)0x0) {
    plVar6 = plVar5 + 2;
    lVar7 = *plVar6;
    *(long *)(param_1 + 0x10) = lVar7;
    if (lVar7 == 0) {
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
      lVar7 = *plVar5;
      lVar2 = plVar5[1];
      *plVar6 = 0;
      plVar5[3] = 0;
      *plVar5 = 0;
    }
    else {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      lVar7 = *plVar5;
      lVar2 = plVar5[1];
      *plVar6 = 0;
      plVar5[3] = 0;
      *plVar5 = 0;
    }
    if (lVar7 != 0) {
      (**(code **)(lVar7 + 8))(lVar2);
    }
    plVar5 = *(long **)(param_1 + 0x10);
  }
  do {
    if (*param_1 != '\x01') {
      ClearExclusiveLocal();
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(param_1,0);
      return;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar4) {
      *param_1 = '\0';
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  return;
}


// ===== 009a4c08  <tokio::sync::mpsc::bounded::Semaphore_as_tokio::sync::mpsc::chan::Semaphore>::is_idle =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::sync::mpsc::bounded::Semaphore as tokio::sync::mpsc::chan::Semaphore>::is_idle */

bool __rustcall
<tokio::sync::mpsc::bounded::Semaphore_as_tokio::sync::mpsc::chan::Semaphore>::is_idle(long param_1)

{
  return *(ulong *)(param_1 + 0x28) == *(ulong *)(param_1 + 0x20) >> 1;
}


// ===== 009a4c20  <tokio::sync::mpsc::bounded::Semaphore_as_tokio::sync::mpsc::chan::Semaphore>::is_closed =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::sync::mpsc::bounded::Semaphore as tokio::sync::mpsc::chan::Semaphore>::is_closed */

uint __rustcall
<tokio::sync::mpsc::bounded::Semaphore_as_tokio::sync::mpsc::chan::Semaphore>::is_closed
          (long param_1)

{
  return (uint)*(undefined8 *)(param_1 + 0x20) & 1;
}


// ===== 009a4c30  FUN_009a4c30 =====

void FUN_009a4c30(ulong *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,long *param_5,
                 undefined8 param_6)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long *local_28;
  
  lVar3 = 0x140;
  if ((param_4 & 1) == 0) {
    lVar3 = 0xe0;
  }
  local_28 = param_5;
  if (*(int *)((long)param_5 + lVar3 + 0x44) == -1) {
                    /* try { // try from 009a4d18 to 009a4d2b has its CatchHandler @ 009a4d30 */
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed
              ("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
               ,0x68,param_6);
  }
                    /* try { // try from 009a4c70 to 009a4c77 has its CatchHandler @ 009a4d30 */
  auVar4 = FUN_00980c50((long)param_5 + lVar3,param_2,param_3);
  if (auVar4._0_8_ != 1) {
    param_1[2] = auVar4._8_8_;
    *param_1 = param_4;
    param_1[1] = (ulong)local_28;
    return;
  }
  *param_1 = 2;
  param_1[1] = auVar4._8_8_;
  if (param_4 == 0) {
    do {
      lVar3 = *local_28;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(local_28,0x10);
      if (bVar2) {
        *local_28 = lVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar3 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>>::
      drop_slow(&local_28);
      return;
    }
  }
  else {
    do {
      lVar3 = *local_28;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(local_28,0x10);
      if (bVar2) {
        *local_28 = lVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar3 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>>
      ::drop_slow(&local_28);
    }
  }
  return;
}


// ===== 009a4d48  FUN_009a4d48 =====

void FUN_009a4d48(ulong *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,long *param_5,
                 undefined8 param_6)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long *local_28;
  
  lVar3 = 0x140;
  if ((param_4 & 1) == 0) {
    lVar3 = 0xe0;
  }
  local_28 = param_5;
  if (*(int *)((long)param_5 + lVar3 + 0x44) == -1) {
                    /* try { // try from 009a4e30 to 009a4e43 has its CatchHandler @ 009a4e48 */
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed
              ("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
               ,0x68,param_6);
  }
                    /* try { // try from 009a4d88 to 009a4d8f has its CatchHandler @ 009a4e48 */
  auVar4 = FUN_00980f58((long)param_5 + lVar3,param_2,param_3);
  if (auVar4._0_8_ != 1) {
    param_1[2] = auVar4._8_8_;
    *param_1 = param_4;
    param_1[1] = (ulong)local_28;
    return;
  }
  *param_1 = 2;
  param_1[1] = auVar4._8_8_;
  if (param_4 == 0) {
    do {
      lVar3 = *local_28;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(local_28,0x10);
      if (bVar2) {
        *local_28 = lVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar3 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>>::
      drop_slow(&local_28);
      return;
    }
  }
  else {
    do {
      lVar3 = *local_28;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(local_28,0x10);
      if (bVar2) {
        *local_28 = lVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar3 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>>
      ::drop_slow(&local_28);
    }
  }
  return;
}


// ===== 009a4e60  FUN_009a4e60 =====

void FUN_009a4e60(ulong *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,long *param_5,
                 undefined8 param_6)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long *local_28;
  
  lVar3 = 0x140;
  if ((param_4 & 1) == 0) {
    lVar3 = 0xe0;
  }
  local_28 = param_5;
  if (*(int *)((long)param_5 + lVar3 + 0x44) == -1) {
                    /* try { // try from 009a4f48 to 009a4f5b has its CatchHandler @ 009a4f60 */
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed
              ("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
               ,0x68,param_6);
  }
                    /* try { // try from 009a4ea0 to 009a4ea7 has its CatchHandler @ 009a4f60 */
  auVar4 = FUN_00981250((long)param_5 + lVar3,param_2,param_3);
  if (auVar4._0_8_ != 1) {
    param_1[2] = auVar4._8_8_;
    *param_1 = param_4;
    param_1[1] = (ulong)local_28;
    return;
  }
  *param_1 = 2;
  param_1[1] = auVar4._8_8_;
  if (param_4 == 0) {
    do {
      lVar3 = *local_28;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(local_28,0x10);
      if (bVar2) {
        *local_28 = lVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar3 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>>::
      drop_slow(&local_28);
      return;
    }
  }
  else {
    do {
      lVar3 = *local_28;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(local_28,0x10);
      if (bVar2) {
        *local_28 = lVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar3 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>>
      ::drop_slow(&local_28);
    }
  }
  return;
}


// ===== 009a4f78  FUN_009a4f78 =====

void FUN_009a4f78(ulong *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,long *param_5,
                 undefined8 param_6)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long *local_28;
  
  lVar3 = 0x140;
  if ((param_4 & 1) == 0) {
    lVar3 = 0xe0;
  }
  local_28 = param_5;
  if (*(int *)((long)param_5 + lVar3 + 0x44) == -1) {
                    /* try { // try from 009a5060 to 009a5073 has its CatchHandler @ 009a5078 */
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed
              ("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
               ,0x68,param_6);
  }
                    /* try { // try from 009a4fb8 to 009a4fbf has its CatchHandler @ 009a5078 */
  auVar4 = FUN_00981548((long)param_5 + lVar3,param_2,param_3);
  if (auVar4._0_8_ != 1) {
    param_1[2] = auVar4._8_8_;
    *param_1 = param_4;
    param_1[1] = (ulong)local_28;
    return;
  }
  *param_1 = 2;
  param_1[1] = auVar4._8_8_;
  if (param_4 == 0) {
    do {
      lVar3 = *local_28;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(local_28,0x10);
      if (bVar2) {
        *local_28 = lVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar3 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>>::
      drop_slow(&local_28);
      return;
    }
  }
  else {
    do {
      lVar3 = *local_28;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(local_28,0x10);
      if (bVar2) {
        *local_28 = lVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar3 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>>
      ::drop_slow(&local_28);
    }
  }
  return;
}


// ===== 009a5090  FUN_009a5090 =====

void FUN_009a5090(ulong *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,long *param_5,
                 undefined8 param_6)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long *local_28;
  
  lVar3 = 0x140;
  if ((param_4 & 1) == 0) {
    lVar3 = 0xe0;
  }
  local_28 = param_5;
  if (*(int *)((long)param_5 + lVar3 + 0x44) == -1) {
                    /* try { // try from 009a5178 to 009a518b has its CatchHandler @ 009a5190 */
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed
              ("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
               ,0x68,param_6);
  }
                    /* try { // try from 009a50d0 to 009a50d7 has its CatchHandler @ 009a5190 */
  auVar4 = FUN_00981840((long)param_5 + lVar3,param_2,param_3);
  if (auVar4._0_8_ != 1) {
    param_1[2] = auVar4._8_8_;
    *param_1 = param_4;
    param_1[1] = (ulong)local_28;
    return;
  }
  *param_1 = 2;
  param_1[1] = auVar4._8_8_;
  if (param_4 == 0) {
    do {
      lVar3 = *local_28;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(local_28,0x10);
      if (bVar2) {
        *local_28 = lVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar3 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>>::
      drop_slow(&local_28);
      return;
    }
  }
  else {
    do {
      lVar3 = *local_28;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(local_28,0x10);
      if (bVar2) {
        *local_28 = lVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar3 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>>
      ::drop_slow(&local_28);
    }
  }
  return;
}


// ===== 009a51a8  FUN_009a51a8 =====

void FUN_009a51a8(ulong *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,long *param_5,
                 undefined8 param_6)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long *local_28;
  
  lVar3 = 0x140;
  if ((param_4 & 1) == 0) {
    lVar3 = 0xe0;
  }
  local_28 = param_5;
  if (*(int *)((long)param_5 + lVar3 + 0x44) == -1) {
                    /* try { // try from 009a5290 to 009a52a3 has its CatchHandler @ 009a52a8 */
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed
              ("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
               ,0x68,param_6);
  }
                    /* try { // try from 009a51e8 to 009a51ef has its CatchHandler @ 009a52a8 */
  auVar4 = FUN_00981b38((long)param_5 + lVar3,param_2,param_3);
  if (auVar4._0_8_ != 1) {
    param_1[2] = auVar4._8_8_;
    *param_1 = param_4;
    param_1[1] = (ulong)local_28;
    return;
  }
  *param_1 = 2;
  param_1[1] = auVar4._8_8_;
  if (param_4 == 0) {
    do {
      lVar3 = *local_28;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(local_28,0x10);
      if (bVar2) {
        *local_28 = lVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar3 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>>::
      drop_slow(&local_28);
      return;
    }
  }
  else {
    do {
      lVar3 = *local_28;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(local_28,0x10);
      if (bVar2) {
        *local_28 = lVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar3 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>>
      ::drop_slow(&local_28);
    }
  }
  return;
}


// ===== 009a52c0  FUN_009a52c0 =====

void FUN_009a52c0(ulong *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,long *param_5,
                 undefined8 param_6)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long *local_28;
  
  lVar3 = 0x140;
  if ((param_4 & 1) == 0) {
    lVar3 = 0xe0;
  }
  local_28 = param_5;
  if (*(int *)((long)param_5 + lVar3 + 0x44) == -1) {
                    /* try { // try from 009a53a8 to 009a53bb has its CatchHandler @ 009a53c0 */
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed
              ("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
               ,0x68,param_6);
  }
                    /* try { // try from 009a5300 to 009a5307 has its CatchHandler @ 009a53c0 */
  auVar4 = FUN_00981e30((long)param_5 + lVar3,param_2,param_3);
  if (auVar4._0_8_ != 1) {
    param_1[2] = auVar4._8_8_;
    *param_1 = param_4;
    param_1[1] = (ulong)local_28;
    return;
  }
  *param_1 = 2;
  param_1[1] = auVar4._8_8_;
  if (param_4 == 0) {
    do {
      lVar3 = *local_28;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(local_28,0x10);
      if (bVar2) {
        *local_28 = lVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar3 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>>::
      drop_slow(&local_28);
      return;
    }
  }
  else {
    do {
      lVar3 = *local_28;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(local_28,0x10);
      if (bVar2) {
        *local_28 = lVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar3 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>>
      ::drop_slow(&local_28);
    }
  }
  return;
}


// ===== 009a53d8  FUN_009a53d8 =====

void FUN_009a53d8(ulong *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,long *param_5,
                 undefined8 param_6)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long *local_28;
  
  lVar3 = 0x140;
  if ((param_4 & 1) == 0) {
    lVar3 = 0xe0;
  }
  local_28 = param_5;
  if (*(int *)((long)param_5 + lVar3 + 0x44) == -1) {
                    /* try { // try from 009a54c0 to 009a54d3 has its CatchHandler @ 009a54d8 */
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed
              ("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
               ,0x68,param_6);
  }
                    /* try { // try from 009a5418 to 009a541f has its CatchHandler @ 009a54d8 */
  auVar4 = FUN_00982128((long)param_5 + lVar3,param_2,param_3);
  if (auVar4._0_8_ != 1) {
    param_1[2] = auVar4._8_8_;
    *param_1 = param_4;
    param_1[1] = (ulong)local_28;
    return;
  }
  *param_1 = 2;
  param_1[1] = auVar4._8_8_;
  if (param_4 == 0) {
    do {
      lVar3 = *local_28;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(local_28,0x10);
      if (bVar2) {
        *local_28 = lVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar3 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>>::
      drop_slow(&local_28);
      return;
    }
  }
  else {
    do {
      lVar3 = *local_28;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(local_28,0x10);
      if (bVar2) {
        *local_28 = lVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar3 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>>
      ::drop_slow(&local_28);
    }
  }
  return;
}


// ===== 009a54f0  FUN_009a54f0 =====

void FUN_009a54f0(ulong *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,long *param_5,
                 undefined8 param_6)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long *local_28;
  
  lVar3 = 0x140;
  if ((param_4 & 1) == 0) {
    lVar3 = 0xe0;
  }
  local_28 = param_5;
  if (*(int *)((long)param_5 + lVar3 + 0x44) == -1) {
                    /* try { // try from 009a55d8 to 009a55eb has its CatchHandler @ 009a55f0 */
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed
              ("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
               ,0x68,param_6);
  }
                    /* try { // try from 009a5530 to 009a5537 has its CatchHandler @ 009a55f0 */
  auVar4 = FUN_00982420((long)param_5 + lVar3,param_2,param_3);
  if (auVar4._0_8_ != 1) {
    param_1[2] = auVar4._8_8_;
    *param_1 = param_4;
    param_1[1] = (ulong)local_28;
    return;
  }
  *param_1 = 2;
  param_1[1] = auVar4._8_8_;
  if (param_4 == 0) {
    do {
      lVar3 = *local_28;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(local_28,0x10);
      if (bVar2) {
        *local_28 = lVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar3 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>>::
      drop_slow(&local_28);
      return;
    }
  }
  else {
    do {
      lVar3 = *local_28;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(local_28,0x10);
      if (bVar2) {
        *local_28 = lVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar3 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>>
      ::drop_slow(&local_28);
    }
  }
  return;
}


// ===== 009a5608  FUN_009a5608 =====

void FUN_009a5608(undefined2 *param_1,long param_2,ulong param_3,long param_4)

{
  ulong *puVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  ushort uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  undefined2 uVar13;
  int extraout_w10;
  int iVar14;
  int extraout_w10_00;
  int extraout_w10_01;
  ulong uVar15;
  int extraout_w11;
  int extraout_w11_00;
  int iVar16;
  int extraout_w11_01;
  ulong uVar17;
  undefined4 extraout_w12;
  undefined4 extraout_w12_00;
  undefined4 extraout_w12_01;
  undefined4 extraout_w13;
  undefined4 extraout_w13_00;
  undefined4 extraout_w13_01;
  ushort extraout_w14;
  ushort uVar18;
  ushort extraout_w14_00;
  ushort extraout_w14_01;
  ulong uVar19;
  ulong uVar20;
  undefined1 local_d8;
  undefined7 uStack_d7;
  ulong local_d0;
  ushort local_c8;
  ushort local_c6;
  ulong local_c4;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 local_44;
  
  puVar1 = (ulong *)(*(long *)(param_2 + 0x10) + 0x90);
  uVar19 = *puVar1;
  if ((((param_3 ^ param_3 - 1) <= param_3 - 1) ||
      (uVar12 = (param_3 & 0xaaaaaaaaaaaaaaaa) >> 1 | (param_3 & 0x5555555555555555) << 1,
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2,
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4,
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8,
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10,
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20), 5 < uVar12)) ||
     (uVar12 = *(ulong *)(&DAT_0037c3e8 + uVar12 * 8) & uVar19, uVar12 == 0)) {
    *param_1 = 2;
    *(undefined8 *)(param_1 + 4) = 0xd00000003;
    return;
  }
  if (*(int *)(param_4 + 0x18) == -1) {
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af4d10);
  }
  if (*(int *)(param_4 + 0x18) < 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(&DAT_0037cef2,0x19,&PTR_s__root__cargo_registry_src_index__00af6378);
  }
  local_44 = <socket2::socket::Socket_as_std::os::fd::raw::FromRawFd>::from_raw_fd();
  <socket2::socket::socket2::socket::Socket>::peek_sender(&local_d8,&local_44);
  uVar9 = local_d0;
  iVar14 = extraout_w10;
  iVar16 = extraout_w11;
  uVar7 = extraout_w12;
  uVar8 = extraout_w13;
  uVar18 = extraout_w14;
  if (CONCAT71(uStack_d7,local_d8) != 1) {
    uVar2 = (uint)local_d0 & 0xffff;
    uVar11 = (uint)(local_d0 >> 0x10);
    iVar16 = (int)(local_d0 >> 0x20);
    uVar6 = (ushort)(local_d0 >> 0x18);
    if (uVar2 == 10) {
      iVar14 = (uint)local_c8 << 0x10;
      uVar18 = uVar6 & 0xff | (ushort)((uVar11 & 0xff00ff) << 8);
      uVar13 = 1;
      uVar9 = local_c4;
      goto LAB_009a5754;
    }
    if (uVar2 == 2) {
      uVar13 = 0;
      local_c6 = uVar6 & 0xff | (ushort)((uVar11 & 0xff00ff) << 8);
      iVar14 = iVar16;
      iVar16 = extraout_w11;
      local_bc = extraout_w12;
      uStack_b8 = extraout_w13;
      goto LAB_009a5754;
    }
    uVar9 = <alloc::io::error::core::io::error::Error>::new<&str>(0x2a,"sender not available",0x14);
    iVar14 = extraout_w10_00;
    iVar16 = extraout_w11_00;
    uVar7 = extraout_w12_00;
    uVar8 = extraout_w13_00;
    uVar18 = extraout_w14_00;
  }
  uStack_b8 = uVar8;
  local_bc = uVar7;
  uVar20 = uVar9 & 3;
  if (uVar20 < 2) {
    if (uVar20 == 0) {
      bVar3 = *(byte *)(uVar9 + 0x10);
    }
    else {
      bVar3 = *(byte *)(uVar9 + 0x1f);
    }
    local_c6 = (ushort)bVar3;
    if (bVar3 == 0xd) goto LAB_009a57b0;
  }
  else if (uVar20 == 2) {
                    /* try { // try from 009a5790 to 009a57a3 has its CatchHandler @ 009a58bc */
    lVar10 = core::io::error::os_functions::get_os_functions();
    local_c6 = (**(code **)(lVar10 + 8))(uVar9 >> 0x20);
    local_c6 = local_c6 & 0xff;
    iVar14 = extraout_w10_01;
    iVar16 = extraout_w11_01;
    local_bc = extraout_w12_01;
    uStack_b8 = extraout_w13_01;
    uVar18 = extraout_w14_01;
    if (local_c6 == 0xd) {
LAB_009a57b0:
      uVar15 = *puVar1;
      do {
        while( true ) {
          if (((uint)uVar19 >> 0x10 & 0xff) != (uint)(byte)(uVar15 >> 0x10)) goto LAB_009a5800;
          uVar17 = *puVar1;
          if (uVar17 == uVar15) break;
          ClearExclusiveLocal();
          uVar15 = uVar17;
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar15 & (uVar12 & 0x33 ^ 0xff003f);
          cVar4 = ExclusiveMonitorsStatus();
        }
        uVar15 = uVar17;
      } while (cVar4 != '\0');
LAB_009a5800:
      *(undefined8 *)(param_1 + 4) = 0xd00000003;
      *param_1 = 2;
      if ((1 < uVar20 - 2) && (uVar20 != 0)) {
        local_d0 = uVar9 - 1;
        local_d8 = 3;
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_d0);
        return;
      }
      return;
    }
  }
  else {
    uVar2 = (uint)(uVar9 >> 0x20) & 0xff;
    local_c6 = (ushort)uVar2;
    if (uVar2 == 0xd) goto LAB_009a57b0;
  }
  uVar13 = 2;
LAB_009a5754:
  *param_1 = uVar13;
  *(int *)(param_1 + 1) = iVar14;
  param_1[3] = local_c6;
  *(ulong *)(param_1 + 4) = uVar9;
  *(undefined4 *)(param_1 + 8) = local_bc;
  *(int *)(param_1 + 10) = iVar16;
  *(undefined4 *)(param_1 + 0xc) = uStack_b8;
  param_1[0xe] = uVar18;
  return;
}


// ===== 009a58d4  FUN_009a58d4 =====

void FUN_009a58d4(ulong *param_1,long param_2,ulong param_3,long *param_4)

{
  ulong *puVar1;
  bool bVar2;
  ulong uVar3;
  char cVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong local_78;
  short sStack_70;
  undefined6 uStack_6e;
  ulong local_68;
  ulong uStack_60;
  ulong local_58;
  undefined1 local_50;
  long local_48;
  
  puVar1 = (ulong *)(*(long *)(param_2 + 0x10) + 0x90);
  uVar9 = *puVar1;
  if ((((param_3 ^ param_3 - 1) <= param_3 - 1) ||
      (uVar6 = (param_3 & 0xaaaaaaaaaaaaaaaa) >> 1 | (param_3 & 0x5555555555555555) << 1,
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2,
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4,
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8,
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10,
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20), 5 < uVar6)) ||
     (uVar6 = *(ulong *)(&DAT_0037c3e8 + uVar6 * 8) & uVar9, uVar6 == 0)) {
    *(undefined2 *)(param_1 + 1) = 2;
    *param_1 = 0xd00000003;
    return;
  }
  if (*(int *)(*param_4 + 0x18) == -1) {
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af4d10);
  }
  <mio::net::udp::mio::net::udp::UdpSocket>::peek_from
            (&local_78,(int *)(*param_4 + 0x18),param_4[1],param_4[2]);
  uVar3 = local_78;
  if (sStack_70 == 2) {
    uVar10 = local_78 & 3;
    if (uVar10 < 2) {
      if (uVar10 == 0) {
        cVar4 = *(char *)(local_78 + 0x10);
      }
      else {
        cVar4 = *(char *)(local_78 + 0x1f);
      }
    }
    else {
      if (uVar10 != 2) {
        if (((uint)(local_78 >> 0x20) & 0xff) != 0xd) goto LAB_009a59b0;
        goto LAB_009a5a04;
      }
                    /* try { // try from 009a59e4 to 009a59f7 has its CatchHandler @ 009a5ae0 */
      lVar5 = core::io::error::os_functions::get_os_functions();
      cVar4 = (**(code **)(lVar5 + 8))(uVar3 >> 0x20);
    }
    if (cVar4 == '\r') {
LAB_009a5a04:
      uVar7 = *puVar1;
      do {
        while( true ) {
          if (((uint)uVar9 >> 0x10 & 0xff) != (uint)(byte)(uVar7 >> 0x10)) goto LAB_009a5a54;
          uVar8 = *puVar1;
          if (uVar8 == uVar7) break;
          ClearExclusiveLocal();
          uVar7 = uVar8;
        }
        cVar4 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar2) {
          *puVar1 = uVar7 & (uVar6 & 0x33 ^ 0xff003f);
          cVar4 = ExclusiveMonitorsStatus();
        }
        uVar7 = uVar8;
      } while (cVar4 != '\0');
LAB_009a5a54:
      *param_1 = 0xd00000003;
      *(undefined2 *)(param_1 + 1) = 2;
      if ((1 < uVar10 - 2) && (uVar10 != 0)) {
        local_48 = uVar3 - 1;
        local_50 = 3;
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_48);
        return;
      }
      return;
    }
  }
LAB_009a59b0:
  param_1[1] = CONCAT62(uStack_6e,sStack_70);
  *param_1 = local_78;
  param_1[3] = uStack_60;
  param_1[2] = local_68;
  param_1[4] = local_58;
  return;
}


// ===== 009a5afc  FUN_009a5afc =====

void FUN_009a5afc(ulong *param_1,long param_2,ulong param_3,long *param_4)

{
  ulong *puVar1;
  bool bVar2;
  ulong uVar3;
  char cVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong local_78;
  short sStack_70;
  undefined6 uStack_6e;
  ulong local_68;
  ulong uStack_60;
  ulong local_58;
  undefined1 local_50;
  long local_48;
  
  puVar1 = (ulong *)(*(long *)(param_2 + 0x10) + 0x90);
  uVar9 = *puVar1;
  if ((((param_3 ^ param_3 - 1) <= param_3 - 1) ||
      (uVar6 = (param_3 & 0xaaaaaaaaaaaaaaaa) >> 1 | (param_3 & 0x5555555555555555) << 1,
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2,
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4,
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8,
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10,
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20), 5 < uVar6)) ||
     (uVar6 = *(ulong *)(&DAT_0037c3e8 + uVar6 * 8) & uVar9, uVar6 == 0)) {
    *(undefined2 *)(param_1 + 1) = 2;
    *param_1 = 0xd00000003;
    return;
  }
  if (*(int *)(*param_4 + 0x18) == -1) {
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af4d10);
  }
  <mio::net::udp::mio::net::udp::UdpSocket>::recv_from
            (&local_78,(int *)(*param_4 + 0x18),param_4[1],param_4[2]);
  uVar3 = local_78;
  if (sStack_70 == 2) {
    uVar10 = local_78 & 3;
    if (uVar10 < 2) {
      if (uVar10 == 0) {
        cVar4 = *(char *)(local_78 + 0x10);
      }
      else {
        cVar4 = *(char *)(local_78 + 0x1f);
      }
    }
    else {
      if (uVar10 != 2) {
        if (((uint)(local_78 >> 0x20) & 0xff) != 0xd) goto LAB_009a5bd8;
        goto LAB_009a5c2c;
      }
                    /* try { // try from 009a5c0c to 009a5c1f has its CatchHandler @ 009a5d08 */
      lVar5 = core::io::error::os_functions::get_os_functions();
      cVar4 = (**(code **)(lVar5 + 8))(uVar3 >> 0x20);
    }
    if (cVar4 == '\r') {
LAB_009a5c2c:
      uVar7 = *puVar1;
      do {
        while( true ) {
          if (((uint)uVar9 >> 0x10 & 0xff) != (uint)(byte)(uVar7 >> 0x10)) goto LAB_009a5c7c;
          uVar8 = *puVar1;
          if (uVar8 == uVar7) break;
          ClearExclusiveLocal();
          uVar7 = uVar8;
        }
        cVar4 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar2) {
          *puVar1 = uVar7 & (uVar6 & 0x33 ^ 0xff003f);
          cVar4 = ExclusiveMonitorsStatus();
        }
        uVar7 = uVar8;
      } while (cVar4 != '\0');
LAB_009a5c7c:
      *param_1 = 0xd00000003;
      *(undefined2 *)(param_1 + 1) = 2;
      if ((1 < uVar10 - 2) && (uVar10 != 0)) {
        local_48 = uVar3 - 1;
        local_50 = 3;
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_48);
        return;
      }
      return;
    }
  }
LAB_009a5bd8:
  param_1[1] = CONCAT62(uStack_6e,sStack_70);
  *param_1 = local_78;
  param_1[3] = uStack_60;
  param_1[2] = local_68;
  param_1[4] = local_58;
  return;
}


// ===== 009a5d24  FUN_009a5d24 =====

void FUN_009a5d24(undefined8 *param_1,long param_2,ulong param_3,long *param_4)

{
  ulong *puVar1;
  bool bVar2;
  ulong uVar3;
  char cVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  uint local_d8;
  undefined4 uStack_d4;
  ulong uStack_d0;
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
  undefined1 local_50;
  long local_48;
  
  puVar1 = (ulong *)(*(long *)(param_2 + 0x10) + 0x90);
  uVar9 = *puVar1;
  if ((((param_3 ^ param_3 - 1) <= param_3 - 1) ||
      (uVar6 = (param_3 & 0xaaaaaaaaaaaaaaaa) >> 1 | (param_3 & 0x5555555555555555) << 1,
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2,
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4,
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8,
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10,
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20), 5 < uVar6)) ||
     (uVar6 = *(ulong *)(&DAT_0037c3e8 + uVar6 * 8) & uVar9, uVar6 == 0)) {
    *param_1 = 1;
    param_1[1] = 0xd00000003;
    return;
  }
  if (*(int *)(*param_4 + 0x18) == -1) {
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af4d10);
  }
  <mio::net::uds::datagram::mio::net::uds::datagram::UnixDatagram>::recv_from
            (&local_d8,(int *)(*param_4 + 0x18),param_4[1],param_4[2]);
  uVar3 = uStack_d0;
  if ((local_d8 & 1) != 0) {
    uVar10 = uStack_d0 & 3;
    if (uVar10 < 2) {
      if (uVar10 == 0) {
        cVar4 = *(char *)(uStack_d0 + 0x10);
      }
      else {
        cVar4 = *(char *)(uStack_d0 + 0x1f);
      }
    }
    else {
      if (uVar10 != 2) {
        if (((uint)(uStack_d0 >> 0x20) & 0xff) != 0xd) goto LAB_009a5df8;
        goto LAB_009a5e70;
      }
                    /* try { // try from 009a5e50 to 009a5e63 has its CatchHandler @ 009a5f48 */
      lVar5 = core::io::error::os_functions::get_os_functions();
      cVar4 = (**(code **)(lVar5 + 8))(uVar3 >> 0x20);
    }
    if (cVar4 == '\r') {
LAB_009a5e70:
      uVar7 = *puVar1;
      do {
        while( true ) {
          if (((uint)uVar9 >> 0x10 & 0xff) != (uint)(byte)(uVar7 >> 0x10)) goto LAB_009a5ec0;
          uVar8 = *puVar1;
          if (uVar8 == uVar7) break;
          ClearExclusiveLocal();
          uVar7 = uVar8;
        }
        cVar4 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar2) {
          *puVar1 = uVar7 & (uVar6 & 0x33 ^ 0xff003f);
          cVar4 = ExclusiveMonitorsStatus();
        }
        uVar7 = uVar8;
      } while (cVar4 != '\0');
LAB_009a5ec0:
      *param_1 = 1;
      param_1[1] = 0xd00000003;
      if ((1 < uVar10 - 2) && (uVar10 != 0)) {
        local_48 = uVar3 - 1;
        local_50 = 3;
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_48);
        return;
      }
      return;
    }
  }
LAB_009a5df8:
  param_1[0xd] = uStack_70;
  param_1[0xc] = local_78;
  param_1[0xf] = uStack_60;
  param_1[0xe] = local_68;
  param_1[0x10] = local_58;
  param_1[5] = uStack_b0;
  param_1[4] = local_b8;
  param_1[7] = uStack_a0;
  param_1[6] = local_a8;
  param_1[9] = uStack_90;
  param_1[8] = local_98;
  param_1[0xb] = uStack_80;
  param_1[10] = local_88;
  param_1[1] = uStack_d0;
  *param_1 = CONCAT44(uStack_d4,local_d8);
  param_1[3] = uStack_c0;
  param_1[2] = local_c8;
  return;
}


// ===== 009a5f64  FUN_009a5f64 =====

undefined1  [16] FUN_009a5f64(long param_1,ulong param_2,long *param_3)

{
  ulong *puVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  undefined8 local_60;
  long lStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar1 = (ulong *)(*(long *)(param_1 + 0x10) + 0x90);
  uVar10 = *puVar1;
  if ((param_2 - 1 < (param_2 ^ param_2 - 1)) &&
     (uVar6 = (param_2 & 0xaaaaaaaaaaaaaaaa) >> 1 | (param_2 & 0x5555555555555555) << 1,
     uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2,
     uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4,
     uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8,
     uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10,
     uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20), uVar6 < 6)) {
    uVar11 = *(ulong *)(&DAT_0037c3e8 + uVar6 * 8) & uVar10;
    uVar6 = 0xd00000003;
    if (uVar11 != 0) {
      if (*(int *)(*param_3 + 0x18) == -1) {
                    /* WARNING: Subroutine does not return */
        core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af4d10);
      }
      puVar7 = (undefined8 *)param_3[3];
      lStack_58 = puVar7[1];
      local_60 = *puVar7;
      uStack_48 = puVar7[3];
      local_50 = puVar7[2];
      auVar13 = <mio::net::udp::mio::net::udp::UdpSocket>::send_to
                          ((int *)(*param_3 + 0x18),param_3[1],param_3[2],&local_60);
      uVar6 = auVar13._8_8_;
      if ((auVar13 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
        uVar4 = 0;
        goto LAB_009a60f0;
      }
      uVar12 = uVar6 & 3;
      if (uVar12 < 2) {
        if ((auVar13 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
          cVar3 = *(char *)(uVar6 + 0x10);
        }
        else {
          cVar3 = *(char *)(uVar6 + 0x1f);
        }
joined_r0x009a6118:
        if (cVar3 != '\r') goto LAB_009a6030;
      }
      else {
        if (uVar12 == 2) {
                    /* try { // try from 009a6048 to 009a605b has its CatchHandler @ 009a6140 */
          lVar5 = core::io::error::os_functions::get_os_functions();
          cVar3 = (**(code **)(lVar5 + 8))(uVar6 >> 0x20);
          goto joined_r0x009a6118;
        }
        if ((auVar13._12_4_ & 0xff) != 0xd) goto LAB_009a6030;
      }
      uVar8 = *puVar1;
      do {
        while( true ) {
          if (((uint)uVar10 >> 0x10 & 0xff) != (uint)(byte)(uVar8 >> 0x10)) goto LAB_009a60b8;
          uVar9 = *puVar1;
          if (uVar9 == uVar8) break;
          ClearExclusiveLocal();
          uVar8 = uVar9;
        }
        cVar3 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar2) {
          *puVar1 = uVar8 & (uVar11 & 0x33 ^ 0xff003f);
          cVar3 = ExclusiveMonitorsStatus();
        }
        uVar8 = uVar9;
      } while (cVar3 != '\0');
LAB_009a60b8:
      if ((1 < uVar12 - 2) && ((auVar13 & (undefined1  [16])0x3) != (undefined1  [16])0x0)) {
        lStack_58 = uVar6 - 1;
        local_60 = CONCAT71(local_60._1_7_,3);
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&lStack_58);
      }
      uVar4 = 1;
      uVar6 = 0xd00000003;
      goto LAB_009a60f0;
    }
  }
  else {
    uVar6 = 0xd00000003;
  }
LAB_009a6030:
  uVar4 = 1;
LAB_009a60f0:
  auVar13._8_8_ = uVar6;
  auVar13._0_8_ = uVar4;
  return auVar13;
}


// ===== 009a615c  FUN_009a615c =====

undefined1  [16] FUN_009a615c(long param_1,ulong param_2,long *param_3)

{
  ulong *puVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  long local_48;
  
  puVar1 = (ulong *)(*(long *)(param_1 + 0x10) + 0x90);
  uVar9 = *puVar1;
  if ((param_2 - 1 < (param_2 ^ param_2 - 1)) &&
     (uVar6 = (param_2 & 0xaaaaaaaaaaaaaaaa) >> 1 | (param_2 & 0x5555555555555555) << 1,
     uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2,
     uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4,
     uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8,
     uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10,
     uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20), uVar6 < 6)) {
    uVar11 = *(ulong *)(&DAT_0037c3e8 + uVar6 * 8) & uVar9;
    uVar6 = 0xd00000003;
    if (uVar11 != 0) {
      if (*(int *)(*param_3 + 0x18) == -1) {
                    /* WARNING: Subroutine does not return */
        core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af4d10);
      }
      auVar12 = <mio::net::udp::mio::net::udp::UdpSocket>::peek
                          ((int *)(*param_3 + 0x18),param_3[1],param_3[2]);
      uVar6 = auVar12._8_8_;
      if ((auVar12 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
        uVar4 = 0;
        goto LAB_009a62d0;
      }
      uVar10 = uVar6 & 3;
      if (uVar10 < 2) {
        if ((auVar12 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
          cVar3 = *(char *)(uVar6 + 0x10);
        }
        else {
          cVar3 = *(char *)(uVar6 + 0x1f);
        }
joined_r0x009a62f8:
        if (cVar3 != '\r') goto LAB_009a6210;
      }
      else {
        if (uVar10 == 2) {
                    /* try { // try from 009a6228 to 009a623b has its CatchHandler @ 009a6320 */
          lVar5 = core::io::error::os_functions::get_os_functions();
          cVar3 = (**(code **)(lVar5 + 8))(uVar6 >> 0x20);
          goto joined_r0x009a62f8;
        }
        if ((auVar12._12_4_ & 0xff) != 0xd) goto LAB_009a6210;
      }
      uVar7 = *puVar1;
      do {
        while( true ) {
          if (((uint)uVar9 >> 0x10 & 0xff) != (uint)(byte)(uVar7 >> 0x10)) goto LAB_009a6298;
          uVar8 = *puVar1;
          if (uVar8 == uVar7) break;
          ClearExclusiveLocal();
          uVar7 = uVar8;
        }
        cVar3 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar2) {
          *puVar1 = uVar7 & (uVar11 & 0x33 ^ 0xff003f);
          cVar3 = ExclusiveMonitorsStatus();
        }
        uVar7 = uVar8;
      } while (cVar3 != '\0');
LAB_009a6298:
      if ((1 < uVar10 - 2) && ((auVar12 & (undefined1  [16])0x3) != (undefined1  [16])0x0)) {
        local_48 = uVar6 - 1;
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_48);
      }
      uVar4 = 1;
      uVar6 = 0xd00000003;
      goto LAB_009a62d0;
    }
  }
  else {
    uVar6 = 0xd00000003;
  }
LAB_009a6210:
  uVar4 = 1;
LAB_009a62d0:
  auVar12._8_8_ = uVar6;
  auVar12._0_8_ = uVar4;
  return auVar12;
}


// ===== 009a633c  FUN_009a633c =====

undefined1  [16] FUN_009a633c(long param_1,ulong param_2,long *param_3)

{
  ulong *puVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  long local_48;
  
  puVar1 = (ulong *)(*(long *)(param_1 + 0x10) + 0x90);
  uVar9 = *puVar1;
  if ((param_2 - 1 < (param_2 ^ param_2 - 1)) &&
     (uVar6 = (param_2 & 0xaaaaaaaaaaaaaaaa) >> 1 | (param_2 & 0x5555555555555555) << 1,
     uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2,
     uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4,
     uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8,
     uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10,
     uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20), uVar6 < 6)) {
    uVar11 = *(ulong *)(&DAT_0037c3e8 + uVar6 * 8) & uVar9;
    uVar6 = 0xd00000003;
    if (uVar11 != 0) {
      if (*(int *)(*param_3 + 0x18) == -1) {
                    /* WARNING: Subroutine does not return */
        core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af4d10);
      }
      auVar12 = <mio::net::udp::mio::net::udp::UdpSocket>::recv
                          ((int *)(*param_3 + 0x18),param_3[1],param_3[2]);
      uVar6 = auVar12._8_8_;
      if ((auVar12 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
        uVar4 = 0;
        goto LAB_009a64b0;
      }
      uVar10 = uVar6 & 3;
      if (uVar10 < 2) {
        if ((auVar12 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
          cVar3 = *(char *)(uVar6 + 0x10);
        }
        else {
          cVar3 = *(char *)(uVar6 + 0x1f);
        }
joined_r0x009a64d8:
        if (cVar3 != '\r') goto LAB_009a63f0;
      }
      else {
        if (uVar10 == 2) {
                    /* try { // try from 009a6408 to 009a641b has its CatchHandler @ 009a6500 */
          lVar5 = core::io::error::os_functions::get_os_functions();
          cVar3 = (**(code **)(lVar5 + 8))(uVar6 >> 0x20);
          goto joined_r0x009a64d8;
        }
        if ((auVar12._12_4_ & 0xff) != 0xd) goto LAB_009a63f0;
      }
      uVar7 = *puVar1;
      do {
        while( true ) {
          if (((uint)uVar9 >> 0x10 & 0xff) != (uint)(byte)(uVar7 >> 0x10)) goto LAB_009a6478;
          uVar8 = *puVar1;
          if (uVar8 == uVar7) break;
          ClearExclusiveLocal();
          uVar7 = uVar8;
        }
        cVar3 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar2) {
          *puVar1 = uVar7 & (uVar11 & 0x33 ^ 0xff003f);
          cVar3 = ExclusiveMonitorsStatus();
        }
        uVar7 = uVar8;
      } while (cVar3 != '\0');
LAB_009a6478:
      if ((1 < uVar10 - 2) && ((auVar12 & (undefined1  [16])0x3) != (undefined1  [16])0x0)) {
        local_48 = uVar6 - 1;
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_48);
      }
      uVar4 = 1;
      uVar6 = 0xd00000003;
      goto LAB_009a64b0;
    }
  }
  else {
    uVar6 = 0xd00000003;
  }
LAB_009a63f0:
  uVar4 = 1;
LAB_009a64b0:
  auVar12._8_8_ = uVar6;
  auVar12._0_8_ = uVar4;
  return auVar12;
}


// ===== 009a651c  FUN_009a651c =====

undefined1  [16] FUN_009a651c(long param_1,ulong param_2,long *param_3)

{
  ulong *puVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  long local_48;
  
  puVar1 = (ulong *)(*(long *)(param_1 + 0x10) + 0x90);
  uVar9 = *puVar1;
  if ((param_2 - 1 < (param_2 ^ param_2 - 1)) &&
     (uVar6 = (param_2 & 0xaaaaaaaaaaaaaaaa) >> 1 | (param_2 & 0x5555555555555555) << 1,
     uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2,
     uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4,
     uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8,
     uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10,
     uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20), uVar6 < 6)) {
    uVar11 = *(ulong *)(&DAT_0037c3e8 + uVar6 * 8) & uVar9;
    uVar6 = 0xd00000003;
    if (uVar11 != 0) {
      if (*(int *)(*param_3 + 0x18) == -1) {
                    /* WARNING: Subroutine does not return */
        core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af4d10);
      }
      auVar12 = <mio::net::udp::mio::net::udp::UdpSocket>::send
                          ((int *)(*param_3 + 0x18),param_3[1],param_3[2]);
      uVar6 = auVar12._8_8_;
      if ((auVar12 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
        uVar4 = 0;
        goto LAB_009a6690;
      }
      uVar10 = uVar6 & 3;
      if (uVar10 < 2) {
        if ((auVar12 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
          cVar3 = *(char *)(uVar6 + 0x10);
        }
        else {
          cVar3 = *(char *)(uVar6 + 0x1f);
        }
joined_r0x009a66b8:
        if (cVar3 != '\r') goto LAB_009a65d0;
      }
      else {
        if (uVar10 == 2) {
                    /* try { // try from 009a65e8 to 009a65fb has its CatchHandler @ 009a66e0 */
          lVar5 = core::io::error::os_functions::get_os_functions();
          cVar3 = (**(code **)(lVar5 + 8))(uVar6 >> 0x20);
          goto joined_r0x009a66b8;
        }
        if ((auVar12._12_4_ & 0xff) != 0xd) goto LAB_009a65d0;
      }
      uVar7 = *puVar1;
      do {
        while( true ) {
          if (((uint)uVar9 >> 0x10 & 0xff) != (uint)(byte)(uVar7 >> 0x10)) goto LAB_009a6658;
          uVar8 = *puVar1;
          if (uVar8 == uVar7) break;
          ClearExclusiveLocal();
          uVar7 = uVar8;
        }
        cVar3 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar2) {
          *puVar1 = uVar7 & (uVar11 & 0x33 ^ 0xff003f);
          cVar3 = ExclusiveMonitorsStatus();
        }
        uVar7 = uVar8;
      } while (cVar3 != '\0');
LAB_009a6658:
      if ((1 < uVar10 - 2) && ((auVar12 & (undefined1  [16])0x3) != (undefined1  [16])0x0)) {
        local_48 = uVar6 - 1;
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_48);
      }
      uVar4 = 1;
      uVar6 = 0xd00000003;
      goto LAB_009a6690;
    }
  }
  else {
    uVar6 = 0xd00000003;
  }
LAB_009a65d0:
  uVar4 = 1;
LAB_009a6690:
  auVar12._8_8_ = uVar6;
  auVar12._0_8_ = uVar4;
  return auVar12;
}


// ===== 009a66fc  FUN_009a66fc =====

undefined1  [16] FUN_009a66fc(long param_1,ulong param_2,long *param_3)

{
  ulong *puVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  int *local_50;
  long local_48;
  
  puVar1 = (ulong *)(*(long *)(param_1 + 0x10) + 0x90);
  uVar9 = *puVar1;
  if ((param_2 - 1 < (param_2 ^ param_2 - 1)) &&
     (uVar6 = (param_2 & 0xaaaaaaaaaaaaaaaa) >> 1 | (param_2 & 0x5555555555555555) << 1,
     uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2,
     uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4,
     uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8,
     uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10,
     uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20), uVar6 < 6)) {
    uVar11 = *(ulong *)(&DAT_0037c3e8 + uVar6 * 8) & uVar9;
    uVar6 = 0xd00000003;
    if (uVar11 != 0) {
      local_50 = (int *)(*param_3 + 0x18);
      if (*local_50 == -1) {
                    /* WARNING: Subroutine does not return */
        core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af4d10);
      }
      auVar12 = <&mio::net::tcp::stream::TcpStream_as_alloc::io::read::Read>::read_vectored
                          (&local_50,param_3[1],param_3[2]);
      uVar6 = auVar12._8_8_;
      if ((auVar12 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
        uVar4 = 0;
        goto LAB_009a6878;
      }
      uVar10 = uVar6 & 3;
      if (uVar10 < 2) {
        if ((auVar12 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
          cVar3 = *(char *)(uVar6 + 0x10);
        }
        else {
          cVar3 = *(char *)(uVar6 + 0x1f);
        }
joined_r0x009a68a0:
        if (cVar3 != '\r') goto LAB_009a67b8;
      }
      else {
        if (uVar10 == 2) {
                    /* try { // try from 009a67d0 to 009a67e3 has its CatchHandler @ 009a68c8 */
          lVar5 = core::io::error::os_functions::get_os_functions();
          cVar3 = (**(code **)(lVar5 + 8))(uVar6 >> 0x20);
          goto joined_r0x009a68a0;
        }
        if ((auVar12._12_4_ & 0xff) != 0xd) goto LAB_009a67b8;
      }
      uVar7 = *puVar1;
      do {
        while( true ) {
          if (((uint)uVar9 >> 0x10 & 0xff) != (uint)(byte)(uVar7 >> 0x10)) goto LAB_009a6840;
          uVar8 = *puVar1;
          if (uVar8 == uVar7) break;
          ClearExclusiveLocal();
          uVar7 = uVar8;
        }
        cVar3 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar2) {
          *puVar1 = uVar7 & (uVar11 & 0x33 ^ 0xff003f);
          cVar3 = ExclusiveMonitorsStatus();
        }
        uVar7 = uVar8;
      } while (cVar3 != '\0');
LAB_009a6840:
      if ((1 < uVar10 - 2) && ((auVar12 & (undefined1  [16])0x3) != (undefined1  [16])0x0)) {
        local_48 = uVar6 - 1;
        local_50 = (int *)CONCAT71(local_50._1_7_,3);
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_48);
      }
      uVar4 = 1;
      uVar6 = 0xd00000003;
      goto LAB_009a6878;
    }
  }
  else {
    uVar6 = 0xd00000003;
  }
LAB_009a67b8:
  uVar4 = 1;
LAB_009a6878:
  auVar12._8_8_ = uVar6;
  auVar12._0_8_ = uVar4;
  return auVar12;
}


// ===== 009a68e4  FUN_009a68e4 =====

undefined1  [16] FUN_009a68e4(long param_1,ulong param_2,long *param_3)

{
  ulong *puVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  int *local_50;
  long local_48;
  
  puVar1 = (ulong *)(*(long *)(param_1 + 0x10) + 0x90);
  uVar9 = *puVar1;
  if ((param_2 - 1 < (param_2 ^ param_2 - 1)) &&
     (uVar6 = (param_2 & 0xaaaaaaaaaaaaaaaa) >> 1 | (param_2 & 0x5555555555555555) << 1,
     uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2,
     uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4,
     uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8,
     uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10,
     uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20), uVar6 < 6)) {
    uVar11 = *(ulong *)(&DAT_0037c3e8 + uVar6 * 8) & uVar9;
    uVar6 = 0xd00000003;
    if (uVar11 != 0) {
      local_50 = (int *)(*param_3 + 0x18);
      if (*local_50 == -1) {
                    /* WARNING: Subroutine does not return */
        core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af4d10);
      }
      auVar12 = <&mio::net::tcp::stream::TcpStream_as_core::io::write::Write>::write_vectored
                          (&local_50,param_3[1],param_3[2]);
      uVar6 = auVar12._8_8_;
      if ((auVar12 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
        uVar4 = 0;
        goto LAB_009a6a60;
      }
      uVar10 = uVar6 & 3;
      if (uVar10 < 2) {
        if ((auVar12 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
          cVar3 = *(char *)(uVar6 + 0x10);
        }
        else {
          cVar3 = *(char *)(uVar6 + 0x1f);
        }
joined_r0x009a6a88:
        if (cVar3 != '\r') goto LAB_009a69a0;
      }
      else {
        if (uVar10 == 2) {
                    /* try { // try from 009a69b8 to 009a69cb has its CatchHandler @ 009a6ab0 */
          lVar5 = core::io::error::os_functions::get_os_functions();
          cVar3 = (**(code **)(lVar5 + 8))(uVar6 >> 0x20);
          goto joined_r0x009a6a88;
        }
        if ((auVar12._12_4_ & 0xff) != 0xd) goto LAB_009a69a0;
      }
      uVar7 = *puVar1;
      do {
        while( true ) {
          if (((uint)uVar9 >> 0x10 & 0xff) != (uint)(byte)(uVar7 >> 0x10)) goto LAB_009a6a28;
          uVar8 = *puVar1;
          if (uVar8 == uVar7) break;
          ClearExclusiveLocal();
          uVar7 = uVar8;
        }
        cVar3 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar2) {
          *puVar1 = uVar7 & (uVar11 & 0x33 ^ 0xff003f);
          cVar3 = ExclusiveMonitorsStatus();
        }
        uVar7 = uVar8;
      } while (cVar3 != '\0');
LAB_009a6a28:
      if ((1 < uVar10 - 2) && ((auVar12 & (undefined1  [16])0x3) != (undefined1  [16])0x0)) {
        local_48 = uVar6 - 1;
        local_50 = (int *)CONCAT71(local_50._1_7_,3);
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_48);
      }
      uVar4 = 1;
      uVar6 = 0xd00000003;
      goto LAB_009a6a60;
    }
  }
  else {
    uVar6 = 0xd00000003;
  }
LAB_009a69a0:
  uVar4 = 1;
LAB_009a6a60:
  auVar12._8_8_ = uVar6;
  auVar12._0_8_ = uVar4;
  return auVar12;
}


// ===== 009a6acc  FUN_009a6acc =====

undefined1  [16] FUN_009a6acc(long param_1,ulong param_2,long *param_3)

{
  ulong *puVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  int *local_50;
  long local_48;
  
  puVar1 = (ulong *)(*(long *)(param_1 + 0x10) + 0x90);
  uVar9 = *puVar1;
  if ((param_2 - 1 < (param_2 ^ param_2 - 1)) &&
     (uVar6 = (param_2 & 0xaaaaaaaaaaaaaaaa) >> 1 | (param_2 & 0x5555555555555555) << 1,
     uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2,
     uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4,
     uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8,
     uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10,
     uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20), uVar6 < 6)) {
    uVar11 = *(ulong *)(&DAT_0037c3e8 + uVar6 * 8) & uVar9;
    uVar6 = 0xd00000003;
    if (uVar11 != 0) {
      local_50 = (int *)(*param_3 + 0x18);
      if (*local_50 == -1) {
                    /* WARNING: Subroutine does not return */
        core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af4d10);
      }
      auVar12 = <&mio::net::tcp::stream::TcpStream_as_alloc::io::read::Read>::read
                          (&local_50,param_3[1],param_3[2]);
      uVar6 = auVar12._8_8_;
      if ((auVar12 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
        uVar4 = 0;
        goto LAB_009a6c48;
      }
      uVar10 = uVar6 & 3;
      if (uVar10 < 2) {
        if ((auVar12 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
          cVar3 = *(char *)(uVar6 + 0x10);
        }
        else {
          cVar3 = *(char *)(uVar6 + 0x1f);
        }
joined_r0x009a6c70:
        if (cVar3 != '\r') goto LAB_009a6b88;
      }
      else {
        if (uVar10 == 2) {
                    /* try { // try from 009a6ba0 to 009a6bb3 has its CatchHandler @ 009a6c98 */
          lVar5 = core::io::error::os_functions::get_os_functions();
          cVar3 = (**(code **)(lVar5 + 8))(uVar6 >> 0x20);
          goto joined_r0x009a6c70;
        }
        if ((auVar12._12_4_ & 0xff) != 0xd) goto LAB_009a6b88;
      }
      uVar7 = *puVar1;
      do {
        while( true ) {
          if (((uint)uVar9 >> 0x10 & 0xff) != (uint)(byte)(uVar7 >> 0x10)) goto LAB_009a6c10;
          uVar8 = *puVar1;
          if (uVar8 == uVar7) break;
          ClearExclusiveLocal();
          uVar7 = uVar8;
        }
        cVar3 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar2) {
          *puVar1 = uVar7 & (uVar11 & 0x33 ^ 0xff003f);
          cVar3 = ExclusiveMonitorsStatus();
        }
        uVar7 = uVar8;
      } while (cVar3 != '\0');
LAB_009a6c10:
      if ((1 < uVar10 - 2) && ((auVar12 & (undefined1  [16])0x3) != (undefined1  [16])0x0)) {
        local_48 = uVar6 - 1;
        local_50 = (int *)CONCAT71(local_50._1_7_,3);
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_48);
      }
      uVar4 = 1;
      uVar6 = 0xd00000003;
      goto LAB_009a6c48;
    }
  }
  else {
    uVar6 = 0xd00000003;
  }
LAB_009a6b88:
  uVar4 = 1;
LAB_009a6c48:
  auVar12._8_8_ = uVar6;
  auVar12._0_8_ = uVar4;
  return auVar12;
}


// ===== 009a6cb4  FUN_009a6cb4 =====

undefined1  [16] FUN_009a6cb4(long param_1,ulong param_2,long *param_3)

{
  ulong *puVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  int *local_50;
  long local_48;
  
  puVar1 = (ulong *)(*(long *)(param_1 + 0x10) + 0x90);
  uVar9 = *puVar1;
  if ((param_2 - 1 < (param_2 ^ param_2 - 1)) &&
     (uVar6 = (param_2 & 0xaaaaaaaaaaaaaaaa) >> 1 | (param_2 & 0x5555555555555555) << 1,
     uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2,
     uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4,
     uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8,
     uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10,
     uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20), uVar6 < 6)) {
    uVar11 = *(ulong *)(&DAT_0037c3e8 + uVar6 * 8) & uVar9;
    uVar6 = 0xd00000003;
    if (uVar11 != 0) {
      local_50 = (int *)(*param_3 + 0x18);
      if (*local_50 == -1) {
                    /* WARNING: Subroutine does not return */
        core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af4d10);
      }
      auVar12 = <&mio::net::tcp::stream::TcpStream_as_core::io::write::Write>::write
                          (&local_50,param_3[1],param_3[2]);
      uVar6 = auVar12._8_8_;
      if ((auVar12 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
        uVar4 = 0;
        goto LAB_009a6e30;
      }
      uVar10 = uVar6 & 3;
      if (uVar10 < 2) {
        if ((auVar12 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
          cVar3 = *(char *)(uVar6 + 0x10);
        }
        else {
          cVar3 = *(char *)(uVar6 + 0x1f);
        }
joined_r0x009a6e58:
        if (cVar3 != '\r') goto LAB_009a6d70;
      }
      else {
        if (uVar10 == 2) {
                    /* try { // try from 009a6d88 to 009a6d9b has its CatchHandler @ 009a6e80 */
          lVar5 = core::io::error::os_functions::get_os_functions();
          cVar3 = (**(code **)(lVar5 + 8))(uVar6 >> 0x20);
          goto joined_r0x009a6e58;
        }
        if ((auVar12._12_4_ & 0xff) != 0xd) goto LAB_009a6d70;
      }
      uVar7 = *puVar1;
      do {
        while( true ) {
          if (((uint)uVar9 >> 0x10 & 0xff) != (uint)(byte)(uVar7 >> 0x10)) goto LAB_009a6df8;
          uVar8 = *puVar1;
          if (uVar8 == uVar7) break;
          ClearExclusiveLocal();
          uVar7 = uVar8;
        }
        cVar3 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar2) {
          *puVar1 = uVar7 & (uVar11 & 0x33 ^ 0xff003f);
          cVar3 = ExclusiveMonitorsStatus();
        }
        uVar7 = uVar8;
      } while (cVar3 != '\0');
LAB_009a6df8:
      if ((1 < uVar10 - 2) && ((auVar12 & (undefined1  [16])0x3) != (undefined1  [16])0x0)) {
        local_48 = uVar6 - 1;
        local_50 = (int *)CONCAT71(local_50._1_7_,3);
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_48);
      }
      uVar4 = 1;
      uVar6 = 0xd00000003;
      goto LAB_009a6e30;
    }
  }
  else {
    uVar6 = 0xd00000003;
  }
LAB_009a6d70:
  uVar4 = 1;
LAB_009a6e30:
  auVar12._8_8_ = uVar6;
  auVar12._0_8_ = uVar4;
  return auVar12;
}


// ===== 009a6e9c  FUN_009a6e9c =====

undefined1  [16] FUN_009a6e9c(long param_1,ulong param_2,long *param_3)

{
  ulong *puVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  int *local_50;
  long local_48;
  
  puVar1 = (ulong *)(*(long *)(param_1 + 0x10) + 0x90);
  uVar9 = *puVar1;
  if ((param_2 - 1 < (param_2 ^ param_2 - 1)) &&
     (uVar6 = (param_2 & 0xaaaaaaaaaaaaaaaa) >> 1 | (param_2 & 0x5555555555555555) << 1,
     uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2,
     uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4,
     uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8,
     uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10,
     uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20), uVar6 < 6)) {
    uVar11 = *(ulong *)(&DAT_0037c3e8 + uVar6 * 8) & uVar9;
    uVar6 = 0xd00000003;
    if (uVar11 != 0) {
      local_50 = (int *)(*param_3 + 0x18);
      if (*local_50 == -1) {
                    /* WARNING: Subroutine does not return */
        core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af4d10);
      }
      auVar12 = <&mio::net::uds::stream::UnixStream_as_alloc::io::read::Read>::read_vectored
                          (&local_50,param_3[1],param_3[2]);
      uVar6 = auVar12._8_8_;
      if ((auVar12 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
        uVar4 = 0;
        goto LAB_009a7018;
      }
      uVar10 = uVar6 & 3;
      if (uVar10 < 2) {
        if ((auVar12 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
          cVar3 = *(char *)(uVar6 + 0x10);
        }
        else {
          cVar3 = *(char *)(uVar6 + 0x1f);
        }
joined_r0x009a7040:
        if (cVar3 != '\r') goto LAB_009a6f58;
      }
      else {
        if (uVar10 == 2) {
                    /* try { // try from 009a6f70 to 009a6f83 has its CatchHandler @ 009a7068 */
          lVar5 = core::io::error::os_functions::get_os_functions();
          cVar3 = (**(code **)(lVar5 + 8))(uVar6 >> 0x20);
          goto joined_r0x009a7040;
        }
        if ((auVar12._12_4_ & 0xff) != 0xd) goto LAB_009a6f58;
      }
      uVar7 = *puVar1;
      do {
        while( true ) {
          if (((uint)uVar9 >> 0x10 & 0xff) != (uint)(byte)(uVar7 >> 0x10)) goto LAB_009a6fe0;
          uVar8 = *puVar1;
          if (uVar8 == uVar7) break;
          ClearExclusiveLocal();
          uVar7 = uVar8;
        }
        cVar3 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar2) {
          *puVar1 = uVar7 & (uVar11 & 0x33 ^ 0xff003f);
          cVar3 = ExclusiveMonitorsStatus();
        }
        uVar7 = uVar8;
      } while (cVar3 != '\0');
LAB_009a6fe0:
      if ((1 < uVar10 - 2) && ((auVar12 & (undefined1  [16])0x3) != (undefined1  [16])0x0)) {
        local_48 = uVar6 - 1;
        local_50 = (int *)CONCAT71(local_50._1_7_,3);
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_48);
      }
      uVar4 = 1;
      uVar6 = 0xd00000003;
      goto LAB_009a7018;
    }
  }
  else {
    uVar6 = 0xd00000003;
  }
LAB_009a6f58:
  uVar4 = 1;
LAB_009a7018:
  auVar12._8_8_ = uVar6;
  auVar12._0_8_ = uVar4;
  return auVar12;
}


// ===== 009a7084  FUN_009a7084 =====

undefined1  [16] FUN_009a7084(long param_1,ulong param_2,long *param_3)

{
  ulong *puVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  int *local_50;
  long local_48;
  
  puVar1 = (ulong *)(*(long *)(param_1 + 0x10) + 0x90);
  uVar9 = *puVar1;
  if ((param_2 - 1 < (param_2 ^ param_2 - 1)) &&
     (uVar6 = (param_2 & 0xaaaaaaaaaaaaaaaa) >> 1 | (param_2 & 0x5555555555555555) << 1,
     uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2,
     uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4,
     uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8,
     uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10,
     uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20), uVar6 < 6)) {
    uVar11 = *(ulong *)(&DAT_0037c3e8 + uVar6 * 8) & uVar9;
    uVar6 = 0xd00000003;
    if (uVar11 != 0) {
      local_50 = (int *)(*param_3 + 0x18);
      if (*local_50 == -1) {
                    /* WARNING: Subroutine does not return */
        core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af4d10);
      }
      auVar12 = <&mio::net::uds::stream::UnixStream_as_core::io::write::Write>::write_vectored
                          (&local_50,param_3[1],param_3[2]);
      uVar6 = auVar12._8_8_;
      if ((auVar12 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
        uVar4 = 0;
        goto LAB_009a7200;
      }
      uVar10 = uVar6 & 3;
      if (uVar10 < 2) {
        if ((auVar12 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
          cVar3 = *(char *)(uVar6 + 0x10);
        }
        else {
          cVar3 = *(char *)(uVar6 + 0x1f);
        }
joined_r0x009a7228:
        if (cVar3 != '\r') goto LAB_009a7140;
      }
      else {
        if (uVar10 == 2) {
                    /* try { // try from 009a7158 to 009a716b has its CatchHandler @ 009a7250 */
          lVar5 = core::io::error::os_functions::get_os_functions();
          cVar3 = (**(code **)(lVar5 + 8))(uVar6 >> 0x20);
          goto joined_r0x009a7228;
        }
        if ((auVar12._12_4_ & 0xff) != 0xd) goto LAB_009a7140;
      }
      uVar7 = *puVar1;
      do {
        while( true ) {
          if (((uint)uVar9 >> 0x10 & 0xff) != (uint)(byte)(uVar7 >> 0x10)) goto LAB_009a71c8;
          uVar8 = *puVar1;
          if (uVar8 == uVar7) break;
          ClearExclusiveLocal();
          uVar7 = uVar8;
        }
        cVar3 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar2) {
          *puVar1 = uVar7 & (uVar11 & 0x33 ^ 0xff003f);
          cVar3 = ExclusiveMonitorsStatus();
        }
        uVar7 = uVar8;
      } while (cVar3 != '\0');
LAB_009a71c8:
      if ((1 < uVar10 - 2) && ((auVar12 & (undefined1  [16])0x3) != (undefined1  [16])0x0)) {
        local_48 = uVar6 - 1;
        local_50 = (int *)CONCAT71(local_50._1_7_,3);
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_48);
      }
      uVar4 = 1;
      uVar6 = 0xd00000003;
      goto LAB_009a7200;
    }
  }
  else {
    uVar6 = 0xd00000003;
  }
LAB_009a7140:
  uVar4 = 1;
LAB_009a7200:
  auVar12._8_8_ = uVar6;
  auVar12._0_8_ = uVar4;
  return auVar12;
}


// ===== 009a726c  FUN_009a726c =====

undefined1  [16] FUN_009a726c(long param_1,ulong param_2,long *param_3)

{
  ulong *puVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  int *local_50;
  long local_48;
  
  puVar1 = (ulong *)(*(long *)(param_1 + 0x10) + 0x90);
  uVar9 = *puVar1;
  if ((param_2 - 1 < (param_2 ^ param_2 - 1)) &&
     (uVar6 = (param_2 & 0xaaaaaaaaaaaaaaaa) >> 1 | (param_2 & 0x5555555555555555) << 1,
     uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2,
     uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4,
     uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8,
     uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10,
     uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20), uVar6 < 6)) {
    uVar11 = *(ulong *)(&DAT_0037c3e8 + uVar6 * 8) & uVar9;
    uVar6 = 0xd00000003;
    if (uVar11 != 0) {
      local_50 = (int *)(*param_3 + 0x18);
      if (*local_50 == -1) {
                    /* WARNING: Subroutine does not return */
        core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af4d10);
      }
      auVar12 = <&mio::net::uds::stream::UnixStream_as_alloc::io::read::Read>::read
                          (&local_50,param_3[1],param_3[2]);
      uVar6 = auVar12._8_8_;
      if ((auVar12 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
        uVar4 = 0;
        goto LAB_009a73e8;
      }
      uVar10 = uVar6 & 3;
      if (uVar10 < 2) {
        if ((auVar12 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
          cVar3 = *(char *)(uVar6 + 0x10);
        }
        else {
          cVar3 = *(char *)(uVar6 + 0x1f);
        }
joined_r0x009a7410:
        if (cVar3 != '\r') goto LAB_009a7328;
      }
      else {
        if (uVar10 == 2) {
                    /* try { // try from 009a7340 to 009a7353 has its CatchHandler @ 009a7438 */
          lVar5 = core::io::error::os_functions::get_os_functions();
          cVar3 = (**(code **)(lVar5 + 8))(uVar6 >> 0x20);
          goto joined_r0x009a7410;
        }
        if ((auVar12._12_4_ & 0xff) != 0xd) goto LAB_009a7328;
      }
      uVar7 = *puVar1;
      do {
        while( true ) {
          if (((uint)uVar9 >> 0x10 & 0xff) != (uint)(byte)(uVar7 >> 0x10)) goto LAB_009a73b0;
          uVar8 = *puVar1;
          if (uVar8 == uVar7) break;
          ClearExclusiveLocal();
          uVar7 = uVar8;
        }
        cVar3 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar2) {
          *puVar1 = uVar7 & (uVar11 & 0x33 ^ 0xff003f);
          cVar3 = ExclusiveMonitorsStatus();
        }
        uVar7 = uVar8;
      } while (cVar3 != '\0');
LAB_009a73b0:
      if ((1 < uVar10 - 2) && ((auVar12 & (undefined1  [16])0x3) != (undefined1  [16])0x0)) {
        local_48 = uVar6 - 1;
        local_50 = (int *)CONCAT71(local_50._1_7_,3);
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_48);
      }
      uVar4 = 1;
      uVar6 = 0xd00000003;
      goto LAB_009a73e8;
    }
  }
  else {
    uVar6 = 0xd00000003;
  }
LAB_009a7328:
  uVar4 = 1;
LAB_009a73e8:
  auVar12._8_8_ = uVar6;
  auVar12._0_8_ = uVar4;
  return auVar12;
}


// ===== 009a7454  FUN_009a7454 =====

undefined1  [16] FUN_009a7454(long param_1,ulong param_2,long *param_3)

{
  ulong *puVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  int *local_50;
  long local_48;
  
  puVar1 = (ulong *)(*(long *)(param_1 + 0x10) + 0x90);
  uVar9 = *puVar1;
  if ((param_2 - 1 < (param_2 ^ param_2 - 1)) &&
     (uVar6 = (param_2 & 0xaaaaaaaaaaaaaaaa) >> 1 | (param_2 & 0x5555555555555555) << 1,
     uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2,
     uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4,
     uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8,
     uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10,
     uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20), uVar6 < 6)) {
    uVar11 = *(ulong *)(&DAT_0037c3e8 + uVar6 * 8) & uVar9;
    uVar6 = 0xd00000003;
    if (uVar11 != 0) {
      local_50 = (int *)(*param_3 + 0x18);
      if (*local_50 == -1) {
                    /* WARNING: Subroutine does not return */
        core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af4d10);
      }
      auVar12 = <&mio::net::uds::stream::UnixStream_as_core::io::write::Write>::write
                          (&local_50,param_3[1],param_3[2]);
      uVar6 = auVar12._8_8_;
      if ((auVar12 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
        uVar4 = 0;
        goto LAB_009a75d0;
      }
      uVar10 = uVar6 & 3;
      if (uVar10 < 2) {
        if ((auVar12 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
          cVar3 = *(char *)(uVar6 + 0x10);
        }
        else {
          cVar3 = *(char *)(uVar6 + 0x1f);
        }
joined_r0x009a75f8:
        if (cVar3 != '\r') goto LAB_009a7510;
      }
      else {
        if (uVar10 == 2) {
                    /* try { // try from 009a7528 to 009a753b has its CatchHandler @ 009a7620 */
          lVar5 = core::io::error::os_functions::get_os_functions();
          cVar3 = (**(code **)(lVar5 + 8))(uVar6 >> 0x20);
          goto joined_r0x009a75f8;
        }
        if ((auVar12._12_4_ & 0xff) != 0xd) goto LAB_009a7510;
      }
      uVar7 = *puVar1;
      do {
        while( true ) {
          if (((uint)uVar9 >> 0x10 & 0xff) != (uint)(byte)(uVar7 >> 0x10)) goto LAB_009a7598;
          uVar8 = *puVar1;
          if (uVar8 == uVar7) break;
          ClearExclusiveLocal();
          uVar7 = uVar8;
        }
        cVar3 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar2) {
          *puVar1 = uVar7 & (uVar11 & 0x33 ^ 0xff003f);
          cVar3 = ExclusiveMonitorsStatus();
        }
        uVar7 = uVar8;
      } while (cVar3 != '\0');
LAB_009a7598:
      if ((1 < uVar10 - 2) && ((auVar12 & (undefined1  [16])0x3) != (undefined1  [16])0x0)) {
        local_48 = uVar6 - 1;
        local_50 = (int *)CONCAT71(local_50._1_7_,3);
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_48);
      }
      uVar4 = 1;
      uVar6 = 0xd00000003;
      goto LAB_009a75d0;
    }
  }
  else {
    uVar6 = 0xd00000003;
  }
LAB_009a7510:
  uVar4 = 1;
LAB_009a75d0:
  auVar12._8_8_ = uVar6;
  auVar12._0_8_ = uVar4;
  return auVar12;
}


// ===== 009a763c  FUN_009a763c =====

undefined1  [16] FUN_009a763c(long param_1,ulong param_2,long *param_3)

{
  ulong *puVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  long local_48;
  
  puVar1 = (ulong *)(*(long *)(param_1 + 0x10) + 0x90);
  uVar9 = *puVar1;
  if ((param_2 - 1 < (param_2 ^ param_2 - 1)) &&
     (uVar6 = (param_2 & 0xaaaaaaaaaaaaaaaa) >> 1 | (param_2 & 0x5555555555555555) << 1,
     uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2,
     uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4,
     uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8,
     uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10,
     uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20), uVar6 < 6)) {
    uVar11 = *(ulong *)(&DAT_0037c3e8 + uVar6 * 8) & uVar9;
    uVar6 = 0xd00000003;
    if (uVar11 != 0) {
      if (*(int *)(*param_3 + 0x18) == -1) {
                    /* WARNING: Subroutine does not return */
        core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af4d10);
      }
      auVar12 = <mio::net::uds::datagram::mio::net::uds::datagram::UnixDatagram>::recv
                          ((int *)(*param_3 + 0x18),param_3[1],param_3[2]);
      uVar6 = auVar12._8_8_;
      if ((auVar12 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
        uVar4 = 0;
        goto LAB_009a77b0;
      }
      uVar10 = uVar6 & 3;
      if (uVar10 < 2) {
        if ((auVar12 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
          cVar3 = *(char *)(uVar6 + 0x10);
        }
        else {
          cVar3 = *(char *)(uVar6 + 0x1f);
        }
joined_r0x009a77d8:
        if (cVar3 != '\r') goto LAB_009a76f0;
      }
      else {
        if (uVar10 == 2) {
                    /* try { // try from 009a7708 to 009a771b has its CatchHandler @ 009a7800 */
          lVar5 = core::io::error::os_functions::get_os_functions();
          cVar3 = (**(code **)(lVar5 + 8))(uVar6 >> 0x20);
          goto joined_r0x009a77d8;
        }
        if ((auVar12._12_4_ & 0xff) != 0xd) goto LAB_009a76f0;
      }
      uVar7 = *puVar1;
      do {
        while( true ) {
          if (((uint)uVar9 >> 0x10 & 0xff) != (uint)(byte)(uVar7 >> 0x10)) goto LAB_009a7778;
          uVar8 = *puVar1;
          if (uVar8 == uVar7) break;
          ClearExclusiveLocal();
          uVar7 = uVar8;
        }
        cVar3 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar2) {
          *puVar1 = uVar7 & (uVar11 & 0x33 ^ 0xff003f);
          cVar3 = ExclusiveMonitorsStatus();
        }
        uVar7 = uVar8;
      } while (cVar3 != '\0');
LAB_009a7778:
      if ((1 < uVar10 - 2) && ((auVar12 & (undefined1  [16])0x3) != (undefined1  [16])0x0)) {
        local_48 = uVar6 - 1;
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_48);
      }
      uVar4 = 1;
      uVar6 = 0xd00000003;
      goto LAB_009a77b0;
    }
  }
  else {
    uVar6 = 0xd00000003;
  }
LAB_009a76f0:
  uVar4 = 1;
LAB_009a77b0:
  auVar12._8_8_ = uVar6;
  auVar12._0_8_ = uVar4;
  return auVar12;
}


// ===== 009a781c  FUN_009a781c =====

undefined1  [16] FUN_009a781c(long param_1,ulong param_2,long *param_3)

{
  ulong *puVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  long local_48;
  
  puVar1 = (ulong *)(*(long *)(param_1 + 0x10) + 0x90);
  uVar9 = *puVar1;
  if ((param_2 - 1 < (param_2 ^ param_2 - 1)) &&
     (uVar6 = (param_2 & 0xaaaaaaaaaaaaaaaa) >> 1 | (param_2 & 0x5555555555555555) << 1,
     uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2,
     uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4,
     uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8,
     uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10,
     uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20), uVar6 < 6)) {
    uVar11 = *(ulong *)(&DAT_0037c3e8 + uVar6 * 8) & uVar9;
    uVar6 = 0xd00000003;
    if (uVar11 != 0) {
      if (*(int *)(*param_3 + 0x18) == -1) {
                    /* WARNING: Subroutine does not return */
        core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af4d10);
      }
      auVar12 = <mio::net::uds::datagram::mio::net::uds::datagram::UnixDatagram>::send
                          ((int *)(*param_3 + 0x18),param_3[1],param_3[2]);
      uVar6 = auVar12._8_8_;
      if ((auVar12 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
        uVar4 = 0;
        goto LAB_009a7990;
      }
      uVar10 = uVar6 & 3;
      if (uVar10 < 2) {
        if ((auVar12 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
          cVar3 = *(char *)(uVar6 + 0x10);
        }
        else {
          cVar3 = *(char *)(uVar6 + 0x1f);
        }
joined_r0x009a79b8:
        if (cVar3 != '\r') goto LAB_009a78d0;
      }
      else {
        if (uVar10 == 2) {
                    /* try { // try from 009a78e8 to 009a78fb has its CatchHandler @ 009a79e0 */
          lVar5 = core::io::error::os_functions::get_os_functions();
          cVar3 = (**(code **)(lVar5 + 8))(uVar6 >> 0x20);
          goto joined_r0x009a79b8;
        }
        if ((auVar12._12_4_ & 0xff) != 0xd) goto LAB_009a78d0;
      }
      uVar7 = *puVar1;
      do {
        while( true ) {
          if (((uint)uVar9 >> 0x10 & 0xff) != (uint)(byte)(uVar7 >> 0x10)) goto LAB_009a7958;
          uVar8 = *puVar1;
          if (uVar8 == uVar7) break;
          ClearExclusiveLocal();
          uVar7 = uVar8;
        }
        cVar3 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar2) {
          *puVar1 = uVar7 & (uVar11 & 0x33 ^ 0xff003f);
          cVar3 = ExclusiveMonitorsStatus();
        }
        uVar7 = uVar8;
      } while (cVar3 != '\0');
LAB_009a7958:
      if ((1 < uVar10 - 2) && ((auVar12 & (undefined1  [16])0x3) != (undefined1  [16])0x0)) {
        local_48 = uVar6 - 1;
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_48);
      }
      uVar4 = 1;
      uVar6 = 0xd00000003;
      goto LAB_009a7990;
    }
  }
  else {
    uVar6 = 0xd00000003;
  }
LAB_009a78d0:
  uVar4 = 1;
LAB_009a7990:
  auVar12._8_8_ = uVar6;
  auVar12._0_8_ = uVar4;
  return auVar12;
}


// ===== 009a79fc  FUN_009a79fc =====

undefined1  [16] FUN_009a79fc(long param_1,ulong param_2,long *param_3)

{
  ulong *puVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  int *local_50;
  long local_48;
  
  puVar1 = (ulong *)(*(long *)(param_1 + 0x10) + 0x90);
  uVar9 = *puVar1;
  if ((param_2 - 1 < (param_2 ^ param_2 - 1)) &&
     (uVar6 = (param_2 & 0xaaaaaaaaaaaaaaaa) >> 1 | (param_2 & 0x5555555555555555) << 1,
     uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2,
     uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4,
     uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8,
     uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10,
     uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20), uVar6 < 6)) {
    uVar11 = *(ulong *)(&DAT_0037c3e8 + uVar6 * 8) & uVar9;
    uVar6 = 0xd00000003;
    if (uVar11 != 0) {
      local_50 = (int *)(*param_3 + 0x18);
      if (*local_50 == -1) {
                    /* WARNING: Subroutine does not return */
        core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af4d10);
      }
      auVar12 = <&mio::sys::unix::pipe::Sender_as_core::io::write::Write>::write_vectored
                          (&local_50,param_3[1],param_3[2]);
      uVar6 = auVar12._8_8_;
      if ((auVar12 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
        uVar4 = 0;
        goto LAB_009a7b78;
      }
      uVar10 = uVar6 & 3;
      if (uVar10 < 2) {
        if ((auVar12 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
          cVar3 = *(char *)(uVar6 + 0x10);
        }
        else {
          cVar3 = *(char *)(uVar6 + 0x1f);
        }
joined_r0x009a7ba0:
        if (cVar3 != '\r') goto LAB_009a7ab8;
      }
      else {
        if (uVar10 == 2) {
                    /* try { // try from 009a7ad0 to 009a7ae3 has its CatchHandler @ 009a7bc8 */
          lVar5 = core::io::error::os_functions::get_os_functions();
          cVar3 = (**(code **)(lVar5 + 8))(uVar6 >> 0x20);
          goto joined_r0x009a7ba0;
        }
        if ((auVar12._12_4_ & 0xff) != 0xd) goto LAB_009a7ab8;
      }
      uVar7 = *puVar1;
      do {
        while( true ) {
          if (((uint)uVar9 >> 0x10 & 0xff) != (uint)(byte)(uVar7 >> 0x10)) goto LAB_009a7b40;
          uVar8 = *puVar1;
          if (uVar8 == uVar7) break;
          ClearExclusiveLocal();
          uVar7 = uVar8;
        }
        cVar3 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar2) {
          *puVar1 = uVar7 & (uVar11 & 0x33 ^ 0xff003f);
          cVar3 = ExclusiveMonitorsStatus();
        }
        uVar7 = uVar8;
      } while (cVar3 != '\0');
LAB_009a7b40:
      if ((1 < uVar10 - 2) && ((auVar12 & (undefined1  [16])0x3) != (undefined1  [16])0x0)) {
        local_48 = uVar6 - 1;
        local_50 = (int *)CONCAT71(local_50._1_7_,3);
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_48);
      }
      uVar4 = 1;
      uVar6 = 0xd00000003;
      goto LAB_009a7b78;
    }
  }
  else {
    uVar6 = 0xd00000003;
  }
LAB_009a7ab8:
  uVar4 = 1;
LAB_009a7b78:
  auVar12._8_8_ = uVar6;
  auVar12._0_8_ = uVar4;
  return auVar12;
}


// ===== 009a7be4  FUN_009a7be4 =====

undefined1  [16] FUN_009a7be4(long param_1,ulong param_2,long *param_3)

{
  ulong *puVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  int *local_50;
  long local_48;
  
  puVar1 = (ulong *)(*(long *)(param_1 + 0x10) + 0x90);
  uVar9 = *puVar1;
  if ((param_2 - 1 < (param_2 ^ param_2 - 1)) &&
     (uVar6 = (param_2 & 0xaaaaaaaaaaaaaaaa) >> 1 | (param_2 & 0x5555555555555555) << 1,
     uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2,
     uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4,
     uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8,
     uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10,
     uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20), uVar6 < 6)) {
    uVar11 = *(ulong *)(&DAT_0037c3e8 + uVar6 * 8) & uVar9;
    uVar6 = 0xd00000003;
    if (uVar11 != 0) {
      local_50 = (int *)(*param_3 + 0x18);
      if (*local_50 == -1) {
                    /* WARNING: Subroutine does not return */
        core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af4d10);
      }
      auVar12 = <&mio::sys::unix::pipe::Sender_as_core::io::write::Write>::write
                          (&local_50,param_3[1],param_3[2]);
      uVar6 = auVar12._8_8_;
      if ((auVar12 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
        uVar4 = 0;
        goto LAB_009a7d60;
      }
      uVar10 = uVar6 & 3;
      if (uVar10 < 2) {
        if ((auVar12 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
          cVar3 = *(char *)(uVar6 + 0x10);
        }
        else {
          cVar3 = *(char *)(uVar6 + 0x1f);
        }
joined_r0x009a7d88:
        if (cVar3 != '\r') goto LAB_009a7ca0;
      }
      else {
        if (uVar10 == 2) {
                    /* try { // try from 009a7cb8 to 009a7ccb has its CatchHandler @ 009a7db0 */
          lVar5 = core::io::error::os_functions::get_os_functions();
          cVar3 = (**(code **)(lVar5 + 8))(uVar6 >> 0x20);
          goto joined_r0x009a7d88;
        }
        if ((auVar12._12_4_ & 0xff) != 0xd) goto LAB_009a7ca0;
      }
      uVar7 = *puVar1;
      do {
        while( true ) {
          if (((uint)uVar9 >> 0x10 & 0xff) != (uint)(byte)(uVar7 >> 0x10)) goto LAB_009a7d28;
          uVar8 = *puVar1;
          if (uVar8 == uVar7) break;
          ClearExclusiveLocal();
          uVar7 = uVar8;
        }
        cVar3 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar2) {
          *puVar1 = uVar7 & (uVar11 & 0x33 ^ 0xff003f);
          cVar3 = ExclusiveMonitorsStatus();
        }
        uVar7 = uVar8;
      } while (cVar3 != '\0');
LAB_009a7d28:
      if ((1 < uVar10 - 2) && ((auVar12 & (undefined1  [16])0x3) != (undefined1  [16])0x0)) {
        local_48 = uVar6 - 1;
        local_50 = (int *)CONCAT71(local_50._1_7_,3);
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_48);
      }
      uVar4 = 1;
      uVar6 = 0xd00000003;
      goto LAB_009a7d60;
    }
  }
  else {
    uVar6 = 0xd00000003;
  }
LAB_009a7ca0:
  uVar4 = 1;
LAB_009a7d60:
  auVar12._8_8_ = uVar6;
  auVar12._0_8_ = uVar4;
  return auVar12;
}


// ===== 009a7dcc  FUN_009a7dcc =====

undefined1  [16] FUN_009a7dcc(long param_1,ulong param_2,long *param_3)

{
  ulong *puVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  int *local_50;
  long local_48;
  
  puVar1 = (ulong *)(*(long *)(param_1 + 0x10) + 0x90);
  uVar9 = *puVar1;
  if ((param_2 - 1 < (param_2 ^ param_2 - 1)) &&
     (uVar6 = (param_2 & 0xaaaaaaaaaaaaaaaa) >> 1 | (param_2 & 0x5555555555555555) << 1,
     uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2,
     uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4,
     uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8,
     uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10,
     uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20), uVar6 < 6)) {
    uVar11 = *(ulong *)(&DAT_0037c3e8 + uVar6 * 8) & uVar9;
    uVar6 = 0xd00000003;
    if (uVar11 != 0) {
      local_50 = (int *)(*param_3 + 0x18);
      if (*local_50 == -1) {
                    /* WARNING: Subroutine does not return */
        core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af4d10);
      }
      auVar12 = <&mio::sys::unix::pipe::Receiver_as_alloc::io::read::Read>::read_vectored
                          (&local_50,param_3[1],param_3[2]);
      uVar6 = auVar12._8_8_;
      if ((auVar12 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
        uVar4 = 0;
        goto LAB_009a7f48;
      }
      uVar10 = uVar6 & 3;
      if (uVar10 < 2) {
        if ((auVar12 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
          cVar3 = *(char *)(uVar6 + 0x10);
        }
        else {
          cVar3 = *(char *)(uVar6 + 0x1f);
        }
joined_r0x009a7f70:
        if (cVar3 != '\r') goto LAB_009a7e88;
      }
      else {
        if (uVar10 == 2) {
                    /* try { // try from 009a7ea0 to 009a7eb3 has its CatchHandler @ 009a7f98 */
          lVar5 = core::io::error::os_functions::get_os_functions();
          cVar3 = (**(code **)(lVar5 + 8))(uVar6 >> 0x20);
          goto joined_r0x009a7f70;
        }
        if ((auVar12._12_4_ & 0xff) != 0xd) goto LAB_009a7e88;
      }
      uVar7 = *puVar1;
      do {
        while( true ) {
          if (((uint)uVar9 >> 0x10 & 0xff) != (uint)(byte)(uVar7 >> 0x10)) goto LAB_009a7f10;
          uVar8 = *puVar1;
          if (uVar8 == uVar7) break;
          ClearExclusiveLocal();
          uVar7 = uVar8;
        }
        cVar3 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar2) {
          *puVar1 = uVar7 & (uVar11 & 0x33 ^ 0xff003f);
          cVar3 = ExclusiveMonitorsStatus();
        }
        uVar7 = uVar8;
      } while (cVar3 != '\0');
LAB_009a7f10:
      if ((1 < uVar10 - 2) && ((auVar12 & (undefined1  [16])0x3) != (undefined1  [16])0x0)) {
        local_48 = uVar6 - 1;
        local_50 = (int *)CONCAT71(local_50._1_7_,3);
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_48);
      }
      uVar4 = 1;
      uVar6 = 0xd00000003;
      goto LAB_009a7f48;
    }
  }
  else {
    uVar6 = 0xd00000003;
  }
LAB_009a7e88:
  uVar4 = 1;
LAB_009a7f48:
  auVar12._8_8_ = uVar6;
  auVar12._0_8_ = uVar4;
  return auVar12;
}


// ===== 009a7fb4  FUN_009a7fb4 =====

undefined1  [16] FUN_009a7fb4(long param_1,ulong param_2,long *param_3)

{
  ulong *puVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  int *local_50;
  long local_48;
  
  puVar1 = (ulong *)(*(long *)(param_1 + 0x10) + 0x90);
  uVar9 = *puVar1;
  if ((param_2 - 1 < (param_2 ^ param_2 - 1)) &&
     (uVar6 = (param_2 & 0xaaaaaaaaaaaaaaaa) >> 1 | (param_2 & 0x5555555555555555) << 1,
     uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2,
     uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4,
     uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8,
     uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10,
     uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20), uVar6 < 6)) {
    uVar11 = *(ulong *)(&DAT_0037c3e8 + uVar6 * 8) & uVar9;
    uVar6 = 0xd00000003;
    if (uVar11 != 0) {
      local_50 = (int *)(*param_3 + 0x18);
      if (*local_50 == -1) {
                    /* WARNING: Subroutine does not return */
        core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af4d10);
      }
      auVar12 = <&mio::sys::unix::pipe::Receiver_as_alloc::io::read::Read>::read
                          (&local_50,param_3[1],param_3[2]);
      uVar6 = auVar12._8_8_;
      if ((auVar12 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
        uVar4 = 0;
        goto LAB_009a8130;
      }
      uVar10 = uVar6 & 3;
      if (uVar10 < 2) {
        if ((auVar12 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
          cVar3 = *(char *)(uVar6 + 0x10);
        }
        else {
          cVar3 = *(char *)(uVar6 + 0x1f);
        }
joined_r0x009a8158:
        if (cVar3 != '\r') goto LAB_009a8070;
      }
      else {
        if (uVar10 == 2) {
                    /* try { // try from 009a8088 to 009a809b has its CatchHandler @ 009a8180 */
          lVar5 = core::io::error::os_functions::get_os_functions();
          cVar3 = (**(code **)(lVar5 + 8))(uVar6 >> 0x20);
          goto joined_r0x009a8158;
        }
        if ((auVar12._12_4_ & 0xff) != 0xd) goto LAB_009a8070;
      }
      uVar7 = *puVar1;
      do {
        while( true ) {
          if (((uint)uVar9 >> 0x10 & 0xff) != (uint)(byte)(uVar7 >> 0x10)) goto LAB_009a80f8;
          uVar8 = *puVar1;
          if (uVar8 == uVar7) break;
          ClearExclusiveLocal();
          uVar7 = uVar8;
        }
        cVar3 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar2) {
          *puVar1 = uVar7 & (uVar11 & 0x33 ^ 0xff003f);
          cVar3 = ExclusiveMonitorsStatus();
        }
        uVar7 = uVar8;
      } while (cVar3 != '\0');
LAB_009a80f8:
      if ((1 < uVar10 - 2) && ((auVar12 & (undefined1  [16])0x3) != (undefined1  [16])0x0)) {
        local_48 = uVar6 - 1;
        local_50 = (int *)CONCAT71(local_50._1_7_,3);
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_48);
      }
      uVar4 = 1;
      uVar6 = 0xd00000003;
      goto LAB_009a8130;
    }
  }
  else {
    uVar6 = 0xd00000003;
  }
LAB_009a8070:
  uVar4 = 1;
LAB_009a8130:
  auVar12._8_8_ = uVar6;
  auVar12._0_8_ = uVar4;
  return auVar12;
}


// ===== 009a819c  FUN_009a819c =====

void FUN_009a819c(undefined2 *param_1,long param_2,undefined8 param_3,undefined4 param_4,
                 long param_5)

{
  ulong *puVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  char cVar5;
  char cVar6;
  ulong uVar7;
  uint uVar8;
  undefined8 extraout_x9;
  ulong uVar9;
  undefined4 extraout_w10;
  ulong uVar10;
  undefined2 uVar11;
  int iVar12;
  undefined4 extraout_w13;
  ushort extraout_w14;
  ushort uVar13;
  int extraout_w15;
  int iVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  uint local_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  ushort local_e8;
  ushort local_e6;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined4 uStack_d8;
  undefined4 local_64;
  
  iVar12 = *(int *)(param_5 + 0x18);
  lVar15 = *(long *)(param_2 + 0x10);
  <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
  poll_ready(&local_f8);
  if (iVar12 == -1) {
    if (local_f0._1_1_ != -1) {
      if (local_f0._1_1_ != '\x02') {
                    /* WARNING: Subroutine does not return */
        core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af4d10);
      }
LAB_009a8434:
      uVar16 = CONCAT44(uStack_f4,local_f8);
LAB_009a8438:
      *param_1 = 2;
      *(undefined8 *)(param_1 + 4) = uVar16;
      return;
    }
  }
  else if (local_f0._1_1_ != -1) {
    if (iVar12 < 0) {
      if (local_f0._1_1_ != '\x02') {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic(&DAT_0037cef2,0x19,&PTR_s__root__cargo_registry_src_index__00af6378);
      }
      goto LAB_009a8434;
    }
    puVar1 = (ulong *)(lVar15 + 0x90);
    do {
      uVar4 = local_f8;
      uVar16 = CONCAT44(uStack_f4,local_f8);
      if (local_f0._1_1_ == '\x02') goto LAB_009a8438;
      cVar5 = (char)local_f0;
      local_64 = <socket2::socket::Socket_as_std::os::fd::raw::FromRawFd>::from_raw_fd(iVar12);
      <socket2::socket::socket2::socket::Socket>::peek_sender(&local_f8,&local_64);
      uVar7 = local_f0;
      if ((local_f8 & 1) == 0) {
        uVar2 = (uint)local_f0 & 0xffff;
        uVar8 = (uint)(local_f0 >> 0x10);
        iVar14 = (int)(local_f0 >> 0x20);
        uVar13 = (ushort)(local_f0 >> 0x18);
        if (uVar2 == 2) {
          uVar11 = 0;
          local_e6 = uVar13 & 0xff | (ushort)((uVar8 & 0xff00ff) << 8);
          local_e4 = extraout_x9;
          iVar12 = iVar14;
          local_dc = extraout_w13;
          iVar14 = extraout_w15;
          uStack_d8 = extraout_w10;
          uVar13 = extraout_w14;
LAB_009a83ec:
          *param_1 = uVar11;
          *(int *)(param_1 + 1) = iVar12;
          param_1[3] = local_e6;
          *(undefined8 *)(param_1 + 4) = local_e4;
          *(undefined4 *)(param_1 + 8) = local_dc;
          *(int *)(param_1 + 10) = iVar14;
          *(undefined4 *)(param_1 + 0xc) = uStack_d8;
          param_1[0xe] = uVar13;
          return;
        }
        if (uVar2 == 10) {
          uVar13 = uVar13 & 0xff | (ushort)((uVar8 & 0xff00ff) << 8);
          uVar11 = 1;
          iVar12 = (uint)local_e8 << 0x10;
          goto LAB_009a83ec;
        }
        uVar7 = <alloc::io::error::core::io::error::Error>::new<&str>
                          (0x2a,"sender not available",0x14);
      }
      uVar17 = uVar7 & 3;
      if (uVar17 < 2) {
        if (uVar17 == 0) {
          cVar6 = *(char *)(uVar7 + 0x10);
        }
        else {
          cVar6 = *(char *)(uVar7 + 0x1f);
        }
joined_r0x009a8300:
        if (cVar6 != '\r') {
LAB_009a83a0:
          *param_1 = 2;
          *(ulong *)(param_1 + 4) = uVar7;
          return;
        }
      }
      else {
        if (uVar17 == 2) {
                    /* try { // try from 009a82dc to 009a82ef has its CatchHandler @ 009a8464 */
          lVar15 = core::io::error::os_functions::get_os_functions();
          cVar6 = (**(code **)(lVar15 + 8))(uVar7 >> 0x20);
          goto joined_r0x009a8300;
        }
        if (((uint)(uVar7 >> 0x20) & 0xff) != 0xd) goto LAB_009a83a0;
      }
      uVar10 = *puVar1;
      do {
        if (cVar5 != (char)(uVar10 >> 0x10)) break;
        uVar9 = *puVar1;
        if (uVar9 == uVar10) {
          cVar6 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar10 & ((ulong)uVar4 & 0x33 ^ 0xff003f);
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
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
        uVar10 = uVar9;
      } while (!bVar3);
      if ((1 < uVar17 - 2) && (uVar17 != 0)) {
        local_f0 = uVar7 - 1;
        local_f8 = CONCAT31(local_f8._1_3_,3);
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_f0);
      }
      <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
      poll_ready(&local_f8,param_2,param_3,param_4);
    } while (local_f0._1_1_ != -1);
  }
  *param_1 = 0xffff;
  return;
}


// ===== 009a847c  FUN_009a847c =====

void FUN_009a847c(undefined8 *param_1,long param_2,undefined8 param_3,undefined4 param_4,
                 long param_5)

{
  ulong *puVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  byte bVar5;
  uint6 uVar6;
  char cVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  bool bVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  uint local_e8;
  undefined4 uStack_e4;
  byte bStack_e0;
  char cStack_df;
  uint6 uStack_de;
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
  undefined1 local_70;
  long local_68;
  
  lVar12 = *(long *)(param_2 + 0x10);
  iVar2 = *(int *)(param_5 + 0x18);
  <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
  poll_ready(&local_e8);
  if (iVar2 == -1) {
    if (cStack_df != -1) {
      if (cStack_df != '\x02') {
                    /* WARNING: Subroutine does not return */
        core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af4d10);
      }
      uVar13 = CONCAT44(uStack_e4,local_e8);
LAB_009a869c:
      param_1[2] = uVar13;
LAB_009a86a4:
      *(undefined4 *)(param_1 + 1) = 0xffffffff;
LAB_009a86a8:
      *param_1 = 0;
      return;
    }
  }
  else if (cStack_df != -1) {
    puVar1 = (ulong *)(lVar12 + 0x90);
    do {
      bVar5 = bStack_e0;
      uVar4 = local_e8;
      uVar13 = CONCAT44(uStack_e4,local_e8);
      if (cStack_df == '\x02') goto LAB_009a869c;
      <mio::net::uds::listener::mio::net::uds::listener::UnixListener>::accept
                (&local_e8,(int *)(param_5 + 0x18));
      uVar6 = uStack_de;
      if (local_e8 != 0xffffffff) {
        param_1[10] = uStack_a0;
        param_1[9] = local_a8;
        param_1[0xc] = uStack_90;
        param_1[0xb] = local_98;
        param_1[0xe] = uStack_80;
        param_1[0xd] = local_88;
        param_1[2] = CONCAT62(uStack_de,CONCAT11(cStack_df,bStack_e0));
        param_1[1] = CONCAT44(uStack_e4,local_e8);
        param_1[4] = uStack_d0;
        param_1[3] = local_d8;
        param_1[6] = uStack_c0;
        param_1[5] = local_c8;
        param_1[0xf] = local_78;
        param_1[8] = uStack_b0;
        param_1[7] = local_b8;
        goto LAB_009a86a8;
      }
      lVar12 = CONCAT62(uStack_de,CONCAT11(cStack_df,bStack_e0));
      bVar3 = bStack_e0 & 3;
      uVar14 = (ulong)CONCAT11(cStack_df,bStack_e0) & 3;
      if (uVar14 < 2) {
        if ((bStack_e0 & 3) == 0) {
          cVar7 = *(char *)(lVar12 + 0x10);
        }
        else {
          cVar7 = *(char *)(lVar12 + 0x1f);
        }
joined_r0x009a857c:
        if (cVar7 != '\r') {
LAB_009a867c:
          param_1[2] = lVar12;
          goto LAB_009a86a4;
        }
      }
      else {
        if (uVar14 == 2) {
                    /* try { // try from 009a8560 to 009a8573 has its CatchHandler @ 009a86d8 */
          lVar8 = core::io::error::os_functions::get_os_functions();
          cVar7 = (**(code **)(lVar8 + 8))((ulong)(uVar6 >> 0x10));
          goto joined_r0x009a857c;
        }
        if (((uint)(uStack_de >> 0x10) & 0xff) != 0xd) goto LAB_009a867c;
      }
      uVar10 = *puVar1;
      do {
        if (bVar5 != (byte)(uVar10 >> 0x10)) break;
        uVar9 = *puVar1;
        if (uVar9 == uVar10) {
          cVar7 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar11) {
            *puVar1 = uVar10 & ((ulong)uVar4 & 0x33 ^ 0xff003f);
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') {
            bVar11 = true;
          }
          else {
            bVar11 = false;
          }
        }
        else {
          bVar11 = false;
          ClearExclusiveLocal();
        }
        uVar10 = uVar9;
      } while (!bVar11);
      if ((1 < uVar14 - 2) && (bVar3 != 0)) {
        local_68 = lVar12 + -1;
        local_70 = 3;
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_68);
      }
      <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
      poll_ready(&local_e8,param_2,param_3,param_4);
    } while (cStack_df != -1);
  }
  *param_1 = 1;
  return;
}


// ===== 009a86f0  FUN_009a86f0 =====

void FUN_009a86f0(ulong *param_1,long param_2,undefined8 param_3,undefined4 param_4,long *param_5,
                 long param_6)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  char cVar7;
  char cVar8;
  undefined2 uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  bool bVar13;
  long lVar14;
  ulong uVar15;
  ulong local_98;
  char cStack_90;
  char cStack_8f;
  undefined6 uStack_8e;
  ulong local_88;
  ulong uStack_80;
  ulong local_78;
  undefined1 local_70;
  long local_68;
  
  uVar2 = param_5[1];
  uVar3 = param_5[2];
  if (uVar2 < uVar3) {
    <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
    poll_ready(&local_98,param_2,param_3,param_4);
    if (cStack_8f != -1) {
      if (cStack_8f != '\x02') {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (uVar3,uVar2,uVar2,&PTR_s__root__cargo_registry_src_index__00af4d28);
      }
LAB_009a88fc:
      uVar9 = 2;
      *param_1 = local_98;
      goto LAB_009a8770;
    }
  }
  else {
    lVar10 = *param_5;
    lVar14 = *(long *)(param_2 + 0x10);
    iVar4 = *(int *)(param_6 + 0x18);
    <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
    poll_ready(&local_98,param_2,param_3,param_4);
    if (iVar4 == -1) {
      if (cStack_8f != -1) {
        if (cStack_8f != '\x02') {
                    /* WARNING: Subroutine does not return */
          core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af4d10);
        }
        goto LAB_009a88fc;
      }
    }
    else if (cStack_8f != -1) {
      puVar1 = (ulong *)(lVar14 + 0x90);
      do {
        cVar7 = cStack_90;
        uVar5 = local_98;
        if (cStack_8f == '\x02') goto LAB_009a88fc;
        <mio::net::udp::mio::net::udp::UdpSocket>::peek_from
                  (&local_98,param_6 + 0x18,lVar10 + uVar3,uVar2 - uVar3);
        uVar6 = local_98;
        if (CONCAT11(cStack_8f,cStack_90) != 2) {
          param_1[1] = CONCAT62(uStack_8e,CONCAT11(cStack_8f,cStack_90));
          *param_1 = local_98;
          param_1[3] = uStack_80;
          param_1[2] = local_88;
          param_1[4] = local_78;
          return;
        }
        uVar15 = local_98 & 3;
        if (uVar15 < 2) {
          if (uVar15 == 0) {
            cVar8 = *(char *)(local_98 + 0x10);
          }
          else {
            cVar8 = *(char *)(local_98 + 0x1f);
          }
joined_r0x009a883c:
          if (cVar8 != '\r') {
LAB_009a8924:
            *param_1 = uVar6;
            *(undefined2 *)(param_1 + 1) = 2;
            return;
          }
        }
        else {
          if (uVar15 == 2) {
                    /* try { // try from 009a8820 to 009a8833 has its CatchHandler @ 009a89a4 */
            lVar14 = core::io::error::os_functions::get_os_functions();
            cVar8 = (**(code **)(lVar14 + 8))(uVar6 >> 0x20);
            goto joined_r0x009a883c;
          }
          if (((uint)(local_98 >> 0x20) & 0xff) != 0xd) goto LAB_009a8924;
        }
        uVar12 = *puVar1;
        do {
          if (cVar7 != (char)(uVar12 >> 0x10)) break;
          uVar11 = *puVar1;
          if (uVar11 == uVar12) {
            cVar8 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar13) {
              *puVar1 = uVar12 & (uVar5 & 0x33 ^ 0xff003f);
              cVar8 = ExclusiveMonitorsStatus();
            }
            if (cVar8 == '\0') {
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
          uVar12 = uVar11;
        } while (!bVar13);
        if ((1 < uVar15 - 2) && (uVar15 != 0)) {
          local_68 = uVar6 - 1;
          local_70 = 3;
          <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_68);
        }
        <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
        poll_ready(&local_98,param_2,param_3,param_4);
      } while (cStack_8f != -1);
    }
  }
  uVar9 = 0xffff;
LAB_009a8770:
  *(undefined2 *)(param_1 + 1) = uVar9;
  return;
}


// ===== 009a89bc  FUN_009a89bc =====

void FUN_009a89bc(ulong *param_1,long param_2,undefined8 param_3,undefined4 param_4,long *param_5,
                 long param_6)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  char cVar7;
  char cVar8;
  undefined2 uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  bool bVar13;
  long lVar14;
  ulong uVar15;
  ulong local_98;
  char cStack_90;
  char cStack_8f;
  undefined6 uStack_8e;
  ulong local_88;
  ulong uStack_80;
  ulong local_78;
  undefined1 local_70;
  long local_68;
  
  uVar2 = param_5[1];
  uVar3 = param_5[2];
  if (uVar2 < uVar3) {
    <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
    poll_ready(&local_98,param_2,param_3,param_4);
    if (cStack_8f != -1) {
      if (cStack_8f != '\x02') {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (uVar3,uVar2,uVar2,&PTR_s__root__cargo_registry_src_index__00af4d28);
      }
LAB_009a8bc8:
      uVar9 = 2;
      *param_1 = local_98;
      goto LAB_009a8a3c;
    }
  }
  else {
    lVar10 = *param_5;
    lVar14 = *(long *)(param_2 + 0x10);
    iVar4 = *(int *)(param_6 + 0x18);
    <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
    poll_ready(&local_98,param_2,param_3,param_4);
    if (iVar4 == -1) {
      if (cStack_8f != -1) {
        if (cStack_8f != '\x02') {
                    /* WARNING: Subroutine does not return */
          core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af4d10);
        }
        goto LAB_009a8bc8;
      }
    }
    else if (cStack_8f != -1) {
      puVar1 = (ulong *)(lVar14 + 0x90);
      do {
        cVar7 = cStack_90;
        uVar5 = local_98;
        if (cStack_8f == '\x02') goto LAB_009a8bc8;
        <mio::net::udp::mio::net::udp::UdpSocket>::recv_from
                  (&local_98,param_6 + 0x18,lVar10 + uVar3,uVar2 - uVar3);
        uVar6 = local_98;
        if (CONCAT11(cStack_8f,cStack_90) != 2) {
          param_1[1] = CONCAT62(uStack_8e,CONCAT11(cStack_8f,cStack_90));
          *param_1 = local_98;
          param_1[3] = uStack_80;
          param_1[2] = local_88;
          param_1[4] = local_78;
          return;
        }
        uVar15 = local_98 & 3;
        if (uVar15 < 2) {
          if (uVar15 == 0) {
            cVar8 = *(char *)(local_98 + 0x10);
          }
          else {
            cVar8 = *(char *)(local_98 + 0x1f);
          }
joined_r0x009a8b08:
          if (cVar8 != '\r') {
LAB_009a8bf0:
            *param_1 = uVar6;
            *(undefined2 *)(param_1 + 1) = 2;
            return;
          }
        }
        else {
          if (uVar15 == 2) {
                    /* try { // try from 009a8aec to 009a8aff has its CatchHandler @ 009a8c70 */
            lVar14 = core::io::error::os_functions::get_os_functions();
            cVar8 = (**(code **)(lVar14 + 8))(uVar6 >> 0x20);
            goto joined_r0x009a8b08;
          }
          if (((uint)(local_98 >> 0x20) & 0xff) != 0xd) goto LAB_009a8bf0;
        }
        uVar12 = *puVar1;
        do {
          if (cVar7 != (char)(uVar12 >> 0x10)) break;
          uVar11 = *puVar1;
          if (uVar11 == uVar12) {
            cVar8 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar13) {
              *puVar1 = uVar12 & (uVar5 & 0x33 ^ 0xff003f);
              cVar8 = ExclusiveMonitorsStatus();
            }
            if (cVar8 == '\0') {
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
          uVar12 = uVar11;
        } while (!bVar13);
        if ((1 < uVar15 - 2) && (uVar15 != 0)) {
          local_68 = uVar6 - 1;
          local_70 = 3;
          <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_68);
        }
        <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
        poll_ready(&local_98,param_2,param_3,param_4);
      } while (cStack_8f != -1);
    }
  }
  uVar9 = 0xffff;
LAB_009a8a3c:
  *(undefined2 *)(param_1 + 1) = uVar9;
  return;
}


// ===== 009a8c88  FUN_009a8c88 =====

void FUN_009a8c88(undefined8 *param_1,long param_2,undefined8 param_3,undefined4 param_4,
                 long *param_5,long param_6)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  byte bVar5;
  ulong uVar6;
  byte bVar7;
  uint6 uVar8;
  char cVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  bool bVar14;
  long lVar15;
  ulong uVar16;
  ulong local_100;
  byte local_f8;
  char cStack_f7;
  uint6 uStack_f6;
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
  undefined1 local_78;
  long local_70 [2];
  
  uVar2 = param_5[1];
  uVar3 = param_5[2];
  if (uVar2 < uVar3) {
    <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
    poll_ready(&local_100,param_2,param_3,param_4);
    if (cStack_f7 != -1) {
      if (cStack_f7 != '\x02') {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (uVar3,uVar2,uVar2,&PTR_s__root__cargo_registry_src_index__00af4d28);
      }
LAB_009a8f38:
      *param_1 = 1;
      param_1[1] = local_100;
      return;
    }
  }
  else {
    lVar11 = *param_5;
    lVar15 = *(long *)(param_2 + 0x10);
    iVar4 = *(int *)(param_6 + 0x18);
    <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
    poll_ready(&local_100,param_2,param_3,param_4);
    if (iVar4 == -1) {
      if (cStack_f7 != -1) {
        if (cStack_f7 != '\x02') {
                    /* WARNING: Subroutine does not return */
          core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af4d10);
        }
        goto LAB_009a8f38;
      }
    }
    else if (cStack_f7 != -1) {
      puVar1 = (ulong *)(lVar15 + 0x90);
      do {
        bVar7 = local_f8;
        uVar6 = local_100;
        if (cStack_f7 == '\x02') goto LAB_009a8f38;
        <mio::net::uds::datagram::mio::net::uds::datagram::UnixDatagram>::recv_from
                  (&local_100,param_6 + 0x18,lVar11 + uVar3,uVar2 - uVar3);
        uVar8 = uStack_f6;
        if (local_100 != 1) {
          *param_1 = 0;
          param_1[10] = uStack_b0;
          param_1[9] = local_b8;
          param_1[0xc] = uStack_a0;
          param_1[0xb] = local_a8;
          param_1[0xe] = uStack_90;
          param_1[0xd] = local_98;
          param_1[0x10] = uStack_80;
          param_1[0xf] = local_88;
          param_1[2] = uStack_f0;
          param_1[1] = CONCAT62(uStack_f6,CONCAT11(cStack_f7,local_f8));
          param_1[4] = uStack_e0;
          param_1[3] = local_e8;
          param_1[6] = uStack_d0;
          param_1[5] = local_d8;
          param_1[8] = uStack_c0;
          param_1[7] = local_c8;
          return;
        }
        lVar15 = CONCAT62(uStack_f6,CONCAT11(cStack_f7,local_f8));
        bVar5 = local_f8 & 3;
        uVar16 = (ulong)CONCAT11(cStack_f7,local_f8) & 3;
        if (uVar16 < 2) {
          if ((local_f8 & 3) == 0) {
            cVar9 = *(char *)(lVar15 + 0x10);
          }
          else {
            cVar9 = *(char *)(lVar15 + 0x1f);
          }
joined_r0x009a8ddc:
          if (cVar9 != '\r') {
LAB_009a8ed4:
            *param_1 = 1;
            param_1[1] = lVar15;
            return;
          }
        }
        else {
          if (uVar16 == 2) {
                    /* try { // try from 009a8db8 to 009a8dcb has its CatchHandler @ 009a8f54 */
            lVar10 = core::io::error::os_functions::get_os_functions();
            cVar9 = (**(code **)(lVar10 + 8))((ulong)(uVar8 >> 0x10));
            goto joined_r0x009a8ddc;
          }
          if (((uint)(uStack_f6 >> 0x10) & 0xff) != 0xd) goto LAB_009a8ed4;
        }
        uVar13 = *puVar1;
        do {
          if (bVar7 != (byte)(uVar13 >> 0x10)) break;
          uVar12 = *puVar1;
          if (uVar12 == uVar13) {
            cVar9 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar14) {
              *puVar1 = uVar13 & (uVar6 & 0x33 ^ 0xff003f);
              cVar9 = ExclusiveMonitorsStatus();
            }
            if (cVar9 == '\0') {
              bVar14 = true;
            }
            else {
              bVar14 = false;
            }
          }
          else {
            bVar14 = false;
            ClearExclusiveLocal();
          }
          uVar13 = uVar12;
        } while (!bVar14);
        if ((1 < uVar16 - 2) && (bVar5 != 0)) {
          local_70[0] = lVar15 + -1;
          local_78 = 3;
          <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(local_70);
        }
        <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
        poll_ready(&local_100,param_2,param_3,param_4);
      } while (cStack_f7 != -1);
    }
  }
  *param_1 = 2;
  return;
}


// ===== 009a8f6c  FUN_009a8f6c =====

undefined1  [16] FUN_009a8f6c(long param_1,undefined8 param_2,undefined4 param_3,long *param_4)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  char cVar7;
  char cVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  bool bVar12;
  long lVar13;
  ulong uVar14;
  ulong unaff_x23;
  undefined1 auVar15 [16];
  ulong local_80;
  undefined8 uStack_78;
  ulong local_70;
  ulong uStack_68;
  
  lVar2 = *param_4;
  lVar4 = param_4[1];
  lVar3 = param_4[2];
  puVar5 = (ulong *)param_4[3];
  lVar13 = *(long *)(param_1 + 0x10);
  <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
  poll_ready(&local_80);
  if (uStack_78._1_1_ == -1) {
    uVar9 = 2;
  }
  else {
    puVar1 = (ulong *)(lVar13 + 0x90);
    do {
      uVar6 = local_80;
      if (uStack_78._1_1_ == '\x02') {
        uVar9 = 1;
        unaff_x23 = local_80;
        goto LAB_009a914c;
      }
      if (*(int *)(lVar2 + 0x18) == -1) {
                    /* WARNING: Subroutine does not return */
        core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af4d10);
      }
      local_80 = *puVar5;
      cVar7 = (char)uStack_78;
      uStack_68 = puVar5[3];
      local_70 = puVar5[2];
      uStack_78 = puVar5[1];
      auVar15 = <mio::net::udp::mio::net::udp::UdpSocket>::send_to
                          (lVar2 + 0x18,lVar4,lVar3,&local_80);
      unaff_x23 = auVar15._8_8_;
      if (auVar15._0_8_ != 1) {
        uVar9 = 0;
        goto LAB_009a914c;
      }
      uVar14 = unaff_x23 & 3;
      if (uVar14 < 2) {
        if ((auVar15 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
          cVar8 = *(char *)(unaff_x23 + 0x10);
        }
        else {
          cVar8 = *(char *)(unaff_x23 + 0x1f);
        }
joined_r0x009a9084:
        if (cVar8 != '\r') {
LAB_009a9140:
          uVar9 = 1;
          goto LAB_009a914c;
        }
      }
      else {
        if (uVar14 == 2) {
                    /* try { // try from 009a9060 to 009a9073 has its CatchHandler @ 009a917c */
          lVar13 = core::io::error::os_functions::get_os_functions();
          cVar8 = (**(code **)(lVar13 + 8))(unaff_x23 >> 0x20);
          goto joined_r0x009a9084;
        }
        if ((auVar15._12_4_ & 0xff) != 0xd) goto LAB_009a9140;
      }
      uVar11 = *puVar1;
      do {
        if (cVar7 != (char)(uVar11 >> 0x10)) break;
        uVar10 = *puVar1;
        if (uVar10 == uVar11) {
          cVar8 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar12) {
            *puVar1 = uVar11 & (uVar6 & 0x33 ^ 0xff003f);
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') {
            bVar12 = true;
          }
          else {
            bVar12 = false;
          }
        }
        else {
          bVar12 = false;
          ClearExclusiveLocal();
        }
        uVar11 = uVar10;
      } while (!bVar12);
      if ((1 < uVar14 - 2) && ((auVar15 & (undefined1  [16])0x3) != (undefined1  [16])0x0)) {
        uStack_78 = unaff_x23 - 1;
        local_80 = CONCAT71(local_80._1_7_,3);
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&uStack_78);
      }
      <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
      poll_ready(&local_80,param_1,param_2,param_3);
    } while (uStack_78._1_1_ != -1);
    uVar9 = 2;
  }
LAB_009a914c:
  auVar15._8_8_ = unaff_x23;
  auVar15._0_8_ = uVar9;
  return auVar15;
}


// ===== 009a9194  FUN_009a9194 =====

undefined1  [16]
FUN_009a9194(long param_1,undefined8 param_2,undefined4 param_3,long *param_4,long param_5)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  byte bVar5;
  char cVar6;
  char cVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  bool bVar12;
  long lVar13;
  ulong uVar14;
  ulong unaff_x27;
  undefined1 auVar15 [16];
  byte local_70;
  undefined7 uStack_6f;
  undefined8 local_68;
  
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  if (uVar2 < uVar3) {
    <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
    poll_ready(&local_70,param_1,param_2,param_3);
    if (local_68._1_1_ != -1) {
      if (local_68._1_1_ != '\x02') {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (uVar3,uVar2,uVar2,&PTR_s__root__cargo_registry_src_index__00af4d28);
      }
LAB_009a93f4:
      unaff_x27 = CONCAT71(uStack_6f,local_70);
      uVar8 = 1;
      goto LAB_009a9380;
    }
  }
  else {
    lVar9 = *param_4;
    lVar13 = *(long *)(param_1 + 0x10);
    iVar4 = *(int *)(param_5 + 0x18);
    <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
    poll_ready(&local_70,param_1,param_2,param_3);
    if (iVar4 == -1) {
      if (local_68._1_1_ != -1) {
        if (local_68._1_1_ != '\x02') {
                    /* WARNING: Subroutine does not return */
          core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af4d10);
        }
        goto LAB_009a93f4;
      }
    }
    else if (local_68._1_1_ != -1) {
      puVar1 = (ulong *)(lVar13 + 0x90);
      do {
        bVar5 = local_70;
        unaff_x27 = CONCAT71(uStack_6f,local_70);
        if (local_68._1_1_ == '\x02') {
          uVar8 = 1;
          goto LAB_009a9380;
        }
        cVar6 = (char)local_68;
        auVar15 = <mio::net::udp::mio::net::udp::UdpSocket>::peek
                            (param_5 + 0x18,lVar9 + uVar3,uVar2 - uVar3);
        unaff_x27 = auVar15._8_8_;
        if (auVar15._0_8_ != 1) {
          uVar8 = 0;
          goto LAB_009a9380;
        }
        uVar14 = unaff_x27 & 3;
        if (uVar14 < 2) {
          if ((auVar15 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
            cVar7 = *(char *)(unaff_x27 + 0x10);
          }
          else {
            cVar7 = *(char *)(unaff_x27 + 0x1f);
          }
joined_r0x009a92b8:
          if (cVar7 != '\r') {
LAB_009a9374:
            uVar8 = 1;
            goto LAB_009a9380;
          }
        }
        else {
          if (uVar14 == 2) {
                    /* try { // try from 009a9294 to 009a92a7 has its CatchHandler @ 009a940c */
            lVar13 = core::io::error::os_functions::get_os_functions();
            cVar7 = (**(code **)(lVar13 + 8))(unaff_x27 >> 0x20);
            goto joined_r0x009a92b8;
          }
          if ((auVar15._12_4_ & 0xff) != 0xd) goto LAB_009a9374;
        }
        uVar11 = *puVar1;
        do {
          if (cVar6 != (char)(uVar11 >> 0x10)) break;
          uVar10 = *puVar1;
          if (uVar10 == uVar11) {
            cVar7 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar12) {
              *puVar1 = uVar11 & ((ulong)bVar5 & 0x33 ^ 0xff003f);
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 == '\0') {
              bVar12 = true;
            }
            else {
              bVar12 = false;
            }
          }
          else {
            bVar12 = false;
            ClearExclusiveLocal();
          }
          uVar11 = uVar10;
        } while (!bVar12);
        if ((1 < uVar14 - 2) && ((auVar15 & (undefined1  [16])0x3) != (undefined1  [16])0x0)) {
          local_68 = unaff_x27 - 1;
          local_70 = 3;
          <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_68);
        }
        <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
        poll_ready(&local_70,param_1,param_2,param_3);
      } while (local_68._1_1_ != -1);
      uVar8 = 2;
      goto LAB_009a9380;
    }
  }
  uVar8 = 2;
LAB_009a9380:
  auVar15._8_8_ = unaff_x27;
  auVar15._0_8_ = uVar8;
  return auVar15;
}


// ===== 009a9424  FUN_009a9424 =====

undefined1  [16]
FUN_009a9424(long param_1,undefined8 param_2,undefined4 param_3,long *param_4,long param_5)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  byte bVar5;
  char cVar6;
  char cVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  bool bVar12;
  long lVar13;
  ulong uVar14;
  ulong unaff_x27;
  undefined1 auVar15 [16];
  byte local_70;
  undefined7 uStack_6f;
  undefined8 local_68;
  
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  if (uVar2 < uVar3) {
    <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
    poll_ready(&local_70,param_1,param_2,param_3);
    if (local_68._1_1_ != -1) {
      if (local_68._1_1_ != '\x02') {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (uVar3,uVar2,uVar2,&PTR_s__root__cargo_registry_src_index__00af4d28);
      }
LAB_009a9684:
      unaff_x27 = CONCAT71(uStack_6f,local_70);
      uVar8 = 1;
      goto LAB_009a9610;
    }
  }
  else {
    lVar9 = *param_4;
    lVar13 = *(long *)(param_1 + 0x10);
    iVar4 = *(int *)(param_5 + 0x18);
    <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
    poll_ready(&local_70,param_1,param_2,param_3);
    if (iVar4 == -1) {
      if (local_68._1_1_ != -1) {
        if (local_68._1_1_ != '\x02') {
                    /* WARNING: Subroutine does not return */
          core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af4d10);
        }
        goto LAB_009a9684;
      }
    }
    else if (local_68._1_1_ != -1) {
      puVar1 = (ulong *)(lVar13 + 0x90);
      do {
        bVar5 = local_70;
        unaff_x27 = CONCAT71(uStack_6f,local_70);
        if (local_68._1_1_ == '\x02') {
          uVar8 = 1;
          goto LAB_009a9610;
        }
        cVar6 = (char)local_68;
        auVar15 = <mio::net::udp::mio::net::udp::UdpSocket>::recv
                            (param_5 + 0x18,lVar9 + uVar3,uVar2 - uVar3);
        unaff_x27 = auVar15._8_8_;
        if (auVar15._0_8_ != 1) {
          uVar8 = 0;
          goto LAB_009a9610;
        }
        uVar14 = unaff_x27 & 3;
        if (uVar14 < 2) {
          if ((auVar15 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
            cVar7 = *(char *)(unaff_x27 + 0x10);
          }
          else {
            cVar7 = *(char *)(unaff_x27 + 0x1f);
          }
joined_r0x009a9548:
          if (cVar7 != '\r') {
LAB_009a9604:
            uVar8 = 1;
            goto LAB_009a9610;
          }
        }
        else {
          if (uVar14 == 2) {
                    /* try { // try from 009a9524 to 009a9537 has its CatchHandler @ 009a969c */
            lVar13 = core::io::error::os_functions::get_os_functions();
            cVar7 = (**(code **)(lVar13 + 8))(unaff_x27 >> 0x20);
            goto joined_r0x009a9548;
          }
          if ((auVar15._12_4_ & 0xff) != 0xd) goto LAB_009a9604;
        }
        uVar11 = *puVar1;
        do {
          if (cVar6 != (char)(uVar11 >> 0x10)) break;
          uVar10 = *puVar1;
          if (uVar10 == uVar11) {
            cVar7 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar12) {
              *puVar1 = uVar11 & ((ulong)bVar5 & 0x33 ^ 0xff003f);
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 == '\0') {
              bVar12 = true;
            }
            else {
              bVar12 = false;
            }
          }
          else {
            bVar12 = false;
            ClearExclusiveLocal();
          }
          uVar11 = uVar10;
        } while (!bVar12);
        if ((1 < uVar14 - 2) && ((auVar15 & (undefined1  [16])0x3) != (undefined1  [16])0x0)) {
          local_68 = unaff_x27 - 1;
          local_70 = 3;
          <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_68);
        }
        <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
        poll_ready(&local_70,param_1,param_2,param_3);
      } while (local_68._1_1_ != -1);
      uVar8 = 2;
      goto LAB_009a9610;
    }
  }
  uVar8 = 2;
LAB_009a9610:
  auVar15._8_8_ = unaff_x27;
  auVar15._0_8_ = uVar8;
  return auVar15;
}


// ===== 009a96b4  FUN_009a96b4 =====

undefined1  [16] FUN_009a96b4(long param_1,undefined8 param_2,undefined4 param_3,long *param_4)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  bool bVar10;
  long lVar11;
  ulong uVar12;
  ulong unaff_x22;
  long lVar13;
  undefined1 auVar14 [16];
  byte local_70;
  undefined7 uStack_6f;
  undefined8 local_68;
  
  lVar2 = *param_4;
  lVar3 = param_4[1];
  lVar13 = param_4[2];
  lVar11 = *(long *)(param_1 + 0x10);
  <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
  poll_ready(&local_70);
  if (local_68._1_1_ == -1) {
    uVar7 = 2;
  }
  else {
    puVar1 = (ulong *)(lVar11 + 0x90);
    do {
      bVar4 = local_70;
      unaff_x22 = CONCAT71(uStack_6f,local_70);
      if (local_68._1_1_ == '\x02') {
        uVar7 = 1;
        goto LAB_009a9884;
      }
      if (*(int *)(lVar2 + 0x18) == -1) {
                    /* WARNING: Subroutine does not return */
        core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af4d10);
      }
      cVar5 = (char)local_68;
      auVar14 = <mio::net::udp::mio::net::udp::UdpSocket>::send(lVar2 + 0x18,lVar3,lVar13);
      unaff_x22 = auVar14._8_8_;
      if (auVar14._0_8_ != 1) {
        uVar7 = 0;
        goto LAB_009a9884;
      }
      uVar12 = unaff_x22 & 3;
      if (uVar12 < 2) {
        if ((auVar14 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
          cVar6 = *(char *)(unaff_x22 + 0x10);
        }
        else {
          cVar6 = *(char *)(unaff_x22 + 0x1f);
        }
joined_r0x009a97bc:
        if (cVar6 != '\r') {
LAB_009a9878:
          uVar7 = 1;
          goto LAB_009a9884;
        }
      }
      else {
        if (uVar12 == 2) {
                    /* try { // try from 009a9798 to 009a97ab has its CatchHandler @ 009a98b4 */
          lVar11 = core::io::error::os_functions::get_os_functions();
          cVar6 = (**(code **)(lVar11 + 8))(unaff_x22 >> 0x20);
          goto joined_r0x009a97bc;
        }
        if ((auVar14._12_4_ & 0xff) != 0xd) goto LAB_009a9878;
      }
      uVar9 = *puVar1;
      do {
        if (cVar5 != (char)(uVar9 >> 0x10)) break;
        uVar8 = *puVar1;
        if (uVar8 == uVar9) {
          cVar6 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar10) {
            *puVar1 = uVar9 & ((ulong)bVar4 & 0x33 ^ 0xff003f);
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
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
        uVar9 = uVar8;
      } while (!bVar10);
      if ((1 < uVar12 - 2) && ((auVar14 & (undefined1  [16])0x3) != (undefined1  [16])0x0)) {
        local_68 = unaff_x22 - 1;
        local_70 = 3;
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_68);
      }
      <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
      poll_ready(&local_70,param_1,param_2,param_3);
    } while (local_68._1_1_ != -1);
    uVar7 = 2;
  }
LAB_009a9884:
  auVar14._8_8_ = unaff_x22;
  auVar14._0_8_ = uVar7;
  return auVar14;
}


// ===== 009a98cc  FUN_009a98cc =====

undefined1  [16]
FUN_009a98cc(long param_1,undefined8 param_2,undefined4 param_3,long *param_4,long param_5)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  byte bVar5;
  char cVar6;
  char cVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  bool bVar12;
  long lVar13;
  ulong uVar14;
  ulong unaff_x27;
  undefined1 auVar15 [16];
  byte local_70;
  undefined7 uStack_6f;
  undefined8 local_68;
  
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  if (uVar2 < uVar3) {
    <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
    poll_ready(&local_70,param_1,param_2,param_3);
    if (local_68._1_1_ != -1) {
      if (local_68._1_1_ != '\x02') {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (uVar3,uVar2,uVar2,&PTR_s__root__cargo_registry_src_index__00af4d28);
      }
LAB_009a9b2c:
      unaff_x27 = CONCAT71(uStack_6f,local_70);
      uVar8 = 1;
      goto LAB_009a9ab8;
    }
  }
  else {
    lVar9 = *param_4;
    lVar13 = *(long *)(param_1 + 0x10);
    iVar4 = *(int *)(param_5 + 0x18);
    <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
    poll_ready(&local_70,param_1,param_2,param_3);
    if (iVar4 == -1) {
      if (local_68._1_1_ != -1) {
        if (local_68._1_1_ != '\x02') {
                    /* WARNING: Subroutine does not return */
          core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af4d10);
        }
        goto LAB_009a9b2c;
      }
    }
    else if (local_68._1_1_ != -1) {
      puVar1 = (ulong *)(lVar13 + 0x90);
      do {
        bVar5 = local_70;
        unaff_x27 = CONCAT71(uStack_6f,local_70);
        if (local_68._1_1_ == '\x02') {
          uVar8 = 1;
          goto LAB_009a9ab8;
        }
        cVar6 = (char)local_68;
        auVar15 = <mio::net::uds::datagram::mio::net::uds::datagram::UnixDatagram>::recv
                            (param_5 + 0x18,lVar9 + uVar3,uVar2 - uVar3);
        unaff_x27 = auVar15._8_8_;
        if (auVar15._0_8_ != 1) {
          uVar8 = 0;
          goto LAB_009a9ab8;
        }
        uVar14 = unaff_x27 & 3;
        if (uVar14 < 2) {
          if ((auVar15 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
            cVar7 = *(char *)(unaff_x27 + 0x10);
          }
          else {
            cVar7 = *(char *)(unaff_x27 + 0x1f);
          }
joined_r0x009a99f0:
          if (cVar7 != '\r') {
LAB_009a9aac:
            uVar8 = 1;
            goto LAB_009a9ab8;
          }
        }
        else {
          if (uVar14 == 2) {
                    /* try { // try from 009a99cc to 009a99df has its CatchHandler @ 009a9b44 */
            lVar13 = core::io::error::os_functions::get_os_functions();
            cVar7 = (**(code **)(lVar13 + 8))(unaff_x27 >> 0x20);
            goto joined_r0x009a99f0;
          }
          if ((auVar15._12_4_ & 0xff) != 0xd) goto LAB_009a9aac;
        }
        uVar11 = *puVar1;
        do {
          if (cVar6 != (char)(uVar11 >> 0x10)) break;
          uVar10 = *puVar1;
          if (uVar10 == uVar11) {
            cVar7 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar12) {
              *puVar1 = uVar11 & ((ulong)bVar5 & 0x33 ^ 0xff003f);
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 == '\0') {
              bVar12 = true;
            }
            else {
              bVar12 = false;
            }
          }
          else {
            bVar12 = false;
            ClearExclusiveLocal();
          }
          uVar11 = uVar10;
        } while (!bVar12);
        if ((1 < uVar14 - 2) && ((auVar15 & (undefined1  [16])0x3) != (undefined1  [16])0x0)) {
          local_68 = unaff_x27 - 1;
          local_70 = 3;
          <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_68);
        }
        <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
        poll_ready(&local_70,param_1,param_2,param_3);
      } while (local_68._1_1_ != -1);
      uVar8 = 2;
      goto LAB_009a9ab8;
    }
  }
  uVar8 = 2;
LAB_009a9ab8:
  auVar15._8_8_ = unaff_x27;
  auVar15._0_8_ = uVar8;
  return auVar15;
}


// ===== 009a9b5c  FUN_009a9b5c =====

undefined1  [16] FUN_009a9b5c(long param_1,undefined8 param_2,undefined4 param_3,long *param_4)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  bool bVar10;
  long lVar11;
  ulong uVar12;
  ulong unaff_x22;
  long lVar13;
  undefined1 auVar14 [16];
  byte local_70;
  undefined7 uStack_6f;
  undefined8 local_68;
  
  lVar2 = *param_4;
  lVar3 = param_4[1];
  lVar13 = param_4[2];
  lVar11 = *(long *)(param_1 + 0x10);
  <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
  poll_ready(&local_70);
  if (local_68._1_1_ == -1) {
    uVar7 = 2;
  }
  else {
    puVar1 = (ulong *)(lVar11 + 0x90);
    do {
      bVar4 = local_70;
      unaff_x22 = CONCAT71(uStack_6f,local_70);
      if (local_68._1_1_ == '\x02') {
        uVar7 = 1;
        goto LAB_009a9d2c;
      }
      if (*(int *)(lVar2 + 0x18) == -1) {
                    /* WARNING: Subroutine does not return */
        core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af4d10);
      }
      cVar5 = (char)local_68;
      auVar14 = <mio::net::uds::datagram::mio::net::uds::datagram::UnixDatagram>::send
                          (lVar2 + 0x18,lVar3,lVar13);
      unaff_x22 = auVar14._8_8_;
      if (auVar14._0_8_ != 1) {
        uVar7 = 0;
        goto LAB_009a9d2c;
      }
      uVar12 = unaff_x22 & 3;
      if (uVar12 < 2) {
        if ((auVar14 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
          cVar6 = *(char *)(unaff_x22 + 0x10);
        }
        else {
          cVar6 = *(char *)(unaff_x22 + 0x1f);
        }
joined_r0x009a9c64:
        if (cVar6 != '\r') {
LAB_009a9d20:
          uVar7 = 1;
          goto LAB_009a9d2c;
        }
      }
      else {
        if (uVar12 == 2) {
                    /* try { // try from 009a9c40 to 009a9c53 has its CatchHandler @ 009a9d5c */
          lVar11 = core::io::error::os_functions::get_os_functions();
          cVar6 = (**(code **)(lVar11 + 8))(unaff_x22 >> 0x20);
          goto joined_r0x009a9c64;
        }
        if ((auVar14._12_4_ & 0xff) != 0xd) goto LAB_009a9d20;
      }
      uVar9 = *puVar1;
      do {
        if (cVar5 != (char)(uVar9 >> 0x10)) break;
        uVar8 = *puVar1;
        if (uVar8 == uVar9) {
          cVar6 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar10) {
            *puVar1 = uVar9 & ((ulong)bVar4 & 0x33 ^ 0xff003f);
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
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
        uVar9 = uVar8;
      } while (!bVar10);
      if ((1 < uVar12 - 2) && ((auVar14 & (undefined1  [16])0x3) != (undefined1  [16])0x0)) {
        local_68 = unaff_x22 - 1;
        local_70 = 3;
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_68);
      }
      <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
      poll_ready(&local_70,param_1,param_2,param_3);
    } while (local_68._1_1_ != -1);
    uVar7 = 2;
  }
LAB_009a9d2c:
  auVar14._8_8_ = unaff_x22;
  auVar14._0_8_ = uVar7;
  return auVar14;
}


// ===== 009a9d74  FUN_009a9d74 =====

undefined1  [16] FUN_009a9d74(long param_1,undefined8 param_2,undefined4 param_3,long *param_4)

{
  ulong *puVar1;
  int *piVar2;
  long lVar3;
  int *piVar4;
  char cVar5;
  char cVar6;
  undefined8 uVar7;
  ulong uVar9;
  ulong uVar10;
  bool bVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined1 auVar15 [16];
  int *local_70;
  undefined8 local_68;
  int *piVar8;
  
  piVar2 = (int *)*param_4;
  lVar3 = param_4[1];
  lVar14 = param_4[2];
  lVar12 = *(long *)(param_1 + 0x10);
  <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
  poll_ready(&local_70);
  if (local_68._1_1_ == -1) {
    uVar7 = 2;
    local_70 = piVar2;
  }
  else {
    piVar2 = piVar2 + 6;
    puVar1 = (ulong *)(lVar12 + 0x90);
    do {
      piVar4 = local_70;
      if (local_68._1_1_ == '\x02') {
        uVar7 = 1;
        goto LAB_009a9f4c;
      }
      if (*piVar2 == -1) {
                    /* WARNING: Subroutine does not return */
        core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af4d40);
      }
      cVar5 = (char)local_68;
      local_70 = piVar2;
      auVar15 = <&std::fs::File_as_core::io::write::Write>::write_vectored(&local_70,lVar3,lVar14);
      piVar8 = auVar15._8_8_;
      if (auVar15._0_8_ != 1) {
        uVar7 = 0;
        local_70 = piVar8;
        goto LAB_009a9f4c;
      }
      uVar13 = (ulong)piVar8 & 3;
      if (uVar13 < 2) {
        if ((auVar15 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
          cVar6 = (char)piVar8[4];
        }
        else {
          cVar6 = *(char *)((long)piVar8 + 0x1f);
        }
joined_r0x009a9e84:
        if (cVar6 != '\r') {
LAB_009a9f40:
          uVar7 = 1;
          local_70 = piVar8;
          goto LAB_009a9f4c;
        }
      }
      else {
        if (uVar13 == 2) {
                    /* try { // try from 009a9e60 to 009a9e73 has its CatchHandler @ 009a9f7c */
          lVar12 = core::io::error::os_functions::get_os_functions();
          cVar6 = (**(code **)(lVar12 + 8))((ulong)piVar8 >> 0x20);
          goto joined_r0x009a9e84;
        }
        if ((auVar15._12_4_ & 0xff) != 0xd) goto LAB_009a9f40;
      }
      uVar10 = *puVar1;
      do {
        if (cVar5 != (char)(uVar10 >> 0x10)) break;
        uVar9 = *puVar1;
        if (uVar9 == uVar10) {
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar11) {
            *puVar1 = uVar10 & ((ulong)piVar4 & 0x33 ^ 0xff003f);
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            bVar11 = true;
          }
          else {
            bVar11 = false;
          }
        }
        else {
          bVar11 = false;
          ClearExclusiveLocal();
        }
        uVar10 = uVar9;
      } while (!bVar11);
      if ((1 < uVar13 - 2) && ((auVar15 & (undefined1  [16])0x3) != (undefined1  [16])0x0)) {
        local_68 = (long)piVar8 + -1;
        local_70 = (int *)CONCAT71(local_70._1_7_,3);
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_68);
      }
      <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
      poll_ready(&local_70,param_1,param_2,param_3);
    } while (local_68._1_1_ != -1);
    uVar7 = 2;
    local_70 = piVar8;
  }
LAB_009a9f4c:
  auVar15._8_8_ = local_70;
  auVar15._0_8_ = uVar7;
  return auVar15;
}


// ===== 009a9f94  FUN_009a9f94 =====

undefined1  [16] FUN_009a9f94(long param_1,undefined8 param_2,undefined4 param_3,long *param_4)

{
  ulong *puVar1;
  int *piVar2;
  long lVar3;
  int *piVar4;
  char cVar5;
  char cVar6;
  undefined8 uVar7;
  ulong uVar9;
  ulong uVar10;
  bool bVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined1 auVar15 [16];
  int *local_70;
  undefined8 local_68;
  int *piVar8;
  
  piVar2 = (int *)*param_4;
  lVar3 = param_4[1];
  lVar14 = param_4[2];
  lVar12 = *(long *)(param_1 + 0x10);
  <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
  poll_ready(&local_70);
  if (local_68._1_1_ == -1) {
    uVar7 = 2;
    local_70 = piVar2;
  }
  else {
    piVar2 = piVar2 + 6;
    puVar1 = (ulong *)(lVar12 + 0x90);
    do {
      piVar4 = local_70;
      if (local_68._1_1_ == '\x02') {
        uVar7 = 1;
        goto LAB_009aa16c;
      }
      if (*piVar2 == -1) {
                    /* WARNING: Subroutine does not return */
        core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af4d40);
      }
      cVar5 = (char)local_68;
      local_70 = piVar2;
      auVar15 = <&mio::net::tcp::stream::TcpStream_as_core::io::write::Write>::write_vectored
                          (&local_70,lVar3,lVar14);
      piVar8 = auVar15._8_8_;
      if (auVar15._0_8_ != 1) {
        uVar7 = 0;
        local_70 = piVar8;
        goto LAB_009aa16c;
      }
      uVar13 = (ulong)piVar8 & 3;
      if (uVar13 < 2) {
        if ((auVar15 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
          cVar6 = (char)piVar8[4];
        }
        else {
          cVar6 = *(char *)((long)piVar8 + 0x1f);
        }
joined_r0x009aa0a4:
        if (cVar6 != '\r') {
LAB_009aa160:
          uVar7 = 1;
          local_70 = piVar8;
          goto LAB_009aa16c;
        }
      }
      else {
        if (uVar13 == 2) {
                    /* try { // try from 009aa080 to 009aa093 has its CatchHandler @ 009aa19c */
          lVar12 = core::io::error::os_functions::get_os_functions();
          cVar6 = (**(code **)(lVar12 + 8))((ulong)piVar8 >> 0x20);
          goto joined_r0x009aa0a4;
        }
        if ((auVar15._12_4_ & 0xff) != 0xd) goto LAB_009aa160;
      }
      uVar10 = *puVar1;
      do {
        if (cVar5 != (char)(uVar10 >> 0x10)) break;
        uVar9 = *puVar1;
        if (uVar9 == uVar10) {
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar11) {
            *puVar1 = uVar10 & ((ulong)piVar4 & 0x33 ^ 0xff003f);
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            bVar11 = true;
          }
          else {
            bVar11 = false;
          }
        }
        else {
          bVar11 = false;
          ClearExclusiveLocal();
        }
        uVar10 = uVar9;
      } while (!bVar11);
      if ((1 < uVar13 - 2) && ((auVar15 & (undefined1  [16])0x3) != (undefined1  [16])0x0)) {
        local_68 = (long)piVar8 + -1;
        local_70 = (int *)CONCAT71(local_70._1_7_,3);
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_68);
      }
      <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
      poll_ready(&local_70,param_1,param_2,param_3);
    } while (local_68._1_1_ != -1);
    uVar7 = 2;
    local_70 = piVar8;
  }
LAB_009aa16c:
  auVar15._8_8_ = local_70;
  auVar15._0_8_ = uVar7;
  return auVar15;
}


// ===== 009aa1b4  FUN_009aa1b4 =====

undefined1  [16] FUN_009aa1b4(long param_1,undefined8 param_2,undefined4 param_3,long *param_4)

{
  ulong *puVar1;
  int *piVar2;
  long lVar3;
  int *piVar4;
  char cVar5;
  char cVar6;
  undefined8 uVar7;
  ulong uVar9;
  ulong uVar10;
  bool bVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined1 auVar15 [16];
  int *local_70;
  undefined8 local_68;
  int *piVar8;
  
  piVar2 = (int *)*param_4;
  lVar3 = param_4[1];
  lVar14 = param_4[2];
  lVar12 = *(long *)(param_1 + 0x10);
  <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
  poll_ready(&local_70);
  if (local_68._1_1_ == -1) {
    uVar7 = 2;
    local_70 = piVar2;
  }
  else {
    piVar2 = piVar2 + 6;
    puVar1 = (ulong *)(lVar12 + 0x90);
    do {
      piVar4 = local_70;
      if (local_68._1_1_ == '\x02') {
        uVar7 = 1;
        goto LAB_009aa38c;
      }
      if (*piVar2 == -1) {
                    /* WARNING: Subroutine does not return */
        core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af4d40);
      }
      cVar5 = (char)local_68;
      local_70 = piVar2;
      auVar15 = <&mio::net::uds::stream::UnixStream_as_core::io::write::Write>::write_vectored
                          (&local_70,lVar3,lVar14);
      piVar8 = auVar15._8_8_;
      if (auVar15._0_8_ != 1) {
        uVar7 = 0;
        local_70 = piVar8;
        goto LAB_009aa38c;
      }
      uVar13 = (ulong)piVar8 & 3;
      if (uVar13 < 2) {
        if ((auVar15 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
          cVar6 = (char)piVar8[4];
        }
        else {
          cVar6 = *(char *)((long)piVar8 + 0x1f);
        }
joined_r0x009aa2c4:
        if (cVar6 != '\r') {
LAB_009aa380:
          uVar7 = 1;
          local_70 = piVar8;
          goto LAB_009aa38c;
        }
      }
      else {
        if (uVar13 == 2) {
                    /* try { // try from 009aa2a0 to 009aa2b3 has its CatchHandler @ 009aa3bc */
          lVar12 = core::io::error::os_functions::get_os_functions();
          cVar6 = (**(code **)(lVar12 + 8))((ulong)piVar8 >> 0x20);
          goto joined_r0x009aa2c4;
        }
        if ((auVar15._12_4_ & 0xff) != 0xd) goto LAB_009aa380;
      }
      uVar10 = *puVar1;
      do {
        if (cVar5 != (char)(uVar10 >> 0x10)) break;
        uVar9 = *puVar1;
        if (uVar9 == uVar10) {
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar11) {
            *puVar1 = uVar10 & ((ulong)piVar4 & 0x33 ^ 0xff003f);
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            bVar11 = true;
          }
          else {
            bVar11 = false;
          }
        }
        else {
          bVar11 = false;
          ClearExclusiveLocal();
        }
        uVar10 = uVar9;
      } while (!bVar11);
      if ((1 < uVar13 - 2) && ((auVar15 & (undefined1  [16])0x3) != (undefined1  [16])0x0)) {
        local_68 = (long)piVar8 + -1;
        local_70 = (int *)CONCAT71(local_70._1_7_,3);
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_68);
      }
      <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
      poll_ready(&local_70,param_1,param_2,param_3);
    } while (local_68._1_1_ != -1);
    uVar7 = 2;
    local_70 = piVar8;
  }
LAB_009aa38c:
  auVar15._8_8_ = local_70;
  auVar15._0_8_ = uVar7;
  return auVar15;
}


// ===== 009aa3d4  FUN_009aa3d4 =====

undefined1  [16] FUN_009aa3d4(long param_1,undefined8 param_2,undefined4 param_3,long *param_4)

{
  ulong *puVar1;
  int *piVar2;
  long lVar3;
  int *piVar4;
  char cVar5;
  char cVar6;
  undefined8 uVar7;
  ulong uVar9;
  ulong uVar10;
  bool bVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined1 auVar15 [16];
  int *local_70;
  undefined8 local_68;
  int *piVar8;
  
  piVar2 = (int *)*param_4;
  lVar3 = param_4[1];
  lVar14 = param_4[2];
  lVar12 = *(long *)(param_1 + 0x10);
  <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
  poll_ready(&local_70);
  if (local_68._1_1_ == -1) {
    uVar7 = 2;
    local_70 = piVar2;
  }
  else {
    piVar2 = piVar2 + 6;
    puVar1 = (ulong *)(lVar12 + 0x90);
    do {
      piVar4 = local_70;
      if (local_68._1_1_ == '\x02') {
        uVar7 = 1;
        goto LAB_009aa5ac;
      }
      if (*piVar2 == -1) {
                    /* WARNING: Subroutine does not return */
        core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af4d40);
      }
      cVar5 = (char)local_68;
      local_70 = piVar2;
      auVar15 = <&mio::sys::unix::pipe::Sender_as_core::io::write::Write>::write_vectored
                          (&local_70,lVar3,lVar14);
      piVar8 = auVar15._8_8_;
      if (auVar15._0_8_ != 1) {
        uVar7 = 0;
        local_70 = piVar8;
        goto LAB_009aa5ac;
      }
      uVar13 = (ulong)piVar8 & 3;
      if (uVar13 < 2) {
        if ((auVar15 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
          cVar6 = (char)piVar8[4];
        }
        else {
          cVar6 = *(char *)((long)piVar8 + 0x1f);
        }
joined_r0x009aa4e4:
        if (cVar6 != '\r') {
LAB_009aa5a0:
          uVar7 = 1;
          local_70 = piVar8;
          goto LAB_009aa5ac;
        }
      }
      else {
        if (uVar13 == 2) {
                    /* try { // try from 009aa4c0 to 009aa4d3 has its CatchHandler @ 009aa5dc */
          lVar12 = core::io::error::os_functions::get_os_functions();
          cVar6 = (**(code **)(lVar12 + 8))((ulong)piVar8 >> 0x20);
          goto joined_r0x009aa4e4;
        }
        if ((auVar15._12_4_ & 0xff) != 0xd) goto LAB_009aa5a0;
      }
      uVar10 = *puVar1;
      do {
        if (cVar5 != (char)(uVar10 >> 0x10)) break;
        uVar9 = *puVar1;
        if (uVar9 == uVar10) {
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar11) {
            *puVar1 = uVar10 & ((ulong)piVar4 & 0x33 ^ 0xff003f);
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            bVar11 = true;
          }
          else {
            bVar11 = false;
          }
        }
        else {
          bVar11 = false;
          ClearExclusiveLocal();
        }
        uVar10 = uVar9;
      } while (!bVar11);
      if ((1 < uVar13 - 2) && ((auVar15 & (undefined1  [16])0x3) != (undefined1  [16])0x0)) {
        local_68 = (long)piVar8 + -1;
        local_70 = (int *)CONCAT71(local_70._1_7_,3);
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_68);
      }
      <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
      poll_ready(&local_70,param_1,param_2,param_3);
    } while (local_68._1_1_ != -1);
    uVar7 = 2;
    local_70 = piVar8;
  }
LAB_009aa5ac:
  auVar15._8_8_ = local_70;
  auVar15._0_8_ = uVar7;
  return auVar15;
}


// ===== 009aa5f4  FUN_009aa5f4 =====

void FUN_009aa5f4(ulong param_1)

{
  long local_18;
  
  if ((1 < (param_1 & 3) - 2) && ((param_1 & 3) != 0)) {
    local_18 = param_1 - 1;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
  }
  return;
}


// ===== 009aa63c  FUN_009aa63c =====

void FUN_009aa63c(ulong param_1,short param_2)

{
  long local_18;
  
  if (((param_2 == 2) && (1 < (param_1 & 3) - 2)) && ((param_1 & 3) != 0)) {
    local_18 = param_1 - 1;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
  }
  return;
}


// ===== 009aa690  FUN_009aa690 =====

void FUN_009aa690(long param_1,ulong param_2)

{
  long local_18;
  
  if (((param_1 != 0) && (1 < (param_2 & 3) - 2)) && ((param_2 & 3) != 0)) {
    local_18 = param_2 - 1;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
  }
  return;
}


// ===== 009aa6dc  FUN_009aa6dc =====

void FUN_009aa6dc(long *param_1)

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
                    /* try { // try from 009aa720 to 009aa727 has its CatchHandler @ 009aa7b8 */
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


// ===== 009aa7dc  FUN_009aa7dc =====

void FUN_009aa7dc(long *param_1)

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
                    /* try { // try from 009aa814 to 009aa81b has its CatchHandler @ 009aa8b8 */
          (*pcVar2)(__ptr);
        }
        if (puVar4[1] != 0) {
          free(__ptr);
          return;
        }
      }
    }
    else {
      if (lVar1 != 0) {
        uVar3 = param_1[1] & 3;
        if ((1 < uVar3 - 2) && (uVar3 != 0)) {
          local_28 = param_1[1] - 1;
                    /* try { // try from 009aa870 to 009aa877 has its CatchHandler @ 009aa8a0 */
          <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
        }
      }
      if (param_1[2] != 0) {
        free((void *)param_1[3]);
      }
    }
  }
  return;
}


// ===== 009aa8dc  FUN_009aa8dc =====

void FUN_009aa8dc(ulong *param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  void *__ptr;
  
  uVar4 = *param_1;
  if (uVar4 != 0xfffffffffffffffe) {
    if (uVar4 == 0xffffffffffffffff) {
      __ptr = (void *)param_1[2];
      if (__ptr != (void *)0x0) {
        puVar9 = (undefined8 *)param_1[3];
        pcVar5 = (code *)*puVar9;
        if (pcVar5 != (code *)0x0) {
                    /* try { // try from 009aa948 to 009aa94f has its CatchHandler @ 009aa9f0 */
          (*pcVar5)(__ptr);
        }
        if (puVar9[1] != 0) {
          free(__ptr);
          return;
        }
      }
    }
    else {
      uVar8 = param_1[3];
      if (uVar8 == 0) {
        lVar10 = 0;
        uVar4 = 0;
        lVar7 = 0;
      }
      else {
        uVar1 = 0;
        if (uVar4 <= param_1[2]) {
          uVar1 = uVar4;
        }
        lVar7 = param_1[2] - uVar1;
        lVar10 = uVar8 - (uVar4 - lVar7);
        if (uVar8 < uVar4 - lVar7 || lVar10 == 0) {
          lVar10 = 0;
          uVar4 = lVar7 + uVar8;
        }
      }
      uVar8 = param_1[1];
                    /* try { // try from 009aa988 to 009aa98b has its CatchHandler @ 009aaa18 */
      FUN_009976d8(uVar8 + lVar7 * 0x10,uVar4 - lVar7);
                    /* try { // try from 009aa98c to 009aa997 has its CatchHandler @ 009aaa10 */
      FUN_009976d8(uVar8,lVar10);
      if (*param_1 != 0) {
        free((void *)param_1[1]);
      }
      plVar6 = (long *)param_1[4];
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
        <alloc::sync::[n]::alloc::sync::Arc<std::sys::fs::unix::InnerReadDir>>::drop_slow
                  (param_1 + 4);
        return;
      }
    }
  }
  return;
}


// ===== 009aaa74  FUN_009aaa74 =====

void FUN_009aaa74(long *param_1)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  void *__ptr;
  undefined8 *puVar4;
  long local_28;
  
  lVar1 = *param_1;
  if (lVar1 != -2) {
    if (lVar1 == -1) {
      __ptr = (void *)param_1[2];
      if (__ptr != (void *)0x0) {
        puVar4 = (undefined8 *)param_1[3];
        pcVar3 = (code *)*puVar4;
        if (pcVar3 != (code *)0x0) {
                    /* try { // try from 009aaaf8 to 009aaaff has its CatchHandler @ 009aabe4 */
          (*pcVar3)(__ptr);
        }
        if (puVar4[1] != 0) {
          free(__ptr);
          return;
        }
      }
    }
    else {
      if (lVar1 == 0) {
        if (param_1[1] != 0) {
          uVar2 = param_1[2] & 3;
          if ((1 < uVar2 - 2) && (uVar2 != 0)) {
            local_28 = param_1[2] - 1;
                    /* try { // try from 009aab58 to 009aaba3 has its CatchHandler @ 009aabcc */
            <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
          }
        }
      }
      else if (lVar1 == 1) {
        uVar2 = param_1[1];
        if (((uVar2 != 0) && (1 < (uVar2 & 3) - 2)) && ((uVar2 & 3) != 0)) {
          local_28 = uVar2 - 1;
                    /* try { // try from 009aaad8 to 009aaadf has its CatchHandler @ 009aabcc */
          <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
        }
      }
      else if (param_1[1] != 0) {
        uVar2 = param_1[2] & 3;
        if ((1 < uVar2 - 2) && (uVar2 != 0)) {
          local_28 = param_1[2] - 1;
          <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
        }
      }
      if (param_1[3] != 0) {
        free((void *)param_1[4]);
      }
    }
  }
  return;
}


// ===== 009aac08  FUN_009aac08 =====

void FUN_009aac08(ulong param_1)

{
  long local_18;
  
  if ((1 < (param_1 & 3) - 2) && ((param_1 & 3) != 0)) {
    local_18 = param_1 - 1;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
  }
  return;
}


// ===== 009aac50  FUN_009aac50 =====

void FUN_009aac50(long *param_1)

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


// ===== 009aac9c  FUN_009aac9c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_009aac9c(undefined8 *param_1,undefined8 *param_2)

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
  ulong uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  local_18 = *param_2;
  local_30 = 0;
  uStack_28 = 0;
  local_20 = 0;
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
  FUN_009ac188(&local_60,&local_18,8);
  uStack_28 = uStack_28 | local_30 << 0x38;
  uStack_48 = uStack_28 ^ uStack_48;
  uVar2 = local_50 + local_60;
  uVar3 = uVar2 ^ (local_50 >> 0x33 | local_50 << 0xd);
  uVar4 = uStack_48 + lStack_58 ^ (uStack_48 >> 0x30 | uStack_48 << 0x10);
  uVar1 = uStack_48 + lStack_58 + uVar3;
  uVar2 = uVar4 + (uVar2 >> 0x20 | uVar2 << 0x20);
  uVar3 = uVar1 ^ (uVar3 >> 0x2f | uVar3 << 0x11);
  uVar4 = uVar2 ^ (uVar4 >> 0x2b | uVar4 << 0x15);
  uVar2 = (uVar2 ^ uStack_28) + uVar3;
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


// ===== 009aadb8  FUN_009aadb8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_009aadb8(undefined8 *param_1,undefined4 *param_2)

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
  ulong uStack_28;
  undefined8 local_20;
  undefined4 local_14;
  
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  local_14 = *param_2;
  local_30 = 0;
  uStack_28 = 0;
  local_20 = 0;
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
  FUN_009ac188(&local_60,&local_14,4);
  uStack_28 = uStack_28 | local_30 << 0x38;
  uStack_48 = uStack_28 ^ uStack_48;
  uVar2 = local_50 + local_60;
  uVar3 = uVar2 ^ (local_50 >> 0x33 | local_50 << 0xd);
  uVar4 = uStack_48 + lStack_58 ^ (uStack_48 >> 0x30 | uStack_48 << 0x10);
  uVar1 = uStack_48 + lStack_58 + uVar3;
  uVar2 = uVar4 + (uVar2 >> 0x20 | uVar2 << 0x20);
  uVar3 = uVar1 ^ (uVar3 >> 0x2f | uVar3 << 0x11);
  uVar4 = uVar2 ^ (uVar4 >> 0x2b | uVar4 << 0x15);
  uVar2 = (uVar2 ^ uStack_28) + uVar3;
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


// ===== 009aaed4  FUN_009aaed4 =====

void FUN_009aaed4(undefined8 param_1,undefined1 param_2)

{
  undefined1 local_44 [4];
  undefined **local_40;
  code *pcStack_38;
  undefined1 *local_30;
  undefined *puStack_28;
  undefined8 local_20;
  code *pcStack_18;
  
  local_30 = local_44;
  local_40 = &PTR_s_TOKIO_WORKER_THREADS_00af4d58;
  pcStack_38 = FUN_0099f78c;
  puStack_28 = PTR_fmt_00b00e00;
  pcStack_18 = FUN_009accb0;
  local_44[0] = param_2;
  local_20 = param_1;
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002af40c,&local_40,&PTR_s__root__cargo_registry_src_index__00af4d68);
}


// ===== 009aaf2c  <tokio::sync::batch_semaphore::tokio::sync::batch_semaphore::Semaphore>::try_acquire =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::sync::batch_semaphore::tokio::sync::batch_semaphore::Semaphore>::try_acquire */

undefined8 __rustcall
<tokio::sync::batch_semaphore::tokio::sync::batch_semaphore::Semaphore>::try_acquire
          (long param_1,ulong param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined *local_20;
  undefined *puStack_18;
  
  if (param_2 >> 0x3d != 0) {
    local_20 = &DAT_002a1a00;
    puStack_18 = PTR_fmt_00b00c10;
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              (&DAT_002af435,&local_20,&PTR_s__root__cargo_registry_src_index__00af4d80);
  }
  puVar1 = (ulong *)(param_1 + 0x20);
  uVar4 = *puVar1;
  while( true ) {
    if ((uVar4 & 1) != 0) {
      return 0;
    }
    if (uVar4 < param_2 * 2) break;
    while (*puVar1 == uVar4) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 + param_2 * -2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        return 2;
      }
    }
    ClearExclusiveLocal();
    uVar4 = *puVar1;
  }
  return 1;
}


// ===== 009aafcc  <tokio::sync::batch_semaphore::tokio::sync::batch_semaphore::Semaphore>::available_permits =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::sync::batch_semaphore::tokio::sync::batch_semaphore::Semaphore>::available_permits */

ulong __rustcall
<tokio::sync::batch_semaphore::tokio::sync::batch_semaphore::Semaphore>::available_permits
          (long param_1)

{
  return *(ulong *)(param_1 + 0x20) >> 1;
}


// ===== 009aafdc  FUN_009aafdc =====

void FUN_009aafdc(char *param_1,ulong param_2,char *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  byte bVar6;
  long lVar7;
  undefined *puVar8;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  undefined **ppuVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong local_290;
  long local_288 [65];
  undefined *local_80;
  undefined *local_78;
  undefined *puStack_70;
  undefined *local_68;
  
  local_288[0x40] = 0;
  local_290 = param_2;
  if (param_2 == 0) {
    do {
      if (*param_3 != '\x01') {
        ClearExclusiveLocal();
                    /* try { // try from 009ab2e8 to 009ab2f3 has its CatchHandler @ 009ab2f8 */
        <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(param_3,0);
        break;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(param_3,0x10);
      if (bVar5) {
        *param_3 = '\0';
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  else {
    bVar6 = 0;
    puVar1 = (ulong *)(param_1 + 0x20);
    do {
      if (param_3 == (char *)0x0) {
        param_3 = param_1;
        if (*param_1 == '\0') {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(param_1,0x10);
          if (bVar5) {
            *param_1 = '\x01';
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_009ab04c;
        }
        else {
          ClearExclusiveLocal();
        }
                    /* try { // try from 009ab1e4 to 009ab1ef has its CatchHandler @ 009ab300 */
        <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
                  (param_1,param_2,0xffffffff);
        param_2 = extraout_x1_01;
      }
LAB_009ab04c:
      if ((ulong)local_288[0x40] < 0x20) {
LAB_009ab090:
        if (*(long *)(param_3 + 0x10) != 0) {
          puVar2 = (ulong *)(*(long *)(param_3 + 0x10) + 0x20);
          uVar13 = *puVar2;
          do {
            uVar10 = local_290;
            if (uVar13 <= local_290) {
              uVar10 = uVar13;
            }
            while (*puVar2 == uVar13) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar5) {
                *puVar2 = uVar13 - uVar10;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') {
                uVar10 = local_290 - uVar10;
                bVar5 = local_290 < uVar13;
                local_290 = uVar10;
                if (bVar5) goto LAB_009ab05c;
                plVar11 = *(long **)(param_3 + 0x10);
                if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af4dc8);
                }
                plVar12 = plVar11 + 2;
                lVar14 = *plVar12;
                *(long *)(param_3 + 0x10) = lVar14;
                if (lVar14 == 0) {
                  param_3[8] = '\0';
                  param_3[9] = '\0';
                  param_3[10] = '\0';
                  param_3[0xb] = '\0';
                  param_3[0xc] = '\0';
                  param_3[0xd] = '\0';
                  param_3[0xe] = '\0';
                  param_3[0xf] = '\0';
                  lVar15 = plVar11[1];
                  lVar14 = *plVar11;
                  *plVar12 = 0;
                  plVar11[3] = 0;
                  *plVar11 = 0;
                }
                else {
                  *(undefined8 *)(lVar14 + 0x18) = 0;
                  lVar15 = plVar11[1];
                  lVar14 = *plVar11;
                  *plVar12 = 0;
                  plVar11[3] = 0;
                  *plVar11 = 0;
                }
                if (lVar14 != 0) {
                  if (0x1f < (ulong)local_288[0x40]) {
                    /* WARNING: Subroutine does not return */
                    core::panicking::panic_bounds_check
                              (local_288[0x40],0x20,&PTR_s__root__cargo_registry_src_index__00af4de0
                              );
                  }
                  lVar7 = local_288[0x40] * 2;
                  local_288[local_288[0x40] * 2 + 1] = lVar15;
                  local_288[lVar7] = lVar14;
                  local_288[0x40] = local_288[0x40] + 1;
                }
                if (0x1f < (ulong)local_288[0x40]) goto LAB_009ab05c;
                goto LAB_009ab090;
              }
            }
            ClearExclusiveLocal();
            uVar13 = *puVar2;
          } while( true );
        }
        if (local_290 != 0) goto LAB_009ab158;
LAB_009ab184:
        bVar3 = 1;
      }
      else {
LAB_009ab05c:
        bVar3 = local_290 == 0 & bVar6;
        if ((local_290 != 0) && (!(bool)(bVar6 ^ 1))) {
LAB_009ab158:
          if (local_290 >> 0x3d != 0) {
            ppuVar9 = &PTR_s__root__cargo_registry_src_index__00af4d98;
            puVar8 = &DAT_002a6bbb;
            local_80 = &DAT_002a1a00;
LAB_009ab2b8:
            local_78 = PTR_fmt_00b00c10;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 009ab2b8 to 009ab2df has its CatchHandler @ 009ab344 */
            core::panicking::panic_fmt(puVar8,&local_80,ppuVar9);
          }
          do {
            uVar13 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar13 + local_290 * 2;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (local_290 + (uVar13 >> 1) >> 0x3d != 0) {
            ppuVar9 = &PTR_s__root__cargo_registry_src_index__00af4db0;
            puVar8 = &DAT_002abfad;
            puStack_70 = &DAT_002a1a00;
            local_68 = PTR_fmt_00b00c10;
            local_80 = (undefined *)&local_290;
            goto LAB_009ab2b8;
          }
          local_290 = 0;
          goto LAB_009ab184;
        }
      }
      do {
        bVar6 = bVar3;
        if (*param_3 != '\x01') {
          ClearExclusiveLocal();
                    /* try { // try from 009ab1d0 to 009ab1db has its CatchHandler @ 009ab2fc */
          <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(param_3,0);
          param_2 = extraout_x1_00;
          break;
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(param_3,0x10);
        if (bVar5) {
          *param_3 = '\0';
          cVar4 = ExclusiveMonitorsStatus();
        }
        bVar3 = bVar6;
      } while (cVar4 != '\0');
      lVar14 = local_288[0x40];
      local_288[0x40] = 0;
      plVar11 = local_288;
      for (lVar14 = lVar14 << 4; lVar14 != 0; lVar14 = lVar14 + -0x10) {
                    /* try { // try from 009ab1c4 to 009ab1c7 has its CatchHandler @ 009ab32c */
        (**(code **)(*plVar11 + 8))(plVar11[1]);
        param_2 = extraout_x1;
        plVar11 = plVar11 + 2;
      }
      param_3 = (char *)0x0;
    } while (local_290 != 0);
  }
  plVar11 = local_288 + 1;
  lVar14 = local_288[0x40] + 1;
  while (lVar14 = lVar14 + -1, lVar14 != 0) {
    plVar12 = plVar11 + -1;
    lVar15 = *plVar11;
    plVar11 = plVar11 + 2;
                    /* try { // try from 009ab230 to 009ab233 has its CatchHandler @ 009ab308 */
    (**(code **)(*plVar12 + 0x18))(lVar15);
  }
  return;
}


// ===== 009ab3c8  <tokio::sync::batch_semaphore::tokio::sync::batch_semaphore::Semaphore>::new =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::sync::batch_semaphore::tokio::sync::batch_semaphore::Semaphore>::new */

void __rustcall
<tokio::sync::batch_semaphore::tokio::sync::batch_semaphore::Semaphore>::new
          (undefined8 *param_1,ulong param_2)

{
  undefined *local_20;
  undefined *puStack_18;
  
  if (param_2 >> 0x3d == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    param_1[2] = 0;
    param_1[4] = param_2 << 1;
    return;
  }
  local_20 = &DAT_002a1a00;
  puStack_18 = PTR_fmt_00b00c10;
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002af435,&local_20,&PTR_s__root__cargo_registry_src_index__00af4df8);
}


// ===== 009ab420  FUN_009ab420 =====

void FUN_009ab420(char *param_1,undefined8 param_2)

{
  ulong *puVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  
  if (*param_1 == '\0') {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar4) {
      *param_1 = '\x01';
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_009ab444;
  }
  else {
    ClearExclusiveLocal();
  }
  <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
            (param_1,param_2,0xffffffff);
LAB_009ab444:
  puVar1 = (ulong *)(param_1 + 0x20);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = *puVar1 | 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  plVar5 = *(long **)(param_1 + 0x10);
  param_1[0x18] = '\x01';
  while (plVar5 != (long *)0x0) {
    plVar6 = plVar5 + 2;
    lVar7 = *plVar6;
    *(long *)(param_1 + 0x10) = lVar7;
    if (lVar7 == 0) {
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
      lVar7 = *plVar5;
      lVar2 = plVar5[1];
      *plVar6 = 0;
      plVar5[3] = 0;
      *plVar5 = 0;
    }
    else {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      lVar7 = *plVar5;
      lVar2 = plVar5[1];
      *plVar6 = 0;
      plVar5[3] = 0;
      *plVar5 = 0;
    }
    if (lVar7 != 0) {
                    /* try { // try from 009ab4d0 to 009ab4d3 has its CatchHandler @ 009ab504 */
      (**(code **)(lVar7 + 8))(lVar2);
    }
    plVar5 = *(long **)(param_1 + 0x10);
  }
  do {
    if (*param_1 != '\x01') {
      ClearExclusiveLocal();
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(param_1,0);
      return;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar4) {
      *param_1 = '\0';
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  return;
}


// ===== 009ab53c  <tokio::sync::batch_semaphore::tokio::sync::batch_semaphore::Semaphore>::release =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::sync::batch_semaphore::tokio::sync::batch_semaphore::Semaphore>::release */

void __rustcall
<tokio::sync::batch_semaphore::tokio::sync::batch_semaphore::Semaphore>::release
          (char *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  
  if (param_2 == 0) {
    return;
  }
  if (*param_1 == '\0') {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = '\x01';
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') {
      FUN_009aafdc(param_1,param_2,param_1);
      return;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
            (param_1,param_2,0xffffffff);
  FUN_009aafdc(param_1,param_2,param_1);
  return;
}


// ===== 009ab590  <tokio::sync::batch_semaphore::tokio::sync::batch_semaphore::Semaphore>::const_new =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::sync::batch_semaphore::tokio::sync::batch_semaphore::Semaphore>::const_new */

void __rustcall
<tokio::sync::batch_semaphore::tokio::sync::batch_semaphore::Semaphore>::const_new
          (undefined8 *param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    param_1[2] = 0;
    param_1[4] = param_2 << 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic
            ("assertion failed: permits <= Self::MAX_PERMITS",0x2e,
             &PTR_s__root__cargo_registry_src_index__00af4e10);
}


// ===== 009ab5d0  <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::poll_ready =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::poll_ready
    */

void __rustcall
<tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::poll_ready
          (undefined8 *param_1,long param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  char cVar4;
  char cVar5;
  ulong uVar6;
  char cVar7;
  undefined8 local_70;
  undefined1 local_68;
  byte local_67;
  undefined4 local_66;
  undefined2 local_62;
  undefined8 local_60;
  undefined1 local_58;
  
  puVar1 = PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  uVar6 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar6 == 0) {
    uVar6 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar2 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar6);
    if (puVar2 <= &DAT_00000001) goto LAB_009ab684;
LAB_009ab620:
    if (puVar2 != (undefined1 *)0x0) goto LAB_009ab624;
LAB_009ab698:
    cVar7 = '\0';
    cVar5 = '\0';
  }
  else {
    puVar2 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar6);
    if (&DAT_00000001 < puVar2) goto LAB_009ab620;
LAB_009ab684:
    puVar2 = (undefined1 *)FUN_00996984(uVar6 & 0xffffffff,puVar2,0);
    if (puVar2 == (undefined1 *)0x0) goto LAB_009ab698;
LAB_009ab624:
    cVar7 = puVar2[0x44];
    cVar5 = puVar2[0x45];
    cVar4 = cVar5;
    if (cVar7 == '\x01') {
      if (cVar5 == '\0') {
        FUN_009b13f8(*param_3,&PTR_s__root__cargo_registry_src_index__00af64a0);
        *(undefined1 *)((long)param_1 + 9) = 0xff;
        return;
      }
      cVar4 = cVar5 + -1;
    }
    puVar2[0x45] = cVar4;
  }
                    /* try { // try from 009ab6ac to 009ab713 has its CatchHandler @ 009ab7cc */
  FUN_0097f770(&local_70,*(long *)(param_2 + 0x10) + 0x80,param_3,param_4);
  if (local_67 == 2) {
    *(undefined1 *)((long)param_1 + 9) = 0xff;
  }
  else {
    local_60 = local_70;
    local_58 = local_68;
    if ((local_67 & 1) == 0) {
      *(undefined1 *)((long)param_1 + 9) = 0;
      *param_1 = local_70;
      *(undefined1 *)(param_1 + 1) = local_68;
      *(undefined4 *)((long)param_1 + 10) = local_66;
      *(undefined2 *)((long)param_1 + 0xe) = local_62;
      return;
    }
    uVar3 = <alloc::io::error::core::io::error::Error>::new<&str>
                      (0x2a,
                       "A Tokio 1.x context was found, but it is being shutdown.no permits available"
                       ,0x38);
    *param_1 = uVar3;
    *(undefined1 *)((long)param_1 + 9) = 2;
  }
  if (cVar7 == '\0') {
    return;
  }
  uVar6 = *(ulong *)puVar1;
  if (uVar6 == 0) {
    uVar6 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar2 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar6);
    if (&DAT_00000001 < puVar2) goto joined_r0x009ab7c4;
  }
  else {
    puVar2 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar6);
    if (&DAT_00000001 < puVar2) goto joined_r0x009ab7c4;
  }
  puVar2 = (undefined1 *)FUN_00996984(uVar6 & 0xffffffff,puVar2,0);
joined_r0x009ab7c4:
  if (puVar2 != (undefined1 *)0x0) {
    puVar2[0x45] = cVar5;
    puVar2[0x44] = 1;
  }
  return;
}


// ===== 009ab7e4  <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::clear_readiness =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::clear_readiness
    */

void __rustcall
<tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
clear_readiness(long param_1,ulong *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar5 = *param_2;
  puVar1 = (ulong *)(*(long *)(param_1 + 0x10) + 0x90);
  uVar4 = param_2[1];
  uVar6 = *puVar1;
  do {
    while( true ) {
      if ((char)uVar4 != (char)(uVar6 >> 0x10)) {
        return;
      }
      uVar7 = *puVar1;
      if (uVar7 == uVar6) break;
      ClearExclusiveLocal();
      uVar6 = uVar7;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = uVar6 & (uVar5 & 0x33 ^ 0xff003f);
      cVar2 = ExclusiveMonitorsStatus();
    }
    uVar6 = uVar7;
  } while (cVar2 != '\0');
  return;
}


// ===== 009ab844  <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::poll_read_ready =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::poll_read_ready
    */

void __rustcall
<tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
poll_read_ready(undefined8 param_1,undefined8 param_2)

{
  poll_ready(param_1,param_2,0);
  return;
}


// ===== 009ab84c  <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::poll_write_ready =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::poll_write_ready
    */

void __rustcall
<tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
poll_write_ready(undefined8 param_1,undefined8 param_2)

{
  poll_ready(param_1,param_2,1);
  return;
}


// ===== 009ab854  <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::handle =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::handle
    */

void __rustcall
<tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::handle
          (int *param_1)

{
  long lVar1;
  
  lVar1 = 0x140;
  if (*param_1 == 0) {
    lVar1 = 0xe0;
  }
  if (*(int *)(*(long *)(param_1 + 2) + lVar1 + 0x44) != -1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed
            ("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
             ,0x68,&PTR_s__root__cargo_registry_src_index__00af4e28);
}


// ===== 009ab8a0  FUN_009ab8a0 =====

ulong FUN_009ab8a0(void)

{
  code cVar1;
  uint uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  long local_80;
  undefined **local_78;
  code *pcStack_70;
  long local_68;
  undefined **local_60;
  code *pcStack_58;
  long local_50;
  undefined **local_40;
  code *pcStack_38;
  undefined ***local_30;
  undefined *puStack_28;
  
  std::env::var::inner(&local_80,"TOKIO_WORKER_THREADS",0x14);
  if (local_80 == 1) {
    if (local_78 == (undefined **)0xffffffffffffffff) {
      auVar8 = std::thread::functions::available_parallelism();
      uVar4 = auVar8._8_8_;
      if (auVar8._0_8_ == 1) {
        if ((1 < (uVar4 & 3) - 2) && ((auVar8 & (undefined1  [16])0x3) != (undefined1  [16])0x0)) {
          pcStack_38 = (code *)(uVar4 - 1);
          local_40 = (undefined **)CONCAT71(local_40._1_7_,3);
          <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&pcStack_38);
        }
        uVar4 = 1;
      }
      return uVar4;
    }
    local_50 = local_68;
    pcStack_58 = pcStack_70;
    local_60 = local_78;
    local_40 = &PTR_s_TOKIO_WORKER_THREADS_00af4d58;
    pcStack_38 = FUN_0099f78c;
    local_30 = &local_60;
    puStack_28 = PTR_fmt_00b01160;
                    /* try { // try from 009aba80 to 009aba97 has its CatchHandler @ 009abadc */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              (&DAT_002bbdce,&local_40,&PTR_s__root__cargo_registry_src_index__00af4e58);
  }
  pcStack_38 = pcStack_70;
  local_40 = local_78;
  local_30 = (undefined ***)local_68;
  if (local_68 == 1) {
    cVar1 = *pcStack_70;
    uVar6 = 1;
    if ((cVar1 == (code)0x2b) || (cVar1 == (code)0x2d)) goto LAB_009aba40;
  }
  else {
    if (local_68 == 0) {
      uVar6 = 0;
      goto LAB_009aba40;
    }
    cVar1 = *pcStack_70;
  }
  uVar4 = local_68 - (ulong)(cVar1 == (code)0x2b);
  pcVar3 = pcStack_70;
  if (cVar1 == (code)0x2b) {
    pcVar3 = pcStack_70 + 1;
  }
  if (uVar4 < 0x11) {
    if (uVar4 != 0) {
      uVar5 = 0;
      do {
        if (9 < (byte)*pcVar3 - 0x30) goto LAB_009aba9c;
        uVar4 = uVar4 - 1;
        uVar5 = uVar5 * 10 + (ulong)((byte)*pcVar3 - 0x30);
        pcVar3 = pcVar3 + 1;
      } while (uVar4 != 0);
LAB_009ab9ac:
      if (uVar5 != 0) {
        if (local_78 == (undefined **)0x0) {
          return uVar5;
        }
        free(pcStack_70);
        return uVar5;
      }
    }
    local_60 = &PTR_s_TOKIO_WORKER_THREADS_00af4d58;
    pcStack_58 = FUN_0099f78c;
                    /* try { // try from 009abab8 to 009abacf has its CatchHandler @ 009abb00 */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              (&DAT_002af472,&local_60,&PTR_s__root__cargo_registry_src_index__00af4e40);
  }
  uVar5 = 0;
  do {
    if (uVar4 == 0) goto LAB_009ab9ac;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar5;
    if (SUB168(auVar8 * ZEXT816(10),8) != 0) {
      uVar6 = 1;
      if ((byte)*pcVar3 - 0x30 < 10) {
        uVar6 = 2;
      }
      goto LAB_009aba40;
    }
    uVar2 = (byte)*pcVar3 - 0x30;
    if (9 < uVar2) goto LAB_009aba9c;
    uVar4 = uVar4 - 1;
    uVar7 = uVar5 * 10;
    uVar5 = uVar7 + uVar2;
    pcVar3 = pcVar3 + 1;
  } while (!CARRY8(uVar7,(ulong)uVar2));
  uVar6 = 2;
LAB_009aba40:
                    /* try { // try from 009aba40 to 009aba47 has its CatchHandler @ 009abb00 */
  FUN_009aaed4(&local_40,uVar6);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x9abad4);
  (*pcVar3)();
LAB_009aba9c:
  uVar6 = 1;
  goto LAB_009aba40;
}


// ===== 009abb20  tokio::runtime::io::registration::gone =====

/* WARNING: Unknown calling convention: __rustcall */
/* tokio::runtime::io::registration::gone */

void __rustcall tokio::runtime::io::registration::gone(void)

{
  <alloc::io::error::core::io::error::Error>::new<&str>
            (0x2a,"A Tokio 1.x context was found, but it is being shutdown.no permits available",
             0x38);
  return;
}


// ===== 009abb34  <tokio::sync::batch_semaphore::Acquire_as_core::future::future::Future>::poll =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::sync::batch_semaphore::Acquire as core::future::future::Future>::poll */

undefined4 __rustcall
<tokio::sync::batch_semaphore::Acquire_as_core::future::future::Future>::poll
          (undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  ulong *puVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined1 *extraout_x1;
  char cVar8;
  ulong uVar9;
  undefined8 *puVar10;
  char *pcVar11;
  long *plVar12;
  uint uVar13;
  ulong uVar14;
  char *pcVar15;
  long lVar16;
  ulong uVar17;
  char *pcVar18;
  char cVar19;
  char cVar20;
  undefined1 auVar21 [16];
  undefined8 *local_68;
  
  pcVar15 = (char *)*param_1;
  uVar17 = param_1[6];
  uVar14 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar14 == 0) {
    uVar14 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
             lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar7 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar14);
    if (&DAT_00000001 < puVar7) goto LAB_009abb88;
LAB_009abed4:
    puVar7 = (undefined1 *)FUN_00996984(uVar14 & 0xffffffff,puVar7,0);
    if (puVar7 != (undefined1 *)0x0) goto LAB_009abb8c;
LAB_009abee8:
    cVar20 = '\0';
    cVar19 = '\0';
    bVar2 = *(byte *)(param_1 + 7);
  }
  else {
    puVar7 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar14);
    if (puVar7 <= &DAT_00000001) goto LAB_009abed4;
LAB_009abb88:
    if (puVar7 == (undefined1 *)0x0) goto LAB_009abee8;
LAB_009abb8c:
    cVar20 = puVar7[0x44];
    cVar19 = puVar7[0x45];
    cVar8 = cVar19;
    if (cVar20 == '\x01') {
      if (cVar19 == '\0') {
        FUN_009b13f8(*param_2,&PTR_s__root__cargo_registry_src_index__00af64a0);
        return 2;
      }
      cVar8 = cVar19 + -1;
    }
    puVar7[0x45] = cVar8;
    bVar2 = *(byte *)(param_1 + 7);
  }
  if (bVar2 == 1) {
    uVar17 = param_1[5];
  }
  puVar1 = (ulong *)(pcVar15 + 0x20);
  if ((*puVar1 & 1) == 0) {
    pcVar11 = (char *)0x0;
    uVar14 = *puVar1;
    do {
      if (uVar14 < uVar17 * 2) {
        if (pcVar11 == (char *)0x0) {
          pcVar11 = pcVar15;
          if (*pcVar15 == '\0') {
            cVar8 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pcVar15,0x10);
            if (bVar4) {
              *pcVar15 = '\x01';
              cVar8 = ExclusiveMonitorsStatus();
            }
            if (cVar8 == '\0') goto LAB_009abc00;
          }
          else {
            ClearExclusiveLocal();
          }
                    /* try { // try from 009abc4c to 009abc57 has its CatchHandler @ 009abff0 */
          <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
                    (pcVar15,puVar7,0xffffffff);
          puVar7 = extraout_x1;
        }
LAB_009abc00:
        while (uVar9 = *puVar1, uVar9 == uVar14) {
          cVar8 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = 0;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') {
            uVar14 = uVar14 >> 1;
            goto LAB_009abc74;
          }
        }
      }
      else {
        while (uVar9 = *puVar1, uVar9 == uVar14) {
          cVar8 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar14 + uVar17 * -2;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') {
            if (bVar2 == 0) {
              uVar13 = 0;
              goto joined_r0x009abd44;
            }
            uVar14 = uVar17 & 0x7fffffffffffffff;
            if (pcVar11 != (char *)0x0) goto LAB_009abc74;
            pcVar18 = pcVar15;
            if (*pcVar15 == '\0') {
              bVar4 = true;
              cVar8 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(pcVar15,0x10);
              if (bVar3) {
                *pcVar15 = '\x01';
                cVar8 = ExclusiveMonitorsStatus();
              }
              if (cVar8 == '\0') {
                pcVar11 = (char *)0x0;
                goto LAB_009abc7c;
              }
            }
            else {
              ClearExclusiveLocal();
            }
                    /* try { // try from 009abf9c to 009abfcb has its CatchHandler @ 009abfec */
            <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
                      (pcVar15,puVar7,0xffffffff);
            pcVar11 = (char *)0x0;
            bVar4 = true;
            goto LAB_009abc7c;
          }
        }
      }
      ClearExclusiveLocal();
      uVar14 = uVar9;
    } while ((uVar9 & 1) == 0);
    uVar13 = 1;
    goto joined_r0x009abd44;
  }
  goto LAB_009abd84;
LAB_009abfbc:
  ClearExclusiveLocal();
  <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(pcVar11,0);
  if (uVar13 == 2) goto LAB_009abe50;
  goto LAB_009abd80;
  while( true ) {
    cVar8 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar18,0x10);
    if (bVar3) {
      *pcVar18 = '\0';
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 == '\0') break;
LAB_009abe04:
    if (*pcVar18 != '\x01') {
      ClearExclusiveLocal();
                    /* try { // try from 009abf84 to 009abf93 has its CatchHandler @ 009ac010 */
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(pcVar18,0);
      break;
    }
  }
  if (lVar16 != 0) {
                    /* try { // try from 009abe20 to 009abe27 has its CatchHandler @ 009abff8 */
    (**(code **)(lVar16 + 0x18))(pcVar15);
  }
  bVar3 = false;
  if (pcVar11 != (char *)0x0) {
    bVar3 = bVar4;
  }
  if (bVar3) {
    do {
      if (*pcVar11 != '\x01') {
        uVar13 = 2;
        goto LAB_009abfbc;
      }
      cVar8 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pcVar11,0x10);
      if (bVar4) {
        *pcVar11 = '\0';
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
LAB_009abe50:
  *(undefined1 *)(param_1 + 7) = 1;
  if (cVar20 == '\0') {
    return 2;
  }
  uVar14 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar14 == 0) {
    uVar14 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
             lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar7 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar14);
    if (&DAT_00000001 < puVar7) goto joined_r0x009abe80;
  }
  else {
    puVar7 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar14);
    if (&DAT_00000001 < puVar7) goto joined_r0x009abe80;
  }
  puVar7 = (undefined1 *)FUN_00996984(uVar14 & 0xffffffff,puVar7,0);
joined_r0x009abe80:
  if (puVar7 != (undefined1 *)0x0) {
    puVar7[0x45] = cVar19;
    puVar7[0x44] = 1;
  }
  return 2;
LAB_009abc74:
  bVar4 = false;
  pcVar18 = pcVar11;
LAB_009abc7c:
  if (pcVar18[0x18] != '\x01') {
    puVar1 = param_1 + 5;
    uVar17 = *puVar1;
    do {
      uVar9 = uVar14;
      if (uVar17 <= uVar14) {
        uVar9 = uVar17;
      }
      while (*puVar1 == uVar17) {
        cVar8 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar17 - uVar9;
          cVar8 = ExclusiveMonitorsStatus();
        }
        if (cVar8 == '\0') {
          if (uVar17 <= uVar14) {
                    /* try { // try from 009abd50 to 009abd5b has its CatchHandler @ 009ac004 */
            FUN_009aafdc(pcVar15,uVar14 - uVar9,pcVar18);
            if (!bVar4) goto LAB_009abd8c;
            uVar13 = 0;
            goto joined_r0x009abd44;
          }
          plVar12 = (long *)*param_2;
          if ((undefined8 *)param_1[1] == (undefined8 *)0x0) {
            puVar10 = (undefined8 *)*plVar12;
            lVar16 = plVar12[1];
LAB_009abdbc:
                    /* try { // try from 009abdc0 to 009abdc3 has its CatchHandler @ 009abffc */
            auVar21 = (*(code *)*puVar10)(lVar16);
            lVar16 = param_1[1];
            pcVar15 = (char *)param_1[2];
            *(undefined1 (*) [16])(param_1 + 1) = auVar21;
          }
          else {
            puVar10 = (undefined8 *)*plVar12;
            lVar16 = plVar12[1];
            if ((param_1[2] != lVar16) || ((undefined8 *)param_1[1] != puVar10)) goto LAB_009abdbc;
            lVar16 = 0;
          }
          if ((bVar2 & 1) == 0) {
            local_68 = param_1 + 1;
            puVar10 = *(undefined8 **)(pcVar18 + 8);
            if (puVar10 == local_68) {
                    /* try { // try from 009abf44 to 009abf5b has its CatchHandler @ 009ac010 */
              core[bcece726f298455b]::panicking::assert_failed::
              <core[bcece726f298455b]::option::Option<core[bcece726f298455b]::ptr::non_null::NonNull<tokio[8c8895dbfa691109]::sync::batch_semaphore::Waiter>>,core[bcece726f298455b]::option::Option<core[bcece726f298455b]::ptr::non_null::NonNull<tokio[8c8895dbfa691109]::sync::batch_semaphore::Waiter>>>
                        (1,pcVar18 + 8,&local_68,0,param_5,
                         &PTR_s__root__cargo_registry_src_index__00af47e0);
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x9abf60);
              (*pcVar5)();
            }
            param_1[3] = 0;
            param_1[4] = puVar10;
            if (puVar10 != (undefined8 *)0x0) {
              puVar10[2] = local_68;
            }
            *(undefined8 **)(pcVar18 + 8) = local_68;
            if (*(long *)(pcVar18 + 0x10) == 0) {
              *(undefined8 **)(pcVar18 + 0x10) = local_68;
            }
          }
          goto LAB_009abe04;
        }
      }
      ClearExclusiveLocal();
      uVar17 = *puVar1;
    } while( true );
  }
  do {
    if (*pcVar18 != '\x01') {
      ClearExclusiveLocal();
                    /* try { // try from 009abf64 to 009abf6f has its CatchHandler @ 009abfe8 */
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(pcVar18,0);
      break;
    }
    cVar8 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar18,0x10);
    if (bVar3) {
      *pcVar18 = '\0';
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  uVar13 = 1;
  if (!bVar4) {
    return 1;
  }
joined_r0x009abd44:
  if (pcVar11 != (char *)0x0) {
    do {
      if (*pcVar11 != '\x01') goto LAB_009abfbc;
      cVar8 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pcVar11,0x10);
      if (bVar4) {
        *pcVar11 = '\0';
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
LAB_009abd80:
  if ((uVar13 & 1) == 0) {
LAB_009abd8c:
    uVar6 = 0;
    *(undefined1 *)(param_1 + 7) = 0;
  }
  else {
LAB_009abd84:
    uVar6 = 1;
  }
  return uVar6;
}


// ===== 009ac098  <tokio::runtime::io::registration::Registration_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::io::registration::Registration as core::ops::drop::Drop>::drop */

void __rustcall
<tokio::runtime::io::registration::Registration_as_core::ops::drop::Drop>::drop
          (long param_1,undefined8 param_2)

{
  char *pcVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x10);
  pcVar1 = (char *)(lVar6 + 0x98);
  if (*pcVar1 == '\0') {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar5) {
      *pcVar1 = '\x01';
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') {
      lVar2 = *(long *)(lVar6 + 0xb0);
      uVar3 = *(undefined8 *)(lVar6 + 0xb8);
      *(undefined8 *)(lVar6 + 0xb0) = 0;
      goto joined_r0x009ac120;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
            (lVar6 + 0x98,param_2,0xffffffff);
  lVar2 = *(long *)(lVar6 + 0xb0);
  uVar3 = *(undefined8 *)(lVar6 + 0xb8);
  *(undefined8 *)(lVar6 + 0xb0) = 0;
joined_r0x009ac120:
  if (lVar2 != 0) {
                    /* try { // try from 009ac0d0 to 009ac0e7 has its CatchHandler @ 009ac140 */
    (**(code **)(lVar2 + 0x18))(uVar3);
  }
  lVar2 = *(long *)(lVar6 + 0xc0);
  *(undefined8 *)(lVar6 + 0xc0) = 0;
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar6 + 200));
  }
  do {
    if (*pcVar1 != '\x01') {
      ClearExclusiveLocal();
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(pcVar1,0);
      return;
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar5) {
      *pcVar1 = '\0';
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  return;
}


// ===== 009ac178  FUN_009ac178 =====

void FUN_009ac178(undefined8 *param_1)

{
  <mio::net::tcp::stream::TcpStream_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 009ac180  FUN_009ac180 =====

void FUN_009ac180(undefined8 *param_1)

{
  <mio::net::uds::datagram::UnixDatagram_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 009ac188  FUN_009ac188 =====

void FUN_009ac188(ulong *param_1,uint *param_2,ulong param_3)

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
    if (uVar4 != 0) goto LAB_009ac2c0;
LAB_009ac1e4:
    if (param_3 < 4) goto LAB_009ac318;
LAB_009ac1ec:
    uVar4 = (ulong)*(uint *)((long)param_2 + uVar3);
    uVar7 = 4;
    if (param_3 < 6) goto LAB_009ac344;
  }
  else {
    uVar3 = 8 - uVar4;
    uVar7 = uVar3;
    if (param_3 <= uVar3) {
      uVar7 = param_3;
    }
    if (uVar3 < 4) {
      uVar9 = 0;
      uVar6 = 0;
      if (1 < uVar7) goto LAB_009ac218;
    }
    else {
      uVar6 = (ulong)*param_2;
      uVar9 = 4;
      if (5 < uVar7) {
LAB_009ac218:
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
    if (uVar4 <= uVar3) goto LAB_009ac1e4;
LAB_009ac2c0:
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
    if (3 < param_3) goto LAB_009ac1ec;
LAB_009ac318:
    uVar7 = 0;
    uVar4 = 0;
    if (param_3 < 2) goto LAB_009ac344;
  }
  lVar10 = uVar7 << 3;
  lVar11 = uVar7 + uVar3;
  uVar7 = uVar7 | 2;
  uVar4 = (ulong)*(ushort *)((long)param_2 + lVar11) << lVar10 | uVar4;
LAB_009ac344:
  if (uVar7 < param_3) {
    param_1[7] = (ulong)*(byte *)((long)param_2 + uVar7 + uVar3) << (uVar7 << 3) | uVar4;
    param_1[8] = param_3;
    return;
  }
  param_1[7] = uVar4;
  param_1[8] = param_3;
  return;
}


// ===== 009ac370  <tokio::sync::batch_semaphore::Acquire_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::sync::batch_semaphore::Acquire as core::ops::drop::Drop>::drop */

void __rustcall
<tokio::sync::batch_semaphore::Acquire_as_core::ops::drop::Drop>::drop
          (undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  
  if (*(char *)(param_1 + 7) != '\x01') {
    return;
  }
  pcVar3 = (char *)*param_1;
  if (*pcVar3 == '\0') {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
    if (bVar2) {
      *pcVar3 = '\x01';
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 != '\0') goto LAB_009ac3d0;
    lVar5 = param_1[3];
    if (lVar5 == 0) goto LAB_009ac3f4;
LAB_009ac3b0:
    lVar4 = param_1[4];
    *(long *)(lVar5 + 0x18) = lVar4;
    if (lVar4 == 0) goto LAB_009ac40c;
LAB_009ac3bc:
    *(undefined8 *)(lVar4 + 0x10) = param_1[3];
  }
  else {
    ClearExclusiveLocal();
LAB_009ac3d0:
    <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
              (pcVar3,param_2,0xffffffff);
    lVar5 = param_1[3];
    if (lVar5 != 0) goto LAB_009ac3b0;
LAB_009ac3f4:
    if (*(undefined8 **)(pcVar3 + 8) != param_1 + 1) goto LAB_009ac418;
    lVar4 = param_1[4];
    *(long *)(pcVar3 + 8) = lVar4;
    if (lVar4 != 0) goto LAB_009ac3bc;
LAB_009ac40c:
    if (*(undefined8 **)(pcVar3 + 0x10) != param_1 + 1) goto LAB_009ac418;
    *(undefined8 *)(pcVar3 + 0x10) = param_1[3];
  }
  param_1[3] = 0;
  param_1[4] = 0;
LAB_009ac418:
  if (param_1[6] - param_1[5] != 0) {
    FUN_009aafdc(*param_1,param_1[6] - param_1[5]);
    return;
  }
  do {
    if (*pcVar3 != '\x01') {
      ClearExclusiveLocal();
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(pcVar3,0);
      return;
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
    if (bVar2) {
      *pcVar3 = '\0';
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return;
}


// ===== 009ac480  FUN_009ac480 =====

void FUN_009ac480(long *param_1,long *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  void *pvVar2;
  undefined1 *puVar3;
  char cVar4;
  char cVar5;
  ulong uVar6;
  char cVar7;
  long local_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long local_50;
  char local_44;
  char local_43;
  
  puVar1 = PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  local_70 = 2;
  uVar6 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar6 == 0) {
                    /* try { // try from 009ac5bc to 009ac5eb has its CatchHandler @ 009ac628 */
    uVar6 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    pvVar2 = pthread_getspecific((pthread_key_t)uVar6);
  }
  else {
    pvVar2 = pthread_getspecific((pthread_key_t)uVar6);
  }
  if (pvVar2 < (void *)0x2) {
    pvVar2 = (void *)FUN_00996984(uVar6 & 0xffffffff,pvVar2,0);
  }
  if (pvVar2 == (void *)0x0) {
    cVar7 = '\0';
    cVar5 = '\0';
  }
  else {
    cVar7 = *(char *)((long)pvVar2 + 0x44);
    cVar5 = *(char *)((long)pvVar2 + 0x45);
    cVar4 = cVar5;
    if (cVar7 == '\x01') {
      if (cVar5 == '\0') {
                    /* try { // try from 009ac588 to 009ac593 has its CatchHandler @ 009ac628 */
        FUN_009b13f8(*param_3,&PTR_s__root__cargo_registry_src_index__00af64a0);
        *param_1 = 2;
        FUN_009aa6dc(&local_70);
        return;
      }
      cVar4 = cVar5 + -1;
    }
    *(char *)((long)pvVar2 + 0x45) = cVar4;
  }
  local_44 = cVar7;
  local_43 = cVar5;
                    /* try { // try from 009ac518 to 009ac51f has its CatchHandler @ 009ac630 */
  (**(code **)(*(long *)(*param_2 + 0x10) + 0x18))(*param_2,&local_70,*param_3);
  param_1[1] = lStack_68;
  *param_1 = local_70;
  param_1[3] = lStack_58;
  param_1[2] = lStack_60;
  param_1[4] = local_50;
  if (local_70 != 2) {
    return;
  }
  if (cVar7 == '\0') {
    return;
  }
  uVar6 = *(ulong *)puVar1;
  if (uVar6 == 0) {
    uVar6 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar3 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar6);
    if (&DAT_00000001 < puVar3) goto joined_r0x009ac620;
  }
  else {
    puVar3 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar6);
    if (&DAT_00000001 < puVar3) goto joined_r0x009ac620;
  }
  puVar3 = (undefined1 *)FUN_00996984(uVar6 & 0xffffffff,puVar3,0);
joined_r0x009ac620:
  if (puVar3 != (undefined1 *)0x0) {
    puVar3[0x45] = cVar5;
    puVar3[0x44] = 1;
  }
  return;
}


// ===== 009ac650  FUN_009ac650 =====

void FUN_009ac650(long *param_1,long *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  void *pvVar2;
  undefined1 *puVar3;
  char cVar4;
  char cVar5;
  ulong uVar6;
  char cVar7;
  long local_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long local_60;
  long lStack_58;
  long local_50;
  char local_44;
  char local_43;
  
  puVar1 = PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  local_80 = -1;
  uVar6 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar6 == 0) {
                    /* try { // try from 009ac794 to 009ac7c3 has its CatchHandler @ 009ac800 */
    uVar6 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    pvVar2 = pthread_getspecific((pthread_key_t)uVar6);
  }
  else {
    pvVar2 = pthread_getspecific((pthread_key_t)uVar6);
  }
  if (pvVar2 < (void *)0x2) {
    pvVar2 = (void *)FUN_00996984(uVar6 & 0xffffffff,pvVar2,0);
  }
  if (pvVar2 == (void *)0x0) {
    cVar7 = '\0';
    cVar5 = '\0';
  }
  else {
    cVar7 = *(char *)((long)pvVar2 + 0x44);
    cVar5 = *(char *)((long)pvVar2 + 0x45);
    cVar4 = cVar5;
    if (cVar7 == '\x01') {
      if (cVar5 == '\0') {
                    /* try { // try from 009ac760 to 009ac76b has its CatchHandler @ 009ac800 */
        FUN_009b13f8(*param_3,&PTR_s__root__cargo_registry_src_index__00af64a0);
        *param_1 = -1;
        FUN_009aa7dc(&local_80);
        return;
      }
      cVar4 = cVar5 + -1;
    }
    *(char *)((long)pvVar2 + 0x45) = cVar4;
  }
  local_44 = cVar7;
  local_43 = cVar5;
                    /* try { // try from 009ac6e8 to 009ac6ef has its CatchHandler @ 009ac808 */
  (**(code **)(*(long *)(*param_2 + 0x10) + 0x18))(*param_2,&local_80,*param_3);
  param_1[1] = lStack_78;
  *param_1 = local_80;
  param_1[3] = lStack_68;
  param_1[2] = lStack_70;
  param_1[5] = lStack_58;
  param_1[4] = local_60;
  param_1[6] = local_50;
  if (local_80 != -1) {
    return;
  }
  if (cVar7 == '\0') {
    return;
  }
  uVar6 = *(ulong *)puVar1;
  if (uVar6 == 0) {
    uVar6 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar3 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar6);
    if (&DAT_00000001 < puVar3) goto joined_r0x009ac7f8;
  }
  else {
    puVar3 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar6);
    if (&DAT_00000001 < puVar3) goto joined_r0x009ac7f8;
  }
  puVar3 = (undefined1 *)FUN_00996984(uVar6 & 0xffffffff,puVar3,0);
joined_r0x009ac7f8:
  if (puVar3 != (undefined1 *)0x0) {
    puVar3[0x45] = cVar5;
    puVar3[0x44] = 1;
  }
  return;
}


// ===== 009ac828  FUN_009ac828 =====

void FUN_009ac828(long *param_1,long *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  void *pvVar2;
  undefined1 *puVar3;
  char cVar4;
  char cVar5;
  ulong uVar6;
  char cVar7;
  long local_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long local_60;
  long lStack_58;
  long local_50;
  char local_44;
  char local_43;
  
  puVar1 = PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  local_80 = -2;
  uVar6 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar6 == 0) {
                    /* try { // try from 009ac96c to 009ac99b has its CatchHandler @ 009ac9d8 */
    uVar6 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    pvVar2 = pthread_getspecific((pthread_key_t)uVar6);
  }
  else {
    pvVar2 = pthread_getspecific((pthread_key_t)uVar6);
  }
  if (pvVar2 < (void *)0x2) {
    pvVar2 = (void *)FUN_00996984(uVar6 & 0xffffffff,pvVar2,0);
  }
  if (pvVar2 == (void *)0x0) {
    cVar7 = '\0';
    cVar5 = '\0';
  }
  else {
    cVar7 = *(char *)((long)pvVar2 + 0x44);
    cVar5 = *(char *)((long)pvVar2 + 0x45);
    cVar4 = cVar5;
    if (cVar7 == '\x01') {
      if (cVar5 == '\0') {
                    /* try { // try from 009ac938 to 009ac943 has its CatchHandler @ 009ac9d8 */
        FUN_009b13f8(*param_3,&PTR_s__root__cargo_registry_src_index__00af64a0);
        *param_1 = -2;
        FUN_009aa8dc(&local_80);
        return;
      }
      cVar4 = cVar5 + -1;
    }
    *(char *)((long)pvVar2 + 0x45) = cVar4;
  }
  local_44 = cVar7;
  local_43 = cVar5;
                    /* try { // try from 009ac8c0 to 009ac8c7 has its CatchHandler @ 009ac9e0 */
  (**(code **)(*(long *)(*param_2 + 0x10) + 0x18))(*param_2,&local_80,*param_3);
  param_1[1] = lStack_78;
  *param_1 = local_80;
  param_1[3] = lStack_68;
  param_1[2] = lStack_70;
  param_1[5] = lStack_58;
  param_1[4] = local_60;
  param_1[6] = local_50;
  if (local_80 != -2) {
    return;
  }
  if (cVar7 == '\0') {
    return;
  }
  uVar6 = *(ulong *)puVar1;
  if (uVar6 == 0) {
    uVar6 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar3 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar6);
    if (&DAT_00000001 < puVar3) goto joined_r0x009ac9d0;
  }
  else {
    puVar3 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar6);
    if (&DAT_00000001 < puVar3) goto joined_r0x009ac9d0;
  }
  puVar3 = (undefined1 *)FUN_00996984(uVar6 & 0xffffffff,puVar3,0);
joined_r0x009ac9d0:
  if (puVar3 != (undefined1 *)0x0) {
    puVar3[0x45] = cVar5;
    puVar3[0x44] = 1;
  }
  return;
}


// ===== 009aca00  FUN_009aca00 =====

void FUN_009aca00(long *param_1,long *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  void *pvVar2;
  undefined1 *puVar3;
  char cVar4;
  char cVar5;
  ulong uVar6;
  char cVar7;
  long local_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long local_60;
  long lStack_58;
  long local_50;
  char local_44;
  char local_43;
  
  puVar1 = PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  local_80 = -2;
  uVar6 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar6 == 0) {
                    /* try { // try from 009acb44 to 009acb73 has its CatchHandler @ 009acbb0 */
    uVar6 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    pvVar2 = pthread_getspecific((pthread_key_t)uVar6);
  }
  else {
    pvVar2 = pthread_getspecific((pthread_key_t)uVar6);
  }
  if (pvVar2 < (void *)0x2) {
    pvVar2 = (void *)FUN_00996984(uVar6 & 0xffffffff,pvVar2,0);
  }
  if (pvVar2 == (void *)0x0) {
    cVar7 = '\0';
    cVar5 = '\0';
  }
  else {
    cVar7 = *(char *)((long)pvVar2 + 0x44);
    cVar5 = *(char *)((long)pvVar2 + 0x45);
    cVar4 = cVar5;
    if (cVar7 == '\x01') {
      if (cVar5 == '\0') {
                    /* try { // try from 009acb10 to 009acb1b has its CatchHandler @ 009acbb0 */
        FUN_009b13f8(*param_3,&PTR_s__root__cargo_registry_src_index__00af64a0);
        *param_1 = -2;
        FUN_009aaa74(&local_80);
        return;
      }
      cVar4 = cVar5 + -1;
    }
    *(char *)((long)pvVar2 + 0x45) = cVar4;
  }
  local_44 = cVar7;
  local_43 = cVar5;
                    /* try { // try from 009aca98 to 009aca9f has its CatchHandler @ 009acbb8 */
  (**(code **)(*(long *)(*param_2 + 0x10) + 0x18))(*param_2,&local_80,*param_3);
  param_1[1] = lStack_78;
  *param_1 = local_80;
  param_1[3] = lStack_68;
  param_1[2] = lStack_70;
  param_1[5] = lStack_58;
  param_1[4] = local_60;
  param_1[6] = local_50;
  if (local_80 != -2) {
    return;
  }
  if (cVar7 == '\0') {
    return;
  }
  uVar6 = *(ulong *)puVar1;
  if (uVar6 == 0) {
    uVar6 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar3 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar6);
    if (&DAT_00000001 < puVar3) goto joined_r0x009acba8;
  }
  else {
    puVar3 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar6);
    if (&DAT_00000001 < puVar3) goto joined_r0x009acba8;
  }
  puVar3 = (undefined1 *)FUN_00996984(uVar6 & 0xffffffff,puVar3,0);
joined_r0x009acba8:
  if (puVar3 != (undefined1 *)0x0) {
    puVar3[0x45] = cVar5;
    puVar3[0x44] = 1;
  }
  return;
}


// ===== 009acbd8  <tokio::sync::batch_semaphore::AcquireError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::sync::batch_semaphore::AcquireError as core::fmt::Display>::fmt */

void __rustcall
<tokio::sync::batch_semaphore::AcquireError_as_core::fmt::Display>::fmt
          (undefined8 param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x009acbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,"semaphore closed",0x10);
  return;
}


// ===== 009acbf4  <tokio::sync::batch_semaphore::TryAcquireError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::sync::batch_semaphore::TryAcquireError as core::fmt::Display>::fmt */

void __rustcall
<tokio::sync::batch_semaphore::TryAcquireError_as_core::fmt::Display>::fmt
          (byte *param_1,undefined8 *param_2)

{
  if ((*param_1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x009acc10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2[1] + 0x18))(*param_2,"no permits available",0x14);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x009acc20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,"semaphore closed",0x10);
  return;
}


// ===== 009acc24  FUN_009acc24 =====

void FUN_009acc24(undefined8 param_1,long param_2)

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


// ===== 009acc3c  <tokio::sync::batch_semaphore::Semaphore_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::sync::batch_semaphore::Semaphore as core::fmt::Debug>::fmt */

void __rustcall
<tokio::sync::batch_semaphore::Semaphore_as_core::fmt::Debug>::fmt(long param_1,undefined8 param_2)

{
  undefined1 auStack_30 [16];
  ulong local_8;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,"Semaphore",9);
  local_8 = *(ulong *)(param_1 + 0x20) >> 1;
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (auStack_30,"permits",7,&local_8,&DAT_00af4e70);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 009accb0  FUN_009accb0 =====

void FUN_009accb0(long param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt
            (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_2);
  return;
}


// ===== 009accc4  FUN_009accc4 =====

void FUN_009accc4(undefined8 *param_1,undefined8 param_2,uint *param_3,undefined8 param_4)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar5 = *param_1;
  *param_1 = param_2;
  if ((*param_3 & 1) == 0) {
                    /* try { // try from 009acd6c to 009acd83 has its CatchHandler @ 009acdbc */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_0037c68c,0x3f,&PTR_s__root__cargo_registry_src_index__00af4fc8);
  }
                    /* try { // try from 009accec to 009accfb has its CatchHandler @ 009acdd8 */
  lVar3 = FUN_00992bcc(param_3 + 2,param_4);
  if (lVar3 != 0) {
                    /* try { // try from 009acd88 to 009acda3 has its CatchHandler @ 009acdd8 */
    FUN_009ad494();
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(&DAT_0037c45f,0x27,&PTR_s__root__cargo_registry_src_index__00af4fe0);
  }
  if (*(long *)(param_3 + 8) == 0) {
    do {
      param_3[8] = 0xffffffff;
      param_3[9] = 0xffffffff;
      if (*(long *)(param_3 + 0xe) == 0) {
        param_3[8] = 0;
        param_3[9] = 0;
        *param_1 = uVar5;
        return;
      }
      lVar3 = *(long *)(param_3 + 0xe) + -1;
      *(long *)(param_3 + 0xe) = lVar3;
      plVar1 = (long *)(*(long *)(param_3 + 0xc) + lVar3 * 0x10);
                    /* try { // try from 009acd30 to 009acd33 has its CatchHandler @ 009acda8 */
      (**(code **)(*plVar1 + 8))(plVar1[1]);
      uVar4 = *(ulong *)(param_3 + 8);
      *(ulong *)(param_3 + 8) = uVar4 + 1;
    } while (0xfffffffffffffffe < uVar4);
  }
                    /* try { // try from 009acd44 to 009acd4f has its CatchHandler @ 009acdd8 */
  core::cell::panic_already_borrowed(&PTR_s__root__cargo_registry_src_index__00af37c8);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x9acda8);
  (*pcVar2)();
}


// ===== 009acde0  <tokio[8c8895dbfa691109]::runtime::scheduler::multi_thread::queue::Local<alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::runtime::scheduler::multi_thread::handle::Handle>>>::push_overflow::<tokio[8c8895dbfa691109]::runtime::scheduler::multi_thread::handle::Handle> =====

/* <tokio[8c8895dbfa691109]::runtime::scheduler::multi_thread::queue::Local<alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::runtime::scheduler::multi_thread::handle::Handle>>>::push_overflow::<tokio[8c8895dbfa691109]::runtime::scheduler::multi_thread::handle::Handle>
    */

undefined8
<tokio[8c8895dbfa691109]::runtime::scheduler::multi_thread::queue::Local<alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::runtime::scheduler::multi_thread::handle::Handle>>>
::push_overflow::<tokio[8c8895dbfa691109]::runtime::scheduler::multi_thread::handle::Handle>
          (long *param_1,undefined8 param_2,uint param_3,int param_4,undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  uint local_50;
  int iStack_4c;
  int *local_48;
  undefined *local_40;
  uint *local_38;
  undefined *local_30;
  undefined8 uStack_28;
  ulong local_8;
  
  local_8 = (ulong)(param_4 - param_3);
  local_50 = param_3;
  iStack_4c = param_4;
  if (param_4 - param_3 != 0x100) {
    local_48 = &iStack_4c;
    local_40 = PTR_fmt_00b00c40;
    local_38 = &local_50;
    local_30 = PTR_fmt_00b00c40;
                    /* try { // try from 009ace84 to 009aceab has its CatchHandler @ 009acec8 */
                    /* WARNING: Subroutine does not return */
    core::panicking::assert_failed<usize,usize>
              (0,&local_8,"",&DAT_002bbdf4,&local_48,
               &PTR_s__root__cargo_registry_src_index__00af4e90);
  }
  local_30 = (undefined *)(ulong)param_3;
  lVar4 = *param_1;
  plVar1 = (long *)(lVar4 + 0x18);
  do {
    if (*plVar1 != CONCAT44(param_3,param_3)) {
      ClearExclusiveLocal();
      return param_2;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = CONCAT44(param_3 + 0x80,param_3 + 0x80);
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  local_38 = *(uint **)(lVar4 + 0x10);
  uStack_28 = 0;
  local_48 = (int *)0x1;
  local_40 = (undefined *)param_2;
  FUN_00991718(param_5,&local_48);
  return 0;
}


// ===== 009acee0  FUN_009acee0 =====

void FUN_009acee0(long *param_1,ulong *param_2,ulong param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  
  if (param_3 < 0x101) {
    if (param_3 == 0) {
      return;
    }
    lVar11 = *param_1;
    uVar12 = *(uint *)(lVar11 + 0x20);
    if (uVar12 - (int)((ulong)*(undefined8 *)(lVar11 + 0x18) >> 0x20) <= 0x100U - (int)param_3) {
      if (param_3 != 0) {
        lVar8 = 1 - param_3;
        do {
          uVar9 = *param_2;
          if (uVar9 == 0) {
            if (lVar8 != 0) {
              lVar8 = -lVar8;
              goto LAB_009acf98;
            }
            break;
          }
          uVar10 = *(ulong *)(uVar9 + 8);
          *param_2 = uVar10;
          if (uVar10 == 0) {
            param_2[1] = 0;
          }
          *(undefined8 *)(uVar9 + 8) = 0;
          lVar8 = lVar8 + 1;
          uVar1 = uVar12 & 0xff;
          uVar12 = uVar12 + 1;
          *(ulong *)(*(long *)(lVar11 + 0x10) + (ulong)uVar1 * 8) = uVar9;
        } while (lVar8 != 1);
      }
      goto LAB_009acff0;
    }
    ppuVar7 = &PTR_s__root__cargo_registry_src_index__00af4ec0;
    puVar5 = &DAT_0037c445;
    uVar6 = 0xe;
  }
  else {
    ppuVar7 = &PTR_s__root__cargo_registry_src_index__00af4ea8;
    puVar5 = &DAT_0037c418;
    uVar6 = 0x2d;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 009ad038 to 009ad03b has its CatchHandler @ 009ad040 */
  core::panicking::panic(puVar5,uVar6,ppuVar7);
  while( true ) {
    uVar9 = puVar4[1];
    *param_2 = uVar9;
    if (uVar9 == 0) {
      param_2[1] = 0;
    }
    lVar8 = lVar8 + -1;
    puVar4[1] = 0;
    do {
      uVar9 = *puVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
      if (bVar3) {
        *puVar4 = uVar9 - 0x40;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar9 = uVar9 >> 6;
    if (uVar9 == 1) {
      (**(code **)(puVar4[2] + 0x10))();
    }
    else if (uVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: prev.ref_count() >= 1",0x27,
                 &PTR_s__root__cargo_registry_src_index__00af3f10);
    }
    if (lVar8 == 0) break;
LAB_009acf98:
    puVar4 = (ulong *)*param_2;
    if (puVar4 == (ulong *)0x0) break;
  }
LAB_009acff0:
  *(uint *)(lVar11 + 0x20) = uVar12;
  return;
}


// ===== 009ad058  FUN_009ad058 =====

void FUN_009ad058(void *param_1)

{
  if (param_1 != (void *)0x0) {
                    /* try { // try from 009ad068 to 009ad06f has its CatchHandler @ 009ad094 */
    FUN_009ae1a0();
    free(param_1);
    return;
  }
  return;
}


// ===== 009ad0b0  FUN_009ad0b0 =====

void FUN_009ad0b0(void *param_1)

{
                    /* try { // try from 009ad0c0 to 009ad0c3 has its CatchHandler @ 009ad0dc */
  FUN_009ae1a0();
  free(param_1);
  return;
}


// ===== 009ad0f8  FUN_009ad0f8 =====

void FUN_009ad0f8(long *param_1)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  ulong uVar4;
  
  puVar3 = (ulong *)*param_1;
  if (puVar3 != (ulong *)0x0) {
    do {
      uVar4 = *puVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar2) {
        *puVar3 = uVar4 - 0x40;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    uVar4 = uVar4 >> 6;
    if (uVar4 == 1) {
                    /* WARNING: Could not recover jumptable at 0x009ad13c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(puVar3[2] + 0x10))();
      return;
    }
    if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: prev.ref_count() >= 1",0x27,
                 &PTR_s__root__cargo_registry_src_index__00af3f10);
    }
  }
  return;
}


// ===== 009ad158  FUN_009ad158 =====

void FUN_009ad158(long *param_1)

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


// ===== 009ad1b4  FUN_009ad1b4 =====

void FUN_009ad1b4(long param_1)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  
  if ((*(int *)(param_1 + 0x30) != -1) && (lVar1 = *(long *)(param_1 + 0x18), lVar1 != 0)) {
    __ptr = *(void **)(param_1 + 0x10);
    lVar2 = 8;
    do {
      free(*(void **)((long)__ptr + lVar2));
      lVar1 = lVar1 + -1;
      lVar2 = lVar2 + 0x28;
    } while (lVar1 != 0);
    free(__ptr);
    return;
  }
  return;
}


// ===== 009ad230  FUN_009ad230 =====

void FUN_009ad230(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar8 = (long *)(param_1 + 0x10);
  lVar4 = *plVar8;
  if (lVar4 != 0) {
    puVar1 = (ulong *)(lVar4 + 0x30);
    uVar7 = *(ulong *)(lVar4 + 0x30);
    do {
      while( true ) {
        uVar6 = uVar7;
        if (((uint)uVar6 >> 2 & 1) != 0) goto LAB_009ad28c;
        uVar7 = *puVar1;
        if (uVar7 == uVar6) break;
        ClearExclusiveLocal();
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 | 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 1) != 0) {
                    /* try { // try from 009ad288 to 009ad28b has its CatchHandler @ 009ad2c8 */
      (**(code **)(*(long *)(lVar4 + 0x20) + 0x10))(*(undefined8 *)(lVar4 + 0x28));
    }
LAB_009ad28c:
    plVar5 = (long *)*plVar8;
    if (plVar5 != (long *)0x0) {
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
        <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<()>>>::drop_slow(plVar8);
        return;
      }
    }
  }
  return;
}


// ===== 009ad300  FUN_009ad300 =====

void FUN_009ad300(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 0x80) != 0) {
    free(*(void **)(param_1 + 0x78));
  }
                    /* try { // try from 009ad32c to 009ad333 has its CatchHandler @ 009ad408 */
  FUN_009ad864(param_1 + 0x10);
                    /* try { // try from 009ad334 to 009ad33b has its CatchHandler @ 009ad400 */
  FUN_009adaac(param_1 + 0xe0);
  plVar3 = *(long **)(param_1 + 0x168);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 009ad358 to 009ad35f has its CatchHandler @ 009ad3f8 */
    <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::blocking::pool::Inner>>::drop_slow
              (param_1 + 0x168);
  }
  plVar3 = *(long **)(param_1 + 0x180);
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
                    /* try { // try from 009ad380 to 009ad387 has its CatchHandler @ 009ad3c4 */
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow(param_1 + 0x180);
    }
  }
  plVar3 = *(long **)(param_1 + 400);
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
      ::drop_slow(param_1 + 400);
      return;
    }
  }
  return;
}


// ===== 009ad44c  FUN_009ad44c =====

void FUN_009ad44c(void *param_1)

{
                    /* try { // try from 009ad45c to 009ad45f has its CatchHandler @ 009ad478 */
  FUN_009ae1a0();
  free(param_1);
  return;
}


// ===== 009ad494  FUN_009ad494 =====

void FUN_009ad494(long *param_1)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  
  puVar3 = (ulong *)*param_1;
  if (puVar3 != (ulong *)0x0) {
    do {
      uVar4 = *puVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar2) {
        *puVar3 = uVar4 - 0x40;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    uVar4 = uVar4 >> 6;
    if (uVar4 == 1) {
      (**(code **)(puVar3[2] + 0x10))();
    }
    else if (uVar4 == 0) {
                    /* try { // try from 009ad4cc to 009ad4f3 has its CatchHandler @ 009ad5b4 */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: prev.ref_count() >= 1",0x27,
                 &PTR_s__root__cargo_registry_src_index__00af3f10);
    }
  }
                    /* try { // try from 009ad4f4 to 009ad4fb has its CatchHandler @ 009ad584 */
  FUN_009b1ce8(param_1 + 3);
  plVar5 = (long *)param_1[3];
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
                    /* try { // try from 009ad518 to 009ad51f has its CatchHandler @ 009ad57c */
    <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::runtime::scheduler::multi_thread::queue::Inner<alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::runtime::scheduler::multi_thread::handle::Handle>>>>
    ::drop_slow(param_1 + 3);
  }
  plVar5 = (long *)param_1[1];
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
                    /* try { // try from 009ad544 to 009ad547 has its CatchHandler @ 009ad560 */
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::park::Inner>>::
      drop_slow();
    }
  }
  free(param_1);
  return;
}


// ===== 009ad604  FUN_009ad604 =====

void FUN_009ad604(long *param_1)

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
                    /* try { // try from 009ad64c to 009ad64f has its CatchHandler @ 009ad69c */
      (**(code **)(*(long *)(lVar5 + 0x10) + 0x10))(*(undefined8 *)(lVar5 + 0x18));
    }
    if (((uint)uVar6 >> 1 & 1) != 0) {
      *(undefined1 *)(lVar5 + 0x38) = 0;
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
        <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<()>>>::drop_slow(param_1);
        return;
      }
    }
  }
  return;
}


// ===== 009ad6d4  FUN_009ad6d4 =====

void FUN_009ad6d4(long *param_1)

{
                    /* try { // try from 009ad6e4 to 009ad6e7 has its CatchHandler @ 009ad714 */
  FUN_00998af4();
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 009ad738  FUN_009ad738 =====

void FUN_009ad738(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 009ad748 to 009ad74b has its CatchHandler @ 009ad784 */
  FUN_009b1ce8();
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


// ===== 009ad7b8  FUN_009ad7b8 =====

void FUN_009ad7b8(undefined8 *param_1)

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
                    /* try { // try from 009ad7e8 to 009ad7ef has its CatchHandler @ 009ad82c */
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow(param_1);
    }
  }
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
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow(param_1 + 2);
      return;
    }
  }
  return;
}


// ===== 009ad864  FUN_009ad864 =====

void FUN_009ad864(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)(param_1 + 0x10);
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
                    /* try { // try from 009ad894 to 009ad897 has its CatchHandler @ 009ad934 */
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow();
    }
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
                    /* try { // try from 009ad8bc to 009ad8bf has its CatchHandler @ 009ad92c */
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow();
    }
  }
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
                    /* try { // try from 009ad8e4 to 009ad8e7 has its CatchHandler @ 009ad924 */
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow();
    }
  }
  plVar3 = *(long **)(param_1 + 0x40);
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
      ::drop_slow((undefined8 *)(param_1 + 0x40));
      return;
    }
  }
  return;
}


// ===== 009ad9c0  FUN_009ad9c0 =====

void FUN_009ad9c0(long param_1)

{
  char cVar1;
  bool bVar2;
  void *__ptr;
  long *plVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 8) == -1) {
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
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::park::Inner>>::drop_slow
                ((undefined8 *)(param_1 + 0x10));
      return;
    }
  }
  else {
    if (*(long *)(param_1 + 8) != 0) {
      free(*(void **)(param_1 + 0x10));
    }
    close(*(int *)(param_1 + 0x20));
    close(*(int *)(param_1 + 0x30));
    plVar3 = *(long **)(param_1 + 0x28);
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 009ada20 to 009ada23 has its CatchHandler @ 009ada98 */
      <alloc::sync::[n]::alloc::sync::Arc<()>>::drop_slow();
    }
    __ptr = *(void **)(param_1 + 0x38);
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
  return;
}


// ===== 009adaac  FUN_009adaac =====

void FUN_009adaac(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  void *pvVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if (*(int *)((long)param_1 + 0x44) == -1) {
    plVar4 = (long *)*param_1;
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
                    /* try { // try from 009adb60 to 009adb67 has its CatchHandler @ 009adc14 */
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::park::Inner>>::drop_slow(param_1);
    }
  }
  else {
    close(*(int *)(param_1 + 8));
    lVar6 = param_1[4];
    if (lVar6 != 0) {
      lVar7 = param_1[3];
      lVar8 = 0;
      do {
        lVar5 = lVar8 * 8;
        lVar8 = lVar8 + 1;
        plVar4 = *(long **)(lVar7 + lVar5);
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
                    /* try { // try from 009adb18 to 009adb1b has its CatchHandler @ 009adc1c */
          <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::io::scheduled_io::ScheduledIo>>::
          drop_slow();
        }
      } while (lVar8 != lVar6);
    }
    if (param_1[2] != 0) {
      free((void *)param_1[3]);
    }
    close(*(int *)((long)param_1 + 0x44));
  }
  pvVar3 = (void *)param_1[9];
  if ((long)pvVar3 - 1U < 0xfffffffffffffffe) {
    plVar4 = (long *)((long)pvVar3 + 8);
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
      free(pvVar3);
    }
  }
  if ((*(int *)(param_1 + 0x10) != -1) && (lVar6 = param_1[0xd], lVar6 != 0)) {
    pvVar3 = (void *)param_1[0xc];
    lVar8 = 8;
    do {
      free(*(void **)((long)pvVar3 + lVar8));
      lVar6 = lVar6 + -1;
      lVar8 = lVar8 + 0x28;
    } while (lVar6 != 0);
    free(pvVar3);
    return;
  }
  return;
}


// ===== 009adca0  FUN_009adca0 =====

void FUN_009adca0(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 009adcb0 to 009adcc3 has its CatchHandler @ 009add38 */
  FUN_0097c6e8(&PTR_FUN_00af47a0,param_1,param_1 + 2);
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


// ===== 009add50  FUN_009add50 =====

void FUN_009add50(long *param_1)

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


// ===== 009add9c  FUN_009add9c =====

void FUN_009add9c(long *param_1)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  void *__ptr;
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
                    /* try { // try from 009ade34 to 009ade37 has its CatchHandler @ 009adec4 */
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>>::
      drop_slow();
    }
    __ptr = (void *)param_1[3];
    if (__ptr != (void *)0x0) {
                    /* try { // try from 009ade40 to 009ade47 has its CatchHandler @ 009aded8 */
      FUN_009ae1a0(__ptr);
      free(__ptr);
    }
    puVar6 = (undefined8 *)(param_1[6] + 8);
    lVar5 = param_1[7] + 1;
    while (lVar5 = lVar5 + -1, lVar5 != 0) {
      plVar4 = puVar6 + -1;
      uVar1 = *puVar6;
      puVar6 = puVar6 + 2;
                    /* try { // try from 009ade80 to 009ade83 has its CatchHandler @ 009adf2c */
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
                    /* try { // try from 009addd8 to 009adddb has its CatchHandler @ 009adf00 */
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::worker::Worker>>
      ::drop_slow();
    }
    if (param_1[3] != 0) {
                    /* try { // try from 009adde4 to 009adde7 has its CatchHandler @ 009adf18 */
      FUN_009ad494();
    }
    puVar6 = (undefined8 *)(param_1[6] + 8);
    lVar5 = param_1[7] + 1;
    while (lVar5 = lVar5 + -1, lVar5 != 0) {
      plVar4 = puVar6 + -1;
      uVar1 = *puVar6;
      puVar6 = puVar6 + 2;
                    /* try { // try from 009ade10 to 009ade13 has its CatchHandler @ 009adf50 */
      (**(code **)(*plVar4 + 0x18))(uVar1);
    }
  }
  if (param_1[5] != 0) {
    free((void *)param_1[6]);
    return;
  }
  return;
}


// ===== 009adf94  FUN_009adf94 =====

void FUN_009adf94(undefined8 *param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  
                    /* try { // try from 009adfa8 to 009adfaf has its CatchHandler @ 009ae094 */
  FUN_009a33bc(param_1,param_2,0xffffffff);
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
                    /* try { // try from 009adfcc to 009adfd3 has its CatchHandler @ 009ae08c */
    <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::blocking::pool::Inner>>::drop_slow(param_1);
  }
  plVar4 = param_1 + 1;
  lVar6 = *plVar4;
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
                    /* try { // try from 009ae008 to 009ae00b has its CatchHandler @ 009ae058 */
      (**(code **)(*(long *)(lVar6 + 0x10) + 0x10))(*(undefined8 *)(lVar6 + 0x18));
    }
    if (((uint)uVar7 >> 1 & 1) != 0) {
      *(undefined1 *)(lVar6 + 0x38) = 0;
    }
    plVar5 = (long *)*plVar4;
    if (plVar5 != (long *)0x0) {
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
        <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<()>>>::drop_slow(plVar4);
        return;
      }
    }
  }
  return;
}


// ===== 009ae0d0  FUN_009ae0d0 =====

void FUN_009ae0d0(long *param_1)

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
                    /* try { // try from 009ae118 to 009ae11b has its CatchHandler @ 009ae168 */
      (**(code **)(*(long *)(lVar5 + 0x10) + 0x10))(*(undefined8 *)(lVar5 + 0x18));
    }
    if (((uint)uVar6 >> 1 & 1) != 0) {
      *(undefined1 *)(lVar5 + 0x38) = 0;
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
        <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<()>>>::drop_slow(param_1);
        return;
      }
    }
  }
  return;
}


// ===== 009ae1a0  FUN_009ae1a0 =====

void FUN_009ae1a0(long *param_1)

{
                    /* try { // try from 009ae1b0 to 009ae1b7 has its CatchHandler @ 009ae1f8 */
  FUN_00998af4(param_1 + 8);
  if (param_1[8] != 0) {
    free((void *)param_1[9]);
  }
  if (*param_1 == 2) {
    return;
  }
  FUN_009ad9c0(param_1);
  return;
}


// ===== 009ae234  FUN_009ae234 =====

void FUN_009ae234(undefined8 param_1)

{
                    /* try { // try from 009ae244 to 009ae247 has its CatchHandler @ 009ae258 */
  <tokio::runtime::scheduler::current_thread::CoreGuard_as_core::ops::drop::Drop>::drop();
  FUN_009add9c(param_1);
  return;
}


// ===== 009ae270  FUN_009ae270 =====

void FUN_009ae270(long param_1)

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
                    /* try { // try from 009ae2a8 to 009ae2ab has its CatchHandler @ 009ae2ec */
    (**(code **)(*plVar1 + 0x18))(uVar2);
  }
  if (*(long *)(param_1 + 8) != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 009ae330  FUN_009ae330 =====

void FUN_009ae330(long *param_1)

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
                    /* try { // try from 009ae384 to 009ae387 has its CatchHandler @ 009ae3c8 */
        <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::worker::Worker>>
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


// ===== 009ae42c  FUN_009ae42c =====

ulong FUN_009ae42c(uint *param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  void *pvVar5;
  undefined8 uVar6;
  long *plVar7;
  uint uVar8;
  ulong uVar9;
  
  puVar2 = PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  uVar9 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar9 == 0) {
    uVar9 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar4 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar9);
    if (puVar4 < (undefined1 *)0x2) goto LAB_009ae554;
  }
  else {
    puVar4 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar9);
    if (puVar4 <= &DAT_00000001) {
LAB_009ae554:
      puVar4 = (undefined1 *)FUN_00996984(uVar9 & 0xffffffff,puVar4,0);
    }
  }
  if (puVar4 != (undefined1 *)0x0) {
    if (puVar4[0x46] == '\x02') {
      uVar1 = *param_1;
      uVar9 = *(ulong *)puVar2;
      if (uVar9 == 0) {
        uVar9 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
                lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
        pvVar5 = pthread_getspecific((pthread_key_t)uVar9);
      }
      else {
        pvVar5 = pthread_getspecific((pthread_key_t)uVar9);
      }
      if (pvVar5 < (void *)0x2) {
        pvVar5 = (void *)FUN_00996984(uVar9 & 0xffffffff,pvVar5,0);
      }
      if (pvVar5 != (void *)0x0) {
        if ((*(uint *)((long)pvVar5 + 0x38) & 1) == 0) {
          uVar6 = FUN_009c64a0();
          uVar8 = (uint)((ulong)uVar6 >> 0x20);
          uVar3 = (uint)uVar6;
          if (uVar3 < 2) {
            uVar3 = 1;
          }
        }
        else {
          uVar8 = *(uint *)((long)pvVar5 + 0x3c);
          uVar3 = *(uint *)((long)pvVar5 + 0x40);
        }
        uVar8 = uVar8 ^ uVar8 << 0x11;
        *(undefined4 *)((long)pvVar5 + 0x38) = 1;
        *(uint *)((long)pvVar5 + 0x3c) = uVar3;
        uVar8 = uVar3 >> 0x10 ^ uVar8 >> 7 ^ uVar3 ^ uVar8;
        *(uint *)((long)pvVar5 + 0x40) = uVar8;
        return (ulong)uVar1 * (ulong)(uVar8 + uVar3) >> 0x20;
      }
      goto LAB_009ae65c;
    }
    plVar7 = *(long **)(puVar4 + 0x28);
    if (plVar7 != (long *)0x0) {
      if (*plVar7 != 1) {
        return 0;
      }
      return (ulong)*(uint *)(plVar7[1] + 0x18);
    }
  }
  uVar1 = *param_1;
  uVar9 = *(ulong *)puVar2;
  if (uVar9 == 0) {
    uVar9 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    pvVar5 = pthread_getspecific((pthread_key_t)uVar9);
  }
  else {
    pvVar5 = pthread_getspecific((pthread_key_t)uVar9);
  }
  if (pvVar5 < (void *)0x2) {
    pvVar5 = (void *)FUN_00996984(uVar9 & 0xffffffff,pvVar5,0);
  }
  if (pvVar5 != (void *)0x0) {
    if ((*(uint *)((long)pvVar5 + 0x38) & 1) == 0) {
      uVar6 = FUN_009c64a0();
      uVar8 = (uint)((ulong)uVar6 >> 0x20);
      uVar3 = (uint)uVar6;
      if (uVar3 < 2) {
        uVar3 = 1;
      }
    }
    else {
      uVar8 = *(uint *)((long)pvVar5 + 0x3c);
      uVar3 = *(uint *)((long)pvVar5 + 0x40);
    }
    uVar8 = uVar8 ^ uVar8 << 0x11;
    *(undefined4 *)((long)pvVar5 + 0x38) = 1;
    *(uint *)((long)pvVar5 + 0x3c) = uVar3;
    uVar8 = uVar3 >> 0x10 ^ uVar8 >> 7 ^ uVar3 ^ uVar8;
    *(uint *)((long)pvVar5 + 0x40) = uVar8;
    return (ulong)uVar1 * (ulong)(uVar8 + uVar3) >> 0x20;
  }
LAB_009ae65c:
                    /* WARNING: Subroutine does not return */
  std::thread::local::panic_access_error(&PTR_s__nix_store_8006w282fgsx3273c878b_00af36e0);
}


// ===== 009ae668  FUN_009ae668 =====

void FUN_009ae668(long *param_1)

{
  code *pcVar1;
  void *pvVar2;
  undefined1 *puVar3;
  ulong uVar4;
  uint *puVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = param_1[1];
  lVar6 = *param_1;
  puVar3 = (undefined1 *)param_1[2];
  uVar4 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar4 == 0) {
                    /* try { // try from 009ae794 to 009ae7e3 has its CatchHandler @ 009ae824 */
    uVar4 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    pvVar2 = pthread_getspecific((pthread_key_t)uVar4);
  }
  else {
    pvVar2 = pthread_getspecific((pthread_key_t)uVar4);
  }
  if (pvVar2 < (void *)0x2) {
    pvVar2 = (void *)FUN_00996984(uVar4 & 0xffffffff,pvVar2,0);
  }
  if (pvVar2 == (void *)0x0) {
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af4f80,lVar7);
    }
    FUN_009922d0(lVar6);
  }
  else {
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af4f98);
    }
    if (((*(char *)((long)pvVar2 + 0x46) != '\x02') &&
        (puVar5 = *(uint **)((long)pvVar2 + 0x28), puVar5 != (uint *)0x0)) && ((*puVar5 & 1) != 0))
    {
      if (lVar6 == *(long *)(*(long *)(puVar5 + 2) + 0x10) + 0x10) {
        if (*(long *)(puVar5 + 4) != 0) {
                    /* try { // try from 009ae7e8 to 009ae7f7 has its CatchHandler @ 009ae80c */
          core::cell::panic_already_borrowed(&PTR_s__root__cargo_registry_src_index__00af4ff8);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x9ae7fc);
          (*pcVar1)();
        }
        puVar5[4] = 0xffffffff;
        puVar5[5] = 0xffffffff;
        if (*(long *)(puVar5 + 6) != 0) {
                    /* try { // try from 009ae768 to 009ae76f has its CatchHandler @ 009ae7fc */
          FUN_00991fb4(lVar6,*(long *)(puVar5 + 6),lVar7,*puVar3);
          *(long *)(puVar5 + 4) = *(long *)(puVar5 + 4) + 1;
          return;
        }
        puVar5[4] = 0;
        puVar5[5] = 0;
      }
                    /* try { // try from 009ae6f8 to 009ae747 has its CatchHandler @ 009ae824 */
      FUN_009922d0(lVar6,lVar7);
      FUN_0099242c(lVar6);
      return;
    }
    FUN_009922d0(lVar6,lVar7);
  }
  FUN_0099242c(lVar6);
  return;
}


// ===== 009ae848  FUN_009ae848 =====

void FUN_009ae848(byte *param_1,byte *param_2)

{
  long *plVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long *local_28;
  
  puVar6 = PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  uVar12 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar12 == 0) {
    uVar12 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
             lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar8 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar12);
    if (puVar8 <= &DAT_00000001) goto LAB_009ae98c;
  }
  else {
    puVar8 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar12);
    if (puVar8 <= &DAT_00000001) {
LAB_009ae98c:
      puVar8 = (undefined1 *)FUN_00996984(uVar12 & 0xffffffff,puVar8,0);
    }
  }
  if (puVar8 == (undefined1 *)0x0) {
    return;
  }
  if (puVar8[0x46] == '\x02') {
    return;
  }
  plVar13 = *(long **)(puVar8 + 0x28);
  if (plVar13 == (long *)0x0) {
    return;
  }
  if (*plVar13 != 1) {
    return;
  }
  bVar2 = param_2[1];
  bVar3 = *param_2;
  if ((*param_1 & 1) != 0) {
    plVar1 = (long *)(plVar13[1] + 0x20);
    do {
      lVar11 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = 0;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar11 != 0) {
      uVar12 = *(ulong *)(plVar13[1] + 0x18);
      uVar9 = *(ulong *)(*(long *)(plVar13[1] + 0x10) + 200);
      if (uVar9 <= uVar12) {
                    /* try { // try from 009aea08 to 009aea13 has its CatchHandler @ 009aea2c */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (uVar12,uVar9,&PTR_s__root__cargo_registry_src_index__00af5010);
      }
                    /* try { // try from 009ae8e8 to 009ae90f has its CatchHandler @ 009aea2c */
      local_28 = (long *)std::thread::current::current();
      do {
        lVar10 = *local_28;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(local_28,0x10);
        if (bVar5) {
          *local_28 = lVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar10 + -1 == 0) {
        DataMemoryBarrier(2,1);
        <alloc[c1f8e832b0d782c7]::sync::Arc<std[17aff9129faa4dc5]::thread::thread::Inner,std[17aff9129faa4dc5]::alloc::System>>
        ::drop_slow(&local_28);
      }
    }
    if (plVar13[2] != 0) {
                    /* try { // try from 009ae9dc to 009ae9e7 has its CatchHandler @ 009aea2c */
      core::cell::panic_already_borrowed(&PTR_s__root__cargo_registry_src_index__00af5040);
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x9aea18);
      (*pcVar7)();
    }
    plVar13[2] = -1;
    if (plVar13[3] != 0) {
                    /* try { // try from 009ae9ec to 009aea03 has its CatchHandler @ 009aea18 */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic(&DAT_0037c49a,0x23,&PTR_s__root__cargo_registry_src_index__00af5028);
    }
    plVar13[2] = 0;
    plVar13[3] = lVar11;
  }
  uVar12 = *(ulong *)puVar6;
  if (uVar12 == 0) {
    uVar12 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
             lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar8 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar12);
    if (&DAT_00000001 < puVar8) goto joined_r0x009ae9d4;
  }
  else {
    puVar8 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar12);
    if (&DAT_00000001 < puVar8) goto joined_r0x009ae9d4;
  }
  puVar8 = (undefined1 *)FUN_00996984(uVar12 & 0xffffffff,puVar8,0);
joined_r0x009ae9d4:
  if (puVar8 != (undefined1 *)0x0) {
    puVar8[0x45] = bVar2;
    puVar8[0x44] = bVar3 & 1;
  }
  return;
}


// ===== 009aea48  FUN_009aea48 =====

void FUN_009aea48(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  code *pcVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uStack_40;
  undefined8 local_38;
  
  uVar5 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar5 == 0) {
                    /* try { // try from 009aebb4 to 009aebe3 has its CatchHandler @ 009aebf8 */
    uVar5 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    pvVar3 = pthread_getspecific((pthread_key_t)uVar5);
  }
  else {
    pvVar3 = pthread_getspecific((pthread_key_t)uVar5);
  }
  if (pvVar3 < (void *)0x2) {
    pvVar3 = (void *)FUN_00996984(uVar5 & 0xffffffff,pvVar3,0);
  }
  if (((pvVar3 == (void *)0x0) || (*(char *)((long)pvVar3 + 0x46) == '\x02')) ||
     (plVar6 = *(long **)((long)pvVar3 + 0x28), plVar6 == (long *)0x0)) {
    lVar7 = *param_1;
    FUN_00991ca8(lVar7 + 0xb0,param_2);
    FUN_00989458(lVar7 + 0xe0);
    return;
  }
  lVar7 = *param_1;
  uStack_40 = param_2;
  if ((*plVar6 == 1) || (lVar7 != plVar6[1])) {
    FUN_00991ca8(lVar7 + 0xb0,param_2);
    FUN_00989458(lVar7 + 0xe0);
    return;
  }
  if (plVar6[2] != 0) {
                    /* try { // try from 009aebe8 to 009aebf3 has its CatchHandler @ 009aec30 */
    core::cell::panic_already_borrowed(&PTR_s__root__cargo_registry_src_index__00af5058);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x9aebf8);
    (*pcVar2)();
  }
  lVar7 = plVar6[3];
  plVar6[2] = -1;
  if (lVar7 == 0) {
    plVar6[2] = 0;
    FUN_00980b20(&uStack_40);
    return;
  }
  uVar5 = *(ulong *)(lVar7 + 0x40);
  uVar4 = *(ulong *)(lVar7 + 0x58);
  if (uVar4 == uVar5) {
    local_38 = param_2;
                    /* try { // try from 009aeb48 to 009aeb4b has its CatchHandler @ 009aec0c */
    <alloc::collections::vec_deque::[4]::alloc::collections::vec_deque::VecDeque<tokio::runtime::task::Notified<alloc::sync::Arc<{backref_26}::scheduler::current_thread::Handle>>>>
    ::grow();
    uVar4 = *(ulong *)(lVar7 + 0x58);
    uVar5 = *(ulong *)(lVar7 + 0x40);
  }
  uVar1 = *(long *)(lVar7 + 0x50) + uVar4;
  *(ulong *)(lVar7 + 0x58) = uVar4 + 1;
  uVar4 = 0;
  if (uVar5 <= uVar1) {
    uVar4 = uVar5;
  }
  *(undefined8 *)(*(long *)(lVar7 + 0x48) + (uVar1 - uVar4) * 8) = param_2;
  plVar6[2] = plVar6[2] + 1;
  return;
}


// ===== 009aec48  FUN_009aec48 =====

void FUN_009aec48(void)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  ulong local_48;
  long lStack_40;
  ulong local_38;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  lStack_40 = FUN_004b25a4(0x800,8);
  if (lStack_40 == 0) {
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(8,0x800);
  }
  local_38 = 0;
  local_48 = 0x100;
  do {
    uVar3 = local_38;
    if (local_38 == local_48) {
                    /* try { // try from 009aeca0 to 009aeca7 has its CatchHandler @ 009aed74 */
      <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<alloc::boxed::Box<tokio::runtime::scheduler::multi_thread::worker::Core>>>
      ::grow_one(&local_48);
    }
    local_38 = uVar3 + 1;
  } while (local_38 != 0x100);
  lVar5 = lStack_40;
  if ((0x100 < local_48) && (lVar5 = FUN_004b2600(lStack_40,local_48 << 3,8,0x800), lVar5 == 0)) {
                    /* try { // try from 009aecd8 to 009aeceb has its CatchHandler @ 009aed64 */
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(8,0x800);
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  plVar6 = (long *)FUN_004b25a4(0x28,8);
  if (plVar6 == (long *)0x0) {
                    /* try { // try from 009aed48 to 009aed53 has its CatchHandler @ 009aed8c */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x28);
  }
  plVar6[2] = lVar5;
  plVar6[3] = 0;
  *(undefined4 *)(plVar6 + 4) = 0;
  plVar6[1] = 1;
  *plVar6 = 1;
  do {
    lVar5 = *plVar6;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = lVar5 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar5 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x9aed58);
    (*pcVar4)();
  }
  return;
}


// ===== 009aeda8  FUN_009aeda8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009aeda8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar3 = (undefined8 *)FUN_004b25a4(0x14,1);
  uVar2 = _UNK_0037c48e;
  uVar1 = _DAT_0037c486;
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar3 + 2) = 0x72656b72;
    puVar3[1] = uVar2;
    *puVar3 = uVar1;
    *param_1 = 0x14;
    param_1[1] = puVar3;
    param_1[2] = 0x14;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(1,0x14);
}


// ===== 009aee0c  FUN_009aee0c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009aee0c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar3 = (undefined8 *)FUN_004b25a4(0x14,1);
  uVar2 = _UNK_0037c48e;
  uVar1 = _DAT_0037c486;
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar3 + 2) = 0x72656b72;
    puVar3[1] = uVar2;
    *puVar3 = uVar1;
    *param_1 = 0x14;
    param_1[1] = puVar3;
    param_1[2] = 0x14;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(1,0x14);
}


// ===== 009aee70  <tokio::runtime::handle::tokio::runtime::handle::Handle>::try_current =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::handle::tokio::runtime::handle::Handle>::try_current */

void __rustcall
<tokio::runtime::handle::tokio::runtime::handle::Handle>::try_current(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  ulong *puVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  
  uVar9 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar9 == 0) {
    uVar9 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar4 = (ulong *)pthread_getspecific((pthread_key_t)uVar9);
    if (puVar4 <= &DAT_00000001) goto LAB_009aef50;
  }
  else {
    puVar4 = (ulong *)pthread_getspecific((pthread_key_t)uVar9);
    if (puVar4 < (ulong *)0x2) {
LAB_009aef50:
      puVar4 = (ulong *)FUN_00996984(uVar9 & 0xffffffff,puVar4,0);
    }
  }
  if (puVar4 == (ulong *)0x0) {
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = 2;
    return;
  }
  uVar9 = *puVar4;
  if (0x7ffffffffffffffe < uVar9) {
                    /* WARNING: Subroutine does not return */
    core::cell::panic_already_mutably_borrowed(&PTR_s__root__cargo_registry_src_index__00af4fb0);
  }
  uVar6 = puVar4[1];
  *puVar4 = uVar9 + 1;
  if (uVar6 == 2) {
    *puVar4 = uVar9;
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 2;
    return;
  }
  plVar5 = (long *)puVar4[2];
  do {
    lVar8 = *plVar5;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = lVar8 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if ((uVar6 & 1) == 0) {
    if (lVar8 < 0) goto LAB_009aef8c;
    uVar7 = 0;
  }
  else {
    if (lVar8 < 0) {
LAB_009aef8c:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x9aef90);
      (*pcVar3)();
    }
    uVar7 = 1;
  }
  uVar9 = *puVar4;
  *param_1 = uVar7;
  param_1[1] = plVar5;
  *puVar4 = uVar9 - 1;
  return;
}


// ===== 009aef90  <tokio::runtime::handle::tokio::runtime::handle::Handle>::enter =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::handle::tokio::runtime::handle::Handle>::enter */

void __rustcall
<tokio::runtime::handle::tokio::runtime::handle::Handle>::enter(long *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined **local_48;
  code *local_40;
  long lStack_38;
  
  uVar2 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar2 == 0) {
    uVar2 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar1 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar2);
  }
  else {
    puVar1 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar2);
  }
  if (puVar1 <= &DAT_00000001) {
    puVar1 = (undefined1 *)FUN_00996984(uVar2 & 0xffffffff,puVar1,0);
  }
  if ((puVar1 != (undefined1 *)0x0) &&
     (<tokio::runtime::context::current::tokio::runtime::context::Context>::set_current
                (&local_48,puVar1,param_2), local_48 != (undefined **)0xffffffffffffffff)) {
    param_1[2] = lStack_38;
    param_1[1] = (long)local_40;
    *param_1 = (long)local_48;
    return;
  }
  local_48 = &PTR_DAT_00af5070;
  local_40 = FUN_0099f78c;
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002ab692,&local_48,&PTR_s__root__cargo_registry_src_index__00af5080);
}


// ===== 009af070  <tokio::runtime::handle::tokio::runtime::handle::Handle>::current =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::handle::tokio::runtime::handle::Handle>::current */

void __rustcall <tokio::runtime::handle::tokio::runtime::handle::Handle>::current(void)

{
  (*(code *)PTR_current_00b04df8)();
  return;
}


// ===== 009af074  <tokio::runtime::handle::tokio::runtime::handle::Handle>::metrics =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::handle::tokio::runtime::handle::Handle>::metrics */

undefined8 __rustcall
<tokio::runtime::handle::tokio::runtime::handle::Handle>::metrics(int *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  
  iVar1 = *param_1;
  plVar5 = *(long **)(param_1 + 2);
  do {
    lVar6 = *plVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = lVar6 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 == 0) {
    if (-1 < lVar6) {
      return 0;
    }
  }
  else if (-1 < lVar6) {
    return 1;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x9af0ac);
  (*pcVar4)();
}


// ===== 009af0ac  <tokio::runtime::builder::tokio::runtime::builder::Builder>::worker_threads =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::builder::tokio::runtime::builder::Builder>::worker_threads */

void __rustcall
<tokio::runtime::builder::tokio::runtime::builder::Builder>::worker_threads
          (undefined8 *param_1,long param_2)

{
  if (param_2 != 0) {
    *param_1 = 1;
    param_1[1] = param_2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_0037c4f8,0x43);
}


// ===== 009af0d4  <tokio::runtime::builder::tokio::runtime::builder::Builder>::new_multi_thread =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::builder::tokio::runtime::builder::Builder>::new_multi_thread */

void __rustcall
<tokio::runtime::builder::tokio::runtime::builder::Builder>::new_multi_thread(undefined8 param_1)

{
  FUN_009af138(param_1,1);
  return;
}


// ===== 009af0e0  <tokio::runtime::builder::tokio::runtime::builder::Builder>::new_current_thread =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::builder::tokio::runtime::builder::Builder>::new_current_thread */

void __rustcall
<tokio::runtime::builder::tokio::runtime::builder::Builder>::new_current_thread(undefined8 param_1)

{
  FUN_009af138(param_1,0);
  return;
}


// ===== 009af0ec  <tokio::runtime::builder::tokio::runtime::builder::Builder>::max_blocking_threads =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::builder::tokio::runtime::builder::Builder>::max_blocking_threads */

void __rustcall
<tokio::runtime::builder::tokio::runtime::builder::Builder>::max_blocking_threads
          (long param_1,long param_2)

{
  if (param_2 != 0) {
    *(long *)(param_1 + 0x50) = param_2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_0037c519,0x4f);
}


// ===== 009af110  <tokio::runtime::builder::tokio::runtime::builder::Builder>::global_queue_interval =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::builder::tokio::runtime::builder::Builder>::global_queue_interval */

void __rustcall
<tokio::runtime::builder::tokio::runtime::builder::Builder>::global_queue_interval
          (long param_1,int param_2)

{
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0x20) = 1;
    *(int *)(param_1 + 0x24) = param_2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_0037c540,0x59);
}


// ===== 009af138  FUN_009af138 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009af138(undefined8 *param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar4 = (undefined8 *)FUN_004b25a4(0x10,8);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[1] = 1;
    *puVar4 = 1;
                    /* try { // try from 009af184 to 009af187 has its CatchHandler @ 009af214 */
    uVar5 = FUN_009c64a0();
    uVar2 = _UNK_002a0fe8;
    uVar1 = _DAT_002a0fe0;
    uVar3 = (uint)uVar5;
    *(undefined4 *)(param_1 + 6) = 0xffffffff;
    param_1[10] = uVar2;
    param_1[9] = uVar1;
    uVar2 = _UNK_0029f268;
    uVar1 = _DAT_0029f260;
    if (uVar3 < 2) {
      uVar3 = 1;
    }
    *(undefined1 *)((long)param_1 + 0xd4) = param_2;
    *param_1 = 0;
    param_1[7] = puVar4;
    param_1[8] = &DAT_00af5098;
    param_1[2] = 0;
    param_1[0xb] = 0;
    param_1[0xd] = 0;
    param_1[0xf] = 0;
    param_1[0x11] = 0;
    param_1[0x13] = 0;
    param_1[0x15] = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)((long)param_1 + 0xd5) = 0;
    param_1[0x18] = uVar2;
    param_1[0x17] = uVar1;
    *(int *)(param_1 + 0x19) = (int)((ulong)uVar5 >> 0x20);
    *(uint *)((long)param_1 + 0xcc) = uVar3;
    *(undefined4 *)(param_1 + 0x1a) = 0x3d;
    *(undefined1 *)((long)param_1 + 0xd9) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x10);
}


// ===== 009af244  <tokio::runtime::builder::tokio::runtime::builder::Builder>::build =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::builder::tokio::runtime::builder::Builder>::build */

void __rustcall
<tokio::runtime::builder::tokio::runtime::builder::Builder>::build
          (undefined8 *param_1,long *param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined4 extraout_w1;
  undefined4 extraout_w1_00;
  undefined4 extraout_w1_01;
  undefined4 extraout_w1_02;
  byte bVar10;
  long lVar11;
  long *plVar12;
  undefined *puVar13;
  undefined **extraout_x11;
  undefined **extraout_x11_00;
  ulong uVar14;
  long lVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  undefined1 auVar24 [16];
  undefined **local_520;
  undefined **ppuStack_518;
  undefined **ppuStack_510;
  undefined **local_508;
  undefined **local_500;
  undefined **ppuStack_4f8;
  undefined **local_4f0;
  undefined **ppuStack_4e8;
  undefined **local_4e0;
  undefined **ppuStack_4d8;
  undefined **local_4d0;
  undefined **ppuStack_4c8;
  undefined **local_4c0;
  undefined **ppuStack_4b8;
  undefined **local_4b0;
  undefined **ppuStack_4a8;
  undefined **local_4a0;
  undefined **ppuStack_498;
  undefined **local_490;
  undefined **ppuStack_488;
  undefined **local_480;
  undefined **ppuStack_478;
  undefined **local_470;
  undefined **ppuStack_468;
  undefined **local_460;
  undefined **local_450;
  undefined **ppuStack_448;
  undefined **local_440;
  undefined **ppuStack_438;
  undefined **local_430;
  undefined **ppuStack_428;
  undefined **local_420;
  undefined **ppuStack_418;
  undefined **local_410;
  undefined **ppuStack_408;
  undefined **local_400;
  undefined **ppuStack_3f8;
  undefined **local_3f0;
  undefined **ppuStack_3e8;
  undefined **local_3e0;
  undefined **ppuStack_3d8;
  undefined **local_3d0;
  undefined **ppuStack_3c8;
  undefined **ppuStack_3c0;
  undefined **local_3b0;
  undefined **ppuStack_3a8;
  undefined **local_3a0;
  undefined1 local_390 [16];
  long *local_378;
  undefined **local_370;
  undefined **ppuStack_368;
  undefined **local_360;
  undefined **ppuStack_358;
  undefined **local_350;
  undefined **ppuStack_348;
  undefined **local_340;
  undefined **ppuStack_338;
  undefined **local_330;
  undefined **ppuStack_328;
  undefined8 local_320;
  undefined **ppuStack_318;
  undefined **local_310;
  undefined **ppuStack_308;
  undefined **ppuStack_300;
  undefined **ppuStack_2f8;
  undefined **local_2f0;
  undefined **ppuStack_2e8;
  undefined **local_2e0;
  undefined **ppuStack_2d8;
  undefined **local_2d0;
  undefined **ppuStack_2c8;
  undefined **local_2c0;
  undefined **ppuStack_2b8;
  undefined **local_2b0;
  undefined8 local_2a0;
  undefined **ppuStack_298;
  undefined **local_290;
  undefined **ppuStack_288;
  undefined **local_280;
  undefined **ppuStack_278;
  undefined **local_270;
  undefined **ppuStack_268;
  undefined **local_260;
  undefined **ppuStack_258;
  undefined **local_250;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined2 uStack_23c;
  undefined2 uStack_23a;
  long *local_238;
  undefined **local_230;
  undefined8 uStack_228;
  undefined **local_220;
  undefined **local_218;
  undefined **local_210;
  undefined **ppuStack_208;
  undefined **local_200;
  undefined **ppuStack_1f8;
  undefined **local_1f0;
  undefined **ppuStack_1e8;
  undefined **local_1e0;
  undefined **ppuStack_1d8;
  undefined **local_1d0;
  undefined **ppuStack_1c8;
  undefined **local_1c0;
  undefined **ppuStack_1b8;
  undefined **local_1b0;
  undefined **ppuStack_1a8;
  undefined **local_1a0;
  undefined **ppuStack_198;
  undefined **local_190;
  undefined **ppuStack_188;
  undefined **local_180;
  undefined **ppuStack_178;
  undefined **local_170;
  undefined1 local_168;
  undefined7 uStack_167;
  undefined **local_160;
  undefined **ppuStack_158;
  undefined **local_150;
  undefined1 local_148;
  undefined8 local_140;
  undefined1 local_138;
  undefined **local_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **local_110;
  undefined **ppuStack_108;
  undefined **local_100;
  undefined **ppuStack_f8;
  undefined **local_f0;
  undefined **ppuStack_e8;
  undefined **local_e0;
  undefined **ppuStack_d8;
  undefined **local_d0;
  undefined **ppuStack_c8;
  undefined **local_c0;
  undefined **ppuStack_b8;
  undefined **local_b0;
  long *local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined **local_90;
  undefined **ppuStack_88;
  undefined **local_80;
  undefined **ppuStack_78;
  undefined8 local_70;
  
  uVar5 = local_320._4_4_;
  local_520 = (undefined **)0x0;
  if (*(char *)((long)param_2 + 0xd4) == '\x01') {
    if (*param_2 == 1) {
      lVar15 = param_2[1];
      bVar10 = 0;
    }
    else {
      lVar15 = FUN_009ab8a0();
      bVar10 = *(byte *)((long)param_2 + 0xd4) ^ 1;
    }
    local_330 = (undefined **)param_2[9];
    local_320._0_4_ =
         CONCAT13(*(undefined1 *)((long)param_2 + 0xd7),
                  CONCAT12(bVar10,*(undefined2 *)((long)param_2 + 0xd5)));
    ppuStack_328 = (undefined **)lVar15;
    FUN_00988710(&local_210,&local_330);
    if (local_210 != (undefined **)0x2) {
      ppuStack_2c8 = (undefined **)CONCAT71(uStack_167,local_168);
      local_370 = local_210;
      ppuStack_368 = ppuStack_208;
      ppuStack_3a8 = ppuStack_158;
      local_3b0 = local_160;
      ppuStack_3c8 = ppuStack_178;
      local_3d0 = local_180;
      ppuStack_3c0 = local_170;
      local_3a0 = local_150;
      local_2b0 = local_150;
      ppuStack_408 = ppuStack_1b8;
      local_410 = local_1c0;
      ppuStack_3f8 = ppuStack_1a8;
      local_400 = local_1b0;
      ppuStack_3e8 = ppuStack_198;
      local_3f0 = local_1a0;
      ppuStack_3d8 = ppuStack_188;
      local_3e0 = local_190;
      ppuStack_448 = ppuStack_1f8;
      local_450 = local_200;
      ppuStack_438 = ppuStack_1e8;
      local_440 = local_1f0;
      ppuStack_428 = ppuStack_1d8;
      local_430 = local_1e0;
      ppuStack_418 = ppuStack_1c8;
      local_420 = local_1d0;
      ppuStack_358 = ppuStack_1f8;
      local_360 = local_200;
      ppuStack_348 = ppuStack_1e8;
      local_350 = local_1f0;
      ppuStack_338 = ppuStack_1d8;
      local_340 = local_1e0;
      ppuStack_328 = ppuStack_1c8;
      local_330 = local_1d0;
      ppuStack_2d8 = ppuStack_178;
      local_2e0 = local_180;
      local_2d0 = local_170;
      ppuStack_2b8 = ppuStack_158;
      local_2c0 = local_160;
      ppuStack_308 = ppuStack_1a8;
      local_310 = local_1b0;
      ppuStack_2f8 = ppuStack_198;
      ppuStack_300 = local_1a0;
      ppuStack_2e8 = ppuStack_188;
      local_2f0 = local_190;
      ppuStack_318 = ppuStack_1b8;
      local_320 = local_1c0;
                    /* try { // try from 009af5d4 to 009af5df has its CatchHandler @ 009afc50 */
      auVar24 = FUN_009a46b8(param_2,param_2[10] + lVar15);
      plVar8 = auVar24._0_8_;
      do {
        lVar11 = *plVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = lVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      local_390 = auVar24;
      if (-1 < lVar11) {
                    /* try { // try from 009af604 to 009af61b has its CatchHandler @ 009afc9c */
        local_378 = plVar8;
        uVar5 = <tokio::util::rand::rt::tokio::util::rand::rt::RngSeedGenerator>::next_seed
                          (param_2 + 0x18);
        uVar6 = <tokio::util::rand::rt::tokio::util::rand::rt::RngSeedGenerator>::next_seed
                          (param_2 + 0x18);
        plVar12 = (long *)param_2[0xf];
        uStack_228 = (undefined **)CONCAT44(extraout_w1_02,uVar6);
        ppuStack_3e8 = ppuStack_2c8;
        local_3f0 = local_2d0;
        ppuStack_3d8 = ppuStack_2b8;
        local_3e0 = local_2c0;
        local_230 = (undefined **)0x0;
        local_3d0 = local_2b0;
        ppuStack_428 = ppuStack_308;
        local_430 = local_310;
        ppuStack_418 = ppuStack_2f8;
        local_420 = ppuStack_300;
        ppuStack_408 = ppuStack_2e8;
        local_410 = local_2f0;
        ppuStack_3f8 = ppuStack_2d8;
        local_400 = local_2e0;
        ppuVar18 = (undefined **)0x0;
        ppuVar19 = (undefined **)0x0;
        ppuStack_448 = ppuStack_328;
        local_450 = local_330;
        ppuStack_438 = ppuStack_318;
        local_440 = local_320;
        ppuVar16 = (undefined **)0x0;
        ppuVar17 = (undefined **)0x0;
        if (plVar12 != (long *)0x0) {
          do {
            lVar11 = *plVar12;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar3) {
              *plVar12 = lVar11 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar11 < 0) goto LAB_009afbc8;
          ppuVar19 = (undefined **)param_2[0x10];
          ppuVar18 = (undefined **)param_2[0xf];
        }
        plVar12 = (long *)param_2[0x11];
        if (plVar12 != (long *)0x0) {
          do {
            lVar11 = *plVar12;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar3) {
              *plVar12 = lVar11 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar11 < 0) goto LAB_009afbc8;
          ppuVar17 = (undefined **)param_2[0x12];
          ppuVar16 = (undefined **)param_2[0x11];
        }
        ppuVar20 = (undefined **)0x0;
        ppuVar21 = (undefined **)0x0;
        ppuVar22 = (undefined **)0x0;
        ppuVar23 = (undefined **)0x0;
        plVar12 = (long *)param_2[0x13];
        if (plVar12 != (long *)0x0) {
          do {
            lVar11 = *plVar12;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar3) {
              *plVar12 = lVar11 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar11 < 0) goto LAB_009afbc8;
          ppuVar23 = (undefined **)param_2[0x14];
          ppuVar22 = (undefined **)param_2[0x13];
        }
        plVar12 = (long *)param_2[0x15];
        if (plVar12 != (long *)0x0) {
          do {
            lVar11 = *plVar12;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar3) {
              *plVar12 = lVar11 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar11 < 0) goto LAB_009afbc8;
          ppuVar21 = (undefined **)param_2[0x16];
          ppuVar20 = (undefined **)param_2[0x15];
        }
        local_240 = (undefined4)param_2[0x1a];
        local_2a0 = (undefined **)param_2[4];
        ppuStack_298 = (undefined **)param_2[0x17];
        uStack_23c = (undefined2)param_2[0x1b];
        local_250 = (undefined **)0x0;
                    /* try { // try from 009af718 to 009af723 has its CatchHandler @ 009afc14 */
        local_290 = ppuVar18;
        ppuStack_288 = ppuVar19;
        local_280 = ppuVar16;
        ppuStack_278 = ppuVar17;
        local_270 = ppuVar22;
        ppuStack_268 = ppuVar23;
        local_260 = ppuVar20;
        ppuStack_258 = ppuVar21;
        local_248 = uVar5;
        local_244 = extraout_w1_01;
        local_238 = plVar8;
        uVar7 = FUN_0097deb8(&local_370);
        local_190 = local_2b0;
        local_480 = (undefined **)CONCAT26(uStack_23a,CONCAT24(uStack_23c,local_240));
        ppuStack_1a8 = ppuStack_2c8;
        local_1b0 = local_2d0;
        ppuStack_198 = ppuStack_2b8;
        local_1a0 = local_2c0;
        ppuStack_1e8 = ppuStack_308;
        local_1f0 = local_310;
        ppuStack_1d8 = ppuStack_2f8;
        local_1e0 = ppuStack_300;
        ppuStack_1c8 = ppuStack_2e8;
        local_1d0 = local_2f0;
        ppuStack_1b8 = ppuStack_2d8;
        local_1c0 = local_2e0;
        ppuStack_208 = ppuStack_328;
        local_210 = local_330;
        ppuStack_1f8 = ppuStack_318;
        local_200 = local_320;
        ppuStack_488 = (undefined **)CONCAT44(local_244,local_248);
        ppuStack_498 = ppuStack_258;
        local_4a0 = local_260;
        local_490 = local_250;
        ppuStack_4d8 = ppuStack_298;
        local_4e0 = local_2a0;
        ppuStack_4c8 = ppuStack_288;
        local_4d0 = local_290;
        ppuStack_4b8 = ppuStack_278;
        local_4c0 = local_280;
        ppuStack_4a8 = ppuStack_268;
        local_4b0 = local_270;
                    /* try { // try from 009af76c to 009af787 has its CatchHandler @ 009afc0c */
        FUN_009949b0(&local_520,lVar15,uVar7,&local_210,plVar8,&local_230,&local_4e0);
        ppuStack_4d8 = ppuStack_510;
        local_4e0 = ppuStack_518;
        local_4d0 = local_508;
        local_2a0 = (undefined **)0x1;
        ppuStack_298 = local_520;
        uVar14 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
        if (uVar14 == 0) {
                    /* try { // try from 009afb08 to 009afb47 has its CatchHandler @ 009afd8c */
          uVar14 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
                   lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
          plVar8 = (long *)pthread_getspecific((pthread_key_t)uVar14);
        }
        else {
          plVar8 = (long *)pthread_getspecific((pthread_key_t)uVar14);
        }
        if (plVar8 < (long *)0x2) {
          plVar8 = (long *)FUN_00996984(uVar14 & 0xffffffff,plVar8,0);
        }
        ppuVar17 = ppuStack_298;
        ppuVar16 = local_2a0;
        if (plVar8 == (long *)0x0) {
          local_210 = &PTR_DAT_00af5070;
          ppuStack_208 = (undefined **)FUN_0099f78c;
                    /* try { // try from 009afba0 to 009afbb7 has its CatchHandler @ 009afd8c */
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_fmt
                    (&DAT_002ab692,&local_210,&PTR_s__root__cargo_registry_src_index__00af5080);
        }
        if (*plVar8 == 0) {
          *plVar8 = -1;
          do {
            puVar13 = *ppuStack_298;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(ppuStack_298,0x10);
            if (bVar3) {
              *ppuStack_298 = puVar13 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((int)local_2a0 == 0) {
            if (-1 < (long)puVar13) {
              lVar15 = 0;
              goto LAB_009af810;
            }
          }
          else if (-1 < (long)puVar13) {
            lVar15 = 1;
LAB_009af810:
            ppuVar18 = (undefined **)plVar8[1];
            ppuVar19 = (undefined **)plVar8[2];
            plVar8[1] = lVar15;
            plVar8[2] = (long)ppuStack_298;
            *plVar8 = *plVar8 + 1;
            if (plVar8[3] == -1) {
              local_210 = ppuVar18;
              ppuStack_208 = ppuVar19;
                    /* try { // try from 009afb5c to 009afb73 has its CatchHandler @ 009afd34 */
                    /* WARNING: Subroutine does not return */
              core::panicking::panic_fmt
                        (&DAT_0037c56c,0x33,&PTR_s__root__cargo_registry_src_index__00af50c8);
            }
            local_440 = (undefined **)(plVar8[3] + 1);
            plVar8[3] = (long)local_440;
            ppuStack_208 = ppuStack_4d8;
            local_210 = local_4e0;
            local_200 = local_4d0;
                    /* try { // try from 009af858 to 009af85f has its CatchHandler @ 009afbe0 */
            local_450 = ppuVar18;
            ppuStack_448 = ppuVar19;
            FUN_00991dfc(&local_210);
            param_1[6] = ppuVar16;
            param_1[7] = ppuVar17;
            *param_1 = 1;
            *(undefined1 (*) [16])(param_1 + 8) = auVar24;
                    /* try { // try from 009af874 to 009af887 has its CatchHandler @ 009afbcc */
            FUN_0097c6e8(&PTR_FUN_00af47a0,&local_450,&local_440);
            if (local_450 == (undefined **)0x2) {
              return;
            }
            if (local_450 != (undefined **)0x0) {
              do {
                puVar13 = *ppuStack_448;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(ppuStack_448,0x10);
                if (bVar3) {
                  *ppuStack_448 = puVar13 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (puVar13 + -1 != (undefined *)0x0) {
                return;
              }
              DataMemoryBarrier(2,1);
              <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>>
              ::drop_slow(&ppuStack_448);
              return;
            }
            do {
              puVar13 = *ppuStack_448;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(ppuStack_448,0x10);
              if (bVar3) {
                *ppuStack_448 = puVar13 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (puVar13 + -1 != (undefined *)0x0) {
              return;
            }
            DataMemoryBarrier(2,1);
            <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>>
            ::drop_slow(&ppuStack_448);
            return;
          }
        }
        else {
          core::cell::panic_already_borrowed(&PTR_s__root__cargo_registry_src_index__00af50e0);
        }
      }
LAB_009afbc8:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x9afbcc);
      (*pcVar4)();
    }
  }
  else {
    local_330 = (undefined **)param_2[9];
    local_320 = (undefined **)CONCAT62(1,*(undefined2 *)((long)param_2 + 0xd5));
    local_320._0_4_ = CONCAT13(*(undefined1 *)((long)param_2 + 0xd7),(undefined3)local_320);
    local_320 = (undefined **)CONCAT44(uVar5,(undefined4)local_320);
    ppuStack_328 = (undefined **)&DAT_00000001;
    FUN_00988710(&local_210,&local_330);
    if (local_210 != (undefined **)0x2) {
      ppuStack_478 = (undefined **)CONCAT71(uStack_167,local_168);
      local_520 = local_210;
      ppuStack_518 = ppuStack_208;
      ppuStack_3a8 = ppuStack_158;
      local_3b0 = local_160;
      ppuStack_3c8 = ppuStack_178;
      local_3d0 = local_180;
      ppuStack_3c0 = local_170;
      local_3a0 = local_150;
      local_460 = local_150;
      ppuStack_408 = ppuStack_1b8;
      local_410 = local_1c0;
      ppuStack_3f8 = ppuStack_1a8;
      local_400 = local_1b0;
      ppuStack_3e8 = ppuStack_198;
      local_3f0 = local_1a0;
      ppuStack_3d8 = ppuStack_188;
      local_3e0 = local_190;
      ppuStack_448 = ppuStack_1f8;
      local_450 = local_200;
      ppuStack_438 = ppuStack_1e8;
      local_440 = local_1f0;
      ppuStack_428 = ppuStack_1d8;
      local_430 = local_1e0;
      ppuStack_418 = ppuStack_1c8;
      local_420 = local_1d0;
      local_508 = ppuStack_1f8;
      ppuStack_510 = local_200;
      ppuStack_4f8 = ppuStack_1e8;
      local_500 = local_1f0;
      ppuStack_4e8 = ppuStack_1d8;
      local_4f0 = local_1e0;
      ppuStack_4d8 = ppuStack_1c8;
      local_4e0 = local_1d0;
      ppuStack_488 = ppuStack_178;
      local_490 = local_180;
      local_480 = local_170;
      ppuStack_468 = ppuStack_158;
      local_470 = local_160;
      ppuStack_4b8 = ppuStack_1a8;
      local_4c0 = local_1b0;
      ppuStack_4a8 = ppuStack_198;
      local_4b0 = local_1a0;
      ppuStack_498 = ppuStack_188;
      local_4a0 = local_190;
      ppuStack_4c8 = ppuStack_1b8;
      local_4d0 = local_1c0;
                    /* try { // try from 009af34c to 009af353 has its CatchHandler @ 009afc58 */
      local_390 = FUN_009a46b8(param_2,param_2[10]);
      plVar8 = local_390._0_8_;
      do {
        lVar15 = *plVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = lVar15 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (-1 < lVar15) {
                    /* try { // try from 009af378 to 009af38f has its CatchHandler @ 009afccc */
        local_378 = plVar8;
        uVar5 = <tokio::util::rand::rt::tokio::util::rand::rt::RngSeedGenerator>::next_seed
                          (param_2 + 0x18);
        uVar6 = <tokio::util::rand::rt::tokio::util::rand::rt::RngSeedGenerator>::next_seed
                          (param_2 + 0x18);
        plVar12 = (long *)param_2[0xf];
        ppuStack_368 = ppuStack_518;
        local_370 = local_520;
        ppuStack_358 = local_508;
        local_360 = ppuStack_510;
        local_2b0 = local_460;
        ppuStack_348 = ppuStack_4f8;
        local_350 = local_500;
        ppuStack_338 = ppuStack_4e8;
        local_340 = local_4f0;
        ppuStack_2d8 = ppuStack_488;
        local_2e0 = local_490;
        ppuStack_2c8 = ppuStack_478;
        local_2d0 = local_480;
        ppuVar16 = (undefined **)0x0;
        ppuVar17 = (undefined **)0x0;
        ppuStack_2b8 = ppuStack_468;
        local_2c0 = local_470;
        ppuStack_308 = ppuStack_4b8;
        local_310 = local_4c0;
        ppuStack_2f8 = ppuStack_4a8;
        ppuStack_300 = local_4b0;
        ppuVar18 = (undefined **)0x0;
        ppuVar19 = (undefined **)0x0;
        ppuStack_2e8 = ppuStack_498;
        local_2f0 = local_4a0;
        ppuStack_328 = ppuStack_4d8;
        local_330 = local_4e0;
        ppuStack_318 = ppuStack_4c8;
        local_320 = local_4d0;
        if (plVar12 != (long *)0x0) {
          do {
            lVar15 = *plVar12;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar3) {
              *plVar12 = lVar15 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar15 < 0) goto LAB_009afbc8;
          ppuVar19 = (undefined **)param_2[0x10];
          ppuVar18 = (undefined **)param_2[0xf];
        }
        plVar12 = (long *)param_2[0x11];
        if (plVar12 != (long *)0x0) {
          do {
            lVar15 = *plVar12;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar3) {
              *plVar12 = lVar15 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar15 < 0) goto LAB_009afbc8;
          ppuVar17 = (undefined **)param_2[0x12];
          ppuVar16 = (undefined **)param_2[0x11];
        }
        ppuVar20 = (undefined **)0x0;
        ppuVar21 = (undefined **)0x0;
        ppuVar22 = (undefined **)0x0;
        ppuVar23 = (undefined **)0x0;
        plVar12 = (long *)param_2[0x13];
        if (plVar12 != (long *)0x0) {
          do {
            lVar15 = *plVar12;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar3) {
              *plVar12 = lVar15 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar15 < 0) goto LAB_009afbc8;
          ppuVar23 = (undefined **)param_2[0x14];
          ppuVar22 = (undefined **)param_2[0x13];
        }
        plVar12 = (long *)param_2[0x15];
        if (plVar12 != (long *)0x0) {
          do {
            lVar15 = *plVar12;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar3) {
              *plVar12 = lVar15 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar15 < 0) goto LAB_009afbc8;
          ppuVar21 = (undefined **)param_2[0x16];
          ppuVar20 = (undefined **)param_2[0x15];
        }
        local_240 = (undefined4)param_2[0x1a];
        local_2a0 = (undefined **)param_2[4];
        ppuStack_298 = (undefined **)param_2[0x17];
        uStack_23c = (undefined2)param_2[0x1b];
        local_250 = (undefined **)0x0;
        local_290 = ppuVar18;
        ppuStack_288 = ppuVar19;
        local_280 = ppuVar16;
        ppuStack_278 = ppuVar17;
        local_270 = ppuVar22;
        ppuStack_268 = ppuVar23;
        local_260 = ppuVar20;
        ppuStack_258 = ppuVar21;
        local_248 = uVar5;
        local_244 = extraout_w1;
        local_238 = plVar8;
                    /* try { // try from 009af4a0 to 009af4c7 has its CatchHandler @ 009afc60 */
        local_210 = (undefined **)std::thread::current::current();
        do {
          puVar13 = *local_210;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(local_210,0x10);
          if (bVar3) {
            *local_210 = puVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        local_218 = extraout_x11;
        if (puVar13 + -1 == (undefined *)0x0) {
          DataMemoryBarrier(2,1);
          <alloc[c1f8e832b0d782c7]::sync::Arc<std[17aff9129faa4dc5]::thread::thread::Inner,std[17aff9129faa4dc5]::alloc::System>>
          ::drop_slow(&local_210);
          local_218 = extraout_x11_00;
        }
        uVar1 = local_2a0._4_4_;
        if ((int)local_2a0 == 0) {
          uVar1 = 0x1f;
        }
        ppuVar16 = (undefined **)&DAT_0000001f;
        if (local_270 != (undefined **)0x0) {
          do {
            puVar13 = *local_270;
            bVar10 = 1;
            bVar3 = (bool)ExclusiveMonitorPass(local_270,0x10);
            if (bVar3) {
              *local_270 = puVar13 + 1;
              bVar10 = ExclusiveMonitorsStatus();
            }
            local_218 = (undefined **)(ulong)bVar10;
          } while (bVar10 != 0);
          ppuVar16 = ppuStack_268;
          if ((long)puVar13 < 0) goto LAB_009afbc8;
        }
        if (local_260 != (undefined **)0x0) {
          do {
            puVar13 = *local_260;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(local_260,0x10);
            if (bVar3) {
              *local_260 = puVar13 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          local_218 = ppuStack_258;
          if ((long)puVar13 < 0) goto LAB_009afbc8;
        }
        local_230 = local_270;
        local_220 = local_260;
                    /* try { // try from 009af8f4 to 009af8ff has its CatchHandler @ 009afbfc */
        uStack_228 = ppuVar16;
        FUN_00991948(&local_210,4);
        do {
          local_170 = (undefined **)DAT_00b0f6d0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(0xb0f6d0,0x10);
          if (bVar3) {
            cVar2 = ExclusiveMonitorsStatus();
            DAT_00b0f6d0 = DAT_00b0f6d0 + 1;
          }
        } while (cVar2 != '\0' || local_170 == (undefined **)0x0);
        local_3f0 = (undefined **)CONCAT26(uStack_23a,CONCAT24(uStack_23c,local_240));
        local_3e0 = ppuStack_208;
        ppuStack_3e8 = local_210;
        ppuStack_3f8 = (undefined **)CONCAT44(local_244,local_248);
        local_3d0 = ppuStack_1f8;
        ppuStack_3d8 = local_200;
        ppuStack_3c8 = local_1f0;
        ppuStack_408 = ppuStack_258;
        local_410 = local_260;
        local_400 = local_250;
        local_a0 = 0;
        ppuStack_448 = ppuStack_298;
        local_450 = local_2a0;
        ppuStack_438 = ppuStack_288;
        local_440 = local_290;
        local_168 = 0;
        ppuStack_428 = ppuStack_278;
        local_430 = local_280;
        ppuStack_418 = ppuStack_268;
        local_420 = local_270;
        local_140 = 0;
        local_138 = 0;
        ppuStack_b8 = ppuStack_2b8;
        local_c0 = local_2c0;
        ppuStack_c8 = ppuStack_2c8;
        local_d0 = local_2d0;
        local_160 = (undefined **)0x0;
        ppuStack_f8 = ppuStack_2f8;
        local_100 = ppuStack_300;
        ppuStack_108 = ppuStack_308;
        local_110 = local_310;
        local_150 = (undefined **)0x0;
        ppuStack_e8 = ppuStack_2e8;
        local_f0 = local_2f0;
        ppuStack_d8 = ppuStack_2d8;
        local_e0 = local_2e0;
        ppuStack_158 = (undefined **)0x0;
        ppuStack_128 = ppuStack_328;
        local_130 = local_330;
        ppuStack_118 = ppuStack_318;
        ppuStack_120 = local_320;
        local_148 = 0;
        local_b0 = local_2b0;
        ppuStack_78 = local_218;
        local_80 = local_220;
        ppuStack_88 = uStack_228;
        local_90 = local_230;
        local_70 = 0;
        local_1b0 = local_250;
        ppuStack_198 = local_210;
        ppuStack_188 = local_200;
        local_190 = ppuStack_208;
        ppuStack_178 = local_1f0;
        local_180 = ppuStack_1f8;
        ppuStack_1e8 = ppuStack_288;
        local_1f0 = local_290;
        ppuStack_1d8 = ppuStack_278;
        local_1e0 = local_280;
        ppuStack_1c8 = ppuStack_268;
        local_1d0 = local_270;
        ppuStack_1b8 = ppuStack_258;
        local_1c0 = local_260;
        local_a8 = local_238;
        ppuStack_208 = (undefined **)0x1;
        local_210 = (undefined **)0x1;
        ppuStack_1f8 = ppuStack_298;
        local_200 = local_2a0;
        ppuStack_1a8 = ppuStack_3f8;
        local_1a0 = local_3f0;
        local_98 = uVar6;
        local_94 = extraout_w1_00;
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        ppuVar16 = (undefined **)FUN_004b25a4(0x1a8,8);
        if (ppuVar16 == (undefined **)0x0) {
                    /* try { // try from 009afb4c to 009afb57 has its CatchHandler @ 009afd48 */
                    /* WARNING: Subroutine does not return */
          alloc::alloc::handle_alloc_error(8,0x1a8);
        }
        memcpy(ppuVar16,&local_210,0x1a8);
        local_230 = ppuVar16;
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        lVar15 = FUN_004b25a4(0x200,8);
        if (lVar15 == 0) {
                    /* try { // try from 009afbbc to 009afbc7 has its CatchHandler @ 009afbf4 */
                    /* WARNING: Subroutine does not return */
          alloc::raw_vec::handle_error(8,0x200);
        }
        local_1d0 = (undefined **)0x40;
        ppuStack_208 = ppuStack_368;
        local_210 = local_370;
        ppuStack_1f8 = ppuStack_358;
        local_200 = local_360;
        ppuStack_1b8 = (undefined **)0x0;
        local_1c0 = (undefined **)0x0;
        ppuStack_1e8 = ppuStack_348;
        local_1f0 = local_350;
        ppuStack_1d8 = ppuStack_338;
        local_1e0 = local_340;
        local_1b0 = (undefined **)((ulong)uVar1 << 0x20);
        ppuStack_1a8 = (undefined **)((ulong)ppuStack_1a8 & 0xffffffffffffff00);
        ppuStack_1c8 = (undefined **)lVar15;
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        puVar9 = (undefined8 *)FUN_004b25a4(0x70,8);
        if (puVar9 != (undefined8 *)0x0) {
          *param_1 = 0;
          puVar9[0xd] = ppuStack_1a8;
          puVar9[0xc] = local_1b0;
          puVar9[9] = ppuStack_1c8;
          puVar9[8] = local_1d0;
          puVar9[0xb] = ppuStack_1b8;
          puVar9[10] = local_1c0;
          param_1[5] = puVar9;
          param_1[6] = 0;
          param_1[7] = ppuVar16;
          puVar9[1] = ppuStack_208;
          *puVar9 = local_210;
          puVar9[3] = ppuStack_1f8;
          puVar9[2] = local_200;
          param_1[4] = 0;
          param_1[3] = 0;
          param_1[2] = 0;
          param_1[1] = 0;
          puVar9[5] = ppuStack_1e8;
          puVar9[4] = local_1f0;
          puVar9[7] = ppuStack_1d8;
          puVar9[6] = local_1e0;
          *(undefined1 (*) [16])(param_1 + 8) = local_390;
          return;
        }
                    /* try { // try from 009afb78 to 009afb83 has its CatchHandler @ 009afcfc */
                    /* WARNING: Subroutine does not return */
        alloc::alloc::handle_alloc_error(8,0x70);
      }
      goto LAB_009afbc8;
    }
  }
  *param_1 = local_210;
  param_1[1] = ppuStack_208;
  return;
}


// ===== 009afdd4  <tokio::runtime::context::current::tokio::runtime::context::Context>::set_current =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::context::current::tokio::runtime::context::Context>::set_current */

void __rustcall
<tokio::runtime::context::current::tokio::runtime::context::Context>::set_current
          (long *param_1,long *param_2,int *param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  long lVar8;
  
  if (*param_2 == 0) {
    iVar3 = *param_3;
    plVar7 = *(long **)(param_3 + 2);
    *param_2 = -1;
    do {
      lVar8 = *plVar7;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = lVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      if (lVar8 < 0) goto LAB_009afe8c;
      lVar8 = 0;
    }
    else {
      if (lVar8 < 0) {
LAB_009afe8c:
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x9afe90);
        (*pcVar6)();
      }
      lVar8 = 1;
    }
    lVar1 = param_2[1];
    lVar2 = param_2[2];
    param_2[1] = lVar8;
    param_2[2] = (long)plVar7;
    *param_2 = *param_2 + 1;
    if (param_2[3] != -1) {
      lVar8 = param_2[3] + 1;
      *param_1 = lVar1;
      param_1[1] = lVar2;
      param_2[3] = lVar8;
      param_1[2] = lVar8;
      return;
    }
  }
  else {
    core::cell::panic_already_borrowed(&PTR_s__root__cargo_registry_src_index__00af50e0);
  }
                    /* try { // try from 009afe74 to 009afe8b has its CatchHandler @ 009afe90 */
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_0037c56c,0x33,&PTR_s__root__cargo_registry_src_index__00af50c8);
}


// ===== 009afea8  FUN_009afea8 =====

ulong FUN_009afea8(undefined8 param_1,long param_2,int param_3)

{
  char cVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined1 uStack_31;
  
  if (param_3 == -1) {
    uVar3 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
    if (uVar3 == 0) {
      uVar3 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
              lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
      puVar2 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar3);
      if (puVar2 <= &DAT_00000001) goto LAB_009b0004;
    }
    else {
      puVar2 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar3);
      if (puVar2 <= &DAT_00000001) {
LAB_009b0004:
        puVar2 = (undefined1 *)FUN_00996984(uVar3 & 0xffffffff,puVar2,0);
      }
    }
    if ((puVar2 == (undefined1 *)0x0) || (puVar2[0x46] == '\x02')) {
      FUN_0097c84c(&uStack_31,param_1);
      return 1;
    }
    goto LAB_009affb0;
  }
  if ((param_2 == 0) && (param_3 == 0)) {
    return 0;
  }
  uVar3 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar3 == 0) {
    uVar3 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar2 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar3);
    if (puVar2 <= &DAT_00000001) goto LAB_009b003c;
  }
  else {
    puVar2 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar3);
    if (puVar2 <= &DAT_00000001) {
LAB_009b003c:
      puVar2 = (undefined1 *)FUN_00996984(uVar3 & 0xffffffff,puVar2,0);
    }
  }
  if ((puVar2 == (undefined1 *)0x0) || (puVar2[0x46] == '\x02')) {
    cVar1 = FUN_0099630c(&uStack_31,param_1,param_2,param_3);
    return (ulong)(cVar1 != '\x02');
  }
LAB_009affb0:
  if (((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) != 0) &&
     (uVar3 = std::panicking::panic_count::is_zero_slow_path(), (int)uVar3 == 0)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_0037c585,0x11b,&PTR_s__root__cargo_registry_src_index__00af50f8);
}


// ===== 009b0054  FUN_009b0054 =====

void FUN_009b0054(undefined8 param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if (*param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_0037c612,0x3d,&PTR_s__root__cargo_registry_src_index__00af5110);
  }
  lVar6 = param_2[1];
  pcVar3 = (char *)(lVar6 + 0xe8);
  if (*pcVar3 == '\0') {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
    if (bVar2) {
      *pcVar3 = '\x01';
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') {
      cVar1 = *(char *)(lVar6 + 0x118);
      goto joined_r0x009b00e4;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
            (lVar6 + 0xe8,param_2,0xffffffff);
  cVar1 = *(char *)(lVar6 + 0x118);
joined_r0x009b00e4:
  if (cVar1 == '\x01') {
    do {
      pcVar3 = (char *)(lVar6 + 0xe8);
      if (*pcVar3 != '\x01') {
        ClearExclusiveLocal();
        <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(pcVar3,0);
        return;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
      if (bVar2) {
        *pcVar3 = '\0';
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  else {
    pcVar3 = (char *)(lVar6 + 0xe8);
    *(undefined1 *)(lVar6 + 0x118) = 1;
    do {
      if (*pcVar3 != '\x01') {
        ClearExclusiveLocal();
        <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(lVar6 + 0xe8,0)
        ;
        lVar4 = *(long *)(lVar6 + 0x80);
        if (lVar4 == 0) {
          return;
        }
        goto LAB_009b010c;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
      if (bVar2) {
        *pcVar3 = '\0';
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    lVar4 = *(long *)(lVar6 + 0x80);
    if (lVar4 != 0) {
LAB_009b010c:
      lVar4 = lVar4 << 4;
      lVar5 = *(long *)(lVar6 + 0x78) + 8;
      do {
        FUN_0097e264(lVar5,lVar6 + 0x140);
        lVar4 = lVar4 + -0x10;
        lVar5 = lVar5 + 0x10;
      } while (lVar4 != 0);
    }
  }
  return;
}


// ===== 009b0174  FUN_009b0174 =====

void FUN_009b0174(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  void *pvVar4;
  code *pcVar5;
  int iVar6;
  ulong *puVar7;
  undefined1 *puVar8;
  void *pvVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long *plVar13;
  long local_c8;
  long *plStack_c0;
  long local_b8;
  void *pvStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  long local_88;
  long local_80;
  long *plStack_78;
  long local_70;
  void *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_40;
  
  if (*param_2 == 1) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_0037c664,0x35,&PTR_s__root__cargo_registry_src_index__00af51d0);
  }
  plVar13 = (long *)(param_1 + 0x20);
  do {
    pvVar9 = (void *)*plVar13;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar2) {
      *plVar13 = 0;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (pvVar9 == (void *)0x0) {
    if (((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) != 0) &&
       (iVar6 = std::panicking::panic_count::is_zero_slow_path(), iVar6 == 0)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_0037c630,0x69,&PTR_s__root__cargo_registry_src_index__00af5128);
  }
  plVar13 = (long *)param_2[1];
  do {
    lVar10 = *plVar13;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar2) {
      *plVar13 = lVar10 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
    puVar3 = PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  } while (cVar1 != '\0');
  if (lVar10 < 0) goto LAB_009b051c;
  local_b8 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_c8 = 0;
  local_98 = 8;
  uStack_90 = 0;
  uVar11 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  plStack_c0 = plVar13;
  pvStack_b0 = pvVar9;
  local_88 = param_1;
  if (uVar11 == 0) {
                    /* try { // try from 009b03e8 to 009b0443 has its CatchHandler @ 009b061c */
    uVar11 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
             lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar7 = (ulong *)pthread_getspecific((pthread_key_t)uVar11);
  }
  else {
    puVar7 = (ulong *)pthread_getspecific((pthread_key_t)uVar11);
  }
  if (puVar7 < (ulong *)0x2) {
    puVar7 = (ulong *)FUN_00996984(uVar11 & 0xffffffff,puVar7,0);
  }
  pvVar9 = pvStack_b0;
  if (puVar7 != (ulong *)0x0) {
    if (0x7ffffffffffffffe < *puVar7) {
                    /* try { // try from 009b0468 to 009b0473 has its CatchHandler @ 009b061c */
                    /* WARNING: Subroutine does not return */
      core::cell::panic_already_mutably_borrowed(&PTR_s__root__cargo_registry_src_index__00af4fb0);
    }
    if (puVar7[1] != 2) {
      plStack_78 = plStack_c0;
      local_80 = local_c8;
      local_68 = pvStack_b0;
      local_70 = local_b8;
      uStack_58 = uStack_a0;
      local_60 = local_a8;
      uStack_48 = uStack_90;
      uStack_50 = local_98;
      local_40 = local_88;
      if (local_c8 == 1) {
                    /* try { // try from 009b0478 to 009b049f has its CatchHandler @ 009b05e4 */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_fmt
                  (&DAT_0037c6ab,0x43,&PTR_s__root__cargo_registry_src_index__00af4f20);
      }
      if (local_b8 != 0) {
        core::cell::panic_already_borrowed(&PTR_s__root__cargo_registry_src_index__00af4f68);
        goto LAB_009b051c;
      }
      local_68 = (void *)0x0;
      if (pvStack_b0 == (void *)0x0) {
                    /* try { // try from 009b04a4 to 009b04bb has its CatchHandler @ 009b05d8 */
                    /* WARNING: Subroutine does not return */
        core::option::expect_failed
                  (&DAT_0037c453,0xc,&PTR_s__root__cargo_registry_src_index__00af4f38);
      }
      local_70 = 0;
      uVar11 = *(ulong *)puVar3;
      if (uVar11 == 0) {
                    /* try { // try from 009b04c0 to 009b04ef has its CatchHandler @ 009b0520 */
        uVar11 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
                 lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
        puVar8 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar11);
        if (puVar8 <= &DAT_00000001) goto LAB_009b04e0;
      }
      else {
        puVar8 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar11);
        if (puVar8 < (undefined1 *)0x2) {
LAB_009b04e0:
          puVar8 = (undefined1 *)FUN_00996984(uVar11 & 0xffffffff,puVar8,0);
        }
      }
      if (puVar8 == (undefined1 *)0x0) {
                    /* try { // try from 009b04f8 to 009b050b has its CatchHandler @ 009b0580 */
        FUN_0097cc54(pvVar9);
                    /* WARNING: Subroutine does not return */
        std::thread::local::panic_access_error(&PTR_s__nix_store_8006w282fgsx3273c878b_00af36e0);
      }
      uVar12 = *(undefined8 *)(puVar8 + 0x28);
      *(long **)(puVar8 + 0x28) = &local_80;
                    /* try { // try from 009b02f8 to 009b0303 has its CatchHandler @ 009b0574 */
      FUN_009b1690(pvVar9,plVar13 + 2);
      pvVar4 = local_68;
      *(undefined8 *)(puVar8 + 0x28) = uVar12;
      if (local_70 == 0) {
        local_70 = -1;
        if (local_68 == (void *)0x0) {
          local_70 = 0;
        }
        else {
                    /* try { // try from 009b0320 to 009b0327 has its CatchHandler @ 009b0538 */
          FUN_009ae1a0(local_68);
          free(pvVar4);
          local_70 = local_70 + 1;
        }
        local_68 = pvVar9;
                    /* try { // try from 009b0378 to 009b037f has its CatchHandler @ 009b0560 */
        <tokio::runtime::scheduler::current_thread::CoreGuard_as_core::ops::drop::Drop>::drop
                  (&local_80);
        FUN_009add9c(&local_80);
        return;
      }
                    /* try { // try from 009b0510 to 009b051b has its CatchHandler @ 009b05c4 */
      core::cell::panic_already_borrowed(&PTR_s__root__cargo_registry_src_index__00af4f50);
      goto LAB_009b051c;
    }
  }
  if (local_c8 == 1) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_0037c6ab,0x43,&PTR_s__root__cargo_registry_src_index__00af5140);
  }
  if (local_b8 == 0) {
    local_b8 = 0xffffffffffffffff;
    pvStack_b0 = (void *)0x0;
    if (pvVar9 == (void *)0x0) {
                    /* try { // try from 009b0448 to 009b0453 has its CatchHandler @ 009b0604 */
                    /* WARNING: Subroutine does not return */
      core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00af5158);
    }
    local_b8 = 0;
                    /* try { // try from 009b0244 to 009b024f has its CatchHandler @ 009b05c0 */
    FUN_009b1690(pvVar9,plVar13 + 2);
    pvVar4 = pvStack_b0;
    if (local_b8 == 0) {
      local_b8 = -1;
      if (pvStack_b0 == (void *)0x0) {
        local_b8 = 0;
      }
      else {
                    /* try { // try from 009b0268 to 009b026f has its CatchHandler @ 009b0584 */
        FUN_009ae1a0(pvStack_b0);
        free(pvVar4);
        local_b8 = local_b8 + 1;
      }
                    /* try { // try from 009b034c to 009b0353 has its CatchHandler @ 009b05ac */
      pvStack_b0 = pvVar9;
      <tokio::runtime::scheduler::current_thread::CoreGuard_as_core::ops::drop::Drop>::drop
                (&local_c8);
      FUN_009add9c(&local_c8);
      return;
    }
                    /* try { // try from 009b0458 to 009b0463 has its CatchHandler @ 009b05f4 */
    core::cell::panic_already_borrowed(&PTR_s__root__cargo_registry_src_index__00af5170);
  }
  else {
    core::cell::panic_already_borrowed(&PTR_s__root__cargo_registry_src_index__00af5188);
  }
LAB_009b051c:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x9b0520);
  (*pcVar5)();
}


// ===== 009b0634  <tokio::runtime::scheduler::current_thread::tokio::runtime::scheduler::current_thread::CurrentThread>::take_core =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::scheduler::current_thread::tokio::runtime::scheduler::current_thread::CurrentThread>::take_core
    */

void __rustcall
<tokio::runtime::scheduler::current_thread::tokio::runtime::scheduler::current_thread::CurrentThread>
::take_core(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = (long *)(param_2 + 0x20);
  do {
    lVar4 = *plVar5;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = 0;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 == 0) {
    *param_1 = 2;
    return;
  }
  plVar5 = (long *)*param_3;
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
    param_1[2] = 0;
    param_1[3] = lVar4;
    *param_1 = 0;
    param_1[1] = plVar5;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 8;
    param_1[7] = 0;
    param_1[8] = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x9b068c);
  (*pcVar3)();
}


// ===== 009b068c  <tokio::runtime::scheduler::current_thread::[0]::tokio::runtime::scheduler::current_thread::Core>::next_task =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::scheduler::current_thread::[0]::tokio::runtime::scheduler::current_thread::Core>::next_task
    */

long __rustcall
<tokio::runtime::scheduler::current_thread::[0]::tokio::runtime::scheduler::current_thread::Core>::
next_task(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  char *extraout_x9;
  long lVar10;
  undefined1 auVar11 [16];
  
  auVar11._8_8_ = param_2;
  auVar11._0_8_ = param_1;
  uVar3 = *(uint *)(param_1 + 100);
  if (uVar3 == 0) {
    auVar11 = core::panicking::panic_const::panic_const_rem_by_zero
                        (&PTR_s__root__cargo_registry_src_index__00af51a0);
    pcVar7 = extraout_x9;
LAB_009b07cc:
    ClearExclusiveLocal();
LAB_009b07d0:
    <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
              (auVar11._8_8_ + 0xa0,auVar11._8_8_,0xffffffff);
LAB_009b073c:
    lVar8 = auVar11._8_8_;
    param_1 = auVar11._0_8_;
    lVar9 = *(long *)(lVar8 + 0xc0);
    *(long *)(lVar8 + 0xc0) = lVar9 - (ulong)(lVar9 != 0);
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = *(long *)(lVar8 + 0xa8);
      if (lVar9 != 0) {
        lVar10 = *(long *)(lVar9 + 8);
        *(long *)(lVar8 + 0xa8) = lVar10;
        if (lVar10 == 0) {
          *(undefined8 *)(lVar8 + 0xb0) = 0;
        }
        *(undefined8 *)(lVar9 + 8) = 0;
      }
    }
    do {
      if (*pcVar7 != '\x01') {
        ClearExclusiveLocal();
        <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(pcVar7,0);
        break;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pcVar7,0x10);
      if (bVar5) {
        *pcVar7 = '\0';
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 != 0) {
      return lVar9;
    }
  }
  else {
    uVar6 = 0;
    if (uVar3 != 0) {
      uVar6 = *(uint *)(param_1 + 0x60) / uVar3;
    }
    if (*(uint *)(param_1 + 0x60) != uVar6 * uVar3) {
      lVar8 = *(long *)(param_1 + 0x58);
      if (lVar8 == 0) {
        if (*(long *)(param_2 + 0xc0) == 0) {
          return 0;
        }
        pcVar7 = (char *)(param_2 + 0xa0);
        if (*pcVar7 == '\0') {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pcVar7,0x10);
          if (bVar5) {
            *pcVar7 = '\x01';
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_009b06dc;
        }
        else {
          ClearExclusiveLocal();
        }
        <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
                  (param_2 + 0xa0,param_2,0xffffffff);
LAB_009b06dc:
        pcVar7 = (char *)(param_2 + 0xa0);
        lVar8 = *(long *)(param_2 + 0xc0);
        *(long *)(param_2 + 0xc0) = lVar8 - (ulong)(lVar8 != 0);
        if (lVar8 == 0) {
          lVar8 = 0;
        }
        else {
          lVar8 = *(long *)(param_2 + 0xa8);
          if (lVar8 != 0) {
            lVar9 = *(long *)(lVar8 + 8);
            *(long *)(param_2 + 0xa8) = lVar9;
            if (lVar9 == 0) {
              *(undefined8 *)(param_2 + 0xb0) = 0;
            }
            *(undefined8 *)(lVar8 + 8) = 0;
          }
        }
        do {
          if (*pcVar7 != '\x01') {
            ClearExclusiveLocal();
            <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(pcVar7,0);
            return lVar8;
          }
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pcVar7,0x10);
          if (bVar5) {
            *pcVar7 = '\0';
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        return lVar8;
      }
      goto LAB_009b0820;
    }
    if (*(long *)(param_2 + 0xc0) != 0) {
      pcVar7 = (char *)(param_2 + 0xa0);
      if (*pcVar7 != '\0') goto LAB_009b07cc;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pcVar7,0x10);
      if (bVar5) {
        *pcVar7 = '\x01';
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_009b07d0;
      goto LAB_009b073c;
    }
  }
  lVar8 = *(long *)(param_1 + 0x58);
  if (lVar8 == 0) {
    return 0;
  }
LAB_009b0820:
  uVar1 = *(long *)(param_1 + 0x50) + 1;
  uVar2 = 0;
  if (*(ulong *)(param_1 + 0x40) <= uVar1) {
    uVar2 = *(ulong *)(param_1 + 0x40);
  }
  lVar9 = *(long *)(*(long *)(param_1 + 0x48) + *(long *)(param_1 + 0x50) * 8);
  *(ulong *)(param_1 + 0x50) = uVar1 - uVar2;
  *(long *)(param_1 + 0x58) = lVar8 + -1;
  return lVar9;
}


// ===== 009b08a0  <tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::as_current_thread =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::as_current_thread */

long * __rustcall
<tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::as_current_thread
          (long *param_1)

{
  if (*param_1 != 1) {
    return param_1 + 1;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_0037c664,0x35,&PTR_s__root__cargo_registry_src_index__00af51d0);
}


// ===== 009b08d0  <tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::can_spawn_local_on_local_runtime =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::can_spawn_local_on_local_runtime
    */

bool __rustcall
<tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::
can_spawn_local_on_local_runtime(uint *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *local_8;
  
  if ((*param_1 & 1) != 0) {
    return false;
  }
  lVar5 = *(long *)(*(long *)(param_1 + 2) + 0x1a0);
  if (lVar5 != 0) {
    local_8 = (long *)std::thread::current::current();
    lVar3 = local_8[2];
    do {
      lVar4 = *local_8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(local_8,0x10);
      if (bVar2) {
        *local_8 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc[c1f8e832b0d782c7]::sync::Arc<std[17aff9129faa4dc5]::thread::thread::Inner,std[17aff9129faa4dc5]::alloc::System>>
      ::drop_slow(&local_8);
    }
    return lVar3 == lVar5;
  }
  return false;
}


// ===== 009b0954  <tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::current =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::current */

undefined8 __rustcall
<tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::current(undefined8 param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  ulong *puVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined1 local_34 [4];
  undefined1 *local_30;
  undefined *puStack_28;
  
  uVar9 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar9 == 0) {
    uVar9 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar4 = (ulong *)pthread_getspecific((pthread_key_t)uVar9);
    if (puVar4 <= &DAT_00000001) goto LAB_009b0a1c;
  }
  else {
    puVar4 = (ulong *)pthread_getspecific((pthread_key_t)uVar9);
    if (puVar4 <= &DAT_00000001) {
LAB_009b0a1c:
      puVar4 = (ulong *)FUN_00996984(uVar9 & 0xffffffff,puVar4,0);
    }
  }
  if (puVar4 != (ulong *)0x0) {
    uVar9 = *puVar4;
    if (0x7ffffffffffffffe < uVar9) {
                    /* WARNING: Subroutine does not return */
      core::cell::panic_already_mutably_borrowed(&PTR_s__root__cargo_registry_src_index__00af4fb0);
    }
    uVar7 = puVar4[1];
    *puVar4 = uVar9 + 1;
    if (uVar7 != 2) {
      plVar6 = (long *)puVar4[2];
      do {
        lVar8 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar8 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if ((uVar7 & 1) == 0) {
        if (lVar8 < 0) goto LAB_009b0a78;
        uVar5 = 0;
      }
      else {
        if (lVar8 < 0) {
LAB_009b0a78:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x9b0a7c);
          (*pcVar3)();
        }
        uVar5 = 1;
      }
      *puVar4 = *puVar4 - 1;
      return uVar5;
    }
    *puVar4 = uVar9;
  }
  local_34[0] = puVar4 == (ulong *)0x0;
  local_30 = local_34;
  puStack_28 = PTR_fmt_00b00e40;
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_002ab692,&local_30,param_1);
}


// ===== 009b0a7c  <tokio::runtime::scheduler::current_thread::[1]::tokio::runtime::scheduler::current_thread::Context>::park_yield =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::scheduler::current_thread::[1]::tokio::runtime::scheduler::current_thread::Context>::park_yield
    */

long * __rustcall
<tokio::runtime::scheduler::current_thread::[1]::tokio::runtime::scheduler::current_thread::Context>
::park_yield(long param_1,long *param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined **ppuVar5;
  void *__ptr;
  long local_b0;
  long lStack_a8;
  long lStack_a0;
  long local_98;
  long lStack_90;
  long local_88;
  long lStack_80;
  long local_78;
  long local_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long local_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  local_b0 = *param_2;
  *param_2 = 2;
  if (local_b0 == 2) {
                    /* try { // try from 009b0bfc to 009b0c13 has its CatchHandler @ 009b0cc8 */
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed(&DAT_0037c67e,0xe,&PTR_s__root__cargo_registry_src_index__00af51e8);
  }
  lStack_a0 = param_2[2];
  lStack_a8 = param_2[1];
  lStack_90 = param_2[4];
  local_98 = param_2[3];
  lStack_80 = param_2[6];
  local_88 = param_2[5];
  local_78 = param_2[7];
  if (*(long *)(param_1 + 8) == 0) {
    __ptr = *(void **)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
    if (__ptr == (void *)0x0) {
      lVar2 = 0;
    }
    else {
                    /* try { // try from 009b0aec to 009b0af3 has its CatchHandler @ 009b0c70 */
      FUN_009ae1a0(__ptr);
      free(__ptr);
      lVar2 = *(long *)(param_1 + 8) + 1;
    }
    *(long *)(param_1 + 8) = lVar2;
    *(long **)(param_1 + 0x10) = param_2;
                    /* try { // try from 009b0b18 to 009b0b2b has its CatchHandler @ 009b0cd8 */
    FUN_0098866c(&local_b0,param_3 + 0xd0,0,0);
    if (*(long *)(param_1 + 0x18) == 0) {
      ppuVar5 = &PTR_s__root__cargo_registry_src_index__00af37c8;
      do {
        *(undefined8 *)(param_1 + 0x18) = 0xffffffffffffffff;
        if (*(long *)(param_1 + 0x30) == 0) {
          *(undefined8 *)(param_1 + 0x18) = 0;
          if (*(long *)(param_1 + 8) == 0) {
            plVar4 = *(long **)(param_1 + 0x10);
            *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
            *(undefined8 *)(param_1 + 0x10) = 0;
            if (plVar4 == (long *)0x0) {
                    /* try { // try from 009b0c34 to 009b0c4b has its CatchHandler @ 009b0ca0 */
                    /* WARNING: Subroutine does not return */
              core::option::expect_failed
                        (&DAT_0037c453,0xc,&PTR_s__root__cargo_registry_src_index__00af4ed8);
            }
            *(undefined8 *)(param_1 + 8) = 0;
            lStack_68 = lStack_a8;
            local_70 = local_b0;
            lStack_58 = local_98;
            lStack_60 = lStack_a0;
            lStack_48 = local_88;
            local_50 = lStack_90;
            lStack_38 = local_78;
            lStack_40 = lStack_80;
            if (*plVar4 != 2) {
                    /* try { // try from 009b0bb8 to 009b0bbf has its CatchHandler @ 009b0c50 */
              FUN_009ad9c0(plVar4);
            }
            plVar4[1] = lStack_68;
            *plVar4 = local_70;
            plVar4[3] = lStack_58;
            plVar4[2] = lStack_60;
            plVar4[5] = lStack_48;
            plVar4[4] = local_50;
            plVar4[7] = lStack_38;
            plVar4[6] = lStack_40;
            return plVar4;
          }
          ppuVar5 = &PTR_s__root__cargo_registry_src_index__00af4ef0;
          break;
        }
        lVar2 = *(long *)(param_1 + 0x30) + -1;
        *(long *)(param_1 + 0x30) = lVar2;
        plVar4 = (long *)(*(long *)(param_1 + 0x28) + lVar2 * 0x10);
                    /* try { // try from 009b0b64 to 009b0b67 has its CatchHandler @ 009b0c8c */
        (**(code **)(*plVar4 + 8))(plVar4[1]);
        uVar3 = *(ulong *)(param_1 + 0x18);
        *(ulong *)(param_1 + 0x18) = uVar3 + 1;
      } while (0xfffffffffffffffe < uVar3);
    }
    else {
      ppuVar5 = &PTR_s__root__cargo_registry_src_index__00af37c8;
    }
                    /* try { // try from 009b0bf0 to 009b0bf7 has its CatchHandler @ 009b0cd8 */
    core::cell::panic_already_borrowed(ppuVar5);
  }
  else {
                    /* try { // try from 009b0c18 to 009b0c23 has its CatchHandler @ 009b0cb4 */
    core::cell::panic_already_borrowed(&PTR_s__root__cargo_registry_src_index__00af4f08);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x9b0c50);
  (*pcVar1)();
}


// ===== 009b0cf0  <tokio::runtime::scheduler::current_thread::[1]::tokio::runtime::scheduler::current_thread::Context>::park =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::scheduler::current_thread::[1]::tokio::runtime::scheduler::current_thread::Context>::park
    */

long * __rustcall
<tokio::runtime::scheduler::current_thread::[1]::tokio::runtime::scheduler::current_thread::Context>
::park(long param_1,long *param_2,long param_3)

{
  long *plVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  undefined **ppuVar5;
  void *pvVar6;
  long lVar7;
  long lVar8;
  long local_c0;
  long lStack_b8;
  long lStack_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  long lStack_90;
  long local_88;
  long local_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long local_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  local_c0 = *param_2;
  *param_2 = 2;
  if (local_c0 == 2) {
                    /* try { // try from 009b0fa0 to 009b0fb7 has its CatchHandler @ 009b10e8 */
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed(&DAT_0037c67e,0xe,&PTR_s__root__cargo_registry_src_index__00af5200);
  }
  lStack_b0 = param_2[2];
  lStack_b8 = param_2[1];
  lStack_a0 = param_2[4];
  local_a8 = param_2[3];
  lStack_90 = param_2[6];
  local_98 = param_2[5];
  local_88 = param_2[7];
  lVar7 = *(long *)(param_3 + 0x10);
  if (lVar7 == 0) {
LAB_009b0dd4:
    if (param_2[0xb] != 0) {
      lVar7 = *(long *)(param_3 + 0x20);
joined_r0x009b0de0:
      if (lVar7 == 0) {
LAB_009b0f30:
        lStack_78 = lStack_b8;
        local_80 = local_c0;
        lStack_68 = local_a8;
        lStack_70 = lStack_b0;
        lStack_58 = local_98;
        local_60 = lStack_a0;
        lStack_48 = local_88;
        lStack_50 = lStack_90;
        if (*param_2 != 2) {
                    /* try { // try from 009b0f4c to 009b0f53 has its CatchHandler @ 009b1064 */
          FUN_009ad9c0(param_2);
        }
        param_2[5] = lStack_58;
        param_2[4] = local_60;
        param_2[7] = lStack_48;
        param_2[6] = lStack_50;
        param_2[1] = lStack_78;
        *param_2 = local_80;
        param_2[3] = lStack_68;
        param_2[2] = lStack_70;
        return param_2;
      }
      if (*(long *)(param_1 + 8) != 0) {
                    /* try { // try from 009b0fe8 to 009b0ff3 has its CatchHandler @ 009b10ac */
        core::cell::panic_already_borrowed(&PTR_s__root__cargo_registry_src_index__00af4f08);
        goto LAB_009b103c;
      }
      pvVar6 = *(void **)(param_1 + 0x10);
      lVar8 = *(long *)(param_3 + 0x28);
      *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
      if (pvVar6 == (void *)0x0) {
        lVar4 = 0;
      }
      else {
                    /* try { // try from 009b0ecc to 009b0ed3 has its CatchHandler @ 009b1044 */
        FUN_009ae1a0(pvVar6);
        free(pvVar6);
        lVar4 = *(long *)(param_1 + 8) + 1;
      }
      *(long *)(param_1 + 8) = lVar4;
      *(long **)(param_1 + 0x10) = param_2;
                    /* try { // try from 009b0f0c to 009b0f13 has its CatchHandler @ 009b1120 */
      (**(code **)(lVar8 + 0x28))
                (lVar7 + (*(long *)(lVar8 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
      if (*(long *)(param_1 + 8) == 0) {
        param_2 = *(long **)(param_1 + 0x10);
        *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
        *(undefined8 *)(param_1 + 0x10) = 0;
        if (param_2 == (long *)0x0) {
                    /* try { // try from 009b0ff8 to 009b100f has its CatchHandler @ 009b10a8 */
                    /* WARNING: Subroutine does not return */
          core::option::expect_failed
                    (&DAT_0037c453,0xc,&PTR_s__root__cargo_registry_src_index__00af4ed8);
        }
        *(undefined8 *)(param_1 + 8) = 0;
        goto LAB_009b0f30;
      }
      goto LAB_009b0f8c;
    }
    if (*(long *)(param_1 + 8) != 0) {
                    /* try { // try from 009b1014 to 009b101f has its CatchHandler @ 009b1094 */
      core::cell::panic_already_borrowed(&PTR_s__root__cargo_registry_src_index__00af4f08);
      goto LAB_009b103c;
    }
    pvVar6 = *(void **)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
    if (pvVar6 == (void *)0x0) {
      lVar7 = 0;
    }
    else {
                    /* try { // try from 009b0e00 to 009b0e07 has its CatchHandler @ 009b1040 */
      FUN_009ae1a0(pvVar6);
      free(pvVar6);
      lVar7 = *(long *)(param_1 + 8) + 1;
    }
    *(long *)(param_1 + 8) = lVar7;
    *(long **)(param_1 + 0x10) = param_2;
                    /* try { // try from 009b0e2c to 009b0e37 has its CatchHandler @ 009b1120 */
    FUN_00988be0(&local_c0,param_3 + 0xd0);
    if (*(long *)(param_1 + 0x18) == 0) {
      ppuVar5 = &PTR_s__root__cargo_registry_src_index__00af37c8;
      do {
        *(undefined8 *)(param_1 + 0x18) = 0xffffffffffffffff;
        if (*(long *)(param_1 + 0x30) == 0) {
          *(undefined8 *)(param_1 + 0x18) = 0;
          if (*(long *)(param_1 + 8) != 0) goto LAB_009b0f8c;
          param_2 = *(long **)(param_1 + 0x10);
          *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
          *(undefined8 *)(param_1 + 0x10) = 0;
          if (param_2 == (long *)0x0) {
                    /* try { // try from 009b1024 to 009b103b has its CatchHandler @ 009b1090 */
                    /* WARNING: Subroutine does not return */
            core::option::expect_failed
                      (&DAT_0037c453,0xc,&PTR_s__root__cargo_registry_src_index__00af4ed8);
          }
          *(undefined8 *)(param_1 + 8) = 0;
          lVar7 = *(long *)(param_3 + 0x20);
          goto joined_r0x009b0de0;
        }
        lVar7 = *(long *)(param_1 + 0x30) + -1;
        *(long *)(param_1 + 0x30) = lVar7;
        plVar1 = (long *)(*(long *)(param_1 + 0x28) + lVar7 * 0x10);
                    /* try { // try from 009b0e70 to 009b0e73 has its CatchHandler @ 009b107c */
        (**(code **)(*plVar1 + 8))(plVar1[1]);
        uVar3 = *(ulong *)(param_1 + 0x18);
        *(ulong *)(param_1 + 0x18) = uVar3 + 1;
      } while (0xfffffffffffffffe < uVar3);
    }
    else {
      ppuVar5 = &PTR_s__root__cargo_registry_src_index__00af37c8;
    }
  }
  else {
    if (*(long *)(param_1 + 8) != 0) {
                    /* try { // try from 009b0fbc to 009b0fc7 has its CatchHandler @ 009b10d4 */
      core::cell::panic_already_borrowed(&PTR_s__root__cargo_registry_src_index__00af4f08);
      goto LAB_009b103c;
    }
    pvVar6 = *(void **)(param_1 + 0x10);
    lVar8 = *(long *)(param_3 + 0x18);
    *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
    if (pvVar6 == (void *)0x0) {
      lVar4 = 0;
    }
    else {
                    /* try { // try from 009b0d70 to 009b0d77 has its CatchHandler @ 009b1048 */
      FUN_009ae1a0(pvVar6);
      free(pvVar6);
      lVar4 = *(long *)(param_1 + 8) + 1;
    }
    *(long *)(param_1 + 8) = lVar4;
    *(long **)(param_1 + 0x10) = param_2;
                    /* try { // try from 009b0db0 to 009b0db7 has its CatchHandler @ 009b1120 */
    (**(code **)(lVar8 + 0x28))(lVar7 + (*(long *)(lVar8 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
    if (*(long *)(param_1 + 8) == 0) {
      param_2 = *(long **)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0x10) = 0;
      if (param_2 == (long *)0x0) {
                    /* try { // try from 009b0fcc to 009b0fe3 has its CatchHandler @ 009b10c0 */
                    /* WARNING: Subroutine does not return */
        core::option::expect_failed
                  (&DAT_0037c453,0xc,&PTR_s__root__cargo_registry_src_index__00af4ed8);
      }
      *(undefined8 *)(param_1 + 8) = 0;
      goto LAB_009b0dd4;
    }
LAB_009b0f8c:
    ppuVar5 = &PTR_s__root__cargo_registry_src_index__00af4ef0;
  }
                    /* try { // try from 009b0f94 to 009b0f9b has its CatchHandler @ 009b1120 */
  core::cell::panic_already_borrowed(ppuVar5);
LAB_009b103c:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x9b1040);
  (*pcVar2)();
}


// ===== 009b1138  FUN_009b1138 =====

undefined8
FUN_009b1138(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  ulong *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  uint local_2c;
  uint *local_28;
  undefined *puStack_20;
  int local_14;
  
  lVar7 = *param_2;
  uVar4 = *(uint *)(lVar7 + 0x20);
  if (0x80 < uVar4 - (int)((ulong)*(undefined8 *)(lVar7 + 0x18) >> 0x20)) {
    return 0;
  }
  lVar8 = *param_1;
  puVar1 = (ulong *)(lVar8 + 0x18);
  uVar14 = *puVar1;
  uVar9 = *(undefined8 *)(lVar8 + 0x20);
  if ((int)(uVar14 >> 0x20) != (int)uVar14) {
    return 0;
  }
LAB_009b1190:
  uVar12 = uVar14 >> 0x20;
  iVar10 = (int)(uVar14 >> 0x20);
  local_2c = (int)uVar9 - iVar10;
  if (local_2c == 0) {
    return 0;
  }
  local_2c = local_2c - (local_2c >> 1);
  uVar2 = local_2c + iVar10;
  uVar13 = uVar14 & 0xffffffff00000000 | (ulong)uVar2;
  do {
    uVar16 = *puVar1;
    if (uVar16 != uVar14) goto LAB_009b11c0;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = uVar13;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (0x80 < local_2c) {
    local_28 = &local_2c;
    puStack_20 = PTR_fmt_00b00c40;
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              (&DAT_002b9a31,&local_28,&PTR_s__root__cargo_registry_src_index__00af5218);
  }
  uVar15 = local_2c;
  if (local_2c < 2) {
    uVar15 = 1;
  }
  iVar10 = -uVar15;
  uVar15 = uVar4;
  do {
    uVar11 = (uint)uVar12;
    uVar3 = uVar15 & 0xff;
    bVar6 = iVar10 != -1;
    iVar10 = iVar10 + 1;
    uVar12 = (ulong)(uVar11 + 1);
    uVar15 = uVar15 + 1;
    *(undefined8 *)(*(long *)(lVar7 + 0x10) + (ulong)uVar3 * 8) =
         *(undefined8 *)(*(long *)(lVar8 + 0x10) + (ulong)(uVar11 & 0xff) * 8);
  } while (bVar6);
  do {
    uVar14 = *puVar1;
    if (*puVar1 != uVar13) {
      do {
        uVar12 = uVar14;
        ClearExclusiveLocal();
        local_28 = (uint *)CONCAT44(local_28._4_4_,(int)uVar12);
        local_14 = (int)(uVar12 >> 0x20);
        if (local_14 == (int)uVar12) {
                    /* WARNING: Subroutine does not return */
          core::panicking::assert_failed<u32,u32>
                    (1,&local_14,&local_28,0,param_5,
                     &PTR_s__root__cargo_registry_src_index__00af5230);
        }
        while (uVar14 = *puVar1, *puVar1 == uVar12) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar12 & 0xffffffff | uVar12 << 0x20;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_009b1248;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = CONCAT44(uVar2,uVar2);
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_009b1248:
  uVar4 = (local_2c - 1) + uVar4;
  uVar9 = *(undefined8 *)(*(long *)(lVar7 + 0x10) + (ulong)(uVar4 & 0xff) * 8);
  if (local_2c - 1 == 0) {
    return uVar9;
  }
  *(uint *)(lVar7 + 0x20) = uVar4;
  return uVar9;
LAB_009b11c0:
  ClearExclusiveLocal();
  uVar9 = *(undefined8 *)(lVar8 + 0x20);
  uVar14 = uVar16;
  if ((int)(uVar16 >> 0x20) != (int)uVar16) {
    return 0;
  }
  goto LAB_009b1190;
}


// ===== 009b12f4  <tokio::runtime::scheduler::current_thread::[2]::tokio::runtime::scheduler::current_thread::Handle>::waker_ref =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::scheduler::current_thread::[2]::tokio::runtime::scheduler::current_thread::Handle>::waker_ref
    */

undefined1  [16] __rustcall
<tokio::runtime::scheduler::current_thread::[2]::tokio::runtime::scheduler::current_thread::Handle>
::waker_ref(long *param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = *param_1;
  *(undefined4 *)(lVar1 + 0xd8) = 1;
  auVar2._8_8_ = lVar1 + 0x10;
  auVar2._0_8_ = &PTR_FUN_00af5248;
  return auVar2;
}


// ===== 009b1318  <tokio::runtime::scheduler::[3]::tokio::runtime::scheduler::Context>::expect_current_thread =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::scheduler::[3]::tokio::runtime::scheduler::Context>::expect_current_thread */

long * __rustcall
<tokio::runtime::scheduler::[3]::tokio::runtime::scheduler::Context>::expect_current_thread
          (long *param_1,undefined8 param_2)

{
  if (*param_1 != 1) {
    return param_1 + 1;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_0037c6ab,0x43,param_2);
}


// ===== 009b1344  <tokio::util::rand::tokio::util::rand::FastRand>::new =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::util::rand::tokio::util::rand::FastRand>::new */

undefined1  [16] __rustcall <tokio::util::rand::tokio::util::rand::FastRand>::new(void)

{
  uint uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  uVar2 = FUN_009c64a0();
  uVar1 = (uint)uVar2;
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  auVar3._8_4_ = uVar1;
  auVar3._0_8_ = uVar2 >> 0x20;
  auVar3._12_4_ = 0;
  return auVar3;
}


// ===== 009b1368  FUN_009b1368 =====

undefined8 FUN_009b1368(undefined8 param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar3 == 0) {
    uVar3 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    pvVar1 = pthread_getspecific((pthread_key_t)uVar3);
  }
  else {
    pvVar1 = pthread_getspecific((pthread_key_t)uVar3);
  }
  if (pvVar1 < (void *)0x2) {
    pvVar1 = (void *)FUN_00996984(uVar3 & 0xffffffff,pvVar1,0);
  }
  if (pvVar1 == (void *)0x0) {
    return 0;
  }
  uVar2 = *(undefined8 *)((long)pvVar1 + 0x30);
  *(undefined8 *)((long)pvVar1 + 0x30) = param_1;
  return uVar2;
}


// ===== 009b13f8  FUN_009b13f8 =====

void FUN_009b13f8(long *param_1)

{
  undefined1 *puVar1;
  long *plVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar3 == 0) {
    uVar3 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar1 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar3);
    if (puVar1 <= &DAT_00000001) goto LAB_009b149c;
  }
  else {
    puVar1 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar3);
    if (puVar1 < (undefined1 *)0x2) {
LAB_009b149c:
      puVar1 = (undefined1 *)FUN_00996984(uVar3 & 0xffffffff,puVar1,0);
    }
  }
  if (((puVar1 != (undefined1 *)0x0) && (puVar1[0x46] != '\x02')) &&
     (plVar2 = *(long **)(puVar1 + 0x28), plVar2 != (long *)0x0)) {
    if (*plVar2 == 1) {
      if (0x7ffffffffffffffe < (ulong)plVar2[2]) {
                    /* WARNING: Subroutine does not return */
        core::cell::panic_already_mutably_borrowed(&PTR_s__root__cargo_registry_src_index__00af4710)
        ;
      }
      if (plVar2[3] == 0) goto LAB_009b14b0;
    }
    FUN_0097dd84(plVar2 + 4,param_1);
    return;
  }
LAB_009b14b0:
                    /* WARNING: Could not recover jumptable at 0x009b14c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1[1]);
  return;
}


// ===== 009b14d0  tokio::runtime::context::thread_id =====

/* WARNING: Unknown calling convention: __rustcall */
/* tokio::runtime::context::thread_id */

undefined1  [16] __rustcall tokio::runtime::context::thread_id(void)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  code *pcVar5;
  void *pvVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  uVar9 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar9 == 0) {
    uVar9 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    pvVar6 = pthread_getspecific((pthread_key_t)uVar9);
  }
  else {
    pvVar6 = pthread_getspecific((pthread_key_t)uVar9);
  }
  if (pvVar6 < (void *)0x2) {
    pvVar6 = (void *)FUN_00996984(uVar9 & 0xffffffff,pvVar6,0);
  }
  if (pvVar6 == (void *)0x0) {
    return ZEXT816(0) << 0x40;
  }
  auVar10._0_8_ = *(long *)((long)pvVar6 + 0x20);
  lVar8 = DAT_00b10780;
  if (auVar10._0_8_ != 0) {
    auVar10._8_8_ = pvVar6;
    return auVar10;
  }
  while (lVar4 = DAT_00b10780, lVar8 != -1) {
    if (DAT_00b10780 == lVar8) {
      lVar1 = lVar8 + 1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(0xb10780,0x10);
      if (bVar3) {
        cVar2 = ExclusiveMonitorsStatus();
        DAT_00b10780 = lVar1;
      }
      lVar8 = lVar4;
      if (cVar2 == '\0') {
        *(long *)((long)pvVar6 + 0x20) = lVar1;
        auVar11._8_8_ = pvVar6;
        auVar11._0_8_ = lVar1;
        return auVar11;
      }
    }
    else {
      ClearExclusiveLocal();
      lVar8 = lVar4;
    }
  }
  FUN_009b4c28();
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  plVar7 = (long *)FUN_004b25a4(0x40,8);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x40);
  }
  plVar7[6] = 0;
  *(undefined1 *)(plVar7 + 7) = 0;
  plVar7[1] = 1;
  *plVar7 = 1;
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
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    auVar12._0_8_ = (undefined8 *)FUN_004b25a4(0x18,8);
    if (auVar12._0_8_ != (undefined8 *)0x0) {
      auVar12._0_8_[1] = 1;
      *auVar12._0_8_ = 1;
      auVar12._0_8_[2] = plVar7;
      auVar12._8_8_ = plVar7;
      return auVar12;
    }
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x18);
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x9b166c);
  (*pcVar5)();
}


// ===== 009b15b4  FUN_009b15b4 =====

void FUN_009b15b4(void)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  plVar4 = (long *)FUN_004b25a4(0x40,8);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x40);
  }
  plVar4[6] = 0;
  *(undefined1 *)(plVar4 + 7) = 0;
  plVar4[1] = 1;
  *plVar4 = 1;
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
    puVar5 = (undefined8 *)FUN_004b25a4(0x18,8);
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[1] = 1;
      *puVar5 = 1;
      puVar5[2] = plVar4;
      return;
    }
                    /* try { // try from 009b165c to 009b1667 has its CatchHandler @ 009b166c */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x18);
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x9b166c);
  (*pcVar3)();
}


// ===== 009b1690  FUN_009b1690 =====

long * FUN_009b1690(long *param_1,long param_2)

{
  char *pcVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  ulong *puVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar6;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  ulong uVar7;
  long lVar8;
  
                    /* try { // try from 009b16ac to 009b16b7 has its CatchHandler @ 009b18f4 */
  FUN_00988dd4(param_2 + 0x68,0);
  uVar6 = extraout_x1;
  while (param_1[0xb] != 0) {
    uVar7 = param_1[10] + 1;
    puVar5 = *(ulong **)(param_1[9] + param_1[10] * 8);
    uVar2 = 0;
    if ((ulong)param_1[8] <= uVar7) {
      uVar2 = param_1[8];
    }
    param_1[10] = uVar7 - uVar2;
    param_1[0xb] = param_1[0xb] + -1;
    do {
      uVar7 = *puVar5;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar5,0x10);
      if (bVar4) {
        *puVar5 = uVar7 - 0x40;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar7 = uVar7 >> 6;
    if (uVar7 == 1) {
                    /* try { // try from 009b16c4 to 009b16c7 has its CatchHandler @ 009b18f0 */
      (**(code **)(puVar5[2] + 0x10))();
      uVar6 = extraout_x1_00;
    }
    else if (uVar7 == 0) {
                    /* try { // try from 009b1714 to 009b172b has its CatchHandler @ 009b18fc */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: prev.ref_count() >= 1",0x27,
                 &PTR_s__root__cargo_registry_src_index__00af3f10);
    }
  }
  pcVar1 = (char *)(param_2 + 0xa0);
  if (*pcVar1 == '\0') {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar4) {
      *pcVar1 = '\x01';
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_009b1748;
  }
  else {
    ClearExclusiveLocal();
  }
  <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
            (param_2 + 0xa0,uVar6,0xffffffff);
  uVar6 = extraout_x1_04;
LAB_009b1748:
  if ((*(byte *)(param_2 + 0xb8) & 1) == 0) {
    *(undefined1 *)(param_2 + 0xb8) = 1;
  }
  do {
    if (*pcVar1 != '\x01') {
      ClearExclusiveLocal();
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(param_2 + 0xa0,0)
      ;
      uVar6 = extraout_x1_05;
      break;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar4) {
      *pcVar1 = '\0';
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  lVar8 = *(long *)(param_2 + 0xc0);
  while (lVar8 != 0) {
    if (*pcVar1 == '\0') {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar4) {
        *pcVar1 = '\x01';
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_009b1828;
    }
    else {
      ClearExclusiveLocal();
LAB_009b1828:
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
                (param_2 + 0xa0,uVar6,0xffffffff);
      uVar6 = extraout_x1_02;
    }
    lVar8 = *(long *)(param_2 + 0xc0);
    *(long *)(param_2 + 0xc0) = lVar8 - (ulong)(lVar8 != 0);
    if (lVar8 == 0) {
      puVar5 = (ulong *)0x0;
    }
    else {
      puVar5 = *(ulong **)(param_2 + 0xa8);
      if (puVar5 != (ulong *)0x0) {
        uVar7 = puVar5[1];
        *(ulong *)(param_2 + 0xa8) = uVar7;
        if (uVar7 == 0) {
          *(undefined8 *)(param_2 + 0xb0) = 0;
        }
        puVar5[1] = 0;
      }
    }
    do {
      if (*pcVar1 != '\x01') {
        ClearExclusiveLocal();
        <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow
                  (param_2 + 0xa0,0);
        uVar6 = extraout_x1_03;
        break;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar4) {
        *pcVar1 = '\0';
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (puVar5 == (ulong *)0x0) break;
    do {
      uVar7 = *puVar5;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar5,0x10);
      if (bVar4) {
        *puVar5 = uVar7 - 0x40;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar7 = uVar7 >> 6;
    if (uVar7 == 1) {
                    /* try { // try from 009b1788 to 009b184f has its CatchHandler @ 009b18ec */
      (**(code **)(puVar5[2] + 0x10))();
      uVar6 = extraout_x1_01;
    }
    else if (uVar7 == 0) {
                    /* try { // try from 009b188c to 009b18a3 has its CatchHandler @ 009b18f8 */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: prev.ref_count() >= 1",0x27,
                 &PTR_s__root__cargo_registry_src_index__00af3f10);
    }
    lVar8 = *(long *)(param_2 + 0xc0);
  }
  if (*(long *)(param_2 + 0x80) == 0) {
    if (*param_1 != 2) {
                    /* try { // try from 009b1868 to 009b1873 has its CatchHandler @ 009b18f4 */
      FUN_00988c84(param_1,param_2 + 0xd0);
    }
    return param_1;
  }
                    /* try { // try from 009b18a8 to 009b18e7 has its CatchHandler @ 009b18f4 */
                    /* WARNING: Subroutine does not return */
  core::panicking::panic(&DAT_0037c6cc,0x30,&PTR_s__root__cargo_registry_src_index__00af5268);
}


// ===== 009b1914  <tokio::runtime::handle::TryCurrentErrorKind_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::handle::TryCurrentErrorKind as core::fmt::Debug>::fmt */

void __rustcall
<tokio::runtime::handle::TryCurrentErrorKind_as_core::fmt::Debug>::fmt
          (char *param_1,undefined8 param_2)

{
  if (*param_1 == '\x01') {
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_0037c705,0x14);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_0037c6fc,9);
  return;
}


// ===== 009b1944  <tokio::runtime::handle::TryCurrentError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::handle::TryCurrentError as core::fmt::Display>::fmt */

void __rustcall
<tokio::runtime::handle::TryCurrentError_as_core::fmt::Display>::fmt
          (char *param_1,undefined8 param_2)

{
  if (*param_1 == '\x01') {
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_0037c4bd,0x3b);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_0037c719,0x53);
  return;
}


// ===== 009b1974  FUN_009b1974 =====

void FUN_009b1974(undefined8 *param_1,undefined8 param_2)

{
  long *local_18;
  
  local_18 = (long *)*param_1;
  if (*local_18 != 0) {
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002bd0bc,4,&local_18,&DAT_00af5308);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd198,4);
  return;
}


// ===== 009b19cc  FUN_009b19cc =====

void FUN_009b19cc(undefined8 *param_1,undefined8 param_2)

{
  long *local_18;
  
  local_18 = (long *)*param_1;
  if (*local_18 != 0) {
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002bd0bc,4,&local_18,&DAT_00af5328);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd198,4);
  return;
}


// ===== 009b1a24  FUN_009b1a24 =====

void FUN_009b1a24(undefined8 *param_1,undefined8 param_2)

{
  long *local_18;
  
  local_18 = (long *)*param_1;
  if (*local_18 != 0) {
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002bd0bc,4,&local_18,&DAT_00af5348);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd198,4);
  return;
}


// ===== 009b1a7c  FUN_009b1a7c =====

void FUN_009b1a7c(undefined8 *param_1,undefined8 param_2)

{
  long *local_18;
  
  local_18 = (long *)*param_1;
  if (*local_18 != 0) {
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002bd0bc,4,&local_18,&DAT_00af5368);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd198,4);
  return;
}


// ===== 009b1ad4  FUN_009b1ad4 =====

void FUN_009b1ad4(undefined8 *param_1,undefined8 param_2)

{
  long *local_18;
  
  local_18 = (long *)*param_1;
  if (*local_18 != 0) {
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002bd0bc,4,&local_18,&DAT_00af5388);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd198,4);
  return;
}


// ===== 009b1b2c  FUN_009b1b2c =====

void FUN_009b1b2c(undefined8 *param_1,undefined8 param_2)

{
  long *local_18;
  
  local_18 = (long *)*param_1;
  if (*local_18 != 0) {
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002bd0bc,4,&local_18,&DAT_00af53a8);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd198,4);
  return;
}


// ===== 009b1b84  FUN_009b1b84 =====

void FUN_009b1b84(undefined8 *param_1,undefined8 param_2)

{
  long *local_18;
  
  local_18 = (long *)*param_1;
  if (*local_18 != 0) {
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002bd0bc,4,&local_18,&DAT_00af53c8);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd198,4);
  return;
}


// ===== 009b1bdc  FUN_009b1bdc =====

void FUN_009b1bdc(undefined8 *param_1,undefined8 param_2)

{
  char *local_18;
  
  local_18 = (char *)*param_1 + 1;
  if (*(char *)*param_1 == '\x01') {
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002bd0bc,4,&local_18,&DAT_00af5408);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd198,4);
  return;
}


// ===== 009b1c38  FUN_009b1c38 =====

void FUN_009b1c38(long *param_1,undefined8 param_2)

{
  long local_18;
  
  local_18 = *param_1 + 8;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field2_finish
            (param_2,&DAT_0037c799,9,&DAT_0037c7a2,0xb,*param_1,&DAT_00af52c8,&DAT_0037c7ad,9,
             &local_18,&DAT_00af52e8);
  return;
}


// ===== 009b1ca8  FUN_009b1ca8 =====

void FUN_009b1ca8(undefined8 *param_1)

{
  <mio::net::uds::listener::UnixListener_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 009b1cb0  <tokio::runtime::scheduler::current_thread::Handle_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::scheduler::current_thread::Handle as core::fmt::Debug>::fmt */

void __rustcall
<tokio::runtime::scheduler::current_thread::Handle_as_core::fmt::Debug>::fmt
          (undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,&DAT_0037c76c,0x1e);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish(auStack_20);
  return;
}


// ===== 009b1ce8  FUN_009b1ce8 =====

void FUN_009b1ce8(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 in_x4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 local_28;
  undefined4 local_8;
  uint local_4;
  
  if (((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) == 0) ||
     (iVar4 = std::panicking::panic_count::is_zero_slow_path(), iVar4 != 0)) {
    lVar5 = *param_1;
    puVar1 = (ulong *)(lVar5 + 0x18);
    uVar6 = *puVar1;
    local_8 = (undefined4)(uVar6 >> 0x20);
    if (*(int *)(lVar5 + 0x20) != (int)uVar6) {
      uVar9 = uVar6 & 0xffffffff;
      do {
        local_4 = (uint)uVar9 + 1;
        uVar7 = (uint)(uVar6 >> 0x20);
        if (uVar7 == (uint)uVar9) {
          uVar8 = CONCAT44(local_4,local_4);
        }
        else {
          if (local_4 == uVar7) {
                    /* WARNING: Subroutine does not return */
            core::panicking::assert_failed<u32,u32>
                      (1,&local_8,&local_4,0,in_x4,&PTR_s__root__cargo_registry_src_index__00af51b8)
            ;
          }
          uVar8 = uVar6 & 0xffffffff00000000 | (ulong)local_4;
        }
        while (uVar9 = *puVar1, uVar9 == uVar6) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar8;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            local_28 = *(undefined8 *)(*(long *)(lVar5 + 0x10) + (uVar6 & 0xff) * 8);
            FUN_009ad0f8(&local_28);
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_fmt
                      (&DAT_0037c78a,0x1f,&PTR_s__root__cargo_registry_src_index__00af5280);
          }
        }
        ClearExclusiveLocal();
        local_8 = (undefined4)(uVar9 >> 0x20);
        uVar6 = uVar9;
      } while (*(int *)(lVar5 + 0x20) != (int)uVar9);
    }
  }
  return;
}


// ===== 009b1e04  <tokio::runtime::scheduler::current_thread::Handle_as_tokio::util::wake::Wake>::wake_by_ref =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::scheduler::current_thread::Handle as tokio::util::wake::Wake>::wake_by_ref */

void __rustcall
<tokio::runtime::scheduler::current_thread::Handle_as_tokio::util::wake::Wake>::wake_by_ref
          (long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *(undefined4 *)(lVar1 + 0xd8) = 1;
  FUN_00989458(lVar1 + 0xe0);
  return;
}


// ===== 009b1e1c  <tokio::runtime::scheduler::current_thread::Handle_as_tokio::util::wake::Wake>::wake =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::scheduler::current_thread::Handle as tokio::util::wake::Wake>::wake */

void __rustcall
<tokio::runtime::scheduler::current_thread::Handle_as_tokio::util::wake::Wake>::wake(long *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *local_28;
  
  *(undefined4 *)(param_1 + 0x1b) = 1;
                    /* try { // try from 009b1e40 to 009b1e47 has its CatchHandler @ 009b1e78 */
  local_28 = param_1;
  FUN_00989458(param_1 + 0x1c);
  do {
    lVar3 = *param_1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = lVar3 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar3 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>>::
    drop_slow(&local_28);
  }
  return;
}


// ===== 009b1ea8  <tokio::runtime::scheduler::current_thread::CoreGuard_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::scheduler::current_thread::CoreGuard as core::ops::drop::Drop>::drop */

void __rustcall
<tokio::runtime::scheduler::current_thread::CoreGuard_as_core::ops::drop::Drop>::drop(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  void *unaff_x21;
  void *__ptr;
  
  if (*param_1 == 1) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_0037c6ab,0x43,&PTR_s__root__cargo_registry_src_index__00af5298);
  }
  if (param_1[2] == 0) {
    lVar5 = param_1[3];
    param_1[2] = -1;
    param_1[3] = 0;
    if (lVar5 != 0) {
      lVar6 = param_1[8];
      plVar1 = (long *)(lVar6 + 0x20);
      do {
        __ptr = (void *)*plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (__ptr != (void *)0x0) {
                    /* try { // try from 009b1ef8 to 009b1eff has its CatchHandler @ 009b1f54 */
        FUN_009ae1a0(__ptr);
        free(__ptr);
      }
                    /* try { // try from 009b1f10 to 009b1f1b has its CatchHandler @ 009b1f74 */
      FUN_009862b8(lVar6,0);
    }
    param_1[2] = 0;
    return;
  }
  uVar4 = core::cell::panic_already_borrowed(&PTR_s__root__cargo_registry_src_index__00af52b0);
                    /* catch() { ... } // from try @ 009b1ef8 with catch @ 009b1f54 */
  free(unaff_x21);
  param_1[2] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_00ab2530(uVar4);
}


// ===== 009b1f7c  FUN_009b1f7c =====

void FUN_009b1f7c(long *param_1,undefined8 param_2)

{
  long *local_18;
  
  if (*param_1 != 0) {
    local_18 = param_1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002bd0bc,4,&local_18,&DAT_00af53e8);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd198,4);
  return;
}


// ===== 009b1fd4  FUN_009b1fd4 =====

void FUN_009b1fd4(long *param_1,undefined8 param_2)

{
  long *local_18;
  
  if (*param_1 == 1) {
    local_18 = param_1 + 1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002bd0bc,4,&local_18,&DAT_00af5428);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd198,4);
  return;
}


// ===== 009b2034  FUN_009b2034 =====

void FUN_009b2034(undefined8 param_1,long param_2)

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


// ===== 009b204c  <tokio::runtime::builder::Builder_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::builder::Builder as core::fmt::Debug>::fmt */

void __rustcall
<tokio::runtime::builder::Builder_as_core::fmt::Debug>::fmt(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_70 [16];
  undefined *local_60;
  undefined8 local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined *local_30;
  undefined8 local_28;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_70,param_2,&DAT_0037c7b6,7);
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (auStack_70,&DAT_0037c7bd,0xe,param_1,&DAT_00af5448);
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (uVar1,&DAT_0037c7cb,0x14,param_1 + 0x50,&DAT_00af52c8);
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (uVar1,&DAT_0037c80b,0xb,&PTR_DAT_00af5468,&DAT_00af5478);
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (uVar1,&DAT_0037c816,0x11,param_1 + 0x10,&DAT_00af5448);
  local_60 = *(undefined **)(param_1 + 0x58);
  if (local_60 != (undefined *)0x0) {
    local_58 = 3;
    local_60 = &DAT_0037c827;
  }
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (uVar1,&DAT_0037c82a,0xb,&local_60,&DAT_00af5498);
  local_50 = *(undefined **)(param_1 + 0x68);
  if (local_50 != (undefined *)0x0) {
    local_48 = 3;
    local_50 = &DAT_0037c827;
  }
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (uVar1,&DAT_0037c835,0xb,&local_50,&DAT_00af5498);
  local_40 = *(undefined **)(param_1 + 0x78);
  if (local_40 != (undefined *)0x0) {
    local_38 = 3;
    local_40 = &DAT_0037c827;
  }
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (uVar1,&DAT_0037c840,0xb,&local_40,&DAT_00af5498);
  local_30 = *(undefined **)(param_1 + 0x88);
  if (local_30 != (undefined *)0x0) {
    local_28 = 3;
    local_30 = &DAT_0037c827;
  }
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (uVar1,&DAT_0037c84b,0xc,&local_30,&DAT_00af5498);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 009b21e8  <tokio::runtime::blocking::schedule::BlockingSchedule_as_tokio::runtime::task::Schedule>::schedule =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::blocking::schedule::BlockingSchedule as
   tokio::runtime::task::Schedule>::schedule */

void __rustcall
<tokio::runtime::blocking::schedule::BlockingSchedule_as_tokio::runtime::task::Schedule>::schedule
          (void)

{
                    /* try { // try from 009b21f8 to 009b220f has its CatchHandler @ 009b2214 */
                    /* WARNING: Subroutine does not return */
  core::panicking::panic(&DAT_0037c857,0x28,&PTR_s__root__cargo_registry_src_index__00af54b8);
}


// ===== 009b2270  <tokio::runtime::scheduler::multi_thread::MultiThread_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::scheduler::multi_thread::MultiThread as core::fmt::Debug>::fmt */

void __rustcall
<tokio::runtime::scheduler::multi_thread::MultiThread_as_core::fmt::Debug>::fmt
          (undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,&DAT_0037c87f,0xb);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish(auStack_20);
  return;
}


// ===== 009b22a8  <tokio::runtime::scheduler::current_thread::CurrentThread_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tokio::runtime::scheduler::current_thread::CurrentThread as core::fmt::Debug>::fmt */

void __rustcall
<tokio::runtime::scheduler::current_thread::CurrentThread_as_core::fmt::Debug>::fmt
          (undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,&DAT_0037c88a,0xd);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish(auStack_20);
  return;
}


// ===== 009b22e0  <&[core::net::socket_addr::SocketAddr]as_tokio::net::addr::sealed::ToSocketAddrsPriv>::to_socket_addrs =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&[core::net::socket_addr::SocketAddr] as
   tokio::net::addr::sealed::ToSocketAddrsPriv>::to_socket_addrs */

void __rustcall
<&[core::net::socket_addr::SocketAddr]as_tokio::net::addr::sealed::ToSocketAddrsPriv>::
to_socket_addrs(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined1 *__dest;
  ulong __n;
  void *__src;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar3 = param_2[1];
  __n = uVar3 * 0x20;
  if (uVar3 >> 0x3b != 0 || 0x7ffffffffffffffc < __n) {
    uVar2 = 0;
LAB_009b2314:
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar2,__n);
  }
  __src = (void *)*param_2;
  if (__n == 0) {
    __dest = &DAT_00000004;
    uVar1 = 0;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar2 = 4;
    __dest = (undefined1 *)FUN_004b25a4(__n,4);
    uVar1 = uVar3;
    if (__dest == (undefined1 *)0x0) goto LAB_009b2314;
  }
  if (uVar3 != 0) {
    memcpy(__dest,__src,__n);
  }
  param_1[2] = __dest;
  param_1[3] = uVar1;
  *param_1 = 1;
  param_1[1] = __dest;
  param_1[4] = __dest + uVar3 * 0x20;
  return;
}


// ===== 009b2398  FUN_009b2398 =====

undefined1 * FUN_009b2398(undefined8 param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar2 == 0) {
    uVar2 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar1 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar2);
  }
  else {
    puVar1 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar2);
  }
  if (&DAT_00000001 < puVar1) {
    return puVar1;
  }
  puVar1 = (undefined1 *)FUN_00996984(uVar2 & 0xffffffff,puVar1,param_1);
  return puVar1;
}


// ===== 009b2410  FUN_009b2410 =====

void FUN_009b2410(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  auVar5 = <tokio::runtime::blocking::schedule::BlockingSchedule_as_tokio::runtime::task::Schedule>
           ::schedule();
  puVar2 = auVar5._8_8_;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)FUN_004b25a4(0x18,8);
  if (puVar1 != (undefined8 *)0x0) {
    uVar4 = *puVar2;
    uVar3 = puVar2[2];
    puVar1[1] = puVar2[1];
    *puVar1 = uVar4;
    puVar1[2] = uVar3;
    alloc::io::error::custom_owner_from_box(auVar5._0_8_ & 0xffffffff,puVar1,&PTR_FUN_00af56f0);
    <core::io::error::repr::[0]::core::io::error::repr::Repr>::new_custom();
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x18);
}


// ===== 009b241c  <alloc::io::error::core::io::error::Error>::new<alloc::string::String> =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::io::error::core::io::error::Error>::new<alloc::string::String> */

void __rustcall
<alloc::io::error::core::io::error::Error>::new<alloc::string::String>
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
    alloc::io::error::custom_owner_from_box(param_1,puVar1,&PTR_FUN_00af56f0);
    <core::io::error::repr::[0]::core::io::error::repr::Repr>::new_custom();
    return;
  }
                    /* try { // try from 009b2480 to 009b248b has its CatchHandler @ 009b2490 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x18);
}


// ===== 009b24b0  FUN_009b24b0 =====

void FUN_009b24b0(long *param_1)

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
                    /* try { // try from 009b24dc to 009b24e3 has its CatchHandler @ 009b2574 */
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


// ===== 009b2598  FUN_009b2598 =====

void FUN_009b2598(long *param_1)

{
  code *pcVar1;
  ulong uVar2;
  void *__ptr;
  undefined8 *puVar3;
  long local_28;
  
  if (*param_1 == 2) {
    __ptr = (void *)param_1[2];
    if (__ptr != (void *)0x0) {
      puVar3 = (undefined8 *)param_1[3];
      pcVar1 = (code *)*puVar3;
      if (pcVar1 != (code *)0x0) {
                    /* try { // try from 009b25c8 to 009b25cf has its CatchHandler @ 009b266c */
        (*pcVar1)(__ptr);
      }
      if (puVar3[1] != 0) {
        free(__ptr);
        return;
      }
    }
  }
  else {
    if (*param_1 != 0) {
      uVar2 = param_1[1] & 3;
      if ((1 < uVar2 - 2) && (uVar2 != 0)) {
        local_28 = param_1[1] - 1;
                    /* try { // try from 009b2624 to 009b262b has its CatchHandler @ 009b2654 */
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
      }
    }
    if (param_1[2] != 0) {
      free((void *)param_1[3]);
    }
  }
  return;
}


// ===== 009b2690  FUN_009b2690 =====

void FUN_009b2690(ulong *param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  void *__ptr;
  
  uVar4 = *param_1;
  if (uVar4 == 0xffffffffffffffff) {
    __ptr = (void *)param_1[2];
    if (__ptr != (void *)0x0) {
      puVar9 = (undefined8 *)param_1[3];
      pcVar5 = (code *)*puVar9;
      if (pcVar5 != (code *)0x0) {
                    /* try { // try from 009b26f4 to 009b26fb has its CatchHandler @ 009b279c */
        (*pcVar5)(__ptr);
      }
      if (puVar9[1] != 0) {
        free(__ptr);
        return;
      }
    }
  }
  else {
    uVar8 = param_1[3];
    if (uVar8 == 0) {
      lVar10 = 0;
      uVar4 = 0;
      lVar7 = 0;
    }
    else {
      uVar1 = 0;
      if (uVar4 <= param_1[2]) {
        uVar1 = uVar4;
      }
      lVar7 = param_1[2] - uVar1;
      lVar10 = uVar8 - (uVar4 - lVar7);
      if (uVar8 < uVar4 - lVar7 || lVar10 == 0) {
        lVar10 = 0;
        uVar4 = lVar7 + uVar8;
      }
    }
    uVar8 = param_1[1];
                    /* try { // try from 009b2734 to 009b2737 has its CatchHandler @ 009b27c4 */
    FUN_009976d8(uVar8 + lVar7 * 0x10,uVar4 - lVar7);
                    /* try { // try from 009b2738 to 009b2743 has its CatchHandler @ 009b27bc */
    FUN_009976d8(uVar8,lVar10);
    if (*param_1 != 0) {
      free((void *)param_1[1]);
    }
    plVar6 = (long *)param_1[4];
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
      <alloc::sync::[n]::alloc::sync::Arc<std::sys::fs::unix::InnerReadDir>>::drop_slow(param_1 + 4)
      ;
      return;
    }
  }
  return;
}


// ===== 009b2820  FUN_009b2820 =====

void FUN_009b2820(long *param_1)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  void *__ptr;
  long local_38;
  
  lVar1 = *param_1;
  if (lVar1 == -1) {
    __ptr = (void *)param_1[2];
    if (__ptr != (void *)0x0) {
      puVar4 = (undefined8 *)param_1[3];
      pcVar3 = (code *)*puVar4;
      if (pcVar3 != (code *)0x0) {
                    /* try { // try from 009b28a0 to 009b28a7 has its CatchHandler @ 009b2988 */
        (*pcVar3)(__ptr);
      }
      if (puVar4[1] != 0) {
        free(__ptr);
        return;
      }
    }
  }
  else {
    if (lVar1 == 0) {
      if (param_1[1] != 0) {
        uVar2 = param_1[2] & 3;
        if ((1 < uVar2 - 2) && (uVar2 != 0)) {
          local_38 = param_1[2] - 1;
                    /* try { // try from 009b2900 to 009b2947 has its CatchHandler @ 009b2970 */
          <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_38);
        }
      }
    }
    else if (lVar1 == 1) {
      uVar2 = param_1[1];
      if (((uVar2 != 0) && (1 < (uVar2 & 3) - 2)) && ((uVar2 & 3) != 0)) {
        local_38 = uVar2 - 1;
                    /* try { // try from 009b2880 to 009b2887 has its CatchHandler @ 009b2970 */
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_38);
      }
    }
    else if (param_1[1] != 0) {
      uVar2 = param_1[2] & 3;
      if ((1 < uVar2 - 2) && (uVar2 != 0)) {
        local_38 = param_1[2] - 1;
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_38);
      }
    }
    if (param_1[3] != 0) {
      free((void *)param_1[4]);
    }
  }
  return;
}


// ===== 009b29a8  FUN_009b29a8 =====

void FUN_009b29a8(long param_1)

{
                    /* try { // try from 009b29b8 to 009b29bf has its CatchHandler @ 009b2a04 */
  <bytes::bytes_mut::BytesMut_as_core::ops::drop::Drop>::drop(param_1 + 0x18);
  if (*(long *)(param_1 + 0x40) != 0) {
                    /* try { // try from 009b29d0 to 009b29d3 has its CatchHandler @ 009b29fc */
    (**(code **)(*(long *)(param_1 + 0x40) + 0x18))(*(undefined8 *)(param_1 + 0x48));
  }
  if (*(long *)(param_1 + 0x50) != 0) {
                    /* WARNING: Could not recover jumptable at 0x009b29ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x50) + 0x18))(*(undefined8 *)(param_1 + 0x58));
    return;
  }
  return;
}


// ===== 009b2a3c  FUN_009b2a3c =====

void FUN_009b2a3c(int *param_1)

{
  if (*param_1 == 1) {
    FUN_009b2690(param_1 + 2);
    return;
  }
  if (*param_1 == 0) {
    if (*(long *)(param_1 + 2) != -1) {
      FUN_009b2d60();
      return;
    }
  }
  return;
}


// ===== 009b2a68  FUN_009b2a68 =====

void FUN_009b2a68(int *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  void *__ptr;
  undefined8 *puVar6;
  
  if (*param_1 == 1) {
    if ((*(long *)(param_1 + 2) != 0) && (__ptr = *(void **)(param_1 + 4), __ptr != (void *)0x0)) {
      puVar6 = *(undefined8 **)(param_1 + 6);
      pcVar4 = (code *)*puVar6;
      if (pcVar4 != (code *)0x0) {
                    /* try { // try from 009b2acc to 009b2ad3 has its CatchHandler @ 009b2afc */
        (*pcVar4)(__ptr);
      }
      if (puVar6[1] != 0) {
        free(__ptr);
        return;
      }
    }
  }
  else if (*param_1 == 0) {
    plVar3 = *(long **)(param_1 + 2);
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
        <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::worker::Worker>>
        ::drop_slow();
        return;
      }
    }
  }
  return;
}


// ===== 009b2b20  FUN_009b2b20 =====

void FUN_009b2b20(int *param_1)

{
  if (*param_1 == 1) {
    FUN_009b2598(param_1 + 2);
    return;
  }
  if (((*param_1 == 0) && (*(long *)(param_1 + 2) != -1)) && (*(long *)(param_1 + 2) != 0)) {
    free(*(void **)(param_1 + 4));
    return;
  }
  return;
}


// ===== 009b2b58  FUN_009b2b58 =====

void FUN_009b2b58(int *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (*param_1 == 1) {
    FUN_009b2820(param_1 + 2);
    return;
  }
  if ((*param_1 == 0) && (*(long *)(param_1 + 2) != -1)) {
    plVar3 = *(long **)(param_1 + 0xe);
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 009b2ba0 to 009b2ba3 has its CatchHandler @ 009b2bdc */
      <alloc::sync::[n]::alloc::sync::Arc<std::fs::File>>::drop_slow();
    }
    if (*(long *)(param_1 + 6) != 0) {
      free(*(void **)(param_1 + 8));
      return;
    }
  }
  return;
}


// ===== 009b2bfc  FUN_009b2bfc =====

void FUN_009b2bfc(int *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (*param_1 == 1) {
    FUN_009b2820(param_1 + 2);
    return;
  }
  if ((*param_1 == 0) && (*(long *)(param_1 + 2) != -2)) {
    plVar3 = *(long **)(param_1 + 0xe);
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 009b2c44 to 009b2c47 has its CatchHandler @ 009b2c80 */
      <alloc::sync::[n]::alloc::sync::Arc<std::fs::File>>::drop_slow();
    }
    if (*(long *)(param_1 + 6) != 0) {
      free(*(void **)(param_1 + 8));
      return;
    }
  }
  return;
}


// ===== 009b2ca0  FUN_009b2ca0 =====

void FUN_009b2ca0(int *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (*param_1 == 1) {
    FUN_009b2820(param_1 + 2);
    return;
  }
  if ((*param_1 == 0) && (*(long *)(param_1 + 2) != -1)) {
    if (*(long *)(param_1 + 2) != 0) {
      free(*(void **)(param_1 + 4));
    }
    plVar3 = *(long **)(param_1 + 10);
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<std::fs::File>>::drop_slow();
      return;
    }
  }
  return;
}


// ===== 009b2d28  FUN_009b2d28 =====

void FUN_009b2d28(int *param_1)

{
  if (*param_1 == 1) {
    FUN_009b24b0(param_1 + 2);
    return;
  }
  if (((*param_1 == 0) && (*(long *)(param_1 + 2) != -1)) && (*(long *)(param_1 + 2) != 0)) {
    free(*(void **)(param_1 + 4));
    return;
  }
  return;
}


// ===== 009b2d60  FUN_009b2d60 =====

void FUN_009b2d60(ulong *param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  uVar7 = param_1[3];
  if (uVar7 == 0) {
    lVar8 = 0;
    uVar4 = 0;
    lVar6 = 0;
  }
  else {
    uVar4 = *param_1;
    uVar1 = 0;
    if (uVar4 <= param_1[2]) {
      uVar1 = uVar4;
    }
    lVar6 = param_1[2] - uVar1;
    lVar8 = uVar7 - (uVar4 - lVar6);
    if (uVar7 < uVar4 - lVar6 || lVar8 == 0) {
      lVar8 = 0;
      uVar4 = lVar6 + uVar7;
    }
  }
  uVar7 = param_1[1];
                    /* try { // try from 009b2dc0 to 009b2dc3 has its CatchHandler @ 009b2e30 */
  FUN_009976d8(uVar7 + lVar6 * 0x10,uVar4 - lVar6);
                    /* try { // try from 009b2dc4 to 009b2dcf has its CatchHandler @ 009b2e28 */
  FUN_009976d8(uVar7,lVar8);
  if (*param_1 != 0) {
    free((void *)param_1[1]);
  }
  plVar5 = (long *)param_1[4];
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
    <alloc::sync::[n]::alloc::sync::Arc<std::sys::fs::unix::InnerReadDir>>::drop_slow(param_1 + 4);
    return;
  }
  return;
}


// ===== 009b2e8c  FUN_009b2e8c =====

void FUN_009b2e8c(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
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
                    /* try { // try from 009b2eb8 to 009b2ebb has its CatchHandler @ 009b2ee4 */
    <alloc::sync::[n]::alloc::sync::Arc<std::fs::File>>::drop_slow();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    free(*(void **)(param_1 + 0x18));
    return;
  }
  return;
}


// ===== 009b2f04  FUN_009b2f04 =====

void FUN_009b2f04(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (*param_1 != 0) {
    free((void *)param_1[1]);
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
    <alloc::sync::[n]::alloc::sync::Arc<std::fs::File>>::drop_slow(param_1 + 4);
    return;
  }
  return;
}


// ===== 009b2f60  FUN_009b2f60 =====

void FUN_009b2f60(long *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  if (param_1[4] != 0) {
    lVar5 = param_1[1];
    lVar6 = 0x140;
    if ((int)*param_1 == 0) {
      lVar6 = 0xe0;
    }
    if (*(int *)(lVar5 + lVar6 + 0x80) == -1) {
                    /* try { // try from 009b3034 to 009b304b has its CatchHandler @ 009b3058 */
                    /* WARNING: Subroutine does not return */
      core::option::expect_failed
                ("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
                 ,0x73,&PTR_s__root__cargo_registry_src_index__00af55c0);
    }
                    /* try { // try from 009b2fa0 to 009b2fb3 has its CatchHandler @ 009b3058 */
    uVar3 = FUN_009b4558(param_1);
    FUN_009a2bd8(lVar5 + lVar6 + 0x50,uVar3);
  }
  if (*param_1 == 0) {
    plVar4 = (long *)param_1[1];
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
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>>::
      drop_slow();
    }
  }
  else {
    plVar4 = (long *)param_1[1];
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
                    /* try { // try from 009b2fdc to 009b3003 has its CatchHandler @ 009b3050 */
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>>
      ::drop_slow();
    }
  }
  if ((param_1[4] != 0) && (param_1[9] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x009b3024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[9] + 0x18))(param_1[10]);
    return;
  }
  return;
}


// ===== 009b308c  FUN_009b308c =====

void FUN_009b308c(long *param_1)

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


// ===== 009b30d8  FUN_009b30d8 =====

void FUN_009b30d8(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* try { // try from 009b30f8 to 009b30fb has its CatchHandler @ 009b3138 */
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


// ===== 009b3170  FUN_009b3170 =====

void FUN_009b3170(void *param_1,undefined8 *param_2)

{
  if (param_1 != (void *)0x0) {
    if ((code *)*param_2 != (code *)0x0) {
                    /* try { // try from 009b3194 to 009b319b has its CatchHandler @ 009b31cc */
      (*(code *)*param_2)(param_1);
    }
    if (param_2[1] != 0) {
      free(param_1);
      return;
    }
  }
  return;
}


// ===== 009b31ec  FUN_009b31ec =====

void FUN_009b31ec(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x009b31fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 8) + 0x18))(*(undefined8 *)(param_1 + 0x10));
    return;
  }
  return;
}


// ===== 009b3204  FUN_009b3204 =====

void FUN_009b3204(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 009b321c  thunk_FUN_009752a8 =====

void thunk_FUN_009752a8(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iStack_60;
  
  iVar1 = tokio::runtime::task::harness::can_read_output(param_1,param_1 + 0x78);
  if (iVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x38) = 2;
    iStack_60 = (int)uVar3;
    if (iStack_60 != 1) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                ("JoinHandle polled after completion",0x45,
                 &PTR_s__root__cargo_registry_src_index__00af3698);
    }
    lVar5 = *(long *)(param_1 + 0x48);
    lVar4 = *(long *)(param_1 + 0x40);
    lVar7 = *(long *)(param_1 + 0x58);
    lVar6 = *(long *)(param_1 + 0x50);
    lVar9 = *(long *)(param_1 + 0x68);
    lVar8 = *(long *)(param_1 + 0x60);
    lVar2 = *(long *)(param_1 + 0x70);
    if (*param_2 != -2) {
      FUN_00973e98(param_2);
    }
    param_2[5] = lVar9;
    param_2[4] = lVar8;
    param_2[1] = lVar5;
    *param_2 = lVar4;
    param_2[3] = lVar7;
    param_2[2] = lVar6;
    param_2[6] = lVar2;
  }
  return;
}


// ===== 009b3220  thunk_FUN_00975be4 =====

void thunk_FUN_00975be4(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  void *__ptr;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  int iStack_50;
  
  iVar1 = tokio::runtime::task::harness::can_read_output(param_1,param_1 + 0x58);
  if (iVar1 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x38) = 2;
    iStack_50 = (int)uVar5;
    if (iStack_50 != 1) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                ("JoinHandle polled after completion",0x45,
                 &PTR_s__root__cargo_registry_src_index__00af3698);
    }
    lVar7 = *(long *)(param_1 + 0x48);
    lVar6 = *(long *)(param_1 + 0x40);
    lVar2 = *(long *)(param_1 + 0x50);
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
    param_2[2] = lVar7;
    param_2[1] = lVar6;
    param_2[3] = lVar2;
  }
  return;
}


// ===== 009b3224  thunk_FUN_00976524 =====

void thunk_FUN_00976524(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iStack_60;
  
  iVar1 = tokio::runtime::task::harness::can_read_output(param_1,param_1 + 0x78);
  if (iVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x38) = 2;
    iStack_60 = (int)uVar3;
    if (iStack_60 != 1) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                ("JoinHandle polled after completion",0x45,
                 &PTR_s__root__cargo_registry_src_index__00af3698);
    }
    lVar5 = *(long *)(param_1 + 0x48);
    lVar4 = *(long *)(param_1 + 0x40);
    lVar7 = *(long *)(param_1 + 0x58);
    lVar6 = *(long *)(param_1 + 0x50);
    lVar9 = *(long *)(param_1 + 0x68);
    lVar8 = *(long *)(param_1 + 0x60);
    lVar2 = *(long *)(param_1 + 0x70);
    if (*param_2 != -1) {
      FUN_00973da0(param_2);
    }
    param_2[5] = lVar9;
    param_2[4] = lVar8;
    param_2[1] = lVar5;
    *param_2 = lVar4;
    param_2[3] = lVar7;
    param_2[2] = lVar6;
    param_2[6] = lVar2;
  }
  return;
}


// ===== 009b3228  thunk_FUN_00976e54 =====

void thunk_FUN_00976e54(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iStack_60;
  
  iVar1 = tokio::runtime::task::harness::can_read_output(param_1,param_1 + 0x78);
  if (iVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x38) = 2;
    iStack_60 = (int)uVar3;
    if (iStack_60 != 1) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                ("JoinHandle polled after completion",0x45,
                 &PTR_s__root__cargo_registry_src_index__00af3698);
    }
    lVar5 = *(long *)(param_1 + 0x48);
    lVar4 = *(long *)(param_1 + 0x40);
    lVar7 = *(long *)(param_1 + 0x58);
    lVar6 = *(long *)(param_1 + 0x50);
    lVar9 = *(long *)(param_1 + 0x68);
    lVar8 = *(long *)(param_1 + 0x60);
    lVar2 = *(long *)(param_1 + 0x70);
    if (*param_2 != -2) {
      FUN_00974028(param_2);
    }
    param_2[5] = lVar9;
    param_2[4] = lVar8;
    param_2[1] = lVar5;
    *param_2 = lVar4;
    param_2[3] = lVar7;
    param_2[2] = lVar6;
    param_2[6] = lVar2;
  }
  return;
}


// ===== 009b322c  thunk_FUN_00977790 =====

void thunk_FUN_00977790(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iStack_60;
  
  iVar1 = tokio::runtime::task::harness::can_read_output(param_1,param_1 + 0x78);
  if (iVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x38) = 2;
    iStack_60 = (int)uVar3;
    if (iStack_60 != 1) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                ("JoinHandle polled after completion",0x45,
                 &PTR_s__root__cargo_registry_src_index__00af3698);
    }
    lVar5 = *(long *)(param_1 + 0x48);
    lVar4 = *(long *)(param_1 + 0x40);
    lVar7 = *(long *)(param_1 + 0x58);
    lVar6 = *(long *)(param_1 + 0x50);
    lVar9 = *(long *)(param_1 + 0x68);
    lVar8 = *(long *)(param_1 + 0x60);
    lVar2 = *(long *)(param_1 + 0x70);
    if (*param_2 != -2) {
      FUN_00974028(param_2);
    }
    param_2[5] = lVar9;
    param_2[4] = lVar8;
    param_2[1] = lVar5;
    *param_2 = lVar4;
    param_2[3] = lVar7;
    param_2[2] = lVar6;
    param_2[6] = lVar2;
  }
  return;
}


// ===== 009b3230  thunk_FUN_00977790 =====

void thunk_FUN_00977790(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iStack_60;
  
  iVar1 = tokio::runtime::task::harness::can_read_output(param_1,param_1 + 0x78);
  if (iVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x38) = 2;
    iStack_60 = (int)uVar3;
    if (iStack_60 != 1) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                ("JoinHandle polled after completion",0x45,
                 &PTR_s__root__cargo_registry_src_index__00af3698);
    }
    lVar5 = *(long *)(param_1 + 0x48);
    lVar4 = *(long *)(param_1 + 0x40);
    lVar7 = *(long *)(param_1 + 0x58);
    lVar6 = *(long *)(param_1 + 0x50);
    lVar9 = *(long *)(param_1 + 0x68);
    lVar8 = *(long *)(param_1 + 0x60);
    lVar2 = *(long *)(param_1 + 0x70);
    if (*param_2 != -2) {
      FUN_00974028(param_2);
    }
    param_2[5] = lVar9;
    param_2[4] = lVar8;
    param_2[1] = lVar5;
    *param_2 = lVar4;
    param_2[3] = lVar7;
    param_2[2] = lVar6;
    param_2[6] = lVar2;
  }
  return;
}


// ===== 009b3234  thunk_FUN_00978908 =====

void thunk_FUN_00978908(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iStack_60;
  
  iVar1 = tokio::runtime::task::harness::can_read_output(param_1,param_1 + 0x78);
  if (iVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x38) = 2;
    iStack_60 = (int)uVar3;
    if (iStack_60 != 1) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                ("JoinHandle polled after completion",0x45,
                 &PTR_s__root__cargo_registry_src_index__00af3698);
    }
    lVar5 = *(long *)(param_1 + 0x48);
    lVar4 = *(long *)(param_1 + 0x40);
    lVar7 = *(long *)(param_1 + 0x58);
    lVar6 = *(long *)(param_1 + 0x50);
    lVar9 = *(long *)(param_1 + 0x68);
    lVar8 = *(long *)(param_1 + 0x60);
    lVar2 = *(long *)(param_1 + 0x70);
    if (*param_2 != -2) {
      FUN_00974028(param_2);
    }
    param_2[5] = lVar9;
    param_2[4] = lVar8;
    param_2[1] = lVar5;
    *param_2 = lVar4;
    param_2[3] = lVar7;
    param_2[2] = lVar6;
    param_2[6] = lVar2;
  }
  return;
}


// ===== 009b3238  thunk_FUN_00976524 =====

void thunk_FUN_00976524(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iStack_60;
  
  iVar1 = tokio::runtime::task::harness::can_read_output(param_1,param_1 + 0x78);
  if (iVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x38) = 2;
    iStack_60 = (int)uVar3;
    if (iStack_60 != 1) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                ("JoinHandle polled after completion",0x45,
                 &PTR_s__root__cargo_registry_src_index__00af3698);
    }
    lVar5 = *(long *)(param_1 + 0x48);
    lVar4 = *(long *)(param_1 + 0x40);
    lVar7 = *(long *)(param_1 + 0x58);
    lVar6 = *(long *)(param_1 + 0x50);
    lVar9 = *(long *)(param_1 + 0x68);
    lVar8 = *(long *)(param_1 + 0x60);
    lVar2 = *(long *)(param_1 + 0x70);
    if (*param_2 != -1) {
      FUN_00973da0(param_2);
    }
    param_2[5] = lVar9;
    param_2[4] = lVar8;
    param_2[1] = lVar5;
    *param_2 = lVar4;
    param_2[3] = lVar7;
    param_2[2] = lVar6;
    param_2[6] = lVar2;
  }
  return;
}


// ===== 009b323c  thunk_FUN_00976524 =====

void thunk_FUN_00976524(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iStack_60;
  
  iVar1 = tokio::runtime::task::harness::can_read_output(param_1,param_1 + 0x78);
  if (iVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x38) = 2;
    iStack_60 = (int)uVar3;
    if (iStack_60 != 1) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                ("JoinHandle polled after completion",0x45,
                 &PTR_s__root__cargo_registry_src_index__00af3698);
    }
    lVar5 = *(long *)(param_1 + 0x48);
    lVar4 = *(long *)(param_1 + 0x40);
    lVar7 = *(long *)(param_1 + 0x58);
    lVar6 = *(long *)(param_1 + 0x50);
    lVar9 = *(long *)(param_1 + 0x68);
    lVar8 = *(long *)(param_1 + 0x60);
    lVar2 = *(long *)(param_1 + 0x70);
    if (*param_2 != -1) {
      FUN_00973da0(param_2);
    }
    param_2[5] = lVar9;
    param_2[4] = lVar8;
    param_2[1] = lVar5;
    *param_2 = lVar4;
    param_2[3] = lVar7;
    param_2[2] = lVar6;
    param_2[6] = lVar2;
  }
  return;
}


// ===== 009b3240  thunk_FUN_00976524 =====

void thunk_FUN_00976524(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iStack_60;
  
  iVar1 = tokio::runtime::task::harness::can_read_output(param_1,param_1 + 0x78);
  if (iVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x38) = 2;
    iStack_60 = (int)uVar3;
    if (iStack_60 != 1) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                ("JoinHandle polled after completion",0x45,
                 &PTR_s__root__cargo_registry_src_index__00af3698);
    }
    lVar5 = *(long *)(param_1 + 0x48);
    lVar4 = *(long *)(param_1 + 0x40);
    lVar7 = *(long *)(param_1 + 0x58);
    lVar6 = *(long *)(param_1 + 0x50);
    lVar9 = *(long *)(param_1 + 0x68);
    lVar8 = *(long *)(param_1 + 0x60);
    lVar2 = *(long *)(param_1 + 0x70);
    if (*param_2 != -1) {
      FUN_00973da0(param_2);
    }
    param_2[5] = lVar9;
    param_2[4] = lVar8;
    param_2[1] = lVar5;
    *param_2 = lVar4;
    param_2[3] = lVar7;
    param_2[2] = lVar6;
    param_2[6] = lVar2;
  }
  return;
}


// ===== 009b3244  thunk_FUN_00976524 =====

void thunk_FUN_00976524(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iStack_60;
  
  iVar1 = tokio::runtime::task::harness::can_read_output(param_1,param_1 + 0x78);
  if (iVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x38) = 2;
    iStack_60 = (int)uVar3;
    if (iStack_60 != 1) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                ("JoinHandle polled after completion",0x45,
                 &PTR_s__root__cargo_registry_src_index__00af3698);
    }
    lVar5 = *(long *)(param_1 + 0x48);
    lVar4 = *(long *)(param_1 + 0x40);
    lVar7 = *(long *)(param_1 + 0x58);
    lVar6 = *(long *)(param_1 + 0x50);
    lVar9 = *(long *)(param_1 + 0x68);
    lVar8 = *(long *)(param_1 + 0x60);
    lVar2 = *(long *)(param_1 + 0x70);
    if (*param_2 != -1) {
      FUN_00973da0(param_2);
    }
    param_2[5] = lVar9;
    param_2[4] = lVar8;
    param_2[1] = lVar5;
    *param_2 = lVar4;
    param_2[3] = lVar7;
    param_2[2] = lVar6;
    param_2[6] = lVar2;
  }
  return;
}


