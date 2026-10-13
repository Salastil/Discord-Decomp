// ===== 009e8a84  FUN_009e8a84 =====

void FUN_009e8a84(ulong param_1)

{
  long local_18;
  
  if (((param_1 != 0) && (1 < (param_1 & 3) - 2)) && ((param_1 & 3) != 0)) {
    local_18 = param_1 - 1;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
  }
  return;
}


// ===== 009e8ad0  FUN_009e8ad0 =====

void FUN_009e8ad0(ulong param_1)

{
  long local_18;
  
  if ((1 < (param_1 & 3) - 2) && ((param_1 & 3) != 0)) {
    local_18 = param_1 - 1;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
  }
  return;
}


// ===== 009e8b18  FUN_009e8b18 =====

void FUN_009e8b18(void *param_1)

{
  pthread_key_t __key;
  int iVar1;
  
  __key = *(pthread_key_t *)((long)param_1 + 4);
  pthread_setspecific(__key,&DAT_00000001);
  free(param_1);
  iVar1 = pthread_setspecific(__key,(void *)0x0);
                    /* try { // try from 009e8b4c to 009e8b4f has its CatchHandler @ 009e8b5c */
  std::sys::thread_local::guard::key::enable(iVar1);
  return;
}


// ===== 009e8b68  <parking_lot::once::parking_lot::once::Once>::call_once_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <parking_lot::once::parking_lot::once::Once>::call_once_slow */

void __rustcall
<parking_lot::once::parking_lot::once::Once>::call_once_slow
          (byte *param_1,ulong param_2,undefined8 param_3,long param_4)

{
  ulong *puVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  char cVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  uint uVar12;
  int iVar13;
  bool bVar14;
  uint uVar15;
  ulong uVar16;
  long *plVar17;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  puVar8 = PTR_NUM_THREADS_00b01190;
  puVar7 = PTR___RUST_STD_INTERNAL_VAL_00b01188;
  puVar6 = PTR_HASHTABLE_00b01180;
  bVar3 = *param_1;
  if ((bVar3 & 1) != 0) {
LAB_009e8f54:
    DataMemoryBarrier(2,1);
    return;
  }
  uVar12 = 0;
LAB_009e8bd8:
  uVar15 = (uint)bVar3;
  if ((param_2 & 1) == 0) {
    do {
      if ((uVar15 >> 1 & 1) != 0) {
        DataMemoryBarrier(2,1);
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_fmt
                  ("Once instance has previously been poisone",0x55,
                   &PTR_s__root__cargo_registry_src_index__00af7aa0);
      }
      bVar3 = (byte)uVar15;
      if ((uVar15 >> 2 & 1) == 0) {
        bVar2 = *param_1;
        if (bVar2 == bVar3) {
          cVar5 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(param_1,0x10);
          if (bVar14) {
            *param_1 = bVar3 & 0xf8 | 4;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
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
        if (bVar14) {
          uVar12 = 0;
          goto LAB_009e8f84;
        }
      }
      else {
        if ((uVar15 >> 3 & 1) != 0) goto LAB_009e8cf0;
        if (uVar12 < 10) goto LAB_009e8e4c;
        bVar2 = *param_1;
        if (bVar2 == bVar3) {
          cVar5 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(param_1,0x10);
          if (bVar14) {
            *param_1 = bVar3 | 8;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
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
        if (bVar14) goto LAB_009e8cf0;
      }
      uVar15 = (uint)bVar2;
      if ((bVar2 & 1) != 0) goto LAB_009e8f54;
    } while( true );
  }
  do {
    bVar3 = (byte)uVar15;
    if ((uVar15 >> 2 & 1) == 0) {
      bVar2 = *param_1;
      if (bVar2 == bVar3) {
        cVar5 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar14) {
          *param_1 = bVar3 & 0xf8 | 4;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') {
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
      uVar9 = (uint)bVar2;
      if (bVar14) {
        uVar12 = uVar15 >> 1 & 1;
LAB_009e8f84:
                    /* try { // try from 009e8f88 to 009e8f8f has its CatchHandler @ 009e8fe4 */
        (**(code **)(param_4 + 0x20))(param_3,uVar12);
        do {
          bVar3 = *param_1;
          cVar5 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(param_1,0x10);
          if (bVar14) {
            *param_1 = 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((bVar3 >> 3 & 1) == 0) {
          return;
        }
        FUN_009e9030(param_1);
        return;
      }
    }
    else {
      if ((uVar15 >> 3 & 1) != 0) goto LAB_009e8cf0;
      if (uVar12 < 10) break;
      bVar2 = *param_1;
      uVar9 = (uint)bVar2;
      if (bVar2 == bVar3) {
        cVar5 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar14) {
          *param_1 = bVar3 | 8;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') goto LAB_009e8cf0;
      }
      else {
        ClearExclusiveLocal();
      }
    }
    uVar15 = uVar9;
    if ((uVar15 & 1) != 0) goto LAB_009e8f54;
  } while( true );
LAB_009e8e4c:
  if (uVar12 < 3) {
    iVar13 = 2 << (ulong)(uVar12 & 0x1f);
    do {
      InstructionSynchronizationBarrier();
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
  }
  else {
    std::thread::functions::yield_now();
  }
  bVar3 = *param_1;
  uVar12 = uVar12 + 1;
  goto joined_r0x009e8e8c;
LAB_009e8cf0:
  bVar14 = false;
  uVar16 = *(ulong *)puVar7;
  if (uVar16 == 0) {
    uVar16 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
             lazy_init(puVar7);
    puVar10 = (undefined8 *)pthread_getspecific((pthread_key_t)uVar16);
    if (puVar10 <= &DAT_00000001) goto LAB_009e8f38;
  }
  else {
    puVar10 = (undefined8 *)pthread_getspecific((pthread_key_t)uVar16);
    if (puVar10 <= &DAT_00000001) {
LAB_009e8f38:
      puVar10 = (undefined8 *)FUN_009e88e4(uVar16 & 0xffffffff,puVar10,0);
    }
  }
  if (puVar10 == (undefined8 *)0x0) {
                    /* try { // try from 009e8d2c to 009e8d33 has its CatchHandler @ 009e8fe0 */
    <parking_lot_core::parking_lot::[1]::parking_lot_core::parking_lot::ThreadData>::new(&local_88);
    bVar14 = true;
    uStack_a8 = uStack_80;
    local_b0 = local_88;
    local_98 = uStack_70;
    uStack_a0 = local_78;
    local_90 = local_68;
    puVar10 = &local_b0;
  }
LAB_009e8d54:
  plVar17 = *(long **)puVar6;
  if (plVar17 == (long *)0x0) {
    plVar17 = (long *)parking_lot_core::parking_lot::create_hashtable();
    uVar11 = plVar17[1];
    uVar16 = (ulong)((long)param_1 * -0x61c8864680b583eb) >> ((ulong)(uint)-(int)plVar17[3] & 0x3f);
    if (uVar11 <= uVar16) goto LAB_009e8fcc;
  }
  else {
    uVar11 = plVar17[1];
    uVar16 = (ulong)((long)param_1 * -0x61c8864680b583eb) >> ((ulong)(uint)-(int)plVar17[3] & 0x3f);
    if (uVar11 <= uVar16) {
LAB_009e8fcc:
                    /* try { // try from 009e8fcc to 009e8fd7 has its CatchHandler @ 009e900c */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (uVar16,uVar11,&PTR_s__root__cargo_registry_src_index__00af7ab8);
    }
  }
  puVar1 = (ulong *)(*plVar17 + uVar16 * 0x40);
  if (*puVar1 == 0) {
    cVar5 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 != '\0') goto LAB_009e8de4;
  }
  else {
    ClearExclusiveLocal();
LAB_009e8de4:
    <parking_lot_core::word_lock::parking_lot_core::word_lock::WordLock>::lock_slow();
  }
  if (*(long **)puVar6 != plVar17) {
    do {
      uVar16 = *puVar1;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar16 - 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((3 < uVar16) && (((uint)uVar16 >> 1 & 1) == 0)) {
                    /* try { // try from 009e8db4 to 009e8def has its CatchHandler @ 009e8fdc */
      <parking_lot_core::word_lock::parking_lot_core::word_lock::WordLock>::unlock_slow();
    }
    goto LAB_009e8d54;
  }
  if (*param_1 == 0xc) {
    *(undefined1 *)((long)puVar10 + 0x24) = 0;
    puVar10[1] = 0;
    *puVar10 = param_1;
    puVar10[3] = 0;
    *(undefined4 *)(puVar10 + 4) = 1;
    if (puVar1[1] == 0) {
      puVar1[1] = (ulong)puVar10;
    }
    else {
      *(undefined8 **)(puVar1[2] + 8) = puVar10;
    }
    puVar1[2] = (ulong)puVar10;
    do {
      uVar16 = *puVar1;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar16 - 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((3 < uVar16) && (((uint)uVar16 >> 1 & 1) == 0)) {
                    /* try { // try from 009e8ebc to 009e8f47 has its CatchHandler @ 009e8fe0 */
      <parking_lot_core::word_lock::parking_lot_core::word_lock::WordLock>::unlock_slow();
    }
    while ((int)puVar10[4] != 0) {
      syscall(0x62,puVar10 + 4,0x80,1,0);
    }
  }
  else {
    do {
      uVar16 = *puVar1;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar16 - 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((3 < uVar16) && (((uint)uVar16 >> 1 & 1) == 0)) {
                    /* try { // try from 009e8e44 to 009e8e47 has its CatchHandler @ 009e8fe0 */
      <parking_lot_core::word_lock::parking_lot_core::word_lock::WordLock>::unlock_slow();
    }
  }
  if (bVar14) {
    do {
      cVar5 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(puVar8,0x10);
      if (bVar14) {
        *(long *)puVar8 = *(long *)puVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  bVar3 = *param_1;
  uVar12 = 0;
joined_r0x009e8e8c:
  if ((bVar3 & 1) != 0) goto LAB_009e8f54;
  goto LAB_009e8bd8;
}


// ===== 009e9030  FUN_009e9030 =====

void FUN_009e9030(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong *puVar10;
  ulong *puVar11;
  long lVar12;
  ulong *puVar13;
  undefined8 local_150;
  ulong local_148;
  ulong *local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  ulong local_108;
  ulong *local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  ulong auStack_c0 [2];
  ulong *local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  ulong uStack_78;
  long local_70;
  ulong local_68;
  
  puVar4 = PTR_HASHTABLE_00b01180;
LAB_009e9074:
  plVar5 = *(long **)puVar4;
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)parking_lot_core::parking_lot::create_hashtable();
    uVar6 = plVar5[1];
    uVar7 = (ulong)(param_1 * -0x61c8864680b583eb) >> ((ulong)(uint)-(int)plVar5[3] & 0x3f);
    if (uVar6 <= uVar7) goto LAB_009e931c;
  }
  else {
    uVar6 = plVar5[1];
    uVar7 = (ulong)(param_1 * -0x61c8864680b583eb) >> ((ulong)(uint)-(int)plVar5[3] & 0x3f);
    if (uVar6 <= uVar7) {
LAB_009e931c:
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (uVar7,uVar6,&PTR_s__root__cargo_registry_src_index__00af7ab8);
    }
  }
  puVar1 = (ulong *)(*plVar5 + uVar7 * 0x40);
  if (*puVar1 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 != '\0') goto LAB_009e9104;
    plVar8 = *(long **)puVar4;
  }
  else {
    ClearExclusiveLocal();
LAB_009e9104:
    <parking_lot_core::word_lock::parking_lot_core::word_lock::WordLock>::lock_slow(puVar1);
    plVar8 = *(long **)puVar4;
  }
  if (plVar8 != plVar5) {
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((3 < uVar6) && (((uint)uVar6 >> 1 & 1) == 0)) {
      <parking_lot_core::word_lock::parking_lot_core::word_lock::WordLock>::unlock_slow(puVar1);
    }
    goto LAB_009e9074;
  }
  plVar5 = (long *)puVar1[1];
  local_108 = 0;
  local_150 = 0;
  if (plVar5 != (long *)0x0) {
    puVar13 = puVar1 + 1;
    plVar8 = (long *)0x0;
    do {
      while( true ) {
        plVar9 = plVar5;
        plVar5 = (long *)plVar9[1];
        if (*plVar9 != param_1) break;
        *puVar13 = (ulong)plVar5;
        if ((long *)puVar1[2] == plVar9) {
          puVar1[2] = (ulong)plVar8;
          plVar9[2] = 0;
          *(undefined4 *)(plVar9 + 4) = 0;
        }
        else {
          plVar9[2] = 0;
          *(undefined4 *)(plVar9 + 4) = 0;
        }
        puVar10 = local_140;
        uVar6 = local_148;
        puVar11 = &local_148;
        uVar7 = local_108;
        if (local_108 < 9) {
          puVar10 = &local_148;
          uVar6 = local_108;
          puVar11 = &local_108;
          uVar7 = 8;
        }
        if (uVar6 == uVar7) {
                    /* try { // try from 009e91ec to 009e91f3 has its CatchHandler @ 009e9330 */
          FUN_009e9ff0(&local_150);
          puVar10 = local_140;
          uVar6 = local_148;
          puVar11 = &local_148;
        }
        puVar10[uVar6] = (ulong)(plVar9 + 4);
        *puVar11 = *puVar11 + 1;
        if (plVar5 == (long *)0x0) goto LAB_009e9200;
      }
      puVar13 = (ulong *)(plVar9 + 1);
      plVar8 = plVar9;
    } while (plVar5 != (long *)0x0);
  }
LAB_009e9200:
  do {
    uVar6 = *puVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = uVar6 - 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((3 < uVar6) && (((uint)uVar6 >> 1 & 1) == 0)) {
                    /* try { // try from 009e9310 to 009e9317 has its CatchHandler @ 009e932c */
    <parking_lot_core::word_lock::parking_lot_core::word_lock::WordLock>::unlock_slow(puVar1);
  }
  uStack_d8 = uStack_118;
  local_e0 = local_120;
  local_d0 = local_110;
  uStack_f8 = uStack_138;
  local_100 = local_140;
  uStack_e8 = uStack_128;
  uStack_f0 = uStack_130;
  if (local_108 < 9) {
    auStack_c0[1] = local_148;
    uStack_78 = 0;
    uVar6 = local_108;
  }
  else {
    auStack_c0[1] = 0;
    uStack_78 = local_108;
    uVar6 = local_148;
  }
  local_68 = uVar6;
  uStack_a8 = uStack_138;
  local_b0 = local_140;
  uStack_98 = uStack_128;
  uStack_a0 = uStack_130;
  uStack_88 = uStack_118;
  local_90 = local_120;
  local_80 = local_110;
  if (uVar6 == 0) {
    if (uStack_78 < 9) {
      return;
    }
  }
  else {
    if (uStack_78 < 9) {
      lVar12 = 1;
      do {
        local_70 = lVar12;
        syscall(0x62,auStack_c0[lVar12],0x81,1);
        lVar12 = lVar12 + 1;
      } while (lVar12 - uVar6 != 1);
      return;
    }
    do {
      syscall(0x62,*local_140,0x81,1);
      uVar6 = uVar6 - 1;
      local_140 = local_140 + 1;
    } while (uVar6 != 0);
  }
  free(local_b0);
  return;
}


// ===== 009e9358  <parking_lot::remutex::RawThreadId_as_lock_api::remutex::GetThreadId>::nonzero_thread_id =====

/* WARNING: Unknown calling convention: __rustcall */
/* <parking_lot::remutex::RawThreadId as lock_api::remutex::GetThreadId>::nonzero_thread_id */

void * __rustcall
<parking_lot::remutex::RawThreadId_as_lock_api::remutex::GetThreadId>::nonzero_thread_id(void)

{
  void *pvVar1;
  ulong uVar2;
  
  uVar2 = DAT_00b0f790;
  if (DAT_00b0f790 == 0) {
    uVar2 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(&DAT_00b0f790);
    pvVar1 = pthread_getspecific((pthread_key_t)uVar2);
  }
  else {
    pvVar1 = pthread_getspecific((pthread_key_t)DAT_00b0f790);
  }
  if (pvVar1 < (void *)0x2) {
    pvVar1 = (void *)FUN_009e89f4(uVar2 & 0xffffffff);
  }
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::thread::local::panic_access_error(&PTR_s__nix_store_8006w282fgsx3273c878b_00af7a88);
  }
  return pvVar1;
}


// ===== 009e93d8  <<parking_lot::once::parking_lot::once::Once>::call_once_slow::PanicGuard_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<parking_lot::once::parking_lot::once::Once>::call_once_slow::PanicGuard as
   core::ops::drop::Drop>::drop */

void __rustcall
<<parking_lot::once::parking_lot::once::Once>::call_once_slow::PanicGuard_as_core::ops::drop::Drop>
::drop(undefined8 *param_1)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  byte *pbVar4;
  
  pbVar4 = (byte *)*param_1;
  do {
    bVar1 = *pbVar4;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pbVar4,0x10);
    if (bVar3) {
      *pbVar4 = 2;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((bVar1 >> 3 & 1) == 0) {
    return;
  }
  FUN_009e9030();
  return;
}


// ===== 009e93f8  FUN_009e93f8 =====

void FUN_009e93f8(void)

{
  undefined1 uStack_11;
  
  FUN_009e9554(&uStack_11);
  FUN_009e8a84();
                    /* WARNING: Subroutine does not return */
  std::process::abort();
}


// ===== 009e9414  <parking_lot::once::Once_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <parking_lot::once::Once as core::fmt::Debug>::fmt */

void __rustcall <parking_lot::once::Once_as_core::fmt::Debug>::fmt(byte *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined1 auStack_30 [16];
  byte local_4 [4];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,"OnceUnix",4);
  bVar1 = *param_1;
  if ((bVar1 & 1) == 0) {
    if ((bVar1 >> 2 & 1) == 0) {
      local_4[0] = bVar1 >> 1 & 1;
    }
    else {
      local_4[0] = 2;
    }
  }
  else {
    local_4[0] = 3;
  }
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (auStack_30,"state",5,local_4,&DAT_00af7ad0);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 009e949c  FUN_009e949c =====

void FUN_009e949c(undefined8 *param_1)

{
  <core::mem::alignment::Alignment_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 009e94a4  FUN_009e94a4 =====

void FUN_009e94a4(long *param_1,undefined8 param_2)

{
  long local_18;
  
  local_18 = *param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field2_finish
            (param_2,"Layout",6,&DAT_002bd23c,4,local_18 + 8,&DAT_00af7af0,
             "alignNewPoisonedInProgressDonefailed to write whole buffer",5,&local_18,&DAT_00af7b10)
  ;
  return;
}


// ===== 009e9514  FUN_009e9514 =====

void FUN_009e9514(byte *param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,&DAT_0037e540 + *(int *)(&DAT_0037e540 + (ulong)*param_1 * 4),
             *(undefined8 *)(&DAT_002bfb08 + (ulong)*param_1 * 8));
  return;
}


// ===== 009e953c  FUN_009e953c =====

void FUN_009e953c(undefined8 param_1,long param_2)

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


// ===== 009e9554  FUN_009e9554 =====

undefined * FUN_009e9554(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined *local_58;
  
  pcVar4 = "fatal runtime er";
  puVar5 = (undefined *)0x3d;
  do {
    auVar8 = <std::sys::stdio::unix::Stderr_as_core::io::write::Write>::write(param_1,pcVar4,puVar5)
    ;
    puVar3 = auVar8._8_8_;
    if (auVar8._0_8_ == 1) {
      puVar6 = puVar5;
      if (((ulong)puVar3 & 3) < 2) {
        if ((auVar8 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
          if (puVar3[0x10] != '#') {
            return puVar3;
          }
        }
        else {
          if (puVar3[0x1f] != '#') {
            return puVar3;
          }
          local_58 = puVar3 + -1;
          <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_58);
        }
      }
      else if (((ulong)puVar3 & 3) == 2) {
                    /* try { // try from 009e9618 to 009e962b has its CatchHandler @ 009e9694 */
        lVar2 = core::io::error::os_functions::get_os_functions();
        iVar1 = (**(code **)(lVar2 + 0x10))((ulong)puVar3 >> 0x20);
        if (iVar1 == 0) {
          return puVar3;
        }
      }
      else {
        uVar7 = auVar8._12_4_ & 0xff;
        if (10 < (ulong)puVar3 >> 0x22) {
          uVar7 = 0xff;
        }
        if (uVar7 != 0x23) {
          return puVar3;
        }
      }
    }
    else {
      if (puVar3 == (undefined *)0x0) {
        return &DAT_00af7b30;
      }
      puVar6 = puVar5 + -(long)puVar3;
      if (puVar5 < puVar3) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (puVar3,puVar5,puVar5,&PTR_s__nix_store_8006w282fgsx3273c878b_00af7b48);
      }
      pcVar4 = pcVar4 + (long)puVar3;
    }
    puVar5 = puVar6;
    if (puVar6 == (undefined *)0x0) {
      return (undefined *)0x0;
    }
  } while( true );
}


// ===== 009e96ac  <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow */

void __rustcall
<parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow
          (undefined4 *param_1,ulong param_2)

{
  ulong *puVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  undefined *puVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [12];
  
  puVar5 = PTR_HASHTABLE_00b01180;
LAB_009e96ec:
  plVar10 = *(long **)puVar5;
  if (plVar10 == (long *)0x0) {
    plVar10 = (long *)parking_lot_core::parking_lot::create_hashtable();
    uVar11 = plVar10[1];
    uVar12 = (ulong)((long)param_1 * -0x61c8864680b583eb) >> ((ulong)(uint)-(int)plVar10[3] & 0x3f);
    if (uVar11 <= uVar12) goto LAB_009e997c;
  }
  else {
    uVar11 = plVar10[1];
    uVar12 = (ulong)((long)param_1 * -0x61c8864680b583eb) >> ((ulong)(uint)-(int)plVar10[3] & 0x3f);
    if (uVar11 <= uVar12) {
LAB_009e997c:
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (uVar12,uVar11,&PTR_s__root__cargo_registry_src_index__00af7bf8);
    }
  }
  puVar1 = (ulong *)(*plVar10 + uVar12 * 0x40);
  if (*puVar1 == 0) {
    cVar4 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar8) {
      *puVar1 = 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 != '\0') goto LAB_009e977c;
    plVar13 = *(long **)puVar5;
  }
  else {
    ClearExclusiveLocal();
LAB_009e977c:
    <parking_lot_core::word_lock::parking_lot_core::word_lock::WordLock>::lock_slow(puVar1);
    plVar13 = *(long **)puVar5;
  }
  if (plVar13 != plVar10) {
    do {
      uVar11 = *puVar1;
      cVar4 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar8) {
        *puVar1 = uVar11 - 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((3 < uVar11) && (((uint)uVar11 >> 1 & 1) == 0)) {
      <parking_lot_core::word_lock::parking_lot_core::word_lock::WordLock>::unlock_slow(puVar1);
    }
    goto LAB_009e96ec;
  }
  puVar17 = (undefined8 *)puVar1[1];
  if (puVar17 == (undefined8 *)0x0) {
LAB_009e9854:
    *param_1 = 0;
    do {
      uVar11 = *puVar1;
      cVar4 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar8) {
        *puVar1 = uVar11 - 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((3 < uVar11) && (((uint)uVar11 >> 1 & 1) == 0)) {
      <parking_lot_core::word_lock::parking_lot_core::word_lock::WordLock>::unlock_slow(puVar1);
      return;
    }
    return;
  }
  if ((undefined4 *)*puVar17 == param_1) {
    puVar14 = (undefined8 *)0x0;
    puVar16 = (undefined8 *)puVar17[1];
    puVar1[1] = (ulong)puVar16;
    if ((undefined8 *)puVar1[2] != puVar17) goto LAB_009e97c8;
LAB_009e9818:
    bVar8 = false;
    puVar1[2] = (ulong)puVar14;
LAB_009e9820:
    auVar18 = <std::time::std::time::Instant>::now();
    uVar11 = auVar18._0_8_;
    uVar12 = puVar1[3];
    bVar7 = SBORROW8(uVar11,uVar12);
    lVar2 = uVar11 - uVar12;
    bVar9 = uVar11 == uVar12;
    bVar6 = bVar8;
    if (!bVar9) goto LAB_009e98a0;
LAB_009e9830:
    bVar8 = bVar6;
    if (auVar18._8_4_ <= (uint)puVar1[4]) goto LAB_009e983c;
LAB_009e98a4:
    uVar3 = (uint)puVar1[5] ^ (uint)puVar1[5] << 0xd;
    uVar3 = uVar3 ^ uVar3 >> 0x11;
    uVar3 = uVar3 ^ uVar3 << 5;
    *(uint *)(puVar1 + 5) = uVar3;
    auVar19 = <std[17aff9129faa4dc5]::time::Instant_as_core[bcece726f298455b]::ops::arith::Add<core[bcece726f298455b]::time::Duration>>
              ::add(auVar18._0_8_,auVar18._8_8_,0,uVar3 % 1000000,
                    &PTR_s__root__cargo_registry_src_index__00af7bb0);
    *(undefined1 (*) [12])(puVar1 + 3) = auVar19;
  }
  else {
    do {
      puVar14 = puVar17;
      puVar17 = (undefined8 *)puVar14[1];
      if (puVar17 == (undefined8 *)0x0) goto LAB_009e9854;
    } while ((undefined4 *)*puVar17 != param_1);
    puVar16 = (undefined8 *)puVar17[1];
    puVar14[1] = puVar16;
    if ((undefined8 *)puVar1[2] == puVar17) goto LAB_009e9818;
LAB_009e97c8:
    if (puVar16 != (undefined8 *)0x0) {
      do {
        bVar8 = (undefined4 *)*puVar16 == param_1;
        if (bVar8) break;
        puVar16 = (undefined8 *)puVar16[1];
      } while (puVar16 != (undefined8 *)0x0);
      goto LAB_009e9820;
    }
    bVar8 = false;
    auVar18 = <std::time::std::time::Instant>::now();
    uVar11 = auVar18._0_8_;
    uVar12 = puVar1[3];
    bVar7 = SBORROW8(uVar11,uVar12);
    lVar2 = uVar11 - uVar12;
    bVar9 = uVar11 == uVar12;
    bVar6 = false;
    if (bVar9) goto LAB_009e9830;
LAB_009e98a0:
    if (!bVar9 && lVar2 < 0 == bVar7) goto LAB_009e98a4;
LAB_009e983c:
    if ((param_2 & 1) == 0) {
      uVar15 = 0;
      if (bVar8) {
        *param_1 = 2;
      }
      else {
        *param_1 = 0;
      }
      goto LAB_009e9900;
    }
  }
  uVar15 = 1;
  if (!bVar8) {
    *(undefined1 *)param_1 = 1;
  }
LAB_009e9900:
  puVar17[2] = uVar15;
  *(undefined4 *)(puVar17 + 4) = 0;
  do {
    uVar11 = *puVar1;
    cVar4 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar8) {
      *puVar1 = uVar11 - 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if ((3 < uVar11) && (((uint)uVar11 >> 1 & 1) == 0)) {
    <parking_lot_core::word_lock::parking_lot_core::word_lock::WordLock>::unlock_slow(puVar1);
  }
  syscall(0x62,puVar17 + 4,0x81,1);
  return;
}


// ===== 009e998c  <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::bump_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::bump_slow */

void __rustcall
<parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::bump_slow(char *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 extraout_x1;
  
  unlock_slow(param_1,1);
  if (*param_1 == '\0') {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = '\x01';
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  lock_slow(param_1,extraout_x1,0xffffffff);
  return;
}


// ===== 009e99dc  <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention: __rustcall */
/* <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow */

undefined8 __rustcall
<parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow
          (byte *param_1,long param_2,uint param_3)

{
  ulong *puVar1;
  byte bVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  byte bVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  ulong uVar10;
  int iVar11;
  ulong extraout_x8;
  ulong extraout_x8_00;
  bool bVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  undefined1 auVar17 [16];
  undefined **local_d8;
  long local_b0;
  undefined8 uStack_a8;
  ulong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  undefined8 uStack_80;
  ulong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  puVar8 = PTR_NUM_THREADS_00b01190;
  puVar7 = PTR_HASHTABLE_00b01180;
  local_d8 = &PTR_s__root__cargo_registry_src_index__00af7bf8;
  uVar5 = 0;
  bVar6 = *param_1;
joined_r0x009e9a58:
  while( true ) {
    while ((bVar6 & 1) == 0) {
      bVar2 = *param_1;
      if (bVar2 == bVar6) {
        cVar4 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar12) {
          *param_1 = bVar6 | 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
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
      bVar6 = bVar2;
      if (bVar12) {
        return 1;
      }
    }
    if ((bVar6 >> 1 & 1) != 0) break;
    if (uVar5 < 10) {
      if (uVar5 < 3) {
        iVar11 = 2 << (ulong)(uVar5 & 0x1f);
        do {
          InstructionSynchronizationBarrier();
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      else {
        std::thread::functions::yield_now();
      }
      uVar5 = uVar5 + 1;
      bVar6 = *param_1;
    }
    else {
      bVar2 = *param_1;
      if (bVar2 == bVar6) {
        cVar4 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar12) {
          *param_1 = bVar6 | 2;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
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
      bVar6 = bVar2;
      if (bVar12) break;
    }
  }
  bVar12 = false;
  uVar14 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b01188;
  if (uVar14 == 0) {
    uVar14 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
             lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b01188);
    plVar9 = (long *)pthread_getspecific((pthread_key_t)uVar14);
    if (plVar9 <= &DAT_00000001) goto LAB_009e9f48;
  }
  else {
    plVar9 = (long *)pthread_getspecific((pthread_key_t)uVar14);
    if (plVar9 <= &DAT_00000001) {
LAB_009e9f48:
      plVar9 = (long *)FUN_009e88e4(uVar14 & 0xffffffff,plVar9,0);
    }
  }
  if (plVar9 == (long *)0x0) {
                    /* try { // try from 009e9b04 to 009e9b0b has its CatchHandler @ 009e9fcc */
    <parking_lot_core::parking_lot::[1]::parking_lot_core::parking_lot::ThreadData>::new(&local_88);
    bVar12 = true;
    uStack_a8 = uStack_80;
    local_b0 = local_88;
    local_98 = uStack_70;
    local_a0 = local_78;
    local_90 = local_68;
    plVar9 = &local_b0;
  }
LAB_009e9b2c:
  plVar15 = *(long **)puVar7;
  if (plVar15 == (long *)0x0) {
    plVar15 = (long *)parking_lot_core::parking_lot::create_hashtable();
    uVar10 = plVar15[1];
    uVar14 = (ulong)((long)param_1 * -0x61c8864680b583eb) >> ((ulong)(uint)-(int)plVar15[3] & 0x3f);
    if (uVar10 <= uVar14) goto LAB_009e9fb8;
  }
  else {
    uVar10 = plVar15[1];
    uVar14 = (ulong)((long)param_1 * -0x61c8864680b583eb) >> ((ulong)(uint)-(int)plVar15[3] & 0x3f);
    if (uVar10 <= uVar14) goto LAB_009e9fb8;
  }
  puVar1 = (ulong *)(*plVar15 + uVar14 * 0x40);
  if (*puVar1 == 0) {
    cVar4 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 != '\0') goto LAB_009e9bbc;
  }
  else {
    ClearExclusiveLocal();
LAB_009e9bbc:
    <parking_lot_core::word_lock::parking_lot_core::word_lock::WordLock>::lock_slow();
  }
  if (*(long **)puVar7 != plVar15) {
    do {
      uVar14 = *puVar1;
      cVar4 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar14 - 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((3 < uVar14) && (((uint)uVar14 >> 1 & 1) == 0)) {
                    /* try { // try from 009e9b8c to 009e9bc7 has its CatchHandler @ 009e9fc8 */
      <parking_lot_core::word_lock::parking_lot_core::word_lock::WordLock>::unlock_slow();
    }
    goto LAB_009e9b2c;
  }
  if (*param_1 == 3) {
    plVar9[1] = 0;
    *(bool *)((long)plVar9 + 0x24) = param_3 != 0xffffffff;
    *plVar9 = (long)param_1;
    plVar9[3] = 0;
    *(undefined4 *)(plVar9 + 4) = 1;
    if (puVar1[1] == 0) {
      puVar1[1] = (ulong)plVar9;
    }
    else {
      *(long **)(puVar1[2] + 8) = plVar9;
    }
    plVar15 = plVar9 + 4;
    puVar1[2] = (ulong)plVar9;
    do {
      uVar14 = *puVar1;
      cVar4 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar14 - 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((3 < uVar14) && (((uint)uVar14 >> 1 & 1) == 0)) {
      <parking_lot_core::word_lock::parking_lot_core::word_lock::WordLock>::unlock_slow();
    }
    iVar11 = (int)*plVar15;
    if (param_3 == 0xffffffff) {
      while (iVar11 != 0) {
        syscall(0x62,plVar9 + 4,0x80,1,0);
        iVar11 = (int)*plVar15;
      }
    }
    else {
      while (iVar11 != 0) {
                    /* try { // try from 009e9ca0 to 009e9cd7 has its CatchHandler @ 009e9fd0 */
        auVar17 = <std::time::std::time::Instant>::now();
        lVar13 = auVar17._0_8_;
        bVar3 = param_3 <= auVar17._8_4_;
        if (param_2 != lVar13) {
          bVar3 = param_2 <= lVar13;
        }
        if (bVar3) goto LAB_009e9d50;
        auVar17 = <std::time::Instant_as_core::ops::arith::Sub>::sub
                            (param_2,param_3,lVar13,auVar17._8_8_ & 0xffffffff);
        uStack_80 = auVar17._0_8_;
        local_78 = auVar17._8_8_ & 0xffffffff;
        local_88 = 1;
        syscall(0x62,plVar9 + 4,0x80,1,&uStack_80);
        iVar11 = (int)*plVar15;
      }
    }
    goto LAB_009e9e60;
  }
  do {
    uVar10 = *puVar1;
    uVar14 = uVar10 - 1;
    cVar4 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = uVar14;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (uVar10 < 4) {
LAB_009e9c28:
    lVar13 = 1;
  }
  else {
    lVar13 = 1;
    if (((uint)uVar10 >> 1 & 1) == 0) {
                    /* try { // try from 009e9c24 to 009e9c27 has its CatchHandler @ 009e9fcc */
      <parking_lot_core::word_lock::parking_lot_core::word_lock::WordLock>::unlock_slow();
      uVar14 = extraout_x8;
      goto LAB_009e9c28;
    }
  }
  goto LAB_009e9e70;
LAB_009e9d50:
  plVar16 = *(long **)puVar7;
  if (plVar16 == (long *)0x0) {
    plVar16 = (long *)parking_lot_core::parking_lot::create_hashtable();
  }
  lVar13 = *plVar9;
  uVar10 = plVar16[1];
  uVar14 = (ulong)(lVar13 * -0x61c8864680b583eb) >> ((ulong)(uint)-(int)plVar16[3] & 0x3f);
  if (uVar10 <= uVar14) {
    local_d8 = &PTR_s__root__cargo_registry_src_index__00af7c10;
LAB_009e9fb8:
                    /* try { // try from 009e9fb8 to 009e9fbf has its CatchHandler @ 009e9fd4 */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check(uVar14,uVar10,local_d8);
  }
  puVar1 = (ulong *)(*plVar16 + uVar14 * 0x40);
  if (*puVar1 == 0) {
    cVar4 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 != '\0') goto LAB_009e9d40;
  }
  else {
    ClearExclusiveLocal();
LAB_009e9d40:
    <parking_lot_core::word_lock::parking_lot_core::word_lock::WordLock>::lock_slow();
  }
  if ((*(long **)puVar7 != plVar16) || (*plVar9 != lVar13)) {
    do {
      uVar14 = *puVar1;
      cVar4 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar14 - 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((3 < uVar14) && (((uint)uVar14 >> 1 & 1) == 0)) {
                    /* try { // try from 009e9d28 to 009e9d4b has its CatchHandler @ 009e9fc4 */
      <parking_lot_core::word_lock::parking_lot_core::word_lock::WordLock>::unlock_slow();
    }
    goto LAB_009e9d50;
  }
  if ((int)*plVar15 == 0) {
    do {
      uVar14 = *puVar1;
      cVar4 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar14 - 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((3 < uVar14) && (((uint)uVar14 >> 1 & 1) == 0)) {
                    /* try { // try from 009e9e34 to 009e9f67 has its CatchHandler @ 009e9fcc */
      <parking_lot_core::word_lock::parking_lot_core::word_lock::WordLock>::unlock_slow();
    }
LAB_009e9e60:
    lVar13 = 0;
    uVar14 = (ulong)(plVar9[2] == 1);
    goto LAB_009e9e70;
  }
  plVar15 = (long *)puVar1[1];
  if (plVar15 != (long *)0x0) {
    if (plVar15 == plVar9) {
      plVar15 = (long *)plVar15[1];
      puVar1[1] = (ulong)plVar15;
      if ((long *)puVar1[2] != plVar9) {
        bVar3 = true;
        goto joined_r0x009e9ec8;
      }
      puVar1[2] = 0;
LAB_009e9eec:
      do {
        cVar4 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar3) {
          *param_1 = *param_1 & 0xfd;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    else {
      bVar3 = true;
      do {
        plVar16 = plVar15;
        plVar15 = (long *)plVar16[1];
        if (plVar15 == (long *)0x0) goto LAB_009e9efc;
        bVar3 = (bool)(*plVar16 != lVar13 & bVar3);
      } while (plVar15 != plVar9);
      plVar15 = (long *)plVar15[1];
      plVar16[1] = (long)plVar15;
      if ((long *)puVar1[2] == plVar9) {
        puVar1[2] = (ulong)plVar16;
        if (bVar3) goto LAB_009e9eec;
      }
      else {
joined_r0x009e9ec8:
        for (; plVar15 != (long *)0x0; plVar15 = (long *)plVar15[1]) {
          if (*plVar15 == lVar13) goto LAB_009e9efc;
        }
        if (bVar3) goto LAB_009e9eec;
      }
    }
  }
LAB_009e9efc:
  do {
    uVar10 = *puVar1;
    uVar14 = uVar10 - 1;
    cVar4 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = uVar14;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (3 < uVar10) {
    lVar13 = 2;
    if (((uint)uVar10 >> 1 & 1) != 0) goto LAB_009e9e70;
    <parking_lot_core::word_lock::parking_lot_core::word_lock::WordLock>::unlock_slow();
    uVar14 = extraout_x8_00;
  }
  lVar13 = 2;
LAB_009e9e70:
  if (bVar12) {
    do {
      cVar4 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(puVar8,0x10);
      if (bVar12) {
        *(long *)puVar8 = *(long *)puVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (lVar13 == 0) {
    if ((uVar14 & 1) != 0) {
      return 1;
    }
  }
  else if (lVar13 != 1) {
    return 0;
  }
  uVar5 = 0;
  bVar6 = *param_1;
  goto joined_r0x009e9a58;
}


// ===== 009e9ff0  FUN_009e9ff0 =====

void FUN_009e9ff0(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *__src;
  void *__dest;
  ulong uVar3;
  ulong *__dest_00;
  ulong uVar4;
  ulong uVar5;
  undefined8 local_50;
  ulong uStack_48;
  
  uVar5 = param_1[9];
  uVar3 = uVar5;
  if ((uVar5 < 9) || (uVar3 = param_1[1], uVar3 != 0xffffffffffffffff)) {
    uVar4 = 0;
    if (uVar3 != 0) {
      uVar4 = 0xffffffffffffffff >> (LZCOUNT(uVar3) & 0x3fU);
    }
    if (uVar4 != 0xffffffffffffffff) {
      uVar3 = uVar4 + 1;
      __dest_00 = param_1 + 1;
      uVar1 = uVar5;
      uVar2 = *__dest_00;
      __src = (ulong *)param_1[2];
      if (uVar5 < 9) {
        uVar1 = 8;
        uVar2 = uVar5;
        __src = __dest_00;
      }
      if (uVar3 < uVar2) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic(&DAT_002c0308,0x20,&PTR_s__root__cargo_registry_src_index__00af7be0);
      }
      if (uVar4 < 8) {
        if (8 < uVar5) {
          *param_1 = 0;
          memcpy(__dest_00,__src,uVar2 << 3);
          uStack_48 = uVar1 << 3;
          param_1[9] = uVar2;
          if ((uVar5 >> 0x3d == 0) && (uStack_48 < 0x7ffffffffffffff9)) {
            free(__src);
            return;
          }
          local_50 = 0;
                    /* WARNING: Subroutine does not return */
          core::result::unwrap_failed
                    (&DAT_0037e561,0x2b,&local_50,&DAT_00af7b90,
                     &PTR_s__root__cargo_registry_src_index__00af7b60);
        }
      }
      else if (uVar3 != uVar1) {
        if ((0x1ffffffffffffffe < uVar4) || (uVar4 = uVar3 * 8, 0x7ffffffffffffff8 < uVar4)) {
LAB_009ea1ac:
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    (&DAT_0037e550,0x11,&PTR_s__root__cargo_registry_src_index__00af7b78);
        }
        if (uVar5 < 9) {
          __rustc::__rust_no_alloc_shim_is_unstable_v2();
          __dest = (void *)FUN_004b25a4(uVar4,8);
          if (__dest == (void *)0x0) {
LAB_009ea1f4:
                    /* WARNING: Subroutine does not return */
            alloc::alloc::handle_alloc_error(8,uVar4);
          }
          memcpy(__dest,__src,uVar2 << 3);
        }
        else {
          if ((uVar5 >> 0x3d != 0) || (0x7ffffffffffffff8 < uVar1 << 3)) goto LAB_009ea1ac;
          __dest = (void *)FUN_004b2600(__src,uVar1 << 3,8,uVar4);
          if (__dest == (void *)0x0) goto LAB_009ea1f4;
        }
        param_1[2] = __dest;
        *param_1 = 1;
        param_1[1] = uVar2;
        param_1[9] = uVar3;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed(&DAT_0037e550,0x11,&PTR_s__root__cargo_registry_src_index__00af7bc8);
}


// ===== 009ea200  FUN_009ea200 =====

void FUN_009ea200(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *__src;
  void *__dest;
  ulong uVar4;
  ulong *__dest_00;
  long lVar5;
  ulong uVar6;
  undefined8 local_60;
  long lStack_58;
  
  uVar6 = param_1[0x19];
  uVar4 = uVar6;
  if ((uVar6 < 9) || (uVar4 = param_1[1], uVar4 != 0xffffffffffffffff)) {
    uVar1 = 0;
    if (uVar4 != 0) {
      uVar1 = 0xffffffffffffffff >> (LZCOUNT(uVar4) & 0x3fU);
    }
    if (uVar1 != 0xffffffffffffffff) {
      uVar4 = uVar1 + 1;
      __dest_00 = param_1 + 1;
      uVar2 = uVar6;
      uVar3 = *__dest_00;
      __src = (ulong *)param_1[2];
      if (uVar6 < 9) {
        uVar2 = 8;
        uVar3 = uVar6;
        __src = __dest_00;
      }
      if (uVar4 < uVar3) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic(&DAT_002c0308,0x20,&PTR_s__root__cargo_registry_src_index__00af7be0);
      }
      if (uVar1 < 8) {
        if (8 < uVar6) {
          *param_1 = 0;
          memcpy(__dest_00,__src,uVar3 * 0x18);
          param_1[0x19] = uVar3;
          lStack_58 = uVar2 * 0x18;
          if (uVar6 < 0x555555555555556) {
            free(__src);
            return;
          }
          local_60 = 0;
                    /* WARNING: Subroutine does not return */
          core::result::unwrap_failed
                    (&DAT_0037e561,0x2b,&local_60,&DAT_00af7b90,
                     &PTR_s__root__cargo_registry_src_index__00af7b60);
        }
      }
      else if (uVar4 != uVar2) {
        if (0x555555555555554 < uVar1) {
LAB_009ea308:
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    (&DAT_0037e550,0x11,&PTR_s__root__cargo_registry_src_index__00af7b78);
        }
        lVar5 = uVar4 * 0x18;
        if (uVar6 < 9) {
          __rustc::__rust_no_alloc_shim_is_unstable_v2();
          __dest = (void *)FUN_004b25a4(lVar5,8);
          if (__dest == (void *)0x0) {
LAB_009ea40c:
                    /* WARNING: Subroutine does not return */
            alloc::alloc::handle_alloc_error(8,lVar5);
          }
          memcpy(__dest,__src,uVar3 * 0x18);
        }
        else {
          if (0x555555555555555 < uVar6) goto LAB_009ea308;
          __dest = (void *)FUN_004b2600(__src,uVar2 * 0x18,8,lVar5);
          if (__dest == (void *)0x0) goto LAB_009ea40c;
        }
        param_1[2] = __dest;
        *param_1 = 1;
        param_1[1] = uVar3;
        param_1[0x19] = uVar4;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed(&DAT_0037e550,0x11,&PTR_s__root__cargo_registry_src_index__00af7bc8);
}


// ===== 009ea418  FUN_009ea418 =====

void FUN_009ea418(long *param_1,undefined8 param_2)

{
  long *local_18;
  
  if (*param_1 != 0) {
    local_18 = param_1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field1_finish
              (param_2,&DAT_002a1760,8,&DAT_0037e58c,6,&local_18,&DAT_00af7c28);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_0029fec0,0x10);
  return;
}


// ===== 009ea47c  <parking_lot::condvar::parking_lot::condvar::Condvar>::notify_all_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <parking_lot::condvar::parking_lot::condvar::Condvar>::notify_all_slow */

long __rustcall
<parking_lot::condvar::parking_lot::condvar::Condvar>::notify_all_slow
          (undefined8 *param_1,byte *param_2)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  byte bVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  bool bVar13;
  ulong *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  undefined8 *unaff_x23;
  undefined1 auVar20 [16];
  undefined1 auVar21 [12];
  
  auVar20 = FUN_009eb1fc();
  puVar7 = auVar20._8_8_;
  puVar6 = auVar20._0_8_;
  if ((byte *)*param_1 == param_2) {
    *param_1 = 0;
    bVar2 = *param_2;
LAB_009ea508:
    while (bVar9 = bVar2, (bVar9 & 1) != 0) {
      bVar2 = *param_2;
      if (bVar2 == bVar9) goto code_r0x009ea51c;
      ClearExclusiveLocal();
    }
    puVar14 = puVar6 + 1;
    if ((undefined8 *)*puVar14 != (undefined8 *)0x0) {
      lVar19 = 0;
      bVar13 = false;
      puVar17 = (undefined8 *)0x0;
      bVar4 = false;
      puVar12 = (undefined8 *)0x0;
      puVar11 = (undefined8 *)0x0;
      puVar15 = (undefined8 *)*puVar14;
      do {
        puVar16 = (undefined8 *)puVar15[1];
        puVar5 = puVar15 + 1;
        puVar8 = puVar15;
        if ((undefined8 *)*puVar15 == param_1) {
          *puVar14 = (ulong)puVar16;
          if ((undefined8 *)puVar6[2] == puVar15) {
            puVar6[2] = (ulong)puVar17;
          }
          if (bVar4) {
            if (puVar12 != (undefined8 *)0x0) {
              puVar11[1] = puVar15;
              puVar8 = puVar12;
            }
            lVar19 = lVar19 + 1;
            *puVar15 = param_2;
            puVar12 = puVar8;
            puVar11 = puVar15;
            puVar15 = unaff_x23;
          }
          else {
            bVar13 = true;
          }
          bVar4 = true;
          puVar5 = puVar14;
          puVar8 = puVar17;
          unaff_x23 = puVar15;
        }
        puVar17 = puVar8;
        puVar14 = puVar5;
        puVar15 = puVar16;
      } while (puVar16 != (undefined8 *)0x0);
      bVar13 = !bVar13;
      goto joined_r0x009ea82c;
    }
    goto LAB_009ea74c;
  }
  do {
    uVar10 = *puVar6;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar6,0x10);
    if (bVar4) {
      *puVar6 = uVar10 - 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((3 < uVar10) && (((uint)uVar10 >> 1 & 1) == 0)) {
    <parking_lot_core::word_lock::parking_lot_core::word_lock::WordLock>::unlock_slow();
  }
  if (puVar6 != puVar7) {
    do {
      uVar10 = *puVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar7,0x10);
      if (bVar4) {
        *puVar7 = uVar10 - 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar19 = 0;
    lVar18 = 0;
    if ((uVar10 < 4) || (((uint)uVar10 >> 1 & 1) != 0)) goto LAB_009ea854;
    <parking_lot_core::word_lock::parking_lot_core::word_lock::WordLock>::unlock_slow(puVar7);
  }
  lVar19 = 0;
  lVar18 = 0;
  goto LAB_009ea854;
code_r0x009ea51c:
  cVar3 = '\x01';
  bVar4 = (bool)ExclusiveMonitorPass(param_2,0x10);
  if (bVar4) {
    *param_2 = bVar9 | 2;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_009ea534;
  goto LAB_009ea508;
LAB_009ea534:
  puVar15 = (undefined8 *)puVar6[1];
  if (puVar15 == (undefined8 *)0x0) {
LAB_009ea74c:
    lVar18 = 0;
    lVar19 = 0;
  }
  else {
    lVar19 = 0;
    puVar11 = (undefined8 *)0x0;
    puVar17 = (undefined8 *)0x0;
    puVar14 = puVar6 + 1;
    puVar8 = (undefined8 *)0x0;
    do {
      while( true ) {
        puVar16 = (undefined8 *)puVar15[1];
        if ((undefined8 *)*puVar15 == param_1) break;
        puVar12 = puVar17;
        puVar14 = puVar15 + 1;
        puVar8 = puVar15;
        puVar15 = puVar16;
        if (puVar16 == (undefined8 *)0x0) goto LAB_009ea5c4;
      }
      *puVar14 = (ulong)puVar16;
      if ((undefined8 *)puVar6[2] == puVar15) {
        puVar6[2] = (ulong)puVar8;
      }
      puVar12 = puVar15;
      if (puVar17 != (undefined8 *)0x0) {
        puVar11[1] = puVar15;
        puVar12 = puVar17;
      }
      lVar19 = lVar19 + 1;
      *puVar15 = param_2;
      puVar11 = puVar15;
      puVar17 = puVar12;
      puVar15 = puVar16;
    } while (puVar16 != (undefined8 *)0x0);
LAB_009ea5c4:
    bVar4 = false;
    bVar13 = true;
joined_r0x009ea82c:
    if (puVar12 != (undefined8 *)0x0) {
      puVar11[1] = 0;
      if (puVar7[1] == 0) {
        puVar7[1] = (ulong)puVar12;
      }
      else {
        *(undefined8 **)(puVar7[2] + 8) = puVar12;
      }
      puVar7[2] = (ulong)puVar11;
    }
    if (bVar13) {
      lVar18 = 0;
    }
    else {
      auVar20 = <std::time::std::time::Instant>::now();
      uVar10 = auVar20._0_8_;
      if (uVar10 == puVar6[3]) {
        if ((uint)puVar6[4] < auVar20._8_4_) {
LAB_009ea648:
          uVar1 = (uint)puVar6[5] ^ (uint)puVar6[5] << 0xd;
          uVar1 = uVar1 ^ uVar1 >> 0x11;
          uVar1 = uVar1 ^ uVar1 << 5;
          *(uint *)(puVar6 + 5) = uVar1;
          auVar21 = <std[17aff9129faa4dc5]::time::Instant_as_core[bcece726f298455b]::ops::arith::Add<core[bcece726f298455b]::time::Duration>>
                    ::add(uVar10,auVar20._8_8_,0,uVar1 % 1000000,
                          &PTR_s__root__cargo_registry_src_index__00af7c48);
          lVar18 = 1;
          *(undefined1 (*) [12])(puVar6 + 3) = auVar21;
          goto joined_r0x009ea638;
        }
      }
      else if ((long)puVar6[3] < (long)uVar10) goto LAB_009ea648;
      lVar18 = 1;
    }
joined_r0x009ea638:
    if (((bVar9 & 1) == 0) && (lVar19 != 0)) {
      do {
        cVar3 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(param_2,0x10);
        if (bVar13) {
          *param_2 = *param_2 | 2;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (bVar4) {
      unaff_x23[2] = 0;
      *(undefined4 *)(unaff_x23 + 4) = 0;
      do {
        uVar10 = *puVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar6,0x10);
        if (bVar4) {
          *puVar6 = uVar10 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((3 < uVar10) && (((uint)uVar10 >> 1 & 1) == 0)) {
        <parking_lot_core::word_lock::parking_lot_core::word_lock::WordLock>::unlock_slow();
      }
      if (puVar6 != puVar7) {
        do {
          uVar10 = *puVar7;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar7,0x10);
          if (bVar4) {
            *puVar7 = uVar10 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((3 < uVar10) && (((uint)uVar10 >> 1 & 1) == 0)) {
          <parking_lot_core::word_lock::parking_lot_core::word_lock::WordLock>::unlock_slow(puVar7);
        }
      }
      syscall(0x62,unaff_x23 + 4,0x81,1);
      goto LAB_009ea854;
    }
  }
  do {
    uVar10 = *puVar6;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar6,0x10);
    if (bVar4) {
      *puVar6 = uVar10 - 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((3 < uVar10) && (((uint)uVar10 >> 1 & 1) == 0)) {
    <parking_lot_core::word_lock::parking_lot_core::word_lock::WordLock>::unlock_slow();
  }
  if (puVar6 != puVar7) {
    do {
      uVar10 = *puVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar7,0x10);
      if (bVar4) {
        *puVar7 = uVar10 - 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((3 < uVar10) && (((uint)uVar10 >> 1 & 1) == 0)) {
      <parking_lot_core::word_lock::parking_lot_core::word_lock::WordLock>::unlock_slow(puVar7);
    }
  }
LAB_009ea854:
  return lVar18 + lVar19;
}


// ===== 009ea8c0  <parking_lot::condvar::parking_lot::condvar::Condvar>::notify_one_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <parking_lot::condvar::parking_lot::condvar::Condvar>::notify_one_slow */

bool __rustcall
<parking_lot::condvar::parking_lot::condvar::Condvar>::notify_one_slow
          (undefined8 *param_1,byte *param_2)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  byte bVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [12];
  
  auVar14 = FUN_009eb1fc();
  puVar6 = auVar14._8_8_;
  puVar5 = auVar14._0_8_;
  if ((byte *)*param_1 != param_2) {
    do {
      uVar7 = *puVar5;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar5,0x10);
      if (bVar4) {
        *puVar5 = uVar7 - 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((3 < uVar7) && (((uint)uVar7 >> 1 & 1) == 0)) {
      <parking_lot_core::word_lock::parking_lot_core::word_lock::WordLock>::unlock_slow();
    }
    if (puVar5 != puVar6) {
      do {
        uVar7 = *puVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar6,0x10);
        if (bVar4) {
          *puVar6 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      lVar11 = 0;
      lVar12 = 0;
      if ((uVar7 < 4) || (((uint)uVar7 >> 1 & 1) != 0)) goto LAB_009eabbc;
      <parking_lot_core::word_lock::parking_lot_core::word_lock::WordLock>::unlock_slow(puVar6);
    }
    lVar11 = 0;
    lVar12 = 0;
    goto LAB_009eabbc;
  }
  bVar2 = *param_2;
  do {
    while( true ) {
      bVar8 = bVar2;
      if ((bVar8 & 1) == 0) goto LAB_009ea974;
      bVar2 = *param_2;
      if (bVar2 == bVar8) break;
      ClearExclusiveLocal();
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(param_2,0x10);
    if (bVar4) {
      *param_2 = bVar8 | 2;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_009ea974:
  puVar13 = (undefined8 *)puVar5[1];
  if (puVar13 == (undefined8 *)0x0) {
LAB_009eaa40:
    lVar11 = 0;
    lVar12 = 0;
LAB_009eaa48:
    *param_1 = 0;
  }
  else {
    if ((undefined8 *)*puVar13 == param_1) {
      puVar9 = (undefined8 *)0x0;
      puVar10 = (undefined8 *)puVar13[1];
      puVar5[1] = (ulong)puVar10;
      if ((undefined8 *)puVar5[2] != puVar13) goto LAB_009ea9a4;
LAB_009eaa04:
      puVar5[2] = (ulong)puVar9;
      puVar9 = puVar13;
      if ((bVar8 & 1) != 0) goto LAB_009eaa0c;
LAB_009ea9a8:
      lVar11 = 0;
      puVar13 = (undefined8 *)0x0;
      lVar12 = 1;
      if (puVar10 != (undefined8 *)0x0) goto LAB_009ea9b8;
LAB_009eaa20:
      bVar4 = false;
    }
    else {
      do {
        puVar9 = puVar13;
        puVar13 = (undefined8 *)puVar9[1];
        if (puVar13 == (undefined8 *)0x0) goto LAB_009eaa40;
      } while ((undefined8 *)*puVar13 != param_1);
      puVar10 = (undefined8 *)puVar13[1];
      puVar9[1] = puVar10;
      if ((undefined8 *)puVar5[2] == puVar13) goto LAB_009eaa04;
LAB_009ea9a4:
      puVar9 = puVar13;
      if ((bVar8 & 1) == 0) goto LAB_009ea9a8;
LAB_009eaa0c:
      lVar12 = 0;
      *puVar13 = param_2;
      lVar11 = 1;
      puVar9 = puVar13;
      if (puVar10 == (undefined8 *)0x0) goto LAB_009eaa20;
LAB_009ea9b8:
      do {
        bVar4 = (undefined8 *)*puVar10 == param_1;
        if (bVar4) break;
        puVar10 = (undefined8 *)puVar10[1];
      } while (puVar10 != (undefined8 *)0x0);
    }
    if (puVar13 != (undefined8 *)0x0) {
      puVar13[1] = 0;
      if (puVar6[1] == 0) {
        puVar6[1] = (ulong)puVar13;
      }
      else {
        *(undefined8 **)(puVar6[2] + 8) = puVar13;
      }
      puVar6[2] = (ulong)puVar13;
    }
    if ((bVar8 & 1) == 0) {
      auVar14 = <std::time::std::time::Instant>::now();
      uVar7 = auVar14._0_8_;
      if (uVar7 == puVar5[3]) {
        if ((uint)puVar5[4] < auVar14._8_4_) {
LAB_009eaae4:
          uVar1 = (uint)puVar5[5] ^ (uint)puVar5[5] << 0xd;
          uVar1 = uVar1 ^ uVar1 >> 0x11;
          uVar1 = uVar1 ^ uVar1 << 5;
          *(uint *)(puVar5 + 5) = uVar1;
          auVar15 = <std[17aff9129faa4dc5]::time::Instant_as_core[bcece726f298455b]::ops::arith::Add<core[bcece726f298455b]::time::Duration>>
                    ::add(uVar7,auVar14._8_8_,0,uVar1 % 1000000,
                          &PTR_s__root__cargo_registry_src_index__00af7c48);
          *(undefined1 (*) [12])(puVar5 + 3) = auVar15;
        }
      }
      else if ((long)puVar5[3] < (long)uVar7) goto LAB_009eaae4;
      if (!bVar4) {
        *param_1 = 0;
      }
      puVar13 = puVar9 + 4;
      puVar9[2] = 0;
      *(undefined4 *)puVar13 = 0;
      do {
        uVar7 = *puVar5;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar4) {
          *puVar5 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((3 < uVar7) && (((uint)uVar7 >> 1 & 1) == 0)) {
        <parking_lot_core::word_lock::parking_lot_core::word_lock::WordLock>::unlock_slow(puVar5);
      }
      if (puVar5 != puVar6) {
        do {
          uVar7 = *puVar6;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar6,0x10);
          if (bVar4) {
            *puVar6 = uVar7 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((3 < uVar7) && (((uint)uVar7 >> 1 & 1) == 0)) {
          <parking_lot_core::word_lock::parking_lot_core::word_lock::WordLock>::unlock_slow
                    (puVar6,puVar13);
        }
      }
      syscall(0x62,puVar13,0x81,1);
      goto LAB_009eabbc;
    }
    if (!bVar4) goto LAB_009eaa48;
  }
  do {
    uVar7 = *puVar5;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar5,0x10);
    if (bVar4) {
      *puVar5 = uVar7 - 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((3 < uVar7) && (((uint)uVar7 >> 1 & 1) == 0)) {
    <parking_lot_core::word_lock::parking_lot_core::word_lock::WordLock>::unlock_slow();
  }
  if (puVar5 != puVar6) {
    do {
      uVar7 = *puVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar6,0x10);
      if (bVar4) {
        *puVar6 = uVar7 - 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((3 < uVar7) && (((uint)uVar7 >> 1 & 1) == 0)) {
      <parking_lot_core::word_lock::parking_lot_core::word_lock::WordLock>::unlock_slow(puVar6);
    }
  }
LAB_009eabbc:
  return lVar12 + lVar11 != 0;
}


// ===== 009eac28  <parking_lot::condvar::parking_lot::condvar::Condvar>::wait_until_internal =====

/* WARNING: Removing unreachable block (ram,0x009eac90) */
/* WARNING: Unknown calling convention: __rustcall */
/* <parking_lot::condvar::parking_lot::condvar::Condvar>::wait_until_internal */

byte __rustcall
<parking_lot::condvar::parking_lot::condvar::Condvar>::wait_until_internal
          (undefined8 *param_1,char *param_2,long param_3,uint param_4)

{
  ulong *puVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  bool bVar6;
  bool bVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  bool bVar11;
  int iVar12;
  ulong *puVar13;
  undefined8 *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  undefined **ppuVar17;
  ulong uVar18;
  long *plVar19;
  undefined8 *puVar20;
  undefined1 auVar21 [16];
  ulong local_b0;
  undefined8 uStack_a8;
  ulong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  ulong local_88;
  undefined8 uStack_80;
  ulong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  uVar18 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b01188;
  if (uVar18 == 0) {
    uVar18 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
             lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b01188);
    puVar8 = (ulong *)pthread_getspecific((pthread_key_t)uVar18);
    if (puVar8 <= &DAT_00000001) goto LAB_009eb14c;
  }
  else {
    puVar8 = (ulong *)pthread_getspecific((pthread_key_t)uVar18);
    if (puVar8 <= &DAT_00000001) {
LAB_009eb14c:
      puVar8 = (ulong *)FUN_009e88e4(uVar18 & 0xffffffff,puVar8,0);
    }
  }
  bVar4 = puVar8 == (ulong *)0x0;
  if (bVar4) {
                    /* try { // try from 009eac9c to 009eaca3 has its CatchHandler @ 009eb1d8 */
    <parking_lot_core::parking_lot::[1]::parking_lot_core::parking_lot::ThreadData>::new(&local_88);
    puVar8 = &local_b0;
    uStack_a8 = uStack_80;
    local_b0 = local_88;
    local_98 = uStack_70;
    local_a0 = local_78;
    local_90 = local_68;
  }
  puVar5 = PTR_HASHTABLE_00b01180;
LAB_009eacf4:
  plVar19 = *(long **)puVar5;
  if (plVar19 == (long *)0x0) {
    plVar19 = (long *)parking_lot_core::parking_lot::create_hashtable();
    uVar10 = plVar19[1];
    uVar18 = (ulong)((long)param_1 * -0x61c8864680b583eb) >> ((ulong)(uint)-(int)plVar19[3] & 0x3f);
    ppuVar17 = &PTR_s__root__cargo_registry_src_index__00af7c78;
    if (uVar10 <= uVar18) goto LAB_009eb188;
  }
  else {
    uVar10 = plVar19[1];
    uVar18 = (ulong)((long)param_1 * -0x61c8864680b583eb) >> ((ulong)(uint)-(int)plVar19[3] & 0x3f);
    ppuVar17 = &PTR_s__root__cargo_registry_src_index__00af7c78;
    if (uVar10 <= uVar18) goto LAB_009eb188;
  }
  puVar1 = (ulong *)(*plVar19 + uVar18 * 0x40);
  if (*puVar1 == 0) {
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_009ead84;
  }
  else {
    ClearExclusiveLocal();
LAB_009ead84:
    <parking_lot_core::word_lock::parking_lot_core::word_lock::WordLock>::lock_slow();
  }
  if (*(long **)puVar5 != plVar19) {
    do {
      uVar18 = *puVar1;
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = uVar18 - 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((3 < uVar18) && (((uint)uVar18 >> 1 & 1) == 0)) {
                    /* try { // try from 009ead54 to 009ead8f has its CatchHandler @ 009eb1d0 */
      <parking_lot_core::word_lock::parking_lot_core::word_lock::WordLock>::unlock_slow();
    }
    goto LAB_009eacf4;
  }
  if ((char *)*param_1 == (char *)0x0) {
    *param_1 = param_2;
  }
  else if ((char *)*param_1 != param_2) {
    do {
      uVar18 = *puVar1;
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = uVar18 - 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar7 = false;
    bVar11 = true;
    bVar6 = false;
    if ((3 < uVar18) && (((uint)uVar18 >> 1 & 1) == 0)) {
                    /* try { // try from 009eadd0 to 009eadd3 has its CatchHandler @ 009eb1d8 */
      <parking_lot_core::word_lock::parking_lot_core::word_lock::WordLock>::unlock_slow();
      bVar7 = false;
      bVar6 = false;
      bVar11 = true;
    }
    goto LAB_009eaf10;
  }
  puVar8[1] = 0;
  *(bool *)((long)puVar8 + 0x24) = param_4 != 0xffffffff;
  *puVar8 = (ulong)param_1;
  puVar8[3] = 0;
  *(undefined4 *)(puVar8 + 4) = 1;
  if (puVar1[1] == 0) {
    puVar1[1] = (ulong)puVar8;
  }
  else {
    *(ulong **)(puVar1[2] + 8) = puVar8;
  }
  puVar13 = puVar8 + 4;
  puVar1[2] = (ulong)puVar8;
  do {
    uVar18 = *puVar1;
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = uVar18 - 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((3 < uVar18) && (((uint)uVar18 >> 1 & 1) == 0)) {
                    /* try { // try from 009eb180 to 009eb1b3 has its CatchHandler @ 009eb1d8 */
    <parking_lot_core::word_lock::parking_lot_core::word_lock::WordLock>::unlock_slow();
  }
  do {
    if (*param_2 != '\x01') {
      ClearExclusiveLocal();
      <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::unlock_slow(param_2,0);
      break;
    }
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(param_2,0x10);
    if (bVar6) {
      *param_2 = '\0';
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  iVar12 = (int)*puVar13;
  if (param_4 == 0xffffffff) {
    while (iVar12 != 0) {
      syscall(0x62,puVar8 + 4,0x80,1,0);
      iVar12 = (int)*puVar13;
    }
  }
  else {
    while (iVar12 != 0) {
                    /* try { // try from 009eae74 to 009eaea7 has its CatchHandler @ 009eb1d4 */
      auVar21 = <std::time::std::time::Instant>::now();
      lVar9 = auVar21._0_8_;
      bVar6 = param_4 <= auVar21._8_4_;
      if (param_3 != lVar9) {
        bVar6 = param_3 <= lVar9;
      }
      if (bVar6) {
        goto LAB_009eaf7c;
      }
      auVar21 = <std::time::Instant_as_core::ops::arith::Sub>::sub
                          (param_3,param_4,lVar9,auVar21._8_8_ & 0xffffffff);
      uStack_80 = auVar21._0_8_;
      local_78 = auVar21._8_8_ & 0xffffffff;
      local_88 = 1;
      syscall(0x62,puVar8 + 4,0x80,1,&uStack_80);
      iVar12 = (int)*puVar13;
    }
  }
LAB_009eaefc:
  bVar11 = false;
  bVar7 = true;
  bVar6 = puVar8[2] == 1;
  goto LAB_009eaf10;
LAB_009eaf7c:
  plVar19 = *(long **)puVar5;
  if (plVar19 == (long *)0x0) {
    plVar19 = (long *)parking_lot_core::parking_lot::create_hashtable();
  }
  puVar20 = (undefined8 *)*puVar8;
  uVar10 = plVar19[1];
  uVar18 = (ulong)((long)puVar20 * -0x61c8864680b583eb) >> ((ulong)(uint)-(int)plVar19[3] & 0x3f);
  ppuVar17 = &PTR_s__root__cargo_registry_src_index__00af7cf0;
  if (uVar10 <= uVar18) {
LAB_009eb188:
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check(uVar18,uVar10,ppuVar17);
  }
  puVar1 = (ulong *)(*plVar19 + uVar18 * 0x40);
  if (*puVar1 == 0) {
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_009eb008;
  }
  else {
    ClearExclusiveLocal();
LAB_009eb008:
    <parking_lot_core::word_lock::parking_lot_core::word_lock::WordLock>::lock_slow();
  }
  if ((*(long **)puVar5 != plVar19) || ((undefined8 *)*puVar8 != puVar20)) {
    do {
      uVar18 = *puVar1;
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = uVar18 - 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((3 < uVar18) && (((uint)uVar18 >> 1 & 1) == 0)) {
                    /* try { // try from 009eaff0 to 009eb013 has its CatchHandler @ 009eb1cc */
      <parking_lot_core::word_lock::parking_lot_core::word_lock::WordLock>::unlock_slow();
    }
    goto LAB_009eaf7c;
  }
  if ((int)*puVar13 == 0) {
    do {
      uVar18 = *puVar1;
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = uVar18 - 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((3 < uVar18) && (((uint)uVar18 >> 1 & 1) == 0)) {
                    /* try { // try from 009eb088 to 009eb15b has its CatchHandler @ 009eb1d8 */
      <parking_lot_core::word_lock::parking_lot_core::word_lock::WordLock>::unlock_slow();
    }
    goto LAB_009eaefc;
  }
  puVar13 = (ulong *)puVar1[1];
  if (puVar13 == (ulong *)0x0) {
    bVar7 = false;
  }
  else {
    if (puVar13 == puVar8) {
      puVar15 = (ulong *)0x0;
      bVar6 = false;
      puVar16 = puVar1;
    }
    else {
      bVar2 = 1;
      do {
        puVar15 = puVar13;
        puVar13 = (ulong *)puVar15[1];
        if (puVar13 == (ulong *)0x0) {
          bVar7 = false;
          goto LAB_009eb104;
        }
        bVar2 = (undefined8 *)*puVar15 != puVar20 & bVar2;
      } while (puVar13 != puVar8);
      bVar6 = (bool)(bVar2 ^ 1);
      puVar16 = puVar15;
    }
    puVar14 = (undefined8 *)puVar13[1];
    puVar16[1] = (ulong)puVar14;
    if ((ulong *)puVar1[2] == puVar8) {
      puVar1[2] = (ulong)puVar15;
    }
    else {
      for (; puVar14 != (undefined8 *)0x0; puVar14 = (undefined8 *)puVar14[1]) {
        if ((undefined8 *)*puVar14 == puVar20) {
          bVar7 = puVar20 != param_1;
          goto LAB_009eb104;
        }
      }
    }
    bVar7 = puVar20 != param_1;
    if (bVar7) {
      bVar6 = true;
    }
    if (!bVar6) {
      bVar7 = false;
      *param_1 = 0;
    }
  }
LAB_009eb104:
  do {
    uVar18 = *puVar1;
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = uVar18 - 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar11 = false;
  if ((uVar18 < 4) || (((uint)uVar18 >> 1 & 1) != 0)) {
    bVar6 = false;
  }
  else {
    <parking_lot_core::word_lock::parking_lot_core::word_lock::WordLock>::unlock_slow();
    bVar11 = false;
    bVar6 = false;
  }
LAB_009eaf10:
  puVar5 = PTR_NUM_THREADS_00b01190;
  if (bVar4) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar5,0x10);
      if (bVar4) {
        *(long *)puVar5 = *(long *)puVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (bVar11) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_0037e592,0x7d,&PTR_s__root__cargo_registry_src_index__00af7c60);
  }
  if (!bVar6) {
    if (*param_2 == '\0') {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar4) {
        *param_2 = '\x01';
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') goto LAB_009eaf4c;
    }
    else {
      ClearExclusiveLocal();
    }
    <parking_lot::raw_mutex::[1]::parking_lot::raw_mutex::RawMutex>::lock_slow(param_2);
  }
LAB_009eaf4c:
  return bVar7 ^ 1;
}


// ===== 009eb1fc  FUN_009eb1fc =====

undefined1  [16] FUN_009eb1fc(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  long *plVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  puVar3 = PTR_HASHTABLE_00b01180;
LAB_009eb234:
  plVar7 = *(long **)puVar3;
  if (plVar7 == (long *)0x0) {
    plVar7 = (long *)parking_lot_core::parking_lot::create_hashtable();
  }
  uVar5 = plVar7[1];
  uVar9 = (ulong)(param_1 * -0x61c8864680b583eb) >> ((ulong)(uint)-(int)plVar7[3] & 0x3f);
  uVar10 = (ulong)(param_2 * -0x61c8864680b583eb) >> ((ulong)(uint)-(int)plVar7[3] & 0x3f);
  if (uVar10 < uVar9) {
    uVar11 = uVar10;
    if (uVar5 <= uVar10) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (uVar10,uVar5,&PTR_s__root__cargo_registry_src_index__00af7c90);
    }
  }
  else {
    uVar11 = uVar9;
    if (uVar5 <= uVar9) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (uVar9,uVar5,&PTR_s__root__cargo_registry_src_index__00af7ca8);
    }
  }
  puVar8 = (ulong *)(*plVar7 + uVar11 * 0x40);
  if (*puVar8 == 0) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(puVar8,0x10);
    if (bVar2) {
      *puVar8 = 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 != '\0') goto LAB_009eb2cc;
    plVar12 = *(long **)puVar3;
  }
  else {
    ClearExclusiveLocal();
LAB_009eb2cc:
    <parking_lot_core::word_lock::parking_lot_core::word_lock::WordLock>::lock_slow();
    plVar12 = *(long **)puVar3;
  }
  if (plVar12 != plVar7) {
    do {
      uVar5 = *puVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(puVar8,0x10);
      if (bVar2) {
        *puVar8 = uVar5 - 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((3 < uVar5) && (((uint)uVar5 >> 1 & 1) == 0)) {
      <parking_lot_core::word_lock::parking_lot_core::word_lock::WordLock>::unlock_slow();
    }
    goto LAB_009eb234;
  }
  if (uVar9 == uVar10) {
    auVar13._8_8_ = puVar8;
    auVar13._0_8_ = puVar8;
    return auVar13;
  }
  uVar5 = plVar7[1];
  if (uVar9 < uVar10) {
    if (uVar5 <= uVar10) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (uVar10,uVar5,&PTR_s__root__cargo_registry_src_index__00af7cd8);
    }
    puVar6 = (ulong *)(*plVar7 + uVar10 * 0x40);
    puVar4 = puVar8;
    puVar8 = puVar6;
    if (*puVar6 == 0) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(puVar6,0x10);
      if (bVar2) {
        *puVar6 = 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
joined_r0x009eb380:
      if (cVar1 == '\0') {
        auVar14._8_8_ = puVar6;
        auVar14._0_8_ = puVar4;
        return auVar14;
      }
      goto LAB_009eb3dc;
    }
  }
  else {
    if (uVar5 <= uVar9) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (uVar9,uVar5,&PTR_s__root__cargo_registry_src_index__00af7cc0);
    }
    puVar4 = (ulong *)(*plVar7 + uVar9 * 0x40);
    puVar6 = puVar8;
    puVar8 = puVar4;
    if (*puVar4 == 0) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(puVar4,0x10);
      if (bVar2) {
        *puVar4 = 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      goto joined_r0x009eb380;
    }
  }
  ClearExclusiveLocal();
LAB_009eb3dc:
  <parking_lot_core::word_lock::parking_lot_core::word_lock::WordLock>::lock_slow(puVar8);
  auVar15._8_8_ = puVar6;
  auVar15._0_8_ = puVar4;
  return auVar15;
}


// ===== 009eb408  <parking_lot::condvar::Condvar_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <parking_lot::condvar::Condvar as core::fmt::Debug>::fmt */

void __rustcall
<parking_lot::condvar::Condvar_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,&DAT_0037e5d0,0xe);
  return;
}


// ===== 009eb41c  FUN_009eb41c =====

void FUN_009eb41c(ulong param_1)

{
  long local_18;
  
  if (((param_1 != 0) && (1 < (param_1 & 3) - 2)) && ((param_1 & 3) != 0)) {
    local_18 = param_1 - 1;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
  }
  return;
}


// ===== 009eb468  FUN_009eb468 =====

void FUN_009eb468(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    free((void *)*param_1);
  }
  free(param_1);
  return;
}


// ===== 009eb4ac  FUN_009eb4ac =====

void FUN_009eb4ac(ulong param_1)

{
  long local_18;
  
  if ((1 < (param_1 & 3) - 2) && ((param_1 & 3) != 0)) {
    local_18 = param_1 - 1;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
  }
  return;
}


// ===== 009eb4f4  FUN_009eb4f4 =====

void FUN_009eb4f4(void *param_1)

{
  pthread_key_t __key;
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  
  __key = *(pthread_key_t *)((long)param_1 + 0x28);
  pthread_setspecific(__key,&DAT_00000001);
  puVar3 = PTR_NUM_THREADS_00b01190;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar2) {
      *(long *)puVar3 = *(long *)puVar3 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  free(param_1);
  iVar4 = pthread_setspecific(__key,(void *)0x0);
                    /* try { // try from 009eb540 to 009eb543 has its CatchHandler @ 009eb550 */
  std::sys::thread_local::guard::key::enable(iVar4);
  return;
}


// ===== 009eb55c  FUN_009eb55c =====

void FUN_009eb55c(long param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined1 auVar10 [12];
  ulong local_68;
  long local_60;
  ulong local_58;
  
  lVar5 = param_1 * 3 + -1;
  uVar2 = 1;
  if (param_1 * 3 != 0 && lVar5 != 0) {
    uVar2 = (0xffffffffffffffffU >> (LZCOUNT(lVar5) & 0x3fU)) + 1;
  }
  auVar10 = <std::time::std::time::Instant>::now();
  uVar7 = uVar2 * 0x40;
  if (uVar2 >> 0x3a != 0 || 0x7fffffffffffffc0 < uVar7) {
    uVar8 = 0;
LAB_009eb5b8:
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar8,uVar7);
  }
  if (uVar7 == 0) {
    uVar9 = 0;
    lVar5 = 0x40;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar8 = 0x40;
    lVar5 = FUN_004b25a4(uVar7,0x40);
    if (lVar5 == 0) goto LAB_009eb5b8;
    uVar9 = 0;
    local_58 = 0;
    local_68 = uVar2;
    local_60 = lVar5;
    if (uVar2 != 0) {
      do {
        uVar4 = local_58;
        if (local_58 == local_68) {
                    /* try { // try from 009eb638 to 009eb63f has its CatchHandler @ 009eb714 */
          <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<parking_lot_core::parking_lot::Bucket>>::
          grow_one(&local_68);
          lVar5 = local_60;
        }
        lVar3 = local_60;
        local_58 = uVar4 + 1;
        puVar1 = (undefined8 *)(lVar5 + uVar9);
        uVar9 = uVar9 + 0x40;
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        *(undefined1 (*) [12])(puVar1 + 3) = auVar10;
        *(int *)(puVar1 + 5) = (int)local_58;
      } while (uVar2 != local_58);
      uVar9 = uVar2;
      if (local_68 <= uVar2) {
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        plVar6 = (long *)FUN_004b25a4(0x20,8);
        lVar5 = lVar3;
        goto joined_r0x009eb6f0;
      }
      lVar5 = FUN_004b2600(local_60,local_68 << 6,0x40,uVar7);
      if (lVar5 == 0) {
                    /* try { // try from 009eb678 to 009eb683 has its CatchHandler @ 009eb704 */
                    /* WARNING: Subroutine does not return */
        alloc::raw_vec::handle_error(0x40,uVar7);
      }
    }
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  plVar6 = (long *)FUN_004b25a4(0x20,8);
joined_r0x009eb6f0:
  if (plVar6 != (long *)0x0) {
    *plVar6 = lVar5;
    plVar6[1] = uVar9;
    plVar6[2] = param_2;
    *(int *)(plVar6 + 3) = 0x3f - (int)LZCOUNT(uVar2);
    return;
  }
                    /* try { // try from 009eb6f4 to 009eb6ff has its CatchHandler @ 009eb72c */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x20);
}


// ===== 009eb74c  <parking_lot_core::parking_lot::[1]::parking_lot_core::parking_lot::ThreadData>::new =====

/* WARNING: Unknown calling convention: __rustcall */
/* <parking_lot_core::parking_lot::[1]::parking_lot_core::parking_lot::ThreadData>::new */

void __rustcall
<parking_lot_core::parking_lot::[1]::parking_lot_core::parking_lot::ThreadData>::new
          (undefined8 *param_1)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  ulong *puVar16;
  ulong *puVar17;
  long *plVar18;
  long lVar19;
  
  puVar9 = PTR_NUM_THREADS_00b01190;
  do {
    lVar12 = *(long *)puVar9 + 1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar9,0x10);
    if (bVar6) {
      *(long *)puVar9 = lVar12;
      cVar5 = ExclusiveMonitorsStatus();
    }
    puVar8 = PTR_HASHTABLE_00b01180;
  } while (cVar5 != '\0');
  do {
    plVar15 = *(long **)puVar8;
    if (plVar15 == (long *)0x0) {
      plVar15 = (long *)parking_lot_core::parking_lot::create_hashtable(lVar12);
      uVar11 = plVar15[1];
    }
    else {
      uVar11 = plVar15[1];
    }
    if ((ulong)(lVar12 * 3) <= uVar11) goto LAB_009eb950;
    if (uVar11 != 0) {
      plVar18 = (long *)*plVar15;
      lVar19 = uVar11 << 6;
LAB_009eb7b0:
      do {
        if (*plVar18 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar6) {
            *plVar18 = 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            lVar19 = lVar19 + -0x40;
            plVar18 = plVar18 + 8;
            if (lVar19 == 0) break;
            goto LAB_009eb7b0;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        <parking_lot_core::word_lock::parking_lot_core::word_lock::WordLock>::lock_slow(plVar18);
        lVar19 = lVar19 + -0x40;
        plVar18 = plVar18 + 8;
      } while (lVar19 != 0);
    }
    if (*(long **)puVar8 == plVar15) {
      plVar18 = (long *)FUN_009eb55c(lVar12,plVar15);
      if (plVar15[1] == 0) {
        *(long **)puVar8 = plVar18;
      }
      else {
        lVar12 = *plVar15;
        lVar19 = lVar12 + plVar15[1] * 0x40;
        do {
          if (*(long **)(lVar12 + 8) != (long *)0x0) {
            lVar7 = plVar18[3];
            lVar4 = *plVar18;
            uVar11 = plVar18[1];
            plVar13 = *(long **)(lVar12 + 8);
            do {
              plVar14 = (long *)plVar13[1];
              uVar10 = (ulong)(*plVar13 * -0x61c8864680b583eb) >> (-(int)lVar7 & 0x3fU);
              if (uVar11 <= uVar10) {
                    /* try { // try from 009eb974 to 009eb97f has its CatchHandler @ 009eb984 */
                    /* WARNING: Subroutine does not return */
                core::panicking::panic_bounds_check
                          (uVar10,uVar11,&PTR_s__root__cargo_registry_src_index__00af7d08);
              }
              lVar2 = lVar4 + uVar10 * 0x40;
              lVar3 = lVar2;
              if (*(long *)(lVar2 + 0x10) != 0) {
                lVar3 = *(long *)(lVar2 + 0x10);
              }
              *(long **)(lVar3 + 8) = plVar13;
              *(long **)(lVar2 + 0x10) = plVar13;
              plVar13[1] = 0;
              plVar13 = plVar14;
            } while (plVar14 != (long *)0x0);
          }
          lVar12 = lVar12 + 0x40;
        } while (lVar12 != lVar19);
        lVar12 = plVar15[1];
        *(long **)puVar8 = plVar18;
        if (lVar12 != 0) {
          puVar16 = (ulong *)*plVar15;
          puVar17 = puVar16;
          do {
            puVar1 = puVar17 + 8;
            do {
              uVar11 = *puVar17;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar17,0x10);
              if (bVar6) {
                *puVar17 = uVar11 - 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if ((3 < uVar11) && (((uint)uVar11 >> 1 & 1) == 0)) {
              <parking_lot_core::word_lock::parking_lot_core::word_lock::WordLock>::unlock_slow();
            }
            puVar17 = puVar1;
          } while (puVar1 != puVar16 + lVar12 * 8);
        }
      }
LAB_009eb950:
      *(undefined8 *)((long)param_1 + 0x1d) = 0;
      param_1[1] = 0;
      *param_1 = 0;
      param_1[3] = 0;
      param_1[2] = 0;
      return;
    }
    puVar17 = (ulong *)*plVar15;
    lVar19 = plVar15[1];
    puVar16 = puVar17;
    if (lVar19 != 0) {
      do {
        puVar1 = puVar16 + 8;
        do {
          uVar11 = *puVar16;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar16,0x10);
          if (bVar6) {
            *puVar16 = uVar11 - 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((3 < uVar11) && (((uint)uVar11 >> 1 & 1) == 0)) {
          <parking_lot_core::word_lock::parking_lot_core::word_lock::WordLock>::unlock_slow(puVar16)
          ;
        }
        puVar16 = puVar1;
      } while (puVar1 != puVar17 + lVar19 * 8);
    }
  } while( true );
}


// ===== 009eb998  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<parking_lot_core::parking_lot::Bucket>>::grow_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<parking_lot_core::parking_lot::Bucket>>::grow_one */

void __rustcall
<alloc::raw_vec::[4]::alloc::raw_vec::RawVec<parking_lot_core::parking_lot::Bucket>>::grow_one
          (undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = FUN_009eba54(param_1,*param_1);
  if (lVar1 == -1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error();
}


// ===== 009eb9bc  FUN_009eb9bc =====

void FUN_009eb9bc(undefined8 *param_1,long param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = 1;
  lVar3 = 8;
  uVar2 = 0;
  if ((param_4 >> 0x3a != 0) || (param_4 = param_4 * 0x40, 0x7fffffffffffffc0 < param_4))
  goto LAB_009eba40;
  if (param_2 == 0) {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    lVar3 = FUN_004b25a4(param_4,0x40);
    if (lVar3 == 0) goto LAB_009eba2c;
LAB_009eba0c:
    uVar1 = 0;
    param_1[1] = lVar3;
  }
  else {
    lVar3 = FUN_004b2600(param_3,param_2 << 6,0x40,param_4);
    if (lVar3 != 0) goto LAB_009eba0c;
LAB_009eba2c:
    param_1[1] = 0x40;
    uVar1 = 1;
  }
  lVar3 = 0x10;
  uVar2 = param_4;
LAB_009eba40:
  *(ulong *)((long)param_1 + lVar3) = uVar2;
  *param_1 = uVar1;
  return;
}


// ===== 009eba54  FUN_009eba54 =====

undefined1  [16] FUN_009eba54(ulong *param_1,long param_2)

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
  FUN_009eb9bc(local_38,*param_1,param_1[1],uVar2);
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


// ===== 009ebad0  <parking_lot_core::word_lock::parking_lot_core::word_lock::WordLock>::unlock_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <parking_lot_core::word_lock::parking_lot_core::word_lock::WordLock>::unlock_slow */

void __rustcall
<parking_lot_core::word_lock::parking_lot_core::word_lock::WordLock>::unlock_slow(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  
  uVar3 = *param_1;
  do {
    while( true ) {
      uVar6 = uVar3;
      if (uVar6 < 4) {
        return;
      }
      if (((uint)uVar6 >> 1 & 1) != 0) {
        return;
      }
      uVar3 = *param_1;
      if (uVar3 == uVar6) break;
      ClearExclusiveLocal();
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = uVar6 | 2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  do {
    plVar5 = (long *)(uVar6 & 0xfffffffffffffffc);
    lVar4 = *plVar5;
    if (lVar4 == 0) {
      plVar7 = (long *)(uVar6 & 0xfffffffffffffffc);
      do {
        plVar8 = (long *)plVar7[2];
        lVar4 = *plVar8;
        plVar8[1] = (long)plVar7;
        plVar7 = plVar8;
      } while (lVar4 == 0);
    }
    *plVar5 = lVar4;
    if ((uVar6 & 1) == 0) {
      uVar3 = uVar6;
      if (*(long *)(lVar4 + 8) != 0) {
        *plVar5 = *(long *)(lVar4 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
          if (bVar2) {
            *param_1 = *param_1 & 0xfffffffffffffffd;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
LAB_009ebbb0:
        *(undefined4 *)(lVar4 + 0x18) = 0;
        syscall(0x62,(undefined4 *)(lVar4 + 0x18),0x81,1);
        return;
      }
      do {
        uVar6 = *param_1;
        if (uVar6 == uVar3) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
          if (bVar2) {
            *param_1 = uVar3 & 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_009ebbb0;
        }
        else {
          ClearExclusiveLocal();
        }
        uVar3 = uVar6;
      } while (uVar6 < 4);
    }
    else {
      uVar3 = *param_1;
      if (uVar3 == uVar6) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar2) {
          *param_1 = uVar6 & 0xfffffffffffffffd;
          cVar1 = ExclusiveMonitorsStatus();
        }
        uVar6 = uVar3;
        if (cVar1 == '\0') {
          return;
        }
      }
      else {
        ClearExclusiveLocal();
        uVar6 = uVar3;
      }
    }
    DataMemoryBarrier(2,1);
  } while( true );
}


// ===== 009ebbc8  <parking_lot_core::word_lock::parking_lot_core::word_lock::WordLock>::lock_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <parking_lot_core::word_lock::parking_lot_core::word_lock::WordLock>::lock_slow */

void __rustcall
<parking_lot_core::word_lock::parking_lot_core::word_lock::WordLock>::lock_slow(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  undefined8 ***local_60;
  undefined8 uStack_58;
  ulong local_50;
  int local_48 [2];
  
  uVar6 = 0;
  uVar4 = *param_1;
  do {
    while( true ) {
      while ((uVar4 & 1) != 0) {
        if ((uVar4 < 4) && (uVar6 < 10)) {
          if (uVar6 < 3) {
            iVar3 = 2 << (ulong)(uVar6 & 0x1f);
            do {
              InstructionSynchronizationBarrier();
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          else {
            std::thread::functions::yield_now();
          }
          uVar6 = uVar6 + 1;
          uVar4 = *param_1;
        }
        else {
          local_60 = &local_60;
          local_50 = 0;
          local_48[0] = 1;
          if ((uVar4 & 0xfffffffffffffffc) != 0) {
            local_60 = (undefined8 ****)0x0;
            local_50 = uVar4 & 0xfffffffffffffffc;
          }
          uStack_58 = 0;
          uVar5 = *param_1;
          if (uVar5 == uVar4) {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
            if (bVar2) {
              *param_1 = uVar4 & 3 | (ulong)&local_60;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') {
              bVar2 = true;
            }
            else {
              bVar2 = false;
            }
          }
          else {
            bVar2 = false;
            ClearExclusiveLocal();
          }
          uVar4 = uVar5;
          if (bVar2) {
            do {
              syscall(0x62,local_48,0x80,1,0);
            } while (local_48[0] != 0);
            uVar6 = 0;
            uVar4 = *param_1;
          }
        }
      }
      uVar5 = *param_1;
      if (uVar5 == uVar4) break;
      ClearExclusiveLocal();
      uVar4 = uVar5;
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = uVar4 | 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
    uVar4 = uVar5;
  } while (cVar1 != '\0');
  return;
}


// ===== 009ebd24  parking_lot_core::parking_lot::create_hashtable =====

/* WARNING: Unknown calling convention: __rustcall */
/* parking_lot_core::parking_lot::create_hashtable */

undefined8 * __rustcall parking_lot_core::parking_lot::create_hashtable(void)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined8 *__ptr;
  undefined8 *puVar4;
  
  __ptr = (undefined8 *)FUN_009eb55c(3,0);
  puVar3 = PTR_HASHTABLE_00b01180;
  do {
    puVar4 = *(undefined8 **)puVar3;
    if (puVar4 != (undefined8 *)0x0) {
      ClearExclusiveLocal();
      if (__ptr[1] != 0) {
        free((void *)*__ptr);
      }
      free(__ptr);
      return puVar4;
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar2) {
      *(undefined8 **)puVar3 = __ptr;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return __ptr;
}


// ===== 009ebda4  parking_lot_core::thread_parker::imp::errno =====

/* WARNING: Unknown calling convention: __rustcall */
/* parking_lot_core::thread_parker::imp::errno */

undefined4 __rustcall parking_lot_core::thread_parker::imp::errno(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)__errno();
  return *puVar1;
}


// ===== 009ebdbc  FUN_009ebdbc =====

void FUN_009ebdbc(void)

{
  undefined1 uStack_11;
  
  FUN_009ebdd8(&uStack_11);
  FUN_009eb41c();
                    /* WARNING: Subroutine does not return */
  std::process::abort();
}


// ===== 009ebdd8  FUN_009ebdd8 =====

undefined ** FUN_009ebdd8(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  long local_58;
  
  puVar4 = &DAT_0037e5de;
  ppuVar5 = (undefined **)0x3d;
  do {
    auVar8 = <std::sys::stdio::unix::Stderr_as_core::io::write::Write>::write
                       (param_1,puVar4,ppuVar5);
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
                    /* try { // try from 009ebe9c to 009ebeaf has its CatchHandler @ 009ebf18 */
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
        return &PTR_DAT_00af7d20;
      }
      ppuVar6 = (undefined **)((long)ppuVar5 - (long)ppuVar3);
      if (ppuVar5 < ppuVar3) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (ppuVar3,ppuVar5,ppuVar5,&PTR_s__nix_store_8006w282fgsx3273c878b_00af7d38);
      }
      puVar4 = puVar4 + (long)ppuVar3;
    }
    ppuVar5 = ppuVar6;
    if (ppuVar6 == (undefined **)0x0) {
      return (undefined **)0x0;
    }
  } while( true );
}


// ===== 009ebf30  <<lock_api::remutex::ReentrantMutex<_,_,_>as_core::fmt::Debug>::fmt::LockedPlaceholder_as{backref_21}>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<lock_api::remutex::ReentrantMutex<_, _, _> as core::fmt::Debug>::fmt::LockedPlaceholder as
   {backref 21}>::fmt */

void __rustcall
<<lock_api::remutex::ReentrantMutex<_,_,_>as_core::fmt::Debug>::fmt::LockedPlaceholder_as{backref_21}>
::fmt(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002a18b8,8);
  return;
}


// ===== 009ebf44  FUN_009ebf44 =====

void FUN_009ebf44(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 009ebf5c  FUN_009ebf5c =====

void FUN_009ebf5c(ulong *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long local_38;
  ulong local_30;
  undefined8 uStack_28;
  
  if (CARRY8(param_3,param_2)) {
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(0);
  }
  uVar2 = *param_1 * 2;
  uVar1 = param_3 + param_2;
  if (param_3 + param_2 <= uVar2) {
    uVar1 = uVar2;
  }
  if (uVar1 < 9) {
    uVar1 = 8;
  }
  FUN_009ec0b0(&local_38,*param_1,param_1[1],uVar1);
  if (local_38 != 1) {
    *param_1 = uVar1;
    param_1[1] = local_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(local_30,uStack_28);
}


// ===== 009ebfd4  <jsi_sys::ffi::base::ffi::[4]::jsi_sys::ffi::base::ffi::JsiValue>::get_number =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::[4]::jsi_sys::ffi::base::ffi::JsiValue>::get_number */

void __rustcall <jsi_sys::ffi::base::ffi::[4]::jsi_sys::ffi::base::ffi::JsiValue>::get_number(void)

{
  (*(code *)PTR_jsi_sys_ffi_cxxbridge1_194_Value_get_number_00b059a0)();
  return;
}


// ===== 009ebfd8  <jsi_sys::ffi::base::ffi::[4]::jsi_sys::ffi::base::ffi::JsiValue>::is_undefined =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::[4]::jsi_sys::ffi::base::ffi::JsiValue>::is_undefined */

uint __rustcall
<jsi_sys::ffi::base::ffi::[4]::jsi_sys::ffi::base::ffi::JsiValue>::is_undefined(void)

{
  uint uVar1;
  
  uVar1 = jsi_sys_ffi_cxxbridge1_194_Value_is_undefined();
  return uVar1 & 1;
}


// ===== 009ebff0  <jsi_sys::ffi::base::ffi::[4]::jsi_sys::ffi::base::ffi::JsiValue>::is_bool =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::[4]::jsi_sys::ffi::base::ffi::JsiValue>::is_bool */

uint __rustcall <jsi_sys::ffi::base::ffi::[4]::jsi_sys::ffi::base::ffi::JsiValue>::is_bool(void)

{
  uint uVar1;
  
  uVar1 = jsi_sys_ffi_cxxbridge1_194_Value_is_bool();
  return uVar1 & 1;
}


// ===== 009ec008  <jsi_sys::ffi::base::ffi::[4]::jsi_sys::ffi::base::ffi::JsiValue>::is_null =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::[4]::jsi_sys::ffi::base::ffi::JsiValue>::is_null */

uint __rustcall <jsi_sys::ffi::base::ffi::[4]::jsi_sys::ffi::base::ffi::JsiValue>::is_null(void)

{
  uint uVar1;
  
  uVar1 = jsi_sys_ffi_cxxbridge1_194_Value_is_null();
  return uVar1 & 1;
}


// ===== 009ec020  <jsi_sys::ffi::base::ffi::[4]::jsi_sys::ffi::base::ffi::JsiValue>::get_bool =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::[4]::jsi_sys::ffi::base::ffi::JsiValue>::get_bool */

uint __rustcall <jsi_sys::ffi::base::ffi::[4]::jsi_sys::ffi::base::ffi::JsiValue>::get_bool(void)

{
  uint uVar1;
  
  uVar1 = jsi_sys_ffi_cxxbridge1_194_Value_get_bool();
  return uVar1 & 1;
}


// ===== 009ec038  <jsi_sys::ffi::base::ffi::[4]::jsi_sys::ffi::base::ffi::JsiValue>::is_bigint =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::[4]::jsi_sys::ffi::base::ffi::JsiValue>::is_bigint */

uint __rustcall <jsi_sys::ffi::base::ffi::[4]::jsi_sys::ffi::base::ffi::JsiValue>::is_bigint(void)

{
  uint uVar1;
  
  uVar1 = jsi_sys_ffi_cxxbridge1_194_Value_is_bigint();
  return uVar1 & 1;
}


// ===== 009ec050  <jsi_sys::ffi::base::ffi::[4]::jsi_sys::ffi::base::ffi::JsiValue>::is_number =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::[4]::jsi_sys::ffi::base::ffi::JsiValue>::is_number */

uint __rustcall <jsi_sys::ffi::base::ffi::[4]::jsi_sys::ffi::base::ffi::JsiValue>::is_number(void)

{
  uint uVar1;
  
  uVar1 = jsi_sys_ffi_cxxbridge1_194_Value_is_number();
  return uVar1 & 1;
}


// ===== 009ec068  <jsi_sys::ffi::base::ffi::[4]::jsi_sys::ffi::base::ffi::JsiValue>::is_object =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::[4]::jsi_sys::ffi::base::ffi::JsiValue>::is_object */

uint __rustcall <jsi_sys::ffi::base::ffi::[4]::jsi_sys::ffi::base::ffi::JsiValue>::is_object(void)

{
  uint uVar1;
  
  uVar1 = jsi_sys_ffi_cxxbridge1_194_Value_is_object();
  return uVar1 & 1;
}


// ===== 009ec080  <jsi_sys::ffi::base::ffi::[4]::jsi_sys::ffi::base::ffi::JsiValue>::is_string =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::[4]::jsi_sys::ffi::base::ffi::JsiValue>::is_string */

uint __rustcall <jsi_sys::ffi::base::ffi::[4]::jsi_sys::ffi::base::ffi::JsiValue>::is_string(void)

{
  uint uVar1;
  
  uVar1 = jsi_sys_ffi_cxxbridge1_194_Value_is_string();
  return uVar1 & 1;
}


// ===== 009ec098  <jsi_sys::ffi::base::ffi::[4]::jsi_sys::ffi::base::ffi::JsiValue>::is_symbol =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::[4]::jsi_sys::ffi::base::ffi::JsiValue>::is_symbol */

uint __rustcall <jsi_sys::ffi::base::ffi::[4]::jsi_sys::ffi::base::ffi::JsiValue>::is_symbol(void)

{
  uint uVar1;
  
  uVar1 = jsi_sys_ffi_cxxbridge1_194_Value_is_symbol();
  return uVar1 & 1;
}


// ===== 009ec0b0  FUN_009ec0b0 =====

void FUN_009ec0b0(undefined8 *param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 < 0) {
    param_1[1] = 0;
    *param_1 = 1;
    return;
  }
  if (param_2 == 0) {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    lVar1 = FUN_004b25a4(param_4,1);
  }
  else {
    lVar1 = FUN_004b2600(param_3,param_2,1,param_4);
  }
  if (lVar1 != 0) {
    param_1[1] = lVar1;
    param_1[2] = param_4;
    *param_1 = 0;
    return;
  }
  param_1[1] = 1;
  param_1[2] = param_4;
  *param_1 = 1;
  return;
}


// ===== 009ec14c  <jsi_sys::ffi::base::ffi::RustNativeStateHolder_as_core::ops::deref::Deref>::deref =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::RustNativeStateHolder as core::ops::deref::Deref>::deref */

undefined8 __rustcall
<jsi_sys::ffi::base::ffi::RustNativeStateHolder_as_core::ops::deref::Deref>::deref
          (undefined8 param_1)

{
  undefined8 local_18;
  
  jsi_sys_ffi_cxxbridge1_194_RustNativeStateHolder_state(param_1,&local_18);
  return local_18;
}


// ===== 009ec170  jsi_sys::ffi::base::ffi::Array_size =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Array_size */

void __rustcall jsi_sys::ffi::base::ffi::Array_size(void)

{
  (*(code *)PTR_jsi_sys_ffi_cxxbridge1_194_Array_size_00b059f8)();
  return;
}


// ===== 009ec174  jsi_sys::ffi::base::ffi::Object_new =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Object_new */

undefined8 __rustcall jsi_sys::ffi::base::ffi::Object_new(void)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  uVar1 = jsi_sys_ffi_cxxbridge1_194_Object_new();
  cxxbridge1_unique_ptr_facebook_jsi_Object_raw(&local_18,uVar1);
  return local_18;
}


// ===== 009ec1a0  jsi_sys::ffi::base::ffi::Value_null =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Value_null */

undefined8 __rustcall jsi_sys::ffi::base::ffi::Value_null(void)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  uVar1 = jsi_sys_ffi_cxxbridge1_194_Value_null();
  cxxbridge1_unique_ptr_facebook_jsi_Value_raw(&local_18,uVar1);
  return local_18;
}


// ===== 009ec1cc  jsi_sys::ffi::base::ffi::Array_clone =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Array_clone */

undefined8 __rustcall jsi_sys::ffi::base::ffi::Array_clone(void)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  uVar1 = jsi_sys_ffi_cxxbridge1_194_Array_clone();
  cxxbridge1_unique_ptr_facebook_jsi_Array_raw(&local_18,uVar1);
  return local_18;
}


// ===== 009ec1f8  jsi_sys::ffi::base::ffi::String_utf8 =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::String_utf8 */

void __rustcall
jsi_sys::ffi::base::ffi::String_utf8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  jsi_sys_ffi_cxxbridge1_194_String_utf8(param_2,param_3,param_1);
  return;
}


// ===== 009ec200  jsi_sys::ffi::base::ffi::Value_clone =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Value_clone */

undefined8 __rustcall jsi_sys::ffi::base::ffi::Value_clone(void)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  uVar1 = jsi_sys_ffi_cxxbridge1_194_Value_clone();
  cxxbridge1_unique_ptr_facebook_jsi_Value_raw(&local_18,uVar1);
  return local_18;
}


// ===== 009ec22c  jsi_sys::ffi::base::ffi::BigInt_clone =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::BigInt_clone */

undefined8 __rustcall jsi_sys::ffi::base::ffi::BigInt_clone(void)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  uVar1 = jsi_sys_ffi_cxxbridge1_194_BigInt_clone();
  cxxbridge1_unique_ptr_facebook_jsi_BigInt_raw(&local_18,uVar1);
  return local_18;
}


// ===== 009ec258  jsi_sys::ffi::base::ffi::Object_clone =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Object_clone */

undefined8 __rustcall jsi_sys::ffi::base::ffi::Object_clone(void)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  uVar1 = jsi_sys_ffi_cxxbridge1_194_Object_clone();
  cxxbridge1_unique_ptr_facebook_jsi_Object_raw(&local_18,uVar1);
  return local_18;
}


// ===== 009ec284  jsi_sys::ffi::base::ffi::String_clone =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::String_clone */

undefined8 __rustcall jsi_sys::ffi::base::ffi::String_clone(void)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  uVar1 = jsi_sys_ffi_cxxbridge1_194_String_clone();
  cxxbridge1_unique_ptr_facebook_jsi_String_raw(&local_18,uVar1);
  return local_18;
}


// ===== 009ec2b0  jsi_sys::ffi::base::ffi::Symbol_clone =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Symbol_clone */

undefined8 __rustcall jsi_sys::ffi::base::ffi::Symbol_clone(void)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  uVar1 = jsi_sys_ffi_cxxbridge1_194_Symbol_clone();
  cxxbridge1_unique_ptr_facebook_jsi_Symbol_raw(&local_18,uVar1);
  return local_18;
}


// ===== 009ec2dc  jsi_sys::ffi::base::ffi::Value_fromInt =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Value_fromInt */

undefined8 __rustcall jsi_sys::ffi::base::ffi::Value_fromInt(void)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  uVar1 = jsi_sys_ffi_cxxbridge1_194_Value_fromInt();
  cxxbridge1_unique_ptr_facebook_jsi_Value_raw(&local_18,uVar1);
  return local_18;
}


// ===== 009ec308  jsi_sys::ffi::base::ffi::BigInt_fromI64 =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::BigInt_fromI64 */

undefined8 __rustcall jsi_sys::ffi::base::ffi::BigInt_fromI64(void)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  uVar1 = jsi_sys_ffi_cxxbridge1_194_BigInt_fromI64();
  cxxbridge1_unique_ptr_facebook_jsi_BigInt_raw(&local_18,uVar1);
  return local_18;
}


// ===== 009ec334  jsi_sys::ffi::base::ffi::BigInt_fromU64 =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::BigInt_fromU64 */

undefined8 __rustcall jsi_sys::ffi::base::ffi::BigInt_fromU64(void)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  uVar1 = jsi_sys_ffi_cxxbridge1_194_BigInt_fromU64();
  cxxbridge1_unique_ptr_facebook_jsi_BigInt_raw(&local_18,uVar1);
  return local_18;
}


// ===== 009ec360  jsi_sys::ffi::base::ffi::BigInt_isInt64 =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::BigInt_isInt64 */

uint __rustcall jsi_sys::ffi::base::ffi::BigInt_isInt64(void)

{
  uint uVar1;
  
  uVar1 = jsi_sys_ffi_cxxbridge1_194_BigInt_isInt64();
  return uVar1 & 1;
}


// ===== 009ec378  jsi_sys::ffi::base::ffi::Function_call0 =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Function_call0 */

void __rustcall
jsi_sys::ffi::base::ffi::Function_call0
          (undefined1 (*param_1) [16],undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined8 local_28;
  long local_8;
  
  auVar1 = jsi_sys_ffi_cxxbridge1_194_Function_call0(param_2,param_3,&local_28);
  if (auVar1._0_8_ != 0) {
    *param_1 = auVar1;
    return;
  }
  cxxbridge1_unique_ptr_facebook_jsi_Value_raw(&local_8,local_28);
  *(undefined8 *)*param_1 = 0;
  *(long *)(*param_1 + 8) = local_8;
  return;
}


// ===== 009ec3d0  jsi_sys::ffi::base::ffi::Function_call1 =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Function_call1 */

void __rustcall jsi_sys::ffi::base::ffi::Function_call1(undefined1 (*param_1) [16])

{
  undefined1 auVar1 [16];
  undefined8 local_28;
  long local_8;
  
  auVar1 = jsi_sys_ffi_cxxbridge1_194_Function_call1();
  if (auVar1._0_8_ != 0) {
    *param_1 = auVar1;
    return;
  }
  cxxbridge1_unique_ptr_facebook_jsi_Value_raw(&local_8,local_28);
  *(undefined8 *)*param_1 = 0;
  *(long *)(*param_1 + 8) = local_8;
  return;
}


// ===== 009ec428  jsi_sys::ffi::base::ffi::Function_call2 =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Function_call2 */

void __rustcall jsi_sys::ffi::base::ffi::Function_call2(undefined1 (*param_1) [16])

{
  undefined1 auVar1 [16];
  undefined8 local_28;
  long local_8;
  
  auVar1 = jsi_sys_ffi_cxxbridge1_194_Function_call2();
  if (auVar1._0_8_ != 0) {
    *param_1 = auVar1;
    return;
  }
  cxxbridge1_unique_ptr_facebook_jsi_Value_raw(&local_8,local_28);
  *(undefined8 *)*param_1 = 0;
  *(long *)(*param_1 + 8) = local_8;
  return;
}


// ===== 009ec480  jsi_sys::ffi::base::ffi::Function_call3 =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Function_call3 */

void __rustcall jsi_sys::ffi::base::ffi::Function_call3(undefined1 (*param_1) [16])

{
  undefined1 auVar1 [16];
  undefined8 local_28;
  long local_8;
  
  auVar1 = jsi_sys_ffi_cxxbridge1_194_Function_call3();
  if (auVar1._0_8_ != 0) {
    *param_1 = auVar1;
    return;
  }
  cxxbridge1_unique_ptr_facebook_jsi_Value_raw(&local_8,local_28);
  *(undefined8 *)*param_1 = 0;
  *(long *)(*param_1 + 8) = local_8;
  return;
}


// ===== 009ec4d8  jsi_sys::ffi::base::ffi::Function_call4 =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Function_call4 */

void __rustcall jsi_sys::ffi::base::ffi::Function_call4(undefined1 (*param_1) [16])

{
  undefined1 auVar1 [16];
  undefined8 local_28;
  long local_8;
  
  auVar1 = jsi_sys_ffi_cxxbridge1_194_Function_call4();
  if (auVar1._0_8_ != 0) {
    *param_1 = auVar1;
    return;
  }
  cxxbridge1_unique_ptr_facebook_jsi_Value_raw(&local_8,local_28);
  *(undefined8 *)*param_1 = 0;
  *(long *)(*param_1 + 8) = local_8;
  return;
}


// ===== 009ec530  jsi_sys::ffi::base::ffi::Function_call5 =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Function_call5 */

void __rustcall jsi_sys::ffi::base::ffi::Function_call5(undefined1 (*param_1) [16])

{
  undefined1 auVar1 [16];
  undefined8 local_28;
  long local_8;
  
  auVar1 = jsi_sys_ffi_cxxbridge1_194_Function_call5();
  if (auVar1._0_8_ != 0) {
    *param_1 = auVar1;
    return;
  }
  cxxbridge1_unique_ptr_facebook_jsi_Value_raw(&local_8,local_28);
  *(undefined8 *)*param_1 = 0;
  *(long *)(*param_1 + 8) = local_8;
  return;
}


// ===== 009ec588  jsi_sys::ffi::base::ffi::Function_call6 =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Function_call6 */

void __rustcall jsi_sys::ffi::base::ffi::Function_call6(undefined1 (*param_1) [16])

{
  undefined1 auVar1 [16];
  undefined8 local_28;
  long local_8;
  
  auVar1 = jsi_sys_ffi_cxxbridge1_194_Function_call6();
  if (auVar1._0_8_ != 0) {
    *param_1 = auVar1;
    return;
  }
  cxxbridge1_unique_ptr_facebook_jsi_Value_raw(&local_8,local_28);
  *(undefined8 *)*param_1 = 0;
  *(long *)(*param_1 + 8) = local_8;
  return;
}


// ===== 009ec5e4  jsi_sys::ffi::base::ffi::Function_clone =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Function_clone */

undefined8 __rustcall jsi_sys::ffi::base::ffi::Function_clone(void)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  uVar1 = jsi_sys_ffi_cxxbridge1_194_Function_clone();
  cxxbridge1_unique_ptr_facebook_jsi_Function_raw(&local_18,uVar1);
  return local_18;
}


// ===== 009ec610  jsi_sys::ffi::base::ffi::Object_asArray =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Object_asArray */

undefined8 __rustcall jsi_sys::ffi::base::ffi::Object_asArray(void)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  uVar1 = jsi_sys_ffi_cxxbridge1_194_Object_asArray();
  cxxbridge1_unique_ptr_facebook_jsi_Array_raw(&local_18,uVar1);
  return local_18;
}


// ===== 009ec63c  jsi_sys::ffi::base::ffi::Object_isArray =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Object_isArray */

uint __rustcall jsi_sys::ffi::base::ffi::Object_isArray(void)

{
  uint uVar1;
  
  uVar1 = jsi_sys_ffi_cxxbridge1_194_Object_isArray();
  return uVar1 & 1;
}


// ===== 009ec654  jsi_sys::ffi::base::ffi::Runtime_global =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Runtime_global */

undefined8 __rustcall jsi_sys::ffi::base::ffi::Runtime_global(void)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  uVar1 = jsi_sys_ffi_cxxbridge1_194_Runtime_global();
  cxxbridge1_unique_ptr_facebook_jsi_Object_raw(&local_18,uVar1);
  return local_18;
}


// ===== 009ec680  jsi_sys::ffi::base::ffi::Value_asBigInt =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Value_asBigInt */

undefined8 __rustcall jsi_sys::ffi::base::ffi::Value_asBigInt(void)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  uVar1 = jsi_sys_ffi_cxxbridge1_194_Value_asBigInt();
  cxxbridge1_unique_ptr_facebook_jsi_BigInt_raw(&local_18,uVar1);
  return local_18;
}


// ===== 009ec6ac  jsi_sys::ffi::base::ffi::Value_asObject =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Value_asObject */

undefined8 __rustcall jsi_sys::ffi::base::ffi::Value_asObject(void)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  uVar1 = jsi_sys_ffi_cxxbridge1_194_Value_asObject();
  cxxbridge1_unique_ptr_facebook_jsi_Object_raw(&local_18,uVar1);
  return local_18;
}


// ===== 009ec6d8  jsi_sys::ffi::base::ffi::Value_asString =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Value_asString */

undefined8 __rustcall jsi_sys::ffi::base::ffi::Value_asString(void)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  uVar1 = jsi_sys_ffi_cxxbridge1_194_Value_asString();
  cxxbridge1_unique_ptr_facebook_jsi_String_raw(&local_18,uVar1);
  return local_18;
}


// ===== 009ec704  jsi_sys::ffi::base::ffi::Value_asSymbol =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Value_asSymbol */

undefined8 __rustcall jsi_sys::ffi::base::ffi::Value_asSymbol(void)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  uVar1 = jsi_sys_ffi_cxxbridge1_194_Value_asSymbol();
  cxxbridge1_unique_ptr_facebook_jsi_Symbol_raw(&local_18,uVar1);
  return local_18;
}


// ===== 009ec730  jsi_sys::ffi::base::ffi::Value_fromBool =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Value_fromBool */

undefined8 __rustcall jsi_sys::ffi::base::ffi::Value_fromBool(void)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  uVar1 = jsi_sys_ffi_cxxbridge1_194_Value_fromBool();
  cxxbridge1_unique_ptr_facebook_jsi_Value_raw(&local_18,uVar1);
  return local_18;
}


// ===== 009ec75c  jsi_sys::ffi::base::ffi::Value_toString =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Value_toString */

undefined8 __rustcall jsi_sys::ffi::base::ffi::Value_toString(void)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  uVar1 = jsi_sys_ffi_cxxbridge1_194_Value_toString();
  cxxbridge1_unique_ptr_facebook_jsi_String_raw(&local_18,uVar1);
  return local_18;
}


// ===== 009ec788  jsi_sys::ffi::base::ffi::Array_intoValue =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Array_intoValue */

undefined8 __rustcall
jsi_sys::ffi::base::ffi::Array_intoValue(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_8;
  
  local_8 = param_2;
  uVar1 = cxxbridge1_unique_ptr_facebook_jsi_Array_release(&local_8);
  uVar1 = jsi_sys_ffi_cxxbridge1_194_Array_intoValue(param_1,uVar1);
  cxxbridge1_unique_ptr_facebook_jsi_Value_raw(&local_8,uVar1);
  return local_8;
}


// ===== 009ec7cc  jsi_sys::ffi::base::ffi::BigInt_getInt64 =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::BigInt_getInt64 */

void __rustcall jsi_sys::ffi::base::ffi::BigInt_getInt64(void)

{
  (*(code *)PTR_jsi_sys_ffi_cxxbridge1_194_BigInt_getInt64_00b05b38)();
  return;
}


// ===== 009ec7d0  jsi_sys::ffi::base::ffi::BigInt_isUint64 =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::BigInt_isUint64 */

uint __rustcall jsi_sys::ffi::base::ffi::BigInt_isUint64(void)

{
  uint uVar1;
  
  uVar1 = jsi_sys_ffi_cxxbridge1_194_BigInt_isUint64();
  return uVar1 & 1;
}


// ===== 009ec7e8  jsi_sys::ffi::base::ffi::BigInt_toString =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::BigInt_toString */

undefined8 __rustcall jsi_sys::ffi::base::ffi::BigInt_toString(void)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  uVar1 = jsi_sys_ffi_cxxbridge1_194_BigInt_toString();
  cxxbridge1_unique_ptr_facebook_jsi_String_raw(&local_18,uVar1);
  return local_18;
}


// ===== 009ec814  jsi_sys::ffi::base::ffi::Object_getArray =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Object_getArray */

undefined8 __rustcall
jsi_sys::ffi::base::ffi::Object_getArray(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_8;
  
  local_8 = param_2;
  uVar1 = cxxbridge1_unique_ptr_facebook_jsi_Object_release(&local_8);
  uVar1 = jsi_sys_ffi_cxxbridge1_194_Object_getArray(param_1,uVar1);
  cxxbridge1_unique_ptr_facebook_jsi_Array_raw(&local_8,uVar1);
  return local_8;
}


// ===== 009ec858  jsi_sys::ffi::base::ffi::String_fromUtf8 =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::String_fromUtf8 */

undefined8 __rustcall jsi_sys::ffi::base::ffi::String_fromUtf8(void)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  uVar1 = jsi_sys_ffi_cxxbridge1_194_String_fromUtf8();
  cxxbridge1_unique_ptr_facebook_jsi_String_raw(&local_18,uVar1);
  return local_18;
}


// ===== 009ec884  jsi_sys::ffi::base::ffi::Symbol_toString =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Symbol_toString */

void __rustcall
jsi_sys::ffi::base::ffi::Symbol_toString(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  jsi_sys_ffi_cxxbridge1_194_Symbol_toString(param_2,param_3,param_1);
  return;
}


// ===== 009ec88c  jsi_sys::ffi::base::ffi::Value_getBigInt =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Value_getBigInt */

undefined8 __rustcall
jsi_sys::ffi::base::ffi::Value_getBigInt(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_8;
  
  local_8 = param_2;
  uVar1 = cxxbridge1_unique_ptr_facebook_jsi_Value_release(&local_8);
  uVar1 = jsi_sys_ffi_cxxbridge1_194_Value_getBigInt(param_1,uVar1);
  cxxbridge1_unique_ptr_facebook_jsi_BigInt_raw(&local_8,uVar1);
  return local_8;
}


// ===== 009ec8d0  jsi_sys::ffi::base::ffi::Value_getObject =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Value_getObject */

undefined8 __rustcall
jsi_sys::ffi::base::ffi::Value_getObject(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_8;
  
  local_8 = param_2;
  uVar1 = cxxbridge1_unique_ptr_facebook_jsi_Value_release(&local_8);
  uVar1 = jsi_sys_ffi_cxxbridge1_194_Value_getObject(param_1,uVar1);
  cxxbridge1_unique_ptr_facebook_jsi_Object_raw(&local_8,uVar1);
  return local_8;
}


// ===== 009ec914  jsi_sys::ffi::base::ffi::Value_getString =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Value_getString */

undefined8 __rustcall
jsi_sys::ffi::base::ffi::Value_getString(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_8;
  
  local_8 = param_2;
  uVar1 = cxxbridge1_unique_ptr_facebook_jsi_Value_release(&local_8);
  uVar1 = jsi_sys_ffi_cxxbridge1_194_Value_getString(param_1,uVar1);
  cxxbridge1_unique_ptr_facebook_jsi_String_raw(&local_8,uVar1);
  return local_8;
}


// ===== 009ec958  jsi_sys::ffi::base::ffi::Value_getSymbol =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Value_getSymbol */

undefined8 __rustcall
jsi_sys::ffi::base::ffi::Value_getSymbol(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_8;
  
  local_8 = param_2;
  uVar1 = cxxbridge1_unique_ptr_facebook_jsi_Value_release(&local_8);
  uVar1 = jsi_sys_ffi_cxxbridge1_194_Value_getSymbol(param_1,uVar1);
  cxxbridge1_unique_ptr_facebook_jsi_Symbol_raw(&local_8,uVar1);
  return local_8;
}


// ===== 009ec99c  jsi_sys::ffi::base::ffi::Value_undefined =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Value_undefined */

undefined8 __rustcall jsi_sys::ffi::base::ffi::Value_undefined(void)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  uVar1 = jsi_sys_ffi_cxxbridge1_194_Value_undefined();
  cxxbridge1_unique_ptr_facebook_jsi_Value_raw(&local_18,uVar1);
  return local_18;
}


// ===== 009ec9c8  jsi_sys::ffi::base::ffi::Array_withLength =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Array_withLength */

undefined8 __rustcall jsi_sys::ffi::base::ffi::Array_withLength(void)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  uVar1 = jsi_sys_ffi_cxxbridge1_194_Array_withLength();
  cxxbridge1_unique_ptr_facebook_jsi_Array_raw(&local_18,uVar1);
  return local_18;
}


// ===== 009ec9f4  jsi_sys::ffi::base::ffi::BigInt_getUint64 =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::BigInt_getUint64 */

void __rustcall jsi_sys::ffi::base::ffi::BigInt_getUint64(void)

{
  (*(code *)PTR_jsi_sys_ffi_cxxbridge1_194_BigInt_getUint64_00b05ba8)();
  return;
}


// ===== 009ec9f8  jsi_sys::ffi::base::ffi::Function_asValue =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Function_asValue */

undefined8 __rustcall jsi_sys::ffi::base::ffi::Function_asValue(void)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  uVar1 = jsi_sys_ffi_cxxbridge1_194_Function_asValue();
  cxxbridge1_unique_ptr_facebook_jsi_Value_raw(&local_18,uVar1);
  return local_18;
}


// ===== 009eca24  jsi_sys::ffi::base::ffi::PropNameID_clone =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::PropNameID_clone */

undefined8 __rustcall jsi_sys::ffi::base::ffi::PropNameID_clone(void)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  uVar1 = jsi_sys_ffi_cxxbridge1_194_PropNameID_clone();
  cxxbridge1_unique_ptr_facebook_jsi_PropNameID_raw(&local_18,uVar1);
  return local_18;
}


// ===== 009eca50  jsi_sys::ffi::base::ffi::StringBuffer_new =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::StringBuffer_new */

void __rustcall
jsi_sys::ffi::base::ffi::StringBuffer_new(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  jsi_sys_ffi_cxxbridge1_194_StringBuffer_new(param_2,param_3,param_1);
  return;
}


// ===== 009eca58  jsi_sys::ffi::base::ffi::Value_fromBigInt =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Value_fromBigInt */

undefined8 __rustcall
jsi_sys::ffi::base::ffi::Value_fromBigInt(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_8;
  
  local_8 = param_2;
  uVar1 = cxxbridge1_unique_ptr_facebook_jsi_BigInt_release(&local_8);
  uVar1 = jsi_sys_ffi_cxxbridge1_194_Value_fromBigInt(param_1,uVar1);
  cxxbridge1_unique_ptr_facebook_jsi_Value_raw(&local_8,uVar1);
  return local_8;
}


// ===== 009eca9c  jsi_sys::ffi::base::ffi::Value_fromDouble =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Value_fromDouble */

undefined8 __rustcall jsi_sys::ffi::base::ffi::Value_fromDouble(void)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  uVar1 = jsi_sys_ffi_cxxbridge1_194_Value_fromDouble();
  cxxbridge1_unique_ptr_facebook_jsi_Value_raw(&local_18,uVar1);
  return local_18;
}


// ===== 009ecac8  jsi_sys::ffi::base::ffi::Value_fromObject =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Value_fromObject */

undefined8 __rustcall
jsi_sys::ffi::base::ffi::Value_fromObject(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_8;
  
  local_8 = param_2;
  uVar1 = cxxbridge1_unique_ptr_facebook_jsi_Object_release(&local_8);
  uVar1 = jsi_sys_ffi_cxxbridge1_194_Value_fromObject(param_1,uVar1);
  cxxbridge1_unique_ptr_facebook_jsi_Value_raw(&local_8,uVar1);
  return local_8;
}


// ===== 009ecb0c  jsi_sys::ffi::base::ffi::Value_fromString =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Value_fromString */

undefined8 __rustcall
jsi_sys::ffi::base::ffi::Value_fromString(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_8;
  
  local_8 = param_2;
  uVar1 = cxxbridge1_unique_ptr_facebook_jsi_String_release(&local_8);
  uVar1 = jsi_sys_ffi_cxxbridge1_194_Value_fromString(param_1,uVar1);
  cxxbridge1_unique_ptr_facebook_jsi_Value_raw(&local_8,uVar1);
  return local_8;
}


// ===== 009ecb50  jsi_sys::ffi::base::ffi::Value_fromSymbol =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Value_fromSymbol */

undefined8 __rustcall
jsi_sys::ffi::base::ffi::Value_fromSymbol(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_8;
  
  local_8 = param_2;
  uVar1 = cxxbridge1_unique_ptr_facebook_jsi_Symbol_release(&local_8);
  uVar1 = jsi_sys_ffi_cxxbridge1_194_Value_fromSymbol(param_1,uVar1);
  cxxbridge1_unique_ptr_facebook_jsi_Value_raw(&local_8,uVar1);
  return local_8;
}


// ===== 009ecb94  jsi_sys::ffi::base::ffi::Object_asFunction =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Object_asFunction */

undefined8 __rustcall jsi_sys::ffi::base::ffi::Object_asFunction(void)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  uVar1 = jsi_sys_ffi_cxxbridge1_194_Object_asFunction();
  cxxbridge1_unique_ptr_facebook_jsi_Function_raw(&local_18,uVar1);
  return local_18;
}


// ===== 009ecbc0  jsi_sys::ffi::base::ffi::Object_isFunction =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Object_isFunction */

uint __rustcall jsi_sys::ffi::base::ffi::Object_isFunction(void)

{
  uint uVar1;
  
  uVar1 = jsi_sys_ffi_cxxbridge1_194_Object_isFunction();
  return uVar1 & 1;
}


// ===== 009ecbd8  jsi_sys::ffi::base::ffi::Function_intoValue =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Function_intoValue */

undefined8 __rustcall
jsi_sys::ffi::base::ffi::Function_intoValue(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_8;
  
  local_8 = param_2;
  uVar1 = cxxbridge1_unique_ptr_facebook_jsi_Function_release(&local_8);
  uVar1 = jsi_sys_ffi_cxxbridge1_194_Function_intoValue(param_1,uVar1);
  cxxbridge1_unique_ptr_facebook_jsi_Value_raw(&local_8,uVar1);
  return local_8;
}


// ===== 009ecc1c  jsi_sys::ffi::base::ffi::Object_getProperty =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Object_getProperty */

undefined8 __rustcall jsi_sys::ffi::base::ffi::Object_getProperty(void)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  uVar1 = jsi_sys_ffi_cxxbridge1_194_Object_getProperty();
  cxxbridge1_unique_ptr_facebook_jsi_Value_raw(&local_18,uVar1);
  return local_18;
}


// ===== 009ecc48  jsi_sys::ffi::base::ffi::Object_hasProperty =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Object_hasProperty */

uint __rustcall jsi_sys::ffi::base::ffi::Object_hasProperty(void)

{
  uint uVar1;
  
  uVar1 = jsi_sys_ffi_cxxbridge1_194_Object_hasProperty();
  return uVar1 & 1;
}


// ===== 009ecc60  jsi_sys::ffi::base::ffi::Object_setProperty =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Object_setProperty */

void __rustcall
jsi_sys::ffi::base::ffi::Object_setProperty
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  local_18 = param_4;
  uVar1 = cxxbridge1_unique_ptr_facebook_jsi_Value_release(&local_18);
  jsi_sys_ffi_cxxbridge1_194_Object_setProperty(param_1,param_2,param_3,uVar1);
  return;
}


// ===== 009eccac  jsi_sys::ffi::base::ffi::PropNameID_forUtf8 =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::PropNameID_forUtf8 */

undefined8 __rustcall jsi_sys::ffi::base::ffi::PropNameID_forUtf8(void)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  uVar1 = jsi_sys_ffi_cxxbridge1_194_PropNameID_forUtf8();
  cxxbridge1_unique_ptr_facebook_jsi_PropNameID_raw(&local_18,uVar1);
  return local_18;
}


// ===== 009eccd8  jsi_sys::ffi::base::ffi::Value_strictEquals =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Value_strictEquals */

uint __rustcall jsi_sys::ffi::base::ffi::Value_strictEquals(void)

{
  uint uVar1;
  
  uVar1 = jsi_sys_ffi_cxxbridge1_194_Value_strictEquals();
  return uVar1 & 1;
}


// ===== 009eccf0  jsi_sys::ffi::base::ffi::BigInt_strictEquals =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::BigInt_strictEquals */

uint __rustcall jsi_sys::ffi::base::ffi::BigInt_strictEquals(void)

{
  uint uVar1;
  
  uVar1 = jsi_sys_ffi_cxxbridge1_194_BigInt_strictEquals();
  return uVar1 & 1;
}


// ===== 009ecd08  jsi_sys::ffi::base::ffi::Object_intoFunction =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Object_intoFunction */

undefined8 __rustcall
jsi_sys::ffi::base::ffi::Object_intoFunction(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_8;
  
  local_8 = param_2;
  uVar1 = cxxbridge1_unique_ptr_facebook_jsi_Object_release(&local_8);
  uVar1 = jsi_sys_ffi_cxxbridge1_194_Object_intoFunction(param_1,uVar1);
  cxxbridge1_unique_ptr_facebook_jsi_Function_raw(&local_8,uVar1);
  return local_8;
}


// ===== 009ecd4c  jsi_sys::ffi::base::ffi::Object_strictEquals =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Object_strictEquals */

uint __rustcall jsi_sys::ffi::base::ffi::Object_strictEquals(void)

{
  uint uVar1;
  
  uVar1 = jsi_sys_ffi_cxxbridge1_194_Object_strictEquals();
  return uVar1 & 1;
}


// ===== 009ecd64  jsi_sys::ffi::base::ffi::String_strictEquals =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::String_strictEquals */

uint __rustcall jsi_sys::ffi::base::ffi::String_strictEquals(void)

{
  uint uVar1;
  
  uVar1 = jsi_sys_ffi_cxxbridge1_194_String_strictEquals();
  return uVar1 & 1;
}


// ===== 009ecd7c  jsi_sys::ffi::base::ffi::Symbol_strictEquals =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Symbol_strictEquals */

uint __rustcall jsi_sys::ffi::base::ffi::Symbol_strictEquals(void)

{
  uint uVar1;
  
  uVar1 = jsi_sys_ffi_cxxbridge1_194_Symbol_strictEquals();
  return uVar1 & 1;
}


// ===== 009ecd94  jsi_sys::ffi::base::ffi::PropNameID_forString =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::PropNameID_forString */

undefined8 __rustcall jsi_sys::ffi::base::ffi::PropNameID_forString(void)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  uVar1 = jsi_sys_ffi_cxxbridge1_194_PropNameID_forString();
  cxxbridge1_unique_ptr_facebook_jsi_PropNameID_raw(&local_18,uVar1);
  return local_18;
}


// ===== 009ecdc0  jsi_sys::ffi::base::ffi::PropNameID_forSymbol =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::PropNameID_forSymbol */

undefined8 __rustcall jsi_sys::ffi::base::ffi::PropNameID_forSymbol(void)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  uVar1 = jsi_sys_ffi_cxxbridge1_194_PropNameID_forSymbol();
  cxxbridge1_unique_ptr_facebook_jsi_PropNameID_raw(&local_18,uVar1);
  return local_18;
}


// ===== 009ecdec  jsi_sys::ffi::base::ffi::Array_getValueAtIndex =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Array_getValueAtIndex */

undefined8 __rustcall jsi_sys::ffi::base::ffi::Array_getValueAtIndex(void)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  uVar1 = jsi_sys_ffi_cxxbridge1_194_Array_getValueAtIndex();
  cxxbridge1_unique_ptr_facebook_jsi_Value_raw(&local_18,uVar1);
  return local_18;
}


// ===== 009ece18  jsi_sys::ffi::base::ffi::Array_setValueAtIndex =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Array_setValueAtIndex */

void __rustcall
jsi_sys::ffi::base::ffi::Array_setValueAtIndex
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  local_18 = param_4;
  uVar1 = cxxbridge1_unique_ptr_facebook_jsi_Value_release(&local_18);
  jsi_sys_ffi_cxxbridge1_194_Array_setValueAtIndex(param_1,param_2,param_3,uVar1);
  return;
}


// ===== 009ece64  jsi_sys::ffi::base::ffi::Object_getNativeState =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Object_getNativeState */

void __rustcall
jsi_sys::ffi::base::ffi::Object_getNativeState
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  jsi_sys_ffi_cxxbridge1_194_Object_getNativeState(param_2,param_3,param_1);
  return;
}


// ===== 009ece6c  jsi_sys::ffi::base::ffi::Object_hasNativeState =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Object_hasNativeState */

uint __rustcall jsi_sys::ffi::base::ffi::Object_hasNativeState(void)

{
  uint uVar1;
  
  uVar1 = jsi_sys_ffi_cxxbridge1_194_Object_hasNativeState();
  return uVar1 & 1;
}


// ===== 009ece84  jsi_sys::ffi::base::ffi::Object_setNativeState =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Object_setNativeState */

void __rustcall
jsi_sys::ffi::base::ffi::Object_setNativeState
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 local_20;
  undefined8 uStack_18;
  
  uStack_18 = param_3[1];
  local_20 = *param_3;
  jsi_sys_ffi_cxxbridge1_194_Object_setNativeState(param_1,param_2,&local_20);
  return;
}


// ===== 009eceac  jsi_sys::ffi::base::ffi::Function_callWithThis0 =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Function_callWithThis0 */

void __rustcall jsi_sys::ffi::base::ffi::Function_callWithThis0(undefined1 (*param_1) [16])

{
  undefined1 auVar1 [16];
  undefined8 local_28;
  long local_8;
  
  auVar1 = jsi_sys_ffi_cxxbridge1_194_Function_callWithThis0();
  if (auVar1._0_8_ != 0) {
    *param_1 = auVar1;
    return;
  }
  cxxbridge1_unique_ptr_facebook_jsi_Value_raw(&local_8,local_28);
  *(undefined8 *)*param_1 = 0;
  *(long *)(*param_1 + 8) = local_8;
  return;
}


// ===== 009ecf04  jsi_sys::ffi::base::ffi::Function_callWithThis1 =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Function_callWithThis1 */

void __rustcall jsi_sys::ffi::base::ffi::Function_callWithThis1(undefined1 (*param_1) [16])

{
  undefined1 auVar1 [16];
  undefined8 local_28;
  long local_8;
  
  auVar1 = jsi_sys_ffi_cxxbridge1_194_Function_callWithThis1();
  if (auVar1._0_8_ != 0) {
    *param_1 = auVar1;
    return;
  }
  cxxbridge1_unique_ptr_facebook_jsi_Value_raw(&local_8,local_28);
  *(undefined8 *)*param_1 = 0;
  *(long *)(*param_1 + 8) = local_8;
  return;
}


// ===== 009ecf5c  jsi_sys::ffi::base::ffi::Function_callWithThis2 =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Function_callWithThis2 */

void __rustcall jsi_sys::ffi::base::ffi::Function_callWithThis2(undefined1 (*param_1) [16])

{
  undefined1 auVar1 [16];
  undefined8 local_28;
  long local_8;
  
  auVar1 = jsi_sys_ffi_cxxbridge1_194_Function_callWithThis2();
  if (auVar1._0_8_ != 0) {
    *param_1 = auVar1;
    return;
  }
  cxxbridge1_unique_ptr_facebook_jsi_Value_raw(&local_8,local_28);
  *(undefined8 *)*param_1 = 0;
  *(long *)(*param_1 + 8) = local_8;
  return;
}


// ===== 009ecfb4  jsi_sys::ffi::base::ffi::Function_callWithThis3 =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Function_callWithThis3 */

void __rustcall jsi_sys::ffi::base::ffi::Function_callWithThis3(undefined1 (*param_1) [16])

{
  undefined1 auVar1 [16];
  undefined8 local_28;
  long local_8;
  
  auVar1 = jsi_sys_ffi_cxxbridge1_194_Function_callWithThis3();
  if (auVar1._0_8_ != 0) {
    *param_1 = auVar1;
    return;
  }
  cxxbridge1_unique_ptr_facebook_jsi_Value_raw(&local_8,local_28);
  *(undefined8 *)*param_1 = 0;
  *(long *)(*param_1 + 8) = local_8;
  return;
}


// ===== 009ed00c  jsi_sys::ffi::base::ffi::Function_callWithThis4 =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Function_callWithThis4 */

void __rustcall jsi_sys::ffi::base::ffi::Function_callWithThis4(undefined1 (*param_1) [16])

{
  undefined1 auVar1 [16];
  undefined8 local_28;
  long local_8;
  
  auVar1 = jsi_sys_ffi_cxxbridge1_194_Function_callWithThis4();
  if (auVar1._0_8_ != 0) {
    *param_1 = auVar1;
    return;
  }
  cxxbridge1_unique_ptr_facebook_jsi_Value_raw(&local_8,local_28);
  *(undefined8 *)*param_1 = 0;
  *(long *)(*param_1 + 8) = local_8;
  return;
}


// ===== 009ed064  jsi_sys::ffi::base::ffi::Function_callWithThis5 =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Function_callWithThis5 */

void __rustcall jsi_sys::ffi::base::ffi::Function_callWithThis5(undefined1 (*param_1) [16])

{
  undefined1 auVar1 [16];
  undefined8 local_28;
  long local_8;
  
  auVar1 = jsi_sys_ffi_cxxbridge1_194_Function_callWithThis5();
  if (auVar1._0_8_ != 0) {
    *param_1 = auVar1;
    return;
  }
  cxxbridge1_unique_ptr_facebook_jsi_Value_raw(&local_8,local_28);
  *(undefined8 *)*param_1 = 0;
  *(long *)(*param_1 + 8) = local_8;
  return;
}


// ===== 009ed0c0  jsi_sys::ffi::base::ffi::Function_callWithThis6 =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Function_callWithThis6 */

void __rustcall jsi_sys::ffi::base::ffi::Function_callWithThis6(undefined1 (*param_1) [16])

{
  undefined1 auVar1 [16];
  undefined8 local_28;
  long local_8;
  
  auVar1 = jsi_sys_ffi_cxxbridge1_194_Function_callWithThis6();
  if (auVar1._0_8_ != 0) {
    *param_1 = auVar1;
    return;
  }
  cxxbridge1_unique_ptr_facebook_jsi_Value_raw(&local_8,local_28);
  *(undefined8 *)*param_1 = 0;
  *(long *)(*param_1 + 8) = local_8;
  return;
}


// ===== 009ed120  jsi_sys::ffi::base::ffi::Object_copyPropertyFrom =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Object_copyPropertyFrom */

uint __rustcall jsi_sys::ffi::base::ffi::Object_copyPropertyFrom(void)

{
  uint uVar1;
  
  uVar1 = jsi_sys_ffi_cxxbridge1_194_Object_copyPropertyFrom();
  return uVar1 & 1;
}


// ===== 009ed138  jsi_sys::ffi::base::ffi::Value_tryGetNativeState =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Value_tryGetNativeState */

void __rustcall
jsi_sys::ffi::base::ffi::Value_tryGetNativeState
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  jsi_sys_ffi_cxxbridge1_194_Value_tryGetNativeState(param_2,param_3,param_1);
  return;
}


// ===== 009ed140  jsi_sys::ffi::base::ffi::Object_getPropertyAsNumber =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Object_getPropertyAsNumber */

void __rustcall jsi_sys::ffi::base::ffi::Object_getPropertyAsNumber(long *param_1)

{
  undefined1 auVar1 [16];
  long local_8;
  
  auVar1 = jsi_sys_ffi_cxxbridge1_194_Object_getPropertyAsNumber();
  if (auVar1._0_8_ != 0) {
    local_8 = auVar1._8_8_;
  }
  *param_1 = auVar1._0_8_;
  param_1[1] = local_8;
  return;
}


// ===== 009ed174  jsi_sys::ffi::base::ffi::Object_getPropertyAsObject =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Object_getPropertyAsObject */

void __rustcall jsi_sys::ffi::base::ffi::Object_getPropertyAsObject(undefined1 (*param_1) [16])

{
  undefined1 auVar1 [16];
  undefined8 local_28;
  long local_8;
  
  auVar1 = jsi_sys_ffi_cxxbridge1_194_Object_getPropertyAsObject();
  if (auVar1._0_8_ != 0) {
    *param_1 = auVar1;
    return;
  }
  cxxbridge1_unique_ptr_facebook_jsi_Object_raw(&local_8,local_28);
  *(undefined8 *)*param_1 = 0;
  *(long *)(*param_1 + 8) = local_8;
  return;
}


// ===== 009ed1cc  jsi_sys::ffi::base::ffi::Runtime_evaluateJavaScript =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Runtime_evaluateJavaScript */

undefined8 __rustcall jsi_sys::ffi::base::ffi::Runtime_evaluateJavaScript(void)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  uVar1 = jsi_sys_ffi_cxxbridge1_194_Runtime_evaluateJavaScript();
  cxxbridge1_unique_ptr_facebook_jsi_Value_raw(&local_18,uVar1);
  return local_18;
}


// ===== 009ed1f8  jsi_sys::ffi::base::ffi::Function_callAsConstructor0 =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Function_callAsConstructor0 */

void __rustcall
jsi_sys::ffi::base::ffi::Function_callAsConstructor0
          (undefined1 (*param_1) [16],undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined8 local_28;
  long local_8;
  
  auVar1 = jsi_sys_ffi_cxxbridge1_194_Function_callAsConstructor0(param_2,param_3,&local_28);
  if (auVar1._0_8_ != 0) {
    *param_1 = auVar1;
    return;
  }
  cxxbridge1_unique_ptr_facebook_jsi_Value_raw(&local_8,local_28);
  *(undefined8 *)*param_1 = 0;
  *(long *)(*param_1 + 8) = local_8;
  return;
}


// ===== 009ed250  jsi_sys::ffi::base::ffi::Function_callAsConstructor1 =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Function_callAsConstructor1 */

void __rustcall jsi_sys::ffi::base::ffi::Function_callAsConstructor1(undefined1 (*param_1) [16])

{
  undefined1 auVar1 [16];
  undefined8 local_28;
  long local_8;
  
  auVar1 = jsi_sys_ffi_cxxbridge1_194_Function_callAsConstructor1();
  if (auVar1._0_8_ != 0) {
    *param_1 = auVar1;
    return;
  }
  cxxbridge1_unique_ptr_facebook_jsi_Value_raw(&local_8,local_28);
  *(undefined8 *)*param_1 = 0;
  *(long *)(*param_1 + 8) = local_8;
  return;
}


// ===== 009ed2a8  jsi_sys::ffi::base::ffi::Function_callAsConstructor2 =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Function_callAsConstructor2 */

void __rustcall jsi_sys::ffi::base::ffi::Function_callAsConstructor2(undefined1 (*param_1) [16])

{
  undefined1 auVar1 [16];
  undefined8 local_28;
  long local_8;
  
  auVar1 = jsi_sys_ffi_cxxbridge1_194_Function_callAsConstructor2();
  if (auVar1._0_8_ != 0) {
    *param_1 = auVar1;
    return;
  }
  cxxbridge1_unique_ptr_facebook_jsi_Value_raw(&local_8,local_28);
  *(undefined8 *)*param_1 = 0;
  *(long *)(*param_1 + 8) = local_8;
  return;
}


// ===== 009ed300  jsi_sys::ffi::base::ffi::Function_callAsConstructor3 =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Function_callAsConstructor3 */

void __rustcall jsi_sys::ffi::base::ffi::Function_callAsConstructor3(undefined1 (*param_1) [16])

{
  undefined1 auVar1 [16];
  undefined8 local_28;
  long local_8;
  
  auVar1 = jsi_sys_ffi_cxxbridge1_194_Function_callAsConstructor3();
  if (auVar1._0_8_ != 0) {
    *param_1 = auVar1;
    return;
  }
  cxxbridge1_unique_ptr_facebook_jsi_Value_raw(&local_8,local_28);
  *(undefined8 *)*param_1 = 0;
  *(long *)(*param_1 + 8) = local_8;
  return;
}


// ===== 009ed358  jsi_sys::ffi::base::ffi::Function_callAsConstructor4 =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Function_callAsConstructor4 */

void __rustcall jsi_sys::ffi::base::ffi::Function_callAsConstructor4(undefined1 (*param_1) [16])

{
  undefined1 auVar1 [16];
  undefined8 local_28;
  long local_8;
  
  auVar1 = jsi_sys_ffi_cxxbridge1_194_Function_callAsConstructor4();
  if (auVar1._0_8_ != 0) {
    *param_1 = auVar1;
    return;
  }
  cxxbridge1_unique_ptr_facebook_jsi_Value_raw(&local_8,local_28);
  *(undefined8 *)*param_1 = 0;
  *(long *)(*param_1 + 8) = local_8;
  return;
}


// ===== 009ed3b0  jsi_sys::ffi::base::ffi::Function_callAsConstructor5 =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Function_callAsConstructor5 */

void __rustcall jsi_sys::ffi::base::ffi::Function_callAsConstructor5(undefined1 (*param_1) [16])

{
  undefined1 auVar1 [16];
  undefined8 local_28;
  long local_8;
  
  auVar1 = jsi_sys_ffi_cxxbridge1_194_Function_callAsConstructor5();
  if (auVar1._0_8_ != 0) {
    *param_1 = auVar1;
    return;
  }
  cxxbridge1_unique_ptr_facebook_jsi_Value_raw(&local_8,local_28);
  *(undefined8 *)*param_1 = 0;
  *(long *)(*param_1 + 8) = local_8;
  return;
}


// ===== 009ed408  jsi_sys::ffi::base::ffi::Function_callAsConstructor6 =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Function_callAsConstructor6 */

void __rustcall jsi_sys::ffi::base::ffi::Function_callAsConstructor6(undefined1 (*param_1) [16])

{
  undefined1 auVar1 [16];
  undefined8 local_28;
  long local_8;
  
  auVar1 = jsi_sys_ffi_cxxbridge1_194_Function_callAsConstructor6();
  if (auVar1._0_8_ != 0) {
    *param_1 = auVar1;
    return;
  }
  cxxbridge1_unique_ptr_facebook_jsi_Value_raw(&local_8,local_28);
  *(undefined8 *)*param_1 = 0;
  *(long *)(*param_1 + 8) = local_8;
  return;
}


// ===== 009ed464  jsi_sys::ffi::base::ffi::Object_getPropertyAsFunction =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Object_getPropertyAsFunction */

void __rustcall jsi_sys::ffi::base::ffi::Object_getPropertyAsFunction(undefined1 (*param_1) [16])

{
  undefined1 auVar1 [16];
  undefined8 local_28;
  long local_8;
  
  auVar1 = jsi_sys_ffi_cxxbridge1_194_Object_getPropertyAsFunction();
  if (auVar1._0_8_ != 0) {
    *param_1 = auVar1;
    return;
  }
  cxxbridge1_unique_ptr_facebook_jsi_Function_raw(&local_8,local_28);
  *(undefined8 *)*param_1 = 0;
  *(long *)(*param_1 + 8) = local_8;
  return;
}


// ===== 009ed4bc  jsi_sys::ffi::base::ffi::Function_createFromHostFunction =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::Function_createFromHostFunction */

undefined8 __rustcall jsi_sys::ffi::base::ffi::Function_createFromHostFunction(void)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  uVar1 = jsi_sys_ffi_cxxbridge1_194_Function_createFromHostFunction();
  cxxbridge1_unique_ptr_facebook_jsi_Function_raw(&local_18,uVar1);
  return local_18;
}


// ===== 009ed4f0  jsi_sys::ffi::base::ffi::create_rust_native_state_holder =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::base::ffi::create_rust_native_state_holder */

void __rustcall
jsi_sys::ffi::base::ffi::create_rust_native_state_holder
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = param_2;
  uStack_18 = param_3;
  jsi_sys_ffi_cxxbridge1_194_create_rust_native_state_holder(&local_20,param_1);
  return;
}


// ===== 009ed518  FUN_009ed518 =====

void FUN_009ed518(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_0037e66e,5);
  return;
}


// ===== 009ed52c  FUN_009ed52c =====

undefined8 FUN_009ed52c(long *param_1,uint param_2)

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
    FUN_009ebf5c(param_1,lVar5,uVar6);
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


// ===== 009ed648  FUN_009ed648 =====

undefined8 FUN_009ed648(long *param_1,void *param_2,ulong param_3)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if ((ulong)(*param_1 - lVar1) < param_3) {
    FUN_009ebf5c(param_1,lVar1,param_3);
    lVar1 = param_1[2];
  }
  else if (param_3 == 0) goto LAB_009ed688;
  memcpy((void *)(param_1[1] + lVar1),param_2,param_3);
LAB_009ed688:
  param_1[2] = lVar1 + param_3;
  return 0;
}


// ===== 009ed6c4  <jsi_sys::ffi::base::ffi::JsiFunction_as_cxx::unique_ptr::UniquePtrTarget>::__typename =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::JsiFunction as cxx::unique_ptr::UniquePtrTarget>::__typename */

void __rustcall
<jsi_sys::ffi::base::ffi::JsiFunction_as_cxx::unique_ptr::UniquePtrTarget>::__typename
          (undefined8 param_1)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_1,&DAT_0037e673,0xb);
  return;
}


// ===== 009ed6d4  <jsi_sys::ffi::base::ffi::JsiFunction_as_cxx::unique_ptr::UniquePtrTarget>::__get =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::JsiFunction as cxx::unique_ptr::UniquePtrTarget>::__get */

void __rustcall
<jsi_sys::ffi::base::ffi::JsiFunction_as_cxx::unique_ptr::UniquePtrTarget>::__get
          (undefined8 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1;
  cxxbridge1_unique_ptr_facebook_jsi_Function_get(&local_18);
  return;
}


// ===== 009ed6f8  <jsi_sys::ffi::base::ffi::JsiFunction_as_cxx::unique_ptr::UniquePtrTarget>::__raw =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::JsiFunction as cxx::unique_ptr::UniquePtrTarget>::__raw */

undefined8 __rustcall
<jsi_sys::ffi::base::ffi::JsiFunction_as_cxx::unique_ptr::UniquePtrTarget>::__raw
          (undefined8 param_1)

{
  undefined8 local_18;
  
  cxxbridge1_unique_ptr_facebook_jsi_Function_raw(&local_18,param_1);
  return local_18;
}


// ===== 009ed720  <jsi_sys::ffi::base::ffi::JsiFunction_as_cxx::unique_ptr::UniquePtrTarget>::__drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::JsiFunction as cxx::unique_ptr::UniquePtrTarget>::__drop */

void __rustcall
<jsi_sys::ffi::base::ffi::JsiFunction_as_cxx::unique_ptr::UniquePtrTarget>::__drop
          (undefined8 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1;
  cxxbridge1_unique_ptr_facebook_jsi_Function_drop(&local_18);
  return;
}


// ===== 009ed744  <jsi_sys::ffi::base::ffi::JsiFunction_as_cxx::unique_ptr::UniquePtrTarget>::__null =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::JsiFunction as cxx::unique_ptr::UniquePtrTarget>::__null */

undefined8 __rustcall
<jsi_sys::ffi::base::ffi::JsiFunction_as_cxx::unique_ptr::UniquePtrTarget>::__null(void)

{
  undefined8 local_18;
  
  cxxbridge1_unique_ptr_facebook_jsi_Function_null(&local_18);
  return local_18;
}


// ===== 009ed768  <jsi_sys::ffi::base::ffi::JsiFunction_as_cxx::unique_ptr::UniquePtrTarget>::__release =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::JsiFunction as cxx::unique_ptr::UniquePtrTarget>::__release */

void __rustcall
<jsi_sys::ffi::base::ffi::JsiFunction_as_cxx::unique_ptr::UniquePtrTarget>::__release
          (undefined8 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1;
  cxxbridge1_unique_ptr_facebook_jsi_Function_release(&local_18);
  return;
}


// ===== 009ed78c  <jsi_sys::ffi::base::ffi::RustNativeStateHolder_as_cxx::shared_ptr::SharedPtrTarget>::__typename =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::RustNativeStateHolder as cxx::shared_ptr::SharedPtrTarget>::__typename
    */

void __rustcall
<jsi_sys::ffi::base::ffi::RustNativeStateHolder_as_cxx::shared_ptr::SharedPtrTarget>::__typename
          (undefined8 param_1)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_1,&DAT_0037e67e,0x15);
  return;
}


// ===== 009ed79c  <jsi_sys::ffi::base::ffi::RustNativeStateHolder_as_cxx::shared_ptr::SharedPtrTarget>::__get =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::RustNativeStateHolder as cxx::shared_ptr::SharedPtrTarget>::__get */

void __rustcall
<jsi_sys::ffi::base::ffi::RustNativeStateHolder_as_cxx::shared_ptr::SharedPtrTarget>::__get(void)

{
  (*(code *)PTR_cxxbridge1_shared_ptr_jsi_sys_ffi_RustNativeStateHolder_get_00b05d80)();
  return;
}


// ===== 009ed7a0  <jsi_sys::ffi::base::ffi::RustNativeStateHolder_as_cxx::shared_ptr::SharedPtrTarget>::__raw =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::RustNativeStateHolder as cxx::shared_ptr::SharedPtrTarget>::__raw */

void __rustcall
<jsi_sys::ffi::base::ffi::RustNativeStateHolder_as_cxx::shared_ptr::SharedPtrTarget>::__raw
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = cxxbridge1_shared_ptr_jsi_sys_ffi_RustNativeStateHolder_raw();
  if ((uVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_0037e693,0x6f,param_3);
}


// ===== 009ed7d8  <jsi_sys::ffi::base::ffi::RustNativeStateHolder_as_cxx::shared_ptr::SharedPtrTarget>::__drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::RustNativeStateHolder as cxx::shared_ptr::SharedPtrTarget>::__drop */

void __rustcall
<jsi_sys::ffi::base::ffi::RustNativeStateHolder_as_cxx::shared_ptr::SharedPtrTarget>::__drop(void)

{
  (*(code *)PTR_cxxbridge1_shared_ptr_jsi_sys_ffi_RustNativeStateHolder_drop_00b05d90)();
  return;
}


// ===== 009ed7dc  <jsi_sys::ffi::base::ffi::RustNativeStateHolder_as_cxx::shared_ptr::SharedPtrTarget>::__null =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::RustNativeStateHolder as cxx::shared_ptr::SharedPtrTarget>::__null */

void __rustcall
<jsi_sys::ffi::base::ffi::RustNativeStateHolder_as_cxx::shared_ptr::SharedPtrTarget>::__null(void)

{
  (*(code *)PTR_cxxbridge1_shared_ptr_jsi_sys_ffi_RustNativeStateHolder_null_00b05d98)();
  return;
}


// ===== 009ed7e0  <jsi_sys::ffi::base::ffi::RustNativeStateHolder_as_cxx::shared_ptr::SharedPtrTarget>::__clone =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::RustNativeStateHolder as cxx::shared_ptr::SharedPtrTarget>::__clone */

void __rustcall
<jsi_sys::ffi::base::ffi::RustNativeStateHolder_as_cxx::shared_ptr::SharedPtrTarget>::__clone(void)

{
  (*(code *)PTR_cxxbridge1_shared_ptr_jsi_sys_ffi_RustNativeStateHolder_clone_00b05da0)();
  return;
}


// ===== 009ed7e4  <jsi_sys::ffi::base::ffi::Buffer_as_cxx::shared_ptr::SharedPtrTarget>::__typename =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::Buffer as cxx::shared_ptr::SharedPtrTarget>::__typename */

void __rustcall
<jsi_sys::ffi::base::ffi::Buffer_as_cxx::shared_ptr::SharedPtrTarget>::__typename
          (undefined8 param_1)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_1,&DAT_0037e6ca,6);
  return;
}


// ===== 009ed7f4  <jsi_sys::ffi::base::ffi::Buffer_as_cxx::shared_ptr::SharedPtrTarget>::__get =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::Buffer as cxx::shared_ptr::SharedPtrTarget>::__get */

void __rustcall <jsi_sys::ffi::base::ffi::Buffer_as_cxx::shared_ptr::SharedPtrTarget>::__get(void)

{
  (*(code *)PTR_cxxbridge1_shared_ptr_facebook_jsi_Buffer_get_00b05da8)();
  return;
}


// ===== 009ed7f8  <jsi_sys::ffi::base::ffi::Buffer_as_cxx::shared_ptr::SharedPtrTarget>::__raw =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::Buffer as cxx::shared_ptr::SharedPtrTarget>::__raw */

void __rustcall
<jsi_sys::ffi::base::ffi::Buffer_as_cxx::shared_ptr::SharedPtrTarget>::__raw
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = cxxbridge1_shared_ptr_facebook_jsi_Buffer_raw();
  if ((uVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_0037e6d0,0x53,param_3);
}


// ===== 009ed830  <jsi_sys::ffi::base::ffi::Buffer_as_cxx::shared_ptr::SharedPtrTarget>::__drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::Buffer as cxx::shared_ptr::SharedPtrTarget>::__drop */

void __rustcall <jsi_sys::ffi::base::ffi::Buffer_as_cxx::shared_ptr::SharedPtrTarget>::__drop(void)

{
  (*(code *)PTR_cxxbridge1_shared_ptr_facebook_jsi_Buffer_drop_00b05db8)();
  return;
}


// ===== 009ed834  <jsi_sys::ffi::base::ffi::Buffer_as_cxx::shared_ptr::SharedPtrTarget>::__null =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::Buffer as cxx::shared_ptr::SharedPtrTarget>::__null */

void __rustcall <jsi_sys::ffi::base::ffi::Buffer_as_cxx::shared_ptr::SharedPtrTarget>::__null(void)

{
  (*(code *)PTR_cxxbridge1_shared_ptr_facebook_jsi_Buffer_null_00b05dc0)();
  return;
}


// ===== 009ed838  <jsi_sys::ffi::base::ffi::Buffer_as_cxx::shared_ptr::SharedPtrTarget>::__clone =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::Buffer as cxx::shared_ptr::SharedPtrTarget>::__clone */

void __rustcall <jsi_sys::ffi::base::ffi::Buffer_as_cxx::shared_ptr::SharedPtrTarget>::__clone(void)

{
  (*(code *)PTR_cxxbridge1_shared_ptr_facebook_jsi_Buffer_clone_00b05dc8)();
  return;
}


// ===== 009ed83c  <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__typename =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::JsiObject as cxx::unique_ptr::UniquePtrTarget>::__typename */

void __rustcall
<jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__typename
          (undefined8 param_1)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_1,&DAT_0037e6f9,9);
  return;
}


// ===== 009ed84c  <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__get =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::JsiObject as cxx::unique_ptr::UniquePtrTarget>::__get */

void __rustcall
<jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__get(undefined8 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1;
  cxxbridge1_unique_ptr_facebook_jsi_Object_get(&local_18);
  return;
}


// ===== 009ed870  <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__raw =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::JsiObject as cxx::unique_ptr::UniquePtrTarget>::__raw */

undefined8 __rustcall
<jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__raw(undefined8 param_1)

{
  undefined8 local_18;
  
  cxxbridge1_unique_ptr_facebook_jsi_Object_raw(&local_18,param_1);
  return local_18;
}


// ===== 009ed898  <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::JsiObject as cxx::unique_ptr::UniquePtrTarget>::__drop */

void __rustcall
<jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__drop(undefined8 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1;
  cxxbridge1_unique_ptr_facebook_jsi_Object_drop(&local_18);
  return;
}


// ===== 009ed8bc  <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__null =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::JsiObject as cxx::unique_ptr::UniquePtrTarget>::__null */

undefined8 __rustcall
<jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__null(void)

{
  undefined8 local_18;
  
  cxxbridge1_unique_ptr_facebook_jsi_Object_null(&local_18);
  return local_18;
}


// ===== 009ed8e0  <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__release =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::JsiObject as cxx::unique_ptr::UniquePtrTarget>::__release */

void __rustcall
<jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__release
          (undefined8 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1;
  cxxbridge1_unique_ptr_facebook_jsi_Object_release(&local_18);
  return;
}


// ===== 009ed904  <jsi_sys::ffi::base::ffi::JsiValue_as_cxx::unique_ptr::UniquePtrTarget>::__typename =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::JsiValue as cxx::unique_ptr::UniquePtrTarget>::__typename */

void __rustcall
<jsi_sys::ffi::base::ffi::JsiValue_as_cxx::unique_ptr::UniquePtrTarget>::__typename
          (undefined8 param_1)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_1,&DAT_002a1870,8);
  return;
}


// ===== 009ed914  <jsi_sys::ffi::base::ffi::JsiValue_as_cxx::unique_ptr::UniquePtrTarget>::__get =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::JsiValue as cxx::unique_ptr::UniquePtrTarget>::__get */

void __rustcall
<jsi_sys::ffi::base::ffi::JsiValue_as_cxx::unique_ptr::UniquePtrTarget>::__get(undefined8 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1;
  cxxbridge1_unique_ptr_facebook_jsi_Value_get(&local_18);
  return;
}


// ===== 009ed938  <jsi_sys::ffi::base::ffi::JsiValue_as_cxx::unique_ptr::UniquePtrTarget>::__raw =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::JsiValue as cxx::unique_ptr::UniquePtrTarget>::__raw */

undefined8 __rustcall
<jsi_sys::ffi::base::ffi::JsiValue_as_cxx::unique_ptr::UniquePtrTarget>::__raw(undefined8 param_1)

{
  undefined8 local_18;
  
  cxxbridge1_unique_ptr_facebook_jsi_Value_raw(&local_18,param_1);
  return local_18;
}


// ===== 009ed960  <jsi_sys::ffi::base::ffi::JsiValue_as_cxx::unique_ptr::UniquePtrTarget>::__drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::JsiValue as cxx::unique_ptr::UniquePtrTarget>::__drop */

void __rustcall
<jsi_sys::ffi::base::ffi::JsiValue_as_cxx::unique_ptr::UniquePtrTarget>::__drop(undefined8 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1;
  cxxbridge1_unique_ptr_facebook_jsi_Value_drop(&local_18);
  return;
}


// ===== 009ed984  <jsi_sys::ffi::base::ffi::JsiValue_as_cxx::unique_ptr::UniquePtrTarget>::__null =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::JsiValue as cxx::unique_ptr::UniquePtrTarget>::__null */

undefined8 __rustcall
<jsi_sys::ffi::base::ffi::JsiValue_as_cxx::unique_ptr::UniquePtrTarget>::__null(void)

{
  undefined8 local_18;
  
  cxxbridge1_unique_ptr_facebook_jsi_Value_null(&local_18);
  return local_18;
}


// ===== 009ed9a8  <jsi_sys::ffi::base::ffi::JsiValue_as_cxx::unique_ptr::UniquePtrTarget>::__release =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::JsiValue as cxx::unique_ptr::UniquePtrTarget>::__release */

void __rustcall
<jsi_sys::ffi::base::ffi::JsiValue_as_cxx::unique_ptr::UniquePtrTarget>::__release
          (undefined8 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1;
  cxxbridge1_unique_ptr_facebook_jsi_Value_release(&local_18);
  return;
}


// ===== 009ed9cc  <jsi_sys::ffi::base::ffi::JsiString_as_cxx::unique_ptr::UniquePtrTarget>::__typename =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::JsiString as cxx::unique_ptr::UniquePtrTarget>::__typename */

void __rustcall
<jsi_sys::ffi::base::ffi::JsiString_as_cxx::unique_ptr::UniquePtrTarget>::__typename
          (undefined8 param_1)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_1,&DAT_0037e702,9);
  return;
}


// ===== 009ed9dc  <jsi_sys::ffi::base::ffi::JsiString_as_cxx::unique_ptr::UniquePtrTarget>::__get =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::JsiString as cxx::unique_ptr::UniquePtrTarget>::__get */

void __rustcall
<jsi_sys::ffi::base::ffi::JsiString_as_cxx::unique_ptr::UniquePtrTarget>::__get(undefined8 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1;
  cxxbridge1_unique_ptr_facebook_jsi_String_get(&local_18);
  return;
}


// ===== 009eda00  <jsi_sys::ffi::base::ffi::JsiString_as_cxx::unique_ptr::UniquePtrTarget>::__raw =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::JsiString as cxx::unique_ptr::UniquePtrTarget>::__raw */

undefined8 __rustcall
<jsi_sys::ffi::base::ffi::JsiString_as_cxx::unique_ptr::UniquePtrTarget>::__raw(undefined8 param_1)

{
  undefined8 local_18;
  
  cxxbridge1_unique_ptr_facebook_jsi_String_raw(&local_18,param_1);
  return local_18;
}


// ===== 009eda28  <jsi_sys::ffi::base::ffi::JsiString_as_cxx::unique_ptr::UniquePtrTarget>::__drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::JsiString as cxx::unique_ptr::UniquePtrTarget>::__drop */

void __rustcall
<jsi_sys::ffi::base::ffi::JsiString_as_cxx::unique_ptr::UniquePtrTarget>::__drop(undefined8 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1;
  cxxbridge1_unique_ptr_facebook_jsi_String_drop(&local_18);
  return;
}


// ===== 009eda4c  <jsi_sys::ffi::base::ffi::JsiString_as_cxx::unique_ptr::UniquePtrTarget>::__null =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::JsiString as cxx::unique_ptr::UniquePtrTarget>::__null */

undefined8 __rustcall
<jsi_sys::ffi::base::ffi::JsiString_as_cxx::unique_ptr::UniquePtrTarget>::__null(void)

{
  undefined8 local_18;
  
  cxxbridge1_unique_ptr_facebook_jsi_String_null(&local_18);
  return local_18;
}


// ===== 009eda70  <jsi_sys::ffi::base::ffi::JsiString_as_cxx::unique_ptr::UniquePtrTarget>::__release =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::JsiString as cxx::unique_ptr::UniquePtrTarget>::__release */

void __rustcall
<jsi_sys::ffi::base::ffi::JsiString_as_cxx::unique_ptr::UniquePtrTarget>::__release
          (undefined8 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1;
  cxxbridge1_unique_ptr_facebook_jsi_String_release(&local_18);
  return;
}


// ===== 009eda94  <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__typename =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::JsiPropNameID as cxx::unique_ptr::UniquePtrTarget>::__typename */

void __rustcall
<jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__typename
          (undefined8 param_1)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_1,&DAT_0037e70b,0xd);
  return;
}


// ===== 009edaa4  <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::JsiPropNameID as cxx::unique_ptr::UniquePtrTarget>::__get */

void __rustcall
<jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get
          (undefined8 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1;
  cxxbridge1_unique_ptr_facebook_jsi_PropNameID_get(&local_18);
  return;
}


// ===== 009edac8  <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__raw =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::JsiPropNameID as cxx::unique_ptr::UniquePtrTarget>::__raw */

undefined8 __rustcall
<jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__raw
          (undefined8 param_1)

{
  undefined8 local_18;
  
  cxxbridge1_unique_ptr_facebook_jsi_PropNameID_raw(&local_18,param_1);
  return local_18;
}


// ===== 009edaf0  <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::JsiPropNameID as cxx::unique_ptr::UniquePtrTarget>::__drop */

void __rustcall
<jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__drop
          (undefined8 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1;
  cxxbridge1_unique_ptr_facebook_jsi_PropNameID_drop(&local_18);
  return;
}


// ===== 009edb14  <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__null =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::JsiPropNameID as cxx::unique_ptr::UniquePtrTarget>::__null */

undefined8 __rustcall
<jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__null(void)

{
  undefined8 local_18;
  
  cxxbridge1_unique_ptr_facebook_jsi_PropNameID_null(&local_18);
  return local_18;
}


// ===== 009edb38  <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__release =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::JsiPropNameID as cxx::unique_ptr::UniquePtrTarget>::__release */

void __rustcall
<jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__release
          (undefined8 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1;
  cxxbridge1_unique_ptr_facebook_jsi_PropNameID_release(&local_18);
  return;
}


// ===== 009edb5c  <jsi_sys::ffi::base::ffi::JsiArray_as_cxx::unique_ptr::UniquePtrTarget>::__typename =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::JsiArray as cxx::unique_ptr::UniquePtrTarget>::__typename */

void __rustcall
<jsi_sys::ffi::base::ffi::JsiArray_as_cxx::unique_ptr::UniquePtrTarget>::__typename
          (undefined8 param_1)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_1,&DAT_002a1960,8);
  return;
}


// ===== 009edb6c  <jsi_sys::ffi::base::ffi::JsiArray_as_cxx::unique_ptr::UniquePtrTarget>::__get =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::JsiArray as cxx::unique_ptr::UniquePtrTarget>::__get */

void __rustcall
<jsi_sys::ffi::base::ffi::JsiArray_as_cxx::unique_ptr::UniquePtrTarget>::__get(undefined8 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1;
  cxxbridge1_unique_ptr_facebook_jsi_Array_get(&local_18);
  return;
}


// ===== 009edb90  <jsi_sys::ffi::base::ffi::JsiArray_as_cxx::unique_ptr::UniquePtrTarget>::__raw =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::JsiArray as cxx::unique_ptr::UniquePtrTarget>::__raw */

undefined8 __rustcall
<jsi_sys::ffi::base::ffi::JsiArray_as_cxx::unique_ptr::UniquePtrTarget>::__raw(undefined8 param_1)

{
  undefined8 local_18;
  
  cxxbridge1_unique_ptr_facebook_jsi_Array_raw(&local_18,param_1);
  return local_18;
}


// ===== 009edbb8  <jsi_sys::ffi::base::ffi::JsiArray_as_cxx::unique_ptr::UniquePtrTarget>::__drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::JsiArray as cxx::unique_ptr::UniquePtrTarget>::__drop */

void __rustcall
<jsi_sys::ffi::base::ffi::JsiArray_as_cxx::unique_ptr::UniquePtrTarget>::__drop(undefined8 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1;
  cxxbridge1_unique_ptr_facebook_jsi_Array_drop(&local_18);
  return;
}


// ===== 009edbdc  <jsi_sys::ffi::base::ffi::JsiArray_as_cxx::unique_ptr::UniquePtrTarget>::__null =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::JsiArray as cxx::unique_ptr::UniquePtrTarget>::__null */

undefined8 __rustcall
<jsi_sys::ffi::base::ffi::JsiArray_as_cxx::unique_ptr::UniquePtrTarget>::__null(void)

{
  undefined8 local_18;
  
  cxxbridge1_unique_ptr_facebook_jsi_Array_null(&local_18);
  return local_18;
}


// ===== 009edc00  <jsi_sys::ffi::base::ffi::JsiArray_as_cxx::unique_ptr::UniquePtrTarget>::__release =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::JsiArray as cxx::unique_ptr::UniquePtrTarget>::__release */

void __rustcall
<jsi_sys::ffi::base::ffi::JsiArray_as_cxx::unique_ptr::UniquePtrTarget>::__release
          (undefined8 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1;
  cxxbridge1_unique_ptr_facebook_jsi_Array_release(&local_18);
  return;
}


// ===== 009edc24  <jsi_sys::ffi::base::ffi::JsiBigInt_as_cxx::unique_ptr::UniquePtrTarget>::__typename =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::JsiBigInt as cxx::unique_ptr::UniquePtrTarget>::__typename */

void __rustcall
<jsi_sys::ffi::base::ffi::JsiBigInt_as_cxx::unique_ptr::UniquePtrTarget>::__typename
          (undefined8 param_1)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_1,&DAT_0037e718,9);
  return;
}


// ===== 009edc34  <jsi_sys::ffi::base::ffi::JsiBigInt_as_cxx::unique_ptr::UniquePtrTarget>::__get =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::JsiBigInt as cxx::unique_ptr::UniquePtrTarget>::__get */

void __rustcall
<jsi_sys::ffi::base::ffi::JsiBigInt_as_cxx::unique_ptr::UniquePtrTarget>::__get(undefined8 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1;
  cxxbridge1_unique_ptr_facebook_jsi_BigInt_get(&local_18);
  return;
}


// ===== 009edc58  <jsi_sys::ffi::base::ffi::JsiBigInt_as_cxx::unique_ptr::UniquePtrTarget>::__raw =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::JsiBigInt as cxx::unique_ptr::UniquePtrTarget>::__raw */

undefined8 __rustcall
<jsi_sys::ffi::base::ffi::JsiBigInt_as_cxx::unique_ptr::UniquePtrTarget>::__raw(undefined8 param_1)

{
  undefined8 local_18;
  
  cxxbridge1_unique_ptr_facebook_jsi_BigInt_raw(&local_18,param_1);
  return local_18;
}


// ===== 009edc80  <jsi_sys::ffi::base::ffi::JsiBigInt_as_cxx::unique_ptr::UniquePtrTarget>::__drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::JsiBigInt as cxx::unique_ptr::UniquePtrTarget>::__drop */

void __rustcall
<jsi_sys::ffi::base::ffi::JsiBigInt_as_cxx::unique_ptr::UniquePtrTarget>::__drop(undefined8 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1;
  cxxbridge1_unique_ptr_facebook_jsi_BigInt_drop(&local_18);
  return;
}


// ===== 009edca4  <jsi_sys::ffi::base::ffi::JsiBigInt_as_cxx::unique_ptr::UniquePtrTarget>::__null =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::JsiBigInt as cxx::unique_ptr::UniquePtrTarget>::__null */

undefined8 __rustcall
<jsi_sys::ffi::base::ffi::JsiBigInt_as_cxx::unique_ptr::UniquePtrTarget>::__null(void)

{
  undefined8 local_18;
  
  cxxbridge1_unique_ptr_facebook_jsi_BigInt_null(&local_18);
  return local_18;
}


// ===== 009edcc8  <jsi_sys::ffi::base::ffi::JsiBigInt_as_cxx::unique_ptr::UniquePtrTarget>::__release =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::JsiBigInt as cxx::unique_ptr::UniquePtrTarget>::__release */

void __rustcall
<jsi_sys::ffi::base::ffi::JsiBigInt_as_cxx::unique_ptr::UniquePtrTarget>::__release
          (undefined8 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1;
  cxxbridge1_unique_ptr_facebook_jsi_BigInt_release(&local_18);
  return;
}


// ===== 009edcec  <jsi_sys::ffi::base::ffi::JsiSymbol_as_cxx::unique_ptr::UniquePtrTarget>::__typename =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::JsiSymbol as cxx::unique_ptr::UniquePtrTarget>::__typename */

void __rustcall
<jsi_sys::ffi::base::ffi::JsiSymbol_as_cxx::unique_ptr::UniquePtrTarget>::__typename
          (undefined8 param_1)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_1,&DAT_0037e721,9);
  return;
}


// ===== 009edcfc  <jsi_sys::ffi::base::ffi::JsiSymbol_as_cxx::unique_ptr::UniquePtrTarget>::__get =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::JsiSymbol as cxx::unique_ptr::UniquePtrTarget>::__get */

void __rustcall
<jsi_sys::ffi::base::ffi::JsiSymbol_as_cxx::unique_ptr::UniquePtrTarget>::__get(undefined8 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1;
  cxxbridge1_unique_ptr_facebook_jsi_Symbol_get(&local_18);
  return;
}


// ===== 009edd20  <jsi_sys::ffi::base::ffi::JsiSymbol_as_cxx::unique_ptr::UniquePtrTarget>::__raw =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::JsiSymbol as cxx::unique_ptr::UniquePtrTarget>::__raw */

undefined8 __rustcall
<jsi_sys::ffi::base::ffi::JsiSymbol_as_cxx::unique_ptr::UniquePtrTarget>::__raw(undefined8 param_1)

{
  undefined8 local_18;
  
  cxxbridge1_unique_ptr_facebook_jsi_Symbol_raw(&local_18,param_1);
  return local_18;
}


// ===== 009edd48  <jsi_sys::ffi::base::ffi::JsiSymbol_as_cxx::unique_ptr::UniquePtrTarget>::__drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::JsiSymbol as cxx::unique_ptr::UniquePtrTarget>::__drop */

void __rustcall
<jsi_sys::ffi::base::ffi::JsiSymbol_as_cxx::unique_ptr::UniquePtrTarget>::__drop(undefined8 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1;
  cxxbridge1_unique_ptr_facebook_jsi_Symbol_drop(&local_18);
  return;
}


// ===== 009edd6c  <jsi_sys::ffi::base::ffi::JsiSymbol_as_cxx::unique_ptr::UniquePtrTarget>::__null =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::JsiSymbol as cxx::unique_ptr::UniquePtrTarget>::__null */

undefined8 __rustcall
<jsi_sys::ffi::base::ffi::JsiSymbol_as_cxx::unique_ptr::UniquePtrTarget>::__null(void)

{
  undefined8 local_18;
  
  cxxbridge1_unique_ptr_facebook_jsi_Symbol_null(&local_18);
  return local_18;
}


// ===== 009edd90  <jsi_sys::ffi::base::ffi::JsiSymbol_as_cxx::unique_ptr::UniquePtrTarget>::__release =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi_sys::ffi::base::ffi::JsiSymbol as cxx::unique_ptr::UniquePtrTarget>::__release */

void __rustcall
<jsi_sys::ffi::base::ffi::JsiSymbol_as_cxx::unique_ptr::UniquePtrTarget>::__release
          (undefined8 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1;
  cxxbridge1_unique_ptr_facebook_jsi_Symbol_release(&local_18);
  return;
}


// ===== 009eddb4  FUN_009eddb4 =====

void FUN_009eddb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  core::fmt::write(param_1,&PTR_FUN_00af7d70,param_2,param_3);
  return;
}


// ===== 009eddc8  jsi_sys$ffi$cxxbridge1$194$call_rust_host_function =====

undefined1  [16]
jsi_sys_ffi_cxxbridge1_194_call_rust_host_function
          (undefined8 *param_1,undefined8 param_2,long *param_3,undefined8 param_4,
          undefined4 param_5,undefined8 param_6,undefined8 *param_7)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 local_98 [16];
  undefined *local_88;
  undefined8 uStack_80;
  long *local_78;
  undefined **ppuStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 *local_58;
  long local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  undefined8 *puStack_30;
  undefined8 local_28;
  undefined1 uStack_1;
  
  local_88 = &DAT_0037e72a;
  uStack_80 = 0x30;
                    /* try { // try from 009ede00 to 009ede0b has its CatchHandler @ 009edee8 */
  local_78 = param_3;
  ppuStack_70 = (undefined **)param_4;
  local_68 = param_6;
  local_60 = param_5;
  (**(code **)(param_1[1] + 0x18))(&local_38,*param_1,param_2,&local_78);
  local_58 = puStack_30;
  if (local_38 != 1) {
    local_78 = puStack_30;
    auVar3 = cxxbridge1_unique_ptr_facebook_jsi_Value_release(&local_78);
    *param_7 = auVar3._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = auVar3._8_8_;
    return auVar1 << 0x40;
  }
  local_28 = 0;
  local_38 = 0;
  puStack_30 = (undefined8 *)0x1;
  local_68 = 0x60000020;
  local_78 = &local_38;
  ppuStack_70 = &PTR_FUN_00af7d70;
                    /* try { // try from 009ede48 to 009ede53 has its CatchHandler @ 009edeec */
  iVar2 = <anyhow::Error_as_core::fmt::Display>::fmt(&local_58,&local_78);
  if (iVar2 == 0) {
    uStack_48 = puStack_30;
    local_50 = local_38;
    local_40 = local_28;
                    /* try { // try from 009ede68 to 009ede73 has its CatchHandler @ 009edee4 */
    cxx::result::to_c_error(local_98,&local_50);
                    /* try { // try from 009ede74 to 009ede7b has its CatchHandler @ 009edee8 */
    <anyhow::Error_as_core::ops::drop::Drop>::drop(&local_58);
    return local_98;
  }
                    /* try { // try from 009edebc to 009ededf has its CatchHandler @ 009edeec */
                    /* WARNING: Subroutine does not return */
  core::result::unwrap_failed
            (&DAT_0037e637,0x37,&uStack_1,&DAT_00af7d50,
             &PTR_s__nix_store_8006w282fgsx3273c878b_00af7da0);
}


// ===== 009edf1c  jsi_sys$ffi$cxxbridge1$194$dyn_rust_host_function_drop_in_place =====

void jsi_sys_ffi_cxxbridge1_194_dyn_rust_host_function_drop_in_place(undefined8 *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  code *pcVar2;
  
  __ptr = *(void **)*param_1;
  puVar1 = (undefined8 *)((undefined8 *)*param_1)[1];
  pcVar2 = (code *)*puVar1;
  if (pcVar2 != (code *)0x0) {
                    /* try { // try from 009edf4c to 009edf53 has its CatchHandler @ 009edf84 */
    (*pcVar2)(__ptr);
  }
  if (puVar1[1] != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 009edfa8  jsi_sys$ffi$cxxbridge1$194$dyn_rust_native_state_drop_in_place =====

void jsi_sys_ffi_cxxbridge1_194_dyn_rust_native_state_drop_in_place(undefined8 *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  code *pcVar2;
  
  __ptr = *(void **)*param_1;
  puVar1 = (undefined8 *)((undefined8 *)*param_1)[1];
  pcVar2 = (code *)*puVar1;
  if (pcVar2 != (code *)0x0) {
                    /* try { // try from 009edfd8 to 009edfdf has its CatchHandler @ 009ee010 */
    (*pcVar2)(__ptr);
  }
  if (puVar1[1] != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 009ee034  jsi_sys$ffi$cxxbridge1$194$Function_createFromHostFunction =====

undefined8 jsi_sys_ffi_cxxbridge1_194_Function_createFromHostFunction(void)

{
  undefined8 uVar1;
  undefined8 *in_x3;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_8;
  
  uStack_28 = in_x3[1];
  local_30 = *in_x3;
  *in_x3 = 0;
  in_x3[1] = 0;
                    /* try { // try from 009ee050 to 009ee05b has its CatchHandler @ 009ee080 */
  jsi_sys::ffi::Function_createFromHostFunction(&local_8);
  uVar1 = local_8;
  local_8 = 0;
  jsi_sys::ffi::BoxDynRustHostFunction::~BoxDynRustHostFunction((BoxDynRustHostFunction *)&local_30)
  ;
  return uVar1;
}


// ===== 009ee084  jsi_sys$ffi$cxxbridge1$194$create_rust_native_state_holder =====

void jsi_sys_ffi_cxxbridge1_194_create_rust_native_state_holder
               (BoxDynRustNativeState *param_1,undefined8 param_2)

{
  BoxDynRustNativeState aBStack_30 [16];
  
  jsi_sys::ffi::BoxDynRustNativeState::BoxDynRustNativeState(aBStack_30,param_1);
                    /* try { // try from 009ee0a4 to 009ee0af has its CatchHandler @ 009ee0c8 */
  jsi_sys::ffi::create_rust_native_state_holder(param_2,aBStack_30);
  jsi_sys::ffi::BoxDynRustNativeState::~BoxDynRustNativeState(aBStack_30);
  return;
}


// ===== 009ee0cc  jsi_sys$ffi$cxxbridge1$194$RustNativeStateHolder$state =====

void jsi_sys_ffi_cxxbridge1_194_RustNativeStateHolder_state(long param_1,long *param_2)

{
  *param_2 = param_1 + 8;
  return;
}


// ===== 009ee0d8  jsi_sys$ffi$cxxbridge1$194$Object_setNativeState =====

void jsi_sys_ffi_cxxbridge1_194_Object_setNativeState
               (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 local_30;
  long *plStack_28;
  
  plStack_28 = (long *)param_3[1];
  local_30 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  jsi_sys::ffi::Object_setNativeState(param_1,param_2,&local_30);
  plVar1 = plStack_28;
  if ((plStack_28 != (long *)0x0) &&
     (lVar2 = FUN_00ab1ce0(0xffffffffffffffff,plStack_28 + 1), lVar2 == 0)) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 009ee14c  jsi_sys$ffi$cxxbridge1$194$Object_getNativeState =====

void jsi_sys_ffi_cxxbridge1_194_Object_getNativeState
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  jsi_sys::ffi::Object_getNativeState(param_3);
  return;
}


// ===== 009ee154  jsi_sys$ffi$cxxbridge1$194$Object_hasNativeState =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall jsi_sys::ffi::jsi_sys_ffi_cxxbridge1_194_Object_hasNativeState(void)

{
  (*(code *)PTR_Object_hasNativeState_00b05ed8)();
  return;
}


// ===== 009ee158  jsi_sys$ffi$cxxbridge1$194$Value_tryGetNativeState =====

void jsi_sys_ffi_cxxbridge1_194_Value_tryGetNativeState
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  jsi_sys::ffi::Value_tryGetNativeState(param_3);
  return;
}


// ===== 009ee160  jsi_sys$ffi$cxxbridge1$194$StringBuffer_new =====

void jsi_sys_ffi_cxxbridge1_194_StringBuffer_new
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* try { // try from 009ee168 to 009ee16f has its CatchHandler @ 009ee178 */
  jsi_sys::ffi::StringBuffer_new(param_3);
  return;
}


// ===== 009ee17c  jsi_sys$ffi$cxxbridge1$194$Runtime_global =====

undefined8 jsi_sys_ffi_cxxbridge1_194_Runtime_global(void)

{
  undefined8 local_18;
  
  jsi_sys::ffi::Runtime_global(&local_18);
  return local_18;
}


// ===== 009ee1a0  jsi_sys$ffi$cxxbridge1$194$Runtime_evaluateJavaScript =====

undefined8 jsi_sys_ffi_cxxbridge1_194_Runtime_evaluateJavaScript(void)

{
  undefined8 local_18;
  
  jsi_sys::ffi::Runtime_evaluateJavaScript(&local_18);
  return local_18;
}


// ===== 009ee1c4  jsi_sys$ffi$cxxbridge1$194$String_fromUtf8 =====

undefined8 jsi_sys_ffi_cxxbridge1_194_String_fromUtf8(void)

{
  undefined8 local_18;
  
  jsi_sys::ffi::String_fromUtf8(&local_18);
  return local_18;
}


// ===== 009ee1e8  jsi_sys$ffi$cxxbridge1$194$String_utf8 =====

void jsi_sys_ffi_cxxbridge1_194_String_utf8
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  jsi_sys::ffi::String_utf8(param_3);
  return;
}


// ===== 009ee1f0  jsi_sys$ffi$cxxbridge1$194$String_strictEquals =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall jsi_sys::ffi::jsi_sys_ffi_cxxbridge1_194_String_strictEquals(void)

{
  (*(code *)PTR_String_strictEquals_00b05f10)();
  return;
}


// ===== 009ee1f4  jsi_sys$ffi$cxxbridge1$194$String_clone =====

undefined8 jsi_sys_ffi_cxxbridge1_194_String_clone(void)

{
  undefined8 local_18;
  
  jsi_sys::ffi::String_clone(&local_18);
  return local_18;
}


// ===== 009ee218  jsi_sys$ffi$cxxbridge1$194$PropNameID_forUtf8 =====

undefined8 jsi_sys_ffi_cxxbridge1_194_PropNameID_forUtf8(void)

{
  undefined8 local_18;
  
  jsi_sys::ffi::PropNameID_forUtf8(&local_18);
  return local_18;
}


// ===== 009ee23c  jsi_sys$ffi$cxxbridge1$194$PropNameID_forString =====

undefined8 jsi_sys_ffi_cxxbridge1_194_PropNameID_forString(void)

{
  undefined8 local_18;
  
  jsi_sys::ffi::PropNameID_forString(&local_18);
  return local_18;
}


// ===== 009ee260  jsi_sys$ffi$cxxbridge1$194$PropNameID_forSymbol =====

undefined8 jsi_sys_ffi_cxxbridge1_194_PropNameID_forSymbol(void)

{
  undefined8 local_18;
  
  jsi_sys::ffi::PropNameID_forSymbol(&local_18);
  return local_18;
}


// ===== 009ee284  jsi_sys$ffi$cxxbridge1$194$PropNameID_clone =====

undefined8 jsi_sys_ffi_cxxbridge1_194_PropNameID_clone(void)

{
  undefined8 local_18;
  
  jsi_sys::ffi::PropNameID_clone(&local_18);
  return local_18;
}


// ===== 009ee2a8  jsi_sys$ffi$cxxbridge1$194$Object_new =====

undefined8 jsi_sys_ffi_cxxbridge1_194_Object_new(void)

{
  undefined8 local_18;
  
  jsi_sys::ffi::Object_new(&local_18);
  return local_18;
}


// ===== 009ee2cc  jsi_sys$ffi$cxxbridge1$194$Object_setProperty =====

void jsi_sys_ffi_cxxbridge1_194_Object_setProperty(void)

{
  Value *in_x3;
  
  jsi_sys::ffi::Object_setProperty();
  if (in_x3 != (Value *)0x0) {
    facebook::jsi::Value::~Value(in_x3);
    operator_delete(in_x3);
  }
  return;
}


// ===== 009ee30c  jsi_sys$ffi$cxxbridge1$194$Object_getProperty =====

undefined8 jsi_sys_ffi_cxxbridge1_194_Object_getProperty(void)

{
  undefined8 local_18;
  
  jsi_sys::ffi::Object_getProperty(&local_18);
  return local_18;
}


// ===== 009ee330  jsi_sys$ffi$cxxbridge1$194$Object_hasProperty =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall jsi_sys::ffi::jsi_sys_ffi_cxxbridge1_194_Object_hasProperty(void)

{
  (*(code *)PTR_Object_hasProperty_00b05f58)();
  return;
}


// ===== 009ee334  jsi_sys$ffi$cxxbridge1$194$Object_copyPropertyFrom =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall jsi_sys::ffi::jsi_sys_ffi_cxxbridge1_194_Object_copyPropertyFrom(void)

{
  (*(code *)PTR_Object_copyPropertyFrom_00b05f60)();
  return;
}


// ===== 009ee338  jsi_sys$ffi$cxxbridge1$194$Object_strictEquals =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall jsi_sys::ffi::jsi_sys_ffi_cxxbridge1_194_Object_strictEquals(void)

{
  (*(code *)PTR_Object_strictEquals_00b05f68)();
  return;
}


// ===== 009ee33c  jsi_sys$ffi$cxxbridge1$194$Object_intoFunction =====

undefined8 jsi_sys_ffi_cxxbridge1_194_Object_intoFunction(undefined8 param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long *local_30;
  undefined8 uStack_28;
  
  local_30 = param_2;
  jsi_sys::ffi::Object_intoFunction(&uStack_28,param_1,&local_30);
  uVar2 = uStack_28;
  plVar1 = local_30;
  local_30 = (long *)0x0;
  uStack_28 = 0;
  if (plVar1 != (long *)0x0) {
    if ((undefined8 *)*plVar1 != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)*plVar1)();
    }
    operator_delete(plVar1);
  }
  return uVar2;
}


// ===== 009ee398  jsi_sys$ffi$cxxbridge1$194$Object_asFunction =====

undefined8 jsi_sys_ffi_cxxbridge1_194_Object_asFunction(void)

{
  undefined8 local_18;
  
  jsi_sys::ffi::Object_asFunction(&local_18);
  return local_18;
}


// ===== 009ee3bc  jsi_sys$ffi$cxxbridge1$194$Object_isFunction =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall jsi_sys::ffi::jsi_sys_ffi_cxxbridge1_194_Object_isFunction(void)

{
  (*(code *)PTR_Object_isFunction_00b05f80)();
  return;
}


// ===== 009ee3c0  jsi_sys$ffi$cxxbridge1$194$Object_isArray =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall jsi_sys::ffi::jsi_sys_ffi_cxxbridge1_194_Object_isArray(void)

{
  (*(code *)PTR_Object_isArray_00b05f88)();
  return;
}


// ===== 009ee3c4  jsi_sys$ffi$cxxbridge1$194$Object_asArray =====

undefined8 jsi_sys_ffi_cxxbridge1_194_Object_asArray(void)

{
  undefined8 local_18;
  
  jsi_sys::ffi::Object_asArray(&local_18);
  return local_18;
}


// ===== 009ee3e8  jsi_sys$ffi$cxxbridge1$194$Object_getArray =====

undefined8 jsi_sys_ffi_cxxbridge1_194_Object_getArray(undefined8 param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long *local_30;
  undefined8 uStack_28;
  
  local_30 = param_2;
  jsi_sys::ffi::Object_getArray(&uStack_28,param_1,&local_30);
  uVar2 = uStack_28;
  plVar1 = local_30;
  local_30 = (long *)0x0;
  uStack_28 = 0;
  if (plVar1 != (long *)0x0) {
    if ((undefined8 *)*plVar1 != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)*plVar1)();
    }
    operator_delete(plVar1);
  }
  return uVar2;
}


// ===== 009ee444  jsi_sys$ffi$cxxbridge1$194$Object_getPropertyAsObject =====

undefined1  [16] jsi_sys_ffi_cxxbridge1_194_Object_getPropertyAsObject(void)

{
  undefined1 auVar1 [16];
  undefined8 *in_x3;
  ulong local_28;
  undefined8 local_8;
  
                    /* try { // try from 009ee460 to 009ee467 has its CatchHandler @ 009ee488 */
  jsi_sys::ffi::Object_getPropertyAsObject(&local_8);
  *in_x3 = local_8;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_28;
  return auVar1 << 0x40;
}


// ===== 009ee4c8  jsi_sys$ffi$cxxbridge1$194$Object_getPropertyAsFunction =====

undefined1  [16] jsi_sys_ffi_cxxbridge1_194_Object_getPropertyAsFunction(void)

{
  undefined1 auVar1 [16];
  undefined8 *in_x3;
  ulong local_28;
  undefined8 local_8;
  
                    /* try { // try from 009ee4e4 to 009ee4eb has its CatchHandler @ 009ee50c */
  jsi_sys::ffi::Object_getPropertyAsFunction(&local_8);
  *in_x3 = local_8;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_28;
  return auVar1 << 0x40;
}


// ===== 009ee54c  jsi_sys$ffi$cxxbridge1$194$Object_getPropertyAsNumber =====

undefined1  [16] jsi_sys_ffi_cxxbridge1_194_Object_getPropertyAsNumber(void)

{
  undefined1 auVar1 [16];
  undefined8 *in_x3;
  undefined8 uVar2;
  undefined8 local_28;
  
                    /* try { // try from 009ee568 to 009ee56b has its CatchHandler @ 009ee588 */
  uVar2 = jsi_sys::ffi::Object_getPropertyAsNumber();
  *in_x3 = uVar2;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_28;
  return auVar1 << 0x40;
}


// ===== 009ee5c8  jsi_sys$ffi$cxxbridge1$194$Object_clone =====

undefined8 jsi_sys_ffi_cxxbridge1_194_Object_clone(void)

{
  undefined8 local_18;
  
  jsi_sys::ffi::Object_clone(&local_18);
  return local_18;
}


// ===== 009ee5ec  jsi_sys$ffi$cxxbridge1$194$Value_undefined =====

undefined8 jsi_sys_ffi_cxxbridge1_194_Value_undefined(void)

{
  undefined8 local_18;
  
                    /* try { // try from 009ee5f8 to 009ee5ff has its CatchHandler @ 009ee610 */
  jsi_sys::ffi::Value_undefined(&local_18);
  return local_18;
}


// ===== 009ee614  jsi_sys$ffi$cxxbridge1$194$Value_null =====

undefined8 jsi_sys_ffi_cxxbridge1_194_Value_null(void)

{
  undefined8 local_18;
  
                    /* try { // try from 009ee620 to 009ee627 has its CatchHandler @ 009ee638 */
  jsi_sys::ffi::Value_null(&local_18);
  return local_18;
}


// ===== 009ee63c  jsi_sys$ffi$cxxbridge1$194$Value_fromInt =====

undefined8 jsi_sys_ffi_cxxbridge1_194_Value_fromInt(void)

{
  undefined8 local_18;
  
                    /* try { // try from 009ee648 to 009ee64f has its CatchHandler @ 009ee660 */
  jsi_sys::ffi::Value_fromInt(&local_18);
  return local_18;
}


// ===== 009ee664  jsi_sys$ffi$cxxbridge1$194$Value_fromBool =====

undefined8 jsi_sys_ffi_cxxbridge1_194_Value_fromBool(void)

{
  undefined8 local_18;
  
                    /* try { // try from 009ee670 to 009ee677 has its CatchHandler @ 009ee688 */
  jsi_sys::ffi::Value_fromBool(&local_18);
  return local_18;
}


// ===== 009ee68c  jsi_sys$ffi$cxxbridge1$194$Value_fromDouble =====

undefined8 jsi_sys_ffi_cxxbridge1_194_Value_fromDouble(void)

{
  undefined8 local_18;
  
                    /* try { // try from 009ee698 to 009ee69f has its CatchHandler @ 009ee6b0 */
  jsi_sys::ffi::Value_fromDouble(&local_18);
  return local_18;
}


// ===== 009ee6b4  jsi_sys$ffi$cxxbridge1$194$Value_fromString =====

undefined8 jsi_sys_ffi_cxxbridge1_194_Value_fromString(undefined8 param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long *local_30;
  undefined8 uStack_28;
  
                    /* try { // try from 009ee6c8 to 009ee6d3 has its CatchHandler @ 009ee710 */
  local_30 = param_2;
  jsi_sys::ffi::Value_fromString(&uStack_28,param_1,&local_30);
  uVar2 = uStack_28;
  plVar1 = local_30;
  local_30 = (long *)0x0;
  uStack_28 = 0;
  if (plVar1 != (long *)0x0) {
    if ((undefined8 *)*plVar1 != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)*plVar1)();
    }
    operator_delete(plVar1);
  }
  return uVar2;
}


// ===== 009ee714  jsi_sys$ffi$cxxbridge1$194$Value_fromObject =====

undefined8 jsi_sys_ffi_cxxbridge1_194_Value_fromObject(undefined8 param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long *local_30;
  undefined8 uStack_28;
  
                    /* try { // try from 009ee728 to 009ee733 has its CatchHandler @ 009ee770 */
  local_30 = param_2;
  jsi_sys::ffi::Value_fromObject(&uStack_28,param_1,&local_30);
  uVar2 = uStack_28;
  plVar1 = local_30;
  local_30 = (long *)0x0;
  uStack_28 = 0;
  if (plVar1 != (long *)0x0) {
    if ((undefined8 *)*plVar1 != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)*plVar1)();
    }
    operator_delete(plVar1);
  }
  return uVar2;
}


// ===== 009ee774  jsi_sys$ffi$cxxbridge1$194$Value_fromBigInt =====

undefined8 jsi_sys_ffi_cxxbridge1_194_Value_fromBigInt(undefined8 param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long *local_30;
  undefined8 uStack_28;
  
                    /* try { // try from 009ee788 to 009ee793 has its CatchHandler @ 009ee7d0 */
  local_30 = param_2;
  jsi_sys::ffi::Value_fromBigInt(&uStack_28,param_1,&local_30);
  uVar2 = uStack_28;
  plVar1 = local_30;
  local_30 = (long *)0x0;
  uStack_28 = 0;
  if (plVar1 != (long *)0x0) {
    if ((undefined8 *)*plVar1 != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)*plVar1)();
    }
    operator_delete(plVar1);
  }
  return uVar2;
}


// ===== 009ee7d4  jsi_sys$ffi$cxxbridge1$194$Value_fromSymbol =====

undefined8 jsi_sys_ffi_cxxbridge1_194_Value_fromSymbol(undefined8 param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long *local_30;
  undefined8 uStack_28;
  
                    /* try { // try from 009ee7e8 to 009ee7f3 has its CatchHandler @ 009ee830 */
  local_30 = param_2;
  jsi_sys::ffi::Value_fromSymbol(&uStack_28,param_1,&local_30);
  uVar2 = uStack_28;
  plVar1 = local_30;
  local_30 = (long *)0x0;
  uStack_28 = 0;
  if (plVar1 != (long *)0x0) {
    if ((undefined8 *)*plVar1 != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)*plVar1)();
    }
    operator_delete(plVar1);
  }
  return uVar2;
}


// ===== 009ee834  jsi_sys$ffi$cxxbridge1$194$Value_clone =====

undefined8 jsi_sys_ffi_cxxbridge1_194_Value_clone(void)

{
  undefined8 local_18;
  
  jsi_sys::ffi::Value_clone(&local_18);
  return local_18;
}


// ===== 009ee858  jsi_sys$ffi$cxxbridge1$194$Value$is_undefined =====

bool jsi_sys_ffi_cxxbridge1_194_Value_is_undefined(int *param_1)

{
  return *param_1 == 0;
}


// ===== 009ee868  jsi_sys$ffi$cxxbridge1$194$Value$is_null =====

bool jsi_sys_ffi_cxxbridge1_194_Value_is_null(int *param_1)

{
  return *param_1 == 1;
}


// ===== 009ee878  jsi_sys$ffi$cxxbridge1$194$Value$is_bool =====

bool jsi_sys_ffi_cxxbridge1_194_Value_is_bool(int *param_1)

{
  return *param_1 == 2;
}


// ===== 009ee888  jsi_sys$ffi$cxxbridge1$194$Value$is_number =====

bool jsi_sys_ffi_cxxbridge1_194_Value_is_number(int *param_1)

{
  return *param_1 == 3;
}


// ===== 009ee898  jsi_sys$ffi$cxxbridge1$194$Value$is_string =====

bool jsi_sys_ffi_cxxbridge1_194_Value_is_string(int *param_1)

{
  return *param_1 == 6;
}


// ===== 009ee8a8  jsi_sys$ffi$cxxbridge1$194$Value$is_symbol =====

bool jsi_sys_ffi_cxxbridge1_194_Value_is_symbol(int *param_1)

{
  return *param_1 == 4;
}


// ===== 009ee8b8  jsi_sys$ffi$cxxbridge1$194$Value$is_object =====

bool jsi_sys_ffi_cxxbridge1_194_Value_is_object(int *param_1)

{
  return *param_1 == 7;
}


// ===== 009ee8c8  jsi_sys$ffi$cxxbridge1$194$Value$is_bigint =====

bool jsi_sys_ffi_cxxbridge1_194_Value_is_bigint(int *param_1)

{
  return *param_1 == 5;
}


// ===== 009ee8d8  jsi_sys$ffi$cxxbridge1$194$Value$get_bool =====

undefined1 jsi_sys_ffi_cxxbridge1_194_Value_get_bool(int *param_1)

{
  if (*param_1 == 2) {
    return (char)param_1[2];
  }
                    /* try { // try from 009ee8f8 to 009ee917 has its CatchHandler @ 009ee918 */
  __assert2("/ci/build/discord/discord/discord_common/js/packages/libdiscore/mobile/node_modules/react-native/ReactCommon/jsi/jsi/jsi.h"
            ,0x787,"bool facebook::jsi::Value::getBool() const","isBool()");
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009ee8f8 with catch @ 009ee918
                        */
  FUN_00ab7c24();
}


// ===== 009ee91c  jsi_sys$ffi$cxxbridge1$194$Value$get_number =====

void jsi_sys_ffi_cxxbridge1_194_Value_get_number(void)

{
                    /* try { // try from 009ee924 to 009ee927 has its CatchHandler @ 009ee930 */
  facebook::jsi::Value::asNumber();
  return;
}


// ===== 009ee934  jsi_sys$ffi$cxxbridge1$194$Value_getString =====

undefined8 jsi_sys_ffi_cxxbridge1_194_Value_getString(undefined8 param_1,Value *param_2)

{
  Value *this;
  undefined8 uVar1;
  Value *local_30;
  undefined8 uStack_28;
  
  local_30 = param_2;
  jsi_sys::ffi::Value_getString(&uStack_28,param_1,&local_30);
  uVar1 = uStack_28;
  this = local_30;
  local_30 = (Value *)0x0;
  uStack_28 = 0;
  if (this != (Value *)0x0) {
    facebook::jsi::Value::~Value(this);
    operator_delete(this);
  }
  return uVar1;
}


// ===== 009ee984  jsi_sys$ffi$cxxbridge1$194$Value_getObject =====

undefined8 jsi_sys_ffi_cxxbridge1_194_Value_getObject(undefined8 param_1,Value *param_2)

{
  Value *this;
  undefined8 uVar1;
  Value *local_30;
  undefined8 uStack_28;
  
  local_30 = param_2;
  jsi_sys::ffi::Value_getObject(&uStack_28,param_1,&local_30);
  uVar1 = uStack_28;
  this = local_30;
  local_30 = (Value *)0x0;
  uStack_28 = 0;
  if (this != (Value *)0x0) {
    facebook::jsi::Value::~Value(this);
    operator_delete(this);
  }
  return uVar1;
}


// ===== 009ee9d4  jsi_sys$ffi$cxxbridge1$194$Value_getBigInt =====

undefined8 jsi_sys_ffi_cxxbridge1_194_Value_getBigInt(undefined8 param_1,Value *param_2)

{
  Value *this;
  undefined8 uVar1;
  Value *local_30;
  undefined8 uStack_28;
  
  local_30 = param_2;
  jsi_sys::ffi::Value_getBigInt(&uStack_28,param_1,&local_30);
  uVar1 = uStack_28;
  this = local_30;
  local_30 = (Value *)0x0;
  uStack_28 = 0;
  if (this != (Value *)0x0) {
    facebook::jsi::Value::~Value(this);
    operator_delete(this);
  }
  return uVar1;
}


// ===== 009eea24  jsi_sys$ffi$cxxbridge1$194$Value_getSymbol =====

undefined8 jsi_sys_ffi_cxxbridge1_194_Value_getSymbol(undefined8 param_1,Value *param_2)

{
  Value *this;
  undefined8 uVar1;
  Value *local_30;
  undefined8 uStack_28;
  
  local_30 = param_2;
  jsi_sys::ffi::Value_getSymbol(&uStack_28,param_1,&local_30);
  uVar1 = uStack_28;
  this = local_30;
  local_30 = (Value *)0x0;
  uStack_28 = 0;
  if (this != (Value *)0x0) {
    facebook::jsi::Value::~Value(this);
    operator_delete(this);
  }
  return uVar1;
}


// ===== 009eea74  jsi_sys$ffi$cxxbridge1$194$Value_asString =====

undefined8 jsi_sys_ffi_cxxbridge1_194_Value_asString(void)

{
  undefined8 local_18;
  
  jsi_sys::ffi::Value_asString(&local_18);
  return local_18;
}


// ===== 009eea98  jsi_sys$ffi$cxxbridge1$194$Value_asObject =====

undefined8 jsi_sys_ffi_cxxbridge1_194_Value_asObject(void)

{
  undefined8 local_18;
  
  jsi_sys::ffi::Value_asObject(&local_18);
  return local_18;
}


// ===== 009eeabc  jsi_sys$ffi$cxxbridge1$194$Value_asBigInt =====

undefined8 jsi_sys_ffi_cxxbridge1_194_Value_asBigInt(void)

{
  undefined8 local_18;
  
  jsi_sys::ffi::Value_asBigInt(&local_18);
  return local_18;
}


// ===== 009eeae0  jsi_sys$ffi$cxxbridge1$194$Value_asSymbol =====

undefined8 jsi_sys_ffi_cxxbridge1_194_Value_asSymbol(void)

{
  undefined8 local_18;
  
  jsi_sys::ffi::Value_asSymbol(&local_18);
  return local_18;
}


// ===== 009eeb04  jsi_sys$ffi$cxxbridge1$194$Value_strictEquals =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall jsi_sys::ffi::jsi_sys_ffi_cxxbridge1_194_Value_strictEquals(void)

{
  (*(code *)PTR_Value_strictEquals_00b06060)();
  return;
}


// ===== 009eeb08  jsi_sys$ffi$cxxbridge1$194$Value_toString =====

undefined8 jsi_sys_ffi_cxxbridge1_194_Value_toString(void)

{
  undefined8 local_18;
  
  jsi_sys::ffi::Value_toString(&local_18);
  return local_18;
}


// ===== 009eeb2c  jsi_sys$ffi$cxxbridge1$194$BigInt_fromI64 =====

undefined8 jsi_sys_ffi_cxxbridge1_194_BigInt_fromI64(void)

{
  undefined8 local_18;
  
  jsi_sys::ffi::BigInt_fromI64(&local_18);
  return local_18;
}


// ===== 009eeb50  jsi_sys$ffi$cxxbridge1$194$BigInt_fromU64 =====

undefined8 jsi_sys_ffi_cxxbridge1_194_BigInt_fromU64(void)

{
  undefined8 local_18;
  
  jsi_sys::ffi::BigInt_fromU64(&local_18);
  return local_18;
}


// ===== 009eeb74  jsi_sys$ffi$cxxbridge1$194$BigInt_isInt64 =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall jsi_sys::ffi::jsi_sys_ffi_cxxbridge1_194_BigInt_isInt64(void)

{
  (*(code *)PTR_BigInt_isInt64_00b06080)();
  return;
}


// ===== 009eeb78  jsi_sys$ffi$cxxbridge1$194$BigInt_getInt64 =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall jsi_sys::ffi::jsi_sys_ffi_cxxbridge1_194_BigInt_getInt64(void)

{
  (*(code *)PTR_BigInt_getInt64_00b06088)();
  return;
}


// ===== 009eeb7c  jsi_sys$ffi$cxxbridge1$194$BigInt_isUint64 =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall jsi_sys::ffi::jsi_sys_ffi_cxxbridge1_194_BigInt_isUint64(void)

{
  (*(code *)PTR_BigInt_isUint64_00b06090)();
  return;
}


// ===== 009eeb80  jsi_sys$ffi$cxxbridge1$194$BigInt_getUint64 =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall jsi_sys::ffi::jsi_sys_ffi_cxxbridge1_194_BigInt_getUint64(void)

{
  (*(code *)PTR_BigInt_getUint64_00b06098)();
  return;
}


// ===== 009eeb84  jsi_sys$ffi$cxxbridge1$194$BigInt_toString =====

undefined8 jsi_sys_ffi_cxxbridge1_194_BigInt_toString(void)

{
  undefined8 local_18;
  
  jsi_sys::ffi::BigInt_toString(&local_18);
  return local_18;
}


// ===== 009eeba8  jsi_sys$ffi$cxxbridge1$194$BigInt_strictEquals =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall jsi_sys::ffi::jsi_sys_ffi_cxxbridge1_194_BigInt_strictEquals(void)

{
  (*(code *)PTR_BigInt_strictEquals_00b060a8)();
  return;
}


// ===== 009eebac  jsi_sys$ffi$cxxbridge1$194$BigInt_clone =====

undefined8 jsi_sys_ffi_cxxbridge1_194_BigInt_clone(void)

{
  undefined8 local_18;
  
  jsi_sys::ffi::BigInt_clone(&local_18);
  return local_18;
}


// ===== 009eebd0  jsi_sys$ffi$cxxbridge1$194$Symbol_strictEquals =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall jsi_sys::ffi::jsi_sys_ffi_cxxbridge1_194_Symbol_strictEquals(void)

{
  (*(code *)PTR_Symbol_strictEquals_00b060b8)();
  return;
}


// ===== 009eebd4  jsi_sys$ffi$cxxbridge1$194$Symbol_toString =====

void jsi_sys_ffi_cxxbridge1_194_Symbol_toString
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  jsi_sys::ffi::Symbol_toString(param_3);
  return;
}


// ===== 009eebdc  jsi_sys$ffi$cxxbridge1$194$Symbol_clone =====

undefined8 jsi_sys_ffi_cxxbridge1_194_Symbol_clone(void)

{
  undefined8 local_18;
  
  jsi_sys::ffi::Symbol_clone(&local_18);
  return local_18;
}


// ===== 009eec00  jsi_sys$ffi$cxxbridge1$194$Array_withLength =====

undefined8 jsi_sys_ffi_cxxbridge1_194_Array_withLength(void)

{
  undefined8 local_18;
  
  jsi_sys::ffi::Array_withLength(&local_18);
  return local_18;
}


// ===== 009eec24  jsi_sys$ffi$cxxbridge1$194$Array_size =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall jsi_sys::ffi::jsi_sys_ffi_cxxbridge1_194_Array_size(void)

{
  (*(code *)PTR_Array_size_00b060d8)();
  return;
}


// ===== 009eec28  jsi_sys$ffi$cxxbridge1$194$Array_getValueAtIndex =====

undefined8 jsi_sys_ffi_cxxbridge1_194_Array_getValueAtIndex(void)

{
  undefined8 local_18;
  
  jsi_sys::ffi::Array_getValueAtIndex(&local_18);
  return local_18;
}


// ===== 009eec4c  jsi_sys$ffi$cxxbridge1$194$Array_setValueAtIndex =====

void jsi_sys_ffi_cxxbridge1_194_Array_setValueAtIndex(void)

{
  Value *in_x3;
  
  jsi_sys::ffi::Array_setValueAtIndex();
  if (in_x3 != (Value *)0x0) {
    facebook::jsi::Value::~Value(in_x3);
    operator_delete(in_x3);
  }
  return;
}


// ===== 009eec8c  jsi_sys$ffi$cxxbridge1$194$Array_intoValue =====

undefined8 jsi_sys_ffi_cxxbridge1_194_Array_intoValue(undefined8 param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long *local_30;
  undefined8 uStack_28;
  
  local_30 = param_2;
  jsi_sys::ffi::Array_intoValue(&uStack_28,param_1,&local_30);
  uVar2 = uStack_28;
  plVar1 = local_30;
  local_30 = (long *)0x0;
  uStack_28 = 0;
  if (plVar1 != (long *)0x0) {
    if ((undefined8 *)*plVar1 != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)*plVar1)();
    }
    operator_delete(plVar1);
  }
  return uVar2;
}


// ===== 009eece8  jsi_sys$ffi$cxxbridge1$194$Array_clone =====

undefined8 jsi_sys_ffi_cxxbridge1_194_Array_clone(void)

{
  undefined8 local_18;
  
  jsi_sys::ffi::Array_clone(&local_18);
  return local_18;
}


// ===== 009eed0c  jsi_sys$ffi$cxxbridge1$194$Function_intoValue =====

undefined8 jsi_sys_ffi_cxxbridge1_194_Function_intoValue(undefined8 param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long *local_30;
  undefined8 uStack_28;
  
  local_30 = param_2;
  jsi_sys::ffi::Function_intoValue(&uStack_28,param_1,&local_30);
  uVar2 = uStack_28;
  plVar1 = local_30;
  local_30 = (long *)0x0;
  uStack_28 = 0;
  if (plVar1 != (long *)0x0) {
    if ((undefined8 *)*plVar1 != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)*plVar1)();
    }
    operator_delete(plVar1);
  }
  return uVar2;
}


// ===== 009eed68  jsi_sys$ffi$cxxbridge1$194$Function_asValue =====

undefined8 jsi_sys_ffi_cxxbridge1_194_Function_asValue(void)

{
  undefined8 local_18;
  
  jsi_sys::ffi::Function_asValue(&local_18);
  return local_18;
}


// ===== 009eed8c  jsi_sys$ffi$cxxbridge1$194$Function_callWithThis0 =====

undefined1  [16] jsi_sys_ffi_cxxbridge1_194_Function_callWithThis0(void)

{
  undefined1 auVar1 [16];
  undefined8 *in_x3;
  ulong local_28;
  undefined8 local_8;
  
                    /* try { // try from 009eeda8 to 009eedaf has its CatchHandler @ 009eedd0 */
  jsi_sys::ffi::Function_callWithThis0(&local_8);
  *in_x3 = local_8;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_28;
  return auVar1 << 0x40;
}


// ===== 009eee10  jsi_sys$ffi$cxxbridge1$194$Function_call0 =====

undefined1  [16]
jsi_sys_ffi_cxxbridge1_194_Function_call0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  ulong local_28;
  undefined8 local_8;
  
                    /* try { // try from 009eee2c to 009eee33 has its CatchHandler @ 009eee54 */
  jsi_sys::ffi::Function_call0(&local_8);
  *param_3 = local_8;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_28;
  return auVar1 << 0x40;
}


// ===== 009eee94  jsi_sys$ffi$cxxbridge1$194$Function_callAsConstructor0 =====

undefined1  [16]
jsi_sys_ffi_cxxbridge1_194_Function_callAsConstructor0
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  ulong local_28;
  undefined8 local_8;
  
                    /* try { // try from 009eeeb0 to 009eeeb7 has its CatchHandler @ 009eeed8 */
  jsi_sys::ffi::Function_callAsConstructor0(&local_8);
  *param_3 = local_8;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_28;
  return auVar1 << 0x40;
}


// ===== 009eef18  jsi_sys$ffi$cxxbridge1$194$Function_callWithThis1 =====

undefined1  [16] jsi_sys_ffi_cxxbridge1_194_Function_callWithThis1(void)

{
  undefined1 auVar1 [16];
  undefined8 *in_x4;
  ulong local_28;
  undefined8 local_8;
  
                    /* try { // try from 009eef34 to 009eef3b has its CatchHandler @ 009eef5c */
  jsi_sys::ffi::Function_callWithThis1(&local_8);
  *in_x4 = local_8;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_28;
  return auVar1 << 0x40;
}


// ===== 009eef9c  jsi_sys$ffi$cxxbridge1$194$Function_call1 =====

undefined1  [16] jsi_sys_ffi_cxxbridge1_194_Function_call1(void)

{
  undefined1 auVar1 [16];
  undefined8 *in_x3;
  ulong local_28;
  undefined8 local_8;
  
                    /* try { // try from 009eefb8 to 009eefbf has its CatchHandler @ 009eefe0 */
  jsi_sys::ffi::Function_call1(&local_8);
  *in_x3 = local_8;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_28;
  return auVar1 << 0x40;
}


// ===== 009ef020  jsi_sys$ffi$cxxbridge1$194$Function_callAsConstructor1 =====

undefined1  [16] jsi_sys_ffi_cxxbridge1_194_Function_callAsConstructor1(void)

{
  undefined1 auVar1 [16];
  undefined8 *in_x3;
  ulong local_28;
  undefined8 local_8;
  
                    /* try { // try from 009ef03c to 009ef043 has its CatchHandler @ 009ef064 */
  jsi_sys::ffi::Function_callAsConstructor1(&local_8);
  *in_x3 = local_8;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_28;
  return auVar1 << 0x40;
}


// ===== 009ef0a4  jsi_sys$ffi$cxxbridge1$194$Function_callWithThis2 =====

undefined1  [16] jsi_sys_ffi_cxxbridge1_194_Function_callWithThis2(void)

{
  undefined1 auVar1 [16];
  undefined8 *in_x5;
  ulong local_28;
  undefined8 local_8;
  
                    /* try { // try from 009ef0c0 to 009ef0c7 has its CatchHandler @ 009ef0e8 */
  jsi_sys::ffi::Function_callWithThis2(&local_8);
  *in_x5 = local_8;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_28;
  return auVar1 << 0x40;
}


// ===== 009ef128  jsi_sys$ffi$cxxbridge1$194$Function_call2 =====

undefined1  [16] jsi_sys_ffi_cxxbridge1_194_Function_call2(void)

{
  undefined1 auVar1 [16];
  undefined8 *in_x4;
  ulong local_28;
  undefined8 local_8;
  
                    /* try { // try from 009ef144 to 009ef14b has its CatchHandler @ 009ef16c */
  jsi_sys::ffi::Function_call2(&local_8);
  *in_x4 = local_8;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_28;
  return auVar1 << 0x40;
}


// ===== 009ef1ac  jsi_sys$ffi$cxxbridge1$194$Function_callAsConstructor2 =====

undefined1  [16] jsi_sys_ffi_cxxbridge1_194_Function_callAsConstructor2(void)

{
  undefined1 auVar1 [16];
  undefined8 *in_x4;
  ulong local_28;
  undefined8 local_8;
  
                    /* try { // try from 009ef1c8 to 009ef1cf has its CatchHandler @ 009ef1f0 */
  jsi_sys::ffi::Function_callAsConstructor2(&local_8);
  *in_x4 = local_8;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_28;
  return auVar1 << 0x40;
}


// ===== 009ef230  jsi_sys$ffi$cxxbridge1$194$Function_callWithThis3 =====

undefined1  [16] jsi_sys_ffi_cxxbridge1_194_Function_callWithThis3(void)

{
  undefined1 auVar1 [16];
  undefined8 *in_x6;
  ulong local_28;
  undefined8 local_8;
  
                    /* try { // try from 009ef24c to 009ef253 has its CatchHandler @ 009ef274 */
  jsi_sys::ffi::Function_callWithThis3(&local_8);
  *in_x6 = local_8;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_28;
  return auVar1 << 0x40;
}


// ===== 009ef2b4  jsi_sys$ffi$cxxbridge1$194$Function_call3 =====

undefined1  [16] jsi_sys_ffi_cxxbridge1_194_Function_call3(void)

{
  undefined1 auVar1 [16];
  undefined8 *in_x5;
  ulong local_28;
  undefined8 local_8;
  
                    /* try { // try from 009ef2d0 to 009ef2d7 has its CatchHandler @ 009ef2f8 */
  jsi_sys::ffi::Function_call3(&local_8);
  *in_x5 = local_8;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_28;
  return auVar1 << 0x40;
}


// ===== 009ef338  jsi_sys$ffi$cxxbridge1$194$Function_callAsConstructor3 =====

undefined1  [16] jsi_sys_ffi_cxxbridge1_194_Function_callAsConstructor3(void)

{
  undefined1 auVar1 [16];
  undefined8 *in_x5;
  ulong local_28;
  undefined8 local_8;
  
                    /* try { // try from 009ef354 to 009ef35b has its CatchHandler @ 009ef37c */
  jsi_sys::ffi::Function_callAsConstructor3(&local_8);
  *in_x5 = local_8;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_28;
  return auVar1 << 0x40;
}


// ===== 009ef3bc  jsi_sys$ffi$cxxbridge1$194$Function_callWithThis4 =====

undefined1  [16] jsi_sys_ffi_cxxbridge1_194_Function_callWithThis4(void)

{
  undefined1 auVar1 [16];
  undefined8 *in_x7;
  ulong local_28;
  undefined8 local_8;
  
                    /* try { // try from 009ef3d8 to 009ef3df has its CatchHandler @ 009ef400 */
  jsi_sys::ffi::Function_callWithThis4(&local_8);
  *in_x7 = local_8;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_28;
  return auVar1 << 0x40;
}


// ===== 009ef440  jsi_sys$ffi$cxxbridge1$194$Function_call4 =====

undefined1  [16] jsi_sys_ffi_cxxbridge1_194_Function_call4(void)

{
  undefined1 auVar1 [16];
  undefined8 *in_x6;
  ulong local_28;
  undefined8 local_8;
  
                    /* try { // try from 009ef45c to 009ef463 has its CatchHandler @ 009ef484 */
  jsi_sys::ffi::Function_call4(&local_8);
  *in_x6 = local_8;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_28;
  return auVar1 << 0x40;
}


// ===== 009ef4c4  jsi_sys$ffi$cxxbridge1$194$Function_callAsConstructor4 =====

undefined1  [16] jsi_sys_ffi_cxxbridge1_194_Function_callAsConstructor4(void)

{
  undefined1 auVar1 [16];
  undefined8 *in_x6;
  ulong local_28;
  undefined8 local_8;
  
                    /* try { // try from 009ef4e0 to 009ef4e7 has its CatchHandler @ 009ef508 */
  jsi_sys::ffi::Function_callAsConstructor4(&local_8);
  *in_x6 = local_8;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_28;
  return auVar1 << 0x40;
}


// ===== 009ef548  jsi_sys$ffi$cxxbridge1$194$Function_callWithThis5 =====

undefined1  [16] jsi_sys_ffi_cxxbridge1_194_Function_callWithThis5(void)

{
  undefined1 auVar1 [16];
  undefined8 *in_stack_00000000;
  ulong local_20;
  undefined8 local_18;
  
                    /* try { // try from 009ef55c to 009ef563 has its CatchHandler @ 009ef584 */
  jsi_sys::ffi::Function_callWithThis5(&local_18);
  *in_stack_00000000 = local_18;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_20;
  return auVar1 << 0x40;
}


// ===== 009ef5c0  jsi_sys$ffi$cxxbridge1$194$Function_call5 =====

undefined1  [16] jsi_sys_ffi_cxxbridge1_194_Function_call5(void)

{
  undefined1 auVar1 [16];
  undefined8 *in_x7;
  ulong local_28;
  undefined8 local_8;
  
                    /* try { // try from 009ef5dc to 009ef5e3 has its CatchHandler @ 009ef604 */
  jsi_sys::ffi::Function_call5(&local_8);
  *in_x7 = local_8;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_28;
  return auVar1 << 0x40;
}


// ===== 009ef644  jsi_sys$ffi$cxxbridge1$194$Function_callAsConstructor5 =====

undefined1  [16] jsi_sys_ffi_cxxbridge1_194_Function_callAsConstructor5(void)

{
  undefined1 auVar1 [16];
  undefined8 *in_x7;
  ulong local_28;
  undefined8 local_8;
  
                    /* try { // try from 009ef660 to 009ef667 has its CatchHandler @ 009ef688 */
  jsi_sys::ffi::Function_callAsConstructor5(&local_8);
  *in_x7 = local_8;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_28;
  return auVar1 << 0x40;
}


// ===== 009ef6c8  jsi_sys$ffi$cxxbridge1$194$Function_callWithThis6 =====

undefined1  [16] jsi_sys_ffi_cxxbridge1_194_Function_callWithThis6(void)

{
  undefined1 auVar1 [16];
  undefined8 *in_stack_00000008;
  ulong local_20;
  undefined8 local_18;
  
                    /* try { // try from 009ef6e0 to 009ef6eb has its CatchHandler @ 009ef70c */
  jsi_sys::ffi::Function_callWithThis6(&local_18);
  *in_stack_00000008 = local_18;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_20;
  return auVar1 << 0x40;
}


// ===== 009ef748  jsi_sys$ffi$cxxbridge1$194$Function_call6 =====

undefined1  [16] jsi_sys_ffi_cxxbridge1_194_Function_call6(void)

{
  undefined1 auVar1 [16];
  undefined8 *in_stack_00000000;
  ulong local_20;
  undefined8 local_18;
  
                    /* try { // try from 009ef75c to 009ef763 has its CatchHandler @ 009ef784 */
  jsi_sys::ffi::Function_call6(&local_18);
  *in_stack_00000000 = local_18;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_20;
  return auVar1 << 0x40;
}


// ===== 009ef7c0  jsi_sys$ffi$cxxbridge1$194$Function_callAsConstructor6 =====

undefined1  [16] jsi_sys_ffi_cxxbridge1_194_Function_callAsConstructor6(void)

{
  undefined1 auVar1 [16];
  undefined8 *in_stack_00000000;
  ulong local_20;
  undefined8 local_18;
  
                    /* try { // try from 009ef7d4 to 009ef7db has its CatchHandler @ 009ef7fc */
  jsi_sys::ffi::Function_callAsConstructor6(&local_18);
  *in_stack_00000000 = local_18;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_20;
  return auVar1 << 0x40;
}


// ===== 009ef838  jsi_sys$ffi$cxxbridge1$194$Function_clone =====

undefined8 jsi_sys_ffi_cxxbridge1_194_Function_clone(void)

{
  undefined8 local_18;
  
  jsi_sys::ffi::Function_clone(&local_18);
  return local_18;
}


// ===== 009ef85c  jsi_sys::ffi::call_rust_host_function =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::call_rust_host_function */

void __rustcall jsi_sys::ffi::call_rust_host_function(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  undefined8 uStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  undefined8 local_28;
  
  auVar3 = jsi_sys_ffi_cxxbridge1_194_call_rust_host_function();
  if (auVar3._0_8_ == 0) {
    *param_1 = local_28;
    return;
  }
  plVar2 = (long *)__cxa_allocate_exception(0x18);
  puVar1 = PTR_vtable_00b01198;
  plVar2[2] = auVar3._8_8_;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[1] = auVar3._0_8_;
  uStack_48 = __cxa_throw(plVar2,PTR_typeinfo_00b011a0,PTR__Error_00b011a8);
  pcStack_38 = dyn_rust_host_function_drop_in_place;
  puStack_40 = &stack0xffffffffffffffe0;
  jsi_sys_ffi_cxxbridge1_194_dyn_rust_host_function_drop_in_place(&uStack_48);
  return;
}


// ===== 009ef8cc  jsi_sys::ffi::dyn_rust_host_function_drop_in_place =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::dyn_rust_host_function_drop_in_place */

void __rustcall jsi_sys::ffi::dyn_rust_host_function_drop_in_place(undefined8 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1;
  jsi_sys_ffi_cxxbridge1_194_dyn_rust_host_function_drop_in_place(&local_18);
  return;
}


// ===== 009ef8f0  jsi_sys::ffi::dyn_rust_native_state_drop_in_place =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::dyn_rust_native_state_drop_in_place */

void __rustcall jsi_sys::ffi::dyn_rust_native_state_drop_in_place(undefined8 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1;
  jsi_sys_ffi_cxxbridge1_194_dyn_rust_native_state_drop_in_place(&local_18);
  return;
}


// ===== 009ef914  cxxbridge1$unique_ptr$facebook$jsi$Function$null =====

void cxxbridge1_unique_ptr_facebook_jsi_Function_null(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}


// ===== 009ef91c  cxxbridge1$unique_ptr$facebook$jsi$Function$raw =====

void cxxbridge1_unique_ptr_facebook_jsi_Function_raw(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}


// ===== 009ef924  cxxbridge1$unique_ptr$facebook$jsi$Function$get =====

undefined8 cxxbridge1_unique_ptr_facebook_jsi_Function_get(undefined8 *param_1)

{
  return *param_1;
}


// ===== 009ef92c  cxxbridge1$unique_ptr$facebook$jsi$Function$release =====

undefined8 cxxbridge1_unique_ptr_facebook_jsi_Function_release(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = 0;
  return uVar1;
}


// ===== 009ef93c  cxxbridge1$unique_ptr$facebook$jsi$Function$drop =====

void cxxbridge1_unique_ptr_facebook_jsi_Function_drop(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  *param_1 = 0;
  if (plVar1 != (long *)0x0) {
    if ((undefined8 *)*plVar1 != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)*plVar1)();
    }
    operator_delete(plVar1);
    return;
  }
  return;
}


// ===== 009ef984  cxxbridge1$shared_ptr$jsi_sys$ffi$RustNativeStateHolder$null =====

void cxxbridge1_shared_ptr_jsi_sys_ffi_RustNativeStateHolder_null(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 009ef98c  cxxbridge1$shared_ptr$jsi_sys$ffi$RustNativeStateHolder$raw =====

undefined8 cxxbridge1_shared_ptr_jsi_sys_ffi_RustNativeStateHolder_raw(long *param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  
  *param_1 = param_2;
                    /* try { // try from 009ef9a4 to 009ef9ab has its CatchHandler @ 009ef9d8 */
  plVar2 = (long *)operator_new(0x20);
  puVar1 = PTR_vtable_00b011b0;
  plVar2[2] = 0;
  plVar2[3] = param_2;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[1] = 0;
  param_1[1] = (long)plVar2;
  return 1;
}


// ===== 009ef9f8  cxxbridge1$shared_ptr$jsi_sys$ffi$RustNativeStateHolder$clone =====

void cxxbridge1_shared_ptr_jsi_sys_ffi_RustNativeStateHolder_clone
               (undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    FUN_00ab1cb0(1,lVar1 + 8);
  }
  return;
}


// ===== 009efa20  cxxbridge1$shared_ptr$jsi_sys$ffi$RustNativeStateHolder$get =====

undefined8 cxxbridge1_shared_ptr_jsi_sys_ffi_RustNativeStateHolder_get(undefined8 *param_1)

{
  return *param_1;
}


// ===== 009efa28  cxxbridge1$shared_ptr$jsi_sys$ffi$RustNativeStateHolder$drop =====

void cxxbridge1_shared_ptr_jsi_sys_ffi_RustNativeStateHolder_drop(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00ab1ce0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 009efa78  cxxbridge1$shared_ptr$facebook$jsi$Buffer$null =====

void cxxbridge1_shared_ptr_facebook_jsi_Buffer_null(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 009efa80  cxxbridge1$shared_ptr$facebook$jsi$Buffer$raw =====

undefined8 cxxbridge1_shared_ptr_facebook_jsi_Buffer_raw(long *param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  
  *param_1 = param_2;
                    /* try { // try from 009efa98 to 009efa9f has its CatchHandler @ 009efacc */
  plVar2 = (long *)operator_new(0x20);
  puVar1 = PTR_vtable_00b011b8;
  plVar2[2] = 0;
  plVar2[3] = param_2;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[1] = 0;
  param_1[1] = (long)plVar2;
  return 1;
}


// ===== 009efaec  cxxbridge1$shared_ptr$facebook$jsi$Buffer$clone =====

void cxxbridge1_shared_ptr_facebook_jsi_Buffer_clone(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    FUN_00ab1cb0(1,lVar1 + 8);
  }
  return;
}


// ===== 009efb14  cxxbridge1$shared_ptr$facebook$jsi$Buffer$get =====

undefined8 cxxbridge1_shared_ptr_facebook_jsi_Buffer_get(undefined8 *param_1)

{
  return *param_1;
}


// ===== 009efb1c  cxxbridge1$shared_ptr$facebook$jsi$Buffer$drop =====

void cxxbridge1_shared_ptr_facebook_jsi_Buffer_drop(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00ab1ce0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 009efb6c  cxxbridge1$unique_ptr$facebook$jsi$Object$null =====

void cxxbridge1_unique_ptr_facebook_jsi_Object_null(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}


// ===== 009efb74  cxxbridge1$unique_ptr$facebook$jsi$Object$raw =====

void cxxbridge1_unique_ptr_facebook_jsi_Object_raw(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}


// ===== 009efb7c  cxxbridge1$unique_ptr$facebook$jsi$Object$get =====

undefined8 cxxbridge1_unique_ptr_facebook_jsi_Object_get(undefined8 *param_1)

{
  return *param_1;
}


// ===== 009efb84  cxxbridge1$unique_ptr$facebook$jsi$Object$release =====

undefined8 cxxbridge1_unique_ptr_facebook_jsi_Object_release(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = 0;
  return uVar1;
}


// ===== 009efb94  cxxbridge1$unique_ptr$facebook$jsi$Object$drop =====

void cxxbridge1_unique_ptr_facebook_jsi_Object_drop(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  *param_1 = 0;
  if (plVar1 != (long *)0x0) {
    if ((undefined8 *)*plVar1 != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)*plVar1)();
    }
    operator_delete(plVar1);
    return;
  }
  return;
}


// ===== 009efbdc  cxxbridge1$unique_ptr$facebook$jsi$Value$null =====

void cxxbridge1_unique_ptr_facebook_jsi_Value_null(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}


// ===== 009efbe4  cxxbridge1$unique_ptr$facebook$jsi$Value$raw =====

void cxxbridge1_unique_ptr_facebook_jsi_Value_raw(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}


// ===== 009efbec  cxxbridge1$unique_ptr$facebook$jsi$Value$get =====

undefined8 cxxbridge1_unique_ptr_facebook_jsi_Value_get(undefined8 *param_1)

{
  return *param_1;
}


// ===== 009efbf4  cxxbridge1$unique_ptr$facebook$jsi$Value$release =====

undefined8 cxxbridge1_unique_ptr_facebook_jsi_Value_release(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = 0;
  return uVar1;
}


// ===== 009efc04  cxxbridge1$unique_ptr$facebook$jsi$Value$drop =====

void cxxbridge1_unique_ptr_facebook_jsi_Value_drop(undefined8 *param_1)

{
  Value *this;
  
  this = (Value *)*param_1;
  *param_1 = 0;
  if (this != (Value *)0x0) {
    facebook::jsi::Value::~Value(this);
    operator_delete(this);
    return;
  }
  return;
}


// ===== 009efc40  cxxbridge1$unique_ptr$facebook$jsi$String$null =====

void cxxbridge1_unique_ptr_facebook_jsi_String_null(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}


// ===== 009efc48  cxxbridge1$unique_ptr$facebook$jsi$String$raw =====

void cxxbridge1_unique_ptr_facebook_jsi_String_raw(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}


// ===== 009efc50  cxxbridge1$unique_ptr$facebook$jsi$String$get =====

undefined8 cxxbridge1_unique_ptr_facebook_jsi_String_get(undefined8 *param_1)

{
  return *param_1;
}


// ===== 009efc58  cxxbridge1$unique_ptr$facebook$jsi$String$release =====

undefined8 cxxbridge1_unique_ptr_facebook_jsi_String_release(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = 0;
  return uVar1;
}


// ===== 009efc68  cxxbridge1$unique_ptr$facebook$jsi$String$drop =====

void cxxbridge1_unique_ptr_facebook_jsi_String_drop(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  *param_1 = 0;
  if (plVar1 != (long *)0x0) {
    if ((undefined8 *)*plVar1 != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)*plVar1)();
    }
    operator_delete(plVar1);
    return;
  }
  return;
}


// ===== 009efcb0  cxxbridge1$unique_ptr$facebook$jsi$PropNameID$null =====

void cxxbridge1_unique_ptr_facebook_jsi_PropNameID_null(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}


// ===== 009efcb8  cxxbridge1$unique_ptr$facebook$jsi$PropNameID$raw =====

void cxxbridge1_unique_ptr_facebook_jsi_PropNameID_raw(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}


// ===== 009efcc0  cxxbridge1$unique_ptr$facebook$jsi$PropNameID$get =====

undefined8 cxxbridge1_unique_ptr_facebook_jsi_PropNameID_get(undefined8 *param_1)

{
  return *param_1;
}


// ===== 009efcc8  cxxbridge1$unique_ptr$facebook$jsi$PropNameID$release =====

undefined8 cxxbridge1_unique_ptr_facebook_jsi_PropNameID_release(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = 0;
  return uVar1;
}


// ===== 009efcd8  cxxbridge1$unique_ptr$facebook$jsi$PropNameID$drop =====

void cxxbridge1_unique_ptr_facebook_jsi_PropNameID_drop(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  *param_1 = 0;
  if (plVar1 != (long *)0x0) {
    if ((undefined8 *)*plVar1 != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)*plVar1)();
    }
    operator_delete(plVar1);
    return;
  }
  return;
}


// ===== 009efd20  cxxbridge1$unique_ptr$facebook$jsi$Array$null =====

void cxxbridge1_unique_ptr_facebook_jsi_Array_null(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}


// ===== 009efd28  cxxbridge1$unique_ptr$facebook$jsi$Array$raw =====

void cxxbridge1_unique_ptr_facebook_jsi_Array_raw(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}


// ===== 009efd30  cxxbridge1$unique_ptr$facebook$jsi$Array$get =====

undefined8 cxxbridge1_unique_ptr_facebook_jsi_Array_get(undefined8 *param_1)

{
  return *param_1;
}


// ===== 009efd38  cxxbridge1$unique_ptr$facebook$jsi$Array$release =====

undefined8 cxxbridge1_unique_ptr_facebook_jsi_Array_release(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = 0;
  return uVar1;
}


// ===== 009efd48  cxxbridge1$unique_ptr$facebook$jsi$Array$drop =====

void cxxbridge1_unique_ptr_facebook_jsi_Array_drop(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  *param_1 = 0;
  if (plVar1 != (long *)0x0) {
    if ((undefined8 *)*plVar1 != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)*plVar1)();
    }
    operator_delete(plVar1);
    return;
  }
  return;
}


// ===== 009efd90  cxxbridge1$unique_ptr$facebook$jsi$BigInt$null =====

void cxxbridge1_unique_ptr_facebook_jsi_BigInt_null(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}


// ===== 009efd98  cxxbridge1$unique_ptr$facebook$jsi$BigInt$raw =====

void cxxbridge1_unique_ptr_facebook_jsi_BigInt_raw(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}


// ===== 009efda0  cxxbridge1$unique_ptr$facebook$jsi$BigInt$get =====

undefined8 cxxbridge1_unique_ptr_facebook_jsi_BigInt_get(undefined8 *param_1)

{
  return *param_1;
}


// ===== 009efda8  cxxbridge1$unique_ptr$facebook$jsi$BigInt$release =====

undefined8 cxxbridge1_unique_ptr_facebook_jsi_BigInt_release(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = 0;
  return uVar1;
}


// ===== 009efdb8  cxxbridge1$unique_ptr$facebook$jsi$BigInt$drop =====

void cxxbridge1_unique_ptr_facebook_jsi_BigInt_drop(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  *param_1 = 0;
  if (plVar1 != (long *)0x0) {
    if ((undefined8 *)*plVar1 != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)*plVar1)();
    }
    operator_delete(plVar1);
    return;
  }
  return;
}


// ===== 009efe00  cxxbridge1$unique_ptr$facebook$jsi$Symbol$null =====

void cxxbridge1_unique_ptr_facebook_jsi_Symbol_null(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}


// ===== 009efe08  cxxbridge1$unique_ptr$facebook$jsi$Symbol$raw =====

void cxxbridge1_unique_ptr_facebook_jsi_Symbol_raw(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}


// ===== 009efe10  cxxbridge1$unique_ptr$facebook$jsi$Symbol$get =====

undefined8 cxxbridge1_unique_ptr_facebook_jsi_Symbol_get(undefined8 *param_1)

{
  return *param_1;
}


// ===== 009efe18  cxxbridge1$unique_ptr$facebook$jsi$Symbol$release =====

undefined8 cxxbridge1_unique_ptr_facebook_jsi_Symbol_release(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = 0;
  return uVar1;
}


// ===== 009efe28  cxxbridge1$unique_ptr$facebook$jsi$Symbol$drop =====

void cxxbridge1_unique_ptr_facebook_jsi_Symbol_drop(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  *param_1 = 0;
  if (plVar1 != (long *)0x0) {
    if ((undefined8 *)*plVar1 != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)*plVar1)();
    }
    operator_delete(plVar1);
    return;
  }
  return;
}


// ===== 009efe70  std::__ndk1::__shared_ptr_pointer<jsi_sys::ffi::RustNativeStateHolder*,std::__ndk1::shared_ptr<jsi_sys::ffi::RustNativeStateHolder>::__shared_ptr_default_delete<jsi_sys::ffi::RustNativeStateHolder,jsi_sys::ffi::RustNativeStateHolder>,std::__ndk1::allocator<jsi_sys::ffi::RustNativeStateHolder>>::~__shared_ptr_pointer =====

/* std::__ndk1::__shared_ptr_pointer<jsi_sys::ffi::RustNativeStateHolder*,
   std::__ndk1::shared_ptr<jsi_sys::ffi::RustNativeStateHolder>::__shared_ptr_default_delete<jsi_sys::ffi::RustNativeStateHolder,
   jsi_sys::ffi::RustNativeStateHolder>, std::__ndk1::allocator<jsi_sys::ffi::RustNativeStateHolder>
   >::~__shared_ptr_pointer() */

void __thiscall
std::__ndk1::
__shared_ptr_pointer<jsi_sys::ffi::RustNativeStateHolder*,std::__ndk1::shared_ptr<jsi_sys::ffi::RustNativeStateHolder>::__shared_ptr_default_delete<jsi_sys::ffi::RustNativeStateHolder,jsi_sys::ffi::RustNativeStateHolder>,std::__ndk1::allocator<jsi_sys::ffi::RustNativeStateHolder>>
::~__shared_ptr_pointer
          (__shared_ptr_pointer<jsi_sys::ffi::RustNativeStateHolder*,std::__ndk1::shared_ptr<jsi_sys::ffi::RustNativeStateHolder>::__shared_ptr_default_delete<jsi_sys::ffi::RustNativeStateHolder,jsi_sys::ffi::RustNativeStateHolder>,std::__ndk1::allocator<jsi_sys::ffi::RustNativeStateHolder>>
           *this)

{
  std::__ndk1::__shared_weak_count::~__shared_weak_count((__shared_weak_count *)this);
  operator_delete(this);
  return;
}


// ===== 009efe94  FUN_009efe94 =====

void FUN_009efe94(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x009efea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}


// ===== 009efeac  FUN_009efeac =====

long FUN_009efeac(long param_1,long param_2)

{
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00b011c0) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 009efec8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00b014c8)();
  return;
}


// ===== 009efecc  std::__ndk1::__shared_ptr_pointer<facebook::jsi::Buffer*,std::__ndk1::shared_ptr<facebook::jsi::Buffer>::__shared_ptr_default_delete<facebook::jsi::Buffer,facebook::jsi::Buffer>,std::__ndk1::allocator<facebook::jsi::Buffer>>::~__shared_ptr_pointer =====

/* std::__ndk1::__shared_ptr_pointer<facebook::jsi::Buffer*,
   std::__ndk1::shared_ptr<facebook::jsi::Buffer>::__shared_ptr_default_delete<facebook::jsi::Buffer,
   facebook::jsi::Buffer>, std::__ndk1::allocator<facebook::jsi::Buffer> >::~__shared_ptr_pointer()
    */

void __thiscall
std::__ndk1::
__shared_ptr_pointer<facebook::jsi::Buffer*,std::__ndk1::shared_ptr<facebook::jsi::Buffer>::__shared_ptr_default_delete<facebook::jsi::Buffer,facebook::jsi::Buffer>,std::__ndk1::allocator<facebook::jsi::Buffer>>
::~__shared_ptr_pointer
          (__shared_ptr_pointer<facebook::jsi::Buffer*,std::__ndk1::shared_ptr<facebook::jsi::Buffer>::__shared_ptr_default_delete<facebook::jsi::Buffer,facebook::jsi::Buffer>,std::__ndk1::allocator<facebook::jsi::Buffer>>
           *this)

{
  std::__ndk1::__shared_weak_count::~__shared_weak_count((__shared_weak_count *)this);
  operator_delete(this);
  return;
}


// ===== 009efef0  FUN_009efef0 =====

void FUN_009efef0(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x009eff00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}


// ===== 009eff08  FUN_009eff08 =====

long FUN_009eff08(long param_1,long param_2)

{
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00b011c8) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 009eff24  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00b014c8)();
  return;
}


// ===== 009eff28  jsi_sys::ffi::BoxDynRustHostFunction::~BoxDynRustHostFunction =====

/* jsi_sys::ffi::BoxDynRustHostFunction::~BoxDynRustHostFunction() */

void __thiscall
jsi_sys::ffi::BoxDynRustHostFunction::~BoxDynRustHostFunction(BoxDynRustHostFunction *this)

{
  if (*(long *)this != 0 || *(long *)(this + 8) != 0) {
    dyn_rust_host_function_drop_in_place();
    return;
  }
  return;
}


// ===== 009eff44  jsi_sys::ffi::Function_createFromHostFunction =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Function_createFromHostFunction */

void __rustcall
jsi_sys::ffi::Function_createFromHostFunction
          (undefined8 *param_1,long *param_2,undefined8 param_3,undefined4 param_4,long *param_5)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long local_c0;
  long lStack_b8;
  long local_b0 [4];
  long *local_90;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60 [4];
  long *local_40;
  
  lStack_b8 = param_5[1];
  local_c0 = *param_5;
  *param_5 = 0;
  param_5[1] = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_90 = (long *)0x0;
                    /* try { // try from 009eff80 to 009eff87 has its CatchHandler @ 009f00f8 */
  local_40 = (long *)operator_new(0x18);
  lVar2 = lStack_b8;
  lVar5 = local_c0;
  local_c0 = 0;
  lStack_b8 = 0;
  puVar1 = PTR_vtable_00b011d0 + 0x10;
  local_40[2] = lVar2;
  local_40[1] = lVar5;
  *local_40 = (long)puVar1;
  local_90 = (long *)0x0;
                    /* try { // try from 009effb4 to 009effcf has its CatchHandler @ 009f0090 */
  (**(code **)(*param_2 + 0x278))(&local_78,param_2,param_3,param_4,local_60);
  if (local_40 == local_60) {
    lVar5 = 4;
    plVar3 = local_60;
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_009f002c;
    lVar5 = 5;
    plVar3 = local_40;
  }
  (**(code **)(*plVar3 + lVar5 * 8))();
  if (local_90 == local_b0) {
    lVar5 = 4;
    plVar3 = local_b0;
  }
  else {
    if (local_90 == (long *)0x0) goto LAB_009f002c;
    lVar5 = 5;
    plVar3 = local_90;
  }
  (**(code **)(*plVar3 + lVar5 * 8))();
LAB_009f002c:
  BoxDynRustHostFunction::~BoxDynRustHostFunction((BoxDynRustHostFunction *)&local_c0);
                    /* try { // try from 009f0034 to 009f003b has its CatchHandler @ 009f0064 */
  puVar4 = (undefined8 *)operator_new(8);
  *param_1 = puVar4;
  *puVar4 = local_78;
  BoxDynRustHostFunction::~BoxDynRustHostFunction((BoxDynRustHostFunction *)&local_70);
  return;
}


// ===== 009f0114  std::__ndk1::__function::__func<jsi_sys::ffi::CrashOnCopyHostFn,std::__ndk1::allocator<jsi_sys::ffi::CrashOnCopyHostFn>,facebook::jsi::Value(facebook::jsi::Runtime&,facebook::jsi::Value_const&,facebook::jsi::Value_const*,unsigned_long)>::~__func =====

/* std::__ndk1::__function::__func<jsi_sys::ffi::CrashOnCopyHostFn,
   std::__ndk1::allocator<jsi_sys::ffi::CrashOnCopyHostFn>, facebook::jsi::Value
   (facebook::jsi::Runtime&, facebook::jsi::Value const&, facebook::jsi::Value const*, unsigned
   long)>::~__func() */

void __thiscall
std::__ndk1::__function::
__func<jsi_sys::ffi::CrashOnCopyHostFn,std::__ndk1::allocator<jsi_sys::ffi::CrashOnCopyHostFn>,facebook::jsi::Value(facebook::jsi::Runtime&,facebook::jsi::Value_const&,facebook::jsi::Value_const*,unsigned_long)>
::~__func(__func<jsi_sys::ffi::CrashOnCopyHostFn,std::__ndk1::allocator<jsi_sys::ffi::CrashOnCopyHostFn>,facebook::jsi::Value(facebook::jsi::Runtime&,facebook::jsi::Value_const&,facebook::jsi::Value_const*,unsigned_long)>
          *this)

{
  *(undefined **)this = PTR_vtable_00b011d0 + 0x10;
  jsi_sys::ffi::BoxDynRustHostFunction::~BoxDynRustHostFunction
            ((BoxDynRustHostFunction *)(this + 8));
  return;
}


// ===== 009f0128  std::__ndk1::__function::__func<jsi_sys::ffi::CrashOnCopyHostFn,std::__ndk1::allocator<jsi_sys::ffi::CrashOnCopyHostFn>,facebook::jsi::Value(facebook::jsi::Runtime&,facebook::jsi::Value_const&,facebook::jsi::Value_const*,unsigned_long)>::~__func =====

/* std::__ndk1::__function::__func<jsi_sys::ffi::CrashOnCopyHostFn,
   std::__ndk1::allocator<jsi_sys::ffi::CrashOnCopyHostFn>, facebook::jsi::Value
   (facebook::jsi::Runtime&, facebook::jsi::Value const&, facebook::jsi::Value const*, unsigned
   long)>::~__func() */

void __thiscall
std::__ndk1::__function::
__func<jsi_sys::ffi::CrashOnCopyHostFn,std::__ndk1::allocator<jsi_sys::ffi::CrashOnCopyHostFn>,facebook::jsi::Value(facebook::jsi::Runtime&,facebook::jsi::Value_const&,facebook::jsi::Value_const*,unsigned_long)>
::~__func(__func<jsi_sys::ffi::CrashOnCopyHostFn,std::__ndk1::allocator<jsi_sys::ffi::CrashOnCopyHostFn>,facebook::jsi::Value(facebook::jsi::Runtime&,facebook::jsi::Value_const&,facebook::jsi::Value_const*,unsigned_long)>
          *this)

{
  *(undefined **)this = PTR_vtable_00b011d0 + 0x10;
  jsi_sys::ffi::BoxDynRustHostFunction::~BoxDynRustHostFunction
            ((BoxDynRustHostFunction *)(this + 8));
  operator_delete(this);
  return;
}


// ===== 009f015c  FUN_009f015c =====

void FUN_009f015c(void)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = (long *)operator_new(0x18);
  puVar1 = PTR_vtable_00b011d0;
  plVar2[1] = 0;
  plVar2[2] = 0;
  *plVar2 = (long)(puVar1 + 0x10);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 009f0194 to 009f0197 has its CatchHandler @ 009f0198 */
  abort();
}


// ===== 009f01b4  FUN_009f01b4 =====

void FUN_009f01b4(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_00b011d0;
  param_2[2] = 0;
  param_2[1] = 0;
  *param_2 = (long)(puVar1 + 0x10);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 009f01dc to 009f01df has its CatchHandler @ 009f01e0 */
  abort();
}


// ===== 009f01f4  FUN_009f01f4 =====

void FUN_009f01f4(long param_1)

{
  jsi_sys::ffi::BoxDynRustHostFunction::~BoxDynRustHostFunction
            ((BoxDynRustHostFunction *)(param_1 + 8));
  return;
}


// ===== 009f01fc  FUN_009f01fc =====

void FUN_009f01fc(void *param_1)

{
  jsi_sys::ffi::BoxDynRustHostFunction::~BoxDynRustHostFunction
            ((BoxDynRustHostFunction *)((long)param_1 + 8));
  operator_delete(param_1);
  return;
}


// ===== 009f0224  FUN_009f0224 =====

void FUN_009f0224(Value *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,undefined4 *param_6)

{
  Value *this;
  Value *local_8;
  
  jsi_sys::ffi::call_rust_host_function(&local_8,param_2 + 8,param_3,param_4,*param_5,*param_6,0x10)
  ;
  facebook::jsi::Value::Value(param_1,local_8);
  this = local_8;
  local_8 = (Value *)0x0;
  if (this != (Value *)0x0) {
    facebook::jsi::Value::~Value(this);
    operator_delete(this);
  }
  return;
}


// ===== 009f0280  FUN_009f0280 =====

long FUN_009f0280(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00b011d8) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 009f029c  FUN_009f029c =====

undefined * FUN_009f029c(void)

{
  return PTR_typeinfo_00b011e0;
}


// ===== 009f02a8  jsi_sys::ffi::BoxDynRustNativeState::BoxDynRustNativeState =====

/* jsi_sys::ffi::BoxDynRustNativeState::BoxDynRustNativeState(jsi_sys::ffi::BoxDynRustNativeState&&)
    */

void __thiscall
jsi_sys::ffi::BoxDynRustNativeState::BoxDynRustNativeState
          (BoxDynRustNativeState *this,BoxDynRustNativeState *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = uVar1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}


// ===== 009f02b8  jsi_sys::ffi::BoxDynRustNativeState::~BoxDynRustNativeState =====

/* jsi_sys::ffi::BoxDynRustNativeState::~BoxDynRustNativeState() */

void __thiscall
jsi_sys::ffi::BoxDynRustNativeState::~BoxDynRustNativeState(BoxDynRustNativeState *this)

{
  if (*(long *)this != 0 || *(long *)(this + 8) != 0) {
    dyn_rust_native_state_drop_in_place();
    return;
  }
  return;
}


// ===== 009f02d4  jsi_sys::ffi::create_rust_native_state_holder =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::create_rust_native_state_holder */

void __rustcall
jsi_sys::ffi::create_rust_native_state_holder(undefined8 *param_1,BoxDynRustNativeState *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  plVar3 = (long *)operator_new(0x30);
  puVar2 = PTR_vtable_00b011f0;
  puVar1 = PTR_vtable_00b011e8;
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = (long)(puVar1 + 0x10);
  plVar3[3] = (long)(puVar2 + 0x10);
  BoxDynRustNativeState::BoxDynRustNativeState((BoxDynRustNativeState *)(plVar3 + 4),param_2);
  *param_1 = plVar3 + 3;
  param_1[1] = plVar3;
  return;
}


// ===== 009f033c  jsi_sys::ffi::Object_setNativeState =====

/* WARNING: Unknown calling convention: __rustcall */
/* jsi_sys::ffi::Object_setNativeState */

void __rustcall
jsi_sys::ffi::Object_setNativeState
          (long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 local_50;
  long *local_48;
  
  local_50 = *param_3;
  plVar1 = (long *)param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  local_48 = plVar1;
  if (plVar1 != (long *)0x0) {
    FUN_00ab1cb0(1,plVar1 + 1);
  }
                    /* try { // try from 009f0384 to 009f0393 has its CatchHandler @ 009f0424 */
  (**(code **)(*param_1 + 0x168))(param_1,param_2,&local_50);
  plVar2 = local_48;
  if ((local_48 != (long *)0x0) &&
     (lVar3 = FUN_00ab1ce0(0xffffffffffffffff,local_48 + 1), lVar3 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if ((plVar1 != (long *)0x0) && (lVar3 = FUN_00ab1ce0(0xffffffffffffffff,plVar1 + 1), lVar3 == 0))
  {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 009f03f8 to 009f0407 has its CatchHandler @ 009f0420 */
  (**(code **)(*param_1 + 0x2c8))(param_1,param_2,param_4);
  return;
}


// ===== 009f0438  FUN_009f0438 =====

void FUN_009f0438(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00ab1ce0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


